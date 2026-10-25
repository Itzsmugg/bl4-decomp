// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145d9a440 FUN_145d9a440 body=114 status=ok
// SIG undefined FUN_145d9a440(void)

void FUN_145d9a440(void)

{
  longlong *plVar1;
  
  FUN_1460fb736();
  FUN_145d9a4b2(DAT_14cb8b6b4);
  if (DAT_14cb8b640 == &DAT_14cb8b6b0) {
    DAT_14cb8b640 = (undefined4 *)0x0;
  }
  if (DAT_14cb8b6f0 != 0) {
    plVar1 = &DAT_14cb8b710;
    if (DAT_14cb8b700 != (longlong *)0x0) {
      plVar1 = DAT_14cb8b700;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb8b6d8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d9a4b2 FUN_145d9a4b2 body=242 status=ok
// SIG undefined FUN_145d9a4b2(void)

void FUN_145d9a4b2(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb8b650 != DAT_14cb8b67c) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb8b680;
    if (DAT_14cb8b688 != (undefined *)0x0) {
      puVar6 = DAT_14cb8b688;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb8b690 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb8b648 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb8b648 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb8b680;
        if (DAT_14cb8b688 != (undefined *)0x0) {
          puVar6 = DAT_14cb8b688;
        }
        lVar1 = DAT_14cb8b648 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb8b648 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d9a5a4();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d9a5a4 FUN_145d9a5a4 body=135 status=ok
// SIG undefined FUN_145d9a5a4(void)

void FUN_145d9a5a4(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb8b648;
  if (DAT_14cb8b67c != 0) {
    *(int *)(DAT_14cb8b648 + (longlong)DAT_14cb8b678 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb8b67c) {
    iVar4 = DAT_14cb8b678;
  }
  puVar1[1] = iVar4;
  DAT_14cb8b67c = DAT_14cb8b67c + 1;
  puVar5 = &DAT_14cb8b658;
  if (DAT_14cb8b668 != (undefined *)0x0) {
    puVar5 = DAT_14cb8b668;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb8b678 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d9a62c FUN_145d9a62c body=114 status=ok
// SIG undefined FUN_145d9a62c(void)

void FUN_145d9a62c(void)

{
  longlong *plVar1;
  
  FUN_1460fbecc();
  FUN_145d9a69e(DAT_14cb8b7d4);
  if (DAT_14cb8b758 == &DAT_14cb8b7d0) {
    DAT_14cb8b758 = (undefined4 *)0x0;
  }
  if (DAT_14cb8b810 != 0) {
    plVar1 = &DAT_14cb8b830;
    if (DAT_14cb8b820 != (longlong *)0x0) {
      plVar1 = DAT_14cb8b820;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb8b7f8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d9a69e FUN_145d9a69e body=242 status=ok
// SIG undefined FUN_145d9a69e(void)

void FUN_145d9a69e(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb8b768 != DAT_14cb8b794) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb8b798;
    if (DAT_14cb8b7a0 != (undefined *)0x0) {
      puVar6 = DAT_14cb8b7a0;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb8b7a8 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb8b760 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb8b760 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb8b798;
        if (DAT_14cb8b7a0 != (undefined *)0x0) {
          puVar6 = DAT_14cb8b7a0;
        }
        lVar1 = DAT_14cb8b760 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb8b760 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d9a790();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d9a790 FUN_145d9a790 body=135 status=ok
// SIG undefined FUN_145d9a790(void)

void FUN_145d9a790(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb8b760;
  if (DAT_14cb8b794 != 0) {
    *(int *)(DAT_14cb8b760 + (longlong)DAT_14cb8b790 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb8b794) {
    iVar4 = DAT_14cb8b790;
  }
  puVar1[1] = iVar4;
  DAT_14cb8b794 = DAT_14cb8b794 + 1;
  puVar5 = &DAT_14cb8b770;
  if (DAT_14cb8b780 != (undefined *)0x0) {
    puVar5 = DAT_14cb8b780;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb8b790 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d9a818 FUN_145d9a818 body=114 status=ok
// SIG undefined FUN_145d9a818(void)

void FUN_145d9a818(void)

{
  longlong *plVar1;
  
  FUN_1460fc662();
  FUN_145d9a88a(DAT_14cb8ba54);
  if (DAT_14cb8b9e0 == &DAT_14cb8ba50) {
    DAT_14cb8b9e0 = (undefined4 *)0x0;
  }
  if (DAT_14cb8ba90 != 0) {
    plVar1 = &DAT_14cb8bab0;
    if (DAT_14cb8baa0 != (longlong *)0x0) {
      plVar1 = DAT_14cb8baa0;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb8ba78 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d9a88a FUN_145d9a88a body=242 status=ok
// SIG undefined FUN_145d9a88a(void)

void FUN_145d9a88a(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb8b9f0 != DAT_14cb8ba1c) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb8ba20;
    if (DAT_14cb8ba28 != (undefined *)0x0) {
      puVar6 = DAT_14cb8ba28;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb8ba30 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb8b9e8 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb8b9e8 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb8ba20;
        if (DAT_14cb8ba28 != (undefined *)0x0) {
          puVar6 = DAT_14cb8ba28;
        }
        lVar1 = DAT_14cb8b9e8 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb8b9e8 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d9a97c();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d9a97c FUN_145d9a97c body=135 status=ok
// SIG undefined FUN_145d9a97c(void)

void FUN_145d9a97c(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb8b9e8;
  if (DAT_14cb8ba1c != 0) {
    *(int *)(DAT_14cb8b9e8 + (longlong)DAT_14cb8ba18 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb8ba1c) {
    iVar4 = DAT_14cb8ba18;
  }
  puVar1[1] = iVar4;
  DAT_14cb8ba1c = DAT_14cb8ba1c + 1;
  puVar5 = &DAT_14cb8b9f8;
  if (DAT_14cb8ba08 != (undefined *)0x0) {
    puVar5 = DAT_14cb8ba08;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb8ba18 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d9aa04 FUN_145d9aa04 body=114 status=ok
// SIG undefined FUN_145d9aa04(void)

void FUN_145d9aa04(void)

{
  longlong *plVar1;
  
  FUN_1460fcdf8();
  FUN_145d9aa76(DAT_14cb8bba4);
  if (DAT_14cb8bb30 == &DAT_14cb8bba0) {
    DAT_14cb8bb30 = (undefined4 *)0x0;
  }
  if (DAT_14cb8bbe0 != 0) {
    plVar1 = &DAT_14cb8bc00;
    if (DAT_14cb8bbf0 != (longlong *)0x0) {
      plVar1 = DAT_14cb8bbf0;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb8bbc8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d9aa76 FUN_145d9aa76 body=242 status=ok
// SIG undefined FUN_145d9aa76(void)

void FUN_145d9aa76(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb8bb40 != DAT_14cb8bb6c) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb8bb70;
    if (DAT_14cb8bb78 != (undefined *)0x0) {
      puVar6 = DAT_14cb8bb78;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb8bb80 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb8bb38 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb8bb38 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb8bb70;
        if (DAT_14cb8bb78 != (undefined *)0x0) {
          puVar6 = DAT_14cb8bb78;
        }
        lVar1 = DAT_14cb8bb38 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb8bb38 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d9ab68();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d9ab68 FUN_145d9ab68 body=135 status=ok
// SIG undefined FUN_145d9ab68(void)

void FUN_145d9ab68(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb8bb38;
  if (DAT_14cb8bb6c != 0) {
    *(int *)(DAT_14cb8bb38 + (longlong)DAT_14cb8bb68 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb8bb6c) {
    iVar4 = DAT_14cb8bb68;
  }
  puVar1[1] = iVar4;
  DAT_14cb8bb6c = DAT_14cb8bb6c + 1;
  puVar5 = &DAT_14cb8bb48;
  if (DAT_14cb8bb58 != (undefined *)0x0) {
    puVar5 = DAT_14cb8bb58;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb8bb68 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d9abf0 FUN_145d9abf0 body=114 status=ok
// SIG undefined FUN_145d9abf0(void)

void FUN_145d9abf0(void)

{
  longlong *plVar1;
  
  FUN_1460fd58e();
  FUN_145d9ac62(DAT_14cb8bc94);
  if (DAT_14cb8bc20 == &DAT_14cb8bc90) {
    DAT_14cb8bc20 = (undefined4 *)0x0;
  }
  if (DAT_14cb8bcd0 != 0) {
    plVar1 = &DAT_14cb8bcf0;
    if (DAT_14cb8bce0 != (longlong *)0x0) {
      plVar1 = DAT_14cb8bce0;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb8bcb8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d9ac62 FUN_145d9ac62 body=242 status=ok
// SIG undefined FUN_145d9ac62(void)

void FUN_145d9ac62(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb8bc30 != DAT_14cb8bc5c) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb8bc60;
    if (DAT_14cb8bc68 != (undefined *)0x0) {
      puVar6 = DAT_14cb8bc68;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb8bc70 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb8bc28 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb8bc28 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb8bc60;
        if (DAT_14cb8bc68 != (undefined *)0x0) {
          puVar6 = DAT_14cb8bc68;
        }
        lVar1 = DAT_14cb8bc28 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb8bc28 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d9ad54();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d9ad54 FUN_145d9ad54 body=135 status=ok
// SIG undefined FUN_145d9ad54(void)

void FUN_145d9ad54(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb8bc28;
  if (DAT_14cb8bc5c != 0) {
    *(int *)(DAT_14cb8bc28 + (longlong)DAT_14cb8bc58 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb8bc5c) {
    iVar4 = DAT_14cb8bc58;
  }
  puVar1[1] = iVar4;
  DAT_14cb8bc5c = DAT_14cb8bc5c + 1;
  puVar5 = &DAT_14cb8bc38;
  if (DAT_14cb8bc48 != (undefined *)0x0) {
    puVar5 = DAT_14cb8bc48;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb8bc58 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d9addc FUN_145d9addc body=114 status=ok
// SIG undefined FUN_145d9addc(void)

void FUN_145d9addc(void)

{
  longlong *plVar1;
  
  FUN_1460fdd24();
  FUN_145d9ae4e(DAT_14cb8bd84);
  if (DAT_14cb8bd10 == &DAT_14cb8bd80) {
    DAT_14cb8bd10 = (undefined4 *)0x0;
  }
  if (DAT_14cb8bdc0 != 0) {
    plVar1 = &DAT_14cb8bde0;
    if (DAT_14cb8bdd0 != (longlong *)0x0) {
      plVar1 = DAT_14cb8bdd0;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb8bda8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d9ae4e FUN_145d9ae4e body=242 status=ok
// SIG undefined FUN_145d9ae4e(void)

void FUN_145d9ae4e(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb8bd20 != DAT_14cb8bd4c) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb8bd50;
    if (DAT_14cb8bd58 != (undefined *)0x0) {
      puVar6 = DAT_14cb8bd58;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb8bd60 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb8bd18 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb8bd18 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb8bd50;
        if (DAT_14cb8bd58 != (undefined *)0x0) {
          puVar6 = DAT_14cb8bd58;
        }
        lVar1 = DAT_14cb8bd18 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb8bd18 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d9af40();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d9af40 FUN_145d9af40 body=135 status=ok
// SIG undefined FUN_145d9af40(void)

void FUN_145d9af40(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb8bd18;
  if (DAT_14cb8bd4c != 0) {
    *(int *)(DAT_14cb8bd18 + (longlong)DAT_14cb8bd48 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb8bd4c) {
    iVar4 = DAT_14cb8bd48;
  }
  puVar1[1] = iVar4;
  DAT_14cb8bd4c = DAT_14cb8bd4c + 1;
  puVar5 = &DAT_14cb8bd28;
  if (DAT_14cb8bd38 != (undefined *)0x0) {
    puVar5 = DAT_14cb8bd38;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb8bd48 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d9afc8 FUN_145d9afc8 body=114 status=ok
// SIG undefined FUN_145d9afc8(void)

void FUN_145d9afc8(void)

{
  longlong *plVar1;
  
  FUN_1460fe4ba();
  FUN_145d9b03a(DAT_14cb8beb4);
  if (DAT_14cb8be40 == &DAT_14cb8beb0) {
    DAT_14cb8be40 = (undefined4 *)0x0;
  }
  if (DAT_14cb8bef0 != 0) {
    plVar1 = &DAT_14cb8bf10;
    if (DAT_14cb8bf00 != (longlong *)0x0) {
      plVar1 = DAT_14cb8bf00;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb8bed8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d9b03a FUN_145d9b03a body=242 status=ok
// SIG undefined FUN_145d9b03a(void)

void FUN_145d9b03a(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb8be50 != DAT_14cb8be7c) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb8be80;
    if (DAT_14cb8be88 != (undefined *)0x0) {
      puVar6 = DAT_14cb8be88;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb8be90 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb8be48 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb8be48 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb8be80;
        if (DAT_14cb8be88 != (undefined *)0x0) {
          puVar6 = DAT_14cb8be88;
        }
        lVar1 = DAT_14cb8be48 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb8be48 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d9b12c();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d9b12c FUN_145d9b12c body=135 status=ok
// SIG undefined FUN_145d9b12c(void)

void FUN_145d9b12c(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb8be48;
  if (DAT_14cb8be7c != 0) {
    *(int *)(DAT_14cb8be48 + (longlong)DAT_14cb8be78 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb8be7c) {
    iVar4 = DAT_14cb8be78;
  }
  puVar1[1] = iVar4;
  DAT_14cb8be7c = DAT_14cb8be7c + 1;
  puVar5 = &DAT_14cb8be58;
  if (DAT_14cb8be68 != (undefined *)0x0) {
    puVar5 = DAT_14cb8be68;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb8be78 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d9b1b4 FUN_145d9b1b4 body=114 status=ok
// SIG undefined FUN_145d9b1b4(void)

void FUN_145d9b1b4(void)

{
  longlong *plVar1;
  
  FUN_140eb1190();
  FUN_145d9b226(DAT_14cb8c074);
  if (DAT_14cb8bff8 == &DAT_14cb8c070) {
    DAT_14cb8bff8 = (undefined4 *)0x0;
  }
  if (DAT_14cb8c0b0 != 0) {
    plVar1 = &DAT_14cb8c0d0;
    if (DAT_14cb8c0c0 != (longlong *)0x0) {
      plVar1 = DAT_14cb8c0c0;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb8c098 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d9b226 FUN_145d9b226 body=242 status=ok
// SIG undefined FUN_145d9b226(void)

void FUN_145d9b226(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb8c008 != DAT_14cb8c034) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb8c038;
    if (DAT_14cb8c040 != (undefined *)0x0) {
      puVar6 = DAT_14cb8c040;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb8c048 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb8c000 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb8c000 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb8c038;
        if (DAT_14cb8c040 != (undefined *)0x0) {
          puVar6 = DAT_14cb8c040;
        }
        lVar1 = DAT_14cb8c000 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb8c000 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d9b318();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d9b318 FUN_145d9b318 body=135 status=ok
// SIG undefined FUN_145d9b318(void)

void FUN_145d9b318(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb8c000;
  if (DAT_14cb8c034 != 0) {
    *(int *)(DAT_14cb8c000 + (longlong)DAT_14cb8c030 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb8c034) {
    iVar4 = DAT_14cb8c030;
  }
  puVar1[1] = iVar4;
  DAT_14cb8c034 = DAT_14cb8c034 + 1;
  puVar5 = &DAT_14cb8c010;
  if (DAT_14cb8c020 != (undefined *)0x0) {
    puVar5 = DAT_14cb8c020;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb8c030 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d9b3a0 FUN_145d9b3a0 body=114 status=ok
// SIG undefined FUN_145d9b3a0(void)

void FUN_145d9b3a0(void)

{
  longlong *plVar1;
  
  FUN_1460fec50();
  FUN_145d9b412(DAT_14cb8c454);
  if (DAT_14cb8c3e0 == &DAT_14cb8c450) {
    DAT_14cb8c3e0 = (undefined4 *)0x0;
  }
  if (DAT_14cb8c490 != 0) {
    plVar1 = &DAT_14cb8c4b0;
    if (DAT_14cb8c4a0 != (longlong *)0x0) {
      plVar1 = DAT_14cb8c4a0;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb8c478 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d9b412 FUN_145d9b412 body=242 status=ok
// SIG undefined FUN_145d9b412(void)

void FUN_145d9b412(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb8c3f0 != DAT_14cb8c41c) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb8c420;
    if (DAT_14cb8c428 != (undefined *)0x0) {
      puVar6 = DAT_14cb8c428;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb8c430 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb8c3e8 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb8c3e8 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb8c420;
        if (DAT_14cb8c428 != (undefined *)0x0) {
          puVar6 = DAT_14cb8c428;
        }
        lVar1 = DAT_14cb8c3e8 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb8c3e8 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d9b504();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d9b504 FUN_145d9b504 body=135 status=ok
// SIG undefined FUN_145d9b504(void)

void FUN_145d9b504(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb8c3e8;
  if (DAT_14cb8c41c != 0) {
    *(int *)(DAT_14cb8c3e8 + (longlong)DAT_14cb8c418 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb8c41c) {
    iVar4 = DAT_14cb8c418;
  }
  puVar1[1] = iVar4;
  DAT_14cb8c41c = DAT_14cb8c41c + 1;
  puVar5 = &DAT_14cb8c3f8;
  if (DAT_14cb8c408 != (undefined *)0x0) {
    puVar5 = DAT_14cb8c408;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb8c418 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d9b58c FUN_145d9b58c body=114 status=ok
// SIG undefined FUN_145d9b58c(void)

void FUN_145d9b58c(void)

{
  longlong *plVar1;
  
  FUN_1460ff3e6();
  FUN_145d9b5fe(DAT_14cb8c544);
  if (DAT_14cb8c4d0 == &DAT_14cb8c540) {
    DAT_14cb8c4d0 = (undefined4 *)0x0;
  }
  if (DAT_14cb8c580 != 0) {
    plVar1 = &DAT_14cb8c5a0;
    if (DAT_14cb8c590 != (longlong *)0x0) {
      plVar1 = DAT_14cb8c590;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb8c568 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d9b5fe FUN_145d9b5fe body=242 status=ok
// SIG undefined FUN_145d9b5fe(void)

void FUN_145d9b5fe(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb8c4e0 != DAT_14cb8c50c) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb8c510;
    if (DAT_14cb8c518 != (undefined *)0x0) {
      puVar6 = DAT_14cb8c518;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb8c520 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb8c4d8 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb8c4d8 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb8c510;
        if (DAT_14cb8c518 != (undefined *)0x0) {
          puVar6 = DAT_14cb8c518;
        }
        lVar1 = DAT_14cb8c4d8 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb8c4d8 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d9b6f0();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d9b6f0 FUN_145d9b6f0 body=135 status=ok
// SIG undefined FUN_145d9b6f0(void)

void FUN_145d9b6f0(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb8c4d8;
  if (DAT_14cb8c50c != 0) {
    *(int *)(DAT_14cb8c4d8 + (longlong)DAT_14cb8c508 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb8c50c) {
    iVar4 = DAT_14cb8c508;
  }
  puVar1[1] = iVar4;
  DAT_14cb8c50c = DAT_14cb8c50c + 1;
  puVar5 = &DAT_14cb8c4e8;
  if (DAT_14cb8c4f8 != (undefined *)0x0) {
    puVar5 = DAT_14cb8c4f8;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb8c508 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d9b778 FUN_145d9b778 body=114 status=ok
// SIG undefined FUN_145d9b778(void)

void FUN_145d9b778(void)

{
  longlong *plVar1;
  
  FUN_1460ffb7c();
  FUN_145d9b7ea(DAT_14cb8c634);
  if (DAT_14cb8c5c0 == &DAT_14cb8c630) {
    DAT_14cb8c5c0 = (undefined4 *)0x0;
  }
  if (DAT_14cb8c670 != 0) {
    plVar1 = &DAT_14cb8c690;
    if (DAT_14cb8c680 != (longlong *)0x0) {
      plVar1 = DAT_14cb8c680;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb8c658 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d9b7ea FUN_145d9b7ea body=242 status=ok
// SIG undefined FUN_145d9b7ea(void)

void FUN_145d9b7ea(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb8c5d0 != DAT_14cb8c5fc) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb8c600;
    if (DAT_14cb8c608 != (undefined *)0x0) {
      puVar6 = DAT_14cb8c608;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb8c610 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb8c5c8 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb8c5c8 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb8c600;
        if (DAT_14cb8c608 != (undefined *)0x0) {
          puVar6 = DAT_14cb8c608;
        }
        lVar1 = DAT_14cb8c5c8 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb8c5c8 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d9b8dc();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d9b8dc FUN_145d9b8dc body=135 status=ok
// SIG undefined FUN_145d9b8dc(void)

void FUN_145d9b8dc(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb8c5c8;
  if (DAT_14cb8c5fc != 0) {
    *(int *)(DAT_14cb8c5c8 + (longlong)DAT_14cb8c5f8 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb8c5fc) {
    iVar4 = DAT_14cb8c5f8;
  }
  puVar1[1] = iVar4;
  DAT_14cb8c5fc = DAT_14cb8c5fc + 1;
  puVar5 = &DAT_14cb8c5d8;
  if (DAT_14cb8c5e8 != (undefined *)0x0) {
    puVar5 = DAT_14cb8c5e8;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb8c5f8 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d9b964 FUN_145d9b964 body=114 status=ok
// SIG undefined FUN_145d9b964(void)

void FUN_145d9b964(void)

{
  longlong *plVar1;
  
  FUN_146100312();
  FUN_145d9b9d6(DAT_14cb8c794);
  if (DAT_14cb8c720 == &DAT_14cb8c790) {
    DAT_14cb8c720 = (undefined4 *)0x0;
  }
  if (DAT_14cb8c7d0 != 0) {
    plVar1 = &DAT_14cb8c7f0;
    if (DAT_14cb8c7e0 != (longlong *)0x0) {
      plVar1 = DAT_14cb8c7e0;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb8c7b8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d9b9d6 FUN_145d9b9d6 body=242 status=ok
// SIG undefined FUN_145d9b9d6(void)

void FUN_145d9b9d6(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb8c730 != DAT_14cb8c75c) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb8c760;
    if (DAT_14cb8c768 != (undefined *)0x0) {
      puVar6 = DAT_14cb8c768;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb8c770 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb8c728 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb8c728 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb8c760;
        if (DAT_14cb8c768 != (undefined *)0x0) {
          puVar6 = DAT_14cb8c768;
        }
        lVar1 = DAT_14cb8c728 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb8c728 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d9bac8();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d9bac8 FUN_145d9bac8 body=135 status=ok
// SIG undefined FUN_145d9bac8(void)

void FUN_145d9bac8(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb8c728;
  if (DAT_14cb8c75c != 0) {
    *(int *)(DAT_14cb8c728 + (longlong)DAT_14cb8c758 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb8c75c) {
    iVar4 = DAT_14cb8c758;
  }
  puVar1[1] = iVar4;
  DAT_14cb8c75c = DAT_14cb8c75c + 1;
  puVar5 = &DAT_14cb8c738;
  if (DAT_14cb8c748 != (undefined *)0x0) {
    puVar5 = DAT_14cb8c748;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb8c758 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d9bb50 FUN_145d9bb50 body=114 status=ok
// SIG undefined FUN_145d9bb50(void)

void FUN_145d9bb50(void)

{
  longlong *plVar1;
  
  FUN_1411c6bdc();
  FUN_145d9bbc2(DAT_14cb8ca94);
  if (DAT_14cb8ca18 == &DAT_14cb8ca90) {
    DAT_14cb8ca18 = (undefined4 *)0x0;
  }
  if (DAT_14cb8cad0 != 0) {
    plVar1 = &DAT_14cb8caf0;
    if (DAT_14cb8cae0 != (longlong *)0x0) {
      plVar1 = DAT_14cb8cae0;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb8cab8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d9bbc2 FUN_145d9bbc2 body=242 status=ok
// SIG undefined FUN_145d9bbc2(void)

void FUN_145d9bbc2(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb8ca28 != DAT_14cb8ca54) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb8ca58;
    if (DAT_14cb8ca60 != (undefined *)0x0) {
      puVar6 = DAT_14cb8ca60;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb8ca68 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb8ca20 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb8ca20 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb8ca58;
        if (DAT_14cb8ca60 != (undefined *)0x0) {
          puVar6 = DAT_14cb8ca60;
        }
        lVar1 = DAT_14cb8ca20 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb8ca20 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d9bcb4();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d9bcb4 FUN_145d9bcb4 body=135 status=ok
// SIG undefined FUN_145d9bcb4(void)

void FUN_145d9bcb4(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb8ca20;
  if (DAT_14cb8ca54 != 0) {
    *(int *)(DAT_14cb8ca20 + (longlong)DAT_14cb8ca50 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb8ca54) {
    iVar4 = DAT_14cb8ca50;
  }
  puVar1[1] = iVar4;
  DAT_14cb8ca54 = DAT_14cb8ca54 + 1;
  puVar5 = &DAT_14cb8ca30;
  if (DAT_14cb8ca40 != (undefined *)0x0) {
    puVar5 = DAT_14cb8ca40;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb8ca50 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d9bd3c FUN_145d9bd3c body=114 status=ok
// SIG undefined FUN_145d9bd3c(void)

void FUN_145d9bd3c(void)

{
  longlong *plVar1;
  
  FUN_146100aa8();
  FUN_145d9bdae(DAT_14cb8d004);
  if (DAT_14cb8cf90 == &DAT_14cb8d000) {
    DAT_14cb8cf90 = (undefined4 *)0x0;
  }
  if (DAT_14cb8d040 != 0) {
    plVar1 = &DAT_14cb8d060;
    if (DAT_14cb8d050 != (longlong *)0x0) {
      plVar1 = DAT_14cb8d050;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb8d028 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d9bdae FUN_145d9bdae body=242 status=ok
// SIG undefined FUN_145d9bdae(void)

void FUN_145d9bdae(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb8cfa0 != DAT_14cb8cfcc) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb8cfd0;
    if (DAT_14cb8cfd8 != (undefined *)0x0) {
      puVar6 = DAT_14cb8cfd8;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb8cfe0 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb8cf98 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb8cf98 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb8cfd0;
        if (DAT_14cb8cfd8 != (undefined *)0x0) {
          puVar6 = DAT_14cb8cfd8;
        }
        lVar1 = DAT_14cb8cf98 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb8cf98 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d9bea0();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d9bea0 FUN_145d9bea0 body=135 status=ok
// SIG undefined FUN_145d9bea0(void)

void FUN_145d9bea0(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb8cf98;
  if (DAT_14cb8cfcc != 0) {
    *(int *)(DAT_14cb8cf98 + (longlong)DAT_14cb8cfc8 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb8cfcc) {
    iVar4 = DAT_14cb8cfc8;
  }
  puVar1[1] = iVar4;
  DAT_14cb8cfcc = DAT_14cb8cfcc + 1;
  puVar5 = &DAT_14cb8cfa8;
  if (DAT_14cb8cfb8 != (undefined *)0x0) {
    puVar5 = DAT_14cb8cfb8;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb8cfc8 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d9bf28 FUN_145d9bf28 body=114 status=ok
// SIG undefined FUN_145d9bf28(void)

void FUN_145d9bf28(void)

{
  longlong *plVar1;
  
  FUN_14610123e();
  FUN_145d9bf9a(DAT_14cb8d124);
  if (DAT_14cb8d0b0 == &DAT_14cb8d120) {
    DAT_14cb8d0b0 = (undefined4 *)0x0;
  }
  if (DAT_14cb8d160 != 0) {
    plVar1 = &DAT_14cb8d180;
    if (DAT_14cb8d170 != (longlong *)0x0) {
      plVar1 = DAT_14cb8d170;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb8d148 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d9bf9a FUN_145d9bf9a body=242 status=ok
// SIG undefined FUN_145d9bf9a(void)

void FUN_145d9bf9a(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb8d0c0 != DAT_14cb8d0ec) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb8d0f0;
    if (DAT_14cb8d0f8 != (undefined *)0x0) {
      puVar6 = DAT_14cb8d0f8;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb8d100 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb8d0b8 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb8d0b8 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb8d0f0;
        if (DAT_14cb8d0f8 != (undefined *)0x0) {
          puVar6 = DAT_14cb8d0f8;
        }
        lVar1 = DAT_14cb8d0b8 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb8d0b8 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d9c08c();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d9c08c FUN_145d9c08c body=135 status=ok
// SIG undefined FUN_145d9c08c(void)

void FUN_145d9c08c(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb8d0b8;
  if (DAT_14cb8d0ec != 0) {
    *(int *)(DAT_14cb8d0b8 + (longlong)DAT_14cb8d0e8 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb8d0ec) {
    iVar4 = DAT_14cb8d0e8;
  }
  puVar1[1] = iVar4;
  DAT_14cb8d0ec = DAT_14cb8d0ec + 1;
  puVar5 = &DAT_14cb8d0c8;
  if (DAT_14cb8d0d8 != (undefined *)0x0) {
    puVar5 = DAT_14cb8d0d8;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb8d0e8 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d9c114 FUN_145d9c114 body=114 status=ok
// SIG undefined FUN_145d9c114(void)

void FUN_145d9c114(void)

{
  longlong *plVar1;
  
  FUN_1461019d4();
  FUN_145d9c186(DAT_14cb8d2a4);
  if (DAT_14cb8d228 == &DAT_14cb8d2a0) {
    DAT_14cb8d228 = (undefined4 *)0x0;
  }
  if (DAT_14cb8d2e0 != 0) {
    plVar1 = &DAT_14cb8d300;
    if (DAT_14cb8d2f0 != (longlong *)0x0) {
      plVar1 = DAT_14cb8d2f0;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb8d2c8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d9c186 FUN_145d9c186 body=242 status=ok
// SIG undefined FUN_145d9c186(void)

void FUN_145d9c186(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb8d238 != DAT_14cb8d264) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb8d268;
    if (DAT_14cb8d270 != (undefined *)0x0) {
      puVar6 = DAT_14cb8d270;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb8d278 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb8d230 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb8d230 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb8d268;
        if (DAT_14cb8d270 != (undefined *)0x0) {
          puVar6 = DAT_14cb8d270;
        }
        lVar1 = DAT_14cb8d230 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb8d230 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d9c278();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d9c278 FUN_145d9c278 body=135 status=ok
// SIG undefined FUN_145d9c278(void)

void FUN_145d9c278(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb8d230;
  if (DAT_14cb8d264 != 0) {
    *(int *)(DAT_14cb8d230 + (longlong)DAT_14cb8d260 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb8d264) {
    iVar4 = DAT_14cb8d260;
  }
  puVar1[1] = iVar4;
  DAT_14cb8d264 = DAT_14cb8d264 + 1;
  puVar5 = &DAT_14cb8d240;
  if (DAT_14cb8d250 != (undefined *)0x0) {
    puVar5 = DAT_14cb8d250;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb8d260 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d9c300 FUN_145d9c300 body=114 status=ok
// SIG undefined FUN_145d9c300(void)

void FUN_145d9c300(void)

{
  longlong *plVar1;
  
  FUN_14610da72();
  FUN_145d9c372(DAT_14cb8d4c4);
  if (DAT_14cb8d450 == &DAT_14cb8d4c0) {
    DAT_14cb8d450 = (undefined4 *)0x0;
  }
  if (DAT_14cb8d500 != 0) {
    plVar1 = &DAT_14cb8d520;
    if (DAT_14cb8d510 != (longlong *)0x0) {
      plVar1 = DAT_14cb8d510;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb8d4e8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d9c372 FUN_145d9c372 body=242 status=ok
// SIG undefined FUN_145d9c372(void)

void FUN_145d9c372(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb8d460 != DAT_14cb8d48c) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb8d490;
    if (DAT_14cb8d498 != (undefined *)0x0) {
      puVar6 = DAT_14cb8d498;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb8d4a0 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb8d458 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb8d458 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb8d490;
        if (DAT_14cb8d498 != (undefined *)0x0) {
          puVar6 = DAT_14cb8d498;
        }
        lVar1 = DAT_14cb8d458 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb8d458 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d9c464();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d9c464 FUN_145d9c464 body=135 status=ok
// SIG undefined FUN_145d9c464(void)

void FUN_145d9c464(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb8d458;
  if (DAT_14cb8d48c != 0) {
    *(int *)(DAT_14cb8d458 + (longlong)DAT_14cb8d488 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb8d48c) {
    iVar4 = DAT_14cb8d488;
  }
  puVar1[1] = iVar4;
  DAT_14cb8d48c = DAT_14cb8d48c + 1;
  puVar5 = &DAT_14cb8d468;
  if (DAT_14cb8d478 != (undefined *)0x0) {
    puVar5 = DAT_14cb8d478;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb8d488 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d9c4ec FUN_145d9c4ec body=114 status=ok
// SIG undefined FUN_145d9c4ec(void)

void FUN_145d9c4ec(void)

{
  longlong *plVar1;
  
  FUN_14610e226();
  FUN_145d9c55e(DAT_14cb8d5b4);
  if (DAT_14cb8d540 == &DAT_14cb8d5b0) {
    DAT_14cb8d540 = (undefined4 *)0x0;
  }
  if (DAT_14cb8d5f0 != 0) {
    plVar1 = &DAT_14cb8d610;
    if (DAT_14cb8d600 != (longlong *)0x0) {
      plVar1 = DAT_14cb8d600;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb8d5d8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d9c55e FUN_145d9c55e body=242 status=ok
// SIG undefined FUN_145d9c55e(void)

void FUN_145d9c55e(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb8d550 != DAT_14cb8d57c) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb8d580;
    if (DAT_14cb8d588 != (undefined *)0x0) {
      puVar6 = DAT_14cb8d588;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb8d590 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb8d548 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb8d548 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb8d580;
        if (DAT_14cb8d588 != (undefined *)0x0) {
          puVar6 = DAT_14cb8d588;
        }
        lVar1 = DAT_14cb8d548 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb8d548 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d9c650();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d9c650 FUN_145d9c650 body=135 status=ok
// SIG undefined FUN_145d9c650(void)

void FUN_145d9c650(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb8d548;
  if (DAT_14cb8d57c != 0) {
    *(int *)(DAT_14cb8d548 + (longlong)DAT_14cb8d578 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb8d57c) {
    iVar4 = DAT_14cb8d578;
  }
  puVar1[1] = iVar4;
  DAT_14cb8d57c = DAT_14cb8d57c + 1;
  puVar5 = &DAT_14cb8d558;
  if (DAT_14cb8d568 != (undefined *)0x0) {
    puVar5 = DAT_14cb8d568;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb8d578 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d9c6d8 FUN_145d9c6d8 body=114 status=ok
// SIG undefined FUN_145d9c6d8(void)

void FUN_145d9c6d8(void)

{
  longlong *plVar1;
  
  FUN_14107dd82();
  FUN_145d9c74a(DAT_14cb8d854);
  if (DAT_14cb8d7e0 == &DAT_14cb8d850) {
    DAT_14cb8d7e0 = (undefined4 *)0x0;
  }
  if (DAT_14cb8d890 != 0) {
    plVar1 = &DAT_14cb8d8b0;
    if (DAT_14cb8d8a0 != (longlong *)0x0) {
      plVar1 = DAT_14cb8d8a0;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb8d878 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d9c74a FUN_145d9c74a body=242 status=ok
// SIG undefined FUN_145d9c74a(void)

void FUN_145d9c74a(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb8d7f0 != DAT_14cb8d81c) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb8d820;
    if (DAT_14cb8d828 != (undefined *)0x0) {
      puVar6 = DAT_14cb8d828;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb8d830 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb8d7e8 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb8d7e8 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb8d820;
        if (DAT_14cb8d828 != (undefined *)0x0) {
          puVar6 = DAT_14cb8d828;
        }
        lVar1 = DAT_14cb8d7e8 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb8d7e8 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d9c83c();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d9c83c FUN_145d9c83c body=135 status=ok
// SIG undefined FUN_145d9c83c(void)

void FUN_145d9c83c(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb8d7e8;
  if (DAT_14cb8d81c != 0) {
    *(int *)(DAT_14cb8d7e8 + (longlong)DAT_14cb8d818 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb8d81c) {
    iVar4 = DAT_14cb8d818;
  }
  puVar1[1] = iVar4;
  DAT_14cb8d81c = DAT_14cb8d81c + 1;
  puVar5 = &DAT_14cb8d7f8;
  if (DAT_14cb8d808 != (undefined *)0x0) {
    puVar5 = DAT_14cb8d808;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb8d818 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d9c8c4 FUN_145d9c8c4 body=114 status=ok
// SIG undefined FUN_145d9c8c4(void)

void FUN_145d9c8c4(void)

{
  longlong *plVar1;
  
  FUN_140de97ca();
  FUN_145d9c936(DAT_14cb8da04);
  if (DAT_14cb8d990 == &DAT_14cb8da00) {
    DAT_14cb8d990 = (undefined4 *)0x0;
  }
  if (DAT_14cb8da40 != 0) {
    plVar1 = &DAT_14cb8da60;
    if (DAT_14cb8da50 != (longlong *)0x0) {
      plVar1 = DAT_14cb8da50;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb8da28 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d9c936 FUN_145d9c936 body=242 status=ok
// SIG undefined FUN_145d9c936(void)

void FUN_145d9c936(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb8d9a0 != DAT_14cb8d9cc) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb8d9d0;
    if (DAT_14cb8d9d8 != (undefined *)0x0) {
      puVar6 = DAT_14cb8d9d8;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb8d9e0 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb8d998 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb8d998 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb8d9d0;
        if (DAT_14cb8d9d8 != (undefined *)0x0) {
          puVar6 = DAT_14cb8d9d8;
        }
        lVar1 = DAT_14cb8d998 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb8d998 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d9ca28();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d9ca28 FUN_145d9ca28 body=135 status=ok
// SIG undefined FUN_145d9ca28(void)

void FUN_145d9ca28(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb8d998;
  if (DAT_14cb8d9cc != 0) {
    *(int *)(DAT_14cb8d998 + (longlong)DAT_14cb8d9c8 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb8d9cc) {
    iVar4 = DAT_14cb8d9c8;
  }
  puVar1[1] = iVar4;
  DAT_14cb8d9cc = DAT_14cb8d9cc + 1;
  puVar5 = &DAT_14cb8d9a8;
  if (DAT_14cb8d9b8 != (undefined *)0x0) {
    puVar5 = DAT_14cb8d9b8;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb8d9c8 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d9cab0 FUN_145d9cab0 body=114 status=ok
// SIG undefined FUN_145d9cab0(void)

void FUN_145d9cab0(void)

{
  longlong *plVar1;
  
  FUN_14610216a();
  FUN_145d9cb22(DAT_14cb91df4);
  if (DAT_14cb91d80 == &DAT_14cb91df0) {
    DAT_14cb91d80 = (undefined4 *)0x0;
  }
  if (DAT_14cb91e30 != 0) {
    plVar1 = &DAT_14cb91e50;
    if (DAT_14cb91e40 != (longlong *)0x0) {
      plVar1 = DAT_14cb91e40;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb91e18 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d9cb22 FUN_145d9cb22 body=242 status=ok
// SIG undefined FUN_145d9cb22(void)

void FUN_145d9cb22(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb91d90 != DAT_14cb91dbc) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb91dc0;
    if (DAT_14cb91dc8 != (undefined *)0x0) {
      puVar6 = DAT_14cb91dc8;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb91dd0 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb91d88 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb91d88 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb91dc0;
        if (DAT_14cb91dc8 != (undefined *)0x0) {
          puVar6 = DAT_14cb91dc8;
        }
        lVar1 = DAT_14cb91d88 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb91d88 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d9cc14();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d9cc14 FUN_145d9cc14 body=135 status=ok
// SIG undefined FUN_145d9cc14(void)

void FUN_145d9cc14(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb91d88;
  if (DAT_14cb91dbc != 0) {
    *(int *)(DAT_14cb91d88 + (longlong)DAT_14cb91db8 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb91dbc) {
    iVar4 = DAT_14cb91db8;
  }
  puVar1[1] = iVar4;
  DAT_14cb91dbc = DAT_14cb91dbc + 1;
  puVar5 = &DAT_14cb91d98;
  if (DAT_14cb91da8 != (undefined *)0x0) {
    puVar5 = DAT_14cb91da8;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb91db8 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d9cc9c FUN_145d9cc9c body=114 status=ok
// SIG undefined FUN_145d9cc9c(void)

void FUN_145d9cc9c(void)

{
  longlong *plVar1;
  
  FUN_146102900();
  FUN_145d9cd0e(DAT_14cb930a4);
  if (DAT_14cb93028 == &DAT_14cb930a0) {
    DAT_14cb93028 = (undefined4 *)0x0;
  }
  if (DAT_14cb930e0 != 0) {
    plVar1 = &DAT_14cb93100;
    if (DAT_14cb930f0 != (longlong *)0x0) {
      plVar1 = DAT_14cb930f0;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb930c8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d9cd0e FUN_145d9cd0e body=242 status=ok
// SIG undefined FUN_145d9cd0e(void)

void FUN_145d9cd0e(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb93038 != DAT_14cb93064) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb93068;
    if (DAT_14cb93070 != (undefined *)0x0) {
      puVar6 = DAT_14cb93070;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb93078 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb93030 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb93030 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb93068;
        if (DAT_14cb93070 != (undefined *)0x0) {
          puVar6 = DAT_14cb93070;
        }
        lVar1 = DAT_14cb93030 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb93030 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d9ce00();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d9ce00 FUN_145d9ce00 body=135 status=ok
// SIG undefined FUN_145d9ce00(void)

void FUN_145d9ce00(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb93030;
  if (DAT_14cb93064 != 0) {
    *(int *)(DAT_14cb93030 + (longlong)DAT_14cb93060 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb93064) {
    iVar4 = DAT_14cb93060;
  }
  puVar1[1] = iVar4;
  DAT_14cb93064 = DAT_14cb93064 + 1;
  puVar5 = &DAT_14cb93040;
  if (DAT_14cb93050 != (undefined *)0x0) {
    puVar5 = DAT_14cb93050;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb93060 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d9ce88 FUN_145d9ce88 body=114 status=ok
// SIG undefined FUN_145d9ce88(void)

void FUN_145d9ce88(void)

{
  longlong *plVar1;
  
  FUN_140ef3cfa();
  FUN_145d9cefa(DAT_14cbc2954);
  if (DAT_14cbc28d8 == &DAT_14cbc2950) {
    DAT_14cbc28d8 = (undefined4 *)0x0;
  }
  if (DAT_14cbc2990 != 0) {
    plVar1 = &DAT_14cbc29b0;
    if (DAT_14cbc29a0 != (longlong *)0x0) {
      plVar1 = DAT_14cbc29a0;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cbc2978 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d9cefa FUN_145d9cefa body=242 status=ok
// SIG undefined FUN_145d9cefa(void)

void FUN_145d9cefa(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cbc28e8 != DAT_14cbc2914) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cbc2918;
    if (DAT_14cbc2920 != (undefined *)0x0) {
      puVar6 = DAT_14cbc2920;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cbc2928 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cbc28e0 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cbc28e0 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cbc2918;
        if (DAT_14cbc2920 != (undefined *)0x0) {
          puVar6 = DAT_14cbc2920;
        }
        lVar1 = DAT_14cbc28e0 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cbc28e0 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d9cfec();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d9cfec FUN_145d9cfec body=135 status=ok
// SIG undefined FUN_145d9cfec(void)

void FUN_145d9cfec(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cbc28e0;
  if (DAT_14cbc2914 != 0) {
    *(int *)(DAT_14cbc28e0 + (longlong)DAT_14cbc2910 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cbc2914) {
    iVar4 = DAT_14cbc2910;
  }
  puVar1[1] = iVar4;
  DAT_14cbc2914 = DAT_14cbc2914 + 1;
  puVar5 = &DAT_14cbc28f0;
  if (DAT_14cbc2900 != (undefined *)0x0) {
    puVar5 = DAT_14cbc2900;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cbc2910 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d9d074 FUN_145d9d074 body=114 status=ok
// SIG undefined FUN_145d9d074(void)

void FUN_145d9d074(void)

{
  longlong *plVar1;
  
  FUN_145acd4d0();
  FUN_145d9d0e6(DAT_14cbc3bf4);
  if (DAT_14cbc3b78 == &DAT_14cbc3bf0) {
    DAT_14cbc3b78 = (undefined4 *)0x0;
  }
  if (DAT_14cbc3c30 != 0) {
    plVar1 = &DAT_14cbc3c50;
    if (DAT_14cbc3c40 != (longlong *)0x0) {
      plVar1 = DAT_14cbc3c40;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cbc3c18 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d9d0e6 FUN_145d9d0e6 body=242 status=ok
// SIG undefined FUN_145d9d0e6(void)

void FUN_145d9d0e6(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cbc3b88 != DAT_14cbc3bb4) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cbc3bb8;
    if (DAT_14cbc3bc0 != (undefined *)0x0) {
      puVar6 = DAT_14cbc3bc0;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cbc3bc8 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cbc3b80 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cbc3b80 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cbc3bb8;
        if (DAT_14cbc3bc0 != (undefined *)0x0) {
          puVar6 = DAT_14cbc3bc0;
        }
        lVar1 = DAT_14cbc3b80 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cbc3b80 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d9d1d8();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d9d1d8 FUN_145d9d1d8 body=135 status=ok
// SIG undefined FUN_145d9d1d8(void)

void FUN_145d9d1d8(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cbc3b80;
  if (DAT_14cbc3bb4 != 0) {
    *(int *)(DAT_14cbc3b80 + (longlong)DAT_14cbc3bb0 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cbc3bb4) {
    iVar4 = DAT_14cbc3bb0;
  }
  puVar1[1] = iVar4;
  DAT_14cbc3bb4 = DAT_14cbc3bb4 + 1;
  puVar5 = &DAT_14cbc3b90;
  if (DAT_14cbc3ba0 != (undefined *)0x0) {
    puVar5 = DAT_14cbc3ba0;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cbc3bb0 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d9d260 FUN_145d9d260 body=114 status=ok
// SIG undefined FUN_145d9d260(void)

void FUN_145d9d260(void)

{
  longlong *plVar1;
  
  FUN_1460dd256();
  FUN_145d9d2d2(DAT_14cbc5404);
  if (DAT_14cbc5390 == &DAT_14cbc5400) {
    DAT_14cbc5390 = (undefined4 *)0x0;
  }
  if (DAT_14cbc5440 != 0) {
    plVar1 = &DAT_14cbc5460;
    if (DAT_14cbc5450 != (longlong *)0x0) {
      plVar1 = DAT_14cbc5450;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cbc5428 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d9d2d2 FUN_145d9d2d2 body=242 status=ok
// SIG undefined FUN_145d9d2d2(void)

void FUN_145d9d2d2(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cbc53a0 != DAT_14cbc53cc) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cbc53d0;
    if (DAT_14cbc53d8 != (undefined *)0x0) {
      puVar6 = DAT_14cbc53d8;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cbc53e0 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cbc5398 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cbc5398 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cbc53d0;
        if (DAT_14cbc53d8 != (undefined *)0x0) {
          puVar6 = DAT_14cbc53d8;
        }
        lVar1 = DAT_14cbc5398 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cbc5398 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d9d3c4();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d9d3c4 FUN_145d9d3c4 body=135 status=ok
// SIG undefined FUN_145d9d3c4(void)

void FUN_145d9d3c4(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cbc5398;
  if (DAT_14cbc53cc != 0) {
    *(int *)(DAT_14cbc5398 + (longlong)DAT_14cbc53c8 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cbc53cc) {
    iVar4 = DAT_14cbc53c8;
  }
  puVar1[1] = iVar4;
  DAT_14cbc53cc = DAT_14cbc53cc + 1;
  puVar5 = &DAT_14cbc53a8;
  if (DAT_14cbc53b8 != (undefined *)0x0) {
    puVar5 = DAT_14cbc53b8;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cbc53c8 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d9d44c FUN_145d9d44c body=114 status=ok
// SIG undefined FUN_145d9d44c(void)

void FUN_145d9d44c(void)

{
  longlong *plVar1;
  
  FUN_145875d9a();
  FUN_145d9d4be(DAT_14cbc5554);
  if (DAT_14cbc54d8 == &DAT_14cbc5550) {
    DAT_14cbc54d8 = (undefined4 *)0x0;
  }
  if (DAT_14cbc5590 != 0) {
    plVar1 = &DAT_14cbc55b0;
    if (DAT_14cbc55a0 != (longlong *)0x0) {
      plVar1 = DAT_14cbc55a0;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cbc5578 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d9d4be FUN_145d9d4be body=242 status=ok
// SIG undefined FUN_145d9d4be(void)

void FUN_145d9d4be(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cbc54e8 != DAT_14cbc5514) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cbc5518;
    if (DAT_14cbc5520 != (undefined *)0x0) {
      puVar6 = DAT_14cbc5520;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cbc5528 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cbc54e0 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cbc54e0 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cbc5518;
        if (DAT_14cbc5520 != (undefined *)0x0) {
          puVar6 = DAT_14cbc5520;
        }
        lVar1 = DAT_14cbc54e0 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cbc54e0 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d9d5b0();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d9d5b0 FUN_145d9d5b0 body=135 status=ok
// SIG undefined FUN_145d9d5b0(void)

void FUN_145d9d5b0(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cbc54e0;
  if (DAT_14cbc5514 != 0) {
    *(int *)(DAT_14cbc54e0 + (longlong)DAT_14cbc5510 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cbc5514) {
    iVar4 = DAT_14cbc5510;
  }
  puVar1[1] = iVar4;
  DAT_14cbc5514 = DAT_14cbc5514 + 1;
  puVar5 = &DAT_14cbc54f0;
  if (DAT_14cbc5500 != (undefined *)0x0) {
    puVar5 = DAT_14cbc5500;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cbc5510 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d9d638 FUN_145d9d638 body=114 status=ok
// SIG undefined FUN_145d9d638(void)

void FUN_145d9d638(void)

{
  longlong *plVar1;
  
  FUN_14597fb9a();
  FUN_145d9d6aa(DAT_14cbc5c94);
  if (DAT_14cbc5c20 == &DAT_14cbc5c90) {
    DAT_14cbc5c20 = (undefined4 *)0x0;
  }
  if (DAT_14cbc5cd0 != 0) {
    plVar1 = &DAT_14cbc5cf0;
    if (DAT_14cbc5ce0 != (longlong *)0x0) {
      plVar1 = DAT_14cbc5ce0;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cbc5cb8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d9d6aa FUN_145d9d6aa body=242 status=ok
// SIG undefined FUN_145d9d6aa(void)

void FUN_145d9d6aa(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cbc5c30 != DAT_14cbc5c5c) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cbc5c60;
    if (DAT_14cbc5c68 != (undefined *)0x0) {
      puVar6 = DAT_14cbc5c68;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cbc5c70 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cbc5c28 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cbc5c28 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cbc5c60;
        if (DAT_14cbc5c68 != (undefined *)0x0) {
          puVar6 = DAT_14cbc5c68;
        }
        lVar1 = DAT_14cbc5c28 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cbc5c28 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d9d79c();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d9d79c FUN_145d9d79c body=135 status=ok
// SIG undefined FUN_145d9d79c(void)

void FUN_145d9d79c(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cbc5c28;
  if (DAT_14cbc5c5c != 0) {
    *(int *)(DAT_14cbc5c28 + (longlong)DAT_14cbc5c58 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cbc5c5c) {
    iVar4 = DAT_14cbc5c58;
  }
  puVar1[1] = iVar4;
  DAT_14cbc5c5c = DAT_14cbc5c5c + 1;
  puVar5 = &DAT_14cbc5c38;
  if (DAT_14cbc5c48 != (undefined *)0x0) {
    puVar5 = DAT_14cbc5c48;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cbc5c58 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d9d824 FUN_145d9d824 body=114 status=ok
// SIG undefined FUN_145d9d824(void)

void FUN_145d9d824(void)

{
  longlong *plVar1;
  
  FUN_1458ef67e();
  FUN_145d9d896(DAT_14cbc5da4);
  if (DAT_14cbc5d30 == &DAT_14cbc5da0) {
    DAT_14cbc5d30 = (undefined4 *)0x0;
  }
  if (DAT_14cbc5de0 != 0) {
    plVar1 = &DAT_14cbc5e00;
    if (DAT_14cbc5df0 != (longlong *)0x0) {
      plVar1 = DAT_14cbc5df0;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cbc5dc8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d9d896 FUN_145d9d896 body=242 status=ok
// SIG undefined FUN_145d9d896(void)

void FUN_145d9d896(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cbc5d40 != DAT_14cbc5d6c) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cbc5d70;
    if (DAT_14cbc5d78 != (undefined *)0x0) {
      puVar6 = DAT_14cbc5d78;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cbc5d80 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cbc5d38 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cbc5d38 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cbc5d70;
        if (DAT_14cbc5d78 != (undefined *)0x0) {
          puVar6 = DAT_14cbc5d78;
        }
        lVar1 = DAT_14cbc5d38 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cbc5d38 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d9d988();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d9d988 FUN_145d9d988 body=135 status=ok
// SIG undefined FUN_145d9d988(void)

void FUN_145d9d988(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cbc5d38;
  if (DAT_14cbc5d6c != 0) {
    *(int *)(DAT_14cbc5d38 + (longlong)DAT_14cbc5d68 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cbc5d6c) {
    iVar4 = DAT_14cbc5d68;
  }
  puVar1[1] = iVar4;
  DAT_14cbc5d6c = DAT_14cbc5d6c + 1;
  puVar5 = &DAT_14cbc5d48;
  if (DAT_14cbc5d58 != (undefined *)0x0) {
    puVar5 = DAT_14cbc5d58;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cbc5d68 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d9da10 FUN_145d9da10 body=114 status=ok
// SIG undefined FUN_145d9da10(void)

void FUN_145d9da10(void)

{
  longlong *plVar1;
  
  FUN_145acd6d8();
  FUN_145d9da82(DAT_14cbc6384);
  if (DAT_14cbc6308 == &DAT_14cbc6380) {
    DAT_14cbc6308 = (undefined4 *)0x0;
  }
  if (DAT_14cbc63c0 != 0) {
    plVar1 = &DAT_14cbc63e0;
    if (DAT_14cbc63d0 != (longlong *)0x0) {
      plVar1 = DAT_14cbc63d0;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cbc63a8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d9da82 FUN_145d9da82 body=242 status=ok
// SIG undefined FUN_145d9da82(void)

void FUN_145d9da82(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cbc6318 != DAT_14cbc6344) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cbc6348;
    if (DAT_14cbc6350 != (undefined *)0x0) {
      puVar6 = DAT_14cbc6350;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cbc6358 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cbc6310 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cbc6310 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cbc6348;
        if (DAT_14cbc6350 != (undefined *)0x0) {
          puVar6 = DAT_14cbc6350;
        }
        lVar1 = DAT_14cbc6310 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cbc6310 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d9db74();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d9db74 FUN_145d9db74 body=135 status=ok
// SIG undefined FUN_145d9db74(void)

void FUN_145d9db74(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cbc6310;
  if (DAT_14cbc6344 != 0) {
    *(int *)(DAT_14cbc6310 + (longlong)DAT_14cbc6340 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cbc6344) {
    iVar4 = DAT_14cbc6340;
  }
  puVar1[1] = iVar4;
  DAT_14cbc6344 = DAT_14cbc6344 + 1;
  puVar5 = &DAT_14cbc6320;
  if (DAT_14cbc6330 != (undefined *)0x0) {
    puVar5 = DAT_14cbc6330;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cbc6340 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d9dbfc FUN_145d9dbfc body=114 status=ok
// SIG undefined FUN_145d9dbfc(void)

void FUN_145d9dbfc(void)

{
  longlong *plVar1;
  
  FUN_145ad1492();
  FUN_145d9dc6e(DAT_14cbc6474);
  if (DAT_14cbc6400 == &DAT_14cbc6470) {
    DAT_14cbc6400 = (undefined4 *)0x0;
  }
  if (DAT_14cbc64b0 != 0) {
    plVar1 = &DAT_14cbc64d0;
    if (DAT_14cbc64c0 != (longlong *)0x0) {
      plVar1 = DAT_14cbc64c0;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cbc6498 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d9dc6e FUN_145d9dc6e body=242 status=ok
// SIG undefined FUN_145d9dc6e(void)

void FUN_145d9dc6e(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cbc6410 != DAT_14cbc643c) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cbc6440;
    if (DAT_14cbc6448 != (undefined *)0x0) {
      puVar6 = DAT_14cbc6448;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cbc6450 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cbc6408 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cbc6408 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cbc6440;
        if (DAT_14cbc6448 != (undefined *)0x0) {
          puVar6 = DAT_14cbc6448;
        }
        lVar1 = DAT_14cbc6408 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cbc6408 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d9dd60();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d9dd60 FUN_145d9dd60 body=135 status=ok
// SIG undefined FUN_145d9dd60(void)

void FUN_145d9dd60(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cbc6408;
  if (DAT_14cbc643c != 0) {
    *(int *)(DAT_14cbc6408 + (longlong)DAT_14cbc6438 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cbc643c) {
    iVar4 = DAT_14cbc6438;
  }
  puVar1[1] = iVar4;
  DAT_14cbc643c = DAT_14cbc643c + 1;
  puVar5 = &DAT_14cbc6418;
  if (DAT_14cbc6428 != (undefined *)0x0) {
    puVar5 = DAT_14cbc6428;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cbc6438 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d9dde8 FUN_145d9dde8 body=114 status=ok
// SIG undefined FUN_145d9dde8(void)

void FUN_145d9dde8(void)

{
  longlong *plVar1;
  
  FUN_1410fa178();
  FUN_145d9de5a(DAT_14cbc8b24);
  if (DAT_14cbc8ab0 == &DAT_14cbc8b20) {
    DAT_14cbc8ab0 = (undefined4 *)0x0;
  }
  if (DAT_14cbc8b60 != 0) {
    plVar1 = &DAT_14cbc8b80;
    if (DAT_14cbc8b70 != (longlong *)0x0) {
      plVar1 = DAT_14cbc8b70;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cbc8b48 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d9de5a FUN_145d9de5a body=242 status=ok
// SIG undefined FUN_145d9de5a(void)

void FUN_145d9de5a(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cbc8ac0 != DAT_14cbc8aec) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cbc8af0;
    if (DAT_14cbc8af8 != (undefined *)0x0) {
      puVar6 = DAT_14cbc8af8;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cbc8b00 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cbc8ab8 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cbc8ab8 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cbc8af0;
        if (DAT_14cbc8af8 != (undefined *)0x0) {
          puVar6 = DAT_14cbc8af8;
        }
        lVar1 = DAT_14cbc8ab8 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cbc8ab8 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d9df4c();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d9df4c FUN_145d9df4c body=135 status=ok
// SIG undefined FUN_145d9df4c(void)

void FUN_145d9df4c(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cbc8ab8;
  if (DAT_14cbc8aec != 0) {
    *(int *)(DAT_14cbc8ab8 + (longlong)DAT_14cbc8ae8 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cbc8aec) {
    iVar4 = DAT_14cbc8ae8;
  }
  puVar1[1] = iVar4;
  DAT_14cbc8aec = DAT_14cbc8aec + 1;
  puVar5 = &DAT_14cbc8ac8;
  if (DAT_14cbc8ad8 != (undefined *)0x0) {
    puVar5 = DAT_14cbc8ad8;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cbc8ae8 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d9dfd4 FUN_145d9dfd4 body=114 status=ok
// SIG undefined FUN_145d9dfd4(void)

void FUN_145d9dfd4(void)

{
  longlong *plVar1;
  
  FUN_140d1f224();
  FUN_145d9e046(DAT_14cbc8ce4);
  if (DAT_14cbc8c70 == &DAT_14cbc8ce0) {
    DAT_14cbc8c70 = (undefined4 *)0x0;
  }
  if (DAT_14cbc8d20 != 0) {
    plVar1 = &DAT_14cbc8d40;
    if (DAT_14cbc8d30 != (longlong *)0x0) {
      plVar1 = DAT_14cbc8d30;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cbc8d08 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d9e046 FUN_145d9e046 body=242 status=ok
// SIG undefined FUN_145d9e046(void)

void FUN_145d9e046(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cbc8c80 != DAT_14cbc8cac) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cbc8cb0;
    if (DAT_14cbc8cb8 != (undefined *)0x0) {
      puVar6 = DAT_14cbc8cb8;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cbc8cc0 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cbc8c78 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cbc8c78 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cbc8cb0;
        if (DAT_14cbc8cb8 != (undefined *)0x0) {
          puVar6 = DAT_14cbc8cb8;
        }
        lVar1 = DAT_14cbc8c78 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cbc8c78 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d9e138();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d9e138 FUN_145d9e138 body=135 status=ok
// SIG undefined FUN_145d9e138(void)

void FUN_145d9e138(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cbc8c78;
  if (DAT_14cbc8cac != 0) {
    *(int *)(DAT_14cbc8c78 + (longlong)DAT_14cbc8ca8 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cbc8cac) {
    iVar4 = DAT_14cbc8ca8;
  }
  puVar1[1] = iVar4;
  DAT_14cbc8cac = DAT_14cbc8cac + 1;
  puVar5 = &DAT_14cbc8c88;
  if (DAT_14cbc8c98 != (undefined *)0x0) {
    puVar5 = DAT_14cbc8c98;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cbc8ca8 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d9e1c0 FUN_145d9e1c0 body=114 status=ok
// SIG undefined FUN_145d9e1c0(void)

void FUN_145d9e1c0(void)

{
  longlong *plVar1;
  
  FUN_146103096();
  FUN_145d9e232(DAT_14cbc9094);
  if (DAT_14cbc9018 == &DAT_14cbc9090) {
    DAT_14cbc9018 = (undefined4 *)0x0;
  }
  if (DAT_14cbc90d0 != 0) {
    plVar1 = &DAT_14cbc90f0;
    if (DAT_14cbc90e0 != (longlong *)0x0) {
      plVar1 = DAT_14cbc90e0;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cbc90b8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d9e232 FUN_145d9e232 body=242 status=ok
// SIG undefined FUN_145d9e232(void)

void FUN_145d9e232(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cbc9028 != DAT_14cbc9054) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cbc9058;
    if (DAT_14cbc9060 != (undefined *)0x0) {
      puVar6 = DAT_14cbc9060;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cbc9068 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cbc9020 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cbc9020 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cbc9058;
        if (DAT_14cbc9060 != (undefined *)0x0) {
          puVar6 = DAT_14cbc9060;
        }
        lVar1 = DAT_14cbc9020 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cbc9020 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d9e324();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d9e324 FUN_145d9e324 body=135 status=ok
// SIG undefined FUN_145d9e324(void)

void FUN_145d9e324(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cbc9020;
  if (DAT_14cbc9054 != 0) {
    *(int *)(DAT_14cbc9020 + (longlong)DAT_14cbc9050 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cbc9054) {
    iVar4 = DAT_14cbc9050;
  }
  puVar1[1] = iVar4;
  DAT_14cbc9054 = DAT_14cbc9054 + 1;
  puVar5 = &DAT_14cbc9030;
  if (DAT_14cbc9040 != (undefined *)0x0) {
    puVar5 = DAT_14cbc9040;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cbc9050 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d9e3ac FUN_145d9e3ac body=114 status=ok
// SIG undefined FUN_145d9e3ac(void)

void FUN_145d9e3ac(void)

{
  longlong *plVar1;
  
  FUN_14610382c();
  FUN_145d9e41e(DAT_14cbc9564);
  if (DAT_14cbc94f0 == &DAT_14cbc9560) {
    DAT_14cbc94f0 = (undefined4 *)0x0;
  }
  if (DAT_14cbc95a0 != 0) {
    plVar1 = &DAT_14cbc95c0;
    if (DAT_14cbc95b0 != (longlong *)0x0) {
      plVar1 = DAT_14cbc95b0;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cbc9588 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d9e41e FUN_145d9e41e body=242 status=ok
// SIG undefined FUN_145d9e41e(void)

void FUN_145d9e41e(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cbc9500 != DAT_14cbc952c) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cbc9530;
    if (DAT_14cbc9538 != (undefined *)0x0) {
      puVar6 = DAT_14cbc9538;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cbc9540 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cbc94f8 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cbc94f8 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cbc9530;
        if (DAT_14cbc9538 != (undefined *)0x0) {
          puVar6 = DAT_14cbc9538;
        }
        lVar1 = DAT_14cbc94f8 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cbc94f8 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d9e510();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d9e510 FUN_145d9e510 body=135 status=ok
// SIG undefined FUN_145d9e510(void)

void FUN_145d9e510(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cbc94f8;
  if (DAT_14cbc952c != 0) {
    *(int *)(DAT_14cbc94f8 + (longlong)DAT_14cbc9528 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cbc952c) {
    iVar4 = DAT_14cbc9528;
  }
  puVar1[1] = iVar4;
  DAT_14cbc952c = DAT_14cbc952c + 1;
  puVar5 = &DAT_14cbc9508;
  if (DAT_14cbc9518 != (undefined *)0x0) {
    puVar5 = DAT_14cbc9518;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cbc9528 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d9e598 FUN_145d9e598 body=114 status=ok
// SIG undefined FUN_145d9e598(void)

void FUN_145d9e598(void)

{
  longlong *plVar1;
  
  FUN_14597fda2();
  FUN_145d9e60a(DAT_14cbcb164);
  if (DAT_14cbcb0e8 == &DAT_14cbcb160) {
    DAT_14cbcb0e8 = (undefined4 *)0x0;
  }
  if (DAT_14cbcb1a0 != 0) {
    plVar1 = &DAT_14cbcb1c0;
    if (DAT_14cbcb1b0 != (longlong *)0x0) {
      plVar1 = DAT_14cbcb1b0;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cbcb188 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d9e60a FUN_145d9e60a body=242 status=ok
// SIG undefined FUN_145d9e60a(void)

void FUN_145d9e60a(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cbcb0f8 != DAT_14cbcb124) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cbcb128;
    if (DAT_14cbcb130 != (undefined *)0x0) {
      puVar6 = DAT_14cbcb130;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cbcb138 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cbcb0f0 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cbcb0f0 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cbcb128;
        if (DAT_14cbcb130 != (undefined *)0x0) {
          puVar6 = DAT_14cbcb130;
        }
        lVar1 = DAT_14cbcb0f0 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cbcb0f0 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d9e6fc();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d9e6fc FUN_145d9e6fc body=135 status=ok
// SIG undefined FUN_145d9e6fc(void)

void FUN_145d9e6fc(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cbcb0f0;
  if (DAT_14cbcb124 != 0) {
    *(int *)(DAT_14cbcb0f0 + (longlong)DAT_14cbcb120 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cbcb124) {
    iVar4 = DAT_14cbcb120;
  }
  puVar1[1] = iVar4;
  DAT_14cbcb124 = DAT_14cbcb124 + 1;
  puVar5 = &DAT_14cbcb100;
  if (DAT_14cbcb110 != (undefined *)0x0) {
    puVar5 = DAT_14cbcb110;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cbcb120 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d9e784 FUN_145d9e784 body=114 status=ok
// SIG undefined FUN_145d9e784(void)

void FUN_145d9e784(void)

{
  longlong *plVar1;
  
  FUN_14597ffaa();
  FUN_145d9e7f6(DAT_14cbd0074);
  if (DAT_14cbcfff8 == &DAT_14cbd0070) {
    DAT_14cbcfff8 = (undefined4 *)0x0;
  }
  if (DAT_14cbd00b0 != 0) {
    plVar1 = &DAT_14cbd00d0;
    if (DAT_14cbd00c0 != (longlong *)0x0) {
      plVar1 = DAT_14cbd00c0;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cbd0098 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d9e7f6 FUN_145d9e7f6 body=242 status=ok
// SIG undefined FUN_145d9e7f6(void)

void FUN_145d9e7f6(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cbd0008 != DAT_14cbd0034) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cbd0038;
    if (DAT_14cbd0040 != (undefined *)0x0) {
      puVar6 = DAT_14cbd0040;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cbd0048 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cbd0000 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cbd0000 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cbd0038;
        if (DAT_14cbd0040 != (undefined *)0x0) {
          puVar6 = DAT_14cbd0040;
        }
        lVar1 = DAT_14cbd0000 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cbd0000 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d9e8e8();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d9e8e8 FUN_145d9e8e8 body=135 status=ok
// SIG undefined FUN_145d9e8e8(void)

void FUN_145d9e8e8(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cbd0000;
  if (DAT_14cbd0034 != 0) {
    *(int *)(DAT_14cbd0000 + (longlong)DAT_14cbd0030 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cbd0034) {
    iVar4 = DAT_14cbd0030;
  }
  puVar1[1] = iVar4;
  DAT_14cbd0034 = DAT_14cbd0034 + 1;
  puVar5 = &DAT_14cbd0010;
  if (DAT_14cbd0020 != (undefined *)0x0) {
    puVar5 = DAT_14cbd0020;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cbd0030 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d9e970 FUN_145d9e970 body=114 status=ok
// SIG undefined FUN_145d9e970(void)

void FUN_145d9e970(void)

{
  longlong *plVar1;
  
  FUN_146103fc2();
  FUN_145d9e9e2(DAT_14cbd32e4);
  if (DAT_14cbd3268 == &DAT_14cbd32e0) {
    DAT_14cbd3268 = (undefined4 *)0x0;
  }
  if (DAT_14cbd3320 != 0) {
    plVar1 = &DAT_14cbd3340;
    if (DAT_14cbd3330 != (longlong *)0x0) {
      plVar1 = DAT_14cbd3330;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cbd3308 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d9e9e2 FUN_145d9e9e2 body=242 status=ok
// SIG undefined FUN_145d9e9e2(void)

void FUN_145d9e9e2(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cbd3278 != DAT_14cbd32a4) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cbd32a8;
    if (DAT_14cbd32b0 != (undefined *)0x0) {
      puVar6 = DAT_14cbd32b0;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cbd32b8 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cbd3270 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cbd3270 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cbd32a8;
        if (DAT_14cbd32b0 != (undefined *)0x0) {
          puVar6 = DAT_14cbd32b0;
        }
        lVar1 = DAT_14cbd3270 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cbd3270 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d9ead4();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d9ead4 FUN_145d9ead4 body=135 status=ok
// SIG undefined FUN_145d9ead4(void)

void FUN_145d9ead4(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cbd3270;
  if (DAT_14cbd32a4 != 0) {
    *(int *)(DAT_14cbd3270 + (longlong)DAT_14cbd32a0 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cbd32a4) {
    iVar4 = DAT_14cbd32a0;
  }
  puVar1[1] = iVar4;
  DAT_14cbd32a4 = DAT_14cbd32a4 + 1;
  puVar5 = &DAT_14cbd3280;
  if (DAT_14cbd3290 != (undefined *)0x0) {
    puVar5 = DAT_14cbd3290;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cbd32a0 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d9eb5c FUN_145d9eb5c body=114 status=ok
// SIG undefined FUN_145d9eb5c(void)

void FUN_145d9eb5c(void)

{
  longlong *plVar1;
  
  FUN_145b26f76();
  FUN_145d9ebce(DAT_14cbd8f84);
  if (DAT_14cbd8f08 == &DAT_14cbd8f80) {
    DAT_14cbd8f08 = (undefined4 *)0x0;
  }
  if (DAT_14cbd8fc0 != 0) {
    plVar1 = &DAT_14cbd8fe0;
    if (DAT_14cbd8fd0 != (longlong *)0x0) {
      plVar1 = DAT_14cbd8fd0;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cbd8fa8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d9ebce FUN_145d9ebce body=242 status=ok
// SIG undefined FUN_145d9ebce(void)

void FUN_145d9ebce(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cbd8f18 != DAT_14cbd8f44) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cbd8f48;
    if (DAT_14cbd8f50 != (undefined *)0x0) {
      puVar6 = DAT_14cbd8f50;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cbd8f58 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cbd8f10 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cbd8f10 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cbd8f48;
        if (DAT_14cbd8f50 != (undefined *)0x0) {
          puVar6 = DAT_14cbd8f50;
        }
        lVar1 = DAT_14cbd8f10 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cbd8f10 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d9ecc0();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d9ecc0 FUN_145d9ecc0 body=135 status=ok
// SIG undefined FUN_145d9ecc0(void)

void FUN_145d9ecc0(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cbd8f10;
  if (DAT_14cbd8f44 != 0) {
    *(int *)(DAT_14cbd8f10 + (longlong)DAT_14cbd8f40 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cbd8f44) {
    iVar4 = DAT_14cbd8f40;
  }
  puVar1[1] = iVar4;
  DAT_14cbd8f44 = DAT_14cbd8f44 + 1;
  puVar5 = &DAT_14cbd8f20;
  if (DAT_14cbd8f30 != (undefined *)0x0) {
    puVar5 = DAT_14cbd8f30;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cbd8f40 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d9ed48 FUN_145d9ed48 body=114 status=ok
// SIG undefined FUN_145d9ed48(void)

void FUN_145d9ed48(void)

{
  longlong *plVar1;
  
  FUN_145966846();
  FUN_145d9edba(DAT_14cbe4134);
  if (DAT_14cbe40b8 == &DAT_14cbe4130) {
    DAT_14cbe40b8 = (undefined4 *)0x0;
  }
  if (DAT_14cbe4170 != 0) {
    plVar1 = &DAT_14cbe4190;
    if (DAT_14cbe4180 != (longlong *)0x0) {
      plVar1 = DAT_14cbe4180;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cbe4158 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d9edba FUN_145d9edba body=242 status=ok
// SIG undefined FUN_145d9edba(void)

void FUN_145d9edba(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cbe40c8 != DAT_14cbe40f4) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cbe40f8;
    if (DAT_14cbe4100 != (undefined *)0x0) {
      puVar6 = DAT_14cbe4100;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cbe4108 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cbe40c0 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cbe40c0 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cbe40f8;
        if (DAT_14cbe4100 != (undefined *)0x0) {
          puVar6 = DAT_14cbe4100;
        }
        lVar1 = DAT_14cbe40c0 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cbe40c0 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d9eeac();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d9eeac FUN_145d9eeac body=135 status=ok
// SIG undefined FUN_145d9eeac(void)

void FUN_145d9eeac(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cbe40c0;
  if (DAT_14cbe40f4 != 0) {
    *(int *)(DAT_14cbe40c0 + (longlong)DAT_14cbe40f0 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cbe40f4) {
    iVar4 = DAT_14cbe40f0;
  }
  puVar1[1] = iVar4;
  DAT_14cbe40f4 = DAT_14cbe40f4 + 1;
  puVar5 = &DAT_14cbe40d0;
  if (DAT_14cbe40e0 != (undefined *)0x0) {
    puVar5 = DAT_14cbe40e0;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cbe40f0 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d9ef34 FUN_145d9ef34 body=114 status=ok
// SIG undefined FUN_145d9ef34(void)

void FUN_145d9ef34(void)

{
  longlong *plVar1;
  
  FUN_146104758();
  FUN_145d9efa6(DAT_14cbe4254);
  if (DAT_14cbe41d8 == &DAT_14cbe4250) {
    DAT_14cbe41d8 = (undefined4 *)0x0;
  }
  if (DAT_14cbe4290 != 0) {
    plVar1 = &DAT_14cbe42b0;
    if (DAT_14cbe42a0 != (longlong *)0x0) {
      plVar1 = DAT_14cbe42a0;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cbe4278 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d9efa6 FUN_145d9efa6 body=242 status=ok
// SIG undefined FUN_145d9efa6(void)

void FUN_145d9efa6(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cbe41e8 != DAT_14cbe4214) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cbe4218;
    if (DAT_14cbe4220 != (undefined *)0x0) {
      puVar6 = DAT_14cbe4220;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cbe4228 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cbe41e0 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cbe41e0 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cbe4218;
        if (DAT_14cbe4220 != (undefined *)0x0) {
          puVar6 = DAT_14cbe4220;
        }
        lVar1 = DAT_14cbe41e0 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cbe41e0 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d9f098();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d9f098 FUN_145d9f098 body=135 status=ok
// SIG undefined FUN_145d9f098(void)

void FUN_145d9f098(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cbe41e0;
  if (DAT_14cbe4214 != 0) {
    *(int *)(DAT_14cbe41e0 + (longlong)DAT_14cbe4210 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cbe4214) {
    iVar4 = DAT_14cbe4210;
  }
  puVar1[1] = iVar4;
  DAT_14cbe4214 = DAT_14cbe4214 + 1;
  puVar5 = &DAT_14cbe41f0;
  if (DAT_14cbe4200 != (undefined *)0x0) {
    puVar5 = DAT_14cbe4200;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cbe4210 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d9f120 FUN_145d9f120 body=114 status=ok
// SIG undefined FUN_145d9f120(void)

void FUN_145d9f120(void)

{
  longlong *plVar1;
  
  FUN_146104eee();
  FUN_145d9f192(DAT_14cbe4394);
  if (DAT_14cbe4318 == &DAT_14cbe4390) {
    DAT_14cbe4318 = (undefined4 *)0x0;
  }
  if (DAT_14cbe43d0 != 0) {
    plVar1 = &DAT_14cbe43f0;
    if (DAT_14cbe43e0 != (longlong *)0x0) {
      plVar1 = DAT_14cbe43e0;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cbe43b8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d9f192 FUN_145d9f192 body=242 status=ok
// SIG undefined FUN_145d9f192(void)

void FUN_145d9f192(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cbe4328 != DAT_14cbe4354) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cbe4358;
    if (DAT_14cbe4360 != (undefined *)0x0) {
      puVar6 = DAT_14cbe4360;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cbe4368 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cbe4320 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cbe4320 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cbe4358;
        if (DAT_14cbe4360 != (undefined *)0x0) {
          puVar6 = DAT_14cbe4360;
        }
        lVar1 = DAT_14cbe4320 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cbe4320 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d9f284();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d9f284 FUN_145d9f284 body=135 status=ok
// SIG undefined FUN_145d9f284(void)

void FUN_145d9f284(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cbe4320;
  if (DAT_14cbe4354 != 0) {
    *(int *)(DAT_14cbe4320 + (longlong)DAT_14cbe4350 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cbe4354) {
    iVar4 = DAT_14cbe4350;
  }
  puVar1[1] = iVar4;
  DAT_14cbe4354 = DAT_14cbe4354 + 1;
  puVar5 = &DAT_14cbe4330;
  if (DAT_14cbe4340 != (undefined *)0x0) {
    puVar5 = DAT_14cbe4340;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cbe4350 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d9f30c FUN_145d9f30c body=114 status=ok
// SIG undefined FUN_145d9f30c(void)

void FUN_145d9f30c(void)

{
  longlong *plVar1;
  
  FUN_146105684();
  FUN_145d9f37e(DAT_14cbe4484);
  if (DAT_14cbe4410 == &DAT_14cbe4480) {
    DAT_14cbe4410 = (undefined4 *)0x0;
  }
  if (DAT_14cbe44c0 != 0) {
    plVar1 = &DAT_14cbe44e0;
    if (DAT_14cbe44d0 != (longlong *)0x0) {
      plVar1 = DAT_14cbe44d0;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cbe44a8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d9f37e FUN_145d9f37e body=242 status=ok
// SIG undefined FUN_145d9f37e(void)

void FUN_145d9f37e(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cbe4420 != DAT_14cbe444c) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cbe4450;
    if (DAT_14cbe4458 != (undefined *)0x0) {
      puVar6 = DAT_14cbe4458;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cbe4460 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cbe4418 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cbe4418 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cbe4450;
        if (DAT_14cbe4458 != (undefined *)0x0) {
          puVar6 = DAT_14cbe4458;
        }
        lVar1 = DAT_14cbe4418 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cbe4418 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d9f470();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d9f470 FUN_145d9f470 body=135 status=ok
// SIG undefined FUN_145d9f470(void)

void FUN_145d9f470(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cbe4418;
  if (DAT_14cbe444c != 0) {
    *(int *)(DAT_14cbe4418 + (longlong)DAT_14cbe4448 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cbe444c) {
    iVar4 = DAT_14cbe4448;
  }
  puVar1[1] = iVar4;
  DAT_14cbe444c = DAT_14cbe444c + 1;
  puVar5 = &DAT_14cbe4428;
  if (DAT_14cbe4438 != (undefined *)0x0) {
    puVar5 = DAT_14cbe4438;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cbe4448 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d9f4f8 FUN_145d9f4f8 body=114 status=ok
// SIG undefined FUN_145d9f4f8(void)

void FUN_145d9f4f8(void)

{
  longlong *plVar1;
  
  FUN_145982f7c();
  FUN_145d9f56a(DAT_14cbe4814);
  if (DAT_14cbe47a0 == &DAT_14cbe4810) {
    DAT_14cbe47a0 = (undefined4 *)0x0;
  }
  if (DAT_14cbe4850 != 0) {
    plVar1 = &DAT_14cbe4870;
    if (DAT_14cbe4860 != (longlong *)0x0) {
      plVar1 = DAT_14cbe4860;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cbe4838 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d9f56a FUN_145d9f56a body=242 status=ok
// SIG undefined FUN_145d9f56a(void)

void FUN_145d9f56a(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cbe47b0 != DAT_14cbe47dc) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cbe47e0;
    if (DAT_14cbe47e8 != (undefined *)0x0) {
      puVar6 = DAT_14cbe47e8;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cbe47f0 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cbe47a8 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cbe47a8 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cbe47e0;
        if (DAT_14cbe47e8 != (undefined *)0x0) {
          puVar6 = DAT_14cbe47e8;
        }
        lVar1 = DAT_14cbe47a8 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cbe47a8 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d9f65c();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d9f65c FUN_145d9f65c body=135 status=ok
// SIG undefined FUN_145d9f65c(void)

void FUN_145d9f65c(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cbe47a8;
  if (DAT_14cbe47dc != 0) {
    *(int *)(DAT_14cbe47a8 + (longlong)DAT_14cbe47d8 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cbe47dc) {
    iVar4 = DAT_14cbe47d8;
  }
  puVar1[1] = iVar4;
  DAT_14cbe47dc = DAT_14cbe47dc + 1;
  puVar5 = &DAT_14cbe47b8;
  if (DAT_14cbe47c8 != (undefined *)0x0) {
    puVar5 = DAT_14cbe47c8;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cbe47d8 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d9f6e4 FUN_145d9f6e4 body=114 status=ok
// SIG undefined FUN_145d9f6e4(void)

void FUN_145d9f6e4(void)

{
  longlong *plVar1;
  
  FUN_140d476dc();
  FUN_145d9f756(DAT_14cbe6b04);
  if (DAT_14cbe6a90 == &DAT_14cbe6b00) {
    DAT_14cbe6a90 = (undefined4 *)0x0;
  }
  if (DAT_14cbe6b40 != 0) {
    plVar1 = &DAT_14cbe6b60;
    if (DAT_14cbe6b50 != (longlong *)0x0) {
      plVar1 = DAT_14cbe6b50;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cbe6b28 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d9f756 FUN_145d9f756 body=242 status=ok
// SIG undefined FUN_145d9f756(void)

void FUN_145d9f756(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cbe6aa0 != DAT_14cbe6acc) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cbe6ad0;
    if (DAT_14cbe6ad8 != (undefined *)0x0) {
      puVar6 = DAT_14cbe6ad8;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cbe6ae0 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cbe6a98 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cbe6a98 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cbe6ad0;
        if (DAT_14cbe6ad8 != (undefined *)0x0) {
          puVar6 = DAT_14cbe6ad8;
        }
        lVar1 = DAT_14cbe6a98 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cbe6a98 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d9f848();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d9f848 FUN_145d9f848 body=135 status=ok
// SIG undefined FUN_145d9f848(void)

void FUN_145d9f848(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cbe6a98;
  if (DAT_14cbe6acc != 0) {
    *(int *)(DAT_14cbe6a98 + (longlong)DAT_14cbe6ac8 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cbe6acc) {
    iVar4 = DAT_14cbe6ac8;
  }
  puVar1[1] = iVar4;
  DAT_14cbe6acc = DAT_14cbe6acc + 1;
  puVar5 = &DAT_14cbe6aa8;
  if (DAT_14cbe6ab8 != (undefined *)0x0) {
    puVar5 = DAT_14cbe6ab8;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cbe6ac8 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d9f8d0 FUN_145d9f8d0 body=114 status=ok
// SIG undefined FUN_145d9f8d0(void)

void FUN_145d9f8d0(void)

{
  longlong *plVar1;
  
  FUN_140f0fa3c();
  FUN_145d9f942(DAT_14cbe6c14);
  if (DAT_14cbe6ba0 == &DAT_14cbe6c10) {
    DAT_14cbe6ba0 = (undefined4 *)0x0;
  }
  if (DAT_14cbe6c50 != 0) {
    plVar1 = &DAT_14cbe6c70;
    if (DAT_14cbe6c60 != (longlong *)0x0) {
      plVar1 = DAT_14cbe6c60;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cbe6c38 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d9f942 FUN_145d9f942 body=242 status=ok
// SIG undefined FUN_145d9f942(void)

void FUN_145d9f942(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cbe6bb0 != DAT_14cbe6bdc) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cbe6be0;
    if (DAT_14cbe6be8 != (undefined *)0x0) {
      puVar6 = DAT_14cbe6be8;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cbe6bf0 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cbe6ba8 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cbe6ba8 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cbe6be0;
        if (DAT_14cbe6be8 != (undefined *)0x0) {
          puVar6 = DAT_14cbe6be8;
        }
        lVar1 = DAT_14cbe6ba8 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cbe6ba8 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d9fa34();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d9fa34 FUN_145d9fa34 body=135 status=ok
// SIG undefined FUN_145d9fa34(void)

void FUN_145d9fa34(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cbe6ba8;
  if (DAT_14cbe6bdc != 0) {
    *(int *)(DAT_14cbe6ba8 + (longlong)DAT_14cbe6bd8 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cbe6bdc) {
    iVar4 = DAT_14cbe6bd8;
  }
  puVar1[1] = iVar4;
  DAT_14cbe6bdc = DAT_14cbe6bdc + 1;
  puVar5 = &DAT_14cbe6bb8;
  if (DAT_14cbe6bc8 != (undefined *)0x0) {
    puVar5 = DAT_14cbe6bc8;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cbe6bd8 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d9fabc FUN_145d9fabc body=114 status=ok
// SIG undefined FUN_145d9fabc(void)

void FUN_145d9fabc(void)

{
  longlong *plVar1;
  
  FUN_1458ef888();
  FUN_145d9fb2e(DAT_14cbe6e74);
  if (DAT_14cbe6e00 == &DAT_14cbe6e70) {
    DAT_14cbe6e00 = (undefined4 *)0x0;
  }
  if (DAT_14cbe6eb0 != 0) {
    plVar1 = &DAT_14cbe6ed0;
    if (DAT_14cbe6ec0 != (longlong *)0x0) {
      plVar1 = DAT_14cbe6ec0;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cbe6e98 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d9fb2e FUN_145d9fb2e body=242 status=ok
// SIG undefined FUN_145d9fb2e(void)

void FUN_145d9fb2e(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cbe6e10 != DAT_14cbe6e3c) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cbe6e40;
    if (DAT_14cbe6e48 != (undefined *)0x0) {
      puVar6 = DAT_14cbe6e48;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cbe6e50 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cbe6e08 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cbe6e08 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cbe6e40;
        if (DAT_14cbe6e48 != (undefined *)0x0) {
          puVar6 = DAT_14cbe6e48;
        }
        lVar1 = DAT_14cbe6e08 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cbe6e08 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d9fc20();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d9fc20 FUN_145d9fc20 body=135 status=ok
// SIG undefined FUN_145d9fc20(void)

void FUN_145d9fc20(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cbe6e08;
  if (DAT_14cbe6e3c != 0) {
    *(int *)(DAT_14cbe6e08 + (longlong)DAT_14cbe6e38 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cbe6e3c) {
    iVar4 = DAT_14cbe6e38;
  }
  puVar1[1] = iVar4;
  DAT_14cbe6e3c = DAT_14cbe6e3c + 1;
  puVar5 = &DAT_14cbe6e18;
  if (DAT_14cbe6e28 != (undefined *)0x0) {
    puVar5 = DAT_14cbe6e28;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cbe6e38 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d9fca8 FUN_145d9fca8 body=292 status=ok
// SIG undefined FUN_145d9fca8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145d9fca8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca25a48) {
    FUN_144b3d300(&DAT_14ca25a48);
    if (DAT_14ca25a48 == -1) {
      FUN_145d9ff16();
      FUN_145d9fdcc();
      FUN_140db5666(&DAT_14ca259a0,0,&DAT_14ca25938,
                    L"FGTAOMobile_HorizonSearchIntegralSpatialFilterCS",
                    L"/Engine/Private/PostProcessAmbientOcclusionMobile.usf",
                    L"GTAOHorizonSearchIntegralSpatialFilterCS",5,9,FUN_147289f1c,FUN_147289ebc,
                    FUN_1410c75be,&LAB_147289eb8,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca28118);
      _DAT_14ca259a0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142eb35eb);
      _Init_thread_footer(&DAT_14ca25a48);
    }
  }
  return &DAT_14ca259a0;
}



// FUNCTION 145d9fdcc FUN_145d9fdcc body=205 status=ok
// SIG undefined FUN_145d9fdcc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d9fdcc(void)

{
  if ((DAT_14ca2599f & 2) == 0) {
    DAT_14ca2599f = DAT_14ca2599f | 2;
    _DAT_14ca25940 = L"FGTAOMobile_HorizonSearchIntegralSpatialFilterCS";
    _DAT_14ca25958 = FUN_146826540;
    _DAT_14ca25960 = FUN_146825d77;
    _DAT_14ca25968 = FUN_146825fd6;
    _DAT_14ca25970 = FUN_1407e02ea;
    _DAT_14ca25978 = FUN_146826273;
    _DAT_14ca25950 = FUN_147289e88;
    _DAT_14ca25990 = 0xffffffff000000e0;
    _DAT_14ca25998 = 8;
    DAT_14ca2599c = 0;
    _DAT_14ca25980 = &LAB_147289eb4;
    FUN_145d9fe9a();
    FUN_1407e00cc(&DAT_14ca25938);
    return;
  }
  return;
}



// FUNCTION 145d9fe9a FUN_145d9fe9a body=123 status=ok
// SIG undefined FUN_145d9fe9a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d9fe9a(void)

{
  _DAT_14ca2be50 = L"BASE";
  DAT_14ca2be7a = 4;
  _DAT_14ca2be58 = FUN_140b35ae4();
  _DAT_14ca2be60 = DAT_14ca25948;
  _DAT_14ca2be68 = &LAB_14682652b;
  DAT_14ca25948 = &DAT_14ca2be50;
  DAT_14ca2599d = DAT_14ca2599d + '\x01';
  _DAT_14ca2be70 = 0x100000000;
  if (*(char *)(_DAT_14ca2be58 + 100) != '\0') {
    DAT_14ca2599e = DAT_14ca2599e + '\x01';
  }
  return;
}



// FUNCTION 145d9ff16 FUN_145d9ff16 body=261 status=ok
// SIG undefined FUN_145d9ff16(void)

void FUN_145d9ff16(void)

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
              0x110) < DAT_14ca28198) {
    FUN_144b3d300(&DAT_14ca28198);
    if (DAT_14ca28198 == -1) {
      FUN_145da001c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xd0;
      local_58 = 0xc6;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca28118,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142ed6ba8);
      _Init_thread_footer(&DAT_14ca28198);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145da001c FUN_145da001c body=226 status=ok
// SIG undefined FUN_145da001c(void)

longlong * FUN_145da001c(longlong *param_1)

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
  pcVar13 = FUN_1462f8986;
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



// FUNCTION 145da0104 FUN_145da0104 body=138 status=ok
// SIG undefined FUN_145da0104(void)

code * FUN_145da0104(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Power_Intensity_ScreenPixelsToSearch";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb0000000c8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x104;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145da018e;
}



// FUNCTION 145da018e FUN_145da018e body=140 status=ok
// SIG undefined FUN_145da018e(void)

undefined1 * FUN_145da018e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145da021a();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Common";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FGTAOMobile_HorizonSearchIntegral::FParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 199;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca281a0;
  return &LAB_145da0100;
}



// FUNCTION 145da021a FUN_145da021a body=261 status=ok
// SIG undefined FUN_145da021a(void)

void FUN_145da021a(void)

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
              0x110) < DAT_14ca28220) {
    FUN_144b3d300(&DAT_14ca28220);
    if (DAT_14ca28220 == -1) {
      FUN_145da0320(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xb0;
      local_58 = 0x6c;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca281a0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142ed6bb4);
      _Init_thread_footer(&DAT_14ca28220);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145da0320 FUN_145da0320 body=226 status=ok
// SIG undefined FUN_145da0320(void)

longlong * FUN_145da0320(longlong *param_1)

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
  pcVar13 = FUN_1462f8a0e;
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



// FUNCTION 145da0404 FUN_145da0404 body=138 status=ok
// SIG undefined FUN_145da0404(void)

code * FUN_145da0404(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SceneDepthSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7800000076;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14728d0c6;
}



// FUNCTION 145da048e FUN_145da048e body=138 status=ok
// SIG undefined FUN_145da048e(void)

code * FUN_145da048e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ViewSizeAndInvSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000071;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x104;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14728d264;
}



// FUNCTION 145da0518 FUN_145da0518 body=138 status=ok
// SIG undefined FUN_145da0518(void)

code * FUN_145da0518(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DepthBufferSizeAndInvSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000006f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x104;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14728d2ee;
}



// FUNCTION 145da05a2 FUN_145da05a2 body=210 status=ok
// SIG undefined FUN_145da05a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145da05a2(void)

{
  if ((DAT_14cae4b97 & 2) == 0) {
    DAT_14cae4b97 = DAT_14cae4b97 | 2;
    _DAT_14cae4b38 = L"FInstancedStaticMeshVertexFactoryShaderParameters";
    _DAT_14cae4b50 = FUN_146826540;
    _DAT_14cae4b58 = FUN_146825d77;
    _DAT_14cae4b60 = FUN_146825fd6;
    _DAT_14cae4b68 = FUN_1407e02ea;
    _DAT_14cae4b70 = FUN_146826273;
    _DAT_14cae4b48 = &LAB_147af6f92;
    _DAT_14cae4b88 = 0xffffffff00000024;
    _DAT_14cae4b90 = 4;
    DAT_14cae4b94 = 0;
    _DAT_14cae4b78 = &LAB_147af6fa8;
    FUN_145da0674();
    FUN_145da07e2();
    FUN_1407e00cc(&DAT_14cae4b30);
    return;
  }
  return;
}



// FUNCTION 145da0674 FUN_145da0674 body=121 status=ok
// SIG undefined FUN_145da0674(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145da0674(void)

{
  FUN_145da06ee();
  _DAT_14cae6e70 = L"InstancingOffsetParameter";
  DAT_14cae6e9a = FUN_140850cc5();
  _DAT_14cae6e78 = FUN_140ec6960();
  _DAT_14cae6e88 = &LAB_14682652b;
  _DAT_14cae6e90 = &DAT_10000000c;
  _DAT_14cae6e98 = 0;
  _DAT_14cae6e80 = DAT_14cae4b40;
  DAT_14cae4b40 = &DAT_14cae6e70;
  return;
}



// FUNCTION 145da06ee FUN_145da06ee body=121 status=ok
// SIG undefined FUN_145da06ee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145da06ee(void)

{
  FUN_145da0768();
  _DAT_14cae6ea0 = L"VertexFetch_InstanceOriginBufferParameter";
  DAT_14cae6eca = FUN_140850cc5();
  _DAT_14cae6ea8 = FUN_140fb78d0();
  _DAT_14cae6eb8 = &LAB_14682652b;
  _DAT_14cae6ec0 = 0x100000012;
  _DAT_14cae6ec8 = 0;
  _DAT_14cae6eb0 = DAT_14cae4b40;
  DAT_14cae4b40 = &DAT_14cae6ea0;
  return;
}



// FUNCTION 145da0768 FUN_145da0768 body=121 status=ok
// SIG undefined FUN_145da0768(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145da0768(void)

{
  FUN_145da0a28();
  _DAT_14cae6ed0 = L"VertexFetch_InstanceTransformBufferParameter";
  DAT_14cae6efa = FUN_140850cc5();
  _DAT_14cae6ed8 = FUN_140fb78d0();
  _DAT_14cae6ee8 = &LAB_14682652b;
  _DAT_14cae6ef0 = 0x100000016;
  _DAT_14cae6ef8 = 0;
  _DAT_14cae6ee0 = DAT_14cae4b40;
  DAT_14cae4b40 = &DAT_14cae6ed0;
  return;
}



// FUNCTION 145da07e2 FUN_145da07e2 body=123 status=ok
// SIG undefined FUN_145da07e2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145da07e2(void)

{
  _DAT_14cae7050 = L"BASE";
  DAT_14cae707a = 4;
  _DAT_14cae7058 = FUN_145da085e();
  _DAT_14cae7060 = DAT_14cae4b40;
  _DAT_14cae7068 = &LAB_14682652b;
  DAT_14cae4b40 = &DAT_14cae7050;
  DAT_14cae4b95 = DAT_14cae4b95 + '\x01';
  _DAT_14cae7070 = 0x100000000;
  if (*(char *)(_DAT_14cae7058 + 100) != '\0') {
    DAT_14cae4b96 = DAT_14cae4b96 + '\x01';
  }
  return;
}



// FUNCTION 145da085e FUN_145da085e body=211 status=ok
// SIG undefined FUN_145da085e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145da085e(void)

{
  if ((DAT_14cae9637 & 2) == 0) {
    DAT_14cae9637 = DAT_14cae9637 | 2;
    _DAT_14cae95d8 = L"FLocalVertexFactoryShaderParametersBase";
    _DAT_14cae95f0 = FUN_146826540;
    _DAT_14cae95f8 = FUN_146825d77;
    _DAT_14cae9600 = FUN_146825fd6;
    _DAT_14cae9608 = FUN_1407e02ea;
    _DAT_14cae9610 = FUN_146826273;
    _DAT_14cae95e8 = &LAB_147ba2e92;
    _DAT_14cae9628 = 0xffffffff0000000c;
    _DAT_14cae9630 = 4;
    DAT_14cae9634 = 0;
    _DAT_14cae9618 = &LAB_147ba2ea8;
    FUN_145da0932();
    FUN_145da09ac();
    FUN_1407e00cc(&DAT_14cae95d0);
  }
  return &DAT_14cae95d0;
}



// FUNCTION 145da0932 FUN_145da0932 body=121 status=ok
// SIG undefined FUN_145da0932(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145da0932(void)

{
  FUN_145da0b00();
  _DAT_14cae9af0 = L"LODParameter";
  DAT_14cae9b1a = FUN_140850cc5();
  _DAT_14cae9af8 = FUN_140ec6960();
  _DAT_14cae9b08 = &LAB_14682652b;
  _DAT_14cae9b10 = &DAT_100000004;
  _DAT_14cae9b18 = 0;
  _DAT_14cae9b00 = DAT_14cae95e0;
  DAT_14cae95e0 = &DAT_14cae9af0;
  return;
}



// FUNCTION 145da09ac FUN_145da09ac body=123 status=ok
// SIG undefined FUN_145da09ac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145da09ac(void)

{
  _DAT_14cae9b90 = L"BASE";
  DAT_14cae9bba = 4;
  _DAT_14cae9b98 = FUN_1412f7d22();
  _DAT_14cae9ba0 = DAT_14cae95e0;
  _DAT_14cae9ba8 = &LAB_14682652b;
  DAT_14cae95e0 = &DAT_14cae9b90;
  DAT_14cae9635 = DAT_14cae9635 + '\x01';
  _DAT_14cae9bb0 = 0x100000000;
  if (*(char *)(_DAT_14cae9b98 + 100) != '\0') {
    DAT_14cae9636 = DAT_14cae9636 + '\x01';
  }
  return;
}



// FUNCTION 145da0a28 FUN_145da0a28 body=216 status=ok
// SIG undefined FUN_145da0a28(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145da0a28(void)

{
  _DAT_14cae6f30 = L"InstanceOffset";
  DAT_14cae6f5a = FUN_140850cc5();
  _DAT_14cae6f38 = FUN_140ec6960();
  _DAT_14cae6f48 = &LAB_14682652b;
  _DAT_14cae6f50 = 0x10000001e;
  _DAT_14cae6f58 = 0;
  _DAT_14cae6f40 = DAT_14cae4b40;
  DAT_14cae4b40 = &DAT_14cae6f30;
  _DAT_14cae6f00 = L"VertexFetch_InstanceLightmapBufferParameter";
  DAT_14cae6f2a = FUN_140850cc5();
  _DAT_14cae6f08 = FUN_140fb78d0();
  _DAT_14cae6f18 = &LAB_14682652b;
  _DAT_14cae6f20 = 0x10000001a;
  _DAT_14cae6f28 = 0;
  _DAT_14cae6f10 = DAT_14cae4b40;
  DAT_14cae4b40 = &DAT_14cae6f00;
  return;
}



// FUNCTION 145da0b00 FUN_145da0b00 body=271 status=ok
// SIG undefined FUN_145da0b00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145da0b00(void)

{
  _DAT_14cae9b20 = L"bAnySpeedTreeParamIsBound";
  DAT_14cae9b4a = FUN_140850cc5();
  if ((DAT_14c9cfd57 & 2) == 0) {
    DAT_14c9cfd57 = DAT_14c9cfd57 | 3;
    _DAT_14c9cfcf8 = L"bool";
    _DAT_14c9cfd10 = &LAB_147169480;
    _DAT_14c9cfd18 = &LAB_14716948c;
    _DAT_14c9cfd20 = &LAB_147169498;
    _DAT_14c9cfd28 = &LAB_14716949e;
    _DAT_14c9cfd30 = &LAB_1471694a2;
    _DAT_14c9cfd08 = &LAB_1471694a8;
    _DAT_14c9cfd48 = &DAT_100000001;
    _DAT_14c9cfd50 = 1;
    DAT_14c9cfd54 = 0;
  }
  _DAT_14cae9b28 = &DAT_14c9cfcf0;
  _DAT_14cae9b38 = &LAB_14682652b;
  _DAT_14cae9b40 = &DAT_10000000a;
  _DAT_14cae9b48 = 0;
  _DAT_14cae9b30 = DAT_14cae95e0;
  DAT_14cae95e0 = &DAT_14cae9b20;
  return;
}



// FUNCTION 145da0c10 FUN_145da0c10 body=1263 status=ok
// SIG undefined FUN_145da0c10(void)

void FUN_145da0c10(void)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined ***pppuVar5;
  longlong lVar6;
  undefined1 auStack_f8 [39];
  undefined1 local_d1;
  undefined8 local_d0;
  code *local_c8;
  undefined8 local_b8;
  undefined **local_a8;
  undefined8 local_a0;
  undefined8 *local_88;
  undefined4 local_80;
  undefined1 *local_78;
  undefined ***local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (DAT_14c874b40 != 2) {
    FUN_1446efa72(&DAT_14c874b38,0,2,0x10);
    DAT_14c874b40 = 2;
  }
  puVar1 = DAT_14c874b38;
  *DAT_14c874b38 = &PTR_LAB_14aae62d0;
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
  puVar1[2] = lVar6;
  *puVar1 = &PTR_FUN_14aae6260;
  puVar1[3] = FUN_147daacd7;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb0cb08) {
    FUN_144b3d300(&DAT_14cb0cb08);
    if (DAT_14cb0cb08 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14cb0cb00 =
           (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Shadow.CacheWPOPrimitives",1);
      _Init_thread_footer(&DAT_14cb0cb08);
    }
  }
  plVar2 = DAT_14cb0cb00;
  local_88 = (undefined8 *)0x0;
  local_80 = 0;
  FUN_1446efa72(&local_88,0,2,0x10);
  local_80 = 2;
  *local_88 = &PTR_LAB_149e170a0;
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
  local_88[2] = lVar6;
  *local_88 = &PTR_FUN_149e17030;
  local_88[3] = FUN_147d7cfd6;
  (**(code **)(*plVar2 + 200))(plVar2,&local_88);
  FUN_1449db362(&local_88);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb0cb18) {
    FUN_144b3d300(&DAT_14cb0cb18);
    if (DAT_14cb0cb18 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14cb0cb10 =
           (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.ShowMaterialDrawEvents",1);
      _Init_thread_footer(&DAT_14cb0cb18);
    }
  }
  plVar2 = DAT_14cb0cb10;
  if (DAT_14cb0cb10 != (longlong *)0x0) {
    local_88 = (undefined8 *)0x0;
    local_80 = 0;
    FUN_1446efa72(&local_88,0,2,0x10);
    local_80 = 2;
    *local_88 = &PTR_LAB_149e170a0;
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
    local_88[2] = lVar6;
    *local_88 = &PTR_FUN_149e17030;
    local_88[3] = FUN_147d7cfd6;
    (**(code **)(*plVar2 + 200))(plVar2,&local_88);
    FUN_1449db362(&local_88);
  }
  PTR_FUN_14c7590a0 = FUN_14371c5ba;
  PTR_FUN_14c7590a8 = &LAB_147d5f2dc;
  FUN_14154c2db();
  FUN_145da144d();
  FUN_145da15fe();
  if (DAT_14c948cd8 != 2) {
    FUN_1446efa72(&DAT_14c948cd0,0,2,0x10);
    DAT_14c948cd8 = 2;
  }
  puVar1 = DAT_14c948cd0;
  *DAT_14c948cd0 = &PTR_LAB_14aae63b0;
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
  puVar1[2] = lVar6;
  *puVar1 = &PTR_FUN_14aae6340;
  local_88 = (undefined8 *)FUN_144a3a302();
  local_68 = (undefined ***)0x0;
  local_58 = &PTR_LAB_14aae6420;
  local_50 = FUN_143768f16;
  local_78 = &LAB_14376902c;
  FUN_145da11dc(&local_88);
  if (local_78 != (undefined1 *)0x0) {
    pppuVar5 = local_68;
    if (local_68 == (undefined ***)0x0) {
      pppuVar5 = &local_58;
    }
    (*(code *)(*pppuVar5)[2])();
  }
  local_88 = (undefined8 *)FUN_144a7a726();
  local_68 = (undefined ***)0x0;
  local_58 = &PTR_LAB_14aae6440;
  local_50 = FUN_14376903c;
  local_78 = &LAB_147d85f78;
  FUN_145da12fe(&local_88);
  if (local_78 != (undefined1 *)0x0) {
    pppuVar5 = &local_58;
    if (local_68 != (undefined ***)0x0) {
      pppuVar5 = local_68;
    }
    (*(code *)(*pppuVar5)[2])(pppuVar5);
  }
  FUN_145da138c();
  FUN_145da1522();
  FUN_145da1157();
  FUN_144a52528();
  FUN_1446ddc76(&local_d0,"UniversalObjectLocator",1);
  uVar4 = FUN_144a52528();
  local_a0 = FUN_1402c9134(uVar4,local_d0,&local_88,1);
  local_b8 = 0;
  local_a8 = &PTR_LAB_14aae6460;
  local_c8 = FUN_143769152;
  FUN_141293f6e(&local_d1,8);
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145da1100 FUN_145da1100 body=12 status=ok
// SIG undefined FUN_145da1100(void)

void FUN_145da1100(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000145da1109. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 145da110c FUN_145da110c body=12 status=ok
// SIG undefined FUN_145da110c(void)

void FUN_145da110c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000145da1115. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 145da1118 FUN_145da1118 body=31 status=ok
// SIG undefined FUN_145da1118(void)

undefined8 FUN_145da1118(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145da1138 FUN_145da1138 body=31 status=ok
// SIG undefined FUN_145da1138(void)

undefined8 FUN_145da1138(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145da1157 FUN_145da1157 body=132 status=ok
// SIG undefined FUN_145da1157(void)

void FUN_145da1157(void)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446f470e(&local_18,L"NetActorFactory",1);
  uVar1 = FUN_145a6d132();
  FUN_14154c2dc(uVar1,local_18);
  FUN_1446f470e(&local_20,L"NetSubObjectFactory",1);
  uVar1 = FUN_145a6d21e();
  FUN_14154c2dc(uVar1,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145da11dc FUN_145da11dc body=141 status=ok
// SIG undefined FUN_145da11dc(void)

void FUN_145da11dc(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  iVar3 = DAT_14cad1070;
  lVar5 = (longlong)(int)DAT_14cad1070;
  DAT_14cad1070 = DAT_14cad1070 + 1;
  if (DAT_14cad1074 < DAT_14cad1070) {
    FUN_145da126a(&DAT_14cad1068,iVar3);
  }
  lVar2 = DAT_14cad1068;
  lVar5 = lVar5 * 0x50;
  *(undefined8 *)(DAT_14cad1068 + lVar5) = *param_1;
  lVar1 = param_1[2];
  *(longlong *)(lVar2 + 0x10 + lVar5) = lVar1;
  *(undefined8 *)(lVar2 + 0x20 + lVar5) = 0;
  if (lVar1 != 0) {
    puVar4 = param_1 + 6;
    if ((undefined8 *)param_1[4] != (undefined8 *)0x0) {
      puVar4 = (undefined8 *)param_1[4];
    }
                    /* WARNING: Could not recover jumptable at 0x000145da125e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar4)(puVar4,lVar2 + lVar5 + 0x20);
    return;
  }
  return;
}



// FUNCTION 145da126a FUN_145da126a body=147 status=ok
// SIG undefined FUN_145da126a(void)

void FUN_145da126a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
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
    uVar4 = FUN_144a3809e(lVar3 * 0x50,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145da12fe FUN_145da12fe body=141 status=ok
// SIG undefined FUN_145da12fe(void)

void FUN_145da12fe(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  iVar3 = DAT_14cad1080;
  lVar5 = (longlong)(int)DAT_14cad1080;
  DAT_14cad1080 = DAT_14cad1080 + 1;
  if (DAT_14cad1084 < DAT_14cad1080) {
    FUN_145da126a(&DAT_14cad1078,iVar3);
  }
  lVar2 = DAT_14cad1078;
  lVar5 = lVar5 * 0x50;
  *(undefined8 *)(DAT_14cad1078 + lVar5) = *param_1;
  lVar1 = param_1[2];
  *(longlong *)(lVar2 + 0x10 + lVar5) = lVar1;
  *(undefined8 *)(lVar2 + 0x20 + lVar5) = 0;
  if (lVar1 != 0) {
    puVar4 = param_1 + 6;
    if ((undefined8 *)param_1[4] != (undefined8 *)0x0) {
      puVar4 = (undefined8 *)param_1[4];
    }
                    /* WARNING: Could not recover jumptable at 0x000145da1380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar4)(puVar4,lVar2 + lVar5 + 0x20);
    return;
  }
  return;
}



// FUNCTION 145da138c FUN_145da138c body=192 status=ok
// SIG undefined FUN_145da138c(void)

void FUN_145da138c(void)

{
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  undefined1 local_48 [56];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1458517e8(&DAT_14cb109f0,local_48,FUN_145a0c01c);
  FUN_14576a192(&DAT_14cb10a08,local_48,FUN_14125ae02);
  FUN_145afd586(local_48,FUN_14793e08e);
  FUN_14126834e(&DAT_14cb10a38,local_50,local_48);
  FUN_1401cb1ee(local_48);
  FUN_145afd586(local_48,FUN_1463ab354);
  FUN_14126834e(&DAT_14cb10ae8,local_50,local_48);
  FUN_1401cb1ee(local_48);
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145da144d FUN_145da144d body=212 status=ok
// SIG undefined FUN_145da144d(void)

void FUN_145da144d(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  plVar1 = DAT_14cb02e00;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (undefined8 *)0x0;
  local_20 = 0;
  FUN_1446efa72(&local_28,0,2,0x10);
  local_20 = 2;
  *local_28 = &PTR_LAB_149e170a0;
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
  local_28[2] = lVar3;
  *local_28 = &PTR_FUN_149e17030;
  local_28[3] = FUN_145c1a93d;
  (**(code **)(*plVar1 + 200))(plVar1,&local_28);
  FUN_1449db362(&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145da1522 FUN_145da1522 body=218 status=ok
// SIG undefined FUN_145da1522(void)

void FUN_145da1522(void)

{
  PSRWLOCK SRWLock;
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  SRWLock = (PSRWLOCK)FUN_14001cc68(0xa8);
  memset(SRWLock,0,0xa8);
  InitializeSRWLock(SRWLock);
  SRWLock[5].Ptr = (PVOID)0x0;
  *(undefined4 *)&SRWLock[6].Ptr = 0;
  SRWLock[1].Ptr = (PVOID)0x0;
  SRWLock[2].Ptr = (PVOID)0x0;
  *(undefined8 *)((longlong)&SRWLock[6].Ptr + 4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)&SRWLock[7].Ptr + 4) = 0;
  SRWLock[9].Ptr = (PVOID)0x0;
  *(undefined4 *)&SRWLock[10].Ptr = 0;
  SRWLock[0xf].Ptr = (PVOID)0x0;
  *(undefined4 *)&SRWLock[0x10].Ptr = 0;
  SRWLock[0xb].Ptr = (PVOID)0x0;
  SRWLock[0xc].Ptr = (PVOID)0x0;
  *(undefined8 *)((longlong)&SRWLock[0x10].Ptr + 4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)&SRWLock[0x11].Ptr + 4) = 0;
  SRWLock[0x13].Ptr = (PVOID)0x0;
  *(undefined4 *)&SRWLock[0x14].Ptr = 0;
  DAT_14cacd528 = SRWLock;
  uVar1 = FUN_140b631de();
  FUN_14123f5ce(uVar1,&local_20,FUN_1417b7878);
  DAT_14cacd570 = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145da15fe FUN_145da15fe body=229 status=ok
// SIG undefined FUN_145da15fe(void)

void FUN_145da15fe(void)

{
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  undefined8 local_48 [7];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1458517e8(&DAT_14cb109f0,local_48,FUN_1435ebe38);
  FUN_14576a192(&DAT_14cb10a08,local_48,FUN_1435ebebe);
  FUN_145afd586(local_48,FUN_1435ebf7e);
  FUN_14126834e(&DAT_14cb10a38,local_50,local_48);
  FUN_1401cb1ee(local_48);
  FUN_145afd586(local_48,FUN_1435ec03e);
  FUN_14126834e(&DAT_14cb10ae8,local_50,local_48);
  FUN_1401cb1ee(local_48);
  FUN_14123f5ce(&DAT_14c867408,local_48,FUN_1435e80e2);
  DAT_14caf59f8 = local_48[0];
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145da16e4 FUN_145da16e4 body=40 status=ok
// SIG undefined FUN_145da16e4(void)

undefined8 FUN_145da16e4(undefined8 param_1,int param_2)

{
  FUN_145da170c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145da170c FUN_145da170c body=124 status=ok
// SIG undefined FUN_145da170c(void)

void FUN_145da170c(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14a3bb8e0;
  param_1[5] = &PTR_FUN_14a3bc2f0;
  param_1[6] = &PTR_LAB_14a3bc330;
  param_1[0x55] = &PTR_FUN_14a3bc380;
  param_1[0x56] = &PTR_FUN_14a3bc400;
  param_1[0x57] = &PTR_FUN_14a3bc410;
  puVar2 = (undefined8 *)param_1[0xe5];
  if (puVar2 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  FUN_140c06c4c(param_1);
  return;
}



// FUNCTION 145da1794 FUN_145da1794 body=152 status=ok
// SIG undefined FUN_145da1794(void)

undefined8 * FUN_145da1794(undefined8 *param_1)

{
  FUN_144a0768c();
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
  *param_1 = &PTR_FUN_14a64cec0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caebc50) {
    FUN_144b3d300(&DAT_14caebc50);
    if (DAT_14caebc50 == -1) {
      FUN_14154c392();
      atexit((_func_5014 *)&LAB_14356f0ba);
      _Init_thread_footer(&DAT_14caebc50);
    }
  }
  return param_1;
}



// FUNCTION 145da1838 FUN_145da1838 body=152 status=ok
// SIG undefined FUN_145da1838(void)

undefined8 * FUN_145da1838(undefined8 *param_1)

{
  FUN_144a0768c();
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
  *param_1 = &PTR_FUN_14a64d280;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caebc38) {
    FUN_144b3d300(&DAT_14caebc38);
    if (DAT_14caebc38 == -1) {
      FUN_14154c438();
      atexit((_func_5014 *)&LAB_14356f0a6);
      _Init_thread_footer(&DAT_14caebc38);
    }
  }
  return param_1;
}



// FUNCTION 145da18dc FUN_145da18dc body=152 status=ok
// SIG undefined FUN_145da18dc(void)

undefined8 * FUN_145da18dc(undefined8 *param_1)

{
  FUN_144a0768c();
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
  *param_1 = &PTR_FUN_14a650950;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeae58) {
    FUN_144b3d300(&DAT_14caeae58);
    if (DAT_14caeae58 == -1) {
      FUN_14154c4de();
      atexit((_func_5014 *)&LAB_14356d9c7);
      _Init_thread_footer(&DAT_14caeae58);
    }
  }
  return param_1;
}



// FUNCTION 145da1980 FUN_145da1980 body=152 status=ok
// SIG undefined FUN_145da1980(void)

undefined8 * FUN_145da1980(undefined8 *param_1)

{
  FUN_144a0768c();
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
  *param_1 = &PTR_FUN_14a657b00;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeaca8) {
    FUN_144b3d300(&DAT_14caeaca8);
    if (DAT_14caeaca8 == -1) {
      FUN_14154c584();
      atexit((_func_5014 *)&LAB_14356d77a);
      _Init_thread_footer(&DAT_14caeaca8);
    }
  }
  return param_1;
}



// FUNCTION 145da1a24 FUN_145da1a24 body=152 status=ok
// SIG undefined FUN_145da1a24(void)

undefined8 * FUN_145da1a24(undefined8 *param_1)

{
  FUN_144a0768c();
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
  *param_1 = &PTR_FUN_14a68bbd0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caebc98) {
    FUN_144b3d300(&DAT_14caebc98);
    if (DAT_14caebc98 == -1) {
      FUN_14154c62a();
      atexit((_func_5014 *)&LAB_14356f0f6);
      _Init_thread_footer(&DAT_14caebc98);
    }
  }
  return param_1;
}



// FUNCTION 145da1ac8 FUN_145da1ac8 body=152 status=ok
// SIG undefined FUN_145da1ac8(void)

undefined8 * FUN_145da1ac8(undefined8 *param_1)

{
  FUN_144a0768c();
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
  *param_1 = &PTR_FUN_14a68c4b0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caebc80) {
    FUN_144b3d300(&DAT_14caebc80);
    if (DAT_14caebc80 == -1) {
      FUN_14154c6d0();
      atexit((_func_5014 *)&LAB_14356f0e2);
      _Init_thread_footer(&DAT_14caebc80);
    }
  }
  return param_1;
}



// FUNCTION 145da1b6c FUN_145da1b6c body=152 status=ok
// SIG undefined FUN_145da1b6c(void)

undefined8 * FUN_145da1b6c(undefined8 *param_1)

{
  FUN_144a0768c();
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
  *param_1 = &PTR_FUN_14a68d140;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caebcf8) {
    FUN_144b3d300(&DAT_14caebcf8);
    if (DAT_14caebcf8 == -1) {
      FUN_14154c776();
      atexit((_func_5014 *)&LAB_14356f146);
      _Init_thread_footer(&DAT_14caebcf8);
    }
  }
  return param_1;
}



// FUNCTION 145da1c10 FUN_145da1c10 body=152 status=ok
// SIG undefined FUN_145da1c10(void)

undefined8 * FUN_145da1c10(undefined8 *param_1)

{
  FUN_144a0768c();
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
  *param_1 = &PTR_FUN_14a68d5b0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caebcc8) {
    FUN_144b3d300(&DAT_14caebcc8);
    if (DAT_14caebcc8 == -1) {
      FUN_14154c81c();
      atexit((_func_5014 *)&LAB_14356f11e);
      _Init_thread_footer(&DAT_14caebcc8);
    }
  }
  return param_1;
}



// FUNCTION 145da1cb4 FUN_145da1cb4 body=153 status=ok
// SIG undefined FUN_145da1cb4(void)

undefined8 * FUN_145da1cb4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_144a0768c();
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) & 0xf0 | 3;
  *param_1 = &PTR_FUN_14a6d1840;
  param_1[10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x45) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0xb] = DAT_14c8464e0;
  param_1[0xc] = uVar1;
  param_1[0xd] = DAT_14c8464f0;
  param_1[0x10] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0xe] = DAT_14c8464e0;
  param_1[0xf] = uVar1;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa5) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 4 | 0x93;
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 1;
  return param_1;
}



// FUNCTION 145da1d4e FUN_145da1d4e body=40 status=ok
// SIG undefined FUN_145da1d4e(void)

undefined8 FUN_145da1d4e(undefined8 param_1,int param_2)

{
  FUN_145da1d76();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145da1d76 FUN_145da1d76 body=124 status=ok
// SIG undefined FUN_145da1d76(void)

void FUN_145da1d76(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a893d30;
  param_1[5] = &PTR_FUN_14a8941b0;
  param_1[6] = &PTR_LAB_14a8941f0;
  param_1[0x22] = &PTR_FUN_14a894240;
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e852(param_1);
  return;
}



// FUNCTION 145da1dfe FUN_145da1dfe body=257 status=ok
// SIG undefined FUN_145da1dfe(void)

undefined8 * FUN_145da1dfe(undefined8 *param_1)

{
  int iVar1;
  undefined1 auStack_d8 [40];
  undefined4 local_b0 [2];
  undefined **local_a8;
  longlong local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a8d7bf0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  local_b0[0] = 0xffffffff;
  FUN_14109baa4();
  iVar1 = *(int *)(param_1 + 6);
  *(uint *)(param_1 + 6) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0x34) < iVar1 + 1U) {
    FUN_145da1f4c(param_1 + 5,iVar1);
  }
  FUN_145da1f00((longlong)iVar1 * 0x90 + param_1[5],local_b0);
  local_a8 = (undefined **)&DAT_14a176f00;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  local_a8 = &PTR_FUN_14a177080;
  FUN_144a78a1a();
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145da1f00 FUN_145da1f00 body=76 status=ok
// SIG undefined FUN_145da1f00(void)

undefined1 * FUN_145da1f00(undefined1 *param_1,undefined1 *param_2)

{
  longlong lVar1;
  
  *param_1 = *param_2;
  FUN_140501b78(param_1 + 8,param_2 + 8);
  lVar1 = *(longlong *)(param_2 + 0x88);
  *(longlong *)(param_1 + 0x88) = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 145da1f4c FUN_145da1f4c body=147 status=ok
// SIG undefined FUN_145da1f4c(void)

void FUN_145da1f4c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
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
    uVar4 = FUN_144a3809e(lVar3 * 0x90,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x90)) {
      uVar5 = uVar4 / 0x90 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x90,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145da1fea FUN_145da1fea body=153 status=ok
// SIG undefined FUN_145da1fea(void)

undefined8 * FUN_145da1fea(undefined8 *param_1)

{
  FUN_140307c5a();
  *(undefined4 *)(param_1 + 0x27) = 0;
  *(byte *)((longlong)param_1 + 0xbc) = *(byte *)((longlong)param_1 + 0xbc) | 1;
  *(byte *)((longlong)param_1 + 0xfe) = *(byte *)((longlong)param_1 + 0xfe) | 1;
  *(undefined1 *)((longlong)param_1 + 0xf6) = 0x12;
  *(byte *)((longlong)param_1 + 0x13c) = *(byte *)((longlong)param_1 + 0x13c) & 0xf8;
  *param_1 = &PTR_FUN_14aad91d0;
  param_1[0x19] = &PTR_FUN_14aad95a0;
  param_1[0x1a] = &PTR_FUN_14aad95e0;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0x3f80000000000000;
  *(undefined1 *)((longlong)param_1 + 0x154) = 0;
  *(byte *)((longlong)param_1 + 0x155) = *(byte *)((longlong)param_1 + 0x155) & 0xf0 | 5;
  *(undefined1 *)((longlong)param_1 + 0x156) = *(undefined1 *)((longlong)param_1 + 0xf1);
  *(undefined4 *)(param_1 + 0x2b) = 0;
  return param_1;
}



// FUNCTION 145da208e FUN_145da208e body=152 status=ok
// SIG undefined FUN_145da208e(void)

undefined8 * FUN_145da208e(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446f470e(&local_30,L"RootShakePattern",1);
  uVar1 = FUN_145a78666();
  FUN_140486538(param_2,local_30);
  FUN_14048646a(param_2 + 0x20,local_30,uVar1,0);
  FUN_1459d1f84(param_1,param_2);
  *param_1 = &PTR_FUN_14ad3c530;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145da2132 FUN_145da2132 body=153 status=ok
// SIG undefined FUN_145da2132(void)

undefined8 * FUN_145da2132(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_145b02186();
  *param_1 = &PTR_FUN_14add1580;
  param_1[0xe] = 0x3f80000000000001;
  *(undefined4 *)(param_1 + 0xf) = 0;
  puVar2 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14add3f20;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *(undefined4 *)((longlong)puVar2 + 0x3c) = 0x80;
  *(undefined4 *)(puVar2 + 8) = 0xffffffff;
  puVar1 = (undefined8 *)param_1[5];
  if ((puVar1 != puVar2) && (param_1[5] = puVar2, puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return param_1;
}



// FUNCTION 145da21d0 FUN_145da21d0 body=159 status=ok
// SIG undefined FUN_145da21d0(void)

void FUN_145da21d0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 2;
  *puVar1 = &PTR_FUN_14aecf320;
  puVar1[5] = &PTR_FUN_14aecf5c0;
  puVar1[0xe] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0x10] = &PTR_LAB_14aed9920;
  puVar1[0x11] = &LAB_14844c402;
  puVar1[0xc] = FUN_14844c41c;
  puVar1[0x16] = 0;
  puVar1[0x18] = &PTR_LAB_14aed9940;
  puVar1[0x19] = &DAT_14844c44e;
  puVar1[0x14] = FUN_14844c450;
  return;
}



// FUNCTION 145da2286 FUN_145da2286 body=224 status=ok
// SIG undefined FUN_145da2286(void)

void FUN_145da2286(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_28 [4];
  short local_24 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((&DAT_149fc1b6e)[*(byte *)(param_1 + 0x500)] == '\x01') {
    if ((*(longlong **)(param_1 + 0x4f0) == (longlong *)0x0) ||
       (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x4f0) + 0x28))(), cVar1 == '\0'))
    goto LAB_145da2336;
  }
  else if ((*(uint *)(param_1 + 0x4f0) & 0xffffff) == 0) goto LAB_145da2336;
  lVar2 = FUN_1447210f0(param_1);
  if ((lVar2 != 0) &&
     (((lVar2 = FUN_1400f6f32(lVar2), lVar2 != 0 &&
       (lVar2 = *(longlong *)(lVar2 + 0x68), lVar2 != 0)) &&
      (FUN_1413d94b2(lVar2,local_24,param_1), -1 < local_24[0])))) {
    local_38 = 0;
    FUN_1414c1098(lVar2,local_28,local_24,param_1 + 0x4e8);
  }
  FUN_145a4467a(&DAT_14cb89710,param_1);
LAB_145da2336:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145da2368 FUN_145da2368 body=48 status=ok
// SIG undefined FUN_145da2368(void)

void FUN_145da2368(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x48) != 0) {
    lVar1 = FUN_140c8331a();
    if (lVar1 != 0) {
      FUN_145da2398(lVar1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 145da2398 FUN_145da2398 body=116 status=ok
// SIG undefined FUN_145da2398(void)

void FUN_145da2398(longlong param_1)

{
  byte *pbVar1;
  uint *puVar2;
  
  if (*(longlong *)(param_1 + 0x3c0) != 0) {
    FUN_14477b16e();
    if (*(longlong *)(param_1 + 0x3c0) != 0) {
      pbVar1 = (byte *)(*(longlong *)(param_1 + 0x3c0) + 0x3dd);
      *pbVar1 = *pbVar1 | 0x40;
      *(undefined1 *)(*(longlong *)(param_1 + 0x3c0) + 0x7e0) = 0;
      puVar2 = (uint *)(*(longlong *)(param_1 + 0x3c0) + 0x3e0);
      *puVar2 = *puVar2 | 0x1000;
      *(undefined1 *)(*(longlong *)(param_1 + 0x3c0) + 0x794) = 0;
    }
    FUN_145d6ccd2(param_1);
    return;
  }
  return;
}



// FUNCTION 145da240c FUN_145da240c body=69 status=ok
// SIG undefined FUN_145da240c(void)

void FUN_145da240c(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_14121cb76(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_145da2452(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 145da2452 FUN_145da2452 body=95 status=ok
// SIG undefined FUN_145da2452(void)

void FUN_145da2452(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 6,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 6)) {
      uVar2 = uVar1 >> 6 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x40,8);
  }
  return;
}



// FUNCTION 145da24b2 FUN_145da24b2 body=151 status=ok
// SIG undefined FUN_145da24b2(void)

void FUN_145da24b2(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_145da254a(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145da254a FUN_145da254a body=12 status=ok
// SIG undefined FUN_145da254a(void)

void FUN_145da254a(longlong param_1)

{
  FUN_1416c1800(param_1 + 0x71a8);
  return;
}



// FUNCTION 145da2562 FUN_145da2562 body=316 status=ok
// SIG undefined FUN_145da2562(void)

undefined8 * FUN_145da2562(undefined8 *param_1)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140eca8ca();
  *param_1 = &PTR_FUN_14b848d10;
  local_50 = DAT_14cbe5ce0;
  local_58 = DAT_14cbe5cd8;
  FUN_1448075d0(&local_48);
  FUN_1404e49fa(param_1 + 5,&local_48);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  local_50 = DAT_14cbe5ce0;
  local_58 = DAT_14cbe5cd8;
  FUN_1448075d0(&local_48);
  FUN_1404e49fa(param_1 + 10,&local_48);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  FUN_1446ddda2(&local_48,&DAT_14b9d8d88,0);
  FUN_1447325ac(&local_48,&local_58,1);
  param_1[0x10] = local_58;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  param_1[0x11] = DAT_14cbe5d18;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145da26a0 FUN_145da26a0 body=72 status=ok
// SIG undefined FUN_145da26a0(void)

void FUN_145da26a0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_145da26e8(param_1,iVar1);
  }
  FUN_145da277a((longlong)iVar1 * 0x168 + *param_1,param_2);
  if (iVar1 != -1) {
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  }
  return;
}



// FUNCTION 145da26e8 FUN_145da26e8 body=146 status=ok
// SIG undefined FUN_145da26e8(void)

void FUN_145da26e8(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
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
    uVar4 = FUN_144a3809e(lVar3 * 0x168,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x168)) {
      uVar5 = uVar4 / 0x168 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x168,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145da277a FUN_145da277a body=684 status=ok
// SIG undefined FUN_145da277a(void)

undefined2 * FUN_145da277a(undefined2 *param_1,undefined2 *param_2)

{
  longlong lVar1;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_144a787a6(param_1 + 4,param_2 + 4);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  FUN_144a787a6(param_1 + 0x10,param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  FUN_144a787a6(param_1 + 0x1c,param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  FUN_144a787a6(param_1 + 0x28,param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  FUN_144a787a6(param_1 + 0x34,param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  FUN_144a787a6(param_1 + 0x40,param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  FUN_144a787a6(param_1 + 0x4c,param_2 + 0x4c);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  FUN_144a787a6(param_1 + 0x58,param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 100) = 0;
  lVar1 = *(longlong *)(param_2 + 100);
  if (lVar1 != 0) {
    FUN_1401924dc(lVar1);
    *(longlong *)(param_1 + 100) = lVar1;
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  lVar1 = *(longlong *)(param_2 + 0x68);
  if (lVar1 != 0) {
    FUN_1401924dc(lVar1);
    *(longlong *)(param_1 + 0x68) = lVar1;
  }
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined8 *)(param_1 + 0x6c) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  FUN_144a787a6(param_1 + 0x6c,param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 0x74);
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x7c) = 0;
  FUN_144a787a6(param_1 + 0x78,param_2 + 0x78);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined8 *)(param_1 + 0x84) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  FUN_144a787a6(param_1 + 0x84,param_2 + 0x84);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_2 + 0x8c);
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x94) = 0;
  FUN_144a787a6(param_1 + 0x90,param_2 + 0x90);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined8 *)(param_1 + 0x9c) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  FUN_144a787a6(param_1 + 0x9c,param_2 + 0x9c);
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_2 + 0xa4);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0xa8);
  *(undefined4 *)(param_1 + 0xaa) = *(undefined4 *)(param_2 + 0xaa);
  *(undefined8 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xac) = *(undefined8 *)(param_2 + 0xac);
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
  return param_1;
}



// FUNCTION 145da2a32 FUN_145da2a32 body=152 status=ok
// SIG undefined FUN_145da2a32(void)

undefined8 * FUN_145da2a32(undefined8 *param_1)

{
  FUN_140f188b8();
  *param_1 = &PTR_FUN_14bcb0b50;
  memset(param_1 + 0x16,0,0xa0);
  *(undefined4 *)(param_1 + 0x2a) = 0x3f000000;
  *(undefined1 *)((longlong)param_1 + 0x154) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc13cb0) {
    FUN_144b3d300(&DAT_14cc13cb0);
    if (DAT_14cc13cb0 == -1) {
      FUN_14154c8c2();
      atexit((_func_5014 *)&LAB_1444f22be);
      _Init_thread_footer(&DAT_14cc13cb0);
    }
  }
  return param_1;
}



// FUNCTION 145da2ad6 FUN_145da2ad6 body=152 status=ok
// SIG undefined FUN_145da2ad6(void)

undefined8 * FUN_145da2ad6(undefined8 *param_1)

{
  FUN_140f188b8();
  *param_1 = &PTR_FUN_14bcb10c0;
  memset(param_1 + 0x16,0,0xa0);
  *(undefined4 *)(param_1 + 0x2a) = 0x3f000000;
  *(undefined1 *)((longlong)param_1 + 0x154) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc13ce0) {
    FUN_144b3d300(&DAT_14cc13ce0);
    if (DAT_14cc13ce0 == -1) {
      FUN_14154c968();
      atexit((_func_5014 *)&LAB_1444f22d2);
      _Init_thread_footer(&DAT_14cc13ce0);
    }
  }
  return param_1;
}



// FUNCTION 145da2b6e FUN_145da2b6e body=40 status=ok
// SIG undefined FUN_145da2b6e(void)

undefined8 FUN_145da2b6e(undefined8 param_1,int param_2)

{
  FUN_145da2b96();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145da2b96 FUN_145da2b96 body=124 status=ok
// SIG undefined FUN_145da2b96(void)

void FUN_145da2b96(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bda5f30;
  FUN_1447a1747(param_1[0x1e],*(undefined4 *)(param_1 + 0x1f));
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0x19],*(undefined4 *)(param_1 + 0x1a));
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_140e36c74(param_1);
  return;
}



// FUNCTION 145da2c12 FUN_145da2c12 body=3260 status=ok
// SIG undefined FUN_145da2c12(void)

void FUN_145da2c12(longlong *param_1)

{
  longlong *plVar1;
  void **ppvVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  char *_Str;
  ushort *puVar7;
  undefined4 uVar8;
  char cVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong *plVar16;
  ulonglong uVar17;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined1 local_130;
  longlong *local_128;
  longlong local_120;
  void *local_118;
  ulonglong uStack_110;
  undefined4 local_108;
  undefined2 local_104;
  undefined1 local_102;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  void *local_e8;
  int local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  void *local_c8;
  int local_c0;
  longlong *local_b8;
  ulonglong uStack_b0;
  longlong local_a0;
  longlong local_98;
  longlong lStack_90;
  undefined4 uStack_88;
  undefined2 uStack_84;
  undefined1 uStack_82;
  undefined1 uStack_81;
  void *local_80;
  ulonglong local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  FUN_1407cbc56();
  lVar13 = param_1[0x51];
  if (lVar13 == 0) goto LAB_145da30e0;
  FUN_145da3cc0(lVar13);
  uVar11 = FUN_145da3984();
  plVar16 = param_1 + 0x2c;
  FUN_144a2e342(lVar13,plVar16,uVar11);
  iVar4 = *(int *)(lVar13 + 0xbc);
  FUN_145da38cf(*(undefined8 *)(lVar13 + 0xb0),*(undefined4 *)(lVar13 + 0xb8));
  *(undefined4 *)(lVar13 + 0xb8) = 0;
  local_120 = lVar13;
  if ((iVar4 < 0) && (*(int *)(lVar13 + 0xbc) != 0)) {
    FUN_148e36114(lVar13 + 0xb0,0);
  }
  puVar12 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  puVar12[1] = 0;
  *(undefined4 *)(puVar12 + 2) = 0;
  puVar12[3] = 0;
  *puVar12 = &PTR_FUN_14b9c5018;
  puVar12[4] = param_1[0x2e];
  *(undefined1 *)(puVar12 + 5) = 0;
  FUN_140391314(param_1,puVar12);
  (**(code **)(*param_1 + 400))(param_1);
  FUN_145da39f4(param_1,&local_a0);
  if (local_a0 != 0) {
    FUN_1446dcdd4(&local_98,&local_a0);
    lVar13 = FUN_14578babe(&local_98);
    param_1[0x79] = lVar13;
    if (local_80 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  local_b8 = (longlong *)0x0;
  uStack_b0 = 0;
  local_98 = FUN_145da39bc();
  if (local_98 == 0) {
    lStack_90 = 0;
  }
  else {
    lStack_90 = *(longlong *)(local_98 + 0x50);
  }
  uStack_88 = 0xffffffff;
  uStack_84 = 0x101;
  uStack_82 = 0;
  FUN_144a2daf0(&local_98);
  if (lStack_90 != 0) {
    do {
      lVar13 = lStack_90;
      local_118 = *(void **)(lStack_90 + 0x20);
      puVar12 = &DAT_14c9a1308;
      if (*plVar16 != 0) {
        puVar12 = (undefined8 *)FUN_1446e60f4(*plVar16,&local_118);
      }
      if (((*(byte *)*puVar12 & 3) != 0) && ((*(byte *)*puVar12 & 0x68) == 0)) {
        local_130 = 0;
        local_138 = 0;
        FUN_1446e0fc6(puVar12,&local_b8,lVar13,0xffffffff);
      }
      lStack_90 = *(longlong *)(lStack_90 + 0x18);
      FUN_144a2daf0(&local_98);
    } while (lStack_90 != 0);
  }
  plVar1 = param_1 + 0x80;
  lVar13 = FUN_14479d2ce(plVar1);
  local_128 = plVar16;
  if (lVar13 == 0) {
    if (param_1[0x81] != 0) {
      lVar13 = FUN_140007850();
      cVar9 = (*(code *)PTR_FUN_14c758760)();
      plVar16 = local_128;
      if ((lVar13 == 0) || (cVar9 == '\0')) {
        FUN_14485c47a(plVar1,lVar13);
        plVar16 = local_128;
        if (lVar13 == 0) goto LAB_145da2e28;
      }
      else {
        uVar5 = *(uint *)(lVar13 + 0xc);
        if ((int)uVar5 < DAT_14c9647dc) {
          lVar14 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
        }
        else {
          lVar14 = 0;
        }
        if ((*(uint *)(lVar14 + 8) & 0x8400000) == 0) {
          FUN_14485c47a(plVar1,lVar13);
        }
      }
      if ((*(uint *)(lVar13 + 8) >> 0x1e & 1) == 0) goto LAB_145da2e52;
    }
LAB_145da2e28:
    if (*plVar16 == 0) {
      puVar12 = &DAT_14c9a1308;
    }
    else {
      puVar12 = (undefined8 *)FUN_1408db3b0(*plVar16,"hoverdriveicon");
    }
    if (((byte *)*puVar12 != (byte *)0x0) && ((*(byte *)*puVar12 & 3) != 0)) {
      if (*plVar16 == 0) {
        puVar12 = &DAT_14c9a1308;
      }
      else {
        puVar12 = (undefined8 *)FUN_1408db3b0(*plVar16,"hoverdriveicon");
      }
      if ((*(byte *)*puVar12 & 3) == 1) {
        uVar11 = *(undefined8 *)((byte *)*puVar12 + 8);
      }
      else {
        uVar11 = 0;
      }
      FUN_1470e10fe(&local_98,uVar11);
      uVar11 = FUN_140007850(&local_98);
      FUN_1400bbfc4(&local_d8,uVar11);
      pvVar6 = local_c8;
      param_1[0x80] = 0;
      *(undefined4 *)(param_1 + 0x81) = local_d8;
      *(undefined4 *)((longlong)param_1 + 0x40c) = uStack_d4;
      *(undefined4 *)(param_1 + 0x82) = uStack_d0;
      *(undefined4 *)((longlong)param_1 + 0x414) = uStack_cc;
      ppvVar2 = (void **)(param_1 + 0x83);
      if (ppvVar2 != &local_c8) {
        *(int *)(param_1 + 0x84) = local_c0;
        if (local_c0 == 0 && *(int *)((longlong)param_1 + 0x424) == 0) {
          *(undefined4 *)((longlong)param_1 + 0x424) = 0;
        }
        else {
          FUN_1446dd670(ppvVar2,local_c0);
          if (local_c0 != 0) {
            memcpy(*ppvVar2,pvVar6,(longlong)local_c0 * 2);
          }
        }
      }
      if (local_c8 != (void *)0x0) {
        FUN_1400020a8();
      }
      plVar16 = local_128;
      if (CONCAT17(uStack_81,CONCAT16(uStack_82,CONCAT24(uStack_84,uStack_88))) != 0) {
        FUN_1400020a8();
        plVar16 = local_128;
      }
    }
  }
LAB_145da2e52:
  plVar1 = param_1 + 0x85;
  lVar13 = FUN_14479d2ce(plVar1);
  if (lVar13 == 0) {
    if (param_1[0x86] != 0) {
      lVar13 = FUN_140007850();
      cVar9 = (*(code *)PTR_FUN_14c758760)();
      plVar16 = local_128;
      if ((lVar13 == 0) || (cVar9 == '\0')) {
        FUN_14485c47a(plVar1,lVar13);
        plVar16 = local_128;
        if (lVar13 == 0) goto LAB_145da2e7b;
      }
      else {
        uVar5 = *(uint *)(lVar13 + 0xc);
        if ((int)uVar5 < DAT_14c9647dc) {
          lVar14 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
        }
        else {
          lVar14 = 0;
        }
        if ((*(uint *)(lVar14 + 8) & 0x8400000) == 0) {
          FUN_14485c47a(plVar1,lVar13);
        }
      }
      if ((*(uint *)(lVar13 + 8) >> 0x1e & 1) == 0) goto LAB_145da2ea5;
    }
LAB_145da2e7b:
    if (*plVar16 == 0) {
      puVar12 = &DAT_14c9a1308;
    }
    else {
      puVar12 = (undefined8 *)FUN_1408db3b0(*plVar16,"vehicleicon");
    }
    if (((byte *)*puVar12 != (byte *)0x0) && ((*(byte *)*puVar12 & 3) != 0)) {
      if (*plVar16 == 0) {
        puVar12 = &DAT_14c9a1308;
      }
      else {
        puVar12 = (undefined8 *)FUN_1408db3b0(*plVar16,"vehicleicon");
      }
      if ((*(byte *)*puVar12 & 3) == 1) {
        uVar11 = *(undefined8 *)((byte *)*puVar12 + 8);
      }
      else {
        uVar11 = 0;
      }
      FUN_1470e10fe(&local_98,uVar11);
      uVar11 = FUN_140007850(&local_98);
      FUN_1400bbfc4(&local_f8,uVar11);
      pvVar6 = local_e8;
      param_1[0x85] = 0;
      *(undefined4 *)(param_1 + 0x86) = local_f8;
      *(undefined4 *)((longlong)param_1 + 0x434) = uStack_f4;
      *(undefined4 *)(param_1 + 0x87) = uStack_f0;
      *(undefined4 *)((longlong)param_1 + 0x43c) = uStack_ec;
      ppvVar2 = (void **)(param_1 + 0x88);
      if (ppvVar2 != &local_e8) {
        *(int *)(param_1 + 0x89) = local_e0;
        if (local_e0 == 0 && *(int *)((longlong)param_1 + 0x44c) == 0) {
          *(undefined4 *)((longlong)param_1 + 0x44c) = 0;
        }
        else {
          FUN_1446dd670(ppvVar2,local_e0);
          if (local_e0 != 0) {
            memcpy(*ppvVar2,pvVar6,(longlong)local_e0 * 2);
          }
        }
      }
      if (local_e8 != (void *)0x0) {
        FUN_1400020a8();
      }
      plVar16 = local_128;
      if (CONCAT17(uStack_81,CONCAT16(uStack_82,CONCAT24(uStack_84,uStack_88))) != 0) {
        FUN_1400020a8();
        plVar16 = local_128;
      }
    }
  }
LAB_145da2ea5:
  plVar1 = param_1 + 0x7c;
  *(undefined4 *)(param_1 + 0x7d) = 0;
  if (*(int *)((longlong)param_1 + 0x3ec) < 0) {
    FUN_148a06a4e(plVar1,0);
  }
  if ((longlong)(int)uStack_b0 != 0) {
    plVar3 = local_b8 + (longlong)(int)uStack_b0 * 5;
    plVar15 = local_b8;
    do {
      local_98 = *plVar15;
      lStack_90 = plVar15[1];
      uStack_88 = (undefined4)plVar15[2];
      uVar8 = *(undefined4 *)((longlong)plVar15 + 0x14);
      uStack_84 = (undefined2)uVar8;
      uStack_82 = (undefined1)((uint)uVar8 >> 0x10);
      uStack_81 = (undefined1)((uint)uVar8 >> 0x18);
      local_80 = (void *)0x0;
      uVar5 = *(uint *)(plVar15 + 4);
      pvVar6 = (void *)plVar15[3];
      local_78 = CONCAT44(local_78._4_4_,uVar5);
      if ((longlong)(int)uVar5 == 0) {
        local_78 = (ulonglong)uVar5;
      }
      else {
        FUN_1446dd670(&local_80,uVar5,0);
        memcpy(local_80,pvVar6,(longlong)(int)uVar5 * 2);
      }
      uVar11 = FUN_1409f0d56(&local_98);
      local_118 = (void *)0x0;
      FUN_14485c47a(&local_118,uVar11);
      plVar16 = local_128;
      iVar4 = (int)param_1[0x7d];
      *(uint *)(param_1 + 0x7d) = iVar4 + 1U;
      if (*(uint *)((longlong)param_1 + 0x3ec) < iVar4 + 1U) {
        FUN_1407cc47e(plVar1,iVar4);
      }
      *(void **)(*plVar1 + (longlong)iVar4 * 8) = local_118;
      if (local_80 != (void *)0x0) {
        FUN_1400020a8();
      }
      plVar15 = plVar15 + 5;
    } while (plVar15 != plVar3);
  }
  if (*plVar16 == 0) {
    puVar12 = &DAT_14c9a1308;
  }
  else {
    puVar12 = (undefined8 *)FUN_1408db3b0(*plVar16,"cameracontextpriority");
  }
  lVar10 = 0;
  if (((*(byte *)*puVar12 & 0x6b) == 1) &&
     (_Str = *(char **)((byte *)*puVar12 + 8), _Str != (char *)0x0)) {
    lVar10 = strtol(_Str,(char **)0x0,0);
  }
  *(long *)(param_1 + 0x7e) = lVar10;
  if (param_1[0x2c] == 0) {
    puVar12 = &DAT_14c9a1308;
  }
  else {
    puVar12 = (undefined8 *)FUN_1408db3b0(param_1[0x2c],"listgroups");
  }
  if (((byte *)*puVar12 != (byte *)0x0) && ((*(byte *)*puVar12 & 3) != 0)) {
    local_118 = (void *)0x0;
    uStack_110 = 0;
    local_98 = FUN_145da3b84();
    if (local_98 == 0) {
      lStack_90 = 0;
    }
    else {
      lStack_90 = *(longlong *)(local_98 + 0x50);
    }
    uStack_88 = 0xffffffff;
    uStack_84 = 0x101;
    uStack_82 = 0;
    FUN_144a2daf0(&local_98);
    if (lStack_90 != 0) {
      do {
        local_130 = 0;
        local_138 = 0;
        FUN_1446e0fc6(puVar12,&local_118,lStack_90,0xffffffff);
        lStack_90 = *(longlong *)(lStack_90 + 0x18);
        FUN_144a2daf0(&local_98);
      } while (lStack_90 != 0);
    }
    FUN_145da3bf4(param_1 + 0x8a,&local_118);
    if (local_118 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if (*plVar16 == 0) {
    puVar12 = &DAT_14c9a1308;
  }
  else {
    puVar12 = (undefined8 *)FUN_1408db3b0(*plVar16,"disabled_trick_camera_idents");
  }
  if (((byte *)*puVar12 != (byte *)0x0) && ((*(byte *)*puVar12 & 3) != 0)) {
    ppvVar2 = (void **)(param_1 + 0x77);
    local_118 = (void *)0x0;
    uStack_110 = 0;
    *(undefined4 *)(param_1 + 0x78) = 0;
    if (*(int *)((longlong)param_1 + 0x3c4) < 0) {
      FUN_1402191ca(ppvVar2,0);
    }
    local_98 = FUN_145da3b4c();
    if (local_98 == 0) {
      lStack_90 = 0;
    }
    else {
      lStack_90 = *(longlong *)(local_98 + 0x50);
    }
    uStack_88 = 0xffffffff;
    uStack_84 = 0x101;
    uStack_82 = 0;
    FUN_144a2daf0(&local_98);
    if (lStack_90 != 0) {
      do {
        local_130 = 0;
        local_138 = 0;
        FUN_1446e0fc6(puVar12,&local_118,lStack_90,0xffffffff);
        lStack_90 = *(longlong *)(lStack_90 + 0x18);
        FUN_144a2daf0(&local_98);
      } while (lStack_90 != 0);
    }
    pvVar6 = local_118;
    if (ppvVar2 != &local_118) {
      iVar4 = (int)uStack_110;
      lVar13 = (longlong)(int)uStack_110;
      *(int *)(param_1 + 0x78) = (int)uStack_110;
      if ((int)uStack_110 == 0 && *(int *)((longlong)param_1 + 0x3c4) == 0) {
        *(undefined4 *)((longlong)param_1 + 0x3c4) = 0;
      }
      else {
        FUN_1401b309e(ppvVar2,uStack_110 & 0xffffffff);
        if (iVar4 != 0) {
          memcpy(*ppvVar2,pvVar6,lVar13 << 3);
        }
      }
    }
    if (local_118 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  plVar1 = param_1 + 0x8c;
  if ((int)param_1[0x8d] != *(int *)((longlong)param_1 + 0x494)) {
    FUN_14587c8aa(plVar1);
    FUN_145da4014(plVar1);
  }
  if (*plVar16 == 0) {
    puVar12 = &DAT_14c9a1308;
  }
  else {
    puVar12 = (undefined8 *)FUN_1408db3b0(*plVar16,"cellclasses");
  }
  if (((byte *)*puVar12 != (byte *)0x0) && ((*(byte *)*puVar12 & 3) != 0)) {
    uVar17 = 0;
    local_78 = 0;
    local_70 = 0;
    local_98 = 0;
    lStack_90 = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    local_118 = (void *)FUN_145da3bbc();
    if (local_118 != (void *)0x0) {
      uVar17 = *(ulonglong *)((longlong)local_118 + 0x50);
    }
    local_108 = 0xffffffff;
    local_104 = 0x101;
    local_102 = 0;
    uStack_110 = uVar17;
    FUN_144a2daf0(&local_118);
    if (uStack_110 != 0) {
      do {
        local_130 = 0;
        local_138 = 0;
        FUN_1446e0fc6(puVar12,&local_98,uStack_110,0xffffffff);
        uStack_110 = *(ulonglong *)(uStack_110 + 0x18);
        FUN_144a2daf0(&local_118);
      } while (uStack_110 != 0);
    }
    FUN_14058acb2(plVar1,&local_98);
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_1407a3a68(&local_98);
  }
  if (*(char *)((longlong)param_1 + 0x3d4) == '\x01') {
    do {
      FUN_148e9361c(param_1);
    } while (*(char *)((longlong)param_1 + 0x3d4) != '\0');
  }
  puVar7 = *(ushort **)(local_120 + 0x80);
  if (puVar7 != (ushort *)0x0) {
    *puVar7 = *puVar7 | (ushort)(1L << (*(byte *)(local_120 + 0x78) & 0x3f));
  }
  FUN_140cc83f7(local_b8,uStack_b0 & 0xffffffff);
  if (local_b8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_145da30e0:
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145da38cf FUN_145da38cf body=41 status=ok
// SIG undefined FUN_145da38cf(void)

void FUN_145da38cf(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_145da38f8(param_1);
    param_1 = param_1 + 0xb0;
  }
  return;
}



// FUNCTION 145da38f8 FUN_145da38f8 body=140 status=ok
// SIG undefined FUN_145da38f8(void)

void FUN_145da38f8(longlong *param_1)

{
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_14154ca0d(param_1[9],(int)param_1[10]);
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
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



// FUNCTION 145da3984 FUN_145da3984 body=55 status=ok
// SIG undefined FUN_145da3984(void)

void FUN_145da3984(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb8658 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb8658 = FUN_140002ddd(FUN_146603e45,uVar1,L"OakUIWidgetData_Customization");
  }
  return;
}



// FUNCTION 145da39bc FUN_145da39bc body=55 status=ok
// SIG undefined FUN_145da39bc(void)

void FUN_145da39bc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb8688 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb8688 = FUN_140002ddd(FUN_146603ef9,uVar1,L"CameraContextWrapper");
  }
  return;
}



// FUNCTION 145da39f4 FUN_145da39f4 body=77 status=ok
// SIG undefined FUN_145da39f4(void)

undefined8 FUN_145da39f4(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x160) == 0) {
    puVar1 = &DAT_14c9a1308;
  }
  else {
    puVar1 = (undefined8 *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),&DAT_14cbe2618);
  }
  uVar2 = FUN_144a7cdd6(puVar1,0);
  FUN_1446ddc76(param_2,uVar2,1);
  return param_2;
}



// FUNCTION 145da3a42 FUN_145da3a42 body=265 status=ok
// SIG undefined FUN_145da3a42(void)

void FUN_145da3a42(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(byte *)(param_1 + 0x8c) & 0x80) != 0) {
    puVar1 = (undefined8 *)FUN_14001cc68(0x68,0x10);
    if (*(longlong *)(param_1 + 0x160) == 0) {
      puVar2 = &DAT_14c9a1308;
    }
    else {
      puVar2 = (undefined8 *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),&DAT_14cbe2618);
    }
    uVar3 = FUN_144a7cdd6(puVar2,0);
    FUN_1446ddc76(&local_40,uVar3,1);
    *puVar1 = &PTR_FUN_14b9cd3a0;
    FUN_1446ddc76(&local_38,"UpdateStandIn",1);
    FUN_14039176c(puVar1,*(undefined8 *)(param_1 + 0x30),local_38,1);
    *puVar1 = &PTR_FUN_14b9cd3a0;
    puVar1[7] = DAT_14cbe0120;
    puVar1[8] = *(undefined8 *)(param_1 + 0x18);
    puVar1[9] = local_40;
    *(undefined1 *)(puVar1 + 0xc) = 0;
    FUN_140391314(param_1,puVar1);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145da3b4c FUN_145da3b4c body=55 status=ok
// SIG undefined FUN_145da3b4c(void)

void FUN_145da3b4c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb8670 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb8670 = FUN_140002ddd(FUN_146603e9f,uVar1,L"IdentListWrapper");
  }
  return;
}



// FUNCTION 145da3b84 FUN_145da3b84 body=55 status=ok
// SIG undefined FUN_145da3b84(void)

void FUN_145da3b84(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb86a0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb86a0 = FUN_140002ddd(FUN_146603f53,uVar1,L"ListGroupWrapper");
  }
  return;
}



// FUNCTION 145da3bbc FUN_145da3bbc body=55 status=ok
// SIG undefined FUN_145da3bbc(void)

void FUN_145da3bbc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb86b8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb86b8 = FUN_140002ddd(FUN_146603fad,uVar1,L"CellClassesWrapper");
  }
  return;
}



// FUNCTION 145da3bf4 FUN_145da3bf4 body=79 status=ok
// SIG undefined FUN_145da3bf4(void)

undefined8 * FUN_145da3bf4(undefined8 *param_1,undefined8 *param_2)

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
      FUN_145da3fa0(param_1,iVar1);
      FUN_145da3c43(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 145da3c43 FUN_145da3c43 body=52 status=ok
// SIG undefined FUN_145da3c43(void)

void FUN_145da3c43(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_145da3c78(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 145da3c78 FUN_145da3c78 body=71 status=ok
// SIG undefined FUN_145da3c78(void)

undefined8 * FUN_145da3c78(undefined8 *param_1,undefined8 *param_2)

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
  return param_1;
}



// FUNCTION 145da3cc0 FUN_145da3cc0 body=649 status=ok
// SIG undefined FUN_145da3cc0(void)

void FUN_145da3cc0(longlong param_1)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar2 = *(int *)(param_1 + 0xbc);
  FUN_145da38cf(*(undefined8 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0xb8));
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if ((iVar2 < 0) && (*(int *)(param_1 + 0xbc) != 0)) {
    FUN_148e36114(param_1 + 0xb0,0);
  }
  *(undefined4 *)(param_1 + 0xc0) = 0xffffffff;
  FUN_1400b22c2(&local_38,&DAT_149e02088);
  if ((longlong *)(param_1 + 200) == &local_38) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 200) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 200) = local_38;
    local_38 = 0;
    *(int *)(param_1 + 0xd0) = (int)uStack_30;
    *(undefined4 *)(param_1 + 0xd4) = uStack_30._4_4_;
  }
  FUN_1408226d0(&DAT_14cbdd7d0,&local_38,1);
  lVar3 = local_38;
  iVar2 = (int)uStack_30;
  uVar5 = (int)uStack_30 - 1;
  if ((int)uStack_30 == 0) {
    uVar5 = 0;
  }
  if (0 < (int)uVar5) {
    uVar6 = 0;
    do {
      uVar1 = *(ushort *)(local_38 + uVar6 * 2);
      *(ushort *)(local_38 + uVar6 * 2) = (ushort)(uVar1 - 0x41 < 0x1a) * 0x20 + uVar1;
      uVar6 = uVar6 + 1;
    } while (uVar5 != uVar6);
  }
  uVar4 = uStack_30._4_4_;
  local_38 = 0;
  uStack_30 = 0;
  if (*(longlong *)(param_1 + 0x1e8) == 0) {
    *(longlong *)(param_1 + 0x1e8) = lVar3;
    *(int *)(param_1 + 0x1f0) = iVar2;
    *(undefined4 *)(param_1 + 500) = uVar4;
  }
  else {
    FUN_1400020a8();
    *(longlong *)(param_1 + 0x1e8) = lVar3;
    *(int *)(param_1 + 0x1f0) = iVar2;
    *(undefined4 *)(param_1 + 500) = uVar4;
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_14025a15c(param_1 + 0x150,0);
  iVar2 = *(int *)(param_1 + 0xe4);
  FUN_145da3f75(*(undefined8 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xe0));
  *(undefined4 *)(param_1 + 0xe0) = 0;
  if ((iVar2 < 0) && (*(int *)(param_1 + 0xe4) != 0)) {
    FUN_148ea05c4(param_1 + 0xd8);
  }
  iVar2 = *(int *)(param_1 + 0xf4);
  FUN_145da3f4a(*(undefined8 *)(param_1 + 0xe8),*(undefined4 *)(param_1 + 0xf0));
  *(undefined4 *)(param_1 + 0xf0) = 0;
  if ((iVar2 < 0) && (*(int *)(param_1 + 0xf4) != 0)) {
    FUN_148ea05f4(param_1 + 0xe8);
  }
  *(undefined4 *)(param_1 + 0x148) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x170) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145da3f4a FUN_145da3f4a body=43 status=ok
// SIG undefined FUN_145da3f4a(void)

void FUN_145da3f4a(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_148c74d74(param_1);
    param_1 = param_1 + 0x188;
  }
  return;
}



// FUNCTION 145da3f75 FUN_145da3f75 body=43 status=ok
// SIG undefined FUN_145da3f75(void)

void FUN_145da3f75(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140ee5626(param_1);
    param_1 = param_1 + 0x120;
  }
  return;
}



// FUNCTION 145da3fa0 FUN_145da3fa0 body=115 status=ok
// SIG undefined FUN_145da3fa0(void)

void FUN_145da3fa0(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,8);
    iVar2 = (int)(uVar1 / 0x18);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x18,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 145da4014 FUN_145da4014 body=310 status=ok
// SIG undefined FUN_145da4014(void)

void FUN_145da4014(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
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
  local_40 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
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
      lVar1 = *local_70;
      lVar2 = (longlong)iStack_54;
      if (*(longlong *)(lVar1 + 0x10 + lVar2 * 0x28) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + lVar2 * 0x28) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145da414c FUN_145da414c body=154 status=ok
// SIG undefined FUN_145da414c(void)

bool FUN_145da414c(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145da41e8 FUN_145da41e8 body=76 status=ok
// SIG undefined FUN_145da41e8(void)

void FUN_145da41e8(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_1408bb964(param_1 + 0x30);
  if (lVar2 != 0) {
    lVar3 = FUN_1403ca142();
    iVar1 = *(int *)(lVar3 + 0x38);
    if ((iVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        lVar3 + 0x30)) {
      FUN_146022004(lVar2,CONCAT71((int7)(int3)((uint)iVar1 >> 8),1));
      return;
    }
  }
  return;
}



// FUNCTION 145da4234 FUN_145da4234 body=628 status=ok
// SIG undefined FUN_145da4234(void)

void FUN_145da4234(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  bool bVar10;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined8 *local_70;
  int local_68;
  undefined1 local_60 [8];
  undefined8 local_58;
  longlong *plStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar8 = param_1 + 0x30;
  lVar6 = FUN_140059518(lVar8);
  if (lVar6 == 0) goto LAB_145da4437;
  lVar7 = FUN_1459afa08(lVar8);
  if (lVar7 == 0) {
    local_58 = 0;
    plStack_50 = (longlong *)0x0;
  }
  else {
    FUN_1408e4d18(lVar7 + 0x3a0,&local_58);
  }
  lVar8 = FUN_1408bb964(lVar8);
  if (lVar8 == 0) {
LAB_145da445d:
    bVar10 = false;
    bVar9 = false;
  }
  else {
    lVar7 = FUN_1403ca142();
    if (((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
         != lVar7 + 0x30)) || (plVar3 = *(longlong **)(lVar8 + 0x48), plVar3 == (longlong *)0x0))
    goto LAB_145da445d;
    lVar8 = FUN_140b6d0be();
    if ((*(int *)(plVar3[2] + 0x38) < *(int *)(lVar8 + 0x38)) ||
       (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
        lVar8 + 0x30)) goto LAB_145da445d;
    iVar5 = FUN_14133ce8a(plVar3);
    bVar9 = 0 < iVar5;
    (**(code **)(*plVar3 + 0x308))(plVar3,local_60);
    iVar5 = FUN_1411eec94(local_60);
    if (iVar5 == 2) {
      FUN_14127bdbc(plVar3,&local_70);
      bVar10 = 0 < local_68;
      if (local_70 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      bVar10 = false;
    }
  }
  lVar8 = FUN_145da44aa(lVar6);
  if (lVar8 != 0) {
    local_70 = (undefined8 *)0x0;
    local_68 = 0;
    FUN_1446efa72(&local_70,0,3,0x10);
    puVar4 = local_70;
    local_68 = 3;
    *local_70 = &PTR_LAB_14b972ed0;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    local_70[2] = lVar7;
    *local_70 = &PTR_FUN_14b9dbf30;
    local_70[3] = 0;
    FUN_14485c47a(local_70 + 3,param_1);
    puVar4[4] = FUN_1460d6fb4;
    if (*(char *)(param_2 + 8) != '\0') {
      bVar10 = bVar9;
    }
    local_78 = 0;
    FUN_14154ca56(lVar8,*(char *)(param_2 + 8),bVar10,&local_70);
    FUN_1449db362(&local_70);
  }
  plVar3 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
LAB_145da4437:
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145da44aa FUN_145da44aa body=105 status=ok
// SIG undefined FUN_145da44aa(void)

void FUN_145da44aa(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_145da4560();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_145da4514(param_1 + 0x138,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145da4514 FUN_145da4514 body=76 status=ok
// SIG undefined FUN_145da4514(void)

void FUN_145da4514(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_145da4560();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_145da4551;
    }
  }
  lVar2 = 0;
LAB_145da4551:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 145da4560 FUN_145da4560 body=228 status=ok
// SIG undefined FUN_145da4560(void)

longlong FUN_145da4560(void)

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
  if (DAT_14cbb22d0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_143564180;
    local_28 = &LAB_1411b127e;
    local_38 = &LAB_148c5888d;
    local_40 = FUN_1465f4ec6;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x60;
    FUN_14081cfa3(L"/Script/OakGame",L"OakUIDataCollector_DialogBox",&DAT_14cbb22d0,&DAT_148c5888c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbb22d0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145da4646 FUN_145da4646 body=274 status=ok
// SIG undefined FUN_145da4646(void)

void FUN_145da4646(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined2 local_78;
  undefined1 local_76;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  longlong local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = FUN_1408bb964(param_1 + 0x30);
  if (lVar1 != 0) {
    lVar2 = FUN_1403ca142();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      local_50 = 0;
      local_48 = 0;
      local_78 = 0;
      local_76 = 0;
      local_70 = 0;
      uStack_68 = 0;
      local_44 = 0xffffffff00000080;
      local_3c = 0;
      local_30 = 0;
      local_28 = 0;
      local_80 = *(undefined8 *)(param_2 + 8);
      if (*(longlong *)(param_2 + 0x10) != 0) {
        FUN_146228670(&local_80,*(longlong *)(param_2 + 0x10),lVar1,0);
      }
      FUN_145da475a(lVar1,&local_80);
      local_28 = 0;
      if (local_30 != 0) {
        FUN_1400020a8();
      }
      FUN_14619dadc(&local_70);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145da475a FUN_145da475a body=310 status=ok
// SIG undefined FUN_145da475a(void)

void FUN_145da475a(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_145a9f60a();
  if (cVar1 != '\0') {
    uVar2 = FUN_140d27a2a(param_1);
    FUN_14154ccb4(uVar2);
    lVar3 = FUN_140d27a2a(param_1);
    *(undefined8 *)(lVar3 + 0xb8) = *param_2;
    *(undefined4 *)(lVar3 + 0xbf) = *(undefined4 *)((longlong)param_2 + 7);
    FUN_145da48a2(lVar3 + 200,param_2 + 2);
    uVar2 = FUN_14119d4d6(param_1);
    if (DAT_14c872bf2 == '\x01') {
      lVar3 = FUN_140d27a2a(param_1);
      FUN_146228670(lVar3 + 0xb8,DAT_14cbca1d0,param_1,uVar2);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
    FUN_146010760(param_2,&local_30,param_1,uVar2);
    if (local_30 == DAT_14cbca1c8) {
      uVar4 = FUN_140d27a2a(param_1);
      cVar1 = FUN_14154cce4(uVar4,uVar2);
      if (cVar1 == '\0') {
        FUN_14413f964(param_1);
        FUN_146022004(param_1,0);
      }
      else {
        uVar4 = FUN_140d27a2a(param_1);
        FUN_145da4998(uVar4,uVar2);
      }
    }
    else {
      FUN_14621ea62(param_1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145da48a2 FUN_145da48a2 body=122 status=ok
// SIG undefined FUN_145da48a2(void)

longlong FUN_145da48a2(longlong param_1,longlong param_2)

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
    FUN_145da491c(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 145da491c FUN_145da491c body=123 status=ok
// SIG undefined FUN_145da491c(void)

undefined8 * FUN_145da491c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1459ff716(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1403951a8(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0x18);
    }
  }
  return param_1;
}



// FUNCTION 145da4998 FUN_145da4998 body=733 status=ok
// SIG undefined FUN_145da4998(void)

void FUN_145da4998(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_a8 [32];
  longlong *local_88 [2];
  longlong *local_78 [2];
  undefined8 local_68;
  undefined4 local_60;
  undefined8 *local_58;
  undefined4 local_50;
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = param_1 + 100;
  cVar1 = FUN_144729dda(lVar4);
  if (cVar1 == '\0') goto LAB_145da4c0e;
  lVar2 = FUN_14479d2ce(lVar4);
  if ((*(longlong *)(lVar2 + 0x30) == 0) ||
     (lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x30) + 0x360), lVar2 == 0)) {
    bVar6 = false;
  }
  else {
    if (*(char *)(param_1 + 0xc1) == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
    }
    FUN_146010760(param_1 + 0xb8,&local_58,lVar2,param_2);
    bVar6 = local_58 == DAT_14cbcd3d0 || local_58 == DAT_14cbcd3c8;
  }
  cVar1 = FUN_14154cce4(param_1,param_2);
  if ((bVar6) || (cVar1 == '\0')) goto LAB_145da4c0e;
  FUN_144a5dc74(local_78);
  FUN_144a5dc74(local_88);
  local_60 = DAT_14cbcdc60;
  local_68 = DAT_14cbcdc58;
  FUN_1448075d0(&local_58);
  FUN_140ac6c96(&local_58,local_78);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  local_60 = DAT_14cbcdc78;
  local_68 = DAT_14cbcdc70;
  FUN_1448075d0(&local_58);
  FUN_140ac6c96(&local_58,local_88);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  uVar3 = FUN_14479d2ce(lVar4);
  lVar4 = FUN_14119d4d6(uVar3);
  if (lVar4 == 0) {
LAB_145da4c4e:
    lVar4 = 0;
  }
  else {
    lVar2 = FUN_14030d4a0();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        != lVar2 + 0x30)) goto LAB_145da4c4e;
  }
  local_68 = 0;
  FUN_14485c47a(&local_68,lVar4);
  uVar3 = FUN_14479d2ce(&local_68);
  lVar4 = FUN_145da44aa(uVar3);
  uVar3 = local_68;
  if (lVar4 != 0) {
    local_58 = (undefined8 *)0x0;
    local_50 = 0;
    FUN_1446efa72(&local_58,0,3,0x10);
    local_50 = 3;
    *local_58 = &PTR_LAB_14b972ed0;
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
    local_58[2] = lVar5;
    *local_58 = &PTR_FUN_14b97e3b0;
    local_58[3] = param_1;
    local_58[4] = uVar3;
    FUN_145da4c8e(lVar4,local_78,local_88,&local_58);
    FUN_1449db362(&local_58);
  }
  if (local_88[0] != (longlong *)0x0) {
    (**(code **)(*local_88[0] + 0x10))();
  }
  if (local_78[0] != (longlong *)0x0) {
    (**(code **)(*local_78[0] + 0x10))();
  }
LAB_145da4c0e:
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145da4c8e FUN_145da4c8e body=685 status=ok
// SIG undefined FUN_145da4c8e(void)

undefined4
FUN_145da4c8e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  longlong local_68;
  ulonglong uStack_60;
  wchar_t *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = param_3;
  lVar2 = FUN_145da4f3c();
  local_58 = L"Dialog_Yes";
  local_50 = 10;
  FUN_1446e940c(local_6c,&local_58);
  local_58 = L"OakDialogBox";
  local_50 = 0xc;
  FUN_1446e940c(local_70,&local_58);
  FUN_140208bae(&local_58,local_70,local_6c,&DAT_149e06384);
  FUN_140008f88(lVar2,&local_58);
  if (local_58 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_58 + 0x10))();
  }
  FUN_1446f470e(&local_58,&DAT_149e06384,1);
  *(wchar_t **)(lVar2 + 0x10) = local_58;
  lVar2 = FUN_145da4f3c(&local_68);
  local_58 = L"Dialog_No";
  local_50 = 9;
  FUN_1446e940c(local_6c,&local_58);
  local_58 = L"OakDialogBox";
  local_50 = 0xc;
  FUN_1446e940c(local_70,&local_58);
  FUN_140208bae(&local_58,local_70,local_6c,&DAT_149e06338);
  FUN_140008f88(lVar2,&local_58);
  if (local_58 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_58 + 0x10))();
  }
  FUN_1446f470e(&local_58,&DAT_149e06338,1);
  *(wchar_t **)(lVar2 + 0x10) = local_58;
  lVar2 = FUN_145da4f3c(&local_68);
  local_58 = L"Dialog_Cancel";
  local_50 = 0xd;
  FUN_1446e940c(local_6c,&local_58);
  local_58 = L"OakDialogBox";
  local_50 = 0xc;
  FUN_1446e940c(local_70,&local_58);
  FUN_140208bae(&local_58,local_70,local_6c,L"Cancel");
  FUN_140008f88(lVar2,&local_58);
  if (local_58 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_58 + 0x10))();
  }
  FUN_1446f470e(&local_58,L"Cancel",1);
  *(wchar_t **)(lVar2 + 0x10) = local_58;
  local_80 = 1;
  local_88 = 0;
  local_90 = 0;
  local_98 = param_4;
  uVar1 = FUN_1459dd948(param_1,param_2,local_78,&local_68);
  FUN_140e0067b(local_68,uStack_60 & 0xffffffff);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145da4f3c FUN_145da4f3c body=64 status=ok
// SIG undefined FUN_145da4f3c(void)

longlong FUN_145da4f3c(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_145da4fc8(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x20 + *param_1;
  FUN_145da4f7c(lVar2,1);
  return lVar2;
}



// FUNCTION 145da4f7c FUN_145da4f7c body=75 status=ok
// SIG undefined FUN_145da4f7c(void)

void FUN_145da4f7c(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    plVar2 = (longlong *)FUN_140e82300();
    plVar1 = (longlong *)*plVar2;
    *param_1 = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    *(int *)(param_1 + 1) = (int)plVar2[1];
    param_1[2] = 0;
    *(undefined1 *)(param_1 + 3) = 1;
    param_1 = param_1 + 4;
  }
  return;
}



// FUNCTION 145da4fc8 FUN_145da4fc8 body=132 status=ok
// SIG undefined FUN_145da4fc8(void)

void FUN_145da4fc8(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 5,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145da5054 FUN_145da5054 body=151 status=ok
// SIG undefined FUN_145da5054(void)

void FUN_145da5054(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  *(uint *)(param_1 + 2) = (int)param_1[2] + 0xfU & 0xfffffff0;
  FUN_145da50ec();
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_1,iVar1);
  }
  lVar2 = *param_1;
  lVar4 = (longlong)iVar1 * 0x30;
  lVar3 = param_1[2];
  *(undefined8 *)(lVar2 + lVar4) = param_2;
  *(undefined2 **)(lVar2 + 8 + lVar4) = &DAT_149dfb77a;
  *(undefined4 *)(lVar2 + 0x10 + lVar4) = 0x7b;
  *(int *)(lVar2 + 0x14 + lVar4) = (int)lVar3;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar4) = &DAT_14cc1d540;
  *(int *)(param_1 + 2) = (int)param_1[2] + 0x10;
  return;
}



// FUNCTION 145da50ec FUN_145da50ec body=261 status=ok
// SIG undefined FUN_145da50ec(void)

void FUN_145da50ec(void)

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
              0x110) < DAT_14cc1d5c0) {
    FUN_144b3d300(&DAT_14cc1d5c0);
    if (DAT_14cc1d5c0 == -1) {
      FUN_145da51f2(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FSkinedMeshExecDataInterfaceParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0x30;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cc1d540,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14452f1cd);
      _Init_thread_footer(&DAT_14cc1d5c0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145da51f2 FUN_145da51f2 body=232 status=ok
// SIG undefined FUN_145da51f2(void)

longlong * FUN_145da51f2(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  longlong lVar13;
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
  pcVar12 = FUN_14673c1d2;
  do {
    pcVar12 = (code *)(*pcVar12)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar12 != (code *)0x0);
  lVar13 = (longlong)(int)param_1[1];
  if (1 < lVar13) {
    lVar4 = *param_1;
    lVar14 = lVar13 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar5 = *(undefined8 *)(lVar4 + lVar15);
      uVar6 = ((undefined8 *)(lVar4 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar7 = *(undefined8 *)(lVar4 + lVar14);
      uVar8 = ((undefined8 *)(lVar4 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      uVar9 = *puVar2;
      uVar10 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      uVar11 = puVar2[1];
      puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar11;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      *puVar2 = uVar9;
      puVar2[1] = uVar10;
      *(undefined8 *)(lVar4 + lVar15) = uVar7;
      ((undefined8 *)(lVar4 + lVar15))[1] = uVar8;
      local_48._0_4_ = (undefined4)uVar5;
      local_48._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar6;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar4 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar5;
      uStack_40 = uVar6;
    } while ((lVar13 * 8 & 0xfffffffffffffff0U) * 3 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145da52e0 FUN_145da52e0 body=205 status=ok
// SIG undefined FUN_145da52e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145da52e0(void)

{
  if ((DAT_14c9f4def & 2) == 0) {
    DAT_14c9f4def = DAT_14c9f4def | 2;
    _DAT_14c9f4d90 = L"FReflectionTraceMeshSDFsCS";
    _DAT_14c9f4da8 = FUN_146826540;
    _DAT_14c9f4db0 = FUN_146825d77;
    _DAT_14c9f4db8 = FUN_146825fd6;
    _DAT_14c9f4dc0 = FUN_1407e02ea;
    _DAT_14c9f4dc8 = FUN_146826273;
    _DAT_14c9f4da0 = FUN_1471efdde;
    _DAT_14c9f4de0 = 0xffffffff000000e0;
    _DAT_14c9f4de8 = 8;
    DAT_14c9f4dec = 0;
    _DAT_14c9f4dd0 = &LAB_1471efe08;
    FUN_145da53ae();
    FUN_1407e00cc(&DAT_14c9f4d88);
    return;
  }
  return;
}



// FUNCTION 145da53ae FUN_145da53ae body=123 status=ok
// SIG undefined FUN_145da53ae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145da53ae(void)

{
  _DAT_14c9f7f38 = L"BASE";
  DAT_14c9f7f62 = 4;
  _DAT_14c9f7f40 = FUN_140b35ae4();
  _DAT_14c9f7f48 = DAT_14c9f4d98;
  _DAT_14c9f7f50 = &LAB_14682652b;
  DAT_14c9f4d98 = &DAT_14c9f7f38;
  DAT_14c9f4ded = DAT_14c9f4ded + '\x01';
  _DAT_14c9f7f58 = 0x100000000;
  if (*(char *)(_DAT_14c9f7f40 + 100) != '\0') {
    DAT_14c9f4dee = DAT_14c9f4dee + '\x01';
  }
  return;
}



// FUNCTION 145da542a FUN_145da542a body=226 status=ok
// SIG undefined FUN_145da542a(void)

longlong * FUN_145da542a(longlong *param_1)

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
  pcVar13 = FUN_145d3c300;
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



// FUNCTION 145da5512 FUN_145da5512 body=142 status=ok
// SIG undefined FUN_145da5512(void)

code * FUN_145da5512(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145aa826c();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"IndirectTracingParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FLumenIndirectTracingParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x370000001d3;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462df898;
}



// FUNCTION 145da55a0 FUN_145da55a0 body=144 status=ok
// SIG undefined FUN_145da55a0(void)

code * FUN_145da55a0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145da5630();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"MeshSDFGridParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FLumenMeshSDFGridParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x100000001d1;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462df92a;
}



// FUNCTION 145da5630 FUN_145da5630 body=268 status=ok
// SIG undefined FUN_145da5630(void)

undefined * FUN_145da5630(void)

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
              0x110) < DAT_14c9f82d8) {
    FUN_144b3d300(&DAT_14c9f82d8);
    if (DAT_14c9f82d8 == -1) {
      FUN_145da573e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FLumenMeshSDFGridParameters";
      local_38 = 0;
      local_50 = 0x170;
      local_58 = 0x57;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f8258,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d5962d);
      _Init_thread_footer(&DAT_14c9f82d8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9f8258;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


