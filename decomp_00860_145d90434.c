// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145d90434 FUN_145d90434 body=135 status=ok
// SIG undefined FUN_145d90434(void)

void FUN_145d90434(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb1b0a8;
  if (DAT_14cb1b0dc != 0) {
    *(int *)(DAT_14cb1b0a8 + (longlong)DAT_14cb1b0d8 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb1b0dc) {
    iVar4 = DAT_14cb1b0d8;
  }
  puVar1[1] = iVar4;
  DAT_14cb1b0dc = DAT_14cb1b0dc + 1;
  puVar5 = &DAT_14cb1b0b8;
  if (DAT_14cb1b0c8 != (undefined *)0x0) {
    puVar5 = DAT_14cb1b0c8;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb1b0d8 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d904bc FUN_145d904bc body=114 status=ok
// SIG undefined FUN_145d904bc(void)

void FUN_145d904bc(void)

{
  longlong *plVar1;
  
  FUN_1460e0e66();
  FUN_145d9052e(DAT_14cb244f4);
  if (DAT_14cb24480 == &DAT_14cb244f0) {
    DAT_14cb24480 = (undefined4 *)0x0;
  }
  if (DAT_14cb24530 != 0) {
    plVar1 = &DAT_14cb24550;
    if (DAT_14cb24540 != (longlong *)0x0) {
      plVar1 = DAT_14cb24540;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb24518 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d9052e FUN_145d9052e body=242 status=ok
// SIG undefined FUN_145d9052e(void)

void FUN_145d9052e(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb24490 != DAT_14cb244bc) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb244c0;
    if (DAT_14cb244c8 != (undefined *)0x0) {
      puVar6 = DAT_14cb244c8;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb244d0 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb24488 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb24488 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb244c0;
        if (DAT_14cb244c8 != (undefined *)0x0) {
          puVar6 = DAT_14cb244c8;
        }
        lVar1 = DAT_14cb24488 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb24488 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d90620();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d90620 FUN_145d90620 body=135 status=ok
// SIG undefined FUN_145d90620(void)

void FUN_145d90620(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb24488;
  if (DAT_14cb244bc != 0) {
    *(int *)(DAT_14cb24488 + (longlong)DAT_14cb244b8 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb244bc) {
    iVar4 = DAT_14cb244b8;
  }
  puVar1[1] = iVar4;
  DAT_14cb244bc = DAT_14cb244bc + 1;
  puVar5 = &DAT_14cb24498;
  if (DAT_14cb244a8 != (undefined *)0x0) {
    puVar5 = DAT_14cb244a8;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb244b8 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d906a8 FUN_145d906a8 body=114 status=ok
// SIG undefined FUN_145d906a8(void)

void FUN_145d906a8(void)

{
  longlong *plVar1;
  
  FUN_1460e15fc();
  FUN_145d9071a(DAT_14cb25b54);
  if (DAT_14cb25ad8 == &DAT_14cb25b50) {
    DAT_14cb25ad8 = (undefined4 *)0x0;
  }
  if (DAT_14cb25b90 != 0) {
    plVar1 = &DAT_14cb25bb0;
    if (DAT_14cb25ba0 != (longlong *)0x0) {
      plVar1 = DAT_14cb25ba0;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb25b78 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d9071a FUN_145d9071a body=242 status=ok
// SIG undefined FUN_145d9071a(void)

void FUN_145d9071a(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb25ae8 != DAT_14cb25b14) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb25b18;
    if (DAT_14cb25b20 != (undefined *)0x0) {
      puVar6 = DAT_14cb25b20;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb25b28 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb25ae0 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb25ae0 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb25b18;
        if (DAT_14cb25b20 != (undefined *)0x0) {
          puVar6 = DAT_14cb25b20;
        }
        lVar1 = DAT_14cb25ae0 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb25ae0 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d9080c();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d9080c FUN_145d9080c body=135 status=ok
// SIG undefined FUN_145d9080c(void)

void FUN_145d9080c(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb25ae0;
  if (DAT_14cb25b14 != 0) {
    *(int *)(DAT_14cb25ae0 + (longlong)DAT_14cb25b10 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb25b14) {
    iVar4 = DAT_14cb25b10;
  }
  puVar1[1] = iVar4;
  DAT_14cb25b14 = DAT_14cb25b14 + 1;
  puVar5 = &DAT_14cb25af0;
  if (DAT_14cb25b00 != (undefined *)0x0) {
    puVar5 = DAT_14cb25b00;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb25b10 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d90894 FUN_145d90894 body=114 status=ok
// SIG undefined FUN_145d90894(void)

void FUN_145d90894(void)

{
  longlong *plVar1;
  
  FUN_14101b902();
  FUN_145d90906(DAT_14cb54274);
  if (DAT_14cb54200 == &DAT_14cb54270) {
    DAT_14cb54200 = (undefined4 *)0x0;
  }
  if (DAT_14cb542b0 != 0) {
    plVar1 = &DAT_14cb542d0;
    if (DAT_14cb542c0 != (longlong *)0x0) {
      plVar1 = DAT_14cb542c0;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb54298 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d90906 FUN_145d90906 body=242 status=ok
// SIG undefined FUN_145d90906(void)

void FUN_145d90906(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb54210 != DAT_14cb5423c) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb54240;
    if (DAT_14cb54248 != (undefined *)0x0) {
      puVar6 = DAT_14cb54248;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb54250 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb54208 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb54208 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb54240;
        if (DAT_14cb54248 != (undefined *)0x0) {
          puVar6 = DAT_14cb54248;
        }
        lVar1 = DAT_14cb54208 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb54208 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d909f8();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d909f8 FUN_145d909f8 body=135 status=ok
// SIG undefined FUN_145d909f8(void)

void FUN_145d909f8(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb54208;
  if (DAT_14cb5423c != 0) {
    *(int *)(DAT_14cb54208 + (longlong)DAT_14cb54238 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb5423c) {
    iVar4 = DAT_14cb54238;
  }
  puVar1[1] = iVar4;
  DAT_14cb5423c = DAT_14cb5423c + 1;
  puVar5 = &DAT_14cb54218;
  if (DAT_14cb54228 != (undefined *)0x0) {
    puVar5 = DAT_14cb54228;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb54238 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d90a80 FUN_145d90a80 body=114 status=ok
// SIG undefined FUN_145d90a80(void)

void FUN_145d90a80(void)

{
  longlong *plVar1;
  
  FUN_140df9148();
  FUN_145d90af2(DAT_14cb6fe34);
  if (DAT_14cb6fdb8 == &DAT_14cb6fe30) {
    DAT_14cb6fdb8 = (undefined4 *)0x0;
  }
  if (DAT_14cb6fe70 != 0) {
    plVar1 = &DAT_14cb6fe90;
    if (DAT_14cb6fe80 != (longlong *)0x0) {
      plVar1 = DAT_14cb6fe80;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb6fe58 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d90af2 FUN_145d90af2 body=242 status=ok
// SIG undefined FUN_145d90af2(void)

void FUN_145d90af2(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb6fdc8 != DAT_14cb6fdf4) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb6fdf8;
    if (DAT_14cb6fe00 != (undefined *)0x0) {
      puVar6 = DAT_14cb6fe00;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb6fe08 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb6fdc0 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb6fdc0 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb6fdf8;
        if (DAT_14cb6fe00 != (undefined *)0x0) {
          puVar6 = DAT_14cb6fe00;
        }
        lVar1 = DAT_14cb6fdc0 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb6fdc0 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d90be4();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d90be4 FUN_145d90be4 body=135 status=ok
// SIG undefined FUN_145d90be4(void)

void FUN_145d90be4(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb6fdc0;
  if (DAT_14cb6fdf4 != 0) {
    *(int *)(DAT_14cb6fdc0 + (longlong)DAT_14cb6fdf0 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb6fdf4) {
    iVar4 = DAT_14cb6fdf0;
  }
  puVar1[1] = iVar4;
  DAT_14cb6fdf4 = DAT_14cb6fdf4 + 1;
  puVar5 = &DAT_14cb6fdd0;
  if (DAT_14cb6fde0 != (undefined *)0x0) {
    puVar5 = DAT_14cb6fde0;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb6fdf0 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d90c6c FUN_145d90c6c body=114 status=ok
// SIG undefined FUN_145d90c6c(void)

void FUN_145d90c6c(void)

{
  longlong *plVar1;
  
  FUN_140e50948();
  FUN_145d90cde(DAT_14cb6ff44);
  if (DAT_14cb6fed0 == &DAT_14cb6ff40) {
    DAT_14cb6fed0 = (undefined4 *)0x0;
  }
  if (DAT_14cb6ff80 != 0) {
    plVar1 = &DAT_14cb6ffa0;
    if (DAT_14cb6ff90 != (longlong *)0x0) {
      plVar1 = DAT_14cb6ff90;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb6ff68 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d90cde FUN_145d90cde body=242 status=ok
// SIG undefined FUN_145d90cde(void)

void FUN_145d90cde(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb6fee0 != DAT_14cb6ff0c) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb6ff10;
    if (DAT_14cb6ff18 != (undefined *)0x0) {
      puVar6 = DAT_14cb6ff18;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb6ff20 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb6fed8 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb6fed8 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb6ff10;
        if (DAT_14cb6ff18 != (undefined *)0x0) {
          puVar6 = DAT_14cb6ff18;
        }
        lVar1 = DAT_14cb6fed8 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb6fed8 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d90dd0();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d90dd0 FUN_145d90dd0 body=135 status=ok
// SIG undefined FUN_145d90dd0(void)

void FUN_145d90dd0(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb6fed8;
  if (DAT_14cb6ff0c != 0) {
    *(int *)(DAT_14cb6fed8 + (longlong)DAT_14cb6ff08 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb6ff0c) {
    iVar4 = DAT_14cb6ff08;
  }
  puVar1[1] = iVar4;
  DAT_14cb6ff0c = DAT_14cb6ff0c + 1;
  puVar5 = &DAT_14cb6fee8;
  if (DAT_14cb6fef8 != (undefined *)0x0) {
    puVar5 = DAT_14cb6fef8;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb6ff08 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d90e58 FUN_145d90e58 body=114 status=ok
// SIG undefined FUN_145d90e58(void)

void FUN_145d90e58(void)

{
  longlong *plVar1;
  
  FUN_140cad282();
  FUN_145d90eca(DAT_14cb702e4);
  if (DAT_14cb70268 == &DAT_14cb702e0) {
    DAT_14cb70268 = (undefined4 *)0x0;
  }
  if (DAT_14cb70320 != 0) {
    plVar1 = &DAT_14cb70340;
    if (DAT_14cb70330 != (longlong *)0x0) {
      plVar1 = DAT_14cb70330;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb70308 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d90eca FUN_145d90eca body=242 status=ok
// SIG undefined FUN_145d90eca(void)

void FUN_145d90eca(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb70278 != DAT_14cb702a4) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb702a8;
    if (DAT_14cb702b0 != (undefined *)0x0) {
      puVar6 = DAT_14cb702b0;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb702b8 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb70270 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb70270 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb702a8;
        if (DAT_14cb702b0 != (undefined *)0x0) {
          puVar6 = DAT_14cb702b0;
        }
        lVar1 = DAT_14cb70270 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb70270 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d90fbc();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d90fbc FUN_145d90fbc body=135 status=ok
// SIG undefined FUN_145d90fbc(void)

void FUN_145d90fbc(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb70270;
  if (DAT_14cb702a4 != 0) {
    *(int *)(DAT_14cb70270 + (longlong)DAT_14cb702a0 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb702a4) {
    iVar4 = DAT_14cb702a0;
  }
  puVar1[1] = iVar4;
  DAT_14cb702a4 = DAT_14cb702a4 + 1;
  puVar5 = &DAT_14cb70280;
  if (DAT_14cb70290 != (undefined *)0x0) {
    puVar5 = DAT_14cb70290;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb702a0 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d91044 FUN_145d91044 body=114 status=ok
// SIG undefined FUN_145d91044(void)

void FUN_145d91044(void)

{
  longlong *plVar1;
  
  FUN_140901ff8();
  FUN_145d910b6(DAT_14cb70434);
  if (DAT_14cb703c0 == &DAT_14cb70430) {
    DAT_14cb703c0 = (undefined4 *)0x0;
  }
  if (DAT_14cb70470 != 0) {
    plVar1 = &DAT_14cb70490;
    if (DAT_14cb70480 != (longlong *)0x0) {
      plVar1 = DAT_14cb70480;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb70458 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d910b6 FUN_145d910b6 body=242 status=ok
// SIG undefined FUN_145d910b6(void)

void FUN_145d910b6(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb703d0 != DAT_14cb703fc) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb70400;
    if (DAT_14cb70408 != (undefined *)0x0) {
      puVar6 = DAT_14cb70408;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb70410 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb703c8 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb703c8 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb70400;
        if (DAT_14cb70408 != (undefined *)0x0) {
          puVar6 = DAT_14cb70408;
        }
        lVar1 = DAT_14cb703c8 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb703c8 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d911a8();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d911a8 FUN_145d911a8 body=135 status=ok
// SIG undefined FUN_145d911a8(void)

void FUN_145d911a8(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb703c8;
  if (DAT_14cb703fc != 0) {
    *(int *)(DAT_14cb703c8 + (longlong)DAT_14cb703f8 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb703fc) {
    iVar4 = DAT_14cb703f8;
  }
  puVar1[1] = iVar4;
  DAT_14cb703fc = DAT_14cb703fc + 1;
  puVar5 = &DAT_14cb703d8;
  if (DAT_14cb703e8 != (undefined *)0x0) {
    puVar5 = DAT_14cb703e8;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb703f8 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d91230 FUN_145d91230 body=114 status=ok
// SIG undefined FUN_145d91230(void)

void FUN_145d91230(void)

{
  longlong *plVar1;
  
  FUN_140ea96c6();
  FUN_145d912a2(DAT_14cb70544);
  if (DAT_14cb704d0 == &DAT_14cb70540) {
    DAT_14cb704d0 = (undefined4 *)0x0;
  }
  if (DAT_14cb70580 != 0) {
    plVar1 = &DAT_14cb705a0;
    if (DAT_14cb70590 != (longlong *)0x0) {
      plVar1 = DAT_14cb70590;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb70568 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d912a2 FUN_145d912a2 body=242 status=ok
// SIG undefined FUN_145d912a2(void)

void FUN_145d912a2(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb704e0 != DAT_14cb7050c) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb70510;
    if (DAT_14cb70518 != (undefined *)0x0) {
      puVar6 = DAT_14cb70518;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb70520 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb704d8 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb704d8 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb70510;
        if (DAT_14cb70518 != (undefined *)0x0) {
          puVar6 = DAT_14cb70518;
        }
        lVar1 = DAT_14cb704d8 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb704d8 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d91394();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d91394 FUN_145d91394 body=135 status=ok
// SIG undefined FUN_145d91394(void)

void FUN_145d91394(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb704d8;
  if (DAT_14cb7050c != 0) {
    *(int *)(DAT_14cb704d8 + (longlong)DAT_14cb70508 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb7050c) {
    iVar4 = DAT_14cb70508;
  }
  puVar1[1] = iVar4;
  DAT_14cb7050c = DAT_14cb7050c + 1;
  puVar5 = &DAT_14cb704e8;
  if (DAT_14cb704f8 != (undefined *)0x0) {
    puVar5 = DAT_14cb704f8;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb70508 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d9141c FUN_145d9141c body=114 status=ok
// SIG undefined FUN_145d9141c(void)

void FUN_145d9141c(void)

{
  longlong *plVar1;
  
  FUN_1460e1d92();
  FUN_145d9148e(DAT_14cb706d4);
  if (DAT_14cb70658 == &DAT_14cb706d0) {
    DAT_14cb70658 = (undefined4 *)0x0;
  }
  if (DAT_14cb70710 != 0) {
    plVar1 = &DAT_14cb70730;
    if (DAT_14cb70720 != (longlong *)0x0) {
      plVar1 = DAT_14cb70720;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb706f8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d9148e FUN_145d9148e body=242 status=ok
// SIG undefined FUN_145d9148e(void)

void FUN_145d9148e(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb70668 != DAT_14cb70694) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb70698;
    if (DAT_14cb706a0 != (undefined *)0x0) {
      puVar6 = DAT_14cb706a0;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb706a8 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb70660 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb70660 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb70698;
        if (DAT_14cb706a0 != (undefined *)0x0) {
          puVar6 = DAT_14cb706a0;
        }
        lVar1 = DAT_14cb70660 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb70660 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d91580();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d91580 FUN_145d91580 body=135 status=ok
// SIG undefined FUN_145d91580(void)

void FUN_145d91580(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb70660;
  if (DAT_14cb70694 != 0) {
    *(int *)(DAT_14cb70660 + (longlong)DAT_14cb70690 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb70694) {
    iVar4 = DAT_14cb70690;
  }
  puVar1[1] = iVar4;
  DAT_14cb70694 = DAT_14cb70694 + 1;
  puVar5 = &DAT_14cb70670;
  if (DAT_14cb70680 != (undefined *)0x0) {
    puVar5 = DAT_14cb70680;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb70690 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d91608 FUN_145d91608 body=114 status=ok
// SIG undefined FUN_145d91608(void)

void FUN_145d91608(void)

{
  longlong *plVar1;
  
  FUN_145aea416();
  FUN_145d9167a(DAT_14cb70aa4);
  if (DAT_14cb70a30 == &DAT_14cb70aa0) {
    DAT_14cb70a30 = (undefined4 *)0x0;
  }
  if (DAT_14cb70ae0 != 0) {
    plVar1 = &DAT_14cb70b00;
    if (DAT_14cb70af0 != (longlong *)0x0) {
      plVar1 = DAT_14cb70af0;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb70ac8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d9167a FUN_145d9167a body=242 status=ok
// SIG undefined FUN_145d9167a(void)

void FUN_145d9167a(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb70a40 != DAT_14cb70a6c) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb70a70;
    if (DAT_14cb70a78 != (undefined *)0x0) {
      puVar6 = DAT_14cb70a78;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb70a80 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb70a38 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb70a38 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb70a70;
        if (DAT_14cb70a78 != (undefined *)0x0) {
          puVar6 = DAT_14cb70a78;
        }
        lVar1 = DAT_14cb70a38 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb70a38 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d9176c();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d9176c FUN_145d9176c body=135 status=ok
// SIG undefined FUN_145d9176c(void)

void FUN_145d9176c(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb70a38;
  if (DAT_14cb70a6c != 0) {
    *(int *)(DAT_14cb70a38 + (longlong)DAT_14cb70a68 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb70a6c) {
    iVar4 = DAT_14cb70a68;
  }
  puVar1[1] = iVar4;
  DAT_14cb70a6c = DAT_14cb70a6c + 1;
  puVar5 = &DAT_14cb70a48;
  if (DAT_14cb70a58 != (undefined *)0x0) {
    puVar5 = DAT_14cb70a58;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb70a68 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d917f4 FUN_145d917f4 body=114 status=ok
// SIG undefined FUN_145d917f4(void)

void FUN_145d917f4(void)

{
  longlong *plVar1;
  
  FUN_1460e2528();
  FUN_145d91866(DAT_14cb72364);
  if (DAT_14cb722e8 == &DAT_14cb72360) {
    DAT_14cb722e8 = (undefined4 *)0x0;
  }
  if (DAT_14cb723a0 != 0) {
    plVar1 = &DAT_14cb723c0;
    if (DAT_14cb723b0 != (longlong *)0x0) {
      plVar1 = DAT_14cb723b0;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb72388 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d91866 FUN_145d91866 body=242 status=ok
// SIG undefined FUN_145d91866(void)

void FUN_145d91866(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb722f8 != DAT_14cb72324) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb72328;
    if (DAT_14cb72330 != (undefined *)0x0) {
      puVar6 = DAT_14cb72330;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb72338 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb722f0 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb722f0 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb72328;
        if (DAT_14cb72330 != (undefined *)0x0) {
          puVar6 = DAT_14cb72330;
        }
        lVar1 = DAT_14cb722f0 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb722f0 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d91958();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d91958 FUN_145d91958 body=135 status=ok
// SIG undefined FUN_145d91958(void)

void FUN_145d91958(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb722f0;
  if (DAT_14cb72324 != 0) {
    *(int *)(DAT_14cb722f0 + (longlong)DAT_14cb72320 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb72324) {
    iVar4 = DAT_14cb72320;
  }
  puVar1[1] = iVar4;
  DAT_14cb72324 = DAT_14cb72324 + 1;
  puVar5 = &DAT_14cb72300;
  if (DAT_14cb72310 != (undefined *)0x0) {
    puVar5 = DAT_14cb72310;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb72320 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d919e0 FUN_145d919e0 body=114 status=ok
// SIG undefined FUN_145d919e0(void)

void FUN_145d919e0(void)

{
  longlong *plVar1;
  
  FUN_1460e2cbe();
  FUN_145d91a52(DAT_14cb724e4);
  if (DAT_14cb72470 == &DAT_14cb724e0) {
    DAT_14cb72470 = (undefined4 *)0x0;
  }
  if (DAT_14cb72520 != 0) {
    plVar1 = &DAT_14cb72540;
    if (DAT_14cb72530 != (longlong *)0x0) {
      plVar1 = DAT_14cb72530;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb72508 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d91a52 FUN_145d91a52 body=242 status=ok
// SIG undefined FUN_145d91a52(void)

void FUN_145d91a52(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb72480 != DAT_14cb724ac) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb724b0;
    if (DAT_14cb724b8 != (undefined *)0x0) {
      puVar6 = DAT_14cb724b8;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb724c0 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb72478 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb72478 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb724b0;
        if (DAT_14cb724b8 != (undefined *)0x0) {
          puVar6 = DAT_14cb724b8;
        }
        lVar1 = DAT_14cb72478 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb72478 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d91b44();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d91b44 FUN_145d91b44 body=135 status=ok
// SIG undefined FUN_145d91b44(void)

void FUN_145d91b44(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb72478;
  if (DAT_14cb724ac != 0) {
    *(int *)(DAT_14cb72478 + (longlong)DAT_14cb724a8 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb724ac) {
    iVar4 = DAT_14cb724a8;
  }
  puVar1[1] = iVar4;
  DAT_14cb724ac = DAT_14cb724ac + 1;
  puVar5 = &DAT_14cb72488;
  if (DAT_14cb72498 != (undefined *)0x0) {
    puVar5 = DAT_14cb72498;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb724a8 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d91bcc FUN_145d91bcc body=114 status=ok
// SIG undefined FUN_145d91bcc(void)

void FUN_145d91bcc(void)

{
  longlong *plVar1;
  
  FUN_1460e3454();
  FUN_145d91c3e(DAT_14cb726b4);
  if (DAT_14cb72638 == &DAT_14cb726b0) {
    DAT_14cb72638 = (undefined4 *)0x0;
  }
  if (DAT_14cb726f0 != 0) {
    plVar1 = &DAT_14cb72710;
    if (DAT_14cb72700 != (longlong *)0x0) {
      plVar1 = DAT_14cb72700;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb726d8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d91c3e FUN_145d91c3e body=242 status=ok
// SIG undefined FUN_145d91c3e(void)

void FUN_145d91c3e(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb72648 != DAT_14cb72674) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb72678;
    if (DAT_14cb72680 != (undefined *)0x0) {
      puVar6 = DAT_14cb72680;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb72688 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb72640 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb72640 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb72678;
        if (DAT_14cb72680 != (undefined *)0x0) {
          puVar6 = DAT_14cb72680;
        }
        lVar1 = DAT_14cb72640 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb72640 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d91d30();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d91d30 FUN_145d91d30 body=135 status=ok
// SIG undefined FUN_145d91d30(void)

void FUN_145d91d30(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb72640;
  if (DAT_14cb72674 != 0) {
    *(int *)(DAT_14cb72640 + (longlong)DAT_14cb72670 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb72674) {
    iVar4 = DAT_14cb72670;
  }
  puVar1[1] = iVar4;
  DAT_14cb72674 = DAT_14cb72674 + 1;
  puVar5 = &DAT_14cb72650;
  if (DAT_14cb72660 != (undefined *)0x0) {
    puVar5 = DAT_14cb72660;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb72670 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d91db8 FUN_145d91db8 body=114 status=ok
// SIG undefined FUN_145d91db8(void)

void FUN_145d91db8(void)

{
  longlong *plVar1;
  
  FUN_1460e3bea();
  FUN_145d91e2a(DAT_14cb727c4);
  if (DAT_14cb72750 == &DAT_14cb727c0) {
    DAT_14cb72750 = (undefined4 *)0x0;
  }
  if (DAT_14cb72800 != 0) {
    plVar1 = &DAT_14cb72820;
    if (DAT_14cb72810 != (longlong *)0x0) {
      plVar1 = DAT_14cb72810;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb727e8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d91e2a FUN_145d91e2a body=242 status=ok
// SIG undefined FUN_145d91e2a(void)

void FUN_145d91e2a(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb72760 != DAT_14cb7278c) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb72790;
    if (DAT_14cb72798 != (undefined *)0x0) {
      puVar6 = DAT_14cb72798;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb727a0 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb72758 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb72758 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb72790;
        if (DAT_14cb72798 != (undefined *)0x0) {
          puVar6 = DAT_14cb72798;
        }
        lVar1 = DAT_14cb72758 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb72758 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d91f1c();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d91f1c FUN_145d91f1c body=135 status=ok
// SIG undefined FUN_145d91f1c(void)

void FUN_145d91f1c(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb72758;
  if (DAT_14cb7278c != 0) {
    *(int *)(DAT_14cb72758 + (longlong)DAT_14cb72788 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb7278c) {
    iVar4 = DAT_14cb72788;
  }
  puVar1[1] = iVar4;
  DAT_14cb7278c = DAT_14cb7278c + 1;
  puVar5 = &DAT_14cb72768;
  if (DAT_14cb72778 != (undefined *)0x0) {
    puVar5 = DAT_14cb72778;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb72788 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d91fa4 FUN_145d91fa4 body=114 status=ok
// SIG undefined FUN_145d91fa4(void)

void FUN_145d91fa4(void)

{
  longlong *plVar1;
  
  FUN_1460e4380();
  FUN_145d92016(DAT_14cb728d4);
  if (DAT_14cb72860 == &DAT_14cb728d0) {
    DAT_14cb72860 = (undefined4 *)0x0;
  }
  if (DAT_14cb72910 != 0) {
    plVar1 = &DAT_14cb72930;
    if (DAT_14cb72920 != (longlong *)0x0) {
      plVar1 = DAT_14cb72920;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb728f8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d92016 FUN_145d92016 body=242 status=ok
// SIG undefined FUN_145d92016(void)

void FUN_145d92016(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb72870 != DAT_14cb7289c) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb728a0;
    if (DAT_14cb728a8 != (undefined *)0x0) {
      puVar6 = DAT_14cb728a8;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb728b0 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb72868 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb72868 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb728a0;
        if (DAT_14cb728a8 != (undefined *)0x0) {
          puVar6 = DAT_14cb728a8;
        }
        lVar1 = DAT_14cb72868 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb72868 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d92108();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d92108 FUN_145d92108 body=135 status=ok
// SIG undefined FUN_145d92108(void)

void FUN_145d92108(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb72868;
  if (DAT_14cb7289c != 0) {
    *(int *)(DAT_14cb72868 + (longlong)DAT_14cb72898 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb7289c) {
    iVar4 = DAT_14cb72898;
  }
  puVar1[1] = iVar4;
  DAT_14cb7289c = DAT_14cb7289c + 1;
  puVar5 = &DAT_14cb72878;
  if (DAT_14cb72888 != (undefined *)0x0) {
    puVar5 = DAT_14cb72888;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb72898 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d92190 FUN_145d92190 body=114 status=ok
// SIG undefined FUN_145d92190(void)

void FUN_145d92190(void)

{
  longlong *plVar1;
  
  FUN_1460e4b16();
  FUN_145d92202(DAT_14cb729f4);
  if (DAT_14cb72980 == &DAT_14cb729f0) {
    DAT_14cb72980 = (undefined4 *)0x0;
  }
  if (DAT_14cb72a30 != 0) {
    plVar1 = &DAT_14cb72a50;
    if (DAT_14cb72a40 != (longlong *)0x0) {
      plVar1 = DAT_14cb72a40;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb72a18 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d92202 FUN_145d92202 body=242 status=ok
// SIG undefined FUN_145d92202(void)

void FUN_145d92202(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb72990 != DAT_14cb729bc) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb729c0;
    if (DAT_14cb729c8 != (undefined *)0x0) {
      puVar6 = DAT_14cb729c8;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb729d0 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb72988 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb72988 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb729c0;
        if (DAT_14cb729c8 != (undefined *)0x0) {
          puVar6 = DAT_14cb729c8;
        }
        lVar1 = DAT_14cb72988 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb72988 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d922f4();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d922f4 FUN_145d922f4 body=135 status=ok
// SIG undefined FUN_145d922f4(void)

void FUN_145d922f4(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb72988;
  if (DAT_14cb729bc != 0) {
    *(int *)(DAT_14cb72988 + (longlong)DAT_14cb729b8 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb729bc) {
    iVar4 = DAT_14cb729b8;
  }
  puVar1[1] = iVar4;
  DAT_14cb729bc = DAT_14cb729bc + 1;
  puVar5 = &DAT_14cb72998;
  if (DAT_14cb729a8 != (undefined *)0x0) {
    puVar5 = DAT_14cb729a8;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb729b8 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d9237c FUN_145d9237c body=114 status=ok
// SIG undefined FUN_145d9237c(void)

void FUN_145d9237c(void)

{
  longlong *plVar1;
  
  FUN_1460e52ac();
  FUN_145d923ee(DAT_14cb72bb4);
  if (DAT_14cb72b38 == &DAT_14cb72bb0) {
    DAT_14cb72b38 = (undefined4 *)0x0;
  }
  if (DAT_14cb72bf0 != 0) {
    plVar1 = &DAT_14cb72c10;
    if (DAT_14cb72c00 != (longlong *)0x0) {
      plVar1 = DAT_14cb72c00;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb72bd8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d923ee FUN_145d923ee body=242 status=ok
// SIG undefined FUN_145d923ee(void)

void FUN_145d923ee(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb72b48 != DAT_14cb72b74) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb72b78;
    if (DAT_14cb72b80 != (undefined *)0x0) {
      puVar6 = DAT_14cb72b80;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb72b88 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb72b40 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb72b40 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb72b78;
        if (DAT_14cb72b80 != (undefined *)0x0) {
          puVar6 = DAT_14cb72b80;
        }
        lVar1 = DAT_14cb72b40 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb72b40 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d924e0();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d924e0 FUN_145d924e0 body=135 status=ok
// SIG undefined FUN_145d924e0(void)

void FUN_145d924e0(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb72b40;
  if (DAT_14cb72b74 != 0) {
    *(int *)(DAT_14cb72b40 + (longlong)DAT_14cb72b70 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb72b74) {
    iVar4 = DAT_14cb72b70;
  }
  puVar1[1] = iVar4;
  DAT_14cb72b74 = DAT_14cb72b74 + 1;
  puVar5 = &DAT_14cb72b50;
  if (DAT_14cb72b60 != (undefined *)0x0) {
    puVar5 = DAT_14cb72b60;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb72b70 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d92568 FUN_145d92568 body=114 status=ok
// SIG undefined FUN_145d92568(void)

void FUN_145d92568(void)

{
  longlong *plVar1;
  
  FUN_1460e5a42();
  FUN_145d925da(DAT_14cb72ca4);
  if (DAT_14cb72c30 == &DAT_14cb72ca0) {
    DAT_14cb72c30 = (undefined4 *)0x0;
  }
  if (DAT_14cb72ce0 != 0) {
    plVar1 = &DAT_14cb72d00;
    if (DAT_14cb72cf0 != (longlong *)0x0) {
      plVar1 = DAT_14cb72cf0;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb72cc8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d925da FUN_145d925da body=242 status=ok
// SIG undefined FUN_145d925da(void)

void FUN_145d925da(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb72c40 != DAT_14cb72c6c) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb72c70;
    if (DAT_14cb72c78 != (undefined *)0x0) {
      puVar6 = DAT_14cb72c78;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb72c80 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb72c38 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb72c38 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb72c70;
        if (DAT_14cb72c78 != (undefined *)0x0) {
          puVar6 = DAT_14cb72c78;
        }
        lVar1 = DAT_14cb72c38 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb72c38 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d926cc();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d926cc FUN_145d926cc body=135 status=ok
// SIG undefined FUN_145d926cc(void)

void FUN_145d926cc(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb72c38;
  if (DAT_14cb72c6c != 0) {
    *(int *)(DAT_14cb72c38 + (longlong)DAT_14cb72c68 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb72c6c) {
    iVar4 = DAT_14cb72c68;
  }
  puVar1[1] = iVar4;
  DAT_14cb72c6c = DAT_14cb72c6c + 1;
  puVar5 = &DAT_14cb72c48;
  if (DAT_14cb72c58 != (undefined *)0x0) {
    puVar5 = DAT_14cb72c58;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb72c68 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d92754 FUN_145d92754 body=114 status=ok
// SIG undefined FUN_145d92754(void)

void FUN_145d92754(void)

{
  longlong *plVar1;
  
  FUN_1460e61d8();
  FUN_145d927c6(DAT_14cb72d94);
  if (DAT_14cb72d20 == &DAT_14cb72d90) {
    DAT_14cb72d20 = (undefined4 *)0x0;
  }
  if (DAT_14cb72dd0 != 0) {
    plVar1 = &DAT_14cb72df0;
    if (DAT_14cb72de0 != (longlong *)0x0) {
      plVar1 = DAT_14cb72de0;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb72db8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d927c6 FUN_145d927c6 body=242 status=ok
// SIG undefined FUN_145d927c6(void)

void FUN_145d927c6(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb72d30 != DAT_14cb72d5c) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb72d60;
    if (DAT_14cb72d68 != (undefined *)0x0) {
      puVar6 = DAT_14cb72d68;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb72d70 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb72d28 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb72d28 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb72d60;
        if (DAT_14cb72d68 != (undefined *)0x0) {
          puVar6 = DAT_14cb72d68;
        }
        lVar1 = DAT_14cb72d28 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb72d28 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d928b8();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d928b8 FUN_145d928b8 body=135 status=ok
// SIG undefined FUN_145d928b8(void)

void FUN_145d928b8(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb72d28;
  if (DAT_14cb72d5c != 0) {
    *(int *)(DAT_14cb72d28 + (longlong)DAT_14cb72d58 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb72d5c) {
    iVar4 = DAT_14cb72d58;
  }
  puVar1[1] = iVar4;
  DAT_14cb72d5c = DAT_14cb72d5c + 1;
  puVar5 = &DAT_14cb72d38;
  if (DAT_14cb72d48 != (undefined *)0x0) {
    puVar5 = DAT_14cb72d48;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb72d58 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d92940 FUN_145d92940 body=114 status=ok
// SIG undefined FUN_145d92940(void)

void FUN_145d92940(void)

{
  longlong *plVar1;
  
  FUN_1460e696e();
  FUN_145d929b2(DAT_14cb72e84);
  if (DAT_14cb72e10 == &DAT_14cb72e80) {
    DAT_14cb72e10 = (undefined4 *)0x0;
  }
  if (DAT_14cb72ec0 != 0) {
    plVar1 = &DAT_14cb72ee0;
    if (DAT_14cb72ed0 != (longlong *)0x0) {
      plVar1 = DAT_14cb72ed0;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb72ea8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d929b2 FUN_145d929b2 body=242 status=ok
// SIG undefined FUN_145d929b2(void)

void FUN_145d929b2(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb72e20 != DAT_14cb72e4c) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb72e50;
    if (DAT_14cb72e58 != (undefined *)0x0) {
      puVar6 = DAT_14cb72e58;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb72e60 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb72e18 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb72e18 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb72e50;
        if (DAT_14cb72e58 != (undefined *)0x0) {
          puVar6 = DAT_14cb72e58;
        }
        lVar1 = DAT_14cb72e18 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb72e18 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d92aa4();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d92aa4 FUN_145d92aa4 body=135 status=ok
// SIG undefined FUN_145d92aa4(void)

void FUN_145d92aa4(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb72e18;
  if (DAT_14cb72e4c != 0) {
    *(int *)(DAT_14cb72e18 + (longlong)DAT_14cb72e48 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb72e4c) {
    iVar4 = DAT_14cb72e48;
  }
  puVar1[1] = iVar4;
  DAT_14cb72e4c = DAT_14cb72e4c + 1;
  puVar5 = &DAT_14cb72e28;
  if (DAT_14cb72e38 != (undefined *)0x0) {
    puVar5 = DAT_14cb72e38;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb72e48 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d92b2c FUN_145d92b2c body=114 status=ok
// SIG undefined FUN_145d92b2c(void)

void FUN_145d92b2c(void)

{
  longlong *plVar1;
  
  FUN_1460e7104();
  FUN_145d92b9e(DAT_14cb72f74);
  if (DAT_14cb72f00 == &DAT_14cb72f70) {
    DAT_14cb72f00 = (undefined4 *)0x0;
  }
  if (DAT_14cb72fb0 != 0) {
    plVar1 = &DAT_14cb72fd0;
    if (DAT_14cb72fc0 != (longlong *)0x0) {
      plVar1 = DAT_14cb72fc0;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb72f98 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d92b9e FUN_145d92b9e body=242 status=ok
// SIG undefined FUN_145d92b9e(void)

void FUN_145d92b9e(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb72f10 != DAT_14cb72f3c) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb72f40;
    if (DAT_14cb72f48 != (undefined *)0x0) {
      puVar6 = DAT_14cb72f48;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb72f50 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb72f08 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb72f08 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb72f40;
        if (DAT_14cb72f48 != (undefined *)0x0) {
          puVar6 = DAT_14cb72f48;
        }
        lVar1 = DAT_14cb72f08 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb72f08 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d92c90();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d92c90 FUN_145d92c90 body=135 status=ok
// SIG undefined FUN_145d92c90(void)

void FUN_145d92c90(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb72f08;
  if (DAT_14cb72f3c != 0) {
    *(int *)(DAT_14cb72f08 + (longlong)DAT_14cb72f38 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb72f3c) {
    iVar4 = DAT_14cb72f38;
  }
  puVar1[1] = iVar4;
  DAT_14cb72f3c = DAT_14cb72f3c + 1;
  puVar5 = &DAT_14cb72f18;
  if (DAT_14cb72f28 != (undefined *)0x0) {
    puVar5 = DAT_14cb72f28;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb72f38 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d92d18 FUN_145d92d18 body=114 status=ok
// SIG undefined FUN_145d92d18(void)

void FUN_145d92d18(void)

{
  longlong *plVar1;
  
  FUN_1460e789a();
  FUN_145d92d8a(DAT_14cb73064);
  if (DAT_14cb72ff0 == &DAT_14cb73060) {
    DAT_14cb72ff0 = (undefined4 *)0x0;
  }
  if (DAT_14cb730a0 != 0) {
    plVar1 = &DAT_14cb730c0;
    if (DAT_14cb730b0 != (longlong *)0x0) {
      plVar1 = DAT_14cb730b0;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb73088 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d92d8a FUN_145d92d8a body=242 status=ok
// SIG undefined FUN_145d92d8a(void)

void FUN_145d92d8a(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb73000 != DAT_14cb7302c) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb73030;
    if (DAT_14cb73038 != (undefined *)0x0) {
      puVar6 = DAT_14cb73038;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb73040 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb72ff8 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb72ff8 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb73030;
        if (DAT_14cb73038 != (undefined *)0x0) {
          puVar6 = DAT_14cb73038;
        }
        lVar1 = DAT_14cb72ff8 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb72ff8 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d92e7c();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d92e7c FUN_145d92e7c body=135 status=ok
// SIG undefined FUN_145d92e7c(void)

void FUN_145d92e7c(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb72ff8;
  if (DAT_14cb7302c != 0) {
    *(int *)(DAT_14cb72ff8 + (longlong)DAT_14cb73028 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb7302c) {
    iVar4 = DAT_14cb73028;
  }
  puVar1[1] = iVar4;
  DAT_14cb7302c = DAT_14cb7302c + 1;
  puVar5 = &DAT_14cb73008;
  if (DAT_14cb73018 != (undefined *)0x0) {
    puVar5 = DAT_14cb73018;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb73028 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d92f04 FUN_145d92f04 body=114 status=ok
// SIG undefined FUN_145d92f04(void)

void FUN_145d92f04(void)

{
  longlong *plVar1;
  
  FUN_1460e8030();
  FUN_145d92f76(DAT_14cb73154);
  if (DAT_14cb730e0 == &DAT_14cb73150) {
    DAT_14cb730e0 = (undefined4 *)0x0;
  }
  if (DAT_14cb73190 != 0) {
    plVar1 = &DAT_14cb731b0;
    if (DAT_14cb731a0 != (longlong *)0x0) {
      plVar1 = DAT_14cb731a0;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb73178 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d92f76 FUN_145d92f76 body=242 status=ok
// SIG undefined FUN_145d92f76(void)

void FUN_145d92f76(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb730f0 != DAT_14cb7311c) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb73120;
    if (DAT_14cb73128 != (undefined *)0x0) {
      puVar6 = DAT_14cb73128;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb73130 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb730e8 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb730e8 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb73120;
        if (DAT_14cb73128 != (undefined *)0x0) {
          puVar6 = DAT_14cb73128;
        }
        lVar1 = DAT_14cb730e8 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb730e8 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d93068();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d93068 FUN_145d93068 body=135 status=ok
// SIG undefined FUN_145d93068(void)

void FUN_145d93068(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb730e8;
  if (DAT_14cb7311c != 0) {
    *(int *)(DAT_14cb730e8 + (longlong)DAT_14cb73118 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb7311c) {
    iVar4 = DAT_14cb73118;
  }
  puVar1[1] = iVar4;
  DAT_14cb7311c = DAT_14cb7311c + 1;
  puVar5 = &DAT_14cb730f8;
  if (DAT_14cb73108 != (undefined *)0x0) {
    puVar5 = DAT_14cb73108;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb73118 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d930f0 FUN_145d930f0 body=114 status=ok
// SIG undefined FUN_145d930f0(void)

void FUN_145d930f0(void)

{
  longlong *plVar1;
  
  FUN_1460e87c6();
  FUN_145d93162(DAT_14cb73244);
  if (DAT_14cb731d0 == &DAT_14cb73240) {
    DAT_14cb731d0 = (undefined4 *)0x0;
  }
  if (DAT_14cb73280 != 0) {
    plVar1 = &DAT_14cb732a0;
    if (DAT_14cb73290 != (longlong *)0x0) {
      plVar1 = DAT_14cb73290;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb73268 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d93162 FUN_145d93162 body=242 status=ok
// SIG undefined FUN_145d93162(void)

void FUN_145d93162(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb731e0 != DAT_14cb7320c) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb73210;
    if (DAT_14cb73218 != (undefined *)0x0) {
      puVar6 = DAT_14cb73218;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb73220 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb731d8 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb731d8 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb73210;
        if (DAT_14cb73218 != (undefined *)0x0) {
          puVar6 = DAT_14cb73218;
        }
        lVar1 = DAT_14cb731d8 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb731d8 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d93254();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d93254 FUN_145d93254 body=135 status=ok
// SIG undefined FUN_145d93254(void)

void FUN_145d93254(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb731d8;
  if (DAT_14cb7320c != 0) {
    *(int *)(DAT_14cb731d8 + (longlong)DAT_14cb73208 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb7320c) {
    iVar4 = DAT_14cb73208;
  }
  puVar1[1] = iVar4;
  DAT_14cb7320c = DAT_14cb7320c + 1;
  puVar5 = &DAT_14cb731e8;
  if (DAT_14cb731f8 != (undefined *)0x0) {
    puVar5 = DAT_14cb731f8;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb73208 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d932dc FUN_145d932dc body=114 status=ok
// SIG undefined FUN_145d932dc(void)

void FUN_145d932dc(void)

{
  longlong *plVar1;
  
  FUN_1460e8f5c();
  FUN_145d9334e(DAT_14cb73334);
  if (DAT_14cb732c0 == &DAT_14cb73330) {
    DAT_14cb732c0 = (undefined4 *)0x0;
  }
  if (DAT_14cb73370 != 0) {
    plVar1 = &DAT_14cb73390;
    if (DAT_14cb73380 != (longlong *)0x0) {
      plVar1 = DAT_14cb73380;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb73358 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d9334e FUN_145d9334e body=242 status=ok
// SIG undefined FUN_145d9334e(void)

void FUN_145d9334e(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb732d0 != DAT_14cb732fc) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb73300;
    if (DAT_14cb73308 != (undefined *)0x0) {
      puVar6 = DAT_14cb73308;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb73310 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb732c8 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb732c8 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb73300;
        if (DAT_14cb73308 != (undefined *)0x0) {
          puVar6 = DAT_14cb73308;
        }
        lVar1 = DAT_14cb732c8 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb732c8 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d93440();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d93440 FUN_145d93440 body=135 status=ok
// SIG undefined FUN_145d93440(void)

void FUN_145d93440(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb732c8;
  if (DAT_14cb732fc != 0) {
    *(int *)(DAT_14cb732c8 + (longlong)DAT_14cb732f8 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb732fc) {
    iVar4 = DAT_14cb732f8;
  }
  puVar1[1] = iVar4;
  DAT_14cb732fc = DAT_14cb732fc + 1;
  puVar5 = &DAT_14cb732d8;
  if (DAT_14cb732e8 != (undefined *)0x0) {
    puVar5 = DAT_14cb732e8;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb732f8 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d934c8 FUN_145d934c8 body=114 status=ok
// SIG undefined FUN_145d934c8(void)

void FUN_145d934c8(void)

{
  longlong *plVar1;
  
  FUN_140fb4166();
  FUN_145d9353a(DAT_14cb75364);
  if (DAT_14cb752e8 == &DAT_14cb75360) {
    DAT_14cb752e8 = (undefined4 *)0x0;
  }
  if (DAT_14cb753a0 != 0) {
    plVar1 = &DAT_14cb753c0;
    if (DAT_14cb753b0 != (longlong *)0x0) {
      plVar1 = DAT_14cb753b0;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb75388 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d9353a FUN_145d9353a body=242 status=ok
// SIG undefined FUN_145d9353a(void)

void FUN_145d9353a(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb752f8 != DAT_14cb75324) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb75328;
    if (DAT_14cb75330 != (undefined *)0x0) {
      puVar6 = DAT_14cb75330;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb75338 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb752f0 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb752f0 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb75328;
        if (DAT_14cb75330 != (undefined *)0x0) {
          puVar6 = DAT_14cb75330;
        }
        lVar1 = DAT_14cb752f0 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb752f0 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d9362c();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d9362c FUN_145d9362c body=135 status=ok
// SIG undefined FUN_145d9362c(void)

void FUN_145d9362c(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb752f0;
  if (DAT_14cb75324 != 0) {
    *(int *)(DAT_14cb752f0 + (longlong)DAT_14cb75320 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb75324) {
    iVar4 = DAT_14cb75320;
  }
  puVar1[1] = iVar4;
  DAT_14cb75324 = DAT_14cb75324 + 1;
  puVar5 = &DAT_14cb75300;
  if (DAT_14cb75310 != (undefined *)0x0) {
    puVar5 = DAT_14cb75310;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb75320 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d936b4 FUN_145d936b4 body=114 status=ok
// SIG undefined FUN_145d936b4(void)

void FUN_145d936b4(void)

{
  longlong *plVar1;
  
  FUN_1458d1f22();
  FUN_145d93726(DAT_14cb75524);
  if (DAT_14cb754a8 == &DAT_14cb75520) {
    DAT_14cb754a8 = (undefined4 *)0x0;
  }
  if (DAT_14cb75560 != 0) {
    plVar1 = &DAT_14cb75580;
    if (DAT_14cb75570 != (longlong *)0x0) {
      plVar1 = DAT_14cb75570;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb75548 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d93726 FUN_145d93726 body=242 status=ok
// SIG undefined FUN_145d93726(void)

void FUN_145d93726(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb754b8 != DAT_14cb754e4) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb754e8;
    if (DAT_14cb754f0 != (undefined *)0x0) {
      puVar6 = DAT_14cb754f0;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb754f8 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb754b0 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb754b0 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb754e8;
        if (DAT_14cb754f0 != (undefined *)0x0) {
          puVar6 = DAT_14cb754f0;
        }
        lVar1 = DAT_14cb754b0 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb754b0 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d93818();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d93818 FUN_145d93818 body=135 status=ok
// SIG undefined FUN_145d93818(void)

void FUN_145d93818(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb754b0;
  if (DAT_14cb754e4 != 0) {
    *(int *)(DAT_14cb754b0 + (longlong)DAT_14cb754e0 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb754e4) {
    iVar4 = DAT_14cb754e0;
  }
  puVar1[1] = iVar4;
  DAT_14cb754e4 = DAT_14cb754e4 + 1;
  puVar5 = &DAT_14cb754c0;
  if (DAT_14cb754d0 != (undefined *)0x0) {
    puVar5 = DAT_14cb754d0;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb754e0 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d938a0 FUN_145d938a0 body=114 status=ok
// SIG undefined FUN_145d938a0(void)

void FUN_145d938a0(void)

{
  longlong *plVar1;
  
  FUN_1460e96f2();
  FUN_145d93912(DAT_14cb75824);
  if (DAT_14cb757b0 == &DAT_14cb75820) {
    DAT_14cb757b0 = (undefined4 *)0x0;
  }
  if (DAT_14cb75860 != 0) {
    plVar1 = &DAT_14cb75880;
    if (DAT_14cb75870 != (longlong *)0x0) {
      plVar1 = DAT_14cb75870;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb75848 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d93912 FUN_145d93912 body=242 status=ok
// SIG undefined FUN_145d93912(void)

void FUN_145d93912(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb757c0 != DAT_14cb757ec) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb757f0;
    if (DAT_14cb757f8 != (undefined *)0x0) {
      puVar6 = DAT_14cb757f8;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb75800 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb757b8 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb757b8 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb757f0;
        if (DAT_14cb757f8 != (undefined *)0x0) {
          puVar6 = DAT_14cb757f8;
        }
        lVar1 = DAT_14cb757b8 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb757b8 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d93a04();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d93a04 FUN_145d93a04 body=135 status=ok
// SIG undefined FUN_145d93a04(void)

void FUN_145d93a04(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb757b8;
  if (DAT_14cb757ec != 0) {
    *(int *)(DAT_14cb757b8 + (longlong)DAT_14cb757e8 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb757ec) {
    iVar4 = DAT_14cb757e8;
  }
  puVar1[1] = iVar4;
  DAT_14cb757ec = DAT_14cb757ec + 1;
  puVar5 = &DAT_14cb757c8;
  if (DAT_14cb757d8 != (undefined *)0x0) {
    puVar5 = DAT_14cb757d8;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb757e8 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d93a8c FUN_145d93a8c body=114 status=ok
// SIG undefined FUN_145d93a8c(void)

void FUN_145d93a8c(void)

{
  longlong *plVar1;
  
  FUN_1410deb04();
  FUN_145d93afe(DAT_14cb75944);
  if (DAT_14cb758c8 == &DAT_14cb75940) {
    DAT_14cb758c8 = (undefined4 *)0x0;
  }
  if (DAT_14cb75980 != 0) {
    plVar1 = &DAT_14cb759a0;
    if (DAT_14cb75990 != (longlong *)0x0) {
      plVar1 = DAT_14cb75990;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb75968 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d93afe FUN_145d93afe body=242 status=ok
// SIG undefined FUN_145d93afe(void)

void FUN_145d93afe(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb758d8 != DAT_14cb75904) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb75908;
    if (DAT_14cb75910 != (undefined *)0x0) {
      puVar6 = DAT_14cb75910;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb75918 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb758d0 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb758d0 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb75908;
        if (DAT_14cb75910 != (undefined *)0x0) {
          puVar6 = DAT_14cb75910;
        }
        lVar1 = DAT_14cb758d0 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb758d0 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d93bf0();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d93bf0 FUN_145d93bf0 body=135 status=ok
// SIG undefined FUN_145d93bf0(void)

void FUN_145d93bf0(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb758d0;
  if (DAT_14cb75904 != 0) {
    *(int *)(DAT_14cb758d0 + (longlong)DAT_14cb75900 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb75904) {
    iVar4 = DAT_14cb75900;
  }
  puVar1[1] = iVar4;
  DAT_14cb75904 = DAT_14cb75904 + 1;
  puVar5 = &DAT_14cb758e0;
  if (DAT_14cb758f0 != (undefined *)0x0) {
    puVar5 = DAT_14cb758f0;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb75900 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d93c78 FUN_145d93c78 body=114 status=ok
// SIG undefined FUN_145d93c78(void)

void FUN_145d93c78(void)

{
  longlong *plVar1;
  
  FUN_145894c4a();
  FUN_145d93cea(DAT_14cb75a34);
  if (DAT_14cb759c0 == &DAT_14cb75a30) {
    DAT_14cb759c0 = (undefined4 *)0x0;
  }
  if (DAT_14cb75a70 != 0) {
    plVar1 = &DAT_14cb75a90;
    if (DAT_14cb75a80 != (longlong *)0x0) {
      plVar1 = DAT_14cb75a80;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb75a58 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d93cea FUN_145d93cea body=242 status=ok
// SIG undefined FUN_145d93cea(void)

void FUN_145d93cea(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb759d0 != DAT_14cb759fc) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb75a00;
    if (DAT_14cb75a08 != (undefined *)0x0) {
      puVar6 = DAT_14cb75a08;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb75a10 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb759c8 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb759c8 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb75a00;
        if (DAT_14cb75a08 != (undefined *)0x0) {
          puVar6 = DAT_14cb75a08;
        }
        lVar1 = DAT_14cb759c8 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb759c8 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d93ddc();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d93ddc FUN_145d93ddc body=135 status=ok
// SIG undefined FUN_145d93ddc(void)

void FUN_145d93ddc(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb759c8;
  if (DAT_14cb759fc != 0) {
    *(int *)(DAT_14cb759c8 + (longlong)DAT_14cb759f8 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb759fc) {
    iVar4 = DAT_14cb759f8;
  }
  puVar1[1] = iVar4;
  DAT_14cb759fc = DAT_14cb759fc + 1;
  puVar5 = &DAT_14cb759d8;
  if (DAT_14cb759e8 != (undefined *)0x0) {
    puVar5 = DAT_14cb759e8;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb759f8 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d93e64 FUN_145d93e64 body=114 status=ok
// SIG undefined FUN_145d93e64(void)

void FUN_145d93e64(void)

{
  longlong *plVar1;
  
  FUN_145876ecc();
  FUN_145d93ed6(DAT_14cb75c34);
  if (DAT_14cb75bc0 == &DAT_14cb75c30) {
    DAT_14cb75bc0 = (undefined4 *)0x0;
  }
  if (DAT_14cb75c70 != 0) {
    plVar1 = &DAT_14cb75c90;
    if (DAT_14cb75c80 != (longlong *)0x0) {
      plVar1 = DAT_14cb75c80;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb75c58 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d93ed6 FUN_145d93ed6 body=242 status=ok
// SIG undefined FUN_145d93ed6(void)

void FUN_145d93ed6(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb75bd0 != DAT_14cb75bfc) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb75c00;
    if (DAT_14cb75c08 != (undefined *)0x0) {
      puVar6 = DAT_14cb75c08;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb75c10 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb75bc8 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb75bc8 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb75c00;
        if (DAT_14cb75c08 != (undefined *)0x0) {
          puVar6 = DAT_14cb75c08;
        }
        lVar1 = DAT_14cb75bc8 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb75bc8 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d93fc8();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d93fc8 FUN_145d93fc8 body=135 status=ok
// SIG undefined FUN_145d93fc8(void)

void FUN_145d93fc8(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb75bc8;
  if (DAT_14cb75bfc != 0) {
    *(int *)(DAT_14cb75bc8 + (longlong)DAT_14cb75bf8 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb75bfc) {
    iVar4 = DAT_14cb75bf8;
  }
  puVar1[1] = iVar4;
  DAT_14cb75bfc = DAT_14cb75bfc + 1;
  puVar5 = &DAT_14cb75bd8;
  if (DAT_14cb75be8 != (undefined *)0x0) {
    puVar5 = DAT_14cb75be8;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb75bf8 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d94050 FUN_145d94050 body=114 status=ok
// SIG undefined FUN_145d94050(void)

void FUN_145d94050(void)

{
  longlong *plVar1;
  
  FUN_1460e9e88();
  FUN_145d940c2(DAT_14cb763e4);
  if (DAT_14cb76368 == &DAT_14cb763e0) {
    DAT_14cb76368 = (undefined4 *)0x0;
  }
  if (DAT_14cb76420 != 0) {
    plVar1 = &DAT_14cb76440;
    if (DAT_14cb76430 != (longlong *)0x0) {
      plVar1 = DAT_14cb76430;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb76408 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d940c2 FUN_145d940c2 body=242 status=ok
// SIG undefined FUN_145d940c2(void)

void FUN_145d940c2(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb76378 != DAT_14cb763a4) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb763a8;
    if (DAT_14cb763b0 != (undefined *)0x0) {
      puVar6 = DAT_14cb763b0;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb763b8 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb76370 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb76370 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb763a8;
        if (DAT_14cb763b0 != (undefined *)0x0) {
          puVar6 = DAT_14cb763b0;
        }
        lVar1 = DAT_14cb76370 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb76370 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d941b4();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d941b4 FUN_145d941b4 body=135 status=ok
// SIG undefined FUN_145d941b4(void)

void FUN_145d941b4(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb76370;
  if (DAT_14cb763a4 != 0) {
    *(int *)(DAT_14cb76370 + (longlong)DAT_14cb763a0 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb763a4) {
    iVar4 = DAT_14cb763a0;
  }
  puVar1[1] = iVar4;
  DAT_14cb763a4 = DAT_14cb763a4 + 1;
  puVar5 = &DAT_14cb76380;
  if (DAT_14cb76390 != (undefined *)0x0) {
    puVar5 = DAT_14cb76390;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb763a0 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d9423c FUN_145d9423c body=114 status=ok
// SIG undefined FUN_145d9423c(void)

void FUN_145d9423c(void)

{
  longlong *plVar1;
  
  FUN_1460ea61e();
  FUN_145d942ae(DAT_14cb76524);
  if (DAT_14cb764b0 == &DAT_14cb76520) {
    DAT_14cb764b0 = (undefined4 *)0x0;
  }
  if (DAT_14cb76560 != 0) {
    plVar1 = &DAT_14cb76580;
    if (DAT_14cb76570 != (longlong *)0x0) {
      plVar1 = DAT_14cb76570;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb76548 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d942ae FUN_145d942ae body=242 status=ok
// SIG undefined FUN_145d942ae(void)

void FUN_145d942ae(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb764c0 != DAT_14cb764ec) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb764f0;
    if (DAT_14cb764f8 != (undefined *)0x0) {
      puVar6 = DAT_14cb764f8;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb76500 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb764b8 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb764b8 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb764f0;
        if (DAT_14cb764f8 != (undefined *)0x0) {
          puVar6 = DAT_14cb764f8;
        }
        lVar1 = DAT_14cb764b8 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb764b8 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d943a0();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d943a0 FUN_145d943a0 body=135 status=ok
// SIG undefined FUN_145d943a0(void)

void FUN_145d943a0(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb764b8;
  if (DAT_14cb764ec != 0) {
    *(int *)(DAT_14cb764b8 + (longlong)DAT_14cb764e8 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb764ec) {
    iVar4 = DAT_14cb764e8;
  }
  puVar1[1] = iVar4;
  DAT_14cb764ec = DAT_14cb764ec + 1;
  puVar5 = &DAT_14cb764c8;
  if (DAT_14cb764d8 != (undefined *)0x0) {
    puVar5 = DAT_14cb764d8;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb764e8 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d94428 FUN_145d94428 body=114 status=ok
// SIG undefined FUN_145d94428(void)

void FUN_145d94428(void)

{
  longlong *plVar1;
  
  FUN_145982dba();
  FUN_145d9449a(DAT_14cb78e54);
  if (DAT_14cb78de0 == &DAT_14cb78e50) {
    DAT_14cb78de0 = (undefined4 *)0x0;
  }
  if (DAT_14cb78e90 != 0) {
    plVar1 = &DAT_14cb78eb0;
    if (DAT_14cb78ea0 != (longlong *)0x0) {
      plVar1 = DAT_14cb78ea0;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb78e78 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d9449a FUN_145d9449a body=242 status=ok
// SIG undefined FUN_145d9449a(void)

void FUN_145d9449a(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb78df0 != DAT_14cb78e1c) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb78e20;
    if (DAT_14cb78e28 != (undefined *)0x0) {
      puVar6 = DAT_14cb78e28;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb78e30 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb78de8 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb78de8 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb78e20;
        if (DAT_14cb78e28 != (undefined *)0x0) {
          puVar6 = DAT_14cb78e28;
        }
        lVar1 = DAT_14cb78de8 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb78de8 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d9458c();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d9458c FUN_145d9458c body=135 status=ok
// SIG undefined FUN_145d9458c(void)

void FUN_145d9458c(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb78de8;
  if (DAT_14cb78e1c != 0) {
    *(int *)(DAT_14cb78de8 + (longlong)DAT_14cb78e18 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb78e1c) {
    iVar4 = DAT_14cb78e18;
  }
  puVar1[1] = iVar4;
  DAT_14cb78e1c = DAT_14cb78e1c + 1;
  puVar5 = &DAT_14cb78df8;
  if (DAT_14cb78e08 != (undefined *)0x0) {
    puVar5 = DAT_14cb78e08;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb78e18 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d94614 FUN_145d94614 body=114 status=ok
// SIG undefined FUN_145d94614(void)

void FUN_145d94614(void)

{
  longlong *plVar1;
  
  FUN_1460eadb4();
  FUN_145d94686(DAT_14cb791a4);
  if (DAT_14cb79130 == &DAT_14cb791a0) {
    DAT_14cb79130 = (undefined4 *)0x0;
  }
  if (DAT_14cb791e0 != 0) {
    plVar1 = &DAT_14cb79200;
    if (DAT_14cb791f0 != (longlong *)0x0) {
      plVar1 = DAT_14cb791f0;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb791c8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d94686 FUN_145d94686 body=242 status=ok
// SIG undefined FUN_145d94686(void)

void FUN_145d94686(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb79140 != DAT_14cb7916c) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb79170;
    if (DAT_14cb79178 != (undefined *)0x0) {
      puVar6 = DAT_14cb79178;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb79180 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb79138 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb79138 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb79170;
        if (DAT_14cb79178 != (undefined *)0x0) {
          puVar6 = DAT_14cb79178;
        }
        lVar1 = DAT_14cb79138 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb79138 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d94778();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d94778 FUN_145d94778 body=135 status=ok
// SIG undefined FUN_145d94778(void)

void FUN_145d94778(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb79138;
  if (DAT_14cb7916c != 0) {
    *(int *)(DAT_14cb79138 + (longlong)DAT_14cb79168 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb7916c) {
    iVar4 = DAT_14cb79168;
  }
  puVar1[1] = iVar4;
  DAT_14cb7916c = DAT_14cb7916c + 1;
  puVar5 = &DAT_14cb79148;
  if (DAT_14cb79158 != (undefined *)0x0) {
    puVar5 = DAT_14cb79158;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb79168 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d94800 FUN_145d94800 body=114 status=ok
// SIG undefined FUN_145d94800(void)

void FUN_145d94800(void)

{
  longlong *plVar1;
  
  FUN_1460eb54a();
  FUN_145d94872(DAT_14cb79294);
  if (DAT_14cb79220 == &DAT_14cb79290) {
    DAT_14cb79220 = (undefined4 *)0x0;
  }
  if (DAT_14cb792d0 != 0) {
    plVar1 = &DAT_14cb792f0;
    if (DAT_14cb792e0 != (longlong *)0x0) {
      plVar1 = DAT_14cb792e0;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb792b8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d94872 FUN_145d94872 body=242 status=ok
// SIG undefined FUN_145d94872(void)

void FUN_145d94872(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb79230 != DAT_14cb7925c) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb79260;
    if (DAT_14cb79268 != (undefined *)0x0) {
      puVar6 = DAT_14cb79268;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb79270 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb79228 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb79228 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb79260;
        if (DAT_14cb79268 != (undefined *)0x0) {
          puVar6 = DAT_14cb79268;
        }
        lVar1 = DAT_14cb79228 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb79228 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d94964();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d94964 FUN_145d94964 body=135 status=ok
// SIG undefined FUN_145d94964(void)

void FUN_145d94964(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb79228;
  if (DAT_14cb7925c != 0) {
    *(int *)(DAT_14cb79228 + (longlong)DAT_14cb79258 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb7925c) {
    iVar4 = DAT_14cb79258;
  }
  puVar1[1] = iVar4;
  DAT_14cb7925c = DAT_14cb7925c + 1;
  puVar5 = &DAT_14cb79238;
  if (DAT_14cb79248 != (undefined *)0x0) {
    puVar5 = DAT_14cb79248;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb79258 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d949ec FUN_145d949ec body=114 status=ok
// SIG undefined FUN_145d949ec(void)

void FUN_145d949ec(void)

{
  longlong *plVar1;
  
  FUN_140a28152();
  FUN_145d94a5e(DAT_14cb7d2d4);
  if (DAT_14cb7d260 == &DAT_14cb7d2d0) {
    DAT_14cb7d260 = (undefined4 *)0x0;
  }
  if (DAT_14cb7d310 != 0) {
    plVar1 = &DAT_14cb7d330;
    if (DAT_14cb7d320 != (longlong *)0x0) {
      plVar1 = DAT_14cb7d320;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb7d2f8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d94a5e FUN_145d94a5e body=242 status=ok
// SIG undefined FUN_145d94a5e(void)

void FUN_145d94a5e(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb7d270 != DAT_14cb7d29c) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb7d2a0;
    if (DAT_14cb7d2a8 != (undefined *)0x0) {
      puVar6 = DAT_14cb7d2a8;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb7d2b0 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb7d268 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb7d268 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb7d2a0;
        if (DAT_14cb7d2a8 != (undefined *)0x0) {
          puVar6 = DAT_14cb7d2a8;
        }
        lVar1 = DAT_14cb7d268 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb7d268 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d94b50();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d94b50 FUN_145d94b50 body=135 status=ok
// SIG undefined FUN_145d94b50(void)

void FUN_145d94b50(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb7d268;
  if (DAT_14cb7d29c != 0) {
    *(int *)(DAT_14cb7d268 + (longlong)DAT_14cb7d298 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb7d29c) {
    iVar4 = DAT_14cb7d298;
  }
  puVar1[1] = iVar4;
  DAT_14cb7d29c = DAT_14cb7d29c + 1;
  puVar5 = &DAT_14cb7d278;
  if (DAT_14cb7d288 != (undefined *)0x0) {
    puVar5 = DAT_14cb7d288;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb7d298 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d94bd8 FUN_145d94bd8 body=114 status=ok
// SIG undefined FUN_145d94bd8(void)

void FUN_145d94bd8(void)

{
  longlong *plVar1;
  
  FUN_140cb9248();
  FUN_145d94c4a(DAT_14cb7d434);
  if (DAT_14cb7d3b8 == &DAT_14cb7d430) {
    DAT_14cb7d3b8 = (undefined4 *)0x0;
  }
  if (DAT_14cb7d470 != 0) {
    plVar1 = &DAT_14cb7d490;
    if (DAT_14cb7d480 != (longlong *)0x0) {
      plVar1 = DAT_14cb7d480;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb7d458 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d94c4a FUN_145d94c4a body=242 status=ok
// SIG undefined FUN_145d94c4a(void)

void FUN_145d94c4a(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb7d3c8 != DAT_14cb7d3f4) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb7d3f8;
    if (DAT_14cb7d400 != (undefined *)0x0) {
      puVar6 = DAT_14cb7d400;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb7d408 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb7d3c0 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb7d3c0 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb7d3f8;
        if (DAT_14cb7d400 != (undefined *)0x0) {
          puVar6 = DAT_14cb7d400;
        }
        lVar1 = DAT_14cb7d3c0 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb7d3c0 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d94d3c();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d94d3c FUN_145d94d3c body=135 status=ok
// SIG undefined FUN_145d94d3c(void)

void FUN_145d94d3c(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb7d3c0;
  if (DAT_14cb7d3f4 != 0) {
    *(int *)(DAT_14cb7d3c0 + (longlong)DAT_14cb7d3f0 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb7d3f4) {
    iVar4 = DAT_14cb7d3f0;
  }
  puVar1[1] = iVar4;
  DAT_14cb7d3f4 = DAT_14cb7d3f4 + 1;
  puVar5 = &DAT_14cb7d3d0;
  if (DAT_14cb7d3e0 != (undefined *)0x0) {
    puVar5 = DAT_14cb7d3e0;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb7d3f0 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d94dc4 FUN_145d94dc4 body=114 status=ok
// SIG undefined FUN_145d94dc4(void)

void FUN_145d94dc4(void)

{
  longlong *plVar1;
  
  FUN_14585a5c0();
  FUN_145d94e36(DAT_14cb7d564);
  if (DAT_14cb7d4e8 == &DAT_14cb7d560) {
    DAT_14cb7d4e8 = (undefined4 *)0x0;
  }
  if (DAT_14cb7d5a0 != 0) {
    plVar1 = &DAT_14cb7d5c0;
    if (DAT_14cb7d5b0 != (longlong *)0x0) {
      plVar1 = DAT_14cb7d5b0;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb7d588 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d94e36 FUN_145d94e36 body=242 status=ok
// SIG undefined FUN_145d94e36(void)

void FUN_145d94e36(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb7d4f8 != DAT_14cb7d524) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb7d528;
    if (DAT_14cb7d530 != (undefined *)0x0) {
      puVar6 = DAT_14cb7d530;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb7d538 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb7d4f0 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb7d4f0 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb7d528;
        if (DAT_14cb7d530 != (undefined *)0x0) {
          puVar6 = DAT_14cb7d530;
        }
        lVar1 = DAT_14cb7d4f0 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb7d4f0 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d94f28();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d94f28 FUN_145d94f28 body=135 status=ok
// SIG undefined FUN_145d94f28(void)

void FUN_145d94f28(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb7d4f0;
  if (DAT_14cb7d524 != 0) {
    *(int *)(DAT_14cb7d4f0 + (longlong)DAT_14cb7d520 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb7d524) {
    iVar4 = DAT_14cb7d520;
  }
  puVar1[1] = iVar4;
  DAT_14cb7d524 = DAT_14cb7d524 + 1;
  puVar5 = &DAT_14cb7d500;
  if (DAT_14cb7d510 != (undefined *)0x0) {
    puVar5 = DAT_14cb7d510;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb7d520 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d94fb0 FUN_145d94fb0 body=114 status=ok
// SIG undefined FUN_145d94fb0(void)

void FUN_145d94fb0(void)

{
  longlong *plVar1;
  
  FUN_1460ebce0();
  FUN_145d95022(DAT_14cb7daf4);
  if (DAT_14cb7da80 == &DAT_14cb7daf0) {
    DAT_14cb7da80 = (undefined4 *)0x0;
  }
  if (DAT_14cb7db30 != 0) {
    plVar1 = &DAT_14cb7db50;
    if (DAT_14cb7db40 != (longlong *)0x0) {
      plVar1 = DAT_14cb7db40;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb7db18 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d95022 FUN_145d95022 body=242 status=ok
// SIG undefined FUN_145d95022(void)

void FUN_145d95022(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb7da90 != DAT_14cb7dabc) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb7dac0;
    if (DAT_14cb7dac8 != (undefined *)0x0) {
      puVar6 = DAT_14cb7dac8;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb7dad0 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb7da88 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb7da88 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb7dac0;
        if (DAT_14cb7dac8 != (undefined *)0x0) {
          puVar6 = DAT_14cb7dac8;
        }
        lVar1 = DAT_14cb7da88 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb7da88 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d95114();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d95114 FUN_145d95114 body=135 status=ok
// SIG undefined FUN_145d95114(void)

void FUN_145d95114(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb7da88;
  if (DAT_14cb7dabc != 0) {
    *(int *)(DAT_14cb7da88 + (longlong)DAT_14cb7dab8 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb7dabc) {
    iVar4 = DAT_14cb7dab8;
  }
  puVar1[1] = iVar4;
  DAT_14cb7dabc = DAT_14cb7dabc + 1;
  puVar5 = &DAT_14cb7da98;
  if (DAT_14cb7daa8 != (undefined *)0x0) {
    puVar5 = DAT_14cb7daa8;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb7dab8 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d9519c FUN_145d9519c body=114 status=ok
// SIG undefined FUN_145d9519c(void)

void FUN_145d9519c(void)

{
  longlong *plVar1;
  
  FUN_1460ec476();
  FUN_145d9520e(DAT_14cb7dd14);
  if (DAT_14cb7dc98 == &DAT_14cb7dd10) {
    DAT_14cb7dc98 = (undefined4 *)0x0;
  }
  if (DAT_14cb7dd50 != 0) {
    plVar1 = &DAT_14cb7dd70;
    if (DAT_14cb7dd60 != (longlong *)0x0) {
      plVar1 = DAT_14cb7dd60;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb7dd38 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d9520e FUN_145d9520e body=242 status=ok
// SIG undefined FUN_145d9520e(void)

void FUN_145d9520e(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb7dca8 != DAT_14cb7dcd4) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb7dcd8;
    if (DAT_14cb7dce0 != (undefined *)0x0) {
      puVar6 = DAT_14cb7dce0;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb7dce8 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb7dca0 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb7dca0 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb7dcd8;
        if (DAT_14cb7dce0 != (undefined *)0x0) {
          puVar6 = DAT_14cb7dce0;
        }
        lVar1 = DAT_14cb7dca0 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb7dca0 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d95300();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d95300 FUN_145d95300 body=135 status=ok
// SIG undefined FUN_145d95300(void)

void FUN_145d95300(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb7dca0;
  if (DAT_14cb7dcd4 != 0) {
    *(int *)(DAT_14cb7dca0 + (longlong)DAT_14cb7dcd0 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb7dcd4) {
    iVar4 = DAT_14cb7dcd0;
  }
  puVar1[1] = iVar4;
  DAT_14cb7dcd4 = DAT_14cb7dcd4 + 1;
  puVar5 = &DAT_14cb7dcb0;
  if (DAT_14cb7dcc0 != (undefined *)0x0) {
    puVar5 = DAT_14cb7dcc0;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb7dcd0 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d95388 FUN_145d95388 body=114 status=ok
// SIG undefined FUN_145d95388(void)

void FUN_145d95388(void)

{
  longlong *plVar1;
  
  FUN_1460ecc0c();
  FUN_145d953fa(DAT_14cb7e744);
  if (DAT_14cb7e6d0 == &DAT_14cb7e740) {
    DAT_14cb7e6d0 = (undefined4 *)0x0;
  }
  if (DAT_14cb7e780 != 0) {
    plVar1 = &DAT_14cb7e7a0;
    if (DAT_14cb7e790 != (longlong *)0x0) {
      plVar1 = DAT_14cb7e790;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb7e768 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d953fa FUN_145d953fa body=242 status=ok
// SIG undefined FUN_145d953fa(void)

void FUN_145d953fa(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb7e6e0 != DAT_14cb7e70c) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb7e710;
    if (DAT_14cb7e718 != (undefined *)0x0) {
      puVar6 = DAT_14cb7e718;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb7e720 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb7e6d8 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb7e6d8 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb7e710;
        if (DAT_14cb7e718 != (undefined *)0x0) {
          puVar6 = DAT_14cb7e718;
        }
        lVar1 = DAT_14cb7e6d8 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb7e6d8 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d954ec();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d954ec FUN_145d954ec body=135 status=ok
// SIG undefined FUN_145d954ec(void)

void FUN_145d954ec(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb7e6d8;
  if (DAT_14cb7e70c != 0) {
    *(int *)(DAT_14cb7e6d8 + (longlong)DAT_14cb7e708 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb7e70c) {
    iVar4 = DAT_14cb7e708;
  }
  puVar1[1] = iVar4;
  DAT_14cb7e70c = DAT_14cb7e70c + 1;
  puVar5 = &DAT_14cb7e6e8;
  if (DAT_14cb7e6f8 != (undefined *)0x0) {
    puVar5 = DAT_14cb7e6f8;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb7e708 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d95574 FUN_145d95574 body=114 status=ok
// SIG undefined FUN_145d95574(void)

void FUN_145d95574(void)

{
  longlong *plVar1;
  
  FUN_14067a33c();
  FUN_145d955e6(DAT_14cb7e854);
  if (DAT_14cb7e7d8 == &DAT_14cb7e850) {
    DAT_14cb7e7d8 = (undefined4 *)0x0;
  }
  if (DAT_14cb7e890 != 0) {
    plVar1 = &DAT_14cb7e8b0;
    if (DAT_14cb7e8a0 != (longlong *)0x0) {
      plVar1 = DAT_14cb7e8a0;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb7e878 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d955e6 FUN_145d955e6 body=242 status=ok
// SIG undefined FUN_145d955e6(void)

void FUN_145d955e6(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb7e7e8 != DAT_14cb7e814) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb7e818;
    if (DAT_14cb7e820 != (undefined *)0x0) {
      puVar6 = DAT_14cb7e820;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb7e828 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb7e7e0 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb7e7e0 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb7e818;
        if (DAT_14cb7e820 != (undefined *)0x0) {
          puVar6 = DAT_14cb7e820;
        }
        lVar1 = DAT_14cb7e7e0 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb7e7e0 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d956d8();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d956d8 FUN_145d956d8 body=135 status=ok
// SIG undefined FUN_145d956d8(void)

void FUN_145d956d8(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb7e7e0;
  if (DAT_14cb7e814 != 0) {
    *(int *)(DAT_14cb7e7e0 + (longlong)DAT_14cb7e810 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb7e814) {
    iVar4 = DAT_14cb7e810;
  }
  puVar1[1] = iVar4;
  DAT_14cb7e814 = DAT_14cb7e814 + 1;
  puVar5 = &DAT_14cb7e7f0;
  if (DAT_14cb7e800 != (undefined *)0x0) {
    puVar5 = DAT_14cb7e800;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb7e810 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d95760 FUN_145d95760 body=114 status=ok
// SIG undefined FUN_145d95760(void)

void FUN_145d95760(void)

{
  longlong *plVar1;
  
  FUN_14011fce2();
  FUN_145d957d2(DAT_14cb7e984);
  if (DAT_14cb7e908 == &DAT_14cb7e980) {
    DAT_14cb7e908 = (undefined4 *)0x0;
  }
  if (DAT_14cb7e9c0 != 0) {
    plVar1 = &DAT_14cb7e9e0;
    if (DAT_14cb7e9d0 != (longlong *)0x0) {
      plVar1 = DAT_14cb7e9d0;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb7e9a8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d957d2 FUN_145d957d2 body=242 status=ok
// SIG undefined FUN_145d957d2(void)

void FUN_145d957d2(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb7e918 != DAT_14cb7e944) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb7e948;
    if (DAT_14cb7e950 != (undefined *)0x0) {
      puVar6 = DAT_14cb7e950;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb7e958 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb7e910 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb7e910 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb7e948;
        if (DAT_14cb7e950 != (undefined *)0x0) {
          puVar6 = DAT_14cb7e950;
        }
        lVar1 = DAT_14cb7e910 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb7e910 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d958c4();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d958c4 FUN_145d958c4 body=135 status=ok
// SIG undefined FUN_145d958c4(void)

void FUN_145d958c4(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb7e910;
  if (DAT_14cb7e944 != 0) {
    *(int *)(DAT_14cb7e910 + (longlong)DAT_14cb7e940 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb7e944) {
    iVar4 = DAT_14cb7e940;
  }
  puVar1[1] = iVar4;
  DAT_14cb7e944 = DAT_14cb7e944 + 1;
  puVar5 = &DAT_14cb7e920;
  if (DAT_14cb7e930 != (undefined *)0x0) {
    puVar5 = DAT_14cb7e930;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb7e940 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d9594c FUN_145d9594c body=114 status=ok
// SIG undefined FUN_145d9594c(void)

void FUN_145d9594c(void)

{
  longlong *plVar1;
  
  FUN_140e52090();
  FUN_145d959be(DAT_14cb7eb24);
  if (DAT_14cb7eab0 == &DAT_14cb7eb20) {
    DAT_14cb7eab0 = (undefined4 *)0x0;
  }
  if (DAT_14cb7eb60 != 0) {
    plVar1 = &DAT_14cb7eb80;
    if (DAT_14cb7eb70 != (longlong *)0x0) {
      plVar1 = DAT_14cb7eb70;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb7eb48 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d959be FUN_145d959be body=242 status=ok
// SIG undefined FUN_145d959be(void)

void FUN_145d959be(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb7eac0 != DAT_14cb7eaec) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb7eaf0;
    if (DAT_14cb7eaf8 != (undefined *)0x0) {
      puVar6 = DAT_14cb7eaf8;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb7eb00 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb7eab8 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb7eab8 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb7eaf0;
        if (DAT_14cb7eaf8 != (undefined *)0x0) {
          puVar6 = DAT_14cb7eaf8;
        }
        lVar1 = DAT_14cb7eab8 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb7eab8 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d95ab0();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d95ab0 FUN_145d95ab0 body=135 status=ok
// SIG undefined FUN_145d95ab0(void)

void FUN_145d95ab0(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb7eab8;
  if (DAT_14cb7eaec != 0) {
    *(int *)(DAT_14cb7eab8 + (longlong)DAT_14cb7eae8 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb7eaec) {
    iVar4 = DAT_14cb7eae8;
  }
  puVar1[1] = iVar4;
  DAT_14cb7eaec = DAT_14cb7eaec + 1;
  puVar5 = &DAT_14cb7eac8;
  if (DAT_14cb7ead8 != (undefined *)0x0) {
    puVar5 = DAT_14cb7ead8;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb7eae8 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d95b38 FUN_145d95b38 body=114 status=ok
// SIG undefined FUN_145d95b38(void)

void FUN_145d95b38(void)

{
  longlong *plVar1;
  
  FUN_1409965da();
  FUN_145d95baa(DAT_14cb7ec34);
  if (DAT_14cb7ebb8 == &DAT_14cb7ec30) {
    DAT_14cb7ebb8 = (undefined4 *)0x0;
  }
  if (DAT_14cb7ec70 != 0) {
    plVar1 = &DAT_14cb7ec90;
    if (DAT_14cb7ec80 != (longlong *)0x0) {
      plVar1 = DAT_14cb7ec80;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb7ec58 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d95baa FUN_145d95baa body=242 status=ok
// SIG undefined FUN_145d95baa(void)

void FUN_145d95baa(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb7ebc8 != DAT_14cb7ebf4) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb7ebf8;
    if (DAT_14cb7ec00 != (undefined *)0x0) {
      puVar6 = DAT_14cb7ec00;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb7ec08 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb7ebc0 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb7ebc0 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb7ebf8;
        if (DAT_14cb7ec00 != (undefined *)0x0) {
          puVar6 = DAT_14cb7ec00;
        }
        lVar1 = DAT_14cb7ebc0 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb7ebc0 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d95c9c();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d95c9c FUN_145d95c9c body=135 status=ok
// SIG undefined FUN_145d95c9c(void)

void FUN_145d95c9c(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb7ebc0;
  if (DAT_14cb7ebf4 != 0) {
    *(int *)(DAT_14cb7ebc0 + (longlong)DAT_14cb7ebf0 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb7ebf4) {
    iVar4 = DAT_14cb7ebf0;
  }
  puVar1[1] = iVar4;
  DAT_14cb7ebf4 = DAT_14cb7ebf4 + 1;
  puVar5 = &DAT_14cb7ebd0;
  if (DAT_14cb7ebe0 != (undefined *)0x0) {
    puVar5 = DAT_14cb7ebe0;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb7ebf0 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d95d24 FUN_145d95d24 body=114 status=ok
// SIG undefined FUN_145d95d24(void)

void FUN_145d95d24(void)

{
  longlong *plVar1;
  
  FUN_1460ed3a2();
  FUN_145d95d96(DAT_14cb7fc44);
  if (DAT_14cb7fbd0 == &DAT_14cb7fc40) {
    DAT_14cb7fbd0 = (undefined4 *)0x0;
  }
  if (DAT_14cb7fc80 != 0) {
    plVar1 = &DAT_14cb7fca0;
    if (DAT_14cb7fc90 != (longlong *)0x0) {
      plVar1 = DAT_14cb7fc90;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb7fc68 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d95d96 FUN_145d95d96 body=242 status=ok
// SIG undefined FUN_145d95d96(void)

void FUN_145d95d96(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb7fbe0 != DAT_14cb7fc0c) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb7fc10;
    if (DAT_14cb7fc18 != (undefined *)0x0) {
      puVar6 = DAT_14cb7fc18;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb7fc20 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb7fbd8 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb7fbd8 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb7fc10;
        if (DAT_14cb7fc18 != (undefined *)0x0) {
          puVar6 = DAT_14cb7fc18;
        }
        lVar1 = DAT_14cb7fbd8 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb7fbd8 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d95e88();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d95e88 FUN_145d95e88 body=135 status=ok
// SIG undefined FUN_145d95e88(void)

void FUN_145d95e88(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb7fbd8;
  if (DAT_14cb7fc0c != 0) {
    *(int *)(DAT_14cb7fbd8 + (longlong)DAT_14cb7fc08 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb7fc0c) {
    iVar4 = DAT_14cb7fc08;
  }
  puVar1[1] = iVar4;
  DAT_14cb7fc0c = DAT_14cb7fc0c + 1;
  puVar5 = &DAT_14cb7fbe8;
  if (DAT_14cb7fbf8 != (undefined *)0x0) {
    puVar5 = DAT_14cb7fbf8;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb7fc08 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d95f10 FUN_145d95f10 body=114 status=ok
// SIG undefined FUN_145d95f10(void)

void FUN_145d95f10(void)

{
  longlong *plVar1;
  
  FUN_1460edb38();
  FUN_145d95f82(DAT_14cb7fd34);
  if (DAT_14cb7fcc0 == &DAT_14cb7fd30) {
    DAT_14cb7fcc0 = (undefined4 *)0x0;
  }
  if (DAT_14cb7fd70 != 0) {
    plVar1 = &DAT_14cb7fd90;
    if (DAT_14cb7fd80 != (longlong *)0x0) {
      plVar1 = DAT_14cb7fd80;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb7fd58 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d95f82 FUN_145d95f82 body=242 status=ok
// SIG undefined FUN_145d95f82(void)

void FUN_145d95f82(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb7fcd0 != DAT_14cb7fcfc) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb7fd00;
    if (DAT_14cb7fd08 != (undefined *)0x0) {
      puVar6 = DAT_14cb7fd08;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb7fd10 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb7fcc8 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb7fcc8 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb7fd00;
        if (DAT_14cb7fd08 != (undefined *)0x0) {
          puVar6 = DAT_14cb7fd08;
        }
        lVar1 = DAT_14cb7fcc8 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb7fcc8 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d96074();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d96074 FUN_145d96074 body=135 status=ok
// SIG undefined FUN_145d96074(void)

void FUN_145d96074(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb7fcc8;
  if (DAT_14cb7fcfc != 0) {
    *(int *)(DAT_14cb7fcc8 + (longlong)DAT_14cb7fcf8 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb7fcfc) {
    iVar4 = DAT_14cb7fcf8;
  }
  puVar1[1] = iVar4;
  DAT_14cb7fcfc = DAT_14cb7fcfc + 1;
  puVar5 = &DAT_14cb7fcd8;
  if (DAT_14cb7fce8 != (undefined *)0x0) {
    puVar5 = DAT_14cb7fce8;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb7fcf8 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d960fc FUN_145d960fc body=114 status=ok
// SIG undefined FUN_145d960fc(void)

void FUN_145d960fc(void)

{
  longlong *plVar1;
  
  FUN_1460ee2ce();
  FUN_145d9616e(DAT_14cb7fe74);
  if (DAT_14cb7fdf8 == &DAT_14cb7fe70) {
    DAT_14cb7fdf8 = (undefined4 *)0x0;
  }
  if (DAT_14cb7feb0 != 0) {
    plVar1 = &DAT_14cb7fed0;
    if (DAT_14cb7fec0 != (longlong *)0x0) {
      plVar1 = DAT_14cb7fec0;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb7fe98 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d9616e FUN_145d9616e body=242 status=ok
// SIG undefined FUN_145d9616e(void)

void FUN_145d9616e(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb7fe08 != DAT_14cb7fe34) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb7fe38;
    if (DAT_14cb7fe40 != (undefined *)0x0) {
      puVar6 = DAT_14cb7fe40;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb7fe48 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb7fe00 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb7fe00 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb7fe38;
        if (DAT_14cb7fe40 != (undefined *)0x0) {
          puVar6 = DAT_14cb7fe40;
        }
        lVar1 = DAT_14cb7fe00 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb7fe00 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d96260();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d96260 FUN_145d96260 body=135 status=ok
// SIG undefined FUN_145d96260(void)

void FUN_145d96260(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb7fe00;
  if (DAT_14cb7fe34 != 0) {
    *(int *)(DAT_14cb7fe00 + (longlong)DAT_14cb7fe30 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb7fe34) {
    iVar4 = DAT_14cb7fe30;
  }
  puVar1[1] = iVar4;
  DAT_14cb7fe34 = DAT_14cb7fe34 + 1;
  puVar5 = &DAT_14cb7fe10;
  if (DAT_14cb7fe20 != (undefined *)0x0) {
    puVar5 = DAT_14cb7fe20;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb7fe30 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d962e8 FUN_145d962e8 body=114 status=ok
// SIG undefined FUN_145d962e8(void)

void FUN_145d962e8(void)

{
  longlong *plVar1;
  
  FUN_1460eea64();
  FUN_145d9635a(DAT_14cb800f4);
  if (DAT_14cb80078 == &DAT_14cb800f0) {
    DAT_14cb80078 = (undefined4 *)0x0;
  }
  if (DAT_14cb80130 != 0) {
    plVar1 = &DAT_14cb80150;
    if (DAT_14cb80140 != (longlong *)0x0) {
      plVar1 = DAT_14cb80140;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb80118 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d9635a FUN_145d9635a body=242 status=ok
// SIG undefined FUN_145d9635a(void)

void FUN_145d9635a(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb80088 != DAT_14cb800b4) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb800b8;
    if (DAT_14cb800c0 != (undefined *)0x0) {
      puVar6 = DAT_14cb800c0;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb800c8 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb80080 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb80080 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb800b8;
        if (DAT_14cb800c0 != (undefined *)0x0) {
          puVar6 = DAT_14cb800c0;
        }
        lVar1 = DAT_14cb80080 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb80080 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d9644c();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d9644c FUN_145d9644c body=135 status=ok
// SIG undefined FUN_145d9644c(void)

void FUN_145d9644c(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb80080;
  if (DAT_14cb800b4 != 0) {
    *(int *)(DAT_14cb80080 + (longlong)DAT_14cb800b0 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb800b4) {
    iVar4 = DAT_14cb800b0;
  }
  puVar1[1] = iVar4;
  DAT_14cb800b4 = DAT_14cb800b4 + 1;
  puVar5 = &DAT_14cb80090;
  if (DAT_14cb800a0 != (undefined *)0x0) {
    puVar5 = DAT_14cb800a0;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb800b0 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d964d4 FUN_145d964d4 body=114 status=ok
// SIG undefined FUN_145d964d4(void)

void FUN_145d964d4(void)

{
  longlong *plVar1;
  
  FUN_1460ef1fa();
  FUN_145d96546(DAT_14cb80244);
  if (DAT_14cb801d0 == &DAT_14cb80240) {
    DAT_14cb801d0 = (undefined4 *)0x0;
  }
  if (DAT_14cb80280 != 0) {
    plVar1 = &DAT_14cb802a0;
    if (DAT_14cb80290 != (longlong *)0x0) {
      plVar1 = DAT_14cb80290;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb80268 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d96546 FUN_145d96546 body=242 status=ok
// SIG undefined FUN_145d96546(void)

void FUN_145d96546(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb801e0 != DAT_14cb8020c) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb80210;
    if (DAT_14cb80218 != (undefined *)0x0) {
      puVar6 = DAT_14cb80218;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb80220 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb801d8 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb801d8 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb80210;
        if (DAT_14cb80218 != (undefined *)0x0) {
          puVar6 = DAT_14cb80218;
        }
        lVar1 = DAT_14cb801d8 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb801d8 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d96638();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d96638 FUN_145d96638 body=135 status=ok
// SIG undefined FUN_145d96638(void)

void FUN_145d96638(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb801d8;
  if (DAT_14cb8020c != 0) {
    *(int *)(DAT_14cb801d8 + (longlong)DAT_14cb80208 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb8020c) {
    iVar4 = DAT_14cb80208;
  }
  puVar1[1] = iVar4;
  DAT_14cb8020c = DAT_14cb8020c + 1;
  puVar5 = &DAT_14cb801e8;
  if (DAT_14cb801f8 != (undefined *)0x0) {
    puVar5 = DAT_14cb801f8;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb80208 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d966c0 FUN_145d966c0 body=114 status=ok
// SIG undefined FUN_145d966c0(void)

void FUN_145d966c0(void)

{
  longlong *plVar1;
  
  FUN_1460ef990();
  FUN_145d96732(DAT_14cb80334);
  if (DAT_14cb802c0 == &DAT_14cb80330) {
    DAT_14cb802c0 = (undefined4 *)0x0;
  }
  if (DAT_14cb80370 != 0) {
    plVar1 = &DAT_14cb80390;
    if (DAT_14cb80380 != (longlong *)0x0) {
      plVar1 = DAT_14cb80380;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb80358 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d96732 FUN_145d96732 body=242 status=ok
// SIG undefined FUN_145d96732(void)

void FUN_145d96732(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb802d0 != DAT_14cb802fc) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb80300;
    if (DAT_14cb80308 != (undefined *)0x0) {
      puVar6 = DAT_14cb80308;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb80310 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb802c8 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb802c8 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb80300;
        if (DAT_14cb80308 != (undefined *)0x0) {
          puVar6 = DAT_14cb80308;
        }
        lVar1 = DAT_14cb802c8 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb802c8 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d96824();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d96824 FUN_145d96824 body=135 status=ok
// SIG undefined FUN_145d96824(void)

void FUN_145d96824(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb802c8;
  if (DAT_14cb802fc != 0) {
    *(int *)(DAT_14cb802c8 + (longlong)DAT_14cb802f8 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb802fc) {
    iVar4 = DAT_14cb802f8;
  }
  puVar1[1] = iVar4;
  DAT_14cb802fc = DAT_14cb802fc + 1;
  puVar5 = &DAT_14cb802d8;
  if (DAT_14cb802e8 != (undefined *)0x0) {
    puVar5 = DAT_14cb802e8;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb802f8 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d968ac FUN_145d968ac body=114 status=ok
// SIG undefined FUN_145d968ac(void)

void FUN_145d968ac(void)

{
  longlong *plVar1;
  
  FUN_1460f0126();
  FUN_145d9691e(DAT_14cb81114);
  if (DAT_14cb810a0 == &DAT_14cb81110) {
    DAT_14cb810a0 = (undefined4 *)0x0;
  }
  if (DAT_14cb81150 != 0) {
    plVar1 = &DAT_14cb81170;
    if (DAT_14cb81160 != (longlong *)0x0) {
      plVar1 = DAT_14cb81160;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb81138 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d9691e FUN_145d9691e body=242 status=ok
// SIG undefined FUN_145d9691e(void)

void FUN_145d9691e(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb810b0 != DAT_14cb810dc) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb810e0;
    if (DAT_14cb810e8 != (undefined *)0x0) {
      puVar6 = DAT_14cb810e8;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb810f0 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb810a8 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb810a8 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb810e0;
        if (DAT_14cb810e8 != (undefined *)0x0) {
          puVar6 = DAT_14cb810e8;
        }
        lVar1 = DAT_14cb810a8 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb810a8 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d96a10();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d96a10 FUN_145d96a10 body=135 status=ok
// SIG undefined FUN_145d96a10(void)

void FUN_145d96a10(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb810a8;
  if (DAT_14cb810dc != 0) {
    *(int *)(DAT_14cb810a8 + (longlong)DAT_14cb810d8 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb810dc) {
    iVar4 = DAT_14cb810d8;
  }
  puVar1[1] = iVar4;
  DAT_14cb810dc = DAT_14cb810dc + 1;
  puVar5 = &DAT_14cb810b8;
  if (DAT_14cb810c8 != (undefined *)0x0) {
    puVar5 = DAT_14cb810c8;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb810d8 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d96a98 FUN_145d96a98 body=114 status=ok
// SIG undefined FUN_145d96a98(void)

void FUN_145d96a98(void)

{
  longlong *plVar1;
  
  FUN_1460f08bc();
  FUN_145d96b0a(DAT_14cb81204);
  if (DAT_14cb81190 == &DAT_14cb81200) {
    DAT_14cb81190 = (undefined4 *)0x0;
  }
  if (DAT_14cb81240 != 0) {
    plVar1 = &DAT_14cb81260;
    if (DAT_14cb81250 != (longlong *)0x0) {
      plVar1 = DAT_14cb81250;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb81228 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d96b0a FUN_145d96b0a body=242 status=ok
// SIG undefined FUN_145d96b0a(void)

void FUN_145d96b0a(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb811a0 != DAT_14cb811cc) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb811d0;
    if (DAT_14cb811d8 != (undefined *)0x0) {
      puVar6 = DAT_14cb811d8;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb811e0 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb81198 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb81198 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb811d0;
        if (DAT_14cb811d8 != (undefined *)0x0) {
          puVar6 = DAT_14cb811d8;
        }
        lVar1 = DAT_14cb81198 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb81198 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d96bfc();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d96bfc FUN_145d96bfc body=135 status=ok
// SIG undefined FUN_145d96bfc(void)

void FUN_145d96bfc(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb81198;
  if (DAT_14cb811cc != 0) {
    *(int *)(DAT_14cb81198 + (longlong)DAT_14cb811c8 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb811cc) {
    iVar4 = DAT_14cb811c8;
  }
  puVar1[1] = iVar4;
  DAT_14cb811cc = DAT_14cb811cc + 1;
  puVar5 = &DAT_14cb811a8;
  if (DAT_14cb811b8 != (undefined *)0x0) {
    puVar5 = DAT_14cb811b8;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb811c8 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d96c84 FUN_145d96c84 body=114 status=ok
// SIG undefined FUN_145d96c84(void)

void FUN_145d96c84(void)

{
  longlong *plVar1;
  
  FUN_1460f1052();
  FUN_145d96cf6(DAT_14cb81364);
  if (DAT_14cb812e8 == &DAT_14cb81360) {
    DAT_14cb812e8 = (undefined4 *)0x0;
  }
  if (DAT_14cb813a0 != 0) {
    plVar1 = &DAT_14cb813c0;
    if (DAT_14cb813b0 != (longlong *)0x0) {
      plVar1 = DAT_14cb813b0;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb81388 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d96cf6 FUN_145d96cf6 body=242 status=ok
// SIG undefined FUN_145d96cf6(void)

void FUN_145d96cf6(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb812f8 != DAT_14cb81324) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb81328;
    if (DAT_14cb81330 != (undefined *)0x0) {
      puVar6 = DAT_14cb81330;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb81338 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb812f0 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb812f0 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb81328;
        if (DAT_14cb81330 != (undefined *)0x0) {
          puVar6 = DAT_14cb81330;
        }
        lVar1 = DAT_14cb812f0 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb812f0 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d96de8();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d96de8 FUN_145d96de8 body=135 status=ok
// SIG undefined FUN_145d96de8(void)

void FUN_145d96de8(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb812f0;
  if (DAT_14cb81324 != 0) {
    *(int *)(DAT_14cb812f0 + (longlong)DAT_14cb81320 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb81324) {
    iVar4 = DAT_14cb81320;
  }
  puVar1[1] = iVar4;
  DAT_14cb81324 = DAT_14cb81324 + 1;
  puVar5 = &DAT_14cb81300;
  if (DAT_14cb81310 != (undefined *)0x0) {
    puVar5 = DAT_14cb81310;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb81320 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d96e70 FUN_145d96e70 body=114 status=ok
// SIG undefined FUN_145d96e70(void)

void FUN_145d96e70(void)

{
  longlong *plVar1;
  
  FUN_14111be22();
  FUN_145d96ee2(DAT_14cb816a4);
  if (DAT_14cb81630 == &DAT_14cb816a0) {
    DAT_14cb81630 = (undefined4 *)0x0;
  }
  if (DAT_14cb816e0 != 0) {
    plVar1 = &DAT_14cb81700;
    if (DAT_14cb816f0 != (longlong *)0x0) {
      plVar1 = DAT_14cb816f0;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb816c8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d96ee2 FUN_145d96ee2 body=242 status=ok
// SIG undefined FUN_145d96ee2(void)

void FUN_145d96ee2(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb81640 != DAT_14cb8166c) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb81670;
    if (DAT_14cb81678 != (undefined *)0x0) {
      puVar6 = DAT_14cb81678;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb81680 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb81638 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb81638 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb81670;
        if (DAT_14cb81678 != (undefined *)0x0) {
          puVar6 = DAT_14cb81678;
        }
        lVar1 = DAT_14cb81638 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb81638 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d96fd4();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d96fd4 FUN_145d96fd4 body=135 status=ok
// SIG undefined FUN_145d96fd4(void)

void FUN_145d96fd4(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb81638;
  if (DAT_14cb8166c != 0) {
    *(int *)(DAT_14cb81638 + (longlong)DAT_14cb81668 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb8166c) {
    iVar4 = DAT_14cb81668;
  }
  puVar1[1] = iVar4;
  DAT_14cb8166c = DAT_14cb8166c + 1;
  puVar5 = &DAT_14cb81648;
  if (DAT_14cb81658 != (undefined *)0x0) {
    puVar5 = DAT_14cb81658;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb81668 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d9705c FUN_145d9705c body=114 status=ok
// SIG undefined FUN_145d9705c(void)

void FUN_145d9705c(void)

{
  longlong *plVar1;
  
  FUN_14112da4e();
  FUN_145d970ce(DAT_14cb817d4);
  if (DAT_14cb81758 == &DAT_14cb817d0) {
    DAT_14cb81758 = (undefined4 *)0x0;
  }
  if (DAT_14cb81810 != 0) {
    plVar1 = &DAT_14cb81830;
    if (DAT_14cb81820 != (longlong *)0x0) {
      plVar1 = DAT_14cb81820;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb817f8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d970ce FUN_145d970ce body=242 status=ok
// SIG undefined FUN_145d970ce(void)

void FUN_145d970ce(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb81768 != DAT_14cb81794) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb81798;
    if (DAT_14cb817a0 != (undefined *)0x0) {
      puVar6 = DAT_14cb817a0;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb817a8 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb81760 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb81760 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb81798;
        if (DAT_14cb817a0 != (undefined *)0x0) {
          puVar6 = DAT_14cb817a0;
        }
        lVar1 = DAT_14cb81760 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb81760 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d971c0();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d971c0 FUN_145d971c0 body=135 status=ok
// SIG undefined FUN_145d971c0(void)

void FUN_145d971c0(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb81760;
  if (DAT_14cb81794 != 0) {
    *(int *)(DAT_14cb81760 + (longlong)DAT_14cb81790 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb81794) {
    iVar4 = DAT_14cb81790;
  }
  puVar1[1] = iVar4;
  DAT_14cb81794 = DAT_14cb81794 + 1;
  puVar5 = &DAT_14cb81770;
  if (DAT_14cb81780 != (undefined *)0x0) {
    puVar5 = DAT_14cb81780;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb81790 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d97248 FUN_145d97248 body=114 status=ok
// SIG undefined FUN_145d97248(void)

void FUN_145d97248(void)

{
  longlong *plVar1;
  
  FUN_14109553a();
  FUN_145d972ba(DAT_14cb81a94);
  if (DAT_14cb81a20 == &DAT_14cb81a90) {
    DAT_14cb81a20 = (undefined4 *)0x0;
  }
  if (DAT_14cb81ad0 != 0) {
    plVar1 = &DAT_14cb81af0;
    if (DAT_14cb81ae0 != (longlong *)0x0) {
      plVar1 = DAT_14cb81ae0;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb81ab8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d972ba FUN_145d972ba body=242 status=ok
// SIG undefined FUN_145d972ba(void)

void FUN_145d972ba(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb81a30 != DAT_14cb81a5c) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb81a60;
    if (DAT_14cb81a68 != (undefined *)0x0) {
      puVar6 = DAT_14cb81a68;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb81a70 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb81a28 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb81a28 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb81a60;
        if (DAT_14cb81a68 != (undefined *)0x0) {
          puVar6 = DAT_14cb81a68;
        }
        lVar1 = DAT_14cb81a28 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb81a28 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d973ac();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d973ac FUN_145d973ac body=135 status=ok
// SIG undefined FUN_145d973ac(void)

void FUN_145d973ac(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb81a28;
  if (DAT_14cb81a5c != 0) {
    *(int *)(DAT_14cb81a28 + (longlong)DAT_14cb81a58 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb81a5c) {
    iVar4 = DAT_14cb81a58;
  }
  puVar1[1] = iVar4;
  DAT_14cb81a5c = DAT_14cb81a5c + 1;
  puVar5 = &DAT_14cb81a38;
  if (DAT_14cb81a48 != (undefined *)0x0) {
    puVar5 = DAT_14cb81a48;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb81a58 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d97434 FUN_145d97434 body=114 status=ok
// SIG undefined FUN_145d97434(void)

void FUN_145d97434(void)

{
  longlong *plVar1;
  
  FUN_1460f17e8();
  FUN_145d974a6(DAT_14cb83644);
  if (DAT_14cb835d0 == &DAT_14cb83640) {
    DAT_14cb835d0 = (undefined4 *)0x0;
  }
  if (DAT_14cb83680 != 0) {
    plVar1 = &DAT_14cb836a0;
    if (DAT_14cb83690 != (longlong *)0x0) {
      plVar1 = DAT_14cb83690;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb83668 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d974a6 FUN_145d974a6 body=242 status=ok
// SIG undefined FUN_145d974a6(void)

void FUN_145d974a6(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb835e0 != DAT_14cb8360c) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb83610;
    if (DAT_14cb83618 != (undefined *)0x0) {
      puVar6 = DAT_14cb83618;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb83620 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb835d8 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb835d8 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb83610;
        if (DAT_14cb83618 != (undefined *)0x0) {
          puVar6 = DAT_14cb83618;
        }
        lVar1 = DAT_14cb835d8 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb835d8 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d97598();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d97598 FUN_145d97598 body=135 status=ok
// SIG undefined FUN_145d97598(void)

void FUN_145d97598(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb835d8;
  if (DAT_14cb8360c != 0) {
    *(int *)(DAT_14cb835d8 + (longlong)DAT_14cb83608 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb8360c) {
    iVar4 = DAT_14cb83608;
  }
  puVar1[1] = iVar4;
  DAT_14cb8360c = DAT_14cb8360c + 1;
  puVar5 = &DAT_14cb835e8;
  if (DAT_14cb835f8 != (undefined *)0x0) {
    puVar5 = DAT_14cb835f8;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb83608 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d97620 FUN_145d97620 body=114 status=ok
// SIG undefined FUN_145d97620(void)

void FUN_145d97620(void)

{
  longlong *plVar1;
  
  FUN_1460f1f7e();
  FUN_145d97692(DAT_14cb83734);
  if (DAT_14cb836c0 == &DAT_14cb83730) {
    DAT_14cb836c0 = (undefined4 *)0x0;
  }
  if (DAT_14cb83770 != 0) {
    plVar1 = &DAT_14cb83790;
    if (DAT_14cb83780 != (longlong *)0x0) {
      plVar1 = DAT_14cb83780;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb83758 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d97692 FUN_145d97692 body=242 status=ok
// SIG undefined FUN_145d97692(void)

void FUN_145d97692(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb836d0 != DAT_14cb836fc) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb83700;
    if (DAT_14cb83708 != (undefined *)0x0) {
      puVar6 = DAT_14cb83708;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb83710 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb836c8 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb836c8 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb83700;
        if (DAT_14cb83708 != (undefined *)0x0) {
          puVar6 = DAT_14cb83708;
        }
        lVar1 = DAT_14cb836c8 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb836c8 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d97784();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d97784 FUN_145d97784 body=135 status=ok
// SIG undefined FUN_145d97784(void)

void FUN_145d97784(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb836c8;
  if (DAT_14cb836fc != 0) {
    *(int *)(DAT_14cb836c8 + (longlong)DAT_14cb836f8 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb836fc) {
    iVar4 = DAT_14cb836f8;
  }
  puVar1[1] = iVar4;
  DAT_14cb836fc = DAT_14cb836fc + 1;
  puVar5 = &DAT_14cb836d8;
  if (DAT_14cb836e8 != (undefined *)0x0) {
    puVar5 = DAT_14cb836e8;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb836f8 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d9780c FUN_145d9780c body=114 status=ok
// SIG undefined FUN_145d9780c(void)

void FUN_145d9780c(void)

{
  longlong *plVar1;
  
  FUN_1460f2714();
  FUN_145d9787e(DAT_14cb83824);
  if (DAT_14cb837b0 == &DAT_14cb83820) {
    DAT_14cb837b0 = (undefined4 *)0x0;
  }
  if (DAT_14cb83860 != 0) {
    plVar1 = &DAT_14cb83880;
    if (DAT_14cb83870 != (longlong *)0x0) {
      plVar1 = DAT_14cb83870;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb83848 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d9787e FUN_145d9787e body=242 status=ok
// SIG undefined FUN_145d9787e(void)

void FUN_145d9787e(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb837c0 != DAT_14cb837ec) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb837f0;
    if (DAT_14cb837f8 != (undefined *)0x0) {
      puVar6 = DAT_14cb837f8;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb83800 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb837b8 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb837b8 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb837f0;
        if (DAT_14cb837f8 != (undefined *)0x0) {
          puVar6 = DAT_14cb837f8;
        }
        lVar1 = DAT_14cb837b8 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb837b8 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d97970();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d97970 FUN_145d97970 body=135 status=ok
// SIG undefined FUN_145d97970(void)

void FUN_145d97970(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb837b8;
  if (DAT_14cb837ec != 0) {
    *(int *)(DAT_14cb837b8 + (longlong)DAT_14cb837e8 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb837ec) {
    iVar4 = DAT_14cb837e8;
  }
  puVar1[1] = iVar4;
  DAT_14cb837ec = DAT_14cb837ec + 1;
  puVar5 = &DAT_14cb837c8;
  if (DAT_14cb837d8 != (undefined *)0x0) {
    puVar5 = DAT_14cb837d8;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb837e8 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d979f8 FUN_145d979f8 body=114 status=ok
// SIG undefined FUN_145d979f8(void)

void FUN_145d979f8(void)

{
  longlong *plVar1;
  
  FUN_1460f2eaa();
  FUN_145d97a6a(DAT_14cb83914);
  if (DAT_14cb838a0 == &DAT_14cb83910) {
    DAT_14cb838a0 = (undefined4 *)0x0;
  }
  if (DAT_14cb83950 != 0) {
    plVar1 = &DAT_14cb83970;
    if (DAT_14cb83960 != (longlong *)0x0) {
      plVar1 = DAT_14cb83960;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb83938 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d97a6a FUN_145d97a6a body=242 status=ok
// SIG undefined FUN_145d97a6a(void)

void FUN_145d97a6a(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb838b0 != DAT_14cb838dc) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb838e0;
    if (DAT_14cb838e8 != (undefined *)0x0) {
      puVar6 = DAT_14cb838e8;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb838f0 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb838a8 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb838a8 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb838e0;
        if (DAT_14cb838e8 != (undefined *)0x0) {
          puVar6 = DAT_14cb838e8;
        }
        lVar1 = DAT_14cb838a8 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb838a8 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d97b5c();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d97b5c FUN_145d97b5c body=135 status=ok
// SIG undefined FUN_145d97b5c(void)

void FUN_145d97b5c(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb838a8;
  if (DAT_14cb838dc != 0) {
    *(int *)(DAT_14cb838a8 + (longlong)DAT_14cb838d8 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb838dc) {
    iVar4 = DAT_14cb838d8;
  }
  puVar1[1] = iVar4;
  DAT_14cb838dc = DAT_14cb838dc + 1;
  puVar5 = &DAT_14cb838b8;
  if (DAT_14cb838c8 != (undefined *)0x0) {
    puVar5 = DAT_14cb838c8;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb838d8 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d97be4 FUN_145d97be4 body=114 status=ok
// SIG undefined FUN_145d97be4(void)

void FUN_145d97be4(void)

{
  longlong *plVar1;
  
  FUN_1460f3640();
  FUN_145d97c56(DAT_14cb844a4);
  if (DAT_14cb84428 == &DAT_14cb844a0) {
    DAT_14cb84428 = (undefined4 *)0x0;
  }
  if (DAT_14cb844e0 != 0) {
    plVar1 = &DAT_14cb84500;
    if (DAT_14cb844f0 != (longlong *)0x0) {
      plVar1 = DAT_14cb844f0;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb844c8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d97c56 FUN_145d97c56 body=242 status=ok
// SIG undefined FUN_145d97c56(void)

void FUN_145d97c56(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb84438 != DAT_14cb84464) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb84468;
    if (DAT_14cb84470 != (undefined *)0x0) {
      puVar6 = DAT_14cb84470;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb84478 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb84430 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb84430 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb84468;
        if (DAT_14cb84470 != (undefined *)0x0) {
          puVar6 = DAT_14cb84470;
        }
        lVar1 = DAT_14cb84430 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb84430 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d97d48();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d97d48 FUN_145d97d48 body=135 status=ok
// SIG undefined FUN_145d97d48(void)

void FUN_145d97d48(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb84430;
  if (DAT_14cb84464 != 0) {
    *(int *)(DAT_14cb84430 + (longlong)DAT_14cb84460 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb84464) {
    iVar4 = DAT_14cb84460;
  }
  puVar1[1] = iVar4;
  DAT_14cb84464 = DAT_14cb84464 + 1;
  puVar5 = &DAT_14cb84440;
  if (DAT_14cb84450 != (undefined *)0x0) {
    puVar5 = DAT_14cb84450;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb84460 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d97dd0 FUN_145d97dd0 body=114 status=ok
// SIG undefined FUN_145d97dd0(void)

void FUN_145d97dd0(void)

{
  longlong *plVar1;
  
  FUN_1460f3dd6();
  FUN_145d97e42(DAT_14cb84594);
  if (DAT_14cb84520 == &DAT_14cb84590) {
    DAT_14cb84520 = (undefined4 *)0x0;
  }
  if (DAT_14cb845d0 != 0) {
    plVar1 = &DAT_14cb845f0;
    if (DAT_14cb845e0 != (longlong *)0x0) {
      plVar1 = DAT_14cb845e0;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb845b8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d97e42 FUN_145d97e42 body=242 status=ok
// SIG undefined FUN_145d97e42(void)

void FUN_145d97e42(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb84530 != DAT_14cb8455c) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb84560;
    if (DAT_14cb84568 != (undefined *)0x0) {
      puVar6 = DAT_14cb84568;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb84570 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb84528 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb84528 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb84560;
        if (DAT_14cb84568 != (undefined *)0x0) {
          puVar6 = DAT_14cb84568;
        }
        lVar1 = DAT_14cb84528 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb84528 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d97f34();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d97f34 FUN_145d97f34 body=135 status=ok
// SIG undefined FUN_145d97f34(void)

void FUN_145d97f34(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb84528;
  if (DAT_14cb8455c != 0) {
    *(int *)(DAT_14cb84528 + (longlong)DAT_14cb84558 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb8455c) {
    iVar4 = DAT_14cb84558;
  }
  puVar1[1] = iVar4;
  DAT_14cb8455c = DAT_14cb8455c + 1;
  puVar5 = &DAT_14cb84538;
  if (DAT_14cb84548 != (undefined *)0x0) {
    puVar5 = DAT_14cb84548;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb84558 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d97fbc FUN_145d97fbc body=114 status=ok
// SIG undefined FUN_145d97fbc(void)

void FUN_145d97fbc(void)

{
  longlong *plVar1;
  
  FUN_145846a72();
  FUN_145d9802e(DAT_14cb85464);
  if (DAT_14cb853f0 == &DAT_14cb85460) {
    DAT_14cb853f0 = (undefined4 *)0x0;
  }
  if (DAT_14cb854a0 != 0) {
    plVar1 = &DAT_14cb854c0;
    if (DAT_14cb854b0 != (longlong *)0x0) {
      plVar1 = DAT_14cb854b0;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb85488 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d9802e FUN_145d9802e body=242 status=ok
// SIG undefined FUN_145d9802e(void)

void FUN_145d9802e(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb85400 != DAT_14cb8542c) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb85430;
    if (DAT_14cb85438 != (undefined *)0x0) {
      puVar6 = DAT_14cb85438;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb85440 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb853f8 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb853f8 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb85430;
        if (DAT_14cb85438 != (undefined *)0x0) {
          puVar6 = DAT_14cb85438;
        }
        lVar1 = DAT_14cb853f8 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb853f8 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d98120();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d98120 FUN_145d98120 body=135 status=ok
// SIG undefined FUN_145d98120(void)

void FUN_145d98120(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb853f8;
  if (DAT_14cb8542c != 0) {
    *(int *)(DAT_14cb853f8 + (longlong)DAT_14cb85428 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb8542c) {
    iVar4 = DAT_14cb85428;
  }
  puVar1[1] = iVar4;
  DAT_14cb8542c = DAT_14cb8542c + 1;
  puVar5 = &DAT_14cb85408;
  if (DAT_14cb85418 != (undefined *)0x0) {
    puVar5 = DAT_14cb85418;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb85428 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d981a8 FUN_145d981a8 body=114 status=ok
// SIG undefined FUN_145d981a8(void)

void FUN_145d981a8(void)

{
  longlong *plVar1;
  
  FUN_1459780a2();
  FUN_145d9821a(DAT_14cb856e4);
  if (DAT_14cb85668 == &DAT_14cb856e0) {
    DAT_14cb85668 = (undefined4 *)0x0;
  }
  if (DAT_14cb85720 != 0) {
    plVar1 = &DAT_14cb85740;
    if (DAT_14cb85730 != (longlong *)0x0) {
      plVar1 = DAT_14cb85730;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb85708 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d9821a FUN_145d9821a body=242 status=ok
// SIG undefined FUN_145d9821a(void)

void FUN_145d9821a(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb85678 != DAT_14cb856a4) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb856a8;
    if (DAT_14cb856b0 != (undefined *)0x0) {
      puVar6 = DAT_14cb856b0;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb856b8 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb85670 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb85670 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb856a8;
        if (DAT_14cb856b0 != (undefined *)0x0) {
          puVar6 = DAT_14cb856b0;
        }
        lVar1 = DAT_14cb85670 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb85670 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d9830c();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d9830c FUN_145d9830c body=135 status=ok
// SIG undefined FUN_145d9830c(void)

void FUN_145d9830c(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb85670;
  if (DAT_14cb856a4 != 0) {
    *(int *)(DAT_14cb85670 + (longlong)DAT_14cb856a0 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb856a4) {
    iVar4 = DAT_14cb856a0;
  }
  puVar1[1] = iVar4;
  DAT_14cb856a4 = DAT_14cb856a4 + 1;
  puVar5 = &DAT_14cb85680;
  if (DAT_14cb85690 != (undefined *)0x0) {
    puVar5 = DAT_14cb85690;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb856a0 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d98394 FUN_145d98394 body=114 status=ok
// SIG undefined FUN_145d98394(void)

void FUN_145d98394(void)

{
  longlong *plVar1;
  
  FUN_1460f456c();
  FUN_145d98406(DAT_14cb85944);
  if (DAT_14cb858c8 == &DAT_14cb85940) {
    DAT_14cb858c8 = (undefined4 *)0x0;
  }
  if (DAT_14cb85980 != 0) {
    plVar1 = &DAT_14cb859a0;
    if (DAT_14cb85990 != (longlong *)0x0) {
      plVar1 = DAT_14cb85990;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb85968 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d98406 FUN_145d98406 body=242 status=ok
// SIG undefined FUN_145d98406(void)

void FUN_145d98406(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb858d8 != DAT_14cb85904) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb85908;
    if (DAT_14cb85910 != (undefined *)0x0) {
      puVar6 = DAT_14cb85910;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb85918 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb858d0 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb858d0 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb85908;
        if (DAT_14cb85910 != (undefined *)0x0) {
          puVar6 = DAT_14cb85910;
        }
        lVar1 = DAT_14cb858d0 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb858d0 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d984f8();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d984f8 FUN_145d984f8 body=135 status=ok
// SIG undefined FUN_145d984f8(void)

void FUN_145d984f8(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb858d0;
  if (DAT_14cb85904 != 0) {
    *(int *)(DAT_14cb858d0 + (longlong)DAT_14cb85900 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb85904) {
    iVar4 = DAT_14cb85900;
  }
  puVar1[1] = iVar4;
  DAT_14cb85904 = DAT_14cb85904 + 1;
  puVar5 = &DAT_14cb858e0;
  if (DAT_14cb858f0 != (undefined *)0x0) {
    puVar5 = DAT_14cb858f0;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb85900 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d98580 FUN_145d98580 body=114 status=ok
// SIG undefined FUN_145d98580(void)

void FUN_145d98580(void)

{
  longlong *plVar1;
  
  FUN_146106916();
  FUN_145d985f2(DAT_14cb85b94);
  if (DAT_14cb85b20 == &DAT_14cb85b90) {
    DAT_14cb85b20 = (undefined4 *)0x0;
  }
  if (DAT_14cb85bd0 != 0) {
    plVar1 = &DAT_14cb85bf0;
    if (DAT_14cb85be0 != (longlong *)0x0) {
      plVar1 = DAT_14cb85be0;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb85bb8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d985f2 FUN_145d985f2 body=242 status=ok
// SIG undefined FUN_145d985f2(void)

void FUN_145d985f2(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb85b30 != DAT_14cb85b5c) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb85b60;
    if (DAT_14cb85b68 != (undefined *)0x0) {
      puVar6 = DAT_14cb85b68;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb85b70 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb85b28 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb85b28 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb85b60;
        if (DAT_14cb85b68 != (undefined *)0x0) {
          puVar6 = DAT_14cb85b68;
        }
        lVar1 = DAT_14cb85b28 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb85b28 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d986e4();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d986e4 FUN_145d986e4 body=135 status=ok
// SIG undefined FUN_145d986e4(void)

void FUN_145d986e4(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb85b28;
  if (DAT_14cb85b5c != 0) {
    *(int *)(DAT_14cb85b28 + (longlong)DAT_14cb85b58 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb85b5c) {
    iVar4 = DAT_14cb85b58;
  }
  puVar1[1] = iVar4;
  DAT_14cb85b5c = DAT_14cb85b5c + 1;
  puVar5 = &DAT_14cb85b38;
  if (DAT_14cb85b48 != (undefined *)0x0) {
    puVar5 = DAT_14cb85b48;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb85b58 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d9876c FUN_145d9876c body=114 status=ok
// SIG undefined FUN_145d9876c(void)

void FUN_145d9876c(void)

{
  longlong *plVar1;
  
  FUN_1460f4d02();
  FUN_145d987de(DAT_14cb86034);
  if (DAT_14cb85fc0 == &DAT_14cb86030) {
    DAT_14cb85fc0 = (undefined4 *)0x0;
  }
  if (DAT_14cb86070 != 0) {
    plVar1 = &DAT_14cb86090;
    if (DAT_14cb86080 != (longlong *)0x0) {
      plVar1 = DAT_14cb86080;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb86058 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d987de FUN_145d987de body=242 status=ok
// SIG undefined FUN_145d987de(void)

void FUN_145d987de(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb85fd0 != DAT_14cb85ffc) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb86000;
    if (DAT_14cb86008 != (undefined *)0x0) {
      puVar6 = DAT_14cb86008;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb86010 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb85fc8 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb85fc8 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb86000;
        if (DAT_14cb86008 != (undefined *)0x0) {
          puVar6 = DAT_14cb86008;
        }
        lVar1 = DAT_14cb85fc8 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb85fc8 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d988d0();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d988d0 FUN_145d988d0 body=135 status=ok
// SIG undefined FUN_145d988d0(void)

void FUN_145d988d0(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb85fc8;
  if (DAT_14cb85ffc != 0) {
    *(int *)(DAT_14cb85fc8 + (longlong)DAT_14cb85ff8 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb85ffc) {
    iVar4 = DAT_14cb85ff8;
  }
  puVar1[1] = iVar4;
  DAT_14cb85ffc = DAT_14cb85ffc + 1;
  puVar5 = &DAT_14cb85fd8;
  if (DAT_14cb85fe8 != (undefined *)0x0) {
    puVar5 = DAT_14cb85fe8;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb85ff8 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d98958 FUN_145d98958 body=114 status=ok
// SIG undefined FUN_145d98958(void)

void FUN_145d98958(void)

{
  longlong *plVar1;
  
  FUN_1460f5498();
  FUN_145d989ca(DAT_14cb88b24);
  if (DAT_14cb88aa8 == &DAT_14cb88b20) {
    DAT_14cb88aa8 = (undefined4 *)0x0;
  }
  if (DAT_14cb88b60 != 0) {
    plVar1 = &DAT_14cb88b80;
    if (DAT_14cb88b70 != (longlong *)0x0) {
      plVar1 = DAT_14cb88b70;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb88b48 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d989ca FUN_145d989ca body=242 status=ok
// SIG undefined FUN_145d989ca(void)

void FUN_145d989ca(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb88ab8 != DAT_14cb88ae4) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb88ae8;
    if (DAT_14cb88af0 != (undefined *)0x0) {
      puVar6 = DAT_14cb88af0;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb88af8 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb88ab0 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb88ab0 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb88ae8;
        if (DAT_14cb88af0 != (undefined *)0x0) {
          puVar6 = DAT_14cb88af0;
        }
        lVar1 = DAT_14cb88ab0 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb88ab0 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d98abc();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d98abc FUN_145d98abc body=135 status=ok
// SIG undefined FUN_145d98abc(void)

void FUN_145d98abc(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb88ab0;
  if (DAT_14cb88ae4 != 0) {
    *(int *)(DAT_14cb88ab0 + (longlong)DAT_14cb88ae0 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb88ae4) {
    iVar4 = DAT_14cb88ae0;
  }
  puVar1[1] = iVar4;
  DAT_14cb88ae4 = DAT_14cb88ae4 + 1;
  puVar5 = &DAT_14cb88ac0;
  if (DAT_14cb88ad0 != (undefined *)0x0) {
    puVar5 = DAT_14cb88ad0;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb88ae0 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d98b44 FUN_145d98b44 body=114 status=ok
// SIG undefined FUN_145d98b44(void)

void FUN_145d98b44(void)

{
  longlong *plVar1;
  
  FUN_140d7492c();
  FUN_145d98bb6(DAT_14cb88f24);
  if (DAT_14cb88eb0 == &DAT_14cb88f20) {
    DAT_14cb88eb0 = (undefined4 *)0x0;
  }
  if (DAT_14cb88f60 != 0) {
    plVar1 = &DAT_14cb88f80;
    if (DAT_14cb88f70 != (longlong *)0x0) {
      plVar1 = DAT_14cb88f70;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb88f48 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d98bb6 FUN_145d98bb6 body=242 status=ok
// SIG undefined FUN_145d98bb6(void)

void FUN_145d98bb6(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb88ec0 != DAT_14cb88eec) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb88ef0;
    if (DAT_14cb88ef8 != (undefined *)0x0) {
      puVar6 = DAT_14cb88ef8;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb88f00 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb88eb8 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb88eb8 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb88ef0;
        if (DAT_14cb88ef8 != (undefined *)0x0) {
          puVar6 = DAT_14cb88ef8;
        }
        lVar1 = DAT_14cb88eb8 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb88eb8 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d98ca8();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d98ca8 FUN_145d98ca8 body=135 status=ok
// SIG undefined FUN_145d98ca8(void)

void FUN_145d98ca8(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb88eb8;
  if (DAT_14cb88eec != 0) {
    *(int *)(DAT_14cb88eb8 + (longlong)DAT_14cb88ee8 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb88eec) {
    iVar4 = DAT_14cb88ee8;
  }
  puVar1[1] = iVar4;
  DAT_14cb88eec = DAT_14cb88eec + 1;
  puVar5 = &DAT_14cb88ec8;
  if (DAT_14cb88ed8 != (undefined *)0x0) {
    puVar5 = DAT_14cb88ed8;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb88ee8 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d98d30 FUN_145d98d30 body=114 status=ok
// SIG undefined FUN_145d98d30(void)

void FUN_145d98d30(void)

{
  longlong *plVar1;
  
  FUN_1460f5c2e();
  FUN_145d98da2(DAT_14cb89034);
  if (DAT_14cb88fc0 == &DAT_14cb89030) {
    DAT_14cb88fc0 = (undefined4 *)0x0;
  }
  if (DAT_14cb89070 != 0) {
    plVar1 = &DAT_14cb89090;
    if (DAT_14cb89080 != (longlong *)0x0) {
      plVar1 = DAT_14cb89080;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb89058 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d98da2 FUN_145d98da2 body=242 status=ok
// SIG undefined FUN_145d98da2(void)

void FUN_145d98da2(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb88fd0 != DAT_14cb88ffc) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb89000;
    if (DAT_14cb89008 != (undefined *)0x0) {
      puVar6 = DAT_14cb89008;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb89010 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb88fc8 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb88fc8 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb89000;
        if (DAT_14cb89008 != (undefined *)0x0) {
          puVar6 = DAT_14cb89008;
        }
        lVar1 = DAT_14cb88fc8 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb88fc8 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d98e94();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d98e94 FUN_145d98e94 body=135 status=ok
// SIG undefined FUN_145d98e94(void)

void FUN_145d98e94(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb88fc8;
  if (DAT_14cb88ffc != 0) {
    *(int *)(DAT_14cb88fc8 + (longlong)DAT_14cb88ff8 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb88ffc) {
    iVar4 = DAT_14cb88ff8;
  }
  puVar1[1] = iVar4;
  DAT_14cb88ffc = DAT_14cb88ffc + 1;
  puVar5 = &DAT_14cb88fd8;
  if (DAT_14cb88fe8 != (undefined *)0x0) {
    puVar5 = DAT_14cb88fe8;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb88ff8 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d98f1c FUN_145d98f1c body=114 status=ok
// SIG undefined FUN_145d98f1c(void)

void FUN_145d98f1c(void)

{
  longlong *plVar1;
  
  FUN_1460f63c4();
  FUN_145d98f8e(DAT_14cb89af4);
  if (DAT_14cb89a78 == &DAT_14cb89af0) {
    DAT_14cb89a78 = (undefined4 *)0x0;
  }
  if (DAT_14cb89b30 != 0) {
    plVar1 = &DAT_14cb89b50;
    if (DAT_14cb89b40 != (longlong *)0x0) {
      plVar1 = DAT_14cb89b40;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb89b18 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d98f8e FUN_145d98f8e body=242 status=ok
// SIG undefined FUN_145d98f8e(void)

void FUN_145d98f8e(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb89a88 != DAT_14cb89ab4) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb89ab8;
    if (DAT_14cb89ac0 != (undefined *)0x0) {
      puVar6 = DAT_14cb89ac0;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb89ac8 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb89a80 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb89a80 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb89ab8;
        if (DAT_14cb89ac0 != (undefined *)0x0) {
          puVar6 = DAT_14cb89ac0;
        }
        lVar1 = DAT_14cb89a80 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb89a80 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d99080();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d99080 FUN_145d99080 body=135 status=ok
// SIG undefined FUN_145d99080(void)

void FUN_145d99080(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb89a80;
  if (DAT_14cb89ab4 != 0) {
    *(int *)(DAT_14cb89a80 + (longlong)DAT_14cb89ab0 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb89ab4) {
    iVar4 = DAT_14cb89ab0;
  }
  puVar1[1] = iVar4;
  DAT_14cb89ab4 = DAT_14cb89ab4 + 1;
  puVar5 = &DAT_14cb89a90;
  if (DAT_14cb89aa0 != (undefined *)0x0) {
    puVar5 = DAT_14cb89aa0;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb89ab0 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d99108 FUN_145d99108 body=114 status=ok
// SIG undefined FUN_145d99108(void)

void FUN_145d99108(void)

{
  longlong *plVar1;
  
  FUN_1460f6b5a();
  FUN_145d9917a(DAT_14cb8a2c4);
  if (DAT_14cb8a248 == &DAT_14cb8a2c0) {
    DAT_14cb8a248 = (undefined4 *)0x0;
  }
  if (DAT_14cb8a300 != 0) {
    plVar1 = &DAT_14cb8a320;
    if (DAT_14cb8a310 != (longlong *)0x0) {
      plVar1 = DAT_14cb8a310;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb8a2e8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d9917a FUN_145d9917a body=242 status=ok
// SIG undefined FUN_145d9917a(void)

void FUN_145d9917a(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb8a258 != DAT_14cb8a284) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb8a288;
    if (DAT_14cb8a290 != (undefined *)0x0) {
      puVar6 = DAT_14cb8a290;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb8a298 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb8a250 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb8a250 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb8a288;
        if (DAT_14cb8a290 != (undefined *)0x0) {
          puVar6 = DAT_14cb8a290;
        }
        lVar1 = DAT_14cb8a250 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb8a250 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d9926c();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d9926c FUN_145d9926c body=135 status=ok
// SIG undefined FUN_145d9926c(void)

void FUN_145d9926c(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb8a250;
  if (DAT_14cb8a284 != 0) {
    *(int *)(DAT_14cb8a250 + (longlong)DAT_14cb8a280 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb8a284) {
    iVar4 = DAT_14cb8a280;
  }
  puVar1[1] = iVar4;
  DAT_14cb8a284 = DAT_14cb8a284 + 1;
  puVar5 = &DAT_14cb8a260;
  if (DAT_14cb8a270 != (undefined *)0x0) {
    puVar5 = DAT_14cb8a270;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb8a280 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d992f4 FUN_145d992f4 body=114 status=ok
// SIG undefined FUN_145d992f4(void)

void FUN_145d992f4(void)

{
  longlong *plVar1;
  
  FUN_1460f72f0();
  FUN_145d99366(DAT_14cb8a904);
  if (DAT_14cb8a890 == &DAT_14cb8a900) {
    DAT_14cb8a890 = (undefined4 *)0x0;
  }
  if (DAT_14cb8a940 != 0) {
    plVar1 = &DAT_14cb8a960;
    if (DAT_14cb8a950 != (longlong *)0x0) {
      plVar1 = DAT_14cb8a950;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb8a928 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d99366 FUN_145d99366 body=242 status=ok
// SIG undefined FUN_145d99366(void)

void FUN_145d99366(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb8a8a0 != DAT_14cb8a8cc) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb8a8d0;
    if (DAT_14cb8a8d8 != (undefined *)0x0) {
      puVar6 = DAT_14cb8a8d8;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb8a8e0 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb8a898 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb8a898 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb8a8d0;
        if (DAT_14cb8a8d8 != (undefined *)0x0) {
          puVar6 = DAT_14cb8a8d8;
        }
        lVar1 = DAT_14cb8a898 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb8a898 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d99458();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d99458 FUN_145d99458 body=135 status=ok
// SIG undefined FUN_145d99458(void)

void FUN_145d99458(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb8a898;
  if (DAT_14cb8a8cc != 0) {
    *(int *)(DAT_14cb8a898 + (longlong)DAT_14cb8a8c8 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb8a8cc) {
    iVar4 = DAT_14cb8a8c8;
  }
  puVar1[1] = iVar4;
  DAT_14cb8a8cc = DAT_14cb8a8cc + 1;
  puVar5 = &DAT_14cb8a8a8;
  if (DAT_14cb8a8b8 != (undefined *)0x0) {
    puVar5 = DAT_14cb8a8b8;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb8a8c8 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d994e0 FUN_145d994e0 body=114 status=ok
// SIG undefined FUN_145d994e0(void)

void FUN_145d994e0(void)

{
  longlong *plVar1;
  
  FUN_1460f7a86();
  FUN_145d99552(DAT_14cb8ac74);
  if (DAT_14cb8ac00 == &DAT_14cb8ac70) {
    DAT_14cb8ac00 = (undefined4 *)0x0;
  }
  if (DAT_14cb8acb0 != 0) {
    plVar1 = &DAT_14cb8acd0;
    if (DAT_14cb8acc0 != (longlong *)0x0) {
      plVar1 = DAT_14cb8acc0;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb8ac98 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d99552 FUN_145d99552 body=242 status=ok
// SIG undefined FUN_145d99552(void)

void FUN_145d99552(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb8ac10 != DAT_14cb8ac3c) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb8ac40;
    if (DAT_14cb8ac48 != (undefined *)0x0) {
      puVar6 = DAT_14cb8ac48;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb8ac50 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb8ac08 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb8ac08 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb8ac40;
        if (DAT_14cb8ac48 != (undefined *)0x0) {
          puVar6 = DAT_14cb8ac48;
        }
        lVar1 = DAT_14cb8ac08 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb8ac08 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d99644();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d99644 FUN_145d99644 body=135 status=ok
// SIG undefined FUN_145d99644(void)

void FUN_145d99644(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb8ac08;
  if (DAT_14cb8ac3c != 0) {
    *(int *)(DAT_14cb8ac08 + (longlong)DAT_14cb8ac38 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb8ac3c) {
    iVar4 = DAT_14cb8ac38;
  }
  puVar1[1] = iVar4;
  DAT_14cb8ac3c = DAT_14cb8ac3c + 1;
  puVar5 = &DAT_14cb8ac18;
  if (DAT_14cb8ac28 != (undefined *)0x0) {
    puVar5 = DAT_14cb8ac28;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb8ac38 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d996cc FUN_145d996cc body=114 status=ok
// SIG undefined FUN_145d996cc(void)

void FUN_145d996cc(void)

{
  longlong *plVar1;
  
  FUN_1460f821c();
  FUN_145d9973e(DAT_14cb8af04);
  if (DAT_14cb8ae88 == &DAT_14cb8af00) {
    DAT_14cb8ae88 = (undefined4 *)0x0;
  }
  if (DAT_14cb8af40 != 0) {
    plVar1 = &DAT_14cb8af60;
    if (DAT_14cb8af50 != (longlong *)0x0) {
      plVar1 = DAT_14cb8af50;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb8af28 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d9973e FUN_145d9973e body=242 status=ok
// SIG undefined FUN_145d9973e(void)

void FUN_145d9973e(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb8ae98 != DAT_14cb8aec4) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb8aec8;
    if (DAT_14cb8aed0 != (undefined *)0x0) {
      puVar6 = DAT_14cb8aed0;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb8aed8 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb8ae90 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb8ae90 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb8aec8;
        if (DAT_14cb8aed0 != (undefined *)0x0) {
          puVar6 = DAT_14cb8aed0;
        }
        lVar1 = DAT_14cb8ae90 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb8ae90 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d99830();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d99830 FUN_145d99830 body=135 status=ok
// SIG undefined FUN_145d99830(void)

void FUN_145d99830(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb8ae90;
  if (DAT_14cb8aec4 != 0) {
    *(int *)(DAT_14cb8ae90 + (longlong)DAT_14cb8aec0 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb8aec4) {
    iVar4 = DAT_14cb8aec0;
  }
  puVar1[1] = iVar4;
  DAT_14cb8aec4 = DAT_14cb8aec4 + 1;
  puVar5 = &DAT_14cb8aea0;
  if (DAT_14cb8aeb0 != (undefined *)0x0) {
    puVar5 = DAT_14cb8aeb0;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb8aec0 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d998b8 FUN_145d998b8 body=114 status=ok
// SIG undefined FUN_145d998b8(void)

void FUN_145d998b8(void)

{
  longlong *plVar1;
  
  FUN_1460f89b2();
  FUN_145d9992a(DAT_14cb8b034);
  if (DAT_14cb8afc0 == &DAT_14cb8b030) {
    DAT_14cb8afc0 = (undefined4 *)0x0;
  }
  if (DAT_14cb8b070 != 0) {
    plVar1 = &DAT_14cb8b090;
    if (DAT_14cb8b080 != (longlong *)0x0) {
      plVar1 = DAT_14cb8b080;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb8b058 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d9992a FUN_145d9992a body=242 status=ok
// SIG undefined FUN_145d9992a(void)

void FUN_145d9992a(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb8afd0 != DAT_14cb8affc) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb8b000;
    if (DAT_14cb8b008 != (undefined *)0x0) {
      puVar6 = DAT_14cb8b008;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb8b010 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb8afc8 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb8afc8 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb8b000;
        if (DAT_14cb8b008 != (undefined *)0x0) {
          puVar6 = DAT_14cb8b008;
        }
        lVar1 = DAT_14cb8afc8 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb8afc8 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d99a1c();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d99a1c FUN_145d99a1c body=135 status=ok
// SIG undefined FUN_145d99a1c(void)

void FUN_145d99a1c(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb8afc8;
  if (DAT_14cb8affc != 0) {
    *(int *)(DAT_14cb8afc8 + (longlong)DAT_14cb8aff8 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb8affc) {
    iVar4 = DAT_14cb8aff8;
  }
  puVar1[1] = iVar4;
  DAT_14cb8affc = DAT_14cb8affc + 1;
  puVar5 = &DAT_14cb8afd8;
  if (DAT_14cb8afe8 != (undefined *)0x0) {
    puVar5 = DAT_14cb8afe8;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb8aff8 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d99aa4 FUN_145d99aa4 body=114 status=ok
// SIG undefined FUN_145d99aa4(void)

void FUN_145d99aa4(void)

{
  longlong *plVar1;
  
  FUN_1460f9148();
  FUN_145d99b16(DAT_14cb8b124);
  if (DAT_14cb8b0b0 == &DAT_14cb8b120) {
    DAT_14cb8b0b0 = (undefined4 *)0x0;
  }
  if (DAT_14cb8b160 != 0) {
    plVar1 = &DAT_14cb8b180;
    if (DAT_14cb8b170 != (longlong *)0x0) {
      plVar1 = DAT_14cb8b170;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb8b148 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d99b16 FUN_145d99b16 body=242 status=ok
// SIG undefined FUN_145d99b16(void)

void FUN_145d99b16(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb8b0c0 != DAT_14cb8b0ec) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb8b0f0;
    if (DAT_14cb8b0f8 != (undefined *)0x0) {
      puVar6 = DAT_14cb8b0f8;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb8b100 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb8b0b8 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb8b0b8 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb8b0f0;
        if (DAT_14cb8b0f8 != (undefined *)0x0) {
          puVar6 = DAT_14cb8b0f8;
        }
        lVar1 = DAT_14cb8b0b8 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb8b0b8 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d99c08();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d99c08 FUN_145d99c08 body=135 status=ok
// SIG undefined FUN_145d99c08(void)

void FUN_145d99c08(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb8b0b8;
  if (DAT_14cb8b0ec != 0) {
    *(int *)(DAT_14cb8b0b8 + (longlong)DAT_14cb8b0e8 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb8b0ec) {
    iVar4 = DAT_14cb8b0e8;
  }
  puVar1[1] = iVar4;
  DAT_14cb8b0ec = DAT_14cb8b0ec + 1;
  puVar5 = &DAT_14cb8b0c8;
  if (DAT_14cb8b0d8 != (undefined *)0x0) {
    puVar5 = DAT_14cb8b0d8;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb8b0e8 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d99c90 FUN_145d99c90 body=114 status=ok
// SIG undefined FUN_145d99c90(void)

void FUN_145d99c90(void)

{
  longlong *plVar1;
  
  FUN_1460f98de();
  FUN_145d99d02(DAT_14cb8b214);
  if (DAT_14cb8b1a0 == &DAT_14cb8b210) {
    DAT_14cb8b1a0 = (undefined4 *)0x0;
  }
  if (DAT_14cb8b250 != 0) {
    plVar1 = &DAT_14cb8b270;
    if (DAT_14cb8b260 != (longlong *)0x0) {
      plVar1 = DAT_14cb8b260;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb8b238 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d99d02 FUN_145d99d02 body=242 status=ok
// SIG undefined FUN_145d99d02(void)

void FUN_145d99d02(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb8b1b0 != DAT_14cb8b1dc) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb8b1e0;
    if (DAT_14cb8b1e8 != (undefined *)0x0) {
      puVar6 = DAT_14cb8b1e8;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb8b1f0 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb8b1a8 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb8b1a8 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb8b1e0;
        if (DAT_14cb8b1e8 != (undefined *)0x0) {
          puVar6 = DAT_14cb8b1e8;
        }
        lVar1 = DAT_14cb8b1a8 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb8b1a8 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d99df4();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d99df4 FUN_145d99df4 body=135 status=ok
// SIG undefined FUN_145d99df4(void)

void FUN_145d99df4(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb8b1a8;
  if (DAT_14cb8b1dc != 0) {
    *(int *)(DAT_14cb8b1a8 + (longlong)DAT_14cb8b1d8 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb8b1dc) {
    iVar4 = DAT_14cb8b1d8;
  }
  puVar1[1] = iVar4;
  DAT_14cb8b1dc = DAT_14cb8b1dc + 1;
  puVar5 = &DAT_14cb8b1b8;
  if (DAT_14cb8b1c8 != (undefined *)0x0) {
    puVar5 = DAT_14cb8b1c8;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb8b1d8 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d99e7c FUN_145d99e7c body=114 status=ok
// SIG undefined FUN_145d99e7c(void)

void FUN_145d99e7c(void)

{
  longlong *plVar1;
  
  FUN_1460fa074();
  FUN_145d99eee(DAT_14cb8b314);
  if (DAT_14cb8b298 == &DAT_14cb8b310) {
    DAT_14cb8b298 = (undefined4 *)0x0;
  }
  if (DAT_14cb8b350 != 0) {
    plVar1 = &DAT_14cb8b370;
    if (DAT_14cb8b360 != (longlong *)0x0) {
      plVar1 = DAT_14cb8b360;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb8b338 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d99eee FUN_145d99eee body=242 status=ok
// SIG undefined FUN_145d99eee(void)

void FUN_145d99eee(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb8b2a8 != DAT_14cb8b2d4) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb8b2d8;
    if (DAT_14cb8b2e0 != (undefined *)0x0) {
      puVar6 = DAT_14cb8b2e0;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb8b2e8 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb8b2a0 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb8b2a0 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb8b2d8;
        if (DAT_14cb8b2e0 != (undefined *)0x0) {
          puVar6 = DAT_14cb8b2e0;
        }
        lVar1 = DAT_14cb8b2a0 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb8b2a0 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d99fe0();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d99fe0 FUN_145d99fe0 body=135 status=ok
// SIG undefined FUN_145d99fe0(void)

void FUN_145d99fe0(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb8b2a0;
  if (DAT_14cb8b2d4 != 0) {
    *(int *)(DAT_14cb8b2a0 + (longlong)DAT_14cb8b2d0 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb8b2d4) {
    iVar4 = DAT_14cb8b2d0;
  }
  puVar1[1] = iVar4;
  DAT_14cb8b2d4 = DAT_14cb8b2d4 + 1;
  puVar5 = &DAT_14cb8b2b0;
  if (DAT_14cb8b2c0 != (undefined *)0x0) {
    puVar5 = DAT_14cb8b2c0;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb8b2d0 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d9a068 FUN_145d9a068 body=114 status=ok
// SIG undefined FUN_145d9a068(void)

void FUN_145d9a068(void)

{
  longlong *plVar1;
  
  FUN_1460fa80a();
  FUN_145d9a0da(DAT_14cb8b404);
  if (DAT_14cb8b390 == &DAT_14cb8b400) {
    DAT_14cb8b390 = (undefined4 *)0x0;
  }
  if (DAT_14cb8b440 != 0) {
    plVar1 = &DAT_14cb8b460;
    if (DAT_14cb8b450 != (longlong *)0x0) {
      plVar1 = DAT_14cb8b450;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb8b428 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d9a0da FUN_145d9a0da body=242 status=ok
// SIG undefined FUN_145d9a0da(void)

void FUN_145d9a0da(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb8b3a0 != DAT_14cb8b3cc) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb8b3d0;
    if (DAT_14cb8b3d8 != (undefined *)0x0) {
      puVar6 = DAT_14cb8b3d8;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb8b3e0 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb8b398 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb8b398 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb8b3d0;
        if (DAT_14cb8b3d8 != (undefined *)0x0) {
          puVar6 = DAT_14cb8b3d8;
        }
        lVar1 = DAT_14cb8b398 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb8b398 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d9a1cc();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d9a1cc FUN_145d9a1cc body=135 status=ok
// SIG undefined FUN_145d9a1cc(void)

void FUN_145d9a1cc(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb8b398;
  if (DAT_14cb8b3cc != 0) {
    *(int *)(DAT_14cb8b398 + (longlong)DAT_14cb8b3c8 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb8b3cc) {
    iVar4 = DAT_14cb8b3c8;
  }
  puVar1[1] = iVar4;
  DAT_14cb8b3cc = DAT_14cb8b3cc + 1;
  puVar5 = &DAT_14cb8b3a8;
  if (DAT_14cb8b3b8 != (undefined *)0x0) {
    puVar5 = DAT_14cb8b3b8;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb8b3c8 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d9a254 FUN_145d9a254 body=114 status=ok
// SIG undefined FUN_145d9a254(void)

void FUN_145d9a254(void)

{
  longlong *plVar1;
  
  FUN_1460fafa0();
  FUN_145d9a2c6(DAT_14cb8b5c4);
  if (DAT_14cb8b548 == &DAT_14cb8b5c0) {
    DAT_14cb8b548 = (undefined4 *)0x0;
  }
  if (DAT_14cb8b600 != 0) {
    plVar1 = &DAT_14cb8b620;
    if (DAT_14cb8b610 != (longlong *)0x0) {
      plVar1 = DAT_14cb8b610;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb8b5e8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d9a2c6 FUN_145d9a2c6 body=242 status=ok
// SIG undefined FUN_145d9a2c6(void)

void FUN_145d9a2c6(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb8b558 != DAT_14cb8b584) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb8b588;
    if (DAT_14cb8b590 != (undefined *)0x0) {
      puVar6 = DAT_14cb8b590;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb8b598 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb8b550 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb8b550 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb8b588;
        if (DAT_14cb8b590 != (undefined *)0x0) {
          puVar6 = DAT_14cb8b590;
        }
        lVar1 = DAT_14cb8b550 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb8b550 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d9a3b8();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d9a3b8 FUN_145d9a3b8 body=135 status=ok
// SIG undefined FUN_145d9a3b8(void)

void FUN_145d9a3b8(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14cb8b550;
  if (DAT_14cb8b584 != 0) {
    *(int *)(DAT_14cb8b550 + (longlong)DAT_14cb8b580 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb8b584) {
    iVar4 = DAT_14cb8b580;
  }
  puVar1[1] = iVar4;
  DAT_14cb8b584 = DAT_14cb8b584 + 1;
  puVar5 = &DAT_14cb8b560;
  if (DAT_14cb8b570 != (undefined *)0x0) {
    puVar5 = DAT_14cb8b570;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14cb8b580 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}


