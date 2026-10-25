// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140820536 FUN_140820536 body=84 status=ok
// SIG undefined FUN_140820536(void)

longlong FUN_140820536(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)((longlong)param_1 + 0x1c) != -1) {
    lVar1 = *param_1;
    lVar2 = (longlong)*(int *)((longlong)param_1 + 0x1c) * 0x58;
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)(lVar1 + 0x50 + lVar2);
    *(undefined4 *)(lVar1 + 0x50 + lVar2) = 0xffffffff;
    *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
    return lVar1 + lVar2;
  }
  if ((int)param_1[3] < (int)param_1[2]) {
    lVar1 = param_1[1];
    param_1[1] = lVar1 + 0x58;
    *(undefined4 *)(lVar1 + 0x50) = 0xffffffff;
    *(byte *)(lVar1 + 0x54) = *(byte *)(lVar1 + 0x54) & 0xfe;
    *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
    *(int *)(param_1 + 3) = (int)param_1[3] + 1;
    return lVar1;
  }
  return 0;
}



// FUNCTION 14082058a FUN_14082058a body=353 status=ok
// SIG undefined FUN_14082058a(void)

void FUN_14082058a(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140820611;
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
LAB_140820611:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1408206ec FUN_1408206ec body=84 status=ok
// SIG undefined FUN_1408206ec(void)

void FUN_1408206ec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ac47960;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_140820740(param_1 + 7);
  if (param_1[5] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140820740 FUN_140820740 body=55 status=ok
// SIG undefined FUN_140820740(void)

void FUN_140820740(longlong *param_1)

{
  FUN_140820778(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140820778 FUN_140820778 body=515 status=ok
// SIG undefined FUN_140820778(void)

void FUN_140820778(longlong *param_1,int param_2)

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
        if (uVar8 == uVar13) goto LAB_140820859;
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
          if (iVar5 - lVar11 == lVar9) goto LAB_140820859;
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
LAB_140820859:
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



// FUNCTION 140820982 FUN_140820982 body=57 status=ok
// SIG undefined FUN_140820982(void)

void FUN_140820982(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb575a8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb575a8 = FUN_140002ddd(FUN_1418479b5,uVar1,L"FactAddress");
  }
  return;
}



// FUNCTION 1408209bc FUN_1408209bc body=88 status=ok
// SIG undefined FUN_1408209bc(void)

undefined1 FUN_1408209bc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
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
  undefined4 uVar13;
  longlong lVar14;
  
  if (param_4 != 0) {
    lVar14 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar14);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      uVar7 = puVar1[4];
      uVar8 = puVar1[5];
      uVar9 = puVar1[6];
      uVar10 = puVar1[7];
      uVar11 = puVar1[9];
      uVar12 = puVar1[10];
      uVar13 = puVar1[0xb];
      lVar2 = param_2 + 0x30 + lVar14;
      *(undefined4 *)(lVar2 + -0x10) = puVar1[8];
      *(undefined4 *)(lVar2 + -0xc) = uVar11;
      *(undefined4 *)(lVar2 + -8) = uVar12;
      *(undefined4 *)(lVar2 + -4) = uVar13;
      *(undefined4 *)(lVar2 + -0x20) = uVar7;
      *(undefined4 *)(lVar2 + -0x1c) = uVar8;
      *(undefined4 *)(lVar2 + -0x18) = uVar9;
      *(undefined4 *)(lVar2 + -0x14) = uVar10;
      *(undefined4 *)(lVar2 + -0x30) = uVar3;
      *(undefined4 *)(lVar2 + -0x2c) = uVar4;
      *(undefined4 *)(lVar2 + -0x28) = uVar5;
      *(undefined4 *)(lVar2 + -0x24) = uVar6;
      FUN_140820a14();
      lVar14 = lVar14 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 140820a14 FUN_140820a14 body=79 status=ok
// SIG undefined FUN_140820a14(void)

undefined8 * FUN_140820a14(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147869ad8(param_1,iVar1);
      FUN_147869b3a(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 140820a64 FUN_140820a64 body=84 status=ok
// SIG undefined FUN_140820a64(void)

void FUN_140820a64(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 4) * 0x120));
  if (pcVar1 != (code *)0x0) {
    puVar2 = param_1;
    if (0x18 < *(ushort *)(param_1 + 3)) {
      puVar2 = (undefined8 *)*param_1;
    }
    (*pcVar1)(puVar2);
  }
  if (*(ushort *)(param_1 + 3) < 0x19) {
    return;
  }
  FUN_1400020a8(*param_1);
  return;
}



// FUNCTION 140820aba FUN_140820aba body=694 status=ok
// SIG undefined FUN_140820aba(void)

byte FUN_140820aba(longlong param_1,int param_2)

{
  uint *puVar1;
  byte bVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  byte bVar9;
  longlong lVar10;
  
  puVar1 = (uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc60);
  uVar5 = *puVar1;
  lVar10 = 0x118;
  if (((uVar5 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (uVar5 == 2)) {
LAB_140820b45:
    if (*(longlong *)(param_1 + lVar10) != 0) {
      uVar5 = *puVar1;
      lVar10 = 0x118;
      if (((uVar5 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (uVar5 == 2)) {
LAB_140820bb0:
        plVar8 = *(longlong **)(param_1 + lVar10);
      }
      else {
        if (uVar5 == 1) {
          DVar6 = FUN_140ad26c0();
          DVar7 = GetCurrentThreadId();
          if (DVar6 == DVar7) goto LAB_140820bb0;
          uVar5 = *puVar1;
        }
        if (((uVar5 == 4) || (cVar4 = (*(code *)PTR_FUN_14c758760)(), cVar4 != '\0')) ||
           (uVar5 = *puVar1, uVar5 == 8)) goto LAB_140820bb0;
        if (DAT_14c86a9fc == 0) {
          lVar10 = 0x120;
          if (((uVar5 < 0x21) && ((0x100010004U >> ((ulonglong)uVar5 & 0x3f) & 1) != 0)) ||
             (uVar5 == 0x40000010)) goto LAB_140820bb0;
        }
        else {
          lVar10 = 0x120;
          if (((uVar5 - 0x10 & 0xbfffffef) == 0) || (uVar5 == 0x20)) goto LAB_140820bb0;
        }
        plVar8 = (longlong *)0x0;
      }
      lVar10 = (**(code **)(*plVar8 + 0x58))();
      goto LAB_140820bbd;
    }
  }
  else {
    if (uVar5 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      if (DVar6 == DVar7) goto LAB_140820b45;
      uVar5 = *puVar1;
    }
    if (((uVar5 == 4) || (cVar4 = (*(code *)PTR_FUN_14c758760)(), cVar4 != '\0')) ||
       (uVar5 = *puVar1, uVar5 == 8)) goto LAB_140820b45;
    if (DAT_14c86a9fc == 0) {
      lVar10 = 0x120;
      if (((uVar5 < 0x21) && ((0x100010004U >> ((ulonglong)uVar5 & 0x3f) & 1) != 0)) ||
         (uVar5 == 0x40000010)) goto LAB_140820b45;
    }
    else {
      lVar10 = 0x120;
      if (((uVar5 - 0x10 & 0xbfffffef) == 0) || (uVar5 == 0x20)) goto LAB_140820b45;
    }
  }
  lVar10 = 0;
LAB_140820bbd:
  cVar4 = FUN_1402bfec4(param_1,0);
  if ((((cVar4 == '\0') && ((*(byte *)(param_1 + 0xc0) & 1) != 0)) &&
      (bVar9 = *(byte *)(param_1 + 0xc5), param_2 < (int)(uint)bVar9)) &&
     ((bVar2 = *(byte *)(param_1 + 0xc1), bVar2 < bVar9 && (*(byte *)(param_1 + 0xc6) == bVar9)))) {
    bVar9 = (byte)param_2;
    if (param_2 < (int)(uint)bVar2) {
      bVar9 = bVar2;
    }
    *(byte *)(param_1 + 0xc6) = bVar9;
    *(byte *)(param_1 + 0xc0) = *(byte *)(param_1 + 0xc0) | 4;
    cVar4 = DAT_14ca84e6b;
    if (lVar10 != 0) {
      if (*(char *)(lVar10 + 0x90) == '\x01') {
        lVar10 = FUN_14001cc68(0x110,0x10);
        FUN_147d6580a(lVar10,param_1);
      }
      else {
        lVar10 = FUN_14001cc68(0x110,0x10);
        if (cVar4 == '\x01') {
          FUN_140820d70();
        }
        else {
          FUN_147d656ee(lVar10,param_1);
        }
      }
      lVar3 = *(longlong *)(param_1 + 0x38);
      if (lVar3 != lVar10) {
        *(longlong *)(param_1 + 0x38) = lVar10;
        if (lVar10 != 0) {
          LOCK();
          *(int *)(lVar10 + 100) = *(int *)(lVar10 + 100) + 1;
          UNLOCK();
        }
        if (lVar3 != 0) {
          FUN_14128f1bc();
        }
      }
      return *(byte *)(*(longlong *)(param_1 + 0x38) + 0x5c) ^ 1;
    }
  }
  return 0;
}



// FUNCTION 140820d70 FUN_140820d70 body=294 status=ok
// SIG undefined FUN_140820d70(void)

undefined8 * FUN_140820d70(undefined8 *param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  longlong *plVar2;
  undefined1 auStack_108 [40];
  undefined1 local_e0 [40];
  code *local_b8 [2];
  undefined ***local_a8;
  undefined **local_98;
  undefined8 *local_90;
  longlong local_78 [2];
  longlong *local_68;
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_140322574();
  *param_1 = &PTR_FUN_14aac3070;
  if (*(byte *)((longlong)param_1 + 0xd) <= *(byte *)((longlong)param_1 + 0xe)) {
    *(undefined1 *)((longlong)param_1 + 0x5c) = 1;
  }
  local_78[0] = 0;
  local_68 = (longlong *)0x0;
  local_a8 = (undefined ***)0x0;
  local_98 = &PTR_LAB_14aacec50;
  local_b8[0] = FUN_14372f5ec;
  local_90 = param_1;
  FUN_140310484(local_e0,param_2,0);
  *(undefined4 *)(param_1 + 0xd) = 2;
  FUN_1403223d2(param_1 + 0xe,local_b8);
  *(undefined4 *)(param_1 + 0x16) = 0;
  FUN_1403223d2(param_1 + 0x18,local_78);
  if (local_b8[0] != (code *)0x0) {
    pppuVar1 = local_a8;
    if (local_a8 == (undefined ***)0x0) {
      pppuVar1 = &local_98;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if (local_78[0] != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140820e9e FUN_140820e9e body=57 status=ok
// SIG undefined FUN_140820e9e(void)

void FUN_140820e9e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21520 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21520 = FUN_140002ddd(FUN_14643319a,uVar1,L"GbxBrainAspect_IsInTerritory");
  }
  return;
}



// FUNCTION 140820ed8 FUN_140820ed8 body=330 status=ok
// SIG undefined FUN_140820ed8(void)

void FUN_140820ed8(undefined8 param_1,longlong *param_2)

{
  ulonglong uVar1;
  void *pvVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [40];
  undefined1 local_50 [16];
  void *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14574b7f8();
  FUN_140821024(&local_40);
  (**(code **)(*param_2 + 0x80))(param_2,&local_40,1);
  pvVar2 = DAT_14cacd6c8;
  local_40 = (void *)0x0;
  lVar5 = (longlong)DAT_14cacd6d0;
  local_38 = DAT_14cacd6d0;
  if (lVar5 != 0) {
    FUN_14574b796(&local_40,DAT_14cacd6d0,0);
    memcpy(local_40,pvVar2,lVar5 << 3);
    pvVar2 = local_40;
    lVar5 = (longlong)local_38;
    if (lVar5 != 0) {
      lVar6 = 0;
      do {
        uVar1 = *(ulonglong *)((longlong)pvVar2 + lVar6);
        if ((((uVar1 >> 0x20 != 0) && (uVar3 = (uint)uVar1, -1 < (int)uVar3)) &&
            ((int)uVar3 < DAT_14c9647dc)) &&
           (((plVar4 = (longlong *)
                       ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0xd & 0x3fff8))),
             plVar4 != (longlong *)0x0 && ((int)plVar4[2] == (int)(uVar1 >> 0x20))) &&
            (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (*plVar4 != 0)))))) {
          FUN_1408ccbd2(local_50);
          (**(code **)(*param_2 + 0x80))(param_2,local_50,0);
        }
        lVar6 = lVar6 + 8;
      } while (lVar5 * 8 != lVar6);
    }
    if (local_40 != (void *)0x0) {
      FUN_1400020a8(local_40);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140821024 FUN_140821024 body=247 status=ok
// SIG undefined FUN_140821024(void)

ulonglong * FUN_140821024(ulonglong *param_1)

{
  ulonglong uVar1;
  size_t sVar2;
  ulonglong uVar3;
  char *_Str;
  char **ppcVar4;
  undefined1 auStack_58 [40];
  char *local_30;
  undefined4 local_28;
  char *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1408211a5();
  if ((longlong)DAT_14cc040d8 < 0) {
    _Str = (char *)(DAT_14cc040d8 & 0x7fffffffffffffff);
    if (DAT_14cc040e4 == '\x01') {
      ppcVar4 = &local_30;
      FUN_1446f470e(ppcVar4,_Str,1);
    }
    else {
      local_30 = _Str;
      if (_Str == (char *)0x0) {
        local_28 = 0;
      }
      else {
        sVar2 = strlen(_Str);
        local_28 = (undefined4)sVar2;
      }
      ppcVar4 = &local_20;
      FUN_14001c09c(ppcVar4,&local_30,1);
    }
    uVar3 = (ulonglong)*(uint *)ppcVar4;
    uVar1 = (ulonglong)DAT_14cc040e0 << 0x20;
    DAT_14cc040d8 = uVar3;
  }
  else {
    uVar3 = (ulonglong)DAT_14cc040e0 << 0x20;
    uVar1 = DAT_14cc040d8 & 0xffffffff;
  }
  *param_1 = uVar1 | uVar3;
  uVar1 = FUN_14082111c();
  if ((uVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(uVar1);
  }
  param_1[1] = uVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14082111c FUN_14082111c body=137 status=ok
// SIG undefined FUN_14082111c(void)

longlong FUN_14082111c(void)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc040d0) {
    FUN_144b3d300(&DAT_14cc040d0);
    if (DAT_14cc040d0 == -1) {
      if (DAT_14cc018e0 == 0) {
        uVar1 = FUN_1408ed7fc();
        DAT_14cc018e0 = FUN_140002ddd(FUN_146685446,uVar1,L"RigVMUnknownType");
      }
      DAT_14cc040c8 = DAT_14cc018e0;
      _Init_thread_footer(&DAT_14cc040d0);
    }
  }
  return DAT_14cc040c8;
}



// FUNCTION 1408211a5 FUN_1408211a5 body=197 status=ok
// SIG undefined FUN_1408211a5(void)

void FUN_1408211a5(void)

{
  undefined2 *puVar1;
  undefined1 auStack_38 [32];
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc040e8) && (FUN_144b3d300(&DAT_14cc040e8), DAT_14cc040e8 == -1)) {
    FUN_14447b614();
    puVar1 = DAT_14cc040f0;
    if (DAT_14cc040f8 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    FUN_1446f470e(&local_18,puVar1,1);
    DAT_14cc040d8 = local_18 & 0xffffffff;
    DAT_14cc040e0 = (undefined4)(local_18 >> 0x20);
    DAT_14cc040e4 = 0;
    _Init_thread_footer(&DAT_14cc040e8);
  }
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14082126c FUN_14082126c body=79 status=ok
// SIG undefined FUN_14082126c(void)

void FUN_14082126c(longlong param_1)

{
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x520));
  *(undefined4 *)(param_1 + 0x518) = 0;
  if (*(int *)(param_1 + 0x51c) != 0) {
    FUN_1408212bc(param_1 + 0x510,0);
  }
                    /* WARNING: Could not recover jumptable at 0x0001408212a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x520));
  return;
}



// FUNCTION 1408212bc FUN_1408212bc body=96 status=ok
// SIG undefined FUN_1408212bc(void)

void FUN_1408212bc(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 14082131c FUN_14082131c body=605 status=ok
// SIG undefined FUN_14082131c(void)

void FUN_14082131c(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  uchar auVar9 [8];
  uchar auVar10 [8];
  longlong lVar11;
  uchar auVar12 [8];
  bool bVar13;
  undefined1 auStack_88 [44];
  undefined4 local_5c;
  GUID local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar8 = *(longlong *)(param_1 + 0xb0);
  if ((lVar8 != 0) || (lVar8 = FUN_1448abda6(param_1), lVar8 != 0)) {
    uVar5 = DAT_14cb72610;
    if (DAT_14c9a7d10 == (undefined8 *)0x0) {
      DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      *DAT_14c9a7d10 = 0;
      DAT_14c9a7d10[1] = 0;
      DAT_14c9a7d10[2] = 0;
      DAT_14c9a7d10[3] = 0;
    }
    FUN_14005915a(DAT_14c9a7d10,&local_58,uVar5,lVar8);
    auVar12 = local_58.Data4;
    uVar6 = local_58._0_8_;
    if ((local_58._0_8_ == 0) || (local_58.Data4 == (uchar  [8])0x0)) {
      auVar12[0] = '\0';
      auVar12[1] = '\0';
      auVar12[2] = '\0';
      auVar12[3] = '\0';
      auVar12[4] = '\0';
      auVar12[5] = '\0';
      auVar12[6] = '\0';
      auVar12[7] = '\0';
    }
    else {
      LOCK();
      *(int *)((longlong)local_58.Data4 + 8) = *(int *)((longlong)local_58.Data4 + 8) + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)local_58.Data4 + 0xc) = *(int *)((longlong)local_58.Data4 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar1 = (longlong *)((longlong)local_58.Data4 + 8);
      *(int *)plVar1 = *(int *)plVar1 + -1;
      UNLOCK();
      if (*(int *)plVar1 == 0) {
        (*(code *)**(undefined8 **)local_58.Data4)(local_58.Data4);
        LOCK();
        piVar2 = (int *)((longlong)auVar12 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*(longlong *)auVar12 + 0x10))(auVar12);
        }
      }
    }
    auVar9 = local_58.Data4;
    if (local_58.Data4 != (uchar  [8])0x0) {
      LOCK();
      plVar1 = (longlong *)((longlong)local_58.Data4 + 8);
      *(int *)plVar1 = *(int *)plVar1 + -1;
      UNLOCK();
      if (*(int *)plVar1 == 0) {
        (*(code *)**(undefined8 **)local_58.Data4)(local_58.Data4);
        LOCK();
        piVar2 = (int *)((longlong)auVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*(longlong *)auVar9 + 0x10))(auVar9);
        }
      }
    }
    if (auVar12 != (uchar  [8])0x0) {
      iVar7 = *(int *)((longlong)auVar12 + 8);
      auVar9[0] = '\0';
      auVar9[1] = '\0';
      auVar9[2] = '\0';
      auVar9[3] = '\0';
      auVar9[4] = '\0';
      auVar9[5] = '\0';
      auVar9[6] = '\0';
      auVar9[7] = '\0';
      do {
        auVar10 = auVar9;
        if (iVar7 == 0) break;
        LOCK();
        iVar3 = *(int *)((longlong)auVar12 + 8);
        bVar13 = iVar7 == iVar3;
        if (bVar13) {
          *(int *)((longlong)auVar12 + 8) = iVar7 + 1;
          iVar3 = iVar7;
        }
        iVar7 = iVar3;
        UNLOCK();
        auVar10 = auVar12;
      } while (!bVar13);
      LOCK();
      piVar2 = (int *)((longlong)auVar12 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*(longlong *)auVar12 + 0x10))(auVar12);
      }
      if (auVar10 != (uchar  [8])0x0) {
        local_5c = param_2;
        if (((uVar6 != 0) && (*(longlong *)(uVar6 + 0x48) != 0)) &&
           ((longlong)*(int *)(param_1 + 0x628) != 0)) {
          lVar8 = *(longlong *)(param_1 + 0x620);
          lVar11 = (longlong)*(int *)(param_1 + 0x628) * 0x30;
          do {
            uVar4 = *(undefined8 *)(uVar6 + 0x48);
            if (((*(int *)(param_1 + 0x634) == 0 && *(int *)(param_1 + 0x630) == 0) &&
                *(int *)(param_1 + 0x638) == 0) && *(int *)(param_1 + 0x63c) == 0) {
              local_58.Data1 = 0;
              local_58.Data2 = 0;
              local_58.Data3 = 0;
              local_58.Data4[0] = '\0';
              local_58.Data4[1] = '\0';
              local_58.Data4[2] = '\0';
              local_58.Data4[3] = '\0';
              local_58.Data4[4] = '\0';
              local_58.Data4[5] = '\0';
              local_58.Data4[6] = '\0';
              local_58.Data4[7] = '\0';
              CoCreateGuid(&local_58);
              *(longlong *)(param_1 + 0x630) = local_58._0_8_;
              *(uchar (*) [8])(param_1 + 0x638) = local_58.Data4;
            }
            local_58._0_8_ = *(longlong *)(param_1 + 0x630);
            local_58.Data4 = *(uchar (*) [8])(param_1 + 0x638);
            FUN_14082157a(uVar4,&local_58,lVar8);
            lVar8 = lVar8 + 0x30;
            lVar11 = lVar11 + -0x30;
          } while (lVar11 != 0);
        }
        param_2 = local_5c;
        LOCK();
        plVar1 = (longlong *)((longlong)auVar10 + 8);
        *(int *)plVar1 = *(int *)plVar1 + -1;
        UNLOCK();
        if (*(int *)plVar1 == 0) {
          (*(code *)**(undefined8 **)auVar10)(auVar10);
          LOCK();
          piVar2 = (int *)((longlong)auVar10 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*(longlong *)auVar10 + 0x10))(auVar10);
          }
        }
      }
    }
  }
  FUN_1448c4a0e(param_1,param_2);
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14082157a FUN_14082157a body=160 status=ok
// SIG undefined FUN_14082157a(void)

void FUN_14082157a(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x240) != 0) {
    lVar1 = FUN_1418712b8(param_1 + 0x40);
    FUN_14186f77a(lVar1);
    if (lVar1 != 0) {
      local_38 = *param_2;
      uStack_34 = param_2[1];
      uStack_30 = param_2[2];
      uStack_2c = param_2[3];
      FUN_14186f5e4(lVar1,&local_38,param_3);
      FUN_1418713fe(param_1 + 0xc0,lVar1);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14082162e FUN_14082162e body=77 status=ok
// SIG undefined FUN_14082162e(void)

void FUN_14082162e(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  FUN_14082167c();
  cVar1 = *(char *)(param_1 + 0x79);
  if ((cVar1 != '\0') && (cVar1 != '\x01')) {
    if (cVar1 == '\x02') {
      FUN_140824630(param_1,param_2);
      return;
    }
    return;
  }
  FUN_140821b6c(param_1,param_2);
  return;
}



// FUNCTION 14082167c FUN_14082167c body=1258 status=ok
// SIG undefined FUN_14082167c(void)

void FUN_14082167c(undefined4 param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  longlong *plVar5;
  longlong *in_RCX;
  int *piVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined2 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  undefined2 local_c0;
  longlong *local_b0;
  longlong *local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  int iStack_90;
  undefined8 local_88;
  int local_80;
  undefined8 local_78;
  int local_70;
  undefined2 *local_68;
  int local_60;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (0 < (int)in_RCX[6]) {
    lVar10 = 0;
    lVar11 = 0;
    do {
      lVar8 = in_RCX[5];
      if (*(longlong *)(param_2 + 0x18) == 0) {
        iStack_90 = DAT_14c948620;
        local_98 = (undefined4)DAT_14c948618;
        uStack_94 = (undefined4)((ulonglong)DAT_14c948618 >> 0x20);
      }
      else {
        piVar6 = *(int **)(param_2 + 8);
        if (piVar6 == (int *)0x0) {
          piVar6 = &DAT_14c9485f0;
        }
        iVar2 = *piVar6;
        if (((iVar2 == 0) || (iVar3 = piVar6[1], iVar3 == 0)) || (iVar2 == DAT_14c948000)) {
LAB_140821953:
          local_70 = DAT_14c948620;
          local_78 = DAT_14c948618;
        }
        else {
          if ((iVar3 < 2) && (piVar6[9] < 1)) {
            piVar6 = piVar6 + 2;
          }
          else {
            piVar6 = *(int **)(piVar6 + 6);
          }
          if (iVar3 < 1) goto LAB_140821953;
          local_70 = piVar6[2];
          local_78 = *(undefined8 *)piVar6;
        }
        piVar6 = *(int **)(*(longlong *)(param_2 + 0x18) + 8);
        if (piVar6 == (int *)0x0) {
          piVar6 = &DAT_14c9485f0;
        }
        if (((*piVar6 == 0) || (iVar3 = piVar6[1], iVar3 == 0)) || (*piVar6 == DAT_14c948000)) {
LAB_140821969:
          local_80 = DAT_14c948620;
          local_88 = DAT_14c948618;
        }
        else {
          if ((iVar3 < 2) && (piVar6[9] < 1)) {
            piVar6 = piVar6 + 2;
          }
          else {
            piVar6 = *(int **)(piVar6 + 6);
          }
          if (iVar3 < 1) goto LAB_140821969;
          local_80 = piVar6[2];
          local_88 = *(undefined8 *)piVar6;
        }
        FUN_1408226d0(&local_88,&local_58,CONCAT71((uint7)(uint3)((uint)iVar2 >> 8),1));
        plVar7 = (longlong *)&DAT_149dfb77a;
        if ((int)local_50 != 0) {
          plVar7 = local_58;
        }
        FUN_1408226d0(&local_78,&local_68,1);
        puVar9 = &DAT_149dfb77a;
        if (local_60 != 0) {
          puVar9 = local_68;
        }
        local_c8 = plVar7;
        FUN_140002266(&local_b0,L"WP_Add_%s_%d_%s",puVar9,(int)lVar11 + 1);
        uStack_94 = 0;
        iStack_90 = 0;
        plVar7 = (longlong *)&DAT_149dfb77a;
        if ((int)local_a8 != 0) {
          plVar7 = local_b0;
        }
        param_1 = FUN_1405f0d29(&local_98,plVar7,0);
        if (local_b0 != (longlong *)0x0) {
          param_1 = FUN_1400020a8();
        }
        if (local_68 != (undefined2 *)0x0) {
          param_1 = FUN_1400020a8();
        }
        if (local_58 != (longlong *)0x0) {
          param_1 = FUN_1400020a8();
        }
      }
      local_c8 = (longlong *)(lVar8 + lVar10 + 0x18);
      local_c0 = 0;
      param_1 = FUN_1408236ae(param_1,param_2,&local_98,lVar8 + lVar10);
      lVar11 = lVar11 + 1;
      lVar10 = lVar10 + 0x30;
    } while (lVar11 < (int)in_RCX[6]);
  }
  lVar10 = in_RCX[9];
  if ((longlong)(int)lVar10 != 0) {
    lVar11 = in_RCX[8];
    lVar8 = 0;
    do {
      plVar7 = *(longlong **)(lVar11 + lVar8);
      if (plVar7 != (longlong *)0x0) {
        plVar5 = *(longlong **)(lVar11 + 8 + lVar8);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
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
            piVar6 = (int *)((longlong)plVar5 + 0xc);
            *piVar6 = *piVar6 + -1;
            UNLOCK();
            if (*piVar6 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
        local_b0 = plVar7;
        local_a8 = plVar5;
        FUN_1408229d0(param_2 + 0x2c0,&local_b0);
        plVar7 = local_a8;
        if (local_a8 != (longlong *)0x0) {
          LOCK();
          plVar5 = local_a8 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
            (**(code **)*local_a8)(local_a8);
            LOCK();
            piVar6 = (int *)((longlong)plVar7 + 0xc);
            *piVar6 = *piVar6 + -1;
            UNLOCK();
            if (*piVar6 == 0) {
              (**(code **)(*plVar7 + 0x10))(plVar7);
            }
          }
        }
      }
      lVar8 = lVar8 + 0x18;
    } while ((longlong)(int)lVar10 * 0x18 != lVar8);
  }
  cVar4 = (**(code **)(*in_RCX + 0x38))(in_RCX);
  if (cVar4 != '\0') {
    plVar5 = (longlong *)FUN_14001cc68(0x38,0x10);
    plVar5[1] = (longlong)&DAT_100000001;
    *plVar5 = (longlong)&PTR_FUN_14b41ba40;
    plVar5[3] = 0;
    plVar5[2] = (longlong)&PTR_FUN_14b35c3a0;
    plVar5[4] = 0;
    plVar5[5] = 0;
    plVar5[6] = 0;
    *(char *)(plVar5 + 3) = cVar4;
    local_50 = (longlong *)FUN_14001cc68(0x18,0x10);
    local_50[1] = (longlong)&DAT_100000001;
    *local_50 = (longlong)&PTR_FUN_14b41daf0;
    local_58 = local_50 + 2;
    local_50[2] = (longlong)&PTR_FUN_14b3a49e0;
    FUN_14891ea94(&local_b0);
    FUN_14029d0b6(plVar5 + 4,&local_b0);
    plVar7 = local_a8;
    if (local_a8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_a8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_a8)(local_a8);
        LOCK();
        piVar6 = (int *)((longlong)plVar7 + 0xc);
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (*piVar6 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    plVar7 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar6 = (int *)((longlong)plVar7 + 0xc);
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (*piVar6 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    local_b0 = plVar5 + 2;
    local_a8 = plVar5;
    FUN_1408229d0(param_2 + 0x2c0,&local_b0);
    plVar7 = local_a8;
    if (local_a8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_a8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_a8)(local_a8);
        LOCK();
        piVar6 = (int *)((longlong)plVar7 + 0xc);
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (*piVar6 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar5 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar6 = (int *)((longlong)plVar5 + 0xc);
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (*piVar6 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140821b6c FUN_140821b6c body=1150 status=ok
// SIG undefined FUN_140821b6c(void)

void FUN_140821b6c(undefined4 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong in_RCX;
  undefined4 uVar9;
  undefined1 auStack_d8 [32];
  ulonglong local_b8;
  short local_b0;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_88;
  undefined1 local_80 [40];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(char *)(in_RCX + 0x79) == '\0') {
    local_88 = *(undefined4 *)(in_RCX + 0x84);
    local_90 = *(undefined8 *)(in_RCX + 0x7c);
  }
  else {
    local_88 = *(undefined4 *)(in_RCX + 0x90);
    local_90 = *(undefined8 *)(in_RCX + 0x88);
  }
  if ((int)local_90 == 0) goto LAB_140821de0;
  if (*(byte *)(in_RCX + 0x78) < 2) {
    lVar6 = in_RCX + 0x88;
    if (*(char *)(in_RCX + 0x79) == '\0') {
      lVar6 = in_RCX + 0x7c;
    }
    bVar4 = *(byte *)(in_RCX + 8);
    uVar9 = FUN_140822484(in_RCX + 0x7c,local_80,param_2);
    local_b8 = in_RCX + 0x10;
    local_b0 = (ushort)bVar4 * 2;
    param_1 = FUN_1408236ae(uVar9,param_2,local_80,lVar6);
  }
  local_b8 = CONCAT71(local_b8._1_7_,2);
  uVar9 = FUN_1408234aa(param_1,local_80,param_2,&DAT_14cb86eb8);
  lVar6 = FUN_140823ef2(uVar9,param_2,&DAT_14c948618);
  *(undefined1 *)(lVar6 + 0x30) = 1;
  plVar7 = (longlong *)FUN_14001cc68(0x40,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14b41bb30;
  plVar7[5] = 0;
  plVar7[6] = 0;
  plVar7[3] = 0;
  plVar7[4] = 0;
  plVar7[7] = 0;
  plVar7[2] = (longlong)&PTR_FUN_14afff040;
  *(undefined8 *)((longlong)plVar7 + 0x2c) = 0;
  *(undefined8 *)((longlong)plVar7 + 0x34) = 0;
  *(undefined1 *)((longlong)plVar7 + 0x3c) = *(undefined1 *)(in_RCX + 0x7a);
  if (*(char *)(in_RCX + 0x79) == '\x01') {
    *(undefined1 *)(plVar7 + 5) = 1;
    uVar9 = *(undefined4 *)(in_RCX + 0x94);
    *(undefined4 *)((longlong)plVar7 + 0x2c) = uVar9;
    if (*(char *)(in_RCX + 0x98) != '\x01') goto LAB_140821c94;
    FUN_140822484(uVar9,&local_a0,param_2);
    *(undefined4 *)(plVar7 + 7) = uStack_98;
    plVar7[6] = CONCAT44(uStack_9c,local_a0);
  }
  else {
LAB_140821c94:
    FUN_14082216c(lVar6,&local_90);
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  iVar5 = *(int *)(lVar6 + 0x50);
  *(uint *)(lVar6 + 0x50) = iVar5 + 1U;
  if (*(uint *)(lVar6 + 0x54) < iVar5 + 1U) {
    FUN_140822376((longlong *)(lVar6 + 0x48),iVar5);
  }
  lVar6 = *(longlong *)(lVar6 + 0x48);
  *(longlong **)(lVar6 + (longlong)iVar5 * 0x10) = plVar7 + 2;
  *(longlong **)(lVar6 + 8 + (longlong)iVar5 * 0x10) = plVar7;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
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
  plVar1 = plVar7 + 3;
  iVar5 = (int)plVar7[4];
  *(uint *)(plVar7 + 4) = iVar5 + 1U;
  if (*(uint *)((longlong)plVar7 + 0x24) < iVar5 + 1U) {
    FUN_140823334(plVar1,iVar5);
  }
  puVar3 = (undefined8 *)(*plVar1 + (longlong)iVar5 * 0x28);
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[4] = 0;
  uVar8 = DAT_14cb86278;
  if (*(char *)(in_RCX + 0x78) != '\0') {
    switch(*(char *)(in_RCX + 0x78)) {
    case '\x01':
      uVar8 = DAT_14cb86200;
      break;
    case '\x02':
      uVar8 = DAT_14cb86208;
      break;
    case '\x03':
      uVar8 = DAT_14cb86210;
      break;
    case '\x04':
      uVar8 = DAT_14cb86218;
      break;
    default:
      uVar8 = 0;
    }
  }
  *puVar3 = uVar8;
  local_a0 = CONCAT31(local_a0._1_3_,1);
  local_94 = 1;
  uStack_9c = (undefined4)DAT_14cb7c588;
  uStack_98 = (undefined4)((ulonglong)DAT_14cb7c588 >> 0x20);
  FUN_140821fec(puVar3,local_80,&local_a0,0);
  if (*(longlong *)(param_2 + 1000) != 0) {
    iVar5 = (int)plVar7[4];
    *(uint *)(plVar7 + 4) = iVar5 + 1U;
    if (*(uint *)((longlong)plVar7 + 0x24) < iVar5 + 1U) {
      FUN_140823334(plVar1,iVar5);
    }
    puVar3 = (undefined8 *)(*plVar1 + (longlong)iVar5 * 0x28);
    puVar3[2] = 0;
    puVar3[3] = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[4] = 0;
    if ((ulonglong)*(byte *)(in_RCX + 0x78) < 3) {
      *puVar3 = *(undefined8 *)(&PTR_DAT_14b41e088)[*(byte *)(in_RCX + 0x78)];
    }
    local_a0._0_1_ = 1;
    local_94 = 0;
    uStack_9c = (undefined4)DAT_14cb7c580;
    uStack_98 = (undefined4)((ulonglong)DAT_14cb7c580 >> 0x20);
    FUN_140821fec(puVar3,local_80,&local_a0,0);
    lVar6 = FUN_1406b2efc(param_2 + 0x2c0);
    local_a0 = CONCAT31(local_a0._1_3_,1);
    local_94 = 1;
    uStack_9c = (undefined4)DAT_14cb7c588;
    uStack_98 = (undefined4)((ulonglong)DAT_14cb7c588 >> 0x20);
    local_b8 = local_b8 & 0xffffffffffffff00;
    uVar8 = FUN_140641812(lVar6 + 0xb0,local_80,&local_a0,0);
    lVar6 = FUN_140c80b38(uVar8);
    *(undefined1 *)(lVar6 + 0x10) = 1;
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
  FUN_14082207e(&local_a0,local_80,0);
  FUN_140822770(param_2 + 0x2c0,&local_a0,1);
  FUN_1447cd778(CONCAT44(uStack_9c,local_a0),uStack_98);
  if (CONCAT44(uStack_9c,local_a0) != 0) {
    FUN_1400020a8();
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
LAB_140821de0:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140821fec FUN_140821fec body=145 status=ok
// SIG undefined FUN_140821fec(void)

longlong FUN_140821fec(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar2 + 1U) {
    FUN_1406419cc((longlong *)(param_1 + 0x18),iVar2);
  }
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar2 * 0x18);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  lVar3 = FUN_1406418b4();
  *(undefined8 *)(lVar3 + 0x20) = *param_2;
  *(undefined4 *)(lVar3 + 0x28) = *(undefined4 *)(param_2 + 1);
  FUN_1447715ec(lVar3 + 0x30,param_2 + 2);
  FUN_140641b42(lVar3 + 0x60,param_3);
  *(undefined1 *)(lVar3 + 0x58) = param_4;
  return lVar3;
}



// FUNCTION 14082207e FUN_14082207e body=145 status=ok
// SIG undefined FUN_14082207e(void)

undefined8 FUN_14082207e(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_458 [32];
  undefined1 *local_438;
  undefined1 *local_430;
  ulonglong *local_428;
  char local_420;
  undefined1 local_418 [1024];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_458;
  local_438 = local_418;
  local_420 = '\0';
  local_428 = &local_18;
  local_430 = local_438;
  FUN_14014e8d0(param_2,&local_438);
  FUN_140822110(param_1,&local_438,0);
  if (local_420 == '\x01') {
    FUN_1400020a8(local_438);
  }
  if ((local_18 ^ (ulonglong)auStack_458) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140822110 FUN_140822110 body=91 status=ok
// SIG undefined FUN_140822110(void)

undefined8 * FUN_140822110(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  
  puVar2 = (undefined1 *)param_2[1];
  if ((undefined1 *)param_2[2] <= puVar2 + 1) {
    FUN_145753a78(param_2,1);
    puVar2 = (undefined1 *)param_2[1];
  }
  param_2[1] = puVar2 + 1;
  *puVar2 = 0;
  uVar1 = *param_2;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_140822ef4(param_1,uVar1,param_3);
  return param_1;
}



// FUNCTION 14082216c FUN_14082216c body=251 status=ok
// SIG undefined FUN_14082216c(void)

void FUN_14082216c(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if ((int)*param_2 != 0) {
    plVar5 = (longlong *)FUN_14001cc68(0x28,0x10);
    plVar5[1] = (longlong)&DAT_100000001;
    *plVar5 = (longlong)&PTR_FUN_14b419790;
    plVar5[4] = 0;
    plVar5[2] = (longlong)&PTR_FUN_14b348fa0;
    *(int *)(plVar5 + 4) = (int)param_2[1];
    plVar5[3] = *param_2;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    iVar3 = *(int *)(param_1 + 0x40);
    *(uint *)(param_1 + 0x40) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0x44) < iVar3 + 1U) {
      FUN_140822268((longlong *)(param_1 + 0x38),iVar3);
    }
    lVar4 = *(longlong *)(param_1 + 0x38);
    *(longlong **)(lVar4 + (longlong)iVar3 * 0x10) = plVar5 + 2;
    *(longlong **)(lVar4 + 8 + (longlong)iVar3 * 0x10) = plVar5;
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
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 140822268 FUN_140822268 body=269 status=ok
// SIG undefined FUN_140822268(void)

void FUN_140822268(longlong param_1,int param_2)

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



// FUNCTION 140822376 FUN_140822376 body=269 status=ok
// SIG undefined FUN_140822376(void)

void FUN_140822376(longlong param_1,int param_2)

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



// FUNCTION 140822484 FUN_140822484 body=341 status=ok
// SIG undefined FUN_140822484(void)

undefined8 * FUN_140822484(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  uint local_28;
  undefined8 local_20;
  uint local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_3 + 0x18) == 0) {
    *(uint *)(param_2 + 1) = DAT_14c948620;
    *param_2 = DAT_14c948618;
    if ((local_10 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_2;
  }
  piVar4 = *(int **)(param_3 + 8);
  if (piVar4 == (int *)0x0) {
    piVar4 = &DAT_14c9485f0;
  }
  if (((*piVar4 == 0) || (iVar1 = piVar4[1], iVar1 == 0)) || (*piVar4 == DAT_14c948000)) {
LAB_140822578:
    local_18 = DAT_14c948620;
    local_20 = DAT_14c948618;
  }
  else {
    if ((iVar1 < 2) && (piVar4[9] < 1)) {
      piVar4 = piVar4 + 2;
    }
    else {
      piVar4 = *(int **)(piVar4 + 6);
    }
    if (iVar1 < 1) goto LAB_140822578;
    local_18 = piVar4[2];
    local_20 = *(undefined8 *)piVar4;
  }
  piVar4 = *(int **)(*(longlong *)(param_3 + 0x18) + 8);
  piVar3 = &DAT_14c9485f0;
  if (piVar4 != (int *)0x0) {
    piVar3 = piVar4;
  }
  if (*piVar3 != 0) {
    uVar2 = piVar3[1];
    piVar4 = (int *)(ulonglong)uVar2;
    if ((uVar2 != 0) && (*piVar3 != DAT_14c948000)) {
      if (((int)uVar2 < 2) && (piVar3[9] < 1)) {
        piVar3 = piVar3 + 2;
      }
      else {
        piVar3 = *(int **)(piVar3 + 6);
      }
      if (0 < (int)uVar2) {
        local_28 = piVar3[2];
        piVar4 = (int *)(ulonglong)local_28;
        local_30 = *(undefined8 *)piVar3;
        goto LAB_14082254b;
      }
    }
  }
  local_28 = DAT_14c948620;
  local_30 = DAT_14c948618;
LAB_14082254b:
  FUN_1408225da(piVar4,param_2,&local_30,&local_20);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_58);
}



// FUNCTION 1408225da FUN_1408225da body=245 status=ok
// SIG undefined FUN_1408225da(void)

longlong FUN_1408225da(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_88 [40];
  undefined2 *local_60;
  int local_58;
  undefined2 *local_50;
  int local_48;
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1408226d0(param_3,&local_50,1);
  puVar1 = &DAT_149dfb77a;
  if (local_48 != 0) {
    puVar1 = local_50;
  }
  FUN_1408226d0(param_4,&local_60,1);
  puVar2 = &DAT_149dfb77a;
  if (local_58 != 0) {
    puVar2 = local_60;
  }
  FUN_140002266(&local_40,L"WP_%s_%s",puVar2,puVar1);
  *(undefined8 *)(param_2 + 4) = 0;
  puVar1 = &DAT_149dfb77a;
  if (local_38 != 0) {
    puVar1 = local_40;
  }
  FUN_1405f0d29(param_2,puVar1,0);
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408226d0 FUN_1408226d0 body=158 status=ok
// SIG undefined FUN_1408226d0(void)

undefined8 FUN_1408226d0(int *param_1,undefined8 param_2,char param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(ulonglong *)(param_1 + 1);
  uVar2 = uVar1;
  if ((uVar1 == DAT_14c948034) && (uVar2 = DAT_14c948034, *param_1 != DAT_14c948030)) {
    FUN_14011791e(&local_30,*param_1,uVar1 >> 0x20);
    *(ulonglong *)(param_1 + 1) = local_30;
    uVar2 = local_30;
  }
  local_30 = uVar2 & 0xffffffff;
  if (param_3 == '\0') {
    FUN_14029eeae(&local_30,param_2);
  }
  else {
    local_30 = uVar2;
    FUN_1400021e4();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140822770 FUN_140822770 body=385 status=ok
// SIG undefined FUN_140822770(void)

void FUN_140822770(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar3 = (longlong *)FUN_14001cc68(0x38,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b41ba40;
  plVar3[3] = 1;
  plVar3[2] = (longlong)&PTR_FUN_14b35c3a0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  plVar3[6] = 0;
  uVar4 = FUN_140822996();
  FUN_140005f6c(plVar3 + 4,uVar4,0,0);
  FUN_140822942(plVar3 + 4,&local_50);
  FUN_1408228f2(local_50 + 1,param_2);
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
  *(undefined1 *)(plVar3 + 3) = param_3;
  local_50 = plVar3 + 2;
  local_48 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    FUN_1408229d0(param_1,&local_50);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    FUN_1408229d0(param_1);
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
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408228f2 FUN_1408228f2 body=80 status=ok
// SIG undefined FUN_1408228f2(void)

longlong * FUN_1408228f2(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_1447cd778(*param_1,(int)param_1[1]);
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



// FUNCTION 140822942 FUN_140822942 body=83 status=ok
// SIG undefined FUN_140822942(void)

longlong * FUN_140822942(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_140822996();
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



// FUNCTION 140822996 FUN_140822996 body=57 status=ok
// SIG undefined FUN_140822996(void)

void FUN_140822996(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6e028 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6e028 = FUN_140002ddd(FUN_1465398a0,uVar1,L"ObjectiveValueEvaluator_FactExpression");
  }
  return;
}



// FUNCTION 1408229d0 FUN_1408229d0 body=660 status=ok
// SIG undefined FUN_1408229d0(void)

void FUN_1408229d0(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 uVar10;
  
  iVar3 = *(int *)(param_1 + 0x60);
  *(uint *)(param_1 + 0x60) = iVar3 + 1U;
  if (*(uint *)(param_1 + 100) < iVar3 + 1U) {
    FUN_140822c9e((longlong *)(param_1 + 0x58),iVar3);
  }
  lVar7 = *(longlong *)(param_1 + 0x58);
  *(undefined8 *)(lVar7 + (longlong)iVar3 * 0x10) = *param_2;
  lVar4 = param_2[1];
  *(longlong *)(lVar7 + 8 + (longlong)iVar3 * 0x10) = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  uVar10 = *param_2;
  uVar6 = FUN_140822c64();
  cVar5 = FUN_1448093f4(uVar10,uVar6);
  if (cVar5 == '\0') {
    uVar10 = *param_2;
    uVar6 = FUN_140822eba();
    cVar5 = FUN_1448093f4(uVar10,uVar6);
    if (cVar5 == '\0') {
      uVar10 = *param_2;
      uVar6 = FUN_14082439a();
      cVar5 = FUN_1448093f4(uVar10,uVar6);
      if (cVar5 == '\0') {
        uVar10 = *param_2;
        uVar6 = FUN_140823eb8();
        cVar5 = FUN_1448093f4(uVar10,uVar6);
        if (cVar5 == '\0') {
          return;
        }
        uVar10 = *param_2;
        plVar9 = (longlong *)param_2[1];
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
          UNLOCK();
        }
        plVar8 = (longlong *)(param_1 + 0x98);
        iVar3 = *(int *)(param_1 + 0xa0);
        lVar7 = (longlong)iVar3;
        *(uint *)(param_1 + 0xa0) = iVar3 + 1U;
        if (*(uint *)(param_1 + 0xa4) < iVar3 + 1U) {
          FUN_14082443e(plVar8,iVar3);
        }
        goto LAB_140822a62;
      }
      if (*(longlong *)(param_1 + 0x88) != 0) {
        return;
      }
      uVar10 = *param_2;
      plVar9 = (longlong *)param_2[1];
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        *(undefined8 *)(param_1 + 0x88) = uVar10;
        plVar8 = *(longlong **)(param_1 + 0x90);
        if (plVar9 == plVar8) goto LAB_140822bcc;
        *(longlong **)(param_1 + 0x90) = plVar9;
        goto LAB_140822ae2;
      }
      *(undefined8 *)(param_1 + 0x88) = uVar10;
      plVar8 = *(longlong **)(param_1 + 0x90);
      if (plVar8 == (longlong *)0x0) {
        return;
      }
      *(undefined8 *)(param_1 + 0x90) = 0;
    }
    else {
      if (*(longlong *)(param_1 + 0x78) != 0) {
        return;
      }
      uVar10 = *param_2;
      plVar9 = (longlong *)param_2[1];
      if (plVar9 == (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x78) = uVar10;
        plVar8 = *(longlong **)(param_1 + 0x80);
        if (plVar8 == (longlong *)0x0) {
          return;
        }
        *(undefined8 *)(param_1 + 0x80) = 0;
      }
      else {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        *(undefined8 *)(param_1 + 0x78) = uVar10;
        plVar8 = *(longlong **)(param_1 + 0x80);
        if (plVar9 == plVar8) {
LAB_140822bcc:
          LOCK();
          plVar8 = plVar9 + 1;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)*plVar8 == 0) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
          goto LAB_140822a7b;
        }
        *(longlong **)(param_1 + 0x80) = plVar9;
LAB_140822ae2:
        if (plVar8 == (longlong *)0x0) goto LAB_140822a7b;
      }
    }
    LOCK();
    plVar2 = plVar8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
    if (plVar9 == (longlong *)0x0) {
      return;
    }
  }
  else {
    uVar10 = *param_2;
    plVar9 = (longlong *)param_2[1];
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    plVar8 = (longlong *)(param_1 + 0x68);
    iVar3 = *(int *)(param_1 + 0x70);
    lVar7 = (longlong)iVar3;
    *(uint *)(param_1 + 0x70) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0x74) < iVar3 + 1U) {
      FUN_140822dac(plVar8,iVar3);
    }
LAB_140822a62:
    lVar4 = *plVar8;
    *(undefined8 *)(lVar4 + lVar7 * 0x10) = uVar10;
    *(longlong **)(lVar4 + 8 + lVar7 * 0x10) = plVar9;
    if (plVar9 == (longlong *)0x0) {
      return;
    }
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
LAB_140822a7b:
  LOCK();
  plVar8 = plVar9 + 1;
  *(int *)plVar8 = (int)*plVar8 + -1;
  UNLOCK();
  if ((int)*plVar8 == 0) {
    (**(code **)*plVar9)(plVar9);
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140822bc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar9 + 0x10))(plVar9);
      return;
    }
  }
  return;
}



// FUNCTION 140822c64 FUN_140822c64 body=57 status=ok
// SIG undefined FUN_140822c64(void)

void FUN_140822c64(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c680 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c680 = FUN_140002ddd(FUN_146531dcf,uVar1,L"MissionObjectiveAspect_ResolveObjective");
  }
  return;
}



// FUNCTION 140822c9e FUN_140822c9e body=269 status=ok
// SIG undefined FUN_140822c9e(void)

void FUN_140822c9e(longlong param_1,int param_2)

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



// FUNCTION 140822dac FUN_140822dac body=269 status=ok
// SIG undefined FUN_140822dac(void)

void FUN_140822dac(longlong param_1,int param_2)

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



// FUNCTION 140822eba FUN_140822eba body=57 status=ok
// SIG undefined FUN_140822eba(void)

void FUN_140822eba(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c698 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c698 = FUN_140002ddd(FUN_146531e29,uVar1,L"MissionObjectiveAspect_UpdateCount");
  }
  return;
}



// FUNCTION 140822ef4 FUN_140822ef4 body=1086 status=ok
// SIG undefined FUN_140822ef4(void)

void FUN_140822ef4(longlong *param_1,char *param_2,byte param_3)

{
  undefined4 *puVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined1 uVar8;
  int iVar9;
  size_t sVar10;
  uint uVar11;
  longlong lVar12;
  undefined ***pppuVar13;
  undefined2 *puVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  undefined4 uVar18;
  undefined1 auStack_198 [32];
  undefined2 *local_178;
  int local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  char *local_158;
  int local_150;
  longlong local_148 [2];
  undefined4 local_138;
  longlong local_130;
  undefined8 uStack_128;
  undefined4 local_120;
  longlong local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  longlong local_100;
  ulonglong uStack_f8;
  undefined4 local_f0;
  undefined1 local_e8 [8];
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined2 local_b8;
  undefined1 local_a8;
  undefined1 uStack_a7;
  undefined2 uStack_a6;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined ***local_98;
  undefined8 uStack_90;
  undefined **local_88;
  undefined1 *local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_198;
  FUN_14082588c();
  if (param_2 == (char *)0x0) goto LAB_1408232e7;
  sVar10 = strlen(param_2);
  iVar9 = (int)sVar10;
  if (iVar9 < 1) {
LAB_140822f4e:
    if (iVar9 == 0) goto LAB_1408232e7;
  }
  else if (*param_2 == '=') {
    param_2 = param_2 + 1;
    iVar9 = iVar9 + -1;
    goto LAB_140822f4e;
  }
  local_e8[0] = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_148[0] = 0;
  local_148[1] = 0;
  local_138 = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_f0 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  local_b8 = 0xffff;
  local_158 = param_2;
  local_150 = iVar9;
  uVar18 = FUN_1405b449e(local_148);
  if ((longlong)(int)uStack_f8 != 0) {
    lVar12 = local_100;
    do {
      lVar15 = 0;
      while (*(int *)((longlong)&DAT_14b3fcc60 + lVar15) != *(int *)(lVar12 + 0x18)) {
        lVar15 = lVar15 + 4;
        if (lVar15 == 0x38) goto LAB_1408232a3;
      }
      lVar12 = lVar12 + 0x20;
    } while (lVar12 != (longlong)(int)uStack_f8 * 0x20 + local_100);
  }
  lVar12 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  puVar1 = (undefined4 *)(lVar12 + 0xc7c);
  uVar6 = *puVar1;
  pbVar2 = (byte *)(lVar12 + 0xc80);
  bVar5 = *pbVar2;
  if ((param_3 & bVar5) == 1) {
    *pbVar2 = 0;
    *puVar1 = 0xffffffff;
  }
  if ((int)uStack_f8 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uStack_f8 & 0xffffffff);
  }
  if (*(int *)((longlong)param_1 + 0xc) < (int)uStack_f8) {
    uVar18 = FUN_140826346(param_1);
  }
  lVar12 = local_100;
  if ((param_3 & bVar5) != 0) {
    *puVar1 = uVar6;
    *pbVar2 = 1;
  }
  lVar15 = (longlong)(int)uStack_f8;
  if (lVar15 != 0) {
    lVar16 = 0;
    do {
      iVar9 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar9 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar9 + 1U) {
        uVar18 = FUN_14883eb1e(param_1,iVar9);
      }
      lVar7 = *param_1;
      lVar17 = (longlong)iVar9 * 0x50;
      *(undefined4 *)(lVar7 + lVar17) = 0xffff0000;
      *(undefined2 *)(lVar7 + 4 + lVar17) = 0xffff;
      *(undefined2 *)(lVar7 + 8 + lVar17) = 0;
      uVar8 = 0;
      *(undefined8 *)(lVar7 + 0xc + lVar17) = 0;
      puVar4 = (undefined8 *)(lVar7 + 0x18 + lVar17);
      *puVar4 = 0;
      puVar4[1] = 0;
      *(undefined4 *)(lVar7 + 0x28 + lVar17) = 0;
      *(undefined8 *)(lVar7 + 0x44 + lVar17) = 0;
      *(undefined4 *)(lVar7 + 0x4c + lVar17) = 0;
      puVar4 = (undefined8 *)(lVar7 + 0x30 + lVar17);
      *puVar4 = 0;
      puVar4[1] = 0;
      *(undefined1 *)(lVar7 + 0x40 + lVar17) = 0;
      uVar11 = *(int *)(lVar12 + 0x18 + lVar16) - 1;
      if (uVar11 < 0x12) {
        uVar8 = (&DAT_14b3fdfe8)[uVar11];
      }
      puVar3 = (undefined1 *)(lVar17 + lVar7);
      *puVar3 = uVar8;
      *(undefined2 *)(puVar3 + 2) = *(undefined2 *)(lVar12 + 0x1c + lVar16);
      *(undefined2 *)(puVar3 + 4) = *(undefined2 *)(lVar12 + 0x1e + lVar16);
      puVar3[1] = *(undefined1 *)(lVar12 + 4 + lVar16);
      iVar9 = *(int *)(lVar12 + 0x10 + lVar16);
      if (0 < iVar9) {
        FUN_1405b4428(&local_178,iVar9,*(undefined8 *)(lVar12 + 8 + lVar16));
        puVar14 = &DAT_149dfb77a;
        if (local_170 != 0) {
          puVar14 = local_178;
        }
        lVar17 = lVar17 + lVar7;
        FUN_141881e36(&local_168,puVar14);
        uStack_a7 = 0;
        local_98 = (undefined ***)0x0;
        uStack_90 = 0;
        local_88 = (undefined **)((ulonglong)local_88 & 0xffffffff00000000);
        local_80 = (undefined1 *)0x0;
        uStack_78 = 0;
        local_70 = local_168;
        uStack_6c = uStack_164;
        uStack_68 = uStack_160;
        uStack_64 = uStack_15c;
        puVar3[8] = 0;
        local_a8 = 0;
        *(undefined8 *)(puVar3 + 0xc) = 0;
        uStack_a4 = 0;
        uStack_a0 = 0;
        FUN_1404e49fa(lVar17 + 0x18);
        puVar3[9] = uStack_a7;
        uStack_a7 = 0;
        *(undefined4 *)(lVar17 + 0x40) = local_70;
        *(undefined4 *)(lVar17 + 0x44) = uStack_6c;
        *(undefined4 *)(lVar17 + 0x48) = uStack_68;
        *(undefined4 *)(lVar17 + 0x4c) = uStack_64;
        uVar18 = local_70;
        if (local_80 != (undefined1 *)0x0) {
          uVar18 = FUN_1400020a8();
        }
        if (local_178 != (undefined2 *)0x0) {
          uVar18 = FUN_1400020a8();
        }
      }
      lVar16 = lVar16 + 0x20;
    } while (lVar15 * 0x20 != lVar16);
  }
  local_98 = (undefined ***)0x0;
  local_88 = &PTR_LAB_14b3fcd10;
  local_80 = &LAB_143d3109a;
  local_a8 = 0xc0;
  uStack_a7 = 0xe8;
  uStack_a6 = 0x4014;
  uStack_a4 = 1;
  if ((longlong)(int)param_1[1] == 0) {
LAB_14082328e:
    pppuVar13 = &local_88;
    if (local_98 != (undefined ***)0x0) {
      pppuVar13 = local_98;
    }
    (*(code *)(*pppuVar13)[2])();
  }
  else {
    lVar12 = *param_1;
    lVar15 = (longlong)(int)param_1[1] * 0x50;
    do {
      uVar18 = FUN_14014e388(uVar18,lVar12,&local_a8);
      lVar12 = lVar12 + 0x50;
      lVar15 = lVar15 + -0x50;
    } while (lVar15 != 0);
    if (CONCAT44(uStack_a4,CONCAT22(uStack_a6,CONCAT11(uStack_a7,local_a8))) != 0)
    goto LAB_14082328e;
  }
LAB_1408232a3:
  FUN_1405b4658(local_e8);
  if (local_100 != 0) {
    FUN_1400020a8();
  }
  if (local_118 != 0) {
    FUN_1400020a8();
  }
  if (local_130 != 0) {
    FUN_1400020a8();
  }
  if (local_148[0] != 0) {
    FUN_1400020a8();
  }
LAB_1408232e7:
  if ((local_60 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140823334 FUN_140823334 body=373 status=ok
// SIG undefined FUN_140823334(void)

void FUN_140823334(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1408233bd;
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
LAB_1408233bd:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x28)) {
    uVar7 = uVar5 / 0x28 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x28,8);
  return;
}



// FUNCTION 1408234aa FUN_1408234aa body=515 status=ok
// SIG undefined FUN_1408234aa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 *
FUN_1408234aa(undefined8 param_1,undefined2 *param_2,longlong param_3,undefined8 param_4,
             char param_5)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  int local_88;
  undefined1 local_80 [40];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  longlong local_40;
  undefined8 uStack_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  FUN_144928d62(&local_58,0,&DAT_14cb7bd98);
  piVar2 = &DAT_14c9485f0;
  if (*(int **)(param_3 + 8) != (int *)0x0) {
    piVar2 = *(int **)(param_3 + 8);
  }
  if (((*piVar2 != 0) && (iVar1 = piVar2[1], iVar1 != 0)) && (*piVar2 != DAT_14c948000)) {
    if ((iVar1 < 2) && (piVar2[9] < 1)) {
      piVar2 = piVar2 + 2;
    }
    else {
      piVar2 = *(int **)(piVar2 + 6);
    }
    if (0 < iVar1) {
      local_88 = piVar2[2];
      local_90 = *(undefined8 *)piVar2;
      goto LAB_140823558;
    }
  }
  local_88 = DAT_14c948620;
  local_90 = DAT_14c948618;
LAB_140823558:
  FUN_144928d62(&local_58,1,&local_90);
  if (param_5 == '\0') {
    uVar3 = 2;
  }
  else {
    local_90 = 0;
    local_88 = 0;
    if (param_5 == '\x02') {
      local_88 = DAT_14cb7bdb8;
      local_90 = _DAT_14cb7bdb0;
    }
    else if (param_5 == '\x01') {
      local_88 = DAT_14cb7bc00;
      local_90 = _DAT_14cb7bbf8;
    }
    else if (param_5 == '\x03') {
      local_88 = DAT_14cb7bc18;
      local_90 = _DAT_14cb7bc10;
    }
    FUN_144928d62(&local_58,2,&local_90);
    uVar3 = 3;
  }
  FUN_144928d62(&local_58,uVar3,param_4);
  *param_2 = 0;
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x14) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  FUN_1447a97f4(local_80,&local_58);
  FUN_14071d490(local_80,param_2);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1408236ae FUN_1408236ae body=909 status=ok
// SIG undefined FUN_1408236ae(void)

undefined8 *
FUN_1408236ae(undefined8 param_1,longlong param_2,undefined8 *param_3,int *param_4,longlong *param_5
             ,ushort param_6)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  int local_80;
  undefined8 local_78;
  undefined4 local_70;
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  undefined8 uStack_50;
  longlong local_48;
  ulonglong uStack_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140553e5a(&local_68);
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_78 = *param_3;
  local_70 = *(undefined4 *)(param_3 + 1);
  *(ushort *)(local_68 + 0xc) = param_6;
  if (*(char *)(param_2 + 0x3aa) == '\x01') {
    *(ushort *)(local_68 + 0xc) = param_6 | 1;
  }
  lVar7 = FUN_140823a6a();
  lVar9 = *(longlong *)(lVar7 + 0x110);
  if (lVar9 == 0) {
    FUN_140aa6c08(lVar7);
    lVar9 = *(longlong *)(lVar7 + 0x110);
  }
  local_38 = *(undefined4 *)(lVar9 + 0x48);
  param_5 = (longlong *)*param_5;
  if (param_5 == (longlong *)0x0) {
    bVar10 = false;
  }
  else {
    (**(code **)(*param_5 + 0x10))(param_5,&local_78,param_4);
    bVar10 = (int)uStack_50 != 0;
  }
  if ((!bVar10) && (*param_4 != 0)) {
    plVar8 = (longlong *)FUN_14001cc68(0x50,0x10);
    plVar8[1] = (longlong)&DAT_100000001;
    *plVar8 = (longlong)&PTR_FUN_14b4024d0;
    plVar8[3] = 0;
    plVar8[4] = 0;
    plVar8[7] = 0;
    plVar8[2] = (longlong)&PTR_FUN_14b3e4b50;
    *(undefined4 *)(plVar8 + 4) = 0;
    plVar8[5] = 0;
    plVar8[6] = 0;
    *(undefined4 *)(plVar8 + 7) = 0;
    plVar8[8] = 0;
    plVar8[9] = 0;
    *(undefined2 *)(plVar8 + 3) = 0xb;
    FUN_140c25b54(plVar8 + 3);
    local_80 = param_4[2];
    local_88 = *(undefined8 *)param_4;
    FUN_144928d62(plVar8 + 5,0);
    uVar5 = uStack_50;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    lVar9 = (longlong)(int)uStack_50;
    uVar6 = (int)uStack_50 + 1;
    uStack_50 = CONCAT44(uStack_50._4_4_,uVar6);
    if (uStack_50._4_4_ < uVar6) {
      FUN_140823c34(&local_58,uVar5 & 0xffffffff);
    }
    *(longlong **)(local_58 + lVar9 * 0x10) = plVar8 + 2;
    *(longlong **)(local_58 + 8 + lVar9 * 0x10) = plVar8;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
      LOCK();
      plVar1 = plVar8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
  }
  iVar4 = *(int *)(param_2 + 0x2f8);
  *(uint *)(param_2 + 0x2f8) = iVar4 + 1U;
  if (*(uint *)(param_2 + 0x2fc) < iVar4 + 1U) {
    FUN_140823d42((longlong *)(param_2 + 0x2f0),iVar4);
  }
  uVar5 = uStack_50;
  lVar9 = local_58;
  puVar3 = (undefined8 *)(*(longlong *)(param_2 + 0x2f0) + (longlong)iVar4 * 0x48);
  *(undefined4 *)(puVar3 + 1) = local_70;
  *puVar3 = local_78;
  puVar3[2] = local_68;
  puVar3[3] = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_60 + 1) = (int)local_60[1] + 1;
    UNLOCK();
  }
  puVar3[4] = 0;
  *(int *)(puVar3 + 5) = (int)uStack_50;
  if ((int)uStack_50 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x2c) = 0;
  }
  else {
    FUN_140823b50(puVar3 + 4,uStack_50 & 0xffffffff,0);
    FUN_140823a3c(puVar3[4],lVar9,uVar5 & 0xffffffff);
  }
  uVar5 = uStack_40;
  lVar9 = local_48;
  puVar3[6] = 0;
  *(int *)(puVar3 + 7) = (int)uStack_40;
  if ((int)uStack_40 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x3c) = 0;
  }
  else {
    FUN_14082454c(puVar3 + 6,uStack_40 & 0xffffffff,0);
    FUN_1408243d3(puVar3[6],lVar9,uVar5 & 0xffffffff);
  }
  *(undefined4 *)(puVar3 + 8) = local_38;
  FUN_1403d9da7(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  FUN_1403d9ddf(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_60 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)local_60 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_60 + 0x10))(local_60);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140823a3c FUN_140823a3c body=45 status=ok
// SIG undefined FUN_140823a3c(void)

void FUN_140823a3c(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
      lVar1 = *(longlong *)(param_2 + 8 + lVar2);
      *(longlong *)(param_1 + 8 + lVar2) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      lVar2 = lVar2 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140823a6a FUN_140823a6a body=228 status=ok
// SIG undefined FUN_140823a6a(void)

longlong FUN_140823a6a(void)

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
  if (DAT_14cb6cbe8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140eca530;
    local_38 = &LAB_1487887a7;
    local_40 = &LAB_145ae7aea;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x50;
    FUN_14081cfa3(L"/Script/GbxGame",L"MissionSystemSettings",&DAT_14cb6cbe8,&DAT_1487887a6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6cbe8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140823b50 FUN_140823b50 body=228 status=ok
// SIG undefined FUN_140823b50(void)

void FUN_140823b50(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = (longlong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(longlong)param_2 & 0xfffffffffffffff]];
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
    iVar1 = (int)(uVar2 >> 4);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x10,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140823c34 FUN_140823c34 body=269 status=ok
// SIG undefined FUN_140823c34(void)

void FUN_140823c34(longlong param_1,int param_2)

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



// FUNCTION 140823d42 FUN_140823d42 body=373 status=ok
// SIG undefined FUN_140823d42(void)

void FUN_140823d42(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x48;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140823dcb;
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
LAB_140823dcb:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x48)) {
    uVar7 = uVar5 / 0x48 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x48,8);
  return;
}



// FUNCTION 140823eb8 FUN_140823eb8 body=57 status=ok
// SIG undefined FUN_140823eb8(void)

void FUN_140823eb8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c668 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c668 = FUN_140002ddd(FUN_146531d75,uVar1,L"MissionObjectiveAspect_Event");
  }
  return;
}



// FUNCTION 140823ef2 FUN_140823ef2 body=758 status=ok
// SIG undefined FUN_140823ef2(void)

longlong * FUN_140823ef2(undefined8 param_1,longlong param_2,int *param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  int *piVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  undefined1 auStack_98 [40];
  undefined2 *local_70;
  int local_68;
  undefined2 *local_60;
  int local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  piVar6 = *(int **)(param_2 + 8);
  if (piVar6 == (int *)0x0) {
    piVar6 = &DAT_14c9485f0;
  }
  if (((*piVar6 == 0) || (iVar2 = piVar6[1], iVar2 == 0)) || (*piVar6 == DAT_14c948000)) {
LAB_140824192:
    local_68 = DAT_14c948620;
    local_70 = DAT_14c948618;
  }
  else {
    if ((iVar2 < 2) && (piVar6[9] < 1)) {
      plVar7 = (longlong *)(piVar6 + 2);
    }
    else {
      plVar7 = *(longlong **)(piVar6 + 6);
    }
    if (iVar2 < 1) goto LAB_140824192;
    local_68 = (int)plVar7[1];
    local_70 = (undefined2 *)*plVar7;
  }
  uVar3 = *(undefined4 *)(param_2 + 0x2c8);
  FUN_1408226d0(&local_70,&local_60,1);
  puVar8 = &DAT_149dfb77a;
  if (local_58 != 0) {
    puVar8 = local_60;
  }
  FUN_140002266(&local_50,L"__Bind_%s_AutoBind_%d",puVar8,uVar3);
  plVar7 = (longlong *)&DAT_149dfb77a;
  if ((int)local_48 != 0) {
    plVar7 = local_50;
  }
  FUN_1446f470e(&local_40,plVar7,1);
  if (local_50 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  piVar6 = &DAT_14c9485f0;
  if (*(int **)(param_2 + 8) != (int *)0x0) {
    piVar6 = *(int **)(param_2 + 8);
  }
  if (((*piVar6 != 0) && (iVar2 = piVar6[1], iVar2 != 0)) && (*piVar6 != DAT_14c948000)) {
    if ((iVar2 < 2) && (piVar6[9] < 1)) {
      plVar7 = (longlong *)(piVar6 + 2);
    }
    else {
      plVar7 = *(longlong **)(piVar6 + 6);
    }
    if (0 < iVar2) {
      local_58 = (int)plVar7[1];
      local_60 = (undefined2 *)*plVar7;
      goto LAB_140824051;
    }
  }
  local_58 = DAT_14c948620;
  local_60 = DAT_14c948618;
LAB_140824051:
  local_50 = local_40;
  FUN_1401533ba(&local_70,&local_50,1);
  local_48 = (longlong *)FUN_14001cc68(0x80,0x10);
  local_48[1] = (longlong)&DAT_100000001;
  *local_48 = (longlong)&PTR_FUN_14b41ba60;
  local_50 = local_48 + 2;
  local_48[3] = 0;
  local_48[4] = 0;
  local_48[2] = (longlong)&PTR_FUN_14b417bb0;
  local_48[5] = (longlong)local_70;
  *(int *)(local_48 + 6) = local_68;
  *(int *)((longlong)local_48 + 0x3c) = local_58;
  *(undefined2 **)((longlong)local_48 + 0x34) = local_60;
  *(undefined1 *)(local_48 + 8) = 0;
  *(undefined1 *)(local_48 + 0xf) = 0;
  local_48[0xd] = 0;
  local_48[0xe] = 0;
  local_48[0xb] = 0;
  local_48[0xc] = 0;
  local_48[9] = 0;
  local_48[10] = 0;
  FUN_1408241ea(&local_50);
  iVar2 = *(int *)(param_2 + 0x2c8);
  *(uint *)(param_2 + 0x2c8) = iVar2 + 1U;
  if (*(uint *)(param_2 + 0x2cc) < iVar2 + 1U) {
    FUN_14082428c((longlong *)(param_2 + 0x2c0),iVar2);
  }
  lVar4 = *(longlong *)(param_2 + 0x2c0);
  *(longlong **)(lVar4 + (longlong)iVar2 * 0x10) = local_50;
  *(longlong **)(lVar4 + 8 + (longlong)iVar2 * 0x10) = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
  }
  if (*param_3 != 0) {
    FUN_14082216c(local_50,param_3);
  }
  plVar5 = local_48;
  plVar7 = local_50;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar6 = (int *)((longlong)plVar5 + 0xc);
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (*piVar6 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return plVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408241ea FUN_1408241ea body=162 status=ok
// SIG undefined FUN_1408241ea(void)

void FUN_1408241ea(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_140824229;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_140824229;
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
LAB_140824229:
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
                    /* WARNING: Could not recover jumptable at 0x000140824288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14082428c FUN_14082428c body=269 status=ok
// SIG undefined FUN_14082428c(void)

void FUN_14082428c(longlong param_1,int param_2)

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



// FUNCTION 14082439a FUN_14082439a body=57 status=ok
// SIG undefined FUN_14082439a(void)

void FUN_14082439a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c6b0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c6b0 = FUN_140002ddd(FUN_146531eb5,uVar1,L"MissionObjectiveAspect_UpdateCountModifier")
    ;
  }
  return;
}



// FUNCTION 1408243d3 FUN_1408243d3 body=107 status=ok
// SIG undefined FUN_1408243d3(void)

void FUN_1408243d3(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  
  if (param_3 != 0) {
    piVar3 = (int *)(param_2 + 8);
    do {
      *param_1 = 0;
      iVar1 = *piVar3;
      uVar2 = *(undefined8 *)(piVar3 + -2);
      *(int *)(param_1 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_14055313c(param_1,iVar1,0);
        FUN_140553097(*param_1,uVar2);
      }
      param_1 = param_1 + 2;
      piVar3 = piVar3 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14082443e FUN_14082443e body=269 status=ok
// SIG undefined FUN_14082443e(void)

void FUN_14082443e(longlong param_1,int param_2)

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



// FUNCTION 14082454c FUN_14082454c body=228 status=ok
// SIG undefined FUN_14082454c(void)

void FUN_14082454c(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = (longlong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(longlong)param_2 & 0xfffffffffffffff]];
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
    iVar1 = (int)(uVar2 >> 4);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x10,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140824630 FUN_140824630 body=706 status=ok
// SIG undefined FUN_140824630(void)

void FUN_140824630(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong *local_70;
  uint local_68;
  int local_64;
  undefined1 local_60 [4];
  undefined5 local_5c;
  undefined3 uStack_57;
  undefined5 uStack_54;
  undefined8 local_48;
  longlong *plStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = 0;
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  local_5c = 0;
  uStack_57 = 0;
  uStack_54 = 0;
  local_60[0] = 1;
  plVar5 = (longlong *)FUN_14001cc68(0x38,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14b41dcd0;
  plVar1 = plVar5 + 2;
  plVar5[6] = 0;
  plVar5[2] = (longlong)&PTR_FUN_14b05e8d0;
  plVar5[3] = *(longlong *)(param_1 + 0xa0);
  uVar6 = FUN_14477b664(*(undefined8 *)(param_1 + 0xa8));
  lVar7 = FUN_14477b664(uVar6);
  plVar5[4] = lVar7;
  plVar5[5] = *(longlong *)(param_1 + 0xb0);
  *(bool *)(plVar5 + 6) = *(char *)(param_1 + 0x78) == '\x02';
  if (plVar5 == (longlong *)0x0) {
    local_70 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    local_70 = plVar5;
  }
  local_78 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    lVar7 = (**(code **)(*plVar1 + 8))(plVar1);
    local_64 = 0;
    if (lVar7 != 0) {
      local_68 = *(uint *)(lVar7 + 0xc);
      if ((int)local_68 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((local_68 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_68 >> 0x10) * 8);
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
      goto LAB_140824762;
    }
  }
  local_68 = 0;
  iVar4 = 0;
LAB_140824762:
  local_64 = iVar4;
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
  FUN_14029d0b6(&local_48,&local_78);
  plVar1 = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_70 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  FUN_1408248f6(param_2 + 0x2c0,local_60,1);
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
  plVar1 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar5 = plStack_40 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1408248f4 FUN_1408248f4 body=1 status=ok
// SIG undefined FUN_1408248f4(void)

void FUN_1408248f4(void)

{
  return;
}



// FUNCTION 1408248f6 FUN_1408248f6 body=404 status=ok
// SIG undefined FUN_1408248f6(void)

void FUN_1408248f6(undefined8 param_1,undefined4 *param_2,undefined1 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar6 = (longlong *)FUN_14001cc68(0x38,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14b41ba40;
  plVar6[3] = 1;
  plVar6[2] = (longlong)&PTR_FUN_14b35c3a0;
  plVar6[4] = 0;
  plVar6[5] = 0;
  plVar6[6] = 0;
  uVar7 = FUN_140824a8c();
  FUN_140005f6c(plVar6 + 4,uVar7,0,0);
  FUN_140824ac6(plVar6 + 4,&local_50);
  *(undefined1 *)(local_50 + 3) = *(undefined1 *)(param_2 + 4);
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *(undefined4 *)(local_50 + 1) = *param_2;
  *(undefined4 *)((longlong)local_50 + 0xc) = uVar3;
  *(undefined4 *)(local_50 + 2) = uVar4;
  *(undefined4 *)((longlong)local_50 + 0x14) = uVar5;
  FUN_1401f3db8(local_50 + 4,param_2 + 6);
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
  *(undefined1 *)(plVar6 + 3) = param_3;
  local_50 = plVar6 + 2;
  local_48 = plVar6;
  if (plVar6 == (longlong *)0x0) {
    FUN_1408229d0(param_1,&local_50);
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    FUN_1408229d0(param_1);
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
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140824a8c FUN_140824a8c body=57 status=ok
// SIG undefined FUN_140824a8c(void)

void FUN_140824a8c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6e010 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6e010 = FUN_140002ddd(FUN_146539840,uVar1,L"ObjectiveValueEvaluator_CustomEvaluator");
  }
  return;
}



// FUNCTION 140824ac6 FUN_140824ac6 body=83 status=ok
// SIG undefined FUN_140824ac6(void)

longlong * FUN_140824ac6(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_140824a8c();
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



// FUNCTION 140824b1a FUN_140824b1a body=74 status=ok
// SIG undefined FUN_140824b1a(void)

void FUN_140824b1a(longlong param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x410);
  if (-1 < iVar1) {
    *(undefined4 *)(param_2 + 8) = 0;
    if (*(int *)(param_2 + 0xc) != iVar1) {
      FUN_140824bde(param_2);
    }
    FUN_140824b66(param_2,param_1 + 0x408);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar1);
}



// FUNCTION 140824b66 FUN_140824b66 body=119 status=ok
// SIG undefined FUN_140824b66(void)

void FUN_140824b66(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_14023b962(param_1,iVar2);
    }
    lVar3 = *param_1;
    lVar4 = *param_2;
    lVar5 = 0;
    do {
      *(undefined8 *)((longlong)iVar2 * 8 + lVar3 + lVar5 * 8) = *(undefined8 *)(lVar4 + lVar5 * 8);
      lVar5 = lVar5 + 1;
    } while (uVar1 != (uint)lVar5);
    return;
  }
  return;
}



// FUNCTION 140824bde FUN_140824bde body=315 status=ok
// SIG undefined FUN_140824bde(void)

void FUN_140824bde(longlong param_1,int param_2)

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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140824c48;
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
LAB_140824c48:
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



// FUNCTION 140824d1a FUN_140824d1a body=624 status=ok
// SIG undefined FUN_140824d1a(void)

void FUN_140824d1a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int iVar7;
  uchar auVar8 [8];
  longlong lVar9;
  uchar auVar10 [8];
  uchar auVar11 [8];
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_a8 [40];
  uchar local_80 [8];
  GUID local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1401c3c2c();
  lVar9 = *(longlong *)(param_1 + 0xb0);
  if ((lVar9 != 0) || (lVar9 = FUN_1448abda6(param_1), lVar9 != 0)) {
    uVar5 = DAT_14cb72610;
    if (DAT_14c9a7d10 == (undefined8 *)0x0) {
      DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      *DAT_14c9a7d10 = 0;
      DAT_14c9a7d10[1] = 0;
      DAT_14c9a7d10[2] = 0;
      DAT_14c9a7d10[3] = 0;
    }
    FUN_14005915a(DAT_14c9a7d10,&local_78,uVar5,lVar9);
    auVar8 = local_78.Data4;
    uVar6 = local_78._0_8_;
    if ((local_78._0_8_ == 0) || (local_78.Data4 == (uchar  [8])0x0)) {
      auVar8[0] = '\0';
      auVar8[1] = '\0';
      auVar8[2] = '\0';
      auVar8[3] = '\0';
      auVar8[4] = '\0';
      auVar8[5] = '\0';
      auVar8[6] = '\0';
      auVar8[7] = '\0';
    }
    else {
      LOCK();
      *(int *)((longlong)local_78.Data4 + 8) = *(int *)((longlong)local_78.Data4 + 8) + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)local_78.Data4 + 0xc) = *(int *)((longlong)local_78.Data4 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar1 = (longlong *)((longlong)local_78.Data4 + 8);
      *(int *)plVar1 = *(int *)plVar1 + -1;
      UNLOCK();
      if (*(int *)plVar1 == 0) {
        (*(code *)**(undefined8 **)local_78.Data4)(local_78.Data4);
        LOCK();
        piVar2 = (int *)((longlong)auVar8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*(longlong *)auVar8 + 0x10))(auVar8);
        }
      }
    }
    auVar10 = local_78.Data4;
    if (local_78.Data4 != (uchar  [8])0x0) {
      LOCK();
      plVar1 = (longlong *)((longlong)local_78.Data4 + 8);
      *(int *)plVar1 = *(int *)plVar1 + -1;
      UNLOCK();
      if (*(int *)plVar1 == 0) {
        (*(code *)**(undefined8 **)local_78.Data4)(local_78.Data4);
        LOCK();
        piVar2 = (int *)((longlong)auVar10 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*(longlong *)auVar10 + 0x10))(auVar10);
        }
      }
    }
    if (auVar8 != (uchar  [8])0x0) {
      iVar7 = *(int *)((longlong)auVar8 + 8);
      auVar10[0] = '\0';
      auVar10[1] = '\0';
      auVar10[2] = '\0';
      auVar10[3] = '\0';
      auVar10[4] = '\0';
      auVar10[5] = '\0';
      auVar10[6] = '\0';
      auVar10[7] = '\0';
      do {
        auVar11 = auVar10;
        if (iVar7 == 0) break;
        LOCK();
        iVar3 = *(int *)((longlong)auVar8 + 8);
        bVar13 = iVar7 == iVar3;
        if (bVar13) {
          *(int *)((longlong)auVar8 + 8) = iVar7 + 1;
          iVar3 = iVar7;
        }
        iVar7 = iVar3;
        UNLOCK();
        auVar11 = auVar8;
      } while (!bVar13);
      LOCK();
      piVar2 = (int *)((longlong)auVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*(longlong *)auVar8 + 0x10))(auVar8);
      }
      if (auVar11 != (uchar  [8])0x0) {
        local_80 = auVar11;
        if (((uVar6 != 0) && (*(longlong *)(uVar6 + 0x48) != 0)) &&
           ((longlong)*(int *)(param_1 + 0x628) != 0)) {
          lVar9 = *(longlong *)(param_1 + 0x620);
          lVar12 = (longlong)*(int *)(param_1 + 0x628) * 0x30;
          do {
            uVar4 = *(undefined8 *)(uVar6 + 0x48);
            if (((*(int *)(param_1 + 0x634) == 0 && *(int *)(param_1 + 0x630) == 0) &&
                *(int *)(param_1 + 0x638) == 0) && *(int *)(param_1 + 0x63c) == 0) {
              local_78.Data1 = 0;
              local_78.Data2 = 0;
              local_78.Data3 = 0;
              local_78.Data4[0] = '\0';
              local_78.Data4[1] = '\0';
              local_78.Data4[2] = '\0';
              local_78.Data4[3] = '\0';
              local_78.Data4[4] = '\0';
              local_78.Data4[5] = '\0';
              local_78.Data4[6] = '\0';
              local_78.Data4[7] = '\0';
              CoCreateGuid(&local_78);
              *(longlong *)(param_1 + 0x630) = local_78._0_8_;
              *(uchar (*) [8])(param_1 + 0x638) = local_78.Data4;
            }
            local_78._0_8_ = *(longlong *)(param_1 + 0x630);
            local_78.Data4 = *(uchar (*) [8])(param_1 + 0x638);
            FUN_140824f8c(uVar4,&local_78,lVar9,param_1 + 0x240);
            lVar9 = lVar9 + 0x30;
            lVar12 = lVar12 + -0x30;
          } while (lVar12 != 0);
        }
        auVar8 = local_80;
        LOCK();
        plVar1 = (longlong *)((longlong)local_80 + 8);
        *(int *)plVar1 = *(int *)plVar1 + -1;
        UNLOCK();
        if (*(int *)plVar1 == 0) {
          (*(code *)**(undefined8 **)local_80)(local_80);
          LOCK();
          piVar2 = (int *)((longlong)auVar8 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*(longlong *)auVar8 + 0x10))(auVar8);
          }
        }
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140824f8c FUN_140824f8c body=171 status=ok
// SIG undefined FUN_140824f8c(void)

void FUN_140824f8c(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x240) != 0) {
    lVar1 = FUN_1418712b8(param_1 + 0x40);
    FUN_14186f77a(lVar1);
    if (lVar1 != 0) {
      local_48 = *param_2;
      uStack_44 = param_2[1];
      uStack_40 = param_2[2];
      uStack_3c = param_2[3];
      FUN_1405b6fa2(lVar1,&local_48,param_3,param_4);
      FUN_1418713fe(param_1 + 0xc0,lVar1);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14082504e FUN_14082504e body=1252 status=ok
// SIG undefined FUN_14082504e(void)

void FUN_14082504e(longlong *param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined2 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined8 *local_70;
  undefined1 *local_68;
  code *local_60;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (((((char)param_1[0x23] == '\x01') && (*(int *)((longlong)param_1 + 0x2c) != 0)) &&
      (uVar1 = *(uint *)(param_1 + 5), -1 < (int)uVar1)) &&
     ((((int)uVar1 < DAT_14c9647dc &&
       (plVar7 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar7 != (longlong *)0x0)) &&
      (((int)plVar7[2] == *(int *)((longlong)param_1 + 0x2c) &&
       (((*(uint *)(plVar7 + 1) & 0x10200000) == 0 && (lVar3 = *plVar7, lVar3 != 0)))))))) {
    lVar5 = FUN_1408265b4();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       ((param_1 != (longlong *)0x0 &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
         == lVar5 + 0x30)))) {
      uVar1 = *(uint *)((longlong)param_1 + 0xc);
      local_50 = (code *)(ulonglong)uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      iVar6 = *(int *)(lVar5 + 0x10);
      if (*(int *)(lVar5 + 0x10) == 0) {
        LOCK();
        iVar6 = DAT_14c964868 + 1;
        UNLOCK();
        iVar8 = DAT_14c964868 + 1;
        bVar10 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar6;
        if (bVar10) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar8);
        }
        LOCK();
        iVar6 = *(int *)(lVar5 + 0x10);
        bVar10 = iVar6 == 0;
        if (bVar10) {
          *(int *)(lVar5 + 0x10) = iVar8;
          iVar6 = 0;
        }
        UNLOCK();
        uVar1 = (uint)local_50;
        if (bVar10) {
          iVar6 = iVar8;
        }
      }
      local_50._0_4_ = uVar1;
      local_50 = (code *)CONCAT44(iVar6,(uint)local_50);
      if (0 < *(int *)(lVar3 + 0xb0)) {
        lVar5 = 0;
        bVar10 = false;
        do {
          lVar9 = lVar5 * 8;
          while( true ) {
            cVar2 = FUN_140825534(*(longlong *)(lVar3 + 0xa8) + lVar9,&local_50);
            iVar6 = *(int *)(lVar3 + 0xb0);
            if (cVar2 != '\0') break;
            lVar5 = lVar5 + 1;
            lVar9 = lVar9 + 8;
            if (iVar6 <= lVar5) {
              if (!bVar10) goto LAB_140825083;
              goto LAB_1408253ab;
            }
          }
          do {
            if (iVar6 - 1U != (uint)lVar5) {
              iVar8 = iVar6 + ~(uint)lVar5;
              if (0 < iVar8) {
                iVar8 = 1;
              }
              memmove((void *)(*(longlong *)(lVar3 + 0xa8) + lVar5 * 8),
                      (void *)(*(longlong *)(lVar3 + 0xa8) + (longlong)(iVar6 - iVar8) * 8),
                      (longlong)iVar8 << 3);
              iVar6 = *(int *)(lVar3 + 0xb0);
            }
            *(int *)(lVar3 + 0xb0) = iVar6 + -1;
            if (iVar6 + -1 <= lVar5) goto LAB_1408253ab;
            cVar2 = FUN_140825534(*(longlong *)(lVar3 + 0xa8) + lVar9,&local_50);
            iVar6 = *(int *)(lVar3 + 0xb0);
          } while (cVar2 != '\0');
          lVar5 = lVar5 + 1;
          bVar10 = true;
        } while (lVar5 < iVar6);
LAB_1408253ab:
        FUN_1408268c0(lVar3 + 0xa8);
      }
    }
  }
LAB_140825083:
  *(undefined2 *)(param_1 + 0x23) = 0;
  if ((char)param_1[0x25] == '\x01') {
    *(undefined1 *)(param_1 + 0x25) = 0;
  }
  if (param_1[0x31] != 0) {
    uVar4 = (**(code **)(*param_1 + 0x180))(param_1);
    lVar3 = param_1[0x31];
    lVar5 = FUN_140149a73(uVar4,0);
    if (lVar5 != 0) {
      FUN_140825b72(param_1 + 0x2a,lVar3,lVar5,0);
    }
    param_1[0x31] = 0;
  }
  *(undefined1 *)(param_1 + 0x2a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  if (*(int *)((longlong)param_1 + 0x184) != 0) {
    FUN_1446dda88(param_1 + 0x2f,0);
  }
  *(undefined1 *)((longlong)param_1 + 0x151) = 0;
  if (param_1[0x28] != 0) {
    FUN_14480f766(&DAT_14cbd0a88);
    param_1[0x28] = 0;
  }
  if (param_1[0x29] != 0) {
    lVar3 = FUN_14041acbe(param_1);
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
      if ((((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) &&
          (lVar3 = FUN_140e06fb1(lVar3), lVar3 != 0)) && (param_1[0x29] != 0)) {
        FUN_14480f766(lVar3 + 0x30);
      }
    }
    param_1[0x29] = 0;
  }
  if (((param_1[0x32] != 0) && (lVar3 = FUN_1410ef012(param_1), lVar3 != 0)) &&
     (*(longlong *)(lVar3 + 0x3f0) != 0)) {
    FUN_1404eaf96(*(longlong *)(lVar3 + 0x3f0),param_1 + 0x32);
  }
  param_1[0x32] = 0;
  *(undefined1 *)(param_1 + 0x33) = 0;
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_14082559c(param_1);
  return;
}



// FUNCTION 140825534 FUN_140825534 body=104 status=ok
// SIG undefined FUN_140825534(void)

ulonglong FUN_140825534(uint *param_1,uint *param_2)

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



// FUNCTION 14082559c FUN_14082559c body=309 status=ok
// SIG undefined FUN_14082559c(void)

void FUN_14082559c(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)((longlong)param_1 + 0xf9) == '\x01') {
    lVar2 = FUN_14073f764(param_1);
    if (lVar2 != 0) {
      FUN_140f3e8de(lVar2,param_1[0x19],0,0);
    }
  }
  *(undefined1 *)((longlong)param_1 + 0xf9) = 0;
  FUN_1408256d2(param_1 + 0x1d);
  FUN_140c1f326(param_1,0);
  FUN_140826ba4(param_1,0);
  if ((char)param_1[0x1f] == '\x01') {
    iVar1 = FUN_140ddd928(param_1);
    if (iVar1 - 1U < 2) {
      lVar2 = FUN_14073f764(param_1);
      if (lVar2 != 0) {
        FUN_14073fe76(local_38,param_1 + 0x1a);
        FUN_140825736(lVar2,local_38);
        if (local_38[0] != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  (**(code **)(*param_1 + 0x3a8))(param_1);
  if (*(char *)((longlong)param_1 + 0xe4) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xe4) = 0;
  }
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408256d2 FUN_1408256d2 body=89 status=ok
// SIG undefined FUN_1408256d2(void)

void FUN_1408256d2(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*param_1 != 0) {
    FUN_140825816();
    *param_1 = 0;
    plVar3 = (longlong *)param_1[1];
    if (plVar3 != (longlong *)0x0) {
      param_1[1] = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000140825727. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 14082572c FUN_14082572c body=9 status=ok
// SIG undefined FUN_14082572c(void)

void FUN_14082572c(longlong param_1)

{
  FUN_14082577c(param_1 + 0x10);
  return;
}



// FUNCTION 140825736 FUN_140825736 body=70 status=ok
// SIG undefined FUN_140825736(void)

void FUN_140825736(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_14073f998(param_2);
  iVar2 = FUN_14073fa1e(param_1 + 0x2c0,uVar1,param_2);
  if (iVar2 != -1) {
    FUN_14082669a(param_1 + 0x2c0,param_2);
    return;
  }
  return;
}



// FUNCTION 14082577c FUN_14082577c body=154 status=ok
// SIG undefined FUN_14082577c(void)

void FUN_14082577c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  
  FUN_140825816();
  FUN_1408258c2(param_1 + 0x50);
  plVar1 = (longlong *)(param_1 + 0x40);
  if (*(int *)(param_1 + 0x48) != 0) {
    puVar3 = (undefined8 *)*plVar1;
    if (puVar3 == (undefined8 *)0x0) goto LAB_1408257a5;
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_1408257a5:
  FUN_1447cd778(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  plVar1 = *(longlong **)(param_1 + 8);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014082580b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 140825816 FUN_140825816 body=118 status=ok
// SIG undefined FUN_140825816(void)

void FUN_140825816(longlong param_1)

{
  undefined8 *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_140983a12();
    FUN_140825a98(param_1);
    FUN_140825930(param_1 + 0x50,0);
    FUN_14082588c(param_1 + 0x30);
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfe;
    if (*(int *)(param_1 + 0x48) != 0) {
      puVar1 = *(undefined8 **)(param_1 + 0x40);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,0);
        FUN_1446efa72((longlong *)(param_1 + 0x40),0,0,0x10);
        *(undefined4 *)(param_1 + 0x48) = 0;
      }
    }
    *(undefined8 *)(param_1 + 0x24) = 0;
  }
  return;
}



// FUNCTION 14082588c FUN_14082588c body=53 status=ok
// SIG undefined FUN_14082588c(void)

void FUN_14082588c(undefined8 *param_1)

{
  FUN_1447cd778(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    return;
  }
  FUN_140826346(param_1,0);
  return;
}



// FUNCTION 1408258c2 FUN_1408258c2 body=61 status=ok
// SIG undefined FUN_1408258c2(void)

void FUN_1408258c2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x180);
  if (*(longlong *)(param_1 + 0x180) == 0) {
    lVar1 = param_1;
  }
  FUN_1408258ff(lVar1,*(undefined4 *)(param_1 + 0x188));
  if (*(longlong *)(param_1 + 0x180) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1408258ff FUN_1408258ff body=49 status=ok
// SIG undefined FUN_1408258ff(void)

void FUN_1408258ff(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x38);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140825930 FUN_140825930 body=89 status=ok
// SIG undefined FUN_140825930(void)

void FUN_140825930(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  lVar1 = *(longlong *)(param_1 + 0x180);
  if (*(longlong *)(param_1 + 0x180) == 0) {
    lVar1 = param_1;
  }
  FUN_1408258ff(lVar1,*(undefined4 *)(param_1 + 0x188));
  *(undefined4 *)(param_1 + 0x188) = 0;
  if (*(int *)(param_1 + 0x18c) != param_2) {
    FUN_14082598a(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 14082598a FUN_14082598a body=121 status=ok
// SIG undefined FUN_14082598a(void)

void FUN_14082598a(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if ((param_2 != 0) && (iVar3 = 4, 4 < param_2)) {
    uVar1 = FUN_144a3809e((longlong)(int)param_2 * 0x60,0);
    iVar2 = (int)(uVar1 / 0x60);
    iVar3 = 0x7fffffff;
    if ((int)param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (iVar3 == *(int *)(param_1 + 0x18c)) {
    return;
  }
  *(int *)(param_1 + 0x18c) = iVar3;
  FUN_140825a04(param_1,*(undefined4 *)(param_1 + 0x188));
  return;
}



// FUNCTION 140825a04 FUN_140825a04 body=148 status=ok
// SIG undefined FUN_140825a04(void)

void FUN_140825a04(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x180);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x60);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x180,0,param_3,0x60);
    memmove(*(void **)((longlong)param_1 + 0x180),param_1,(longlong)param_2 * 0x60);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x180,param_2,param_3,0x60);
  return;
}



// FUNCTION 140825a98 FUN_140825a98 body=218 status=ok
// SIG undefined FUN_140825a98(void)

void FUN_140825a98(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (((*(int *)(param_1 + 0x28) != 0) && (uVar1 = *(uint *)(param_1 + 0x24), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar5 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar5 != (longlong *)0x0) && ((int)plVar5[2] == *(int *)(param_1 + 0x28))) &&
       (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 && ((longlong *)*plVar5 != (longlong *)0x0)))) {
      lVar4 = (**(code **)(*(longlong *)*plVar5 + 0x2b0))();
      if (lVar4 != 0) {
        lVar6 = param_1 + 0x50;
        if (*(longlong *)(param_1 + 0x1d0) != 0) {
          lVar6 = *(longlong *)(param_1 + 0x1d0);
        }
        iVar2 = *(int *)(param_1 + 0x1d8);
        if ((longlong)iVar2 != 0) {
          lVar7 = 0;
          do {
            lVar3 = *(longlong *)(lVar6 + 0x58 + lVar7);
            if (lVar3 != 0) {
              FUN_140825b72(lVar6 + 0x10 + lVar7,lVar3,lVar4,0);
              *(undefined8 *)(lVar6 + 0x58 + lVar7) = 0;
            }
            lVar7 = lVar7 + 0x60;
          } while ((longlong)iVar2 * 0x60 != lVar7);
        }
      }
    }
  }
  return;
}



// FUNCTION 140825b72 FUN_140825b72 body=883 status=ok
// SIG undefined FUN_140825b72(void)

void FUN_140825b72(char *param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  char cVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  int local_5c;
  longlong local_58;
  undefined1 local_50 [24];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = param_2;
  if ((((param_3 == 0) || (*(char *)(param_3 + 0x6a) != '\0')) || (cVar6 = *param_1, cVar6 == '\0'))
     || (DAT_14c872bd8 != '\0')) goto switchD_140825c24_caseD_a;
  local_5c = -1;
  iVar2 = local_5c;
  if (((param_4 != (longlong *)0x0) && (iVar2 = (int)param_4[1], (int)param_4[1] < 0)) &&
     (iVar2 = local_5c, *param_4 != 0)) {
    iVar2 = FUN_140985360(param_3,*param_4);
    cVar6 = *param_1;
  }
  local_5c = iVar2;
  if (cVar6 == '\n') {
    plVar3 = (longlong *)FUN_14039ffc6(param_3);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3,param_1,param_2);
    }
    goto switchD_140825c24_caseD_a;
  }
  switch(cVar6) {
  case '\x01':
    plVar3 = (longlong *)FUN_1401499e8(param_3);
    if ((plVar3 != (longlong *)0x0) && (param_2 != 0)) {
      (**(code **)(*plVar3 + 0x40))(plVar3,param_1,param_2);
    }
    break;
  case '\x02':
  case '\x03':
  case '\x04':
  case '\x05':
    plVar3 = (longlong *)FUN_1403a0020(param_3);
    if (plVar3 == (longlong *)0x0) break;
    if ((((*(int *)(param_1 + 0x10) == 0) || (iVar2 = *(int *)(param_1 + 0x14), iVar2 == 0)) ||
        (*(int *)(param_1 + 0x10) == DAT_14c948000)) || ((iVar2 == 1 || (iVar2 < 2)))) {
      local_60 = DAT_14c948620;
      local_68 = DAT_14c948618;
    }
    else {
      local_60 = *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x14);
      local_68 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0xc);
    }
    lVar7 = *plVar3;
    param_1 = (char *)&local_68;
    goto LAB_140825c83;
  case '\x06':
    if (local_5c < 0) {
      if (*(char *)(param_3 + 0x68) == '\x01') {
        local_5c = 0;
      }
      else {
        if (*(int *)(param_3 + 0x54) == 0) {
LAB_140825da2:
          uVar4 = 0;
        }
        else {
          uVar1 = *(uint *)(param_3 + 0x50);
          uVar4 = 0;
          if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
            puVar5 = (undefined8 *)
                     ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
            if ((puVar5 == (undefined8 *)0x0) ||
               ((*(int *)(puVar5 + 2) != *(int *)(param_3 + 0x54) ||
                ((*(uint *)(puVar5 + 1) & 0x10200000) != 0)))) goto LAB_140825da2;
            uVar4 = *puVar5;
          }
        }
        local_5c = FUN_1409844f4(uVar4);
        if (local_5c < 0) break;
      }
    }
    plVar3 = (longlong *)FUN_140d17acc(param_3,&local_5c);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3,param_1,&local_58);
    }
    break;
  case '\a':
    if (local_5c < 0) {
      plVar3 = *(longlong **)(param_3 + 0x160);
    }
    else {
      plVar3 = (longlong *)FUN_143d2992a(param_3,&local_5c);
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x30))(plVar3,param_1,param_2);
    }
    break;
  case '\b':
    if (local_5c < 0) {
      if (*(char *)(param_3 + 0x68) == '\x01') {
        local_5c = 0;
      }
      else {
        uVar4 = FUN_14479d2ce(param_3 + 0x50);
        local_5c = FUN_1409844f4(uVar4);
        if (local_5c < 0) break;
      }
    }
    plVar3 = (longlong *)FUN_141068ae8(param_3,&local_5c);
    goto LAB_140825de1;
  case '\t':
    plVar3 = (longlong *)FUN_145781ab4(param_3);
    if (plVar3 != (longlong *)0x0) {
      FUN_140bc5fbc(param_1,local_50);
      (**(code **)(*plVar3 + 0x18))(plVar3,local_50,param_2);
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    break;
  case '\r':
    plVar3 = (longlong *)FUN_14883d45c(param_3);
    goto LAB_140825de1;
  case '\x0e':
    plVar3 = (longlong *)FUN_145b08bca(param_3);
LAB_140825de1:
    if (plVar3 != (longlong *)0x0) {
      lVar7 = *plVar3;
LAB_140825c83:
      (**(code **)(lVar7 + 0x18))(plVar3,param_1,param_2);
    }
    break;
  case '\x0f':
    if ((*(longlong *)(param_1 + 4) != 0) &&
       (plVar3 = (longlong *)FUN_14883d3b2(param_3), plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x60))(plVar3,param_1,param_2);
    }
  }
switchD_140825c24_caseD_a:
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140825ee6 FUN_140825ee6 body=491 status=ok
// SIG undefined FUN_140825ee6(void)

void FUN_140825ee6(longlong *param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = *(undefined1 *)(param_2 + 1);
  if (((*(int *)(param_2 + 0x10) == 0) || (iVar1 = *(int *)(param_2 + 0x14), iVar1 == 0)) ||
     (*(int *)(param_2 + 0x10) == DAT_14c948000)) {
    local_18 = DAT_14c948620;
    local_20 = DAT_14c948618;
    local_28 = DAT_14c948620;
    local_30 = DAT_14c948618;
    local_38 = DAT_14c948620;
    local_40 = DAT_14c948618;
  }
  else {
    lVar2 = param_2 + 0x18;
    lVar3 = lVar2;
    if (0 < *(int *)(param_2 + 0x34)) {
      lVar3 = *(longlong *)(param_2 + 0x28);
    }
    if (1 < iVar1) {
      lVar3 = *(longlong *)(param_2 + 0x28);
    }
    if ((iVar1 == 1) || (iVar1 < 5)) {
      local_18 = DAT_14c948620;
      local_20 = DAT_14c948618;
    }
    else {
      local_18 = *(undefined4 *)(lVar3 + 0x38);
      local_20 = *(undefined8 *)(lVar3 + 0x30);
    }
    lVar3 = lVar2;
    if (0 < *(int *)(param_2 + 0x34)) {
      lVar3 = *(longlong *)(param_2 + 0x28);
    }
    if (1 < iVar1) {
      lVar3 = *(longlong *)(param_2 + 0x28);
    }
    if ((iVar1 == 1) || (iVar1 < 4)) {
      local_28 = DAT_14c948620;
      local_30 = DAT_14c948618;
    }
    else {
      local_28 = *(undefined4 *)(lVar3 + 0x2c);
      local_30 = *(undefined8 *)(lVar3 + 0x24);
    }
    if (0 < *(int *)(param_2 + 0x34)) {
      lVar2 = *(longlong *)(param_2 + 0x28);
    }
    if (1 < iVar1) {
      lVar2 = *(longlong *)(param_2 + 0x28);
    }
    if ((iVar1 == 1) || (iVar1 < 3)) {
      local_38 = DAT_14c948620;
      local_40 = DAT_14c948618;
    }
    else {
      local_38 = *(undefined4 *)(lVar2 + 0x20);
      local_40 = *(undefined8 *)(lVar2 + 0x18);
    }
    if ((iVar1 != 1) && (1 < iVar1)) {
      local_48 = *(undefined4 *)(*(longlong *)(param_2 + 0x28) + 0x14);
      local_50 = *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0xc);
      goto LAB_140825ffe;
    }
  }
  local_48 = DAT_14c948620;
  local_50 = DAT_14c948618;
LAB_140825ffe:
  local_68 = &local_20;
  local_58 = param_3;
  (**(code **)(*param_1 + 0x30))(param_1,&local_50,&local_40,&local_30);
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408260d2 FUN_1408260d2 body=84 status=ok
// SIG undefined FUN_1408260d2(void)

undefined8 FUN_1408260d2(void)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 in_stack_00000038;
  
  lVar1 = FUN_1403a0554();
  if (lVar1 != 0) {
    uVar2 = FUN_140826126(lVar1 + 0x48,in_stack_00000038);
    return uVar2;
  }
  return 0;
}



// FUNCTION 140826126 FUN_140826126 body=246 status=ok
// SIG undefined FUN_140826126(void)

byte FUN_140826126(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  byte bVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_78 [40];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar8 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar8 < 1) {
    bVar6 = 0;
  }
  else {
    lVar7 = uVar8 * 0x10 + -8;
    bVar6 = 0;
    do {
      lVar1 = *param_1;
      if ((*(int *)(lVar1 + lVar7) == 0) ||
         (plVar2 = *(longlong **)(lVar1 + -8 + lVar7), plVar2 == (longlong *)0x0)) {
        lVar5 = 0;
      }
      else {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_50);
        lVar5 = local_50;
      }
      if ((((lVar5 == param_2) || (*(int *)(lVar1 + lVar7) == 0)) ||
          (plVar2 = *(longlong **)(lVar1 + -8 + lVar7), plVar2 == (longlong *)0x0)) ||
         (cVar4 = (**(code **)(*plVar2 + 0x30))(), cVar4 == '\0')) {
        FUN_1408262a8(param_1,(int)uVar8 + -1);
        FUN_14082621e(param_1);
      }
      bVar6 = bVar6 | lVar5 == param_2;
      lVar7 = lVar7 + -0x10;
      bVar3 = 1 < uVar8;
      uVar8 = uVar8 - 1;
    } while (bVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar6;
}



// FUNCTION 14082621e FUN_14082621e body=137 status=ok
// SIG undefined FUN_14082621e(void)

void FUN_14082621e(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar2 - uVar1) & 0xffffffffffffc00U) != 0) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && ((uVar1 == 0 || (0x40 < (int)(iVar2 - uVar1))))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 << 4,8);
      uVar3 = uVar3 >> 4;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x10,8);
    }
  }
  return;
}



// FUNCTION 1408262a8 FUN_1408262a8 body=157 status=ok
// SIG undefined FUN_1408262a8(void)

void FUN_1408262a8(longlong *param_1,uint param_2)

{
  longlong *_Dst;
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  lVar1 = *param_1;
  _Dst = (longlong *)(lVar1 + (longlong)(int)param_2 * 0x10);
  if (*(int *)(lVar1 + 8 + (longlong)(int)param_2 * 0x10) != 0) {
    puVar2 = (undefined8 *)*_Dst;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1408262d2;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(_Dst,0,0,0x10);
    *(undefined4 *)(_Dst + 1) = 0;
  }
  if (*_Dst != 0) {
    FUN_1400020a8();
  }
LAB_1408262d2:
  iVar3 = (int)param_1[1];
  iVar5 = ~param_2 + iVar3;
  if (iVar5 != 0) {
    iVar4 = 1;
    if (iVar5 < 1) {
      iVar4 = iVar5;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar3 - iVar4) * 0x10),(longlong)iVar4 << 4);
    iVar3 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar3 + -1;
  return;
}



// FUNCTION 140826346 FUN_140826346 body=231 status=ok
// SIG undefined FUN_140826346(void)

void FUN_140826346(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (longlong)param_2 * 0x50;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar1 < 0x7ff1) {
          uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
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
    if (param_2 <= (int)(uVar1 / 0x50)) {
      uVar2 = uVar1 / 0x50 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x50,8);
  }
  return;
}



// FUNCTION 14082642e FUN_14082642e body=125 status=ok
// SIG undefined FUN_14082642e(void)

void FUN_14082642e(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined1 local_22 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(longlong *)(param_1 + 0xf0) != 0) && (*param_3 != 0)) {
    local_28 = 0xffffffff;
    FUN_1408264ac(param_2,param_1 + 0x28,&local_28,local_22);
    FUN_14082767a(*(undefined8 *)(param_1 + 0xf0),local_28,param_3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408264ac FUN_1408264ac body=262 status=ok
// SIG undefined FUN_1408264ac(void)

undefined8 FUN_1408264ac(char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined4 auStack_120 [62];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (*param_1 == '\x06') {
    cVar3 = FUN_140114204();
    if (cVar3 != '\0') {
      memset(&local_128,0,0xfc);
      if (1 < (longlong)*(int *)(param_1 + 0x14)) {
        iVar1 = *(int *)(param_1 + 0x10);
        lVar2 = *(longlong *)(param_1 + 0x28);
        lVar4 = (longlong)*(int *)(param_1 + 0x14) + -1;
        lVar6 = 0;
        do {
          if (iVar1 == DAT_14c948000 || iVar1 == 0) {
            local_130 = DAT_14c948620;
            local_138 = DAT_14c948618;
          }
          else {
            local_130 = *(undefined4 *)(lVar2 + 0x14 + lVar6);
            local_138 = *(undefined8 *)(lVar2 + 0xc + lVar6);
          }
          *(undefined4 *)((longlong)auStack_120 + lVar6) = local_130;
          *(undefined8 *)((longlong)&local_128 + lVar6) = local_138;
          lVar6 = lVar6 + 0xc;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
      uVar5 = FUN_144a3a17c(&local_128,param_2,param_3,param_4);
      goto LAB_140826573;
    }
  }
  uVar5 = 0;
LAB_140826573:
  if ((local_28 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408265b4 FUN_1408265b4 body=228 status=ok
// SIG undefined FUN_1408265b4(void)

longlong FUN_1408265b4(void)

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
  if (DAT_14cba1580 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1464daa70;
    local_38 = &LAB_148b9e17f;
    local_40 = FUN_14592ea89;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xc0;
    FUN_14081cfa3(L"/Script/OakGame",L"GbxDiscoveryProvider_OakDiscoveryLocations",&DAT_14cba1580,
                  &DAT_148b9e17e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba1580;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14082669a FUN_14082669a body=237 status=ok
// SIG undefined FUN_14082669a(void)

undefined4 FUN_14082669a(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  ushort uVar4;
  ulonglong uVar5;
  ushort uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = FUN_14073f998(param_2);
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)iVar2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      iVar1 = (int)param_2[1];
LAB_1408266f6:
      plVar3 = (longlong *)(*param_1 + (longlong)iVar2 * 0x28);
      if ((int)plVar3[1] == iVar1) {
        if (1 < iVar1) {
          lVar7 = 0;
          do {
            uVar4 = *(ushort *)(*plVar3 + lVar7);
            uVar5 = (ulonglong)uVar4;
            uVar6 = *(ushort *)(*param_2 + lVar7);
            if (uVar4 == uVar6) {
              if (uVar4 == 0) break;
            }
            else {
              if (0x7f < (uVar6 | uVar4)) goto LAB_14082674f;
              uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
              uVar8 = (ulonglong)uVar6;
              uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
              if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[uVar8]) goto LAB_14082674f;
            }
            lVar7 = lVar7 + 2;
          } while( true );
        }
        goto LAB_14082676b;
      }
      if ((int)plVar3[1] + iVar1 == 1) goto LAB_14082676b;
      goto LAB_140826755;
    }
  }
  return 0;
LAB_14082674f:
  if (uVar4 == uVar6) {
LAB_14082676b:
    FUN_140826788(param_1);
    return 1;
  }
LAB_140826755:
  iVar2 = (int)plVar3[4];
  if (iVar2 == -1) {
    return 0;
  }
  goto LAB_1408266f6;
}



// FUNCTION 140826788 FUN_140826788 body=91 status=ok
// SIG undefined FUN_140826788(void)

void FUN_140826788(longlong *param_1,int param_2)

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
  lVar1 = *param_1 + (longlong)param_2 * 0x28;
  lVar5 = (longlong)*(int *)(lVar1 + 0x24);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x28 + 0x20);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0x20);
  FUN_1408267e4(param_1,param_2,1);
  return;
}



// FUNCTION 1408267e4 FUN_1408267e4 body=83 status=ok
// SIG undefined FUN_1408267e4(void)

void FUN_1408267e4(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  
  if (param_3 != 0) {
    plVar2 = (longlong *)(*param_1 + (longlong)param_2 * 0x28);
    iVar1 = param_3;
    do {
      if (*plVar2 != 0) {
        FUN_1400020a8();
      }
      plVar2 = plVar2 + 5;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_140826838(param_1,param_2,param_3);
  return;
}



// FUNCTION 140826838 FUN_140826838 body=136 status=ok
// SIG undefined FUN_140826838(void)

void FUN_140826838(longlong *param_1,int param_2,int param_3)

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



// FUNCTION 1408268c0 FUN_1408268c0 body=135 status=ok
// SIG undefined FUN_1408268c0(void)

void FUN_1408268c0(longlong param_1)

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
      uVar3 = FUN_144a3809e(uVar3 << 3,4);
      uVar3 = uVar3 >> 3;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,8,4);
    }
  }
  return;
}



// FUNCTION 140826948 FUN_140826948 body=295 status=ok
// SIG undefined FUN_140826948(void)

byte FUN_140826948(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  byte bVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  undefined1 local_54 [4];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = *param_2;
  local_58 = *(undefined4 *)(param_2 + 1);
  lVar5 = FUN_1403a01cf(param_1 + 0x68,param_1 + 0x30,&local_60,local_54);
  if ((lVar5 == 0) || (uVar9 = (ulonglong)*(int *)(lVar5 + 0x20), (longlong)uVar9 < 1)) {
    bVar8 = 0;
  }
  else {
    plVar7 = (longlong *)(lVar5 + 0x18);
    lVar5 = uVar9 * 0x10 + -8;
    bVar8 = 0;
    do {
      lVar1 = *plVar7;
      if ((*(int *)(lVar1 + lVar5) == 0) ||
         (plVar2 = *(longlong **)(lVar1 + -8 + lVar5), plVar2 == (longlong *)0x0)) {
        lVar6 = 0;
      }
      else {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_50);
        lVar6 = local_50;
      }
      if ((((lVar6 == param_3) || (*(int *)(lVar1 + lVar5) == 0)) ||
          (plVar2 = *(longlong **)(lVar1 + -8 + lVar5), plVar2 == (longlong *)0x0)) ||
         (cVar4 = (**(code **)(*plVar2 + 0x30))(), cVar4 == '\0')) {
        FUN_140826afa(plVar7,(int)uVar9 + -1);
        FUN_140826a70(plVar7);
      }
      bVar8 = bVar8 | lVar6 == param_3;
      lVar5 = lVar5 + -0x10;
      bVar3 = 1 < uVar9;
      uVar9 = uVar9 - 1;
    } while (bVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar8;
}



// FUNCTION 140826a70 FUN_140826a70 body=137 status=ok
// SIG undefined FUN_140826a70(void)

void FUN_140826a70(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar2 - uVar1) & 0xffffffffffffc00U) != 0) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && ((uVar1 == 0 || (0x40 < (int)(iVar2 - uVar1))))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 << 4,8);
      uVar3 = uVar3 >> 4;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x10,8);
    }
  }
  return;
}



// FUNCTION 140826afa FUN_140826afa body=157 status=ok
// SIG undefined FUN_140826afa(void)

void FUN_140826afa(longlong *param_1,uint param_2)

{
  longlong *_Dst;
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  lVar1 = *param_1;
  _Dst = (longlong *)(lVar1 + (longlong)(int)param_2 * 0x10);
  if (*(int *)(lVar1 + 8 + (longlong)(int)param_2 * 0x10) != 0) {
    puVar2 = (undefined8 *)*_Dst;
    if (puVar2 == (undefined8 *)0x0) goto LAB_140826b24;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(_Dst,0,0,0x10);
    *(undefined4 *)(_Dst + 1) = 0;
  }
  if (*_Dst != 0) {
    FUN_1400020a8();
  }
LAB_140826b24:
  iVar3 = (int)param_1[1];
  iVar5 = ~param_2 + iVar3;
  if (iVar5 != 0) {
    iVar4 = 1;
    if (iVar5 < 1) {
      iVar4 = iVar5;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar3 - iVar4) * 0x10),(longlong)iVar4 << 4);
    iVar3 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar3 + -1;
  return;
}



// FUNCTION 140826ba4 FUN_140826ba4 body=2600 status=ok
// SIG undefined FUN_140826ba4(void)

void FUN_140826ba4(longlong *param_1,char param_2)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  undefined *puVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  bool bVar17;
  undefined1 auStack_a8 [40];
  longlong local_80;
  longlong *local_78;
  int local_70;
  longlong *local_68;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  puVar2 = (uint *)(param_1 + 0x21);
  if (((((*(int *)((longlong)param_1 + 0x10c) != 0) && (uVar3 = *puVar2, -1 < (int)uVar3)) &&
       ((int)uVar3 < DAT_14c9647dc)) &&
      ((plVar10 = (longlong *)
                  ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
       plVar10 != (longlong *)0x0 && ((int)plVar10[2] == *(int *)((longlong)param_1 + 0x10c))))) &&
     ((*(uint *)(plVar10 + 1) & 0x10200000) == 0)) {
    if ((*(uint *)(plVar10 + 1) & 0x10200000) == 0) {
      lVar12 = *plVar10;
    }
    else {
      lVar12 = 0;
    }
    FUN_140457ffc(lVar12 + 0x200,param_1);
    param_1[0x21] = 0;
  }
  if (param_2 != '\0') {
    plVar10 = (longlong *)(**(code **)(*param_1 + 0x2b8))(param_1);
    if ((plVar10 != (longlong *)0x0) &&
       ((cVar5 = (**(code **)(*plVar10 + 0x20))(plVar10), cVar5 != '\0' ||
        (cVar5 = (**(code **)(*param_1 + 0x398))(param_1), cVar5 != '\0')))) {
      if ((param_1[0x1b] == 0) || (*(int *)((longlong)param_1 + 0xd4) == 0)) {
LAB_140827290:
        lVar12 = 0;
      }
      else {
        uVar3 = *(uint *)(param_1 + 0x1a);
        lVar12 = 0;
        if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
          lVar11 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
          if ((lVar11 == 0) || (*(int *)(lVar11 + 0x10) != *(int *)((longlong)param_1 + 0xd4)))
          goto LAB_140827290;
          lVar12 = 0;
          if ((*(uint *)(lVar11 + 8) & 0x10200000) == 0) {
            lVar12 = param_1[0x1b];
          }
        }
      }
      local_78 = (longlong *)((ulonglong)local_78 & 0xffffffffffffff00);
      local_50 = 0;
      FUN_1408275ce(&local_78,lVar12);
      plVar9 = (longlong *)FUN_1447262c2(&local_78);
      if (plVar9 == (longlong *)0x0) {
LAB_1408274bf:
        plVar7 = (longlong *)0x0;
      }
      else {
        uVar8 = FUN_140437988();
        plVar9 = (longlong *)(**(code **)(*plVar9 + 0x288))(plVar9,uVar8);
        if (plVar9 == (longlong *)0x0) goto LAB_1408274bf;
        uVar8 = FUN_140437988();
        plVar7 = (longlong *)FUN_144718840(plVar9,uVar8);
        if (plVar9 == plVar7) goto LAB_1408274bf;
      }
      lVar12 = DAT_14c9a3da0;
      if ((longlong)local_50 != 0) {
        lVar16 = (longlong)local_50 + -1;
        lVar11 = lVar16 * 0x10;
        FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar11),
                      *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar11));
        if (*(longlong *)(lVar12 + lVar11) != 0) {
          FUN_1400020a8();
        }
        lVar12 = DAT_14c9a3da0;
        iVar6 = (int)lVar16;
        if (DAT_14c9a3dd4 != 0) {
          *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar6;
        }
        *(undefined4 *)(lVar12 + lVar11) = 0xffffffff;
        iVar15 = -1;
        if (0 < DAT_14c9a3dd4) {
          iVar15 = DAT_14c9a3dd0;
        }
        *(int *)(lVar12 + 4 + lVar11) = iVar15;
        DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
        puVar13 = &DAT_14c9a3db0;
        if (DAT_14c9a3dc0 != (undefined *)0x0) {
          puVar13 = DAT_14c9a3dc0;
        }
        iVar15 = iVar6 + 0x1f;
        if (-1 < iVar6) {
          iVar15 = iVar6;
        }
        bVar4 = (byte)lVar16 & 0x1f;
        DAT_14c9a3dd0 = iVar6;
        *(uint *)(puVar13 + (longlong)(iVar15 >> 5) * 4) =
             *(uint *)(puVar13 + (longlong)(iVar15 >> 5) * 4) &
             (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
        local_50 = 0;
      }
      if (((char)local_78 == '\x03') && (local_68 != (longlong *)0x0)) {
        LOCK();
        piVar1 = (int *)((longlong)local_68 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_68 + 0x10))();
        }
      }
      if (plVar7 != (longlong *)0x0) {
        if (param_1[0x20] != 0) {
          lVar11 = (**(code **)(*plVar7 + 0x18))(plVar7);
          lVar12 = param_1[0x20];
          if ((lVar12 != 0) && (cVar5 = FUN_14480f766(lVar11 + 0x40,lVar12), cVar5 == '\0')) {
            FUN_14480f766(lVar11 + 0x58,lVar12);
          }
          param_1[0x20] = 0;
        }
        lVar11 = (**(code **)(*plVar7 + 0x18))(plVar7);
        local_78 = (longlong *)0x0;
        local_70 = 0;
        FUN_1446efa72(&local_78,0,3,0x10);
        plVar9 = local_78;
        local_70 = 3;
        *local_78 = (longlong)&PTR_LAB_14b3f7600;
        LOCK();
        UNLOCK();
        lVar16 = DAT_14c758608 + 1;
        lVar12 = DAT_14c758608 + 1;
        if (lVar16 == 0) {
          LOCK();
          UNLOCK();
          lVar16 = DAT_14c758608 + 2;
          lVar12 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar12;
        local_78[2] = lVar16;
        *local_78 = (longlong)&PTR_FUN_14b3fadb0;
        local_78[3] = 0;
        iVar6 = 0;
        if (param_1 != (longlong *)0x0) {
          uVar3 = *(uint *)((longlong)param_1 + 0xc);
          *(uint *)(local_78 + 3) = uVar3;
          if ((int)uVar3 < DAT_14c9647dc) {
            lVar12 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
          }
          else {
            lVar12 = 0;
          }
          iVar6 = *(int *)(lVar12 + 0x10);
          if (*(int *)(lVar12 + 0x10) == 0) {
            LOCK();
            iVar6 = DAT_14c964868 + 1;
            UNLOCK();
            iVar15 = DAT_14c964868 + 1;
            bVar17 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar6;
            if (bVar17) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar15);
            }
            LOCK();
            iVar6 = *(int *)(lVar12 + 0x10);
            bVar17 = iVar6 == 0;
            if (bVar17) {
              *(int *)(lVar12 + 0x10) = iVar15;
              iVar6 = 0;
            }
            UNLOCK();
            if (bVar17) {
              iVar6 = iVar15;
            }
          }
        }
        *(int *)((longlong)plVar9 + 0x1c) = iVar6;
        plVar9[4] = (longlong)&LAB_14585a488;
        if (((local_70 == 0) || (local_78 == (longlong *)0x0)) ||
           (cVar5 = (**(code **)(*local_78 + 0x30))(), cVar5 == '\0')) {
          if (local_70 == 0) {
            lVar12 = 0;
            goto LAB_1408270af;
          }
          if (local_78 != (longlong *)0x0) {
            lVar12 = 0;
            (**(code **)*local_78)(local_78,0);
            FUN_1446efa72(&local_78,0,0,0x10);
            goto LAB_1408270a2;
          }
          lVar12 = 0;
        }
        else {
          plVar9 = (longlong *)(lVar11 + 0x58);
          if (*(int *)(lVar11 + 0x6c) < 1) {
            iVar6 = *(int *)(lVar11 + 0x60);
            iVar15 = *(int *)(lVar11 + 0x68) + -1;
            *(int *)(lVar11 + 0x68) = iVar15;
            if (iVar15 <= iVar6) {
              iVar15 = iVar6;
              if (0 < iVar6) {
                iVar14 = 0;
                do {
                  if (((*(int *)(*plVar9 + 8 + (longlong)iVar14 * 0x10) == 0) ||
                      (plVar7 = *(longlong **)(*plVar9 + (longlong)iVar14 * 0x10),
                      plVar7 == (longlong *)0x0)) ||
                     (cVar5 = (**(code **)(*plVar7 + 0x28))(), cVar5 != '\0')) {
                    FUN_14005b288(plVar9,iVar14);
                    FUN_14005b248(plVar9);
                  }
                  else {
                    iVar14 = iVar14 + 1;
                  }
                  iVar15 = *(int *)(lVar11 + 0x60);
                } while (iVar14 < iVar15);
              }
              iVar14 = 2;
              if (2 < iVar15 * 2) {
                iVar14 = iVar15 * 2;
              }
              *(int *)(lVar11 + 0x68) = iVar14;
              if ((iVar14 < iVar6) && (*(int *)(lVar11 + 100) != iVar15)) {
                FUN_14045812c();
              }
            }
          }
          lVar12 = 0;
          if ((local_70 != 0) && (local_78 != (longlong *)0x0)) {
            (**(code **)(*local_78 + 0x38))(local_78,&local_80);
            lVar12 = local_80;
          }
          iVar6 = *(int *)(lVar11 + 0x60);
          *(uint *)(lVar11 + 0x60) = iVar6 + 1U;
          if (*(uint *)(lVar11 + 100) < iVar6 + 1U) {
            FUN_1447a71f6(plVar9,iVar6);
          }
          lVar11 = *plVar9;
          lVar16 = (longlong)iVar6 * 0x10;
          *(undefined8 *)(lVar11 + lVar16) = 0;
          *(undefined4 *)(lVar11 + 8 + lVar16) = 0;
          *(longlong **)(lVar11 + lVar16) = local_78;
          local_78 = (longlong *)0x0;
          *(int *)(lVar11 + 8 + lVar16) = local_70;
LAB_1408270a2:
          local_70 = 0;
LAB_1408270af:
          if (local_78 != (longlong *)0x0) {
            FUN_1400020a8();
          }
        }
        param_1[0x20] = lVar12;
      }
    }
    if (((((longlong *)param_1[0x1b] != (longlong *)0x0) &&
         (*(int *)((longlong)param_1 + 0xd4) != 0)) &&
        (uVar3 = *(uint *)(param_1 + 0x1a), -1 < (int)uVar3)) &&
       ((((int)uVar3 < DAT_14c9647dc &&
         (lVar12 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar12 != 0)) &&
        ((*(int *)(lVar12 + 0x10) == *(int *)((longlong)param_1 + 0xd4) &&
         (((*(uint *)(lVar12 + 8) & 0x10200000) == 0 &&
          (lVar12 = (**(code **)(*(longlong *)param_1[0x1b] + 0x18))(), lVar12 != 0)))))))) {
      if (*(longlong *)(lVar12 + 0x1c8) == 0) {
        param_1[0x21] = 0;
      }
      else {
        uVar3 = *(uint *)(*(longlong *)(lVar12 + 0x1c8) + 0xc);
        *puVar2 = uVar3;
        if ((int)uVar3 < DAT_14c9647dc) {
          lVar12 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
        }
        else {
          lVar12 = 0;
        }
        iVar6 = *(int *)(lVar12 + 0x10);
        if (iVar6 == 0) {
          LOCK();
          iVar6 = DAT_14c964868 + 1;
          UNLOCK();
          iVar15 = DAT_14c964868 + 1;
          bVar17 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar6;
          if (bVar17) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar15);
          }
          LOCK();
          iVar6 = *(int *)(lVar12 + 0x10);
          bVar17 = iVar6 == 0;
          if (bVar17) {
            *(int *)(lVar12 + 0x10) = iVar15;
            iVar6 = 0;
          }
          UNLOCK();
          if (bVar17) {
            iVar6 = iVar15;
          }
          *(int *)((longlong)param_1 + 0x10c) = iVar6;
          if (iVar6 == 0) goto LAB_140826c22;
        }
        else {
          *(int *)((longlong)param_1 + 0x10c) = iVar6;
        }
        uVar3 = *puVar2;
        if (((((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) &&
             (lVar12 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar12 != 0))
            && ((*(int *)(lVar12 + 0x10) == iVar6 && (plVar10 != (longlong *)0x0)))) &&
           (((*(uint *)(lVar12 + 8) & 0x10200000) == 0 &&
            (((char)plVar10[0x12] == '\x01' && (*(char *)((longlong)plVar10 + 0x91) == '\x01'))))))
        {
          lVar12 = FUN_14479d2ce(puVar2);
          FUN_14574b918(lVar12 + 0x200,&local_78,param_1);
        }
      }
    }
    goto LAB_140826c22;
  }
  if (param_1[0x20] == 0) goto LAB_140826c22;
  if ((param_1[0x1b] == 0) || (*(int *)((longlong)param_1 + 0xd4) == 0)) {
LAB_140827297:
    lVar12 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x1a);
    lVar12 = 0;
    if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
      lVar11 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      if ((lVar11 == 0) || (*(int *)(lVar11 + 0x10) != *(int *)((longlong)param_1 + 0xd4)))
      goto LAB_140827297;
      lVar12 = 0;
      if ((*(uint *)(lVar11 + 8) & 0x10200000) == 0) {
        lVar12 = param_1[0x1b];
      }
    }
  }
  local_78 = (longlong *)((ulonglong)local_78 & 0xffffffffffffff00);
  local_50 = 0;
  FUN_1408275ce(&local_78,lVar12);
  plVar10 = (longlong *)FUN_1447262c2(&local_78);
  if (plVar10 == (longlong *)0x0) {
LAB_1408274c7:
    plVar9 = (longlong *)0x0;
  }
  else {
    uVar8 = FUN_140437988();
    plVar10 = (longlong *)(**(code **)(*plVar10 + 0x288))(plVar10,uVar8);
    if (plVar10 == (longlong *)0x0) goto LAB_1408274c7;
    uVar8 = FUN_140437988();
    plVar9 = (longlong *)FUN_144718840(plVar10,uVar8);
    if (plVar10 == plVar9) goto LAB_1408274c7;
  }
  lVar12 = DAT_14c9a3da0;
  if ((longlong)local_50 != 0) {
    lVar11 = (longlong)local_50 + -1;
    lVar16 = lVar11 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar16),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar16));
    if (*(longlong *)(lVar12 + lVar16) != 0) {
      FUN_1400020a8();
    }
    lVar12 = DAT_14c9a3da0;
    iVar6 = (int)lVar11;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar6;
    }
    *(undefined4 *)(lVar12 + lVar16) = 0xffffffff;
    iVar15 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar15 = DAT_14c9a3dd0;
    }
    *(int *)(lVar12 + 4 + lVar16) = iVar15;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar13 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar13 = DAT_14c9a3dc0;
    }
    iVar15 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar15 = iVar6;
    }
    bVar4 = (byte)lVar11 & 0x1f;
    DAT_14c9a3dd0 = iVar6;
    *(uint *)(puVar13 + (longlong)(iVar15 >> 5) * 4) =
         *(uint *)(puVar13 + (longlong)(iVar15 >> 5) * 4) &
         (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
    local_50 = 0;
  }
  if (((char)local_78 == '\x03') && (local_68 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_68 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_68 + 0x10))();
    }
  }
  if (plVar9 != (longlong *)0x0) {
    lVar11 = (**(code **)(*plVar9 + 0x18))(plVar9);
    lVar12 = param_1[0x20];
    if ((lVar12 != 0) && (cVar5 = FUN_14480f766(lVar11 + 0x40,lVar12), cVar5 == '\0')) {
      FUN_14480f766(lVar11 + 0x58,lVar12);
    }
  }
  param_1[0x20] = 0;
LAB_140826c22:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1408275ce FUN_1408275ce body=172 status=ok
// SIG undefined FUN_1408275ce(void)

void FUN_1408275ce(char *param_1,longlong *param_2)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  cVar2 = *param_1;
  if (param_2 == (longlong *)0x0) {
    if (cVar2 != '\0') {
      if (cVar2 == '\x03') {
        plVar3 = *(longlong **)(param_1 + 0x10);
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))();
          }
        }
      }
      else if (cVar2 == '\x01') {
        param_1[8] = '\0';
        param_1[9] = '\0';
        param_1[10] = '\0';
        param_1[0xb] = '\0';
        param_1[0xc] = '\0';
        param_1[0xd] = '\0';
        param_1[0xe] = '\0';
        param_1[0xf] = '\0';
      }
      *param_1 = '\0';
    }
  }
  else {
    if (cVar2 == '\x03') {
      plVar3 = *(longlong **)(param_1 + 0x10);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))();
        }
      }
    }
    else if (cVar2 == '\x01') {
      param_1[8] = '\0';
      param_1[9] = '\0';
      param_1[10] = '\0';
      param_1[0xb] = '\0';
      param_1[0xc] = '\0';
      param_1[0xd] = '\0';
      param_1[0xe] = '\0';
      param_1[0xf] = '\0';
    }
    *param_1 = '\x01';
    uVar4 = (**(code **)(*param_2 + 8))(param_2);
    *(undefined8 *)(param_1 + 8) = uVar4;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_1417398fc(&DAT_14c9a3da0,*(int *)(param_1 + 0x28) + -1,1);
    param_1[0x28] = '\0';
    param_1[0x29] = '\0';
    param_1[0x2a] = '\0';
    param_1[0x2b] = '\0';
  }
  return;
}



// FUNCTION 14082767a FUN_14082767a body=468 status=ok
// SIG undefined FUN_14082767a(void)

void FUN_14082767a(longlong param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  undefined1 auStack_78 [40];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((param_2 != 0xffffffff) && (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54))) {
    lVar5 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x60);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x68) - 1U & param_2) * 4);
    if (iVar4 != -1) {
      do {
        lVar5 = *(longlong *)(param_1 + 0x20) + (longlong)iVar4 * 0x20;
        if (*(uint *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar4 * 0x20) == param_2) {
          if (((lVar5 != 0) && (plVar10 = (longlong *)(lVar5 + 8), plVar10 != (longlong *)0x0)) &&
             (iVar4 = *(int *)(lVar5 + 0x10), (longlong)iVar4 != 0)) {
            lVar1 = *(longlong *)(lVar5 + 8);
            lVar9 = 0;
            uVar11 = 0;
            goto LAB_140827730;
          }
          break;
        }
        iVar4 = *(int *)(lVar5 + 0x18);
      } while (iVar4 != -1);
    }
  }
  goto LAB_1408277b8;
  while( true ) {
    uVar11 = uVar11 + 1;
    lVar9 = lVar9 + 0x10;
    if ((longlong)iVar4 * 0x10 == lVar9) break;
LAB_140827730:
    if (*(int *)(lVar1 + 8 + lVar9) == 0) {
      lVar6 = 0;
    }
    else {
      plVar2 = *(longlong **)(lVar1 + lVar9);
      lVar6 = 0;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_50);
        lVar6 = local_50;
      }
    }
    if (lVar6 == *param_3) {
      if ((-1 < (int)uVar11) && ((int)uVar11 < *(int *)(lVar5 + 0x10))) {
        lVar1 = *plVar10;
        lVar9 = (ulonglong)(uVar11 & 0x7fffffff) * 0x10;
        plVar2 = (longlong *)(lVar1 + lVar9);
        if (*(int *)(lVar1 + 8 + lVar9) == 0) {
LAB_140827791:
          if (*plVar2 != 0) {
            FUN_1400020a8();
          }
        }
        else {
          puVar3 = (undefined8 *)*plVar2;
          if (puVar3 != (undefined8 *)0x0) {
            (**(code **)*puVar3)(puVar3,0);
            FUN_1446efa72(plVar2,0,0,0x10);
            *(undefined4 *)(plVar2 + 1) = 0;
            goto LAB_140827791;
          }
        }
        iVar4 = *(int *)(lVar5 + 0x10);
        if (iVar4 - 1U != uVar11) {
          iVar7 = (iVar4 - 1U) - uVar11;
          iVar8 = 1;
          if (iVar7 < 1) {
            iVar8 = iVar7;
          }
          memmove(plVar2,(void *)(lVar1 + (longlong)(iVar4 - iVar8) * 0x10),(longlong)iVar8 << 4);
          iVar4 = *(int *)(lVar5 + 0x10);
        }
        *(int *)(lVar5 + 0x10) = iVar4 + -1;
        FUN_140827850(plVar10);
      }
      break;
    }
  }
LAB_1408277b8:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140827850 FUN_140827850 body=142 status=ok
// SIG undefined FUN_140827850(void)

void FUN_140827850(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar2 - uVar1) & 0xffffffffffffc00U) != 0) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 << 4,8);
      uVar3 = uVar3 >> 4;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x10,8);
    }
  }
  return;
}



// FUNCTION 1408278de FUN_1408278de body=370 status=ok
// SIG undefined FUN_1408278de(void)

undefined8 * FUN_1408278de(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 140827a5e FUN_140827a5e body=2008 status=ok
// SIG undefined FUN_140827a5e(void)

ulonglong FUN_140827a5e(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  uint *puVar2;
  bool bVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  int *piVar10;
  uint uVar11;
  int *piVar12;
  int *piVar13;
  undefined8 uVar14;
  uint uVar15;
  longlong *plVar16;
  int iVar17;
  longlong lVar18;
  ulonglong uVar19;
  uint uVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong lVar24;
  bool bVar25;
  undefined1 auStack_98 [36];
  int local_74;
  longlong local_70;
  ulonglong local_68;
  uint local_60;
  ulonglong local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar4 = FUN_1401144ce(param_2);
  if (cVar4 != '\0') {
    if (((*(int *)(param_2 + 0x10) == 0) || (iVar6 = *(int *)(param_2 + 0x14), iVar6 == 0)) ||
       (*(int *)(param_2 + 0x10) == DAT_14c948000)) {
LAB_140828015:
      local_50 = DAT_14c948620;
      uVar8 = DAT_14c948618;
    }
    else {
      lVar21 = param_2 + 0x18;
      if (0 < *(int *)(param_2 + 0x34)) {
        lVar21 = *(longlong *)(param_2 + 0x28);
      }
      if (1 < iVar6) {
        lVar21 = *(longlong *)(param_2 + 0x28);
      }
      if ((iVar6 == 1) || (iVar6 < 3)) goto LAB_140828015;
      local_50 = *(uint *)(lVar21 + 0x20);
      uVar8 = *(ulonglong *)(lVar21 + 0x18);
    }
    local_58._0_4_ = (uint)uVar8;
    if (local_50 != 0) {
      uVar7 = local_50 >> 0xd ^ (uint)local_58 - local_50;
      uVar15 = uVar7 << 8 ^ (-0x61c88647 - local_50) - uVar7;
      uVar20 = uVar15 >> 0xd ^ (local_50 - uVar7) - uVar15;
      uVar11 = uVar20 >> 0xc ^ (uVar7 - uVar15) - uVar20;
      uVar7 = uVar11 << 0x10 ^ (uVar15 - uVar20) - uVar11;
      uVar15 = uVar7 >> 5 ^ (uVar20 - uVar11) - uVar7;
      uVar11 = uVar15 >> 3 ^ (uVar11 - uVar7) - uVar15;
      uVar7 = uVar11 << 10 ^ (uVar7 - uVar15) - uVar11;
      local_58._0_4_ = uVar7 >> 0xf ^ uVar15 - (uVar11 + uVar7);
    }
    uVar7 = (uint)local_58;
    local_58 = uVar8;
    iVar6 = FUN_140502a60((longlong *)(param_1 + 0x78),uVar7,&local_58);
    if (iVar6 != -1) {
      lVar21 = *(longlong *)(param_1 + 0x78);
      if ((lVar21 + (longlong)iVar6 * 0x70 != 0) &&
         (plVar16 = (longlong *)(lVar21 + (longlong)iVar6 * 0x70 + 0x10), plVar16 != (longlong *)0x0
         )) {
        if ((*(int *)(param_2 + 0x10) == 0) ||
           ((iVar6 = *(int *)(param_2 + 0x14), iVar6 == 0 ||
            (*(int *)(param_2 + 0x10) == DAT_14c948000)))) {
LAB_14082802b:
          local_50 = DAT_14c948620;
          local_58 = DAT_14c948618;
        }
        else {
          lVar21 = param_2 + 0x18;
          if (0 < *(int *)(param_2 + 0x34)) {
            lVar21 = *(longlong *)(param_2 + 0x28);
          }
          if (1 < iVar6) {
            lVar21 = *(longlong *)(param_2 + 0x28);
          }
          if ((iVar6 == 1) || (iVar6 < 4)) goto LAB_14082802b;
          local_50 = *(uint *)(lVar21 + 0x2c);
          local_58 = *(ulonglong *)(lVar21 + 0x24);
        }
        uVar8 = local_58 & 0xffffffff;
        if (local_50 != 0) {
          uVar7 = FUN_144a78877(uVar8,local_50);
          uVar8 = (ulonglong)uVar7;
        }
        iVar6 = FUN_144a24328(plVar16,uVar8,&local_58);
        if (iVar6 != -1) {
          if ((*plVar16 + (longlong)iVar6 * 0x68 != 0) &&
             (plVar16 = (longlong *)(*plVar16 + (longlong)iVar6 * 0x68 + 0x10),
             plVar16 != (longlong *)0x0)) {
            if ((*(int *)(param_2 + 0x10) == 0) ||
               ((iVar6 = *(int *)(param_2 + 0x14), iVar6 == 0 ||
                (*(int *)(param_2 + 0x10) == DAT_14c948000)))) {
LAB_140828041:
              local_50 = DAT_14c948620;
              uVar8 = DAT_14c948618;
            }
            else {
              lVar21 = param_2 + 0x18;
              if (0 < *(int *)(param_2 + 0x34)) {
                lVar21 = *(longlong *)(param_2 + 0x28);
              }
              if (1 < iVar6) {
                lVar21 = *(longlong *)(param_2 + 0x28);
              }
              if ((iVar6 == 1) || (iVar6 < 5)) goto LAB_140828041;
              local_50 = *(uint *)(lVar21 + 0x38);
              uVar8 = *(ulonglong *)(lVar21 + 0x30);
            }
            local_58._0_4_ = (uint)uVar8;
            if (local_50 != 0) {
              uVar7 = local_50 >> 0xd ^ (uint)local_58 - local_50;
              uVar15 = uVar7 << 8 ^ (-0x61c88647 - local_50) - uVar7;
              uVar20 = uVar15 >> 0xd ^ (local_50 - uVar7) - uVar15;
              uVar11 = uVar20 >> 0xc ^ (uVar7 - uVar15) - uVar20;
              uVar7 = uVar11 << 0x10 ^ (uVar15 - uVar20) - uVar11;
              uVar15 = uVar7 >> 5 ^ (uVar20 - uVar11) - uVar7;
              uVar11 = uVar15 >> 3 ^ (uVar11 - uVar7) - uVar15;
              uVar7 = uVar11 << 10 ^ (uVar7 - uVar15) - uVar11;
              local_58._0_4_ = uVar7 >> 0xf ^ uVar15 - (uVar11 + uVar7);
            }
            uVar7 = (uint)local_58;
            local_58 = uVar8;
            iVar6 = FUN_140727b76(plVar16,uVar7,&local_58);
            if (iVar6 != -1) {
              uVar8 = 0;
              lVar21 = *plVar16 + (longlong)iVar6 * 0xa8;
              if ((lVar21 == 0) || (lVar24 = *plVar16 + (longlong)iVar6 * 0xa8 + 0x10, lVar24 == 0))
              goto LAB_140827d7e;
              cVar4 = FUN_140114448(param_2);
              if (cVar4 != '\0') {
                uVar7 = FUN_140828237(lVar21 + 0x50,param_3);
                uVar8 = (ulonglong)uVar7;
                iVar6 = *(int *)(lVar21 + 0x48);
                if ((longlong)iVar6 != 0) {
                  lVar24 = *(longlong *)(lVar21 + 0x40);
                  lVar22 = 0;
                  do {
                    bVar5 = FUN_140828237(*(longlong *)(param_1 + 0x40) +
                                          (longlong)*(int *)(lVar24 + lVar22) * 0x68 + 0x50,param_3)
                    ;
                    uVar8 = CONCAT71((int7)(uVar8 >> 8),(byte)uVar8 | bVar5);
                    lVar22 = lVar22 + 4;
                  } while ((longlong)iVar6 * 4 != lVar22);
                }
                if ((longlong)*(int *)(lVar21 + 0x88) != 0) {
                  lVar22 = (longlong)*(int *)(lVar21 + 0x88) << 5;
                  lVar24 = *(longlong *)(lVar21 + 0x80) + 0x10;
                  do {
                    bVar5 = FUN_140828237(lVar24,param_3);
                    uVar8 = CONCAT71((int7)(uVar8 >> 8),(byte)uVar8 | bVar5);
                    lVar24 = lVar24 + 0x20;
                    lVar22 = lVar22 + -0x20;
                  } while (lVar22 != 0);
                }
                if ((((((*(int *)(lVar21 + 0x1c) == 1) && (*(int *)(param_1 + 0xc) != 0)) &&
                      (uVar7 = *(uint *)(param_1 + 8), -1 < (int)uVar7)) &&
                     (((int)uVar7 < DAT_14c9647dc &&
                      (lVar24 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8),
                      lVar24 != 0)))) && (*(int *)(lVar24 + 0x10) == *(int *)(param_1 + 0xc))) &&
                   (((*(uint *)(lVar24 + 8) & 0x10200000) == 0 &&
                    (iVar6 = *(int *)(lVar21 + 0x48), (longlong)iVar6 != 0)))) {
                  lVar22 = *(longlong *)(lVar21 + 0x40);
                  lVar24 = param_1 + 0x50;
                  lVar18 = 0;
                  local_70 = lVar24;
                  do {
                    uVar7 = *(uint *)(lVar22 + lVar18);
                    if ((-1 < (int)uVar7) && ((int)uVar7 < *(int *)(param_1 + 0x68))) {
                      lVar9 = *(longlong *)(param_1 + 0x60);
                      if (*(longlong *)(param_1 + 0x60) == 0) {
                        lVar9 = lVar24;
                      }
                      if ((*(uint *)(lVar9 + (ulonglong)(uVar7 >> 5) * 4) >> (uVar7 & 0x1f) & 1) !=
                          0) {
                        FUN_14082845c(param_1 + 0x40);
                        if ((*(int *)(param_1 + 0xc) == 0) ||
                           (uVar11 = *(uint *)(param_1 + 8), (int)uVar11 < 0)) {
LAB_140828065:
                          lVar24 = 0;
                        }
                        else {
                          lVar24 = 0;
                          if ((int)uVar11 < DAT_14c9647dc) {
                            plVar16 = (longlong *)
                                      ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8)
                                      );
                            if (((plVar16 == (longlong *)0x0) ||
                                ((int)plVar16[2] != *(int *)(param_1 + 0xc))) ||
                               ((*(uint *)(plVar16 + 1) & 0x10200000) != 0)) goto LAB_140828065;
                            lVar24 = *plVar16;
                          }
                        }
                        if (*(longlong *)(lVar24 + 0x30) == 0) {
                          uVar14 = 0;
                        }
                        else {
                          uVar14 = *(undefined8 *)(*(longlong *)(lVar24 + 0x30) + 0x360);
                        }
                        FUN_140828502(uVar14,uVar7);
                        lVar24 = local_70;
                      }
                    }
                    lVar18 = lVar18 + 4;
                  } while ((longlong)iVar6 * 4 != lVar18);
                  uVar7 = *(uint *)(lVar21 + 0x48);
                  uVar19 = (ulonglong)(int)uVar7;
                  if (uVar19 != 0) {
                    puVar2 = *(uint **)(lVar21 + 0x40);
                    uVar11 = *puVar2;
                    bVar25 = true;
                    if ((-1 < (int)uVar11) && ((int)uVar11 < *(int *)(param_1 + 0x68))) {
                      lVar22 = *(longlong *)(param_1 + 0x60);
                      if (*(longlong *)(param_1 + 0x60) == 0) {
                        lVar22 = lVar24;
                      }
                      bVar25 = (*(uint *)(lVar22 + (ulonglong)(uVar11 >> 5) * 4) >> (uVar11 & 0x1f)
                               & 1) == 0;
                    }
                    iVar6 = 0;
                    uVar23 = 0;
LAB_140827f59:
                    do {
                      iVar1 = (int)uVar23;
                      uVar23 = (ulonglong)(iVar1 + 1U);
                      local_74 = iVar6;
                      if ((int)(iVar1 + 1U) < (int)uVar7) {
                        uVar23 = (longlong)iVar1 + 1;
                        bVar3 = true;
                        do {
                          uVar11 = puVar2[uVar23];
                          if (((int)uVar11 < 0) || (*(int *)(param_1 + 0x68) <= (int)uVar11)) {
                            if (bVar25 == false) goto LAB_140827fd6;
                          }
                          else {
                            lVar22 = *(longlong *)(param_1 + 0x60);
                            if (*(longlong *)(param_1 + 0x60) == 0) {
                              lVar22 = lVar24;
                            }
                            if (((*(uint *)(lVar22 + (ulonglong)(uVar11 >> 5) * 4) >>
                                  (uVar11 & 0x1f) & 1) == 0) != bVar25) goto LAB_140827fb7;
                          }
                          uVar23 = uVar23 + 1;
                          bVar3 = (longlong)uVar23 < (longlong)uVar19;
                        } while (uVar23 != uVar19);
                        uVar23 = (ulonglong)uVar7;
LAB_140827fb7:
                        if (bVar25 != false) {
                          bVar25 = false;
                          if (!bVar3) break;
                          goto LAB_140827f59;
                        }
                      }
                      else {
                        if (bVar25 != false) break;
                        bVar3 = false;
                      }
LAB_140827fd6:
                      iVar17 = (int)uVar23 - iVar1;
                      if (iVar6 != iVar1) {
                        memmove(puVar2 + iVar6,puVar2 + iVar1,(longlong)iVar17 << 2);
                        lVar24 = local_70;
                      }
                      iVar6 = local_74 + iVar17;
                      bVar25 = true;
                    } while (bVar3);
                    *(int *)(lVar21 + 0x48) = iVar6;
                  }
                }
                goto LAB_140827d7e;
              }
              iVar6 = *(int *)(param_2 + 0x10);
              if (((iVar6 == 0) || (iVar1 = *(int *)(param_2 + 0x14), iVar1 == 0)) ||
                 (iVar6 == DAT_14c948000)) {
LAB_140828213:
                local_60 = DAT_14c948620;
                local_68 = DAT_14c948618;
              }
              else {
                lVar22 = param_2 + 0x18;
                if (0 < *(int *)(param_2 + 0x34)) {
                  lVar22 = *(longlong *)(param_2 + 0x28);
                }
                if (1 < iVar1) {
                  lVar22 = *(longlong *)(param_2 + 0x28);
                }
                if ((iVar1 == 1) || (iVar1 < 6)) goto LAB_140828213;
                local_60 = *(uint *)(lVar22 + 0x44);
                local_68 = *(ulonglong *)(lVar22 + 0x3c);
              }
              lVar24 = FUN_14045a5f8(lVar24,&local_68,param_1 + 0x40);
              if (lVar24 == 0) {
                uVar8 = 0;
              }
              else {
                uVar7 = FUN_140828237(lVar24 + 0x50,param_3);
                uVar8 = (ulonglong)uVar7;
                iVar6 = *(int *)(param_2 + 0x10);
              }
              piVar12 = (int *)&DAT_14c948618;
              piVar10 = (int *)&DAT_14c948620;
              if (((iVar6 != 0) && (5 < *(int *)(param_2 + 0x14))) && (iVar6 != DAT_14c948000)) {
                piVar12 = (int *)(*(longlong *)(param_2 + 0x28) + 0x3c);
                piVar10 = (int *)(*(longlong *)(param_2 + 0x28) + 0x44);
              }
              if ((longlong)*(int *)(lVar21 + 0x88) != 0) {
                piVar13 = *(int **)(lVar21 + 0x80);
                lVar21 = (longlong)*(int *)(lVar21 + 0x88) << 5;
                do {
                  if ((*piVar13 == *piVar12) && (piVar13[2] == *piVar10)) {
                    if (piVar13 != (int *)0x0) {
                      bVar5 = FUN_140828237(piVar13 + 4,param_3);
                      uVar8 = CONCAT71((int7)(uVar8 >> 8),(byte)uVar8 | bVar5);
                    }
                    break;
                  }
                  piVar13 = piVar13 + 8;
                  lVar21 = lVar21 + -0x20;
                } while (lVar21 != 0);
              }
              goto LAB_140827d7e;
            }
          }
        }
      }
    }
  }
  uVar8 = 0;
LAB_140827d7e:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffffffffff01;
}



// FUNCTION 140828237 FUN_140828237 body=246 status=ok
// SIG undefined FUN_140828237(void)

byte FUN_140828237(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  byte bVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_78 [40];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar8 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar8 < 1) {
    bVar6 = 0;
  }
  else {
    lVar7 = uVar8 * 0x10 + -8;
    bVar6 = 0;
    do {
      lVar1 = *param_1;
      if ((*(int *)(lVar1 + lVar7) == 0) ||
         (plVar2 = *(longlong **)(lVar1 + -8 + lVar7), plVar2 == (longlong *)0x0)) {
        lVar5 = 0;
      }
      else {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_50);
        lVar5 = local_50;
      }
      if ((((lVar5 == param_2) || (*(int *)(lVar1 + lVar7) == 0)) ||
          (plVar2 = *(longlong **)(lVar1 + -8 + lVar7), plVar2 == (longlong *)0x0)) ||
         (cVar4 = (**(code **)(*plVar2 + 0x30))(), cVar4 == '\0')) {
        FUN_1408283bc(param_1,(int)uVar8 + -1);
        FUN_14082832e(param_1);
      }
      bVar6 = bVar6 | lVar5 == param_2;
      lVar7 = lVar7 + -0x10;
      bVar3 = 1 < uVar8;
      uVar8 = uVar8 - 1;
    } while (bVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar6;
}



// FUNCTION 14082832e FUN_14082832e body=142 status=ok
// SIG undefined FUN_14082832e(void)

void FUN_14082832e(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar2 - uVar1) & 0xffffffffffffc00U) != 0) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 << 4,8);
      uVar3 = uVar3 >> 4;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x10,8);
    }
  }
  return;
}



// FUNCTION 1408283bc FUN_1408283bc body=159 status=ok
// SIG undefined FUN_1408283bc(void)

void FUN_1408283bc(longlong *param_1,uint param_2)

{
  longlong *_Dst;
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  lVar1 = *param_1;
  _Dst = (longlong *)(lVar1 + (longlong)(int)param_2 * 0x10);
  if (*(int *)(lVar1 + 8 + (longlong)(int)param_2 * 0x10) != 0) {
    puVar2 = (undefined8 *)*_Dst;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1408283e6;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(_Dst,0,0,0x10);
    *(undefined4 *)(_Dst + 1) = 0;
  }
  if (*_Dst != 0) {
    FUN_1400020a8();
  }
LAB_1408283e6:
  iVar3 = (int)param_1[1];
  iVar5 = ~param_2 + iVar3;
  if (iVar5 != 0) {
    iVar4 = 1;
    if (iVar5 < 1) {
      iVar4 = iVar5;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar3 - iVar4) * 0x10),(longlong)iVar4 << 4);
    iVar3 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar3 + -1;
  return;
}



// FUNCTION 14082845c FUN_14082845c body=166 status=ok
// SIG undefined FUN_14082845c(void)

void FUN_14082845c(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  
  lVar2 = *param_1;
  lVar7 = (longlong)param_2 * 0x68;
  FUN_1402954e1(*(undefined8 *)(lVar2 + 0x50 + lVar7),*(undefined4 *)(lVar2 + 0x58 + lVar7));
  if (*(longlong *)(lVar2 + 0x50 + lVar7) != 0) {
    FUN_1400020a8();
  }
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x68) = param_2;
  }
  *(undefined4 *)(lVar2 + lVar7) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + lVar7 + 4) = uVar5;
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



// FUNCTION 140828502 FUN_140828502 body=1071 status=ok
// SIG undefined FUN_140828502(void)

void FUN_140828502(longlong param_1,int param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint *puVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  longlong *local_80;
  uint local_78;
  int local_74;
  uint *local_70;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar11 = 0;
  if ((param_1 == 0) || (plVar9 = *(longlong **)(param_1 + 0x38), plVar9 == (longlong *)0x0)) {
    plVar9 = (longlong *)0x0;
  }
  else if (*(code **)(*plVar9 + 0x3c0) == (code *)&LAB_1448ff5f6) {
    if (plVar9[0x1e] != 0) goto LAB_1408288e0;
  }
  else {
    cVar4 = (**(code **)(*plVar9 + 0x3c0))(plVar9);
    if (cVar4 == '\0') goto LAB_1408288e0;
  }
  if (DAT_14cb7c230 == 0) {
    uVar12 = 1;
    uVar5 = 0;
    iVar15 = 0;
  }
  else {
    puVar13 = &DAT_14cb7c218;
    if (DAT_14cb7c228 != (uint *)0x0) {
      puVar13 = DAT_14cb7c228;
    }
    uVar5 = *puVar13;
    if (uVar5 == 0) {
      iVar15 = DAT_14cb7c230 + 0x1e;
      if (-1 < (int)(DAT_14cb7c230 - 1)) {
        iVar15 = DAT_14cb7c230 - 1;
      }
      uVar11 = 0;
      uVar12 = (ulonglong)(uint)(iVar15 >> 5);
      if (iVar15 >> 5 < 1) {
        uVar12 = uVar11;
      }
      iVar15 = 0;
      do {
        if (uVar12 == uVar11) goto LAB_1408288e0;
        iVar15 = iVar15 + 0x20;
        uVar5 = puVar13[uVar11 + 1];
        uVar11 = uVar11 + 1;
      } while (uVar5 == 0);
    }
    else {
      uVar11 = 0;
      iVar15 = 0;
    }
    uVar12 = (ulonglong)(-uVar5 & uVar5);
    uVar1 = uVar12 * 2 + 1;
    lVar17 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    uVar5 = (iVar15 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
    if ((int)DAT_14cb7c230 <= (int)uVar5) {
      uVar5 = DAT_14cb7c230;
    }
  }
  if (uVar5 != DAT_14cb7c230) {
    uVar14 = 0xffffffff;
    local_88 = (ulonglong)DAT_14cb7c230;
    local_80 = plVar9;
    do {
      lVar17 = (longlong)(int)uVar5 * 0x20 + DAT_14cb7c208;
      local_78 = uVar14;
      local_74 = iVar15;
      cVar4 = FUN_1405f6df2(lVar17,local_80);
      if ((cVar4 != '\0') && ((longlong)*(int *)(lVar17 + 0x10) != 0)) {
        puVar13 = *(uint **)(lVar17 + 8);
        local_70 = puVar13 + (longlong)*(int *)(lVar17 + 0x10) * 2;
        do {
          if (((((puVar13[1] != 0) && (uVar5 = *puVar13, -1 < (int)uVar5)) &&
               ((int)uVar5 < DAT_14c9647dc)) &&
              ((plVar9 = (longlong *)
                         ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
               plVar9 != (longlong *)0x0 && (*(uint *)(plVar9 + 2) == puVar13[1])))) &&
             ((*(uint *)(plVar9 + 1) & 0x10200000) == 0)) {
            if ((*(uint *)(plVar9 + 1) & 0x10200000) == 0) {
              lVar17 = *plVar9;
            }
            else {
              lVar17 = 0;
            }
            cVar4 = *(char *)(lVar17 + 0x80);
            plVar9 = (longlong *)(lVar17 + 0xd8);
            iVar15 = *(int *)(lVar17 + 0xe0);
            lVar16 = (longlong)iVar15;
            if (0 < lVar16) {
              lVar3 = *plVar9;
              lVar8 = 0;
              do {
                if ((((byte)(*(char *)(lVar3 + lVar8) - 2U) < 3) &&
                    (*(int *)(lVar3 + 4 + lVar8) == param_2)) &&
                   (*(char *)(lVar3 + 0x60 + lVar8) == cVar4)) {
                  *(undefined1 *)(lVar3 + lVar8) = 4;
                  puVar2 = (undefined8 *)(lVar3 + 0x40 + lVar8);
                  *puVar2 = 0;
                  puVar2[1] = 0;
                  *(undefined8 *)(lVar3 + 0x50 + lVar8) = 0;
                  *(undefined4 *)(lVar3 + 0xc + lVar8) = 0xbf800000;
                  goto LAB_14082875e;
                }
                lVar8 = lVar8 + 0x68;
              } while (lVar16 * 0x68 - lVar8 != 0);
            }
            *(uint *)(lVar17 + 0xe0) = iVar15 + 1U;
            if (*(uint *)(lVar17 + 0xe4) < iVar15 + 1U) {
              FUN_140116b62(plVar9,iVar15);
            }
            lVar3 = *plVar9;
            lVar16 = lVar16 * 0x68;
            *(undefined1 *)(lVar3 + lVar16) = 4;
            *(int *)(lVar3 + 4 + lVar16) = param_2;
            *(undefined8 *)(lVar3 + 8 + lVar16) = 0xbf800000ffffffff;
            puVar2 = (undefined8 *)(lVar3 + 0x10 + lVar16);
            *puVar2 = 0;
            puVar2[1] = 0;
            puVar2 = (undefined8 *)(lVar3 + 0x20 + lVar16);
            *puVar2 = 0;
            puVar2[1] = 0;
            puVar2 = (undefined8 *)(lVar3 + 0x30 + lVar16);
            *puVar2 = 0;
            puVar2[1] = 0;
            puVar2 = (undefined8 *)(lVar3 + 0x40 + lVar16);
            *puVar2 = 0;
            puVar2[1] = 0;
            puVar2 = (undefined8 *)(lVar3 + 0x50 + lVar16);
            *puVar2 = 0;
            puVar2[1] = 0;
            *(char *)(lVar3 + 0x60 + lVar16) = cVar4;
            *(undefined2 *)(lVar3 + 0x61 + lVar16) = 0;
LAB_14082875e:
            lVar16 = *(longlong *)(lVar17 + 0x28);
            local_68 = lVar17;
            if ((lVar17 != 0) && (DAT_14c950c29 != '\0')) {
              FUN_1456cec3c(lVar17);
            }
            FUN_1405f6d44(lVar16 + 0x16c8,&local_68);
          }
          puVar13 = puVar13 + 2;
        } while (puVar13 != local_70);
      }
      uVar14 = local_78 & ~(uint)uVar12;
      puVar13 = DAT_14cb7c228;
      if (DAT_14cb7c228 == (uint *)0x0) {
        puVar13 = &DAT_14cb7c218;
      }
      iVar10 = (int)uVar11;
      lVar17 = (longlong)iVar10;
      uVar5 = puVar13[lVar17] & uVar14;
      iVar15 = local_74;
      if (uVar5 == 0) {
        iVar6 = DAT_14cb7c230 + 0x1e;
        if (-1 < (int)(DAT_14cb7c230 - 1)) {
          iVar6 = DAT_14cb7c230 - 1;
        }
        iVar6 = iVar6 >> 5;
        iVar15 = local_74 + 0x20;
        iVar7 = iVar6;
        if (iVar6 < iVar10) {
          iVar7 = iVar10;
        }
        if (iVar10 < iVar6) {
          lVar16 = 0;
          do {
            uVar5 = puVar13[lVar17 + lVar16 + 1];
            if (uVar5 != 0) {
              uVar11 = (ulonglong)(iVar10 + (int)lVar16 + 1);
              uVar14 = 0xffffffff;
              goto LAB_14082884d;
            }
            iVar15 = iVar15 + 0x20;
            lVar16 = lVar16 + 1;
          } while (iVar7 - lVar17 != lVar16);
          uVar14 = 0xffffffff;
          iVar10 = iVar7;
        }
        uVar11 = (ulonglong)(iVar10 + 1);
        uVar5 = DAT_14cb7c230;
      }
      else {
LAB_14082884d:
        uVar12 = (ulonglong)(-uVar5 & uVar5);
        uVar1 = uVar12 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        uVar5 = (iVar15 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
        if ((int)DAT_14cb7c230 <= (int)uVar5) {
          uVar5 = DAT_14cb7c230;
        }
      }
    } while (uVar5 != (uint)local_88);
  }
LAB_1408288e0:
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140828932 FUN_140828932 body=351 status=ok
// SIG undefined FUN_140828932(void)

undefined8 FUN_140828932(longlong param_1,longlong param_2,undefined8 param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined7 uVar5;
  byte bVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  uint uVar10;
  longlong *plVar11;
  uint uVar12;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  uint local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((((*(int *)(param_2 + 0x10) == 0) || (iVar3 = *(int *)(param_2 + 0x14), iVar3 == 0)) ||
      (*(int *)(param_2 + 0x10) == DAT_14c948000)) || ((iVar3 == 1 || (iVar3 < 2)))) {
    local_20 = DAT_14c948620;
    uVar4 = DAT_14c948618;
  }
  else {
    local_20 = *(uint *)(*(longlong *)(param_2 + 0x28) + 0x14);
    uVar4 = *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0xc);
  }
  plVar11 = (longlong *)(param_1 + 8);
  local_28._0_4_ = (uint)uVar4;
  if (local_20 != 0) {
    uVar2 = local_20 >> 0xd ^ (uint)local_28 - local_20;
    uVar10 = uVar2 << 8 ^ (-0x61c88647 - local_20) - uVar2;
    uVar12 = uVar10 >> 0xd ^ (local_20 - uVar2) - uVar10;
    uVar7 = uVar12 >> 0xc ^ (uVar2 - uVar10) - uVar12;
    uVar2 = uVar7 << 0x10 ^ (uVar10 - uVar12) - uVar7;
    uVar10 = uVar2 >> 5 ^ (uVar12 - uVar7) - uVar2;
    uVar7 = uVar10 >> 3 ^ (uVar7 - uVar2) - uVar10;
    uVar2 = uVar7 << 10 ^ (uVar2 - uVar10) - uVar7;
    local_28._0_4_ = uVar2 >> 0xf ^ uVar10 - (uVar7 + uVar2);
  }
  plVar9 = plVar11;
  uVar2 = (uint)local_28;
  local_28 = uVar4;
  iVar3 = FUN_1411305fa(plVar11,uVar2,&local_28);
  if ((iVar3 == -1) ||
     (lVar8 = (longlong)iVar3 * 0x80 + *plVar11, plVar9 = (longlong *)(lVar8 + 0x10),
     plVar9 == (longlong *)0x0 || lVar8 == 0)) {
    bVar6 = (byte)plVar9;
    bVar1 = 0;
    uVar5 = 0;
  }
  else {
    uVar4 = FUN_145adc612(plVar9,param_3);
    bVar6 = (byte)uVar4;
    uVar5 = (undefined7)((ulonglong)uVar4 >> 8);
    bVar1 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return CONCAT71(uVar5,bVar1 & bVar6);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140828a92 FUN_140828a92 body=2594 status=ok
// SIG undefined FUN_140828a92(void)

void FUN_140828a92(longlong param_1)

{
  void **ppvVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  uint uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  uint *puVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  undefined1 *_Dst;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  void *pvVar19;
  int iVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  int iVar23;
  int iVar24;
  longlong lVar25;
  uint uVar26;
  float fVar27;
  double dVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auStack_198 [32];
  longlong local_178;
  uint local_16c;
  undefined8 local_168;
  undefined8 local_160;
  longlong lStack_158;
  undefined1 auStack_150 [16];
  undefined5 uStack_140;
  undefined3 uStack_13b;
  undefined5 uStack_138;
  undefined1 local_130;
  undefined2 local_12f;
  undefined1 local_12d;
  undefined8 local_128;
  longlong *local_120;
  ulonglong local_118;
  longlong lStack_110;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  void *local_f8;
  undefined8 uStack_f0;
  uint local_e8 [4];
  uint *local_d8;
  int local_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x548);
  ppvVar1 = (void **)(param_1 + 0x40);
  local_d8 = (uint *)0x0;
  local_d0 = 0;
  local_f8 = (void *)0x0;
  uStack_f0 = 0;
  local_cc = 0xffffffff00000080;
  local_c4 = 0;
  local_b8 = (undefined1 *)0x0;
  local_b0 = 0;
  if (&local_f8 == ppvVar1) goto LAB_140828bfc;
  iVar23 = *(int *)(param_1 + 0x88);
  if ((ulonglong)(longlong)iVar23 < 2) {
    if (iVar23 != 0) goto LAB_140828b43;
  }
  else {
    FUN_1446efa72(&local_b8,0,iVar23,4);
LAB_140828b43:
    _Dst = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      _Dst = local_b8;
    }
    pvVar19 = (void *)(param_1 + 0x78);
    if (*(void **)(param_1 + 0x80) != (void *)0x0) {
      pvVar19 = *(void **)(param_1 + 0x80);
    }
    memcpy(_Dst,pvVar19,(longlong)iVar23 << 2);
  }
  uVar26 = *(uint *)(param_1 + 0x48);
  local_b0 = iVar23;
  FUN_1408294b6(&local_f8,uVar26);
  iVar23 = (int)uStack_f0;
  uStack_f0 = CONCAT44(uStack_f0._4_4_,(int)uStack_f0 + uVar26);
  if ((uint)(uStack_f0._4_4_ - iVar23) < uVar26) {
    FUN_1406245f8(&local_f8);
  }
  local_cc = CONCAT44(*(undefined4 *)(param_1 + 0x70),(int)local_cc);
  local_c4 = *(undefined4 *)(param_1 + 0x74);
  iVar23 = *(int *)(param_1 + 0x68);
  uVar8 = iVar23 + 0x1fU & 0xffffffe0;
  local_d0 = 0;
  if (((int)local_cc < (int)uVar8) || (0x80 < (int)local_cc)) {
    uVar15 = 0x80;
    if (0x80 < (int)uVar8) {
      uVar15 = uVar8;
    }
    local_cc = CONCAT44(*(undefined4 *)(param_1 + 0x70),uVar15);
    FUN_1446efbd8(local_e8,0);
    iVar23 = *(int *)(param_1 + 0x68);
  }
  local_d0 = iVar23;
  if (iVar23 != 0) {
    pvVar19 = (void *)(param_1 + 0x50);
    if (*(void **)(param_1 + 0x60) != (void *)0x0) {
      pvVar19 = *(void **)(param_1 + 0x60);
    }
    puVar12 = local_e8;
    if (local_d8 != (uint *)0x0) {
      puVar12 = local_d8;
    }
    memcpy(puVar12,pvVar19,(ulonglong)(iVar23 + 0x1fU >> 3 & 0xfffffffc));
  }
  if (uVar26 != 0) {
    memcpy(local_f8,*ppvVar1,(longlong)(int)uVar26 * 0x1c);
  }
LAB_140828bfc:
  iVar23 = *(int *)(param_1 + 0x88);
  if (iVar23 < 2) {
    lVar18 = param_1 + 0x78;
    if (*(longlong *)(param_1 + 0x80) != 0) {
      lVar18 = *(longlong *)(param_1 + 0x80);
    }
    iVar20 = iVar23 + 3;
    if (-1 < iVar23) {
      iVar20 = iVar23;
    }
    if (*(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x74) < iVar20 >> 2) {
      lVar9 = param_1 + 0x50;
      local_118 = 0x100000000;
      local_108 = 0xffffffff;
      uStack_100 = 0;
      lStack_110 = lVar9;
      if (*(int *)(param_1 + 0x68) == 0) {
        iVar23 = 0;
      }
      else {
        FUN_1449c0562(&local_118);
        iVar23 = *(int *)(param_1 + 0x68);
      }
      local_160 = local_118;
      lStack_158 = lStack_110;
      auVar32._8_4_ = uStack_100;
      auVar32._0_8_ = local_108;
      auVar32._12_4_ = uStack_fc;
      auStack_150._4_4_ = (undefined4)((ulonglong)local_108 >> 0x20);
      iVar20 = auStack_150._4_4_;
      local_168 = ppvVar1;
      if ((auStack_150._4_4_ != iVar23) || (auStack_150 = auVar32, lStack_110 != lVar9)) {
        do {
          auStack_150 = auVar32;
          *(undefined4 *)
           (lVar18 + (longlong)*(int *)((longlong)*local_168 + (longlong)iVar20 * 0x1c + 0x18) * 4)
               = 0xffffffff;
          auStack_150._0_4_ = auStack_150._0_4_ & ~local_160._4_4_;
          FUN_1449c0562(&local_160);
          iVar20 = auStack_150._4_4_;
          auVar32 = auStack_150;
        } while (local_168 != ppvVar1 || (lStack_158 != lVar9 || auStack_150._4_4_ != iVar23));
      }
    }
    else if (iVar23 == 1) {
      lVar9 = 0;
      do {
        *(undefined4 *)(lVar18 + lVar9 * 4) = 0xffffffff;
        lVar9 = lVar9 + 1;
      } while (lVar9 < *(int *)(param_1 + 0x88));
    }
    FUN_1408294b6(ppvVar1,0);
  }
  else {
    FUN_1408294b6(ppvVar1,0);
    *(undefined4 *)(param_1 + 0x88) = 1;
    FUN_1457747e0(ppvVar1);
  }
  iVar23 = local_d0;
  if (local_d0 == 0) {
    uVar22 = 1;
    uVar21 = 0;
    iVar20 = 0;
    iVar24 = 0;
  }
  else {
    puVar12 = local_d8;
    if (local_d8 == (uint *)0x0) {
      puVar12 = local_e8;
    }
    uVar26 = *puVar12;
    if (uVar26 == 0) {
      iVar20 = local_d0 + 0x1e;
      if (-1 < local_d0 + -1) {
        iVar20 = local_d0 + -1;
      }
      uVar21 = 0;
      uVar17 = (ulonglong)(uint)(iVar20 >> 5);
      if (iVar20 >> 5 < 1) {
        uVar17 = uVar21;
      }
      iVar20 = 0;
      do {
        if (uVar17 == uVar21) goto LAB_140828c86;
        iVar20 = iVar20 + 0x20;
        uVar26 = puVar12[uVar21 + 1];
        uVar21 = uVar21 + 1;
      } while (uVar26 == 0);
    }
    else {
      uVar21 = 0;
      iVar20 = 0;
    }
    uVar22 = (ulonglong)(-uVar26 & uVar26);
    uVar17 = uVar22 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    iVar24 = (iVar20 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
    if (local_d0 <= iVar24) {
      iVar24 = local_d0;
    }
  }
  if (iVar24 != local_d0) {
    uVar26 = 0xffffffff;
    local_178 = lVar11;
    do {
      pvVar19 = local_f8;
      lVar11 = (longlong)iVar24 * 0x1c;
      lVar18 = (ulonglong)*(ushort *)((longlong)local_f8 + lVar11) * 0x128;
      local_128 = *(undefined8 *)(*(longlong *)(local_178 + 8) + 0x100 + lVar18);
      plVar4 = *(longlong **)(*(longlong *)(local_178 + 8) + 0x108 + lVar18);
      local_16c = uVar26;
      if (plVar4 == (longlong *)0x0) {
        local_120 = (longlong *)0x0;
        plVar10 = (longlong *)FUN_140165676();
      }
      else {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        local_120 = plVar4;
        plVar10 = (longlong *)FUN_140165676(&local_128);
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
      if ((plVar10 != (longlong *)0x0) &&
         (lVar18 = (**(code **)(*plVar10 + 0x20))(plVar10), lVar18 != 0)) {
        lVar9 = FUN_140b3f272();
        if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar18 + 0x10) + 0x38)) &&
           (((*(longlong *)
               (*(longlong *)(*(longlong *)(lVar18 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar9 + 0x38) * 8) == lVar9 + 0x30 &&
             (*(longlong **)(lVar18 + 0x298) != (longlong *)0x0)) &&
            (lVar9 = (**(code **)(**(longlong **)(lVar18 + 0x298) + 0x2e8))(), lVar9 != 0)))) {
          lVar5 = *(longlong *)(lVar9 + 0x118);
          lVar9 = *(longlong *)(lVar9 + 0x120);
          lVar16 = *(longlong *)((longlong)pvVar19 + lVar11 + 4);
          fVar27 = (float)((ulonglong)lVar16 >> 0x20);
          if (lVar5 == lVar9) {
            lVar11 = *(longlong *)((longlong)pvVar19 + lVar11 + 0xc);
            fVar29 = (float)((ulonglong)lVar11 >> 0x20);
          }
          else {
            lVar25 = (lVar5 >> 0x20) * (longlong)(int)lVar9;
            local_118 = (longlong)(int)lVar5 * (lVar9 >> 0x20);
            lVar9 = (lVar25 * (int)lVar16) / (longlong)local_118;
            dVar28 = ((double)fVar27 * (double)lVar25) / (double)(longlong)local_118 +
                     (((double)lVar25 * (double)(int)lVar16) / (double)(longlong)local_118 -
                     (double)lVar9);
            auVar31._8_8_ = 0;
            auVar31._0_8_ = dVar28;
            auVar32 = roundpd(auVar31,auVar31,1);
            fVar29 = (float)(dVar28 - auVar32._0_8_);
            lVar16 = (longlong)auVar32._0_8_ + lVar9;
            fVar27 = fVar29;
            if (0.99999994 <= fVar29) {
              fVar27 = 0.99999994;
            }
            if (0x7ffffffe < lVar16) {
              lVar16 = 0x7fffffff;
            }
            if (lVar16 < -0x7fffffff) {
              lVar16 = -0x80000000;
            }
            fVar27 = (float)(~-(uint)(0.0 < fVar29) & (uint)fVar29 |
                            (uint)fVar27 & -(uint)(0.0 < fVar29)) + 0.5 + -0.5;
            if (0.99999994 <= fVar27) {
              fVar27 = 0.99999994;
            }
            if (fVar27 <= 0.0) {
              fVar27 = 0.0;
            }
            uVar6 = *(undefined8 *)((longlong)pvVar19 + lVar11 + 0xc);
            iVar24 = (int)uVar6;
            lVar11 = (lVar25 * iVar24) / (longlong)local_118;
            dVar28 = ((double)(float)((ulonglong)uVar6 >> 0x20) * (double)lVar25) /
                     (double)(longlong)local_118 +
                     (((double)lVar25 * (double)iVar24) / (double)(longlong)local_118 -
                     (double)lVar11);
            auVar34._8_8_ = 0;
            auVar34._0_8_ = dVar28;
            auVar32 = roundpd(auVar34,auVar34,1);
            lVar11 = (longlong)auVar32._0_8_ + lVar11;
            fVar33 = (float)(dVar28 - auVar32._0_8_);
            fVar29 = fVar33;
            if (0.99999994 <= fVar33) {
              fVar29 = 0.99999994;
            }
            if (0x7ffffffe < lVar11) {
              lVar11 = 0x7fffffff;
            }
            if (lVar11 < -0x7fffffff) {
              lVar11 = -0x80000000;
            }
            fVar29 = (float)(~-(uint)(0.0 < fVar33) & (uint)fVar33 |
                            (uint)fVar29 & -(uint)(0.0 < fVar33)) + 0.5 + -0.5;
            if (0.99999994 <= fVar29) {
              fVar29 = 0.99999994;
            }
            if (fVar29 <= 0.0) {
              fVar29 = 0.0;
            }
          }
          fVar29 = *(float *)(lVar18 + 800) - fVar29;
          auVar32 = roundps(ZEXT416((uint)fVar29),ZEXT416((uint)fVar29),1);
          iVar24 = (*(int *)(lVar18 + 0x31c) - (int)lVar11) + (int)auVar32._0_4_;
          fVar29 = (fVar29 - auVar32._0_4_) + 0.5 + -0.5;
          if (0.99999994 <= fVar29) {
            fVar29 = 0.99999994;
          }
          fVar33 = fVar29;
          if (fVar29 <= 0.0) {
            fVar33 = 0.0;
          }
          iVar13 = 0;
          fVar30 = 0.0;
          if (0.0 < fVar29) {
            iVar13 = iVar24;
            fVar30 = fVar33;
          }
          if (iVar24 != 0) {
            iVar13 = 0;
            fVar30 = 0.0;
          }
          if (0 < iVar24) {
            iVar13 = iVar24;
            fVar30 = fVar33;
          }
          fVar30 = fVar30 + fVar27;
          auVar32 = roundss(ZEXT416(0),ZEXT416((uint)fVar30),9);
          fVar27 = (fVar30 - auVar32._0_4_) + 0.5 + -0.5;
          auVar32 = ZEXT416((uint)fVar27);
          if (0.99999994 <= fVar27) {
            auVar32 = ZEXT416(0x3f7fffff);
          }
          if (auVar32._0_4_ <= 0.0) {
            auVar7._12_4_ = 0;
            auVar7._0_12_ = auVar32._4_12_;
            auVar32 = auVar7 << 0x20;
          }
          local_168 = (void **)CONCAT44(auVar32._0_4_,
                                        iVar13 + (int)lVar16 +
                                        ((int)ROUND(fVar30 + fVar30 + -0.5) >> 1));
          local_160 = local_160 & 0xffffffff00000000;
          local_130 = 0;
          lStack_158 = 0;
          auStack_150 = ZEXT816(0);
          uStack_140 = 0;
          uStack_13b = 0;
          uStack_138 = 0;
          local_12f = 1;
          local_12d = 0;
          FUN_14082956a(lVar18 + 0x5c0,&local_168);
          if (lStack_158 != 0) {
            FUN_1400020a8();
          }
        }
      }
      uVar26 = local_16c & ~(uint)uVar22;
      puVar12 = local_d8;
      if (local_d8 == (uint *)0x0) {
        puVar12 = local_e8;
      }
      iVar24 = (int)uVar21;
      lVar11 = (longlong)iVar24;
      uVar8 = puVar12[lVar11] & uVar26;
      if (uVar8 == 0) {
        iVar13 = local_d0 + 0x1e;
        if (-1 < local_d0 + -1) {
          iVar13 = local_d0 + -1;
        }
        iVar13 = iVar13 >> 5;
        iVar20 = iVar20 + 0x20;
        iVar14 = iVar13;
        if (iVar13 < iVar24) {
          iVar14 = iVar24;
        }
        if (iVar24 < iVar13) {
          lVar18 = 0;
          do {
            uVar8 = puVar12[lVar11 + lVar18 + 1];
            if (uVar8 != 0) {
              uVar21 = (ulonglong)(iVar24 + (int)lVar18 + 1);
              uVar26 = 0xffffffff;
              goto LAB_1408291d8;
            }
            iVar20 = iVar20 + 0x20;
            lVar18 = lVar18 + 1;
          } while (iVar14 - lVar11 != lVar18);
          uVar26 = 0xffffffff;
          iVar24 = iVar14;
        }
        uVar21 = (ulonglong)(iVar24 + 1);
        iVar24 = local_d0;
      }
      else {
LAB_1408291d8:
        uVar22 = (ulonglong)(-uVar8 & uVar8);
        uVar17 = uVar22 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar17 != 0) {
          for (; uVar17 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar24 = (iVar20 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if (local_d0 <= iVar24) {
          iVar24 = local_d0;
        }
      }
    } while (iVar24 != iVar23);
  }
LAB_140828c86:
  local_b0 = 0;
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140829532(&local_f8);
  if ((local_a0 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1408294b6 FUN_1408294b6 body=123 status=ok
// SIG undefined FUN_1408294b6(void)

void FUN_1408294b6(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_140411364(param_1,param_2);
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



// FUNCTION 140829532 FUN_140829532 body=55 status=ok
// SIG undefined FUN_140829532(void)

void FUN_140829532(longlong *param_1)

{
  FUN_1408294b6(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14082956a FUN_14082956a body=174 status=ok
// SIG undefined FUN_14082956a(void)

bool FUN_14082956a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  *puVar6 = 0;
  puVar6[1] = *param_2;
  *(undefined4 *)(puVar6 + 2) = *(undefined4 *)(param_2 + 1);
  puVar6[3] = 0;
  iVar1 = *(int *)(param_2 + 3);
  _Src = (void *)param_2[2];
  *(int *)(puVar6 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar6 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(puVar6 + 3,iVar1,0);
    memcpy((void *)puVar6[3],_Src,(longlong)iVar1 * 2);
  }
  uVar3 = param_2[4];
  uVar4 = param_2[5];
  uVar5 = *(undefined8 *)((longlong)param_2 + 0x34);
  *(undefined8 *)((longlong)puVar6 + 0x34) = *(undefined8 *)((longlong)param_2 + 0x2c);
  *(undefined8 *)((longlong)puVar6 + 0x3c) = uVar5;
  puVar6[5] = uVar3;
  puVar6[6] = uVar4;
  if (puVar6 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*param_1;
    *param_1 = puVar6;
    *puVar2 = puVar6;
  }
  return puVar6 != (undefined8 *)0x0;
}



// FUNCTION 140829618 FUN_140829618 body=348 status=ok
// SIG undefined FUN_140829618(void)

void FUN_140829618(longlong param_1,longlong param_2,longlong param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  void *_Src;
  longlong *plVar1;
  char cVar2;
  void *_Dst;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x388);
  EnterCriticalSection(lpCriticalSection);
  if ((DAT_14cace940 == 0) && ((*(byte *)(param_1 + 0x25c) & 2) != 0)) {
    if ((0 < *(int *)(param_1 + 0x380)) && (**(longlong **)(param_1 + 0x378) != 0)) {
      FUN_140829776(**(longlong **)(param_1 + 0x378),param_2,param_3);
    }
  }
  else {
    do {
      param_1 = *(longlong *)(param_1 + 0x40);
      if (param_1 == 0) goto LAB_140829682;
    } while ((*(uint *)(param_1 + 0xd4) & 0x10000080) == 0);
    local_40 = *(longlong **)(param_1 + 0x50);
    local_38 = 0xffffffff;
    local_34 = 0x101;
    local_32 = 0;
    local_48 = param_1;
    FUN_144a2daf0(&local_48);
    if (local_40 != (longlong *)0x0) {
      do {
        plVar1 = local_40;
        cVar2 = FUN_140380490(local_40);
        if ((cVar2 != '\0') && (param_2 != param_3)) {
          _Src = (void *)(param_3 + *(int *)((longlong)plVar1 + 0x44));
          _Dst = (void *)(*(int *)((longlong)plVar1 + 0x44) + param_2);
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,_Dst,_Src,(int)plVar1[6]);
          }
          else {
            memcpy(_Dst,_Src,(longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34))
            ;
          }
        }
        local_40 = (longlong *)local_40[3];
        FUN_144a2daf0(&local_48);
      } while (local_40 != (longlong *)0x0);
    }
  }
LAB_140829682:
  LeaveCriticalSection(lpCriticalSection);
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140829776 FUN_140829776 body=144 status=ok
// SIG undefined FUN_140829776(void)

void FUN_140829776(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  void *_Src;
  void *_Dst;
  
  do {
    lVar1 = *param_1;
    lVar4 = (longlong)*(int *)(lVar1 + 0x34) * (longlong)(int)param_1[1];
    _Dst = (void *)(param_2 + *(int *)(lVar1 + 0x44) + lVar4);
    _Src = (void *)(*(int *)(lVar1 + 0x44) + param_3 + lVar4);
    cVar3 = FUN_140829806(lVar1,param_1[2],_Dst,_Src);
    if ((cVar3 == '\0') && (param_2 != param_3)) {
      plVar2 = (longlong *)*param_1;
      if ((*(byte *)((longlong)plVar2 + 0x3b) & 0x40) == 0) {
        (**(code **)(*plVar2 + 0x100))(plVar2,_Dst,_Src,1);
      }
      else {
        memcpy(_Dst,_Src,(longlong)*(int *)((longlong)plVar2 + 0x34));
      }
    }
    param_1 = (longlong *)param_1[3];
  } while (param_1 != (longlong *)0x0);
  return;
}



// FUNCTION 140829806 FUN_140829806 body=1875 status=ok
// SIG undefined FUN_140829806(void)

undefined8 FUN_140829806(longlong param_1,longlong *param_2,ulonglong *param_3,ulonglong *param_4)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  ulonglong *puVar5;
  uint uVar6;
  byte bVar7;
  int iVar8;
  undefined *puVar9;
  void *pvVar10;
  ulonglong uVar11;
  longlong lVar12;
  void *pvVar13;
  longlong lVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined *local_a8;
  code *local_a0;
  byte local_91;
  ulonglong *local_90;
  longlong local_88;
  int local_80;
  undefined4 local_7c;
  longlong *local_78;
  ulonglong *local_70;
  int local_68;
  undefined4 local_64;
  byte local_60;
  longlong **local_58;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_1 == 0 || param_2 == (longlong *)0x0) goto LAB_14082983e;
  puVar9 = *(undefined **)(param_1 + 8);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c952a58) && (FUN_144b3d300(&DAT_14c952a58), DAT_14c952a58 == -1)) {
    local_a8 = (undefined *)FUN_1446ddbd2();
    local_a0 = FUN_1403a682c;
    local_b0 = 0;
    local_b8 = 0x108001;
    FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
    atexit(FUN_142818c9e);
    _Init_thread_footer(&DAT_14c952a58);
  }
  if (DAT_14c952a10 == 0) {
    bVar16 = puVar9 != (undefined *)0x0;
    if (puVar9 != &DAT_14c952a08 && bVar16) {
      do {
        puVar9 = *(undefined **)(puVar9 + 0x30);
        bVar16 = puVar9 != (undefined *)0x0;
        if (puVar9 == &DAT_14c952a08) break;
      } while (puVar9 != (undefined *)0x0);
    }
    if (!bVar16) goto LAB_1408298ba;
LAB_140829ce9:
    FUN_140829776(param_2,param_3,param_4);
LAB_140829a90:
    uVar4 = 1;
  }
  else {
    if ((*(ulonglong *)(puVar9 + 0x18) & DAT_14c952a10) != 0) goto LAB_140829ce9;
LAB_1408298ba:
    puVar9 = *(undefined **)(param_1 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951ae0) && (FUN_144b3d300(&DAT_14c951ae0), DAT_14c951ae0 == -1)) {
      FUN_1446ddbd2();
      local_a0 = FUN_140b31576;
      local_a8 = &DAT_14c951a38;
      local_b0 = 0;
      local_b8 = 0x208001;
      FUN_14000176a(&DAT_14c951a90,L"FArrayProperty",0x200000,0);
      atexit(FUN_14280cbf7);
      _Init_thread_footer(&DAT_14c951ae0);
    }
    if (DAT_14c951a98 == 0) {
      bVar16 = puVar9 != (undefined *)0x0;
      if (puVar9 != &DAT_14c951a90 && bVar16) {
        do {
          puVar9 = *(undefined **)(puVar9 + 0x30);
          bVar16 = puVar9 != (undefined *)0x0;
          if (puVar9 == &DAT_14c951a90) break;
        } while (puVar9 != (undefined *)0x0);
      }
      if (bVar16) goto LAB_1408298fd;
    }
    else if ((*(ulonglong *)(puVar9 + 0x18) & DAT_14c951a98) != 0) {
LAB_1408298fd:
      bVar7 = *(byte *)(param_1 + 0x70);
      local_7c = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x178))();
      plVar2 = *(longlong **)(param_1 + 0x78);
      local_68 = *(int *)((longlong)plVar2 + 0x34);
      lVar12 = (longlong)local_68;
      local_91 = *(byte *)(param_1 + 0x70);
      local_78 = plVar2;
      local_70 = param_3;
      local_64 = local_7c;
      local_60 = bVar7;
      (**(code **)(*plVar2 + 0x178))(plVar2);
      local_88 = (longlong)*(int *)(*(longlong *)(param_1 + 0x78) + 0x34);
      iVar8 = (int)param_4[1];
      iVar1 = (int)param_3[1];
      local_90 = param_4;
      local_80 = iVar8;
      if (iVar1 < iVar8) {
        uVar6 = iVar8 - iVar1;
        *(int *)(param_3 + 1) = iVar8;
        if ((bVar7 & 1) == 0) {
          if (*(int *)((longlong)param_3 + 0xc) < iVar8) {
            FUN_14097bbd2();
          }
        }
        else if (*(int *)((longlong)param_3 + 0xc) < iVar8) {
          FUN_1468c03c2();
        }
        if (0 < (int)uVar6) {
          if ((int)param_3[1] == 0) {
            pvVar13 = (void *)0x0;
          }
          else {
            if ((bVar7 & 1) == 0) {
              uVar11 = *param_3;
            }
            else {
              uVar11 = *param_3;
              if ((uVar11 & 1) != 0) {
                uVar11 = (longlong)param_3 + ((longlong)uVar11 >> 0x18);
              }
            }
            pvVar13 = (void *)(iVar1 * lVar12 + uVar11);
          }
          if ((*(byte *)((longlong)plVar2 + 0x39) & 2) == 0) {
            do {
              if ((*(byte *)((longlong)plVar2 + 0x39) & 2) == 0) {
                (**(code **)(*plVar2 + 0x160))();
              }
              else {
                memset(pvVar13,0,
                       (longlong)(int)plVar2[6] * (longlong)*(int *)((longlong)plVar2 + 0x34));
              }
              pvVar13 = (void *)((longlong)pvVar13 + lVar12);
              uVar6 = uVar6 - 1;
            } while (uVar6 != 0);
          }
          else {
            memset(pvVar13,0,lVar12 * (ulonglong)uVar6);
          }
        }
      }
      else if (iVar8 < iVar1) {
        FUN_143419704(&local_78,iVar8);
        local_58 = &local_78;
        local_50 = iVar8;
        local_4c = iVar1 - iVar8;
        FUN_140eff44e();
      }
      do {
        iVar8 = (int)param_2[1];
        lVar12 = (longlong)iVar8;
        if (*param_2 == 0) break;
        if ((int)local_70[1] == 0) {
          pvVar13 = (void *)0x0;
        }
        else {
          if ((local_60 & 1) == 0) {
            uVar11 = *local_70;
          }
          else {
            uVar11 = *local_70;
            if ((uVar11 & 1) != 0) {
              uVar11 = (longlong)local_70 + ((longlong)uVar11 >> 0x18);
            }
          }
          pvVar13 = (void *)(local_68 * lVar12 + uVar11);
        }
        if ((int)local_90[1] == 0) {
          pvVar10 = (void *)0x0;
        }
        else {
          if ((local_91 & 1) == 0) {
            uVar11 = *local_90;
          }
          else {
            uVar11 = *local_90;
            if ((uVar11 & 1) != 0) {
              uVar11 = ((longlong)uVar11 >> 0x18) + (longlong)local_90;
            }
          }
          pvVar10 = (void *)(lVar12 * local_88 + uVar11);
        }
        if ((((pvVar13 != (void *)0x0 || pvVar10 != (void *)0x0) && (-1 < iVar8)) &&
            (iVar8 < (int)local_90[1])) &&
           ((cVar3 = FUN_140829806(), cVar3 == '\0' && (pvVar13 != pvVar10)))) {
          plVar2 = *(longlong **)(param_1 + 0x78);
          if ((*(byte *)((longlong)plVar2 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar2 + 0x100))();
          }
          else {
            memcpy(pvVar13,pvVar10,
                   (longlong)(int)plVar2[6] * (longlong)*(int *)((longlong)plVar2 + 0x34));
          }
        }
        param_2 = (longlong *)param_2[3];
      } while (param_2 != (longlong *)0x0);
      if (iVar8 < local_80) {
        if ((*(byte *)(*(longlong *)(param_1 + 0x78) + 0x3b) & 0x40) == 0) {
          iVar8 = local_80 - iVar8;
          lVar14 = lVar12 * local_88;
          puVar5 = local_90;
          lVar15 = local_88;
          bVar7 = local_91;
          do {
            if ((int)local_70[1] == 0) {
              pvVar13 = (void *)0x0;
            }
            else {
              if ((local_60 & 1) == 0) {
                uVar11 = *local_70;
              }
              else {
                uVar11 = *local_70;
                puVar5 = local_90;
                lVar15 = local_88;
                bVar7 = local_91;
                if ((uVar11 & 1) != 0) {
                  uVar11 = (longlong)local_70 + ((longlong)uVar11 >> 0x18);
                }
              }
              pvVar13 = (void *)(local_68 * lVar12 + uVar11);
            }
            if ((int)puVar5[1] == 0) {
              pvVar10 = (void *)0x0;
            }
            else {
              if ((bVar7 & 1) == 0) {
                uVar11 = *puVar5;
              }
              else {
                uVar11 = *puVar5;
                puVar5 = local_90;
                lVar15 = local_88;
                bVar7 = local_91;
                if ((uVar11 & 1) != 0) {
                  uVar11 = ((longlong)uVar11 >> 0x18) + (longlong)local_90;
                }
              }
              pvVar10 = (void *)(uVar11 + lVar14);
            }
            if ((pvVar13 != (void *)0x0 || pvVar10 != (void *)0x0) && (pvVar13 != pvVar10)) {
              plVar2 = *(longlong **)(param_1 + 0x78);
              if ((*(byte *)((longlong)plVar2 + 0x3b) & 0x40) == 0) {
                (**(code **)(*plVar2 + 0x100))();
              }
              else {
                memcpy(pvVar13,pvVar10,
                       (longlong)(int)plVar2[6] * (longlong)*(int *)((longlong)plVar2 + 0x34));
              }
            }
            lVar12 = lVar12 + 1;
            lVar14 = lVar14 + lVar15;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
        else {
          if ((int)local_70[1] == 0) {
            pvVar13 = (void *)0x0;
          }
          else {
            if ((local_60 & 1) == 0) {
              uVar11 = *local_70;
            }
            else {
              uVar11 = *local_70;
              if ((uVar11 & 1) != 0) {
                uVar11 = (longlong)local_70 + ((longlong)uVar11 >> 0x18);
              }
            }
            pvVar13 = (void *)(local_68 * lVar12 + uVar11);
          }
          if ((int)local_90[1] == 0) {
            puVar5 = (ulonglong *)0x0;
          }
          else {
            if ((local_91 & 1) == 0) {
              puVar5 = (ulonglong *)*local_90;
            }
            else {
              puVar5 = (ulonglong *)*local_90;
              if (((ulonglong)puVar5 & 1) != 0) {
                puVar5 = (ulonglong *)((longlong)local_90 + ((longlong)puVar5 >> 0x18));
              }
            }
            local_90 = puVar5;
            puVar5 = (ulonglong *)(lVar12 * local_88 + (longlong)local_90);
          }
          memcpy(pvVar13,puVar5,
                 (longlong)(local_80 - iVar8) *
                 (longlong)*(int *)(*(longlong *)(param_1 + 0x78) + 0x34));
        }
      }
      goto LAB_140829a90;
    }
LAB_14082983e:
    uVar4 = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 140829f70 FUN_140829f70 body=589 status=ok
// SIG undefined FUN_140829f70(void)

void FUN_140829f70(longlong *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_158 [40];
  undefined1 local_130 [4];
  undefined4 local_12c;
  longlong local_120;
  longlong lStack_118;
  longlong local_110;
  longlong local_108;
  longlong lStack_100;
  longlong local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_8c;
  byte local_83;
  undefined1 local_78 [24];
  undefined4 local_60;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if ((param_1[0x10] == 0) ||
     (*(float *)((longlong)param_1 + 0x31c) <= *(float *)(param_1 + 0x65) &&
      *(float *)(param_1 + 0x65) != *(float *)((longlong)param_1 + 0x31c))) {
    uVar1 = 0x100;
    if (((double)param_1[0x5c] == 0.0) &&
       (((!NAN((double)param_1[0x5c]) && ((double)param_1[0x5d] == 0.0)) &&
        (!NAN((double)param_1[0x5d]))))) {
      uVar1 = (-(uint)((double)param_1[0x5e] != 0.0) & 1) << 8;
    }
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xfffffeff | uVar1;
    goto LAB_14082a13a;
  }
  uVar1 = *(uint *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = uVar1 & 0xfffffeff;
  if ((uVar1 & 4) != 0) goto LAB_14082a13a;
  if ((((double)param_1[0x5c] == 0.0) && (!NAN((double)param_1[0x5c]))) &&
     (((double)param_1[0x5d] == 0.0 && (!NAN((double)param_1[0x5d]))))) {
    if (((double)param_1[0x5e] == 0.0) && (!NAN((double)param_1[0x5e]))) goto LAB_14082a13a;
  }
  uVar3 = 0;
  memset(local_130,0,0x100);
  local_60 = 0xffffffff;
  local_12c = 0x3f800000;
  local_8c = 0xffffffff;
  if ((char)param_1[0x5b] == '\x01') {
    if (*(int *)((longlong)param_1 + 0x364) == 0) {
LAB_14082a163:
      uVar3 = 0;
    }
    else {
      uVar1 = *(uint *)(param_1 + 0x6c);
      uVar3 = 0;
      if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
        puVar2 = (undefined8 *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if ((puVar2 == (undefined8 *)0x0) ||
           ((*(int *)(puVar2 + 2) != *(int *)((longlong)param_1 + 0x364) ||
            ((*(uint *)(puVar2 + 1) & 0x10200000) != 0)))) goto LAB_14082a163;
        uVar3 = *puVar2;
      }
    }
  }
  FUN_140871de8(local_78,uVar3);
  local_83 = local_83 & 0xfe | *(byte *)(param_1 + 0x5b);
  local_f8 = param_1[0x5e];
  local_108 = param_1[0x5c];
  lStack_100 = param_1[0x5d];
  local_120 = param_1[0x5c];
  lStack_118 = param_1[0x5d];
  local_110 = param_1[0x5e];
  local_c8 = DAT_14c8462d0;
  local_d8 = CONCAT44(DAT_14c8462c0._4_4_,(undefined4)DAT_14c8462c0);
  uStack_d0 = CONCAT44(DAT_14c8462c8._4_4_,(undefined4)DAT_14c8462c8);
  local_e0 = DAT_14c8462d0;
  local_f0 = (undefined4)DAT_14c8462c0;
  uStack_ec = DAT_14c8462c0._4_4_;
  uStack_e8 = (undefined4)DAT_14c8462c8;
  uStack_e4 = DAT_14c8462c8._4_4_;
  (**(code **)(*param_1 + 0x368))(param_1,local_130,1);
LAB_14082a13a:
  if ((local_30 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14082a1be FUN_14082a1be body=3428 status=ok
// SIG undefined FUN_14082a1be(void)

void FUN_14082a1be(longlong *param_1,longlong param_2,char param_3)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  byte bVar8;
  char cVar9;
  int iVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong *plVar17;
  bool bVar18;
  ulonglong uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 auStack_268 [32];
  byte local_248;
  undefined8 *local_240;
  undefined4 local_238;
  undefined8 local_228;
  undefined8 uStack_220;
  double local_218;
  longlong local_210;
  undefined8 local_208;
  longlong *plStack_200;
  double local_1f8;
  double dStack_1f0;
  longlong local_1e8;
  longlong lStack_1e0;
  longlong local_1d8;
  longlong lStack_1d0;
  undefined8 local_1c8;
  undefined4 uStack_1c0;
  uint uStack_1bc;
  double local_1b8;
  undefined1 auStack_1b0 [16];
  double local_1a0;
  longlong local_198 [4];
  longlong local_178;
  undefined8 local_168;
  longlong local_158;
  undefined4 local_150;
  undefined4 uStack_14c;
  int iStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  longlong local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_268;
  local_1c8 = (double)CONCAT44(local_1c8._4_4_,(undefined4)local_1c8);
  if (param_1[0x10] == 0) goto LAB_14082a536;
  if (param_3 != '\0') {
    *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) | 4;
  }
  lVar11 = FUN_14485cccc();
  local_218 = *(double *)(param_2 + 0x20);
  local_228 = *(double *)(param_2 + 0x10);
  uStack_220 = *(double *)(param_2 + 0x18);
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    lVar13 = param_1[4];
  }
  else {
    lVar13 = 0;
  }
  if (*(char *)(lVar13 + 0x178) == '\x03') {
    bVar8 = *(byte *)(param_2 + 0xad) & 1;
    if (bVar8 == 0) {
LAB_14082a9f6:
      if (((*(byte *)(param_1 + 0x20) & 0x10) != 0) &&
         ((param_1[0x4f] != 0 || (param_1[0x50] != 0)))) {
        FUN_14028e00e();
        dVar22 = (double)param_1[0x58] * (double)CONCAT44(local_1c8._4_4_,(undefined4)local_1c8);
        dVar23 = (double)param_1[0x59] * (double)CONCAT44(uStack_1bc,uStack_1c0);
        dVar5 = (double)param_1[0x5a] * local_1b8;
        dVar25 = dVar23 * local_208 - dVar22 * (double)plStack_200;
        dVar21 = dVar5 * (double)plStack_200 - dVar23 * local_1f8;
        dVar20 = dVar22 * local_1f8 - local_208 * dVar5;
        dVar21 = dVar21 + dVar21;
        dVar20 = dVar20 + dVar20;
        dVar25 = dVar25 + dVar25;
        dVar6 = (double)*(float *)(param_1[0x10] + 0x460);
        local_228 = ((dVar25 * (double)plStack_200 - dVar20 * local_1f8) +
                    dStack_1f0 * dVar21 + dVar22) * dVar6 + local_228;
        uStack_220 = ((local_1f8 * dVar21 - local_208 * dVar25) + dStack_1f0 * dVar20 + dVar23) *
                     dVar6 + uStack_220;
        local_218 = (dVar25 * dStack_1f0 + dVar5 +
                    (dVar20 * local_208 - dVar21 * (double)plStack_200)) * dVar6 + local_218;
        bVar8 = *(byte *)(param_2 + 0xad) & 1;
      }
    }
    else {
      dVar5 = *(double *)(param_2 + 0x58);
      dVar6 = *(double *)(param_2 + 0x60);
      dVar25 = *(double *)(param_2 + 0x68);
      if (((((dVar5 == 0.0) && (!NAN(dVar5))) && (dVar6 == 0.0)) &&
          ((!NAN(dVar6) && (dVar25 == 0.0)))) && (!NAN(dVar25))) goto LAB_14082a9f6;
      dVar20 = (double)*(float *)(param_1[0x10] + 0x460);
      local_228 = dVar5 * dVar20 + local_228;
      uStack_220 = dVar6 * dVar20 + uStack_220;
      local_218 = dVar25 * dVar20 + local_218;
      bVar8 = 1;
    }
    *(byte *)(param_1 + 0x5b) = bVar8;
    *(undefined4 *)(param_1 + 0x5c) = (undefined4)local_228;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = local_228._4_4_;
    *(undefined4 *)(param_1 + 0x5d) = (undefined4)uStack_220;
    *(undefined4 *)((longlong)param_1 + 0x2ec) = uStack_220._4_4_;
    param_1[0x5e] = (longlong)local_218;
    *(int *)((longlong)param_1 + 0x5c) = *(int *)((longlong)param_1 + 0x5c) + 1;
    if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
      plVar17 = (longlong *)param_1[4];
    }
    else {
      plVar17 = (longlong *)0x0;
    }
    *(int *)(plVar17 + 0x92) = (int)plVar17[0x92] + 1;
    (**(code **)(*plVar17 + 0x578))();
  }
  local_248 = *(byte *)(param_1[0x10] + 0x378);
  local_1c8 = (double)CONCAT44(local_1c8._4_4_,(undefined4)local_1c8);
  if (((((*(byte *)(param_1 + 0x20) & 0x10) != 0) &&
       (local_1c8 = (double)CONCAT44(local_1c8._4_4_,(undefined4)local_1c8),
       (*(byte *)(param_2 + 0xad) & 1) == 0)) &&
      (lVar13 = param_1[0x4f], local_1c8 = (double)CONCAT44(local_1c8._4_4_,(undefined4)local_1c8),
      lVar13 != 0)) &&
     (local_1c8 = (double)CONCAT44(local_1c8._4_4_,(undefined4)local_1c8),
     (*(byte *)(lVar13 + 0x62) & 4) != 0)) {
    memset(&local_208,0,0x100);
    local_138 = CONCAT44(local_138._4_4_,0xffffffff);
    local_208 = (double)CONCAT44(0x3f800000,(undefined4)local_208);
    local_168 = (longlong *)CONCAT44(0xffffffff,(undefined4)local_168);
    FUN_140871de8(&local_f8,lVar13);
    local_150 = local_f8;
    uStack_14c = uStack_f4;
    iStack_148 = iStack_f0;
    uStack_144 = uStack_ec;
    uStack_140 = local_e8;
    uStack_13c = uStack_e4;
    local_138 = CONCAT44(uStack_dc,uStack_e0);
    lVar11 = 0;
    if (param_1[0x50] != 0) {
      lVar14 = FUN_144a3a302();
      lVar3 = param_1[0x50];
      if (lVar3 == 0) {
LAB_14082ab6d:
        lVar11 = 0;
      }
      else {
        lVar11 = 0;
        if ((lVar14 != 0) && (lVar4 = *(longlong *)(lVar3 + 0x10), lVar4 != 0)) {
          if (*(int *)(lVar4 + 0x38) < *(int *)(lVar14 + 0x38)) goto LAB_14082ab6d;
          lVar11 = 0;
          if (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar14 + 0x38) * 8) ==
              lVar14 + 0x30) {
            lVar11 = lVar3;
          }
        }
      }
    }
    FUN_14485c47a(&uStack_130,lVar11);
    local_118 = param_1[0x51];
    lStack_1e0 = param_1[0x7c];
    local_1d8 = param_1[0x7d];
    lStack_1d0 = param_1[0x7e];
    local_1f8 = (double)param_1[0x7c];
    dStack_1f0 = (double)param_1[0x7d];
    local_1e8 = param_1[0x7e];
    FUN_14028d844(param_1 + 0x4f,&local_f8);
    dVar22 = (double)CONCAT44(uStack_e4,local_e8);
    dVar25 = (double)CONCAT44(uStack_f4,local_f8);
    dVar20 = (double)CONCAT44(uStack_ec,iStack_f0);
    dVar21 = dVar22 - dVar25 * 0.0;
    dVar24 = dVar25 * 0.0 - dVar20;
    dVar5 = dVar20 * 0.0 + dVar22 * -0.0;
    dVar24 = dVar24 + dVar24;
    dVar21 = dVar21 + dVar21;
    dVar5 = dVar5 + dVar5;
    dVar23 = (double)CONCAT44(uStack_dc,uStack_e0);
    dVar6 = (dVar22 * dVar5 - dVar24 * dVar25) + dVar23 * dVar21 + 0.0;
    local_1b8 = -((dVar25 * dVar21 - dVar5 * dVar20) + dVar23 * dVar24 + 0.0);
    local_1c8 = -((dVar20 * dVar24 - dVar21 * dVar22) + dVar23 * dVar5 + 1.0);
    uStack_1bc = (uint)((ulonglong)dVar6 >> 0x20) ^ 0x80000000;
    uStack_1c0 = SUB84(dVar6,0);
    auStack_1b0._8_4_ = uStack_1c0;
    auStack_1b0._0_8_ = local_1c8;
    auStack_1b0._12_4_ = uStack_1bc;
    local_1a0 = local_1b8;
    if ((*(byte *)((longlong)param_1 + 0x103) & 2) == 0) {
LAB_14082a9c2:
      uVar19 = (ulonglong)*(uint *)(param_1 + 0x11);
    }
    else {
      lVar11 = FUN_14082ce84(param_1[0x10] + 0x3f8);
      if (lVar11 == 0) goto LAB_14082a9c2;
      uVar19 = FUN_14074d5ce(lVar11,lVar13,0);
    }
    local_240 = (undefined8 *)0x0;
    local_248 = 0;
    (**(code **)(*param_1 + 0x3e0))(param_1,&local_208,uVar19,0);
    local_248 = 1;
    lVar11 = lVar13;
  }
  local_248 = local_248 & 1;
  (**(code **)(*param_1 + 0x3f0))(param_1,&local_228,lVar11,param_2);
  lVar11 = param_1[0x10];
  dVar5 = local_1c8;
  if (((*(longlong *)(lVar11 + 0x3f8) == 0) || (0xfffffffd < *(int *)(lVar11 + 0x400) - 1U)) &&
     (*(longlong *)(lVar11 + 0x1f0) != 0)) {
    if (*(int *)(lVar11 + 0x1f8) - 1U < 0xfffffffe) {
      lVar13 = *(longlong *)(lVar11 + 0x1f0);
      iVar10 = 0x4fc71eb4;
      if (*(int *)(lVar11 + 0x1f8) == 0x3d418293) {
        local_208 = 0.0;
        plStack_200 = (longlong *)
                      CONCAT44(plStack_200._4_4_,*(undefined4 *)((longlong)param_1 + 0x8c));
        local_1f8 = (double)param_1[0x12];
        FUN_141125464(lVar11 + 0x1f0,&local_f8);
        lVar11 = CONCAT44(uStack_f4,local_f8);
        lVar13 = 0;
        if (iStack_f0 != 0x4fc71eb4) {
          lVar13 = lVar11;
        }
        iVar10 = iStack_f0;
        if (lVar11 != 0) {
          lVar13 = lVar11;
        }
      }
      dVar5 = local_1c8;
      if ((lVar13 != 0) && (iVar10 - 1U < 0xfffffffe)) {
        lVar11 = param_1[0x30];
        if (lVar11 == 0) {
          if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
            lVar11 = param_1[4];
          }
          else {
            lVar11 = 0;
          }
        }
        uVar12 = (**(code **)(*param_1 + 0x180))(param_1);
        FUN_1407f7f84(&local_208,uVar12);
        dVar5 = local_1c8;
        if (plStack_200 != (longlong *)0x0) {
          iVar10 = (int)plStack_200[1];
          do {
            if (iVar10 == 0) {
              plVar17 = (longlong *)0x0;
              break;
            }
            LOCK();
            iVar7 = (int)plStack_200[1];
            bVar18 = iVar10 == iVar7;
            if (bVar18) {
              *(int *)(plStack_200 + 1) = iVar10 + 1;
              iVar7 = iVar10;
            }
            iVar10 = iVar7;
            UNLOCK();
            plVar17 = plStack_200;
          } while (!bVar18);
          LOCK();
          piVar1 = (int *)((longlong)plStack_200 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plStack_200 + 0x10))();
            dVar5 = local_1c8;
          }
          dVar6 = local_208;
          local_1c8._4_4_ = (undefined4)((ulonglong)dVar5 >> 0x20);
          if (plVar17 != (longlong *)0x0) {
            if (local_208 != 0.0) {
              local_1d8 = 0;
              lStack_1d0 = 0;
              local_1e8 = 0;
              lStack_1e0 = 0;
              local_1f8 = 0.0;
              dStack_1f0 = 0.0;
              local_208 = 0.0;
              plStack_200 = (longlong *)0x0;
              local_1c8._0_4_ = 0xc0;
              local_1b8 = 0.0;
              auStack_1b0._8_8_ = 0;
              local_178 = 0;
              local_168 = (longlong *)0x0;
              local_138 = 0;
              uStack_130 = 0;
              local_128 = 0;
              local_120 = 0x3ff0000000000000;
              local_118 = 0x3ff0000000000000;
              local_110 = 0x3ff0000000000000;
              local_100 = 0;
              local_104 = (undefined4)param_1[0x4e];
              local_108 = *(undefined4 *)((longlong)param_1 + 0x8c);
              local_210 = lVar13;
              FUN_1446dcdd4(&local_f8);
              if (DAT_14cb78ff0 != 0) {
                lVar13 = FUN_144837462(DAT_14cb78ff0,&local_f8);
                if ((lVar11 != 0) && (lVar13 != 0)) {
                  local_238 = 0;
                  local_248 = 0;
                  local_240 = &local_208;
                  FUN_1408f2522(dVar6,lVar13,lVar11,param_2);
                }
              }
              if (CONCAT44(uStack_dc,uStack_e0) != 0) {
                FUN_1400020a8();
              }
              FUN_141466e9a(&local_208);
              dVar5 = (double)CONCAT44(local_1c8._4_4_,(undefined4)local_1c8);
            }
            LOCK();
            plVar16 = plVar17 + 1;
            *(int *)plVar16 = (int)*plVar16 + -1;
            UNLOCK();
            if ((int)*plVar16 == 0) {
              local_1c8 = dVar5;
              (**(code **)*plVar17)(plVar17);
              LOCK();
              piVar1 = (int *)((longlong)plVar17 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              dVar5 = local_1c8;
              if (*piVar1 == 0) {
                (**(code **)(*plVar17 + 0x10))(plVar17);
                dVar5 = local_1c8;
              }
            }
          }
        }
      }
    }
  }
  if ((((*(byte *)(param_1[0x10] + 0x208) & 1) != 0) && (param_1[0x1d] != 0)) &&
     ((int)param_1[0x1e] - 1U < 0xfffffffe)) {
    lVar11 = param_1[0x30];
    if (lVar11 == 0) {
      if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
        lVar11 = param_1[4];
      }
      else {
        lVar11 = 0;
      }
    }
    local_1c8 = dVar5;
    uVar12 = (**(code **)(*param_1 + 0x180))(param_1);
    FUN_1407f7f84(&local_208,uVar12);
    dVar5 = local_1c8;
    if (plStack_200 != (longlong *)0x0) {
      iVar10 = (int)plStack_200[1];
      do {
        if (iVar10 == 0) {
          plVar17 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar7 = (int)plStack_200[1];
        bVar18 = iVar10 == iVar7;
        if (bVar18) {
          *(int *)(plStack_200 + 1) = iVar10 + 1;
          iVar7 = iVar10;
        }
        iVar10 = iVar7;
        UNLOCK();
        plVar17 = plStack_200;
      } while (!bVar18);
      LOCK();
      piVar1 = (int *)((longlong)plStack_200 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plStack_200 + 0x10))();
        dVar5 = local_1c8;
      }
      dVar6 = local_208;
      local_1c8._4_4_ = (undefined4)((ulonglong)dVar5 >> 0x20);
      if (plVar17 != (longlong *)0x0) {
        if (local_208 != 0.0) {
          local_1d8 = 0;
          lStack_1d0 = 0;
          local_1e8 = 0;
          lStack_1e0 = 0;
          local_1f8 = 0.0;
          dStack_1f0 = 0.0;
          local_208 = 0.0;
          plStack_200 = (longlong *)0x0;
          local_1c8._0_4_ = 0xc0;
          local_1b8 = 0.0;
          auStack_1b0._8_8_ = 0;
          local_178 = 0;
          local_168 = (longlong *)0x0;
          local_138 = 0;
          uStack_130 = 0;
          local_128 = 0;
          local_120 = 0x3ff0000000000000;
          local_118 = 0x3ff0000000000000;
          local_110 = 0x3ff0000000000000;
          local_108 = 0;
          local_100 = 0;
          local_104 = (undefined4)param_1[0x4e];
          local_210 = param_1[0x1d];
          FUN_1446dcdd4(&local_f8);
          if (DAT_14cb78ff0 != 0) {
            lVar13 = FUN_144837462(DAT_14cb78ff0,&local_f8);
            if ((lVar11 != 0) && (lVar13 != 0)) {
              local_238 = 0;
              local_248 = 0;
              local_240 = &local_208;
              FUN_1408f2522(dVar6,lVar13,lVar11,param_2);
            }
          }
          if (CONCAT44(uStack_dc,uStack_e0) != 0) {
            FUN_1400020a8();
          }
          if (local_178 != 0) {
            plVar16 = local_168;
            if (local_168 == (longlong *)0x0) {
              plVar16 = &local_158;
            }
            (**(code **)(*plVar16 + 0x10))();
          }
          if (local_1b8 != 0.0) {
            plVar16 = (longlong *)auStack_1b0._8_8_;
            if ((longlong *)auStack_1b0._8_8_ == (longlong *)0x0) {
              plVar16 = local_198;
            }
            (**(code **)(*plVar16 + 0x10))();
          }
          if (local_1d8 != 0) {
            FUN_1400020a8();
          }
          if (local_1e8 != 0) {
            FUN_1400020a8();
          }
          if (local_1f8 != 0.0) {
            FUN_1400020a8();
          }
          dVar5 = (double)CONCAT44(local_1c8._4_4_,(undefined4)local_1c8);
          if (local_208 != 0.0) {
            FUN_1400020a8();
            dVar5 = (double)CONCAT44(local_1c8._4_4_,(undefined4)local_1c8);
          }
        }
        LOCK();
        plVar16 = plVar17 + 1;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)*plVar16 == 0) {
          local_1c8 = dVar5;
          (**(code **)*plVar17)(plVar17);
          LOCK();
          piVar1 = (int *)((longlong)plVar17 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          dVar5 = local_1c8;
          if (*piVar1 == 0) {
            (**(code **)(*plVar17 + 0x10))(plVar17);
            dVar5 = local_1c8;
          }
        }
      }
    }
  }
  lVar11 = (longlong)*(int *)(param_1[0x10] + 0x48);
  if (lVar11 != 0) {
    lVar11 = lVar11 * 0x28;
    plVar17 = (longlong *)(*(longlong *)(param_1[0x10] + 0x40) + 8);
    do {
      plVar16 = plVar17 + -1;
      local_1c8 = dVar5;
      plVar15 = (longlong *)FUN_14479d2ce(plVar16);
      if (plVar15 == (longlong *)0x0) {
        dVar5 = local_1c8;
        if (*plVar17 != 0) {
          plVar15 = (longlong *)FUN_140007850();
          cVar9 = (*(code *)PTR_FUN_14c758760)();
          if ((plVar15 == (longlong *)0x0) || (cVar9 == '\0')) {
            FUN_14485c47a(plVar16,plVar15);
            dVar5 = local_1c8;
            if (plVar15 == (longlong *)0x0) goto LAB_14082abc4;
          }
          else {
            uVar2 = *(uint *)((longlong)plVar15 + 0xc);
            if ((int)uVar2 < DAT_14c9647dc) {
              lVar13 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
            }
            else {
              lVar13 = 0;
            }
            if ((*(uint *)(lVar13 + 8) & 0x8400000) == 0) {
              FUN_14485c47a(plVar16,plVar15);
            }
          }
          dVar5 = local_1c8;
          if ((*(uint *)(plVar15 + 1) >> 0x1e & 1) == 0) goto LAB_14082aba0;
        }
      }
      else {
LAB_14082aba0:
        lVar13 = FUN_144a797b2();
        dVar5 = local_1c8;
        if ((*(int *)(lVar13 + 0x38) <= *(int *)(plVar15[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(plVar15[2] + 0x30) + (longlong)*(int *)(lVar13 + 0x38) * 8)
            == lVar13 + 0x30)) {
          lVar13 = FUN_145a557f0();
          dVar5 = local_1c8;
          if ((lVar13 != 0) &&
             ((*(int *)(lVar13 + 0x38) <= (int)plVar15[7] &&
              (*(longlong *)(plVar15[6] + (longlong)*(int *)(lVar13 + 0x38) * 8) == lVar13 + 0x30)))
             ) {
            lVar13 = plVar15[0x22];
            if (lVar13 == 0) {
              (**(code **)(*plVar15 + 1000))(plVar15);
              lVar13 = plVar15[0x22];
              dVar5 = local_1c8;
              if (lVar13 == 0) goto LAB_14082abc4;
            }
            uVar12 = *(undefined8 *)(lVar13 + 0x28);
            *(longlong **)(lVar13 + 0x28) = param_1;
            FUN_14876f598(lVar13,param_1);
            *(undefined8 *)(lVar13 + 0x28) = uVar12;
            dVar5 = local_1c8;
          }
        }
      }
LAB_14082abc4:
      plVar17 = plVar17 + 5;
      lVar11 = lVar11 + -0x28;
    } while (lVar11 != 0);
  }
  local_1c8 = dVar5;
  if (((*(byte *)(param_1 + 0x20) & 1) != 0) && (param_3 != '\0')) {
    if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
      lVar11 = param_1[4];
    }
    else {
      lVar11 = 0;
    }
    if (*(char *)(lVar11 + 0x178) == '\x03') {
      (**(code **)(*param_1 + 0x2e8))(param_1,1);
    }
  }
LAB_14082a536:
  if ((local_90 ^ (ulonglong)auStack_268) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14082af24 FUN_14082af24 body=1005 status=ok
// SIG undefined FUN_14082af24(void)

void FUN_14082af24(longlong param_1,undefined8 *param_2,longlong param_3,void *param_4,byte param_5)

{
  int *piVar1;
  longlong *plVar2;
  double dVar3;
  int iVar4;
  double dVar5;
  longlong lVar6;
  byte bVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  double dVar12;
  double _X;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong local_70;
  longlong *local_68;
  longlong local_60;
  longlong *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x3f8) != 0) &&
     (*(int *)(*(longlong *)(param_1 + 0x80) + 0x400) - 1U < 0xfffffffe)) {
    FUN_1405fab15(&local_60);
    lVar6 = local_60;
    if ((0.0 < *(float *)(param_1 + 0x88)) || ((*(uint *)(param_1 + 0x100) & 0x2000000) == 0)) {
      *(float *)(local_60 + 8) = *(float *)(param_1 + 0x88);
      *(undefined1 *)(local_60 + 0xc) = 1;
    }
    *(undefined8 *)(local_60 + 0x10) = *(undefined8 *)(param_1 + 0x90);
    if (local_60 + 0x18 != param_1 + 0x98) {
      lVar8 = param_1 + 0x98;
      if (*(longlong *)(param_1 + 200) != 0) {
        lVar8 = *(longlong *)(param_1 + 200);
      }
      FUN_1400709d4(local_60 + 0x18,lVar8,*(undefined4 *)(param_1 + 0xd0),
                    *(undefined4 *)(local_60 + 0x54));
    }
    if ((0.0 < *(float *)(param_1 + 0x8c)) && (param_1 + 0x8c != lVar6 + 0x78)) {
      *(float *)(lVar6 + 0x78) = *(float *)(param_1 + 0x8c);
      *(undefined1 *)(lVar6 + 0x7c) = 1;
    }
    *(byte *)(lVar6 + 0x278) = *(byte *)(lVar6 + 0x278) & 0xfb;
    if ((undefined8 *)(lVar6 + 0x1e0) != param_2) {
      *(undefined8 *)(lVar6 + 0x1f0) = param_2[2];
      uVar9 = param_2[1];
      *(undefined8 *)(lVar6 + 0x1e0) = *param_2;
      *(undefined8 *)(lVar6 + 0x1e8) = uVar9;
      *(undefined1 *)(lVar6 + 0x1f8) = 1;
    }
    dVar12 = *(double *)(param_1 + 0x668);
    dVar3 = *(double *)(param_1 + 0x670);
    uVar10 = SUB84(dVar3,0);
    uVar11 = (undefined4)((ulonglong)dVar3 >> 0x20);
    dVar5 = 0.0;
    if ((((dVar12 != 0.0) || (NAN(dVar12))) || (dVar3 != 0.0)) || (NAN(dVar3))) {
      dVar5 = atan2(dVar3,dVar12);
      dVar5 = dVar5 * 57.29577951308232;
      dVar12 = *(double *)(param_1 + 0x668);
      uVar10 = (undefined4)*(undefined8 *)(param_1 + 0x670);
      uVar11 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x670) >> 0x20);
    }
    _X = SQRT(dVar12 * dVar12 + (double)CONCAT44(uVar11,uVar10) * (double)CONCAT44(uVar11,uVar10));
    dVar12 = *(double *)(param_1 + 0x678);
    dVar3 = 0.0;
    if (((_X != 0.0) || (NAN(_X))) || ((dVar12 != 0.0 || (NAN(dVar12))))) {
      dVar3 = atan2(dVar12,_X);
      dVar3 = dVar3 * 57.29577951308232;
    }
    *(double *)(lVar6 + 0x200) = dVar3;
    *(double *)(lVar6 + 0x208) = dVar5;
    *(undefined8 *)(lVar6 + 0x210) = 0;
    *(undefined1 *)(lVar6 + 0x218) = 1;
    if ((undefined4 *)(param_1 + 0xd8) != (undefined4 *)(lVar6 + 0x1c0)) {
      *(undefined4 *)(lVar6 + 0x1c0) = *(undefined4 *)(param_1 + 0xd8);
      *(undefined1 *)(lVar6 + 0x1c4) = 1;
    }
    memcpy((void *)(lVar6 + 0xa0),param_4,0x100);
    lVar8 = *(longlong *)(param_1 + 0x80);
    if ((*(longlong *)(lVar6 + 0x290) != *(longlong *)(lVar8 + 0x1f0)) ||
       (*(int *)(lVar6 + 0x298) != *(int *)(lVar8 + 0x1f8))) {
      *(longlong *)(lVar6 + 0x290) = *(longlong *)(lVar8 + 0x1f0);
      *(undefined4 *)(lVar6 + 0x298) = *(undefined4 *)(lVar8 + 0x1f8);
      *(undefined8 *)(lVar6 + 0x2a0) = 0;
      lVar8 = *(longlong *)(param_1 + 0x80);
    }
    FUN_1407a29f8(lVar6,lVar8 + 0x508);
    if (0 < *(int *)(param_1 + 0x3b8)) {
      FUN_1408da3b0(lVar6 + 0x280,param_1 + 0x3b0);
    }
    lVar8 = 0;
    (**(code **)(*(longlong *)(lVar6 + 0x58) + 0x20))(lVar6 + 0x58,0);
    *(undefined8 *)(lVar6 + 0x60) = *(undefined8 *)(param_1 + 0x3c8);
    FUN_1406022fe(lVar6 + 0x68,param_1 + 0x3d0);
    if (param_3 != 0) {
      bVar7 = *(byte *)(param_3 + 0x62) & 4;
      lVar8 = 0;
      if (bVar7 != 0) {
        lVar8 = param_3;
      }
      if ((param_5 & bVar7 >> 2) == 1) {
        plVar2 = (longlong *)(lVar6 + 0x250);
        uVar10 = *(undefined4 *)(param_3 + 0xc);
        iVar4 = *(int *)(lVar6 + 600);
        *(uint *)(lVar6 + 600) = iVar4 + 1U;
        if (*(uint *)(lVar6 + 0x25c) < iVar4 + 1U) {
          FUN_1447808da(plVar2,iVar4);
        }
        *(undefined4 *)(*plVar2 + (longlong)iVar4 * 4) = uVar10;
        lVar8 = FUN_140717404(param_3);
        if (lVar8 != 0) {
          uVar10 = *(undefined4 *)(lVar8 + 0xc);
          iVar4 = *(int *)(lVar6 + 600);
          *(uint *)(lVar6 + 600) = iVar4 + 1U;
          if (*(uint *)(lVar6 + 0x25c) < iVar4 + 1U) {
            FUN_1447808da(plVar2,iVar4);
          }
          *(undefined4 *)(*plVar2 + (longlong)iVar4 * 4) = uVar10;
        }
        lVar8 = 0;
      }
    }
    local_70 = local_60;
    local_68 = local_58;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_58 + 1) = (int)local_58[1] + 1;
      UNLOCK();
    }
    uVar9 = FUN_14082ce84(*(longlong *)(param_1 + 0x80) + 0x3f8);
    local_78 = 0;
    FUN_1405fd19a(*(undefined8 *)(param_1 + 0x1c8),uVar9,lVar8,&local_70);
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_58 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar1 = (int *)((longlong)local_58 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_58 + 0x10))(local_58);
        }
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14082b312 FUN_14082b312 body=783 status=ok
// SIG undefined FUN_14082b312(void)

void FUN_14082b312(longlong *param_1,char param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined4 uVar7;
  longlong lVar8;
  
  uVar3 = *(uint *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = uVar3 & 0xfffff81e | 0x40;
  *(undefined1 *)((longlong)param_1 + 0x593) = 0;
  if ((uVar3 >> 0x1a & 1) == 0) {
    (**(code **)(*param_1 + 0x330))(param_1);
  }
  lVar4 = (**(code **)(*param_1 + 0x180))(param_1);
  if (lVar4 != 0) {
    *(float *)(param_1 + 0x65) = (float)*(double *)(lVar4 + 0x6d0);
  }
  if (param_1[0xb1] != 0) {
    plVar6 = param_1 + 0xb1;
    if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
      lVar4 = param_1[4];
    }
    else {
      lVar4 = 0;
    }
    uVar5 = FUN_1401b4c98(lVar4);
    lVar4 = FUN_144a61814(uVar5,plVar6);
    if (lVar4 != 0) {
      FUN_1405a424c(uVar5,*plVar6);
    }
    *plVar6 = 0;
  }
  if (param_1[200] != 0) {
    plVar6 = param_1 + 200;
    if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
      lVar4 = param_1[4];
    }
    else {
      lVar4 = 0;
    }
    uVar5 = FUN_1401b4c98(lVar4);
    lVar4 = FUN_144a61814(uVar5,plVar6);
    if (lVar4 != 0) {
      FUN_1405a424c(uVar5,*plVar6);
    }
    *plVar6 = 0;
  }
  if (param_1[0xf4] != 0) {
    plVar6 = param_1 + 0xf4;
    if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
      lVar4 = param_1[4];
    }
    else {
      lVar4 = 0;
    }
    uVar5 = FUN_1401b4c98(lVar4);
    lVar4 = FUN_144a61814(uVar5,plVar6);
    if (lVar4 != 0) {
      FUN_1405a424c(uVar5,*plVar6);
    }
    *plVar6 = 0;
  }
  FUN_14082b622(param_1 + 0xa3);
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  lVar4 = param_1[0xca];
  lVar2 = param_1[0xcb];
  uVar7 = 0;
  if ((longlong)(int)lVar2 != 0) {
    lVar8 = 0;
    do {
      (**(code **)(**(longlong **)(lVar4 + lVar8) + 0x10))();
      lVar8 = lVar8 + 0x18;
    } while ((longlong)(int)lVar2 * 0x18 != lVar8);
    uVar7 = (undefined4)param_1[0xcb];
    lVar4 = param_1[0xca];
  }
  FUN_14068a6c6(lVar4,uVar7);
  *(undefined4 *)(param_1 + 0xcb) = 0;
  if (*(int *)((longlong)param_1 + 0x65c) != 0) {
    FUN_1488e537c(param_1 + 0xca,0);
  }
  (**(code **)(*param_1 + 0x3c8))();
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    lVar4 = param_1[4];
  }
  else {
    lVar4 = 0;
  }
  if (*(char *)(lVar4 + 0x178) == '\x03') {
    *(char *)(param_1 + 99) = (char)param_1[0x23];
    *(int *)((longlong)param_1 + 0x5c) = *(int *)((longlong)param_1 + 0x5c) + 1;
    if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
      plVar6 = (longlong *)param_1[4];
    }
    else {
      plVar6 = (longlong *)0x0;
    }
    *(int *)(plVar6 + 0x92) = (int)plVar6[0x92] + 1;
    (**(code **)(*plVar6 + 0x578))();
  }
  uVar3 = 0;
  if (param_2 != '\0') {
    uVar3 = (uint)(0 < (int)param_1[0xd5]) << 0xb;
  }
  uVar1 = *(uint *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = uVar1 & 0xfffff7ff | uVar3;
  if (uVar3 == 0) {
    (**(code **)(*param_1 + 0x328))(param_1);
  }
  if ((uVar1 & 0x4000000) != 0 || uVar3 != 0) {
    if ((*(byte *)(param_1[0x10] + 0x370) & 1) == 0) {
      return;
    }
    if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
      lVar4 = param_1[4];
    }
    else {
      lVar4 = 0;
    }
    FUN_1488e5a0c(lVar4,param_1);
    return;
  }
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    lVar4 = param_1[4];
  }
  else {
    lVar4 = 0;
  }
  FUN_14082b878(lVar4,param_1);
  return;
}



// FUNCTION 14082b622 FUN_14082b622 body=57 status=ok
// SIG undefined FUN_14082b622(void)

void FUN_14082b622(undefined8 *param_1)

{
  byte bVar1;
  
  FUN_140478aca();
  bVar1 = *(byte *)(param_1 + 9);
  *(byte *)(param_1 + 9) = bVar1 & 0xfe;
  *param_1 = 0;
  param_1[1] = 0;
  if ((bVar1 & 8) != 0) {
    FUN_14082b712(param_1 + 10,0);
    *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) & 0xf7;
  }
  return;
}



// FUNCTION 14082b65c FUN_14082b65c body=86 status=ok
// SIG undefined FUN_14082b65c(void)

void FUN_14082b65c(longlong param_1)

{
  longlong lVar1;
  
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    lVar1 = *(longlong *)(param_1 + 0x20);
  }
  else {
    lVar1 = 0;
  }
  if (*(char *)(lVar1 + 0x178) == '\x03') {
    FUN_14082bf0e(param_1);
    FUN_14082b78e(param_1);
    *(undefined4 *)(param_1 + 0x78) = 0;
    if (*(int *)(param_1 + 0x7c) != 0) {
      FUN_1407d9874(param_1 + 0x70,0);
      return;
    }
  }
  return;
}



// FUNCTION 14082b6b2 FUN_14082b6b2 body=95 status=ok
// SIG undefined FUN_14082b6b2(void)

void FUN_14082b6b2(longlong param_1)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x100) & 1) == 0) {
    iVar1 = *(int *)(param_1 + 0x3bc);
    FUN_1403e0ff1(*(undefined8 *)(param_1 + 0x3b0),*(undefined4 *)(param_1 + 0x3b8));
    *(undefined4 *)(param_1 + 0x3b8) = 0;
    if ((iVar1 < 0) && (*(int *)(param_1 + 0x3bc) != 0)) {
      FUN_1407a322c(param_1 + 0x3b0,0);
      return;
    }
  }
  return;
}



// FUNCTION 14082b712 FUN_14082b712 body=124 status=ok
// SIG undefined FUN_14082b712(void)

void FUN_14082b712(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (param_1[2] != 0) {
    LOCK();
    *(int *)(param_1[3] + 8) = *(int *)(param_1[3] + 8) + -1;
    UNLOCK();
    plVar2 = (longlong *)param_1[3];
    if (*param_1 == 0) {
      lVar3 = 0;
      plVar4 = plVar2;
    }
    else {
      *(undefined8 *)(*param_1 + 8) = 0;
      lVar3 = *param_1;
      plVar4 = (longlong *)param_1[3];
    }
    LOCK();
    plVar1 = (longlong *)*plVar4;
    if (param_1 == plVar1) {
      *plVar4 = lVar3;
    }
    UNLOCK();
    if (param_1 != plVar1) {
      while ((longlong *)param_1[1] == (longlong *)0x0) {
        SwitchToThread();
      }
      lVar3 = *param_1;
      *(longlong *)param_1[1] = lVar3;
      if (lVar3 != 0) {
        *(longlong *)(lVar3 + 8) = param_1[1];
      }
    }
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    LOCK();
    plVar2 = plVar2 + 1;
    *(int *)plVar2 = (int)*plVar2 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 14082b78e FUN_14082b78e body=232 status=ok
// SIG undefined FUN_14082b78e(void)

void FUN_14082b78e(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(uint *)(param_1 + 0x100) >> 0x16 & 1) != 0) {
    *(uint *)(param_1 + 0x100) = *(uint *)(param_1 + 0x100) & 0xffbfffff;
    lVar3 = *(longlong *)(param_1 + 400);
    if (((lVar3 != 0) && ((*(byte *)(lVar3 + 0x65) & 2) == 0)) &&
       ((*(uint *)(lVar3 + 8) >> 0x1e & 1) == 0)) {
      if (*(longlong *)(param_1 + 0x768) != 0) {
        uVar1 = FUN_144a7b040();
        plVar2 = (longlong *)FUN_144718840(lVar3,uVar1);
        if (plVar2 != (longlong *)0x0) {
          lVar3 = (**(code **)(*plVar2 + 0x20))(plVar2);
          if ((lVar3 != 0) && (*(longlong *)(param_1 + 0x768) != 0)) {
            FUN_14480f766(lVar3 + 400);
          }
        }
        *(undefined8 *)(param_1 + 0x768) = 0;
        lVar3 = *(longlong *)(param_1 + 400);
      }
      FUN_14111a5b4(&local_28);
      FUN_1410ccfa4(lVar3 + 0x20e,param_1,local_28);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14082b878 FUN_14082b878 body=66 status=ok
// SIG undefined FUN_14082b878(void)

void FUN_14082b878(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    FUN_14082b8ba();
    *(undefined1 *)(param_2 + 0x68) = 1;
    lVar1 = FUN_1447210f0(param_1);
    *(float *)(param_2 + 100) = (float)(*(double *)(lVar1 + 0x6d0) + 0.20000000298023224);
  }
  return;
}



// FUNCTION 14082b8ba FUN_14082b8ba body=605 status=ok
// SIG undefined FUN_14082b8ba(void)

void FUN_14082b8ba(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_78 [40];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((param_2 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(param_2);
  }
  iVar1 = *(int *)(param_1 + 0x3b0);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x3a8);
    uVar5 = 0;
    lVar4 = 0;
    bVar3 = DAT_14c950c29;
    do {
      if ((~bVar3 & 1) == 0 && param_2 != 0) {
        FUN_1456cec3c(param_2);
        bVar3 = DAT_14c950c29;
      }
      if (*(longlong *)(lVar2 + uVar5) == param_2) {
        if ((~uVar5 & 0x7fffffff8) != 0) {
          iVar1 = *(int *)(param_2 + 0x60);
          if ((-1 < (longlong)iVar1) && (iVar1 < *(int *)(param_1 + 0x3c8))) {
            lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x3c0) + (longlong)iVar1 * 8);
            if ((longlong)*(int *)(lVar2 + 0x18) == 0) goto LAB_14082b9d8;
            uVar5 = 0;
            lVar6 = 0;
            goto LAB_14082b99e;
          }
          local_50 = param_2;
          if ((~bVar3 & 1) == 0 && param_2 != 0) {
            FUN_1456cec3c(param_2);
          }
          FUN_14089341e(param_1 + 0x3d0,&local_50,0);
          goto LAB_14082b9df;
        }
        break;
      }
      lVar4 = lVar4 + 0x100000000;
      uVar5 = uVar5 + 8;
    } while ((longlong)iVar1 * 8 != uVar5);
  }
  goto LAB_14082ba17;
  while( true ) {
    lVar6 = lVar6 + 0x100000000;
    uVar5 = uVar5 + 8;
    if ((longlong)*(int *)(lVar2 + 0x18) * 8 == uVar5) break;
LAB_14082b99e:
    if (*(longlong *)(*(longlong *)(lVar2 + 0x10) + uVar5) == param_2) {
      if ((~uVar5 & 0x7fffffff8) != 0) {
        FUN_14082bb18(param_2,0);
        *(undefined8 *)(*(longlong *)(lVar2 + 0x10) + (lVar6 >> 0x20) * 8) = 0;
        *(undefined1 *)(lVar2 + 8) = 1;
      }
      break;
    }
  }
LAB_14082b9d8:
  *(undefined4 *)(param_2 + 0x60) = 0xffffffff;
LAB_14082b9df:
  *(undefined8 *)(*(longlong *)(param_1 + 0x3a8) + (lVar4 >> 0x20) * 8) = 0;
  *(undefined1 *)(param_1 + 0x4c8) = 1;
  if ((param_2 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(param_2);
  }
  iVar1 = *(int *)(param_1 + 0x558);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x550);
    uVar5 = 0;
    lVar4 = 0;
    bVar3 = DAT_14c950c29;
    do {
      if ((param_2 != 0) && ((bVar3 & 1) != 0)) {
        FUN_1456cec3c(param_2);
        bVar3 = DAT_14c950c29;
      }
      if (*(longlong *)(lVar2 + uVar5) == param_2) {
        if ((~uVar5 & 0x7fffffff8) != 0) {
          *(undefined8 *)(*(longlong *)(param_1 + 0x550) + (lVar4 >> 0x20) * 8) = 0;
          *(undefined1 *)(param_1 + 0x560) = 1;
        }
        break;
      }
      lVar4 = lVar4 + 0x100000000;
      uVar5 = uVar5 + 8;
    } while ((longlong)iVar1 * 8 != uVar5);
  }
LAB_14082ba17:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14082bb18 FUN_14082bb18 body=299 status=ok
// SIG undefined FUN_14082bb18(void)

void FUN_14082bb18(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x758) != param_2) {
    if ((*(longlong *)(param_1 + 0x758) != 0) &&
       (iVar1 = *(int *)(param_1 + 0x6a8), (longlong)iVar1 != 0)) {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      lVar3 = *(longlong *)(param_1 + 0x6a0);
      lVar5 = 0;
      do {
        lVar4 = *(longlong *)(lVar3 + lVar5);
        if ((lVar4 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar4);
LAB_14082bbfd:
          if (*(longlong *)(lVar4 + 0x120) == 0) {
            FUN_1401c4d5c(lVar4 + 0x40,uVar2,*(undefined8 *)(param_1 + 0x758));
          }
        }
        else if (lVar4 != 0) goto LAB_14082bbfd;
        lVar5 = lVar5 + 8;
      } while ((longlong)iVar1 * 8 != lVar5);
    }
    *(longlong *)(param_1 + 0x758) = param_2;
    if ((param_2 != 0) && (iVar1 = *(int *)(param_1 + 0x6a8), (longlong)iVar1 != 0)) {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      lVar3 = *(longlong *)(param_1 + 0x6a0);
      lVar5 = 0;
      do {
        lVar4 = *(longlong *)(lVar3 + lVar5);
        if ((lVar4 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar4);
LAB_14082bb99:
          if (*(longlong *)(lVar4 + 0x120) == 0) {
            FUN_14082bc44(lVar4 + 0x40,uVar2,*(undefined8 *)(param_1 + 0x758));
          }
        }
        else if (lVar4 != 0) goto LAB_14082bb99;
        lVar5 = lVar5 + 8;
      } while ((longlong)iVar1 * 8 != lVar5);
    }
  }
  return;
}



// FUNCTION 14082bc44 FUN_14082bc44 body=305 status=ok
// SIG undefined FUN_14082bc44(void)

void FUN_14082bc44(longlong param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_58 [32];
  uint local_38;
  int local_34;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_1 + 10) & 2) == 0) {
    bVar1 = 1;
    if (*(byte **)(param_1 + 0x20) != (byte *)0x0) {
      bVar1 = **(byte **)(param_1 + 0x20) ^ 1;
    }
  }
  else {
    bVar1 = 0;
  }
  if ((*(byte *)(param_3 + 10) & 2) == 0) {
    if (*(byte **)(param_3 + 0x20) == (byte *)0x0) goto LAB_14082bc8a;
    bVar3 = **(byte **)(param_3 + 0x20) ^ 1;
  }
  else {
    bVar3 = 0;
  }
  if (((bVar1 | bVar3) & 1) == 0) {
    local_34 = 0;
    if (param_2 == 0) {
      local_38 = 0;
      iVar2 = 0;
    }
    else {
      local_38 = *(uint *)(param_2 + 0xc);
      if ((int)local_38 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((local_38 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_38 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      iVar2 = *(int *)(lVar5 + 0x10);
      if (*(int *)(lVar5 + 0x10) == 0) {
        LOCK();
        iVar2 = DAT_14c964868 + 1;
        UNLOCK();
        iVar4 = DAT_14c964868 + 1;
        bVar6 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar2;
        if (bVar6) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar4);
        }
        LOCK();
        iVar2 = *(int *)(lVar5 + 0x10);
        bVar6 = iVar2 == 0;
        if (bVar6) {
          *(int *)(lVar5 + 0x10) = iVar4;
          iVar2 = 0;
        }
        UNLOCK();
        if (bVar6) {
          iVar2 = iVar4;
        }
      }
    }
    local_34 = iVar2;
    local_30 = param_3;
    FUN_14082bd76(param_1 + 0x10);
  }
LAB_14082bc8a:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14082bd76 FUN_14082bd76 body=138 status=ok
// SIG undefined FUN_14082bd76(void)

int FUN_14082bd76(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((longlong)(int)param_1[1] != 0) {
    lVar5 = *param_1;
    lVar6 = (longlong)(int)param_1[1] << 4;
    iVar4 = 0;
    do {
      cVar3 = FUN_1401246e4(lVar5,param_2);
      if ((cVar3 != '\0') && (*(longlong *)(lVar5 + 8) == param_2[1])) {
        if (iVar4 != 1) {
          return -iVar4;
        }
        break;
      }
      lVar5 = lVar5 + 0x10;
      iVar4 = iVar4 + -1;
      lVar6 = lVar6 + -0x10;
    } while (lVar6 != 0);
  }
  iVar4 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar4 + 1U) {
    FUN_14082be00(param_1,iVar4);
  }
  uVar2 = param_2[1];
  puVar1 = (undefined8 *)(*param_1 + (longlong)iVar4 * 0x10);
  *puVar1 = *param_2;
  puVar1[1] = uVar2;
  return iVar4;
}



// FUNCTION 14082be00 FUN_14082be00 body=269 status=ok
// SIG undefined FUN_14082be00(void)

void FUN_14082be00(longlong param_1,int param_2)

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



// FUNCTION 14082bf0e FUN_14082bf0e body=509 status=ok
// SIG undefined FUN_14082bf0e(void)

void FUN_14082bf0e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined1 *local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(byte *)(param_1 + 0x100) & 0x10) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x278);
    if (((lVar5 != 0) && ((*(byte *)(lVar5 + 0x65) & 2) == 0)) &&
       ((*(uint *)(lVar5 + 8) >> 0x1e & 1) == 0)) {
      FUN_14028a150(&local_30);
      FUN_1410ccfa4(lVar5 + 0x20e,param_1,local_30);
      if (*(longlong *)(param_1 + 0x760) != 0) {
        lVar5 = *(longlong *)(param_1 + 0x278);
        if (lVar5 != 0) {
          uVar3 = FUN_144a7b040();
          plVar4 = (longlong *)FUN_144718840(lVar5,uVar3);
          if (plVar4 != (longlong *)0x0) {
            lVar5 = (**(code **)(*plVar4 + 0x20))(plVar4);
            if (lVar5 != 0) {
              local_48 = &LAB_145b067e0;
              local_40 = 0;
              FUN_1412fffd4(lVar5 + 400,&local_38,param_1);
              *(undefined8 *)(param_1 + 0x760) = local_38;
              FUN_140457ffc(lVar5 + 0x238,param_1);
            }
          }
        }
        *(undefined8 *)(param_1 + 0x760) = 0;
      }
    }
    if (*(longlong *)(param_1 + 0x280) != 0) {
      lVar2 = FUN_144a3a302();
      lVar5 = *(longlong *)(param_1 + 0x280);
      if ((((lVar5 != 0) && (lVar2 != 0)) &&
          ((lVar1 = *(longlong *)(lVar5 + 0x10), lVar1 != 0 &&
           ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38) &&
            (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
             lVar2 + 0x30)))))) && ((*(uint *)(lVar5 + 8) >> 0x1e & 1) == 0)) {
        FUN_14028a09e(&local_50);
        FUN_14574ba0e(lVar5 + 0x59d,param_1,local_50);
        lVar2 = FUN_140c7aaec();
        if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) {
          FUN_1488e21a0(&local_58);
          FUN_1409ca370(lVar5 + 0x730,param_1,local_58);
          FUN_144a7b126(lVar5 + 0x730,&local_48,1);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14082c10c FUN_14082c10c body=3446 status=ok
// SIG undefined FUN_14082c10c(void)

void FUN_14082c10c(longlong *param_1,void *param_2,undefined4 param_3,undefined8 param_4,
                  byte param_5,longlong param_6)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double _X;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  void *pvVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  longlong lVar16;
  longlong *plVar17;
  uint uVar18;
  uint uVar19;
  undefined7 uVar20;
  int iVar21;
  longlong *plVar22;
  byte bVar23;
  longlong lVar24;
  longlong lVar25;
  ulonglong uVar26;
  bool bVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  double dVar32;
  undefined1 auStack_5e8 [32];
  code **local_5c8;
  longlong local_5c0;
  code **local_5b8;
  byte local_5a9;
  undefined8 local_5a8;
  longlong local_5a0;
  undefined8 *local_598;
  ulonglong uStack_590;
  undefined8 local_588;
  undefined4 local_580;
  undefined2 local_57c;
  void *local_578;
  undefined8 uStack_570;
  longlong local_490;
  undefined8 uStack_488;
  longlong local_478 [2];
  longlong *local_468;
  longlong *local_460;
  void *local_458;
  undefined8 *local_450;
  byte *local_448;
  undefined8 *local_440;
  undefined8 local_438;
  undefined8 uStack_430;
  double local_428;
  longlong local_418;
  byte local_409;
  code *local_408 [2];
  undefined8 local_3f8;
  undefined **local_3e8;
  ulonglong local_3e0;
  undefined1 local_3d8;
  code *local_3c8 [2];
  undefined8 local_3b8;
  undefined **local_3a8;
  undefined8 local_3a0;
  undefined1 local_398;
  longlong local_388;
  undefined4 local_380;
  undefined4 uStack_37c;
  undefined8 local_378;
  longlong local_370;
  longlong local_350;
  byte local_348;
  uint local_1c8;
  undefined8 *local_1a0;
  ulonglong uStack_198;
  undefined8 local_190;
  undefined1 local_f8 [136];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_5e8;
  local_409 = param_5;
  *(byte *)((longlong)param_1 + 0x103) = *(byte *)((longlong)param_1 + 0x103) | 0x10;
  if ((param_1[0x30] == 0) || (lVar24 = *(longlong *)(param_1[0x30] + 0x1b0), lVar24 == 0)) {
    lVar24 = 0;
  }
  else {
    lVar24 = *(longlong *)(lVar24 + 0x3c0);
    if ((DAT_14c950c29 == 1) && (lVar24 != 0)) {
      FUN_1456cec3c(lVar24);
    }
  }
  local_418 = lVar24;
  uVar11 = FUN_14485cccc((longlong)param_2 + 0xb8);
  local_438 = (double)param_1[0xcd];
  uStack_430 = (double)param_1[0xce];
  local_428 = (double)param_1[0xcf];
  dVar32 = local_428 * local_428 + local_438 * local_438 + uStack_430 * uStack_430;
  if ((dVar32 != 1.0) || (NAN(dVar32))) {
    if (dVar32 < 9.99999993922529e-09) {
      local_428 = DAT_14c8464f0;
      uVar28 = (undefined4)DAT_14c8464e0;
      uVar29 = DAT_14c8464e0._4_4_;
      uVar30 = (undefined4)DAT_14c8464e8;
      uVar31 = DAT_14c8464e8._4_4_;
      goto LAB_14082cd97;
    }
    dVar32 = 1.0 / SQRT(dVar32);
    local_428 = local_428 * dVar32;
    uStack_430 = uStack_430 * dVar32;
    local_438 = local_438 * dVar32;
  }
  else {
    local_428 = (double)param_1[0xcf];
    uVar28 = (undefined4)param_1[0xcd];
    uVar29 = *(undefined4 *)((longlong)param_1 + 0x66c);
    uVar30 = (undefined4)param_1[0xce];
    uVar31 = *(undefined4 *)((longlong)param_1 + 0x674);
LAB_14082cd97:
    local_438 = (double)CONCAT44(uVar29,uVar28);
    uStack_430 = (double)CONCAT44(uVar31,uVar30);
  }
  local_468 = &local_418;
  local_448 = &local_409;
  local_440 = &param_6;
  local_460 = param_1;
  local_458 = param_2;
  local_450 = &local_438;
  plVar12 = (longlong *)FUN_14082ce84(param_1[0x10] + 0x3f8);
  if (plVar12 == (longlong *)0x0) {
    if ((*(byte *)((longlong)param_1 + 0x101) & 0x80) == 0) {
      uVar18 = 0;
      FUN_14082cf0e(&local_388,uVar11,param_1[0x39],0);
      FUN_14082d41c(&local_468,&local_388);
      *(byte *)((longlong)param_1 + 0x103) = *(byte *)((longlong)param_1 + 0x103) | 4;
      iVar10 = 0;
      if (param_1 != (longlong *)0x0) {
        uVar18 = *(uint *)((longlong)param_1 + 0xc);
        if ((int)uVar18 < DAT_14c9647dc) {
          lVar24 = (ulonglong)((uVar18 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8);
        }
        else {
          lVar24 = 0;
        }
        iVar10 = *(int *)(lVar24 + 0x10);
        if (*(int *)(lVar24 + 0x10) == 0) {
          LOCK();
          iVar10 = DAT_14c964868 + 1;
          UNLOCK();
          iVar21 = DAT_14c964868 + 1;
          bVar27 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar10;
          if (bVar27) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar21);
          }
          LOCK();
          iVar10 = *(int *)(lVar24 + 0x10);
          bVar27 = iVar10 == 0;
          if (bVar27) {
            *(int *)(lVar24 + 0x10) = iVar21;
            iVar10 = 0;
          }
          UNLOCK();
          if (bVar27) {
            iVar10 = iVar21;
          }
        }
      }
      local_398 = (undefined1)param_1[0x23];
      local_3a0 = CONCAT44(iVar10,uVar18);
      local_5c8 = local_3c8;
      local_3b8 = 0;
      local_3a8 = &PTR_LAB_14b4150b0;
      local_3c8[0] = FUN_143dce076;
      plVar22 = (longlong *)0x0;
      FUN_14082d216(&local_388,param_3,0,1);
    }
    else {
      plVar22 = (longlong *)0x0;
      FUN_14082cf0e(&local_388,uVar11,param_1[0x39],0);
      FUN_14082d41c(&local_468,&local_388);
      bVar23 = 1;
LAB_14082c8e4:
      uVar20 = (undefined7)((ulonglong)&local_438 >> 8);
      uVar28 = (undefined4)CONCAT71(uVar20,1);
      if (((*(byte *)((longlong)param_1 + 0x101) & 0x80) != 0) &&
         ((*(byte *)(param_1[0x10] + 0x378) & 1) != 0)) {
        if (*(int *)((longlong)param_2 + 0xdc) == 0) {
LAB_14082cccc:
          uVar11 = 0;
        }
        else {
          uVar18 = *(uint *)((longlong)param_2 + 0xd8);
          uVar11 = 0;
          if ((-1 < (int)uVar18) && ((int)uVar18 < DAT_14c9647dc)) {
            puVar13 = (undefined8 *)
                      ((ulonglong)((uVar18 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8));
            if ((puVar13 == (undefined8 *)0x0) ||
               ((*(int *)(puVar13 + 2) != *(int *)((longlong)param_2 + 0xdc) ||
                ((*(uint *)(puVar13 + 1) & 0x10200000) != 0)))) goto LAB_14082cccc;
            uVar11 = *puVar13;
          }
        }
        uVar15 = 0;
        if (CONCAT44(uStack_37c,local_380) != 0) {
          uVar15 = local_378;
        }
        lVar24 = FUN_14082d677(uVar15,uVar11,*(undefined8 *)((longlong)param_2 + 0xf0));
        if ((lVar24 == 0) || ((*(byte *)(lVar24 + 0x18) & 0x40) != 0)) {
          local_1c8 = local_1c8 & 0xfffffffb;
          uVar28 = (undefined4)CONCAT71(uVar20,2);
        }
      }
      local_578 = (void *)0x0;
      local_598 = local_1a0;
      uStack_590 = uStack_198;
      local_588 = local_190;
      local_580 = *(undefined4 *)((longlong)param_1 + 0x8c);
      local_57c = 0x301;
      uStack_570 = 1;
      uVar26 = 0;
      FUN_144a3a3ee(&local_578,0);
      pvVar8 = local_578;
      memcpy(local_578,param_2,0xb8);
      *(undefined8 *)((longlong)pvVar8 + 0xb8) = 0;
      *(undefined8 *)((longlong)pvVar8 + 0xc0) = 0;
      *(undefined8 *)((longlong)pvVar8 + 200) = 0;
      *(undefined4 *)((longlong)pvVar8 + 0xd0) = 0xffffffff;
      *(undefined1 *)((longlong)pvVar8 + 0xd4) = 0;
      *(undefined8 *)((longlong)pvVar8 + 0xb8) = *(undefined8 *)((longlong)param_2 + 0xb8);
      uVar11 = *(undefined8 *)((longlong)param_2 + 200);
      *(undefined8 *)((longlong)pvVar8 + 0xc0) = *(undefined8 *)((longlong)param_2 + 0xc0);
      *(undefined8 *)((longlong)pvVar8 + 200) = uVar11;
      *(undefined4 *)((longlong)pvVar8 + 0xd0) = *(undefined4 *)((longlong)param_2 + 0xd0);
      *(undefined1 *)((longlong)pvVar8 + 0xd4) = *(undefined1 *)((longlong)param_2 + 0xd4);
      *(undefined8 *)((longlong)pvVar8 + 0xf8) = *(undefined8 *)((longlong)param_2 + 0xf8);
      uVar29 = *(undefined4 *)((longlong)param_2 + 0xd8);
      uVar30 = *(undefined4 *)((longlong)param_2 + 0xdc);
      uVar31 = *(undefined4 *)((longlong)param_2 + 0xe0);
      uVar4 = *(undefined4 *)((longlong)param_2 + 0xe4);
      uVar5 = *(undefined4 *)((longlong)param_2 + 0xec);
      uVar6 = *(undefined4 *)((longlong)param_2 + 0xf0);
      uVar7 = *(undefined4 *)((longlong)param_2 + 0xf4);
      *(undefined4 *)((longlong)pvVar8 + 0xe8) = *(undefined4 *)((longlong)param_2 + 0xe8);
      *(undefined4 *)((longlong)pvVar8 + 0xec) = uVar5;
      *(undefined4 *)((longlong)pvVar8 + 0xf0) = uVar6;
      *(undefined4 *)((longlong)pvVar8 + 0xf4) = uVar7;
      *(undefined4 *)((longlong)pvVar8 + 0xd8) = uVar29;
      *(undefined4 *)((longlong)pvVar8 + 0xdc) = uVar30;
      *(undefined4 *)((longlong)pvVar8 + 0xe0) = uVar31;
      *(undefined4 *)((longlong)pvVar8 + 0xe4) = uVar4;
      *(byte *)((longlong)param_1 + 0x103) = *(byte *)((longlong)param_1 + 0x103) | 4;
      uVar14 = 0;
      if (param_1 != (longlong *)0x0) {
        uVar18 = *(uint *)((longlong)param_1 + 0xc);
        uVar26 = (ulonglong)uVar18;
        if ((int)uVar18 < DAT_14c9647dc) {
          lVar24 = (ulonglong)((uVar18 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8);
        }
        else {
          lVar24 = 0;
        }
        uVar14 = (ulonglong)*(uint *)(lVar24 + 0x10);
        if (*(uint *)(lVar24 + 0x10) == 0) {
          LOCK();
          iVar10 = DAT_14c964868 + 1;
          UNLOCK();
          uVar18 = DAT_14c964868 + 1;
          bVar27 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar10;
          if (bVar27) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar18);
          }
          LOCK();
          uVar19 = *(uint *)(lVar24 + 0x10);
          bVar27 = uVar19 == 0;
          if (bVar27) {
            *(uint *)(lVar24 + 0x10) = uVar18;
            uVar19 = 0;
          }
          UNLOCK();
          if (bVar27) {
            uVar19 = uVar18;
          }
          uVar14 = (ulonglong)uVar19;
        }
      }
      local_3d8 = (undefined1)param_1[0x23];
      local_3e0 = uVar26 | uVar14 << 0x20;
      local_5b8 = local_408;
      local_3f8 = 0;
      local_3e8 = &PTR_LAB_14b4150d0;
      local_408[0] = FUN_143dce20a;
      local_5c0 = CONCAT71(local_5c0._1_7_,bVar23);
      local_5c8 = (code **)0x0;
      FUN_1405fd98c(&local_388,param_3,&local_598,uVar28);
      if (local_578 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    FUN_1403dfdc4(&local_388);
  }
  else {
    local_5a9 = *(byte *)(plVar12 + 0x15);
    FUN_1405fab15(&local_388);
    lVar24 = local_388;
    plVar22 = (longlong *)CONCAT44(uStack_37c,local_380);
    *(undefined4 *)(local_388 + 8) = param_3;
    *(undefined1 *)(local_388 + 0xc) = 1;
    *(longlong *)(local_388 + 0x10) = param_1[0x12];
    if ((longlong *)(local_388 + 0x18) != param_1 + 0x13) {
      plVar17 = param_1 + 0x13;
      if ((longlong *)param_1[0x19] != (longlong *)0x0) {
        plVar17 = (longlong *)param_1[0x19];
      }
      FUN_1400709d4((longlong *)(local_388 + 0x18),plVar17,(int)param_1[0x1a],
                    *(undefined4 *)(local_388 + 0x54));
    }
    if ((0.0 < *(float *)((longlong)param_1 + 0x8c)) && ((longlong)param_1 + 0x8c != lVar24 + 0x78))
    {
      *(float *)(lVar24 + 0x78) = *(float *)((longlong)param_1 + 0x8c);
      *(undefined1 *)(lVar24 + 0x7c) = 1;
    }
    if ((undefined8 *)((longlong)param_2 + 0x10) != (undefined8 *)(lVar24 + 0x1e0)) {
      *(undefined8 *)(lVar24 + 0x1f0) = *(undefined8 *)((longlong)param_2 + 0x20);
      uVar15 = *(undefined8 *)((longlong)param_2 + 0x18);
      *(undefined8 *)(lVar24 + 0x1e0) = *(undefined8 *)((longlong)param_2 + 0x10);
      *(undefined8 *)(lVar24 + 0x1e8) = uVar15;
      *(undefined1 *)(lVar24 + 0x1f8) = 1;
    }
    dVar32 = (double)param_1[0xcd];
    uVar30 = SUB84(dVar32,0);
    uVar31 = (undefined4)((ulonglong)dVar32 >> 0x20);
    dVar2 = (double)param_1[0xce];
    uVar28 = SUB84(dVar2,0);
    uVar29 = (undefined4)((ulonglong)dVar2 >> 0x20);
    dVar3 = 0.0;
    if ((((dVar32 != 0.0) || (NAN(dVar32))) || (dVar2 != 0.0)) || (NAN(dVar2))) {
      dVar3 = atan2(dVar2,dVar32);
      dVar3 = dVar3 * 57.29577951308232;
      uVar30 = (undefined4)param_1[0xcd];
      uVar31 = (undefined4)((ulonglong)param_1[0xcd] >> 0x20);
      uVar28 = (undefined4)param_1[0xce];
      uVar29 = (undefined4)((ulonglong)param_1[0xce] >> 0x20);
    }
    _X = SQRT((double)CONCAT44(uVar31,uVar30) * (double)CONCAT44(uVar31,uVar30) +
              (double)CONCAT44(uVar29,uVar28) * (double)CONCAT44(uVar29,uVar28));
    dVar32 = (double)param_1[0xcf];
    dVar2 = 0.0;
    if (((_X != 0.0) || (NAN(_X))) || ((dVar32 != 0.0 || (NAN(dVar32))))) {
      dVar2 = atan2(dVar32,_X);
      dVar2 = dVar2 * 57.29577951308232;
    }
    *(double *)(lVar24 + 0x200) = dVar2;
    *(double *)(lVar24 + 0x208) = dVar3;
    *(undefined8 *)(lVar24 + 0x210) = 0;
    *(undefined1 *)(lVar24 + 0x218) = 1;
    if ((undefined8 *)((longlong)param_2 + 0x28) != (undefined8 *)(lVar24 + 0x1a0)) {
      *(undefined8 *)(lVar24 + 0x1b0) = *(undefined8 *)((longlong)param_2 + 0x38);
      uVar15 = *(undefined8 *)((longlong)param_2 + 0x30);
      *(undefined8 *)(lVar24 + 0x1a0) = *(undefined8 *)((longlong)param_2 + 0x28);
      *(undefined8 *)(lVar24 + 0x1a8) = uVar15;
      *(undefined1 *)(lVar24 + 0x1b8) = 1;
    }
    if (param_1 + 0x1b != (longlong *)(lVar24 + 0x1c0)) {
      *(int *)(lVar24 + 0x1c0) = (int)param_1[0x1b];
      *(undefined1 *)(lVar24 + 0x1c4) = 1;
    }
    if (*(int *)(lVar24 + 0x2b0) != 0x4fc71eb4) {
      *(undefined8 *)(lVar24 + 0x2b8) = 0;
    }
    *(undefined4 *)(lVar24 + 0x2b0) = 0x4fc71eb4;
    lVar25 = param_1[0x1d];
    if (*(longlong *)(lVar24 + 0x2a8) != lVar25) {
      *(undefined8 *)(lVar24 + 0x2b8) = 0;
    }
    *(longlong *)(lVar24 + 0x2a8) = lVar25;
    memcpy((void *)(lVar24 + 0xa0),param_2,0x100);
    *(byte *)(lVar24 + 0x278) = *(byte *)(lVar24 + 0x278) & 0xfe | local_409;
    FUN_1407a29f8(lVar24,param_1[0x10] + 0x508);
    if (0 < (int)param_1[0x77]) {
      FUN_1408da3b0(lVar24 + 0x280,param_1 + 0x76);
    }
    (**(code **)(*(longlong *)(lVar24 + 0x58) + 0x20))(lVar24 + 0x58,0);
    *(longlong *)(lVar24 + 0x60) = param_1[0x79];
    FUN_1406022fe(lVar24 + 0x68,param_1 + 0x7a);
    if (0 < (int)param_1[0xd7]) {
      lVar25 = FUN_140ccfc10();
      FUN_1405dc634(lVar24 + 0x58,lVar25 + 0x58);
    }
    if ((*(byte *)((longlong)param_1 + 0x101) & 0x80) != 0) {
      FUN_14082cf0e(&local_388,uVar11,param_1[0x39],0);
      local_598 = (undefined8 *)((ulonglong)local_598 & 0xffffffff);
      local_490 = 0;
      uStack_488 = 0;
      memcpy(&uStack_590,param_2,0x100);
      local_598 = (undefined8 *)CONCAT71(local_598._1_7_,5);
      local_5a8 = (code *)param_1[0x39];
      if (local_5a8 != (code *)0x0 && DAT_14c950c29 == 1) {
        FUN_1456cec3c();
      }
      local_5a0 = local_370;
      if ((local_370 != 0) && ((DAT_14c950c29 & 1) != 0)) {
        FUN_1456cec3c(local_370);
      }
      local_5c0 = lVar24;
      local_5c8 = (code **)&local_438;
      (**(code **)(*plVar12 + 0x28))(plVar12,&local_388,&local_598,&local_5a8);
      local_350 = local_418;
      if ((local_418 != 0) && (DAT_14c950c29 != 0)) {
        FUN_1456cec3c(local_418);
      }
      bVar23 = local_5a9;
      local_1c8 = local_1c8 & 0xffffffef | *(uint *)(param_1 + 0x20) >> 0xe & 0x10;
      if (param_6 != 0) {
        if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
          lVar24 = param_1[4];
        }
        else {
          lVar24 = 0;
        }
        if (*(char *)(lVar24 + 0x178) == '\x03') {
          FUN_1403e12d4(local_f8);
        }
      }
      if (local_490 != 0) {
        FUN_1400020a8();
      }
      bVar23 = (bVar23 & 2) >> 1;
      goto LAB_14082c8e4;
    }
    local_478[0] = lVar24;
    if (plVar22 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar22 + 1) = (int)plVar22[1] + 1;
      UNLOCK();
    }
    local_5c8 = (code **)0x0;
    FUN_1405fd19a(param_1[0x39],plVar12,uVar11,local_478);
  }
  if (((*(byte *)((longlong)param_1 + 0x103) & 4) != 0) &&
     (lVar24 = (**(code **)(*param_1 + 0x180))(param_1), lVar24 != 0)) {
    if (param_1 == (longlong *)0x0) {
      uVar18 = 0;
      uVar14 = 0;
    }
    else {
      uVar18 = *(uint *)((longlong)param_1 + 0xc);
      if ((int)uVar18 < DAT_14c9647dc) {
        lVar25 = (ulonglong)((uVar18 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8);
      }
      else {
        lVar25 = 0;
      }
      uVar14 = (ulonglong)*(uint *)(lVar25 + 0x10);
      if (*(uint *)(lVar25 + 0x10) == 0) {
        LOCK();
        iVar10 = DAT_14c964868 + 1;
        UNLOCK();
        uVar19 = DAT_14c964868 + 1;
        bVar27 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar10;
        if (bVar27) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar19);
        }
        LOCK();
        uVar9 = *(uint *)(lVar25 + 0x10);
        bVar27 = uVar9 == 0;
        if (bVar27) {
          *(uint *)(lVar25 + 0x10) = uVar19;
          uVar9 = 0;
        }
        UNLOCK();
        if (bVar27) {
          uVar9 = uVar19;
        }
        uVar14 = (ulonglong)uVar9;
      }
    }
    local_598 = (undefined8 *)0x0;
    uStack_590 = uStack_590 & 0xffffffff00000000;
    FUN_1446efa72(&local_598,0,2,0x10);
    uStack_590 = CONCAT44(uStack_590._4_4_,2);
    *local_598 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar16 = DAT_14c758608 + 1;
    lVar25 = DAT_14c758608 + 1;
    if (lVar16 == 0) {
      LOCK();
      UNLOCK();
      lVar16 = DAT_14c758608 + 2;
      lVar25 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar25;
    local_598[2] = lVar16;
    *local_598 = &PTR_FUN_14b4150f0;
    local_598[3] = (ulonglong)uVar18 | uVar14 << 0x20;
    if (*(longlong *)(lVar24 + 0x1f0) == 0) {
      puVar13 = (undefined8 *)(lVar24 + 0x458);
    }
    else {
      puVar13 = (undefined8 *)(*(longlong *)(lVar24 + 0x1f0) + 0xf0);
    }
    uVar11 = *puVar13;
    local_388 = 0;
    local_380 = 0;
    FUN_14487d8d8(&local_388,&local_598);
    local_348 = 1;
    local_5c8 = (code **)&local_5a8;
    uVar18 = (uint)local_5a8;
    local_5a8 = (code *)CONCAT44(0xbf800000,uVar18 & 0xffff0000);
    FUN_1406f4044(uVar11,param_1 + 0xf3,&local_388,0x3f000000);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_348])(&local_388);
    if ((int)uStack_590 != 0) {
      if (local_598 == (undefined8 *)0x0) goto LAB_14082c511;
      (**(code **)*local_598)(local_598,0);
      FUN_1446efa72(&local_598,0,0,0x10);
      uStack_590 = uStack_590 & 0xffffffff00000000;
    }
    if (local_598 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14082c511:
  if (plVar22 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar22 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*plVar22)(plVar22);
      LOCK();
      piVar1 = (int *)((longlong)plVar22 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar22 + 0x10))(plVar22);
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_5e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14082ce84 FUN_14082ce84 body=136 status=ok
// SIG undefined FUN_14082ce84(void)

longlong FUN_14082ce84(undefined8 *param_1)

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
    if (DAT_14cb77e00 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = FUN_144837462(DAT_14cb77e00,local_40);
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



// FUNCTION 14082cf0e FUN_14082cf0e body=153 status=ok
// SIG undefined FUN_14082cf0e(void)

longlong FUN_14082cf0e(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  byte bVar1;
  longlong lVar2;
  
  FUN_1403dfaf8();
  FUN_14082cfa8(param_1,param_2);
  if ((param_3 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(param_3);
  }
  *(longlong *)(param_1 + 0x28) = param_3;
  lVar2 = FUN_14082d0fe(param_3);
  if (lVar2 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar2);
  }
  bVar1 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x18) = lVar2;
  if ((param_4 != 0) && ((bVar1 & 1) != 0)) {
    FUN_1456cec3c(param_4);
  }
  *(longlong *)(param_1 + 0x30) = param_4;
  return param_1;
}



// FUNCTION 14082cfa8 FUN_14082cfa8 body=341 status=ok
// SIG undefined FUN_14082cfa8(void)

void FUN_14082cfa8(longlong *param_1,longlong param_2)

{
  longlong lVar1;
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
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((param_2 == 0) || (DAT_14c950c29 == '\0')) {
    *param_1 = param_2;
    if (param_2 != 0) goto LAB_14082cfe3;
  }
  else {
    FUN_1456cec3c(param_2);
    *param_1 = param_2;
LAB_14082cfe3:
    if (DAT_14cb56270 == 0) {
      local_40 = &local_20;
      local_20 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_1427b09ee;
      local_48 = &LAB_148630fef;
      local_50 = FUN_1464b6a91;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10004001;
      local_70 = 8;
      local_78 = 0x28;
      FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
    }
    lVar1 = FUN_144718840(param_2,DAT_14cb56270);
    if (lVar1 != 0) {
      param_1[2] = lVar1;
      if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(param_2);
      }
      param_1[1] = param_2;
      goto LAB_14082d016;
    }
  }
  param_1[1] = 0;
  param_1[2] = 0;
LAB_14082d016:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14082d0fe FUN_14082d0fe body=279 status=ok
// SIG undefined FUN_14082d0fe(void)

longlong FUN_14082d0fe(longlong param_1)

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
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    if (DAT_14caf64b8 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141030f22;
      local_20 = FUN_14081d0ea;
      local_28 = FUN_142b4754c;
      local_38 = &LAB_147c45ce0;
      local_40 = &LAB_1463f1ff4;
      local_48 = &DAT_149e063b2;
      local_50 = 0x4000000000;
      local_58 = 0x10000004;
      local_60 = 8;
      local_68 = 0x428;
      FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
    }
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(DAT_14caf64b8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8) != DAT_14caf64b8 + 0x30)) {
      param_1 = *(longlong *)(param_1 + 0x1b0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14082d216 FUN_14082d216 body=516 status=ok
// SIG undefined FUN_14082d216(void)

void FUN_14082d216(longlong *param_1,undefined4 param_2,longlong *param_3,char param_4,
                  longlong *param_5)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  longlong *local_a0;
  longlong local_98 [2];
  undefined8 local_88 [7];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((param_1[1] == 0) || (param_1[2] == 0)) goto LAB_14082d3cb;
  if (param_4 != '\x01' || param_3 != (longlong *)0x0) goto LAB_14082d328;
  if ((*param_1 == 0) || (lVar5 = FUN_1447210f0(), lVar5 == 0)) {
    plVar9 = (longlong *)0x0;
LAB_14082d332:
    plVar6 = (longlong *)FUN_1405473b6();
    if (plVar6 != (longlong *)0x0) {
LAB_14082d33f:
      (**(code **)(*plVar6 + 0x128))(plVar6,param_1);
      plVar8 = (longlong *)0x0;
      if (param_1[1] != 0) {
        plVar8 = (longlong *)param_1[2];
      }
      (**(code **)(*plVar8 + 0x80))(plVar8,param_2,plVar6);
      pcVar2 = (code *)*param_5;
      if (pcVar2 != (code *)0x0) {
        plVar8 = param_5 + 4;
        if ((longlong *)param_5[2] != (longlong *)0x0) {
          plVar8 = (longlong *)param_5[2];
        }
        local_a8 = param_1;
        uVar7 = (**(code **)(*plVar8 + 8))();
        (*pcVar2)(uVar7,plVar6,&local_a8);
      }
      if (param_3 == (longlong *)0x0) {
        FUN_14025a2c6(plVar6);
      }
    }
    if (plVar9 == (longlong *)0x0) goto LAB_14082d3cb;
  }
  else {
    FUN_1405fd34a(&local_a8,lVar5);
    if (local_a0 == (longlong *)0x0) {
LAB_14082d328:
      plVar9 = (longlong *)0x0;
LAB_14082d32a:
      plVar6 = param_3;
      if (param_3 == (longlong *)0x0) goto LAB_14082d332;
      goto LAB_14082d33f;
    }
    iVar4 = (int)local_a0[1];
    do {
      if (iVar4 == 0) {
        plVar9 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_a0[1];
      bVar10 = iVar4 == iVar3;
      if (bVar10) {
        *(int *)(local_a0 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar9 = local_a0;
    } while (!bVar10);
    LOCK();
    piVar1 = (int *)((longlong)local_a0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_a0 + 0x10))();
    }
    plVar6 = local_a8;
    if (plVar9 == (longlong *)0x0) goto LAB_14082d328;
    if (local_a8 == (longlong *)0x0) goto LAB_14082d32a;
    local_98[0] = *param_5;
    local_88[0] = 0;
    if (local_98[0] != 0) {
      plVar8 = param_5 + 4;
      if ((longlong *)param_5[2] != (longlong *)0x0) {
        plVar8 = (longlong *)param_5[2];
      }
      (**(code **)*plVar8)(plVar8,local_88);
    }
    FUN_1409f7c80(plVar6,param_1,param_2,local_98);
  }
  LOCK();
  plVar6 = plVar9 + 1;
  *(int *)plVar6 = (int)*plVar6 + -1;
  UNLOCK();
  if ((int)*plVar6 == 0) {
    (**(code **)*plVar9)(plVar9);
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
  }
LAB_14082d3cb:
  if (*param_5 != 0) {
    plVar9 = param_5 + 4;
    if ((longlong *)param_5[2] != (longlong *)0x0) {
      plVar9 = (longlong *)param_5[2];
    }
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  if ((local_50 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14082d41c FUN_14082d41c body=603 status=ok
// SIG undefined FUN_14082d41c(void)

void FUN_14082d41c(undefined8 *param_1,longlong param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  double dVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = param_1[1];
  lVar5 = *(longlong *)*param_1;
  if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar5);
  }
  *(longlong *)(param_2 + 0x38) = lVar5;
  *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(lVar6 + 0x90);
  if (param_2 + 0x48 != lVar6 + 0x98) {
    lVar5 = lVar6 + 0x98;
    if (*(longlong *)(lVar6 + 200) != 0) {
      lVar5 = *(longlong *)(lVar6 + 200);
    }
    FUN_1400709d4(param_2 + 0x48,lVar5,*(undefined4 *)(lVar6 + 0xd0),*(undefined4 *)(param_2 + 0x84)
                 );
  }
  memcpy((void *)(param_2 + 0xa8),(void *)param_1[2],0x100);
  lVar5 = param_1[2];
  uVar4 = *(undefined8 *)(lVar5 + 0x30);
  *(undefined8 *)(param_2 + 0x1e8) = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(param_2 + 0x1f0) = uVar4;
  *(undefined8 *)(param_2 + 0x1f8) = *(undefined8 *)(lVar5 + 0x38);
  puVar2 = (undefined8 *)param_1[3];
  *(undefined8 *)(param_2 + 0x210) = puVar2[2];
  uVar4 = puVar2[1];
  *(undefined8 *)(param_2 + 0x200) = *puVar2;
  *(undefined8 *)(param_2 + 0x208) = uVar4;
  dVar3 = (double)*(float *)(lVar6 + 0xd8);
  *(double *)(param_2 + 0x218) = dVar3 * *(double *)(param_2 + 0x200);
  *(double *)(param_2 + 0x220) = *(double *)(param_2 + 0x208) * dVar3;
  *(double *)(param_2 + 0x228) = *(double *)(param_2 + 0x210) * dVar3;
  *(undefined8 *)(param_2 + 0x240) = *(undefined8 *)(param_2 + 0x228);
  *(undefined4 *)(param_2 + 0x230) = *(undefined4 *)(param_2 + 0x218);
  *(undefined4 *)(param_2 + 0x234) = *(undefined4 *)(param_2 + 0x21c);
  *(undefined4 *)(param_2 + 0x238) = *(undefined4 *)(param_2 + 0x220);
  *(undefined4 *)(param_2 + 0x23c) = *(undefined4 *)(param_2 + 0x224);
  uVar1 = (*(uint *)(param_2 + 0x1c0) & 0xfffffffd) + (uint)*(byte *)param_1[4] * 2;
  *(uint *)(param_2 + 0x1c0) = uVar1;
  if ((*(longlong *)(param_2 + 0x1a8) != *(longlong *)(lVar6 + 0xe8)) ||
     (*(int *)(param_2 + 0x1b0) != *(int *)(lVar6 + 0xf0))) {
    *(longlong *)(param_2 + 0x1a8) = *(longlong *)(lVar6 + 0xe8);
    *(undefined4 *)(param_2 + 0x1b0) = *(undefined4 *)(lVar6 + 0xf0);
    *(undefined8 *)(param_2 + 0x1b8) = 0;
  }
  *(uint *)(param_2 + 0x1c0) = uVar1 & 0xffffffef | *(uint *)(lVar6 + 0x100) >> 0xe & 0x10;
  FUN_1407a3302(param_2,*(longlong *)(lVar6 + 0x80) + 0x508);
  if (0 < *(int *)(lVar6 + 0x3b8)) {
    FUN_1408da3b0(param_2 + 0x2d0,lVar6 + 0x3b0);
  }
  (**(code **)(*(longlong *)(param_2 + 0x88) + 0x20))(param_2 + 0x88,0);
  *(undefined8 *)(param_2 + 0x90) = *(undefined8 *)(lVar6 + 0x3c8);
  FUN_1406022fe(param_2 + 0x98,lVar6 + 0x3d0);
  if (0 < *(int *)(lVar6 + 0x6b8)) {
    lVar5 = FUN_140ccfc10();
    FUN_1405dc634(param_2 + 0x88,lVar5 + 0x58);
  }
  if (*(longlong *)param_1[5] != 0) {
    if ((*(uint *)(lVar6 + 8) & 0x10) == 0) {
      lVar6 = *(longlong *)(lVar6 + 0x20);
    }
    else {
      lVar6 = 0;
    }
    if (*(char *)(lVar6 + 0x178) == '\x03') {
      FUN_1403e12d4(param_2 + 0x290);
      return;
    }
  }
  return;
}



// FUNCTION 14082d677 FUN_14082d677 body=114 status=ok
// SIG undefined FUN_14082d677(void)

undefined8 FUN_14082d677(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  undefined1 local_40 [32];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_1 + 0x20))();
    if (lVar1 != 0) {
      FUN_1407176ee(lVar1 + 0x270,local_40,param_2,param_3);
      uVar2 = FUN_1402179b4(local_40);
      goto LAB_14082d6cb;
    }
  }
  uVar2 = 0;
LAB_14082d6cb:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14082d6ea FUN_14082d6ea body=26 status=ok
// SIG undefined FUN_14082d6ea(void)

void FUN_14082d6ea(undefined8 param_1)

{
  FUN_1401c3c2c();
  FUN_14082d704(param_1);
  return;
}



// FUNCTION 14082d704 FUN_14082d704 body=123 status=ok
// SIG undefined FUN_14082d704(void)

void FUN_14082d704(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_1;
  FUN_14082d780(&local_18,0,param_1 + 0x638);
  if (*(char *)(param_1 + 0x999) == '\0') {
    FUN_14082d780(&local_18,1,param_1 + 0x878);
  }
  FUN_14082d780(&local_18,2,param_1 + 0x758);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14082d780 FUN_14082d780 body=1517 status=ok
// SIG undefined FUN_14082d780(void)

void FUN_14082d780(longlong *param_1,undefined1 param_2,longlong param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  bool bVar10;
  undefined1 auStack_b8 [47];
  undefined1 local_89;
  longlong local_88;
  undefined1 local_80 [8];
  undefined8 *local_78;
  int local_70;
  undefined8 *local_68;
  int local_60;
  undefined8 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar8 = *param_1;
  local_68 = (undefined8 *)0x0;
  local_60 = 0;
  FUN_1446efa72(&local_68,0,3,0x10);
  puVar2 = local_68;
  local_60 = 3;
  *local_68 = &PTR_LAB_14ac8c4e0;
  *(undefined1 *)(local_68 + 1) = param_2;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar7 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar7 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar7;
  local_68[2] = lVar3;
  *local_68 = &PTR_FUN_14ac8c470;
  local_68[3] = 0;
  iVar9 = 0;
  local_89 = param_2;
  if (lVar8 != 0) {
    uVar1 = *(uint *)(lVar8 + 0xc);
    *(uint *)(local_68 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    iVar9 = *(int *)(lVar7 + 0x10);
    if (*(int *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar9 = DAT_14c964868 + 1;
      UNLOCK();
      iVar6 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar9;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar6);
      }
      LOCK();
      iVar9 = *(int *)(lVar7 + 0x10);
      bVar10 = iVar9 == 0;
      if (bVar10) {
        *(int *)(lVar7 + 0x10) = iVar6;
        iVar9 = 0;
      }
      UNLOCK();
      if (bVar10) {
        iVar9 = iVar6;
      }
    }
  }
  *(int *)((longlong)puVar2 + 0x1c) = iVar9;
  puVar2[4] = &LAB_147f58792;
  *(undefined4 *)(puVar2 + 5) = 0;
  iVar9 = *(int *)(param_3 + 0x10);
  local_88 = param_3;
  if ((longlong)iVar9 != 0) {
    lVar7 = *(longlong *)(param_3 + 8);
    lVar3 = 0;
    do {
      lVar4 = *(longlong *)(lVar7 + lVar3);
      if ((lVar4 != 0) && (lVar4 = *(longlong *)(lVar4 + 0x3a8), lVar4 != 0)) {
        local_58 = (undefined8 *)0x0;
        local_50 = 0;
        FUN_140c19a3e(&local_58,&local_68);
        FUN_1408278de(lVar4 + 0x200,&local_78,&local_58);
        if (local_50 != 0) {
          if (local_58 == (undefined8 *)0x0) goto LAB_14082d929;
          (**(code **)*local_58)(local_58,0);
          FUN_1446efa72(&local_58,0,0,0x10);
          local_50 = 0;
        }
        if (local_58 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
LAB_14082d929:
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar9 * 8 != lVar3);
  }
  local_78 = (undefined8 *)0x0;
  local_70 = 0;
  FUN_1446efa72(&local_78,0,3,0x10);
  puVar2 = local_78;
  lVar7 = local_88;
  local_70 = 3;
  *local_78 = &PTR_LAB_14ac8c4e0;
  *(undefined1 *)(local_78 + 1) = local_89;
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
  local_78[2] = lVar4;
  *local_78 = &PTR_FUN_14ac8c470;
  local_78[3] = 0;
  iVar9 = 0;
  if (lVar8 != 0) {
    uVar1 = *(uint *)(lVar8 + 0xc);
    *(uint *)(local_78 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    iVar9 = *(int *)(lVar8 + 0x10);
    if (*(int *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar9 = DAT_14c964868 + 1;
      UNLOCK();
      iVar6 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar9;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar6);
      }
      LOCK();
      iVar9 = *(int *)(lVar8 + 0x10);
      bVar10 = iVar9 == 0;
      if (bVar10) {
        *(int *)(lVar8 + 0x10) = iVar6;
        iVar9 = 0;
      }
      UNLOCK();
      if (bVar10) {
        iVar9 = iVar6;
      }
    }
  }
  *(int *)((longlong)puVar2 + 0x1c) = iVar9;
  puVar2[4] = &LAB_147f587e2;
  *(undefined4 *)(puVar2 + 5) = 0;
  iVar9 = *(int *)(lVar7 + 0x30);
  if ((longlong)iVar9 != 0) {
    lVar8 = *(longlong *)(lVar7 + 0x28);
    lVar3 = 0;
    do {
      lVar4 = *(longlong *)(lVar8 + lVar3);
      if ((lVar4 != 0) && (lVar4 = *(longlong *)(lVar4 + 0x3a8), lVar4 != 0)) {
        local_58 = (undefined8 *)0x0;
        local_50 = 0;
        FUN_140c19a3e(&local_58,&local_78);
        FUN_1408278de(lVar4 + 0x200,local_80,&local_58);
        if (local_50 != 0) {
          if (local_58 == (undefined8 *)0x0) goto LAB_14082dabc;
          (**(code **)*local_58)(local_58,0);
          FUN_1446efa72(&local_58,0,0,0x10);
          local_50 = 0;
        }
        if (local_58 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
LAB_14082dabc:
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar9 * 8 != lVar3);
  }
  iVar9 = *(int *)(lVar7 + 0x40);
  if ((longlong)iVar9 != 0) {
    lVar8 = *(longlong *)(lVar7 + 0x38);
    lVar7 = 0;
    do {
      iVar6 = *(int *)(lVar8 + 4 + lVar7);
      if ((((iVar6 != 0) && (uVar1 = *(uint *)(lVar8 + lVar7), -1 < (int)uVar1)) &&
          ((int)uVar1 < DAT_14c9647dc)) &&
         (((plVar5 = (longlong *)
                     ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
           plVar5 != (longlong *)0x0 && ((int)plVar5[2] == iVar6)) &&
          (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 && (lVar3 = *plVar5, lVar3 != 0)))))) {
        local_58 = (undefined8 *)0x0;
        local_50 = 0;
        FUN_140c19a3e(&local_58,&local_68);
        FUN_1408278de(lVar3 + 0x200,local_80,&local_58);
        if (local_50 != 0) {
          if (local_58 == (undefined8 *)0x0) goto LAB_14082dbc5;
          (**(code **)*local_58)(local_58,0);
          FUN_1446efa72(&local_58,0,0,0x10);
          local_50 = 0;
        }
        if (local_58 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
LAB_14082dbc5:
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar9 * 8 != lVar7);
  }
  if (local_70 == 0) {
LAB_14082dc12:
    if (local_78 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_78 != (undefined8 *)0x0) {
    (**(code **)*local_78)(local_78,0);
    FUN_1446efa72(&local_78,0,0,0x10);
    local_70 = 0;
    goto LAB_14082dc12;
  }
  if (local_60 != 0) {
    if (local_68 == (undefined8 *)0x0) goto LAB_14082dc65;
    (**(code **)*local_68)(local_68,0);
    FUN_1446efa72(&local_68,0,0,0x10);
    local_60 = 0;
  }
  if (local_68 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_14082dc65:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14082dd6e FUN_14082dd6e body=42 status=ok
// SIG undefined FUN_14082dd6e(void)

void FUN_14082dd6e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_14082dd98(lVar1);
    FUN_1400020a8(lVar1);
    return;
  }
  return;
}



// FUNCTION 14082dd98 FUN_14082dd98 body=213 status=ok
// SIG undefined FUN_14082dd98(void)

void FUN_14082dd98(longlong *param_1)

{
  longlong lVar1;
  
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    FUN_14006ea12(lVar1);
    FUN_1400020a8(lVar1);
  }
  param_1 = (longlong *)*param_1;
  if (param_1 != (longlong *)0x0) {
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(param_1);
    return;
  }
  return;
}



// FUNCTION 14082de6e FUN_14082de6e body=26 status=ok
// SIG undefined FUN_14082de6e(void)

void FUN_14082de6e(undefined8 param_1)

{
  FUN_1405f1eac();
  FUN_14082de88(param_1);
  return;
}



// FUNCTION 14082de88 FUN_14082de88 body=211 status=ok
// SIG undefined FUN_14082de88(void)

void FUN_14082de88(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined *puVar3;
  uint *puVar4;
  longlong *plVar5;
  uint uVar6;
  
  if ((*(byte *)(param_1 + 0x65) & 0x18) == 0x10) {
    FUN_1407c0b34(param_1 + 0x410,param_1 + 0x408,param_1);
    uVar1 = *(ulonglong *)(param_1 + 0x28);
    if (uVar1 < 0xffffffff00000000) {
      plVar5 = DAT_14c9980d0;
      if (DAT_14c9980d8 == 0) {
        plVar5 = (longlong *)0x0;
      }
                    /* WARNING: Could not recover jumptable at 0x00014082df58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x58))(plVar5,param_1,uVar1,0xb);
      return;
    }
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
        *puVar4 = *puVar4 | 0x800;
        *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) | 1;
      }
    }
  }
  return;
}



// FUNCTION 14082df5c FUN_14082df5c body=309 status=ok
// SIG undefined FUN_14082df5c(void)

void FUN_14082df5c(longlong param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_148 [32];
  undefined8 *local_128;
  undefined4 local_120;
  undefined8 local_118 [12];
  undefined8 local_b8 [15];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_14082e092(param_1 + 0x150,param_1 + 0x410,param_1 + 0x138);
  fVar1 = *(float *)(param_1 + 0x2c);
  fVar2 = *(float *)(param_1 + 0x11c);
  puVar5 = (undefined8 *)(param_2 + 0x20);
  if (**(char **)(param_2 + 0x38) == '\0') {
    FUN_1447d5d8e(puVar5,0);
  }
  puVar4 = *(undefined8 **)(param_2 + 0x20);
  puVar6 = local_118;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  local_b8[0]._0_4_ = 0;
  puVar4 = (undefined8 *)(param_1 + 0x1b0);
  puVar6 = local_b8 + 2;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  local_128 = local_b8;
  local_120 = 1;
  FUN_1447d4b66(puVar5,&local_128,fVar1 * fVar2);
  if (**(char **)(param_2 + 0x38) == '\0') {
    FUN_1447d5d8e(puVar5,0);
  }
  FUN_1449437a2(*puVar5,local_b8,local_118);
  puVar5 = local_b8;
  puVar4 = (undefined8 *)(param_1 + 0x390);
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar4 = puVar4 + 1;
  }
  if ((local_40 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14082e092 FUN_14082e092 body=8346 status=ok
// SIG undefined FUN_14082e092(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14082e092(double *param_1,double *param_2,longlong *param_3)

{
  float *pfVar1;
  undefined8 *puVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  double dVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined1 (*pauVar13) [16];
  double *pdVar14;
  longlong lVar15;
  longlong lVar16;
  double *pdVar17;
  longlong lVar18;
  undefined1 (*pauVar19) [16];
  longlong lVar20;
  float fVar21;
  float fVar22;
  double dVar23;
  undefined1 auVar24 [16];
  float fVar25;
  uint uVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar45 [12];
  double dVar33;
  double dVar36;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar49;
  float fVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  double dVar56;
  float fVar57;
  undefined1 auStack_2b8 [32];
  undefined4 local_298;
  float local_290;
  float *local_288;
  float *local_280;
  longlong local_278;
  double local_268;
  double local_260;
  undefined1 local_258 [24];
  double local_240;
  undefined1 local_238 [16];
  double local_228;
  undefined8 uStack_220;
  undefined1 local_218 [16];
  double local_200;
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  undefined1 (*local_1d8) [16];
  undefined8 uStack_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined1 *local_178;
  undefined1 (**local_170) [16];
  double *local_168;
  undefined8 uStack_160;
  undefined1 local_158 [16];
  double local_148;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  double local_108;
  double dStack_100;
  double local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  iVar6 = (int)param_3[1];
  if (iVar6 == 0) {
    if (*(char *)(param_2 + 0x20) == '\x01') {
      dVar37 = param_2[0x1a];
      dVar41 = param_2[0x1b];
      dVar43 = param_2[0x1c];
      dVar5 = param_2[0x1d];
      dVar28 = param_2[0x1e];
      dVar33 = param_2[0x1f];
      dVar36 = param_2[0x21];
      param_1[0x31] = param_2[0x20];
      param_1[0x32] = dVar36;
      param_1[0x2f] = dVar28;
      param_1[0x30] = dVar33;
      param_1[0x2d] = dVar43;
      param_1[0x2e] = dVar5;
      param_1[0x2b] = dVar37;
      param_1[0x2c] = dVar41;
    }
    dVar37 = param_1[0x2e];
    dVar41 = param_1[0x2f];
    dVar28 = param_1[0x2b];
    dVar33 = param_1[0x2c];
    dVar43 = param_1[0x2d];
    dVar5 = param_1[0x30] - (double)*(float *)(param_2 + 0x18);
  }
  else {
    local_1d8 = (undefined1 (*) [16])0x0;
    uStack_1d0 = 0;
    if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar6);
    }
    FUN_14186df56(&local_1d8);
    lVar15 = param_3[1];
    if ((longlong)(int)lVar15 != 0) {
      lVar16 = *param_3;
      lVar20 = 0;
      do {
        uVar11 = uStack_1d0;
        puVar2 = (undefined8 *)(lVar16 + 0x338 + lVar20);
        uVar7 = *puVar2;
        uVar8 = puVar2[1];
        puVar2 = (undefined8 *)(lVar16 + 0x348 + lVar20);
        uVar9 = *puVar2;
        uVar10 = puVar2[1];
        pfVar1 = (float *)(lVar16 + 0x358 + lVar20);
        local_118 = *pfVar1;
        fStack_114 = pfVar1[1];
        fStack_110 = pfVar1[2];
        fStack_10c = pfVar1[3];
        uStack_128._0_4_ = (float)uVar9;
        uStack_128._4_4_ = (float)((ulonglong)uVar9 >> 0x20);
        fStack_120 = (float)uVar10;
        fStack_11c = (float)((ulonglong)uVar10 >> 0x20);
        local_138._0_4_ = (float)uVar7;
        local_138._4_4_ = (float)((ulonglong)uVar7 >> 0x20);
        uStack_130._0_4_ = (float)uVar8;
        uStack_130._4_4_ = (float)((ulonglong)uVar8 >> 0x20);
        lVar18 = (longlong)(int)uStack_1d0;
        uVar12 = (int)uStack_1d0 + 1;
        uStack_1d0 = CONCAT44(uStack_1d0._4_4_,uVar12);
        if (uStack_1d0._4_4_ < uVar12) {
          FUN_1487d79e8(&local_1d8,uVar11 & 0xffffffff);
        }
        *(ulonglong *)local_1d8[lVar18 * 3 + 2] = CONCAT44(fStack_114,local_118);
        *(ulonglong *)(local_1d8[lVar18 * 3 + 2] + 8) = CONCAT44(fStack_10c,fStack_110);
        *(ulonglong *)local_1d8[lVar18 * 3 + 1] = CONCAT44(uStack_128._4_4_,(float)uStack_128);
        *(ulonglong *)(local_1d8[lVar18 * 3 + 1] + 8) = CONCAT44(fStack_11c,fStack_120);
        *(ulonglong *)local_1d8[lVar18 * 3] = CONCAT44(local_138._4_4_,(float)local_138);
        *(ulonglong *)(local_1d8[lVar18 * 3] + 8) = CONCAT44(uStack_130._4_4_,(float)uStack_130);
        lVar20 = lVar20 + 0x4d0;
      } while ((longlong)(int)lVar15 * 0x4d0 - lVar20 != 0);
    }
    dVar43 = DAT_14c8462d0;
    dVar41 = DAT_14c8464e8;
    dVar5 = DAT_14c8464f0;
    dVar37 = DAT_14c8464e0;
    dVar28 = DAT_14c8462c0;
    dVar33 = DAT_14c8462c8;
    if (0 < (longlong)(int)uStack_1d0) {
      dVar43 = *(double *)local_1d8[1];
      dVar28 = *(double *)*local_1d8;
      dVar33 = *(double *)(*local_1d8 + 8);
      uVar51 = SUB84(dVar43,0);
      uVar52 = (undefined4)((ulonglong)dVar43 >> 0x20);
      pauVar13 = local_1d8;
      local_158._8_8_ = DAT_14c8464e8;
      local_148 = DAT_14c8464f0;
      local_158._0_8_ = DAT_14c8464e0;
      dVar36 = dVar33;
      dVar29 = dVar28;
      do {
        dVar27 = *(double *)*pauVar13;
        dVar38 = *(double *)(*pauVar13 + 8);
        dVar37 = dVar37 + dVar27;
        dVar41 = dVar41 + dVar38;
        dVar23 = *(double *)pauVar13[1];
        dVar5 = dVar5 + dVar23;
        local_158._0_8_ = (double)local_158._0_8_ + *(double *)(pauVar13[1] + 8);
        local_158._8_8_ = (double)local_158._8_8_ + *(double *)pauVar13[2];
        local_148 = local_148 + *(double *)(pauVar13[2] + 8);
        if (dVar23 <= dVar43) {
          dVar43 = dVar23;
        }
        if (dVar38 <= dVar33) {
          dVar33 = dVar38;
        }
        if (dVar27 <= dVar28) {
          dVar28 = dVar27;
        }
        if ((double)CONCAT44(uVar52,uVar51) <= dVar23) {
          uVar51 = SUB84(dVar23,0);
          uVar52 = (undefined4)((ulonglong)dVar23 >> 0x20);
        }
        if (dVar36 <= dVar38) {
          dVar36 = dVar38;
        }
        if (dVar29 <= dVar27) {
          dVar29 = dVar27;
        }
        pauVar13 = pauVar13 + 3;
      } while (pauVar13 != local_1d8 + (longlong)(int)uStack_1d0 * 3);
      dVar38 = 1.0 / (double)(int)uStack_1d0;
      local_148 = local_148 * dVar38;
      local_158._8_8_ = (double)local_158._8_8_ * dVar38;
      local_158._0_8_ = (double)local_158._0_8_ * dVar38;
      dVar27 = local_148 * local_148 +
               (double)local_158._0_8_ * (double)local_158._0_8_ +
               (double)local_158._8_8_ * (double)local_158._8_8_;
      if ((dVar27 != 1.0) || (NAN(dVar27))) {
        if (9.99999993922529e-09 <= dVar27) {
          dVar27 = 1.0 / SQRT(dVar27);
          local_148 = local_148 * dVar27;
          local_158._8_8_ = (double)local_158._8_8_ * dVar27;
          local_158._0_8_ = (double)local_158._0_8_ * dVar27;
          goto LAB_14082e42e;
        }
        local_148 = DAT_14c8464f0;
        local_158._8_8_ = DAT_14c8464e8;
        local_158._0_8_ = DAT_14c8464e0;
      }
      else {
LAB_14082e42e:
      }
      local_168 = (double *)0x0;
      uStack_160 = 0;
      FUN_1447a8aa0();
      if ((longlong)(int)uStack_1d0 != 0) {
        dVar43 = dVar43 - (double)CONCAT44(uVar52,uVar51);
        pauVar13 = local_1d8 + (longlong)(int)uStack_1d0 * 3;
        fVar21 = (float)(dVar43 * dVar43 +
                        (dVar33 - dVar36) * (dVar33 - dVar36) +
                        (dVar28 - dVar29) * (dVar28 - dVar29)) * 5e-07;
        fVar22 = 0.0001;
        if (0.0001 <= fVar21) {
          fVar22 = fVar21;
        }
        pdVar14 = local_168;
        pauVar19 = local_1d8;
        do {
          lVar15 = (longlong)(int)uStack_160;
          if (lVar15 != 0) {
            pdVar17 = pdVar14;
            do {
              dVar43 = *pdVar17 - *(double *)*pauVar19;
              dVar33 = pdVar17[1] - *(double *)(*pauVar19 + 8);
              dVar28 = pdVar17[2] - *(double *)pauVar19[1];
              if (dVar28 * dVar28 + dVar33 * dVar33 + dVar43 * dVar43 < (double)fVar22)
              goto LAB_14082e57a;
              pdVar17 = pdVar17 + 3;
            } while (pdVar17 != pdVar14 + lVar15 * 3);
          }
          uVar12 = (int)uStack_160 + 1;
          uStack_160 = CONCAT44(uStack_160._4_4_,uVar12);
          if (uStack_160._4_4_ < uVar12) {
            FUN_1403e3958(&local_168);
            pdVar14 = local_168;
          }
          pdVar14[lVar15 * 3 + 2] = *(double *)pauVar19[1];
          *(undefined1 (*) [16])(pdVar14 + lVar15 * 3) = *pauVar19;
LAB_14082e57a:
          pauVar19 = pauVar19 + 3;
        } while (pauVar19 != pauVar13);
      }
      dVar5 = dVar5 * dVar38;
      dVar41 = dVar41 * dVar38;
      dVar37 = dVar37 * dVar38;
      if ((longlong)(int)uStack_160 < 3) {
        dVar43 = local_148;
        dVar28 = (double)local_158._0_8_;
        dVar33 = (double)local_158._8_8_;
        if ((int)uStack_160 == 2) {
          dVar33 = local_168[2] - local_168[5];
          dVar43 = local_168[1] - local_168[4];
          dVar28 = *local_168 - local_168[3];
          dVar29 = 1.0 / SQRT(dVar33 * dVar33 + dVar28 * dVar28 + dVar43 * dVar43);
          dVar33 = dVar33 * dVar29;
          dVar43 = dVar43 * dVar29;
          dVar29 = dVar29 * dVar28;
          dVar27 = dVar29 * (double)local_158._8_8_ - (double)local_158._0_8_ * dVar43;
          dVar38 = dVar33 * (double)local_158._0_8_ - local_148 * dVar29;
          dVar28 = local_148 * dVar43 - (double)local_158._8_8_ * dVar33;
          dVar36 = dVar28 * dVar43 - dVar29 * dVar38;
          dVar29 = dVar27 * dVar29 - dVar33 * dVar28;
          dVar38 = dVar38 * dVar33 - dVar27 * dVar43;
          dVar27 = dVar36 * dVar36 + dVar38 * dVar38 + dVar29 * dVar29;
          if (((dVar27 != 1.0) || (dVar43 = dVar36, dVar28 = dVar38, dVar33 = dVar29, NAN(dVar27)))
             && (dVar43 = DAT_14c8464f0, dVar28 = DAT_14c8464e0, dVar33 = DAT_14c8464e8,
                9.99999993922529e-09 <= dVar27)) {
            dVar33 = 1.0 / SQRT(dVar27);
            dVar43 = dVar36 * dVar33;
            dVar28 = dVar38 * dVar33;
            dVar33 = dVar29 * dVar33;
          }
        }
      }
      else {
        local_238._8_8_ = 0;
        local_238._0_8_ = DAT_14c8464f0;
        local_218._8_8_ = 0;
        local_218._0_8_ = DAT_14c8464e8;
        local_228 = DAT_14c8464e0;
        local_258._0_4_ = 0xbf800000;
        dVar43 = 0.0;
        lVar15 = 0;
        dVar28 = 0.0;
        dVar33 = 0.0;
        dVar36 = 0.0;
        dVar29 = 0.0;
        dVar27 = 0.0;
        do {
          dVar38 = *(double *)((longlong)local_168 + lVar15 + 0x10);
          dVar40 = dVar38 - dVar5;
          dVar23 = *(double *)((longlong)local_168 + lVar15 + 8);
          dVar42 = dVar23 - dVar41;
          dVar39 = *(double *)((longlong)local_168 + lVar15) - dVar37;
          fVar22 = (float)(dVar39 * dVar39 + dVar42 * dVar42 + dVar40 * dVar40);
          if ((float)local_258._0_4_ < fVar22) {
            local_238._8_8_ = 0;
            local_238._0_8_ = dVar38;
            local_218._8_8_ = 0;
            local_218._0_8_ = dVar23;
            local_258._0_4_ = fVar22;
            local_228 = *(double *)((longlong)local_168 + lVar15);
          }
          uStack_220 = 0;
          dVar43 = dVar43 + dVar39 * dVar39;
          dVar28 = dVar28 + dVar39 * dVar42;
          dVar33 = dVar33 + dVar39 * dVar40;
          dVar36 = dVar36 + dVar42 * dVar42;
          dVar29 = dVar29 + dVar42 * dVar40;
          dVar27 = dVar27 + dVar40 * dVar40;
          lVar15 = lVar15 + 0x18;
        } while ((longlong)(int)uStack_160 * 0x18 != lVar15);
        local_178 = local_158;
        local_170 = &local_1d8;
        dVar38 = dVar36 * dVar27 - dVar29 * dVar29;
        dVar23 = 0.0;
        if (dVar38 <= 0.0) {
          dVar38 = dVar23;
        }
        dVar40 = dVar43 * dVar27 - dVar33 * dVar33;
        if (dVar40 <= 0.0) {
          dVar40 = dVar23;
        }
        if (dVar38 <= dVar40) {
          dVar38 = dVar40;
        }
        dVar40 = dVar43 * dVar36 - dVar28 * dVar28;
        if (dVar40 <= 0.0) {
          dVar40 = dVar23;
        }
        local_268 = dVar41;
        local_260 = dVar37;
        local_240 = dVar5;
        if ((0.01 <= dVar40) || (0.01 <= dVar38)) {
          fVar21 = ABS((float)dVar28);
          fVar22 = ABS((float)dVar43);
          if (fVar22 <= fVar21) {
            fVar22 = fVar21;
          }
          fVar54 = ABS((float)dVar36);
          fVar21 = ABS((float)dVar33);
          if (fVar21 <= fVar54) {
            fVar21 = fVar54;
          }
          if (fVar22 <= fVar21) {
            fVar22 = fVar21;
          }
          fVar54 = ABS((float)dVar27);
          fVar21 = ABS((float)dVar29);
          if (fVar21 <= fVar54) {
            fVar21 = fVar54;
          }
          if (fVar22 <= fVar21) {
            fVar22 = fVar21;
          }
          local_200 = dVar40;
          if ((fVar22 != 0.0) || (NAN(fVar22))) {
            fVar22 = 1.0 / fVar22;
            fVar21 = (float)dVar43 * fVar22;
            fVar25 = (float)dVar28 * fVar22;
            local_238 = ZEXT416((uint)fVar25);
            fVar54 = (float)dVar33 * fVar22;
            local_258._0_16_ = ZEXT416((uint)fVar54);
            fVar57 = (float)dVar36 * fVar22;
            fVar55 = (float)dVar29 * fVar22;
            local_218 = ZEXT416((uint)fVar55);
            fVar22 = fVar22 * (float)dVar27;
            fVar54 = fVar25 * fVar25 + fVar54 * fVar54 + fVar55 * fVar55;
            local_228 = dVar38;
            if (fVar54 <= 0.0) {
              local_138._0_4_ = 1.0;
              uStack_128._0_4_ = (float)local_138;
              uStack_128._4_4_ = 0.0;
              uStack_130._0_4_ = 0.0;
              uStack_130._4_4_ = 0.0;
              fStack_120 = 0.0;
              local_118 = 1.0;
              fVar54 = fVar22;
              if (fVar22 < fVar21) {
                uStack_130._0_4_ = 1.0;
                local_138._0_4_ = 0.0;
                fStack_120 = 1.0;
                local_118 = 0.0;
                fVar54 = fVar21;
                fVar21 = fVar22;
              }
              local_138._4_4_ = 0.0;
              fStack_11c = 0.0;
              if (fVar21 <= fVar57) {
                if (fVar54 < fVar57) {
                  local_118 = 0.0;
                  fStack_120 = 0.0;
                  fStack_11c = 1.0;
                }
              }
              else {
                uStack_130._0_4_ = 0.0;
                local_138._0_4_ = 0.0;
                local_138._4_4_ = 1.0;
              }
            }
            else {
              fVar49 = (fVar21 + fVar57 + fVar22) / 3.0;
              fVar53 = fVar21 - fVar49;
              fVar50 = fVar57 - fVar49;
              fVar25 = fVar22 - fVar49;
              fVar54 = (fVar54 + fVar54 + fVar25 * fVar25 + fVar53 * fVar53 + fVar50 * fVar50) / 6.0
              ;
              local_1e8 = ZEXT416((uint)fVar57);
              local_1f8 = ZEXT416((uint)fVar21);
              if (fVar54 < 0.0) {
                fVar54 = sqrtf(fVar54);
              }
              else {
                fVar54 = SQRT(fVar54);
              }
              fVar21 = ((((float)local_238._0_4_ * (float)local_218._0_4_ -
                         (float)local_258._0_4_ * fVar50) * (float)local_258._0_4_ +
                        (fVar53 * (fVar50 * fVar25 - fVar55 * fVar55) -
                        (fVar25 * (float)local_238._0_4_ -
                        (float)local_258._0_4_ * (float)local_218._0_4_) * (float)local_238._0_4_))
                       / (fVar54 * fVar54 * fVar54)) * 0.5;
              if (fVar21 <= -1.0) {
                fVar21 = -1.0;
              }
              if (1.0 <= fVar21) {
                fVar21 = 1.0;
              }
              fVar25 = -1.0;
              if (-1.0 <= fVar21) {
                fVar25 = fVar21;
              }
              fVar25 = acosf(fVar25);
              fVar55 = cosf(fVar25 / 3.0);
              fVar25 = cosf(fVar25 / 3.0 + 2.0943952);
              fVar57 = fVar49 - (fVar55 + fVar55 + fVar25 + fVar25) * fVar54;
              uVar51 = local_218._0_4_;
              local_290 = fVar22;
              if (fVar21 < 0.0) {
                local_298 = local_218._0_4_;
                local_288 = (float *)CONCAT44(local_288._4_4_,fVar54 * (fVar25 + fVar25) + fVar49);
                local_280 = (float *)&local_138;
                FUN_143cb84c8();
                local_278 = (longlong)&uStack_130 + 4;
                local_280 = (float *)CONCAT44(local_280._4_4_,fVar57);
                local_298 = uVar51;
                local_290 = fVar22;
                local_288 = (float *)&local_138;
                FUN_143cb8694();
                local_118 = (float)local_138 * (float)uStack_128 -
                            uStack_130._4_4_ * local_138._4_4_;
                fStack_11c = uStack_130._4_4_ * (float)uStack_130 -
                             (float)local_138 * uStack_128._4_4_;
                fStack_120 = local_138._4_4_ * uStack_128._4_4_ -
                             (float)uStack_128 * (float)uStack_130;
                dVar38 = local_228;
              }
              else {
                local_298 = local_218._0_4_;
                local_288 = (float *)CONCAT44(local_288._4_4_,fVar54 * (fVar55 + fVar55) + fVar49);
                local_280 = &fStack_120;
                FUN_143cb84c8();
                local_278 = (longlong)&uStack_130 + 4;
                local_280 = (float *)CONCAT44(local_280._4_4_,fVar57);
                local_298 = uVar51;
                local_290 = fVar22;
                local_288 = &fStack_120;
                FUN_143cb8694();
                uStack_130._0_4_ = uStack_130._4_4_ * fStack_11c - fStack_120 * (float)uStack_128;
                local_138._4_4_ = fStack_120 * uStack_128._4_4_ - uStack_130._4_4_ * local_118;
                local_138._0_4_ = (float)uStack_128 * local_118 - fStack_11c * uStack_128._4_4_;
                dVar38 = local_228;
              }
            }
          }
          else {
            local_138._0_4_ = 1.0;
            local_138._4_4_ = 0.0;
            uStack_130._0_4_ = 0.0;
            fStack_120 = 0.0;
            fStack_11c = 0.0;
            local_118 = 1.0;
          }
          dVar37 = local_260;
          local_f8 = (double)local_118;
          dStack_100 = (double)fStack_11c;
          local_108 = (double)fStack_120;
          local_188 = (double)(float)uStack_130;
          dStack_190 = (double)local_138._4_4_;
          local_198 = (double)(float)local_138;
          dVar43 = local_188 * local_188 + local_198 * local_198 + dStack_190 * dStack_190;
          if ((dVar43 != 1.0) || (NAN(dVar43))) {
            if (9.99999993922529e-09 <= dVar43) {
              dVar43 = 1.0 / SQRT(dVar43);
              local_188 = local_188 * dVar43;
              dStack_190 = dStack_190 * dVar43;
              local_198 = dVar43 * local_198;
            }
            else {
              local_198 = DAT_14c8464e0;
              dStack_190 = DAT_14c8464e8;
              local_188 = DAT_14c8464f0;
            }
          }
          if (local_188 < 0.0) {
            local_188 = -local_188;
            local_198 = -local_198;
            dStack_190 = -dStack_190;
          }
          dVar36 = local_198;
          dVar27 = local_188;
          dVar29 = dStack_190;
          if (0.0001 <= dVar38) {
            fVar22 = (float)(ABS(local_188) / 0.707099974155426);
            if ((float)(local_200 / dVar38) <= (float)(ABS(local_188) / 0.707099974155426)) {
              fVar22 = (float)(local_200 / dVar38);
            }
            if ((fVar22 < 1.0) &&
               (FUN_143cb76b6(&local_178,&local_1b0,&local_108), dVar36 = local_1b0,
               dVar27 = local_1a0, dVar29 = local_1a8, 0.0001 <= fVar22)) {
              FUN_14626118d(&local_1c8,&local_1b0,&local_198);
              dVar36 = local_1c8;
              dVar27 = local_1b8;
              dVar29 = local_1c0;
            }
          }
        }
        else {
          if (((9.999999747378752e-05 < ABS(local_228 - dVar37)) ||
              (9.999999747378752e-05 < ABS((double)local_218._0_8_ - dVar41))) ||
             (9.999999747378752e-05 < ABS((double)local_238._0_8_ - dVar5))) {
            local_108 = local_228 - dVar37;
            dStack_100 = (double)local_218._0_8_ - dVar41;
            local_f8 = (double)local_238._0_8_ - dVar5;
            FUN_143cb76b6(&local_178);
            dVar36 = (double)CONCAT44(local_138._4_4_,(float)local_138);
            dVar29 = (double)CONCAT44(uStack_130._4_4_,(float)uStack_130);
            fVar22 = (float)uStack_128;
            fVar21 = uStack_128._4_4_;
          }
          else {
            fVar22 = SUB84(local_148,0);
            fVar21 = (float)((ulonglong)local_148 >> 0x20);
            dVar29 = (double)local_158._8_8_;
            dVar36 = (double)local_158._0_8_;
          }
          dVar27 = (double)CONCAT44(fVar21,fVar22);
        }
        dVar38 = dVar27 * dVar27 + dVar36 * dVar36 + dVar29 * dVar29;
        if (((dVar38 != 1.0) || (dVar43 = dVar27, dVar28 = dVar36, dVar33 = dVar29, NAN(dVar38))) &&
           (dVar43 = DAT_14c8464f0, dVar28 = DAT_14c8464e0, dVar33 = DAT_14c8464e8,
           9.99999993922529e-09 <= dVar38)) {
          dVar33 = 1.0 / SQRT(dVar38);
          dVar43 = dVar27 * dVar33;
          dVar28 = dVar36 * dVar33;
          dVar33 = dVar29 * dVar33;
        }
      }
      if (local_168 != (double *)0x0) {
        FUN_1400020a8();
      }
    }
    if (local_1d8 != (undefined1 (*) [16])0x0) {
      FUN_1400020a8();
    }
  }
  dVar27 = *param_2;
  dVar38 = param_2[1];
  dVar23 = param_2[2];
  dVar29 = param_2[3];
  dVar36 = param_2[3];
  dVar39 = dVar33 * dVar27 - dVar28 * dVar38;
  dVar42 = dVar43 * dVar38 - dVar33 * dVar23;
  dVar44 = dVar28 * dVar23 - dVar43 * dVar27;
  dVar42 = dVar42 + dVar42;
  dVar44 = dVar44 + dVar44;
  dVar39 = dVar39 + dVar39;
  uStack_128 = dVar39 * dVar29 + dVar43 + (dVar44 * dVar27 - dVar42 * dVar38);
  dVar40 = (dVar39 * dVar38 - dVar44 * dVar23) + dVar29 * dVar42 + dVar28;
  uStack_130 = (dVar23 * dVar42 - dVar27 * dVar39) + dVar36 * dVar44 + dVar33;
  local_268 = dVar41;
  if (*(char *)(param_1 + 0x18) == '\x01') {
    dVar41 = param_1[0x28];
    dVar39 = param_1[0x29];
    dVar42 = dVar39 * dVar27 - dVar38 * dVar41;
    dVar44 = param_1[0x2a] * dVar38 - dVar23 * dVar39;
    dVar56 = dVar41 * dVar23 - param_1[0x2a] * dVar27;
    dVar44 = dVar44 + dVar44;
    dVar56 = dVar56 + dVar56;
    dVar42 = dVar42 + dVar42;
    local_148 = dVar42 * dVar29 + param_1[0x2a] + (dVar56 * dVar27 - dVar44 * dVar38);
    dVar41 = (dVar42 * dVar38 - dVar56 * dVar23) + dVar29 * dVar44 + dVar41;
    dVar36 = (dVar23 * dVar44 - dVar27 * dVar42) + dVar36 * dVar56 + dVar39;
    local_158._8_4_ = SUB84(dVar36,0);
    local_158._0_8_ = dVar41;
    local_158._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
    if (((9.999999747378752e-05 < ABS(dVar41 - dVar40)) ||
        (9.999999747378752e-05 < ABS(dVar36 - uStack_130))) ||
       (9.999999747378752e-05 < ABS(local_148 - uStack_128))) {
      local_138 = dVar40;
      if (*(char *)((longlong)param_1 + 0x1a4) == '\x01') {
        FUN_144829af8(param_1 + 0x3b,&local_108,&local_138,(longlong)param_2 + 0xc4);
        dVar41 = param_1[0x43];
        dVar28 = param_1[0x41];
        dVar33 = param_1[0x42];
        dVar40 = local_138;
      }
      else {
        local_298 = *(undefined4 *)(param_1 + 0x36);
        FUN_1467f873c(&local_108,local_158,&local_138);
        dVar41 = local_f8;
        dVar28 = local_108;
        dVar33 = dStack_100;
        dVar40 = local_138;
      }
      dVar27 = param_2[0xc];
      dVar38 = param_2[0xd];
      dVar23 = param_2[0xe];
      dVar36 = param_2[0xf];
      dVar42 = dVar28 * dVar23 - dVar27 * dVar41;
      dVar29 = dVar33 * dVar27 - dVar28 * dVar38;
      dVar39 = dVar41 * dVar38 - dVar33 * dVar23;
      dVar39 = dVar39 + dVar39;
      dVar42 = dVar42 + dVar42;
      dVar29 = dVar29 + dVar29;
      dVar43 = dVar29 * dVar36 + dVar41 + (dVar42 * dVar27 - dVar39 * dVar38);
      dVar28 = (dVar29 * dVar38 - dVar42 * dVar23) + dVar36 * dVar39 + dVar28;
      dVar33 = (dVar23 * dVar39 - dVar27 * dVar29) + param_2[0xf] * dVar42 + dVar33;
    }
  }
  else {
    param_1[0x43] = uStack_128;
    param_1[0x41] = dVar40;
    param_1[0x42] = uStack_130;
    *(undefined1 *)((longlong)param_1 + 0x1e1) = 0;
    *(undefined4 *)((longlong)param_1 + 0x1e4) = 0;
    param_1[0x44] = 0.0;
    param_1[0x45] = 0.0;
    param_1[0x46] = 0.0;
  }
  local_138._4_4_ = (float)((ulonglong)dVar40 >> 0x20);
  param_1[0x28] = dVar28;
  param_1[0x29] = dVar33;
  param_1[0x2a] = dVar43;
  if (1e-06 <= (float)(dVar43 + 1.0)) {
    dVar36 = (double)(float)(dVar43 + 1.0);
    dVar29 = -dVar33;
    dVar41 = dVar28;
  }
  else {
    dVar36 = 0.0;
    dVar29 = 0.0;
    dVar41 = -1.0;
  }
  dVar27 = dVar29 * dVar29 + 0.0;
  dVar38 = dVar36 * dVar36 + dVar41 * dVar41;
  auVar30._0_8_ = dVar27 + dVar38;
  auVar30._8_8_ = dVar27 + dVar38;
  auVar32._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar30._8_8_);
  auVar32._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar30._0_8_);
  auVar31 = sqrtpd(auVar30,auVar30);
  auVar46 = divpd(_DAT_149934d80,auVar31);
  auVar31._0_8_ = auVar46._0_8_ * 0.0;
  auVar31._8_8_ = dVar36 * auVar46._8_8_;
  auVar32 = blendvpd(_DAT_149935300,auVar31,auVar32);
  fVar22 = *(float *)(param_1 + 0x1b);
  if (ABS(fVar22) <= 1e-08) {
    fVar21 = 1.0;
    fVar54 = 1.0;
  }
  else {
    fVar21 = (float)(-(uint)(1e-08 < ABS((float)param_1[0x1a])) &
                    (uint)(1.0 / (fVar22 / (float)param_1[0x1a] + 1.0)));
    fVar54 = 0.0;
    if (1e-08 < ABS((float)param_1[0x19])) {
      fVar54 = 1.0 / (fVar22 / (float)param_1[0x19] + 1.0);
    }
  }
  pdVar14 = param_1 + 0x33;
  if (*(char *)((longlong)param_2 + 0x19c) != '\0') {
    pdVar14 = param_2 + 0x34;
  }
  fVar22 = *(float *)pdVar14;
  pdVar14 = (double *)((longlong)param_1 + 0x19c);
  if (*(char *)((longlong)param_2 + 0x1a4) != '\0') {
    pdVar14 = param_2 + 0x35;
  }
  fVar25 = *(float *)pdVar14;
  if (fVar22 <= 1e-08) {
    if (fVar22 < -1e-08) {
      fVar21 = fVar21 - fVar22 * (0.0 - fVar21);
    }
  }
  else {
    fVar21 = fVar21 + fVar22 * (1.0 - fVar21);
  }
  if (fVar25 <= 1e-08) {
    if (fVar25 < -1e-08) {
      fVar54 = fVar54 - fVar25 * (0.0 - fVar54);
    }
  }
  else {
    fVar54 = fVar54 + fVar25 * (1.0 - fVar54);
  }
  dVar27 = (double)fVar21 *
           (double)(-(ulonglong)(9.99999993922529e-09 <= auVar30._8_8_) &
                   (ulonglong)(dVar41 * auVar46._8_8_));
  dVar29 = (double)fVar54 *
           (double)(-(ulonglong)(9.99999993922529e-09 <= auVar30._0_8_) &
                   (ulonglong)(dVar29 * auVar46._0_8_));
  dVar41 = auVar32._8_8_;
  auVar46._0_8_ = dVar29 * dVar29;
  auVar46._8_8_ = dVar27 * dVar27;
  dVar36 = dVar41 * dVar41 + auVar46._8_8_;
  auVar34._0_8_ = auVar46._0_8_ + 0.0 + dVar36;
  auVar34._8_8_ = auVar46._0_8_ + 0.0 + dVar36;
  auVar32 = sqrtpd(auVar46,auVar34);
  auVar32 = divpd(_DAT_149934d80,auVar32);
  auVar35._0_8_ = auVar32._0_8_ * 0.0;
  auVar35._8_8_ = auVar32._8_8_ * dVar41;
  dVar41 = (double)((ulonglong)(dVar29 * auVar32._0_8_) &
                   -(ulonglong)(9.99999993922529e-09 <= auVar34._0_8_));
  dVar36 = (double)((ulonglong)(dVar27 * auVar32._8_8_) &
                   -(ulonglong)(9.99999993922529e-09 <= auVar34._8_8_));
  auVar24._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar34._8_8_);
  auVar24._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar34._0_8_);
  auVar32 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar35,auVar24);
  auVar45 = ZEXT812(0);
  if (9.99999993922529e-09 <= ABS(dVar43)) {
    auVar45._4_8_ = 0;
    auVar45._0_4_ =
         (float)(((dVar5 * dVar43 + dVar37 * dVar28 + local_268 * dVar33) -
                 (DAT_14c8464f0 * dVar43 + DAT_14c8464e0 * dVar28 + DAT_14c8464e8 * dVar33)) /
                dVar43);
  }
  auVar48._12_4_ = 0;
  auVar48._0_12_ = auVar45;
  dVar37 = auVar32._0_8_;
  dVar43 = auVar32._8_8_;
  local_258._8_8_ = dVar36;
  local_258._0_8_ = dVar41;
  if ((longlong)(int)param_3[1] != 0) {
    lVar15 = *param_3;
    uVar12 = 0;
    uVar26 = 0;
    fVar22 = 0.0;
    if (auVar45._0_4_ <= 0.0) {
      fVar22 = auVar45._0_4_;
    }
    local_268 = param_1[0x22];
    local_260 = param_1[0x20];
    local_240 = param_1[0x21];
    local_238._0_4_ = *(float *)(param_2 + 0x19);
    lVar16 = 0;
    do {
      dVar5 = *(double *)(lVar15 + 0x1f8 + lVar16);
      dVar28 = *(double *)(lVar15 + 0x200 + lVar16);
      dVar33 = *(double *)(lVar15 + 0x208 + lVar16);
      dVar27 = dVar36 * dVar33 + dVar28 * -dVar37;
      dVar27 = dVar27 + dVar27;
      dVar38 = dVar41 * dVar28 + dVar5 * -dVar36;
      dVar38 = dVar38 + dVar38;
      dVar29 = dVar37 * dVar5 + dVar33 * -dVar41;
      dVar29 = dVar29 + dVar29;
      dVar33 = (dVar41 * dVar29 + dVar27 * -dVar36 + dVar43 * dVar38 + dVar33 + local_268) -
               *(double *)(lVar15 + 0x90 + lVar16);
      dVar28 = (dVar38 * -dVar41 + dVar37 * dVar27 + dVar43 * dVar29 + dVar28 + local_240) -
               *(double *)(lVar15 + 0x88 + lVar16);
      dVar5 = (dVar29 * -dVar37 + dVar36 * dVar38 + dVar43 * dVar27 + dVar5 + local_260) -
              *(double *)(lVar15 + 0x80 + lVar16);
      fVar54 = (1.0 - *(float *)(lVar15 + 0x378 + lVar16)) * *(float *)(lVar15 + 0x214 + lVar16);
      fVar54 = fVar54 * fVar54;
      fVar21 = *(float *)(lVar15 + 0x210 + lVar16);
      if (fVar21 <= fVar54) {
        fVar21 = fVar54;
      }
      dVar5 = dVar5 * dVar5 + dVar28 * dVar28;
      fVar54 = 0.0;
      if ((double)fVar21 < dVar33 * dVar33 + dVar5) {
        fVar21 = fVar21 - (float)dVar5;
        fVar54 = 0.0;
        if (0.0 <= fVar21) {
          fVar54 = fVar21;
        }
        fVar54 = -(float)(dVar33 - (double)(SQRT(fVar54) *
                                           (float)(double)(-(ulonglong)(0.0 < dVar33) &
                                                           0x3ff0000000000000 |
                                                          ~-(ulonglong)(0.0 < dVar33) &
                                                          -(ulonglong)(dVar33 < 0.0) &
                                                          0xbff0000000000000)));
      }
      auVar47._0_4_ = ~-(uint)(ABS(fVar22) < ABS(fVar54)) & (uint)fVar22;
      auVar47._4_4_ = 0;
      auVar47._8_4_ = ~(uVar12 & 0x7fffffff) & uVar12;
      auVar47._12_4_ = ~(uVar26 & 0x7fffffff) & uVar26;
      auVar48 = auVar47 | ZEXT416((uint)(*(float *)(param_2 + 0x19) * fVar54) &
                                  -(uint)(ABS(fVar22) < ABS(fVar54)));
      lVar16 = lVar16 + 0x4d0;
      fVar22 = auVar48._0_4_;
      uVar12 = auVar48._8_4_;
      uVar26 = auVar48._12_4_;
    } while ((longlong)(int)param_3[1] * 0x4d0 - lVar16 != 0);
  }
  fVar21 = (float)(~-(uint)(ABS(auVar48._0_4_) < 0.0001) & (uint)auVar48._0_4_);
  local_158._0_4_ = fVar21;
  fVar22 = fVar21;
  if (*(char *)(param_1 + 0x18) == '\x01') {
    fVar54 = (float)param_1[6];
    if (0.0001 < ABS(fVar54 - fVar21)) {
      if (*(char *)((longlong)param_1 + 0x1a4) == '\x01') {
        fVar22 = *(float *)(param_1 + 0x3a);
        if (0.0 < *(float *)((longlong)param_2 + 0xc4)) {
          *(float *)((longlong)param_1 + 0x1cc) = fVar22;
          if (*(char *)((longlong)param_1 + 0x1bd) == '\0') {
            bVar3 = 0.001 < ABS(fVar22 - fVar21);
            *(bool *)((longlong)param_1 + 0x1bd) = bVar3;
            if (!bVar3) goto LAB_14082fc61;
          }
          else {
            *(undefined1 *)((longlong)param_1 + 0x1bd) = 1;
          }
          if (*(char *)((longlong)param_1 + 0x1bc) == '\0') {
            fVar22 = *(float *)((longlong)param_1 + 0x1b4);
            fVar54 = *(float *)(param_1 + 0x37);
            *(float *)((longlong)param_1 + 0x1c4) = fVar22;
            if (fVar22 < 0.0) {
              local_138 = dVar40;
              fVar22 = sqrtf(fVar22);
            }
            else {
              fVar22 = SQRT(fVar22);
            }
            *(float *)(param_1 + 0x39) = (fVar54 + fVar54) * fVar22;
            *(undefined1 *)((longlong)param_1 + 0x1bc) = 1;
          }
          fVar22 = *(float *)(param_1 + 0x38) + *(float *)((longlong)param_2 + 0xc4);
          if (0.1 <= fVar22) {
            fVar22 = 0.1;
          }
          fVar54 = DAT_14c7612cc;
          if (DAT_14c7612cc <= 1.0) {
            fVar54 = 1.0;
          }
          fVar54 = 1.0 / fVar54;
          iVar6 = DAT_14c7612d0;
          if ((int)(fVar22 / fVar54) < DAT_14c7612d0) {
            iVar6 = (int)(fVar22 / fVar54);
          }
          fVar22 = fVar22 - (float)iVar6 * fVar54;
          *(float *)(param_1 + 0x38) = fVar22;
          local_138._0_4_ = fVar54;
          if (0 < iVar6) {
            uVar12 = iVar6 + 1;
            do {
              FUN_143cba4c4(param_1 + 0x3a,local_158,(longlong)param_1 + 0x1c4,&local_138);
              uVar12 = uVar12 - 1;
            } while (1 < uVar12);
            fVar22 = *(float *)(param_1 + 0x38);
          }
          if ((0.0 < fVar22) && (fVar22 < fVar54)) {
            FUN_143cba4c4(param_1 + 0x3a,local_158,(longlong)param_1 + 0x1c4,param_1 + 0x38);
            *(undefined4 *)(param_1 + 0x38) = 0;
          }
          dVar40 = (double)CONCAT44(local_138._4_4_,(float)local_138);
          if (((1e+16 <= ABS(*(float *)((longlong)param_1 + 0x1d4))) ||
              (fVar22 = *(float *)(param_1 + 0x3a),
              ABS(*(float *)((longlong)param_1 + 0x1d4)) <= 0.01 && ABS(fVar22 - fVar21) <= 0.001))
             || (1e+16 <= ABS(fVar22))) {
            *(float *)(param_1 + 0x3a) = fVar21;
            *(undefined4 *)((longlong)param_1 + 0x1d4) = 0;
            *(undefined1 *)((longlong)param_1 + 0x1bd) = 0;
            *(undefined4 *)(param_1 + 0x38) = 0;
            fVar22 = fVar21;
          }
        }
      }
      else {
        fVar25 = fVar21 - fVar54;
        if (1e-08 <= fVar25 * fVar25) {
          fVar22 = *(float *)((longlong)param_2 + 0xc4) *
                   *(float *)((longlong)param_1 + (ulonglong)(fVar21 <= fVar54) * 4 + 0x1a8);
          if (fVar22 <= fVar25) {
            fVar25 = fVar22;
          }
          if (fVar25 <= -fVar22) {
            fVar25 = -fVar22;
          }
          fVar22 = fVar25 + fVar54;
        }
      }
    }
  }
  else {
    *(float *)(param_1 + 0x3a) = fVar21;
    *(undefined4 *)((longlong)param_1 + 0x1d4) = 0;
    *(undefined1 *)((longlong)param_1 + 0x1bd) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
LAB_14082fc61:
  fVar21 = *(float *)(param_2 + 0x33);
  dVar28 = DAT_14c8464f0;
  dVar5 = DAT_14c8464e8;
  dVar33 = DAT_14c8464e0;
  if (1e-08 <= fVar21) {
    if (fVar21 <= 1.0) {
      dVar33 = (double)fVar21;
      dVar28 = ((double)fVar22 - DAT_14c8464f0) * dVar33 + DAT_14c8464f0;
      dVar5 = (0.0 - DAT_14c8464e8) * dVar33 + DAT_14c8464e8;
      dVar33 = (0.0 - DAT_14c8464e0) * dVar33 + DAT_14c8464e0;
    }
    else {
      dVar28 = (double)fVar22;
      dVar5 = 0.0;
      dVar33 = 0.0;
    }
  }
  *param_1 = dVar41;
  param_1[1] = dVar36;
  *(undefined1 (*) [16])(param_1 + 2) = auVar32;
  param_1[4] = dVar33;
  param_1[5] = dVar5;
  param_1[6] = dVar28;
  param_1[7] = 0.0;
  *(undefined1 *)(param_1 + 0x18) = 1;
  dVar27 = param_1[0x1c];
  dVar38 = param_1[0x1d];
  dVar23 = param_1[0x1e];
  dVar39 = param_1[0x1f];
  dVar29 = dVar23 * dVar37 * -1.0 + ((dVar41 * dVar27 * -1.0 + dVar43 * dVar39) - dVar36 * dVar38);
  param_1[0xc] = dVar38 * dVar37 * -1.0 + dVar41 * dVar39 * 1.0 + dVar43 * dVar27 + dVar36 * dVar23;
  param_1[0xd] = dVar27 * dVar37 * 1.0 + dVar41 * dVar23 * -1.0 + dVar43 * dVar38 + dVar36 * dVar39;
  auVar4._8_4_ = SUB84(dVar29,0);
  auVar4._0_8_ = dVar39 * dVar37 * 1.0 +
                 ((dVar41 * dVar38 * 1.0 + dVar43 * dVar23) - dVar36 * dVar27);
  auVar4._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0xe) = auVar4;
  param_1[0x10] = dVar33 + param_1[0x20];
  param_1[0x11] = dVar5 + param_1[0x21];
  param_1[0x12] = dVar28 + param_1[0x22];
  param_1[0x13] = 0.0;
  param_1[0x14] = 1.0;
  param_1[0x15] = 1.0;
  param_1[0x16] = 1.0;
  param_1[0x17] = 0.0;
  if ((local_f0 ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
    local_138 = dVar40;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14083012e FUN_14083012e body=340 status=ok
// SIG undefined FUN_14083012e(void)

longlong * FUN_14083012e(longlong *param_1,longlong *param_2)

{
  if ((*param_1 != *param_2) || ((int)param_1[1] != (int)param_2[1])) {
    *param_1 = *param_2;
    *(int *)(param_1 + 1) = (int)param_2[1];
    param_1[2] = 0;
  }
  param_1[3] = param_2[3];
  if ((char)param_2[6] == '\0') {
    *(undefined1 *)(param_1 + 6) = 0;
    param_1[5] = param_2[5];
  }
  *(short *)(param_1 + 7) = (short)param_2[7];
  if ((char)param_2[10] == '\0') {
    *(undefined1 *)(param_1 + 10) = 0;
    param_1[9] = param_2[9];
  }
  FUN_140830282(param_1 + 0xb,param_2 + 0xb);
  param_1[0xd] = param_2[0xd];
  FUN_140830282(param_1 + 0xe,param_2 + 0xe);
  *(int *)(param_1 + 0x11) = (int)param_2[0x11];
  param_1[0x10] = param_2[0x10];
  if ((char)param_2[0x14] == '\0') {
    *(undefined1 *)(param_1 + 0x14) = 0;
    param_1[0x13] = param_2[0x13];
  }
  FUN_140830282(param_1 + 0x15,param_2 + 0x15);
  param_1[0x17] = param_2[0x17];
  FUN_140830282(param_1 + 0x18,param_2 + 0x18);
  *(int *)(param_1 + 0x1b) = (int)param_2[0x1b];
  param_1[0x1a] = param_2[0x1a];
  if ((char)param_2[0x1e] == '\0') {
    *(undefined1 *)(param_1 + 0x1e) = 0;
    param_1[0x1d] = param_2[0x1d];
  }
  *(int *)(param_1 + 0x20) = (int)param_2[0x20];
  param_1[0x1f] = param_2[0x1f];
  return param_1;
}



// FUNCTION 140830282 FUN_140830282 body=93 status=ok
// SIG undefined FUN_140830282(void)

undefined8 * FUN_140830282(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14063ab1b(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14083041a(param_1,iVar1);
      FUN_1408302df(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1408302df FUN_1408302df body=315 status=ok
// SIG undefined FUN_1408302df(void)

void FUN_1408302df(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    lVar3 = 0;
    do {
      *(undefined ***)(param_1 + lVar3) = &PTR_FUN_14a171dc0;
      *(undefined8 *)(param_1 + 8 + lVar3) = 0;
      *(undefined1 *)(param_1 + 0x10 + lVar3) = 0;
      if (*(char *)(param_2 + 0x10 + lVar3) == '\0') {
        *(undefined8 *)(param_1 + 8 + lVar3) = *(undefined8 *)(param_2 + 8 + lVar3);
      }
      puVar4 = (undefined8 *)(param_1 + lVar3);
      *puVar4 = &PTR_FUN_14b023890;
      lVar1 = param_2 + 0x38 + lVar3;
      *(undefined1 *)(puVar4 + 3) = *(undefined1 *)(lVar1 + -0x20);
      puVar4[4] = *(undefined8 *)(lVar1 + -0x18);
      *(undefined4 *)(puVar4 + 5) = *(undefined4 *)(lVar1 + -0x10);
      puVar4[6] = 0;
      FUN_14007b208(puVar4 + 7,lVar1);
      FUN_14007b208(param_1 + lVar3 + 0xd8,param_2 + lVar3 + 0xd8);
      FUN_14007b350(param_1 + lVar3 + 0x178,param_2 + lVar3 + 0x178);
      puVar4[0x5b] = 0;
      iVar2 = *(int *)(lVar1 + 0x2a8);
      _Src = *(void **)(lVar1 + 0x2a0);
      *(int *)(puVar4 + 0x5c) = iVar2;
      if ((longlong)iVar2 == 0) {
        *(undefined4 *)(param_1 + 0x2e4 + lVar3) = 0;
      }
      else {
        puVar4 = (undefined8 *)(param_1 + lVar3 + 0x2d8);
        FUN_14083056c(puVar4,iVar2,0);
        memcpy((void *)*puVar4,_Src,(longlong)iVar2 << 4);
      }
      lVar3 = lVar3 + 0x2e8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14083041a FUN_14083041a body=337 status=ok
// SIG undefined FUN_14083041a(void)

void FUN_14083041a(longlong param_1,int param_2,int param_3)

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
    uVar4 = (longlong)param_2 * 0x2e8;
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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14083048b;
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
LAB_14083048b:
    iVar5 = (int)(uVar4 / 0x2e8);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x2e8,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14083056c FUN_14083056c body=228 status=ok
// SIG undefined FUN_14083056c(void)

void FUN_14083056c(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = (longlong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(longlong)param_2 & 0xfffffffffffffff]];
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
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,4);
      }
    }
    iVar1 = (int)(uVar2 >> 4);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x10,4);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140830656 FUN_140830656 body=57 status=ok
// SIG undefined FUN_140830656(void)

void FUN_140830656(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb216d0 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb216d0 = FUN_140002ddd(FUN_146433ded,uVar1,L"GbxBrainAspect_NavGps");
  }
  return;
}



// FUNCTION 140830690 FUN_140830690 body=2745 status=ok
// SIG undefined FUN_140830690(void)

void FUN_140830690(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined4 *_Src;
  undefined8 *puVar6;
  undefined1 *_Src_00;
  undefined1 auStack_1b8 [32];
  undefined4 *local_198;
  undefined1 *local_190;
  undefined8 local_188;
  code *local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined1 local_160 [4];
  undefined4 local_15c;
  undefined4 local_bc;
  undefined4 local_90;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_38 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_188 = FUN_1446ddbd2();
      local_180 = FUN_1468d96f0;
      local_190 = (undefined1 *)0x0;
      local_198 = (undefined4 *)0x4008001;
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
            goto LAB_14083078c;
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
        local_190 = (undefined1 *)CONCAT44(local_190._4_4_,(int)plVar1[6]);
        local_198 = (undefined4 *)((ulonglong)local_198 & 0xffffffff00000000);
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
LAB_14083078c:
  local_40 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_188 = FUN_1446ddbd2();
      local_180 = FUN_1468d96f0;
      local_190 = (undefined1 *)0x0;
      local_198 = (undefined4 *)0x4008001;
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
            goto LAB_140830862;
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
        local_190 = (undefined1 *)CONCAT44(local_190._4_4_,(int)plVar1[6]);
        local_198 = (undefined4 *)((ulonglong)local_198 & 0xffffffff00000000);
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
LAB_140830862:
  local_48 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_188 = FUN_1446ddbd2();
      local_180 = FUN_1468d96f0;
      local_190 = (undefined1 *)0x0;
      local_198 = (undefined4 *)0x4008001;
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
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_48);
            goto LAB_140830938;
          }
        }
        puVar6 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar6 != &local_48) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_48,puVar6,(int)plVar1[6]);
          }
          else {
            memcpy(&local_48,puVar6,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_190 = (undefined1 *)CONCAT44(local_190._4_4_,(int)plVar1[6]);
        local_198 = (undefined4 *)((ulonglong)local_198 & 0xffffffff00000000);
        FUN_1400746b0(plVar1,&local_48,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_48,lVar2);
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
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
LAB_140830938:
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_188 = FUN_1446ddbd2();
      local_180 = FUN_1403a682c;
      local_190 = (undefined1 *)0x0;
      local_198 = (undefined4 *)0x108001;
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
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_60);
            goto LAB_140830a00;
          }
        }
        _Src = (undefined4 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src != &local_60) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_60,_Src,(int)plVar1[6]);
          }
          else {
            memcpy(&local_60,_Src,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_190 = (undefined1 *)CONCAT44(local_190._4_4_,(int)plVar1[6]);
        local_198 = (undefined4 *)((ulonglong)local_198 & 0xffffffff00000000);
        FUN_1400746b0(plVar1,&local_60,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_60,lVar2);
      }
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
LAB_140830a00:
  memset(local_160,0,0x100);
  local_90 = 0xffffffff;
  local_15c = 0x3f800000;
  local_bc = 0xffffffff;
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
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,local_160);
            goto LAB_140830ad0;
          }
        }
        _Src_00 = (undefined1 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src_00 != local_160) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,local_160,_Src_00,(int)plVar1[6]);
          }
          else {
            memcpy(local_160,_Src_00,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_190 = (undefined1 *)CONCAT44(local_190._4_4_,(int)plVar1[6]);
        local_198 = (undefined4 *)((ulonglong)local_198 & 0xffffffff00000000);
        FUN_1400746b0(plVar1,local_160,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,local_160,lVar2);
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
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_160);
  }
LAB_140830ad0:
  local_190 = local_160;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    local_190 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_198 = &local_178;
  local_168 = local_50;
  local_178 = local_60;
  uStack_174 = uStack_5c;
  uStack_170 = uStack_58;
  uStack_16c = uStack_54;
  FUN_14083114a(param_1,local_38,local_40,local_48);
  if ((local_30 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14083114a FUN_14083114a body=1331 status=ok
// SIG undefined FUN_14083114a(void)

void FUN_14083114a(longlong param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  bool bVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  float _X;
  longlong in_stack_00000030;
  undefined1 auStack_1d8 [32];
  undefined1 local_1b8;
  double *local_1b0;
  undefined4 local_1a8;
  longlong *local_198;
  longlong *local_190;
  double local_188;
  longlong *plStack_180;
  double local_178;
  undefined8 uStack_170;
  longlong local_168;
  undefined8 uStack_160;
  longlong local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  longlong local_138;
  longlong *local_128;
  longlong local_118 [4];
  longlong local_f8;
  longlong *local_e8;
  longlong local_d8 [4];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  float local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  lVar5 = FUN_1447210f0();
  if ((lVar5 == 0) || (lVar6 = *(longlong *)(param_1 + 0x3f0), lVar6 == 0)) goto LAB_140831235;
  lVar7 = *(longlong *)(lVar6 + 0x340);
  if (lVar7 == 0) {
    uVar8 = FUN_1405bb4b8();
    lVar7 = FUN_14477b664(uVar8);
    *(longlong *)(lVar6 + 0x340) = lVar7;
  }
  if (*(longlong *)(lVar6 + 0x348) == 0) {
    if ((lVar7 == 0) || (*(longlong *)(lVar6 + 0x338) == 0)) goto LAB_140831235;
    plVar11 = *(longlong **)(lVar7 + 0xb8);
    if ((plVar11 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar11 + 0x108))(plVar11), cVar3 == '\0')) {
      *(undefined8 *)(lVar6 + 0x348) = 0;
      goto LAB_140831235;
    }
    uVar8 = (**(code **)(*plVar11 + 0x110))(plVar11);
    lVar7 = FUN_144aff482(uVar8,(longlong *)(lVar6 + 0x338));
    *(longlong *)(lVar6 + 0x348) = lVar7;
    if (lVar7 == 0) goto LAB_140831235;
  }
  lVar6 = FUN_140831778();
  _X = 0.0;
  if (*(longlong *)(param_1 + 0x788) != 0) {
    FUN_14083167e(*(longlong *)(param_1 + 0x788),&local_188,0);
    _X = (float)(local_178 * local_178 +
                local_188 * local_188 + (double)plStack_180 * (double)plStack_180);
  }
  if ((((0.0 <= *(float *)(param_1 + 0x940)) &&
       (_X <= *(float *)(lVar6 + 0x98) * *(float *)(lVar6 + 0x98))) ||
      (dVar13 = *(double *)(in_stack_00000030 + 0x20) - *(double *)(param_1 + 0x958),
      dVar15 = *(double *)(in_stack_00000030 + 0x18) - *(double *)(param_1 + 0x950),
      dVar14 = *(double *)(in_stack_00000030 + 0x10) - *(double *)(param_1 + 0x948),
      dVar13 * dVar13 + dVar14 * dVar14 + dVar15 * dVar15 <=
      (double)(*(float *)(lVar6 + 0x94) * *(float *)(lVar6 + 0x94)))) ||
     (*(double *)(lVar5 + 0x6d0) - (double)*(float *)(param_1 + 0x940) <=
      (double)*(float *)(lVar6 + 0x9c))) goto LAB_140831235;
  FUN_1407f7f84(&local_188,lVar5);
  if (plStack_180 != (longlong *)0x0) {
    iVar4 = (int)plStack_180[1];
    do {
      if (iVar4 == 0) {
        plVar11 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar2 = (int)plStack_180[1];
      bVar12 = iVar4 == iVar2;
      if (bVar12) {
        *(int *)(plStack_180 + 1) = iVar4 + 1;
        iVar2 = iVar4;
      }
      iVar4 = iVar2;
      UNLOCK();
      plVar11 = plStack_180;
    } while (!bVar12);
    LOCK();
    piVar1 = (int *)((longlong)plStack_180 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plStack_180 + 0x10))();
    }
    dVar13 = local_188;
    if (plVar11 != (longlong *)0x0) {
      if (local_188 != 0.0) {
        local_158 = 0;
        uStack_150 = 0;
        local_168 = 0;
        uStack_160 = 0;
        local_178 = 0.0;
        uStack_170 = 0;
        local_188 = 0.0;
        plStack_180 = (longlong *)0x0;
        local_148 = 0xc0;
        local_138 = 0;
        local_128 = (longlong *)0x0;
        local_f8 = 0;
        local_e8 = (longlong *)0x0;
        local_b8 = 0;
        uStack_b0 = 0;
        local_a8 = 0;
        local_a0 = 0x3ff0000000000000;
        local_98 = 0x3ff0000000000000;
        local_90 = 0x3ff0000000000000;
        local_88 = 0x3f80000000000000;
        if (_X < 0.0) {
          local_80 = sqrtf(_X);
        }
        else {
          local_80 = SQRT(_X);
        }
        lVar6 = *(longlong *)(param_1 + 0x3f0);
        lVar7 = *(longlong *)(lVar6 + 0x340);
        if (lVar7 == 0) {
          uVar8 = FUN_1405bb4b8();
          lVar7 = FUN_14477b664(uVar8);
          *(longlong *)(lVar6 + 0x340) = lVar7;
        }
        lVar9 = *(longlong *)(lVar6 + 0x348);
        if (lVar9 == 0) {
          if ((lVar7 != 0) && (local_190 = (longlong *)(lVar6 + 0x338), *local_190 != 0)) {
            local_198 = *(longlong **)(lVar7 + 0xb8);
            if ((local_198 == (longlong *)0x0) ||
               (cVar3 = (**(code **)(*local_198 + 0x108))(), cVar3 == '\0')) {
              lVar9 = 0;
            }
            else {
              uVar8 = (**(code **)(*local_198 + 0x110))();
              lVar9 = FUN_144aff482(uVar8,local_190);
            }
            *(longlong *)(lVar6 + 0x348) = lVar9;
            goto LAB_140831430;
          }
        }
        else {
LAB_140831430:
          if ((param_1 != 0) && (lVar9 != 0)) {
            local_1b0 = &local_188;
            local_1a8 = 0;
            local_1b8 = 0;
            FUN_1408f2522(dVar13,lVar9,param_1,in_stack_00000030);
          }
        }
        if (local_f8 != 0) {
          plVar10 = local_e8;
          if (local_e8 == (longlong *)0x0) {
            plVar10 = local_d8;
          }
          (**(code **)(*plVar10 + 0x10))();
        }
        if (local_138 != 0) {
          plVar10 = local_128;
          if (local_128 == (longlong *)0x0) {
            plVar10 = local_118;
          }
          (**(code **)(*plVar10 + 0x10))();
        }
        if (local_158 != 0) {
          FUN_1400020a8();
        }
        if (local_168 != 0) {
          FUN_1400020a8();
        }
        if (local_178 != 0.0) {
          FUN_1400020a8();
        }
        if (local_188 != 0.0) {
          FUN_1400020a8();
        }
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
  *(undefined8 *)(param_1 + 0x958) = *(undefined8 *)(in_stack_00000030 + 0x20);
  uVar8 = *(undefined8 *)(in_stack_00000030 + 0x18);
  *(undefined8 *)(param_1 + 0x948) = *(undefined8 *)(in_stack_00000030 + 0x10);
  *(undefined8 *)(param_1 + 0x950) = uVar8;
  *(float *)(param_1 + 0x940) = (float)*(double *)(lVar5 + 0x6d0);
LAB_140831235:
  if ((local_70 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14083167e FUN_14083167e body=249 status=ok
// SIG undefined FUN_14083167e(void)

undefined8 * FUN_14083167e(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 *local_50;
  longlong local_48;
  undefined1 *local_40;
  undefined8 **local_38;
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = param_3;
  lVar4 = (**(code **)(*param_1 + 0x7b8))(param_1,param_3,1,0xffffffff);
  if (lVar4 == 0) {
    lVar4 = (**(code **)(param_1[0x57] + 0x18))(param_1 + 0x57,&local_58);
    if (lVar4 == 0) {
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
    }
    else {
      FUN_1457e87ce(&local_40,lVar4);
      FUN_146e2003a(local_28,param_2,lVar4);
      FUN_1448635f4(&local_40);
    }
  }
  else {
    param_2[2] = DAT_14c8464f0;
    uVar3 = DAT_14c8464e8._4_4_;
    uVar2 = (undefined4)DAT_14c8464e8;
    uVar1 = DAT_14c8464e0._4_4_;
    *(undefined4 *)param_2 = (undefined4)DAT_14c8464e0;
    *(undefined4 *)((longlong)param_2 + 4) = uVar1;
    *(undefined4 *)(param_2 + 1) = uVar2;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar3;
    local_38 = &local_50;
    local_40 = &LAB_143620340;
    local_50 = param_2;
    local_48 = lVar4;
    FUN_1448e6002(lVar4 + 0x138);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140831778 FUN_140831778 body=454 status=ok
// SIG undefined FUN_140831778(void)

longlong * FUN_140831778(void)

{
  ushort uVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_68 [40];
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb81ea0 == (longlong *)0x0) {
    memset(&DAT_14cb81ea8,0,0x1b8);
    FUN_145dbdd64(&DAT_14cb81ea8);
    DAT_14cb81ea0 = (longlong *)&DAT_14cb81ea8;
  }
  plVar3 = DAT_14cb81ea0;
  plVar2 = DAT_14cb81ea0 + 1;
  cVar4 = (char)DAT_14cb81ea0[2];
  plVar6 = plVar2;
  if (cVar4 == '\0') {
LAB_1408317ac:
    if (*plVar6 == 0) goto LAB_140831889;
    plVar6 = plVar2;
    if (cVar4 == '\0') {
LAB_1408317bd:
      if (*plVar6 == 0) goto LAB_140831826;
      if ((((int)DAT_14cb81ea0[3] == *(int *)(*plVar6 + 0x44)) || (DAT_14c9a1ab0 == 0)) ||
         (*plVar2 == 0)) goto LAB_1408317d1;
      uVar1 = *(ushort *)(*plVar2 + 0x28);
      if ((((short)uVar1 < 0) || (*(int *)(DAT_14c9a1ab0 + 0xd0) <= (int)(short)uVar1)) ||
         (plVar2 = *(longlong **)(*(longlong *)(DAT_14c9a1ab0 + 200) + (ulonglong)uVar1 * 8),
         plVar2 == (longlong *)0x0)) goto LAB_1408317d1;
      cVar4 = (**(code **)(*plVar2 + 0x2a8))(plVar2,DAT_14cb81ea0);
    }
    else {
      if (cVar4 == '\x02') {
        plVar6 = (longlong *)(*plVar2 + 0x30);
        goto LAB_1408317bd;
      }
LAB_140831826:
      if ((DAT_14c9a1ab0 == 0) || (*plVar2 == 0)) goto LAB_1408317d1;
      uVar1 = *(ushort *)(*plVar2 + 0x28);
      if (((short)uVar1 < 0) ||
         ((*(int *)(DAT_14c9a1ab0 + 0xd0) <= (int)(short)uVar1 ||
          (plVar2 = *(longlong **)(*(longlong *)(DAT_14c9a1ab0 + 200) + (ulonglong)uVar1 * 8),
          plVar2 == (longlong *)0x0)))) goto LAB_1408317d1;
      cVar4 = (**(code **)(*plVar2 + 0x2a0))(plVar2,DAT_14cb81ea0);
    }
    if (cVar4 == '\0') goto LAB_1408317d1;
  }
  else {
    if (cVar4 == '\x02') {
      plVar6 = (longlong *)(*plVar2 + 0x30);
      goto LAB_1408317ac;
    }
LAB_140831889:
    lVar5 = FUN_140162146();
    if (lVar5 == 0) goto LAB_1408317d1;
    FUN_144a884d2(local_40,"def_globals_inventory",0);
    FUN_140024ada(local_40,plVar3);
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  (**(code **)(*plVar3 + 0x20))(plVar3);
LAB_1408317d1:
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar3;
}



// FUNCTION 140831940 FUN_140831940 body=286 status=ok
// SIG undefined FUN_140831940(void)

undefined8 FUN_140831940(longlong param_1,undefined8 param_2)

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
    if (iVar1 == 2) goto LAB_140831a58;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140831a58;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_140831a58:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140831a05;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2);
      uVar6 = 1;
      goto LAB_140831a05;
    }
  }
  uVar6 = 0;
LAB_140831a05:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140831a60 FUN_140831a60 body=77 status=ok
// SIG undefined FUN_140831a60(void)

void FUN_140831a60(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x168) != param_2) {
    return;
  }
  lVar1 = FUN_1447210f0();
  if ((lVar1 != 0) && (*(longlong *)(param_1 + 0x518) != 0)) {
    FUN_14480f766(lVar1 + 0x3f8);
  }
  FUN_140aeefbc(param_1,0,1);
  return;
}



// FUNCTION 140831aae FUN_140831aae body=134 status=ok
// SIG undefined FUN_140831aae(void)

void FUN_140831aae(longlong *param_1,ushort param_2)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  int *piVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & (uint)param_2) * 4);
    if (iVar2 != -1) {
      do {
        puVar1 = (ushort *)(*param_1 + (longlong)iVar2 * 0xc);
        if (*puVar1 == param_2) {
          iVar3 = *(int *)((longlong)plVar4 + (longlong)*(int *)(puVar1 + 4) * 4);
          if (iVar3 == iVar2) {
            piVar5 = (int *)((longlong)plVar4 + (longlong)*(int *)(puVar1 + 4) * 4);
          }
          else {
            do {
              piVar5 = (int *)(*param_1 + (longlong)iVar3 * 0xc + 4);
              iVar3 = *piVar5;
            } while (iVar3 != iVar2);
          }
          *piVar5 = *(int *)(puVar1 + 2);
          FUN_140831b34(param_1,iVar2,1);
          return;
        }
        iVar2 = *(int *)(puVar1 + 2);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 140831b34 FUN_140831b34 body=138 status=ok
// SIG undefined FUN_140831b34(void)

void FUN_140831b34(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0xc + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0xc) = param_2;
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
      puVar7 = puVar7 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140831bbe FUN_140831bbe body=260 status=ok
// SIG undefined FUN_140831bbe(void)

void FUN_140831bbe(longlong param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  
  if (param_2 != 0) {
    lVar3 = 0;
    lVar4 = param_2;
    do {
      if ((*(uint *)(lVar4 + 8) & 0x30) != 0) goto LAB_140831bf0;
      lVar4 = *(longlong *)(lVar4 + 0x20);
    } while (lVar4 != 0);
    lVar3 = *(longlong *)(param_2 + 0x20);
LAB_140831bf0:
    if ((lVar3 == param_1) && (*(char *)(param_2 + 0x108) == '\0')) {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_2);
      }
      iVar1 = *(int *)(param_1 + 0x90);
      *(uint *)(param_1 + 0x90) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0x94) < iVar1 + 1U) {
        FUN_140831cc2((longlong *)(param_1 + 0x88),iVar1);
      }
      *(longlong *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar1 * 8) = param_2;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_2);
      }
      bVar5 = 1;
      if (*(longlong *)(param_2 + 0x178) != 0) {
        bVar5 = (*(byte *)(*(longlong *)(param_2 + 0x178) + 0x240) & 0x20) >> 4 | 5;
      }
      FUN_140191f3c(param_2,bVar5);
      cVar2 = FUN_14039924e(param_2);
      if (cVar2 != '\0') {
        FUN_14018b23a(param_1 + 0x98,param_2,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140831cc2 FUN_140831cc2 body=353 status=ok
// SIG undefined FUN_140831cc2(void)

void FUN_140831cc2(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140831d49;
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
LAB_140831d49:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140831e24 FUN_140831e24 body=1795 status=ok
// SIG undefined FUN_140831e24(void)

void FUN_140831e24(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  longlong *plVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  uint *puVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  ulonglong uVar22;
  longlong lVar23;
  ulonglong uVar24;
  uint uVar25;
  uint uVar26;
  undefined2 *puVar27;
  bool bVar28;
  uint local_68;
  
  iVar11 = (int)param_1[0x2d2] + (int)param_1[0x2ca] + (int)param_1[0x315];
  if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar11);
  }
  plVar1 = param_1 + 0x2cb;
  *(undefined4 *)(param_1 + 0x2cc) = 0;
  if (*(int *)((longlong)param_1 + 0x1664) != iVar11) {
    FUN_140832776(plVar1);
  }
  FUN_14083260e(plVar1,param_1 + 0x2c9);
  FUN_14083260e(plVar1,param_1 + 0x314);
  FUN_14083260e(plVar1,param_1 + 0x2d1);
  uVar8 = *(uint *)(param_1 + 0x2cc);
  lVar13 = (longlong)(int)uVar8;
  if (lVar13 != 0) {
    plVar14 = (longlong *)*plVar1;
    uVar15 = 0;
    bVar28 = *plVar14 == 0;
    uVar7 = 0;
    do {
      uVar16 = uVar7 + 1;
      if ((int)(uVar7 + 1) < (int)uVar8) {
        uVar16 = uVar8;
      }
      uVar25 = uVar7;
      uVar22 = (ulonglong)uVar7;
      do {
        uVar22 = uVar22 + 1;
        uVar26 = uVar16;
        if (lVar13 <= (longlong)uVar22) break;
        uVar25 = uVar25 + 1;
        uVar26 = uVar25;
      } while (bVar28 == (plVar14[uVar22] == 0));
      if (bVar28 == false) {
        if (uVar15 != uVar7) {
          memmove(plVar14 + (int)uVar15,plVar14 + uVar7,(longlong)(int)(uVar26 - uVar7) << 3);
        }
        uVar15 = uVar15 + (uVar26 - uVar7);
      }
      bVar28 = (bool)(bVar28 ^ 1);
      uVar7 = uVar26;
    } while ((longlong)uVar22 < lVar13);
    *(uint *)(param_1 + 0x2cc) = uVar15;
  }
  uVar8 = *(uint *)(param_1 + 0x2fe);
  *(undefined4 *)(param_1 + 0x2fe) = 0;
  cVar6 = (**(code **)(*param_1 + 0xbf0))(param_1);
  if (cVar6 == '\0') {
    uVar7 = *(uint *)(param_1 + 0x2fe);
  }
  else {
    cVar6 = FUN_1408326be(param_1);
    if (cVar6 == '\0') {
      uVar7 = *(uint *)(param_1 + 0x2fe);
    }
    else {
      *(undefined4 *)(param_1 + 0x2fe) = 1;
      uVar7 = 1;
    }
    if ((longlong)(int)param_1[0x2cc] != 0) {
      lVar13 = 0;
      do {
        uVar22 = *(ulonglong *)(*plVar1 + lVar13 * 8);
        uVar15 = ((uint)(uVar22 >> 0x14) & 0xffff ^ (uint)(uVar22 >> 4)) * -0x7a143595;
        uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
        uVar7 = uVar7 ^ (uVar15 >> 0x10 ^ uVar15) + (uVar7 >> 2) + uVar7 * 0x40 + 0x9e3779b9;
        lVar13 = lVar13 + 1;
      } while ((int)param_1[0x2cc] != lVar13);
    }
    *(uint *)(param_1 + 0x2fe) = uVar7;
  }
  if (uVar7 != uVar8) {
    *(undefined1 *)((longlong)param_1 + 0x17fc) = 1;
  }
  lVar13 = param_1[0x2ff];
  *(undefined4 *)(param_1 + 0x2ff) = 0;
  if ((longlong)(int)param_1[0x2cc] == 0) {
    iVar11 = 0;
  }
  else {
    plVar14 = (longlong *)param_1[0x2cb];
    plVar1 = plVar14 + (int)param_1[0x2cc];
    do {
      lVar3 = *plVar14;
      if (lVar3 != 0) {
        lVar9 = FUN_140832528();
        if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar9 + 0x38) * 8) == lVar9 + 0x30)) {
          iVar11 = *(int *)(lVar3 + 0x5e0);
          if (iVar11 == 0) {
            uVar17 = 1;
            uVar22 = 0;
            iVar12 = 0;
            iVar21 = 0;
          }
          else {
            puVar18 = *(uint **)(lVar3 + 0x5d8);
            if (*(uint **)(lVar3 + 0x5d8) == (uint *)0x0) {
              puVar18 = (uint *)(lVar3 + 0x5c8);
            }
            uVar8 = *puVar18;
            if (uVar8 == 0) {
              iVar12 = iVar11 + 0x1e;
              if (-1 < iVar11 + -1) {
                iVar12 = iVar11 + -1;
              }
              uVar22 = 0;
              uVar24 = (ulonglong)(uint)(iVar12 >> 5);
              if (iVar12 >> 5 < 1) {
                uVar24 = uVar22;
              }
              iVar12 = 0;
              do {
                if (uVar24 == uVar22) goto LAB_140832075;
                iVar12 = iVar12 + 0x20;
                uVar8 = puVar18[uVar22 + 1];
                uVar22 = uVar22 + 1;
              } while (uVar8 == 0);
            }
            else {
              uVar22 = 0;
              iVar12 = 0;
            }
            uVar17 = (ulonglong)(-uVar8 & uVar8);
            uVar24 = uVar17 * 2 + 1;
            lVar9 = 0x3f;
            if (uVar24 != 0) {
              for (; uVar24 >> lVar9 == 0; lVar9 = lVar9 + -1) {
              }
            }
            iVar21 = (iVar12 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
            if (iVar11 <= iVar21) {
              iVar21 = iVar11;
            }
          }
          if (iVar21 != iVar11) {
            local_68 = 0xffffffff;
            do {
              lVar9 = *(longlong *)(lVar3 + 0x5b8);
              lVar10 = (longlong)iVar21 * 0x1f0;
              iVar21 = *(int *)(lVar9 + 0x28 + lVar10);
              uVar7 = 0;
              uVar8 = iVar21 - 1;
              if (iVar21 == 0) {
                uVar8 = uVar7;
              }
              if (0 < (int)uVar8) {
                puVar27 = &DAT_149dfb77a;
                if (iVar21 != 0) {
                  puVar27 = *(undefined2 **)(lVar9 + lVar10 + 0x20);
                }
                lVar23 = 0;
                uVar24 = 0;
                do {
                  uVar7 = ((uint)(ushort)puVar27[lVar23] +
                          (uint)(0x19 < (ushort)puVar27[lVar23] - 0x61) * 0x20) - 0x20;
                  uVar15 = (uint)(uVar24 >> 8) ^
                           *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar24 ^ uVar7) & 0xff) * 4
                                    );
                  uVar7 = uVar15 >> 8 ^
                          *(uint *)(&DAT_14c75d150 +
                                   (ulonglong)(uVar15 & 0xff ^ uVar7 >> 8 & 0xff) * 4);
                  uVar24 = (ulonglong)uVar7;
                  lVar23 = lVar23 + 1;
                } while (uVar8 != (uint)lVar23);
              }
              uVar4 = *(undefined8 *)(lVar9 + 0x10 + lVar10);
              uVar5 = *(undefined8 *)(lVar9 + 0x18 + lVar10);
              uVar8 = (uint)((ulonglong)uVar5 >> 0x10);
              uVar15 = (uint)((ulonglong)uVar4 >> 0x10);
              uVar16 = (uint)uVar4 & 0xffff;
              uVar25 = ((uint)uVar4 << 0x10 | uVar16) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar15 << 0x13 | uVar15 & 0xffff) + (uVar16 >> 4);
              uVar15 = (uint)uVar5 & 0xffff;
              uVar25 = (uVar25 >> 2) + 0x9e3779b9 +
                       ((uint)uVar5 << 0x10 | uVar15) + (int)((ulonglong)uVar5 >> 0x20) +
                       (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar15 >> 4) + uVar25 * 0x40 ^ uVar25;
              uVar16 = uVar25 >> 0xd ^ -uVar25;
              uVar8 = uVar16 << 8 ^ (-0x61c88647 - uVar25) - uVar16;
              uVar15 = uVar8 >> 0xd ^ (uVar25 - uVar16) - uVar8;
              uVar25 = uVar15 >> 0xc ^ (uVar16 - uVar8) - uVar15;
              uVar16 = uVar25 << 0x10 ^ (uVar8 - uVar15) - uVar25;
              uVar8 = uVar16 >> 5 ^ (uVar15 - uVar25) - uVar16;
              uVar15 = uVar8 >> 3 ^ (uVar25 - uVar16) - uVar8;
              uVar16 = uVar15 << 10 ^ (uVar16 - uVar8) - uVar15;
              uVar8 = uVar7 >> 0xd ^ (uVar16 >> 0xf ^ uVar8 - (uVar15 + uVar16)) - uVar7;
              uVar15 = uVar8 << 8 ^ (-0x61c88647 - uVar7) - uVar8;
              uVar7 = uVar15 >> 0xd ^ (uVar7 - uVar8) - uVar15;
              uVar16 = uVar7 >> 0xc ^ (uVar8 - uVar15) - uVar7;
              uVar8 = uVar16 << 0x10 ^ (uVar15 - uVar7) - uVar16;
              uVar15 = uVar8 >> 5 ^ (uVar7 - uVar16) - uVar8;
              uVar7 = uVar15 >> 3 ^ (uVar16 - uVar8) - uVar15;
              uVar16 = uVar7 << 10 ^ (uVar8 - uVar15) - uVar7;
              uVar8 = *(uint *)(param_1 + 0x2ff);
              *(uint *)(param_1 + 0x2ff) =
                   (uVar8 >> 2) + uVar8 * 0x40 + -0x61c88647 +
                   (uVar16 >> 0xf ^ uVar15 - (uVar7 + uVar16)) ^ uVar8;
              local_68 = local_68 & ~(uint)uVar17;
              puVar18 = *(uint **)(lVar3 + 0x5d8);
              if (*(uint **)(lVar3 + 0x5d8) == (uint *)0x0) {
                puVar18 = (uint *)(lVar3 + 0x5c8);
              }
              iVar2 = *(int *)(lVar3 + 0x5e0);
              iVar21 = (int)uVar22;
              lVar9 = (longlong)iVar21;
              uVar8 = puVar18[lVar9] & local_68;
              if (uVar8 == 0) {
                iVar19 = iVar2 + 0x1e;
                if (-1 < iVar2 + -1) {
                  iVar19 = iVar2 + -1;
                }
                iVar19 = iVar19 >> 5;
                iVar12 = iVar12 + 0x20;
                iVar20 = iVar19;
                if (iVar19 < iVar21) {
                  iVar20 = iVar21;
                }
                if (iVar21 < iVar19) {
                  lVar10 = 0;
                  do {
                    uVar8 = puVar18[lVar9 + lVar10 + 1];
                    if (uVar8 != 0) {
                      uVar22 = (ulonglong)(iVar21 + (int)lVar10 + 1);
                      local_68 = 0xffffffff;
                      goto LAB_1408323a2;
                    }
                    iVar12 = iVar12 + 0x20;
                    lVar10 = lVar10 + 1;
                  } while (iVar20 - lVar9 != lVar10);
                  local_68 = 0xffffffff;
                  iVar21 = iVar20;
                }
                uVar22 = (ulonglong)(iVar21 + 1);
                iVar21 = iVar2;
              }
              else {
LAB_1408323a2:
                uVar17 = (ulonglong)(-uVar8 & uVar8);
                uVar24 = uVar17 * 2 + 1;
                lVar9 = 0x3f;
                if (uVar24 != 0) {
                  for (; uVar24 >> lVar9 == 0; lVar9 = lVar9 + -1) {
                  }
                }
                iVar21 = (iVar12 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
                if (iVar2 <= iVar21) {
                  iVar21 = iVar2;
                }
              }
            } while (iVar21 != iVar11);
          }
        }
      }
LAB_140832075:
      plVar14 = plVar14 + 1;
    } while (plVar14 != plVar1);
    iVar11 = (int)param_1[0x2ff];
  }
  if (iVar11 != (int)lVar13) {
    *(undefined1 *)((longlong)param_1 + 0x17fd) = 1;
  }
  return;
}



// FUNCTION 140832528 FUN_140832528 body=228 status=ok
// SIG undefined FUN_140832528(void)

longlong FUN_140832528(void)

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
  if (DAT_14c9a5da8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145a645e6;
    local_38 = &LAB_1470d648b;
    local_40 = FUN_140bbc22b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x608;
    FUN_14081cfa3(L"/Script/GbxEngine",L"SeparatedGestaltSkeletalMeshPart",&DAT_14c9a5da8,
                  &DAT_1470d648a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9a5da8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14083260e FUN_14083260e body=96 status=ok
// SIG undefined FUN_14083260e(void)

void FUN_14083260e(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    return;
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
    FUN_140cd402e(param_1,iVar2);
  }
  FUN_14083266e((longlong)iVar2 * 8 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 14083266e FUN_14083266e body=80 status=ok
// SIG undefined FUN_14083266e(void)

void FUN_14083266e(longlong param_1,longlong param_2,int param_3)

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



// FUNCTION 1408326be FUN_1408326be body=183 status=ok
// SIG undefined FUN_1408326be(void)

undefined8 FUN_1408326be(longlong param_1)

{
  uint uVar1;
  DWORD DVar2;
  DWORD DVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined4 extraout_var;
  ulonglong uVar6;
  
  lVar5 = *(longlong *)(param_1 + 0xb0);
  if (lVar5 == 0) {
    lVar5 = FUN_1448abda6(param_1);
    if (lVar5 == 0) goto LAB_1408326df;
    lVar5 = *(longlong *)(param_1 + 0xb0);
    if (lVar5 == 0) {
      lVar5 = FUN_1448abda6(param_1);
    }
  }
  if ((*(byte *)(lVar5 + 0x152) & 0xfe) == 4) {
    return 0;
  }
LAB_1408326df:
  lVar5 = DAT_14cb761b0;
  if (*(char *)(param_1 + 0x17ff) != '\x01') {
    return 0;
  }
  uVar1 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc60);
  uVar4 = (ulonglong)uVar1;
  if (((uVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (uVar1 == 2)) {
    uVar6 = 0;
  }
  else if (uVar1 == 1) {
    DVar2 = FUN_140ad26c0();
    DVar3 = GetCurrentThreadId();
    uVar4 = CONCAT44(extraout_var,DVar3);
    uVar6 = (ulonglong)(DVar2 != DVar3);
  }
  else {
    uVar6 = 1;
  }
  return CONCAT71((int7)(uVar4 >> 8),*(undefined1 *)(lVar5 + uVar6));
}



// FUNCTION 140832776 FUN_140832776 body=312 status=ok
// SIG undefined FUN_140832776(void)

void FUN_140832776(longlong param_1,int param_2)

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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1408327e0;
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
LAB_1408327e0:
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



// FUNCTION 1408328ae FUN_1408328ae body=343 status=ok
// SIG undefined FUN_1408328ae(void)

ulonglong FUN_1408328ae(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 unaff_RSI;
  undefined1 auStack_a8 [32];
  uint *local_88;
  uint local_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  switch(*(undefined1 *)(param_2 + 0x20)) {
  case 1:
    lVar1 = FUN_144a3a4ee(param_1,param_2,1);
    if (lVar1 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x50);
      local_78 = *(uint *)(param_2 + 0x24);
      uStack_74 = *(undefined4 *)(param_2 + 0x28);
      uStack_70 = *(undefined8 *)(param_2 + 0x2c);
LAB_14083291a:
      uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
      FUN_14016d7a8(uVar4,lVar1);
      goto LAB_140832939;
    }
    break;
  case 2:
    uVar2 = 0;
    lVar1 = FUN_144a3a4ee(param_1,param_2,0);
    if (lVar1 == 0) goto LAB_140832939;
    local_88 = &local_78;
    local_78 = local_78 & 0xffffff00;
    uStack_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 0;
    uStack_48 = 0;
    local_40 = 0;
    uStack_38 = 0;
    local_30 = 0;
    uStack_28 = 0;
    FUN_140042bb4(*(undefined8 *)(param_1 + 0x50),lVar1,*(undefined4 *)(param_2 + 0x34),0);
LAB_140832998:
    uVar2 = CONCAT71((int7)(uVar2 >> 8),1);
    goto LAB_140832939;
  case 3:
    lVar1 = FUN_144a3a4ee(param_1,param_2,1);
    if (lVar1 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x50);
      local_78 = *(uint *)(param_2 + 0x40);
      uStack_74 = *(undefined4 *)(param_2 + 0x44);
      uStack_70 = *(undefined8 *)(param_2 + 0x48);
      goto LAB_14083291a;
    }
    break;
  case 4:
    uVar2 = FUN_144a3a4ee(param_1,param_2,3);
    if (uVar2 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x50);
      uVar3 = FUN_140832a06(param_2 + 0x50);
      FUN_1409d961e(uVar4,uVar2,uVar3);
      goto LAB_140832998;
    }
  }
  uVar2 = 0;
LAB_140832939:
  if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 140832a06 FUN_140832a06 body=617 status=ok
// SIG undefined FUN_140832a06(void)

longlong FUN_140832a06(uint *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
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
  if (((((param_1[1] == 0) || (uVar3 = *param_1, (int)uVar3 < 0)) || (DAT_14c9647dc <= (int)uVar3))
      || ((plVar5 = (longlong *)
                    ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
          plVar5 == (longlong *)0x0 || (*(uint *)(plVar5 + 2) != param_1[1])))) ||
     (((*(uint *)(plVar5 + 1) & 0x10200000) != 0 || (lVar4 = *plVar5, lVar4 == 0)))) {
    if (*(longlong *)(param_1 + 2) != 0) {
      lVar4 = FUN_140007850();
      cVar2 = (*(code *)PTR_FUN_14c758760)();
      if ((lVar4 == 0) || (cVar2 == '\0')) {
        if (lVar4 == 0) {
          param_1[0] = 0;
          param_1[1] = 0;
          goto LAB_140832b36;
        }
        uVar3 = *(uint *)(lVar4 + 0xc);
        *param_1 = uVar3;
        if ((int)uVar3 < DAT_14c9647dc) {
          lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
        }
        else {
          lVar7 = 0;
        }
        uVar3 = *(uint *)(lVar7 + 0x10);
        if (*(uint *)(lVar7 + 0x10) == 0) {
          LOCK();
          iVar1 = DAT_14c964868 + 1;
          UNLOCK();
          uVar6 = DAT_14c964868 + 1;
          bVar8 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar1;
          if (bVar8) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar6);
          }
          LOCK();
          uVar3 = *(uint *)(lVar7 + 0x10);
          bVar8 = uVar3 == 0;
          if (bVar8) {
            *(uint *)(lVar7 + 0x10) = uVar6;
            uVar3 = 0;
          }
          UNLOCK();
          if (bVar8) {
            uVar3 = uVar6;
          }
        }
        param_1[1] = uVar3;
      }
      else {
        uVar3 = *(uint *)(lVar4 + 0xc);
        if ((int)uVar3 < DAT_14c9647dc) {
          lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
        }
        else {
          lVar7 = 0;
        }
        if ((*(uint *)(lVar7 + 8) & 0x8400000) == 0) {
          FUN_14485c47a(param_1,lVar4);
        }
      }
      if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0) goto LAB_140832ade;
    }
  }
  else {
LAB_140832ade:
    if (DAT_14cb0b430 == 0) {
      local_50 = &local_30;
      local_30 = FUN_1449e2820;
      local_40 = FUN_14081d0ea;
      local_48 = &LAB_145892f94;
      local_58 = &LAB_147d6dbf3;
      local_60 = &LAB_1464081e0;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10000001;
      local_80 = 8;
      local_88 = 0x138;
      FUN_14081cfa3(L"/Script/Engine",L"Texture",&DAT_14cb0b430,FUN_1464081be);
    }
    if ((*(int *)(DAT_14cb0b430 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb0b430 + 0x38) * 8) == DAT_14cb0b430 + 0x30)) goto LAB_140832b05;
  }
LAB_140832b36:
  lVar4 = 0;
LAB_140832b05:
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4;
}



// FUNCTION 140832c76 FUN_140832c76 body=57 status=ok
// SIG undefined FUN_140832c76(void)

void FUN_140832c76(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb237d8 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb237d8 = FUN_140002ddd(FUN_14643f594,uVar1,L"GpsTest_Territory");
  }
  return;
}



// FUNCTION 140832cb0 FUN_140832cb0 body=336 status=ok
// SIG undefined FUN_140832cb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140832cb0(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  double *pdVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  double dVar11;
  double dVar14;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auStack_78 [44];
  int local_4c;
  undefined8 *local_48;
  int *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_140832e02(param_1,iVar2);
  }
  lVar8 = *param_1;
  *(undefined4 *)(lVar8 + 8 + (longlong)iVar2 * 0xc) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(lVar8 + (longlong)iVar2 * 0xc) = *param_2;
  iVar3 = (int)param_1[3];
  *(uint *)(param_1 + 3) = iVar3 + 1U;
  local_4c = iVar2;
  if (*(uint *)((longlong)param_1 + 0x1c) < iVar3 + 1U) {
    FUN_144a2c682(param_1 + 2,iVar3);
  }
  puVar10 = (undefined8 *)((longlong)iVar3 * 0x60 + param_1[2]);
  for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar10 = *param_3;
    param_3 = param_3 + 1;
    puVar10 = puVar10 + 1;
  }
  local_40 = &local_4c;
  local_48 = param_2;
  FUN_140171856(param_1 + 8,local_34,&local_48,0);
  lVar8 = param_1[2];
  lVar9 = (longlong)local_4c * 0x60;
  dVar4 = *(double *)(lVar8 + lVar9);
  dVar5 = ((double *)(lVar8 + lVar9))[1];
  pdVar1 = (double *)(lVar8 + 0x10 + lVar9);
  dVar6 = *pdVar1;
  dVar7 = pdVar1[1];
  dVar11 = dVar6 * dVar6 + dVar4 * dVar4;
  dVar14 = dVar7 * dVar7 + dVar5 * dVar5;
  auVar12._0_8_ = dVar11 + dVar14;
  auVar12._8_8_ = dVar11 + dVar14;
  auVar13 = sqrtpd(auVar12,auVar12);
  auVar15 = divpd(_DAT_149934d80,auVar13);
  auVar16._0_8_ = auVar15._0_8_ * dVar6;
  auVar16._8_8_ = auVar15._8_8_ * dVar7;
  auVar13._8_8_ = -(ulonglong)(1e-08 <= auVar12._8_8_);
  auVar13._0_8_ = -(ulonglong)(1e-08 <= auVar12._0_8_);
  auVar13 = blendvpd(_DAT_149935300,auVar16,auVar13);
  *(ulonglong *)(lVar8 + lVar9) =
       (ulonglong)(dVar4 * auVar15._0_8_) & -(ulonglong)(1e-08 <= auVar12._0_8_);
  ((ulonglong *)(lVar8 + lVar9))[1] =
       (ulonglong)(dVar5 * auVar15._8_8_) & -(ulonglong)(1e-08 <= auVar12._8_8_);
  *(undefined1 (*) [16])(lVar8 + 0x10 + lVar9) = auVar13;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140832e02 FUN_140832e02 body=370 status=ok
// SIG undefined FUN_140832e02(void)

void FUN_140832e02(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0xc;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140832e8d;
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
LAB_140832e8d:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0xc)) {
    uVar7 = uVar5 / 0xc & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0xc,4);
  return;
}



// FUNCTION 140832f8e FUN_140832f8e body=57 status=ok
// SIG undefined FUN_140832f8e(void)

undefined8 * FUN_140832f8e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f63cf0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140832fc8 FUN_140832fc8 body=945 status=ok
// SIG undefined FUN_140832fc8(void)

void FUN_140832fc8(longlong param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  bool bVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_1b8 [32];
  undefined1 local_198;
  undefined1 local_190;
  longlong local_180;
  longlong local_178;
  undefined8 uStack_170;
  longlong *local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [8];
  undefined1 local_a0 [28];
  char local_84;
  undefined8 local_78;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if ((((param_1 != 0) && (*(longlong *)(param_1 + 0x218) != 0)) &&
      ((DAT_14cb05368 == 0 || (cVar3 = FUN_147a00126(), cVar3 == '\0')))) &&
     (((0 < (int)DAT_14cad2100 || (0 < (int)DAT_14cad2110)) || (*DAT_14cad20f0 != 0)))) {
    FUN_14083337a(param_1);
    if (*DAT_14cad20f0 != 0) {
      FUN_1405f0e9c(local_a8,param_1,5);
      if (local_84 == '\0') {
        do {
          local_b8 = (longlong *)0x0;
          local_b0 = 0x1800000000;
          FUN_147a0016e(local_78,&local_178);
          if (0 < (int)local_b0) {
            lVar8 = 0;
            do {
              plVar5 = local_b8;
              if (local_b8 == (longlong *)0x0) {
                plVar5 = &local_178;
              }
              FUN_147a000ae(plVar5[lVar8]);
              lVar8 = lVar8 + 1;
            } while (lVar8 < (int)local_b0);
          }
          if (local_b8 != (longlong *)0x0) {
            FUN_1400020a8();
          }
          FUN_14059e512(local_a8);
        } while (local_84 == '\0');
      }
      if (local_50 == '\x01') {
        FUN_14024445c(local_a0);
      }
    }
    local_178 = 0;
    uStack_170 = 0;
    if (0 < (longlong)(int)DAT_14cad2100) {
      iVar7 = -DAT_14cad2100;
      uVar9 = (longlong)(int)DAT_14cad2100;
      do {
        lVar8 = *(longlong *)(DAT_14cad20f8 + -8 + uVar9 * 8);
        lVar6 = *(longlong *)(lVar8 + 0xb0);
        if (lVar6 == 0) {
          lVar6 = FUN_1448abda6(lVar8);
        }
        uVar2 = uStack_170;
        if (lVar6 == param_1) {
          lVar6 = (longlong)(int)uStack_170;
          uVar4 = (int)uStack_170 + 1;
          uStack_170 = CONCAT44(uStack_170._4_4_,uVar4);
          if (uStack_170._4_4_ < uVar4) {
            FUN_145bdf7fc(&local_178,uVar2 & 0xffffffff);
          }
          *(longlong *)(local_178 + lVar6 * 8) = lVar8;
          if (uVar9 != DAT_14cad2100) {
            memmove((void *)(DAT_14cad20f8 + uVar9 * 8 + -8),(void *)(DAT_14cad20f8 + uVar9 * 8),
                    (longlong)(int)(DAT_14cad2100 + iVar7) << 3);
          }
          DAT_14cad2100 = DAT_14cad2100 - 1;
          FUN_147a13f52(&DAT_14cad20f8);
        }
        iVar7 = iVar7 + 1;
        bVar1 = 1 < uVar9;
        uVar9 = uVar9 - 1;
      } while (bVar1);
    }
    if (0 < (int)DAT_14cad2110) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cad2118);
      if (0 < (longlong)(int)DAT_14cad2110) {
        iVar7 = -DAT_14cad2110;
        uVar9 = (longlong)(int)DAT_14cad2110;
        do {
          lVar8 = *(longlong *)(DAT_14cad2108 + -8 + uVar9 * 8);
          lVar6 = *(longlong *)(lVar8 + 0xb0);
          if (lVar6 == 0) {
            lVar6 = FUN_1448abda6(lVar8);
          }
          if (lVar6 == param_1) {
            local_180 = (longlong)(int)uStack_170;
            uVar4 = (int)uStack_170 + 1;
            uStack_170 = CONCAT44(uStack_170._4_4_,uVar4);
            if (uStack_170._4_4_ < uVar4) {
              FUN_145bdf7fc(&local_178,local_180);
            }
            *(longlong *)(local_178 + local_180 * 8) = lVar8;
            if (uVar9 != DAT_14cad2110) {
              memmove((void *)(DAT_14cad2108 + uVar9 * 8 + -8),(void *)(DAT_14cad2108 + uVar9 * 8),
                      (longlong)(int)(DAT_14cad2110 + iVar7) << 3);
            }
            DAT_14cad2110 = DAT_14cad2110 - 1;
            FUN_147a13f52(&DAT_14cad2108);
          }
          iVar7 = iVar7 + 1;
          bVar1 = 1 < uVar9;
          uVar9 = uVar9 - 1;
        } while (bVar1);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cad2118);
    }
    local_190 = param_5;
    local_198 = param_4;
    (**(code **)(**(longlong **)(param_1 + 0x218) + 0x168))
              (*(longlong **)(param_1 + 0x218),&local_178,param_2,param_3);
    if (local_178 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14083337a FUN_14083337a body=2460 status=ok
// SIG undefined FUN_14083337a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14083337a(uint *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  byte bVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  undefined4 *puVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  undefined8 uVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  int iVar20;
  uint uVar21;
  undefined8 *puVar22;
  int iVar23;
  int iVar24;
  ulonglong uVar25;
  undefined1 uVar26;
  bool bVar27;
  undefined4 uVar28;
  undefined1 auStack_168 [32];
  int *local_148;
  undefined1 *local_140;
  undefined8 **local_138;
  uint *local_130;
  uint *local_128;
  undefined1 local_119;
  code *local_118;
  undefined1 *local_110;
  code *local_108;
  undefined8 local_100;
  undefined8 *local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined1 local_e1;
  int local_e0;
  undefined1 local_dc [7];
  undefined1 local_d5;
  int local_d4;
  undefined8 *local_d0;
  int local_c8;
  char local_c4;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_14107e8f0(&DAT_14cb10820,param_1);
  if ((((int)param_1[0xbe] < 1) && ((int)param_1[0xba] < 1)) &&
     ((*(byte *)((longlong)param_1 + 0x157) & 1) == 0)) goto LAB_140833b8a;
  puVar12 = param_1 + 0xa8;
  uVar14 = param_1[0xae];
  if (uVar14 == 0) {
    uVar19 = 1;
    uVar25 = 0;
    iVar20 = 0;
    uVar13 = 0;
  }
  else {
    puVar10 = *(uint **)(param_1 + 0xac);
    if (*(uint **)(param_1 + 0xac) == (uint *)0x0) {
      puVar10 = puVar12;
    }
    uVar13 = *puVar10;
    if (uVar13 == 0) {
      iVar20 = uVar14 + 0x1e;
      if (-1 < (int)(uVar14 - 1)) {
        iVar20 = uVar14 - 1;
      }
      uVar25 = 0;
      uVar19 = (ulonglong)(uint)(iVar20 >> 5);
      if (iVar20 >> 5 < 1) {
        uVar19 = uVar25;
      }
      iVar20 = 0;
      do {
        if (uVar19 == uVar25) goto LAB_140833475;
        iVar20 = iVar20 + 0x20;
        uVar13 = puVar10[uVar25 + 1];
        uVar25 = uVar25 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar25 = 0;
      iVar20 = 0;
    }
    uVar19 = (ulonglong)(-uVar13 & uVar13);
    uVar3 = uVar19 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    uVar13 = (iVar20 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
    if ((int)uVar14 <= (int)uVar13) {
      uVar13 = uVar14;
    }
  }
  if (uVar13 != uVar14) {
    uVar21 = 0xffffffff;
    uVar8 = uVar14;
    local_130 = puVar12;
    do {
      plVar5 = *(longlong **)(*(longlong *)(param_1 + 0xa4) + (longlong)(int)uVar13 * 0x10);
      if (plVar5 != (longlong *)0x0) {
        if ((*(uint *)(plVar5 + 1) >> 0x1e & 1) == 0) {
          (**(code **)(*plVar5 + 0x2e8))(plVar5);
          puVar12 = local_130;
        }
        *(byte *)(plVar5 + 0x17) = *(byte *)(plVar5 + 0x17) & 0xf7;
        uVar8 = param_1[0xae];
      }
      uVar21 = uVar21 & ~(uint)uVar19;
      puVar10 = *(uint **)(param_1 + 0xac);
      if (*(uint **)(param_1 + 0xac) == (uint *)0x0) {
        puVar10 = puVar12;
      }
      iVar7 = (int)uVar25;
      lVar18 = (longlong)iVar7;
      uVar13 = puVar10[lVar18] & uVar21;
      if (uVar13 == 0) {
        iVar23 = uVar8 + 0x1e;
        if (-1 < (int)(uVar8 - 1)) {
          iVar23 = uVar8 - 1;
        }
        iVar23 = iVar23 >> 5;
        iVar20 = iVar20 + 0x20;
        iVar24 = iVar23;
        if (iVar23 < iVar7) {
          iVar24 = iVar7;
        }
        if (iVar7 < iVar23) {
          lVar17 = 0;
          do {
            uVar13 = puVar10[lVar18 + lVar17 + 1];
            if (uVar13 != 0) {
              uVar25 = (ulonglong)(iVar7 + (int)lVar17 + 1);
              uVar21 = 0xffffffff;
              goto LAB_1408337f5;
            }
            iVar20 = iVar20 + 0x20;
            lVar17 = lVar17 + 1;
          } while (iVar24 - lVar18 != lVar17);
          uVar21 = 0xffffffff;
          iVar7 = iVar24;
        }
        uVar25 = (ulonglong)(iVar7 + 1);
        puVar12 = local_130;
        uVar13 = uVar8;
      }
      else {
LAB_1408337f5:
        uVar19 = (ulonglong)(-uVar13 & uVar13);
        uVar3 = uVar19 * 2 + 1;
        lVar18 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        uVar13 = (iVar20 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
        if ((int)uVar8 <= (int)uVar13) {
          uVar13 = uVar8;
        }
      }
    } while (uVar13 != uVar14);
  }
LAB_140833475:
  FUN_140116012(param_1 + 0xa4);
  if ((*(byte *)((longlong)param_1 + 0x153) & 4) != 0) {
    uVar14 = param_1[0xba];
    if ((longlong)(int)uVar14 != 0) {
      lVar18 = *(longlong *)(param_1 + 0xb8);
      lVar17 = 0;
      do {
        if (*(longlong **)(lVar18 + lVar17) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(lVar18 + lVar17) + 0x2e0))();
        }
        lVar17 = lVar17 + 8;
      } while ((longlong)(int)uVar14 * 8 != lVar17);
    }
    uVar14 = param_1[0xbe];
    if ((longlong)(int)uVar14 != 0) {
      lVar18 = *(longlong *)(param_1 + 0xbc);
      lVar17 = 0;
      do {
        if (*(longlong **)(lVar18 + lVar17) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(lVar18 + lVar17) + 0x2e0))();
        }
        lVar17 = lVar17 + 8;
      } while ((longlong)(int)uVar14 * 8 != lVar17);
    }
  }
  if (*(longlong **)(param_1 + 0x86) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x86) + 0x408))();
  }
  bVar4 = *(byte *)((longlong)param_1 + 0x153);
  *(byte *)((longlong)param_1 + 0x153) = bVar4 | 0x20;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cae91c0) && (FUN_144b3d300(&DAT_14cae91c0), DAT_14cae91c0 == -1)) {
    DAT_14cae91b0 = 0;
    _DAT_14cae91b8 = 0;
    atexit((_func_5014 *)&LAB_14355dc5a);
    _Init_thread_footer(&DAT_14cae91c0);
  }
  uVar25 = _DAT_14cae91b8;
  uVar14 = param_1[0xba];
  if (uVar14 != 0) {
    iVar20 = DAT_14cae91b8;
    lVar18 = (longlong)DAT_14cae91b8;
    _DAT_14cae91b8 = CONCAT44(DAT_14cae91bc,DAT_14cae91b8 + uVar14);
    if (DAT_14cae91bc - iVar20 < uVar14) {
      FUN_1406ca8e4(&DAT_14cae91b0,uVar25 & 0xffffffff);
    }
    FUN_144b1f628(lVar18 * 8 + DAT_14cae91b0,*(undefined8 *)(param_1 + 0xb8),uVar14);
  }
  if (*DAT_14cae9178 < 1) {
LAB_1408335bd:
    bVar27 = false;
  }
  else {
    iVar20 = DAT_14cae91b8;
    iVar7 = (**(code **)(*DAT_14c82b500 + 0x20))();
    if (iVar20 <= iVar7) goto LAB_1408335bd;
    iVar20 = (**(code **)(*DAT_14c82b500 + 0x20))();
    bVar27 = 2 < iVar20;
  }
  plVar5 = *(longlong **)(param_1 + 0x86);
  local_128 = param_1;
  local_119 = bVar27;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x3f8))(plVar5,param_1[0xbe] + DAT_14cae91b8);
  }
  if (bVar27 == false) {
    FUN_14355dc6c();
    local_138 = &local_d0;
    local_d0 = (undefined8 *)0x0;
    local_c8 = 0;
    local_108 = FUN_143562828;
    local_100 = &local_119;
    local_140 = (undefined1 *)((ulonglong)local_140 & 0xffffffff00000000);
    FUN_1401f8d10(L"ParallelFor Task",_DAT_14cae91b8 & 0xffffffff,1);
  }
  else {
    iVar20 = DAT_14cae91b8;
    uVar25 = _DAT_14cae91b8 & 0xffffffff;
    local_108 = (code *)0x0;
    local_100 = (undefined1 *)((ulonglong)local_100._4_4_ << 0x20);
    local_118 = FUN_143562828;
    local_110 = &local_119;
    if (DAT_14cae91b8 == 0) {
      FUN_14355dc6c(&local_128);
    }
    else {
      cVar6 = FUN_1447e0190();
      iVar7 = 0;
      if ((1 < iVar20 && cVar6 == '\x01') && (iVar7 = DAT_14c8335d8, iVar20 <= DAT_14c8335d8)) {
        iVar7 = iVar20;
      }
      lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      iVar7 = (uint)(*(undefined **)(lVar18 + 0x2c0) != &DAT_14c82ba00 ||
                    *(int *)(lVar18 + 0x2c8) == 0) + iVar7;
      if (DAT_14c8c27ac < 1) {
        memset(&local_d0,0,0x82);
        local_f0 = 0;
        local_f8 = (undefined8 *)((ulonglong)local_f8 & 0xffffffff00000000);
        local_d4 = 0;
        FUN_140e55932(&local_d0,&local_f0,&local_f8,&local_d4);
        iVar23 = local_d4;
        local_140 = &local_e1;
        local_148 = &local_e0;
        FUN_1457b80ec((ulonglong)local_f8 & 0xffffffff,local_d4,&local_d5,local_dc);
        DAT_14c8c27ac = iVar23;
        if ((0 < local_e0) && (local_e0 <= iVar23)) {
          DAT_14c8c27ac = local_e0;
        }
      }
      iVar23 = DAT_14c8c27ac;
      if (iVar7 < DAT_14c8c27ac) {
        iVar23 = iVar7;
      }
      uVar19 = 1;
      if (iVar23 < 2) {
        uVar28 = FUN_14355dc6c(&local_128);
        if (0 < iVar20) {
          iVar7 = 0;
          do {
            local_d0 = (undefined8 *)CONCAT44(local_d0._4_4_,iVar7);
            uVar28 = FUN_143562828(uVar28,&local_d0);
            iVar7 = iVar7 + 1;
          } while (iVar20 != iVar7);
        }
      }
      else {
        iVar7 = iVar23 * 6;
        iVar24 = -6;
        do {
          if (iVar7 <= iVar20) {
            uVar25 = (longlong)(iVar7 + iVar20 + -1) / (longlong)iVar7;
            uVar19 = uVar25 & 0xffffffff;
            iVar16 = (int)uVar25;
            uVar25 = (longlong)(iVar16 + iVar20 + -1) / (longlong)iVar16;
            iVar9 = (int)uVar25;
            uVar25 = uVar25 & 0xffffffff;
            if (iVar23 <= iVar9) break;
          }
          iVar9 = (int)uVar25;
          iVar16 = (int)uVar19;
          iVar7 = iVar7 - iVar23;
          iVar24 = iVar24 + 1;
        } while (iVar24 != 0);
        iVar23 = iVar23 + -1;
        lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        uVar26 = 6;
        if ((*(byte *)(lVar18 + 0xc60) & 0x37) != 0) {
          uVar26 = 0;
        }
        local_130 = param_1;
        FUN_144a85b52(&local_f0,1);
        puVar2 = (undefined8 *)(lVar18 + 0x308);
        puVar12 = (uint *)*puVar2;
        if (puVar12 != (uint *)0x0) goto LAB_14083394a;
        while( true ) {
          uVar14 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar14 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar14 | 1;
            __tlregdtor(&LAB_143560338);
          }
          lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar11 = *(undefined4 **)(lVar18 + 0x310);
          *(undefined8 *)(lVar18 + 0x310) = 0;
          if (puVar11 == (undefined4 *)0x0) {
            puVar11 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar11 = 0xffffffff;
          *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
          puVar11[0x12] = 0;
          *puVar2 = puVar11;
          FUN_140217a48(puVar2);
          puVar12 = (uint *)*puVar2;
LAB_14083394a:
          puVar22 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 0x3fU & 0xffffffffffffffc0);
          puVar10 = (uint *)(puVar22 + 0x10);
          uVar14 = puVar12[0x12];
          if (puVar10 <= puVar12 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
            LOCK();
            uVar13 = *puVar12;
            *puVar12 = *puVar12 + uVar14 + 1;
            UNLOCK();
            if ((uVar13 ^ uVar14) != 0xffffffff) break;
            puVar12 = (uint *)*puVar2;
            *puVar12 = 0xffffffff;
            *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
            puVar12[0x12] = 0;
            *puVar2 = puVar12;
            puVar22 = (undefined8 *)((longlong)puVar12 + 0x97U & 0xffffffffffffffc0);
            puVar10 = (uint *)(puVar22 + 0x10);
            uVar14 = 0;
            if (puVar10 <= puVar12 + 0x4000) {
              uVar14 = 1;
              goto LAB_1408339cd;
            }
          }
        }
        uVar14 = uVar14 + 1;
LAB_1408339cd:
        *(uint **)(puVar12 + 0x10) = puVar10;
        puVar12[0x12] = uVar14;
        *puVar22 = &PTR_FUN_149e002e8;
        *(undefined4 *)(puVar22 + 1) = 0;
        *puVar22 = &PTR_FUN_14a9bb4b0;
        puVar22[3] = L"ParallelFor Task";
        uVar15 = 0;
        *(undefined4 *)(puVar22 + 4) = 0;
        *(undefined4 *)(puVar22 + 5) = 0;
        *(int *)((longlong)puVar22 + 0x2c) = iVar20;
        *(int *)(puVar22 + 6) = iVar16;
        *(int *)((longlong)puVar22 + 0x34) = iVar9;
        puVar22[7] = &local_108;
        puVar22[8] = &local_118;
        puVar22[9] = &local_f0;
        *(undefined1 *)(puVar22 + 10) = uVar26;
        puVar22[0xb] = 0;
        puVar22[0xc] = 0;
        *(int *)((longlong)puVar22 + 0x24) = iVar9;
        *(int *)(puVar22 + 0xc) = iVar23;
        if (iVar23 != 0) {
          FUN_1448fd06e(puVar22 + 0xb,0);
          uVar15 = puVar22[0xb];
        }
        param_1 = local_130;
        FUN_144b24a97(uVar15,iVar23);
        if (puVar22 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar22 + 1) = *(int *)(puVar22 + 1) + 1;
          UNLOCK();
        }
        local_f8 = puVar22;
        FUN_140031c70(&local_f8);
        FUN_14355dc6c(&local_128);
        local_f8 = (undefined8 *)0x0;
        local_c4 = '\0';
        local_d0 = puVar22;
        local_c8 = iVar23;
        cVar6 = FUN_1401807a6(&local_d0,1);
        if (cVar6 == '\0') {
          (**(code **)(*(longlong *)CONCAT44(uStack_ec,local_f0) + 0x20))
                    ((longlong *)CONCAT44(uStack_ec,local_f0),0xffffffff,0);
        }
        if ((local_d0 != (undefined8 *)0x0) &&
           ((local_c4 != '\x01' ||
            (FUN_140031cf0(&local_d0,local_c8), local_d0 != (undefined8 *)0x0)))) {
          LOCK();
          piVar1 = (int *)(local_d0 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*local_d0)(local_d0,1);
          }
        }
        if (local_f8 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(local_f8 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*local_f8)(local_f8,1);
          }
        }
        FUN_144a75412(&local_f0);
      }
    }
  }
  if (*(longlong **)(param_1 + 0x86) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x86) + 0x400))();
  }
  uVar14 = param_1[0x80];
  if ((longlong)(int)uVar14 != 0) {
    lVar18 = *(longlong *)(param_1 + 0x7e);
    lVar17 = 0;
    do {
      if (*(longlong *)(lVar18 + lVar17) != 0) {
        FUN_144990e4c(*(longlong *)(lVar18 + lVar17),0);
      }
      lVar17 = lVar17 + 8;
    } while ((longlong)(int)uVar14 * 8 != lVar17);
  }
  *(byte *)((longlong)param_1 + 0x157) = *(byte *)((longlong)param_1 + 0x157) & 0xfe;
  bVar27 = (int)DAT_14cae91bc < 0;
  _DAT_14cae91b8 = (ulonglong)DAT_14cae91bc << 0x20;
  if (bVar27) {
    FUN_1417970e8(&DAT_14cae91b0,0);
  }
  *(byte *)((longlong)param_1 + 0x153) = *(byte *)((longlong)param_1 + 0x153) & 0xdf | bVar4 & 0x20;
LAB_140833b8a:
  if ((local_48 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140833d18 FUN_140833d18 body=80 status=ok
// SIG undefined FUN_140833d18(void)

undefined8 * FUN_140833d18(undefined8 *param_1)

{
  FUN_140833d68();
  *param_1 = &PTR_FUN_14ab9b470;
  param_1[0x72] = &PTR_FUN_14ab9bb20;
  *(undefined4 *)(param_1 + 0xc9) = 0;
  param_1[0xca] = 0x40b3880000000000;
  *(undefined1 *)(param_1 + 0xcb) = 1;
  return param_1;
}



// FUNCTION 140833d68 FUN_140833d68 body=170 status=ok
// SIG undefined FUN_140833d68(void)

undefined8 * FUN_140833d68(undefined8 *param_1)

{
  FUN_140833e12();
  *param_1 = &PTR_FUN_14a1bb130;
  param_1[0x72] = &PTR_FUN_14a1bb7e0;
  param_1[0xc0] = 0;
  *(undefined4 *)(param_1 + 0xc1) = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5d1) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5e4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5ec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x614) = 0;
  param_1[0xc4] = 0;
  *(undefined4 *)(param_1 + 0xc5) = 0;
  *(undefined2 *)(param_1 + 0xc6) = 2;
  *(undefined4 *)((longlong)param_1 + 0x634) = 5;
  *(undefined1 *)(param_1 + 199) = 0;
  *(undefined4 *)((longlong)param_1 + 0x63c) = 0x461c4000;
  param_1[200] = 0;
  return param_1;
}



// FUNCTION 140833e12 FUN_140833e12 body=1362 status=ok
// SIG undefined FUN_140833e12(void)

undefined8 * FUN_140833e12(undefined8 *param_1,longlong param_2)

{
  void **ppvVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  int iVar7;
  void *_Src;
  longlong lVar8;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined2 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined8 *local_70;
  undefined1 *local_68;
  code *local_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  void *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1446f470e(&local_38,L"Sprite",1);
  FUN_140486538(param_2,local_38);
  FUN_14048646a(param_2 + 0x20,local_38,0,0);
  FUN_140834366(param_1,param_2);
  *param_1 = &PTR_FUN_14a778730;
  param_1[0x72] = &PTR_FUN_14a778de0;
  ppvVar1 = (void **)(param_1 + 0x77);
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  iVar7 = DAT_14cb12258;
  iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110);
  param_1[0x82] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  *(undefined1 *)(param_1 + 0x8e) = 1;
  *(undefined1 *)(param_1 + 0x8f) = 1;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0x400000003f000000;
  *(undefined1 *)(param_1 + 0x93) = 0;
  *(undefined4 *)((longlong)param_1 + 0x49c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x94) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x4a4) = 0x469c4000;
  *(undefined4 *)(param_1 + 0x95) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x4ac) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x96) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x4b4) = 0x469c4000;
  *(undefined4 *)(param_1 + 0x97) = 0x3f000000;
  param_1[0x98] = 0;
  *(undefined2 *)(param_1 + 0x9d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4ea) = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  *(undefined1 *)(param_1 + 0xa4) = 0;
  *(undefined1 *)(param_1 + 0xab) = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  *(undefined4 *)(param_1 + 0xac) = 2;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  if (iVar2 < iVar7) {
    FUN_144b3d300(&DAT_14cb12258);
    if (DAT_14cb12258 == -1) {
      FUN_14574be78();
      atexit(FUN_1437bd99f);
      _Init_thread_footer(&DAT_14cb12258);
    }
  }
  param_1[0x7c] = 0;
  *(byte *)((longlong)param_1 + 0x39d) = *(byte *)((longlong)param_1 + 0x39d) | 0x1c;
  FUN_1408343c4(&local_58);
  _Src = local_48;
  param_1[0x74] = 0;
  *(undefined4 *)(param_1 + 0x75) = (undefined4)local_58;
  *(undefined4 *)((longlong)param_1 + 0x3ac) = local_58._4_4_;
  *(undefined4 *)(param_1 + 0x76) = uStack_50;
  *(undefined4 *)((longlong)param_1 + 0x3b4) = uStack_4c;
  if (ppvVar1 != &local_48) {
    *(int *)(param_1 + 0x78) = local_40;
    if (local_40 == 0 && *(int *)((longlong)param_1 + 0x3c4) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x3c4) = 0;
    }
    else {
      FUN_1446dd670(ppvVar1,local_40);
      if (local_40 != 0) {
        memcpy(*ppvVar1,_Src,(longlong)local_40 * 2);
      }
    }
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  *(byte *)((longlong)param_1 + 0x39d) = *(byte *)((longlong)param_1 + 0x39d) & 0x5f;
  *(undefined4 *)((longlong)param_1 + 0x40c) = 0xc97ffff0;
  lVar8 = DAT_14cb12250;
  if (DAT_14c950c29 == 1) {
    if (DAT_14cb12250 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar8 = DAT_14cb12250;
    }
  }
  param_1[0x82] = lVar8;
  *(undefined4 *)(param_1 + 0x81) = 0x42c80000;
  lVar8 = FUN_140834560();
  if ((lVar8 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(lVar8);
  }
  param_1[0x84] = lVar8;
  if (DAT_14cac0fa8 == 0) {
    local_58 = FUN_141030f22;
    local_60 = FUN_14081d0ea;
    local_68 = &LAB_141117124;
    local_78 = &LAB_14786c867;
    local_80 = &LAB_145abcadb;
    local_88 = &DAT_149e063b2;
    local_90 = 0;
    local_98 = 0x10000004;
    local_a0 = 8;
    local_a8 = 0x438;
    local_70 = &local_58;
    FUN_14081cfa3(L"/Script/Engine",L"GameNetworkManager",&DAT_14cac0fa8,&DAT_14786c866);
  }
  lVar8 = DAT_14cac0fa8;
  if ((DAT_14cac0fa8 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(DAT_14cac0fa8);
  }
  param_1[0x87] = lVar8;
  *(undefined1 *)(param_1 + 0xd) = 1;
  *(byte *)((longlong)param_1 + 99) = *(byte *)((longlong)param_1 + 99) | 8;
  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) | 8;
  param_1[0x99] = &DAT_3f8000003f800000;
  *(undefined4 *)(param_1 + 0x9a) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x88) = 0x400;
  FUN_1405bab3a(param_1,0);
  param_1[0x89] = 0x3ff0000000000000;
  param_1[0x8a] = 0x3ff0000000000000;
  param_1[0x8b] = 0x3ff0000000000000;
  param_1[0x8c] = 0x469c400044160000;
  param_1[0x8d] = 0x45c800003f4ccccd;
  *(byte *)((longlong)param_1 + 0x39d) = *(byte *)((longlong)param_1 + 0x39d) & 0xfd;
  *(undefined4 *)(param_1 + 0x73) = 200;
  *(undefined1 *)((longlong)param_1 + 0x39c) = 0;
  *(byte *)((longlong)param_1 + 0x61) = *(byte *)((longlong)param_1 + 0x61) | 0x80;
  *(undefined4 *)(param_1 + 0xb2) = 10;
  lVar8 = FUN_140834646();
  if (lVar8 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar8);
  }
  bVar6 = DAT_14c950c29;
  param_1[0xb3] = lVar8;
  if ((lVar8 != 0) && ((bVar6 & 1) != 0)) {
    FUN_1456cec3c(lVar8);
    lVar8 = param_1[0xb3];
  }
  param_1[0xb6] = lVar8;
  uVar5 = DAT_14c8464e8._4_4_;
  uVar4 = (undefined4)DAT_14c8464e8;
  uVar3 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x79) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x3cc) = uVar3;
  *(undefined4 *)(param_1 + 0x7a) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x3d4) = uVar5;
  param_1[0x7b] = DAT_14c8464f0;
  *(byte *)((longlong)param_1 + 0x39f) = *(byte *)((longlong)param_1 + 0x39f) & 0xfd;
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140834366 FUN_140834366 body=94 status=ok
// SIG undefined FUN_140834366(void)

undefined8 * FUN_140834366(undefined8 *param_1)

{
  FUN_140312256();
  *param_1 = &PTR_FUN_14a91e7b0;
  *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) & 0xfd;
  *(byte *)((longlong)param_1 + 0x62) = *(byte *)((longlong)param_1 + 0x62) | 1;
  *(byte *)((longlong)param_1 + 99) = *(byte *)((longlong)param_1 + 99) & 0xf7;
  FUN_1405e4918(param_1,0x41200000);
  FUN_1405bab3a(param_1,1);
  FUN_1405ba932(param_1,0);
  FUN_1403121a6(param_1,0);
  *(byte *)((longlong)param_1 + 99) = *(byte *)((longlong)param_1 + 99) & 0xfe;
  return param_1;
}



// FUNCTION 1408343c4 FUN_1408343c4 body=190 status=ok
// SIG undefined FUN_1408343c4(void)

undefined8 * FUN_1408343c4(undefined8 *param_1)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  plVar5 = (longlong *)FUN_140834482();
  lVar7 = plVar5[0x22];
  if (lVar7 == 0) {
    (**(code **)(*plVar5 + 1000))(plVar5);
    lVar7 = plVar5[0x22];
    if (lVar7 == 0) goto LAB_14083444f;
  }
  lVar6 = FUN_140834482();
  if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
      lVar6 + 0x30)) {
    uVar2 = *(undefined4 *)(lVar7 + 0x2c);
    uVar3 = *(undefined4 *)(lVar7 + 0x30);
    uVar4 = *(undefined4 *)(lVar7 + 0x34);
    *(undefined4 *)param_1 = *(undefined4 *)(lVar7 + 0x28);
    *(undefined4 *)((longlong)param_1 + 4) = uVar2;
    *(undefined4 *)(param_1 + 1) = uVar3;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
    param_1[2] = 0;
    iVar1 = *(int *)(lVar7 + 0x40);
    _Src = *(void **)(lVar7 + 0x38);
    *(int *)(param_1 + 3) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
      return param_1;
    }
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],_Src,(longlong)iVar1 * 2);
    return param_1;
  }
LAB_14083444f:
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 140834482 FUN_140834482 body=221 status=ok
// SIG undefined FUN_140834482(void)

longlong FUN_140834482(void)

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
  if (DAT_14caca020 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1478c9723;
    local_40 = FUN_14639e88a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000007;
    local_60 = 8;
    local_68 = 0x60;
    FUN_14081cfa3(L"/Script/Engine",L"AISystemBase",&DAT_14caca020,&DAT_1478c9722);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caca020;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140834560 FUN_140834560 body=228 status=ok
// SIG undefined FUN_140834560(void)

longlong FUN_140834560(void)

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
  if (DAT_14cad5c78 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1463c329e;
    local_38 = &LAB_147a5f165;
    local_40 = &LAB_14588c257;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x1000000c;
    local_60 = 8;
    local_68 = 0x3d8;
    FUN_14081cfa3(L"/Script/Engine",L"DefaultPhysicsVolume",&DAT_14cad5c78,&DAT_147a5f164);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad5c78;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140834646 FUN_140834646 body=228 status=ok
// SIG undefined FUN_140834646(void)

longlong FUN_140834646(void)

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
  if (DAT_14caceb00 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458e673a;
    local_38 = &LAB_14798325d;
    local_40 = FUN_1457f45f1;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x68;
    FUN_14081cfa3(L"/Script/Engine",L"BookMark",&DAT_14caceb00,&DAT_14798325c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caceb00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14083472b FUN_14083472b body=430 status=ok
// SIG undefined FUN_14083472b(void)

longlong FUN_14083472b(undefined8 *param_1)

{
  ulonglong uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_40;
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar4 = (undefined2 *)*param_1;
  iVar2 = *(int *)(param_1 + 1);
  lVar10 = (longlong)iVar2;
  if (lVar10 != 0) {
    uVar7 = 0;
    do {
      if (*(short *)((longlong)puVar4 + uVar7) == 0x2e) {
        if ((int)(~uVar7 >> 1) != 0) goto LAB_14083477d;
        break;
      }
      uVar7 = uVar7 + 2;
    } while (lVar10 * 2 != uVar7);
  }
  uVar7 = lVar10 * 2;
  do {
    if (uVar7 == 0) goto LAB_14083477d;
    uVar1 = uVar7 - 2;
    lVar10 = uVar7 - 2;
    uVar7 = uVar1;
  } while (*(short *)((longlong)puVar4 + lVar10) != 0x2f);
  iVar5 = (int)(uVar1 >> 1);
  if (iVar5 != -1) {
    uVar6 = iVar5 + 1;
    if (iVar2 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    uVar9 = iVar2 - 1;
    if (iVar2 == 0) {
      uVar9 = 0;
    }
    if ((int)uVar9 <= (int)uVar6) {
      uVar6 = uVar9;
    }
    uVar7 = (ulonglong)uVar6;
    if ((int)uVar6 < 1) {
      uVar7 = 0;
    }
    FUN_14006620a(&local_30,puVar4 + uVar7,uVar9 - (int)uVar7);
    FUN_140002184(param_1,0x2e);
    iVar2 = local_28 + -1;
    if (local_28 == 0) {
      iVar2 = 0;
    }
    FUN_1400020e8(param_1,local_30,iVar2);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
LAB_14083477d:
  lVar10 = FUN_144a797b2();
  if (*(longlong *)(lVar10 + 0x110) == 0) {
    FUN_140aa6c08();
  }
  if (*(int *)(param_1 + 1) == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = (undefined2 *)*param_1;
  }
  uVar3 = FUN_144a797b2();
  local_40 = 0;
  local_50 = 0;
  local_48 = 1;
  local_58 = 0;
  lVar10 = FUN_1412ecd05(uVar3,0,puVar4,0);
  if (lVar10 != 0) {
    uVar6 = *(uint *)(lVar10 + 0xc);
    if ((int)uVar6 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    FUN_1447f71cc(lVar8,0x40000000);
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar10;
}



// FUNCTION 1408348da FUN_1408348da body=37 status=ok
// SIG undefined FUN_1408348da(void)

void FUN_1408348da(longlong *param_1)

{
  FUN_140834900();
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140834900 FUN_140834900 body=140 status=ok
// SIG undefined FUN_140834900(void)

void FUN_140834900(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = param_1[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_1;
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(lVar1 + lVar4);
      if (lVar2 != 0) {
        FUN_14026ccd7(*(undefined8 *)(lVar2 + 0x38),*(undefined4 *)(lVar2 + 0x40));
        if (*(longlong *)(lVar2 + 0x38) != 0) {
          FUN_1400020a8();
        }
        FUN_1401d9a90(lVar2 + 0x10);
        FUN_1400020a8(lVar2);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar4);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    return;
  }
  FUN_14083498c(param_1,0);
  return;
}



// FUNCTION 14083498c FUN_14083498c body=96 status=ok
// SIG undefined FUN_14083498c(void)

void FUN_14083498c(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
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



// FUNCTION 1408349ec FUN_1408349ec body=161 status=ok
// SIG undefined FUN_1408349ec(void)

undefined8 FUN_1408349ec(longlong param_1,uint param_2)

{
  void *_Dst;
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (((int)param_2 < 0) || (iVar3 = *(int *)(param_1 + 0x90), iVar3 <= (int)param_2)) {
    uVar4 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x88);
    lVar2 = *(longlong *)(lVar1 + (ulonglong)param_2 * 8);
    if ((lVar2 != 0) && (*(char *)(lVar2 + 0x108) == '\x03')) {
      *(short *)(param_1 + 0x75a) = *(short *)(param_1 + 0x75a) + -1;
    }
    if (~param_2 + iVar3 != 0) {
      _Dst = (void *)(lVar1 + (ulonglong)param_2 * 8);
      memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)(int)(~param_2 + iVar3) << 3);
      iVar3 = *(int *)(param_1 + 0x90);
    }
    *(int *)(param_1 + 0x90) = iVar3 + -1;
    FUN_140834a8e((longlong *)(param_1 + 0x88));
    FUN_14018b00e(param_1 + 0x98,lVar2);
    FUN_140191f3c(lVar2,0);
    uVar4 = 1;
  }
  return uVar4;
}



// FUNCTION 140834a8e FUN_140834a8e body=370 status=ok
// SIG undefined FUN_140834a8e(void)

void FUN_140834a8e(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar3 = *(uint *)(param_1 + 8);
  uVar5 = (ulonglong)uVar3;
  iVar6 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar6 - uVar3) & 0x1ffffffffffff800U) != 0) ||
      ((int)(uVar3 * 3) < iVar6 * 2)) && (uVar3 == 0 || 0x40 < (int)(iVar6 - uVar3))) {
    if (0 < (int)uVar3) {
      uVar5 = uVar5 * 8;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          uVar4 = uVar5 + 0xf;
          if (uVar3 < 0xfff) {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
          }
          else {
            if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
              bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
              uVar7 = 0x32;
              if (0x32 < bVar2) {
                uVar7 = (ulonglong)bVar2;
              }
              uVar8 = 0x32 - (ulonglong)bVar2;
              do {
                uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
                if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140834b35;
                lVar1 = uVar7 + 1 + uVar8;
                uVar8 = uVar8 - 1;
              } while (lVar1 != 0x33);
            }
            uVar5 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar5 = (ulonglong)DAT_14c841df8;
            }
            uVar5 = -uVar5 & ((uVar4 & 0x7fffffff0) + uVar5) - 1;
          }
        }
        else {
          uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
          iVar6 = *(int *)(param_1 + 0xc);
        }
      }
LAB_140834b35:
      uVar5 = uVar5 >> 3 & 0xffffffff;
    }
    if ((int)uVar5 != iVar6) {
      *(int *)(param_1 + 0xc) = (int)uVar5;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,8,8);
    }
  }
  return;
}



// FUNCTION 140834c00 FUN_140834c00 body=100 status=ok
// SIG undefined FUN_140834c00(void)

undefined8 FUN_140834c00(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = param_3[8];
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  local_28 = param_3[4];
  uStack_24 = param_3[5];
  uStack_20 = param_3[6];
  uStack_1c = param_3[7];
  (**(code **)(param_1 + 0x20))
            ((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18),local_28,&local_38);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140834c90 FUN_140834c90 body=138 status=ok
// SIG undefined FUN_140834c90(void)

void FUN_140834c90(longlong param_1)

{
  undefined2 *puVar1;
  
  *(undefined4 *)(param_1 + 0x338) = 0;
  if (*(int *)(param_1 + 0x33c) < 0) {
    FUN_1446f8c06((undefined8 *)(param_1 + 0x330),0);
  }
  puVar1 = *(undefined2 **)(param_1 + 0x330);
  if (puVar1 != (undefined2 *)0x0) {
    *puVar1 = 0;
  }
  *(undefined8 *)(param_1 + 0x340) = 0;
  if ((*(int *)(param_1 + 0x390) != 0) && (*(uint *)(param_1 + 0x398) < *(uint *)(param_1 + 0x394)))
  {
    *(undefined8 *)(param_1 + 0x368) = *(undefined8 *)(param_1 + 0x398);
    *(undefined8 *)(param_1 + 0x370) = *(undefined8 *)(param_1 + 0x3a0);
    *(undefined8 *)(param_1 + 0x358) = *(undefined8 *)(param_1 + 0x388);
    *(undefined8 *)(param_1 + 0x360) = *(undefined8 *)(param_1 + 0x390);
    *(undefined8 *)(param_1 + 0x348) = *(undefined8 *)(param_1 + 0x378);
    *(undefined8 *)(param_1 + 0x350) = *(undefined8 *)(param_1 + 0x380);
  }
  return;
}



// FUNCTION 140834d1a FUN_140834d1a body=1 status=ok
// SIG undefined FUN_140834d1a(void)

void FUN_140834d1a(void)

{
  return;
}



// FUNCTION 140834d1c FUN_140834d1c body=96 status=ok
// SIG undefined FUN_140834d1c(void)

ulonglong FUN_140834d1c(longlong param_1)

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
LAB_140834d5f:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_140834d5f;
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



// FUNCTION 140834d9a FUN_140834d9a body=68 status=ok
// SIG undefined FUN_140834d9a(void)

void FUN_140834d9a(longlong *param_1)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  
  uVar1 = *(uint *)(param_1 + 3);
  bVar3 = (byte)uVar1;
  bVar2 = bVar3 >> 1 & -(bVar3 & 1) & 2;
  *(byte *)(param_1 + 3) = bVar3 & 0xfd | bVar2;
  if ((bool)(bVar2 >> 1) != ((uVar1 >> 1 & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000140834dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8 + (ulonglong)(bVar2 == 0) * 8))();
    return;
  }
  return;
}



// FUNCTION 140834dde FUN_140834dde body=24 status=ok
// SIG undefined FUN_140834dde(void)

void FUN_140834dde(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140834df2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 140834df6 FUN_140834df6 body=194 status=ok
// SIG undefined FUN_140834df6(void)

undefined8 * FUN_140834df6(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14ab190a0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    FUN_14472eb64(param_1 + 4,0);
  }
  param_1[10] = 0xffffffff;
  *(undefined4 *)(param_1 + 9) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x4c)) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80;
    FUN_1446efbd8(param_1 + 6,0);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[2];
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



// FUNCTION 140834eb8 FUN_140834eb8 body=202 status=ok
// SIG undefined FUN_140834eb8(void)

void FUN_140834eb8(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  DWORD DVar4;
  
  lVar1 = param_1 + 0x40;
  do {
    DVar4 = WaitForMultipleObjects(2,(HANDLE *)(param_1 + 0x10),0,500);
    if (DVar4 == 1) {
      bVar2 = true;
    }
    else {
      if (DVar4 == 0) {
        ResetEvent(*(HANDLE *)(param_1 + 0x20));
        FUN_146834066(param_1);
        ResetEvent(*(HANDLE *)(param_1 + 0x10));
        SetEvent(*(HANDLE *)(param_1 + 0x20));
        return;
      }
      bVar2 = false;
    }
    cVar3 = FUN_140834f8e(lVar1);
    if (((cVar3 != '\0') && (cVar3 = FUN_1468300e4(lVar1), cVar3 == '\0')) &&
       (cVar3 = FUN_14683024e(lVar1), cVar3 != '\0')) {
      FUN_1467b40aa(0);
      FUN_146830100(lVar1);
      FUN_146830124(lVar1);
    }
  } while (!bVar2);
  return;
}



// FUNCTION 140834f8e FUN_140834f8e body=8 status=ok
// SIG undefined FUN_140834f8e(void)

bool FUN_140834f8e(longlong *param_1)

{
  return *param_1 != 0;
}



// FUNCTION 140834f96 FUN_140834f96 body=491 status=ok
// SIG undefined FUN_140834f96(void)

void FUN_140834f96(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined4 *param_4,
                  undefined8 *param_5)

{
  longlong lVar1;
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
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
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar1 = *(longlong *)(param_1 + 0x1b00);
  if (lVar1 != 0) {
    lVar1 = (**(code **)(*(longlong *)(lVar1 + 0x10c8) + 0x20))(lVar1 + 0x10c8);
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x40) == 0)) {
      *(byte *)(param_1 + 0x162) = *(byte *)(param_1 + 0x162) | 2;
      goto LAB_14083505f;
    }
  }
  if ((*(longlong *)(param_1 + -0x140) != 0) &&
     (*(char *)(*(longlong *)(param_1 + -0x140) + 0x178) == '\x01')) {
    if ((*(int *)(param_1 + 0x29ac) != -1) &&
       (((*(byte *)(param_1 + 0x1d30) & 1) == 0 &&
        (*(char *)(param_1 + 0x1d68) != *(char *)(param_1 + 0x29a8))))) {
      FUN_14574bf74(param_1 + 0x1d20,param_4);
    }
    if (*(longlong *)(param_1 + 0x2f88) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_128);
    }
  }
  local_108 = param_5;
  FUN_1408351a4(param_1,param_2,param_3,param_4);
  if ((((*(longlong *)(param_1 + -0x140) != 0) &&
       (*(char *)(*(longlong *)(param_1 + -0x140) + 0x178) == '\x01')) &&
      (*(char *)(param_1 + 0x1be9) != '\0')) &&
     (*(char *)(param_1 + 0x1bea) != *(char *)(param_1 + 0x1be8))) {
    local_98 = *param_3;
    uStack_90 = param_3[1];
    local_88 = param_3[2];
    uStack_80 = param_3[3];
    local_78 = *param_2;
    uStack_74 = param_2[1];
    uStack_70 = (undefined4)*(undefined8 *)(param_2 + 2);
    uStack_6c = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 2) >> 0x20);
    local_68 = *(undefined8 *)(param_2 + 4);
    uStack_60 = 0;
    local_58 = 0;
    uStack_54 = 0x3ff00000;
    uStack_50 = 0;
    uStack_4c = 0x3ff00000;
    local_48 = 0x3ff0000000000000;
    uStack_40 = 0;
    local_f8 = *param_5;
    uStack_f0 = param_5[1];
    local_e8 = param_5[2];
    uStack_e0 = param_5[3];
    local_d8 = *param_4;
    uStack_d4 = param_4[1];
    uStack_d0 = (undefined4)*(undefined8 *)(param_4 + 2);
    uStack_cc = (undefined4)((ulonglong)*(undefined8 *)(param_4 + 2) >> 0x20);
    local_c8 = *(undefined8 *)(param_4 + 4);
    uStack_c0 = 0;
    local_b8 = 0;
    uStack_b4 = 0x3ff00000;
    uStack_b0 = 0;
    uStack_ac = 0x3ff00000;
    local_a8 = 0x3ff0000000000000;
    uStack_a0 = 0;
    FUN_14880a214(param_1 + -0x1e8);
  }
LAB_14083505f:
  if ((local_38 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408351a4 FUN_1408351a4 body=656 status=ok
// SIG undefined FUN_1408351a4(void)

void FUN_1408351a4(longlong param_1,double *param_2,double *param_3,double *param_4,double *param_5)

{
  double dVar1;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 uVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  byte local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  double local_e8;
  undefined1 local_d8 [16];
  double local_c8;
  double dStack_c0;
  undefined1 local_b8 [16];
  double local_a8;
  double local_a0;
  double local_98;
  ulonglong local_90;
  double dVar2;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((*(byte *)(param_1 + 0xf18) & 0xfe) != 8) {
    if (((*(longlong *)(param_1 + 0x1300) == 0) || (*(longlong *)(param_1 + -0xd8) == 0)) ||
       (*(char *)(param_1 + 0x1351) == '\0')) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_90 ^ (ulonglong)auStack_128);
    }
    if ((*(byte *)(param_1 + 0xf18) != 7) && (*(char *)(param_1 + 0xd98) == '\0')) {
      local_98 = param_2[2] - param_4[2];
      local_a0 = param_2[1] - param_4[1];
      local_a8 = *param_2 - *param_4;
      dVar8 = param_5[2] * -1.0;
      dVar9 = param_5[3] * 1.0;
      dVar3 = *param_3;
      dVar4 = param_3[1];
      dVar5 = param_3[2];
      dVar6 = param_3[3];
      dVar1 = param_5[1];
      dVar2 = param_5[1];
      local_c8 = dVar4 * dVar8 * -1.0 + ((dVar9 * dVar3 - *param_5 * dVar6 * 1.0) - dVar5 * dVar1);
      dStack_c0 = dVar3 * dVar8 * 1.0 + ((dVar9 * dVar4 - *param_5 * dVar5 * -1.0) - dVar6 * dVar2);
      dVar2 = dVar5 * dVar8 * -1.0 + dVar2 * dVar4 + (dVar9 * dVar6 - *param_5 * dVar3 * -1.0);
      local_b8._8_4_ = SUB84(dVar2,0);
      local_b8._0_8_ =
           dVar6 * dVar8 * 1.0 + dVar1 * dVar3 + (dVar9 * dVar5 - *param_5 * dVar4 * 1.0);
      local_b8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
      uVar7 = (**(code **)(*(longlong *)(param_1 + -0x70) + 0xe0))(param_1 + -0x70);
      local_108 = CONCAT71(local_108._1_7_,uVar7);
      local_100 = 0;
      FUN_140835c94(param_1 + 0xe78,&local_a8,&local_c8,0x3dcccccd);
      FUN_140835e9a(local_d8,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x428));
      local_100 = 1;
      if ((*(byte *)(param_1 + 0x3cc) & 0x20) == 0) {
        local_100 = *(byte *)(param_1 + 0x162) >> 2 & 1;
      }
      local_e8 = param_4[2];
      local_f8 = *(undefined4 *)param_4;
      uStack_f4 = *(undefined4 *)((longlong)param_4 + 4);
      uStack_f0 = *(undefined4 *)(param_4 + 1);
      uStack_ec = *(undefined4 *)((longlong)param_4 + 0xc);
      local_108 = 0;
      FUN_14084f9fc(*(undefined8 *)(param_1 + -0xd8),&local_f8,param_5,0);
      FUN_1408360e2(local_d8);
    }
  }
  if ((local_90 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140835c94 FUN_140835c94 body=518 status=ok
// SIG undefined FUN_140835c94(void)

void FUN_140835c94(undefined1 *param_1,double *param_2,double *param_3,float param_4,char param_5,
                  byte param_6)

{
  double dVar1;
  double dVar2;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  ulonglong uVar16;
  double dVar17;
  double dVar3;
  
  if (param_4 < 0.0001) {
    return;
  }
  *param_1 = 1;
  *(float *)(param_1 + 4) = param_4;
  dVar14 = *param_2;
  dVar13 = param_2[1];
  dVar1 = param_2[2];
  uVar10 = SUB84(dVar1,0);
  uVar11 = (undefined4)((ulonglong)dVar1 >> 0x20);
  if (param_5 != '\0') {
    uVar16 = ~-(ulonglong)(ABS(dVar1) < 10.0) & (ulonglong)dVar1;
    uVar10 = (undefined4)uVar16;
    uVar11 = (undefined4)(uVar16 >> 0x20);
  }
  dVar1 = (double)CONCAT44(uVar11,uVar10);
  dVar17 = dVar1 * (double)CONCAT44(uVar11,uVar10) + dVar14 * dVar14 + dVar13 * dVar13;
  if ((65536.0 < (float)dVar17 & (param_6 ^ 1)) == 0) {
    dVar14 = dVar14 + *(double *)(param_1 + 0x30);
  }
  else {
    if (147456.0 < (float)dVar17) {
      *(double *)(param_1 + 0x40) = DAT_14c8464f0;
      dVar14 = DAT_14c8464e8;
      *(double *)(param_1 + 0x30) = DAT_14c8464e0;
      *(double *)(param_1 + 0x38) = dVar14;
      goto LAB_140835ded;
    }
    if (((dVar17 != 1.0) || (dVar12 = dVar13, dVar15 = dVar14, NAN(dVar17))) &&
       (dVar12 = DAT_14c8464e8, dVar15 = DAT_14c8464e0, dVar1 = DAT_14c8464f0,
       9.99999993922529e-09 <= dVar17)) {
      dVar1 = 1.0 / SQRT(dVar17);
      dVar12 = dVar13 * dVar1;
      dVar15 = dVar14 * dVar1;
      dVar1 = (double)CONCAT44(uVar11,uVar10) * dVar1;
    }
    dVar1 = dVar1 * 256.0;
    dVar14 = dVar15 * 256.0 + *(double *)(param_1 + 0x30);
    dVar13 = dVar12 * 256.0;
  }
  *(double *)(param_1 + 0x30) = dVar14;
  *(double *)(param_1 + 0x38) = dVar13 + *(double *)(param_1 + 0x38);
  *(double *)(param_1 + 0x40) = dVar1 + *(double *)(param_1 + 0x40);
LAB_140835ded:
  dVar6 = *(double *)(param_1 + 0x10);
  dVar7 = *(double *)(param_1 + 0x18);
  dVar8 = *(double *)(param_1 + 0x20);
  dVar9 = *(double *)(param_1 + 0x28);
  dVar14 = param_3[3];
  dVar13 = param_3[3];
  dVar1 = param_3[1];
  dVar17 = param_3[1];
  dVar15 = *param_3;
  dVar12 = *param_3;
  dVar2 = param_3[2];
  dVar3 = param_3[2];
  dVar5 = dVar6 * dVar3 * 1.0 + dVar9 * dVar17 + dVar12 * dVar8 * -1.0 + dVar13 * dVar7;
  auVar4._8_4_ = SUB84(dVar5,0);
  auVar4._0_8_ = dVar7 * dVar2 * -1.0 + dVar8 * dVar1 + dVar15 * dVar9 * 1.0 + dVar14 * dVar6;
  auVar4._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x10) = auVar4;
  *(double *)(param_1 + 0x20) =
       dVar9 * dVar2 * 1.0 + ((dVar15 * dVar7 * 1.0 + dVar14 * dVar8) - dVar1 * dVar6);
  *(double *)(param_1 + 0x28) =
       dVar8 * dVar3 * -1.0 + ((dVar12 * dVar6 * -1.0 + dVar13 * dVar9) - dVar17 * dVar7);
  return;
}



// FUNCTION 140835e9a FUN_140835e9a body=582 status=ok
// SIG undefined FUN_140835e9a(void)

double * FUN_140835e9a(double *param_1,double param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  uint uVar8;
  int iVar9;
  double dVar10;
  double *pdVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = param_2;
  if (param_2 == 0.0) {
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) & 0xf8;
  }
  else {
    uVar8 = *(uint *)((longlong)param_2 + 0x1f8) >> 2 & 1;
    uVar12 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar12 & 0xfffffffe | uVar8;
    uVar13 = *(uint *)((longlong)param_2 + 0x1f8) >> 2 & 2;
    *(uint *)(param_1 + 1) = uVar12 & 0xfffffffc | uVar8 | uVar13;
    uVar14 = *(byte *)((longlong)param_2 + 0x1f8) & 0x10;
    uVar12 = uVar12 & 0xfffffff0 | uVar8 | uVar13 | uVar14 >> 2;
    uVar14 = (uint)(byte)((byte)uVar14 >> 1 ^ 8);
    if (uVar13 == 0) {
      uVar14 = 8;
    }
    if (uVar8 == 0) {
      uVar14 = 8;
    }
    *(uint *)(param_1 + 1) = uVar14 | uVar12;
    *(byte *)((longlong)param_2 + 0x1f8) = *(byte *)((longlong)param_2 + 0x1f8) | 4;
    *(byte *)((longlong)*param_1 + 0x1f8) = *(byte *)((longlong)*param_1 + 0x1f8) | 8;
    *(byte *)((longlong)*param_1 + 0x1f8) = *(byte *)((longlong)*param_1 + 0x1f8) | 0x10;
    if ((((ulonglong)param_1[1] & 8) != 0) &&
       (dVar10 = *param_1, *(longlong *)((longlong)dVar10 + 0x120) != 0)) {
      if ((*(byte *)((longlong)param_2 + 0x1f8) & 1) == 0) {
        FUN_1447a91cc(param_2,0,0);
        uVar12 = SUB84(param_2,0);
        dVar10 = *param_1;
      }
      *(undefined4 *)((longlong)dVar10 + 0x198) = *(undefined4 *)((longlong)dVar10 + 0x260);
      *(undefined4 *)((longlong)dVar10 + 0x19c) = *(undefined4 *)((longlong)dVar10 + 0x264);
      *(undefined4 *)((longlong)dVar10 + 0x1a0) = *(undefined4 *)((longlong)dVar10 + 0x268);
      *(undefined4 *)((longlong)dVar10 + 0x1a4) = *(undefined4 *)((longlong)dVar10 + 0x26c);
      *(undefined8 *)((longlong)dVar10 + 0x1a8) = *(undefined8 *)((longlong)dVar10 + 0x270);
      dVar1 = *param_1;
      dVar4 = *(double *)((longlong)dVar1 + 0x240);
      dVar5 = *(double *)((longlong)dVar1 + 0x248);
      dVar6 = *(double *)((longlong)dVar1 + 0x250);
      dVar7 = *(double *)((longlong)dVar1 + 600);
      pdVar11 = *(double **)((longlong)dVar1 + 0x228);
      local_78 = dVar4;
      uStack_70 = dVar5;
      local_68 = dVar6;
      uStack_60 = dVar7;
      if (pdVar11 == (double *)0x0) {
        uVar12 = 0x40;
        pdVar11 = (double *)FUN_14001cc68(0x40,0x10);
        dVar10 = DAT_14c8463d8;
        *pdVar11 = DAT_14c8463d0;
        pdVar11[1] = dVar10;
        dVar10 = DAT_14c8463e8;
        pdVar11[2] = DAT_14c8463e0;
        pdVar11[3] = dVar10;
        dVar10 = DAT_14c846500;
        pdVar11[4] = DAT_14c8464f8;
        pdVar11[5] = dVar10;
        dVar10 = DAT_14c846508;
        pdVar11[6] = DAT_14c846508;
        *(double **)((longlong)dVar1 + 0x228) = pdVar11;
      }
      auVar2._8_4_ = (int)-(ulonglong)(dVar5 != pdVar11[1]);
      auVar2._0_8_ = -(ulonglong)(dVar4 != *pdVar11);
      auVar2._12_4_ = (int)(-(ulonglong)(dVar5 != pdVar11[1]) >> 0x20);
      iVar9 = movmskpd(SUB84(dVar10,0),auVar2);
      auVar3._8_4_ = (int)-(ulonglong)(dVar7 != pdVar11[3]);
      auVar3._0_8_ = -(ulonglong)(dVar6 != pdVar11[2]);
      auVar3._12_4_ = (int)(-(ulonglong)(dVar7 != pdVar11[3]) >> 0x20);
      uVar12 = movmskpd(uVar12,auVar3);
      if ((uVar12 & 0x3fffffff) != 0 || iVar9 != 0) {
        *(undefined4 *)(pdVar11 + 2) = (undefined4)local_68;
        *(undefined4 *)((longlong)pdVar11 + 0x14) = local_68._4_4_;
        *(undefined4 *)(pdVar11 + 3) = (undefined4)uStack_60;
        *(undefined4 *)((longlong)pdVar11 + 0x1c) = uStack_60._4_4_;
        *(undefined4 *)pdVar11 = (undefined4)local_78;
        *(undefined4 *)((longlong)pdVar11 + 4) = local_78._4_4_;
        *(undefined4 *)(pdVar11 + 1) = (undefined4)uStack_70;
        *(undefined4 *)((longlong)pdVar11 + 0xc) = uStack_70._4_4_;
        FUN_1448052ee(&local_78,&local_58);
        pdVar11[6] = local_48;
        pdVar11[4] = local_58;
        pdVar11[5] = dStack_50;
      }
      dVar10 = *param_1;
      dVar1 = pdVar11[4];
      dVar4 = pdVar11[5];
      *(double *)((longlong)dVar10 + 0x1c0) = pdVar11[6];
      *(double *)((longlong)dVar10 + 0x1b0) = dVar1;
      *(double *)((longlong)dVar10 + 0x1b8) = dVar4;
      dVar10 = *param_1;
      *(undefined4 *)((longlong)dVar10 + 0x1c8) = *(undefined4 *)((longlong)dVar10 + 0x280);
      *(undefined4 *)((longlong)dVar10 + 0x1cc) = *(undefined4 *)((longlong)dVar10 + 0x284);
      *(undefined4 *)((longlong)dVar10 + 0x1d0) = *(undefined4 *)((longlong)dVar10 + 0x288);
      *(undefined4 *)((longlong)dVar10 + 0x1d4) = *(undefined4 *)((longlong)dVar10 + 0x28c);
      *(undefined8 *)((longlong)dVar10 + 0x1d8) = *(undefined8 *)((longlong)dVar10 + 0x290);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408360e2 FUN_1408360e2 body=1324 status=ok
// SIG undefined FUN_1408360e2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408360e2(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  int iVar4;
  double *pdVar5;
  longlong lVar6;
  undefined4 uVar7;
  uint uVar8;
  uint *puVar9;
  ulonglong uVar10;
  double dVar11;
  double dVar14;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  double local_148;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  undefined1 local_d8 [96];
  double local_78;
  double dStack_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar1 = *param_1;
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0x1f8) = *(byte *)(lVar1 + 0x1f8) & 0xfb | (*(byte *)(param_1 + 1) & 1) << 2;
    *(byte *)(*param_1 + 0x1f8) =
         *(byte *)(*param_1 + 0x1f8) & 0xf7 | (*(byte *)(param_1 + 1) & 2) << 2;
    *(byte *)(*param_1 + 0x1f8) =
         *(byte *)(*param_1 + 0x1f8) & 0xef | (*(byte *)(param_1 + 1) & 4) << 2;
    if ((*(byte *)(param_1 + 1) & 8) != 0) {
      plVar2 = *(longlong **)(*param_1 + 0x120);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x4a8))(plVar2,local_d8,*(undefined8 *)(*param_1 + 0x128),0);
        puVar9 = (uint *)(*param_1 + 0x240);
        FUN_1449437a2(puVar9,&local_138,local_d8);
        uVar7 = SUB84(puVar9,0);
        uVar8 = *(uint *)(param_1 + 1);
        if ((uVar8 & 1) == 0) {
          lVar1 = *param_1;
          uVar10 = *(ulonglong *)(lVar1 + 0x38);
          if (uVar10 < 0xffffffff00000000) {
            puVar9 = DAT_14c9980d0;
            if (DAT_14c9980d8 == 0) {
              puVar9 = (uint *)0x0;
            }
            (**(code **)(*(longlong *)puVar9 + 0x58))(puVar9,lVar1,uVar10,5);
          }
          else {
            uVar8 = (uint)uVar10;
            if ((-1 < (int)uVar8) && ((int)uVar8 < DAT_14c998088)) {
              puVar9 = (uint *)&DAT_14c998070;
              if (DAT_14c998080 != (uint *)0x0) {
                puVar9 = DAT_14c998080;
              }
              if ((*(uint *)((longlong)puVar9 + (ulonglong)((uint)(uVar10 >> 3) & 0xffffffc)) >>
                   (uVar8 & 0x1f) & 1) != 0) {
                lVar6 = DAT_14c998060 + (ulonglong)(uVar8 & 0x7fffffff) * 0x68;
                puVar9 = *(uint **)(lVar6 + 0x18);
                if (*(uint **)(lVar6 + 0x18) == (uint *)0x0) {
                  puVar9 = (uint *)(lVar6 + 8);
                }
                *puVar9 = *puVar9 | 0x20;
                *(byte *)(lVar6 + 0x60) = *(byte *)(lVar6 + 0x60) | 1;
              }
            }
          }
          uVar7 = SUB84(puVar9,0);
          *(undefined8 *)(lVar1 + 0x198) = local_118;
          *(undefined8 *)(lVar1 + 0x1a0) = uStack_110;
          *(undefined8 *)(lVar1 + 0x1a8) = local_108;
          uVar8 = *(uint *)(param_1 + 1);
        }
        dVar11 = (double)(ulonglong)uVar8;
        if ((uVar8 & 2) == 0) {
          lVar1 = *param_1;
          pdVar5 = *(double **)(lVar1 + 0x230);
          if (pdVar5 == (double *)0x0) {
            uVar7 = 0x40;
            pdVar5 = (double *)FUN_14001cc68(0x40,0x10);
            dVar11 = DAT_14c8463d8;
            *pdVar5 = DAT_14c8463d0;
            pdVar5[1] = dVar11;
            dVar11 = DAT_14c8463e8;
            pdVar5[2] = DAT_14c8463e0;
            pdVar5[3] = dVar11;
            dVar11 = DAT_14c846500;
            pdVar5[4] = DAT_14c8464f8;
            pdVar5[5] = dVar11;
            dVar11 = DAT_14c846508;
            pdVar5[6] = DAT_14c846508;
            *(double **)(lVar1 + 0x230) = pdVar5;
          }
          auVar13._8_4_ = (int)-(ulonglong)(pdVar5[1] != dStack_130);
          auVar13._0_8_ = -(ulonglong)(*pdVar5 != local_138);
          auVar13._12_4_ = (int)(-(ulonglong)(pdVar5[1] != dStack_130) >> 0x20);
          iVar4 = movmskpd(SUB84(dVar11,0),auVar13);
          auVar15._8_4_ = (int)-(ulonglong)(pdVar5[3] != dStack_120);
          auVar15._0_8_ = -(ulonglong)(pdVar5[2] != local_128);
          auVar15._12_4_ = (int)(-(ulonglong)(pdVar5[3] != dStack_120) >> 0x20);
          uVar8 = movmskpd(uVar7,auVar15);
          if ((uVar8 & 0x3fffffff) != 0 || iVar4 != 0) {
            dVar11 = local_128 * local_128 + local_138 * local_138;
            dVar14 = dStack_120 * dStack_120 + dStack_130 * dStack_130;
            auVar12._0_8_ = dVar11 + dVar14;
            auVar12._8_8_ = dVar11 + dVar14;
            uVar10 = -(ulonglong)(9.99999993922529e-09 <= auVar12._8_8_);
            auVar13 = sqrtpd(auVar12,auVar12);
            auVar15 = divpd(_DAT_149934d80,auVar13);
            auVar16._0_8_ = auVar15._0_8_ * local_128;
            auVar16._8_8_ = auVar15._8_8_ * dStack_120;
            auVar3._8_4_ = (int)uVar10;
            auVar3._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar12._0_8_);
            auVar3._12_4_ = (int)(uVar10 >> 0x20);
            auVar13 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar16,auVar3);
            *pdVar5 = (double)((ulonglong)(local_138 * auVar15._0_8_) &
                              -(ulonglong)(9.99999993922529e-09 <= auVar12._0_8_));
            pdVar5[1] = (double)((ulonglong)(dStack_130 * auVar15._8_8_) & uVar10);
            *(undefined1 (*) [16])(pdVar5 + 2) = auVar13;
            FUN_1448052ee(pdVar5,&local_78);
            pdVar5[6] = local_68;
            pdVar5[4] = local_78;
            pdVar5[5] = dStack_70;
          }
          local_148 = pdVar5[6];
          local_158 = *(undefined4 *)(pdVar5 + 4);
          uStack_154 = *(undefined4 *)((longlong)pdVar5 + 0x24);
          uStack_150 = *(undefined4 *)(pdVar5 + 5);
          uStack_14c = *(undefined4 *)((longlong)pdVar5 + 0x2c);
          uVar10 = *(ulonglong *)(lVar1 + 0x38);
          if (uVar10 < 0xffffffff00000000) {
            puVar9 = DAT_14c9980d0;
            if (DAT_14c9980d8 == 0) {
              puVar9 = (uint *)0x0;
            }
            (**(code **)(*(longlong *)puVar9 + 0x58))(local_158,lVar1,uVar10,6);
          }
          else {
            uVar8 = (uint)uVar10;
            if ((-1 < (int)uVar8) && ((int)uVar8 < DAT_14c998088)) {
              puVar9 = (uint *)&DAT_14c998070;
              if (DAT_14c998080 != (uint *)0x0) {
                puVar9 = DAT_14c998080;
              }
              if ((*(uint *)((longlong)puVar9 + (ulonglong)((uint)(uVar10 >> 3) & 0xffffffc)) >>
                   (uVar8 & 0x1f) & 1) != 0) {
                lVar6 = DAT_14c998060 + (ulonglong)(uVar8 & 0x7fffffff) * 0x68;
                puVar9 = *(uint **)(lVar6 + 0x18);
                if (*(uint **)(lVar6 + 0x18) == (uint *)0x0) {
                  puVar9 = (uint *)(lVar6 + 8);
                }
                *puVar9 = *puVar9 | 0x40;
                *(byte *)(lVar6 + 0x60) = *(byte *)(lVar6 + 0x60) | 1;
              }
            }
          }
          *(double *)(lVar1 + 0x1c0) = local_148;
          *(undefined4 *)(lVar1 + 0x1b0) = local_158;
          *(undefined4 *)(lVar1 + 0x1b4) = uStack_154;
          *(undefined4 *)(lVar1 + 0x1b8) = uStack_150;
          *(undefined4 *)(lVar1 + 0x1bc) = uStack_14c;
          dVar11 = (double)(ulonglong)*(uint *)(param_1 + 1);
        }
        if (((ulonglong)dVar11 & 4) == 0) {
          dVar11 = local_f8;
          if (ABS((float)local_f8) < 0.001) {
            dVar11 = (double)((ulonglong)((uint)((ulonglong)local_f8 >> 0x20) & 0x80000000) << 0x20
                             | 0x3f50624de0000000);
          }
          dVar14 = dStack_f0;
          if (ABS((float)dStack_f0) < 0.001) {
            dVar14 = (double)((ulonglong)((uint)((ulonglong)dStack_f0 >> 0x20) & 0x80000000) << 0x20
                             | 0x3f50624de0000000);
          }
          lVar1 = *param_1;
          dVar17 = local_e8;
          if (ABS((float)local_e8) < 0.001) {
            dVar17 = (double)((ulonglong)((uint)((ulonglong)local_e8 >> 0x20) & 0x80000000) << 0x20
                             | 0x3f50624de0000000);
          }
          uVar10 = *(ulonglong *)(lVar1 + 0x38);
          if (uVar10 < 0xffffffff00000000) {
            puVar9 = DAT_14c9980d0;
            if (DAT_14c9980d8 == 0) {
              puVar9 = (uint *)0x0;
            }
            (**(code **)(*(longlong *)puVar9 + 0x58))(0xe0000000,lVar1,uVar10,7);
          }
          else {
            uVar8 = (uint)uVar10;
            if ((-1 < (int)uVar8) && ((int)uVar8 < DAT_14c998088)) {
              puVar9 = (uint *)&DAT_14c998070;
              if (DAT_14c998080 != (uint *)0x0) {
                puVar9 = DAT_14c998080;
              }
              if ((*(uint *)((longlong)puVar9 + (ulonglong)((uint)(uVar10 >> 3) & 0xffffffc)) >>
                   (uVar8 & 0x1f) & 1) != 0) {
                lVar6 = DAT_14c998060 + (ulonglong)(uVar8 & 0x7fffffff) * 0x68;
                puVar9 = *(uint **)(lVar6 + 0x18);
                if (*(uint **)(lVar6 + 0x18) == (uint *)0x0) {
                  puVar9 = (uint *)(lVar6 + 8);
                }
                *puVar9 = *puVar9 | 0x80;
                *(byte *)(lVar6 + 0x60) = *(byte *)(lVar6 + 0x60) | 1;
              }
            }
          }
          *(double *)(lVar1 + 0x1c8) = dVar11;
          *(double *)(lVar1 + 0x1d0) = dVar14;
          *(double *)(lVar1 + 0x1d8) = dVar17;
        }
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140836610 FUN_140836610 body=154 status=ok
// SIG undefined FUN_140836610(void)

void FUN_140836610(longlong param_1,int *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  byte bVar7;
  longlong lVar8;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    uVar1 = *(undefined8 *)param_2;
    uVar2 = *(undefined8 *)(param_2 + 2);
    iVar3 = param_2[5];
    iVar4 = param_2[6];
    iVar5 = param_2[7];
    *(int *)(param_1 + 0x28) = param_2[4];
    *(int *)(param_1 + 0x2c) = iVar3;
    *(int *)(param_1 + 0x30) = iVar4;
    *(int *)(param_1 + 0x34) = iVar5;
    *(undefined8 *)(param_1 + 0x18) = uVar1;
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    lVar8 = *(longlong *)(param_2 + 8);
    if (DAT_14c950c29 == '\x01') {
      if (lVar8 == 0) {
        lVar8 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar8 = *(longlong *)(param_2 + 8);
      }
    }
    *(longlong *)(param_1 + 0x38) = lVar8;
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 10);
    bVar6 = 0;
    bVar7 = 0;
    if ((((*(double *)(param_2 + 2) == 0.0) && (bVar7 = bVar6, !NAN(*(double *)(param_2 + 2)))) &&
        (*(double *)(param_2 + 4) == 0.0)) && (!NAN(*(double *)(param_2 + 4)))) {
      bVar7 = -(*(double *)(param_2 + 6) == 0.0) & 1;
    }
    *(byte *)(param_1 + 0x10) =
         *(byte *)(param_1 + 0x10) & 0xfd | (~bVar7 & *param_2 != -1) * '\x02';
  }
  return;
}



// FUNCTION 1408366aa FUN_1408366aa body=1307 status=ok
// SIG undefined FUN_1408366aa(void)

void FUN_1408366aa(longlong param_1,float param_2)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  
  if ((*(float *)(param_1 + 0x28) != param_2) || (NAN(*(float *)(param_1 + 0x28)) || NAN(param_2)))
  {
    if (0 < *(int *)(param_1 + 0x50)) {
      lVar3 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar3 * 8) != 0) {
          lVar4 = lVar3 * 0x60 + *(longlong *)(param_1 + 0x48);
          lVar5 = *(longlong *)(lVar4 + 0x18);
          if ((1.1754944e-38 < *(float *)(lVar5 + 0x134)) &&
             (lVar6 = *(longlong *)(lVar4 + 0x30), 1.1754944e-38 < *(float *)(lVar6 + 0x134))) {
            if (*(int *)(lVar5 + 0x150) != *(int *)(lVar6 + 0x150)) {
              fVar7 = param_2;
              fVar13 = 1.0;
              if (*(int *)(lVar6 + 0x150) <= *(int *)(lVar5 + 0x150)) {
                fVar7 = 1.0;
                fVar13 = param_2;
              }
              *(float *)(lVar4 + 0x28) = fVar7;
              *(float *)(lVar4 + 0x40) = fVar13;
              fVar9 = *(float *)(lVar4 + 0x20) * fVar7 * *(float *)(lVar5 + 0x134);
              local_cc = 0.0;
              local_c0 = 0.0;
              local_b8 = 0.0;
              local_ac = 0.0;
              local_c4 = 0.0;
              local_bc = 0.0;
              local_b0 = 0.0;
              local_b4 = 0.0;
              local_c8 = 0.0;
              local_d0 = 0.0;
              fVar16 = 0.0;
              if (1.1754944e-38 < fVar9) {
                fVar7 = fVar7 * *(float *)(lVar4 + 0x24);
                local_b0 = *(float *)(lVar5 + 0x68) * fVar7;
                local_ac = *(float *)(lVar5 + 0x58) * fVar7;
                local_b4 = *(float *)(lVar5 + 0x48) * fVar7;
                local_bc = *(float *)(lVar5 + 100) * fVar7;
                local_b8 = *(float *)(lVar5 + 0x54) * fVar7;
                local_c8 = *(float *)(lVar5 + 0x44) * fVar7;
                local_c4 = *(float *)(lVar5 + 0x60) * fVar7;
                local_c0 = *(float *)(lVar5 + 0x50) * fVar7;
                local_d0 = fVar7 * *(float *)(lVar5 + 0x40);
                fVar16 = fVar9;
              }
              fVar11 = *(float *)(lVar4 + 0x38) * fVar13 * *(float *)(lVar6 + 0x134);
              local_e0 = 0.0;
              local_d4 = 0.0;
              fVar9 = 0.0;
              local_e4 = 0.0;
              local_d8 = 0.0;
              fVar10 = 0.0;
              fVar17 = 0.0;
              local_dc = 0.0;
              fVar7 = 0.0;
              if (1.1754944e-38 < fVar11) {
                fVar13 = fVar13 * *(float *)(lVar4 + 0x3c);
                local_dc = *(float *)(lVar6 + 0x68) * fVar13;
                local_d8 = *(float *)(lVar6 + 0x58) * fVar13;
                local_d4 = *(float *)(lVar6 + 0x48) * fVar13;
                fVar17 = *(float *)(lVar6 + 100) * fVar13;
                local_e4 = *(float *)(lVar6 + 0x54) * fVar13;
                local_e0 = *(float *)(lVar6 + 0x44) * fVar13;
                fVar10 = *(float *)(lVar6 + 0x60) * fVar13;
                fVar9 = *(float *)(lVar6 + 0x50) * fVar13;
                local_cc = fVar13 * *(float *)(lVar6 + 0x40);
                fVar7 = fVar11;
              }
              *(float *)(lVar4 + 0x48) = fVar16;
              *(float *)(lVar4 + 0x4c) = fVar7;
              if (0 < *(int *)(lVar4 + 0x58)) {
                lVar5 = 0x4c;
                lVar6 = 0;
                do {
                  lVar2 = *(longlong *)(lVar4 + 0x50);
                  if (*(float *)(lVar4 + 0x48) <= 1.1754944e-38) {
                    fVar13 = 0.0;
                  }
                  else {
                    fVar13 = *(float *)(lVar2 + lVar5);
                    fVar11 = *(float *)(lVar2 + 4 + lVar5);
                    fVar1 = *(float *)(lVar2 + 8 + lVar5);
                    fVar14 = local_b0 * fVar1 + local_c4 * fVar13 + local_bc * fVar11;
                    fVar15 = local_ac * fVar1 + local_c0 * fVar13 + local_b8 * fVar11;
                    fVar8 = local_b4 * fVar1 + local_d0 * fVar13 + local_c8 * fVar11;
                    *(float *)(lVar2 + 0x48 + lVar5) = fVar8;
                    *(float *)(lVar2 + 0x4c + lVar5) = fVar15;
                    *(float *)(lVar2 + 0x50 + lVar5) = fVar14;
                    fVar13 = fVar14 * fVar1 + fVar8 * fVar13 + fVar15 * fVar11 + fVar16;
                  }
                  if (1.1754944e-38 < *(float *)(lVar4 + 0x4c)) {
                    fVar11 = *(float *)(lVar2 + 0xc + lVar5);
                    fVar1 = *(float *)(lVar2 + 0x10 + lVar5);
                    fVar8 = *(float *)(lVar2 + 0x14 + lVar5);
                    fVar12 = local_dc * fVar8 + fVar10 * fVar11 + fVar17 * fVar1;
                    fVar14 = local_d8 * fVar8 + fVar9 * fVar11 + local_e4 * fVar1;
                    fVar15 = local_d4 * fVar8 + local_cc * fVar11 + local_e0 * fVar1;
                    *(float *)(lVar2 + 0x6c + lVar5) = fVar15;
                    *(float *)(lVar2 + 0x70 + lVar5) = fVar14;
                    *(float *)(lVar2 + 0x74 + lVar5) = fVar12;
                    fVar13 = fVar13 + fVar12 * fVar8 + fVar15 * fVar11 + fVar14 * fVar1 + fVar7;
                  }
                  *(uint *)(lVar2 + 0x90 + lVar5) = -(uint)(1e-08 < fVar13) & (uint)(1.0 / fVar13);
                  lVar6 = lVar6 + 1;
                  lVar5 = lVar5 + 0x10c;
                } while (lVar6 < *(int *)(lVar4 + 0x58));
              }
            }
          }
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 < *(int *)(param_1 + 0x50));
    }
    *(float *)(param_1 + 0x28) = param_2;
  }
  return;
}



// FUNCTION 140836bcc FUN_140836bcc body=127 status=ok
// SIG undefined FUN_140836bcc(void)

void FUN_140836bcc(longlong param_1)

{
  char cVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0xd5) & 4) != 0) {
    local_38 = 0;
    uStack_30 = 0;
    FUN_1400033ba(param_1,0,0,0);
  }
  cVar1 = FUN_1400439fc(param_1,0,&local_19);
  if (cVar1 == '\0') {
    if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
}



// FUNCTION 140836c60 FUN_140836c60 body=39 status=ok
// SIG undefined FUN_140836c60(void)

void FUN_140836c60(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (*(int *)(param_1 + 0x1c) < param_2) {
    FUN_140836c88(param_1 + 0x10);
    return;
  }
  return;
}



// FUNCTION 140836c88 FUN_140836c88 body=312 status=ok
// SIG undefined FUN_140836c88(void)

void FUN_140836c88(longlong param_1,int param_2)

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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140836cf2;
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
LAB_140836cf2:
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



// FUNCTION 140836dc0 FUN_140836dc0 body=1763 status=ok
// SIG undefined FUN_140836dc0(void)

longlong * FUN_140836dc0(longlong *param_1,undefined4 *param_2)

{
  char *pcVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong *puVar6;
  int iVar7;
  bool bVar8;
  undefined1 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  char cVar15;
  uint uVar16;
  int iVar17;
  ulonglong uVar18;
  undefined4 *puVar19;
  longlong lVar20;
  uint uVar21;
  undefined1 auStack_f8 [40];
  longlong *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  longlong *local_a8;
  longlong *local_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 *local_70;
  undefined4 *local_68;
  ulonglong local_60;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_88 = 0;
  uStack_80 = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_90 = 0x544f435354415232;
    plVar5 = (longlong *)param_1[1];
    if ((undefined8 *)plVar5[1] < (undefined8 *)*plVar5 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_90,8);
      }
      else {
        thunk_FUN_146821949(param_1,&local_90);
      }
    }
    else {
      local_90 = *(undefined8 *)*plVar5;
      *plVar5 = *plVar5 + 8;
    }
    plVar5 = (longlong *)(param_2 + 2);
    puVar19 = param_2 + 6;
    local_70 = (undefined4 *)&DAT_100000000;
    local_60 = 0xffffffff;
    local_58 = 0;
    local_68 = puVar19;
    if (param_2[0xc] != 0) {
      FUN_1449c0562(&local_70);
    }
    local_b8 = local_60;
    uVar18 = local_b8;
    local_b0 = local_58;
    local_ac = local_54;
    local_c8 = local_70;
    local_c0 = local_68;
    local_b8._4_4_ = (int)(local_60 >> 0x20);
    local_d0 = plVar5;
    if (local_b8._4_4_ < (int)local_68[6]) {
      bVar8 = false;
      iVar13 = local_b8._4_4_;
      local_b8 = uVar18;
      do {
        lVar10 = *local_d0;
        lVar20 = (longlong)iVar13 * 0xc0;
        piVar14 = (int *)(lVar10 + lVar20 + 0x18);
        if (bVar8) {
          uVar18 = local_b8;
          if ((((*piVar14 != (int)local_88) || (*(int *)(lVar10 + 0x1c + lVar20) != local_88._4_4_))
              || (*(int *)(lVar10 + 0x20 + lVar20) != (int)uStack_80)) ||
             (*(int *)(lVar10 + 0x24 + lVar20) != uStack_80._4_4_)) goto LAB_140837471;
        }
        else {
          local_88 = *(undefined8 *)piVar14;
          uStack_80 = *(undefined8 *)(lVar10 + lVar20 + 0x20);
          bVar8 = true;
        }
        local_b8 = CONCAT44(local_b8._4_4_,(uint)local_b8 & ~local_c8._4_4_);
        FUN_1449c0562(&local_c8);
        iVar13 = local_b8._4_4_;
      } while (local_b8._4_4_ < (int)local_c0[6]);
      uVar18 = local_b8;
      if (bVar8) {
        local_70 = (undefined4 *)&DAT_100000000;
        local_60 = 0xffffffff;
        local_58 = 0;
        local_68 = puVar19;
        if (param_2[0xc] != 0) {
          FUN_1449c0562(&local_70);
        }
        local_c8 = local_70;
        local_c0 = local_68;
        local_b8 = local_60;
        uVar18 = local_b8;
        local_b0 = local_58;
        local_ac = local_54;
        local_98 = 0;
        local_b8._4_4_ = (int)(local_60 >> 0x20);
        local_d0 = plVar5;
        local_a8 = plVar5;
        local_a0 = plVar5;
        if (local_b8._4_4_ < (int)local_68[6]) {
          iVar13 = local_b8._4_4_;
          local_b8 = uVar18;
          do {
            puVar3 = (undefined8 *)(*local_d0 + 0x18 + (longlong)iVar13 * 0xc0);
            *puVar3 = 0;
            puVar3[1] = 0;
            local_b8 = CONCAT44(local_b8._4_4_,(uint)local_b8 & ~local_c8._4_4_);
            FUN_1449c0562(&local_c8);
            iVar13 = local_b8._4_4_;
          } while (local_b8._4_4_ < (int)local_c0[6]);
          uVar18 = local_b8;
          if (((local_98 & 1) != 0) && (local_98._1_1_ == '\x01')) {
            FUN_14740a0c8(local_a0,(int)local_a0[1] - *(int *)((longlong)local_a0 + 0x34));
            uVar18 = local_b8;
          }
        }
        goto LAB_140836eee;
      }
    }
LAB_140837471:
    local_b8 = uVar18;
    uVar9 = 0;
LAB_140836ef0:
    local_70 = (undefined4 *)CONCAT71(local_70._1_7_,uVar9);
    puVar6 = (ulonglong *)param_1[1];
    pcVar1 = (char *)*puVar6 + 1;
    if ((char *)puVar6[1] < pcVar1) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_70,1);
      cVar15 = (char)local_70;
    }
    else {
      cVar15 = *(char *)*puVar6;
      local_70 = (undefined4 *)CONCAT71(local_70._1_7_,cVar15);
      *puVar6 = (ulonglong)pcVar1;
    }
    if (cVar15 != '\0') {
      FUN_1402ac1b3(param_1,&local_88);
    }
    puVar19 = *(undefined4 **)param_1[1];
    if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar19 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
      }
      else {
        thunk_FUN_14572512c(param_1,param_2);
      }
    }
    else {
      *param_2 = *puVar19;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
    FUN_14574c48e(param_1);
    if ((*(byte *)(param_1 + 5) & 4) == 0) {
      if (cVar15 != '\0') {
        local_c8 = param_2 + 6;
        local_d0 = (longlong *)&DAT_100000000;
        local_c0 = (undefined4 *)&DAT_ffffffff;
        local_b8 = local_b8 & 0xffffffff00000000;
        if (param_2[0xc] == 0) {
          uVar18 = 1;
          uVar16 = 0xffffffff;
          iVar12 = 0;
          iVar17 = 0;
          iVar13 = 0;
        }
        else {
          FUN_1449c0562(&local_d0);
          uVar18 = (ulonglong)local_d0 >> 0x20;
          iVar13 = (int)local_d0;
          uVar16 = (uint)local_c0;
          iVar17 = local_c0._4_4_;
          iVar12 = (uint)local_b8;
        }
        if (iVar17 < (int)local_c8[6]) {
          do {
            puVar19 = (undefined4 *)(*(longlong *)(param_2 + 2) + 0x18 + (longlong)iVar17 * 0xc0);
            *puVar19 = (int)local_88;
            puVar19[1] = local_88._4_4_;
            puVar19[2] = (int)uStack_80;
            puVar19[3] = uStack_80._4_4_;
            uVar16 = ~(uint)uVar18 & uVar16;
            puVar19 = *(undefined4 **)(local_c8 + 4);
            if (*(undefined4 **)(local_c8 + 4) == (undefined4 *)0x0) {
              puVar19 = local_c8;
            }
            iVar4 = local_c8[6];
            lVar10 = (longlong)iVar13;
            uVar21 = puVar19[lVar10] & uVar16;
            if (uVar21 == 0) {
              iVar17 = iVar4 + 0x1e;
              if (-1 < iVar4 + -1) {
                iVar17 = iVar4 + -1;
              }
              iVar17 = iVar17 >> 5;
              iVar7 = iVar17;
              if (iVar17 < iVar13) {
                iVar7 = iVar13;
              }
              if (iVar17 <= iVar13) break;
              lVar20 = 0;
              while( true ) {
                iVar12 = iVar12 + 0x20;
                uVar21 = puVar19[lVar10 + lVar20 + 1];
                if (uVar21 != 0) break;
                lVar20 = lVar20 + 1;
                if (iVar7 - lVar10 == lVar20) goto LAB_1408370a4;
              }
              iVar13 = iVar13 + (int)lVar20 + 1;
              uVar16 = 0xffffffff;
            }
            uVar18 = (ulonglong)(-uVar21 & uVar21);
            uVar2 = uVar18 * 2 + 1;
            lVar10 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
              }
            }
            iVar17 = (iVar12 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
          } while (iVar17 < iVar4);
        }
      }
    }
    else {
      local_d0 = (longlong *)0x454f462d4d41524b;
      puVar6 = (ulonglong *)param_1[1];
      if (puVar6[1] < *puVar6 + 8) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,&local_d0,8);
        }
        else {
          thunk_FUN_146821949(param_1,&local_d0);
        }
      }
      else {
        *puVar6 = *puVar6 + 8;
      }
    }
  }
  else {
    local_d0 = (longlong *)0x0;
    plVar5 = (longlong *)param_1[1];
    if ((undefined8 *)plVar5[1] < (undefined8 *)*plVar5 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_d0,8);
      }
      else {
        thunk_FUN_146821949(param_1,&local_d0);
      }
    }
    else {
      local_d0 = *(longlong **)*plVar5;
      *plVar5 = *plVar5 + 8;
    }
    if (local_d0 == (longlong *)0x544f435354415232) {
      local_70 = (undefined4 *)0x0;
      lVar10 = (**(code **)(*param_1 + 0x30))(param_1);
      uVar11 = (**(code **)(*param_1 + 0x28))(param_1);
      (**(code **)(*param_1 + 0x1a0))(param_1,lVar10 + -8);
      plVar5 = (longlong *)param_1[1];
      if ((undefined8 *)plVar5[1] < (undefined8 *)*plVar5 + 1) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,&local_70,8);
        }
        else {
          thunk_FUN_146821949(param_1,&local_70);
        }
      }
      else {
        local_70 = *(undefined4 **)*plVar5;
        *plVar5 = *plVar5 + 8;
      }
      (**(code **)(*param_1 + 0x1a0))(param_1,uVar11);
      uVar18 = local_b8;
      if (local_70 == (undefined4 *)0x454f462d4d41524b) {
LAB_140836eee:
        local_b8 = uVar18;
        uVar9 = 1;
        goto LAB_140836ef0;
      }
    }
    FUN_14572541c(param_1);
  }
LAB_1408370a4:
  if ((local_50 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408374a4 FUN_1408374a4 body=555 status=ok
// SIG undefined FUN_1408374a4(void)

void FUN_1408374a4(longlong *param_1)

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
        lVar10 = (longlong)iVar6 * 0xc0;
        uVar13 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar11 + lVar10);
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0xbc + lVar10) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 0xb8 + lVar10) =
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
            if (iVar2 - lVar11 == lVar10) goto LAB_140837671;
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
LAB_140837671:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408376d0 FUN_1408376d0 body=910 status=ok
// SIG undefined FUN_1408376d0(void)

longlong * FUN_1408376d0(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined1 auStack_d8 [40];
  longlong *local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  int local_84;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0xc0,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0xc0);
  (**(code **)(*param_1 + 0x10))
            (param_1,(int)param_2[5] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_2 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  uVar4 = local_80._4_4_;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_84 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    puVar2 = (ulonglong *)param_1[1];
    piVar1 = (int *)*puVar2 + 1;
    if ((int *)puVar2[1] < piVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_84,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_84);
      }
    }
    else {
      local_84 = *(int *)*puVar2;
      *puVar2 = (ulonglong)piVar1;
    }
    local_78 = param_2 + 2;
    local_80 = (undefined4 *)&DAT_100000000;
    local_70 = 0xffffffff;
    local_68 = 0;
    if ((int)param_2[5] != 0) {
      FUN_1449c0562(&local_80);
    }
    local_a8 = local_80;
    local_a0 = local_78;
    local_90 = local_68;
    local_8c = local_64;
    local_98 = local_70;
    uVar5 = local_98;
    local_98._4_4_ = (int)((ulonglong)local_70 >> 0x20);
    local_b0 = param_2;
    if (local_98._4_4_ < (int)local_78[3]) {
      iVar7 = local_98._4_4_;
      local_98 = uVar5;
      do {
        puVar6 = (undefined4 *)((longlong)iVar7 * 0xc0 + *local_b0);
        puVar3 = *(undefined4 **)param_1[1];
        if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,puVar6,4);
          }
          else {
            thunk_FUN_14572512c(param_1,puVar6);
          }
        }
        else {
          *puVar6 = *puVar3;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
        }
        FUN_140837c4d(param_1,puVar6 + 2);
        local_98 = CONCAT44(local_98._4_4_,(uint)local_98 & ~local_a8._4_4_);
        FUN_1449c0562(&local_a8);
        iVar7 = local_98._4_4_;
        uVar5 = local_98;
      } while (local_98._4_4_ < (int)local_a0[3]);
    }
  }
  else {
    local_80 = (undefined4 *)((ulonglong)local_80._4_4_ << 0x20);
    puVar2 = (ulonglong *)param_1[1];
    puVar3 = (undefined4 *)*puVar2 + 1;
    if ((undefined4 *)puVar2[1] < puVar3) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_80,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_80);
      }
    }
    else {
      local_80 = (undefined4 *)CONCAT44(uVar4,*(undefined4 *)*puVar2);
      *puVar2 = (ulonglong)puVar3;
    }
    FUN_1414251e6(param_2,(ulonglong)local_80 & 0xffffffff);
    uVar5 = local_98;
    if (0 < (int)local_80) {
      iVar7 = 0;
      do {
        FUN_140837a60(param_2,&local_b0);
        puVar6 = local_a8;
        *local_a8 = 0;
        *(undefined8 *)(local_a8 + 2) = 0;
        *(undefined8 *)(local_a8 + 6) = 0;
        *(undefined8 *)(local_a8 + 8) = 0;
        local_a8[10] = 0xffffffff;
        local_a8[0xb] = 0xffffffff;
        local_a8[0xc] = 0xffffffff;
        local_a8[0xd] = 0xffffffff;
        *(undefined8 *)(local_a8 + 0x1c) = 0;
        local_a8[0x1e] = 0;
        *(undefined8 *)(local_a8 + 0xe) = 0;
        *(undefined8 *)(local_a8 + 0x10) = 0;
        local_a8[0x12] = 0;
        *(undefined8 *)(local_a8 + 0x14) = 0;
        *(undefined8 *)(local_a8 + 0x16) = 0;
        *(undefined8 *)(local_a8 + 0x1f) = 0xffffffff00000080;
        local_a8[0x21] = 0;
        *(undefined8 *)(local_a8 + 0x24) = 0;
        local_a8[0x26] = 0;
        *(undefined8 *)(local_a8 + 0x28) = 0;
        *(undefined8 *)(local_a8 + 0x2a) = 0;
        *(undefined2 *)(local_a8 + 0x2c) = 0;
        local_a8[0x2e] = 0xffffffff;
        puVar3 = *(undefined4 **)param_1[1];
        if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,local_a8,4);
          }
          else {
            thunk_FUN_14572512c(param_1,local_a8);
          }
        }
        else {
          *local_a8 = *puVar3;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
        }
        FUN_140837c4d(param_1,puVar6 + 2);
        iVar7 = iVar7 + 1;
        uVar5 = local_98;
      } while (iVar7 < (int)local_80);
    }
  }
  local_98 = uVar5;
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140837a60 FUN_140837a60 body=493 status=ok
// SIG undefined FUN_140837a60(void)

int * FUN_140837a60(longlong *param_1,int *param_2)

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
      FUN_140d69980(param_1,iVar11);
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
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0xc0);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0xc0) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar3 * 0xc0 + *param_1;
  return param_2;
}



// FUNCTION 140837c4d FUN_140837c4d body=1949 status=ok
// SIG undefined FUN_140837c4d(void)

longlong * FUN_140837c4d(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  char *pcVar2;
  int *piVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  ulonglong *puVar6;
  longlong lVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  int iVar14;
  uint uVar15;
  longlong *plVar16;
  code *pcVar17;
  ulonglong uVar18;
  undefined1 auStack_108 [43];
  char local_dd;
  int local_dc;
  undefined8 local_d8;
  undefined8 *local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  longlong *local_b8;
  undefined8 uStack_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  puVar4 = *(undefined8 **)param_1[1];
  if ((undefined8 *)((longlong *)param_1[1])[1] < puVar4 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,8);
    }
    else {
      thunk_FUN_146821949(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar4;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
  }
  puVar4 = *(undefined8 **)param_1[1];
  if ((undefined8 *)((longlong *)param_1[1])[1] < puVar4 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 1,8);
    }
    else {
      thunk_FUN_146821949(param_1);
    }
  }
  else {
    param_2[1] = *puVar4;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
  }
  local_dd = '\x01';
  iVar14 = (**(code **)(*param_1 + 0x50))(param_1);
  if (iVar14 == 0x12) {
    if ((*(byte *)(param_1 + 5) & 4) != 0) {
      local_dd = ((*(int *)((longlong)param_2 + 0x14) != 0 || *(int *)(param_2 + 2) != 0) ||
                 *(int *)(param_2 + 3) != 0) || *(int *)((longlong)param_2 + 0x1c) != 0;
    }
    puVar6 = (ulonglong *)param_1[1];
    pcVar2 = (char *)*puVar6 + 1;
    if ((char *)puVar6[1] < pcVar2) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_dd,1);
    }
    else {
      local_dd = *(char *)*puVar6;
      *puVar6 = (ulonglong)pcVar2;
    }
    if (local_dd == '\0') goto LAB_140837d0c;
  }
  FUN_1402ac1b3(param_1,param_2 + 2);
LAB_140837d0c:
  FUN_1408383eb(param_1,param_2 + 4);
  FUN_1408383eb(param_1,param_2 + 5);
  puVar4 = *(undefined8 **)param_1[1];
  if ((undefined8 *)((longlong *)param_1[1])[1] < puVar4 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 6,8);
    }
    else {
      thunk_FUN_146821949(param_1);
    }
  }
  else {
    param_2[6] = *puVar4;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
  }
  FUN_1408383eb(param_1,param_2 + 7);
  puVar5 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar5 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 8,4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 8) = *puVar5;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  iVar14 = (**(code **)(*param_1 + 0x50))(param_1);
  if (iVar14 == 9) {
    local_98 = 0;
    local_90 = 0;
    local_b8 = (longlong *)0x0;
    uStack_b0 = (undefined8 *)0x0;
    local_8c = 0xffffffff00000080;
    local_84 = 0;
    local_78 = 0;
    local_70 = 0;
    FUN_14740a7b6(param_1,&local_b8);
    local_70 = 0;
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    FUN_1401bc218(&local_b8);
  }
  else {
    uVar15 = (**(code **)(*param_1 + 0x50))(param_1);
    if (9 < uVar15) {
      plVar1 = param_2 + 9;
      (**(code **)(*param_1 + 0x10))
                (param_1,(longlong)*(int *)(param_2 + 10) * 0x1c,
                 (longlong)*(int *)((longlong)param_2 + 0x54) * 0x1c);
      (**(code **)(*param_1 + 0x10))
                (param_1,*(int *)(param_2 + 0xe) + 0x1fU >> 3 & 0xfffffffc,
                 *(int *)((longlong)param_2 + 0x74) + 0x1fU >> 3 & 0xfffffffc);
      uVar15 = local_d8._4_4_;
      if ((*(byte *)(param_1 + 5) & 1) == 0) {
        local_dc = *(int *)(param_2 + 10) - *(int *)((longlong)param_2 + 0x7c);
        puVar6 = (ulonglong *)param_1[1];
        piVar3 = (int *)*puVar6 + 1;
        if ((int *)puVar6[1] < piVar3) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,&local_dc,4);
          }
          else {
            thunk_FUN_14572512c(param_1,&local_dc);
          }
        }
        else {
          local_dc = *(int *)*puVar6;
          *puVar6 = (ulonglong)piVar3;
        }
        local_d0 = param_2 + 0xb;
        local_d8 = (undefined8 *)&DAT_100000000;
        local_c8 = 0xffffffff;
        local_c0 = 0;
        if (*(int *)(param_2 + 0xe) != 0) {
          FUN_1449c0562(&local_d8);
        }
        uStack_b0 = local_d8;
        local_a8 = local_d0;
        local_a0 = local_c8;
        uVar13 = local_a0;
        local_98 = CONCAT44(local_bc,local_c0);
        local_a0._4_4_ = (int)((ulonglong)local_c8 >> 0x20);
        local_b8 = plVar1;
        if (local_a0._4_4_ < *(int *)(local_d0 + 3)) {
          iVar14 = local_a0._4_4_;
          local_a0 = uVar13;
          do {
            FUN_144aa0c38(param_1,(longlong)iVar14 * 0x1c + *local_b8);
            local_a0 = CONCAT44(local_a0._4_4_,(uint)local_a0 & ~uStack_b0._4_4_);
            FUN_1449c0562(&uStack_b0);
            iVar14 = local_a0._4_4_;
            uVar13 = local_a0;
          } while (local_a0._4_4_ < *(int *)(local_a8 + 3));
        }
      }
      else {
        local_d8 = (undefined8 *)((ulonglong)local_d8._4_4_ << 0x20);
        puVar6 = (ulonglong *)param_1[1];
        puVar5 = (undefined4 *)*puVar6 + 1;
        if ((undefined4 *)puVar6[1] < puVar5) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,&local_d8,4);
          }
          else {
            thunk_FUN_14572512c(param_1,&local_d8);
          }
        }
        else {
          local_d8 = (undefined8 *)CONCAT44(uVar15,*(undefined4 *)*puVar6);
          *puVar6 = (ulonglong)puVar5;
        }
        FUN_1404112ea(plVar1,(ulonglong)local_d8 & 0xffffffff);
        uVar13 = local_a0;
        if (0 < (int)local_d8) {
          iVar14 = 0;
          do {
            FUN_140624324(plVar1,&local_b8);
            *uStack_b0 = 0;
            uStack_b0[1] = 0;
            uStack_b0[2] = 0xffffffff00000000;
            pcVar17 = *(code **)(*param_1 + 0x170);
            if (pcVar17 == FUN_14473a572) {
              plVar16 = (longlong *)param_1[0x12];
              pcVar17 = *(code **)(*plVar16 + 0x170);
              if (pcVar17 == FUN_14004e24c) {
                FUN_14004e24c(plVar16,uStack_b0,0x14);
              }
              else if (pcVar17 == FUN_1447395b8) {
                lVar9 = plVar16[0x12];
                lVar7 = plVar16[0x13];
                *(undefined4 *)(uStack_b0 + 2) = *(undefined4 *)(lVar9 + 0x10 + lVar7);
                puVar5 = (undefined4 *)(lVar9 + lVar7);
                uVar10 = puVar5[1];
                uVar11 = puVar5[2];
                uVar12 = puVar5[3];
                *(undefined4 *)uStack_b0 = *puVar5;
                *(undefined4 *)((longlong)uStack_b0 + 4) = uVar10;
                *(undefined4 *)(uStack_b0 + 1) = uVar11;
                *(undefined4 *)((longlong)uStack_b0 + 0xc) = uVar12;
                plVar16[0x13] = plVar16[0x13] + 0x14;
              }
              else {
                if (pcVar17 != FUN_144a6950e) goto LAB_140837fa5;
                if ((*(byte *)((longlong)plVar16 + 0x29) & 2) == 0) {
                  puVar5 = *(undefined4 **)plVar16[1];
                  *(undefined4 *)(uStack_b0 + 2) = puVar5[4];
                  uVar10 = puVar5[1];
                  uVar11 = puVar5[2];
                  uVar12 = puVar5[3];
                  *(undefined4 *)uStack_b0 = *puVar5;
                  *(undefined4 *)((longlong)uStack_b0 + 4) = uVar10;
                  *(undefined4 *)(uStack_b0 + 1) = uVar11;
                  *(undefined4 *)((longlong)uStack_b0 + 0xc) = uVar12;
                  plVar16 = (longlong *)plVar16[1];
                  goto LAB_140837f96;
                }
              }
            }
            else if (pcVar17 == FUN_140090aac) {
              FUN_140090aac(param_1,uStack_b0,0x14);
            }
            else {
              plVar16 = param_1;
              if (pcVar17 == FUN_144a6950e) {
                if ((*(byte *)((longlong)param_1 + 0x29) & 2) == 0) {
                  puVar5 = *(undefined4 **)param_1[1];
                  *(undefined4 *)(uStack_b0 + 2) = puVar5[4];
                  uVar10 = puVar5[1];
                  uVar11 = puVar5[2];
                  uVar12 = puVar5[3];
                  *(undefined4 *)uStack_b0 = *puVar5;
                  *(undefined4 *)((longlong)uStack_b0 + 4) = uVar10;
                  *(undefined4 *)(uStack_b0 + 1) = uVar11;
                  *(undefined4 *)((longlong)uStack_b0 + 0xc) = uVar12;
                  plVar16 = (longlong *)param_1[1];
LAB_140837f96:
                  *plVar16 = *plVar16 + 0x14;
                }
              }
              else {
LAB_140837fa5:
                (*pcVar17)(plVar16,uStack_b0,0x14);
              }
            }
            iVar14 = iVar14 + 1;
            uVar13 = local_a0;
          } while (iVar14 < (int)local_d8);
        }
      }
      local_a0 = uVar13;
      if (((*(byte *)(param_1 + 5) & 1) != 0) ||
         (((*(byte *)(param_1 + 5) & 4) == 0 && ((*(byte *)((longlong)param_1 + 0x2b) & 4) != 0))))
      {
        if (param_2[0x11] != 0) {
          FUN_1446efa72(param_2 + 0x11,0,0,4);
        }
        *(undefined4 *)(param_2 + 0x12) = 0;
        uVar15 = *(int *)(param_2 + 10) - *(int *)((longlong)param_2 + 0x7c);
        iVar14 = 1;
        if (3 < uVar15) {
          uVar18 = (ulonglong)(uVar15 & 0xfffffffe) + 0xf;
          lVar9 = 0x3f;
          if (uVar18 != 0) {
            for (; uVar18 >> lVar9 == 0; lVar9 = lVar9 + -1) {
            }
          }
          iVar14 = 1 << ((byte)lVar9 & 0x1f);
        }
        if ((0 < (int)uVar15) && (0 < iVar14)) {
          *(int *)(param_2 + 0x12) = iVar14;
          FUN_1406240a0(plVar1);
        }
      }
    }
  }
  uVar15 = (**(code **)(*param_1 + 0x50))(param_1);
  if (0xc < uVar15) {
    puVar4 = *(undefined8 **)param_1[1];
    if ((undefined8 *)((longlong *)param_1[1])[1] < puVar4 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,param_2 + 0x13,8);
      }
      else {
        thunk_FUN_146821949(param_1);
      }
    }
    else {
      param_2[0x13] = *puVar4;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
    }
  }
  uVar15 = (**(code **)(*param_1 + 0x50))(param_1);
  if (0xf < uVar15) {
    puVar8 = *(undefined2 **)param_1[1];
    if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar8 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,param_2 + 0x15,2);
      }
      else {
        thunk_FUN_1457251a8(param_1);
      }
    }
    else {
      *(undefined2 *)(param_2 + 0x15) = *puVar8;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
    }
  }
  uVar15 = (**(code **)(*param_1 + 0x50))(param_1);
  if (0x15 < uVar15) {
    FUN_1408383eb(param_1,param_2 + 0x14);
  }
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1408383eb FUN_1408383eb body=84 status=ok
// SIG undefined FUN_1408383eb(void)

longlong * FUN_1408383eb(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)param_1[1];
  if ((undefined8 *)((longlong *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,8);
    }
    else {
      thunk_FUN_146821949(param_1);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
  }
  return param_1;
}



// FUNCTION 140838447 FUN_140838447 body=468 status=ok
// SIG undefined FUN_140838447(void)

undefined8 FUN_140838447(uint param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined2 *puVar7;
  ushort uVar8;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc1ae00) && (FUN_144b3d300(&DAT_14cc1ae00), DAT_14cc1ae00 == -1)) {
    FUN_140056680(&DAT_14cc1ade8,L"r.DeformerGraph.Enable");
    DAT_14cc1adf8 = (longlong *)0x0;
    atexit((_func_5014 *)&LAB_144525da6);
    _Init_thread_footer(&DAT_14cc1ae00);
  }
  uVar8 = (ushort)param_1;
  uVar4 = (ulonglong)param_1 & 0xffff;
  puVar3 = &DAT_14ca84468;
  if (uVar8 != 0x31) {
    switch((int)uVar4) {
    case 0x30:
switchD_140838555_caseD_30:
      puVar3 = &DAT_14ca84470;
      break;
    case 0x31:
    case 0x32:
switchD_140838555_caseD_31:
      if ((uVar8 & 0xfff0) != 0x20) {
        uVar5 = 0;
        goto LAB_140838488;
      }
      lVar6 = FUN_14741392a();
      puVar3 = (undefined8 *)(lVar6 + (ulonglong)(param_1 & 0xf) * 0x18);
      break;
    case 0x33:
      break;
    case 0x34:
switchD_140838555_caseD_34:
      puVar3 = &DAT_14ca84480;
      break;
    case 0x35:
switchD_140838555_caseD_35:
      puVar3 = &DAT_14ca84478;
      break;
    default:
      switch(uVar4) {
      case 0:
      case 0xe:
      case 0xf:
      case 0x11:
      case 0x14:
        break;
      default:
        goto switchD_140838555_caseD_31;
      case 0xb:
      case 0xc:
        goto switchD_140838555_caseD_35;
      case 0x10:
      case 0x16:
      case 0x1b:
        goto switchD_140838555_caseD_34;
      case 0x15:
      case 0x18:
        goto switchD_140838555_caseD_30;
      case 0x1e:
      case 0x1f:
        puVar3 = &DAT_14ca84488;
      }
    }
  }
  uVar5 = *puVar3;
LAB_140838488:
  if (DAT_14cc1adf8 == (longlong *)0x0) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    puVar7 = DAT_14cc1ade8;
    if (DAT_14cc1adf0 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    DAT_14cc1adf8 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,puVar7,1);
  }
  cVar1 = FUN_14002b5e0(uVar5,"Windows",7);
  if (((cVar1 == '\0') && (DAT_14ca85550 != uVar8)) ||
     (iVar2 = (**(code **)(*DAT_14cc1adf8 + 0xb0))(), iVar2 == 0)) {
    uVar5 = 0;
  }
  else {
    uVar4 = CONCAT71((int7)(uVar4 * 0x3c >> 8),
                     *(undefined1 *)((longlong)&DAT_14ca814d0 + uVar4 * 0x3c)) & 0xffffffffffffff02;
    uVar5 = CONCAT71((int7)(uVar4 >> 8),(byte)uVar4 >> 1);
  }
  return uVar5;
}



// FUNCTION 14083861c FUN_14083861c body=264 status=ok
// SIG undefined FUN_14083861c(void)

undefined8 * FUN_14083861c(char *param_1,undefined8 *param_2)

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
  if (*param_1 != '\x01') goto LAB_140838640;
  FUN_140838726(0,&local_38);
  FUN_14018932e(&local_30,param_1 + -0x599,local_38);
  plVar1 = local_28;
  if (local_28 == (longlong *)0x0) {
    *param_2 = local_30;
    goto LAB_140838640;
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
joined_r0x000140838702:
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
        goto joined_r0x000140838702;
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
LAB_140838640:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140838726 FUN_140838726 body=120 status=ok
// SIG undefined FUN_140838726(void)

undefined8 * FUN_140838726(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa1550) {
    FUN_144b3d300(&DAT_14caa1550);
    if (DAT_14caa1550 == -1) {
      FUN_1446ddc76(&DAT_14caa1548,"OnComponentBeginOverlap",1);
      _Init_thread_footer(&DAT_14caa1550);
    }
  }
  *param_2 = DAT_14caa1548;
  return param_2;
}



// FUNCTION 14083882c FUN_14083882c body=31 status=ok
// SIG undefined FUN_14083882c(void)

undefined8 FUN_14083882c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140838852 FUN_140838852 body=57 status=ok
// SIG undefined FUN_140838852(void)

void FUN_140838852(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb690a0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb690a0 = FUN_140002ddd(FUN_14651ee38,uVar1,L"GpsGenerator_Characters");
  }
  return;
}



// FUNCTION 14083888c FUN_14083888c body=95 status=ok
// SIG undefined FUN_14083888c(void)

void FUN_14083888c(longlong param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  FUN_1408388ec(param_2,param_1,param_3,param_4,0);
  FUN_140308182(param_1,0);
  FUN_1408388ec(param_2,param_1 + 0x220,param_3 & 0xffffffff,param_4,1);
  FUN_140308182(param_1 + 0x220,0);
  return;
}



// FUNCTION 1408388ec FUN_1408388ec body=1299 status=ok
// SIG undefined FUN_1408388ec(void)

void FUN_1408388ec(longlong param_1,undefined8 param_2,undefined4 param_3,longlong param_4,
                  undefined1 param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  longlong *plVar13;
  uint *puVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined1 auStack_b8 [32];
  undefined1 **local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  uint local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 *local_68 [2];
  longlong *local_58;
  longlong local_48 [5];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78 = *(uint *)(param_1 + 0x78) - 1;
  if (*(uint *)(param_4 + 0x170) < *(uint *)(param_1 + 0x78)) {
    local_78 = *(uint *)(param_4 + 0x170);
  }
  uStack_70 = CONCAT31(uStack_70._1_3_,param_5);
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  local_88 = param_2;
  uStack_80 = param_1;
  uStack_74 = param_3;
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_14083895f;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_140838964;
      goto LAB_140838995;
    }
  }
  else {
LAB_14083895f:
    if (iVar6 != 0x10) {
LAB_140838995:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
        goto LAB_140838964;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_140838964;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar2;
        if (puVar10 != (uint *)0x0) goto LAB_140838b1a;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_143715770);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar9 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar9 = 0xffffffff;
          *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
          puVar9[0x12] = 0;
          *puVar2 = puVar9;
          FUN_140217a48(puVar2);
          puVar10 = (uint *)*puVar2;
LAB_140838b1a:
          puVar16 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar14 = (uint *)(puVar16 + 0x19);
          uVar12 = puVar10[0x12];
          if (puVar14 <= puVar10 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
            LOCK();
            uVar3 = *puVar10;
            *puVar10 = *puVar10 + uVar12 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar12) != 0xffffffff) break;
            puVar10 = (uint *)*puVar2;
            *puVar10 = 0xffffffff;
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
            puVar10[0x12] = 0;
            *puVar2 = puVar10;
            puVar16 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
            puVar14 = (uint *)(puVar16 + 0x19);
            uVar12 = 0;
            if (puVar14 <= puVar10 + 0x4000) {
              uVar12 = 1;
              goto LAB_140838b9a;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_140838b9a:
        *(uint **)(puVar10 + 0x10) = puVar14;
        puVar10[0x12] = uVar12;
        iVar6 = 0;
        FUN_1447247dc(puVar16,0);
        *puVar16 = &PTR_FUN_14aabc5f8;
        *(undefined4 *)(puVar16 + 0x15) = (undefined4)local_88;
        *(undefined4 *)((longlong)puVar16 + 0xac) = local_88._4_4_;
        *(undefined4 *)(puVar16 + 0x16) = (undefined4)uStack_80;
        *(undefined4 *)((longlong)puVar16 + 0xb4) = uStack_80._4_4_;
        *(uint *)(puVar16 + 0x17) = local_78;
        *(undefined4 *)((longlong)puVar16 + 0xbc) = uStack_74;
        *(undefined4 *)(puVar16 + 0x18) = uStack_70;
        *(undefined4 *)((longlong)puVar16 + 0xc4) = uStack_6c;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar12 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
            uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
            iVar6 = 0;
          }
          else {
            uVar15 = 2;
          }
        }
        else {
          iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar15 = 5;
        }
        if (*(code **)(puVar16[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar16[0xe] + 0x18))(puVar16 + 0xe,puVar16 + 9);
        }
        puVar16[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar16[9] = puVar16;
        puVar16[10] = puVar16;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar5 = 1;
          if ((char)uVar15 != '\x06') {
            uVar5 = uVar15;
          }
          uVar15 = uVar5;
          uVar11 = 0;
        }
        else {
          if ((char)uVar15 == '\x06') {
            uVar15 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar11 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar16[0xf] = uVar11;
        puVar16[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar16 + 0x1c) = iVar6;
        if (puVar16 == (undefined8 *)0x0) {
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
          UNLOCK();
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(puVar16);
          LOCK();
          piVar1 = (int *)(puVar16 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar16)(puVar16,1);
          }
        }
      }
      else {
        local_68[0] = (undefined1 *)0x0;
        local_58 = (longlong *)FUN_14001cc68(0x28,8);
        *local_58 = (longlong)&PTR_LAB_14aabc5a0;
        *(uint *)(local_58 + 3) = local_78;
        *(undefined4 *)((longlong)local_58 + 0x1c) = uStack_74;
        *(undefined4 *)(local_58 + 4) = uStack_70;
        *(undefined4 *)((longlong)local_58 + 0x24) = uStack_6c;
        *(undefined4 *)(local_58 + 1) = (undefined4)local_88;
        *(undefined4 *)((longlong)local_58 + 0xc) = local_88._4_4_;
        *(undefined4 *)(local_58 + 2) = (undefined4)uStack_80;
        *(undefined4 *)((longlong)local_58 + 0x14) = uStack_80._4_4_;
        if (local_58 + 1 != (longlong *)0x0) {
          local_68[0] = &LAB_143716cb0;
        }
        local_98 = local_68;
        FUN_14005a792(&DAT_14ca9a440,L"InitStaticMeshVertexFactory",&DAT_14cb09d90);
        if (local_68[0] != (undefined1 *)0x0) {
          plVar13 = local_58;
          if (local_58 == (longlong *)0x0) {
            plVar13 = local_48;
          }
          (**(code **)(*plVar13 + 0x10))();
        }
      }
      goto LAB_140838a55;
    }
  }
LAB_140838964:
  FUN_143716a14(&local_88,&DAT_14ca85100);
LAB_140838a55:
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140838e00 FUN_140838e00 body=4175 status=ok
// SIG undefined FUN_140838e00(void)

void FUN_140838e00(longlong param_1,longlong *param_2,undefined4 param_3)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  char local_e0 [16];
  longlong *local_d0;
  undefined4 local_b8 [2];
  undefined4 local_b0;
  undefined4 uStack_ac;
  ushort local_98;
  byte local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_140839e8a();
  lVar2 = *param_2;
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  lVar7 = (ulonglong)((uint)*(ushort *)(param_1 + 0x3f4) * 0x50) + DAT_14c9a6588;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  local_e0[0] = '\0';
  local_b8[0] = 0;
  FUN_14083c332(local_e0,param_2);
  puVar6 = &local_b0;
  FUN_1448729ea(lVar7,puVar6,local_e0);
  uVar8 = local_b0;
  if (local_90 != 3) {
    puVar5 = &local_88;
    FUN_1400b56fe(puVar5,&local_b0,3);
    uVar8 = 0;
    if (local_68 != 0) {
      uVar8 = local_88;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_70) {
        puVar5 = (undefined4 *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar3)(puVar5);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  uVar4 = FUN_140839e50();
  lVar7 = *(longlong *)(lVar2 + 0x200);
  if (lVar7 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_1403f69f4(lVar7,uVar4,0);
  }
  local_e8 = 0;
  FUN_14083c276(lVar2,uVar4,uVar8,param_3);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_98) {
      puVar6 = (undefined4 *)CONCAT44(uStack_ac,local_b0);
    }
    (*pcVar3)(puVar6);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
  }
  FUN_1448173f8(local_b8);
  if ((local_e0[0] == '\x03') && (local_d0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_d0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_d0 + 0x10))();
    }
  }
  lVar2 = *param_2;
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  lVar7 = (ulonglong)((uint)*(ushort *)(param_1 + 0x3f6) * 0x50) + DAT_14c9a6588;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  local_e0[0] = '\0';
  local_b8[0] = 0;
  FUN_14083c332(local_e0,param_2);
  puVar6 = &local_b0;
  FUN_1448729ea(lVar7,puVar6,local_e0);
  uVar8 = local_b0;
  if (local_90 != 3) {
    puVar5 = &local_88;
    FUN_1400b56fe(puVar5,&local_b0,3);
    uVar8 = 0;
    if (local_68 != 0) {
      uVar8 = local_88;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_70) {
        puVar5 = (undefined4 *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar3)(puVar5);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  uVar4 = FUN_140839e50();
  lVar7 = *(longlong *)(lVar2 + 0x200);
  if (lVar7 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_1403f69f4(lVar7,uVar4,1);
  }
  local_e8 = 0;
  FUN_14083c276(lVar2,uVar4,uVar8,param_3);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_98) {
      puVar6 = (undefined4 *)CONCAT44(uStack_ac,local_b0);
    }
    (*pcVar3)(puVar6);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
  }
  FUN_1448173f8(local_b8);
  if ((local_e0[0] == '\x03') && (local_d0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_d0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_d0 + 0x10))();
    }
  }
  lVar2 = *param_2;
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  lVar7 = (ulonglong)((uint)*(ushort *)(param_1 + 0x3f8) * 0x50) + DAT_14c9a6588;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  local_e0[0] = '\0';
  local_b8[0] = 0;
  FUN_14083c332(local_e0,param_2);
  puVar6 = &local_b0;
  FUN_1448729ea(lVar7,puVar6,local_e0);
  uVar8 = local_b0;
  if (local_90 != 3) {
    puVar5 = &local_88;
    FUN_1400b56fe(puVar5,&local_b0,3);
    uVar8 = 0;
    if (local_68 != 0) {
      uVar8 = local_88;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_70) {
        puVar5 = (undefined4 *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar3)(puVar5);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  uVar4 = FUN_140839e50();
  lVar7 = *(longlong *)(lVar2 + 0x200);
  if (lVar7 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_1403f69f4(lVar7,uVar4,2);
  }
  local_e8 = 0;
  FUN_14083c276(lVar2,uVar4,uVar8,param_3);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_98) {
      puVar6 = (undefined4 *)CONCAT44(uStack_ac,local_b0);
    }
    (*pcVar3)(puVar6);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
  }
  FUN_1448173f8(local_b8);
  if ((local_e0[0] == '\x03') && (local_d0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_d0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_d0 + 0x10))();
    }
  }
  lVar2 = *param_2;
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  lVar7 = (ulonglong)((uint)*(ushort *)(param_1 + 0x3fa) * 0x50) + DAT_14c9a6588;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  local_e0[0] = '\0';
  local_b8[0] = 0;
  FUN_14083c332(local_e0,param_2);
  puVar6 = &local_b0;
  FUN_1448729ea(lVar7,puVar6,local_e0);
  uVar8 = local_b0;
  if (local_90 != 3) {
    puVar5 = &local_88;
    FUN_1400b56fe(puVar5,&local_b0,3);
    uVar8 = 0;
    if (local_68 != 0) {
      uVar8 = local_88;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_70) {
        puVar5 = (undefined4 *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar3)(puVar5);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  uVar4 = FUN_140839e50();
  lVar7 = *(longlong *)(lVar2 + 0x200);
  if (lVar7 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_1403f69f4(lVar7,uVar4,3);
  }
  local_e8 = 0;
  FUN_14083c276(lVar2,uVar4,uVar8,param_3);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_98) {
      puVar6 = (undefined4 *)CONCAT44(uStack_ac,local_b0);
    }
    (*pcVar3)(puVar6);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
  }
  FUN_1448173f8(local_b8);
  if ((local_e0[0] == '\x03') && (local_d0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_d0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_d0 + 0x10))();
    }
  }
  lVar2 = *param_2;
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  lVar7 = (ulonglong)((uint)*(ushort *)(param_1 + 0x3fc) * 0x50) + DAT_14c9a6588;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  local_e0[0] = '\0';
  local_b8[0] = 0;
  FUN_14083c332(local_e0,param_2);
  puVar6 = &local_b0;
  FUN_1448729ea(lVar7,puVar6,local_e0);
  uVar8 = local_b0;
  if (local_90 != 3) {
    puVar5 = &local_88;
    FUN_1400b56fe(puVar5,&local_b0,3);
    uVar8 = 0;
    if (local_68 != 0) {
      uVar8 = local_88;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_70) {
        puVar5 = (undefined4 *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar3)(puVar5);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  uVar4 = FUN_140839e50();
  lVar7 = *(longlong *)(lVar2 + 0x200);
  if (lVar7 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_1403f69f4(lVar7,uVar4,4);
  }
  local_e8 = 0;
  FUN_14083c276(lVar2,uVar4,uVar8,param_3);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_98) {
      puVar6 = (undefined4 *)CONCAT44(uStack_ac,local_b0);
    }
    (*pcVar3)(puVar6);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
  }
  FUN_1448173f8(local_b8);
  if ((local_e0[0] == '\x03') && (local_d0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_d0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_d0 + 0x10))();
    }
  }
  lVar2 = *param_2;
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  lVar7 = (ulonglong)((uint)*(ushort *)(param_1 + 0x3fe) * 0x50) + DAT_14c9a6588;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  local_e0[0] = '\0';
  local_b8[0] = 0;
  FUN_14083c332(local_e0,param_2);
  puVar6 = &local_b0;
  FUN_1448729ea(lVar7,puVar6,local_e0);
  uVar8 = local_b0;
  if (local_90 != 3) {
    puVar5 = &local_88;
    FUN_1400b56fe(puVar5,&local_b0,3);
    uVar8 = 0;
    if (local_68 != 0) {
      uVar8 = local_88;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_70) {
        puVar5 = (undefined4 *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar3)(puVar5);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  uVar4 = FUN_140839e50();
  lVar7 = *(longlong *)(lVar2 + 0x200);
  if (lVar7 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_1403f69f4(lVar7,uVar4,5);
  }
  local_e8 = 0;
  FUN_14083c276(lVar2,uVar4,uVar8,param_3);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_98) {
      puVar6 = (undefined4 *)CONCAT44(uStack_ac,local_b0);
    }
    (*pcVar3)(puVar6);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
  }
  FUN_1448173f8(local_b8);
  if ((local_e0[0] == '\x03') && (local_d0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_d0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_d0 + 0x10))();
    }
  }
  lVar2 = *param_2;
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  lVar7 = (ulonglong)((uint)*(ushort *)(param_1 + 0x400) * 0x50) + DAT_14c9a6588;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  local_e0[0] = '\0';
  local_b8[0] = 0;
  FUN_14083c332(local_e0,param_2);
  puVar6 = &local_b0;
  FUN_1448729ea(lVar7,puVar6,local_e0);
  uVar8 = local_b0;
  if (local_90 != 3) {
    puVar5 = &local_88;
    FUN_1400b56fe(puVar5,&local_b0,3);
    uVar8 = 0;
    if (local_68 != 0) {
      uVar8 = local_88;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_70) {
        puVar5 = (undefined4 *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar3)(puVar5);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  uVar4 = FUN_140839e50();
  lVar7 = *(longlong *)(lVar2 + 0x200);
  if (lVar7 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_1403f69f4(lVar7,uVar4,6);
  }
  local_e8 = 0;
  FUN_14083c276(lVar2,uVar4,uVar8,param_3);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_98) {
      puVar6 = (undefined4 *)CONCAT44(uStack_ac,local_b0);
    }
    (*pcVar3)(puVar6);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
  }
  FUN_1448173f8(local_b8);
  if ((local_e0[0] == '\x03') && (local_d0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_d0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_d0 + 0x10))();
    }
  }
  lVar2 = *param_2;
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  lVar7 = (ulonglong)((uint)*(ushort *)(param_1 + 0x402) * 0x50) + DAT_14c9a6588;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  local_e0[0] = '\0';
  local_b8[0] = 0;
  FUN_14083c332(local_e0,param_2);
  puVar6 = &local_b0;
  FUN_1448729ea(lVar7,puVar6,local_e0);
  uVar8 = local_b0;
  if (local_90 != 3) {
    puVar5 = &local_88;
    FUN_1400b56fe(puVar5,&local_b0,3);
    uVar8 = local_88;
    if (local_68 == 0) {
      uVar8 = 0x3f800000;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_70) {
        puVar5 = (undefined4 *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar3)(puVar5);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  uVar4 = FUN_140839e50();
  lVar7 = *(longlong *)(lVar2 + 0x200);
  if (lVar7 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_1403f69f4(lVar7,uVar4,7);
  }
  local_e8 = 0;
  FUN_14083c276(lVar2,uVar4,uVar8,param_3);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_98) {
      puVar6 = (undefined4 *)CONCAT44(uStack_ac,local_b0);
    }
    (*pcVar3)(puVar6);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
  }
  FUN_1448173f8(local_b8);
  if ((local_e0[0] == '\x03') && (local_d0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_d0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_d0 + 0x10))();
    }
  }
  lVar2 = *param_2;
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  lVar7 = (ulonglong)((uint)*(ushort *)(param_1 + 0x404) * 0x50) + DAT_14c9a6588;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  local_e0[0] = '\0';
  local_b8[0] = 0;
  FUN_14083c332(local_e0,param_2);
  puVar6 = &local_b0;
  FUN_1448729ea(lVar7,puVar6,local_e0);
  uVar8 = local_b0;
  if (local_90 != 3) {
    puVar5 = &local_88;
    FUN_1400b56fe(puVar5,&local_b0,3);
    uVar8 = 0;
    if (local_68 != 0) {
      uVar8 = local_88;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_70) {
        puVar5 = (undefined4 *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar3)(puVar5);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  uVar4 = FUN_140839e50();
  lVar7 = *(longlong *)(lVar2 + 0x200);
  if (lVar7 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_1403f69f4(lVar7,uVar4,8);
  }
  local_e8 = 0;
  FUN_14083c276(lVar2,uVar4,uVar8,param_3);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_98) {
      puVar6 = (undefined4 *)CONCAT44(uStack_ac,local_b0);
    }
    (*pcVar3)(puVar6);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
  }
  FUN_1448173f8(local_b8);
  if ((local_e0[0] == '\x03') && (local_d0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_d0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_d0 + 0x10))();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140839e50 FUN_140839e50 body=57 status=ok
// SIG undefined FUN_140839e50(void)

void FUN_140839e50(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc0d80 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc0d80 = FUN_14171c317(FUN_146619352,uVar1,L"EAtt_WeaponBehaviorOrderFireProjectile");
  }
  return;
}



// FUNCTION 140839e8a FUN_140839e8a body=508 status=ok
// SIG undefined FUN_140839e8a(void)

void FUN_140839e8a(longlong param_1,longlong *param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  longlong lVar3;
  code *pcVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 ***pppuVar8;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  char local_a8 [16];
  longlong *local_98;
  undefined4 local_80 [2];
  undefined8 **local_78 [3];
  ushort local_60;
  byte local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14083a0c0();
  lVar3 = *param_2;
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  lVar7 = (ulonglong)((uint)*(ushort *)(param_1 + 0x35c) * 0x50) + DAT_14c9a6588;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  local_a8[0] = '\0';
  local_80[0] = 0;
  FUN_14083c332(local_a8,param_2);
  FUN_1448729ea(lVar7,local_78,local_a8);
  iVar5 = FUN_14005fbd2(local_78,1);
  uVar6 = FUN_14083a087();
  lVar7 = *(longlong *)(lVar3 + 0x200);
  if (lVar7 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_1403f69f4(lVar7,uVar6,0);
  }
  local_b8 = 0;
  FUN_14083c276(lVar3,uVar6,(float)iVar5,param_3);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
  if (pcVar4 != (code *)0x0) {
    pppuVar8 = local_78;
    if (0x18 < local_60) {
      pppuVar8 = (undefined8 ***)local_78[0];
    }
    (*pcVar4)(pppuVar8);
  }
  if (0x18 < local_60) {
    FUN_1400020a8(local_78[0]);
  }
  FUN_1448173f8(local_80);
  if ((local_a8[0] == '\x03') && (local_98 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_98 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_98 + 0x10))();
    }
  }
  lVar3 = *param_2;
  uVar2 = *(undefined4 *)(param_1 + 0x310);
  uVar6 = FUN_14083a087();
  lVar7 = *(longlong *)(lVar3 + 0x200);
  if (lVar7 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_1403f69f4(lVar7,uVar6,1);
  }
  local_b8 = 0;
  FUN_14083c276(lVar3,uVar6,uVar2,param_3);
  if ((local_50 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14083a087 FUN_14083a087 body=57 status=ok
// SIG undefined FUN_14083a087(void)

void FUN_14083a087(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc0cc0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc0cc0 = FUN_14171c317(FUN_1466190a0,uVar1,L"EAtt_WeaponBehaviorFireProjectile");
  }
  return;
}



// FUNCTION 14083a0c0 FUN_14083a0c0 body=1471 status=ok
// SIG undefined FUN_14083a0c0(void)

void FUN_14083a0c0(longlong param_1,longlong *param_2,undefined4 param_3)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  char local_e0 [16];
  longlong *local_d0;
  undefined4 local_b8 [2];
  undefined4 local_b0;
  undefined4 uStack_ac;
  ushort local_98;
  byte local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_14083a6ba();
  lVar2 = *param_2;
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  lVar7 = (ulonglong)((uint)*(ushort *)(param_1 + 0x2d8) * 0x50) + DAT_14c9a6588;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  local_e0[0] = '\0';
  local_b8[0] = 0;
  FUN_14083c332(local_e0,param_2);
  puVar6 = &local_b0;
  FUN_1448729ea(lVar7,puVar6,local_e0);
  uVar8 = local_b0;
  if (local_90 != 3) {
    puVar5 = &local_88;
    FUN_1400b56fe(puVar5,&local_b0,3);
    uVar8 = 0;
    if (local_68 != 0) {
      uVar8 = local_88;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_70) {
        puVar5 = (undefined4 *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar3)(puVar5);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  uVar4 = FUN_14083a680();
  lVar7 = *(longlong *)(lVar2 + 0x200);
  if (lVar7 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_1403f69f4(lVar7,uVar4,0);
  }
  local_e8 = 0;
  FUN_14083c276(lVar2,uVar4,uVar8,param_3);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_98) {
      puVar6 = (undefined4 *)CONCAT44(uStack_ac,local_b0);
    }
    (*pcVar3)(puVar6);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
  }
  FUN_1448173f8(local_b8);
  if ((local_e0[0] == '\x03') && (local_d0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_d0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_d0 + 0x10))();
    }
  }
  lVar2 = *param_2;
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  lVar7 = (ulonglong)((uint)*(ushort *)(param_1 + 0x2da) * 0x50) + DAT_14c9a6588;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  local_e0[0] = '\0';
  local_b8[0] = 0;
  FUN_14083c332(local_e0,param_2);
  puVar6 = &local_b0;
  FUN_1448729ea(lVar7,puVar6,local_e0);
  uVar8 = local_b0;
  if (local_90 != 3) {
    puVar5 = &local_88;
    FUN_1400b56fe(puVar5,&local_b0,3);
    uVar8 = 0;
    if (local_68 != 0) {
      uVar8 = local_88;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_70) {
        puVar5 = (undefined4 *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar3)(puVar5);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  uVar4 = FUN_14083a680();
  lVar7 = *(longlong *)(lVar2 + 0x200);
  if (lVar7 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_1403f69f4(lVar7,uVar4,1);
  }
  local_e8 = 0;
  FUN_14083c276(lVar2,uVar4,uVar8,param_3);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_98) {
      puVar6 = (undefined4 *)CONCAT44(uStack_ac,local_b0);
    }
    (*pcVar3)(puVar6);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
  }
  FUN_1448173f8(local_b8);
  if ((local_e0[0] == '\x03') && (local_d0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_d0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_d0 + 0x10))();
    }
  }
  lVar2 = *param_2;
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  lVar7 = (ulonglong)((uint)*(ushort *)(param_1 + 0x2dc) * 0x50) + DAT_14c9a6588;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  local_e0[0] = '\0';
  local_b8[0] = 0;
  FUN_14083c332(local_e0,param_2);
  puVar6 = &local_b0;
  FUN_1448729ea(lVar7,puVar6,local_e0);
  uVar8 = local_b0;
  if (local_90 != 3) {
    puVar5 = &local_88;
    FUN_1400b56fe(puVar5,&local_b0,3);
    uVar8 = local_88;
    if (local_68 == 0) {
      uVar8 = 0x3f800000;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_70) {
        puVar5 = (undefined4 *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar3)(puVar5);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  uVar4 = FUN_14083a680();
  lVar7 = *(longlong *)(lVar2 + 0x200);
  if (lVar7 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_1403f69f4(lVar7,uVar4,2);
  }
  local_e8 = 0;
  FUN_14083c276(lVar2,uVar4,uVar8,param_3);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_98) {
      puVar6 = (undefined4 *)CONCAT44(uStack_ac,local_b0);
    }
    (*pcVar3)(puVar6);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
  }
  FUN_1448173f8(local_b8);
  if ((local_e0[0] == '\x03') && (local_d0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_d0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_d0 + 0x10))();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14083a680 FUN_14083a680 body=57 status=ok
// SIG undefined FUN_14083a680(void)

void FUN_14083a680(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc0cf0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc0cf0 = FUN_14171c317(FUN_146619166,uVar1,L"EAtt_WeaponBehaviorOakFire");
  }
  return;
}



// FUNCTION 14083a6ba FUN_14083a6ba body=7042 status=ok
// SIG undefined FUN_14083a6ba(void)

void FUN_14083a6ba(longlong param_1,longlong *param_2,ulonglong param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  ulonglong uVar8;
  char cVar9;
  longlong lVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  char local_f0 [16];
  longlong *local_e0;
  undefined4 local_c8 [2];
  undefined4 local_c0;
  undefined4 uStack_bc;
  ushort local_a8;
  byte local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  ushort local_80;
  byte local_78;
  ulonglong local_70;
  
  uVar8 = param_3 & 0xffffffff;
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_14083c512();
  lVar3 = *param_2;
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  lVar10 = (ulonglong)((uint)*(ushort *)(param_1 + 0x2ba) * 0x50) + DAT_14c9a6588;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  local_f0[0] = '\0';
  local_c8[0] = 0;
  FUN_14083c332(local_f0,param_2);
  puVar12 = &local_c0;
  FUN_1448729ea(lVar10,puVar12,local_f0);
  uVar13 = local_c0;
  if (local_a0 != 3) {
    puVar11 = &local_98;
    FUN_1400b56fe(puVar11,&local_c0,3);
    uVar13 = local_98;
    if (local_78 == 0) {
      uVar13 = 0x40200000;
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (0x18 < local_80) {
        puVar11 = (undefined4 *)CONCAT44(uStack_94,local_98);
      }
      (*pcVar4)(puVar11);
    }
    if (0x18 < local_80) {
      FUN_1400020a8(CONCAT44(uStack_94,local_98));
    }
  }
  uVar5 = FUN_14083c23d();
  lVar10 = *(longlong *)(lVar3 + 0x200);
  if (lVar10 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar10,uVar5,0);
  }
  local_f8 = 0;
  FUN_14083c276(lVar3,uVar5,uVar13,param_3 & 0xffffffff);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a0 * 0x120));
  if (pcVar4 != (code *)0x0) {
    if (0x18 < local_a8) {
      puVar12 = (undefined4 *)CONCAT44(uStack_bc,local_c0);
    }
    (*pcVar4)(puVar12);
  }
  if (0x18 < local_a8) {
    FUN_1400020a8(CONCAT44(uStack_bc,local_c0));
  }
  FUN_1448173f8(local_c8);
  if ((local_f0[0] == '\x03') && (local_e0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_e0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_e0 + 0x10))();
    }
  }
  lVar3 = *param_2;
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  lVar10 = (ulonglong)((uint)*(ushort *)(param_1 + 700) * 0x50) + DAT_14c9a6588;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  local_f0[0] = '\0';
  local_c8[0] = 0;
  FUN_14083c332(local_f0,param_2);
  puVar12 = &local_c0;
  FUN_1448729ea(lVar10,puVar12,local_f0);
  uVar13 = local_c0;
  if (local_a0 != 3) {
    puVar11 = &local_98;
    FUN_1400b56fe(puVar11,&local_c0,3);
    uVar13 = local_98;
    if (local_78 == 0) {
      uVar13 = 0x3f800000;
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (0x18 < local_80) {
        puVar11 = (undefined4 *)CONCAT44(uStack_94,local_98);
      }
      (*pcVar4)(puVar11);
    }
    if (0x18 < local_80) {
      FUN_1400020a8(CONCAT44(uStack_94,local_98));
    }
  }
  uVar5 = FUN_14083c23d();
  lVar10 = *(longlong *)(lVar3 + 0x200);
  if (lVar10 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar10,uVar5,0x17);
  }
  local_f8 = 0;
  FUN_14083c276(lVar3,uVar5,uVar13,param_3 & 0xffffffff);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a0 * 0x120));
  if (pcVar4 != (code *)0x0) {
    if (0x18 < local_a8) {
      puVar12 = (undefined4 *)CONCAT44(uStack_bc,local_c0);
    }
    (*pcVar4)(puVar12);
  }
  if (0x18 < local_a8) {
    FUN_1400020a8(CONCAT44(uStack_bc,local_c0));
  }
  FUN_1448173f8(local_c8);
  if ((local_f0[0] == '\x03') && (local_e0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_e0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_e0 + 0x10))();
    }
  }
  lVar3 = *param_2;
  iVar2 = *(int *)(param_1 + 0x90);
  uVar5 = FUN_14083c23d();
  lVar10 = *(longlong *)(lVar3 + 0x200);
  if (lVar10 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar10,uVar5,1);
  }
  local_f8 = 0;
  FUN_14083c276(lVar3,uVar5,(float)iVar2,param_3 & 0xffffffff);
  lVar3 = *param_2;
  uVar13 = *(undefined4 *)(param_1 + 0x94);
  uVar5 = FUN_14083c23d();
  lVar10 = *(longlong *)(lVar3 + 0x200);
  if (lVar10 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar10,uVar5,2);
  }
  local_f8 = 0;
  FUN_14083c276(lVar3,uVar5,uVar13,param_3 & 0xffffffff);
  lVar3 = *param_2;
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  lVar10 = (ulonglong)((uint)*(ushort *)(param_1 + 0x2be) * 0x50) + DAT_14c9a6588;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  local_f0[0] = '\0';
  local_c8[0] = 0;
  FUN_14083c332(local_f0,param_2);
  puVar12 = &local_c0;
  FUN_1448729ea(lVar10,puVar12,local_f0);
  uVar13 = local_c0;
  if (local_a0 != 3) {
    puVar11 = &local_98;
    FUN_1400b56fe(puVar11,&local_c0,3);
    uVar13 = local_98;
    if (local_78 == 0) {
      uVar13 = 0x3f800000;
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (0x18 < local_80) {
        puVar11 = (undefined4 *)CONCAT44(uStack_94,local_98);
      }
      (*pcVar4)(puVar11);
    }
    if (0x18 < local_80) {
      FUN_1400020a8(CONCAT44(uStack_94,local_98));
    }
  }
  uVar5 = FUN_14083c23d();
  lVar10 = *(longlong *)(lVar3 + 0x200);
  if (lVar10 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar10,uVar5,0x15);
  }
  local_f8 = 0;
  FUN_14083c276(lVar3,uVar5,uVar13,param_3 & 0xffffffff);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a0 * 0x120));
  if (pcVar4 != (code *)0x0) {
    if (0x18 < local_a8) {
      puVar12 = (undefined4 *)CONCAT44(uStack_bc,local_c0);
    }
    (*pcVar4)(puVar12);
  }
  if (0x18 < local_a8) {
    FUN_1400020a8(CONCAT44(uStack_bc,local_c0));
  }
  FUN_1448173f8(local_c8);
  if ((local_f0[0] == '\x03') && (local_e0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_e0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_e0 + 0x10))();
    }
  }
  lVar3 = *param_2;
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  lVar10 = (ulonglong)((uint)*(ushort *)(param_1 + 0x2c0) * 0x50) + DAT_14c9a6588;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  local_f0[0] = '\0';
  local_c8[0] = 0;
  FUN_14083c332(local_f0,param_2);
  puVar12 = &local_c0;
  FUN_1448729ea(lVar10,puVar12,local_f0);
  uVar13 = local_c0;
  if (local_a0 != 3) {
    puVar11 = &local_98;
    FUN_1400b56fe(puVar11,&local_c0,3);
    uVar13 = 0;
    if (local_78 != 0) {
      uVar13 = local_98;
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (0x18 < local_80) {
        puVar11 = (undefined4 *)CONCAT44(uStack_94,local_98);
      }
      (*pcVar4)(puVar11);
    }
    if (0x18 < local_80) {
      FUN_1400020a8(CONCAT44(uStack_94,local_98));
    }
  }
  uVar5 = FUN_14083c23d();
  lVar10 = *(longlong *)(lVar3 + 0x200);
  if (lVar10 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar10,uVar5,3);
  }
  local_f8 = 0;
  FUN_14083c276(lVar3,uVar5,uVar13,param_3 & 0xffffffff);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a0 * 0x120));
  if (pcVar4 != (code *)0x0) {
    if (0x18 < local_a8) {
      puVar12 = (undefined4 *)CONCAT44(uStack_bc,local_c0);
    }
    (*pcVar4)(puVar12);
  }
  if (0x18 < local_a8) {
    FUN_1400020a8(CONCAT44(uStack_bc,local_c0));
  }
  FUN_1448173f8(local_c8);
  if ((local_f0[0] == '\x03') && (local_e0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_e0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_e0 + 0x10))();
    }
  }
  lVar3 = *param_2;
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  lVar10 = (ulonglong)((uint)*(ushort *)(param_1 + 0x2c2) * 0x50) + DAT_14c9a6588;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  local_f0[0] = '\0';
  local_c8[0] = 0;
  FUN_14083c332(local_f0,param_2);
  puVar12 = &local_c0;
  FUN_1448729ea(lVar10,puVar12,local_f0);
  uVar13 = local_c0;
  if (local_a0 != 3) {
    puVar11 = &local_98;
    FUN_1400b56fe(puVar11,&local_c0,3);
    uVar13 = 0;
    if (local_78 != 0) {
      uVar13 = local_98;
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (0x18 < local_80) {
        puVar11 = (undefined4 *)CONCAT44(uStack_94,local_98);
      }
      (*pcVar4)(puVar11);
    }
    if (0x18 < local_80) {
      FUN_1400020a8(CONCAT44(uStack_94,local_98));
    }
  }
  uVar5 = FUN_14083c23d();
  lVar10 = *(longlong *)(lVar3 + 0x200);
  if (lVar10 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar10,uVar5,4);
  }
  local_f8 = 0;
  FUN_14083c276(lVar3,uVar5,uVar13,param_3 & 0xffffffff);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a0 * 0x120));
  if (pcVar4 != (code *)0x0) {
    if (0x18 < local_a8) {
      puVar12 = (undefined4 *)CONCAT44(uStack_bc,local_c0);
    }
    (*pcVar4)(puVar12);
  }
  if (0x18 < local_a8) {
    FUN_1400020a8(CONCAT44(uStack_bc,local_c0));
  }
  FUN_1448173f8(local_c8);
  if ((local_f0[0] == '\x03') && (local_e0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_e0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_e0 + 0x10))();
    }
  }
  lVar3 = *param_2;
  iVar2 = *(int *)(param_1 + 0xd8);
  uVar5 = FUN_14083c23d();
  lVar10 = *(longlong *)(lVar3 + 0x200);
  if (lVar10 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar10,uVar5,5);
  }
  local_f8 = 0;
  FUN_14083c276(lVar3,uVar5,(float)iVar2,param_3 & 0xffffffff);
  lVar3 = *param_2;
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  lVar10 = (ulonglong)((uint)*(ushort *)(param_1 + 0x2c4) * 0x50) + DAT_14c9a6588;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  local_f0[0] = '\0';
  local_c8[0] = 0;
  FUN_14083c332(local_f0,param_2);
  puVar12 = &local_c0;
  FUN_1448729ea(lVar10,puVar12,local_f0);
  uVar13 = local_c0;
  if (local_a0 != 3) {
    puVar11 = &local_98;
    FUN_1400b56fe(puVar11,&local_c0,3);
    uVar13 = 0;
    if (local_78 != 0) {
      uVar13 = local_98;
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (0x18 < local_80) {
        puVar11 = (undefined4 *)CONCAT44(uStack_94,local_98);
      }
      (*pcVar4)(puVar11);
    }
    if (0x18 < local_80) {
      FUN_1400020a8(CONCAT44(uStack_94,local_98));
    }
  }
  uVar5 = FUN_14083c23d();
  lVar10 = *(longlong *)(lVar3 + 0x200);
  if (lVar10 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar10,uVar5,6);
  }
  local_f8 = 0;
  FUN_14083c276(lVar3,uVar5,uVar13,param_3 & 0xffffffff);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a0 * 0x120));
  if (pcVar4 != (code *)0x0) {
    if (0x18 < local_a8) {
      puVar12 = (undefined4 *)CONCAT44(uStack_bc,local_c0);
    }
    (*pcVar4)(puVar12);
  }
  if (0x18 < local_a8) {
    FUN_1400020a8(CONCAT44(uStack_bc,local_c0));
  }
  FUN_1448173f8(local_c8);
  if ((local_f0[0] == '\x03') && (local_e0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_e0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_e0 + 0x10))();
    }
  }
  lVar3 = *param_2;
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  lVar10 = (ulonglong)((uint)*(ushort *)(param_1 + 0x2c6) * 0x50) + DAT_14c9a6588;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  local_f0[0] = '\0';
  local_c8[0] = 0;
  FUN_14083c332(local_f0,param_2);
  puVar12 = &local_c0;
  FUN_1448729ea(lVar10,puVar12,local_f0);
  uVar13 = local_c0;
  if (local_a0 != 3) {
    puVar11 = &local_98;
    FUN_1400b56fe(puVar11,&local_c0,3);
    uVar13 = 0;
    if (local_78 != 0) {
      uVar13 = local_98;
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (0x18 < local_80) {
        puVar11 = (undefined4 *)CONCAT44(uStack_94,local_98);
      }
      (*pcVar4)(puVar11);
    }
    if (0x18 < local_80) {
      FUN_1400020a8(CONCAT44(uStack_94,local_98));
    }
  }
  uVar5 = FUN_14083c23d();
  lVar10 = *(longlong *)(lVar3 + 0x200);
  if (lVar10 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar10,uVar5,7);
  }
  local_f8 = 0;
  FUN_14083c276(lVar3,uVar5,uVar13,param_3 & 0xffffffff);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a0 * 0x120));
  if (pcVar4 != (code *)0x0) {
    if (0x18 < local_a8) {
      puVar12 = (undefined4 *)CONCAT44(uStack_bc,local_c0);
    }
    (*pcVar4)(puVar12);
  }
  if (0x18 < local_a8) {
    FUN_1400020a8(CONCAT44(uStack_bc,local_c0));
  }
  FUN_1448173f8(local_c8);
  if ((local_f0[0] == '\x03') && (local_e0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_e0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_e0 + 0x10))();
    }
  }
  lVar3 = *param_2;
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  lVar10 = (ulonglong)((uint)*(ushort *)(param_1 + 0x2c8) * 0x50) + DAT_14c9a6588;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  local_f0[0] = '\0';
  local_c8[0] = 0;
  FUN_14083c332(local_f0,param_2);
  puVar12 = &local_c0;
  FUN_1448729ea(lVar10,puVar12,local_f0);
  uVar13 = local_c0;
  if (local_a0 != 3) {
    puVar11 = &local_98;
    FUN_1400b56fe(puVar11,&local_c0,3);
    uVar13 = 0;
    if (local_78 != 0) {
      uVar13 = local_98;
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (0x18 < local_80) {
        puVar11 = (undefined4 *)CONCAT44(uStack_94,local_98);
      }
      (*pcVar4)(puVar11);
    }
    if (0x18 < local_80) {
      FUN_1400020a8(CONCAT44(uStack_94,local_98));
    }
  }
  uVar5 = FUN_14083c23d();
  lVar10 = *(longlong *)(lVar3 + 0x200);
  if (lVar10 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar10,uVar5,8);
  }
  local_f8 = 0;
  FUN_14083c276(lVar3,uVar5,uVar13,param_3 & 0xffffffff);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a0 * 0x120));
  if (pcVar4 != (code *)0x0) {
    if (0x18 < local_a8) {
      puVar12 = (undefined4 *)CONCAT44(uStack_bc,local_c0);
    }
    (*pcVar4)(puVar12);
  }
  if (0x18 < local_a8) {
    FUN_1400020a8(CONCAT44(uStack_bc,local_c0));
  }
  FUN_1448173f8(local_c8);
  if ((local_f0[0] == '\x03') && (local_e0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_e0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_e0 + 0x10))();
    }
  }
  lVar3 = *param_2;
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  lVar10 = (ulonglong)((uint)*(ushort *)(param_1 + 0x2ca) * 0x50) + DAT_14c9a6588;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  local_f0[0] = '\0';
  local_c8[0] = 0;
  FUN_14083c332(local_f0,param_2);
  puVar12 = &local_c0;
  FUN_1448729ea(lVar10,puVar12,local_f0);
  uVar13 = local_c0;
  if (local_a0 != 3) {
    puVar11 = &local_98;
    FUN_1400b56fe(puVar11,&local_c0,3);
    uVar13 = 0;
    if (local_78 != 0) {
      uVar13 = local_98;
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (0x18 < local_80) {
        puVar11 = (undefined4 *)CONCAT44(uStack_94,local_98);
      }
      (*pcVar4)(puVar11);
    }
    if (0x18 < local_80) {
      FUN_1400020a8(CONCAT44(uStack_94,local_98));
    }
  }
  uVar5 = FUN_14083c23d();
  lVar10 = *(longlong *)(lVar3 + 0x200);
  if (lVar10 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar10,uVar5,9);
  }
  local_f8 = 0;
  FUN_14083c276(lVar3,uVar5,uVar13,param_3 & 0xffffffff);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a0 * 0x120));
  if (pcVar4 != (code *)0x0) {
    if (0x18 < local_a8) {
      puVar12 = (undefined4 *)CONCAT44(uStack_bc,local_c0);
    }
    (*pcVar4)(puVar12);
  }
  if (0x18 < local_a8) {
    FUN_1400020a8(CONCAT44(uStack_bc,local_c0));
  }
  FUN_1448173f8(local_c8);
  if ((local_f0[0] == '\x03') && (local_e0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_e0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_e0 + 0x10))();
    }
  }
  lVar3 = *param_2;
  uVar13 = *(undefined4 *)(param_1 + 0xe0);
  uVar5 = FUN_14083c23d();
  lVar10 = *(longlong *)(lVar3 + 0x200);
  if (lVar10 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar10,uVar5,10);
  }
  local_f8 = 0;
  FUN_14083c276(lVar3,uVar5,uVar13,param_3 & 0xffffffff);
  lVar3 = *param_2;
  uVar13 = *(undefined4 *)(param_1 + 0xa8);
  uVar5 = FUN_14083c23d();
  lVar10 = *(longlong *)(lVar3 + 0x200);
  if (lVar10 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar10,uVar5,0x14);
  }
  local_f8 = 0;
  FUN_14083c276(lVar3,uVar5,uVar13,param_3 & 0xffffffff);
  lVar3 = *param_2;
  uVar5 = FUN_14083c23d();
  lVar10 = *(longlong *)(lVar3 + 0x200);
  if (lVar10 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar10,uVar5,0xb);
  }
  local_f8 = 0;
  FUN_14083c276(lVar3,uVar5,0x3f800000,param_3 & 0xffffffff);
  lVar3 = *param_2;
  uVar5 = FUN_14083c23d();
  lVar10 = *(longlong *)(lVar3 + 0x200);
  if (lVar10 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar10,uVar5,0xc);
  }
  uVar6 = 0;
  local_f8 = 0;
  FUN_14083c276(lVar3,uVar5,0x3f800000,param_3 & 0xffffffff);
  lVar3 = *param_2;
  local_f0[0] = '\0';
  local_c8[0] = 0;
  uVar13 = FUN_140a8b8c6(param_1 + 0x178,local_f0);
  uVar5 = FUN_14083c23d();
  lVar10 = *(longlong *)(lVar3 + 0x200);
  if (lVar10 != 0) {
    uVar6 = FUN_1403f69f4(lVar10,uVar5,0xd);
  }
  local_f8 = 0;
  FUN_14083c276(lVar3,uVar6,uVar13,param_3 & 0xffffffff);
  FUN_1448173f8(local_c8);
  if ((local_f0[0] == '\x03') && (local_e0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_e0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_e0 + 0x10))();
    }
  }
  lVar3 = *param_2;
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  lVar10 = (ulonglong)((uint)*(ushort *)(param_1 + 0x2cc) * 0x50) + DAT_14c9a6588;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  local_f0[0] = '\0';
  local_c8[0] = 0;
  FUN_14083c332(local_f0,param_2);
  puVar12 = &local_c0;
  FUN_1448729ea(lVar10,puVar12,local_f0);
  uVar13 = local_c0;
  if (local_a0 != 3) {
    puVar11 = &local_98;
    FUN_1400b56fe(puVar11,&local_c0,3);
    uVar13 = 0x3f800000;
    if (local_78 != 0) {
      uVar13 = local_98;
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (0x18 < local_80) {
        puVar11 = (undefined4 *)CONCAT44(uStack_94,local_98);
      }
      (*pcVar4)(puVar11);
    }
    if (0x18 < local_80) {
      FUN_1400020a8(CONCAT44(uStack_94,local_98));
    }
  }
  uVar5 = FUN_14083c23d();
  lVar10 = *(longlong *)(lVar3 + 0x200);
  if (lVar10 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar10,uVar5,0x16);
  }
  local_f8 = 0;
  FUN_14083c276(lVar3,uVar5,uVar13,param_3 & 0xffffffff);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a0 * 0x120));
  if (pcVar4 != (code *)0x0) {
    if (0x18 < local_a8) {
      puVar12 = (undefined4 *)CONCAT44(uStack_bc,local_c0);
    }
    (*pcVar4)(puVar12);
  }
  if (0x18 < local_a8) {
    FUN_1400020a8(CONCAT44(uStack_bc,local_c0));
  }
  FUN_1448173f8(local_c8);
  if ((local_f0[0] == '\x03') && (local_e0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_e0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_e0 + 0x10))();
    }
  }
  lVar3 = *param_2;
  local_f0[0] = '\0';
  local_c8[0] = 0;
  local_98 = *(undefined4 *)(param_1 + 0x1a8);
  uVar5 = FUN_140430f72();
  FUN_140431068(uVar5,*(undefined8 *)(param_1 + 0x1ac),&local_98);
  uVar13 = local_98;
  uVar5 = FUN_14083c23d();
  lVar10 = *(longlong *)(lVar3 + 0x200);
  if (lVar10 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar10,uVar5,0xe);
  }
  local_f8 = 0;
  FUN_14083c276(lVar3,uVar5,uVar13,param_3 & 0xffffffff);
  FUN_1448173f8(local_c8);
  if ((local_f0[0] == '\x03') && (local_e0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_e0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_e0 + 0x10))();
    }
  }
  lVar3 = *param_2;
  local_f0[0] = '\0';
  local_c8[0] = 0;
  local_98 = *(undefined4 *)(param_1 + 0x1b4);
  uVar5 = FUN_140430f72();
  FUN_1405506f4(uVar5,*(undefined8 *)(param_1 + 0x1b8),&local_98);
  uVar13 = local_98;
  uVar5 = FUN_14083c23d();
  lVar10 = *(longlong *)(lVar3 + 0x200);
  if (lVar10 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar10,uVar5,0xf);
  }
  local_f8 = 0;
  FUN_14083c276(lVar3,uVar5,uVar13,param_3 & 0xffffffff);
  FUN_1448173f8(local_c8);
  if ((local_f0[0] == '\x03') && (local_e0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_e0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_e0 + 0x10))();
    }
  }
  lVar3 = *param_2;
  cVar9 = *(char *)(param_1 + 0x2b2);
  uVar5 = FUN_14083c23d();
  lVar10 = *(longlong *)(lVar3 + 0x200);
  if (lVar10 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar10,uVar5,0x10);
  }
  local_f8 = 0;
  FUN_14083c276(lVar3,uVar5,(float)(int)cVar9,param_3 & 0xffffffff);
  lVar3 = *param_2;
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  lVar10 = (ulonglong)((uint)*(ushort *)(param_1 + 0x2d0) * 0x50) + DAT_14c9a6588;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  local_f0[0] = '\0';
  local_c8[0] = 0;
  FUN_14083c332(local_f0,param_2);
  puVar12 = &local_c0;
  FUN_1448729ea(lVar10,puVar12,local_f0);
  uVar13 = local_c0;
  if (local_a0 != 3) {
    puVar11 = &local_98;
    FUN_1400b56fe(puVar11,&local_c0,3);
    uVar13 = 0;
    if (local_78 != 0) {
      uVar13 = local_98;
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (0x18 < local_80) {
        puVar11 = (undefined4 *)CONCAT44(uStack_94,local_98);
      }
      (*pcVar4)(puVar11);
    }
    if (0x18 < local_80) {
      FUN_1400020a8(CONCAT44(uStack_94,local_98));
    }
  }
  uVar5 = FUN_14083c23d();
  lVar10 = *(longlong *)(lVar3 + 0x200);
  if (lVar10 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar10,uVar5,0x11);
  }
  local_f8 = 0;
  FUN_14083c276(lVar3,uVar5,uVar13,param_3 & 0xffffffff);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a0 * 0x120));
  if (pcVar4 != (code *)0x0) {
    if (0x18 < local_a8) {
      puVar12 = (undefined4 *)CONCAT44(uStack_bc,local_c0);
    }
    (*pcVar4)(puVar12);
  }
  if (0x18 < local_a8) {
    FUN_1400020a8(CONCAT44(uStack_bc,local_c0));
  }
  FUN_1448173f8(local_c8);
  if ((local_f0[0] == '\x03') && (local_e0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_e0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_e0 + 0x10))();
    }
  }
  lVar3 = *param_2;
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  lVar10 = (ulonglong)((uint)*(ushort *)(param_1 + 0x2d2) * 0x50) + DAT_14c9a6588;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  local_f0[0] = '\0';
  local_c8[0] = 0;
  FUN_14083c332(local_f0,param_2);
  puVar12 = &local_c0;
  FUN_1448729ea(lVar10,puVar12,local_f0);
  uVar13 = local_c0;
  if (local_a0 != 3) {
    puVar11 = &local_98;
    FUN_1400b56fe(puVar11,&local_c0,3);
    uVar13 = local_98;
    if (local_78 == 0) {
      uVar13 = 0x3f800000;
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (0x18 < local_80) {
        puVar11 = (undefined4 *)CONCAT44(uStack_94,local_98);
      }
      (*pcVar4)(puVar11);
    }
    if (0x18 < local_80) {
      FUN_1400020a8(CONCAT44(uStack_94,local_98));
    }
  }
  uVar5 = FUN_14083c23d();
  lVar10 = *(longlong *)(lVar3 + 0x200);
  if (lVar10 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar10,uVar5,0x12);
  }
  local_f8 = 0;
  FUN_14083c276(lVar3,uVar5,uVar13,param_3 & 0xffffffff);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a0 * 0x120));
  if (pcVar4 != (code *)0x0) {
    if (0x18 < local_a8) {
      puVar12 = (undefined4 *)CONCAT44(uStack_bc,local_c0);
    }
    (*pcVar4)(puVar12);
  }
  if (0x18 < local_a8) {
    FUN_1400020a8(CONCAT44(uStack_bc,local_c0));
  }
  FUN_1448173f8(local_c8);
  if ((local_f0[0] == '\x03') && (local_e0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_e0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_e0 + 0x10))();
    }
  }
  lVar3 = *param_2;
  uVar5 = FUN_14083c23d();
  lVar10 = *(longlong *)(lVar3 + 0x200);
  if (lVar10 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar10,uVar5,0x13);
  }
  local_f8 = 0;
  FUN_14083c276(lVar3,uVar5,0x3f800000,param_3 & 0xffffffff);
  if ((char)uVar8 != '\0') {
    cVar9 = '\0';
    do {
      bVar7 = (byte)uVar8;
      if ((uVar8 & 1) != 0) {
        lVar3 = *param_2;
        uVar5 = FUN_1405faa04(param_1 + 0xe8);
        FUN_14083c3be(lVar3,uVar5,cVar9,0);
      }
      cVar9 = cVar9 + '\x01';
      uVar8 = (ulonglong)((uint)(uVar8 >> 1) & 0x7f);
    } while (1 < bVar7);
  }
  if ((local_70 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14083c23d FUN_14083c23d body=57 status=ok
// SIG undefined FUN_14083c23d(void)

void FUN_14083c23d(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb93ca8 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb93ca8 = FUN_14171c317(FUN_146574022,uVar1,L"EAtt_WeaponBehaviorFire");
  }
  return;
}



// FUNCTION 14083c276 FUN_14083c276 body=187 status=ok
// SIG undefined FUN_14083c276(void)

void FUN_14083c276(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined1 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  
  iVar1 = *(int *)(param_1 + 0x298);
  *(uint *)(param_1 + 0x298) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x29c) < iVar1 + 1U) {
    FUN_14083c412(param_1 + 0x290,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x290);
  puVar4 = (undefined8 *)((longlong)iVar1 * 0x20 + lVar2);
  *puVar4 = param_2;
  puVar4[1] = 0;
  *(undefined1 *)((longlong)puVar4 + 0x15) = 1;
  *(undefined4 *)(puVar4 + 3) = param_4;
  *(undefined4 *)(puVar4 + 2) = param_3;
  FUN_14020a6cc(puVar4 + 1,1);
  *(undefined1 *)((longlong)puVar4 + 0x15) = param_5;
  if (*(longlong *)(param_1 + 0x2d8) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_144a3ced2(*(longlong *)(param_1 + 0x2d8),param_2);
  }
  *(undefined1 *)(lVar2 + (longlong)iVar1 * 0x20 + 0x14) = uVar3;
  return;
}



// FUNCTION 14083c332 FUN_14083c332 body=140 status=ok
// SIG undefined FUN_14083c332(void)

void FUN_14083c332(char *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*param_1 == '\x03') {
    plVar3 = *(longlong **)(param_1 + 0x10);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
  }
  else if (*param_1 == '\x01') {
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
  }
  *param_1 = '\x03';
  *(undefined8 *)(param_1 + 8) = *param_2;
  lVar2 = param_2[1];
  *(longlong *)(param_1 + 0x10) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  param_1[0x20] = '\0';
  param_1[0x18] = '\0';
  param_1[0x19] = '\0';
  param_1[0x1a] = '\0';
  param_1[0x1b] = '\0';
  param_1[0x1c] = '\0';
  param_1[0x1d] = '\0';
  param_1[0x1e] = '\0';
  param_1[0x1f] = '\0';
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_1417398fc(&DAT_14c9a3da0,*(int *)(param_1 + 0x28) + -1,1);
    param_1[0x28] = '\0';
    param_1[0x29] = '\0';
    param_1[0x2a] = '\0';
    param_1[0x2b] = '\0';
  }
  return;
}



// FUNCTION 14083c3be FUN_14083c3be body=84 status=ok
// SIG undefined FUN_14083c3be(void)

void FUN_14083c3be(longlong param_1,longlong param_2,byte param_3,undefined1 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_2 != 0) && ((int)(uint)param_3 < *(int *)(param_1 + 0x280))) {
    lVar1 = *(longlong *)(param_1 + 0x278);
    if (*(longlong *)(param_1 + 0x278) == 0) {
      lVar1 = param_1 + 0x208;
    }
    lVar2 = (ulonglong)param_3 * 0x38;
    if ((*(char *)(lVar1 + lVar2) == '\x01') && (*(char *)(lVar1 + lVar2 + 0x30) != '\x01')) {
      *(longlong *)(lVar1 + lVar2 + 0x28) = param_2;
      lVar1 = param_1 + 0x208;
      if (*(longlong *)(param_1 + 0x278) != 0) {
        lVar1 = *(longlong *)(param_1 + 0x278);
      }
      *(undefined1 *)(lVar1 + 0x30 + lVar2) = param_4;
    }
  }
  return;
}



// FUNCTION 14083c412 FUN_14083c412 body=255 status=ok
// SIG undefined FUN_14083c412(void)

void FUN_14083c412(longlong param_1,int param_2)

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
      uVar3 = (ulonglong)(int)uVar2;
    }
    else {
      uVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = uVar3 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x7ffffffffffffff) * 2]];
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
    if ((int)uVar1 <= (int)(uVar4 >> 5)) {
      uVar3 = uVar4 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14083c512 FUN_14083c512 body=7666 status=ok
// SIG undefined FUN_14083c512(void)

void FUN_14083c512(longlong param_1,longlong *param_2,undefined4 param_3)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  byte bVar4;
  undefined8 uVar5;
  int iVar6;
  undefined *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  undefined4 uVar13;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  char local_e0 [16];
  longlong *local_d0;
  int local_b8 [2];
  undefined4 local_b0;
  undefined4 uStack_ac;
  ushort local_98;
  byte local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar2 = *param_2;
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  lVar10 = (ulonglong)((uint)*(ushort *)(param_1 + 0x34) * 0x50) + DAT_14c9a6588;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  local_e0[0] = '\0';
  local_b8[0] = 0;
  FUN_14083c332(local_e0,param_2);
  puVar9 = &local_b0;
  FUN_1448729ea(lVar10,puVar9,local_e0);
  uVar13 = local_b0;
  if (local_90 != 3) {
    puVar8 = &local_88;
    FUN_1400b56fe(puVar8,&local_b0,3);
    uVar13 = local_88;
    if (local_68 == 0) {
      uVar13 = 0x3f800000;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_70) {
        puVar8 = (undefined4 *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar3)(puVar8);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  uVar5 = FUN_14083e305();
  lVar10 = *(longlong *)(lVar2 + 0x200);
  if (lVar10 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar10,uVar5,0);
  }
  local_e8 = 0;
  FUN_14083c276(lVar2,uVar5,uVar13,param_3);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_98) {
      puVar9 = (undefined4 *)CONCAT44(uStack_ac,local_b0);
    }
    (*pcVar3)(puVar9);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
  }
  lVar2 = DAT_14c9a3da0;
  if ((longlong)local_b8[0] != 0) {
    lVar10 = (longlong)local_b8[0] + -1;
    lVar12 = lVar10 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar12),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar12));
    if (*(longlong *)(lVar2 + lVar12) != 0) {
      FUN_1400020a8();
    }
    lVar2 = DAT_14c9a3da0;
    iVar11 = (int)lVar10;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar11;
    }
    *(undefined4 *)(lVar2 + lVar12) = 0xffffffff;
    iVar6 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar6 = DAT_14c9a3dd0;
    }
    *(int *)(lVar2 + 4 + lVar12) = iVar6;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar7 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar7 = DAT_14c9a3dc0;
    }
    iVar6 = iVar11 + 0x1f;
    if (-1 < iVar11) {
      iVar6 = iVar11;
    }
    bVar4 = (byte)lVar10 & 0x1f;
    DAT_14c9a3dd0 = iVar11;
    *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) =
         *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) &
         (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
    local_b8[0] = 0;
  }
  if ((local_e0[0] == '\x03') && (local_d0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_d0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_d0 + 0x10))();
    }
  }
  lVar2 = *param_2;
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  lVar10 = (ulonglong)((uint)*(ushort *)(param_1 + 0x38) * 0x50) + DAT_14c9a6588;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  local_e0[0] = '\0';
  local_b8[0] = 0;
  FUN_14083c332(local_e0,param_2);
  puVar9 = &local_b0;
  FUN_1448729ea(lVar10,puVar9,local_e0);
  uVar13 = local_b0;
  if (local_90 != 3) {
    puVar8 = &local_88;
    FUN_1400b56fe(puVar8,&local_b0,3);
    uVar13 = local_88;
    if (local_68 == 0) {
      uVar13 = 0x44fa0000;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_70) {
        puVar8 = (undefined4 *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar3)(puVar8);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  uVar5 = FUN_14083e305();
  lVar10 = *(longlong *)(lVar2 + 0x200);
  if (lVar10 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar10,uVar5,5);
  }
  local_e8 = 0;
  FUN_14083c276(lVar2,uVar5,uVar13,param_3);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_98) {
      puVar9 = (undefined4 *)CONCAT44(uStack_ac,local_b0);
    }
    (*pcVar3)(puVar9);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
  }
  lVar2 = DAT_14c9a3da0;
  if ((longlong)local_b8[0] != 0) {
    lVar10 = (longlong)local_b8[0] + -1;
    lVar12 = lVar10 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar12),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar12));
    if (*(longlong *)(lVar2 + lVar12) != 0) {
      FUN_1400020a8();
    }
    lVar2 = DAT_14c9a3da0;
    iVar11 = (int)lVar10;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar11;
    }
    *(undefined4 *)(lVar2 + lVar12) = 0xffffffff;
    iVar6 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar6 = DAT_14c9a3dd0;
    }
    *(int *)(lVar2 + 4 + lVar12) = iVar6;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar7 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar7 = DAT_14c9a3dc0;
    }
    iVar6 = iVar11 + 0x1f;
    if (-1 < iVar11) {
      iVar6 = iVar11;
    }
    bVar4 = (byte)lVar10 & 0x1f;
    DAT_14c9a3dd0 = iVar11;
    *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) =
         *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) &
         (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
    local_b8[0] = 0;
  }
  if ((local_e0[0] == '\x03') && (local_d0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_d0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_d0 + 0x10))();
    }
  }
  lVar2 = *param_2;
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  lVar10 = (ulonglong)((uint)*(ushort *)(param_1 + 0x36) * 0x50) + DAT_14c9a6588;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  local_e0[0] = '\0';
  local_b8[0] = 0;
  FUN_14083c332(local_e0,param_2);
  puVar9 = &local_b0;
  FUN_1448729ea(lVar10,puVar9,local_e0);
  uVar13 = local_b0;
  if (local_90 != 3) {
    puVar8 = &local_88;
    FUN_1400b56fe(puVar8,&local_b0,3);
    uVar13 = local_88;
    if (local_68 == 0) {
      uVar13 = 0x44fa0000;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_70) {
        puVar8 = (undefined4 *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar3)(puVar8);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  uVar5 = FUN_14083e305();
  lVar10 = *(longlong *)(lVar2 + 0x200);
  if (lVar10 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar10,uVar5,6);
  }
  local_e8 = 0;
  FUN_14083c276(lVar2,uVar5,uVar13,param_3);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_98) {
      puVar9 = (undefined4 *)CONCAT44(uStack_ac,local_b0);
    }
    (*pcVar3)(puVar9);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
  }
  lVar2 = DAT_14c9a3da0;
  if ((longlong)local_b8[0] != 0) {
    lVar10 = (longlong)local_b8[0] + -1;
    lVar12 = lVar10 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar12),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar12));
    if (*(longlong *)(lVar2 + lVar12) != 0) {
      FUN_1400020a8();
    }
    lVar2 = DAT_14c9a3da0;
    iVar11 = (int)lVar10;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar11;
    }
    *(undefined4 *)(lVar2 + lVar12) = 0xffffffff;
    iVar6 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar6 = DAT_14c9a3dd0;
    }
    *(int *)(lVar2 + 4 + lVar12) = iVar6;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar7 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar7 = DAT_14c9a3dc0;
    }
    iVar6 = iVar11 + 0x1f;
    if (-1 < iVar11) {
      iVar6 = iVar11;
    }
    bVar4 = (byte)lVar10 & 0x1f;
    DAT_14c9a3dd0 = iVar11;
    *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) =
         *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) &
         (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
    local_b8[0] = 0;
  }
  if ((local_e0[0] == '\x03') && (local_d0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_d0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_d0 + 0x10))();
    }
  }
  lVar2 = *param_2;
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  lVar10 = (ulonglong)((uint)*(ushort *)(param_1 + 0x3a) * 0x50) + DAT_14c9a6588;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  local_e0[0] = '\0';
  local_b8[0] = 0;
  FUN_14083c332(local_e0,param_2);
  puVar9 = &local_b0;
  FUN_1448729ea(lVar10,puVar9,local_e0);
  uVar13 = local_b0;
  if (local_90 != 3) {
    puVar8 = &local_88;
    FUN_1400b56fe(puVar8,&local_b0,3);
    uVar13 = local_88;
    if (local_68 == 0) {
      uVar13 = 0x44fa0000;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_70) {
        puVar8 = (undefined4 *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar3)(puVar8);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  uVar5 = FUN_14083e305();
  lVar10 = *(longlong *)(lVar2 + 0x200);
  if (lVar10 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar10,uVar5,7);
  }
  local_e8 = 0;
  FUN_14083c276(lVar2,uVar5,uVar13,param_3);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_98) {
      puVar9 = (undefined4 *)CONCAT44(uStack_ac,local_b0);
    }
    (*pcVar3)(puVar9);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
  }
  lVar2 = DAT_14c9a3da0;
  if ((longlong)local_b8[0] != 0) {
    lVar10 = (longlong)local_b8[0] + -1;
    lVar12 = lVar10 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar12),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar12));
    if (*(longlong *)(lVar2 + lVar12) != 0) {
      FUN_1400020a8();
    }
    lVar2 = DAT_14c9a3da0;
    iVar11 = (int)lVar10;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar11;
    }
    *(undefined4 *)(lVar2 + lVar12) = 0xffffffff;
    iVar6 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar6 = DAT_14c9a3dd0;
    }
    *(int *)(lVar2 + 4 + lVar12) = iVar6;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar7 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar7 = DAT_14c9a3dc0;
    }
    iVar6 = iVar11 + 0x1f;
    if (-1 < iVar11) {
      iVar6 = iVar11;
    }
    bVar4 = (byte)lVar10 & 0x1f;
    DAT_14c9a3dd0 = iVar11;
    *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) =
         *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) &
         (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
    local_b8[0] = 0;
  }
  if ((local_e0[0] == '\x03') && (local_d0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_d0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_d0 + 0x10))();
    }
  }
  lVar2 = *param_2;
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  lVar10 = (ulonglong)((uint)*(ushort *)(param_1 + 0x3c) * 0x50) + DAT_14c9a6588;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  local_e0[0] = '\0';
  local_b8[0] = 0;
  FUN_14083c332(local_e0,param_2);
  puVar9 = &local_b0;
  FUN_1448729ea(lVar10,puVar9,local_e0);
  uVar13 = local_b0;
  if (local_90 != 3) {
    puVar8 = &local_88;
    FUN_1400b56fe(puVar8,&local_b0,3);
    uVar13 = local_88;
    if (local_68 == 0) {
      uVar13 = 0x3f800000;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_70) {
        puVar8 = (undefined4 *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar3)(puVar8);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  uVar5 = FUN_14083e305();
  lVar10 = *(longlong *)(lVar2 + 0x200);
  if (lVar10 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar10,uVar5,2);
  }
  local_e8 = 0;
  FUN_14083c276(lVar2,uVar5,uVar13,param_3);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_98) {
      puVar9 = (undefined4 *)CONCAT44(uStack_ac,local_b0);
    }
    (*pcVar3)(puVar9);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
  }
  lVar2 = DAT_14c9a3da0;
  if ((longlong)local_b8[0] != 0) {
    lVar10 = (longlong)local_b8[0] + -1;
    lVar12 = lVar10 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar12),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar12));
    if (*(longlong *)(lVar2 + lVar12) != 0) {
      FUN_1400020a8();
    }
    lVar2 = DAT_14c9a3da0;
    iVar11 = (int)lVar10;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar11;
    }
    *(undefined4 *)(lVar2 + lVar12) = 0xffffffff;
    iVar6 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar6 = DAT_14c9a3dd0;
    }
    *(int *)(lVar2 + 4 + lVar12) = iVar6;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar7 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar7 = DAT_14c9a3dc0;
    }
    iVar6 = iVar11 + 0x1f;
    if (-1 < iVar11) {
      iVar6 = iVar11;
    }
    bVar4 = (byte)lVar10 & 0x1f;
    DAT_14c9a3dd0 = iVar11;
    *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) =
         *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) &
         (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
    local_b8[0] = 0;
  }
  if ((local_e0[0] == '\x03') && (local_d0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_d0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_d0 + 0x10))();
    }
  }
  lVar2 = *param_2;
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  lVar10 = (ulonglong)((uint)*(ushort *)(param_1 + 0x3e) * 0x50) + DAT_14c9a6588;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  local_e0[0] = '\0';
  local_b8[0] = 0;
  FUN_14083c332(local_e0,param_2);
  puVar9 = &local_b0;
  FUN_1448729ea(lVar10,puVar9,local_e0);
  uVar13 = local_b0;
  if (local_90 != 3) {
    puVar8 = &local_88;
    FUN_1400b56fe(puVar8,&local_b0,3);
    uVar13 = local_88;
    if (local_68 == 0) {
      uVar13 = 0x3f000000;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_70) {
        puVar8 = (undefined4 *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar3)(puVar8);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  uVar5 = FUN_14083e305();
  lVar10 = *(longlong *)(lVar2 + 0x200);
  if (lVar10 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar10,uVar5,3);
  }
  local_e8 = 0;
  FUN_14083c276(lVar2,uVar5,uVar13,param_3);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_98) {
      puVar9 = (undefined4 *)CONCAT44(uStack_ac,local_b0);
    }
    (*pcVar3)(puVar9);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
  }
  lVar2 = DAT_14c9a3da0;
  if ((longlong)local_b8[0] != 0) {
    lVar10 = (longlong)local_b8[0] + -1;
    lVar12 = lVar10 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar12),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar12));
    if (*(longlong *)(lVar2 + lVar12) != 0) {
      FUN_1400020a8();
    }
    lVar2 = DAT_14c9a3da0;
    iVar11 = (int)lVar10;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar11;
    }
    *(undefined4 *)(lVar2 + lVar12) = 0xffffffff;
    iVar6 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar6 = DAT_14c9a3dd0;
    }
    *(int *)(lVar2 + 4 + lVar12) = iVar6;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar7 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar7 = DAT_14c9a3dc0;
    }
    iVar6 = iVar11 + 0x1f;
    if (-1 < iVar11) {
      iVar6 = iVar11;
    }
    bVar4 = (byte)lVar10 & 0x1f;
    DAT_14c9a3dd0 = iVar11;
    *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) =
         *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) &
         (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
    local_b8[0] = 0;
  }
  if ((local_e0[0] == '\x03') && (local_d0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_d0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_d0 + 0x10))();
    }
  }
  lVar2 = *param_2;
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  lVar10 = (ulonglong)((uint)*(ushort *)(param_1 + 0x40) * 0x50) + DAT_14c9a6588;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  local_e0[0] = '\0';
  local_b8[0] = 0;
  FUN_14083c332(local_e0,param_2);
  puVar9 = &local_b0;
  FUN_1448729ea(lVar10,puVar9,local_e0);
  uVar13 = local_b0;
  if (local_90 != 3) {
    puVar8 = &local_88;
    FUN_1400b56fe(puVar8,&local_b0,3);
    uVar13 = local_88;
    if (local_68 == 0) {
      uVar13 = 0x3f800000;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_70) {
        puVar8 = (undefined4 *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar3)(puVar8);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  uVar5 = FUN_14083e305();
  lVar10 = *(longlong *)(lVar2 + 0x200);
  if (lVar10 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar10,uVar5,8);
  }
  local_e8 = 0;
  FUN_14083c276(lVar2,uVar5,uVar13,param_3);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_98) {
      puVar9 = (undefined4 *)CONCAT44(uStack_ac,local_b0);
    }
    (*pcVar3)(puVar9);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
  }
  lVar2 = DAT_14c9a3da0;
  if ((longlong)local_b8[0] != 0) {
    lVar10 = (longlong)local_b8[0] + -1;
    lVar12 = lVar10 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar12),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar12));
    if (*(longlong *)(lVar2 + lVar12) != 0) {
      FUN_1400020a8();
    }
    lVar2 = DAT_14c9a3da0;
    iVar11 = (int)lVar10;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar11;
    }
    *(undefined4 *)(lVar2 + lVar12) = 0xffffffff;
    iVar6 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar6 = DAT_14c9a3dd0;
    }
    *(int *)(lVar2 + 4 + lVar12) = iVar6;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar7 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar7 = DAT_14c9a3dc0;
    }
    iVar6 = iVar11 + 0x1f;
    if (-1 < iVar11) {
      iVar6 = iVar11;
    }
    bVar4 = (byte)lVar10 & 0x1f;
    DAT_14c9a3dd0 = iVar11;
    *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) =
         *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) &
         (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
    local_b8[0] = 0;
  }
  if ((local_e0[0] == '\x03') && (local_d0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_d0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_d0 + 0x10))();
    }
  }
  lVar2 = *param_2;
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  lVar10 = (ulonglong)((uint)*(ushort *)(param_1 + 0x42) * 0x50) + DAT_14c9a6588;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  local_e0[0] = '\0';
  local_b8[0] = 0;
  FUN_14083c332(local_e0,param_2);
  puVar9 = &local_b0;
  FUN_1448729ea(lVar10,puVar9,local_e0);
  uVar13 = local_b0;
  if (local_90 != 3) {
    puVar8 = &local_88;
    FUN_1400b56fe(puVar8,&local_b0,3);
    uVar13 = local_88;
    if (local_68 == 0) {
      uVar13 = 0x3f800000;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_70) {
        puVar8 = (undefined4 *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar3)(puVar8);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  uVar5 = FUN_14083e305();
  lVar10 = *(longlong *)(lVar2 + 0x200);
  if (lVar10 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar10,uVar5,9);
  }
  local_e8 = 0;
  FUN_14083c276(lVar2,uVar5,uVar13,param_3);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_98) {
      puVar9 = (undefined4 *)CONCAT44(uStack_ac,local_b0);
    }
    (*pcVar3)(puVar9);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
  }
  lVar2 = DAT_14c9a3da0;
  if ((longlong)local_b8[0] != 0) {
    lVar10 = (longlong)local_b8[0] + -1;
    lVar12 = lVar10 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar12),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar12));
    if (*(longlong *)(lVar2 + lVar12) != 0) {
      FUN_1400020a8();
    }
    lVar2 = DAT_14c9a3da0;
    iVar11 = (int)lVar10;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar11;
    }
    *(undefined4 *)(lVar2 + lVar12) = 0xffffffff;
    iVar6 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar6 = DAT_14c9a3dd0;
    }
    *(int *)(lVar2 + 4 + lVar12) = iVar6;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar7 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar7 = DAT_14c9a3dc0;
    }
    iVar6 = iVar11 + 0x1f;
    if (-1 < iVar11) {
      iVar6 = iVar11;
    }
    bVar4 = (byte)lVar10 & 0x1f;
    DAT_14c9a3dd0 = iVar11;
    *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) =
         *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) &
         (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
    local_b8[0] = 0;
  }
  if ((local_e0[0] == '\x03') && (local_d0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_d0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_d0 + 0x10))();
    }
  }
  lVar2 = *param_2;
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  lVar10 = (ulonglong)((uint)*(ushort *)(param_1 + 0x44) * 0x50) + DAT_14c9a6588;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  local_e0[0] = '\0';
  local_b8[0] = 0;
  FUN_14083c332(local_e0,param_2);
  puVar9 = &local_b0;
  FUN_1448729ea(lVar10,puVar9,local_e0);
  uVar13 = local_b0;
  if (local_90 != 3) {
    puVar8 = &local_88;
    FUN_1400b56fe(puVar8,&local_b0,3);
    uVar13 = local_88;
    if (local_68 == 0) {
      uVar13 = 0x3f800000;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_70) {
        puVar8 = (undefined4 *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar3)(puVar8);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  uVar5 = FUN_14083e305();
  lVar10 = *(longlong *)(lVar2 + 0x200);
  if (lVar10 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar10,uVar5,10);
  }
  local_e8 = 0;
  FUN_14083c276(lVar2,uVar5,uVar13,param_3);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_98) {
      puVar9 = (undefined4 *)CONCAT44(uStack_ac,local_b0);
    }
    (*pcVar3)(puVar9);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
  }
  lVar2 = DAT_14c9a3da0;
  if ((longlong)local_b8[0] != 0) {
    lVar10 = (longlong)local_b8[0] + -1;
    lVar12 = lVar10 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar12),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar12));
    if (*(longlong *)(lVar2 + lVar12) != 0) {
      FUN_1400020a8();
    }
    lVar2 = DAT_14c9a3da0;
    iVar11 = (int)lVar10;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar11;
    }
    *(undefined4 *)(lVar2 + lVar12) = 0xffffffff;
    iVar6 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar6 = DAT_14c9a3dd0;
    }
    *(int *)(lVar2 + 4 + lVar12) = iVar6;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar7 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar7 = DAT_14c9a3dc0;
    }
    iVar6 = iVar11 + 0x1f;
    if (-1 < iVar11) {
      iVar6 = iVar11;
    }
    bVar4 = (byte)lVar10 & 0x1f;
    DAT_14c9a3dd0 = iVar11;
    *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) =
         *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) &
         (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
    local_b8[0] = 0;
  }
  if ((local_e0[0] == '\x03') && (local_d0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_d0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_d0 + 0x10))();
    }
  }
  lVar2 = *param_2;
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  lVar10 = (ulonglong)((uint)*(ushort *)(param_1 + 0x46) * 0x50) + DAT_14c9a6588;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  local_e0[0] = '\0';
  local_b8[0] = 0;
  FUN_14083c332(local_e0,param_2);
  puVar9 = &local_b0;
  FUN_1448729ea(lVar10,puVar9,local_e0);
  uVar13 = local_b0;
  if (local_90 != 3) {
    puVar8 = &local_88;
    FUN_1400b56fe(puVar8,&local_b0,3);
    uVar13 = 0;
    if (local_68 != 0) {
      uVar13 = local_88;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_70) {
        puVar8 = (undefined4 *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar3)(puVar8);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  uVar5 = FUN_14083e305();
  lVar10 = *(longlong *)(lVar2 + 0x200);
  if (lVar10 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar10,uVar5,1);
  }
  local_e8 = 0;
  FUN_14083c276(lVar2,uVar5,uVar13,param_3);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_98) {
      puVar9 = (undefined4 *)CONCAT44(uStack_ac,local_b0);
    }
    (*pcVar3)(puVar9);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
  }
  lVar2 = DAT_14c9a3da0;
  if ((longlong)local_b8[0] != 0) {
    lVar10 = (longlong)local_b8[0] + -1;
    lVar12 = lVar10 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar12),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar12));
    if (*(longlong *)(lVar2 + lVar12) != 0) {
      FUN_1400020a8();
    }
    lVar2 = DAT_14c9a3da0;
    iVar11 = (int)lVar10;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar11;
    }
    *(undefined4 *)(lVar2 + lVar12) = 0xffffffff;
    iVar6 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar6 = DAT_14c9a3dd0;
    }
    *(int *)(lVar2 + 4 + lVar12) = iVar6;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar7 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar7 = DAT_14c9a3dc0;
    }
    iVar6 = iVar11 + 0x1f;
    if (-1 < iVar11) {
      iVar6 = iVar11;
    }
    bVar4 = (byte)lVar10 & 0x1f;
    DAT_14c9a3dd0 = iVar11;
    *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) =
         *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) &
         (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
    local_b8[0] = 0;
  }
  if ((local_e0[0] == '\x03') && (local_d0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_d0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_d0 + 0x10))();
    }
  }
  lVar2 = *param_2;
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  lVar10 = (ulonglong)((uint)*(ushort *)(param_1 + 0x48) * 0x50) + DAT_14c9a6588;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  local_e0[0] = '\0';
  local_b8[0] = 0;
  FUN_14083c332(local_e0,param_2);
  puVar9 = &local_b0;
  FUN_1448729ea(lVar10,puVar9,local_e0);
  uVar13 = local_b0;
  if (local_90 != 3) {
    puVar8 = &local_88;
    FUN_1400b56fe(puVar8,&local_b0,3);
    uVar13 = local_88;
    if (local_68 == 0) {
      uVar13 = 0x3f800000;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_70) {
        puVar8 = (undefined4 *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar3)(puVar8);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  uVar5 = FUN_14083e305();
  lVar10 = *(longlong *)(lVar2 + 0x200);
  if (lVar10 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar10,uVar5,0xb);
  }
  local_e8 = 0;
  FUN_14083c276(lVar2,uVar5,uVar13,param_3);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_98) {
      puVar9 = (undefined4 *)CONCAT44(uStack_ac,local_b0);
    }
    (*pcVar3)(puVar9);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
  }
  lVar2 = DAT_14c9a3da0;
  if ((longlong)local_b8[0] != 0) {
    lVar10 = (longlong)local_b8[0] + -1;
    lVar12 = lVar10 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar12),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar12));
    if (*(longlong *)(lVar2 + lVar12) != 0) {
      FUN_1400020a8();
    }
    lVar2 = DAT_14c9a3da0;
    iVar11 = (int)lVar10;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar11;
    }
    *(undefined4 *)(lVar2 + lVar12) = 0xffffffff;
    iVar6 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar6 = DAT_14c9a3dd0;
    }
    *(int *)(lVar2 + 4 + lVar12) = iVar6;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar7 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar7 = DAT_14c9a3dc0;
    }
    iVar6 = iVar11 + 0x1f;
    if (-1 < iVar11) {
      iVar6 = iVar11;
    }
    bVar4 = (byte)lVar10 & 0x1f;
    DAT_14c9a3dd0 = iVar11;
    *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) =
         *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) &
         (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
    local_b8[0] = 0;
  }
  if ((local_e0[0] == '\x03') && (local_d0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_d0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_d0 + 0x10))();
    }
  }
  lVar2 = *param_2;
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  lVar10 = (ulonglong)((uint)*(ushort *)(param_1 + 0x4a) * 0x50) + DAT_14c9a6588;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  local_e0[0] = '\0';
  local_b8[0] = 0;
  FUN_14083c332(local_e0,param_2);
  puVar9 = &local_b0;
  FUN_1448729ea(lVar10,puVar9,local_e0);
  uVar13 = local_b0;
  if (local_90 != 3) {
    puVar8 = &local_88;
    FUN_1400b56fe(puVar8,&local_b0,3);
    uVar13 = local_88;
    if (local_68 == 0) {
      uVar13 = 0x3f800000;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_70) {
        puVar8 = (undefined4 *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar3)(puVar8);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  uVar5 = FUN_14083e305();
  lVar10 = *(longlong *)(lVar2 + 0x200);
  if (lVar10 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar10,uVar5,4);
  }
  local_e8 = 0;
  FUN_14083c276(lVar2,uVar5,uVar13,param_3);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_98) {
      puVar9 = (undefined4 *)CONCAT44(uStack_ac,local_b0);
    }
    (*pcVar3)(puVar9);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
  }
  FUN_1448173f8(local_b8);
  if ((local_e0[0] == '\x03') && (local_d0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_d0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_d0 + 0x10))();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14083e305 FUN_14083e305 body=57 status=ok
// SIG undefined FUN_14083e305(void)

void FUN_14083e305(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb93d68 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb93d68 = FUN_14171c317(FUN_14657439a,uVar1,L"EAtt_WeaponBehaviorUse");
  }
  return;
}



// FUNCTION 14083e33e FUN_14083e33e body=394 status=ok
// SIG undefined FUN_14083e33e(void)

void FUN_14083e33e(longlong param_1,ushort param_2)

{
  longlong lVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong *puVar8;
  uint uVar9;
  undefined1 auStack_78 [40];
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != 0xffff) {
    uVar9 = 0;
    do {
      lVar5 = *(longlong *)(param_1 + 0x10);
      lVar1 = lVar5 + (ulonglong)param_2 * 0x20;
      bVar2 = *(byte *)(lVar5 + 0x19 + (ulonglong)param_2 * 0x20);
      local_50 = 0;
      FUN_144724320(param_1,param_2,0,&local_50);
      puVar8 = &DAT_14a3355b0;
      uVar6 = 0;
      do {
        if ((*puVar8 & ~local_50) != 0) goto LAB_14083e3cd;
        uVar6 = uVar6 + 1;
        puVar8 = puVar8 + 1;
      } while (uVar6 != 3);
      uVar6 = 3;
LAB_14083e3cd:
      if (bVar2 != (byte)uVar6) {
        lVar7 = (ulonglong)((*(byte *)(lVar1 + 0xb) & 0xf) << 3) + *(longlong *)(param_1 + 0x30);
        uVar3 = *(ushort *)(lVar1 + 0x16);
        uVar4 = *(ushort *)(lVar1 + 0x14);
        if (uVar3 != 0xffff) {
          *(ushort *)(lVar5 + 0x14 + (ulonglong)uVar3 * 0x20) = uVar4;
          *(undefined2 *)(lVar1 + 0x16) = 0xffff;
        }
        if (uVar4 != 0xffff) {
          *(ushort *)(*(longlong *)(param_1 + 0x10) + 0x16 + (ulonglong)uVar4 * 0x20) = uVar3;
          *(undefined2 *)(lVar1 + 0x14) = 0xffff;
        }
        if (*(ushort *)(lVar7 + (ulonglong)bVar2 * 2) == param_2) {
          *(ushort *)(lVar7 + (ulonglong)bVar2 * 2) = uVar4;
        }
        *(undefined1 *)(lVar1 + 0x18) = 0;
        *(byte *)(lVar1 + 0x19) = (byte)uVar6;
        lVar7 = (ulonglong)(*(byte *)(lVar1 + 0xb) & 0xf) * 8 + *(longlong *)(param_1 + 0x30);
        lVar5 = *(longlong *)(param_1 + 0x10);
        *(undefined1 *)(lVar5 + 0x18 + (ulonglong)param_2 * 0x20) = 3;
        uVar3 = *(ushort *)(lVar7 + (uVar6 & 0xff) * 2);
        *(ushort *)(lVar5 + 0x14 + (ulonglong)param_2 * 0x20) = uVar3;
        if (uVar3 != 0xffff) {
          *(ushort *)(*(longlong *)(param_1 + 0x10) + 0x16 + (ulonglong)uVar3 * 0x20) = param_2;
        }
        *(ushort *)(lVar7 + (uVar6 & 0xff) * 2) = param_2;
      }
      if (2 < uVar9) break;
      param_2 = *(ushort *)(lVar1 + 0xc);
      uVar9 = uVar9 + 1;
    } while (param_2 != 0xffff);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14083e4ca FUN_14083e4ca body=353 status=ok
// SIG undefined FUN_14083e4ca(void)

void FUN_14083e4ca(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14083e54f;
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
LAB_14083e54f:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14083e62c FUN_14083e62c body=566 status=ok
// SIG undefined FUN_14083e62c(void)

void FUN_14083e62c(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0x6e0) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x6e0) + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(param_1 + 0x6d8) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x6d8) + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  lVar4 = 0x6c8;
  do {
    if (*(longlong *)(param_1 + lVar4) != 0) {
      FUN_1400020a8();
    }
    lVar4 = lVar4 + -0x10;
  } while (lVar4 != 0x648);
  if (*(longlong *)(param_1 + 0x650) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x650) + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong **)(param_1 + 0x648) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x648) + 0x38))();
  }
  lVar4 = 0x638;
  do {
    if (*(longlong *)(param_1 + lVar4) != 0) {
      FUN_1400020a8();
    }
    lVar4 = lVar4 + -0x10;
  } while (lVar4 != 0x618);
  lVar4 = 0x618;
  do {
    if (*(longlong *)(param_1 + lVar4) != 0) {
      LOCK();
      puVar1 = (uint *)(*(longlong *)(param_1 + lVar4) + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    plVar3 = *(longlong **)(param_1 + -8 + lVar4);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x38))();
    }
    lVar4 = lVar4 + -0x10;
  } while (lVar4 != 0x5f8);
  lVar4 = 0x5f0;
  do {
    if (*(longlong *)(param_1 + lVar4) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + -0x10 + lVar4) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + -0x28 + lVar4) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + -0x38 + lVar4) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + -0x48 + lVar4) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + -0x58 + lVar4) != 0) {
      FUN_1400020a8();
    }
    if (*(int *)(param_1 + -0x78 + lVar4) != 0) {
      *(undefined8 *)(param_1 + -0x7c + lVar4) = 0;
      if (*(longlong *)(param_1 + -0x70 + lVar4) != 0) {
        FUN_1400020a8();
      }
      *(undefined **)(param_1 + -0x70 + lVar4) = &DAT_14c7585e0;
      if (*(longlong *)(param_1 + -0x68 + lVar4) != 0) {
        FUN_1400020a8();
      }
      *(undefined8 *)(param_1 + -0x68 + lVar4) = 0;
    }
    if (*(longlong *)(param_1 + -0x90 + lVar4) != 0) {
      FUN_1400020a8();
    }
    lVar4 = lVar4 + -0xa8;
  } while (lVar4 != 0xb0);
  FUN_14574c51a(param_1 + 0x28);
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 14083e868 FUN_14083e868 body=57 status=ok
// SIG undefined FUN_14083e868(void)

void FUN_14083e868(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9f9e0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9f9e0 = FUN_140002ddd(FUN_1465a5dca,uVar1,L"CarryableObjectBodySettings");
  }
  return;
}



// FUNCTION 14083e8b0 FUN_14083e8b0 body=88 status=ok
// SIG undefined FUN_14083e8b0(void)

undefined8 * FUN_14083e8b0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ab620b0;
  FUN_14034c5df(param_1[0x12],*(undefined4 *)(param_1 + 0x13));
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_140753ab6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14083e908 FUN_14083e908 body=135 status=ok
// SIG undefined FUN_14083e908(void)

void FUN_14083e908(longlong param_1,int param_2)

{
  int iVar1;
  double dVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (*(int *)(param_1 + 0xc) < param_2) {
    FUN_1409669a6(param_1,param_2);
  }
  if (*(int *)(param_1 + 0x1c) < param_2) {
    FUN_1409669a6(param_1 + 0x10,param_2);
  }
  dVar2 = (double)(param_2 * 0x58) / (double)(*(int *)(param_1 + 0x30) * 0x58);
  iVar1 = -(int)((ulonglong)(longlong)ROUND(-0.5 - (dVar2 + dVar2)) >> 1);
  if (*(int *)(param_1 + 0x28) < iVar1) {
    do {
      FUN_1457d01dc(param_1 + 0x20);
    } while (*(int *)(param_1 + 0x28) < iVar1);
  }
  return;
}



// FUNCTION 14083e990 FUN_14083e990 body=21 status=ok
// SIG undefined FUN_14083e990(void)

undefined8 FUN_14083e990(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}


