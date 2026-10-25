// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1417525b6 FUN_1417525b6 body=337 status=ok
// SIG undefined FUN_1417525b6(void)

undefined8 FUN_1417525b6(ushort *param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  DWORD DVar4;
  DWORD DVar5;
  longlong *plVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  bool bVar9;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9bc8e8) {
    FUN_144b3d300(&DAT_14c9bc8e8);
    if (DAT_14c9bc8e8 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar6 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))
                         (DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
      if (plVar6 == (longlong *)0x0) {
        DAT_14c9bc8e0 = 0;
      }
      else {
        DAT_14c9bc8e0 = (**(code **)(*plVar6 + 0x68))(plVar6);
      }
      _Init_thread_footer(&DAT_14c9bc8e8);
    }
  }
  lVar2 = DAT_14c9bc8e0;
  if (DAT_14c9bc8e0 == 0) {
    bVar9 = false;
  }
  else {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
      uVar8 = 0;
    }
    else if (iVar1 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      uVar8 = (ulonglong)(DVar4 != DVar5);
    }
    else {
      uVar8 = 1;
    }
    bVar9 = *(int *)(lVar2 + uVar8 * 4) != 0;
  }
  cVar3 = FUN_14027015e(2,param_1);
  if ((bVar9) || (cVar3 != '\0')) {
    uVar7 = CONCAT71((int7)((ulonglong)*param_1 * 0x3c >> 8),
                     2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]);
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}



// FUNCTION 141752708 FUN_141752708 body=942 status=ok
// SIG undefined FUN_141752708(void)

undefined8 FUN_141752708(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  DWORD DVar5;
  DWORD DVar6;
  undefined8 uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  bool bVar11;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bcab8) && (FUN_144b3d300(&DAT_14c9bcab8), DAT_14c9bcab8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bcab0 = 0;
    }
    else {
      DAT_14c9bcab0 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bcab8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bcac8) && (FUN_144b3d300(&DAT_14c9bcac8), DAT_14c9bcac8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bcac0 = 0;
    }
    else {
      DAT_14c9bcac0 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bcac8);
  }
  lVar4 = DAT_14c9bcac0;
  uVar1 = param_1[10];
  uVar2 = *(uint *)(param_1 + 0xc);
  if (DAT_14c9bcac0 == 0) {
    bVar11 = false;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar5 != DVar6);
    }
    else {
      uVar9 = 1;
    }
    bVar11 = *(int *)(lVar4 + uVar9 * 4) != 0;
  }
  lVar4 = DAT_14c9bcab0;
  if (DAT_14c9bcab0 == 0) {
    bVar11 = true;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar5 != DVar6);
    }
    else {
      uVar9 = 1;
    }
    bVar11 = (bool)(*(int *)(lVar4 + uVar9 * 4) != 0 | bVar11);
  }
  lVar4 = DAT_14ca1c600;
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    if (uVar2 < 2) {
      return 0;
    }
    uVar1 = *param_1;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar5 != DVar6);
    }
    else {
      uVar9 = 1;
    }
    if (*(int *)(lVar4 + uVar9 * 4) < 1) {
      return 0;
    }
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 2) == 0) {
      return 0;
    }
  }
  else if ((uVar2 < 2) && ((uVar1 & 0x400) == 0)) {
    if (!bVar11) {
      uVar1 = *param_1;
      puVar10 = &DAT_14ca96aa8;
      if (DAT_14ca96af8 != (undefined4 *)0x0) {
        puVar10 = DAT_14ca96af8;
      }
      if (((uint)puVar10[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) {
        return 0;
      }
      if ((int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] < 3) {
        return 0;
      }
    }
    if ((param_1[10] & 1) != 0) {
      return 0;
    }
  }
  if ((int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf] < 3) {
    return 0;
  }
  uVar7 = FUN_14027015e(2,param_1);
  return uVar7;
}



// FUNCTION 141752ab6 FUN_141752ab6 body=706 status=ok
// SIG undefined FUN_141752ab6(void)

undefined8 FUN_141752ab6(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  DWORD DVar5;
  DWORD DVar6;
  longlong *plVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bcb08) && (FUN_144b3d300(&DAT_14c9bcb08), DAT_14c9bcb08 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar7 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar7 == (longlong *)0x0) {
      DAT_14c9bcb00 = 0;
    }
    else {
      DAT_14c9bcb00 = (**(code **)(*plVar7 + 0x68))(plVar7);
    }
    _Init_thread_footer(&DAT_14c9bcb08);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bcb18) && (FUN_144b3d300(&DAT_14c9bcb18), DAT_14c9bcb18 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar7 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar7 == (longlong *)0x0) {
      DAT_14c9bcb10 = 0;
    }
    else {
      DAT_14c9bcb10 = (**(code **)(*plVar7 + 0x68))(plVar7);
    }
    _Init_thread_footer(&DAT_14c9bcb18);
  }
  uVar2 = *(uint *)(param_1 + 0xc);
  if ((((DAT_14c9bcb10 != 0) &&
       (iVar3 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
       , iVar3 != 0x40000002)) && (iVar3 == 1)) && (DAT_14c86a9f8 != '\0')) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  if (((DAT_14c9bcb00 != 0) &&
      (iVar3 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
      iVar3 != 0x40000002)) && ((iVar3 == 1 && (DAT_14c86a9f8 != '\0')))) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  lVar4 = DAT_14ca1c600;
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    if (uVar2 < 2) {
      return 0;
    }
    uVar1 = *param_1;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar5 != DVar6);
    }
    else {
      uVar9 = 1;
    }
    if (*(int *)(lVar4 + uVar9 * 4) < 1) {
      return 0;
    }
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 2) == 0) {
      return 0;
    }
  }
  if ((int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf] < 3) {
    return 0;
  }
  uVar8 = FUN_14027015e(2,param_1);
  return uVar8;
}



// FUNCTION 141752d78 FUN_141752d78 body=994 status=ok
// SIG undefined FUN_141752d78(void)

uint FUN_141752d78(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  bool bVar11;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bcb58) && (FUN_144b3d300(&DAT_14c9bcb58), DAT_14c9bcb58 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bcb50 = 0;
    }
    else {
      DAT_14c9bcb50 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bcb58);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bcb68) && (FUN_144b3d300(&DAT_14c9bcb68), DAT_14c9bcb68 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bcb60 = 0;
    }
    else {
      DAT_14c9bcb60 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bcb68);
  }
  lVar4 = DAT_14c9bcb60;
  uVar1 = param_1[10];
  uVar2 = *(uint *)(param_1 + 0xc);
  if (DAT_14c9bcb60 == 0) {
    bVar11 = false;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    bVar11 = *(int *)(lVar4 + uVar9 * 4) != 0;
  }
  lVar4 = DAT_14c9bcb50;
  if (DAT_14c9bcb50 == 0) {
    bVar11 = true;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    bVar11 = (bool)(*(int *)(lVar4 + uVar9 * 4) != 0 | bVar11);
  }
  lVar4 = DAT_14ca1c600;
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    if (uVar2 < 2) {
      return 0;
    }
    uVar1 = *param_1;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    if (*(int *)(lVar4 + uVar9 * 4) < 1) {
      return 0;
    }
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 2) == 0) {
      return 0;
    }
  }
  else if ((uVar2 < 2) && ((uVar1 & 0x400) == 0)) {
    if (!bVar11) {
      uVar1 = *param_1;
      puVar10 = &DAT_14ca96aa8;
      if (DAT_14ca96af8 != (undefined4 *)0x0) {
        puVar10 = DAT_14ca96af8;
      }
      if (((uint)puVar10[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) {
        return 0;
      }
      if ((int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] < 3) {
        return 0;
      }
    }
    if ((param_1[10] & 1) != 0) {
      return 0;
    }
  }
  if ((((2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) &&
       (cVar5 = FUN_14027015e(2,param_1), cVar5 != '\0')) &&
      (cVar5 = FUN_140052d29(*param_1), cVar5 == '\0')) &&
     (((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x29) & 1) != 0 &&
      ((*(ulonglong *)(param_1 + 0x1c) >> 0x35 & 1) != 0)))) {
    return (uint)(*(ulonglong *)(param_1 + 0x1c) >> 0x17) & 1;
  }
  return 0;
}



// FUNCTION 14175315a FUN_14175315a body=749 status=ok
// SIG undefined FUN_14175315a(void)

uint FUN_14175315a(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  ulonglong uVar9;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bcba8) && (FUN_144b3d300(&DAT_14c9bcba8), DAT_14c9bcba8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bcba0 = 0;
    }
    else {
      DAT_14c9bcba0 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bcba8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bcbb8) && (FUN_144b3d300(&DAT_14c9bcbb8), DAT_14c9bcbb8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bcbb0 = 0;
    }
    else {
      DAT_14c9bcbb0 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bcbb8);
  }
  uVar2 = *(uint *)(param_1 + 0xc);
  if ((((DAT_14c9bcbb0 != 0) &&
       (iVar3 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
       , iVar3 != 0x40000002)) && (iVar3 == 1)) && (DAT_14c86a9f8 != '\0')) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  if (((DAT_14c9bcba0 != 0) &&
      (iVar3 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
      iVar3 != 0x40000002)) && ((iVar3 == 1 && (DAT_14c86a9f8 != '\0')))) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  lVar4 = DAT_14ca1c600;
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    if (uVar2 < 2) {
      return 0;
    }
    uVar1 = *param_1;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    if (*(int *)(lVar4 + uVar9 * 4) < 1) {
      return 0;
    }
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 2) == 0) {
      return 0;
    }
  }
  if ((((2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) &&
       (cVar5 = FUN_14027015e(2,param_1), cVar5 != '\0')) &&
      (cVar5 = FUN_140052d29(*param_1), cVar5 == '\0')) &&
     (((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x29) & 1) != 0 &&
      ((*(ulonglong *)(param_1 + 0x1c) >> 0x35 & 1) != 0)))) {
    return (uint)(*(ulonglong *)(param_1 + 0x1c) >> 0x17) & 1;
  }
  return 0;
}



// FUNCTION 141753448 FUN_141753448 body=963 status=ok
// SIG undefined FUN_141753448(void)

undefined8 FUN_141753448(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  DWORD DVar7;
  undefined8 uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  bool bVar12;
  
  cVar5 = FUN_1400b7021();
  if (cVar5 == '\0') {
    return 0;
  }
  if (*(uint *)(param_1 + 0xc) < 2) {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bcbf8) && (FUN_144b3d300(&DAT_14c9bcbf8), DAT_14c9bcbf8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar9 == (longlong *)0x0) {
      DAT_14c9bcbf0 = 0;
    }
    else {
      DAT_14c9bcbf0 = (**(code **)(*plVar9 + 0x68))(plVar9);
    }
    _Init_thread_footer(&DAT_14c9bcbf8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bcc08) && (FUN_144b3d300(&DAT_14c9bcc08), DAT_14c9bcc08 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar9 == (longlong *)0x0) {
      DAT_14c9bcc00 = 0;
    }
    else {
      DAT_14c9bcc00 = (**(code **)(*plVar9 + 0x68))(plVar9);
    }
    _Init_thread_footer(&DAT_14c9bcc08);
  }
  lVar4 = DAT_14c9bcc00;
  uVar1 = param_1[10];
  uVar2 = *(uint *)(param_1 + 0xc);
  if (DAT_14c9bcc00 == 0) {
    bVar12 = false;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar10 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar10 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar10 = 1;
    }
    bVar12 = *(int *)(lVar4 + uVar10 * 4) != 0;
  }
  lVar4 = DAT_14c9bcbf0;
  if (DAT_14c9bcbf0 == 0) {
    bVar12 = true;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar10 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar10 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar10 = 1;
    }
    bVar12 = (bool)(*(int *)(lVar4 + uVar10 * 4) != 0 | bVar12);
  }
  lVar4 = DAT_14ca1c600;
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    if (uVar2 < 2) {
      return 0;
    }
    uVar1 = *param_1;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar10 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar10 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar10 = 1;
    }
    if (*(int *)(lVar4 + uVar10 * 4) < 1) {
      return 0;
    }
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 2) == 0) {
      return 0;
    }
  }
  else if ((uVar2 < 2) && ((uVar1 & 0x400) == 0)) {
    if (!bVar12) {
      uVar1 = *param_1;
      puVar11 = &DAT_14ca96aa8;
      if (DAT_14ca96af8 != (undefined4 *)0x0) {
        puVar11 = DAT_14ca96af8;
      }
      if (((uint)puVar11[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) {
        return 0;
      }
      if ((int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] < 3) {
        return 0;
      }
    }
    if ((param_1[10] & 1) != 0) {
      return 0;
    }
  }
  if ((int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf] < 3) {
    return 0;
  }
  uVar8 = FUN_14027015e(2,param_1);
  return uVar8;
}



// FUNCTION 14175380c FUN_14175380c body=729 status=ok
// SIG undefined FUN_14175380c(void)

undefined8 FUN_14175380c(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  
  cVar5 = FUN_1400b7021();
  if (cVar5 == '\0') {
    return 0;
  }
  if (*(uint *)(param_1 + 0xc) < 2) {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bcc48) && (FUN_144b3d300(&DAT_14c9bcc48), DAT_14c9bcc48 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bcc40 = 0;
    }
    else {
      DAT_14c9bcc40 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bcc48);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bcc58) && (FUN_144b3d300(&DAT_14c9bcc58), DAT_14c9bcc58 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bcc50 = 0;
    }
    else {
      DAT_14c9bcc50 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bcc58);
  }
  uVar2 = *(uint *)(param_1 + 0xc);
  if ((((DAT_14c9bcc50 != 0) &&
       (iVar3 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
       , iVar3 != 0x40000002)) && (iVar3 == 1)) && (DAT_14c86a9f8 != '\0')) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  if (((DAT_14c9bcc40 != 0) &&
      (iVar3 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
      iVar3 != 0x40000002)) && ((iVar3 == 1 && (DAT_14c86a9f8 != '\0')))) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  lVar4 = DAT_14ca1c600;
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    if (uVar2 < 2) {
      return 0;
    }
    uVar1 = *param_1;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar10 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar10 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar10 = 1;
    }
    if (*(int *)(lVar4 + uVar10 * 4) < 1) {
      return 0;
    }
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 2) == 0) {
      return 0;
    }
  }
  if ((int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf] < 3) {
    return 0;
  }
  uVar9 = FUN_14027015e(2,param_1);
  return uVar9;
}



// FUNCTION 141753ae6 FUN_141753ae6 body=1016 status=ok
// SIG undefined FUN_141753ae6(void)

uint FUN_141753ae6(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  bool bVar11;
  
  cVar5 = FUN_1400b7021();
  if (cVar5 == '\0') {
    return 0;
  }
  if (*(uint *)(param_1 + 0xc) < 2) {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bcc98) && (FUN_144b3d300(&DAT_14c9bcc98), DAT_14c9bcc98 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bcc90 = 0;
    }
    else {
      DAT_14c9bcc90 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bcc98);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bcca8) && (FUN_144b3d300(&DAT_14c9bcca8), DAT_14c9bcca8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bcca0 = 0;
    }
    else {
      DAT_14c9bcca0 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bcca8);
  }
  lVar4 = DAT_14c9bcca0;
  uVar1 = param_1[10];
  uVar2 = *(uint *)(param_1 + 0xc);
  if (DAT_14c9bcca0 == 0) {
    bVar11 = false;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    bVar11 = *(int *)(lVar4 + uVar9 * 4) != 0;
  }
  lVar4 = DAT_14c9bcc90;
  if (DAT_14c9bcc90 == 0) {
    bVar11 = true;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    bVar11 = (bool)(*(int *)(lVar4 + uVar9 * 4) != 0 | bVar11);
  }
  lVar4 = DAT_14ca1c600;
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    if (uVar2 < 2) {
      return 0;
    }
    uVar1 = *param_1;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    if (*(int *)(lVar4 + uVar9 * 4) < 1) {
      return 0;
    }
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 2) == 0) {
      return 0;
    }
  }
  else if ((uVar2 < 2) && ((uVar1 & 0x400) == 0)) {
    if (!bVar11) {
      uVar1 = *param_1;
      puVar10 = &DAT_14ca96aa8;
      if (DAT_14ca96af8 != (undefined4 *)0x0) {
        puVar10 = DAT_14ca96af8;
      }
      if (((uint)puVar10[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) {
        return 0;
      }
      if ((int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] < 3) {
        return 0;
      }
    }
    if ((param_1[10] & 1) != 0) {
      return 0;
    }
  }
  if (((2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) &&
      (cVar5 = FUN_14027015e(2,param_1), cVar5 != '\0')) &&
     ((cVar5 = FUN_140052d29(*param_1), cVar5 == '\0' &&
      (((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x29) & 1) != 0 &&
       ((*(ulonglong *)(param_1 + 0x1c) >> 0x35 & 1) != 0)))))) {
    return (uint)(*(ulonglong *)(param_1 + 0x1c) >> 0x17) & 1;
  }
  return 0;
}



// FUNCTION 141753ede FUN_141753ede body=776 status=ok
// SIG undefined FUN_141753ede(void)

uint FUN_141753ede(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  ulonglong uVar9;
  
  cVar5 = FUN_1400b7021();
  if (cVar5 == '\0') {
    return 0;
  }
  if (*(uint *)(param_1 + 0xc) < 2) {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bcce8) && (FUN_144b3d300(&DAT_14c9bcce8), DAT_14c9bcce8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bcce0 = 0;
    }
    else {
      DAT_14c9bcce0 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bcce8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bccf8) && (FUN_144b3d300(&DAT_14c9bccf8), DAT_14c9bccf8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bccf0 = 0;
    }
    else {
      DAT_14c9bccf0 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bccf8);
  }
  uVar2 = *(uint *)(param_1 + 0xc);
  if ((((DAT_14c9bccf0 != 0) &&
       (iVar3 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
       , iVar3 != 0x40000002)) && (iVar3 == 1)) && (DAT_14c86a9f8 != '\0')) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  if (((DAT_14c9bcce0 != 0) &&
      (iVar3 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
      iVar3 != 0x40000002)) && ((iVar3 == 1 && (DAT_14c86a9f8 != '\0')))) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  lVar4 = DAT_14ca1c600;
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    if (uVar2 < 2) {
      return 0;
    }
    uVar1 = *param_1;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    if (*(int *)(lVar4 + uVar9 * 4) < 1) {
      return 0;
    }
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 2) == 0) {
      return 0;
    }
  }
  if ((((2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) &&
       (cVar5 = FUN_14027015e(2,param_1), cVar5 != '\0')) &&
      (cVar5 = FUN_140052d29(*param_1), cVar5 == '\0')) &&
     (((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x29) & 1) != 0 &&
      ((*(ulonglong *)(param_1 + 0x1c) >> 0x35 & 1) != 0)))) {
    return (uint)(*(ulonglong *)(param_1 + 0x1c) >> 0x17) & 1;
  }
  return 0;
}



// FUNCTION 1417541e6 FUN_1417541e6 body=797 status=ok
// SIG undefined FUN_1417541e6(void)

undefined8 FUN_1417541e6(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  longlong lVar5;
  DWORD DVar6;
  DWORD DVar7;
  undefined8 uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  bool bVar12;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bd108) && (FUN_144b3d300(&DAT_14c9bd108), DAT_14c9bd108 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar9 == (longlong *)0x0) {
      DAT_14c9bd100 = 0;
    }
    else {
      DAT_14c9bd100 = (**(code **)(*plVar9 + 0x68))(plVar9);
    }
    _Init_thread_footer(&DAT_14c9bd108);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bd118) && (FUN_144b3d300(&DAT_14c9bd118), DAT_14c9bd118 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar9 == (longlong *)0x0) {
      DAT_14c9bd110 = 0;
    }
    else {
      DAT_14c9bd110 = (**(code **)(*plVar9 + 0x68))(plVar9);
    }
    _Init_thread_footer(&DAT_14c9bd118);
  }
  lVar5 = DAT_14c9bd110;
  uVar1 = param_1[10];
  uVar2 = *(uint *)(param_1 + 0xc);
  if (DAT_14c9bd110 == 0) {
    bVar12 = false;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar10 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar10 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar10 = 1;
    }
    bVar12 = *(int *)(lVar5 + uVar10 * 4) != 0;
  }
  lVar5 = DAT_14c9bd100;
  bVar4 = (byte)(uVar1 >> 8);
  if (DAT_14c9bd100 == 0) {
    if ((bVar4 >> 2 & 1) != 0 || 1 < uVar2) goto LAB_141754303;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar10 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar10 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar10 = 1;
    }
    if ((bVar4 >> 2 & 1) != 0 || 1 < uVar2) goto LAB_141754303;
    if (*(int *)(lVar5 + uVar10 * 4) == 0 && !bVar12) {
      uVar1 = *param_1;
      puVar11 = &DAT_14ca96aa8;
      if (DAT_14ca96af8 != (undefined4 *)0x0) {
        puVar11 = DAT_14ca96af8;
      }
      if (((uint)puVar11[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) {
        return 0;
      }
      if ((int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] < 3) {
        return 0;
      }
    }
  }
  if ((param_1[10] & 1) != 0) {
    return 0;
  }
LAB_141754303:
  if ((2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x2a) & 2) != 0)) {
    uVar8 = FUN_14027015e(2,param_1);
    return uVar8;
  }
  return 0;
}



// FUNCTION 141754504 FUN_141754504 body=529 status=ok
// SIG undefined FUN_141754504(void)

undefined8 FUN_141754504(ushort *param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9bd158) {
    FUN_144b3d300(&DAT_14c9bd158);
    if (DAT_14c9bd158 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar3 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
      if (plVar3 == (longlong *)0x0) {
        DAT_14c9bd150 = 0;
      }
      else {
        DAT_14c9bd150 = (**(code **)(*plVar3 + 0x68))(plVar3);
      }
      _Init_thread_footer(&DAT_14c9bd158);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9bd168) {
    FUN_144b3d300(&DAT_14c9bd168);
    if (DAT_14c9bd168 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar3 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))
                         (DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
      if (plVar3 == (longlong *)0x0) {
        DAT_14c9bd160 = 0;
      }
      else {
        DAT_14c9bd160 = (**(code **)(*plVar3 + 0x68))(plVar3);
      }
      _Init_thread_footer(&DAT_14c9bd168);
    }
  }
  if (DAT_14c9bd160 != 0) {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar1 != 0x40000002) && (iVar1 == 1)) && (DAT_14c86a9f8 != '\0')) {
      FUN_140ad26c0();
      GetCurrentThreadId();
    }
  }
  if (DAT_14c9bd150 != 0) {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar1 != 0x40000002) && (iVar1 == 1)) && (DAT_14c86a9f8 != '\0')) {
      FUN_140ad26c0();
      GetCurrentThreadId();
    }
  }
  if ((2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x2a) & 2) != 0)) {
    uVar2 = FUN_14027015e(2,param_1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 141754716 FUN_141754716 body=805 status=ok
// SIG undefined FUN_141754716(void)

undefined8 FUN_141754716(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  longlong lVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  bool bVar12;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bd1a8) && (FUN_144b3d300(&DAT_14c9bd1a8), DAT_14c9bd1a8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bd1a0 = 0;
    }
    else {
      DAT_14c9bd1a0 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bd1a8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bd1b8) && (FUN_144b3d300(&DAT_14c9bd1b8), DAT_14c9bd1b8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bd1b0 = 0;
    }
    else {
      DAT_14c9bd1b0 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bd1b8);
  }
  lVar5 = DAT_14c9bd1b0;
  uVar1 = param_1[10];
  uVar2 = *(uint *)(param_1 + 0xc);
  if (DAT_14c9bd1b0 == 0) {
    bVar12 = false;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar10 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar10 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar10 = 1;
    }
    bVar12 = *(int *)(lVar5 + uVar10 * 4) != 0;
  }
  lVar5 = DAT_14c9bd1a0;
  bVar4 = (byte)(uVar1 >> 8);
  if (DAT_14c9bd1a0 == 0) {
    if ((bVar4 >> 2 & 1) != 0 || 1 < uVar2) goto LAB_141754837;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar10 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar10 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar10 = 1;
    }
    if ((bVar4 >> 2 & 1) != 0 || 1 < uVar2) goto LAB_141754837;
    if (*(int *)(lVar5 + uVar10 * 4) == 0 && !bVar12) {
      uVar1 = *param_1;
      puVar11 = &DAT_14ca96aa8;
      if (DAT_14ca96af8 != (undefined4 *)0x0) {
        puVar11 = DAT_14ca96af8;
      }
      if (((uint)puVar11[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) {
        return 0;
      }
      if ((int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] < 3) {
        return 0;
      }
    }
  }
  if ((param_1[10] & 1) != 0) {
    return 0;
  }
LAB_141754837:
  if ((2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x2a) & 2) != 0)) {
    uVar9 = FUN_14027015e(2,param_1);
    return uVar9;
  }
  return 0;
}



// FUNCTION 141754a3c FUN_141754a3c body=540 status=ok
// SIG undefined FUN_141754a3c(void)

undefined8 FUN_141754a3c(ushort *param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9bd1f8) {
    FUN_144b3d300(&DAT_14c9bd1f8);
    if (DAT_14c9bd1f8 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar2 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
      if (plVar2 == (longlong *)0x0) {
        DAT_14c9bd1f0 = 0;
      }
      else {
        DAT_14c9bd1f0 = (**(code **)(*plVar2 + 0x68))(plVar2);
      }
      _Init_thread_footer(&DAT_14c9bd1f8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9bd208) {
    FUN_144b3d300(&DAT_14c9bd208);
    if (DAT_14c9bd208 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar2 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))
                         (DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
      if (plVar2 == (longlong *)0x0) {
        DAT_14c9bd200 = 0;
      }
      else {
        DAT_14c9bd200 = (**(code **)(*plVar2 + 0x68))(plVar2);
      }
      _Init_thread_footer(&DAT_14c9bd208);
    }
  }
  if (DAT_14c9bd200 != 0) {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar1 != 0x40000002) && (iVar1 == 1)) && (DAT_14c86a9f8 != '\0')) {
      FUN_140ad26c0();
      GetCurrentThreadId();
    }
  }
  if (DAT_14c9bd1f0 != 0) {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar1 != 0x40000002) && (iVar1 == 1)) && (DAT_14c86a9f8 != '\0')) {
      FUN_140ad26c0();
      GetCurrentThreadId();
    }
  }
  if ((2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x2a) & 2) != 0)) {
    uVar3 = FUN_14027015e(2,param_1);
    return uVar3;
  }
  return 0;
}



// FUNCTION 141754c58 FUN_141754c58 body=337 status=ok
// SIG undefined FUN_141754c58(void)

undefined8 FUN_141754c58(ushort *param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  DWORD DVar4;
  DWORD DVar5;
  longlong *plVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  bool bVar9;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9bd3d8) {
    FUN_144b3d300(&DAT_14c9bd3d8);
    if (DAT_14c9bd3d8 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar6 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))
                         (DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
      if (plVar6 == (longlong *)0x0) {
        DAT_14c9bd3d0 = 0;
      }
      else {
        DAT_14c9bd3d0 = (**(code **)(*plVar6 + 0x68))(plVar6);
      }
      _Init_thread_footer(&DAT_14c9bd3d8);
    }
  }
  lVar2 = DAT_14c9bd3d0;
  if (DAT_14c9bd3d0 == 0) {
    bVar9 = false;
  }
  else {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
      uVar8 = 0;
    }
    else if (iVar1 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      uVar8 = (ulonglong)(DVar4 != DVar5);
    }
    else {
      uVar8 = 1;
    }
    bVar9 = *(int *)(lVar2 + uVar8 * 4) != 0;
  }
  cVar3 = FUN_14027015e(3,param_1);
  if ((bVar9) || (cVar3 != '\0')) {
    uVar7 = CONCAT71((int7)((ulonglong)*param_1 * 0x3c >> 8),
                     2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]);
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}



// FUNCTION 141754daa FUN_141754daa body=942 status=ok
// SIG undefined FUN_141754daa(void)

undefined8 FUN_141754daa(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  DWORD DVar5;
  DWORD DVar6;
  undefined8 uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  bool bVar11;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bd5a8) && (FUN_144b3d300(&DAT_14c9bd5a8), DAT_14c9bd5a8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bd5a0 = 0;
    }
    else {
      DAT_14c9bd5a0 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bd5a8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bd5b8) && (FUN_144b3d300(&DAT_14c9bd5b8), DAT_14c9bd5b8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bd5b0 = 0;
    }
    else {
      DAT_14c9bd5b0 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bd5b8);
  }
  lVar4 = DAT_14c9bd5b0;
  uVar1 = param_1[10];
  uVar2 = *(uint *)(param_1 + 0xc);
  if (DAT_14c9bd5b0 == 0) {
    bVar11 = false;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar5 != DVar6);
    }
    else {
      uVar9 = 1;
    }
    bVar11 = *(int *)(lVar4 + uVar9 * 4) != 0;
  }
  lVar4 = DAT_14c9bd5a0;
  if (DAT_14c9bd5a0 == 0) {
    bVar11 = true;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar5 != DVar6);
    }
    else {
      uVar9 = 1;
    }
    bVar11 = (bool)(*(int *)(lVar4 + uVar9 * 4) != 0 | bVar11);
  }
  lVar4 = DAT_14ca1c600;
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    if (uVar2 < 2) {
      return 0;
    }
    uVar1 = *param_1;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar5 != DVar6);
    }
    else {
      uVar9 = 1;
    }
    if (*(int *)(lVar4 + uVar9 * 4) < 1) {
      return 0;
    }
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 2) == 0) {
      return 0;
    }
  }
  else if ((uVar2 < 2) && ((uVar1 & 0x400) == 0)) {
    if (!bVar11) {
      uVar1 = *param_1;
      puVar10 = &DAT_14ca96aa8;
      if (DAT_14ca96af8 != (undefined4 *)0x0) {
        puVar10 = DAT_14ca96af8;
      }
      if (((uint)puVar10[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) {
        return 0;
      }
      if ((int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] < 3) {
        return 0;
      }
    }
    if ((param_1[10] & 1) != 0) {
      return 0;
    }
  }
  if ((int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf] < 3) {
    return 0;
  }
  uVar7 = FUN_14027015e(3,param_1);
  return uVar7;
}



// FUNCTION 141755158 FUN_141755158 body=706 status=ok
// SIG undefined FUN_141755158(void)

undefined8 FUN_141755158(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  DWORD DVar5;
  DWORD DVar6;
  longlong *plVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bd5f8) && (FUN_144b3d300(&DAT_14c9bd5f8), DAT_14c9bd5f8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar7 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar7 == (longlong *)0x0) {
      DAT_14c9bd5f0 = 0;
    }
    else {
      DAT_14c9bd5f0 = (**(code **)(*plVar7 + 0x68))(plVar7);
    }
    _Init_thread_footer(&DAT_14c9bd5f8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bd608) && (FUN_144b3d300(&DAT_14c9bd608), DAT_14c9bd608 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar7 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar7 == (longlong *)0x0) {
      DAT_14c9bd600 = 0;
    }
    else {
      DAT_14c9bd600 = (**(code **)(*plVar7 + 0x68))(plVar7);
    }
    _Init_thread_footer(&DAT_14c9bd608);
  }
  uVar2 = *(uint *)(param_1 + 0xc);
  if ((((DAT_14c9bd600 != 0) &&
       (iVar3 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
       , iVar3 != 0x40000002)) && (iVar3 == 1)) && (DAT_14c86a9f8 != '\0')) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  if (((DAT_14c9bd5f0 != 0) &&
      (iVar3 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
      iVar3 != 0x40000002)) && ((iVar3 == 1 && (DAT_14c86a9f8 != '\0')))) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  lVar4 = DAT_14ca1c600;
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    if (uVar2 < 2) {
      return 0;
    }
    uVar1 = *param_1;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar5 != DVar6);
    }
    else {
      uVar9 = 1;
    }
    if (*(int *)(lVar4 + uVar9 * 4) < 1) {
      return 0;
    }
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 2) == 0) {
      return 0;
    }
  }
  if ((int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf] < 3) {
    return 0;
  }
  uVar8 = FUN_14027015e(3,param_1);
  return uVar8;
}



// FUNCTION 14175541a FUN_14175541a body=994 status=ok
// SIG undefined FUN_14175541a(void)

uint FUN_14175541a(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  bool bVar11;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bd648) && (FUN_144b3d300(&DAT_14c9bd648), DAT_14c9bd648 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bd640 = 0;
    }
    else {
      DAT_14c9bd640 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bd648);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bd658) && (FUN_144b3d300(&DAT_14c9bd658), DAT_14c9bd658 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bd650 = 0;
    }
    else {
      DAT_14c9bd650 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bd658);
  }
  lVar4 = DAT_14c9bd650;
  uVar1 = param_1[10];
  uVar2 = *(uint *)(param_1 + 0xc);
  if (DAT_14c9bd650 == 0) {
    bVar11 = false;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    bVar11 = *(int *)(lVar4 + uVar9 * 4) != 0;
  }
  lVar4 = DAT_14c9bd640;
  if (DAT_14c9bd640 == 0) {
    bVar11 = true;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    bVar11 = (bool)(*(int *)(lVar4 + uVar9 * 4) != 0 | bVar11);
  }
  lVar4 = DAT_14ca1c600;
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    if (uVar2 < 2) {
      return 0;
    }
    uVar1 = *param_1;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    if (*(int *)(lVar4 + uVar9 * 4) < 1) {
      return 0;
    }
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 2) == 0) {
      return 0;
    }
  }
  else if ((uVar2 < 2) && ((uVar1 & 0x400) == 0)) {
    if (!bVar11) {
      uVar1 = *param_1;
      puVar10 = &DAT_14ca96aa8;
      if (DAT_14ca96af8 != (undefined4 *)0x0) {
        puVar10 = DAT_14ca96af8;
      }
      if (((uint)puVar10[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) {
        return 0;
      }
      if ((int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] < 3) {
        return 0;
      }
    }
    if ((param_1[10] & 1) != 0) {
      return 0;
    }
  }
  if ((((2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) &&
       (cVar5 = FUN_14027015e(3,param_1), cVar5 != '\0')) &&
      (cVar5 = FUN_140052d29(*param_1), cVar5 == '\0')) &&
     (((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x29) & 1) != 0 &&
      ((*(ulonglong *)(param_1 + 0x1c) >> 0x35 & 1) != 0)))) {
    return (uint)(*(ulonglong *)(param_1 + 0x1c) >> 0x17) & 1;
  }
  return 0;
}



// FUNCTION 1417557fc FUN_1417557fc body=749 status=ok
// SIG undefined FUN_1417557fc(void)

uint FUN_1417557fc(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  ulonglong uVar9;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bd698) && (FUN_144b3d300(&DAT_14c9bd698), DAT_14c9bd698 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bd690 = 0;
    }
    else {
      DAT_14c9bd690 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bd698);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bd6a8) && (FUN_144b3d300(&DAT_14c9bd6a8), DAT_14c9bd6a8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bd6a0 = 0;
    }
    else {
      DAT_14c9bd6a0 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bd6a8);
  }
  uVar2 = *(uint *)(param_1 + 0xc);
  if ((((DAT_14c9bd6a0 != 0) &&
       (iVar3 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
       , iVar3 != 0x40000002)) && (iVar3 == 1)) && (DAT_14c86a9f8 != '\0')) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  if (((DAT_14c9bd690 != 0) &&
      (iVar3 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
      iVar3 != 0x40000002)) && ((iVar3 == 1 && (DAT_14c86a9f8 != '\0')))) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  lVar4 = DAT_14ca1c600;
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    if (uVar2 < 2) {
      return 0;
    }
    uVar1 = *param_1;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    if (*(int *)(lVar4 + uVar9 * 4) < 1) {
      return 0;
    }
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 2) == 0) {
      return 0;
    }
  }
  if ((((2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) &&
       (cVar5 = FUN_14027015e(3,param_1), cVar5 != '\0')) &&
      (cVar5 = FUN_140052d29(*param_1), cVar5 == '\0')) &&
     (((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x29) & 1) != 0 &&
      ((*(ulonglong *)(param_1 + 0x1c) >> 0x35 & 1) != 0)))) {
    return (uint)(*(ulonglong *)(param_1 + 0x1c) >> 0x17) & 1;
  }
  return 0;
}



// FUNCTION 141755aea FUN_141755aea body=963 status=ok
// SIG undefined FUN_141755aea(void)

undefined8 FUN_141755aea(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  DWORD DVar7;
  undefined8 uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  bool bVar12;
  
  cVar5 = FUN_1400b7021();
  if (cVar5 == '\0') {
    return 0;
  }
  if (*(uint *)(param_1 + 0xc) < 2) {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bd6e8) && (FUN_144b3d300(&DAT_14c9bd6e8), DAT_14c9bd6e8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar9 == (longlong *)0x0) {
      DAT_14c9bd6e0 = 0;
    }
    else {
      DAT_14c9bd6e0 = (**(code **)(*plVar9 + 0x68))(plVar9);
    }
    _Init_thread_footer(&DAT_14c9bd6e8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bd6f8) && (FUN_144b3d300(&DAT_14c9bd6f8), DAT_14c9bd6f8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar9 == (longlong *)0x0) {
      DAT_14c9bd6f0 = 0;
    }
    else {
      DAT_14c9bd6f0 = (**(code **)(*plVar9 + 0x68))(plVar9);
    }
    _Init_thread_footer(&DAT_14c9bd6f8);
  }
  lVar4 = DAT_14c9bd6f0;
  uVar1 = param_1[10];
  uVar2 = *(uint *)(param_1 + 0xc);
  if (DAT_14c9bd6f0 == 0) {
    bVar12 = false;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar10 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar10 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar10 = 1;
    }
    bVar12 = *(int *)(lVar4 + uVar10 * 4) != 0;
  }
  lVar4 = DAT_14c9bd6e0;
  if (DAT_14c9bd6e0 == 0) {
    bVar12 = true;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar10 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar10 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar10 = 1;
    }
    bVar12 = (bool)(*(int *)(lVar4 + uVar10 * 4) != 0 | bVar12);
  }
  lVar4 = DAT_14ca1c600;
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    if (uVar2 < 2) {
      return 0;
    }
    uVar1 = *param_1;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar10 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar10 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar10 = 1;
    }
    if (*(int *)(lVar4 + uVar10 * 4) < 1) {
      return 0;
    }
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 2) == 0) {
      return 0;
    }
  }
  else if ((uVar2 < 2) && ((uVar1 & 0x400) == 0)) {
    if (!bVar12) {
      uVar1 = *param_1;
      puVar11 = &DAT_14ca96aa8;
      if (DAT_14ca96af8 != (undefined4 *)0x0) {
        puVar11 = DAT_14ca96af8;
      }
      if (((uint)puVar11[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) {
        return 0;
      }
      if ((int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] < 3) {
        return 0;
      }
    }
    if ((param_1[10] & 1) != 0) {
      return 0;
    }
  }
  if ((int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf] < 3) {
    return 0;
  }
  uVar8 = FUN_14027015e(3,param_1);
  return uVar8;
}



// FUNCTION 141755eae FUN_141755eae body=729 status=ok
// SIG undefined FUN_141755eae(void)

undefined8 FUN_141755eae(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  
  cVar5 = FUN_1400b7021();
  if (cVar5 == '\0') {
    return 0;
  }
  if (*(uint *)(param_1 + 0xc) < 2) {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bd738) && (FUN_144b3d300(&DAT_14c9bd738), DAT_14c9bd738 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bd730 = 0;
    }
    else {
      DAT_14c9bd730 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bd738);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bd748) && (FUN_144b3d300(&DAT_14c9bd748), DAT_14c9bd748 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bd740 = 0;
    }
    else {
      DAT_14c9bd740 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bd748);
  }
  uVar2 = *(uint *)(param_1 + 0xc);
  if ((((DAT_14c9bd740 != 0) &&
       (iVar3 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
       , iVar3 != 0x40000002)) && (iVar3 == 1)) && (DAT_14c86a9f8 != '\0')) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  if (((DAT_14c9bd730 != 0) &&
      (iVar3 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
      iVar3 != 0x40000002)) && ((iVar3 == 1 && (DAT_14c86a9f8 != '\0')))) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  lVar4 = DAT_14ca1c600;
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    if (uVar2 < 2) {
      return 0;
    }
    uVar1 = *param_1;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar10 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar10 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar10 = 1;
    }
    if (*(int *)(lVar4 + uVar10 * 4) < 1) {
      return 0;
    }
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 2) == 0) {
      return 0;
    }
  }
  if ((int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf] < 3) {
    return 0;
  }
  uVar9 = FUN_14027015e(3,param_1);
  return uVar9;
}



// FUNCTION 141756188 FUN_141756188 body=1016 status=ok
// SIG undefined FUN_141756188(void)

uint FUN_141756188(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  bool bVar11;
  
  cVar5 = FUN_1400b7021();
  if (cVar5 == '\0') {
    return 0;
  }
  if (*(uint *)(param_1 + 0xc) < 2) {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bd788) && (FUN_144b3d300(&DAT_14c9bd788), DAT_14c9bd788 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bd780 = 0;
    }
    else {
      DAT_14c9bd780 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bd788);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bd798) && (FUN_144b3d300(&DAT_14c9bd798), DAT_14c9bd798 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bd790 = 0;
    }
    else {
      DAT_14c9bd790 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bd798);
  }
  lVar4 = DAT_14c9bd790;
  uVar1 = param_1[10];
  uVar2 = *(uint *)(param_1 + 0xc);
  if (DAT_14c9bd790 == 0) {
    bVar11 = false;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    bVar11 = *(int *)(lVar4 + uVar9 * 4) != 0;
  }
  lVar4 = DAT_14c9bd780;
  if (DAT_14c9bd780 == 0) {
    bVar11 = true;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    bVar11 = (bool)(*(int *)(lVar4 + uVar9 * 4) != 0 | bVar11);
  }
  lVar4 = DAT_14ca1c600;
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    if (uVar2 < 2) {
      return 0;
    }
    uVar1 = *param_1;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    if (*(int *)(lVar4 + uVar9 * 4) < 1) {
      return 0;
    }
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 2) == 0) {
      return 0;
    }
  }
  else if ((uVar2 < 2) && ((uVar1 & 0x400) == 0)) {
    if (!bVar11) {
      uVar1 = *param_1;
      puVar10 = &DAT_14ca96aa8;
      if (DAT_14ca96af8 != (undefined4 *)0x0) {
        puVar10 = DAT_14ca96af8;
      }
      if (((uint)puVar10[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) {
        return 0;
      }
      if ((int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] < 3) {
        return 0;
      }
    }
    if ((param_1[10] & 1) != 0) {
      return 0;
    }
  }
  if (((2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) &&
      (cVar5 = FUN_14027015e(3,param_1), cVar5 != '\0')) &&
     ((cVar5 = FUN_140052d29(*param_1), cVar5 == '\0' &&
      (((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x29) & 1) != 0 &&
       ((*(ulonglong *)(param_1 + 0x1c) >> 0x35 & 1) != 0)))))) {
    return (uint)(*(ulonglong *)(param_1 + 0x1c) >> 0x17) & 1;
  }
  return 0;
}



// FUNCTION 141756580 FUN_141756580 body=776 status=ok
// SIG undefined FUN_141756580(void)

uint FUN_141756580(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  ulonglong uVar9;
  
  cVar5 = FUN_1400b7021();
  if (cVar5 == '\0') {
    return 0;
  }
  if (*(uint *)(param_1 + 0xc) < 2) {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bd7d8) && (FUN_144b3d300(&DAT_14c9bd7d8), DAT_14c9bd7d8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bd7d0 = 0;
    }
    else {
      DAT_14c9bd7d0 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bd7d8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bd7e8) && (FUN_144b3d300(&DAT_14c9bd7e8), DAT_14c9bd7e8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bd7e0 = 0;
    }
    else {
      DAT_14c9bd7e0 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bd7e8);
  }
  uVar2 = *(uint *)(param_1 + 0xc);
  if ((((DAT_14c9bd7e0 != 0) &&
       (iVar3 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
       , iVar3 != 0x40000002)) && (iVar3 == 1)) && (DAT_14c86a9f8 != '\0')) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  if (((DAT_14c9bd7d0 != 0) &&
      (iVar3 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
      iVar3 != 0x40000002)) && ((iVar3 == 1 && (DAT_14c86a9f8 != '\0')))) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  lVar4 = DAT_14ca1c600;
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    if (uVar2 < 2) {
      return 0;
    }
    uVar1 = *param_1;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    if (*(int *)(lVar4 + uVar9 * 4) < 1) {
      return 0;
    }
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 2) == 0) {
      return 0;
    }
  }
  if ((((2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) &&
       (cVar5 = FUN_14027015e(3,param_1), cVar5 != '\0')) &&
      (cVar5 = FUN_140052d29(*param_1), cVar5 == '\0')) &&
     (((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x29) & 1) != 0 &&
      ((*(ulonglong *)(param_1 + 0x1c) >> 0x35 & 1) != 0)))) {
    return (uint)(*(ulonglong *)(param_1 + 0x1c) >> 0x17) & 1;
  }
  return 0;
}



// FUNCTION 141756888 FUN_141756888 body=797 status=ok
// SIG undefined FUN_141756888(void)

undefined8 FUN_141756888(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  longlong lVar5;
  DWORD DVar6;
  DWORD DVar7;
  undefined8 uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  bool bVar12;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bdbf8) && (FUN_144b3d300(&DAT_14c9bdbf8), DAT_14c9bdbf8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar9 == (longlong *)0x0) {
      DAT_14c9bdbf0 = 0;
    }
    else {
      DAT_14c9bdbf0 = (**(code **)(*plVar9 + 0x68))(plVar9);
    }
    _Init_thread_footer(&DAT_14c9bdbf8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bdc08) && (FUN_144b3d300(&DAT_14c9bdc08), DAT_14c9bdc08 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar9 == (longlong *)0x0) {
      DAT_14c9bdc00 = 0;
    }
    else {
      DAT_14c9bdc00 = (**(code **)(*plVar9 + 0x68))(plVar9);
    }
    _Init_thread_footer(&DAT_14c9bdc08);
  }
  lVar5 = DAT_14c9bdc00;
  uVar1 = param_1[10];
  uVar2 = *(uint *)(param_1 + 0xc);
  if (DAT_14c9bdc00 == 0) {
    bVar12 = false;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar10 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar10 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar10 = 1;
    }
    bVar12 = *(int *)(lVar5 + uVar10 * 4) != 0;
  }
  lVar5 = DAT_14c9bdbf0;
  bVar4 = (byte)(uVar1 >> 8);
  if (DAT_14c9bdbf0 == 0) {
    if ((bVar4 >> 2 & 1) != 0 || 1 < uVar2) goto LAB_1417569a5;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar10 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar10 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar10 = 1;
    }
    if ((bVar4 >> 2 & 1) != 0 || 1 < uVar2) goto LAB_1417569a5;
    if (*(int *)(lVar5 + uVar10 * 4) == 0 && !bVar12) {
      uVar1 = *param_1;
      puVar11 = &DAT_14ca96aa8;
      if (DAT_14ca96af8 != (undefined4 *)0x0) {
        puVar11 = DAT_14ca96af8;
      }
      if (((uint)puVar11[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) {
        return 0;
      }
      if ((int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] < 3) {
        return 0;
      }
    }
  }
  if ((param_1[10] & 1) != 0) {
    return 0;
  }
LAB_1417569a5:
  if ((2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x2a) & 2) != 0)) {
    uVar8 = FUN_14027015e(3,param_1);
    return uVar8;
  }
  return 0;
}



// FUNCTION 141756ba6 FUN_141756ba6 body=529 status=ok
// SIG undefined FUN_141756ba6(void)

undefined8 FUN_141756ba6(ushort *param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9bdc48) {
    FUN_144b3d300(&DAT_14c9bdc48);
    if (DAT_14c9bdc48 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar3 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
      if (plVar3 == (longlong *)0x0) {
        DAT_14c9bdc40 = 0;
      }
      else {
        DAT_14c9bdc40 = (**(code **)(*plVar3 + 0x68))(plVar3);
      }
      _Init_thread_footer(&DAT_14c9bdc48);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9bdc58) {
    FUN_144b3d300(&DAT_14c9bdc58);
    if (DAT_14c9bdc58 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar3 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))
                         (DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
      if (plVar3 == (longlong *)0x0) {
        DAT_14c9bdc50 = 0;
      }
      else {
        DAT_14c9bdc50 = (**(code **)(*plVar3 + 0x68))(plVar3);
      }
      _Init_thread_footer(&DAT_14c9bdc58);
    }
  }
  if (DAT_14c9bdc50 != 0) {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar1 != 0x40000002) && (iVar1 == 1)) && (DAT_14c86a9f8 != '\0')) {
      FUN_140ad26c0();
      GetCurrentThreadId();
    }
  }
  if (DAT_14c9bdc40 != 0) {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar1 != 0x40000002) && (iVar1 == 1)) && (DAT_14c86a9f8 != '\0')) {
      FUN_140ad26c0();
      GetCurrentThreadId();
    }
  }
  if ((2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x2a) & 2) != 0)) {
    uVar2 = FUN_14027015e(3,param_1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 141756db8 FUN_141756db8 body=805 status=ok
// SIG undefined FUN_141756db8(void)

undefined8 FUN_141756db8(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  longlong lVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  bool bVar12;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bdc98) && (FUN_144b3d300(&DAT_14c9bdc98), DAT_14c9bdc98 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bdc90 = 0;
    }
    else {
      DAT_14c9bdc90 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bdc98);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bdca8) && (FUN_144b3d300(&DAT_14c9bdca8), DAT_14c9bdca8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bdca0 = 0;
    }
    else {
      DAT_14c9bdca0 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bdca8);
  }
  lVar5 = DAT_14c9bdca0;
  uVar1 = param_1[10];
  uVar2 = *(uint *)(param_1 + 0xc);
  if (DAT_14c9bdca0 == 0) {
    bVar12 = false;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar10 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar10 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar10 = 1;
    }
    bVar12 = *(int *)(lVar5 + uVar10 * 4) != 0;
  }
  lVar5 = DAT_14c9bdc90;
  bVar4 = (byte)(uVar1 >> 8);
  if (DAT_14c9bdc90 == 0) {
    if ((bVar4 >> 2 & 1) != 0 || 1 < uVar2) goto LAB_141756ed9;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar10 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar10 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar10 = 1;
    }
    if ((bVar4 >> 2 & 1) != 0 || 1 < uVar2) goto LAB_141756ed9;
    if (*(int *)(lVar5 + uVar10 * 4) == 0 && !bVar12) {
      uVar1 = *param_1;
      puVar11 = &DAT_14ca96aa8;
      if (DAT_14ca96af8 != (undefined4 *)0x0) {
        puVar11 = DAT_14ca96af8;
      }
      if (((uint)puVar11[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) {
        return 0;
      }
      if ((int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] < 3) {
        return 0;
      }
    }
  }
  if ((param_1[10] & 1) != 0) {
    return 0;
  }
LAB_141756ed9:
  if ((2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x2a) & 2) != 0)) {
    uVar9 = FUN_14027015e(3,param_1);
    return uVar9;
  }
  return 0;
}



// FUNCTION 1417570de FUN_1417570de body=540 status=ok
// SIG undefined FUN_1417570de(void)

undefined8 FUN_1417570de(ushort *param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9bdce8) {
    FUN_144b3d300(&DAT_14c9bdce8);
    if (DAT_14c9bdce8 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar2 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
      if (plVar2 == (longlong *)0x0) {
        DAT_14c9bdce0 = 0;
      }
      else {
        DAT_14c9bdce0 = (**(code **)(*plVar2 + 0x68))(plVar2);
      }
      _Init_thread_footer(&DAT_14c9bdce8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9bdcf8) {
    FUN_144b3d300(&DAT_14c9bdcf8);
    if (DAT_14c9bdcf8 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar2 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))
                         (DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
      if (plVar2 == (longlong *)0x0) {
        DAT_14c9bdcf0 = 0;
      }
      else {
        DAT_14c9bdcf0 = (**(code **)(*plVar2 + 0x68))(plVar2);
      }
      _Init_thread_footer(&DAT_14c9bdcf8);
    }
  }
  if (DAT_14c9bdcf0 != 0) {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar1 != 0x40000002) && (iVar1 == 1)) && (DAT_14c86a9f8 != '\0')) {
      FUN_140ad26c0();
      GetCurrentThreadId();
    }
  }
  if (DAT_14c9bdce0 != 0) {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar1 != 0x40000002) && (iVar1 == 1)) && (DAT_14c86a9f8 != '\0')) {
      FUN_140ad26c0();
      GetCurrentThreadId();
    }
  }
  if ((2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x2a) & 2) != 0)) {
    uVar3 = FUN_14027015e(3,param_1);
    return uVar3;
  }
  return 0;
}



// FUNCTION 1417572fa FUN_1417572fa body=337 status=ok
// SIG undefined FUN_1417572fa(void)

undefined8 FUN_1417572fa(ushort *param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  DWORD DVar4;
  DWORD DVar5;
  longlong *plVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  bool bVar9;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9bdec8) {
    FUN_144b3d300(&DAT_14c9bdec8);
    if (DAT_14c9bdec8 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar6 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))
                         (DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
      if (plVar6 == (longlong *)0x0) {
        DAT_14c9bdec0 = 0;
      }
      else {
        DAT_14c9bdec0 = (**(code **)(*plVar6 + 0x68))(plVar6);
      }
      _Init_thread_footer(&DAT_14c9bdec8);
    }
  }
  lVar2 = DAT_14c9bdec0;
  if (DAT_14c9bdec0 == 0) {
    bVar9 = false;
  }
  else {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
      uVar8 = 0;
    }
    else if (iVar1 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      uVar8 = (ulonglong)(DVar4 != DVar5);
    }
    else {
      uVar8 = 1;
    }
    bVar9 = *(int *)(lVar2 + uVar8 * 4) != 0;
  }
  cVar3 = FUN_14027015e(4,param_1);
  if ((bVar9) || (cVar3 != '\0')) {
    uVar7 = CONCAT71((int7)((ulonglong)*param_1 * 0x3c >> 8),
                     2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]);
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}



// FUNCTION 14175744c FUN_14175744c body=942 status=ok
// SIG undefined FUN_14175744c(void)

undefined8 FUN_14175744c(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  DWORD DVar5;
  DWORD DVar6;
  undefined8 uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  bool bVar11;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9be098) && (FUN_144b3d300(&DAT_14c9be098), DAT_14c9be098 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9be090 = 0;
    }
    else {
      DAT_14c9be090 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9be098);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9be0a8) && (FUN_144b3d300(&DAT_14c9be0a8), DAT_14c9be0a8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9be0a0 = 0;
    }
    else {
      DAT_14c9be0a0 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9be0a8);
  }
  lVar4 = DAT_14c9be0a0;
  uVar1 = param_1[10];
  uVar2 = *(uint *)(param_1 + 0xc);
  if (DAT_14c9be0a0 == 0) {
    bVar11 = false;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar5 != DVar6);
    }
    else {
      uVar9 = 1;
    }
    bVar11 = *(int *)(lVar4 + uVar9 * 4) != 0;
  }
  lVar4 = DAT_14c9be090;
  if (DAT_14c9be090 == 0) {
    bVar11 = true;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar5 != DVar6);
    }
    else {
      uVar9 = 1;
    }
    bVar11 = (bool)(*(int *)(lVar4 + uVar9 * 4) != 0 | bVar11);
  }
  lVar4 = DAT_14ca1c600;
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    if (uVar2 < 2) {
      return 0;
    }
    uVar1 = *param_1;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar5 != DVar6);
    }
    else {
      uVar9 = 1;
    }
    if (*(int *)(lVar4 + uVar9 * 4) < 1) {
      return 0;
    }
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 2) == 0) {
      return 0;
    }
  }
  else if ((uVar2 < 2) && ((uVar1 & 0x400) == 0)) {
    if (!bVar11) {
      uVar1 = *param_1;
      puVar10 = &DAT_14ca96aa8;
      if (DAT_14ca96af8 != (undefined4 *)0x0) {
        puVar10 = DAT_14ca96af8;
      }
      if (((uint)puVar10[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) {
        return 0;
      }
      if ((int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] < 3) {
        return 0;
      }
    }
    if ((param_1[10] & 1) != 0) {
      return 0;
    }
  }
  if ((int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf] < 3) {
    return 0;
  }
  uVar7 = FUN_14027015e(4,param_1);
  return uVar7;
}



// FUNCTION 1417577fa FUN_1417577fa body=706 status=ok
// SIG undefined FUN_1417577fa(void)

undefined8 FUN_1417577fa(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  DWORD DVar5;
  DWORD DVar6;
  longlong *plVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9be0e8) && (FUN_144b3d300(&DAT_14c9be0e8), DAT_14c9be0e8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar7 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar7 == (longlong *)0x0) {
      DAT_14c9be0e0 = 0;
    }
    else {
      DAT_14c9be0e0 = (**(code **)(*plVar7 + 0x68))(plVar7);
    }
    _Init_thread_footer(&DAT_14c9be0e8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9be0f8) && (FUN_144b3d300(&DAT_14c9be0f8), DAT_14c9be0f8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar7 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar7 == (longlong *)0x0) {
      DAT_14c9be0f0 = 0;
    }
    else {
      DAT_14c9be0f0 = (**(code **)(*plVar7 + 0x68))(plVar7);
    }
    _Init_thread_footer(&DAT_14c9be0f8);
  }
  uVar2 = *(uint *)(param_1 + 0xc);
  if ((((DAT_14c9be0f0 != 0) &&
       (iVar3 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
       , iVar3 != 0x40000002)) && (iVar3 == 1)) && (DAT_14c86a9f8 != '\0')) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  if (((DAT_14c9be0e0 != 0) &&
      (iVar3 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
      iVar3 != 0x40000002)) && ((iVar3 == 1 && (DAT_14c86a9f8 != '\0')))) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  lVar4 = DAT_14ca1c600;
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    if (uVar2 < 2) {
      return 0;
    }
    uVar1 = *param_1;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar5 != DVar6);
    }
    else {
      uVar9 = 1;
    }
    if (*(int *)(lVar4 + uVar9 * 4) < 1) {
      return 0;
    }
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 2) == 0) {
      return 0;
    }
  }
  if ((int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf] < 3) {
    return 0;
  }
  uVar8 = FUN_14027015e(4,param_1);
  return uVar8;
}



// FUNCTION 141757abc FUN_141757abc body=994 status=ok
// SIG undefined FUN_141757abc(void)

uint FUN_141757abc(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  bool bVar11;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9be138) && (FUN_144b3d300(&DAT_14c9be138), DAT_14c9be138 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9be130 = 0;
    }
    else {
      DAT_14c9be130 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9be138);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9be148) && (FUN_144b3d300(&DAT_14c9be148), DAT_14c9be148 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9be140 = 0;
    }
    else {
      DAT_14c9be140 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9be148);
  }
  lVar4 = DAT_14c9be140;
  uVar1 = param_1[10];
  uVar2 = *(uint *)(param_1 + 0xc);
  if (DAT_14c9be140 == 0) {
    bVar11 = false;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    bVar11 = *(int *)(lVar4 + uVar9 * 4) != 0;
  }
  lVar4 = DAT_14c9be130;
  if (DAT_14c9be130 == 0) {
    bVar11 = true;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    bVar11 = (bool)(*(int *)(lVar4 + uVar9 * 4) != 0 | bVar11);
  }
  lVar4 = DAT_14ca1c600;
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    if (uVar2 < 2) {
      return 0;
    }
    uVar1 = *param_1;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    if (*(int *)(lVar4 + uVar9 * 4) < 1) {
      return 0;
    }
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 2) == 0) {
      return 0;
    }
  }
  else if ((uVar2 < 2) && ((uVar1 & 0x400) == 0)) {
    if (!bVar11) {
      uVar1 = *param_1;
      puVar10 = &DAT_14ca96aa8;
      if (DAT_14ca96af8 != (undefined4 *)0x0) {
        puVar10 = DAT_14ca96af8;
      }
      if (((uint)puVar10[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) {
        return 0;
      }
      if ((int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] < 3) {
        return 0;
      }
    }
    if ((param_1[10] & 1) != 0) {
      return 0;
    }
  }
  if ((((2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) &&
       (cVar5 = FUN_14027015e(4,param_1), cVar5 != '\0')) &&
      (cVar5 = FUN_140052d29(*param_1), cVar5 == '\0')) &&
     (((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x29) & 1) != 0 &&
      ((*(ulonglong *)(param_1 + 0x1c) >> 0x35 & 1) != 0)))) {
    return (uint)(*(ulonglong *)(param_1 + 0x1c) >> 0x17) & 1;
  }
  return 0;
}



// FUNCTION 141757e9e FUN_141757e9e body=749 status=ok
// SIG undefined FUN_141757e9e(void)

uint FUN_141757e9e(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  ulonglong uVar9;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9be188) && (FUN_144b3d300(&DAT_14c9be188), DAT_14c9be188 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9be180 = 0;
    }
    else {
      DAT_14c9be180 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9be188);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9be198) && (FUN_144b3d300(&DAT_14c9be198), DAT_14c9be198 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9be190 = 0;
    }
    else {
      DAT_14c9be190 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9be198);
  }
  uVar2 = *(uint *)(param_1 + 0xc);
  if ((((DAT_14c9be190 != 0) &&
       (iVar3 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
       , iVar3 != 0x40000002)) && (iVar3 == 1)) && (DAT_14c86a9f8 != '\0')) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  if (((DAT_14c9be180 != 0) &&
      (iVar3 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
      iVar3 != 0x40000002)) && ((iVar3 == 1 && (DAT_14c86a9f8 != '\0')))) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  lVar4 = DAT_14ca1c600;
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    if (uVar2 < 2) {
      return 0;
    }
    uVar1 = *param_1;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    if (*(int *)(lVar4 + uVar9 * 4) < 1) {
      return 0;
    }
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 2) == 0) {
      return 0;
    }
  }
  if ((((2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) &&
       (cVar5 = FUN_14027015e(4,param_1), cVar5 != '\0')) &&
      (cVar5 = FUN_140052d29(*param_1), cVar5 == '\0')) &&
     (((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x29) & 1) != 0 &&
      ((*(ulonglong *)(param_1 + 0x1c) >> 0x35 & 1) != 0)))) {
    return (uint)(*(ulonglong *)(param_1 + 0x1c) >> 0x17) & 1;
  }
  return 0;
}



// FUNCTION 14175818c FUN_14175818c body=963 status=ok
// SIG undefined FUN_14175818c(void)

undefined8 FUN_14175818c(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  DWORD DVar7;
  undefined8 uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  bool bVar12;
  
  cVar5 = FUN_1400b7021();
  if (cVar5 == '\0') {
    return 0;
  }
  if (*(uint *)(param_1 + 0xc) < 2) {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9be1d8) && (FUN_144b3d300(&DAT_14c9be1d8), DAT_14c9be1d8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar9 == (longlong *)0x0) {
      DAT_14c9be1d0 = 0;
    }
    else {
      DAT_14c9be1d0 = (**(code **)(*plVar9 + 0x68))(plVar9);
    }
    _Init_thread_footer(&DAT_14c9be1d8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9be1e8) && (FUN_144b3d300(&DAT_14c9be1e8), DAT_14c9be1e8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar9 == (longlong *)0x0) {
      DAT_14c9be1e0 = 0;
    }
    else {
      DAT_14c9be1e0 = (**(code **)(*plVar9 + 0x68))(plVar9);
    }
    _Init_thread_footer(&DAT_14c9be1e8);
  }
  lVar4 = DAT_14c9be1e0;
  uVar1 = param_1[10];
  uVar2 = *(uint *)(param_1 + 0xc);
  if (DAT_14c9be1e0 == 0) {
    bVar12 = false;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar10 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar10 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar10 = 1;
    }
    bVar12 = *(int *)(lVar4 + uVar10 * 4) != 0;
  }
  lVar4 = DAT_14c9be1d0;
  if (DAT_14c9be1d0 == 0) {
    bVar12 = true;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar10 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar10 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar10 = 1;
    }
    bVar12 = (bool)(*(int *)(lVar4 + uVar10 * 4) != 0 | bVar12);
  }
  lVar4 = DAT_14ca1c600;
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    if (uVar2 < 2) {
      return 0;
    }
    uVar1 = *param_1;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar10 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar10 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar10 = 1;
    }
    if (*(int *)(lVar4 + uVar10 * 4) < 1) {
      return 0;
    }
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 2) == 0) {
      return 0;
    }
  }
  else if ((uVar2 < 2) && ((uVar1 & 0x400) == 0)) {
    if (!bVar12) {
      uVar1 = *param_1;
      puVar11 = &DAT_14ca96aa8;
      if (DAT_14ca96af8 != (undefined4 *)0x0) {
        puVar11 = DAT_14ca96af8;
      }
      if (((uint)puVar11[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) {
        return 0;
      }
      if ((int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] < 3) {
        return 0;
      }
    }
    if ((param_1[10] & 1) != 0) {
      return 0;
    }
  }
  if ((int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf] < 3) {
    return 0;
  }
  uVar8 = FUN_14027015e(4,param_1);
  return uVar8;
}



// FUNCTION 141758550 FUN_141758550 body=729 status=ok
// SIG undefined FUN_141758550(void)

undefined8 FUN_141758550(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  
  cVar5 = FUN_1400b7021();
  if (cVar5 == '\0') {
    return 0;
  }
  if (*(uint *)(param_1 + 0xc) < 2) {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9be228) && (FUN_144b3d300(&DAT_14c9be228), DAT_14c9be228 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9be220 = 0;
    }
    else {
      DAT_14c9be220 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9be228);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9be238) && (FUN_144b3d300(&DAT_14c9be238), DAT_14c9be238 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9be230 = 0;
    }
    else {
      DAT_14c9be230 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9be238);
  }
  uVar2 = *(uint *)(param_1 + 0xc);
  if ((((DAT_14c9be230 != 0) &&
       (iVar3 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
       , iVar3 != 0x40000002)) && (iVar3 == 1)) && (DAT_14c86a9f8 != '\0')) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  if (((DAT_14c9be220 != 0) &&
      (iVar3 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
      iVar3 != 0x40000002)) && ((iVar3 == 1 && (DAT_14c86a9f8 != '\0')))) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  lVar4 = DAT_14ca1c600;
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    if (uVar2 < 2) {
      return 0;
    }
    uVar1 = *param_1;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar10 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar10 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar10 = 1;
    }
    if (*(int *)(lVar4 + uVar10 * 4) < 1) {
      return 0;
    }
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 2) == 0) {
      return 0;
    }
  }
  if ((int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf] < 3) {
    return 0;
  }
  uVar9 = FUN_14027015e(4,param_1);
  return uVar9;
}



// FUNCTION 14175882a FUN_14175882a body=1016 status=ok
// SIG undefined FUN_14175882a(void)

uint FUN_14175882a(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  bool bVar11;
  
  cVar5 = FUN_1400b7021();
  if (cVar5 == '\0') {
    return 0;
  }
  if (*(uint *)(param_1 + 0xc) < 2) {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9be278) && (FUN_144b3d300(&DAT_14c9be278), DAT_14c9be278 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9be270 = 0;
    }
    else {
      DAT_14c9be270 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9be278);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9be288) && (FUN_144b3d300(&DAT_14c9be288), DAT_14c9be288 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9be280 = 0;
    }
    else {
      DAT_14c9be280 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9be288);
  }
  lVar4 = DAT_14c9be280;
  uVar1 = param_1[10];
  uVar2 = *(uint *)(param_1 + 0xc);
  if (DAT_14c9be280 == 0) {
    bVar11 = false;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    bVar11 = *(int *)(lVar4 + uVar9 * 4) != 0;
  }
  lVar4 = DAT_14c9be270;
  if (DAT_14c9be270 == 0) {
    bVar11 = true;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    bVar11 = (bool)(*(int *)(lVar4 + uVar9 * 4) != 0 | bVar11);
  }
  lVar4 = DAT_14ca1c600;
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    if (uVar2 < 2) {
      return 0;
    }
    uVar1 = *param_1;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    if (*(int *)(lVar4 + uVar9 * 4) < 1) {
      return 0;
    }
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 2) == 0) {
      return 0;
    }
  }
  else if ((uVar2 < 2) && ((uVar1 & 0x400) == 0)) {
    if (!bVar11) {
      uVar1 = *param_1;
      puVar10 = &DAT_14ca96aa8;
      if (DAT_14ca96af8 != (undefined4 *)0x0) {
        puVar10 = DAT_14ca96af8;
      }
      if (((uint)puVar10[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) {
        return 0;
      }
      if ((int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] < 3) {
        return 0;
      }
    }
    if ((param_1[10] & 1) != 0) {
      return 0;
    }
  }
  if (((2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) &&
      (cVar5 = FUN_14027015e(4,param_1), cVar5 != '\0')) &&
     ((cVar5 = FUN_140052d29(*param_1), cVar5 == '\0' &&
      (((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x29) & 1) != 0 &&
       ((*(ulonglong *)(param_1 + 0x1c) >> 0x35 & 1) != 0)))))) {
    return (uint)(*(ulonglong *)(param_1 + 0x1c) >> 0x17) & 1;
  }
  return 0;
}



// FUNCTION 141758c22 FUN_141758c22 body=776 status=ok
// SIG undefined FUN_141758c22(void)

uint FUN_141758c22(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  ulonglong uVar9;
  
  cVar5 = FUN_1400b7021();
  if (cVar5 == '\0') {
    return 0;
  }
  if (*(uint *)(param_1 + 0xc) < 2) {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9be2c8) && (FUN_144b3d300(&DAT_14c9be2c8), DAT_14c9be2c8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9be2c0 = 0;
    }
    else {
      DAT_14c9be2c0 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9be2c8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9be2d8) && (FUN_144b3d300(&DAT_14c9be2d8), DAT_14c9be2d8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9be2d0 = 0;
    }
    else {
      DAT_14c9be2d0 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9be2d8);
  }
  uVar2 = *(uint *)(param_1 + 0xc);
  if ((((DAT_14c9be2d0 != 0) &&
       (iVar3 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
       , iVar3 != 0x40000002)) && (iVar3 == 1)) && (DAT_14c86a9f8 != '\0')) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  if (((DAT_14c9be2c0 != 0) &&
      (iVar3 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
      iVar3 != 0x40000002)) && ((iVar3 == 1 && (DAT_14c86a9f8 != '\0')))) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  lVar4 = DAT_14ca1c600;
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    if (uVar2 < 2) {
      return 0;
    }
    uVar1 = *param_1;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    if (*(int *)(lVar4 + uVar9 * 4) < 1) {
      return 0;
    }
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 2) == 0) {
      return 0;
    }
  }
  if ((((2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) &&
       (cVar5 = FUN_14027015e(4,param_1), cVar5 != '\0')) &&
      (cVar5 = FUN_140052d29(*param_1), cVar5 == '\0')) &&
     (((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x29) & 1) != 0 &&
      ((*(ulonglong *)(param_1 + 0x1c) >> 0x35 & 1) != 0)))) {
    return (uint)(*(ulonglong *)(param_1 + 0x1c) >> 0x17) & 1;
  }
  return 0;
}



// FUNCTION 141758f2a FUN_141758f2a body=797 status=ok
// SIG undefined FUN_141758f2a(void)

undefined8 FUN_141758f2a(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  longlong lVar5;
  DWORD DVar6;
  DWORD DVar7;
  undefined8 uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  bool bVar12;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9be6e8) && (FUN_144b3d300(&DAT_14c9be6e8), DAT_14c9be6e8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar9 == (longlong *)0x0) {
      DAT_14c9be6e0 = 0;
    }
    else {
      DAT_14c9be6e0 = (**(code **)(*plVar9 + 0x68))(plVar9);
    }
    _Init_thread_footer(&DAT_14c9be6e8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9be6f8) && (FUN_144b3d300(&DAT_14c9be6f8), DAT_14c9be6f8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar9 == (longlong *)0x0) {
      DAT_14c9be6f0 = 0;
    }
    else {
      DAT_14c9be6f0 = (**(code **)(*plVar9 + 0x68))(plVar9);
    }
    _Init_thread_footer(&DAT_14c9be6f8);
  }
  lVar5 = DAT_14c9be6f0;
  uVar1 = param_1[10];
  uVar2 = *(uint *)(param_1 + 0xc);
  if (DAT_14c9be6f0 == 0) {
    bVar12 = false;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar10 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar10 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar10 = 1;
    }
    bVar12 = *(int *)(lVar5 + uVar10 * 4) != 0;
  }
  lVar5 = DAT_14c9be6e0;
  bVar4 = (byte)(uVar1 >> 8);
  if (DAT_14c9be6e0 == 0) {
    if ((bVar4 >> 2 & 1) != 0 || 1 < uVar2) goto LAB_141759047;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar10 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar10 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar10 = 1;
    }
    if ((bVar4 >> 2 & 1) != 0 || 1 < uVar2) goto LAB_141759047;
    if (*(int *)(lVar5 + uVar10 * 4) == 0 && !bVar12) {
      uVar1 = *param_1;
      puVar11 = &DAT_14ca96aa8;
      if (DAT_14ca96af8 != (undefined4 *)0x0) {
        puVar11 = DAT_14ca96af8;
      }
      if (((uint)puVar11[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) {
        return 0;
      }
      if ((int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] < 3) {
        return 0;
      }
    }
  }
  if ((param_1[10] & 1) != 0) {
    return 0;
  }
LAB_141759047:
  if ((2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x2a) & 2) != 0)) {
    uVar8 = FUN_14027015e(4,param_1);
    return uVar8;
  }
  return 0;
}



// FUNCTION 141759248 FUN_141759248 body=529 status=ok
// SIG undefined FUN_141759248(void)

undefined8 FUN_141759248(ushort *param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9be738) {
    FUN_144b3d300(&DAT_14c9be738);
    if (DAT_14c9be738 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar3 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
      if (plVar3 == (longlong *)0x0) {
        DAT_14c9be730 = 0;
      }
      else {
        DAT_14c9be730 = (**(code **)(*plVar3 + 0x68))(plVar3);
      }
      _Init_thread_footer(&DAT_14c9be738);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9be748) {
    FUN_144b3d300(&DAT_14c9be748);
    if (DAT_14c9be748 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar3 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))
                         (DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
      if (plVar3 == (longlong *)0x0) {
        DAT_14c9be740 = 0;
      }
      else {
        DAT_14c9be740 = (**(code **)(*plVar3 + 0x68))(plVar3);
      }
      _Init_thread_footer(&DAT_14c9be748);
    }
  }
  if (DAT_14c9be740 != 0) {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar1 != 0x40000002) && (iVar1 == 1)) && (DAT_14c86a9f8 != '\0')) {
      FUN_140ad26c0();
      GetCurrentThreadId();
    }
  }
  if (DAT_14c9be730 != 0) {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar1 != 0x40000002) && (iVar1 == 1)) && (DAT_14c86a9f8 != '\0')) {
      FUN_140ad26c0();
      GetCurrentThreadId();
    }
  }
  if ((2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x2a) & 2) != 0)) {
    uVar2 = FUN_14027015e(4,param_1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 14175945a FUN_14175945a body=805 status=ok
// SIG undefined FUN_14175945a(void)

undefined8 FUN_14175945a(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  longlong lVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  bool bVar12;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9be788) && (FUN_144b3d300(&DAT_14c9be788), DAT_14c9be788 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9be780 = 0;
    }
    else {
      DAT_14c9be780 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9be788);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9be798) && (FUN_144b3d300(&DAT_14c9be798), DAT_14c9be798 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9be790 = 0;
    }
    else {
      DAT_14c9be790 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9be798);
  }
  lVar5 = DAT_14c9be790;
  uVar1 = param_1[10];
  uVar2 = *(uint *)(param_1 + 0xc);
  if (DAT_14c9be790 == 0) {
    bVar12 = false;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar10 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar10 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar10 = 1;
    }
    bVar12 = *(int *)(lVar5 + uVar10 * 4) != 0;
  }
  lVar5 = DAT_14c9be780;
  bVar4 = (byte)(uVar1 >> 8);
  if (DAT_14c9be780 == 0) {
    if ((bVar4 >> 2 & 1) != 0 || 1 < uVar2) goto LAB_14175957b;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar10 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar10 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar10 = 1;
    }
    if ((bVar4 >> 2 & 1) != 0 || 1 < uVar2) goto LAB_14175957b;
    if (*(int *)(lVar5 + uVar10 * 4) == 0 && !bVar12) {
      uVar1 = *param_1;
      puVar11 = &DAT_14ca96aa8;
      if (DAT_14ca96af8 != (undefined4 *)0x0) {
        puVar11 = DAT_14ca96af8;
      }
      if (((uint)puVar11[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) {
        return 0;
      }
      if ((int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] < 3) {
        return 0;
      }
    }
  }
  if ((param_1[10] & 1) != 0) {
    return 0;
  }
LAB_14175957b:
  if ((2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x2a) & 2) != 0)) {
    uVar9 = FUN_14027015e(4,param_1);
    return uVar9;
  }
  return 0;
}



// FUNCTION 141759780 FUN_141759780 body=540 status=ok
// SIG undefined FUN_141759780(void)

undefined8 FUN_141759780(ushort *param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9be7d8) {
    FUN_144b3d300(&DAT_14c9be7d8);
    if (DAT_14c9be7d8 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar2 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
      if (plVar2 == (longlong *)0x0) {
        DAT_14c9be7d0 = 0;
      }
      else {
        DAT_14c9be7d0 = (**(code **)(*plVar2 + 0x68))(plVar2);
      }
      _Init_thread_footer(&DAT_14c9be7d8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9be7e8) {
    FUN_144b3d300(&DAT_14c9be7e8);
    if (DAT_14c9be7e8 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar2 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))
                         (DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
      if (plVar2 == (longlong *)0x0) {
        DAT_14c9be7e0 = 0;
      }
      else {
        DAT_14c9be7e0 = (**(code **)(*plVar2 + 0x68))(plVar2);
      }
      _Init_thread_footer(&DAT_14c9be7e8);
    }
  }
  if (DAT_14c9be7e0 != 0) {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar1 != 0x40000002) && (iVar1 == 1)) && (DAT_14c86a9f8 != '\0')) {
      FUN_140ad26c0();
      GetCurrentThreadId();
    }
  }
  if (DAT_14c9be7d0 != 0) {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar1 != 0x40000002) && (iVar1 == 1)) && (DAT_14c86a9f8 != '\0')) {
      FUN_140ad26c0();
      GetCurrentThreadId();
    }
  }
  if ((2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x2a) & 2) != 0)) {
    uVar3 = FUN_14027015e(4,param_1);
    return uVar3;
  }
  return 0;
}



// FUNCTION 14175999c FUN_14175999c body=337 status=ok
// SIG undefined FUN_14175999c(void)

undefined8 FUN_14175999c(ushort *param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  DWORD DVar4;
  DWORD DVar5;
  longlong *plVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  bool bVar9;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9be9b8) {
    FUN_144b3d300(&DAT_14c9be9b8);
    if (DAT_14c9be9b8 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar6 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))
                         (DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
      if (plVar6 == (longlong *)0x0) {
        DAT_14c9be9b0 = 0;
      }
      else {
        DAT_14c9be9b0 = (**(code **)(*plVar6 + 0x68))(plVar6);
      }
      _Init_thread_footer(&DAT_14c9be9b8);
    }
  }
  lVar2 = DAT_14c9be9b0;
  if (DAT_14c9be9b0 == 0) {
    bVar9 = false;
  }
  else {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
      uVar8 = 0;
    }
    else if (iVar1 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      uVar8 = (ulonglong)(DVar4 != DVar5);
    }
    else {
      uVar8 = 1;
    }
    bVar9 = *(int *)(lVar2 + uVar8 * 4) != 0;
  }
  cVar3 = FUN_14027015e(5,param_1);
  if ((bVar9) || (cVar3 != '\0')) {
    uVar7 = CONCAT71((int7)((ulonglong)*param_1 * 0x3c >> 8),
                     2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]);
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}



// FUNCTION 141759aee FUN_141759aee body=942 status=ok
// SIG undefined FUN_141759aee(void)

undefined8 FUN_141759aee(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  DWORD DVar5;
  DWORD DVar6;
  undefined8 uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  bool bVar11;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9beb88) && (FUN_144b3d300(&DAT_14c9beb88), DAT_14c9beb88 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9beb80 = 0;
    }
    else {
      DAT_14c9beb80 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9beb88);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9beb98) && (FUN_144b3d300(&DAT_14c9beb98), DAT_14c9beb98 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9beb90 = 0;
    }
    else {
      DAT_14c9beb90 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9beb98);
  }
  lVar4 = DAT_14c9beb90;
  uVar1 = param_1[10];
  uVar2 = *(uint *)(param_1 + 0xc);
  if (DAT_14c9beb90 == 0) {
    bVar11 = false;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar5 != DVar6);
    }
    else {
      uVar9 = 1;
    }
    bVar11 = *(int *)(lVar4 + uVar9 * 4) != 0;
  }
  lVar4 = DAT_14c9beb80;
  if (DAT_14c9beb80 == 0) {
    bVar11 = true;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar5 != DVar6);
    }
    else {
      uVar9 = 1;
    }
    bVar11 = (bool)(*(int *)(lVar4 + uVar9 * 4) != 0 | bVar11);
  }
  lVar4 = DAT_14ca1c600;
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    if (uVar2 < 2) {
      return 0;
    }
    uVar1 = *param_1;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar5 != DVar6);
    }
    else {
      uVar9 = 1;
    }
    if (*(int *)(lVar4 + uVar9 * 4) < 1) {
      return 0;
    }
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 2) == 0) {
      return 0;
    }
  }
  else if ((uVar2 < 2) && ((uVar1 & 0x400) == 0)) {
    if (!bVar11) {
      uVar1 = *param_1;
      puVar10 = &DAT_14ca96aa8;
      if (DAT_14ca96af8 != (undefined4 *)0x0) {
        puVar10 = DAT_14ca96af8;
      }
      if (((uint)puVar10[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) {
        return 0;
      }
      if ((int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] < 3) {
        return 0;
      }
    }
    if ((param_1[10] & 1) != 0) {
      return 0;
    }
  }
  if ((int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf] < 3) {
    return 0;
  }
  uVar7 = FUN_14027015e(5,param_1);
  return uVar7;
}



// FUNCTION 141759e9c FUN_141759e9c body=706 status=ok
// SIG undefined FUN_141759e9c(void)

undefined8 FUN_141759e9c(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  DWORD DVar5;
  DWORD DVar6;
  longlong *plVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bebd8) && (FUN_144b3d300(&DAT_14c9bebd8), DAT_14c9bebd8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar7 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar7 == (longlong *)0x0) {
      DAT_14c9bebd0 = 0;
    }
    else {
      DAT_14c9bebd0 = (**(code **)(*plVar7 + 0x68))(plVar7);
    }
    _Init_thread_footer(&DAT_14c9bebd8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bebe8) && (FUN_144b3d300(&DAT_14c9bebe8), DAT_14c9bebe8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar7 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar7 == (longlong *)0x0) {
      DAT_14c9bebe0 = 0;
    }
    else {
      DAT_14c9bebe0 = (**(code **)(*plVar7 + 0x68))(plVar7);
    }
    _Init_thread_footer(&DAT_14c9bebe8);
  }
  uVar2 = *(uint *)(param_1 + 0xc);
  if ((((DAT_14c9bebe0 != 0) &&
       (iVar3 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
       , iVar3 != 0x40000002)) && (iVar3 == 1)) && (DAT_14c86a9f8 != '\0')) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  if (((DAT_14c9bebd0 != 0) &&
      (iVar3 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
      iVar3 != 0x40000002)) && ((iVar3 == 1 && (DAT_14c86a9f8 != '\0')))) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  lVar4 = DAT_14ca1c600;
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    if (uVar2 < 2) {
      return 0;
    }
    uVar1 = *param_1;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar5 != DVar6);
    }
    else {
      uVar9 = 1;
    }
    if (*(int *)(lVar4 + uVar9 * 4) < 1) {
      return 0;
    }
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 2) == 0) {
      return 0;
    }
  }
  if ((int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf] < 3) {
    return 0;
  }
  uVar8 = FUN_14027015e(5,param_1);
  return uVar8;
}



// FUNCTION 14175a15e FUN_14175a15e body=994 status=ok
// SIG undefined FUN_14175a15e(void)

uint FUN_14175a15e(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  bool bVar11;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bec28) && (FUN_144b3d300(&DAT_14c9bec28), DAT_14c9bec28 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bec20 = 0;
    }
    else {
      DAT_14c9bec20 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bec28);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bec38) && (FUN_144b3d300(&DAT_14c9bec38), DAT_14c9bec38 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bec30 = 0;
    }
    else {
      DAT_14c9bec30 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bec38);
  }
  lVar4 = DAT_14c9bec30;
  uVar1 = param_1[10];
  uVar2 = *(uint *)(param_1 + 0xc);
  if (DAT_14c9bec30 == 0) {
    bVar11 = false;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    bVar11 = *(int *)(lVar4 + uVar9 * 4) != 0;
  }
  lVar4 = DAT_14c9bec20;
  if (DAT_14c9bec20 == 0) {
    bVar11 = true;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    bVar11 = (bool)(*(int *)(lVar4 + uVar9 * 4) != 0 | bVar11);
  }
  lVar4 = DAT_14ca1c600;
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    if (uVar2 < 2) {
      return 0;
    }
    uVar1 = *param_1;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    if (*(int *)(lVar4 + uVar9 * 4) < 1) {
      return 0;
    }
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 2) == 0) {
      return 0;
    }
  }
  else if ((uVar2 < 2) && ((uVar1 & 0x400) == 0)) {
    if (!bVar11) {
      uVar1 = *param_1;
      puVar10 = &DAT_14ca96aa8;
      if (DAT_14ca96af8 != (undefined4 *)0x0) {
        puVar10 = DAT_14ca96af8;
      }
      if (((uint)puVar10[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) {
        return 0;
      }
      if ((int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] < 3) {
        return 0;
      }
    }
    if ((param_1[10] & 1) != 0) {
      return 0;
    }
  }
  if ((((2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) &&
       (cVar5 = FUN_14027015e(5,param_1), cVar5 != '\0')) &&
      (cVar5 = FUN_140052d29(*param_1), cVar5 == '\0')) &&
     (((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x29) & 1) != 0 &&
      ((*(ulonglong *)(param_1 + 0x1c) >> 0x35 & 1) != 0)))) {
    return (uint)(*(ulonglong *)(param_1 + 0x1c) >> 0x17) & 1;
  }
  return 0;
}



// FUNCTION 14175a540 FUN_14175a540 body=749 status=ok
// SIG undefined FUN_14175a540(void)

uint FUN_14175a540(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  ulonglong uVar9;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bec78) && (FUN_144b3d300(&DAT_14c9bec78), DAT_14c9bec78 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bec70 = 0;
    }
    else {
      DAT_14c9bec70 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bec78);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bec88) && (FUN_144b3d300(&DAT_14c9bec88), DAT_14c9bec88 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bec80 = 0;
    }
    else {
      DAT_14c9bec80 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bec88);
  }
  uVar2 = *(uint *)(param_1 + 0xc);
  if ((((DAT_14c9bec80 != 0) &&
       (iVar3 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
       , iVar3 != 0x40000002)) && (iVar3 == 1)) && (DAT_14c86a9f8 != '\0')) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  if (((DAT_14c9bec70 != 0) &&
      (iVar3 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
      iVar3 != 0x40000002)) && ((iVar3 == 1 && (DAT_14c86a9f8 != '\0')))) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  lVar4 = DAT_14ca1c600;
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    if (uVar2 < 2) {
      return 0;
    }
    uVar1 = *param_1;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    if (*(int *)(lVar4 + uVar9 * 4) < 1) {
      return 0;
    }
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 2) == 0) {
      return 0;
    }
  }
  if ((((2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) &&
       (cVar5 = FUN_14027015e(5,param_1), cVar5 != '\0')) &&
      (cVar5 = FUN_140052d29(*param_1), cVar5 == '\0')) &&
     (((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x29) & 1) != 0 &&
      ((*(ulonglong *)(param_1 + 0x1c) >> 0x35 & 1) != 0)))) {
    return (uint)(*(ulonglong *)(param_1 + 0x1c) >> 0x17) & 1;
  }
  return 0;
}



// FUNCTION 14175a82e FUN_14175a82e body=963 status=ok
// SIG undefined FUN_14175a82e(void)

undefined8 FUN_14175a82e(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  DWORD DVar7;
  undefined8 uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  bool bVar12;
  
  cVar5 = FUN_1400b7021();
  if (cVar5 == '\0') {
    return 0;
  }
  if (*(uint *)(param_1 + 0xc) < 2) {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9becc8) && (FUN_144b3d300(&DAT_14c9becc8), DAT_14c9becc8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar9 == (longlong *)0x0) {
      DAT_14c9becc0 = 0;
    }
    else {
      DAT_14c9becc0 = (**(code **)(*plVar9 + 0x68))(plVar9);
    }
    _Init_thread_footer(&DAT_14c9becc8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9becd8) && (FUN_144b3d300(&DAT_14c9becd8), DAT_14c9becd8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar9 == (longlong *)0x0) {
      DAT_14c9becd0 = 0;
    }
    else {
      DAT_14c9becd0 = (**(code **)(*plVar9 + 0x68))(plVar9);
    }
    _Init_thread_footer(&DAT_14c9becd8);
  }
  lVar4 = DAT_14c9becd0;
  uVar1 = param_1[10];
  uVar2 = *(uint *)(param_1 + 0xc);
  if (DAT_14c9becd0 == 0) {
    bVar12 = false;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar10 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar10 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar10 = 1;
    }
    bVar12 = *(int *)(lVar4 + uVar10 * 4) != 0;
  }
  lVar4 = DAT_14c9becc0;
  if (DAT_14c9becc0 == 0) {
    bVar12 = true;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar10 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar10 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar10 = 1;
    }
    bVar12 = (bool)(*(int *)(lVar4 + uVar10 * 4) != 0 | bVar12);
  }
  lVar4 = DAT_14ca1c600;
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    if (uVar2 < 2) {
      return 0;
    }
    uVar1 = *param_1;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar10 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar10 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar10 = 1;
    }
    if (*(int *)(lVar4 + uVar10 * 4) < 1) {
      return 0;
    }
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 2) == 0) {
      return 0;
    }
  }
  else if ((uVar2 < 2) && ((uVar1 & 0x400) == 0)) {
    if (!bVar12) {
      uVar1 = *param_1;
      puVar11 = &DAT_14ca96aa8;
      if (DAT_14ca96af8 != (undefined4 *)0x0) {
        puVar11 = DAT_14ca96af8;
      }
      if (((uint)puVar11[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) {
        return 0;
      }
      if ((int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] < 3) {
        return 0;
      }
    }
    if ((param_1[10] & 1) != 0) {
      return 0;
    }
  }
  if ((int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf] < 3) {
    return 0;
  }
  uVar8 = FUN_14027015e(5,param_1);
  return uVar8;
}



// FUNCTION 14175abf2 FUN_14175abf2 body=729 status=ok
// SIG undefined FUN_14175abf2(void)

undefined8 FUN_14175abf2(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  
  cVar5 = FUN_1400b7021();
  if (cVar5 == '\0') {
    return 0;
  }
  if (*(uint *)(param_1 + 0xc) < 2) {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bed18) && (FUN_144b3d300(&DAT_14c9bed18), DAT_14c9bed18 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bed10 = 0;
    }
    else {
      DAT_14c9bed10 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bed18);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bed28) && (FUN_144b3d300(&DAT_14c9bed28), DAT_14c9bed28 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bed20 = 0;
    }
    else {
      DAT_14c9bed20 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bed28);
  }
  uVar2 = *(uint *)(param_1 + 0xc);
  if ((((DAT_14c9bed20 != 0) &&
       (iVar3 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
       , iVar3 != 0x40000002)) && (iVar3 == 1)) && (DAT_14c86a9f8 != '\0')) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  if (((DAT_14c9bed10 != 0) &&
      (iVar3 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
      iVar3 != 0x40000002)) && ((iVar3 == 1 && (DAT_14c86a9f8 != '\0')))) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  lVar4 = DAT_14ca1c600;
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    if (uVar2 < 2) {
      return 0;
    }
    uVar1 = *param_1;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar10 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar10 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar10 = 1;
    }
    if (*(int *)(lVar4 + uVar10 * 4) < 1) {
      return 0;
    }
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 2) == 0) {
      return 0;
    }
  }
  if ((int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf] < 3) {
    return 0;
  }
  uVar9 = FUN_14027015e(5,param_1);
  return uVar9;
}



// FUNCTION 14175aecc FUN_14175aecc body=1016 status=ok
// SIG undefined FUN_14175aecc(void)

uint FUN_14175aecc(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  bool bVar11;
  
  cVar5 = FUN_1400b7021();
  if (cVar5 == '\0') {
    return 0;
  }
  if (*(uint *)(param_1 + 0xc) < 2) {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bed68) && (FUN_144b3d300(&DAT_14c9bed68), DAT_14c9bed68 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bed60 = 0;
    }
    else {
      DAT_14c9bed60 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bed68);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bed78) && (FUN_144b3d300(&DAT_14c9bed78), DAT_14c9bed78 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bed70 = 0;
    }
    else {
      DAT_14c9bed70 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bed78);
  }
  lVar4 = DAT_14c9bed70;
  uVar1 = param_1[10];
  uVar2 = *(uint *)(param_1 + 0xc);
  if (DAT_14c9bed70 == 0) {
    bVar11 = false;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    bVar11 = *(int *)(lVar4 + uVar9 * 4) != 0;
  }
  lVar4 = DAT_14c9bed60;
  if (DAT_14c9bed60 == 0) {
    bVar11 = true;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    bVar11 = (bool)(*(int *)(lVar4 + uVar9 * 4) != 0 | bVar11);
  }
  lVar4 = DAT_14ca1c600;
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    if (uVar2 < 2) {
      return 0;
    }
    uVar1 = *param_1;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    if (*(int *)(lVar4 + uVar9 * 4) < 1) {
      return 0;
    }
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 2) == 0) {
      return 0;
    }
  }
  else if ((uVar2 < 2) && ((uVar1 & 0x400) == 0)) {
    if (!bVar11) {
      uVar1 = *param_1;
      puVar10 = &DAT_14ca96aa8;
      if (DAT_14ca96af8 != (undefined4 *)0x0) {
        puVar10 = DAT_14ca96af8;
      }
      if (((uint)puVar10[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) {
        return 0;
      }
      if ((int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] < 3) {
        return 0;
      }
    }
    if ((param_1[10] & 1) != 0) {
      return 0;
    }
  }
  if (((2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) &&
      (cVar5 = FUN_14027015e(5,param_1), cVar5 != '\0')) &&
     ((cVar5 = FUN_140052d29(*param_1), cVar5 == '\0' &&
      (((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x29) & 1) != 0 &&
       ((*(ulonglong *)(param_1 + 0x1c) >> 0x35 & 1) != 0)))))) {
    return (uint)(*(ulonglong *)(param_1 + 0x1c) >> 0x17) & 1;
  }
  return 0;
}



// FUNCTION 14175b2c4 FUN_14175b2c4 body=776 status=ok
// SIG undefined FUN_14175b2c4(void)

uint FUN_14175b2c4(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  ulonglong uVar9;
  
  cVar5 = FUN_1400b7021();
  if (cVar5 == '\0') {
    return 0;
  }
  if (*(uint *)(param_1 + 0xc) < 2) {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bedb8) && (FUN_144b3d300(&DAT_14c9bedb8), DAT_14c9bedb8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bedb0 = 0;
    }
    else {
      DAT_14c9bedb0 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bedb8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bedc8) && (FUN_144b3d300(&DAT_14c9bedc8), DAT_14c9bedc8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bedc0 = 0;
    }
    else {
      DAT_14c9bedc0 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bedc8);
  }
  uVar2 = *(uint *)(param_1 + 0xc);
  if ((((DAT_14c9bedc0 != 0) &&
       (iVar3 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
       , iVar3 != 0x40000002)) && (iVar3 == 1)) && (DAT_14c86a9f8 != '\0')) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  if (((DAT_14c9bedb0 != 0) &&
      (iVar3 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
      iVar3 != 0x40000002)) && ((iVar3 == 1 && (DAT_14c86a9f8 != '\0')))) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  lVar4 = DAT_14ca1c600;
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    if (uVar2 < 2) {
      return 0;
    }
    uVar1 = *param_1;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    if (*(int *)(lVar4 + uVar9 * 4) < 1) {
      return 0;
    }
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 2) == 0) {
      return 0;
    }
  }
  if ((((2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) &&
       (cVar5 = FUN_14027015e(5,param_1), cVar5 != '\0')) &&
      (cVar5 = FUN_140052d29(*param_1), cVar5 == '\0')) &&
     (((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x29) & 1) != 0 &&
      ((*(ulonglong *)(param_1 + 0x1c) >> 0x35 & 1) != 0)))) {
    return (uint)(*(ulonglong *)(param_1 + 0x1c) >> 0x17) & 1;
  }
  return 0;
}



// FUNCTION 14175b5cc FUN_14175b5cc body=797 status=ok
// SIG undefined FUN_14175b5cc(void)

undefined8 FUN_14175b5cc(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  longlong lVar5;
  DWORD DVar6;
  DWORD DVar7;
  undefined8 uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  bool bVar12;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bf1d8) && (FUN_144b3d300(&DAT_14c9bf1d8), DAT_14c9bf1d8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar9 == (longlong *)0x0) {
      DAT_14c9bf1d0 = 0;
    }
    else {
      DAT_14c9bf1d0 = (**(code **)(*plVar9 + 0x68))(plVar9);
    }
    _Init_thread_footer(&DAT_14c9bf1d8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bf1e8) && (FUN_144b3d300(&DAT_14c9bf1e8), DAT_14c9bf1e8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar9 == (longlong *)0x0) {
      DAT_14c9bf1e0 = 0;
    }
    else {
      DAT_14c9bf1e0 = (**(code **)(*plVar9 + 0x68))(plVar9);
    }
    _Init_thread_footer(&DAT_14c9bf1e8);
  }
  lVar5 = DAT_14c9bf1e0;
  uVar1 = param_1[10];
  uVar2 = *(uint *)(param_1 + 0xc);
  if (DAT_14c9bf1e0 == 0) {
    bVar12 = false;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar10 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar10 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar10 = 1;
    }
    bVar12 = *(int *)(lVar5 + uVar10 * 4) != 0;
  }
  lVar5 = DAT_14c9bf1d0;
  bVar4 = (byte)(uVar1 >> 8);
  if (DAT_14c9bf1d0 == 0) {
    if ((bVar4 >> 2 & 1) != 0 || 1 < uVar2) goto LAB_14175b6e9;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar10 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar10 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar10 = 1;
    }
    if ((bVar4 >> 2 & 1) != 0 || 1 < uVar2) goto LAB_14175b6e9;
    if (*(int *)(lVar5 + uVar10 * 4) == 0 && !bVar12) {
      uVar1 = *param_1;
      puVar11 = &DAT_14ca96aa8;
      if (DAT_14ca96af8 != (undefined4 *)0x0) {
        puVar11 = DAT_14ca96af8;
      }
      if (((uint)puVar11[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) {
        return 0;
      }
      if ((int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] < 3) {
        return 0;
      }
    }
  }
  if ((param_1[10] & 1) != 0) {
    return 0;
  }
LAB_14175b6e9:
  if ((2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x2a) & 2) != 0)) {
    uVar8 = FUN_14027015e(5,param_1);
    return uVar8;
  }
  return 0;
}



// FUNCTION 14175b8ea FUN_14175b8ea body=529 status=ok
// SIG undefined FUN_14175b8ea(void)

undefined8 FUN_14175b8ea(ushort *param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9bf228) {
    FUN_144b3d300(&DAT_14c9bf228);
    if (DAT_14c9bf228 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar3 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
      if (plVar3 == (longlong *)0x0) {
        DAT_14c9bf220 = 0;
      }
      else {
        DAT_14c9bf220 = (**(code **)(*plVar3 + 0x68))(plVar3);
      }
      _Init_thread_footer(&DAT_14c9bf228);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9bf238) {
    FUN_144b3d300(&DAT_14c9bf238);
    if (DAT_14c9bf238 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar3 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))
                         (DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
      if (plVar3 == (longlong *)0x0) {
        DAT_14c9bf230 = 0;
      }
      else {
        DAT_14c9bf230 = (**(code **)(*plVar3 + 0x68))(plVar3);
      }
      _Init_thread_footer(&DAT_14c9bf238);
    }
  }
  if (DAT_14c9bf230 != 0) {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar1 != 0x40000002) && (iVar1 == 1)) && (DAT_14c86a9f8 != '\0')) {
      FUN_140ad26c0();
      GetCurrentThreadId();
    }
  }
  if (DAT_14c9bf220 != 0) {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar1 != 0x40000002) && (iVar1 == 1)) && (DAT_14c86a9f8 != '\0')) {
      FUN_140ad26c0();
      GetCurrentThreadId();
    }
  }
  if ((2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x2a) & 2) != 0)) {
    uVar2 = FUN_14027015e(5,param_1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 14175bafc FUN_14175bafc body=805 status=ok
// SIG undefined FUN_14175bafc(void)

undefined8 FUN_14175bafc(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  longlong lVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  bool bVar12;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bf278) && (FUN_144b3d300(&DAT_14c9bf278), DAT_14c9bf278 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bf270 = 0;
    }
    else {
      DAT_14c9bf270 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bf278);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bf288) && (FUN_144b3d300(&DAT_14c9bf288), DAT_14c9bf288 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bf280 = 0;
    }
    else {
      DAT_14c9bf280 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bf288);
  }
  lVar5 = DAT_14c9bf280;
  uVar1 = param_1[10];
  uVar2 = *(uint *)(param_1 + 0xc);
  if (DAT_14c9bf280 == 0) {
    bVar12 = false;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar10 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar10 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar10 = 1;
    }
    bVar12 = *(int *)(lVar5 + uVar10 * 4) != 0;
  }
  lVar5 = DAT_14c9bf270;
  bVar4 = (byte)(uVar1 >> 8);
  if (DAT_14c9bf270 == 0) {
    if ((bVar4 >> 2 & 1) != 0 || 1 < uVar2) goto LAB_14175bc1d;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar10 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar10 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar10 = 1;
    }
    if ((bVar4 >> 2 & 1) != 0 || 1 < uVar2) goto LAB_14175bc1d;
    if (*(int *)(lVar5 + uVar10 * 4) == 0 && !bVar12) {
      uVar1 = *param_1;
      puVar11 = &DAT_14ca96aa8;
      if (DAT_14ca96af8 != (undefined4 *)0x0) {
        puVar11 = DAT_14ca96af8;
      }
      if (((uint)puVar11[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) {
        return 0;
      }
      if ((int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] < 3) {
        return 0;
      }
    }
  }
  if ((param_1[10] & 1) != 0) {
    return 0;
  }
LAB_14175bc1d:
  if ((2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x2a) & 2) != 0)) {
    uVar9 = FUN_14027015e(5,param_1);
    return uVar9;
  }
  return 0;
}



// FUNCTION 14175be22 FUN_14175be22 body=540 status=ok
// SIG undefined FUN_14175be22(void)

undefined8 FUN_14175be22(ushort *param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9bf2c8) {
    FUN_144b3d300(&DAT_14c9bf2c8);
    if (DAT_14c9bf2c8 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar2 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
      if (plVar2 == (longlong *)0x0) {
        DAT_14c9bf2c0 = 0;
      }
      else {
        DAT_14c9bf2c0 = (**(code **)(*plVar2 + 0x68))(plVar2);
      }
      _Init_thread_footer(&DAT_14c9bf2c8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9bf2d8) {
    FUN_144b3d300(&DAT_14c9bf2d8);
    if (DAT_14c9bf2d8 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar2 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))
                         (DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
      if (plVar2 == (longlong *)0x0) {
        DAT_14c9bf2d0 = 0;
      }
      else {
        DAT_14c9bf2d0 = (**(code **)(*plVar2 + 0x68))(plVar2);
      }
      _Init_thread_footer(&DAT_14c9bf2d8);
    }
  }
  if (DAT_14c9bf2d0 != 0) {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar1 != 0x40000002) && (iVar1 == 1)) && (DAT_14c86a9f8 != '\0')) {
      FUN_140ad26c0();
      GetCurrentThreadId();
    }
  }
  if (DAT_14c9bf2c0 != 0) {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar1 != 0x40000002) && (iVar1 == 1)) && (DAT_14c86a9f8 != '\0')) {
      FUN_140ad26c0();
      GetCurrentThreadId();
    }
  }
  if ((2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x2a) & 2) != 0)) {
    uVar3 = FUN_14027015e(5,param_1);
    return uVar3;
  }
  return 0;
}



// FUNCTION 14175c03e FUN_14175c03e body=337 status=ok
// SIG undefined FUN_14175c03e(void)

undefined8 FUN_14175c03e(ushort *param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  DWORD DVar4;
  DWORD DVar5;
  longlong *plVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  bool bVar9;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9bf4a8) {
    FUN_144b3d300(&DAT_14c9bf4a8);
    if (DAT_14c9bf4a8 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar6 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))
                         (DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
      if (plVar6 == (longlong *)0x0) {
        DAT_14c9bf4a0 = 0;
      }
      else {
        DAT_14c9bf4a0 = (**(code **)(*plVar6 + 0x68))(plVar6);
      }
      _Init_thread_footer(&DAT_14c9bf4a8);
    }
  }
  lVar2 = DAT_14c9bf4a0;
  if (DAT_14c9bf4a0 == 0) {
    bVar9 = false;
  }
  else {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
      uVar8 = 0;
    }
    else if (iVar1 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      uVar8 = (ulonglong)(DVar4 != DVar5);
    }
    else {
      uVar8 = 1;
    }
    bVar9 = *(int *)(lVar2 + uVar8 * 4) != 0;
  }
  cVar3 = FUN_14027015e(6,param_1);
  if ((bVar9) || (cVar3 != '\0')) {
    uVar7 = CONCAT71((int7)((ulonglong)*param_1 * 0x3c >> 8),
                     2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]);
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}



// FUNCTION 14175c190 FUN_14175c190 body=942 status=ok
// SIG undefined FUN_14175c190(void)

undefined8 FUN_14175c190(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  DWORD DVar5;
  DWORD DVar6;
  undefined8 uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  bool bVar11;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bf678) && (FUN_144b3d300(&DAT_14c9bf678), DAT_14c9bf678 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bf670 = 0;
    }
    else {
      DAT_14c9bf670 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bf678);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bf688) && (FUN_144b3d300(&DAT_14c9bf688), DAT_14c9bf688 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bf680 = 0;
    }
    else {
      DAT_14c9bf680 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bf688);
  }
  lVar4 = DAT_14c9bf680;
  uVar1 = param_1[10];
  uVar2 = *(uint *)(param_1 + 0xc);
  if (DAT_14c9bf680 == 0) {
    bVar11 = false;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar5 != DVar6);
    }
    else {
      uVar9 = 1;
    }
    bVar11 = *(int *)(lVar4 + uVar9 * 4) != 0;
  }
  lVar4 = DAT_14c9bf670;
  if (DAT_14c9bf670 == 0) {
    bVar11 = true;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar5 != DVar6);
    }
    else {
      uVar9 = 1;
    }
    bVar11 = (bool)(*(int *)(lVar4 + uVar9 * 4) != 0 | bVar11);
  }
  lVar4 = DAT_14ca1c600;
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    if (uVar2 < 2) {
      return 0;
    }
    uVar1 = *param_1;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar5 != DVar6);
    }
    else {
      uVar9 = 1;
    }
    if (*(int *)(lVar4 + uVar9 * 4) < 1) {
      return 0;
    }
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 2) == 0) {
      return 0;
    }
  }
  else if ((uVar2 < 2) && ((uVar1 & 0x400) == 0)) {
    if (!bVar11) {
      uVar1 = *param_1;
      puVar10 = &DAT_14ca96aa8;
      if (DAT_14ca96af8 != (undefined4 *)0x0) {
        puVar10 = DAT_14ca96af8;
      }
      if (((uint)puVar10[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) {
        return 0;
      }
      if ((int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] < 3) {
        return 0;
      }
    }
    if ((param_1[10] & 1) != 0) {
      return 0;
    }
  }
  if ((int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf] < 3) {
    return 0;
  }
  uVar7 = FUN_14027015e(6,param_1);
  return uVar7;
}



// FUNCTION 14175c53e FUN_14175c53e body=706 status=ok
// SIG undefined FUN_14175c53e(void)

undefined8 FUN_14175c53e(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  DWORD DVar5;
  DWORD DVar6;
  longlong *plVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bf6c8) && (FUN_144b3d300(&DAT_14c9bf6c8), DAT_14c9bf6c8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar7 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar7 == (longlong *)0x0) {
      DAT_14c9bf6c0 = 0;
    }
    else {
      DAT_14c9bf6c0 = (**(code **)(*plVar7 + 0x68))(plVar7);
    }
    _Init_thread_footer(&DAT_14c9bf6c8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bf6d8) && (FUN_144b3d300(&DAT_14c9bf6d8), DAT_14c9bf6d8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar7 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar7 == (longlong *)0x0) {
      DAT_14c9bf6d0 = 0;
    }
    else {
      DAT_14c9bf6d0 = (**(code **)(*plVar7 + 0x68))(plVar7);
    }
    _Init_thread_footer(&DAT_14c9bf6d8);
  }
  uVar2 = *(uint *)(param_1 + 0xc);
  if ((((DAT_14c9bf6d0 != 0) &&
       (iVar3 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
       , iVar3 != 0x40000002)) && (iVar3 == 1)) && (DAT_14c86a9f8 != '\0')) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  if (((DAT_14c9bf6c0 != 0) &&
      (iVar3 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
      iVar3 != 0x40000002)) && ((iVar3 == 1 && (DAT_14c86a9f8 != '\0')))) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  lVar4 = DAT_14ca1c600;
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    if (uVar2 < 2) {
      return 0;
    }
    uVar1 = *param_1;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar5 != DVar6);
    }
    else {
      uVar9 = 1;
    }
    if (*(int *)(lVar4 + uVar9 * 4) < 1) {
      return 0;
    }
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 2) == 0) {
      return 0;
    }
  }
  if ((int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf] < 3) {
    return 0;
  }
  uVar8 = FUN_14027015e(6,param_1);
  return uVar8;
}



// FUNCTION 14175c800 FUN_14175c800 body=994 status=ok
// SIG undefined FUN_14175c800(void)

uint FUN_14175c800(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  bool bVar11;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bf718) && (FUN_144b3d300(&DAT_14c9bf718), DAT_14c9bf718 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bf710 = 0;
    }
    else {
      DAT_14c9bf710 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bf718);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bf728) && (FUN_144b3d300(&DAT_14c9bf728), DAT_14c9bf728 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bf720 = 0;
    }
    else {
      DAT_14c9bf720 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bf728);
  }
  lVar4 = DAT_14c9bf720;
  uVar1 = param_1[10];
  uVar2 = *(uint *)(param_1 + 0xc);
  if (DAT_14c9bf720 == 0) {
    bVar11 = false;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    bVar11 = *(int *)(lVar4 + uVar9 * 4) != 0;
  }
  lVar4 = DAT_14c9bf710;
  if (DAT_14c9bf710 == 0) {
    bVar11 = true;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    bVar11 = (bool)(*(int *)(lVar4 + uVar9 * 4) != 0 | bVar11);
  }
  lVar4 = DAT_14ca1c600;
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    if (uVar2 < 2) {
      return 0;
    }
    uVar1 = *param_1;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    if (*(int *)(lVar4 + uVar9 * 4) < 1) {
      return 0;
    }
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 2) == 0) {
      return 0;
    }
  }
  else if ((uVar2 < 2) && ((uVar1 & 0x400) == 0)) {
    if (!bVar11) {
      uVar1 = *param_1;
      puVar10 = &DAT_14ca96aa8;
      if (DAT_14ca96af8 != (undefined4 *)0x0) {
        puVar10 = DAT_14ca96af8;
      }
      if (((uint)puVar10[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) {
        return 0;
      }
      if ((int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] < 3) {
        return 0;
      }
    }
    if ((param_1[10] & 1) != 0) {
      return 0;
    }
  }
  if ((((2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) &&
       (cVar5 = FUN_14027015e(6,param_1), cVar5 != '\0')) &&
      (cVar5 = FUN_140052d29(*param_1), cVar5 == '\0')) &&
     (((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x29) & 1) != 0 &&
      ((*(ulonglong *)(param_1 + 0x1c) >> 0x35 & 1) != 0)))) {
    return (uint)(*(ulonglong *)(param_1 + 0x1c) >> 0x17) & 1;
  }
  return 0;
}



// FUNCTION 14175cbe2 FUN_14175cbe2 body=749 status=ok
// SIG undefined FUN_14175cbe2(void)

uint FUN_14175cbe2(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  ulonglong uVar9;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bf768) && (FUN_144b3d300(&DAT_14c9bf768), DAT_14c9bf768 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bf760 = 0;
    }
    else {
      DAT_14c9bf760 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bf768);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bf778) && (FUN_144b3d300(&DAT_14c9bf778), DAT_14c9bf778 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bf770 = 0;
    }
    else {
      DAT_14c9bf770 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bf778);
  }
  uVar2 = *(uint *)(param_1 + 0xc);
  if ((((DAT_14c9bf770 != 0) &&
       (iVar3 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
       , iVar3 != 0x40000002)) && (iVar3 == 1)) && (DAT_14c86a9f8 != '\0')) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  if (((DAT_14c9bf760 != 0) &&
      (iVar3 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
      iVar3 != 0x40000002)) && ((iVar3 == 1 && (DAT_14c86a9f8 != '\0')))) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  lVar4 = DAT_14ca1c600;
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    if (uVar2 < 2) {
      return 0;
    }
    uVar1 = *param_1;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    if (*(int *)(lVar4 + uVar9 * 4) < 1) {
      return 0;
    }
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 2) == 0) {
      return 0;
    }
  }
  if ((((2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) &&
       (cVar5 = FUN_14027015e(6,param_1), cVar5 != '\0')) &&
      (cVar5 = FUN_140052d29(*param_1), cVar5 == '\0')) &&
     (((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x29) & 1) != 0 &&
      ((*(ulonglong *)(param_1 + 0x1c) >> 0x35 & 1) != 0)))) {
    return (uint)(*(ulonglong *)(param_1 + 0x1c) >> 0x17) & 1;
  }
  return 0;
}



// FUNCTION 14175ced0 FUN_14175ced0 body=963 status=ok
// SIG undefined FUN_14175ced0(void)

undefined8 FUN_14175ced0(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  DWORD DVar7;
  undefined8 uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  bool bVar12;
  
  cVar5 = FUN_1400b7021();
  if (cVar5 == '\0') {
    return 0;
  }
  if (*(uint *)(param_1 + 0xc) < 2) {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bf7b8) && (FUN_144b3d300(&DAT_14c9bf7b8), DAT_14c9bf7b8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar9 == (longlong *)0x0) {
      DAT_14c9bf7b0 = 0;
    }
    else {
      DAT_14c9bf7b0 = (**(code **)(*plVar9 + 0x68))(plVar9);
    }
    _Init_thread_footer(&DAT_14c9bf7b8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bf7c8) && (FUN_144b3d300(&DAT_14c9bf7c8), DAT_14c9bf7c8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar9 == (longlong *)0x0) {
      DAT_14c9bf7c0 = 0;
    }
    else {
      DAT_14c9bf7c0 = (**(code **)(*plVar9 + 0x68))(plVar9);
    }
    _Init_thread_footer(&DAT_14c9bf7c8);
  }
  lVar4 = DAT_14c9bf7c0;
  uVar1 = param_1[10];
  uVar2 = *(uint *)(param_1 + 0xc);
  if (DAT_14c9bf7c0 == 0) {
    bVar12 = false;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar10 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar10 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar10 = 1;
    }
    bVar12 = *(int *)(lVar4 + uVar10 * 4) != 0;
  }
  lVar4 = DAT_14c9bf7b0;
  if (DAT_14c9bf7b0 == 0) {
    bVar12 = true;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar10 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar10 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar10 = 1;
    }
    bVar12 = (bool)(*(int *)(lVar4 + uVar10 * 4) != 0 | bVar12);
  }
  lVar4 = DAT_14ca1c600;
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    if (uVar2 < 2) {
      return 0;
    }
    uVar1 = *param_1;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar10 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar10 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar10 = 1;
    }
    if (*(int *)(lVar4 + uVar10 * 4) < 1) {
      return 0;
    }
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 2) == 0) {
      return 0;
    }
  }
  else if ((uVar2 < 2) && ((uVar1 & 0x400) == 0)) {
    if (!bVar12) {
      uVar1 = *param_1;
      puVar11 = &DAT_14ca96aa8;
      if (DAT_14ca96af8 != (undefined4 *)0x0) {
        puVar11 = DAT_14ca96af8;
      }
      if (((uint)puVar11[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) {
        return 0;
      }
      if ((int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] < 3) {
        return 0;
      }
    }
    if ((param_1[10] & 1) != 0) {
      return 0;
    }
  }
  if ((int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf] < 3) {
    return 0;
  }
  uVar8 = FUN_14027015e(6,param_1);
  return uVar8;
}



// FUNCTION 14175d294 FUN_14175d294 body=729 status=ok
// SIG undefined FUN_14175d294(void)

undefined8 FUN_14175d294(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  
  cVar5 = FUN_1400b7021();
  if (cVar5 == '\0') {
    return 0;
  }
  if (*(uint *)(param_1 + 0xc) < 2) {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bf808) && (FUN_144b3d300(&DAT_14c9bf808), DAT_14c9bf808 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bf800 = 0;
    }
    else {
      DAT_14c9bf800 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bf808);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bf818) && (FUN_144b3d300(&DAT_14c9bf818), DAT_14c9bf818 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bf810 = 0;
    }
    else {
      DAT_14c9bf810 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bf818);
  }
  uVar2 = *(uint *)(param_1 + 0xc);
  if ((((DAT_14c9bf810 != 0) &&
       (iVar3 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
       , iVar3 != 0x40000002)) && (iVar3 == 1)) && (DAT_14c86a9f8 != '\0')) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  if (((DAT_14c9bf800 != 0) &&
      (iVar3 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
      iVar3 != 0x40000002)) && ((iVar3 == 1 && (DAT_14c86a9f8 != '\0')))) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  lVar4 = DAT_14ca1c600;
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    if (uVar2 < 2) {
      return 0;
    }
    uVar1 = *param_1;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar10 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar10 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar10 = 1;
    }
    if (*(int *)(lVar4 + uVar10 * 4) < 1) {
      return 0;
    }
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 2) == 0) {
      return 0;
    }
  }
  if ((int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf] < 3) {
    return 0;
  }
  uVar9 = FUN_14027015e(6,param_1);
  return uVar9;
}



// FUNCTION 14175d56e FUN_14175d56e body=1016 status=ok
// SIG undefined FUN_14175d56e(void)

uint FUN_14175d56e(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  bool bVar11;
  
  cVar5 = FUN_1400b7021();
  if (cVar5 == '\0') {
    return 0;
  }
  if (*(uint *)(param_1 + 0xc) < 2) {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bf858) && (FUN_144b3d300(&DAT_14c9bf858), DAT_14c9bf858 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bf850 = 0;
    }
    else {
      DAT_14c9bf850 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bf858);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bf868) && (FUN_144b3d300(&DAT_14c9bf868), DAT_14c9bf868 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bf860 = 0;
    }
    else {
      DAT_14c9bf860 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bf868);
  }
  lVar4 = DAT_14c9bf860;
  uVar1 = param_1[10];
  uVar2 = *(uint *)(param_1 + 0xc);
  if (DAT_14c9bf860 == 0) {
    bVar11 = false;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    bVar11 = *(int *)(lVar4 + uVar9 * 4) != 0;
  }
  lVar4 = DAT_14c9bf850;
  if (DAT_14c9bf850 == 0) {
    bVar11 = true;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    bVar11 = (bool)(*(int *)(lVar4 + uVar9 * 4) != 0 | bVar11);
  }
  lVar4 = DAT_14ca1c600;
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    if (uVar2 < 2) {
      return 0;
    }
    uVar1 = *param_1;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    if (*(int *)(lVar4 + uVar9 * 4) < 1) {
      return 0;
    }
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 2) == 0) {
      return 0;
    }
  }
  else if ((uVar2 < 2) && ((uVar1 & 0x400) == 0)) {
    if (!bVar11) {
      uVar1 = *param_1;
      puVar10 = &DAT_14ca96aa8;
      if (DAT_14ca96af8 != (undefined4 *)0x0) {
        puVar10 = DAT_14ca96af8;
      }
      if (((uint)puVar10[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) {
        return 0;
      }
      if ((int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] < 3) {
        return 0;
      }
    }
    if ((param_1[10] & 1) != 0) {
      return 0;
    }
  }
  if (((2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) &&
      (cVar5 = FUN_14027015e(6,param_1), cVar5 != '\0')) &&
     ((cVar5 = FUN_140052d29(*param_1), cVar5 == '\0' &&
      (((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x29) & 1) != 0 &&
       ((*(ulonglong *)(param_1 + 0x1c) >> 0x35 & 1) != 0)))))) {
    return (uint)(*(ulonglong *)(param_1 + 0x1c) >> 0x17) & 1;
  }
  return 0;
}



// FUNCTION 14175d966 FUN_14175d966 body=776 status=ok
// SIG undefined FUN_14175d966(void)

uint FUN_14175d966(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  ulonglong uVar9;
  
  cVar5 = FUN_1400b7021();
  if (cVar5 == '\0') {
    return 0;
  }
  if (*(uint *)(param_1 + 0xc) < 2) {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bf8a8) && (FUN_144b3d300(&DAT_14c9bf8a8), DAT_14c9bf8a8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bf8a0 = 0;
    }
    else {
      DAT_14c9bf8a0 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bf8a8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bf8b8) && (FUN_144b3d300(&DAT_14c9bf8b8), DAT_14c9bf8b8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bf8b0 = 0;
    }
    else {
      DAT_14c9bf8b0 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bf8b8);
  }
  uVar2 = *(uint *)(param_1 + 0xc);
  if ((((DAT_14c9bf8b0 != 0) &&
       (iVar3 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
       , iVar3 != 0x40000002)) && (iVar3 == 1)) && (DAT_14c86a9f8 != '\0')) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  if (((DAT_14c9bf8a0 != 0) &&
      (iVar3 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
      iVar3 != 0x40000002)) && ((iVar3 == 1 && (DAT_14c86a9f8 != '\0')))) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  lVar4 = DAT_14ca1c600;
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    if (uVar2 < 2) {
      return 0;
    }
    uVar1 = *param_1;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar9 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    if (*(int *)(lVar4 + uVar9 * 4) < 1) {
      return 0;
    }
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 2) == 0) {
      return 0;
    }
  }
  if ((((2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) &&
       (cVar5 = FUN_14027015e(6,param_1), cVar5 != '\0')) &&
      (cVar5 = FUN_140052d29(*param_1), cVar5 == '\0')) &&
     (((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x29) & 1) != 0 &&
      ((*(ulonglong *)(param_1 + 0x1c) >> 0x35 & 1) != 0)))) {
    return (uint)(*(ulonglong *)(param_1 + 0x1c) >> 0x17) & 1;
  }
  return 0;
}



// FUNCTION 14175dc6e FUN_14175dc6e body=797 status=ok
// SIG undefined FUN_14175dc6e(void)

undefined8 FUN_14175dc6e(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  longlong lVar5;
  DWORD DVar6;
  DWORD DVar7;
  undefined8 uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  bool bVar12;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bfcc8) && (FUN_144b3d300(&DAT_14c9bfcc8), DAT_14c9bfcc8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar9 == (longlong *)0x0) {
      DAT_14c9bfcc0 = 0;
    }
    else {
      DAT_14c9bfcc0 = (**(code **)(*plVar9 + 0x68))(plVar9);
    }
    _Init_thread_footer(&DAT_14c9bfcc8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bfcd8) && (FUN_144b3d300(&DAT_14c9bfcd8), DAT_14c9bfcd8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar9 == (longlong *)0x0) {
      DAT_14c9bfcd0 = 0;
    }
    else {
      DAT_14c9bfcd0 = (**(code **)(*plVar9 + 0x68))(plVar9);
    }
    _Init_thread_footer(&DAT_14c9bfcd8);
  }
  lVar5 = DAT_14c9bfcd0;
  uVar1 = param_1[10];
  uVar2 = *(uint *)(param_1 + 0xc);
  if (DAT_14c9bfcd0 == 0) {
    bVar12 = false;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar10 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar10 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar10 = 1;
    }
    bVar12 = *(int *)(lVar5 + uVar10 * 4) != 0;
  }
  lVar5 = DAT_14c9bfcc0;
  bVar4 = (byte)(uVar1 >> 8);
  if (DAT_14c9bfcc0 == 0) {
    if ((bVar4 >> 2 & 1) != 0 || 1 < uVar2) goto LAB_14175dd8b;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar10 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar10 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar10 = 1;
    }
    if ((bVar4 >> 2 & 1) != 0 || 1 < uVar2) goto LAB_14175dd8b;
    if (*(int *)(lVar5 + uVar10 * 4) == 0 && !bVar12) {
      uVar1 = *param_1;
      puVar11 = &DAT_14ca96aa8;
      if (DAT_14ca96af8 != (undefined4 *)0x0) {
        puVar11 = DAT_14ca96af8;
      }
      if (((uint)puVar11[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) {
        return 0;
      }
      if ((int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] < 3) {
        return 0;
      }
    }
  }
  if ((param_1[10] & 1) != 0) {
    return 0;
  }
LAB_14175dd8b:
  if ((2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x2a) & 2) != 0)) {
    uVar8 = FUN_14027015e(6,param_1);
    return uVar8;
  }
  return 0;
}



// FUNCTION 14175df8c FUN_14175df8c body=529 status=ok
// SIG undefined FUN_14175df8c(void)

undefined8 FUN_14175df8c(ushort *param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9bfd18) {
    FUN_144b3d300(&DAT_14c9bfd18);
    if (DAT_14c9bfd18 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar3 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
      if (plVar3 == (longlong *)0x0) {
        DAT_14c9bfd10 = 0;
      }
      else {
        DAT_14c9bfd10 = (**(code **)(*plVar3 + 0x68))(plVar3);
      }
      _Init_thread_footer(&DAT_14c9bfd18);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9bfd28) {
    FUN_144b3d300(&DAT_14c9bfd28);
    if (DAT_14c9bfd28 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar3 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))
                         (DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
      if (plVar3 == (longlong *)0x0) {
        DAT_14c9bfd20 = 0;
      }
      else {
        DAT_14c9bfd20 = (**(code **)(*plVar3 + 0x68))(plVar3);
      }
      _Init_thread_footer(&DAT_14c9bfd28);
    }
  }
  if (DAT_14c9bfd20 != 0) {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar1 != 0x40000002) && (iVar1 == 1)) && (DAT_14c86a9f8 != '\0')) {
      FUN_140ad26c0();
      GetCurrentThreadId();
    }
  }
  if (DAT_14c9bfd10 != 0) {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar1 != 0x40000002) && (iVar1 == 1)) && (DAT_14c86a9f8 != '\0')) {
      FUN_140ad26c0();
      GetCurrentThreadId();
    }
  }
  if ((2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x2a) & 2) != 0)) {
    uVar2 = FUN_14027015e(6,param_1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 14175e19e FUN_14175e19e body=805 status=ok
// SIG undefined FUN_14175e19e(void)

undefined8 FUN_14175e19e(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  longlong lVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  bool bVar12;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bfd68) && (FUN_144b3d300(&DAT_14c9bfd68), DAT_14c9bfd68 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bfd60 = 0;
    }
    else {
      DAT_14c9bfd60 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bfd68);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9bfd78) && (FUN_144b3d300(&DAT_14c9bfd78), DAT_14c9bfd78 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14c9bfd70 = 0;
    }
    else {
      DAT_14c9bfd70 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14c9bfd78);
  }
  lVar5 = DAT_14c9bfd70;
  uVar1 = param_1[10];
  uVar2 = *(uint *)(param_1 + 0xc);
  if (DAT_14c9bfd70 == 0) {
    bVar12 = false;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar10 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar10 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar10 = 1;
    }
    bVar12 = *(int *)(lVar5 + uVar10 * 4) != 0;
  }
  lVar5 = DAT_14c9bfd60;
  bVar4 = (byte)(uVar1 >> 8);
  if (DAT_14c9bfd60 == 0) {
    if ((bVar4 >> 2 & 1) != 0 || 1 < uVar2) goto LAB_14175e2bf;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar10 = 0;
    }
    else if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar10 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar10 = 1;
    }
    if ((bVar4 >> 2 & 1) != 0 || 1 < uVar2) goto LAB_14175e2bf;
    if (*(int *)(lVar5 + uVar10 * 4) == 0 && !bVar12) {
      uVar1 = *param_1;
      puVar11 = &DAT_14ca96aa8;
      if (DAT_14ca96af8 != (undefined4 *)0x0) {
        puVar11 = DAT_14ca96af8;
      }
      if (((uint)puVar11[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) {
        return 0;
      }
      if ((int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] < 3) {
        return 0;
      }
    }
  }
  if ((param_1[10] & 1) != 0) {
    return 0;
  }
LAB_14175e2bf:
  if ((2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x2a) & 2) != 0)) {
    uVar9 = FUN_14027015e(6,param_1);
    return uVar9;
  }
  return 0;
}



// FUNCTION 14175e4c4 FUN_14175e4c4 body=540 status=ok
// SIG undefined FUN_14175e4c4(void)

undefined8 FUN_14175e4c4(ushort *param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9bfdb8) {
    FUN_144b3d300(&DAT_14c9bfdb8);
    if (DAT_14c9bfdb8 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar2 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
      if (plVar2 == (longlong *)0x0) {
        DAT_14c9bfdb0 = 0;
      }
      else {
        DAT_14c9bfdb0 = (**(code **)(*plVar2 + 0x68))(plVar2);
      }
      _Init_thread_footer(&DAT_14c9bfdb8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9bfdc8) {
    FUN_144b3d300(&DAT_14c9bfdc8);
    if (DAT_14c9bfdc8 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar2 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))
                         (DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
      if (plVar2 == (longlong *)0x0) {
        DAT_14c9bfdc0 = 0;
      }
      else {
        DAT_14c9bfdc0 = (**(code **)(*plVar2 + 0x68))(plVar2);
      }
      _Init_thread_footer(&DAT_14c9bfdc8);
    }
  }
  if (DAT_14c9bfdc0 != 0) {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar1 != 0x40000002) && (iVar1 == 1)) && (DAT_14c86a9f8 != '\0')) {
      FUN_140ad26c0();
      GetCurrentThreadId();
    }
  }
  if (DAT_14c9bfdb0 != 0) {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar1 != 0x40000002) && (iVar1 == 1)) && (DAT_14c86a9f8 != '\0')) {
      FUN_140ad26c0();
      GetCurrentThreadId();
    }
  }
  if ((2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x2a) & 2) != 0)) {
    uVar3 = FUN_14027015e(6,param_1);
    return uVar3;
  }
  return 0;
}



// FUNCTION 14175e6ed FUN_14175e6ed body=183 status=ok
// SIG undefined FUN_14175e6ed(void)

void FUN_14175e6ed(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  
  if ((longlong *)param_1[2] == (longlong *)0x0) {
    fVar3 = 0.0;
  }
  else {
    fVar3 = (float)(**(code **)(*(longlong *)param_1[2] + 0x350))();
    fVar3 = logf((float)(int)fVar3);
    fVar3 = fVar3 * 1.442695 + 1.0;
  }
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  fVar4 = -4.0 / fVar3 + 1.0;
  *(float *)(param_2 + 2) = fVar4;
  *(float *)((longlong)param_2 + 0x14) = (fVar3 + -1.0) * fVar4;
  *(float *)(param_2 + 3) = fVar3 + -4.0;
  *(float *)((longlong)param_2 + 0x1c) = fVar3;
  lVar2 = DAT_14ca8c078;
  if (param_1[2] != 0) {
    lVar2 = FUN_1447b4020();
  }
  param_2[4] = *(undefined8 *)(lVar2 + 0x10);
  param_2[5] = *(undefined8 *)(lVar2 + 0x18);
  return;
}



// FUNCTION 14175e7a4 FUN_14175e7a4 body=93 status=ok
// SIG undefined FUN_14175e7a4(void)

void FUN_14175e7a4(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  uint *puVar3;
  longlong lVar4;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    *(longlong *)(lVar2 + 0x40) = lVar2 + 0x10000;
    puVar3 = (uint *)*param_1;
    LOCK();
    uVar1 = *puVar3;
    *puVar3 = *puVar3 + puVar3[0x12] + 1;
    UNLOCK();
    if ((uVar1 ^ puVar3[0x12]) == 0xffffffff) {
      lVar2 = *param_1;
      lVar4 = DAT_14c872d30;
      if (DAT_14c872d30 == 0) {
        lVar4 = FUN_145bdc178();
      }
      FUN_140028df4(lVar4,lVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14175e802 FUN_14175e802 body=201 status=ok
// SIG undefined FUN_14175e802(void)

undefined8 * FUN_14175e802(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  *param_1 = &PTR_FUN_14a1fb9b8;
  lVar4 = param_1[6];
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
  if (param_1[4] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[4] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14175e8cc FUN_14175e8cc body=93 status=ok
// SIG undefined FUN_14175e8cc(void)

void FUN_14175e8cc(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
    }
    else {
      uVar3 = uVar1 + (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar2 = 0x7fffffff;
    if ((int)uVar1 <= (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)(param_1 + 0xc) = uVar2;
    FUN_140082c84();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14175e92a FUN_14175e92a body=38 status=ok
// SIG undefined FUN_14175e92a(void)

void FUN_14175e92a(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1400b5938(param_1);
    param_1 = param_1 + 0x10;
  }
  return;
}



// FUNCTION 14175e950 FUN_14175e950 body=40 status=ok
// SIG undefined FUN_14175e950(void)

undefined8 FUN_14175e950(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14175e978 FUN_14175e978 body=201 status=ok
// SIG undefined FUN_14175e978(void)

undefined8 * FUN_14175e978(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  *param_1 = &PTR_FUN_14a1fb9b8;
  lVar4 = param_1[6];
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
  if (param_1[4] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[4] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14175ea42 FUN_14175ea42 body=60 status=ok
// SIG undefined FUN_14175ea42(void)

uint FUN_14175ea42(undefined2 *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 8) == 1) {
    uVar1 = FUN_140e6dc96(*param_1,param_1 + 8);
    uVar2 = 1;
    if (((uVar1 & 0x600) == 0) && (((uint)uVar1 >> 0xb & 1) == 0)) {
      uVar2 = (uint)(uVar1 >> 0xc) & 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 14175ea7e FUN_14175ea7e body=40 status=ok
// SIG undefined FUN_14175ea7e(void)

uint FUN_14175ea7e(undefined2 *param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 8) == 1) {
    uVar1 = FUN_140e6dc96(*param_1,param_1 + 8);
    uVar1 = uVar1 >> 0xd & 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 14175eaa6 FUN_14175eaa6 body=40 status=ok
// SIG undefined FUN_14175eaa6(void)

uint FUN_14175eaa6(undefined2 *param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 8) == 1) {
    uVar1 = FUN_140e6dc96(*param_1,param_1 + 8);
    uVar1 = uVar1 >> 0xe & 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 14175eace FUN_14175eace body=1054 status=ok
// SIG undefined FUN_14175eace(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong *
FUN_14175eace(ulonglong *param_1,longlong param_2,undefined8 param_3,undefined4 param_4,byte param_5
             )

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  longlong local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  ulonglong local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  uint local_64;
  undefined4 local_60;
  int local_5c;
  int local_58;
  undefined4 local_54;
  undefined2 local_50;
  byte local_4e;
  undefined2 local_4d;
  undefined1 local_4b;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar5 = DAT_14c761ae8 - 1;
  if (2 < uVar5) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 3) = 0x2020002;
    goto LAB_14175ede0;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0x2020002;
  uVar6 = DAT_14ca4af88;
  cVar3 = FUN_14479fe53(param_4,1,1);
  if ((((cVar3 == '\0') || (DAT_14ca84e22 != '\x01')) || (DAT_14ca84e1f != '\x01')) ||
     (DAT_14c760874 == 0)) {
LAB_14175eb5d:
    local_80 = (*(byte *)(DAT_14c9c22a0 + 1) ^ 1) << 0x1a | uVar6 | 0xc;
  }
  else {
    cVar3 = FUN_14366adaf();
    if (cVar3 == '\0') goto LAB_14175eb5d;
    local_80 = uVar6 | 0x2000c;
  }
  local_88 = DAT_14ca850c0;
  local_98 = DAT_14ca850b0;
  uStack_94 = _DAT_14ca850b4;
  uStack_90 = _DAT_14ca850b8;
  uStack_8c = uRam000000014ca850bc;
  local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_4e = param_5;
  local_4d = 0xb;
  local_54 = CONCAT22(param_5 + 1,1);
  local_50 = 0x101;
  local_78 = DAT_14ca850b0;
  uStack_74 = _DAT_14ca850b4;
  uStack_70 = _DAT_14ca850b8;
  uStack_6c = uRam000000014ca850bc;
  local_68 = DAT_14ca850c0;
  local_60 = 0;
  local_4b = 0xff;
  iVar10 = (int)param_3;
  local_5c = DAT_14ca84e40;
  if (iVar10 < DAT_14ca84e40) {
    local_5c = iVar10;
  }
  if (local_5c < 2) {
    local_5c = 1;
  }
  iVar7 = (int)((ulonglong)param_3 >> 0x20);
  local_58 = DAT_14ca84e40;
  if (iVar7 < DAT_14ca84e40) {
    local_58 = iVar7;
  }
  if (local_58 < 2) {
    local_58 = 1;
  }
  plVar1 = (longlong *)(param_2 + 0x70);
  uVar9 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar6 = uVar9 + 0x120;
  local_a8 = plVar1;
  if (*(ulonglong *)(param_2 + 0x78) < uVar6) {
    FUN_140023dd8(plVar1,0x128);
    uVar9 = *plVar1 + 7U & 0xfffffffffffffff8;
    uVar6 = uVar9 + 0x120;
  }
  local_a0 = param_2 + 0x178;
  *(ulonglong *)(param_2 + 0x70) = uVar6;
  FUN_1456bbb8c(uVar9,L"CustomDepth",&local_80,0);
  iVar2 = *(int *)(param_2 + 0x180);
  *(uint *)(param_2 + 0x180) = iVar2 + 1U;
  if (*(uint *)(param_2 + 0x184) < iVar2 + 1U) {
    FUN_14472c0f6(local_a0,iVar2);
  }
  *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar2 * 8) = uVar9;
  *(int *)(uVar9 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
  *param_1 = uVar9;
  *(undefined1 *)((longlong)param_1 + 0x1a) = 2;
  *(char *)((longlong)param_1 + 0x1b) = (char)(0x20000 >> ((char)uVar5 * '\b' & 0x1fU));
  cVar3 = FUN_14479fe53(param_4,1,1);
  uVar6 = 9;
  if (((cVar3 != '\0') && (DAT_14ca84e22 == '\x01')) &&
     ((DAT_14ca84e1f == '\x01' && (DAT_14c760874 != 0)))) {
    bVar4 = FUN_14366adaf();
    uVar6 = (ulonglong)bVar4 << 0x11 | 9;
  }
  plVar1 = local_a8;
  if (DAT_14cafe420 == '\x01') {
    local_68 = DAT_14ca83a40;
    local_78 = DAT_14ca83a30;
    uStack_74 = DAT_14ca83a34;
    uStack_70 = DAT_14ca83a38;
    uStack_6c = DAT_14ca83a3c;
    local_4e = 0;
    local_5c = DAT_14ca84e40;
    if (iVar10 < DAT_14ca84e40) {
      local_5c = iVar10;
    }
    if (local_5c < 2) {
      local_5c = 1;
    }
    local_58 = DAT_14ca84e40;
    if (iVar7 < DAT_14ca84e40) {
      local_58 = iVar7;
    }
    local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_4d = 9;
    local_54 = 0x10001;
    local_50 = 0x101;
    local_60 = 0;
    local_4b = 0xff;
    if (local_58 < 2) {
      local_58 = 1;
    }
    uVar8 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar9 = uVar8 + 0x120;
    local_80 = uVar6;
    if (*(ulonglong *)(param_2 + 0x78) < uVar9) {
      FUN_140023dd8(local_a8,0x128);
      uVar8 = *plVar1 + 7U & 0xfffffffffffffff8;
      uVar9 = uVar8 + 0x120;
    }
    *(ulonglong *)(param_2 + 0x70) = uVar9;
    FUN_1456bbb8c(uVar8,L"CustomColor",&local_80,0);
    iVar10 = *(int *)(param_2 + 0x180);
    *(uint *)(param_2 + 0x180) = iVar10 + 1U;
    if (*(uint *)(param_2 + 0x184) < iVar10 + 1U) {
      FUN_14472c0f6(local_a0,iVar10);
    }
    *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar10 * 8) = uVar8;
    *(int *)(uVar8 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
    param_1[2] = uVar8;
  }
LAB_14175ede0:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14175eeee FUN_14175eeee body=60 status=ok
// SIG undefined FUN_14175eeee(void)

uint FUN_14175eeee(undefined2 *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 8) == 1) {
    uVar1 = FUN_140e6dc96(*param_1,param_1 + 8);
    uVar2 = 1;
    if (((uVar1 & 0x600) == 0) && (((uint)uVar1 >> 0xb & 1) == 0)) {
      uVar2 = (uint)(uVar1 >> 0xc) & 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 14175ef2a FUN_14175ef2a body=40 status=ok
// SIG undefined FUN_14175ef2a(void)

uint FUN_14175ef2a(undefined2 *param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 8) == 1) {
    uVar1 = FUN_140e6dc96(*param_1,param_1 + 8);
    uVar1 = uVar1 >> 0xd & 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 14175ef52 FUN_14175ef52 body=40 status=ok
// SIG undefined FUN_14175ef52(void)

uint FUN_14175ef52(undefined2 *param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 8) == 1) {
    uVar1 = FUN_140e6dc96(*param_1,param_1 + 8);
    uVar1 = uVar1 >> 0xe & 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 14175ef7a FUN_14175ef7a body=40 status=ok
// SIG undefined FUN_14175ef7a(void)

uint FUN_14175ef7a(undefined2 *param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 8) == 1) {
    uVar1 = FUN_140e6dc96(*param_1,param_1 + 8);
    uVar1 = uVar1 >> 0xb & 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 14175efa2 FUN_14175efa2 body=58 status=ok
// SIG undefined FUN_14175efa2(void)

bool FUN_14175efa2(longlong param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = FUN_14479fe53(*(undefined2 *)(param_1 + 0x8a8),1,1);
  if ((cVar1 == '\0') || ((*(byte *)(param_1 + 0xfa) & 0x40) == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = DAT_14cb0108c != 0;
  }
  return bVar2;
}



// FUNCTION 14175efdc FUN_14175efdc body=255 status=ok
// SIG undefined FUN_14175efdc(void)

undefined8 * FUN_14175efdc(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  
  uVar4 = 0;
  lVar2 = FUN_144735dd8(param_2,param_1 + 0x188,0);
  if ((*(byte *)(lVar2 + 0x68) & 0x80) != 0) {
    uVar4 = 0x1c;
  }
  puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar3 = puVar5 + 9;
  if (*(undefined8 **)(param_2 + 0x78) < puVar3) {
    FUN_140023dd8((longlong *)(param_2 + 0x70),0x50);
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar5 + 9;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar3;
  puVar5[1] = *(undefined8 *)(lVar2 + 8);
  puVar5[2] = 0;
  *(undefined1 *)(puVar5 + 3) = 3;
  *(undefined8 *)((longlong)puVar5 + 0x1c) = 0xffffffffffffffff;
  *puVar5 = &PTR_FUN_14a1fb168;
  *(undefined1 *)(puVar5 + 5) = uVar4;
  *(undefined8 *)((longlong)puVar5 + 0x2c) = 0xffffffff00000000;
  puVar5[7] = 0;
  puVar5[8] = lVar2;
  iVar1 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar1 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar1 + 1U) {
    FUN_1447568fc(param_2 + 0x198,iVar1);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar1 * 8) = puVar5;
  *(int *)((longlong)puVar5 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  return puVar5;
}



// FUNCTION 14175f0dc FUN_14175f0dc body=255 status=ok
// SIG undefined FUN_14175f0dc(void)

void FUN_14175f0dc(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar3;
  
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
    uVar4 = uVar3 * 0x200;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x7fffffffffffff) * 0x20]];
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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0x10);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 9)) {
      uVar3 = uVar4 >> 9 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x200,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14175f1dc FUN_14175f1dc body=613 status=ok
// SIG undefined FUN_14175f1dc(void)

longlong * FUN_14175f1dc(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auStack_88 [40];
  longlong *local_60;
  int local_58;
  uint local_54;
  uint *local_50;
  uint local_48;
  int local_44;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1 != param_2) {
    puVar1 = (uint *)(param_1 + 2);
    iVar4 = (int)param_1[5];
    local_54 = 1;
    if (iVar4 == 0) {
      local_40 = 0;
      local_58 = 0;
      local_44 = 0;
    }
    else {
      puVar9 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar9 = puVar1;
      }
      uVar10 = *puVar9;
      if (uVar10 == 0) {
        iVar11 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar11 = iVar4 + -1;
        }
        uVar13 = 0;
        uVar12 = (ulonglong)(uint)(iVar11 >> 5);
        if (iVar11 >> 5 < 1) {
          uVar12 = uVar13;
        }
        local_58 = (int)uVar12 + 1;
        local_40 = (int)uVar12 * 0x20 + 0x20;
        iVar11 = 0;
        do {
          local_44 = iVar4;
          if (uVar12 == uVar13) goto LAB_14175f2a7;
          iVar11 = iVar11 + 0x20;
          uVar10 = puVar9[uVar13 + 1];
          uVar13 = uVar13 + 1;
        } while (uVar10 == 0);
        local_58 = (int)uVar13;
        local_40 = iVar11;
      }
      else {
        local_40 = 0;
        local_58 = 0;
      }
      local_54 = -uVar10 & uVar10;
      uVar12 = (ulonglong)local_54 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      local_44 = (local_40 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
      if (iVar4 <= local_44) {
        local_44 = iVar4;
      }
    }
LAB_14175f2a7:
    local_48 = 0xffffffff;
    local_60 = param_1;
    local_50 = puVar1;
    if (local_44 != iVar4) {
      do {
        plVar5 = *(longlong **)(*local_60 + 0x10 + (longlong)local_44 * 0x20);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar5 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
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
        local_48 = local_48 & ~local_54;
        FUN_1449c0562(&local_58);
      } while (((local_44 != iVar4) || (local_50 != puVar1)) || (local_60 != param_1));
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar7 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar6 = param_2[3];
      uVar8 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *puVar1 = *(uint *)(param_2 + 2);
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar7;
      *(int *)(param_1 + 3) = (int)lVar6;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar8;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
    if (param_2[8] == 0) {
      *(int *)(param_1 + 7) = (int)param_2[7];
    }
    if (param_1[8] != 0) {
      FUN_1400020a8();
    }
    param_1[8] = param_2[8];
    param_2[8] = 0;
    *(int *)(param_1 + 9) = (int)param_2[9];
    *(undefined4 *)(param_2 + 9) = 0;
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14175f442 FUN_14175f442 body=40 status=ok
// SIG undefined FUN_14175f442(void)

undefined8 FUN_14175f442(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14175f46a FUN_14175f46a body=40 status=ok
// SIG undefined FUN_14175f46a(void)

undefined8 FUN_14175f46a(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14175f492 FUN_14175f492 body=40 status=ok
// SIG undefined FUN_14175f492(void)

undefined8 FUN_14175f492(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14175f4ba FUN_14175f4ba body=40 status=ok
// SIG undefined FUN_14175f4ba(void)

undefined8 FUN_14175f4ba(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14175f4e2 FUN_14175f4e2 body=272 status=ok
// SIG undefined FUN_14175f4e2(void)

void FUN_14175f4e2(undefined8 param_1,ulonglong *param_2,ulonglong *param_3,undefined8 *param_4,
                  undefined2 *param_5)

{
  longlong lVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  
  lVar1 = (longlong)(int)param_3[1] + 1;
  puVar4 = (undefined8 *)*param_2;
  if ((longlong)(int)param_3[1] == 0) {
    puVar4 = (undefined8 *)((longlong)puVar4 + 7U & 0xfffffffffffffff8);
    puVar7 = puVar4 + 2;
    puVar5 = puVar4;
    if ((undefined8 *)param_2[1] < puVar7) {
      FUN_140023dd8(param_2,0x18);
      puVar4 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar7 = puVar4 + 2;
      puVar5 = puVar4;
    }
  }
  else {
    puVar7 = puVar4 + 2;
    if ((undefined8 *)param_2[1] < puVar7) {
      puVar5 = (undefined8 *)((longlong)puVar4 + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + lVar1 * 2;
      if ((undefined8 *)param_2[1] < puVar4) {
        FUN_140023dd8(param_2,(int)lVar1 * 0x10 | 8);
        puVar5 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar4 = puVar5 + lVar1 * 2;
      }
      *param_2 = (ulonglong)puVar4;
      puVar4 = puVar5;
      if (0 < (int)param_3[1]) {
        lVar6 = 0;
        lVar8 = 0;
        do {
          uVar3 = ((undefined8 *)(*param_3 + lVar6))[1];
          *(undefined8 *)((longlong)puVar5 + lVar6) = *(undefined8 *)(*param_3 + lVar6);
          ((undefined8 *)((longlong)puVar5 + lVar6))[1] = uVar3;
          lVar8 = lVar8 + 1;
          lVar6 = lVar6 + 0x10;
        } while (lVar8 < (int)param_3[1]);
        puVar4 = (undefined8 *)(lVar6 + (longlong)puVar5);
      }
      goto LAB_14175f52a;
    }
    puVar5 = (undefined8 *)*param_3;
  }
  *param_2 = (ulonglong)puVar7;
LAB_14175f52a:
  uVar2 = *param_5;
  *puVar4 = *param_4;
  *(undefined2 *)(puVar4 + 1) = uVar2;
  *(undefined1 *)((longlong)puVar4 + 10) = 0;
  *param_3 = (ulonglong)puVar5;
  *(int *)(param_3 + 1) = (int)lVar1;
  return;
}



// FUNCTION 14175f5f2 FUN_14175f5f2 body=270 status=ok
// SIG undefined FUN_14175f5f2(void)

void FUN_14175f5f2(undefined8 param_1,ulonglong *param_2,ulonglong *param_3,undefined8 *param_4,
                  undefined2 *param_5)

{
  longlong lVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  
  lVar1 = (longlong)(int)param_3[1] + 1;
  puVar4 = (undefined8 *)*param_2;
  if ((longlong)(int)param_3[1] == 0) {
    puVar4 = (undefined8 *)((longlong)puVar4 + 7U & 0xfffffffffffffff8);
    puVar7 = puVar4 + 2;
    puVar5 = puVar4;
    if ((undefined8 *)param_2[1] < puVar7) {
      FUN_140023dd8(param_2,0x18);
      puVar4 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar7 = puVar4 + 2;
      puVar5 = puVar4;
    }
  }
  else {
    puVar7 = puVar4 + 2;
    if ((undefined8 *)param_2[1] < puVar7) {
      puVar5 = (undefined8 *)((longlong)puVar4 + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + lVar1 * 2;
      if ((undefined8 *)param_2[1] < puVar4) {
        FUN_140023dd8(param_2,(int)lVar1 * 0x10 | 8);
        puVar5 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar4 = puVar5 + lVar1 * 2;
      }
      *param_2 = (ulonglong)puVar4;
      puVar4 = puVar5;
      if (0 < (int)param_3[1]) {
        lVar6 = 0;
        lVar8 = 0;
        do {
          uVar3 = ((undefined8 *)(*param_3 + lVar6))[1];
          *(undefined8 *)((longlong)puVar5 + lVar6) = *(undefined8 *)(*param_3 + lVar6);
          ((undefined8 *)((longlong)puVar5 + lVar6))[1] = uVar3;
          lVar8 = lVar8 + 1;
          lVar6 = lVar6 + 0x10;
        } while (lVar8 < (int)param_3[1]);
        puVar4 = (undefined8 *)(lVar6 + (longlong)puVar5);
      }
      goto LAB_14175f635;
    }
    puVar5 = (undefined8 *)*param_3;
  }
  *param_2 = (ulonglong)puVar7;
LAB_14175f635:
  uVar2 = *param_5;
  *puVar4 = *param_4;
  *(undefined2 *)(puVar4 + 1) = uVar2;
  *(undefined1 *)((longlong)puVar4 + 10) = 2;
  *param_3 = (ulonglong)puVar5;
  *(int *)(param_3 + 1) = (int)lVar1;
  return;
}



// FUNCTION 14175f700 FUN_14175f700 body=116 status=ok
// SIG undefined FUN_14175f700(void)

longlong FUN_14175f700(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14175f774 FUN_14175f774 body=412 status=ok
// SIG undefined FUN_14175f774(void)

void FUN_14175f774(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140069376();
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar9 + 0x4b;
  if (*(undefined8 **)(param_1 + 0x78) < puVar6) {
    FUN_140023dd8(puVar1,0x260);
    puVar9 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar9 + 0x4b;
  }
  *puVar1 = (ulonglong)puVar6;
  local_48 = DAT_14c9c3f48;
  if (DAT_14c9c3f48 != 0) {
    LOCK();
    *(int *)(DAT_14c9c3f48 + 8) = *(int *)(DAT_14c9c3f48 + 8) + 1;
    UNLOCK();
  }
  local_40 = &DAT_14c9c3f00;
  local_58 = 2;
  local_50 = param_3;
  FUN_140068f1a(puVar9,param_2,&local_50,1);
  *puVar9 = &PTR_FUN_14a202bf0;
  uVar3 = param_4[1];
  uVar4 = param_4[2];
  uVar5 = param_4[3];
  *(undefined4 *)(puVar9 + 0x37) = *param_4;
  *(undefined4 *)((longlong)puVar9 + 0x1bc) = uVar3;
  *(undefined4 *)(puVar9 + 0x38) = uVar4;
  *(undefined4 *)((longlong)puVar9 + 0x1c4) = uVar5;
  puVar9[0x39] = *(undefined8 *)(param_4 + 4);
  puVar9[0x3a] = *(undefined8 *)(param_4 + 6);
  puVar9[0x3b] = *(undefined8 *)(param_4 + 8);
  puVar9[0x3c] = *(undefined8 *)(param_4 + 10);
  puVar9[0x3d] = *(undefined8 *)(param_4 + 0xc);
  puVar9[0x3e] = *(undefined8 *)(param_4 + 0xe);
  puVar6 = (undefined8 *)(param_4 + 0x10);
  puVar8 = puVar9 + 0x3f;
  for (lVar7 = 0xb; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  *(undefined1 *)(puVar9 + 0x4a) = *(undefined1 *)(param_4 + 0x26);
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar9;
  *(int *)((longlong)puVar9 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    FUN_140069100(param_1,puVar9);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14175f912 FUN_14175f912 body=40 status=ok
// SIG undefined FUN_14175f912(void)

undefined8 FUN_14175f912(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14175f93a FUN_14175f93a body=81 status=ok
// SIG undefined FUN_14175f93a(void)

ulonglong FUN_14175f93a(longlong param_1)

{
  char cVar1;
  undefined8 unaff_RSI;
  undefined7 uVar3;
  ulonglong uVar2;
  
  uVar3 = (undefined7)((ulonglong)unaff_RSI >> 8);
  if (*(uint *)(param_1 + 0x18) < 2) {
    if ((*(uint *)(param_1 + 0x38) & 0x2000102) == 0x100) {
      uVar2 = 0;
    }
    else {
      uVar2 = CONCAT71(uVar3,(*(byte *)(*(longlong *)(param_1 + 0x48) + 0x29) & 1) == 0);
    }
  }
  else {
    uVar2 = CONCAT71(uVar3,1);
    cVar1 = FUN_1400b7021();
    if (cVar1 == '\0') {
      uVar2 = CONCAT71(uVar3,*(undefined1 *)(param_1 + 0x3d)) & 0xffffffffffffff08;
      uVar2 = CONCAT71((int7)(uVar2 >> 8),(byte)uVar2 >> 3);
    }
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 14175f98c FUN_14175f98c body=42 status=ok
// SIG undefined FUN_14175f98c(void)

bool FUN_14175f98c(longlong param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = FUN_140105312();
  bVar2 = false;
  if ((cVar1 != '\0') && (*(char *)(param_1 + 0x1c) == '\x01')) {
    bVar2 = *(int *)(param_1 + 0x18) == 1;
  }
  return bVar2;
}



// FUNCTION 14175f9b6 FUN_14175f9b6 body=81 status=ok
// SIG undefined FUN_14175f9b6(void)

ulonglong FUN_14175f9b6(longlong param_1)

{
  char cVar1;
  undefined8 unaff_RSI;
  undefined7 uVar3;
  ulonglong uVar2;
  
  uVar3 = (undefined7)((ulonglong)unaff_RSI >> 8);
  if (*(uint *)(param_1 + 0x18) < 2) {
    if ((*(uint *)(param_1 + 0x38) & 0x1000100) == 0x100) {
      uVar2 = 0;
    }
    else {
      uVar2 = CONCAT71(uVar3,(*(byte *)(*(longlong *)(param_1 + 0x48) + 0x29) & 1) == 0);
    }
  }
  else {
    uVar2 = CONCAT71(uVar3,1);
    cVar1 = FUN_1400b7021();
    if (cVar1 == '\0') {
      uVar2 = CONCAT71(uVar3,*(undefined1 *)(param_1 + 0x3d)) & 0xffffffffffffff08;
      uVar2 = CONCAT71((int7)(uVar2 >> 8),(byte)uVar2 >> 3);
    }
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 14175fa08 FUN_14175fa08 body=43 status=ok
// SIG undefined FUN_14175fa08(void)

undefined4 FUN_14175fa08(longlong param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  
  cVar1 = FUN_1400b7021();
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x38) & 0x1000100;
    uVar3 = CONCAT31((int3)(uVar2 >> 8),uVar2 != 0x100);
  }
  return uVar3;
}



// FUNCTION 14175fa40 FUN_14175fa40 body=1302 status=ok
// SIG undefined FUN_14175fa40(void)

void FUN_14175fa40(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  uint param_5)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong lVar11;
  code *pcVar12;
  byte bVar13;
  undefined1 *puVar14;
  byte bVar15;
  undefined1 auStack_158 [32];
  longlong *local_138;
  longlong *local_130;
  undefined8 *local_128;
  longlong *local_120;
  int local_118;
  int local_110;
  ulonglong local_108;
  undefined4 local_100;
  undefined8 *local_f8;
  longlong *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  uVar1 = *(uint *)(param_2 + 0xe4);
  plVar5 = local_e8;
  uVar7 = local_e0;
  if (((uVar1 & 8) == 0) || (*(char *)(param_2 + 0xdf) != '\0')) goto LAB_14175fdec;
  cVar4 = *(char *)(param_1 + 0x10);
  if (cVar4 == '(') {
    if ((uVar1 >> 0xd & 1) != 0) goto LAB_14175fdec;
LAB_14175faad:
    if (((uVar1 & 0x10) == 0) || (*(byte *)(param_2 + 0xe0) < 2)) goto LAB_14175fdec;
  }
  else {
    if (cVar4 == '\'') {
      if ((uVar1 >> 0xd & 1) != 0) goto LAB_14175fdec;
    }
    else {
      if (cVar4 == '6') {
        if ((uVar1 >> 0xd & 1) == 0) goto LAB_14175fdec;
        goto LAB_14175faad;
      }
      if ((cVar4 != '5') || ((uVar1 >> 0xd & 1) == 0)) goto LAB_14175fdec;
    }
    if (((uVar1 & 0x10) == 0) || (*(char *)(param_2 + 0xe0) != '\x01')) goto LAB_14175fdec;
  }
  cVar4 = FUN_140105312();
  plVar5 = local_e8;
  uVar7 = local_e0;
  if (cVar4 != '\0') {
    plVar9 = *(longlong **)(param_2 + 0xc0);
    uVar3 = param_3;
    while (local_e0 = uVar3, local_e8 = plVar9, local_e8 != (longlong *)0x0) {
      plVar5 = (longlong *)(**(code **)(*local_e8 + 0x30))(local_e8,*(undefined4 *)(param_1 + 0x20))
      ;
      if (plVar5 != (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x48) = DAT_14c9c0ea0;
        *(undefined4 *)(param_1 + 0x78) = 0;
        pcVar8 = *(code **)(*plVar5 + 0x38);
        plVar9 = plVar5;
        if (pcVar8 == FUN_144765e18) {
          plVar9 = (longlong *)plVar5[9];
          if (plVar9 == (longlong *)0x0) {
            plVar9 = (longlong *)plVar5[8];
            pcVar8 = *(code **)(*plVar9 + 0x420);
            pcVar12 = (code *)&LAB_144b24e8a;
          }
          else {
            pcVar8 = *(code **)(*plVar9 + 0x420);
            pcVar12 = (code *)&LAB_14497e108;
          }
          if (pcVar8 != pcVar12) goto LAB_14175febb;
        }
        else {
LAB_14175febb:
          (*pcVar8)(plVar9);
        }
        lVar6 = *plVar5;
        if (*(code **)(lVar6 + 0x100) == (code *)&LAB_144b25520) {
          bVar15 = (*(byte *)(plVar5[8] + 0x1d0) & 0x40) >> 6;
        }
        else {
          bVar15 = (**(code **)(lVar6 + 0x100))(plVar5);
          lVar6 = *plVar5;
        }
        pcVar8 = *(code **)(lVar6 + 0x38);
        plVar9 = plVar5;
        if (pcVar8 == FUN_144765e18) {
          plVar9 = (longlong *)plVar5[9];
          if (plVar9 == (longlong *)0x0) {
            plVar9 = (longlong *)plVar5[8];
            pcVar8 = *(code **)(*plVar9 + 0x420);
            if (pcVar8 != (code *)&LAB_144b24e8a) goto LAB_14175fed6;
            bVar13 = *(byte *)(plVar9 + 0x30);
          }
          else {
            pcVar8 = *(code **)(*plVar9 + 0x420);
            if (pcVar8 != (code *)&LAB_14497e108) goto LAB_14175fed6;
            bVar13 = *(byte *)(plVar9 + 0x2a);
          }
          bVar13 = (bVar13 & 0x10) >> 4;
        }
        else {
LAB_14175fed6:
          bVar13 = (*pcVar8)(plVar9);
        }
        local_78 = 0;
        uStack_70 = 0;
        local_88 = 0;
        uStack_80 = 0;
        local_98 = 0;
        uStack_90 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        local_b8 = 0;
        uStack_b0 = 0;
        local_c8 = 0;
        uStack_c0 = 0;
        uVar2 = *(undefined4 *)(param_1 + 0x20);
        uVar7 = (**(code **)(**(longlong **)(param_2 + 0xb8) + 0x30))();
        local_128 = &local_c8;
        local_130 = &local_a8;
        local_138 = &local_b8;
        cVar4 = FUN_1447e3edc(plVar5,uVar7,uVar2,1);
        if (cVar4 != '\0') {
          local_118 = 2 - (uint)((uVar1 >> 0xc & 1) != 0);
          if (bVar15 != 0) {
            local_118 = 1;
          }
          local_110 = 2 - (uint)((uVar1 & 0x40) == 0);
          if (bVar13 != 0) {
            local_110 = 0;
          }
          if ((char)uVar1 < '\0') {
            local_110 = 0;
          }
          lVar6 = *(longlong *)(param_1 + 0x28);
          local_d8 = DAT_14ca44d40;
          local_d0 = DAT_14ca44d68;
          if (lVar6 != 0) {
            if (-1 < (int)param_5 && (uVar1 >> 0x18 & 1) != 0) {
              lVar11 = lVar6 + 0x3208;
              if (*(longlong *)(lVar6 + 0x3218) != 0) {
                lVar11 = *(longlong *)(lVar6 + 0x3218);
              }
              if ((*(uint *)(lVar11 + (ulonglong)(param_5 >> 5) * 4) >> (param_5 & 0x1f) & 1) == 0)
              {
                lVar11 = lVar6 + 0x3228;
                if (*(longlong *)(lVar6 + 0x3238) != 0) {
                  lVar11 = *(longlong *)(lVar6 + 0x3238);
                }
                if ((*(uint *)(lVar11 + (ulonglong)(param_5 >> 5) * 4) & 1 << ((byte)param_5 & 0x1f)
                    ) == 0) goto LAB_14175fd13;
                lVar11 = 0x31c8;
              }
              else {
                lVar11 = 0x31d0;
              }
              local_d0 = *(undefined8 *)(lVar6 + lVar11);
            }
LAB_14175fd13:
            if (param_4 != 0) {
              uVar1 = *(uint *)(*(longlong *)(param_4 + 0x218) + 0x158);
              if ((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(lVar6 + 0x31c0))) {
                puVar14 = &DAT_000031a8 + lVar6;
                if (*(undefined1 **)(lVar6 + 0x31b8) != (undefined1 *)0x0) {
                  puVar14 = *(undefined1 **)(lVar6 + 0x31b8);
                }
                if ((*(uint *)(puVar14 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0) {
                  local_d8 = *(undefined8 *)(*(longlong *)(lVar6 + 0x3198) + (ulonglong)uVar1 * 8);
                }
              }
            }
          }
          if (local_b8 == 0) {
            uVar10 = 0;
          }
          else {
            uVar10 = (ulonglong)*(uint *)(local_b8 + 0xdc);
          }
          if (local_a8 == 0) {
            local_108 = 0;
          }
          else {
            local_108 = (ulonglong)*(uint *)(local_a8 + 0xdc) << 0x20;
          }
          local_108 = local_108 | uVar10;
          local_128 = (undefined8 *)(param_1 + 0x40);
          local_f8 = &local_d8;
          local_120 = &local_b8;
          local_138 = local_e8;
          local_100 = 0;
          local_130 = plVar5;
          FUN_1400cdeaa(param_1,param_2,local_e0,param_4);
          plVar5 = local_e8;
          uVar7 = local_e0;
          break;
        }
      }
      plVar9 = (longlong *)(**(code **)(*local_e8 + 0x38))(local_e8,*(undefined4 *)(param_1 + 0x20))
      ;
      uVar3 = local_e0;
      plVar5 = local_e8;
      uVar7 = local_e0;
    }
  }
LAB_14175fdec:
  local_e0 = uVar7;
  local_e8 = plVar5;
  if ((local_60 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14175ff57 FUN_14175ff57 body=34 status=ok
// SIG undefined FUN_14175ff57(void)

void FUN_14175ff57(undefined4 param_1)

{
  FUN_1402cfd6f(0x27,param_1,0,0,0);
  return;
}



// FUNCTION 14175ff79 FUN_14175ff79 body=34 status=ok
// SIG undefined FUN_14175ff79(void)

void FUN_14175ff79(undefined4 param_1)

{
  FUN_1402cfd6f(0x28,param_1,0,0,0);
  return;
}



// FUNCTION 14175ff9b FUN_14175ff9b body=34 status=ok
// SIG undefined FUN_14175ff9b(void)

void FUN_14175ff9b(undefined4 param_1)

{
  FUN_1402cfd6f(0x36,param_1,0,0,0);
  return;
}



// FUNCTION 14175ffbd FUN_14175ffbd body=34 status=ok
// SIG undefined FUN_14175ffbd(void)

void FUN_14175ffbd(undefined4 param_1)

{
  FUN_140451be7(0x37,param_1,0,0,0);
  return;
}



// FUNCTION 14175ffe0 FUN_14175ffe0 body=186 status=ok
// SIG undefined FUN_14175ffe0(void)

bool FUN_14175ffe0(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar3 = *(int *)(param_1 + 0x3f0);
  if (iVar3 < 1) {
    bVar2 = 0;
  }
  else {
    lVar6 = 0;
    lVar5 = 0;
    bVar2 = 0;
    do {
      if ((bVar2 & 1) == 0) {
        lVar1 = *(longlong *)(param_1 + 1000);
        uVar4 = *(uint *)(lVar1 + 0x2b28 + lVar6) & 1;
        if (-1 < (int)DAT_14c760908) {
          uVar4 = DAT_14c760908;
        }
        bVar2 = FUN_14090c054(0.0 < *(float *)(lVar1 + 0x2b30 + lVar6) && uVar4 != 0,1,lVar1 + lVar6
                             );
        iVar3 = *(int *)(param_1 + 0x3f0);
      }
      else {
        bVar2 = 1;
      }
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + 0x13c10;
    } while (lVar5 < iVar3);
  }
  bVar7 = false;
  if ((bVar2 == 0) && ((*(uint *)(param_1 + 0xf4) & 0x200) != 0)) {
    bVar7 = (*(byte *)(param_1 + 0xf8) & 2) == 0;
  }
  return bVar7;
}



// FUNCTION 14176009a FUN_14176009a body=1345 status=ok
// SIG undefined FUN_14176009a(void)

void FUN_14176009a(longlong param_1,uint param_2,ulonglong *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined1 uVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  int local_60;
  undefined8 local_5c;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = 0;
  uVar6 = 0x14;
  if (DAT_14ca84e48 < 0x14) {
    uVar6 = DAT_14ca84e48;
  }
  local_60 = uVar6 + (uVar6 == 0);
  local_5c = 0x418900000001;
  plVar1 = (longlong *)(param_1 + 0x70);
  uVar9 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar4 = uVar9 + 0x150;
  if (*(ulonglong *)(param_1 + 0x78) < uVar4) {
    FUN_140023dd8(plVar1,0x160);
    uVar9 = *plVar1 + 0xfU & 0xfffffffffffffff0;
    uVar4 = uVar9 + 0x150;
  }
  *(ulonglong *)(param_1 + 0x70) = uVar4;
  FUN_1456bd266(uVar9,L"DistanceField.ObjectIndirectArguments",&local_60,0);
  iVar3 = *(int *)(param_1 + 400);
  *(uint *)(param_1 + 400) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x194) < iVar3 + 1U) {
    FUN_144737178(param_1 + 0x188,iVar3);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar3 * 8) = uVar9;
  *(int *)(uVar9 + 0x7c) = *(int *)(param_1 + 400) + -1;
  *param_3 = uVar9;
  uVar6 = 4;
  if (DAT_14ca84e48 < 4) {
    uVar6 = DAT_14ca84e48;
  }
  local_60 = uVar6 + (uVar6 == 0);
  uVar6 = DAT_14ca84e48;
  if (param_2 < DAT_14ca84e48) {
    uVar6 = param_2;
  }
  local_50 = 0;
  local_5c = CONCAT44(0x10109,uVar6 + (uVar6 == 0));
  uVar9 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar4 = uVar9 + 0x150;
  if (*(ulonglong *)(param_1 + 0x78) < uVar4) {
    FUN_140023dd8(plVar1,0x160);
    uVar9 = *plVar1 + 0xfU & 0xfffffffffffffff0;
    uVar4 = uVar9 + 0x150;
  }
  *(ulonglong *)(param_1 + 0x70) = uVar4;
  local_68 = plVar1;
  FUN_1456bd266(uVar9,L"DistanceField.ObjectIndices",&local_60,0);
  iVar3 = *(int *)(param_1 + 400);
  *(uint *)(param_1 + 400) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x194) < iVar3 + 1U) {
    FUN_144737178(param_1 + 0x188,iVar3);
  }
  plVar1 = local_68;
  *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar3 * 8) = uVar9;
  *(int *)(uVar9 + 0x7c) = *(int *)(param_1 + 400) + -1;
  uVar4 = *param_3;
  puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar5 = puVar7 + 8;
  if (*(undefined8 **)(param_1 + 0x78) < puVar5) {
    FUN_140023dd8(local_68,0x48);
    puVar7 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar5 = puVar7 + 8;
  }
  lVar2 = param_1 + 0x198;
  *(undefined8 **)(param_1 + 0x70) = puVar5;
  puVar7[1] = *(undefined8 *)(uVar4 + 8);
  puVar7[2] = 0;
  *(undefined1 *)(puVar7 + 3) = 2;
  *(undefined8 *)((longlong)puVar7 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar7 + 5) = 0;
  *puVar7 = &PTR_FUN_14a1fb3e8;
  *(undefined2 *)(puVar7 + 6) = 0x1c;
  *(undefined1 *)((longlong)puVar7 + 0x32) = 0;
  puVar7[7] = uVar4;
  iVar3 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar3 + 1U) {
    FUN_1447568fc(lVar2,iVar3);
  }
  plVar1 = local_68;
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar3 * 8) = puVar7;
  *(int *)((longlong)puVar7 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  *param_4 = puVar7;
  if ((*(byte *)(uVar9 + 0x68) & 0x80) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0x1c;
  }
  puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar5 = puVar7 + 8;
  if (*(undefined8 **)(param_1 + 0x78) < puVar5) {
    FUN_140023dd8(local_68,0x48);
    puVar7 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar5 = puVar7 + 8;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar5;
  puVar7[1] = *(undefined8 *)(uVar9 + 8);
  puVar7[2] = 0;
  *(undefined1 *)(puVar7 + 3) = 2;
  *(undefined8 *)((longlong)puVar7 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar7 + 5) = 0;
  *puVar7 = &PTR_FUN_14a1fb3e8;
  *(undefined1 *)(puVar7 + 6) = uVar8;
  *(undefined2 *)((longlong)puVar7 + 0x31) = 0;
  puVar7[7] = uVar9;
  iVar3 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar3 + 1U) {
    FUN_1447568fc(lVar2,iVar3);
  }
  plVar1 = local_68;
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar3 * 8) = puVar7;
  *(int *)((longlong)puVar7 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  param_4[1] = puVar7;
  uVar4 = *param_3;
  puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar5 = puVar7 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar5) {
    FUN_140023dd8(local_68,0x50);
    puVar7 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar5 = puVar7 + 9;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar5;
  puVar7[1] = *(undefined8 *)(uVar4 + 8);
  puVar7[2] = 0;
  *(undefined1 *)(puVar7 + 3) = 3;
  *(undefined8 *)((longlong)puVar7 + 0x1c) = 0xffffffffffffffff;
  *puVar7 = &PTR_FUN_14a1fb168;
  *(undefined1 *)(puVar7 + 5) = 0x1c;
  *(undefined8 *)((longlong)puVar7 + 0x2c) = 0xffffffff00000000;
  puVar7[7] = 0;
  puVar7[8] = uVar4;
  iVar3 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar3 + 1U) {
    FUN_1447568fc(lVar2,iVar3);
  }
  plVar1 = local_68;
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar3 * 8) = puVar7;
  *(int *)((longlong)puVar7 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  param_4[2] = puVar7;
  if ((*(byte *)(uVar9 + 0x68) & 0x80) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0x1c;
  }
  puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar5 = puVar7 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar5) {
    FUN_140023dd8(local_68,0x50);
    puVar7 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar5 = puVar7 + 9;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar5;
  puVar7[1] = *(undefined8 *)(uVar9 + 8);
  puVar7[2] = 0;
  *(undefined1 *)(puVar7 + 3) = 3;
  *(undefined8 *)((longlong)puVar7 + 0x1c) = 0xffffffffffffffff;
  *puVar7 = &PTR_FUN_14a1fb168;
  *(undefined1 *)(puVar7 + 5) = uVar8;
  *(undefined8 *)((longlong)puVar7 + 0x2c) = 0xffffffff00000000;
  puVar7[7] = 0;
  puVar7[8] = uVar9;
  iVar3 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar3 + 1U) {
    FUN_1447568fc(lVar2,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar3 * 8) = puVar7;
  *(int *)((longlong)puVar7 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  param_4[3] = puVar7;
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417605dc FUN_1417605dc body=767 status=ok
// SIG undefined FUN_1417605dc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1417605dc(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_108;
  fVar11 = 0.0;
  if ((DAT_14c7601e0 == 0) || (DAT_14c7601c0 == 0)) {
    fVar12 = 0.0;
  }
  else {
    fVar12 = 0.0;
    if ((*(byte *)(param_2 + 0x23e9) & 1) == 0) {
      if (*(longlong **)(param_2 + 0x10) == (longlong *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar2 = (**(code **)(**(longlong **)(param_2 + 0x10) + 0x70))();
        uVar3 = (ulonglong)uVar2;
      }
      fVar12 = (float)(&DAT_14c9c67b4)[uVar3 * 2] * 4.0;
      fVar11 = (float)(&DAT_14c9c67b0)[uVar3 * 2] * 4.0;
    }
  }
  local_d0 = DAT_14c967818;
  puVar4 = &DAT_14cb05410;
  if (*(char *)(*(longlong *)(param_2 + 8) + 0xd0) != '\0') {
    puVar4 = (undefined *)(*(longlong *)(param_2 + 8) + 0x1b8);
  }
  uVar3 = *(ulonglong *)(puVar4 + 0x10);
  iVar1 = (int)(uVar3 >> 0x20);
  iVar6 = (int)uVar3;
  iVar5 = (int)(((uint)(uVar3 >> 0x1f) & 1) + iVar6) >> 1;
  iVar8 = iVar1 + 7;
  if (-1 < (longlong)uVar3) {
    iVar8 = iVar1;
  }
  iVar7 = iVar6 + 7;
  if (-1 < iVar6) {
    iVar7 = iVar6;
  }
  iVar6 = iVar8 >> 3;
  if (iVar8 >> 3 < 2) {
    iVar6 = 1;
  }
  fVar13 = 1.0 / (float)(iVar1 / 2);
  iVar8 = iVar7 >> 3;
  if (iVar7 >> 3 < 2) {
    iVar8 = 1;
  }
  fVar14 = 1.0 / (float)iVar5;
  fVar9 = 1.0 - _DAT_14c760218;
  fVar10 = DAT_14c76021c;
  if (65000.0 <= DAT_14c76021c) {
    fVar10 = 65000.0;
  }
  local_c8 = CONCAT44((*(int *)(param_2 + 0x3104) - *(int *)(param_2 + 0x30fc)) / 2,
                      (*(int *)(param_2 + 0x3100) - *(int *)(param_2 + 0x30f8)) / 2);
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3f800000;
  *param_1 = param_3;
  param_1[1] = DAT_14c9c0d80;
  param_1[2] = param_4;
  param_1[3] = DAT_14c9c0de0;
  local_d8 = CONCAT44(iVar1 / 2,iVar5);
  local_e8 = 0;
  FUN_14473d930(param_1 + 4,&local_d8,&local_d0,3);
  *(float *)(param_1 + 6) = (float)iVar8;
  *(float *)((longlong)param_1 + 0x34) = (float)iVar6;
  *(float *)(param_1 + 7) = 1.0 / (float)iVar8;
  *(float *)((longlong)param_1 + 0x3c) = 1.0 / (float)iVar6;
  *(float *)(param_1 + 8) = fVar14;
  *(float *)((longlong)param_1 + 0x44) = fVar13;
  *(float *)(param_1 + 9) = fVar14 * fVar11;
  *(float *)((longlong)param_1 + 0x4c) = fVar13 * fVar12;
  *(float *)(param_1 + 10) = fVar11;
  *(float *)((longlong)param_1 + 0x54) = fVar12;
  *(float *)(param_1 + 0xb) = 1.0 / (fVar10 * fVar9);
  if ((local_c0 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417608dc FUN_1417608dc body=697 status=ok
// SIG undefined FUN_1417608dc(void)

void FUN_1417608dc(longlong param_1,longlong param_2,ulonglong *param_3,undefined8 param_4,
                  undefined1 param_5,ulonglong param_6)

{
  longlong *plVar1;
  undefined1 uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  int local_44;
  int local_40;
  undefined4 local_3c;
  undefined2 local_38;
  undefined1 local_36;
  undefined1 local_35;
  undefined2 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*param_3 == 0) {
    puVar6 = &DAT_14cb05410;
    if (*(char *)(*(longlong *)(param_2 + 8) + 0xd0) != '\0') {
      puVar6 = (undefined *)(*(longlong *)(param_2 + 8) + 0x1b8);
    }
    uVar4 = *(ulonglong *)(puVar6 + 0x10);
    local_40 = (int)(uVar4 >> 0x20) / 2;
    local_44 = (int)(((uint)(uVar4 >> 0x1f) & 1) + (int)uVar4) >> 1;
    local_68 = param_6 | 0x20009;
    local_50 = DAT_14ca85098;
    uStack_60 = DAT_14ca85088;
    uStack_5c = DAT_14ca8508c;
    uStack_58 = DAT_14ca85090;
    uStack_54 = DAT_14ca85094;
    local_4c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_36 = 0;
    local_35 = param_5;
    local_34 = 0xff00;
    local_3c = 0x10001;
    local_38 = 0x101;
    local_48 = 0;
    if (DAT_14ca84e40 <= local_44) {
      local_44 = DAT_14ca84e40;
    }
    if (local_44 < 2) {
      local_44 = 1;
    }
    if (DAT_14ca84e40 <= local_40) {
      local_40 = DAT_14ca84e40;
    }
    if (local_40 < 2) {
      local_40 = 1;
    }
    plVar1 = (longlong *)(param_1 + 0x70);
    uVar8 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar4 = uVar8 + 0x120;
    if (*(ulonglong *)(param_1 + 0x78) < uVar4) {
      FUN_140023dd8(plVar1,0x128);
      uVar8 = *plVar1 + 7U & 0xfffffffffffffff8;
      uVar4 = uVar8 + 0x120;
    }
    *(ulonglong *)(param_1 + 0x70) = uVar4;
    FUN_1456bbb8c(uVar8,param_4,&local_68,0);
    iVar3 = *(int *)(param_1 + 0x180);
    *(uint *)(param_1 + 0x180) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0x184) < iVar3 + 1U) {
      FUN_14472c0f6(param_1 + 0x178,iVar3);
    }
    *(ulonglong *)(*(longlong *)(param_1 + 0x178) + (longlong)iVar3 * 8) = uVar8;
    *(int *)(uVar8 + 0x9c) = *(int *)(param_1 + 0x180) + -1;
    *param_3 = uVar8;
    uVar2 = *(undefined1 *)(uVar8 + 0x94);
    puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar7 + 9;
    if (*(undefined8 **)(param_1 + 0x78) < puVar5) {
      FUN_140023dd8(plVar1,0x50);
      puVar7 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
      puVar5 = puVar7 + 9;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar5;
    puVar7[1] = *(undefined8 *)(uVar8 + 8);
    puVar7[2] = 0;
    *(undefined1 *)(puVar7 + 3) = 0;
    *(undefined8 *)((longlong)puVar7 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar7 + 5) = 0;
    *puVar7 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar7 + 6) = uVar2;
    *(undefined1 *)(puVar7 + 7) = 0;
    *(undefined4 *)((longlong)puVar7 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar7 + 0x35) = 0;
    puVar7[8] = uVar8;
    iVar3 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar3 + 1U) {
      FUN_1447568fc(param_1 + 0x198,iVar3);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar3 * 8) = puVar7;
    *(int *)((longlong)puVar7 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    local_68 = 0;
    uStack_60 = 0;
    uStack_5c = 0x3f800000;
    FUN_140c4fe69(param_1,puVar7,&local_68,2);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141760b96 FUN_141760b96 body=911 status=ok
// SIG undefined FUN_141760b96(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_141760b96(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_a8 [32];
  wchar_t *local_88;
  wchar_t *local_80;
  undefined4 local_78;
  undefined4 local_70;
  code *local_68;
  code *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca4b780) {
    FUN_144b3d300(&DAT_14ca4b780);
    if (DAT_14ca4b780 == -1) {
      FUN_145e1a792();
      local_40 = &LAB_14712ac08;
      local_48 = &LAB_14712ac0c;
      local_50 = &LAB_1472e3912;
      local_58 = &LAB_1472e3916;
      local_60 = FUN_1472e391a;
      local_68 = FUN_1472e3942;
      local_80 = L"ScreenPassVS";
      local_88 = L"/Engine/Private/ScreenPass.usf";
      local_30 = 0;
      local_38 = 0xe0;
      local_70 = 1;
      local_78 = 0;
      FUN_140db5666(&DAT_14ca4b6d8,0,&DAT_14ca4b670,L"FScreenPassVS");
      _DAT_14ca4b6d8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430179ee);
      _Init_thread_footer(&DAT_14ca4b780);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca4b780) {
    FUN_144b3d300(&DAT_14ca4b780);
    if (DAT_14ca4b780 == -1) {
      FUN_145e1a792();
      local_40 = &LAB_14712ac08;
      local_48 = &LAB_14712ac0c;
      local_50 = &LAB_1472e3912;
      local_58 = &LAB_1472e3916;
      local_60 = FUN_1472e391a;
      local_68 = FUN_1472e3942;
      local_80 = L"ScreenPassVS";
      local_88 = L"/Engine/Private/ScreenPass.usf";
      local_30 = 0;
      local_38 = 0xe0;
      local_70 = 1;
      local_78 = 0;
      FUN_140db5666(&DAT_14ca4b6d8,0,&DAT_14ca4b670,L"FScreenPassVS");
      _DAT_14ca4b6d8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430179ee);
      _Init_thread_footer(&DAT_14ca4b780);
    }
  }
  FUN_1448e935e(param_1,&local_28,&DAT_14ca4b6d8,0);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca4b780) {
    FUN_144b3d300(&DAT_14ca4b780);
    if (DAT_14ca4b780 == -1) {
      FUN_145e1a792();
      local_40 = &LAB_14712ac08;
      local_48 = &LAB_14712ac0c;
      local_50 = &LAB_1472e3912;
      local_58 = &LAB_1472e3916;
      local_60 = FUN_1472e391a;
      local_68 = FUN_1472e3942;
      local_80 = L"ScreenPassVS";
      local_88 = L"/Engine/Private/ScreenPass.usf";
      local_30 = 0;
      local_38 = 0xe0;
      local_70 = 1;
      local_78 = 0;
      FUN_140db5666(&DAT_14ca4b6d8,0,&DAT_14ca4b670,L"FScreenPassVS");
      _DAT_14ca4b6d8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430179ee);
      _Init_thread_footer(&DAT_14ca4b780);
    }
  }
  *param_2 = local_28;
  param_2[1] = uStack_24;
  param_2[2] = uStack_20;
  param_2[3] = uStack_1c;
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141760f26 FUN_141760f26 body=1538 status=ok
// SIG undefined FUN_141760f26(void)

undefined8 * FUN_141760f26(undefined8 *param_1,longlong param_2,int *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined1 uVar8;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong *local_70;
  undefined1 local_68 [4];
  undefined8 local_64;
  undefined8 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  iVar2 = *param_3;
  *(int *)(param_1 + 2) = iVar2;
  iVar6 = 0;
  if (*(longlong *)(param_3 + 4) != 0) {
    iVar6 = param_3[0x124];
  }
  *(int *)(param_1 + 5) = iVar6;
  if (iVar2 == 0) {
    local_50 = FUN_144735828(&DAT_14ca63b10,param_2,0x10);
    local_68[0] = 0;
    local_64 = 0xffffffff00000000;
    local_58 = 0;
    if ((*(byte *)(local_50 + 0x68) & 0x80) != 0) {
      local_68[0] = 0x1c;
    }
    uVar5 = FUN_14475683e(param_2 + 0x198,param_2 + 0x70,local_50 + 8,local_68);
    *param_1 = uVar5;
    local_50 = FUN_144735828(&DAT_14ca63b10,param_2,0x10);
    local_68[0] = 0;
    local_64 = 0xffffffff00000000;
    local_58 = 0;
    if ((*(byte *)(local_50 + 0x68) & 0x80) != 0) {
      local_68[0] = 0x1c;
    }
    uVar5 = FUN_14475683e(param_2 + 0x198,param_2 + 0x70,local_50 + 8,local_68);
    param_1[1] = uVar5;
  }
  else {
    uVar8 = 0;
    lVar3 = FUN_144735dd8(param_2,*(undefined8 *)(param_3 + 2),0);
    if ((*(byte *)(lVar3 + 0x68) & 0x80) != 0) {
      uVar8 = 0x1c;
    }
    plVar1 = (longlong *)(param_2 + 0x70);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar7 + 9;
    if (*(undefined8 **)(param_2 + 0x78) < puVar4) {
      FUN_140023dd8(plVar1,0x50);
      puVar7 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
      puVar4 = puVar7 + 9;
    }
    local_78 = param_2 + 0x198;
    *(undefined8 **)(param_2 + 0x70) = puVar4;
    puVar7[1] = *(undefined8 *)(lVar3 + 8);
    puVar7[2] = 0;
    *(undefined1 *)(puVar7 + 3) = 3;
    *(undefined8 *)((longlong)puVar7 + 0x1c) = 0xffffffffffffffff;
    *puVar7 = &PTR_FUN_14a1fb168;
    *(undefined1 *)(puVar7 + 5) = uVar8;
    *(undefined8 *)((longlong)puVar7 + 0x2c) = 0xffffffff00000000;
    puVar7[7] = 0;
    puVar7[8] = lVar3;
    iVar2 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar2 + 1U;
    local_70 = plVar1;
    if (*(uint *)(param_2 + 0x1a4) < iVar2 + 1U) {
      FUN_1447568fc(local_78,iVar2);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar2 * 8) = puVar7;
    *(int *)((longlong)puVar7 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    *param_1 = puVar7;
    uVar8 = 0;
    lVar3 = FUN_144735dd8(param_2,*(longlong *)(param_3 + 2) + 8,0);
    plVar1 = local_70;
    if ((*(byte *)(lVar3 + 0x68) & 0x80) != 0) {
      uVar8 = 0x1c;
    }
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar7 + 9;
    if (*(undefined8 **)(param_2 + 0x78) < puVar4) {
      FUN_140023dd8(local_70,0x50);
      puVar7 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
      puVar4 = puVar7 + 9;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar4;
    puVar7[1] = *(undefined8 *)(lVar3 + 8);
    puVar7[2] = 0;
    *(undefined1 *)(puVar7 + 3) = 3;
    *(undefined8 *)((longlong)puVar7 + 0x1c) = 0xffffffffffffffff;
    *puVar7 = &PTR_FUN_14a1fb168;
    *(undefined1 *)(puVar7 + 5) = uVar8;
    *(undefined8 *)((longlong)puVar7 + 0x2c) = 0xffffffff00000000;
    puVar7[7] = 0;
    puVar7[8] = lVar3;
    iVar2 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar2 + 1U;
    if (*(uint *)(param_2 + 0x1a4) < iVar2 + 1U) {
      FUN_1447568fc(local_78,iVar2);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar2 * 8) = puVar7;
    *(int *)((longlong)puVar7 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    param_1[1] = puVar7;
  }
  if (iVar6 == 0) {
    lVar3 = FUN_144735828(&DAT_14ca63b10,param_2,0x10);
    if ((*(byte *)(lVar3 + 0x68) & 0x80) == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0x1c;
    }
    plVar1 = (longlong *)(param_2 + 0x70);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar7 + 9;
    if (*(undefined8 **)(param_2 + 0x78) < puVar4) {
      FUN_140023dd8(plVar1,0x50);
      puVar7 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
      puVar4 = puVar7 + 9;
    }
    local_78 = param_2 + 0x198;
    *(undefined8 **)(param_2 + 0x70) = puVar4;
    puVar7[1] = *(undefined8 *)(lVar3 + 8);
    puVar7[2] = 0;
    *(undefined1 *)(puVar7 + 3) = 3;
    *(undefined8 *)((longlong)puVar7 + 0x1c) = 0xffffffffffffffff;
    *puVar7 = &PTR_FUN_14a1fb168;
    *(undefined1 *)(puVar7 + 5) = uVar8;
    *(undefined8 *)((longlong)puVar7 + 0x2c) = 0xffffffff00000000;
    puVar7[7] = 0;
    puVar7[8] = lVar3;
    iVar2 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar2 + 1U;
    if (*(uint *)(param_2 + 0x1a4) < iVar2 + 1U) {
      FUN_1447568fc(local_78,iVar2);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar2 * 8) = puVar7;
    *(int *)((longlong)puVar7 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    param_1[3] = puVar7;
    lVar3 = FUN_144735828(&DAT_14ca63b10,param_2,0x10);
    if ((*(byte *)(lVar3 + 0x68) & 0x80) == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0x1c;
    }
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar7 + 9;
    if (*(undefined8 **)(param_2 + 0x78) < puVar4) {
      FUN_140023dd8(plVar1,0x50);
      puVar7 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
      puVar4 = puVar7 + 9;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar4;
    puVar7[1] = *(undefined8 *)(lVar3 + 8);
    puVar7[2] = 0;
    *(undefined1 *)(puVar7 + 3) = 3;
    *(undefined8 *)((longlong)puVar7 + 0x1c) = 0xffffffffffffffff;
    *puVar7 = &PTR_FUN_14a1fb168;
    *(undefined1 *)(puVar7 + 5) = uVar8;
    *(undefined8 *)((longlong)puVar7 + 0x2c) = 0xffffffff00000000;
    puVar7[7] = 0;
    puVar7[8] = lVar3;
    iVar2 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar2 + 1U;
    if (*(uint *)(param_2 + 0x1a4) < iVar2 + 1U) {
      FUN_1447568fc(local_78,iVar2);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar2 * 8) = puVar7;
    *(int *)((longlong)puVar7 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    param_1[4] = puVar7;
  }
  else {
    local_50 = FUN_144735dd8(param_2,*(undefined8 *)(param_3 + 4),0);
    local_68[0] = 0;
    local_64 = 0xffffffff00000000;
    local_58 = 0;
    if ((*(byte *)(local_50 + 0x68) & 0x80) != 0) {
      local_68[0] = 0x1c;
    }
    uVar5 = FUN_14475683e(param_2 + 0x198,param_2 + 0x70,local_50 + 8,local_68);
    param_1[3] = uVar5;
    local_50 = FUN_144735dd8(param_2,*(longlong *)(param_3 + 4) + 8,0);
    local_68[0] = 0;
    local_64 = 0xffffffff00000000;
    local_58 = 0;
    if ((*(byte *)(local_50 + 0x68) & 0x80) != 0) {
      local_68[0] = 0x1c;
    }
    uVar5 = FUN_14475683e(param_2 + 0x198,param_2 + 0x70,local_50 + 8,local_68);
    param_1[4] = uVar5;
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141761529 FUN_141761529 body=1095 status=ok
// SIG undefined FUN_141761529(void)

undefined8 * FUN_141761529(undefined8 *param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined1 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if (*(longlong *)(param_3 + 0x420) != 0) {
    uVar12 = 0;
    lVar5 = FUN_144735dd8(param_2,param_3 + 0x1a8,0);
    if ((*(byte *)(lVar5 + 0x68) & 0x80) != 0) {
      uVar12 = 0x1c;
    }
    plVar1 = (longlong *)(param_2 + 0x70);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 9;
    if (*(undefined8 **)(param_2 + 0x78) < puVar6) {
      FUN_140023dd8(plVar1,0x50);
      puVar8 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 9;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar6;
    puVar8[1] = *(undefined8 *)(lVar5 + 8);
    puVar8[2] = 0;
    *(undefined1 *)(puVar8 + 3) = 3;
    *(undefined8 *)((longlong)puVar8 + 0x1c) = 0xffffffffffffffff;
    *puVar8 = &PTR_FUN_14a1fb168;
    *(undefined1 *)(puVar8 + 5) = uVar12;
    *(undefined8 *)((longlong)puVar8 + 0x2c) = 0xffffffff00000000;
    puVar8[7] = 0;
    puVar8[8] = lVar5;
    iVar10 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar10 + 1U;
    if (*(uint *)(param_2 + 0x1a4) < iVar10 + 1U) {
      FUN_1447568fc(param_2 + 0x198,iVar10);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar10 * 8) = puVar8;
    *(int *)((longlong)puVar8 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    *param_1 = puVar8;
    if (DAT_14c9c9af8 < 2) {
      if (*(longlong *)(param_3 + 0x278) != 0) {
        uVar12 = 0;
        lVar5 = FUN_144735dd8(param_2,param_3 + 0x278,0);
        if ((*(byte *)(lVar5 + 0x68) & 0x80) != 0) {
          uVar12 = 0x1c;
        }
        puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar6 = puVar8 + 9;
        if (*(undefined8 **)(param_2 + 0x78) < puVar6) {
          FUN_140023dd8(plVar1,0x50);
          puVar8 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
          puVar6 = puVar8 + 9;
        }
        *(undefined8 **)(param_2 + 0x70) = puVar6;
        puVar8[1] = *(undefined8 *)(lVar5 + 8);
        puVar8[2] = 0;
        *(undefined1 *)(puVar8 + 3) = 3;
        *(undefined8 *)((longlong)puVar8 + 0x1c) = 0xffffffffffffffff;
        *puVar8 = &PTR_FUN_14a1fb168;
        *(undefined1 *)(puVar8 + 5) = uVar12;
        *(undefined8 *)((longlong)puVar8 + 0x2c) = 0xffffffff00000000;
        puVar8[7] = 0;
        puVar8[8] = lVar5;
        iVar10 = *(int *)(param_2 + 0x1a0);
        *(uint *)(param_2 + 0x1a0) = iVar10 + 1U;
        if (*(uint *)(param_2 + 0x1a4) < iVar10 + 1U) {
          FUN_1447568fc(param_2 + 0x198,iVar10);
        }
        *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar10 * 8) = puVar8;
        *(int *)((longlong)puVar8 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
        if (DAT_14c9c9af8 == 0) {
          param_1[1] = puVar8;
        }
        else {
          param_1[2] = puVar8;
        }
      }
    }
    else if (*(longlong *)(param_3 + 0x290) != 0) {
      uVar7 = FUN_14473c272(param_2,param_3 + 0x290,0);
      param_1[3] = uVar7;
    }
    uVar7 = FUN_14473c272(param_2,param_3 + 0x420,0);
    param_1[4] = uVar7;
    param_1[5] = DAT_14c9c9d38;
    param_1[6] = 0x4100000041000000;
    *(undefined4 *)(param_1 + 7) = 0x41000000;
    param_1[8] = 0x40e0000040e00000;
    *(undefined4 *)(param_1 + 9) = 0x40e00000;
    *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_3 + 0x430);
    param_1[10] = *(undefined8 *)(param_3 + 0x428);
    uVar2 = *(uint *)(param_3 + 0x428);
    uVar3 = *(uint *)(param_3 + 0x42c);
    uVar4 = *(uint *)(param_3 + 0x430);
    iVar10 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uVar4 == 0) {
      iVar10 = 0;
    }
    iVar11 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (uVar3 == 0) {
      iVar11 = 0;
    }
    iVar9 = 0x1f;
    if (uVar2 != 0) {
      for (; uVar2 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    *(uint *)(param_1 + 0xc) = uVar2 - 1;
    *(uint *)((longlong)param_1 + 100) = uVar3 - 1;
    *(uint *)(param_1 + 0xd) = uVar4 - 1;
    if (uVar2 == 0) {
      iVar9 = 0;
    }
    *(int *)(param_1 + 0xe) = iVar9;
    *(int *)((longlong)param_1 + 0x74) = iVar11;
    *(int *)(param_1 + 0xf) = iVar10;
    fVar13 = 1.0 / (float)(int)(uVar4 << 3);
    fVar15 = 1.0 / (float)(int)(uVar3 << 3);
    fVar14 = 1.0 / (float)(int)(uVar2 << 3);
    *(float *)(param_1 + 0x10) = fVar14;
    *(float *)((longlong)param_1 + 0x84) = fVar15;
    *(float *)(param_1 + 0x11) = fVar13;
    *(float *)(param_1 + 0x12) = fVar14 * 0.5;
    *(float *)((longlong)param_1 + 0x94) = fVar15 * 0.5;
    *(float *)(param_1 + 0x13) = fVar13 * 0.5;
    *(float *)(param_1 + 0x16) = fVar14 * 7.0;
    *(float *)((longlong)param_1 + 0xb4) = fVar15 * 7.0;
    *(float *)(param_1 + 0x17) = fVar13 * 7.0;
    fVar13 = fVar13 * 8.0;
    fVar15 = fVar15 * 8.0;
    fVar14 = fVar14 * 8.0;
    if (DAT_14c9c9af8 != 0) {
      fVar13 = fVar13 * 1023.0;
      fVar15 = fVar15 * 1023.0;
      fVar14 = fVar14 * 1023.0;
    }
    *(float *)(param_1 + 0x14) = fVar14;
    *(float *)((longlong)param_1 + 0xa4) = fVar15;
    *(float *)(param_1 + 0x15) = fVar13;
  }
  return param_1;
}



// FUNCTION 141761970 FUN_141761970 body=115 status=ok
// SIG undefined FUN_141761970(void)

void FUN_141761970(longlong param_1,void *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  
  uVar1 = *(uint *)((longlong)param_2 + 0x18);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x18);
    *(uint *)(param_1 + 0x18) = iVar2 + uVar1;
    if ((uint)(*(int *)(param_1 + 0x1c) - iVar2) < uVar1) {
      FUN_1400c4ccc(param_1,iVar2);
    }
    _Src = *(void **)((longlong)param_2 + 0x10);
    if (*(void **)((longlong)param_2 + 0x10) == (void *)0x0) {
      _Src = param_2;
    }
    lVar3 = *(longlong *)(param_1 + 0x10);
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar3 = param_1;
    }
    memcpy((void *)(lVar3 + (longlong)iVar2 * 4),_Src,(longlong)(int)uVar1 << 2);
    return;
  }
  return;
}



// FUNCTION 1417619e4 FUN_1417619e4 body=80 status=ok
// SIG undefined FUN_1417619e4(void)

longlong * FUN_1417619e4(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_1400b2b21(*param_1,(int)param_1[1]);
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



// FUNCTION 141761a34 FUN_141761a34 body=201 status=ok
// SIG undefined FUN_141761a34(void)

undefined8 * FUN_141761a34(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  *param_1 = &PTR_FUN_14a1fb9b8;
  lVar4 = param_1[6];
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
  if (param_1[4] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[4] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141761afe FUN_141761afe body=40 status=ok
// SIG undefined FUN_141761afe(void)

undefined8 FUN_141761afe(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141761b26 FUN_141761b26 body=40 status=ok
// SIG undefined FUN_141761b26(void)

undefined8 FUN_141761b26(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141761b4e FUN_141761b4e body=40 status=ok
// SIG undefined FUN_141761b4e(void)

undefined8 FUN_141761b4e(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141761b76 FUN_141761b76 body=353 status=ok
// SIG undefined FUN_141761b76(void)

void FUN_141761b76(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 4;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141761bfb;
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
LAB_141761bfb:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 2)) {
    uVar7 = uVar5 >> 2 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,4,4);
  return;
}



// FUNCTION 141761cd8 FUN_141761cd8 body=596 status=ok
// SIG undefined FUN_141761cd8(void)

void FUN_141761cd8(longlong *param_1)

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
        lVar10 = (longlong)iVar6 * 0xe8;
        uVar3 = ((uint)(*(ulonglong *)(lVar11 + lVar10) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar11 + lVar10) >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        uVar13 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0xe4 + lVar10) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 0xe0 + lVar10) =
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
            if (iVar2 - lVar11 == lVar10) goto LAB_141761ee7;
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
LAB_141761ee7:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141761f2e FUN_141761f2e body=353 status=ok
// SIG undefined FUN_141761f2e(void)

void FUN_141761f2e(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141761fb3;
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
LAB_141761fb3:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 141762090 FUN_141762090 body=369 status=ok
// SIG undefined FUN_141762090(void)

void FUN_141762090(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x68;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141762117;
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
LAB_141762117:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x68)) {
    uVar7 = uVar5 / 0x68 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x68,8);
  return;
}



// FUNCTION 141762202 FUN_141762202 body=353 status=ok
// SIG undefined FUN_141762202(void)

void FUN_141762202(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141762289;
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
LAB_141762289:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 141762364 FUN_141762364 body=40 status=ok
// SIG undefined FUN_141762364(void)

undefined8 FUN_141762364(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14176238c FUN_14176238c body=92 status=ok
// SIG undefined FUN_14176238c(void)

undefined8 * FUN_14176238c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a20b050;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417623e8 FUN_1417623e8 body=40 status=ok
// SIG undefined FUN_1417623e8(void)

undefined8 FUN_1417623e8(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141762410 FUN_141762410 body=40 status=ok
// SIG undefined FUN_141762410(void)

undefined8 FUN_141762410(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141762438 FUN_141762438 body=40 status=ok
// SIG undefined FUN_141762438(void)

undefined8 FUN_141762438(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141762460 FUN_141762460 body=40 status=ok
// SIG undefined FUN_141762460(void)

undefined8 FUN_141762460(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141762488 FUN_141762488 body=472 status=ok
// SIG undefined FUN_141762488(void)

int * FUN_141762488(longlong *param_1,int *param_2)

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



// FUNCTION 141762660 FUN_141762660 body=679 status=ok
// SIG undefined FUN_141762660(void)

void FUN_141762660(longlong *param_1)

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
    if ((int)uVar7 < 1) goto LAB_1417626c4;
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
LAB_1417626c4:
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
      lVar13 = (longlong)iVar12 * 0x38;
      uVar2 = ((uint)(*(ulonglong *)(lVar6 + lVar13) >> 0x14) & 0xffff ^
              (uint)(*(ulonglong *)(lVar6 + lVar13) >> 4)) * -0x7a143595;
      uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
      uVar15 = (longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U;
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0x34 + lVar13) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 0x30 + lVar13) =
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



// FUNCTION 141762908 FUN_141762908 body=275 status=ok
// SIG undefined FUN_141762908(void)

void FUN_141762908(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x50;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 141762a1c FUN_141762a1c body=277 status=ok
// SIG undefined FUN_141762a1c(void)

ulonglong FUN_141762a1c(longlong param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar5 = (ulonglong)uVar1;
  iVar6 = *(int *)(param_1 + 0xc);
  uVar3 = iVar6 - uVar1;
  uVar4 = (ulonglong)uVar3;
  if (((0x3fff < (ulonglong)((longlong)(int)uVar3 * 0x50)) || ((int)(uVar1 * 3) < iVar6 * 2)) &&
     (uVar4 = (ulonglong)CONCAT31((int3)(uVar3 >> 8),(int)uVar3 < 0x41),
     uVar1 == 0 || (int)uVar3 >= 0x41)) {
    if (0 < (int)uVar1) {
      uVar5 = uVar5 * 0x50;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          if (uVar1 < 0x19a) {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
          }
          else {
            uVar4 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar4 = (ulonglong)DAT_14c841df8;
            }
            uVar5 = -uVar4 & (uVar5 + uVar4) - 1;
          }
        }
        else {
          uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
          iVar6 = *(int *)(param_1 + 0xc);
        }
      }
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar5;
      uVar4 = SUB168(auVar2 * ZEXT816(0xcccccccccccccccd),0);
      uVar5 = uVar5 / 0x50;
    }
    if ((int)uVar5 != iVar6) {
      *(int *)(param_1 + 0xc) = (int)uVar5;
      uVar4 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,0x50,8);
    }
  }
  return uVar4;
}



// FUNCTION 141762b32 FUN_141762b32 body=40 status=ok
// SIG undefined FUN_141762b32(void)

undefined8 FUN_141762b32(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141762b5a FUN_141762b5a body=40 status=ok
// SIG undefined FUN_141762b5a(void)

undefined8 FUN_141762b5a(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141762b82 FUN_141762b82 body=40 status=ok
// SIG undefined FUN_141762b82(void)

undefined8 FUN_141762b82(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141762baa FUN_141762baa body=218 status=ok
// SIG undefined FUN_141762baa(void)

undefined8 * FUN_141762baa(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar2 = puVar4 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar2) {
    FUN_140023dd8((longlong *)(param_1 + 0x70),0x58);
    puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar2 = puVar4 + 9;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar2;
  *puVar4 = &PTR_FUN_14a2179c0;
  puVar2 = puVar4 + 1;
  FUN_1404606c4(puVar2);
  iVar1 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar1 + 1U) {
    FUN_1448cfae8((longlong *)(param_1 + 0x98),iVar1);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar1 * 8) = puVar4;
  lVar3 = (**(code **)(*param_2 + 0x3d8))(param_2);
  if (lVar3 != 0) {
    FUN_1449b3f6c(lVar3 + 0x3f08,param_1,puVar2);
  }
  return puVar2;
}



// FUNCTION 141762c84 FUN_141762c84 body=171 status=ok
// SIG undefined FUN_141762c84(void)

void FUN_141762c84(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  plVar2 = (longlong *)param_1[0x15];
  if (*(int *)(param_1 + 0x16) != 0) {
    if (plVar2 == (longlong *)0x0) goto LAB_141762cc6;
    (**(code **)(*plVar2 + 0x60))();
    plVar2 = (longlong *)param_1[0x15];
    if (*(int *)(param_1 + 0x16) != 0) {
      if (plVar2 == (longlong *)0x0) goto LAB_141762cc6;
      (**(code **)*plVar2)(plVar2,0);
      FUN_1446efa72(param_1 + 0x15,0,0,0x10);
      *(undefined4 *)(param_1 + 0x16) = 0;
      plVar2 = (longlong *)param_1[0x15];
    }
  }
  if (plVar2 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_141762cc6:
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000141762d25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 141762d30 FUN_141762d30 body=369 status=ok
// SIG undefined FUN_141762d30(void)

void FUN_141762d30(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0xe68;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141762db8;
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
LAB_141762db8:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0xe68)) {
    uVar7 = uVar5 / 0xe68 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0xe68,8);
  return;
}



// FUNCTION 141762ea2 FUN_141762ea2 body=353 status=ok
// SIG undefined FUN_141762ea2(void)

void FUN_141762ea2(longlong param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  
  uVar3 = *(uint *)(param_1 + 0xe08);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar3);
  }
  iVar9 = 0x40;
  if (0x40 < uVar3) {
    lVar5 = (longlong)(int)uVar3;
    if (0x40 < *(uint *)(param_1 + 0xe0c)) {
      lVar5 = lVar5 + ((ulonglong)(lVar5 * 3) >> 3) + 0x10;
    }
    uVar6 = lVar5 * 0x38;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar6 + 0xf;
        if (uVar6 < 0x7ff1) {
          uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar8 = 0x32;
            if (0x32 < bVar2) {
              uVar8 = (ulonglong)bVar2;
            }
            uVar10 = 0x32 - (ulonglong)bVar2;
            do {
              uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar10 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar10 & 0xffffffff] & 0xf) == 0) goto LAB_141762f4e;
              lVar5 = uVar8 + 1 + uVar10;
              uVar10 = uVar10 - 1;
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
LAB_141762f4e:
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar6 >> 3;
    iVar7 = SUB164(auVar4 * ZEXT816(0x2492492492492493),8);
    iVar9 = 0x7fffffff;
    if ((int)uVar3 <= iVar7) {
      iVar9 = iVar7;
    }
  }
  *(int *)(param_1 + 0xe0c) = iVar9;
  FUN_14020c918(param_1,param_2);
  return;
}



// FUNCTION 141763004 FUN_141763004 body=201 status=ok
// SIG undefined FUN_141763004(void)

undefined8 * FUN_141763004(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  *param_1 = &PTR_FUN_14a1fb9b8;
  lVar4 = param_1[6];
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
  if (param_1[4] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[4] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417630ce FUN_1417630ce body=65 status=ok
// SIG undefined FUN_1417630ce(void)

longlong FUN_1417630ce(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141763110 FUN_141763110 body=40 status=ok
// SIG undefined FUN_141763110(void)

undefined8 FUN_141763110(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141763138 FUN_141763138 body=669 status=ok
// SIG undefined FUN_141763138(void)

void FUN_141763138(longlong param_1,int param_2)

{
  longlong *plVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  
  do {
    if (param_2 == 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x210) = 0;
    if (*(longlong *)(param_1 + 0x208) != 0) {
      FUN_1400020a8();
    }
    plVar1 = (longlong *)(param_1 + 0x1c8);
    puVar2 = (uint *)(param_1 + 0x1d8);
    iVar3 = *(int *)(param_1 + 0x1f0);
    if (iVar3 == 0) {
      uVar13 = 0;
      uVar14 = 1;
      iVar11 = 0;
      iVar7 = 0;
    }
    else {
      puVar8 = *(uint **)(param_1 + 0x1e8);
      if (*(uint **)(param_1 + 0x1e8) == (uint *)0x0) {
        puVar8 = puVar2;
      }
      uVar15 = *puVar8;
      if (uVar15 == 0) {
        iVar11 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar11 = iVar3 + -1;
        }
        uVar13 = 0;
        uVar9 = (ulonglong)(uint)(iVar11 >> 5);
        if (iVar11 >> 5 < 1) {
          uVar9 = uVar13;
        }
        iVar11 = 0;
        do {
          if (uVar9 == uVar13) goto LAB_1417631a2;
          iVar11 = iVar11 + 0x20;
          uVar15 = puVar8[uVar13 + 1];
          uVar13 = uVar13 + 1;
        } while (uVar15 == 0);
      }
      else {
        uVar13 = 0;
        iVar11 = 0;
      }
      uVar14 = (ulonglong)(-uVar15 & uVar15);
      uVar9 = uVar14 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar7 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
      if (iVar3 <= iVar7) {
        iVar7 = iVar3;
      }
    }
    if (iVar7 < iVar3) {
      uVar15 = 0xffffffff;
      do {
        if (*(longlong *)(*plVar1 + 0x10 + (longlong)iVar7 * 0x28) != 0) {
          FUN_1400020a8();
          iVar3 = *(int *)(param_1 + 0x1f0);
        }
        uVar15 = uVar15 & ~(uint)uVar14;
        puVar8 = *(uint **)(param_1 + 0x1e8);
        if (*(uint **)(param_1 + 0x1e8) == (uint *)0x0) {
          puVar8 = puVar2;
        }
        iVar7 = (int)uVar13;
        lVar12 = (longlong)iVar7;
        uVar4 = puVar8[lVar12] & uVar15;
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
            uVar4 = puVar8[lVar12 + lVar10 + 1];
            if (uVar4 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar6 - lVar12 == lVar10) goto LAB_1417631a2;
          }
          uVar13 = (ulonglong)(iVar7 + (int)lVar10 + 1);
          uVar15 = 0xffffffff;
        }
        uVar14 = (ulonglong)(-uVar4 & uVar4);
        uVar9 = uVar14 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar9 != 0) {
          for (; uVar9 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar7 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
      } while (iVar7 < iVar3);
    }
LAB_1417631a2:
    *(undefined4 *)(param_1 + 0x1d0) = 0;
    if (*(int *)(param_1 + 0x1d4) != 0) {
      FUN_140549ad6(plVar1,0);
    }
    *(undefined8 *)(param_1 + 0x1f8) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x1f0) = 0;
    if (0x80 < *(uint *)(param_1 + 500)) {
      *(undefined4 *)(param_1 + 500) = 0x80;
      FUN_1446efbd8(puVar2);
    }
    if (*(longlong *)(param_1 + 0x1e8) != 0) {
      FUN_1400020a8();
    }
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 0x390;
    param_2 = param_2 + -1;
  } while( true );
}



// FUNCTION 1417633d6 FUN_1417633d6 body=255 status=ok
// SIG undefined FUN_1417633d6(void)

void FUN_1417633d6(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar5;
  int iVar6;
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
      uVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar5 = uVar4 * 0x100;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar4 & 0xffffffffffffff) * 0x10]];
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar4 & (uVar5 + uVar4) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,0x10);
      }
    }
    iVar3 = (int)(uVar5 >> 8);
    iVar6 = 0x7fffffff;
    if ((int)uVar1 <= iVar3) {
      iVar6 = iVar3;
    }
    *(int *)(param_1 + 0xc) = iVar6;
    FUN_1446f8d3c(param_1,param_2,iVar6,0x100,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1417634d6 FUN_1417634d6 body=40 status=ok
// SIG undefined FUN_1417634d6(void)

undefined8 FUN_1417634d6(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417634fe FUN_1417634fe body=40 status=ok
// SIG undefined FUN_1417634fe(void)

undefined8 FUN_1417634fe(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141763526 FUN_141763526 body=40 status=ok
// SIG undefined FUN_141763526(void)

undefined8 FUN_141763526(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14176354e FUN_14176354e body=92 status=ok
// SIG undefined FUN_14176354e(void)

undefined8 * FUN_14176354e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a217220;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417635aa FUN_1417635aa body=40 status=ok
// SIG undefined FUN_1417635aa(void)

undefined8 FUN_1417635aa(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417635d2 FUN_1417635d2 body=92 status=ok
// SIG undefined FUN_1417635d2(void)

undefined8 * FUN_1417635d2(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a217260;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14176362e FUN_14176362e body=92 status=ok
// SIG undefined FUN_14176362e(void)

undefined8 * FUN_14176362e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a217280;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14176368a FUN_14176368a body=92 status=ok
// SIG undefined FUN_14176368a(void)

undefined8 * FUN_14176368a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a2172a0;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417636e6 FUN_1417636e6 body=40 status=ok
// SIG undefined FUN_1417636e6(void)

undefined8 FUN_1417636e6(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14176370e FUN_14176370e body=92 status=ok
// SIG undefined FUN_14176370e(void)

undefined8 * FUN_14176370e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a2172e0;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14176376a FUN_14176376a body=92 status=ok
// SIG undefined FUN_14176376a(void)

undefined8 * FUN_14176376a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a217320;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417637c6 FUN_1417637c6 body=92 status=ok
// SIG undefined FUN_1417637c6(void)

undefined8 * FUN_1417637c6(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a217340;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141763822 FUN_141763822 body=92 status=ok
// SIG undefined FUN_141763822(void)

undefined8 * FUN_141763822(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a217360;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14176387e FUN_14176387e body=92 status=ok
// SIG undefined FUN_14176387e(void)

undefined8 * FUN_14176387e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a217380;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417638da FUN_1417638da body=40 status=ok
// SIG undefined FUN_1417638da(void)

undefined8 FUN_1417638da(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141763902 FUN_141763902 body=272 status=ok
// SIG undefined FUN_141763902(void)

void FUN_141763902(undefined8 param_1,ulonglong *param_2,ulonglong *param_3,undefined8 *param_4,
                  undefined2 *param_5)

{
  longlong lVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  
  lVar1 = (longlong)(int)param_3[1] + 1;
  puVar4 = (undefined8 *)*param_2;
  if ((longlong)(int)param_3[1] == 0) {
    puVar4 = (undefined8 *)((longlong)puVar4 + 7U & 0xfffffffffffffff8);
    puVar7 = puVar4 + 2;
    puVar5 = puVar4;
    if ((undefined8 *)param_2[1] < puVar7) {
      FUN_140023dd8(param_2,0x18);
      puVar4 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar7 = puVar4 + 2;
      puVar5 = puVar4;
    }
  }
  else {
    puVar7 = puVar4 + 2;
    if ((undefined8 *)param_2[1] < puVar7) {
      puVar5 = (undefined8 *)((longlong)puVar4 + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + lVar1 * 2;
      if ((undefined8 *)param_2[1] < puVar4) {
        FUN_140023dd8(param_2,(int)lVar1 * 0x10 | 8);
        puVar5 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar4 = puVar5 + lVar1 * 2;
      }
      *param_2 = (ulonglong)puVar4;
      puVar4 = puVar5;
      if (0 < (int)param_3[1]) {
        lVar6 = 0;
        lVar8 = 0;
        do {
          uVar3 = ((undefined8 *)(*param_3 + lVar6))[1];
          *(undefined8 *)((longlong)puVar5 + lVar6) = *(undefined8 *)(*param_3 + lVar6);
          ((undefined8 *)((longlong)puVar5 + lVar6))[1] = uVar3;
          lVar8 = lVar8 + 1;
          lVar6 = lVar6 + 0x10;
        } while (lVar8 < (int)param_3[1]);
        puVar4 = (undefined8 *)(lVar6 + (longlong)puVar5);
      }
      goto LAB_14176394a;
    }
    puVar5 = (undefined8 *)*param_3;
  }
  *param_2 = (ulonglong)puVar7;
LAB_14176394a:
  uVar2 = *param_5;
  *puVar4 = *param_4;
  *(undefined2 *)(puVar4 + 1) = uVar2;
  *(undefined1 *)((longlong)puVar4 + 10) = 3;
  *param_3 = (ulonglong)puVar5;
  *(int *)(param_3 + 1) = (int)lVar1;
  return;
}



// FUNCTION 141763a12 FUN_141763a12 body=157 status=ok
// SIG undefined FUN_141763a12(void)

void FUN_141763a12(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined8 *)(param_1 + 0x380) = param_3;
  *(undefined1 *)(param_1 + 0x37d) = 1;
  if (*(char *)(param_1 + 0x37c) == '\x01') {
    *(undefined4 *)(param_1 + 0x378) =
         *(undefined4 *)
          (*(longlong *)(param_1 + 0x228) + 0x5224 +
          (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x228) + 0x52f0) * 4);
    FUN_14046096c(param_1,&local_40,param_2);
    *(undefined8 *)(param_1 + 0x338) = local_20;
    *(undefined4 *)(param_1 + 0x328) = local_30;
    *(undefined4 *)(param_1 + 0x32c) = uStack_2c;
    *(undefined4 *)(param_1 + 0x330) = uStack_28;
    *(undefined4 *)(param_1 + 0x334) = uStack_24;
    *(undefined4 *)(param_1 + 0x318) = local_40;
    *(undefined4 *)(param_1 + 0x31c) = uStack_3c;
    *(undefined4 *)(param_1 + 800) = uStack_38;
    *(undefined4 *)(param_1 + 0x324) = uStack_34;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141763ab0 FUN_141763ab0 body=141 status=ok
// SIG undefined FUN_141763ab0(void)

void FUN_141763ab0(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xc0);
  if ((uint)param_3 < 7) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 5);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xc0,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0xc0),param_1,(longlong)param_2 << 5);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xc0,param_2,param_3,param_4);
  return;
}



// FUNCTION 141763b3e FUN_141763b3e body=305 status=ok
// SIG undefined FUN_141763b3e(void)

void FUN_141763b3e(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_1) goto LAB_141763bd8;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  iVar3 = 0;
  if ((int)param_2[1] == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    param_2 = (longlong *)*param_2;
    puVar2 = (undefined8 *)0x0;
    iVar3 = 0;
    if (param_2 != (longlong *)0x0) {
      (**(code **)(*param_2 + 0x40))(param_2,&local_30);
      puVar2 = local_30;
      iVar3 = local_28;
    }
  }
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  if ((int)param_1[1] == 0) {
LAB_141763bb1:
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      FUN_1446efa72(param_1,0,0,0x10);
      *(undefined4 *)(param_1 + 1) = 0;
      goto LAB_141763bb1;
    }
  }
  *param_1 = (longlong)puVar2;
  *(int *)(param_1 + 1) = iVar3;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_141763bd8;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_141763bd8:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141763c70 FUN_141763c70 body=67 status=ok
// SIG undefined FUN_141763c70(void)

longlong FUN_141763c70(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141763cb4 FUN_141763cb4 body=44 status=ok
// SIG undefined FUN_141763cb4(void)

longlong FUN_141763cb4(longlong param_1,int param_2)

{
  FUN_1400d627e(param_1 + 8);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141763ce0 FUN_141763ce0 body=310 status=ok
// SIG undefined FUN_141763ce0(void)

longlong * FUN_141763ce0(longlong *param_1,int param_2)

{
  uint uVar1;
  longlong *lpTlsValue;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    lpTlsValue = TlsGetValue(DAT_14c896140);
    if (lpTlsValue == (longlong *)0x0) {
      lpTlsValue = (longlong *)FUN_14001cc68(0x18,0x10);
      *lpTlsValue = 0;
      lpTlsValue[1] = 0;
      *(undefined4 *)(lpTlsValue + 2) = 0;
      TlsSetValue(DAT_14c896140,lpTlsValue);
    }
    if ((int)lpTlsValue[2] < 0x100) {
      lVar2 = lpTlsValue[1];
    }
    else {
      lVar2 = *lpTlsValue;
      if (lVar2 != 0) {
        uVar1 = FUN_14493c560();
        if (uVar1 == 0) {
          lVar3 = 0;
        }
        else {
          lVar3 = (ulonglong)((uVar1 & 0x3fff) * 0x18) +
                  *(longlong *)(&DAT_14c833b00 + (ulonglong)(uVar1 >> 0xe) * 8);
        }
        *(longlong *)(lVar3 + 8) = lVar2;
        FUN_144a8fde6(&DAT_14c896180,uVar1);
      }
      *lpTlsValue = lpTlsValue[1];
      *(undefined4 *)(lpTlsValue + 2) = 0;
      lVar2 = 0;
    }
    *param_1 = lVar2;
    lpTlsValue[1] = (longlong)param_1;
    *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  }
  return param_1;
}



// FUNCTION 141763e16 FUN_141763e16 body=44 status=ok
// SIG undefined FUN_141763e16(void)

longlong FUN_141763e16(longlong param_1,int param_2)

{
  FUN_1400200e4(param_1 + 0x20);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141763e42 FUN_141763e42 body=40 status=ok
// SIG undefined FUN_141763e42(void)

undefined8 FUN_141763e42(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141763e6a FUN_141763e6a body=134 status=ok
// SIG undefined FUN_141763e6a(void)

bool FUN_141763e6a(ushort *param_1)

{
  longlong lVar1;
  bool bVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((((*(byte *)((longlong)&DAT_14ca814d0 + (ulonglong)*param_1 * 0x3c + 5) & 8) == 0) ||
       ((int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf] < 3)) ||
      ((*(byte *)((longlong)param_1 + 0x3d) & 1) == 0)) || (1 < *(uint *)(param_1 + 0xc))) {
    bVar2 = false;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x24) + 0x18);
    FUN_1446f470e(&local_20,L"FHairStrandsVertexFactory",1);
    bVar2 = lVar1 == local_20;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141763ef2 FUN_141763ef2 body=134 status=ok
// SIG undefined FUN_141763ef2(void)

bool FUN_141763ef2(ushort *param_1)

{
  longlong lVar1;
  bool bVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((((*(byte *)((longlong)&DAT_14ca814d0 + (ulonglong)*param_1 * 0x3c + 5) & 8) == 0) ||
       ((int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf] < 3)) ||
      ((*(byte *)((longlong)param_1 + 0x3d) & 1) == 0)) || (1 < *(uint *)(param_1 + 0xc))) {
    bVar2 = false;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x24) + 0x18);
    FUN_1446f470e(&local_20,L"FHairStrandsVertexFactory",1);
    bVar2 = lVar1 == local_20;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141763f7a FUN_141763f7a body=134 status=ok
// SIG undefined FUN_141763f7a(void)

bool FUN_141763f7a(ushort *param_1)

{
  longlong lVar1;
  bool bVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((((*(byte *)((longlong)&DAT_14ca814d0 + (ulonglong)*param_1 * 0x3c + 5) & 8) == 0) ||
       ((int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf] < 3)) ||
      ((*(byte *)((longlong)param_1 + 0x3d) & 1) == 0)) || (1 < *(uint *)(param_1 + 0xc))) {
    bVar2 = false;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x24) + 0x18);
    FUN_1446f470e(&local_20,L"FHairStrandsVertexFactory",1);
    bVar2 = lVar1 == local_20;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141764002 FUN_141764002 body=134 status=ok
// SIG undefined FUN_141764002(void)

bool FUN_141764002(ushort *param_1)

{
  longlong lVar1;
  bool bVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((((*(byte *)((longlong)&DAT_14ca814d0 + (ulonglong)*param_1 * 0x3c + 5) & 8) == 0) ||
       ((int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf] < 3)) ||
      ((*(byte *)((longlong)param_1 + 0x3d) & 1) == 0)) || (1 < *(uint *)(param_1 + 0xc))) {
    bVar2 = false;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x24) + 0x18);
    FUN_1446f470e(&local_20,L"FHairStrandsVertexFactory",1);
    bVar2 = lVar1 == local_20;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141764089 FUN_141764089 body=488 status=ok
// SIG undefined FUN_141764089(void)

void FUN_141764089(longlong param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58;
  ulonglong uStack_50;
  longlong local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  puVar1 = *(undefined8 **)(param_1 + 0x38c0);
  if (puVar1 != (undefined8 *)0x0) {
    local_a8 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    uStack_a0 = 0x8000000000;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    if (puVar1 == &local_b8) {
      puVar1[4] = 0;
      puVar1[5] = 0;
    }
    else {
      *(undefined4 *)puVar1 = 0;
      *(undefined4 *)((longlong)puVar1 + 4) = 0;
      *(undefined4 *)(puVar1 + 1) = 0;
      *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
      if (puVar1[2] == 0) {
        uStack_a0._0_4_ = 0;
        uStack_a0._4_4_ = 0x80;
        local_a8 = 0;
      }
      else {
        FUN_1400020a8();
      }
      puVar1[2] = local_a8;
      local_a8 = 0;
      *(undefined4 *)(puVar1 + 3) = (undefined4)uStack_a0;
      *(undefined4 *)((longlong)puVar1 + 0x1c) = uStack_a0._4_4_;
      uStack_a0 = 0;
      *(undefined4 *)(puVar1 + 4) = (undefined4)local_98;
      *(undefined4 *)((longlong)puVar1 + 0x24) = local_98._4_4_;
      *(undefined4 *)(puVar1 + 5) = (undefined4)uStack_90;
      *(undefined4 *)((longlong)puVar1 + 0x2c) = uStack_90._4_4_;
      if (puVar1[6] != 0) {
        FUN_1400020a8();
      }
      puVar1[6] = local_88;
      *(undefined4 *)(puVar1 + 7) = (undefined4)uStack_80;
      *(undefined4 *)((longlong)puVar1 + 0x3c) = uStack_80._4_4_;
    }
    uStack_80 = 0;
    local_88 = 0;
    *(undefined4 *)(puVar1 + 10) = (undefined4)local_68;
    *(undefined4 *)((longlong)puVar1 + 0x54) = local_68._4_4_;
    *(undefined4 *)(puVar1 + 0xb) = (undefined4)uStack_60;
    *(undefined4 *)((longlong)puVar1 + 0x5c) = uStack_60._4_4_;
    *(undefined4 *)(puVar1 + 8) = (undefined4)local_78;
    *(undefined4 *)((longlong)puVar1 + 0x44) = local_78._4_4_;
    *(undefined4 *)(puVar1 + 9) = (undefined4)uStack_70;
    *(undefined4 *)((longlong)puVar1 + 0x4c) = uStack_70._4_4_;
    FUN_14010ab6e(puVar1 + 0xc,&local_58);
    FUN_14010ab6e(puVar1 + 0xe,&local_48);
    FUN_144827b96(local_48,uStack_40 & 0xffffffff);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    FUN_144827b96(local_58,uStack_50 & 0xffffffff);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14176427c FUN_14176427c body=134 status=ok
// SIG undefined FUN_14176427c(void)

bool FUN_14176427c(ushort *param_1)

{
  longlong lVar1;
  bool bVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((((*(byte *)((longlong)&DAT_14ca814d0 + (ulonglong)*param_1 * 0x3c + 5) & 8) == 0) ||
       ((int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf] < 3)) ||
      ((*(byte *)((longlong)param_1 + 0x3d) & 1) == 0)) || (1 < *(uint *)(param_1 + 0xc))) {
    bVar2 = false;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x24) + 0x18);
    FUN_1446f470e(&local_20,L"FHairStrandsVertexFactory",1);
    bVar2 = lVar1 == local_20;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141764304 FUN_141764304 body=134 status=ok
// SIG undefined FUN_141764304(void)

bool FUN_141764304(ushort *param_1)

{
  longlong lVar1;
  bool bVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((((*(byte *)((longlong)&DAT_14ca814d0 + (ulonglong)*param_1 * 0x3c + 5) & 8) == 0) ||
       ((int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf] < 3)) ||
      ((*(byte *)((longlong)param_1 + 0x3d) & 1) == 0)) || (1 < *(uint *)(param_1 + 0xc))) {
    bVar2 = false;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x24) + 0x18);
    FUN_1446f470e(&local_20,L"FHairStrandsVertexFactory",1);
    bVar2 = lVar1 == local_20;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141764396 FUN_141764396 body=134 status=ok
// SIG undefined FUN_141764396(void)

bool FUN_141764396(ushort *param_1)

{
  longlong lVar1;
  bool bVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((((*(byte *)((longlong)&DAT_14ca814d0 + (ulonglong)*param_1 * 0x3c + 5) & 8) == 0) ||
       ((int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf] < 3)) ||
      ((*(byte *)((longlong)param_1 + 0x3d) & 1) == 0)) || (1 < *(uint *)(param_1 + 0xc))) {
    bVar2 = false;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x24) + 0x18);
    FUN_1446f470e(&local_20,L"FHairStrandsVertexFactory",1);
    bVar2 = lVar1 == local_20;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14176441e FUN_14176441e body=134 status=ok
// SIG undefined FUN_14176441e(void)

bool FUN_14176441e(ushort *param_1)

{
  longlong lVar1;
  bool bVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((((*(byte *)((longlong)&DAT_14ca814d0 + (ulonglong)*param_1 * 0x3c + 5) & 8) == 0) ||
       ((int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf] < 3)) ||
      ((*(byte *)((longlong)param_1 + 0x3d) & 1) == 0)) || (1 < *(uint *)(param_1 + 0xc))) {
    bVar2 = false;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x24) + 0x18);
    FUN_1446f470e(&local_20,L"FHairStrandsVertexFactory",1);
    bVar2 = lVar1 == local_20;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417644a6 FUN_1417644a6 body=134 status=ok
// SIG undefined FUN_1417644a6(void)

bool FUN_1417644a6(ushort *param_1)

{
  longlong lVar1;
  bool bVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((((*(byte *)((longlong)&DAT_14ca814d0 + (ulonglong)*param_1 * 0x3c + 5) & 8) == 0) ||
       ((int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf] < 3)) ||
      ((*(byte *)((longlong)param_1 + 0x3d) & 1) == 0)) || (1 < *(uint *)(param_1 + 0xc))) {
    bVar2 = false;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x24) + 0x18);
    FUN_1446f470e(&local_20,L"FHairStrandsVertexFactory",1);
    bVar2 = lVar1 == local_20;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14176452e FUN_14176452e body=134 status=ok
// SIG undefined FUN_14176452e(void)

bool FUN_14176452e(ushort *param_1)

{
  longlong lVar1;
  bool bVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((((*(byte *)((longlong)&DAT_14ca814d0 + (ulonglong)*param_1 * 0x3c + 5) & 8) == 0) ||
       ((int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf] < 3)) ||
      ((*(byte *)((longlong)param_1 + 0x3d) & 1) == 0)) || (1 < *(uint *)(param_1 + 0xc))) {
    bVar2 = false;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x24) + 0x18);
    FUN_1446f470e(&local_20,L"FHairStrandsVertexFactory",1);
    bVar2 = lVar1 == local_20;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417645b6 FUN_1417645b6 body=134 status=ok
// SIG undefined FUN_1417645b6(void)

bool FUN_1417645b6(ushort *param_1)

{
  longlong lVar1;
  bool bVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((((*(byte *)((longlong)&DAT_14ca814d0 + (ulonglong)*param_1 * 0x3c + 5) & 8) == 0) ||
       ((int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf] < 3)) ||
      ((*(byte *)((longlong)param_1 + 0x3d) & 1) == 0)) || (1 < *(uint *)(param_1 + 0xc))) {
    bVar2 = false;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x24) + 0x18);
    FUN_1446f470e(&local_20,L"FHairStrandsVertexFactory",1);
    bVar2 = lVar1 == local_20;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14176463e FUN_14176463e body=139 status=ok
// SIG undefined FUN_14176463e(void)

undefined8 FUN_14176463e(ushort *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x24) + 0x18);
  FUN_1446f470e(&local_28,L"FHairStrandsVertexFactory",1);
  if ((((lVar1 == local_28) &&
       (lVar1 = (ulonglong)*param_1 * 0x3c,
       (*(byte *)((longlong)&DAT_14ca814d0 + lVar1 + 5) & 8) != 0)) &&
      (2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf])) &&
     ((*(byte *)((longlong)param_1 + 0x3d) & 1) != 0)) {
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),*(uint *)(param_1 + 0xc) < 2);
  }
  else {
    uVar2 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417646ca FUN_1417646ca body=139 status=ok
// SIG undefined FUN_1417646ca(void)

undefined8 FUN_1417646ca(ushort *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x24) + 0x18);
  FUN_1446f470e(&local_28,L"FHairStrandsVertexFactory",1);
  if ((((lVar1 == local_28) &&
       (lVar1 = (ulonglong)*param_1 * 0x3c,
       (*(byte *)((longlong)&DAT_14ca814d0 + lVar1 + 5) & 8) != 0)) &&
      (2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf])) &&
     ((*(byte *)((longlong)param_1 + 0x3d) & 1) != 0)) {
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),*(uint *)(param_1 + 0xc) < 2);
  }
  else {
    uVar2 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141764756 FUN_141764756 body=139 status=ok
// SIG undefined FUN_141764756(void)

undefined8 FUN_141764756(ushort *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x24) + 0x18);
  FUN_1446f470e(&local_28,L"FHairStrandsVertexFactory",1);
  if ((((lVar1 == local_28) &&
       (lVar1 = (ulonglong)*param_1 * 0x3c,
       (*(byte *)((longlong)&DAT_14ca814d0 + lVar1 + 5) & 8) != 0)) &&
      (2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf])) &&
     ((*(byte *)((longlong)param_1 + 0x3d) & 1) != 0)) {
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),*(uint *)(param_1 + 0xc) < 2);
  }
  else {
    uVar2 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417647e2 FUN_1417647e2 body=147 status=ok
// SIG undefined FUN_1417647e2(void)

undefined8 FUN_1417647e2(ushort *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x24) + 0x18);
  FUN_1446f470e(&local_28,L"FHairStrandsVertexFactory",1);
  if ((((lVar1 == local_28) &&
       (uVar2 = (ulonglong)*param_1,
       (*(byte *)((longlong)&DAT_14ca814d0 + uVar2 * 0x3c + 5) & 8) != 0)) &&
      (2 < (int)(&DAT_14ca814b8)[uVar2 * 0xf])) &&
     (((*(byte *)((longlong)param_1 + 0x3d) & 1) != 0 && (*(uint *)(param_1 + 0xc) < 2)))) {
    uVar2 = CONCAT71((int7)(uVar2 * 0x3c >> 8),*(undefined1 *)(&DAT_14ca814c8 + uVar2 * 0xf)) &
            0xffffffffffffff04;
    uVar3 = CONCAT71((int7)(uVar2 >> 8),(byte)uVar2 >> 2);
  }
  else {
    uVar3 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141764876 FUN_141764876 body=355 status=ok
// SIG undefined FUN_141764876(void)

void FUN_141764876(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  uint *param_5,undefined8 param_6)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_98 [32];
  uint *local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar1 = FUN_14054728d(*(undefined4 *)(param_1 + 0x20),param_3,*param_4,*param_5 >> 9 & 1);
  if (cVar1 != '\0') {
    local_50 = FUN_141481c6c(param_5);
    uVar2 = FUN_144a875de(param_3,&local_50);
    uVar3 = FUN_144a53bf0(param_3,&local_50);
    local_60 = param_6;
    local_78 = param_5;
    local_70 = uVar2;
    local_68 = uVar3;
    FUN_14718375c(param_1,param_2,param_3,param_4);
    local_60 = param_6;
    local_78 = param_5;
    local_70 = uVar2;
    local_68 = uVar3;
    FUN_1471839e4(param_1,param_2,param_3,param_4);
    local_60 = param_6;
    local_78 = param_5;
    local_70 = uVar2;
    local_68 = uVar3;
    FUN_147183c6c(param_1,param_2,param_3,param_4);
    local_60 = param_6;
    local_78 = param_5;
    local_70 = uVar2;
    local_68 = uVar3;
    FUN_147183ede(param_1,param_2,param_3,param_4);
    local_60 = param_6;
    local_78 = param_5;
    local_70 = uVar2;
    local_68 = uVar3;
    FUN_14718415c(param_1,param_2,param_3,param_4);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417649da FUN_1417649da body=484 status=ok
// SIG undefined FUN_1417649da(void)

undefined8 * FUN_1417649da(int param_1)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  DWORD DVar6;
  DWORD DVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  int iVar11;
  
  lVar4 = DAT_14c9d2468;
  if (DAT_14c9d7010 < 1) {
    uVar1 = *(ushort *)(&DAT_14ca85070 + (longlong)param_1 * 2);
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar11 = *(int *)(lVar3 + 0xc60);
    if (((iVar11 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar11 == 2)) {
      uVar10 = 0;
    }
    else if (iVar11 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar10 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar10 = 1;
    }
    lVar5 = DAT_14c9d2468;
    if (*(int *)(lVar4 + uVar10 * 4) == 1) {
      iVar11 = 4;
    }
    else {
      iVar11 = 2;
      if (3 < (int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf]) {
        iVar2 = *(int *)(lVar3 + 0xc60);
        if (((iVar2 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar2 == 2)) {
          uVar10 = 0;
        }
        else if (iVar2 == 1) {
          DVar6 = FUN_140ad26c0();
          DVar7 = GetCurrentThreadId();
          uVar10 = (ulonglong)(DVar6 != DVar7);
        }
        else {
          uVar10 = 1;
        }
        if (*(int *)(lVar5 + uVar10 * 4) == 2) {
          iVar11 = 5;
        }
      }
    }
  }
  else {
    iVar11 = 1;
  }
  puVar8 = (undefined8 *)FUN_14001cc68(0x88,0x10);
  FUN_14025f50e(puVar8,L"HairVisibility",0,param_1,0,0);
  *puVar8 = &PTR_FUN_14a2291c0;
  *(int *)(puVar8 + 8) = iVar11;
  puVar8[9] = 0;
  puVar8[10] = 0;
  *(undefined4 *)(puVar8 + 0xb) = 0x11;
  puVar8[0xc] = 0;
  puVar8[0xd] = 0;
  puVar8[0xe] = 0;
  puVar8[0xf] = 0;
  *(undefined4 *)(puVar8 + 0x10) = 0;
  if (iVar11 == 2) {
    puVar9 = &DAT_14c9c0ea0;
  }
  else {
    if (iVar11 != 1) {
      return puVar8;
    }
    puVar9 = &DAT_14c9c0d38;
  }
  puVar8[9] = DAT_14c9c0d50;
  puVar8[10] = *puVar9;
  return puVar8;
}



// FUNCTION 141764c1c FUN_141764c1c body=29 status=ok
// SIG undefined FUN_141764c1c(void)

undefined8 FUN_141764c1c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141764c3a FUN_141764c3a body=29 status=ok
// SIG undefined FUN_141764c3a(void)

undefined8 FUN_141764c3a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141764c58 FUN_141764c58 body=201 status=ok
// SIG undefined FUN_141764c58(void)

undefined8 * FUN_141764c58(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  *param_1 = &PTR_FUN_14a1fb9b8;
  lVar4 = param_1[6];
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
  if (param_1[4] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[4] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141764d22 FUN_141764d22 body=201 status=ok
// SIG undefined FUN_141764d22(void)

undefined8 * FUN_141764d22(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  *param_1 = &PTR_FUN_14a1fb9b8;
  lVar4 = param_1[6];
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
  if (param_1[4] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[4] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141764deb FUN_141764deb body=2118 status=ok
// SIG undefined FUN_141764deb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141764deb(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  longlong *plVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  undefined4 *puVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  bool bVar22;
  undefined4 uVar23;
  undefined4 uVar25;
  undefined1 auVar24 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar26 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auStack_e8 [32];
  undefined1 *local_c8;
  ulonglong local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined8 uStack_88;
  undefined4 local_80;
  uint local_7c;
  undefined4 local_78;
  undefined8 local_74;
  undefined2 local_6c;
  short local_6a;
  undefined4 local_68;
  undefined2 local_64;
  ulonglong local_60;
  
  uVar17 = (ulonglong)param_2;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9e3fec) && (FUN_144b3d300(&DAT_14c9e3fec), DAT_14c9e3fec == -1)) {
    DAT_14c9e3fe8 = *(int *)(DAT_14c9e3bb8 + 4);
    _Init_thread_footer(&DAT_14c9e3fec);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9e3ff4) && (FUN_144b3d300(&DAT_14c9e3ff4), DAT_14c9e3ff4 == -1)) {
    DAT_14c9e3ff0 = *(uint *)(DAT_14c9e3bd0 + 4);
    _Init_thread_footer(&DAT_14c9e3ff4);
  }
  iVar7 = *(int *)(DAT_14c9e3bb8 + 4);
  if (DAT_14c9e3fe8 == iVar7) {
    bVar22 = DAT_14c9e3ff0 != *(uint *)(DAT_14c9e3bd0 + 4);
  }
  else {
    bVar22 = true;
  }
  uVar9 = 0;
  bVar4 = false;
  if (DAT_14c9e3c60 == '\x01') {
    lVar15 = (longlong)DAT_14c9e3c30;
    if (lVar15 == 0) {
      uVar9 = 0;
    }
    else {
      lVar10 = 0;
      uVar9 = 0;
      do {
        uVar9 = (uVar9 + 1) - (uint)(*(longlong *)(lVar10 + DAT_14c9e3c28 + 0x18) == 0);
        lVar10 = lVar10 + 0x28;
      } while (lVar15 * 0x28 != lVar10);
    }
    if (DAT_14c9e3ff0 < uVar9) {
      uVar9 = DAT_14c9e3ff0;
    }
    if (DAT_14c9e3c20 != (longlong *)0x0) {
      lVar15 = (**(code **)(*DAT_14c9e3c20 + 0x10))();
      bVar4 = *(ushort *)(lVar15 + 0x36) < uVar9;
      goto LAB_141764ea6;
    }
    bVar4 = true;
LAB_141764fc5:
    auVar5 = _DAT_149931e80;
    DAT_14c9e3ff0 = *(uint *)(DAT_14c9e3bd0 + 4);
    DAT_14c9e3fe8 = iVar7;
    if (DAT_14c9e3c30 != 0) {
      uVar2 = lVar15 * 0x28 - 0x28;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar2;
      uVar23 = SUB164(auVar26 * ZEXT816(0xcccccccccccccccd),8);
      uVar25 = (undefined4)(uVar2 / 0x140000000);
      auVar27._0_8_ = CONCAT44(uVar25,uVar23);
      auVar27._8_4_ = uVar23;
      auVar27._12_4_ = uVar25;
      auVar24._0_8_ = auVar27._0_8_ >> 5;
      auVar24._8_8_ = auVar27._8_8_ >> 5;
      puVar18 = (undefined4 *)(DAT_14c9e3c28 + 0x7c);
      uVar11 = 0;
      auVar26 = pmovsxbq(in_XMM1,0x302);
      auVar27 = pmovsxbq(in_XMM2,0x100);
      auVar24 = auVar24 | _DAT_149931e80;
      do {
        lVar15 = auVar24._0_8_;
        lVar10 = auVar24._8_8_;
        if ((bool)(~(lVar15 < (longlong)(uVar11 ^ auVar5._0_8_)) & 1)) {
          puVar18[-0x1e] = 0xffffffff;
        }
        auVar28._8_4_ = (int)uVar11;
        auVar28._0_8_ = uVar11;
        auVar28._12_4_ = (int)(uVar11 >> 0x20);
        if ((longlong)((auVar28._8_8_ | auVar27._8_8_) ^ auVar5._8_8_) <= lVar10) {
          puVar18[-0x14] = 0xffffffff;
        }
        auVar28 = (auVar28 | auVar26) ^ auVar5;
        if (auVar28._0_8_ <= lVar15) {
          puVar18[-10] = 0xffffffff;
        }
        if (auVar28._8_8_ <= lVar10) {
          *puVar18 = 0xffffffff;
        }
        uVar11 = uVar11 + 4;
        puVar18 = puVar18 + 0x28;
      } while ((uVar2 / 0x28 + 4 & 0xfffffffffffffffc) != uVar11);
    }
    DAT_14c9e3c60 = '\x01';
    while (plVar6 = DAT_14c9e3c58, plVar14 = (longlong *)*DAT_14c9e3c58, plVar14 != (longlong *)0x0)
    {
      DAT_14c9e3c58 = plVar14;
      *(undefined4 *)(plVar14 + 1) = 0;
      if (plVar6 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    if (uVar9 == 0) {
      uVar9 = 0;
    }
    else {
      uVar8 = 0;
      do {
        puVar12 = (undefined8 *)FUN_14001cc68(0x10,0x10);
        *puVar12 = 0;
        *(uint *)(puVar12 + 1) = uVar8;
        if (puVar12 != (undefined8 *)0x0) {
          *DAT_14c9e3c50 = puVar12;
          DAT_14c9e3c50 = puVar12;
        }
        uVar8 = uVar8 + 1;
      } while (uVar9 != uVar8);
    }
  }
  else {
LAB_141764ea6:
    lVar15 = DAT_14c9e3c28;
    bVar4 = (bool)(bVar4 | bVar22);
    if ((0 < *(int *)(DAT_14c9e3c00 + 4)) || (bVar4)) {
      iVar7 = *(int *)(DAT_14c9e3bb8 + 4);
      lVar15 = (longlong)DAT_14c9e3c30;
      goto LAB_141764fc5;
    }
    lVar10 = (longlong)DAT_14c9e3c30;
    if (lVar10 == 0) {
      bVar4 = false;
    }
    else {
      lVar21 = 0;
      do {
        lVar19 = *(longlong *)(lVar15 + 0x18 + lVar21);
        if ((lVar19 != 0) && (plVar14 = *(longlong **)(lVar19 + 0x60), plVar14 != (longlong *)0x0))
        {
          lVar19 = (**(code **)(*plVar14 + 8))(plVar14);
          iVar7 = *(int *)(lVar19 + 0x28);
          lVar19 = (**(code **)(*plVar14 + 8))(plVar14);
          iVar3 = *(int *)(lVar19 + 0x24);
          if ((iVar3 != *(int *)(lVar15 + 0xc + lVar21)) ||
             (iVar7 != *(int *)(lVar15 + 0x10 + lVar21))) {
            *(undefined1 *)(lVar15 + 0x20 + lVar21) = 1;
            *(ulonglong *)(lVar15 + 0xc + lVar21) = CONCAT44(iVar7,iVar3);
            DAT_14c9e3c61 = '\x01';
          }
        }
        lVar21 = lVar21 + 0x28;
        bVar4 = false;
      } while (lVar10 * 0x28 != lVar21);
    }
  }
  lVar15 = DAT_14c9e3c28;
  if (DAT_14c9e3c60 == '\x01') {
    local_b8 = uVar17 & 0xffff;
    local_b0 = *(undefined8 *)(&DAT_14ca8c1f0 + local_b8 * 8);
    local_a8 = (undefined1  [16])0x0;
    lVar10 = (longlong)DAT_14c9e3c30;
    if (lVar10 != 0) {
      lVar21 = DAT_14c9e3c28 + 0x20;
      lVar19 = 0;
      do {
        if (((*(longlong *)(lVar15 + 0x18 + lVar19) != 0) && (*(int *)(lVar15 + 4 + lVar19) == -1))
           && (plVar14 = (longlong *)*DAT_14c9e3c58, plVar14 != (longlong *)0x0)) {
          *(int *)(lVar15 + 4 + lVar19) = (int)plVar14[1];
          plVar6 = DAT_14c9e3c58;
          DAT_14c9e3c58 = plVar14;
          *(undefined4 *)(plVar14 + 1) = 0;
          if (plVar6 != (longlong *)0x0) {
            FUN_1400020a8();
          }
          uVar23 = local_a8._8_4_;
          lVar20 = (longlong)(int)local_a8._8_4_;
          uVar8 = local_a8._8_4_ + 1;
          local_a8._8_4_ = uVar8;
          if ((uint)local_a8._12_4_ < uVar8) {
            FUN_1471cdc7a(local_a8,uVar23);
          }
          lVar1 = lVar21 + lVar19;
          *(undefined4 *)(local_a8._0_8_ + 0x10 + lVar20 * 0x28) = *(undefined4 *)(lVar1 + -0x10);
          uVar13 = *(undefined8 *)(lVar1 + -0x18);
          puVar12 = (undefined8 *)(local_a8._0_8_ + lVar20 * 0x28);
          *puVar12 = *(undefined8 *)(lVar1 + -0x20);
          puVar12[1] = uVar13;
          lVar1 = *(longlong *)(lVar21 + lVar19 + -8);
          *(longlong *)(local_a8._0_8_ + 0x18 + lVar20 * 0x28) = lVar1;
          if (lVar1 != 0) {
            LOCK();
            *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
            UNLOCK();
          }
          *(undefined1 *)(local_a8._0_8_ + lVar20 * 0x28 + 0x20) = *(undefined1 *)(lVar21 + lVar19);
        }
        lVar19 = lVar19 + 0x28;
      } while (lVar10 * 0x28 != lVar19);
    }
    if (bVar4) {
      local_6a = (short)uVar9 + (ushort)(uVar9 == 0);
      local_98._0_8_ = 0x20009;
      if (*(longlong *)(&DAT_14ca814b0 + local_b8 * 0x3c) == DAT_14ca81490) {
        local_98._0_8_ = 0x1000009;
      }
      local_80 = DAT_14ca83a68;
      uStack_88 = _DAT_14ca83a60;
      local_74 = CONCAT44(DAT_14c9e3fe8,DAT_14c9e3fe8);
      local_98._8_8_ = _DAT_14ca83a58;
      local_7c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
      local_78 = 0;
      local_6c = 1;
      local_68 = 0x15010101;
      local_64 = 0xff00;
      uVar13 = FUN_14472bf7a(param_1,local_98,L"IES.AtlasTexture",1);
    }
    else {
      uVar13 = FUN_14473c272(param_1,&DAT_14c9e3c20,0);
    }
    local_98._0_8_ = uVar13;
    if (0 < (int)local_a8._8_4_) {
      local_c8 = local_98;
      FUN_142cbd4e7(param_1,uVar17,local_b0,local_a8);
    }
    if (bVar4) {
      plVar14 = (longlong *)FUN_14495f742(param_1,uVar13);
      plVar6 = DAT_14c9e3c20;
      plVar14 = (longlong *)*plVar14;
      if (DAT_14c9e3c20 != plVar14) {
        DAT_14c9e3c20 = plVar14;
        if (plVar14 != (longlong *)0x0) {
          (**(code **)(*plVar14 + 0x30))();
        }
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x38))(plVar6);
        }
      }
    }
    DAT_14c9e3c60 = '\0';
    FUN_145e3a55a(local_a8._0_8_,local_a8._8_4_);
    lVar15 = local_a8._0_8_;
  }
  else {
    if (DAT_14c9e3c61 != '\x01') goto LAB_141764ef1;
    local_98 = (undefined1  [16])0x0;
    iVar7 = 1;
    if (1 < DAT_14c9e3c30) {
      iVar7 = DAT_14c9e3c30;
    }
    FUN_1471cde1e(local_98,iVar7);
    lVar15 = (longlong)DAT_14c9e3c30;
    if (lVar15 != 0) {
      lVar21 = DAT_14c9e3c28 + 0x20;
      lVar10 = 0;
      do {
        if (*(char *)(lVar21 + lVar10) == '\x01') {
          *(undefined1 *)(lVar21 + lVar10) = 0;
          uVar23 = local_98._8_4_;
          lVar19 = (longlong)(int)local_98._8_4_;
          uVar9 = local_98._8_4_ + 1;
          local_98._8_4_ = uVar9;
          if ((uint)local_98._12_4_ < uVar9) {
            FUN_1471cdc7a(local_98,uVar23);
          }
          lVar20 = lVar21 + lVar10;
          *(undefined4 *)(local_98._0_8_ + 0x10 + lVar19 * 0x28) = *(undefined4 *)(lVar20 + -0x10);
          uVar13 = *(undefined8 *)(lVar20 + -0x18);
          puVar12 = (undefined8 *)(local_98._0_8_ + lVar19 * 0x28);
          *puVar12 = *(undefined8 *)(lVar20 + -0x20);
          puVar12[1] = uVar13;
          lVar20 = *(longlong *)(lVar20 + -8);
          *(longlong *)(local_98._0_8_ + 0x18 + lVar19 * 0x28) = lVar20;
          if (lVar20 != 0) {
            LOCK();
            *(int *)(lVar20 + 8) = *(int *)(lVar20 + 8) + 1;
            UNLOCK();
          }
          *(undefined1 *)(local_98._0_8_ + lVar19 * 0x28 + 0x20) = *(undefined1 *)(lVar21 + lVar10);
        }
        lVar10 = lVar10 + 0x28;
      } while (lVar15 * 0x28 != lVar10);
    }
    uVar13 = *(undefined8 *)(&DAT_14ca8c1f0 + (uVar17 & 0xffff) * 8);
    uVar16 = FUN_14473c272(param_1,&DAT_14c9e3c20,0);
    local_c8 = local_a8;
    local_a8._0_8_ = uVar16;
    FUN_142cbd4e7(param_1,uVar17 & 0xffff,uVar13,local_98);
    DAT_14c9e3c61 = '\0';
    FUN_145e3a55a(local_98._0_8_,local_98._8_4_);
    lVar15 = local_98._0_8_;
  }
  if (lVar15 != 0) {
    FUN_1400020a8();
  }
LAB_141764ef1:
  if (DAT_14c9e3c20 != (longlong *)0x0) {
    local_98._0_8_ = DAT_14c9e3c20[1];
    plVar14 = (longlong *)FUN_144b113f6(param_1 + 0x1d8);
    if ((plVar14 != (longlong *)0x0) && (*plVar14 != 0)) {
      FUN_14178e91e(param_1,*plVar14,0x70,3);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141765632 FUN_141765632 body=339 status=ok
// SIG undefined FUN_141765632(void)

undefined8 FUN_141765632(ushort *param_1)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  DWORD DVar5;
  DWORD DVar6;
  ulonglong uVar7;
  undefined4 extraout_var;
  ulonglong uVar8;
  int iVar9;
  
  if ((&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf] != 1) {
    iVar1 = *(int *)(param_1 + 2);
    iVar9 = iVar1 % 3;
    uVar4 = iVar1 / 3 & 0x80000001;
    if ((iVar1 / 0x180 & 0x80000001U) == 1) {
      bVar3 = FUN_140653b22();
      if (((iVar9 == 1 || uVar4 != 1) & bVar3) == 0) {
        return 0;
      }
    }
    else if (iVar9 != 1 && uVar4 == 1) {
      return 0;
    }
    lVar2 = DAT_14ca97170;
    if ((iVar9 == 2) || ((iVar1 / 6 & 0x80000001U) != 1)) {
      if ((iVar1 / 0xc & 0x80000003U) == 2) {
        return CONCAT71((int7)((ulonglong)*param_1 * 0x3c >> 8),
                        2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]);
      }
      uVar4 = *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      uVar7 = (ulonglong)uVar4;
      if (((uVar4 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (uVar4 == 2)) {
        uVar8 = 0;
      }
      else if (uVar4 == 1) {
        DVar5 = FUN_140ad26c0();
        DVar6 = GetCurrentThreadId();
        uVar7 = CONCAT44(extraout_var,DVar6);
        uVar8 = (ulonglong)(DVar5 != DVar6);
      }
      else {
        uVar8 = 1;
      }
      return CONCAT71((int7)(uVar7 >> 8),0 < *(int *)(lVar2 + uVar8 * 4) && iVar9 == 2);
    }
  }
  return 0;
}



// FUNCTION 141765786 FUN_141765786 body=579 status=ok
// SIG undefined FUN_141765786(void)

void FUN_141765786(longlong param_1,uint param_2,int param_3,undefined4 param_4,uint param_5,
                  byte param_6)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  
  if ((param_6 & 4) == 0) {
    iVar7 = param_2 << 2;
  }
  else {
    iVar2 = *(int *)(param_1 + 0xd8);
    uVar1 = *(undefined4 *)(param_1 + 0xf8);
    *(uint *)(param_1 + 0xd8) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0xdc) < iVar2 + 1U) {
      FUN_1471cfbda((longlong *)(param_1 + 0xd0),iVar2);
    }
    iVar7 = iVar2 * 4 + 1;
    lVar4 = *(longlong *)(param_1 + 0xd0);
    lVar11 = (longlong)iVar2 * 0x10;
    *(uint *)(lVar4 + lVar11) = (uint)param_6 << 0x1f | param_2;
    *(int *)(lVar4 + 4 + lVar11) = param_3;
    *(undefined4 *)(lVar4 + 8 + lVar11) = param_4;
    *(undefined4 *)(lVar4 + 0xc + lVar11) = uVar1;
  }
  if ((param_5 == 1) && ((param_6 & 2) == 0)) {
    plVar6 = *(longlong **)(param_1 + 0x118 + (ulonglong)*(uint *)(param_1 + 0x128) * 8);
  }
  else {
    plVar6 = *(longlong **)(param_1 + 0x118);
    if (param_5 == 0) {
      uVar9 = 0;
      goto LAB_141765893;
    }
  }
  uVar8 = *(uint *)(plVar6 + 4);
  uVar9 = 0;
  do {
    if (uVar8 == 0x40) {
      uVar10 = *(uint *)((longlong)plVar6 + 0x24);
LAB_141765948:
      iVar2 = *(int *)((longlong)plVar6 + 0x2c);
      iVar3 = (int)plVar6[1];
      *(uint *)(plVar6 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)plVar6 + 0xc) < iVar3 + 1U) {
        FUN_144757b64(plVar6,iVar3);
      }
      *(uint *)(*plVar6 + (longlong)iVar3 * 4) = uVar10 & 0x7f | iVar2 << 7;
      *(int *)((longlong)plVar6 + 0x2c) = (int)plVar6[3];
      plVar6[4] = 0;
      *(undefined4 *)(plVar6 + 5) = 0;
      uVar8 = 0;
    }
    else {
      uVar5 = param_5 - uVar9;
      if (0x40 - uVar8 < param_5 - uVar9) {
        uVar5 = 0x40 - uVar8;
      }
      iVar2 = (int)plVar6[3];
      *(uint *)(plVar6 + 3) = iVar2 + 1U;
      if (*(uint *)((longlong)plVar6 + 0x1c) < iVar2 + 1U) {
        FUN_144780470(plVar6 + 2,iVar2);
      }
      *(ulonglong *)(plVar6[2] + (longlong)iVar2 * 8) =
           CONCAT44(uVar8 & 0x3f | (iVar7 + (uint)(param_6 & 1) * 2) * 0x40,
                    uVar5 & 0x7f | (param_3 + uVar9) * 0x80);
      uVar8 = *(int *)((longlong)plVar6 + 0x24) * 6;
      if (uVar8 < 0x20) {
        *(uint *)(plVar6 + 5) =
             *(uint *)(plVar6 + 5) << ((byte)uVar8 & 0x1f) | *(uint *)(plVar6 + 5);
      }
      uVar10 = *(int *)((longlong)plVar6 + 0x24) + 1;
      *(uint *)((longlong)plVar6 + 0x24) = uVar10;
      uVar9 = uVar9 + uVar5;
      uVar8 = uVar5 + (int)plVar6[4];
      *(uint *)(plVar6 + 4) = uVar8;
      if (0x3f < uVar8) goto LAB_141765948;
    }
  } while (uVar9 < param_5);
LAB_141765893:
  *(uint *)(plVar6 + 6) = (int)plVar6[6] + uVar9;
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + param_5;
  return;
}



// FUNCTION 1417659ca FUN_1417659ca body=201 status=ok
// SIG undefined FUN_1417659ca(void)

undefined8 * FUN_1417659ca(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  *param_1 = &PTR_FUN_14a1fb9b8;
  lVar4 = param_1[6];
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
  if (param_1[4] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[4] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141765a94 FUN_141765a94 body=201 status=ok
// SIG undefined FUN_141765a94(void)

undefined8 * FUN_141765a94(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  *param_1 = &PTR_FUN_14a1fb9b8;
  lVar4 = param_1[6];
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
  if (param_1[4] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[4] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141765b5e FUN_141765b5e body=40 status=ok
// SIG undefined FUN_141765b5e(void)

undefined8 FUN_141765b5e(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141765b86 FUN_141765b86 body=40 status=ok
// SIG undefined FUN_141765b86(void)

undefined8 FUN_141765b86(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141765bae FUN_141765bae body=353 status=ok
// SIG undefined FUN_141765bae(void)

void FUN_141765bae(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141765c33;
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
LAB_141765c33:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 141765d10 FUN_141765d10 body=90 status=ok
// SIG undefined FUN_141765d10(void)

undefined8 * FUN_141765d10(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a2410c0;
  if (param_1[0x3c] != 0) {
    plVar1 = param_1 + 0x40;
    if ((longlong *)param_1[0x3e] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x3e];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141765d6a FUN_141765d6a body=90 status=ok
// SIG undefined FUN_141765d6a(void)

undefined8 * FUN_141765d6a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a241160;
  if (param_1[0x3c] != 0) {
    plVar1 = param_1 + 0x40;
    if ((longlong *)param_1[0x3e] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x3e];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141765dc4 FUN_141765dc4 body=90 status=ok
// SIG undefined FUN_141765dc4(void)

undefined8 * FUN_141765dc4(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a241200;
  if (param_1[0x3c] != 0) {
    plVar1 = param_1 + 0x40;
    if ((longlong *)param_1[0x3e] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x3e];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141765e1e FUN_141765e1e body=40 status=ok
// SIG undefined FUN_141765e1e(void)

undefined8 FUN_141765e1e(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141765e46 FUN_141765e46 body=70 status=ok
// SIG undefined FUN_141765e46(void)

undefined8 FUN_141765e46(ushort *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_14042c344(*param_1);
  if (((cVar1 == '\0') || (DAT_14c760e18 != '\x01')) ||
     ((*(uint *)(param_1 + 0x1c) & 0x2000006) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)*param_1 * 0x3c >> 8),
                     2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]);
  }
  return uVar2;
}



// FUNCTION 141765e8c FUN_141765e8c body=86 status=ok
// SIG undefined FUN_141765e8c(void)

undefined8 FUN_141765e8c(ushort *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_14042c344(*param_1);
  if ((((cVar1 == '\0') || (DAT_14c760e18 != '\x01')) ||
      ((*(uint *)(param_1 + 0x1c) & 0x2000006) == 0)) ||
     (((param_1[10] & 1) != 0 || ((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x28) & 4) == 0)))) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)*param_1 * 0x3c >> 8),
                     2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]);
  }
  return uVar2;
}



// FUNCTION 141765ee2 FUN_141765ee2 body=86 status=ok
// SIG undefined FUN_141765ee2(void)

undefined8 FUN_141765ee2(ushort *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_14042c344(*param_1);
  if ((((cVar1 == '\0') || (DAT_14c760e18 != '\x01')) ||
      ((*(uint *)(param_1 + 0x1c) & 0x2000006) == 0)) ||
     (((param_1[10] & 1) != 0 || ((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x28) & 4) == 0)))) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)*param_1 * 0x3c >> 8),
                     2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]);
  }
  return uVar2;
}



// FUNCTION 141765f38 FUN_141765f38 body=91 status=ok
// SIG undefined FUN_141765f38(void)

bool FUN_141765f38(ushort *param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = FUN_14042c344(*param_1);
  if (((cVar1 == '\0') || (DAT_14c760e18 != '\x01')) ||
     ((*(uint *)(param_1 + 0x1c) & 0x2000006) == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = false;
    cVar1 = FUN_1402702cf(0,param_1);
    if (cVar1 != '\0') {
      bVar2 = 2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf];
    }
  }
  return bVar2;
}



// FUNCTION 141765f94 FUN_141765f94 body=91 status=ok
// SIG undefined FUN_141765f94(void)

bool FUN_141765f94(ushort *param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = FUN_14042c344(*param_1);
  if (((cVar1 == '\0') || (DAT_14c760e18 != '\x01')) ||
     ((*(uint *)(param_1 + 0x1c) & 0x2000006) == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = false;
    cVar1 = FUN_1402702cf(0,param_1);
    if (cVar1 != '\0') {
      bVar2 = 2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf];
    }
  }
  return bVar2;
}



// FUNCTION 141765ff0 FUN_141765ff0 body=87 status=ok
// SIG undefined FUN_141765ff0(void)

undefined8 FUN_141765ff0(ushort *param_1)

{
  char cVar1;
  
  cVar1 = FUN_14042c344(*param_1);
  if ((((cVar1 != '\0') && (DAT_14c760e18 == '\x01')) &&
      ((*(uint *)(param_1 + 0x1c) & 0x2000006) != 0)) &&
     (cVar1 = FUN_1402702cf(1,param_1), cVar1 != '\0')) {
    return CONCAT71((int7)((ulonglong)*param_1 * 0x3c >> 8),
                    2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]);
  }
  return 0;
}



// FUNCTION 141766048 FUN_141766048 body=87 status=ok
// SIG undefined FUN_141766048(void)

undefined8 FUN_141766048(ushort *param_1)

{
  char cVar1;
  
  cVar1 = FUN_14042c344(*param_1);
  if ((((cVar1 != '\0') && (DAT_14c760e18 == '\x01')) &&
      ((*(uint *)(param_1 + 0x1c) & 0x2000006) != 0)) &&
     (cVar1 = FUN_1402702cf(1,param_1), cVar1 != '\0')) {
    return CONCAT71((int7)((ulonglong)*param_1 * 0x3c >> 8),
                    2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]);
  }
  return 0;
}



// FUNCTION 1417660a0 FUN_1417660a0 body=336 status=ok
// SIG undefined FUN_1417660a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1417660a0(undefined8 *param_1,longlong param_2,char param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  undefined *puVar6;
  float fVar7;
  float fVar8;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_3 != '\0') {
    lVar4 = FUN_1447e4f80();
    cVar5 = '\x02';
    if (*(char *)(lVar4 + 0x41) != '\x03') {
      cVar5 = *(char *)(lVar4 + 0x41);
    }
    *param_1 = *(undefined8 *)(param_2 + 0x18);
    *(char *)(param_1 + 1) = cVar5;
  }
  uVar3 = _DAT_14c846288;
  param_1[0x12] = _DAT_14c846280;
  param_1[0x13] = uVar3;
  uVar3 = _DAT_14c846278;
  param_1[0x10] = _DAT_14c846270;
  param_1[0x11] = uVar3;
  uVar3 = _DAT_14c846268;
  param_1[0xe] = _DAT_14c846260;
  param_1[0xf] = uVar3;
  uVar3 = DAT_14c846258;
  param_1[0xc] = _DAT_14c846250;
  param_1[0xd] = uVar3;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  puVar6 = &DAT_14cb05410;
  if (*(char *)(*(longlong *)(param_2 + 8) + 0xd0) != '\0') {
    puVar6 = (undefined *)(*(longlong *)(param_2 + 8) + 0x1b8);
  }
  iVar1 = *(int *)(param_2 + 0x30fc);
  iVar2 = *(int *)(param_2 + 0x30f8);
  fVar7 = (float)(*(int *)(param_2 + 0x3104) - iVar1);
  fVar8 = (float)(*(int *)(param_2 + 0x3100) - iVar2);
  uVar3 = *(undefined8 *)(puVar6 + 0x10);
  *(float *)(param_1 + 2) = fVar8;
  *(float *)((longlong)param_1 + 0x14) = fVar7;
  param_1[3] = 0;
  *(float *)(param_1 + 4) = fVar8;
  *(float *)((longlong)param_1 + 0x24) = fVar7;
  *(float *)(param_1 + 5) = (float)iVar2;
  *(float *)((longlong)param_1 + 0x2c) = (float)iVar1;
  *(float *)(param_1 + 6) = 1.0 / fVar8;
  *(float *)((longlong)param_1 + 0x34) = 1.0 / fVar7;
  *(float *)(param_1 + 7) = 1.0 / (float)(int)uVar3;
  *(float *)((longlong)param_1 + 0x3c) = 1.0 / (float)(int)((ulonglong)uVar3 >> 0x20);
  return param_1;
}



// FUNCTION 1417661f0 FUN_1417661f0 body=262 status=ok
// SIG undefined FUN_1417661f0(void)

void FUN_1417661f0(longlong param_1,int param_2)

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



// FUNCTION 1417662f8 FUN_1417662f8 body=93 status=ok
// SIG undefined FUN_1417662f8(void)

void FUN_1417662f8(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
    }
    else {
      uVar3 = uVar1 + (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar2 = 0x7fffffff;
    if ((int)uVar1 <= (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)(param_1 + 0xc) = uVar2;
    FUN_1403edba6();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 141766356 FUN_141766356 body=93 status=ok
// SIG undefined FUN_141766356(void)

void FUN_141766356(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
    }
    else {
      uVar3 = uVar1 + (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar2 = 0x7fffffff;
    if ((int)uVar1 <= (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)(param_1 + 0xc) = uVar2;
    FUN_1403edd7c();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1417663b4 FUN_1417663b4 body=353 status=ok
// SIG undefined FUN_1417663b4(void)

void FUN_1417663b4(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14176643b;
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
LAB_14176643b:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 141766516 FUN_141766516 body=212 status=ok
// SIG undefined FUN_141766516(void)

void FUN_141766516(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (ulonglong)param_2 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (param_2 < 0x400) {
          uVar1 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[(ulonglong)param_2 * 2]];
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
    if ((int)param_2 <= (int)(uVar1 >> 5)) {
      uVar2 = uVar1 >> 5 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,8);
  }
  return;
}



// FUNCTION 1417665ea FUN_1417665ea body=212 status=ok
// SIG undefined FUN_1417665ea(void)

void FUN_1417665ea(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (ulonglong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (param_2 < 0x800) {
          uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[param_2]];
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
    if ((int)param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 1417666be FUN_1417666be body=201 status=ok
// SIG undefined FUN_1417666be(void)

undefined8 * FUN_1417666be(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  *param_1 = &PTR_FUN_14a1fb9b8;
  lVar4 = param_1[6];
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
  if (param_1[4] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[4] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141766788 FUN_141766788 body=201 status=ok
// SIG undefined FUN_141766788(void)

undefined8 * FUN_141766788(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  *param_1 = &PTR_FUN_14a1fb9b8;
  lVar4 = param_1[6];
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
  if (param_1[4] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[4] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141766852 FUN_141766852 body=40 status=ok
// SIG undefined FUN_141766852(void)

undefined8 FUN_141766852(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14176687a FUN_14176687a body=14 status=ok
// SIG undefined FUN_14176687a(void)

void FUN_14176687a(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) != param_2) {
    *(int *)(param_1 + 0xc) = param_2;
    FUN_1401c5014();
    return;
  }
  return;
}



// FUNCTION 141766888 FUN_141766888 body=1241 status=ok
// SIG undefined FUN_141766888(void)

void FUN_141766888(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  short sVar2;
  short sVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  short sVar15;
  short sVar16;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  uint local_8c;
  ulonglong local_88;
  undefined8 local_80;
  longlong local_78;
  longlong local_70;
  undefined4 local_68;
  longlong local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58 = 0;
  uStack_50 = 0;
  uVar6 = 0;
  local_80 = param_2;
  local_78 = param_1;
  FUN_1448759c8(&local_58,0x948);
  uVar7 = CONCAT62((int6)((ulonglong)uVar6 >> 0x10),0x12);
  uVar12 = 0;
  do {
    sVar3 = (short)uVar12;
    iVar13 = 1;
    uVar9 = uVar7 & 0xffffffff;
    do {
      iVar14 = iVar13;
      if (iVar13 == 0x12) {
        iVar14 = 0;
      }
      lVar8 = (longlong)(int)(uint)uStack_50;
      uVar5 = (uint)uStack_50 + 1;
      if (uStack_50._4_4_ < uVar5) {
        local_8c = (uint)uVar7;
        uVar7 = uStack_50 & 0xffffffff;
        uStack_50._0_4_ = uVar5;
        FUN_14488eebe(&local_58,uVar7);
        uVar7 = (ulonglong)local_8c;
        uVar5 = (uint)uStack_50;
      }
      uStack_50._0_4_ = uVar5;
      uVar5 = (uint)uStack_50;
      sVar2 = (short)uVar9;
      *(short *)(local_58 + lVar8 * 2) = sVar2 + -0x12;
      lVar8 = (longlong)(int)(uint)uStack_50;
      uStack_50._0_4_ = (uint)uStack_50 + 1;
      if (uStack_50._4_4_ < (uint)uStack_50) {
        local_8c = (uint)uVar7;
        FUN_14488eebe(&local_58,uVar5);
        uVar7 = (ulonglong)local_8c;
      }
      uVar5 = (uint)uStack_50;
      sVar15 = (short)iVar14 + sVar3 * 0x12;
      *(short *)(local_58 + lVar8 * 2) = sVar15;
      lVar8 = (longlong)(int)(uint)uStack_50;
      uStack_50._0_4_ = (uint)uStack_50 + 1;
      if (uStack_50._4_4_ < (uint)uStack_50) {
        local_8c = (uint)uVar7;
        local_88 = uVar12;
        FUN_14488eebe(&local_58,uVar5);
        uVar7 = (ulonglong)local_8c;
        uVar12 = local_88;
      }
      uVar5 = (uint)uStack_50;
      *(short *)(local_58 + lVar8 * 2) = sVar2;
      lVar8 = (longlong)(int)(uint)uStack_50;
      uStack_50._0_4_ = (uint)uStack_50 + 1;
      if (uStack_50._4_4_ < (uint)uStack_50) {
        local_8c = (uint)uVar7;
        local_88 = uVar12;
        FUN_14488eebe(&local_58,uVar5);
        uVar7 = (ulonglong)local_8c;
        uVar12 = local_88;
      }
      uVar5 = (uint)uStack_50;
      *(short *)(local_58 + lVar8 * 2) = sVar2;
      lVar8 = (longlong)(int)(uint)uStack_50;
      uStack_50._0_4_ = (uint)uStack_50 + 1;
      if (uStack_50._4_4_ < (uint)uStack_50) {
        local_8c = (uint)uVar7;
        local_88 = uVar12;
        FUN_14488eebe(&local_58,uVar5);
        uVar7 = (ulonglong)local_8c;
        uVar12 = local_88;
      }
      uVar5 = (uint)uStack_50;
      *(short *)(local_58 + lVar8 * 2) = sVar15;
      lVar8 = (longlong)(int)(uint)uStack_50;
      uStack_50._0_4_ = (uint)uStack_50 + 1;
      if (uStack_50._4_4_ < (uint)uStack_50) {
        local_8c = (uint)uVar7;
        FUN_14488eebe(&local_58,uVar5);
        uVar7 = (ulonglong)local_8c;
      }
      *(short *)(local_58 + lVar8 * 2) = (short)iVar14 + sVar3 * 0x12 + 0x12;
      uVar9 = (ulonglong)((int)uVar9 + 1);
      iVar13 = iVar13 + 1;
    } while (iVar13 != 0x13);
    uVar11 = (int)uVar12 + 1;
    uVar12 = (ulonglong)uVar11;
    uVar5 = (int)uVar7 + 0x12;
    uVar7 = (ulonglong)uVar5;
  } while (uVar11 != 0xb);
  uVar7 = CONCAT62((uint6)(ushort)(uVar5 >> 0x10),0xea);
  uVar12 = 0;
  do {
    sVar3 = (short)uVar12;
    iVar13 = -0x12;
    uVar9 = uVar7;
    do {
      sVar2 = (short)iVar13 + 0x13;
      if (iVar13 == -1) {
        sVar2 = 0;
      }
      lVar8 = (longlong)(int)(uint)uStack_50;
      uVar5 = (uint)uStack_50 + 1;
      if (uStack_50._4_4_ < uVar5) {
        local_8c = (uint)uVar7;
        uVar7 = uStack_50 & 0xffffffff;
        uStack_50._0_4_ = uVar5;
        FUN_14488eebe(&local_58,uVar7);
        uVar7 = (ulonglong)local_8c;
        uVar5 = (uint)uStack_50;
      }
      uStack_50._0_4_ = uVar5;
      uVar5 = (uint)uStack_50;
      sVar15 = (short)uVar9;
      *(short *)(local_58 + lVar8 * 2) = sVar15 + -0x12;
      lVar8 = (longlong)(int)(uint)uStack_50;
      uStack_50._0_4_ = (uint)uStack_50 + 1;
      if (uStack_50._4_4_ < (uint)uStack_50) {
        local_8c = (uint)uVar7;
        FUN_14488eebe(&local_58,uVar5);
        uVar7 = (ulonglong)local_8c;
      }
      uVar5 = (uint)uStack_50;
      *(short *)(local_58 + lVar8 * 2) = sVar15;
      lVar8 = (longlong)(int)(uint)uStack_50;
      uStack_50._0_4_ = (uint)uStack_50 + 1;
      if (uStack_50._4_4_ < (uint)uStack_50) {
        local_8c = (uint)uVar7;
        FUN_14488eebe(&local_58,uVar5);
        uVar7 = (ulonglong)local_8c;
      }
      uVar5 = (uint)uStack_50;
      sVar16 = sVar2 + sVar3 * 0x12 + 0xd8;
      *(short *)(local_58 + lVar8 * 2) = sVar16;
      lVar8 = (longlong)(int)(uint)uStack_50;
      uStack_50._0_4_ = (uint)uStack_50 + 1;
      if (uStack_50._4_4_ < (uint)uStack_50) {
        local_8c = (uint)uVar7;
        local_88 = uVar12;
        FUN_14488eebe(&local_58,uVar5);
        uVar7 = (ulonglong)local_8c;
        uVar12 = local_88;
      }
      uVar5 = (uint)uStack_50;
      *(short *)(local_58 + lVar8 * 2) = sVar16;
      lVar8 = (longlong)(int)(uint)uStack_50;
      uStack_50._0_4_ = (uint)uStack_50 + 1;
      if (uStack_50._4_4_ < (uint)uStack_50) {
        local_8c = (uint)uVar7;
        FUN_14488eebe(&local_58,uVar5);
        uVar7 = (ulonglong)local_8c;
      }
      uVar5 = (uint)uStack_50;
      *(short *)(local_58 + lVar8 * 2) = sVar15;
      lVar8 = (longlong)(int)(uint)uStack_50;
      uStack_50._0_4_ = (uint)uStack_50 + 1;
      if (uStack_50._4_4_ < (uint)uStack_50) {
        local_8c = (uint)uVar7;
        FUN_14488eebe(&local_58,uVar5);
        uVar7 = (ulonglong)local_8c;
      }
      lVar4 = local_78;
      *(short *)(local_58 + lVar8 * 2) = sVar2 + sVar3 * 0x12 + 0xea;
      uVar9 = (ulonglong)((int)uVar9 + 1);
      iVar13 = iVar13 + 1;
    } while (iVar13 != 0);
    uVar5 = (int)uVar12 + 1;
    uVar12 = (ulonglong)uVar5;
    uVar7 = (ulonglong)((int)uVar7 + 0x12);
  } while (uVar5 != 0xb);
  *(uint *)(local_78 + 0x18) = (uint)uStack_50;
  local_98 = &local_70;
  local_70 = local_58;
  local_68 = (uint)uStack_50;
  FUN_1415b6d4b(&local_60,local_80,L"FStencilConeIndexBuffer",1);
  plVar10 = (longlong *)(lVar4 + 0x10);
  if (plVar10 != &local_60) {
    lVar8 = *plVar10;
    *plVar10 = local_60;
    local_60 = 0;
    if (lVar8 == 0) goto LAB_141766b5e;
    LOCK();
    puVar1 = (uint *)(lVar8 + 8);
    uVar5 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar5 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_60 != 0) {
    LOCK();
    puVar1 = (uint *)(local_60 + 8);
    uVar5 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar5 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_141766b5e:
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141766d62 FUN_141766d62 body=868 status=ok
// SIG undefined FUN_141766d62(void)

void FUN_141766d62(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  float fVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined1 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_1e8 [32];
  longlong *local_1c8;
  undefined8 local_1c0;
  longlong local_1b8;
  undefined4 local_1b0;
  undefined4 local_1a4;
  float local_1a0;
  undefined4 local_19c;
  longlong local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  float fStack_180;
  float local_178;
  float fStack_174;
  float fStack_170;
  float local_168;
  float fStack_164;
  float fStack_160;
  float local_158;
  float fStack_154;
  float fStack_150;
  undefined1 local_140 [160];
  undefined1 *local_a0;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_a0 = (undefined1 *)0x0;
  local_98 = 0xd00000000;
  iVar8 = 0;
  local_1c0 = param_2;
  do {
    fVar10 = cosf((float)iVar8 * 0.2617994);
    fVar11 = sinf((float)iVar8 * 0.2617994);
    uVar3 = local_98;
    lVar6 = (longlong)(int)local_98;
    uVar4 = (int)local_98 + 1;
    local_98 = CONCAT44(local_98._4_4_,uVar4);
    if (local_98._4_4_ < uVar4) {
      FUN_1471db35e(local_140,uVar3 & 0xffffffff);
    }
    puVar5 = local_a0;
    if (local_a0 == (undefined1 *)0x0) {
      puVar5 = local_140;
    }
    *(undefined4 *)(puVar5 + lVar6 * 0xc) = 0;
    *(float *)(puVar5 + lVar6 * 0xc + 4) = fVar11;
    *(float *)(puVar5 + lVar6 * 0xc + 8) = fVar10;
    iVar8 = iVar8 + 1;
  } while (iVar8 != 0xd);
  local_198 = 0;
  uStack_190 = 0;
  FUN_140678446(&local_198,0xf7);
  iVar8 = 0;
  do {
    local_1a0 = ((float)iVar8 / 18.0) * 360.0;
    local_1a4 = 0;
    local_19c = 0;
    FUN_1413df99e(&local_188,&local_1a4);
    lVar6 = 8;
    do {
      uVar3 = uStack_190;
      puVar5 = local_a0;
      if (local_a0 == (undefined1 *)0x0) {
        puVar5 = local_140;
      }
      fVar10 = *(float *)(puVar5 + lVar6 + -8);
      fVar11 = *(float *)(puVar5 + lVar6 + -4);
      fVar2 = *(float *)(puVar5 + lVar6);
      fVar12 = fVar2 * local_168 + fVar11 * local_178 + fVar10 * (float)local_188 + local_158;
      fVar13 = fVar2 * fStack_164 + fVar11 * fStack_174 + fVar10 * local_188._4_4_ + fStack_154;
      fVar10 = fVar2 * fStack_160 + fVar11 * fStack_170 + fVar10 * fStack_180 + fStack_150;
      lVar9 = (longlong)(int)uStack_190;
      uVar4 = (int)uStack_190 + 1;
      uStack_190 = CONCAT44(uStack_190._4_4_,uVar4);
      if (uStack_190._4_4_ < uVar4) {
        FUN_140c0b6f2(&local_198,uVar3 & 0xffffffff);
      }
      *(float *)(local_198 + lVar9 * 0xc) = fVar12 + 0.0;
      *(float *)(local_198 + 4 + lVar9 * 0xc) = fVar13 + 0.0;
      *(float *)(local_198 + 8 + lVar9 * 0xc) = fVar10 + 0.0;
      lVar6 = lVar6 + 0xc;
    } while (lVar6 != 0xa4);
    iVar8 = iVar8 + 1;
  } while (iVar8 != 0x13);
  *(int *)(param_1 + 0x18) = (int)uStack_190;
  local_1c8 = &local_1b8;
  local_1b8 = local_198;
  local_1b0 = (int)uStack_190;
  FUN_1415b6edf(&local_188,local_1c0,L"TStencilSphereVertexBuffer",1);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_188) {
    lVar6 = *plVar7;
    *plVar7 = local_188;
    local_188 = 0;
    if (lVar6 == 0) goto LAB_141766fde;
    LOCK();
    puVar1 = (uint *)(lVar6 + 8);
    uVar4 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar4 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_188 != 0) {
    LOCK();
    puVar1 = (uint *)(local_188 + 8);
    uVar4 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar4 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_141766fde:
  if (local_198 != 0) {
    FUN_1400020a8();
  }
  if (local_a0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_90 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417670c8 FUN_1417670c8 body=637 status=ok
// SIG undefined FUN_1417670c8(void)

void FUN_1417670c8(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_78;
  longlong local_70;
  undefined4 local_68;
  longlong local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = 0;
  uStack_50 = 0;
  local_78 = param_2;
  FUN_1448759c8(&local_58,0x510);
  iVar5 = 0;
  sVar8 = 0xe;
  do {
    iVar5 = iVar5 + 1;
    iVar9 = 0xc;
    sVar7 = sVar8;
    do {
      lVar4 = (longlong)(int)(uint)uStack_50;
      uVar2 = (uint)uStack_50 + 1;
      if (uStack_50._4_4_ < uVar2) {
        uVar3 = uStack_50 & 0xffffffff;
        uStack_50._0_4_ = uVar2;
        FUN_14488eebe(&local_58,uVar3);
        uVar2 = (uint)uStack_50;
      }
      uStack_50._0_4_ = uVar2;
      uVar2 = (uint)uStack_50;
      *(short *)(local_58 + lVar4 * 2) = sVar7 + -0xe;
      lVar4 = (longlong)(int)(uint)uStack_50;
      uStack_50._0_4_ = (uint)uStack_50 + 1;
      if (uStack_50._4_4_ < (uint)uStack_50) {
        FUN_14488eebe(&local_58,uVar2);
      }
      uVar2 = (uint)uStack_50;
      *(short *)(local_58 + lVar4 * 2) = sVar7 + -1;
      lVar4 = (longlong)(int)(uint)uStack_50;
      uStack_50._0_4_ = (uint)uStack_50 + 1;
      if (uStack_50._4_4_ < (uint)uStack_50) {
        FUN_14488eebe(&local_58,uVar2);
      }
      uVar2 = (uint)uStack_50;
      *(short *)(local_58 + lVar4 * 2) = sVar7 + -0xd;
      lVar4 = (longlong)(int)(uint)uStack_50;
      uStack_50._0_4_ = (uint)uStack_50 + 1;
      if (uStack_50._4_4_ < (uint)uStack_50) {
        FUN_14488eebe(&local_58,uVar2);
      }
      uVar2 = (uint)uStack_50;
      *(short *)(local_58 + lVar4 * 2) = sVar7 + -1;
      lVar4 = (longlong)(int)(uint)uStack_50;
      uStack_50._0_4_ = (uint)uStack_50 + 1;
      if (uStack_50._4_4_ < (uint)uStack_50) {
        FUN_14488eebe(&local_58,uVar2);
      }
      uVar2 = (uint)uStack_50;
      *(short *)(local_58 + lVar4 * 2) = sVar7;
      lVar4 = (longlong)(int)(uint)uStack_50;
      uStack_50._0_4_ = (uint)uStack_50 + 1;
      if (uStack_50._4_4_ < (uint)uStack_50) {
        FUN_14488eebe(&local_58,uVar2);
      }
      *(short *)(local_58 + lVar4 * 2) = sVar7 + -0xd;
      sVar7 = sVar7 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    sVar8 = sVar8 + 0xd;
  } while (iVar5 != 0x12);
  *(uint *)(param_1 + 0x18) = (uint)uStack_50;
  local_88 = &local_70;
  local_70 = local_58;
  local_68 = (uint)uStack_50;
  FUN_1415b6d4b(&local_60,local_78,L"TStencilSphereIndexBuffer",1);
  plVar6 = (longlong *)(param_1 + 0x10);
  if (plVar6 != &local_60) {
    lVar4 = *plVar6;
    *plVar6 = local_60;
    local_60 = 0;
    if (lVar4 == 0) goto LAB_141767260;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_60 != 0) {
    LOCK();
    puVar1 = (uint *)(local_60 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_141767260:
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141767346 FUN_141767346 body=868 status=ok
// SIG undefined FUN_141767346(void)

void FUN_141767346(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  float fVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined1 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_1a8 [40];
  undefined8 local_180;
  longlong local_178;
  undefined4 local_170;
  undefined4 local_164;
  float local_160;
  undefined4 local_15c;
  longlong local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  float fStack_140;
  float local_138;
  float fStack_134;
  float fStack_130;
  float local_128;
  float fStack_124;
  float fStack_120;
  float local_118;
  float fStack_114;
  float fStack_110;
  undefined1 local_108 [80];
  undefined1 *local_b8;
  undefined8 local_a8;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_b8 = (undefined1 *)0x0;
  local_a8 = 0x500000000;
  iVar8 = 0;
  local_180 = param_2;
  do {
    fVar10 = cosf((float)iVar8 * 0.7853982);
    fVar11 = sinf((float)iVar8 * 0.7853982);
    uVar3 = local_a8;
    lVar6 = (longlong)(int)local_a8;
    uVar4 = (int)local_a8 + 1;
    local_a8 = CONCAT44(local_a8._4_4_,uVar4);
    if (local_a8._4_4_ < uVar4) {
      FUN_1471db4dc(local_108,uVar3 & 0xffffffff);
    }
    puVar5 = local_b8;
    if (local_b8 == (undefined1 *)0x0) {
      puVar5 = local_108;
    }
    lVar6 = lVar6 * 0x10;
    *(undefined4 *)(puVar5 + lVar6) = 0;
    *(float *)(puVar5 + lVar6 + 4) = fVar11;
    *(float *)(puVar5 + lVar6 + 8) = fVar10;
    *(undefined4 *)(puVar5 + lVar6 + 0xc) = 0x3f800000;
    iVar8 = iVar8 + 1;
  } while (iVar8 != 5);
  local_158 = 0;
  uStack_150 = 0;
  FUN_14499148c(&local_158,0x19);
  iVar8 = 0;
  do {
    local_160 = (float)iVar8 * 0.25 * 360.0;
    local_164 = 0;
    local_15c = 0;
    FUN_1413df99e(&local_148,&local_164);
    lVar6 = 8;
    do {
      uVar3 = uStack_150;
      puVar5 = local_b8;
      if (local_b8 == (undefined1 *)0x0) {
        puVar5 = local_108;
      }
      fVar10 = *(float *)(puVar5 + lVar6 + -8);
      fVar11 = *(float *)(puVar5 + lVar6 + -4);
      fVar2 = *(float *)(puVar5 + lVar6);
      fVar12 = fVar2 * local_128 + fVar11 * local_138 + fVar10 * (float)local_148 + local_118;
      fVar13 = fVar2 * fStack_124 + fVar11 * fStack_134 + fVar10 * local_148._4_4_ + fStack_114;
      fVar10 = fVar2 * fStack_120 + fVar11 * fStack_130 + fVar10 * fStack_140 + fStack_110;
      lVar9 = (longlong)(int)uStack_150;
      uVar4 = (int)uStack_150 + 1;
      uStack_150 = CONCAT44(uStack_150._4_4_,uVar4);
      if (uStack_150._4_4_ < uVar4) {
        FUN_1449e2712(&local_158,uVar3 & 0xffffffff);
      }
      lVar9 = lVar9 * 0x10;
      *(float *)(local_158 + lVar9) = fVar12 + 0.0;
      *(float *)(local_158 + 4 + lVar9) = fVar13 + 0.0;
      *(float *)(local_158 + 8 + lVar9) = fVar10 + 0.0;
      *(undefined4 *)(local_158 + 0xc + lVar9) = 0x3f800000;
      lVar6 = lVar6 + 0x10;
    } while (lVar6 != 0x58);
    iVar8 = iVar8 + 1;
  } while (iVar8 != 5);
  *(int *)(param_1 + 0x18) = (int)uStack_150;
  local_178 = local_158;
  local_170 = (int)uStack_150;
  FUN_1415adbf7(&local_148,local_180,L"TStencilSphereVertexBuffer");
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_148) {
    lVar6 = *plVar7;
    *plVar7 = local_148;
    local_148 = 0;
    if (lVar6 == 0) goto LAB_1417675c2;
    LOCK();
    puVar1 = (uint *)(lVar6 + 8);
    uVar4 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar4 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_148 != 0) {
    LOCK();
    puVar1 = (uint *)(local_148 + 8);
    uVar4 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar4 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_1417675c2:
  if (local_158 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_90 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417676ac FUN_1417676ac body=40 status=ok
// SIG undefined FUN_1417676ac(void)

undefined8 FUN_1417676ac(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417676d4 FUN_1417676d4 body=909 status=ok
// SIG undefined FUN_1417676d4(void)

undefined8 *
FUN_1417676d4(undefined8 *param_1,longlong param_2,longlong param_3,undefined8 param_4,int *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  double dVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  longlong lVar12;
  char cVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_1d8 [32];
  undefined1 local_1b8 [112];
  undefined1 local_148 [8];
  float local_140;
  float local_13c;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  float local_b8;
  undefined4 uStack_b4;
  double local_b0;
  double local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  plVar7 = *(longlong **)(param_3 + 0x28);
  FUN_144a2c7c2(local_148,param_4);
  FUN_144a2c7c2(local_1b8,param_5);
  fVar17 = (float)(param_5[4] - param_5[2]) / (float)*param_5;
  fVar14 = ((float)*param_5 * ((float)(param_5[5] - param_5[3]) / (float)param_5[1])) /
           (float)param_5[1];
  fVar15 = 1.0 / fVar14;
  fVar16 = 1.0 / fVar17;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3f800000;
  lVar12 = FUN_1447e4f80();
  cVar13 = '\x02';
  if (*(char *)(lVar12 + 0x41) != '\x03') {
    cVar13 = *(char *)(lVar12 + 0x41);
  }
  *param_1 = *(undefined8 *)(param_2 + 0x18);
  *(char *)(param_1 + 1) = cVar13;
  *(float *)(param_1 + 4) = fVar17;
  *(float *)((longlong)param_1 + 0x24) = fVar14;
  *(float *)(param_1 + 5) = fVar16;
  *(float *)((longlong)param_1 + 0x2c) = fVar15;
  local_d8 = *(undefined4 *)(param_2 + 0x1048);
  uStack_d4 = *(undefined4 *)(param_2 + 0x104c);
  uStack_d0 = *(undefined4 *)(param_2 + 0x1050);
  uStack_cc = *(undefined4 *)(param_2 + 0x1054);
  local_c8 = *(undefined8 *)(param_2 + 0x1058);
  (**(code **)(*plVar7 + 0x98))(plVar7,&local_b8);
  dVar11 = (double)CONCAT44(uStack_b4,local_b8);
  dVar8 = *(double *)(param_2 + 0xab8);
  dVar9 = *(double *)(param_2 + 0xad8);
  dVar10 = *(double *)(param_2 + 0xaf8);
  dVar4 = *(double *)(param_2 + 0xb18);
  iVar5 = *(int *)(param_2 + 0x30fc);
  fVar14 = 1.0 / (float)(local_a8 * *(double *)(param_2 + 0xb08) +
                         local_b0 * *(double *)(param_2 + 0xae8) +
                         dVar11 * *(double *)(param_2 + 0xac8) + *(double *)(param_2 + 0xb28));
  iVar6 = *(int *)(param_2 + 0x3104);
  *(float *)(param_1 + 10) =
       ((float)(*(int *)(param_2 + 0x3100) - *(int *)(param_2 + 0x30f8)) *
        ((float)(*(double *)(param_2 + 0xaf0) * local_a8 +
                 local_b0 * *(double *)(param_2 + 0xad0) + dVar11 * *(double *)(param_2 + 0xab0) +
                *(double *)(param_2 + 0xb10)) * 0.5 * fVar14 + 0.5) +
       (float)*(int *)(param_2 + 0x30f8)) * local_140 * fVar16;
  *(float *)((longlong)param_1 + 0x54) =
       ((float)(iVar6 - iVar5) *
        ((float)(dVar10 * local_a8 + local_b0 * dVar9 + dVar11 * dVar8 + dVar4) * -0.5 * fVar14 +
        0.5) + (float)iVar5) * local_13c * fVar15;
  *(int *)(param_1 + 2) = (int)local_1b8._96_8_;
  *(int *)((longlong)param_1 + 0x14) = SUB84(local_1b8._96_8_,4);
  *(int *)(param_1 + 3) = (int)local_1b8._104_8_;
  *(int *)((longlong)param_1 + 0x1c) = SUB84(local_1b8._104_8_,4);
  uVar1 = (&DAT_14c758c60)[*(byte *)(param_3 + 0xf5)];
  uVar2 = (&DAT_14c758c60)[*(byte *)(param_3 + 0xf4)];
  uVar3 = *(undefined4 *)(param_3 + 0xec);
  *(undefined4 *)(param_1 + 8) = (&DAT_14c758c60)[*(byte *)(param_3 + 0xf6)];
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar1;
  *(undefined4 *)(param_1 + 9) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar3;
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_3 + 0xf0);
  (**(code **)(*plVar7 + 0x90))(plVar7,(longlong)param_1 + 0x3c,&local_b8);
  uVar1 = *(undefined4 *)(param_3 + 0xe8);
  *(float *)(param_1 + 6) = 1.0 / local_b8;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 7) = 0x3f800000;
  if ((local_a0 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141767a62 FUN_141767a62 body=231 status=ok
// SIG undefined FUN_141767a62(void)

undefined8 FUN_141767a62(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  int *piVar4;
  ulonglong uVar5;
  undefined7 uVar6;
  
  piVar4 = &DAT_14c760db4;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    piVar4 = (int *)(*(longlong *)(param_1 + 0x40) + 8);
  }
  cVar2 = FUN_144785782(*(undefined2 *)(&DAT_14ca85070 + (longlong)*piVar4 * 2));
  lVar1 = DAT_14c9ed2f0;
  if (cVar2 != '\0') {
    if (DAT_14ca84efa == '\0') {
      if (DAT_14ca84ef5 != '\x01') {
        return 0;
      }
      if ((DAT_14ca84ef7 & 1) == 0) {
        return 0;
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar5 = 0;
    }
    else {
      bVar3 = FUN_144a61b4f();
      uVar5 = (ulonglong)(bVar3 ^ 1);
    }
    if ((*(int *)(lVar1 + uVar5 * 4) != 0) &&
       ((*(int *)(param_1 + 0x10) == 1 ||
        ((*(int *)(param_1 + 0x10) == 2 &&
         (cVar2 = FUN_144b2acae(**(undefined8 **)(param_1 + 8)), cVar2 != '\0')))))) {
      lVar1 = **(longlong **)(param_1 + 8);
      if (*(char *)(lVar1 + 0x3098) == '\x01') {
        uVar6 = (undefined7)((ulonglong)*(longlong **)(param_1 + 8) >> 8);
        if (*(char *)(lVar1 + 0x23e8) != '\x01') {
          return CONCAT71(uVar6,1);
        }
        return CONCAT71(uVar6,*(undefined1 *)(lVar1 + 0x23ea));
      }
    }
  }
  return 0;
}



// FUNCTION 141767b49 FUN_141767b49 body=288 status=ok
// SIG undefined FUN_141767b49(void)

undefined8 FUN_141767b49(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  int *piVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  
  piVar4 = &DAT_14c760db4;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    piVar4 = (int *)(*(longlong *)(param_1 + 0x40) + 8);
  }
  cVar2 = FUN_144785782(*(undefined2 *)(&DAT_14ca85070 + (longlong)*piVar4 * 2));
  lVar1 = DAT_14c9ed2f0;
  if ((cVar2 != '\0') &&
     ((DAT_14ca84efa != '\0' || ((DAT_14ca84ef5 == '\x01' && ((DAT_14ca84ef7 & 1) != 0)))))) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar5 = 0;
    }
    else {
      bVar3 = FUN_144a61b4f();
      uVar5 = (ulonglong)(bVar3 ^ 1);
    }
    if (((*(int *)(lVar1 + uVar5 * 4) != 0) &&
        (((*(int *)(param_1 + 0x10) == 1 ||
          ((*(int *)(param_1 + 0x10) == 2 &&
           (cVar2 = FUN_144b2acae(**(undefined8 **)(param_1 + 8)), cVar2 != '\0')))) &&
         (lVar1 = **(longlong **)(param_1 + 8), *(char *)(lVar1 + 0x3098) == '\x01')))) &&
       (((*(char *)(lVar1 + 0x23e8) != '\x01' || (*(char *)(lVar1 + 0x23ea) == '\x01')) &&
        (DAT_14ca84efa == '\x01')))) {
      uVar6 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
      if (*(int *)(DAT_14c9ed380 + 4) != 0) {
        return uVar6;
      }
      if (DAT_14ca84ef5 != '\x01') {
        return uVar6;
      }
      if ((DAT_14ca84ef7 & 1) == 0) {
        return uVar6;
      }
    }
  }
  return 0;
}



// FUNCTION 141767c69 FUN_141767c69 body=250 status=ok
// SIG undefined FUN_141767c69(void)

ulonglong FUN_141767c69(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  int *piVar4;
  ulonglong uVar5;
  undefined8 unaff_RSI;
  ulonglong uVar6;
  undefined7 uVar7;
  
  if ((*(byte *)(param_1 + 0x62) & 4) != 0) {
    piVar4 = &DAT_14c760db4;
    if (*(longlong *)(param_1 + 0x40) != 0) {
      piVar4 = (int *)(*(longlong *)(param_1 + 0x40) + 8);
    }
    cVar2 = FUN_144785782(*(undefined2 *)(&DAT_14ca85070 + (longlong)*piVar4 * 2));
    lVar1 = DAT_14c9ed2f0;
    uVar7 = (undefined7)((ulonglong)unaff_RSI >> 8);
    uVar6 = CONCAT71(uVar7,1);
    if ((cVar2 == '\0') ||
       ((DAT_14ca84efa == '\0' && ((DAT_14ca84ef5 != '\x01' || ((DAT_14ca84ef7 & 1) == 0))))))
    goto LAB_141767cb1;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar5 = 0;
    }
    else {
      bVar3 = FUN_144a61b4f();
      uVar5 = (ulonglong)(bVar3 ^ 1);
    }
    if ((*(int *)(lVar1 + uVar5 * 4) == 0) ||
       (((*(int *)(param_1 + 0x10) != 1 &&
         ((*(int *)(param_1 + 0x10) != 2 ||
          (cVar2 = FUN_144b2acae(**(undefined8 **)(param_1 + 8)), cVar2 == '\0')))) ||
        (lVar1 = **(longlong **)(param_1 + 8), *(char *)(lVar1 + 0x3098) != '\x01'))))
    goto LAB_141767cb1;
    if (*(char *)(lVar1 + 0x23e8) == '\x01') {
      uVar6 = CONCAT71(uVar7,*(undefined1 *)(lVar1 + 0x23ea)) ^ 1;
      goto LAB_141767cb1;
    }
  }
  uVar6 = 0;
LAB_141767cb1:
  return uVar6 & 0xffffffff;
}



// FUNCTION 141767d63 FUN_141767d63 body=86 status=ok
// SIG undefined FUN_141767d63(void)

ulonglong FUN_141767d63(undefined8 param_1)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  cVar2 = FUN_144880847(param_1,0);
  lVar1 = DAT_14c9ecd20;
  if (cVar2 != '\0') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar4 = 0;
    }
    else {
      bVar3 = FUN_144a61b4f();
      uVar4 = (ulonglong)(bVar3 ^ 1);
    }
    uVar4 = CONCAT71((int7)((ulonglong)lVar1 >> 8),*(int *)(lVar1 + uVar4 * 4) != 0);
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 141767db9 FUN_141767db9 body=104 status=ok
// SIG undefined FUN_141767db9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141767db9(longlong param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = (float)DAT_14c84635c;
  fVar3 = DAT_14c84635c._4_4_;
  if (1.0 < *(double *)(param_1 + 0x8a8) || *(double *)(param_1 + 0x8a8) == 1.0) {
    fVar2 = (float)*(double *)(param_1 + 0x930) + (float)*(double *)(param_1 + 0x930);
    fVar3 = (float)*(double *)(param_1 + 0x958) + (float)*(double *)(param_1 + 0x958);
  }
  fVar1 = *(float *)(param_1 + 0x291c) * _DAT_14c7604b4;
  if (1048576.0 <= fVar1) {
    fVar1 = 1048576.0;
  }
  if (fVar1 <= 0.01) {
    fVar1 = 0.01;
  }
  if (fVar2 <= fVar3) {
    fVar2 = fVar3;
  }
  FUN_14018bbb0(fVar1,fVar2,param_2);
  return;
}



// FUNCTION 141767e22 FUN_141767e22 body=52 status=ok
// SIG undefined FUN_141767e22(void)

byte FUN_141767e22(undefined2 *param_1)

{
  char cVar1;
  byte bVar2;
  
  bVar2 = 0;
  cVar1 = FUN_144880847(*param_1,0);
  if (cVar1 != '\0') {
    if (*(uint *)(param_1 + 0xc) < 2) {
      bVar2 = 0;
    }
    else {
      bVar2 = *(byte *)(param_1 + 0x1f) >> 7;
    }
  }
  return bVar2;
}



// FUNCTION 141767e56 FUN_141767e56 body=52 status=ok
// SIG undefined FUN_141767e56(void)

byte FUN_141767e56(undefined2 *param_1)

{
  char cVar1;
  byte bVar2;
  
  bVar2 = 0;
  cVar1 = FUN_144880847(*param_1,0);
  if (cVar1 != '\0') {
    if (*(uint *)(param_1 + 0xc) < 2) {
      bVar2 = 0;
    }
    else {
      bVar2 = *(byte *)(param_1 + 0x1f) >> 7;
    }
  }
  return bVar2;
}



// FUNCTION 141767e8a FUN_141767e8a body=83 status=ok
// SIG undefined FUN_141767e8a(void)

void FUN_141767e8a(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  lVar2 = (longlong)param_2 * 0x180;
  *(undefined1 *)(lVar1 + 0xf8 + lVar2) = 0;
  FUN_1447f5ae8(param_1,lVar1 + lVar2,*(undefined1 *)(lVar1 + 0xf6 + lVar2),
                *(undefined1 *)(lVar1 + 0xf7 + lVar2));
  FUN_1447f585c(param_1 + 0x110,param_2);
  return;
}



// FUNCTION 141767ede FUN_141767ede body=176 status=ok
// SIG undefined FUN_141767ede(void)

void FUN_141767ede(longlong param_1,undefined8 param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  
  if (-1 < (int)param_3) {
    cVar3 = FUN_14041bc60(param_2);
    if (cVar3 != '\0') {
      lVar2 = *(longlong *)(param_1 + 0x298);
      lVar1 = lVar2 + (ulonglong)param_3 * 400;
      FUN_14041c016(lVar1,param_2);
      FUN_1447f585c(param_1 + 0x268,param_3);
      if (*(int *)(lVar2 + 0x154 + (ulonglong)param_3 * 400) != 0) {
        uVar5 = 0;
        do {
          iVar4 = *(int *)(lVar1 + 0x150) + uVar5;
          FUN_14499d574((longlong)iVar4 * 0x180 + *(longlong *)(param_1 + 8),param_2,lVar1);
          FUN_1447f585c(param_1 + 0x110,iVar4);
          uVar5 = uVar5 + 1;
        } while (uVar5 < *(uint *)(lVar1 + 0x154));
      }
    }
  }
  return;
}



// FUNCTION 14176801a FUN_14176801a body=40 status=ok
// SIG undefined FUN_14176801a(void)

undefined8 FUN_14176801a(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141768042 FUN_141768042 body=43 status=ok
// SIG undefined FUN_141768042(void)

void FUN_141768042(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 8;
  }
  return;
}



// FUNCTION 14176806e FUN_14176806e body=40 status=ok
// SIG undefined FUN_14176806e(void)

undefined8 FUN_14176806e(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141768096 FUN_141768096 body=40 status=ok
// SIG undefined FUN_141768096(void)

undefined8 FUN_141768096(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417680be FUN_1417680be body=201 status=ok
// SIG undefined FUN_1417680be(void)

undefined8 * FUN_1417680be(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  *param_1 = &PTR_FUN_14a1fb9b8;
  lVar4 = param_1[6];
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
  if (param_1[4] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[4] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141768188 FUN_141768188 body=353 status=ok
// SIG undefined FUN_141768188(void)

void FUN_141768188(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14176820d;
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
LAB_14176820d:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1417682ea FUN_1417682ea body=201 status=ok
// SIG undefined FUN_1417682ea(void)

undefined8 * FUN_1417682ea(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  *param_1 = &PTR_FUN_14a1fb9b8;
  lVar4 = param_1[6];
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
  if (param_1[4] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[4] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417683b4 FUN_1417683b4 body=40 status=ok
// SIG undefined FUN_1417683b4(void)

undefined8 FUN_1417683b4(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417683dc FUN_1417683dc body=385 status=ok
// SIG undefined FUN_1417683dc(void)

/* WARNING: Removing unreachable block (ram,0x000141768554) */

void FUN_1417683dc(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    lVar6 = 0;
    do {
      if ((*(int *)(lVar1 + 8 + lVar6) != 0) &&
         (plVar2 = *(longlong **)(lVar1 + lVar6), plVar2 != (longlong *)0x0)) {
        local_68 = 0;
        local_60 = 0;
        (**(code **)(*plVar2 + 0x40))(plVar2,&local_68);
        uVar5 = uStack_50;
        lVar7 = (longlong)(int)uStack_50;
        uVar4 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
        if (uStack_50._4_4_ < uVar4) {
          FUN_1447a71f6(&local_58,uVar5 & 0xffffffff);
        }
        lVar7 = lVar7 * 0x10;
        *(undefined8 *)(local_58 + lVar7) = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = 0;
        *(undefined8 *)(local_58 + lVar7) = local_68;
        local_68 = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = local_60;
        local_60 = 0;
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar6);
  }
  FUN_1448a8284(param_1);
  if (&local_58 == param_1) {
    uVar5 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_144760e21(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = local_58;
    local_58 = 0;
    *(int *)(param_1 + 1) = (int)uStack_50;
    *(uint *)((longlong)param_1 + 0xc) = uStack_50._4_4_;
    uStack_50 = 0;
    uVar5 = 0;
  }
  FUN_144760e21(local_58,uVar5);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14176855e FUN_14176855e body=40 status=ok
// SIG undefined FUN_14176855e(void)

undefined8 FUN_14176855e(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141768586 FUN_141768586 body=40 status=ok
// SIG undefined FUN_141768586(void)

undefined8 FUN_141768586(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417685ae FUN_1417685ae body=40 status=ok
// SIG undefined FUN_1417685ae(void)

undefined8 FUN_1417685ae(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417685d6 FUN_1417685d6 body=40 status=ok
// SIG undefined FUN_1417685d6(void)

undefined8 FUN_1417685d6(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417685fe FUN_1417685fe body=231 status=ok
// SIG undefined FUN_1417685fe(void)

undefined8 *
FUN_1417685fe(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = DAT_14c9f0850;
  if (DAT_14c9f0850 != 0) {
    LOCK();
    *(int *)(DAT_14c9f0850 + 8) = *(int *)(DAT_14c9f0850 + 8) + 1;
    UNLOCK();
  }
  local_20 = &DAT_14c9f0808;
  local_38 = 2;
  local_30 = param_3;
  FUN_140068f1a(param_1);
  *param_1 = &PTR_FUN_14a256380;
  uVar8 = param_5[1];
  uVar9 = param_5[2];
  uVar10 = param_5[3];
  param_1[0x38] = *param_5;
  param_1[0x39] = uVar8;
  param_1[0x3a] = uVar9;
  param_1[0x3b] = uVar10;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_5 + 4);
  param_1[0x3e] = param_5[6];
  param_1[0x40] = param_5[8];
  param_5[8] = 0;
  uVar1 = *(undefined4 *)(param_5 + 10);
  uVar2 = *(undefined4 *)((longlong)param_5 + 0x54);
  uVar3 = *(undefined4 *)(param_5 + 0xb);
  uVar4 = *(undefined4 *)((longlong)param_5 + 0x5c);
  uVar5 = *(undefined4 *)((longlong)param_5 + 100);
  uVar6 = *(undefined4 *)(param_5 + 0xd);
  uVar7 = *(undefined4 *)((longlong)param_5 + 0x6c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_5 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0x224) = uVar5;
  *(undefined4 *)(param_1 + 0x45) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x22c) = uVar7;
  *(undefined4 *)(param_1 + 0x42) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x214) = uVar2;
  *(undefined4 *)(param_1 + 0x43) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x21c) = uVar4;
  if (param_1[0x3e] != 0) {
    param_5[6] = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417686e6 FUN_1417686e6 body=92 status=ok
// SIG undefined FUN_1417686e6(void)

undefined8 * FUN_1417686e6(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a256380;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141768742 FUN_141768742 body=233 status=ok
// SIG undefined FUN_141768742(void)

void FUN_141768742(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 0x50;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar2 & (uVar3 + uVar2) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    iVar1 = (int)(uVar3 / 0x50);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x50,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14176882c FUN_14176882c body=40 status=ok
// SIG undefined FUN_14176882c(void)

undefined8 FUN_14176882c(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


