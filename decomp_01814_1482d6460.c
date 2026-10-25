// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1482d6460 FUN_1482d6460 body=894 status=ok
// SIG undefined FUN_1482d6460(void)

undefined8 * FUN_1482d6460(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  uint *puVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong *plVar5;
  uint uVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint *puVar9;
  longlong lVar10;
  undefined1 auStack_98 [40];
  undefined8 *local_70;
  uint local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = &PTR_FUN_14ae72b88;
  FUN_1482d67e0(param_1 + 1);
  param_1[0x49] = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  param_1[0x4b] = &PTR_FUN_14ae72d00;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0;
  FUN_1482fe00a(param_1 + 0x4f);
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  FUN_141224904(param_1 + 0x52);
  FUN_141040b84(param_1 + 0x55);
  *(undefined4 *)(param_1 + 0x58) = 0;
  param_1[0x5d] = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2f4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2fc) = 0;
  param_1[0x61] = 0;
  *(undefined4 *)(param_1 + 0x62) = 0;
  FUN_1482d686e(param_1 + 99);
  param_1[0x66] = 0;
  *(undefined4 *)(param_1 + 0x67) = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  if ((longlong)*(int *)(param_3 + 1) != 0) {
    puVar7 = param_1 + 0x4b;
    puVar9 = (uint *)*param_3;
    lVar10 = (longlong)*(int *)(param_3 + 1) << 3;
    do {
      local_64 = *puVar9;
      if (((-1 < (int)local_64) &&
          ((int)local_64 < *(int *)(param_1 + 0x2c) * 0x200 + *(int *)((longlong)param_1 + 0x164)))
         && ((ushort)(*(short *)(*(longlong *)(param_1[0x2d] + (ulonglong)(local_64 >> 9) * 8) +
                                (ulonglong)(local_64 & 0x1ff) * 2) - 1U) < 0xfffe)) {
        uVar4 = 0xffffffff;
        if (param_1[0x4d] == 0) {
          uVar6 = 0xffffffff;
LAB_1482d6601:
          uVar8 = 0xffffffff;
        }
        else {
          uVar6 = *(uint *)(param_1[0x4d] + 8);
          if (((int)uVar6 < 0) ||
             (*(int *)(param_1 + 0x52) * 0x200 + *(int *)((longlong)param_1 + 0x294) <= (int)uVar6))
          goto LAB_1482d6601;
          if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                            (param_1[0x53] + (ulonglong)(uVar6 >> 9) * 8) +
                                          (ulonglong)(uVar6 & 0x1ff) * 2) - 1U)) goto LAB_1482d6601;
          puVar2 = *(uint **)(*(longlong *)(param_1[0x50] + (ulonglong)(uVar6 >> 9) * 8) +
                             (ulonglong)(uVar6 & 0x1ff) * 8);
          uVar4 = *puVar2;
          uVar8 = puVar2[1];
        }
        if ((uVar4 == local_64) && (uVar8 != puVar9[1])) {
          FUN_1482d6314(puVar7,uVar6);
        }
        else {
          local_70 = puVar7;
          uVar3 = FUN_1482d6106(puVar7,puVar9);
          plVar5 = (longlong *)FUN_140147222(param_1 + 0x59,local_64,&local_64);
          iVar1 = (int)plVar5[1];
          *(uint *)(plVar5 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)plVar5 + 0xc) < iVar1 + 1U) {
            FUN_1446f48e2(plVar5,iVar1);
          }
          *(undefined4 *)(*plVar5 + (longlong)iVar1 * 4) = uVar3;
          FUN_1482d68e8(param_1,uVar3);
          puVar7 = local_70;
        }
      }
      puVar9 = puVar9 + 2;
      lVar10 = lVar10 + -8;
    } while (lVar10 != 0);
  }
  if (*(int *)(param_1 + 0x4e) != 0) {
    uVar4 = *(int *)(param_1 + 0x52) * 0x200 + *(int *)((longlong)param_1 + 0x294);
    if (param_1[0x4c] == 0) {
      uVar6 = 0xffffffff;
    }
    else {
      uVar6 = *(uint *)(param_1[0x4c] + 8);
    }
    if ((int)uVar6 < (int)uVar4) {
      do {
        if (-1 < (int)uVar6) {
          if ((ushort)(*(short *)(*(longlong *)(param_1[0x53] + (ulonglong)(uVar6 >> 9) * 8) +
                                 (ulonglong)(uVar6 & 0x1ff) * 2) - 1U) < 0xfffe) {
            uVar8 = **(uint **)(*(longlong *)(param_1[0x50] + (ulonglong)(uVar6 >> 9) * 8) +
                               (ulonglong)(uVar6 & 0x1ff) * 8);
            param_1[0x49] =
                 *(double *)
                  (*(longlong *)(param_1[0x34] + (ulonglong)(uVar8 >> 9) * 8) +
                  (ulonglong)(uVar8 & 0x1ff) * 8) + (double)param_1[0x49];
          }
        }
        uVar6 = uVar6 + 1;
      } while (uVar4 != uVar6);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1482d67e0 FUN_1482d67e0 body=141 status=ok
// SIG undefined FUN_1482d67e0(void)

longlong FUN_1482d67e0(longlong param_1,undefined8 param_2)

{
  FUN_1482e4812();
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  FUN_141040b84(param_1 + 0x1f0);
  FUN_146bff58a(param_1 + 0x208);
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x238) = 0;
  FUN_1482e3518(param_1,param_2);
  FUN_1482e1b12(param_1 + 0x1c0,param_2);
  FUN_1482e1ed4(param_1 + 0x1c0,param_2);
  return param_1;
}



// FUNCTION 1482d686e FUN_1482d686e body=121 status=ok
// SIG undefined FUN_1482d686e(void)

undefined8 * FUN_1482d686e(undefined8 *param_1)

{
  void *_Dst;
  longlong lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  _Dst = (void *)FUN_14001cc68(0x1800);
  memset(_Dst,0,0x1800);
  lVar1 = 8;
  do {
    *(undefined4 *)((longlong)_Dst + lVar1 + -8) = 0xffffffff;
    *(undefined4 *)((longlong)_Dst + lVar1) = 0xffffffff;
    lVar1 = lVar1 + 0xc;
  } while (lVar1 != 0x1808);
  *(undefined4 *)(param_1 + 2) = 1;
  FUN_14830732a(param_1 + 1,0);
  *(void **)param_1[1] = _Dst;
  return param_1;
}



// FUNCTION 1482d68e8 FUN_1482d68e8 body=737 status=ok
// SIG undefined FUN_1482d68e8(void)

void FUN_1482d68e8(ulonglong param_1,ulonglong param_2)

{
  longlong lVar1;
  double dVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auStack_b8 [32];
  ulonglong *local_98;
  char local_8d;
  undefined4 local_8c;
  ulonglong local_88;
  undefined8 *local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar6 = FUN_1482d6056(param_1 + 600);
  if (uVar6 != 0xffffffff) {
    uVar7 = FUN_1482d7b16(param_1,uVar6);
    uVar13 = 0xffffffff;
    uVar12 = 0xffffffff;
    if ((-1 < (int)uVar6) &&
       ((int)uVar6 < *(int *)(param_1 + 0x290) * 0x200 + *(int *)(param_1 + 0x294))) {
      if ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)(param_1 + 0x298) + (ulonglong)(uVar6 >> 9) * 8) +
                             (ulonglong)(uVar6 & 0x1ff) * 2) - 1U) < 0xfffe) {
        uVar12 = **(undefined4 **)
                   (*(longlong *)(*(longlong *)(param_1 + 0x280) + (ulonglong)(uVar6 >> 9) * 8) +
                   (ulonglong)(uVar6 & 0x1ff) * 8);
      }
    }
    uVar6 = (uint)param_2;
    if ((-1 < (int)uVar6) &&
       ((int)uVar6 < *(int *)(param_1 + 0x290) * 0x200 + *(int *)(param_1 + 0x294))) {
      uVar10 = param_2 >> 9 & 0x7fffff;
      if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(param_1 + 0x298) + uVar10 * 8) +
                             (ulonglong)(uVar6 & 0x1ff) * 2) - 1U) < 0xfffe) {
        uVar13 = **(undefined4 **)
                   (*(longlong *)(*(longlong *)(param_1 + 0x280) + uVar10 * 8) +
                   (ulonglong)(uVar6 & 0x1ff) * 8);
      }
    }
    local_80 = &local_78;
    local_78 = 0;
    local_98 = &local_88;
    local_8c = uVar7;
    local_88 = param_1;
    local_8d = FUN_143afecc4(param_1 + 8,uVar13,uVar12,uVar7);
    uVar11 = (undefined4)local_78;
    uVar10 = (ulonglong)local_78 >> 0x20;
    local_78 = 0;
    local_98 = &local_88;
    cVar5 = FUN_143afecc4(param_1 + 8,uVar12,uVar13,uVar7);
    uVar13 = 0xffffffff;
    uVar7 = 0x7fefffff;
    uVar12 = (int)uVar10;
    if (local_8d == '\0') {
      uVar11 = uVar13;
      uVar12 = uVar7;
    }
    if (cVar5 != '\0') {
      uVar13 = (undefined4)local_78;
      uVar7 = (undefined4)((ulonglong)local_78 >> 0x20);
    }
    local_88 = (ulonglong)
               CONCAT14((double)CONCAT44(uVar7,uVar13) < (double)CONCAT44(uVar12,uVar11) ||
                        (double)CONCAT44(uVar7,uVar13) == (double)CONCAT44(uVar12,uVar11),uVar6);
    local_80 = (undefined8 *)CONCAT44(local_80._4_4_,local_8c);
    FUN_1482d7bce(param_1 + 0x318,&local_88,param_2 & 0xffffffff);
    if ((double)CONCAT44(uVar7,uVar13) <= (double)CONCAT44(uVar12,uVar11)) {
      uVar11 = uVar13;
      uVar12 = uVar7;
    }
    lVar1 = param_1 + 0x330;
    uVar8 = *(uint *)(param_1 + 0x338);
    param_2 = param_2 & 0xffffffff;
    if ((uVar6 < uVar8) && (*(int *)(*(longlong *)(param_1 + 0x350) + param_2 * 4) != -1)) {
      *(ulonglong *)(*(longlong *)(param_1 + 0x348) + param_2 * 8) = CONCAT44(uVar12,uVar11);
      iVar3 = *(int *)(*(longlong *)(param_1 + 0x350) + param_2 * 4);
      if ((iVar3 == 0) ||
         (dVar2 = *(double *)
                   (*(longlong *)(param_1 + 0x348) +
                   (ulonglong)
                   *(uint *)(*(longlong *)(param_1 + 0x340) + (ulonglong)(iVar3 - 1U >> 1) * 4) * 8)
         , dVar2 < (double)CONCAT44(uVar12,uVar11) || dVar2 == (double)CONCAT44(uVar12,uVar11))) {
        FUN_1483073b0(lVar1);
        goto LAB_1482d6929;
      }
    }
    else {
      if (*(int *)(param_1 + 0x330) == *(int *)(param_1 + 0x334)) {
        uVar8 = *(int *)(param_1 + 0x330) * 2;
        uVar9 = 0x20;
        if (0x20 < uVar8) {
          uVar9 = uVar8;
        }
        FUN_148307798(lVar1,uVar9);
        uVar8 = *(uint *)(param_1 + 0x338);
      }
      if (uVar8 <= uVar6) {
        uVar10 = (ulonglong)(uVar6 + (uVar6 == 0xffffffff)) * 2 + 1;
        lVar4 = 0x3f;
        if (uVar10 != 0) {
          for (; uVar10 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        uVar9 = 1 << ((byte)lVar4 & 0x1f);
        uVar8 = 0x20;
        if (0x20 < uVar9) {
          uVar8 = uVar9;
        }
        FUN_1483077f8(lVar1,uVar8);
      }
      uVar8 = *(uint *)(param_1 + 0x330);
      *(uint *)(param_1 + 0x330) = uVar8 + 1;
      *(uint *)(*(longlong *)(param_1 + 0x340) + (ulonglong)uVar8 * 4) = uVar6;
      *(ulonglong *)(*(longlong *)(param_1 + 0x348) + param_2 * 8) = CONCAT44(uVar12,uVar11);
      *(uint *)(*(longlong *)(param_1 + 0x350) + param_2 * 4) = uVar8;
    }
    FUN_148307714(lVar1);
  }
LAB_1482d6929:
  if ((local_70 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482d6bca FUN_1482d6bca body=322 status=ok
// SIG undefined FUN_1482d6bca(void)

void FUN_1482d6bca(longlong param_1,int *param_2,int param_3)

{
  double dVar1;
  uint uVar2;
  uint *puVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_1 + 0x248);
  iVar5 = *(int *)(param_1 + 0x330);
  iVar6 = 0;
  if (0 < param_3 && iVar5 != 0) {
    iVar6 = 0;
    do {
      puVar3 = *(uint **)(param_1 + 0x340);
      uVar2 = *puVar3;
      dVar1 = *(double *)(*(longlong *)(param_1 + 0x348) + (ulonglong)uVar2 * 8);
      *(uint *)(param_1 + 0x330) = iVar5 - 1U;
      *puVar3 = puVar3[iVar5 - 1U];
      *(undefined4 *)(*(longlong *)(param_1 + 0x350) + (ulonglong)**(uint **)(param_1 + 0x340) * 4)
           = 0;
      *(undefined4 *)(*(longlong *)(param_1 + 0x350) + (ulonglong)uVar2 * 4) = 0xffffffff;
      FUN_1483073b0((int *)(param_1 + 0x330),0);
      if (dVar1 <= 3.1405926535897932) {
        lVar7 = (ulonglong)((uVar2 & 0x1ff) * 0xc) +
                *(longlong *)(*(longlong *)(param_1 + 800) + (ulonglong)(uVar2 >> 9) * 8);
        cVar4 = FUN_1482d6d0c(param_1,lVar7);
        if (cVar4 != '\0') {
          FUN_1482d71c0(param_1,lVar7);
          iVar6 = iVar6 + 1;
        }
      }
      iVar5 = *(int *)(param_1 + 0x330);
    } while (iVar5 != 0 && iVar6 < param_3);
  }
  *param_2 = iVar6;
  param_2[1] = *(int *)(param_1 + 0x250);
  *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_1 + 0x248);
  return;
}



// FUNCTION 1482d6d0c FUN_1482d6d0c body=1203 status=ok
// SIG undefined FUN_1482d6d0c(void)

undefined8 FUN_1482d6d0c(longlong param_1,uint *param_2)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined7 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  undefined8 *puVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_b8 [44];
  int local_8c;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar12 = *param_2;
  uVar3 = FUN_1482d6056(param_1 + 600,uVar12);
  if ((int)(uVar3 | uVar12) < 0) {
    uVar4 = 0;
    goto LAB_1482d7154;
  }
  uVar6 = 0xffffffff;
  uVar7 = 0xffffffff;
  if ((-1 < (int)uVar12) &&
     ((int)uVar12 < *(int *)(param_1 + 0x290) * 0x200 + *(int *)(param_1 + 0x294))) {
    uVar7 = 0xffffffff;
    if ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(param_1 + 0x298) + (ulonglong)(uVar12 >> 9) * 8) +
                           (ulonglong)(uVar12 & 0x1ff) * 2) - 1U) < 0xfffe) {
      uVar7 = **(uint **)(*(longlong *)
                           (*(longlong *)(param_1 + 0x280) + (ulonglong)(uVar12 >> 9) * 8) +
                         (ulonglong)(uVar12 & 0x1ff) * 8);
    }
  }
  if ((-1 < (int)uVar3) &&
     ((int)uVar3 < *(int *)(param_1 + 0x290) * 0x200 + *(int *)(param_1 + 0x294))) {
    if ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(param_1 + 0x298) + (ulonglong)(uVar3 >> 9) * 8) +
                           (ulonglong)(uVar3 & 0x1ff) * 2) - 1U) < 0xfffe) {
      uVar6 = **(uint **)(*(longlong *)
                           (*(longlong *)(param_1 + 0x280) + (ulonglong)(uVar3 >> 9) * 8) +
                         (ulonglong)(uVar3 & 0x1ff) * 8);
    }
  }
  uVar12 = 0;
  uVar5 = 0;
  bVar2 = false;
  if (*(int *)(param_1 + 0x2d0) != *(int *)(param_1 + 0x2fc)) {
    lVar14 = param_1 + 0x300;
    if (*(longlong *)(param_1 + 0x308) != 0) {
      lVar14 = *(longlong *)(param_1 + 0x308);
    }
    uVar3 = *(int *)(param_1 + 0x310) - 1;
    iVar8 = *(int *)(lVar14 + (ulonglong)(uVar3 & uVar7) * 4);
    if (iVar8 != -1) {
      do {
        lVar11 = *(longlong *)(param_1 + 0x2c8) + (longlong)iVar8 * 0x20;
        if (*(uint *)(*(longlong *)(param_1 + 0x2c8) + (longlong)iVar8 * 0x20) == uVar7) {
          if ((lVar11 + 8U & 0xfffffffffffffff7) != 0) {
            bVar2 = 1 < *(int *)(lVar11 + 0x10);
            uVar5 = (undefined7)(lVar11 + 8U >> 8);
            goto LAB_1482d6f3f;
          }
          break;
        }
        iVar8 = *(int *)(lVar11 + 0x18);
      } while (iVar8 != -1);
    }
    bVar2 = false;
    uVar5 = 0;
LAB_1482d6f3f:
    iVar8 = *(int *)(lVar14 + (ulonglong)(uVar3 & uVar6) * 4);
    if (iVar8 != -1) {
      do {
        lVar14 = *(longlong *)(param_1 + 0x2c8) + (longlong)iVar8 * 0x20;
        if (*(uint *)(*(longlong *)(param_1 + 0x2c8) + (longlong)iVar8 * 0x20) == uVar6) {
          if (((lVar14 + 8U & 0xfffffffffffffff7) != 0) && (bVar15 = !bVar2, bVar2 = true, bVar15))
          {
            bVar2 = 1 < *(int *)(lVar14 + 0x10);
          }
          break;
        }
        iVar8 = *(int *)(lVar14 + 0x18);
      } while (iVar8 != -1);
    }
  }
  local_80 = *(longlong *)(param_1 + 0x150);
  lVar14 = *(longlong *)(local_80 + (ulonglong)(uVar7 >> 9) * 8);
  uVar10 = (ulonglong)((uVar7 & 0x1ff) << 4);
  uVar3 = *(uint *)(lVar14 + 8 + uVar10);
  uVar1 = *(uint *)(lVar14 + 0xc + uVar10);
  local_88 = *(longlong *)(param_1 + 0x138);
  lVar14 = *(longlong *)(local_88 + (ulonglong)(uVar3 >> 9) * 8);
  uVar9 = uVar3 & 0x1ff;
  local_50 = *(uint *)(lVar14 + 8 + (ulonglong)uVar9 * 0xc);
  local_58 = *(undefined8 *)(lVar14 + (ulonglong)uVar9 * 0xc);
  uVar4 = local_58;
  if ((uint)local_58 != uVar7) {
    uVar12 = 1;
    local_58._4_4_ = (uint)((ulonglong)local_58 >> 0x20);
    if (local_58._4_4_ != uVar7) {
      uVar12 = (uint)(local_50 == uVar7) * 3 - 1;
    }
  }
  puVar13 = (undefined8 *)
            ((ulonglong)(uVar9 * 0xc) +
            *(longlong *)(*(longlong *)(param_1 + 0xe8) + (ulonglong)(uVar3 >> 9) * 8));
  local_58 = uVar4;
  if (param_2[1] == 1) {
    local_60 = *(undefined4 *)(puVar13 + 1);
    local_68 = *puVar13;
    if (*(uint *)((longlong)&local_68 + (longlong)(int)uVar12 * 4) != param_2[2])
    goto LAB_1482d6ff2;
LAB_1482d6f90:
    uVar12 = 0;
    if (uVar1 != 0xffffffff) {
      lVar14 = *(longlong *)(local_88 + (ulonglong)(uVar1 >> 9) * 8);
      local_50 = *(uint *)(lVar14 + 8 + (ulonglong)(uVar1 & 0x1ff) * 0xc);
      local_58 = *(undefined8 *)(lVar14 + (ulonglong)(uVar1 & 0x1ff) * 0xc);
      uVar4 = local_58;
      uVar3 = uVar1;
      local_58 = uVar4;
      if ((uint)local_58 != uVar7) {
        uVar12 = 1;
        local_58._4_4_ = (uint)((ulonglong)local_58 >> 0x20);
        bVar15 = local_58._4_4_ != uVar7;
        if (bVar15) {
          uVar12 = (uint)(local_50 == uVar7) * 3 - 1;
        }
      }
      goto LAB_1482d6ff2;
    }
  }
  else {
    local_70 = *(undefined4 *)(puVar13 + 1);
    local_78 = *puVar13;
    if (*(uint *)((longlong)&local_78 + (longlong)(int)uVar12 * 4) != param_2[2])
    goto LAB_1482d6f90;
LAB_1482d6ff2:
    local_8c = (param_2[1] != 1) + 1;
    do {
      lVar14 = 0;
      do {
        if (bVar2 != false) break;
        uVar1 = *(uint *)((longlong)&local_58 + lVar14 * 4);
        if ((uVar1 != uVar7) && (uVar1 != uVar6)) {
          if (*(int *)(param_1 + 0x2d0) != *(int *)(param_1 + 0x2fc)) {
            lVar11 = *(longlong *)(param_1 + 0x308);
            if (*(longlong *)(param_1 + 0x308) == 0) {
              lVar11 = param_1 + 0x300;
            }
            iVar8 = *(int *)(lVar11 + (ulonglong)(*(int *)(param_1 + 0x310) - 1U & uVar1) * 4);
            if (iVar8 != -1) {
              do {
                lVar11 = *(longlong *)(param_1 + 0x2c8) + (longlong)iVar8 * 0x20;
                if (*(uint *)(*(longlong *)(param_1 + 0x2c8) + (longlong)iVar8 * 0x20) == uVar1)
                goto LAB_1482d702f;
                iVar8 = *(int *)(lVar11 + 0x18);
              } while (iVar8 != -1);
            }
          }
          lVar11 = 0;
LAB_1482d702f:
          uVar5 = 0;
          bVar2 = false;
          if (lVar11 != 0) {
            uVar5 = 0;
            bVar2 = true;
          }
        }
        lVar14 = lVar14 + 1;
      } while (lVar14 != 3);
      uVar1 = *(uint *)((longlong)&local_58 + (ulonglong)((uVar12 + local_8c) % 3) * 4);
      uVar4 = *(undefined8 *)
               (*(longlong *)(local_80 + (ulonglong)(uVar1 >> 9) * 8) + 8 +
               (ulonglong)((uVar1 & 0x1ff) << 4));
      uVar12 = (uint)uVar4;
      bVar15 = uVar3 != uVar12;
      uVar3 = (uint)((ulonglong)uVar4 >> 0x20);
      if (bVar15) {
        uVar3 = uVar12;
      }
      if (uVar3 == 0xffffffff) {
        uVar12 = (uint)(uVar1 == uVar6);
        goto LAB_1482d714f;
      }
      lVar14 = *(longlong *)(local_88 + (ulonglong)(uVar3 >> 9) * 8);
      local_50 = *(uint *)(lVar14 + 8 + (ulonglong)(uVar3 & 0x1ff) * 0xc);
      local_58 = *(undefined8 *)(lVar14 + (ulonglong)(uVar3 & 0x1ff) * 0xc);
      uVar4 = local_58;
      uVar12 = 0;
      if ((uint)local_58 != uVar1) {
        uVar12 = 1;
        local_58._4_4_ = (uint)((ulonglong)local_58 >> 0x20);
        if (local_58._4_4_ != uVar1) {
          uVar12 = (uint)(local_50 == uVar1) * 3 - 1;
        }
      }
      local_58 = uVar4;
    } while (uVar1 != uVar6);
    uVar12 = 1;
  }
LAB_1482d714f:
  uVar4 = CONCAT71(uVar5,(bVar2 ^ 1U) & (byte)uVar12);
LAB_1482d7154:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 1482d71c0 FUN_1482d71c0 body=365 status=ok
// SIG undefined FUN_1482d71c0(void)

void FUN_1482d71c0(longlong param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined1 local_50;
  undefined8 local_48;
  uint local_40;
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *param_2;
  uVar2 = param_2[2];
  uVar3 = FUN_1482d6056(param_1 + 600,uVar1);
  if (uVar2 == 0xffffffff || (int)uVar3 < 0) goto LAB_1482d7202;
  iVar4 = *(int *)(param_1 + 0x290) * 0x200 + *(int *)(param_1 + 0x294);
  uVar6 = 0xffffffff;
  uVar5 = 0xffffffff;
  if ((int)uVar3 < iVar4) {
    uVar5 = 0xffffffff;
    if ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(param_1 + 0x298) + (ulonglong)(uVar3 >> 9) * 8) +
                           (ulonglong)(uVar3 & 0x1ff) * 2) - 1U) < 0xfffe) {
      uVar5 = **(undefined4 **)
                (*(longlong *)(*(longlong *)(param_1 + 0x280) + (ulonglong)(uVar3 >> 9) * 8) +
                (ulonglong)(uVar3 & 0x1ff) * 8);
    }
  }
  if ((int)uVar1 < iVar4 && -1 < (int)uVar1) {
    if ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(param_1 + 0x298) + (ulonglong)(uVar1 >> 9) * 8) +
                           (ulonglong)(uVar1 & 0x1ff) * 2) - 1U) < 0xfffe) {
      uVar6 = **(undefined4 **)
                (*(longlong *)(*(longlong *)(param_1 + 0x280) + (ulonglong)(uVar1 >> 9) * 8) +
                (ulonglong)(uVar1 & 0x1ff) * 8);
    }
  }
  local_38[0] = 0;
  local_38[1] = 0;
  if (param_2[1] == 1) {
    local_50 = 0;
LAB_1482d72de:
    local_58 = local_38;
    FUN_1482d732e(param_1,uVar5,uVar6,uVar2);
  }
  else if (param_2[1] == 0) {
    local_50 = 1;
    goto LAB_1482d72de;
  }
  local_40 = param_2[2];
  local_48 = *(undefined8 *)param_2;
  FUN_1482d76a6(param_1,&local_48,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
LAB_1482d7202:
  if ((local_38[2] ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482d732e FUN_1482d732e body=887 status=ok
// SIG undefined FUN_1482d732e(void)

void FUN_1482d732e(longlong param_1,uint param_2,uint param_3,int param_4,longlong *param_5,
                  byte param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  char cVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined8 *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  undefined1 auStack_b8 [32];
  byte local_98;
  uint local_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  uint local_60;
  int iStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = param_6;
  local_84 = param_3;
  cVar6 = FUN_1482d77d8(param_1);
  if (cVar6 == '\0') goto LAB_1482d767e;
  lVar7 = *(longlong *)(param_1 + 0x150);
  lVar4 = *(longlong *)(lVar7 + (ulonglong)(param_2 >> 9) * 8);
  uVar8 = (ulonglong)((param_2 & 0x1ff) << 4);
  uVar12 = *(uint *)(lVar4 + 8 + uVar8);
  uVar11 = *(uint *)(lVar4 + 0xc + uVar8);
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x138) + (ulonglong)(uVar12 >> 9) * 8);
  uVar9 = uVar12 & 0x1ff;
  local_60 = *(uint *)(lVar4 + 8 + (ulonglong)uVar9 * 0xc);
  local_68 = *(undefined8 *)(lVar4 + (ulonglong)uVar9 * 0xc);
  uVar5 = local_68;
  uVar13 = 0;
  if ((uint)local_68 != param_2) {
    uVar13 = 1;
    local_68._4_4_ = (uint)((ulonglong)local_68 >> 0x20);
    if (local_68._4_4_ != param_2) {
      uVar13 = (uint)(local_60 == param_2) * 3 - 1;
    }
  }
  puVar10 = (undefined8 *)
            ((ulonglong)(uVar9 * 0xc) +
            *(longlong *)(*(longlong *)(param_1 + 0xe8) + (ulonglong)(uVar12 >> 9) * 8));
  local_80 = param_1;
  local_68 = uVar5;
  if (param_6 == 0) {
    local_70 = *(undefined4 *)(puVar10 + 1);
    local_78 = *puVar10;
    if (*(int *)((longlong)&local_78 + (longlong)(int)uVar13 * 4) != param_4) goto LAB_1482d7454;
  }
  else {
    local_50 = *(undefined4 *)(puVar10 + 1);
    local_58 = *puVar10;
    if (*(int *)((longlong)&local_58 + (longlong)(int)uVar13 * 4) == param_4) {
LAB_1482d7454:
      if (uVar11 == 0xffffffff) goto LAB_1482d767e;
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x138) + (ulonglong)(uVar11 >> 9) * 8);
      local_60 = *(uint *)(lVar4 + 8 + (ulonglong)(uVar11 & 0x1ff) * 0xc);
      local_68 = *(undefined8 *)(lVar4 + (ulonglong)(uVar11 & 0x1ff) * 0xc);
      uVar5 = local_68;
      uVar13 = 0;
      uVar12 = uVar11;
      local_68 = uVar5;
      if ((uint)local_68 != param_2) {
        uVar13 = 1;
        local_68._4_4_ = (uint)((ulonglong)local_68 >> 0x20);
        bVar14 = local_68._4_4_ != param_2;
        if (bVar14) {
          uVar13 = (uint)(local_60 == param_2) * 3 - 1;
        }
      }
    }
  }
  uVar11 = local_84;
  do {
    uVar9 = uVar13 - 2;
    if (uVar13 + 1 < 3) {
      uVar9 = uVar13 + 1;
    }
    if (param_6 == 0) {
      uVar9 = uVar13;
    }
    uVar1 = *(uint *)((longlong)&local_68 +
                     (longlong)(int)(((int)(uVar9 + 1) / 3) * -3 + uVar9 + 1) * 4);
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xe8) + (ulonglong)(uVar12 >> 9) * 8);
    local_50 = *(undefined4 *)(lVar4 + 8 + (ulonglong)(uVar12 & 0x1ff) * 0xc);
    local_58 = *(undefined8 *)(lVar4 + (ulonglong)(uVar12 & 0x1ff) * 0xc);
    iVar2 = *(int *)((longlong)&local_58 + (longlong)((int)(uVar9 + (2 - (uint)param_6)) % 3) * 4);
    uVar5 = *(undefined8 *)
             (*(longlong *)(lVar7 + (ulonglong)(uVar1 >> 9) * 8) + (ulonglong)((uVar1 & 0x1ff) << 4)
             );
    iVar3 = (int)param_5[1];
    *(uint *)(param_5 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_5 + 0xc) < iVar3 + 1U) {
      FUN_148307474(param_5,iVar3);
      param_1 = local_80;
      uVar11 = local_84;
    }
    *(ulonglong *)(*param_5 + (longlong)iVar3 * 8) = (ulonglong)CONCAT14(iVar2 != (int)uVar5,uVar1);
    uVar9 = *(uint *)((longlong)&local_68 + (longlong)((int)(uVar13 + (2 - (uint)param_6)) % 3) * 4)
    ;
    lVar7 = *(longlong *)(param_1 + 0x150);
    uVar5 = *(undefined8 *)
             (*(longlong *)(lVar7 + (ulonglong)(uVar9 >> 9) * 8) + 8 +
             (ulonglong)((uVar9 & 0x1ff) << 4));
    uVar13 = (uint)uVar5;
    bVar14 = uVar12 != uVar13;
    uVar12 = (uint)((ulonglong)uVar5 >> 0x20);
    if (bVar14) {
      uVar12 = uVar13;
    }
    if (uVar12 == 0xffffffff) break;
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x138) + (ulonglong)(uVar12 >> 9) * 8);
    local_60 = *(uint *)(lVar4 + 8 + (ulonglong)(uVar12 & 0x1ff) * 0xc);
    local_68 = *(undefined8 *)(lVar4 + (ulonglong)(uVar12 & 0x1ff) * 0xc);
    uVar5 = local_68;
    uVar13 = 0;
    if ((uint)local_68 != uVar9) {
      uVar13 = 1;
      local_68._4_4_ = (uint)((ulonglong)local_68 >> 0x20);
      if (local_68._4_4_ != uVar9) {
        uVar13 = (uint)(local_60 == uVar9) * 3 - 1;
      }
    }
    local_68 = uVar5;
  } while (uVar9 != uVar11);
LAB_1482d767e:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1482d76a6 FUN_1482d76a6 body=306 status=ok
// SIG undefined FUN_1482d76a6(void)

void FUN_1482d76a6(longlong param_1,int *param_2,undefined8 *param_3)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint *puVar5;
  longlong lVar6;
  
  iVar2 = *param_2;
  if (-1 < iVar2) {
    lVar1 = param_1 + 600;
    uVar3 = FUN_1482d6056(lVar1,iVar2);
    iVar4 = FUN_1482d60ae(lVar1,iVar2);
    FUN_1482d7c34(param_1,uVar3);
    FUN_1482d7c34(param_1,iVar2);
    puVar5 = (uint *)*param_3;
    iVar2 = *(int *)(param_3 + 1);
    if (iVar4 != -1) {
      if (iVar2 != 0) {
        lVar6 = (longlong)iVar2 << 3;
        do {
          uVar3 = FUN_1482d6250(lVar1,puVar5,iVar4);
          *(double *)(param_1 + 0x248) =
               *(double *)
                (*(longlong *)(*(longlong *)(param_1 + 0x1a0) + (ulonglong)(*puVar5 >> 9) * 8) +
                (ulonglong)(*puVar5 & 0x1ff) * 8) + *(double *)(param_1 + 0x248);
          FUN_1482d68e8(param_1,uVar3);
          puVar5 = puVar5 + 2;
          lVar6 = lVar6 + -8;
        } while (lVar6 != 0);
      }
      FUN_1482d68e8(param_1,iVar4);
      return;
    }
    if (iVar2 != 0) {
      lVar6 = (longlong)iVar2 << 3;
      do {
        uVar3 = FUN_1482d6106(lVar1,puVar5);
        *(double *)(param_1 + 0x248) =
             *(double *)
              (*(longlong *)(*(longlong *)(param_1 + 0x1a0) + (ulonglong)(*puVar5 >> 9) * 8) +
              (ulonglong)(*puVar5 & 0x1ff) * 8) + *(double *)(param_1 + 0x248);
        FUN_1482d68e8(param_1,uVar3);
        puVar5 = puVar5 + 2;
        lVar6 = lVar6 + -8;
      } while (lVar6 != 0);
    }
  }
  return;
}



// FUNCTION 1482d77d8 FUN_1482d77d8 body=828 status=ok
// SIG undefined FUN_1482d77d8(void)

undefined8 FUN_1482d77d8(longlong param_1,uint param_2,uint param_3,int param_4,byte param_5)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined8 *puVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  uint uVar10;
  ulonglong uVar11;
  bool bVar12;
  uint auStack_474 [231];
  undefined1 auStack_d8 [40];
  uint local_b0;
  int local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined8 local_8c;
  undefined1 local_84 [4];
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  uint local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar4 = *(ulonglong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x150) + (ulonglong)(param_2 >> 9) * 8) + 8 +
           (ulonglong)((param_2 & 0x1ff) << 4));
  uVar11 = uVar4 >> 9 & 0x7fffff;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x138) + uVar11 * 8);
  uVar5 = (uint)uVar4 & 0x1ff;
  local_68 = *(uint *)(lVar2 + 8 + (ulonglong)uVar5 * 0xc);
  local_70 = *(undefined8 *)(lVar2 + (ulonglong)uVar5 * 0xc);
  uVar9 = local_70;
  iVar7 = 0;
  if ((uint)local_70 != param_2) {
    iVar7 = 1;
    local_70._4_4_ = (uint)((ulonglong)local_70 >> 0x20);
    if (local_70._4_4_ != param_2) {
      iVar7 = (uint)(local_68 == param_2) * 3 + -1;
    }
  }
  puVar6 = (undefined8 *)
           ((ulonglong)(uVar5 * 0xc) + *(longlong *)(*(longlong *)(param_1 + 0xe8) + uVar11 * 8));
  local_70 = uVar9;
  if (param_5 == 0) {
    local_78 = *(undefined4 *)(puVar6 + 1);
    local_80 = *puVar6;
    if (*(int *)((longlong)&local_80 + (longlong)iVar7 * 4) != param_4) goto LAB_1482d7929;
  }
  else {
    uStack_98 = *(undefined4 *)(puVar6 + 1);
    local_a0 = *puVar6;
    if (*(int *)((longlong)&local_a0 + (longlong)iVar7 * 4) == param_4) {
LAB_1482d7929:
      uVar11 = uVar4 >> 0x20;
      uVar9 = 0;
      iVar7 = 0;
      uVar5 = (uint)(uVar4 >> 0x20);
      if (uVar5 == 0xffffffff) goto LAB_1482d78de;
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x138) + (uVar4 >> 0x29) * 8);
      uVar4 = (ulonglong)(uVar5 & 0x1ff);
      local_68 = *(uint *)(lVar2 + 8 + uVar4 * 0xc);
      local_70 = *(undefined8 *)(lVar2 + uVar4 * 0xc);
      uVar9 = local_70;
      uVar4 = uVar11;
      local_70 = uVar9;
      if ((uint)local_70 != param_2) {
        iVar7 = 1;
        local_70._4_4_ = (uint)((ulonglong)local_70 >> 0x20);
        bVar12 = local_70._4_4_ != param_2;
        if (bVar12) {
          iVar7 = (uint)(local_68 == param_2) * 3 + -1;
        }
      }
    }
  }
  local_ac = 2 - (uint)param_5;
  uVar8 = iVar7 + (2 - (uint)param_5);
  uVar5 = uVar8 - 3;
  if (uVar8 < 3) {
    uVar5 = uVar8;
  }
  uVar5 = *(uint *)((longlong)&local_70 + (longlong)(int)uVar5 * 4);
  uVar9 = CONCAT71((uint7)(uint3)(uVar8 >> 8),1);
  if (uVar5 != param_3) {
    local_a8 = param_1 + 8;
    local_b0 = param_3;
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x150) + (ulonglong)(uVar5 >> 9) * 8);
      uVar11 = (ulonglong)((uVar5 & 0x1ff) << 4);
      uVar8 = *(uint *)(lVar2 + 8 + uVar11);
      uVar1 = *(uint *)(lVar2 + 0xc + uVar11);
      uVar10 = uVar1;
      if ((uint)uVar4 == uVar1) {
        uVar10 = uVar8;
      }
      uVar11 = (ulonglong)uVar10;
      if (param_5 == 0) {
        uVar11 = uVar4 & 0xffffffff;
      }
      uVar10 = (uint)uVar11;
      local_a0 = CONCAT44(0xffffffff,(undefined4)local_a0);
      uStack_98 = 0xffffffff;
      uStack_94 = 0xffffffff;
      uStack_90 = 0xffffffff;
      local_8c = 0xffffffffffffffff;
      local_84[0] = 1;
      iVar7 = FUN_1482d7e52(local_a8,uVar5,&local_a0);
      if (iVar7 == 0) {
        *(int *)(param_1 + 0x250) = *(int *)(param_1 + 0x250) + 1;
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x138) + (uVar11 >> 9) * 8);
        local_68 = *(uint *)(lVar2 + 8 + (ulonglong)(uVar10 & 0x1ff) * 0xc);
        local_70 = *(undefined8 *)(lVar2 + (ulonglong)(uVar10 & 0x1ff) * 0xc);
        uVar3 = local_70;
        if ((uint)local_70 == param_2) {
          iVar7 = 0;
          local_70 = uVar3;
        }
        else {
          iVar7 = 1;
          local_70._4_4_ = (uint)((ulonglong)local_70 >> 0x20);
          bVar12 = local_70._4_4_ != param_2;
          local_70 = uVar3;
          if (bVar12) {
            iVar7 = (uint)(local_68 == param_2) * 3 + -1;
          }
        }
      }
      else {
        if (iVar7 == 0x14) {
          uVar9 = 0;
          break;
        }
        uVar10 = uVar1;
        if (uVar8 != (uint)uVar4) {
          uVar10 = uVar8;
        }
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x138) + (ulonglong)(uVar10 >> 9) * 8);
        local_68 = *(uint *)(lVar2 + 8 + (ulonglong)(uVar10 & 0x1ff) * 0xc);
        local_70 = *(undefined8 *)(lVar2 + (ulonglong)(uVar10 & 0x1ff) * 0xc);
        uVar3 = local_70;
        param_2 = uVar5;
        if ((uint)local_70 == uVar5) {
          iVar7 = 0;
          local_70 = uVar3;
        }
        else {
          iVar7 = 1;
          local_70._4_4_ = (uint)((ulonglong)local_70 >> 0x20);
          bVar12 = local_70._4_4_ != uVar5;
          local_70 = uVar3;
          if (bVar12) {
            iVar7 = (uint)(local_68 == uVar5) * 3 + -1;
          }
        }
      }
      uVar5 = *(uint *)((longlong)&local_70 + (ulonglong)((uint)(iVar7 + local_ac) % 3) * 4);
      uVar4 = (ulonglong)uVar10;
    } while (uVar5 != local_b0);
  }
LAB_1482d78de:
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 1482d7b16 FUN_1482d7b16 body=183 status=ok
// SIG undefined FUN_1482d7b16(void)

undefined4 FUN_1482d7b16(longlong param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar2 = 0xffffffff;
  lVar3 = -1;
  if ((-1 < (int)param_2) &&
     ((int)param_2 < *(int *)(param_1 + 0x290) * 0x200 + *(int *)(param_1 + 0x294))) {
    if ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(param_1 + 0x298) + (ulonglong)(param_2 >> 9) * 8) +
                           (ulonglong)(param_2 & 0x1ff) * 2) - 1U) < 0xfffe) {
      puVar1 = *(uint **)(*(longlong *)
                           (*(longlong *)(param_1 + 0x280) + (ulonglong)(param_2 >> 9) * 8) +
                         (ulonglong)(param_2 & 0x1ff) * 8);
      uVar2 = *puVar1;
      lVar3 = (longlong)(int)puVar1[1];
    }
  }
  local_10 = *(undefined8 *)
              (*(longlong *)(*(longlong *)(param_1 + 0x150) + (ulonglong)(uVar2 >> 9) * 8) +
              (ulonglong)((uVar2 & 0x1ff) << 4));
  if ((DAT_14c707940 ^ (ulonglong)auStack_38 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return *(undefined4 *)((longlong)&local_10 + lVar3 * 4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482d7bce FUN_1482d7bce body=101 status=ok
// SIG undefined FUN_1482d7bce(void)

void FUN_1482d7bce(int *param_1,undefined8 *param_2,ulonglong param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_1 * 0x200 + param_1[1];
  uVar3 = (uint)param_3;
  if (uVar2 != uVar3) {
    if (uVar3 <= uVar2) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 2) + (param_3 >> 9 & 0x7fffff) * 8);
      *(undefined4 *)(lVar1 + 8 + (ulonglong)(uVar3 & 0x1ff) * 0xc) = *(undefined4 *)(param_2 + 1);
      *(undefined8 *)(lVar1 + (ulonglong)(uVar3 & 0x1ff) * 0xc) = *param_2;
      return;
    }
    FUN_1483075c4(param_1,param_3 & 0xffffffff);
  }
  FUN_1483074fa(param_1,param_2);
  return;
}



// FUNCTION 1482d7c34 FUN_1482d7c34 body=540 status=ok
// SIG undefined FUN_1482d7c34(void)

void FUN_1482d7c34(longlong param_1,uint param_2)

{
  longlong lVar1;
  double dVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = param_2;
  if (-1 < (int)param_2) {
    uVar8 = 0xffffffff;
    if ((int)param_2 < *(int *)(param_1 + 0x290) * 0x200 + *(int *)(param_1 + 0x294)) {
      if ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)(param_1 + 0x298) + (ulonglong)(param_2 >> 9) * 8) +
                             (ulonglong)(param_2 & 0x1ff) * 2) - 1U) < 0xfffe) {
        uVar8 = **(uint **)(*(longlong *)
                             (*(longlong *)(param_1 + 0x280) + (ulonglong)(param_2 >> 9) * 8) +
                           (ulonglong)(param_2 & 0x1ff) * 8);
      }
    }
    if (param_2 < *(uint *)(param_1 + 0x338)) {
      uVar4 = (ulonglong)param_2;
      uVar3 = *(uint *)(*(longlong *)(param_1 + 0x350) + uVar4 * 4);
      uVar7 = (ulonglong)uVar3;
      if (uVar7 != 0xffffffff) {
        dVar2 = *(double *)(*(longlong *)(param_1 + 0x348) + uVar4 * 8);
        uVar9 = *(int *)(param_1 + 0x330) - 1;
        *(uint *)(param_1 + 0x330) = uVar9;
        *(undefined4 *)(*(longlong *)(param_1 + 0x340) + uVar7 * 4) =
             *(undefined4 *)(*(longlong *)(param_1 + 0x340) + (ulonglong)uVar9 * 4);
        *(uint *)(*(longlong *)(param_1 + 0x350) +
                 (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x340) + uVar7 * 4) * 4) = uVar3;
        *(undefined4 *)(*(longlong *)(param_1 + 0x350) + uVar4 * 4) = 0xffffffff;
        if (*(double *)
             (*(longlong *)(param_1 + 0x348) +
             (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x340) + uVar7 * 4) * 8) <= dVar2) {
          FUN_148307714(param_1 + 0x330);
        }
        else {
          FUN_1483073b0();
        }
      }
    }
    FUN_1482d6314(param_1 + 600,param_2);
    if (*(int *)(param_1 + 0x2d0) != *(int *)(param_1 + 0x2fc)) {
      lVar5 = param_1 + 0x300;
      if (*(longlong *)(param_1 + 0x308) != 0) {
        lVar5 = *(longlong *)(param_1 + 0x308);
      }
      iVar6 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x310) - 1U & uVar8) * 4);
      if (iVar6 != -1) {
        lVar5 = *(longlong *)(param_1 + 0x2c8);
        do {
          lVar1 = lVar5 + (longlong)iVar6 * 0x20;
          if (*(uint *)(lVar5 + (longlong)iVar6 * 0x20) == uVar8) {
            if ((lVar1 + 8 != 0 && lVar1 != 0) &&
               (FUN_1406b43d8(lVar1 + 8,&local_2c,1), *(int *)(lVar1 + 0x10) == 0)) {
              FUN_1483078a6((longlong *)(param_1 + 0x2c8),uVar8);
            }
            break;
          }
          iVar6 = *(int *)(lVar1 + 0x18);
        } while (iVar6 != -1);
      }
    }
    *(double *)(param_1 + 0x248) =
         *(double *)(param_1 + 0x248) -
         *(double *)
          (*(longlong *)(*(longlong *)(param_1 + 0x1a0) + (ulonglong)(uVar8 >> 9) * 8) +
          (ulonglong)(uVar8 & 0x1ff) * 8);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1482d7e52 FUN_1482d7e52 body=363 status=ok
// SIG undefined FUN_1482d7e52(void)

int FUN_1482d7e52(longlong param_1,uint param_2,undefined8 param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 *local_80;
  undefined4 local_78;
  uint local_70;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar4 = 3;
  if ((-1 < (int)param_2) &&
     ((int)param_2 < *(int *)(param_1 + 0x158) * 0x200 + *(int *)(param_1 + 0x15c))) {
    uVar3 = param_2 & 0x1ff;
    if ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(param_1 + 0x160) + (ulonglong)(param_2 >> 9) * 8) +
                           (ulonglong)uVar3 * 2) - 1U) < 0xfffe) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x148) + (ulonglong)(param_2 >> 9) * 8);
      iVar4 = 0x14;
      if (*(int *)(lVar1 + 0xc + (ulonglong)(uVar3 << 4)) != -1) {
        uVar2 = *(ulonglong *)(lVar1 + 8 + (ulonglong)(uVar3 << 4));
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x130) + (uVar2 >> 9 & 0x7fffff) * 8);
        local_40 = *(undefined4 *)(lVar1 + 8 + (uVar2 & 0x1ff) * 0xc);
        local_48 = *(undefined8 *)(lVar1 + (uVar2 & 0x1ff) * 0xc);
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x130) + (uVar2 >> 0x29) * 8);
        uVar5 = uVar2 >> 0x20 & 0x1ff;
        local_50 = *(undefined4 *)(lVar1 + 8 + uVar5 * 0xc);
        local_58 = *(undefined8 *)(lVar1 + uVar5 * 0xc);
        FUN_1482e3a8a(param_1,&local_60,param_2);
        iVar4 = FUN_1482e44bc(param_1,param_2,param_3);
        if (iVar4 == 0) {
          local_78 = local_5c;
          local_80 = &local_58;
          local_88 = (undefined4)(uVar2 >> 0x20);
          local_70 = param_2;
          FUN_1482e2614(param_1 + 0x1c0,uVar2 & 0xffffffff,&local_48,local_60);
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482d7fbe FUN_1482d7fbe body=607 status=ok
// SIG undefined FUN_1482d7fbe(void)

longlong * FUN_1482d7fbe(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  void *local_a8;
  uint local_a0;
  undefined8 local_98;
  undefined8 local_90;
  longlong local_88;
  ulonglong uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_78 = 0;
  uStack_70 = 0;
  if (*(int *)(param_1 + 0x270) == 0) {
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_e8);
  }
  local_88 = 0;
  uStack_80 = 0;
  FUN_1482e4d90();
  if ((*(longlong *)(param_1 + 0x260) == 0) ||
     (uVar6 = *(uint *)(*(longlong *)(param_1 + 0x260) + 8), uVar6 == 0xffffffff)) {
    uStack_70._4_4_ = 0;
    uStack_70._0_4_ = 0;
    local_78 = 0;
  }
  else {
    do {
      uVar3 = FUN_1482d60ae(param_1 + 600,uVar6);
      iVar4 = -1;
      if (((int)uVar6 < 0) ||
         (*(int *)(param_1 + 0x290) * 0x200 + *(int *)(param_1 + 0x294) <= (int)uVar6)) {
        iVar5 = -1;
      }
      else {
        iVar5 = -1;
        if ((ushort)(*(short *)(*(longlong *)
                                 (*(longlong *)(param_1 + 0x298) + (ulonglong)(uVar6 >> 9) * 8) +
                               (ulonglong)(uVar6 & 0x1ff) * 2) - 1U) < 0xfffe) {
          piVar1 = *(int **)(*(longlong *)
                              (*(longlong *)(param_1 + 0x280) + (ulonglong)(uVar6 >> 9) * 8) +
                            (ulonglong)(uVar6 & 0x1ff) * 8);
          iVar4 = *piVar1;
          iVar5 = piVar1[1];
        }
      }
      local_b8 = iVar5 == 0;
      local_c8 = local_98;
      local_c0 = param_3;
      FUN_1482e4fc3(&local_a8,(longlong)iVar4,(longlong)iVar4 * 0x10 + local_88,local_90);
      uVar2 = uStack_70;
      lVar8 = (longlong)(int)local_a0;
      if (lVar8 != 0) {
        iVar4 = (int)uStack_70;
        lVar7 = (longlong)(int)uStack_70;
        uStack_70 = CONCAT44(uStack_70._4_4_,(int)uStack_70 + local_a0);
        if ((uint)(uStack_70._4_4_ - iVar4) < local_a0) {
          FUN_1483079c6(&local_78,uVar2 & 0xffffffff);
        }
        memmove((void *)(lVar7 * 0x28 + local_78),local_a8,lVar8 * 0x28);
      }
      if (uVar3 != 0xffffffff) {
        uStack_70 = CONCAT44(uStack_70._4_4_,(int)uStack_70 + -1);
        FUN_148307a5a(&local_78);
      }
      if (local_a8 != (void *)0x0) {
        FUN_1400020a8();
      }
      uVar6 = uVar3;
    } while (uVar3 != 0xffffffff);
  }
  *param_2 = local_78;
  local_78 = 0;
  *(int *)(param_2 + 1) = (int)uStack_70;
  *(int *)((longlong)param_2 + 0xc) = uStack_70._4_4_;
  uStack_70 = 0;
  FUN_144716727(local_88,uStack_80 & 0xffffffff);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1482d821e FUN_1482d821e body=844 status=ok
// SIG undefined FUN_1482d821e(void)

ulonglong FUN_1482d821e(undefined8 param_1,longlong param_2,int *param_3,char *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  char cVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  ulonglong uVar12;
  code *pcVar13;
  undefined1 auStack_128 [32];
  int *local_108;
  undefined4 *local_100;
  undefined8 *local_f8;
  int *local_f0;
  int *local_e8;
  char *local_e0;
  int local_d0;
  int local_cc;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined4 local_b0;
  undefined4 local_ac;
  int local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (param_4 != (char *)0x0) {
    if (*param_4 == '\0') {
      pcVar13 = *(code **)(param_4 + 0x70);
      plVar10 = (longlong *)(param_4 + 0x90);
      if (*(longlong **)(param_4 + 0x80) != (longlong *)0x0) {
        plVar10 = *(longlong **)(param_4 + 0x80);
      }
      uVar9 = (**(code **)(*plVar10 + 8))();
      cVar4 = (*pcVar13)(uVar9);
      *param_4 = cVar4;
      if (cVar4 == '\0') goto LAB_1482d82b5;
    }
    pcVar13 = (code *)0x0;
    goto LAB_1482d8284;
  }
LAB_1482d82b5:
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 8) + 0x70);
  lVar11 = (longlong)*(int *)(param_2 + 0x10) * 0x50;
  uVar1 = *(undefined4 *)(lVar3 + lVar11);
  local_f8 = (undefined8 *)&local_a4;
  local_100 = &local_a0;
  local_108 = &local_9c;
  local_f0 = param_3;
  cVar4 = FUN_1482d856b(*(longlong *)(param_2 + 8),uVar1,(longlong)*(int *)(param_2 + 0x10),
                        *(undefined4 *)(param_2 + 0x24));
  uVar2 = *(undefined4 *)(lVar3 + 4 + lVar11);
  local_f8 = (undefined8 *)&local_b0;
  local_100 = &local_ac;
  local_108 = &local_a8;
  local_f0 = param_3;
  bVar5 = FUN_1482d856b(*(undefined8 *)(param_2 + 8),uVar2,*(undefined4 *)(param_2 + 0x10),
                        *(undefined4 *)(param_2 + 0x24));
  pcVar13 = (code *)0x0;
  if ((cVar4 == '\0') && (bVar5 == 0)) goto LAB_1482d8284;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_108 = param_3;
  cVar6 = FUN_1482d87da(param_2,*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x24));
  if ((cVar6 != '\0') && ((int)uStack_c0 != 0)) {
    if (param_4 == (char *)0x0) {
LAB_1482d8408:
      local_cc = 0;
      uVar12 = CONCAT71((int7)((ulonglong)pcVar13 >> 8),1);
      if (cVar4 != '\0') {
        local_f0 = &local_cc;
        local_f8 = &local_98;
        local_100 = (undefined4 *)CONCAT44(local_100._4_4_,local_a4);
        local_108 = (int *)CONCAT44(local_108._4_4_,local_a0);
        local_e8 = param_3;
        local_e0 = param_4;
        uVar8 = FUN_1482d8ed9(param_2,&local_c8,uVar1,local_9c);
        uVar12 = (ulonglong)uVar8;
      }
      iVar7 = local_cc;
      if ((bVar5 & (byte)uVar12) == 1) {
        local_f0 = &local_d0;
        local_d0 = 0;
        local_f8 = &local_98;
        local_100 = (undefined4 *)CONCAT44(local_100._4_4_,local_b0);
        local_108 = (int *)CONCAT44(local_108._4_4_,local_ac);
        local_e8 = param_3;
        local_e0 = param_4;
        uVar8 = FUN_1482d8ed9(param_2,&local_c8,uVar2,local_a8);
        uVar12 = (ulonglong)uVar8;
        iVar7 = local_cc + local_d0;
      }
      if (iVar7 != 0) {
        if (param_4 == (char *)0x0) {
LAB_1482d84a6:
          bVar5 = (**(code **)(**(longlong **)(param_2 + 8) + 8))();
          pcVar13 = (code *)CONCAT71((int7)(uVar12 >> 8),(byte)uVar12 & bVar5);
          goto LAB_1482d8468;
        }
        if (*param_4 == '\0') {
          pcVar13 = *(code **)(param_4 + 0x70);
          plVar10 = (longlong *)(param_4 + 0x90);
          if (*(longlong **)(param_4 + 0x80) != (longlong *)0x0) {
            plVar10 = *(longlong **)(param_4 + 0x80);
          }
          uVar9 = (**(code **)(*plVar10 + 8))();
          cVar4 = (*pcVar13)(uVar9);
          *param_4 = cVar4;
          if (cVar4 == '\0') goto LAB_1482d84a6;
        }
      }
    }
    else if (*param_4 == '\0') {
      pcVar13 = *(code **)(param_4 + 0x70);
      plVar10 = (longlong *)(param_4 + 0x90);
      if (*(longlong **)(param_4 + 0x80) != (longlong *)0x0) {
        plVar10 = *(longlong **)(param_4 + 0x80);
      }
      uVar9 = (**(code **)(*plVar10 + 8))();
      cVar6 = (*pcVar13)(uVar9);
      *param_4 = cVar6;
      if (cVar6 == '\0') goto LAB_1482d8408;
    }
    pcVar13 = (code *)0x0;
  }
LAB_1482d8468:
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_98);
LAB_1482d8284:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)pcVar13 & 0xffffffff;
}



// FUNCTION 1482d856b FUN_1482d856b body=622 status=ok
// SIG undefined FUN_1482d856b(void)

ulonglong FUN_1482d856b(longlong param_1,uint param_2,int param_3,int param_4,undefined4 *param_5,
                       int *param_6,undefined4 *param_7,longlong param_8)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined1 local_f0 [64];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [64];
  undefined8 local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *param_5 = 0xffffffff;
  *param_6 = -1;
  *param_7 = 0xffffffff;
  if (param_2 != 0xffffffff && param_3 != -1) {
    lVar6 = 0;
    if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x98))) {
      lVar6 = (longlong)*(int *)(*(longlong *)(param_1 + 0x90) + (ulonglong)param_2 * 4);
      if (lVar6 == -1) {
        lVar6 = 0;
      }
      else {
        lVar6 = lVar6 * 0x38 + *(longlong *)(param_1 + 0x60);
      }
    }
    if (0 < (longlong)*(int *)(lVar6 + 0x20)) {
      lVar3 = *(longlong *)(lVar6 + 0x18);
      lVar7 = 0;
      do {
        iVar5 = *(int *)(lVar3 + 8 + lVar7 * 0x28);
        if ((longlong)iVar5 != 0) {
          plVar1 = (longlong *)(lVar3 + lVar7 * 0x28);
          lVar4 = *plVar1;
          iVar9 = 1;
          lVar11 = 0;
          do {
            if (*(int *)(lVar4 + lVar11) == param_3) {
              if (iVar9 != 0) {
                if (iVar5 != 4) {
                  if (*(longlong *)(param_8 + 0x10) != 0) {
                    local_58 = lVar4;
                    local_50 = iVar5;
                    FUN_146bc855c();
                  }
                  goto LAB_1482d85d1;
                }
                uVar10 = iVar9 + 4;
                if (-1 < (int)(iVar9 + 1U)) {
                  uVar10 = iVar9 + 1U;
                }
                *param_5 = *(undefined4 *)
                            (lVar4 + (longlong)(int)((iVar9 - (uVar10 & 0xfffffffc)) + 1) * 4);
                *param_7 = (int)lVar7;
                uVar8 = CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
                if (param_4 != -1) {
                  puVar2 = (undefined8 *)
                           (*(longlong *)(param_1 + 0x70) +
                           (longlong)*(int *)(*plVar1 + (longlong)(iVar9 % 4) * 4) * 0x50);
                  local_a8 = *puVar2;
                  FUN_146c7f210(local_a0,puVar2 + 1);
                  local_60 = puVar2[9];
                  uVar10 = iVar9 + 5;
                  if (-1 < (int)(iVar9 + 2U)) {
                    uVar10 = iVar9 + 2U;
                  }
                  puVar2 = (undefined8 *)
                           (*(longlong *)(param_1 + 0x70) +
                           (longlong)
                           *(int *)(*plVar1 +
                                   (longlong)(int)((iVar9 - (uVar10 & 0xfffffffc)) + 2) * 4) * 0x50)
                  ;
                  local_f8 = *puVar2;
                  FUN_146c7f210(local_f0,puVar2 + 1);
                  local_b0 = puVar2[9];
                  iVar5 = local_60._4_4_;
                  if (((int)local_60 == param_4) ||
                     (iVar5 = (int)local_60, local_60._4_4_ == param_4)) {
LAB_1482d877c:
                    *param_6 = iVar5;
                  }
                  else {
                    iVar9 = (int)((ulonglong)local_b0 >> 0x20);
                    iVar5 = iVar9;
                    if (((int)local_b0 == param_4) || (iVar5 = (int)local_b0, iVar9 == param_4))
                    goto LAB_1482d877c;
                  }
                  FUN_146c7d752(local_f0);
                  FUN_146c7d752(local_a0);
                }
                goto LAB_1482d85d3;
              }
              break;
            }
            iVar9 = iVar9 + 1;
            lVar11 = lVar11 + 4;
          } while ((longlong)iVar5 << 2 != lVar11);
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 != *(int *)(lVar6 + 0x20));
    }
  }
LAB_1482d85d1:
  uVar8 = 0;
LAB_1482d85d3:
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return uVar8 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482d87da FUN_1482d87da body=1790 status=ok
// SIG undefined FUN_1482d87da(void)

ulonglong FUN_1482d87da(longlong *param_1,int param_2,int param_3,longlong *param_4,longlong param_5
                       )

{
  double *pdVar1;
  double *pdVar2;
  double dVar3;
  undefined8 uVar4;
  int iVar5;
  double dVar6;
  uint uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  int iVar10;
  double *pdVar11;
  undefined7 uVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong *plVar16;
  ulonglong uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined1 auStack_1a8 [32];
  undefined8 **local_188;
  int local_17c;
  int local_178;
  undefined1 local_174 [4];
  undefined1 local_170 [4];
  undefined4 local_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined8 local_15c;
  uint local_150;
  undefined4 local_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 local_13c;
  uint *local_130;
  uint **local_128;
  longlong *local_120;
  int local_118;
  uint local_110;
  undefined4 uStack_10c;
  ulonglong uStack_108;
  double local_100;
  double dStack_f8;
  undefined8 local_f0;
  double *local_e8;
  undefined8 uStack_e0;
  undefined8 *local_d8;
  ulonglong uStack_d0;
  uint *local_c8;
  undefined8 uStack_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  *(undefined4 *)(param_4 + 1) = 0;
  if (*(int *)((longlong)param_4 + 0xc) < 0) {
    FUN_148307b72(param_4);
  }
  if (*(int *)(param_1[3] + 8) == 0) {
    uVar15 = 0;
  }
  else {
    lVar13 = *(longlong *)(param_1[1] + 0x70) + (longlong)param_2 * 0x50;
    plVar16 = (longlong *)(lVar13 + 0x10);
    local_178 = *(int *)(*plVar16 + (longlong)(*(int *)(lVar13 + 0x18) + -1) * 4);
    local_17c = *(int *)(*(longlong *)(param_1[1] + 0x50) + (longlong)param_3 * 0x18);
    local_c8 = (uint *)0x0;
    uStack_c0 = 0;
    if (local_178 == local_17c) {
      if (0 < (longlong)*(int *)(lVar13 + 0x18)) {
        uVar15 = (longlong)*(int *)(lVar13 + 0x18) + 1;
        do {
          uVar17 = uStack_c0;
          lVar13 = *plVar16;
          lVar14 = (longlong)(int)uStack_c0;
          uVar7 = (int)uStack_c0 + 1;
          uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar7);
          if (uStack_c0._4_4_ < uVar7) {
            FUN_1446f48e2(&local_c8,uVar17 & 0xffffffff);
          }
          local_c8[lVar14] = *(uint *)(lVar13 + -8 + uVar15 * 4);
          uVar15 = uVar15 - 1;
        } while (1 < uVar15);
      }
    }
    else {
      FUN_14054c6c4(&local_c8,plVar16);
    }
    local_d8 = (undefined8 *)0x0;
    uStack_d0 = 0;
    local_e8 = (double *)0x0;
    uStack_e0 = 0;
    if ((char)param_1[4] == '\x01') {
      local_188 = &local_d8;
      FUN_1482d9431(param_1[1],param_2,param_1[3],&local_e8);
    }
    else {
      FUN_1408fdf38(&local_e8,param_1[3]);
      FUN_1482ac182(param_1[1],param_2);
    }
    dVar3 = (double)local_d8[(int)((uint)uStack_d0 - 1)];
    if (local_178 == local_17c) {
      if (1 < (int)(uint)uStack_d0) {
        lVar13 = 0;
        puVar8 = local_d8;
        do {
          uVar4 = *puVar8;
          *puVar8 = local_d8[(uStack_d0 & 0xffffffff) + lVar13 + -1];
          local_d8[(uStack_d0 & 0xffffffff) + lVar13 + -1] = uVar4;
          lVar13 = lVar13 + -1;
          puVar8 = puVar8 + 1;
        } while (-lVar13 != (ulonglong)((uint)uStack_d0 >> 1));
      }
      if ((uint)uStack_d0 != 0) {
        lVar13 = 0;
        do {
          *(double *)((longlong)local_d8 + lVar13) =
               dVar3 - *(double *)((longlong)local_d8 + lVar13);
          lVar13 = lVar13 + 8;
        } while ((longlong)(int)(uint)uStack_d0 * 8 != lVar13);
      }
    }
    uVar12 = (undefined7)((ulonglong)param_4 >> 8);
    if ((longlong)(int)uStack_e0 == 0) {
      uVar15 = CONCAT71(uVar12,1);
    }
    else {
      pdVar1 = local_e8 + (int)uStack_e0;
      uVar15 = (ulonglong)*local_c8;
      uVar21 = 0;
      uVar22 = 0;
      iVar10 = 1;
      pdVar11 = local_e8;
      do {
        dVar19 = (double)param_1[5];
        uVar17 = -(ulonglong)(dVar3 + dVar19 < *pdVar11);
        dVar6 = (double)(~uVar17 & (ulonglong)*pdVar11 | uVar17 & (ulonglong)dVar3);
        uVar17 = uVar15;
        local_120 = param_1;
        if (iVar10 < (int)(uint)uStack_d0) {
          dVar18 = (double)local_d8[iVar10];
          if (dVar18 <= dVar6) {
            lVar13 = 0;
            do {
              lVar14 = lVar13;
              uVar21 = SUB84(dVar18,0);
              uVar22 = (undefined4)((ulonglong)dVar18 >> 0x20);
              if ((1 - (uint)uStack_d0) + iVar10 + (int)lVar14 == 0) {
                uVar17 = (ulonglong)local_c8[iVar10 + lVar14];
                iVar10 = (uint)uStack_d0;
                goto LAB_1482d8b8a;
              }
              dVar18 = (double)local_d8[(longlong)iVar10 + lVar14 + 1];
              lVar13 = lVar14 + 1;
            } while (dVar18 <= dVar6);
            uVar15 = (ulonglong)local_c8[iVar10 + lVar14];
            iVar10 = iVar10 + (int)(lVar14 + 1);
          }
          dVar18 = dVar6 - (double)CONCAT44(uVar22,uVar21);
          uVar17 = uVar15;
          local_118 = iVar10;
          if (dVar19 < dVar18) {
            lVar13 = (longlong)iVar10;
            if (dVar19 < (double)local_d8[lVar13] - (double)CONCAT44(uVar22,uVar21))
            goto LAB_1482d8bd9;
            uVar17 = (ulonglong)local_c8[lVar13];
          }
LAB_1482d8d8d:
          iVar10 = local_118;
          local_128 = &local_c8;
          local_130 = &local_110;
          FUN_143afeee8(&local_130,uVar17);
        }
        else {
LAB_1482d8b8a:
          dVar18 = dVar6 - (double)CONCAT44(uVar22,uVar21);
          uVar15 = uVar17;
          local_118 = iVar10;
          if (dVar18 <= dVar19) goto LAB_1482d8d8d;
          lVar13 = (longlong)iVar10;
LAB_1482d8bd9:
          local_128 = &local_c8;
          local_130 = &local_110;
          local_118 = iVar10;
          uVar7 = FUN_146c061e0(*param_1,uVar17,local_c8[lVar13]);
          if ((int)uVar7 < 0) {
            uVar15 = 0;
            goto LAB_1482d8e96;
          }
          dVar18 = dVar18 / ((double)local_d8[lVar13] - (double)CONCAT44(uVar22,uVar21));
          plVar16 = (longlong *)*param_1;
          if (*(uint *)(*(longlong *)(plVar16[0x38] + (ulonglong)(uVar7 >> 9) * 8) + 4 +
                       (ulonglong)((uVar7 & 0x1ff) << 4)) != local_c8[lVar13]) {
            dVar18 = 1.0 - dVar18;
          }
          local_16c = 0xffffffff;
          uStack_168 = 0xffffffff;
          uStack_164 = 0xffffffff;
          uStack_160 = 0xffffffff;
          local_15c = 0xffffffffffffffff;
          local_14c = 0xffffffff;
          uStack_148 = 0xffffffff;
          uStack_144 = 0xffffffff;
          uStack_140 = 0xffffffff;
          local_13c = 0xffffffff;
          (**(code **)(*plVar16 + 0x30))(plVar16,uVar7,local_170,dVar18);
          if (*(longlong *)(param_5 + 8) != 0) {
            FUN_1447cbafe(*(longlong *)(param_5 + 8),local_174,&local_15c,0);
            if (local_15c._4_4_ != -1) {
              FUN_1447cbafe(*(undefined8 *)(param_5 + 8),local_174,(longlong)&local_15c + 4,0);
            }
          }
          uVar15 = (ulonglong)local_150;
          local_110 = local_150;
          uStack_10c = CONCAT31(uStack_10c._1_3_,1);
          lVar14 = *(longlong *)
                    (*(longlong *)(*param_1 + 0x10) + (ulonglong)(local_c8[lVar13] >> 9) * 8);
          uVar17 = (ulonglong)local_c8[lVar13] & 0x1ff;
          lVar13 = *(longlong *)(*(longlong *)(*param_1 + 0x10) + (ulonglong)(local_150 >> 9) * 8);
          uVar9 = uVar15 & 0x1ff;
          dStack_f8 = *(double *)(lVar14 + 0x10 + uVar17 * 0x18) -
                      *(double *)(lVar13 + 0x10 + uVar9 * 0x18);
          local_100 = *(double *)(lVar14 + 8 + uVar17 * 0x18) -
                      *(double *)(lVar13 + 8 + uVar9 * 0x18);
          dVar19 = *(double *)(lVar14 + uVar17 * 0x18) - *(double *)(lVar13 + uVar9 * 0x18);
          dVar18 = SQRT(dStack_f8 * dStack_f8 + dVar19 * dVar19 + local_100 * local_100);
          dVar20 = 1.0 / dVar18;
          if (0.0 < dVar18) {
            dStack_f8 = dStack_f8 * dVar20;
            local_100 = local_100 * dVar20;
          }
          else {
            local_100 = 0.0;
            dStack_f8 = 0.0;
          }
          uStack_108 = -(ulonglong)(0.0 < dVar18) & (ulonglong)(dVar19 * dVar20);
          uVar21 = SUB84(dVar6,0);
          uVar22 = (undefined4)((ulonglong)dVar6 >> 0x20);
        }
        iVar5 = (int)param_4[1];
        lVar13 = (longlong)iVar5;
        *(uint *)(param_4 + 1) = iVar5 + 1U;
        if (*(uint *)((longlong)param_4 + 0xc) < iVar5 + 1U) {
          FUN_148307ba2(param_4,iVar5);
        }
        lVar14 = *param_4;
        *(undefined8 *)(lVar14 + 0x20 + lVar13 * 0x28) = local_f0;
        pdVar2 = (double *)(lVar14 + 0x10 + lVar13 * 0x28);
        *pdVar2 = local_100;
        pdVar2[1] = dStack_f8;
        puVar8 = (undefined8 *)(lVar14 + lVar13 * 0x28);
        *puVar8 = CONCAT44(uStack_10c,local_110);
        puVar8[1] = uStack_108;
        pdVar11 = pdVar11 + 1;
      } while (pdVar11 != pdVar1);
      uVar15 = CONCAT71(uVar12,1);
    }
LAB_1482d8e96:
    if (local_e8 != (double *)0x0) {
      FUN_1400020a8(local_e8);
    }
    if (local_d8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    if (local_c8 != (uint *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_b0 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar15 & 0xffffffff;
}



// FUNCTION 1482d8ed9 FUN_1482d8ed9 body=1198 status=ok
// SIG undefined FUN_1482d8ed9(void)

ulonglong FUN_1482d8ed9(longlong param_1,void **param_2,uint param_3,int param_4,int param_5,
                       int param_6,longlong *param_7,int *param_8,void **param_9,void **param_10)

{
  void *_Src;
  longlong *plVar1;
  int *piVar2;
  void **ppvVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  void **ppvVar10;
  void **ppvVar11;
  undefined8 unaff_RBP;
  undefined7 uVar14;
  ulonglong uVar12;
  code *pcVar13;
  longlong lVar15;
  void **ppvVar16;
  longlong lVar17;
  undefined1 auStack_d8 [32];
  void **local_b8;
  int *local_b0;
  void **local_a8;
  void **local_a0;
  void **local_90;
  void **local_88;
  undefined1 local_80 [4];
  int local_7c;
  void *local_78;
  undefined8 uStack_70;
  void *local_60;
  int local_58;
  uint local_50;
  int local_4c;
  ulonglong local_48;
  
  ppvVar11 = param_10;
  piVar2 = param_8;
  plVar1 = param_7;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *param_8 = 0;
  uVar14 = (undefined7)((ulonglong)unaff_RBP >> 8);
  local_50 = param_3;
  local_4c = param_4;
  if ((int)param_7[1] != *(int *)((longlong)param_7 + 0x34)) {
    plVar8 = param_7 + 7;
    if ((longlong *)param_7[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_7[8];
    }
    iVar9 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_7[9] - 1U & param_3) * 4);
    if (iVar9 != -1) {
      do {
        if (*(uint *)(*param_7 + (longlong)iVar9 * 0xc) == param_3) {
          uVar12 = CONCAT71(uVar14,1);
          goto LAB_1482d8f40;
        }
        iVar9 = *(int *)(*param_7 + (longlong)iVar9 * 0xc + 4);
      } while (iVar9 != -1);
    }
  }
  iVar9 = *(int *)(param_2 + 1);
  uVar12 = CONCAT71(uVar14,1);
  if ((longlong)iVar9 != 0) {
    local_60 = (void *)0x0;
    _Src = *param_2;
    local_58 = iVar9;
    FUN_148307b08(&local_60,iVar9);
    memcpy(local_60,_Src,(longlong)iVar9 * 0x28);
    local_78 = (void *)0x0;
    uStack_70 = 0;
    ppvVar10 = &local_78;
    ppvVar11 = ppvVar11 + 0x12;
    ppvVar16 = &local_60;
    do {
      ppvVar3 = param_10;
      if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
        plVar8 = plVar1 + 7;
        if ((longlong *)plVar1[8] != (longlong *)0x0) {
          plVar8 = (longlong *)plVar1[8];
        }
        iVar9 = *(int *)((longlong)plVar8 + (ulonglong)((int)plVar1[9] - 1U & local_50) * 4);
        if (iVar9 != -1) {
          do {
            if (*(uint *)(*plVar1 + (longlong)iVar9 * 0xc) == local_50) {
              uVar12 = CONCAT71((int7)((ulonglong)param_10 >> 8),1);
              goto LAB_1482d92e8;
            }
            iVar9 = *(int *)(*plVar1 + (longlong)iVar9 * 0xc + 4);
          } while (iVar9 != -1);
        }
      }
      local_90 = ppvVar10;
      if (param_10 != (void **)0x0) {
        if (*(char *)param_10 == '\0') {
          pcVar13 = param_10[0xe];
          ppvVar10 = param_10[0x10];
          if (param_10[0x10] == (void **)0x0) {
            ppvVar10 = ppvVar11;
          }
          uVar6 = (**(code **)((longlong)*ppvVar10 + 8))();
          cVar4 = (*pcVar13)(uVar6);
          *(char *)ppvVar3 = cVar4;
          if (cVar4 == '\0') goto LAB_1482d9064;
        }
        goto LAB_1482d92e6;
      }
LAB_1482d9064:
      if ((((int)local_50 < 0) ||
          (lVar17 = *(longlong *)(param_1 + 8), *(int *)(lVar17 + 0x98) <= (int)local_50)) ||
         (lVar7 = (longlong)*(int *)(*(longlong *)(lVar17 + 0x90) + (ulonglong)local_50 * 4),
         lVar7 == -1)) {
        lVar17 = 0;
      }
      else {
        lVar17 = lVar7 * 0x38 + *(longlong *)(lVar17 + 0x60);
      }
      lVar17 = (longlong)param_6 * 0x28 + *(longlong *)(lVar17 + 0x18);
      if (local_4c == *(int *)(param_1 + 0x10)) {
        local_a0 = ppvVar3;
        local_a8 = param_9;
        local_b0 = &local_7c;
        local_b8 = param_2;
        uVar5 = FUN_1482d9388(param_1,(ulonglong)local_50,lVar17,ppvVar16);
        uVar12 = (ulonglong)uVar5;
        FUN_1447cbafe(plVar1,local_80,&local_50,0);
        *piVar2 = *piVar2 + (uint)(1 < local_7c);
        break;
      }
      local_b8 = param_9;
      cVar4 = FUN_1482d87da(param_1,local_4c,param_5,local_90);
      if (cVar4 == '\0') {
LAB_1482d92e6:
        uVar12 = 0;
        break;
      }
      pcVar13 = (code *)0x0;
      if (ppvVar3 != (void **)0x0) {
        if (*(char *)ppvVar3 == '\0') {
          pcVar13 = param_10[0xe];
          ppvVar10 = param_10[0x10];
          if (param_10[0x10] == (void **)0x0) {
            ppvVar10 = ppvVar11;
          }
          uVar6 = (**(code **)((longlong)*ppvVar10 + 8))();
          cVar4 = (*pcVar13)(uVar6);
          *(char *)param_10 = cVar4;
          if (cVar4 == '\0') goto LAB_1482d911f;
        }
        goto LAB_1482d92e6;
      }
LAB_1482d911f:
      ppvVar10 = param_10;
      uVar12 = CONCAT71((int7)((ulonglong)pcVar13 >> 8),1);
      if (*(int *)(local_90 + 1) == 0) break;
      local_a0 = param_10;
      local_a8 = param_9;
      local_b0 = &local_7c;
      local_b8 = local_90;
      local_88 = ppvVar11;
      cVar4 = FUN_1482d9388(param_1,local_50,lVar17,ppvVar16);
      FUN_1447cbafe(plVar1,local_80,&local_50,0);
      *piVar2 = *piVar2 + (uint)(1 < local_7c);
      if (cVar4 == '\0') goto LAB_1482d92e6;
      if (ppvVar10 != (void **)0x0) {
        if (*(char *)ppvVar10 == '\0') {
          pcVar13 = ppvVar10[0xe];
          ppvVar11 = ppvVar10[0x10];
          if (ppvVar10[0x10] == (void **)0x0) {
            ppvVar11 = local_88;
          }
          uVar6 = (**(code **)((longlong)*ppvVar11 + 8))();
          cVar4 = (*pcVar13)(uVar6);
          *(char *)ppvVar10 = cVar4;
          if (cVar4 == '\0') goto LAB_1482d91e4;
        }
        goto LAB_1482d92e6;
      }
LAB_1482d91e4:
      lVar17 = *(longlong *)(param_1 + 8);
      lVar7 = *(longlong *)(lVar17 + 0x70);
      lVar15 = (longlong)local_4c * 0x50;
      uVar5 = **(uint **)(lVar7 + 0x20 + lVar15);
      if (*(int *)(*(longlong *)
                    (*(longlong *)(*(longlong *)(lVar17 + 0x80) + 0x1c0) +
                    (ulonglong)(uVar5 >> 9) * 8) + 0xc + (ulonglong)((uVar5 & 0x1ff) << 4)) == -1)
      break;
      uVar5 = *(uint *)(lVar7 + lVar15);
      if (uVar5 == local_50) {
        uVar5 = *(uint *)(lVar7 + lVar15 + 4);
      }
      local_a0 = param_9;
      local_a8 = (void **)&param_6;
      local_b0 = &param_5;
      local_b8 = (void **)&local_4c;
      local_50 = uVar5;
      cVar4 = FUN_1482d856b(lVar17,uVar5,(longlong)local_4c,param_5);
      ppvVar10 = ppvVar16;
      ppvVar11 = local_88;
      ppvVar16 = local_90;
    } while (cVar4 != '\0');
LAB_1482d92e8:
    if (local_78 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_60 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1482d8f40:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12 & 0xffffffff;
}



// FUNCTION 1482d9388 FUN_1482d9388 body=169 status=ok
// SIG undefined FUN_1482d9388(void)

undefined8
FUN_1482d9388(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  
  if (*(int *)((longlong)param_1 + 0x34) == 1) {
    uVar1 = FUN_1482d9c34(*param_1,param_1[1],param_2,param_4,param_5,param_1[5],
                          *(undefined1 *)(param_1 + 6),param_6,param_7,param_8);
  }
  else if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar1 = FUN_1482d94d5(*param_1,param_1[1],param_2,param_3,param_4,param_5,param_6,param_7,
                          param_8);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 1482d9431 FUN_1482d9431 body=164 status=ok
// SIG undefined FUN_1482d9431(void)

void FUN_1482d9431(undefined8 param_1,undefined4 param_2,longlong *param_3,longlong *param_4,
                  undefined8 param_5)

{
  double dVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  
  FUN_147e7779c(param_4,(int)param_3[1]);
  dVar6 = (double)FUN_1482ac182(param_1,param_2,param_5);
  lVar4 = param_3[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar3 = *param_3;
    lVar5 = 0;
    do {
      dVar1 = *(double *)(lVar3 + lVar5);
      iVar2 = (int)param_4[1];
      *(uint *)(param_4 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_4 + 0xc) < iVar2 + 1U) {
        FUN_144941252(param_4,iVar2);
      }
      *(double *)(*param_4 + (longlong)iVar2 * 8) = dVar1 * dVar6;
      lVar5 = lVar5 + 8;
    } while ((longlong)(int)lVar4 * 8 != lVar5);
  }
  return;
}



// FUNCTION 1482d94d5 FUN_1482d94d5 body=1886 status=ok
// SIG undefined FUN_1482d94d5(void)

ulonglong FUN_1482d94d5(longlong param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                       longlong *param_5,longlong *param_6,int *param_7,longlong *param_8,
                       char *param_9)

{
  code *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  int *piVar10;
  longlong *plVar11;
  int *piVar12;
  undefined8 unaff_RBX;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  bool bVar17;
  undefined1 auStack_108 [32];
  longlong *local_e8;
  longlong *local_e0;
  longlong *local_d8;
  char *local_d0;
  undefined4 local_c4;
  uint local_c0;
  uint local_bc;
  longlong local_b8;
  ulonglong local_b0;
  longlong *local_a8;
  undefined1 local_a0 [4];
  undefined4 local_9c;
  longlong local_98;
  ulonglong uStack_90;
  int *local_88;
  undefined8 uStack_80;
  int *local_78;
  undefined8 uStack_70;
  longlong local_68;
  ulonglong uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *param_7 = 0;
  if (param_9 != (char *)0x0) {
    if (*param_9 == '\0') {
      pcVar1 = *(code **)(param_9 + 0x70);
      plVar11 = (longlong *)(param_9 + 0x90);
      if (*(longlong **)(param_9 + 0x80) != (longlong *)0x0) {
        plVar11 = *(longlong **)(param_9 + 0x80);
      }
      uVar8 = (**(code **)(*plVar11 + 8))();
      cVar4 = (*pcVar1)(uVar8);
      *param_9 = cVar4;
      if (cVar4 == '\0') goto LAB_1482d9555;
    }
    uVar16 = 0;
    goto LAB_1482d9576;
  }
LAB_1482d9555:
  uVar7 = *(uint *)(param_6 + 1);
  if ((int)*(uint *)(param_5 + 1) < (int)*(uint *)(param_6 + 1)) {
    uVar7 = *(uint *)(param_5 + 1);
  }
  uVar16 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (uVar7 == 0) goto LAB_1482d9576;
  local_e8 = &local_58;
  local_58 = 0;
  uStack_50 = 0;
  local_e0 = &local_68;
  local_68 = 0;
  uStack_60 = 0;
  local_d0 = param_9;
  local_d8 = param_8;
  local_b8 = param_1;
  local_b0 = param_3 & 0xffffffff;
  cVar4 = FUN_1482d9f01(param_1,param_2,param_3 & 0xffffffff,param_4);
  if (cVar4 == '\0') {
LAB_1482d976f:
    uVar16 = 0;
  }
  else {
    if (param_9 != (char *)0x0) {
      if (*param_9 == '\0') {
        pcVar1 = *(code **)(param_9 + 0x70);
        plVar11 = (longlong *)(param_9 + 0x90);
        if (*(longlong **)(param_9 + 0x80) != (longlong *)0x0) {
          plVar11 = *(longlong **)(param_9 + 0x80);
        }
        uVar8 = (**(code **)(*plVar11 + 8))();
        cVar4 = (*pcVar1)(uVar8);
        *param_9 = cVar4;
        if (cVar4 == '\0') goto LAB_1482d960a;
      }
      goto LAB_1482d976f;
    }
LAB_1482d960a:
    local_78 = (int *)0x0;
    uStack_70 = 0;
    local_88 = (int *)0x0;
    uStack_80 = 0;
    local_bc = uVar7;
    if ((int)uVar7 < 1) {
      bVar17 = false;
      local_c4 = 0;
    }
    else {
      uVar16 = 0;
      do {
        uVar3 = uStack_70;
        iVar6 = -1;
        if ((longlong)(int)uStack_50 == 0) {
          iVar14 = -1;
        }
        else {
          lVar9 = (longlong)(int)uStack_50 << 2;
          lVar15 = 0;
          lVar13 = lVar9;
          do {
            if (*(int *)(local_58 + lVar15 * 4) == *(int *)(*param_5 + uVar16 * 0x28))
            goto LAB_1482d9691;
            lVar15 = lVar15 + 1;
            lVar13 = lVar13 + -4;
          } while (lVar13 != 0);
          lVar15 = 0xffffffff;
LAB_1482d9691:
          iVar14 = (int)lVar15;
          lVar13 = 0;
          do {
            if (*(int *)(local_58 + lVar13 * 4) == *(int *)(*param_6 + uVar16 * 0x28)) {
              iVar6 = (int)lVar13;
              break;
            }
            lVar13 = lVar13 + 1;
            lVar9 = lVar9 + -4;
          } while (lVar9 != 0);
        }
        lVar13 = (longlong)(int)uStack_70;
        uVar5 = (int)uStack_70 + 1;
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar5);
        if (uStack_70._4_4_ < uVar5) {
          FUN_1446f48e2(&local_78,uVar3 & 0xffffffff);
        }
        uVar3 = uStack_80;
        local_78[lVar13] = iVar14;
        lVar13 = (longlong)(int)uStack_80;
        uVar5 = (int)uStack_80 + 1;
        uStack_80 = CONCAT44(uStack_80._4_4_,uVar5);
        if (uStack_80._4_4_ < uVar5) {
          FUN_1446f48e2(&local_88,uVar3 & 0xffffffff);
        }
        local_88[lVar13] = iVar6;
        uVar16 = uVar16 + 1;
      } while (uVar16 != uVar7);
      bVar17 = local_bc != 1;
      if (bVar17) {
        iVar6 = ((int)uStack_50 - *local_78) + *local_88;
        local_c4 = (undefined4)
                   CONCAT71((int7)((ulonglong)((longlong)iVar6 / (longlong)(int)uStack_50) >> 8),
                            iVar6 % (int)uStack_50 <
                            ((local_78[1] - *local_78) + (int)uStack_50) % (int)uStack_50);
      }
      else {
        local_c4 = 0;
      }
    }
    if (param_9 == (char *)0x0) {
LAB_1482d9820:
      local_98 = 0;
      uStack_90 = 0;
      piVar10 = local_78;
      if ((char)local_c4 != '\0') {
        piVar10 = local_88;
      }
      piVar12 = local_88;
      if ((char)local_c4 != '\0') {
        piVar12 = local_78;
      }
      FUN_1482da464(&local_58,&local_98,*piVar12,*piVar10);
      bVar2 = (int)uStack_90 < 3;
      if (bVar2) {
        uVar16 = CONCAT71((int7)((ulonglong)&local_98 >> 8),1);
      }
      else {
        uVar7 = FUN_1482da4ef(local_b8,&local_98,local_b0,&local_68);
        uVar16 = (ulonglong)uVar7;
        *param_7 = *param_7 + (uVar7 & 0xff);
      }
      local_c0 = (uint)!bVar2;
      if (bVar17) {
        local_a8 = (longlong *)(param_9 + 0x90);
        lVar9 = (ulonglong)local_bc - 1;
        lVar15 = 1;
        lVar13 = 4;
        do {
          if ((uVar16 & 1) == 0) goto LAB_1482d9c1a;
          if (param_9 != (char *)0x0) {
            if (*param_9 != '\0') goto LAB_1482d9c1a;
            pcVar1 = *(code **)(param_9 + 0x70);
            plVar11 = *(longlong **)(param_9 + 0x80);
            if (*(longlong **)(param_9 + 0x80) == (longlong *)0x0) {
              plVar11 = local_a8;
            }
            uVar8 = (**(code **)(*plVar11 + 8))();
            cVar4 = (*pcVar1)(uVar8);
            *param_9 = cVar4;
            if (cVar4 != '\0') goto LAB_1482d9c1a;
          }
          if ((*(int *)((longlong)local_78 + lVar13 + -4) != *(int *)((longlong)local_78 + lVar13))
             || (*(int *)((longlong)local_88 + lVar13 + -4) != *(int *)((longlong)local_88 + lVar13)
                )) {
            bVar17 = (longlong)uStack_90 < 0;
            uStack_90 = uStack_90 & 0xffffffff00000000;
            if (bVar17) {
              FUN_14481578e(&local_98,0);
            }
            if ((char)local_c4 == '\0') {
              FUN_1482da464(&local_58,&local_98,*(undefined4 *)((longlong)local_78 + lVar13 + -4),
                            *(undefined4 *)((longlong)local_78 + lVar13));
              piVar12 = local_88 + lVar15 + -1;
              piVar10 = (int *)((longlong)local_88 + lVar13);
            }
            else {
              FUN_1482da464(&local_58,&local_98,*(undefined4 *)((longlong)local_78 + lVar13),
                            *(undefined4 *)((longlong)local_78 + lVar13 + -4));
              piVar10 = local_88 + lVar15 + -1;
              piVar12 = (int *)((longlong)local_88 + lVar13);
            }
            FUN_1482da464(&local_58,&local_98,*piVar10,*piVar12);
            uVar16 = local_b0;
            if ((local_c0 & 1) != 0) {
              uVar16 = (ulonglong)*(uint *)(local_b8 + 0x1b0);
              *(uint *)(local_b8 + 0x1b0) = *(uint *)(local_b8 + 0x1b0) + 1;
            }
            uVar7 = FUN_1482da4ef(local_b8,&local_98,uVar16,&local_68);
            uVar16 = (ulonglong)uVar7;
            *param_7 = *param_7 + (uVar7 & 0xff);
            local_c0 = 1;
          }
          lVar15 = lVar15 + 1;
          lVar13 = lVar13 + 4;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      if ((uVar16 & 1) == 0) {
LAB_1482d9c1a:
        uVar16 = 0;
      }
      else {
        if (param_9 != (char *)0x0) {
          if (*param_9 == '\0') {
            pcVar1 = *(code **)(param_9 + 0x70);
            plVar11 = (longlong *)(param_9 + 0x90);
            if (*(longlong **)(param_9 + 0x80) != (longlong *)0x0) {
              plVar11 = *(longlong **)(param_9 + 0x80);
            }
            uVar8 = (**(code **)(*plVar11 + 8))();
            cVar4 = (*pcVar1)(uVar8);
            *param_9 = cVar4;
            if (cVar4 == '\0') goto LAB_1482d9aac;
          }
          goto LAB_1482d9c1a;
        }
LAB_1482d9aac:
        bVar17 = (longlong)uStack_90 < 0;
        uStack_90 = uStack_90 & 0xffffffff00000000;
        if (bVar17) {
          FUN_14481578e(&local_98,0);
        }
        piVar12 = local_78;
        iVar6 = (int)uStack_70;
        piVar10 = local_88;
        iVar14 = (int)uStack_80;
        if ((char)local_c4 != '\0') {
          piVar12 = local_88;
          iVar6 = (int)uStack_80;
          piVar10 = local_78;
          iVar14 = (int)uStack_70;
        }
        FUN_1482da464(&local_58,&local_98,piVar12[iVar6 + -1],piVar10[iVar14 + -1]);
        uVar7 = local_bc;
        if (2 < (int)uStack_90) {
          if ((local_c0 & 1) != 0) {
            local_b0 = (ulonglong)*(uint *)(local_b8 + 0x1b0);
            *(uint *)(local_b8 + 0x1b0) = *(uint *)(local_b8 + 0x1b0) + 1;
          }
          uVar5 = FUN_1482da4ef(local_b8,&local_98,local_b0,&local_68);
          uVar16 = (ulonglong)uVar5;
          *param_7 = *param_7 + (uVar5 & 0xff);
        }
        lVar13 = local_b8;
        if ((0 < (int)uVar7) && (*param_8 != 0)) {
          lVar9 = 0;
          do {
            lVar15 = *param_8;
            local_9c = FUN_146c061e0(lVar13,*(undefined4 *)(*param_5 + lVar9),
                                     *(undefined4 *)(*param_6 + lVar9));
            FUN_144984904(lVar15,local_a0,&local_9c,0);
            lVar9 = lVar9 + 0x28;
          } while ((ulonglong)uVar7 * 0x28 != lVar9);
        }
      }
      if (local_98 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_9 == '\0') {
        pcVar1 = *(code **)(param_9 + 0x70);
        plVar11 = (longlong *)(param_9 + 0x90);
        if (*(longlong **)(param_9 + 0x80) != (longlong *)0x0) {
          plVar11 = *(longlong **)(param_9 + 0x80);
        }
        uVar8 = (**(code **)(*plVar11 + 8))();
        cVar4 = (*pcVar1)(uVar8);
        *param_9 = cVar4;
        if (cVar4 == '\0') goto LAB_1482d9820;
      }
      uVar16 = 0;
    }
    if (local_88 != (int *)0x0) {
      FUN_1400020a8();
    }
    if (local_78 != (int *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_148307c36(local_68,uStack_60 & 0xffffffff);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
LAB_1482d9576:
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar16 & 0xffffff01;
}



// FUNCTION 1482d9c34 FUN_1482d9c34 body=716 status=ok
// SIG undefined FUN_1482d9c34(void)

undefined4
FUN_1482d9c34(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4,
             longlong *param_5,char *param_6,undefined1 param_7,undefined4 *param_8,
             longlong *param_9,char *param_10)

{
  code *pcVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_178 [32];
  longlong *local_158;
  char *local_150;
  undefined1 local_148;
  undefined8 *local_140;
  longlong local_138;
  char *local_130;
  longlong local_120;
  longlong *local_118;
  undefined8 local_110;
  undefined1 local_108 [64];
  longlong local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  *param_8 = 0;
  local_110 = param_2;
  if (param_10 == (char *)0x0) {
LAB_1482d9cc2:
    uVar2 = *(uint *)(param_5 + 1);
    if ((int)*(uint *)(param_4 + 1) < (int)*(uint *)(param_5 + 1)) {
      uVar2 = *(uint *)(param_4 + 1);
    }
    local_98 = 0;
    local_90 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_8c = 0xffffffff00000080;
    local_84 = 0;
    local_78 = 0;
    local_70 = 0;
    if (0 < (int)uVar2) {
      local_118 = (longlong *)(param_10 + 0x90);
      local_120 = (ulonglong)uVar2 * 0x28;
      lVar7 = 0;
      do {
        local_138 = param_9[1];
        local_158 = (longlong *)(*param_5 + lVar7);
        local_130 = param_10;
        local_148 = param_7;
        local_150 = param_6;
        local_140 = &local_b8;
        cVar3 = FUN_1482da706(param_1,local_110,param_3,*param_4 + lVar7);
        if (cVar3 == '\0') {
LAB_1482d9e9d:
          uVar4 = 0;
          goto LAB_1482d9e9f;
        }
        if (param_10 != (char *)0x0) {
          if (*param_10 == '\0') {
            pcVar1 = *(code **)(param_10 + 0x70);
            plVar6 = *(longlong **)(param_10 + 0x80);
            if (*(longlong **)(param_10 + 0x80) == (longlong *)0x0) {
              plVar6 = local_118;
            }
            uVar5 = (**(code **)(*plVar6 + 8))();
            cVar3 = (*pcVar1)(uVar5);
            *param_10 = cVar3;
            if (cVar3 == '\0') goto LAB_1482d9df9;
          }
          goto LAB_1482d9e9d;
        }
LAB_1482d9df9:
        lVar7 = lVar7 + 0x28;
      } while (local_120 != lVar7);
    }
    if (*param_9 != 0) {
      FUN_1482dac66(*param_9,local_108,&local_b8);
      FUN_145be27ca(*param_9,local_108);
      local_c0 = 0;
      if (local_c8 != 0) {
        FUN_1400020a8();
      }
      FUN_1447a082e(local_108);
    }
    local_150 = param_10;
    local_158 = param_9;
    uVar4 = FUN_1482daeae(param_1,&local_b8,param_3,param_8);
LAB_1482d9e9f:
    local_70 = 0;
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    FUN_1447a082e(&local_b8);
  }
  else {
    if (*param_10 == '\0') {
      pcVar1 = *(code **)(param_10 + 0x70);
      plVar6 = (longlong *)(param_10 + 0x90);
      if (*(longlong **)(param_10 + 0x80) != (longlong *)0x0) {
        plVar6 = *(longlong **)(param_10 + 0x80);
      }
      uVar5 = (**(code **)(*plVar6 + 8))();
      cVar3 = (*pcVar1)(uVar5);
      *param_10 = cVar3;
      if (cVar3 == '\0') goto LAB_1482d9cc2;
    }
    uVar4 = 0;
  }
  if ((local_60 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482d9f01 FUN_1482d9f01 body=1378 status=ok
// SIG undefined FUN_1482d9f01(void)

ulonglong FUN_1482d9f01(longlong param_1,longlong param_2,int param_3,undefined8 *param_4,
                       undefined8 param_5,longlong *param_6,longlong param_7,char *param_8)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  code *pcVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint *puVar15;
  longlong lVar16;
  undefined1 auStack_278 [32];
  uint *local_258;
  undefined8 uStack_250;
  undefined8 local_240;
  undefined4 local_238;
  longlong local_230;
  longlong *local_228;
  undefined8 uStack_220;
  undefined4 *local_218;
  undefined8 uStack_210;
  longlong local_208;
  undefined4 local_200;
  longlong local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined8 local_1cc;
  int local_1c4;
  undefined1 local_1c0 [8];
  undefined1 *local_1b8;
  int local_1b0;
  undefined1 local_1a8 [8];
  longlong local_1a0;
  int local_198;
  char local_190;
  code *local_a8;
  undefined8 local_98;
  undefined **local_88;
  longlong local_80;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_278;
  if (param_8 != (char *)0x0) {
    if (*param_8 == '\0') {
      pcVar4 = *(code **)(param_8 + 0x70);
      plVar12 = (longlong *)(param_8 + 0x90);
      if (*(longlong **)(param_8 + 0x80) != (longlong *)0x0) {
        plVar12 = *(longlong **)(param_8 + 0x80);
      }
      uVar9 = (**(code **)(*plVar12 + 8))();
      cVar7 = (*pcVar4)(uVar9);
      *param_8 = cVar7;
      if (cVar7 == '\0') goto LAB_1482d9fb3;
    }
    uVar13 = 0;
    goto LAB_1482d9f7b;
  }
LAB_1482d9fb3:
  uVar3 = **(uint **)(*(longlong *)(param_2 + 0x70) + 0x20 + (longlong)*(int *)*param_4 * 0x50);
  uVar13 = *(ulonglong *)
            (*(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(uVar3 >> 9) * 8) + 8 +
            (ulonglong)((uVar3 & 0x1ff) << 4));
  local_218 = (undefined4 *)0x0;
  uStack_210 = 0;
  iVar8 = FUN_146bc96d4(param_1,uVar13 & 0xffffffff);
  uStack_210 = CONCAT44(uStack_210._4_4_,1);
  FUN_1446f48e2(&local_218,0);
  uVar6 = uVar13 >> 0x20;
  if (iVar8 == param_3) {
    uVar6 = uVar13;
  }
  *local_218 = (int)uVar6;
  local_228 = (longlong *)0x0;
  uStack_220 = 0;
  local_98 = 0;
  local_88 = &PTR_LAB_14ae72f30;
  local_a8 = FUN_143b04f80;
  local_230 = param_1;
  local_80 = param_1;
  FUN_14298451c(&local_230,&local_218);
  if (param_8 == (char *)0x0) {
LAB_1482da072:
    puVar5 = (undefined8 *)*local_228;
    FUN_146c6a7a4(local_1a8,param_1,puVar5,1);
    if ((local_190 == '\0') && (local_198 == 1)) {
      FUN_146c5d67a(local_1a0);
      FUN_14054c6c4(param_5,local_1a0 + 8);
      plVar12 = *(longlong **)(param_1 + 0x208);
      if ((plVar12 != (longlong *)0x0) &&
         (iVar8 = (**(code **)(*plVar12 + 0xa0))(plVar12), 0 < iVar8)) {
        lVar14 = 0;
        do {
          iVar8 = (int)param_6[1];
          *(uint *)(param_6 + 1) = iVar8 + 1U;
          if (*(uint *)((longlong)param_6 + 0xc) < iVar8 + 1U) {
            FUN_148307d2a(param_6,iVar8);
          }
          lVar16 = *param_6;
          lVar11 = (longlong)iVar8 * 0x50;
          puVar2 = (undefined8 *)(lVar16 + 0x20 + lVar11);
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2 = (undefined8 *)(lVar16 + 0x30 + lVar11);
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2 = (undefined8 *)(lVar16 + 0x40 + lVar11);
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2 = (undefined8 *)(lVar16 + 0x10 + lVar11);
          *puVar2 = 0;
          puVar2[1] = 0;
          *(undefined8 *)(lVar16 + lVar11) = 0;
          ((undefined8 *)(lVar16 + lVar11))[1] = 0;
          *(undefined4 *)(lVar16 + 0x2c + lVar11) = 0x80;
          *(undefined4 *)(lVar16 + 0x30 + lVar11) = 0xffffffff;
          if (lVar14 < *(int *)(*(longlong *)(param_1 + 0x208) + 0x28)) {
            uVar9 = *(undefined8 *)
                     (*(longlong *)(*(longlong *)(param_1 + 0x208) + 0x20) + lVar14 * 8);
          }
          else {
            uVar9 = 0;
          }
          FUN_146c6c2c0(local_1a8,local_1a0,uVar9,(longlong)((int)param_6[1] + -1) * 0x50 + *param_6
                       );
          lVar14 = lVar14 + 1;
          iVar8 = (**(code **)(*plVar12 + 0xa0))(plVar12);
        } while (lVar14 < iVar8);
      }
      if (param_8 == (char *)0x0) {
LAB_1482da237:
        if (*(longlong *)(param_7 + 8) != 0) {
          local_240 = *puVar5;
          local_238 = *(undefined4 *)(puVar5 + 1);
          FUN_146bc855c();
        }
        local_258 = (uint *)0x0;
        uStack_250 = 0;
        FUN_146c36aac(param_1,puVar5);
        local_208 = *(longlong *)(local_1a0 + 8);
        local_200 = *(undefined4 *)(local_1a0 + 0x10);
        local_1d8 = 0;
        local_1d0 = 0;
        local_1f8 = 0;
        uStack_1f0 = 0;
        local_1cc = 0xffffffff00000080;
        local_1c4 = 0;
        local_1b8 = (undefined1 *)0x0;
        local_1b0 = 0;
        FUN_146bc855c(&local_1f8,&local_208);
        local_208 = param_1;
        FUN_146bc603c(&local_208,puVar5,0);
        if ((longlong)(int)uStack_250 != 0) {
          puVar1 = local_258 + (int)uStack_250;
          puVar15 = local_258;
          do {
            uVar3 = *puVar15;
            if ((int)uStack_1f0 != local_1c4) {
              puVar10 = local_1b8;
              if (local_1b8 == (undefined1 *)0x0) {
                puVar10 = local_1c0;
              }
              for (iVar8 = *(int *)(puVar10 + (ulonglong)(local_1b0 - 1U & uVar3) * 4); iVar8 != -1;
                  iVar8 = *(int *)(local_1f8 + (longlong)iVar8 * 0xc + 4)) {
                if (*(uint *)(local_1f8 + (longlong)iVar8 * 0xc) == uVar3) goto LAB_1482da412;
              }
            }
            FUN_146c0b0ee(param_1,uVar3,0);
LAB_1482da412:
            puVar15 = puVar15 + 1;
          } while (puVar15 != puVar1);
        }
        plVar12 = *(longlong **)(param_1 + 0x208);
        if ((plVar12 != (longlong *)0x0) &&
           (iVar8 = (**(code **)(*plVar12 + 0xa0))(plVar12), 0 < iVar8)) {
          lVar14 = 0;
          lVar16 = 0;
          do {
            if (lVar16 < *(int *)(*(longlong *)(param_1 + 0x208) + 0x28)) {
              uVar9 = *(undefined8 *)
                       (*(longlong *)(*(longlong *)(param_1 + 0x208) + 0x20) + lVar16 * 8);
            }
            else {
              uVar9 = 0;
            }
            FUN_146c6c4c0(local_1a8,*param_6 + lVar14,uVar9);
            lVar16 = lVar16 + 1;
            iVar8 = (**(code **)(*plVar12 + 0xa0))(plVar12);
            lVar14 = lVar14 + 0x50;
          } while (lVar16 < iVar8);
        }
        local_1b0 = 0;
        if (local_1b8 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        FUN_1447a082e(&local_1f8);
        if (local_258 != (uint *)0x0) {
          FUN_1400020a8();
        }
        uVar13 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
      }
      else {
        if (*param_8 == '\0') {
          pcVar4 = *(code **)(param_8 + 0x70);
          plVar12 = (longlong *)(param_8 + 0x90);
          if (*(longlong **)(param_8 + 0x80) != (longlong *)0x0) {
            plVar12 = *(longlong **)(param_8 + 0x80);
          }
          uVar9 = (**(code **)(*plVar12 + 8))();
          cVar7 = (*pcVar4)(uVar9);
          *param_8 = cVar7;
          if (cVar7 == '\0') goto LAB_1482da237;
        }
        uVar13 = 0;
      }
    }
    else {
      uVar13 = 0;
    }
    FUN_146bc7b3e(local_1a8);
  }
  else {
    if (*param_8 == '\0') {
      pcVar4 = *(code **)(param_8 + 0x70);
      plVar12 = (longlong *)(param_8 + 0x90);
      if (*(longlong **)(param_8 + 0x80) != (longlong *)0x0) {
        plVar12 = *(longlong **)(param_8 + 0x80);
      }
      uVar9 = (**(code **)(*plVar12 + 8))();
      cVar7 = (*pcVar4)(uVar9);
      *param_8 = cVar7;
      if (cVar7 == '\0') goto LAB_1482da072;
    }
    uVar13 = 0;
  }
  FUN_146be9400(&local_228);
  if (local_218 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
LAB_1482d9f7b:
  if ((local_60 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return uVar13 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482da464 FUN_1482da464 body=139 status=ok
// SIG undefined FUN_1482da464(void)

void FUN_1482da464(longlong *param_1,longlong *param_2,int param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  
  for (; param_3 != param_4; param_3 = (param_3 + 1) % (int)param_1[1]) {
    lVar2 = *param_1;
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_1446f48e2(param_2,iVar1);
    }
    *(undefined4 *)(*param_2 + (longlong)iVar1 * 4) = *(undefined4 *)(lVar2 + (longlong)param_3 * 4)
    ;
  }
  lVar2 = *param_1;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_1446f48e2(param_2,iVar1);
  }
  *(undefined4 *)(*param_2 + (longlong)iVar1 * 4) = *(undefined4 *)(lVar2 + (longlong)param_4 * 4);
  return;
}



// FUNCTION 1482da4ef FUN_1482da4ef body=534 status=ok
// SIG undefined FUN_1482da4ef(void)

/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_1482da4ef(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  void *_Src;
  int iVar1;
  char cVar2;
  ulonglong unaff_RBP;
  longlong lVar3;
  undefined1 auStack_178 [32];
  longlong local_158;
  undefined1 local_150 [64];
  undefined **local_110;
  longlong local_108 [3];
  undefined1 local_f0 [64];
  ulonglong local_b0;
  longlong local_a8 [3];
  void *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  void *local_68;
  ulonglong uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_68 = (void *)0x0;
  uStack_60 = 0;
  FUN_146c5ddfc(param_1,param_2,&local_68);
  local_80 = 0;
  uStack_78 = 0;
  local_90 = (void *)0x0;
  uStack_88 = 0;
  local_a8[1] = 0;
  local_a8[2] = 0;
  local_70 = 0;
  local_a8[0] = param_1;
  FUN_14054c6c4(local_a8 + 1,param_2);
  _Src = local_68;
  iVar1 = (int)uStack_60;
  lVar3 = (longlong)(int)uStack_60;
  uStack_88 = CONCAT44(uStack_88._4_4_,(int)uStack_60);
  if ((int)uStack_60 == 0 && uStack_88._4_4_ == 0) {
    uStack_88 = uStack_60 & 0xffffffff;
  }
  else {
    FUN_144a06ca8(&local_90,uStack_60 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(local_90,_Src,lVar3 << 2);
    }
  }
  FUN_146c7f310(local_150,local_a8);
  local_108[0] = 0;
  local_108[1] = 0;
  local_110 = &PTR_FUN_14ae72d10;
  local_108[2] = param_1;
  FUN_146c7f310(local_f0,local_150);
  local_b0 = 0xffffffff00000001;
  FUN_146bc7c1a(local_150);
  cVar2 = FUN_148314c5e(&local_110,param_3);
  if (cVar2 == '\0') {
    unaff_RBP = 0;
    local_158 = param_1;
    FUN_146bc603c(&local_158,local_108,0);
    local_b0 = local_b0 & 0xffffffff00000000;
    cVar2 = FUN_148314c5e(&local_110,param_3);
    if (cVar2 == '\0') goto LAB_1482da64d;
  }
  if (*(longlong *)(param_1 + 0x208) != 0) {
    cVar2 = FUN_14832ecfe(&local_110,param_4);
    if (cVar2 == '\0') {
      unaff_RBP = 0;
      goto LAB_1482da64d;
    }
  }
  unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),1);
LAB_1482da64d:
  local_110 = &PTR_FUN_14ae72d10;
  FUN_146bc7c1a(local_f0);
  local_110 = &PTR_LAB_14ae72d28;
  if (local_108[0] != 0) {
    FUN_1400020a8();
  }
  FUN_146bc7c1a(local_a8);
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return unaff_RBP & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482da706 FUN_1482da706 body=1374 status=ok
// SIG undefined FUN_1482da706(void)

ulonglong FUN_1482da706(longlong param_1,longlong param_2,uint param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,char param_7,undefined8 param_8,
                       longlong param_9,char *param_10)

{
  code *pcVar1;
  void *_Src;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined1 auStack_1e8 [32];
  void **local_1c8;
  undefined8 local_1c0;
  undefined8 *local_1b8;
  char *local_1b0;
  uint local_1a4;
  longlong local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined2 local_180;
  undefined1 local_17e;
  undefined4 local_17c;
  undefined1 local_178;
  undefined4 local_174;
  char local_16c [4];
  longlong local_168;
  undefined8 uStack_160;
  undefined8 local_150;
  longlong local_148;
  void *local_140;
  ulonglong uStack_138;
  undefined1 local_130;
  void *local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined8 local_f8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  longlong local_88;
  undefined4 local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  if (param_10 != (char *)0x0) {
    if (*param_10 == '\0') {
      pcVar1 = *(code **)(param_10 + 0x70);
      plVar7 = (longlong *)(param_10 + 0x90);
      if (*(longlong **)(param_10 + 0x80) != (longlong *)0x0) {
        plVar7 = *(longlong **)(param_10 + 0x80);
      }
      uVar4 = (**(code **)(*plVar7 + 8))();
      cVar2 = (*pcVar1)(uVar4);
      *param_10 = cVar2;
      if (cVar2 == '\0') goto LAB_1482da7c5;
    }
    uVar12 = 0;
    goto LAB_1482da785;
  }
LAB_1482da7c5:
  local_a8 = 0;
  local_a0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_9c = 0xffffffff00000080;
  local_94 = 0;
  local_88 = 0;
  local_80 = 0;
  local_1a4 = param_3;
  local_1a0 = param_1;
  local_198 = param_4;
  if ((((-1 < (int)param_3) && ((int)param_3 < *(int *)(param_2 + 0x98))) &&
      (lVar5 = (longlong)*(int *)(*(longlong *)(param_2 + 0x90) + (ulonglong)param_3 * 4),
      lVar5 != -1)) &&
     ((lVar5 = lVar5 * 0x38 + *(longlong *)(param_2 + 0x60), lVar5 != 0 &&
      ((longlong)*(int *)(lVar5 + 0x20) != 0)))) {
    plVar7 = *(longlong **)(lVar5 + 0x18);
    plVar11 = plVar7 + (longlong)*(int *)(lVar5 + 0x20) * 5;
    do {
      lVar5 = plVar7[1];
      if ((longlong)(int)lVar5 != 0) {
        lVar9 = *plVar7;
        lVar8 = 0;
        do {
          if (*(int *)(lVar9 + lVar8) < *(int *)(param_2 + 0x78)) {
            lVar6 = (longlong)*(int *)(lVar9 + lVar8) * 0x50;
            local_118 = *(undefined8 *)(*(longlong *)(param_2 + 0x70) + 0x10 + lVar6);
            local_110 = *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 0x18 + lVar6);
            FUN_146bc855c(&local_c8,&local_118);
          }
          lVar8 = lVar8 + 4;
        } while ((longlong)(int)lVar5 * 4 != lVar8);
      }
      plVar7 = plVar7 + 5;
    } while (plVar7 != plVar11);
  }
  lVar5 = local_1a0;
  local_1c8 = &local_128;
  local_128 = (void *)0x0;
  uStack_120 = 0;
  local_1b0 = param_10;
  local_1b8 = &local_c8;
  local_1c0 = param_6;
  cVar2 = FUN_1482db2b1(local_1a0,local_1a4,local_198,param_5);
  if (cVar2 == '\0') {
LAB_1482da978:
    uVar12 = 0;
  }
  else {
    if (param_10 != (char *)0x0) {
      if (*param_10 == '\0') {
        pcVar1 = *(code **)(param_10 + 0x70);
        plVar7 = (longlong *)(param_10 + 0x90);
        if (*(longlong **)(param_10 + 0x80) != (longlong *)0x0) {
          plVar7 = *(longlong **)(param_10 + 0x80);
        }
        uVar4 = (**(code **)(*plVar7 + 8))();
        cVar2 = (*pcVar1)(uVar4);
        *param_10 = cVar2;
        if (cVar2 == '\0') goto LAB_1482da9bb;
      }
      goto LAB_1482da978;
    }
LAB_1482da9bb:
    uVar10 = (uint)uStack_120;
    if (0 < (int)(uint)uStack_120 && param_9 != 0) {
      lVar8 = 0x20;
      lVar9 = 0;
      do {
        if (*(int *)((longlong)local_128 + lVar8) == 1) {
          uVar10 = *(uint *)((longlong)local_128 + lVar8 + -0x20);
          local_150 = *(undefined ***)
                       (*(longlong *)(*(longlong *)(lVar5 + 0x1c0) + (ulonglong)(uVar10 >> 9) * 8) +
                        8 + (ulonglong)((uVar10 & 0x1ff) << 4));
          FUN_1447cbafe(param_9,&local_190,&local_150,0);
          if (local_150._4_4_ != -1) {
            FUN_1447cbafe(param_9,&local_190,(longlong)&local_150 + 4,0);
          }
          uVar10 = (uint)uStack_120;
        }
        lVar9 = lVar9 + 1;
        lVar8 = lVar8 + 0x30;
      } while (lVar9 < (int)uVar10);
    }
    _Src = local_128;
    local_150 = &PTR_FUN_149f3c670;
    local_148 = lVar5;
    local_140 = (void *)0x0;
    local_130 = 0;
    uStack_138 = (ulonglong)uVar10;
    if (uVar10 != 0) {
      FUN_148307dbe(&local_140,uVar10);
      memcpy(local_140,_Src,(longlong)(int)uVar10 * 0x30);
    }
    local_168 = 0;
    uStack_160 = 0;
    local_1c8 = (void **)0x3f1a36e2e0000000;
    uVar12 = 0;
    cVar2 = FUN_146c6e8d6(&local_150,0,&local_168,0);
    if (cVar2 != '\0') {
      if (param_10 == (char *)0x0) {
LAB_1482dab5f:
        if (1 < (int)uStack_160) {
          lVar5 = 1;
          param_10 = local_16c;
          do {
            iVar3 = FUN_146c061e0(local_1a0,*(undefined4 *)(local_168 + -4 + lVar5 * 4),
                                  *(undefined4 *)(local_168 + lVar5 * 4));
            local_190 = CONCAT44(local_190._4_4_,iVar3);
            if (-1 < iVar3) {
              FUN_1447cbafe(param_8,param_10,&local_190,0);
            }
            lVar5 = lVar5 + 1;
          } while (lVar5 < (int)uStack_160);
        }
        uVar12 = CONCAT71((int7)((ulonglong)param_10 >> 8),1);
        if (param_7 != '\0') {
          local_190 = 0x3fb999999999999a;
          local_188 = 0x3fd0000000000000;
          local_180 = 0x101;
          local_17e = 1;
          local_17c = 0x358637bd;
          local_174 = 0x3c23d70a;
          local_178 = 0;
          local_108 = 0;
          local_f8 = 0;
          FUN_146c6f442(&local_190,local_1a0,param_8);
        }
      }
      else {
        if (*param_10 == '\0') {
          pcVar1 = *(code **)(param_10 + 0x70);
          plVar7 = (longlong *)(param_10 + 0x90);
          if (*(longlong **)(param_10 + 0x80) != (longlong *)0x0) {
            plVar7 = *(longlong **)(param_10 + 0x80);
          }
          uVar4 = (**(code **)(*plVar7 + 8))();
          cVar2 = (*pcVar1)(uVar4);
          *param_10 = cVar2;
          if (cVar2 == '\0') goto LAB_1482dab5f;
        }
        uVar12 = 0;
      }
    }
    if (local_168 != 0) {
      FUN_1400020a8();
    }
    local_150 = &PTR_FUN_149f3c670;
    if (local_140 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_128 != (void *)0x0) {
    FUN_1400020a8();
  }
  local_80 = 0;
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_c8);
LAB_1482da785:
  if ((local_70 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12 & 0xffffffff;
}



// FUNCTION 1482dac66 FUN_1482dac66 body=582 status=ok
// SIG undefined FUN_1482dac66(void)

undefined8 * FUN_1482dac66(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  uint uVar2;
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
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  uVar2 = ((int)param_3[1] - *(int *)((longlong)param_3 + 0x34)) +
          ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34));
  if (uVar2 != 0) {
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar2);
    }
    FUN_1400bac10(param_2,uVar2);
    iVar1 = 1;
    if (3 < uVar2) {
      uVar2 = (uVar2 | 1) + 0xe;
      iVar1 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      iVar1 = 1 << ((byte)iVar1 & 0x1f);
    }
    if ((*(int *)(param_2 + 9) == 0) || (*(int *)(param_2 + 9) < iVar1)) {
      *(int *)(param_2 + 9) = iVar1;
      FUN_144a56d22(param_2);
    }
  }
  local_50 = param_1 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_58);
  }
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_78 = local_58;
  local_70 = local_50;
  local_80 = param_1;
  if (iStack_44 < (int)local_50[3]) {
    do {
      FUN_1447cbafe(param_2,&local_58,(longlong)iStack_64 * 0xc + *local_80,0);
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
  }
  local_50 = param_3 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  if ((int)param_3[5] != 0) {
    FUN_1449c0562(&local_58);
  }
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_78 = local_58;
  local_70 = local_50;
  local_80 = param_3;
  if (iStack_44 < (int)local_50[3]) {
    do {
      FUN_1447cbafe(param_2,&local_58,(longlong)iStack_64 * 0xc + *local_80,0);
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482daeae FUN_1482daeae body=1026 status=ok
// SIG undefined FUN_1482daeae(void)

ulonglong FUN_1482daeae(longlong *param_1,longlong *param_2,int param_3,int *param_4,
                       longlong param_5,char *param_6)

{
  uint uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  undefined1 auStack_158 [32];
  longlong local_138;
  undefined4 local_130;
  undefined1 local_124 [4];
  longlong *local_120;
  undefined8 local_118;
  longlong *plStack_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  longlong *local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  code *local_d8 [2];
  undefined8 local_c8;
  undefined **local_b8;
  longlong *local_b0;
  longlong *local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  *param_4 = 0;
  if (param_6 != (char *)0x0) {
    if (*param_6 == '\0') {
      pcVar2 = *(code **)(param_6 + 0x70);
      plVar9 = (longlong *)(param_6 + 0x90);
      if (*(longlong **)(param_6 + 0x80) != (longlong *)0x0) {
        plVar9 = *(longlong **)(param_6 + 0x80);
      }
      uVar8 = (**(code **)(*plVar9 + 8))();
      cVar6 = (*pcVar2)(uVar8);
      *param_6 = cVar6;
      if (cVar6 == '\0') goto LAB_1482daf5c;
    }
    uVar10 = 0;
    goto LAB_1482daf2c;
  }
LAB_1482daf5c:
  local_78 = 0;
  iVar13 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  plVar9 = param_2 + 2;
  local_f8 = 0x100000000;
  local_e8 = 0xffffffff;
  local_e0 = 0;
  local_f0 = plVar9;
  if ((int)param_2[5] != 0) {
    FUN_1449c0562(&local_f8);
    iVar13 = (int)param_2[5];
  }
  local_108 = local_e8;
  uVar8 = local_108;
  local_100 = local_e0;
  local_fc = local_dc;
  local_118 = local_f8;
  plStack_110 = local_f0;
  local_108._4_4_ = (int)((ulonglong)local_e8 >> 0x20);
  if ((local_108._4_4_ != iVar13) || (local_f0 != plVar9)) {
    iVar7 = local_108._4_4_;
    local_120 = param_2;
    local_108 = uVar8;
    do {
      uVar1 = *(uint *)(*local_120 + (longlong)iVar7 * 0xc);
      local_f8 = *(longlong *)
                  (*(longlong *)(param_1[0x38] + (ulonglong)(uVar1 >> 9) * 8) + 8 +
                  (ulonglong)((uVar1 & 0x1ff) << 4));
      iVar7 = FUN_146bc96d4(param_1);
      if (iVar7 == param_3) {
        FUN_1447cbafe(&local_98,local_124,&local_f8);
      }
      if ((local_f8._4_4_ != -1) && (iVar7 = FUN_146bc96d4(param_1), iVar7 == param_3)) {
        FUN_1447cbafe(&local_98,local_124,(longlong)&local_f8 + 4);
      }
      local_108 = CONCAT44(local_108._4_4_,(uint)local_108 & ~local_118._4_4_);
      FUN_1449c0562(&local_118);
      iVar7 = local_108._4_4_;
      uVar8 = local_108;
    } while (local_120 != param_2 || (plStack_110 != plVar9 || local_108._4_4_ != iVar13));
  }
  local_108 = uVar8;
  local_118 = 0;
  plStack_110 = (longlong *)0x0;
  local_c8 = 0;
  local_b8 = &PTR_LAB_14ae72f50;
  local_d8[0] = FUN_143b04ff8;
  local_120 = param_1;
  local_b0 = param_1;
  local_a8 = param_2;
  FUN_140619b9c(&local_98,&local_f8);
  FUN_14298451c(&local_120,&local_f8,local_d8);
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  if (param_6 == (char *)0x0) {
LAB_1482db168:
    if (1 < (int)plStack_110) {
      lVar12 = 1;
      do {
        plVar9 = *(longlong **)(local_118 + lVar12 * 8);
        if (*(longlong *)(param_5 + 8) != 0) {
          local_138 = *plVar9;
          local_130 = (undefined4)plVar9[1];
          FUN_146bc855c(*(longlong *)(param_5 + 8),&local_138);
        }
        lVar4 = param_1[0x36];
        iVar13 = (int)lVar4 + 1;
        *(int *)(param_1 + 0x36) = iVar13;
        lVar5 = plVar9[1];
        if ((longlong)(int)lVar5 != 0) {
          lVar3 = *plVar9;
          lVar11 = 0;
          do {
            if ((char)param_1[0x35] == '\x01') {
              *(int *)(*(longlong *)
                        (param_1[0x33] + (ulonglong)(*(uint *)(lVar3 + lVar11) >> 9) * 8) +
                      (ulonglong)(*(uint *)(lVar3 + lVar11) & 0x1ff) * 4) = (int)lVar4;
              iVar7 = (int)param_1[0x36];
              if ((int)param_1[0x36] < iVar13) {
                iVar7 = iVar13;
              }
              *(int *)(param_1 + 0x36) = iVar7;
            }
            lVar11 = lVar11 + 4;
          } while ((longlong)(int)lVar5 * 4 != lVar11);
        }
        lVar12 = lVar12 + 1;
      } while (lVar12 < (int)plStack_110);
    }
    *param_4 = (int)plStack_110;
    uVar10 = CONCAT71((int7)((ulonglong)param_4 >> 8),1);
  }
  else {
    if (*param_6 == '\0') {
      pcVar2 = *(code **)(param_6 + 0x70);
      plVar9 = (longlong *)(param_6 + 0x90);
      if (*(longlong **)(param_6 + 0x80) != (longlong *)0x0) {
        plVar9 = *(longlong **)(param_6 + 0x80);
      }
      uVar8 = (**(code **)(*plVar9 + 8))();
      cVar6 = (*pcVar2)(uVar8);
      *param_6 = cVar6;
      if (cVar6 == '\0') goto LAB_1482db168;
    }
    uVar10 = 0;
  }
  FUN_146be9400(&local_118);
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_98);
LAB_1482daf2c:
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10 & 0xffffffff;
}



// FUNCTION 1482db2b1 FUN_1482db2b1 body=6162 status=ok
// SIG undefined FUN_1482db2b1(void)

undefined4
FUN_1482db2b1(longlong param_1,int param_2,uint *param_3,uint *param_4,longlong *param_5,
             double param_6,longlong *param_7,char *param_8)

{
  undefined4 *puVar1;
  double *pdVar2;
  int *piVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  char cVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  undefined8 uVar22;
  longlong *plVar23;
  undefined1 *puVar24;
  longlong lVar25;
  code **ppcVar26;
  longlong lVar27;
  ulonglong uVar28;
  longlong lVar29;
  undefined4 uVar30;
  uint uVar31;
  bool bVar32;
  ulonglong uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined1 auStack_4b8 [36];
  uint local_494;
  float local_490;
  uint local_48c;
  int local_488;
  float local_484;
  double local_480;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_460;
  code *local_458;
  undefined8 local_450;
  double local_448;
  double local_440;
  undefined8 uStack_438;
  undefined4 local_430;
  double *local_428;
  longlong local_420;
  undefined1 *local_418;
  int *local_410;
  undefined1 local_408 [24];
  int local_3f0;
  int iStack_3ec;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  int local_3d0;
  undefined4 uStack_3cc;
  uint local_3c4;
  double local_3c0;
  double local_3b8;
  double local_3b0;
  double local_3a8;
  double dStack_3a0;
  double local_398;
  undefined4 local_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  double local_378;
  undefined8 local_368;
  uint uStack_360;
  undefined4 uStack_35c;
  undefined4 local_358;
  undefined4 uStack_354;
  int iStack_350;
  int iStack_34c;
  undefined8 local_348;
  undefined4 local_340;
  undefined4 uStack_33c;
  int iStack_338;
  undefined4 uStack_334;
  undefined4 local_330;
  undefined4 uStack_32c;
  int iStack_328;
  int iStack_324;
  undefined8 local_320;
  undefined8 local_318;
  undefined4 local_30c;
  longlong local_308 [2];
  longlong *local_2f8;
  longlong local_2e8 [4];
  code *local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  int iStack_2b0;
  int iStack_2ac;
  undefined **local_2a8;
  longlong local_2a0;
  undefined8 uStack_298;
  undefined4 local_290;
  undefined4 uStack_28c;
  int iStack_288;
  int iStack_284;
  undefined8 local_280;
  undefined8 local_278;
  uint local_270;
  undefined4 local_26c;
  longlong local_268 [2];
  longlong *local_258;
  longlong local_248 [4];
  longlong local_228 [2];
  longlong *local_218;
  longlong local_208 [4];
  code *local_1e8;
  undefined8 uStack_1e0;
  int iStack_1d0;
  int iStack_1cc;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  int iStack_1b8;
  undefined4 uStack_1b4;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  int iStack_1a8;
  int iStack_1a4;
  undefined8 local_1a0;
  longlong local_198;
  undefined8 uStack_190;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_16c;
  int local_164;
  undefined1 local_160 [8];
  undefined1 *local_158;
  int local_150;
  longlong local_148;
  undefined8 uStack_140;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_11c;
  int local_114;
  undefined1 local_110 [8];
  undefined1 *local_108;
  int local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_4b8;
  if (param_8 != (char *)0x0) {
    if (*param_8 == '\0') {
      pcVar9 = *(code **)(param_8 + 0x70);
      plVar23 = (longlong *)(param_8 + 0x90);
      if (*(longlong **)(param_8 + 0x80) != (longlong *)0x0) {
        plVar23 = *(longlong **)(param_8 + 0x80);
      }
      uVar22 = (**(code **)(*plVar23 + 8))();
      cVar17 = (*pcVar9)(uVar22);
      *param_8 = cVar17;
      if (cVar17 == '\0') goto LAB_1482db389;
    }
    uVar36 = 0;
    goto LAB_1482db72d;
  }
LAB_1482db389:
  local_128 = 0;
  local_120 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_11c = 0xffffffff00000080;
  local_114 = 0;
  local_108 = (undefined1 *)0x0;
  local_100 = 0;
  local_178 = 0;
  local_170 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_16c = 0xffffffff00000080;
  local_164 = 0;
  local_158 = (undefined1 *)0x0;
  local_150 = 0;
  if ((char)param_3[1] == '\x01') {
    lVar29 = *(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(*param_3 >> 9) * 8);
    uVar33 = (ulonglong)(*param_3 & 0x1ff);
    local_378 = *(double *)(lVar29 + 0x10 + uVar33 * 0x18);
    puVar1 = (undefined4 *)(lVar29 + uVar33 * 0x18);
    local_388 = *puVar1;
    uStack_384 = puVar1[1];
    uStack_380 = puVar1[2];
    uStack_37c = puVar1[3];
  }
  else {
    FUN_146c13ee2(param_1,&local_388,*param_3,*(undefined8 *)(param_3 + 8));
  }
  if ((char)param_4[1] == '\x01') {
    lVar29 = *(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(*param_4 >> 9) * 8);
    uVar33 = (ulonglong)(*param_4 & 0x1ff);
    local_398 = *(double *)(lVar29 + 0x10 + uVar33 * 0x18);
    pdVar2 = (double *)(lVar29 + uVar33 * 0x18);
    local_3a8 = *pdVar2;
    dStack_3a0 = pdVar2[1];
  }
  else {
    FUN_146c13ee2(param_1,&local_3a8,*param_4,*(undefined8 *)(param_4 + 8));
  }
  local_480 = local_378;
  local_3b0 = local_398 - local_378;
  dVar15 = (double)CONCAT44(uStack_384,local_388);
  dVar16 = (double)CONCAT44(uStack_37c,uStack_380);
  local_3b8 = dStack_3a0 - dVar16;
  dVar11 = local_3a8 - dVar15;
  dVar39 = SQRT(local_3b0 * local_3b0 + dVar11 * dVar11 + local_3b8 * local_3b8);
  dVar10 = 1.0 / dVar39;
  local_3c0 = (double)(-(ulonglong)(0.0 < dVar39) & (ulonglong)(dVar11 * dVar10));
  fVar44 = SUB84(local_3c0,0);
  if (0.0 < dVar39) {
    local_3b0 = local_3b0 * dVar10;
    local_3b8 = local_3b8 * dVar10;
  }
  else {
    local_3b8 = 0.0;
    local_3b0 = 0.0;
  }
  dVar10 = *(double *)(param_3 + 6) * local_3b0 +
           *(double *)(param_3 + 2) * local_3c0 + *(double *)(param_3 + 4) * local_3b8;
  dVar39 = *(double *)(param_3 + 6) - local_3b0 * dVar10;
  dVar11 = *(double *)(param_3 + 4) - local_3b8 * dVar10;
  dVar40 = *(double *)(param_3 + 2) - dVar10 * local_3c0;
  dVar12 = SQRT(dVar39 * dVar39 + dVar40 * dVar40 + dVar11 * dVar11);
  dVar10 = 1.0 / dVar12;
  if (9.999999747378752e-05 < dVar12) {
    dVar39 = dVar39 * dVar10;
    dVar11 = dVar11 * dVar10;
  }
  else {
    dVar11 = 0.0;
    dVar39 = 0.0;
  }
  dVar10 = (double)(-(ulonglong)(9.999999747378752e-05 < dVar12) & (ulonglong)(dVar40 * dVar10));
  dVar12 = *(double *)(param_4 + 6) * local_3b0 +
           *(double *)(param_4 + 2) * local_3c0 + local_3b8 * *(double *)(param_4 + 4);
  dVar40 = *(double *)(param_4 + 6) - local_3b0 * dVar12;
  dVar41 = *(double *)(param_4 + 4) - local_3b8 * dVar12;
  dVar12 = *(double *)(param_4 + 2) - dVar12 * local_3c0;
  dVar42 = SQRT(dVar40 * dVar40 + dVar12 * dVar12 + dVar41 * dVar41);
  dVar43 = 1.0 / dVar42;
  if (9.999999747378752e-05 < dVar42) {
    dVar40 = dVar40 * dVar43;
    dVar41 = dVar41 * dVar43;
  }
  else {
    dVar41 = 0.0;
    dVar40 = 0.0;
  }
  if (((((dVar10 != 0.0) || (NAN(dVar10))) || (dVar11 != 0.0)) || ((NAN(dVar11) || (dVar39 != 0.0)))
      ) || (NAN(dVar39))) {
    dVar12 = (double)(-(ulonglong)(9.999999747378752e-05 < dVar42) & (ulonglong)(dVar12 * dVar43));
    if (((dVar12 == 0.0) && (!NAN(dVar12))) &&
       ((dVar41 == 0.0 && (((!NAN(dVar41) && (dVar40 == 0.0)) && (!NAN(dVar40)))))))
    goto LAB_1482db6d7;
    dVar42 = dVar39 * dVar40 + dVar12 * dVar10 + dVar11 * dVar41;
    uVar33 = -(ulonglong)(dVar42 < 0.0);
    if (dVar42 < 0.0) {
      dVar40 = -dVar40;
      dVar41 = -dVar41;
    }
    dVar39 = dVar39 + dVar40;
    dVar11 = dVar11 + dVar41;
    dVar10 = dVar10 + (double)(~uVar33 & (ulonglong)dVar12 | (ulonglong)-dVar12 & uVar33);
    dVar40 = SQRT(dVar39 * dVar39 + dVar10 * dVar10 + dVar11 * dVar11);
    dVar12 = 1.0 / dVar40;
    dVar10 = (double)(-(ulonglong)(0.0 < dVar40) & (ulonglong)(dVar10 * dVar12));
    if (0.0 < dVar40) {
      dVar39 = dVar39 * dVar12;
      dVar11 = dVar11 * dVar12;
    }
    else {
      dVar11 = 0.0;
      dVar39 = 0.0;
    }
    if (((dVar10 == 0.0) && (!NAN(dVar10))) &&
       (((dVar11 == 0.0 && ((!NAN(dVar11) && (dVar39 == 0.0)))) && (!NAN(dVar39)))))
    goto LAB_1482db6d7;
    *(undefined4 *)(param_5 + 1) = 0;
    if (*(int *)((longlong)param_5 + 0xc) != 0) {
      FUN_146c7fa98(param_5,0);
    }
    uVar31 = *param_3;
    if ((char)param_3[1] == '\x01') {
      iVar20 = (int)param_5[1];
      *(uint *)(param_5 + 1) = iVar20 + 1U;
      if (*(uint *)((longlong)param_5 + 0xc) < iVar20 + 1U) {
        FUN_146c7feae(param_5,iVar20);
      }
      lVar25 = *param_5;
      lVar27 = (longlong)iVar20 * 0x30;
      lVar29 = lVar25 + lVar27;
      *(uint *)(lVar25 + lVar27) = uVar31;
      *(undefined8 *)(lVar25 + 8 + lVar27) = 0x3ff0000000000000;
      puVar4 = (undefined8 *)(lVar25 + 0x10 + lVar27);
      *puVar4 = 0;
      puVar4[1] = 0;
      *(undefined4 *)(lVar25 + 0x20 + lVar27) = 0;
    }
    else {
      uVar33 = *(ulonglong *)
                (*(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(uVar31 >> 9) * 8) +
                (ulonglong)((uVar31 & 0x1ff) << 4));
      lVar29 = *(longlong *)(*(longlong *)(param_1 + 0x10) + (uVar33 >> 9 & 0x7fffff) * 8);
      uVar28 = uVar33 & 0x1ff;
      dVar12 = *(double *)(lVar29 + uVar28 * 0x18);
      dVar40 = *(double *)(lVar29 + 8 + uVar28 * 0x18);
      dVar13 = *(double *)(lVar29 + 0x10 + uVar28 * 0x18) - local_480;
      lVar29 = *(longlong *)(*(longlong *)(param_1 + 0x10) + (uVar33 >> 0x29) * 8);
      uVar33 = uVar33 >> 0x20 & 0x1ff;
      dVar41 = *(double *)(lVar29 + uVar33 * 0x18);
      dVar42 = *(double *)(lVar29 + 8 + uVar33 * 0x18);
      dVar14 = *(double *)(lVar29 + 0x10 + uVar33 * 0x18) - local_480;
      dVar43 = *(double *)(param_3 + 8);
      iVar20 = (int)param_5[1];
      *(uint *)(param_5 + 1) = iVar20 + 1U;
      if (*(uint *)((longlong)param_5 + 0xc) < iVar20 + 1U) {
        FUN_146c7feae(param_5,iVar20);
      }
      local_490 = (float)(dVar13 * dVar39 + (dVar12 - dVar15) * dVar10 + (dVar40 - dVar16) * dVar11)
      ;
      fVar44 = (float)(dVar14 * dVar39 + (dVar41 - dVar15) * dVar10 + (dVar42 - dVar16) * dVar11);
      lVar25 = *param_5;
      lVar27 = (longlong)iVar20 * 0x30;
      lVar29 = lVar25 + lVar27;
      *(uint *)(lVar25 + lVar27) = uVar31;
      *(double *)(lVar25 + 8 + lVar27) = dVar43;
      *(double *)(lVar25 + 0x10 + lVar27) = 1.0 - dVar43;
      *(undefined8 *)(lVar25 + 0x18 + lVar27) = 0;
      *(undefined4 *)(lVar25 + 0x20 + lVar27) = 1;
    }
    *(undefined4 *)(lVar29 + 0x28) = 0xffffffff;
    bVar32 = ((uint *)*param_5)[8] == 0;
    local_3c4 = *(uint *)*param_5;
    uVar30 = 1;
    if ((local_3c4 != *param_4) || (uVar36 = uVar30, (bool)(char)param_4[1] != bVar32)) {
      local_458 = (code *)(param_1 + 0xb8);
      local_48c = 0xffffffff;
      local_488 = param_2;
      do {
        if (param_8 != (char *)0x0) {
          if (*param_8 != '\0') goto LAB_1482db6d7;
          pcVar9 = *(code **)(param_8 + 0x70);
          plVar23 = (longlong *)(param_8 + 0x90);
          if (*(longlong **)(param_8 + 0x80) != (longlong *)0x0) {
            plVar23 = *(longlong **)(param_8 + 0x80);
          }
          uVar22 = (**(code **)(*plVar23 + 8))();
          cVar17 = (*pcVar9)(uVar22);
          *param_8 = cVar17;
          if (cVar17 != '\0') goto LAB_1482db6d7;
        }
        if (bVar32) {
          if ((int)uStack_140 != local_114) {
            puVar24 = local_108;
            if (local_108 == (undefined1 *)0x0) {
              puVar24 = local_110;
            }
            for (iVar20 = *(int *)(puVar24 + (ulonglong)(local_100 - 1U & local_3c4) * 4);
                iVar20 != -1; iVar20 = *(int *)(local_148 + (longlong)iVar20 * 0xc + 4)) {
              if (*(uint *)(local_148 + (longlong)iVar20 * 0xc) == local_3c4) goto LAB_1482db6d7;
            }
          }
          plVar23 = &local_148;
        }
        else {
          if ((int)uStack_190 != local_164) {
            puVar24 = local_158;
            if (local_158 == (undefined1 *)0x0) {
              puVar24 = local_160;
            }
            for (iVar20 = *(int *)(puVar24 + (ulonglong)(local_150 - 1U & local_3c4) * 4);
                iVar20 != -1; iVar20 = *(int *)(local_198 + (longlong)iVar20 * 0xc + 4)) {
              if (*(uint *)(local_198 + (longlong)iVar20 * 0xc) == local_3c4) goto LAB_1482db6d7;
            }
          }
          plVar23 = &local_198;
        }
        FUN_1447cbafe(plVar23,&local_2c8,&local_3c4,0);
        if (bVar32) {
          local_3f0 = -1;
          uStack_3e8 = 0x3ff0000000000000;
          local_3e0 = 0;
          uStack_3d8 = 0;
          local_3d0 = 0;
          FUN_146c6c60c((longlong)((int)param_5[1] + -1) * 0x30 + *param_5,local_408,param_1);
          local_2b8 = 0;
          local_2a8 = &PTR_LAB_149f3aae0;
          uStack_298 = CONCAT44(uStack_298._4_4_,local_3c4);
          local_2c8 = FUN_146be9588;
          local_368 = local_458;
          uStack_360 = local_3c4;
          local_2a0 = param_1;
          FUN_146be94ac(local_228,&local_368,&local_2c8);
          local_278 = 0xffffffffffffffff;
          local_268[0] = 0;
          local_258 = (longlong *)0x0;
          local_2c8 = local_1e8;
          uStack_2c0 = uStack_1e0;
          iStack_2b0 = iStack_1d0;
          iStack_2ac = iStack_1cc;
          local_2a8 = (undefined **)local_1c8;
          uStack_298 = CONCAT44(uStack_1b4,iStack_1b8);
          local_290 = local_1b0;
          uStack_28c = uStack_1ac;
          iStack_288 = iStack_1a8;
          iStack_284 = iStack_1a4;
          local_280 = local_1a0;
          FUN_146be971a(local_268,local_228);
          local_26c = 0;
          FUN_146bfd1f0(&local_2c8);
          local_318 = 0xffffffffffffffff;
          local_308[0] = 0;
          local_2f8 = (longlong *)0x0;
          local_368 = (code *)CONCAT44(uStack_1bc,local_1c0);
          uStack_360 = iStack_1b8;
          uStack_35c = uStack_1b4;
          local_358 = local_1b0;
          uStack_354 = uStack_1ac;
          iStack_350 = iStack_1a8;
          iStack_34c = iStack_1a4;
          local_348 = local_1a0;
          local_340 = local_1c0;
          uStack_33c = uStack_1bc;
          iStack_338 = iStack_1b8;
          uStack_334 = uStack_1b4;
          local_330 = local_1b0;
          uStack_32c = uStack_1ac;
          iStack_328 = iStack_1a8;
          iStack_324 = iStack_1a4;
          local_320 = local_1a0;
          FUN_146be971a(local_308,local_228);
          local_30c = 0;
          uVar31 = 0xffffffff;
          ppcVar26 = (code **)&local_368;
          while( true ) {
            FUN_146bfd1f0(ppcVar26);
            uVar19 = local_270;
            if ((((local_2c8 == local_368) && ((int)uStack_2c0 == uStack_360)) &&
                (iStack_2b0 == iStack_350)) && (iStack_2ac == iStack_34c)) break;
            ppcVar26 = &local_2c8;
            if (local_270 != local_48c) {
              iVar20 = FUN_146bc96d4(param_1,local_270);
              ppcVar26 = &local_2c8;
              if (iVar20 == local_488) {
                if ((char)param_4[1] == '\x01') {
                  uVar33 = (ulonglong)(uVar19 & 0x1ff);
                }
                else {
                  lVar29 = *(longlong *)
                            (*(longlong *)(param_1 + 0x180) + (ulonglong)(uVar19 >> 9) * 8);
                  uVar33 = (ulonglong)(uVar19 & 0x1ff);
                  local_448 = (double)CONCAT44(local_448._4_4_,
                                               *(undefined4 *)(lVar29 + 8 + uVar33 * 0xc));
                  local_450 = *(undefined8 *)(lVar29 + uVar33 * 0xc);
                  uVar21 = *param_4;
                  lVar29 = 0;
                  do {
                    if (uVar21 == *(uint *)((longlong)&local_450 + lVar29 * 4)) {
                      dVar12 = *(double *)(param_4 + 8);
                      iVar20 = (int)param_5[1];
                      *(uint *)(param_5 + 1) = iVar20 + 1U;
                      if (*(uint *)((longlong)param_5 + 0xc) < iVar20 + 1U) {
                        FUN_146c7feae(param_5,iVar20);
                      }
                      lVar29 = *param_5;
                      lVar25 = (longlong)iVar20 * 0x30;
                      *(uint *)(lVar29 + lVar25) = uVar21;
                      *(double *)(lVar29 + 8 + lVar25) = dVar12;
                      *(double *)(lVar29 + 0x10 + lVar25) = 1.0 - dVar12;
                      *(undefined8 *)(lVar29 + 0x18 + lVar25) = 0;
                      *(undefined4 *)(lVar29 + 0x20 + lVar25) = 1;
                      *(undefined4 *)(lVar29 + 0x28 + lVar25) = 0xffffffff;
                      uVar36 = (undefined4)CONCAT71((int7)(int3)((uint)iVar20 >> 8),1);
                      goto LAB_1482dc57d;
                    }
                    lVar29 = lVar29 + 1;
                  } while (lVar29 != 3);
                }
                lVar29 = *(longlong *)
                          (*(longlong *)(param_1 + 0x130) + (ulonglong)(uVar19 >> 9) * 8);
                uVar21 = *(uint *)(lVar29 + uVar33 * 0xc);
                uVar7 = *(uint *)(lVar29 + 4 + uVar33 * 0xc);
                uVar8 = *(uint *)(lVar29 + 8 + uVar33 * 0xc);
                if (uVar21 == local_3c4) {
                  uVar21 = uVar8;
                }
                if (uVar7 == local_3c4) {
                  uVar7 = uVar8;
                }
                local_484 = fVar44;
                if (((char)param_4[1] != '\0') &&
                   ((uVar8 = *param_4, uVar8 == uVar21 || (uVar8 == uVar7)))) {
                  iVar20 = (int)param_5[1];
                  *(uint *)(param_5 + 1) = iVar20 + 1U;
                  if (*(uint *)((longlong)param_5 + 0xc) < iVar20 + 1U) {
                    FUN_146c7feae(param_5,iVar20);
                  }
                  lVar29 = *param_5;
                  lVar25 = (longlong)iVar20 * 0x30;
                  *(uint *)(lVar29 + lVar25) = uVar8;
                  *(undefined8 *)(lVar29 + 8 + lVar25) = 0x3ff0000000000000;
                  puVar4 = (undefined8 *)(lVar29 + 0x10 + lVar25);
                  *puVar4 = 0;
                  puVar4[1] = 0;
                  *(undefined4 *)(lVar29 + 0x20 + lVar25) = 0;
                  *(undefined4 *)(lVar29 + 0x28 + lVar25) = 0xffffffff;
                  uVar36 = (undefined4)CONCAT71((int7)(int3)((uint)iVar20 >> 8),1);
                  fVar44 = local_484;
                  goto LAB_1482dc57d;
                }
                lVar29 = *(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar21 >> 9) * 8)
                ;
                uVar33 = (ulonglong)(uVar21 & 0x1ff);
                uVar37 = 0;
                uVar38 = 0;
                dVar12 = (*(double *)(lVar29 + 0x10 + uVar33 * 0x18) - local_480) * dVar39 +
                         (*(double *)(lVar29 + uVar33 * 0x18) - dVar15) * dVar10 +
                         (*(double *)(lVar29 + 8 + uVar33 * 0x18) - dVar16) * dVar11;
                uVar36 = (undefined4)((ulonglong)dVar12 >> 0x20);
                fVar45 = (float)dVar12;
                lVar29 = *(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar7 >> 9) * 8);
                uVar33 = (ulonglong)(uVar7 & 0x1ff);
                dVar12 = *(double *)(lVar29 + uVar33 * 0x18);
                uVar22 = *(undefined8 *)(lVar29 + 8 + uVar33 * 0x18);
                uVar34 = (undefined4)uVar22;
                uVar35 = (undefined4)((ulonglong)uVar22 >> 0x20);
                dVar40 = *(double *)(lVar29 + 0x10 + uVar33 * 0x18);
                local_428 = &local_3c0;
                local_418 = local_408;
                local_410 = &local_3f0;
                local_420 = param_1;
                if ((double)ABS(fVar45) <= param_6) {
                  local_494 = uVar31;
                  local_460 = uVar22;
                  if ((int)param_7[1] != *(int *)((longlong)param_7 + 0x34)) {
                    plVar23 = param_7 + 7;
                    if ((longlong *)param_7[8] != (longlong *)0x0) {
                      plVar23 = (longlong *)param_7[8];
                    }
                    iVar20 = *(int *)((longlong)plVar23 +
                                     (ulonglong)((int)param_7[9] - 1U & uVar21) * 4);
                    if (iVar20 != -1) {
                      do {
                        if (*(uint *)(*param_7 + (longlong)iVar20 * 0xc) == uVar21) {
                          bVar32 = false;
                          goto LAB_1482dc915;
                        }
                        iVar20 = *(int *)(*param_7 + (longlong)iVar20 * 0xc + 4);
                      } while (iVar20 != -1);
                    }
                  }
                  local_450 = CONCAT44(local_450._4_4_,uVar21);
                  local_448 = 1.0;
                  local_440 = 0.0;
                  uStack_438 = 0;
                  local_430 = 0;
                  local_478 = CONCAT44(uVar36,fVar45);
                  uStack_470 = 0;
                  FUN_143aff332(&local_428,&local_450);
                  bVar32 = true;
                  fVar45 = (float)local_478;
                  uVar36 = local_478._4_4_;
                  uVar37 = (undefined4)uStack_470;
                  uVar38 = uStack_470._4_4_;
LAB_1482dc915:
                  uVar34 = (undefined4)local_460;
                  uVar35 = (undefined4)((ulonglong)local_460 >> 0x20);
                  uVar31 = local_494;
                }
                else {
                  bVar32 = false;
                }
                fVar44 = local_484;
                fVar46 = (float)((dVar40 - local_480) * dVar39 +
                                (dVar12 - dVar15) * dVar10 +
                                ((double)CONCAT44(uVar35,uVar34) - dVar16) * dVar11);
                if ((double)ABS(fVar46) <= param_6) {
                  if ((int)param_7[1] != *(int *)((longlong)param_7 + 0x34)) {
                    plVar23 = param_7 + 7;
                    if ((longlong *)param_7[8] != (longlong *)0x0) {
                      plVar23 = (longlong *)param_7[8];
                    }
                    iVar20 = *(int *)((longlong)plVar23 +
                                     (ulonglong)((int)param_7[9] - 1U & uVar7) * 4);
                    if (iVar20 != -1) {
                      do {
                        if (*(uint *)(*param_7 + (longlong)iVar20 * 0xc) == uVar7)
                        goto LAB_1482dc715;
                        iVar20 = *(int *)(*param_7 + (longlong)iVar20 * 0xc + 4);
                      } while (iVar20 != -1);
                    }
                  }
                  local_450 = CONCAT44(local_450._4_4_,uVar7);
                  local_448 = 1.0;
                  local_440 = 0.0;
                  uStack_438 = 0;
                  local_430 = 0;
                  FUN_143aff332(&local_428,&local_450);
                }
                else {
LAB_1482dc715:
                  if (fVar45 * fVar46 < 0.0 && !bVar32) {
                    local_478 = CONCAT44(uVar36,fVar45);
                    uStack_470 = CONCAT44(uVar38,uVar37);
                    local_494 = uVar21;
                    uVar21 = FUN_146c085f4(param_1,uVar21);
                    local_448 = (double)((float)local_478 / ((float)local_478 - fVar46));
                    if (local_494 !=
                        *(uint *)(*(longlong *)
                                   (*(longlong *)(param_1 + 0x1c0) + (ulonglong)(uVar21 >> 9) * 8) +
                                 (ulonglong)((uVar21 & 0x1ff) << 4))) {
                      local_448 = 1.0 - local_448;
                    }
                    local_450 = CONCAT44(local_450._4_4_,uVar21);
                    local_440 = 1.0 - local_448;
                    uStack_438 = 0;
                    local_430 = 1;
                    cVar17 = FUN_143aff332(&local_428,&local_450);
                    if ((cVar17 != '\0') &&
                       (fVar44 = (float)local_478, uVar31 = uVar19, local_490 = fVar46,
                       local_494 ==
                       *(uint *)(*(longlong *)
                                  (*(longlong *)(param_1 + 0x1c0) + (ulonglong)(uVar21 >> 9) * 8) +
                                (ulonglong)((uVar21 & 0x1ff) << 4)))) {
                      local_490 = (float)local_478;
                      fVar44 = fVar46;
                    }
                  }
                }
                ppcVar26 = &local_2c8;
              }
            }
          }
          uVar36 = 0;
LAB_1482dc57d:
          if (local_308[0] != 0) {
            plVar23 = local_2f8;
            if (local_2f8 == (longlong *)0x0) {
              plVar23 = local_2e8;
            }
            (**(code **)(*plVar23 + 0x10))();
          }
          if (local_268[0] != 0) {
            plVar23 = local_258;
            if (local_258 == (longlong *)0x0) {
              plVar23 = local_248;
            }
            (**(code **)(*plVar23 + 0x10))();
          }
          if (local_228[0] != 0) {
            plVar23 = local_218;
            if (local_218 == (longlong *)0x0) {
              plVar23 = local_208;
            }
            (**(code **)(*plVar23 + 0x10))();
          }
          if (local_3f0 == -1 || (char)uVar36 != '\0') break;
          iVar20 = (int)param_5[1];
          *(uint *)(param_5 + 1) = iVar20 + 1U;
          if (*(uint *)((longlong)param_5 + 0xc) < iVar20 + 1U) {
            FUN_146c7feae(param_5,iVar20);
          }
          lVar29 = *param_5;
          lVar25 = (longlong)iVar20 * 0x30;
          *(ulonglong *)(lVar29 + 0x20 + lVar25) = CONCAT44(uStack_3cc,local_3d0);
          puVar4 = (undefined8 *)(lVar29 + 0x10 + lVar25);
          *puVar4 = local_3e0;
          puVar4[1] = uStack_3d8;
          piVar3 = (int *)(lVar29 + lVar25);
          *piVar3 = local_3f0;
          piVar3[1] = iStack_3ec;
          piVar3[2] = (int)uStack_3e8;
          piVar3[3] = uStack_3e8._4_4_;
          *(undefined4 *)(lVar29 + 0x28 + lVar25) = 0xffffffff;
          local_48c = uVar31;
          if (local_3d0 != 1) {
            local_48c = 0xffffffff;
          }
        }
        else {
          lVar29 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(local_3c4 >> 9) * 8);
          uVar33 = (ulonglong)((local_3c4 & 0x1ff) << 4);
          iVar20 = *(int *)(lVar29 + uVar33);
          iVar5 = *(int *)(lVar29 + 4 + uVar33);
          uVar31 = *(uint *)(lVar29 + 8 + uVar33);
          uVar19 = *(uint *)(lVar29 + 0xc + uVar33);
          uVar21 = uVar19;
          if (((uVar31 != local_48c) && (uVar21 = uVar31, uVar19 != local_48c)) &&
             (iVar18 = FUN_146bc96d4(param_1,uVar31), uVar21 = uVar19, iVar18 == local_488)) {
            uVar21 = uVar31;
          }
          if ((uVar21 == 0xffffffff) ||
             (iVar18 = FUN_146bc96d4(param_1,uVar21), iVar18 != local_488)) goto LAB_1482db6d7;
          lVar29 = *(longlong *)(*(longlong *)(param_1 + 0x130) + (ulonglong)(uVar21 >> 9) * 8);
          uVar33 = (ulonglong)(uVar21 & 0x1ff);
          uStack_2c0 = CONCAT44(uStack_2c0._4_4_,*(undefined4 *)(lVar29 + 8 + uVar33 * 0xc));
          local_2c8 = *(code **)(lVar29 + uVar33 * 0xc);
          lVar29 = 0;
          do {
            lVar27 = lVar29 + 1;
            lVar25 = 0;
            if (lVar29 != 2) {
              lVar25 = lVar27;
            }
            iVar6 = *(int *)((longlong)&local_2c8 + lVar25 * 4);
            iVar18 = *(int *)((longlong)&local_2c8 + lVar29 * 4);
            if (((iVar18 == iVar20) || (bVar32 = iVar6 == iVar20, iVar6 = iVar18, bVar32)) &&
               (iVar6 == iVar5)) {
              uVar28 = (ulonglong)((int)lVar29 - 1);
              if (lVar29 == 0) {
                uVar28 = 2;
              }
              uVar31 = *(uint *)((longlong)&local_2c8 + uVar28 * 4);
              goto LAB_1482dbd59;
            }
            lVar29 = lVar27;
          } while (lVar27 != 3);
          uVar31 = 0xffffffff;
LAB_1482dbd59:
          uVar19 = *param_4;
          local_48c = uVar21;
          if (((char)param_4[1] == '\x01') && (uVar19 == uVar31)) {
            iVar20 = (int)param_5[1];
            *(uint *)(param_5 + 1) = iVar20 + 1U;
            if (*(uint *)((longlong)param_5 + 0xc) < iVar20 + 1U) {
              FUN_146c7feae(param_5,iVar20);
            }
            lVar29 = *param_5;
            lVar25 = (longlong)iVar20 * 0x30;
            *(uint *)(lVar29 + lVar25) = uVar31;
            *(undefined8 *)(lVar29 + 8 + lVar25) = 0x3ff0000000000000;
            puVar4 = (undefined8 *)(lVar29 + 0x10 + lVar25);
            *puVar4 = 0;
            puVar4[1] = 0;
            *(undefined4 *)(lVar29 + 0x20 + lVar25) = 0;
LAB_1482dc2e6:
            *(undefined4 *)(lVar29 + 0x28 + lVar25) = 0xffffffff;
            uVar36 = uVar30;
            break;
          }
          if ((char)param_4[1] == '\0') {
            lVar29 = *(longlong *)(*(longlong *)(param_1 + 0x180) + (ulonglong)(uVar21 >> 9) * 8);
            uStack_2c0 = CONCAT44(uStack_2c0._4_4_,*(undefined4 *)(lVar29 + 8 + uVar33 * 0xc));
            local_2c8 = *(code **)(lVar29 + uVar33 * 0xc);
            lVar29 = 0;
            do {
              if (uVar19 == *(uint *)((longlong)&local_2c8 + lVar29 * 4)) {
                dVar10 = *(double *)(param_4 + 8);
                iVar20 = (int)param_5[1];
                *(uint *)(param_5 + 1) = iVar20 + 1U;
                if (*(uint *)((longlong)param_5 + 0xc) < iVar20 + 1U) {
                  FUN_146c7feae(param_5,iVar20);
                }
                lVar29 = *param_5;
                lVar25 = (longlong)iVar20 * 0x30;
                *(uint *)(lVar29 + lVar25) = uVar19;
                *(double *)(lVar29 + 8 + lVar25) = dVar10;
                *(double *)(lVar29 + 0x10 + lVar25) = 1.0 - dVar10;
                *(undefined8 *)(lVar29 + 0x18 + lVar25) = 0;
                *(undefined4 *)(lVar29 + 0x20 + lVar25) = 1;
                goto LAB_1482dc2e6;
              }
              lVar29 = lVar29 + 1;
            } while (lVar29 != 3);
          }
          lVar29 = *(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar31 >> 9) * 8);
          uVar33 = (ulonglong)(uVar31 & 0x1ff);
          fVar45 = (float)((*(double *)(lVar29 + 0x10 + uVar33 * 0x18) - local_480) * dVar39 +
                          (*(double *)(lVar29 + uVar33 * 0x18) - dVar15) * dVar10 +
                          (*(double *)(lVar29 + 8 + uVar33 * 0x18) - dVar16) * dVar11);
          if ((double)ABS(fVar45) <= param_6) {
            if ((int)param_7[1] != *(int *)((longlong)param_7 + 0x34)) {
              plVar23 = param_7 + 7;
              if ((longlong *)param_7[8] != (longlong *)0x0) {
                plVar23 = (longlong *)param_7[8];
              }
              iVar18 = *(int *)((longlong)plVar23 + (ulonglong)((int)param_7[9] - 1U & uVar31) * 4);
              if (iVar18 != -1) {
                do {
                  if (*(uint *)(*param_7 + (longlong)iVar18 * 0xc) == uVar31) goto LAB_1482dbded;
                  iVar18 = *(int *)(*param_7 + (longlong)iVar18 * 0xc + 4);
                } while (iVar18 != -1);
              }
            }
            iVar20 = (int)param_5[1];
            *(uint *)(param_5 + 1) = iVar20 + 1U;
            if (*(uint *)((longlong)param_5 + 0xc) < iVar20 + 1U) {
              FUN_146c7feae(param_5,iVar20);
            }
            lVar29 = *param_5;
            lVar25 = (longlong)iVar20 * 0x30;
            *(uint *)(lVar29 + lVar25) = uVar31;
            *(undefined8 *)(lVar29 + 8 + lVar25) = 0x3ff0000000000000;
            puVar4 = (undefined8 *)(lVar29 + 0x10 + lVar25);
            *puVar4 = 0;
            puVar4[1] = 0;
            *(undefined4 *)(lVar29 + 0x20 + lVar25) = 0;
            *(undefined4 *)(lVar29 + 0x28 + lVar25) = 0xffffffff;
          }
          else {
LAB_1482dbded:
            fVar46 = local_490;
            if ((0.0 <= local_490 * fVar45) &&
               (fVar46 = fVar44, iVar20 = iVar5, 0.0 <= fVar44 * fVar45)) goto LAB_1482db6d7;
            uVar19 = FUN_146c061e0(param_1,uVar31,iVar20);
            dVar12 = (double)(fVar45 / (fVar45 - fVar46));
            fVar44 = fVar46;
            if (uVar31 != *(uint *)(*(longlong *)
                                     (*(longlong *)(param_1 + 0x1c0) + (ulonglong)(uVar19 >> 9) * 8)
                                   + (ulonglong)((uVar19 & 0x1ff) << 4))) {
              dVar12 = 1.0 - dVar12;
              fVar44 = fVar45;
              fVar45 = fVar46;
            }
            iVar20 = (int)param_5[1];
            *(uint *)(param_5 + 1) = iVar20 + 1U;
            if (*(uint *)((longlong)param_5 + 0xc) < iVar20 + 1U) {
              FUN_146c7feae(param_5,iVar20);
            }
            lVar29 = *param_5;
            lVar25 = (longlong)iVar20 * 0x30;
            *(uint *)(lVar29 + lVar25) = uVar19;
            *(double *)(lVar29 + 8 + lVar25) = dVar12;
            *(double *)(lVar29 + 0x10 + lVar25) = 1.0 - dVar12;
            *(undefined8 *)(lVar29 + 0x18 + lVar25) = 0;
            *(undefined4 *)(lVar29 + 0x20 + lVar25) = 1;
            *(undefined4 *)(lVar29 + 0x28 + lVar25) = 0xffffffff;
            local_490 = fVar45;
          }
        }
        lVar29 = (longlong)((int)param_5[1] + -1) * 0x30;
        local_3c4 = *(uint *)(*param_5 + lVar29);
        bVar32 = *(int *)(*param_5 + 0x20 + lVar29) == 0;
      } while ((local_3c4 != *param_4) || (uVar36 = uVar30, (bool)(char)param_4[1] != bVar32));
    }
  }
  else {
LAB_1482db6d7:
    uVar36 = 0;
  }
  local_150 = 0;
  if (local_158 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_198);
  local_100 = 0;
  if (local_108 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_148);
LAB_1482db72d:
  if ((local_f0 ^ (ulonglong)auStack_4b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar36;
}



// FUNCTION 1482dcac4 FUN_1482dcac4 body=691 status=ok
// SIG undefined FUN_1482dcac4(void)

undefined8 FUN_1482dcac4(undefined8 param_1,undefined8 *param_2,int *param_3,int *param_4)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  int *piVar7;
  undefined1 auStack_e8 [32];
  int *local_c8;
  int *local_c0;
  int *local_b8;
  int *local_b0;
  undefined8 local_a8;
  int *local_a0;
  undefined1 local_8c [4];
  int local_88 [8];
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_4 == (int *)0x0) {
LAB_1482dcb4b:
    piVar1 = (int *)(param_2 + 8);
    if ((*(char *)((longlong)param_2 + 0x1c) != *(char *)((longlong)param_2 + 0x44)) ||
       (*(int *)(param_2 + 3) != *piVar1)) {
      if (*(int *)((longlong)param_2 + 0x74) == 0) {
        local_c8 = (int *)(param_2 + 3);
        local_c0 = piVar1;
        local_b8 = param_3;
        local_b0 = param_4;
        cVar4 = FUN_1482dcd78(*param_2,param_2[1],*(undefined4 *)(param_2 + 2),
                              *(undefined4 *)((longlong)param_2 + 0x14));
        if (cVar4 != '\0') {
          if (param_4 == (int *)0x0) {
LAB_1482dcb73:
            (**(code **)(*(longlong *)param_2[1] + 8))();
            uVar5 = 1;
            goto LAB_1482dcb26;
          }
          if ((char)*param_4 == '\0') {
            pcVar2 = *(code **)(param_4 + 0x1c);
            plVar6 = (longlong *)(param_4 + 0x24);
            if (*(longlong **)(param_4 + 0x20) != (longlong *)0x0) {
              plVar6 = *(longlong **)(param_4 + 0x20);
            }
            uVar5 = (**(code **)(*plVar6 + 8))();
            cVar4 = (*pcVar2)(uVar5);
            *(char *)param_4 = cVar4;
            if (cVar4 == '\0') goto LAB_1482dcb73;
          }
        }
      }
      else {
        if (*(int *)((longlong)param_2 + 0x74) != 1) goto LAB_1482dcb73;
        bVar3 = false;
        local_68 = 0;
        local_60 = 0;
        local_88[0] = 0;
        local_88[1] = 0;
        local_88[2] = 0;
        local_88[3] = 0;
        local_5c = 0xffffffff00000080;
        local_54 = 0;
        local_48 = 0;
        local_40 = 0;
        local_a8 = *(undefined8 *)(param_3 + 2);
        piVar7 = *(int **)param_3;
        if (*(int **)param_3 == (int *)0x0) {
          piVar7 = local_88;
        }
        local_c0 = (int *)param_2[0xd];
        local_b8 = (int *)CONCAT71(local_b8._1_7_,*(undefined1 *)(param_2 + 0xe));
        local_c8 = piVar1;
        local_b0 = piVar7;
        local_a0 = param_4;
        cVar4 = FUN_1482da706(*param_2,param_2[1],*(undefined4 *)(param_2 + 2));
        if (cVar4 != '\0') {
          if (param_4 == (int *)0x0) {
            local_c0 = (int *)0x0;
            local_c8 = param_3;
            cVar4 = FUN_1482daeae(*param_2,piVar7,*(undefined4 *)(param_2 + 2),local_8c);
            if (cVar4 != '\0') {
LAB_1482dcd15:
              bVar3 = true;
              goto LAB_1482dcc3f;
            }
          }
          else if ((char)*param_4 == '\0') {
            pcVar2 = *(code **)(param_4 + 0x1c);
            plVar6 = *(longlong **)(param_4 + 0x20);
            if (*(longlong **)(param_4 + 0x20) == (longlong *)0x0) {
              plVar6 = (longlong *)(param_4 + 0x24);
            }
            uVar5 = (**(code **)(*plVar6 + 8))();
            cVar4 = (*pcVar2)(uVar5);
            *(char *)param_4 = cVar4;
            if (((cVar4 == '\0') &&
                (local_c8 = param_3, local_c0 = param_4,
                cVar4 = FUN_1482daeae(*param_2,piVar7,*(undefined4 *)(param_2 + 2),local_8c),
                cVar4 != '\0')) && ((char)*param_4 == '\0')) {
              pcVar2 = *(code **)(param_4 + 0x1c);
              plVar6 = (longlong *)(param_4 + 0x24);
              if (*(longlong **)(param_4 + 0x20) != (longlong *)0x0) {
                plVar6 = *(longlong **)(param_4 + 0x20);
              }
              uVar5 = (**(code **)(*plVar6 + 8))(plVar6);
              cVar4 = (*pcVar2)(uVar5);
              *(char *)param_4 = cVar4;
              if (cVar4 == '\0') goto LAB_1482dcd15;
            }
          }
          bVar3 = false;
        }
LAB_1482dcc3f:
        local_40 = 0;
        if (local_48 != 0) {
          FUN_1400020a8();
        }
        FUN_1447a082e(local_88);
        if (bVar3) goto LAB_1482dcb73;
      }
    }
  }
  else if ((char)*param_4 == '\0') {
    pcVar2 = *(code **)(param_4 + 0x1c);
    plVar6 = (longlong *)(param_4 + 0x24);
    if (*(longlong **)(param_4 + 0x20) != (longlong *)0x0) {
      plVar6 = *(longlong **)(param_4 + 0x20);
    }
    uVar5 = (**(code **)(*plVar6 + 8))();
    cVar4 = (*pcVar2)(uVar5);
    *(char *)param_4 = cVar4;
    if (cVar4 == '\0') goto LAB_1482dcb4b;
  }
  uVar5 = 0;
LAB_1482dcb26:
  if ((local_38 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1482dcd78 FUN_1482dcd78 body=943 status=ok
// SIG undefined FUN_1482dcd78(void)

undefined4
FUN_1482dcd78(longlong param_1,longlong param_2,uint param_3,int param_4,int *param_5,int *param_6,
             longlong *param_7,char *param_8)

{
  byte bVar1;
  int iVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  bool bVar15;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  char *local_90;
  undefined1 local_80 [4];
  undefined4 local_7c;
  longlong local_78;
  ulonglong uStack_70;
  longlong local_68;
  ulonglong uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_8 == (char *)0x0) {
LAB_1482dcde9:
    bVar1 = *(byte *)(param_6 + 1);
    iVar5 = *param_5;
    iVar6 = *param_6;
    if ((*(byte *)(param_5 + 1) != bVar1) || (iVar5 != iVar6)) {
      if (*(byte *)(param_5 + 1) == 0) {
        iVar5 = FUN_143aff292(param_1,iVar5,*(undefined8 *)(param_5 + 8),param_7[1]);
        bVar1 = *(byte *)(param_6 + 1);
        iVar6 = *param_6;
      }
      if ((bVar1 & 1) == 0) {
        iVar6 = FUN_143aff292(param_1,iVar6,*(undefined8 *)(param_6 + 8),param_7[1]);
      }
      lVar9 = 0;
      if ((-1 < (int)param_3) && ((int)param_3 < *(int *)(param_2 + 0x98))) {
        lVar9 = (longlong)*(int *)(*(longlong *)(param_2 + 0x90) + (ulonglong)param_3 * 4);
        if (lVar9 == -1) {
          lVar9 = 0;
        }
        else {
          lVar9 = lVar9 * 0x38 + *(longlong *)(param_2 + 0x60);
        }
      }
      local_a8 = &local_58;
      local_58 = 0;
      uStack_50 = 0;
      local_a0 = &local_68;
      local_68 = 0;
      uStack_60 = 0;
      local_90 = param_8;
      local_98 = param_7;
      cVar4 = FUN_1482d9f01(param_1,param_2,param_3,
                            (longlong)param_4 * 0x28 + *(longlong *)(lVar9 + 0x18));
      if (cVar4 == '\0') {
LAB_1482dd007:
        uVar7 = 0;
      }
      else {
        if (param_8 != (char *)0x0) {
          if (*param_8 == '\0') {
            pcVar3 = *(code **)(param_8 + 0x70);
            plVar10 = (longlong *)(param_8 + 0x90);
            if (*(longlong **)(param_8 + 0x80) != (longlong *)0x0) {
              plVar10 = *(longlong **)(param_8 + 0x80);
            }
            uVar8 = (**(code **)(*plVar10 + 8))();
            cVar4 = (*pcVar3)(uVar8);
            *param_8 = cVar4;
            if (cVar4 == '\0') goto LAB_1482dcf19;
          }
          goto LAB_1482dd007;
        }
LAB_1482dcf19:
        lVar9 = (longlong)(int)uStack_50;
        uVar13 = 0xffffffff;
        if (lVar9 == 0) {
          uVar14 = 0xffffffff;
        }
        else {
          lVar11 = lVar9 * 4;
          uVar14 = 0;
          do {
            if (*(int *)(local_58 + uVar14 * 4) == iVar5) goto LAB_1482dd063;
            uVar14 = uVar14 + 1;
            lVar11 = lVar11 + -4;
          } while (lVar11 != 0);
          uVar14 = 0xffffffff;
LAB_1482dd063:
          lVar9 = lVar9 << 2;
          uVar12 = 0;
          do {
            if (*(int *)(local_58 + uVar12 * 4) == iVar6) {
              uVar13 = uVar12 & 0xffffffff;
              break;
            }
            uVar12 = uVar12 + 1;
            lVar9 = lVar9 + -4;
          } while (lVar9 != 0);
        }
        local_78 = 0;
        uStack_70 = 0;
        FUN_1482da464(&local_58,&local_78,uVar14 & 0xffffffff,uVar13);
        if (((int)uStack_70 < 3) ||
           (cVar4 = FUN_1482da4ef(param_1,&local_78,param_3,&local_68), cVar4 == '\0')) {
LAB_1482dcfbc:
          uVar7 = 0;
        }
        else {
          if (param_8 != (char *)0x0) {
            if (*param_8 == '\0') {
              pcVar3 = *(code **)(param_8 + 0x70);
              plVar10 = (longlong *)(param_8 + 0x90);
              if (*(longlong **)(param_8 + 0x80) != (longlong *)0x0) {
                plVar10 = *(longlong **)(param_8 + 0x80);
              }
              uVar8 = (**(code **)(*plVar10 + 8))();
              cVar4 = (*pcVar3)(uVar8);
              *param_8 = cVar4;
              if (cVar4 == '\0') goto LAB_1482dcf7d;
            }
            goto LAB_1482dcfbc;
          }
LAB_1482dcf7d:
          bVar15 = (longlong)uStack_70 < 0;
          uStack_70 = uStack_70 & 0xffffffff00000000;
          if (bVar15) {
            FUN_14481578e(&local_78,0);
          }
          FUN_1482da464(&local_58,&local_78,uVar13,uVar14 & 0xffffffff);
          if ((int)uStack_70 < 3) goto LAB_1482dcfbc;
          iVar2 = *(int *)(param_1 + 0x1b0);
          *(int *)(param_1 + 0x1b0) = iVar2 + 1;
          uVar7 = FUN_1482da4ef(param_1,&local_78,iVar2,&local_68);
          lVar9 = *param_7;
          if (lVar9 != 0) {
            local_7c = FUN_146c061e0(param_1,iVar5,iVar6);
            FUN_144984904(lVar9,local_80,&local_7c,0);
          }
        }
        if (local_78 != 0) {
          FUN_1400020a8();
        }
      }
      FUN_148307c36(local_68,uStack_60 & 0xffffffff);
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      goto LAB_1482dce11;
    }
  }
  else if (*param_8 == '\0') {
    pcVar3 = *(code **)(param_8 + 0x70);
    plVar10 = (longlong *)(param_8 + 0x90);
    if (*(longlong **)(param_8 + 0x80) != (longlong *)0x0) {
      plVar10 = *(longlong **)(param_8 + 0x80);
    }
    uVar8 = (**(code **)(*plVar10 + 8))();
    cVar4 = (*pcVar3)(uVar8);
    *param_8 = cVar4;
    if (cVar4 == '\0') goto LAB_1482dcde9;
  }
  uVar7 = 0;
LAB_1482dce11:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 1482dd128 FUN_1482dd128 body=9 status=ok
// SIG undefined FUN_1482dd128(void)

void FUN_1482dd128(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



// FUNCTION 1482dd132 FUN_1482dd132 body=320 status=ok
// SIG undefined FUN_1482dd132(void)

void FUN_1482dd132(longlong param_1)

{
  int iVar1;
  
  FUN_1402226aa(param_1 + 0x88);
  FUN_1402226aa(param_1 + 0xd8);
  FUN_1402226aa(param_1 + 0x128);
  FUN_1402226aa(param_1 + 0x178);
  iVar1 = *(int *)(param_1 + 0x2d4);
  FUN_145cc015e(*(undefined8 *)(param_1 + 0x2c8),*(undefined4 *)(param_1 + 0x2d0));
  *(undefined4 *)(param_1 + 0x2d0) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x2d4) != 0)) {
    FUN_148307e28(param_1 + 0x2c8);
  }
  FUN_1482dd272(param_1 + 0x18);
  iVar1 = *(int *)(param_1 + 0x2c4);
  FUN_145cc00cd(*(undefined8 *)(param_1 + 0x2b8),*(undefined4 *)(param_1 + 0x2c0));
  *(undefined4 *)(param_1 + 0x2c0) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x2c4) != 0)) {
    FUN_148307e58(param_1 + 0x2b8,0);
  }
  iVar1 = *(int *)(param_1 + 0x2e4);
  FUN_145cc00f9(*(undefined8 *)(param_1 + 0x2d8),*(undefined4 *)(param_1 + 0x2e0));
  *(undefined4 *)(param_1 + 0x2e0) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x2e4) != 0)) {
    FUN_148307eca(param_1 + 0x2d8);
  }
  iVar1 = *(int *)(param_1 + 0x2f4);
  FUN_145cc0126(*(undefined8 *)(param_1 + 0x2e8),*(undefined4 *)(param_1 + 0x2f0));
  *(undefined4 *)(param_1 + 0x2f0) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x2f4) != 0)) {
    FUN_148307f38(param_1 + 0x2e8);
    return;
  }
  return;
}



// FUNCTION 1482dd272 FUN_1482dd272 body=76 status=ok
// SIG undefined FUN_1482dd272(void)

void FUN_1482dd272(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < 0) {
    FUN_14481578e(param_1,0);
  }
  if (-1 < *(int *)(param_1 + 0x1c)) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  FUN_1447a8aa0(param_1 + 0x10,0);
  return;
}



// FUNCTION 1482dd2be FUN_1482dd2be body=521 status=ok
// SIG undefined FUN_1482dd2be(void)

void FUN_1482dd2be(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  void *_Src;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  int *piVar8;
  longlong lVar9;
  int *piVar10;
  undefined1 auStack_98 [44];
  int local_6c;
  longlong local_68 [2];
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  (**(code **)(*param_1 + 0x38))();
  lVar7 = param_2[1];
  if ((longlong)(int)lVar7 != 0) {
    lVar6 = *param_2;
    lVar9 = 0;
    do {
      uVar3 = *(undefined4 *)(lVar6 + lVar9);
      FUN_1482ac96c(param_1[2],uVar3,param_1 + 0x11);
      FUN_1482aca8c(param_1[2],uVar3,param_1 + 0x1b);
      lVar9 = lVar9 + 4;
    } while ((longlong)(int)lVar7 * 4 != lVar9);
  }
  FUN_145c3f772(param_1 + 7,param_1 + 0x11);
  local_58 = (void *)0x0;
  local_50 = (int)param_2[1];
  lVar7 = (longlong)local_50;
  _Src = (void *)*param_2;
  if (lVar7 == 0) {
    local_4c = 0;
    local_68[0] = 0;
    local_68[1] = 0;
  }
  else {
    FUN_144a06ca8(&local_58,local_50,0);
    memcpy(local_58,_Src,lVar7 << 2);
    piVar10 = (int *)*param_2;
    local_68[0] = 0;
    local_68[1] = 0;
    if ((longlong)(int)param_2[1] != 0) {
      piVar1 = piVar10 + (int)param_2[1];
      do {
        iVar4 = *piVar10;
        lVar7 = param_1[2];
        if ((((longlong)iVar4 < 0) || (*(int *)(lVar7 + 0x98) <= iVar4)) ||
           (lVar6 = (longlong)*(int *)(*(longlong *)(lVar7 + 0x90) + (longlong)iVar4 * 4),
           lVar6 == -1)) {
          lVar6 = 0;
        }
        else {
          lVar6 = lVar6 * 0x38 + *(longlong *)(lVar7 + 0x60);
        }
        puVar5 = (undefined8 *)(lVar7 + 0xc0);
        if (lVar6 != 0) {
          puVar5 = (undefined8 *)(lVar6 + 0x28);
        }
        if ((longlong)*(int *)(puVar5 + 1) != 0) {
          piVar8 = (int *)*puVar5;
          piVar2 = piVar8 + *(int *)(puVar5 + 1);
          do {
            local_6c = *piVar8;
            if ((longlong)local_50 != 0) {
              lVar7 = 0;
              do {
                if (*(int *)((longlong)local_58 + lVar7) == local_6c) goto LAB_1482dd434;
                lVar7 = lVar7 + 4;
              } while ((longlong)local_50 * 4 != lVar7);
            }
            FUN_1449e3bb0(local_68,&local_6c);
LAB_1482dd434:
            piVar8 = piVar8 + 1;
          } while (piVar8 != piVar2);
        }
        piVar10 = piVar10 + 1;
      } while (piVar10 != piVar1);
    }
  }
  (**(code **)(*param_1 + 0x40))(param_1,&local_58,local_68);
  (**(code **)(*param_1 + 0x48))(param_1);
  (**(code **)(*param_1 + 0x50))(param_1);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482dd4c8 FUN_1482dd4c8 body=357 status=ok
// SIG undefined FUN_1482dd4c8(void)

void FUN_1482dd4c8(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  int *piVar7;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 *local_70;
  longlong local_68 [2];
  longlong local_58 [3];
  
  local_58[2] = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = param_1;
  (**(code **)(*param_1 + 0x38))();
  local_70 = param_2;
  if ((longlong)*(int *)(param_2 + 1) != 0) {
    piVar7 = (int *)*param_2;
    piVar2 = piVar7 + *(int *)(param_2 + 1);
    plVar1 = local_78 + 0x11;
    do {
      lVar5 = (longlong)
              *(int *)(*(longlong *)(local_78[2] + 0x70) + 0x18 + (longlong)*piVar7 * 0x50);
      if (lVar5 != 0) {
        lVar3 = *(longlong *)(*(longlong *)(local_78[2] + 0x70) + 0x10 + (longlong)*piVar7 * 0x50);
        lVar6 = 0;
        do {
          local_58[0] = CONCAT44(local_58[0]._4_4_,*(undefined4 *)(lVar3 + lVar6));
          FUN_1447cbafe(plVar1,local_68,local_58,0);
          lVar6 = lVar6 + 4;
        } while (lVar5 * 4 != lVar6);
      }
      piVar7 = piVar7 + 1;
    } while (piVar7 != piVar2);
  }
  plVar4 = local_78;
  plVar1 = local_78 + 0x11;
  FUN_145c3f772(local_78 + 0x1b,plVar1);
  FUN_145c3f772(plVar4 + 7,plVar1);
  local_58[0] = 0;
  local_58[1] = 0;
  local_68[0] = 0;
  local_68[1] = 0;
  FUN_1482ac060(plVar4[2],local_70,local_68);
  (**(code **)(*plVar4 + 0x40))(plVar4,local_58,local_68);
  (**(code **)(*plVar4 + 0x48))(plVar4);
  (**(code **)(*plVar4 + 0x50))(plVar4);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_58[2] ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482dd62e FUN_1482dd62e body=395 status=ok
// SIG undefined FUN_1482dd62e(void)

void FUN_1482dd62e(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int *piVar5;
  longlong lVar6;
  undefined1 auStack_a8 [40];
  int *local_80;
  longlong local_78 [2];
  longlong local_68 [3];
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  (**(code **)(*param_1 + 0x38))();
  lVar2 = param_2[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar4 = *param_2;
    lVar3 = 0;
    do {
      iVar1 = *(int *)(*(longlong *)(param_1[2] + 0x50) + (longlong)*(int *)(lVar4 + lVar3) * 0x18);
      local_68[0] = CONCAT44(local_68[0]._4_4_,iVar1);
      if (-1 < iVar1) {
        FUN_1447cbafe(param_1 + 0x11,local_78,local_68,0);
      }
      lVar3 = lVar3 + 4;
    } while ((longlong)(int)lVar2 * 4 != lVar3);
  }
  FUN_145c3f772(param_1 + 0x1b,param_1 + 0x11);
  FUN_145c3f772(param_1 + 7,param_1 + 0x11);
  local_68[0] = 0;
  local_68[1] = 0;
  local_78[0] = 0;
  local_78[1] = 0;
  if ((longlong)(int)param_2[1] != 0) {
    piVar5 = (int *)*param_2;
    local_80 = piVar5 + (int)param_2[1];
    lVar2 = param_1[2];
    do {
      lVar4 = (longlong)*(int *)(*(longlong *)(lVar2 + 0x50) + 0x10 + (longlong)*piVar5 * 0x18);
      if (lVar4 != 0) {
        lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x50) + 8 + (longlong)*piVar5 * 0x18);
        lVar6 = 0;
        do {
          local_4c = *(undefined4 *)(lVar3 + lVar6);
          FUN_1449e3bb0(local_78,&local_4c);
          lVar6 = lVar6 + 4;
        } while (lVar4 * 4 != lVar6);
      }
      piVar5 = piVar5 + 1;
    } while (piVar5 != local_80);
  }
  (**(code **)(*param_1 + 0x40))(param_1,local_68,local_78);
  (**(code **)(*param_1 + 0x48))(param_1);
  (**(code **)(*param_1 + 0x50))(param_1);
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482dd7ba FUN_1482dd7ba body=969 status=ok
// SIG undefined FUN_1482dd7ba(void)

void FUN_1482dd7ba(longlong *param_1,int *param_2)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  undefined4 local_98;
  uint uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_2[1] == 2) {
    local_78 = 0;
    uStack_70 = 0;
    iVar9 = *param_2;
    if (iVar9 == 1) {
      plVar1 = (longlong *)(param_2 + 2);
      piVar2 = param_2 + 6;
      local_60 = 0x100000000;
      local_50 = 0xffffffff;
      uStack_48 = 0;
      uStack_58 = piVar2;
      if (param_2[0xc] == 0) {
        iVar9 = 0;
      }
      else {
        FUN_1449c0562(&local_60);
        iVar9 = param_2[0xc];
      }
      uStack_80 = CONCAT44(uStack_44,uStack_48);
      local_88 = local_50;
      uVar5 = local_88;
      local_98 = (undefined4)local_60;
      uStack_94 = local_60._4_4_;
      uStack_90 = (undefined4)uStack_58;
      uStack_8c = uStack_58._4_4_;
      local_88._4_4_ = (int)((ulonglong)local_50 >> 0x20);
      iVar10 = local_88._4_4_;
      local_a0 = plVar1;
      if ((local_88._4_4_ != iVar9) || (local_88 = uVar5, uStack_58 != piVar2)) {
        do {
          local_88 = uVar5;
          uVar3 = uStack_70;
          lVar8 = *(longlong *)(*local_a0 + (longlong)iVar10 * 0x10);
          if ((-1 < lVar8) &&
             (iVar10 = (int)((ulonglong)lVar8 >> 0x20), iVar10 < *(int *)(param_1[2] + 0x58))) {
            lVar8 = (longlong)(int)uStack_70;
            uVar6 = (int)uStack_70 + 1;
            uStack_70 = CONCAT44(uStack_70._4_4_,uVar6);
            if (uStack_70._4_4_ < uVar6) {
              FUN_1446f48e2(&local_78,uVar3 & 0xffffffff);
            }
            *(int *)(local_78 + lVar8 * 4) = iVar10;
          }
          local_88 = CONCAT44(local_88._4_4_,(uint)local_88 & ~uStack_94);
          FUN_1449c0562(&local_98);
          iVar10 = local_88._4_4_;
          uVar5 = local_88;
        } while (local_a0 != plVar1 ||
                 ((int *)CONCAT44(uStack_8c,uStack_90) != piVar2 || local_88._4_4_ != iVar9));
      }
      lVar8 = 0x10;
    }
    else if (iVar9 == 2) {
      plVar1 = (longlong *)(param_2 + 2);
      piVar2 = param_2 + 6;
      local_60 = 0x100000000;
      local_50 = 0xffffffff;
      uStack_48 = 0;
      uStack_58 = piVar2;
      if (param_2[0xc] == 0) {
        iVar9 = 0;
      }
      else {
        FUN_1449c0562(&local_60);
        iVar9 = param_2[0xc];
      }
      uStack_80 = CONCAT44(uStack_44,uStack_48);
      local_88 = local_50;
      uVar5 = local_88;
      local_98 = (undefined4)local_60;
      uStack_94 = local_60._4_4_;
      uStack_90 = (undefined4)uStack_58;
      uStack_8c = uStack_58._4_4_;
      local_88._4_4_ = (int)((ulonglong)local_50 >> 0x20);
      iVar10 = local_88._4_4_;
      local_a0 = plVar1;
      if ((local_88._4_4_ != iVar9) || (local_88 = uVar5, uStack_58 != piVar2)) {
        do {
          local_88 = uVar5;
          uVar3 = uStack_70;
          lVar8 = *(longlong *)(*local_a0 + (longlong)iVar10 * 0x10);
          if ((-1 < lVar8) &&
             (iVar10 = (int)((ulonglong)lVar8 >> 0x20), iVar10 < *(int *)(param_1[2] + 0x78))) {
            lVar8 = (longlong)(int)uStack_70;
            uVar6 = (int)uStack_70 + 1;
            uStack_70 = CONCAT44(uStack_70._4_4_,uVar6);
            if (uStack_70._4_4_ < uVar6) {
              FUN_1446f48e2(&local_78,uVar3 & 0xffffffff);
            }
            *(int *)(local_78 + lVar8 * 4) = iVar10;
          }
          local_88 = CONCAT44(local_88._4_4_,(uint)local_88 & ~uStack_94);
          FUN_1449c0562(&local_98);
          iVar10 = local_88._4_4_;
          uVar5 = local_88;
        } while (local_a0 != plVar1 ||
                 ((int *)CONCAT44(uStack_8c,uStack_90) != piVar2 || local_88._4_4_ != iVar9));
      }
      lVar8 = 0x18;
    }
    else {
      if (iVar9 != 4) goto LAB_1482ddb43;
      plVar1 = (longlong *)(param_2 + 2);
      piVar2 = param_2 + 6;
      local_60 = 0x100000000;
      local_50 = 0xffffffff;
      uStack_48 = 0;
      uStack_58 = piVar2;
      if (param_2[0xc] == 0) {
        iVar9 = 0;
      }
      else {
        FUN_1449c0562(&local_60);
        iVar9 = param_2[0xc];
      }
      uStack_80 = CONCAT44(uStack_44,uStack_48);
      local_88 = local_50;
      uVar5 = local_88;
      local_98 = (undefined4)local_60;
      uStack_94 = local_60._4_4_;
      uStack_90 = (undefined4)uStack_58;
      uStack_8c = uStack_58._4_4_;
      local_88._4_4_ = (int)((ulonglong)local_50 >> 0x20);
      iVar10 = local_88._4_4_;
      local_a0 = plVar1;
      if ((local_88._4_4_ != iVar9) || (local_88 = uVar5, uStack_58 != piVar2)) {
        do {
          local_88 = uVar5;
          uVar4 = uStack_70;
          uVar3 = *(ulonglong *)(*local_a0 + (longlong)iVar10 * 0x10);
          if (-1 < (longlong)uVar3) {
            lVar8 = param_1[2];
            iVar10 = (int)(uVar3 >> 0x20);
            if (((iVar10 < *(int *)(lVar8 + 0x98)) &&
                (lVar7 = (longlong)*(int *)(*(longlong *)(lVar8 + 0x90) + (uVar3 >> 0x20) * 4),
                lVar7 != -1)) && (lVar7 * 0x38 + *(longlong *)(lVar8 + 0x60) != 0)) {
              lVar8 = (longlong)(int)uStack_70;
              uVar6 = (int)uStack_70 + 1;
              uStack_70 = CONCAT44(uStack_70._4_4_,uVar6);
              if (uStack_70._4_4_ < uVar6) {
                FUN_1446f48e2(&local_78,uVar4 & 0xffffffff);
              }
              *(int *)(local_78 + lVar8 * 4) = iVar10;
            }
          }
          local_88 = CONCAT44(local_88._4_4_,(uint)local_88 & ~uStack_94);
          FUN_1449c0562(&local_98);
          iVar10 = local_88._4_4_;
          uVar5 = local_88;
        } while (local_a0 != plVar1 ||
                 ((int *)CONCAT44(uStack_8c,uStack_90) != piVar2 || local_88._4_4_ != iVar9));
      }
      lVar8 = 8;
    }
    (**(code **)(*param_1 + lVar8))(param_1,&local_78);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
LAB_1482ddb43:
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482ddb84 FUN_1482ddb84 body=273 status=ok
// SIG undefined FUN_1482ddb84(void)

void FUN_1482ddb84(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  int iStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 0x38);
  lVar2 = param_1 + 0x48;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  uStack_50 = lVar2;
  if (*(int *)(param_1 + 0x60) == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar3 = *(int *)(param_1 + 0x60);
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_80 = plVar1;
  if ((iStack_44 != iVar3) || (uStack_50 != lVar2)) {
    do {
      FUN_1482ddc96(param_1 + 0x18,*(undefined8 *)(param_1 + 8),
                    *(undefined4 *)(*local_80 + (longlong)iStack_64 * 0xc));
      local_68 = local_68 & ~uStack_74;
      FUN_1449c0562(&local_78);
    } while (local_80 != plVar1 || (CONCAT44(uStack_6c,uStack_70) != lVar2 || iStack_64 != iVar3));
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482ddc96 FUN_1482ddc96 body=193 status=ok
// SIG undefined FUN_1482ddc96(void)

void FUN_1482ddc96(longlong *param_1,longlong param_2,uint param_3)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_1446f48e2(param_1,iVar2);
  }
  *(uint *)(*param_1 + (longlong)iVar2 * 4) = param_3;
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(param_3 >> 9) * 8);
  local_38 = *(undefined8 *)(lVar3 + 0x10 + (ulonglong)(param_3 & 0x1ff) * 0x18);
  puVar1 = (undefined4 *)(lVar3 + (ulonglong)(param_3 & 0x1ff) * 0x18);
  local_48 = *puVar1;
  uStack_44 = puVar1[1];
  uStack_40 = puVar1[2];
  uStack_3c = puVar1[3];
  iVar2 = (int)param_1[3];
  *(uint *)(param_1 + 3) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x1c) < iVar2 + 1U) {
    FUN_1403e3958(param_1 + 2,iVar2);
  }
  lVar3 = param_1[2];
  *(undefined8 *)(lVar3 + 0x10 + (longlong)iVar2 * 0x18) = local_38;
  puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x18);
  *puVar1 = local_48;
  puVar1[1] = uStack_44;
  puVar1[2] = uStack_40;
  puVar1[3] = uStack_3c;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482ddd58 FUN_1482ddd58 body=3384 status=ok
// SIG undefined FUN_1482ddd58(void)

void FUN_1482ddd58(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  code *pcVar3;
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  code **ppcVar12;
  code *pcVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  int *piVar17;
  undefined1 auStack_308 [32];
  longlong local_2e8;
  code *local_2e0;
  longlong *local_2d8;
  longlong *local_2d0;
  longlong *local_2c8;
  longlong *local_2c0;
  longlong local_2b8;
  undefined8 *local_2b0;
  longlong local_2a8;
  longlong local_2a0;
  longlong *local_298;
  longlong local_290;
  int *local_288;
  int *local_280;
  longlong *local_278;
  undefined1 local_270 [4];
  int local_26c;
  undefined4 local_268;
  undefined4 local_264;
  longlong *local_260;
  undefined8 local_258;
  code *local_250;
  undefined8 local_248;
  undefined4 local_240;
  undefined4 local_23c;
  code *local_238;
  undefined8 uStack_230;
  ulonglong local_228;
  undefined8 uStack_220;
  ulonglong local_218;
  undefined4 local_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  ulonglong local_1f0;
  undefined8 local_1e8;
  undefined4 local_1dc;
  longlong local_1d8 [2];
  longlong *local_1c8;
  longlong local_1b8 [4];
  code *local_198;
  undefined8 uStack_190;
  longlong local_188;
  undefined8 uStack_180;
  undefined **local_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  ulonglong local_150;
  undefined8 local_148;
  int local_140;
  undefined4 local_13c;
  longlong local_138 [2];
  longlong *local_128;
  longlong local_118 [4];
  longlong local_f8 [2];
  longlong *local_e8;
  longlong local_d8 [4];
  code *local_b8;
  code *pcStack_b0;
  longlong local_a8;
  ulonglong uStack_a0;
  ulonglong local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  ulonglong local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_308;
  iVar6 = *(int *)(param_3 + 1);
  if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar6 * 5);
  }
  local_2b8 = param_1 + 0x2b8;
  if (*(int *)(param_1 + 0x2c4) < iVar6 * 5) {
    FUN_148307e58(local_2b8);
    iVar6 = *(int *)(param_3 + 1);
  }
  lVar15 = *(longlong *)(param_1 + 0x10);
  local_238 = (code *)0x0;
  uStack_230 = 0;
  local_2e8 = param_1;
  if (iVar6 != 0) {
    piVar17 = (int *)*param_3;
    local_288 = piVar17 + iVar6;
    local_2d0 = (longlong *)(param_1 + 0xd8);
    local_2d8 = (longlong *)(param_1 + 0x128);
    local_2a0 = param_1 + 0x178;
    local_2a8 = param_1 + 0x110;
    local_2b0 = param_3;
    local_298 = param_2;
    local_290 = lVar15;
    do {
      iVar6 = *piVar17;
      local_280 = piVar17;
      if ((((-1 < (longlong)iVar6) && (iVar6 < *(int *)(lVar15 + 0x98))) &&
          (lVar10 = (longlong)*(int *)(*(longlong *)(lVar15 + 0x90) + (longlong)iVar6 * 4),
          lVar10 != -1)) &&
         ((lVar10 = lVar10 * 0x38 + *(longlong *)(lVar15 + 0x60), lVar10 != 0 &&
          ((longlong)*(int *)(lVar10 + 0x20) != 0)))) {
        plVar11 = *(longlong **)(lVar10 + 0x18);
        local_278 = plVar11 + (longlong)*(int *)(lVar10 + 0x20) * 5;
        do {
          local_2c8 = plVar11;
          if ((longlong)(int)plVar11[1] != 0) {
            pcVar13 = (code *)*plVar11;
            local_2e0 = pcVar13 + (longlong)(int)plVar11[1] * 4;
            do {
              iVar6 = *(int *)pcVar13;
              if ((longlong)(int)uStack_230 != 0) {
                lVar10 = 0;
                do {
                  if (*(int *)(local_238 + lVar10) == iVar6) goto LAB_1482de792;
                  lVar10 = lVar10 + 4;
                } while ((longlong)(int)uStack_230 * 4 != lVar10);
              }
              piVar17 = (int *)((longlong)iVar6 * 0x50 + *(longlong *)(lVar15 + 0x70));
              if ((longlong)(int)param_2[1] != 0) {
                lVar10 = (longlong)(int)param_2[1] * 4;
                lVar16 = 0;
                do {
                  if (*(int *)(*param_2 + lVar16) == *piVar17) goto LAB_1482de75a;
                  lVar16 = lVar16 + 4;
                } while (lVar10 != lVar16);
                lVar16 = 0;
                do {
                  if (*(int *)(*param_2 + lVar16) == piVar17[1]) goto LAB_1482de75a;
                  lVar16 = lVar16 + 4;
                } while (lVar10 != lVar16);
              }
              cVar5 = FUN_1482aa4ea(piVar17,local_2d0);
              lVar10 = local_2a0;
              if (cVar5 == '\0') {
                iVar7 = piVar17[6];
                if ((longlong)iVar7 != 0) {
                  lVar10 = *(longlong *)(piVar17 + 4);
                  lVar16 = 0;
                  do {
                    local_198 = (code *)CONCAT44(local_198._4_4_,*(undefined4 *)(lVar10 + lVar16));
                    FUN_1447cbafe(local_2d8);
                    lVar16 = lVar16 + 4;
                  } while ((longlong)iVar7 * 4 != lVar16);
                }
              }
              else {
                local_2c0 = (longlong *)(longlong)piVar17[6];
                if (local_2c0 != (longlong *)0x0) {
                  lVar15 = *(longlong *)(piVar17 + 4);
                  local_2c0 = (longlong *)((longlong)local_2c0 << 2);
                  plVar11 = (longlong *)0x0;
                  do {
                    local_198 = (code *)CONCAT44(local_198._4_4_,
                                                 *(undefined4 *)(lVar15 + (longlong)plVar11));
                    FUN_1447cbafe(lVar10,local_f8,&local_198);
                    plVar11 = (longlong *)((longlong)plVar11 + 4);
                  } while (local_2c0 != plVar11);
                }
                uStack_168 = 0;
                uStack_160 = 0;
                local_178 = (undefined **)0x0;
                uStack_170 = 0;
                local_188 = 0;
                uStack_180 = 0;
                local_198 = (code *)0x0;
                uStack_190 = (code *)0x0;
                uStack_158 = 0;
                iVar7 = *(int *)(local_2e8 + 0x2c0);
                uVar8 = iVar7 + 1;
                *(uint *)(local_2e8 + 0x2c0) = uVar8;
                local_198._0_4_ = 0;
                if (*(uint *)(local_2e8 + 0x2c4) < uVar8) {
                  FUN_148307f68(local_2b8);
                }
                lVar9 = local_2e8;
                lVar15 = *(longlong *)(local_2e8 + 0x2b8);
                lVar16 = (longlong)iVar7 * 0x48;
                *(undefined4 *)(lVar15 + lVar16) = local_198._0_4_;
                *(code **)(lVar15 + 8 + lVar16) = uStack_190;
                *(undefined8 *)(lVar15 + 0x10 + lVar16) = 0;
                *(longlong *)(lVar15 + 0x10 + lVar16) = local_188;
                local_188 = 0;
                *(uint *)(lVar15 + 0x18 + lVar16) = (uint)uStack_180;
                *(int *)(lVar15 + 0x1c + lVar16) = uStack_180._4_4_;
                uStack_180 = 0;
                *(undefined8 *)(lVar15 + 0x20 + lVar16) = 0;
                *(undefined ***)(lVar15 + 0x20 + lVar16) = local_178;
                local_178 = (undefined **)0x0;
                *(undefined4 *)(lVar15 + 0x28 + lVar16) = (undefined4)uStack_170;
                *(undefined4 *)(lVar15 + 0x2c + lVar16) = uStack_170._4_4_;
                uStack_170 = 0;
                *(undefined8 *)(lVar15 + 0x30 + lVar16) = 0;
                *(undefined8 *)(lVar15 + 0x30 + lVar16) = uStack_168;
                uStack_168 = 0;
                *(undefined4 *)(lVar15 + 0x38 + lVar16) = (undefined4)uStack_160;
                *(undefined4 *)(lVar15 + 0x3c + lVar16) = uStack_160._4_4_;
                uStack_160 = 0;
                *(undefined1 *)(lVar15 + 0x40 + lVar16) = (undefined1)uStack_158;
                lVar10 = *(longlong *)(local_2e8 + 0x2b8);
                FUN_146c7d752(&uStack_190);
                piVar1 = (int *)(lVar10 + lVar16);
                *piVar1 = iVar6;
                *(undefined8 *)(piVar1 + 2) = *(undefined8 *)(piVar17 + 2);
                FUN_14054c6c4(piVar1 + 4,piVar17 + 4);
                FUN_14054c6c4(lVar10 + lVar16 + 0x20,piVar17 + 8);
                FUN_14054c6c4(lVar10 + lVar16 + 0x30);
                lVar15 = local_290;
                param_2 = local_298;
                *(char *)(lVar10 + lVar16 + 0x40) = (char)piVar17[0x10];
                if (*(int *)(lVar9 + 0xe0) != *(int *)(lVar9 + 0x10c)) {
                  uVar8 = **(uint **)(lVar10 + 0x10 + lVar16);
                  lVar9 = *(longlong *)(local_2e8 + 0x118);
                  if (*(longlong *)(local_2e8 + 0x118) == 0) {
                    lVar9 = local_2a8;
                  }
                  iVar7 = *(int *)(lVar9 + (ulonglong)(*(int *)(local_2e8 + 0x120) - 1U & uVar8) * 4
                                  );
                  if (iVar7 != -1) {
                    do {
                      if (*(uint *)(*local_2d0 + (longlong)iVar7 * 0xc) == uVar8)
                      goto LAB_1482de75a;
                      iVar7 = *(int *)(*local_2d0 + (longlong)iVar7 * 0xc + 4);
                    } while (iVar7 != -1);
                  }
                }
                FUN_146c5e6ba(lVar10 + lVar16 + 8);
              }
LAB_1482de75a:
              lVar10 = (longlong)(int)uStack_230;
              uVar8 = (int)uStack_230 + 1;
              uStack_230 = CONCAT44(uStack_230._4_4_,uVar8);
              if (uStack_230._4_4_ < uVar8) {
                FUN_1446f48e2(&local_238);
              }
              *(int *)(local_238 + lVar10 * 4) = iVar6;
LAB_1482de792:
              pcVar13 = pcVar13 + 4;
            } while (pcVar13 != local_2e0);
          }
          plVar11 = local_2c8 + 5;
        } while (plVar11 != local_278);
      }
      param_3 = local_2b0;
      param_1 = local_2e8;
      piVar17 = local_280 + 1;
    } while (piVar17 != local_288);
    if (local_238 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_1482dea92(param_1 + 0x2c8,*(undefined4 *)(param_3 + 1));
  if ((longlong)*(int *)(param_3 + 1) != 0) {
    plVar11 = (longlong *)*param_3;
    local_2d0 = (longlong *)((longlong)plVar11 + (longlong)*(int *)(param_3 + 1) * 4);
    pcVar13 = (code *)(param_1 + 0x1c8);
    local_2e0 = (code *)(param_1 + 0x218);
    lVar10 = param_1 + 0x1d8;
    local_2d8 = (longlong *)(param_1 + 0x250);
    lVar15 = param_1 + 0x38;
    plVar14 = (longlong *)0x0;
    do {
      lVar16 = *plVar11;
      local_2c0 = plVar11;
      FUN_1402226aa(pcVar13);
      pcVar3 = local_2e0;
      FUN_1402226aa(local_2e0);
      FUN_1482ac96c(*(undefined8 *)(param_1 + 0x10),(int)lVar16,pcVar13);
      FUN_1482aca8c(*(undefined8 *)(param_1 + 0x10),(int)lVar16,pcVar3);
      iVar6 = 0;
      lVar16 = (longlong)plVar14 * 0x20 + *(longlong *)(param_1 + 0x2c8);
      local_238 = (code *)&DAT_100000000;
      local_228 = 0xffffffff;
      uStack_220 = uStack_220 & 0xffffffff00000000;
      local_2c8 = plVar14;
      uStack_230 = lVar10;
      if (*(int *)(param_1 + 0x1f0) != 0) {
        FUN_1449c0562(&local_238);
        iVar6 = *(int *)(param_1 + 0x1f0);
      }
      uStack_180 = local_228;
      uVar4 = uStack_180;
      local_178 = (undefined **)uStack_220;
      uStack_190 = local_238;
      local_188 = uStack_230;
      uStack_180._4_4_ = (int)(local_228 >> 0x20);
      iVar7 = uStack_180._4_4_;
      local_198 = pcVar13;
      if ((uStack_180._4_4_ != iVar6) || (uStack_180 = uVar4, uStack_230 != lVar10)) {
        do {
          uStack_180 = uVar4;
          uVar8 = *(uint *)(*(longlong *)local_198 + (longlong)iVar7 * 0xc);
          local_238 = (code *)CONCAT44(local_238._4_4_,uVar8);
          lVar9 = 0x10;
          if (*(int *)(param_1 + 0x220) != *(int *)(param_1 + 0x24c)) {
            plVar11 = *(longlong **)(param_1 + 600);
            if (*(longlong **)(param_1 + 600) == (longlong *)0x0) {
              plVar11 = local_2d8;
            }
            iVar7 = *(int *)((longlong)plVar11 +
                            (ulonglong)(*(int *)(param_1 + 0x260) - 1U & uVar8) * 4);
            if (iVar7 != -1) {
              do {
                if (*(uint *)(*(longlong *)local_2e0 + (longlong)iVar7 * 0xc) == uVar8) {
                  lVar9 = 0;
                  break;
                }
                iVar7 = *(int *)(*(longlong *)local_2e0 + (longlong)iVar7 * 0xc + 4);
              } while (iVar7 != -1);
            }
          }
          iVar7 = *(int *)(lVar16 + 8 + lVar9);
          *(uint *)(lVar16 + 8 + lVar9) = iVar7 + 1U;
          if (*(uint *)(lVar16 + 0xc + lVar9) < iVar7 + 1U) {
            FUN_1446f48e2((longlong *)(lVar16 + lVar9),iVar7);
          }
          *(undefined4 *)(*(longlong *)(lVar16 + lVar9) + (longlong)iVar7 * 4) = local_238._0_4_;
          FUN_1447cbafe(lVar15,local_f8,&local_238);
          uStack_180 = CONCAT44(uStack_180._4_4_,(uint)uStack_180 & ~uStack_190._4_4_);
          FUN_1449c0562(&uStack_190);
          param_1 = local_2e8;
          iVar7 = uStack_180._4_4_;
          uVar4 = uStack_180;
        } while (local_198 != pcVar13 || (local_188 != lVar10 || uStack_180._4_4_ != iVar6));
      }
      plVar14 = (longlong *)((longlong)local_2c8 + 1);
      plVar11 = (longlong *)((longlong)local_2c0 + 4);
    } while (plVar11 != local_2d0);
  }
  lVar15 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x208);
  lVar10 = local_248;
  if (((lVar15 != 0) && (0 < *(int *)(lVar15 + 0x38))) &&
     (lVar15 = **(longlong **)(lVar15 + 0x30), lVar15 != 0)) {
    local_2d8 = (longlong *)(param_1 + 0x38);
    local_2e0 = (code *)(param_1 + 0x48);
    local_198 = (code *)&DAT_100000000;
    local_188 = 0xffffffff;
    uStack_180 = uStack_180 & 0xffffffff00000000;
    iVar6 = 0;
    uStack_190 = local_2e0;
    if (*(int *)(param_1 + 0x60) != 0) {
      FUN_1449c0562(&local_198);
      iVar6 = *(int *)(param_1 + 0x60);
    }
    local_248 = local_188;
    lVar10 = local_248;
    local_240 = (uint)uStack_180;
    local_23c = uStack_180._4_4_;
    local_258 = local_198;
    local_250 = uStack_190;
    local_260 = local_2d8;
    local_248._4_4_ = (int)((ulonglong)local_188 >> 0x20);
    if ((local_248._4_4_ != iVar6) || (param_1 = local_2e8, uStack_190 != local_2e0)) {
      lVar16 = local_2e8 + 0x268;
      local_2d0 = local_1b8;
      local_2c8 = local_118;
      local_2c0 = (longlong *)CONCAT44(local_2c0._4_4_,iVar6);
      iVar6 = local_248._4_4_;
      local_248 = lVar10;
LAB_1482de1ba:
      uVar2 = *(undefined4 *)(*local_260 + (longlong)iVar6 * 0xc);
      uStack_170 = *(longlong *)(local_2e8 + 8);
      local_188 = 0;
      local_178 = &PTR_LAB_149f3aae0;
      uStack_168 = CONCAT44(uStack_168._4_4_,uVar2);
      local_198 = FUN_146be9588;
      local_238 = (code *)(uStack_170 + 0xb8);
      uStack_230 = CONCAT44(uStack_230._4_4_,uVar2);
      FUN_146be94ac(local_f8,&local_238,&local_198);
      local_148 = 0xffffffffffffffff;
      local_138[0] = 0;
      local_128 = (longlong *)0x0;
      local_178 = (undefined **)local_98;
      local_188 = local_a8;
      uStack_180 = uStack_a0;
      local_198 = local_b8;
      uStack_190 = pcStack_b0;
      uStack_170 = CONCAT44(uStack_8c,local_90);
      uStack_168 = CONCAT44(uStack_84,uStack_88);
      uStack_160 = CONCAT44(uStack_7c,local_80);
      uStack_158 = CONCAT44(uStack_74,uStack_78);
      local_150 = local_70;
      FUN_146be971a(local_138,local_f8);
      local_13c = 0;
      FUN_146bfd1f0(&local_198);
      local_1e8 = 0xffffffffffffffff;
      local_1d8[0] = 0;
      local_1c8 = (longlong *)0x0;
      local_218 = local_70;
      local_238 = (code *)CONCAT44(uStack_8c,local_90);
      uStack_230 = CONCAT44(uStack_84,uStack_88);
      local_228 = CONCAT44(uStack_7c,local_80);
      uStack_220 = CONCAT44(uStack_74,uStack_78);
      local_210 = local_90;
      uStack_20c = uStack_8c;
      uStack_208 = uStack_88;
      uStack_204 = uStack_84;
      local_200 = local_80;
      uStack_1fc = uStack_7c;
      uStack_1f8 = uStack_78;
      uStack_1f4 = uStack_74;
      local_1f0 = local_70;
      FUN_146be971a(local_1d8,local_f8);
      local_1dc = 0;
      ppcVar12 = &local_238;
LAB_1482de360:
      FUN_146bfd1f0(ppcVar12);
      if (local_198 == local_238) {
        if ((int)uStack_190 == (int)uStack_230) {
          if ((uint)uStack_180 == (int)uStack_220) {
            if (uStack_180._4_4_ == uStack_220._4_4_) goto LAB_1482de44f;
          }
        }
      }
      uVar8 = local_140 * 3;
      lVar10 = *(longlong *)(lVar15 + 0x78);
      iVar6 = *(int *)(*(longlong *)(lVar10 + (ulonglong)(uVar8 >> 9) * 8) +
                      (ulonglong)(uVar8 & 0x1ff) * 4);
      ppcVar12 = &local_198;
      if (-1 < iVar6) {
        local_264 = *(undefined4 *)
                     (*(longlong *)(lVar10 + (ulonglong)(uVar8 + 2 >> 9) * 8) +
                     (ulonglong)(uVar8 + 2 & 0x1ff) * 4);
        local_268 = *(undefined4 *)
                     (*(longlong *)(lVar10 + (ulonglong)(uVar8 + 1 >> 9) * 8) +
                     (ulonglong)(uVar8 + 1 & 0x1ff) * 4);
        local_26c = iVar6;
        FUN_1447cbafe(lVar16,local_270,&local_26c,0);
        FUN_1447cbafe(lVar16,local_270,&local_268,0);
        FUN_1447cbafe(lVar16,local_270,&local_264,0);
      }
      goto LAB_1482de360;
    }
  }
LAB_1482de51c:
  local_248 = lVar10;
  FUN_146286f4e(param_1 + 0x38,&local_198,param_1 + 0x128);
  FUN_145be27ca(param_1 + 0x38,&local_198);
  local_150 = local_150 & 0xffffffff00000000;
  if (uStack_158 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_198);
  if ((local_60 ^ (ulonglong)auStack_308) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1482de44f:
  if (local_1d8[0] != 0) {
    plVar11 = local_1c8;
    if (local_1c8 == (longlong *)0x0) {
      plVar11 = local_2d0;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  if (local_138[0] != 0) {
    plVar11 = local_128;
    if (local_128 == (longlong *)0x0) {
      plVar11 = local_2c8;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  if (local_f8[0] != 0) {
    plVar11 = local_e8;
    if (local_e8 == (longlong *)0x0) {
      plVar11 = local_d8;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  local_248 = CONCAT44(local_248._4_4_,(uint)local_248 & ~local_258._4_4_);
  FUN_1449c0562(&local_258);
  param_1 = local_2e8;
  iVar6 = local_248._4_4_;
  lVar10 = local_248;
  if (local_260 == local_2d8 && (local_250 == local_2e0 && local_248._4_4_ == (int)local_2c0))
  goto LAB_1482de51c;
  goto LAB_1482de1ba;
}



// FUNCTION 1482dea92 FUN_1482dea92 body=121 status=ok
// SIG undefined FUN_1482dea92(void)

void FUN_1482dea92(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_148308010(param_1,iVar1);
    }
    FUN_148307ffc((longlong)iVar1 * 0x20 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_148308096(param_1,param_2,iVar1 - param_2);
    FUN_1483080f0(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1482deb0c FUN_1482deb0c body=1349 status=ok
// SIG undefined FUN_1482deb0c(void)

void FUN_1482deb0c(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  uint *puVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong *plVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  
  iVar2 = *(int *)(param_1 + 0x2c0);
  FUN_1482df052(param_1 + 0x2d8,iVar2);
  if (0 < (longlong)iVar2) {
    lVar20 = 0;
    do {
      lVar6 = *(longlong *)(param_1 + 0x2b8);
      iVar3 = *(int *)(lVar6 + 0x18 + lVar20 * 0x48);
      plVar17 = (longlong *)(lVar20 * 0x10 + *(longlong *)(param_1 + 0x2d8));
      FUN_1482df0cc(plVar17,iVar3);
      puVar7 = *(uint **)(lVar6 + 0x10 + lVar20 * 0x48);
      uVar4 = *puVar7;
      lVar16 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
      lVar19 = *(longlong *)(lVar16 + (ulonglong)(uVar4 >> 9) * 8);
      uVar15 = (ulonglong)uVar4 & 0x1ff;
      dVar21 = *(double *)(lVar19 + uVar15 * 0x18);
      dVar23 = *(double *)(lVar19 + 8 + uVar15 * 0x18);
      dVar25 = *(double *)(lVar19 + 0x10 + uVar15 * 0x18);
      uVar4 = puVar7[(longlong)iVar3 + -1];
      lVar16 = *(longlong *)(lVar16 + (ulonglong)(uVar4 >> 9) * 8);
      uVar15 = (ulonglong)uVar4 & 0x1ff;
      dVar22 = *(double *)(lVar16 + uVar15 * 0x18);
      dVar24 = *(double *)(lVar16 + 8 + uVar15 * 0x18);
      dVar26 = *(double *)(lVar16 + 0x10 + uVar15 * 0x18);
      dVar11 = dVar26 - dVar25;
      dVar12 = dVar24 - dVar23;
      dVar28 = dVar22 - dVar21;
      dVar9 = SQRT(dVar11 * dVar11 + dVar28 * dVar28 + dVar12 * dVar12);
      dVar27 = 0.0;
      dVar29 = 0.0;
      dVar30 = 0.0;
      dVar10 = 0.0;
      if (0.0 < dVar9) {
        dVar30 = 1.0 / dVar9;
        dVar27 = dVar28 * dVar30;
        dVar29 = dVar12 * dVar30;
        dVar30 = dVar11 * dVar30;
        dVar10 = dVar9 * 0.5;
      }
      if (2 < iVar3) {
        dVar25 = (dVar25 + dVar26) * 0.5;
        dVar23 = (dVar23 + dVar24) * 0.5;
        dVar21 = (dVar21 + dVar22) * 0.5;
        lVar16 = 0;
        do {
          uVar4 = *(uint *)(*(longlong *)(lVar20 * 0x48 + 0x10 + lVar6) + 4 + lVar16);
          lVar19 = *(longlong *)
                    (*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + (ulonglong)(uVar4 >> 9) * 8)
          ;
          uVar15 = (ulonglong)(uVar4 & 0x1ff);
          dVar22 = *(double *)(lVar19 + uVar15 * 0x18);
          dVar24 = *(double *)(lVar19 + 8 + uVar15 * 0x18);
          dVar26 = *(double *)(lVar19 + 0x10 + uVar15 * 0x18);
          lVar19 = *plVar17;
          dVar28 = (((dVar26 - dVar25) * dVar30 +
                    (dVar22 - dVar21) * dVar27 + (dVar24 - dVar23) * dVar29) / dVar10 + 1.0) * 0.5;
          dVar9 = 1.0;
          if (dVar28 <= 1.0) {
            dVar9 = dVar28;
          }
          dVar9 = (double)(~-(ulonglong)(dVar28 < 0.0) & (ulonglong)dVar9);
          *(double *)(lVar19 + 0x20 + lVar16 * 8) = dVar9;
          dVar28 = (dVar9 + dVar9 + -1.0) * dVar10;
          *(double *)(lVar19 + 0x28 + lVar16 * 8) = dVar22 - (dVar28 * dVar27 + dVar21);
          *(double *)(lVar19 + 0x30 + lVar16 * 8) = dVar24 - (dVar29 * dVar28 + dVar23);
          *(double *)(lVar19 + 0x38 + lVar16 * 8) = dVar26 - (dVar30 * dVar28 + dVar25);
          lVar16 = lVar16 + 4;
        } while (((longlong)iVar3 - 1U & 0xffffffff) * 4 + -4 != lVar16);
      }
      lVar20 = lVar20 + 1;
    } while (lVar20 != iVar2);
  }
  iVar2 = *(int *)(param_1 + 0x2d0);
  FUN_1482df13a(param_1 + 0x2e8,iVar2);
  if (0 < (longlong)iVar2) {
    lVar20 = 0;
    do {
      lVar6 = *(longlong *)(param_1 + 0x2c8);
      lVar16 = lVar20 * 0x20;
      uVar4 = *(uint *)(lVar6 + 8 + lVar16);
      uVar15 = (ulonglong)uVar4;
      iVar3 = *(int *)(lVar6 + 0x18 + lVar16);
      plVar17 = (longlong *)(lVar20 * 0x10 + *(longlong *)(param_1 + 0x2e8));
      FUN_1482df1b4(plVar17,iVar3);
      if (0 < (longlong)iVar3) {
        lVar19 = 0;
        do {
          uVar5 = *(uint *)(((longlong *)(lVar6 + lVar16))[2] + lVar19 * 4);
          lVar13 = *(longlong *)
                    (*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + (ulonglong)(uVar5 >> 9) * 8)
          ;
          uVar14 = (ulonglong)(uVar5 & 0x1ff);
          dVar21 = *(double *)(lVar13 + uVar14 * 0x18);
          dVar23 = *(double *)(lVar13 + 8 + uVar14 * 0x18);
          dVar25 = *(double *)(lVar13 + 0x10 + uVar14 * 0x18);
          lVar13 = *plVar17;
          plVar1 = (longlong *)(lVar19 * 0x20 + lVar13);
          FUN_1400bd09c(plVar1,uVar15,1);
          FUN_14051b394(lVar19 * 0x20 + lVar13 + 0x10,uVar4,1);
          if (0 < (int)uVar4) {
            dVar22 = 0.0;
            lVar13 = 0x10;
            uVar14 = 0;
            do {
              uVar5 = *(uint *)(*(longlong *)(lVar6 + lVar16) + uVar14 * 4);
              lVar8 = *(longlong *)
                       (*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) +
                       (ulonglong)(uVar5 >> 9) * 8);
              uVar18 = (ulonglong)(uVar5 & 0x1ff);
              dVar24 = dVar25 - *(double *)(lVar8 + 0x10 + uVar18 * 0x18);
              dVar26 = dVar23 - *(double *)(lVar8 + 8 + uVar18 * 0x18);
              dVar28 = dVar21 - *(double *)(lVar8 + uVar18 * 0x18);
              lVar8 = plVar1[2];
              *(double *)(lVar8 + -0x10 + lVar13) = dVar28;
              *(double *)(lVar8 + -8 + lVar13) = dVar26;
              *(double *)(lVar8 + lVar13) = dVar24;
              dVar24 = 1.0 / (dVar24 * dVar24 + dVar28 * dVar28 + dVar26 * dVar26);
              *(double *)(*plVar1 + uVar14 * 8) = dVar24;
              dVar22 = dVar22 + dVar24;
              uVar14 = uVar14 + 1;
              lVar13 = lVar13 + 0x18;
            } while (uVar15 != uVar14);
            uVar14 = 0;
            do {
              *(double *)(*plVar1 + uVar14 * 8) = *(double *)(*plVar1 + uVar14 * 8) / dVar22;
              uVar14 = uVar14 + 1;
            } while (uVar15 != uVar14);
          }
          lVar19 = lVar19 + 1;
        } while (lVar19 != iVar3);
      }
      lVar20 = lVar20 + 1;
    } while (lVar20 != iVar2);
  }
  return;
}



// FUNCTION 1482df052 FUN_1482df052 body=121 status=ok
// SIG undefined FUN_1482df052(void)

void FUN_1482df052(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14830819e(param_1,iVar1);
    }
    FUN_14830818b((longlong)iVar1 * 0x10 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_148308224(param_1,param_2,iVar1 - param_2);
    FUN_14830827e(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1482df0cc FUN_1482df0cc body=109 status=ok
// SIG undefined FUN_1482df0cc(void)

void FUN_1482df0cc(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_148308344(param_1,iVar1);
    }
    FUN_148308319((longlong)iVar1 * 0x20 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_1483083ca(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1482df13a FUN_1482df13a body=121 status=ok
// SIG undefined FUN_1482df13a(void)

void FUN_1482df13a(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_148308478(param_1,iVar1);
    }
    FUN_148308465((longlong)iVar1 * 0x10 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_1483084fe(param_1,param_2,iVar1 - param_2);
    FUN_148308558(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1482df1b4 FUN_1482df1b4 body=121 status=ok
// SIG undefined FUN_1482df1b4(void)

void FUN_1482df1b4(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_148308606(param_1,iVar1);
    }
    FUN_1483085f3((longlong)iVar1 * 0x20 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_14830868c(param_1,param_2,iVar1 - param_2);
    FUN_1483086e6(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1482df22e FUN_1482df22e body=9 status=ok
// SIG undefined FUN_1482df22e(void)

void FUN_1482df22e(longlong param_1)

{
  FUN_1482df238(param_1 + 0x18);
  return;
}



// FUNCTION 1482df238 FUN_1482df238 body=154 status=ok
// SIG undefined FUN_1482df238(void)

void FUN_1482df238(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  char cVar8;
  undefined4 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  
  lVar7 = param_1[1];
  if (0 < (longlong)(int)lVar7) {
    lVar12 = 0;
    lVar10 = 0;
    do {
      puVar9 = (undefined4 *)(param_1[2] + lVar12);
      uVar2 = *(uint *)(*param_1 + lVar10 * 4);
      cVar8 = FUN_146bfed03(puVar9);
      if (cVar8 != '\0') {
        lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar2 >> 9) * 8);
        uVar11 = (ulonglong)(uVar2 & 0x1ff);
        *(undefined8 *)(lVar3 + 0x10 + uVar11 * 0x18) = *(undefined8 *)(puVar9 + 4);
        uVar4 = puVar9[1];
        uVar5 = puVar9[2];
        uVar6 = puVar9[3];
        puVar1 = (undefined4 *)(lVar3 + uVar11 * 0x18);
        *puVar1 = *puVar9;
        puVar1[1] = uVar4;
        puVar1[2] = uVar5;
        puVar1[3] = uVar6;
        if (*(char *)(param_2 + 0x210) == '\x01') {
          LOCK();
          *(int *)(param_2 + 0x214) = *(int *)(param_2 + 0x214) + 1;
          UNLOCK();
        }
      }
      lVar10 = lVar10 + 1;
      lVar12 = lVar12 + 0x18;
    } while ((int)lVar7 != lVar10);
  }
  return;
}



// FUNCTION 1482df2d2 FUN_1482df2d2 body=1555 status=ok
// SIG undefined FUN_1482df2d2(void)

void FUN_1482df2d2(longlong param_1,longlong param_2,undefined8 *param_3)

{
  double dVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  uint uVar8;
  code *pcVar9;
  longlong lVar10;
  uint *puVar11;
  double dVar12;
  char cVar13;
  int iVar14;
  undefined8 uVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong lVar18;
  int iVar19;
  longlong *plVar20;
  ulonglong uVar21;
  longlong *plVar22;
  ulonglong uVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined1 auStack_1a8 [40];
  undefined4 local_180;
  longlong **local_178;
  longlong *local_170;
  longlong *local_168;
  longlong *local_160;
  longlong local_158;
  longlong *local_150;
  longlong *local_148;
  undefined8 uStack_140;
  double dStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  longlong local_120;
  code *local_118;
  longlong *plStack_110;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  uint local_f4;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_120 = param_2;
  FUN_1482df238(param_1 + 0x18);
  local_168 = (longlong *)(param_1 + 0x88);
  dVar1 = (double)(param_1 + 0x98);
  local_118 = (code *)0x100000000;
  local_108 = 0xffffffff;
  uStack_100 = 0;
  plStack_110 = (longlong *)dVar1;
  if (*(int *)(param_1 + 0xb0) == 0) {
    iVar19 = 0;
  }
  else {
    FUN_1449c0562(&local_118);
    iVar19 = *(int *)(param_1 + 0xb0);
  }
  uStack_128 = CONCAT44(uStack_fc,uStack_100);
  local_130 = local_108;
  uVar15 = local_130;
  uStack_140 = local_118;
  dStack_138 = (double)plStack_110;
  local_130._4_4_ = (int)((ulonglong)local_108 >> 0x20);
  if ((local_130._4_4_ != iVar19) || (plStack_110 != (longlong *)dVar1)) {
    local_170 = param_3 + 4;
    iVar14 = local_130._4_4_;
    local_148 = local_168;
    local_130 = uVar15;
    do {
      lVar10 = local_120;
      uVar8 = *(uint *)(*local_148 + (longlong)iVar14 * 0xc);
      local_158 = local_120;
      pcVar9 = (code *)*param_3;
      plVar17 = (longlong *)param_3[2];
      if ((longlong *)param_3[2] == (longlong *)0x0) {
        plVar17 = local_170;
      }
      local_f4 = uVar8;
      uVar15 = (**(code **)(*plVar17 + 8))();
      (*pcVar9)(&local_118,uVar15,&local_158,&local_f4);
      cVar13 = FUN_146bfed03(&local_118);
      if (cVar13 != '\0') {
        lVar18 = *(longlong *)(*(longlong *)(lVar10 + 0x10) + (ulonglong)(uVar8 >> 9) * 8);
        *(undefined8 *)(lVar18 + 0x10 + (ulonglong)(uVar8 & 0x1ff) * 0x18) = local_108;
        pdVar2 = (double *)(lVar18 + (ulonglong)(uVar8 & 0x1ff) * 0x18);
        *pdVar2 = (double)local_118;
        pdVar2[1] = (double)plStack_110;
        if (*(char *)(lVar10 + 0x210) == '\x01') {
          LOCK();
          *(int *)(lVar10 + 0x214) = *(int *)(lVar10 + 0x214) + 1;
          UNLOCK();
        }
      }
      local_130 = CONCAT44(local_130._4_4_,(uint)local_130 & ~uStack_140._4_4_);
      FUN_1449c0562(&uStack_140);
      iVar14 = local_130._4_4_;
      uVar15 = local_130;
    } while (local_148 != local_168 || (dStack_138 != dVar1 || local_130._4_4_ != iVar19));
  }
  local_130 = uVar15;
  local_160 = (longlong *)(longlong)*(int *)(param_1 + 0x2c0);
  if (0 < (longlong)local_160) {
    plVar22 = (longlong *)0x0;
    plVar17 = local_168;
    do {
      lVar10 = *(longlong *)(param_1 + 0x2b8);
      iVar19 = *(int *)(lVar10 + 0x18 + (longlong)plVar22 * 0x48);
      puVar11 = *(uint **)(lVar10 + 0x10 + (longlong)plVar22 * 0x48);
      uVar8 = *puVar11;
      lVar18 = *(longlong *)(*(longlong *)(local_120 + 0x10) + (ulonglong)(uVar8 >> 9) * 8);
      uVar21 = (ulonglong)uVar8 & 0x1ff;
      dVar1 = *(double *)(lVar18 + uVar21 * 0x18);
      dVar3 = *(double *)(lVar18 + 8 + uVar21 * 0x18);
      dVar4 = *(double *)(lVar18 + 0x10 + uVar21 * 0x18);
      uVar8 = puVar11[(longlong)iVar19 + -1];
      lVar18 = *(longlong *)(*(longlong *)(local_120 + 0x10) + (ulonglong)(uVar8 >> 9) * 8);
      uVar21 = (ulonglong)uVar8 & 0x1ff;
      dVar5 = *(double *)(lVar18 + uVar21 * 0x18);
      dVar6 = *(double *)(lVar18 + 8 + uVar21 * 0x18);
      dVar7 = *(double *)(lVar18 + 0x10 + uVar21 * 0x18);
      dVar25 = dVar7 - dVar4;
      dVar27 = dVar6 - dVar3;
      dVar29 = dVar5 - dVar1;
      dVar24 = SQRT(dVar25 * dVar25 + dVar29 * dVar29 + dVar27 * dVar27);
      dVar28 = 0.0;
      dVar30 = 0.0;
      dVar26 = 0.0;
      dVar12 = 0.0;
      if (0.0 < dVar24) {
        dVar26 = 1.0 / dVar24;
        dVar30 = dVar29 * dVar26;
        dVar28 = dVar27 * dVar26;
        dVar26 = dVar25 * dVar26;
        dVar12 = dVar24 * 0.5;
      }
      local_170 = plVar22;
      if (2 < iVar19) {
        plVar20 = (longlong *)((longlong)plVar22 * 0x10 + *(longlong *)(param_1 + 0x2d8));
        plVar22 = (longlong *)(lVar10 + (longlong)plVar22 * 0x48 + 0x10);
        uVar21 = 1;
        do {
          lVar10 = local_120;
          if (*(int *)(param_1 + 0x90) != *(int *)(param_1 + 0xbc)) {
            uVar8 = *(uint *)(*plVar22 + uVar21 * 4);
            lVar18 = *(longlong *)(param_1 + 200);
            if (*(longlong *)(param_1 + 200) == 0) {
              lVar18 = param_1 + 0xc0;
            }
            iVar14 = *(int *)(lVar18 + (ulonglong)(*(int *)(param_1 + 0xd0) - 1U & uVar8) * 4);
            if (iVar14 != -1) {
              do {
                if (*(uint *)(*plVar17 + (longlong)iVar14 * 0xc) == uVar8) goto LAB_1482df7cb;
                iVar14 = *(int *)(*plVar17 + (longlong)iVar14 * 0xc + 4);
              } while (iVar14 != -1);
            }
          }
          lVar16 = uVar21 * 0x20;
          dVar24 = *(double *)(*plVar20 + lVar16);
          dVar24 = (dVar24 + dVar24 + -1.0) * dVar12;
          lVar18 = *plVar20;
          local_148 = (longlong *)
                      (dVar24 * dVar30 + (dVar1 + dVar5) * 0.5 + *(double *)(lVar18 + 8 + lVar16));
          uStack_140 = (code *)(dVar28 * dVar24 + (dVar3 + dVar6) * 0.5 +
                               *(double *)(lVar18 + 0x10 + lVar16));
          dStack_138 = dVar26 * dVar24 + (dVar4 + dVar7) * 0.5 + *(double *)(lVar18 + 0x18 + lVar16)
          ;
          uVar8 = *(uint *)(*plVar22 + uVar21 * 4);
          cVar13 = FUN_146bfed03(&local_148);
          plVar17 = local_168;
          if (cVar13 != '\0') {
            lVar18 = *(longlong *)(*(longlong *)(lVar10 + 0x10) + (ulonglong)(uVar8 >> 9) * 8);
            uVar23 = (ulonglong)(uVar8 & 0x1ff);
            *(double *)(lVar18 + 0x10 + uVar23 * 0x18) = dStack_138;
            pdVar2 = (double *)(lVar18 + uVar23 * 0x18);
            *pdVar2 = (double)local_148;
            pdVar2[1] = (double)uStack_140;
            if (*(char *)(lVar10 + 0x210) == '\x01') {
              LOCK();
              *(int *)(lVar10 + 0x214) = *(int *)(lVar10 + 0x214) + 1;
              UNLOCK();
            }
          }
LAB_1482df7cb:
          uVar21 = uVar21 + 1;
        } while (uVar21 != iVar19 - 1);
      }
      plVar22 = (longlong *)((longlong)local_170 + 1);
    } while (plVar22 != local_160);
  }
  plStack_110 = &local_158;
  local_150 = &local_120;
  local_178 = &local_148;
  local_148 = (longlong *)0x0;
  uStack_140 = (code *)((ulonglong)uStack_140._4_4_ << 0x20);
  local_118 = FUN_143b050da;
  local_180 = 0;
  local_158 = param_1;
  FUN_1401f8d10(L"ParallelFor Task",*(undefined4 *)(param_1 + 0x2d0),1);
  FUN_146c3906a(local_120,0,1,1);
  if ((local_f0 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1482df8e6 FUN_1482df8e6 body=82 status=ok
// SIG undefined FUN_1482df8e6(void)

void FUN_1482df8e6(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_14ae72ba0;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0x3ff0000000000000;
  *(undefined4 *)(param_1 + 5) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x2c) = 0x101;
  param_1[6] = 0x3f80000000000000;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  return;
}



// FUNCTION 1482df938 FUN_1482df938 body=112 status=ok
// SIG undefined FUN_1482df938(void)

void FUN_1482df938(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14ae72ba0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_148308781(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  lVar1 = param_1[8];
  if (lVar1 != 0) {
    FUN_146c2c40e(lVar1);
    FUN_1400020a8(lVar1);
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1482df9a8 FUN_1482df9a8 body=593 status=ok
// SIG undefined FUN_1482df9a8(void)

uint FUN_1482df9a8(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  undefined8 uVar8;
  undefined7 uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined1 auStack_118 [36];
  uint local_f4;
  longlong *local_f0;
  longlong *local_e8;
  longlong local_e0;
  longlong local_d8;
  ulonglong uStack_d0;
  longlong local_c8;
  longlong lStack_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 local_98;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_c8 = 0;
  lStack_c0 = 0;
  local_b8 = 0;
  local_e0 = param_1[1];
  cVar7 = *(char *)(local_e0 + 0x70);
  if (cVar7 == '\0') {
    lStack_c0 = 0;
    local_b8 = 0;
    local_c8 = local_e0;
    FUN_146c37e28(&local_c8,1,1);
    local_e0 = param_1[1];
  }
  local_d8 = 0;
  uStack_d0 = 0;
  local_a8 = 0;
  local_98 = 0;
  FUN_142984384(&local_e0,param_1 + 2);
  plVar13 = param_1 + 9;
  uVar8 = FUN_1482dfbfa(plVar13,uStack_d0 & 0xffffffff);
  uVar9 = (undefined7)((ulonglong)uVar8 >> 8);
  local_f4 = (uint)CONCAT71(uVar9,1);
  if (0 < (int)uStack_d0) {
    plVar11 = &local_c8;
    if (cVar7 != '\0') {
      plVar11 = (longlong *)0x0;
    }
    plVar1 = param_1 + 0xb;
    local_f4 = (uint)CONCAT71(uVar9,1);
    lVar10 = 0;
    local_f0 = plVar11;
    local_e8 = plVar13;
    do {
      plVar12 = (longlong *)(lVar10 * 0x50 + *plVar13);
      plVar4 = *(longlong **)(local_d8 + lVar10 * 8);
      if (plVar12 != plVar4) {
        if (*plVar12 != 0) {
          FUN_1400020a8();
        }
        *plVar12 = *plVar4;
        *plVar4 = 0;
        *(int *)(plVar12 + 1) = (int)plVar4[1];
        *(undefined4 *)((longlong)plVar12 + 0xc) = *(undefined4 *)((longlong)plVar4 + 0xc);
        plVar4[1] = 0;
      }
      cVar7 = (**(code **)(*param_1 + 0x18))(param_1,plVar12,plVar11);
      if (cVar7 == '\0') {
        local_f4 = 0;
      }
      else {
        uVar2 = *(uint *)(plVar12 + 1);
        if ((longlong)(int)uVar2 != 0) {
          iVar3 = (int)param_1[0xc];
          *(uint *)(param_1 + 0xc) = iVar3 + uVar2;
          if ((uint)(*(int *)((longlong)param_1 + 100) - iVar3) < uVar2) {
            FUN_1446f48e2(plVar1,iVar3);
          }
          memcpy((void *)((longlong)iVar3 * 4 + *plVar1),(void *)*plVar12,(longlong)(int)uVar2 << 2)
          ;
        }
        lVar6 = plVar12[7];
        plVar11 = local_f0;
        if ((longlong)(int)lVar6 != 0) {
          lVar5 = plVar12[6];
          lVar14 = 0;
          do {
            uVar2 = *(uint *)(lVar5 + 8 + lVar14);
            if ((longlong)(int)uVar2 != 0) {
              iVar3 = (int)param_1[0xc];
              *(uint *)(param_1 + 0xc) = iVar3 + uVar2;
              if ((uint)(*(int *)((longlong)param_1 + 100) - iVar3) < uVar2) {
                FUN_1446f48e2(plVar1,iVar3);
              }
              memcpy((void *)((longlong)iVar3 * 4 + *plVar1),*(void **)(lVar5 + lVar14),
                     (longlong)(int)uVar2 << 2);
            }
            lVar14 = lVar14 + 0x10;
            plVar11 = local_f0;
            plVar13 = local_e8;
          } while ((longlong)(int)lVar6 * 0x10 != lVar14);
        }
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 < (int)uStack_d0);
  }
  FUN_146be9400(&local_d8);
  if (lStack_c0 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_f4 & 0xffffff01;
}



// FUNCTION 1482dfbfa FUN_1482dfbfa body=122 status=ok
// SIG undefined FUN_1482dfbfa(void)

void FUN_1482dfbfa(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_148308848(param_1,iVar1);
    }
    FUN_148308831((longlong)iVar1 * 0x50 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_1483088dc(param_1,param_2,iVar1 - param_2);
    FUN_148308942(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1482dfc76 FUN_1482dfc76 body=6124 status=ok
// SIG undefined FUN_1482dfc76(void)

ulonglong FUN_1482dfc76(longlong param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined8 uVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  ulonglong uVar7;
  double *pdVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  byte bVar16;
  uint uVar17;
  undefined8 *puVar18;
  undefined1 *puVar19;
  int iVar20;
  longlong lVar21;
  uint *puVar22;
  undefined8 **ppuVar23;
  longlong *plVar24;
  longlong *plVar25;
  longlong lVar26;
  longlong *plVar27;
  longlong lVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  float fVar32;
  undefined1 auStack_b78 [32];
  undefined8 **local_b58;
  undefined4 local_b50;
  undefined8 *local_b48;
  longlong *local_b40;
  longlong *local_b38;
  uint local_b2c;
  longlong *local_b28;
  ulonglong local_b20;
  double local_b18;
  double dStack_b10;
  double local_b08;
  double local_b00;
  double local_af8;
  ulonglong local_af0;
  float local_ae8;
  float fStack_ae4;
  float local_ae0;
  undefined8 local_ad8;
  double dStack_ad0;
  double local_ac8;
  longlong local_ab8;
  undefined8 uStack_ab0;
  longlong local_aa8;
  undefined8 *local_aa0;
  undefined8 local_a98;
  undefined8 uStack_a90;
  undefined8 local_a88;
  undefined8 uStack_a80;
  undefined8 local_a78;
  undefined8 uStack_a70;
  undefined8 local_a68;
  undefined8 uStack_a60;
  undefined8 local_a58;
  undefined8 uStack_a50;
  undefined8 local_a48;
  undefined8 uStack_a40;
  undefined8 local_a38;
  undefined8 uStack_a30;
  longlong local_a28;
  ulonglong uStack_a20;
  longlong local_a18;
  ulonglong uStack_a10;
  undefined8 local_a00;
  void *local_9f8;
  int local_9f0;
  undefined4 local_9ec;
  undefined8 local_9e8;
  undefined8 uStack_9e0;
  double local_9d8;
  undefined8 *local_9c8;
  undefined8 uStack_9c0;
  double local_9b8;
  double dStack_9b0;
  double *pdStack_9a8;
  double dStack_9a0;
  double local_998 [4];
  undefined1 local_978;
  undefined8 *local_968;
  double *pdStack_960;
  undefined8 local_958;
  double dStack_950;
  double *pdStack_948;
  undefined4 uStack_940;
  undefined4 uStack_93c;
  undefined4 local_938;
  int iStack_934;
  undefined1 local_930 [8];
  undefined1 *local_928;
  int local_920;
  undefined8 local_898;
  undefined8 uStack_890;
  undefined8 local_888;
  double dStack_880;
  double *pdStack_878;
  undefined8 uStack_870;
  double local_868;
  undefined8 uStack_860;
  undefined8 local_858;
  undefined8 uStack_850;
  undefined8 local_848;
  undefined8 uStack_840;
  undefined8 local_838;
  undefined8 uStack_830;
  undefined1 local_670 [8];
  undefined1 local_668 [32];
  int local_648;
  int local_644;
  undefined8 *local_640;
  int local_618;
  undefined1 local_448 [952];
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_b78;
  lVar11 = *(longlong *)(param_1 + 0x40);
  local_b48 = param_2;
  if (lVar11 != 0) {
    local_9f8 = (void *)0x0;
    local_9f0 = *(int *)(param_2 + 1);
    lVar15 = (longlong)local_9f0;
    pvVar2 = (void *)*param_2;
    if (lVar15 == 0) {
      local_9ec = 0;
    }
    else {
      FUN_144a06ca8(&local_9f8,local_9f0,0);
      memcpy(local_9f8,pvVar2,lVar15 << 2);
      pvVar2 = local_9f8;
      lVar15 = (longlong)local_9f0;
      if (lVar15 != 0) {
        lVar26 = 0;
        do {
          FUN_146c2c9fe(lVar11,*(undefined4 *)((longlong)pvVar2 + lVar26),1);
          lVar26 = lVar26 + 4;
        } while (lVar15 * 4 != lVar26);
      }
      if (local_9f8 != (void *)0x0) {
        FUN_1400020a8(local_9f8,local_b48);
      }
    }
  }
  local_a00 = *(undefined8 *)(param_1 + 8);
  local_a18 = 0;
  uStack_a10 = 0;
  cVar4 = FUN_146bc7172(&local_a00,local_b48,&local_a18,1);
  if (cVar4 == '\0') {
    uVar7 = 0;
    goto LAB_1482dfe98;
  }
  local_a28 = 0;
  uStack_a20 = 0;
  FUN_1482e1464(&local_a28,uStack_a10 & 0xffffffff,1);
  if (0 < (int)(uint)uStack_a10) {
    lVar15 = 0x20;
    lVar11 = 0;
    lVar26 = 0;
    do {
      FUN_146bc5656(*(undefined8 *)(param_1 + 8),local_a18 + lVar15,local_a18 + lVar15 + 0x10,
                    local_a28 + lVar11);
      lVar26 = lVar26 + 1;
      lVar15 = lVar15 + 0x48;
      lVar11 = lVar11 + 0x10;
    } while (lVar26 < (int)(uint)uStack_a10);
  }
  puVar18 = local_b48;
  local_a38 = 0;
  uStack_a30 = 0;
  local_a48 = 0;
  uStack_a40 = 0;
  local_a58 = 0;
  uStack_a50 = 0;
  local_a68 = 0;
  uStack_a60 = 0;
  local_a78 = 0;
  uStack_a70 = 0;
  local_a88 = 0;
  uStack_a80 = 0;
  local_a98 = 0;
  uStack_a90 = 0;
  FUN_146bc900e(&local_a00,local_b48);
  local_b58 = (undefined8 **)((ulonglong)local_b58 & 0xffffffffffffff00);
  FUN_1482e14f4(local_670,*(undefined8 *)(param_1 + 8),puVar18,0);
  uVar12 = local_648 * 0x200 + local_644;
  uVar14 = 0;
  if ((uVar12 != 0) && (uVar14 = 0, 0xfffd < (ushort)(*(short *)*local_640 - 1U))) {
    uVar6 = 1;
    uVar13 = 1;
    if (1 < (int)uVar12) {
      uVar6 = uVar12;
    }
    do {
      uVar14 = uVar6;
      if (uVar6 == uVar13) break;
      uVar9 = uVar13 >> 9;
      uVar17 = uVar13 & 0x1ff;
      uVar14 = uVar13;
      uVar13 = uVar13 + 1;
    } while (0xfffd < (ushort)(*(short *)(local_640[uVar9] + (ulonglong)uVar17 * 2) - 1U));
  }
LAB_1482dfdfe:
  uVar6 = 0;
  if (uVar14 != uVar12) {
    cVar4 = FUN_146c0b51e(local_668,uVar14);
    if (cVar4 != '\x01') {
      uVar6 = 1;
      goto LAB_1482dff8d;
    }
    uVar6 = uVar14 + 1;
    if ((int)(uVar14 + 1) < (int)uVar12) {
      uVar6 = uVar12;
    }
    uVar13 = uVar14;
    do {
      uVar14 = uVar6;
      if (uVar6 - 1 == uVar13) break;
      uVar14 = uVar13 + 1;
      uVar13 = uVar14;
    } while (0xfffd < (ushort)(*(short *)(local_640[uVar14 >> 9] + (ulonglong)(uVar14 & 0x1ff) * 2)
                              - 1U));
    goto LAB_1482dfdfe;
  }
LAB_1482dff8d:
  puVar18 = local_b48;
  iVar20 = (int)uStack_a90;
  FUN_1482e1634(local_b48 + 4,uStack_a10 & 0xffffffff);
  local_aa0 = puVar18;
  local_aa8 = param_1;
  if (iVar20 < 1) {
    uVar14 = 0;
    local_b2c = uVar6;
    if ((longlong)(int)(uint)uStack_a10 != 0) {
      lVar11 = (longlong)(int)(uint)uStack_a10 * 0x48;
      lVar15 = local_a18 + 0x20;
      do {
        FUN_143aff462(&local_aa8,lVar15,lVar15 + 0x10);
        lVar15 = lVar15 + 0x48;
        lVar11 = lVar11 + -0x48;
      } while (lVar11 != 0);
      goto LAB_1482e0082;
    }
LAB_1482e008e:
    local_b38 = puVar18 + 2;
    FUN_146c6b324(local_b38,uVar14,1);
    local_b40 = puVar18 + 6;
    FUN_140bfc200(local_b40,uVar14,1);
    local_b28 = puVar18 + 8;
    FUN_140bfc200(local_b28,uVar14,1);
    local_ab8 = 0;
    uStack_ab0 = 0;
    if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar14);
    }
    if (uVar14 != 0) {
      FUN_148308c08(&local_ab8,uVar14);
      local_b20 = (ulonglong)uVar14;
      uVar7 = 0;
      do {
        plVar27 = (longlong *)(local_a18 + uVar7 * 0x48);
        lVar11 = (longlong)(int)plVar27[1];
        local_9c8 = (undefined8 *)0x0;
        uStack_9c0 = (double *)0x0;
        local_9e8 = 0.0;
        uStack_9e0 = 0.0;
        pdStack_948 = (double *)0x0;
        uStack_940 = 0;
        local_968 = (undefined8 *)0x0;
        pdStack_960 = (double *)0x0;
        uStack_93c = 0x80;
        local_938 = 0xffffffff;
        iStack_934 = 0;
        local_928 = (undefined1 *)0x0;
        local_920 = 0;
        if (0 < lVar11) {
          lVar15 = 0;
          do {
            uVar14 = FUN_146bc96d4(*(undefined8 *)(param_1 + 8),
                                   *(undefined4 *)
                                    (*(longlong *)(local_a28 + uVar7 * 0x10) + lVar15 * 8));
            lVar28 = lVar15 + 1;
            lVar26 = 0;
            if (lVar28 != lVar11) {
              lVar26 = lVar28;
            }
            uVar6 = FUN_146c061e0(*(undefined8 *)(param_1 + 8),
                                  *(undefined4 *)(*plVar27 + lVar15 * 4),
                                  *(undefined4 *)(*plVar27 + lVar26 * 4));
            uVar12 = uVar14;
            if (-1 < (int)uVar6) {
              uVar12 = FUN_146bc96d4(*(longlong *)(param_1 + 8),
                                     *(undefined4 *)
                                      (*(longlong *)
                                        (*(longlong *)(*(longlong *)(param_1 + 8) + 0x1c0) +
                                        (ulonglong)(uVar6 >> 9) * 8) + 8 +
                                      (ulonglong)((uVar6 & 0x1ff) << 4)));
            }
            dVar31 = (double)uStack_9c0;
            uVar6 = uVar14;
            if ((int)uVar12 < (int)uVar14) {
              uVar6 = uVar12;
              uVar12 = uVar14;
            }
            local_ad8 = (double)CONCAT44(uVar12,uVar6);
            if ((int)pdStack_960 != iStack_934) {
              puVar19 = local_928;
              if (local_928 == (undefined1 *)0x0) {
                puVar19 = local_930;
              }
              iVar20 = *(int *)(puVar19 +
                               (ulonglong)
                               (local_920 - 1U &
                               (uVar6 * 0x40 + uVar12 + (uVar6 >> 2) + 0x9e3779b9 ^ uVar6)) * 4);
              while (iVar20 != -1) {
                lVar15 = (longlong)iVar20;
                if ((*(uint *)((longlong)local_968 + lVar15 * 0x14) == uVar6) &&
                   (*(uint *)((longlong)local_968 + lVar15 * 0x14 + 4) == uVar12))
                goto LAB_1482e05a9;
                iVar20 = *(int *)((longlong)local_968 + lVar15 * 0x14 + 0xc);
              }
            }
            iVar20 = *(int *)(*(longlong *)(param_1 + 8) + 0x1b0);
            *(int *)(*(longlong *)(param_1 + 8) + 0x1b0) = iVar20 + 1;
            local_b18 = (double)CONCAT44(local_b18._4_4_,iVar20);
            lVar15 = (longlong)(int)uStack_9c0;
            uVar14 = (int)uStack_9c0 + 1;
            uStack_9c0 = (double *)CONCAT44(uStack_9c0._4_4_,uVar14);
            if (uStack_9c0._4_4_ < uVar14) {
              FUN_1446f48e2(&local_9c8,(ulonglong)dVar31 & 0xffffffff);
              iVar20 = local_b18._0_4_;
            }
            *(int *)((longlong)local_9c8 + lVar15 * 4) = iVar20;
            local_898 = &local_ad8;
            uStack_890 = &local_b18;
            FUN_148308c68(&local_968,&local_b00,&local_898);
LAB_1482e05a9:
            dVar31 = uStack_9e0;
            if ((int)pdStack_960 != iStack_934) {
              puVar19 = local_928;
              if (local_928 == (undefined1 *)0x0) {
                puVar19 = local_930;
              }
              uVar14 = *(uint *)(puVar19 +
                                (ulonglong)
                                (local_920 - 1U &
                                ((uint)local_ad8 * 0x40 + local_ad8._4_4_ + ((uint)local_ad8 >> 2) +
                                 0x9e3779b9 ^ (uint)local_ad8)) * 4);
              while (uVar14 != 0xffffffff) {
                puVar22 = (uint *)((longlong)local_968 + (longlong)(int)uVar14 * 0x14);
                if ((*puVar22 == (uint)local_ad8) &&
                   (*(int *)((longlong)local_968 + (longlong)(int)uVar14 * 0x14 + 4) ==
                    local_ad8._4_4_)) goto LAB_1482e0606;
                uVar14 = puVar22[3];
              }
            }
            puVar22 = (uint *)0x0;
LAB_1482e0606:
            lVar15 = (longlong)(int)uStack_9e0;
            uVar14 = (int)uStack_9e0 + 1;
            uStack_9e0 = (double)CONCAT44(uStack_9e0._4_4_,uVar14);
            if (uStack_9e0._4_4_ < uVar14) {
              FUN_1446f48e2(&local_9e8,(ulonglong)dVar31 & 0xffffffff);
            }
            *(uint *)((longlong)local_9e8 + lVar15 * 4) = puVar22[2];
            lVar15 = lVar28;
          } while (lVar28 != lVar11);
        }
        local_838 = 0;
        uStack_830 = 0;
        local_848 = 0;
        uStack_840 = 0;
        local_858 = 0;
        uStack_850 = 0;
        local_868 = 0.0;
        uStack_860 = 0;
        pdStack_878 = (double *)0x0;
        uStack_870 = 0.0;
        local_888 = 0;
        dStack_880 = 0.0;
        local_898 = (undefined8 *)0x0;
        uStack_890 = (double *)0x0;
        lVar11 = uVar7 * 0x10;
        FUN_146bc5364(&local_a00,local_a28 + lVar11,plVar27,&local_898);
        if (0 < (longlong)(int)uStack_870) {
          lVar15 = 0;
          do {
            lVar26 = *(longlong *)(param_1 + 8);
            bVar16 = *(byte *)(lVar26 + 0x1a8);
            if (bVar16 == 1) {
              uVar14 = *(uint *)((longlong)pdStack_878 + lVar15 * 8);
              iVar20 = *(int *)((longlong)local_9e8 + lVar15 * 4);
              *(int *)(*(longlong *)(*(longlong *)(lVar26 + 0x198) + (ulonglong)(uVar14 >> 9) * 8) +
                      (ulonglong)(uVar14 & 0x1ff) * 4) = iVar20;
              iVar20 = iVar20 + 1;
              if (iVar20 <= *(int *)(lVar26 + 0x1b0)) {
                iVar20 = *(int *)(lVar26 + 0x1b0);
              }
              *(int *)(lVar26 + 0x1b0) = iVar20;
              lVar26 = *(longlong *)(param_1 + 8);
              bVar16 = *(byte *)(lVar26 + 0x1a8);
            }
            if ((bVar16 & 1) != 0) {
              uVar14 = *(uint *)((longlong)pdStack_878 + 4 + lVar15 * 8);
              iVar20 = *(int *)((longlong)local_9e8 + lVar15 * 4);
              *(int *)(*(longlong *)(*(longlong *)(lVar26 + 0x198) + (ulonglong)(uVar14 >> 9) * 8) +
                      (ulonglong)(uVar14 & 0x1ff) * 4) = iVar20;
              iVar20 = iVar20 + 1;
              if (iVar20 <= *(int *)(lVar26 + 0x1b0)) {
                iVar20 = *(int *)(lVar26 + 0x1b0);
              }
              *(int *)(lVar26 + 0x1b0) = iVar20;
            }
            lVar15 = lVar15 + 1;
          } while ((int)uStack_870 != lVar15);
        }
        FUN_146bc4da6(&local_898,*local_b40 + lVar11);
        puVar18 = local_9c8;
        ppuVar23 = (undefined8 **)(lVar11 + *local_b28);
        if (ppuVar23 != &local_9c8) {
          iVar20 = (int)uStack_9c0;
          lVar11 = (longlong)(int)uStack_9c0;
          *(int *)(ppuVar23 + 1) = (int)uStack_9c0;
          if ((int)uStack_9c0 == 0 && *(int *)((longlong)ppuVar23 + 0xc) == 0) {
            *(undefined4 *)((longlong)ppuVar23 + 0xc) = 0;
          }
          else {
            FUN_144a06ca8(ppuVar23,(ulonglong)uStack_9c0 & 0xffffffff);
            if (iVar20 != 0) {
              memcpy(*ppuVar23,puVar18,lVar11 << 2);
            }
          }
        }
        uVar10 = uStack_ab0;
        lVar11 = (longlong)(int)uStack_ab0;
        uVar14 = (int)uStack_ab0 + 1;
        uStack_ab0 = CONCAT44(uStack_ab0._4_4_,uVar14);
        if (uStack_ab0._4_4_ < uVar14) {
          FUN_148308db6(&local_ab8,uVar10 & 0xffffffff);
        }
        lVar11 = lVar11 * 0x10;
        *(undefined8 *)(local_ab8 + lVar11) = 0;
        *(double **)(local_ab8 + lVar11) = pdStack_878;
        pdStack_878 = (double *)0x0;
        *(int *)(local_ab8 + 8 + lVar11) = (int)uStack_870;
        *(undefined4 *)(local_ab8 + 0xc + lVar11) = uStack_870._4_4_;
        uStack_870 = 0.0;
        lVar11 = *local_b38;
        uVar3 = *(undefined8 *)(param_1 + 8);
        *(undefined8 *)(lVar11 + uVar7 * 0x40) = uVar3;
        FUN_146c5d50a(lVar11 + uVar7 * 0x40,plVar27,CONCAT71((int7)((ulonglong)uVar3 >> 8),1));
        FUN_146bc8622(&local_898);
        local_920 = 0;
        if (local_928 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        FUN_146ec7714(&local_968);
        if (local_9e8 != 0.0) {
          FUN_1400020a8();
        }
        if (local_9c8 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 != local_b20);
    }
    if ((((local_b2c & 1) != 0) || (0.0 < *(float *)(param_1 + 0x30))) &&
       (*(char *)(param_1 + 0x2d) == '\x01')) {
      cVar4 = *(char *)(param_1 + 0x2c);
      fVar32 = *(float *)(param_1 + 0x30);
      FUN_146bff712(&local_898,local_668);
      FUN_146ba21d6(&local_968,&local_898,*(undefined1 *)(param_1 + 0x2c));
      local_b28 = (longlong *)CONCAT71(local_b28._1_7_,cVar4);
      if ((cVar4 == '\x01') && ((longlong)*(int *)(local_b48 + 5) != 0)) {
        plVar27 = (longlong *)local_b48[4];
        local_b40 = plVar27 + (longlong)*(int *)(local_b48 + 5) * 8;
        do {
          lVar11 = plVar27[2];
          if ((longlong)(int)lVar11 != 0) {
            local_b38 = (longlong *)plVar27[1];
            lVar15 = 0;
            do {
              uVar14 = *(uint *)((longlong)local_b38 + lVar15);
              FUN_146bcd1d8(local_448,uVar14);
              lVar26 = *(longlong *)(param_1 + 8);
              local_9c8 = (undefined8 *)0x7fefffffffffffff;
              local_9b8 = 0.0;
              pdStack_9a8 = (double *)0x0;
              local_978 = 0;
              lVar28 = *(longlong *)(*(longlong *)(lVar26 + 0x10) + (ulonglong)(uVar14 >> 9) * 8);
              uVar7 = (ulonglong)(uVar14 & 0x1ff);
              local_ac8 = *(double *)(lVar28 + 0x10 + uVar7 * 0x18);
              pdVar8 = (double *)(lVar28 + uVar7 * 0x18);
              local_ad8 = *pdVar8;
              dStack_ad0 = pdVar8[1];
              FUN_146ba2472(&local_968,&local_9e8,&local_ad8,&local_9c8);
              cVar4 = FUN_146bfed03(&local_9e8);
              if (cVar4 != '\0') {
                lVar28 = *(longlong *)(*(longlong *)(lVar26 + 0x10) + (ulonglong)(uVar14 >> 9) * 8);
                *(double *)(lVar28 + 0x10 + uVar7 * 0x18) = local_9d8;
                puVar1 = (undefined4 *)(lVar28 + uVar7 * 0x18);
                *puVar1 = (undefined4)local_9e8;
                puVar1[1] = local_9e8._4_4_;
                puVar1[2] = (int)uStack_9e0;
                puVar1[3] = uStack_9e0._4_4_;
                if (*(char *)(lVar26 + 0x210) == '\x01') {
                  LOCK();
                  *(int *)(lVar26 + 0x214) = *(int *)(lVar26 + 0x214) + 1;
                  UNLOCK();
                }
              }
              if (local_9b8 != 0.0) {
                pdVar8 = pdStack_9a8;
                if (pdStack_9a8 == (double *)0x0) {
                  pdVar8 = local_998;
                }
                (**(code **)((longlong)*pdVar8 + 0x10))();
              }
              lVar15 = lVar15 + 4;
            } while ((longlong)(int)lVar11 * 4 != lVar15);
          }
          plVar27 = plVar27 + 8;
        } while (plVar27 != local_b40);
      }
      lVar11 = (longlong)(int)uStack_ab0;
      dVar31 = 0.0;
      if (0 < lVar11) {
        lVar15 = 0;
        dVar31 = 0.0;
        do {
          lVar26 = lVar15 * 0x10;
          lVar28 = (longlong)*(int *)(local_ab8 + 8 + lVar26);
          if (0 < lVar28) {
            lVar21 = 0;
            do {
              dVar29 = (double)FUN_146c14650(*(undefined8 *)(param_1 + 8),
                                             *(undefined4 *)
                                              (*(longlong *)(local_ab8 + lVar26) + lVar21 * 8));
              dVar30 = (double)FUN_146c14650(*(undefined8 *)(param_1 + 8),
                                             *(undefined4 *)
                                              (*(longlong *)(local_ab8 + lVar26) + 4 + lVar21 * 8));
              dVar31 = dVar30 + dVar29 + dVar31;
              lVar21 = lVar21 + 1;
            } while (lVar28 != lVar21);
          }
          lVar15 = lVar15 + 1;
        } while (lVar15 != lVar11);
      }
      FUN_1482e1672(&local_b00,local_668);
      dVar31 = (double)(~-(ulonglong)(local_af8 - dVar31 <= 0.0) & (ulonglong)(local_af8 - dVar31))
               / local_af8;
      if (dVar31 < 0.0) {
        dVar31 = sqrt(dVar31);
      }
      else {
        dVar31 = SQRT(dVar31);
      }
      dVar29 = 0.1;
      if (0.1 <= dVar31) {
        dVar29 = dVar31;
      }
      FUN_148398218(&local_ae8,local_668);
      dVar31 = 0.0;
      if ((0.0 <= *(float *)(param_1 + 0x34)) &&
         (dVar30 = (double)*(float *)(param_1 + 0x34), dVar31 = 1.0, dVar30 <= 1.0)) {
        dVar31 = dVar30;
      }
      (**(code **)(*(longlong *)CONCAT44(fStack_ae4,local_ae8) + 0x48))
                ((longlong *)CONCAT44(fStack_ae4,local_ae8),
                 SUB84(dVar29 * dVar31 + (1.0 - dVar31),0));
      dVar31 = local_af8 / 6.0;
      if (dVar31 < 0.0) {
        dVar31 = sqrt(dVar31);
      }
      else {
        dVar31 = SQRT(dVar31);
      }
      if ((longlong)*(int *)(local_b48 + 5) != 0) {
        dVar29 = 0.01;
        if (0.01 <= dVar31) {
          dVar29 = dVar31;
        }
        dVar29 = (double)local_618 *
                 (((double)*(float *)(param_1 + 0x30) * (double)*(float *)(param_1 + 0x30)) / 50.0)
                 * dVar29;
        lVar11 = local_b48[4];
        lVar15 = (longlong)*(int *)(local_b48 + 5) * 0x40 + lVar11;
        do {
          iVar20 = *(int *)(lVar11 + 0x10);
          if ((longlong)iVar20 != 0) {
            lVar26 = *(longlong *)(lVar11 + 8);
            lVar28 = 0;
            do {
              uVar14 = *(uint *)(lVar26 + lVar28);
              uVar5 = FUN_146bcd1d8(local_448,uVar14);
              lVar21 = *(longlong *)
                        (*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) +
                        (ulonglong)(uVar14 >> 9) * 8);
              local_9b8 = *(double *)(lVar21 + 0x10 + (ulonglong)(uVar14 & 0x1ff) * 0x18);
              puVar18 = (undefined8 *)(lVar21 + (ulonglong)(uVar14 & 0x1ff) * 0x18);
              local_9c8 = (undefined8 *)*puVar18;
              uStack_9c0 = (double *)puVar18[1];
              local_b58 = (undefined8 **)CONCAT71(local_b58._1_7_,fVar32 <= 0.0);
              (**(code **)(*(longlong *)CONCAT44(fStack_ae4,local_ae8) + 8))
                        ((longlong *)CONCAT44(fStack_ae4,local_ae8),uVar5,
                         ~-(uint)(dVar29 < 9.999999974752427e-07) & SUB84(1.0 / dVar29,0),&local_9c8
                        );
              lVar28 = lVar28 + 4;
            } while ((longlong)iVar20 * 4 != lVar28);
          }
          lVar11 = lVar11 + 0x40;
        } while (lVar11 != lVar15);
      }
      local_b18 = 0.0;
      dStack_b10 = 0.0;
      cVar4 = (**(code **)(*(longlong *)CONCAT44(fStack_ae4,local_ae8) + 0x40))();
      if (cVar4 != '\0') {
        uVar12 = local_648 * 0x200 + local_644;
        uVar14 = 0;
        if ((uVar12 != 0) && (uVar14 = 0, 0xfffd < (ushort)(*(short *)*local_640 - 1U))) {
          uVar6 = 1;
          uVar13 = 1;
          if (1 < (int)uVar12) {
            uVar6 = uVar12;
          }
          do {
            uVar14 = uVar6;
            if (uVar6 == uVar13) break;
            uVar9 = uVar13 >> 9;
            uVar17 = uVar13 & 0x1ff;
            uVar14 = uVar13;
            uVar13 = uVar13 + 1;
          } while (0xfffd < (ushort)(*(short *)(local_640[uVar9] + (ulonglong)uVar17 * 2) - 1U));
        }
        if (uVar14 != uVar12) {
          do {
            if ((0.0 < fVar32) ||
               (cVar4 = (**(code **)(*(longlong *)CONCAT44(fStack_ae4,local_ae8) + 0x38))
                                  ((longlong *)CONCAT44(fStack_ae4,local_ae8),uVar14), cVar4 == '\0'
               )) {
              uVar6 = FUN_146be9b2a(local_448,uVar14);
              pdVar8 = (double *)((longlong)local_b18 + (longlong)(int)uVar14 * 0x18);
              local_9e8 = *pdVar8;
              uStack_9e0 = pdVar8[1];
              local_9d8 = *(double *)((longlong)local_b18 + 0x10 + (longlong)(int)uVar14 * 0x18);
              if ((char)local_b28 != '\0') {
                local_9c8 = (undefined8 *)0x7fefffffffffffff;
                local_9b8 = 0.0;
                pdStack_9a8 = (double *)0x0;
                local_978 = 0;
                FUN_146ba2472(&local_968,&local_ad8,&local_9e8,&local_9c8);
                local_9d8 = local_ac8;
                local_9e8 = local_ad8;
                uStack_9e0 = dStack_ad0;
                if (local_9b8 != 0.0) {
                  pdVar8 = pdStack_9a8;
                  if (pdStack_9a8 == (double *)0x0) {
                    pdVar8 = local_998;
                  }
                  (**(code **)((longlong)*pdVar8 + 0x10))();
                }
              }
              lVar11 = *(longlong *)(param_1 + 8);
              cVar4 = FUN_146bfed03(&local_9e8);
              if (cVar4 != '\0') {
                lVar15 = *(longlong *)(*(longlong *)(lVar11 + 0x10) + (ulonglong)(uVar6 >> 9) * 8);
                *(double *)(lVar15 + 0x10 + (ulonglong)(uVar6 & 0x1ff) * 0x18) = local_9d8;
                puVar1 = (undefined4 *)(lVar15 + (ulonglong)(uVar6 & 0x1ff) * 0x18);
                *puVar1 = (undefined4)local_9e8;
                puVar1[1] = local_9e8._4_4_;
                puVar1[2] = (int)uStack_9e0;
                puVar1[3] = uStack_9e0._4_4_;
                if (*(char *)(lVar11 + 0x210) == '\x01') {
                  LOCK();
                  *(int *)(lVar11 + 0x214) = *(int *)(lVar11 + 0x214) + 1;
                  UNLOCK();
                }
              }
            }
            uVar6 = uVar14 + 1;
            if ((int)(uVar14 + 1) < (int)uVar12) {
              uVar6 = uVar12;
            }
            do {
              uVar13 = uVar6;
              if (uVar6 - 1 == uVar14) break;
              uVar14 = uVar14 + 1;
              uVar13 = uVar14;
            } while (0xfffd < (ushort)(*(short *)(local_640[uVar14 >> 9] +
                                                 (ulonglong)(uVar14 & 0x1ff) * 2) - 1U));
            uVar14 = uVar13;
          } while (uVar14 != uVar12);
        }
      }
      if (local_b18 != 0.0) {
        FUN_1400020a8();
      }
      puVar18 = (undefined8 *)CONCAT44(fStack_ae4,local_ae8);
      if (puVar18 != (undefined8 *)0x0) {
        (**(code **)*puVar18)(puVar18,1);
      }
      FUN_1457e5b52(&local_968);
      FUN_141082778(&local_898);
    }
    plVar27 = (longlong *)(uStack_ab0 & 0xffffffff);
    if (0 < (int)uStack_ab0 && *(longlong *)(*(longlong *)(param_1 + 8) + 0x208) != 0) {
      plVar24 = (longlong *)0x0;
      local_b40 = plVar27;
      do {
        plVar27 = (longlong *)((longlong)plVar24 * 0x48 + local_a18);
        local_888 = DAT_14c8464f0;
        local_898 = (undefined8 *)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        uStack_890 = (double *)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        dStack_880 = 0.0;
        pdStack_878 = (double *)0x0;
        uStack_870 = 0.0;
        local_868 = 1.0;
        lVar11 = (longlong)plVar24 * 0x10;
        local_b38 = (longlong *)(longlong)*(int *)(local_ab8 + 8 + lVar11);
        if (0 < (longlong)local_b38) {
          fVar32 = 0.0;
          lVar15 = 0;
          plVar25 = (longlong *)0x0;
          do {
            FUN_146bc9878(&local_a00,&local_ae8,*(longlong *)(local_ab8 + lVar11) + lVar15,1);
            local_958 = DAT_14c8464f0;
            local_968 = (undefined8 *)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
            pdStack_960 = (double *)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
            dStack_950 = 0.0;
            pdStack_948 = (double *)0x0;
            uStack_940 = 0;
            uStack_93c = 0;
            local_938 = 0;
            iStack_934 = 0x3ff00000;
            if (lVar15 == 0) {
              puVar22 = (uint *)*plVar27;
              uVar14 = *puVar22;
              uVar12 = puVar22[1];
              lVar26 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
              lVar28 = *(longlong *)(lVar26 + (ulonglong)(uVar12 >> 9) * 8);
              uVar7 = (ulonglong)uVar12 & 0x1ff;
              lVar26 = *(longlong *)(lVar26 + (ulonglong)(uVar14 >> 9) * 8);
              uVar10 = (ulonglong)uVar14 & 0x1ff;
              dVar31 = *(double *)(lVar28 + 0x10 + uVar7 * 0x18) -
                       *(double *)(lVar26 + 0x10 + uVar10 * 0x18);
              local_af8 = *(double *)(lVar28 + 8 + uVar7 * 0x18) -
                          *(double *)(lVar26 + 8 + uVar10 * 0x18);
              local_b00 = *(double *)(lVar28 + uVar7 * 0x18) - *(double *)(lVar26 + uVar10 * 0x18);
              dVar29 = SQRT(dVar31 * dVar31 + local_b00 * local_b00 + local_af8 * local_af8);
              dVar30 = 1.0 / dVar29;
              if (0.0 < dVar29) {
                local_b00 = local_b00 * dVar30;
                local_af8 = local_af8 * dVar30;
              }
              else {
                local_b00 = 0.0;
                local_af8 = 0.0;
              }
              local_af0 = -(ulonglong)(0.0 < dVar29) & (ulonglong)(dVar31 * dVar30);
              local_b08 = (double)local_ae0;
              dStack_b10 = (double)fStack_ae4;
              local_b18 = (double)local_ae8;
              local_9c8 = (undefined8 *)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
              uStack_9c0 = (double *)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
              local_9b8 = (double)DAT_14c8464f0;
              dStack_9b0 = 0.0;
              pdStack_9a8 = (double *)0x0;
              dStack_9a0 = 0.0;
              local_998[0] = 1.0;
              local_9d8 = DAT_14c8463c8;
              local_9e8 = (double)CONCAT44(DAT_14c8463b8._4_4_,(undefined4)DAT_14c8463b8);
              uStack_9e0 = (double)CONCAT44(DAT_14c8463c0._4_4_,(undefined4)DAT_14c8463c0);
              FUN_146bfb7f2(&dStack_9b0,&local_9e8,&local_b18);
              local_898 = local_9c8;
              uStack_890 = uStack_9c0;
              local_888 = local_9b8;
              dStack_880 = dStack_9b0;
              pdStack_878 = pdStack_9a8;
              uStack_870 = dStack_9a0;
              local_9b8 = (double)local_ae0;
              uStack_9c0 = (double *)(double)fStack_ae4;
              local_9c8 = (undefined8 *)(double)local_ae8;
              local_868 = local_998[0];
              FUN_1482ae2be(&local_898,0,&local_b00,&local_9c8);
              dVar31 = uStack_870 + uStack_870;
              local_ad8 = ((double)pdStack_878 + (double)pdStack_878) * dStack_880 -
                          local_868 * dVar31;
              local_ac8 = (double)pdStack_878 * dVar31 + (dStack_880 + dStack_880) * local_868;
              dStack_ad0 = 1.0 - (dVar31 * uStack_870 + dStack_880 * (dStack_880 + dStack_880));
              local_968 = local_898;
              pdStack_960 = uStack_890;
              local_958 = local_888;
              dStack_950 = dStack_880;
              pdStack_948 = pdStack_878;
              uStack_940 = SUB84(uStack_870,0);
              uStack_93c = (undefined4)((ulonglong)uStack_870 >> 0x20);
              local_938 = SUB84(local_868,0);
              iStack_934 = (int)((ulonglong)local_868 >> 0x20);
            }
            else {
              pdStack_948 = pdStack_878;
              uStack_940 = SUB84(uStack_870,0);
              uStack_93c = (undefined4)((ulonglong)uStack_870 >> 0x20);
              local_958 = local_888;
              dStack_950 = dStack_880;
              local_968 = local_898;
              pdStack_960 = uStack_890;
              local_9b8 = (double)local_ae0;
              uStack_9c0 = (double *)(double)fStack_ae4;
              local_9c8 = (undefined8 *)(double)local_ae8;
              local_938 = SUB84(local_868,0);
              iStack_934 = (int)((ulonglong)local_868 >> 0x20);
              FUN_1482ae2be(&local_968,2,&local_9c8,&local_ad8);
              lVar26 = *plVar27;
              uVar14 = *(uint *)(lVar26 + -4 + (longlong)plVar25 * 4);
              uVar12 = *(uint *)(lVar26 + (longlong)plVar25 * 4);
              lVar26 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
              lVar28 = *(longlong *)(lVar26 + (ulonglong)(uVar14 >> 9) * 8);
              lVar26 = *(longlong *)(lVar26 + (ulonglong)(uVar12 >> 9) * 8);
              uVar10 = (ulonglong)uVar14 & 0x1ff;
              uVar7 = (ulonglong)uVar12 & 0x1ff;
              dVar31 = *(double *)(lVar28 + uVar10 * 0x18) - *(double *)(lVar26 + uVar7 * 0x18);
              dVar29 = *(double *)(lVar28 + 8 + uVar10 * 0x18) -
                       *(double *)(lVar26 + 8 + uVar7 * 0x18);
              dVar30 = *(double *)(lVar28 + 0x10 + uVar10 * 0x18) -
                       *(double *)(lVar26 + 0x10 + uVar7 * 0x18);
              fVar32 = fVar32 + (float)SQRT(dVar30 * dVar30 + dVar31 * dVar31 + dVar29 * dVar29);
            }
            local_b58 = &local_9c8;
            local_9c8 = (undefined8 *)(ulonglong)(uint)(fVar32 * *(float *)(param_1 + 0x28));
            local_b50 = 0;
            FUN_146bca8d2(&local_a00,*(longlong *)(local_ab8 + lVar11) + lVar15,&local_968);
            plVar25 = (longlong *)((longlong)plVar25 + 1);
            lVar15 = lVar15 + 8;
          } while (local_b38 != plVar25);
        }
        plVar24 = (longlong *)((longlong)plVar24 + 1);
      } while (plVar24 != local_b40);
      plVar27 = (longlong *)(uStack_ab0 & 0xffffffff);
    }
    FUN_148308bdd(local_ab8,plVar27);
    if (local_ab8 != 0) {
      FUN_1400020a8();
    }
    uVar7 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
  }
  else {
    FUN_146c6a7a4(&local_898,*(undefined8 *)(param_1 + 8),puVar18,0);
    cVar4 = FUN_146c6abd6(&local_898);
    if (cVar4 != '\0') {
      local_b2c = uVar6;
      if ((longlong)(int)local_888 != 0) {
        lVar11 = (longlong)(int)local_888 << 6;
        pdVar8 = uStack_890 + 3;
        do {
          FUN_143aff462(&local_aa8,pdVar8 + -2,pdVar8);
          pdVar8 = pdVar8 + 8;
          lVar11 = lVar11 + -0x40;
        } while (lVar11 != 0);
      }
      FUN_146bc7b3e(&local_898);
LAB_1482e0082:
      puVar18 = local_b48;
      uVar14 = (uint)uStack_a10;
      goto LAB_1482e008e;
    }
    FUN_146bc7b3e(&local_898);
    uVar7 = 0;
  }
  FUN_1482e1868(local_670);
  FUN_146bc8622(&local_a98);
  FUN_1483089f0(local_a28,uStack_a20 & 0xffffffff);
  if (local_a28 != 0) {
    FUN_1400020a8();
  }
LAB_1482dfe98:
  FUN_146bfd107(local_a18,uStack_a10 & 0xffffffff);
  if (local_a18 != 0) {
    FUN_1400020a8();
  }
  if ((local_90 ^ (ulonglong)auStack_b78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 1482e1464 FUN_1482e1464 body=143 status=ok
// SIG undefined FUN_1482e1464(void)

void FUN_1482e1464(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_148308a1c(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(longlong)(param_2 - iVar1) << 4);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_148308aa2(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_148308b02(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1482e14f4 FUN_1482e14f4 body=318 status=ok
// SIG undefined FUN_1482e14f4(void)

undefined8 *
FUN_1482e14f4(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
             undefined1 param_5)

{
  undefined8 unaff_RBX;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = param_2;
  local_48 = 0;
  FUN_1411b354a(param_1 + 1,0,0,0);
  FUN_146bfde60(param_1 + 0x45);
  param_1[0xa1] = 0;
  *(undefined4 *)(param_1 + 0xa2) = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x514) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x51c) = 0;
  param_1[0xa5] = 0;
  *(undefined4 *)(param_1 + 0xa6) = 0;
  param_1[0xab] = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  *(undefined8 *)((longlong)param_1 + 0x564) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x56c) = 0;
  param_1[0xaf] = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  param_1[0xb5] = 0;
  *(undefined4 *)(param_1 + 0xb6) = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5b4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5bc) = 0;
  param_1[0xb9] = 0;
  *(undefined4 *)(param_1 + 0xba) = 0;
  *(undefined1 *)(param_1 + 0xbb) = 1;
  local_40 = *param_3;
  local_38 = *(undefined4 *)(param_3 + 1);
  FUN_1482fe1c4(param_1,&local_40,param_4,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_5) & 0xffffffff);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482e1634 FUN_1482e1634 body=61 status=ok
// SIG undefined FUN_1482e1634(void)

void FUN_1482e1634(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (*(int *)((longlong)param_1 + 0xc) < param_2) {
    FUN_148308ba4(param_1);
    return;
  }
  FUN_146be9485(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 1482e1672 FUN_1482e1672 body=501 status=ok
// SIG undefined FUN_1482e1672(void)

void FUN_1482e1672(double *param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  
  uVar15 = *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144);
  if ((int)uVar15 < 1) {
    dVar20 = 0.0;
    dVar19 = 0.0;
  }
  else {
    lVar7 = *(longlong *)(param_2 + 0x10);
    uVar18 = 0;
    dVar19 = 0.0;
    dVar20 = 0.0;
    do {
      uVar17 = (ulonglong)(uVar18 & 0x1ff);
      if ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)(param_2 + 0x148) + (ulonglong)(uVar18 >> 9) * 8) +
                             uVar17 * 2) - 1U) < 0xfffe) {
        lVar8 = *(longlong *)(*(longlong *)(param_2 + 0x130) + (ulonglong)(uVar18 >> 9) * 8);
        uVar5 = *(uint *)(lVar8 + uVar17 * 0xc);
        uVar6 = *(uint *)(lVar8 + 4 + uVar17 * 0xc);
        lVar9 = *(longlong *)(lVar7 + (ulonglong)(uVar5 >> 9) * 8);
        uVar16 = (ulonglong)uVar5 & 0x1ff;
        dVar1 = *(double *)(lVar9 + uVar16 * 0x18);
        dVar21 = *(double *)(lVar9 + 8 + uVar16 * 0x18);
        dVar2 = *(double *)(lVar9 + 0x10 + uVar16 * 0x18);
        lVar9 = *(longlong *)(lVar7 + (ulonglong)(uVar6 >> 9) * 8);
        uVar16 = (ulonglong)uVar6 & 0x1ff;
        dVar3 = *(double *)(lVar9 + uVar16 * 0x18);
        uVar5 = *(uint *)(lVar8 + 8 + uVar17 * 0xc);
        lVar8 = *(longlong *)(lVar7 + (ulonglong)(uVar5 >> 9) * 8);
        uVar17 = (ulonglong)uVar5 & 0x1ff;
        dVar4 = *(double *)(lVar8 + uVar17 * 0x18);
        dVar13 = *(double *)(lVar9 + 0x10 + uVar16 * 0x18) - dVar2;
        dVar12 = *(double *)(lVar9 + 8 + uVar16 * 0x18) - dVar21;
        dVar14 = dVar3 - dVar1;
        dVar2 = *(double *)(lVar8 + 0x10 + uVar17 * 0x18) - dVar2;
        dVar21 = *(double *)(lVar8 + 8 + uVar17 * 0x18) - dVar21;
        dVar10 = dVar4 - dVar1;
        dVar11 = dVar10 * dVar12 - dVar14 * dVar21;
        dVar10 = dVar2 * dVar14 - dVar13 * dVar10;
        dVar21 = dVar21 * dVar13 - dVar2 * dVar12;
        dVar20 = dVar20 + SQRT(dVar11 * dVar11 + dVar21 * dVar21 + dVar10 * dVar10);
        dVar19 = dVar19 + (dVar1 + dVar3 + dVar4) * dVar21;
      }
      uVar18 = uVar18 + 1;
    } while (uVar15 != uVar18);
    dVar20 = dVar20 * 0.5;
    dVar19 = dVar19 * 0.16666666666666666;
  }
  *param_1 = dVar19;
  param_1[1] = dVar20;
  return;
}



// FUNCTION 1482e1868 FUN_1482e1868 body=162 status=ok
// SIG undefined FUN_1482e1868(void)

void FUN_1482e1868(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x5d0) = 0;
  if (*(longlong *)(param_1 + 0x5c8) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x588);
  *(undefined4 *)(param_1 + 0x580) = 0;
  if (*(longlong *)(param_1 + 0x578) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x538);
  *(undefined4 *)(param_1 + 0x530) = 0;
  if (*(longlong *)(param_1 + 0x528) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x4e8);
  FUN_146bfdcfe(param_1 + 0x228);
  FUN_141082778(param_1 + 8);
  return;
}



// FUNCTION 1482e190a FUN_1482e190a body=519 status=ok
// SIG undefined FUN_1482e190a(void)

double * FUN_1482e190a(double *param_1,int *param_2,longlong param_3,undefined1 *param_4)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  bool bVar13;
  double dVar14;
  
  *param_1 = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  iVar7 = *param_2;
  if (iVar7 == 2) {
    uVar8 = param_2[2];
    if ((-1 < (int)uVar8) &&
       ((int)uVar8 < *(int *)(param_3 + 0x140) * 0x200 + *(int *)(param_3 + 0x144))) {
      bVar13 = (ushort)(*(short *)(*(longlong *)
                                    (*(longlong *)(param_3 + 0x148) + (ulonglong)(uVar8 >> 9) * 8) +
                                  (ulonglong)(uVar8 & 0x1ff) * 2) - 1U) < 0xfffe;
      *param_4 = bVar13;
      if (!bVar13) {
        return param_1;
      }
      FUN_146c148ec(param_3,param_1,uVar8,*(undefined8 *)(param_2 + 4),*(undefined8 *)(param_2 + 6),
                    *(undefined8 *)(param_2 + 8));
      return param_1;
    }
  }
  else if (iVar7 == 1) {
    uVar8 = param_2[2];
    if ((-1 < (int)uVar8) &&
       ((int)uVar8 < *(int *)(param_3 + 0x1d0) * 0x200 + *(int *)(param_3 + 0x1d4))) {
      dVar2 = *(double *)(param_2 + 4);
      bVar13 = (ushort)(*(short *)(*(longlong *)
                                    (*(longlong *)(param_3 + 0x1d8) + (ulonglong)(uVar8 >> 9) * 8) +
                                  (ulonglong)(uVar8 & 0x1ff) * 2) - 1U) < 0xfffe;
      *param_4 = bVar13;
      if (!bVar13) {
        return param_1;
      }
      uVar11 = *(ulonglong *)
                (*(longlong *)(*(longlong *)(param_3 + 0x1c0) + (ulonglong)(uVar8 >> 9) * 8) +
                (ulonglong)((uVar8 & 0x1ff) << 4));
      lVar9 = *(longlong *)(*(longlong *)(param_3 + 0x10) + (uVar11 >> 9 & 0x7fffff) * 8);
      uVar12 = uVar11 & 0x1ff;
      dVar3 = *(double *)(lVar9 + 0x10 + uVar12 * 0x18);
      dVar4 = *(double *)(lVar9 + 8 + uVar12 * 0x18);
      lVar10 = *(longlong *)(*(longlong *)(param_3 + 0x10) + (uVar11 >> 0x29) * 8);
      uVar11 = uVar11 >> 0x20 & 0x1ff;
      dVar14 = 1.0 - dVar2;
      dVar5 = *(double *)(lVar10 + 0x10 + uVar11 * 0x18);
      dVar6 = *(double *)(lVar10 + 8 + uVar11 * 0x18);
      *param_1 = dVar14 * *(double *)(lVar10 + uVar11 * 0x18) +
                 *(double *)(lVar9 + uVar12 * 0x18) * dVar2;
      param_1[1] = dVar6 * dVar14 + dVar4 * dVar2;
      param_1[2] = dVar5 * dVar14 + dVar3 * dVar2;
      return param_1;
    }
  }
  else if (((iVar7 == 0) && (uVar8 = param_2[2], -1 < (int)uVar8)) &&
          ((int)uVar8 < *(int *)(param_3 + 0x20) * 0x200 + *(int *)(param_3 + 0x24))) {
    uVar11 = (ulonglong)(uVar8 & 0x1ff);
    bVar13 = (ushort)(*(short *)(*(longlong *)
                                  (*(longlong *)(param_3 + 0x28) + (ulonglong)(uVar8 >> 9) * 8) +
                                uVar11 * 2) - 1U) < 0xfffe;
    *param_4 = bVar13;
    if (!bVar13) {
      return param_1;
    }
    lVar9 = *(longlong *)(*(longlong *)(param_3 + 0x10) + (ulonglong)(uVar8 >> 9) * 8);
    param_1[2] = *(double *)(lVar9 + 0x10 + uVar11 * 0x18);
    pdVar1 = (double *)(lVar9 + uVar11 * 0x18);
    dVar2 = pdVar1[1];
    *param_1 = *pdVar1;
    param_1[1] = dVar2;
    return param_1;
  }
  *param_4 = 0;
  return param_1;
}



// FUNCTION 1482e1b12 FUN_1482e1b12 body=960 status=ok
// SIG undefined FUN_1482e1b12(void)

void FUN_1482e1b12(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  longlong local_70;
  uint local_68;
  undefined4 local_64;
  int local_60;
  undefined8 local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 != (undefined8 *)0x0) {
    param_1[1] = 0;
    (**(code **)*puVar2)(puVar2,1);
  }
  *param_1 = param_2;
  plVar1 = param_1 + 2;
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) < 0) {
    FUN_14481578e(plVar1,0);
  }
  plVar11 = param_1 + 4;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) < 0) {
    FUN_14481578e(plVar11,0);
  }
  uVar17 = *(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24);
  uVar16 = *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144);
  lVar5 = param_1[3];
  *(uint *)(param_1 + 3) = (int)lVar5 + uVar17;
  if ((uint)(*(int *)((longlong)param_1 + 0x1c) - (int)lVar5) < uVar17) {
    FUN_1446f48e2(plVar1);
  }
  lVar5 = param_1[5];
  *(uint *)(param_1 + 5) = (int)lVar5 + uVar16;
  if ((uint)(*(int *)((longlong)param_1 + 0x2c) - (int)lVar5) < uVar16) {
    FUN_1446f48e2();
  }
  if (0 < (int)uVar17) {
    lVar5 = param_2 + 0xb8;
    uVar15 = 0;
    do {
      if (((longlong)uVar15 <
           (longlong)(*(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24))) &&
         ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)(param_2 + 0x28) + (uVar15 >> 9 & 0x7fffff) * 8) +
                             (ulonglong)((uint)uVar15 & 0x1ff) * 2) - 1U) < 0xfffe)) {
        cVar7 = FUN_146c0b51e(param_2,uVar15 & 0xffffffff);
        if ((cVar7 == '\0') || (cVar7 = FUN_146c13902(param_2,uVar15 & 0xffffffff), cVar7 != '\0'))
        {
          FUN_146be983e(&local_70,lVar5,uVar15 & 0xffffffff,0);
          uVar10 = local_58._4_4_ & (uint)local_58;
          if ((local_58._4_4_ & (uint)local_58) != 0xffffffff) {
            uVar10 = local_50;
          }
          if (local_68 != uVar15 || local_70 != lVar5) {
            uVar10 = local_50;
          }
        }
        else {
          FUN_146be983e(&local_70,lVar5,uVar15 & 0xffffffff,0);
          uVar9 = (ulonglong)local_68;
          lVar8 = local_70;
          plVar6 = plVar11;
          if (local_70 != lVar5) goto LAB_1482e1c4a;
          if (uVar15 != uVar9) goto LAB_1482e1c4a;
          if ((uint)local_58 != -1) goto LAB_1482e1c4a;
          iVar4 = local_58._4_4_;
          while (iVar4 != -1) {
LAB_1482e1c4a:
            do {
              local_88 = plVar6;
              lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x1c0) + (ulonglong)(local_50 >> 9) * 8)
              ;
              if (*(int *)(lVar3 + 0xc + (ulonglong)((local_50 & 0x1ff) << 4)) == -1) {
                uVar13 = *(ulonglong *)(lVar3 + 8 + (ulonglong)((local_50 & 0x1ff) << 4));
                uVar12 = uVar13 >> 9 & 0x7fffff;
                lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x180) + uVar12 * 8);
                uVar13 = (ulonglong)((uint)uVar13 & 0x1ff);
                if (*(uint *)(lVar3 + uVar13 * 0xc) == local_50) {
                  lVar14 = 0;
                }
                else {
                  lVar14 = 1;
                  plVar11 = local_88;
                  if (*(uint *)(lVar3 + uVar13 * 0xc + 4) != local_50) {
                    lVar14 = (ulonglong)(*(uint *)(lVar3 + 8 + uVar13 * 0xc) == local_50) * 3 + -1;
                  }
                }
                lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x130) + uVar12 * 8);
                local_78 = *(undefined4 *)(lVar3 + 8 + uVar13 * 0xc);
                local_80 = *(undefined8 *)(lVar3 + uVar13 * 0xc);
                uVar10 = local_50;
                if (uVar15 == *(uint *)((longlong)&local_80 + lVar14 * 4)) goto LAB_1482e1ddd;
              }
              if (local_60 == 0) {
                local_64 = 0xffffffff;
                local_58 = 0xffffffffffffffff;
                local_58._4_4_ = -1;
                local_58._0_4_ = -1;
              }
              else {
                FUN_146be9922(&local_70);
                uVar9 = (ulonglong)local_68;
                lVar8 = local_70;
              }
              plVar6 = local_88;
            } while (((lVar8 != lVar5) || (uVar15 != uVar9)) ||
                    (iVar4 = local_58._4_4_, (uint)local_58 != -1));
          }
          uVar10 = 0xffffffff;
        }
LAB_1482e1ddd:
        *(uint *)(*plVar1 + uVar15 * 4) = uVar10;
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar17);
  }
  if (0 < (int)uVar16) {
    uVar15 = 0;
    do {
      if ((longlong)uVar15 <
          (longlong)(*(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144))) {
        uVar9 = uVar15 >> 9 & 0x7fffff;
        uVar17 = (uint)uVar15 & 0x1ff;
        if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(param_2 + 0x148) + uVar9 * 8) +
                               (ulonglong)uVar17 * 2) - 1U) < 0xfffe) {
          *(undefined4 *)(*plVar11 + uVar15 * 4) =
               *(undefined4 *)
                (*(longlong *)(*(longlong *)(param_2 + 0x180) + uVar9 * 8) + (ulonglong)uVar17 * 0xc
                );
        }
      }
      uVar15 = uVar15 + 1;
    } while (uVar16 != uVar15);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1482e1ed4 FUN_1482e1ed4 body=1855 status=ok
// SIG undefined FUN_1482e1ed4(void)

void FUN_1482e1ed4(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  bool bVar20;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  longlong local_90;
  undefined8 local_88;
  undefined8 local_80;
  uint local_78 [2];
  undefined8 local_70;
  uint local_68;
  undefined4 local_64;
  int local_60;
  undefined8 local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1411b3fe4(param_1 + 0x30);
  local_90 = param_1 + 0x48;
  FUN_14582f522();
  local_98 = (longlong *)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(int *)(param_1 + 0x6c) < 0) {
    FUN_14481578e(local_98,0);
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(int *)(param_1 + 0x7c) < 0) {
    FUN_146be7820(param_1 + 0x70,0);
  }
  uVar17 = *(int *)(param_2 + 0x1d0) * 0x200 + *(int *)(param_2 + 0x1d4);
  iVar10 = *(int *)(param_2 + 0x20);
  iVar7 = *(int *)(param_2 + 0x24);
  uVar14 = *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144);
  iVar1 = *(int *)(param_1 + 0x30);
  iVar2 = *(int *)(param_1 + 0x34);
  local_88 = param_1 + 0x70;
  FUN_1411b328a(param_1 + 0x30,uVar17);
  for (uVar19 = iVar1 * 0x200 + iVar2; uVar19 < uVar17; uVar19 = uVar19 + 1) {
    *(undefined4 *)
     (*(longlong *)(*(longlong *)(param_1 + 0x38) + (ulonglong)(uVar19 >> 9) * 8) +
     (ulonglong)(uVar19 & 0x1ff) * 4) = 0xffffffff;
  }
  FUN_144a8c360(local_98,iVar10 * 0x200 + iVar7,1);
  uVar19 = *(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24);
  uVar17 = 0;
  if ((uVar19 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x28) - 1U))) {
    uVar18 = 1;
    uVar8 = 1;
    if (1 < (int)uVar19) {
      uVar18 = uVar19;
    }
    do {
      uVar17 = uVar18;
      if (uVar18 == uVar8) break;
      uVar11 = uVar8 >> 9;
      uVar15 = uVar8 & 0x1ff;
      uVar17 = uVar8;
      uVar8 = uVar8 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x28))[uVar11] +
                                         (ulonglong)uVar15 * 2) - 1U));
  }
  if (uVar17 != uVar19) {
    plVar13 = (longlong *)(param_2 + 0xb8);
    do {
      iVar10 = 0;
      FUN_146be983e(&local_70,plVar13,uVar17,0);
      if ((((local_70 != plVar13) || (local_68 != uVar17)) || ((int)local_58 != -1)) ||
         (local_58._4_4_ != -1)) {
        iVar10 = 0;
        plVar6 = local_70;
        uVar18 = local_68;
        do {
          if (local_60 == 0) {
            local_64 = 0xffffffff;
            local_58 = 0xffffffffffffffff;
            local_58._4_4_ = -1;
            iVar7 = -1;
          }
          else {
            FUN_146be9922(&local_70);
            iVar7 = (int)local_58;
            plVar6 = local_70;
            uVar18 = local_68;
          }
          iVar10 = iVar10 + 1;
        } while (((plVar6 != plVar13) || (uVar18 != uVar17)) ||
                ((iVar7 != -1 || (local_58._4_4_ != -1))));
      }
      *(int *)(*local_98 + (longlong)(int)uVar17 * 4) = iVar10;
      uVar18 = uVar17 + 1;
      if ((int)(uVar17 + 1) < (int)uVar19) {
        uVar18 = uVar19;
      }
      do {
        uVar8 = uVar18;
        if (uVar18 - 1 == uVar17) break;
        uVar17 = uVar17 + 1;
        uVar8 = uVar17;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(param_2 + 0x28) +
                                             (ulonglong)(uVar17 >> 9) * 8) +
                                           (ulonglong)(uVar17 & 0x1ff) * 2) - 1U));
      uVar17 = uVar8;
    } while (uVar17 != uVar19);
  }
  iVar10 = *(int *)(param_1 + 0x48);
  iVar7 = *(int *)(param_1 + 0x4c);
  FUN_146c0a96a(local_90,uVar14);
  for (uVar17 = iVar10 * 0x200 + iVar7; uVar17 < uVar14; uVar17 = uVar17 + 1) {
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x50) + (ulonglong)(uVar17 >> 9) * 8);
    *(undefined8 *)(lVar9 + (ulonglong)(uVar17 & 0x1ff) * 0xc) = 0xffffffffffffffff;
    *(undefined4 *)(lVar9 + 8 + (ulonglong)(uVar17 & 0x1ff) * 0xc) = 0xffffffff;
  }
  uVar19 = *(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24);
  uVar17 = 0;
  if ((uVar19 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x28) - 1U))) {
    uVar18 = 1;
    uVar8 = 1;
    if (1 < (int)uVar19) {
      uVar18 = uVar19;
    }
    do {
      uVar17 = uVar18;
      if (uVar18 == uVar8) break;
      uVar11 = uVar8 >> 9;
      uVar15 = uVar8 & 0x1ff;
      uVar17 = uVar8;
      uVar8 = uVar8 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x28))[uVar11] +
                                         (ulonglong)uVar15 * 2) - 1U));
  }
  if (uVar17 != uVar19) {
    plVar13 = (longlong *)(param_2 + 0xb8);
    local_98 = plVar13;
    do {
      uVar18 = *(uint *)(*(longlong *)(param_1 + 0x10) + (longlong)(int)uVar17 * 4);
      if (((-1 < (int)uVar18) &&
          ((int)uVar18 < *(int *)(param_2 + 0x1d0) * 0x200 + *(int *)(param_2 + 0x1d4))) &&
         (-1 < (int)uVar17)) {
        if ((((ushort)(*(short *)(*(longlong *)
                                   (*(longlong *)(param_2 + 0x1d8) + (ulonglong)(uVar18 >> 9) * 8) +
                                 (ulonglong)(uVar18 & 0x1ff) * 2) - 1U) < 0xfffe) &&
            ((int)uVar17 < *(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24))) &&
           ((ushort)(*(short *)(*(longlong *)
                                 (*(longlong *)(param_2 + 0x28) + (ulonglong)(uVar17 >> 9) * 8) +
                               (ulonglong)(uVar17 & 0x1ff) * 2) - 1U) < 0xfffe)) {
          FUN_146be983e(&local_70,plVar13,uVar17,0);
          plVar6 = local_70;
          plVar13 = local_98;
          uVar8 = local_68;
          if (local_70 != local_98) goto LAB_1482e24b8;
          if (local_68 != uVar17) goto LAB_1482e24b8;
          if ((int)local_58 != -1) goto LAB_1482e24b8;
          iVar10 = local_58._4_4_;
          while (iVar10 != -1) {
LAB_1482e24b8:
            do {
              if ((local_50 != uVar18) &&
                 (*(int *)(*(longlong *)
                            (*(longlong *)(param_2 + 0x1c0) + (ulonglong)(local_50 >> 9) * 8) + 0xc
                          + (ulonglong)((local_50 & 0x1ff) << 4)) == -1)) goto LAB_1482e231a;
              if (local_60 == 0) {
                local_64 = 0xffffffff;
                local_58 = 0xffffffffffffffff;
                local_58._4_4_ = -1;
                local_58._0_4_ = -1;
              }
              else {
                FUN_146be9922(&local_70);
                plVar6 = local_70;
                plVar13 = local_98;
                uVar8 = local_68;
              }
            } while (((plVar6 != plVar13) || (uVar8 != uVar17)) ||
                    (iVar10 = local_58._4_4_, (int)local_58 != -1));
          }
LAB_1482e231a:
          lVar9 = *(longlong *)(*(longlong *)(param_2 + 0x1c0) + (ulonglong)(uVar18 >> 9) * 8);
          uVar12 = (ulonglong)((uVar18 & 0x1ff) << 4);
          uVar8 = *(uint *)(lVar9 + 8 + uVar12);
          uVar11 = *(uint *)(lVar9 + 0xc + uVar12);
          lVar9 = *(longlong *)(*(longlong *)(param_2 + 0x180) + (ulonglong)(uVar8 >> 9) * 8);
          uVar12 = (ulonglong)(uVar8 & 0x1ff);
          local_68 = *(uint *)(lVar9 + 8 + uVar12 * 0xc);
          local_70 = *(longlong **)(lVar9 + uVar12 * 0xc);
          plVar13 = local_70;
          iVar10 = 0;
          if ((uint)local_70 != uVar18) {
            iVar10 = 1;
            local_70._4_4_ = (uint)((ulonglong)local_70 >> 0x20);
            if (local_70._4_4_ != uVar18) {
              iVar10 = (uint)(local_68 == uVar18) * 3 + -1;
            }
          }
          lVar9 = *(longlong *)(*(longlong *)(param_2 + 0x130) + (ulonglong)(uVar8 >> 9) * 8);
          local_78[0] = *(uint *)(lVar9 + 8 + uVar12 * 0xc);
          local_80 = *(undefined8 *)(lVar9 + uVar12 * 0xc);
          local_70 = plVar13;
          plVar13 = local_98;
          if (local_78[(longlong)iVar10 + -2] != uVar17) {
            if (uVar11 == 0xffffffff) goto LAB_1482e2284;
            lVar9 = *(longlong *)(*(longlong *)(param_2 + 0x180) + (ulonglong)(uVar11 >> 9) * 8);
            local_68 = *(uint *)(lVar9 + 8 + (ulonglong)(uVar11 & 0x1ff) * 0xc);
            local_70 = *(longlong **)(lVar9 + (ulonglong)(uVar11 & 0x1ff) * 0xc);
            plVar6 = local_70;
            iVar10 = 0;
            uVar8 = uVar11;
            local_70 = plVar6;
            if ((uint)local_70 != uVar18) {
              iVar10 = 1;
              local_70._4_4_ = (uint)((ulonglong)local_70 >> 0x20);
              bVar20 = local_70._4_4_ != uVar18;
              if (bVar20) {
                iVar10 = (uint)(local_68 == uVar18) * 3 + -1;
              }
            }
          }
          iVar7 = 0;
          do {
            *(int *)((ulonglong)(uVar8 & 0x1ff) * 0xc +
                     *(longlong *)(*(longlong *)(param_1 + 0x50) + (ulonglong)(uVar8 >> 9) * 8) +
                    (longlong)iVar10 * 4) = iVar7;
            uVar11 = iVar10 - 1;
            if (iVar10 + 2U < 3) {
              uVar11 = iVar10 + 2U;
            }
            uVar11 = *(uint *)((longlong)&local_70 + (longlong)(int)uVar11 * 4);
            uVar5 = *(undefined8 *)
                     (*(longlong *)(*(longlong *)(param_2 + 0x1c0) + (ulonglong)(uVar11 >> 9) * 8) +
                      8 + (ulonglong)((uVar11 & 0x1ff) << 4));
            uVar15 = (uint)uVar5;
            bVar20 = uVar8 != uVar15;
            uVar8 = (uint)((ulonglong)uVar5 >> 0x20);
            if (bVar20) {
              uVar8 = uVar15;
            }
            if (uVar8 == 0xffffffff) break;
            lVar9 = *(longlong *)(*(longlong *)(param_2 + 0x180) + (ulonglong)(uVar8 >> 9) * 8);
            local_68 = *(uint *)(lVar9 + 8 + (ulonglong)(uVar8 & 0x1ff) * 0xc);
            local_70 = *(longlong **)(lVar9 + (ulonglong)(uVar8 & 0x1ff) * 0xc);
            plVar6 = local_70;
            iVar10 = 0;
            if ((uint)local_70 != uVar11) {
              iVar10 = 1;
              local_70._4_4_ = (uint)((ulonglong)local_70 >> 0x20);
              if (local_70._4_4_ != uVar11) {
                iVar10 = (uint)(local_68 == uVar11) * 3 + -1;
              }
            }
            iVar7 = iVar7 + 1;
            local_70 = plVar6;
          } while (uVar11 != uVar18);
        }
      }
LAB_1482e2284:
      uVar18 = uVar17 + 1;
      if ((int)(uVar17 + 1) < (int)uVar19) {
        uVar18 = uVar19;
      }
      do {
        uVar8 = uVar18;
        if (uVar18 - 1 == uVar17) break;
        uVar17 = uVar17 + 1;
        uVar8 = uVar17;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(param_2 + 0x28) +
                                             (ulonglong)(uVar17 >> 9) * 8) +
                                           (ulonglong)(uVar17 & 0x1ff) * 2) - 1U));
      uVar17 = uVar8;
    } while (uVar17 != uVar19);
  }
  FUN_146c51516(local_88,uVar14,1);
  if (0 < (int)uVar14) {
    lVar9 = 0;
    uVar12 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + 0x70);
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x50) + (uVar12 >> 9 & 0x7fffff) * 8);
      uVar16 = (ulonglong)((uint)uVar12 & 0x1ff);
      *(undefined4 *)(lVar3 + 8 + lVar9) = *(undefined4 *)(lVar4 + 8 + uVar16 * 0xc);
      *(undefined8 *)(lVar3 + lVar9) = *(undefined8 *)(lVar4 + uVar16 * 0xc);
      uVar12 = uVar12 + 1;
      lVar9 = lVar9 + 0xc;
    } while (uVar14 != uVar12);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1482e2614 FUN_1482e2614 body=2031 status=ok
// SIG undefined FUN_1482e2614(void)

void FUN_1482e2614(longlong *param_1,ulonglong param_2,uint *param_3,uint param_4,uint param_5,
                  uint *param_6,uint param_7,uint param_8)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  bool bVar23;
  undefined1 auStack_f8 [40];
  int local_d0;
  uint local_cc;
  longlong *local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  longlong local_a0;
  ulonglong local_98;
  ulonglong local_90;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  ulonglong local_70;
  undefined8 local_68;
  int local_60 [2];
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar13 = 0;
  uVar14 = 0;
  if ((*param_3 != param_8) && (uVar14 = 1, param_3[1] != param_8)) {
    uVar14 = (uint)(param_3[2] == param_8) * 3 - 1;
  }
  if ((*param_6 != param_8) && (uVar13 = 1, param_6[1] != param_8)) {
    uVar13 = (ulonglong)((uint)(param_6[2] == param_8) * 3 - 1);
  }
  if ((uVar14 != 0xffffffff) && (uVar16 = (uint)uVar13, uVar16 != 0xffffffff)) {
    uVar19 = (uint)(uVar14 < 2) * 3;
    local_b8 = (ulonglong)uVar19;
    local_a0 = CONCAT44(local_a0._4_4_,uVar19 + uVar14);
    uVar17 = uVar14 - 1;
    if (uVar14 == 0) {
      uVar17 = 2;
    }
    local_b0 = (ulonglong)uVar17;
    local_d0 = uVar19 + uVar14 + -2;
    uVar19 = (uint)(uVar16 < 2) * 3;
    local_a8 = (ulonglong)uVar19;
    local_c8 = (longlong *)CONCAT44(local_c8._4_4_,uVar19 + uVar16);
    iVar22 = uVar16 + uVar19 + -2;
    local_c0 = (ulonglong)(uVar16 - 1);
    if (uVar16 == 0) {
      local_c0 = 2;
    }
    local_cc = param_4;
    local_88 = iVar22;
    local_70 = param_2;
    uVar5 = FUN_1482e2e04(param_1,param_6);
    local_90 = CONCAT44(local_90._4_4_,uVar5);
    uVar5 = FUN_1482e2e04(param_1,param_3,uVar17);
    local_98 = CONCAT44(local_98._4_4_,uVar5);
    local_74 = FUN_1482e2e04(param_1,param_6,uVar13);
    local_78 = FUN_1482e2e04(param_1,param_3,local_d0);
    local_7c = FUN_1482e2e04(param_1,param_6,iVar22);
    iVar22 = FUN_1482e2e04(param_1,param_3,uVar14);
    uVar17 = (uint)local_c0;
    uVar19 = uVar17 - 1;
    if (uVar17 == 0) {
      uVar19 = 2;
    }
    lVar2 = param_1[7];
    local_80 = *(int *)(*(longlong *)
                         (lVar2 + (ulonglong)(param_6[((uint)(uVar17 < 2) * 3 + uVar17) - 2] >> 9) *
                                  8) +
                       (ulonglong)(param_6[((uint)(uVar17 < 2) * 3 + uVar17) - 2] & 0x1ff) * 4);
    if (local_80 < 1) {
      local_80 = 0;
    }
    iVar18 = *(int *)(*(longlong *)(lVar2 + (ulonglong)(param_6[uVar19] >> 9) * 8) +
                     (ulonglong)(param_6[uVar19] & 0x1ff) * 4);
    if (iVar18 < 1) {
      iVar18 = 0;
    }
    local_84 = *(int *)(*(longlong *)(lVar2 + (ulonglong)(param_6[local_c0] >> 9) * 8) +
                       (ulonglong)(param_6[local_c0] & 0x1ff) * 4);
    if (local_84 < 1) {
      local_84 = 0;
    }
    local_80 = local_80 - (iVar18 + local_84);
    if (local_80 < 1) {
      local_80 = 0;
    }
    uVar17 = (uint)local_b0;
    uVar19 = uVar17 - 1;
    if (uVar17 == 0) {
      uVar19 = 2;
    }
    iVar18 = *(int *)(*(longlong *)
                       (lVar2 + (ulonglong)
                                (param_3[(int)((uVar17 - 2) + (uint)(uVar17 < 2) * 3)] >> 9) * 8) +
                     (ulonglong)(param_3[(int)((uVar17 - 2) + (uint)(uVar17 < 2) * 3)] & 0x1ff) * 4)
    ;
    if (iVar18 < 1) {
      iVar18 = 0;
    }
    iVar8 = *(int *)(*(longlong *)(lVar2 + (ulonglong)(param_3[uVar19] >> 9) * 8) +
                    (ulonglong)(param_3[uVar19] & 0x1ff) * 4);
    if (iVar8 < 1) {
      iVar8 = 0;
    }
    iVar21 = *(int *)(*(longlong *)(lVar2 + (ulonglong)(param_3[local_b0] >> 9) * 8) +
                     (ulonglong)(param_3[local_b0] & 0x1ff) * 4);
    if (iVar21 < 1) {
      iVar21 = 0;
    }
    iVar18 = iVar18 - (iVar8 + iVar21);
    if (iVar18 < 1) {
      iVar18 = 0;
    }
    cVar7 = (char)local_88 + '\x01';
    uVar19 = cVar7 * 0x56;
    uVar16 = (uVar16 + (int)local_a8) - 3;
    if ((uint)local_c8 < 3) {
      uVar16 = (uint)local_c8;
    }
    iVar8 = *(int *)(*(longlong *)
                      (lVar2 + (ulonglong)
                               (param_6[(char)(cVar7 + ((char)((uVar19 & 0xffff) >> 0xf) +
                                                       (char)(uVar19 >> 8)) * -3)] >> 9) * 8) +
                    (ulonglong)
                    (param_6[(char)(cVar7 + ((char)((uVar19 & 0xffff) >> 0xf) + (char)(uVar19 >> 8))
                                            * -3)] & 0x1ff) * 4);
    if (iVar8 < 1) {
      iVar8 = 0;
    }
    iVar15 = *(int *)(*(longlong *)(lVar2 + (ulonglong)(param_6[(int)uVar16] >> 9) * 8) +
                     (ulonglong)(param_6[(int)uVar16] & 0x1ff) * 4);
    local_a8 = (ulonglong)(int)(uint)local_c8;
    if (iVar15 < 1) {
      iVar15 = 0;
    }
    iVar20 = *(int *)(*(longlong *)(lVar2 + (ulonglong)(param_6[local_a8 + -2] >> 9) * 8) +
                     (ulonglong)(param_6[local_a8 + -2] & 0x1ff) * 4);
    if (iVar20 < 1) {
      iVar20 = 0;
    }
    iVar8 = iVar8 - (iVar15 + iVar20);
    if (iVar8 < 1) {
      iVar8 = 0;
    }
    lVar9 = (longlong)(int)(uint)local_a0;
    iVar15 = *(int *)(*(longlong *)(lVar2 + (ulonglong)(param_3[lVar9 + -2] >> 9) * 8) +
                     (ulonglong)(param_3[lVar9 + -2] & 0x1ff) * 4);
    if (iVar15 < 1) {
      iVar15 = 0;
    }
    iVar12 = *(int *)(*(longlong *)(lVar2 + (ulonglong)(param_3[uVar14] >> 9) * 8) +
                     (ulonglong)(param_3[uVar14] & 0x1ff) * 4);
    if (iVar12 < 1) {
      iVar12 = 0;
    }
    iVar21 = iVar15 - (iVar12 + iVar21);
    if (iVar21 < 1) {
      iVar21 = 0;
    }
    iVar12 = *(int *)(*(longlong *)(lVar2 + (ulonglong)(param_6[uVar13] >> 9) * 8) +
                     (ulonglong)(param_6[uVar13] & 0x1ff) * 4);
    if (iVar12 < 1) {
      iVar12 = 0;
    }
    iVar20 = iVar20 - (iVar12 + local_84);
    if (iVar20 < 1) {
      iVar20 = 0;
    }
    cVar7 = (char)local_d0 + '\x01';
    uVar16 = cVar7 * 0x56;
    uVar14 = ((int)local_b8 + uVar14) - 3;
    if ((uint)local_a0 < 3) {
      uVar14 = (uint)local_a0;
    }
    iVar12 = *(int *)(*(longlong *)
                       (lVar2 + (ulonglong)
                                (param_3[(char)(cVar7 + ((char)((uVar16 & 0xffff) >> 0xf) +
                                                        (char)(uVar16 >> 8)) * -3)] >> 9) * 8) +
                     (ulonglong)
                     (param_3[(char)(cVar7 + ((char)((uVar16 & 0xffff) >> 0xf) + (char)(uVar16 >> 8)
                                             ) * -3)] & 0x1ff) * 4);
    if (iVar12 < 1) {
      iVar12 = 0;
    }
    iVar6 = *(int *)(*(longlong *)(lVar2 + (ulonglong)(param_3[(int)uVar14] >> 9) * 8) +
                    (ulonglong)(param_3[(int)uVar14] & 0x1ff) * 4);
    if (iVar6 < 1) {
      iVar6 = 0;
    }
    iVar12 = iVar12 - (iVar6 + iVar15);
    if (iVar12 < 1) {
      iVar12 = 0;
    }
    local_b8 = (ulonglong)(param_8 >> 9);
    lVar2 = *(longlong *)(lVar2 + local_b8 * 8);
    uVar13 = (ulonglong)(param_8 & 0x1ff);
    iVar15 = -(local_74 - local_78);
    if (iVar15 < 0) {
      iVar15 = local_74 - local_78;
    }
    iVar6 = -(local_7c - iVar22);
    if (iVar6 < 0) {
      iVar6 = local_7c - iVar22;
    }
    *(uint *)(lVar2 + uVar13 * 4) =
         (uint)(*(int *)(lVar2 + uVar13 * 4) == -1) + iVar12 +
         ((iVar6 + iVar15) - (iVar18 + local_80)) / 2 + (int)local_98 + (int)local_90 + iVar21 +
         iVar20 + iVar8;
    uVar14 = param_6[local_c0];
    local_98 = (ulonglong)uVar14;
    uVar16 = param_3[lVar9 + -2];
    local_90 = (ulonglong)uVar16;
    param_3 = param_3 + local_b0;
    lVar2 = *(longlong *)(param_1[10] + (local_70 >> 9 & 0x7fffff) * 8);
    uVar10 = (ulonglong)((uint)local_70 & 0x1ff);
    local_50 = *(undefined4 *)(lVar2 + 8 + uVar10 * 0xc);
    local_58 = *(undefined8 *)(lVar2 + uVar10 * 0xc);
    lVar3 = *(longlong *)(param_1[10] + (ulonglong)(param_5 >> 9) * 8);
    uVar11 = (ulonglong)(param_5 & 0x1ff);
    local_60[0] = *(int *)(lVar3 + 8 + uVar11 * 0xc);
    local_68 = *(undefined8 *)(lVar3 + uVar11 * 0xc);
    local_d0 = *(int *)((longlong)&local_58 + local_b0 * 4);
    lVar3 = *param_1;
    iVar22 = -1;
    iVar18 = -1;
    if (((-1 < (int)local_cc) &&
        ((int)local_cc < *(int *)(lVar3 + 0x20) * 0x200 + *(int *)(lVar3 + 0x24))) &&
       (iVar18 = -1,
       (ushort)(*(short *)(*(longlong *)
                            (*(longlong *)(lVar3 + 0x28) + (ulonglong)(local_cc >> 9) * 8) +
                          (ulonglong)(local_cc & 0x1ff) * 2) - 1U) < 0xfffe)) {
      lVar4 = param_1[7];
      local_b0 = param_1[0xc];
      iVar18 = *(int *)(*(longlong *)(lVar4 + (ulonglong)(*param_3 >> 9) * 8) +
                       (ulonglong)(*param_3 & 0x1ff) * 4);
      bVar23 = iVar18 == -1;
      iVar8 = *(int *)(*(longlong *)(lVar4 + (ulonglong)(param_6[local_a8 + -2] >> 9) * 8) +
                      (ulonglong)(param_6[local_a8 + -2] & 0x1ff) * 4);
      iVar21 = 0;
      if (iVar8 < 1) {
        iVar8 = iVar21;
      }
      iVar15 = *(int *)(*(longlong *)(lVar4 + local_b8 * 8) + uVar13 * 4);
      if (iVar15 < 1) {
        iVar15 = iVar21;
      }
      if (iVar18 < 1) {
        iVar18 = 0;
      }
      iVar8 = iVar8 - (iVar18 + iVar15);
      if (iVar8 < 1) {
        iVar8 = iVar21;
      }
      iVar18 = (int)((uint)bVar23 + local_d0 + iVar8) % *(int *)(local_b0 + (ulonglong)local_cc * 4)
      ;
    }
    piVar1 = (int *)(lVar2 + uVar10 * 0xc);
    iVar8 = local_60[lVar9];
    uVar5 = *(undefined4 *)((longlong)&local_70 + local_a8 * 4);
    iVar21 = local_60[local_c0 - 2];
    if (((-1 < (int)param_7) &&
        ((int)param_7 < *(int *)(lVar3 + 0x20) * 0x200 + *(int *)(lVar3 + 0x24))) &&
       ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(lVar3 + 0x28) + (ulonglong)(param_7 >> 9) * 8) +
                           (ulonglong)(param_7 & 0x1ff) * 2) - 1U) < 0xfffe)) {
      lVar2 = param_1[7];
      local_c0 = param_1[0xc];
      iVar22 = *(int *)(*(longlong *)(lVar2 + (ulonglong)(uVar14 >> 9) * 8) +
                       (ulonglong)(uVar14 & 0x1ff) * 4);
      bVar23 = iVar22 == -1;
      iVar15 = *(int *)(*(longlong *)(lVar2 + (ulonglong)(uVar16 >> 9) * 8) +
                       (ulonglong)(uVar16 & 0x1ff) * 4);
      iVar20 = 0;
      if (iVar15 < 1) {
        iVar15 = iVar20;
      }
      iVar12 = *(int *)(*(longlong *)(lVar2 + local_b8 * 8) + uVar13 * 4);
      if (iVar12 < 1) {
        iVar12 = iVar20;
      }
      if (iVar22 < 1) {
        iVar22 = 0;
      }
      iVar15 = iVar15 - (iVar22 + iVar12);
      if (iVar15 < 1) {
        iVar15 = iVar20;
      }
      iVar22 = (int)((uint)bVar23 + iVar21 + iVar15) % *(int *)(local_c0 + (ulonglong)param_7 * 4);
    }
    *piVar1 = iVar18;
    piVar1[1] = iVar21;
    piVar1[2] = iVar8;
    lVar2 = *(longlong *)(param_1[10] + (ulonglong)(param_5 >> 9) * 8);
    *(int *)(lVar2 + uVar11 * 0xc) = iVar22;
    *(int *)(lVar2 + 4 + uVar11 * 0xc) = local_d0;
    *(undefined4 *)(lVar2 + 8 + uVar11 * 0xc) = uVar5;
    local_c8 = param_1;
    local_a0 = lVar9;
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482e2e04 FUN_1482e2e04 body=421 status=ok
// SIG undefined FUN_1482e2e04(void)

int FUN_1482e2e04(longlong param_1,longlong param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  
  iVar5 = (param_3 + 1) % 3;
  uVar13 = (param_3 + 2U) % 3;
  uVar1 = *(uint *)(param_2 + (longlong)iVar5 * 4);
  uVar14 = *(uint *)(param_2 + (ulonglong)uVar13 * 4);
  uVar2 = *(uint *)(param_2 + (longlong)param_3 * 4);
  lVar3 = *(longlong *)(param_1 + 0x38);
  iVar11 = *(int *)(*(longlong *)(lVar3 + (ulonglong)(uVar1 >> 9) * 8) +
                   (ulonglong)(uVar1 & 0x1ff) * 4);
  iVar6 = 0;
  if (iVar11 < 1) {
    iVar11 = 0;
  }
  iVar7 = *(int *)(*(longlong *)(lVar3 + (ulonglong)(uVar14 >> 9) * 8) +
                  (ulonglong)(uVar14 & 0x1ff) * 4);
  if (iVar7 < 1) {
    iVar7 = 0;
  }
  iVar8 = *(int *)(*(longlong *)(lVar3 + (ulonglong)(uVar2 >> 9) * 8) +
                  (ulonglong)(uVar2 & 0x1ff) * 4);
  if (iVar8 < 1) {
    iVar8 = iVar6;
  }
  uVar14 = ((param_3 + 1) / 3) * -3 + param_3 + 3;
  uVar1 = iVar5 - 1;
  if (uVar14 < 3) {
    uVar1 = uVar14;
  }
  uVar14 = *(uint *)(param_2 +
                    (ulonglong)(byte)((char)(iVar5 + 1U) + (char)((iVar5 + 1U & 0xff) / 3) * -3) * 4
                    );
  uVar1 = *(uint *)(param_2 + (ulonglong)uVar1 * 4);
  iVar5 = *(int *)(*(longlong *)(lVar3 + (ulonglong)(uVar14 >> 9) * 8) +
                  (ulonglong)(uVar14 & 0x1ff) * 4);
  if (iVar5 < 1) {
    iVar5 = 0;
  }
  iVar9 = *(int *)(*(longlong *)(lVar3 + (ulonglong)(uVar1 >> 9) * 8) +
                  (ulonglong)(uVar1 & 0x1ff) * 4);
  if (iVar9 < 1) {
    iVar9 = 0;
  }
  iVar5 = iVar5 - (iVar9 + iVar11);
  if (iVar5 < 1) {
    iVar5 = 0;
  }
  bVar4 = (char)param_3 + (char)((param_3 + 2U) / 3) * -3;
  if (uVar13 < 2) {
    bVar4 = (char)uVar13 + 1;
  }
  uVar10 = 2;
  if (uVar13 != 0) {
    uVar10 = (ulonglong)(uVar13 - 1);
  }
  uVar1 = *(uint *)(param_2 + (ulonglong)bVar4 * 4);
  uVar14 = *(uint *)(param_2 + uVar10 * 4);
  iVar9 = *(int *)(*(longlong *)(lVar3 + (ulonglong)(uVar1 >> 9) * 8) +
                  (ulonglong)(uVar1 & 0x1ff) * 4);
  if (iVar9 < 1) {
    iVar9 = iVar6;
  }
  iVar12 = *(int *)(*(longlong *)(lVar3 + (ulonglong)(uVar14 >> 9) * 8) +
                   (ulonglong)(uVar14 & 0x1ff) * 4);
  if (iVar12 < 1) {
    iVar12 = 0;
  }
  iVar9 = iVar9 - (iVar12 + iVar7);
  if (iVar9 < 1) {
    iVar9 = iVar6;
  }
  iVar8 = (iVar7 - iVar11) + iVar8;
  if (iVar8 < 1) {
    iVar8 = 0;
  }
  return (iVar8 - (iVar9 + iVar5)) / 2;
}



// FUNCTION 1482e2faa FUN_1482e2faa body=515 status=ok
// SIG undefined FUN_1482e2faa(void)

int FUN_1482e2faa(longlong *param_1,ulonglong param_2,uint param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 auStack_58 [28];
  uint uStack_3c;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar4 = -1;
  uVar5 = (uint)param_2;
  if ((((-1 < (int)uVar5) &&
       (lVar1 = *param_1, (int)uVar5 < *(int *)(lVar1 + 0x20) * 0x200 + *(int *)(lVar1 + 0x24))) &&
      (-1 < (int)param_3)) &&
     (((ushort)(*(short *)(*(longlong *)
                            (*(longlong *)(lVar1 + 0x28) + (param_2 >> 9 & 0x7fffff) * 8) +
                          (ulonglong)(uVar5 & 0x1ff) * 2) - 1U) < 0xfffe &&
      ((int)param_3 < *(int *)(lVar1 + 0x1d0) * 0x200 + *(int *)(lVar1 + 0x1d4))))) {
    uVar9 = param_3 & 0x1ff;
    if (((ushort)(*(short *)(*(longlong *)
                              (*(longlong *)(lVar1 + 0x1d8) + (ulonglong)(param_3 >> 9) * 8) +
                            (ulonglong)uVar9 * 2) - 1U) < 0xfffe) &&
       (lVar6 = *(longlong *)(*(longlong *)(lVar1 + 0x1c0) + (ulonglong)(param_3 >> 9) * 8),
       uVar2 = *(undefined8 *)(lVar6 + (ulonglong)(uVar9 << 4)),
       (uint)((ulonglong)uVar2 >> 0x20) == uVar5 || (uint)uVar2 == uVar5)) {
      uVar3 = *(ulonglong *)(lVar6 + 8 + (ulonglong)(uVar9 << 4));
      uVar10 = uVar3 >> 9 & 0x7fffff;
      lVar6 = *(longlong *)(*(longlong *)(lVar1 + 0x180) + uVar10 * 8);
      uVar7 = (ulonglong)((uint)uVar3 & 0x1ff);
      if (*(uint *)(lVar6 + uVar7 * 0xc) == param_3) {
        lVar8 = 0;
      }
      else {
        lVar8 = 1;
        if (*(uint *)(lVar6 + uVar7 * 0xc + 4) != param_3) {
          lVar8 = (ulonglong)(*(uint *)(lVar6 + 8 + uVar7 * 0xc) == param_3) * 3 + -1;
        }
      }
      lVar6 = *(longlong *)(*(longlong *)(lVar1 + 0x130) + uVar10 * 8);
      local_30 = *(undefined4 *)(lVar6 + 8 + uVar7 * 0xc);
      local_38 = *(undefined8 *)(lVar6 + uVar7 * 0xc);
      if (*(uint *)((longlong)&local_38 + lVar8 * 4) == uVar5) {
        iVar4 = *(int *)((longlong)(int)(uint)uVar3 * 0xc + param_1[0xe] + lVar8 * 4);
      }
      else {
        uVar5 = (uint)(uVar3 >> 0x20);
        if (uVar5 == 0xffffffff) {
          iVar4 = *(int *)(param_1[0xc] + (param_2 & 0xffffffff) * 4) + -1;
        }
        else {
          lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x180) + (uVar3 >> 0x29) * 8);
          uVar7 = (ulonglong)(uVar5 & 0x1ff);
          if (*(uint *)(lVar1 + uVar7 * 0xc) == param_3) {
            lVar6 = 0;
          }
          else {
            lVar6 = 1;
            if (*(uint *)(lVar1 + uVar7 * 0xc + 4) != param_3) {
              lVar6 = (ulonglong)(*(uint *)(lVar1 + 8 + uVar7 * 0xc) == param_3) * 3 + -1;
            }
          }
          iVar4 = *(int *)(((longlong)uVar3 >> 0x20) * 0xc + param_1[0xe] + lVar6 * 4);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482e31ae FUN_1482e31ae body=567 status=ok
// SIG undefined FUN_1482e31ae(void)

int FUN_1482e31ae(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  undefined1 auStack_108 [28];
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  int local_d8;
  undefined8 local_d0;
  longlong *plStack_c8;
  undefined4 uStack_c0;
  uint local_bc [2];
  undefined1 local_b4;
  int local_ac;
  longlong local_a8 [2];
  undefined1 local_98 [16];
  longlong local_88;
  undefined8 *local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  iVar9 = 0;
  FUN_14068ded2(param_2,0);
  plStack_c8 = local_a8;
  local_a8[1] = 0xbe45798ee2308c3a;
  local_d0 = FUN_143b05672;
  local_a8[0] = param_1;
  FUN_143b052a0(local_98,param_1 + 0x158);
  cVar4 = FUN_143b0549c(local_98,&local_ac);
  if (0 < param_3 && cVar4 == '\x01') {
    iVar9 = 0;
    do {
      iVar5 = local_ac;
      cVar4 = FUN_143b055f4(local_a8,local_ac);
      if (cVar4 != '\0') {
        local_d0 = (code *)CONCAT44(0xffffffff,(undefined4)local_d0);
        plStack_c8 = (longlong *)0xffffffffffffffff;
        uStack_c0 = 0xffffffff;
        local_bc[0] = 0xffffffff;
        local_bc[1] = 0xffffffff;
        local_b4 = 1;
        iVar5 = FUN_1482e44bc(param_1,iVar5,&local_d0);
        if (iVar5 == 0) {
          local_e8 = param_2;
          lVar7 = 0;
          bVar3 = true;
          do {
            bVar10 = bVar3;
            lVar1 = *(longlong *)
                     (*(longlong *)(param_1 + 0x130) + (ulonglong)(local_bc[lVar7] >> 9) * 8);
            uVar6 = (ulonglong)(local_bc[lVar7] & 0x1ff);
            local_e0 = *(undefined8 *)(lVar1 + uVar6 * 0xc);
            uVar2 = local_e0;
            local_d8 = *(int *)(lVar1 + 8 + uVar6 * 0xc);
            iVar5 = 0;
            if ((int)local_e0 != local_ac) {
              iVar5 = 1;
              local_e0._4_4_ = (int)((ulonglong)local_e0 >> 0x20);
              if (local_e0._4_4_ != local_ac) {
                iVar5 = (uint)(local_d8 == local_ac) * 3 + -1;
              }
            }
            uVar8 = iVar5 - 2;
            if (iVar5 + 1U < 3) {
              uVar8 = iVar5 + 1U;
            }
            local_e0 = uVar2;
            FUN_143b05512(local_98,*(undefined4 *)((longlong)&local_e0 + (longlong)(int)uVar8 * 4));
            uVar8 = iVar5 - 1;
            if (iVar5 + 2U < 3) {
              uVar8 = iVar5 + 2U;
            }
            FUN_143b05512(local_98,*(undefined4 *)((longlong)&local_e0 + (longlong)(int)uVar8 * 4));
            lVar7 = 1;
            bVar3 = false;
          } while (bVar10);
          iVar9 = iVar9 + 1;
          param_2 = local_e8;
        }
        else {
          FUN_1447cbafe(param_2,&local_e0,&local_ac,0);
        }
      }
      cVar4 = FUN_143b0549c(local_98,&local_ac);
    } while ((cVar4 != '\0') && (iVar9 < param_3));
  }
  while (local_70 != (undefined8 *)0x0) {
    local_70 = (undefined8 *)*local_70;
    FUN_1400020a8();
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar9;
}



// FUNCTION 1482e33e6 FUN_1482e33e6 body=305 status=ok
// SIG undefined FUN_1482e33e6(void)

undefined4 * FUN_1482e33e6(undefined4 *param_1,undefined8 param_2)

{
  *param_1 = 1;
  param_1[1] = 2;
  param_1[2] = 0;
  param_1[3] = 2;
  *(undefined8 *)(param_1 + 4) = 0x100000000;
  FUN_141040be6(param_1 + 6);
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  FUN_141224904(param_1 + 0xc);
  FUN_141040b84(param_1 + 0x12);
  param_1[0x18] = 0;
  FUN_141224b64(param_1 + 0x1a);
  FUN_146bff58a(param_1 + 0x36);
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x3e) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x42) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x46) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  FUN_141224904(param_1 + 0x3c);
  FUN_141040b84(param_1 + 0x42);
  param_1[0x48] = 0;
  FUN_146bff58a(param_1 + 0x4a);
  FUN_146bff5ec(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x56) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x5a) = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)(param_1 + 0x5e) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x62) = 0;
  FUN_141224904(param_1 + 0x56);
  FUN_141040b84(param_1 + 0x5c);
  param_1[0x62] = 0;
  FUN_146bee4b2(param_1 + 100);
  FUN_141040be6(param_1 + 0x6a);
  FUN_1482e3518(param_1,param_2);
  return param_1;
}



// FUNCTION 1482e3518 FUN_1482e3518 body=858 status=ok
// SIG undefined FUN_1482e3518(void)

void FUN_1482e3518(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1482e3874();
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 8);
  FUN_146bee054(param_1 + 0x20,param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x20);
  FUN_146c40fba(param_1 + 0x38,param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x38);
  FUN_146bedfa8(param_1 + 0x50,param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x50);
  FUN_146c01712(param_1 + 0x68,param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_2 + 0x128);
  FUN_146c41066(param_1 + 0xe0,param_2 + 0x130);
  *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_2 + 0x140);
  FUN_146c40fba((longlong *)(param_1 + 0xf8),param_2 + 0x148);
  *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_2 + 0x158);
  FUN_146bedfa8(param_1 + 0x110,param_2 + 0x160);
  *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_2 + 0x170);
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_2 + 0x178);
  FUN_146c41066(param_1 + 0x130,param_2 + 0x180);
  *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_2 + 0x1b8);
  FUN_146c41112(param_1 + 0x148,param_2 + 0x1c0);
  *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(param_2 + 0x1d0);
  FUN_146c40fba((longlong *)(param_1 + 0x160),param_2 + 0x1d8);
  *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(param_2 + 0x1e8);
  FUN_146bedfa8(param_1 + 0x178,param_2 + 0x1f0);
  *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_2 + 0x200);
  uVar7 = *(int *)(param_1 + 0x158) * 0x200 + *(int *)(param_1 + 0x15c);
  FUN_146b9c0e2(param_1 + 400,uVar7);
  if (0 < (int)uVar7) {
    uVar5 = 0;
    do {
      if ((int)uVar5 < *(int *)(param_1 + 0x158) * 0x200 + *(int *)(param_1 + 0x15c)) {
        uVar8 = uVar5 & 0x1ff;
        if ((ushort)(*(short *)(*(longlong *)
                                 (*(longlong *)(param_1 + 0x160) + (ulonglong)(uVar5 >> 9) * 8) +
                               (ulonglong)uVar8 * 2) - 1U) < 0xfffe) {
          uVar6 = (ulonglong)((uVar5 >> 9) << 3);
          uVar9 = *(ulonglong *)
                   (*(longlong *)(*(longlong *)(param_1 + 0x148) + uVar6) + (ulonglong)(uVar8 << 4))
          ;
          lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (uVar9 >> 9 & 0x7fffff) * 8);
          uVar10 = uVar9 & 0x1ff;
          lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (uVar9 >> 0x29) * 8);
          uVar9 = uVar9 >> 0x20 & 0x1ff;
          dVar11 = *(double *)(lVar3 + 0x10 + uVar9 * 0x18) -
                   *(double *)(lVar2 + 0x10 + uVar10 * 0x18);
          dVar4 = *(double *)(lVar3 + 8 + uVar9 * 0x18) - *(double *)(lVar2 + 8 + uVar10 * 0x18);
          dVar12 = *(double *)(lVar3 + uVar9 * 0x18) - *(double *)(lVar2 + uVar10 * 0x18);
          *(double *)(*(longlong *)(*(longlong *)(param_1 + 0x198) + uVar6) + (ulonglong)uVar8 * 8)
               = SQRT(dVar11 * dVar11 + dVar12 * dVar12 + dVar4 * dVar4);
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar7 != uVar5);
  }
  uVar7 = *(int *)(param_1 + 0xf0) * 0x200 + *(int *)(param_1 + 0xf4);
  FUN_146bee1a4(param_1 + 0x1a8,uVar7);
  if (0 < (int)uVar7) {
    uVar5 = 0;
    do {
      if ((int)uVar5 < *(int *)(param_1 + 0xf0) * 0x200 + *(int *)(param_1 + 0xf4)) {
        uVar9 = (ulonglong)(uVar5 & 0x1ff);
        if ((ushort)(*(short *)(*(longlong *)
                                 (*(longlong *)(param_1 + 0xf8) + (ulonglong)(uVar5 >> 9) * 8) +
                               uVar9 * 2) - 1U) < 0xfffe) {
          FUN_1482e3932(param_1,&local_58,uVar5);
          lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x1b0) + (ulonglong)(uVar5 >> 9) * 8);
          *(undefined8 *)(lVar2 + 0x10 + uVar9 * 0x18) = local_48;
          puVar1 = (undefined4 *)(lVar2 + uVar9 * 0x18);
          *puVar1 = local_58;
          puVar1[1] = uStack_54;
          puVar1[2] = uStack_50;
          puVar1[3] = uStack_4c;
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar7 != uVar5);
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1482e3874 FUN_1482e3874 body=190 status=ok
// SIG undefined FUN_1482e3874(void)

void FUN_1482e3874(longlong param_1)

{
  FUN_14582f63e(param_1 + 0x18);
  FUN_1411b3fe4(param_1 + 0x48);
  FUN_14582f442(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x60) = 0;
  FUN_14582f602(param_1 + 0x68);
  FUN_14582f522(param_1 + 0xd8);
  FUN_1411b3fe4(param_1 + 0x108);
  FUN_14582f442(param_1 + 0xf0);
  *(undefined4 *)(param_1 + 0x120) = 0;
  FUN_14582f522(param_1 + 0x128);
  FUN_14582f71e(param_1 + 0x140);
  FUN_1411b3fe4(param_1 + 0x170);
  FUN_14582f442(param_1 + 0x158);
  *(undefined4 *)(param_1 + 0x188) = 0;
  FUN_146b9c06c(param_1 + 400);
  FUN_14582f63e(param_1 + 0x1a8);
  return;
}



// FUNCTION 1482e3932 FUN_1482e3932 body=343 status=ok
// SIG undefined FUN_1482e3932(void)

longlong FUN_1482e3932(longlong param_1,longlong param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_78 [32];
  double local_58 [3];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar5 = *(longlong *)(param_1 + 0x198);
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x130) + (ulonglong)(param_3 >> 9) * 8);
  uVar6 = (ulonglong)(param_3 & 0x1ff);
  uVar1 = *(uint *)(lVar4 + uVar6 * 0xc);
  uVar2 = *(uint *)(lVar4 + 4 + uVar6 * 0xc);
  uVar3 = *(uint *)(lVar4 + 8 + uVar6 * 0xc);
  local_58[0] = *(double *)
                 (*(longlong *)(lVar5 + (ulonglong)(uVar1 >> 9) * 8) +
                 (ulonglong)(uVar1 & 0x1ff) * 8);
  local_58[1] = (double)*(undefined8 *)
                         (*(longlong *)(lVar5 + (ulonglong)(uVar2 >> 9) * 8) +
                         (ulonglong)(uVar2 & 0x1ff) * 8);
  local_58[2] = (double)*(undefined8 *)
                         (*(longlong *)(lVar5 + (ulonglong)(uVar3 >> 9) * 8) +
                         (ulonglong)(uVar3 & 0x1ff) * 8);
  lVar5 = 0;
  do {
    dVar7 = local_58[*(int *)(param_1 + 0xc + lVar5 * 4)];
    dVar8 = local_58[lVar5];
    dVar7 = ((dVar8 * dVar8 + dVar7 * dVar7) -
            local_58[*(int *)(param_1 + lVar5 * 4)] * local_58[*(int *)(param_1 + lVar5 * 4)]) /
            ((dVar8 + dVar8) * dVar7);
    if (1.0 <= dVar7) {
      dVar7 = 1.0;
    }
    if (dVar7 <= -1.0) {
      dVar7 = -1.0;
    }
    dVar8 = dVar7;
    if (1.0 <= dVar7) {
      dVar8 = 1.0;
    }
    dVar7 = acos((double)(-(ulonglong)(dVar7 < -1.0) & 0xbff0000000000000 |
                         ~-(ulonglong)(dVar7 < -1.0) & (ulonglong)dVar8));
    *(double *)(param_2 + lVar5 * 8) = dVar7;
    lVar5 = lVar5 + 1;
  } while (lVar5 != 3);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482e3a8a FUN_1482e3a8a body=261 status=ok
// SIG undefined FUN_1482e3a8a(void)

undefined8 * FUN_1482e3a8a(longlong param_1,undefined8 *param_2,uint param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  ulonglong uVar6;
  bool bVar7;
  longlong lVar8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x148) + (ulonglong)(param_3 >> 9) * 8);
  *param_2 = 0xffffffffffffffff;
  lVar8 = 0;
  bVar4 = true;
  do {
    bVar7 = bVar4;
    uVar1 = *(uint *)(lVar2 + (ulonglong)((param_3 & 0x1ff) << 4) + 8 + lVar8 * 4);
    if (uVar1 != 0xffffffff) {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x130) + (ulonglong)(uVar1 >> 9) * 8);
      uVar6 = (ulonglong)(uVar1 & 0x1ff);
      if (*(uint *)(lVar3 + uVar6 * 0xc) == param_3) {
        lVar5 = 0;
      }
      else {
        lVar5 = 1;
        if (*(uint *)(lVar3 + uVar6 * 0xc + 4) != param_3) {
          lVar5 = (ulonglong)(*(uint *)(lVar3 + 8 + uVar6 * 0xc) == param_3) * 3 + -1;
        }
      }
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xe0) + (ulonglong)(uVar1 >> 9) * 8);
      local_40 = *(undefined4 *)(lVar3 + 8 + uVar6 * 0xc);
      local_48 = *(undefined8 *)(lVar3 + uVar6 * 0xc);
      *(undefined4 *)((longlong)param_2 + lVar8 * 4) =
           *(undefined4 *)((longlong)&local_48 + (longlong)*(int *)(param_1 + 0xc + lVar5 * 4) * 4);
    }
    lVar8 = 1;
    bVar4 = false;
  } while (bVar7);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482e3b90 FUN_1482e3b90 body=1503 status=ok
// SIG undefined FUN_1482e3b90(void)

undefined8 FUN_1482e3b90(longlong param_1,uint param_2,uint *param_3)

{
  short *psVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  char cVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  uint uVar19;
  ulonglong uVar20;
  uint *puVar21;
  undefined1 auStack_d8 [32];
  ulonglong local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  uint local_8c;
  uint local_88;
  undefined4 local_84;
  ulonglong local_80;
  ulonglong local_78;
  undefined8 local_70;
  uint local_68;
  uint local_60;
  uint local_5c;
  undefined8 local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar11 = 3;
  if ((int)param_2 < *(int *)(param_1 + 0x158) * 0x200 + *(int *)(param_1 + 0x15c)) {
    uVar19 = param_2 >> 9;
    uVar14 = param_2 & 0x1ff;
    if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(param_1 + 0x160) + (ulonglong)uVar19 * 8) +
                           (ulonglong)uVar14 * 2) - 1U) < 0xfffe) {
      lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x148) + (ulonglong)uVar19 * 8);
      uVar2 = *(uint *)(lVar18 + 0xc + (ulonglong)(uVar14 << 4));
      uVar11 = 0x14;
      if (uVar2 != 0xffffffff) {
        uVar3 = *(uint *)(lVar18 + 8 + (ulonglong)(uVar14 << 4));
        uVar17 = (ulonglong)uVar3;
        FUN_1482e3a8a(param_1,&local_60,param_2);
        local_78 = (ulonglong)(uVar3 >> 9);
        lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x130) + local_78 * 8);
        uVar9 = (ulonglong)(uVar3 & 0x1ff);
        puVar21 = (uint *)(lVar18 + uVar9 * 0xc);
        if (*puVar21 == param_2) {
          lVar13 = 0;
        }
        else {
          lVar13 = 1;
          if (puVar21[1] != param_2) {
            lVar13 = (ulonglong)(*(uint *)(lVar18 + 8 + uVar9 * 0xc) == param_2) * 3 + -1;
          }
        }
        lVar18 = *(longlong *)(*(longlong *)(param_1 + 0xe0) + local_78 * 8);
        local_50 = *(uint *)(lVar18 + 8 + uVar9 * 0xc);
        local_58 = *(undefined8 *)(lVar18 + uVar9 * 0xc);
        local_98 = (ulonglong)local_60;
        uVar11 = 10;
        if ((local_98 != 0xffffffff) && (local_a0 = (ulonglong)local_5c, local_a0 != 0xffffffff)) {
          uVar10 = *(uint *)((longlong)&local_58 + (longlong)*(int *)(param_1 + lVar13 * 4) * 4);
          local_b8 = (ulonglong)uVar10;
          uVar16 = *(uint *)((longlong)&local_58 + lVar13 * 4);
          uVar8 = (ulonglong)uVar16;
          local_50 = puVar21[2];
          local_58 = *(undefined8 *)puVar21;
          uVar6 = local_58;
          local_80 = (ulonglong)(uVar2 >> 9);
          lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x130) + local_80 * 8);
          uVar12 = (ulonglong)(uVar2 & 0x1ff);
          local_68 = *(uint *)(lVar13 + 8 + uVar12 * 0xc);
          local_70 = *(undefined8 *)(lVar13 + uVar12 * 0xc);
          uVar11 = local_70;
          if ((uint)local_58 == param_2) {
            lVar13 = 0;
          }
          else {
            lVar13 = 1;
            local_58._4_4_ = (uint)((ulonglong)local_58 >> 0x20);
            if (local_58._4_4_ != param_2) {
              lVar13 = (ulonglong)(puVar21[2] == param_2) * 3 + -1;
            }
          }
          puVar21 = (uint *)(lVar18 + uVar9 * 0xc);
          if ((uint)local_70 == param_2) {
            lVar18 = 0;
          }
          else {
            lVar18 = 1;
            local_70._4_4_ = (uint)((ulonglong)local_70 >> 0x20);
            if (local_70._4_4_ != param_2) {
              lVar18 = (ulonglong)(local_68 == param_2) * 3 + -1;
            }
          }
          local_84 = *(undefined4 *)
                      ((longlong)&local_58 + (longlong)*(int *)(param_1 + lVar13 * 4) * 4);
          uVar4 = *(uint *)((longlong)&local_70 + (longlong)*(int *)(param_1 + lVar18 * 4) * 4);
          uVar5 = *(uint *)((longlong)&local_70 + (longlong)*(int *)(param_1 + 0xc + lVar18 * 4) * 4
                           );
          local_8c = uVar5;
          if ((char)param_3[7] != '\0') {
            local_8c = uVar4;
            uVar4 = uVar5;
          }
          local_88 = *(uint *)((longlong)&local_58 +
                              (longlong)*(int *)(param_1 + 0xc + lVar13 * 4) * 4);
          *puVar21 = local_60;
          puVar21[1] = local_5c;
          puVar21[2] = uVar10;
          lVar18 = *(longlong *)(*(longlong *)(param_1 + 0xe0) + local_80 * 8);
          *(uint *)(lVar18 + uVar12 * 0xc) = local_5c;
          *(uint *)(lVar18 + 4 + uVar12 * 0xc) = local_60;
          uVar10 = local_5c;
          if ((int)local_5c < (int)local_60) {
            uVar10 = local_60;
          }
          *(uint *)(lVar18 + 8 + uVar12 * 0xc) = uVar16;
          if ((int)local_60 < (int)local_5c) {
            local_5c = local_60;
          }
          uVar20 = (ulonglong)(uVar19 << 3);
          uVar15 = (ulonglong)(uVar14 << 4);
          *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x148) + uVar20) + uVar15) = local_5c;
          *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x148) + uVar20) + 4 + uVar15) = uVar10;
          *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x148) + uVar20) + 8 + uVar15) = uVar3;
          *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x148) + uVar20) + 0xc + uVar15) = uVar2;
          lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x148) + (ulonglong)(local_88 >> 9) * 8) +
                   (ulonglong)((local_88 & 0x1ff) << 4);
          puVar21 = (uint *)(lVar18 + 8);
          local_b0 = uVar8;
          local_a8 = uVar17;
          local_70 = uVar11;
          local_58 = uVar6;
          if (*puVar21 != uVar3) {
            uVar11 = 1000;
            if (*(uint *)(lVar18 + 0xc) != uVar3) goto LAB_1482e3c20;
            puVar21 = (uint *)(lVar18 + 0xc);
          }
          *puVar21 = uVar2;
          lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x148) + (ulonglong)(uVar4 >> 9) * 8) +
                   (ulonglong)((uVar4 & 0x1ff) << 4);
          puVar21 = (uint *)(lVar18 + 8);
          if (*puVar21 == uVar2) {
            if (uVar3 == 0xffffffff) {
              *puVar21 = *(uint *)(lVar18 + 0xc);
              *(undefined4 *)(lVar18 + 0xc) = 0xffffffff;
            }
            else {
              *puVar21 = uVar3;
            }
          }
          else {
            uVar11 = 1000;
            if (*(uint *)(lVar18 + 0xc) != uVar2) goto LAB_1482e3c20;
            *(uint *)(lVar18 + 0xc) = uVar3;
          }
          lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x130) + local_78 * 8);
          *(uint *)(lVar18 + uVar9 * 0xc) = param_2;
          *(uint *)(lVar18 + 4 + uVar9 * 0xc) = uVar4;
          *(undefined4 *)(lVar18 + 8 + uVar9 * 0xc) = local_84;
          lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x130) + local_80 * 8);
          *(uint *)(lVar18 + uVar12 * 0xc) = param_2;
          *(uint *)(lVar18 + 4 + uVar12 * 0xc) = local_88;
          *(uint *)(lVar18 + 8 + uVar12 * 0xc) = local_8c;
          lVar18 = param_1 + 0x68;
          cVar7 = FUN_146c86f00(lVar18,uVar8,param_2);
          uVar11 = 1000;
          if (cVar7 != '\0') {
            FUN_146c09a68(param_1 + 0x30,uVar8,1);
            if (uVar16 != (uint)local_b8) {
              cVar7 = FUN_146c86f00(lVar18,local_b8,param_2);
              if (cVar7 == '\0') goto LAB_1482e3c20;
              FUN_146c09a68(param_1 + 0x30,local_b8,1);
              uVar16 = (uint)local_b0;
            }
            uVar9 = local_98;
            if ((((-1 < (int)uVar16) &&
                 (uVar14 = *(int *)(param_1 + 0x30) * 0x200 + *(int *)(param_1 + 0x34),
                 (int)uVar16 < (int)uVar14)) &&
                ((ushort)(*(short *)(*(longlong *)
                                      (*(longlong *)(param_1 + 0x38) +
                                      (local_b0 >> 9 & 0x7fffff) * 8) +
                                    (ulonglong)((uint)local_b0 & 0x1ff) * 2) - 1U) < 0xfffe)) &&
               (((-1 < (int)(uint)local_b8 && ((uint)local_b8 < uVar14)) &&
                ((ushort)(*(short *)(*(longlong *)
                                      (*(longlong *)(param_1 + 0x38) +
                                      (local_b8 >> 9 & 0x7fffff) * 8) +
                                    (ulonglong)((uint)local_b8 & 0x1ff) * 2) - 1U) < 0xfffe)))) {
              uVar19 = (uint)local_98;
              FUN_146c86bd4(lVar18,local_98 & 0xffffffff,param_2);
              uVar17 = local_a0;
              psVar1 = (short *)(*(longlong *)
                                  (*(longlong *)(param_1 + 0x38) + (uVar9 >> 9 & 0x7fffff) * 8) +
                                (ulonglong)(uVar19 & 0x1ff) * 2);
              *psVar1 = *psVar1 + 1;
              uVar14 = (uint)local_a0;
              if (uVar19 != (uint)local_a0) {
                FUN_146c86bd4(lVar18,local_a0 & 0xffffffff,param_2);
                psVar1 = (short *)(*(longlong *)
                                    (*(longlong *)(param_1 + 0x38) + (uVar17 >> 9 & 0x7fffff) * 8) +
                                  (ulonglong)(uVar14 & 0x1ff) * 2);
                *psVar1 = *psVar1 + 1;
              }
              *param_3 = param_2;
              *(ulonglong *)(param_3 + 1) = (local_b8 << 0x20) + local_b0;
              *(ulonglong *)(param_3 + 3) = (local_a0 << 0x20) + local_98;
              *(ulonglong *)(param_3 + 5) = ((ulonglong)uVar2 << 0x20) + local_a8;
              uVar11 = 0;
            }
          }
        }
      }
    }
  }
LAB_1482e3c20:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11;
}



// FUNCTION 1482e4170 FUN_1482e4170 body=456 status=ok
// SIG undefined FUN_1482e4170(void)

void FUN_1482e4170(longlong param_1,uint param_2)

{
  double dVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  bool bVar11;
  double *pdVar12;
  undefined1 auStack_d8 [39];
  char local_b1;
  double local_b0;
  double adStack_a8 [4];
  double local_88;
  double dStack_80;
  double local_78;
  double local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b1 = FUN_1482e433a();
  lVar5 = *(longlong *)(param_1 + 0x198);
  dVar1 = *(double *)
           (*(longlong *)(lVar5 + (ulonglong)(param_2 >> 9) * 8) + (ulonglong)(param_2 & 0x1ff) * 8)
  ;
  lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x148) + (ulonglong)(param_2 >> 9) * 8);
  uVar9 = (ulonglong)((param_2 & 0x1ff) << 4);
  uVar2 = *(uint *)(lVar10 + 0xc + uVar9);
  lVar6 = *(longlong *)(param_1 + 0x130);
  pdVar12 = adStack_a8 + 4;
  uVar8 = *(uint *)(lVar10 + 8 + uVar9);
  bVar7 = true;
  do {
    bVar11 = bVar7;
    lVar10 = *(longlong *)(lVar6 + (ulonglong)(uVar8 >> 9) * 8);
    uVar9 = (ulonglong)(uVar8 & 0x1ff);
    uVar8 = *(uint *)(lVar10 + uVar9 * 0xc);
    uVar3 = *(uint *)(lVar10 + 4 + uVar9 * 0xc);
    uVar4 = *(uint *)(lVar10 + 8 + uVar9 * 0xc);
    adStack_a8[1] =
         (double)*(undefined8 *)
                  (*(longlong *)(lVar5 + (ulonglong)(uVar8 >> 9) * 8) +
                  (ulonglong)(uVar8 & 0x1ff) * 8);
    adStack_a8[2] =
         (double)*(undefined8 *)
                  (*(longlong *)(lVar5 + (ulonglong)(uVar3 >> 9) * 8) +
                  (ulonglong)(uVar3 & 0x1ff) * 8);
    adStack_a8[3] =
         (double)*(undefined8 *)
                  (*(longlong *)(lVar5 + (ulonglong)(uVar4 >> 9) * 8) +
                  (ulonglong)(uVar4 & 0x1ff) * 8);
    if (uVar8 == param_2) {
      lVar10 = 0;
    }
    else {
      lVar10 = 1;
      if (uVar3 != param_2) {
        lVar10 = (ulonglong)(uVar4 == param_2) * 3 + -1;
      }
    }
    FUN_143aff60b(&local_b0,adStack_a8[lVar10 + 1],
                  adStack_a8[(longlong)*(int *)(param_1 + lVar10 * 4) + 1],
                  adStack_a8[(longlong)*(int *)(param_1 + 0xc + lVar10 * 4) + 1]);
    *pdVar12 = local_b0;
    pdVar12[1] = adStack_a8[0];
    pdVar12 = &local_78;
    uVar8 = uVar2;
    bVar7 = false;
  } while (bVar11);
  if (local_b1 != '\0') {
    local_78 = dVar1 - local_78;
  }
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(SUB84(SQRT((local_88 - local_78) * (local_88 - local_78) +
                           (local_70 + dStack_80) * (local_70 + dStack_80)),0));
}



// FUNCTION 1482e433a FUN_1482e433a body=385 status=ok
// SIG undefined FUN_1482e433a(void)

byte FUN_1482e433a(longlong param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  byte bVar12;
  ulonglong uVar13;
  bool bVar14;
  bool bVar15;
  
  bVar12 = 1;
  if ((int)param_2 < *(int *)(param_1 + 0x158) * 0x200 + *(int *)(param_1 + 0x15c)) {
    if ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(param_1 + 0x160) + (ulonglong)(param_2 >> 9) * 8) +
                           (ulonglong)(param_2 & 0x1ff) * 2) - 1U) < 0xfffe) {
      lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x148) + (ulonglong)(param_2 >> 9) * 8);
      uVar13 = (ulonglong)((param_2 & 0x1ff) << 4);
      uVar1 = *(uint *)(lVar11 + 0xc + uVar13);
      if (uVar1 != 0xffffffff) {
        iVar2 = *(int *)(lVar11 + uVar13);
        iVar3 = *(int *)(lVar11 + 4 + uVar13);
        uVar4 = *(uint *)(lVar11 + uVar13 + 8);
        lVar11 = *(longlong *)(*(longlong *)(param_1 + 0xe0) + (ulonglong)(uVar4 >> 9) * 8);
        uVar13 = (ulonglong)(uVar4 & 0x1ff);
        iVar5 = *(int *)(lVar11 + uVar13 * 0xc);
        iVar6 = *(int *)(lVar11 + 4 + uVar13 * 0xc);
        iVar7 = *(int *)(lVar11 + 8 + uVar13 * 0xc);
        lVar11 = *(longlong *)(*(longlong *)(param_1 + 0xe0) + (ulonglong)(uVar1 >> 9) * 8);
        uVar13 = (ulonglong)(uVar1 & 0x1ff);
        iVar8 = *(int *)(lVar11 + uVar13 * 0xc);
        iVar9 = *(int *)(lVar11 + 4 + uVar13 * 0xc);
        iVar10 = *(int *)(lVar11 + 8 + uVar13 * 0xc);
        if ((((((iVar5 == iVar2) && (iVar6 == iVar3)) || ((iVar6 == iVar2 && (iVar7 == iVar3)))) ||
             ((bVar15 = false, iVar7 == iVar2 && (iVar5 == iVar3)))) &&
            ((bVar15 = true, iVar8 != iVar3 || (iVar9 != iVar2)))) &&
           ((iVar9 != iVar3 || (iVar10 != iVar2)))) {
          bVar15 = iVar8 == iVar2 && iVar10 == iVar3;
        }
        if (((iVar6 == iVar2 && iVar5 == iVar3) || (iVar7 == iVar2 && iVar6 == iVar3)) ||
           (iVar7 == iVar3 && iVar5 == iVar2)) {
          bVar14 = true;
          if (((iVar8 != iVar2) || (iVar9 != iVar3)) && ((iVar9 != iVar2 || (iVar10 != iVar3)))) {
            bVar14 = iVar8 == iVar3 && iVar10 == iVar2;
          }
        }
        else {
          bVar14 = false;
        }
        bVar12 = bVar15 | bVar14;
      }
    }
  }
  return bVar12;
}



// FUNCTION 1482e44bc FUN_1482e44bc body=697 status=ok
// SIG undefined FUN_1482e44bc(void)

int FUN_1482e44bc(longlong param_1,uint param_2,longlong param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined8 uVar19;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar6 = 3;
  if ((-1 < (int)param_2) &&
     ((int)param_2 < *(int *)(param_1 + 0x158) * 0x200 + *(int *)(param_1 + 0x15c))) {
    uVar18 = (ulonglong)(param_2 >> 9);
    uVar16 = param_2 & 0x1ff;
    if (((ushort)(*(short *)(*(longlong *)(*(longlong *)(param_1 + 0x160) + uVar18 * 8) +
                            (ulonglong)uVar16 * 2) - 1U) < 0xfffe) &&
       (iVar6 = 0x14,
       *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x148) + uVar18 * 8) + 0xc +
               (ulonglong)(uVar16 << 4)) != -1)) {
      cVar5 = FUN_1482e433a(param_1,param_2);
      *(char *)(param_3 + 0x1c) = cVar5;
      lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x148) + uVar18 * 8);
      uVar2 = *(uint *)(lVar7 + 8 + (ulonglong)(uVar16 << 4));
      uVar3 = *(uint *)(lVar7 + 0xc + (ulonglong)(uVar16 << 4));
      uVar17 = (ulonglong)(uVar2 >> 9);
      lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x130) + uVar17 * 8);
      uVar10 = (ulonglong)(uVar2 & 0x1ff);
      if (*(uint *)(lVar15 + uVar10 * 0xc) == param_2) {
        lVar11 = 0;
      }
      else {
        lVar11 = 1;
        if (*(uint *)(lVar15 + uVar10 * 0xc + 4) != param_2) {
          lVar11 = (ulonglong)(*(uint *)(lVar15 + 8 + uVar10 * 0xc) == param_2) * 3 + -1;
        }
      }
      lVar8 = uVar10 * 0x18 + *(longlong *)(*(longlong *)(param_1 + 0x1b0) + uVar17 * 8);
      uVar17 = (ulonglong)(uVar3 >> 9);
      lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x130) + uVar17 * 8);
      uVar10 = (ulonglong)(uVar3 & 0x1ff);
      if (*(uint *)(lVar15 + uVar10 * 0xc) == param_2) {
        lVar14 = 0;
      }
      else {
        lVar14 = 1;
        if (*(uint *)(uVar10 * 0xc + lVar15 + 4) != param_2) {
          lVar14 = (ulonglong)(*(uint *)(lVar15 + 8 + uVar10 * 0xc) == param_2) * 3 + -1;
        }
      }
      lVar12 = uVar10 * 0x18 + *(longlong *)(*(longlong *)(param_1 + 0x1b0) + uVar17 * 8);
      lVar15 = (longlong)*(int *)(param_1 + lVar14 * 4);
      lVar13 = lVar14;
      if (cVar5 != '\0') {
        lVar13 = lVar15;
        lVar15 = lVar14;
      }
      iVar6 = 0x3e9;
      if (((*(double *)(lVar8 + lVar11 * 8) + 0.0 + *(double *)(lVar12 + lVar13 * 8) <=
            3.141592643589793) &&
          (*(double *)(lVar8 + (longlong)*(int *)(param_1 + lVar11 * 4) * 8) + 0.0 +
           *(double *)(lVar12 + lVar15 * 8) <= 3.141592643589793)) &&
         (uVar19 = *(undefined8 *)(lVar7 + 8 + (ulonglong)(uVar16 << 4)),
         (int)uVar19 != (int)((ulonglong)uVar19 >> 0x20))) {
        uVar19 = FUN_1482e4170(param_1,param_2);
        iVar6 = FUN_1482e3b90(param_1,param_2,param_3);
        if (iVar6 == 0) {
          *(undefined8 *)
           (*(longlong *)(*(longlong *)(param_1 + 0x198) + uVar18 * 8) + (ulonglong)uVar16 * 8) =
               uVar19;
          iVar6 = 0;
          lVar7 = 0;
          bVar4 = true;
          do {
            bVar9 = bVar4;
            uVar16 = *(uint *)(param_3 + 0x14 + lVar7 * 4);
            FUN_1482e3932(param_1,&local_78,uVar16);
            lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x1b0) + (ulonglong)(uVar16 >> 9) * 8);
            *(undefined8 *)(lVar7 + 0x10 + (ulonglong)(uVar16 & 0x1ff) * 0x18) = local_68;
            puVar1 = (undefined8 *)(lVar7 + (ulonglong)(uVar16 & 0x1ff) * 0x18);
            *puVar1 = local_78;
            puVar1[1] = uStack_70;
            lVar7 = 1;
            bVar4 = false;
          } while (bVar9);
        }
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482e4776 FUN_1482e4776 body=154 status=ok
// SIG undefined FUN_1482e4776(void)

double FUN_1482e4776(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x148) + (ulonglong)(param_2 >> 9) * 8);
  uVar3 = (ulonglong)((param_2 & 0x1ff) << 4);
  iVar1 = *(int *)(lVar2 + 0xc + uVar3);
  local_38 = param_1;
  dVar4 = (double)FUN_143aff6c2(&local_38,param_2,*(undefined4 *)(lVar2 + 8 + uVar3));
  if (iVar1 != -1) {
    dVar5 = (double)FUN_143aff6c2(&local_38,param_2,iVar1);
    dVar4 = (dVar4 + dVar5) * 0.5;
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return dVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482e4812 FUN_1482e4812 body=289 status=ok
// SIG undefined FUN_1482e4812(void)

undefined4 * FUN_1482e4812(undefined4 *param_1)

{
  *param_1 = 1;
  param_1[1] = 2;
  param_1[2] = 0;
  param_1[3] = 2;
  *(undefined8 *)(param_1 + 4) = 0x100000000;
  FUN_141040be6(param_1 + 6);
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  FUN_141224904(param_1 + 0xc);
  FUN_141040b84(param_1 + 0x12);
  param_1[0x18] = 0;
  FUN_141224b64(param_1 + 0x1a);
  FUN_146bff58a(param_1 + 0x36);
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x3e) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x42) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x46) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  FUN_141224904(param_1 + 0x3c);
  FUN_141040b84(param_1 + 0x42);
  param_1[0x48] = 0;
  FUN_146bff58a(param_1 + 0x4a);
  FUN_146bff5ec(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x56) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x5a) = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)(param_1 + 0x5e) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x62) = 0;
  FUN_141224904(param_1 + 0x56);
  FUN_141040b84(param_1 + 0x5c);
  param_1[0x62] = 0;
  FUN_146bee4b2(param_1 + 100);
  FUN_141040be6(param_1 + 0x6a);
  return param_1;
}



// FUNCTION 1482e4933 FUN_1482e4933 body=1113 status=ok
// SIG undefined FUN_1482e4933(void)

undefined8 * FUN_1482e4933(undefined8 *param_1,longlong param_2,uint param_3)

{
  uint *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  int iVar16;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined8 local_90;
  uint *local_88;
  undefined8 uStack_80;
  int local_78;
  undefined8 local_70;
  uint local_68;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (((int)param_3 < 0) ||
     (lVar2 = *(longlong *)(param_2 + 0x1c0),
     *(int *)(lVar2 + 0x1d0) * 0x200 + *(int *)(lVar2 + 0x1d4) <= (int)param_3)) {
LAB_1482e49a1:
    *param_1 = 0;
    param_1[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_b8);
  }
  local_90 = (ulonglong)(param_3 >> 9);
  uVar10 = param_3 & 0x1ff;
  if (0xfffd < (ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar2 + 0x1d8) + local_90 * 8) +
                                  (ulonglong)uVar10 * 2) - 1U)) goto LAB_1482e49a1;
  uVar6 = *(ulonglong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x1c0) + local_90 * 8) + (ulonglong)(uVar10 << 4));
  puVar1 = (uint *)(param_2 + 0x68);
  iVar9 = (int)uVar6;
  local_98 = param_1;
  FUN_146be983e(&local_88,puVar1,uVar6 & 0xffffffff);
  puVar4 = local_88;
  iVar13 = (uint)uStack_80;
  if (local_88 != puVar1) goto LAB_1482e4b14;
  if ((uint)uStack_80 != iVar9) goto LAB_1482e4b14;
  if ((int)local_70 != -1) goto LAB_1482e4b14;
  iVar16 = local_70._4_4_;
  while (iVar16 != -1) {
LAB_1482e4b14:
    do {
      uVar5 = (ulonglong)(local_68 >> 9);
      uVar14 = local_68 & 0x1ff;
      uVar3 = *(undefined8 *)
               (*(longlong *)(*(longlong *)(param_2 + 0x148) + uVar5 * 8) + (ulonglong)(uVar14 << 4)
               );
      iVar16 = (int)(uVar6 >> 0x20);
      if (((iVar16 == (int)uVar3) || (iVar16 == (int)((ulonglong)uVar3 >> 0x20))) &&
         (*(int *)(*(longlong *)(*(longlong *)(param_2 + 0x1f8) + uVar5 * 8) + (ulonglong)uVar14 * 4
                  ) == -1)) {
        if (local_68 == 0xffffffff) goto LAB_1482e4a38;
        uVar6 = *(ulonglong *)
                 (*(longlong *)(*(longlong *)(param_2 + 0x148) + uVar5 * 8) + 8 +
                 (ulonglong)(uVar14 << 4));
        uVar14 = (uint)uVar6;
        uVar6 = uVar6 >> 9 & 0x7fffff;
        lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x130) + uVar6 * 8);
        uVar5 = (ulonglong)(uVar14 & 0x1ff);
        uVar10 = 0;
        if ((*(uint *)(lVar2 + uVar5 * 0xc) != local_68) &&
           (uVar10 = 1, *(uint *)(lVar2 + uVar5 * 0xc + 4) != local_68)) {
          uVar10 = (uint)(*(uint *)(lVar2 + 8 + uVar5 * 0xc) == local_68) * 3 - 1;
        }
        lVar2 = *(longlong *)(*(longlong *)(param_2 + 0xe0) + uVar6 * 8);
        uStack_80 = CONCAT44(uStack_80._4_4_,*(undefined4 *)(lVar2 + 8 + uVar5 * 0xc));
        local_88 = *(uint **)(lVar2 + uVar5 * 0xc);
        iVar13 = *(int *)((longlong)&local_88 + (longlong)(int)uVar10 * 4);
        local_88 = (uint *)0x0;
        uStack_80 = 0;
        FUN_148309292(&local_88);
        *local_88 = uVar14;
        if (iVar13 == iVar9) {
          local_88[1] = uVar10;
          local_88[2] = 0;
          local_88[3] = uVar14;
          uVar14 = uVar10 - 2;
          if (uVar10 + 1 < 3) {
            uVar14 = uVar10 + 1;
          }
        }
        else {
          uVar7 = uVar10 - 2;
          if (uVar10 + 1 < 3) {
            uVar7 = uVar10 + 1;
          }
          local_88[1] = uVar7;
          local_88[2] = 0;
          local_88[3] = uVar14;
          uVar14 = uVar10;
        }
        local_88[4] = uVar14;
        local_88[5] = 0;
        *local_98 = local_88;
        *(uint *)(local_98 + 1) = (uint)uStack_80;
        puVar11 = local_98;
        goto LAB_1482e4c43;
      }
      if (local_78 == 0) {
        uStack_80 = CONCAT44(0xffffffff,(uint)uStack_80);
        local_70 = 0xffffffffffffffff;
        local_70._4_4_ = -1;
        local_70._0_4_ = -1;
      }
      else {
        FUN_146be9922(&local_88);
        puVar4 = local_88;
        iVar13 = (uint)uStack_80;
      }
    } while (((puVar4 != puVar1) || (iVar13 != iVar9)) ||
            (iVar16 = local_70._4_4_, (int)local_70 != -1));
  }
LAB_1482e4a38:
  puVar11 = local_98;
  uVar6 = *(ulonglong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x1c0) + local_90 * 8) + 8 +
           (ulonglong)(uVar10 << 4));
  uVar5 = uVar6 >> 9 & 0x7fffff;
  lVar15 = *(longlong *)(*(longlong *)(lVar2 + 0x180) + uVar5 * 8);
  uVar8 = (ulonglong)((uint)uVar6 & 0x1ff);
  iVar13 = 0;
  if ((*(uint *)(lVar15 + uVar8 * 0xc) != param_3) &&
     (iVar13 = 1, *(uint *)(lVar15 + uVar8 * 0xc + 4) != param_3)) {
    iVar13 = (uint)(*(uint *)(lVar15 + 8 + uVar8 * 0xc) == param_3) * 3 + -1;
  }
  lVar15 = *(longlong *)(*(longlong *)(lVar2 + 0x130) + uVar5 * 8);
  uStack_80 = CONCAT44(uStack_80._4_4_,*(undefined4 *)(lVar15 + 8 + uVar8 * 0xc));
  local_88 = *(uint **)(lVar15 + uVar8 * 0xc);
  if (*(int *)((longlong)&local_88 + (longlong)iVar13 * 4) != iVar9) {
    uVar5 = uVar6 >> 0x20;
    uVar10 = (uint)(uVar6 >> 0x20);
    if (uVar10 == 0xffffffff) {
      FUN_1483092cb(&local_88,param_2);
      if (1 < (int)(uint)uStack_80) {
        lVar15 = 0;
        lVar2 = (uStack_80 & 0xffffffff) * 0xc;
        do {
          lVar12 = lVar2 + -0xc;
          local_50 = *(undefined4 *)((longlong)local_88 + lVar15 + 8);
          local_58 = *(undefined8 *)((longlong)local_88 + lVar15);
          *(undefined4 *)((longlong)local_88 + lVar15 + 8) =
               *(undefined4 *)((longlong)local_88 + lVar2 + -4);
          *(undefined8 *)((longlong)local_88 + lVar15) =
               *(undefined8 *)((longlong)local_88 + lVar12);
          *(undefined4 *)((longlong)local_88 + lVar2 + -4) = local_50;
          *(undefined8 *)((longlong)local_88 + lVar12) = local_58;
          lVar15 = lVar15 + 0xc;
          lVar2 = lVar12;
        } while ((ulonglong)((uint)uStack_80 >> 1) * 0xc != lVar15);
      }
      *puVar11 = local_88;
      *(uint *)(puVar11 + 1) = (uint)uStack_80;
LAB_1482e4c43:
      *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_80._4_4_;
      goto LAB_1482e4ad5;
    }
    lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x180) + (uVar6 >> 0x29) * 8);
    uVar8 = (ulonglong)(uVar10 & 0x1ff);
    iVar13 = 0;
    uVar6 = uVar5;
    if ((*(uint *)(lVar2 + uVar8 * 0xc) != param_3) &&
       (iVar13 = 1, *(uint *)(lVar2 + uVar8 * 0xc + 4) != param_3)) {
      iVar13 = (uint)(*(uint *)(lVar2 + 8 + uVar8 * 0xc) == param_3) * 3 + -1;
    }
  }
  FUN_1483092cb(local_98,param_2,uVar6,iVar13);
LAB_1482e4ad5:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar11;
}



// FUNCTION 1482e4d90 FUN_1482e4d90 body=562 status=ok
// SIG undefined FUN_1482e4d90(void)

void FUN_1482e4d90(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined1 auStack_78 [40];
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar7 = param_1 + 2;
  iVar6 = *(int *)((longlong)param_1 + 0x1c);
  FUN_144716727(param_1[2],(int)param_1[3]);
  *(undefined4 *)(param_1 + 3) = 0;
  if ((iVar6 < 0) && (*(int *)((longlong)param_1 + 0x1c) != 0)) {
    FUN_1403b10bc(plVar7,0);
  }
  *param_1 = param_2;
  lVar4 = *(longlong *)(param_2 + 0x1c0);
  param_1[1] = lVar4;
  uVar5 = *(int *)(param_2 + 0x158) * 0x200 + *(int *)(param_2 + 0x15c);
  uVar9 = *(int *)(lVar4 + 0x1d0) * 0x200 + *(int *)(lVar4 + 0x1d4);
  FUN_140bfc200(plVar7,uVar5,1);
  if (0 < (int)uVar5) {
    lVar4 = *param_1;
    uVar8 = 0;
    do {
      lVar1 = *param_1;
      if ((longlong)uVar8 < (longlong)(*(int *)(lVar1 + 0x158) * 0x200 + *(int *)(lVar1 + 0x15c))) {
        uVar2 = uVar8 >> 9 & 0x7fffff;
        uVar3 = (uint)uVar8 & 0x1ff;
        if (((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar1 + 0x160) + uVar2 * 8) +
                                (ulonglong)uVar3 * 2) - 1U) < 0xfffe) &&
           (iVar6 = *(int *)(*(longlong *)(*(longlong *)(lVar4 + 0x1f8) + uVar2 * 8) +
                            (ulonglong)uVar3 * 4), 0 < iVar6)) {
          FUN_144a1a59e(uVar8 * 0x10 + *plVar7,iVar6,CONCAT71((uint7)(uint3)(uVar3 >> 8),1));
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar5);
  }
  if (0 < (int)uVar9) {
    uVar5 = 0;
    do {
      lVar4 = param_1[1];
      if (((int)uVar5 < *(int *)(lVar4 + 0x1d0) * 0x200 + *(int *)(lVar4 + 0x1d4)) &&
         ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)(lVar4 + 0x1d8) + (ulonglong)(uVar5 >> 9) * 8) +
                             (ulonglong)(uVar5 & 0x1ff) * 2) - 1U) < 0xfffe)) {
        FUN_1482e4933(&local_50,*param_1,uVar5);
        if (0 < (longlong)local_48) {
          lVar4 = 0;
          do {
            iVar6 = *(int *)(local_50 + 8 + lVar4);
            if (iVar6 != 0) {
              uVar3 = *(uint *)(local_50 + 4 + lVar4);
              plVar7 = (longlong *)((longlong)(int)uVar3 * 0x10 + param_1[2]);
              if (*(int *)(local_50 + lVar4) ==
                  *(int *)(*(longlong *)
                            (*(longlong *)(*param_1 + 0x148) + (ulonglong)(uVar3 >> 9) * 8) + 8 +
                          (ulonglong)((uVar3 & 0x1ff) << 4))) {
                iVar6 = iVar6 + -1;
              }
              else {
                iVar6 = (int)plVar7[1] - iVar6;
              }
              *(uint *)(*plVar7 + (longlong)iVar6 * 4) = uVar5;
            }
            lVar4 = lVar4 + 0xc;
          } while ((longlong)local_48 * 0xc != lVar4);
        }
        if (local_50 != 0) {
          FUN_1400020a8();
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar9);
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1482e4fc3 FUN_1482e4fc3 body=823 status=ok
// SIG undefined FUN_1482e4fc3(void)

longlong *
FUN_1482e4fc3(longlong *param_1,ulonglong param_2,longlong param_3,undefined8 param_4,
             longlong param_5,undefined8 param_6,char param_7)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  uint *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  longlong *local_110;
  undefined4 local_100;
  undefined4 uStack_fc;
  int iStack_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  int local_b0;
  int local_ac;
  longlong local_a8;
  undefined8 uStack_a0;
  uint local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_8c = (uint)param_2;
  local_a8 = 0;
  uStack_a0 = 0;
  if ((((int)local_8c < 0) ||
      (*(int *)(param_5 + 0x158) * 0x200 + *(int *)(param_5 + 0x15c) <= (int)local_8c)) ||
     (0xfffd < (ushort)(*(short *)(*(longlong *)
                                    (*(longlong *)(param_5 + 0x160) + (param_2 >> 9 & 0x7fffff) * 8)
                                  + (ulonglong)(local_8c & 0x1ff) * 2) - 1U))) {
    *param_1 = 0;
    param_1[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_138);
  }
  iVar1 = *(int *)(param_3 + 8) + 2;
  if (*(int *)(param_3 + 8) < -2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar1);
  }
  if (iVar1 != 0) {
    FUN_148309220(&local_a8);
  }
  local_88 = param_5;
  uStack_80 = &local_8c;
  FUN_14830a086(&local_88,&local_b0);
  uVar11 = uStack_a0;
  local_d8 = 0;
  iStack_d0 = local_b0;
  local_100 = 0;
  iStack_f8 = local_ac;
  lVar13 = (longlong)(int)(uint)uStack_a0;
  uVar10 = (uint)uStack_a0 + 1;
  uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar10);
  if (uStack_a0._4_4_ < uVar10) {
    FUN_1483079c6(&local_a8,uVar11 & 0xffffffff);
  }
  local_110 = &local_a8;
  *(undefined8 *)(local_a8 + 0x20 + lVar13 * 0x28) = local_b8;
  puVar2 = (undefined4 *)(local_a8 + 0x10 + lVar13 * 0x28);
  *puVar2 = local_c8;
  puVar2[1] = uStack_c4;
  puVar2[2] = uStack_c0;
  puVar2[3] = uStack_bc;
  puVar2 = (undefined4 *)(local_a8 + lVar13 * 0x28);
  *puVar2 = local_d8;
  puVar2[1] = uStack_d4;
  puVar2[2] = iStack_d0;
  puVar2[3] = uStack_cc;
  local_118 = param_6;
  FUN_14830a16e(&local_d8,&local_100,param_3,param_4);
  uVar11 = uStack_a0 & 0xffffffff;
  if ((*(int *)(local_a8 + (longlong)(int)((uint)uStack_a0 + -1) * 0x28) != 0) ||
     (*(int *)(local_a8 + (longlong)(int)((uint)uStack_a0 + -1) * 0x28 + 8) != local_ac)) {
    lVar13 = (longlong)(int)(uint)uStack_a0;
    uVar10 = (uint)uStack_a0 + 1;
    uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar10);
    if (uStack_a0._4_4_ < uVar10) {
      FUN_1483079c6(&local_a8);
      uVar10 = (uint)uStack_a0;
    }
    *(undefined8 *)(local_a8 + 0x20 + lVar13 * 0x28) = local_e0;
    puVar3 = (undefined8 *)(local_a8 + 0x10 + lVar13 * 0x28);
    *puVar3 = local_f0;
    puVar3[1] = uStack_e8;
    puVar2 = (undefined4 *)(local_a8 + lVar13 * 0x28);
    *puVar2 = local_100;
    puVar2[1] = uStack_fc;
    puVar2[2] = iStack_f8;
    puVar2[3] = uStack_f4;
    uVar11 = (ulonglong)uVar10;
  }
  if (((local_b0 !=
       *(int *)(*(longlong *)(*(longlong *)(param_5 + 0x148) + (ulonglong)(local_8c >> 9) * 8) +
               (ulonglong)((local_8c & 0x1ff) << 4))) != (bool)param_7) && (1 < (int)uVar11)) {
    lVar13 = uVar11 * 0x28;
    lVar12 = 0;
    do {
      lVar13 = lVar13 + -0x28;
      local_68 = *(undefined8 *)(local_a8 + 0x20 + lVar12);
      lVar5 = *(longlong *)(local_a8 + lVar12);
      puVar6 = (uint *)((longlong *)(local_a8 + lVar12))[1];
      puVar3 = (undefined8 *)(local_a8 + 0x10 + lVar12);
      local_78 = *puVar3;
      uStack_70 = puVar3[1];
      *(undefined8 *)(local_a8 + 0x20 + lVar12) = *(undefined8 *)(local_a8 + 0x20 + lVar13);
      uVar7 = *(undefined8 *)(local_a8 + lVar13);
      uVar8 = ((undefined8 *)(local_a8 + lVar13))[1];
      puVar3 = (undefined8 *)(local_a8 + 0x10 + lVar13);
      uVar9 = puVar3[1];
      puVar4 = (undefined8 *)(local_a8 + 0x10 + lVar12);
      *puVar4 = *puVar3;
      puVar4[1] = uVar9;
      *(undefined8 *)(local_a8 + lVar12) = uVar7;
      ((undefined8 *)(local_a8 + lVar12))[1] = uVar8;
      *(undefined8 *)(local_a8 + 0x20 + lVar13) = local_68;
      local_88._0_4_ = (undefined4)lVar5;
      local_88._4_4_ = (undefined4)((ulonglong)lVar5 >> 0x20);
      uStack_80._0_4_ = SUB84(puVar6,0);
      uStack_80._4_4_ = (undefined4)((ulonglong)puVar6 >> 0x20);
      puVar3 = (undefined8 *)(local_a8 + 0x10 + lVar13);
      *puVar3 = local_78;
      puVar3[1] = uStack_70;
      puVar2 = (undefined4 *)(local_a8 + lVar13);
      *puVar2 = (undefined4)local_88;
      puVar2[1] = local_88._4_4_;
      puVar2[2] = (undefined4)uStack_80;
      puVar2[3] = uStack_80._4_4_;
      lVar12 = lVar12 + 0x28;
      local_88 = lVar5;
      uStack_80 = puVar6;
    } while ((uVar11 >> 1) * 0x28 != lVar12);
  }
  *param_1 = local_a8;
  *(int *)(param_1 + 1) = (int)uVar11;
  *(uint *)((longlong)param_1 + 0xc) = uStack_a0._4_4_;
  if ((local_60 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482e52fc FUN_1482e52fc body=531 status=ok
// SIG undefined FUN_1482e52fc(void)

double * FUN_1482e52fc(double *param_1,double *param_2)

{
  double dVar1;
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
  double dVar12;
  double dVar13;
  
  dVar1 = *param_1;
  dVar2 = param_1[1];
  dVar3 = param_1[2];
  dVar4 = param_1[3];
  dVar5 = param_1[4];
  dVar6 = param_1[5];
  dVar7 = param_1[6];
  dVar8 = param_1[7];
  dVar9 = param_1[8];
  dVar13 = dVar9 * dVar5 - dVar6 * dVar8;
  dVar12 = dVar9 * dVar2 - dVar3 * dVar8;
  dVar11 = dVar6 * dVar2 - dVar3 * dVar5;
  dVar10 = 1.0 / (dVar7 * dVar11 + (dVar1 * dVar13 - dVar12 * dVar4));
  *param_2 = dVar10 * dVar13;
  param_2[1] = -dVar12 * dVar10;
  param_2[2] = dVar11 * dVar10;
  param_2[3] = -(dVar9 * dVar4 - dVar6 * dVar7) * dVar10;
  param_2[4] = (dVar9 * dVar1 - dVar3 * dVar7) * dVar10;
  param_2[5] = -(dVar6 * dVar1 - dVar3 * dVar4) * dVar10;
  param_2[6] = (dVar8 * dVar4 - dVar5 * dVar7) * dVar10;
  param_2[7] = -(dVar8 * dVar1 - dVar2 * dVar7) * dVar10;
  param_2[8] = (dVar5 * dVar1 - dVar2 * dVar4) * dVar10;
  return param_2;
}



// FUNCTION 1482e5510 FUN_1482e5510 body=206 status=ok
// SIG undefined FUN_1482e5510(void)

undefined8 *
FUN_1482e5510(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = &PTR_FUN_14ae72bc0;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = 0x3f800000;
  param_1[3] = 0;
  iVar1 = *(int *)(param_3 + 1);
  pvVar2 = (void *)*param_3;
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],pvVar2,(longlong)iVar1 << 2);
  }
  param_1[5] = 0;
  iVar1 = *(int *)(param_4 + 1);
  pvVar2 = (void *)*param_4;
  *(int *)(param_1 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 5,iVar1,0);
    memcpy((void *)param_1[5],pvVar2,(longlong)iVar1 << 2);
  }
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return param_1;
}



// FUNCTION 1482e55de FUN_1482e55de body=3445 status=ok
// SIG undefined FUN_1482e55de(void)

undefined1 FUN_1482e55de(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  longlong lVar6;
  double dVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  double *pdVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong *plVar18;
  uint uVar19;
  int iVar20;
  ulonglong uVar21;
  bool bVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  float fVar29;
  undefined1 auStack_1c8 [32];
  undefined1 *local_1a8;
  undefined1 local_191;
  longlong *local_190;
  ulonglong local_188;
  ulonglong local_180;
  float local_174;
  float local_170;
  undefined4 local_16c;
  undefined8 *local_168;
  undefined8 uStack_160;
  longlong local_158 [5];
  longlong local_130;
  double local_128 [5];
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  float afStack_c0 [2];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [8];
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_130 = *(longlong *)(param_1 + 8);
  uVar14 = param_1 + 0x18;
  uVar15 = (ulonglong)*(uint *)(param_1 + 0x20);
  dVar27 = 1.0;
  local_180 = uVar15;
  if (0 < *(int *)(*(longlong *)(local_130 + 0x208) + 0x28)) {
    plVar18 = (longlong *)**(longlong **)(*(longlong *)(local_130 + 0x208) + 0x20);
    iVar20 = 0;
    if (plVar18 != (longlong *)0x0) {
      dVar28 = 0.0;
      dVar7 = 1.0;
      dVar27 = 1.0;
      if (0 < (int)*(uint *)(param_1 + 0x20)) {
        lVar9 = *plVar18;
        uVar16 = 0;
        dVar27 = 0.0;
        local_190 = (longlong *)((ulonglong)local_190 & 0xffffffff00000000);
        local_188 = uVar14;
        do {
          lVar10 = uVar16 * 4;
          uVar16 = uVar16 + 1;
          lVar13 = *(longlong *)(param_1 + 8);
          uVar14 = 0;
          if (uVar16 != uVar15) {
            uVar14 = uVar16;
          }
          uVar19 = FUN_146c061e0(lVar13,*(undefined4 *)(*(longlong *)(param_1 + 0x18) + lVar10),
                                 *(undefined4 *)(*(longlong *)(param_1 + 0x18) + uVar14 * 4));
          if (uVar19 != 0xffffffff) {
            uVar14 = *(ulonglong *)
                      (*(longlong *)(*(longlong *)(lVar13 + 0x1c0) + (ulonglong)(uVar19 >> 9) * 8) +
                       8 + (ulonglong)((uVar19 & 0x1ff) << 4));
            uVar19 = (uint)uVar14;
            if ((-1 < (int)uVar19) &&
               ((int)uVar19 < *(int *)(lVar9 + 0x140) * 0x200 + *(int *)(lVar9 + 0x144))) {
              uVar21 = (ulonglong)((uint)(uVar14 >> 9) & 0x3fffff);
              uVar17 = (ulonglong)(uVar19 & 0x1ff);
              if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar9 + 0x148) + uVar21 * 8) +
                                     (ulonglong)(uVar19 & 0x1ff) * 2) - 1U) < 0xfffe) {
                lVar10 = *(longlong *)(lVar9 + 0x10);
                lVar13 = *(longlong *)(*(longlong *)(lVar9 + 0x130) + uVar21 * 8);
                uVar19 = *(uint *)(lVar13 + uVar17 * 0xc);
                lVar6 = *(longlong *)(lVar10 + (ulonglong)(uVar19 >> 9) * 8);
                uVar21 = (ulonglong)uVar19 & 0x1ff;
                local_128[2] = *(double *)(lVar6 + 0x10 + uVar21 * 0x18);
                pdVar12 = (double *)(lVar6 + uVar21 * 0x18);
                local_128[0] = *pdVar12;
                local_128[1] = pdVar12[1];
                uVar19 = *(uint *)(lVar13 + 4 + uVar17 * 0xc);
                lVar6 = *(longlong *)(lVar10 + (ulonglong)(uVar19 >> 9) * 8);
                uVar21 = (ulonglong)uVar19 & 0x1ff;
                uStack_100 = *(undefined8 *)(lVar6 + 0x10 + uVar21 * 0x18);
                puVar1 = (undefined8 *)(lVar6 + uVar21 * 0x18);
                local_128[3] = (double)*puVar1;
                local_128[4] = (double)puVar1[1];
                uVar19 = *(uint *)(lVar13 + 8 + uVar17 * 0xc);
                lVar10 = *(longlong *)(lVar10 + (ulonglong)(uVar19 >> 9) * 8);
                uVar21 = (ulonglong)uVar19 & 0x1ff;
                local_e8 = *(undefined8 *)(lVar10 + 0x10 + uVar21 * 0x18);
                puVar1 = (undefined8 *)(lVar10 + uVar21 * 0x18);
                local_f8 = *puVar1;
                uStack_f0 = puVar1[1];
                local_1a8 = local_a8;
                FUN_146c35244(plVar18,uVar14,&local_b8,&uStack_b0);
                lVar10 = 1;
                pdVar12 = local_128 + 2;
                do {
                  lVar13 = 0;
                  if (lVar10 != 3) {
                    lVar13 = lVar10;
                  }
                  fVar29 = *(float *)((longlong)&local_b8 + lVar13 * 8 + 4) -
                           afStack_c0[lVar10 * 2 + 1];
                  dVar23 = SQRT((local_128[lVar13 * 3 + 2] - *pdVar12) *
                                (local_128[lVar13 * 3 + 2] - *pdVar12) +
                                (local_128[lVar13 * 3] - pdVar12[-2]) *
                                (local_128[lVar13 * 3] - pdVar12[-2]) +
                                (local_128[lVar13 * 3 + 1] - pdVar12[-1]) *
                                (local_128[lVar13 * 3 + 1] - pdVar12[-1]));
                  dVar28 = 9.999999974752427e-07;
                  if (9.999999974752427e-07 <= dVar23) {
                    dVar28 = dVar23;
                  }
                  dVar27 = dVar27 + (double)SQRT((*(float *)(&local_b8 + lVar13) -
                                                 afStack_c0[lVar10 * 2]) *
                                                 (*(float *)(&local_b8 + lVar13) -
                                                 afStack_c0[lVar10 * 2]) + fVar29 * fVar29) / dVar28
                  ;
                  lVar10 = lVar10 + 1;
                  pdVar12 = pdVar12 + 3;
                } while (lVar10 != 4);
                local_190 = (longlong *)CONCAT44(local_190._4_4_,(int)local_190 + 3);
              }
            }
          }
        } while (uVar16 != uVar15);
        dVar23 = (double)(int)local_190;
        lVar9 = *plVar18;
        uVar14 = 0;
        dVar28 = 0.0;
        iVar20 = 0;
        do {
          lVar10 = uVar14 * 4;
          uVar14 = uVar14 + 1;
          lVar13 = *(longlong *)(param_1 + 8);
          uVar16 = 0;
          if (uVar14 != uVar15) {
            uVar16 = uVar14;
          }
          uVar19 = FUN_146c061e0(lVar13,*(undefined4 *)(*(longlong *)(param_1 + 0x28) + lVar10),
                                 *(undefined4 *)(*(longlong *)(param_1 + 0x28) + uVar16 * 4));
          if (uVar19 != 0xffffffff) {
            uVar16 = *(ulonglong *)
                      (*(longlong *)(*(longlong *)(lVar13 + 0x1c0) + (ulonglong)(uVar19 >> 9) * 8) +
                       8 + (ulonglong)((uVar19 & 0x1ff) << 4));
            uVar19 = (uint)uVar16;
            if ((-1 < (int)uVar19) &&
               ((int)uVar19 < *(int *)(lVar9 + 0x140) * 0x200 + *(int *)(lVar9 + 0x144))) {
              uVar21 = (ulonglong)((uint)(uVar16 >> 9) & 0x3fffff);
              uVar17 = (ulonglong)(uVar19 & 0x1ff);
              if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar9 + 0x148) + uVar21 * 8) +
                                     (ulonglong)(uVar19 & 0x1ff) * 2) - 1U) < 0xfffe) {
                lVar10 = *(longlong *)(lVar9 + 0x10);
                lVar13 = *(longlong *)(*(longlong *)(lVar9 + 0x130) + uVar21 * 8);
                uVar19 = *(uint *)(lVar13 + uVar17 * 0xc);
                lVar6 = *(longlong *)(lVar10 + (ulonglong)(uVar19 >> 9) * 8);
                uVar21 = (ulonglong)uVar19 & 0x1ff;
                local_128[2] = *(double *)(lVar6 + 0x10 + uVar21 * 0x18);
                pdVar12 = (double *)(lVar6 + uVar21 * 0x18);
                local_128[0] = *pdVar12;
                local_128[1] = pdVar12[1];
                uVar19 = *(uint *)(lVar13 + 4 + uVar17 * 0xc);
                lVar6 = *(longlong *)(lVar10 + (ulonglong)(uVar19 >> 9) * 8);
                uVar21 = (ulonglong)uVar19 & 0x1ff;
                uStack_100 = *(undefined8 *)(lVar6 + 0x10 + uVar21 * 0x18);
                puVar1 = (undefined8 *)(lVar6 + uVar21 * 0x18);
                local_128[3] = (double)*puVar1;
                local_128[4] = (double)puVar1[1];
                uVar19 = *(uint *)(lVar13 + 8 + uVar17 * 0xc);
                lVar10 = *(longlong *)(lVar10 + (ulonglong)(uVar19 >> 9) * 8);
                uVar21 = (ulonglong)uVar19 & 0x1ff;
                local_e8 = *(undefined8 *)(lVar10 + 0x10 + uVar21 * 0x18);
                puVar1 = (undefined8 *)(lVar10 + uVar21 * 0x18);
                local_f8 = *puVar1;
                uStack_f0 = puVar1[1];
                local_1a8 = local_a8;
                FUN_146c35244(plVar18,uVar16,&local_b8,&uStack_b0);
                lVar10 = 1;
                pdVar12 = local_128 + 2;
                do {
                  lVar13 = 0;
                  if (lVar10 != 3) {
                    lVar13 = lVar10;
                  }
                  fVar29 = *(float *)((longlong)&local_b8 + lVar13 * 8 + 4) -
                           afStack_c0[lVar10 * 2 + 1];
                  dVar25 = SQRT((local_128[lVar13 * 3 + 2] - *pdVar12) *
                                (local_128[lVar13 * 3 + 2] - *pdVar12) +
                                (local_128[lVar13 * 3] - pdVar12[-2]) *
                                (local_128[lVar13 * 3] - pdVar12[-2]) +
                                (local_128[lVar13 * 3 + 1] - pdVar12[-1]) *
                                (local_128[lVar13 * 3 + 1] - pdVar12[-1]));
                  dVar24 = 9.999999974752427e-07;
                  if (9.999999974752427e-07 <= dVar25) {
                    dVar24 = dVar25;
                  }
                  dVar28 = dVar28 + (double)SQRT((*(float *)(&local_b8 + lVar13) -
                                                 afStack_c0[lVar10 * 2]) *
                                                 (*(float *)(&local_b8 + lVar13) -
                                                 afStack_c0[lVar10 * 2]) + fVar29 * fVar29) / dVar24
                  ;
                  lVar10 = lVar10 + 1;
                  pdVar12 = pdVar12 + 3;
                } while (lVar10 != 4);
                iVar20 = iVar20 + 3;
              }
            }
          }
        } while (uVar14 != uVar15);
        dVar24 = 1.0;
        if ((int)local_190 != 0) {
          dVar24 = dVar27 / dVar23;
        }
        dVar27 = (double)(-(ulonglong)(dVar27 < 9.999999974752427e-07) & 0x3ff0000000000000 |
                         ~-(ulonglong)(dVar27 < 9.999999974752427e-07) & (ulonglong)dVar24);
        uVar14 = local_188;
      }
      if (iVar20 != 0) {
        dVar7 = dVar28 / (double)iVar20;
      }
      dVar28 = (double)(~-(ulonglong)(dVar28 < 9.999999974752427e-07) & (ulonglong)dVar7 |
                       (ulonglong)
                       ((uint)(-(ulonglong)(dVar28 < 9.999999974752427e-07) >> 0x20) & 0x3ff00000)
                       << 0x20);
      goto LAB_1482e567c;
    }
  }
  plVar18 = (longlong *)0x0;
  dVar28 = 1.0;
LAB_1482e567c:
  local_c8 = 0;
  afStack_c0[0] = 0.0;
  afStack_c0[1] = 0.0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_128[4] = 0.0;
  uStack_100 = 0;
  local_128[2] = 0.0;
  local_128[3] = 0.0;
  local_128[0] = 0.0;
  local_128[1] = 0.0;
  local_191 = FUN_146bc50be(&local_130,uVar14,param_1 + 0x28,local_128);
  if ((double *)(param_1 + 0x38) == local_128 + 4) {
    uVar19 = *(uint *)(param_1 + 0x40);
  }
  else {
    if (*(longlong *)(param_1 + 0x38) != 0) {
      FUN_1400020a8();
    }
    *(double *)(param_1 + 0x38) = local_128[4];
    local_128[4] = 0.0;
    uVar19 = (uint)uStack_100;
    *(uint *)(param_1 + 0x40) = (uint)uStack_100;
    *(undefined4 *)(param_1 + 0x44) = uStack_100._4_4_;
    uStack_100 = 0;
  }
  FUN_144a1a59e(param_1 + 0x68,uVar19,1);
  iVar2 = *(int *)(*(longlong *)(param_1 + 8) + 0x1b0);
  iVar20 = iVar2 + 1;
  *(int *)(*(longlong *)(param_1 + 8) + 0x1b0) = iVar20;
  iVar11 = *(int *)(param_1 + 0x60);
  *(uint *)(param_1 + 0x60) = iVar11 + 1U;
  if (*(uint *)(param_1 + 100) < iVar11 + 1U) {
    FUN_1446f48e2((longlong *)(param_1 + 0x58),iVar11);
  }
  *(int *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar11 * 4) = iVar2;
  local_188 = CONCAT44(local_188._4_4_,uVar19);
  if (0 < (int)uVar19) {
    local_190 = (longlong *)(param_1 + 0x48);
    uVar14 = 0;
    do {
      lVar9 = *(longlong *)(param_1 + 0x38);
      *(int *)(*(longlong *)(param_1 + 0x68) + uVar14 * 4) = iVar2;
      lVar10 = *(longlong *)(param_1 + 8);
      uVar3 = *(uint *)(lVar9 + uVar14 * 8);
      if (((-1 < (int)uVar3) &&
          ((int)uVar3 < *(int *)(lVar10 + 0x140) * 0x200 + *(int *)(lVar10 + 0x144))) &&
         ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)(lVar10 + 0x148) + (ulonglong)(uVar3 >> 9) * 8) +
                             (ulonglong)(uVar3 & 0x1ff) * 2) - 1U) < 0xfffe)) {
        iVar11 = *(int *)(param_1 + 0x50);
        *(uint *)(param_1 + 0x50) = iVar11 + 1U;
        if (*(uint *)(param_1 + 0x54) < iVar11 + 1U) {
          FUN_1446f48e2(local_190,iVar11);
        }
        uVar3 = *(uint *)(lVar9 + uVar14 * 8);
        *(uint *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar11 * 4) = uVar3;
        lVar10 = *(longlong *)(param_1 + 8);
        if (*(char *)(lVar10 + 0x1a8) == '\x01') {
          *(int *)(*(longlong *)(*(longlong *)(lVar10 + 0x198) + (ulonglong)(uVar3 >> 9) * 8) +
                  (ulonglong)(uVar3 & 0x1ff) * 4) = iVar2;
          iVar11 = *(int *)(lVar10 + 0x1b0);
          if (*(int *)(lVar10 + 0x1b0) < iVar20) {
            iVar11 = iVar20;
          }
          *(int *)(lVar10 + 0x1b0) = iVar11;
          lVar10 = *(longlong *)(param_1 + 8);
        }
      }
      uVar3 = *(uint *)(lVar9 + 4 + uVar14 * 8);
      if (((-1 < (int)uVar3) &&
          ((int)uVar3 < *(int *)(lVar10 + 0x140) * 0x200 + *(int *)(lVar10 + 0x144))) &&
         ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)(lVar10 + 0x148) + (ulonglong)(uVar3 >> 9) * 8) +
                             (ulonglong)(uVar3 & 0x1ff) * 2) - 1U) < 0xfffe)) {
        iVar11 = *(int *)(param_1 + 0x50);
        *(uint *)(param_1 + 0x50) = iVar11 + 1U;
        if (*(uint *)(param_1 + 0x54) < iVar11 + 1U) {
          FUN_1446f48e2(local_190,iVar11);
        }
        uVar3 = *(uint *)(lVar9 + 4 + uVar14 * 8);
        *(uint *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar11 * 4) = uVar3;
        lVar9 = *(longlong *)(param_1 + 8);
        if (*(char *)(lVar9 + 0x1a8) == '\x01') {
          *(int *)(*(longlong *)(*(longlong *)(lVar9 + 0x198) + (ulonglong)(uVar3 >> 9) * 8) +
                  (ulonglong)(uVar3 & 0x1ff) * 4) = iVar2;
          iVar11 = *(int *)(lVar9 + 0x1b0);
          if (*(int *)(lVar9 + 0x1b0) < iVar20) {
            iVar11 = iVar20;
          }
          *(int *)(lVar9 + 0x1b0) = iVar11;
        }
      }
      uVar14 = uVar14 + 1;
    } while (uVar19 != uVar14);
  }
  uVar14 = local_180;
  lVar9 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x208);
  if (lVar9 != 0) {
    bVar22 = true;
    if ((0 < *(int *)(lVar9 + 0x38)) && (**(longlong **)(lVar9 + 0x30) != 0)) {
      FUN_146c39de4(**(longlong **)(lVar9 + 0x30),param_1 + 0x48);
      bVar22 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x208) != 0;
    }
    if ((plVar18 != (longlong *)0x0) && (bVar22)) {
      iVar20 = (int)uVar14;
      local_b8 = 0;
      uStack_b0 = 0;
      uVar19 = iVar20 + 1;
      local_158[2] = 0;
      local_158[3] = 0;
      local_190 = plVar18;
      FUN_144a1a59e(&local_b8,uVar19,1);
      FUN_144a1a59e(local_158 + 2,uVar19,1);
      local_158[0] = 0;
      local_158[1] = 0;
      FUN_1400bd09c(local_158,uVar19,1);
      local_168 = (undefined8 *)0x0;
      uStack_160 = 0;
      FUN_1400bd09c(&local_168,uVar19);
      plVar18 = local_190;
      dVar7 = 0.0;
      dVar23 = 0.0;
      if (0 < iVar20) {
        dVar23 = 0.0;
        uVar14 = 1;
        dVar7 = 0.0;
        do {
          *(double *)(local_158[0] + -8 + uVar14 * 8) = dVar23;
          uVar3 = *(uint *)(*(longlong *)(param_1 + 0x28) + -4 + uVar14 * 4);
          lVar9 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
          lVar10 = *(longlong *)(lVar9 + (ulonglong)(uVar3 >> 9) * 8);
          uVar15 = (ulonglong)uVar3 & 0x1ff;
          uVar3 = *(uint *)(*(longlong *)(param_1 + 0x18) + -4 + uVar14 * 4);
          lVar9 = *(longlong *)(lVar9 + (ulonglong)(uVar3 >> 9) * 8);
          uVar16 = (ulonglong)uVar3 & 0x1ff;
          dVar24 = *(double *)(lVar10 + uVar15 * 0x18) - *(double *)(lVar9 + uVar16 * 0x18);
          dVar25 = *(double *)(lVar10 + 8 + uVar15 * 0x18) - *(double *)(lVar9 + 8 + uVar16 * 0x18);
          dVar26 = *(double *)(lVar10 + 0x10 + uVar15 * 0x18) -
                   *(double *)(lVar9 + 0x10 + uVar16 * 0x18);
          local_168[uVar14 - 1] = SQRT(dVar26 * dVar26 + dVar24 * dVar24 + dVar25 * dVar25);
          uVar3 = *(uint *)(*(longlong *)(param_1 + 0x18) + -4 + uVar14 * 4);
          uVar16 = (ulonglong)uVar3 & 0x1ff;
          uVar4 = *(uint *)(*(longlong *)(param_1 + 0x28) + -4 + uVar14 * 4);
          uVar21 = (ulonglong)uVar4 & 0x1ff;
          dVar7 = dVar7 + (double)local_168[uVar14 - 1];
          lVar9 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
          lVar10 = *(longlong *)(lVar9 + (ulonglong)(uVar3 >> 9) * 8);
          lVar13 = *(longlong *)(lVar9 + (ulonglong)(uVar4 >> 9) * 8);
          uVar15 = uVar14;
          if (uVar14 == local_180) {
            uVar15 = 0;
          }
          uVar3 = *(uint *)(*(longlong *)(param_1 + 0x18) + uVar15 * 4);
          lVar6 = *(longlong *)(lVar9 + (ulonglong)(uVar3 >> 9) * 8);
          uVar17 = (ulonglong)uVar3 & 0x1ff;
          uVar3 = *(uint *)(*(longlong *)(param_1 + 0x28) + uVar15 * 4);
          lVar9 = *(longlong *)(lVar9 + (ulonglong)(uVar3 >> 9) * 8);
          uVar15 = (ulonglong)uVar3 & 0x1ff;
          dVar24 = (*(double *)(lVar6 + 0x10 + uVar17 * 0x18) +
                   *(double *)(lVar9 + (uVar15 * 3 + 2) * 8)) * 0.5 -
                   (*(double *)(lVar10 + 0x10 + uVar16 * 0x18) +
                   *(double *)(lVar13 + 0x10 + uVar21 * 0x18)) * 0.5;
          dVar25 = (*(double *)(lVar6 + 8 + uVar17 * 0x18) +
                   *(double *)(lVar9 + (uVar15 * 3 + 1) * 8)) * 0.5 -
                   (*(double *)(lVar10 + 8 + uVar16 * 0x18) +
                   *(double *)(lVar13 + 8 + uVar21 * 0x18)) * 0.5;
          dVar26 = (*(double *)(lVar6 + uVar17 * 0x18) + *(double *)(lVar9 + uVar15 * 0x18)) * 0.5 -
                   (*(double *)(lVar10 + uVar16 * 0x18) + *(double *)(lVar13 + uVar21 * 0x18)) * 0.5
          ;
          dVar23 = SQRT(dVar24 * dVar24 + dVar26 * dVar26 + dVar25 * dVar25) + dVar23;
          bVar22 = uVar14 != local_180;
          uVar14 = uVar14 + 1;
        } while (bVar22);
      }
      *(double *)(local_158[0] + (longlong)iVar20 * 8) = dVar23;
      local_168[iVar20] = *local_168;
      iVar20 = (int)local_180;
      if (-1 < iVar20) {
        dVar27 = (dVar27 + dVar28) * 0.5;
        uVar14 = 0;
        do {
          fVar29 = (float)(*(double *)(local_158[0] + uVar14 * 8) * dVar27);
          local_170 = 0.0;
          local_174 = fVar29;
          uVar8 = FUN_146c2d0a4(plVar18,&local_174);
          *(undefined4 *)(local_b8 + uVar14 * 4) = uVar8;
          local_174 = fVar29;
          local_170 = (float)((dVar7 / (double)iVar20) * dVar27);
          uVar8 = FUN_146c2d0a4(plVar18,&local_174);
          *(undefined4 *)(local_158[2] + uVar14 * 4) = uVar8;
          uVar14 = uVar14 + 1;
        } while (uVar19 != uVar14);
      }
      if (0 < (int)local_188) {
        uVar15 = local_188 & 0xffffffff;
        uVar14 = 0;
        do {
          lVar9 = *(longlong *)(param_1 + 8);
          lVar10 = *(longlong *)(param_1 + 0x38);
          fVar29 = *(float *)(local_b8 + uVar14 * 4);
          fVar5 = *(float *)(local_158[2] + uVar14 * 4);
          uVar8 = *(undefined4 *)(local_158[2] + 4 + uVar14 * 4);
          uVar19 = *(uint *)(lVar10 + uVar14 * 8);
          if (((-1 < (int)uVar19) &&
              ((int)uVar19 < *(int *)(lVar9 + 0x140) * 0x200 + *(int *)(lVar9 + 0x144))) &&
             ((ushort)(*(short *)(*(longlong *)
                                   (*(longlong *)(lVar9 + 0x148) + (ulonglong)(uVar19 >> 9) * 8) +
                                 (ulonglong)(uVar19 & 0x1ff) * 2) - 1U) < 0xfffe)) {
            local_174 = *(float *)(local_b8 + 4 + uVar14 * 4);
            local_170 = fVar29;
            local_16c = uVar8;
            FUN_146c01486(local_190,*(undefined4 *)(lVar10 + uVar14 * 8),&local_174,
                          CONCAT71((uint7)(uint3)(uVar19 >> 0x11),1));
            lVar9 = *(longlong *)(param_1 + 8);
          }
          uVar19 = *(uint *)(lVar10 + 4 + uVar14 * 8);
          if (((-1 < (int)uVar19) &&
              ((int)uVar19 < *(int *)(lVar9 + 0x140) * 0x200 + *(int *)(lVar9 + 0x144))) &&
             ((ushort)(*(short *)(*(longlong *)
                                   (*(longlong *)(lVar9 + 0x148) + (ulonglong)(uVar19 >> 9) * 8) +
                                 (ulonglong)(uVar19 & 0x1ff) * 2) - 1U) < 0xfffe)) {
            local_174 = fVar29;
            local_170 = fVar5;
            local_16c = uVar8;
            FUN_146c01486(local_190,*(undefined4 *)(lVar10 + 4 + uVar14 * 8),&local_174,1);
          }
          uVar14 = uVar14 + 1;
        } while (uVar15 != uVar14);
      }
      if (local_168 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      if (local_158[0] != 0) {
        FUN_1400020a8();
      }
      if (local_158[2] != 0) {
        FUN_1400020a8();
      }
      if (local_b8 != 0) {
        FUN_1400020a8();
      }
    }
  }
  FUN_146bc8622(local_128);
  if ((local_a0 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return local_191;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482e6354 FUN_1482e6354 body=378 status=ok
// SIG undefined FUN_1482e6354(void)

void FUN_1482e6354(longlong param_1,undefined8 param_2,longlong param_3)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a0 = CONCAT44(local_a0._4_4_,1);
  *(undefined4 *)(param_1 + 0x38) = 1;
  FUN_146c8b436(param_1 + 0x40,&local_98);
  FUN_146c8b486(param_1 + 0x50,&local_88);
  FUN_146c81a14(&local_a0);
  if (0 < *(int *)(param_3 + 0x78)) {
    lVar6 = 0x48;
    uVar7 = 0;
    do {
      if (*(int *)(*(longlong *)(param_3 + 0x70) + lVar6) == -1) {
        local_78 = 0;
        uStack_70 = 0;
        local_88 = 0;
        uStack_80 = 0;
        local_98 = 0;
        uStack_90 = 0;
        local_68 = 0;
        local_a0 = param_2;
        FUN_146c5d418(&local_a0,*(longlong *)(param_3 + 0x70) + lVar6 + -0x28);
        FUN_1482e64d0(param_1,param_2,&local_a0);
        FUN_146bc7c1a(&local_a0);
      }
      else {
        FUN_1482e6748(param_1,param_2,param_3,uVar7 & 0xffffffff);
      }
      pcVar1 = *(char **)(param_1 + 0x20);
      if (pcVar1 != (char *)0x0) {
        if (*pcVar1 == '\0') {
          pcVar2 = *(code **)(pcVar1 + 0x70);
          plVar5 = (longlong *)(pcVar1 + 0x90);
          if (*(longlong **)(pcVar1 + 0x80) != (longlong *)0x0) {
            plVar5 = *(longlong **)(pcVar1 + 0x80);
          }
          uVar4 = (**(code **)(*plVar5 + 8))();
          cVar3 = (*pcVar2)(uVar4);
          *pcVar1 = cVar3;
          if (cVar3 == '\0') goto LAB_1482e6477;
        }
        *(undefined4 *)(param_1 + 0x38) = 2;
        goto LAB_1482e649f;
      }
LAB_1482e6477:
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 0x50;
    } while ((longlong)uVar7 < (longlong)*(int *)(param_3 + 0x78));
  }
  FUN_1482e6e3c(param_1,param_2);
LAB_1482e649f:
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482e64d0 FUN_1482e64d0 body=629 status=ok
// SIG undefined FUN_1482e64d0(void)

void FUN_1482e64d0(longlong param_1,longlong param_2,longlong param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  longlong local_130;
  int local_128;
  longlong local_120;
  int local_118;
  longlong local_110;
  uint local_108;
  uint local_104;
  longlong local_100;
  uint local_f8;
  uint local_f4;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if ((longlong)*(int *)(param_3 + 0x20) != 0) {
    lVar6 = 0;
    lVar7 = 0;
    do {
      uVar2 = *(uint *)(*(longlong *)(param_3 + 0x18) + lVar6);
      lVar7 = lVar7 + (ulonglong)
                      (*(int *)(*(longlong *)
                                 (*(longlong *)(param_2 + 0x1c0) + (ulonglong)(uVar2 >> 9) * 8) +
                                0xc + (ulonglong)((uVar2 & 0x1ff) << 4)) == -1);
      lVar6 = lVar6 + 4;
    } while ((longlong)*(int *)(param_3 + 0x20) * 4 != lVar6);
    if (lVar7 != 0) goto LAB_1482e6554;
  }
  memset(&local_130,0,0xe8);
  FUN_14054c6c4(&local_120,param_3 + 0x18);
  FUN_14054c6c4(&local_130,param_3 + 8);
  if (-1 < local_118) {
    if ((int)local_104 < local_118) {
      FUN_146be5458(&local_110);
    }
    if (local_118 != 0) {
      lVar6 = 0;
      do {
        uVar2 = local_108;
        uVar4 = *(undefined8 *)
                 (*(longlong *)
                   (*(longlong *)(param_2 + 0x1c0) +
                   (ulonglong)(*(uint *)(local_120 + lVar6) >> 9) * 8) + 8 +
                 (ulonglong)((*(uint *)(local_120 + lVar6) & 0x1ff) << 4));
        lVar7 = (longlong)(int)local_108;
        local_108 = local_108 + 1;
        if (local_104 < local_108) {
          FUN_146be54b8(&local_110,uVar2);
        }
        *(undefined8 *)(local_110 + lVar7 * 8) = uVar4;
        lVar6 = lVar6 + 4;
      } while ((longlong)local_118 * 4 != lVar6);
    }
    local_118 = local_128;
    if (-1 < local_128) {
      if ((int)local_f4 < local_128) {
        FUN_1447a8aa0(&local_100);
      }
      if (local_128 != 0) {
        lVar6 = 0;
        do {
          uVar2 = local_f8;
          lVar7 = *(longlong *)
                   (*(longlong *)(param_2 + 0x10) +
                   (ulonglong)(*(uint *)(local_130 + lVar6) >> 9) * 8);
          uVar5 = (ulonglong)(*(uint *)(local_130 + lVar6) & 0x1ff);
          local_138 = *(undefined8 *)(lVar7 + 0x10 + uVar5 * 0x18);
          puVar1 = (undefined4 *)(lVar7 + uVar5 * 0x18);
          local_148 = *puVar1;
          uStack_144 = puVar1[1];
          uStack_140 = puVar1[2];
          uStack_13c = puVar1[3];
          lVar7 = (longlong)(int)local_f8;
          local_f8 = local_f8 + 1;
          if (local_f4 < local_f8) {
            FUN_1403e3958(&local_100,uVar2);
          }
          *(undefined8 *)(local_100 + 0x10 + lVar7 * 0x18) = local_138;
          puVar1 = (undefined4 *)(local_100 + lVar7 * 0x18);
          *puVar1 = local_148;
          puVar1[1] = uStack_144;
          puVar1[2] = uStack_140;
          puVar1[3] = uStack_13c;
          lVar6 = lVar6 + 4;
        } while ((longlong)local_128 * 4 != lVar6);
      }
      iVar3 = *(int *)(param_1 + 0xd8);
      *(uint *)(param_1 + 0xd8) = iVar3 + 1U;
      if (*(uint *)(param_1 + 0xdc) < iVar3 + 1U) {
        FUN_14830bb92((longlong *)(param_1 + 0xd0),iVar3);
      }
      FUN_14830b7de((longlong)iVar3 * 0xe8 + *(longlong *)(param_1 + 0xd0),&local_130);
      FUN_1482eb450(&local_130);
LAB_1482e6554:
      if ((local_48 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(local_118);
}



// FUNCTION 1482e6748 FUN_1482e6748 body=1778 status=ok
// SIG undefined FUN_1482e6748(void)

void FUN_1482e6748(longlong param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  void *_Src;
  undefined8 uVar4;
  bool bVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  longlong lVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  undefined1 auStack_2a8 [36];
  int local_284;
  longlong *local_280;
  longlong local_278;
  longlong local_270;
  undefined4 local_268;
  int local_264;
  longlong *local_260;
  longlong local_258;
  longlong local_250;
  undefined4 local_248;
  int iStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  int local_198;
  undefined4 local_194;
  undefined4 local_190;
  void *local_188;
  int local_180;
  undefined4 local_17c;
  undefined4 *local_178;
  int *local_170;
  undefined1 local_164 [4];
  int local_160 [2];
  longlong local_158;
  undefined8 uStack_150;
  longlong local_148;
  undefined8 uStack_140;
  longlong local_138;
  undefined8 uStack_130;
  int local_128;
  undefined8 local_124;
  undefined1 auStack_11c [4];
  longlong local_118;
  undefined8 uStack_110;
  int local_108 [20];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  lVar11 = *(longlong *)(param_3 + 0x70);
  lVar18 = (longlong)param_4 * 0x50;
  lVar14 = (longlong)*(int *)(lVar11 + 0x28 + lVar18);
  local_284 = param_4;
  local_278 = param_1;
  local_270 = param_3;
  if (lVar14 != 0) {
    lVar16 = 0;
    lVar17 = 0;
    do {
      uVar10 = *(uint *)(*(longlong *)(lVar11 + 0x20 + lVar18) + lVar16);
      lVar17 = lVar17 + (ulonglong)
                        (*(int *)(*(longlong *)
                                   (*(longlong *)(param_2 + 0x1c0) + (ulonglong)(uVar10 >> 9) * 8) +
                                  0xc + (ulonglong)((uVar10 & 0x1ff) << 4)) == -1);
      lVar16 = lVar16 + 4;
    } while (lVar14 * 4 != lVar16);
    if (lVar17 != 0) goto LAB_1482e67ef;
  }
  lVar11 = lVar11 + lVar18;
  local_280 = (longlong *)(lVar11 + 0x20);
  local_264 = *(int *)(lVar11 + 0x4c);
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_124 = 0xffffffffffffffff;
  local_118 = 0;
  uStack_110 = 0;
  local_108[0] = -1;
  local_108[1] = -1;
  local_108[2] = 0;
  local_108[3] = 0;
  local_108[4] = 0;
  local_108[5] = 0;
  local_108[6] = 0;
  local_108[7] = 0;
  local_108[8] = 0;
  local_108[9] = 0;
  local_108[10] = 0;
  local_108[0xb] = 0;
  local_108[0xc] = 0;
  local_108[0xd] = 0;
  local_108[0xe] = 0;
  local_108[0xf] = 0;
  local_108[0x10] = 0;
  local_108[0x11] = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_268 = *(undefined4 *)(param_1 + 200);
  local_260 = (longlong *)(param_1 + 0xb0);
  local_250 = param_1 + 0x60;
  lVar14 = 0;
  iVar15 = *(int *)(lVar11 + 0x48);
  local_258 = lVar18;
  bVar8 = true;
  do {
    bVar5 = bVar8;
    lVar11 = *(longlong *)(local_270 + 0x50);
    lVar18 = (longlong)iVar15;
    local_190 = *(undefined4 *)(lVar11 + lVar18 * 0x18);
    local_188 = (void *)0x0;
    local_180 = *(int *)(lVar11 + 0x10 + lVar18 * 0x18);
    lVar16 = (longlong)local_180;
    _Src = *(void **)(lVar11 + 8 + lVar18 * 0x18);
    if (lVar16 == 0) {
      local_17c = 0;
    }
    else {
      FUN_144a06ca8(&local_188,local_180,0);
      memcpy(local_188,_Src,lVar16 << 2);
    }
    local_194 = local_190;
    uVar9 = FUN_146c0b51e(param_2);
    uVar7 = local_194;
    auStack_11c[lVar14] = uVar9;
    if (bVar5) {
      puVar12 = (undefined4 *)*local_280;
    }
    else {
      puVar12 = (undefined4 *)((longlong)((int)local_280[1] + -1) * 4 + *local_280);
    }
    uVar3 = *puVar12;
    local_198 = -1;
    lVar11 = FUN_1482e7e04(local_278,local_194);
    if (lVar11 == 0) {
      uStack_240 = 3;
      local_1f8 = 0;
      uStack_1f0 = 0;
      local_208 = 0;
      uStack_200 = 0;
      local_218 = 0;
      uStack_210 = 0;
      local_228 = 0;
      uStack_220 = 0;
      local_238 = 0;
      uStack_230 = 0;
      local_1e0 = 0;
      uStack_1d8 = 0;
      local_1d0 = 0xffffffffffffffff;
      local_1c8 = 0xffffffff;
      local_1b0 = 0;
      uStack_1a8 = 0;
      local_1c0 = 0;
      uStack_1b8 = 0;
      local_248 = uVar7;
      local_198 = *(int *)(local_278 + 0xb8);
      lVar11 = (longlong)local_198;
      *(uint *)(local_278 + 0xb8) = local_198 + 1U;
      iStack_244 = iVar15;
      if (*(uint *)(local_278 + 0xbc) < local_198 + 1U) {
        FUN_14830b26e(local_260,local_198);
      }
      plVar1 = local_260;
      FUN_1482e8ef4(lVar11 * 0xa8 + *local_260,&local_248);
      local_178 = &local_194;
      local_170 = &local_198;
      FUN_140263e2a(local_250,local_164,&local_178,0);
      lVar11 = (longlong)local_198 * 0xa8 + *plVar1;
      FUN_1482e7e90(&local_248);
    }
    iVar15 = *(int *)(lVar11 + 0x18);
    *(uint *)(lVar11 + 0x18) = iVar15 + 1U;
    if (*(uint *)(lVar11 + 0x1c) < iVar15 + 1U) {
      FUN_1446f48e2(lVar11 + 0x10,iVar15);
    }
    *(undefined4 *)(*(longlong *)(lVar11 + 0x10) + (longlong)iVar15 * 4) = uVar3;
    iVar15 = *(int *)(lVar11 + 0x28);
    *(uint *)(lVar11 + 0x28) = iVar15 + 1U;
    if (*(uint *)(lVar11 + 0x2c) < iVar15 + 1U) {
      FUN_1446f48e2(lVar11 + 0x20,iVar15);
    }
    *(int *)(*(longlong *)(lVar11 + 0x20) + (longlong)iVar15 * 4) = local_284;
    iVar15 = *(int *)(lVar11 + 0x38);
    *(uint *)(lVar11 + 0x38) = iVar15 + 1U;
    if (*(uint *)(lVar11 + 0x3c) < iVar15 + 1U) {
      FUN_1446f48e2((longlong *)(lVar11 + 0x30),iVar15);
    }
    *(undefined4 *)(*(longlong *)(lVar11 + 0x30) + (longlong)iVar15 * 4) = local_268;
    local_108[lVar14] = local_198;
    if (local_188 != (void *)0x0) {
      FUN_1400020a8();
    }
    uVar6 = uStack_140;
    lVar11 = local_258;
    lVar14 = 1;
    iVar15 = local_264;
    bVar8 = false;
  } while (bVar5);
  uVar10 = *(uint *)(local_280 + 1);
  if ((longlong)(int)uVar10 != 0) {
    iVar15 = (int)uStack_140;
    lVar14 = (longlong)(int)uStack_140;
    uStack_140 = CONCAT44(uStack_140._4_4_,(int)uStack_140 + uVar10);
    if ((uint)(uStack_140._4_4_ - iVar15) < uVar10) {
      FUN_1446f48e2(&local_148,uVar6 & 0xffffffff);
    }
    memcpy((void *)(lVar14 * 4 + local_148),(void *)*local_280,(longlong)(int)uVar10 << 2);
  }
  uVar6 = uStack_150;
  lVar14 = *(longlong *)(local_270 + 0x70);
  uVar10 = *(uint *)(lVar14 + 0x18 + lVar11);
  if ((longlong)(int)uVar10 != 0) {
    iVar15 = (int)uStack_150;
    lVar18 = (longlong)(int)uStack_150;
    uStack_150 = CONCAT44(uStack_150._4_4_,(int)uStack_150 + uVar10);
    if ((uint)(uStack_150._4_4_ - iVar15) < uVar10) {
      FUN_1446f48e2(&local_158,uVar6 & 0xffffffff);
    }
    memcpy((void *)(lVar18 * 4 + local_158),*(void **)(lVar14 + lVar11 + 0x10),
           (longlong)(int)uVar10 << 2);
    lVar14 = *(longlong *)(local_270 + 0x70);
  }
  local_128 = local_284;
  local_124 = *(undefined8 *)(lVar14 + lVar11);
  uVar6 = uStack_140;
  if (-1 < (int)uStack_140) {
    if ((int)uStack_130._4_4_ < (int)uStack_140) {
      FUN_146be5458(&local_138);
    }
    lVar11 = local_148;
    if ((int)uStack_140 != 0) {
      lVar14 = (longlong)(int)uStack_140;
      lVar18 = 0;
      do {
        uVar6 = uStack_130;
        uVar4 = *(undefined8 *)
                 (*(longlong *)
                   (*(longlong *)(param_2 + 0x1c0) +
                   (ulonglong)(*(uint *)(lVar11 + lVar18) >> 9) * 8) + 8 +
                 (ulonglong)((*(uint *)(lVar11 + lVar18) & 0x1ff) << 4));
        lVar16 = (longlong)(int)uStack_130;
        uVar10 = (int)uStack_130 + 1;
        uStack_130 = CONCAT44(uStack_130._4_4_,uVar10);
        if (uStack_130._4_4_ < uVar10) {
          FUN_146be54b8(&local_138,uVar6 & 0xffffffff);
        }
        *(undefined8 *)(local_138 + lVar16 * 8) = uVar4;
        lVar18 = lVar18 + 4;
      } while (lVar14 * 4 != lVar18);
    }
    uVar6 = uStack_150;
    if (-1 < (int)uStack_150) {
      if ((int)uStack_110._4_4_ < (int)uStack_150) {
        FUN_1447a8aa0(&local_118);
      }
      lVar11 = local_158;
      if ((int)uStack_150 != 0) {
        lVar14 = (longlong)(int)uStack_150;
        lVar18 = 0;
        do {
          uVar6 = uStack_110;
          lVar16 = *(longlong *)
                    (*(longlong *)(param_2 + 0x10) +
                    (ulonglong)(*(uint *)(lVar11 + lVar18) >> 9) * 8);
          uVar13 = (ulonglong)(*(uint *)(lVar11 + lVar18) & 0x1ff);
          local_238 = *(undefined8 *)(lVar16 + 0x10 + uVar13 * 0x18);
          puVar12 = (undefined4 *)(lVar16 + uVar13 * 0x18);
          local_248 = *puVar12;
          iStack_244 = puVar12[1];
          uStack_240 = puVar12[2];
          uStack_23c = puVar12[3];
          lVar16 = (longlong)(int)uStack_110;
          uVar10 = (int)uStack_110 + 1;
          uStack_110 = CONCAT44(uStack_110._4_4_,uVar10);
          if (uStack_110._4_4_ < uVar10) {
            FUN_1403e3958(&local_118,uVar6 & 0xffffffff);
          }
          *(undefined8 *)(local_118 + 0x10 + lVar16 * 0x18) = local_238;
          puVar2 = (undefined8 *)(local_118 + lVar16 * 0x18);
          *puVar2 = CONCAT44(iStack_244,local_248);
          puVar2[1] = CONCAT44(uStack_23c,uStack_240);
          lVar18 = lVar18 + 4;
        } while (lVar14 * 4 != lVar18);
      }
      plVar1 = (longlong *)(local_278 + 0xc0);
      local_160[0] = *(int *)(local_278 + 200);
      lVar11 = (longlong)local_160[0];
      *(uint *)(local_278 + 200) = local_160[0] + 1U;
      if (*(uint *)(local_278 + 0xcc) < local_160[0] + 1U) {
        FUN_14830b5d2(plVar1,local_160[0]);
      }
      FUN_14830b302(lVar11 * 0x100 + *plVar1,local_160);
      FUN_1482e7f38(local_160);
LAB_1482e67ef:
      if ((local_60 ^ (ulonglong)auStack_2a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar6 & 0xffffffff);
}



// FUNCTION 1482e6e3c FUN_1482e6e3c body=218 status=ok
// SIG undefined FUN_1482e6e3c(void)

void FUN_1482e6e3c(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  if ((longlong)*(int *)(param_1 + 0xb8) != 0) {
    lVar6 = *(longlong *)(param_1 + 0xb0);
    lVar7 = (longlong)*(int *)(param_1 + 0xb8) * 0xa8;
    do {
      FUN_1482e919e(param_2,lVar6);
      pcVar1 = *(char **)(param_1 + 0x20);
      if (pcVar1 != (char *)0x0) {
        if (*pcVar1 != '\0') {
LAB_1482e6f0d:
          *(undefined4 *)(param_1 + 0x38) = 2;
          return;
        }
        pcVar2 = *(code **)(pcVar1 + 0x70);
        plVar5 = (longlong *)(pcVar1 + 0x90);
        if (*(longlong **)(pcVar1 + 0x80) != (longlong *)0x0) {
          plVar5 = *(longlong **)(pcVar1 + 0x80);
        }
        uVar4 = (**(code **)(*plVar5 + 8))();
        cVar3 = (*pcVar2)(uVar4);
        *pcVar1 = cVar3;
        if (cVar3 != '\0') goto LAB_1482e6f0d;
      }
      lVar6 = lVar6 + 0xa8;
      lVar7 = lVar7 + -0xa8;
    } while (lVar7 != 0);
    if ((longlong)*(int *)(param_1 + 0xb8) != 0) {
      lVar6 = *(longlong *)(param_1 + 0xb0);
      lVar7 = (longlong)*(int *)(param_1 + 0xb8) * 0xa8;
      do {
        FUN_1482e931e(param_1,param_2,lVar6);
        lVar6 = lVar6 + 0xa8;
        lVar7 = lVar7 + -0xa8;
      } while (lVar7 != 0);
    }
  }
  return;
}



// FUNCTION 1482e6f16 FUN_1482e6f16 body=388 status=ok
// SIG undefined FUN_1482e6f16(void)

void FUN_1482e6f16(longlong param_1,undefined8 param_2,longlong param_3,longlong *param_4)

{
  longlong lVar1;
  char *pcVar2;
  code *pcVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a0 = CONCAT44(local_a0._4_4_,1);
  *(undefined4 *)(param_1 + 0x38) = 1;
  FUN_146c8b436(param_1 + 0x40,&local_98);
  FUN_146c8b486(param_1 + 0x50,&local_88);
  FUN_146c81a14(&local_a0);
  lVar4 = param_4[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar1 = *param_4;
    lVar9 = 0;
    do {
      lVar7 = (longlong)*(int *)(lVar1 + lVar9) * 0x50;
      if (*(int *)(*(longlong *)(param_3 + 0x70) + 0x48 + lVar7) == -1) {
        local_78 = 0;
        uStack_70 = 0;
        local_88 = 0;
        uStack_80 = 0;
        local_98 = 0;
        uStack_90 = 0;
        local_68 = 0;
        local_a0 = param_2;
        FUN_146c5d418(&local_a0,*(longlong *)(param_3 + 0x70) + lVar7 + 0x20);
        FUN_1482e64d0(param_1,param_2,&local_a0);
        FUN_146bc7c1a(&local_a0);
      }
      else {
        FUN_1482e6748(param_1,param_2,param_3);
      }
      pcVar2 = *(char **)(param_1 + 0x20);
      if (pcVar2 != (char *)0x0) {
        if (*pcVar2 == '\0') {
          pcVar3 = *(code **)(pcVar2 + 0x70);
          plVar8 = (longlong *)(pcVar2 + 0x90);
          if (*(longlong **)(pcVar2 + 0x80) != (longlong *)0x0) {
            plVar8 = *(longlong **)(pcVar2 + 0x80);
          }
          uVar6 = (**(code **)(*plVar8 + 8))();
          cVar5 = (*pcVar3)(uVar6);
          *pcVar2 = cVar5;
          if (cVar5 == '\0') goto LAB_1482e704a;
        }
        *(undefined4 *)(param_1 + 0x38) = 2;
        goto LAB_1482e706b;
      }
LAB_1482e704a:
      lVar9 = lVar9 + 4;
    } while ((longlong)(int)lVar4 * 4 != lVar9);
  }
  FUN_1482e6e3c(param_1,param_2);
LAB_1482e706b:
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482e709c FUN_1482e709c body=3429 status=ok
// SIG undefined FUN_1482e709c(void)

void FUN_1482e709c(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  undefined4 uVar1;
  char *pcVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  int iVar14;
  longlong *plVar15;
  undefined1 *puVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  bool bVar24;
  undefined1 auStack_3c8 [32];
  undefined8 local_3a8;
  ulonglong local_3a0;
  longlong *local_398;
  longlong local_390;
  ulonglong local_388;
  uint local_37c;
  undefined4 local_378;
  undefined4 local_374;
  longlong *local_370;
  longlong local_368;
  longlong local_360;
  undefined1 local_358 [8];
  undefined8 uStack_350;
  longlong local_348;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined4 local_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  int local_2b0;
  undefined4 local_2ac;
  longlong local_2a8;
  undefined8 uStack_2a0;
  longlong local_298;
  undefined8 uStack_290;
  longlong *local_280;
  longlong *local_278;
  longlong local_270;
  longlong *local_268;
  longlong *local_260;
  longlong *local_258;
  undefined8 local_250;
  longlong local_248;
  undefined8 uStack_240;
  longlong local_238;
  undefined8 uStack_230;
  undefined8 local_220;
  int *local_218;
  undefined1 local_20c [4];
  longlong *local_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 local_1e0;
  undefined7 uStack_1df;
  uint uStack_1d8;
  uint uStack_1d4;
  uint uStack_1d0;
  undefined8 local_1cc;
  undefined1 auStack_1c4 [4];
  longlong local_1c0;
  undefined8 uStack_1b8;
  int local_1b0 [20];
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  longlong local_108 [2];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  uint local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  longlong local_c8;
  undefined4 local_c0;
  longlong local_b8 [4];
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  undefined1 local_80 [8];
  undefined1 *local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_3c8;
  uStack_1f0 = 0;
  uStack_1e8 = (undefined1 *)0x0;
  uStack_200 = (undefined8 *)0x0;
  uStack_1f8 = (undefined1 *)0x0;
  local_208 = (longlong *)CONCAT44(local_208._4_4_,1);
  *(undefined4 *)(param_1 + 0x38) = 1;
  local_398 = param_4;
  FUN_146c8b436(param_1 + 0x40,&uStack_200);
  local_390 = param_1;
  FUN_146c8b486(param_1 + 0x50,&uStack_1f0);
  FUN_146c81a14(&local_208);
  local_98 = 0;
  local_90 = 0;
  local_b8[0] = 0;
  local_b8[1] = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = (undefined1 *)0x0;
  local_70 = 0;
  local_238 = 0;
  uStack_230 = 0;
  bVar24 = true;
  FUN_1401211f6(&local_238,(int)param_3[1]);
  local_e8 = 0;
  local_e0 = 0;
  local_108[0] = 0;
  local_108[1] = 0;
  local_dc = 0xffffffff00000080;
  local_d4 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_220 = (undefined4 *)((ulonglong)local_220._4_4_ << 0x20);
  local_3a0 = 0;
  if (0 < (int)param_3[1]) {
    iVar9 = 0;
    do {
      uVar8 = *(uint *)(*param_3 + (longlong)iVar9 * 4);
      lVar17 = *(longlong *)(*(longlong *)(param_2 + 0x1c0) + (ulonglong)(uVar8 >> 9) * 8);
      uVar8 = uVar8 & 0x1ff;
      if (*(int *)(lVar17 + 0xc + (ulonglong)(uVar8 << 4)) == -1) {
        *(undefined1 *)(local_238 + iVar9) = 1;
      }
      else {
        local_358 = *(undefined1 (*) [8])(lVar17 + (ulonglong)(uVar8 << 4));
        local_208 = (longlong *)local_358;
        uStack_200 = &local_220;
        FUN_1406b2a14(local_b8,&local_280,&local_208,0);
        local_208 = (longlong *)(local_358 + 4);
        uStack_200 = &local_220;
        FUN_1406b2a14(local_b8,&local_280,&local_208);
        FUN_1447cbafe(local_108,&local_208,local_358);
        FUN_1447cbafe(local_108,&local_208);
      }
      iVar9 = (int)local_220 + 1;
      local_220 = (undefined4 *)CONCAT44(local_220._4_4_,iVar9);
    } while (iVar9 < (int)param_3[1]);
    bVar24 = local_e0 == 0;
  }
  local_280 = &local_238;
  local_258 = &local_248;
  local_248 = 0;
  uStack_240 = 0;
  local_268 = local_398;
  local_260 = local_b8;
  local_250 = 0xfffffffeffffffff;
  local_358 = (undefined1  [8])0x100000000;
  local_348 = 0xffffffff;
  uStack_340 = 0;
  uStack_350 = local_f8;
  local_278 = param_3;
  local_270 = param_2;
  if (!bVar24) {
    FUN_1449c0562(local_358);
    local_3a0 = (ulonglong)local_e0;
  }
  uStack_1f0 = local_348;
  lVar17 = uStack_1f0;
  uStack_1e8 = (undefined1 *)CONCAT44(uStack_33c,uStack_340);
  uStack_200 = (undefined8 *)local_358;
  uStack_1f8 = uStack_350;
  uStack_1f0._4_4_ = (int)((ulonglong)local_348 >> 0x20);
  local_208 = local_108;
  if ((uStack_1f0._4_4_ != (int)local_3a0) || (uStack_350 != local_f8)) {
    iVar9 = uStack_1f0._4_4_;
    uStack_1f0 = lVar17;
    do {
      uVar8 = *(uint *)(*local_208 + (longlong)iVar9 * 0xc);
      iVar9 = FUN_1406b2b90(local_b8,uVar8);
      local_358._0_4_ = uVar8;
      cVar7 = (*(code *)*local_398)(local_398[1],local_358);
      if (((iVar9 != 2) || (cVar7 != '\0')) && (local_70 != 0)) {
        puVar16 = local_78;
        if (local_78 == (undefined1 *)0x0) {
          puVar16 = local_80;
        }
        iVar9 = *(int *)(puVar16 + (longlong)(int)(local_70 - 1U & uVar8) * 4);
        while (iVar14 = iVar9, iVar14 != -1) {
          iVar9 = *(int *)(local_b8[0] + 8 + (longlong)iVar14 * 0x10);
          lVar17 = local_b8[0];
          if (*(uint *)(local_b8[0] + (longlong)iVar14 * 0x10) == uVar8) {
            do {
              if (*(char *)(local_238 + *(int *)(lVar17 + 4 + (longlong)iVar14 * 0x10)) == '\0') {
                FUN_143aff82a(&local_280,uVar8);
                lVar17 = local_b8[0];
              }
              do {
                iVar14 = iVar9;
                if (iVar14 == -1) goto LAB_1482e7ced;
                iVar9 = *(int *)(lVar17 + 8 + (longlong)iVar14 * 0x10);
              } while (*(uint *)(lVar17 + (longlong)iVar14 * 0x10) != uVar8);
            } while( true );
          }
        }
      }
LAB_1482e7ced:
      uStack_1f0 = CONCAT44(uStack_1f0._4_4_,(uint)uStack_1f0 & ~uStack_200._4_4_);
      FUN_1449c0562(&uStack_200);
      iVar9 = uStack_1f0._4_4_;
      lVar17 = uStack_1f0;
    } while (local_208 != local_108 ||
             (uStack_1f8 != local_f8 || uStack_1f0._4_4_ != (int)local_3a0));
  }
  uStack_1f0 = lVar17;
  if (0 < (int)uStack_230) {
    lVar17 = 0;
    iVar9 = (int)uStack_230;
    do {
      if (*(char *)(local_238 + lVar17) == '\0') {
        FUN_143aff82a(&local_280);
        iVar9 = (int)uStack_230;
      }
      lVar17 = lVar17 + 1;
    } while (lVar17 < iVar9);
  }
  local_298 = 0;
  uStack_290 = 0;
  local_2a8 = 0;
  uStack_2a0 = 0;
  lVar17 = local_390;
  if (0 < (int)(uint)uStack_240) {
    local_370 = (longlong *)(local_390 + 0xc0);
    local_398 = (longlong *)(local_390 + 0xb0);
    local_360 = local_390 + 0x60;
    uVar8 = 0;
    local_368 = param_2;
    do {
      uVar22 = (ulonglong)uVar8;
      local_37c = uVar8 + 1;
      uVar10 = (uint)uStack_240;
      if ((int)(uint)uStack_240 <= (int)local_37c) {
        uVar10 = local_37c;
      }
      uVar23 = (ulonglong)(uVar10 - uVar8);
      uVar21 = 0;
      do {
        if (*(int *)(local_248 + uVar22 * 8 + 4 + uVar21 * 8) < 0) {
          uVar10 = uVar8 + (int)uVar21;
          uVar23 = uVar21 & 0xffffffff;
          break;
        }
        uVar21 = uVar21 + 1;
      } while ((uVar8 - uVar10) + (int)uVar21 != 0);
      uVar21 = (ulonglong)uVar10;
      local_388 = uVar23;
      if (*(int *)(local_248 + 4 + uVar21 * 8) == -2) {
        FUN_144a9ff88(&local_298,uVar23);
        FUN_144a9ff88(&local_2a8,uVar23);
        if (uVar8 < uVar10) {
          iVar9 = uVar10 - uVar8;
          do {
            lVar19 = local_248;
            uVar23 = uStack_290;
            lVar18 = (longlong)(int)uStack_290;
            uVar8 = (int)uStack_290 + 1;
            uStack_290 = CONCAT44(uStack_290._4_4_,uVar8);
            if (uStack_290._4_4_ < uVar8) {
              FUN_1446f48e2(&local_298,uVar23 & 0xffffffff);
            }
            lVar20 = local_248;
            uVar23 = uStack_2a0;
            *(undefined4 *)(local_298 + lVar18 * 4) = *(undefined4 *)(lVar19 + 4 + uVar22 * 8);
            lVar19 = (longlong)(int)uStack_2a0;
            uVar8 = (int)uStack_2a0 + 1;
            uStack_2a0 = CONCAT44(uStack_2a0._4_4_,uVar8);
            if (uStack_2a0._4_4_ < uVar8) {
              FUN_1446f48e2(&local_2a8,uVar23 & 0xffffffff);
            }
            *(undefined4 *)(local_2a8 + lVar19 * 4) = *(undefined4 *)(lVar20 + uVar22 * 8);
            uVar22 = uVar22 + 1;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
        }
        uStack_1d8 = 0;
        uStack_1d4 = 0;
        uStack_1d0 = uStack_1d0 & 0xffffff00;
        uStack_1e8 = (undefined1 *)0x0;
        local_1e0 = 0;
        uStack_1df = 0;
        uStack_1f8 = (undefined1 *)0x0;
        uStack_1f0 = 0;
        local_208 = (longlong *)0x0;
        uStack_200 = (undefined8 *)0x0;
        local_3a8 = 0;
        FUN_146c5d3ce(&local_208,param_2,&local_2a8,&local_298);
        FUN_1482e64d0(lVar17,param_2);
        FUN_146bc7c1a(&local_208);
      }
      else {
        local_374 = *(undefined4 *)(local_248 + uVar22 * 8);
        local_378 = *(undefined4 *)(local_248 + uVar21 * 8);
        local_1e0 = 0;
        uStack_1df = 0;
        uStack_1d8 = 0;
        uStack_1d4 = 0;
        uStack_1f0 = 0;
        uStack_1e8 = (undefined1 *)0x0;
        uStack_200 = (undefined8 *)0x0;
        uStack_1f8 = (undefined1 *)0x0;
        local_1cc = 0xffffffffffffffff;
        local_1c0 = 0;
        uStack_1b8 = 0;
        local_1b0[0] = -1;
        local_1b0[1] = -1;
        local_1b0[0xe] = 0;
        local_1b0[0xf] = 0;
        local_1b0[0x10] = 0;
        local_1b0[0x11] = 0;
        local_1b0[10] = 0;
        local_1b0[0xb] = 0;
        local_1b0[0xc] = 0;
        local_1b0[0xd] = 0;
        local_1b0[6] = 0;
        local_1b0[7] = 0;
        local_1b0[8] = 0;
        local_1b0[9] = 0;
        local_1b0[2] = 0;
        local_1b0[3] = 0;
        local_1b0[4] = 0;
        local_1b0[5] = 0;
        local_120 = 0;
        uStack_118 = 0;
        local_130 = 0;
        uStack_128 = 0;
        local_140 = 0;
        uStack_138 = 0;
        local_150 = 0;
        uStack_148 = 0;
        local_160 = 0;
        uStack_158 = 0;
        local_110 = 0;
        local_3a0 = CONCAT44(local_3a0._4_4_,*(undefined4 *)(lVar17 + 200));
        puVar12 = &local_374;
        lVar17 = 0;
        bVar24 = true;
        do {
          bVar4 = bVar24;
          local_2ac = *puVar12;
          uVar6 = FUN_146c0b51e(param_2);
          uVar5 = local_2ac;
          lVar19 = local_248 + uVar21 * 8 + -8;
          if (bVar4) {
            lVar19 = local_248 + uVar22 * 8;
          }
          auStack_1c4[lVar17] = uVar6;
          uVar1 = *(undefined4 *)(lVar19 + 4);
          local_2b0 = -1;
          lVar19 = FUN_1482e7e04(local_390,local_2ac);
          if (lVar19 == 0) {
            uStack_350 = (undefined1 *)CONCAT44(uStack_350._4_4_,3);
            local_308 = 0;
            uStack_300 = 0;
            local_318 = 0;
            uStack_310 = 0;
            local_328 = 0;
            uStack_320 = 0;
            local_338 = 0;
            uStack_330 = 0;
            local_348 = 0;
            uStack_340 = 0;
            uStack_33c = 0;
            local_2f0 = 0;
            uStack_2e8 = 0;
            local_2e0 = 0xffffffffffffffff;
            local_2d8 = 0xffffffff;
            local_2c0 = 0;
            uStack_2b8 = 0;
            local_2d0 = 0;
            uStack_2c8 = 0;
            local_358._4_4_ = 0xffffffff;
            local_358._0_4_ = uVar5;
            local_2b0 = *(int *)(local_390 + 0xb8);
            lVar19 = (longlong)local_2b0;
            *(uint *)(local_390 + 0xb8) = local_2b0 + 1U;
            if (*(uint *)(local_390 + 0xbc) < local_2b0 + 1U) {
              FUN_14830b26e(local_398,local_2b0);
            }
            plVar15 = local_398;
            FUN_1482e8ef4(lVar19 * 0xa8 + *local_398,local_358);
            local_220 = &local_2ac;
            local_218 = &local_2b0;
            FUN_140263e2a(local_360,local_20c,&local_220,0);
            lVar19 = (longlong)local_2b0 * 0xa8 + *plVar15;
            FUN_1482e7e90(local_358);
            param_2 = local_368;
          }
          iVar9 = *(int *)(lVar19 + 0x18);
          *(uint *)(lVar19 + 0x18) = iVar9 + 1U;
          if (*(uint *)(lVar19 + 0x1c) < iVar9 + 1U) {
            FUN_1446f48e2(lVar19 + 0x10,iVar9);
          }
          *(undefined4 *)(*(longlong *)(lVar19 + 0x10) + (longlong)iVar9 * 4) = uVar1;
          iVar9 = *(int *)(lVar19 + 0x28);
          *(uint *)(lVar19 + 0x28) = iVar9 + 1U;
          if (*(uint *)(lVar19 + 0x2c) < iVar9 + 1U) {
            FUN_1446f48e2(lVar19 + 0x20,iVar9);
          }
          *(undefined4 *)(*(longlong *)(lVar19 + 0x20) + (longlong)iVar9 * 4) = 0xffffffff;
          iVar9 = *(int *)(lVar19 + 0x38);
          *(uint *)(lVar19 + 0x38) = iVar9 + 1U;
          if (*(uint *)(lVar19 + 0x3c) < iVar9 + 1U) {
            FUN_1446f48e2((longlong *)(lVar19 + 0x30),iVar9);
          }
          *(int *)(*(longlong *)(lVar19 + 0x30) + (longlong)iVar9 * 4) = (int)local_3a0;
          local_1b0[lVar17] = local_2b0;
          lVar17 = 1;
          puVar12 = &local_378;
          bVar24 = false;
        } while (bVar4);
        FUN_144a9ff88(&uStack_1f0,local_388);
        if (uVar8 < uVar10) {
          iVar9 = uVar10 - uVar8;
          uVar23 = uVar22;
          do {
            puVar16 = uStack_1e8;
            lVar17 = local_248;
            lVar19 = (longlong)(int)uStack_1e8;
            uVar11 = (int)uStack_1e8 + 1;
            uStack_1e8 = (undefined1 *)CONCAT44(uStack_1e8._4_4_,uVar11);
            if (uStack_1e8._4_4_ < uVar11) {
              FUN_1446f48e2(&uStack_1f0,(ulonglong)puVar16 & 0xffffffff);
            }
            *(undefined4 *)(uStack_1f0 + lVar19 * 4) = *(undefined4 *)(lVar17 + 4 + uVar23 * 8);
            uVar23 = uVar23 + 1;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
        }
        FUN_144a9ff88(&uStack_200,(int)local_388 + 1);
        if (uVar8 <= uVar10) {
          iVar9 = (uVar10 - uVar8) + 1;
          do {
            puVar16 = uStack_1f8;
            lVar17 = local_248;
            lVar19 = (longlong)(int)uStack_1f8;
            uVar8 = (int)uStack_1f8 + 1;
            uStack_1f8 = (undefined1 *)CONCAT44(uStack_1f8._4_4_,uVar8);
            if (uStack_1f8._4_4_ < uVar8) {
              FUN_1446f48e2(&uStack_200,(ulonglong)puVar16 & 0xffffffff);
            }
            *(undefined4 *)((longlong)uStack_200 + lVar19 * 4) =
                 *(undefined4 *)(lVar17 + uVar22 * 8);
            uVar22 = uVar22 + 1;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
        }
        uStack_1d0 = 0xffffffff;
        puVar16 = uStack_1e8;
        if ((int)uStack_1e8 < 0) {
LAB_1482e7dfa:
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4((ulonglong)puVar16 & 0xffffffff);
        }
        if ((int)uStack_1d4 < (int)uStack_1e8) {
          FUN_146be5458(&local_1e0);
        }
        lVar17 = uStack_1f0;
        if ((int)uStack_1e8 != 0) {
          lVar19 = (longlong)(int)uStack_1e8;
          lVar18 = 0;
          do {
            uVar8 = uStack_1d8;
            uVar13 = *(undefined8 *)
                      (*(longlong *)
                        (*(longlong *)(param_2 + 0x1c0) +
                        (ulonglong)(*(uint *)(lVar17 + lVar18) >> 9) * 8) + 8 +
                      (ulonglong)((*(uint *)(lVar17 + lVar18) & 0x1ff) << 4));
            lVar20 = (longlong)(int)uStack_1d8;
            uStack_1d8 = uStack_1d8 + 1;
            if (uStack_1d4 < uStack_1d8) {
              FUN_146be54b8(&local_1e0,uVar8);
            }
            *(undefined8 *)(CONCAT71(uStack_1df,local_1e0) + lVar20 * 8) = uVar13;
            lVar18 = lVar18 + 4;
          } while (lVar19 * 4 != lVar18);
        }
        puVar16 = uStack_1f8;
        if ((int)uStack_1f8 < 0) goto LAB_1482e7dfa;
        if ((int)uStack_1b8._4_4_ < (int)uStack_1f8) {
          FUN_1447a8aa0(&local_1c0);
        }
        lVar17 = (longlong)uStack_200;
        if ((int)uStack_1f8 != 0) {
          lVar19 = (longlong)(int)uStack_1f8;
          lVar18 = 0;
          do {
            uVar22 = uStack_1b8;
            lVar20 = *(longlong *)
                      (*(longlong *)(param_2 + 0x10) +
                      (ulonglong)(*(uint *)(lVar17 + lVar18) >> 9) * 8);
            uVar23 = (ulonglong)(*(uint *)(lVar17 + lVar18) & 0x1ff);
            local_348 = *(longlong *)(lVar20 + 0x10 + uVar23 * 0x18);
            plVar15 = (longlong *)(lVar20 + uVar23 * 0x18);
            local_358 = (undefined1  [8])*plVar15;
            uStack_350 = (undefined1 *)plVar15[1];
            lVar20 = (longlong)(int)uStack_1b8;
            uVar8 = (int)uStack_1b8 + 1;
            uStack_1b8 = CONCAT44(uStack_1b8._4_4_,uVar8);
            if (uStack_1b8._4_4_ < uVar8) {
              FUN_1403e3958(&local_1c0,uVar22 & 0xffffffff);
            }
            *(longlong *)(local_1c0 + 0x10 + lVar20 * 0x18) = local_348;
            puVar12 = (undefined4 *)(local_1c0 + lVar20 * 0x18);
            *puVar12 = local_358._0_4_;
            puVar12[1] = local_358._4_4_;
            puVar12[2] = (undefined4)uStack_350;
            puVar12[3] = uStack_350._4_4_;
            lVar18 = lVar18 + 4;
          } while (lVar19 * 4 != lVar18);
        }
        lVar17 = local_390;
        local_208 = (longlong *)CONCAT44(local_208._4_4_,(int)local_3a0);
        iVar9 = *(int *)(local_390 + 200);
        *(uint *)(local_390 + 200) = iVar9 + 1U;
        if (*(uint *)(local_390 + 0xcc) < iVar9 + 1U) {
          FUN_14830b5d2(local_370,iVar9);
        }
        FUN_14830b302((longlong)iVar9 * 0x100 + *local_370,&local_208);
        FUN_1482e7f38(&local_208);
      }
      pcVar2 = *(char **)(lVar17 + 0x20);
      if (pcVar2 != (char *)0x0) {
        if (*pcVar2 == '\0') {
          pcVar3 = *(code **)(pcVar2 + 0x70);
          plVar15 = (longlong *)(pcVar2 + 0x90);
          if (*(longlong **)(pcVar2 + 0x80) != (longlong *)0x0) {
            plVar15 = *(longlong **)(pcVar2 + 0x80);
          }
          uVar13 = (**(code **)(*plVar15 + 8))();
          cVar7 = (*pcVar3)(uVar13);
          *pcVar2 = cVar7;
          if (cVar7 == '\0') goto LAB_1482e7b41;
        }
        *(undefined4 *)(lVar17 + 0x38) = 2;
        goto LAB_1482e7bda;
      }
LAB_1482e7b41:
      uVar8 = (int)local_388 + local_37c;
    } while ((int)uVar8 < (int)(uint)uStack_240);
  }
  FUN_1482e6e3c(lVar17,param_2);
LAB_1482e7bda:
  if (local_2a8 != 0) {
    FUN_1400020a8();
  }
  if (local_298 != 0) {
    FUN_1400020a8();
  }
  if (local_248 != 0) {
    FUN_1400020a8();
  }
  local_c0 = 0;
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(local_108);
  if (local_238 != 0) {
    FUN_1400020a8();
  }
  local_70 = 0;
  if (local_78 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a6bfa8(local_b8);
  if ((local_60 ^ (ulonglong)auStack_3c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1482e7e04 FUN_1482e7e04 body=139 status=ok
// SIG undefined FUN_1482e7e04(void)

longlong FUN_1482e7e04(longlong param_1,uint param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x68) != *(int *)(param_1 + 0x94)) {
    lVar1 = param_1 + 0x98;
    if (*(longlong *)(param_1 + 0xa0) != 0) {
      lVar1 = *(longlong *)(param_1 + 0xa0);
    }
    iVar2 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0xa8) - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        lVar1 = *(longlong *)(param_1 + 0x60) + (longlong)iVar2 * 0x10;
        if (*(uint *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar2 * 0x10) == param_2) {
          if ((int *)(lVar1 + 4) != (int *)0x0 && lVar1 != 0) {
            iVar2 = *(int *)(lVar1 + 4);
            if (param_3 != (int *)0x0) {
              *param_3 = iVar2;
            }
            return (longlong)iVar2 * 0xa8 + *(longlong *)(param_1 + 0xb0);
          }
          return 0;
        }
        iVar2 = *(int *)(lVar1 + 8);
      } while (iVar2 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1482e7e90 FUN_1482e7e90 body=168 status=ok
// SIG undefined FUN_1482e7e90(void)

void FUN_1482e7e90(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  FUN_1482fe5d0(*(undefined8 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x90));
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  FUN_1482fe5ff(*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x58));
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1482e7f38 FUN_1482e7f38 body=201 status=ok
// SIG undefined FUN_1482e7f38(void)

void FUN_1482e7f38(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1400020a8();
  }
  FUN_1482fe62a(param_1 + 0xb8);
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1482e8002 FUN_1482e8002 body=678 status=ok
// SIG undefined FUN_1482e8002(void)

ulonglong FUN_1482e8002(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  uint *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 *puVar9;
  int *piVar10;
  undefined8 *puVar11;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  uint *local_120;
  uint *local_118;
  undefined8 *local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  int local_84;
  undefined1 local_80 [8];
  undefined1 *local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  piVar10 = (int *)0x0;
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = (undefined1 *)0x0;
  local_70 = 0;
  local_c8 = *param_4;
  local_c0 = *(undefined4 *)(param_4 + 1);
  local_128 = param_1;
  FUN_146bc855c();
  if ((longlong)*(int *)(param_4 + 1) != 0) {
    puVar6 = (uint *)*param_4;
    local_120 = puVar6 + *(int *)(param_4 + 1);
    bVar5 = false;
    do {
      uVar2 = *puVar6;
      if ((longlong)(int)uVar2 < 0) {
LAB_1482e80e3:
        lVar7 = 0;
      }
      else {
        lVar7 = 0;
        if ((int)uVar2 < *(int *)(param_3 + 0x98)) {
          lVar7 = (longlong)*(int *)(*(longlong *)(param_3 + 0x90) + (longlong)(int)uVar2 * 4);
          if (lVar7 == -1) goto LAB_1482e80e3;
          lVar7 = lVar7 * 0x38 + *(longlong *)(param_3 + 0x60);
        }
      }
      local_118 = puVar6;
      if ((longlong)*(int *)(lVar7 + 0x20) != 0) {
        puVar11 = *(undefined8 **)(lVar7 + 0x18);
        local_110 = puVar11 + (longlong)*(int *)(lVar7 + 0x20) * 5;
        do {
          if ((longlong)*(int *)(puVar11 + 1) != 0) {
            piVar10 = (int *)*puVar11;
            piVar1 = piVar10 + *(int *)(puVar11 + 1);
            do {
              lVar7 = *(longlong *)(param_3 + 0x70);
              lVar8 = (longlong)*piVar10 * 0x50;
              uVar3 = *(uint *)(lVar7 + lVar8);
              if (uVar3 == uVar2) {
                uVar3 = *(uint *)(lVar7 + lVar8 + 4);
              }
              if (uVar3 != 0xffffffff) {
                if ((int)uStack_b0 != local_84) {
                  puVar9 = local_78;
                  if (local_78 == (undefined1 *)0x0) {
                    puVar9 = local_80;
                  }
                  for (iVar4 = *(int *)(puVar9 + (ulonglong)(local_70 - 1U & uVar3) * 4);
                      iVar4 != -1; iVar4 = *(int *)(local_b8 + (longlong)iVar4 * 0xc + 4)) {
                    if (*(uint *)(local_b8 + (longlong)iVar4 * 0xc) == uVar3) goto LAB_1482e81fd;
                  }
                }
                if (*(int *)(lVar7 + 0x48 + lVar8) == -1) {
                  local_e0 = 0;
                  uStack_d8 = 0;
                  local_f0 = 0;
                  uStack_e8 = 0;
                  local_100 = 0;
                  uStack_f8 = 0;
                  local_d0 = 0;
                  local_108 = param_2;
                  FUN_146c5d418(&local_108,lVar8 + lVar7 + 0x20);
                  FUN_1482e64d0(local_128,param_2,&local_108);
                  FUN_146bc7c1a(&local_108);
                }
                else {
                  FUN_1482e6748(local_128,param_2,param_3);
                }
                bVar5 = true;
              }
LAB_1482e81fd:
              piVar10 = piVar10 + 1;
            } while (piVar10 != piVar1);
          }
          puVar11 = puVar11 + 5;
        } while (puVar11 != local_110);
      }
      puVar6 = local_118 + 1;
    } while (puVar6 != local_120);
    if (bVar5) {
      FUN_1482e6e3c(local_128,param_2);
      piVar10 = (int *)CONCAT71((int7)((ulonglong)piVar10 >> 8),1);
    }
    else {
      piVar10 = (int *)0x0;
    }
  }
  local_70 = 0;
  if (local_78 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_b8);
  if ((local_60 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return (ulonglong)piVar10 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482e82aa FUN_1482e82aa body=625 status=ok
// SIG undefined FUN_1482e82aa(void)

ulonglong FUN_1482e82aa(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  uint *puVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined8 unaff_RSI;
  ulonglong uVar4;
  uint *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_1f8 [40];
  longlong local_1d0;
  undefined8 local_1c8;
  undefined1 local_1c0 [4];
  uint local_1bc;
  longlong local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_18c;
  int local_184;
  undefined1 local_180 [8];
  undefined1 *local_178;
  int local_170;
  undefined4 local_160 [2];
  longlong local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_160[0] = 1;
  *(undefined4 *)(param_1 + 0x38) = 1;
  FUN_146c8b436(param_1 + 0x40,&local_158);
  FUN_146c8b486(param_1 + 0x50,&local_148);
  FUN_146c81a14(local_160);
  FUN_146c6a7a4(local_160,param_2,param_3,1);
  if ((char)local_148 == '\x01') {
    *(undefined4 *)(param_1 + 0x38) = 4;
    uVar4 = 0;
  }
  else {
    local_198 = 0;
    local_190 = 0;
    local_1b8 = 0;
    uStack_1b0 = 0;
    local_18c = 0xffffffff00000080;
    local_184 = 0;
    local_178 = (undefined1 *)0x0;
    local_170 = 0;
    if ((longlong)(int)uStack_150 != 0) {
      lVar6 = (longlong)(int)uStack_150 * 0x40 + local_158;
      lVar7 = local_158;
      local_1d0 = param_1;
      local_1c8 = param_2;
      do {
        if ((longlong)*(int *)(lVar7 + 0x10) != 0) {
          puVar5 = *(uint **)(lVar7 + 8);
          puVar1 = puVar5 + *(int *)(lVar7 + 0x10);
          do {
            local_1bc = *puVar5;
            if ((int)uStack_1b0 != local_184) {
              puVar3 = local_178;
              if (local_178 == (undefined1 *)0x0) {
                puVar3 = local_180;
              }
              for (iVar2 = *(int *)(puVar3 + (ulonglong)(local_170 - 1U & local_1bc) * 4);
                  iVar2 != -1; iVar2 = *(int *)(local_1b8 + (longlong)iVar2 * 0xc + 4)) {
                if (*(uint *)(local_1b8 + (longlong)iVar2 * 0xc) == local_1bc) {
                  uVar4 = 0;
                  goto LAB_1482e84b8;
                }
              }
            }
            FUN_1447cbafe(&local_1b8,local_1c0,&local_1bc,0);
            puVar5 = puVar5 + 1;
          } while (puVar5 != puVar1);
        }
        param_2 = local_1c8;
        param_1 = local_1d0;
        lVar7 = lVar7 + 0x40;
      } while (lVar7 != lVar6);
      unaff_RSI = 0;
      if ((longlong)(int)uStack_150 != 0) {
        lVar6 = (longlong)(int)uStack_150 << 6;
        lVar7 = local_158;
        do {
          FUN_1482e64d0(param_1,param_2,lVar7);
          lVar7 = lVar7 + 0x40;
          lVar6 = lVar6 + -0x40;
        } while (lVar6 != 0);
        unaff_RSI = 0;
      }
    }
    FUN_1482e6e3c(param_1,param_2);
    uVar4 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
LAB_1482e84b8:
    local_170 = 0;
    if (local_178 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    FUN_1447a082e(&local_1b8);
  }
  FUN_146bc7b3e(local_160);
  if ((local_60 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482e851c FUN_1482e851c body=2518 status=ok
// SIG undefined FUN_1482e851c(void)

void FUN_1482e851c(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int *piVar3;
  uint *puVar4;
  undefined8 uVar5;
  char cVar6;
  undefined1 uVar7;
  undefined1 *puVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  uint *puVar12;
  int *piVar13;
  uint *puVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  uint *puVar19;
  int *piVar20;
  longlong lVar21;
  longlong *plVar22;
  longlong lVar23;
  longlong lVar24;
  longlong *plVar25;
  undefined1 auStack_2c8 [32];
  longlong *local_2a8;
  longlong local_2a0;
  longlong local_298;
  longlong local_290;
  longlong local_288;
  uint *local_280;
  undefined8 local_278;
  undefined1 *puStack_270;
  uint local_268;
  int iStack_264;
  undefined8 uStack_260;
  int local_1d4;
  char local_1cd;
  int local_1cc;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 *local_1b8;
  longlong *local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  undefined8 *local_198;
  undefined8 *local_190;
  undefined8 local_188;
  undefined8 local_180;
  int *piStack_178;
  uint local_170;
  int iStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  uint local_15c;
  longlong local_158;
  undefined8 uStack_150;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_12c;
  int local_124;
  undefined1 local_120 [8];
  undefined1 *local_118;
  int local_110;
  uint local_108 [4];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  int local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  longlong local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  local_188 = param_3;
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  local_1a8 = param_1;
  local_1a0 = param_2;
  local_198 = &local_b8;
  local_190 = &local_188;
  local_1c8 = param_1;
  local_1c0 = param_2;
  local_1b8 = &local_b8;
  local_1b0 = &local_1a8;
  local_298 = param_2;
  if ((longlong)*(int *)(param_1 + 0xd8) != 0) {
    plVar25 = *(longlong **)(param_1 + 0xd0);
    plVar22 = plVar25 + (longlong)*(int *)(param_1 + 0xd8) * 0x1d;
    do {
      if (0 < (int)plVar25[1]) {
        lVar24 = 0;
        do {
          uVar1 = *(undefined4 *)(*plVar25 + lVar24 * 4);
          local_280 = (uint *)CONCAT44(local_280._4_4_,uVar1);
          cVar6 = FUN_143affa88(&local_1c8,uVar1,*(undefined4 *)(plVar25[2] + lVar24 * 4),&local_280
                               );
          if (cVar6 != '\0') {
            *(undefined4 *)(*plVar25 + lVar24 * 4) = local_280._0_4_;
          }
          lVar24 = lVar24 + 1;
        } while (lVar24 < (int)plVar25[1]);
      }
      plVar25 = plVar25 + 0x1d;
    } while (plVar25 != plVar22);
  }
  local_2a8 = (longlong *)(param_1 + 0xb0);
  local_e8 = 0;
  local_e0 = 0;
  local_108[0] = 0;
  local_108[1] = 0;
  local_108[2] = 0;
  local_108[3] = 0;
  local_dc = 0xffffffff00000080;
  local_d4 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_138 = 0;
  local_130 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_12c = 0xffffffff00000080;
  local_124 = 0;
  local_118 = (undefined1 *)0x0;
  local_110 = 0;
  local_2a0 = param_1;
  if ((longlong)*(int *)(param_1 + 200) == 0) {
    local_180 = (int *)0x100000000;
    piStack_178 = (int *)local_f8;
    local_170 = 0xffffffff;
    iStack_16c = 0;
    uStack_168 = 0;
    iVar10 = 0;
  }
  else {
    lVar24 = *(longlong *)(param_1 + 0xc0);
    local_290 = (longlong)*(int *)(param_1 + 200) * 0x100 + lVar24;
    local_288 = param_1 + 0x60;
    do {
      if (0 < *(int *)(lVar24 + 0x10)) {
        lVar17 = 0;
        do {
          iVar10 = *(int *)(lVar24 + 0x20) + -1;
          if ((int)lVar17 < iVar10) {
            iVar10 = (int)lVar17;
          }
          uVar2 = *(uint *)(*(longlong *)(lVar24 + 8) + lVar17 * 4);
          local_15c = uVar2;
          cVar6 = FUN_143affa88(&local_1c8,uVar2,
                                *(undefined4 *)(*(longlong *)(lVar24 + 0x18) + (longlong)iVar10 * 4)
                                ,&local_15c);
          if ((cVar6 != '\0') &&
             ((*(uint *)(*(longlong *)(lVar24 + 8) + lVar17 * 4) = local_15c, lVar17 == 0 ||
              (lVar17 + 1U == (ulonglong)*(uint *)(lVar24 + 0x10))))) {
            uVar16 = (ulonglong)(lVar17 != 0);
            local_1cc = *(int *)(lVar24 + 0x58 + uVar16 * 4);
            FUN_14573a2c8(local_288,uVar2);
            FUN_1447cbafe(local_108,&local_280,&local_1cc,&local_1cd);
            uVar7 = FUN_146c0b51e(local_298,local_15c);
            lVar18 = local_2a0;
            *(undefined1 *)(lVar24 + 0x44 + uVar16) = uVar7;
            if (local_1cd == '\0') {
              *(uint *)(*local_2a8 + (longlong)local_1cc * 0xa8) = local_15c;
              local_280 = &local_15c;
              local_278 = &local_1cc;
              FUN_140263e2a(&local_158,&local_180,&local_280,0);
            }
            else {
              if ((int)uStack_150 != local_124) {
                puVar8 = local_118;
                if (local_118 == (undefined1 *)0x0) {
                  puVar8 = local_120;
                }
                iVar10 = *(int *)(puVar8 + (ulonglong)(local_110 - 1U & local_15c) * 4);
                while (iVar10 != -1) {
                  lVar23 = local_158 + (longlong)iVar10 * 0x10;
                  if (*(uint *)(local_158 + (longlong)iVar10 * 0x10) == local_15c) {
                    local_1d4 = -1;
                    if ((lVar23 != 0) && (piVar9 = (int *)(lVar23 + 4), piVar9 != (int *)0x0))
                    goto LAB_1482e88a6;
                    break;
                  }
                  iVar10 = *(int *)(lVar23 + 8);
                }
              }
              local_1d4 = -1;
              FUN_1482e8ef4(&local_280,(longlong)local_1cc * 0xa8 + *(longlong *)(local_2a0 + 0xb0))
              ;
              plVar25 = local_2a8;
              iVar10 = *(int *)(lVar18 + 0xb8);
              *(uint *)(lVar18 + 0xb8) = iVar10 + 1U;
              if (*(uint *)(lVar18 + 0xbc) < iVar10 + 1U) {
                FUN_14830b26e(local_2a8,iVar10);
              }
              FUN_14830b658((longlong)iVar10 * 0xa8 + *plVar25,&local_280);
              local_1d4 = iVar10;
              FUN_1482e7e90(&local_280);
              *(uint *)(*local_2a8 + (longlong)local_1d4 * 0xa8) = local_15c;
              piVar9 = &local_1d4;
              FUN_1447cbafe(local_108,&local_280,piVar9,0);
              local_280 = &local_15c;
              local_278 = piVar9;
              FUN_140263e2a(&local_158,&local_180,&local_280,0);
LAB_1482e88a6:
              *(int *)(lVar24 + 0x58 + uVar16 * 4) = *piVar9;
            }
          }
          lVar17 = lVar17 + 1;
        } while (lVar17 < *(int *)(lVar24 + 0x10));
      }
      lVar24 = lVar24 + 0x100;
    } while (lVar24 != local_290);
    local_180 = (int *)0x100000000;
    piStack_178 = (int *)local_f8;
    local_170 = 0xffffffff;
    iStack_16c = 0;
    uStack_168 = 0;
    if (local_e0 == 0) {
      iVar10 = 0;
    }
    else {
      FUN_1449c0562(&local_180);
      iVar10 = local_e0;
    }
  }
  local_268 = local_170;
  iStack_264 = iStack_16c;
  uStack_260 = CONCAT44(uStack_164,uStack_168);
  local_278 = local_180;
  puStack_270 = (undefined1 *)piStack_178;
  local_280 = local_108;
  if ((iStack_16c != iVar10) || (iVar15 = iVar10, piStack_178 != (int *)local_f8)) {
    lVar24 = local_2a0 + 0x60;
    plVar25 = local_2a8;
    do {
      local_1cc = *(int *)(*(longlong *)local_280 + (longlong)iStack_264 * 0xc);
      lVar17 = *plVar25;
      lVar23 = (longlong)local_1cc * 0xa8;
      piVar9 = (int *)(lVar17 + lVar23);
      piStack_178 = &local_1cc;
      local_180 = piVar9;
      FUN_140263e2a(lVar24,&local_15c,&local_180,0);
      *(undefined4 *)(lVar17 + 8 + lVar23) = 3;
      piVar3 = *(int **)(lVar17 + 0x30 + lVar23);
      lVar18 = (longlong)*(int *)(lVar17 + 0x38 + lVar23);
      piVar11 = piVar3;
      piVar20 = (int *)0x0;
      if (lVar18 != 0) {
        piVar13 = piVar3 + lVar18;
        piVar20 = piVar3;
        do {
          lVar18 = *(longlong *)(local_2a0 + 0xc0);
          while ((piVar11 = piVar20,
                 *(int *)(lVar18 + 0x58 + (longlong)*piVar11 * 0x100) == local_1cc ||
                 (*(int *)((longlong)*piVar11 * 0x100 + lVar18 + 0x5c) == local_1cc))) {
            piVar20 = piVar11 + 1;
            piVar11 = piVar13;
            if (piVar20 == piVar13) goto LAB_1482e8b14;
          }
          while( true ) {
            piVar13 = piVar13 + -1;
            lVar21 = (longlong)*piVar13 * 0x100;
            if ((*(int *)(lVar18 + 0x58 + lVar21) == local_1cc) ||
               (*(int *)(lVar21 + lVar18 + 0x5c) == local_1cc)) break;
            piVar20 = piVar11;
            if (piVar13 == piVar11) goto LAB_1482e8b14;
          }
          *piVar11 = *piVar13;
          piVar20 = piVar11 + 1;
          piVar11 = piVar13;
        } while (piVar13 != piVar20);
      }
LAB_1482e8b14:
      FUN_144a1a59e(lVar17 + lVar23 + 0x30,(ulonglong)((longlong)piVar11 - (longlong)piVar3) >> 2,
                    CONCAT71((int7)((ulonglong)piVar20 >> 8),1));
      plVar25 = local_2a8;
      puVar4 = *(uint **)(piVar9 + 4);
      puVar12 = puVar4;
      puVar19 = (uint *)0x0;
      if ((longlong)piVar9[6] != 0) {
        iVar15 = *piVar9;
        puVar14 = puVar4 + piVar9[6];
        puVar19 = puVar4;
        do {
          while ((puVar12 = puVar19,
                 uVar5 = *(undefined8 *)
                          (*(longlong *)
                            (*(longlong *)(local_298 + 0x1c0) + (ulonglong)(*puVar12 >> 9) * 8) +
                          (ulonglong)((*puVar12 & 0x1ff) << 4)), iVar15 == (int)uVar5 ||
                 (iVar15 == (int)((ulonglong)uVar5 >> 0x20)))) {
            puVar19 = puVar12 + 1;
            puVar12 = puVar14;
            if (puVar19 == puVar14) goto LAB_1482e8b44;
          }
          while( true ) {
            puVar14 = puVar14 + -1;
            uVar2 = *puVar14;
            uVar5 = *(undefined8 *)
                     (*(longlong *)(*(longlong *)(local_298 + 0x1c0) + (ulonglong)(uVar2 >> 9) * 8)
                     + (ulonglong)((uVar2 & 0x1ff) << 4));
            if ((iVar15 == (int)uVar5) || (iVar15 == (int)((ulonglong)uVar5 >> 0x20))) break;
            puVar19 = puVar12;
            if (puVar14 == puVar12) goto LAB_1482e8b44;
          }
          *puVar12 = uVar2;
          puVar19 = puVar12 + 1;
        } while (puVar14 != puVar19);
        puVar12 = puVar12 + 1;
        puVar19 = puVar12;
      }
LAB_1482e8b44:
      FUN_144a1a59e(piVar9 + 4,(ulonglong)((longlong)puVar12 - (longlong)puVar4) >> 2,
                    CONCAT71((int7)((ulonglong)puVar19 >> 8),1));
      FUN_1482e919e(local_298,(longlong)local_1cc * 0xa8 + *plVar25);
      local_268 = local_268 & ~local_278._4_4_;
      FUN_1449c0562(&local_278);
      iVar15 = local_e0;
    } while (local_280 != local_108 || (puStack_270 != local_f8 || iStack_264 != iVar10));
  }
  lVar24 = local_2a0;
  local_180 = (int *)0x100000000;
  piStack_178 = (int *)local_f8;
  local_170 = 0xffffffff;
  iStack_16c = 0;
  uStack_168 = 0;
  if (iVar15 == 0) {
    iVar10 = 0;
  }
  else {
    FUN_1449c0562(&local_180);
    iVar10 = local_e0;
  }
  uStack_260 = CONCAT44(uStack_164,uStack_168);
  local_268 = local_170;
  iStack_264 = iStack_16c;
  local_278._0_4_ = SUB84(local_180,0);
  local_278._4_4_ = local_180._4_4_;
  puStack_270 = (undefined1 *)piStack_178;
  if ((iStack_16c != iVar10) || (local_280 = local_108, piStack_178 != (int *)local_f8)) {
    local_280 = local_108;
    do {
      FUN_1482e931e(lVar24,local_298,
                    (longlong)*(int *)(*(longlong *)local_280 + (longlong)iStack_264 * 0xc) * 0xa8 +
                    *(longlong *)(lVar24 + 0xb0));
      local_268 = local_268 & ~local_278._4_4_;
      FUN_1449c0562(&local_278);
    } while (local_280 != local_108 || (puStack_270 != local_f8 || iStack_264 != iVar10));
  }
  local_110 = 0;
  if (local_118 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a6bfa8(&local_158);
  local_c0 = 0;
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(local_108);
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_144a6bfa8(&local_b8);
  if ((local_60 ^ (ulonglong)auStack_2c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482e8ef4 FUN_1482e8ef4 body=681 status=ok
// SIG undefined FUN_1482e8ef4(void)

undefined8 * FUN_1482e8ef4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 << 2);
  }
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  pvVar2 = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],pvVar2,(longlong)iVar1 << 2);
  }
  param_1[6] = 0;
  iVar1 = *(int *)(param_2 + 7);
  pvVar2 = (void *)param_2[6];
  *(int *)(param_1 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 6,iVar1,0);
    memcpy((void *)param_1[6],pvVar2,(longlong)iVar1 << 2);
  }
  param_1[8] = 0;
  iVar1 = *(int *)(param_2 + 9);
  pvVar2 = (void *)param_2[8];
  *(int *)(param_1 + 9) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 8,iVar1,0);
    memcpy((void *)param_1[8],pvVar2,(longlong)iVar1 << 2);
  }
  param_1[10] = 0;
  iVar1 = *(int *)(param_2 + 0xb);
  uVar3 = param_2[10];
  *(int *)(param_1 + 0xb) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  }
  else {
    FUN_1482fe672(param_1 + 10,iVar1);
    FUN_1482fe6dc(param_1[10],uVar3,iVar1);
  }
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  param_1[0xd] = 0;
  iVar1 = *(int *)(param_2 + 0xe);
  pvVar2 = (void *)param_2[0xd];
  *(int *)(param_1 + 0xe) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 0xd,iVar1,0);
    memcpy((void *)param_1[0xd],pvVar2,(longlong)iVar1 << 2);
  }
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  param_1[0xf] = param_2[0xf];
  param_1[0x11] = 0;
  iVar1 = *(int *)(param_2 + 0x12);
  uVar3 = param_2[0x11];
  *(int *)(param_1 + 0x12) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  }
  else {
    FUN_1482fe76c(param_1 + 0x11,iVar1);
    FUN_1482fe7d6(param_1[0x11],uVar3,iVar1);
  }
  param_1[0x13] = 0;
  iVar1 = *(int *)(param_2 + 0x14);
  pvVar2 = (void *)param_2[0x13];
  *(int *)(param_1 + 0x14) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 0x13,iVar1,0);
    memcpy((void *)param_1[0x13],pvVar2,(longlong)iVar1 << 2);
  }
  return param_1;
}



// FUNCTION 1482e919e FUN_1482e919e body=383 status=ok
// SIG undefined FUN_1482e919e(void)

void FUN_1482e919e(longlong param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  char cVar7;
  int iVar8;
  uint *puVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong local_58 [3];
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58[2] = 0;
  uStack_40 = 0;
  local_68 = local_58;
  local_58[0] = 0;
  local_58[1] = 0;
  iVar8 = FUN_146c13054(0,*param_2,param_2 + 0x10);
  if ((iVar8 == 0) && ((int)uStack_40 == 1)) {
    uVar1 = param_2[0x12];
    if (1 < (int)uVar1) {
      puVar6 = *(uint **)(param_2 + 0x10);
      lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x130) + (ulonglong)(*puVar6 >> 9) * 8);
      uVar10 = (ulonglong)*puVar6 & 0x1ff;
      iVar8 = *(int *)(lVar12 + 4 + uVar10 * 0xc);
      iVar2 = *(int *)(lVar12 + 8 + uVar10 * 0xc);
      iVar3 = *param_2;
      if (iVar2 == iVar3) {
        iVar2 = iVar8;
      }
      if (iVar8 == iVar3) {
        iVar2 = *(int *)(lVar12 + uVar10 * 0xc);
      }
      lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x130) + (ulonglong)(puVar6[1] >> 9) * 8);
      uVar10 = (ulonglong)puVar6[1] & 0x1ff;
      iVar8 = *(int *)(lVar12 + 4 + uVar10 * 0xc);
      iVar4 = *(int *)(lVar12 + 8 + uVar10 * 0xc);
      iVar11 = iVar8;
      if (iVar4 == iVar3) {
        iVar11 = *(int *)(lVar12 + uVar10 * 0xc);
      }
      if (iVar8 == iVar3) {
        iVar11 = iVar4;
      }
      if (iVar2 == iVar11) {
        lVar12 = 0;
        puVar9 = puVar6;
        do {
          uVar5 = *puVar9;
          *puVar9 = puVar6[(ulonglong)uVar1 + lVar12 + -1];
          puVar6[(ulonglong)uVar1 + lVar12 + -1] = uVar5;
          lVar12 = lVar12 + -1;
          puVar9 = puVar9 + 1;
        } while (-lVar12 != (ulonglong)(uVar1 >> 1));
        iVar3 = *param_2;
      }
      cVar7 = FUN_146c0b51e(param_1,iVar3);
      if (cVar7 == '\0') {
        if (param_2[6] == 1) {
          FUN_1482eb524(param_2,param_1);
        }
        else {
          FUN_1482ebb80(param_2,param_1);
        }
      }
      else {
        param_2[2] = 2;
      }
      goto LAB_1482e91fb;
    }
  }
  param_2[2] = 3;
LAB_1482e91fb:
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482e931e FUN_1482e931e body=328 status=ok
// SIG undefined FUN_1482e931e(void)

void FUN_1482e931e(longlong param_1,longlong param_2,undefined4 *param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  
  if (param_3[2] != 1) {
    return;
  }
  if (*(int *)(param_1 + 0x68) == *(int *)(param_1 + 0x94)) {
    return;
  }
  lVar4 = param_1 + 0x98;
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    lVar4 = *(longlong *)(param_1 + 0xa0);
  }
  iVar3 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0xa8) - 1U & param_3[0x1f]) * 4);
  if (iVar3 == -1) {
    return;
  }
  while (lVar4 = *(longlong *)(param_1 + 0x60) + (longlong)iVar3 * 0x10,
        *(uint *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar3 * 0x10) != param_3[0x1f]) {
    iVar3 = *(int *)(lVar4 + 8);
    if (iVar3 == -1) {
      return;
    }
  }
  piVar2 = (int *)(lVar4 + 4);
  if (piVar2 == (int *)0x0 || lVar4 == 0) {
    return;
  }
  iVar3 = *piVar2;
  lVar4 = *(longlong *)(param_1 + 0xb0);
  if (*(int *)(lVar4 + 8 + (longlong)iVar3 * 0xa8) != 1) {
    return;
  }
  uVar1 = FUN_146c061e0(param_2,*param_3);
  if ((int)uVar1 < 0) {
    return;
  }
  if (*(int *)(param_2 + 0x1d0) * 0x200 + *(int *)(param_2 + 0x1d4) <= (int)uVar1) {
    return;
  }
  if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                    (*(longlong *)(param_2 + 0x1d8) + (ulonglong)(uVar1 >> 9) * 8) +
                                  (ulonglong)(uVar1 & 0x1ff) * 2) - 1U)) {
    return;
  }
  if (param_3[0x1e] != uVar1) {
    return;
  }
  if (*(uint *)(lVar4 + (longlong)iVar3 * 0xa8 + 0x78) != uVar1) {
    return;
  }
  if ((longlong)(int)param_3[6] != 0) {
    lVar4 = 0;
    do {
      if (*(uint *)(*(longlong *)(param_3 + 4) + lVar4) == uVar1) {
        return;
      }
      lVar4 = lVar4 + 4;
    } while ((longlong)(int)param_3[6] * 4 != lVar4);
  }
  param_3[0x20] = *piVar2;
  return;
}



// FUNCTION 1482e9466 FUN_1482e9466 body=1229 status=ok
// SIG undefined FUN_1482e9466(void)

ulonglong FUN_1482e9466(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  char *pcVar5;
  char cVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined4 uVar9;
  char *pcVar10;
  longlong lVar11;
  longlong lVar12;
  
  FUN_1482e851c();
  if ((longlong)*(int *)(param_1 + 200) != 0) {
    lVar11 = *(longlong *)(param_1 + 0xc0);
    lVar12 = (longlong)*(int *)(param_1 + 200) << 8;
    do {
      FUN_1482ebf96(param_1,param_2,lVar11,param_3);
      lVar11 = lVar11 + 0x100;
      lVar12 = lVar12 + -0x100;
    } while (lVar12 != 0);
  }
  pcVar10 = *(char **)(param_1 + 0x20);
  if (pcVar10 == (char *)0x0) {
LAB_1482e9500:
    if ((longlong)*(int *)(param_1 + 0xd8) != 0) {
      lVar11 = *(longlong *)(param_1 + 0xd0);
      lVar12 = (longlong)*(int *)(param_1 + 0xd8) * 0xe8;
      do {
        FUN_1482ec568(param_1,param_2,lVar11,param_3);
        lVar11 = lVar11 + 0xe8;
        lVar12 = lVar12 + -0xe8;
      } while (lVar12 != 0);
    }
    pcVar10 = *(char **)(param_1 + 0x20);
    if (pcVar10 == (char *)0x0) {
LAB_1482e9593:
      FUN_1482e9934(param_1,param_2,param_3);
      pcVar10 = *(char **)(param_1 + 0x20);
      if (pcVar10 == (char *)0x0) {
LAB_1482e95df:
        FUN_1482e99e4(param_1,param_2);
        pcVar10 = *(char **)(param_1 + 0x20);
        if (pcVar10 == (char *)0x0) {
LAB_1482e9630:
          FUN_1482e9c80(param_1,param_2);
          pcVar10 = *(char **)(param_1 + 0x20);
          if (pcVar10 == (char *)0x0) {
LAB_1482e9681:
            if (*(int *)(param_1 + 8) < 1) {
              FUN_1482ea6a6(param_1,param_2);
            }
            else {
              FUN_1482ea928(param_1,param_2);
            }
            pcVar10 = *(char **)(param_1 + 0x20);
            if (pcVar10 == (char *)0x0) {
LAB_1482e96e5:
              plVar8 = (longlong *)(param_1 + 0x28);
              *(undefined4 *)(param_1 + 0x30) = 0;
              if (*(int *)(param_1 + 0x34) < 0) {
                FUN_14481578e(plVar8,0);
              }
              iVar1 = *(int *)(param_1 + 0xb8);
              if ((longlong)iVar1 != 0) {
                lVar11 = *(longlong *)(param_1 + 0xb0);
                lVar12 = 0;
                do {
                  uVar2 = *(uint *)(lVar11 + 0x70 + lVar12);
                  if ((longlong)(int)uVar2 != 0) {
                    iVar3 = *(int *)(param_1 + 0x30);
                    *(uint *)(param_1 + 0x30) = iVar3 + uVar2;
                    if ((uint)(*(int *)(param_1 + 0x34) - iVar3) < uVar2) {
                      FUN_1446f48e2(plVar8,iVar3);
                    }
                    memcpy((void *)((longlong)iVar3 * 4 + *plVar8),
                           *(void **)(lVar11 + 0x68 + lVar12),(longlong)(int)uVar2 << 2);
                  }
                  lVar12 = lVar12 + 0xa8;
                } while ((longlong)iVar1 * 0xa8 - lVar12 != 0);
              }
              if ((longlong)*(int *)(param_1 + 200) != 0) {
                lVar12 = (longlong)*(int *)(param_1 + 200) << 8;
                lVar11 = *(longlong *)(param_1 + 0xc0) + 0xa8;
                do {
                  FUN_143affd9a(param_2,lVar11,plVar8,0);
                  lVar11 = lVar11 + 0x100;
                  lVar12 = lVar12 + -0x100;
                } while (lVar12 != 0);
              }
              if ((longlong)*(int *)(param_1 + 0xd8) != 0) {
                lVar12 = (longlong)*(int *)(param_1 + 0xd8) * 0xe8;
                lVar11 = *(longlong *)(param_1 + 0xd0) + 0x90;
                do {
                  FUN_143affd9a(param_2,lVar11,plVar8,0);
                  lVar11 = lVar11 + 0xe8;
                  lVar12 = lVar12 + -0xe8;
                } while (lVar12 != 0);
              }
              FUN_1482eadd6(param_1,param_2);
              pcVar10 = *(char **)(param_1 + 0x20);
              if (pcVar10 == (char *)0x0) {
LAB_1482e9840:
                FUN_1482eaf4c(param_1,param_2);
                pcVar10 = *(char **)(param_1 + 0x20);
                if (pcVar10 == (char *)0x0) {
LAB_1482e9891:
                  FUN_1482eb0ca(param_1,param_2);
                  pcVar10 = *(char **)(param_1 + 0x20);
                  if (pcVar10 == (char *)0x0) {
LAB_1482e9929:
                    pcVar10 = (char *)CONCAT71((int7)((ulonglong)pcVar10 >> 8),1);
                    uVar9 = 0;
                    goto LAB_1482e957d;
                  }
                  uVar9 = 2;
                  if (*pcVar10 == '\0') {
                    pcVar4 = *(code **)(pcVar10 + 0x70);
                    plVar8 = (longlong *)(pcVar10 + 0x90);
                    if (*(longlong **)(pcVar10 + 0x80) != (longlong *)0x0) {
                      plVar8 = *(longlong **)(pcVar10 + 0x80);
                    }
                    uVar7 = (**(code **)(*plVar8 + 8))();
                    cVar6 = (*pcVar4)(uVar7);
                    *pcVar10 = cVar6;
                    if (cVar6 == '\0') {
                      pcVar5 = *(char **)(param_1 + 0x20);
                      if (pcVar5 != (char *)0x0) {
                        pcVar10 = (char *)CONCAT71((int7)((ulonglong)pcVar10 >> 8),1);
                        if (*pcVar5 != '\0') goto LAB_1482e957d;
                        pcVar4 = *(code **)(pcVar5 + 0x70);
                        plVar8 = (longlong *)(pcVar5 + 0x90);
                        if (*(longlong **)(pcVar5 + 0x80) != (longlong *)0x0) {
                          plVar8 = *(longlong **)(pcVar5 + 0x80);
                        }
                        uVar7 = (**(code **)(*plVar8 + 8))();
                        cVar6 = (*pcVar4)(uVar7);
                        *pcVar5 = cVar6;
                        if (cVar6 != '\0') goto LAB_1482e957d;
                      }
                      goto LAB_1482e9929;
                    }
                  }
                }
                else if (*pcVar10 == '\0') {
                  pcVar4 = *(code **)(pcVar10 + 0x70);
                  plVar8 = (longlong *)(pcVar10 + 0x90);
                  if (*(longlong **)(pcVar10 + 0x80) != (longlong *)0x0) {
                    plVar8 = *(longlong **)(pcVar10 + 0x80);
                  }
                  uVar7 = (**(code **)(*plVar8 + 8))();
                  cVar6 = (*pcVar4)(uVar7);
                  *pcVar10 = cVar6;
                  if (cVar6 == '\0') goto LAB_1482e9891;
                }
              }
              else if (*pcVar10 == '\0') {
                pcVar4 = *(code **)(pcVar10 + 0x70);
                plVar8 = (longlong *)(pcVar10 + 0x90);
                if (*(longlong **)(pcVar10 + 0x80) != (longlong *)0x0) {
                  plVar8 = *(longlong **)(pcVar10 + 0x80);
                }
                uVar7 = (**(code **)(*plVar8 + 8))();
                cVar6 = (*pcVar4)(uVar7);
                *pcVar10 = cVar6;
                if (cVar6 == '\0') goto LAB_1482e9840;
              }
            }
            else if (*pcVar10 == '\0') {
              pcVar4 = *(code **)(pcVar10 + 0x70);
              plVar8 = (longlong *)(pcVar10 + 0x90);
              if (*(longlong **)(pcVar10 + 0x80) != (longlong *)0x0) {
                plVar8 = *(longlong **)(pcVar10 + 0x80);
              }
              uVar7 = (**(code **)(*plVar8 + 8))();
              cVar6 = (*pcVar4)(uVar7);
              *pcVar10 = cVar6;
              if (cVar6 == '\0') goto LAB_1482e96e5;
            }
          }
          else if (*pcVar10 == '\0') {
            pcVar4 = *(code **)(pcVar10 + 0x70);
            plVar8 = (longlong *)(pcVar10 + 0x90);
            if (*(longlong **)(pcVar10 + 0x80) != (longlong *)0x0) {
              plVar8 = *(longlong **)(pcVar10 + 0x80);
            }
            uVar7 = (**(code **)(*plVar8 + 8))();
            cVar6 = (*pcVar4)(uVar7);
            *pcVar10 = cVar6;
            if (cVar6 == '\0') goto LAB_1482e9681;
          }
        }
        else if (*pcVar10 == '\0') {
          pcVar4 = *(code **)(pcVar10 + 0x70);
          plVar8 = (longlong *)(pcVar10 + 0x90);
          if (*(longlong **)(pcVar10 + 0x80) != (longlong *)0x0) {
            plVar8 = *(longlong **)(pcVar10 + 0x80);
          }
          uVar7 = (**(code **)(*plVar8 + 8))();
          cVar6 = (*pcVar4)(uVar7);
          *pcVar10 = cVar6;
          if (cVar6 == '\0') goto LAB_1482e9630;
        }
      }
      else if (*pcVar10 == '\0') {
        pcVar4 = *(code **)(pcVar10 + 0x70);
        plVar8 = (longlong *)(pcVar10 + 0x90);
        if (*(longlong **)(pcVar10 + 0x80) != (longlong *)0x0) {
          plVar8 = *(longlong **)(pcVar10 + 0x80);
        }
        uVar7 = (**(code **)(*plVar8 + 8))();
        cVar6 = (*pcVar4)(uVar7);
        *pcVar10 = cVar6;
        if (cVar6 == '\0') goto LAB_1482e95df;
      }
    }
    else if (*pcVar10 == '\0') {
      pcVar4 = *(code **)(pcVar10 + 0x70);
      plVar8 = (longlong *)(pcVar10 + 0x90);
      if (*(longlong **)(pcVar10 + 0x80) != (longlong *)0x0) {
        plVar8 = *(longlong **)(pcVar10 + 0x80);
      }
      uVar7 = (**(code **)(*plVar8 + 8))();
      cVar6 = (*pcVar4)(uVar7);
      *pcVar10 = cVar6;
      if (cVar6 == '\0') goto LAB_1482e9593;
    }
  }
  else if (*pcVar10 == '\0') {
    pcVar4 = *(code **)(pcVar10 + 0x70);
    plVar8 = (longlong *)(pcVar10 + 0x90);
    if (*(longlong **)(pcVar10 + 0x80) != (longlong *)0x0) {
      plVar8 = *(longlong **)(pcVar10 + 0x80);
    }
    uVar7 = (**(code **)(*plVar8 + 8))();
    cVar6 = (*pcVar4)(uVar7);
    *pcVar10 = cVar6;
    if (cVar6 == '\0') goto LAB_1482e9500;
  }
  uVar9 = 2;
  pcVar10 = (char *)0x0;
LAB_1482e957d:
  *(undefined4 *)(param_1 + 0x38) = uVar9;
  return (ulonglong)pcVar10 & 0xffffffff;
}



// FUNCTION 1482e9934 FUN_1482e9934 body=176 status=ok
// SIG undefined FUN_1482e9934(void)

void FUN_1482e9934(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0xb8) != 0) {
    lVar1 = *(longlong *)(param_1 + 0xb0);
    lVar2 = (longlong)*(int *)(param_1 + 0xb8) * 0xa8;
    do {
      if (*(int *)(lVar1 + 8) == 1) {
        FUN_1482ec938(param_1,param_2,lVar1,param_3);
      }
      lVar1 = lVar1 + 0xa8;
      lVar2 = lVar2 + -0xa8;
    } while (lVar2 != 0);
    if ((longlong)*(int *)(param_1 + 0xb8) != 0) {
      lVar1 = *(longlong *)(param_1 + 0xb0);
      lVar2 = (longlong)*(int *)(param_1 + 0xb8) * 0xa8;
      do {
        if (*(int *)(lVar1 + 8) == 0) {
          FUN_1482ecba6(param_1,param_2,lVar1,param_3);
        }
        lVar1 = lVar1 + 0xa8;
        lVar2 = lVar2 + -0xa8;
      } while (lVar2 != 0);
    }
  }
  return;
}



// FUNCTION 1482e99e4 FUN_1482e99e4 body=668 status=ok
// SIG undefined FUN_1482e99e4(void)

void FUN_1482e99e4(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  bool bVar18;
  bool bVar19;
  
  if ((longlong)*(int *)(param_1 + 200) != 0) {
    lVar14 = *(longlong *)(param_1 + 0xc0);
    lVar11 = (longlong)*(int *)(param_1 + 200) * 0x100 + lVar14;
    do {
      iVar10 = *(int *)(lVar14 + 0x20);
      if (0 < iVar10) {
        lVar15 = 0;
        iVar16 = iVar10;
        do {
          uVar2 = *(uint *)(*(longlong *)(lVar14 + 0x18) + lVar15 * 4);
          if ((iVar10 == 1) || (uVar2 == *(uint *)(*(longlong *)(lVar14 + 0x70) + lVar15 * 4))) {
            if (*(int *)(param_1 + 0xe8) == *(int *)(param_1 + 0x114)) goto LAB_1482e9c5d;
            lVar17 = *(longlong *)(param_1 + 0x120);
            if (*(longlong *)(param_1 + 0x120) == 0) {
              lVar17 = param_1 + 0x118;
            }
            iVar16 = *(int *)(lVar17 + (ulonglong)(*(int *)(param_1 + 0x128) - 1U & uVar2) * 4);
            if (iVar16 == -1) goto LAB_1482e9c5d;
            while (lVar17 = *(longlong *)(param_1 + 0xe0) + (longlong)iVar16 * 0x10,
                  *(uint *)(*(longlong *)(param_1 + 0xe0) + (longlong)iVar16 * 0x10) != uVar2) {
              iVar16 = *(int *)(lVar17 + 8);
              if (iVar16 == -1) goto LAB_1482e9c5d;
            }
            if ((lVar17 == 0) || ((undefined4 *)(lVar17 + 4) == (undefined4 *)0x0))
            goto LAB_1482e9c5d;
            *(undefined4 *)(*(longlong *)(lVar14 + 0x70) + lVar15 * 4) = *(undefined4 *)(lVar17 + 4)
            ;
            iVar16 = *(int *)(lVar14 + 0x20);
          }
          lVar15 = lVar15 + 1;
        } while (lVar15 < iVar16);
      }
      bVar18 = true;
      do {
        bVar9 = bVar18;
        iVar10 = 0;
        iVar16 = 0;
        if (!bVar9) {
          iVar10 = *(int *)(lVar14 + 0x10) + -1;
          iVar16 = *(int *)(lVar14 + 0x20) + -1;
        }
        lVar15 = FUN_1482e7e04(param_1,*(undefined4 *)
                                        (*(longlong *)(lVar14 + 8) + (longlong)iVar10 * 4),0);
        if ((longlong)*(int *)(lVar15 + 0x58) != 0) {
          lVar17 = *(longlong *)(lVar14 + 8);
          lVar7 = *(longlong *)(lVar14 + 0x60);
          iVar3 = *(int *)(*(longlong *)(lVar14 + 0x18) + (longlong)iVar16 * 4);
          iVar16 = *(int *)(*(longlong *)(lVar14 + 0x70) + (longlong)iVar16 * 4);
          plVar12 = *(longlong **)(lVar15 + 0x50);
          plVar1 = plVar12 + (longlong)*(int *)(lVar15 + 0x58) * 9;
          bVar18 = false;
          bVar19 = false;
          do {
            if ((longlong)(int)plVar12[1] != 0) {
              lVar15 = 0;
              do {
                lVar8 = *(longlong *)
                         (*(longlong *)(param_2 + 0x180) +
                         (ulonglong)(*(uint *)(*plVar12 + lVar15) >> 9) * 8);
                uVar13 = (ulonglong)(*(uint *)(*plVar12 + lVar15) & 0x1ff);
                iVar4 = *(int *)(lVar8 + uVar13 * 0xc);
                iVar5 = *(int *)(lVar8 + 4 + uVar13 * 0xc);
                iVar6 = *(int *)(lVar8 + 8 + uVar13 * 0xc);
                if ((iVar6 == iVar3 || (iVar5 == iVar3 || iVar4 == iVar3)) && !bVar18) {
                  bVar18 = true;
                  lVar15 = lVar17;
LAB_1482e9c28:
                  *(int *)(lVar15 + (longlong)iVar10 * 4) = (int)plVar12[4];
                  break;
                }
                if ((iVar6 == iVar16 || (iVar5 == iVar16 || iVar4 == iVar16)) && !bVar19) {
                  bVar19 = true;
                  lVar15 = lVar7;
                  goto LAB_1482e9c28;
                }
                lVar15 = lVar15 + 4;
              } while ((longlong)(int)plVar12[1] * 4 != lVar15);
            }
            plVar12 = plVar12 + 9;
          } while (plVar12 != plVar1);
        }
        bVar18 = false;
      } while (bVar9);
LAB_1482e9c5d:
      lVar14 = lVar14 + 0x100;
    } while (lVar14 != lVar11);
  }
  return;
}



// FUNCTION 1482e9c80 FUN_1482e9c80 body=2596 status=ok
// SIG undefined FUN_1482e9c80(void)

void FUN_1482e9c80(undefined8 *param_1,double param_2)

{
  double *pdVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  double *pdVar15;
  longlong lVar16;
  undefined4 *puVar17;
  longlong lVar18;
  longlong lVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 auStack_268 [32];
  uint local_248;
  double local_240;
  longlong local_238;
  longlong local_230;
  longlong local_228;
  longlong local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  ulonglong *local_208;
  double *pdStack_200;
  undefined8 *puStack_1f8;
  double dStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined1 local_1b0;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  code *local_168;
  undefined8 *local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined8 uStack_130;
  double local_128;
  ulonglong local_120;
  double local_118;
  double local_110;
  double *local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  double local_e8;
  longlong local_d8;
  ulonglong uStack_d0;
  double local_c8;
  code **local_c0;
  undefined4 local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_268;
  local_d8 = 0;
  uStack_d0 = 0;
  uVar10 = *(uint *)(param_1 + 0x19);
  local_240 = param_2;
  if ((int)uVar10 < 1) {
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar10);
    }
  }
  else {
    uStack_d0 = (ulonglong)uVar10;
    FUN_143b0573c(&local_d8);
    FUN_143b0572e(local_d8,uVar10);
    if (0 < *(int *)(param_1 + 0x19)) {
      lVar14 = 0x10;
      lVar19 = 0x60;
      lVar16 = 0;
      do {
        lVar18 = param_1[0x18];
        FUN_148324de9(local_240,lVar19 + lVar18 + -0x48,(int)*param_1,local_d8 + lVar14 + -0x10);
        local_248 = local_248 & 0xffffff00;
        FUN_148325462(local_240,local_d8 + lVar14 + -0x10,lVar18 + -0x58 + lVar19,
                      lVar19 + lVar18 + 0x20);
        FUN_148324de9(local_240,lVar19 + lVar18 + 0x10,(int)*param_1,local_d8 + lVar14);
        param_2 = local_240;
        local_248 = local_248 & 0xffffff00;
        FUN_148325462(local_240,local_d8 + lVar14,lVar19 + lVar18,lVar19 + lVar18 + 0x30);
        lVar16 = lVar16 + 1;
        lVar14 = lVar14 + 0x20;
        lVar19 = lVar19 + 0x100;
      } while (lVar16 < *(int *)(param_1 + 0x19));
    }
  }
  iVar2 = *(int *)(param_1 + 0x1b);
  if ((longlong)iVar2 != 0) {
    lVar14 = param_1[0x1a];
    lVar16 = 0;
    do {
      local_218 = (undefined4 *)0x0;
      uStack_210 = 0.0;
      FUN_148324de9(param_2,lVar14 + lVar16 + 0x10,(int)*param_1,&local_218);
      local_248._0_1_ = 1;
      FUN_148325462(param_2,&local_218,lVar14 + lVar16,lVar14 + lVar16 + 0x60);
      FUN_148324de9(param_2,lVar14 + lVar16 + 0x50,(int)*param_1,&local_218);
      local_248 = CONCAT31(local_248._1_3_,1);
      FUN_148325462(param_2,&local_218,lVar14 + 0x40 + lVar16,lVar14 + lVar16 + 0x70);
      if (local_218 != (undefined4 *)0x0) {
        FUN_1400020a8();
      }
      lVar16 = lVar16 + 0xe8;
    } while ((longlong)iVar2 * 0xe8 - lVar16 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0x17) != 0) {
    lVar14 = param_1[0x16];
    local_230 = (longlong)*(int *)(param_1 + 0x17) * 0xa8 + lVar14;
    local_238 = (longlong)param_2 + 0xb8;
    do {
      if ((*(int *)(lVar14 + 8) != 3) &&
         (local_220 = (longlong)*(int *)(lVar14 + 0x58), 0 < local_220)) {
        lVar16 = 0;
        local_228 = lVar14;
        do {
          lVar19 = *(longlong *)(lVar14 + 0x50) + lVar16 * 0x48;
          lVar18 = *(longlong *)
                    (*(longlong *)((longlong)param_2 + 0x10) +
                    (ulonglong)(*(uint *)(lVar19 + 0x20) >> 9) * 8);
          uVar11 = (ulonglong)(*(uint *)(lVar19 + 0x20) & 0x1ff);
          local_e8 = *(double *)(lVar18 + 0x10 + uVar11 * 0x18);
          puVar17 = (undefined4 *)(lVar18 + uVar11 * 0x18);
          local_f8 = *puVar17;
          uStack_f4 = puVar17[1];
          uStack_f0 = puVar17[2];
          uStack_ec = puVar17[3];
          local_108 = (double *)0x0;
          uStack_100 = 0;
          iVar2 = *(int *)(lVar14 + 0x38);
          if ((longlong)iVar2 == 0) {
            pdVar15 = (double *)0x0;
            uStack_100._0_4_ = 0;
          }
          else {
            lVar14 = *(longlong *)(lVar14 + 0x30);
            lVar18 = 0;
            pdVar15 = (double *)0x0;
            do {
              lVar12 = (longlong)*(int *)(lVar14 + lVar18);
              piVar4 = *(int **)(param_1[0x18] + 8 + lVar12 * 0x100);
              iVar3 = *(int *)(lVar19 + 0x20);
              if (*piVar4 == iVar3) {
                puVar17 = *(undefined4 **)(local_d8 + lVar12 * 0x20);
LAB_1482e9fd3:
                iVar3 = (int)uStack_100;
                uVar11 = uStack_100 & 0xffffffff;
                uVar10 = (int)uStack_100 + 1;
                uStack_100 = CONCAT44(uStack_100._4_4_,uVar10);
                if (uStack_100._4_4_ < uVar10) {
                  FUN_14830c1b2(&local_108,uVar11);
                  pdVar15 = local_108;
                }
                lVar12 = (longlong)iVar3;
                uVar5 = *puVar17;
                uVar6 = puVar17[1];
                uVar7 = puVar17[2];
                uVar8 = puVar17[3];
                dVar20 = *(double *)(puVar17 + 4);
                dVar21 = *(double *)(puVar17 + 6);
                dVar22 = *(double *)(puVar17 + 10);
                pdVar15[lVar12 * 6 + 4] = *(double *)(puVar17 + 8);
                (pdVar15 + lVar12 * 6 + 4)[1] = dVar22;
                pdVar15[lVar12 * 6 + 2] = dVar20;
                (pdVar15 + lVar12 * 6 + 2)[1] = dVar21;
                pdVar1 = pdVar15 + lVar12 * 6;
                *(undefined4 *)pdVar1 = uVar5;
                *(undefined4 *)((longlong)pdVar1 + 4) = uVar6;
                *(undefined4 *)(pdVar1 + 1) = uVar7;
                *(undefined4 *)((longlong)pdVar1 + 0xc) = uVar8;
              }
              else {
                lVar13 = param_1[0x18] + lVar12 * 0x100;
                if (piVar4[*(int *)(lVar13 + 0x10) + -1] == iVar3) {
                  puVar17 = (undefined4 *)
                            ((longlong)(*(int *)(local_d8 + 8 + lVar12 * 0x20) + -1) * 0x30 +
                            *(longlong *)(local_d8 + lVar12 * 0x20));
                  goto LAB_1482e9fd3;
                }
                if (**(int **)(lVar13 + 0x60) == iVar3) {
                  puVar17 = *(undefined4 **)(local_d8 + 0x10 + lVar12 * 0x20);
                  goto LAB_1482e9fd3;
                }
                if ((*(int **)(lVar13 + 0x60))[*(int *)(lVar13 + 0x68) + -1] == iVar3) {
                  puVar17 = (undefined4 *)
                            ((longlong)(*(int *)(local_d8 + 0x18 + lVar12 * 0x20) + -1) * 0x30 +
                            *(longlong *)(local_d8 + 0x10 + lVar12 * 0x20));
                  goto LAB_1482e9fd3;
                }
              }
              lVar18 = lVar18 + 4;
            } while ((longlong)iVar2 * 4 != lVar18);
            lVar14 = local_228;
          }
          param_2 = local_240;
          if ((*(int *)(lVar14 + 8) == 1) || ((int)uStack_100 == 1 && *(int *)(lVar14 + 8) == 2)) {
            if ((int)uStack_100 == 1) {
              dVar20 = (local_e8 - pdVar15[2]) * pdVar15[5] +
                       ((double)CONCAT44(uStack_f4,local_f8) - *pdVar15) * pdVar15[3] +
                       ((double)CONCAT44(uStack_ec,uStack_f0) - pdVar15[1]) * pdVar15[4];
              local_110 = pdVar15[5] * dVar20 + pdVar15[2];
              local_118 = pdVar15[4] * dVar20 + pdVar15[1];
              dVar20 = dVar20 * pdVar15[3] + *pdVar15;
              *(double *)(lVar19 + 0x28) = dVar20;
              *(double *)(lVar19 + 0x30) = local_118;
              *(double *)(lVar19 + 0x38) = local_110;
              local_110 = local_110 - local_e8;
              local_118 = local_118 - (double)CONCAT44(uStack_ec,uStack_f0);
              dVar20 = dVar20 - (double)CONCAT44(uStack_f4,local_f8);
              dVar21 = SQRT(local_110 * local_110 + dVar20 * dVar20 + local_118 * local_118);
              dVar22 = 1.0 / dVar21;
              if (0.0 < dVar21) {
                local_110 = local_110 * dVar22;
                local_118 = local_118 * dVar22;
              }
              else {
                local_118 = 0.0;
                local_110 = 0.0;
              }
              local_120 = -(ulonglong)(0.0 < dVar21) & (ulonglong)(dVar20 * dVar22);
              local_128 = -1.0;
              local_148 = DAT_14c8464f0;
              local_158 = DAT_14c8464e0;
              uStack_150 = DAT_14c8464e8;
              uStack_130 = DAT_14c8463b0;
              uStack_140 = (undefined4)DAT_14c8463a0;
              uStack_13c = DAT_14c8463a0._4_4_;
              uStack_138 = (undefined4)DAT_14c8463a8;
              uStack_134 = DAT_14c8463a8._4_4_;
              local_218 = &local_f8;
              uStack_210 = local_240;
              local_208 = &local_120;
              pdStack_200 = &local_128;
              puStack_1f8 = &local_158;
              local_160 = &local_218;
              local_168 = FUN_143b05830;
              local_b8 = *(undefined4 *)(lVar19 + 0x20);
              local_c8 = local_240;
              local_c0 = &local_168;
              FUN_146c58f20(local_238);
              if (-1.0 < local_128) {
                local_1b8 = 0xbff0000000000000;
                local_1b0 = 0;
                local_218 = (undefined4 *)*local_108;
                uStack_210 = local_108[1];
                local_208 = (ulonglong *)local_108[2];
                pdStack_200 = (double *)local_108[3];
                puStack_1f8 = (undefined8 *)local_108[4];
                dStack_1f0 = local_108[5];
                _uStack_1c8 = CONCAT44(uStack_134,uStack_138);
                local_1c0 = uStack_130;
                local_1d8 = local_148;
                _uStack_1d0 = CONCAT44(uStack_13c,uStack_140);
                local_1e8 = local_158;
                uStack_1e0 = uStack_150;
                dVar20 = (double)FUN_14830c246(&local_218);
                if (dVar20 < 0.0) {
                  sqrt(dVar20);
                }
                *(undefined8 *)(lVar19 + 0x38) = local_178;
                *(undefined4 *)(lVar19 + 0x28) = local_188;
                *(undefined4 *)(lVar19 + 0x2c) = uStack_184;
                *(undefined4 *)(lVar19 + 0x30) = uStack_180;
                *(undefined4 *)(lVar19 + 0x34) = uStack_17c;
              }
              goto LAB_1482ea13e;
            }
          }
          else if (1 < (int)uStack_100) {
            FUN_148325285(&local_218,&local_f8,pdVar15,pdVar15 + 6);
            *(ulonglong **)(lVar19 + 0x38) = local_208;
            *(undefined4 *)(lVar19 + 0x28) = (undefined4)local_218;
            *(undefined4 *)(lVar19 + 0x2c) = local_218._4_4_;
            *(undefined4 *)(lVar19 + 0x30) = (undefined4)uStack_210;
            *(undefined4 *)(lVar19 + 0x34) = uStack_210._4_4_;
LAB_1482ea13e:
            *(undefined1 *)(lVar19 + 0x40) = 1;
          }
          if (local_108 != (double *)0x0) {
            FUN_1400020a8();
          }
          lVar16 = lVar16 + 1;
        } while (lVar16 != local_220);
      }
      lVar14 = lVar14 + 0xa8;
    } while (lVar14 != local_230);
  }
  if ((longlong)*(int *)(param_1 + 0x19) != 0) {
    lVar16 = (longlong)*(int *)(param_1 + 0x19) << 8;
    lVar14 = param_1[0x18] + 0x60;
    do {
      local_248 = *(byte *)(lVar14 + -0x1b) ^ 1;
      FUN_143affff8(param_2,lVar14 + -0x58,lVar14 + 0x20,*(byte *)(lVar14 + -0x1c) ^ 1);
      local_248 = *(byte *)(lVar14 + -0x1b) ^ 1;
      FUN_143affff8(param_2,lVar14,lVar14 + 0x30,*(byte *)(lVar14 + -0x1c) ^ 1);
      lVar14 = lVar14 + 0x100;
      lVar16 = lVar16 + -0x100;
    } while (lVar16 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0x1b) != 0) {
    lVar14 = param_1[0x1a];
    lVar16 = (longlong)*(int *)(param_1 + 0x1b) * 0xe8 + lVar14;
    do {
      local_248 = 0;
      FUN_143affff8(param_2,lVar14,lVar14 + 0x60,0);
      local_248 = 0;
      FUN_143affff8(param_2,lVar14 + 0x40,lVar14 + 0x70);
      lVar14 = lVar14 + 0xe8;
    } while (lVar14 != lVar16);
  }
  if ((longlong)*(int *)(param_1 + 0x17) != 0) {
    lVar14 = param_1[0x16];
    lVar16 = (longlong)*(int *)(param_1 + 0x17) * 0xa8 + lVar14;
    do {
      iVar2 = *(int *)(lVar14 + 0x58);
      if ((longlong)iVar2 != 0) {
        lVar19 = *(longlong *)(lVar14 + 0x50);
        lVar18 = 0;
        do {
          if (*(char *)(lVar19 + 0x40 + lVar18) == '\x01') {
            uVar10 = *(uint *)(lVar19 + 0x20 + lVar18);
            cVar9 = FUN_146bfed03(lVar19 + 0x28 + lVar18);
            if (cVar9 != '\0') {
              lVar12 = lVar19 + 0x20 + lVar18;
              lVar13 = *(longlong *)
                        (*(longlong *)((longlong)local_240 + 0x10) + (ulonglong)(uVar10 >> 9) * 8);
              uVar11 = (ulonglong)(uVar10 & 0x1ff);
              *(undefined8 *)(lVar13 + 0x10 + uVar11 * 0x18) = *(undefined8 *)(lVar12 + 0x18);
              uVar5 = *(undefined4 *)(lVar12 + 0xc);
              uVar6 = *(undefined4 *)(lVar12 + 0x10);
              uVar7 = *(undefined4 *)(lVar12 + 0x14);
              puVar17 = (undefined4 *)(lVar13 + uVar11 * 0x18);
              *puVar17 = *(undefined4 *)(lVar12 + 8);
              puVar17[1] = uVar5;
              puVar17[2] = uVar6;
              puVar17[3] = uVar7;
              if (*(char *)((longlong)local_240 + 0x210) == '\x01') {
                LOCK();
                *(int *)((longlong)local_240 + 0x214) = *(int *)((longlong)local_240 + 0x214) + 1;
                UNLOCK();
              }
            }
          }
          lVar18 = lVar18 + 0x48;
        } while ((longlong)iVar2 * 0x48 != lVar18);
      }
      lVar14 = lVar14 + 0xa8;
    } while (lVar14 != lVar16);
  }
  FUN_143b056f1(local_d8,uStack_d0 & 0xffffffff);
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
  if ((local_b0 ^ (ulonglong)auStack_268) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1482ea6a6 FUN_1482ea6a6 body=640 status=ok
// SIG undefined FUN_1482ea6a6(void)

void FUN_1482ea6a6(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  int *piVar5;
  int *piVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_c8 [36];
  undefined1 local_a4 [4];
  int local_a0;
  int local_9c;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((longlong)*(int *)(param_1 + 0xb8) != 0) {
    lVar4 = *(longlong *)(param_1 + 0xb0);
    lVar8 = (longlong)*(int *)(param_1 + 0xb8) * 0xa8;
    do {
      if ((*(int *)(lVar4 + 8) == 0) && (2 < *(int *)(lVar4 + 0x58))) {
        FUN_1482ece4c(param_2,lVar4);
      }
      lVar4 = lVar4 + 0xa8;
      lVar8 = lVar8 + -0xa8;
    } while (lVar8 != 0);
  }
  if ((longlong)*(int *)(param_1 + 200) != 0) {
    lVar4 = *(longlong *)(param_1 + 0xc0);
    lVar8 = (longlong)*(int *)(param_1 + 200) << 8;
    do {
      FUN_1482ed3d6(param_1,param_2,lVar4);
      lVar4 = lVar4 + 0x100;
      lVar8 = lVar8 + -0x100;
    } while (lVar8 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0xd8) != 0) {
    lVar4 = *(longlong *)(param_1 + 0xd0);
    lVar8 = (longlong)*(int *)(param_1 + 0xd8) * 0xe8;
    do {
      FUN_1482ed6ac(param_2,lVar4);
      lVar4 = lVar4 + 0xe8;
      lVar8 = lVar8 + -0xe8;
    } while (lVar8 != 0);
  }
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  if ((longlong)*(int *)(param_1 + 0xb8) != 0) {
    piVar5 = *(int **)(param_1 + 0xb0);
    piVar6 = piVar5 + (longlong)*(int *)(param_1 + 0xb8) * 0x2a;
    do {
      if (piVar5[2] == 1) {
        if ((longlong)piVar5[0x20] < 0) {
          FUN_1482ed068(param_2,piVar5);
        }
        else {
          lVar4 = *(longlong *)(param_1 + 0xb0);
          lVar8 = (longlong)piVar5[0x20] * 0xa8;
          local_9c = *(int *)(lVar4 + lVar8);
          iVar1 = *piVar5;
          local_a0 = iVar1;
          if (local_9c < iVar1) {
            local_a0 = local_9c;
            local_9c = iVar1;
          }
          uVar2 = FUN_1448eb174(&local_a0,8,0);
          if ((int)uStack_90 != local_64) {
            puVar3 = local_58;
            if (local_58 == (undefined1 *)0x0) {
              puVar3 = local_60;
            }
            iVar1 = *(int *)(puVar3 + (ulonglong)(local_50 - 1U & uVar2) * 4);
            while (iVar1 != -1) {
              lVar7 = (longlong)iVar1 * 0x10;
              if ((*(int *)(local_98 + lVar7) == local_a0) &&
                 (*(int *)(local_98 + 4 + lVar7) == local_9c)) goto LAB_1482ea8e2;
              iVar1 = *(int *)(lVar7 + local_98 + 8);
            }
          }
          FUN_1482ed214(param_2,piVar5,lVar4 + lVar8);
          FUN_146be8d80(&local_98,local_a4,&local_a0,0);
        }
      }
LAB_1482ea8e2:
      piVar5 = piVar5 + 0x2a;
    } while (piVar5 != piVar6);
    local_50 = 0;
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_146be9290(&local_98);
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482ea928 FUN_1482ea928 body=1196 status=ok
// SIG undefined FUN_1482ea928(void)

void FUN_1482ea928(longlong param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  double dVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  int *piVar7;
  int *piVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *plVar14;
  ulonglong uVar15;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined1 local_a4 [4];
  int local_a0;
  int local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((longlong)*(int *)(param_1 + 200) != 0) {
    lVar13 = *(longlong *)(param_1 + 0xc0);
    lVar11 = (longlong)*(int *)(param_1 + 200) * 0x100 + lVar13;
    do {
      FUN_14051b394(lVar13 + 0xe0,*(undefined4 *)(lVar13 + 0x10),1);
      FUN_14051b394(lVar13 + 0xf0,*(undefined4 *)(lVar13 + 0x10),1);
      if (0 < *(int *)(lVar13 + 0x10)) {
        lVar9 = 0;
        lVar10 = 0;
        do {
          local_b8 = 1;
          FUN_146c393d4(&local_98,param_2,*(undefined4 *)(*(longlong *)(lVar13 + 8) + lVar10 * 4),1)
          ;
          lVar3 = *(longlong *)(lVar13 + 0xe0);
          *(undefined8 *)(lVar3 + 0x10 + lVar9) = local_88;
          puVar1 = (undefined4 *)(lVar3 + lVar9);
          *puVar1 = (undefined4)local_98;
          puVar1[1] = local_98._4_4_;
          puVar1[2] = (int)uStack_90;
          puVar1[3] = uStack_90._4_4_;
          local_b8 = 1;
          FUN_146c393d4(&local_98,param_2,*(undefined4 *)(*(longlong *)(lVar13 + 0x60) + lVar10 * 4)
                        ,1);
          lVar3 = *(longlong *)(lVar13 + 0xf0);
          *(undefined8 *)(lVar3 + 0x10 + lVar9) = local_88;
          puVar1 = (undefined4 *)(lVar3 + lVar9);
          *puVar1 = (undefined4)local_98;
          puVar1[1] = local_98._4_4_;
          puVar1[2] = (int)uStack_90;
          puVar1[3] = uStack_90._4_4_;
          lVar10 = lVar10 + 1;
          lVar9 = lVar9 + 0x18;
        } while (lVar10 < *(int *)(lVar13 + 0x10));
      }
      lVar13 = lVar13 + 0x100;
    } while (lVar13 != lVar11);
  }
  if ((longlong)*(int *)(param_1 + 0xd8) != 0) {
    plVar12 = *(longlong **)(param_1 + 0xd0);
    plVar14 = plVar12 + (longlong)*(int *)(param_1 + 0xd8) * 0x1d;
    do {
      FUN_14051b394(plVar12 + 0x19,(int)plVar12[1],1);
      FUN_14051b394(plVar12 + 0x1b,(int)plVar12[1],1);
      if (0 < (int)plVar12[1]) {
        lVar13 = 0;
        lVar11 = 0;
        do {
          local_b8 = 1;
          FUN_146c393d4(&local_98,param_2,*(undefined4 *)(*plVar12 + lVar11 * 4),1);
          lVar9 = plVar12[0x19];
          *(undefined8 *)(lVar9 + 0x10 + lVar13) = local_88;
          puVar1 = (undefined4 *)(lVar9 + lVar13);
          *puVar1 = (undefined4)local_98;
          puVar1[1] = local_98._4_4_;
          puVar1[2] = (int)uStack_90;
          puVar1[3] = uStack_90._4_4_;
          local_b8 = 1;
          FUN_146c393d4(&local_98,param_2,*(undefined4 *)(plVar12[8] + lVar11 * 4),1);
          lVar9 = plVar12[0x1b];
          *(undefined8 *)(lVar9 + 0x10 + lVar13) = local_88;
          puVar1 = (undefined4 *)(lVar9 + lVar13);
          *puVar1 = (undefined4)local_98;
          puVar1[1] = local_98._4_4_;
          puVar1[2] = (int)uStack_90;
          puVar1[3] = uStack_90._4_4_;
          lVar11 = lVar11 + 1;
          lVar13 = lVar13 + 0x18;
        } while (lVar11 < (int)plVar12[1]);
      }
      plVar12 = plVar12 + 0x1d;
    } while (plVar12 != plVar14);
  }
  if ((longlong)*(int *)(param_1 + 200) != 0) {
    lVar13 = *(longlong *)(param_1 + 0xc0);
    lVar11 = (longlong)*(int *)(param_1 + 200) << 8;
    do {
      FUN_1482edb14(param_1,param_2,lVar13);
      lVar13 = lVar13 + 0x100;
      lVar11 = lVar11 + -0x100;
    } while (lVar11 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0xd8) != 0) {
    lVar13 = *(longlong *)(param_1 + 0xd0);
    lVar11 = (longlong)*(int *)(param_1 + 0xd8) * 0xe8;
    do {
      FUN_1482ee1fc(param_1,param_2,lVar13);
      lVar13 = lVar13 + 0xe8;
      lVar11 = lVar11 + -0xe8;
    } while (lVar11 != 0);
  }
  piVar7 = *(int **)(param_1 + 0xb0);
  if ((longlong)*(int *)(param_1 + 0xb8) == 0) {
    iVar4 = 0;
  }
  else {
    lVar13 = (longlong)*(int *)(param_1 + 0xb8) * 0xa8;
    do {
      if ((piVar7[2] == 0) && (2 < piVar7[0x16])) {
        FUN_1482eea8e(param_1,param_2,piVar7);
      }
      piVar7 = piVar7 + 0x2a;
      lVar13 = lVar13 + -0xa8;
    } while (lVar13 != 0);
    piVar7 = *(int **)(param_1 + 0xb0);
    iVar4 = *(int *)(param_1 + 0xb8);
  }
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  if (iVar4 != 0) {
    piVar8 = piVar7 + (longlong)iVar4 * 0x2a;
    do {
      if (piVar7[2] == 1) {
        if ((longlong)piVar7[0x20] < 0) {
          FUN_1482f1756(param_1,param_2,piVar7);
        }
        else {
          lVar13 = *(longlong *)(param_1 + 0xb0);
          lVar11 = (longlong)piVar7[0x20] * 0xa8;
          local_9c = *(int *)(lVar13 + lVar11);
          iVar4 = *piVar7;
          local_a0 = iVar4;
          if (local_9c < iVar4) {
            local_a0 = local_9c;
            local_9c = iVar4;
          }
          uVar5 = FUN_1448eb174(&local_a0,8,0);
          if ((int)uStack_90 != local_64) {
            puVar6 = local_58;
            if (local_58 == (undefined1 *)0x0) {
              puVar6 = local_60;
            }
            iVar4 = *(int *)(puVar6 + (ulonglong)(local_50 - 1U & uVar5) * 4);
            while (iVar4 != -1) {
              lVar9 = (longlong)iVar4 * 0x10;
              if ((*(int *)(local_98 + lVar9) == local_a0) &&
                 (*(int *)(local_98 + 4 + lVar9) == local_9c)) goto LAB_1482eadaa;
              iVar4 = *(int *)(lVar9 + local_98 + 8);
            }
          }
          FUN_1482f19b4(param_1,param_2,piVar7,lVar13 + lVar11);
          FUN_146be8d80(&local_98,local_a4,&local_a0,0);
        }
      }
LAB_1482eadaa:
      piVar7 = piVar7 + 0x2a;
    } while (piVar7 != piVar8);
  }
  dVar2 = *(double *)(param_1 + 0x10);
  uVar15 = -(ulonglong)(-dVar2 <= dVar2);
  if (9.999999974752427e-07 < (double)(~uVar15 & (ulonglong)-dVar2 | (ulonglong)dVar2 & uVar15)) {
    FUN_1482f1c0c(param_1,param_2);
  }
  local_50 = 0;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_146be9290(&local_98);
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482eadd6 FUN_1482eadd6 body=372 status=ok
// SIG undefined FUN_1482eadd6(void)

void FUN_1482eadd6(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *(longlong *)(param_2 + 0x208);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x38) < 1) {
      uVar1 = 0;
    }
    else {
      uVar1 = **(undefined8 **)(lVar2 + 0x30);
    }
    if ((longlong)*(int *)(param_1 + 0xb8) != 0) {
      lVar3 = (longlong)*(int *)(param_1 + 0xb8) * 0xa8;
      lVar2 = *(longlong *)(param_1 + 0xb0) + 0x68;
      do {
        if (0 < *(int *)(lVar2 + 8)) {
          FUN_146c39de4(uVar1,lVar2);
        }
        lVar2 = lVar2 + 0xa8;
        lVar3 = lVar3 + -0xa8;
      } while (lVar3 != 0);
    }
    local_48 = 0;
    uStack_40 = 0;
    if ((longlong)*(int *)(param_1 + 200) != 0) {
      lVar2 = (longlong)*(int *)(param_1 + 200) << 8;
      lVar3 = *(longlong *)(param_1 + 0xc0) + 0xa8;
      do {
        FUN_143affd9a(param_2,lVar3,&local_48,1);
        if (0 < (int)uStack_40) {
          FUN_146c39de4(uVar1,&local_48);
        }
        lVar3 = lVar3 + 0x100;
        lVar2 = lVar2 + -0x100;
      } while (lVar2 != 0);
    }
    if ((longlong)*(int *)(param_1 + 0xd8) != 0) {
      lVar3 = (longlong)*(int *)(param_1 + 0xd8) * 0xe8;
      lVar2 = *(longlong *)(param_1 + 0xd0) + 0x90;
      do {
        FUN_143affd9a(param_2,lVar2,&local_48,1);
        if (0 < (int)uStack_40) {
          FUN_146c39de4(uVar1,&local_48);
        }
        lVar2 = lVar2 + 0xe8;
        lVar3 = lVar3 + -0xe8;
      } while (lVar3 != 0);
    }
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482eaf4c FUN_1482eaf4c body=380 status=ok
// SIG undefined FUN_1482eaf4c(void)

void FUN_1482eaf4c(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *(longlong *)(param_2 + 0x208);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x28) < 1) {
      uVar1 = 0;
    }
    else {
      uVar1 = **(undefined8 **)(lVar2 + 0x20);
    }
    local_48 = 0;
    uStack_40 = 0;
    if ((longlong)*(int *)(param_1 + 200) != 0) {
      lVar2 = (longlong)*(int *)(param_1 + 200) << 8;
      lVar3 = *(longlong *)(param_1 + 0xc0) + 0xa8;
      do {
        FUN_143affd9a(param_2,lVar3,&local_48,1);
        if (0 < (int)uStack_40) {
          FUN_148325708(param_2,uVar1,&local_48);
        }
        lVar3 = lVar3 + 0x100;
        lVar2 = lVar2 + -0x100;
      } while (lVar2 != 0);
    }
    if ((longlong)*(int *)(param_1 + 0xd8) != 0) {
      lVar2 = (longlong)*(int *)(param_1 + 0xd8) * 0xe8;
      lVar3 = *(longlong *)(param_1 + 0xd0) + 0x90;
      do {
        FUN_143affd9a(param_2,lVar3,&local_48,1);
        if (0 < (int)uStack_40) {
          FUN_148325708(param_2,uVar1,&local_48);
        }
        lVar3 = lVar3 + 0xe8;
        lVar2 = lVar2 + -0xe8;
      } while (lVar2 != 0);
    }
    if ((longlong)*(int *)(param_1 + 0xb8) != 0) {
      lVar3 = (longlong)*(int *)(param_1 + 0xb8) * 0xa8;
      lVar2 = *(longlong *)(param_1 + 0xb0) + 0x68;
      do {
        if (0 < *(int *)(lVar2 + 8)) {
          FUN_148325708(param_2,uVar1,lVar2);
        }
        lVar2 = lVar2 + 0xa8;
        lVar3 = lVar3 + -0xa8;
      } while (lVar3 != 0);
    }
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482eb0ca FUN_1482eb0ca body=901 status=ok
// SIG undefined FUN_1482eb0ca(void)

void FUN_1482eb0ca(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_e8 [32];
  undefined4 *local_c8;
  longlong local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  undefined4 local_70;
  uint local_6c [3];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((*(longlong *)(param_2 + 0x208) != 0) &&
     (lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x208) + 0x48), lVar3 != 0)) {
    if (*(int *)(param_1 + 0x18) == 0) {
      iVar4 = *(int *)(param_1 + 0x30);
      if ((longlong)iVar4 != 0) {
        lVar8 = *(longlong *)(param_1 + 0x28);
        uVar2 = *(undefined4 *)(param_1 + 0x1c);
        lVar9 = 0;
        do {
          uVar5 = *(uint *)(lVar8 + lVar9);
          *(undefined4 *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x20) + (ulonglong)(uVar5 >> 9) * 8) +
           (ulonglong)(uVar5 & 0x1ff) * 4) = uVar2;
          lVar9 = lVar9 + 4;
        } while ((longlong)iVar4 * 4 != lVar9);
      }
    }
    else {
      local_98 = param_2;
      local_90 = lVar3;
      local_88 = param_1;
      local_80 = param_2;
      local_78 = lVar3;
      if ((longlong)*(int *)(param_1 + 200) != 0) {
        lVar9 = (longlong)*(int *)(param_1 + 200) << 8;
        lVar8 = *(longlong *)(param_1 + 0xc0) + 0xa8;
        do {
          FUN_143b00cca(&local_98,lVar8,lVar8 + -0x80);
          lVar8 = lVar8 + 0x100;
          lVar9 = lVar9 + -0x100;
        } while (lVar9 != 0);
      }
      if ((longlong)*(int *)(param_1 + 0xd8) != 0) {
        lVar9 = (longlong)*(int *)(param_1 + 0xd8) * 0xe8;
        lVar8 = *(longlong *)(param_1 + 0xd0) + 0x90;
        do {
          FUN_143b00cca(&local_98,lVar8,lVar8 + -0x70);
          lVar8 = lVar8 + 0xe8;
          lVar9 = lVar9 + -0xe8;
        } while (lVar9 != 0);
      }
      if ((longlong)*(int *)(param_1 + 0xb8) != 0) {
        lVar8 = *(longlong *)(param_1 + 0xb0);
        local_c0 = (longlong)*(int *)(param_1 + 0xb8) * 0xa8 + lVar8;
        local_c8 = (undefined4 *)(param_1 + 0x1c);
        do {
          local_a8 = 0;
          local_b8 = 0;
          uStack_b0 = 0;
          uStack_a0 = 0;
          if ((longlong)*(int *)(lVar8 + 0x70) != 0) {
            lVar10 = *(longlong *)(lVar8 + 0x68);
            lVar9 = lVar10 + (longlong)*(int *)(lVar8 + 0x70) * 4;
            do {
              FUN_146c03f0e(param_2,local_6c);
              lVar14 = 0;
              do {
                uVar5 = local_6c[lVar14];
                if ((-1 < (int)uVar5) &&
                   ((int)uVar5 < *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144))) {
                  if ((ushort)(*(short *)(*(longlong *)
                                           (*(longlong *)(param_2 + 0x148) +
                                           (ulonglong)(uVar5 >> 9) * 8) +
                                         (ulonglong)(uVar5 & 0x1ff) * 2) - 1U) < 0xfffe) {
                    if ((longlong)*(int *)(lVar8 + 0x70) != 0) {
                      lVar13 = 0;
                      do {
                        if (*(uint *)(*(longlong *)(lVar8 + 0x68) + lVar13) == uVar5)
                        goto LAB_1482eb302;
                        lVar13 = lVar13 + 4;
                      } while ((longlong)*(int *)(lVar8 + 0x70) * 4 != lVar13);
                    }
                    local_70 = *(undefined4 *)
                                (*(longlong *)
                                  (*(longlong *)(lVar3 + 0x20) + (ulonglong)(uVar5 >> 9) * 8) +
                                (ulonglong)(uVar5 & 0x1ff) * 4);
                    iVar4 = FUN_1449e3bb0(&local_a8,&local_70);
                    uVar12 = uStack_b0;
                    lVar13 = (longlong)(int)uStack_b0;
                    if ((int)uStack_b0 != (int)uStack_a0) {
                      uVar5 = (int)uStack_b0 + 1;
                      uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar5);
                      if (uStack_b0._4_4_ < uVar5) {
                        FUN_1446f48e2(&local_b8,uVar12 & 0xffffffff);
                      }
                      *(undefined4 *)(local_b8 + lVar13 * 4) = 0;
                      piVar1 = (int *)(local_b8 + (longlong)iVar4 * 4);
                      *piVar1 = *piVar1 + 1;
                    }
                  }
                }
LAB_1482eb302:
                lVar14 = lVar14 + 1;
              } while (lVar14 != 3);
              lVar10 = lVar10 + 4;
            } while (lVar10 != lVar9);
            puVar7 = local_c8;
            if (0 < (longlong)(int)uStack_a0) {
              iVar4 = 0;
              if ((int)uStack_a0 != 1) {
                uVar6 = 1;
                uVar12 = 0;
                do {
                  uVar11 = uVar6 & 0xffffffff;
                  if (*(int *)(local_b8 + (longlong)(int)uVar12 * 4) <=
                      *(int *)(local_b8 + uVar6 * 4)) {
                    uVar11 = uVar12;
                  }
                  iVar4 = (int)uVar11;
                  uVar6 = uVar6 + 1;
                  uVar12 = uVar11;
                } while ((longlong)(int)uStack_a0 != uVar6);
              }
              puVar7 = (undefined4 *)((longlong)iVar4 * 4 + local_a8);
            }
            iVar4 = *(int *)(lVar8 + 0x70);
            if ((longlong)iVar4 != 0) {
              uVar2 = *puVar7;
              lVar9 = *(longlong *)(lVar8 + 0x68);
              lVar10 = 0;
              do {
                uVar5 = *(uint *)(lVar9 + lVar10);
                *(undefined4 *)
                 (*(longlong *)(*(longlong *)(lVar3 + 0x20) + (ulonglong)(uVar5 >> 9) * 8) +
                 (ulonglong)(uVar5 & 0x1ff) * 4) = uVar2;
                lVar10 = lVar10 + 4;
              } while ((longlong)iVar4 * 4 != lVar10);
            }
          }
          if (local_b8 != 0) {
            FUN_1400020a8();
          }
          if (local_a8 != 0) {
            FUN_1400020a8();
          }
          lVar8 = lVar8 + 0xa8;
        } while (lVar8 != local_c0);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1482eb450 FUN_1482eb450 body=211 status=ok
// SIG undefined FUN_1482eb450(void)

void FUN_1482eb450(longlong *param_1)

{
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_1482fe62a(param_1 + 0x14);
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
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
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1482eb524 FUN_1482eb524 body=1626 status=ok
// SIG undefined FUN_1482eb524(void)

void FUN_1482eb524(int *param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined1 auStack_d8 [32];
  void **local_b8;
  void **local_b0;
  uint local_a0;
  int local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  int *local_88;
  undefined8 uStack_80;
  uint *local_78;
  undefined8 uStack_70;
  void *local_68;
  undefined8 uStack_60;
  void *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  param_1[2] = 3;
  if (param_1[6] != 1) goto LAB_1482eb556;
  uVar11 = **(uint **)(param_1 + 4);
  uVar18 = *(ulonglong *)
            (*(longlong *)(*(longlong *)(param_2 + 0x1c0) + (ulonglong)(uVar11 >> 9) * 8) + 8 +
            (ulonglong)((uVar11 & 0x1ff) << 4));
  iVar5 = FUN_146bc96d4(param_2,uVar18 >> 0x20);
  iVar6 = FUN_146bc96d4(param_2,uVar18 & 0xffffffff);
  uVar9 = param_1[0x12];
  local_a0 = uVar11;
  if ((longlong)(int)uVar9 < 1) {
    local_78 = (uint *)0x0;
    uStack_70 = 0;
    local_88 = (int *)0x0;
    uStack_80 = 0;
    iVar6 = 0;
LAB_1482eb758:
    uVar18 = 0;
    do {
      if ((longlong)(int)uStack_70 <= (longlong)uVar18) goto LAB_1482eb867;
      uVar11 = local_78[uVar18];
      uVar18 = uVar18 + 1;
      uVar9 = local_78[(longlong)
                       ((ulonglong)(uint)((int)uVar18 >> 0x1f) << 0x20 | uVar18 & 0xffffffff) %
                       (longlong)iVar6 & 0xffffffff];
      iVar5 = FUN_146bc96d4(param_2,uVar11);
      iVar7 = FUN_146bc96d4(param_2,uVar9);
    } while (iVar5 == iVar7);
    uVar11 = FUN_146c3702a(param_2,uVar11,uVar9);
    param_1[0x18] = -1;
LAB_1482eb7c3:
    if (uVar11 != 0xffffffff) goto LAB_1482eb7cc;
  }
  else {
    uVar18 = 0;
    do {
      iVar7 = FUN_146bc96d4(param_2);
      if ((iVar6 == iVar7) || (iVar5 == iVar7)) goto LAB_1482eb608;
      uVar18 = uVar18 + 1;
    } while ((longlong)(int)uVar9 != uVar18);
    uVar18 = 0;
LAB_1482eb608:
    local_78 = (uint *)0x0;
    uStack_70 = 0;
    local_88 = (int *)0x0;
    uStack_80 = 0;
    uVar11 = uVar9;
    local_9c = iVar6;
    do {
      uVar2 = *(uint *)(*(longlong *)(param_1 + 0x10) +
                       ((uVar18 & 0xffffffff) % (ulonglong)uVar9) * 4);
      iVar7 = FUN_146bc96d4(param_2);
      uVar12 = uStack_70;
      local_68 = (void *)CONCAT44(local_68._4_4_,iVar7);
      if ((iVar6 != iVar7) && (iVar5 != iVar7)) {
        lVar13 = (longlong)(int)uStack_70;
        uVar8 = (int)uStack_70 + 1;
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar8);
        if (uStack_70._4_4_ < uVar8) {
          FUN_1446f48e2(&local_78,uVar12 & 0xffffffff);
        }
        local_78[lVar13] = uVar2;
        FUN_1449e3bb0(&local_88);
        iVar6 = local_9c;
      }
      uVar12 = uStack_70;
      uVar18 = (ulonglong)((int)uVar18 + 1);
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
    iVar6 = (int)uStack_70;
    if ((int)uStack_80 != 1) goto LAB_1482eb758;
    param_1[0x18] = *local_88;
    if ((int)uStack_70 == 2) {
      uVar11 = FUN_146c3702a(param_2,*local_78,local_78[1]);
      goto LAB_1482eb7c3;
    }
    if ((int)uStack_70 == 1) {
      lVar13 = *(longlong *)(*(longlong *)(param_2 + 0x180) + (ulonglong)(*local_78 >> 9) * 8);
      uVar18 = (ulonglong)(*local_78 & 0x1ff);
      uStack_60 = CONCAT44(uStack_60._4_4_,*(undefined4 *)(lVar13 + 8 + uVar18 * 0xc));
      local_68 = *(void **)(lVar13 + uVar18 * 0xc);
      lVar13 = 0;
      do {
        uVar11 = *(uint *)((longlong)&local_68 + lVar13 * 4);
        uVar3 = *(undefined8 *)
                 (*(longlong *)(*(longlong *)(param_2 + 0x1c0) + (ulonglong)(uVar11 >> 9) * 8) +
                 (ulonglong)((uVar11 & 0x1ff) << 4));
        if ((*param_1 == (int)uVar3) || (*param_1 == (int)((ulonglong)uVar3 >> 0x20)))
        goto LAB_1482eb7c3;
        lVar13 = lVar13 + 1;
      } while (lVar13 != 3);
      uVar11 = 0xffffffff;
      goto LAB_1482eb7c3;
    }
    uVar11 = FUN_146c3702a(param_2,local_78[(int)uStack_70 / 2],
                           local_78[(longlong)((int)uStack_70 / 2) + 1]);
    if (uVar11 == 0xffffffff) {
      uVar14 = 0;
      uVar18 = 0;
      if (0 < iVar6) {
        uVar14 = uVar12 & 0xffffffff;
      }
      do {
        if (uVar14 == uVar18) goto LAB_1482eb867;
        uVar12 = uVar18 + 1;
        uVar11 = FUN_146c3702a(param_2,local_78[uVar18],
                               local_78[(longlong)
                                        ((ulonglong)(uint)((int)uVar12 >> 0x1f) << 0x20 |
                                        uVar12 & 0xffffffff) % (longlong)iVar6 & 0xffffffff]);
        uVar18 = uVar12;
      } while (uVar11 == 0xffffffff);
    }
LAB_1482eb7cc:
    uVar18 = *(ulonglong *)
              (*(longlong *)(*(longlong *)(param_2 + 0x1c0) + (ulonglong)(uVar11 >> 9) * 8) +
              (ulonglong)((uVar11 & 0x1ff) << 4));
    iVar6 = *param_1;
    uVar12 = 0xffffffff;
    if (iVar6 == (int)(uVar18 >> 0x20)) {
      uVar12 = uVar18;
    }
    if (iVar6 == (int)uVar18) {
      uVar12 = uVar18 >> 0x20;
    }
    *(ulonglong *)(param_1 + 0x1e) = (ulonglong)uVar11 | uVar12 << 0x20;
    local_b0 = &local_58;
    local_58 = (void *)0x0;
    uStack_50 = 0;
    local_68 = (void *)0x0;
    uStack_60 = 0;
    local_b8 = &local_68;
    cVar4 = FUN_146c37426(param_2,iVar6,local_a0,uVar11);
    if (cVar4 != '\0') {
      plVar1 = (longlong *)(param_1 + 0x14);
      FUN_1482ebf22(plVar1);
      iVar6 = *param_1;
      *(int *)(*(longlong *)(param_1 + 0x14) + 0x20) = iVar6;
      plVar15 = *(longlong **)(param_1 + 0x14);
      lVar13 = (longlong)(int)(uint)uStack_60;
      if (lVar13 != 0) {
        iVar6 = (int)plVar15[1];
        *(uint *)(plVar15 + 1) = iVar6 + (uint)uStack_60;
        if ((uint)(*(int *)((longlong)plVar15 + 0xc) - iVar6) < (uint)uStack_60) {
          FUN_1446f48e2(plVar15,iVar6);
        }
        memcpy((void *)((longlong)iVar6 * 4 + *plVar15),local_68,lVar13 << 2);
        iVar6 = *param_1;
        plVar15 = *(longlong **)(param_1 + 0x14);
      }
      *(int *)(plVar15 + 0xd) = iVar6;
      lVar13 = *plVar1;
      lVar16 = (longlong)(int)(uint)uStack_50;
      if (lVar16 != 0) {
        iVar6 = *(int *)(lVar13 + 0x50);
        *(uint *)(lVar13 + 0x50) = iVar6 + (uint)uStack_50;
        if ((uint)(*(int *)(lVar13 + 0x54) - iVar6) < (uint)uStack_50) {
          FUN_1446f48e2((longlong *)(lVar13 + 0x48),iVar6);
        }
        memcpy((void *)((longlong)iVar6 * 4 + *(longlong *)(lVar13 + 0x48)),local_58,lVar16 << 2);
        lVar13 = *plVar1;
      }
      iVar6 = param_1[0x16];
      if ((longlong)iVar6 != 0) {
        lVar16 = 0;
        do {
          lVar17 = (longlong)*(int *)(lVar13 + 8 + lVar16);
          FUN_146c36f2d(&local_90,param_2,**(undefined4 **)(lVar13 + lVar16),*param_1);
          if (lVar17 == 1) {
            *(uint *)(lVar13 + 0x10 + lVar16) = local_90;
            puVar10 = *(uint **)(lVar13 + lVar16);
            uVar9 = local_90;
            uVar11 = local_8c;
          }
          else {
            uVar3 = *(undefined8 *)
                     (*(longlong *)(*(longlong *)(param_2 + 0x1c0) + (ulonglong)(local_90 >> 9) * 8)
                      + 8 + (ulonglong)((local_90 & 0x1ff) << 4));
            iVar5 = *(int *)(*(longlong *)(lVar13 + lVar16) + 4);
            uVar11 = local_90;
            if (iVar5 == (int)((ulonglong)uVar3 >> 0x20)) {
              uVar11 = local_8c;
            }
            if (iVar5 == (int)uVar3) {
              uVar11 = local_8c;
            }
            *(uint *)(lVar13 + 0x10 + lVar16) = uVar11;
            FUN_146c36f2d(&local_98,param_2,
                          *(undefined4 *)(*(longlong *)(lVar13 + lVar16) + -4 + lVar17 * 4),*param_1
                         );
            uVar3 = *(undefined8 *)
                     (*(longlong *)(*(longlong *)(param_2 + 0x1c0) + (ulonglong)(local_98 >> 9) * 8)
                      + 8 + (ulonglong)((local_98 & 0x1ff) << 4));
            puVar10 = *(uint **)(lVar13 + lVar16);
            uVar11 = local_98;
            if (puVar10[lVar17 + -2] == (uint)((ulonglong)uVar3 >> 0x20)) {
              uVar11 = local_94;
            }
            if (puVar10[lVar17 + -2] == (uint)uVar3) {
              uVar11 = local_94;
            }
            uVar9 = *(uint *)(lVar13 + 0x10 + lVar16);
          }
          *(uint *)(lVar13 + 0x14 + lVar16) = uVar11;
          lVar17 = *(longlong *)(*(longlong *)(param_2 + 0x180) + (ulonglong)(*puVar10 >> 9) * 8);
          uVar18 = (ulonglong)(*puVar10 & 0x1ff);
          iVar5 = 0;
          iVar7 = 0;
          if ((*(uint *)(lVar17 + uVar18 * 0xc) != uVar9) &&
             (iVar7 = 1, *(uint *)(lVar17 + uVar18 * 0xc + 4) != uVar9)) {
            iVar7 = (uint)(*(uint *)(lVar17 + 8 + uVar18 * 0xc) == uVar9) * 3 + -1;
          }
          *(int *)(lVar13 + 0x18 + lVar16) = iVar7;
          lVar17 = *(longlong *)
                    (*(longlong *)(param_2 + 0x180) +
                    (ulonglong)(puVar10[*(int *)(lVar13 + 8 + lVar16) + -1] >> 9) * 8);
          uVar18 = (ulonglong)(puVar10[*(int *)(lVar13 + 8 + lVar16) + -1] & 0x1ff);
          if ((*(uint *)(lVar17 + uVar18 * 0xc) != uVar11) &&
             (iVar5 = 1, *(uint *)(lVar17 + uVar18 * 0xc + 4) != uVar11)) {
            iVar5 = (uint)(*(uint *)(lVar17 + 8 + uVar18 * 0xc) == uVar11) * 3 + -1;
          }
          *(int *)(lVar13 + 0x1c + lVar16) = iVar5;
          lVar16 = lVar16 + 0x48;
        } while ((longlong)iVar6 * 0x48 != lVar16);
      }
      param_1[2] = 1;
    }
    lVar13 = 0x20;
    do {
      if (*(longlong *)((longlong)&local_78 + lVar13) != 0) {
        FUN_1400020a8();
      }
      lVar13 = lVar13 + -0x10;
    } while (lVar13 != 0);
  }
LAB_1482eb867:
  if (local_88 != (int *)0x0) {
    FUN_1400020a8();
  }
  if (local_78 != (uint *)0x0) {
    FUN_1400020a8();
  }
LAB_1482eb556:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1482ebb80 FUN_1482ebb80 body=928 status=ok
// SIG undefined FUN_1482ebb80(void)

void FUN_1482ebb80(uint *param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 *_Src;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined1 auStack_f8 [44];
  uint local_cc;
  uint *local_c8;
  longlong local_c0;
  undefined4 *local_b8;
  undefined8 uStack_b0;
  int local_a8;
  int iStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar14 = param_1[0x12];
  uVar13 = 0;
  uVar7 = 0;
  if (0 < (int)uVar14) {
    uVar13 = (ulonglong)uVar14;
  }
  do {
    if (uVar13 == uVar7) {
      param_1[2] = 3;
      goto LAB_1482ebdea;
    }
    uVar1 = uVar7 + 1;
    uVar10 = (longlong)((ulonglong)(uint)((int)uVar1 >> 0x1f) << 0x20 | uVar1 & 0xffffffff) %
             (longlong)(int)uVar14 & 0xffffffff;
    iVar4 = FUN_146c3702a(param_2,*(undefined4 *)(*(longlong *)(param_1 + 0x10) + uVar7 * 4),
                          *(undefined4 *)(*(longlong *)(param_1 + 0x10) + uVar10 * 4));
    uVar7 = uVar1;
  } while (iVar4 != **(int **)(param_1 + 4));
  local_b8 = (undefined4 *)0x0;
  local_a8 = 0xffffffff;
  iStack_a4 = 0xffffffff;
  uStack_a0 = 0xffffffff;
  uStack_9c = 0xffffffff;
  local_78 = 0;
  local_98 = CONCAT44(local_98._4_4_,*param_1);
  lVar9 = *(longlong *)(param_1 + 0x10);
  uStack_b0 = 1;
  uVar11 = 0;
  local_cc = uVar14;
  FUN_1446f48e2(&local_b8);
  *local_b8 = *(undefined4 *)(lVar9 + uVar10 * 4);
  local_a8 = **(int **)(param_1 + 4);
  if (0 < (int)local_cc) {
    local_c8 = param_1 + 0x14;
    uVar14 = local_cc;
    local_c0 = param_2;
    do {
      uVar7 = uVar10 % (ulonglong)uVar14;
      uVar10 = (ulonglong)((int)uVar10 + 1);
      uVar3 = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + (uVar10 % (ulonglong)uVar14) * 4);
      iVar4 = FUN_146c3702a(param_2,*(undefined4 *)(*(longlong *)(param_1 + 0x10) + uVar7 * 4),uVar3
                           );
      if ((longlong)(int)param_1[6] != 0) {
        lVar9 = 0;
        do {
          if (*(int *)(*(longlong *)(param_1 + 4) + lVar9) == iVar4) {
            uVar14 = param_1[0x16];
            uVar5 = uVar14 + 1;
            param_1[0x16] = uVar5;
            iStack_a4 = iVar4;
            if (param_1[0x17] < uVar5) {
              FUN_14830be04(local_c8);
            }
            _Src = local_b8;
            puVar2 = (undefined8 *)(*(longlong *)local_c8 + (longlong)(int)uVar14 * 0x48);
            *puVar2 = 0;
            lVar9 = (longlong)(int)uStack_b0;
            *(int *)(puVar2 + 1) = (int)uStack_b0;
            if (lVar9 == 0) {
              *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
            }
            else {
              FUN_144a06ca8(puVar2,uStack_b0 & 0xffffffff,0);
              memcpy((void *)*puVar2,_Src,lVar9 << 2);
            }
            uVar14 = local_cc;
            *(undefined1 *)(puVar2 + 8) = local_78;
            *(undefined4 *)(puVar2 + 6) = (undefined4)local_88;
            *(undefined4 *)((longlong)puVar2 + 0x34) = local_88._4_4_;
            *(undefined4 *)(puVar2 + 7) = (undefined4)uStack_80;
            *(undefined4 *)((longlong)puVar2 + 0x3c) = uStack_80._4_4_;
            *(undefined4 *)(puVar2 + 4) = (undefined4)local_98;
            *(undefined4 *)((longlong)puVar2 + 0x24) = local_98._4_4_;
            *(undefined4 *)(puVar2 + 5) = (undefined4)uStack_90;
            *(undefined4 *)((longlong)puVar2 + 0x2c) = uStack_90._4_4_;
            *(int *)(puVar2 + 2) = local_a8;
            *(int *)((longlong)puVar2 + 0x14) = iStack_a4;
            *(undefined4 *)(puVar2 + 3) = uStack_a0;
            *(undefined4 *)((longlong)puVar2 + 0x1c) = uStack_9c;
            if (local_b8 != (undefined4 *)0x0) {
              FUN_1400020a8();
            }
            local_b8 = (undefined4 *)0x0;
            uStack_b0 = 0;
            iStack_a4 = 0xffffffff;
            uStack_a0 = 0xffffffff;
            uStack_9c = 0xffffffff;
            local_88 = 0;
            uStack_80 = 0;
            uStack_90 = 0;
            local_78 = 0;
            local_98 = (ulonglong)*param_1;
            param_2 = local_c0;
            local_a8 = iVar4;
            break;
          }
          lVar9 = lVar9 + 4;
        } while ((longlong)(int)param_1[6] * 4 != lVar9);
      }
      lVar9 = (longlong)(int)uStack_b0;
      uVar5 = (int)uStack_b0 + 1;
      uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar5);
      if (uStack_b0._4_4_ < uVar5) {
        FUN_1446f48e2(&local_b8);
      }
      local_b8[lVar9] = uVar3;
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar14);
  }
  if ((longlong)(int)param_1[0x16] != 0) {
    puVar6 = *(undefined8 **)(param_1 + 0x14);
    puVar2 = puVar6 + (longlong)(int)param_1[0x16] * 9;
    do {
      uVar14 = *(uint *)*puVar6;
      lVar9 = *(longlong *)(*(longlong *)(param_2 + 0x180) + (ulonglong)(uVar14 >> 9) * 8);
      uVar7 = (ulonglong)(uVar14 & 0x1ff);
      iVar4 = *(int *)(puVar6 + 2);
      iVar8 = 0;
      iVar12 = 0;
      if ((*(int *)(lVar9 + uVar7 * 0xc) != iVar4) &&
         (iVar12 = 1, *(int *)(lVar9 + uVar7 * 0xc + 4) != iVar4)) {
        iVar12 = (uint)(*(int *)(lVar9 + 8 + uVar7 * 0xc) == iVar4) * 3 + -1;
      }
      *(int *)(puVar6 + 3) = iVar12;
      iVar4 = *(int *)((longlong)puVar6 + 0x14);
      uVar14 = ((uint *)*puVar6)[*(int *)(puVar6 + 1) + -1];
      lVar9 = *(longlong *)(*(longlong *)(param_2 + 0x180) + (ulonglong)(uVar14 >> 9) * 8);
      uVar7 = (ulonglong)(uVar14 & 0x1ff);
      if ((*(int *)(lVar9 + uVar7 * 0xc) != iVar4) &&
         (iVar8 = 1, *(int *)(lVar9 + uVar7 * 0xc + 4) != iVar4)) {
        iVar8 = (uint)(*(int *)(lVar9 + 8 + uVar7 * 0xc) == iVar4) * 3 + -1;
      }
      *(int *)((longlong)puVar6 + 0x1c) = iVar8;
      puVar6 = puVar6 + 9;
    } while (puVar6 != puVar2);
    uVar14 = 0;
    if (1 < (int)param_1[0x16]) goto LAB_1482ebf06;
  }
  uVar14 = 3;
LAB_1482ebf06:
  param_1[2] = uVar14;
  if (local_b8 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
LAB_1482ebdea:
  if ((local_70 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1482ebf22 FUN_1482ebf22 body=115 status=ok
// SIG undefined FUN_1482ebf22(void)

void FUN_1482ebf22(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if ((longlong)iVar1 < 2) {
    *(undefined4 *)(param_1 + 1) = 2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < 2U - iVar1) {
      FUN_14830be04(param_1,iVar1);
    }
    FUN_14830be98((longlong)iVar1 * 0x48 + *param_1,2U - iVar1);
    return;
  }
  if (iVar1 == 2) {
    return;
  }
  FUN_14830beb4(param_1,iVar1 + -2);
  FUN_14830bf0a(param_1);
  return;
}



// FUNCTION 1482ebf96 FUN_1482ebf96 body=1221 status=ok
// SIG undefined FUN_1482ebf96(void)

void FUN_1482ebf96(longlong param_1,longlong *param_2,longlong param_3,undefined8 *param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 auStack_f8 [32];
  undefined4 *local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong *local_c0;
  longlong local_b8;
  uint local_b0;
  uint local_ac;
  undefined4 *local_a8;
  ulonglong uStack_a0;
  undefined8 local_98;
  undefined1 local_90 [8];
  uint *local_88;
  uint *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  iVar5 = *(int *)(param_3 + 0x10);
  local_a8 = (undefined4 *)0x0;
  uStack_a0 = 0;
  local_c8 = param_1;
  FUN_1482ec45c(&local_a8,iVar5);
  local_88._0_5_ = (uint5)**(uint **)(param_3 + 8);
  local_80 = (uint *)0x0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  FUN_1482ec4d8(local_a8);
  lVar9 = 0x20;
  do {
    if (*(longlong *)(local_90 + lVar9) != 0) {
      FUN_1400020a8();
    }
    lVar9 = lVar9 + -0x10;
  } while (lVar9 != 0);
  if (*(char *)(param_3 + 0x44) == '\x01') {
    local_d8 = local_a8 + 6;
    uVar3 = FUN_146c37136(param_2,*local_a8,**(undefined4 **)(param_3 + 0x18),local_a8 + 2);
    *(undefined1 *)(local_a8 + 1) = uVar3;
  }
  if (2 < iVar5) {
    lVar9 = 1;
    lVar10 = 0;
    do {
      *(undefined4 *)((longlong)local_a8 + lVar10 + 0x28) =
           *(undefined4 *)(*(longlong *)(param_3 + 8) + lVar9 * 4);
      cVar4 = FUN_146c0b51e(param_2,*(undefined4 *)((longlong)local_a8 + lVar10 + 0x28));
      if (cVar4 == '\0') {
        local_d0 = (longlong)local_a8 + lVar10 + 0x40;
        local_d8 = (undefined4 *)((longlong)local_a8 + lVar10 + 0x30);
        uVar3 = FUN_146c37426(param_2,local_d8[-2],
                              *(undefined4 *)(*(longlong *)(param_3 + 0x18) + -4 + lVar9 * 4),
                              *(undefined4 *)(*(longlong *)(param_3 + 0x18) + lVar9 * 4));
        *(undefined1 *)((longlong)local_a8 + lVar10 + 0x2c) = uVar3;
      }
      else {
        *(undefined1 *)((longlong)local_a8 + lVar10 + 0x2c) = 0;
      }
      lVar9 = lVar9 + 1;
      lVar10 = lVar10 + 0x28;
    } while ((ulonglong)(iVar5 - 1U) * 0x28 + -0x28 != lVar10);
  }
  lVar9 = (longlong)(int)(iVar5 - 1U);
  local_88._0_5_ = (uint5)*(uint *)(*(longlong *)(param_3 + 8) + lVar9 * 4);
  local_80 = (uint *)0x0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  FUN_1482ec4d8(local_a8 + lVar9 * 10);
  lVar10 = 0x20;
  do {
    if (*(longlong *)(local_90 + lVar10) != 0) {
      FUN_1400020a8();
    }
    lVar10 = lVar10 + -0x10;
  } while (lVar10 != 0);
  if (*(char *)(param_3 + 0x45) == '\x01') {
    local_d8 = local_a8 + lVar9 * 10 + 6;
    uVar3 = FUN_146c37136(param_2,local_a8[lVar9 * 10],
                          *(undefined4 *)(*(longlong *)(param_3 + 0x18) + -8 + (longlong)iVar5 * 4))
    ;
    *(undefined1 *)(local_a8 + lVar9 * 10 + 1) = uVar3;
  }
  FUN_143affee7(&local_a8);
  lVar9 = (longlong)(int)uStack_a0;
  if (0 < lVar9) {
    plVar1 = (longlong *)(param_3 + 0x60);
    lVar10 = 0;
    do {
      puVar2 = local_a8;
      if (param_4 != (undefined8 *)0x0) {
        local_90[0] = 1;
        local_80 = (uint *)&local_98;
        local_88 = (uint *)&LAB_1482fe864;
        local_98 = param_4;
        FUN_146c03fd0(*param_4,*(undefined4 *)((longlong)local_a8 + lVar10),&local_88);
      }
      if (*(char *)((longlong)puVar2 + lVar10 + 4) == '\x01') {
        local_88 = *(uint **)((longlong)puVar2 + lVar10 + 8);
        local_80 = (uint *)CONCAT44(local_80._4_4_,*(undefined4 *)((longlong)puVar2 + lVar10 + 0x10)
                                   );
        iVar5 = (**(code **)(*param_2 + 0x48))
                          (param_2,*(undefined4 *)((longlong)puVar2 + lVar10),&local_88,&local_98);
        if (iVar5 != 0) goto LAB_1482ec228;
        iVar5 = *(int *)(param_3 + 0x68);
        *(uint *)(param_3 + 0x68) = iVar5 + 1U;
        if (*(uint *)(param_3 + 0x6c) < iVar5 + 1U) {
          FUN_1446f48e2(plVar1,iVar5);
        }
        lVar6 = *plVar1;
        uVar7 = local_98._4_4_;
      }
      else {
LAB_1482ec228:
        iVar5 = *(int *)(param_3 + 0x68);
        *(uint *)(param_3 + 0x68) = iVar5 + 1U;
        if (*(uint *)(param_3 + 0x6c) < iVar5 + 1U) {
          FUN_1446f48e2(plVar1,iVar5);
        }
        lVar6 = *plVar1;
        uVar7 = *(undefined4 *)((longlong)puVar2 + lVar10);
      }
      *(undefined4 *)(lVar6 + (longlong)iVar5 * 4) = uVar7;
      lVar10 = lVar10 + 0x28;
    } while (lVar9 * 0x28 != lVar10);
  }
  iVar5 = *(int *)(param_3 + 0x10);
  if (1 < iVar5) {
    plVar1 = (longlong *)(local_c8 + 0xe0);
    local_b8 = local_c8 + 0x118;
    uVar11 = 0;
    local_c0 = plVar1;
    do {
      local_ac = *(uint *)(*(longlong *)(param_3 + 0x18) + uVar11 * 4);
      local_b0 = FUN_146c061e0(param_2,*(undefined4 *)(*(longlong *)(param_3 + 0x60) + uVar11 * 4),
                               *(undefined4 *)(*(longlong *)(param_3 + 0x60) + 4 + uVar11 * 4));
      iVar8 = *(int *)(param_3 + 0x78);
      *(uint *)(param_3 + 0x78) = iVar8 + 1U;
      if (*(uint *)(param_3 + 0x7c) < iVar8 + 1U) {
        FUN_1446f48e2((longlong *)(param_3 + 0x70),iVar8);
      }
      *(uint *)(*(longlong *)(param_3 + 0x70) + (longlong)iVar8 * 4) = local_b0;
      if ((((-1 < (int)local_b0) &&
           ((int)local_b0 < (int)param_2[0x3a] * 0x200 + *(int *)((longlong)param_2 + 0x1d4))) &&
          ((ushort)(*(short *)(*(longlong *)(param_2[0x3b] + (ulonglong)(local_b0 >> 9) * 8) +
                              (ulonglong)(local_b0 & 0x1ff) * 2) - 1U) < 0xfffe)) &&
         (local_ac != local_b0)) {
        if (*(int *)(local_c8 + 0xe8) != *(int *)(local_c8 + 0x114)) {
          lVar9 = *(longlong *)(local_c8 + 0x120);
          if (*(longlong *)(local_c8 + 0x120) == 0) {
            lVar9 = local_b8;
          }
          iVar8 = *(int *)(lVar9 + (ulonglong)(*(int *)(local_c8 + 0x128) - 1U & local_ac) * 4);
          if (iVar8 != -1) {
            do {
              if (*(uint *)(*local_c0 + (longlong)iVar8 * 0x10) == local_ac) goto LAB_1482ec346;
              iVar8 = *(int *)((longlong)iVar8 * 0x10 + *local_c0 + 8);
            } while (iVar8 != -1);
          }
        }
        local_88 = &local_ac;
        local_80 = &local_b0;
        FUN_140263e2a(plVar1,&local_98,&local_88,0);
        local_80 = &local_ac;
        local_88 = &local_b0;
        FUN_140263e2a(plVar1,&local_98,&local_88);
      }
LAB_1482ec346:
      uVar11 = uVar11 + 1;
    } while (uVar11 != iVar5 - 1);
  }
  FUN_14830bfb8(local_a8,uStack_a0 & 0xffffffff);
  if (local_a8 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1482ec45c FUN_1482ec45c body=122 status=ok
// SIG undefined FUN_1482ec45c(void)

void FUN_1482ec45c(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14830c00e(param_1,iVar1);
    }
    FUN_14830bff2((longlong)iVar1 * 0x28 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_14830c0a2(param_1,param_2,iVar1 - param_2);
    FUN_14830c104(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1482ec4d8 FUN_1482ec4d8 body=144 status=ok
// SIG undefined FUN_1482ec4d8(void)

undefined4 * FUN_1482ec4d8(undefined4 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = *param_2;
  bVar3 = false;
  lVar5 = 0;
  do {
    if (param_1 != param_2) {
      plVar1 = (longlong *)(param_1 + lVar5 * 4 + 2);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar4 = (longlong *)(param_2 + lVar5 * 4 + 2);
      *plVar1 = *plVar4;
      *plVar4 = 0;
      *(int *)(plVar1 + 1) = (int)plVar4[1];
      *(undefined4 *)((longlong)plVar1 + 0xc) = *(undefined4 *)((longlong)plVar4 + 0xc);
      plVar4[1] = 0;
    }
    lVar5 = 1;
    bVar2 = !bVar3;
    bVar3 = true;
  } while (bVar2);
  return param_1;
}



// FUNCTION 1482ec568 FUN_1482ec568 body=975 status=ok
// SIG undefined FUN_1482ec568(void)

void FUN_1482ec568(longlong param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong *local_90;
  longlong local_88;
  uint local_80;
  uint local_7c;
  longlong local_78;
  ulonglong uStack_70;
  undefined8 local_68;
  undefined1 local_60;
  uint *local_58;
  uint *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar4 = (int)param_3[1];
  local_78 = 0;
  uStack_70 = 0;
  local_98 = param_1;
  FUN_1482ec45c(&local_78,iVar4);
  if (0 < (longlong)iVar4) {
    lVar10 = -4;
    lVar9 = 0;
    do {
      *(undefined4 *)(local_78 + lVar9) = *(undefined4 *)(*param_3 + 4 + lVar10);
      cVar2 = FUN_146c0b51e(param_2,*(undefined4 *)(local_78 + lVar9));
      if (cVar2 == '\0') {
        if (lVar9 == 0) {
          lVar5 = param_3[2];
          puVar8 = (undefined4 *)(lVar5 + (longlong)((int)param_3[3] + -1) * 4);
        }
        else {
          lVar5 = param_3[2];
          puVar8 = (undefined4 *)(lVar5 + lVar10);
        }
        local_a0 = local_78 + lVar9 + 0x18;
        local_a8 = local_78 + 8 + lVar9;
        uVar3 = FUN_146c37426(param_2,*(undefined4 *)(local_a8 + -8),*puVar8,
                              *(undefined4 *)(lVar5 + 4 + lVar10));
        *(undefined1 *)(local_78 + 4 + lVar9) = uVar3;
      }
      else {
        *(undefined1 *)(local_78 + 4 + lVar9) = 0;
      }
      lVar10 = lVar10 + 4;
      lVar9 = lVar9 + 0x28;
    } while ((longlong)iVar4 * 0x28 != lVar9);
  }
  FUN_143affee7(&local_78);
  lVar9 = (longlong)(int)uStack_70;
  if (0 < lVar9) {
    plVar1 = param_3 + 8;
    lVar10 = 0;
    do {
      lVar5 = local_78;
      if (param_4 != (undefined8 *)0x0) {
        local_60 = 1;
        local_50 = (uint *)&local_68;
        local_58 = (uint *)&LAB_1482fe864;
        local_68 = param_4;
        FUN_146c03fd0(*param_4,*(undefined4 *)(local_78 + lVar10),&local_58);
      }
      if (*(char *)(lVar5 + 4 + lVar10) == '\x01') {
        local_58 = *(uint **)(lVar5 + 0x18 + lVar10);
        local_50 = (uint *)CONCAT44(local_50._4_4_,*(undefined4 *)(lVar5 + 0x20 + lVar10));
        iVar4 = (**(code **)(*param_2 + 0x48))
                          (param_2,*(undefined4 *)(lVar5 + lVar10),&local_58,&local_68);
        if (iVar4 != 0) goto LAB_1482ec705;
        iVar4 = (int)param_3[9];
        *(uint *)(param_3 + 9) = iVar4 + 1U;
        if (*(uint *)((longlong)param_3 + 0x4c) < iVar4 + 1U) {
          FUN_1446f48e2(plVar1,iVar4);
        }
        lVar6 = *plVar1;
        uVar7 = local_68._4_4_;
      }
      else {
LAB_1482ec705:
        iVar4 = (int)param_3[9];
        *(uint *)(param_3 + 9) = iVar4 + 1U;
        if (*(uint *)((longlong)param_3 + 0x4c) < iVar4 + 1U) {
          FUN_1446f48e2(plVar1,iVar4);
        }
        lVar6 = *plVar1;
        uVar7 = *(undefined4 *)(lVar5 + lVar10);
      }
      *(undefined4 *)(lVar6 + (longlong)iVar4 * 4) = uVar7;
      lVar10 = lVar10 + 0x28;
    } while (lVar9 * 0x28 != lVar10);
  }
  lVar9 = (longlong)(int)param_3[1];
  if (0 < lVar9) {
    plVar1 = (longlong *)(local_98 + 0xe0);
    local_88 = local_98 + 0x118;
    lVar10 = 0;
    local_90 = plVar1;
    do {
      local_7c = *(uint *)(param_3[2] + lVar10 * 4);
      lVar5 = lVar10 * 4;
      lVar10 = lVar10 + 1;
      lVar6 = 0;
      if (lVar10 != lVar9) {
        lVar6 = lVar10;
      }
      local_80 = FUN_146c061e0(param_2,*(undefined4 *)(param_3[8] + lVar5),
                               *(undefined4 *)(param_3[8] + lVar6 * 4));
      iVar4 = (int)param_3[0xb];
      *(uint *)(param_3 + 0xb) = iVar4 + 1U;
      if (*(uint *)((longlong)param_3 + 0x5c) < iVar4 + 1U) {
        FUN_1446f48e2(param_3 + 10,iVar4);
      }
      *(uint *)(param_3[10] + (longlong)iVar4 * 4) = local_80;
      if ((((-1 < (int)local_80) &&
           ((int)local_80 < (int)param_2[0x3a] * 0x200 + *(int *)((longlong)param_2 + 0x1d4))) &&
          ((ushort)(*(short *)(*(longlong *)(param_2[0x3b] + (ulonglong)(local_80 >> 9) * 8) +
                              (ulonglong)(local_80 & 0x1ff) * 2) - 1U) < 0xfffe)) &&
         (local_7c != local_80)) {
        if (*(int *)(local_98 + 0xe8) != *(int *)(local_98 + 0x114)) {
          lVar5 = *(longlong *)(local_98 + 0x120);
          if (*(longlong *)(local_98 + 0x120) == 0) {
            lVar5 = local_88;
          }
          iVar4 = *(int *)(lVar5 + (ulonglong)(*(int *)(local_98 + 0x128) - 1U & local_7c) * 4);
          if (iVar4 != -1) {
            do {
              if (*(uint *)(*local_90 + (longlong)iVar4 * 0x10) == local_7c) goto LAB_1482ec82d;
              iVar4 = *(int *)((longlong)iVar4 * 0x10 + *local_90 + 8);
            } while (iVar4 != -1);
          }
        }
        local_58 = &local_7c;
        local_50 = &local_80;
        FUN_140263e2a(plVar1,&local_68,&local_58,0);
        local_50 = &local_7c;
        local_58 = &local_80;
        FUN_140263e2a(plVar1,&local_68,&local_58);
      }
LAB_1482ec82d:
    } while (lVar10 != lVar9);
  }
  FUN_14830bfb8(local_78,uStack_70 & 0xffffffff);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1482ec938 FUN_1482ec938 body=621 status=ok
// SIG undefined FUN_1482ec938(void)

void FUN_1482ec938(longlong param_1,longlong *param_2,undefined4 *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  uint *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong *local_a0;
  undefined4 *local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  uint local_74;
  uint local_70;
  undefined1 local_6c [4];
  undefined8 local_68;
  undefined1 local_60;
  uint *local_58;
  uint *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a8 = param_1;
  if (param_4 != (undefined8 *)0x0) {
    local_50 = (uint *)&local_68;
    local_60 = 1;
    local_58 = (uint *)&LAB_1482fe864;
    local_68 = param_4;
    FUN_146c03fd0(*param_4,*param_3);
  }
  local_58 = *(uint **)(*(longlong *)(param_3 + 0x14) + 0x48);
  local_50 = (uint *)CONCAT44(local_50._4_4_,*(undefined4 *)(*(longlong *)(param_3 + 0x14) + 0x50));
  iVar4 = (**(code **)(*param_2 + 0x48))(param_2,*param_3,&local_58,&local_68);
  if (iVar4 == 0) {
    *(undefined4 *)(*(longlong *)(param_3 + 0x14) + 0x68) = local_68._4_4_;
    local_90 = (longlong)(int)param_3[0x16];
    if (0 < local_90) {
      plVar1 = (longlong *)(local_a8 + 0xe0);
      local_80 = local_a8 + 0x118;
      lVar5 = 0;
      local_a0 = plVar1;
      local_98 = param_3;
      do {
        plVar9 = (longlong *)(lVar5 * 0x48 + *(longlong *)(local_98 + 0x14));
        lVar8 = 0;
        local_88 = lVar5;
        bVar3 = true;
        do {
          bVar2 = bVar3;
          local_70 = *(uint *)((longlong)plVar9 + lVar8 * 4 + 0x10);
          if (bVar2) {
            puVar6 = (uint *)*plVar9;
          }
          else {
            puVar6 = (uint *)((longlong)((int)plVar9[1] + -1) * 4 + *plVar9);
          }
          lVar5 = *(longlong *)(param_2[0x30] + (ulonglong)(*puVar6 >> 9) * 8);
          uVar7 = (ulonglong)(*puVar6 & 0x1ff);
          local_50 = (uint *)CONCAT44(local_50._4_4_,*(undefined4 *)(lVar5 + 8 + uVar7 * 0xc));
          local_58 = *(uint **)(lVar5 + uVar7 * 0xc);
          local_74 = *(uint *)((longlong)&local_58 +
                              (longlong)*(int *)((longlong)plVar9 + lVar8 * 4 + 0x18) * 4);
          if (local_70 != local_74) {
            if (*(int *)(local_a8 + 0xe8) != *(int *)(local_a8 + 0x114)) {
              lVar5 = *(longlong *)(local_a8 + 0x120);
              if (*(longlong *)(local_a8 + 0x120) == 0) {
                lVar5 = local_80;
              }
              iVar4 = *(int *)(lVar5 + (ulonglong)(*(int *)(local_a8 + 0x128) - 1U & local_70) * 4);
              if (iVar4 != -1) {
                do {
                  if (*(uint *)(*local_a0 + (longlong)iVar4 * 0x10) == local_70) goto LAB_1482ecb17;
                  iVar4 = *(int *)((longlong)iVar4 * 0x10 + *local_a0 + 8);
                } while (iVar4 != -1);
              }
            }
            local_58 = &local_70;
            local_50 = &local_74;
            FUN_140263e2a(plVar1,local_6c,&local_58,0);
            local_50 = &local_70;
            local_58 = &local_74;
            FUN_140263e2a(plVar1,local_6c,&local_58,0);
LAB_1482ecb17:
            *(uint *)((longlong)plVar9 + lVar8 * 4 + 0x10) = local_74;
          }
          lVar8 = 1;
          bVar3 = false;
        } while (bVar2);
        lVar5 = local_88 + 1;
      } while (lVar5 != local_90);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1482ecba6 FUN_1482ecba6 body=677 status=ok
// SIG undefined FUN_1482ecba6(void)

void FUN_1482ecba6(longlong param_1,longlong *param_2,undefined4 *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  uint *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  longlong local_98;
  longlong *local_90;
  undefined4 *local_88;
  longlong local_80;
  longlong local_78;
  uint local_70;
  uint local_6c;
  undefined8 local_68;
  undefined1 local_60;
  uint *local_58;
  uint *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_98 = param_1;
  if (param_4 != (undefined8 *)0x0) {
    local_50 = (uint *)&local_68;
    local_60 = 1;
    local_58 = (uint *)&LAB_1482fe864;
    local_68 = param_4;
    FUN_146c03fd0(*param_4,*param_3);
  }
  local_a0 = (longlong)(int)param_3[0x16];
  if (1 < local_a0) {
    lVar6 = local_a0 * 0x48;
    lVar9 = 0x48;
    do {
      lVar2 = *(longlong *)(param_3 + 0x14);
      local_58 = *(uint **)(lVar2 + lVar9);
      local_50 = (uint *)CONCAT44(local_50._4_4_,*(undefined4 *)(lVar2 + 8 + lVar9));
      iVar5 = (**(code **)(*param_2 + 0x48))(param_2,*param_3,&local_58,&local_68);
      if (iVar5 == 0) {
        *(undefined4 *)(lVar2 + 0x20 + lVar9) = local_68._4_4_;
      }
      lVar9 = lVar9 + 0x48;
    } while (lVar6 != lVar9);
  }
  if (0 < (int)local_a0) {
    plVar1 = (longlong *)(local_98 + 0xe0);
    local_78 = local_98 + 0x118;
    lVar6 = 0;
    local_90 = plVar1;
    local_88 = param_3;
    do {
      plVar10 = (longlong *)(lVar6 * 0x48 + *(longlong *)(local_88 + 0x14));
      lVar9 = 0;
      local_80 = lVar6;
      bVar4 = true;
      do {
        bVar3 = bVar4;
        local_6c = *(uint *)((longlong)plVar10 + lVar9 * 4 + 0x10);
        if (bVar3) {
          puVar7 = (uint *)*plVar10;
        }
        else {
          puVar7 = (uint *)((longlong)((int)plVar10[1] + -1) * 4 + *plVar10);
        }
        lVar6 = *(longlong *)(param_2[0x30] + (ulonglong)(*puVar7 >> 9) * 8);
        uVar8 = (ulonglong)(*puVar7 & 0x1ff);
        local_50 = (uint *)CONCAT44(local_50._4_4_,*(undefined4 *)(lVar6 + 8 + uVar8 * 0xc));
        local_58 = *(uint **)(lVar6 + uVar8 * 0xc);
        local_70 = *(uint *)((longlong)&local_58 +
                            (longlong)*(int *)((longlong)plVar10 + lVar9 * 4 + 0x18) * 4);
        if (local_6c != local_70) {
          if (*(int *)(local_98 + 0xe8) != *(int *)(local_98 + 0x114)) {
            lVar6 = *(longlong *)(local_98 + 0x120);
            if (*(longlong *)(local_98 + 0x120) == 0) {
              lVar6 = local_78;
            }
            iVar5 = *(int *)(lVar6 + (ulonglong)(*(int *)(local_98 + 0x128) - 1U & local_6c) * 4);
            if (iVar5 != -1) {
              do {
                if (*(uint *)(*local_90 + (longlong)iVar5 * 0x10) == local_6c) goto LAB_1482ecd94;
                iVar5 = *(int *)((longlong)iVar5 * 0x10 + *local_90 + 8);
              } while (iVar5 != -1);
            }
          }
          local_58 = &local_6c;
          local_50 = &local_70;
          FUN_140263e2a(plVar1,&local_68,&local_58,0);
          local_50 = &local_6c;
          local_58 = &local_70;
          FUN_140263e2a(plVar1,&local_68,&local_58,0);
LAB_1482ecd94:
          *(uint *)((longlong)plVar10 + lVar9 * 4 + 0x10) = local_70;
        }
        lVar9 = 1;
        bVar4 = false;
      } while (bVar3);
      lVar6 = local_80 + 1;
    } while (lVar6 != local_a0);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1482ece4c FUN_1482ece4c body=538 status=ok
// SIG undefined FUN_1482ece4c(void)

void FUN_1482ece4c(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  int *piVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  longlong local_88;
  undefined8 uStack_80;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_88 = 0;
  uStack_80 = 0;
  iVar3 = *(int *)(param_2 + 0x58);
  if ((longlong)iVar3 != 0) {
    lVar4 = *(longlong *)(param_2 + 0x50);
    lVar10 = 0;
    lVar6 = 0;
    do {
      uVar5 = uStack_80;
      uVar7 = *(uint *)(lVar4 + 0x20 + lVar10);
      lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar7 >> 9) * 8);
      uVar8 = (ulonglong)(uVar7 & 0x1ff);
      local_98 = *(undefined8 *)(lVar11 + 0x10 + uVar8 * 0x18);
      puVar1 = (undefined4 *)(lVar11 + uVar8 * 0x18);
      local_a8._0_4_ = *puVar1;
      local_a8._4_4_ = puVar1[1];
      uStack_a0._0_4_ = puVar1[2];
      uStack_a0._4_4_ = puVar1[3];
      lVar11 = (longlong)(int)uStack_80;
      uVar7 = (int)uStack_80 + 1;
      uStack_80 = CONCAT44(uStack_80._4_4_,uVar7);
      if (uStack_80._4_4_ < uVar7) {
        FUN_1403e3958(&local_88,uVar5 & 0xffffffff);
        lVar6 = local_88;
      }
      *(undefined8 *)(lVar6 + 0x10 + lVar11 * 0x18) = local_98;
      puVar1 = (undefined4 *)(lVar6 + lVar11 * 0x18);
      *puVar1 = (undefined4)local_a8;
      puVar1[1] = local_a8._4_4_;
      puVar1[2] = (int)uStack_a0;
      puVar1[3] = uStack_a0._4_4_;
      lVar10 = lVar10 + 0x48;
    } while ((longlong)iVar3 * 0x48 != lVar10);
  }
  local_a8 = (int *)0x0;
  uStack_a0 = 0;
  FUN_146bd1a1a(&local_88,&local_a8,1);
  iVar3 = *(int *)(param_1 + 0x1b0);
  *(int *)(param_1 + 0x1b0) = iVar3 + 1;
  *(int *)(param_2 + 0x60) = iVar3;
  if ((longlong)(int)uStack_a0 != 0) {
    piVar2 = local_a8 + (longlong)(int)uStack_a0 * 3;
    piVar9 = local_a8;
    do {
      lVar4 = *(longlong *)(param_2 + 0x50);
      local_6c = *(undefined4 *)(lVar4 + 0x20 + (longlong)*piVar9 * 0x48);
      local_68 = *(undefined4 *)(lVar4 + 0x20 + (longlong)piVar9[1] * 0x48);
      local_64 = *(undefined4 *)(lVar4 + 0x20 + (longlong)piVar9[2] * 0x48);
      uVar7 = FUN_146c01152(param_1,&local_6c,*(undefined4 *)(param_2 + 0x60));
      if (((-1 < (int)uVar7) &&
          ((int)uVar7 < *(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144))) &&
         ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)(param_1 + 0x148) + (ulonglong)(uVar7 >> 9) * 8) +
                             (ulonglong)(uVar7 & 0x1ff) * 2) - 1U) < 0xfffe)) {
        iVar3 = *(int *)(param_2 + 0x70);
        *(uint *)(param_2 + 0x70) = iVar3 + 1U;
        if (*(uint *)(param_2 + 0x74) < iVar3 + 1U) {
          FUN_1446f48e2((longlong *)(param_2 + 0x68),iVar3);
        }
        *(uint *)(*(longlong *)(param_2 + 0x68) + (longlong)iVar3 * 4) = uVar7;
      }
      piVar9 = piVar9 + 3;
    } while (piVar9 != piVar2);
  }
  if (local_a8 != (int *)0x0) {
    FUN_1400020a8(local_a8);
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1482ed068 FUN_1482ed068 body=427 status=ok
// SIG undefined FUN_1482ed068(void)

void FUN_1482ed068(longlong param_1,int *param_2)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_68 [44];
  ulonglong local_3c;
  ulonglong local_34;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = param_2[0x1e];
  if ((-1 < (int)uVar3) &&
     ((int)uVar3 < *(int *)(param_1 + 0x1d0) * 0x200 + *(int *)(param_1 + 0x1d4))) {
    if ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(param_1 + 0x1d8) + (ulonglong)(uVar3 >> 9) * 8) +
                           (ulonglong)(uVar3 & 0x1ff) * 2) - 1U) < 0xfffe) {
      uVar1 = *(undefined8 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(uVar3 >> 9) * 8) +
               (ulonglong)((uVar3 & 0x1ff) << 4));
      iVar4 = (int)((ulonglong)uVar1 >> 0x20);
      iVar2 = (int)uVar1;
      iVar5 = -1;
      if (*param_2 == iVar4) {
        iVar5 = iVar2;
      }
      if (*param_2 == iVar2) {
        iVar5 = iVar4;
      }
      uVar3 = FUN_146c061e0(param_1,*(undefined4 *)(*(longlong *)(param_2 + 0x14) + 0x20),
                            *(undefined4 *)(*(longlong *)(param_2 + 0x14) + 0x68));
      if (((-1 < (int)uVar3) &&
          ((int)uVar3 < *(int *)(param_1 + 0x1d0) * 0x200 + *(int *)(param_1 + 0x1d4))) &&
         ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)(param_1 + 0x1d8) + (ulonglong)(uVar3 >> 9) * 8) +
                             (ulonglong)(uVar3 & 0x1ff) * 2) - 1U) < 0xfffe)) {
        FUN_146c13626(param_1,&local_3c,uVar3);
        if (param_2[0x18] < 0) {
          *(int *)(param_1 + 0x1b0) = *(int *)(param_1 + 0x1b0) + 1;
        }
        local_34 = local_3c << 0x20 | local_3c >> 0x20;
        local_2c = iVar5;
        uVar3 = FUN_146c01152(param_1);
        if (((-1 < (int)uVar3) &&
            ((int)uVar3 < *(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144))) &&
           ((ushort)(*(short *)(*(longlong *)
                                 (*(longlong *)(param_1 + 0x148) + (ulonglong)(uVar3 >> 9) * 8) +
                               (ulonglong)(uVar3 & 0x1ff) * 2) - 1U) < 0xfffe)) {
          iVar5 = param_2[0x1c];
          param_2[0x1c] = iVar5 + 1U;
          if ((uint)param_2[0x1d] < iVar5 + 1U) {
            FUN_1446f48e2(param_2 + 0x1a,iVar5);
          }
          *(uint *)(*(longlong *)(param_2 + 0x1a) + (longlong)iVar5 * 4) = uVar3;
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482ed214 FUN_1482ed214 body=449 status=ok
// SIG undefined FUN_1482ed214(void)

void FUN_1482ed214(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_88 [36];
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = FUN_146c061e0(param_1,*(undefined4 *)(*(longlong *)(param_2 + 0x50) + 0x20),
                        *(undefined4 *)(*(longlong *)(param_2 + 0x50) + 0x68));
  uVar3 = FUN_146c061e0(param_1,*(undefined4 *)(*(longlong *)(param_3 + 0x50) + 0x20),
                        *(undefined4 *)(*(longlong *)(param_3 + 0x50) + 0x68));
  FUN_146c13626(param_1,&local_5c,uVar2);
  FUN_146c13626(param_1,&local_64,uVar3);
  iVar5 = *(int *)(param_2 + 0x60);
  if (iVar5 < 0) {
    iVar5 = *(int *)(param_1 + 0x1b0);
    *(int *)(param_1 + 0x1b0) = iVar5 + 1;
  }
  local_54 = local_58;
  local_50 = local_5c;
  local_4c = local_60;
  uVar4 = FUN_146c01152(param_1,&local_54,iVar5);
  if (((-1 < (int)uVar4) &&
      ((int)uVar4 < *(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144))) &&
     ((ushort)(*(short *)(*(longlong *)
                           (*(longlong *)(param_1 + 0x148) + (ulonglong)(uVar4 >> 9) * 8) +
                         (ulonglong)(uVar4 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    iVar1 = *(int *)(param_2 + 0x70);
    *(uint *)(param_2 + 0x70) = iVar1 + 1U;
    if (*(uint *)(param_2 + 0x74) < iVar1 + 1U) {
      FUN_1446f48e2((longlong *)(param_2 + 0x68),iVar1);
    }
    *(uint *)(*(longlong *)(param_2 + 0x68) + (longlong)iVar1 * 4) = uVar4;
  }
  local_54 = local_58;
  local_50 = local_60;
  local_4c = local_64;
  uVar4 = FUN_146c01152(param_1,&local_54,iVar5);
  if (((-1 < (int)uVar4) &&
      ((int)uVar4 < *(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144))) &&
     ((ushort)(*(short *)(*(longlong *)
                           (*(longlong *)(param_1 + 0x148) + (ulonglong)(uVar4 >> 9) * 8) +
                         (ulonglong)(uVar4 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    iVar5 = *(int *)(param_3 + 0x70);
    *(uint *)(param_3 + 0x70) = iVar5 + 1U;
    if (*(uint *)(param_3 + 0x74) < iVar5 + 1U) {
      FUN_1446f48e2((longlong *)(param_3 + 0x68),iVar5);
    }
    *(uint *)(*(longlong *)(param_3 + 0x68) + (longlong)iVar5 * 4) = uVar4;
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482ed3d6 FUN_1482ed3d6 body=725 status=ok
// SIG undefined FUN_1482ed3d6(void)

void FUN_1482ed3d6(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 auStack_a8 [40];
  longlong local_80;
  int local_74;
  longlong local_70;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = *(uint *)(param_3 + 0x20);
  if (uVar1 == *(uint *)(param_3 + 0x78)) {
    iVar3 = *(int *)(param_2 + 0x1b0);
    *(int *)(param_2 + 0x1b0) = iVar3 + 1;
    *(int *)(param_3 + 0xa0) = iVar3;
    if (0 < (int)uVar1) {
      lVar9 = param_1 + 0x118;
      uVar8 = 0;
      local_80 = param_2;
      local_70 = lVar9;
      do {
        uVar4 = *(uint *)(*(longlong *)(param_3 + 0x18) + uVar8 * 4);
        uVar5 = *(uint *)(*(longlong *)(param_3 + 0x70) + uVar8 * 4);
        if (uVar4 == uVar5) {
          uVar7 = 0xffffffff;
          if (*(int *)(param_1 + 0xe8) != *(int *)(param_1 + 0x114)) {
            lVar6 = *(longlong *)(param_1 + 0x120);
            if (*(longlong *)(param_1 + 0x120) == 0) {
              lVar6 = lVar9;
            }
            iVar3 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x128) - 1U & uVar4) * 4);
            if (iVar3 != -1) {
              do {
                lVar6 = *(longlong *)(param_1 + 0xe0) + (longlong)iVar3 * 0x10;
                if (*(uint *)(*(longlong *)(param_1 + 0xe0) + (longlong)iVar3 * 0x10) == uVar4) {
                  uVar10 = 0xffffffff;
                  if ((uint *)(lVar6 + 4) == (uint *)0x0 || lVar6 == 0) goto LAB_1482ed5bf;
                  uVar5 = *(uint *)(lVar6 + 4);
                  goto LAB_1482ed4d9;
                }
                iVar3 = *(int *)(lVar6 + 8);
              } while (iVar3 != -1);
            }
          }
LAB_1482ed5b9:
          uVar7 = 0xffffffff;
          uVar10 = 0xffffffff;
        }
        else {
LAB_1482ed4d9:
          uVar7 = 0xffffffff;
          if (((int)uVar5 < 0 || uVar4 == uVar5) ||
             (*(int *)(param_2 + 0x1d0) * 0x200 + *(int *)(param_2 + 0x1d4) <= (int)uVar5))
          goto LAB_1482ed5b9;
          uVar10 = 0xffffffff;
          if ((ushort)(*(short *)(*(longlong *)
                                   (*(longlong *)(param_2 + 0x1d8) + (ulonglong)(uVar5 >> 9) * 8) +
                                 (ulonglong)(uVar5 & 0x1ff) * 2) - 1U) < 0xfffe) {
            FUN_146c13626(param_2,&local_5c);
            FUN_146c13626(param_2,&local_64,uVar5);
            iVar2 = local_58;
            iVar3 = local_64;
            local_4c = local_60;
            if ((local_58 == local_64 || local_5c == local_64) ||
               (local_4c = local_64, local_58 == local_60 || local_5c == local_60)) {
              local_54 = local_58;
              local_50 = local_5c;
              uVar4 = FUN_146c01152(local_80,&local_54,*(undefined4 *)(param_3 + 0xa0));
              uVar7 = 0xffffffff;
            }
            else {
              local_54 = local_58;
              local_50 = local_5c;
              local_4c = local_60;
              local_74 = local_60;
              uVar4 = FUN_146c01152(local_80,&local_54,*(undefined4 *)(param_3 + 0xa0));
              local_54 = local_74;
              local_50 = iVar3;
              local_4c = iVar2;
              uVar5 = FUN_146c01152(local_80,&local_54,*(undefined4 *)(param_3 + 0xa0));
              uVar7 = (ulonglong)uVar5;
            }
            uVar10 = (ulonglong)uVar4;
            param_2 = local_80;
            lVar9 = local_70;
          }
        }
LAB_1482ed5bf:
        iVar3 = *(int *)(param_3 + 0xb0);
        *(uint *)(param_3 + 0xb0) = iVar3 + 1U;
        if (*(uint *)(param_3 + 0xb4) < iVar3 + 1U) {
          FUN_146be54b8((longlong *)(param_3 + 0xa8),iVar3);
          param_2 = local_80;
          lVar9 = local_70;
        }
        *(ulonglong *)(*(longlong *)(param_3 + 0xa8) + (longlong)iVar3 * 8) = uVar10 | uVar7 << 0x20
        ;
        uVar8 = uVar8 + 1;
      } while (uVar8 != uVar1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1482ed6ac FUN_1482ed6ac body=1126 status=ok
// SIG undefined FUN_1482ed6ac(void)

void FUN_1482ed6ac(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  uint uVar8;
  longlong lVar9;
  int *piVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auStack_108 [40];
  longlong local_e0;
  int local_d4;
  int local_d0;
  undefined4 local_cc;
  undefined1 local_c8 [4];
  undefined4 local_c4;
  int local_c0;
  int local_bc;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  int *local_a0;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar1 = *(uint *)(param_2 + 0x18);
  if (uVar1 == *(uint *)(param_2 + 0x58)) {
    uVar8 = 0;
    local_78 = 0;
    local_70 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
    local_b8 = param_1;
    local_b0 = param_2;
    if (0 < (int)uVar1) {
      local_e0 = param_1;
      do {
        FUN_143b000b2(&local_b8,&local_c0,uVar8);
        uVar5 = FUN_1448eb174(&local_c0,8,0);
        if ((int)uStack_90 != local_64) {
          puVar7 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar7 = local_60;
          }
          iVar2 = *(int *)(puVar7 + (ulonglong)(local_50 - 1U & uVar5) * 4);
          while (iVar2 != -1) {
            lVar9 = (longlong)iVar2;
            if ((*(int *)(local_98 + lVar9 * 0x14) == local_c0) &&
               (*(int *)(local_98 + 4 + lVar9 * 0x14) == local_bc)) goto LAB_1482ed88c;
            iVar2 = *(int *)(local_98 + lVar9 * 0x14 + 0xc);
          }
        }
        local_d0 = *(int *)(local_e0 + 0x1b0);
        *(int *)(local_e0 + 0x1b0) = local_d0 + 1;
        local_a0 = &local_d0;
        local_a8 = &local_c0;
        FUN_14830c644(&local_98,local_c8,&local_a8);
        uVar5 = FUN_1448eb174(&local_c0,8,0);
        if ((int)uStack_90 != local_64) {
          puVar7 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar7 = local_60;
          }
          iVar2 = *(int *)(puVar7 + (ulonglong)(local_50 - 1U & uVar5) * 4);
          while (iVar2 != -1) {
            piVar10 = (int *)(local_98 + (longlong)iVar2 * 0x14);
            if ((*piVar10 == local_c0) &&
               (*(int *)(local_98 + 4 + (longlong)iVar2 * 0x14) == local_bc)) goto LAB_1482ed858;
            iVar2 = piVar10[3];
          }
        }
        piVar10 = (int *)0x0;
LAB_1482ed858:
        iVar2 = *(int *)(param_2 + 0x88);
        *(uint *)(param_2 + 0x88) = iVar2 + 1U;
        if (*(uint *)(param_2 + 0x8c) < iVar2 + 1U) {
          FUN_1446f48e2((longlong *)(param_2 + 0x80),iVar2);
        }
        *(int *)(*(longlong *)(param_2 + 0x80) + (longlong)iVar2 * 4) = piVar10[2];
LAB_1482ed88c:
        uVar8 = uVar8 + 1;
      } while (uVar8 != uVar1);
      uVar12 = 0;
      lVar9 = local_e0;
      do {
        uVar8 = *(uint *)(*(longlong *)(param_2 + 0x10) + uVar12 * 4);
        uVar5 = *(uint *)(*(longlong *)(param_2 + 0x50) + uVar12 * 4);
        uVar11 = 0xffffffff;
        if (((int)uVar5 < 0 || uVar8 == uVar5) ||
           (*(int *)(lVar9 + 0x1d0) * 0x200 + *(int *)(lVar9 + 0x1d4) <= (int)uVar5)) {
          uVar13 = 0xffffffff;
        }
        else {
          uVar13 = 0xffffffff;
          if ((ushort)(*(short *)(*(longlong *)
                                   (*(longlong *)(lVar9 + 0x1d8) + (ulonglong)(uVar5 >> 9) * 8) +
                                 (ulonglong)(uVar5 & 0x1ff) * 2) - 1U) < 0xfffe) {
            FUN_143b000b2(&local_b8,&local_c0);
            uVar6 = FUN_1448eb174(&local_c0,8);
            lVar9 = local_e0;
            if ((int)uStack_90 != local_64) {
              puVar7 = local_58;
              if (local_58 == (undefined1 *)0x0) {
                puVar7 = local_60;
              }
              iVar2 = *(int *)(puVar7 + (ulonglong)(local_50 - 1U & uVar6) * 4);
              while (iVar2 != -1) {
                piVar10 = (int *)(local_98 + (longlong)iVar2 * 0x14);
                if ((*piVar10 == local_c0) &&
                   (*(int *)(local_98 + 4 + (longlong)iVar2 * 0x14) == local_bc))
                goto LAB_1482ed9da;
                iVar2 = piVar10[3];
              }
            }
            piVar10 = (int *)0x0;
LAB_1482ed9da:
            iVar2 = piVar10[2];
            local_d4 = iVar2;
            FUN_146c13626(local_e0,local_c8,uVar8);
            FUN_146c13626(lVar9,&local_d0,uVar5);
            uVar4 = local_c4;
            uVar3 = local_cc;
            uVar8 = FUN_146c01152(lVar9,&local_a8,iVar2);
            uVar13 = (ulonglong)uVar8;
            local_a8 = (int *)CONCAT44(local_d0,uVar3);
            local_a0 = (int *)CONCAT44(local_a0._4_4_,uVar4);
            uVar8 = FUN_146c01152(lVar9,&local_a8,local_d4);
            uVar11 = (ulonglong)uVar8;
          }
        }
        iVar2 = *(int *)(param_2 + 0x98);
        *(uint *)(param_2 + 0x98) = iVar2 + 1U;
        if (*(uint *)(param_2 + 0x9c) < iVar2 + 1U) {
          FUN_146be54b8((longlong *)(param_2 + 0x90),iVar2);
          lVar9 = local_e0;
        }
        *(ulonglong *)(*(longlong *)(param_2 + 0x90) + (longlong)iVar2 * 8) =
             uVar13 | uVar11 << 0x20;
        uVar12 = uVar12 + 1;
      } while (uVar12 != uVar1);
      local_50 = 0;
      if (local_58 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
    }
    FUN_146be7e8c(&local_98);
  }
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482edb14 FUN_1482edb14 body=1623 status=ok
// SIG undefined FUN_1482edb14(void)

void FUN_1482edb14(longlong param_1,longlong param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  longlong *plVar16;
  int iVar17;
  longlong lVar18;
  longlong *plVar19;
  longlong lVar20;
  undefined1 auStack_108 [40];
  ulonglong local_e0;
  longlong local_d8;
  longlong *local_d0;
  ulonglong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong *local_b0;
  uint local_a8;
  undefined8 local_a0;
  longlong *local_98;
  uint local_90;
  longlong local_88;
  ulonglong uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar8 = param_3[8];
  if (uVar8 == param_3[0x1e]) {
    iVar12 = *(int *)(param_2 + 0x1b0);
    *(int *)(param_2 + 0x1b0) = iVar12 + 1;
    param_3[0x28] = iVar12;
    uStack_70._0_4_ = 0;
    local_78 = 0;
    uStack_70 = 0;
    bVar6 = false;
    local_e0 = (ulonglong)uVar8;
    local_c0 = param_2;
    if (0 < (int)uVar8) {
      uVar13 = 0;
      do {
        param_2 = local_c0;
        uVar8 = *(uint *)(*(longlong *)(param_3 + 6) + uVar13 * 4);
        uVar14 = *(uint *)(*(longlong *)(param_3 + 0x1c) + uVar13 * 4);
        if (uVar8 == uVar14) {
          bVar6 = true;
          if (*(int *)(param_1 + 0xe8) == *(int *)(param_1 + 0x114)) goto LAB_1482edd49;
          lVar11 = *(longlong *)(param_1 + 0x120);
          if (*(longlong *)(param_1 + 0x120) == 0) {
            lVar11 = param_1 + 0x118;
          }
          iVar12 = *(int *)(lVar11 + (ulonglong)(*(int *)(param_1 + 0x128) - 1U & uVar8) * 4);
          if (iVar12 == -1) goto LAB_1482edd49;
          while (lVar11 = *(longlong *)(param_1 + 0xe0) + (longlong)iVar12 * 0x10,
                *(uint *)(*(longlong *)(param_1 + 0xe0) + (longlong)iVar12 * 0x10) != uVar8) {
            iVar12 = *(int *)(lVar11 + 8);
            if (iVar12 == -1) goto LAB_1482edd49;
          }
          if ((lVar11 == 0) || ((uint *)(lVar11 + 4) == (uint *)0x0)) goto LAB_1482edd49;
          uVar14 = *(uint *)(lVar11 + 4);
        }
        bVar6 = true;
        if ((((uVar8 == uVar14) || ((int)uVar14 < 0)) ||
            (*(int *)(local_c0 + 0x1d0) * 0x200 + *(int *)(local_c0 + 0x1d4) <= (int)uVar14)) ||
           (0xfffd < (ushort)(*(short *)(*(longlong *)
                                          (*(longlong *)(local_c0 + 0x1d8) +
                                          (ulonglong)(uVar14 >> 9) * 8) +
                                        (ulonglong)(uVar14 & 0x1ff) * 2) - 1U))) goto LAB_1482edd49;
        FUN_146c13626(local_c0,&local_a0);
        FUN_146c13626(param_2,&local_58,uVar14);
        lVar18 = local_58;
        uVar1 = uStack_70;
        lVar11 = local_a0;
        if ((((int)local_a0 == (int)local_58) || (local_a0._4_4_ == (int)local_58)) ||
           (((int)local_a0 == local_58._4_4_ || (local_a0._4_4_ == local_58._4_4_))))
        goto LAB_1482edd49;
        lVar20 = (longlong)(int)(uint)uStack_70;
        uVar8 = (uint)uStack_70 + 1;
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar8);
        if (uStack_70._4_4_ < uVar8) {
          FUN_143b05978(&local_78,uVar1 & 0xffffffff);
        }
        *(longlong *)(local_78 + lVar20 * 0x10) = lVar11;
        *(longlong *)(local_78 + 8 + lVar20 * 0x10) = lVar18;
        uVar13 = uVar13 + 1;
      } while (uVar13 != local_e0);
      bVar6 = false;
      param_2 = local_c0;
LAB_1482edd49:
      uVar8 = (uint)local_e0;
    }
    if ((bVar6) || ((uint)uStack_70 != uVar8)) {
      FUN_1482ed3d6(param_1,param_2,param_3);
    }
    else {
      uVar14 = *(uint *)(param_1 + 8);
      local_88 = 0;
      uStack_80 = 0;
      FUN_140bfc200(&local_88,uVar14 + 2);
      if ((1 < (int)(uint)uStack_70) && (*(int *)(local_78 + 4) == *(int *)(local_78 + 0x10))) {
        lVar11 = (uStack_70 & 0xffffffff) << 4;
        lVar18 = 0;
        do {
          lVar11 = lVar11 + -0x10;
          lVar20 = *(longlong *)(local_78 + lVar18);
          uVar13 = ((longlong *)(local_78 + lVar18))[1];
          uVar5 = ((undefined8 *)(local_78 + lVar11))[1];
          *(undefined8 *)(local_78 + lVar18) = *(undefined8 *)(local_78 + lVar11);
          ((undefined8 *)(local_78 + lVar18))[1] = uVar5;
          local_58._0_4_ = (int)lVar20;
          local_58._4_4_ = (int)((ulonglong)lVar20 >> 0x20);
          uStack_50._0_4_ = (undefined4)uVar13;
          uStack_50._4_4_ = (undefined4)(uVar13 >> 0x20);
          puVar2 = (undefined4 *)(local_78 + lVar11);
          *puVar2 = (int)local_58;
          puVar2[1] = local_58._4_4_;
          puVar2[2] = (undefined4)uStack_50;
          puVar2[3] = uStack_50._4_4_;
          lVar18 = lVar18 + 0x10;
          local_58 = lVar20;
          uStack_50 = uVar13;
        } while ((ulonglong)((uint)uStack_70 >> 1) << 4 != lVar18);
      }
      uVar15 = param_3[0x16];
      iVar17 = -1;
      iVar12 = -1;
      if (-1 < (longlong)(int)uVar15) {
        iVar12 = *(int *)(*(longlong *)(param_1 + 0xb0) + (longlong)(int)uVar15 * 0xa8);
      }
      uVar13 = (ulonglong)(int)param_3[0x17];
      if (-1 < (longlong)uVar13) {
        iVar17 = *(int *)(*(longlong *)(param_1 + 0xb0) + uVar13 * 0xa8);
      }
      if ((((*(int *)(local_78 + 4) != iVar17) && (*(int *)(local_78 + 8) != iVar17)) &&
          (lVar11 = (longlong)(int)(uVar8 - 1) * 0x10, *(int *)(local_78 + lVar11) != iVar12)) &&
         (*(int *)(local_78 + 0xc + lVar11) != iVar12)) {
        uVar13 = (ulonglong)uVar15;
        uVar15 = param_3[0x17];
      }
      uVar9 = *param_3;
      local_c8 = (ulonglong)uVar14;
      local_b8 = param_1;
      local_b0 = &local_88;
      local_a8 = uVar14;
      local_a0 = param_2;
      local_98 = &local_88;
      local_90 = uVar14;
      local_d8 = FUN_143b0014c(&local_b8,uVar13,uVar9);
      lVar11 = FUN_143b0014c(&local_b8,uVar15,uVar9);
      if (0 < (int)uVar8) {
        plVar19 = (longlong *)(local_e0 << 4);
        local_d0 = (longlong *)((ulonglong)(uVar8 - 1) << 4);
        plVar16 = (longlong *)0x0;
        do {
          uVar9 = *(undefined4 *)(local_78 + (longlong)plVar16);
          uVar10 = *(undefined4 *)(local_78 + 0xc + (longlong)plVar16);
          if (plVar16 == (longlong *)0x0) {
            uVar3 = *(undefined4 *)(local_78 + 4);
            uVar4 = *(undefined4 *)(local_78 + 8);
            if ((local_d8 == 0) || (cVar7 = FUN_143b001c6(&local_b0,local_d8,uVar3), cVar7 == '\0'))
            {
              FUN_143b002fc(&local_a0,uVar3,uVar4);
            }
          }
          if ((lVar11 == 0) || (local_d0 != plVar16)) {
LAB_1482edf23:
            FUN_143b002fc(&local_a0,uVar9,uVar10);
          }
          else {
            cVar7 = FUN_143b001c6(&local_b0,lVar11,uVar9);
            if (cVar7 == '\0') goto LAB_1482edf23;
          }
          plVar16 = plVar16 + 2;
        } while (plVar19 != plVar16);
      }
      local_58 = 0;
      uStack_50 = 0;
      FUN_1482ee16c(&local_58,(int)local_c8 + 1,1);
      if (0 < (int)local_e0) {
        local_c8 = uStack_80 & 0xffffffff;
        local_d0 = (longlong *)(param_3 + 0x2a);
        local_d8 = (ulonglong)((int)uStack_80 - 1) << 4;
        uVar13 = 0;
        do {
          uVar1 = uVar13 + 1;
          if (1 < (int)local_c8) {
            lVar11 = 0;
            do {
              lVar20 = local_c0;
              local_5c = *(undefined4 *)(*(longlong *)(local_88 + 0x10 + lVar11) + uVar13 * 4);
              local_60 = *(undefined4 *)(*(longlong *)(local_88 + lVar11) + uVar1 * 4);
              local_64 = *(undefined4 *)(*(longlong *)(local_88 + lVar11) + uVar13 * 4);
              uVar9 = FUN_146c01152(local_c0,&local_64,param_3[0x28]);
              lVar18 = *(longlong *)(local_88 + 0x10 + lVar11);
              local_5c = *(undefined4 *)(*(longlong *)(local_88 + lVar11) + uVar1 * 4);
              local_60 = *(undefined4 *)(lVar18 + uVar13 * 4);
              local_64 = *(undefined4 *)(lVar18 + uVar1 * 4);
              uVar10 = FUN_146c01152(lVar20,&local_64,param_3[0x28]);
              plVar16 = (longlong *)(local_58 + lVar11);
              iVar12 = *(int *)(local_58 + 8 + lVar11);
              *(uint *)(local_58 + 8 + lVar11) = iVar12 + 1U;
              if (*(uint *)(local_58 + 0xc + lVar11) < iVar12 + 1U) {
                FUN_146be54b8(plVar16,iVar12);
              }
              *(ulonglong *)(*plVar16 + (longlong)iVar12 * 8) = CONCAT44(uVar10,uVar9);
              iVar12 = param_3[0x2c];
              param_3[0x2c] = iVar12 + 1U;
              if ((uint)param_3[0x2d] < iVar12 + 1U) {
                FUN_146be54b8(local_d0,iVar12);
              }
              *(ulonglong *)(*local_d0 + (longlong)iVar12 * 8) = CONCAT44(uVar10,uVar9);
              lVar11 = lVar11 + 0x10;
            } while (local_d8 != lVar11);
          }
          uVar13 = uVar1;
        } while (uVar1 != local_e0);
      }
      FUN_14838a6c2(param_3 + 0x2e,local_c0,&local_58,&local_88);
      FUN_148308bdd(local_58,uStack_50 & 0xffffffff);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      FUN_144716727(local_88,uStack_80 & 0xffffffff);
      if (local_88 != 0) {
        FUN_1400020a8();
      }
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1482ee16c FUN_1482ee16c body=143 status=ok
// SIG undefined FUN_1482ee16c(void)

void FUN_1482ee16c(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_148308db6(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(longlong)(param_2 - iVar1) << 4);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_14830c788(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_14830c7e8(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1482ee1fc FUN_1482ee1fc body=2192 status=ok
// SIG undefined FUN_1482ee1fc(void)

void FUN_1482ee1fc(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int *piVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  int iVar21;
  bool bVar22;
  undefined1 auStack_1c8 [40];
  ulonglong local_1a0;
  undefined8 *local_198;
  longlong local_190;
  longlong *local_188;
  int local_17c;
  ulonglong local_178;
  ulonglong local_170;
  ulonglong local_168;
  longlong local_160;
  ulonglong local_158;
  longlong local_150;
  longlong local_148;
  int local_140;
  int local_13c;
  longlong local_138;
  ulonglong uStack_130;
  undefined8 *local_120;
  longlong *local_118;
  int *local_110;
  longlong local_108;
  ulonglong uStack_100;
  int local_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 *local_d8;
  longlong local_d0;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  int local_84;
  undefined1 local_80 [8];
  undefined1 *local_78;
  int local_70;
  ulonglong local_60;
  longlong lVar15;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  uVar5 = *(uint *)(param_3 + 0x18);
  uVar19 = (ulonglong)uVar5;
  if (uVar5 == *(uint *)(param_3 + 0x58)) {
    local_98 = 0;
    uStack_e0._0_4_ = 0;
    local_90 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_8c = 0xffffffff00000080;
    local_84 = 0;
    local_78 = (undefined1 *)0x0;
    local_70 = 0;
    local_1a0 = uVar19;
    local_198 = param_2;
    local_190 = param_3;
    local_188 = param_1;
    local_d8 = param_2;
    local_d0 = param_3;
    if ((int)uVar5 < 1) {
      local_e8 = 0;
      uStack_e0 = 0;
    }
    else {
      iVar21 = 0;
      do {
        FUN_143b005a2(&local_d8,&local_e8,iVar21);
        uVar5 = FUN_1448eb174(&local_e8,8,0);
        if ((int)uStack_b0 != local_84) {
          puVar11 = local_78;
          if (local_78 == (undefined1 *)0x0) {
            puVar11 = local_80;
          }
          iVar14 = *(int *)(puVar11 + (ulonglong)(local_70 - 1U & uVar5) * 4);
          if (iVar14 != -1) {
            do {
              lVar15 = (longlong)iVar14;
              if ((*(int *)(local_b8 + lVar15 * 0x14) == (int)local_e8) &&
                 (*(int *)(local_b8 + 4 + lVar15 * 0x14) == local_e8._4_4_)) goto LAB_1482ee436;
              iVar14 = *(int *)(local_b8 + lVar15 * 0x14 + 0xc);
            } while (iVar14 != -1);
          }
        }
        iVar14 = *(int *)(param_2 + 0x36);
        *(int *)(param_2 + 0x36) = iVar14 + 1;
        local_138 = CONCAT44(local_138._4_4_,iVar14);
        local_118 = &local_138;
        local_120 = &local_e8;
        FUN_14830c644(&local_b8,&local_108,&local_120);
        uVar5 = FUN_1448eb174(&local_e8,8,0);
        if ((int)uStack_b0 != local_84) {
          puVar11 = local_78;
          if (local_78 == (undefined1 *)0x0) {
            puVar11 = local_80;
          }
          iVar14 = *(int *)(puVar11 + (ulonglong)(local_70 - 1U & uVar5) * 4);
          if (iVar14 != -1) {
            do {
              piVar9 = (int *)(local_b8 + (longlong)iVar14 * 0x14);
              if ((*piVar9 == (int)local_e8) &&
                 (*(int *)(local_b8 + 4 + (longlong)iVar14 * 0x14) == local_e8._4_4_))
              goto LAB_1482ee3fc;
              iVar14 = piVar9[3];
            } while (iVar14 != -1);
          }
        }
        piVar9 = (int *)0x0;
LAB_1482ee3fc:
        iVar14 = *(int *)(local_190 + 0x88);
        *(uint *)(local_190 + 0x88) = iVar14 + 1U;
        if (*(uint *)(local_190 + 0x8c) < iVar14 + 1U) {
          FUN_1446f48e2((longlong *)(param_3 + 0x80),iVar14);
        }
        *(int *)(*(longlong *)(param_3 + 0x80) + (longlong)iVar14 * 4) = piVar9[2];
        uVar19 = local_1a0;
        param_2 = local_198;
LAB_1482ee436:
        iVar21 = iVar21 + 1;
      } while (iVar21 != (int)uVar19);
      local_e8 = 0;
      uStack_e0 = 0;
      uVar19 = 0;
      do {
        uVar5 = *(uint *)(*(longlong *)(local_190 + 0x10) + uVar19 * 4);
        uVar2 = *(uint *)(*(longlong *)(local_190 + 0x50) + uVar19 * 4);
        if ((((uVar5 == uVar2) || ((int)uVar2 < 0)) ||
            (*(int *)(param_2 + 0x3a) * 0x200 + *(int *)((longlong)param_2 + 0x1d4) <= (int)uVar2))
           || (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (param_2[0x3b] + (ulonglong)(uVar2 >> 9) * 8) +
                                           (ulonglong)(uVar2 & 0x1ff) * 2) - 1U)))
        goto LAB_1482ee61d;
        FUN_143b005a2(&local_d8,&local_120,uVar19 & 0xffffffff);
        FUN_1448eb174(&local_120,8,0);
        FUN_146c13626(param_2,&local_108,uVar5);
        FUN_146c13626(param_2,&local_138,uVar2);
        uVar17 = uStack_e0;
        lVar18 = local_108;
        lVar15 = local_138;
        lVar13 = (longlong)(int)uStack_e0;
        uVar5 = (int)uStack_e0 + 1;
        uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar5);
        if (uStack_e0._4_4_ < uVar5) {
          FUN_143b05a7e(&local_e8,uVar17 & 0xffffffff);
        }
        *(longlong *)(local_e8 + lVar13 * 0x10) = lVar18;
        *(longlong *)(local_e8 + 8 + lVar13 * 0x10) = lVar15;
        uVar19 = uVar19 + 1;
        param_2 = local_198;
      } while (local_1a0 != uVar19);
    }
    uVar19 = local_1a0;
    iVar21 = (int)local_1a0;
    param_2 = local_198;
    if ((int)uStack_e0 == iVar21) {
      if (iVar21 < 2) {
        bVar22 = false;
      }
      else {
        bVar22 = *(int *)(local_e8 + 4) == *(int *)(local_e8 + 0x10);
      }
      local_ec = (int)local_188[1];
      local_108 = 0;
      uStack_100 = 0;
      FUN_140bfc200(&local_108,local_ec + 2,1);
      local_120 = local_198;
      local_118 = &local_108;
      local_110 = &local_ec;
      if (0 < iVar21) {
        uVar17 = 0;
        do {
          uVar19 = *(ulonglong *)(local_e8 + uVar17 * 0x10);
          uVar3 = *(ulonglong *)(local_e8 + 8 + uVar17 * 0x10);
          uVar10 = uVar19 >> 0x20;
          uVar12 = uVar19;
          uVar16 = uVar3 >> 0x20;
          if (bVar22 == false) {
            uVar12 = uVar10;
            uVar16 = uVar3 & 0xffffffff;
            uVar10 = uVar19;
            uVar3 = uVar3 >> 0x20;
          }
          if (uVar17 == 0) {
            FUN_143b0063c(&local_120,uVar12,uVar16);
          }
          if (uVar17 == iVar21 - 1) {
            if (-2 < local_ec) {
              lVar18 = -1;
              lVar15 = 0;
              do {
                puVar8 = *(undefined4 **)(local_108 + lVar15);
                uVar6 = *puVar8;
                iVar14 = *(int *)(local_108 + 8 + lVar15);
                *(uint *)(local_108 + 8 + lVar15) = iVar14 + 1U;
                if (*(uint *)(local_108 + 0xc + lVar15) < iVar14 + 1U) {
                  puVar20 = (undefined8 *)(local_108 + lVar15);
                  FUN_1446f48e2(puVar20,iVar14);
                  puVar8 = (undefined4 *)*puVar20;
                }
                puVar8[iVar14] = uVar6;
                lVar18 = lVar18 + 1;
                lVar15 = lVar15 + 0x10;
              } while (lVar18 <= local_ec);
            }
          }
          else {
            FUN_143b0063c(&local_120,uVar10 & 0xffffffff,uVar3 & 0xffffffff);
          }
          uVar17 = uVar17 + 1;
          uVar19 = local_1a0;
        } while (uVar17 != local_1a0);
      }
      local_138 = 0;
      uStack_130 = 0;
      FUN_1482ee16c(&local_138,local_ec + 1,1);
      lVar15 = local_190;
      if (0 < (int)uVar19) {
        local_168 = uStack_100 & 0xffffffff;
        local_170 = (ulonglong)bVar22;
        local_188 = (longlong *)(local_190 + 0x90);
        local_178 = (ulonglong)(bVar22 ^ 1);
        local_160 = (ulonglong)((int)uStack_100 - 1) << 4;
        uVar19 = 0;
        do {
          FUN_143b005a2(&local_d8,&local_140,uVar19 & 0xffffffff);
          uVar5 = FUN_1448eb174(&local_140,8,0);
          if ((int)uStack_b0 != local_84) {
            puVar11 = local_78;
            if (local_78 == (undefined1 *)0x0) {
              puVar11 = local_80;
            }
            iVar21 = *(int *)(puVar11 + (ulonglong)(local_70 - 1U & uVar5) * 4);
            while (iVar21 != -1) {
              piVar9 = (int *)(local_b8 + (longlong)iVar21 * 0x14);
              if ((*piVar9 == local_140) &&
                 (*(int *)(local_b8 + 4 + (longlong)iVar21 * 0x14) == local_13c))
              goto LAB_1482ee841;
              iVar21 = piVar9[3];
            }
          }
          piVar9 = (int *)0x0;
LAB_1482ee841:
          if (1 < (int)local_168) {
            local_17c = piVar9[2];
            local_148 = local_178 + uVar19;
            local_150 = local_170 + uVar19;
            lVar18 = 0;
            local_158 = uVar19;
            do {
              lVar4 = local_148;
              lVar13 = local_150;
              uVar19 = local_158;
              iVar21 = local_17c;
              puVar20 = local_198;
              local_bc = *(undefined4 *)(*(longlong *)(local_108 + 0x10 + lVar18) + local_158 * 4);
              local_c0 = *(undefined4 *)(*(longlong *)(local_108 + lVar18) + local_148 * 4);
              local_c4 = *(undefined4 *)(*(longlong *)(local_108 + lVar18) + local_150 * 4);
              uVar6 = FUN_146c01152(local_198,&local_c4,local_17c);
              lVar15 = *(longlong *)(local_108 + 0x10 + lVar18);
              local_bc = *(undefined4 *)(*(longlong *)(local_108 + lVar18) + 4 + uVar19 * 4);
              local_c0 = *(undefined4 *)(lVar15 + lVar13 * 4);
              local_c4 = *(undefined4 *)(lVar15 + lVar4 * 4);
              uVar7 = FUN_146c01152(puVar20,&local_c4,iVar21);
              plVar1 = (longlong *)(local_138 + lVar18);
              iVar21 = *(int *)(local_138 + 8 + lVar18);
              *(uint *)(local_138 + 8 + lVar18) = iVar21 + 1U;
              if (*(uint *)(local_138 + 0xc + lVar18) < iVar21 + 1U) {
                FUN_146be54b8(plVar1,iVar21);
              }
              lVar15 = local_190;
              *(ulonglong *)(*plVar1 + (longlong)iVar21 * 8) = CONCAT44(uVar7,uVar6);
              iVar21 = *(int *)(local_190 + 0x98);
              *(uint *)(local_190 + 0x98) = iVar21 + 1U;
              if (*(uint *)(local_190 + 0x9c) < iVar21 + 1U) {
                FUN_146be54b8(local_188,iVar21);
              }
              *(ulonglong *)(*local_188 + (longlong)iVar21 * 8) = CONCAT44(uVar7,uVar6);
              lVar18 = lVar18 + 0x10;
              uVar19 = local_158;
            } while (local_160 != lVar18);
          }
          uVar19 = uVar19 + 1;
        } while (uVar19 != local_1a0);
      }
      FUN_14838a6c2(lVar15 + 0xa0,local_198,&local_138,&local_108);
      FUN_148308bdd(local_138,uStack_130 & 0xffffffff);
      if (local_138 != 0) {
        FUN_1400020a8();
      }
      FUN_144716727(local_108,uStack_100 & 0xffffffff);
      if (local_108 != 0) {
        FUN_1400020a8();
      }
    }
    else {
LAB_1482ee61d:
      FUN_1482ed6ac(param_2,local_190);
    }
    if (local_e8 != 0) {
      FUN_1400020a8();
    }
    local_70 = 0;
    if (local_78 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    FUN_146be7e8c(&local_b8);
  }
  if ((local_60 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482eea8e FUN_1482eea8e body=11205 status=ok
// SIG undefined FUN_1482eea8e(void)

void FUN_1482eea8e(double param_1,longlong param_2,longlong param_3)

{
  undefined8 *puVar1;
  uint *puVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  void *_Src;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 *puVar17;
  char cVar18;
  uint uVar19;
  undefined4 uVar20;
  uint uVar21;
  undefined **ppuVar22;
  double *pdVar23;
  ulonglong uVar24;
  undefined8 uVar25;
  undefined1 *puVar26;
  float *pfVar27;
  uint uVar28;
  int iVar29;
  longlong lVar30;
  ulonglong uVar31;
  code *pcVar32;
  int iVar33;
  uint uVar34;
  longlong lVar35;
  int *piVar36;
  longlong lVar37;
  undefined1 *puVar38;
  uint uVar39;
  longlong lVar40;
  uint uVar41;
  int iVar42;
  longlong lVar43;
  double dVar44;
  ulonglong uVar45;
  longlong *plVar46;
  longlong lVar47;
  double dVar48;
  bool bVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  float fVar53;
  longlong *plVar54;
  undefined1 auStack_918 [32];
  ulonglong local_8f8;
  longlong local_8e8;
  longlong local_8e0;
  longlong *local_8d8;
  double local_8d0;
  undefined1 *local_8c8;
  longlong *local_8c0;
  double local_8b8;
  longlong *local_8b0;
  double local_8a8;
  double local_8a0;
  double local_898;
  double local_890;
  double local_888;
  double local_880;
  int local_874;
  int local_870;
  int local_86c;
  undefined8 local_868;
  undefined8 uStack_860;
  undefined8 local_858;
  ulonglong uStack_850;
  undefined1 local_839;
  undefined8 *local_838;
  undefined8 uStack_830;
  longlong local_828;
  undefined8 uStack_820;
  void *local_818;
  undefined8 uStack_810;
  undefined8 *local_808;
  undefined8 uStack_800;
  longlong local_7f8;
  undefined8 uStack_7f0;
  longlong local_7e8;
  undefined8 uStack_7e0;
  double *local_7d8;
  undefined8 uStack_7d0;
  char local_7b9;
  uint local_7b8;
  uint uStack_7b4;
  undefined4 local_7b0;
  undefined4 local_7ac;
  int *local_7a8;
  uint local_7a0;
  uint uStack_79c;
  longlong local_798 [2];
  longlong *local_788;
  longlong local_778 [4];
  int *local_758;
  uint local_750;
  uint local_74c;
  code *local_748 [2];
  undefined **local_738;
  undefined8 *local_730;
  undefined *local_728 [4];
  undefined8 *local_708;
  undefined8 uStack_700;
  code *local_6f8;
  undefined8 *local_6f0;
  int local_6e8;
  undefined4 uStack_6e4;
  undefined8 local_6e0;
  longlong local_6d8;
  undefined2 local_6d0;
  undefined1 local_6ce;
  int *local_6c8;
  undefined8 *local_6b8;
  double dStack_6b0;
  code *local_6a8;
  undefined3 uStack_6a0;
  undefined5 uStack_69d;
  int iStack_698;
  undefined7 uStack_694;
  undefined1 uStack_68d;
  int local_68c;
  undefined4 uStack_688;
  undefined4 uStack_684;
  undefined2 local_680;
  undefined1 local_67e;
  int *local_678;
  undefined8 local_668;
  undefined8 local_638;
  undefined8 uStack_630;
  undefined8 local_628;
  undefined8 uStack_620;
  undefined8 local_618;
  undefined8 uStack_610;
  undefined8 local_608;
  undefined3 uStack_600;
  int5 iStack_5fd;
  undefined3 uStack_5f8;
  int5 iStack_5f5;
  undefined4 uStack_5f0;
  undefined4 uStack_5ec;
  undefined4 uStack_5e8;
  undefined4 uStack_5e4;
  undefined8 uStack_5e0;
  undefined8 local_5d8;
  undefined8 local_5c8;
  undefined4 local_5c0;
  undefined8 local_5bc;
  undefined4 local_5b4;
  undefined8 local_5a8;
  undefined4 local_5a0;
  undefined8 local_598;
  undefined8 uStack_590;
  undefined8 local_588;
  undefined8 uStack_580;
  undefined8 local_578;
  undefined4 local_570;
  undefined8 local_56c;
  undefined4 local_564;
  undefined8 local_558;
  undefined4 local_550;
  undefined8 local_548;
  undefined1 local_540;
  undefined8 local_538;
  undefined8 uStack_530;
  longlong *local_528;
  undefined8 *local_520;
  int local_518;
  int iStack_514;
  undefined4 uStack_510;
  int iStack_50c;
  longlong local_508;
  ulonglong uStack_500;
  undefined8 local_4e8;
  undefined4 local_4e0;
  undefined8 local_4dc;
  undefined4 local_4d4;
  undefined8 local_4c8;
  undefined4 local_4c0;
  longlong *local_4b8;
  undefined8 uStack_4b0;
  byte local_4a8;
  undefined8 local_498;
  undefined4 local_490;
  undefined8 local_48c;
  undefined4 local_484;
  undefined8 local_478;
  undefined4 local_470;
  undefined8 local_468;
  undefined1 local_460;
  undefined1 local_3f8 [208];
  char local_328;
  int local_324;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 **local_308;
  longlong *local_300;
  undefined8 local_2f8;
  uint *local_2f0;
  char *local_2e8;
  undefined8 *local_2e0;
  int local_2c8;
  int local_1d8;
  int local_1d4;
  undefined8 *local_1d0;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_918;
  local_7b8 = 0;
  local_7b9 = '\x01';
  local_7d8 = (double *)0x0;
  uStack_7d0 = 0;
  local_7e8 = 0;
  uStack_7e0 = 0;
  local_7f8 = 0;
  uStack_7f0 = 0;
  local_808 = (undefined8 *)0x0;
  uStack_800 = 0;
  local_8e8 = param_2;
  local_8d0 = param_1;
  if (0 < (longlong)*(int *)(param_3 + 0x58)) {
    local_8d8 = (longlong *)0x0;
    local_8e0 = param_3;
    local_8c0 = (longlong *)(longlong)*(int *)(param_3 + 0x58);
    do {
      local_8a8 = (double)((longlong)local_8d8 * 9);
      plVar46 = (longlong *)((longlong)local_8d8 + 1);
      plVar54 = (longlong *)0x0;
      if (plVar46 != local_8c0) {
        plVar54 = plVar46;
      }
      local_8b8 = *(double *)(local_8e0 + 0x50);
      uVar19 = *(uint *)((longlong)local_8b8 + 0x20 + (longlong)local_8d8 * 0x48);
      uVar39 = *(uint *)((longlong)local_8b8 + 0x20 + (longlong)plVar54 * 0x48);
      local_538 = (undefined **)0x0;
      uStack_530 = 0.0;
      local_618 = (undefined **)((ulonglong)local_618 & 0xffffffffffffff00);
      local_8d8 = plVar46;
      if ((longlong)*(int *)((longlong)local_8d0 + 200) != 0) {
        lVar40 = (longlong)*(int *)((longlong)local_8d0 + 200) << 8;
        piVar36 = (int *)(*(longlong *)((longlong)local_8d0 + 0xc0) + 0xb8);
LAB_1482eec25:
        local_318 = &local_7e8;
        local_2f0 = &local_7b8;
        local_308 = &local_808;
        uStack_310 = param_2;
        local_300 = &local_7f8;
        local_2f8 = &local_7d8;
        local_2e8 = &local_7b9;
        local_2e0 = &local_618;
        if (piVar36[4] == 0) {
LAB_1482eec6b:
          piVar36 = piVar36 + 0x40;
          lVar40 = lVar40 + -0x100;
          if (lVar40 == 0) goto LAB_1482eed9a;
          goto LAB_1482eec25;
        }
        FUN_14838b116(piVar36,0);
        if ((*(uint *)local_538 == uVar19) &&
           (*(uint *)((longlong)local_538 + (longlong)(int)((uint)uStack_530 - 1) * 4) == uVar39))
        goto LAB_1482eed70;
        if ((*(uint *)local_538 != uVar39) ||
           (*(uint *)((longlong)local_538 + (longlong)(int)((uint)uStack_530 - 1) * 4) != uVar19)) {
          FUN_14838b116(piVar36,*piVar36 + -1);
          if ((*(uint *)local_538 == uVar19) &&
             (*(uint *)((longlong)local_538 + (longlong)(int)((uint)uStack_530 - 1) * 4) == uVar39))
          goto LAB_1482eed70;
          param_2 = local_8e8;
          if ((*(uint *)local_538 == uVar39) &&
             (*(uint *)((longlong)local_538 + (longlong)(int)((uint)uStack_530 - 1) * 4) == uVar19))
          {
            if (1 < (int)(uint)uStack_530) {
              lVar40 = 0;
              ppuVar22 = local_538;
              do {
                uVar19 = *(uint *)ppuVar22;
                *(uint *)ppuVar22 =
                     *(uint *)((longlong)local_538 +
                              (((ulonglong)uStack_530 & 0xffffffff) + lVar40 + -1) * 4);
                *(uint *)((longlong)local_538 +
                         (((ulonglong)uStack_530 & 0xffffffff) + lVar40 + -1) * 4) = uVar19;
                lVar40 = lVar40 + -1;
                ppuVar22 = (undefined **)((longlong)ppuVar22 + 4);
              } while (-(ulonglong)((uint)uStack_530 >> 1) != lVar40);
            }
            goto LAB_1482eed70;
          }
          goto LAB_1482eec6b;
        }
        if (1 < (int)(uint)uStack_530) {
          lVar40 = 0;
          ppuVar22 = local_538;
          do {
            uVar19 = *(uint *)ppuVar22;
            *(uint *)ppuVar22 =
                 *(uint *)((longlong)local_538 +
                          (((ulonglong)uStack_530 & 0xffffffff) + lVar40 + -1) * 4);
            *(uint *)((longlong)local_538 + (((ulonglong)uStack_530 & 0xffffffff) + lVar40 + -1) * 4
                     ) = uVar19;
            lVar40 = lVar40 + -1;
            ppuVar22 = (undefined **)((longlong)ppuVar22 + 4);
          } while (-lVar40 != (ulonglong)((uint)uStack_530 >> 1));
        }
LAB_1482eed70:
        FUN_143b008e8(&local_318,&local_538);
        param_2 = local_8e8;
      }
LAB_1482eed9a:
      uVar24 = uStack_7f0;
      if ((char)local_618 == '\0') {
        lVar40 = (longlong)(int)uStack_7f0;
        uVar19 = (int)uStack_7f0 + 1;
        uStack_7f0 = CONCAT44(uStack_7f0._4_4_,uVar19);
        if (uStack_7f0._4_4_ < uVar19) {
          FUN_1446f48e2(&local_7f8,uVar24 & 0xffffffff);
          param_2 = local_8e8;
        }
        uVar24 = uStack_7d0;
        uVar19 = *(uint *)((longlong)local_8b8 + (longlong)local_8a8 * 8 + 0x20);
        *(uint *)(local_7f8 + lVar40 * 4) = uVar19;
        lVar40 = *(longlong *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar19 >> 9) * 8);
        local_308 = *(undefined8 ***)(lVar40 + 0x10 + (ulonglong)(uVar19 & 0x1ff) * 0x18);
        puVar1 = (undefined8 *)(lVar40 + (ulonglong)(uVar19 & 0x1ff) * 0x18);
        local_318 = (longlong *)*puVar1;
        uStack_310 = puVar1[1];
        lVar40 = (longlong)(int)uStack_7d0;
        uVar19 = (int)uStack_7d0 + 1;
        uStack_7d0 = CONCAT44(uStack_7d0._4_4_,uVar19);
        if (uStack_7d0._4_4_ < uVar19) {
          FUN_1403e3958(&local_7d8,uVar24 & 0xffffffff);
          param_2 = local_8e8;
        }
        local_7d8[lVar40 * 3 + 2] = (double)local_308;
        pdVar23 = local_7d8 + lVar40 * 3;
        *(undefined4 *)pdVar23 = (undefined4)local_318;
        *(undefined4 *)((longlong)pdVar23 + 4) = local_318._4_4_;
        *(int *)(pdVar23 + 1) = (int)uStack_310;
        *(undefined4 *)((longlong)pdVar23 + 0xc) = uStack_310._4_4_;
        local_7b9 = '\0';
      }
      if (local_538 != (undefined **)0x0) {
        FUN_1400020a8();
        param_2 = local_8e8;
      }
      lVar40 = local_8e0;
    } while (local_8d8 != local_8c0);
    param_3 = local_8e0;
    if ((local_7b9 != '\0') && (local_7b8 != 0)) {
      iVar33 = (int)uStack_7d0;
      dVar44 = DAT_14c8464e0;
      dVar48 = DAT_14c8464e8;
      dVar51 = DAT_14c8464f0;
      if ((longlong)(int)uStack_7d0 != 0) {
        pdVar23 = local_7d8;
        do {
          dVar44 = dVar44 + *pdVar23;
          dVar48 = dVar48 + pdVar23[1];
          dVar51 = dVar51 + pdVar23[2];
          pdVar23 = pdVar23 + 3;
        } while (pdVar23 != local_7d8 + (longlong)(int)uStack_7d0 * 3);
      }
      local_8f8 = local_8f8 & 0xffffffffffffff00;
      FUN_1411b354a(&local_318,0,0,0);
      iVar42 = (int)uStack_7e0;
      lVar37 = (longlong)(int)uStack_7e0;
      if (lVar37 < 1) {
LAB_1482ef8ad:
        dVar50 = 1.0 / (double)iVar33;
        local_538 = (undefined **)(dVar44 * dVar50);
        uStack_530 = dVar48 * dVar50;
        local_528 = (longlong *)(dVar50 * dVar51);
        local_520 = DAT_14c846330;
        local_518 = DAT_14c846338;
        iStack_514 = (int)DAT_14c846330;
        uStack_510 = (undefined4)((ulonglong)DAT_14c846330 >> 0x20);
        iStack_50c = DAT_14c846338;
        local_508 = DAT_14c84635c;
        uStack_500 = uStack_500 & 0xffffffffff000000;
        uVar20 = FUN_146c02208(&local_318);
        if (0 < iVar42) {
          iVar33 = 1;
          do {
            iVar29 = iVar33;
            if (iVar33 == iVar42) {
              iVar29 = 0;
            }
            local_538 = (undefined **)CONCAT44(iVar29,iVar33 + -1);
            uStack_530 = (double)CONCAT44(uStack_530._4_4_,uVar20);
            FUN_146c01152(&local_318,&local_538,0);
            bVar49 = iVar33 != iVar42;
            iVar33 = iVar33 + 1;
          } while (bVar49);
        }
        local_538 = &PTR_FUN_14ae72d40;
        uStack_530 = 0.0;
        local_528 = (longlong *)CONCAT26(local_528._6_2_,0x100000000);
        local_4e8 = 0;
        local_4e0 = 0;
        local_518 = 0;
        iStack_514 = 0;
        uStack_510 = 0;
        iStack_50c = 0;
        local_508 = 0;
        uStack_500 = 0;
        local_4dc = 0xffffffff00000080;
        local_4d4 = 0;
        local_4c8 = 0;
        local_4c0 = 0;
        local_498 = 0;
        local_490 = 0;
        local_4b8 = (longlong *)0x0;
        uStack_4b0 = 0;
        local_48c = 0xffffffff00000080;
        local_484 = 0;
        local_478 = 0;
        local_470 = 0;
        local_468 = 0;
        local_460 = 1;
        local_528 = (longlong *)CONCAT44(local_528._4_4_,local_7b8 - 2);
        local_520 = &local_318;
        FUN_148324074();
        FUN_148328bf2(&local_7a8,&local_318,0,1);
        local_818 = (void *)0x0;
        uStack_810 = 0;
        uVar39 = local_1d8 * 0x200 + local_1d4;
        uVar19 = 0;
        if ((uVar39 != 0) && (0xfffd < (ushort)(*(short *)*local_1d0 - 1U))) {
          uVar21 = 1;
          uVar28 = 1;
          if (1 < (int)uVar39) {
            uVar28 = uVar39;
          }
          do {
            uVar34 = uVar21;
            uVar19 = uVar28;
            if (uVar28 == uVar34) break;
            uVar21 = uVar34 + 1;
            uVar19 = uVar34;
          } while (0xfffd < (ushort)(*(short *)(local_1d0[uVar34 >> 9] +
                                               (ulonglong)(uVar34 & 0x1ff) * 2) - 1U));
        }
        if (uVar19 != uVar39) {
          do {
            uVar24 = uStack_810;
            lVar37 = (longlong)(int)uStack_810;
            uVar21 = (int)uStack_810 + 1;
            uStack_810 = CONCAT44(uStack_810._4_4_,uVar21);
            if (uStack_810._4_4_ < uVar21) {
              FUN_1446f48e2(&local_818,uVar24 & 0xffffffff);
            }
            *(uint *)((longlong)local_818 + lVar37 * 4) = uVar19;
            uVar21 = uVar19 + 1;
            if ((int)(uVar19 + 1) < (int)uVar39) {
              uVar21 = uVar39;
            }
            do {
              uVar28 = uVar21;
              if (uVar21 - 1 == uVar19) break;
              uVar19 = uVar19 + 1;
              uVar28 = uVar19;
            } while (0xfffd < (ushort)(*(short *)(local_1d0[uVar19 >> 9] +
                                                 (ulonglong)(uVar19 & 0x1ff) * 2) - 1U));
            uVar19 = uVar28;
          } while (uVar19 != uVar39);
        }
        local_828 = 0;
        uStack_820 = 0;
        local_839 = 0;
        FUN_1483378fe(&local_7a8,&local_828,&local_839,0);
        local_8f8 = 0;
        FUN_14833aaea(&local_7a8,&local_818,1,1);
        FUN_14833c41c(&local_7a8,&local_818,1);
        local_8a0 = (double)CONCAT44(uStack_79c,local_7a0);
        local_838 = (undefined8 *)0x0;
        uStack_830 = 0;
        local_618 = (undefined **)CONCAT44(local_618._4_4_,0xffffffff);
        FUN_1448156a8(&local_838,&local_618);
        iVar33 = (int)uStack_7f0;
        uVar24 = uStack_7f0 & 0xffffffff;
        uStack_610 = 0;
        uStack_5f8 = 0;
        iStack_5f5 = 0;
        uStack_5f0 = (uint)uStack_5f0._3_1_ << 0x18;
        local_608 = 0;
        uStack_600 = 0;
        iStack_5fd = 0;
        uStack_5ec = 2;
        uStack_5e8 = 1;
        local_5d8 = 0;
        local_5c8 = 0;
        local_598 = 0;
        uStack_590 = 0;
        local_588 = 0;
        uStack_580 = 0;
        local_618 = (undefined **)&local_318;
        FUN_146c68b4c(&local_618);
        local_858 = (int *)0x0;
        uStack_850 = 0;
        lVar37 = (longlong)(int)local_608;
        if (0 < lVar37) {
          lVar30 = uStack_610 + 8;
          do {
            if (*(int *)(lVar30 + 8) == iVar33) {
              FUN_14054c6c4(&local_858);
              lVar37 = (longlong)(int)(uint)uStack_850;
              if (lVar37 != 0) {
                lVar30 = lVar37 * 4;
                lVar35 = 0;
                goto LAB_1482f06b2;
              }
              break;
            }
            lVar30 = lVar30 + 0x40;
            lVar37 = lVar37 + -1;
          } while (lVar37 != 0);
        }
LAB_1482efc21:
        local_8b0 = (longlong *)(lVar40 + 0x88);
        iVar42 = 0;
        if (0 < local_2c8 - iVar33) {
          iVar42 = local_2c8 - iVar33;
        }
        if (*(int *)(lVar40 + 0x94) < iVar42) {
          FUN_14830c88a(local_8b0,iVar42);
        }
        piVar36 = local_858;
        dVar44 = local_8a0;
        dVar48 = (double)(longlong)(int)(uint)uStack_850;
        local_8c8 = (undefined1 *)(uStack_850 & 0xffffffff);
        local_868 = 0;
        uStack_860 = 0;
        lVar40 = local_8e8;
        if (dVar48 != 0.0) {
          lVar37 = 0;
          do {
            uVar24 = uStack_860;
            lVar30 = *(longlong *)
                      (*(longlong *)((longlong)dVar44 + 0x48) +
                      (ulonglong)(*(uint *)((longlong)piVar36 + lVar37) >> 5 & 0x3fffff8));
            uVar31 = (ulonglong)((*(uint *)((longlong)piVar36 + lVar37) & 0xff) << 3);
            fVar53 = *(float *)(lVar30 + 4 + uVar31);
            fVar3 = *(float *)(lVar30 + uVar31);
            lVar30 = (longlong)(int)uStack_860;
            uVar19 = (int)uStack_860 + 1;
            uStack_860 = CONCAT44(uStack_860._4_4_,uVar19);
            if (uStack_860._4_4_ < uVar19) {
              FUN_14489624a(&local_868,uVar24 & 0xffffffff);
              lVar40 = local_8e8;
            }
            *(double *)(local_868 + lVar30 * 0x10) = (double)fVar3;
            *(double *)(local_868 + 8 + lVar30 * 0x10) = (double)fVar53;
            lVar37 = lVar37 + 4;
          } while ((longlong)dVar48 * 4 - lVar37 != 0);
        }
        puVar17 = local_8c8;
        iVar33 = *(int *)(lVar40 + 0x1b0);
        *(int *)(lVar40 + 0x1b0) = iVar33 + 1;
        *(int *)(local_8e0 + 0x60) = iVar33;
        uVar39 = (int)local_2f8 * 0x200 + local_2f8._4_4_;
        local_898 = dVar48;
        uVar19 = 0;
        lVar37 = local_8e0;
        if ((uVar39 != 0) && (uVar19 = 0, 0xfffd < (ushort)(**(short **)local_2f0 - 1U))) {
          uVar21 = 1;
          uVar28 = 1;
          if (1 < (int)uVar39) {
            uVar21 = uVar39;
          }
          do {
            uVar34 = uVar28;
            uVar19 = uVar21;
            if (uVar21 == uVar34) break;
            uVar28 = uVar34 + 1;
            uVar19 = uVar34;
          } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                 (local_2f0 + (ulonglong)(uVar34 >> 9) * 2) +
                                               (ulonglong)(uVar34 & 0x1ff) * 2) - 1U));
        }
joined_r0x0001482efd6b:
        uVar21 = uVar19;
        if (uVar21 != uVar39) {
          if (*(int *)((longlong)local_838 + (longlong)(int)uVar21 * 4) == -1) {
            plVar46 = local_308[uVar21 >> 9] + (ulonglong)(uVar21 & 0x1ff) * 3;
            local_6b8 = (undefined8 *)*plVar46;
            local_708 = (undefined8 *)*plVar46;
            dStack_6b0 = (double)plVar46[1];
            uStack_700 = (double)plVar46[1];
            local_6f8 = (code *)local_308[uVar21 >> 9][(ulonglong)(uVar21 & 0x1ff) * 3 + 2];
            uStack_6a0 = SUB83(DAT_14c846330,0);
            uStack_69d = (undefined5)((ulonglong)DAT_14c846330 >> 0x18);
            uStack_694 = SUB87(DAT_14c846330,0);
            uStack_68d = (undefined1)((ulonglong)DAT_14c846330 >> 0x38);
            uStack_688 = (undefined4)DAT_14c84635c;
            uStack_684 = (undefined4)((ulonglong)DAT_14c84635c >> 0x20);
            local_680 = 0;
            local_67e = 0;
            local_6a8 = local_6f8;
            iStack_698 = DAT_14c846338;
            local_68c = DAT_14c846338;
            uVar20 = FUN_146c02208(lVar40,&local_6b8);
            *(undefined4 *)((longlong)local_838 + (longlong)(int)uVar21 * 4) = uVar20;
            iVar33 = *(int *)(lVar37 + 0x90);
            lVar40 = (longlong)iVar33;
            *(uint *)(lVar37 + 0x90) = iVar33 + 1U;
            if (*(uint *)(lVar37 + 0x94) < iVar33 + 1U) {
              FUN_14830c8fc(local_8b0,iVar33);
            }
            lVar30 = *local_8b0;
            puVar1 = (undefined8 *)(lVar30 + lVar40 * 0x18);
            *puVar1 = 0;
            puVar1[1] = 0;
            *(undefined8 *)(lVar30 + 0x10 + lVar40 * 0x18) = 0;
            *(undefined4 *)(lVar30 + lVar40 * 0x18) = uVar20;
            if ((int)(uint)uStack_850 < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_1456afac4(uStack_850 & 0xffffffff);
            }
            plVar46 = (longlong *)(lVar30 + lVar40 * 0x18 + 8);
            if ((uStack_850 & 0xffffffff) != 0) {
              FUN_1447a8aa0(plVar46);
            }
            lVar30 = lVar30 + lVar40 * 0x18;
            lVar40 = local_8e8;
            if ((int)local_8c8 < 1) {
              dVar44 = 0.0;
            }
            else {
              uVar24 = (ulonglong)((uVar21 & 0xff) << 3);
              lVar37 = *(longlong *)
                        (*(longlong *)((longlong)local_8a0 + 0x48) +
                        (ulonglong)(uVar21 >> 5 & 0x3fffff8));
              plVar54 = (longlong *)(double)*(float *)(lVar37 + 4 + uVar24);
              local_8d8 = (longlong *)(double)*(float *)(lVar37 + uVar24);
              lVar37 = 8;
              dVar44 = 0.0;
              puVar38 = &DAT_00000001;
              local_8c0 = plVar54;
              do {
                lVar35 = (longlong)(((int)local_8c8 + (int)puVar38 + -2) % (int)local_8c8) * 0x10;
                dVar48 = *(double *)(local_868 + lVar35);
                dVar51 = *(double *)(local_868 + 8 + lVar35);
                puVar26 = puVar38;
                if (puVar38 == puVar17) {
                  puVar26 = (undefined1 *)0x0;
                }
                dVar50 = *(double *)(local_868 + (longlong)puVar26 * 0x10);
                dVar7 = *(double *)(local_868 + 8 + (longlong)puVar26 * 0x10);
                dVar12 = dVar7 - dVar51;
                dVar8 = dVar50 - dVar48;
                dVar10 = SQRT(dVar8 * dVar8 + dVar12 * dVar12);
                if (0.0 < dVar10) {
                  dVar12 = dVar12 * (1.0 / dVar10);
                }
                else {
                  dVar12 = 0.0;
                }
                local_8d0 = *(double *)(local_868 + -8 + lVar37);
                local_8a8 = *(double *)(local_868 + lVar37);
                dVar14 = local_8d0 - (double)local_8d8;
                dVar13 = local_8a8 - (double)plVar54;
                local_8b8 = SQRT(dVar14 * dVar14 + dVar13 * dVar13);
                dVar52 = 1.0;
                if (1e-08 < local_8b8) {
                  dVar51 = dVar51 - (double)plVar54;
                  dVar48 = dVar48 - (double)local_8d8;
                  dVar52 = SQRT(dVar48 * dVar48 + dVar51 * dVar51);
                  if (0.0 < dVar52) {
                    dVar51 = dVar51 * (1.0 / dVar52);
                  }
                  else {
                    dVar51 = 0.0;
                  }
                  dVar13 = dVar13 * (1.0 / local_8b8);
                  dVar14 = dVar14 * (1.0 / local_8b8);
                  dVar48 = (double)(-(ulonglong)(0.0 < dVar52) &
                                   (ulonglong)(dVar48 * (1.0 / dVar52))) * dVar14 + dVar51 * dVar13;
                  dVar48 = (1.0 - dVar48) / (dVar48 + 1.0);
                  dVar51 = 1.79769313486232e+308;
                  if (dVar48 <= 1.79769313486232e+308) {
                    dVar51 = dVar48;
                  }
                  dVar51 = (double)(~-(ulonglong)(dVar48 < 0.0) & (ulonglong)dVar51);
                  if (dVar51 < 0.0) {
                    dVar51 = sqrt(dVar51);
                  }
                  else {
                    dVar51 = SQRT(dVar51);
                  }
                  dVar7 = dVar7 - (double)local_8c0;
                  dVar50 = dVar50 - (double)local_8d8;
                  dVar48 = SQRT(dVar50 * dVar50 + dVar7 * dVar7);
                  if (0.0 < dVar48) {
                    dVar7 = dVar7 * (1.0 / dVar48);
                  }
                  else {
                    dVar7 = 0.0;
                  }
                  dVar48 = (double)(-(ulonglong)(0.0 < dVar48) &
                                   (ulonglong)(dVar50 * (1.0 / dVar48))) * dVar14 + dVar13 * dVar7;
                  dVar48 = (1.0 - dVar48) / (dVar48 + 1.0);
                  dVar50 = 1.79769313486232e+308;
                  if (dVar48 <= 1.79769313486232e+308) {
                    dVar50 = dVar48;
                  }
                  dVar50 = (double)(~-(ulonglong)(dVar48 < 0.0) & (ulonglong)dVar50);
                  if (dVar50 < 0.0) {
                    dVar50 = sqrt(dVar50);
                  }
                  else {
                    dVar50 = SQRT(dVar50);
                  }
                  dVar52 = (dVar51 + dVar50) / local_8b8;
                  lVar40 = local_8e8;
                  plVar54 = local_8c0;
                }
                lVar35 = (longlong)*(int *)(lVar30 + 0x10);
                uVar19 = *(int *)(lVar30 + 0x10) + 1;
                *(uint *)(lVar30 + 0x10) = uVar19;
                if (*(uint *)(lVar30 + 0x14) < uVar19) {
                  FUN_1403e3958(plVar46);
                  lVar40 = local_8e8;
                  plVar54 = local_8c0;
                }
                dVar48 = (double)(-(ulonglong)(0.0 < dVar10) & (ulonglong)(dVar8 * (1.0 / dVar10)));
                lVar47 = *plVar46;
                *(double *)(lVar47 + lVar35 * 0x18) =
                     dVar48 * ((double)local_8d8 - local_8d0) +
                     ((double)plVar54 - local_8a8) * dVar12;
                *(double *)(lVar47 + 8 + lVar35 * 0x18) =
                     ((double)local_8d8 - local_8d0) * dVar12 -
                     ((double)plVar54 - local_8a8) * dVar48;
                *(double *)(lVar47 + 0x10 + lVar35 * 0x18) = dVar52;
                dVar44 = dVar44 + dVar52;
                lVar37 = lVar37 + 0x10;
                bVar49 = puVar38 != puVar17;
                puVar38 = puVar38 + 1;
              } while (bVar49);
            }
            iVar33 = *(int *)(lVar30 + 0x10);
            lVar37 = local_8e0;
            if ((longlong)iVar33 != 0) {
              lVar30 = *(longlong *)(lVar30 + 8);
              lVar35 = 0;
              do {
                *(double *)(lVar30 + 0x10 + lVar35) = *(double *)(lVar30 + 0x10 + lVar35) / dVar44;
                lVar35 = lVar35 + 0x18;
              } while ((longlong)iVar33 * 0x18 != lVar35);
            }
          }
          uVar28 = uVar21 + 1;
          if ((int)(uVar21 + 1) < (int)uVar39) {
            uVar28 = uVar39;
          }
          do {
            uVar19 = uVar28;
            if (uVar28 - 1 == uVar21) break;
            uVar21 = uVar21 + 1;
            uVar19 = uVar21;
          } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                 (local_2f0 + (ulonglong)(uVar21 >> 9) * 2) +
                                               (ulonglong)(uVar21 & 0x1ff) * 2) - 1U));
          goto joined_r0x0001482efd6b;
        }
        if ((int)local_8c8 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(local_8c8);
        }
        plVar46 = (longlong *)(lVar37 + 0x98);
        if (*(int *)(lVar37 + 0xa4) < SUB84(local_898,0)) {
          FUN_14481578e(plVar46,local_8c8);
        }
        piVar36 = local_858;
        lVar40 = (longlong)(int)(uint)uStack_850;
        if (lVar40 != 0) {
          lVar37 = 0;
          do {
            puVar1 = local_838;
            iVar33 = *(int *)((longlong)piVar36 + lVar37);
            iVar42 = *(int *)(local_8e0 + 0xa0);
            *(uint *)(local_8e0 + 0xa0) = iVar42 + 1U;
            if (*(uint *)(local_8e0 + 0xa4) < iVar42 + 1U) {
              FUN_1446f48e2(plVar46,iVar42);
            }
            *(undefined4 *)(*plVar46 + (longlong)iVar42 * 4) =
                 *(undefined4 *)((longlong)puVar1 + (longlong)iVar33 * 4);
            lVar37 = lVar37 + 4;
          } while (lVar40 * 4 != lVar37);
        }
        FUN_146c0aee0(&local_318,1);
        local_6f8 = (code *)0x0;
        local_6e8 = 0x49f3b6a0;
        uStack_6e4 = 1;
        local_708 = (undefined8 *)&DAT_146c408a8;
        local_6e0 = &local_318;
        FUN_146c406b8(&local_1d8,&local_6b8);
        FUN_146bfea58(&local_6b8,&local_708);
        local_750 = *local_678 * 0x200 + local_678[1];
        local_738 = (undefined **)0x0;
        local_748[0] = (code *)0x0;
        local_758 = local_678;
        local_74c = local_750;
        FUN_146c40784(local_748,&local_6b8);
        lVar40 = local_8e0;
        if ((uint)uStack_700 != local_750) {
          plVar46 = (longlong *)(local_8e0 + 0x68);
          uVar19 = (uint)uStack_700;
          do {
            pcVar32 = local_6f8;
            uStack_7b4 = uVar19;
            plVar54 = (longlong *)CONCAT44(uStack_6e4,local_6e8);
            if ((longlong *)CONCAT44(uStack_6e4,local_6e8) == (longlong *)0x0) {
              plVar54 = &local_6d8;
            }
            uVar25 = (**(code **)(*plVar54 + 8))();
            (*pcVar32)(&local_874,uVar25,&uStack_7b4);
            lVar37 = local_8e8;
            uStack_7b4 = *(uint *)((longlong)local_838 + (longlong)local_874 * 4);
            local_7b0 = *(undefined4 *)((longlong)local_838 + (longlong)local_870 * 4);
            local_7ac = *(undefined4 *)((longlong)local_838 + (longlong)local_86c * 4);
            uVar19 = FUN_146c01152(local_8e8,&uStack_7b4,*(undefined4 *)(lVar40 + 0x60));
            if (((-1 < (int)uVar19) &&
                ((int)uVar19 < *(int *)(lVar37 + 0x140) * 0x200 + *(int *)(lVar37 + 0x144))) &&
               ((ushort)(*(short *)(*(longlong *)
                                     (*(longlong *)(lVar37 + 0x148) + (ulonglong)(uVar19 >> 9) * 8)
                                   + (ulonglong)(uVar19 & 0x1ff) * 2) - 1U) < 0xfffe)) {
              iVar33 = *(int *)(lVar40 + 0x70);
              *(uint *)(lVar40 + 0x70) = iVar33 + 1U;
              if (*(uint *)(lVar40 + 0x74) < iVar33 + 1U) {
                FUN_1446f48e2(plVar46,iVar33);
              }
              *(uint *)(*plVar46 + (longlong)iVar33 * 4) = uVar19;
            }
            iVar33 = uStack_700._4_4_;
            uVar19 = (uint)uStack_700;
            do {
              uVar19 = uVar19 + 1;
              uStack_700 = (double)CONCAT44(uStack_700._4_4_,uVar19);
              if (iVar33 <= (int)uVar19) break;
            } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                   (local_708[1] + (ulonglong)(uVar19 >> 9) * 8) +
                                                 (ulonglong)(uVar19 & 0x1ff) * 2) - 1U));
          } while (local_750 != uVar19);
        }
        if (local_748[0] != (code *)0x0) {
          ppuVar22 = local_738;
          if (local_738 == (undefined **)0x0) {
            ppuVar22 = local_728;
          }
          (**(code **)(*ppuVar22 + 0x10))();
        }
        if (local_6f8 != (code *)0x0) {
          plVar46 = (longlong *)CONCAT44(uStack_6e4,local_6e8);
          if ((longlong *)CONCAT44(uStack_6e4,local_6e8) == (longlong *)0x0) {
            plVar46 = &local_6d8;
          }
          (**(code **)(*plVar46 + 0x10))();
        }
        if (local_6b8 != (undefined8 *)0x0) {
          pcVar32 = local_6a8;
          if (local_6a8 == (code *)0x0) {
            pcVar32 = (code *)&iStack_698;
          }
          (**(code **)(*(longlong *)pcVar32 + 0x10))();
        }
        if (local_868 != 0) {
          FUN_1400020a8();
        }
        if (local_858 != (int *)0x0) {
          FUN_1400020a8();
        }
        FUN_1482f1656(&local_618);
        if (local_838 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        if (local_828 != 0) {
          FUN_1400020a8();
        }
        if (local_818 != (void *)0x0) {
          FUN_1400020a8();
        }
        FUN_1482f16dc(&local_538);
      }
      else {
        lVar40 = 0;
        do {
          local_528 = *(longlong **)(local_7e8 + 0x10 + lVar40);
          local_538 = *(undefined ***)(local_7e8 + lVar40);
          uStack_530 = (double)((undefined8 *)(local_7e8 + lVar40))[1];
          local_518 = DAT_14c846338;
          local_520 = DAT_14c846330;
          iStack_50c = DAT_14c846338;
          iStack_514 = (int)DAT_14c846330;
          uStack_510 = (undefined4)((ulonglong)DAT_14c846330 >> 0x20);
          local_508 = DAT_14c84635c;
          uStack_500 = uStack_500 & 0xffffffffff000000;
          FUN_146c02208(&local_318,&local_538);
          lVar40 = lVar40 + 0x18;
        } while (lVar37 * 0x18 != lVar40);
        if (iVar42 == 3) {
          local_538 = (undefined **)&DAT_100000000;
          uStack_530 = (double)CONCAT44(uStack_530._4_4_,2);
          FUN_146c01152(&local_318,&local_538,0);
          local_8f8 = local_8f8 & 0xffffffffffffff00;
          FUN_1411b354a(&local_538,0,0,0);
          FUN_146c005ca(&local_538,&local_318);
          local_618 = (undefined **)0x3ff0000000000000;
          uStack_610 = 0;
          local_608 = 0;
          cVar18 = FUN_146bfed03();
          lVar40 = local_8e0;
          if (cVar18 != '\0') {
            puVar6 = (undefined4 *)*local_528;
            *(undefined8 *)(puVar6 + 4) = local_608;
            *puVar6 = (undefined4)local_618;
            puVar6[1] = local_618._4_4_;
            puVar6[2] = (undefined4)uStack_610;
            puVar6[3] = uStack_610._4_4_;
            if (local_328 == '\x01') {
              LOCK();
              local_324 = local_324 + 1;
              UNLOCK();
            }
          }
          local_618 = (undefined **)0x0;
          uStack_610 = 0x3ff0000000000000;
          local_608 = 0;
          cVar18 = FUN_146bfed03();
          if (cVar18 != '\0') {
            lVar37 = *local_528;
            *(undefined8 *)(lVar37 + 0x28) = local_608;
            *(undefined4 *)(lVar37 + 0x18) = (undefined4)local_618;
            *(undefined4 *)(lVar37 + 0x1c) = local_618._4_4_;
            *(undefined4 *)(lVar37 + 0x20) = (undefined4)uStack_610;
            *(undefined4 *)(lVar37 + 0x24) = uStack_610._4_4_;
            if (local_328 == '\x01') {
              LOCK();
              local_324 = local_324 + 1;
              UNLOCK();
            }
          }
          local_618 = (undefined **)0x3fe0000000000000;
          uStack_610 = 0x3fe8000000000000;
          local_608 = 0;
          cVar18 = FUN_146bfed03();
          if (cVar18 != '\0') {
            lVar37 = *local_528;
            *(undefined8 *)(lVar37 + 0x40) = local_608;
            *(undefined4 *)(lVar37 + 0x30) = (undefined4)local_618;
            *(undefined4 *)(lVar37 + 0x34) = local_618._4_4_;
            *(undefined4 *)(lVar37 + 0x38) = (undefined4)uStack_610;
            *(undefined4 *)(lVar37 + 0x3c) = uStack_610._4_4_;
            if (local_328 == '\x01') {
              LOCK();
              local_324 = local_324 + 1;
              UNLOCK();
            }
          }
          uStack_610 = CONCAT44(uStack_610._4_4_,DAT_14c846338);
          local_618 = (undefined **)DAT_14c846330;
          FUN_146c01f68(&local_538);
          if (local_4a8 == 1) {
            puVar1 = (undefined8 *)*local_4b8;
            *puVar1 = 0x3f800000;
            *(undefined4 *)(puVar1 + 1) = 0;
          }
          if ((local_4a8 & 1) != 0) {
            lVar37 = *local_4b8;
            *(undefined8 *)(lVar37 + 0xc) = 0x3f80000000000000;
            *(undefined4 *)(lVar37 + 0x14) = 0;
          }
          if ((local_4a8 & 1) != 0) {
            lVar37 = *local_4b8;
            *(undefined8 *)(lVar37 + 0x18) = 0;
            *(undefined4 *)(lVar37 + 0x20) = 0x3f800000;
          }
          local_618 = &PTR_FUN_14ae72d40;
          uStack_610 = 0;
          local_608 = CONCAT26(local_608._6_2_,0x100000000);
          uStack_600 = SUB83(&local_538,0);
          iStack_5fd = (int5)((ulonglong)&local_538 >> 0x18);
          local_5c8 = 0;
          local_5c0 = 0;
          uStack_5f8 = 0;
          iStack_5f5 = 0;
          uStack_5f0 = 0;
          uStack_5ec = 0;
          uStack_5e8 = 0;
          uStack_5e4 = 0;
          uStack_5e0 = 0;
          local_5bc = 0xffffffff00000080;
          local_5b4 = 0;
          local_5a8 = 0;
          local_5a0 = 0;
          local_578 = 0;
          local_570 = 0;
          local_598 = 0;
          uStack_590 = 0;
          local_56c = 0xffffffff00000080;
          local_564 = 0;
          local_558 = 0;
          local_550 = 0;
          local_548 = 0;
          local_540 = 1;
          local_608 = CONCAT44(local_608._4_4_,local_7b8 - 2);
          FUN_148324074();
          dStack_6b0 = 0.0;
          iStack_698 = 0;
          uStack_694 = 0;
          local_6a8 = (code *)0x0;
          uStack_6a0 = 0;
          uStack_69d = 0;
          local_68c = 2;
          uStack_688 = 1;
          local_678 = (int *)0x0;
          local_668 = 0;
          local_638 = 0;
          uStack_630 = 0;
          local_628 = 0;
          uStack_620 = 0;
          local_6b8 = &local_538;
          FUN_146c68b4c(&local_6b8);
          local_818 = (void *)0x0;
          uVar19 = *(uint *)((longlong)dStack_6b0 + 0x10);
          _Src = *(void **)((longlong)dStack_6b0 + 8);
          uStack_810 = CONCAT44(uStack_810._4_4_,uVar19);
          iVar33 = 0;
          if ((longlong)(int)uVar19 == 0) {
            uStack_810 = (ulonglong)uVar19;
            iVar42 = -1;
          }
          else {
            FUN_144a06ca8(&local_818,uVar19,0);
            memcpy(local_818,_Src,(longlong)(int)uVar19 << 2);
            iVar42 = -1;
            if ((longlong)(int)uStack_810 != 0) {
              lVar30 = (longlong)(int)uStack_810 << 2;
              lVar37 = 0;
              do {
                iVar33 = (int)uStack_810;
                if (*(int *)((longlong)local_818 + lVar37 * 4) == 0) {
                  iVar42 = (int)lVar37;
                  break;
                }
                lVar37 = lVar37 + 1;
                lVar30 = lVar30 + -4;
              } while (lVar30 != 0);
            }
          }
          local_828 = 0;
          uStack_820 = 0;
          FUN_144a1a59e(&local_828,local_518 * 0x200 + iStack_514,1);
          if (0 < iVar33) {
            iVar29 = 0;
            do {
              *(int *)(local_828 +
                      (longlong)
                      *(int *)((longlong)local_818 + (longlong)((iVar42 + iVar29) % iVar33) * 4) * 4
                      ) = iVar29;
              iVar29 = iVar29 + 1;
            } while (iVar33 != iVar29);
          }
          puVar1 = *local_308;
          local_8d8 = (longlong *)*puVar1;
          local_8d0 = (double)puVar1[1];
          dVar44 = (double)puVar1[2];
          dVar48 = (double)puVar1[3];
          dVar51 = (double)puVar1[4];
          dVar50 = (double)puVar1[5];
          dVar7 = (double)puVar1[6];
          dVar8 = (double)puVar1[7];
          dVar10 = (double)puVar1[8];
          plVar46 = (longlong *)(lVar40 + 0x88);
          if (*(int *)(lVar40 + 0x94) < (int)((local_7b8 - 1) * (local_7b8 - 1))) {
            FUN_14830c88a(plVar46);
          }
          uVar25 = *local_808;
          uVar20 = *(undefined4 *)(local_808 + 1);
          local_708 = (undefined8 *)0x0;
          uStack_700 = (double)CONCAT44(uStack_700._4_4_,3);
          FUN_144a06ca8(&local_708,3,0);
          *local_708 = uVar25;
          *(undefined4 *)(local_708 + 1) = uVar20;
          if ((undefined8 **)(lVar40 + 0x98) == &local_708) {
            if (local_708 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
          }
          else {
            if (*(longlong *)(lVar40 + 0x98) != 0) {
              FUN_1400020a8();
            }
            *(undefined8 **)(lVar40 + 0x98) = local_708;
            local_708 = (undefined8 *)0x0;
            *(uint *)(lVar40 + 0xa0) = (uint)uStack_700;
            *(int *)(lVar40 + 0xa4) = uStack_700._4_4_;
          }
          local_838 = (undefined8 *)0x0;
          uStack_830 = 0;
          FUN_144a1a59e(&local_838,local_518 * 0x200 + iStack_514,1);
          uVar19 = 0;
          uVar39 = local_518 * 0x200 + iStack_514;
          if ((uVar39 != 0) &&
             (uVar19 = 0, 0xfffd < (ushort)(**(short **)CONCAT44(iStack_50c,uStack_510) - 1U))) {
            uVar21 = 1;
            uVar28 = 1;
            if (1 < (int)uVar39) {
              uVar21 = uVar39;
            }
            do {
              uVar19 = uVar21;
              if (uVar21 == uVar28) break;
              uVar34 = uVar28 >> 9;
              uVar41 = uVar28 & 0x1ff;
              uVar19 = uVar28;
              uVar28 = uVar28 + 1;
            } while (0xfffd < (ushort)(*(short *)(((undefined8 *)CONCAT44(iStack_50c,uStack_510))
                                                  [uVar34] + (ulonglong)uVar41 * 2) - 1U));
          }
          if (uVar19 != uVar39) {
            do {
              cVar18 = FUN_146c0b51e(&local_538,uVar19);
              if (cVar18 == '\0') {
                pfVar27 = (float *)&DAT_14c846350;
                if (local_4a8 == 1) {
                  pfVar27 = (float *)((ulonglong)((uVar19 & 0x1ff) * 0xc) + local_4b8[uVar19 >> 9]);
                }
                fVar53 = 1.0 / (pfVar27[1] + *pfVar27 + pfVar27[2]);
                dVar13 = (double)(*pfVar27 * fVar53);
                dVar12 = (double)(pfVar27[1] * fVar53);
                dVar52 = (double)(fVar53 * pfVar27[2]);
                local_6f8 = (code *)(dVar10 * dVar52 + dVar50 * dVar12 + dVar44 * dVar13);
                uStack_700 = dVar8 * dVar52 + dVar51 * dVar12 + local_8d0 * dVar13;
                local_708 = (undefined8 *)
                            (dVar7 * dVar52 + dVar48 * dVar12 + (double)local_8d8 * dVar13);
                local_6e8 = DAT_14c846338;
                local_6f0 = DAT_14c846330;
                local_6e0._4_4_ = DAT_14c846338;
                uStack_6e4 = SUB84(DAT_14c846330,0);
                local_6e0._0_4_ = (undefined4)((ulonglong)DAT_14c846330 >> 0x20);
                local_6d8 = DAT_14c84635c;
                local_6d0 = 0;
                local_6ce = 0;
                uVar20 = FUN_146c02208(local_8e8,&local_708);
                iVar33 = *(int *)(local_8e0 + 0x90);
                *(uint *)(local_8e0 + 0x90) = iVar33 + 1U;
                if (*(uint *)(local_8e0 + 0x94) < iVar33 + 1U) {
                  FUN_14830c8fc(plVar46,iVar33);
                }
                puVar1 = (undefined8 *)(*plVar46 + (longlong)iVar33 * 0x18);
                *puVar1 = 0;
                puVar1[1] = 0;
                puVar1[2] = 0;
                *(undefined4 *)puVar1 = uVar20;
                *(undefined4 *)(puVar1 + 2) = 1;
                FUN_1403e3958(puVar1 + 1,0);
                pdVar23 = (double *)puVar1[1];
                *pdVar23 = dVar13;
                pdVar23[1] = dVar12;
                pdVar23[2] = dVar52;
                *(undefined4 *)((longlong)local_838 + (longlong)(int)uVar19 * 4) = uVar20;
              }
              else {
                *(undefined4 *)((longlong)local_838 + (longlong)(int)uVar19 * 4) =
                     *(undefined4 *)
                      (local_7f8 + (longlong)*(int *)(local_828 + (longlong)(int)uVar19 * 4) * 4);
              }
              uVar21 = uVar19 + 1;
              if ((int)(uVar19 + 1) < (int)uVar39) {
                uVar21 = uVar39;
              }
              do {
                uVar28 = uVar21;
                if (uVar21 - 1 == uVar19) break;
                uVar19 = uVar19 + 1;
                uVar28 = uVar19;
              } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                     (CONCAT44(iStack_50c,uStack_510) +
                                                     (ulonglong)(uVar19 >> 9) * 8) +
                                                   (ulonglong)(uVar19 & 0x1ff) * 2) - 1U));
              uVar19 = uVar28;
            } while (uVar19 != uVar39);
          }
          lVar40 = local_8e0;
          iVar33 = *(int *)(local_8e8 + 0x1b0);
          *(int *)(local_8e8 + 0x1b0) = iVar33 + 1;
          *(int *)(local_8e0 + 0x60) = iVar33;
          local_748[0] = (code *)0x0;
          local_738 = &PTR_DAT_149f3b6a0;
          local_730 = &local_538;
          local_758 = (int *)&DAT_146c408a8;
          FUN_146c406b8(local_3f8,&local_708);
          FUN_146bfea58(&local_708,&local_758);
          local_7a0 = *local_6c8 * 0x200 + local_6c8[1];
          local_788 = (longlong *)0x0;
          local_798[0] = 0;
          local_7a8 = local_6c8;
          uStack_79c = local_7a0;
          FUN_146c40784(local_798,&local_708);
          if (local_750 != local_7a0) {
            do {
              pcVar32 = local_748[0];
              local_858 = (int *)CONCAT44(local_858._4_4_,local_750);
              ppuVar22 = local_738;
              if (local_738 == (undefined **)0x0) {
                ppuVar22 = local_728;
              }
              uVar25 = (**(code **)(*ppuVar22 + 8))();
              (*pcVar32)(&local_868,uVar25,&local_858);
              lVar37 = local_8e8;
              local_858 = (int *)CONCAT44(*(undefined4 *)
                                           ((longlong)local_838 + (longlong)(int)uStack_860 * 4),
                                          *(undefined4 *)
                                           ((longlong)local_838 + (longlong)(int)local_868 * 4));
              uStack_850 = CONCAT44(uStack_850._4_4_,
                                    *(undefined4 *)
                                     ((longlong)local_838 + (longlong)local_868._4_4_ * 4));
              uVar19 = FUN_146c01152(local_8e8,&local_858,*(undefined4 *)(lVar40 + 0x60));
              if (((-1 < (int)uVar19) &&
                  ((int)uVar19 < *(int *)(lVar37 + 0x140) * 0x200 + *(int *)(lVar37 + 0x144))) &&
                 ((ushort)(*(short *)(*(longlong *)
                                       (*(longlong *)(lVar37 + 0x148) + (ulonglong)(uVar19 >> 9) * 8
                                       ) + (ulonglong)(uVar19 & 0x1ff) * 2) - 1U) < 0xfffe)) {
                iVar33 = *(int *)(lVar40 + 0x70);
                *(uint *)(lVar40 + 0x70) = iVar33 + 1U;
                if (*(uint *)(lVar40 + 0x74) < iVar33 + 1U) {
                  FUN_1446f48e2((longlong *)(lVar40 + 0x68),iVar33);
                }
                *(uint *)(*(longlong *)(lVar40 + 0x68) + (longlong)iVar33 * 4) = uVar19;
              }
              do {
                local_750 = local_750 + 1;
                if ((int)local_74c <= (int)local_750) break;
              } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                     (*(longlong *)(local_758 + 2) +
                                                     (ulonglong)(local_750 >> 9) * 8) +
                                                   (ulonglong)(local_750 & 0x1ff) * 2) - 1U));
            } while (local_7a0 != local_750);
          }
          if (local_798[0] != 0) {
            plVar46 = local_788;
            if (local_788 == (longlong *)0x0) {
              plVar46 = local_778;
            }
            (**(code **)(*plVar46 + 0x10))();
          }
          if (local_748[0] != (code *)0x0) {
            ppuVar22 = local_738;
            if (local_738 == (undefined **)0x0) {
              ppuVar22 = local_728;
            }
            (**(code **)(*ppuVar22 + 0x10))();
          }
          if (local_708 != (undefined8 *)0x0) {
            pcVar32 = local_6f8;
            if (local_6f8 == (code *)0x0) {
              pcVar32 = (code *)&local_6e8;
            }
            (**(code **)(*(longlong *)pcVar32 + 0x10))();
          }
          if (local_838 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
          if (local_828 != 0) {
            FUN_1400020a8();
          }
          if (local_818 != (void *)0x0) {
            FUN_1400020a8();
          }
          FUN_1482f1656(&local_6b8);
          FUN_1482f16dc(&local_618);
          FUN_141082778(&local_538);
        }
        else {
          lVar40 = local_8e0;
          if (iVar42 != 4) goto LAB_1482ef8ad;
          local_538 = (undefined **)0x100000000;
          uStack_530._0_4_ = 2;
          FUN_146c01152(&local_318,&local_538,0);
          local_538 = (undefined **)0x300000002;
          uStack_530 = (double)((ulonglong)uStack_530._4_4_ << 0x20);
          FUN_146c01152(&local_318,&local_538,0);
          local_618 = (undefined **)0x0;
          uStack_610 = 0;
          local_608 = 0;
          uStack_600 = (undefined3)local_7b8;
          cVar18 = (char)(local_7b8 >> 0x18);
          iStack_5fd = (int5)cVar18;
          iStack_5f5 = (int5)cVar18;
          uStack_5f8 = uStack_600;
          FUN_14830c990(&local_618,(longlong)(int)local_7b8 * (longlong)(int)local_7b8);
          lVar40 = local_8e0;
          lVar37 = CONCAT53(iStack_5f5,uStack_5f8) * CONCAT53(iStack_5fd,uStack_600);
          if (0 < lVar37) {
            lVar30 = 0;
            do {
              *(uint *)((longlong)local_618 + lVar30 * 4) = 0xffffffff;
              lVar30 = lVar30 + 1;
            } while (lVar37 - lVar30 != 0);
          }
          if (0 < (int)local_7b8) {
            uVar24 = 0;
            do {
              *(uint *)((longlong)local_618 + uVar24 * 4) = *(uint *)(local_7f8 + uVar24 * 4);
              uVar24 = uVar24 + 1;
            } while ((longlong)uVar24 < (longlong)(int)local_7b8);
            uVar31 = (ulonglong)(local_7b8 - 1);
            if (2 < (int)local_7b8) {
              lVar37 = 1;
              do {
                lVar30 = uVar24 * 4;
                uVar24 = uVar24 + 1;
                *(uint *)((longlong)local_618 +
                         (CONCAT53(iStack_5fd,uStack_600) * lVar37 + (longlong)(int)uVar31) * 4) =
                     *(uint *)(local_7f8 + lVar30);
                lVar37 = lVar37 + 1;
                uVar31 = (longlong)(int)local_7b8 - 1;
              } while (lVar37 < (longlong)uVar31);
            }
            if (-1 < (int)uVar31) {
              uVar24 = uVar24 & 0xffffffff;
              uVar31 = uVar31 & 0xffffffff;
              do {
                lVar37 = uVar24 * 4;
                uVar24 = uVar24 + 1;
                *(uint *)((longlong)local_618 +
                         (((longlong)(int)local_7b8 + -1) * CONCAT53(iStack_5fd,uStack_600) + uVar31
                         ) * 4) = *(uint *)(local_7f8 + lVar37);
                bVar49 = uVar31 != 0;
                uVar31 = uVar31 - 1;
              } while (bVar49);
            }
            if (2 < (int)local_7b8) {
              lVar37 = (uVar24 & 0xffffffff) << 2;
              uVar24 = (ulonglong)(local_7b8 - 2);
              do {
                *(uint *)((longlong)local_618 + CONCAT53(iStack_5fd,uStack_600) * uVar24 * 4) =
                     *(uint *)(local_7f8 + lVar37);
                lVar37 = lVar37 + 4;
                bVar49 = 1 < uVar24;
                uVar24 = uVar24 - 1;
              } while (bVar49);
            }
          }
          uVar19 = *(uint *)local_618;
          lVar37 = (longlong)(int)local_7b8;
          uVar39 = *(uint *)((longlong)local_618 + (lVar37 + -1) * 4);
          puVar2 = (uint *)((longlong)local_618 +
                           (lVar37 + -1) * CONCAT53(iStack_5fd,uStack_600) * 4);
          uVar21 = *puVar2;
          uVar28 = puVar2[lVar37 + -1];
          lVar37 = *(longlong *)(local_8e8 + 0x10);
          lVar30 = *(longlong *)(lVar37 + (ulonglong)(uVar19 >> 9) * 8);
          uVar24 = (ulonglong)uVar19 & 0x1ff;
          local_8d8 = *(longlong **)(lVar30 + uVar24 * 0x18);
          local_8d0 = *(double *)(lVar30 + 8 + uVar24 * 0x18);
          local_8a8 = *(double *)(lVar30 + 0x10 + uVar24 * 0x18);
          lVar30 = *(longlong *)(lVar37 + (ulonglong)(uVar39 >> 9) * 8);
          uVar24 = (ulonglong)uVar39 & 0x1ff;
          local_8b8 = *(double *)(lVar30 + uVar24 * 0x18);
          local_8c0 = *(longlong **)(lVar30 + 8 + uVar24 * 0x18);
          local_8c8 = *(undefined1 **)(lVar30 + 0x10 + uVar24 * 0x18);
          lVar30 = *(longlong *)(lVar37 + (ulonglong)(uVar21 >> 9) * 8);
          uVar24 = (ulonglong)uVar21 & 0x1ff;
          local_8b0 = *(longlong **)(lVar30 + uVar24 * 0x18);
          local_8a0 = *(double *)(lVar30 + 8 + uVar24 * 0x18);
          local_898 = *(double *)(lVar30 + 0x10 + uVar24 * 0x18);
          lVar37 = *(longlong *)(lVar37 + (ulonglong)(uVar28 >> 9) * 8);
          uVar24 = (ulonglong)uVar28 & 0x1ff;
          local_880 = *(double *)(lVar37 + uVar24 * 0x18);
          local_888 = *(double *)(lVar37 + 8 + uVar24 * 0x18);
          local_890 = *(double *)(lVar37 + 0x10 + uVar24 * 0x18);
          plVar46 = (longlong *)(local_8e0 + 0x88);
          if (*(int *)(local_8e0 + 0x94) < (int)((local_7b8 - 1) * (local_7b8 - 1))) {
            FUN_14830c88a(plVar46);
          }
          local_538 = (undefined **)0x0;
          uStack_530 = (double)CONCAT44(uStack_530._4_4_,4);
          FUN_144a06ca8(&local_538,4,0);
          *(uint *)local_538 = uVar19;
          *(uint *)((longlong)local_538 + 4) = uVar39;
          *(uint *)(local_538 + 1) = uVar21;
          *(uint *)((longlong)local_538 + 0xc) = uVar28;
          if ((undefined8 *)(lVar40 + 0x98) == &local_538) {
            if (local_538 != (undefined **)0x0) {
              FUN_1400020a8();
            }
          }
          else {
            if (*(longlong *)(lVar40 + 0x98) != 0) {
              FUN_1400020a8();
            }
            *(undefined ***)(lVar40 + 0x98) = local_538;
            local_538 = (undefined **)0x0;
            *(uint *)(lVar40 + 0xa0) = (uint)uStack_530;
            *(uint *)(lVar40 + 0xa4) = uStack_530._4_4_;
          }
          uVar24 = (ulonglong)local_7b8;
          lVar40 = local_8e8;
          if (2 < (int)local_7b8) {
            iVar33 = local_7b8 - 1;
            lVar37 = 1;
            lVar30 = 4;
            do {
              uVar19 = (int)uVar24 - 1;
              if ((int)uVar24 < 3) {
                uVar31 = (ulonglong)(int)uVar19;
                uVar45 = (ulonglong)uVar19;
              }
              else {
                dVar52 = (double)(int)lVar37 / (double)iVar33;
                dVar12 = 1.0 - dVar52;
                dVar44 = local_898 * dVar52;
                dVar13 = dVar12 * local_8a8;
                dVar48 = local_8a0 * dVar52;
                dVar14 = dVar12 * local_8d0;
                dVar51 = (double)local_8b0 * dVar52;
                dVar15 = dVar12 * (double)local_8d8;
                dVar50 = local_890 * dVar52;
                dVar16 = dVar12 * (double)local_8c8;
                dVar7 = local_888 * dVar52;
                dVar10 = dVar12 * (double)local_8c0;
                dVar8 = local_880 * dVar52;
                dVar12 = dVar12 * local_8b8;
                lVar35 = 1;
                uVar31 = (ulonglong)uVar19;
                do {
                  dVar11 = (double)(int)lVar35 / (double)(int)uVar31;
                  dVar9 = 1.0 - dVar11;
                  local_528 = (longlong *)(dVar9 * (dVar13 + dVar44) + (dVar16 + dVar50) * dVar11);
                  uStack_530 = dVar9 * (dVar14 + dVar48) + (dVar10 + dVar7) * dVar11;
                  local_538 = (undefined **)(dVar9 * (dVar15 + dVar51) + (dVar12 + dVar8) * dVar11);
                  local_518 = DAT_14c846338;
                  local_520 = DAT_14c846330;
                  iStack_50c = DAT_14c846338;
                  iStack_514 = (int)DAT_14c846330;
                  uStack_510 = (undefined4)((ulonglong)DAT_14c846330 >> 0x20);
                  local_508 = DAT_14c84635c;
                  uStack_500 = uStack_500 & 0xffffffffff000000;
                  uVar20 = FUN_146c02208((int)local_538,&local_538);
                  *(undefined4 *)
                   ((longlong)local_618 + lVar35 * 4 + CONCAT53(iStack_5fd,uStack_600) * lVar30) =
                       uVar20;
                  iVar33 = *(int *)(local_8e0 + 0x90);
                  *(uint *)(local_8e0 + 0x90) = iVar33 + 1U;
                  if (*(uint *)(local_8e0 + 0x94) < iVar33 + 1U) {
                    FUN_14830c8fc(plVar46,iVar33);
                  }
                  puVar1 = (undefined8 *)(*plVar46 + (longlong)iVar33 * 0x18);
                  *puVar1 = 0;
                  puVar1[1] = 0;
                  puVar1[2] = 0;
                  *(undefined4 *)puVar1 = uVar20;
                  *(undefined4 *)(puVar1 + 2) = 1;
                  FUN_1403e3958(puVar1 + 1,0);
                  pdVar23 = (double *)puVar1[1];
                  *pdVar23 = dVar11;
                  pdVar23[1] = dVar52;
                  pdVar23[2] = 0.0;
                  lVar35 = lVar35 + 1;
                  uVar24 = (ulonglong)(int)local_7b8;
                  uVar31 = uVar24 - 1;
                  lVar40 = local_8e8;
                  uVar45 = uVar31;
                } while (lVar35 < (longlong)uVar31);
              }
              lVar37 = lVar37 + 1;
              lVar30 = lVar30 + 4;
              iVar33 = (int)uVar45;
            } while (lVar37 < (longlong)uVar31);
          }
          iVar33 = *(int *)(lVar40 + 0x1b0);
          *(int *)(lVar40 + 0x1b0) = iVar33 + 1;
          *(int *)(local_8e0 + 0x60) = iVar33;
          if (1 < (int)uVar24) {
            local_8d8 = (longlong *)(local_8e0 + 0x68);
            lVar37 = 4;
            lVar30 = 0;
            dVar44 = 0.0;
            do {
              if ((int)uVar24 < 2) {
                lVar35 = (longlong)((int)uVar24 + -1);
              }
              else {
                lVar47 = 0;
                local_8d0 = dVar44;
                do {
                  lVar35 = lVar30 * CONCAT53(iStack_5fd,uStack_600);
                  uVar20 = *(undefined4 *)((longlong)local_618 + lVar47 * 4 + lVar35 + 4);
                  lVar43 = CONCAT53(iStack_5fd,uStack_600) * lVar37;
                  uVar4 = *(undefined4 *)((longlong)local_618 + lVar47 * 4 + lVar43);
                  uVar5 = *(undefined4 *)((longlong)local_618 + lVar47 * 4 + lVar43 + 4);
                  local_538 = (undefined **)
                              CONCAT44(*(undefined4 *)((longlong)local_618 + lVar47 * 4 + lVar35),
                                       uVar20);
                  uStack_530 = (double)CONCAT44(uStack_530._4_4_,uVar4);
                  uVar19 = FUN_146c01152(lVar40,&local_538,*(undefined4 *)(local_8e0 + 0x60));
                  if (((-1 < (int)uVar19) &&
                      ((int)uVar19 <
                       *(int *)(local_8e8 + 0x140) * 0x200 + *(int *)(local_8e8 + 0x144))) &&
                     ((ushort)(*(short *)(*(longlong *)
                                           (*(longlong *)(local_8e8 + 0x148) +
                                           (ulonglong)(uVar19 >> 9) * 8) +
                                         (ulonglong)(uVar19 & 0x1ff) * 2) - 1U) < 0xfffe)) {
                    iVar33 = *(int *)(local_8e0 + 0x70);
                    *(uint *)(local_8e0 + 0x70) = iVar33 + 1U;
                    if (*(uint *)(local_8e0 + 0x74) < iVar33 + 1U) {
                      FUN_1446f48e2(local_8d8,iVar33);
                    }
                    *(uint *)(*local_8d8 + (longlong)iVar33 * 4) = uVar19;
                  }
                  local_538 = (undefined **)CONCAT44(uVar5,uVar4);
                  uStack_530 = (double)CONCAT44(uStack_530._4_4_,uVar20);
                  uVar19 = FUN_146c01152(local_8e8,&local_538,*(undefined4 *)(local_8e0 + 0x60));
                  if (((-1 < (int)uVar19) &&
                      ((int)uVar19 <
                       *(int *)(local_8e8 + 0x140) * 0x200 + *(int *)(local_8e8 + 0x144))) &&
                     ((ushort)(*(short *)(*(longlong *)
                                           (*(longlong *)(local_8e8 + 0x148) +
                                           (ulonglong)(uVar19 >> 9) * 8) +
                                         (ulonglong)(uVar19 & 0x1ff) * 2) - 1U) < 0xfffe)) {
                    iVar33 = *(int *)(local_8e0 + 0x70);
                    *(uint *)(local_8e0 + 0x70) = iVar33 + 1U;
                    if (*(uint *)(local_8e0 + 0x74) < iVar33 + 1U) {
                      FUN_1446f48e2(local_8d8,iVar33);
                    }
                    *(uint *)(*local_8d8 + (longlong)iVar33 * 4) = uVar19;
                  }
                  lVar47 = lVar47 + 1;
                  uVar24 = (ulonglong)(int)local_7b8;
                  lVar35 = uVar24 - 1;
                  lVar40 = local_8e8;
                  dVar44 = local_8d0;
                } while (lVar47 < lVar35);
              }
              dVar44 = (double)((longlong)dVar44 + 1);
              lVar37 = lVar37 + 4;
              lVar30 = lVar30 + 4;
            } while ((longlong)dVar44 < lVar35);
          }
          if (local_618 != (undefined **)0x0) {
            FUN_1400020a8();
          }
        }
      }
      FUN_141082778(&local_318);
      goto LAB_1482ef05a;
    }
  }
  local_318 = (longlong *)0x0;
  uStack_310 = 0;
  FUN_146bd1a1a(&local_7d8,&local_318,1);
  iVar33 = *(int *)(local_8e8 + 0x1b0);
  *(int *)(local_8e8 + 0x1b0) = iVar33 + 1;
  *(int *)(param_3 + 0x60) = iVar33;
  if ((longlong)(int)uStack_310 != 0) {
    plVar46 = (longlong *)((longlong)local_318 + (longlong)(int)uStack_310 * 0xc);
    plVar54 = local_318;
    do {
      local_538 = (undefined **)
                  CONCAT44(*(undefined4 *)
                            (local_7f8 + (longlong)*(int *)((longlong)plVar54 + 4) * 4),
                           *(undefined4 *)(local_7f8 + (longlong)(int)*plVar54 * 4));
      uStack_530 = (double)CONCAT44(uStack_530._4_4_,
                                    *(undefined4 *)(local_7f8 + (longlong)(int)plVar54[1] * 4));
      uVar19 = FUN_146c01152(local_8e8,&local_538,*(undefined4 *)(param_3 + 0x60));
      if (((-1 < (int)uVar19) &&
          ((int)uVar19 < *(int *)(local_8e8 + 0x140) * 0x200 + *(int *)(local_8e8 + 0x144))) &&
         ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)(local_8e8 + 0x148) + (ulonglong)(uVar19 >> 9) * 8) +
                             (ulonglong)(uVar19 & 0x1ff) * 2) - 1U) < 0xfffe)) {
        iVar33 = *(int *)(param_3 + 0x70);
        *(uint *)(param_3 + 0x70) = iVar33 + 1U;
        if (*(uint *)(param_3 + 0x74) < iVar33 + 1U) {
          FUN_1446f48e2((longlong *)(param_3 + 0x68),iVar33);
        }
        *(uint *)(*(longlong *)(param_3 + 0x68) + (longlong)iVar33 * 4) = uVar19;
      }
      plVar54 = (longlong *)((longlong)plVar54 + 0xc);
    } while (plVar54 != plVar46);
  }
  if (local_318 != (longlong *)0x0) {
    FUN_1400020a8(local_318);
  }
LAB_1482ef05a:
  if (local_808 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_7f8 != 0) {
    FUN_1400020a8();
  }
  if (local_7e8 != 0) {
    FUN_1400020a8();
  }
  if (local_7d8 != (double *)0x0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_918) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while( true ) {
    lVar35 = lVar35 + 1;
    lVar30 = lVar30 + -4;
    if (lVar30 == 0) break;
LAB_1482f06b2:
    if (local_858[lVar35] == 0) goto LAB_1482f06c8;
  }
  lVar35 = 0xffffffff;
LAB_1482f06c8:
  iVar42 = (int)lVar35;
  lVar30 = 0;
  lVar47 = 0;
  lVar35 = 0;
LAB_1482f06e4:
  if (local_858[lVar47] != 1) goto code_r0x0001482f06ef;
  if ((iVar42 == -1) || ((-lVar30 & 0x3fffffffcU) == 0x3fffffffc)) goto LAB_1482efc21;
  if (local_858[(int)(local_7b8 + iVar42 + -1) % iVar33] == local_858[lVar35 >> 0x20])
  goto LAB_1482f152a;
  if ((int)(uint)uStack_850 < 2) goto LAB_1482f15fe;
  lVar30 = 0;
  piVar36 = local_858;
  do {
    iVar42 = *piVar36;
    *piVar36 = local_858[lVar37 + lVar30 + -1];
    local_858[lVar37 + lVar30 + -1] = iVar42;
    lVar30 = lVar30 + -1;
    piVar36 = piVar36 + 1;
  } while (-lVar30 != (ulonglong)((uint)uStack_850 >> 1));
  if ((uint)uStack_850 == 0) {
    iVar42 = -1;
LAB_1482f1636:
    lVar47 = -1;
  }
  else {
LAB_1482f15fe:
    iVar42 = 0;
    piVar36 = local_858;
    do {
      if (*piVar36 == 0) goto LAB_1482f161b;
      piVar36 = piVar36 + 1;
      iVar42 = iVar42 + 1;
    } while (piVar36 != local_858 + (int)(uint)uStack_850);
    iVar42 = -1;
LAB_1482f161b:
    lVar47 = 0;
    piVar36 = local_858;
    while (*piVar36 != 1) {
      piVar36 = piVar36 + 1;
      lVar47 = lVar47 + 1;
      if (piVar36 == local_858 + (int)(uint)uStack_850) goto LAB_1482f1636;
    }
  }
LAB_1482f152a:
  if ((local_858[(int)(local_7b8 + iVar42 + -1) % iVar33] == local_858[(int)lVar47]) && (0 < iVar33)
     ) {
    uVar31 = 0;
    do {
      *(undefined4 *)
       ((longlong)local_838 + (longlong)local_858[(iVar42 + (int)uVar31) % iVar33] * 4) =
           *(undefined4 *)(local_7f8 + uVar31 * 4);
      uVar31 = uVar31 + 1;
    } while (uVar24 != uVar31);
  }
  goto LAB_1482efc21;
code_r0x0001482f06ef:
  lVar35 = lVar35 + 0x100000000;
  lVar47 = lVar47 + 1;
  lVar30 = lVar30 + -4;
  if (-lVar30 == lVar37 * 4) goto LAB_1482efc21;
  goto LAB_1482f06e4;
}



// FUNCTION 1482f1656 FUN_1482f1656 body=134 status=ok
// SIG undefined FUN_1482f1656(void)

void FUN_1482f1656(longlong param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    plVar1 = (longlong *)(param_1 + 0x60);
    if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
      plVar1 = *(longlong **)(param_1 + 0x50);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_146c7d72c(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  FUN_146be9485(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1482f16dc FUN_1482f16dc body=122 status=ok
// SIG undefined FUN_1482f16dc(void)

void FUN_1482f16dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ae72d40;
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_144a6bfa8(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_1482fe8dc(param_1 + 6);
  if (param_1[4] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1482f1756 FUN_1482f1756 body=605 status=ok
// SIG undefined FUN_1482f1756(void)

void FUN_1482f1756(longlong param_1,longlong param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 auStack_a8 [44];
  uint local_7c;
  longlong *local_78;
  int local_70 [2];
  int *local_68;
  undefined8 uStack_60;
  ulonglong local_54;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar9 = param_3[0x1e];
  if ((-1 < (int)uVar9) &&
     ((int)uVar9 < *(int *)(param_2 + 0x1d0) * 0x200 + *(int *)(param_2 + 0x1d4))) {
    if ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(param_2 + 0x1d8) + (ulonglong)(uVar9 >> 9) * 8) +
                           (ulonglong)(uVar9 & 0x1ff) * 2) - 1U) < 0xfffe) {
      uVar10 = *(ulonglong *)
                (*(longlong *)(*(longlong *)(param_2 + 0x1c0) + (ulonglong)(uVar9 >> 9) * 8) +
                (ulonglong)((uVar9 & 0x1ff) << 4));
      uVar8 = 0xffffffff;
      if (*param_3 == (int)(uVar10 >> 0x20)) {
        uVar8 = uVar10 & 0xffffffff;
      }
      if (*param_3 == (int)uVar10) {
        uVar8 = uVar10 >> 0x20;
      }
      lVar6 = *(longlong *)(param_1 + 0xc0) + (longlong)**(int **)(param_3 + 0xc) * 0x100 + 0xb8;
      uVar2 = FUN_14838b1bc(lVar6,*(undefined4 *)(*(longlong *)(param_3 + 0x14) + 0x20));
      local_68 = (int *)0x0;
      uStack_60 = 0;
      FUN_14838b116(lVar6,uVar2,&local_68);
      FUN_146c061e0(param_2,*local_68,local_68[1]);
      FUN_146c13626(param_2,local_70);
      if (local_70[0] != *local_68) {
        lVar6 = (longlong)(int)(uint)uStack_60;
        if (1 < lVar6) {
          lVar7 = 0;
          piVar4 = local_68;
          do {
            iVar5 = *piVar4;
            *piVar4 = local_68[lVar6 + lVar7 + -1];
            local_68[lVar6 + lVar7 + -1] = iVar5;
            lVar7 = lVar7 + -1;
            piVar4 = piVar4 + 1;
          } while (-lVar7 != (ulonglong)((uint)uStack_60 >> 1));
        }
      }
      iVar5 = param_3[0x18];
      if (iVar5 < 0) {
        iVar5 = *(int *)(param_2 + 0x1b0);
        *(int *)(param_2 + 0x1b0) = iVar5 + 1;
      }
      if (1 < (int)(uint)uStack_60) {
        uVar9 = (uint)uStack_60 - 1;
        local_78 = (longlong *)(param_3 + 0x1a);
        uVar10 = 0;
        local_7c = (uint)uVar8;
        do {
          local_54 = *(ulonglong *)(local_68 + uVar10) << 0x20 |
                     *(ulonglong *)(local_68 + uVar10) >> 0x20;
          local_4c = (undefined4)uVar8;
          uVar3 = FUN_146c01152(param_2,&local_54,iVar5);
          if (((-1 < (int)uVar3) &&
              ((int)uVar3 < *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144))) &&
             ((ushort)(*(short *)(*(longlong *)
                                   (*(longlong *)(param_2 + 0x148) + (ulonglong)(uVar3 >> 9) * 8) +
                                 (ulonglong)(uVar3 & 0x1ff) * 2) - 1U) < 0xfffe)) {
            iVar1 = param_3[0x1c];
            param_3[0x1c] = iVar1 + 1U;
            if ((uint)param_3[0x1d] < iVar1 + 1U) {
              FUN_1446f48e2(local_78,iVar1);
            }
            *(uint *)(*local_78 + (longlong)iVar1 * 4) = uVar3;
            uVar8 = (ulonglong)local_7c;
          }
          uVar10 = uVar10 + 1;
        } while (uVar9 != uVar10);
      }
      if (local_68 != (int *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482f19b4 FUN_1482f19b4 body=598 status=ok
// SIG undefined FUN_1482f19b4(void)

void FUN_1482f19b4(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  longlong local_98;
  ulonglong local_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_60;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = param_3;
  local_60 = param_1;
  FUN_143b00aa0(&local_60,param_2,param_3,&local_78);
  FUN_143b00aa0(&local_60,param_2,param_4,&local_88);
  if (((int)uStack_70 != 0) && ((int)uStack_70 == (int)uStack_80)) {
    uVar5 = *(uint *)(local_98 + 0x60);
    if ((int)uVar5 < 0) {
      uVar5 = *(uint *)(param_2 + 0x1b0);
      *(uint *)(param_2 + 0x1b0) = uVar5 + 1;
    }
    uVar6 = (ulonglong)uVar5;
    if (1 < (int)uStack_70) {
      uVar7 = (ulonglong)((int)uStack_70 - 1);
      local_a0 = (longlong *)(local_98 + 0x68);
      lVar8 = 1;
      local_90 = uVar6;
      do {
        local_50 = *(undefined4 *)(local_78 + -4 + lVar8 * 4);
        uVar1 = *(undefined4 *)(local_78 + lVar8 * 4);
        uVar2 = *(undefined4 *)(local_88 + -4 + uVar7 * 4);
        uVar3 = *(undefined4 *)(local_88 + uVar7 * 4);
        local_54 = uVar1;
        local_4c = uVar3;
        uVar5 = FUN_146c01152(param_2,&local_54,uVar6 & 0xffffffff);
        if (((-1 < (int)uVar5) &&
            ((int)uVar5 < *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144))) &&
           ((ushort)(*(short *)(*(longlong *)
                                 (*(longlong *)(param_2 + 0x148) + (ulonglong)(uVar5 >> 9) * 8) +
                               (ulonglong)(uVar5 & 0x1ff) * 2) - 1U) < 0xfffe)) {
          iVar4 = *(int *)(local_98 + 0x70);
          *(uint *)(local_98 + 0x70) = iVar4 + 1U;
          if (*(uint *)(local_98 + 0x74) < iVar4 + 1U) {
            FUN_1446f48e2(local_a0,iVar4);
          }
          *(uint *)(*local_a0 + (longlong)iVar4 * 4) = uVar5;
          uVar6 = local_90;
        }
        local_54 = uVar3;
        local_50 = uVar2;
        local_4c = uVar1;
        uVar5 = FUN_146c01152(param_2,&local_54,uVar6 & 0xffffffff);
        if (((-1 < (int)uVar5) &&
            ((int)uVar5 < *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144))) &&
           ((ushort)(*(short *)(*(longlong *)
                                 (*(longlong *)(param_2 + 0x148) + (ulonglong)(uVar5 >> 9) * 8) +
                               (ulonglong)(uVar5 & 0x1ff) * 2) - 1U) < 0xfffe)) {
          iVar4 = *(int *)(local_98 + 0x70);
          *(uint *)(local_98 + 0x70) = iVar4 + 1U;
          if (*(uint *)(local_98 + 0x74) < iVar4 + 1U) {
            FUN_1446f48e2(local_a0,iVar4);
          }
          *(uint *)(*local_a0 + (longlong)iVar4 * 4) = uVar5;
          uVar6 = local_90;
        }
        lVar8 = lVar8 + 1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482f1c0c FUN_1482f1c0c body=12228 status=ok
// SIG undefined FUN_1482f1c0c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1482f1c0c(longlong param_1,uint *param_2)

{
  double *pdVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  bool bVar19;
  uint *puVar20;
  char cVar21;
  uint uVar22;
  longlong *plVar23;
  longlong *plVar24;
  longlong *plVar25;
  ulonglong uVar26;
  int iVar27;
  undefined4 uVar28;
  ulonglong uVar29;
  longlong lVar30;
  undefined1 *puVar31;
  uint *puVar32;
  uint uVar33;
  longlong lVar34;
  double dVar35;
  uint *puVar36;
  int iVar37;
  longlong lVar38;
  int *piVar39;
  int *piVar40;
  ulonglong uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  uint uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  double dVar57;
  double dVar58;
  undefined8 uVar59;
  double dVar60;
  double dVar61;
  double dVar62;
  double dVar63;
  undefined4 uVar64;
  undefined4 uVar65;
  uint uVar66;
  undefined4 uVar67;
  undefined4 uVar68;
  undefined4 uVar69;
  undefined4 uVar70;
  undefined4 uVar71;
  undefined4 uVar72;
  undefined4 uVar73;
  undefined4 uVar74;
  undefined4 uVar75;
  undefined1 auStack_458 [32];
  undefined8 *local_438;
  double *local_430;
  longlong local_420;
  uint *local_418;
  longlong local_410;
  uint *local_408;
  double local_400;
  double local_3f8;
  double local_3f0;
  double local_3e8;
  double local_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined1 local_3c8 [16];
  double local_3b8;
  double local_3b0;
  double local_3a8;
  double local_3a0;
  double local_398;
  double local_390;
  undefined1 local_388 [16];
  double local_378;
  double local_370;
  double local_368;
  double local_360;
  double local_358;
  double local_350;
  undefined1 local_348 [16];
  double local_338;
  double local_330;
  double local_328;
  double local_320;
  double local_318;
  double local_310;
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [16];
  code *local_2a8;
  undefined8 *local_2a0;
  double *local_298;
  double dStack_290;
  double local_288;
  undefined8 local_278;
  undefined8 uStack_270;
  double local_268;
  double local_260;
  double dStack_258;
  double local_250;
  double local_248;
  undefined8 local_238;
  double dStack_230;
  double local_228;
  uint *local_218;
  undefined8 uStack_210;
  undefined8 *local_200;
  longlong local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  undefined8 local_188;
  undefined8 uStack_180;
  double local_178;
  undefined8 local_168;
  undefined8 uStack_160;
  double local_158;
  undefined8 local_148;
  undefined8 uStack_140;
  double local_138;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_11c;
  int local_114;
  undefined1 local_110 [8];
  undefined1 *local_108;
  int local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_458;
  local_418 = param_2;
  local_410 = param_1;
  if ((longlong)*(int *)(param_1 + 0xd8) != 0) {
    lVar34 = *(longlong *)(param_1 + 0xd0);
    local_420 = (longlong)*(int *)(param_1 + 0xd8) * 0xe8 + lVar34;
    do {
      iVar27 = *(int *)(lVar34 + 0xa0);
      if (1 < iVar27) {
        uVar41 = 0;
        do {
          local_238 = (uint *)0x0;
          dStack_230 = 0.0;
          FUN_14838b116(lVar34 + 0xa0,uVar41 & 0xffffffff,&local_238);
          uVar33 = dStack_230._0_4_ - 1;
          lVar30 = *(longlong *)(*(longlong *)(param_2 + 4) + (ulonglong)(*local_238 >> 9) * 8);
          uVar29 = (ulonglong)*local_238 & 0x1ff;
          local_138 = *(double *)(lVar30 + 0x10 + uVar29 * 0x18);
          pdVar1 = (double *)(lVar30 + uVar29 * 0x18);
          local_148 = *pdVar1;
          uStack_140 = pdVar1[1];
          lVar30 = *(longlong *)
                    (*(longlong *)(param_2 + 4) + (ulonglong)(local_238[(int)uVar33] >> 9) * 8);
          uVar29 = (ulonglong)local_238[(int)uVar33] & 0x1ff;
          local_268 = *(double *)(lVar30 + 0x10 + uVar29 * 0x18);
          pdVar1 = (double *)(lVar30 + uVar29 * 0x18);
          local_278 = *pdVar1;
          uStack_270 = pdVar1[1];
          lVar38 = uVar41 * 0x18;
          local_158 = *(double *)(*(longlong *)(lVar34 + 200) + 0x10 + lVar38);
          pdVar1 = (double *)(*(longlong *)(lVar34 + 200) + lVar38);
          dVar53 = *pdVar1;
          dVar63 = pdVar1[1];
          local_178 = *(double *)(*(longlong *)(lVar34 + 0xd8) + 0x10 + lVar38);
          pdVar1 = (double *)(*(longlong *)(lVar34 + 0xd8) + lVar38);
          dVar54 = *pdVar1;
          uStack_180 = pdVar1[1];
          lVar30 = *(longlong *)(lVar34 + 0x30);
          dVar35 = *(double *)(lVar30 + 8 + lVar38);
          dVar52 = *(double *)(lVar30 + 0x10 + lVar38);
          dVar60 = local_138 - dVar52;
          dVar51 = uStack_140 - dVar35;
          dVar11 = local_148 - *(double *)(lVar30 + lVar38);
          dVar61 = SQRT(dVar60 * dVar60 + dVar11 * dVar11 + dVar51 * dVar51);
          dVar56 = 1.0 / dVar61;
          if (0.0 < dVar61) {
            dVar60 = dVar60 * dVar56;
            dVar51 = dVar51 * dVar56;
          }
          else {
            dVar51 = 0.0;
            dVar60 = 0.0;
          }
          dVar52 = local_268 - dVar52;
          dVar35 = uStack_270 - dVar35;
          dVar18 = local_278 - *(double *)(lVar30 + lVar38);
          dVar15 = SQRT(dVar52 * dVar52 + dVar18 * dVar18 + dVar35 * dVar35);
          dVar17 = 1.0 / dVar15;
          if (0.0 < dVar15) {
            dVar52 = dVar52 * dVar17;
            dVar35 = dVar35 * dVar17;
          }
          else {
            dVar35 = 0.0;
            dVar52 = 0.0;
          }
          dVar56 = (double)(-(ulonglong)(0.0 < dVar61) & (ulonglong)(dVar11 * dVar56));
          dVar61 = (double)(-(ulonglong)(0.0 < dVar15) & (ulonglong)(dVar18 * dVar17));
          dVar11 = dVar56 * dVar35 - dVar61 * dVar51;
          dVar56 = dVar60 * dVar61 - dVar52 * dVar56;
          dVar52 = dVar51 * dVar52 - dVar35 * dVar60;
          dVar35 = SQRT(dVar11 * dVar11 + dVar52 * dVar52 + dVar56 * dVar56);
          dVar61 = 1.0 / dVar35;
          if (0.0 < dVar35) {
            dVar11 = dVar11 * dVar61;
            dVar56 = dVar56 * dVar61;
          }
          else {
            dVar56 = 0.0;
            dVar11 = 0.0;
          }
          dVar61 = (double)(-(ulonglong)(0.0 < dVar35) & (ulonglong)(dVar52 * dVar61));
          dVar35 = local_158 * dVar11 + dVar53 * dVar61 + dVar63 * dVar56;
          local_158 = local_158 - dVar11 * dVar35;
          dVar63 = dVar63 - dVar56 * dVar35;
          dVar53 = dVar53 - dVar35 * dVar61;
          dVar35 = SQRT(local_158 * local_158 + dVar53 * dVar53 + dVar63 * dVar63);
          dVar52 = 1.0 / dVar35;
          if (0.0 < dVar35) {
            local_158 = local_158 * dVar52;
            uStack_160 = (undefined8 *)(dVar63 * dVar52);
          }
          else {
            uStack_160 = (undefined8 *)0x0;
            local_158 = 0.0;
          }
          local_168 = (undefined8 *)(-(ulonglong)(0.0 < dVar35) & (ulonglong)(dVar53 * dVar52));
          dVar35 = local_178 * dVar11 + dVar54 * dVar61 + uStack_180 * dVar56;
          local_178 = local_178 - dVar11 * dVar35;
          uStack_180 = uStack_180 - dVar56 * dVar35;
          dVar54 = dVar54 - dVar35 * dVar61;
          dVar35 = SQRT(local_178 * local_178 + dVar54 * dVar54 + uStack_180 * uStack_180);
          dVar52 = 1.0 / dVar35;
          if (0.0 < dVar35) {
            local_178 = local_178 * dVar52;
            uStack_180 = uStack_180 * dVar52;
          }
          else {
            uStack_180 = 0.0;
            local_178 = 0.0;
          }
          local_188 = (double)(-(ulonglong)(0.0 < dVar35) & (ulonglong)(dVar54 * dVar52));
          local_430 = (double *)&local_188;
          local_438 = &local_278;
          FUN_1482f4bd2(local_410,&local_1a8,&local_148,&local_168);
          if (1 < (int)uVar33) {
            uVar29 = 1;
            do {
              uVar66 = local_238[uVar29];
              dVar35 = (double)(int)uVar29 / (double)(int)uVar33;
              dVar52 = 1.0 - dVar35;
              local_1d8 = local_138 * dVar52 + local_268 * dVar35;
              dStack_1e0 = uStack_140 * dVar52 + uStack_270 * dVar35;
              local_1e8 = dVar52 * local_148 + dVar35 * local_278;
              FUN_140703ce0(&local_1a8,&local_1c8,(float)dVar35,&local_1e8);
              cVar21 = FUN_146bfed03(&local_1c8);
              if (cVar21 != '\0') {
                uVar26 = (ulonglong)(uVar66 & 0x1ff);
                lVar30 = *(longlong *)(*(longlong *)(local_418 + 4) + (ulonglong)(uVar66 >> 9) * 8);
                *(double *)(lVar30 + 0x10 + uVar26 * 0x18) = local_1b8;
                puVar2 = (undefined4 *)(lVar30 + uVar26 * 0x18);
                *puVar2 = (undefined4)local_1c8;
                puVar2[1] = local_1c8._4_4_;
                puVar2[2] = (undefined4)uStack_1c0;
                puVar2[3] = uStack_1c0._4_4_;
                if ((char)local_418[0x84] == '\x01') {
                  LOCK();
                  local_418[0x85] = local_418[0x85] + 1;
                  UNLOCK();
                }
              }
              uVar29 = uVar29 + 1;
            } while (uVar33 != uVar29);
          }
          if (local_1a8 != 0.0) {
            FUN_1400020a8();
          }
          param_2 = local_418;
          if (local_238 != (uint *)0x0) {
            FUN_1400020a8();
          }
          uVar41 = uVar41 + 1;
        } while (uVar41 != iVar27 - 1);
      }
      lVar34 = lVar34 + 0xe8;
    } while (lVar34 != local_420);
  }
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_138 = DAT_14c8464f0;
  local_148 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  uStack_140 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  FUN_1447a8a24(&local_1f8,&local_148,param_2[8] * 0x200 + param_2[9]);
  local_128 = 0;
  local_120 = 0;
  local_148 = 0.0;
  uStack_140 = 0.0;
  local_11c = 0xffffffff00000080;
  local_114 = 0;
  local_108 = (undefined1 *)0x0;
  local_100 = 0;
  local_200 = &local_148;
  if ((longlong)*(int *)(local_410 + 200) != 0) {
    dVar35 = *(double *)(local_410 + 0xc0);
    local_388._0_8_ = (longlong)*(int *)(local_410 + 200) * 0x100 + (longlong)dVar35;
    do {
      dVar52 = (double)(longlong)*(int *)((longlong)dVar35 + 0xb8);
      if (0 < (longlong)dVar52) {
        local_390 = (double)((longlong)dVar35 + 0xb8);
        local_3e0 = (double)CONCAT44(local_3e0._4_4_,*(int *)((longlong)dVar35 + 0xb8) + -1);
        uVar41 = 0;
        iVar27 = 0;
        local_3f0 = dVar52;
        do {
          local_420 = CONCAT44(local_420._4_4_,iVar27);
          local_218 = (uint *)0x0;
          uStack_210 = 0;
          FUN_14838b116(local_390);
          local_3d8 = (double)(longlong)(int)uStack_210;
          if ((uint)local_420 == 0) {
            if ((int)uStack_210 != 0) {
              lVar34 = 0;
              do {
                if (*(int *)((longlong)local_218 + lVar34) == **(int **)((longlong)dVar35 + 8))
                goto LAB_1482f2436;
                lVar34 = lVar34 + 4;
              } while ((longlong)local_3d8 * 4 - lVar34 != 0);
            }
            uVar41 = CONCAT71((int7)(uVar41 >> 8),1);
          }
LAB_1482f2436:
          uVar33 = *local_218;
          iVar27 = (int)uStack_210 + -1;
          local_3f8 = (double)CONCAT44(local_3f8._4_4_,iVar27);
          lVar30 = (longlong)iVar27;
          uVar66 = local_218[lVar30];
          lVar34 = *(longlong *)(*(longlong *)(param_2 + 4) + (ulonglong)(uVar33 >> 9) * 8);
          local_400 = *(double *)(lVar34 + 0x10 + ((ulonglong)uVar33 & 0x1ff) * 0x18);
          pdVar1 = (double *)(lVar34 + ((ulonglong)uVar33 & 0x1ff) * 0x18);
          local_188 = *pdVar1;
          local_3e8 = pdVar1[1];
          lVar34 = *(longlong *)(*(longlong *)(param_2 + 4) + (ulonglong)(uVar66 >> 9) * 8);
          local_398 = *(double *)(lVar34 + 0x10 + ((ulonglong)uVar66 & 0x1ff) * 0x18);
          pdVar1 = (double *)(lVar34 + ((ulonglong)uVar66 & 0x1ff) * 0x18);
          local_1a8 = *pdVar1;
          uStack_1a0 = pdVar1[1];
          uVar4 = ~(uint)local_420 + SUB84(dVar52,0);
          if ((uVar41 & 1) == 0) {
            uVar4 = (uint)local_420;
          }
          lVar38 = (longlong)(int)uVar4;
          lVar34 = lVar38 * 0x18;
          local_1b8 = *(double *)(*(longlong *)((longlong)dVar35 + 0xe0) + 0x10 + lVar34);
          pdVar1 = (double *)(*(longlong *)((longlong)dVar35 + 0xe0) + lVar34);
          local_1c8 = *pdVar1;
          uStack_1c0 = pdVar1[1];
          local_1d8 = *(double *)(*(longlong *)((longlong)dVar35 + 0xf0) + 0x10 + lVar34);
          pdVar1 = (double *)(*(longlong *)((longlong)dVar35 + 0xf0) + lVar34);
          local_1e8 = *pdVar1;
          dStack_1e0 = pdVar1[1];
          bVar10 = true;
          if (uVar4 == local_3e0._0_4_ || uVar4 == 0) {
            lVar34 = (longlong)*(int *)((longlong)dVar35 + 0x58 + (ulonglong)(uVar4 != 0) * 4) *
                     0xa8;
            if (*(int *)(*(longlong *)(local_410 + 0xb0) + 8 + lVar34) == 0) {
              bVar10 = *(int *)(*(longlong *)(local_410 + 0xb0) + lVar34 + 0x38) < 3;
            }
          }
          lVar34 = *(longlong *)((longlong)dVar35 + 0x48);
          dVar56 = *(double *)(lVar34 + lVar38 * 0x18);
          dVar11 = *(double *)(lVar34 + 8 + lVar38 * 0x18);
          dVar63 = *(double *)(lVar34 + 0x10 + lVar38 * 0x18);
          dVar54 = local_400 - dVar63;
          dVar60 = local_3e8 - dVar11;
          local_3c8._0_8_ = local_188;
          dVar53 = local_188 - dVar56;
          dVar51 = SQRT(dVar54 * dVar54 + dVar53 * dVar53 + dVar60 * dVar60);
          dVar61 = 1.0 / dVar51;
          if (0.0 < dVar51) {
            dVar54 = dVar54 * dVar61;
            dVar60 = dVar60 * dVar61;
          }
          else {
            dVar60 = 0.0;
            dVar54 = 0.0;
          }
          dVar55 = local_398 - dVar63;
          dVar18 = uStack_1a0 - dVar11;
          dVar17 = local_1a8 - dVar56;
          dVar15 = SQRT(dVar55 * dVar55 + dVar17 * dVar17 + dVar18 * dVar18);
          dVar62 = 1.0 / dVar15;
          if (0.0 < dVar15) {
            dVar55 = dVar55 * dVar62;
            dVar18 = dVar18 * dVar62;
          }
          else {
            dVar18 = 0.0;
            dVar55 = 0.0;
          }
          dVar61 = (double)(-(ulonglong)(0.0 < dVar51) & (ulonglong)(dVar53 * dVar61));
          dVar51 = (double)(-(ulonglong)(0.0 < dVar15) & (ulonglong)(dVar17 * dVar62));
          dVar53 = dVar61 * dVar18 - dVar51 * dVar60;
          dVar61 = dVar54 * dVar51 - dVar55 * dVar61;
          dVar54 = dVar60 * dVar55 - dVar18 * dVar54;
          dVar51 = SQRT(dVar53 * dVar53 + dVar54 * dVar54 + dVar61 * dVar61);
          dVar60 = 1.0 / dVar51;
          if (0.0 < dVar51) {
            dVar53 = dVar53 * dVar60;
            dVar61 = dVar61 * dVar60;
          }
          else {
            dVar61 = 0.0;
            dVar53 = 0.0;
          }
          dVar54 = (double)(-(ulonglong)(0.0 < dVar51) & (ulonglong)(dVar54 * dVar60));
          local_408 = (uint *)CONCAT44(local_408._4_4_,(int)uVar41);
          local_198 = local_398;
          uStack_180 = local_3e8;
          local_178 = local_400;
          if (!bVar10) {
            if (uVar4 == 0) {
              dVar63 = *(double *)(lVar34 + 0x28) - dVar63;
              dVar11 = *(double *)(lVar34 + 0x20) - dVar11;
              dVar56 = *(double *)(lVar34 + 0x18) - dVar56;
            }
            else {
              dVar63 = dVar63 - *(double *)(lVar34 + -0x20 + (longlong)dVar52 * 0x18);
              dVar11 = dVar11 - *(double *)(lVar34 + -0x28 + (longlong)dVar52 * 0x18);
              dVar56 = dVar56 - *(double *)(lVar34 + -0x30 + (longlong)dVar52 * 0x18);
            }
            dVar51 = dVar63 * dVar63 + dVar56 * dVar56 + dVar11 * dVar11;
            if (9.99999993922529e-09 < dVar51) {
              local_228 = 1.0 / SQRT(dVar51);
              local_238 = (uint *)(dVar56 * local_228);
              dStack_230 = dVar11 * local_228;
              local_228 = dVar63 * local_228;
              local_288 = local_398 - local_400;
              dStack_290 = uStack_1a0 - local_3e8;
              dVar63 = local_1a8 - local_188;
              dVar56 = SQRT(local_288 * local_288 + dVar63 * dVar63 + dStack_290 * dStack_290);
              dVar11 = 1.0 / dVar56;
              if (0.0 < dVar56) {
                local_288 = local_288 * dVar11;
                dStack_290 = dStack_290 * dVar11;
              }
              else {
                dStack_290 = 0.0;
                local_288 = 0.0;
              }
              local_298 = (double *)(-(ulonglong)(0.0 < dVar56) & (ulonglong)(dVar63 * dVar11));
              local_260 = 0.0;
              dStack_258 = 0.0;
              local_250 = 0.0;
              local_248 = 1.0;
              local_158 = (double)DAT_14c8463c8;
              local_168 = (undefined8 *)CONCAT44(DAT_14c8463b8._4_4_,(undefined4)DAT_14c8463b8);
              uStack_160 = (undefined8 *)CONCAT44(DAT_14c8463c0._4_4_,(undefined4)DAT_14c8463c0);
              local_278 = local_188;
              uStack_270 = local_3e8;
              local_268 = local_400;
              FUN_146bfb7f2(&local_260,&local_168,&local_298);
              local_168 = (undefined8 *)
                          (local_260 * (local_250 + local_250) +
                          local_248 * (dStack_258 + dStack_258));
              uStack_160 = (undefined8 *)
                           ((local_250 + local_250) * dStack_258 -
                           (local_260 + local_260) * local_248);
              local_158 = 1.0 - ((dStack_258 + dStack_258) * dStack_258 +
                                local_260 * (local_260 + local_260));
              FUN_1482ae2be(&local_278,1,&local_238,&local_168);
              dVar56 = local_250 + local_250;
              dVar54 = (dStack_258 + dStack_258) * local_260 - local_248 * dVar56;
              dVar53 = dStack_258 * dVar56 + (local_260 + local_260) * local_248;
              dVar61 = 1.0 - (dVar56 * local_250 + local_260 * (local_260 + local_260));
            }
          }
          dVar56 = local_1b8 * dVar53 + local_1c8 * dVar54 + dVar61 * uStack_1c0;
          local_1b8 = local_1b8 - dVar53 * dVar56;
          uStack_1c0 = uStack_1c0 - dVar61 * dVar56;
          local_1c8 = local_1c8 - dVar56 * dVar54;
          dVar56 = SQRT(local_1b8 * local_1b8 + local_1c8 * local_1c8 + uStack_1c0 * uStack_1c0);
          dVar11 = 1.0 / dVar56;
          if (0.0 < dVar56) {
            local_1b8 = local_1b8 * dVar11;
            uStack_1c0 = uStack_1c0 * dVar11;
          }
          else {
            uStack_1c0 = 0.0;
            local_1b8 = 0.0;
          }
          local_1c8 = (double)(-(ulonglong)(0.0 < dVar56) & (ulonglong)(local_1c8 * dVar11));
          dVar56 = local_1d8 * dVar53 + local_1e8 * dVar54 + dVar61 * dStack_1e0;
          local_1d8 = local_1d8 - dVar53 * dVar56;
          dStack_1e0 = dStack_1e0 - dVar61 * dVar56;
          local_1e8 = local_1e8 - dVar56 * dVar54;
          dVar56 = SQRT(local_1d8 * local_1d8 + local_1e8 * local_1e8 + dStack_1e0 * dStack_1e0);
          dVar11 = 1.0 / dVar56;
          if (0.0 < dVar56) {
            local_1d8 = local_1d8 * dVar11;
            dStack_1e0 = dStack_1e0 * dVar11;
          }
          else {
            dStack_1e0 = 0.0;
            local_1d8 = 0.0;
          }
          lVar34 = (longlong)(int)uVar33;
          lVar38 = (longlong)(int)uVar66;
          local_1e8 = (double)(-(ulonglong)(0.0 < dVar56) & (ulonglong)(local_1e8 * dVar11));
          local_430 = &local_1e8;
          local_438 = &local_1a8;
          FUN_1482f4bd2(local_410,&local_278,&local_188,&local_1c8);
          *(double *)(local_1f8 + lVar34 * 0x18) =
               local_1c8 + *(double *)(local_1f8 + lVar34 * 0x18);
          *(double *)(local_1f8 + 8 + lVar34 * 0x18) =
               uStack_1c0 + *(double *)(local_1f8 + 8 + lVar34 * 0x18);
          *(double *)(local_1f8 + 0x10 + lVar34 * 0x18) =
               local_1b8 + *(double *)(local_1f8 + 0x10 + lVar34 * 0x18);
          *(double *)(local_1f8 + lVar38 * 0x18) =
               local_1e8 + *(double *)(local_1f8 + lVar38 * 0x18);
          *(double *)(local_1f8 + 8 + lVar38 * 0x18) =
               dStack_1e0 + *(double *)(local_1f8 + 8 + lVar38 * 0x18);
          *(double *)(local_1f8 + 0x10 + lVar38 * 0x18) =
               local_1d8 + *(double *)(local_1f8 + 0x10 + lVar38 * 0x18);
          local_238 = (uint *)CONCAT44(uVar66,uVar33);
          local_168 = &local_238;
          uStack_160 = &local_278;
          FUN_14830c9e2(&local_148,&local_298,&local_168);
          local_298 = (double *)0x0;
          dStack_290 = 0.0;
          FUN_14051b394(&local_298,local_3d8,1);
          local_298[2] = local_178;
          *local_298 = local_188;
          local_298[1] = uStack_180;
          local_298[lVar30 * 3 + 2] = local_198;
          pdVar1 = local_298 + lVar30 * 3;
          *(undefined4 *)pdVar1 = (undefined4)local_1a8;
          *(undefined4 *)((longlong)pdVar1 + 4) = local_1a8._4_4_;
          *(undefined4 *)(pdVar1 + 1) = (undefined4)uStack_1a0;
          *(undefined4 *)((longlong)pdVar1 + 0xc) = uStack_1a0._4_4_;
          if (1 < iVar27) {
            dVar52 = (double)local_3f8._0_4_;
            lVar34 = 1;
            lVar38 = 6;
            do {
              uVar33 = local_218[lVar34];
              dVar56 = (double)(int)lVar34 / dVar52;
              dVar11 = 1.0 - dVar56;
              local_228 = local_178 * dVar11 + local_198 * dVar56;
              dStack_230 = uStack_180 * dVar11 + uStack_1a0 * dVar56;
              local_238 = (uint *)(dVar11 * local_188 + dVar56 * local_1a8);
              FUN_140703ce0(&local_278,&local_168,(float)dVar56,&local_238);
              cVar21 = FUN_146bfed03(&local_168);
              puVar32 = local_418;
              if (cVar21 != '\0') {
                uVar41 = (ulonglong)(uVar33 & 0x1ff);
                lVar6 = *(longlong *)(*(longlong *)(local_418 + 4) + (ulonglong)(uVar33 >> 9) * 8);
                *(double *)(lVar6 + 0x10 + uVar41 * 0x18) = local_158;
                pdVar1 = (double *)(lVar6 + uVar41 * 0x18);
                *pdVar1 = (double)local_168;
                pdVar1[1] = (double)uStack_160;
                if ((char)local_418[0x84] == '\x01') {
                  LOCK();
                  local_418[0x85] = local_418[0x85] + 1;
                  UNLOCK();
                }
              }
              *(double *)((longlong)local_298 + lVar38 * 4 + 0x10) = local_158;
              puVar2 = (undefined4 *)((longlong)local_298 + lVar38 * 4);
              *puVar2 = (undefined4)local_168;
              puVar2[1] = local_168._4_4_;
              puVar2[2] = (undefined4)uStack_160;
              puVar2[3] = uStack_160._4_4_;
              lVar34 = lVar34 + 1;
              lVar38 = lVar38 + 6;
            } while (lVar30 != lVar34);
            lVar34 = 1;
            do {
              lVar38 = (longlong)(int)local_218[lVar34];
              local_238 = puVar32;
              local_2a8 = FUN_143b05b84;
              local_430 = (double *)CONCAT71(local_430._1_7_,1);
              local_438 = (undefined8 *)CONCAT71(local_438._1_7_,1);
              local_2a0 = &local_238;
              dStack_230 = dVar35;
              FUN_146c39520(&local_168,puVar32,local_218[lVar34],&local_2a8);
              *(double *)(local_1f8 + lVar38 * 0x18) =
                   (double)local_168 + *(double *)(local_1f8 + lVar38 * 0x18);
              *(double *)(local_1f8 + 8 + lVar38 * 0x18) =
                   (double)uStack_160 + *(double *)(local_1f8 + 8 + lVar38 * 0x18);
              *(double *)(local_1f8 + 0x10 + lVar38 * 0x18) =
                   local_158 + *(double *)(local_1f8 + 0x10 + lVar38 * 0x18);
              lVar34 = lVar34 + 1;
              dVar52 = local_3f0;
            } while (lVar30 != lVar34);
          }
          param_2 = local_418;
          uVar41 = (ulonglong)local_408 & 0xffffffff;
          if (local_298 != (double *)0x0) {
            FUN_1400020a8();
          }
          if (local_278 != 0.0) {
            FUN_1400020a8();
          }
          if (local_218 != (uint *)0x0) {
            FUN_1400020a8();
          }
          iVar27 = (uint)local_420 + 1;
        } while (iVar27 != SUB84(dVar52,0));
      }
      dVar35 = (double)((longlong)dVar35 + 0x100);
    } while (dVar35 != (double)local_388._0_8_);
  }
  if ((longlong)(int)uStack_1f0 != 0) {
    lVar34 = 0;
    do {
      dVar35 = *(double *)(local_1f8 + lVar34);
      dVar52 = *(double *)(local_1f8 + 8 + lVar34);
      dVar56 = *(double *)(local_1f8 + 0x10 + lVar34);
      dVar11 = dVar56 * dVar56 + dVar35 * dVar35 + dVar52 * dVar52;
      if (9.99999993922529e-09 < dVar11) {
        dVar11 = 1.0 / SQRT(dVar11);
        *(double *)(local_1f8 + lVar34) = dVar35 * dVar11;
        *(double *)(local_1f8 + 8 + lVar34) = dVar52 * dVar11;
        *(double *)(local_1f8 + 0x10 + lVar34) = dVar56 * dVar11;
      }
      lVar34 = lVar34 + 0x18;
    } while ((longlong)(int)uStack_1f0 * 0x18 != lVar34);
  }
  if ((longlong)*(int *)(local_410 + 0xb8) != 0) {
    dVar35 = *(double *)(local_410 + 0xb0);
    local_398 = (double)((longlong)*(int *)(local_410 + 0xb8) * 0xa8 + (longlong)dVar35);
    uVar33 = 0;
    uVar66 = 0x80000000;
    uVar75 = 0;
    uVar43 = 0x80000000;
    do {
      if ((longlong)*(int *)((longlong)dVar35 + 0x90) != 0) {
        uVar4 = *(uint *)((longlong)dVar35 + 0xa0);
        puVar36 = *(uint **)((longlong)dVar35 + 0x88);
        puVar32 = puVar36 + (longlong)*(int *)((longlong)dVar35 + 0x90) * 6;
        lVar34 = -(ulonglong)uVar4;
        local_420 = lVar34;
        local_408 = puVar32;
        local_390 = dVar35;
LAB_1482f320f:
        lVar30 = local_410;
        puVar20 = local_418;
        if (puVar36[4] == 1) {
          if (*(int *)((longlong)dVar35 + 0xa0) == 4) {
            dVar52 = **(double **)(puVar36 + 2);
            dVar56 = (*(double **)(puVar36 + 2))[1];
            piVar39 = *(int **)((longlong)dVar35 + 0x98);
            iVar27 = *piVar39;
            local_3d8 = (double)CONCAT44(local_3d8._4_4_,piVar39[1]);
            iVar5 = piVar39[2];
            local_3f8 = (double)CONCAT44(local_3f8._4_4_,piVar39[3]);
            local_278._0_4_ = iVar27;
            local_278._4_4_ = iVar5;
            uVar22 = FUN_1448eb174(&local_278,8,0);
            if ((int)uStack_140 != local_114) {
              puVar31 = local_108;
              if (local_108 == (undefined1 *)0x0) {
                puVar31 = local_110;
              }
              iVar37 = *(int *)(puVar31 + (ulonglong)(local_100 - 1U & uVar22) * 4);
              while (iVar37 != -1) {
                piVar39 = (int *)((longlong)local_148 + (longlong)iVar37 * 0x28);
                if ((*piVar39 == (int)local_278) &&
                   (*(int *)((longlong)local_148 + 4 + (longlong)iVar37 * 0x28) == local_278._4_4_))
                {
                  if (piVar39 != (int *)0x0) {
                    piVar39 = piVar39 + 2;
                    uVar28 = 0;
                    goto LAB_1482f3843;
                  }
                  break;
                }
                iVar37 = piVar39[8];
              }
            }
            local_278 = (double)CONCAT44(iVar27,iVar5);
            uVar22 = FUN_1448eb174(&local_278,8,0);
            puVar32 = local_408;
            lVar34 = local_420;
            if ((int)uStack_140 != local_114) {
              puVar31 = local_108;
              if (local_108 == (undefined1 *)0x0) {
                puVar31 = local_110;
              }
              iVar37 = *(int *)(puVar31 + (ulonglong)(local_100 - 1U & uVar22) * 4);
              if (iVar37 != -1) {
                do {
                  piVar40 = (int *)((longlong)local_148 + (longlong)iVar37 * 0x28);
                  if ((*piVar40 == (int)local_278) &&
                     (*(int *)((longlong)local_148 + 4 + (longlong)iVar37 * 0x28) == local_278._4_4_
                     )) {
                    piVar39 = piVar40 + 2;
                    uVar28 = (undefined4)CONCAT71((int7)((ulonglong)local_148 >> 8),1);
                    if (piVar39 != (int *)0x0 && piVar40 != (int *)0x0) goto LAB_1482f3843;
                    break;
                  }
                  iVar37 = piVar40[8];
                } while (iVar37 != -1);
              }
            }
          }
          else {
            if (*(int *)((longlong)dVar35 + 0xa0) != 3) goto LAB_1482f3386;
            pdVar1 = *(double **)(puVar36 + 2);
            local_3e0 = *pdVar1;
            local_3f8 = pdVar1[1];
            local_3d8 = pdVar1[2];
            puVar32 = *(uint **)((longlong)dVar35 + 0x98);
            uVar33 = *puVar32;
            uVar66 = puVar32[1];
            lVar34 = *(longlong *)(param_2 + 4);
            lVar30 = *(longlong *)(lVar34 + (ulonglong)(uVar33 >> 9) * 8);
            uVar41 = (ulonglong)uVar33 & 0x1ff;
            dVar35 = *(double *)(lVar30 + uVar41 * 0x18);
            dVar52 = *(double *)(lVar30 + 8 + uVar41 * 0x18);
            dVar56 = *(double *)(lVar30 + 0x10 + uVar41 * 0x18);
            lVar30 = *(longlong *)(lVar34 + (ulonglong)(uVar66 >> 9) * 8);
            uVar41 = (ulonglong)uVar66 & 0x1ff;
            dVar11 = *(double *)(lVar30 + uVar41 * 0x18);
            dVar63 = *(double *)(lVar30 + 8 + uVar41 * 0x18);
            dVar61 = *(double *)(lVar30 + 0x10 + uVar41 * 0x18);
            uVar22 = puVar32[2];
            lVar34 = *(longlong *)(lVar34 + (ulonglong)(uVar22 >> 9) * 8);
            uVar41 = (ulonglong)uVar22 & 0x1ff;
            dVar53 = *(double *)(lVar34 + uVar41 * 0x18);
            dVar54 = *(double *)(lVar34 + 8 + uVar41 * 0x18);
            dVar51 = *(double *)(lVar34 + 0x10 + uVar41 * 0x18);
            local_168 = (undefined8 *)((ulonglong)local_168 & 0xffffffffffffff00);
            local_188 = (double)((ulonglong)local_188 & 0xffffffffffffff00);
            local_1a8 = (double)((ulonglong)local_1a8 & 0xffffffffffffff00);
            plVar23 = (longlong *)FUN_143b00b7a(&local_200,uVar33,uVar66,&local_168);
            plVar24 = (longlong *)FUN_143b00b7a(&local_200,(ulonglong)uVar66,uVar22,&local_188);
            plVar25 = (longlong *)
                      FUN_143b00b7a(&local_200,(ulonglong)uVar22,(ulonglong)uVar33,&local_1a8);
            puVar32 = local_418;
            if (plVar25 != (longlong *)0x0 &&
                (plVar24 != (longlong *)0x0 && plVar23 != (longlong *)0x0)) {
              lVar34 = *plVar23;
              if ((char)local_168 == '\x01') {
                local_3e8 = *(double *)(lVar34 + 0xa0) * -0.3333333333333333;
                local_3f0 = *(double *)(lVar34 + 0x98) * -0.3333333333333333;
                local_400 = *(double *)(lVar34 + 0x90) * -0.3333333333333333;
                uVar43 = (undefined4)*(undefined8 *)(lVar34 + 0x38);
                uVar33 = (uint)((ulonglong)*(undefined8 *)(lVar34 + 0x38) >> 0x20);
                uVar28 = (undefined4)*(undefined8 *)(lVar34 + 0x40);
                uVar66 = (uint)((ulonglong)*(undefined8 *)(lVar34 + 0x40) >> 0x20);
                uVar42 = (undefined4)*(undefined8 *)(lVar34 + 0x48);
                uVar22 = (uint)((ulonglong)*(undefined8 *)(lVar34 + 0x48) >> 0x20);
                uVar75 = 0;
              }
              else {
                local_3e8 = *(double *)(lVar34 + 0x48) * 0.3333333333333333;
                local_3f0 = *(double *)(lVar34 + 0x40) * 0.3333333333333333;
                local_400 = *(double *)(lVar34 + 0x38) * 0.3333333333333333;
                uVar43 = *(undefined4 *)(lVar34 + 0x90);
                uVar28 = *(undefined4 *)(lVar34 + 0x98);
                uVar42 = *(undefined4 *)(lVar34 + 0xa0);
                uVar75 = 0x80000000;
                uVar22 = *(uint *)(lVar34 + 0xa4) ^ 0x80000000;
                uVar66 = *(uint *)(lVar34 + 0x9c) ^ 0x80000000;
                uVar33 = *(uint *)(lVar34 + 0x94) ^ 0x80000000;
              }
              lVar34 = *plVar24;
              if ((char)local_188 == '\x01') {
                local_338 = *(double *)(lVar34 + 0xa0) * -0.3333333333333333;
                local_358 = *(double *)(lVar34 + 0x98) * -0.3333333333333333;
                local_350 = *(double *)(lVar34 + 0x90) * -0.3333333333333333;
                uVar44 = (undefined4)*(undefined8 *)(lVar34 + 0x38);
                uVar46 = (uint)((ulonglong)*(undefined8 *)(lVar34 + 0x38) >> 0x20);
                uVar48 = 0;
                local_3c8._8_8_ = 0;
                local_3c8._0_8_ = *(ulonglong *)(lVar34 + 0x40);
                local_388._8_8_ = 0;
                local_388._0_8_ = *(ulonglong *)(lVar34 + 0x48);
              }
              else {
                local_338 = *(double *)(lVar34 + 0x48) * 0.3333333333333333;
                local_358 = *(double *)(lVar34 + 0x40) * 0.3333333333333333;
                local_350 = *(double *)(lVar34 + 0x38) * 0.3333333333333333;
                uVar44 = *(undefined4 *)(lVar34 + 0x90);
                uVar48 = 0x80000000;
                local_388._0_8_ = *(ulonglong *)(lVar34 + 0xa0) ^ 0x8000000000000000;
                local_388._8_4_ = 0;
                local_388._12_4_ = 0x80000000;
                local_3c8._0_8_ = *(ulonglong *)(lVar34 + 0x98) ^ 0x8000000000000000;
                local_3c8._8_4_ = 0;
                local_3c8._12_4_ = 0x80000000;
                uVar46 = *(uint *)(lVar34 + 0x94) ^ 0x80000000;
              }
              local_400 = local_400 + dVar35;
              local_3f0 = local_3f0 + dVar52;
              local_3e8 = local_3e8 + dVar56;
              dVar17 = (double)CONCAT44(uVar33,uVar43) * 0.3333333333333333 + dVar11;
              local_348._8_4_ = 0;
              local_348._0_8_ = dVar17;
              local_348._12_4_ = uVar75;
              dVar55 = (double)CONCAT44(uVar66,uVar28) * 0.3333333333333333 + dVar63;
              dVar62 = (double)CONCAT44(uVar22,uVar42) * 0.3333333333333333 + dVar61;
              local_350 = local_350 + dVar11;
              local_358 = local_358 + dVar63;
              local_338 = local_338 + dVar61;
              uVar28 = local_388._12_4_;
              uVar43 = local_3c8._12_4_;
              dVar15 = (double)CONCAT44(uVar46,uVar44) * 0.3333333333333333 + dVar53;
              dVar60 = local_3c8._0_8_ * 0.3333333333333333 + dVar54;
              local_3c8._8_4_ = local_3c8._8_4_;
              local_3c8._0_8_ = dVar60;
              local_3c8._12_4_ = uVar43;
              dVar18 = local_388._0_8_ * 0.3333333333333333 + dVar51;
              lVar34 = *plVar25;
              local_308._8_4_ = 0;
              local_308._0_8_ = dVar15;
              local_308._12_4_ = uVar48;
              if ((char)local_1a8 == '\x01') {
                local_320 = *(double *)(lVar34 + 0xa0) * -0.3333333333333333;
                local_330 = *(double *)(lVar34 + 0x98) * -0.3333333333333333;
                local_3b8 = *(double *)(lVar34 + 0x90) * -0.3333333333333333;
                dVar58 = *(double *)(lVar34 + 0x38);
                uVar59 = 0;
                uVar43 = (undefined4)*(undefined8 *)(lVar34 + 0x40);
                uVar42 = (undefined4)((ulonglong)*(undefined8 *)(lVar34 + 0x40) >> 0x20);
                uVar48 = (undefined4)*(undefined8 *)(lVar34 + 0x48);
                uVar44 = (undefined4)((ulonglong)*(undefined8 *)(lVar34 + 0x48) >> 0x20);
                uVar67 = 0;
                uVar68 = 0;
              }
              else {
                local_320 = *(double *)(lVar34 + 0x48) * 0.3333333333333333;
                local_330 = *(double *)(lVar34 + 0x40) * 0.3333333333333333;
                local_3b8 = *(double *)(lVar34 + 0x38) * 0.3333333333333333;
                uVar41 = DAT_149931e80;
                uVar59 = DAT_149931e80._8_8_;
                uVar29 = *(ulonglong *)(lVar34 + 0xa0) ^ uVar41;
                uVar48 = (undefined4)uVar29;
                uVar44 = (undefined4)(uVar29 >> 0x20);
                uVar67 = DAT_149931e80._8_4_;
                uVar68 = DAT_149931e80._12_4_;
                uVar29 = *(ulonglong *)(lVar34 + 0x98) ^ uVar41;
                uVar43 = (undefined4)uVar29;
                uVar42 = (undefined4)(uVar29 >> 0x20);
                dVar58 = (double)(*(ulonglong *)(lVar34 + 0x90) ^ uVar41);
              }
              local_320 = local_320 + dVar51;
              dVar16 = (double)CONCAT44(uVar44,uVar48) * 0.3333333333333333 + dVar56;
              local_2d8._8_4_ = uVar67;
              local_2d8._0_8_ = dVar16;
              local_2d8._12_4_ = uVar68;
              local_388._8_4_ = local_388._8_4_;
              local_388._0_8_ = dVar18;
              local_388._12_4_ = uVar28;
              local_3a8 = (local_3e8 + dVar62 + local_338 + dVar18 + local_320 + dVar16) *
                          0.16666666666666666;
              local_2f8._8_4_ = 0;
              local_2f8._0_8_ = dVar62;
              local_2f8._12_4_ = uVar75;
              local_330 = local_330 + dVar54;
              dVar12 = (double)CONCAT44(uVar42,uVar43) * 0.3333333333333333 + dVar52;
              local_2b8._8_4_ = uVar67;
              local_2b8._0_8_ = dVar12;
              local_2b8._12_4_ = uVar68;
              local_2e8._8_4_ = 0;
              local_2e8._0_8_ = dVar55;
              local_2e8._12_4_ = uVar75;
              local_328 = (local_3f0 + dVar55 + local_358 + dVar60 + local_330 + dVar12) *
                          0.16666666666666666;
              local_3b8 = local_3b8 + dVar53;
              dVar13 = dVar58 * 0.3333333333333333 + dVar35;
              local_2c8._8_4_ = (int)uVar59;
              local_2c8._0_8_ = dVar13;
              local_2c8._12_4_ = (int)((ulonglong)uVar59 >> 0x20);
              dVar57 = (local_400 + dVar17 + local_350 + dVar15 + local_3b8 + dVar13) *
                       0.16666666666666666;
              dVar58 = *(double *)(local_410 + 0x10);
              local_3a8 = (local_3a8 - (dVar56 + dVar61 + dVar51) * 0.3333333333333333) * dVar58 *
                          0.5 + local_3a8;
              local_328 = (local_328 - (dVar52 + dVar63 + dVar54) * 0.3333333333333333) * dVar58 *
                          0.5 + local_328;
              local_268 = local_3a8 * 6.0 * local_3e0 * local_3f8 * local_3d8 +
                          dVar18 * 3.0 * local_3f8 * local_3d8 * local_3d8 +
                          local_320 * 3.0 * local_3e0 * local_3d8 * local_3d8 +
                          local_338 * 3.0 * local_3f8 * local_3f8 * local_3d8 +
                          dVar16 * 3.0 * local_3e0 * local_3e0 * local_3d8 +
                          dVar62 * 3.0 * local_3e0 * local_3f8 * local_3f8 +
                          local_3e8 * 3.0 * local_3e0 * local_3e0 * local_3f8 +
                          dVar51 * local_3d8 * local_3d8 * local_3d8 +
                          dVar61 * local_3f8 * local_3f8 * local_3f8 +
                          dVar56 * local_3e0 * local_3e0 * local_3e0;
              uStack_270 = local_328 * 6.0 * local_3e0 * local_3f8 * local_3d8 +
                           dVar60 * 3.0 * local_3f8 * local_3d8 * local_3d8 +
                           local_330 * 3.0 * local_3e0 * local_3d8 * local_3d8 +
                           local_358 * 3.0 * local_3f8 * local_3f8 * local_3d8 +
                           dVar12 * 3.0 * local_3e0 * local_3e0 * local_3d8 +
                           dVar55 * 3.0 * local_3e0 * local_3f8 * local_3f8 +
                           local_3f0 * 3.0 * local_3e0 * local_3e0 * local_3f8 +
                           dVar54 * local_3d8 * local_3d8 * local_3d8 +
                           dVar63 * local_3f8 * local_3f8 * local_3f8 +
                           dVar52 * local_3e0 * local_3e0 * local_3e0;
              local_278 = ((dVar57 - (dVar35 + dVar11 + dVar53) * 0.3333333333333333) * dVar58 * 0.5
                          + dVar57) * 6.0 * local_3e0 * local_3f8 * local_3d8 +
                          dVar15 * 3.0 * local_3f8 * local_3d8 * local_3d8 +
                          local_3b8 * 3.0 * local_3e0 * local_3d8 * local_3d8 +
                          local_350 * 3.0 * local_3f8 * local_3f8 * local_3d8 +
                          dVar13 * 3.0 * local_3e0 * local_3e0 * local_3d8 +
                          dVar17 * 3.0 * local_3e0 * local_3f8 * local_3f8 +
                          local_400 * 3.0 * local_3e0 * local_3e0 * local_3f8 +
                          dVar53 * local_3d8 * local_3d8 * local_3d8 +
                          dVar11 * local_3f8 * local_3f8 * local_3f8 +
                          dVar35 * local_3e0 * local_3e0 * local_3e0;
              uVar33 = *puVar36;
              local_3b0 = dVar52;
              local_3a0 = dVar51;
              local_378 = dVar35;
              local_370 = dVar63;
              local_368 = dVar54;
              local_360 = dVar53;
              local_318 = dVar11;
              local_310 = dVar56;
              cVar21 = FUN_146bfed03(&local_278);
              if (cVar21 != '\0') {
                lVar34 = *(longlong *)(*(longlong *)(puVar32 + 4) + (ulonglong)(uVar33 >> 9) * 8);
                uVar41 = (ulonglong)(uVar33 & 0x1ff);
                *(double *)(lVar34 + 0x10 + uVar41 * 0x18) = local_268;
                puVar2 = (undefined4 *)(lVar34 + uVar41 * 0x18);
                *puVar2 = (int)local_278;
                puVar2[1] = local_278._4_4_;
                puVar2[2] = (undefined4)uStack_270;
                puVar2[3] = uStack_270._4_4_;
                if ((char)puVar32[0x84] == '\x01') {
                  LOCK();
                  puVar32[0x85] = puVar32[0x85] + 1;
                  UNLOCK();
                }
              }
            }
            uVar33 = 0;
            uVar66 = 0x80000000;
            uVar75 = 0;
            uVar43 = 0x80000000;
            puVar32 = local_408;
            lVar34 = local_420;
            dVar35 = local_390;
          }
        }
        else {
LAB_1482f3386:
          if (puVar36[4] == uVar4) {
            local_158 = DAT_14c8464f0;
            local_168 = (undefined8 *)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
            uStack_160 = (undefined8 *)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
            if ((int)uVar4 < 1) {
              dVar52 = 0.0;
            }
            else {
              lVar38 = 0x10;
              uVar41 = 1;
              dVar52 = 0.0;
              do {
                lVar6 = *(longlong *)((longlong)dVar35 + 0x98);
                lVar7 = *(longlong *)(puVar20 + 4);
                uVar29 = 0;
                if (uVar4 != uVar41) {
                  uVar29 = uVar41;
                }
                uVar22 = *(uint *)(lVar6 + uVar29 * 4);
                lVar8 = *(longlong *)(lVar7 + (ulonglong)(uVar22 >> 9) * 8);
                uVar29 = (ulonglong)uVar22 & 0x1ff;
                uVar22 = *(uint *)(lVar6 + (longlong)((int)(uVar4 + (int)uVar41 + -2) % (int)uVar4)
                                           * 4);
                lVar9 = *(longlong *)(lVar7 + (ulonglong)(uVar22 >> 9) * 8);
                uVar26 = (ulonglong)uVar22 & 0x1ff;
                dVar53 = *(double *)(lVar8 + 0x10 + uVar29 * 0x18) -
                         *(double *)(lVar9 + 0x10 + uVar26 * 0x18);
                dVar61 = *(double *)(lVar8 + 8 + uVar29 * 0x18) -
                         *(double *)(lVar9 + 8 + uVar26 * 0x18);
                dVar56 = *(double *)(lVar8 + uVar29 * 0x18) - *(double *)(lVar9 + uVar26 * 0x18);
                dVar11 = SQRT(dVar53 * dVar53 + dVar56 * dVar56 + dVar61 * dVar61);
                dVar63 = 1.0 / dVar11;
                if (0.0 < dVar11) {
                  dVar53 = dVar53 * dVar63;
                  dVar61 = dVar61 * dVar63;
                }
                else {
                  dVar53 = 0.0;
                  dVar61 = 0.0;
                }
                uVar22 = *(uint *)(lVar6 + -4 + uVar41 * 4);
                uVar29 = (ulonglong)(int)uVar22;
                lVar6 = *(longlong *)(lVar7 + (ulonglong)(uVar22 >> 9) * 8);
                uVar26 = uVar29 & 0x1ff;
                dVar54 = *(double *)(lVar6 + uVar26 * 0x18);
                dVar51 = *(double *)(lVar6 + 8 + uVar26 * 0x18);
                dVar60 = *(double *)(lVar6 + 0x10 + uVar26 * 0x18);
                dVar56 = (double)(-(ulonglong)(0.0 < dVar11) & (ulonglong)(dVar56 * dVar63));
                local_178 = *(double *)(local_1f8 + 0x10 + uVar29 * 0x18);
                pdVar1 = (double *)(local_1f8 + uVar29 * 0x18);
                local_188 = *pdVar1;
                uStack_180 = pdVar1[1];
                if (*(double *)(lVar30 + 0x10) <= 0.0 && *(double *)(lVar30 + 0x10) != 0.0) {
                  local_260 = 0.9238795325112867;
                  local_278 = dVar56 * -0.3826834323650898;
                  uStack_270 = dVar61 * -0.3826834323650898;
                  local_268 = dVar53 * -0.3826834323650898;
                  FUN_146bed047(&local_1a8,&local_278);
                  local_178 = local_198;
                  local_188 = local_1a8;
                  uStack_180 = uStack_1a0;
                  lVar34 = local_420;
                }
                lVar6 = *(longlong *)(puVar36 + 2);
                dVar11 = *(double *)(lVar6 + -0x10 + lVar38);
                dVar63 = *(double *)(lVar6 + -8 + lVar38);
                dVar15 = *(double *)(lVar6 + lVar38);
                local_168 = (undefined8 *)
                            (((uStack_180 * dVar53 - local_178 * dVar61) * dVar63 +
                             dVar54 + dVar56 * dVar11) * dVar15 + (double)local_168);
                uStack_160 = (undefined8 *)
                             (((local_178 * dVar56 - dVar53 * local_188) * dVar63 +
                              dVar51 + dVar61 * dVar11) * dVar15 + (double)uStack_160);
                local_158 = ((local_188 * dVar61 - dVar56 * uStack_180) * dVar63 +
                            dVar60 + dVar53 * dVar11) * dVar15 + local_158;
                dVar52 = dVar52 + dVar15;
                lVar38 = lVar38 + 0x18;
                lVar6 = lVar34 + uVar41;
                uVar41 = uVar41 + 1;
              } while (lVar6 != 0);
            }
            dVar52 = 1.0 / dVar52;
            local_168 = (undefined8 *)((double)local_168 * dVar52);
            uStack_160 = (undefined8 *)((double)uStack_160 * dVar52);
            local_158 = dVar52 * local_158;
            uVar22 = *puVar36;
            cVar21 = FUN_146bfed03(&local_168);
            puVar32 = local_408;
            lVar34 = local_420;
            if (cVar21 != '\0') {
              lVar30 = *(longlong *)(*(longlong *)(puVar20 + 4) + (ulonglong)(uVar22 >> 9) * 8);
              uVar41 = (ulonglong)(uVar22 & 0x1ff);
              *(double *)(lVar30 + 0x10 + uVar41 * 0x18) = local_158;
              puVar2 = (undefined4 *)(lVar30 + uVar41 * 0x18);
              *puVar2 = (undefined4)local_168;
              puVar2[1] = local_168._4_4_;
              puVar2[2] = (undefined4)uStack_160;
              puVar2[3] = uStack_160._4_4_;
              if ((char)puVar20[0x84] == '\x01') {
                LOCK();
                puVar20[0x85] = puVar20[0x85] + 1;
                UNLOCK();
              }
            }
          }
        }
        goto LAB_1482f338e;
      }
LAB_1482f4280:
      dVar35 = (double)((longlong)dVar35 + 0xa8);
    } while (dVar35 != local_398);
  }
  local_100 = 0;
  if (local_108 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1482fe994(&local_148);
  if (local_1f8 != 0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_458) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1482f3843:
  local_3e0 = (double)CONCAT44(local_3e0._4_4_,uVar28);
  local_278 = (double)CONCAT44(local_3f8._0_4_,SUB84(local_3d8,0));
  uVar22 = FUN_1448eb174(&local_278,8,0);
  if ((int)uStack_140 != local_114) {
    puVar31 = local_108;
    if (local_108 == (undefined1 *)0x0) {
      puVar31 = local_110;
    }
    iVar37 = *(int *)(puVar31 + (ulonglong)(local_100 - 1U & uVar22) * 4);
    if (iVar37 != -1) {
      do {
        piVar40 = (int *)((longlong)local_148 + (longlong)iVar37 * 0x28);
        if ((*piVar40 == (int)local_278) &&
           (*(int *)((longlong)local_148 + 4 + (longlong)iVar37 * 0x28) == local_278._4_4_)) {
          if (piVar40 != (int *)0x0) {
            piVar40 = piVar40 + 2;
            uVar28 = 0;
            cVar21 = SUB81(local_3e0,0);
            goto LAB_1482f44e7;
          }
          break;
        }
        iVar37 = piVar40[8];
      } while (iVar37 != -1);
    }
  }
  local_278 = (double)CONCAT44((int)local_3d8,SUB84(local_3f8,0));
  uVar22 = FUN_1448eb174(&local_278,8,0);
  puVar32 = local_408;
  lVar34 = local_420;
  if ((int)uStack_140 != local_114) {
    puVar31 = local_108;
    if (local_108 == (undefined1 *)0x0) {
      puVar31 = local_110;
    }
    iVar37 = *(int *)(puVar31 + (ulonglong)(local_100 - 1U & uVar22) * 4);
    if (iVar37 != -1) {
      do {
        piVar3 = (int *)((longlong)local_148 + (longlong)iVar37 * 0x28);
        if ((*piVar3 == (int)local_278) &&
           (*(int *)((longlong)local_148 + 4 + (longlong)iVar37 * 0x28) == local_278._4_4_)) {
          piVar40 = piVar3 + 2;
          uVar28 = (undefined4)CONCAT71((uint7)(uint3)((ulonglong)local_278 >> 8),1);
          cVar21 = SUB81(local_3e0,0);
          if (piVar40 != (int *)0x0 && piVar3 != (int *)0x0) goto LAB_1482f44e7;
          break;
        }
        iVar37 = piVar3[8];
      } while (iVar37 != -1);
    }
  }
  goto LAB_1482f338e;
LAB_1482f44e7:
  local_3c8._0_4_ = uVar28;
  dVar11 = 1.0 - dVar56;
  dVar63 = dVar11;
  if (cVar21 == '\0') {
    dVar63 = dVar56;
  }
  local_158 = DAT_14c8464f0;
  local_168 = (undefined8 *)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  uStack_160 = (undefined8 *)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  FUN_140703ce0(piVar39,&local_278,(float)dVar63,&local_168);
  dVar63 = dVar11;
  if (local_3c8[0] == '\0') {
    dVar63 = dVar56;
  }
  local_178 = DAT_14c8464f0;
  local_188 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  uStack_180 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  FUN_140703ce0(piVar40,&local_168,(float)dVar63,&local_188);
  local_188._4_4_ = (int)local_3d8;
  local_188._0_4_ = iVar27;
  uVar22 = FUN_1448eb174(&local_188,8,0);
  if ((int)uStack_140 != local_114) {
    puVar31 = local_108;
    if (local_108 == (undefined1 *)0x0) {
      puVar31 = local_110;
    }
    iVar37 = *(int *)(puVar31 + (ulonglong)(local_100 - 1U & uVar22) * 4);
    while (iVar37 != -1) {
      piVar39 = (int *)((longlong)local_148 + (longlong)iVar37 * 0x28);
      if ((*piVar39 == (int)local_188) &&
         (*(int *)((longlong)local_148 + 4 + (longlong)iVar37 * 0x28) == local_188._4_4_)) {
        if (piVar39 != (int *)0x0) {
          plVar23 = (longlong *)(piVar39 + 2);
          bVar10 = false;
          goto LAB_1482f46df;
        }
        break;
      }
      iVar37 = piVar39[8];
    }
  }
  local_188 = (double)CONCAT44(iVar27,SUB84(local_3d8,0));
  uVar22 = FUN_1448eb174(&local_188,8,0);
  puVar32 = local_408;
  lVar34 = local_420;
  if ((int)uStack_140 != local_114) {
    puVar31 = local_108;
    if (local_108 == (undefined1 *)0x0) {
      puVar31 = local_110;
    }
    iVar27 = *(int *)(puVar31 + (ulonglong)(local_100 - 1U & uVar22) * 4);
    if (iVar27 != -1) {
      do {
        piVar39 = (int *)((longlong)local_148 + (longlong)iVar27 * 0x28);
        if ((*piVar39 == (int)local_188) &&
           (*(int *)((longlong)local_148 + 4 + (longlong)iVar27 * 0x28) == local_188._4_4_)) {
          plVar23 = (longlong *)(piVar39 + 2);
          bVar10 = true;
          if (plVar23 != (longlong *)0x0 && piVar39 != (int *)0x0) goto LAB_1482f46df;
          break;
        }
        iVar27 = piVar39[8];
      } while (iVar27 != -1);
    }
  }
  goto LAB_1482f338e;
LAB_1482f46df:
  local_188._4_4_ = local_3f8._0_4_;
  local_188._0_4_ = iVar5;
  uVar22 = FUN_1448eb174(&local_188,8,0);
  if ((int)uStack_140 != local_114) {
    puVar31 = local_108;
    if (local_108 == (undefined1 *)0x0) {
      puVar31 = local_110;
    }
    iVar27 = *(int *)(puVar31 + (ulonglong)(local_100 - 1U & uVar22) * 4);
    while (iVar27 != -1) {
      piVar39 = (int *)((longlong)local_148 + (longlong)iVar27 * 0x28);
      if ((*piVar39 == (int)local_188) &&
         (*(int *)((longlong)local_148 + 4 + (longlong)iVar27 * 0x28) == local_188._4_4_)) {
        if (piVar39 != (int *)0x0) {
          plVar24 = (longlong *)(piVar39 + 2);
          bVar19 = false;
          goto LAB_1482f487b;
        }
        break;
      }
      iVar27 = piVar39[8];
    }
  }
  local_188 = (double)CONCAT44(iVar5,SUB84(local_3f8,0));
  uVar22 = FUN_1448eb174(&local_188,8,0);
  puVar32 = local_408;
  lVar34 = local_420;
  if ((int)uStack_140 != local_114) {
    puVar31 = local_108;
    if (local_108 == (undefined1 *)0x0) {
      puVar31 = local_110;
    }
    iVar27 = *(int *)(puVar31 + (ulonglong)(local_100 - 1U & uVar22) * 4);
    if (iVar27 != -1) {
      do {
        piVar39 = (int *)((longlong)local_148 + (longlong)iVar27 * 0x28);
        if ((*piVar39 == (int)local_188) &&
           (*(int *)((longlong)local_148 + 4 + (longlong)iVar27 * 0x28) == local_188._4_4_)) {
          plVar24 = (longlong *)(piVar39 + 2);
          if (plVar24 != (longlong *)0x0 && piVar39 != (int *)0x0) {
            bVar19 = true;
LAB_1482f487b:
            puVar32 = local_418;
            auVar14 = _DAT_149931e80;
            lVar34 = *plVar23;
            if (bVar10) {
              uVar48 = (undefined4)*(undefined8 *)(lVar34 + 0x90);
              uVar44 = (undefined4)((ulonglong)*(undefined8 *)(lVar34 + 0x90) >> 0x20);
              uVar28 = (undefined4)*(undefined8 *)(lVar34 + 0x98);
              uVar42 = (undefined4)((ulonglong)*(undefined8 *)(lVar34 + 0x98) >> 0x20);
              uVar67 = (undefined4)*(undefined8 *)(lVar34 + 0xa0);
              uVar68 = (undefined4)((ulonglong)*(undefined8 *)(lVar34 + 0xa0) >> 0x20);
              uVar41 = *(ulonglong *)(lVar34 + 0x48) ^ CONCAT44(uVar66,uVar33);
              uVar71 = (undefined4)uVar41;
              uVar72 = (undefined4)(uVar41 >> 0x20);
              uVar41 = *(ulonglong *)(lVar34 + 0x40) ^ CONCAT44(uVar66,uVar33);
              uVar69 = (undefined4)uVar41;
              uVar70 = (undefined4)(uVar41 >> 0x20);
              local_3d8 = (double)CONCAT44(*(uint *)(lVar34 + 0x3c) ^ uVar66,
                                           *(uint *)(lVar34 + 0x38) ^ uVar33);
              uStack_3d0 = CONCAT44(uVar43,uVar75);
            }
            else {
              uVar41 = *(ulonglong *)(lVar34 + 0x48) ^ CONCAT44(uVar66,uVar33);
              uVar67 = (undefined4)uVar41;
              uVar68 = (undefined4)(uVar41 >> 0x20);
              uVar41 = *(ulonglong *)(lVar34 + 0x40) ^ CONCAT44(uVar66,uVar33);
              uVar28 = (undefined4)uVar41;
              uVar42 = (undefined4)(uVar41 >> 0x20);
              uVar41 = *(ulonglong *)(lVar34 + 0x38) ^ CONCAT44(uVar66,uVar33);
              uVar48 = (undefined4)uVar41;
              uVar44 = (undefined4)(uVar41 >> 0x20);
              local_3d8 = *(double *)(lVar34 + 0x90);
              uStack_3d0 = 0;
              uVar69 = (undefined4)*(undefined8 *)(lVar34 + 0x98);
              uVar70 = (undefined4)((ulonglong)*(undefined8 *)(lVar34 + 0x98) >> 0x20);
              uVar71 = (undefined4)*(undefined8 *)(lVar34 + 0xa0);
              uVar72 = (undefined4)((ulonglong)*(undefined8 *)(lVar34 + 0xa0) >> 0x20);
            }
            lVar34 = *plVar24;
            uVar33 = (uint)DAT_149931e80;
            uVar66 = DAT_149931e80._4_4_;
            uVar75 = DAT_149931e80._8_4_;
            uVar43 = DAT_149931e80._12_4_;
            uVar41 = DAT_149931e80;
            if (bVar19) {
              uVar49 = (undefined4)*(undefined8 *)(lVar34 + 0x90);
              uVar50 = (undefined4)((ulonglong)*(undefined8 *)(lVar34 + 0x90) >> 0x20);
              dVar63 = *(double *)(lVar34 + 0x98);
              uVar73 = (undefined4)*(undefined8 *)(lVar34 + 0xa0);
              uVar74 = (undefined4)((ulonglong)*(undefined8 *)(lVar34 + 0xa0) >> 0x20);
              uVar29 = *(ulonglong *)(lVar34 + 0x48) ^ uVar41;
              uVar64 = (undefined4)uVar29;
              uVar65 = (undefined4)(uVar29 >> 0x20);
              dVar61 = (double)(*(ulonglong *)(lVar34 + 0x40) ^ uVar41);
              uVar29 = *(ulonglong *)(lVar34 + 0x38) ^ uVar41;
              uVar45 = (undefined4)uVar29;
              uVar47 = (undefined4)(uVar29 >> 0x20);
            }
            else {
              uVar29 = *(ulonglong *)(lVar34 + 0x48) ^ uVar41;
              uVar73 = (undefined4)uVar29;
              uVar74 = (undefined4)(uVar29 >> 0x20);
              dVar63 = (double)(*(ulonglong *)(lVar34 + 0x40) ^ uVar41);
              uVar29 = *(ulonglong *)(lVar34 + 0x38) ^ uVar41;
              uVar49 = (undefined4)uVar29;
              uVar50 = (undefined4)(uVar29 >> 0x20);
              uVar45 = (undefined4)*(undefined8 *)(lVar34 + 0x90);
              uVar47 = (undefined4)((ulonglong)*(undefined8 *)(lVar34 + 0x90) >> 0x20);
              dVar61 = *(double *)(lVar34 + 0x98);
              uVar64 = (undefined4)*(undefined8 *)(lVar34 + 0xa0);
              uVar65 = (undefined4)((ulonglong)*(undefined8 *)(lVar34 + 0xa0) >> 0x20);
            }
            dVar53 = local_3d8 * dVar11;
            local_178._1_7_ = (uint7)((ulonglong)local_178 >> 8) & 0xffffff;
            local_188 = 0.0;
            uStack_180 = 0.0;
            local_178 = (double)((ulonglong)local_178._1_7_ << 8);
            FUN_140924a7e(&local_188,0,&local_278);
            FUN_140924a7e(&local_188,0x3f800000);
            uVar29 = (ulonglong)((double)CONCAT44(uVar42,uVar28) * dVar11 + dVar63 * dVar56) ^
                     auVar14._8_8_;
            auVar14._8_4_ = (int)uVar29;
            auVar14._0_8_ =
                 (ulonglong)
                 ((double)CONCAT44(uVar44,uVar48) * dVar11 +
                 (double)CONCAT44(uVar50,uVar49) * dVar56) ^ uVar41;
            auVar14._12_4_ = (int)(uVar29 >> 0x20);
            *(undefined1 (*) [16])((longlong)local_188 + 0x38) = auVar14;
            *(ulonglong *)((longlong)local_188 + 0x48) =
                 (ulonglong)
                 ((double)CONCAT44(uVar68,uVar67) * dVar11 +
                 (double)CONCAT44(uVar74,uVar73) * dVar56) ^ uVar41;
            *(undefined8 *)((longlong)local_188 + 0x30) =
                 *(undefined8 *)((longlong)local_188 + 0x48);
            *(undefined8 *)((longlong)local_188 + 0x20) =
                 *(undefined8 *)((longlong)local_188 + 0x38);
            *(undefined8 *)((longlong)local_188 + 0x28) =
                 *(undefined8 *)((longlong)local_188 + 0x40);
            *(double *)((longlong)local_188 + 0x90) =
                 dVar53 + (double)CONCAT44(uVar47,uVar45) * dVar56;
            *(double *)((longlong)local_188 + 0x98) =
                 (double)CONCAT44(uVar70,uVar69) * dVar11 + dVar61 * dVar56;
            *(double *)((longlong)local_188 + 0xa0) =
                 (double)CONCAT44(uVar72,uVar71) * dVar11 + (double)CONCAT44(uVar65,uVar64) * dVar56
            ;
            *(undefined8 *)((longlong)local_188 + 0x88) =
                 *(undefined8 *)((longlong)local_188 + 0xa0);
            *(undefined8 *)((longlong)local_188 + 0x78) =
                 *(undefined8 *)((longlong)local_188 + 0x90);
            *(undefined8 *)((longlong)local_188 + 0x80) =
                 *(undefined8 *)((longlong)local_188 + 0x98);
            *(undefined1 *)((longlong)local_188 + 0xa8) = 3;
            *(undefined1 *)((longlong)local_188 + 0x50) = 3;
            dVar56 = 1.0 - dVar52;
            local_1b8 = local_268 * dVar56 + local_158 * dVar52;
            uStack_1c0 = uStack_270 * dVar56 + (double)uStack_160 * dVar52;
            local_1c8 = dVar56 * local_278 + dVar52 * (double)local_168;
            FUN_140703ce0(&local_188,&local_1a8,(float)dVar52,&local_1c8);
            uVar22 = *puVar36;
            cVar21 = FUN_146bfed03(&local_1a8);
            if (cVar21 != '\0') {
              lVar34 = *(longlong *)(*(longlong *)(puVar32 + 4) + (ulonglong)(uVar22 >> 9) * 8);
              uVar41 = (ulonglong)(uVar22 & 0x1ff);
              *(double *)(lVar34 + 0x10 + uVar41 * 0x18) = local_198;
              puVar2 = (undefined4 *)(lVar34 + uVar41 * 0x18);
              *puVar2 = (undefined4)local_1a8;
              puVar2[1] = local_1a8._4_4_;
              puVar2[2] = (undefined4)uStack_1a0;
              puVar2[3] = uStack_1a0._4_4_;
              if ((char)puVar32[0x84] == '\x01') {
                LOCK();
                puVar32[0x85] = puVar32[0x85] + 1;
                UNLOCK();
              }
            }
            puVar32 = local_408;
            lVar34 = local_420;
            if (local_188 != 0.0) {
              FUN_1400020a8();
              puVar32 = local_408;
              lVar34 = local_420;
            }
          }
          break;
        }
        iVar27 = piVar39[8];
      } while (iVar27 != -1);
    }
  }
LAB_1482f338e:
  puVar36 = puVar36 + 6;
  param_2 = local_418;
  if (puVar36 == puVar32) goto LAB_1482f4280;
  goto LAB_1482f320f;
}



// FUNCTION 1482f4bd2 FUN_1482f4bd2 body=1184 status=ok
// SIG undefined FUN_1482f4bd2(void)

longlong *
FUN_1482f4bd2(longlong param_1,longlong *param_2,double *param_3,undefined8 param_4,double *param_5,
             undefined8 param_6)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_178 [32];
  double local_158;
  double dStack_150;
  double local_148;
  double local_140;
  double dStack_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  double local_100;
  double dStack_f8;
  double local_f0;
  double local_e8;
  double local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  *(undefined4 *)((longlong)param_2 + 0x14) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined1 *)(param_2 + 2) = 0;
  local_f0 = 0.0;
  local_100 = 0.0;
  dStack_f8 = 0.0;
  local_e8 = 1.0;
  local_118 = *param_3;
  dStack_110 = param_3[1];
  local_108 = param_3[2];
  local_148 = (double)DAT_14c8463c8;
  local_158 = DAT_14c8463b8;
  dStack_150 = (double)DAT_14c8463c0;
  FUN_146bfb7f2(&local_100,&local_158,param_4);
  dVar10 = local_100 * (local_f0 + local_f0) + local_e8 * (dStack_f8 + dStack_f8);
  dVar3 = (local_f0 + local_f0) * dStack_f8 - (local_100 + local_100) * local_e8;
  dVar15 = 1.0 - ((dStack_f8 + dStack_f8) * dStack_f8 + local_100 * (local_100 + local_100));
  dVar12 = (param_5[2] - local_108) * dVar15 +
           (*param_5 - local_118) * dVar10 + (param_5[1] - dStack_110) * dVar3;
  dVar15 = (param_5[2] - dVar15 * dVar12) - param_3[2];
  dVar4 = (param_5[1] - dVar3 * dVar12) - param_3[1];
  dVar10 = (*param_5 - dVar12 * dVar10) - *param_3;
  local_130 = 0.0;
  local_140 = 0.0;
  dStack_138 = 0.0;
  local_128 = 1.0;
  local_158 = *param_5;
  dStack_150 = param_5[1];
  local_148 = param_5[2];
  local_c8 = DAT_14c8463c8;
  local_d8 = DAT_14c8463b8;
  uStack_d0 = DAT_14c8463c0;
  FUN_146bfb7f2(&local_140,&local_d8,param_6);
  dVar11 = local_140 * (local_130 + local_130) + local_128 * (dStack_138 + dStack_138);
  dVar3 = (local_130 + local_130) * dStack_138 - (local_140 + local_140) * local_128;
  dVar12 = 1.0 - ((dStack_138 + dStack_138) * dStack_138 + local_140 * (local_140 + local_140));
  dVar13 = (param_3[2] - local_148) * dVar12 +
           (*param_3 - local_158) * dVar11 + (param_3[1] - dStack_150) * dVar3;
  dVar12 = (param_3[2] - dVar12 * dVar13) - param_5[2];
  dVar5 = (param_3[1] - dVar3 * dVar13) - param_5[1];
  dVar11 = (*param_3 - dVar13 * dVar11) - *param_5;
  FUN_140924a7e(param_2,0,param_3);
  FUN_140924a7e(param_2,0x3f800000,param_5);
  *(undefined1 *)(*param_2 + 0x50) = 3;
  *(undefined1 *)(*param_2 + 0xa8) = 3;
  dVar3 = *(double *)(param_1 + 0x10);
  dVar14 = -dVar3;
  dVar13 = (double)(~-(ulonglong)(dVar14 <= dVar3) & (ulonglong)dVar14 |
                   -(ulonglong)(dVar14 <= dVar3) & (ulonglong)dVar3) * 1.4142135623730951;
  if (dVar14 <= dVar3) {
    lVar1 = *param_2;
    *(double *)(lVar1 + 0x38) = dVar10 * dVar13;
    *(double *)(lVar1 + 0x40) = dVar4 * dVar13;
    *(double *)(lVar1 + 0x48) = dVar15 * dVar13;
    lVar2 = *param_2;
    uVar6 = *(undefined4 *)(lVar1 + 0x3c);
    uVar7 = *(undefined4 *)(lVar1 + 0x40);
    uVar8 = *(undefined4 *)(lVar1 + 0x44);
    *(undefined4 *)(lVar2 + 0x20) = *(undefined4 *)(lVar1 + 0x38);
    *(undefined4 *)(lVar2 + 0x24) = uVar6;
    *(undefined4 *)(lVar2 + 0x28) = uVar7;
    *(undefined4 *)(lVar2 + 0x2c) = uVar8;
    dVar13 = -dVar13;
    *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)(lVar1 + 0x48);
    dVar15 = dVar12 * dVar13;
    dVar4 = dVar5 * dVar13;
    dVar10 = dVar11 * dVar13;
  }
  else {
    dVar3 = -dVar13;
    lVar1 = *param_2;
    *(double *)(lVar1 + 0x38) = dVar11 * dVar3;
    *(double *)(lVar1 + 0x40) = dVar5 * dVar3;
    *(double *)(lVar1 + 0x48) = dVar12 * dVar3;
    lVar2 = *param_2;
    uVar6 = *(undefined4 *)(lVar1 + 0x3c);
    uVar7 = *(undefined4 *)(lVar1 + 0x40);
    uVar8 = *(undefined4 *)(lVar1 + 0x44);
    *(undefined4 *)(lVar2 + 0x20) = *(undefined4 *)(lVar1 + 0x38);
    *(undefined4 *)(lVar2 + 0x24) = uVar6;
    *(undefined4 *)(lVar2 + 0x28) = uVar7;
    *(undefined4 *)(lVar2 + 0x2c) = uVar8;
    *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)(lVar1 + 0x48);
    dVar15 = dVar15 * dVar13;
    dVar4 = dVar4 * dVar13;
    dVar10 = dVar10 * dVar13;
  }
  lVar1 = *param_2;
  *(double *)(lVar1 + 0x90) = dVar10;
  *(double *)(lVar1 + 0x98) = dVar4;
  *(double *)(lVar1 + 0xa0) = dVar15;
  lVar2 = *param_2;
  uVar9 = *(undefined8 *)(lVar1 + 0x98);
  *(undefined8 *)(lVar2 + 0x78) = *(undefined8 *)(lVar1 + 0x90);
  *(undefined8 *)(lVar2 + 0x80) = uVar9;
  *(undefined8 *)(lVar2 + 0x88) = *(undefined8 *)(lVar1 + 0xa0);
  if ((local_c0 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482f5074 FUN_1482f5074 body=38 status=ok
// SIG undefined FUN_1482f5074(void)

undefined8 FUN_1482f5074(undefined8 param_1,int param_2)

{
  FUN_1482feb02();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1482f509a FUN_1482f509a body=74 status=ok
// SIG undefined FUN_1482f509a(void)

char FUN_1482f509a(longlong param_1)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  pcVar1 = *(char **)(param_1 + 0x120);
  if (pcVar1 == (char *)0x0) {
    cVar3 = '\0';
  }
  else {
    cVar3 = '\x01';
    if (*pcVar1 == '\0') {
      pcVar2 = *(code **)(pcVar1 + 0x70);
      plVar5 = (longlong *)(pcVar1 + 0x90);
      if (*(longlong **)(pcVar1 + 0x80) != (longlong *)0x0) {
        plVar5 = *(longlong **)(pcVar1 + 0x80);
      }
      uVar4 = (**(code **)(*plVar5 + 8))();
      cVar3 = (*pcVar2)(uVar4);
      *pcVar1 = cVar3;
    }
  }
  return cVar3;
}



// FUNCTION 1482f50e4 FUN_1482f50e4 body=38 status=ok
// SIG undefined FUN_1482f50e4(void)

undefined8 FUN_1482f50e4(undefined8 param_1,int param_2)

{
  FUN_1482fec66();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1482f510a FUN_1482f510a body=38 status=ok
// SIG undefined FUN_1482f510a(void)

undefined8 FUN_1482f510a(undefined8 param_1,int param_2)

{
  FUN_1482fed12();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1482f5130 FUN_1482f5130 body=38 status=ok
// SIG undefined FUN_1482f5130(void)

undefined8 FUN_1482f5130(undefined8 param_1,int param_2)

{
  FUN_145aba0b4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1482f5156 FUN_1482f5156 body=66 status=ok
// SIG undefined FUN_1482f5156(void)

int FUN_1482f5156(longlong param_1,ulonglong param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(longlong *)(param_1 + 0x88) == 0) {
    iVar1 = FUN_146bc96d4(*(undefined8 *)(param_1 + 0x80));
  }
  else {
    iVar1 = *(int *)(*(longlong *)
                      (*(longlong *)(*(longlong *)(param_1 + 0x88) + 0x20) +
                      (param_2 >> 9 & 0x7fffff) * 8) + (ulonglong)((uint)param_2 & 0x1ff) * 4);
  }
  iVar2 = 0;
  if (0 < iVar1) {
    iVar2 = iVar1;
  }
  return iVar2;
}



// FUNCTION 1482f5198 FUN_1482f5198 body=38 status=ok
// SIG undefined FUN_1482f5198(void)

undefined8 FUN_1482f5198(undefined8 param_1,int param_2)

{
  FUN_145aba0b4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1482f51c2 FUN_1482f51c2 body=57 status=ok
// SIG undefined FUN_1482f51c2(void)

undefined8 * FUN_1482f51c2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ae72b68;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1482f51fc FUN_1482f51fc body=38 status=ok
// SIG undefined FUN_1482f51fc(void)

undefined8 FUN_1482f51fc(undefined8 param_1,int param_2)

{
  FUN_14830cf42();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1482f5226 FUN_1482f5226 body=38 status=ok
// SIG undefined FUN_1482f5226(void)

undefined8 FUN_1482f5226(undefined8 param_1,int param_2)

{
  FUN_14830cf9a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1482f524c FUN_1482f524c body=38 status=ok
// SIG undefined FUN_1482f524c(void)

undefined8 FUN_1482f524c(undefined8 param_1,int param_2)

{
  FUN_1482df938();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1482f5276 FUN_1482f5276 body=38 status=ok
// SIG undefined FUN_1482f5276(void)

undefined8 FUN_1482f5276(undefined8 param_1,int param_2)

{
  FUN_14830d41a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1482f52aa FUN_1482f52aa body=61 status=ok
// SIG undefined FUN_1482f52aa(void)

void FUN_1482f52aa(longlong param_1,int param_2)

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



// FUNCTION 1482f52e8 FUN_1482f52e8 body=147 status=ok
// SIG undefined FUN_1482f52e8(void)

void FUN_1482f52e8(longlong param_1,int param_2)

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



// FUNCTION 1482f537c FUN_1482f537c body=315 status=ok
// SIG undefined FUN_1482f537c(void)

undefined4 *
FUN_1482f537c(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  uint *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1482f54b8(param_1,local_50);
  puVar1 = (uint *)param_3[1];
  uVar6 = *(uint *)*param_3;
  *local_48 = uVar6;
  uVar7 = puVar1[1];
  uVar2 = puVar1[2];
  uVar3 = puVar1[3];
  local_48[2] = *puVar1;
  local_48[3] = uVar7;
  local_48[4] = uVar2;
  local_48[5] = uVar3;
  *(undefined8 *)(local_48 + 6) = *(undefined8 *)(puVar1 + 4);
  local_48[8] = 0xffffffff;
  local_54 = local_50[0];
  local_68 = param_4;
  cVar4 = FUN_1482f559e(param_1,uVar6,local_48);
  if (cVar4 == '\0') {
    uVar7 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar7) {
      uVar5 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar6 = *(int *)(param_1 + 0x48) - 1U & uVar6;
      local_48[9] = uVar6;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      local_48[8] = *(uint *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar6) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_1482f56c6(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482f54b8 FUN_1482f54b8 body=230 status=ok
// SIG undefined FUN_1482f54b8(void)

int * FUN_1482f54b8(longlong *param_1,int *param_2)

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
      FUN_140549c28(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x28) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 1482f559e FUN_1482f559e body=158 status=ok
// SIG undefined FUN_1482f559e(void)

void FUN_1482f559e(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 uVar9;
  longlong *plVar10;
  int iVar11;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar10 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar10 = (longlong *)param_1[8];
    }
    iVar11 = *(int *)((longlong)plVar10 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar11 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar11 * 0x28);
        if (*piVar1 == *param_3) {
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          iVar6 = param_3[5];
          iVar7 = param_3[6];
          iVar8 = param_3[7];
          piVar1[4] = param_3[4];
          piVar1[5] = iVar6;
          piVar1[6] = iVar7;
          piVar1[7] = iVar8;
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_1482f563c(iVar2,*param_4,1);
          *param_4 = iVar11;
          uVar9 = 1;
          goto LAB_1482f5608;
        }
        iVar11 = piVar1[8];
      } while (iVar11 != -1);
    }
  }
  uVar9 = 0;
LAB_1482f5608:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar9;
  }
  return;
}



// FUNCTION 1482f563c FUN_1482f563c body=138 status=ok
// SIG undefined FUN_1482f563c(void)

void FUN_1482f563c(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x28 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x28) = param_2;
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
      puVar7 = puVar7 + 10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1482f56c6 FUN_1482f56c6 body=419 status=ok
// SIG undefined FUN_1482f56c6(void)

void FUN_1482f56c6(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar6 * 0x28);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x24 + lVar6 * 0x28) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x20 + lVar6 * 0x28) =
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



// FUNCTION 1482f586a FUN_1482f586a body=307 status=ok
// SIG undefined FUN_1482f586a(void)

undefined4 *
FUN_1482f586a(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  uint *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1482f599e(param_1,local_50);
  puVar1 = (uint *)param_3[1];
  uVar6 = *(uint *)*param_3;
  *local_48 = uVar6;
  uVar7 = puVar1[1];
  uVar2 = puVar1[2];
  uVar3 = puVar1[3];
  local_48[2] = *puVar1;
  local_48[3] = uVar7;
  local_48[4] = uVar2;
  local_48[5] = uVar3;
  local_48[6] = 0xffffffff;
  local_54 = local_50[0];
  local_68 = param_4;
  cVar4 = FUN_1482f5a84(param_1,uVar6,local_48);
  if (cVar4 == '\0') {
    uVar7 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar7) {
      uVar5 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar6 = *(int *)(param_1 + 0x48) - 1U & uVar6;
      local_48[7] = uVar6;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      local_48[6] = *(uint *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar6) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_1482f5bac(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482f599e FUN_1482f599e body=229 status=ok
// SIG undefined FUN_1482f599e(void)

int * FUN_1482f599e(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1447711aa(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 1482f5a84 FUN_1482f5a84 body=157 status=ok
// SIG undefined FUN_1482f5a84(void)

void FUN_1482f5a84(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
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
        piVar1 = (int *)(*param_1 + (longlong)iVar8 * 0x20);
        if (*(int *)(*param_1 + (longlong)iVar8 * 0x20) == *param_3) {
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          *(undefined8 *)(piVar1 + 4) = *(undefined8 *)(param_3 + 4);
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_1482f5b22(iVar2,*param_4,1);
          *param_4 = iVar8;
          uVar6 = 1;
          goto LAB_1482f5aef;
        }
        iVar8 = piVar1[6];
      } while (iVar8 != -1);
    }
  }
  uVar6 = 0;
LAB_1482f5aef:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar6;
  }
  return;
}



// FUNCTION 1482f5b22 FUN_1482f5b22 body=138 status=ok
// SIG undefined FUN_1482f5b22(void)

void FUN_1482f5b22(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x20 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
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
      puVar7 = puVar7 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1482f5bac FUN_1482f5bac body=422 status=ok
// SIG undefined FUN_1482f5bac(void)

void FUN_1482f5bac(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
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
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
        lVar7 = (longlong)iVar5 * 0x20;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x1c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 1482f5d54 FUN_1482f5d54 body=122 status=ok
// SIG undefined FUN_1482f5d54(void)

longlong FUN_1482f5d54(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_1482f5dce(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1482f5dce FUN_1482f5dce body=117 status=ok
// SIG undefined FUN_1482f5dce(void)

undefined8 * FUN_1482f5dce(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1482f5e44(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1447711aa(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 << 5);
    }
  }
  return param_1;
}



// FUNCTION 1482f5e44 FUN_1482f5e44 body=128 status=ok
// SIG undefined FUN_1482f5e44(void)

void FUN_1482f5e44(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 1482f5ec6 FUN_1482f5ec6 body=54 status=ok
// SIG undefined FUN_1482f5ec6(void)

void FUN_1482f5ec6(longlong *param_1)

{
  FUN_1482f5e44(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1482f5efc FUN_1482f5efc body=38 status=ok
// SIG undefined FUN_1482f5efc(void)

undefined8 FUN_1482f5efc(undefined8 param_1,int param_2)

{
  FUN_1482f5f22();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1482f5f22 FUN_1482f5f22 body=105 status=ok
// SIG undefined FUN_1482f5f22(void)

void FUN_1482f5f22(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14ae730a0;
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1c] != 0) {
    plVar1 = param_1 + 0x20;
    if ((longlong *)param_1[0x1e] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x1e];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(char *)(param_1 + 0x19) == '\x01') {
    FUN_1482f5f8c(param_1 + 2);
    *(undefined1 *)(param_1 + 0x19) = 0;
  }
  return;
}



// FUNCTION 1482f5f8c FUN_1482f5f8c body=118 status=ok
// SIG undefined FUN_1482f5f8c(void)

void FUN_1482f5f8c(longlong param_1)

{
  FUN_1482f6002(*(undefined8 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xb0));
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_1482f5ec6(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1482f604c(param_1);
  return;
}



// FUNCTION 1482f6002 FUN_1482f6002 body=73 status=ok
// SIG undefined FUN_1482f6002(void)

void FUN_1482f6002(longlong param_1,int param_2)

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



// FUNCTION 1482f604c FUN_1482f604c body=54 status=ok
// SIG undefined FUN_1482f604c(void)

void FUN_1482f604c(longlong *param_1)

{
  FUN_1482f6082(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1482f6082 FUN_1482f6082 body=128 status=ok
// SIG undefined FUN_1482f6082(void)

void FUN_1482f6082(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_140549ad6(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 1482f6104 FUN_1482f6104 body=302 status=ok
// SIG undefined FUN_1482f6104(void)

undefined4 * FUN_1482f6104(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  undefined8 *puVar8;
  uint *puVar9;
  undefined1 auStack_78 [36];
  undefined4 local_54;
  undefined4 local_50 [2];
  uint *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1482f6234(param_1,local_50);
  puVar8 = (undefined8 *)param_3[1];
  uVar4 = *(uint *)*param_3;
  *local_48 = uVar4;
  puVar9 = local_48;
  for (lVar5 = 10; puVar9 = puVar9 + 2, lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined8 *)puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
  }
  local_48[0x16] = 0xffffffff;
  local_54 = local_50[0];
  cVar2 = FUN_1482f6322(param_1,uVar4,local_48,&local_54);
  uVar1 = local_54;
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar3) {
      uVar6 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_48[0x17] = uVar4;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      local_48[0x16] =
           *(uint *)(lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1482f6430(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482f6234 FUN_1482f6234 body=238 status=ok
// SIG undefined FUN_1482f6234(void)

int * FUN_1482f6234(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_14488f93c(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x60);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x60) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x60 + *param_1;
  return param_2;
}



// FUNCTION 1482f6322 FUN_1482f6322 body=148 status=ok
// SIG undefined FUN_1482f6322(void)

undefined8 FUN_1482f6322(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  void *_Dst;
  longlong *plVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x60);
        if (*(int *)(*param_1 + (longlong)iVar2 * 0x60) == *param_3) {
          memmove(_Dst,param_3,0x58);
          FUN_1482f63b6(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x58);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 1482f63b6 FUN_1482f63b6 body=122 status=ok
// SIG undefined FUN_1482f63b6(void)

void FUN_1482f63b6(longlong *param_1,int param_2)

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



// FUNCTION 1482f6430 FUN_1482f6430 body=423 status=ok
// SIG undefined FUN_1482f6430(void)

void FUN_1482f6430(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
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
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
        lVar7 = (longlong)iVar5 * 0x60;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x5c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x58 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 1482f65d8 FUN_1482f65d8 body=104 status=ok
// SIG undefined FUN_1482f65d8(void)

undefined8 FUN_1482f65d8(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x28) == param_2) {
          FUN_1482f6640(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x28 + 0x20);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 1482f6640 FUN_1482f6640 body=93 status=ok
// SIG undefined FUN_1482f6640(void)

void FUN_1482f6640(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar1 = lVar2 + (longlong)param_2 * 0x28;
  lVar6 = (longlong)*(int *)(lVar1 + 0x24);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x20 + lVar6 * 0x28);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x28 + 0x20);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x20);
  FUN_1482f563c(param_1,param_2,1);
  return;
}



// FUNCTION 1482f669e FUN_1482f669e body=103 status=ok
// SIG undefined FUN_1482f669e(void)

undefined8 FUN_1482f669e(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x20) == param_2) {
          FUN_1482f6706(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + *param_1 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 1482f6706 FUN_1482f6706 body=96 status=ok
// SIG undefined FUN_1482f6706(void)

void FUN_1482f6706(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x18 + lVar5 * 0x20);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x20 + 0x18);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_1482f5b22(param_1,param_2,1);
  return;
}



// FUNCTION 1482f676e FUN_1482f676e body=416 status=ok
// SIG undefined FUN_1482f676e(void)

void FUN_1482f676e(undefined8 *param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  double *pdVar5;
  double dVar6;
  undefined1 auStack_88 [40];
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double dStack_40;
  double local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((*(char *)*param_1 == '\x01') && (*(uint *)param_1[1] != param_2)) &&
     (*(uint *)param_1[2] != param_2)) {
    lVar2 = *(longlong *)(param_1[3] + 8);
    lVar4 = *(longlong *)(*(longlong *)(lVar2 + 0x130) + (ulonglong)(param_2 >> 9) * 8);
    local_28 = *(undefined4 *)(lVar4 + 8 + (ulonglong)(param_2 & 0x1ff) * 0xc);
    local_30 = *(undefined8 *)(lVar4 + (ulonglong)(param_2 & 0x1ff) * 0xc);
    local_38 = DAT_14c8464f0;
    lVar4 = 0;
    local_48 = DAT_14c8464e0;
    dStack_40 = DAT_14c8464e8;
    do {
      uVar1 = *(uint *)((longlong)&local_30 + lVar4 * 4);
      if ((uVar1 == *(uint *)param_1[4]) || (uVar1 == *(uint *)param_1[5])) {
        pdVar5 = (double *)param_1[6];
      }
      else {
        pdVar5 = (double *)
                 ((ulonglong)((uVar1 & 0x1ff) * 0x18) +
                 *(longlong *)(*(longlong *)(lVar2 + 0x10) + (ulonglong)(uVar1 >> 9) * 8));
      }
      local_48 = local_48 + *pdVar5;
      dStack_40 = dStack_40 + pdVar5[1];
      local_38 = pdVar5[2] + local_38;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 3);
    local_48 = local_48 * 0.3333333333333333;
    dStack_40 = dStack_40 * 0.3333333333333333;
    local_38 = local_38 * 0.3333333333333333;
    plVar3 = *(longlong **)(param_1[3] + 0xd0);
    (**(code **)(*plVar3 + 8))(plVar3,&local_60,&local_48,0xffffffff);
    dVar6 = (local_50 - local_38) * (local_50 - local_38) +
            (local_60 - local_48) * (local_60 - local_48) +
            (local_58 - dStack_40) * (local_58 - dStack_40);
    if (*(double *)param_1[7] <= dVar6 && dVar6 != *(double *)param_1[7]) {
      *(undefined1 *)*param_1 = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482f6918 FUN_1482f6918 body=416 status=ok
// SIG undefined FUN_1482f6918(void)

void FUN_1482f6918(undefined8 *param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  double *pdVar5;
  double dVar6;
  undefined1 auStack_88 [40];
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double dStack_40;
  double local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((*(char *)*param_1 == '\x01') && (*(uint *)param_1[1] != param_2)) &&
     (*(uint *)param_1[2] != param_2)) {
    lVar2 = *(longlong *)(param_1[3] + 8);
    lVar4 = *(longlong *)(*(longlong *)(lVar2 + 0x130) + (ulonglong)(param_2 >> 9) * 8);
    local_28 = *(undefined4 *)(lVar4 + 8 + (ulonglong)(param_2 & 0x1ff) * 0xc);
    local_30 = *(undefined8 *)(lVar4 + (ulonglong)(param_2 & 0x1ff) * 0xc);
    local_38 = DAT_14c8464f0;
    lVar4 = 0;
    local_48 = DAT_14c8464e0;
    dStack_40 = DAT_14c8464e8;
    do {
      uVar1 = *(uint *)((longlong)&local_30 + lVar4 * 4);
      if ((uVar1 == *(uint *)param_1[4]) || (uVar1 == *(uint *)param_1[5])) {
        pdVar5 = (double *)param_1[6];
      }
      else {
        pdVar5 = (double *)
                 ((ulonglong)((uVar1 & 0x1ff) * 0x18) +
                 *(longlong *)(*(longlong *)(lVar2 + 0x10) + (ulonglong)(uVar1 >> 9) * 8));
      }
      local_48 = local_48 + *pdVar5;
      dStack_40 = dStack_40 + pdVar5[1];
      local_38 = pdVar5[2] + local_38;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 3);
    local_48 = local_48 * 0.3333333333333333;
    dStack_40 = dStack_40 * 0.3333333333333333;
    local_38 = local_38 * 0.3333333333333333;
    plVar3 = *(longlong **)(param_1[3] + 0xd0);
    (**(code **)(*plVar3 + 8))(plVar3,&local_60,&local_48,0xffffffff);
    dVar6 = (local_50 - local_38) * (local_50 - local_38) +
            (local_60 - local_48) * (local_60 - local_48) +
            (local_58 - dStack_40) * (local_58 - dStack_40);
    if (*(double *)param_1[7] <= dVar6 && dVar6 != *(double *)param_1[7]) {
      *(undefined1 *)*param_1 = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482f6ac2 FUN_1482f6ac2 body=416 status=ok
// SIG undefined FUN_1482f6ac2(void)

void FUN_1482f6ac2(undefined8 *param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  double *pdVar5;
  double dVar6;
  undefined1 auStack_88 [40];
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double dStack_40;
  double local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((*(char *)*param_1 == '\x01') && (*(uint *)param_1[1] != param_2)) &&
     (*(uint *)param_1[2] != param_2)) {
    lVar2 = *(longlong *)(param_1[3] + 8);
    lVar4 = *(longlong *)(*(longlong *)(lVar2 + 0x130) + (ulonglong)(param_2 >> 9) * 8);
    local_28 = *(undefined4 *)(lVar4 + 8 + (ulonglong)(param_2 & 0x1ff) * 0xc);
    local_30 = *(undefined8 *)(lVar4 + (ulonglong)(param_2 & 0x1ff) * 0xc);
    local_38 = DAT_14c8464f0;
    lVar4 = 0;
    local_48 = DAT_14c8464e0;
    dStack_40 = DAT_14c8464e8;
    do {
      uVar1 = *(uint *)((longlong)&local_30 + lVar4 * 4);
      if ((uVar1 == *(uint *)param_1[4]) || (uVar1 == *(uint *)param_1[5])) {
        pdVar5 = (double *)param_1[6];
      }
      else {
        pdVar5 = (double *)
                 ((ulonglong)((uVar1 & 0x1ff) * 0x18) +
                 *(longlong *)(*(longlong *)(lVar2 + 0x10) + (ulonglong)(uVar1 >> 9) * 8));
      }
      local_48 = local_48 + *pdVar5;
      dStack_40 = dStack_40 + pdVar5[1];
      local_38 = pdVar5[2] + local_38;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 3);
    local_48 = local_48 * 0.3333333333333333;
    dStack_40 = dStack_40 * 0.3333333333333333;
    local_38 = local_38 * 0.3333333333333333;
    plVar3 = *(longlong **)(param_1[3] + 0xd0);
    (**(code **)(*plVar3 + 8))(plVar3,&local_60,&local_48,0xffffffff);
    dVar6 = (local_50 - local_38) * (local_50 - local_38) +
            (local_60 - local_48) * (local_60 - local_48) +
            (local_58 - dStack_40) * (local_58 - dStack_40);
    if (*(double *)param_1[7] <= dVar6 && dVar6 != *(double *)param_1[7]) {
      *(undefined1 *)*param_1 = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482f6c64 FUN_1482f6c64 body=196 status=ok
// SIG undefined FUN_1482f6c64(void)

int FUN_1482f6c64(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined1 auStack_58 [36];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar3 = *(int *)(param_1 + 0x140);
  iVar4 = *(int *)(param_1 + 0x144);
  if (iVar3 * 0x200 + iVar4 < 1) {
    iVar5 = 0;
  }
  else {
    uVar6 = 0;
    iVar5 = 0;
    do {
      if ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)(param_1 + 0x148) + (ulonglong)(uVar6 >> 9) * 8) +
                             (ulonglong)(uVar6 & 0x1ff) * 2) - 1U) < 0xfffe) {
        local_34 = uVar6;
        bVar1 = (*(code *)*param_2)(param_2[1],&local_34);
        uVar2 = (uint)(bVar1 ^ 1);
        iVar3 = *(int *)(param_1 + 0x140);
        iVar4 = *(int *)(param_1 + 0x144);
      }
      else {
        uVar2 = 0;
      }
      iVar5 = iVar5 + uVar2;
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < iVar3 * 0x200 + iVar4);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482f6d2a FUN_1482f6d2a body=38 status=ok
// SIG undefined FUN_1482f6d2a(void)

undefined8 FUN_1482f6d2a(undefined8 param_1,int param_2)

{
  FUN_1482d24ce();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1482f6d5c FUN_1482f6d5c body=197 status=ok
// SIG undefined FUN_1482f6d5c(void)

undefined4 FUN_1482f6d5c(longlong param_1,undefined8 param_2,ulonglong *param_3,double *param_4)

{
  double dVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined1 auStack_48 [32];
  undefined4 *local_28;
  double *local_20;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(int *)(param_1 + 0xcc) < 0) || (*(char *)(param_4 + 10) != '\0')) {
    uVar2 = 0xffffffff;
    if (*(int *)(param_1 + 0xcc) < 0) goto LAB_1482f6e05;
  }
  else {
    uVar2 = 0xffffffff;
    if (*(ulonglong *)(param_1 + 0x10) !=
        (ulonglong)
        (uint)(*(int *)(**(longlong **)(param_1 + 8) + 0x214) +
              *(int *)(**(longlong **)(param_1 + 8) + 0x218))) goto LAB_1482f6e05;
  }
  dVar1 = *param_4;
  uVar3 = ~-(ulonglong)(dVar1 < 1.79769313486232e+308) & 0x7fefffffffffffff |
          (ulonglong)(dVar1 * dVar1) & -(ulonglong)(dVar1 < 1.79769313486232e+308);
  *param_3 = uVar3;
  local_28 = &local_14;
  local_14 = 0xffffffff;
  local_20 = param_4;
  FUN_1482f847c(uVar3,*(undefined4 *)(param_1 + 0xcc),param_2,param_3);
  uVar2 = local_14;
LAB_1482f6e05:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482f6e26 FUN_1482f6e26 body=164 status=ok
// SIG undefined FUN_1482f6e26(void)

bool FUN_1482f6e26(longlong param_1,undefined8 param_2,undefined8 *param_3,int *param_4,
                  undefined8 *param_5,double *param_6)

{
  double dVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  *param_4 = -1;
  uVar4 = DAT_14c8464e8;
  uVar3 = DAT_14c8464e0;
  param_5[2] = DAT_14c8464f0;
  *param_5 = uVar3;
  param_5[1] = uVar4;
  dVar1 = *param_6;
  uVar5 = SUB84(dVar1,0);
  uVar6 = (undefined4)((ulonglong)dVar1 >> 0x20);
  if (3.4028234663852886e+38 <= dVar1) {
    uVar5 = 0xe0000000;
    uVar6 = 0x47efffff;
  }
  *param_3 = CONCAT44(uVar6,uVar5);
  iVar2 = *(int *)(param_1 + 0xcc);
  if ((iVar2 < 0) || (*(char *)(param_6 + 10) != '\0')) {
    if (iVar2 < 0) {
      return false;
    }
  }
  else {
    if (*(ulonglong *)(param_1 + 0x10) !=
        (ulonglong)
        (uint)(*(int *)(**(longlong **)(param_1 + 8) + 0x214) +
              *(int *)(**(longlong **)(param_1 + 8) + 0x218))) {
      return false;
    }
    iVar2 = *(int *)(param_1 + 0xcc);
  }
  FUN_1482f88b4(uVar5,iVar2,param_2,param_3,param_4,param_5,param_6);
  return *param_4 != -1;
}



// FUNCTION 1482f6eca FUN_1482f6eca body=76 status=ok
// SIG undefined FUN_1482f6eca(void)

void FUN_1482f6eca(longlong *param_1)

{
  undefined8 in_stack_00000028;
  undefined1 auStack_58 [32];
  undefined1 *local_38;
  undefined8 local_30;
  undefined1 local_20 [24];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = in_stack_00000028;
  local_38 = local_20;
  (**(code **)(*param_1 + 0x30))();
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482f6f18 FUN_1482f6f18 body=84 status=ok
// SIG undefined FUN_1482f6f18(void)

undefined4 FUN_1482f6f18(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined8 local_40;
  undefined1 local_38 [28];
  undefined4 local_1c;
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = local_38;
  local_40 = param_3;
  (**(code **)(*param_1 + 0x30))(param_1,param_2,local_18,&local_1c);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return local_1c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482f6f6e FUN_1482f6f6e body=110 status=ok
// SIG undefined FUN_1482f6f6e(void)

undefined8 FUN_1482f6f6e(longlong param_1,undefined8 param_2,undefined8 *param_3,longlong param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xcc);
  if ((iVar1 < 0) || (*(char *)(param_4 + 0x50) != '\0')) {
    if (iVar1 < 0) {
      return 0;
    }
  }
  else {
    if (*(ulonglong *)(param_1 + 0x10) !=
        (ulonglong)
        (uint)(*(int *)(**(longlong **)(param_1 + 8) + 0x214) +
              *(int *)(**(longlong **)(param_1 + 8) + 0x218))) {
      return 0;
    }
    iVar1 = *(int *)(param_1 + 0xcc);
  }
  FUN_1482f8dea(param_1,iVar1,param_2,param_3,param_4);
  if (*(int *)(param_3 + 1) == 0) {
    return 0;
  }
  FUN_1482f921f(*param_3);
  return 1;
}



// FUNCTION 1482f6fdc FUN_1482f6fdc body=165 status=ok
// SIG undefined FUN_1482f6fdc(void)

undefined4 * FUN_1482f6fdc(longlong *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined1 local_b8 [8];
  undefined1 local_b0 [120];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  iVar1 = (**(code **)(*param_1 + 0x20))(param_1,param_3,local_b8);
  if (iVar1 < 0) {
    *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_3 + 4);
    local_38 = *param_3;
    uStack_34 = param_3[1];
    uStack_30 = param_3[2];
    uStack_2c = param_3[3];
  }
  else {
    local_d8 = *param_3;
    uStack_d4 = param_3[1];
    uStack_d0 = param_3[2];
    uStack_cc = param_3[3];
    local_c8 = *(undefined8 *)(param_3 + 4);
    FUN_1482f98a0(local_b0,param_1[1],iVar1);
    *(undefined8 *)(param_2 + 4) = local_28;
  }
  *param_2 = local_38;
  param_2[1] = uStack_34;
  param_2[2] = uStack_30;
  param_2[3] = uStack_2c;
  if ((local_20 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482f7082 FUN_1482f7082 body=157 status=ok
// SIG undefined FUN_1482f7082(void)

bool FUN_1482f7082(longlong param_1,undefined8 param_2,undefined8 param_3,int *param_4,
                  longlong param_5)

{
  bool bVar1;
  undefined1 auStack_48 [32];
  int *local_28;
  longlong local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = param_3;
  if ((*(int *)(param_1 + 0xcc) < 0) || (*(char *)(param_5 + 0x50) != '\0')) {
    if (*(int *)(param_1 + 0xcc) < 0) goto LAB_1482f7101;
  }
  else if (*(ulonglong *)(param_1 + 0x10) !=
           (ulonglong)
           (uint)(*(int *)(**(longlong **)(param_1 + 8) + 0x214) +
                 *(int *)(**(longlong **)(param_1 + 8) + 0x218))) {
LAB_1482f7101:
    bVar1 = false;
    goto LAB_1482f7103;
  }
  *param_4 = -1;
  local_20 = param_5;
  local_28 = param_4;
  FUN_1482f99a2(param_1,*(undefined4 *)(param_1 + 0xcc),param_2,&local_18);
  bVar1 = *param_4 != -1;
LAB_1482f7103:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482f7120 FUN_1482f7120 body=194 status=ok
// SIG undefined FUN_1482f7120(void)

undefined4
FUN_1482f7120(longlong param_1,undefined8 param_2,ulonglong *param_3,double param_4,longlong param_5
             )

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [32];
  undefined4 *local_28;
  longlong local_20;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(int *)(param_1 + 0xcc) < 0) || (*(char *)(param_5 + 0x50) != '\0')) {
    uVar1 = 0xffffffff;
    if (*(int *)(param_1 + 0xcc) < 0) goto LAB_1482f71c6;
  }
  else {
    uVar1 = 0xffffffff;
    if (*(ulonglong *)(param_1 + 0x10) !=
        (ulonglong)
        (uint)(*(int *)(**(longlong **)(param_1 + 8) + 0x214) +
              *(int *)(**(longlong **)(param_1 + 8) + 0x218))) goto LAB_1482f71c6;
  }
  uVar2 = (ulonglong)(param_4 * param_4) & -(ulonglong)(param_4 < 1.79769313486232e+308);
  *param_3 = ~-(ulonglong)(param_4 < 1.79769313486232e+308) & 0x7fefffffffffffff | uVar2;
  local_28 = &local_14;
  local_14 = 0xffffffff;
  local_20 = param_5;
  FUN_1482f9c7a(uVar2,*(undefined4 *)(param_1 + 0xcc),param_2);
  uVar1 = local_14;
LAB_1482f71c6:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482f71e4 FUN_1482f71e4 body=101 status=ok
// SIG undefined FUN_1482f71e4(void)

undefined8 FUN_1482f71e4(longlong param_1,undefined8 param_2,double *param_3)

{
  int iVar1;
  undefined8 uVar2;
  double dVar3;
  
  iVar1 = *(int *)(param_1 + 0xcc);
  if ((iVar1 < 0) || (*(char *)(param_3 + 10) != '\0')) {
    if (iVar1 < 0) {
      return 0;
    }
  }
  else {
    if (*(ulonglong *)(param_1 + 0x10) !=
        (ulonglong)
        (uint)(*(int *)(**(longlong **)(param_1 + 8) + 0x214) +
              *(int *)(**(longlong **)(param_1 + 8) + 0x218))) {
      return 0;
    }
    iVar1 = *(int *)(param_1 + 0xcc);
  }
  dVar3 = *param_3;
  if (3.4028234663852886e+38 <= dVar3) {
    dVar3 = 3.4028234663852886e+38;
  }
  uVar2 = FUN_1482f9fac(param_1,iVar1,param_2,dVar3,param_3);
  return uVar2;
}



// FUNCTION 1482f724a FUN_1482f724a body=316 status=ok
// SIG undefined FUN_1482f724a(void)

undefined8 *
FUN_1482f724a(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             double *param_5,double *param_6,undefined8 param_7)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  double *local_58;
  undefined8 *local_50;
  double *local_48;
  undefined8 local_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(int *)(param_1 + 0xcc) < 0) || (*(char *)(param_6 + 10) != '\0')) {
    if (*(int *)(param_1 + 0xcc) < 0) goto LAB_1482f734a;
  }
  else if (*(ulonglong *)(param_1 + 0x10) !=
           (ulonglong)
           (uint)(*(int *)(**(longlong **)(param_1 + 8) + 0x214) +
                 *(int *)(**(longlong **)(param_1 + 8) + 0x218))) {
LAB_1482f734a:
    *param_2 = 0xffffffffffffffff;
    goto LAB_1482f7351;
  }
  local_38 = 1.79769313486232e+308;
  dVar1 = *param_6;
  dVar2 = 1.79769313486232e+308;
  if (dVar1 < 1.79769313486232e+308) {
    dVar1 = dVar1 * dVar1;
    local_38 = dVar1;
  }
  *param_2 = 0xffffffffffffffff;
  local_68 = *(undefined4 *)(param_3 + 0xcc);
  local_40 = param_7;
  local_48 = param_6;
  local_58 = &local_38;
  local_60 = 0;
  local_50 = param_2;
  FUN_1482fa426(dVar1,*(undefined4 *)(param_1 + 0xcc));
  if (local_38 < 1.79769313486232e+308) {
    if (local_38 < 0.0) {
      dVar2 = sqrt(local_38);
    }
    else {
      dVar2 = SQRT(local_38);
    }
  }
  *param_5 = dVar2;
LAB_1482f7351:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482f7388 FUN_1482f7388 body=422 status=ok
// SIG undefined FUN_1482f7388(void)

void FUN_1482f7388(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  longlong lVar6;
  char cVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  undefined4 local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar8 = *(uint *)((longlong)param_1 + 0xcc);
  if (((int)uVar8 < 0) || (*(char *)(param_3 + 0x50) != '\0')) {
    if ((int)uVar8 < 0) goto LAB_1482f74f1;
  }
  else {
    if (param_1[2] !=
        (ulonglong)
        (uint)(*(int *)(*(longlong *)param_1[1] + 0x214) + *(int *)(*(longlong *)param_1[1] + 0x218)
              )) goto LAB_1482f74f1;
    uVar8 = *(uint *)((longlong)param_1 + 0xcc);
  }
  lVar3 = *(longlong *)(param_1[0x11] + (ulonglong)(uVar8 >> 9) * 8);
  lVar6 = (ulonglong)((uVar8 & 0x1ff) << 3) * 3;
  lVar4 = *(longlong *)(param_1[0x14] + (ulonglong)(uVar8 >> 9) * 8);
  local_80 = *(double *)(lVar3 + 0x10 + lVar6);
  dVar1 = *(double *)(lVar4 + 0x10 + lVar6);
  local_98 = local_80 - dVar1;
  local_88 = *(double *)(lVar3 + 8 + lVar6);
  dVar2 = *(double *)(lVar4 + 8 + lVar6);
  local_a0 = local_88 - dVar2;
  local_a8 = *(double *)(lVar3 + lVar6) - *(double *)(lVar4 + lVar6);
  local_80 = local_80 + dVar1;
  local_88 = local_88 + dVar2;
  local_90 = *(double *)(lVar3 + lVar6) + *(double *)(lVar4 + lVar6);
  local_74 = 0;
  pcVar5 = (code *)*param_2;
  plVar10 = param_2 + 4;
  if ((longlong *)param_2[2] != (longlong *)0x0) {
    plVar10 = (longlong *)param_2[2];
  }
  uVar9 = (**(code **)(*plVar10 + 8))();
  cVar7 = (*pcVar5)(uVar9,&local_a8,&local_74);
  if (cVar7 != '\0') {
    local_b8 = param_3;
    (**(code **)(*param_1 + 0x80))(param_1,*(undefined4 *)((longlong)param_1 + 0xcc),0,param_2);
  }
LAB_1482f74f1:
  if ((local_70 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482f7530 FUN_1482f7530 body=1281 status=ok
// SIG undefined FUN_1482f7530(void)

void FUN_1482f7530(longlong *param_1,ulonglong param_2,int param_3,undefined8 *param_4,
                  longlong param_5)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint uVar11;
  uint uVar12;
  code *pcVar13;
  uint uVar14;
  int iVar15;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  undefined8 *local_c8;
  uint local_bc;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  uint local_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_84 = (uint)param_2;
  uVar14 = *(uint *)(*(longlong *)(param_1[0xe] + (param_2 >> 9 & 0x7fffff) * 8) +
                    (ulonglong)(local_84 & 0x1ff) * 4);
  if ((int)uVar14 < (int)param_1[0x19]) {
    local_b8 = (double)CONCAT44(local_b8._4_4_,param_3);
    pcVar13 = (code *)param_4[8];
    plVar10 = param_4 + 0xc;
    if ((longlong *)param_4[10] != (longlong *)0x0) {
      plVar10 = (longlong *)param_4[10];
    }
    local_c8 = param_4;
    local_bc = local_84;
    uVar8 = (**(code **)(*plVar10 + 8))();
    (*pcVar13)(uVar8,&local_84,&local_b8);
    iVar15 = *(int *)(*(longlong *)(param_1[0x17] + (ulonglong)(uVar14 >> 9) * 8) +
                     (ulonglong)(uVar14 & 0x1ff) * 4);
    if (0 < iVar15) {
      plVar10 = local_c8 + 0x14;
      do {
        uVar14 = uVar14 + 1;
        uVar3 = *(undefined4 *)
                 (*(longlong *)(param_1[0x17] + (ulonglong)(uVar14 >> 9) * 8) +
                 (ulonglong)(uVar14 & 0x1ff) * 4);
        pcVar13 = *(code **)(param_5 + 0x10);
        if (pcVar13 == (code *)0x0) {
LAB_1482f7672:
          local_b8 = (double)CONCAT44(local_b8._4_4_,uVar3);
          pcVar13 = (code *)local_c8[0x10];
          plVar9 = (longlong *)local_c8[0x12];
          if ((longlong *)local_c8[0x12] == (longlong *)0x0) {
            plVar9 = plVar10;
          }
          uVar8 = (**(code **)(*plVar9 + 8))();
          (*pcVar13)(uVar8,&local_b8);
        }
        else {
          local_b8 = (double)CONCAT44(local_b8._4_4_,uVar3);
          plVar9 = *(longlong **)(param_5 + 0x20);
          if (*(longlong **)(param_5 + 0x20) == (longlong *)0x0) {
            plVar9 = (longlong *)(param_5 + 0x30);
          }
          uVar8 = (**(code **)(*plVar9 + 8))();
          cVar7 = (*pcVar13)(uVar8,&local_b8);
          if (cVar7 != '\0') goto LAB_1482f7672;
        }
        iVar15 = iVar15 + -1;
      } while (iVar15 != 0);
    }
    local_b8 = (double)CONCAT44(local_b8._4_4_,local_bc);
    pcVar13 = (code *)local_c8[0x18];
    plVar10 = local_c8 + 0x1c;
    if ((longlong *)local_c8[0x1a] != (longlong *)0x0) {
      plVar10 = (longlong *)local_c8[0x1a];
    }
    uVar8 = (**(code **)(*plVar10 + 8))();
    (*pcVar13)(uVar8,&local_b8);
  }
  else {
    uVar12 = *(uint *)(*(longlong *)(param_1[0x17] + (ulonglong)(uVar14 >> 9) * 8) +
                      (ulonglong)(uVar14 & 0x1ff) * 4);
    uVar11 = param_3 + 1;
    local_84 = uVar11;
    if ((int)uVar12 < 0) {
      uVar12 = ~uVar12;
      lVar4 = *(longlong *)(param_1[0x11] + (ulonglong)(uVar12 >> 9) * 8);
      lVar6 = (ulonglong)((uVar12 & 0x1ff) << 3) * 3;
      lVar5 = *(longlong *)(param_1[0x14] + (ulonglong)(uVar12 >> 9) * 8);
      local_90 = *(double *)(lVar4 + 0x10 + lVar6);
      dVar1 = *(double *)(lVar5 + 0x10 + lVar6);
      local_a8 = local_90 - dVar1;
      local_98 = *(double *)(lVar4 + 8 + lVar6);
      dVar2 = *(double *)(lVar5 + 8 + lVar6);
      local_b0 = local_98 - dVar2;
      local_b8 = *(double *)(lVar4 + lVar6) - *(double *)(lVar5 + lVar6);
      local_90 = local_90 + dVar1;
      local_98 = local_98 + dVar2;
      local_a0 = *(double *)(lVar4 + lVar6) + *(double *)(lVar5 + lVar6);
      pcVar13 = (code *)*param_4;
      plVar10 = param_4 + 4;
      if ((longlong *)param_4[2] != (longlong *)0x0) {
        plVar10 = (longlong *)param_4[2];
      }
      uVar8 = (**(code **)(*plVar10 + 8))();
    }
    else {
      uVar12 = uVar12 - 1;
      lVar4 = *(longlong *)(param_1[0x11] + (ulonglong)(uVar12 >> 9) * 8);
      lVar6 = (ulonglong)((uVar12 & 0x1ff) << 3) * 3;
      lVar5 = *(longlong *)(param_1[0x14] + (ulonglong)(uVar12 >> 9) * 8);
      local_90 = *(double *)(lVar4 + 0x10 + lVar6);
      dVar1 = *(double *)(lVar5 + 0x10 + lVar6);
      local_a8 = local_90 - dVar1;
      local_98 = *(double *)(lVar4 + 8 + lVar6);
      dVar2 = *(double *)(lVar5 + 8 + lVar6);
      local_b0 = local_98 - dVar2;
      local_b8 = *(double *)(lVar4 + lVar6) - *(double *)(lVar5 + lVar6);
      local_90 = local_90 + dVar1;
      local_98 = local_98 + dVar2;
      local_a0 = *(double *)(lVar4 + lVar6) + *(double *)(lVar5 + lVar6);
      pcVar13 = (code *)*param_4;
      plVar10 = (longlong *)param_4[2];
      if ((longlong *)param_4[2] == (longlong *)0x0) {
        plVar10 = param_4 + 4;
      }
      uVar8 = (**(code **)(*plVar10 + 8))();
      cVar7 = (*pcVar13)(uVar8,&local_b8,&local_84);
      if (cVar7 != '\0') {
        local_d8 = param_5;
        (**(code **)(*param_1 + 0x80))(param_1,uVar12,uVar11,param_4);
      }
      uVar12 = *(int *)(*(longlong *)(param_1[0x17] + (ulonglong)(uVar14 + 1 >> 9) * 8) +
                       (ulonglong)(uVar14 + 1 & 0x1ff) * 4) - 1;
      lVar4 = *(longlong *)(param_1[0x11] + (ulonglong)(uVar12 >> 9) * 8);
      lVar6 = (ulonglong)((uVar12 & 0x1ff) << 3) * 3;
      lVar5 = *(longlong *)(param_1[0x14] + (ulonglong)(uVar12 >> 9) * 8);
      local_90 = *(double *)(lVar4 + 0x10 + lVar6);
      dVar1 = *(double *)(lVar5 + 0x10 + lVar6);
      local_a8 = local_90 - dVar1;
      local_98 = *(double *)(lVar4 + 8 + lVar6);
      dVar2 = *(double *)(lVar5 + 8 + lVar6);
      local_b0 = local_98 - dVar2;
      local_b8 = *(double *)(lVar4 + lVar6) - *(double *)(lVar5 + lVar6);
      local_90 = local_90 + dVar1;
      local_98 = local_98 + dVar2;
      local_a0 = *(double *)(lVar4 + lVar6) + *(double *)(lVar5 + lVar6);
      pcVar13 = (code *)*param_4;
      plVar10 = param_4 + 4;
      if ((longlong *)param_4[2] != (longlong *)0x0) {
        plVar10 = (longlong *)param_4[2];
      }
      local_84 = uVar11;
      uVar8 = (**(code **)(*plVar10 + 8))(plVar10);
    }
    cVar7 = (*pcVar13)(uVar8,&local_b8,&local_84);
    if (cVar7 != '\0') {
      local_d8 = param_5;
      (**(code **)(*param_1 + 0x80))(param_1,uVar12,uVar11,param_4);
    }
  }
  if ((local_80 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482f7a32 FUN_1482f7a32 body=212 status=ok
// SIG undefined FUN_1482f7a32(void)

bool FUN_1482f7a32(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  bool bVar2;
  undefined1 auStack_a8 [32];
  undefined1 **local_88;
  longlong local_80;
  undefined1 local_69;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 local_58 [48];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(int *)(param_1 + 0xcc) < 0) || (*(char *)(param_3 + 0x50) != '\0')) {
    if (*(int *)(param_1 + 0xcc) < 0) goto LAB_1482f7ade;
  }
  else if (*(ulonglong *)(param_1 + 0x10) !=
           (ulonglong)
           (uint)(*(int *)(**(longlong **)(param_1 + 8) + 0x214) +
                 *(int *)(**(longlong **)(param_1 + 8) + 0x218))) {
LAB_1482f7ade:
    bVar2 = false;
    goto LAB_1482f7ae0;
  }
  FUN_146bda344(local_58,param_2,param_2 + 0x18,param_2 + 0x30);
  local_60 = &local_69;
  local_88 = &local_68;
  local_68 = &LAB_1482fb608;
  local_80 = param_3;
  iVar1 = FUN_1482fb20a(param_1,*(undefined4 *)(param_1 + 0xcc),param_2,local_58);
  bVar2 = -1 < iVar1;
LAB_1482f7ae0:
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482f7b08 FUN_1482f7b08 body=195 status=ok
// SIG undefined FUN_1482f7b08(void)

undefined8
FUN_1482f7b08(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  undefined1 **local_48;
  longlong local_40;
  undefined8 local_38;
  longlong local_28;
  undefined1 *local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = *(int *)(param_1 + 0xcc);
  if ((iVar1 < 0) || (*(char *)(param_4 + 0x50) != '\0')) {
    if (iVar1 < 0) goto LAB_1482f7b5d;
  }
  else {
    if (*(ulonglong *)(param_1 + 0x10) !=
        (ulonglong)
        (uint)(*(int *)(**(longlong **)(param_1 + 8) + 0x214) +
              *(int *)(**(longlong **)(param_1 + 8) + 0x218))) {
LAB_1482f7b5d:
      uVar2 = 0;
      goto LAB_1482f7b5f;
    }
    iVar1 = *(int *)(param_1 + 0xcc);
  }
  local_18 = &local_28;
  local_48 = &local_20;
  local_20 = &LAB_1482fc074;
  local_58 = *(undefined4 *)(param_2 + 0xcc);
  local_38 = param_5;
  local_50 = 0;
  local_40 = param_4;
  local_28 = param_1;
  uVar2 = FUN_1482fb61c(param_1,iVar1,param_2,param_3);
LAB_1482f7b5f:
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482f7bcc FUN_1482f7bcc body=1031 status=ok
// SIG undefined FUN_1482f7bcc(void)

uint FUN_1482f7bcc(longlong *param_1,longlong *param_2,double *param_3,longlong *param_4,
                  longlong param_5)

{
  longlong *plVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  longlong lVar8;
  longlong lVar9;
  char cVar10;
  uint uVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong *plVar14;
  ulonglong uVar15;
  uint uVar16;
  undefined1 auStack_158 [44];
  uint local_12c;
  longlong *local_128;
  uint local_11c;
  longlong *local_118;
  longlong *local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  longlong *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_128 = param_2;
  if ((*(int *)((longlong)param_1 + 0xcc) < 0) || (*(char *)(param_5 + 0x50) != '\0')) {
    if (-1 < *(int *)((longlong)param_1 + 0xcc)) goto LAB_1482f7c3f;
  }
  else if (param_1[2] ==
           (ulonglong)
           (uint)(*(int *)(*(longlong *)param_1[1] + 0x214) +
                 *(int *)(*(longlong *)param_1[1] + 0x218))) {
LAB_1482f7c3f:
    if (((*param_3 < param_3[3] || *param_3 == param_3[3]) &&
        (param_3[1] < param_3[4] || param_3[1] == param_3[4])) &&
       (param_3[2] < param_3[5] || param_3[2] == param_3[5])) {
      if (*param_4 != 0) {
        local_78 = 0;
        local_68 = &PTR_LAB_14ae72cc0;
        local_88 = FUN_1482fc088;
        local_60 = param_4;
        FUN_146bda188(&local_d8,param_3);
        *(undefined4 *)param_3 = (undefined4)local_d8;
        *(undefined4 *)((longlong)param_3 + 4) = local_d8._4_4_;
        *(undefined4 *)(param_3 + 1) = (undefined4)uStack_d0;
        *(undefined4 *)((longlong)param_3 + 0xc) = uStack_d0._4_4_;
        *(undefined4 *)(param_3 + 2) = (undefined4)local_c8;
        *(undefined4 *)((longlong)param_3 + 0x14) = local_c8._4_4_;
        *(undefined4 *)(param_3 + 3) = (undefined4)uStack_c0;
        *(undefined4 *)((longlong)param_3 + 0x1c) = uStack_c0._4_4_;
        *(undefined4 *)(param_3 + 4) = (undefined4)uStack_b8;
        *(undefined4 *)((longlong)param_3 + 0x24) = uStack_b8._4_4_;
        *(undefined4 *)(param_3 + 5) = (undefined4)uStack_b0;
        *(undefined4 *)((longlong)param_3 + 0x2c) = uStack_b0._4_4_;
      }
      cVar10 = FUN_1482fb548(param_1,*(undefined4 *)((longlong)param_1 + 0xcc),param_3);
      if (cVar10 == '\0') goto LAB_1482f7c34;
    }
    local_11c = *(int *)(*local_128 + 0x140) * 0x200 + *(int *)(*local_128 + 0x144);
    uVar16 = 0;
    if ((int)local_11c < 1) {
      local_12c = 0;
      uVar11 = local_12c;
    }
    else {
      plVar1 = param_4 + 4;
      local_12c = (uint)CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
      local_118 = param_1;
      local_110 = plVar1;
      do {
        plVar14 = local_128;
        pcVar7 = (code *)*param_4;
        lVar8 = *local_128;
        puVar2 = (uint *)(*(longlong *)(*(longlong *)(lVar8 + 0x130) + (ulonglong)(uVar16 >> 9) * 8)
                         + (ulonglong)(uVar16 & 0x1ff) * 0xc);
        uVar11 = *puVar2;
        if (pcVar7 == (code *)0x0) {
          lVar9 = *(longlong *)(*(longlong *)(lVar8 + 0x10) + (ulonglong)(uVar11 >> 9) * 8);
          local_c8 = *(undefined8 *)(lVar9 + 0x10 + (ulonglong)(uVar11 & 0x1ff) * 0x18);
          puVar4 = (undefined8 *)(lVar9 + (ulonglong)(uVar11 & 0x1ff) * 0x18);
          local_d8 = *puVar4;
          uStack_d0 = puVar4[1];
          lVar9 = *(longlong *)(*(longlong *)(lVar8 + 0x10) + (ulonglong)(puVar2[1] >> 9) * 8);
          uVar15 = (ulonglong)puVar2[1] & 0x1ff;
          uStack_b0 = *(undefined8 *)(lVar9 + 0x10 + uVar15 * 0x18);
          puVar4 = (undefined8 *)(lVar9 + uVar15 * 0x18);
          uStack_c0 = *puVar4;
          uStack_b8 = puVar4[1];
          lVar8 = *(longlong *)(*(longlong *)(lVar8 + 0x10) + (ulonglong)(puVar2[2] >> 9) * 8);
          uVar15 = (ulonglong)puVar2[2] & 0x1ff;
          local_98 = *(undefined8 *)(lVar8 + 0x10 + uVar15 * 0x18);
          puVar3 = (undefined4 *)(lVar8 + uVar15 * 0x18);
          local_a8 = *puVar3;
          uStack_a4 = puVar3[1];
          uStack_a0 = puVar3[2];
          uStack_9c = puVar3[3];
        }
        else {
          uVar5 = puVar2[1];
          uVar6 = puVar2[2];
          lVar8 = *(longlong *)(*(longlong *)(lVar8 + 0x10) + (ulonglong)(uVar11 >> 9) * 8);
          local_f8 = *(undefined8 *)(lVar8 + 0x10 + ((ulonglong)uVar11 & 0x1ff) * 0x18);
          puVar3 = (undefined4 *)(lVar8 + ((ulonglong)uVar11 & 0x1ff) * 0x18);
          local_108 = *puVar3;
          uStack_104 = puVar3[1];
          uStack_100 = puVar3[2];
          uStack_fc = puVar3[3];
          plVar13 = (longlong *)param_4[2];
          if ((longlong *)param_4[2] == (longlong *)0x0) {
            plVar13 = plVar1;
          }
          uVar12 = (**(code **)(*plVar13 + 8))();
          (*pcVar7)(&local_f0,uVar12,&local_108);
          local_c8 = local_e0;
          local_d8 = CONCAT44(uStack_ec,local_f0);
          uStack_d0 = CONCAT44(uStack_e4,uStack_e8);
          lVar8 = *(longlong *)(*(longlong *)(*plVar14 + 0x10) + (ulonglong)(uVar5 >> 9) * 8);
          uVar15 = (ulonglong)uVar5 & 0x1ff;
          local_f8 = *(undefined8 *)(lVar8 + 0x10 + uVar15 * 0x18);
          puVar3 = (undefined4 *)(lVar8 + uVar15 * 0x18);
          local_108 = *puVar3;
          uStack_104 = puVar3[1];
          uStack_100 = puVar3[2];
          uStack_fc = puVar3[3];
          pcVar7 = (code *)*param_4;
          plVar13 = (longlong *)param_4[2];
          if ((longlong *)param_4[2] == (longlong *)0x0) {
            plVar13 = plVar1;
          }
          uVar12 = (**(code **)(*plVar13 + 8))();
          (*pcVar7)(&local_f0,uVar12,&local_108);
          param_1 = local_118;
          uStack_b0 = local_e0;
          uStack_c0 = CONCAT44(uStack_ec,local_f0);
          uStack_b8 = CONCAT44(uStack_e4,uStack_e8);
          lVar8 = *(longlong *)(*(longlong *)(*plVar14 + 0x10) + (ulonglong)(uVar6 >> 9) * 8);
          uVar15 = (ulonglong)uVar6 & 0x1ff;
          local_f8 = *(undefined8 *)(lVar8 + 0x10 + uVar15 * 0x18);
          puVar3 = (undefined4 *)(lVar8 + uVar15 * 0x18);
          local_108 = *puVar3;
          uStack_104 = puVar3[1];
          uStack_100 = puVar3[2];
          uStack_fc = puVar3[3];
          pcVar7 = (code *)*param_4;
          plVar14 = (longlong *)param_4[2];
          if ((longlong *)param_4[2] == (longlong *)0x0) {
            plVar14 = plVar1;
          }
          uVar12 = (**(code **)(*plVar14 + 8))();
          (*pcVar7)(&local_f0,uVar12,&local_108);
          local_98 = local_e0;
          local_a8 = local_f0;
          uStack_a4 = uStack_ec;
          uStack_a0 = uStack_e8;
          uStack_9c = uStack_e4;
        }
        uVar12 = (**(code **)(*param_1 + 0x88))(param_1,&local_d8,param_5);
        uVar11 = local_12c;
        if ((char)uVar12 != '\0') break;
        uVar16 = uVar16 + 1;
        local_12c = (uint)CONCAT71((int7)((ulonglong)uVar12 >> 8),(int)uVar16 < (int)local_11c);
        uVar11 = local_12c;
      } while (uVar16 != local_11c);
    }
    goto LAB_1482f7f22;
  }
LAB_1482f7c34:
  uVar11 = 0;
LAB_1482f7f22:
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11 & 0xffffff01;
}



// FUNCTION 1482f7fd4 FUN_1482f7fd4 body=570 status=ok
// SIG undefined FUN_1482f7fd4(void)

undefined8 *
FUN_1482f7fd4(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             longlong param_5,undefined8 param_6,longlong *param_7)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined8 *local_e8;
  code **local_e0;
  longlong local_d8;
  undefined8 local_d0;
  code *local_c8;
  longlong *local_c0;
  longlong local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  longlong lStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  undefined8 uStack_70;
  longlong *local_68;
  undefined8 uStack_60;
  longlong local_58;
  longlong lStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*param_7 == 0) {
    local_b8 = *param_7;
    uStack_70 = param_7[1];
    local_a8 = (longlong *)param_7[2];
    uStack_60 = param_7[3];
    local_58 = param_7[4];
    lStack_50 = param_7[5];
    local_48 = param_7[6];
    uStack_40 = param_7[7];
    lVar4 = local_48;
    lVar5 = uStack_40;
    local_68 = local_a8;
    lVar3 = uStack_60;
    local_78 = local_b8;
    lVar2 = uStack_70;
    param_7[6] = CONCAT44(uStack_84,local_88);
    param_7[7] = CONCAT44(uStack_7c,uStack_80);
    param_7[4] = (longlong)&PTR_LAB_149f3aaa0;
    param_7[5] = (longlong)FUN_1482fcb9a;
    param_7[2] = 0;
    param_7[3] = CONCAT44(uStack_9c,uStack_a0);
    *param_7 = (longlong)&LAB_146bddb20;
    param_7[1] = CONCAT44(uStack_ac,uStack_b0);
    uStack_b0 = (undefined4)uStack_70;
    uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
    uStack_ac = uStack_70._4_4_;
    uStack_a0 = (undefined4)uStack_60;
    uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
    uStack_9c = uStack_60._4_4_;
    local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
    uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
    local_88 = (undefined4)local_48;
    uStack_84 = local_48._4_4_;
    uStack_80 = (undefined4)uStack_40;
    uStack_7c = uStack_40._4_4_;
    local_98 = local_58;
    lStack_90 = lStack_50;
    uStack_70 = lVar2;
    uStack_60 = lVar3;
    local_48 = lVar4;
    uStack_40 = lVar5;
    if (local_b8 != 0) {
      plVar6 = local_a8;
      if (local_a8 == (longlong *)0x0) {
        plVar6 = &local_98;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  iVar1 = *(int *)(param_1 + 0xcc);
  if ((iVar1 < 0) || (*(char *)(param_5 + 0x50) != '\0')) {
    if (iVar1 < 0) goto LAB_1482f806b;
  }
  else {
    if (*(ulonglong *)(param_1 + 0x10) !=
        (ulonglong)
        (uint)(*(int *)(**(longlong **)(param_1 + 8) + 0x214) +
              *(int *)(**(longlong **)(param_1 + 8) + 0x218))) goto LAB_1482f806b;
    iVar1 = *(int *)(param_1 + 0xcc);
  }
  local_e0 = &local_c8;
  local_c0 = param_7;
  local_c8 = FUN_146bddd1c;
  local_f8 = *(undefined4 *)(param_3 + 0xcc);
  local_d0 = param_6;
  local_d8 = param_5;
  local_f0 = 0;
  local_e8 = param_2;
  FUN_1482fc10e(param_1,iVar1,param_3,param_4);
LAB_1482f806b:
  if (*param_7 != 0) {
    plVar6 = param_7 + 4;
    if ((longlong *)param_7[2] != (longlong *)0x0) {
      plVar6 = (longlong *)param_7[2];
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  if ((local_30 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482f8210 FUN_1482f8210 body=475 status=ok
// SIG undefined FUN_1482f8210(void)

undefined8 *
FUN_1482f8210(longlong param_1,undefined8 *param_2,undefined4 param_3,longlong param_4,
             longlong *param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  code *local_c8;
  longlong *local_c0;
  longlong local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  longlong lStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  undefined8 uStack_70;
  longlong *local_68;
  undefined8 uStack_60;
  longlong local_58;
  longlong lStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*param_5 == 0) {
    local_b8 = *param_5;
    uStack_70 = param_5[1];
    local_a8 = (longlong *)param_5[2];
    uStack_60 = param_5[3];
    local_58 = param_5[4];
    lStack_50 = param_5[5];
    local_48 = param_5[6];
    uStack_40 = param_5[7];
    lVar3 = local_48;
    lVar4 = uStack_40;
    local_68 = local_a8;
    lVar2 = uStack_60;
    local_78 = local_b8;
    lVar1 = uStack_70;
    param_5[6] = CONCAT44(uStack_84,local_88);
    param_5[7] = CONCAT44(uStack_7c,uStack_80);
    param_5[4] = (longlong)&PTR_LAB_149f3aaa0;
    param_5[5] = (longlong)FUN_1482fd1e6;
    param_5[2] = 0;
    param_5[3] = CONCAT44(uStack_9c,uStack_a0);
    *param_5 = (longlong)&LAB_146bddb20;
    param_5[1] = CONCAT44(uStack_ac,uStack_b0);
    uStack_b0 = (undefined4)uStack_70;
    uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
    uStack_ac = uStack_70._4_4_;
    uStack_a0 = (undefined4)uStack_60;
    uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
    uStack_9c = uStack_60._4_4_;
    local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
    uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
    local_88 = (undefined4)local_48;
    uStack_84 = local_48._4_4_;
    uStack_80 = (undefined4)uStack_40;
    uStack_7c = uStack_40._4_4_;
    local_98 = local_58;
    lStack_90 = lStack_50;
    uStack_70 = lVar1;
    uStack_60 = lVar2;
    local_48 = lVar3;
    uStack_40 = lVar4;
    if (local_b8 != 0) {
      plVar5 = local_a8;
      if (local_a8 == (longlong *)0x0) {
        plVar5 = &local_98;
      }
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  if ((*(int *)(param_1 + 0xcc) < 0) || (*(char *)(param_4 + 0x50) != '\0')) {
    if (*(int *)(param_1 + 0xcc) < 0) goto LAB_1482f82b6;
  }
  else if (*(ulonglong *)(param_1 + 0x10) !=
           (ulonglong)
           (uint)(*(int *)(**(longlong **)(param_1 + 8) + 0x214) +
                 *(int *)(**(longlong **)(param_1 + 8) + 0x218))) goto LAB_1482f82b6;
  local_c0 = param_5;
  local_c8 = FUN_146bddd1c;
  local_d8 = param_4;
  FUN_1482fd07a(param_1,param_2,param_3);
LAB_1482f82b6:
  if (*param_5 != 0) {
    plVar5 = param_5 + 4;
    if ((longlong *)param_5[2] != (longlong *)0x0) {
      plVar5 = (longlong *)param_5[2];
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482f83ec FUN_1482f83ec body=142 status=ok
// SIG undefined FUN_1482f83ec(void)

undefined8 FUN_1482f83ec(longlong param_1,undefined4 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined1 local_19;
  code *local_18;
  undefined1 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(int *)(param_1 + 0xcc) < 0) || (*(char *)(param_3 + 0x50) != '\0')) {
    if (*(int *)(param_1 + 0xcc) < 0) goto LAB_1482f845d;
  }
  else if (*(ulonglong *)(param_1 + 0x10) !=
           (ulonglong)
           (uint)(*(int *)(**(longlong **)(param_1 + 8) + 0x214) +
                 *(int *)(**(longlong **)(param_1 + 8) + 0x218))) {
LAB_1482f845d:
    uVar1 = 0;
    goto LAB_1482f845f;
  }
  local_10 = &local_19;
  local_18 = FUN_1482fdce6;
  local_28 = param_3;
  uVar1 = FUN_1482fd07a(param_1,0,param_2);
LAB_1482f845f:
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482f847c FUN_1482f847c body=660 status=ok
// SIG undefined FUN_1482f847c(void)

void FUN_1482f847c(longlong param_1,uint param_2,undefined8 param_3,double *param_4,
                  undefined4 *param_5,longlong param_6)

{
  undefined4 uVar1;
  code *pcVar2;
  double *pdVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_b8 [32];
  undefined4 *local_98;
  longlong local_90;
  double *local_88;
  undefined8 local_80;
  undefined4 local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar9 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                   (ulonglong)(param_2 & 0x1ff) * 4);
  local_88 = param_4;
  local_80 = param_3;
  while (uVar5 = local_80, *(int *)(param_1 + 200) <= (int)uVar9) {
    uVar7 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar9 >> 9) * 8) +
                     (ulonglong)(uVar9 & 0x1ff) * 4);
    if ((int)uVar7 < 0) {
      dVar10 = (double)FUN_1482f881e(param_1,~uVar7,local_80);
      uVar7 = ~uVar7;
      if (*local_88 < dVar10) goto LAB_1482f86df;
    }
    else {
      uVar7 = uVar7 - 1;
      uVar9 = *(int *)(*(longlong *)
                        (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar9 + 1 >> 9) * 8) +
                      (ulonglong)(uVar9 + 1 & 0x1ff) * 4) - 1;
      dVar10 = (double)FUN_1482f881e(param_1,uVar7,local_80);
      dVar11 = (double)FUN_1482f881e(param_1,uVar9,uVar5);
      pdVar3 = local_88;
      if (dVar11 <= dVar10) {
        if (*local_88 <= dVar11) goto LAB_1482f86df;
        local_90 = param_6;
        local_98 = param_5;
        FUN_1482f847c(param_1,uVar9,local_80,local_88);
        if (*pdVar3 <= dVar10) goto LAB_1482f86df;
      }
      else {
        if (*local_88 <= dVar10) goto LAB_1482f86df;
        local_90 = param_6;
        local_98 = param_5;
        FUN_1482f847c(param_1,uVar7,local_80,local_88);
        uVar7 = uVar9;
        if (*pdVar3 <= dVar11) goto LAB_1482f86df;
      }
    }
    uVar9 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(uVar7 >> 9) * 8) +
                     (ulonglong)(uVar7 & 0x1ff) * 4);
  }
  iVar8 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar9 >> 9) * 8) +
                  (ulonglong)(uVar9 & 0x1ff) * 4);
  if (0 < iVar8) {
    do {
      uVar9 = uVar9 + 1;
      uVar1 = *(undefined4 *)
               (*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar9 >> 9) * 8) +
               (ulonglong)(uVar9 & 0x1ff) * 4);
      pcVar2 = *(code **)(param_6 + 0x10);
      if (pcVar2 == (code *)0x0) {
LAB_1482f86ab:
        dVar10 = (double)FUN_1482f8712(*(undefined8 *)(param_1 + 8),uVar1,local_80);
        if (dVar10 < *local_88) {
          *local_88 = dVar10;
          *param_5 = uVar1;
        }
      }
      else {
        plVar6 = *(longlong **)(param_6 + 0x20);
        if (*(longlong **)(param_6 + 0x20) == (longlong *)0x0) {
          plVar6 = (longlong *)(param_6 + 0x30);
        }
        local_74 = uVar1;
        uVar5 = (**(code **)(*plVar6 + 8))();
        cVar4 = (*pcVar2)(uVar5,&local_74);
        if (cVar4 != '\0') goto LAB_1482f86ab;
      }
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
LAB_1482f86df:
  if ((local_70 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1482f8712 FUN_1482f8712 body=267 status=ok
// SIG undefined FUN_1482f8712(void)

void FUN_1482f8712(longlong *param_1,uint param_2,undefined4 *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 local_e0 [15];
  undefined8 local_68 [4];
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar5 = *(longlong *)(*param_1 + 0x10);
  lVar2 = *(longlong *)(*(longlong *)(*param_1 + 0x130) + (ulonglong)(param_2 >> 9) * 8);
  uVar4 = (ulonglong)(param_2 & 0x1ff);
  uVar1 = *(uint *)(lVar2 + uVar4 * 0xc);
  lVar3 = *(longlong *)(lVar5 + (ulonglong)(uVar1 >> 9) * 8);
  uVar8 = (ulonglong)uVar1 & 0x1ff;
  local_68[2] = *(undefined8 *)(lVar3 + 0x10 + uVar8 * 0x18);
  puVar6 = (undefined8 *)(lVar3 + uVar8 * 0x18);
  local_68[0] = *puVar6;
  local_68[1] = puVar6[1];
  uVar1 = *(uint *)(lVar2 + 4 + uVar4 * 0xc);
  lVar3 = *(longlong *)(lVar5 + (ulonglong)(uVar1 >> 9) * 8);
  uVar8 = (ulonglong)uVar1 & 0x1ff;
  local_40 = *(undefined8 *)(lVar3 + 0x10 + uVar8 * 0x18);
  puVar6 = (undefined8 *)(lVar3 + uVar8 * 0x18);
  local_68[3] = *puVar6;
  uStack_48 = puVar6[1];
  uVar1 = *(uint *)(lVar2 + 8 + uVar4 * 0xc);
  lVar5 = *(longlong *)(lVar5 + (ulonglong)(uVar1 >> 9) * 8);
  uVar4 = (ulonglong)uVar1 & 0x1ff;
  local_28 = *(undefined8 *)(lVar5 + 0x10 + uVar4 * 0x18);
  puVar6 = (undefined8 *)(lVar5 + uVar4 * 0x18);
  local_38 = *puVar6;
  uStack_30 = puVar6[1];
  local_e8 = *(undefined8 *)(param_3 + 4);
  local_f8 = *param_3;
  uStack_f4 = param_3[1];
  uStack_f0 = param_3[2];
  uStack_ec = param_3[3];
  puVar6 = local_68;
  puVar7 = local_e0;
  for (lVar5 = 9; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  FUN_146bd2a7a(&local_f8);
  if ((local_18 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482f881e FUN_1482f881e body=150 status=ok
// SIG undefined FUN_1482f881e(void)

double FUN_1482f881e(longlong param_1,uint param_2,double *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x88) + (ulonglong)(param_2 >> 9) * 8);
  lVar3 = (ulonglong)((param_2 & 0x1ff) << 3) * 3;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)(param_2 >> 9) * 8);
  dVar5 = ABS(*param_3 - *(double *)(lVar1 + lVar3)) - *(double *)(lVar2 + lVar3);
  dVar6 = ABS(param_3[1] - *(double *)(lVar1 + 8 + lVar3)) - *(double *)(lVar2 + 8 + lVar3);
  if (dVar5 <= 0.0) {
    dVar5 = 0.0;
  }
  dVar4 = ABS(param_3[2] - *(double *)(lVar1 + 0x10 + lVar3)) - *(double *)(lVar2 + 0x10 + lVar3);
  if (dVar6 <= 0.0) {
    dVar6 = 0.0;
  }
  if (dVar4 <= 0.0) {
    dVar4 = 0.0;
  }
  return dVar4 * dVar4 + dVar5 * dVar5 + dVar6 * dVar6;
}



// FUNCTION 1482f88b4 FUN_1482f88b4 body=1024 status=ok
// SIG undefined FUN_1482f88b4(void)

void FUN_1482f88b4(longlong param_1,uint param_2,uint *param_3,double *param_4,uint *param_5,
                  undefined4 *param_6,longlong param_7)

{
  uint uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  uint uVar15;
  bool bVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1b8 [32];
  uint *local_198;
  undefined4 *local_190;
  longlong local_188;
  uint *local_178;
  double *local_170;
  uint local_168;
  uint uStack_164;
  uint uStack_160;
  uint uStack_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  uint local_148;
  uint uStack_144;
  uint uStack_140;
  uint uStack_13c;
  undefined8 local_138 [9];
  double local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 local_c8 [4];
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  uVar15 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                    (ulonglong)(param_2 & 0x1ff) * 4);
  local_178 = param_3;
  if (*(int *)(param_1 + 200) <= (int)uVar15) {
    do {
      uVar11 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar15 >> 9) * 8)
                        + (ulonglong)(uVar15 & 0x1ff) * 4);
      if ((int)uVar11 < 0) {
        uVar11 = ~uVar11;
        dVar17 = (double)FUN_1482f8cb6(param_1,uVar11,local_178);
        bVar16 = *param_4 + 1e-08 < dVar17;
LAB_1482f8b67:
        uVar9 = (ulonglong)uVar11;
        if (bVar16) goto LAB_1482f8c6e;
      }
      else {
        uVar11 = uVar11 - 1;
        uVar15 = *(int *)(*(longlong *)
                           (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar15 + 1 >> 9) * 8) +
                         (ulonglong)(uVar15 + 1 & 0x1ff) * 4) - 1;
        uVar9 = (ulonglong)uVar15;
        dVar17 = (double)FUN_1482f8cb6(param_1,uVar11,param_3);
        dVar18 = (double)FUN_1482f8cb6(param_1,uVar9,param_3);
        if (dVar18 <= dVar17) {
          if (dVar18 <= *param_4 + 1e-08) {
            local_188 = param_7;
            local_190 = param_6;
            local_198 = param_5;
            FUN_1482f88b4(param_1,uVar15,local_178,param_4);
            bVar16 = *param_4 + 1e-08 < dVar17;
            goto LAB_1482f8b67;
          }
          goto LAB_1482f8c6e;
        }
        if (*param_4 + 1e-08 < dVar17) goto LAB_1482f8c6e;
        local_188 = param_7;
        local_190 = param_6;
        local_198 = param_5;
        FUN_1482f88b4(param_1,uVar11,local_178,param_4);
        if (*param_4 + 1e-08 < dVar18) goto LAB_1482f8c6e;
      }
      uVar15 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (uVar9 >> 9) * 8) +
                        (ulonglong)((uint)uVar9 & 0x1ff) * 4);
    } while (*(int *)(param_1 + 200) <= (int)uVar15);
  }
  iVar10 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar15 >> 9) * 8) +
                   (ulonglong)(uVar15 & 0x1ff) * 4);
  local_170 = param_4;
  if (0 < iVar10) {
    do {
      uVar15 = uVar15 + 1;
      uVar11 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar15 >> 9) * 8)
                        + (ulonglong)(uVar15 & 0x1ff) * 4);
      pcVar2 = *(code **)(param_7 + 0x10);
      if (pcVar2 == (code *)0x0) {
LAB_1482f89c7:
        lVar8 = *(longlong *)(**(longlong **)(param_1 + 8) + 0x10);
        lVar3 = *(longlong *)
                 (*(longlong *)(**(longlong **)(param_1 + 8) + 0x130) + (ulonglong)(uVar11 >> 9) * 8
                 );
        uVar9 = (ulonglong)uVar11 & 0x1ff;
        uVar1 = *(uint *)(lVar3 + uVar9 * 0xc);
        lVar4 = *(longlong *)(lVar8 + (ulonglong)(uVar1 >> 9) * 8);
        uVar14 = (ulonglong)uVar1 & 0x1ff;
        local_c8[2] = *(undefined8 *)(lVar4 + 0x10 + uVar14 * 0x18);
        puVar12 = (undefined8 *)(lVar4 + uVar14 * 0x18);
        local_c8[0] = *puVar12;
        local_c8[1] = puVar12[1];
        uVar1 = *(uint *)(lVar3 + 4 + uVar9 * 0xc);
        lVar4 = *(longlong *)(lVar8 + (ulonglong)(uVar1 >> 9) * 8);
        uVar14 = (ulonglong)uVar1 & 0x1ff;
        local_a0 = *(undefined8 *)(lVar4 + 0x10 + uVar14 * 0x18);
        puVar12 = (undefined8 *)(lVar4 + uVar14 * 0x18);
        local_c8[3] = *puVar12;
        uStack_a8 = puVar12[1];
        uVar1 = *(uint *)(lVar3 + 8 + uVar9 * 0xc);
        lVar8 = *(longlong *)(lVar8 + (ulonglong)(uVar1 >> 9) * 8);
        uVar9 = (ulonglong)uVar1 & 0x1ff;
        local_88 = *(undefined8 *)(lVar8 + 0x10 + uVar9 * 0x18);
        puVar12 = (undefined8 *)(lVar8 + uVar9 * 0x18);
        local_98 = *puVar12;
        uStack_90 = puVar12[1];
        local_168 = *local_178;
        uStack_164 = local_178[1];
        uStack_160 = local_178[2];
        uStack_15c = local_178[3];
        local_158 = *(undefined8 *)(local_178 + 4);
        uStack_150 = *(undefined8 *)(local_178 + 6);
        local_148 = local_178[8];
        uStack_144 = local_178[9];
        uStack_140 = local_178[10];
        uStack_13c = local_178[0xb];
        puVar12 = local_c8;
        puVar13 = local_138;
        for (lVar8 = 9; lVar8 != 0; lVar8 = lVar8 + -1) {
          *puVar13 = *puVar12;
          puVar12 = puVar12 + 1;
          puVar13 = puVar13 + 1;
        }
        cVar5 = FUN_146bd80f0(&local_168);
        if ((cVar5 != '\0') && (local_f0 < *local_170)) {
          *local_170 = local_f0;
          *param_5 = uVar11;
          *(undefined8 *)(param_6 + 4) = local_d8;
          *param_6 = local_e8;
          param_6[1] = uStack_e4;
          param_6[2] = uStack_e0;
          param_6[3] = uStack_dc;
        }
      }
      else {
        plVar7 = *(longlong **)(param_7 + 0x20);
        if (*(longlong **)(param_7 + 0x20) == (longlong *)0x0) {
          plVar7 = (longlong *)(param_7 + 0x30);
        }
        local_168 = uVar11;
        uVar6 = (**(code **)(*plVar7 + 8))();
        cVar5 = (*pcVar2)(uVar6,&local_168);
        if (cVar5 != '\0') goto LAB_1482f89c7;
      }
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
LAB_1482f8c6e:
  if ((local_80 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1482f8cb6 FUN_1482f8cb6 body=307 status=ok
// SIG undefined FUN_1482f8cb6(void)

void FUN_1482f8cb6(longlong param_1,uint param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x88) + (ulonglong)(param_2 >> 9) * 8);
  lVar3 = (ulonglong)((param_2 & 0x1ff) << 3) * 3;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)(param_2 >> 9) * 8);
  local_70 = *(double *)(param_1 + 0x60);
  dVar6 = *(double *)(lVar2 + 0x10 + lVar3) + local_70;
  dVar7 = *(double *)(lVar2 + 8 + lVar3) + local_70;
  local_70 = local_70 + *(double *)(lVar2 + lVar3);
  local_60 = *(double *)(lVar1 + 0x10 + lVar3);
  local_48 = dVar6 + local_60;
  local_68 = *(double *)(lVar1 + 8 + lVar3);
  local_50 = dVar7 + local_68;
  local_58 = local_70 + *(double *)(lVar1 + lVar3);
  local_60 = local_60 - dVar6;
  local_68 = local_68 - dVar7;
  local_70 = *(double *)(lVar1 + lVar3) - local_70;
  local_78 = 0x7fefffffffffffff;
  cVar4 = FUN_146bd8472(param_3);
  uVar5 = local_78;
  if (cVar4 == '\0') {
    uVar5 = 0x7fefffffffffffff;
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(uVar5);
  }
  return;
}



// FUNCTION 1482f8dea FUN_1482f8dea body=1076 status=ok
// SIG undefined FUN_1482f8dea(void)

void FUN_1482f8dea(longlong param_1,uint param_2,uint *param_3,longlong *param_4,double *param_5)

{
  undefined4 *puVar1;
  double dVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  char cVar9;
  undefined8 uVar10;
  double *pdVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  uint uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  uint uVar19;
  bool bVar20;
  double dVar21;
  double dVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined1 auStack_1e8 [32];
  double *local_1c8;
  uint *local_1b8;
  longlong *local_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  uint local_188;
  uint uStack_184;
  uint uStack_180;
  uint uStack_17c;
  uint local_178;
  uint uStack_174;
  uint uStack_170;
  uint uStack_16c;
  uint local_168;
  uint uStack_164;
  uint uStack_160;
  uint uStack_15c;
  undefined8 local_158 [9];
  double local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 local_e8 [4];
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  dVar2 = *param_5;
  uVar23 = SUB84(dVar2,0);
  uVar24 = (undefined4)((ulonglong)dVar2 >> 0x20);
  if (3.4028234663852886e+38 <= dVar2) {
    uVar23 = 0xe0000000;
    uVar24 = 0x47efffff;
  }
  uVar19 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                    (ulonglong)(param_2 & 0x1ff) * 4);
  local_1b8 = param_3;
  if (*(int *)(param_1 + 200) <= (int)uVar19) {
    do {
      uVar15 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar19 >> 9) * 8)
                        + (ulonglong)(uVar19 & 0x1ff) * 4);
      if ((int)uVar15 < 0) {
        uVar15 = ~uVar15;
        dVar2 = (double)FUN_1482f8cb6(param_1,uVar15,local_1b8);
        bVar20 = (double)CONCAT44(uVar24,uVar23) + 1e-08 < dVar2;
LAB_1482f90e3:
        uVar13 = (ulonglong)uVar15;
        if (bVar20) goto LAB_1482f91b7;
      }
      else {
        uVar15 = uVar15 - 1;
        uVar19 = *(int *)(*(longlong *)
                           (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar19 + 1 >> 9) * 8) +
                         (ulonglong)(uVar19 + 1 & 0x1ff) * 4) - 1;
        uVar13 = (ulonglong)uVar19;
        dVar21 = (double)FUN_1482f8cb6(param_1,uVar15,param_3);
        dVar22 = (double)FUN_1482f8cb6(param_1,uVar13,param_3);
        dVar2 = (double)CONCAT44(uVar24,uVar23) + 1e-08;
        if (dVar22 <= dVar21) {
          if (dVar22 <= dVar2) {
            local_1c8 = param_5;
            FUN_1482f8dea(param_1,uVar19,local_1b8,param_4);
            bVar20 = dVar2 < dVar21;
            goto LAB_1482f90e3;
          }
          goto LAB_1482f91b7;
        }
        if (dVar2 < dVar21) goto LAB_1482f91b7;
        local_1c8 = param_5;
        FUN_1482f8dea(param_1,uVar15,local_1b8,param_4);
        if (dVar2 < dVar22) goto LAB_1482f91b7;
      }
      dVar2 = *param_5;
      uVar23 = SUB84(dVar2,0);
      uVar24 = (int)((ulonglong)dVar2 >> 0x20);
      if (3.4028234663852886e+38 <= dVar2) {
        uVar23 = 0xe0000000;
        uVar24 = 0x47efffff;
      }
      uVar19 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (uVar13 >> 9) * 8) +
                        (ulonglong)((uint)uVar13 & 0x1ff) * 4);
    } while (*(int *)(param_1 + 200) <= (int)uVar19);
  }
  iVar14 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar19 >> 9) * 8) +
                   (ulonglong)(uVar19 & 0x1ff) * 4);
  local_1b0 = param_4;
  if (0 < iVar14) {
    do {
      uVar19 = uVar19 + 1;
      uVar15 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar19 >> 9) * 8)
                        + (ulonglong)(uVar19 & 0x1ff) * 4);
      pcVar5 = (code *)param_5[2];
      if (pcVar5 == (code *)0x0) {
LAB_1482f8f19:
        lVar12 = *(longlong *)(**(longlong **)(param_1 + 8) + 0x10);
        lVar6 = *(longlong *)
                 (*(longlong *)(**(longlong **)(param_1 + 8) + 0x130) + (ulonglong)(uVar15 >> 9) * 8
                 );
        uVar13 = (ulonglong)uVar15 & 0x1ff;
        uVar3 = *(uint *)(lVar6 + uVar13 * 0xc);
        lVar7 = *(longlong *)(lVar12 + (ulonglong)(uVar3 >> 9) * 8);
        uVar18 = (ulonglong)uVar3 & 0x1ff;
        local_e8[2] = *(undefined8 *)(lVar7 + 0x10 + uVar18 * 0x18);
        puVar16 = (undefined8 *)(lVar7 + uVar18 * 0x18);
        local_e8[0] = *puVar16;
        local_e8[1] = puVar16[1];
        uVar3 = *(uint *)(lVar6 + 4 + uVar13 * 0xc);
        lVar7 = *(longlong *)(lVar12 + (ulonglong)(uVar3 >> 9) * 8);
        uVar18 = (ulonglong)uVar3 & 0x1ff;
        local_c0 = *(undefined8 *)(lVar7 + 0x10 + uVar18 * 0x18);
        puVar16 = (undefined8 *)(lVar7 + uVar18 * 0x18);
        local_e8[3] = *puVar16;
        uStack_c8 = puVar16[1];
        uVar3 = *(uint *)(lVar6 + 8 + uVar13 * 0xc);
        lVar12 = *(longlong *)(lVar12 + (ulonglong)(uVar3 >> 9) * 8);
        uVar13 = (ulonglong)uVar3 & 0x1ff;
        local_a8 = *(undefined8 *)(lVar12 + 0x10 + uVar13 * 0x18);
        puVar16 = (undefined8 *)(lVar12 + uVar13 * 0x18);
        local_b8 = *puVar16;
        uStack_b0 = puVar16[1];
        local_188 = *local_1b8;
        uStack_184 = local_1b8[1];
        uStack_180 = local_1b8[2];
        uStack_17c = local_1b8[3];
        local_178 = local_1b8[4];
        uStack_174 = local_1b8[5];
        uStack_170 = local_1b8[6];
        uStack_16c = local_1b8[7];
        local_168 = local_1b8[8];
        uStack_164 = local_1b8[9];
        uStack_160 = local_1b8[10];
        uStack_15c = local_1b8[0xb];
        puVar16 = local_e8;
        puVar17 = local_158;
        for (lVar12 = 9; lVar12 != 0; lVar12 = lVar12 + -1) {
          *puVar17 = *puVar16;
          puVar16 = puVar16 + 1;
          puVar17 = puVar17 + 1;
        }
        cVar9 = FUN_146bd80f0(&local_188);
        dVar2 = local_110;
        plVar8 = local_1b0;
        if ((cVar9 != '\0') && (local_110 <= (double)CONCAT44(uVar24,uVar23) + 1e-08)) {
          local_198 = local_f8;
          local_1a8 = local_108;
          uStack_1a4 = uStack_104;
          uStack_1a0 = uStack_100;
          uStack_19c = uStack_fc;
          iVar4 = (int)local_1b0[1];
          lVar12 = (longlong)iVar4;
          *(uint *)(local_1b0 + 1) = iVar4 + 1U;
          if (*(uint *)((longlong)local_1b0 + 0xc) < iVar4 + 1U) {
            FUN_146bd88d8(local_1b0,iVar4);
          }
          lVar6 = *plVar8;
          *(uint *)(lVar6 + lVar12 * 0x28) = uVar15;
          *(double *)(lVar6 + 8 + lVar12 * 0x28) = dVar2;
          puVar1 = (undefined4 *)(lVar6 + 0x10 + lVar12 * 0x28);
          *puVar1 = local_1a8;
          puVar1[1] = uStack_1a4;
          puVar1[2] = uStack_1a0;
          puVar1[3] = uStack_19c;
          *(undefined8 *)(lVar6 + 0x20 + lVar12 * 0x28) = local_198;
        }
      }
      else {
        pdVar11 = (double *)param_5[4];
        if ((double *)param_5[4] == (double *)0x0) {
          pdVar11 = param_5 + 6;
        }
        local_188 = uVar15;
        uVar10 = (**(code **)((longlong)*pdVar11 + 8))();
        cVar9 = (*pcVar5)(uVar10,&local_188);
        if (cVar9 != '\0') goto LAB_1482f8f19;
      }
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
  }
LAB_1482f91b7:
  if ((local_a0 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1482f921f FUN_1482f921f body=946 status=ok
// SIG undefined FUN_1482f921f(void)

void FUN_1482f921f(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined8 *puVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  int iVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  float fVar24;
  undefined1 auStack_388 [32];
  longlong local_368;
  longlong local_360;
  undefined4 local_358 [188];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_388;
  if (1 < (int)param_2) {
    memset(local_358,0,0x2f0);
    local_360 = param_1 + (ulonglong)param_2 * 0x28 + -0x28;
    local_368 = param_1;
    fVar24 = logf((float)(int)param_2);
    local_358[0] = (int)(longlong)(fVar24 + fVar24);
    plVar17 = &local_368;
    do {
      puVar10 = (undefined8 *)*plVar17;
      puVar18 = (undefined8 *)plVar17[1];
      iVar20 = (int)plVar17[2];
      iVar11 = (int)((ulonglong)((longlong)puVar18 - (longlong)puVar10) >> 3);
      puVar21 = puVar18;
      puVar22 = puVar10;
      if (iVar20 != 0) {
LAB_1482f92e8:
        uVar13 = iVar11 * -0x33333333 + 1;
        if (8 < (int)uVar13) {
          uVar14 = (ulonglong)(uVar13 >> 1);
          uVar1 = puVar10[uVar14 * 5 + 4];
          uVar2 = puVar10[uVar14 * 5];
          uVar3 = (puVar10 + uVar14 * 5)[1];
          uVar4 = puVar10[uVar14 * 5 + 2];
          uVar5 = (puVar10 + uVar14 * 5 + 2)[1];
          puVar10[uVar14 * 5 + 4] = puVar10[4];
          uVar6 = *puVar10;
          uVar7 = puVar10[1];
          uVar8 = puVar10[3];
          puVar10[uVar14 * 5 + 2] = puVar10[2];
          (puVar10 + uVar14 * 5 + 2)[1] = uVar8;
          puVar10[uVar14 * 5] = uVar6;
          (puVar10 + uVar14 * 5)[1] = uVar7;
          puVar10[4] = uVar1;
          puVar10[2] = uVar4;
          puVar10[3] = uVar5;
          *puVar10 = uVar2;
          puVar10[1] = uVar3;
          puVar15 = puVar18 + 5;
          puVar12 = puVar10;
          do {
            puVar9 = puVar12 + 5;
            puVar19 = puVar12 + 5;
            do {
              puVar12 = puVar19;
              puVar16 = puVar9;
              if (puVar18 < puVar12) break;
              puVar9 = puVar16 + 5;
              puVar19 = puVar12 + 5;
            } while ((double)puVar12[1] < (double)puVar10[1] ||
                     (double)puVar12[1] == (double)puVar10[1]);
            puVar9 = puVar15 + -10;
            do {
              puVar19 = puVar15;
              puVar23 = puVar9;
              puVar15 = puVar19 + -5;
              if (puVar15 <= puVar10) break;
              puVar9 = puVar23 + -5;
            } while ((double)puVar10[1] < (double)puVar19[-4] ||
                     (double)puVar10[1] == (double)puVar19[-4]);
            if (puVar15 < puVar12) goto LAB_1482f941b;
            uVar1 = puVar12[4];
            uVar2 = *puVar12;
            uVar3 = puVar12[1];
            uVar4 = puVar12[2];
            uVar5 = puVar12[3];
            puVar12[4] = puVar19[-1];
            uVar6 = *puVar15;
            uVar7 = puVar19[-4];
            uVar8 = puVar19[-2];
            puVar12[2] = puVar19[-3];
            puVar12[3] = uVar8;
            *puVar12 = uVar6;
            puVar12[1] = uVar7;
            puVar19[-1] = uVar1;
            puVar19[-3] = uVar4;
            puVar19[-2] = uVar5;
            *puVar15 = uVar2;
            puVar19[-4] = uVar3;
          } while( true );
        }
        for (; puVar22 = puVar10, puVar21 = puVar10, puVar10 < puVar18; puVar18 = puVar18 + -5) {
          while (puVar15 = puVar22, puVar21 = puVar21 + 5, puVar21 <= puVar18) {
            puVar22 = puVar21;
            if ((double)puVar21[1] < (double)puVar15[1] || (double)puVar21[1] == (double)puVar15[1])
            {
              puVar22 = puVar15;
            }
          }
          local_48 = puVar15[4];
          local_68 = *puVar15;
          uStack_60 = puVar15[1];
          local_58 = puVar15[2];
          uStack_50 = puVar15[3];
          uVar4 = local_68;
          uVar5 = uStack_60;
          puVar15[4] = puVar18[4];
          uVar1 = *puVar18;
          uVar2 = puVar18[1];
          uVar3 = puVar18[3];
          puVar15[2] = puVar18[2];
          puVar15[3] = uVar3;
          *puVar15 = uVar1;
          puVar15[1] = uVar2;
          puVar18[4] = local_48;
          local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
          uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
          puVar18[2] = local_58;
          puVar18[3] = uStack_50;
          *(undefined4 *)puVar18 = (undefined4)local_68;
          *(undefined4 *)((longlong)puVar18 + 4) = local_68._4_4_;
          *(undefined4 *)(puVar18 + 1) = (undefined4)uStack_60;
          *(undefined4 *)((longlong)puVar18 + 0xc) = uStack_60._4_4_;
          local_68 = uVar4;
          uStack_60 = uVar5;
        }
        goto LAB_1482f95b0;
      }
LAB_1482f95c5:
      FUN_1482f95d2(puVar10);
LAB_1482f95b0:
      plVar17 = plVar17 + -3;
    } while (&local_368 <= plVar17);
  }
  if ((local_38 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1482f941b:
  local_48 = puVar10[4];
  local_68 = *puVar10;
  uStack_60 = puVar10[1];
  local_58 = puVar10[2];
  uStack_50 = puVar10[3];
  uVar4 = local_68;
  uVar5 = uStack_60;
  puVar10[4] = puVar19[-1];
  uVar1 = *puVar15;
  uVar2 = puVar19[-4];
  uVar3 = puVar19[-2];
  puVar10[2] = puVar19[-3];
  puVar10[3] = uVar3;
  *puVar10 = uVar1;
  puVar10[1] = uVar2;
  puVar19[-1] = local_48;
  local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  puVar19[-3] = local_58;
  puVar19[-2] = uStack_50;
  *(undefined4 *)puVar15 = (undefined4)local_68;
  *(undefined4 *)((longlong)puVar19 + -0x24) = local_68._4_4_;
  *(undefined4 *)(puVar19 + -4) = (undefined4)uStack_60;
  *(undefined4 *)((longlong)puVar19 + -0x1c) = uStack_60._4_4_;
  iVar20 = iVar20 + -1;
  puVar19 = puVar19 + -10;
  local_68 = uVar4;
  uStack_60 = uVar5;
  if ((longlong)puVar23 - (longlong)puVar22 < (longlong)puVar21 - (longlong)puVar16) {
    if (puVar12 < puVar18) {
      *plVar17 = (longlong)puVar12;
      plVar17[1] = (longlong)puVar18;
      *(int *)(plVar17 + 2) = iVar20;
      plVar17 = plVar17 + 3;
    }
    puVar16 = puVar10;
    if (puVar15 <= puVar10 + 5) goto LAB_1482f95b0;
  }
  else {
    if (puVar10 + 5 < puVar15) {
      *plVar17 = (longlong)puVar10;
      plVar17[1] = (longlong)puVar19;
      *(int *)(plVar17 + 2) = iVar20;
      plVar17 = plVar17 + 3;
    }
    puVar10 = puVar12;
    puVar19 = puVar18;
    puVar23 = puVar18;
    if (puVar18 <= puVar12) goto LAB_1482f95b0;
  }
  iVar11 = (int)((ulonglong)((longlong)puVar23 - (longlong)puVar16) >> 3);
  puVar18 = puVar19;
  puVar21 = puVar23;
  puVar22 = puVar16;
  if (iVar20 == 0) goto LAB_1482f95c5;
  goto LAB_1482f92e8;
}



// FUNCTION 1482f95d2 FUN_1482f95d2 body=717 status=ok
// SIG undefined FUN_1482f95d2(void)

void FUN_1482f95d2(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  bool bVar17;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    iVar12 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar16 = iVar12;
joined_r0x0001482f9606:
    do {
      iVar14 = iVar12 * 2 + 1;
      if (iVar14 < (int)param_2) {
        iVar15 = iVar12 * 2 + 2;
        if ((iVar15 < (int)param_2) &&
           ((double)param_1[(longlong)iVar14 * 5 + 1] < (double)param_1[(longlong)iVar15 * 5 + 1] ||
            (double)param_1[(longlong)iVar14 * 5 + 1] == (double)param_1[(longlong)iVar15 * 5 + 1]))
        {
          iVar14 = iVar15;
        }
        if ((double)param_1[(longlong)iVar12 * 5 + 1] <= (double)param_1[(longlong)iVar14 * 5 + 1]
            && (double)param_1[(longlong)iVar14 * 5 + 1] !=
               (double)param_1[(longlong)iVar12 * 5 + 1]) {
          puVar2 = param_1 + (longlong)iVar12 * 5;
          puVar3 = param_1 + (longlong)iVar14 * 5;
          local_18 = puVar2[4];
          uVar4 = *puVar2;
          uVar5 = puVar2[1];
          uVar6 = puVar2[2];
          uVar7 = puVar2[3];
          puVar2[4] = puVar3[4];
          uVar8 = *puVar3;
          uVar9 = puVar3[1];
          uVar10 = puVar3[3];
          puVar2[2] = puVar3[2];
          puVar2[3] = uVar10;
          *puVar2 = uVar8;
          puVar2[1] = uVar9;
          puVar3[4] = local_18;
          local_38._0_4_ = (undefined4)uVar4;
          local_38._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_30._0_4_ = (undefined4)uVar5;
          uStack_30._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          local_28._0_4_ = (undefined4)uVar6;
          local_28._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar7;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
          *(undefined4 *)(puVar3 + 2) = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar3 + 0x14) = local_28._4_4_;
          *(undefined4 *)(puVar3 + 3) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar3 + 0x1c) = uStack_20._4_4_;
          *(undefined4 *)puVar3 = (undefined4)local_38;
          *(undefined4 *)((longlong)puVar3 + 4) = local_38._4_4_;
          *(undefined4 *)(puVar3 + 1) = (undefined4)uStack_30;
          *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_30._4_4_;
          iVar12 = iVar14;
          local_38 = uVar4;
          uStack_30 = uVar5;
          local_28 = uVar6;
          uStack_20 = uVar7;
          goto joined_r0x0001482f9606;
        }
      }
      bVar17 = iVar16 != 0;
      iVar12 = iVar16 + -1;
      iVar16 = iVar12;
    } while (bVar17);
    if (1 < (int)param_2) {
      uVar13 = (ulonglong)param_2 - 1;
      local_18 = param_1[4];
      uVar4 = *param_1;
      uVar5 = param_1[1];
      uVar6 = param_1[2];
      uVar7 = param_1[3];
      param_1[4] = param_1[uVar13 * 5 + 4];
      uVar8 = param_1[uVar13 * 5];
      uVar9 = (param_1 + uVar13 * 5)[1];
      uVar10 = (param_1 + uVar13 * 5 + 2)[1];
      param_1[2] = param_1[uVar13 * 5 + 2];
      param_1[3] = uVar10;
      *param_1 = uVar8;
      param_1[1] = uVar9;
      param_1[uVar13 * 5 + 4] = local_18;
      local_38._0_4_ = (undefined4)uVar4;
      local_38._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      uStack_30._0_4_ = (undefined4)uVar5;
      uStack_30._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      local_28._0_4_ = (undefined4)uVar6;
      local_28._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_20._0_4_ = (undefined4)uVar7;
      uStack_20._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = param_1 + uVar13 * 5 + 2;
      *(undefined4 *)puVar2 = (undefined4)local_28;
      *(undefined4 *)((longlong)puVar2 + 4) = local_28._4_4_;
      *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_20;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_20._4_4_;
      puVar2 = param_1 + uVar13 * 5;
      *(undefined4 *)puVar2 = (undefined4)local_38;
      *(undefined4 *)((longlong)puVar2 + 4) = local_38._4_4_;
      *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_30._4_4_;
      local_38 = uVar4;
      uStack_30 = uVar5;
      local_28 = uVar6;
      uStack_20 = uVar7;
      if (param_2 != 2) {
        do {
          iVar12 = 0;
          iVar14 = 1;
          iVar16 = 0;
          do {
            iVar12 = iVar12 + 2;
            iVar15 = iVar14;
            if (((longlong)iVar12 < (longlong)uVar13) &&
               ((double)param_1[(longlong)iVar14 * 5 + 1] <
                (double)param_1[(longlong)iVar12 * 5 + 1] ||
                (double)param_1[(longlong)iVar14 * 5 + 1] ==
                (double)param_1[(longlong)iVar12 * 5 + 1])) {
              iVar15 = iVar12;
            }
            if ((double)param_1[(longlong)iVar15 * 5 + 1] <
                (double)param_1[(longlong)iVar16 * 5 + 1] ||
                (double)param_1[(longlong)iVar15 * 5 + 1] ==
                (double)param_1[(longlong)iVar16 * 5 + 1]) break;
            puVar2 = param_1 + (longlong)iVar16 * 5;
            puVar3 = param_1 + (longlong)iVar15 * 5;
            uVar4 = puVar2[4];
            uVar5 = *puVar2;
            uVar6 = puVar2[1];
            uVar7 = puVar2[2];
            uVar8 = puVar2[3];
            puVar2[4] = puVar3[4];
            uVar9 = *puVar3;
            uVar10 = puVar3[1];
            uVar11 = puVar3[3];
            puVar2[2] = puVar3[2];
            puVar2[3] = uVar11;
            *puVar2 = uVar9;
            puVar2[1] = uVar10;
            puVar3[4] = uVar4;
            puVar3[2] = uVar7;
            puVar3[3] = uVar8;
            *puVar3 = uVar5;
            puVar3[1] = uVar6;
            iVar12 = iVar15 * 2;
            iVar14 = iVar15 * 2 + 1;
            iVar16 = iVar15;
          } while ((longlong)iVar14 < (longlong)uVar13);
          uVar1 = uVar13 - 1;
          local_18 = param_1[4];
          uVar4 = *param_1;
          uVar5 = param_1[1];
          uVar6 = param_1[2];
          uVar7 = param_1[3];
          param_1[4] = param_1[uVar1 * 5 + 4];
          uVar8 = param_1[uVar1 * 5];
          uVar9 = (param_1 + uVar1 * 5)[1];
          uVar10 = (param_1 + uVar1 * 5 + 2)[1];
          param_1[2] = param_1[uVar1 * 5 + 2];
          param_1[3] = uVar10;
          *param_1 = uVar8;
          param_1[1] = uVar9;
          param_1[uVar1 * 5 + 4] = local_18;
          local_38._0_4_ = (undefined4)uVar4;
          local_38._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_30._0_4_ = (undefined4)uVar5;
          uStack_30._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          local_28._0_4_ = (undefined4)uVar6;
          local_28._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar7;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
          puVar2 = param_1 + uVar1 * 5 + 2;
          *(undefined4 *)puVar2 = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar2 + 4) = local_28._4_4_;
          *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_20._4_4_;
          puVar2 = param_1 + uVar1 * 5;
          *(undefined4 *)puVar2 = (undefined4)local_38;
          *(undefined4 *)((longlong)puVar2 + 4) = local_38._4_4_;
          *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_30;
          *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_30._4_4_;
          bVar17 = 2 < uVar13;
          uVar13 = uVar1;
          local_38 = uVar4;
          uStack_30 = uVar5;
          local_28 = uVar6;
          uStack_20 = uVar7;
        } while (bVar17);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1482f98a0 FUN_1482f98a0 body=256 status=ok
// SIG undefined FUN_1482f98a0(void)

undefined4 * FUN_1482f98a0(undefined4 *param_1,longlong *param_2,uint param_3,undefined4 *param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined1 auStack_88 [32];
  undefined8 local_68 [4];
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar8 = *(longlong *)(*param_2 + 0x10);
  lVar2 = *(longlong *)(*(longlong *)(*param_2 + 0x130) + (ulonglong)(param_3 >> 9) * 8);
  uVar7 = (ulonglong)(param_3 & 0x1ff);
  uVar1 = *(uint *)(lVar2 + uVar7 * 0xc);
  lVar3 = *(longlong *)(lVar8 + (ulonglong)(uVar1 >> 9) * 8);
  uVar11 = (ulonglong)uVar1 & 0x1ff;
  local_68[2] = *(undefined8 *)(lVar3 + 0x10 + uVar11 * 0x18);
  puVar9 = (undefined8 *)(lVar3 + uVar11 * 0x18);
  local_68[0] = *puVar9;
  local_68[1] = puVar9[1];
  uVar1 = *(uint *)(lVar2 + 4 + uVar7 * 0xc);
  lVar3 = *(longlong *)(lVar8 + (ulonglong)(uVar1 >> 9) * 8);
  uVar11 = (ulonglong)uVar1 & 0x1ff;
  local_40 = *(undefined8 *)(lVar3 + 0x10 + uVar11 * 0x18);
  puVar9 = (undefined8 *)(lVar3 + uVar11 * 0x18);
  local_68[3] = *puVar9;
  uStack_48 = puVar9[1];
  uVar1 = *(uint *)(lVar2 + 8 + uVar7 * 0xc);
  lVar8 = *(longlong *)(lVar8 + (ulonglong)(uVar1 >> 9) * 8);
  uVar7 = (ulonglong)uVar1 & 0x1ff;
  local_28 = *(undefined8 *)(lVar8 + 0x10 + uVar7 * 0x18);
  puVar9 = (undefined8 *)(lVar8 + uVar7 * 0x18);
  local_38 = *puVar9;
  uStack_30 = puVar9[1];
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_4 + 4);
  uVar4 = param_4[1];
  uVar5 = param_4[2];
  uVar6 = param_4[3];
  *param_1 = *param_4;
  param_1[1] = uVar4;
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  puVar9 = local_68;
  puVar10 = (undefined8 *)(param_1 + 6);
  for (lVar8 = 9; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  FUN_146bd2a7a(param_1);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482f99a2 FUN_1482f99a2 body=726 status=ok
// SIG undefined FUN_1482f99a2(void)

ulonglong FUN_1482f99a2(longlong param_1,uint param_2,undefined8 param_3,double *param_4,
                       undefined4 *param_5,longlong param_6)

{
  undefined4 uVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined8 unaff_R14;
  ulonglong uVar9;
  undefined7 uVar10;
  int iVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_b8 [32];
  undefined4 *local_98;
  longlong local_90;
  undefined8 local_88;
  double *local_80;
  undefined4 local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar8 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                   (ulonglong)(param_2 & 0x1ff) * 4);
  uVar6 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar8 >> 9) * 8) +
                   (ulonglong)(uVar8 & 0x1ff) * 4);
  local_88 = param_3;
  if ((int)uVar8 < *(int *)(param_1 + 200)) {
    local_80 = param_4;
    if (0 < (int)uVar6) {
      do {
        uVar8 = uVar8 + 1;
        uVar1 = *(undefined4 *)
                 (*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar8 >> 9) * 8) +
                 (ulonglong)(uVar8 & 0x1ff) * 4);
        pcVar2 = *(code **)(param_6 + 0x10);
        if (pcVar2 == (code *)0x0) {
LAB_1482f9a8a:
          dVar12 = (double)FUN_1482f8712(*(undefined8 *)(param_1 + 8),uVar1,local_88);
          if (dVar12 < *local_80) {
            *local_80 = dVar12;
            *param_5 = uVar1;
            uVar9 = CONCAT71((int7)((ulonglong)&local_74 >> 8),1);
            goto LAB_1482f9ae9;
          }
        }
        else {
          plVar5 = *(longlong **)(param_6 + 0x20);
          if (*(longlong **)(param_6 + 0x20) == (longlong *)0x0) {
            plVar5 = (longlong *)(param_6 + 0x30);
          }
          local_74 = uVar1;
          uVar4 = (**(code **)(*plVar5 + 8))();
          cVar3 = (*pcVar2)(uVar4,&local_74);
          if (cVar3 != '\0') goto LAB_1482f9a8a;
        }
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
  }
  else {
    uVar10 = (undefined7)((ulonglong)unaff_R14 >> 8);
    if ((int)uVar6 < 0) {
      dVar12 = (double)FUN_1482f881e(param_1,~uVar6,param_3);
      if (dVar12 <= *param_4) {
        local_90 = param_6;
        local_98 = param_5;
        cVar3 = FUN_1482f99a2(param_1,~uVar6,local_88,param_4);
LAB_1482f9c6c:
        uVar9 = CONCAT71(uVar10,1);
        if (cVar3 != '\0') goto LAB_1482f9ae9;
      }
    }
    else {
      iVar7 = uVar6 - 1;
      iVar11 = *(int *)(*(longlong *)
                         (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar8 + 1 >> 9) * 8) +
                       (ulonglong)(uVar8 + 1 & 0x1ff) * 4) + -1;
      dVar12 = (double)FUN_1482f881e(param_1,iVar7,param_3);
      dVar13 = (double)FUN_1482f881e(param_1,iVar11,param_3);
      if (dVar13 <= dVar12) {
        if (dVar13 < *param_4) {
          local_90 = param_6;
          local_98 = param_5;
          cVar3 = FUN_1482f99a2(param_1,iVar11,local_88,param_4);
          uVar9 = CONCAT71(uVar10,1);
          if (cVar3 != '\0') goto LAB_1482f9ae9;
          iVar11 = iVar7;
          if (dVar12 < *param_4) goto LAB_1482f9c36;
        }
      }
      else if (dVar12 < *param_4) {
        local_90 = param_6;
        local_98 = param_5;
        cVar3 = FUN_1482f99a2(param_1,iVar7,local_88,param_4);
        uVar9 = CONCAT71(uVar10,1);
        if (cVar3 != '\0') goto LAB_1482f9ae9;
        if (dVar13 < *param_4) {
LAB_1482f9c36:
          local_90 = param_6;
          local_98 = param_5;
          cVar3 = FUN_1482f99a2(param_1,iVar11,local_88,param_4);
          goto LAB_1482f9c6c;
        }
      }
    }
  }
  uVar9 = 0;
LAB_1482f9ae9:
  if ((local_70 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 1482f9c7a FUN_1482f9c7a body=816 status=ok
// SIG undefined FUN_1482f9c7a(void)

void FUN_1482f9c7a(longlong param_1,uint param_2,double *param_3,double *param_4,uint *param_5,
                  longlong param_6)

{
  code *pcVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_c8 [32];
  uint *local_a8;
  longlong local_a0;
  int local_8c;
  longlong *local_88;
  undefined8 local_80;
  undefined4 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar9 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                   (ulonglong)(param_2 & 0x1ff) * 4);
  while (*(int *)(param_1 + 200) <= (int)uVar9) {
    uVar7 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar9 >> 9) * 8) +
                     (ulonglong)(uVar9 & 0x1ff) * 4);
    if ((int)uVar7 < 0) {
      dVar12 = (double)FUN_1482f881e(param_1,~uVar7,param_3);
      uVar7 = ~uVar7;
      if (*param_4 < dVar12) goto LAB_1482f9f76;
    }
    else {
      uVar7 = uVar7 - 1;
      uVar9 = *(int *)(*(longlong *)
                        (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar9 + 1 >> 9) * 8) +
                      (ulonglong)(uVar9 + 1 & 0x1ff) * 4) - 1;
      dVar12 = (double)FUN_1482f881e(param_1,uVar7,param_3);
      dVar13 = (double)FUN_1482f881e(param_1,uVar9,param_3);
      if (dVar13 <= dVar12) {
        if (*param_4 <= dVar13) goto LAB_1482f9f76;
        local_a0 = param_6;
        local_a8 = param_5;
        FUN_1482f9c7a(param_1,uVar9,param_3,param_4);
        if (*param_4 <= dVar12) goto LAB_1482f9f76;
      }
      else {
        if (*param_4 <= dVar12) goto LAB_1482f9f76;
        local_a0 = param_6;
        local_a8 = param_5;
        FUN_1482f9c7a(param_1,uVar7,param_3,param_4);
        uVar7 = uVar9;
        if (*param_4 <= dVar13) goto LAB_1482f9f76;
      }
    }
    uVar9 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(uVar7 >> 9) * 8) +
                     (ulonglong)(uVar7 & 0x1ff) * 4);
  }
  local_8c = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar9 >> 9) * 8) +
                     (ulonglong)(uVar9 & 0x1ff) * 4);
  if (0 < local_8c) {
    local_88 = (longlong *)(param_6 + 0x30);
    iVar10 = 1;
    do {
      uVar7 = *(uint *)(*(longlong *)
                         (*(longlong *)(param_1 + 0xb8) + (ulonglong)(iVar10 + uVar9 >> 9) * 8) +
                       (ulonglong)(iVar10 + uVar9 & 0x1ff) * 4);
      pcVar1 = *(code **)(param_6 + 0x10);
      if (pcVar1 == (code *)0x0) {
LAB_1482f9eb5:
        lVar5 = *(longlong *)
                 (*(longlong *)(**(longlong **)(param_1 + 8) + 0x130) + (ulonglong)(uVar7 >> 9) * 8)
        ;
        local_78 = *(undefined4 *)(lVar5 + 8 + (ulonglong)(uVar7 & 0x1ff) * 0xc);
        local_80 = *(undefined8 *)(lVar5 + (ulonglong)(uVar7 & 0x1ff) * 0xc);
        lVar5 = 0;
        do {
          uVar7 = *(uint *)((longlong)&local_80 + lVar5 * 4);
          lVar2 = *(longlong *)
                   (*(longlong *)(**(longlong **)(param_1 + 8) + 0x10) + (ulonglong)(uVar7 >> 9) * 8
                   );
          uVar8 = (ulonglong)(uVar7 & 0x1ff);
          dVar13 = *param_3 - *(double *)(lVar2 + uVar8 * 0x18);
          dVar14 = param_3[1] - *(double *)(lVar2 + 8 + uVar8 * 0x18);
          dVar12 = param_3[2] - *(double *)(lVar2 + 0x10 + uVar8 * 0x18);
          dVar12 = dVar12 * dVar12 + dVar13 * dVar13 + dVar14 * dVar14;
          if (dVar12 < *param_4) {
            *param_4 = dVar12;
            *param_5 = uVar7;
          }
          lVar5 = lVar5 + 1;
        } while (lVar5 != 3);
      }
      else {
        local_80 = CONCAT44(local_80._4_4_,uVar7);
        plVar6 = *(longlong **)(param_6 + 0x20);
        if (*(longlong **)(param_6 + 0x20) == (longlong *)0x0) {
          plVar6 = local_88;
        }
        uVar4 = (**(code **)(*plVar6 + 8))();
        cVar3 = (*pcVar1)(uVar4,&local_80);
        if (cVar3 != '\0') goto LAB_1482f9eb5;
      }
      bVar11 = iVar10 != local_8c;
      iVar10 = iVar10 + 1;
    } while (bVar11);
  }
LAB_1482f9f76:
  if ((local_70 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1482f9fac FUN_1482f9fac body=1144 status=ok
// SIG undefined FUN_1482f9fac(void)

ulonglong FUN_1482f9fac(longlong param_1,uint param_2,uint *param_3,double param_4,double *param_5)

{
  undefined4 *puVar1;
  uint uVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  char cVar7;
  undefined8 uVar8;
  double *pdVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  undefined8 unaff_RDI;
  undefined8 *puVar15;
  undefined7 uVar16;
  ulonglong uVar17;
  uint uVar18;
  double dVar19;
  double dVar20;
  undefined1 auStack_228 [32];
  double *local_208;
  uint *local_1f8;
  uint *local_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 local_188 [4];
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  uint local_138;
  uint uStack_134;
  uint uStack_130;
  uint uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  uint local_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  undefined8 local_108 [9];
  double local_c0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_228;
  uVar18 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                    (ulonglong)(param_2 & 0x1ff) * 4);
  local_1f8 = param_3;
  if ((int)uVar18 < *(int *)(param_1 + 200)) {
    iVar11 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar18 >> 9) * 8) +
                     (ulonglong)(uVar18 & 0x1ff) * 4);
    if (0 < iVar11) {
      local_1f0 = param_3 + 6;
      do {
        uVar18 = uVar18 + 1;
        uVar2 = *(uint *)(*(longlong *)
                           (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar18 >> 9) * 8) +
                         (ulonglong)(uVar18 & 0x1ff) * 4);
        pcVar3 = (code *)param_5[2];
        if (pcVar3 == (code *)0x0) {
LAB_1482fa0c6:
          lVar10 = **(longlong **)(param_1 + 8);
          lVar4 = *(longlong *)(*(longlong *)(lVar10 + 0x130) + (ulonglong)(uVar2 >> 9) * 8);
          uVar13 = (ulonglong)uVar2 & 0x1ff;
          uVar2 = *(uint *)(lVar4 + uVar13 * 0xc);
          lVar5 = *(longlong *)(*(longlong *)(lVar10 + 0x10) + (ulonglong)(uVar2 >> 9) * 8);
          uVar17 = (ulonglong)uVar2 & 0x1ff;
          local_198 = *(undefined8 *)(lVar5 + 0x10 + uVar17 * 0x18);
          puVar14 = (undefined8 *)(lVar5 + uVar17 * 0x18);
          local_1a8 = *puVar14;
          uStack_1a0 = puVar14[1];
          uVar2 = *(uint *)(lVar4 + 4 + uVar13 * 0xc);
          lVar5 = *(longlong *)(*(longlong *)(lVar10 + 0x10) + (ulonglong)(uVar2 >> 9) * 8);
          uVar17 = (ulonglong)uVar2 & 0x1ff;
          local_1b8 = *(undefined8 *)(lVar5 + 0x10 + uVar17 * 0x18);
          puVar14 = (undefined8 *)(lVar5 + uVar17 * 0x18);
          local_1c8 = *puVar14;
          uStack_1c0 = puVar14[1];
          uVar2 = *(uint *)(lVar4 + 8 + uVar13 * 0xc);
          lVar10 = *(longlong *)(*(longlong *)(lVar10 + 0x10) + (ulonglong)(uVar2 >> 9) * 8);
          uVar17 = (ulonglong)uVar2 & 0x1ff;
          local_1d8 = *(undefined8 *)(lVar10 + 0x10 + uVar17 * 0x18);
          puVar1 = (undefined4 *)(lVar10 + uVar17 * 0x18);
          local_1e8 = *puVar1;
          uStack_1e4 = puVar1[1];
          uStack_1e0 = puVar1[2];
          uStack_1dc = puVar1[3];
          local_208 = (double *)&local_1e8;
          cVar7 = FUN_146bd896c(local_1f8,local_1f0,&local_1a8,&local_1c8);
          if (cVar7 != '\0') {
            local_188[2] = local_198;
            local_188[0] = local_1a8;
            local_188[1] = uStack_1a0;
            local_188[3] = local_1c8;
            uStack_168 = uStack_1c0;
            local_160 = local_1b8;
            local_158 = CONCAT44(uStack_1e4,local_1e8);
            uStack_150 = CONCAT44(uStack_1dc,uStack_1e0);
            local_148 = local_1d8;
            local_138 = *local_1f8;
            uStack_134 = local_1f8[1];
            uStack_130 = local_1f8[2];
            uStack_12c = local_1f8[3];
            local_128 = *(undefined8 *)(local_1f8 + 4);
            uStack_120 = *(undefined8 *)(local_1f8 + 6);
            local_118 = local_1f8[8];
            uStack_114 = local_1f8[9];
            uStack_110 = local_1f8[10];
            uStack_10c = local_1f8[0xb];
            puVar14 = local_188;
            puVar15 = local_108;
            for (lVar10 = 9; lVar10 != 0; lVar10 = lVar10 + -1) {
              *puVar15 = *puVar14;
              puVar14 = puVar14 + 1;
              puVar15 = puVar15 + 1;
            }
            cVar7 = FUN_146bd80f0(&local_138);
            if ((cVar7 != '\0') && (local_c0 < *param_5)) {
              uVar17 = CONCAT71((int7)((ulonglong)puVar15 >> 8),1);
              goto LAB_1482fa2bb;
            }
          }
        }
        else {
          pdVar9 = (double *)param_5[4];
          if ((double *)param_5[4] == (double *)0x0) {
            pdVar9 = param_5 + 6;
          }
          local_138 = uVar2;
          uVar8 = (**(code **)((longlong)*pdVar9 + 8))();
          cVar7 = (*pcVar3)(uVar8,&local_138);
          if (cVar7 != '\0') goto LAB_1482fa0c6;
        }
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
  }
  else {
    uVar2 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar18 >> 9) * 8) +
                     (ulonglong)(uVar18 & 0x1ff) * 4);
    if ((int)uVar2 < 0) {
      dVar6 = (double)FUN_1482f8cb6(param_1,~uVar2,param_3);
      if (dVar6 <= param_4 + 1e-08) {
        local_208 = param_5;
        cVar7 = FUN_1482f9fac(param_1,~uVar2,local_1f8,param_4);
        uVar16 = (undefined7)((ulonglong)unaff_RDI >> 8);
LAB_1482fa418:
        uVar17 = CONCAT71(uVar16,1);
        if (cVar7 != '\0') goto LAB_1482fa2bb;
      }
    }
    else {
      iVar12 = uVar2 - 1;
      iVar11 = *(int *)(*(longlong *)
                         (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar18 + 1 >> 9) * 8) +
                       (ulonglong)(uVar18 + 1 & 0x1ff) * 4) + -1;
      dVar19 = (double)FUN_1482f8cb6(param_1,iVar12,param_3);
      dVar20 = (double)FUN_1482f8cb6(param_1,iVar11,param_3);
      dVar6 = param_4 + 1e-08;
      uVar16 = (undefined7)((ulonglong)param_3 >> 8);
      if (dVar20 <= dVar19) {
        if (dVar20 <= dVar6) {
          local_208 = param_5;
          cVar7 = FUN_1482f9fac(param_1,iVar11,local_1f8,param_4);
          iVar11 = iVar12;
          dVar20 = dVar19;
          goto joined_r0x0001482fa3d2;
        }
      }
      else if (dVar19 <= dVar6) {
        local_208 = param_5;
        cVar7 = FUN_1482f9fac(param_1,iVar12,local_1f8,param_4);
joined_r0x0001482fa3d2:
        uVar17 = CONCAT71(uVar16,1);
        if (cVar7 != '\0') goto LAB_1482fa2bb;
        if (dVar20 <= dVar6) {
          local_208 = param_5;
          cVar7 = FUN_1482f9fac(param_1,iVar11,local_1f8,param_4);
          goto LAB_1482fa418;
        }
      }
    }
  }
  uVar17 = 0;
LAB_1482fa2bb:
  if ((local_90 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return uVar17 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482fa426 FUN_1482fa426 body=2673 status=ok
// SIG undefined FUN_1482fa426(void)

void FUN_1482fa426(longlong param_1,uint param_2,longlong param_3,undefined8 *param_4,uint param_5,
                  uint param_6,double *param_7,ulonglong *param_8,longlong param_9,longlong param_10
                  )

{
  uint *puVar1;
  undefined4 *puVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int iVar18;
  bool bVar19;
  undefined4 uVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined4 uVar24;
  undefined1 auStack_2c8 [32];
  uint local_2a8;
  int local_2a0;
  double *local_298;
  ulonglong *local_290;
  longlong local_288;
  longlong local_280;
  int local_274;
  ulonglong local_270;
  ulonglong local_268;
  int local_25c;
  undefined8 *local_258;
  longlong local_250;
  longlong *local_248;
  longlong *local_240;
  ulonglong local_238;
  ulonglong local_230;
  uint local_228;
  uint uStack_224;
  uint uStack_220;
  uint uStack_21c;
  undefined8 local_218;
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  undefined8 local_1a8 [9];
  undefined8 local_160 [9];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  uint local_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  undefined8 local_d8;
  undefined8 local_c8 [4];
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  uVar7 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                   (ulonglong)(param_2 & 0x1ff) * 4);
  uVar13 = *(uint *)(*(longlong *)(*(longlong *)(param_3 + 0x70) + (ulonglong)(param_5 >> 9) * 8) +
                    (ulonglong)(param_5 & 0x1ff) * 4);
  iVar18 = *(int *)(param_1 + 200);
  if (((int)uVar7 < iVar18) && ((int)uVar13 < *(int *)(param_3 + 200))) {
    local_274 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar7 >> 9) * 8)
                        + (ulonglong)(uVar7 & 0x1ff) * 4);
    local_25c = *(int *)(*(longlong *)(*(longlong *)(param_3 + 0xb8) + (ulonglong)(uVar13 >> 9) * 8)
                        + (ulonglong)(uVar13 & 0x1ff) * 4);
    local_210 = -1.0;
    local_268 = (ulonglong)uVar7;
    local_258 = param_4;
    if (0 < local_25c) {
      local_240 = (longlong *)(param_10 + 0x30);
      local_248 = param_4 + 4;
      local_268 = (ulonglong)(uVar7 + 1);
      uVar8 = 1;
      local_250 = param_3;
      local_238 = (ulonglong)uVar13;
      do {
        uVar7 = (int)uVar8 + (int)local_238;
        uVar7 = *(uint *)(*(longlong *)
                           (*(longlong *)(local_250 + 0xb8) + (ulonglong)(uVar7 >> 9) * 8) +
                         (ulonglong)(uVar7 & 0x1ff) * 4);
        local_270 = (ulonglong)uVar7;
        pcVar3 = *(code **)(param_10 + 0x10);
        local_230 = uVar8;
        if (pcVar3 == (code *)0x0) {
LAB_1482fa5f6:
          plVar12 = local_248;
          puVar15 = local_258;
          lVar11 = **(longlong **)(local_250 + 8);
          lVar4 = *(longlong *)(*(longlong *)(lVar11 + 0x130) + (local_270 >> 9 & 0x7fffff) * 8);
          uVar16 = local_270 & 0x1ff;
          uVar7 = *(uint *)(lVar4 + uVar16 * 0xc);
          lVar5 = *(longlong *)(*(longlong *)(lVar11 + 0x10) + (ulonglong)(uVar7 >> 9) * 8);
          uVar8 = (ulonglong)uVar7 & 0x1ff;
          local_108 = *(undefined8 *)(lVar5 + 0x10 + uVar8 * 0x18);
          puVar14 = (undefined8 *)(lVar5 + uVar8 * 0x18);
          local_118 = *puVar14;
          uStack_110 = puVar14[1];
          uVar7 = *(uint *)(lVar4 + 4 + uVar16 * 0xc);
          lVar5 = *(longlong *)(*(longlong *)(lVar11 + 0x10) + (ulonglong)(uVar7 >> 9) * 8);
          uVar8 = (ulonglong)uVar7 & 0x1ff;
          local_f0 = *(undefined8 *)(lVar5 + 0x10 + uVar8 * 0x18);
          puVar14 = (undefined8 *)(lVar5 + uVar8 * 0x18);
          local_100 = *puVar14;
          uStack_f8 = puVar14[1];
          uVar7 = *(uint *)(lVar4 + 8 + uVar16 * 0xc);
          lVar11 = *(longlong *)(*(longlong *)(lVar11 + 0x10) + (ulonglong)(uVar7 >> 9) * 8);
          uVar8 = (ulonglong)uVar7 & 0x1ff;
          local_d8 = *(undefined8 *)(lVar11 + 0x10 + uVar8 * 0x18);
          puVar1 = (uint *)(lVar11 + uVar8 * 0x18);
          local_e8 = *puVar1;
          uStack_e4 = puVar1[1];
          uStack_e0 = puVar1[2];
          uStack_dc = puVar1[3];
          pcVar3 = (code *)*local_258;
          if (pcVar3 != (code *)0x0) {
            plVar10 = (longlong *)local_258[2];
            if ((longlong *)local_258[2] == (longlong *)0x0) {
              plVar10 = local_248;
            }
            uVar9 = (**(code **)(*plVar10 + 8))();
            (*pcVar3)(&local_228,uVar9,&local_118);
            local_108 = local_218;
            local_118 = CONCAT44(uStack_224,local_228);
            uStack_110 = CONCAT44(uStack_21c,uStack_220);
            pcVar3 = (code *)*puVar15;
            plVar10 = (longlong *)puVar15[2];
            if ((longlong *)puVar15[2] == (longlong *)0x0) {
              plVar10 = plVar12;
            }
            uVar9 = (**(code **)(*plVar10 + 8))();
            (*pcVar3)(&local_228,uVar9,&local_100);
            local_f0 = local_218;
            local_100 = CONCAT44(uStack_224,local_228);
            uStack_f8 = CONCAT44(uStack_21c,uStack_220);
            pcVar3 = (code *)*puVar15;
            plVar10 = (longlong *)puVar15[2];
            if ((longlong *)puVar15[2] == (longlong *)0x0) {
              plVar10 = plVar12;
            }
            uVar9 = (**(code **)(*plVar10 + 8))();
            (*pcVar3)(&local_228,uVar9,&local_e8);
            local_d8 = local_218;
            local_e8 = local_228;
            uStack_e4 = uStack_224;
            uStack_e0 = uStack_220;
            uStack_dc = uStack_21c;
          }
          puVar14 = &local_118;
          puVar15 = local_1a8;
          for (lVar11 = 9; lVar11 != 0; lVar11 = lVar11 + -1) {
            *puVar15 = *puVar14;
            puVar14 = puVar14 + 1;
            puVar15 = puVar15 + 1;
          }
          local_210 = -1.0;
          if (0 < local_274) {
            local_270 = local_270 << 0x20;
            uVar8 = local_268 & 0xffffffff;
            iVar18 = local_274;
            do {
              uVar7 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (uVar8 >> 9) * 8) +
                               (ulonglong)((uint)uVar8 & 0x1ff) * 4);
              pcVar3 = *(code **)(param_9 + 0x10);
              if (pcVar3 == (code *)0x0) {
LAB_1482fa84d:
                lVar11 = *(longlong *)(**(longlong **)(param_1 + 8) + 0x10);
                lVar4 = *(longlong *)
                         (*(longlong *)(**(longlong **)(param_1 + 8) + 0x130) +
                         (ulonglong)(uVar7 >> 9) * 8);
                uVar16 = (ulonglong)uVar7 & 0x1ff;
                uVar13 = *(uint *)(lVar4 + uVar16 * 0xc);
                lVar5 = *(longlong *)(lVar11 + (ulonglong)(uVar13 >> 9) * 8);
                uVar17 = (ulonglong)uVar13 & 0x1ff;
                local_c8[2] = *(undefined8 *)(lVar5 + 0x10 + uVar17 * 0x18);
                puVar14 = (undefined8 *)(lVar5 + uVar17 * 0x18);
                local_c8[0] = *puVar14;
                local_c8[1] = puVar14[1];
                uVar13 = *(uint *)(lVar4 + 4 + uVar16 * 0xc);
                lVar5 = *(longlong *)(lVar11 + (ulonglong)(uVar13 >> 9) * 8);
                uVar17 = (ulonglong)uVar13 & 0x1ff;
                local_a0 = *(undefined8 *)(lVar5 + 0x10 + uVar17 * 0x18);
                puVar14 = (undefined8 *)(lVar5 + uVar17 * 0x18);
                local_c8[3] = *puVar14;
                uStack_a8 = puVar14[1];
                uVar13 = *(uint *)(lVar4 + 8 + uVar16 * 0xc);
                lVar11 = *(longlong *)(lVar11 + (ulonglong)(uVar13 >> 9) * 8);
                uVar16 = (ulonglong)uVar13 & 0x1ff;
                local_88 = *(undefined8 *)(lVar11 + 0x10 + uVar16 * 0x18);
                puVar2 = (undefined4 *)(lVar11 + uVar16 * 0x18);
                local_98 = *puVar2;
                uStack_94 = puVar2[1];
                uStack_90 = puVar2[2];
                uStack_8c = puVar2[3];
                puVar14 = local_c8;
                puVar15 = local_160;
                for (lVar11 = 9; lVar11 != 0; lVar11 = lVar11 + -1) {
                  *puVar15 = *puVar14;
                  puVar14 = puVar14 + 1;
                  puVar15 = puVar15 + 1;
                }
                local_210 = -1.0;
                dVar21 = (double)FUN_146bd8e44(&local_210);
                if (dVar21 < *param_7) {
                  *param_7 = dVar21;
                  *param_8 = uVar7 | local_270;
                }
              }
              else {
                plVar12 = *(longlong **)(param_9 + 0x20);
                if (*(longlong **)(param_9 + 0x20) == (longlong *)0x0) {
                  plVar12 = (longlong *)(param_9 + 0x30);
                }
                local_228 = uVar7;
                uVar9 = (**(code **)(*plVar12 + 8))();
                cVar6 = (*pcVar3)(uVar9,&local_228);
                if (cVar6 != '\0') goto LAB_1482fa84d;
              }
              uVar8 = (ulonglong)((uint)uVar8 + 1);
              iVar18 = iVar18 + -1;
            } while (iVar18 != 0);
          }
        }
        else {
          plVar12 = *(longlong **)(param_10 + 0x20);
          if (*(longlong **)(param_10 + 0x20) == (longlong *)0x0) {
            plVar12 = local_240;
          }
          local_228 = uVar7;
          uVar9 = (**(code **)(*plVar12 + 8))();
          cVar6 = (*pcVar3)(uVar9,&local_228);
          if (cVar6 != '\0') goto LAB_1482fa5f6;
        }
        uVar8 = (ulonglong)((int)local_230 + 1);
      } while ((int)local_230 != local_25c);
    }
    goto LAB_1482fa991;
  }
  bVar19 = (param_6 & 1) == 0;
  if ((bVar19 || (int)uVar7 < iVar18) &&
      (*(int *)(param_3 + 200) <= (int)uVar13 || !bVar19 && (int)uVar7 >= iVar18)) {
    uVar8 = (ulonglong)((param_2 >> 9) << 3);
    lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x88) + uVar8);
    lVar5 = (ulonglong)((param_2 & 0x1ff) << 3) * 3;
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + uVar8);
    local_1e8 = *(double *)(lVar11 + 0x10 + lVar5);
    dVar21 = *(double *)(lVar4 + 0x10 + lVar5);
    local_200 = local_1e8 - dVar21;
    local_1f0 = *(double *)(lVar11 + 8 + lVar5);
    dVar22 = *(double *)(lVar4 + 8 + lVar5);
    local_208 = local_1f0 - dVar22;
    local_210 = *(double *)(lVar11 + lVar5) - *(double *)(lVar4 + lVar5);
    local_1e8 = local_1e8 + dVar21;
    local_1f0 = local_1f0 + dVar22;
    local_1f8 = *(double *)(lVar11 + lVar5) + *(double *)(lVar4 + lVar5);
    param_5 = *(uint *)(*(longlong *)(*(longlong *)(param_3 + 0xb8) + (ulonglong)(uVar13 >> 9) * 8)
                       + (ulonglong)(uVar13 & 0x1ff) * 4);
    if ((int)param_5 < 0) {
      FUN_1482fae98(param_3,local_c8,~param_5,param_4);
      dVar21 = (double)FUN_146bd8cba(local_c8,&local_210);
      param_5 = ~param_5;
      if (*param_7 <= dVar21) goto LAB_1482fa991;
    }
    else {
      param_5 = param_5 - 1;
      uVar7 = *(int *)(*(longlong *)
                        (*(longlong *)(param_3 + 0xb8) + (ulonglong)(uVar13 + 1 >> 9) * 8) +
                      (ulonglong)(uVar13 + 1 & 0x1ff) * 4) - 1;
      FUN_1482fae98(param_3,local_c8,param_5,param_4);
      FUN_1482fae98(param_3,&local_118,uVar7,param_4);
      dVar22 = (double)FUN_146bd8cba(local_c8,&local_210);
      dVar23 = (double)FUN_146bd8cba(&local_118,&local_210);
      dVar21 = *param_7;
      uVar20 = SUB84(dVar21,0);
      uVar24 = (undefined4)((ulonglong)dVar21 >> 0x20);
      if (dVar23 < dVar22) {
        uVar13 = param_2;
        if (dVar23 < dVar21) goto LAB_1482fadcc;
        goto LAB_1482faced;
      }
      if (dVar22 < dVar21) {
        local_2a0 = param_6 + 1;
        local_280 = param_10;
        local_288 = param_9;
        local_290 = param_8;
        local_298 = param_7;
        local_2a8 = param_5;
        FUN_1482fa426(param_1,param_2,param_3,param_4);
        uVar20 = SUB84(*param_7,0);
        uVar24 = (undefined4)((ulonglong)*param_7 >> 0x20);
      }
      param_5 = uVar7;
      if ((double)CONCAT44(uVar24,uVar20) < dVar23 || (double)CONCAT44(uVar24,uVar20) == dVar23)
      goto LAB_1482fa991;
    }
  }
  else {
    FUN_1482fae98(param_3,&local_210,param_5,param_4);
    param_2 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar7 >> 9) * 8) +
                       (ulonglong)(uVar7 & 0x1ff) * 4);
    if ((int)param_2 < 0) {
      param_2 = ~param_2;
      dVar21 = (double)FUN_1482fb07e(param_1,param_2,&local_210);
      if (*param_7 <= dVar21) goto LAB_1482fa991;
    }
    else {
      uVar13 = param_2 - 1;
      param_2 = *(int *)(*(longlong *)
                          (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar7 + 1 >> 9) * 8) +
                        (ulonglong)(uVar7 + 1 & 0x1ff) * 4) - 1;
      dVar22 = (double)FUN_1482fb07e(param_1,uVar13,&local_210);
      dVar23 = (double)FUN_1482fb07e(param_1,param_2,&local_210);
      dVar21 = *param_7;
      uVar20 = SUB84(dVar21,0);
      uVar24 = (undefined4)((ulonglong)dVar21 >> 0x20);
      if (dVar22 <= dVar23) {
        if (dVar22 < dVar21) {
          local_2a0 = param_6 + 1;
          local_280 = param_10;
          local_288 = param_9;
          local_290 = param_8;
          local_298 = param_7;
          local_2a8 = param_5;
          FUN_1482fa426(param_1,uVar13,param_3,param_4);
          uVar20 = SUB84(*param_7,0);
          uVar24 = (undefined4)((ulonglong)*param_7 >> 0x20);
        }
        if ((double)CONCAT44(uVar24,uVar20) < dVar23 || (double)CONCAT44(uVar24,uVar20) == dVar23)
        goto LAB_1482fa991;
      }
      else {
        if (dVar23 < dVar21) {
          local_2a8 = param_5;
          uVar7 = local_2a8;
LAB_1482fadcc:
          local_2a8 = uVar7;
          local_2a0 = param_6 + 1;
          local_280 = param_10;
          local_288 = param_9;
          local_290 = param_8;
          local_298 = param_7;
          FUN_1482fa426(param_1,param_2,param_3,param_4);
          uVar20 = SUB84(*param_7,0);
          uVar24 = (undefined4)((ulonglong)*param_7 >> 0x20);
        }
LAB_1482faced:
        param_2 = uVar13;
        if ((double)CONCAT44(uVar24,uVar20) < dVar22 || (double)CONCAT44(uVar24,uVar20) == dVar22)
        goto LAB_1482fa991;
      }
    }
  }
  local_2a0 = param_6 + 1;
  local_298 = param_7;
  local_2a8 = param_5;
  local_290 = param_8;
  local_288 = param_9;
  local_280 = param_10;
  FUN_1482fa426(param_1,param_2,param_3,param_4);
LAB_1482fa991:
  if ((local_80 ^ (ulonglong)auStack_2c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1482fae98 FUN_1482fae98 body=484 status=ok
// SIG undefined FUN_1482fae98(void)

double * FUN_1482fae98(longlong param_1,double *param_2,uint param_3,longlong *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_d8 [32];
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  longlong *local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*param_4 == 0) {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x88) + (ulonglong)(param_3 >> 9) * 8);
    lVar9 = (ulonglong)((param_3 & 0x1ff) << 3) * 3;
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)(param_3 >> 9) * 8);
    dVar1 = *(double *)(lVar7 + 0x10 + lVar9);
    dVar2 = *(double *)(lVar8 + 0x10 + lVar9);
    dVar3 = *(double *)(lVar7 + lVar9);
    dVar4 = *(double *)(lVar7 + 8 + lVar9);
    dVar5 = *(double *)(lVar8 + lVar9);
    dVar6 = *(double *)(lVar8 + 8 + lVar9);
    *param_2 = dVar3 - dVar5;
    param_2[1] = dVar4 - dVar6;
    param_2[2] = dVar1 - dVar2;
    param_2[3] = dVar3 + dVar5;
    param_2[4] = dVar4 + dVar6;
    param_2[5] = dVar1 + dVar2;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x88) + (ulonglong)(param_3 >> 9) * 8);
    lVar9 = (ulonglong)((param_3 & 0x1ff) << 3) * 3;
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)(param_3 >> 9) * 8);
    local_90 = *(double *)(lVar7 + 0x10 + lVar9);
    dVar1 = *(double *)(lVar8 + 0x10 + lVar9);
    local_a8 = local_90 - dVar1;
    local_98 = *(double *)(lVar7 + 8 + lVar9);
    dVar2 = *(double *)(lVar8 + 8 + lVar9);
    local_b0 = local_98 - dVar2;
    local_b8 = *(double *)(lVar7 + lVar9) - *(double *)(lVar8 + lVar9);
    local_90 = local_90 + dVar1;
    local_98 = local_98 + dVar2;
    local_a0 = *(double *)(lVar7 + lVar9) + *(double *)(lVar8 + lVar9);
    local_78 = 0;
    local_68 = &PTR_LAB_14ae72ca0;
    local_88 = FUN_1482fb184;
    local_60 = param_4;
    FUN_146bda188(param_2);
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482fb07e FUN_1482fb07e body=260 status=ok
// SIG undefined FUN_1482fb07e(void)

void FUN_1482fb07e(longlong param_1,uint param_2,undefined8 param_3)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_98 [40];
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = *(double *)(param_1 + 0x60);
  lVar4 = (ulonglong)((param_2 & 0x1ff) << 3) * 3;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)(param_2 >> 9) * 8);
  local_58 = *(double *)(lVar3 + lVar4) + local_48;
  local_50 = *(double *)(lVar3 + 8 + lVar4) + local_48;
  local_48 = local_48 + *(double *)(lVar3 + 0x10 + lVar4);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x88) + (ulonglong)(param_2 >> 9) * 8);
  dVar1 = *(double *)(lVar3 + 0x10 + lVar4);
  local_60 = dVar1 - local_48;
  dVar2 = *(double *)(lVar3 + 8 + lVar4);
  local_68 = dVar2 - local_50;
  local_70 = *(double *)(lVar3 + lVar4) - local_58;
  local_48 = local_48 + dVar1;
  local_50 = local_50 + dVar2;
  local_58 = local_58 + *(double *)(lVar3 + lVar4);
  FUN_146bd8cba(&local_70,param_3);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482fb184 FUN_1482fb184 body=62 status=ok
// SIG undefined FUN_1482fb184(void)

undefined8 FUN_1482fb184(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  puVar1 = (undefined8 *)*param_2;
  pcVar2 = (code *)*puVar1;
  plVar4 = puVar1 + 4;
  if ((longlong *)puVar1[2] != (longlong *)0x0) {
    plVar4 = (longlong *)puVar1[2];
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(param_1,uVar3,param_3);
  return param_1;
}



// FUNCTION 1482fb1ec FUN_1482fb1ec body=29 status=ok
// SIG undefined FUN_1482fb1ec(void)

undefined8 FUN_1482fb1ec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1482fb20a FUN_1482fb20a body=828 status=ok
// SIG undefined FUN_1482fb20a(void)

ulonglong FUN_1482fb20a(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 *param_5,longlong param_6)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  undefined8 uVar8;
  longlong *plVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  uint uVar15;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  uint local_9c;
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
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar10 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                    (ulonglong)(param_2 & 0x1ff) * 4);
  local_d8 = param_3;
  if ((int)uVar10 < *(int *)(param_1 + 200)) {
    iVar14 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar10 >> 9) * 8) +
                     (ulonglong)(uVar10 & 0x1ff) * 4);
    if (0 < iVar14) {
      do {
        uVar10 = uVar10 + 1;
        uVar15 = *(uint *)(*(longlong *)
                            (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar10 >> 9) * 8) +
                          (ulonglong)(uVar10 & 0x1ff) * 4);
        uVar13 = (ulonglong)uVar15;
        pcVar3 = *(code **)(param_6 + 0x10);
        if (pcVar3 == (code *)0x0) {
LAB_1482fb2ef:
          lVar4 = **(longlong **)(param_1 + 8);
          lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x130) + (ulonglong)(uVar15 >> 9) * 8);
          uVar11 = uVar13 & 0x1ff;
          uVar15 = *(uint *)(lVar5 + uVar11 * 0xc);
          lVar6 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + (ulonglong)(uVar15 >> 9) * 8);
          uVar12 = (ulonglong)uVar15 & 0x1ff;
          local_88 = *(undefined8 *)(lVar6 + 0x10 + uVar12 * 0x18);
          puVar1 = (undefined8 *)(lVar6 + uVar12 * 0x18);
          local_98 = *puVar1;
          uStack_90 = puVar1[1];
          uVar15 = *(uint *)(lVar5 + 4 + uVar11 * 0xc);
          lVar6 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + (ulonglong)(uVar15 >> 9) * 8);
          uVar12 = (ulonglong)uVar15 & 0x1ff;
          local_70 = *(undefined8 *)(lVar6 + 0x10 + uVar12 * 0x18);
          puVar1 = (undefined8 *)(lVar6 + uVar12 * 0x18);
          local_80 = *puVar1;
          uStack_78 = puVar1[1];
          uVar15 = *(uint *)(lVar5 + 8 + uVar11 * 0xc);
          lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + (ulonglong)(uVar15 >> 9) * 8);
          uVar12 = (ulonglong)uVar15 & 0x1ff;
          local_58 = *(undefined8 *)(lVar4 + 0x10 + uVar12 * 0x18);
          puVar2 = (undefined4 *)(lVar4 + uVar12 * 0x18);
          local_68 = *puVar2;
          uStack_64 = puVar2[1];
          uStack_60 = puVar2[2];
          uStack_5c = puVar2[3];
          cVar7 = (*(code *)*param_5)(param_5[1],local_d8,&local_98);
          if (cVar7 != '\0') goto LAB_1482fb3c6;
        }
        else {
          plVar9 = *(longlong **)(param_6 + 0x20);
          if (*(longlong **)(param_6 + 0x20) == (longlong *)0x0) {
            plVar9 = (longlong *)(param_6 + 0x30);
          }
          local_9c = uVar15;
          uVar8 = (**(code **)(*plVar9 + 8))();
          cVar7 = (*pcVar3)(uVar8,&local_9c);
          if (cVar7 != '\0') goto LAB_1482fb2ef;
        }
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
    }
    uVar13 = 0xffffffff;
  }
  else {
    uVar15 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar10 >> 9) * 8) +
                      (ulonglong)(uVar10 & 0x1ff) * 4);
    if ((int)uVar15 < 0) {
      uVar15 = ~uVar15;
      cVar7 = FUN_1482fb548(param_1,uVar15,param_4);
      uVar13 = 0xffffffff;
      if (cVar7 == '\0') goto LAB_1482fb3c6;
      local_b0 = *param_5;
      local_e8 = &local_b0;
      local_a8 = param_5[1];
    }
    else {
      iVar14 = *(int *)(*(longlong *)
                         (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar10 + 1 >> 9) * 8) +
                       (ulonglong)(uVar10 + 1 & 0x1ff) * 4);
      cVar7 = FUN_1482fb548(param_1,uVar15 - 1,param_4);
      if (cVar7 != '\0') {
        local_c0 = *param_5;
        local_e8 = &local_c0;
        local_b8 = param_5[1];
        local_e0 = param_6;
        uVar10 = FUN_1482fb20a(param_1,uVar15 - 1,local_d8,param_4);
        uVar13 = (ulonglong)uVar10;
        if (uVar10 != 0xffffffff) goto LAB_1482fb3c6;
      }
      uVar15 = iVar14 - 1;
      cVar7 = FUN_1482fb548(param_1,uVar15,param_4);
      uVar13 = 0xffffffff;
      if (cVar7 == '\0') goto LAB_1482fb3c6;
      local_d0 = *param_5;
      local_e8 = &local_d0;
      local_c8 = param_5[1];
    }
    local_e0 = param_6;
    uVar10 = FUN_1482fb20a(param_1,uVar15,local_d8,param_4);
    uVar13 = (ulonglong)uVar10;
  }
LAB_1482fb3c6:
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482fb548 FUN_1482fb548 body=191 status=ok
// SIG undefined FUN_1482fb548(void)

bool FUN_1482fb548(longlong param_1,uint param_2,double *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar5 = *(double *)(param_1 + 0x60);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x88) + (ulonglong)(param_2 >> 9) * 8);
  lVar3 = (ulonglong)((param_2 & 0x1ff) << 3) * 3;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)(param_2 >> 9) * 8);
  dVar6 = *(double *)(lVar2 + lVar3) + dVar5;
  bVar4 = false;
  if ((*(double *)(lVar1 + lVar3) - dVar6 < param_3[3]) &&
     (*param_3 < dVar6 + *(double *)(lVar1 + lVar3))) {
    dVar7 = *(double *)(lVar2 + 8 + lVar3) + dVar5;
    dVar6 = *(double *)(lVar1 + 8 + lVar3);
    if ((dVar6 - dVar7 < param_3[4]) && (bVar4 = false, param_3[1] < dVar7 + dVar6)) {
      dVar5 = dVar5 + *(double *)(lVar2 + 0x10 + lVar3);
      dVar6 = *(double *)(lVar1 + 0x10 + lVar3);
      if (dVar6 - dVar5 < param_3[5]) {
        bVar4 = param_3[2] < dVar6 + dVar5;
      }
    }
  }
  return bVar4;
}



// FUNCTION 1482fb61c FUN_1482fb61c body=2646 status=ok
// SIG undefined FUN_1482fb61c(void)

ulonglong FUN_1482fb61c(longlong param_1,uint param_2,longlong param_3,undefined8 *param_4,
                       uint param_5,uint param_6,undefined8 *param_7,longlong param_8,
                       longlong param_9)

{
  double *pdVar1;
  uint *puVar2;
  undefined4 *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  uint uVar8;
  code *pcVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined8 *puVar16;
  char cVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined8 uVar20;
  uint *puVar21;
  longlong *plVar22;
  longlong *plVar23;
  longlong *plVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  int iVar27;
  bool bVar28;
  undefined1 auStack_258 [32];
  uint local_238;
  int local_230;
  undefined8 *local_228;
  longlong local_220;
  longlong local_218;
  undefined8 *local_210;
  int local_204;
  int local_200;
  uint local_1fc;
  longlong local_1f8;
  longlong *local_1f0;
  longlong *local_1e8;
  ulonglong local_1e0;
  longlong *local_1d8;
  ulonglong local_1d0;
  ulonglong local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190 [2];
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170 [2];
  uint local_160;
  uint uStack_15c;
  uint uStack_158;
  uint uStack_154;
  uint *local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  uint *local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  uint *local_120;
  uint local_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  uint *local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double local_e0;
  double dStack_d8;
  double local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_258;
  uVar18 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                    (ulonglong)(param_2 & 0x1ff) * 4);
  uVar8 = *(uint *)(*(longlong *)(*(longlong *)(param_3 + 0x70) + (ulonglong)(param_5 >> 9) * 8) +
                   (ulonglong)(param_5 & 0x1ff) * 4);
  iVar27 = *(int *)(param_1 + 200);
  local_210 = param_4;
  if (((int)uVar18 < iVar27) && ((int)uVar8 < *(int *)(param_3 + 200))) {
    local_200 = *(int *)(*(longlong *)(*(longlong *)(param_3 + 0xb8) + (ulonglong)(uVar8 >> 9) * 8)
                        + (ulonglong)(uVar8 & 0x1ff) * 4);
    if (0 < local_200) {
      local_204 = *(int *)(*(longlong *)
                            (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar18 >> 9) * 8) +
                          (ulonglong)(uVar18 & 0x1ff) * 4);
      local_1d8 = (longlong *)(param_9 + 0x30);
      local_1e8 = param_4 + 4;
      plVar22 = (longlong *)(param_8 + 0x30);
      local_1e0 = (ulonglong)(uVar18 + 1);
      uVar19 = 1;
      uVar26 = CONCAT71((uint7)(uint3)((uint)iVar27 >> 8),1);
      local_1f8 = param_3;
      local_1f0 = plVar22;
      local_1d0 = (ulonglong)uVar8;
      do {
        local_1fc = (uint)uVar26;
        uVar18 = (int)uVar19 + (int)local_1d0;
        uVar18 = *(uint *)(*(longlong *)
                            (*(longlong *)(local_1f8 + 0xb8) + (ulonglong)(uVar18 >> 9) * 8) +
                          (ulonglong)(uVar18 & 0x1ff) * 4);
        pcVar9 = *(code **)(param_9 + 0x10);
        local_1c8 = uVar19;
        if (pcVar9 == (code *)0x0) {
LAB_1482fb7ee:
          plVar24 = local_1e8;
          puVar16 = local_210;
          lVar10 = **(longlong **)(local_1f8 + 8);
          lVar11 = *(longlong *)(*(longlong *)(lVar10 + 0x130) + (ulonglong)(uVar18 >> 9) * 8);
          uVar19 = (ulonglong)uVar18 & 0x1ff;
          uVar18 = *(uint *)(lVar11 + uVar19 * 0xc);
          lVar12 = *(longlong *)(*(longlong *)(lVar10 + 0x10) + (ulonglong)(uVar18 >> 9) * 8);
          uVar26 = (ulonglong)uVar18 & 0x1ff;
          local_138 = *(uint **)(lVar12 + 0x10 + uVar26 * 0x18);
          pdVar1 = (double *)(lVar12 + uVar26 * 0x18);
          local_148 = *pdVar1;
          uStack_140 = pdVar1[1];
          uVar18 = *(uint *)(lVar11 + 4 + uVar19 * 0xc);
          lVar12 = *(longlong *)(*(longlong *)(lVar10 + 0x10) + (ulonglong)(uVar18 >> 9) * 8);
          uVar26 = (ulonglong)uVar18 & 0x1ff;
          local_120 = *(uint **)(lVar12 + 0x10 + uVar26 * 0x18);
          pdVar1 = (double *)(lVar12 + uVar26 * 0x18);
          local_130 = *pdVar1;
          uStack_128 = pdVar1[1];
          uVar18 = *(uint *)(lVar11 + 8 + uVar19 * 0xc);
          lVar10 = *(longlong *)(*(longlong *)(lVar10 + 0x10) + (ulonglong)(uVar18 >> 9) * 8);
          uVar26 = (ulonglong)uVar18 & 0x1ff;
          puVar21 = *(uint **)(lVar10 + 0x10 + uVar26 * 0x18);
          puVar2 = (uint *)(lVar10 + uVar26 * 0x18);
          local_118 = *puVar2;
          uStack_114 = puVar2[1];
          uStack_110 = puVar2[2];
          uStack_10c = puVar2[3];
          pcVar9 = (code *)*local_210;
          local_108 = puVar21;
          if (pcVar9 != (code *)0x0) {
            plVar22 = (longlong *)local_210[2];
            if ((longlong *)local_210[2] == (longlong *)0x0) {
              plVar22 = local_1e8;
            }
            uVar20 = (**(code **)(*plVar22 + 8))();
            (*pcVar9)(&local_160,uVar20,&local_148);
            local_138 = local_150;
            local_148 = (double)CONCAT44(uStack_15c,local_160);
            uStack_140 = (double)CONCAT44(uStack_154,uStack_158);
            pcVar9 = (code *)*puVar16;
            plVar22 = (longlong *)puVar16[2];
            if ((longlong *)puVar16[2] == (longlong *)0x0) {
              plVar22 = plVar24;
            }
            uVar20 = (**(code **)(*plVar22 + 8))();
            (*pcVar9)(&local_160,uVar20,&local_130);
            plVar22 = local_1f0;
            local_120 = local_150;
            local_130 = (double)CONCAT44(uStack_15c,local_160);
            uStack_128 = (double)CONCAT44(uStack_154,uStack_158);
            pcVar9 = (code *)*puVar16;
            plVar23 = (longlong *)puVar16[2];
            if ((longlong *)puVar16[2] == (longlong *)0x0) {
              plVar23 = plVar24;
            }
            puVar21 = (uint *)(**(code **)(*plVar23 + 8))();
            (*pcVar9)(&local_160,puVar21,&local_118);
            local_108 = local_150;
            local_118 = local_160;
            uStack_114 = uStack_15c;
            uStack_110 = uStack_158;
            uStack_10c = uStack_154;
          }
          if (0 < local_204) {
            uVar26 = local_1e0 & 0xffffffff;
            iVar27 = local_204;
            do {
              uVar18 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (uVar26 >> 9) * 8) +
                                (ulonglong)((uint)uVar26 & 0x1ff) * 4);
              pcVar9 = *(code **)(param_8 + 0x10);
              if (pcVar9 == (code *)0x0) {
LAB_1482fba05:
                lVar10 = **(longlong **)(param_1 + 8);
                lVar11 = *(longlong *)(*(longlong *)(lVar10 + 0x130) + (ulonglong)(uVar18 >> 9) * 8)
                ;
                uVar25 = (ulonglong)uVar18 & 0x1ff;
                uVar18 = *(uint *)(lVar11 + uVar25 * 0xc);
                lVar12 = *(longlong *)(*(longlong *)(lVar10 + 0x10) + (ulonglong)(uVar18 >> 9) * 8);
                uVar19 = (ulonglong)uVar18 & 0x1ff;
                local_e8 = *(double *)(lVar12 + 0x10 + uVar19 * 0x18);
                pdVar1 = (double *)(lVar12 + uVar19 * 0x18);
                local_f8 = *pdVar1;
                dStack_f0 = pdVar1[1];
                uVar18 = *(uint *)(lVar11 + 4 + uVar25 * 0xc);
                lVar12 = *(longlong *)(*(longlong *)(lVar10 + 0x10) + (ulonglong)(uVar18 >> 9) * 8);
                uVar19 = (ulonglong)uVar18 & 0x1ff;
                local_d0 = *(double *)(lVar12 + 0x10 + uVar19 * 0x18);
                pdVar1 = (double *)(lVar12 + uVar19 * 0x18);
                local_e0 = *pdVar1;
                dStack_d8 = pdVar1[1];
                uVar18 = *(uint *)(lVar11 + 8 + uVar25 * 0xc);
                lVar10 = *(longlong *)(*(longlong *)(lVar10 + 0x10) + (ulonglong)(uVar18 >> 9) * 8);
                uVar19 = (ulonglong)uVar18 & 0x1ff;
                local_b8 = *(undefined8 *)(lVar10 + 0x10 + uVar19 * 0x18);
                puVar3 = (undefined4 *)(lVar10 + uVar19 * 0x18);
                local_c8 = *puVar3;
                uStack_c4 = puVar3[1];
                uStack_c0 = puVar3[2];
                uStack_bc = puVar3[3];
                puVar21 = (uint *)&local_148;
                cVar17 = (*(code *)*param_7)(param_7[1],puVar21,&local_f8);
                if (cVar17 != '\0') {
                  uVar26 = (ulonglong)local_1fc;
                  goto LAB_1482fbb0a;
                }
              }
              else {
                plVar24 = *(longlong **)(param_8 + 0x20);
                if (*(longlong **)(param_8 + 0x20) == (longlong *)0x0) {
                  plVar24 = plVar22;
                }
                local_160 = uVar18;
                uVar20 = (**(code **)(*plVar24 + 8))();
                puVar21 = &local_160;
                cVar17 = (*pcVar9)(uVar20,puVar21);
                if (cVar17 != '\0') goto LAB_1482fba05;
              }
              uVar26 = (ulonglong)((uint)uVar26 + 1);
              iVar27 = iVar27 + -1;
            } while (iVar27 != 0);
          }
        }
        else {
          plVar24 = *(longlong **)(param_9 + 0x20);
          if (*(longlong **)(param_9 + 0x20) == (longlong *)0x0) {
            plVar24 = local_1d8;
          }
          local_160 = uVar18;
          uVar20 = (**(code **)(*plVar24 + 8))();
          puVar21 = &local_160;
          cVar17 = (*pcVar9)(uVar20,puVar21);
          if (cVar17 != '\0') goto LAB_1482fb7ee;
        }
        iVar27 = (int)local_1c8;
        uVar19 = (ulonglong)(iVar27 + 1);
        uVar26 = CONCAT71((int7)((ulonglong)puVar21 >> 8),iVar27 < local_200);
      } while (iVar27 != local_200);
      goto LAB_1482fbb0a;
    }
    goto LAB_1482fbbf7;
  }
  bVar28 = (param_6 & 1) == 0;
  if ((bVar28 || (int)uVar18 < iVar27) &&
      (*(int *)(param_3 + 200) <= (int)uVar8 || !bVar28 && (int)uVar18 >= iVar27)) {
    uVar26 = (ulonglong)((param_2 >> 9) << 3);
    lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x88) + uVar26);
    lVar12 = (ulonglong)((param_2 & 0x1ff) << 3) * 3;
    lVar11 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + uVar26);
    dVar4 = *(double *)(lVar10 + 0x10 + lVar12);
    dVar5 = *(double *)(lVar11 + 0x10 + lVar12);
    dVar13 = dVar4 - dVar5;
    dVar6 = *(double *)(lVar10 + 8 + lVar12);
    dVar7 = *(double *)(lVar11 + 8 + lVar12);
    dVar14 = dVar6 - dVar7;
    dVar15 = *(double *)(lVar10 + lVar12) - *(double *)(lVar11 + lVar12);
    dVar4 = dVar4 + dVar5;
    dVar6 = dVar6 + dVar7;
    dVar5 = *(double *)(lVar10 + lVar12) + *(double *)(lVar11 + lVar12);
    uVar18 = *(uint *)(*(longlong *)(*(longlong *)(param_3 + 0xb8) + (ulonglong)(uVar8 >> 9) * 8) +
                      (ulonglong)(uVar8 & 0x1ff) * 4);
    if ((int)uVar18 < 0) {
      FUN_1482fae98(param_3,&local_f8,~uVar18,param_4);
      if ((((dVar5 <= local_f8) || (local_e0 <= dVar15)) ||
          ((dVar6 <= dStack_f0 || ((dStack_d8 <= dVar14 || (dVar4 <= local_e8)))))) ||
         (local_d0 <= dVar13)) goto LAB_1482fbbf7;
      uVar20 = *param_7;
      local_228 = local_170;
    }
    else {
      iVar27 = *(int *)(*(longlong *)
                         (*(longlong *)(param_3 + 0xb8) + (ulonglong)(uVar8 + 1 >> 9) * 8) +
                       (ulonglong)(uVar8 + 1 & 0x1ff) * 4);
      FUN_1482fae98(param_3,&local_f8,uVar18 - 1,param_4);
      if (((((local_f8 < dVar5) && (dVar15 < local_e0)) && (dStack_f0 < dVar6)) &&
          ((dVar14 < dStack_d8 && (local_e8 < dVar4)))) && (dVar13 < local_d0)) {
        local_180 = *param_7;
        local_228 = &local_180;
        local_178 = param_7[1];
        local_230 = param_6 + 1;
        local_218 = param_9;
        local_220 = param_8;
        uVar26 = (ulonglong)param_2;
        local_238 = uVar18 - 1;
        cVar17 = FUN_1482fb61c(param_1,uVar26,param_3,local_210);
        uVar26 = CONCAT71((int7)(uVar26 >> 8),1);
        if (cVar17 != '\0') goto LAB_1482fbb0a;
      }
      param_5 = iVar27 - 1;
      FUN_1482fae98(param_3,&local_148,param_5,local_210);
      uVar19 = 0;
      uVar26 = 0;
      if (((dVar5 <= local_148) || (uVar26 = uVar19, local_130 <= dVar15)) ||
         ((dVar6 <= uStack_140 ||
          (((uStack_128 <= dVar14 || (dVar4 <= (double)local_138)) || ((double)local_120 <= dVar13))
          )))) goto LAB_1482fbb0a;
      uVar20 = *param_7;
      local_228 = local_190;
    }
    *local_228 = uVar20;
    local_228[1] = param_7[1];
    param_4 = local_210;
    local_238 = param_5;
LAB_1482fbd6e:
    local_218 = param_9;
    local_220 = param_8;
    local_230 = param_6 + 1;
    uVar18 = FUN_1482fb61c(param_1,param_2,param_3,param_4);
    uVar26 = (ulonglong)uVar18;
  }
  else {
    FUN_1482fae98(param_3,&local_f8,param_5,param_4);
    param_2 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar18 >> 9) * 8)
                       + (ulonglong)(uVar18 & 0x1ff) * 4);
    if ((int)param_2 < 0) {
      param_2 = ~param_2;
      cVar17 = FUN_1482fb548(param_1,param_2,&local_f8);
      if (cVar17 != '\0') {
        local_1a0 = *param_7;
        local_228 = &local_1a0;
        local_198 = param_7[1];
        local_238 = param_5;
        goto LAB_1482fbd6e;
      }
    }
    else {
      iVar27 = *(int *)(*(longlong *)
                         (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar18 + 1 >> 9) * 8) +
                       (ulonglong)(uVar18 + 1 & 0x1ff) * 4);
      cVar17 = FUN_1482fb548(param_1,param_2 - 1,&local_f8);
      if (cVar17 != '\0') {
        local_1b0 = *param_7;
        local_228 = &local_1b0;
        local_1a8 = param_7[1];
        local_230 = param_6 + 1;
        local_218 = param_9;
        local_220 = param_8;
        local_238 = param_5;
        uVar26 = (ulonglong)(param_2 - 1);
        cVar17 = FUN_1482fb61c(param_1,uVar26,param_3,local_210);
        uVar26 = CONCAT71((int7)(uVar26 >> 8),1);
        if (cVar17 != '\0') goto LAB_1482fbb0a;
      }
      param_2 = iVar27 - 1;
      cVar17 = FUN_1482fb548(param_1,param_2,&local_f8);
      if (cVar17 != '\0') {
        local_1c0 = *param_7;
        local_228 = &local_1c0;
        local_1b8 = param_7[1];
        param_4 = local_210;
        local_238 = param_5;
        goto LAB_1482fbd6e;
      }
    }
LAB_1482fbbf7:
    uVar26 = 0;
  }
LAB_1482fbb0a:
  if ((local_b0 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar26 & 0xffffff01;
}



// FUNCTION 1482fc088 FUN_1482fc088 body=62 status=ok
// SIG undefined FUN_1482fc088(void)

undefined8 FUN_1482fc088(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  puVar1 = (undefined8 *)*param_2;
  pcVar2 = (code *)*puVar1;
  plVar4 = puVar1 + 4;
  if ((longlong *)puVar1[2] != (longlong *)0x0) {
    plVar4 = (longlong *)puVar1[2];
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(param_1,uVar3,param_3);
  return param_1;
}



// FUNCTION 1482fc0f0 FUN_1482fc0f0 body=29 status=ok
// SIG undefined FUN_1482fc0f0(void)

undefined8 FUN_1482fc0f0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1482fc10e FUN_1482fc10e body=2699 status=ok
// SIG undefined FUN_1482fc10e(void)

void FUN_1482fc10e(longlong param_1,uint param_2,longlong param_3,undefined8 *param_4,uint param_5,
                  uint param_6,undefined8 param_7,undefined8 *param_8,longlong param_9,
                  longlong param_10)

{
  uint *puVar1;
  undefined4 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  code *pcVar7;
  longlong lVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  char cVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  longlong *plVar19;
  longlong lVar20;
  longlong *plVar21;
  undefined8 *puVar22;
  double *pdVar23;
  undefined8 *puVar24;
  double *pdVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  int iVar28;
  bool bVar29;
  undefined1 auStack_3a8 [32];
  uint local_388;
  int local_380;
  undefined8 local_378;
  undefined8 *local_370;
  longlong local_368;
  longlong local_360;
  int local_354;
  ulonglong local_350;
  int local_344;
  undefined8 *local_340;
  longlong local_338;
  longlong *local_330;
  ulonglong local_328;
  longlong *local_320;
  ulonglong local_318;
  ulonglong local_310;
  longlong *local_308;
  undefined8 local_300 [2];
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0 [2];
  undefined8 local_2d0 [2];
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0 [2];
  uint local_2a0;
  uint uStack_29c;
  uint uStack_298;
  uint uStack_294;
  double local_290;
  undefined8 local_288;
  undefined8 uStack_280;
  double local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  double local_260;
  uint local_258;
  uint uStack_254;
  uint uStack_250;
  uint uStack_24c;
  double local_248;
  double local_238 [4];
  double dStack_218;
  double local_210;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined8 local_1e8 [9];
  double local_1a0 [9];
  undefined8 local_158;
  undefined1 local_150;
  ulonglong local_14c;
  undefined4 local_144;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  uVar16 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                    (ulonglong)(param_2 & 0x1ff) * 4);
  uVar6 = *(uint *)(*(longlong *)(*(longlong *)(param_3 + 0x70) + (ulonglong)(param_5 >> 9) * 8) +
                   (ulonglong)(param_5 & 0x1ff) * 4);
  local_158 = 0x3e45798ee2308c3a;
  local_150 = 0;
  local_14c = 0;
  local_144 = 0;
  iVar28 = *(int *)(param_1 + 200);
  if (((int)uVar16 < iVar28) && ((int)uVar6 < *(int *)(param_3 + 200))) {
    local_344 = *(int *)(*(longlong *)(*(longlong *)(param_3 + 0xb8) + (ulonglong)(uVar6 >> 9) * 8)
                        + (ulonglong)(uVar6 & 0x1ff) * 4);
    local_340 = param_4;
    if (0 < local_344) {
      local_354 = *(int *)(*(longlong *)
                            (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar16 >> 9) * 8) +
                          (ulonglong)(uVar16 & 0x1ff) * 4);
      local_320 = (longlong *)(param_10 + 0x30);
      local_330 = param_4 + 4;
      local_308 = (longlong *)(param_9 + 0x30);
      local_328 = (ulonglong)(uVar16 + 1);
      uVar17 = 1;
      local_338 = param_3;
      local_318 = (ulonglong)uVar6;
      do {
        uVar16 = (int)uVar17 + (int)local_318;
        uVar16 = *(uint *)(*(longlong *)
                            (*(longlong *)(local_338 + 0xb8) + (ulonglong)(uVar16 >> 9) * 8) +
                          (ulonglong)(uVar16 & 0x1ff) * 4);
        local_350 = (ulonglong)uVar16;
        pcVar7 = *(code **)(param_10 + 0x10);
        local_310 = uVar17;
        if (pcVar7 == (code *)0x0) {
LAB_1482fc32a:
          plVar21 = local_330;
          puVar22 = local_340;
          lVar20 = **(longlong **)(local_338 + 8);
          lVar8 = *(longlong *)(*(longlong *)(lVar20 + 0x130) + (local_350 >> 9 & 0x7fffff) * 8);
          uVar26 = local_350 & 0x1ff;
          uVar16 = *(uint *)(lVar8 + uVar26 * 0xc);
          lVar9 = *(longlong *)(*(longlong *)(lVar20 + 0x10) + (ulonglong)(uVar16 >> 9) * 8);
          uVar17 = (ulonglong)uVar16 & 0x1ff;
          local_278 = *(double *)(lVar9 + 0x10 + uVar17 * 0x18);
          pdVar23 = (double *)(lVar9 + uVar17 * 0x18);
          local_288 = *pdVar23;
          uStack_280 = pdVar23[1];
          uVar16 = *(uint *)(lVar8 + 4 + uVar26 * 0xc);
          lVar9 = *(longlong *)(*(longlong *)(lVar20 + 0x10) + (ulonglong)(uVar16 >> 9) * 8);
          uVar17 = (ulonglong)uVar16 & 0x1ff;
          local_260 = *(double *)(lVar9 + 0x10 + uVar17 * 0x18);
          pdVar23 = (double *)(lVar9 + uVar17 * 0x18);
          local_270 = *pdVar23;
          uStack_268 = pdVar23[1];
          uVar16 = *(uint *)(lVar8 + 8 + uVar26 * 0xc);
          lVar20 = *(longlong *)(*(longlong *)(lVar20 + 0x10) + (ulonglong)(uVar16 >> 9) * 8);
          uVar17 = (ulonglong)uVar16 & 0x1ff;
          local_248 = *(double *)(lVar20 + 0x10 + uVar17 * 0x18);
          puVar1 = (uint *)(lVar20 + uVar17 * 0x18);
          local_258 = *puVar1;
          uStack_254 = puVar1[1];
          uStack_250 = puVar1[2];
          uStack_24c = puVar1[3];
          pcVar7 = (code *)*local_340;
          if (pcVar7 != (code *)0x0) {
            plVar19 = (longlong *)local_340[2];
            if ((longlong *)local_340[2] == (longlong *)0x0) {
              plVar19 = local_330;
            }
            uVar18 = (**(code **)(*plVar19 + 8))();
            (*pcVar7)(&local_2a0,uVar18,&local_288);
            local_278 = local_290;
            local_288 = (double)CONCAT44(uStack_29c,local_2a0);
            uStack_280 = (double)CONCAT44(uStack_294,uStack_298);
            pcVar7 = (code *)*puVar22;
            plVar19 = (longlong *)puVar22[2];
            if ((longlong *)puVar22[2] == (longlong *)0x0) {
              plVar19 = plVar21;
            }
            uVar18 = (**(code **)(*plVar19 + 8))();
            (*pcVar7)(&local_2a0,uVar18,&local_270);
            local_260 = local_290;
            local_270 = (double)CONCAT44(uStack_29c,local_2a0);
            uStack_268 = (double)CONCAT44(uStack_294,uStack_298);
            pcVar7 = (code *)*puVar22;
            plVar19 = (longlong *)puVar22[2];
            if ((longlong *)puVar22[2] == (longlong *)0x0) {
              plVar19 = plVar21;
            }
            uVar18 = (**(code **)(*plVar19 + 8))();
            (*pcVar7)(&local_2a0,uVar18,&local_258);
            local_248 = local_290;
            local_258 = local_2a0;
            uStack_254 = uStack_29c;
            uStack_250 = uStack_298;
            uStack_24c = uStack_294;
          }
          local_14c = local_14c & 0xffffffff00000000;
          puVar22 = &local_288;
          puVar24 = local_1e8;
          for (lVar20 = 9; lVar20 != 0; lVar20 = lVar20 + -1) {
            *puVar24 = *puVar22;
            puVar22 = puVar22 + 1;
            puVar24 = puVar24 + 1;
          }
          if (0 < local_354) {
            uVar17 = local_328 & 0xffffffff;
            iVar28 = local_354;
            do {
              uVar16 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (uVar17 >> 9) * 8) +
                                (ulonglong)((uint)uVar17 & 0x1ff) * 4);
              pcVar7 = *(code **)(param_9 + 0x10);
              if (pcVar7 == (code *)0x0) {
LAB_1482fc57a:
                lVar20 = *(longlong *)(**(longlong **)(param_1 + 8) + 0x10);
                lVar8 = *(longlong *)
                         (*(longlong *)(**(longlong **)(param_1 + 8) + 0x130) +
                         (ulonglong)(uVar16 >> 9) * 8);
                uVar26 = (ulonglong)uVar16 & 0x1ff;
                uVar6 = *(uint *)(lVar8 + uVar26 * 0xc);
                lVar9 = *(longlong *)(lVar20 + (ulonglong)(uVar6 >> 9) * 8);
                uVar27 = (ulonglong)uVar6 & 0x1ff;
                local_238[2] = *(double *)(lVar9 + 0x10 + uVar27 * 0x18);
                pdVar23 = (double *)(lVar9 + uVar27 * 0x18);
                local_238[0] = *pdVar23;
                local_238[1] = pdVar23[1];
                uVar6 = *(uint *)(lVar8 + 4 + uVar26 * 0xc);
                lVar9 = *(longlong *)(lVar20 + (ulonglong)(uVar6 >> 9) * 8);
                uVar27 = (ulonglong)uVar6 & 0x1ff;
                local_210 = *(double *)(lVar9 + 0x10 + uVar27 * 0x18);
                pdVar23 = (double *)(lVar9 + uVar27 * 0x18);
                local_238[3] = *pdVar23;
                dStack_218 = pdVar23[1];
                uVar6 = *(uint *)(lVar8 + 8 + uVar26 * 0xc);
                lVar20 = *(longlong *)(lVar20 + (ulonglong)(uVar6 >> 9) * 8);
                uVar26 = (ulonglong)uVar6 & 0x1ff;
                local_1f8 = *(undefined8 *)(lVar20 + 0x10 + uVar26 * 0x18);
                puVar2 = (undefined4 *)(lVar20 + uVar26 * 0x18);
                local_208 = *puVar2;
                uStack_204 = puVar2[1];
                uStack_200 = puVar2[2];
                uStack_1fc = puVar2[3];
                local_14c = local_14c & 0xffffffff00000000;
                pdVar23 = local_238;
                pdVar25 = local_1a0;
                for (lVar20 = 9; lVar20 != 0; lVar20 = lVar20 + -1) {
                  *pdVar25 = *pdVar23;
                  pdVar23 = pdVar23 + 1;
                  pdVar25 = pdVar25 + 1;
                }
                cVar15 = (*(code *)*param_8)(param_8[1],local_1e8);
                if (cVar15 != '\0') {
                  FUN_1482fcbc8(local_1e8,(ulonglong)uVar16,local_350,param_7);
                }
              }
              else {
                plVar21 = *(longlong **)(param_9 + 0x20);
                if (*(longlong **)(param_9 + 0x20) == (longlong *)0x0) {
                  plVar21 = local_308;
                }
                local_2a0 = uVar16;
                uVar18 = (**(code **)(*plVar21 + 8))();
                cVar15 = (*pcVar7)(uVar18,&local_2a0);
                if (cVar15 != '\0') goto LAB_1482fc57a;
              }
              uVar17 = (ulonglong)((uint)uVar17 + 1);
              iVar28 = iVar28 + -1;
            } while (iVar28 != 0);
          }
        }
        else {
          plVar21 = *(longlong **)(param_10 + 0x20);
          if (*(longlong **)(param_10 + 0x20) == (longlong *)0x0) {
            plVar21 = local_320;
          }
          local_2a0 = uVar16;
          uVar18 = (**(code **)(*plVar21 + 8))();
          cVar15 = (*pcVar7)(uVar18,&local_2a0);
          if (cVar15 != '\0') goto LAB_1482fc32a;
        }
        uVar17 = (ulonglong)((int)local_310 + 1);
      } while ((int)local_310 != local_344);
    }
    goto LAB_1482fc6b1;
  }
  bVar29 = (param_6 & 1) == 0;
  if ((bVar29 || (int)uVar16 < iVar28) &&
      (*(int *)(param_3 + 200) <= (int)uVar6 || !bVar29 && (int)uVar16 >= iVar28)) {
    dVar3 = *(double *)(param_1 + 0x60);
    uVar17 = (ulonglong)((param_2 >> 9) << 3);
    lVar20 = *(longlong *)(*(longlong *)(param_1 + 0x88) + uVar17);
    lVar9 = (ulonglong)((param_2 & 0x1ff) << 3) * 3;
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + uVar17);
    dVar13 = *(double *)(lVar8 + lVar9) + dVar3;
    dVar11 = *(double *)(lVar8 + 8 + lVar9) + dVar3;
    dVar3 = dVar3 + *(double *)(lVar8 + 0x10 + lVar9);
    dVar4 = *(double *)(lVar20 + 0x10 + lVar9);
    dVar10 = dVar4 - dVar3;
    dVar5 = *(double *)(lVar20 + 8 + lVar9);
    dVar12 = dVar5 - dVar11;
    dVar14 = *(double *)(lVar20 + lVar9) - dVar13;
    dVar3 = dVar3 + dVar4;
    dVar11 = dVar11 + dVar5;
    dVar13 = dVar13 + *(double *)(lVar20 + lVar9);
    param_5 = *(uint *)(*(longlong *)(*(longlong *)(param_3 + 0xb8) + (ulonglong)(uVar6 >> 9) * 8) +
                       (ulonglong)(uVar6 & 0x1ff) * 4);
    if ((int)param_5 < 0) {
      param_5 = ~param_5;
      FUN_1482fae98(param_3,local_238,param_5,param_4);
      if ((((dVar13 <= local_238[0]) || (local_238[3] <= dVar14)) ||
          ((dVar11 <= local_238[1] || ((dStack_218 <= dVar12 || (dVar3 <= local_238[2])))))) ||
         (local_210 <= dVar10)) goto LAB_1482fc6b1;
      uVar18 = *param_8;
      local_370 = local_2b0;
    }
    else {
      FUN_1482fae98(param_3,local_238,param_5 - 1,param_4);
      if (((((local_238[0] < dVar13) && (dVar14 < local_238[3])) && (local_238[1] < dVar11)) &&
          ((dVar12 < dStack_218 && (local_238[2] < dVar3)))) && (dVar10 < local_210)) {
        local_2c0 = *param_8;
        local_370 = &local_2c0;
        local_2b8 = param_8[1];
        local_380 = param_6 + 1;
        local_360 = param_10;
        local_368 = param_9;
        local_378 = param_7;
        local_388 = param_5 - 1;
        FUN_1482fc10e(param_1,param_2,param_3,param_4);
      }
      param_5 = *(int *)(*(longlong *)
                          (*(longlong *)(param_3 + 0xb8) + (ulonglong)(uVar6 + 1 >> 9) * 8) +
                        (ulonglong)(uVar6 + 1 & 0x1ff) * 4) - 1;
      FUN_1482fae98(param_3,&local_288,param_5,param_4);
      if (((dVar13 <= local_288) || (local_270 <= dVar14)) ||
         ((dVar11 <= uStack_280 ||
          (((uStack_268 <= dVar12 || (dVar3 <= local_278)) || (local_260 <= dVar10))))))
      goto LAB_1482fc6b1;
      uVar18 = *param_8;
      local_370 = local_2d0;
    }
  }
  else {
    FUN_1482fae98(param_3,local_238,param_5,param_4);
    lVar20 = *(longlong *)(param_1 + 0xb8);
    param_2 = *(uint *)(*(longlong *)(lVar20 + (ulonglong)(uVar16 >> 9) * 8) +
                       (ulonglong)(uVar16 & 0x1ff) * 4);
    if ((int)param_2 < 0) {
      param_2 = ~param_2;
      cVar15 = FUN_1482fb548(param_1,param_2,local_238);
      if (cVar15 == '\0') goto LAB_1482fc6b1;
      uVar18 = *param_8;
      local_370 = local_2e0;
    }
    else {
      cVar15 = FUN_1482fb548(param_1,param_2 - 1,local_238);
      if (cVar15 != '\0') {
        local_2f0 = *param_8;
        local_370 = &local_2f0;
        local_2e8 = param_8[1];
        local_380 = param_6 + 1;
        local_360 = param_10;
        local_368 = param_9;
        local_378 = param_7;
        local_388 = param_5;
        FUN_1482fc10e(param_1,param_2 - 1,param_3,param_4);
        lVar20 = *(longlong *)(param_1 + 0xb8);
      }
      param_2 = *(int *)(*(longlong *)(lVar20 + (ulonglong)(uVar16 + 1 >> 9) * 8) +
                        (ulonglong)(uVar16 + 1 & 0x1ff) * 4) - 1;
      cVar15 = FUN_1482fb548(param_1,param_2,local_238);
      if (cVar15 == '\0') goto LAB_1482fc6b1;
      uVar18 = *param_8;
      local_370 = local_300;
    }
  }
  *local_370 = uVar18;
  local_370[1] = param_8[1];
  local_380 = param_6 + 1;
  local_360 = param_10;
  local_368 = param_9;
  local_378 = param_7;
  local_388 = param_5;
  FUN_1482fc10e(param_1,param_2,param_3,param_4);
LAB_1482fc6b1:
  if ((local_b0 ^ (ulonglong)auStack_3a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1482fcb9a FUN_1482fcb9a body=45 status=ok
// SIG undefined FUN_1482fcb9a(void)

bool FUN_1482fcb9a(longlong param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = FUN_146bdafb2();
  if (cVar1 == '\0') {
    bVar2 = false;
  }
  else {
    FUN_146bdb916(param_1);
    bVar2 = *(int *)(param_1 + 0x9c) == 1;
  }
  return bVar2;
}



// FUNCTION 1482fcbc8 FUN_1482fcbc8 body=1201 status=ok
// SIG undefined FUN_1482fcbc8(void)

void FUN_1482fcbc8(longlong param_1,undefined4 param_2,undefined4 param_3,longlong *param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  iVar4 = *(int *)(param_1 + 0xa4);
  if (iVar4 == 2) {
    local_48 = *(undefined8 *)(param_1 + 0xb8);
    local_58 = *(undefined8 *)(param_1 + 0xa8);
    uStack_50 = *(undefined8 *)(param_1 + 0xb0);
    local_78 = *(undefined8 *)(param_1 + 0xc0);
    uStack_70 = *(undefined8 *)(param_1 + 200);
    local_68 = *(undefined8 *)(param_1 + 0xd0);
  }
  else {
    if (iVar4 == 1) {
      local_48 = *(undefined8 *)(param_1 + 0xb8);
      local_58 = *(undefined8 *)(param_1 + 0xa8);
      uStack_50 = *(undefined8 *)(param_1 + 0xb0);
      iVar4 = (int)param_4[1];
      *(uint *)(param_4 + 1) = iVar4 + 1U;
      if (*(uint *)((longlong)param_4 + 0xc) < iVar4 + 1U) {
        FUN_146bddb72(param_4,iVar4);
      }
      lVar6 = *param_4;
      lVar7 = (longlong)iVar4 * 0x20;
      *(undefined4 *)(lVar6 + lVar7) = param_2;
      *(undefined4 *)(lVar6 + 4 + lVar7) = param_3;
      puVar2 = (undefined4 *)(lVar6 + 8 + lVar7);
      *puVar2 = (undefined4)local_58;
      puVar2[1] = local_58._4_4_;
      puVar2[2] = (undefined4)uStack_50;
      puVar2[3] = uStack_50._4_4_;
      *(undefined8 *)(lVar6 + 0x18 + lVar7) = local_48;
      goto LAB_1482fcd05;
    }
    if (iVar4 < 3) goto LAB_1482fcd05;
    if (*(int *)(param_1 + 0xa0) != 6) {
      local_48 = *(undefined8 *)(param_1 + 0xb8);
      local_58 = *(undefined8 *)(param_1 + 0xa8);
      uStack_50 = *(undefined8 *)(param_1 + 0xb0);
      local_68 = *(undefined8 *)(param_1 + 0xd0);
      local_78 = *(undefined8 *)(param_1 + 0xc0);
      uStack_70 = *(undefined8 *)(param_1 + 200);
      local_88 = *(undefined8 *)(param_1 + 0xe8);
      local_98 = *(undefined8 *)(param_1 + 0xd8);
      uStack_90 = *(undefined8 *)(param_1 + 0xe0);
      local_a8 = *(undefined8 *)(param_1 + 0x100);
      local_b8 = *(undefined8 *)(param_1 + 0xf0);
      uStack_b0 = *(undefined8 *)(param_1 + 0xf8);
      local_c8 = *(undefined8 *)(param_1 + 0x118);
      local_d8 = *(undefined8 *)(param_1 + 0x108);
      uStack_d0 = *(undefined8 *)(param_1 + 0x110);
      local_e8 = *(undefined8 *)(param_1 + 0x130);
      local_f8 = *(undefined4 *)(param_1 + 0x120);
      uStack_f4 = *(undefined4 *)(param_1 + 0x124);
      uStack_f0 = *(undefined4 *)(param_1 + 0x128);
      uStack_ec = *(undefined4 *)(param_1 + 300);
      iVar5 = (int)param_4[5];
      *(uint *)(param_4 + 5) = iVar5 + 1U;
      if (*(uint *)((longlong)param_4 + 0x2c) < iVar5 + 1U) {
        FUN_146bddc88(param_4 + 4,iVar5);
      }
      lVar6 = param_4[4];
      lVar7 = (longlong)iVar5 * 0xa0;
      *(undefined4 *)(lVar6 + lVar7) = param_2;
      *(undefined4 *)(lVar6 + 4 + lVar7) = param_3;
      *(undefined8 *)(lVar6 + 0x18 + lVar7) = local_48;
      puVar3 = (undefined8 *)(lVar6 + 8 + lVar7);
      *puVar3 = local_58;
      puVar3[1] = uStack_50;
      *(undefined8 *)(lVar6 + 0x30 + lVar7) = local_68;
      puVar3 = (undefined8 *)(lVar6 + 0x20 + lVar7);
      *puVar3 = local_78;
      puVar3[1] = uStack_70;
      *(undefined8 *)(lVar6 + 0x48 + lVar7) = local_88;
      puVar3 = (undefined8 *)(lVar6 + 0x38 + lVar7);
      *puVar3 = local_98;
      puVar3[1] = uStack_90;
      *(undefined8 *)(lVar6 + 0x60 + lVar7) = local_a8;
      puVar3 = (undefined8 *)(lVar6 + 0x50 + lVar7);
      *puVar3 = local_b8;
      puVar3[1] = uStack_b0;
      puVar3 = (undefined8 *)(lVar6 + 0x68 + lVar7);
      *puVar3 = local_d8;
      puVar3[1] = uStack_d0;
      *(undefined8 *)(lVar6 + 0x78 + lVar7) = local_c8;
      puVar2 = (undefined4 *)(lVar6 + 0x80 + lVar7);
      *puVar2 = local_f8;
      puVar2[1] = uStack_f4;
      puVar2[2] = uStack_f0;
      puVar2[3] = uStack_ec;
      *(undefined8 *)(lVar6 + 0x90 + lVar7) = local_e8;
      *(int *)(lVar6 + 0x98 + lVar7) = iVar4;
      goto LAB_1482fcd05;
    }
    plVar1 = param_4 + 2;
    local_48 = *(undefined8 *)(param_1 + 0xb8);
    local_58 = *(undefined8 *)(param_1 + 0xa8);
    uStack_50 = *(undefined8 *)(param_1 + 0xb0);
    local_78 = *(undefined8 *)(param_1 + 0xc0);
    uStack_70 = *(undefined8 *)(param_1 + 200);
    local_68 = *(undefined8 *)(param_1 + 0xd0);
    iVar4 = (int)param_4[3];
    *(uint *)(param_4 + 3) = iVar4 + 1U;
    if (*(uint *)((longlong)param_4 + 0x1c) < iVar4 + 1U) {
      FUN_146bddbf8(plVar1,iVar4);
    }
    lVar6 = param_4[2];
    lVar7 = (longlong)iVar4 * 0x38;
    *(undefined4 *)(lVar6 + lVar7) = param_2;
    *(undefined4 *)(lVar6 + 4 + lVar7) = param_3;
    puVar3 = (undefined8 *)(lVar6 + 8 + lVar7);
    *puVar3 = local_58;
    puVar3[1] = uStack_50;
    *(undefined8 *)(lVar6 + 0x18 + lVar7) = local_48;
    puVar3 = (undefined8 *)(lVar6 + 0x20 + lVar7);
    *puVar3 = local_78;
    puVar3[1] = uStack_70;
    *(undefined8 *)(lVar6 + 0x30 + lVar7) = local_68;
    local_48 = *(undefined8 *)(param_1 + 0xe8);
    local_58 = *(undefined8 *)(param_1 + 0xd8);
    uStack_50 = *(undefined8 *)(param_1 + 0xe0);
    local_78 = *(undefined8 *)(param_1 + 0xf0);
    uStack_70 = *(undefined8 *)(param_1 + 0xf8);
    local_68 = *(undefined8 *)(param_1 + 0x100);
    iVar4 = (int)param_4[3];
    *(uint *)(param_4 + 3) = iVar4 + 1U;
    if (*(uint *)((longlong)param_4 + 0x1c) < iVar4 + 1U) {
      FUN_146bddbf8(plVar1,iVar4);
    }
    lVar6 = *plVar1;
    lVar7 = (longlong)iVar4 * 0x38;
    *(undefined4 *)(lVar6 + lVar7) = param_2;
    *(undefined4 *)(lVar6 + 4 + lVar7) = param_3;
    puVar3 = (undefined8 *)(lVar6 + 8 + lVar7);
    *puVar3 = local_58;
    puVar3[1] = uStack_50;
    *(undefined8 *)(lVar6 + 0x18 + lVar7) = local_48;
    puVar2 = (undefined4 *)(lVar6 + 0x20 + lVar7);
    *puVar2 = (undefined4)local_78;
    puVar2[1] = local_78._4_4_;
    puVar2[2] = (undefined4)uStack_70;
    puVar2[3] = uStack_70._4_4_;
    *(undefined8 *)(lVar6 + 0x30 + lVar7) = local_68;
    if (*(int *)(param_1 + 0xa4) < 5) goto LAB_1482fcd05;
    local_48 = *(undefined8 *)(param_1 + 0x118);
    local_58 = *(undefined8 *)(param_1 + 0x108);
    uStack_50 = *(undefined8 *)(param_1 + 0x110);
    local_78 = *(undefined8 *)(param_1 + 0x120);
    uStack_70 = *(undefined8 *)(param_1 + 0x128);
    local_68 = *(undefined8 *)(param_1 + 0x130);
  }
  iVar4 = (int)param_4[3];
  *(uint *)(param_4 + 3) = iVar4 + 1U;
  if (*(uint *)((longlong)param_4 + 0x1c) < iVar4 + 1U) {
    FUN_146bddbf8(param_4 + 2,iVar4);
  }
  lVar6 = param_4[2];
  lVar7 = (longlong)iVar4 * 0x38;
  *(undefined4 *)(lVar6 + lVar7) = param_2;
  *(undefined4 *)(lVar6 + 4 + lVar7) = param_3;
  puVar3 = (undefined8 *)(lVar6 + 8 + lVar7);
  *puVar3 = local_58;
  puVar3[1] = uStack_50;
  *(undefined8 *)(lVar6 + 0x18 + lVar7) = local_48;
  puVar2 = (undefined4 *)(lVar6 + 0x20 + lVar7);
  *puVar2 = (undefined4)local_78;
  puVar2[1] = local_78._4_4_;
  puVar2[2] = (undefined4)uStack_70;
  puVar2[3] = uStack_70._4_4_;
  *(undefined8 *)(lVar6 + 0x30 + lVar7) = local_68;
LAB_1482fcd05:
  if ((local_40 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482fd07a FUN_1482fd07a body=362 status=ok
// SIG undefined FUN_1482fd07a(void)

ulonglong FUN_1482fd07a(longlong param_1,longlong param_2,undefined1 param_3,undefined8 *param_4,
                       undefined8 param_5)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  ulonglong uVar4;
  undefined7 uVar6;
  undefined8 uVar5;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined4 local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar9 = 0;
  if (0 < *(int *)(param_1 + 200)) {
    uVar7 = uVar9;
    uVar9 = 0;
    do {
      iVar2 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar7 >> 9) * 8) +
                      (ulonglong)(uVar7 & 0x1ff) * 4);
      uVar8 = iVar2 + uVar7 + 1;
      iVar10 = uVar7 + 2;
      while (uVar1 = iVar10 - 1, (int)uVar1 < (int)(iVar2 + uVar7)) {
        local_58 = *param_4;
        local_50 = param_4[1];
        local_70 = param_5;
        local_78 = &local_58;
        local_80 = CONCAT31(local_80._1_3_,param_3);
        local_88 = param_2;
        uVar4 = FUN_1482fd214(param_1,*(undefined4 *)
                                       (*(longlong *)
                                         (*(longlong *)(param_1 + 0xb8) +
                                         (ulonglong)(uVar1 >> 9) * 8) +
                                       (ulonglong)(uVar1 & 0x1ff) * 4),iVar10,uVar8);
        uVar6 = (undefined7)(uVar4 >> 8);
        bVar3 = (byte)uVar9;
        uVar9 = (uint)((byte)uVar4 & 1 | bVar3);
        iVar10 = iVar10 + 1;
        if ((param_2 == 0) && ((uVar4 & 1) != 0 || bVar3 != 0)) {
          bVar3 = 1;
          goto LAB_1482fd1bb;
        }
      }
      uVar7 = uVar8;
    } while ((int)uVar8 < *(int *)(param_1 + 200));
  }
  local_68 = *param_4;
  local_78 = &local_68;
  local_60 = param_4[1];
  local_70 = param_5;
  local_88 = CONCAT71(local_88._1_7_,param_3);
  local_80 = 0;
  uVar5 = FUN_1482fd586(param_1,*(undefined4 *)(param_1 + 0xcc),0xffffffff,param_2);
  uVar6 = (undefined7)((ulonglong)uVar5 >> 8);
  bVar3 = (byte)uVar5 | (byte)uVar9;
LAB_1482fd1bb:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71(uVar6,bVar3) & 0xffffffffffffff01;
}



// FUNCTION 1482fd1e6 FUN_1482fd1e6 body=45 status=ok
// SIG undefined FUN_1482fd1e6(void)

bool FUN_1482fd1e6(longlong param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = FUN_146bdafb2();
  if (cVar1 == '\0') {
    bVar2 = false;
  }
  else {
    FUN_146bdb916(param_1);
    bVar2 = *(int *)(param_1 + 0x9c) == 1;
  }
  return bVar2;
}



// FUNCTION 1482fd214 FUN_1482fd214 body=881 status=ok
// SIG undefined FUN_1482fd214(void)

ulonglong FUN_1482fd214(longlong param_1,uint param_2,uint param_3,uint param_4,longlong param_5,
                       char param_6,undefined8 *param_7,longlong param_8)

{
  undefined4 *puVar1;
  uint uVar2;
  code *pcVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  uint *puVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_278 [44];
  uint local_24c;
  longlong *local_248;
  undefined8 local_240;
  undefined4 local_238;
  undefined8 local_230;
  undefined4 local_228;
  uint local_220 [18];
  undefined8 local_1d8 [9];
  undefined8 local_190;
  undefined1 local_188;
  ulonglong local_184;
  undefined4 local_17c;
  undefined8 local_e8 [4];
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_98 [4];
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_278;
  pcVar3 = *(code **)(param_8 + 0x10);
  if (pcVar3 == (code *)0x0) {
LAB_1482fd286:
    lVar7 = *(longlong *)(**(longlong **)(param_1 + 8) + 0x10);
    lVar14 = *(longlong *)
              (*(longlong *)(**(longlong **)(param_1 + 8) + 0x130) + (ulonglong)(param_2 >> 9) * 8);
    uVar9 = (ulonglong)(param_2 & 0x1ff);
    uVar2 = *(uint *)(lVar14 + uVar9 * 0xc);
    lVar15 = *(longlong *)(lVar7 + (ulonglong)(uVar2 >> 9) * 8);
    uVar13 = (ulonglong)uVar2 & 0x1ff;
    local_98[2] = *(undefined8 *)(lVar15 + 0x10 + uVar13 * 0x18);
    puVar10 = (undefined8 *)(lVar15 + uVar13 * 0x18);
    local_98[0] = *puVar10;
    local_98[1] = puVar10[1];
    uVar2 = *(uint *)(lVar14 + 4 + uVar9 * 0xc);
    lVar15 = *(longlong *)(lVar7 + (ulonglong)(uVar2 >> 9) * 8);
    uVar13 = (ulonglong)uVar2 & 0x1ff;
    local_70 = *(undefined8 *)(lVar15 + 0x10 + uVar13 * 0x18);
    puVar10 = (undefined8 *)(lVar15 + uVar13 * 0x18);
    local_98[3] = *puVar10;
    uStack_78 = puVar10[1];
    uVar2 = *(uint *)(lVar14 + 8 + uVar9 * 0xc);
    lVar7 = *(longlong *)(lVar7 + (ulonglong)(uVar2 >> 9) * 8);
    uVar13 = (ulonglong)uVar2 & 0x1ff;
    local_58 = *(undefined8 *)(lVar7 + 0x10 + uVar13 * 0x18);
    puVar1 = (undefined4 *)(lVar7 + uVar13 * 0x18);
    local_68 = *puVar1;
    uStack_64 = puVar1[1];
    uStack_60 = puVar1[2];
    uStack_5c = puVar1[3];
    local_190 = 0x3e45798ee2308c3a;
    local_188 = 0;
    local_184 = 0;
    local_17c = 0;
    puVar10 = local_98;
    puVar11 = local_220;
    for (lVar7 = 9; lVar7 != 0; lVar7 = lVar7 + -1) {
      *(undefined8 *)puVar11 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar11 = puVar11 + 2;
    }
    local_228 = *(undefined4 *)(lVar14 + 8 + uVar9 * 0xc);
    local_230 = *(undefined8 *)(lVar14 + uVar9 * 0xc);
    if ((int)param_3 < (int)param_4) {
      local_248 = (longlong *)(param_8 + 0x30);
      uVar9 = 0;
      local_24c = param_2;
      do {
        uVar2 = *(uint *)(*(longlong *)
                           (*(longlong *)(param_1 + 0xb8) + (ulonglong)(param_3 >> 9) * 8) +
                         (ulonglong)(param_3 & 0x1ff) * 4);
        pcVar3 = *(code **)(param_8 + 0x10);
        if (pcVar3 == (code *)0x0) {
LAB_1482fd3f3:
          lVar7 = *(longlong *)
                   (*(longlong *)(**(longlong **)(param_1 + 8) + 0x130) +
                   (ulonglong)(uVar2 >> 9) * 8);
          uVar13 = (ulonglong)(uVar2 & 0x1ff);
          local_238 = *(undefined4 *)(lVar7 + 8 + uVar13 * 0xc);
          local_240 = *(undefined8 *)(lVar7 + uVar13 * 0xc);
          if (param_6 != '\0') {
            lVar14 = 0;
            do {
              lVar15 = 0;
              do {
                if (*(int *)((longlong)&local_230 + lVar14 * 4) ==
                    *(int *)((longlong)&local_240 + lVar15 * 4)) goto LAB_1482fd53f;
                lVar15 = lVar15 + 1;
              } while (lVar15 != 3);
              lVar14 = lVar14 + 1;
            } while (lVar14 != 3);
          }
          puVar11 = (uint *)(lVar7 + uVar13 * 0xc);
          lVar7 = *(longlong *)(**(longlong **)(param_1 + 8) + 0x10);
          lVar14 = *(longlong *)(lVar7 + (ulonglong)(*puVar11 >> 9) * 8);
          uVar9 = (ulonglong)*puVar11 & 0x1ff;
          local_e8[2] = *(undefined8 *)(lVar14 + 0x10 + uVar9 * 0x18);
          puVar10 = (undefined8 *)(lVar14 + uVar9 * 0x18);
          local_e8[0] = *puVar10;
          local_e8[1] = puVar10[1];
          lVar14 = *(longlong *)(lVar7 + (ulonglong)(puVar11[1] >> 9) * 8);
          uVar9 = (ulonglong)puVar11[1] & 0x1ff;
          local_c0 = *(undefined8 *)(lVar14 + 0x10 + uVar9 * 0x18);
          puVar10 = (undefined8 *)(lVar14 + uVar9 * 0x18);
          local_e8[3] = *puVar10;
          uStack_c8 = puVar10[1];
          lVar7 = *(longlong *)(lVar7 + (ulonglong)(puVar11[2] >> 9) * 8);
          uVar9 = (ulonglong)puVar11[2] & 0x1ff;
          local_a8 = *(undefined8 *)(lVar7 + 0x10 + uVar9 * 0x18);
          puVar1 = (undefined4 *)(lVar7 + uVar9 * 0x18);
          local_b8 = *puVar1;
          uStack_b4 = puVar1[1];
          uStack_b0 = puVar1[2];
          uStack_ac = puVar1[3];
          local_184 = local_184 & 0xffffffff00000000;
          puVar10 = local_e8;
          puVar12 = local_1d8;
          for (lVar7 = 9; lVar7 != 0; lVar7 = lVar7 + -1) {
            *puVar12 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar12 = puVar12 + 1;
          }
          uVar5 = (*(code *)*param_7)(param_7[1],local_220);
          uVar9 = (ulonglong)uVar5;
          if ((char)uVar5 != '\0') {
            if (param_5 == 0) {
              uVar9 = CONCAT71((uint7)(uint3)(uVar5 >> 8),1);
              break;
            }
            FUN_1482fcbc8(local_220,local_24c,uVar2);
          }
        }
        else {
          local_240 = CONCAT44(local_240._4_4_,uVar2);
          plVar8 = *(longlong **)(param_8 + 0x20);
          if (*(longlong **)(param_8 + 0x20) == (longlong *)0x0) {
            plVar8 = local_248;
          }
          uVar6 = (**(code **)(*plVar8 + 8))();
          cVar4 = (*pcVar3)(uVar6,&local_240);
          if (cVar4 != '\0') goto LAB_1482fd3f3;
        }
LAB_1482fd53f:
        param_3 = param_3 + 1;
      } while (param_3 != param_4);
      goto LAB_1482fd54d;
    }
  }
  else {
    plVar8 = (longlong *)(param_8 + 0x30);
    if (*(longlong **)(param_8 + 0x20) != (longlong *)0x0) {
      plVar8 = *(longlong **)(param_8 + 0x20);
    }
    local_220[0] = param_2;
    uVar6 = (**(code **)(*plVar8 + 8))();
    cVar4 = (*pcVar3)(uVar6,local_220);
    if (cVar4 != '\0') goto LAB_1482fd286;
  }
  uVar9 = 0;
LAB_1482fd54d:
  if ((local_48 ^ (ulonglong)auStack_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffffffffff01;
}



// FUNCTION 1482fd586 FUN_1482fd586 body=1887 status=ok
// SIG undefined FUN_1482fd586(void)

ulonglong FUN_1482fd586(longlong param_1,uint param_2,uint param_3,longlong param_4,
                       undefined1 param_5,uint param_6,undefined8 *param_7,undefined8 param_8)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  undefined3 uVar5;
  longlong lVar6;
  char cVar7;
  byte bVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined8 uVar11;
  uint uVar12;
  uint uVar13;
  byte bVar14;
  uint7 uVar16;
  ulonglong uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  bool bVar22;
  undefined1 auStack_178 [32];
  longlong local_158;
  int local_150;
  undefined8 *local_148;
  undefined8 local_140;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  undefined8 local_90;
  undefined8 local_88;
  ulonglong local_80;
  ulonglong uVar15;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if (-1 < (int)param_2) {
    uVar15 = (ulonglong)param_2;
    uVar12 = param_2 >> 9;
    uVar13 = param_2 & 0x1ff;
    uVar10 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)uVar12 * 8) +
                      (ulonglong)uVar13 * 4);
    if ((int)param_3 < 0) {
      uVar21 = 0xffffffff;
    }
    else {
      uVar21 = *(uint *)(*(longlong *)
                          (*(longlong *)(param_1 + 0x70) + (ulonglong)(param_3 >> 9) * 8) +
                        (ulonglong)(param_3 & 0x1ff) * 4);
    }
    iVar19 = *(int *)(param_1 + 200);
    if ((iVar19 <= (int)uVar10) || (iVar19 <= (int)uVar21)) {
      if (iVar19 <= (int)uVar10) {
        bVar22 = (param_6 & 0x80000001) == 1;
        if ((-1 < (int)param_3) || (bVar22 && iVar19 <= (int)uVar21)) {
          if (!bVar22 || iVar19 > (int)uVar21) {
            uVar15 = (ulonglong)param_3;
            uVar21 = uVar10;
          }
          uVar12 = (uint)(uVar15 >> 9);
          uVar13 = (uint)uVar15 & 0x1ff;
          goto LAB_1482fd783;
        }
        uVar12 = *(uint *)(*(longlong *)
                            (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar10 >> 9) * 8) +
                          (ulonglong)(uVar10 & 0x1ff) * 4);
        uVar16 = (uint7)(uint3)(param_2 >> 8);
        if ((int)uVar12 < 0) {
          local_100 = *param_7;
          local_148 = &local_100;
          local_f8 = param_7[1];
          local_150 = param_6 + 1;
          local_140 = param_8;
          local_158 = CONCAT71(local_158._1_7_,param_5);
          uVar10 = FUN_1482fd586(param_1,~uVar12,0xffffffff,param_4);
joined_r0x0001482fdc6f:
          uVar17 = (ulonglong)uVar10;
          if ((param_4 == 0) && (uVar15 = CONCAT71(uVar16,1), (char)uVar10 != '\0'))
          goto LAB_1482fd71b;
        }
        else {
          iVar20 = uVar12 - 1;
          iVar19 = *(int *)(*(longlong *)
                             (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar10 + 1 >> 9) * 8) +
                           (ulonglong)(uVar10 + 1 & 0x1ff) * 4);
          local_110 = *param_7;
          local_148 = &local_110;
          local_108 = param_7[1];
          iVar18 = param_6 + 1;
          local_140 = param_8;
          local_158 = CONCAT71(local_158._1_7_,param_5);
          local_150 = iVar18;
          uVar9 = FUN_1482fd586(param_1,iVar20,0xffffffff,param_4);
          uVar15 = CONCAT71(uVar16,1);
          if ((param_4 == 0) && ((byte)uVar9 != 0)) goto LAB_1482fd71b;
          uVar10 = iVar19 - 1;
          local_120 = *param_7;
          local_148 = &local_120;
          local_118 = param_7[1];
          local_140 = param_8;
          local_158 = CONCAT71(local_158._1_7_,param_5);
          local_150 = iVar18;
          bVar14 = FUN_1482fd586(param_1,uVar10,0xffffffff,param_4);
          uVar5 = (undefined3)((uint)uVar9 >> 8);
          bVar14 = (byte)uVar9 | bVar14;
          if ((param_4 == 0) && (bVar14 != 0)) goto LAB_1482fd71b;
          lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x88) + (ulonglong)(uVar10 >> 9) * 8);
          lVar6 = (ulonglong)((uVar10 & 0x1ff) << 3) * 3;
          lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)(uVar10 >> 9) * 8);
          local_98 = *(double *)(lVar3 + 0x10 + lVar6);
          dVar1 = *(double *)(lVar4 + 0x10 + lVar6);
          local_b0 = local_98 - dVar1;
          local_a0 = *(double *)(lVar3 + 8 + lVar6);
          dVar2 = *(double *)(lVar4 + 8 + lVar6);
          local_b8 = local_a0 - dVar2;
          local_c0 = *(double *)(lVar3 + lVar6) - *(double *)(lVar4 + lVar6);
          local_98 = local_98 + dVar1;
          local_a0 = local_a0 + dVar2;
          local_a8 = *(double *)(lVar3 + lVar6) + *(double *)(lVar4 + lVar6);
          cVar7 = FUN_1482fb548(param_1,iVar20);
          uVar17 = (ulonglong)CONCAT31(uVar5,bVar14);
          if (cVar7 != '\0') {
            local_130 = *param_7;
            local_148 = &local_130;
            local_128 = param_7[1];
            local_140 = param_8;
            local_158 = CONCAT71(local_158._1_7_,param_5);
            local_150 = iVar18;
            bVar8 = FUN_1482fd586(param_1,iVar20,uVar10,param_4);
            uVar10 = CONCAT31(uVar5,bVar14 | bVar8);
            goto joined_r0x0001482fdc6f;
          }
        }
        goto LAB_1482fd868;
      }
LAB_1482fd783:
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x88) + (ulonglong)(uVar12 << 3));
      lVar6 = (ulonglong)(uVar13 << 3) * 3;
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)(uVar12 << 3));
      local_98 = *(double *)(lVar3 + 0x10 + lVar6);
      dVar1 = *(double *)(lVar4 + 0x10 + lVar6);
      local_b0 = local_98 - dVar1;
      local_a0 = *(double *)(lVar3 + 8 + lVar6);
      dVar2 = *(double *)(lVar4 + 8 + lVar6);
      local_b8 = local_a0 - dVar2;
      local_c0 = *(double *)(lVar3 + lVar6) - *(double *)(lVar4 + lVar6);
      local_98 = local_98 + dVar1;
      local_a0 = local_a0 + dVar2;
      local_a8 = *(double *)(lVar3 + lVar6) + *(double *)(lVar4 + lVar6);
      uVar10 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar21 >> 9) * 8)
                        + (ulonglong)(uVar21 & 0x1ff) * 4);
      if ((int)uVar10 < 0) {
        cVar7 = FUN_1482fb548(param_1,~uVar10,&local_c0);
        if (cVar7 == '\0') {
          uVar17 = 0;
        }
        else {
          local_d0 = *param_7;
          local_148 = &local_d0;
          local_c8 = param_7[1];
          local_150 = param_6 + 1;
          local_140 = param_8;
          local_158 = CONCAT71(local_158._1_7_,param_5);
          uVar10 = FUN_1482fd586(param_1,~uVar10,uVar15,param_4);
          uVar17 = (ulonglong)uVar10;
          if (param_4 == 0) {
            bVar14 = (byte)uVar10;
joined_r0x0001482fda71:
            if (bVar14 != 0) goto LAB_1482fd9c6;
          }
        }
      }
      else {
        iVar19 = *(int *)(*(longlong *)
                           (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar21 + 1 >> 9) * 8) +
                         (ulonglong)(uVar21 + 1 & 0x1ff) * 4);
        cVar7 = FUN_1482fb548(param_1,uVar10 - 1,&local_c0);
        if (cVar7 != '\0') {
          local_e0 = *param_7;
          local_148 = &local_e0;
          local_d8 = param_7[1];
          local_150 = param_6 + 1;
          local_140 = param_8;
          local_158 = CONCAT71(local_158._1_7_,param_5);
          uVar10 = FUN_1482fd586(param_1,uVar10 - 1,uVar15,param_4);
          uVar17 = (ulonglong)uVar10;
          if ((param_4 != 0) || ((char)uVar10 == '\0')) goto LAB_1482fd9eb;
LAB_1482fd9c6:
          uVar15 = CONCAT71((int7)(uVar15 >> 8),1);
          goto LAB_1482fd71b;
        }
        uVar17 = 0;
LAB_1482fd9eb:
        iVar19 = iVar19 + -1;
        cVar7 = FUN_1482fb548(param_1,iVar19,&local_c0);
        if (cVar7 != '\0') {
          local_f0 = *param_7;
          local_148 = &local_f0;
          local_e8 = param_7[1];
          local_150 = param_6 + 1;
          local_140 = param_8;
          local_158 = CONCAT71(local_158._1_7_,param_5);
          uVar11 = FUN_1482fd586(param_1,iVar19,uVar15,param_4);
          bVar14 = (byte)uVar11 | (byte)uVar17;
          uVar17 = CONCAT71((int7)((ulonglong)uVar11 >> 8),bVar14) & 0xffffff01;
          if (param_4 == 0) {
            bVar14 = bVar14 & 1;
            goto joined_r0x0001482fda71;
          }
        }
      }
LAB_1482fd868:
      uVar15 = uVar17;
      goto LAB_1482fd71b;
    }
    if ((param_3 != 0xffffffff) &&
       (iVar19 = *(int *)(*(longlong *)
                           (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar10 >> 9) * 8) +
                         (ulonglong)(uVar10 & 0x1ff) * 4), 0 < iVar19)) {
      uVar12 = uVar10 + 1;
      uVar15 = 0;
      do {
        local_90 = *param_7;
        local_88 = param_7[1];
        local_140 = param_8;
        local_148 = &local_90;
        local_150 = CONCAT31(local_150._1_3_,param_5);
        local_158 = param_4;
        uVar9 = FUN_1482fd214(param_1,*(undefined4 *)
                                       (*(longlong *)
                                         (*(longlong *)(param_1 + 0xb8) +
                                         (ulonglong)(uVar12 >> 9) * 8) +
                                       (ulonglong)(uVar12 & 0x1ff) * 4),uVar21 + 1,
                              *(int *)(*(longlong *)
                                        (*(longlong *)(param_1 + 0xb8) +
                                        (ulonglong)(uVar21 >> 9) * 8) +
                                      (ulonglong)(uVar21 & 0x1ff) * 4) + uVar21 + 1);
        bVar14 = (byte)uVar9 | (byte)uVar15;
        uVar15 = (ulonglong)CONCAT31((int3)((uint)uVar9 >> 8),bVar14);
        if ((param_4 == 0) && ((bVar14 & 1) != 0)) goto LAB_1482fd9c6;
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < (int)(iVar19 + uVar10 + 1));
      goto LAB_1482fd71b;
    }
  }
  uVar15 = 0;
LAB_1482fd71b:
  if ((local_80 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar15 & 0xffffffffffffff01;
}



// FUNCTION 1482fdce6 FUN_1482fdce6 body=162 status=ok
// SIG undefined FUN_1482fdce6(void)

void FUN_1482fdce6(undefined8 param_1,undefined8 *param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_d8 [40];
  undefined8 local_b0 [9];
  undefined8 local_68 [9];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  puVar4 = param_2 + 9;
  puVar5 = local_68;
  for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar4 = param_2;
  puVar5 = local_b0;
  for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  bVar1 = FUN_146bda4f4(local_b0,local_68,0x3e45798ee2308c3a);
  *(uint *)((longlong)param_2 + 0x9c) = 2 - (uint)bVar1;
  uVar3 = 7;
  if (bVar1 == 0) {
    uVar3 = 0;
  }
  *(undefined4 *)(param_2 + 0x14) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0xa4) = 0;
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482fdd8a FUN_1482fdd8a body=115 status=ok
// SIG undefined FUN_1482fdd8a(void)

void FUN_1482fdd8a(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xb8,8);
    iVar2 = (int)(uVar1 / 0xb8);
    iVar3 = 0x7fffffff;
    if ((iVar2 < param_2) || (iVar3 = iVar2, 0 < iVar2)) {
      FUN_1446f8d3c(param_1,0,iVar3,0xb8,8);
      iVar4 = iVar3;
    }
  }
  *(int *)(param_1 + 0xc) = iVar4;
  return;
}



// FUNCTION 1482fddfd FUN_1482fddfd body=76 status=ok
// SIG undefined FUN_1482fddfd(void)

void FUN_1482fddfd(longlong param_1,longlong param_2,int param_3)

{
  if (param_3 != 0) {
    param_1 = param_1 + 8;
    param_2 = param_2 + 8;
    do {
      *(undefined8 *)(param_1 + -8) = *(undefined8 *)(param_2 + -8);
      FUN_1482fde4a(param_1,param_2);
      param_1 = param_1 + 0xb8;
      param_2 = param_2 + 0xb8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1482fde4a FUN_1482fde4a body=122 status=ok
// SIG undefined FUN_1482fde4a(void)

void * FUN_1482fde4a(void *param_1,void *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  iVar1 = *(int *)((longlong)param_2 + 0xa8);
  pvVar2 = *(void **)((longlong)param_2 + 0xa0);
  *(int *)((longlong)param_1 + 0xa8) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xac) = 2;
  }
  else {
    if (pvVar2 != (void *)0x0) {
      param_2 = pvVar2;
    }
    FUN_1482fdec4(param_1,iVar1,0);
    pvVar2 = *(void **)((longlong)param_1 + 0xa0);
    if (*(void **)((longlong)param_1 + 0xa0) == (void *)0x0) {
      pvVar2 = param_1;
    }
    memcpy(pvVar2,param_2,(longlong)iVar1 * 0x50);
  }
  return param_1;
}



// FUNCTION 1482fdec4 FUN_1482fdec4 body=121 status=ok
// SIG undefined FUN_1482fdec4(void)

void FUN_1482fdec4(longlong param_1,uint param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 2;
    if (2 < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 * 0x50,0);
      iVar2 = (int)(uVar1 / 0x50);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar2) {
        iVar3 = iVar2;
      }
    }
  }
  if (param_3 < iVar3) {
    FUN_1482fdf3e(param_1,0,iVar3,0x50);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xac) = param_3;
  return;
}



// FUNCTION 1482fdf3e FUN_1482fdf3e body=150 status=ok
// SIG undefined FUN_1482fdf3e(void)

void FUN_1482fdf3e(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xa0);
  if ((uint)param_3 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x50);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xa0,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0xa0),param_1,(longlong)param_2 * 0x50);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xa0,param_2,param_3,param_4);
  return;
}



// FUNCTION 1482fdfd4 FUN_1482fdfd4 body=53 status=ok
// SIG undefined FUN_1482fdfd4(void)

void FUN_1482fdfd4(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0xa8);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x17;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1482fe00a FUN_1482fe00a body=97 status=ok
// SIG undefined FUN_1482fe00a(void)

undefined8 * FUN_1482fe00a(undefined8 *param_1)

{
  void *_Dst;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  _Dst = (void *)FUN_14001cc68(0x1000);
  memset(_Dst,0,0x1000);
  *(undefined4 *)(param_1 + 2) = 1;
  FUN_1482fe0d4(param_1 + 1,0);
  *(void **)param_1[1] = _Dst;
  return param_1;
}



// FUNCTION 1482fe06c FUN_1482fe06c body=99 status=ok
// SIG undefined FUN_1482fe06c(void)

undefined8 * FUN_1482fe06c(undefined8 *param_1,int param_2)

{
  undefined **ppuVar1;
  longlong lVar2;
  
  ppuVar1 = &PTR_FUN_14ae72d00;
  *param_1 = &PTR_FUN_14ae72d00;
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    do {
      lVar2 = *(longlong *)(lVar2 + 0x10);
      FUN_1400020a8();
      param_1[1] = lVar2;
    } while (lVar2 != 0);
    ppuVar1 = (undefined **)*param_1;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  (*(code *)ppuVar1[1])(param_1,0);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1482fe0d0 FUN_1482fe0d0 body=4 status=ok
// SIG undefined FUN_1482fe0d0(void)

void FUN_1482fe0d0(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  return;
}



// FUNCTION 1482fe0d4 FUN_1482fe0d4 body=132 status=ok
// SIG undefined FUN_1482fe0d4(void)

void FUN_1482fe0d4(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1482fe15a FUN_1482fe15a body=76 status=ok
// SIG undefined FUN_1482fe15a(void)

undefined8 * FUN_1482fe15a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ae72d10;
  FUN_146bc7c1a(param_1 + 4);
  *param_1 = &PTR_LAB_14ae72d28;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1482fe1a6 FUN_1482fe1a6 body=27 status=ok
// SIG undefined FUN_1482fe1a6(void)

byte FUN_1482fe1a6(longlong param_1)

{
  byte bVar1;
  
  bVar1 = FUN_146c5d6f0(param_1 + 0x20,*(undefined8 *)(param_1 + 0x18));
  return bVar1 ^ 1;
}



// FUNCTION 1482fe1c4 FUN_1482fe1c4 body=331 status=ok
// SIG undefined FUN_1482fe1c4(void)

void FUN_1482fe1c4(longlong *param_1,undefined8 param_2,uint param_3,char param_4)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_298 [32];
  undefined8 *local_278;
  undefined1 local_270;
  longlong *local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_298;
  uVar2 = FUN_146c03afa(*param_1);
  param_3 = param_3 & uVar2;
  local_278 = (undefined8 *)CONCAT71(local_278._1_7_,(char)((param_3 & 8) >> 3));
  FUN_1411b354a(&local_258,param_3 & 0xffffff01,(param_3 & 2) >> 1,(param_3 & 4) >> 2);
  plVar1 = param_1 + 1;
  FUN_146c00942(plVar1,&local_258);
  FUN_141082778(&local_258);
  lVar3 = *param_1;
  if ((param_4 != '\0') && (*(longlong *)(lVar3 + 0x208) != 0)) {
    FUN_14582ed12(plVar1);
    FUN_146c02390(param_1[0x42],*(undefined8 *)(*param_1 + 0x208),1,0);
    lVar3 = *param_1;
  }
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_218 = 0;
  uStack_210 = 0;
  local_228 = 0;
  uStack_220 = 0;
  local_238 = 0;
  uStack_230 = 0;
  local_248 = 0;
  uStack_240 = 0;
  local_258 = 0;
  uStack_250 = 0;
  local_270 = (undefined1)param_1[0xbb];
  local_278 = &local_258;
  local_260 = plVar1;
  FUN_146bce922(&local_260,lVar3,param_2,param_1 + 0x45);
  FUN_1482fe310(param_1,param_2);
  FUN_146bc8622(&local_258);
  if ((local_30 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482fe310 FUN_1482fe310 body=703 status=ok
// SIG undefined FUN_1482fe310(void)

void FUN_1482fe310(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  uint *puVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  undefined1 auStack_118 [32];
  longlong *local_f8;
  longlong *local_f0;
  uint *local_e8;
  uint *local_e0;
  undefined1 local_d4 [4];
  undefined8 local_d0;
  uint local_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  int iStack_a4;
  int local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  iVar10 = *(int *)(*param_1 + 0x140) * 0x200 + *(int *)(*param_1 + 0x144);
  local_b0 = 0;
  local_a8 = 0xffffffff00000000;
  local_98 = 0;
  local_90 = 0xffffffff00000000;
  local_78 = 0;
  local_70 = 0x8000000000;
  uStack_68 = 0xffffffff;
  local_58 = 0;
  local_50 = 0;
  FUN_146be9a22(&local_b0,
                CONCAT71(0xffffffff000000,
                         (float)(int)param_2[1] / (float)iVar10 < 0.05 && 31999 < iVar10));
  lVar9 = param_2[1];
  if ((longlong)(int)lVar9 != 0) {
    lVar1 = *param_2;
    lVar8 = 0;
    do {
      iVar10 = *(int *)(lVar1 + lVar8);
      local_c0 = CONCAT44(local_c0._4_4_,iVar10);
      if (iStack_a4 == -1) {
        FUN_1447cbafe(&local_98,&local_d0,&local_c0,0);
      }
      else if (*(char *)(local_b0 + iVar10) == '\0') {
        *(undefined1 *)(local_b0 + iVar10) = 1;
        local_a0 = local_a0 + 1;
      }
      lVar8 = lVar8 + 4;
    } while ((longlong)(int)lVar9 * 4 != lVar8);
  }
  local_f0 = param_1 + 0xb1;
  FUN_1402226aa();
  local_f8 = param_1 + 0x9d;
  FUN_1402226aa();
  FUN_1402226aa(param_1 + 0xa7);
  if ((longlong)(int)param_2[1] != 0) {
    puVar4 = (uint *)*param_2;
    local_e8 = puVar4 + (int)param_2[1];
    do {
      lVar9 = *(longlong *)(*(longlong *)(*param_1 + 0x180) + (ulonglong)(*puVar4 >> 9) * 8);
      uVar7 = (ulonglong)(*puVar4 & 0x1ff);
      local_b8 = *(undefined4 *)(lVar9 + 8 + uVar7 * 0xc);
      local_c0 = *(undefined8 *)(lVar9 + uVar7 * 0xc);
      lVar9 = 0;
      local_e0 = puVar4;
      do {
        local_c4 = *(uint *)((longlong)&local_c0 + lVar9 * 4);
        uVar7 = *(ulonglong *)
                 (*(longlong *)(*(longlong *)(*param_1 + 0x1c0) + (ulonglong)(local_c4 >> 9) * 8) +
                  8 + (ulonglong)((local_c4 & 0x1ff) << 4)) >> 0x20;
        plVar5 = param_1 + 0xa7;
        puVar6 = &local_d0;
        puVar4 = &local_c4;
        if (uVar7 == 0xffffffff) {
LAB_1482fe4e9:
          FUN_1447cbafe(plVar5,puVar6,puVar4,0);
        }
        else {
          cVar2 = FUN_146bc9736(&local_b0);
          cVar3 = FUN_146bc9736(&local_b0,uVar7);
          if (cVar2 != cVar3) {
            FUN_1447cbafe(local_f8,&local_d0,&local_c4,0);
            plVar5 = local_f0;
            local_d0 = *(undefined8 *)
                        (*(longlong *)
                          (*(longlong *)(*param_1 + 0x1c0) + (ulonglong)(local_c4 >> 9) * 8) +
                        (ulonglong)((local_c4 & 0x1ff) << 4));
            FUN_1447cbafe(local_f0,local_d4,&local_d0);
            puVar6 = (undefined8 *)local_d4;
            puVar4 = (uint *)((longlong)&local_d0 + 4);
            goto LAB_1482fe4e9;
          }
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 != 3);
      puVar4 = local_e0 + 1;
    } while (puVar4 != local_e8);
  }
  FUN_146bc9838(&local_b0);
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1482fe5d0 FUN_1482fe5d0 body=47 status=ok
// SIG undefined FUN_1482fe5d0(void)

void FUN_1482fe5d0(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1482fe5ff FUN_1482fe5ff body=43 status=ok
// SIG undefined FUN_1482fe5ff(void)

void FUN_1482fe5ff(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 9;
  }
  return;
}



// FUNCTION 1482fe62a FUN_1482fe62a body=72 status=ok
// SIG undefined FUN_1482fe62a(void)

void FUN_1482fe62a(longlong param_1)

{
  FUN_148308bdd(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  FUN_144716727(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1482fe672 FUN_1482fe672 body=106 status=ok
// SIG undefined FUN_1482fe672(void)

undefined8 FUN_1482fe672(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar2 = FUN_144a3809e((longlong)param_2 * 0x48,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xe38e38e38e38e38f),0);
  uVar5 = 0x7fffffff;
  if (param_2 <= (int)(uVar2 / 0x48)) {
    uVar5 = uVar2 / 0x48 & 0xffffffff;
  }
  iVar4 = (int)uVar5;
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  else {
    uVar3 = FUN_1446f8d3c(param_1,0,uVar5,0x48,8);
  }
  *(int *)(param_1 + 0xc) = iVar4;
  return uVar3;
}



// FUNCTION 1482fe6dc FUN_1482fe6dc body=144 status=ok
// SIG undefined FUN_1482fe6dc(void)

void FUN_1482fe6dc(undefined8 *param_1,longlong param_2,int param_3)

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
  undefined4 *puVar13;
  
  puVar13 = (undefined4 *)(param_2 + 0x10);
  do {
    *param_1 = 0;
    iVar1 = puVar13[-2];
    _Src = *(void **)(puVar13 + -4);
    *(int *)(param_1 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_144a06ca8(param_1,iVar1,0);
      memcpy((void *)*param_1,_Src,(longlong)iVar1 << 2);
    }
    *(undefined1 *)(param_1 + 8) = *(undefined1 *)(puVar13 + 0xc);
    uVar2 = *puVar13;
    uVar3 = puVar13[1];
    uVar4 = puVar13[2];
    uVar5 = puVar13[3];
    uVar6 = puVar13[4];
    uVar7 = puVar13[5];
    uVar8 = puVar13[6];
    uVar9 = puVar13[7];
    uVar10 = puVar13[9];
    uVar11 = puVar13[10];
    uVar12 = puVar13[0xb];
    *(undefined4 *)(param_1 + 6) = puVar13[8];
    *(undefined4 *)((longlong)param_1 + 0x34) = uVar10;
    *(undefined4 *)(param_1 + 7) = uVar11;
    *(undefined4 *)((longlong)param_1 + 0x3c) = uVar12;
    *(undefined4 *)(param_1 + 4) = uVar6;
    *(undefined4 *)((longlong)param_1 + 0x24) = uVar7;
    *(undefined4 *)(param_1 + 5) = uVar8;
    *(undefined4 *)((longlong)param_1 + 0x2c) = uVar9;
    *(undefined4 *)(param_1 + 2) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
    *(undefined4 *)(param_1 + 3) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uVar5;
    param_1 = param_1 + 9;
    puVar13 = puVar13 + 0x12;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 1482fe76c FUN_1482fe76c body=106 status=ok
// SIG undefined FUN_1482fe76c(void)

undefined8 FUN_1482fe76c(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar2 = FUN_144a3809e((longlong)param_2 * 0x18,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  uVar5 = 0x7fffffff;
  if (param_2 <= (int)(uVar2 / 0x18)) {
    uVar5 = uVar2 / 0x18 & 0xffffffff;
  }
  iVar4 = (int)uVar5;
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  else {
    uVar3 = FUN_1446f8d3c(param_1,0,uVar5,0x18,8);
  }
  *(int *)(param_1 + 0xc) = iVar4;
  return uVar3;
}


