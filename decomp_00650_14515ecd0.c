// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14515ecd0 FUN_14515ecd0 body=8 status=ok
// SIG undefined FUN_14515ecd0(void)

undefined1 FUN_14515ecd0(void)

{
  return DAT_14c7c9982;
}



// FUNCTION 14515ece0 FUN_14515ece0 body=8 status=ok
// SIG undefined FUN_14515ece0(void)

undefined1 FUN_14515ece0(void)

{
  return DAT_14c7c9983;
}



// FUNCTION 14515ecf0 FUN_14515ecf0 body=195 status=ok
// SIG undefined FUN_14515ecf0(void)

undefined8 FUN_14515ecf0(int param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  char local_res10;
  undefined1 local_res11;
  
  plVar3 = &DAT_14c7c9990;
  while ((*plVar3 == 0 || ((int)plVar3[1] != param_1))) {
    plVar3 = plVar3 + 0x440;
    if (0x14c7e318f < (longlong)plVar3) {
      return 0x8001002d;
    }
  }
  if (plVar3 == (longlong *)0x0) {
    return 0x8001002d;
  }
  if (DAT_14c7c9986 != '\0') {
    iVar2 = (int)DAT_14c7c9984 + ((int)DAT_14c7c9984 >> 0x1f & 0xffU);
    local_res10 = (char)iVar2 - (char)(DAT_14c7c9984 >> 7);
    local_res11 = (undefined1)((uint)iVar2 >> 8);
    cVar1 = FUN_14515bd00((short)plVar3[4],*(undefined2 *)((longlong)plVar3 + 0x22));
    if ((cVar1 == '\0') || (*(ushort *)(plVar3 + 0x3c) < 0x110)) {
      cVar1 = FUN_14515bcd0((short)plVar3[4],*(undefined2 *)((longlong)plVar3 + 0x22));
      if (cVar1 == '\0') {
        return 0;
      }
      if (*(ushort *)(plVar3 + 0x3c) < 0x352) {
        return 0;
      }
    }
    FUN_1451665b0(plVar3,0x18,1,&local_res10,5);
  }
  return 0;
}



// FUNCTION 14515edc0 FUN_14515edc0 body=997 status=ok
// SIG undefined FUN_14515edc0(void)

void FUN_14515edc0(int param_1,void *param_2,ushort param_3)

{
  HANDLE hFile;
  char cVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  BOOL BVar6;
  DWORD DVar7;
  undefined2 *_Dst;
  HANDLE pvVar8;
  longlong *plVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  uint uVar14;
  uint nNumberOfBytesToWrite;
  undefined1 auStackY_f8 [32];
  DWORD local_c8 [2];
  void *local_c0;
  DWORD local_b8 [2];
  undefined8 local_b0;
  _OVERLAPPED local_a8;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStackY_f8;
  plVar9 = &DAT_14c7c9990;
  while ((local_c0 = param_2, *plVar9 == 0 || ((int)plVar9[1] != param_1))) {
    plVar9 = plVar9 + 0x440;
    if (0x14c7e318f < (longlong)plVar9) {
      FUN_14515bde0();
LAB_14515ef99:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStackY_f8);
    }
  }
  FUN_14515bde0();
  if (((plVar9 == (longlong *)0x0) || (hFile = (HANDLE)plVar9[2], hFile == (HANDLE)0x0)) ||
     (cVar1 = HidD_GetPreparsedData(hFile,&local_b0), cVar1 == '\0')) goto LAB_14515ef99;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  iVar4 = HidP_GetCaps(local_b0,&local_88);
  if (iVar4 != 0x110000) goto LAB_14515ef63;
  uVar3 = local_88._6_2_;
  uVar12 = (ulonglong)local_88._6_2_;
  if ((uint)local_88._6_2_ < (uint)param_3) {
    HidD_FreePreparsedData(local_b0);
    goto LAB_14515ef99;
  }
  if (DAT_14c7fb8a8 == (code *)0x0) {
    _Dst = malloc((ulonglong)(uint)local_88._6_2_);
  }
  else {
    _Dst = (undefined2 *)(*DAT_14c7fb8a8)();
  }
  if (_Dst == (undefined2 *)0x0) {
    HidD_FreePreparsedData(local_b0);
    goto LAB_14515ef99;
  }
  bVar2 = FUN_14515bd00((short)plVar9[4]);
  uVar14 = (bVar2 + 3) * 0x10;
  uVar10 = (uint)uVar3;
  nNumberOfBytesToWrite = 0x4e;
  if (uVar10 <= uVar14) {
    nNumberOfBytesToWrite = uVar10;
  }
  memset(_Dst,0,uVar12);
  cVar1 = FUN_14515bd30((short)plVar9[4],*(undefined2 *)((longlong)plVar9 + 0x22));
  uVar11 = (uint)uVar3;
  if ((cVar1 == '\0') &&
     (cVar1 = FUN_14515bd60((short)plVar9[4],*(undefined2 *)((longlong)plVar9 + 0x22)),
     cVar1 == '\0')) {
    if (uVar10 < uVar14 || uVar11 == uVar14) {
      memcpy(_Dst,local_c0,(ulonglong)param_3);
      *(undefined1 *)_Dst = 5;
    }
    else {
      if (uVar11 < nNumberOfBytesToWrite) {
LAB_14515ef63:
        HidD_FreePreparsedData(local_b0);
        goto LAB_14515ef99;
      }
      uVar12 = (ulonglong)(int)(uint)param_3;
      *_Dst = 0xc011;
      *(undefined1 *)(_Dst + 1) = 0;
LAB_14515efd1:
      memcpy((undefined1 *)((longlong)_Dst + 3),(void *)((longlong)local_c0 + 1),uVar12 - 1);
      uVar5 = FUN_1451685d0(0xa2,_Dst,nNumberOfBytesToWrite);
      *(undefined4 *)((ulonglong)(nNumberOfBytesToWrite - 4) + (longlong)_Dst) = uVar5;
    }
  }
  else {
    if (uVar14 < uVar11) {
      if (uVar11 < nNumberOfBytesToWrite) goto LAB_14515ef63;
      *_Dst = 0x31;
      *(undefined1 *)(_Dst + 1) = 0x10;
      uVar3 = 1;
      if (param_3 != 0) {
        uVar3 = param_3;
      }
      uVar12 = (ulonglong)uVar3;
      goto LAB_14515efd1;
    }
    memcpy(_Dst,local_c0,(ulonglong)param_3);
    *(undefined1 *)_Dst = 2;
  }
  local_a8.Internal = 0;
  local_a8.InternalHigh = 0;
  local_a8.u.Pointer = (PVOID)0x0;
  local_a8.hEvent = (HANDLE)0x0;
  pvVar8 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
  if (pvVar8 != (HANDLE)0x0) {
    local_c8[0] = 0;
    local_b8[0] = 0;
    local_a8.hEvent = pvVar8;
    BVar6 = WriteFile(hFile,_Dst,nNumberOfBytesToWrite,local_c8,&local_a8);
    if ((BVar6 == 0) && (DVar7 = GetLastError(), DVar7 == 0x3e5)) {
      uVar13 = 0x9c4;
      if (uVar14 < uVar11) {
        uVar13 = 5000;
      }
      iVar4 = GetOverlappedResultEx(hFile,&local_a8,local_b8,uVar13);
      if (iVar4 == 0) {
        GetLastError();
        local_c0 = (void *)((ulonglong)local_c0 & 0xffffffff00000000);
        BVar6 = CancelIoEx(hFile,&local_a8);
        if ((BVar6 == 1) || (DVar7 = GetLastError(), DVar7 != 0x490)) {
          GetOverlappedResult(hFile,&local_a8,(LPDWORD)&local_c0,1);
          GetLastError();
        }
      }
      else {
        local_c8[0] = local_b8[0];
      }
    }
    if (local_a8.hEvent != (HANDLE)0x0) {
      CloseHandle(local_a8.hEvent);
    }
  }
  if (DAT_14c7fb8a0 == (code *)0x0) {
    free(_Dst);
    HidD_FreePreparsedData(local_b0);
  }
  else {
    (*DAT_14c7fb8a0)();
    HidD_FreePreparsedData(local_b0);
  }
  goto LAB_14515ef99;
}



// FUNCTION 14515f1c0 FUN_14515f1c0 body=761 status=ok
// SIG undefined FUN_14515f1c0(void)

undefined8 FUN_14515f1c0(undefined4 param_1,void *param_2,ushort param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  ushort uVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  longlong lVar7;
  void *_Dst;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  FUN_14515bde0();
  FUN_14515b030(param_1);
  lVar7 = FUN_14515b030(param_1);
  if (lVar7 == 0) {
    return 0x8001002d;
  }
  FUN_14515bde0();
  cVar4 = FUN_14515bd30(*(undefined2 *)(lVar7 + 2),*(undefined2 *)(lVar7 + 4));
  if (cVar4 == '\0') {
    FUN_14515bd60(*(undefined2 *)(lVar7 + 2),*(undefined2 *)(lVar7 + 4));
    goto LAB_14515f38d;
  }
  cVar4 = FUN_14515bd00();
  uVar3 = 0x40;
  if (cVar4 == '\0') {
    uVar3 = param_3;
  }
  param_3 = uVar3;
  cVar4 = FUN_14515bcd0(*(undefined2 *)(lVar7 + 2),*(undefined2 *)(lVar7 + 4));
  if ((cVar4 != '\0') ||
     (cVar4 = FUN_14515bd00(*(undefined2 *)(lVar7 + 2),*(undefined2 *)(lVar7 + 4)), cVar4 != '\0'))
  {
    if (((byte)(*(char *)(lVar7 + 6) - 2U) < 2) || (DAT_14c7c9983 != '\0')) {
LAB_14515f2c3:
      *(byte *)((longlong)param_2 + 1) = *(byte *)((longlong)param_2 + 1) | 2;
    }
    else if ((byte)(*(char *)(lVar7 + 6) - 4U) < 2) {
      cVar4 = FUN_14515bcd0(*(undefined2 *)(lVar7 + 2),*(undefined2 *)(lVar7 + 4));
      if (((cVar4 == '\0') || (*(ushort *)(lVar7 + 0x50) < 0x390)) &&
         ((cVar4 = FUN_14515bd00(*(undefined2 *)(lVar7 + 2),*(undefined2 *)(lVar7 + 4)),
          cVar4 == '\0' || (*(ushort *)(lVar7 + 0x50) < 0x150)))) {
        if (*(int *)(lVar7 + 100) == 1) goto LAB_14515f2c3;
      }
      else {
        *(byte *)((longlong)param_2 + 0x27) = *(byte *)((longlong)param_2 + 0x27) | 8;
      }
    }
  }
  if (*(char *)(lVar7 + 7) != '\0') {
    *(byte *)((longlong)param_2 + 2) = *(byte *)((longlong)param_2 + 2) | 0x20;
  }
  cVar4 = FUN_14515bd00(*(undefined2 *)(lVar7 + 2),*(undefined2 *)(lVar7 + 4));
  if ((cVar4 != '\0') || ((*(byte *)((longlong)param_2 + 2) & 0x40) != 0)) goto LAB_14515f38d;
  *(byte *)((longlong)param_2 + 2) = *(byte *)((longlong)param_2 + 2) | 0x40;
  cVar5 = '\v' - *(char *)(lVar7 + 0xb);
  bVar6 = 8 - *(char *)(lVar7 + 10);
  cVar4 = '\n';
  if (cVar5 != '\v') {
    cVar4 = cVar5;
  }
  if (bVar6 == 8) {
    bVar6 = 7;
  }
  if (((DAT_14c7c9982 != '\0') || (DAT_14c7c9983 != '\0')) && (*(ushort *)(lVar7 + 0x50) < 0x220)) {
    if (bVar6 == 0) {
      bVar6 = 3;
    }
    else {
      if (bVar6 == 2) {
        *(byte *)((longlong)param_2 + 0x25) = cVar4 << 4 | 5;
        goto LAB_14515f38d;
      }
      if (bVar6 == 3) {
        *(byte *)((longlong)param_2 + 0x25) = cVar4 << 4 | 6;
        goto LAB_14515f38d;
      }
    }
  }
  *(byte *)((longlong)param_2 + 0x25) = cVar4 << 4 | bVar6 & 7;
LAB_14515f38d:
  if (DAT_14c7fb8a8 == (code *)0x0) {
    _Dst = malloc((ulonglong)param_3);
  }
  else {
    _Dst = (void *)(*DAT_14c7fb8a8)();
  }
  if (_Dst != (void *)0x0) {
    memcpy(_Dst,param_2,(ulonglong)param_3);
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c7fb368);
    puVar8 = DAT_14c7fb898;
    puVar9 = (undefined4 *)0x0;
    if (DAT_14c7fb898 != (undefined4 *)0x0) {
      puVar1 = (undefined8 *)(DAT_14c7fb898 + 8);
      DAT_14c7fb898 = *(undefined4 **)(DAT_14c7fb898 + 8);
      *puVar1 = 0;
      puVar9 = puVar8;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c7fb368);
    if (puVar9 != (undefined4 *)0x0) {
      *puVar9 = param_1;
      *(void **)(puVar9 + 2) = _Dst;
      *(ushort *)(puVar9 + 4) = param_3;
      *(undefined8 *)(puVar9 + 8) = 0;
      *(undefined8 *)(puVar9 + 6) = param_4;
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c7fb368);
      *(undefined8 *)(puVar9 + 8) = 0;
      if (DAT_14c7fb890 != (undefined4 *)0x0) {
        puVar8 = DAT_14c7fb890;
        if (*(longlong *)(DAT_14c7fb890 + 8) != 0) {
          puVar2 = *(undefined4 **)(DAT_14c7fb890 + 8);
          do {
            puVar8 = puVar2;
            puVar2 = *(undefined4 **)(puVar8 + 8);
          } while (*(undefined4 **)(puVar8 + 8) != (undefined4 *)0x0);
        }
        *(undefined4 **)(puVar8 + 8) = puVar9;
        puVar9 = DAT_14c7fb890;
      }
      DAT_14c7fb890 = puVar9;
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c7fb368);
      ReleaseSemaphore(DAT_14c7fb360,1,(LPLONG)0x0);
      return 0;
    }
    if (DAT_14c7fb8a0 == (code *)0x0) {
      free(_Dst);
    }
    else {
      (*DAT_14c7fb8a0)();
    }
  }
  return 0x80010004;
}



// FUNCTION 14515f4c0 FUN_14515f4c0 body=568 status=ok
// SIG undefined FUN_14515f4c0(void)

void FUN_14515f4c0(int param_1,char *param_2,ulonglong param_3,char param_4)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  void *_Dst;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_b8 [32];
  undefined8 local_98 [2];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  param_3 = param_3 & 0xffff;
  plVar6 = &DAT_14c7c9990;
  do {
    lVar7 = 0;
    if ((*plVar6 != 0) && ((int)plVar6[1] == param_1)) {
      lVar7 = plVar6[2];
      break;
    }
    plVar6 = plVar6 + 0x440;
  } while ((longlong)plVar6 < 0x14c7e3190);
  if (param_4 != '\0') {
    FUN_145168500();
  }
  if ((lVar7 == 0) || (cVar2 = HidD_GetPreparsedData(lVar7,local_98), cVar2 == '\0'))
  goto LAB_14515f6cb;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  iVar3 = HidP_GetCaps(local_98[0]);
  if (iVar3 == 0x110000) {
    uVar8 = (uint)param_3;
    uVar4 = (uint)(ushort)uStack_80;
    if (uVar4 < uVar8) {
      HidD_FreePreparsedData(local_98[0]);
      goto LAB_14515f6cb;
    }
    if (DAT_14c7fb8a8 == (code *)0x0) {
      _Dst = malloc((ulonglong)uVar4);
    }
    else {
      _Dst = (void *)(*DAT_14c7fb8a8)();
    }
    uVar1 = local_88;
    if (_Dst == (void *)0x0) {
      HidD_FreePreparsedData(local_98[0]);
      goto LAB_14515f6cb;
    }
    memset(_Dst,0,(ulonglong)uVar4);
    memcpy(_Dst,param_2,param_3);
    if (0x40 < (ushort)((ulonglong)uVar1 >> 0x20)) {
      if ((*param_2 == -0x20) || (uVar8 < 5)) {
        if (DAT_14c7fb8a0 != (code *)0x0) {
          (*DAT_14c7fb8a0)();
          HidD_FreePreparsedData(local_98[0]);
          goto LAB_14515f6cb;
        }
        free(_Dst);
        goto LAB_14515f625;
      }
      uVar5 = FUN_1451685d0(0x53,_Dst,param_3);
      *(undefined4 *)((ulonglong)(uVar8 - 4) + (longlong)_Dst) = uVar5;
    }
    HidD_SetFeature(lVar7,_Dst,param_3);
    GetLastError();
    if (DAT_14c7fb8a0 == (code *)0x0) {
      free(_Dst);
      HidD_FreePreparsedData(local_98[0]);
    }
    else {
      (*DAT_14c7fb8a0)();
      HidD_FreePreparsedData(local_98[0]);
    }
  }
  else {
LAB_14515f625:
    HidD_FreePreparsedData(local_98[0]);
  }
LAB_14515f6cb:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_b8);
}



// FUNCTION 14515f710 FUN_14515f710 body=551 status=ok
// SIG undefined FUN_14515f710(void)

undefined8 FUN_14515f710(int param_1,undefined2 *param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  
  iVar3 = FUN_145168520();
  if (iVar3 == 0) {
    puVar7 = &DAT_14c7c9990;
    plVar6 = (longlong *)0x0;
    if ((DAT_14c7c9990 != 0) && (plVar6 = &DAT_14c7c9990, DAT_14c7c9998 != param_1)) {
      plVar6 = (longlong *)0x0;
    }
    plVar5 = plVar6;
    if ((DAT_14c7cbb90 != 0) && (plVar5 = &DAT_14c7cbb90, DAT_14c7cbb98 != param_1)) {
      plVar5 = plVar6;
    }
    plVar6 = plVar5;
    if ((DAT_14c7cdd90 != 0) && (plVar6 = &DAT_14c7cdd90, DAT_14c7cdd98 != param_1)) {
      plVar6 = plVar5;
    }
    plVar5 = plVar6;
    if ((DAT_14c7cff90 != 0) && (plVar5 = &DAT_14c7cff90, DAT_14c7cff98 != param_1)) {
      plVar5 = plVar6;
    }
    plVar6 = plVar5;
    if ((DAT_14c7d2190 != 0) && (plVar6 = &DAT_14c7d2190, DAT_14c7d2198 != param_1)) {
      plVar6 = plVar5;
    }
    plVar5 = plVar6;
    if ((DAT_14c7d4390 != 0) && (plVar5 = &DAT_14c7d4390, DAT_14c7d4398 != param_1)) {
      plVar5 = plVar6;
    }
    plVar6 = plVar5;
    if ((DAT_14c7d6590 != 0) && (plVar6 = &DAT_14c7d6590, DAT_14c7d6598 != param_1)) {
      plVar6 = plVar5;
    }
    plVar5 = plVar6;
    if ((DAT_14c7d8790 != 0) && (plVar5 = &DAT_14c7d8790, DAT_14c7d8798 != param_1)) {
      plVar5 = plVar6;
    }
    plVar6 = plVar5;
    if ((DAT_14c7da990 != 0) && (plVar6 = &DAT_14c7da990, DAT_14c7da998 != param_1)) {
      plVar6 = plVar5;
    }
    plVar5 = plVar6;
    if ((DAT_14c7dcb90 != 0) && (plVar5 = &DAT_14c7dcb90, DAT_14c7dcb98 != param_1)) {
      plVar5 = plVar6;
    }
    plVar6 = plVar5;
    if ((DAT_14c7ded90 != 0) && (plVar6 = &DAT_14c7ded90, DAT_14c7ded98 != param_1)) {
      plVar6 = plVar5;
    }
    if ((DAT_14c7e0f90 == 0) || (DAT_14c7e0f98 != param_1)) {
      if (plVar6 == (longlong *)0x0) goto LAB_14515f8ea;
    }
    else {
      plVar6 = &DAT_14c7e0f90;
    }
    if ((char)plVar6[5] != '\0') {
      do {
        psVar4 = (short *)*puVar7;
        if (psVar4 != (short *)0x0) {
          lVar8 = *plVar6 - (longlong)psVar4;
          do {
            sVar1 = *psVar4;
            sVar2 = *(short *)((longlong)psVar4 + lVar8);
            if (sVar1 != sVar2) break;
            psVar4 = psVar4 + 1;
          } while (sVar2 != 0);
          if ((sVar1 == sVar2) && (*(char *)(puVar7 + 5) == '\0')) {
            if (puVar7 != (undefined8 *)0x0) {
              *param_2 = *(undefined2 *)((longlong)puVar7 + 0x22);
              FUN_145168550();
              return 0;
            }
            break;
          }
        }
        puVar7 = puVar7 + 0x440;
      } while ((longlong)puVar7 < 0x14c7e3190);
LAB_14515f8ea:
      FUN_145168550();
      return 0x80920007;
    }
    *param_2 = *(undefined2 *)((longlong)plVar6 + 0x22);
    FUN_145168550();
  }
  return 0;
}



// FUNCTION 14515f940 FUN_14515f940 body=221 status=ok
// SIG undefined FUN_14515f940(void)

undefined8 FUN_14515f940(int param_1,undefined4 *param_2)

{
  int iVar1;
  longlong *plVar2;
  
  iVar1 = FUN_145168520();
  if (iVar1 != 0) {
    return 0;
  }
  plVar2 = &DAT_14c7c9990;
  while ((*plVar2 == 0 || ((int)plVar2[1] != param_1))) {
    plVar2 = plVar2 + 0x440;
    if (0x14c7e318f < (longlong)plVar2) {
LAB_14515f98f:
      FUN_145168550();
      return 0x80920007;
    }
  }
  if (plVar2 != (longlong *)0x0) {
    if (*(uint *)((longlong)plVar2 + 500) != 0) {
      memset(param_2 + 1,0,(ulonglong)*(uint *)((longlong)plVar2 + 500));
      *param_2 = *(undefined4 *)((longlong)plVar2 + 500);
      wcsncpy_s((wchar_t *)(param_2 + 1),(ulonglong)*(uint *)((longlong)plVar2 + 500),
                (wchar_t *)(plVar2 + 0x3f),0xffffffffffffffff);
      FUN_145168550();
      return 0;
    }
    FUN_145168550();
    return 0x809200ff;
  }
  goto LAB_14515f98f;
}



// FUNCTION 14515fa20 FUN_14515fa20 body=254 status=ok
// SIG undefined FUN_14515fa20(void)

undefined8 * FUN_14515fa20(undefined8 *param_1,void *param_2)

{
  ulonglong uVar1;
  void *_Dst;
  ulonglong uVar2;
  ulonglong uVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar2 = 0xffffffffffffffff;
  do {
    uVar2 = uVar2 + 1;
  } while (*(short *)((longlong)param_2 + uVar2 * 2) != 0);
  if (uVar2 < 0x7fffffffffffffff) {
    if (uVar2 < 8) {
      param_1[2] = uVar2;
      param_1[3] = 7;
      memcpy(param_1,param_2,uVar2 * 2);
      *(undefined2 *)(uVar2 * 2 + (longlong)param_1) = 0;
    }
    else {
      uVar1 = uVar2 | 7;
      uVar3 = 0x7ffffffffffffffe;
      if ((uVar1 < 0x7fffffffffffffff) && (uVar3 = uVar1, uVar1 < 10)) {
        uVar3 = 10;
      }
      if (DAT_14c7fb8a8 == (code *)0x0) {
        _Dst = malloc(uVar3 * 2 + 2);
      }
      else {
        _Dst = (void *)(*DAT_14c7fb8a8)();
      }
      if (_Dst == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      param_1[2] = uVar2;
      *param_1 = _Dst;
      param_1[3] = uVar3;
      memcpy(_Dst,param_2,uVar2 * 2);
      *(undefined2 *)(uVar2 * 2 + (longlong)_Dst) = 0;
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_146eb22ad();
}



// FUNCTION 14515fb20 FUN_14515fb20 body=70 status=ok
// SIG undefined FUN_14515fb20(void)

void FUN_14515fb20(undefined8 *param_1)

{
  if ((7 < (ulonglong)param_1[3]) && ((void *)*param_1 != (void *)0x0)) {
    if (DAT_14c7fb8a0 == (code *)0x0) {
      free((void *)*param_1);
    }
    else {
      (*DAT_14c7fb8a0)();
    }
  }
  param_1[2] = 0;
  param_1[3] = 7;
  *(undefined2 *)param_1 = 0;
  return;
}



// FUNCTION 14515fb70 FUN_14515fb70 body=70 status=ok
// SIG undefined FUN_14515fb70(void)

void FUN_14515fb70(undefined8 *param_1)

{
  if ((7 < (ulonglong)param_1[3]) && ((void *)*param_1 != (void *)0x0)) {
    if (DAT_14c7fb8a0 == (code *)0x0) {
      free((void *)*param_1);
    }
    else {
      (*DAT_14c7fb8a0)();
    }
  }
  param_1[2] = 0;
  param_1[3] = 7;
  *(undefined2 *)param_1 = 0;
  return;
}



// FUNCTION 14515fbc0 FUN_14515fbc0 body=251 status=ok
// SIG undefined FUN_14515fbc0(void)

undefined8 * FUN_14515fbc0(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  void *_Dst;
  undefined8 *_Src;
  ulonglong uVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  _Src = param_2;
  if (7 < (ulonglong)param_2[3]) {
    _Src = (undefined8 *)*param_2;
  }
  uVar1 = param_2[2];
  if (uVar1 < 0x7fffffffffffffff) {
    if (uVar1 < 8) {
      param_1[2] = uVar1;
      param_1[3] = 7;
      uVar2 = _Src[1];
      *param_1 = *_Src;
      param_1[1] = uVar2;
    }
    else {
      uVar3 = uVar1 | 7;
      uVar4 = 0x7ffffffffffffffe;
      if ((uVar3 < 0x7fffffffffffffff) && (uVar4 = uVar3, uVar3 < 10)) {
        uVar4 = 10;
      }
      if (DAT_14c7fb8a8 == (code *)0x0) {
        _Dst = malloc(uVar4 * 2 + 2);
      }
      else {
        _Dst = (void *)(*DAT_14c7fb8a8)();
      }
      if (_Dst == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *param_1 = _Dst;
      param_1[2] = uVar1;
      param_1[3] = uVar4;
      memcpy(_Dst,_Src,uVar1 * 2 + 2);
    }
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_146eb22ad();
}



// FUNCTION 14515fcc0 FUN_14515fcc0 body=4276 status=ok
// SIG undefined FUN_14515fcc0(void)

void FUN_14515fcc0(undefined8 *param_1)

{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  int iVar4;
  HANDLE hThread;
  void *_Memory;
  char *pcVar5;
  short *psVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  byte bVar11;
  size_t _Size;
  longlong *plVar12;
  undefined8 uVar13;
  undefined1 *puVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined1 *puVar19;
  byte bVar20;
  bool bVar21;
  undefined1 auStack_1e8 [32];
  undefined1 **local_1c8;
  longlong local_1c0;
  uint local_1b8;
  void **local_1b0;
  undefined1 local_1a8;
  char local_198;
  char local_197;
  char local_196;
  char local_195;
  char local_194;
  char local_193;
  char *local_190;
  ushort local_188 [4];
  undefined1 *local_180;
  uint local_178;
  uint local_174;
  int local_170;
  int local_16c;
  int local_168;
  int local_164;
  int local_160;
  uint local_15c;
  undefined8 local_158;
  undefined1 *local_150;
  undefined1 *local_148;
  undefined1 *local_140;
  void *local_138;
  undefined1 *local_130;
  undefined1 *local_128 [2];
  longlong local_118;
  void *local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong uStack_f8;
  undefined4 local_f0;
  undefined1 *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  hThread = GetCurrentThread();
  SetThreadPriority(hThread,0xf);
  lVar10 = param_1[3];
  puVar14 = (undefined1 *)0x0;
  local_140 = (undefined1 *)0x0;
  local_195 = '\0';
  local_194 = '\0';
  local_150 = (undefined1 *)0x0;
  local_198 = '\0';
  local_130 = (undefined1 *)0x0;
  local_193 = '\0';
  local_128[0] = (undefined1 *)0x0;
  local_148 = (undefined1 *)0x0;
  local_197 = '\0';
  local_196 = '\0';
  local_118 = lVar10;
  cVar3 = HidD_GetPreparsedData(param_1[2]);
  if (cVar3 == '\0') {
    iVar4 = FUN_145168520();
    if (iVar4 == 0) {
      if (*(char *)(param_1 + 5) == '\0') {
        CloseHandle((HANDLE)param_1[2]);
      }
      if ((void *)*param_1 != (void *)0x0) {
        if (DAT_14c7fb8a0 == (code *)0x0) {
          free((void *)*param_1);
        }
        else {
          (*DAT_14c7fb8a0)();
        }
      }
      memset(param_1,0,0x2200);
      FUN_145168550();
    }
    if (DAT_14c7c9987 != '\0') {
      plVar12 = &DAT_14c7e3190;
      do {
        iVar4 = (int)puVar14;
        if (*plVar12 == lVar10) goto LAB_14515feae;
        puVar14 = (undefined1 *)(ulonglong)(iVar4 + 1U);
        plVar12 = plVar12 + 1;
      } while ((int)(iVar4 + 1U) < 0xc);
    }
    goto LAB_145160d5f;
  }
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  iVar4 = HidP_GetCaps(local_158);
  if (iVar4 != 0x110000) {
    HidD_FreePreparsedData(local_158);
    iVar4 = FUN_145168520();
    if (iVar4 == 0) {
      if (*(char *)(param_1 + 5) == '\0') {
        CloseHandle((HANDLE)param_1[2]);
      }
      if ((void *)*param_1 != (void *)0x0) {
        if (DAT_14c7fb8a0 == (code *)0x0) {
          free((void *)*param_1);
        }
        else {
          (*DAT_14c7fb8a0)();
        }
      }
      memset(param_1,0,0x2200);
      FUN_145168550();
    }
    if (DAT_14c7c9987 != '\0') {
      plVar12 = &DAT_14c7e3190;
      do {
        iVar4 = (int)puVar14;
        if (*plVar12 == lVar10) goto LAB_14515feae;
        puVar14 = (undefined1 *)(ulonglong)(iVar4 + 1U);
        plVar12 = plVar12 + 1;
      } while ((int)(iVar4 + 1U) < 0xc);
    }
    goto LAB_145160d5f;
  }
  local_190 = (char *)0x0;
  local_188[0] = uStack_40._4_2_;
  if (DAT_14c7fb8a8 == (code *)0x0) {
    _Memory = malloc((ulonglong)uStack_40._4_2_ * 0x48);
  }
  else {
    _Memory = (void *)(*DAT_14c7fb8a8)();
  }
  puVar19 = puVar14;
  local_138 = _Memory;
  if (_Memory == (void *)0x0) goto LAB_1451606b5;
  iVar4 = HidP_GetValueCaps(2,_Memory,local_188,local_158);
  if (iVar4 == 0x110000) {
    uVar1 = local_78._4_2_;
    uVar17 = (uint)local_78._4_2_;
    local_178 = (uint)local_78._4_2_;
    uVar2 = (ushort)uStack_70;
    uVar9 = uStack_70 & 0xffff;
    local_174 = local_178;
    cVar3 = FUN_14515bc60(*(undefined2 *)(param_1 + 4),*(undefined2 *)((longlong)param_1 + 0x22),
                          *(undefined4 *)((longlong)param_1 + 0x24));
    if (cVar3 == '\0') {
      cVar3 = FUN_14515bd30(*(undefined2 *)(param_1 + 4),*(undefined2 *)((longlong)param_1 + 0x22));
      if ((cVar3 != '\0') ||
         (cVar3 = FUN_14515bd60(*(undefined2 *)(param_1 + 4),
                                *(undefined2 *)((longlong)param_1 + 0x22)), cVar3 != '\0')) {
        bVar21 = uVar2 < 0x40;
        goto LAB_14515ffb6;
      }
LAB_145160b1a:
      puVar19 = (undefined1 *)0x0;
LAB_1451606b5:
      GetLastError();
      if (local_190 != (char *)0x0) goto LAB_1451606c9;
    }
    else {
      bVar21 = uVar2 < 0x35;
LAB_14515ffb6:
      if ((bVar21) || (uVar1 < 0x40)) goto LAB_145160b1a;
      if (DAT_14c7fb8a8 == (code *)0x0) {
        local_180 = malloc(uVar9);
      }
      else {
        local_180 = (undefined1 *)(*DAT_14c7fb8a8)();
      }
      puVar19 = local_180;
      if (local_180 == (undefined1 *)0x0) goto LAB_1451606b5;
      iVar4 = FUN_145166280(param_1,_Memory,local_188[0]);
      puVar19 = local_180;
      if (iVar4 < 1) {
        if (-1 < iVar4) {
          bVar20 = 0;
          bVar11 = 0;
          if (local_178 == 0x40) {
            _Size = 0x800;
            if (DAT_14c7fb8a8 == (code *)0x0) goto LAB_145160081;
            pcVar5 = (char *)(*DAT_14c7fb8a8)(0x800);
            uVar17 = local_178 << 5;
            bVar11 = bVar20;
            local_174 = uVar17;
          }
          else if (DAT_14c7fb8a8 == (code *)0x0) {
            pcVar5 = malloc((ulonglong)local_178);
            local_174 = uVar17;
          }
          else {
            pcVar5 = (char *)(*DAT_14c7fb8a8)();
            local_174 = uVar17;
          }
          goto LAB_1451600b0;
        }
        goto LAB_1451606b5;
      }
      if (DAT_14c7fb358 == 0) goto LAB_1451606b5;
      bVar20 = 1;
      bVar11 = bVar20;
      if (local_178 == 0x4e) {
        _Size = 0x9c0;
        if (DAT_14c7fb8a8 == (code *)0x0) {
LAB_145160081:
          pcVar5 = malloc(_Size);
          uVar17 = local_178 << 5;
          bVar11 = bVar20;
          local_174 = uVar17;
        }
        else {
          pcVar5 = (char *)(*DAT_14c7fb8a8)();
          uVar17 = local_178 << 5;
          local_174 = uVar17;
        }
      }
      else if (DAT_14c7fb8a8 == (code *)0x0) {
        pcVar5 = malloc((ulonglong)local_178);
      }
      else {
        pcVar5 = (char *)(*DAT_14c7fb8a8)();
      }
LAB_1451600b0:
      local_190 = pcVar5;
      memset(pcVar5,0,(ulonglong)uVar17);
      puVar19 = local_180;
      if ((pcVar5 == (char *)0x0) ||
         (iVar4 = FUN_145166450(param_1,local_180,uVar9,bVar11), iVar4 < 0)) goto LAB_1451606b5;
      cVar3 = FUN_14515bc60(*(undefined2 *)(param_1 + 4),*(undefined2 *)((longlong)param_1 + 0x22),
                            *(undefined4 *)((longlong)param_1 + 0x24));
      if (cVar3 != '\0') {
        if (0x30ff < *(ushort *)((longlong)param_1 + 0x1d6)) goto LAB_145160217;
        goto LAB_1451606b5;
      }
      cVar3 = FUN_14515bd30(*(undefined2 *)(param_1 + 4),*(undefined2 *)((longlong)param_1 + 0x22));
      if (cVar3 == '\0') {
        FUN_14515bd60(*(undefined2 *)(param_1 + 4),*(undefined2 *)((longlong)param_1 + 0x22));
LAB_145160217:
        if ((bVar11 == 0) && (iVar4 = FUN_145164080(param_1,0), iVar4 < 0)) goto LAB_1451606b5;
        cVar3 = FUN_14515bc60(*(undefined2 *)(param_1 + 4),*(undefined2 *)((longlong)param_1 + 0x22)
                              ,*(undefined4 *)((longlong)param_1 + 0x24));
        if ((cVar3 == '\0') && (cVar3 = FUN_14515bd30(*(undefined2 *)(param_1 + 4)), cVar3 == '\0'))
        {
          cVar3 = FUN_14515bd60(*(undefined2 *)(param_1 + 4),
                                *(undefined2 *)((longlong)param_1 + 0x22));
          if (cVar3 != '\0') {
            local_1c0 = (longlong)param_1 + 0x1b4;
            local_1c8 = (undefined1 **)((longlong)param_1 + 0x132);
            local_1b8 = (uint)bVar11;
            iVar4 = FUN_14515c650(*(undefined4 *)(param_1 + 1),*(undefined2 *)(param_1 + 4),
                                  *(undefined2 *)((longlong)param_1 + 0x22),
                                  *(undefined4 *)((longlong)param_1 + 0x24));
LAB_145160389:
            if (-1 < iVar4) {
              iVar4 = FUN_144d70c90();
              uVar17 = local_15c;
              while ((iVar4 != 0 && (puVar19 = local_180, DAT_14c7c9987 != '\0'))) {
                if ((bVar11 == 0) ||
                   ((*(char *)((longlong)param_1 + 0x2f) == '\0' ||
                    (cVar3 = FUN_14515bd90(*(undefined2 *)(param_1 + 4),
                                           *(undefined2 *)((longlong)param_1 + 0x22)), cVar3 == '\0'
                    )))) {
LAB_1451604a9:
                  local_1c8 = (undefined1 **)CONCAT71(local_1c8._1_7_,bVar11);
                  iVar4 = FUN_145166a20(param_1[2],pcVar5,local_174,&local_178);
                  puVar19 = local_180;
                  if (iVar4 == -0x7ffeffd5) break;
                  if ((iVar4 != -0x7ffeffbf) && (0x3f < local_178)) {
                    if (bVar11 == 0) {
                      uVar15 = 0;
                      if ((local_178 & 0x3f) == 0) {
                        uVar15 = local_178 >> 6;
                      }
                    }
                    else {
                      uVar15 = 0;
                      if ((bVar11 == 1) && (local_178 == (local_178 / 0x4e) * 0x4e)) {
                        uVar15 = local_178 / 0x4e;
                      }
                    }
                    puVar8 = (undefined1 *)FUN_14515bde0();
                    if (uVar15 != 0) {
                      local_168 = 0;
                      local_16c = 0;
                      uVar16 = 1;
                      local_160 = uVar15 * 2000 + -2000;
                      local_164 = uVar15 * 4000 + -4000;
                      local_170 = uVar15 * 1000 + -1000;
                      do {
                        iVar4 = local_164;
                        local_e8 = (undefined1 *)0x0;
                        uStack_e0 = 0;
                        local_d8 = 0;
                        uStack_d0 = 0;
                        local_c8 = 0;
                        uStack_c0 = 0;
                        local_b8 = 0;
                        uStack_b0 = 0;
                        local_a8 = 0;
                        uStack_a0 = 0;
                        local_98 = 0;
                        uStack_90 = 0;
                        local_88 = 0;
                        uStack_80 = 0;
                        local_15c = uVar16;
                        if (bVar11 == 0) {
                          cVar3 = FUN_14515bd00(*(undefined2 *)(param_1 + 4));
                          if (cVar3 == '\0') {
                            if (local_140 == (undefined1 *)0x0) {
                              local_e8 = puVar8 + -(longlong)iVar4;
                            }
                            else {
                              local_e8 = local_140 +
                                         (ulonglong)
                                         (((longlong)puVar8 - (longlong)local_140) *
                                         (longlong)(int)uVar16) / (ulonglong)(longlong)(int)uVar15;
                            }
                          }
                          else {
                            if (local_140 != (undefined1 *)0x0) goto LAB_145160611;
                            local_e8 = puVar8 + -(longlong)local_170;
                          }
                        }
                        else if (local_140 == (undefined1 *)0x0) {
                          local_e8 = puVar8 + -(longlong)local_160;
                        }
                        else {
LAB_145160611:
                          local_e8 = local_140 +
                                     (ulonglong)
                                     (((longlong)puVar8 - (longlong)local_140) *
                                     (longlong)(int)uVar16) / (ulonglong)(longlong)(int)uVar15;
                        }
                        local_d8 = local_d8 & 0xffffffffffffff00;
                        cVar3 = FUN_14515bc60(*(undefined2 *)(param_1 + 4),
                                              *(undefined2 *)((longlong)param_1 + 0x22),
                                              *(undefined4 *)((longlong)param_1 + 0x24));
                        if (cVar3 == '\0') {
                          cVar3 = FUN_14515bd30(*(undefined2 *)(param_1 + 4));
                          if (cVar3 == '\0') {
                            cVar3 = FUN_14515bd60(*(undefined2 *)(param_1 + 4));
                            if (cVar3 != '\0') {
                              if (bVar11 != 0) goto LAB_145160659;
                              goto LAB_1451606fa;
                            }
                          }
                          else {
                            uVar17 = 0x40;
                            if (bVar11 != 0) {
                              uVar17 = 0x4e;
                            }
                          }
                          uVar18 = uVar17;
                          iVar4 = local_16c;
                          if (bVar11 != 0) goto LAB_145160697;
LAB_145160705:
                          pcVar5 = local_190 + iVar4;
                          cVar3 = FUN_14515bc60(*(undefined2 *)(param_1 + 4),
                                                *(undefined2 *)((longlong)param_1 + 0x22),
                                                *(undefined4 *)((longlong)param_1 + 0x24));
                          if (cVar3 == '\0') {
                            cVar3 = FUN_14515bd30(*(undefined2 *)(param_1 + 4),
                                                  *(undefined2 *)((longlong)param_1 + 0x22));
                            if (cVar3 == '\0') {
                              cVar3 = FUN_14515bd60(*(undefined2 *)(param_1 + 4),
                                                    *(undefined2 *)((longlong)param_1 + 0x22));
                              if (cVar3 != '\0') {
                                local_1c8 = &local_e8;
                                FUN_145166000(param_1,pcVar5,uVar18,bVar11);
                              }
                            }
                            else {
                              local_1c8 = &local_e8;
                              FUN_145165b50(param_1,pcVar5,uVar18,bVar11);
                            }
                          }
                          else {
                            local_1c8 = &local_e8;
                            FUN_145165830(param_1,pcVar5,uVar18,bVar11);
                          }
                          cVar3 = FUN_14515bd90(*(undefined2 *)(param_1 + 4));
                          uVar17 = uVar18;
                          if ((cVar3 != '\0') && (bVar11 != 0)) {
                            if ((local_d8._4_4_ >> 0x10 & 1) == 0) {
                              if ((local_198 != '\0') && (local_150 != (undefined1 *)0x0)) {
                                local_150 = (undefined1 *)0x0;
                                local_198 = '\0';
                              }
                            }
                            else if (local_198 == '\0') {
                              local_198 = '\x01';
                              local_150 = puVar8;
                            }
                            else if (9500000 < (ulonglong)((longlong)puVar8 - (longlong)local_150))
                            {
                              iVar4 = FUN_145168520();
                              if (iVar4 != 0) goto LAB_14516098d;
                              if (*(char *)((longlong)param_1 + 0x2f) == '\0') {
                                *(undefined1 *)((longlong)param_1 + 0x2f) = 1;
                              }
                              FUN_145168550();
                            }
                          }
                          cVar3 = FUN_14515bd60(*(undefined2 *)(param_1 + 4),
                                                *(undefined2 *)((longlong)param_1 + 0x22));
                          if (cVar3 != '\0') {
                            if (uStack_80._6_1_ == '\0') {
                              if ((local_197 != '\0') && (local_148 != (undefined1 *)0x0)) {
                                if ((2000000 < (ulonglong)((longlong)puVar8 - (longlong)local_148))
                                   && (lVar10 = FUN_14515b030(*(undefined4 *)(param_1 + 1)),
                                      lVar10 != 0)) {
                                  FUN_14515d590(lVar10,1);
                                }
                                local_148 = (undefined1 *)0x0;
                                local_197 = '\0';
                                local_196 = '\0';
                              }
                            }
                            else if (local_197 == '\0') {
                              local_197 = '\x01';
                              local_196 = '\0';
                              local_148 = puVar8;
                            }
                            else if ((local_196 == '\0') &&
                                    (2000000 < (ulonglong)((longlong)puVar8 - (longlong)local_148)))
                            {
                              local_196 = '\x01';
                              lVar10 = FUN_14515b030(*(undefined4 *)(param_1 + 1));
                              if (lVar10 != 0) {
                                FUN_14515d590(lVar10,3);
                              }
                            }
                          }
                          cVar3 = FUN_14515bc60(*(undefined2 *)(param_1 + 4),
                                                *(undefined2 *)((longlong)param_1 + 0x22),
                                                *(undefined4 *)((longlong)param_1 + 0x24));
                          if ((cVar3 == '\0') &&
                             (cVar3 = FUN_14515bd30(*(undefined2 *)(param_1 + 4),
                                                    *(undefined2 *)((longlong)param_1 + 0x22)),
                             cVar3 == '\0')) {
                            cVar3 = FUN_14515bd60(*(undefined2 *)(param_1 + 4));
                            if (cVar3 != '\0') {
                              FUN_14515d070(*(undefined4 *)(param_1 + 1));
                              iVar4 = FUN_1451684d0();
                              if (iVar4 == 0) {
                                lVar10 = FUN_14515b230(*(undefined4 *)(param_1 + 1));
                                if (((lVar10 != 0) && (uStack_80._7_1_ != 0)) &&
                                   ((DAT_14c7c998c & uStack_80._7_1_) == 0)) {
                                  DAT_14c7c998c = DAT_14c7c998c | uStack_80._7_1_;
                                  *(undefined1 *)(lVar10 + 0x2c45) = 1;
                                  lVar10 = FUN_14515b190(1);
                                  if (lVar10 != 0) {
                                    *(char *)(lVar10 + 1) = *(char *)(lVar10 + 1) + '\x01';
                                  }
                                }
                                FUN_145168500();
                              }
                            }
                          }
                          else {
                            FUN_14515cb90(*(undefined4 *)(param_1 + 1));
                          }
                        }
                        else {
                          if (bVar11 == 0) {
LAB_1451606fa:
                            uVar18 = 0x40;
                            iVar4 = local_16c;
                            goto LAB_145160705;
                          }
                          if (local_178 < 0x4f) {
                            uVar18 = local_178;
                            if (0x3f < local_178) goto LAB_145160697;
                          }
                          else {
LAB_145160659:
                            uVar18 = 0x4e;
LAB_145160697:
                            uVar17 = uVar18;
                            if (*local_190 == '\x01') {
                              puVar19 = local_180;
                              if (local_195 != '\0') goto LAB_1451606b5;
                            }
                            else {
                              if (local_195 == '\0') {
                                local_195 = '\x01';
                              }
                              cVar3 = FUN_145168570(0xa1,local_190,uVar18);
                              iVar4 = local_168;
                              if (cVar3 == '\0') goto LAB_145160705;
                            }
                          }
                        }
LAB_14516098d:
                        local_170 = local_170 + -1000;
                        local_164 = local_164 + -4000;
                        local_160 = local_160 + -2000;
                        uVar16 = uVar16 + 1;
                        local_16c = local_16c + 0x40;
                        local_168 = local_168 + 0x4e;
                        puVar14 = local_130;
                      } while ((int)local_15c < (int)uVar15);
                    }
                    if (puVar14 == (undefined1 *)0x0) {
                      puVar14 = puVar8;
                    }
                    local_140 = puVar8;
                    local_130 = puVar14;
                    if (((local_193 == '\0') &&
                        (250000 < (ulonglong)((longlong)puVar8 - (longlong)puVar14))) &&
                       (iVar4 = FUN_1451684d0(), iVar4 == 0)) {
                      lVar10 = FUN_14515b030(*(undefined4 *)(param_1 + 1));
                      if (((DAT_14c7c998a == '\0') && (lVar10 != 0)) &&
                         (*(int *)(lVar10 + 0x14) != 0)) {
                        FUN_14515a8b0(*(undefined4 *)(param_1 + 1));
                        local_193 = '\x01';
                        puVar14 = puVar8;
                        local_130 = puVar8;
                      }
                      FUN_145168500();
                    }
                    timeBeginPeriod(DAT_14c7301a0);
                    Sleep(2);
                    timeEndPeriod(DAT_14c7301a0);
                    cVar3 = FUN_14515bd60(*(undefined2 *)(param_1 + 4),
                                          *(undefined2 *)((longlong)param_1 + 0x22));
                    pcVar5 = local_190;
                    if (cVar3 != '\0') {
                      lVar10 = FUN_14515b230(*(undefined4 *)(param_1 + 1));
                      iVar4 = FUN_1451684d0();
                      pcVar5 = local_190;
                      if (iVar4 == 0) {
                        if ((DAT_14c7301a6 == '\0') || (*(char *)(lVar10 + 0x2c45) == '\0')) {
                          *(undefined1 *)(lVar10 + 0x2c46) = 0;
                          if (*(char *)(lVar10 + 0x2c47) != '\0') {
                            FUN_14515d460(lVar10);
                            *(undefined1 *)(lVar10 + 0x2c47) = 0;
                          }
                        }
                        else {
                          *(undefined1 *)(lVar10 + 0x2c46) = 1;
                          if (local_128[0] == (undefined1 *)0x0) {
                            local_128[0] = puVar8;
                          }
                          if (((*(char *)(lVar10 + 0x2c47) == '\0') &&
                              (*(int *)(lVar10 + 0x14) != 0)) &&
                             (250000 < (ulonglong)((longlong)puVar8 - (longlong)local_128[0]))) {
                            FUN_14515d330(lVar10);
                            *(undefined1 *)(lVar10 + 0x2c47) = 1;
                          }
                        }
                        FUN_145168500();
                        pcVar5 = local_190;
                      }
                    }
                  }
                }
                else if (local_194 == '\0') {
                  iVar4 = FUN_145164080(param_1,0);
                  if (iVar4 < 0) goto LAB_1451604a9;
                  local_194 = '\x01';
                }
                else {
                  iVar4 = FUN_1451684d0();
                  if (iVar4 == 0) {
                    uVar7 = FUN_14515b030(*(undefined4 *)(param_1 + 1));
                    iVar4 = FUN_14515c140(uVar7);
                    FUN_145168500();
                    puVar19 = local_180;
                    if (iVar4 < 0) break;
                  }
                  timeBeginPeriod(DAT_14c7301a0);
                  Sleep(1);
                  timeEndPeriod(DAT_14c7301a0);
                }
                iVar4 = FUN_144d70c90();
                puVar19 = local_180;
              }
              goto LAB_1451606b5;
            }
            if (iVar4 == -0x7ffeffbf) {
              FUN_14515fa20(&local_110,*param_1);
              local_f0 = 0x80000000;
              FUN_145167e30(DAT_14c7fb348,local_128,&local_110);
              if ((7 < uStack_f8) && (local_110 != (void *)0x0)) {
                if (DAT_14c7fb8a0 == (code *)0x0) {
                  free(local_110);
                }
                else {
                  (*DAT_14c7fb8a0)();
                }
              }
            }
          }
          GetLastError();
        }
        else {
          local_110 = (void *)0x0;
          uStack_108 = 0;
          local_100 = 0;
          uStack_f8 = 0;
          local_f0 = 0;
          memset(puVar19,0,uVar9);
          cVar3 = FUN_14515bc60(*(undefined2 *)(param_1 + 4),
                                *(undefined2 *)((longlong)param_1 + 0x22),
                                *(undefined4 *)((longlong)param_1 + 0x24));
          uVar7 = param_1[2];
          if ((cVar3 == '\0') || (bVar11 != 0)) {
            uVar13 = 0x29;
            *puVar19 = 5;
          }
          else {
            *puVar19 = 2;
            uVar13 = 0x25;
          }
          cVar3 = HidD_GetFeature(uVar7,puVar19,uVar13);
          puVar8 = puVar14;
          if (cVar3 == '\0') {
            GetLastError();
            puVar8 = (undefined1 *)0x8001002b;
          }
          if ((int)puVar8 == 0) {
            if ((bVar11 == 0) || (cVar3 = FUN_145168570(0xa3,puVar19,0x29), cVar3 == '\0')) {
              FUN_145165690(&local_110,puVar19,bVar11);
              local_1c0 = (longlong)param_1 + 0x1b4;
              local_1c8 = (undefined1 **)((longlong)param_1 + 0x132);
              local_1a8 = 1;
              local_1b0 = &local_110;
              local_1b8 = (uint)bVar11;
              iVar4 = FUN_14515c330(*(undefined4 *)(param_1 + 1),*(undefined2 *)(param_1 + 4),
                                    *(undefined2 *)((longlong)param_1 + 0x22),
                                    *(undefined4 *)((longlong)param_1 + 0x24));
              goto LAB_145160389;
            }
            goto LAB_1451606b5;
          }
          GetLastError();
          GetLastError();
        }
      }
      else if (((*(uint *)(param_1 + 0x3a) < 0x1003e) ||
               (cVar3 = FUN_14515bcd0(*(undefined2 *)(param_1 + 4),
                                      *(undefined2 *)((longlong)param_1 + 0x22)), cVar3 == '\0')) &&
              (cVar3 = FUN_14515bd00(*(undefined2 *)(param_1 + 4),
                                     *(undefined2 *)((longlong)param_1 + 0x22)), cVar3 == '\0')) {
        iVar4 = 0;
        if (local_188[0] != 0) {
          psVar6 = (short *)((longlong)local_138 + 0x14);
          do {
            if (((psVar6[-10] == -0x100) && (psVar6[0x12] == 0x23)) &&
               ((*psVar6 == 0x28 && ((char)psVar6[-9] == '\x05')))) goto LAB_145160217;
            iVar4 = iVar4 + 1;
            psVar6 = psVar6 + 0x24;
          } while (iVar4 < (int)(uint)local_188[0]);
        }
        GetLastError();
      }
      else {
        iVar4 = 0;
        if (local_188[0] != 0) {
          psVar6 = (short *)((longlong)local_138 + 0x14);
          do {
            if (((psVar6[-10] == (ushort)((ushort)bVar11 * 0x80 + -0x100)) && (psVar6[0x12] == 0x33)
                ) && ((*psVar6 == 0x28 && ((char)psVar6[-9] == '\x05')))) goto LAB_145160217;
            iVar4 = iVar4 + 1;
            psVar6 = psVar6 + 0x24;
          } while (iVar4 < (int)(uint)local_188[0]);
        }
        GetLastError();
      }
LAB_1451606c9:
      if (DAT_14c7fb8a0 == (code *)0x0) {
        free(local_190);
      }
      else {
        (*DAT_14c7fb8a0)();
      }
    }
    if (puVar19 != (undefined1 *)0x0) {
      if (DAT_14c7fb8a0 == (code *)0x0) {
        free(puVar19);
      }
      else {
        (*DAT_14c7fb8a0)();
      }
    }
    if (local_138 != (void *)0x0) {
      if (DAT_14c7fb8a0 == (code *)0x0) {
        free(local_138);
      }
      else {
        (*DAT_14c7fb8a0)();
      }
    }
    HidD_FreePreparsedData(local_158);
    if ((*(char *)((longlong)param_1 + 0x2f) != '\0') &&
       (cVar3 = FUN_14515bd90(*(undefined2 *)(param_1 + 4),*(undefined2 *)((longlong)param_1 + 0x22)
                             ), cVar3 != '\0')) {
      uVar9 = 0;
      do {
        if (*(char *)(uVar9 + 0x29 + (longlong)param_1) != '\0') goto LAB_145160ba3;
        bVar11 = (char)uVar9 + 1;
        uVar9 = (ulonglong)bVar11;
      } while (bVar11 < 6);
      if (bVar11 != 6) {
LAB_145160ba3:
        puVar14 = &DAT_14c7eb270;
        do {
          if (*(longlong *)(puVar14 + 8) != 0) {
            uVar9 = 0;
            do {
              if (puVar14[uVar9 + 1] != *(char *)((longlong)param_1 + uVar9 + 0x29))
              goto LAB_145160bdb;
              bVar11 = (char)uVar9 + 1;
              uVar9 = (ulonglong)bVar11;
            } while (bVar11 < 6);
            if (bVar11 == 6) {
              FUN_1451652e0(param_1);
              lVar10 = local_118;
              goto joined_r0x000145160d54;
            }
          }
LAB_145160bdb:
          puVar14 = puVar14 + 0x2018;
        } while ((longlong)puVar14 < 0x14c7fb330);
      }
    }
    bVar11 = 0;
    cVar3 = FUN_14515bd60(*(undefined2 *)(param_1 + 4),*(undefined2 *)((longlong)param_1 + 0x22));
    if ((cVar3 != '\0') && (lVar10 = FUN_14515b230(*(undefined4 *)(param_1 + 1)), lVar10 != 0)) {
      bVar11 = ~*(byte *)(lVar10 + 0x2c44) & DAT_14c7c998c;
    }
    cVar3 = FUN_14515bd60(*(undefined2 *)(param_1 + 4),*(undefined2 *)((longlong)param_1 + 0x22));
    if (cVar3 == '\0') {
      cVar3 = FUN_14515bd30(*(undefined2 *)(param_1 + 4),*(undefined2 *)((longlong)param_1 + 0x22));
      if ((((cVar3 != '\0') ||
           (cVar3 = FUN_14515bc60(*(undefined2 *)(param_1 + 4),
                                  *(undefined2 *)((longlong)param_1 + 0x22),
                                  *(undefined4 *)((longlong)param_1 + 0x24)), cVar3 != '\0')) &&
          (lVar10 = FUN_14515b030(*(undefined4 *)(param_1 + 1)), lVar10 != 0)) &&
         ((*(int *)(lVar10 + 0x14) == 1 && (DAT_14c7c998c != 0)))) {
        *(char *)(lVar10 + 1) = *(char *)(lVar10 + 1) + '\x01';
      }
    }
    else {
      lVar10 = FUN_14515b230(*(undefined4 *)(param_1 + 1));
      if (((lVar10 != 0) && (*(char *)(lVar10 + 0x2c47) != '\0')) &&
         ((bVar11 != 0 && ((DAT_14c7301a6 != '\0' && (iVar4 = FUN_1451684d0(), iVar4 == 0)))))) {
        lVar10 = FUN_14515b190(*(undefined4 *)(lVar10 + 0x14));
        if (lVar10 != 0) {
          *(char *)(lVar10 + 1) = *(char *)(lVar10 + 1) + '\x01';
        }
        FUN_145168500();
      }
    }
    cVar3 = FUN_14515bd60(*(undefined2 *)(param_1 + 4));
    if (cVar3 != '\0') {
      DAT_14c7c998c = bVar11;
    }
    if ((DAT_14c7c9987 == '\x01') && (DAT_14c7fb340 != 0)) {
      FUN_145167760();
    }
    FUN_14515caf0(*(undefined4 *)(param_1 + 1));
    iVar4 = FUN_145168520();
    lVar10 = local_118;
    if (iVar4 == 0) {
      if (*(char *)(param_1 + 5) == '\0') {
        CloseHandle((HANDLE)param_1[2]);
      }
      if ((void *)*param_1 != (void *)0x0) {
        if (DAT_14c7fb8a0 == (code *)0x0) {
          free((void *)*param_1);
        }
        else {
          (*DAT_14c7fb8a0)();
        }
      }
      memset(param_1,0,0x2200);
      FUN_145168550();
      lVar10 = local_118;
    }
  }
  else {
    HidD_FreePreparsedData(local_158);
    FUN_145164d70(param_1);
    if (DAT_14c7fb8a0 == (code *)0x0) {
      free(_Memory);
    }
    else {
      (*DAT_14c7fb8a0)();
    }
  }
joined_r0x000145160d54:
  if (DAT_14c7c9987 != '\0') {
    FUN_145164320(lVar10);
  }
LAB_145160d5f:
  _endthread();
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_1e8);
LAB_14515feae:
  (&DAT_14c7e3190)[iVar4] = 0;
  goto LAB_145160d5f;
}



// FUNCTION 145160da0 FUN_145160da0 body=3770 status=ok
// SIG undefined FUN_145160da0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145160da0(undefined8 *param_1)

{
  undefined8 uVar1;
  ushort uVar2;
  char cVar3;
  char cVar4;
  undefined2 uVar5;
  int iVar6;
  HANDLE hThread;
  longlong *_Dst;
  short *psVar7;
  ulonglong uVar8;
  byte bVar9;
  uint uVar10;
  short *psVar11;
  undefined7 uVar12;
  longlong *plVar13;
  longlong *_Dst_00;
  longlong *plVar14;
  undefined1 *puVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong *_Memory;
  longlong lVar18;
  char cVar19;
  bool bVar20;
  undefined1 auStack_23b8 [32];
  longlong *local_2398;
  longlong local_2390;
  undefined4 local_2388;
  undefined8 *local_2380;
  undefined1 local_2378;
  char local_2368;
  char local_2367;
  char local_2366;
  ushort local_2364 [2];
  uint local_2360;
  uint local_235c;
  longlong *local_2358;
  ulonglong local_2350;
  void *local_2348;
  undefined8 local_2340;
  longlong *local_2338;
  ulonglong local_2330;
  undefined8 *local_2328;
  longlong local_2320;
  longlong local_2318 [2];
  undefined1 local_2308;
  undefined8 local_2307;
  undefined8 uStack_22ff;
  undefined8 local_22f7;
  undefined8 uStack_22ef;
  undefined8 local_22e7;
  undefined8 uStack_22df;
  undefined8 local_22d7;
  undefined8 uStack_22cf;
  undefined8 local_22c7;
  undefined8 uStack_22bf;
  undefined8 local_22b7;
  undefined4 local_22af;
  undefined2 local_22ab;
  undefined1 local_22a9;
  undefined8 local_22a8;
  undefined8 uStack_22a0;
  undefined8 local_2298;
  undefined8 uStack_2290;
  undefined4 local_2288;
  undefined8 local_2278;
  ulonglong uStack_2270;
  undefined8 local_2268;
  undefined8 uStack_2260;
  undefined8 local_2258;
  undefined8 uStack_2250;
  undefined8 local_2248;
  undefined8 uStack_2240;
  undefined1 local_2238 [16];
  undefined8 local_2228;
  undefined2 local_2218;
  undefined2 local_2216;
  undefined4 local_2214;
  undefined1 local_2210;
  char local_220f [4];
  undefined1 local_220b;
  undefined1 local_220a;
  undefined1 local_2209;
  undefined8 local_2208;
  undefined8 uStack_2200;
  undefined8 local_21f8;
  undefined8 uStack_21f0;
  undefined8 local_21e8;
  undefined8 uStack_21e0;
  undefined8 local_21d8;
  undefined8 uStack_21d0;
  undefined8 local_21c8;
  undefined8 uStack_21c0;
  undefined8 local_21b8;
  undefined8 uStack_21b0;
  undefined8 local_21a8;
  undefined8 uStack_21a0;
  undefined8 local_2198;
  undefined8 uStack_2190;
  undefined1 local_2188;
  undefined8 local_2187;
  undefined8 uStack_217f;
  undefined8 local_2177;
  undefined8 uStack_216f;
  undefined8 local_2167;
  undefined8 uStack_215f;
  undefined8 local_2157;
  undefined8 uStack_214f;
  undefined8 local_2147;
  undefined8 uStack_213f;
  undefined8 local_2137;
  undefined8 uStack_212f;
  undefined8 local_2127;
  undefined8 uStack_211f;
  undefined8 local_2117;
  undefined8 uStack_210f;
  undefined1 local_2107;
  undefined8 local_2106;
  undefined8 uStack_20fe;
  undefined8 local_20f6;
  undefined8 uStack_20ee;
  undefined8 local_20e6;
  undefined8 uStack_20de;
  undefined8 local_20d6;
  undefined8 uStack_20ce;
  undefined8 local_20c6;
  undefined8 uStack_20be;
  undefined8 local_20b6;
  undefined8 uStack_20ae;
  undefined4 local_20a6;
  undefined4 uStack_20a2;
  undefined4 uStack_209e;
  undefined4 uStack_209a;
  undefined8 local_2096;
  undefined8 uStack_208e;
  undefined1 local_2086;
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x145160dc4;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_23b8;
  local_2328 = param_1;
  hThread = GetCurrentThread();
  SetThreadPriority(hThread,0xf);
  lVar16 = param_1[3];
  _Dst_00 = (longlong *)0x0;
  local_2366 = '\0';
  cVar4 = '\0';
  local_2350 = 0;
  cVar19 = DAT_14c7301a4 != '\0';
  plVar13 = (longlong *)0x0;
  local_2367 = '\0';
  local_2368 = cVar19;
  local_2320 = lVar16;
  cVar3 = HidD_GetPreparsedData(param_1[2]);
  if (cVar3 == '\0') {
    iVar6 = FUN_145168520();
    if (iVar6 == 0) {
      if (*(char *)(param_1 + 5) == '\0') {
        CloseHandle((HANDLE)param_1[2]);
      }
      if ((void *)*param_1 != (void *)0x0) {
        if (DAT_14c7fb8a0 == (code *)0x0) {
          free((void *)*param_1);
        }
        else {
          (*DAT_14c7fb8a0)();
        }
      }
      memset(param_1,0,0x2200);
      FUN_145168550();
    }
    if (DAT_14c7c9987 != '\0') {
      plVar13 = &DAT_14c7e3190;
      do {
        iVar6 = (int)_Dst_00;
        if (*plVar13 == lVar16) goto LAB_145160f82;
        _Dst_00 = (longlong *)(ulonglong)(iVar6 + 1U);
        plVar13 = plVar13 + 1;
      } while ((int)(iVar6 + 1U) < 0xc);
      _endthread();
      goto LAB_145161c54;
    }
    goto LAB_145160f85;
  }
  local_2278 = 0;
  uStack_2270 = 0;
  local_2268 = 0;
  uStack_2260 = 0;
  local_2258 = 0;
  uStack_2250 = 0;
  local_2248 = 0;
  uStack_2240 = 0;
  iVar6 = HidP_GetCaps(local_2340);
  if (iVar6 != 0x110000) {
    HidD_FreePreparsedData(local_2340);
    iVar6 = FUN_145168520();
    if (iVar6 == 0) {
      if (*(char *)(param_1 + 5) == '\0') {
        CloseHandle((HANDLE)param_1[2]);
      }
      if ((void *)*param_1 != (void *)0x0) {
        if (DAT_14c7fb8a0 == (code *)0x0) {
          free((void *)*param_1);
        }
        else {
          (*DAT_14c7fb8a0)();
        }
      }
      memset(param_1,0,0x2200);
      FUN_145168550();
    }
    if (DAT_14c7c9987 != '\0') {
      plVar13 = &DAT_14c7e3190;
      do {
        iVar6 = (int)_Dst_00;
        if (*plVar13 == lVar16) goto LAB_145160f82;
        _Dst_00 = (longlong *)(ulonglong)(iVar6 + 1U);
        plVar13 = plVar13 + 1;
      } while ((int)(iVar6 + 1U) < 0xc);
      _endthread();
      goto LAB_145161c54;
    }
    goto LAB_145160f85;
  }
  local_2364[0] = uStack_2240._4_2_;
  if (DAT_14c7fb8a8 == (code *)0x0) {
    local_2348 = malloc((ulonglong)uStack_2240._4_2_ * 0x48);
  }
  else {
    local_2348 = (void *)(*DAT_14c7fb8a8)();
  }
  plVar14 = _Dst_00;
  _Dst = _Dst_00;
  _Memory = _Dst_00;
  if (local_2348 == (void *)0x0) goto LAB_145161b6f;
  iVar6 = HidP_GetValueCaps(2,local_2348,local_2364,local_2340);
  if (iVar6 == 0x110000) {
    uVar2 = (ushort)uStack_2270;
    uVar17 = uStack_2270 & 0xffff;
    local_2360 = (uint)local_2278._4_2_;
    cVar19 = local_2368;
    local_235c = local_2360;
    if (0x3f < local_2278._4_2_) {
      if (local_2278._4_2_ == 0x40) {
        if (DAT_14c7fb8a8 == (code *)0x0) {
          local_2358 = malloc(0x800);
          local_2360 = local_235c << 5;
        }
        else {
          local_2358 = (longlong *)(*DAT_14c7fb8a8)();
          local_2360 = local_235c << 5;
        }
      }
      else if (DAT_14c7fb8a8 == (code *)0x0) {
        local_2358 = malloc((ulonglong)local_2278._4_2_);
      }
      else {
        local_2358 = (longlong *)(*DAT_14c7fb8a8)();
      }
      _Memory = local_2358;
      memset(local_2358,0,(ulonglong)local_2360);
      plVar14 = plVar13;
      cVar19 = local_2368;
      if (0x30 < uVar2) {
        local_2330 = uVar17;
        if (DAT_14c7fb8a8 == (code *)0x0) {
          _Dst = malloc(uVar17);
        }
        else {
          _Dst = (longlong *)(*DAT_14c7fb8a8)();
        }
        cVar19 = local_2368;
        local_2338 = _Dst;
        if (((_Memory != (longlong *)0x0) && (_Dst != (longlong *)0x0)) &&
           (iVar6 = 0, local_2364[0] != 0)) {
          psVar11 = (short *)((longlong)local_2348 + 0x14);
          psVar7 = psVar11;
          do {
            uVar10 = (uint)local_2364[0];
            if (((psVar7[-10] == -0x80) && (psVar7[0x12] == 0x43)) &&
               ((*psVar7 == 0x30 && ((char)psVar7[-9] == -0x5d)))) {
              iVar6 = 0;
              psVar7 = psVar11;
              goto LAB_145161167;
            }
            iVar6 = iVar6 + 1;
            psVar7 = psVar7 + 0x24;
          } while (iVar6 < (int)uVar10);
        }
      }
    }
    goto LAB_145161b6f;
  }
  HidD_FreePreparsedData(local_2340);
  FUN_145164d70(param_1);
  if (DAT_14c7fb8a0 == (code *)0x0) {
    free(local_2348);
    bVar20 = DAT_14c7c9987 == '\0';
  }
  else {
    (*DAT_14c7fb8a0)();
    bVar20 = DAT_14c7c9987 == '\0';
  }
  goto LAB_145161c3b;
LAB_145160f82:
  (&DAT_14c7e3190)[iVar6] = 0;
LAB_145160f85:
  _endthread();
  goto LAB_145161c54;
  while( true ) {
    iVar6 = iVar6 + 1;
    psVar7 = psVar7 + 0x24;
    if ((int)uVar10 <= iVar6) break;
LAB_145161167:
    if (((psVar7[-10] == -0x100) && (psVar7[0x12] == 0x24)) &&
       ((*psVar7 == 0x24 && ((char)psVar7[-9] == '\x02')))) {
      iVar6 = 0;
      psVar7 = psVar11;
      goto LAB_145161198;
    }
  }
  goto LAB_145161b6f;
  while( true ) {
    iVar6 = iVar6 + 1;
    psVar7 = psVar7 + 0x24;
    if ((int)uVar10 <= iVar6) break;
LAB_145161198:
    if ((((psVar7[-10] == -0x80) && (psVar7[0x12] == 0x57)) && (*psVar7 == 0x30)) &&
       ((char)psVar7[-9] == -0x1f)) {
      iVar6 = 0;
      psVar7 = psVar11;
      goto LAB_1451611d0;
    }
  }
  goto LAB_145161b6f;
  while( true ) {
    iVar6 = iVar6 + 1;
    psVar7 = psVar7 + 0x24;
    if ((int)uVar10 <= iVar6) break;
LAB_1451611d0:
    if (((psVar7[-10] == -0xfe) && (psVar7[0x12] == 0x21)) &&
       ((*psVar7 == 0xf && ((char)psVar7[-9] == '\x12')))) {
      iVar6 = 0;
      psVar7 = psVar11;
      goto LAB_145161201;
    }
  }
  goto LAB_145161b6f;
  while( true ) {
    iVar6 = iVar6 + 1;
    psVar7 = psVar7 + 0x24;
    if ((int)uVar10 <= iVar6) break;
LAB_145161201:
    if (((psVar7[-10] == -0x80) && (psVar7[0x12] == 0x57)) &&
       ((*psVar7 == 4 && ((char)psVar7[-9] == -0x1d)))) {
      iVar6 = 0;
      goto LAB_145161230;
    }
  }
  goto LAB_145161b6f;
LAB_1451612b2:
  plVar14 = _Dst_00;
  cVar4 = local_2367;
  cVar19 = local_2368;
  if (DAT_14c7c9987 == '\0') goto LAB_145161b6f;
  local_2398 = (longlong *)CONCAT71(local_2398._1_7_,1);
  iVar6 = FUN_145166a20(param_1[2],_Memory,local_2360,&local_235c);
  cVar4 = local_2367;
  cVar19 = local_2368;
  if (iVar6 == -0x7ffeffd5) goto LAB_145161b6f;
  if (0x3f < local_235c) {
    uVar10 = 1;
    if ((local_235c & 0x3f) == 0) {
      uVar10 = local_235c >> 6;
    }
    bVar9 = *(byte *)((longlong)(int)(uVar10 << 6) + -0x21 + (longlong)_Memory) & 4;
    if (local_2366 != '\0') {
      if (bVar9 != 0) {
        local_2366 = '\0';
      }
LAB_1451619b4:
      timeBeginPeriod(DAT_14c7301a0);
      Sleep(2);
      timeEndPeriod(DAT_14c7301a0);
      goto LAB_145161b1b;
    }
    if (local_2367 == '\0') {
      uVar8 = local_2350;
      if (bVar9 == 0) {
        memset(local_2238,0,0x2200);
        memset(_Dst,0,uVar17);
        uVar1 = param_1[2];
        *(undefined1 *)_Dst = 0xe3;
        cVar4 = HidD_GetFeature(uVar1,_Dst,5);
        if (cVar4 == '\0') {
          GetLastError();
          GetLastError();
          cVar4 = local_2367;
          cVar19 = local_2368;
          goto LAB_145161b6f;
        }
        uVar5 = FUN_14515bb80((longlong)_Dst + 1);
        local_2218 = uVar5;
        local_2216 = FUN_14515bb80((longlong)_Dst + 3);
        local_2214 = *(undefined4 *)((longlong)param_1 + 0x24);
        local_2210 = 1;
        local_2209 = 0;
        cVar4 = FUN_14515bc60(uVar5);
        if (cVar4 == '\0') {
          cVar4 = '\0';
          cVar19 = local_2368;
          goto LAB_145161b6f;
        }
        memset(_Dst,0,local_2330);
        uVar1 = param_1[2];
        *(undefined1 *)_Dst = 0x12;
        cVar4 = HidD_GetFeature(uVar1,_Dst,0x10);
        if (cVar4 != '\0') {
          uVar17 = 0;
          local_220f[0] = *(char *)((longlong)_Dst + 6);
          *(undefined1 *)((longlong)param_1 + 0x29) = *(undefined1 *)((longlong)_Dst + 0xf);
          local_220f[1] = *(undefined1 *)((longlong)_Dst + 5);
          *(undefined1 *)((longlong)param_1 + 0x2a) = *(undefined1 *)((longlong)_Dst + 0xe);
          local_220f[2] = *(undefined1 *)((longlong)_Dst + 4);
          *(undefined1 *)((longlong)param_1 + 0x2b) = *(undefined1 *)((longlong)_Dst + 0xd);
          local_220f[3] = *(undefined1 *)((longlong)_Dst + 3);
          *(undefined1 *)((longlong)param_1 + 0x2c) = *(undefined1 *)((longlong)_Dst + 0xc);
          local_220b = *(undefined1 *)((longlong)_Dst + 2);
          *(undefined1 *)((longlong)param_1 + 0x2d) = *(undefined1 *)((longlong)_Dst + 0xb);
          local_220a = *(undefined1 *)((longlong)_Dst + 1);
          *(undefined1 *)((longlong)param_1 + 0x2e) = *(undefined1 *)((longlong)_Dst + 10);
          local_2188 = *(undefined1 *)(param_1 + 0x16);
          local_2208 = param_1[6];
          uStack_2200 = param_1[7];
          local_2107 = *(undefined1 *)((longlong)param_1 + 0x131);
          local_21f8 = param_1[8];
          uStack_21f0 = param_1[9];
          local_2086 = *(undefined1 *)((longlong)param_1 + 0x1b2);
          local_2228 = param_1[2];
          local_21e8 = param_1[10];
          uStack_21e0 = param_1[0xb];
          local_21d8 = param_1[0xc];
          uStack_21d0 = param_1[0xd];
          local_21c8 = param_1[0xe];
          uStack_21c0 = param_1[0xf];
          local_21b8 = param_1[0x10];
          uStack_21b0 = param_1[0x11];
          local_21a8 = param_1[0x12];
          uStack_21a0 = param_1[0x13];
          local_2198 = param_1[0x14];
          uStack_2190 = param_1[0x15];
          local_2187 = *(undefined8 *)((longlong)param_1 + 0xb1);
          uStack_217f = *(undefined8 *)((longlong)param_1 + 0xb9);
          local_2177 = *(undefined8 *)((longlong)param_1 + 0xc1);
          uStack_216f = *(undefined8 *)((longlong)param_1 + 0xc9);
          local_2167 = *(undefined8 *)((longlong)param_1 + 0xd1);
          uStack_215f = *(undefined8 *)((longlong)param_1 + 0xd9);
          local_2157 = *(undefined8 *)((longlong)param_1 + 0xe1);
          uStack_214f = *(undefined8 *)((longlong)param_1 + 0xe9);
          local_2147 = *(undefined8 *)((longlong)param_1 + 0xf1);
          uStack_213f = *(undefined8 *)((longlong)param_1 + 0xf9);
          local_2137 = *(undefined8 *)((longlong)param_1 + 0x101);
          uStack_212f = *(undefined8 *)((longlong)param_1 + 0x109);
          local_2127 = *(undefined8 *)((longlong)param_1 + 0x111);
          uStack_211f = *(undefined8 *)((longlong)param_1 + 0x119);
          local_2117 = *(undefined8 *)((longlong)param_1 + 0x121);
          uStack_210f = *(undefined8 *)((longlong)param_1 + 0x129);
          local_2106 = *(undefined8 *)((longlong)param_1 + 0x132);
          uStack_20fe = *(undefined8 *)((longlong)param_1 + 0x13a);
          local_20f6 = *(undefined8 *)((longlong)param_1 + 0x142);
          uStack_20ee = *(undefined8 *)((longlong)param_1 + 0x14a);
          local_20e6 = *(undefined8 *)((longlong)param_1 + 0x152);
          uStack_20de = *(undefined8 *)((longlong)param_1 + 0x15a);
          local_20d6 = *(undefined8 *)((longlong)param_1 + 0x162);
          uStack_20ce = *(undefined8 *)((longlong)param_1 + 0x16a);
          local_20c6 = *(undefined8 *)((longlong)param_1 + 0x172);
          uStack_20be = *(undefined8 *)((longlong)param_1 + 0x17a);
          local_20b6 = *(undefined8 *)((longlong)param_1 + 0x182);
          uStack_20ae = *(undefined8 *)((longlong)param_1 + 0x18a);
          local_20a6 = *(undefined4 *)((longlong)param_1 + 0x192);
          uStack_20a2 = *(undefined4 *)((longlong)param_1 + 0x196);
          uStack_209e = *(undefined4 *)((longlong)param_1 + 0x19a);
          uStack_209a = *(undefined4 *)((longlong)param_1 + 0x19e);
          local_2096 = *(undefined8 *)((longlong)param_1 + 0x1a2);
          uStack_208e = *(undefined8 *)((longlong)param_1 + 0x1aa);
          do {
            if (local_220f[uVar17] != '\0') goto LAB_14516185b;
            bVar9 = (char)uVar17 + 1;
            uVar17 = (ulonglong)bVar9;
          } while (bVar9 < 6);
          if (bVar9 != 6) {
LAB_14516185b:
            _Dst_00 = &DAT_14c7c9990;
            do {
              if (*_Dst_00 != 0) {
                uVar17 = (ulonglong)*(ushort *)((longlong)_Dst_00 + 0x22);
                cVar4 = FUN_14515bc60((short)_Dst_00[4],uVar17,
                                      *(undefined4 *)((longlong)_Dst_00 + 0x24));
                if (cVar4 == '\0') {
                  uVar17 = (ulonglong)*(ushort *)((longlong)_Dst_00 + 0x22);
                  cVar4 = FUN_14515bd30((short)_Dst_00[4]);
                  if (cVar4 == '\0') {
                    uVar17 = (ulonglong)*(ushort *)((longlong)_Dst_00 + 0x22);
                    cVar4 = FUN_14515bd60((short)_Dst_00[4]);
                    if (cVar4 == '\0') goto LAB_1451618d5;
                  }
                }
                uVar17 = uVar17 & 0xffffffffffffff00;
                do {
                  if (*(char *)((uVar17 & 0xff) + 0x29 + (longlong)_Dst_00) !=
                      local_220f[uVar17 & 0xff]) goto LAB_1451618d5;
                  uVar12 = (undefined7)(uVar17 >> 8);
                  bVar9 = (char)uVar17 + 1;
                  uVar17 = CONCAT71(uVar12,bVar9);
                } while (bVar9 < 6);
                if (bVar9 == 6) {
                  if (_Dst_00 != (longlong *)0x0) {
                    iVar6 = FUN_145164080(param_1,CONCAT71(uVar12,1));
                    if (iVar6 == 0) goto LAB_145161aa4;
                    goto LAB_145161b36;
                  }
                  break;
                }
              }
LAB_1451618d5:
              _Dst_00 = _Dst_00 + 0x440;
            } while (_Dst_00 != &DAT_14c7e3190);
          }
          _Dst_00 = (longlong *)FUN_1451649c0(local_2238,*param_1,1);
          if (_Dst_00 == (longlong *)0x0) {
            iVar6 = FUN_145164080(param_1,1);
            if (iVar6 == 0) {
              local_2367 = '\0';
LAB_145161aa4:
              local_2366 = '\x01';
LAB_145161aa9:
              uVar8 = 0;
              goto LAB_145161ab7;
            }
            goto LAB_145161b36;
          }
          local_2367 = '\x01';
          memset(_Dst_00 + 0x3f,0,(ulonglong)*(uint *)((longlong)param_1 + 500));
          uVar10 = *(uint *)((longlong)param_1 + 500);
          *(uint *)((longlong)_Dst_00 + 500) = uVar10;
          wcsncpy_s((wchar_t *)(_Dst_00 + 0x3f),(ulonglong)uVar10,(wchar_t *)(param_1 + 0x3f),
                    0xffffffffffffffff);
          uVar17 = local_2330;
          memset(_Dst,0,local_2330);
          uVar1 = param_1[2];
          *(undefined1 *)_Dst = 0xa3;
          cVar4 = HidD_GetFeature(uVar1,_Dst,0x31);
          if (cVar4 != '\0') {
            iVar6 = FUN_145168520();
            if (iVar6 == 0) {
              FUN_1451654d0(_Dst_00);
              FUN_145168550();
            }
            if (*(ushort *)((longlong)_Dst_00 + 0x1d6) < 0x3100) {
              FUN_145164080(_Dst_00,(char)_Dst_00[5]);
              local_2366 = '\x01';
              goto LAB_1451619b4;
            }
            local_2288 = 0;
            local_22a8 = 0;
            uStack_22a0 = 0;
            local_2298 = 0;
            uStack_2290 = 0;
            memset(_Dst,0,uVar17);
            uVar1 = param_1[2];
            *(undefined1 *)_Dst = 2;
            cVar4 = HidD_GetFeature(uVar1,_Dst,0x25);
            if (cVar4 == '\0') goto LAB_145161b30;
            FUN_145165690(&local_22a8,_Dst,1);
            local_2380 = &local_22a8;
            local_2398 = (longlong *)((longlong)_Dst_00 + 0x132);
            local_2378 = 1;
            local_2390 = (longlong)_Dst_00 + 0x1b4;
            local_2388 = 0;
            iVar6 = FUN_14515c330((int)_Dst_00[1],(short)_Dst_00[4],
                                  *(undefined2 *)((longlong)_Dst_00 + 0x22),
                                  *(undefined4 *)((longlong)_Dst_00 + 0x24));
            plVar14 = _Dst_00;
            cVar4 = local_2367;
            cVar19 = local_2368;
            if (-1 < iVar6) goto LAB_145161aa9;
            goto LAB_145161b6f;
          }
        }
LAB_145161b30:
        GetLastError();
LAB_145161b36:
        GetLastError();
        plVar14 = _Dst_00;
        cVar4 = local_2367;
        cVar19 = local_2368;
        goto LAB_145161b6f;
      }
    }
    else if (bVar9 == 0) {
      uVar8 = FUN_14515bde0();
      if (uVar10 != 0) {
        lVar18 = 1;
        uVar17 = (ulonglong)uVar10;
        lVar16 = (longlong)(int)(uVar10 * 8000 + -8000);
        plVar13 = _Memory;
        if (uVar8 < local_2350) {
          do {
            local_2318[1] = 0;
            local_22b7 = 0;
            local_22af = 0;
            local_22ab = 0;
            local_22a9 = 0;
            local_2307 = 0;
            uStack_22ff = 0;
            local_22f7 = 0;
            uStack_22ef = 0;
            local_22e7 = 0;
            uStack_22df = 0;
            local_22d7 = 0;
            uStack_22cf = 0;
            local_22c7 = 0;
            uStack_22bf = 0;
            if (local_2350 == 0) {
              local_2318[0] = uVar8 - lVar16;
            }
            else {
              local_2318[0] = ((uVar8 - local_2350) * lVar18) / (ulonglong)uVar10 + local_2350;
            }
            local_2398 = local_2318;
            local_2308 = 0;
            FUN_145165830(_Dst_00,plVar13,0x40,0);
            FUN_14515cb90((int)_Dst_00[1]);
            lVar16 = lVar16 + -8000;
            lVar18 = lVar18 + 1;
            plVar13 = plVar13 + 8;
            uVar17 = uVar17 - 1;
            _Dst = local_2338;
            _Memory = local_2358;
            param_1 = local_2328;
          } while (uVar17 != 0);
        }
        else {
          do {
            local_2318[1] = 0;
            local_22b7 = 0;
            local_22af = 0;
            local_22ab = 0;
            local_22a9 = 0;
            local_2307 = 0;
            uStack_22ff = 0;
            local_22f7 = 0;
            uStack_22ef = 0;
            local_22e7 = 0;
            uStack_22df = 0;
            local_22d7 = 0;
            uStack_22cf = 0;
            local_22c7 = 0;
            uStack_22bf = 0;
            if (local_2350 == 0) {
              local_2318[0] = uVar8 - lVar16;
            }
            else {
              local_2318[0] = ((uVar8 - local_2350) * lVar18) / (ulonglong)uVar10 + local_2350;
            }
            local_2398 = local_2318;
            local_2308 = 0;
            FUN_145165830(_Dst_00,plVar13,0x40,0);
            FUN_14515cb90((int)_Dst_00[1]);
            lVar16 = lVar16 + -8000;
            lVar18 = lVar18 + 1;
            uVar17 = uVar17 - 1;
            _Dst = local_2338;
            _Memory = local_2358;
            plVar13 = plVar13 + 8;
            param_1 = local_2328;
          } while (uVar17 != 0);
        }
      }
    }
    else if (*(char *)((longlong)_Dst_00 + 0x2f) == '\0') {
      iVar6 = FUN_145168520();
      if (iVar6 == 0) {
        if ((char)_Dst_00[5] != '\0') {
          FUN_14515caf0((int)_Dst_00[1]);
          if ((char)_Dst_00[5] == '\0') {
            CloseHandle((HANDLE)_Dst_00[2]);
          }
          if ((void *)*_Dst_00 != (void *)0x0) {
            if (DAT_14c7fb8a0 == (code *)0x0) {
              free((void *)*_Dst_00);
            }
            else {
              (*DAT_14c7fb8a0)();
            }
          }
          memset(_Dst_00,0,0x2200);
        }
        FUN_145168550();
      }
      local_2367 = '\0';
      _Dst_00 = (longlong *)0x0;
      uVar8 = local_2350;
    }
    else {
      FUN_1451652e0(_Dst_00);
      _Dst_00 = (longlong *)0x0;
      local_2367 = '\0';
      uVar8 = local_2350;
    }
LAB_145161ab7:
    local_2350 = uVar8;
    if ((DAT_14c7301a4 != '\0') && (local_2368 != '\0')) {
      puVar15 = &DAT_14c7eb250;
      do {
        if (*(int *)(puVar15 + 4) == *(int *)(param_1 + 1)) {
          *(undefined4 *)(puVar15 + 4) = 0;
          *puVar15 = 0;
          break;
        }
        puVar15 = puVar15 + 8;
      } while ((longlong)puVar15 < 0x14c7eb270);
      local_2368 = '\0';
    }
    timeBeginPeriod(DAT_14c7301a0);
    Sleep(2);
    timeEndPeriod(DAT_14c7301a0);
    uVar17 = local_2330;
  }
LAB_145161b1b:
  iVar6 = FUN_144d70c90();
  plVar14 = _Dst_00;
  cVar4 = local_2367;
  cVar19 = local_2368;
  if (iVar6 == 0) goto LAB_145161b6f;
  goto LAB_1451612b2;
  while( true ) {
    iVar6 = iVar6 + 1;
    psVar11 = psVar11 + 0x24;
    if ((int)uVar10 <= iVar6) break;
LAB_145161230:
    if (((psVar11[-10] == -0x80) && (psVar11[0x12] == 0x57)) && (*psVar11 == 0x10)) {
      memset(_Dst,0,uVar17);
      uVar1 = param_1[2];
      *(undefined1 *)_Dst = 0xe1;
      cVar19 = HidD_GetFeature(uVar1,_Dst,0x31);
      if (cVar19 == '\0') {
        GetLastError();
        GetLastError();
        cVar19 = local_2368;
      }
      else {
        iVar6 = FUN_145168520();
        if (iVar6 == 0) {
          FUN_1451654d0(param_1,_Dst);
          FUN_145168550();
        }
        iVar6 = FUN_144d70c90();
        cVar19 = local_2368;
        if (iVar6 != 0) goto LAB_1451612b2;
      }
      break;
    }
  }
LAB_145161b6f:
  puVar15 = &DAT_14c7eb250;
  if ((DAT_14c7301a4 != '\0') && (cVar19 != '\0')) {
    do {
      if (*(int *)(puVar15 + 4) == *(int *)(param_1 + 1)) {
        *(undefined4 *)(puVar15 + 4) = 0;
        *puVar15 = 0;
        break;
      }
      puVar15 = puVar15 + 8;
    } while ((longlong)puVar15 < 0x14c7eb270);
  }
  if (_Memory != (longlong *)0x0) {
    if (DAT_14c7fb8a0 == (code *)0x0) {
      free(_Memory);
    }
    else {
      (*DAT_14c7fb8a0)();
    }
  }
  if (_Dst != (longlong *)0x0) {
    if (DAT_14c7fb8a0 == (code *)0x0) {
      free(_Dst);
    }
    else {
      (*DAT_14c7fb8a0)();
    }
  }
  if (local_2348 != (void *)0x0) {
    if (DAT_14c7fb8a0 == (code *)0x0) {
      free(local_2348);
    }
    else {
      (*DAT_14c7fb8a0)();
    }
  }
  HidD_FreePreparsedData(local_2340);
  if (cVar4 != '\0') {
    if (*(char *)((longlong)plVar14 + 0x2f) == '\0') {
      if ((char)plVar14[5] != '\0') {
        FUN_14515caf0((int)plVar14[1]);
      }
      FUN_145164d70(plVar14);
    }
    else {
      FUN_1451652e0(plVar14);
    }
  }
  FUN_145164d70(param_1);
  bVar20 = DAT_14c7c9987 == '\0';
LAB_145161c3b:
  if (!bVar20) {
    FUN_145164320(local_2320);
  }
  _endthread();
LAB_145161c54:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_23b8);
}



// FUNCTION 145161c80 FUN_145161c80 body=8175 status=ok
// SIG undefined FUN_145161c80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145161c80(void)

{
  short sVar1;
  short sVar2;
  ulonglong uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  BOOL BVar9;
  undefined4 uVar10;
  longlong *plVar11;
  char *pcVar12;
  HDEVINFO DeviceInfoSet;
  void *pvVar13;
  PSP_DEVICE_INTERFACE_DETAIL_DATA_W DeviceInterfaceDetailData;
  short *psVar14;
  HANDLE pvVar15;
  longlong lVar16;
  uintptr_t uVar17;
  longlong *plVar18;
  longlong *plVar19;
  longlong *plVar20;
  undefined8 *******pppppppuVar21;
  uintptr_t *puVar22;
  longlong *plVar23;
  longlong *plVar24;
  WCHAR *pWVar25;
  ulonglong uVar26;
  char *pcVar27;
  longlong lVar28;
  ulonglong uVar29;
  longlong *plVar30;
  undefined8 *puVar31;
  longlong *plVar32;
  longlong *plVar33;
  undefined8 *puVar34;
  undefined8 *******pppppppuVar35;
  undefined1 auStackY_2568 [32];
  DWORD local_2524;
  DWORD local_2510 [2];
  longlong *local_2508;
  longlong local_2500;
  longlong *local_24f8;
  longlong local_24f0;
  longlong *local_24e8;
  longlong local_24e0;
  longlong *local_24d8;
  undefined8 uStack_24d0;
  longlong **local_24b8;
  undefined8 *local_24b0;
  undefined4 local_249c;
  longlong local_2498;
  longlong **local_2490;
  undefined8 local_2488;
  longlong **local_2480;
  undefined8 local_2478;
  undefined4 local_2420;
  undefined8 local_241c;
  undefined8 *******local_2410 [2];
  longlong local_2400;
  ulonglong local_23f8;
  undefined2 local_23f0;
  undefined6 uStack_23ee;
  undefined8 uStack_23e8;
  undefined4 local_23e0;
  undefined4 uStack_23dc;
  undefined4 uStack_23d8;
  undefined4 uStack_23d4;
  undefined4 local_23d0;
  undefined8 *******local_23c8 [2];
  ulonglong local_23b8;
  ulonglong local_23b0;
  undefined4 local_23a8;
  GUID local_23a0;
  _SP_DEVICE_INTERFACE_DATA local_2390;
  undefined1 local_2368 [16];
  HANDLE local_2358;
  undefined2 local_2348;
  undefined2 local_2346;
  undefined4 local_2344;
  undefined1 local_2340;
  undefined4 local_233f;
  undefined2 local_233b;
  undefined1 local_2339;
  undefined8 local_2338;
  undefined8 uStack_2330;
  undefined8 local_2328;
  undefined8 uStack_2320;
  undefined8 local_2318;
  undefined8 uStack_2310;
  undefined8 local_2308;
  undefined8 uStack_2300;
  undefined8 local_22f8;
  undefined8 uStack_22f0;
  undefined8 local_22e8;
  undefined8 uStack_22e0;
  undefined8 local_22d8;
  undefined8 uStack_22d0;
  undefined8 local_22c8;
  undefined8 uStack_22c0;
  undefined1 local_22b8;
  undefined8 local_22b7;
  undefined8 uStack_22af;
  undefined8 local_22a7;
  undefined8 uStack_229f;
  undefined8 local_2297;
  undefined8 uStack_228f;
  undefined8 local_2287;
  undefined8 uStack_227f;
  undefined8 local_2277;
  undefined8 uStack_226f;
  undefined8 local_2267;
  undefined8 uStack_225f;
  undefined8 local_2257;
  undefined8 uStack_224f;
  undefined8 local_2247;
  undefined8 uStack_223f;
  undefined1 local_2237;
  undefined8 local_2236;
  undefined8 uStack_222e;
  undefined8 local_2226;
  undefined8 uStack_221e;
  undefined8 local_2216;
  undefined8 uStack_220e;
  undefined8 local_2206;
  undefined8 uStack_21fe;
  undefined8 local_21f6;
  undefined8 uStack_21ee;
  undefined8 local_21e6;
  undefined8 uStack_21de;
  undefined8 local_21d6;
  undefined8 uStack_21ce;
  undefined8 local_21c6;
  undefined8 uStack_21be;
  undefined1 local_21b6;
  undefined4 local_168;
  undefined2 local_164;
  undefined1 local_160;
  undefined1 local_15f;
  undefined1 local_15e;
  undefined1 local_15d;
  undefined1 local_15c;
  undefined1 local_15b;
  undefined4 local_158;
  undefined2 local_154;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8;
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x145161caa;
  local_38 = DAT_14c707940 ^ (ulonglong)auStackY_2568;
  bVar5 = true;
  bVar6 = true;
  local_23a0.Data1 = 0;
  local_23a0.Data2 = 0;
  local_23a0.Data3 = 0;
  local_23a0.Data4[0] = '\0';
  local_23a0.Data4[1] = '\0';
  local_23a0.Data4[2] = '\0';
  local_23a0.Data4[3] = '\0';
  local_23a0.Data4[4] = '\0';
  local_23a0.Data4[5] = '\0';
  local_23a0.Data4[6] = '\0';
  local_23a0.Data4[7] = '\0';
  HidD_GetHidGuid(&local_23a0);
  local_24e8 = (longlong *)0x0;
  local_24e0 = 0;
  if (DAT_14c7fb8a8 == (code *)0x0) {
    plVar11 = malloc(0x48);
  }
  else {
    plVar11 = (longlong *)(*DAT_14c7fb8a8)();
  }
  if (plVar11 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *plVar11 = (longlong)plVar11;
  plVar11[1] = (longlong)plVar11;
  plVar11[2] = (longlong)plVar11;
  *(undefined2 *)(plVar11 + 3) = 0x101;
  local_24f8 = (longlong *)0x0;
  local_24f0 = 0;
  local_24e8 = plVar11;
  if (DAT_14c7fb8a8 == (code *)0x0) {
    plVar11 = malloc(0x48);
  }
  else {
    plVar11 = (longlong *)(*DAT_14c7fb8a8)();
  }
  if (plVar11 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *plVar11 = (longlong)plVar11;
  plVar11[1] = (longlong)plVar11;
  plVar11[2] = (longlong)plVar11;
  *(undefined2 *)(plVar11 + 3) = 0x101;
  local_2508 = (longlong *)0x0;
  local_2500 = 0;
  local_24f8 = plVar11;
  if (DAT_14c7fb8a8 == (code *)0x0) {
    plVar11 = malloc(0x48);
  }
  else {
    plVar11 = (longlong *)(*DAT_14c7fb8a8)();
  }
  if (plVar11 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *plVar11 = (longlong)plVar11;
  plVar11[1] = (longlong)plVar11;
  plVar11[2] = (longlong)plVar11;
  *(undefined2 *)(plVar11 + 3) = 0x101;
  _DAT_14c7fb338 = &local_24e8;
  DAT_14c7fb340 = &local_24f8;
  DAT_14c7fb348 = &local_2508;
  local_2508 = plVar11;
  do {
    pcVar12 = &DAT_14c7e31f0;
    if (DAT_14c7c9988 == '\0') {
      do {
        pcVar27 = &DAT_14c7eb270;
        if (*pcVar12 != '\0') {
          *pcVar12 = '\0';
        }
        pcVar12 = pcVar12 + 0x2018;
      } while (pcVar12 != &DAT_14c7eb250);
      do {
        if (*pcVar27 != '\0') {
          *pcVar27 = '\0';
        }
        pcVar27 = pcVar27 + 0x2018;
      } while (pcVar27 != (char *)&DAT_14c7fb330);
      FUN_145164770();
      FUN_145168200(&local_2508,&local_2508,local_2508[1]);
      if (local_2508 != (longlong *)0x0) {
        if (DAT_14c7fb8a0 == (code *)0x0) {
          free(local_2508);
        }
        else {
          (*DAT_14c7fb8a0)();
        }
      }
      FUN_145168200(&local_24f8,&local_24f8,local_24f8[1]);
      if (local_24f8 != (longlong *)0x0) {
        if (DAT_14c7fb8a0 == (code *)0x0) {
          free(local_24f8);
        }
        else {
          (*DAT_14c7fb8a0)();
        }
      }
      FUN_145168200(&local_24e8,&local_24e8,local_24e8[1]);
      if (local_24e8 != (longlong *)0x0) {
        if (DAT_14c7fb8a0 == (code *)0x0) {
          free(local_24e8);
        }
        else {
          (*DAT_14c7fb8a0)();
        }
      }
      _endthread();
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStackY_2568);
    }
    iVar8 = FUN_144d70c90();
    if (iVar8 != 0) {
      if (!bVar5) {
        pcVar12 = &DAT_14c7eb250;
        do {
          if (*pcVar12 != '\0') goto LAB_145163b3b;
          pcVar12 = pcVar12 + 8;
        } while ((longlong)pcVar12 < 0x14c7eb270);
        DAT_14c7301a4 = 0;
      }
      DeviceInfoSet = SetupDiGetClassDevsW(&local_23a0,(PCWSTR)0x0,(HWND)0x0,0x12);
      if (DeviceInfoSet != (HDEVINFO)0x0) {
        local_2524 = 0;
        if (!bVar5) {
          FUN_145164770();
          pcVar12 = &DAT_14c7eb270;
          do {
            if (((*(LPCWSTR *)(pcVar12 + 8) != (LPCWSTR)0x0) && (*pcVar12 != '\0')) &&
               (pcVar12[0x2014] != '\0')) {
              pvVar15 = CreateFileW(*(LPCWSTR *)(pcVar12 + 8),0xc0000000,3,
                                    (LPSECURITY_ATTRIBUTES)0x0,3,0x40000000,(HANDLE)0x0);
              if (pvVar15 != (HANDLE)0xffffffffffffffff) {
                FUN_145164480(pvVar15,&local_158,6,0x14);
                local_158 = 0;
                local_154 = 0;
                CloseHandle(pvVar15);
              }
              break;
            }
            pcVar12 = pcVar12 + 0x2018;
          } while (pcVar12 != (char *)&DAT_14c7fb330);
          pcVar12 = &DAT_14c7e31f0;
          do {
            if (*pcVar12 != '\0') {
              *pcVar12 = '\0';
            }
            pcVar12 = pcVar12 + 0x2018;
          } while (pcVar12 != &DAT_14c7eb250);
          pcVar12 = &DAT_14c7eb270;
          do {
            if (*pcVar12 != '\0') {
              *pcVar12 = '\0';
            }
            pcVar12 = pcVar12 + 0x2018;
          } while (pcVar12 != (char *)&DAT_14c7fb330);
          plVar11 = (longlong *)*local_2508;
          plVar23 = local_2508;
          if (plVar11 != local_2508) {
            do {
              plVar24 = (longlong *)plVar11[2];
              if ((int)plVar11[8] == -0x7fffffff) {
                if (*(char *)((longlong)plVar24 + 0x19) == '\0') {
                  cVar7 = *(char *)(*plVar24 + 0x19);
                  plVar11 = plVar24;
                  plVar23 = (longlong *)*plVar24;
                  while (cVar7 == '\0') {
                    cVar7 = *(char *)(*plVar23 + 0x19);
                    plVar11 = plVar23;
                    plVar23 = (longlong *)*plVar23;
                  }
                }
                else {
                  cVar7 = *(char *)(plVar11[1] + 0x19);
                  plVar24 = (longlong *)plVar11[1];
                  plVar23 = plVar11;
                  while ((plVar11 = plVar24, cVar7 == '\0' && (plVar23 == (longlong *)plVar11[2])))
                  {
                    cVar7 = *(char *)(plVar11[1] + 0x19);
                    plVar24 = (longlong *)plVar11[1];
                    plVar23 = plVar11;
                  }
                }
                pvVar13 = (void *)FUN_145166c40(&local_2508);
                if ((7 < *(ulonglong *)((longlong)pvVar13 + 0x38)) &&
                   (*(void **)((longlong)pvVar13 + 0x20) != (void *)0x0)) {
                  if (DAT_14c7fb8a0 == (code *)0x0) {
                    free(*(void **)((longlong)pvVar13 + 0x20));
                  }
                  else {
                    (*DAT_14c7fb8a0)();
                  }
                }
                *(undefined8 *)((longlong)pvVar13 + 0x30) = 0;
                *(undefined8 *)((longlong)pvVar13 + 0x38) = 7;
                *(undefined2 *)((longlong)pvVar13 + 0x20) = 0;
                plVar23 = local_2508;
                if (pvVar13 != (void *)0x0) {
                  if (DAT_14c7fb8a0 == (code *)0x0) {
                    free(pvVar13);
                    plVar23 = local_2508;
                  }
                  else {
                    (*DAT_14c7fb8a0)();
                    plVar23 = local_2508;
                  }
                }
              }
              else if (*(char *)((longlong)plVar24 + 0x19) == '\0') {
                cVar7 = *(char *)(*plVar24 + 0x19);
                plVar11 = plVar24;
                plVar24 = (longlong *)*plVar24;
                while (cVar7 == '\0') {
                  cVar7 = *(char *)(*plVar24 + 0x19);
                  plVar11 = plVar24;
                  plVar24 = (longlong *)*plVar24;
                }
              }
              else {
                cVar7 = *(char *)(plVar11[1] + 0x19);
                plVar30 = (longlong *)plVar11[1];
                plVar24 = plVar11;
                while ((plVar11 = plVar30, cVar7 == '\0' && (plVar24 == (longlong *)plVar11[2]))) {
                  cVar7 = *(char *)(plVar11[1] + 0x19);
                  plVar30 = (longlong *)plVar11[1];
                  plVar24 = plVar11;
                }
              }
            } while (plVar11 != plVar23);
          }
          FUN_1451672b0(&local_2508);
        }
        if (DAT_14c7c9988 != '\0') {
LAB_1451620a3:
          local_2390.InterfaceClassGuid.Data2 = 0;
          local_2390.InterfaceClassGuid.Data3 = 0;
          local_2390.InterfaceClassGuid.Data4[0] = '\0';
          local_2390.InterfaceClassGuid.Data4[1] = '\0';
          local_2390.InterfaceClassGuid.Data4[2] = '\0';
          local_2390.InterfaceClassGuid.Data4[3] = '\0';
          local_2390.InterfaceClassGuid.Data4[4] = '\0';
          local_2390.InterfaceClassGuid.Data4[5] = '\0';
          local_2390.InterfaceClassGuid.Data4[6] = '\0';
          local_2390.InterfaceClassGuid.Data4[7] = '\0';
          local_2390.Flags = 0;
          local_2390.Reserved = 0;
          local_2390.cbSize = 0x20;
          local_2390.InterfaceClassGuid.Data1 = 0;
          BVar9 = SetupDiEnumDeviceInterfaces
                            (DeviceInfoSet,(PSP_DEVINFO_DATA)0x0,&local_23a0,local_2524,&local_2390)
          ;
          bVar5 = bVar6;
          if (BVar9 != 0) {
            local_2510[0] = 0;
            SetupDiGetDeviceInterfaceDetailW
                      (DeviceInfoSet,&local_2390,(PSP_DEVICE_INTERFACE_DETAIL_DATA_W)0x0,0,
                       local_2510,(PSP_DEVINFO_DATA)0x0);
            if (local_2510[0] != 0) {
              if (DAT_14c7fb8a8 == (code *)0x0) {
                DeviceInterfaceDetailData = malloc((ulonglong)local_2510[0]);
              }
              else {
                DeviceInterfaceDetailData = (PSP_DEVICE_INTERFACE_DETAIL_DATA_W)(*DAT_14c7fb8a8)();
              }
              if (DeviceInterfaceDetailData == (PSP_DEVICE_INTERFACE_DETAIL_DATA_W)0x0)
              goto LAB_145163af4;
              memset(DeviceInterfaceDetailData,0,(ulonglong)local_2510[0]);
              DeviceInterfaceDetailData->cbSize = 8;
              BVar9 = SetupDiGetDeviceInterfaceDetailW
                                (DeviceInfoSet,&local_2390,DeviceInterfaceDetailData,local_2510[0],
                                 local_2510,(PSP_DEVINFO_DATA)0x0);
              if (BVar9 != 0) {
                pWVar25 = DeviceInterfaceDetailData->DevicePath;
                puVar34 = (undefined8 *)&DAT_14c7e31f0;
                do {
                  psVar14 = (short *)puVar34[1];
                  if (psVar14 != (short *)0x0) {
                    lVar28 = (longlong)pWVar25 - (longlong)psVar14;
                    do {
                      sVar1 = *psVar14;
                      sVar2 = *(short *)((longlong)psVar14 + lVar28);
                      if (sVar1 != sVar2) break;
                      psVar14 = psVar14 + 1;
                    } while (sVar2 != 0);
                    if (sVar1 == sVar2) goto LAB_14516230b;
                  }
                  puVar34 = puVar34 + 0x403;
                } while (puVar34 != (undefined8 *)&DAT_14c7eb250);
                puVar34 = (undefined8 *)&DAT_14c7eb270;
                do {
                  psVar14 = (short *)puVar34[1];
                  if (psVar14 != (short *)0x0) {
                    lVar28 = (longlong)pWVar25 - (longlong)psVar14;
                    do {
                      sVar1 = *psVar14;
                      sVar2 = *(short *)((longlong)psVar14 + lVar28);
                      if (sVar1 != sVar2) break;
                      psVar14 = psVar14 + 1;
                    } while (sVar2 != 0);
                    if (sVar1 == sVar2) goto LAB_14516230b;
                  }
                  puVar34 = puVar34 + 0x403;
                } while (puVar34 != &DAT_14c7fb330);
                goto LAB_145162210;
              }
              goto LAB_145163adb;
            }
            goto LAB_145163af4;
          }
          GetLastError();
        }
LAB_145163b15:
        SetupDiDestroyDeviceInfoList(DeviceInfoSet);
      }
    }
    if (bVar5) {
      bVar5 = false;
      bVar6 = false;
    }
    else {
LAB_145163b3b:
      Sleep(500);
    }
  } while( true );
LAB_14516230b:
  if (puVar34 != (undefined8 *)0x0) {
    puVar31 = &DAT_14c7c9990;
    do {
      psVar14 = (short *)*puVar31;
      if (psVar14 != (short *)0x0) {
        lVar28 = (longlong)pWVar25 - (longlong)psVar14;
        do {
          sVar1 = *psVar14;
          sVar2 = *(short *)((longlong)psVar14 + lVar28);
          if (sVar1 != sVar2) break;
          psVar14 = psVar14 + 1;
        } while (sVar2 != 0);
        if ((sVar1 == sVar2) && (*(char *)(puVar31 + 5) == '\0')) goto LAB_145163adb;
      }
      puVar31 = puVar31 + 0x440;
    } while ((longlong)puVar31 < 0x14c7e3190);
    *(undefined1 *)puVar34 = 1;
    goto LAB_145163adb;
  }
LAB_145162210:
  puVar34 = &DAT_14c7c9990;
  do {
    psVar14 = (short *)*puVar34;
    if (psVar14 != (short *)0x0) {
      lVar28 = (longlong)pWVar25 - (longlong)psVar14;
      do {
        sVar1 = *psVar14;
        sVar2 = *(short *)((longlong)psVar14 + lVar28);
        if (sVar1 != sVar2) break;
        psVar14 = psVar14 + 1;
      } while (sVar2 != 0);
      if ((sVar1 == sVar2) && (*(char *)(puVar34 + 5) == '\0')) goto LAB_145162264;
    }
    puVar34 = puVar34 + 0x440;
  } while ((longlong)puVar34 < 0x14c7e3190);
  puVar34 = (undefined8 *)0x0;
LAB_145162264:
  FUN_14515fa20(local_2410,pWVar25);
  plVar23 = local_24e8;
  plVar11 = (longlong *)*local_24e8;
  plVar24 = local_24e8;
  plVar30 = local_24e8;
  pppppppuVar35 = local_2410[0];
  if (plVar11 != local_24e8) {
    do {
      pppppppuVar21 = local_2410;
      if (7 < local_23f8) {
        pppppppuVar21 = pppppppuVar35;
      }
      plVar18 = plVar11 + 4;
      if (7 < (ulonglong)plVar11[7]) {
        plVar18 = (longlong *)plVar11[4];
      }
      if ((plVar11[6] == local_2400) &&
         ((plVar24 = plVar11, plVar11[6] == 0 ||
          (iVar8 = FUN_14515eb10(plVar18,pppppppuVar21), plVar30 = local_24e8,
          pppppppuVar35 = local_2410[0], iVar8 == 0)))) break;
      plVar24 = plVar30;
      plVar30 = (longlong *)plVar11[2];
      if (*(char *)((longlong)plVar30 + 0x19) == '\0') {
        cVar7 = *(char *)(*plVar30 + 0x19);
        plVar11 = plVar30;
        plVar30 = (longlong *)*plVar30;
        while (cVar7 == '\0') {
          cVar7 = *(char *)(*plVar30 + 0x19);
          plVar11 = plVar30;
          plVar30 = (longlong *)*plVar30;
        }
      }
      else {
        cVar7 = *(char *)(plVar11[1] + 0x19);
        plVar18 = (longlong *)plVar11[1];
        plVar30 = plVar11;
        while ((plVar11 = plVar18, cVar7 == '\0' && (plVar30 == (longlong *)plVar11[2]))) {
          cVar7 = *(char *)(plVar11[1] + 0x19);
          plVar18 = (longlong *)plVar11[1];
          plVar30 = plVar11;
        }
      }
      plVar30 = plVar24;
    } while (plVar11 != plVar24);
  }
  if ((7 < local_23f8) && (pppppppuVar35 != (undefined8 *******)0x0)) {
    if (DAT_14c7fb8a0 == (code *)0x0) {
      free(pppppppuVar35);
    }
    else {
      (*DAT_14c7fb8a0)();
    }
  }
  FUN_14515fa20(local_2410,pWVar25);
  plVar30 = local_24f8;
  plVar11 = (longlong *)*local_24f8;
  plVar18 = local_24f8;
  plVar32 = local_24f8;
  pppppppuVar35 = local_2410[0];
  if (plVar11 != local_24f8) {
    do {
      pppppppuVar21 = local_2410;
      if (7 < local_23f8) {
        pppppppuVar21 = pppppppuVar35;
      }
      plVar19 = plVar11 + 4;
      if (7 < (ulonglong)plVar11[7]) {
        plVar19 = (longlong *)plVar11[4];
      }
      if ((plVar11[6] == local_2400) &&
         ((plVar18 = plVar11, plVar11[6] == 0 ||
          (iVar8 = FUN_14515eb10(plVar19,pppppppuVar21), plVar32 = local_24f8,
          pppppppuVar35 = local_2410[0], iVar8 == 0)))) break;
      plVar18 = plVar32;
      plVar32 = (longlong *)plVar11[2];
      if (*(char *)((longlong)plVar32 + 0x19) == '\0') {
        cVar7 = *(char *)(*plVar32 + 0x19);
        plVar11 = plVar32;
        plVar32 = (longlong *)*plVar32;
        while (cVar7 == '\0') {
          cVar7 = *(char *)(*plVar32 + 0x19);
          plVar11 = plVar32;
          plVar32 = (longlong *)*plVar32;
        }
      }
      else {
        cVar7 = *(char *)(plVar11[1] + 0x19);
        plVar19 = (longlong *)plVar11[1];
        plVar32 = plVar11;
        while ((plVar11 = plVar19, cVar7 == '\0' && (plVar32 == (longlong *)plVar11[2]))) {
          cVar7 = *(char *)(plVar11[1] + 0x19);
          plVar19 = (longlong *)plVar11[1];
          plVar32 = plVar11;
        }
      }
      plVar32 = plVar18;
    } while (plVar11 != plVar18);
  }
  if ((7 < local_23f8) && (pppppppuVar35 != (undefined8 *******)0x0)) {
    if (DAT_14c7fb8a0 == (code *)0x0) {
      free(pppppppuVar35);
    }
    else {
      (*DAT_14c7fb8a0)();
    }
  }
  FUN_14515fa20(local_2410);
  plVar32 = local_2508;
  plVar11 = (longlong *)*local_2508;
  plVar19 = local_2508;
  plVar33 = local_2508;
  pppppppuVar35 = local_2410[0];
  if (plVar11 != local_2508) {
    do {
      plVar20 = plVar11 + 4;
      if (7 < (ulonglong)plVar11[7]) {
        plVar20 = (longlong *)plVar11[4];
      }
      if ((plVar11[6] == local_2400) &&
         ((plVar19 = plVar11, plVar11[6] == 0 ||
          (iVar8 = FUN_14515eb10(plVar20), plVar33 = local_2508, pppppppuVar35 = local_2410[0],
          iVar8 == 0)))) break;
      plVar19 = plVar33;
      plVar33 = (longlong *)plVar11[2];
      if (*(char *)((longlong)plVar33 + 0x19) == '\0') {
        cVar7 = *(char *)(*plVar33 + 0x19);
        plVar11 = plVar33;
        plVar33 = (longlong *)*plVar33;
        while (cVar7 == '\0') {
          cVar7 = *(char *)(*plVar33 + 0x19);
          plVar11 = plVar33;
          plVar33 = (longlong *)*plVar33;
        }
      }
      else {
        cVar7 = *(char *)(plVar11[1] + 0x19);
        plVar20 = (longlong *)plVar11[1];
        plVar33 = plVar11;
        while ((plVar11 = plVar20, cVar7 == '\0' && (plVar33 == (longlong *)plVar11[2]))) {
          cVar7 = *(char *)(plVar11[1] + 0x19);
          plVar20 = (longlong *)plVar11[1];
          plVar33 = plVar11;
        }
      }
      plVar33 = plVar19;
    } while (plVar11 != plVar19);
  }
  if ((7 < local_23f8) && (pppppppuVar35 != (undefined8 *******)0x0)) {
    if (DAT_14c7fb8a0 == (code *)0x0) {
      free(pppppppuVar35);
    }
    else {
      (*DAT_14c7fb8a0)();
    }
  }
  if ((((puVar34 == (undefined8 *)0x0) && (plVar24 == plVar23)) && (plVar18 == plVar30)) &&
     (plVar19 == plVar32)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if (plVar19 != plVar32) {
    FUN_14515fa20(local_2410);
    plVar11 = (longlong *)*local_2508;
    plVar23 = local_2508;
    pppppppuVar35 = local_2410[0];
    if (plVar11 != local_2508) {
      do {
        plVar24 = plVar11 + 4;
        if (7 < (ulonglong)plVar11[7]) {
          plVar24 = (longlong *)plVar11[4];
        }
        if ((plVar11[6] == local_2400) &&
           ((plVar11[6] == 0 ||
            (iVar8 = FUN_14515eb10(plVar24), plVar23 = local_2508, pppppppuVar35 = local_2410[0],
            iVar8 == 0)))) {
          FUN_14515fbc0(local_23c8,plVar11 + 4);
          local_23a8 = 0x80000000;
          pvVar13 = (void *)FUN_145166c40(&local_2508,plVar11);
          if ((7 < *(ulonglong *)((longlong)pvVar13 + 0x38)) &&
             (*(void **)((longlong)pvVar13 + 0x20) != (void *)0x0)) {
            if (DAT_14c7fb8a0 == (code *)0x0) {
              free(*(void **)((longlong)pvVar13 + 0x20));
            }
            else {
              (*DAT_14c7fb8a0)();
            }
          }
          *(undefined8 *)((longlong)pvVar13 + 0x30) = 0;
          *(undefined8 *)((longlong)pvVar13 + 0x38) = 7;
          *(undefined2 *)((longlong)pvVar13 + 0x20) = 0;
          if (pvVar13 != (void *)0x0) {
            if (DAT_14c7fb8a0 == (code *)0x0) {
              free(pvVar13);
            }
            else {
              (*DAT_14c7fb8a0)();
            }
          }
          plVar11 = (longlong *)local_2508[1];
          uVar10 = 0;
          cVar7 = *(char *)((longlong)plVar11 + 0x19);
          plVar23 = plVar11;
          plVar24 = local_2508;
          uVar26 = local_23b8;
          goto joined_r0x000145162722;
        }
        plVar24 = (longlong *)plVar11[2];
        if (*(char *)((longlong)plVar24 + 0x19) == '\0') {
          cVar7 = *(char *)(*plVar24 + 0x19);
          plVar11 = plVar24;
          plVar24 = (longlong *)*plVar24;
          while (cVar7 == '\0') {
            cVar7 = *(char *)(*plVar24 + 0x19);
            plVar11 = plVar24;
            plVar24 = (longlong *)*plVar24;
          }
        }
        else {
          cVar7 = *(char *)(plVar11[1] + 0x19);
          plVar30 = (longlong *)plVar11[1];
          plVar24 = plVar11;
          while ((plVar11 = plVar30, cVar7 == '\0' && (plVar24 == (longlong *)plVar11[2]))) {
            cVar7 = *(char *)(plVar11[1] + 0x19);
            plVar30 = (longlong *)plVar11[1];
            plVar24 = plVar11;
          }
        }
      } while (plVar11 != plVar23);
    }
    goto LAB_1451628a6;
  }
  goto LAB_1451628cc;
joined_r0x000145162722:
  plVar30 = plVar11;
  local_23b8 = uVar26;
  if (cVar7 != '\0') goto LAB_145162794;
  pppppppuVar21 = local_23c8;
  if (7 < local_23b0) {
    pppppppuVar21 = local_23c8[0];
  }
  plVar11 = plVar30 + 4;
  if (7 < (ulonglong)plVar30[7]) {
    plVar11 = (longlong *)plVar30[4];
  }
  uVar3 = plVar30[6];
  uVar29 = uVar3;
  if (uVar26 < uVar3) {
    uVar29 = uVar26;
  }
  iVar8 = FUN_14515eb10(plVar11,pppppppuVar21,uVar29);
  if (iVar8 == 0) {
    if (uVar26 <= uVar3) goto LAB_14516277c;
LAB_1451627f8:
    uVar10 = 0;
    plVar11 = (longlong *)plVar30[2];
  }
  else {
    if (iVar8 < 0) goto LAB_1451627f8;
LAB_14516277c:
    uVar10 = 1;
    plVar11 = (longlong *)*plVar30;
    plVar24 = plVar30;
  }
  cVar7 = *(char *)((longlong)plVar11 + 0x19);
  plVar23 = plVar30;
  uVar26 = local_23b8;
  goto joined_r0x000145162722;
LAB_145162794:
  uStack_24d0 = CONCAT44(local_249c,uVar10);
  local_24d8 = plVar23;
  if (*(char *)((longlong)plVar24 + 0x19) == '\0') {
    pppppppuVar21 = local_23c8;
    if (7 < local_23b0) {
      pppppppuVar21 = local_23c8[0];
    }
    uVar3 = plVar24[6];
    iVar8 = FUN_14515eb10(pppppppuVar21);
    if (iVar8 == 0) {
      if (uVar26 < uVar3) goto LAB_14516280d;
    }
    else if (iVar8 < 0) goto LAB_14516280d;
  }
  else {
LAB_14516280d:
    plVar11 = local_2508;
    if (local_2500 == 0x38e38e38e38e38e) {
                    /* WARNING: Subroutine does not return */
      FUN_1470a938d();
    }
    local_24b8 = &local_2508;
    local_24b0 = (undefined8 *)0x0;
    if (DAT_14c7fb8a8 == (code *)0x0) {
      puVar34 = malloc(0x48);
    }
    else {
      puVar34 = (undefined8 *)(*DAT_14c7fb8a8)();
    }
    if (puVar34 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    local_24b0 = puVar34;
    FUN_14515fbc0(puVar34 + 4,local_23c8);
    *puVar34 = plVar11;
    puVar34[1] = plVar11;
    puVar34[2] = plVar11;
    *(undefined2 *)(puVar34 + 3) = 0;
    local_24b0 = (undefined8 *)0x0;
    FUN_145167010(&local_2508);
  }
  FUN_14515fb20(local_23c8);
LAB_1451628a6:
  if ((7 < local_23f8) && (pppppppuVar35 != (undefined8 *******)0x0)) {
    if (DAT_14c7fb8a0 == (code *)0x0) {
      free(pppppppuVar35);
    }
    else {
      (*DAT_14c7fb8a0)();
    }
  }
LAB_1451628cc:
  if (!bVar4) goto LAB_145163adb;
  pWVar25 = DeviceInterfaceDetailData->DevicePath;
  pvVar15 = CreateFileW(pWVar25,0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x40000000,(HANDLE)0x0);
  if (pvVar15 == (HANDLE)0xffffffffffffffff) goto LAB_145163adb;
  local_241c = 0;
  local_2420 = 0xc;
  cVar7 = HidD_GetAttributes(pvVar15,&local_2420);
  if (cVar7 == '\0') {
    FUN_14515fa20(&local_23f0,pWVar25);
    local_23d0 = 0;
    puVar34 = (undefined8 *)FUN_1451682c0(&local_24e8,local_2410,&local_23f0);
    local_24d8 = (longlong *)*puVar34;
    uStack_24d0 = puVar34[1];
    local_2498 = puVar34[2];
    if ((*(char *)(local_2498 + 0x19) == '\0') &&
       (cVar7 = FUN_1451683f0(&local_24e8), cVar7 == '\0')) {
      uVar26 = CONCAT44(uStack_23d4,uStack_23d8);
    }
    else {
      plVar11 = local_24e8;
      if (local_24e0 == 0x38e38e38e38e38e) {
                    /* WARNING: Subroutine does not return */
        FUN_1470a938d();
      }
      local_2490 = &local_24e8;
      local_2488 = 0;
      if (DAT_14c7fb8a8 == (code *)0x0) {
        puVar34 = malloc(0x48);
      }
      else {
        puVar34 = (undefined8 *)(*DAT_14c7fb8a8)();
      }
      if (puVar34 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      puVar34[4] = CONCAT62(uStack_23ee,local_23f0);
      puVar34[5] = uStack_23e8;
      *(undefined4 *)(puVar34 + 6) = local_23e0;
      *(undefined4 *)((longlong)puVar34 + 0x34) = uStack_23dc;
      *(undefined4 *)(puVar34 + 7) = uStack_23d8;
      *(undefined4 *)((longlong)puVar34 + 0x3c) = uStack_23d4;
      uVar26 = 7;
      local_23f0 = 0;
      *(undefined4 *)(puVar34 + 8) = local_23d0;
      *puVar34 = plVar11;
      puVar34[1] = plVar11;
      puVar34[2] = plVar11;
      *(undefined2 *)(puVar34 + 3) = 0;
      local_2488 = 0;
      FUN_145167010(&local_24e8);
    }
    if ((7 < uVar26) && ((void *)CONCAT62(uStack_23ee,local_23f0) != (void *)0x0)) {
      if (DAT_14c7fb8a0 == (code *)0x0) {
        free((void *)CONCAT62(uStack_23ee,local_23f0));
      }
      else {
        (*DAT_14c7fb8a0)();
      }
    }
    CloseHandle(pvVar15);
    goto LAB_145163adb;
  }
  uVar10 = FUN_14515bbc0(local_241c._4_2_);
  local_24d8 = (longlong *)0x0;
  cVar7 = FUN_14515bc60(local_241c & 0xffff);
  if (cVar7 == '\0') {
    cVar7 = FUN_14515bca0(local_241c & 0xffff);
    if (cVar7 == '\0') {
      cVar7 = FUN_14515bd30(local_241c & 0xffff);
      if (cVar7 != '\0') {
        if (bVar6) goto LAB_145162ac5;
        if ((DAT_14c7fb358 == 0) && (iVar8 = FUN_1451668a0(pvVar15), iVar8 != 0)) {
          FUN_14515fa20(&local_23f0,pWVar25);
          local_23d0 = 1;
          FUN_145167e30(&local_24e8);
          FUN_14515fb20(&local_23f0);
          CloseHandle(pvVar15);
          goto LAB_145163adb;
        }
        iVar8 = FUN_145164480(pvVar15,&local_168,6,0x14);
        if (iVar8 != 0) {
          local_168 = 0;
          local_164 = 0;
          CloseHandle(pvVar15);
          goto LAB_145163adb;
        }
        memset(local_2368,0,0x2200);
        lVar28 = FUN_145164690(&local_168);
        if (lVar28 != 0) {
          iVar8 = FUN_1451668a0(pvVar15);
          if (DAT_14c7301a5 == '\x01') {
            lVar16 = FUN_145164360(pWVar25,&local_168,6,1);
            if (lVar16 != 0) {
              FUN_145166790(lVar16 + 0x10);
            }
            if (iVar8 == 0) {
              iVar8 = FUN_145168520();
              if (iVar8 == 0) {
                *(undefined1 *)(lVar28 + 0x2f) = 1;
                FUN_145168550();
                CloseHandle(pvVar15);
                goto LAB_145163adb;
              }
            }
            else {
              plVar11 = &DAT_14c7c9990;
              plVar23 = &DAT_14c7c9990;
              do {
                if ((*plVar23 != 0) && (plVar24 = plVar23, (int)plVar23[1] == *(int *)(lVar28 + 8)))
                break;
                plVar23 = plVar23 + 0x440;
                plVar24 = (longlong *)0x0;
              } while ((longlong)plVar23 < 0x14c7e3190);
              do {
                if ((*plVar11 != 0) && ((int)plVar11[1] == *(int *)(lVar28 + 8))) break;
                plVar11 = plVar11 + 0x440;
              } while ((longlong)plVar11 < 0x14c7e3190);
              FUN_145164080(plVar24);
            }
          }
          CloseHandle(pvVar15);
          goto LAB_145163adb;
        }
        local_233f = local_168;
        local_233b = local_164;
        local_2348 = (undefined2)local_241c;
        local_2346 = local_241c._2_2_;
        local_2338 = 0;
        uStack_2330 = 0;
        local_2328 = 0;
        uStack_2320 = 0;
        local_2318 = 0;
        uStack_2310 = 0;
        local_2308 = 0;
        uStack_2300 = 0;
        local_22f8 = 0;
        uStack_22f0 = 0;
        local_22e8 = 0;
        uStack_22e0 = 0;
        local_22d8 = 0;
        uStack_22d0 = 0;
        local_22c8 = 0;
        uStack_22c0 = 0;
        local_22b8 = 0;
        local_2358 = pvVar15;
        local_2344 = uVar10;
        memset(&local_148,0,0x102);
        cVar7 = HidD_GetManufacturerString(pvVar15,&local_148,0x102);
        if (cVar7 != '\0') {
          local_2338 = local_148;
          uStack_2330 = uStack_140;
          local_2328 = local_138;
          uStack_2320 = uStack_130;
          local_2318 = local_128;
          uStack_2310 = uStack_120;
          local_2308 = local_118;
          uStack_2300 = uStack_110;
          local_22f8 = local_108;
          uStack_22f0 = uStack_100;
          local_22e8 = local_f8;
          uStack_22e0 = uStack_f0;
          local_22d8 = CONCAT44(uStack_e4,local_e8);
          uStack_22d0 = CONCAT44(uStack_dc,uStack_e0);
          local_22c8 = local_d8;
          uStack_22c0 = uStack_d0;
          local_22b8 = local_c8;
        }
        local_22b7 = 0;
        uStack_22af = 0;
        local_22a7 = 0;
        uStack_229f = 0;
        local_2297 = 0;
        uStack_228f = 0;
        local_2287 = 0;
        uStack_227f = 0;
        local_2277 = 0;
        uStack_226f = 0;
        local_2267 = 0;
        uStack_225f = 0;
        local_2257 = 0;
        uStack_224f = 0;
        local_2247 = 0;
        uStack_223f = 0;
        local_2237 = 0;
        memset(&local_148,0,0x102);
        cVar7 = HidD_GetProductString(pvVar15,&local_148,0x102);
        if (cVar7 != '\0') {
          local_22b7 = local_148;
          uStack_22af = uStack_140;
          local_22a7 = local_138;
          uStack_229f = uStack_130;
          local_2297 = local_128;
          uStack_228f = uStack_120;
          local_2287 = local_118;
          uStack_227f = uStack_110;
          local_2277 = local_108;
          uStack_226f = uStack_100;
          local_2267 = local_f8;
          uStack_225f = uStack_f0;
          local_2257 = CONCAT44(uStack_e4,local_e8);
          uStack_224f = CONCAT44(uStack_dc,uStack_e0);
          local_2247 = local_d8;
          uStack_223f = uStack_d0;
          local_2237 = local_c8;
        }
        local_2236 = 0;
        uStack_222e = 0;
        local_2226 = 0;
        uStack_221e = 0;
        local_2216 = 0;
        uStack_220e = 0;
        local_2206 = 0;
        uStack_21fe = 0;
        local_21f6 = 0;
        uStack_21ee = 0;
        local_21e6 = 0;
        uStack_21de = 0;
        local_21d6 = 0;
        uStack_21ce = 0;
        local_21c6 = 0;
        uStack_21be = 0;
        local_21b6 = 0;
        memset(&local_148,0,0x102);
        cVar7 = HidD_GetSerialNumberString(pvVar15,&local_148,0x102);
        if (cVar7 != '\0') {
          local_2236 = local_148;
          uStack_222e = uStack_140;
          local_2226 = local_138;
          uStack_221e = uStack_130;
          local_2216 = local_128;
          uStack_220e = uStack_120;
          local_2206 = local_118;
          uStack_21fe = uStack_110;
          local_21f6 = local_108;
          uStack_21ee = uStack_100;
          local_21e6 = local_f8;
          uStack_21de = uStack_f0;
          local_21d6 = CONCAT44(uStack_e4,local_e8);
          uStack_21ce = CONCAT44(uStack_dc,uStack_e0);
          local_21c6 = local_d8;
          uStack_21be = uStack_d0;
          local_21b6 = local_c8;
        }
        plVar11 = (longlong *)FUN_1451649c0(local_2368);
        if (plVar11 == (longlong *)0x0) {
          FUN_14515fa20(&local_23f0,pWVar25);
          local_23d0 = 1;
          FUN_145167e30(&local_24f8);
          FUN_14515fb20(&local_23f0);
        }
        goto LAB_145163816;
      }
      cVar7 = FUN_14515bd60(local_241c & 0xffff,local_241c._2_2_);
      if (cVar7 == '\0') {
        FUN_14515fa20(&local_23f0,pWVar25);
        local_23d0 = 0;
        FUN_145167e30(&local_24e8);
        FUN_14515fb20(&local_23f0);
        CloseHandle(pvVar15);
        goto LAB_145163adb;
      }
      iVar8 = FUN_1451678d0(&local_24d8,DeviceInfoSet,local_2524,pvVar15);
      if (iVar8 != 0) goto LAB_145163adb;
      plVar11 = local_24d8;
      if (local_24d8 != (longlong *)0x0) goto LAB_145163828;
      FUN_14515fa20(&local_23f0,pWVar25);
      local_23d0 = 5;
      FUN_145167e30(&local_24f8);
    }
    else {
      memset(local_2368,0,0x2200);
      local_2348 = (undefined2)local_241c;
      local_2346 = local_241c._2_2_;
      local_2340 = 0;
      local_2339 = 0;
      local_233f = 0;
      local_233b = 0;
      local_2338 = 0;
      uStack_2330 = 0;
      local_2328 = 0;
      uStack_2320 = 0;
      local_2318 = 0;
      uStack_2310 = 0;
      local_2308 = 0;
      uStack_2300 = 0;
      local_22f8 = 0;
      uStack_22f0 = 0;
      local_22e8 = 0;
      uStack_22e0 = 0;
      local_22d8 = 0;
      uStack_22d0 = 0;
      local_22c8 = 0;
      uStack_22c0 = 0;
      local_22b8 = 0;
      local_2358 = pvVar15;
      local_2344 = uVar10;
      memset(&local_148,0,0x102);
      cVar7 = HidD_GetManufacturerString(pvVar15,&local_148,0x102);
      if (cVar7 != '\0') {
        local_2338 = local_148;
        uStack_2330 = uStack_140;
        local_2328 = local_138;
        uStack_2320 = uStack_130;
        local_2318 = local_128;
        uStack_2310 = uStack_120;
        local_2308 = local_118;
        uStack_2300 = uStack_110;
        local_22f8 = local_108;
        uStack_22f0 = uStack_100;
        local_22e8 = local_f8;
        uStack_22e0 = uStack_f0;
        local_22d8 = CONCAT44(uStack_e4,local_e8);
        uStack_22d0 = CONCAT44(uStack_dc,uStack_e0);
        local_22c8 = local_d8;
        uStack_22c0 = uStack_d0;
        local_22b8 = local_c8;
      }
      local_22b7 = 0;
      uStack_22af = 0;
      local_22a7 = 0;
      uStack_229f = 0;
      local_2297 = 0;
      uStack_228f = 0;
      local_2287 = 0;
      uStack_227f = 0;
      local_2277 = 0;
      uStack_226f = 0;
      local_2267 = 0;
      uStack_225f = 0;
      local_2257 = 0;
      uStack_224f = 0;
      local_2247 = 0;
      uStack_223f = 0;
      local_2237 = 0;
      memset(&local_148,0,0x102);
      cVar7 = HidD_GetProductString(pvVar15,&local_148,0x102);
      if (cVar7 != '\0') {
        local_22b7 = local_148;
        uStack_22af = uStack_140;
        local_22a7 = local_138;
        uStack_229f = uStack_130;
        local_2297 = local_128;
        uStack_228f = uStack_120;
        local_2287 = local_118;
        uStack_227f = uStack_110;
        local_2277 = local_108;
        uStack_226f = uStack_100;
        local_2267 = local_f8;
        uStack_225f = uStack_f0;
        local_2257 = CONCAT44(uStack_e4,local_e8);
        uStack_224f = CONCAT44(uStack_dc,uStack_e0);
        local_2247 = local_d8;
        uStack_223f = uStack_d0;
        local_2237 = local_c8;
      }
      local_2236 = 0;
      uStack_222e = 0;
      local_2226 = 0;
      uStack_221e = 0;
      local_2216 = 0;
      uStack_220e = 0;
      local_2206 = 0;
      uStack_21fe = 0;
      local_21f6 = 0;
      uStack_21ee = 0;
      local_21e6 = 0;
      uStack_21de = 0;
      local_21d6 = 0;
      uStack_21ce = 0;
      local_21c6 = 0;
      uStack_21be = 0;
      local_21b6 = 0;
      memset(&local_148,0,0x102);
      cVar7 = HidD_GetSerialNumberString(pvVar15,&local_148,0x102);
      if (cVar7 != '\0') {
        local_2236 = local_148;
        uStack_222e = uStack_140;
        local_2226 = local_138;
        uStack_221e = uStack_130;
        local_2216 = local_128;
        uStack_220e = uStack_120;
        local_2206 = local_118;
        uStack_21fe = uStack_110;
        local_21f6 = local_108;
        uStack_21ee = uStack_100;
        local_21e6 = local_f8;
        uStack_21de = uStack_f0;
        local_21d6 = CONCAT44(uStack_e4,local_e8);
        uStack_21ce = CONCAT44(uStack_dc,uStack_e0);
        local_21c6 = local_d8;
        uStack_21be = uStack_d0;
        local_21b6 = local_c8;
      }
      plVar11 = (longlong *)FUN_1451649c0(local_2368);
      if (bVar6) {
        if (plVar11 != (longlong *)0x0) {
          pcVar12 = &DAT_14c7eb250;
          do {
            if (*pcVar12 == '\0') {
              *(int *)(pcVar12 + 4) = (int)plVar11[1];
              *pcVar12 = '\x01';
              break;
            }
            pcVar12 = pcVar12 + 8;
          } while ((longlong)pcVar12 < 0x14c7eb270);
          goto LAB_145163366;
        }
      }
      else {
LAB_145163366:
        if (plVar11 != (longlong *)0x0) goto LAB_145163828;
      }
      FUN_14515fa20(&local_23f0,pWVar25);
      local_23d0 = 2;
      FUN_145167e30(&local_24f8);
    }
    FUN_14515fb20(&local_23f0);
  }
  else {
    if (bVar6) {
      CloseHandle(pvVar15);
      goto LAB_145163adb;
    }
    iVar8 = FUN_145164480(pvVar15,&local_160,6,0x10);
    if (iVar8 != 0) {
LAB_145162ac5:
      CloseHandle(pvVar15);
      goto LAB_145163adb;
    }
    memset(local_2368,0,0x2200);
    lVar28 = FUN_145164690(&local_160);
    if (lVar28 != 0) {
      lVar16 = FUN_145164360(pWVar25,&local_160,6,0);
      if (lVar16 != 0) {
        FUN_145166790(lVar16 + 0x10);
      }
      CloseHandle(pvVar15);
      iVar8 = FUN_145168520();
      if (iVar8 == 0) {
        *(undefined1 *)(lVar28 + 0x2f) = 1;
        FUN_145168550();
      }
      goto LAB_145163adb;
    }
    local_233f = CONCAT13(local_15d,CONCAT12(local_15e,CONCAT11(local_15f,local_160)));
    local_233b = CONCAT11(local_15b,local_15c);
    local_2348 = (undefined2)local_241c;
    local_2346 = local_241c._2_2_;
    local_2338 = 0;
    uStack_2330 = 0;
    local_2328 = 0;
    uStack_2320 = 0;
    local_2318 = 0;
    uStack_2310 = 0;
    local_2308 = 0;
    uStack_2300 = 0;
    local_22f8 = 0;
    uStack_22f0 = 0;
    local_22e8 = 0;
    uStack_22e0 = 0;
    local_22d8 = 0;
    uStack_22d0 = 0;
    local_22c8 = 0;
    uStack_22c0 = 0;
    local_22b8 = 0;
    local_2358 = pvVar15;
    local_2344 = uVar10;
    memset(&local_148,0,0x102);
    cVar7 = HidD_GetManufacturerString(pvVar15,&local_148,0x102);
    if (cVar7 != '\0') {
      local_2338 = local_148;
      uStack_2330 = uStack_140;
      local_2328 = local_138;
      uStack_2320 = uStack_130;
      local_2318 = local_128;
      uStack_2310 = uStack_120;
      local_2308 = local_118;
      uStack_2300 = uStack_110;
      local_22f8 = local_108;
      uStack_22f0 = uStack_100;
      local_22e8 = local_f8;
      uStack_22e0 = uStack_f0;
      local_22d8 = CONCAT44(uStack_e4,local_e8);
      uStack_22d0 = CONCAT44(uStack_dc,uStack_e0);
      local_22c8 = local_d8;
      uStack_22c0 = uStack_d0;
      local_22b8 = local_c8;
    }
    local_22b7 = 0;
    uStack_22af = 0;
    local_22a7 = 0;
    uStack_229f = 0;
    local_2297 = 0;
    uStack_228f = 0;
    local_2287 = 0;
    uStack_227f = 0;
    local_2277 = 0;
    uStack_226f = 0;
    local_2267 = 0;
    uStack_225f = 0;
    local_2257 = 0;
    uStack_224f = 0;
    local_2247 = 0;
    uStack_223f = 0;
    local_2237 = 0;
    memset(&local_148,0,0x102);
    cVar7 = HidD_GetProductString(pvVar15,&local_148,0x102);
    if (cVar7 != '\0') {
      local_22b7 = local_148;
      uStack_22af = uStack_140;
      local_22a7 = local_138;
      uStack_229f = uStack_130;
      local_2297 = local_128;
      uStack_228f = uStack_120;
      local_2287 = local_118;
      uStack_227f = uStack_110;
      local_2277 = local_108;
      uStack_226f = uStack_100;
      local_2267 = local_f8;
      uStack_225f = uStack_f0;
      local_2257 = CONCAT44(uStack_e4,local_e8);
      uStack_224f = CONCAT44(uStack_dc,uStack_e0);
      local_2247 = local_d8;
      uStack_223f = uStack_d0;
      local_2237 = local_c8;
    }
    local_2236 = 0;
    uStack_222e = 0;
    local_2226 = 0;
    uStack_221e = 0;
    local_2216 = 0;
    uStack_220e = 0;
    local_2206 = 0;
    uStack_21fe = 0;
    local_21f6 = 0;
    uStack_21ee = 0;
    local_21e6 = 0;
    uStack_21de = 0;
    local_21d6 = 0;
    uStack_21ce = 0;
    local_21c6 = 0;
    uStack_21be = 0;
    local_21b6 = 0;
    memset(&local_148,0,0x102);
    cVar7 = HidD_GetSerialNumberString(pvVar15,&local_148,0x102);
    if (cVar7 != '\0') {
      local_2236 = local_148;
      uStack_222e = uStack_140;
      local_2226 = local_138;
      uStack_221e = uStack_130;
      local_2216 = local_128;
      uStack_220e = uStack_120;
      local_2206 = local_118;
      uStack_21fe = uStack_110;
      local_21f6 = local_108;
      uStack_21ee = uStack_100;
      local_21e6 = local_f8;
      uStack_21de = uStack_f0;
      local_21d6 = CONCAT44(uStack_e4,local_e8);
      uStack_21ce = CONCAT44(uStack_dc,uStack_e0);
      local_21c6 = local_d8;
      uStack_21be = uStack_d0;
      local_21b6 = local_c8;
    }
    plVar11 = (longlong *)FUN_1451649c0(local_2368);
    if (plVar11 == (longlong *)0x0) {
      FUN_14515fa20(&local_23f0,pWVar25);
      local_23d0 = 1;
      puVar34 = (undefined8 *)FUN_1451682c0(&local_24f8,local_2410,&local_23f0);
      local_24d8 = (longlong *)*puVar34;
      uStack_24d0 = puVar34[1];
      local_2498 = puVar34[2];
      if ((*(char *)(local_2498 + 0x19) == '\0') &&
         (cVar7 = FUN_1451683f0(&local_24f8), cVar7 == '\0')) {
        uVar26 = CONCAT44(uStack_23d4,uStack_23d8);
      }
      else {
        plVar23 = local_24f8;
        if (local_24f0 == 0x38e38e38e38e38e) {
                    /* WARNING: Subroutine does not return */
          FUN_1470a938d();
        }
        local_2480 = &local_24f8;
        local_2478 = 0;
        if (DAT_14c7fb8a8 == (code *)0x0) {
          puVar34 = malloc(0x48);
        }
        else {
          puVar34 = (undefined8 *)(*DAT_14c7fb8a8)();
        }
        if (puVar34 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        puVar34[4] = CONCAT62(uStack_23ee,local_23f0);
        puVar34[5] = uStack_23e8;
        *(undefined4 *)(puVar34 + 6) = local_23e0;
        *(undefined4 *)((longlong)puVar34 + 0x34) = uStack_23dc;
        *(undefined4 *)(puVar34 + 7) = uStack_23d8;
        *(undefined4 *)((longlong)puVar34 + 0x3c) = uStack_23d4;
        uVar26 = 7;
        local_23f0 = 0;
        *(undefined4 *)(puVar34 + 8) = local_23d0;
        *puVar34 = plVar23;
        puVar34[1] = plVar23;
        puVar34[2] = plVar23;
        *(undefined2 *)(puVar34 + 3) = 0;
        local_2478 = 0;
        FUN_145167010(&local_24f8);
      }
      if ((7 < uVar26) && ((void *)CONCAT62(uStack_23ee,local_23f0) != (void *)0x0)) {
        if (DAT_14c7fb8a0 == (code *)0x0) {
          free((void *)CONCAT62(uStack_23ee,local_23f0));
        }
        else {
          (*DAT_14c7fb8a0)();
        }
      }
    }
LAB_145163816:
    if (plVar11 != (longlong *)0x0) {
LAB_145163828:
      if (DAT_14c7c9987 != '\0') {
        cVar7 = FUN_14515bca0((short)plVar11[4],*(undefined2 *)((longlong)plVar11 + 0x22));
        if (cVar7 == '\0') {
          FUN_145166790((longlong)plVar11 + 500);
          if (DAT_14c7c9987 != '\0') {
            uVar17 = _beginthread(FUN_14515fcc0,0,plVar11);
            plVar11[3] = uVar17;
            if (uVar17 != 0xffffffffffffffff) {
              puVar22 = &DAT_14c7e3190;
              do {
                if (*puVar22 == 0) goto LAB_145163a1a;
                puVar22 = puVar22 + 1;
              } while ((longlong)puVar22 < 0x14c7e31f0);
              goto LAB_145163adb;
            }
          }
        }
        else {
          FUN_145166790((longlong)plVar11 + 500);
          if (DAT_14c7c9987 != '\0') {
            uVar17 = _beginthread(FUN_145160da0,0,plVar11);
            plVar11[3] = uVar17;
            if (uVar17 != 0xffffffffffffffff) {
              puVar22 = &DAT_14c7e3190;
              do {
                if (*puVar22 == 0) goto LAB_145163a1a;
                puVar22 = puVar22 + 1;
              } while ((longlong)puVar22 < 0x14c7e31f0);
              goto LAB_145163adb;
            }
          }
        }
        CloseHandle(pvVar15);
        goto LAB_145163adb;
      }
    }
  }
  CloseHandle(pvVar15);
LAB_145163adb:
  if (DAT_14c7fb8a0 == (code *)0x0) {
    free(DeviceInterfaceDetailData);
  }
  else {
    (*DAT_14c7fb8a0)();
  }
LAB_145163af4:
  local_2524 = local_2524 + 1;
  if (DAT_14c7c9988 == '\0') goto LAB_145163b15;
  goto LAB_1451620a3;
LAB_145163a1a:
  *puVar22 = uVar17;
  goto LAB_145163adb;
}



// FUNCTION 145163ca0 FUN_145163ca0 body=694 status=ok
// SIG undefined FUN_145163ca0(void)

void FUN_145163ca0(void)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  HANDLE hThread;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined2 *puVar6;
  
  hThread = GetCurrentThread();
  SetThreadPriority(hThread,0xf);
  DAT_14c7fb360 = CreateSemaphoreW((LPSECURITY_ATTRIBUTES)0x0,0,0x20,(LPCWSTR)0x0);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c7fb368);
  puVar6 = &DAT_14c7fb3a0;
  DAT_14c7fb890 = (undefined4 *)0x0;
  DAT_14c7fb898 = (undefined4 *)0x0;
  do {
    puVar5 = (undefined4 *)(puVar6 + -8);
    *(undefined8 *)(puVar6 + -4) = 0;
    *puVar5 = 0xffffffff;
    *puVar6 = 0;
    *(undefined8 *)(puVar6 + 8) = 0;
    *(undefined8 *)(puVar6 + 4) = 0;
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c7fb368);
    *(undefined8 *)(puVar6 + 8) = 0;
    if (DAT_14c7fb898 != (undefined4 *)0x0) {
      puVar4 = DAT_14c7fb898;
      if (*(longlong *)(DAT_14c7fb898 + 8) != 0) {
        puVar2 = *(undefined4 **)(DAT_14c7fb898 + 8);
        do {
          puVar4 = puVar2;
          puVar2 = *(undefined4 **)(puVar4 + 8);
        } while (*(undefined4 **)(puVar4 + 8) != (undefined4 *)0x0);
      }
      *(undefined4 **)(puVar4 + 8) = puVar5;
      puVar5 = DAT_14c7fb898;
    }
    DAT_14c7fb898 = puVar5;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c7fb368);
    puVar6 = puVar6 + 0x14;
  } while ((longlong)puVar6 < 0x14c7fb8a0);
  while ((DAT_14c7c9989 != '\0' &&
         (WaitForSingleObject(DAT_14c7fb360,0xffffffff), DAT_14c7c9989 != '\0'))) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c7fb368);
    puVar5 = DAT_14c7fb890;
    puVar4 = (undefined4 *)0x0;
    if (DAT_14c7fb890 != (undefined4 *)0x0) {
      puVar1 = (undefined8 *)(DAT_14c7fb890 + 8);
      DAT_14c7fb890 = *(undefined4 **)(DAT_14c7fb890 + 8);
      *puVar1 = 0;
      puVar4 = puVar5;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c7fb368);
    if (puVar4 != (undefined4 *)0x0) {
      if (*(longlong *)(puVar4 + 2) != 0) {
        uVar3 = FUN_14515edc0(*puVar4,*(longlong *)(puVar4 + 2),*(undefined2 *)(puVar4 + 4));
        if (*(code **)(puVar4 + 6) != (code *)0x0) {
          (**(code **)(puVar4 + 6))(uVar3,*(undefined2 *)(puVar4 + 4),*puVar4);
        }
        if (*(void **)(puVar4 + 2) != (void *)0x0) {
          if (DAT_14c7fb8a0 == (code *)0x0) {
            free(*(void **)(puVar4 + 2));
          }
          else {
            (*DAT_14c7fb8a0)();
          }
        }
      }
      *puVar4 = 0xffffffff;
      *(undefined8 *)(puVar4 + 2) = 0;
      *(undefined2 *)(puVar4 + 4) = 0;
      *(undefined8 *)(puVar4 + 8) = 0;
      *(undefined8 *)(puVar4 + 6) = 0;
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c7fb368);
      *(undefined8 *)(puVar4 + 8) = 0;
      if (DAT_14c7fb898 != (undefined4 *)0x0) {
        puVar5 = DAT_14c7fb898;
        if (*(longlong *)(DAT_14c7fb898 + 8) != 0) {
          puVar2 = *(undefined4 **)(DAT_14c7fb898 + 8);
          do {
            puVar5 = puVar2;
            puVar2 = *(undefined4 **)(puVar5 + 8);
          } while (*(undefined4 **)(puVar5 + 8) != (undefined4 *)0x0);
        }
        *(undefined4 **)(puVar5 + 8) = puVar4;
        puVar4 = DAT_14c7fb898;
      }
      DAT_14c7fb898 = puVar4;
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c7fb368);
    }
  }
  while( true ) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c7fb368);
    puVar5 = DAT_14c7fb890;
    puVar4 = (undefined4 *)0x0;
    if (DAT_14c7fb890 != (undefined4 *)0x0) {
      puVar1 = (undefined8 *)(DAT_14c7fb890 + 8);
      DAT_14c7fb890 = *(undefined4 **)(DAT_14c7fb890 + 8);
      *puVar1 = 0;
      puVar4 = puVar5;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c7fb368);
    if (puVar4 == (undefined4 *)0x0) break;
    if (*(void **)(puVar4 + 2) != (void *)0x0) {
      if (DAT_14c7fb8a0 == (code *)0x0) {
        free(*(void **)(puVar4 + 2));
      }
      else {
        (*DAT_14c7fb8a0)();
      }
    }
  }
  CloseHandle(DAT_14c7fb360);
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_14c7fb368);
                    /* WARNING: Could not recover jumptable at 0x000145163f4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _endthread();
  return;
}



// FUNCTION 145163f60 FUN_145163f60 body=279 status=ok
// SIG undefined FUN_145163f60(void)

void FUN_145163f60(void)

{
  undefined1 *puVar1;
  int iVar2;
  HANDLE hThread;
  longlong lVar3;
  undefined1 local_18 [16];
  
  hThread = GetCurrentThread();
  SetThreadPriority(hThread,0xf);
  puVar1 = (undefined1 *)FUN_14515c8b0();
  iVar2 = FUN_144d70c90();
  while ((iVar2 != 0 && (DAT_14c7c998b != '\0'))) {
    iVar2 = FUN_1451684d0();
    if (iVar2 == 0) {
      if ((((puVar1 == (undefined1 *)0x0) || (DAT_14c7301a6 == '\0')) || (DAT_14c7c998c == '\0')) ||
         (((lVar3 = FUN_14515b190(1), lVar3 == 0 || (iVar2 = FUN_14515b1c0(1,local_18), iVar2 == 0))
          || (iVar2 = FUN_14515b470(puVar1,local_18,iVar2,lVar3), iVar2 != 0)))) {
        *puVar1 = 0;
        *(undefined8 *)(puVar1 + 0x10) = 0;
        *(undefined4 *)(puVar1 + 0x18) = 0;
      }
      else {
        *puVar1 = 1;
      }
    }
    FUN_145168500();
    timeBeginPeriod(DAT_14c7301a0);
    Sleep(4);
    timeEndPeriod(DAT_14c7301a0);
    iVar2 = FUN_144d70c90();
  }
  iVar2 = FUN_1451684d0();
  if (iVar2 == 0) {
    *(undefined4 *)(puVar1 + 0x1c) = 0;
    *puVar1 = 0;
    FUN_145168500();
    _endthread();
  }
  return;
}



// FUNCTION 145164080 FUN_145164080 body=479 status=ok
// SIG undefined FUN_145164080(void)

void FUN_145164080(longlong param_1,char param_2)

{
  bool bVar1;
  ushort uVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 *_Dst;
  uint uVar6;
  ulonglong _Size;
  undefined1 uVar7;
  undefined1 auStack_a8 [32];
  undefined8 local_88 [2];
  undefined8 local_78;
  ulonglong uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1 != 0) {
    if (param_2 == '\0') {
      cVar3 = FUN_14515bc60(*(undefined2 *)(param_1 + 0x20),*(undefined2 *)(param_1 + 0x22),
                            *(undefined4 *)(param_1 + 0x24));
      if (cVar3 == '\0') {
        uVar7 = 8;
        uVar6 = 0x30;
      }
      else {
        uVar7 = 0x14;
        uVar6 = 0x11;
      }
    }
    else {
      uVar7 = 0xe2;
      uVar6 = 0x11;
    }
    if ((*(longlong *)(param_1 + 0x10) != 0) &&
       (cVar3 = HidD_GetPreparsedData(*(longlong *)(param_1 + 0x10),local_88), cVar3 != '\0')) {
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      uStack_40 = 0;
      iVar4 = HidP_GetCaps(local_88[0]);
      if (iVar4 == 0x110000) {
        uVar2 = (ushort)uStack_70;
        _Size = uStack_70 & 0xffff;
        bVar1 = false;
        if (0x40 < (ushort)((ulonglong)local_78 >> 0x20)) {
          bVar1 = true;
          cVar3 = FUN_14515bc60(*(undefined2 *)(param_1 + 0x20),*(undefined2 *)(param_1 + 0x22),
                                *(undefined4 *)(param_1 + 0x24));
          if (cVar3 != '\0') {
            uVar7 = 8;
            uVar6 = 0x30;
          }
        }
        if (uVar6 <= uVar2) {
          if (DAT_14c7fb8a8 == (code *)0x0) {
            _Dst = malloc(_Size);
          }
          else {
            _Dst = (undefined1 *)(*DAT_14c7fb8a8)();
          }
          if (_Dst != (undefined1 *)0x0) {
            memset(_Dst,0,_Size);
            *_Dst = uVar7;
            _Dst[1] = 2;
            if (bVar1) {
              uVar5 = FUN_1451685d0(0x53,_Dst,uVar6);
              *(undefined4 *)(_Dst + (uVar6 - 4)) = uVar5;
            }
            cVar3 = HidD_SetFeature(*(undefined8 *)(param_1 + 0x10),_Dst,uVar6);
            if (cVar3 == '\0') {
              GetLastError();
            }
            if (DAT_14c7fb8a0 == (code *)0x0) {
              free(_Dst);
            }
            else {
              (*DAT_14c7fb8a0)();
            }
          }
        }
        HidD_FreePreparsedData(local_88[0]);
      }
      else {
        HidD_FreePreparsedData(local_88[0]);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_a8);
}



// FUNCTION 145164270 FUN_145164270 body=8 status=ok
// SIG undefined FUN_145164270(void)

undefined1 FUN_145164270(void)

{
  return DAT_14c7c9981;
}



// FUNCTION 145164280 FUN_145164280 body=11 status=ok
// SIG undefined FUN_145164280(void)

void FUN_145164280(int param_1)

{
  if (param_1 != 0) {
    DAT_14c7301a0 = param_1;
  }
  return;
}



// FUNCTION 145164290 FUN_145164290 body=22 status=ok
// SIG undefined FUN_145164290(void)

void FUN_145164290(code *param_1)

{
  DAT_14c7fb8a8 = malloc_exref;
  if (param_1 != (code *)0x0) {
    DAT_14c7fb8a8 = param_1;
  }
  return;
}



// FUNCTION 1451642b0 FUN_1451642b0 body=22 status=ok
// SIG undefined FUN_1451642b0(void)

void FUN_1451642b0(code *param_1)

{
  DAT_14c7fb8a0 = free_exref;
  if (param_1 != (code *)0x0) {
    DAT_14c7fb8a0 = param_1;
  }
  return;
}



// FUNCTION 1451642d0 FUN_1451642d0 body=7 status=ok
// SIG undefined FUN_1451642d0(void)

void FUN_1451642d0(undefined4 param_1)

{
  DAT_14c7fb358 = param_1;
  return;
}



// FUNCTION 1451642e0 FUN_1451642e0 body=52 status=ok
// SIG undefined FUN_1451642e0(void)

undefined8 FUN_1451642e0(undefined8 param_1)

{
  int iVar1;
  longlong *plVar2;
  
  iVar1 = 0;
  plVar2 = &DAT_14c7e3190;
  do {
    if (*plVar2 == 0) {
      (&DAT_14c7e3190)[iVar1] = param_1;
      return 0;
    }
    iVar1 = iVar1 + 1;
    plVar2 = plVar2 + 1;
  } while (iVar1 < 0xc);
  return 0x80010037;
}



// FUNCTION 145164320 FUN_145164320 body=55 status=ok
// SIG undefined FUN_145164320(void)

undefined8 FUN_145164320(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  
  iVar1 = 0;
  plVar2 = &DAT_14c7e3190;
  do {
    if (*plVar2 == param_1) {
      (&DAT_14c7e3190)[iVar1] = 0;
      return 0;
    }
    iVar1 = iVar1 + 1;
    plVar2 = plVar2 + 1;
  } while (iVar1 < 0xc);
  return 0x80010037;
}



// FUNCTION 145164360 FUN_145164360 body=279 status=ok
// SIG undefined FUN_145164360(void)

undefined1 * FUN_145164360(wchar_t *param_1,longlong param_2,byte param_3,byte param_4,char param_5)

{
  size_t _Size;
  uint uVar1;
  longlong lVar2;
  void *_Dst;
  longlong lVar3;
  longlong lVar4;
  rsize_t _SizeInWords;
  undefined1 *puVar5;
  
  puVar5 = &DAT_14c7e31f0;
  if (param_4 != 0) {
    puVar5 = &DAT_14c7eb270;
  }
  uVar1 = (uint)param_4 * 4 + 4;
  if (uVar1 != 0) {
    lVar3 = 0;
    lVar2 = lVar3;
    do {
      if (*(longlong *)(puVar5 + 8) == 0) {
        lVar2 = -1;
        do {
          lVar4 = lVar2;
          lVar2 = lVar4 + 1;
        } while (param_1[lVar2] != L'\0');
        _SizeInWords = lVar4 + 2;
        _Size = _SizeInWords * 2;
        if (DAT_14c7fb8a8 == (code *)0x0) {
          _Dst = malloc(_Size);
        }
        else {
          _Dst = (void *)(*DAT_14c7fb8a8)();
        }
        *(void **)(puVar5 + 8) = _Dst;
        if (_Dst != (void *)0x0) {
          memset(_Dst,0,_Size);
          wcsncpy_s(*(wchar_t **)(puVar5 + 8),_SizeInWords,param_1,0xffffffffffffffff);
        }
        *puVar5 = 1;
        if (param_3 != 0) {
          do {
            puVar5[lVar3 + 1] = *(undefined1 *)(param_2 + lVar3);
            lVar3 = lVar3 + 1;
          } while (lVar3 < (longlong)(ulonglong)param_3);
        }
        if (param_5 == '\0') {
          return puVar5;
        }
        puVar5[0x2014] = 1;
        return puVar5;
      }
      lVar2 = lVar2 + 1;
      puVar5 = puVar5 + 0x2018;
    } while (lVar2 < (longlong)(ulonglong)uVar1);
  }
  return (undefined1 *)0x0;
}



// FUNCTION 145164480 FUN_145164480 body=510 status=ok
// SIG undefined FUN_145164480(void)

void FUN_145164480(longlong param_1,undefined1 *param_2,byte param_3,ushort param_4)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  undefined1 *_Dst;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 auStack_c8 [32];
  undefined8 local_a8 [2];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_1 != 0) {
    memset(param_2,0,(ulonglong)param_3);
    cVar1 = HidD_GetPreparsedData(param_1,local_a8);
    if (cVar1 != '\0') {
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      uStack_60 = 0;
      iVar3 = HidP_GetCaps(local_a8[0]);
      if (iVar3 == 0x110000) {
        uVar4 = (uint)(ushort)uStack_90;
        if (uVar4 < param_4) {
          HidD_FreePreparsedData(local_a8[0]);
        }
        else {
          if (DAT_14c7fb8a8 == (code *)0x0) {
            _Dst = malloc((ulonglong)uVar4);
          }
          else {
            _Dst = (undefined1 *)(*DAT_14c7fb8a8)();
          }
          if (_Dst == (undefined1 *)0x0) {
            HidD_FreePreparsedData(local_a8[0]);
          }
          else {
            if ((((ushort)((ulonglong)local_98 >> 0x20) < 0x41) || (param_4 != 0x10)) ||
               (param_3 == 0)) {
              memset(_Dst,0,(ulonglong)uVar4);
              if (param_4 == 7) {
                *_Dst = 0xe5;
              }
              else {
                uVar2 = 0x12;
                if (param_4 == 0x14) {
                  uVar2 = 9;
                }
                *_Dst = uVar2;
              }
              cVar1 = HidD_GetFeature(param_1,_Dst,param_4);
              if (cVar1 == '\0') {
                if (DAT_14c7fb8a0 == (code *)0x0) {
                  free(_Dst);
                }
                else {
                  (*DAT_14c7fb8a0)();
                }
                GetLastError();
                HidD_FreePreparsedData(local_a8[0]);
                goto LAB_14516461f;
              }
              if (param_3 != 0) {
                lVar5 = 0;
                puVar6 = _Dst + 6;
                do {
                  uVar2 = *puVar6;
                  puVar6 = puVar6 + -1;
                  param_2[lVar5] = uVar2;
                  lVar5 = lVar5 + 1;
                } while (lVar5 < (longlong)(ulonglong)param_3);
              }
            }
            else {
              *param_2 = 0xff;
            }
            if (DAT_14c7fb8a0 == (code *)0x0) {
              free(_Dst);
            }
            else {
              (*DAT_14c7fb8a0)();
            }
            HidD_FreePreparsedData(local_a8[0]);
          }
        }
      }
      else {
        HidD_FreePreparsedData(local_a8[0]);
      }
    }
  }
LAB_14516461f:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_c8);
}



// FUNCTION 145164690 FUN_145164690 body=209 status=ok
// SIG undefined FUN_145164690(void)

longlong * FUN_145164690(longlong param_1,byte param_2)

{
  char cVar1;
  byte bVar2;
  longlong *plVar3;
  
  bVar2 = 0;
  if (param_2 != 0) {
    do {
      if (*(char *)((ulonglong)bVar2 + param_1) != '\0') break;
      bVar2 = bVar2 + 1;
    } while (bVar2 < param_2);
  }
  if (bVar2 != param_2) {
    plVar3 = &DAT_14c7c9990;
    do {
      if ((*plVar3 != 0) &&
         (((cVar1 = FUN_14515bc60((short)plVar3[4],*(undefined2 *)((longlong)plVar3 + 0x22),
                                  *(undefined4 *)((longlong)plVar3 + 0x24)), cVar1 != '\0' ||
           (cVar1 = FUN_14515bd30((short)plVar3[4],*(undefined2 *)((longlong)plVar3 + 0x22)),
           cVar1 != '\0')) ||
          (cVar1 = FUN_14515bd60((short)plVar3[4],*(undefined2 *)((longlong)plVar3 + 0x22)),
          cVar1 != '\0')))) {
        bVar2 = 0;
        if (param_2 != 0) {
          do {
            if (*(char *)((ulonglong)bVar2 + 0x29 + (longlong)plVar3) !=
                *(char *)((ulonglong)bVar2 + param_1)) break;
            bVar2 = bVar2 + 1;
          } while (bVar2 < param_2);
        }
        if (bVar2 == param_2) {
          return plVar3;
        }
      }
      plVar3 = plVar3 + 0x440;
    } while (plVar3 != &DAT_14c7e3190);
  }
  return (longlong *)0x0;
}



// FUNCTION 145164770 FUN_145164770 body=580 status=ok
// SIG undefined FUN_145164770(void)

void FUN_145164770(void)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  ulonglong uVar4;
  longlong *plVar5;
  char *pcVar6;
  
  pcVar6 = &DAT_14c7e31f0;
  do {
    if ((*(longlong *)(pcVar6 + 8) != 0) && (*pcVar6 == '\0')) {
      uVar4 = 0;
      do {
        if (pcVar6[uVar4 + 1] != '\0') goto LAB_1451647dd;
        bVar3 = (char)uVar4 + 1;
        uVar4 = (ulonglong)bVar3;
      } while (bVar3 < 6);
      if (bVar3 != 6) {
LAB_1451647dd:
        plVar5 = &DAT_14c7c9990;
        do {
          if ((*plVar5 != 0) &&
             (((cVar1 = FUN_14515bc60((short)plVar5[4],*(undefined2 *)((longlong)plVar5 + 0x22),
                                      *(undefined4 *)((longlong)plVar5 + 0x24)), cVar1 != '\0' ||
               (cVar1 = FUN_14515bd30((short)plVar5[4]), cVar1 != '\0')) ||
              (cVar1 = FUN_14515bd60((short)plVar5[4]), cVar1 != '\0')))) {
            uVar4 = 0;
            do {
              if (*(char *)(uVar4 + 0x29 + (longlong)plVar5) != pcVar6[uVar4 + 1])
              goto LAB_145164837;
              bVar3 = (char)uVar4 + 1;
              uVar4 = (ulonglong)bVar3;
            } while (bVar3 < 6);
            if (bVar3 == 6) {
              if ((plVar5 != (longlong *)0x0) && (iVar2 = FUN_145168520(), iVar2 == 0)) {
                *(undefined1 *)((longlong)plVar5 + 0x2f) = 0;
                FUN_145168550();
              }
              break;
            }
          }
LAB_145164837:
          plVar5 = plVar5 + 0x440;
        } while (plVar5 != &DAT_14c7e3190);
      }
      if (*(void **)(pcVar6 + 8) != (void *)0x0) {
        if (DAT_14c7fb8a0 == (code *)0x0) {
          free(*(void **)(pcVar6 + 8));
        }
        else {
          (*DAT_14c7fb8a0)();
        }
      }
      memset(pcVar6,0,0x2018);
    }
    pcVar6 = pcVar6 + 0x2018;
  } while (pcVar6 != &DAT_14c7eb250);
  pcVar6 = &DAT_14c7eb270;
  do {
    if ((*(longlong *)(pcVar6 + 8) != 0) && (*pcVar6 == '\0')) {
      uVar4 = 0;
      do {
        if (pcVar6[uVar4 + 1] != '\0') goto LAB_1451648dd;
        bVar3 = (char)uVar4 + 1;
        uVar4 = (ulonglong)bVar3;
      } while (bVar3 < 6);
      if (bVar3 != 6) {
LAB_1451648dd:
        plVar5 = &DAT_14c7c9990;
        do {
          if ((*plVar5 != 0) &&
             (((cVar1 = FUN_14515bc60((short)plVar5[4],*(undefined2 *)((longlong)plVar5 + 0x22),
                                      *(undefined4 *)((longlong)plVar5 + 0x24)), cVar1 != '\0' ||
               (cVar1 = FUN_14515bd30((short)plVar5[4],*(undefined2 *)((longlong)plVar5 + 0x22)),
               cVar1 != '\0')) || (cVar1 = FUN_14515bd60((short)plVar5[4]), cVar1 != '\0')))) {
            bVar3 = 0;
            do {
              if (*(char *)((ulonglong)bVar3 + 0x29 + (longlong)plVar5) !=
                  pcVar6[(ulonglong)bVar3 + 1]) goto LAB_145164936;
              bVar3 = bVar3 + 1;
            } while (bVar3 < 6);
            if (bVar3 == 6) {
              if ((plVar5 != (longlong *)0x0) && (iVar2 = FUN_145168520(), iVar2 == 0)) {
                *(undefined1 *)((longlong)plVar5 + 0x2f) = 0;
                FUN_145168550();
              }
              break;
            }
          }
LAB_145164936:
          plVar5 = plVar5 + 0x440;
        } while (plVar5 != &DAT_14c7e3190);
      }
      if (*(void **)(pcVar6 + 8) != (void *)0x0) {
        if (DAT_14c7fb8a0 == (code *)0x0) {
          free(*(void **)(pcVar6 + 8));
        }
        else {
          (*DAT_14c7fb8a0)();
        }
      }
      memset(pcVar6,0,0x2018);
    }
    pcVar6 = pcVar6 + 0x2018;
    if (pcVar6 == (char *)&DAT_14c7fb330) {
      return;
    }
  } while( true );
}



// FUNCTION 1451649c0 FUN_1451649c0 body=938 status=ok
// SIG undefined FUN_1451649c0(void)

longlong * FUN_1451649c0(longlong param_1,wchar_t *param_2,int param_3)

{
  size_t _Size;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  void *_Dst;
  undefined2 *puVar7;
  longlong lVar8;
  rsize_t _SizeInWords;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar9;
  
  iVar6 = FUN_145168520();
  if (iVar6 != 0) {
    return (longlong *)0x0;
  }
  puVar7 = &DAT_14c7c99b2;
  plVar10 = (longlong *)0x0;
  plVar12 = plVar10;
  plVar13 = plVar10;
  plVar14 = plVar10;
  do {
    if (*(longlong *)(puVar7 + -0x11) != 0) {
      cVar5 = FUN_14515bca0(puVar7[-1]);
      if (cVar5 == '\0') {
        cVar5 = FUN_14515bc60(puVar7[-1],*puVar7,*(undefined4 *)(puVar7 + 1));
        if (cVar5 == '\0') {
          cVar5 = FUN_14515bd30(puVar7[-1]);
          if (cVar5 == '\0') {
            cVar5 = FUN_14515bd60(puVar7[-1]);
            if (cVar5 != '\0') {
              plVar14 = (longlong *)(ulonglong)((int)plVar14 + 1);
            }
          }
          else {
            plVar12 = (longlong *)(ulonglong)((int)plVar12 + 1);
          }
        }
        else {
          plVar12 = (longlong *)(ulonglong)((int)plVar12 + 1);
        }
      }
      else {
        plVar13 = (longlong *)(ulonglong)((int)plVar13 + 1);
      }
    }
    puVar7 = puVar7 + 0x1100;
  } while ((longlong)puVar7 < 0x14c7e31b2);
  plVar11 = plVar10;
  if (((((int)plVar12 != 4) || (param_3 != 1)) && (((int)plVar13 != 4 || (param_3 != 2)))) &&
     (((int)plVar14 != 2 || (param_3 != 5)))) {
    plVar12 = &DAT_14c7c9990;
    do {
      if (*plVar12 == 0) {
        lVar8 = -1;
        do {
          lVar9 = lVar8;
          lVar8 = lVar9 + 1;
        } while (param_2[lVar8] != L'\0');
        _SizeInWords = lVar9 + 2;
        _Size = _SizeInWords * 2;
        if (DAT_14c7fb8a8 == (code *)0x0) {
          _Dst = malloc(_Size);
        }
        else {
          _Dst = (void *)(*DAT_14c7fb8a8)();
        }
        *plVar12 = (longlong)_Dst;
        if (_Dst != (void *)0x0) {
          memset(_Dst,0,_Size);
          wcsncpy_s((wchar_t *)*plVar12,_SizeInWords,param_2,0xffffffffffffffff);
          *(int *)(plVar12 + 1) = (int)plVar10 + 1;
          plVar11 = plVar12;
          if (plVar12 != (longlong *)0x0) {
            plVar12[2] = *(longlong *)(param_1 + 0x10);
            *(undefined2 *)(plVar12 + 4) = *(undefined2 *)(param_1 + 0x20);
            *(undefined2 *)((longlong)plVar12 + 0x22) = *(undefined2 *)(param_1 + 0x22);
            *(undefined4 *)((longlong)plVar12 + 0x24) = *(undefined4 *)(param_1 + 0x24);
            *(undefined1 *)(plVar12 + 5) = *(undefined1 *)(param_1 + 0x28);
            *(int *)(plVar12 + 0x43f) = param_3;
            *(undefined1 *)((longlong)plVar12 + 0x29) = *(undefined1 *)(param_1 + 0x29);
            *(undefined1 *)((longlong)plVar12 + 0x2a) = *(undefined1 *)(param_1 + 0x2a);
            *(undefined1 *)((longlong)plVar12 + 0x2b) = *(undefined1 *)(param_1 + 0x2b);
            *(undefined1 *)((longlong)plVar12 + 0x2c) = *(undefined1 *)(param_1 + 0x2c);
            *(undefined1 *)((longlong)plVar12 + 0x2d) = *(undefined1 *)(param_1 + 0x2d);
            *(undefined1 *)((longlong)plVar12 + 0x2e) = *(undefined1 *)(param_1 + 0x2e);
            *(undefined1 *)((longlong)plVar12 + 0x2f) = *(undefined1 *)(param_1 + 0x2f);
            lVar8 = *(longlong *)(param_1 + 0x38);
            plVar12[6] = *(longlong *)(param_1 + 0x30);
            plVar12[7] = lVar8;
            lVar8 = *(longlong *)(param_1 + 0x48);
            plVar12[8] = *(longlong *)(param_1 + 0x40);
            plVar12[9] = lVar8;
            lVar8 = *(longlong *)(param_1 + 0x58);
            plVar12[10] = *(longlong *)(param_1 + 0x50);
            plVar12[0xb] = lVar8;
            lVar8 = *(longlong *)(param_1 + 0x68);
            plVar12[0xc] = *(longlong *)(param_1 + 0x60);
            plVar12[0xd] = lVar8;
            lVar8 = *(longlong *)(param_1 + 0x78);
            plVar12[0xe] = *(longlong *)(param_1 + 0x70);
            plVar12[0xf] = lVar8;
            lVar8 = *(longlong *)(param_1 + 0x88);
            plVar12[0x10] = *(longlong *)(param_1 + 0x80);
            plVar12[0x11] = lVar8;
            lVar8 = *(longlong *)(param_1 + 0x98);
            plVar12[0x12] = *(longlong *)(param_1 + 0x90);
            plVar12[0x13] = lVar8;
            lVar8 = *(longlong *)(param_1 + 0xa8);
            plVar12[0x14] = *(longlong *)(param_1 + 0xa0);
            plVar12[0x15] = lVar8;
            *(undefined1 *)(plVar12 + 0x16) = *(undefined1 *)(param_1 + 0xb0);
            uVar4 = *(undefined8 *)(param_1 + 0xb9);
            *(undefined8 *)((longlong)plVar12 + 0xb1) = *(undefined8 *)(param_1 + 0xb1);
            *(undefined8 *)((longlong)plVar12 + 0xb9) = uVar4;
            uVar4 = *(undefined8 *)(param_1 + 0xc9);
            *(undefined8 *)((longlong)plVar12 + 0xc1) = *(undefined8 *)(param_1 + 0xc1);
            *(undefined8 *)((longlong)plVar12 + 0xc9) = uVar4;
            uVar4 = *(undefined8 *)(param_1 + 0xd9);
            *(undefined8 *)((longlong)plVar12 + 0xd1) = *(undefined8 *)(param_1 + 0xd1);
            *(undefined8 *)((longlong)plVar12 + 0xd9) = uVar4;
            uVar4 = *(undefined8 *)(param_1 + 0xe9);
            *(undefined8 *)((longlong)plVar12 + 0xe1) = *(undefined8 *)(param_1 + 0xe1);
            *(undefined8 *)((longlong)plVar12 + 0xe9) = uVar4;
            uVar4 = *(undefined8 *)(param_1 + 0xf9);
            *(undefined8 *)((longlong)plVar12 + 0xf1) = *(undefined8 *)(param_1 + 0xf1);
            *(undefined8 *)((longlong)plVar12 + 0xf9) = uVar4;
            uVar4 = *(undefined8 *)(param_1 + 0x109);
            *(undefined8 *)((longlong)plVar12 + 0x101) = *(undefined8 *)(param_1 + 0x101);
            *(undefined8 *)((longlong)plVar12 + 0x109) = uVar4;
            uVar4 = *(undefined8 *)(param_1 + 0x119);
            *(undefined8 *)((longlong)plVar12 + 0x111) = *(undefined8 *)(param_1 + 0x111);
            *(undefined8 *)((longlong)plVar12 + 0x119) = uVar4;
            uVar4 = *(undefined8 *)(param_1 + 0x129);
            *(undefined8 *)((longlong)plVar12 + 0x121) = *(undefined8 *)(param_1 + 0x121);
            *(undefined8 *)((longlong)plVar12 + 0x129) = uVar4;
            *(undefined1 *)((longlong)plVar12 + 0x131) = *(undefined1 *)(param_1 + 0x131);
            uVar4 = *(undefined8 *)(param_1 + 0x13a);
            *(undefined8 *)((longlong)plVar12 + 0x132) = *(undefined8 *)(param_1 + 0x132);
            *(undefined8 *)((longlong)plVar12 + 0x13a) = uVar4;
            uVar4 = *(undefined8 *)(param_1 + 0x14a);
            *(undefined8 *)((longlong)plVar12 + 0x142) = *(undefined8 *)(param_1 + 0x142);
            *(undefined8 *)((longlong)plVar12 + 0x14a) = uVar4;
            uVar4 = *(undefined8 *)(param_1 + 0x15a);
            *(undefined8 *)((longlong)plVar12 + 0x152) = *(undefined8 *)(param_1 + 0x152);
            *(undefined8 *)((longlong)plVar12 + 0x15a) = uVar4;
            uVar4 = *(undefined8 *)(param_1 + 0x16a);
            *(undefined8 *)((longlong)plVar12 + 0x162) = *(undefined8 *)(param_1 + 0x162);
            *(undefined8 *)((longlong)plVar12 + 0x16a) = uVar4;
            uVar4 = *(undefined8 *)(param_1 + 0x17a);
            *(undefined8 *)((longlong)plVar12 + 0x172) = *(undefined8 *)(param_1 + 0x172);
            *(undefined8 *)((longlong)plVar12 + 0x17a) = uVar4;
            uVar4 = *(undefined8 *)(param_1 + 0x18a);
            *(undefined8 *)((longlong)plVar12 + 0x182) = *(undefined8 *)(param_1 + 0x182);
            *(undefined8 *)((longlong)plVar12 + 0x18a) = uVar4;
            uVar1 = *(undefined4 *)(param_1 + 0x196);
            uVar2 = *(undefined4 *)(param_1 + 0x19a);
            uVar3 = *(undefined4 *)(param_1 + 0x19e);
            *(undefined4 *)((longlong)plVar12 + 0x192) = *(undefined4 *)(param_1 + 0x192);
            *(undefined4 *)((longlong)plVar12 + 0x196) = uVar1;
            *(undefined4 *)((longlong)plVar12 + 0x19a) = uVar2;
            *(undefined4 *)((longlong)plVar12 + 0x19e) = uVar3;
            uVar4 = *(undefined8 *)(param_1 + 0x1aa);
            *(undefined8 *)((longlong)plVar12 + 0x1a2) = *(undefined8 *)(param_1 + 0x1a2);
            *(undefined8 *)((longlong)plVar12 + 0x1aa) = uVar4;
            *(undefined1 *)((longlong)plVar12 + 0x1b2) = *(undefined1 *)(param_1 + 0x1b2);
          }
          break;
        }
      }
      plVar10 = (longlong *)(ulonglong)((int)plVar10 + 1);
      plVar12 = plVar12 + 0x440;
      plVar11 = (longlong *)0x0;
    } while ((longlong)plVar12 < 0x14c7e3190);
  }
  FUN_145168550();
  return plVar11;
}



// FUNCTION 145164d70 FUN_145164d70 body=100 status=ok
// SIG undefined FUN_145164d70(void)

void FUN_145164d70(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_145168520();
  if (iVar1 == 0) {
    if (param_1 != (undefined8 *)0x0) {
      if (*(char *)(param_1 + 5) == '\0') {
        CloseHandle((HANDLE)param_1[2]);
      }
      if ((void *)*param_1 != (void *)0x0) {
        if (DAT_14c7fb8a0 == (code *)0x0) {
          free((void *)*param_1);
        }
        else {
          (*DAT_14c7fb8a0)();
        }
      }
      memset(param_1,0,0x2200);
    }
    FUN_145168550();
    return;
  }
  return;
}



// FUNCTION 145164de0 FUN_145164de0 body=1269 status=ok
// SIG undefined FUN_145164de0(void)

longlong * FUN_145164de0(undefined8 *param_1,wchar_t *param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined4 uVar12;
  size_t _Size;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  int iVar61;
  void *_Dst;
  longlong lVar62;
  longlong *plVar63;
  longlong lVar64;
  rsize_t _SizeInWords;
  longlong lVar65;
  
  if (param_1 == (undefined8 *)0x0) {
    return (longlong *)0x0;
  }
  iVar61 = FUN_145168520();
  if (iVar61 != 0) {
    return (longlong *)0x0;
  }
  iVar61 = *(int *)(param_1 + 1);
  if (0xb < iVar61 - 1U) {
    FUN_145168550();
    return (longlong *)0x0;
  }
  uVar13 = param_1[6];
  uVar14 = param_1[7];
  uVar12 = *(undefined4 *)((longlong)param_1 + 0x24);
  uVar1 = *(undefined1 *)((longlong)param_1 + 0x29);
  uVar15 = param_1[8];
  uVar16 = param_1[9];
  uVar2 = *(undefined1 *)((longlong)param_1 + 0x2a);
  uVar3 = *(undefined1 *)((longlong)param_1 + 0x2b);
  uVar17 = param_1[10];
  uVar18 = param_1[0xb];
  uVar4 = *(undefined1 *)((longlong)param_1 + 0x2c);
  uVar5 = *(undefined1 *)((longlong)param_1 + 0x2d);
  uVar19 = param_1[0xc];
  uVar20 = param_1[0xd];
  uVar6 = *(undefined1 *)((longlong)param_1 + 0x2e);
  uVar7 = *(undefined1 *)(param_1 + 0x16);
  uVar21 = param_1[0xe];
  uVar22 = param_1[0xf];
  uVar8 = *(undefined1 *)((longlong)param_1 + 0x131);
  uVar10 = *(undefined2 *)(param_1 + 4);
  uVar23 = param_1[0x10];
  uVar24 = param_1[0x11];
  uVar9 = *(undefined1 *)((longlong)param_1 + 0x1b2);
  uVar11 = *(undefined2 *)((longlong)param_1 + 0x22);
  uVar25 = param_1[0x12];
  uVar26 = param_1[0x13];
  uVar27 = param_1[0x14];
  uVar28 = param_1[0x15];
  uVar29 = *(undefined8 *)((longlong)param_1 + 0xb1);
  uVar30 = *(undefined8 *)((longlong)param_1 + 0xb9);
  uVar31 = *(undefined8 *)((longlong)param_1 + 0xc1);
  uVar32 = *(undefined8 *)((longlong)param_1 + 0xc9);
  uVar33 = *(undefined8 *)((longlong)param_1 + 0xd1);
  uVar34 = *(undefined8 *)((longlong)param_1 + 0xd9);
  uVar35 = *(undefined8 *)((longlong)param_1 + 0xe1);
  uVar36 = *(undefined8 *)((longlong)param_1 + 0xe9);
  uVar37 = *(undefined8 *)((longlong)param_1 + 0xf1);
  uVar38 = *(undefined8 *)((longlong)param_1 + 0xf9);
  uVar39 = *(undefined8 *)((longlong)param_1 + 0x101);
  uVar40 = *(undefined8 *)((longlong)param_1 + 0x109);
  uVar41 = *(undefined8 *)((longlong)param_1 + 0x111);
  uVar42 = *(undefined8 *)((longlong)param_1 + 0x119);
  uVar43 = *(undefined8 *)((longlong)param_1 + 0x121);
  uVar44 = *(undefined8 *)((longlong)param_1 + 0x129);
  uVar45 = *(undefined8 *)((longlong)param_1 + 0x132);
  uVar46 = *(undefined8 *)((longlong)param_1 + 0x13a);
  uVar47 = *(undefined8 *)((longlong)param_1 + 0x142);
  uVar48 = *(undefined8 *)((longlong)param_1 + 0x14a);
  uVar49 = *(undefined8 *)((longlong)param_1 + 0x152);
  uVar50 = *(undefined8 *)((longlong)param_1 + 0x15a);
  uVar51 = *(undefined8 *)((longlong)param_1 + 0x162);
  uVar52 = *(undefined8 *)((longlong)param_1 + 0x16a);
  uVar53 = *(undefined8 *)((longlong)param_1 + 0x172);
  uVar54 = *(undefined8 *)((longlong)param_1 + 0x17a);
  uVar55 = *(undefined8 *)((longlong)param_1 + 0x182);
  uVar56 = *(undefined8 *)((longlong)param_1 + 0x18a);
  uVar57 = *(undefined8 *)((longlong)param_1 + 0x192);
  uVar58 = *(undefined8 *)((longlong)param_1 + 0x19a);
  uVar59 = *(undefined8 *)((longlong)param_1 + 0x1a2);
  uVar60 = *(undefined8 *)((longlong)param_1 + 0x1aa);
  if (*(char *)(param_1 + 5) == '\0') {
    CloseHandle((HANDLE)param_1[2]);
  }
  if ((void *)*param_1 != (void *)0x0) {
    if (DAT_14c7fb8a0 == (code *)0x0) {
      free((void *)*param_1);
    }
    else {
      (*DAT_14c7fb8a0)();
    }
  }
  memset(param_1,0,0x2200);
  lVar62 = (longlong)iVar61 * 0x2200;
  plVar63 = (longlong *)(&DAT_14c7c7790 + lVar62);
  if (*plVar63 == 0) {
    lVar64 = -1;
    do {
      lVar65 = lVar64;
      lVar64 = lVar65 + 1;
    } while (param_2[lVar64] != L'\0');
    _SizeInWords = lVar65 + 2;
    _Size = _SizeInWords * 2;
    if (DAT_14c7fb8a8 == (code *)0x0) {
      _Dst = malloc(_Size);
    }
    else {
      _Dst = (void *)(*DAT_14c7fb8a8)();
    }
    *plVar63 = (longlong)_Dst;
    if (_Dst != (void *)0x0) {
      memset(_Dst,0,_Size);
      wcsncpy_s((wchar_t *)*plVar63,_SizeInWords,param_2,0xffffffffffffffff);
      *(int *)(&DAT_14c7c7798 + lVar62) = iVar61;
      if (plVar63 != (longlong *)0x0) {
        *(undefined4 *)(&DAT_14c7c77b4 + lVar62) = uVar12;
        *(undefined8 *)(&DAT_14c7c77a0 + lVar62) = param_3;
        *(undefined2 *)(&DAT_14c7c77b0 + lVar62) = uVar10;
        *(undefined2 *)(&DAT_14c7c77b2 + lVar62) = uVar11;
        (&DAT_14c7c77b8)[lVar62] = 0;
        (&DAT_14c7c77bf)[lVar62] = 0;
        (&DAT_14c7c77b9)[lVar62] = uVar1;
        (&DAT_14c7c77ba)[lVar62] = uVar2;
        (&DAT_14c7c77bb)[lVar62] = uVar3;
        (&DAT_14c7c77bc)[lVar62] = uVar4;
        (&DAT_14c7c77bd)[lVar62] = uVar5;
        (&DAT_14c7c77be)[lVar62] = uVar6;
        *(undefined8 *)(&DAT_14c7c77c0 + lVar62) = uVar13;
        *(undefined8 *)(lVar62 + 0x14c7c77c8) = uVar14;
        *(undefined8 *)(&DAT_14c7c77d0 + lVar62) = uVar15;
        *(undefined8 *)(lVar62 + 0x14c7c77d8) = uVar16;
        *(undefined8 *)(&DAT_14c7c77e0 + lVar62) = uVar17;
        *(undefined8 *)(lVar62 + 0x14c7c77e8) = uVar18;
        *(undefined8 *)(&DAT_14c7c77f0 + lVar62) = uVar19;
        *(undefined8 *)(lVar62 + 0x14c7c77f8) = uVar20;
        *(undefined8 *)(&DAT_14c7c7800 + lVar62) = uVar21;
        *(undefined8 *)(lVar62 + 0x14c7c7808) = uVar22;
        *(undefined8 *)(&DAT_14c7c7810 + lVar62) = uVar23;
        *(undefined8 *)(lVar62 + 0x14c7c7818) = uVar24;
        *(undefined8 *)(&DAT_14c7c7820 + lVar62) = uVar25;
        *(undefined8 *)(lVar62 + 0x14c7c7828) = uVar26;
        *(undefined8 *)(&DAT_14c7c7830 + lVar62) = uVar27;
        *(undefined8 *)(lVar62 + 0x14c7c7838) = uVar28;
        (&DAT_14c7c7840)[lVar62] = uVar7;
        *(undefined8 *)(&DAT_14c7c7841 + lVar62) = uVar29;
        *(undefined8 *)(lVar62 + 0x14c7c7849) = uVar30;
        *(undefined8 *)(&DAT_14c7c7851 + lVar62) = uVar31;
        *(undefined8 *)(lVar62 + 0x14c7c7859) = uVar32;
        *(undefined8 *)(&DAT_14c7c7861 + lVar62) = uVar33;
        *(undefined8 *)(lVar62 + 0x14c7c7869) = uVar34;
        *(undefined8 *)(&DAT_14c7c7871 + lVar62) = uVar35;
        *(undefined8 *)(lVar62 + 0x14c7c7879) = uVar36;
        *(undefined8 *)(&DAT_14c7c7881 + lVar62) = uVar37;
        *(undefined8 *)(lVar62 + 0x14c7c7889) = uVar38;
        *(undefined8 *)(&DAT_14c7c7891 + lVar62) = uVar39;
        *(undefined8 *)(lVar62 + 0x14c7c7899) = uVar40;
        *(undefined8 *)(&DAT_14c7c78a1 + lVar62) = uVar41;
        *(undefined8 *)(lVar62 + 0x14c7c78a9) = uVar42;
        *(undefined8 *)(&DAT_14c7c78b1 + lVar62) = uVar43;
        *(undefined8 *)(lVar62 + 0x14c7c78b9) = uVar44;
        (&DAT_14c7c78c1)[lVar62] = uVar8;
        *(undefined8 *)(&DAT_14c7c78c2 + lVar62) = uVar45;
        *(undefined8 *)(lVar62 + 0x14c7c78ca) = uVar46;
        *(undefined8 *)(&DAT_14c7c78d2 + lVar62) = uVar47;
        *(undefined8 *)(lVar62 + 0x14c7c78da) = uVar48;
        *(undefined8 *)(&DAT_14c7c78e2 + lVar62) = uVar49;
        *(undefined8 *)(lVar62 + 0x14c7c78ea) = uVar50;
        *(undefined8 *)(&DAT_14c7c78f2 + lVar62) = uVar51;
        *(undefined8 *)(lVar62 + 0x14c7c78fa) = uVar52;
        *(undefined8 *)(&DAT_14c7c7902 + lVar62) = uVar53;
        *(undefined8 *)(lVar62 + 0x14c7c790a) = uVar54;
        *(undefined8 *)(&DAT_14c7c7912 + lVar62) = uVar55;
        *(undefined8 *)(lVar62 + 0x14c7c791a) = uVar56;
        *(undefined8 *)(&DAT_14c7c7922 + lVar62) = uVar57;
        *(undefined8 *)(lVar62 + 0x14c7c792a) = uVar58;
        *(undefined8 *)(&DAT_14c7c7932 + lVar62) = uVar59;
        *(undefined8 *)(lVar62 + 0x14c7c793a) = uVar60;
        (&DAT_14c7c7942)[lVar62] = uVar9;
      }
      goto LAB_145165282;
    }
  }
  plVar63 = (longlong *)0x0;
LAB_145165282:
  FUN_145168550();
  return plVar63;
}



// FUNCTION 1451652e0 FUN_1451652e0 body=490 status=ok
// SIG undefined FUN_1451652e0(void)

void FUN_1451652e0(undefined8 *param_1)

{
  uint uVar1;
  LPCWSTR lpFileName;
  byte bVar2;
  int iVar3;
  ulonglong uVar4;
  HANDLE hObject;
  void *_ArgList;
  uintptr_t uVar5;
  byte bVar6;
  undefined1 *puVar7;
  longlong lVar8;
  
  bVar2 = FUN_14515bd90(*(undefined2 *)(param_1 + 4));
  puVar7 = &DAT_14c7e31f0;
  if (bVar2 != 0) {
    puVar7 = &DAT_14c7eb270;
  }
  uVar4 = 0;
  do {
    if (*(char *)(uVar4 + 0x29 + (longlong)param_1) != '\0') goto LAB_145165338;
    bVar6 = (char)uVar4 + 1;
    uVar4 = (ulonglong)bVar6;
  } while (bVar6 < 6);
  if (bVar6 != 6) {
LAB_145165338:
    if ((ulonglong)bVar2 != 0x3fffffffffffffff) {
      lVar8 = 0;
      do {
        if (*(longlong *)(puVar7 + 8) != 0) {
          uVar4 = 0;
          do {
            if (puVar7[uVar4 + 1] != *(char *)(uVar4 + 0x29 + (longlong)param_1))
            goto LAB_145165367;
            bVar6 = (char)uVar4 + 1;
            uVar4 = (ulonglong)bVar6;
          } while (bVar6 < 6);
          if (bVar6 == 6) {
            if (puVar7 != (undefined1 *)0x0) {
              lpFileName = *(LPCWSTR *)(puVar7 + 8);
              hObject = CreateFileW(lpFileName,0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x40000000,
                                    (HANDLE)0x0);
              if (hObject != (HANDLE)0xffffffffffffffff) {
                _ArgList = (void *)FUN_145164de0(param_1,lpFileName,hObject);
                memset((void *)((longlong)_ArgList + 0x1f8),0,(ulonglong)*(uint *)(puVar7 + 0x10));
                uVar1 = *(uint *)(puVar7 + 0x10);
                *(uint *)((longlong)_ArgList + 500) = uVar1;
                wcsncpy_s((wchar_t *)((longlong)_ArgList + 0x1f8),(ulonglong)uVar1,
                          (wchar_t *)(puVar7 + 0x14),0xffffffffffffffff);
                if (DAT_14c7c9987 != '\0') {
                  uVar5 = _beginthread(FUN_14515fcc0,0,_ArgList);
                  *(uintptr_t *)((longlong)_ArgList + 0x18) = uVar5;
                  if (uVar5 != 0xffffffffffffffff) {
                    FUN_1451642e0(uVar5);
                    return;
                  }
                }
                CloseHandle(hObject);
                return;
              }
            }
            break;
          }
        }
LAB_145165367:
        lVar8 = lVar8 + 1;
        puVar7 = puVar7 + 0x2018;
      } while (lVar8 < (longlong)((ulonglong)bVar2 * 4 + 4));
    }
  }
  if (*(char *)(param_1 + 5) != '\0') {
    FUN_14515caf0(*(undefined4 *)(param_1 + 1));
  }
  if (bVar2 != 0) {
    FUN_14515caf0(*(undefined4 *)(param_1 + 1));
  }
  iVar3 = FUN_145168520();
  if (iVar3 == 0) {
    if (*(char *)(param_1 + 5) == '\0') {
      CloseHandle((HANDLE)param_1[2]);
    }
    if ((void *)*param_1 != (void *)0x0) {
      if (DAT_14c7fb8a0 == (code *)0x0) {
        free((void *)*param_1);
      }
      else {
        (*DAT_14c7fb8a0)();
      }
    }
    memset(param_1,0,0x2200);
    FUN_145168550();
  }
  return;
}



// FUNCTION 1451654d0 FUN_1451654d0 body=447 status=ok
// SIG undefined FUN_1451654d0(void)

void FUN_1451654d0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  
  cVar4 = FUN_14515bc60(*(undefined2 *)(param_1 + 0x20),*(undefined2 *)(param_1 + 0x22),
                        *(undefined4 *)(param_1 + 0x24));
  if (cVar4 != '\0') {
    uVar3 = *(undefined8 *)(param_2 + 9);
    *(undefined8 *)(param_1 + 0x1b4) = *(undefined8 *)(param_2 + 1);
    *(undefined8 *)(param_1 + 0x1bc) = uVar3;
    uVar6 = *(undefined4 *)(param_2 + 0x15);
    uVar1 = *(undefined4 *)(param_2 + 0x19);
    uVar2 = *(undefined4 *)(param_2 + 0x1d);
    *(undefined4 *)(param_1 + 0x1c4) = *(undefined4 *)(param_2 + 0x11);
    *(undefined4 *)(param_1 + 0x1c8) = uVar6;
    *(undefined4 *)(param_1 + 0x1cc) = uVar1;
    *(undefined4 *)(param_1 + 0x1d0) = uVar2;
    uVar5 = FUN_14515bb80(param_2 + 0x21);
    *(undefined2 *)(param_1 + 0x1d4) = uVar5;
    uVar5 = FUN_14515bb80(param_2 + 0x23);
    *(undefined2 *)(param_1 + 0x1d6) = uVar5;
    uVar6 = FUN_14515bb90(param_2 + 0x25);
    *(undefined4 *)(param_1 + 0x1d8) = uVar6;
    uVar5 = FUN_14515bb80(param_2 + 0x29);
    *(undefined2 *)(param_1 + 0x1dc) = uVar5;
    uVar5 = FUN_14515bb80(param_2 + 0x2b);
    *(undefined2 *)(param_1 + 0x1de) = uVar5;
    uVar6 = FUN_14515bb90(param_2 + 0x2d);
    *(undefined4 *)(param_1 + 0x1e0) = uVar6;
    *(undefined8 *)(param_1 + 0x1e4) = 0;
    *(undefined4 *)(param_1 + 0x1ec) = 0;
    *(undefined2 *)(param_1 + 0x1f0) = 0;
    *(undefined1 *)(param_1 + 0x1f2) = 0;
    return;
  }
  cVar4 = FUN_14515bd30(*(undefined2 *)(param_1 + 0x20),*(undefined2 *)(param_1 + 0x22));
  if (cVar4 != '\0') {
    *(undefined8 *)(param_1 + 0x1b4) = *(undefined8 *)(param_2 + 1);
    *(undefined2 *)(param_1 + 0x1bc) = *(undefined2 *)(param_2 + 9);
    *(undefined1 *)(param_1 + 0x1be) = *(undefined1 *)(param_2 + 0xb);
    *(undefined8 *)(param_1 + 0x1bf) = *(undefined8 *)(param_2 + 0xc);
    uVar5 = FUN_14515bb80(param_2 + 0x14);
    *(undefined2 *)(param_1 + 0x1c8) = uVar5;
    uVar5 = FUN_14515bb80(param_2 + 0x16);
    *(undefined2 *)(param_1 + 0x1ca) = uVar5;
    uVar6 = FUN_14515bb90(param_2 + 0x18);
    *(undefined4 *)(param_1 + 0x1cc) = uVar6;
    uVar6 = FUN_14515bb90(param_2 + 0x1c);
    *(undefined4 *)(param_1 + 0x1d0) = uVar6;
    *(undefined8 *)(param_1 + 0x1d4) = *(undefined8 *)(param_2 + 0x20);
    *(undefined4 *)(param_1 + 0x1dc) = *(undefined4 *)(param_2 + 0x28);
    uVar5 = FUN_14515bb80(param_2 + 0x2c);
    *(undefined2 *)(param_1 + 0x1e0) = uVar5;
    *(undefined1 *)(param_1 + 0x1e2) = *(undefined1 *)(param_2 + 0x2e);
    *(undefined1 *)(param_1 + 0x1e3) = *(undefined1 *)(param_2 + 0x2f);
    uVar6 = FUN_14515bb90(param_2 + 0x30);
    *(undefined4 *)(param_1 + 0x1e4) = uVar6;
    uVar6 = FUN_14515bb90(param_2 + 0x34);
    *(undefined4 *)(param_1 + 0x1e8) = uVar6;
    uVar6 = FUN_14515bb90(param_2 + 0x38);
    *(undefined4 *)(param_1 + 0x1ec) = uVar6;
    *(undefined4 *)(param_1 + 0x1f0) = *(undefined4 *)(param_2 + 0x3c);
  }
  return;
}



// FUNCTION 145165690 FUN_145165690 body=402 status=ok
// SIG undefined FUN_145165690(void)

void FUN_145165690(undefined2 *param_1,longlong param_2,char param_3)

{
  undefined2 uVar1;
  
  if (param_3 == '\0') {
    uVar1 = FUN_14515bb80(param_2 + 1);
    *param_1 = uVar1;
    uVar1 = FUN_14515bb80(param_2 + 3);
    param_1[1] = uVar1;
    uVar1 = FUN_14515bb80(param_2 + 5);
    param_1[2] = uVar1;
    uVar1 = FUN_14515bb80(param_2 + 7);
    param_1[3] = uVar1;
    uVar1 = FUN_14515bb80(param_2 + 9);
    param_1[4] = uVar1;
    uVar1 = FUN_14515bb80(param_2 + 0xb);
    param_1[5] = uVar1;
    uVar1 = FUN_14515bb80(param_2 + 0xd);
    param_1[6] = uVar1;
    uVar1 = FUN_14515bb80(param_2 + 0xf);
    param_1[7] = uVar1;
  }
  else {
    uVar1 = FUN_14515bb80(param_2 + 1);
    *param_1 = uVar1;
    uVar1 = FUN_14515bb80(param_2 + 3);
    param_1[1] = uVar1;
    uVar1 = FUN_14515bb80(param_2 + 5);
    param_1[2] = uVar1;
    uVar1 = FUN_14515bb80(param_2 + 7);
    param_1[3] = uVar1;
    uVar1 = FUN_14515bb80(param_2 + 9);
    param_1[5] = uVar1;
    uVar1 = FUN_14515bb80(param_2 + 0xb);
    param_1[7] = uVar1;
    uVar1 = FUN_14515bb80(param_2 + 0xd);
    param_1[4] = uVar1;
    uVar1 = FUN_14515bb80(param_2 + 0xf);
    param_1[6] = uVar1;
  }
  uVar1 = FUN_14515bb80(param_2 + 0x11);
  param_1[8] = uVar1;
  uVar1 = FUN_14515bb80(param_2 + 0x13);
  param_1[9] = uVar1;
  uVar1 = FUN_14515bb80(param_2 + 0x15);
  param_1[10] = uVar1;
  uVar1 = FUN_14515bb80(param_2 + 0x17);
  param_1[0xb] = uVar1;
  uVar1 = FUN_14515bb80(param_2 + 0x19);
  param_1[0xc] = uVar1;
  uVar1 = FUN_14515bb80(param_2 + 0x1b);
  param_1[0xd] = uVar1;
  uVar1 = FUN_14515bb80(param_2 + 0x1d);
  param_1[0xe] = uVar1;
  uVar1 = FUN_14515bb80(param_2 + 0x1f);
  param_1[0xf] = uVar1;
  uVar1 = FUN_14515bb80(param_2 + 0x21);
  param_1[0x10] = uVar1;
  uVar1 = FUN_14515bb80(param_2 + 0x23);
  param_1[0x11] = uVar1;
  return;
}



// FUNCTION 145165830 FUN_145165830 body=759 status=ok
// SIG undefined FUN_145165830(void)

void FUN_145165830(longlong param_1,longlong param_2,undefined8 param_3,ulonglong param_4,
                  longlong param_5)

{
  undefined1 *puVar1;
  ushort uVar2;
  undefined2 uVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  
  puVar1 = (undefined1 *)(param_2 + 1 + (param_4 & 0xff) * 2);
  switch(puVar1[4] & 0xf) {
  case 0:
    *(uint *)(param_5 + 0x14) = *(uint *)(param_5 + 0x14) | 0x10;
    break;
  case 1:
    *(uint *)(param_5 + 0x14) = *(uint *)(param_5 + 0x14) | 0x30;
    break;
  case 2:
    *(uint *)(param_5 + 0x14) = *(uint *)(param_5 + 0x14) | 0x20;
    break;
  case 3:
    *(uint *)(param_5 + 0x14) = *(uint *)(param_5 + 0x14) | 0x60;
    break;
  case 4:
    *(uint *)(param_5 + 0x14) = *(uint *)(param_5 + 0x14) | 0x40;
    break;
  case 5:
    *(undefined4 *)(param_5 + 0x14) = 0xc0;
    break;
  case 6:
    *(undefined4 *)(param_5 + 0x14) = 0x80;
    break;
  case 7:
    *(undefined4 *)(param_5 + 0x14) = 0x90;
  }
  puVar4 = (uint *)(param_5 + 0x14);
  if ((puVar1[4] & 0x10) != 0) {
    *puVar4 = *puVar4 | 0x8000;
  }
  if ((puVar1[4] & 0x20) != 0) {
    *puVar4 = *puVar4 | 0x4000;
  }
  if ((puVar1[4] & 0x40) != 0) {
    *puVar4 = *puVar4 | 0x2000;
  }
  puVar5 = (uint *)(param_5 + 0x14);
  if ((char)puVar1[4] < '\0') {
    *puVar5 = *puVar4 | 0x1000;
  }
  if ((puVar1[5] & 1) != 0) {
    *puVar5 = *puVar5 | 0x400;
  }
  puVar4 = (uint *)(param_5 + 0x14);
  if ((puVar1[5] & 2) != 0) {
    *puVar4 = *puVar5 | 0x800;
  }
  if ((puVar1[5] & 4) != 0) {
    *puVar4 = *puVar4 | 0x100;
  }
  puVar5 = (uint *)(param_5 + 0x14);
  if ((puVar1[5] & 8) != 0) {
    *puVar5 = *puVar4 | 0x200;
  }
  if ((puVar1[5] & 0x10) != 0) {
    *puVar5 = *puVar5 | 1;
  }
  puVar4 = (uint *)(param_5 + 0x14);
  if ((puVar1[5] & 0x20) != 0) {
    *puVar4 = *puVar5 | 8;
  }
  if ((puVar1[5] & 0x40) != 0) {
    *puVar4 = *puVar4 | 2;
  }
  puVar5 = (uint *)(param_5 + 0x14);
  if ((char)puVar1[5] < '\0') {
    *puVar5 = *puVar4 | 4;
  }
  puVar4 = (uint *)(param_5 + 0x14);
  if (*(int *)(param_1 + 0x24) < 0x12) {
    if ((puVar1[6] & 1) != 0) {
      *puVar4 = *puVar4 | 0x100000;
    }
    if ((puVar1[6] & 2) != 0) {
      *puVar4 = *puVar4 | 0x10000;
    }
  }
  else {
    if ((puVar1[6] & 2) != 0) {
      *puVar5 = *puVar5 | 0x100000;
    }
    if ((puVar1[6] & 1) != 0) {
      *(uint *)(param_5 + 0x14) = *(uint *)(param_5 + 0x14) | 0x10000;
    }
  }
  *(undefined1 *)(param_5 + 0x18) = *puVar1;
  *(undefined1 *)(param_5 + 0x19) = puVar1[1];
  *(undefined1 *)(param_5 + 0x1a) = puVar1[2];
  *(undefined1 *)(param_5 + 0x1b) = puVar1[3];
  *(undefined1 *)(param_5 + 0x1c) = puVar1[7];
  *(undefined1 *)(param_5 + 0x1d) = puVar1[8];
  *(byte *)(param_5 + 0x10) = (byte)puVar1[6] >> 2;
  *(byte *)(param_5 + 0x11) = puVar1[0x1d] & 0x7f;
  uVar2 = FUN_14515bb80(puVar1 + 9);
  *(uint *)(param_5 + 0x20) = (uint)uVar2;
  uVar3 = FUN_14515bb80(puVar1 + 0xc);
  *(undefined2 *)(param_5 + 0x26) = uVar3;
  uVar3 = FUN_14515bb80(puVar1 + 0xe);
  *(undefined2 *)(param_5 + 0x28) = uVar3;
  uVar3 = FUN_14515bb80(puVar1 + 0x10);
  *(undefined2 *)(param_5 + 0x2a) = uVar3;
  uVar3 = FUN_14515bb80(puVar1 + 0x12);
  *(undefined2 *)(param_5 + 0x2c) = uVar3;
  uVar3 = FUN_14515bb80(puVar1 + 0x14);
  *(undefined2 *)(param_5 + 0x2e) = uVar3;
  uVar3 = FUN_14515bb80(puVar1 + 0x16);
  *(undefined2 *)(param_5 + 0x30) = uVar3;
  *(undefined1 *)(param_5 + 0x24) = puVar1[0xb];
  if (puVar1[0x20] == '\x02') {
    uVar6 = 0x2a;
  }
  else {
    uVar6 = 0x21;
    if (puVar1[0x20] == '\x03') {
      uVar6 = 0x33;
    }
  }
  *(undefined1 *)(param_5 + 0x32) = 0;
  *(undefined1 *)(param_5 + 0x33) = puVar1[(ulonglong)uVar6 + 1];
  *(undefined1 *)(param_5 + 0x34) = puVar1[(ulonglong)uVar6 + 5];
  uVar3 = FUN_14515baf0(puVar1 + (uVar6 + 2),0,0xc,0);
  *(undefined2 *)(param_5 + 0x36) = uVar3;
  uVar3 = FUN_14515baf0(puVar1 + (uVar6 + 3),4,0xc,0);
  *(undefined2 *)(param_5 + 0x38) = uVar3;
  uVar3 = FUN_14515baf0(puVar1 + (uVar6 + 6),0,0xc,0);
  *(undefined2 *)(param_5 + 0x3a) = uVar3;
  uVar3 = FUN_14515baf0(puVar1 + (uVar6 + 7),4,0xc,0);
  *(undefined2 *)(param_5 + 0x3c) = uVar3;
  *(undefined2 *)(param_5 + 0x12) = 0;
  return;
}



// FUNCTION 145165b50 FUN_145165b50 body=1132 status=ok
// SIG undefined FUN_145165b50(void)

void FUN_145165b50(longlong param_1,longlong param_2,undefined8 param_3,ulonglong param_4,
                  longlong param_5)

{
  byte bVar1;
  char cVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  byte bVar5;
  uint *puVar6;
  uint *puVar7;
  
  param_2 = (param_4 & 0xff) + param_2;
  switch(*(byte *)(param_2 + 8) & 0xf) {
  case 0:
    *(uint *)(param_5 + 0x14) = *(uint *)(param_5 + 0x14) | 0x10;
    break;
  case 1:
    *(uint *)(param_5 + 0x14) = *(uint *)(param_5 + 0x14) | 0x30;
    break;
  case 2:
    *(uint *)(param_5 + 0x14) = *(uint *)(param_5 + 0x14) | 0x20;
    break;
  case 3:
    *(uint *)(param_5 + 0x14) = *(uint *)(param_5 + 0x14) | 0x60;
    break;
  case 4:
    *(uint *)(param_5 + 0x14) = *(uint *)(param_5 + 0x14) | 0x40;
    break;
  case 5:
    *(undefined4 *)(param_5 + 0x14) = 0xc0;
    break;
  case 6:
    *(undefined4 *)(param_5 + 0x14) = 0x80;
    break;
  case 7:
    *(undefined4 *)(param_5 + 0x14) = 0x90;
  }
  puVar6 = (uint *)(param_5 + 0x14);
  if ((*(byte *)(param_2 + 8) & 0x10) != 0) {
    *puVar6 = *puVar6 | 0x8000;
  }
  if ((*(byte *)(param_2 + 8) & 0x20) != 0) {
    *puVar6 = *puVar6 | 0x4000;
  }
  if ((*(byte *)(param_2 + 8) & 0x40) != 0) {
    *puVar6 = *puVar6 | 0x2000;
  }
  puVar7 = (uint *)(param_5 + 0x14);
  if (*(char *)(param_2 + 8) < '\0') {
    *puVar7 = *puVar6 | 0x1000;
  }
  if ((*(byte *)(param_2 + 9) & 1) != 0) {
    *puVar7 = *puVar7 | 0x400;
  }
  puVar6 = (uint *)(param_5 + 0x14);
  if ((*(byte *)(param_2 + 9) & 2) != 0) {
    *puVar6 = *puVar7 | 0x800;
  }
  if ((*(byte *)(param_2 + 9) & 4) != 0) {
    *puVar6 = *puVar6 | 0x100;
  }
  puVar7 = (uint *)(param_5 + 0x14);
  if ((*(byte *)(param_2 + 9) & 8) != 0) {
    *puVar7 = *puVar6 | 0x200;
  }
  if ((*(byte *)(param_2 + 9) & 0x10) != 0) {
    *puVar7 = *puVar7 | 1;
  }
  puVar6 = (uint *)(param_5 + 0x14);
  if ((*(byte *)(param_2 + 9) & 0x20) != 0) {
    *puVar6 = *puVar7 | 8;
  }
  if ((*(byte *)(param_2 + 9) & 0x40) != 0) {
    *puVar6 = *puVar6 | 2;
  }
  puVar7 = (uint *)(param_5 + 0x14);
  if (*(char *)(param_2 + 9) < '\0') {
    *puVar7 = *puVar6 | 4;
  }
  if ((*(byte *)(param_2 + 10) & 2) != 0) {
    *puVar7 = *puVar7 | 0x100000;
  }
  puVar6 = (uint *)(param_5 + 0x14);
  if ((*(byte *)(param_2 + 10) & 1) != 0) {
    *puVar6 = *puVar7 | 0x10000;
  }
  if ((*(byte *)(param_2 + 10) & 4) != 0) {
    *puVar6 = *puVar6 | 0x200000;
  }
  *(undefined1 *)(param_5 + 0x18) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)(param_5 + 0x19) = *(undefined1 *)(param_2 + 2);
  *(undefined1 *)(param_5 + 0x1a) = *(undefined1 *)(param_2 + 3);
  *(undefined1 *)(param_5 + 0x1b) = *(undefined1 *)(param_2 + 4);
  *(undefined1 *)(param_5 + 0x1c) = *(undefined1 *)(param_2 + 5);
  *(undefined1 *)(param_5 + 0x1d) = *(undefined1 *)(param_2 + 6);
  *(undefined1 *)(param_5 + 0x10) = *(undefined1 *)(param_2 + 7);
  *(undefined1 *)(param_5 + 0x11) = *(undefined1 *)(param_2 + 0x35);
  *(undefined1 *)(param_5 + 0x12) = *(undefined1 *)(param_2 + 0x36);
  *(undefined1 *)(param_5 + 0x13) = *(undefined1 *)(param_2 + 0x37);
  uVar4 = FUN_14515bb90(param_2 + 0x1c);
  *(undefined4 *)(param_5 + 0x20) = uVar4;
  uVar3 = FUN_14515bb80(param_2 + 0x10);
  *(undefined2 *)(param_5 + 0x26) = uVar3;
  uVar3 = FUN_14515bb80(param_2 + 0x12);
  *(undefined2 *)(param_5 + 0x28) = uVar3;
  uVar3 = FUN_14515bb80(param_2 + 0x14);
  *(undefined2 *)(param_5 + 0x2a) = uVar3;
  uVar3 = FUN_14515bb80(param_2 + 0x16);
  *(undefined2 *)(param_5 + 0x2c) = uVar3;
  uVar3 = FUN_14515bb80(param_2 + 0x18);
  *(undefined2 *)(param_5 + 0x2e) = uVar3;
  uVar3 = FUN_14515bb80(param_2 + 0x1a);
  *(undefined2 *)(param_5 + 0x30) = uVar3;
  *(undefined1 *)(param_5 + 0x24) = *(undefined1 *)(param_2 + 0x20);
  *(undefined1 *)(param_5 + 0x32) = 0;
  *(undefined1 *)(param_5 + 0x33) = *(undefined1 *)(param_2 + 0x21);
  *(undefined1 *)(param_5 + 0x34) = *(undefined1 *)(param_2 + 0x25);
  uVar3 = FUN_14515baf0(param_2 + 0x22,0,0xc,0);
  *(undefined2 *)(param_5 + 0x36) = uVar3;
  uVar3 = FUN_14515baf0(param_2 + 0x23,4,0xc,0);
  *(undefined2 *)(param_5 + 0x38) = uVar3;
  uVar3 = FUN_14515baf0(param_2 + 0x26,0,0xc,0);
  *(undefined2 *)(param_5 + 0x3a) = uVar3;
  uVar3 = FUN_14515baf0(param_2 + 0x27,4,0xc,0);
  *(undefined2 *)(param_5 + 0x3c) = uVar3;
  *(undefined1 *)(param_5 + 0x3f) = *(undefined1 *)(param_2 + 0x2a);
  *(undefined1 *)(param_5 + 0x3e) = *(undefined1 *)(param_2 + 0x2b);
  *(undefined1 *)(param_5 + 0x40) = *(undefined1 *)(param_2 + 0x30);
  if ((param_1 != 0) &&
     (cVar2 = FUN_14515bd00(*(undefined2 *)(param_1 + 0x20),*(undefined2 *)(param_1 + 0x22)),
     cVar2 != '\0')) {
    switch(*(byte *)(param_2 + 0x33) & 0xf) {
    case 0:
      *(uint *)(param_5 + 0x44) = *(uint *)(param_5 + 0x44) | 0x10;
      break;
    case 1:
      *(uint *)(param_5 + 0x44) = *(uint *)(param_5 + 0x44) | 0x30;
      break;
    case 2:
      *(uint *)(param_5 + 0x44) = *(uint *)(param_5 + 0x44) | 0x20;
      break;
    case 3:
      *(uint *)(param_5 + 0x44) = *(uint *)(param_5 + 0x44) | 0x60;
      break;
    case 4:
      *(uint *)(param_5 + 0x44) = *(uint *)(param_5 + 0x44) | 0x40;
      break;
    case 5:
      *(undefined4 *)(param_5 + 0x44) = 0xc0;
      break;
    case 6:
      *(undefined4 *)(param_5 + 0x44) = 0x80;
      break;
    case 7:
      *(undefined4 *)(param_5 + 0x44) = 0x90;
    }
    puVar6 = (uint *)(param_5 + 0x44);
    if ((*(byte *)(param_2 + 0x33) & 0x10) != 0) {
      *puVar6 = *puVar6 | 0x8000;
    }
    if ((*(byte *)(param_2 + 0x33) & 0x20) != 0) {
      *puVar6 = *puVar6 | 0x4000;
    }
    if ((*(byte *)(param_2 + 0x33) & 0x40) != 0) {
      *puVar6 = *puVar6 | 0x2000;
    }
    puVar7 = (uint *)(param_5 + 0x44);
    if (*(char *)(param_2 + 0x33) < '\0') {
      *puVar7 = *puVar6 | 0x1000;
    }
    if (*(char *)(param_2 + 0x34) < '\0') {
      *puVar7 = *puVar7 | 8;
    }
    puVar6 = (uint *)(param_5 + 0x44);
    if ((*(byte *)(param_2 + 0x34) & 0x40) != 0) {
      *puVar6 = *puVar7 | 1;
    }
    if ((*(byte *)(param_2 + 0x34) & 0x20) != 0) {
      *puVar6 = *puVar6 | 0x10000;
    }
    bVar5 = *(byte *)(param_2 + 0x31);
    *(byte *)(param_5 + 0x55) = bVar5 >> 7;
    bVar5 = bVar5 & 3;
    *(byte *)(param_5 + 0x56) = *(byte *)(param_2 + 0x31) >> 4 & 7;
    *(byte *)(param_5 + 0x57) = *(byte *)(param_2 + 0x31) >> 3 & 1;
    *(byte *)(param_5 + 0x58) = *(byte *)(param_2 + 0x31) >> 2 & 1;
    bVar1 = *(byte *)(param_2 + 0x34);
    *(byte *)(param_5 + 0x54) = bVar5;
    *(byte *)(param_5 + 0x5b) = bVar1 >> 1 & 3;
    bVar1 = *(byte *)(param_2 + 0x32);
    *(undefined4 *)(param_5 + 0x48) = 0x80808080;
    *(undefined4 *)(param_5 + 0x4c) = 0x80808080;
    if (bVar5 != 0) {
      if (((bVar5 != 3) && ((bVar1 & 3) == 0)) && ((bVar1 & 0xc) == 0)) {
        *(undefined1 *)(param_5 + 0x48) = *(undefined1 *)(param_2 + 0x10);
        *(undefined1 *)(param_5 + 0x49) = *(undefined1 *)(param_2 + 0x11);
        *(undefined1 *)(param_5 + 0x4a) = *(undefined1 *)(param_2 + 0x12);
        *(undefined1 *)(param_5 + 0x4b) = *(undefined1 *)(param_2 + 0x13);
        *(undefined1 *)(param_5 + 0x4c) = *(undefined1 *)(param_2 + 0x14);
        *(undefined1 *)(param_5 + 0x4d) = *(undefined1 *)(param_2 + 0x15);
        *(undefined1 *)(param_5 + 0x4e) = *(undefined1 *)(param_2 + 0x16);
        *(undefined1 *)(param_5 + 0x4f) = *(undefined1 *)(param_2 + 0x17);
      }
      *(undefined1 *)(param_5 + 0x50) = *(undefined1 *)(param_2 + 0x18);
      *(undefined1 *)(param_5 + 0x51) = *(undefined1 *)(param_2 + 0x19);
      *(undefined1 *)(param_5 + 0x52) = *(undefined1 *)(param_2 + 0x1a);
      *(undefined1 *)(param_5 + 0x53) = *(undefined1 *)(param_2 + 0x1b);
    }
  }
  return;
}



// FUNCTION 145166000 FUN_145166000 body=608 status=ok
// SIG undefined FUN_145166000(void)

void FUN_145166000(undefined8 param_1,longlong param_2,undefined8 param_3,byte param_4,
                  longlong param_5)

{
  ushort uVar1;
  uint *puVar2;
  uint *puVar3;
  
  param_2 = (ulonglong)param_4 + param_2;
  switch(*(byte *)(param_2 + 8) & 0xf) {
  case 0:
    *(uint *)(param_5 + 0x14) = *(uint *)(param_5 + 0x14) | 0x10;
    break;
  case 1:
    *(uint *)(param_5 + 0x14) = *(uint *)(param_5 + 0x14) | 0x30;
    break;
  case 2:
    *(uint *)(param_5 + 0x14) = *(uint *)(param_5 + 0x14) | 0x20;
    break;
  case 3:
    *(uint *)(param_5 + 0x14) = *(uint *)(param_5 + 0x14) | 0x60;
    break;
  case 4:
    *(uint *)(param_5 + 0x14) = *(uint *)(param_5 + 0x14) | 0x40;
    break;
  case 5:
    *(undefined4 *)(param_5 + 0x14) = 0xc0;
    break;
  case 6:
    *(undefined4 *)(param_5 + 0x14) = 0x80;
    break;
  case 7:
    *(undefined4 *)(param_5 + 0x14) = 0x90;
  }
  puVar3 = (uint *)(param_5 + 0x14);
  if ((*(byte *)(param_2 + 8) & 0x10) != 0) {
    *puVar3 = *puVar3 | 0x8000;
  }
  if ((*(byte *)(param_2 + 8) & 0x20) != 0) {
    *puVar3 = *puVar3 | 0x4000;
  }
  if ((*(byte *)(param_2 + 8) & 0x40) != 0) {
    *puVar3 = *puVar3 | 0x2000;
  }
  puVar2 = (uint *)(param_5 + 0x14);
  if (*(char *)(param_2 + 8) < '\0') {
    *puVar2 = *puVar3 | 0x1000;
  }
  if ((*(byte *)(param_2 + 9) & 1) != 0) {
    *puVar2 = *puVar2 | 0x400;
  }
  puVar3 = (uint *)(param_5 + 0x14);
  if ((*(byte *)(param_2 + 9) & 2) != 0) {
    *puVar3 = *puVar2 | 0x800;
  }
  if ((*(byte *)(param_2 + 9) & 4) != 0) {
    *puVar3 = *puVar3 | 0x100;
  }
  puVar2 = (uint *)(param_5 + 0x14);
  if ((*(byte *)(param_2 + 9) & 8) != 0) {
    *puVar2 = *puVar3 | 0x200;
  }
  if ((*(byte *)(param_2 + 9) & 0x10) != 0) {
    *puVar2 = *puVar2 | 1;
  }
  puVar3 = (uint *)(param_5 + 0x14);
  if ((*(byte *)(param_2 + 9) & 0x20) != 0) {
    *puVar3 = *puVar2 | 8;
  }
  if ((*(byte *)(param_2 + 9) & 0x40) != 0) {
    *puVar3 = *puVar3 | 2;
  }
  puVar2 = (uint *)(param_5 + 0x14);
  if (*(char *)(param_2 + 9) < '\0') {
    *puVar2 = *puVar3 | 4;
  }
  if ((*(byte *)(param_2 + 10) & 2) != 0) {
    *puVar2 = *puVar2 | 0x100000;
  }
  puVar3 = (uint *)(param_5 + 0x14);
  if ((*(byte *)(param_2 + 10) & 1) != 0) {
    *puVar3 = *puVar2 | 0x10000;
  }
  if ((*(byte *)(param_2 + 10) & 4) != 0) {
    *puVar3 = *puVar3 | 0x200000;
  }
  *(undefined1 *)(param_5 + 0x18) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)(param_5 + 0x19) = *(undefined1 *)(param_2 + 2);
  *(undefined1 *)(param_5 + 0x1a) = *(undefined1 *)(param_2 + 3);
  *(undefined1 *)(param_5 + 0x1b) = *(undefined1 *)(param_2 + 4);
  *(undefined1 *)(param_5 + 0x1c) = *(undefined1 *)(param_2 + 5);
  *(undefined1 *)(param_5 + 0x1d) = *(undefined1 *)(param_2 + 6);
  uVar1 = FUN_14515bbb0(param_2 + 0x10);
  *(ushort *)(param_5 + 0x5c) = uVar1 & 0xff0f;
  uVar1 = FUN_14515bbb0(param_2 + 0x2d);
  *(ushort *)(param_5 + 0x5e) = uVar1 & 0xfffc;
  *(undefined1 *)(param_5 + 0x60) = *(undefined1 *)(param_2 + 0x12);
  *(undefined1 *)(param_5 + 0x61) = *(undefined1 *)(param_2 + 0x13);
  *(undefined1 *)(param_5 + 0x62) = *(undefined1 *)(param_2 + 0x14);
  *(undefined1 *)(param_5 + 99) = *(undefined1 *)(param_2 + 0x15);
  *(undefined1 *)(param_5 + 100) = *(undefined1 *)(param_2 + 0x16);
  *(undefined1 *)(param_5 + 0x65) = *(undefined1 *)(param_2 + 0x17);
  *(undefined1 *)(param_5 + 0x66) = *(undefined1 *)(param_2 + 0x18);
  *(undefined1 *)(param_5 + 0x67) = *(undefined1 *)(param_2 + 0x19);
  *(undefined1 *)(param_5 + 0x68) = *(undefined1 *)(param_2 + 0x1a);
  *(undefined1 *)(param_5 + 0x69) = *(undefined1 *)(param_2 + 0x1b);
  *(byte *)(param_5 + 0x6e) = *(byte *)(param_5 + 0x5c) & 8;
  *(undefined1 *)(param_5 + 0x6a) = *(undefined1 *)(param_2 + 0x2b);
  *(undefined1 *)(param_5 + 0x6b) = *(undefined1 *)(param_2 + 0x2c);
  *(undefined1 *)(param_5 + 0x6c) = *(undefined1 *)(param_2 + 0x2f);
  *(undefined1 *)(param_5 + 0x6d) = *(undefined1 *)(param_2 + 0x30);
  *(byte *)(param_5 + 0x6f) = *(byte *)(param_2 + 0x2a) & 3;
  *(undefined1 *)(param_5 + 0x10) = *(undefined1 *)(param_2 + 7);
  *(undefined1 *)(param_5 + 0x11) = *(undefined1 *)(param_2 + 0x25);
  return;
}



// FUNCTION 145166280 FUN_145166280 body=457 status=ok
// SIG undefined FUN_145166280(void)

ulonglong FUN_145166280(longlong param_1,longlong param_2,ushort param_3)

{
  bool bVar1;
  char cVar2;
  short *psVar3;
  uint uVar4;
  short *psVar5;
  byte bVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar6;
  
  uVar10 = 0;
  cVar2 = FUN_14515bc60(*(undefined2 *)(param_1 + 0x20),*(undefined2 *)(param_1 + 0x22));
  uVar4 = (uint)param_3;
  if (cVar2 == '\0') {
    cVar2 = FUN_14515bd30(*(undefined2 *)(param_1 + 0x20),*(undefined2 *)(param_1 + 0x22));
    if ((cVar2 == '\0') &&
       (cVar2 = FUN_14515bd60(*(undefined2 *)(param_1 + 0x20),*(undefined2 *)(param_1 + 0x22)),
       cVar2 == '\0')) {
      return 0;
    }
    uVar8 = (uint)param_3;
    if (uVar4 != 0) {
      psVar3 = (short *)(param_2 + 0x14);
      uVar6 = uVar10;
      do {
        if ((((psVar3[-10] == -0x100) && (psVar3[0x12] == 0x2d)) && (*psVar3 == 2)) &&
           ((char)psVar3[-9] == -0x7b)) {
          bVar1 = false;
          goto LAB_1451663ed;
        }
        uVar4 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar4;
        psVar3 = psVar3 + 0x24;
      } while ((int)uVar4 < (int)uVar8);
    }
    bVar1 = true;
    if (uVar8 != 0) {
LAB_1451663ed:
      psVar3 = (short *)(param_2 + 0x14);
      do {
        if (((psVar3[-10] == -0x100) && (psVar3[0x12] == 0x26)) &&
           ((*psVar3 == 0x3f && ((char)psVar3[-9] == ' ')))) {
          if (!bVar1) {
            return 0;
          }
          goto LAB_14516642d;
        }
        uVar4 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar4;
        psVar3 = psVar3 + 0x24;
      } while ((int)uVar4 < (int)uVar8);
      if (!bVar1) goto LAB_14516641a;
    }
LAB_14516642d:
    uVar10 = 1;
  }
  else {
    if (0x12 < *(int *)(param_1 + 0x24)) {
      psVar3 = (short *)(param_2 + 0x14);
      psVar5 = psVar3;
      uVar9 = uVar10;
      uVar6 = uVar10;
      if (uVar4 != 0) {
        do {
          if (((psVar5[-10] == -0xfc) && (psVar5[0x12] == 0x27)) &&
             ((*psVar5 == 0x34 && ((char)psVar5[-9] == '\x06')))) {
            bVar7 = 1;
            goto LAB_145166310;
          }
          uVar8 = (int)uVar9 + 1;
          psVar5 = psVar5 + 0x24;
          uVar9 = (ulonglong)uVar8;
        } while ((int)uVar8 < (int)uVar4);
      }
      bVar7 = 0;
      if (param_3 != 0) {
LAB_145166310:
        do {
          if ((((psVar3[-10] == -0x80) && (psVar3[0x12] == 0x43)) && (*psVar3 == 0x30)) &&
             ((char)psVar3[-9] == -0x5d)) goto LAB_145166340;
          uVar8 = (int)uVar6 + 1;
          psVar3 = psVar3 + 0x24;
          uVar6 = (ulonglong)uVar8;
        } while ((int)uVar8 < (int)uVar4);
      }
      if (bVar7 != 0) {
LAB_145166340:
        psVar3 = (short *)(param_2 + 0x14);
        if (bVar7 != 1) {
          if (uVar4 != 0) {
            do {
              if (((psVar3[-10] == -0xfe) && (psVar3[0x12] == 0x22)) && (*psVar3 == 0x16)) break;
              uVar10 = uVar10 + 1;
              psVar3 = psVar3 + 0x24;
            } while ((longlong)uVar10 < (longlong)(ulonglong)param_3);
          }
          return (ulonglong)bVar7;
        }
      }
    }
LAB_14516641a:
    uVar10 = 0xffffffff;
  }
  return uVar10;
}



// FUNCTION 145166450 FUN_145166450 body=345 status=ok
// SIG undefined FUN_145166450(void)

undefined4 FUN_145166450(longlong param_1,undefined1 *param_2,ulonglong param_3,char param_4)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  
  cVar2 = FUN_14515bc60(*(undefined2 *)(param_1 + 0x20),*(undefined2 *)(param_1 + 0x22),
                        *(undefined4 *)(param_1 + 0x24));
  if (cVar2 == '\0') {
    cVar2 = FUN_14515bd30(*(undefined2 *)(param_1 + 0x20));
    if ((cVar2 == '\0') && (cVar2 = FUN_14515bd60(*(undefined2 *)(param_1 + 0x20)), cVar2 == '\0'))
    {
      return 0;
    }
    memset(param_2,0,param_3 & 0xffffffff);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *param_2 = 0x20;
    cVar2 = HidD_GetFeature(uVar1,param_2,0x40);
    if (cVar2 == '\0') {
      GetLastError();
      goto LAB_145166571;
    }
    if (param_4 == '\0') goto LAB_1451664fb;
    cVar2 = FUN_145168570(0xa3,param_2,0x40);
  }
  else {
    memset(param_2,0,param_3 & 0xffffffff);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    if (param_4 == '\0') {
      *param_2 = 0xa3;
      uVar4 = 0x31;
    }
    else {
      *param_2 = 6;
      uVar4 = 0x35;
    }
    cVar2 = HidD_GetFeature(uVar1,param_2,uVar4);
    iVar3 = -0x7ffeffd5;
    if (cVar2 == '\0') {
      GetLastError();
    }
    else {
      iVar3 = 0;
    }
    if (iVar3 != 0) {
LAB_145166571:
      GetLastError();
      return 0xffffffff;
    }
    if (param_4 == '\0') goto LAB_1451664fb;
    cVar2 = FUN_145168570(0xa3,param_2,0x35);
  }
  if (cVar2 != '\0') {
    return 0xffffffff;
  }
LAB_1451664fb:
  FUN_1451654d0(param_1,param_2);
  return 0;
}



// FUNCTION 1451665b0 FUN_1451665b0 body=449 status=ok
// SIG undefined FUN_1451665b0(void)

void FUN_1451665b0(longlong param_1,undefined1 param_2,undefined1 param_3,undefined1 *param_4,
                  uint param_5)

{
  undefined1 uVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined1 *_Dst;
  undefined1 *puVar6;
  ulonglong uVar7;
  undefined1 auStack_a8 [32];
  undefined8 local_88 [2];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((((2 < param_5) && (param_1 != 0)) &&
      ((cVar3 = FUN_14515bcd0(*(undefined2 *)(param_1 + 0x20),*(undefined2 *)(param_1 + 0x22)),
       cVar3 != '\0' ||
       (cVar3 = FUN_14515bd00(*(undefined2 *)(param_1 + 0x20),*(undefined2 *)(param_1 + 0x22)),
       cVar3 != '\0')))) &&
     ((lVar2 = *(longlong *)(param_1 + 0x10), lVar2 != 0 &&
      (cVar3 = HidD_GetPreparsedData(lVar2,local_88), cVar3 != '\0')))) {
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    iVar4 = HidP_GetCaps(local_88[0]);
    if (iVar4 == 0x110000) {
      uVar5 = (uint)(ushort)uStack_70;
      if (param_5 <= uVar5) {
        if (DAT_14c7fb8a8 == (code *)0x0) {
          _Dst = malloc((ulonglong)uVar5);
        }
        else {
          _Dst = (undefined1 *)(*DAT_14c7fb8a8)();
        }
        if (_Dst != (undefined1 *)0x0) {
          memset(_Dst,0,(ulonglong)uVar5);
          *_Dst = 0x80;
          _Dst[1] = param_2;
          _Dst[2] = param_3;
          if (3 < param_5) {
            puVar6 = _Dst + 3;
            uVar7 = (ulonglong)(param_5 - 3);
            do {
              uVar1 = *param_4;
              param_4 = param_4 + 1;
              *puVar6 = uVar1;
              puVar6 = puVar6 + 1;
              uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
          }
          cVar3 = HidD_SetFeature(lVar2,_Dst,0x40);
          if (cVar3 == '\0') {
            GetLastError();
          }
          if (DAT_14c7fb8a0 == (code *)0x0) {
            free(_Dst);
          }
          else {
            (*DAT_14c7fb8a0)();
          }
        }
      }
      HidD_FreePreparsedData(local_88[0]);
    }
    else {
      HidD_FreePreparsedData(local_88[0]);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_a8);
}



// FUNCTION 145166790 FUN_145166790 body=251 status=ok
// SIG undefined FUN_145166790(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145166790(uint *param_1,HDEVINFO param_2,DWORD param_3)

{
  DWORD DVar1;
  BOOL BVar2;
  undefined1 auStackY_2098 [32];
  DWORD local_2058;
  DWORD local_2054;
  _SP_DEVINFO_DATA local_2050;
  wchar_t local_2028 [4096];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x14516679f;
  local_28 = DAT_14c707940 ^ (ulonglong)auStackY_2098;
  local_2050.ClassGuid.Data2 = 0;
  local_2050.ClassGuid.Data3 = 0;
  local_2050.ClassGuid.Data4[0] = '\0';
  local_2050.ClassGuid.Data4[1] = '\0';
  local_2050.ClassGuid.Data4[2] = '\0';
  local_2050.ClassGuid.Data4[3] = '\0';
  local_2050.cbSize = 0x20;
  local_2050.ClassGuid.Data1 = 0;
  local_2050.ClassGuid.Data4[4] = '\0';
  local_2050.ClassGuid.Data4[5] = '\0';
  local_2050.ClassGuid.Data4[6] = '\0';
  local_2050.ClassGuid.Data4[7] = '\0';
  local_2050.DevInst = 0;
  local_2050.Reserved = 0;
  memset(local_2028,0,0x2000);
  SetupDiEnumDeviceInfo(param_2,param_3,&local_2050);
  local_2058 = 0;
  BVar2 = SetupDiGetDeviceRegistryPropertyW
                    (param_2,&local_2050,0x24,&local_2054,(PBYTE)local_2028,0x2000,&local_2058);
  DVar1 = local_2058;
  if (BVar2 != 0) {
    memset(param_1 + 1,0,(ulonglong)local_2058);
    *param_1 = DVar1;
    wcsncpy_s((wchar_t *)(param_1 + 1),(ulonglong)DVar1,local_2028,0xffffffffffffffff);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStackY_2098);
}



// FUNCTION 1451668a0 FUN_1451668a0 body=367 status=ok
// SIG undefined FUN_1451668a0(void)

void FUN_1451668a0(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  void *_Memory;
  short *psVar3;
  undefined1 auStack_88 [32];
  ushort local_68 [4];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar1 = HidD_GetPreparsedData(param_1,&local_60);
  if (cVar1 != '\0') {
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
    uStack_20 = 0;
    iVar2 = HidP_GetCaps(local_60,&local_58);
    if (iVar2 == 0x110000) {
      local_68[0] = uStack_20._4_2_;
      if (DAT_14c7fb8a8 == (code *)0x0) {
        _Memory = malloc((ulonglong)uStack_20._4_2_ * 0x48);
      }
      else {
        _Memory = (void *)(*DAT_14c7fb8a8)();
      }
      if (_Memory != (void *)0x0) {
        iVar2 = HidP_GetValueCaps(2,_Memory,local_68,local_60);
        if (iVar2 == 0x110000) {
          iVar2 = 0;
          if (local_68[0] != 0) {
            psVar3 = (short *)((longlong)_Memory + 0x14);
            do {
              if ((((psVar3[-10] == -0x100) && (psVar3[0x12] == 0x2d)) && (*psVar3 == 2)) &&
                 ((char)psVar3[-9] == -0x7b)) break;
              iVar2 = iVar2 + 1;
              psVar3 = psVar3 + 0x24;
            } while (iVar2 < (int)(uint)local_68[0]);
          }
          HidD_FreePreparsedData(local_60);
          if (DAT_14c7fb8a0 == (code *)0x0) {
            free(_Memory);
          }
          else {
            (*DAT_14c7fb8a0)();
          }
        }
        else {
          HidD_FreePreparsedData(local_60);
          if (DAT_14c7fb8a0 == (code *)0x0) {
            free(_Memory);
          }
          else {
            (*DAT_14c7fb8a0)();
          }
        }
        goto LAB_145166902;
      }
    }
    HidD_FreePreparsedData(local_60);
  }
LAB_145166902:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_88);
}



// FUNCTION 145166a20 FUN_145166a20 body=352 status=ok
// SIG undefined FUN_145166a20(void)

undefined8 FUN_145166a20(HANDLE param_1,LPVOID param_2,DWORD param_3,LPDWORD param_4,char param_5)

{
  BOOL BVar1;
  DWORD DVar2;
  int iVar3;
  DWORD DVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  LPOVERLAPPED lpOverlapped;
  DWORD local_48 [2];
  _OVERLAPPED local_40;
  
  local_40.Internal = 0;
  uVar5 = 0x8001002b;
  local_40.InternalHigh = 0;
  local_40.u.Pointer = (PVOID)0x0;
  local_40.hEvent = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
  uVar6 = uVar5;
  if (local_40.hEvent != (HANDLE)0x0) {
    lpOverlapped = &local_40;
    local_48[0] = 0;
    BVar1 = ReadFile(param_1,param_2,param_3,param_4,lpOverlapped);
    uVar6 = 0;
    if ((BVar1 == 0) && (DVar2 = GetLastError(), uVar6 = uVar5, DVar2 == 0x3e5)) {
      uVar6 = 100;
      if (param_5 != '\0') {
        uVar6 = 5000;
      }
      iVar3 = GetOverlappedResultEx
                        (param_1,&local_40,local_48,uVar6,
                         (ulonglong)lpOverlapped & 0xffffffff00000000);
      if (iVar3 == 0) {
        DVar2 = GetLastError();
        local_48[1] = 0;
        BVar1 = CancelIoEx(param_1,&local_40);
        if ((BVar1 == 1) || (DVar4 = GetLastError(), DVar4 != 0x490)) {
          GetOverlappedResult(param_1,&local_40,local_48 + 1,1);
          GetLastError();
        }
        uVar6 = uVar5;
        if ((param_5 == '\0') && (DVar2 == 0x102)) {
          uVar6 = 0x80010041;
        }
      }
      else {
        *param_4 = local_48[0];
        uVar6 = 0;
      }
    }
    if (local_40.hEvent != (HANDLE)0x0) {
      CloseHandle(local_40.hEvent);
    }
  }
  return uVar6;
}



// FUNCTION 145166b80 FUN_145166b80 body=85 status=ok
// SIG undefined FUN_145166b80(void)

void FUN_145166b80(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x10);
  *(longlong *)(param_2 + 0x10) = *plVar1;
  if (*(char *)(*plVar1 + 0x19) == '\0') {
    *(longlong *)(*plVar1 + 8) = param_2;
  }
  plVar1[1] = *(longlong *)(param_2 + 8);
  if (param_2 == *(longlong *)(*param_1 + 8)) {
    *(longlong **)(*param_1 + 8) = plVar1;
    *plVar1 = param_2;
    *(longlong **)(param_2 + 8) = plVar1;
    return;
  }
  plVar2 = *(longlong **)(param_2 + 8);
  if (param_2 == *plVar2) {
    *plVar2 = (longlong)plVar1;
    *plVar1 = param_2;
    *(longlong **)(param_2 + 8) = plVar1;
    return;
  }
  plVar2[2] = (longlong)plVar1;
  *plVar1 = param_2;
  *(longlong **)(param_2 + 8) = plVar1;
  return;
}



// FUNCTION 145166be0 FUN_145166be0 body=89 status=ok
// SIG undefined FUN_145166be0(void)

void FUN_145166be0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_2;
  *param_2 = *(longlong *)(lVar1 + 0x10);
  if (*(char *)(*(longlong *)(lVar1 + 0x10) + 0x19) == '\0') {
    *(longlong **)(*(longlong *)(lVar1 + 0x10) + 8) = param_2;
  }
  *(longlong *)(lVar1 + 8) = param_2[1];
  if (param_2 == *(longlong **)(*param_1 + 8)) {
    *(longlong *)(*param_1 + 8) = lVar1;
    *(longlong **)(lVar1 + 0x10) = param_2;
    param_2[1] = lVar1;
    return;
  }
  plVar2 = (longlong *)param_2[1];
  if (param_2 == (longlong *)plVar2[2]) {
    plVar2[2] = lVar1;
    *(longlong **)(lVar1 + 0x10) = param_2;
    param_2[1] = lVar1;
    return;
  }
  *plVar2 = lVar1;
  *(longlong **)(lVar1 + 0x10) = param_2;
  param_2[1] = lVar1;
  return;
}



// FUNCTION 145166c40 FUN_145166c40 body=972 status=ok
// SIG undefined FUN_145166c40(void)

longlong * FUN_145166c40(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  plVar4 = (longlong *)param_2[2];
  plVar5 = param_2 + 2;
  if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
    cVar1 = *(char *)(*plVar4 + 0x19);
    plVar6 = (longlong *)*plVar4;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*plVar6 + 0x19);
      plVar4 = plVar6;
      plVar6 = (longlong *)*plVar6;
    }
  }
  else {
    cVar1 = *(char *)(param_2[1] + 0x19);
    plVar7 = (longlong *)param_2[1];
    plVar6 = param_2;
    while ((plVar4 = plVar7, cVar1 == '\0' && (plVar6 == (longlong *)plVar4[2]))) {
      cVar1 = *(char *)(plVar4[1] + 0x19);
      plVar7 = (longlong *)plVar4[1];
      plVar6 = plVar4;
    }
  }
  plVar8 = param_2 + 1;
  plVar6 = (longlong *)*param_2;
  plVar7 = (longlong *)*plVar5;
  if (((*(char *)((longlong)plVar6 + 0x19) == '\0') &&
      (plVar7 = plVar6, *(char *)(*plVar5 + 0x19) == '\0')) &&
     (plVar7 = (longlong *)plVar4[2], plVar4 != param_2)) {
    plVar6[1] = (longlong)plVar4;
    *plVar4 = *param_2;
    plVar6 = plVar4;
    if (plVar4 != (longlong *)*plVar5) {
      plVar6 = (longlong *)plVar4[1];
      if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
        plVar7[1] = (longlong)plVar6;
      }
      *plVar6 = (longlong)plVar7;
      plVar4[2] = *plVar5;
      *(longlong **)(*plVar5 + 8) = plVar4;
    }
    if (*(longlong **)(*param_1 + 8) == param_2) {
      *(longlong **)(*param_1 + 8) = plVar4;
    }
    else {
      puVar3 = (undefined8 *)*plVar8;
      if ((longlong *)*puVar3 == param_2) {
        *puVar3 = plVar4;
      }
      else {
        puVar3[2] = plVar4;
      }
    }
    lVar2 = plVar4[3];
    plVar4[1] = *plVar8;
    *(char *)(plVar4 + 3) = (char)param_2[3];
    *(char *)(param_2 + 3) = (char)lVar2;
  }
  else {
    plVar6 = (longlong *)*plVar8;
    if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
      plVar7[1] = (longlong)plVar6;
    }
    if (*(longlong **)(*param_1 + 8) == param_2) {
      *(longlong **)(*param_1 + 8) = plVar7;
    }
    else if ((longlong *)*plVar6 == param_2) {
      *plVar6 = (longlong)plVar7;
    }
    else {
      plVar6[2] = (longlong)plVar7;
    }
    if (*(longlong **)*param_1 == param_2) {
      plVar5 = plVar6;
      if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
        cVar1 = *(char *)(*plVar7 + 0x19);
        plVar4 = (longlong *)*plVar7;
        plVar5 = plVar7;
        while (plVar8 = plVar4, cVar1 == '\0') {
          plVar4 = (longlong *)*plVar8;
          cVar1 = *(char *)((longlong)plVar4 + 0x19);
          plVar5 = plVar8;
        }
      }
      *(longlong **)*param_1 = plVar5;
    }
    lVar2 = *param_1;
    if (*(longlong **)(lVar2 + 0x10) == param_2) {
      if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
        cVar1 = *(char *)(plVar7[2] + 0x19);
        plVar5 = (longlong *)plVar7[2];
        plVar4 = plVar7;
        while (plVar8 = plVar5, cVar1 == '\0') {
          plVar5 = (longlong *)plVar8[2];
          cVar1 = *(char *)((longlong)plVar5 + 0x19);
          plVar4 = plVar8;
        }
        *(longlong **)(lVar2 + 0x10) = plVar4;
      }
      else {
        *(longlong **)(lVar2 + 0x10) = plVar6;
      }
    }
  }
  if ((char)param_2[3] == '\x01') {
    if ((plVar7 != *(longlong **)(*param_1 + 8)) && (plVar5 = plVar7, (char)plVar7[3] == '\x01')) {
      do {
        plVar7 = plVar6;
        plVar4 = (longlong *)*plVar7;
        if (plVar5 == plVar4) {
          plVar4 = (longlong *)plVar7[2];
          if ((char)plVar4[3] == '\0') {
            *(undefined1 *)(plVar4 + 3) = 1;
            plVar4 = (longlong *)plVar7[2];
            *(undefined1 *)(plVar7 + 3) = 0;
            plVar7[2] = *plVar4;
            if (*(char *)(*plVar4 + 0x19) == '\0') {
              *(longlong **)(*plVar4 + 8) = plVar7;
            }
            plVar6 = plVar7 + 1;
            plVar4[1] = plVar7[1];
            if (plVar7 == *(longlong **)(*param_1 + 8)) {
              *(longlong **)(*param_1 + 8) = plVar4;
              *plVar4 = (longlong)plVar7;
              *plVar6 = (longlong)plVar4;
              plVar4 = (longlong *)plVar7[2];
            }
            else {
              puVar3 = (undefined8 *)*plVar6;
              if (plVar7 == (longlong *)*puVar3) {
                *puVar3 = plVar4;
                *plVar4 = (longlong)plVar7;
                *plVar6 = (longlong)plVar4;
                plVar4 = (longlong *)plVar7[2];
              }
              else {
                puVar3[2] = plVar4;
                *plVar4 = (longlong)plVar7;
                *plVar6 = (longlong)plVar4;
                plVar4 = (longlong *)plVar7[2];
              }
            }
          }
          if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
            if ((*(char *)(*plVar4 + 0x18) != '\x01') || (*(char *)(plVar4[2] + 0x18) != '\x01')) {
              if (*(char *)(plVar4[2] + 0x18) == '\x01') {
                *(undefined1 *)(*plVar4 + 0x18) = 1;
                *(undefined1 *)(plVar4 + 3) = 0;
                FUN_145166be0(param_1,plVar4);
                plVar4 = (longlong *)plVar7[2];
              }
              *(char *)(plVar4 + 3) = (char)plVar7[3];
              *(undefined1 *)(plVar7 + 3) = 1;
              *(undefined1 *)(plVar4[2] + 0x18) = 1;
              FUN_145166b80(param_1,plVar7);
              plVar7 = plVar5;
              break;
            }
LAB_145166f80:
            *(undefined1 *)(plVar4 + 3) = 0;
          }
        }
        else {
          if ((char)plVar4[3] == '\0') {
            *(undefined1 *)(plVar4 + 3) = 1;
            lVar2 = *plVar7;
            *(undefined1 *)(plVar7 + 3) = 0;
            *plVar7 = *(longlong *)(lVar2 + 0x10);
            if (*(char *)(*(longlong *)(lVar2 + 0x10) + 0x19) == '\0') {
              *(longlong **)(*(longlong *)(lVar2 + 0x10) + 8) = plVar7;
            }
            plVar4 = plVar7 + 1;
            *(longlong *)(lVar2 + 8) = plVar7[1];
            if (plVar7 == *(longlong **)(*param_1 + 8)) {
              *(longlong *)(*param_1 + 8) = lVar2;
              *(longlong **)(lVar2 + 0x10) = plVar7;
              *plVar4 = lVar2;
              plVar4 = (longlong *)*plVar7;
            }
            else {
              plVar6 = (longlong *)*plVar4;
              if (plVar7 == (longlong *)plVar6[2]) {
                plVar6[2] = lVar2;
                *(longlong **)(lVar2 + 0x10) = plVar7;
                *plVar4 = lVar2;
                plVar4 = (longlong *)*plVar7;
              }
              else {
                *plVar6 = lVar2;
                *(longlong **)(lVar2 + 0x10) = plVar7;
                *plVar4 = lVar2;
                plVar4 = (longlong *)*plVar7;
              }
            }
          }
          if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
            if ((*(char *)(plVar4[2] + 0x18) == '\x01') && (*(char *)(*plVar4 + 0x18) == '\x01'))
            goto LAB_145166f80;
            if (*(char *)(*plVar4 + 0x18) == '\x01') {
              *(undefined1 *)(plVar4[2] + 0x18) = 1;
              *(undefined1 *)(plVar4 + 3) = 0;
              FUN_145166b80(param_1,plVar4);
              plVar4 = (longlong *)*plVar7;
            }
            *(char *)(plVar4 + 3) = (char)plVar7[3];
            *(undefined1 *)(plVar7 + 3) = 1;
            *(undefined1 *)(*plVar4 + 0x18) = 1;
            FUN_145166be0(param_1,plVar7);
            plVar7 = plVar5;
            break;
          }
        }
        if ((plVar7 == *(longlong **)(*param_1 + 8)) ||
           (plVar5 = plVar7, plVar6 = (longlong *)plVar7[1], (char)plVar7[3] != '\x01')) break;
      } while( true );
    }
    *(undefined1 *)(plVar7 + 3) = 1;
  }
  if (param_1[1] != 0) {
    param_1[1] = param_1[1] + -1;
  }
  return param_2;
}



// FUNCTION 145167010 FUN_145167010 body=603 status=ok
// SIG undefined FUN_145167010(void)

longlong * FUN_145167010(longlong *param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  param_1[1] = param_1[1] + 1;
  plVar2 = (longlong *)*param_1;
  plVar6 = (longlong *)*param_2;
  param_3[1] = (longlong)plVar6;
  if (plVar6 == plVar2) {
    *plVar2 = (longlong)param_3;
    plVar2[1] = (longlong)param_3;
    plVar2[2] = (longlong)param_3;
    *(undefined1 *)(param_3 + 3) = 1;
    return param_3;
  }
  if ((int)param_2[1] == 0) {
    plVar6[2] = (longlong)param_3;
    if (plVar6 == (longlong *)plVar2[2]) {
      plVar2[2] = (longlong)param_3;
    }
  }
  else {
    *plVar6 = (longlong)param_3;
    if (plVar6 == (longlong *)*plVar2) {
      *plVar2 = (longlong)param_3;
    }
  }
  cVar1 = *(char *)(param_3[1] + 0x18);
  plVar6 = param_3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(plVar2[1] + 0x18) = 1;
      return param_3;
    }
    plVar7 = (longlong *)plVar6[1];
    lVar3 = *(longlong *)plVar7[1];
    if (plVar7 == (longlong *)lVar3) {
      lVar3 = ((longlong *)plVar7[1])[2];
      if (*(char *)(lVar3 + 0x18) == '\0') {
        *(undefined1 *)(plVar7 + 3) = 1;
        *(undefined1 *)(lVar3 + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(plVar6[1] + 8) + 0x18) = 0;
        plVar6 = *(longlong **)(plVar6[1] + 8);
      }
      else {
        plVar8 = (longlong *)plVar7[2];
        if (plVar6 == plVar8) {
          plVar7[2] = *plVar8;
          if (*(char *)(*plVar8 + 0x19) == '\0') {
            *(longlong **)(*plVar8 + 8) = plVar7;
          }
          plVar8[1] = plVar7[1];
          if (plVar7 == (longlong *)*(longlong *)(*param_1 + 8)) {
            *(longlong **)(*param_1 + 8) = plVar8;
          }
          else {
            plVar6 = (longlong *)plVar7[1];
            if (plVar7 == (longlong *)*plVar6) {
              *plVar6 = (longlong)plVar8;
            }
            else {
              plVar6[2] = (longlong)plVar8;
            }
          }
          *plVar8 = (longlong)plVar7;
          plVar7[1] = (longlong)plVar8;
          plVar6 = plVar7;
        }
        *(undefined1 *)(plVar6[1] + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(plVar6[1] + 8) + 0x18) = 0;
        plVar7 = *(longlong **)(plVar6[1] + 8);
        plVar8 = (longlong *)*plVar7;
        *plVar7 = plVar8[2];
        if (*(char *)(plVar8[2] + 0x19) == '\0') {
          *(longlong **)(plVar8[2] + 8) = plVar7;
        }
        plVar8[1] = plVar7[1];
        if (plVar7 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar8;
          plVar8[2] = (longlong)plVar7;
        }
        else {
          plVar4 = (longlong *)plVar7[1];
          if (plVar7 == (longlong *)plVar4[2]) {
            plVar4[2] = (longlong)plVar8;
            plVar8[2] = (longlong)plVar7;
          }
          else {
            *plVar4 = (longlong)plVar8;
            plVar8[2] = (longlong)plVar7;
          }
        }
LAB_14516724d:
        plVar7[1] = (longlong)plVar8;
      }
    }
    else {
      if (*(char *)(lVar3 + 0x18) != '\0') {
        plVar8 = (longlong *)*plVar7;
        if (plVar6 == plVar8) {
          *plVar7 = plVar8[2];
          if (*(char *)(plVar8[2] + 0x19) == '\0') {
            *(longlong **)(plVar8[2] + 8) = plVar7;
          }
          plVar8[1] = plVar7[1];
          if (plVar7 == (longlong *)*(longlong *)(*param_1 + 8)) {
            *(longlong **)(*param_1 + 8) = plVar8;
          }
          else {
            puVar5 = (undefined8 *)plVar7[1];
            if (plVar7 == (longlong *)puVar5[2]) {
              puVar5[2] = plVar8;
            }
            else {
              *puVar5 = plVar8;
            }
          }
          plVar8[2] = (longlong)plVar7;
          plVar7[1] = (longlong)plVar8;
          plVar6 = plVar7;
        }
        *(undefined1 *)(plVar6[1] + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(plVar6[1] + 8) + 0x18) = 0;
        plVar7 = *(longlong **)(plVar6[1] + 8);
        plVar8 = (longlong *)plVar7[2];
        plVar7[2] = *plVar8;
        if (*(char *)(*plVar8 + 0x19) == '\0') {
          *(longlong **)(*plVar8 + 8) = plVar7;
        }
        plVar8[1] = plVar7[1];
        if (plVar7 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar8;
        }
        else {
          puVar5 = (undefined8 *)plVar7[1];
          if (plVar7 == (longlong *)*puVar5) {
            *puVar5 = plVar8;
          }
          else {
            puVar5[2] = plVar8;
          }
        }
        *plVar8 = (longlong)plVar7;
        goto LAB_14516724d;
      }
      *(undefined1 *)(plVar7 + 3) = 1;
      *(undefined1 *)(lVar3 + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(plVar6[1] + 8) + 0x18) = 0;
      plVar6 = *(longlong **)(plVar6[1] + 8);
    }
    cVar1 = *(char *)(plVar6[1] + 0x18);
  } while( true );
}



// FUNCTION 145167270 FUN_145167270 body=61 status=ok
// SIG undefined FUN_145167270(void)

void FUN_145167270(longlong *param_1)

{
  FUN_145168200(param_1,param_1,*(undefined8 *)(*param_1 + 8));
  if ((void *)*param_1 != (void *)0x0) {
    if (DAT_14c7fb8a0 == (code *)0x0) {
      free((void *)*param_1);
    }
    else {
      (*DAT_14c7fb8a0)();
    }
  }
  return;
}



// FUNCTION 1451672b0 FUN_1451672b0 body=1157 status=ok
// SIG undefined FUN_1451672b0(void)

void FUN_1451672b0(undefined8 **param_1)

{
  char cVar1;
  undefined8 ****ppppuVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *****pppppuVar8;
  undefined8 *puVar9;
  void *_Dst;
  undefined8 *****pppppuVar10;
  longlong *plVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined4 uStack_90;
  undefined8 **local_78;
  undefined8 **local_70;
  undefined8 *local_68;
  undefined8 ****local_60;
  longlong lStack_58;
  ulonglong local_50;
  ulonglong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a8 = (undefined8 *)0x0;
  local_a0 = (undefined8 *)0x0;
  local_78 = param_1;
  if (DAT_14c7fb8a8 == (code *)0x0) {
    puVar7 = malloc(0x48);
  }
  else {
    puVar7 = (undefined8 *)(*DAT_14c7fb8a8)();
  }
  if (puVar7 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *puVar7 = puVar7;
  puVar7[1] = puVar7;
  puVar7[2] = puVar7;
  *(undefined2 *)(puVar7 + 3) = 0x101;
  plVar11 = (longlong *)**param_1;
  cVar1 = *(char *)((longlong)plVar11 + 0x19);
  local_a8 = puVar7;
  do {
    if (cVar1 != '\0') {
      if (param_1 != &local_a8) {
        puVar7 = *param_1;
        *param_1 = local_a8;
        puVar9 = param_1[1];
        param_1[1] = local_a0;
        local_a8 = puVar7;
        local_a0 = puVar9;
      }
      FUN_145168200(&local_a8,&local_a8,local_a8[1]);
      if (local_a8 != (undefined8 *)0x0) {
        if (DAT_14c7fb8a0 == (code *)0x0) {
          free(local_a8);
        }
        else {
          (*DAT_14c7fb8a0)();
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_c8);
    }
    local_60 = (undefined8 ****)0x0;
    lStack_58 = 0;
    local_50 = 0;
    local_48 = 0;
    plVar14 = plVar11 + 4;
    if (7 < (ulonglong)plVar11[7]) {
      plVar14 = (longlong *)plVar11[4];
    }
    uVar16 = plVar11[6];
    if (0x7ffffffffffffffe < uVar16) {
                    /* WARNING: Subroutine does not return */
      FUN_146eb22ad();
    }
    if (uVar16 < 8) {
      local_48 = 7;
      pppppuVar8 = (undefined8 *****)*plVar14;
      lStack_58 = plVar14[1];
      local_60 = pppppuVar8;
      local_50 = uVar16;
    }
    else {
      uVar12 = uVar16 | 7;
      if (uVar12 < 0x7fffffffffffffff) {
        if (uVar12 < 10) {
          uVar12 = 10;
        }
      }
      else {
        uVar12 = 0x7ffffffffffffffe;
      }
      if (DAT_14c7fb8a8 == (code *)0x0) {
        pppppuVar8 = malloc(uVar12 * 2 + 2);
      }
      else {
        pppppuVar8 = (undefined8 *****)(*DAT_14c7fb8a8)();
      }
      if (pppppuVar8 == (undefined8 *****)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      local_60 = pppppuVar8;
      local_50 = uVar16;
      local_48 = uVar12;
      memcpy(pppppuVar8,plVar14,uVar16 * 2 + 2);
    }
    local_40 = 0x80000001;
    puVar7 = (undefined8 *)local_a8[1];
    uVar5 = 0;
    cVar1 = *(char *)((longlong)puVar7 + 0x19);
    puVar9 = puVar7;
    puVar15 = local_a8;
    while (puVar3 = puVar7, cVar1 == '\0') {
      pppppuVar10 = &local_60;
      if (7 < local_48) {
        pppppuVar10 = pppppuVar8;
      }
      puVar7 = puVar3 + 4;
      if (7 < (ulonglong)puVar3[7]) {
        puVar7 = (undefined8 *)puVar3[4];
      }
      uVar12 = puVar3[6];
      uVar13 = uVar12;
      if (uVar16 < uVar12) {
        uVar13 = uVar16;
      }
      iVar6 = FUN_14515eb10(puVar7,pppppuVar10,uVar13);
      if (iVar6 == 0) {
        if (uVar16 <= uVar12) goto LAB_145167458;
LAB_1451674c8:
        puVar7 = (undefined8 *)puVar3[2];
        uVar5 = 0;
      }
      else {
        if (iVar6 < 0) goto LAB_1451674c8;
LAB_145167458:
        puVar7 = (undefined8 *)*puVar3;
        puVar15 = puVar3;
        uVar5 = 1;
      }
      cVar1 = *(char *)((longlong)puVar7 + 0x19);
      uVar16 = local_50;
      puVar9 = puVar3;
      pppppuVar8 = (undefined8 *****)local_60;
    }
    uVar12 = uVar16;
    local_98 = puVar9;
    uStack_90 = uVar5;
    if (*(char *)((longlong)puVar15 + 0x19) == '\0') {
      puVar7 = puVar15 + 4;
      if (7 < (ulonglong)puVar15[7]) {
        puVar7 = (undefined8 *)puVar15[4];
      }
      pppppuVar10 = &local_60;
      if (7 < local_48) {
        pppppuVar10 = pppppuVar8;
      }
      uVar13 = puVar15[6];
      if (uVar13 < uVar16) {
        uVar12 = uVar13;
      }
      iVar6 = FUN_14515eb10(pppppuVar10,puVar7,uVar12);
      uVar12 = local_50;
      pppppuVar8 = (undefined8 *****)local_60;
      if (iVar6 == 0) {
        if (uVar16 < uVar13) goto LAB_1451674de;
      }
      else if (iVar6 < 0) goto LAB_1451674de;
    }
    else {
LAB_1451674de:
      puVar7 = local_a8;
      if (local_a0 == (undefined8 *)0x38e38e38e38e38e) {
                    /* WARNING: Subroutine does not return */
        FUN_1470a938d();
      }
      local_70 = &local_a8;
      local_68 = (undefined8 *)0x0;
      if (DAT_14c7fb8a8 == (code *)0x0) {
        puVar9 = malloc(0x48);
      }
      else {
        puVar9 = (undefined8 *)(*DAT_14c7fb8a8)();
      }
      if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      puVar9[4] = 0;
      puVar9[5] = 0;
      puVar9[6] = 0;
      puVar9[7] = 0;
      pppppuVar10 = &local_60;
      if (7 < local_48) {
        pppppuVar10 = pppppuVar8;
      }
      local_68 = puVar9;
      if (0x7ffffffffffffffe < uVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_146eb22ad();
      }
      if (uVar12 < 8) {
        puVar9[6] = uVar12;
        puVar9[7] = 7;
        ppppuVar2 = pppppuVar10[1];
        puVar9[4] = *pppppuVar10;
        puVar9[5] = ppppuVar2;
      }
      else {
        uVar16 = uVar12 | 7;
        if (uVar16 < 0x7fffffffffffffff) {
          if (uVar16 < 10) {
            uVar16 = 10;
          }
        }
        else {
          uVar16 = 0x7ffffffffffffffe;
        }
        if (DAT_14c7fb8a8 == (code *)0x0) {
          _Dst = malloc(uVar16 * 2 + 2);
        }
        else {
          _Dst = (void *)(*DAT_14c7fb8a8)();
        }
        if (_Dst == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        puVar9[4] = _Dst;
        puVar9[6] = uVar12;
        puVar9[7] = uVar16;
        memcpy(_Dst,pppppuVar10,uVar12 * 2 + 2);
      }
      *(undefined4 *)(puVar9 + 8) = local_40;
      *puVar9 = puVar7;
      puVar9[1] = puVar7;
      puVar9[2] = puVar7;
      *(undefined2 *)(puVar9 + 3) = 0;
      local_68 = (undefined8 *)0x0;
      FUN_145167010(&local_a8,&local_98,puVar9);
    }
    if ((7 < local_48) && (pppppuVar8 != (undefined8 *****)0x0)) {
      if (DAT_14c7fb8a0 == (code *)0x0) {
        free(pppppuVar8);
      }
      else {
        (*DAT_14c7fb8a0)();
      }
    }
    plVar14 = (longlong *)plVar11[2];
    if (*(char *)((longlong)plVar14 + 0x19) == '\0') {
      cVar1 = *(char *)(*plVar14 + 0x19);
      plVar11 = plVar14;
      plVar14 = (longlong *)*plVar14;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*plVar14 + 0x19);
        plVar11 = plVar14;
        plVar14 = (longlong *)*plVar14;
      }
    }
    else {
      cVar1 = *(char *)(plVar11[1] + 0x19);
      plVar4 = (longlong *)plVar11[1];
      plVar14 = plVar11;
      while ((plVar11 = plVar4, cVar1 == '\0' && (plVar14 == (longlong *)plVar11[2]))) {
        cVar1 = *(char *)(plVar11[1] + 0x19);
        plVar4 = (longlong *)plVar11[1];
        plVar14 = plVar11;
      }
    }
    cVar1 = *(char *)((longlong)plVar11 + 0x19);
    param_1 = local_78;
  } while( true );
}



// FUNCTION 145167760 FUN_145167760 body=355 status=ok
// SIG undefined FUN_145167760(void)

void FUN_145167760(longlong *param_1,int param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  void *_Memory;
  longlong *plVar5;
  
  plVar4 = *(longlong **)*param_1;
  if (plVar4 != (longlong *)*param_1) {
    do {
      if ((int)plVar4[8] == param_2) {
        plVar5 = (longlong *)plVar4[2];
        if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
          cVar1 = *(char *)(*plVar5 + 0x19);
          plVar2 = (longlong *)*plVar5;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*plVar2 + 0x19);
            plVar5 = plVar2;
            plVar2 = (longlong *)*plVar2;
          }
        }
        else {
          cVar1 = *(char *)(plVar4[1] + 0x19);
          plVar3 = (longlong *)plVar4[1];
          plVar2 = plVar4;
          while ((plVar5 = plVar3, cVar1 == '\0' && (plVar2 == (longlong *)plVar5[2]))) {
            cVar1 = *(char *)(plVar5[1] + 0x19);
            plVar3 = (longlong *)plVar5[1];
            plVar2 = plVar5;
          }
        }
        _Memory = (void *)FUN_145166c40(param_1,plVar4);
        if ((7 < *(ulonglong *)((longlong)_Memory + 0x38)) &&
           (*(void **)((longlong)_Memory + 0x20) != (void *)0x0)) {
          if (DAT_14c7fb8a0 == (code *)0x0) {
            free(*(void **)((longlong)_Memory + 0x20));
          }
          else {
            (*DAT_14c7fb8a0)();
          }
        }
        *(undefined8 *)((longlong)_Memory + 0x30) = 0;
        *(undefined8 *)((longlong)_Memory + 0x38) = 7;
        *(undefined2 *)((longlong)_Memory + 0x20) = 0;
        if (_Memory != (void *)0x0) {
          if (DAT_14c7fb8a0 == (code *)0x0) {
            free(_Memory);
          }
          else {
            (*DAT_14c7fb8a0)();
          }
        }
      }
      else {
        plVar5 = (longlong *)plVar4[2];
        if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
          cVar1 = *(char *)(*plVar5 + 0x19);
          plVar4 = (longlong *)*plVar5;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*plVar4 + 0x19);
            plVar5 = plVar4;
            plVar4 = (longlong *)*plVar4;
          }
        }
        else {
          cVar1 = *(char *)(plVar4[1] + 0x19);
          plVar2 = (longlong *)plVar4[1];
          while ((plVar5 = plVar2, cVar1 == '\0' && (plVar4 == (longlong *)plVar5[2]))) {
            cVar1 = *(char *)(plVar5[1] + 0x19);
            plVar2 = (longlong *)plVar5[1];
            plVar4 = plVar5;
          }
        }
      }
      plVar4 = plVar5;
    } while (plVar5 != (longlong *)*param_1);
  }
  return;
}



// FUNCTION 1451678d0 FUN_1451678d0 body=1345 status=ok
// SIG undefined FUN_1451678d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1451678d0(undefined8 *param_1,undefined8 param_2,undefined4 param_3,HANDLE param_4,
                  longlong param_5,longlong param_6,undefined4 param_7)

{
  size_t _Size;
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  void *_Dst;
  byte bVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong lVar7;
  rsize_t _SizeInWords;
  undefined1 *puVar9;
  undefined1 auStack_23a8 [32];
  undefined4 local_2388;
  undefined1 local_2378 [16];
  HANDLE local_2368;
  undefined2 local_2358;
  undefined2 local_2356;
  undefined4 local_2354;
  char local_234f;
  undefined1 local_234e;
  undefined1 local_234d;
  undefined1 local_234c;
  undefined1 local_234b;
  undefined1 local_234a;
  undefined8 local_2348;
  undefined8 uStack_2340;
  undefined8 local_2338;
  undefined8 uStack_2330;
  undefined8 local_2328;
  undefined8 uStack_2320;
  undefined8 local_2318;
  undefined8 uStack_2310;
  undefined8 local_2308;
  undefined8 uStack_2300;
  undefined8 local_22f8;
  undefined8 uStack_22f0;
  undefined8 local_22e8;
  undefined8 uStack_22e0;
  undefined8 local_22d8;
  undefined8 uStack_22d0;
  undefined1 local_22c8;
  undefined8 local_22c7;
  undefined8 uStack_22bf;
  undefined8 local_22b7;
  undefined8 uStack_22af;
  undefined8 local_22a7;
  undefined8 uStack_229f;
  undefined8 local_2297;
  undefined8 uStack_228f;
  undefined8 local_2287;
  undefined8 uStack_227f;
  undefined8 local_2277;
  undefined8 uStack_226f;
  undefined8 local_2267;
  undefined8 uStack_225f;
  undefined8 local_2257;
  undefined8 uStack_224f;
  undefined1 local_2247;
  undefined8 local_2246;
  undefined8 uStack_223e;
  undefined8 local_2236;
  undefined8 uStack_222e;
  undefined8 local_2226;
  undefined8 uStack_221e;
  undefined8 local_2216;
  undefined8 uStack_220e;
  undefined8 local_2206;
  undefined8 uStack_21fe;
  undefined8 local_21f6;
  undefined8 uStack_21ee;
  undefined8 local_21e6;
  undefined8 uStack_21de;
  undefined8 local_21d6;
  undefined8 uStack_21ce;
  undefined1 local_21c6;
  char local_178 [16];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8;
  ulonglong local_58;
  longlong lVar8;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_23a8;
  local_2388 = param_3;
  iVar2 = FUN_145164480(param_4,local_178,6,0x14);
  if (iVar2 == 0) {
    uVar5 = 0;
    do {
      if (local_178[uVar5] != '\0') goto LAB_14516797a;
      bVar4 = (char)uVar5 + 1;
      uVar5 = (ulonglong)bVar4;
    } while (bVar4 < 6);
    if (bVar4 != 6) {
LAB_14516797a:
      plVar6 = &DAT_14c7c9990;
      do {
        if ((*plVar6 != 0) &&
           (((cVar1 = FUN_14515bc60((short)plVar6[4],*(undefined2 *)((longlong)plVar6 + 0x22),
                                    *(undefined4 *)((longlong)plVar6 + 0x24)), cVar1 != '\0' ||
             (cVar1 = FUN_14515bd30((short)plVar6[4],*(undefined2 *)((longlong)plVar6 + 0x22)),
             cVar1 != '\0')) || (cVar1 = FUN_14515bd60((short)plVar6[4]), cVar1 != '\0')))) {
          bVar4 = 0;
          do {
            if (*(char *)((ulonglong)bVar4 + 0x29 + (longlong)plVar6) != local_178[bVar4])
            goto LAB_1451679ed;
            bVar4 = bVar4 + 1;
          } while (bVar4 < 6);
          if (bVar4 == 6) {
            if (plVar6 != (longlong *)0x0) {
              puVar9 = &DAT_14c7eb270;
              goto LAB_145167d27;
            }
            break;
          }
        }
LAB_1451679ed:
        plVar6 = plVar6 + 0x440;
      } while (plVar6 != &DAT_14c7e3190);
    }
    memset(local_2378,0,0x2200);
    local_234f = local_178[0];
    local_234e = local_178[1];
    local_234d = local_178[2];
    local_234c = local_178[3];
    local_234b = local_178[4];
    local_234a = local_178[5];
    local_2358 = *(undefined2 *)(param_5 + 4);
    local_2356 = *(undefined2 *)(param_5 + 6);
    local_2354 = param_7;
    local_22c8 = 0;
    local_2348 = 0;
    uStack_2340 = 0;
    local_2338 = 0;
    uStack_2330 = 0;
    local_2328 = 0;
    uStack_2320 = 0;
    local_2318 = 0;
    uStack_2310 = 0;
    local_2308 = 0;
    uStack_2300 = 0;
    local_22f8 = 0;
    uStack_22f0 = 0;
    local_22e8 = 0;
    uStack_22e0 = 0;
    local_22d8 = 0;
    uStack_22d0 = 0;
    local_2368 = param_4;
    memset(&local_168,0,0x102);
    cVar1 = HidD_GetManufacturerString(param_4,&local_168,0x102);
    if (cVar1 != '\0') {
      local_2348 = local_168;
      uStack_2340 = uStack_160;
      local_2338 = local_158;
      uStack_2330 = uStack_150;
      local_2328 = local_148;
      uStack_2320 = uStack_140;
      local_2318 = local_138;
      uStack_2310 = uStack_130;
      local_2308 = local_128;
      uStack_2300 = uStack_120;
      local_22e8 = CONCAT44(uStack_104,local_108);
      uStack_22e0 = CONCAT44(uStack_fc,uStack_100);
      local_22f8 = local_118;
      uStack_22f0 = uStack_110;
      local_22d8 = local_f8;
      uStack_22d0 = uStack_f0;
      local_22c8 = local_e8;
    }
    local_2247 = 0;
    local_22c7 = 0;
    uStack_22bf = 0;
    local_22b7 = 0;
    uStack_22af = 0;
    local_22a7 = 0;
    uStack_229f = 0;
    local_2297 = 0;
    uStack_228f = 0;
    local_2287 = 0;
    uStack_227f = 0;
    local_2277 = 0;
    uStack_226f = 0;
    local_2267 = 0;
    uStack_225f = 0;
    local_2257 = 0;
    uStack_224f = 0;
    memset(&local_168,0,0x102);
    cVar1 = HidD_GetProductString(param_4,&local_168,0x102);
    if (cVar1 != '\0') {
      local_22c7 = local_168;
      uStack_22bf = uStack_160;
      local_2247 = local_e8;
      local_22b7 = local_158;
      uStack_22af = uStack_150;
      local_22a7 = local_148;
      uStack_229f = uStack_140;
      local_2297 = local_138;
      uStack_228f = uStack_130;
      local_2287 = local_128;
      uStack_227f = uStack_120;
      local_2267 = CONCAT44(uStack_104,local_108);
      uStack_225f = CONCAT44(uStack_fc,uStack_100);
      local_2277 = local_118;
      uStack_226f = uStack_110;
      local_2257 = local_f8;
      uStack_224f = uStack_f0;
    }
    local_21c6 = 0;
    local_2246 = 0;
    uStack_223e = 0;
    local_2236 = 0;
    uStack_222e = 0;
    local_2226 = 0;
    uStack_221e = 0;
    local_2216 = 0;
    uStack_220e = 0;
    local_2206 = 0;
    uStack_21fe = 0;
    local_21f6 = 0;
    uStack_21ee = 0;
    local_21e6 = 0;
    uStack_21de = 0;
    local_21d6 = 0;
    uStack_21ce = 0;
    memset(&local_168,0,0x102);
    cVar1 = HidD_GetSerialNumberString(param_4,&local_168,0x102);
    if (cVar1 != '\0') {
      local_2246 = local_168;
      uStack_223e = uStack_160;
      local_21c6 = local_e8;
      local_2236 = local_158;
      uStack_222e = uStack_150;
      local_2226 = local_148;
      uStack_221e = uStack_140;
      local_2216 = local_138;
      uStack_220e = uStack_130;
      local_2206 = local_128;
      uStack_21fe = uStack_120;
      local_21f6 = local_118;
      uStack_21ee = uStack_110;
      local_21e6 = CONCAT44(uStack_104,local_108);
      uStack_21de = CONCAT44(uStack_fc,uStack_100);
      local_21d6 = local_f8;
      uStack_21ce = uStack_f0;
    }
    uVar3 = FUN_1451649c0(local_2378,param_6 + 4,5);
    *param_1 = uVar3;
  }
  else {
    CloseHandle(param_4);
  }
LAB_145167cec:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_23a8);
LAB_145167d27:
  if (*(longlong *)(puVar9 + 8) == 0) {
    lVar7 = -1;
    do {
      lVar8 = lVar7;
      lVar7 = lVar8 + 1;
    } while (((wchar_t *)(param_6 + 4))[lVar7] != L'\0');
    _SizeInWords = lVar8 + 2;
    _Size = _SizeInWords * 2;
    if (DAT_14c7fb8a8 == (code *)0x0) {
      _Dst = malloc(_Size);
    }
    else {
      _Dst = (void *)(*DAT_14c7fb8a8)();
    }
    *(void **)(puVar9 + 8) = _Dst;
    if (_Dst != (void *)0x0) {
      memset(_Dst,0,_Size);
      wcsncpy_s(*(wchar_t **)(puVar9 + 8),_SizeInWords,(wchar_t *)(param_6 + 4),0xffffffffffffffff);
    }
    *puVar9 = 1;
    puVar9[1] = local_178[0];
    puVar9[2] = local_178[1];
    puVar9[3] = local_178[2];
    puVar9[4] = local_178[3];
    puVar9[5] = local_178[4];
    puVar9[6] = local_178[5];
    if (puVar9 != (undefined1 *)0x0) {
      FUN_145166790(puVar9 + 0x10,param_2,local_2388);
    }
LAB_145167dfd:
    iVar2 = FUN_145168520();
    if (iVar2 == 0) {
      *(undefined1 *)((longlong)plVar6 + 0x2f) = 1;
      FUN_145168550();
    }
    CloseHandle(param_4);
    goto LAB_145167cec;
  }
  puVar9 = puVar9 + 0x2018;
  if (0x14c7fb32f < (longlong)puVar9) goto LAB_145167dfd;
  goto LAB_145167d27;
}



// FUNCTION 145167e30 FUN_145167e30 body=320 status=ok
// SIG undefined FUN_145167e30(void)

longlong *
FUN_145167e30(undefined8 *param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  char cVar6;
  undefined1 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28 [32];
  
  puVar8 = (undefined8 *)FUN_1451682c0(param_1,local_28);
  local_38 = *puVar8;
  uStack_30 = puVar8[1];
  lVar10 = puVar8[2];
  if (*(char *)(lVar10 + 0x19) == '\0') {
    cVar6 = FUN_1451683f0(param_1,param_3,lVar10 + 0x20);
    uVar7 = 0;
    if (cVar6 == '\0') goto LAB_145167f48;
  }
  if (param_1[1] == 0x38e38e38e38e38e) {
                    /* WARNING: Subroutine does not return */
    FUN_1470a938d();
  }
  uVar1 = *param_1;
  uVar11 = 0;
  puVar8 = param_1;
  if (DAT_14c7fb8a8 == (code *)0x0) {
    puVar9 = malloc(0x48);
  }
  else {
    puVar9 = (undefined8 *)(*DAT_14c7fb8a8)();
  }
  if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  puVar9[4] = 0;
  puVar9[5] = 0;
  puVar9[6] = 0;
  puVar9[7] = 0;
  uVar5 = param_3[1];
  puVar9[4] = *param_3;
  puVar9[5] = uVar5;
  uVar2 = *(undefined4 *)((longlong)param_3 + 0x14);
  uVar3 = *(undefined4 *)(param_3 + 3);
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x1c);
  *(undefined4 *)(puVar9 + 6) = *(undefined4 *)(param_3 + 2);
  *(undefined4 *)((longlong)puVar9 + 0x34) = uVar2;
  *(undefined4 *)(puVar9 + 7) = uVar3;
  *(undefined4 *)((longlong)puVar9 + 0x3c) = uVar4;
  param_3[2] = 0;
  param_3[3] = 7;
  *(undefined2 *)param_3 = 0;
  *(undefined4 *)(puVar9 + 8) = *(undefined4 *)(param_3 + 4);
  *puVar9 = uVar1;
  puVar9[1] = uVar1;
  puVar9[2] = uVar1;
  *(undefined2 *)(puVar9 + 3) = 0;
  lVar10 = FUN_145167010(param_1,&local_38,puVar9,param_4,puVar8,uVar11);
  uVar7 = 1;
LAB_145167f48:
  *param_2 = lVar10;
  *(undefined1 *)(param_2 + 1) = uVar7;
  return param_2;
}



// FUNCTION 145167f80 FUN_145167f80 body=175 status=ok
// SIG undefined FUN_145167f80(void)

bool FUN_145167f80(void)

{
  if (DAT_14c7c9980 != '\0') {
    return true;
  }
  FUN_145168460();
  FUN_14515be50();
  DAT_14c7c9988 = 1;
  DAT_14c7c9987 = 1;
  DAT_14c7c9989 = 1;
  DAT_14c7c9980 = 1;
  DAT_14c7fb330 = _beginthread(FUN_145161c80,0,(void *)0x0);
  if (DAT_14c7fb330 != 0xffffffffffffffff) {
    DAT_14c7fb350 = _beginthread(FUN_145163ca0,0,(void *)0x0);
    if (DAT_14c7fb350 != 0xffffffffffffffff) {
      DAT_14c7c998b = 1;
      DAT_14c7fb8b0 = _beginthread(FUN_145163f60,0,(void *)0x0);
      return DAT_14c7fb8b0 != 0xffffffffffffffff;
    }
  }
  return false;
}



// FUNCTION 145168030 FUN_145168030 body=450 status=ok
// SIG undefined FUN_145168030(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_145168030(void)

{
  int iVar1;
  DWORD DVar2;
  undefined8 *puVar3;
  
  if (DAT_14c7c9980 == '\x01') {
    iVar1 = FUN_1451684d0();
    if (iVar1 == 0) {
      DAT_14c7c998a = 1;
      FUN_145168500();
    }
    FUN_14515bf60();
    DAT_14c7c9988 = 0;
    if (DAT_14c7fb330 != (HANDLE)0x0) {
      DVar2 = WaitForSingleObject(DAT_14c7fb330,5000);
      if (DVar2 == 0x102) {
        TerminateThread(DAT_14c7fb330,0);
      }
      DAT_14c7fb330 = (HANDLE)0x0;
    }
    DAT_14c7c9987 = 0;
    puVar3 = &DAT_14c7e3190;
    do {
      if ((HANDLE)*puVar3 != (HANDLE)0x0) {
        DVar2 = WaitForSingleObject((HANDLE)*puVar3,5000);
        if (DVar2 == 0x102) {
          TerminateThread((HANDLE)*puVar3,0);
        }
        *puVar3 = 0;
      }
      puVar3 = puVar3 + 1;
    } while ((longlong)puVar3 < 0x14c7e31f0);
    DAT_14c7c9989 = 0;
    ReleaseSemaphore(DAT_14c7fb360,1,(LPLONG)0x0);
    if (DAT_14c7fb350 != (HANDLE)0x0) {
      DVar2 = WaitForSingleObject(DAT_14c7fb350,5000);
      if (DVar2 == 0x102) {
        TerminateThread(DAT_14c7fb350,0);
      }
      DAT_14c7fb350 = (HANDLE)0x0;
    }
    DAT_14c7c998b = 0;
    if (DAT_14c7fb8b0 != (HANDLE)0x0) {
      DVar2 = WaitForSingleObject(DAT_14c7fb8b0,5000);
      if (DVar2 == 0x102) {
        TerminateThread(DAT_14c7fb8b0,0);
      }
      DAT_14c7fb8b0 = (HANDLE)0x0;
    }
    FUN_1451684a0();
    DAT_14c7c9980 = '\0';
  }
  _DAT_14c7fb338 = 0;
  DAT_14c7fb340 = 0;
  DAT_14c7fb348 = 0;
  DAT_14c7fb8a8 = 0;
  DAT_14c7fb8a0 = 0;
  DAT_14c7301a4 = 1;
  DAT_14c7c998a = 0;
  DAT_14c7301a6 = 1;
  DAT_14c7c998c = 0;
  DAT_14c7c9986 = 0;
  DAT_14c7c9984 = 0;
  DAT_14c7fb358 = 0;
  FUN_14515cb60();
  return 1;
}



// FUNCTION 145168200 FUN_145168200 body=189 status=ok
// SIG undefined FUN_145168200(void)

void FUN_145168200(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_3 + 0x19);
  while (cVar1 == '\0') {
    FUN_145168200(param_1,param_2,param_3[2]);
    plVar2 = (longlong *)*param_3;
    if ((7 < (ulonglong)param_3[7]) && ((void *)param_3[4] != (void *)0x0)) {
      if (DAT_14c7fb8a0 == (code *)0x0) {
        free((void *)param_3[4]);
      }
      else {
        (*DAT_14c7fb8a0)();
      }
    }
    param_3[6] = 0;
    param_3[7] = 7;
    *(undefined2 *)(param_3 + 4) = 0;
    if (param_3 != (longlong *)0x0) {
      if (DAT_14c7fb8a0 == (code *)0x0) {
        free(param_3);
      }
      else {
        (*DAT_14c7fb8a0)();
      }
    }
    param_3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}



// FUNCTION 1451682c0 FUN_1451682c0 body=187 status=ok
// SIG undefined FUN_1451682c0(void)

longlong * FUN_1451682c0(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  
  lVar2 = *param_1;
  *(undefined4 *)(param_2 + 1) = 0;
  param_2[2] = lVar2;
  puVar9 = *(undefined8 **)(lVar2 + 8);
  *param_2 = (longlong)puVar9;
  cVar1 = *(char *)((longlong)puVar9 + 0x19);
  do {
    if (cVar1 != '\0') {
      return param_2;
    }
    uVar3 = param_3[3];
    *param_2 = (longlong)puVar9;
    puVar8 = param_3;
    if (7 < uVar3) {
      puVar8 = (undefined8 *)*param_3;
    }
    puVar7 = puVar9 + 4;
    if (7 < (ulonglong)puVar9[7]) {
      puVar7 = (undefined8 *)puVar9[4];
    }
    uVar3 = param_3[2];
    uVar4 = puVar9[6];
    uVar10 = uVar4;
    if (uVar3 < uVar4) {
      uVar10 = uVar3;
    }
    iVar5 = FUN_14515eb10(puVar7,puVar8,uVar10);
    if (iVar5 == 0) {
      if (uVar3 <= uVar4) goto LAB_14516833f;
LAB_145168373:
      puVar9 = (undefined8 *)puVar9[2];
      uVar6 = 0;
    }
    else {
      if (iVar5 < 0) goto LAB_145168373;
LAB_14516833f:
      param_2[2] = (longlong)puVar9;
      uVar6 = 1;
      puVar9 = (undefined8 *)*puVar9;
    }
    *(undefined4 *)(param_2 + 1) = uVar6;
    cVar1 = *(char *)((longlong)puVar9 + 0x19);
  } while( true );
}



// FUNCTION 145168380 FUN_145168380 body=49 status=ok
// SIG undefined FUN_145168380(void)

void FUN_145168380(longlong param_1)

{
  if (*(void **)(param_1 + 8) == (void *)0x0) {
    return;
  }
  if (DAT_14c7fb8a0 != (code *)0x0) {
    (*DAT_14c7fb8a0)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001451683a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free(*(void **)(param_1 + 8));
  return;
}



// FUNCTION 1451683c0 FUN_1451683c0 body=41 status=ok
// SIG undefined FUN_1451683c0(void)

void FUN_1451683c0(longlong param_1)

{
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    if (DAT_14c7fb8a0 == (code *)0x0) {
      free(*(void **)(param_1 + 8));
    }
    else {
      (*DAT_14c7fb8a0)();
    }
  }
  return;
}



// FUNCTION 1451683f0 FUN_1451683f0 body=109 status=ok
// SIG undefined FUN_1451683f0(void)

uint FUN_1451683f0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  
  puVar4 = param_3;
  if (7 < (ulonglong)param_3[3]) {
    puVar4 = (undefined8 *)*param_3;
  }
  puVar5 = param_2;
  if (7 < (ulonglong)param_2[3]) {
    puVar5 = (undefined8 *)*param_2;
  }
  uVar1 = param_3[2];
  uVar2 = param_2[2];
  uVar6 = uVar2;
  if (uVar1 < uVar2) {
    uVar6 = uVar1;
  }
  uVar3 = FUN_14515eb10(puVar5,puVar4,uVar6);
  if (uVar3 == 0) {
    if (uVar2 < uVar1) {
      return 1;
    }
    uVar3 = 0;
  }
  return uVar3 >> 0x1f;
}



// FUNCTION 145168460 FUN_145168460 body=51 status=ok
// SIG undefined FUN_145168460(void)

void FUN_145168460(void)

{
  if (DAT_14c7fb8c0 == '\0') {
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c7fb8c8);
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c7fb8f0);
  }
  DAT_14c7fb8c0 = 1;
  return;
}



// FUNCTION 1451684a0 FUN_1451684a0 body=42 status=ok
// SIG undefined FUN_1451684a0(void)

void FUN_1451684a0(void)

{
  DAT_14c7fb8c0 = 0;
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_14c7fb8c8);
                    /* WARNING: Could not recover jumptable at 0x0001451684c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_14c7fb8f0);
  return;
}



// FUNCTION 1451684d0 FUN_1451684d0 body=43 status=ok
// SIG undefined FUN_1451684d0(void)

undefined8 FUN_1451684d0(void)

{
  if (DAT_14c7fb8c0 != '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c7fb8c8);
    return 0;
  }
  return 0x80010002;
}



// FUNCTION 145168500 FUN_145168500 body=24 status=ok
// SIG undefined FUN_145168500(void)

void FUN_145168500(void)

{
  if (DAT_14c7fb8c0 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000145168510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c7fb8c8);
    return;
  }
  return;
}



// FUNCTION 145168520 FUN_145168520 body=43 status=ok
// SIG undefined FUN_145168520(void)

undefined8 FUN_145168520(void)

{
  if (DAT_14c7fb8c0 != '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c7fb8f0);
    return 0;
  }
  return 0x80010002;
}



// FUNCTION 145168550 FUN_145168550 body=24 status=ok
// SIG undefined FUN_145168550(void)

void FUN_145168550(void)

{
  if (DAT_14c7fb8c0 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000145168560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c7fb8f0);
    return;
  }
  return;
}



// FUNCTION 145168570 FUN_145168570 body=88 status=ok
// SIG undefined FUN_145168570(void)

undefined4 FUN_145168570(byte param_1,byte *param_2,int param_3)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  
  param_3 = param_3 + -4;
  puVar1 = (uint *)(param_2 + param_3);
  uVar3 = *(uint *)(&DAT_149c36930 + (ulonglong)(byte)~param_1 * 4) ^ 0xffffff;
  for (; 0 < param_3; param_3 = param_3 + -1) {
    bVar2 = *param_2;
    param_2 = param_2 + 1;
    uVar3 = uVar3 >> 8 ^
            *(uint *)(&DAT_149c36930 + (((ulonglong)uVar3 ^ (ulonglong)bVar2) & 0xff) * 4);
  }
  return CONCAT31((int3)(~uVar3 >> 8),*puVar1 != ~uVar3);
}



// FUNCTION 1451685d0 FUN_1451685d0 body=82 status=ok
// SIG undefined FUN_1451685d0(void)

uint FUN_1451685d0(byte param_1,byte *param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(&DAT_149c36930 + (ulonglong)(byte)~param_1 * 4) ^ 0xffffff;
  for (param_3 = param_3 + -4; 0 < param_3; param_3 = param_3 + -1) {
    bVar1 = *param_2;
    param_2 = param_2 + 1;
    uVar2 = uVar2 >> 8 ^
            *(uint *)(&DAT_149c36930 + (((ulonglong)bVar1 ^ (ulonglong)uVar2) & 0xff) * 4);
  }
  return ~uVar2;
}



// FUNCTION 145168630 FUN_145168630 body=307 status=ok
// SIG undefined FUN_145168630(void)

float * FUN_145168630(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = *param_3;
  fVar2 = param_1[3];
  fVar3 = param_1[1];
  fVar4 = *param_1;
  fVar5 = param_3[1];
  fVar6 = param_1[2];
  fVar7 = param_3[2];
  fVar8 = param_3[3];
  *param_2 = (fVar4 * fVar8 + fVar1 * fVar2 + fVar3 * fVar7) - fVar6 * fVar5;
  param_2[1] = (fVar3 * fVar8 + fVar5 * fVar2 + fVar6 * fVar1) - fVar7 * fVar4;
  param_2[3] = ((fVar8 * fVar2 - fVar4 * fVar1) - fVar5 * fVar3) - fVar6 * fVar7;
  param_2[2] = (fVar6 * fVar8 + fVar7 * fVar2 + fVar5 * fVar4) - fVar3 * fVar1;
  return param_2;
}



// FUNCTION 145168770 FUN_145168770 body=477 status=ok
// SIG undefined FUN_145168770(void)

float * FUN_145168770(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar1 = param_2[6];
  fVar2 = param_2[2];
  fVar3 = param_2[10];
  fVar4 = param_2[5];
  fVar5 = param_2[4];
  fVar6 = *param_2;
  fVar7 = param_2[1];
  fVar8 = param_2[8];
  fVar9 = param_2[9];
  fVar10 = fVar7 * fVar1 - fVar2 * fVar4;
  fVar12 = fVar2 * fVar5 - fVar6 * fVar1;
  fVar13 = fVar6 * fVar4 - fVar7 * fVar5;
  fVar11 = 1.0 / (fVar10 * fVar8 + fVar12 * fVar9 + fVar13 * fVar3);
  *param_1 = (fVar4 * fVar3 - fVar1 * fVar9) * fVar11;
  param_1[1] = (fVar2 * fVar9 - fVar7 * fVar3) * fVar11;
  param_1[2] = fVar10 * fVar11;
  param_1[4] = (fVar1 * fVar8 - fVar5 * fVar3) * fVar11;
  param_1[6] = fVar12 * fVar11;
  param_1[8] = (fVar5 * fVar9 - fVar4 * fVar8) * fVar11;
  param_1[5] = (fVar6 * fVar3 - fVar2 * fVar8) * fVar11;
  param_1[9] = (fVar7 * fVar8 - fVar6 * fVar9) * fVar11;
  param_1[10] = fVar13 * fVar11;
  return param_1;
}



// FUNCTION 145168950 FUN_145168950 body=51 status=ok
// SIG undefined FUN_145168950(void)

undefined8 FUN_145168950(undefined8 param_1,undefined4 *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14515b060(param_1,0,1,0);
  if (lVar1 != 0) {
    *param_2 = *(undefined4 *)(lVar1 + 0x68);
    return 0;
  }
  return 0x8001002d;
}



// FUNCTION 145168990 FUN_145168990 body=16 status=ok
// SIG undefined FUN_145168990(void)

void FUN_145168990(undefined8 *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3f800000;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 1451689a0 FUN_1451689a0 body=13 status=ok
// SIG undefined FUN_1451689a0(void)

void FUN_1451689a0(undefined4 *param_1)

{
  *(undefined8 *)(param_1 + 1) = 0x3f800000;
  *param_1 = 0;
  return;
}



// FUNCTION 1451689b0 FUN_1451689b0 body=9 status=ok
// SIG undefined FUN_1451689b0(void)

void FUN_1451689b0(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 1451689c0 FUN_1451689c0 body=869 status=ok
// SIG undefined FUN_1451689c0(void)

undefined8 FUN_1451689c0(longlong param_1,short *param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  int iVar10;
  char cVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  iVar10 = *(int *)(param_1 + 0x20);
  fVar18 = (float)(int)*param_2;
  fVar19 = (float)(int)param_2[1];
  sVar1 = param_2[3];
  fVar20 = (float)(int)param_2[2];
  sVar2 = param_2[4];
  sVar3 = param_2[5];
  sVar4 = param_2[6];
  sVar5 = param_2[7];
  sVar6 = param_2[8];
  cVar11 = FUN_14515bc60(*(undefined2 *)(param_1 + 2),*(undefined2 *)(param_1 + 4),iVar10);
  if ((cVar11 == '\0') || (iVar10 != 0x11)) {
    fVar13 = (float)(int)param_2[9];
    fVar14 = (float)(int)param_2[10];
  }
  else {
    fVar13 = 540.0;
    fVar14 = 540.0;
    param_2[9] = 0x21c;
    param_2[10] = 0x21c;
  }
  sVar7 = param_2[0xb];
  sVar8 = param_2[0xc];
  sVar9 = param_2[0xd];
  fVar17 = ABS((float)(int)sVar2 - fVar18) + ABS((float)(int)sVar1 - fVar18);
  sVar1 = param_2[0xe];
  sVar2 = param_2[0xf];
  fVar15 = ABS((float)(int)sVar4 - fVar19) + ABS((float)(int)sVar3 - fVar19);
  sVar3 = param_2[0x10];
  fVar16 = ABS((float)(int)sVar6 - fVar20) + ABS((float)(int)sVar5 - fVar20);
  if (((fVar17 == 0.0) || (fVar15 == 0.0)) || (fVar16 == 0.0)) {
    uVar12 = 0x80010002;
  }
  else {
    *(float *)(param_1 + 0x70) = fVar18;
    *(float *)(param_1 + 0x74) = fVar19;
    fVar18 = (fVar14 + fVar13) * 0.5 * 0.017453292;
    *(float *)(param_1 + 0x78) = fVar20;
    *(float *)(param_1 + 0x7c) = fVar18 / (fVar17 * 0.5);
    *(float *)(param_1 + 0x80) = fVar18 / (fVar15 * 0.5);
    *(float *)(param_1 + 0x84) = fVar18 / (fVar16 * 0.5);
    fVar18 = ABS((float)(int)sVar8) + ABS((float)(int)sVar7);
    *(float *)(param_1 + 0x88) = (float)(int)sVar7 - fVar18 * 0.5;
    fVar19 = ABS((float)(int)sVar1) + ABS((float)(int)sVar9);
    *(float *)(param_1 + 0x8c) = (float)(int)sVar9 - fVar19 * 0.5;
    fVar20 = ABS((float)(int)sVar3) + ABS((float)(int)sVar2);
    *(float *)(param_1 + 0x98) = 2.0 / fVar19;
    *(float *)(param_1 + 0x90) = (float)(int)sVar2 - fVar20 * 0.5;
    *(float *)(param_1 + 0x94) = 2.0 / fVar18;
    *(float *)(param_1 + 0x9c) = 2.0 / fVar20;
    cVar11 = FUN_14515bd30(*(undefined2 *)(param_1 + 2),*(undefined2 *)(param_1 + 4));
    if (cVar11 == '\0') {
      if (iVar10 < 0x13) {
        *(undefined4 *)(param_1 + 0xa0) = 0x40e33333;
      }
      else {
        *(undefined4 *)(param_1 + 0xa0) = 0x40aaaaab;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0xa0) = 0x3eaaaaab;
    }
    *(undefined4 *)(param_1 + 0xa4) = 0;
    uVar12 = 0;
    *(undefined1 *)(param_1 + 0x6c) = 1;
  }
  return uVar12;
}



// FUNCTION 145168d30 FUN_145168d30 body=1527 status=ok
// SIG undefined FUN_145168d30(void)

void FUN_145168d30(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  float *pfVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_158 [32];
  float *local_138;
  float *local_130;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  undefined1 local_114 [52];
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  uVar5 = *(uint *)(param_1 + 0x14c);
  if (((*(byte *)(param_1 + 0x68) & 1) == 0) || (uVar5 < 10)) {
LAB_145168dcb:
    *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(param_3 + 0x20);
    *(undefined1 *)(param_2 + 0x74) = *(undefined1 *)(param_3 + 0x24);
    if (uVar5 < 10) {
      *(undefined8 *)(param_2 + 0x6c) = 0x3f800000;
      *(undefined8 *)(param_2 + 0x5c) = 0;
      *(undefined8 *)(param_2 + 100) = 0;
      *(undefined8 *)(param_1 + 0x13c) = 0;
      *(undefined4 *)(param_1 + 0x144) = 0;
      *(undefined4 *)(param_1 + 0x148) = 0x3f800000;
      *(undefined8 *)(param_2 + 0x78) = 0;
      *(undefined4 *)(param_2 + 0x80) = 0;
      *(undefined4 *)(param_2 + 0x84) = 0x3f800000;
      *(int *)(param_1 + 0x14c) = *(int *)(param_1 + 0x14c) + 1;
      goto LAB_1451692d6;
    }
  }
  else {
    local_130 = &local_e0;
    local_138 = &local_d0;
    iVar3 = FUN_1453dec00(param_1 + 0xa8,*(undefined2 *)(param_3 + 0x26),
                          *(undefined2 *)(param_3 + 0x28),*(undefined2 *)(param_3 + 0x2a));
    if (iVar3 == 0) goto LAB_145168dcb;
    *(float *)(param_1 + 0x70) = local_d0;
    *(float *)(param_1 + 0x78) = local_c8;
    *(float *)(param_1 + 0x74) = local_cc;
    *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(param_3 + 0x20);
    *(undefined1 *)(param_2 + 0x74) = *(undefined1 *)(param_3 + 0x24);
  }
  fVar14 = ((float)(int)*(short *)(param_3 + 0x2c) - *(float *)(param_1 + 0x88)) *
           *(float *)(param_1 + 0x94);
  fVar12 = ((float)(int)*(short *)(param_3 + 0x2e) - *(float *)(param_1 + 0x8c)) *
           *(float *)(param_1 + 0x98);
  fVar13 = ((float)(int)*(short *)(param_3 + 0x30) - *(float *)(param_1 + 0x90)) *
           *(float *)(param_1 + 0x9c);
  fVar11 = ((float)(int)*(short *)(param_3 + 0x26) - *(float *)(param_1 + 0x70)) *
           *(float *)(param_1 + 0x7c);
  fVar9 = ((float)(int)*(short *)(param_3 + 0x28) - *(float *)(param_1 + 0x74)) *
          *(float *)(param_1 + 0x80);
  fVar10 = ((float)(int)*(short *)(param_3 + 0x2a) - *(float *)(param_1 + 0x78)) *
           *(float *)(param_1 + 0x84);
  if (*(uint *)(param_1 + 0xa4) != 0) {
    if ((*(uint *)(param_1 + 0xa4) & 1) != 0) {
      pfVar4 = (float *)FUN_145168770(local_114,&DAT_14c7301a8);
      fVar6 = fVar12 * pfVar4[4];
      fVar8 = fVar12 * pfVar4[6];
      fVar7 = fVar14 * pfVar4[2];
      fVar12 = fVar12 * pfVar4[5] + fVar14 * pfVar4[1] + fVar13 * pfVar4[9];
      fVar14 = fVar6 + fVar14 * *pfVar4 + fVar13 * pfVar4[8];
      fVar13 = fVar13 * pfVar4[10] + fVar8 + fVar7;
    }
    if ((*(byte *)(param_1 + 0xa4) & 2) != 0) {
      pfVar4 = (float *)FUN_145168770(local_114,&DAT_14c7301a8);
      fVar6 = fVar9 * pfVar4[4];
      fVar8 = fVar9 * pfVar4[6];
      fVar7 = fVar11 * pfVar4[2];
      fVar9 = fVar9 * pfVar4[5] + fVar11 * pfVar4[1] + fVar10 * pfVar4[9];
      fVar11 = fVar6 + fVar11 * *pfVar4 + fVar10 * pfVar4[8];
      fVar10 = fVar10 * pfVar4[10] + fVar8 + fVar7;
    }
  }
  *(float *)(param_2 + 0x68) = fVar14;
  *(float *)(param_2 + 0x6c) = fVar12;
  *(float *)(param_2 + 0x70) = fVar13;
  if ((*(byte *)(param_1 + 0x68) & 2) != 0) {
    if ((-0.017453292 <= fVar11) && (fVar11 <= 0.017453292)) {
      fVar11 = 0.0;
    }
    if ((-0.017453292 <= fVar9) && (fVar9 <= 0.017453292)) {
      fVar9 = 0.0;
    }
    if ((-0.017453292 <= fVar10) && (fVar10 <= 0.017453292)) {
      fVar10 = 0.0;
    }
  }
  *(float *)(param_2 + 0x5c) = fVar11;
  *(float *)(param_2 + 0x60) = fVar9;
  *(float *)(param_2 + 100) = fVar10;
  lVar1 = *(longlong *)(param_1 + 0x168);
  if (lVar1 != 0) {
    if (*(uint *)(param_2 + 0x58) < *(uint *)(lVar1 + 0x58)) {
      cVar2 = FUN_14515bd30(*(undefined2 *)(param_1 + 2),*(undefined2 *)(param_1 + 4));
      uVar5 = *(int *)(param_2 + 0x58) - *(int *)(lVar1 + 0x58);
      if (cVar2 == '\0') {
        uVar5 = uVar5 + 0x10000;
      }
    }
    else {
      uVar5 = *(uint *)(param_2 + 0x58) - *(uint *)(lVar1 + 0x58);
    }
    fVar6 = *(float *)(param_1 + 0x13c);
    fVar7 = *(float *)(param_1 + 0x140);
    fVar8 = *(float *)(param_1 + 0x144);
    local_c8 = fVar8 * 0.5;
    local_d4 = 0.0;
    local_118 = (float)uVar5 * *(float *)(param_1 + 0xa0) * 1e-06;
    local_d0 = fVar6 * 0.5;
    local_cc = fVar7 * 0.5;
    local_c4 = *(float *)(param_1 + 0x148) * 0.5;
    local_e0 = fVar11;
    local_dc = fVar9;
    local_d8 = fVar10;
    FUN_145168630(&local_d0,&local_128,&local_e0);
    fVar9 = local_118;
    fVar6 = local_128 * local_118 + fVar6;
    fVar7 = local_124 * local_118 + fVar7;
    fVar8 = local_120 * local_118 + fVar8;
    fVar11 = local_11c * local_118 + *(float *)(param_1 + 0x148);
    fVar10 = fVar6 * fVar6 + fVar7 * fVar7 + fVar8 * fVar8 + fVar11 * fVar11;
    if (fVar10 < 0.0) {
      fVar10 = sqrtf(fVar10);
    }
    else {
      fVar10 = SQRT(fVar10);
    }
    fVar10 = 1.0 / fVar10;
    local_e0 = fVar6 * fVar10;
    local_dc = fVar7 * fVar10;
    local_d8 = fVar8 * fVar10;
    local_d4 = fVar11 * fVar10;
    if ((*(byte *)(param_1 + 0x68) & 4) != 0) {
      local_128 = fVar14;
      local_124 = fVar12;
      local_120 = fVar13;
      FUN_145169340(&local_e0,&local_128,fVar9);
    }
    *(float *)(param_1 + 0x140) = local_dc;
    *(float *)(param_1 + 0x144) = local_d8;
    *(float *)(param_1 + 0x148) = local_d4;
    *(float *)(param_1 + 0x13c) = local_e0;
    *(float *)(param_2 + 0x7c) = local_dc;
    *(float *)(param_2 + 0x80) = local_d8;
    *(float *)(param_2 + 0x84) = local_d4;
    *(float *)(param_2 + 0x78) = local_e0;
  }
LAB_1451692d6:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_c0 ^ (ulonglong)auStack_158);
}



// FUNCTION 145169340 FUN_145169340 body=920 status=ok
// SIG undefined FUN_145169340(void)

void FUN_145169340(float *param_1,float *param_2,float param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  undefined1 local_a8 [160];
  
  fVar3 = param_2[1];
  fVar9 = *param_2;
  fVar10 = param_2[2];
  fVar4 = fVar9 * fVar9 + fVar3 * fVar3 + fVar10 * fVar10;
  if (fVar4 < 0.0) {
    fVar4 = sqrtf(fVar4);
  }
  else {
    fVar4 = SQRT(fVar4);
  }
  if (ABS(fVar4 - 1.0) < 0.08) {
    fVar4 = *param_1;
    fVar2 = param_1[3];
    fVar8 = param_1[1];
    fVar11 = param_1[2];
    fVar7 = (fVar8 * fVar10 + fVar2 * fVar9) - fVar11 * fVar3;
    fVar6 = (fVar11 * fVar9 + fVar2 * fVar3) - fVar4 * fVar10;
    fVar5 = (fVar2 * fVar10 + fVar4 * fVar3) - fVar8 * fVar9;
    fVar3 = fVar4 * fVar9 + fVar8 * fVar3 + fVar11 * fVar10;
    fVar9 = ((fVar4 * fVar3 + fVar2 * fVar7) - fVar11 * fVar6) + fVar8 * fVar5;
    fVar10 = ((fVar8 * fVar3 + fVar2 * fVar6) - fVar4 * fVar5) + fVar11 * fVar7;
    fVar4 = ((fVar11 * fVar3 + fVar2 * fVar5) - fVar8 * fVar7) + fVar4 * fVar6;
    fVar3 = fVar9 * fVar9 + fVar10 * fVar10 + fVar4 * fVar4;
    if (fVar3 < 0.0) {
      fVar3 = sqrtf(fVar3);
    }
    else {
      fVar3 = SQRT(fVar3);
    }
    fVar3 = 1.0 / fVar3;
    fVar5 = fVar3 * fVar9 * 0.0;
    fVar2 = fVar3 * fVar10 * 0.0;
    fVar8 = fVar3 * fVar9 - fVar2;
    fVar2 = fVar2 - fVar3 * fVar4;
    fVar4 = fVar3 * fVar4 * 0.0;
    fVar11 = fVar4 - fVar5;
    fVar9 = fVar2 * fVar2 + fVar11 * fVar11 + fVar8 * fVar8;
    if (fVar9 < 0.0) {
      fVar9 = sqrtf(fVar9);
    }
    else {
      fVar9 = SQRT(fVar9);
    }
    if (0.01 < fVar9) {
      fVar10 = atan2f(fVar9,fVar3 * fVar10 + fVar5 + fVar4);
      fVar3 = 2.0;
      if (param_3 / 0.008 <= 2.0) {
        fVar3 = param_3 / 0.008;
      }
      fVar3 = fVar10 * fVar3 * 0.04 * 0.5;
      local_b0 = sinf(fVar3);
      local_b0 = local_b0 / fVar9;
      local_b8 = fVar2 * local_b0;
      local_b4 = fVar11 * local_b0;
      local_b0 = fVar8 * local_b0;
      local_ac = cosf(fVar3);
      pfVar1 = (float *)FUN_145168630(&local_b8,local_a8,param_1);
      *param_1 = *pfVar1;
      param_1[1] = pfVar1[1];
      param_1[2] = pfVar1[2];
      param_1[3] = pfVar1[3];
    }
  }
  return;
}



// FUNCTION 1451696e0 FUN_1451696e0 body=48 status=ok
// SIG undefined FUN_1451696e0(void)

void FUN_1451696e0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 145169710 FUN_145169710 body=48 status=ok
// SIG undefined FUN_145169710(void)

void FUN_145169710(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 145169740 FUN_145169740 body=48 status=ok
// SIG undefined FUN_145169740(void)

void FUN_145169740(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 145169770 FUN_145169770 body=58 status=ok
// SIG undefined FUN_145169770(void)

longlong * FUN_145169770(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + -0x10);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)))();
  }
  return param_1;
}



// FUNCTION 1451697b0 FUN_1451697b0 body=49 status=ok
// SIG undefined FUN_1451697b0(void)

int FUN_1451697b0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  (*(code *)**(undefined8 **)
              (*(longlong *)(param_1 + 0x10) + 8 +
              (longlong)*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 4)))();
  LOCK();
  piVar1 = (int *)(param_1 + 0x70);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2;
}



// FUNCTION 1451697f0 FUN_1451697f0 body=77 status=ok
// SIG undefined FUN_1451697f0(void)

undefined8 FUN_1451697f0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  (**(code **)(*(longlong *)(param_1[2] + 8 + (longlong)*(int *)(*(longlong *)(param_1[2] + 8) + 4))
              + 8))();
  LOCK();
  plVar1 = param_1 + 0xe;
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar2 == 1) {
    (**(code **)(*param_1 + 0x20))(param_1,1);
    return 1;
  }
  return 0;
}



// FUNCTION 1451698a0 FUN_1451698a0 body=42 status=ok
// SIG undefined FUN_1451698a0(void)

undefined1 FUN_1451698a0(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 8))();
  return uVar1;
}



// FUNCTION 1451698d0 FUN_1451698d0 body=42 status=ok
// SIG undefined FUN_1451698d0(void)

undefined1 FUN_1451698d0(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x10))();
  return uVar1;
}



// FUNCTION 145169900 FUN_145169900 body=42 status=ok
// SIG undefined FUN_145169900(void)

undefined1 FUN_145169900(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x18))();
  return uVar1;
}



// FUNCTION 145169930 FUN_145169930 body=43 status=ok
// SIG undefined FUN_145169930(void)

undefined8 * FUN_145169930(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 145169960 FUN_145169960 body=189 status=ok
// SIG undefined FUN_145169960(void)

undefined8 * FUN_145169960(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149c36d48;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)(param_1 + 1) = DAT_14c7301d8;
  param_1[3] = param_1;
  memset(param_1 + 4,0,0x50);
  param_1[5] = &LAB_145169880;
  param_1[6] = FUN_1451698a0;
  param_1[7] = FUN_1451698d0;
  param_1[8] = FUN_145169900;
  param_1[4] = 0x50;
  *param_1 = &PTR_FUN_149c36d70;
  param_1[9] = FUN_145169d70;
  param_1[10] = FUN_145169e70;
  param_1[0xb] = FUN_145169f40;
  param_1[0xc] = FUN_14516a000;
  param_1[0xd] = FUN_14516a0c0;
  return param_1;
}



// FUNCTION 145169a20 FUN_145169a20 body=43 status=ok
// SIG undefined FUN_145169a20(void)

undefined8 * FUN_145169a20(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 145169a50 FUN_145169a50 body=135 status=ok
// SIG undefined FUN_145169a50(void)

undefined8 * FUN_145169a50(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (*param_1 == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    lVar1 = FUN_14494321d(0x70);
    if (lVar1 == 0) {
      puVar2 = (undefined8 *)0x0;
    }
    else {
      puVar2 = (undefined8 *)FUN_1453df2c0(lVar1);
    }
    puVar2[2] = *param_1;
    (**(code **)*puVar2)(puVar2);
    lVar1 = *param_1;
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
    puVar2 = puVar2 + 4;
  }
  return puVar2;
}



// FUNCTION 145169ae0 FUN_145169ae0 body=135 status=ok
// SIG undefined FUN_145169ae0(void)

undefined8 * FUN_145169ae0(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (*param_1 == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    lVar1 = FUN_14494321d(0x98);
    if (lVar1 == 0) {
      puVar2 = (undefined8 *)0x0;
    }
    else {
      puVar2 = (undefined8 *)FUN_1453df800(lVar1);
    }
    puVar2[2] = *param_1;
    (**(code **)*puVar2)(puVar2);
    lVar1 = *param_1;
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
    puVar2 = puVar2 + 4;
  }
  return puVar2;
}



// FUNCTION 145169b70 FUN_145169b70 body=135 status=ok
// SIG undefined FUN_145169b70(void)

undefined8 * FUN_145169b70(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (*param_1 == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    lVar1 = FUN_14494321d(0x68);
    if (lVar1 == 0) {
      puVar2 = (undefined8 *)0x0;
    }
    else {
      puVar2 = (undefined8 *)FUN_1453e0570(lVar1);
    }
    puVar2[2] = *param_1;
    (**(code **)*puVar2)(puVar2);
    lVar1 = *param_1;
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
    puVar2 = puVar2 + 4;
  }
  return puVar2;
}



// FUNCTION 145169c00 FUN_145169c00 body=230 status=ok
// SIG undefined FUN_145169c00(void)

longlong * FUN_145169c00(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  uVar3 = 0;
  if (param_2 == 0) {
    *param_1 = 0;
  }
  else {
    puVar2 = (undefined4 *)FUN_14494321d(0x38);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      FUN_14516ba10(puVar2 + 4,1,param_3,param_4,uVar3,uVar4);
    }
    *puVar2 = DAT_14c7301f0;
    *(longlong *)(puVar2 + 2) = param_2;
    puVar1 = puVar2 + 4;
    if (puVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined8 **)
                  ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1))();
    }
    if (*(code **)(*(longlong *)(puVar2 + 2) + 0x10) != (code *)0x0) {
      (**(code **)(*(longlong *)(puVar2 + 2) + 0x10))();
    }
    *param_1 = (longlong)puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined8 **)
                  ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1))();
      (**(code **)(*(longlong *)
                    ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1) + 8))
                ();
    }
  }
  return param_1;
}



// FUNCTION 145169cf0 FUN_145169cf0 body=123 status=ok
// SIG undefined FUN_145169cf0(void)

longlong * FUN_145169cf0(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  
  if (param_2 == 0) {
    *param_1 = 0;
  }
  else {
    puVar1 = (undefined4 *)FUN_14494321d(0x18);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      FUN_1453e0920(puVar1 + 4);
    }
    *puVar1 = DAT_14c744164;
    *(longlong *)(puVar1 + 2) = param_2;
    *param_1 = (longlong)(puVar1 + 4);
  }
  return param_1;
}



// FUNCTION 145169d70 FUN_145169d70 body=250 status=ok
// SIG undefined FUN_145169d70(void)

void FUN_145169d70(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 local_res8 [2];
  longlong local_res20;
  undefined **local_20;
  longlong local_18;
  char local_10;
  
  local_res8[0] = 0;
  if ((param_1 != 0) && (param_3 != 0)) {
    puVar1 = (undefined8 *)FUN_145169770(&local_res20,param_1,param_3,param_4,0xfffffffffffffffe);
    puVar1 = (undefined8 *)*puVar1;
    uVar2 = FUN_145169c00(local_res8,param_3);
    local_20 = &PTR_FUN_14ba6d600;
    local_18 = 0;
    if (param_2 != 0) {
      local_18 = param_2;
    }
    local_10 = '\0';
    (**(code **)*puVar1)(puVar1,&local_20,uVar2);
    local_20 = &PTR_FUN_14ba6d600;
    if (local_18 != 0) {
      if (local_10 != '\0') {
        cef_string_utf16_clear();
        thunk_FUN_1400020a8(local_18,0x18);
      }
      local_18 = 0;
      local_10 = '\0';
    }
    if (local_res20 != 0) {
      (**(code **)(*(longlong *)
                    (local_res20 + 8 + (longlong)*(int *)(*(longlong *)(local_res20 + 8) + 4)) + 8))
                ();
    }
  }
  return;
}



// FUNCTION 145169e70 FUN_145169e70 body=174 status=ok
// SIG undefined FUN_145169e70(void)

void FUN_145169e70(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined4 local_res8;
  undefined4 uStackX_c;
  longlong local_res18;
  undefined8 *local_res20;
  
  local_res8 = 0;
  if ((param_1 != 0) && (param_2 != 0)) {
    plVar2 = (longlong *)FUN_145169cf0(&local_res8);
    puVar1 = (undefined8 *)*plVar2;
    *plVar2 = 0;
    puVar3 = (undefined8 *)CONCAT44(uStackX_c,local_res8);
    local_res20 = puVar1;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
    puVar3 = (undefined8 *)FUN_145169770(&local_res18,param_1);
    (**(code **)(*(longlong *)*puVar3 + 8))((longlong *)*puVar3,puVar1);
    if (local_res18 != 0) {
      (**(code **)(*(longlong *)
                    (local_res18 + 8 + (longlong)*(int *)(*(longlong *)(local_res18 + 8) + 4)) + 8))
                ();
    }
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  return;
}



// FUNCTION 145169f20 FUN_145169f20 body=20 status=ok
// SIG undefined FUN_145169f20(void)

void FUN_145169f20(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145169f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 145169f40 FUN_145169f40 body=185 status=ok
// SIG undefined FUN_145169f40(void)

undefined8 FUN_145169f40(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulonglong local_res8;
  ulonglong local_res10;
  longlong local_res18 [2];
  
  local_res8 = local_res8 & 0xffffffff00000000;
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    puVar1 = (undefined8 *)FUN_145169770(local_res18,param_1,param_3,param_4,0xfffffffffffffffe);
    (**(code **)(*(longlong *)*puVar1 + 0x10))((longlong *)*puVar1,&local_res10);
    if (local_res18[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_res18[0] + 8 + (longlong)*(int *)(*(longlong *)(local_res18[0] + 8) + 4))
                  + 8))();
    }
    local_res8 = local_res10;
    if (local_res10 != 0) {
      (*(code *)**(undefined8 **)
                  (local_res10 + 8 + (longlong)*(int *)(*(longlong *)(local_res10 + 8) + 4)))();
    }
    uVar2 = FUN_145169b70(&local_res8);
    if (local_res10 != 0) {
      (**(code **)(*(longlong *)
                    (local_res10 + 8 + (longlong)*(int *)(*(longlong *)(local_res10 + 8) + 4)) + 8))
                ();
    }
  }
  return uVar2;
}



// FUNCTION 14516a000 FUN_14516a000 body=185 status=ok
// SIG undefined FUN_14516a000(void)

undefined8 FUN_14516a000(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulonglong local_res8;
  ulonglong local_res10;
  longlong local_res18 [2];
  
  local_res8 = local_res8 & 0xffffffff00000000;
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    puVar1 = (undefined8 *)FUN_145169770(local_res18,param_1,param_3,param_4,0xfffffffffffffffe);
    (**(code **)(*(longlong *)*puVar1 + 0x18))((longlong *)*puVar1,&local_res10);
    if (local_res18[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_res18[0] + 8 + (longlong)*(int *)(*(longlong *)(local_res18[0] + 8) + 4))
                  + 8))();
    }
    local_res8 = local_res10;
    if (local_res10 != 0) {
      (*(code *)**(undefined8 **)
                  (local_res10 + 8 + (longlong)*(int *)(*(longlong *)(local_res10 + 8) + 4)))();
    }
    uVar2 = FUN_145169a50(&local_res8);
    if (local_res10 != 0) {
      (**(code **)(*(longlong *)
                    (local_res10 + 8 + (longlong)*(int *)(*(longlong *)(local_res10 + 8) + 4)) + 8))
                ();
    }
  }
  return uVar2;
}



// FUNCTION 14516a0c0 FUN_14516a0c0 body=185 status=ok
// SIG undefined FUN_14516a0c0(void)

undefined8 FUN_14516a0c0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulonglong local_res8;
  ulonglong local_res10;
  longlong local_res18 [2];
  
  local_res8 = local_res8 & 0xffffffff00000000;
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    puVar1 = (undefined8 *)FUN_145169770(local_res18,param_1,param_3,param_4,0xfffffffffffffffe);
    (**(code **)(*(longlong *)*puVar1 + 0x20))((longlong *)*puVar1,&local_res10);
    if (local_res18[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_res18[0] + 8 + (longlong)*(int *)(*(longlong *)(local_res18[0] + 8) + 4))
                  + 8))();
    }
    local_res8 = local_res10;
    if (local_res10 != 0) {
      (*(code *)**(undefined8 **)
                  (local_res10 + 8 + (longlong)*(int *)(*(longlong *)(local_res10 + 8) + 4)))();
    }
    uVar2 = FUN_145169ae0(&local_res8);
    if (local_res10 != 0) {
      (**(code **)(*(longlong *)
                    (local_res10 + 8 + (longlong)*(int *)(*(longlong *)(local_res10 + 8) + 4)) + 8))
                ();
    }
  }
  return uVar2;
}



// FUNCTION 14516a180 FUN_14516a180 body=58 status=ok
// SIG undefined FUN_14516a180(void)

longlong * FUN_14516a180(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + -0x10);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)))();
  }
  return param_1;
}



// FUNCTION 14516a1c0 FUN_14516a1c0 body=49 status=ok
// SIG undefined FUN_14516a1c0(void)

int FUN_14516a1c0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  (*(code *)**(undefined8 **)
              (*(longlong *)(param_1 + 0x10) + 8 +
              (longlong)*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 4)))();
  LOCK();
  piVar1 = (int *)(param_1 + 0x50);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2;
}



// FUNCTION 14516a200 FUN_14516a200 body=77 status=ok
// SIG undefined FUN_14516a200(void)

undefined8 FUN_14516a200(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  (**(code **)(*(longlong *)(param_1[2] + 8 + (longlong)*(int *)(*(longlong *)(param_1[2] + 8) + 4))
              + 8))();
  LOCK();
  plVar1 = param_1 + 10;
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar2 == 1) {
    (**(code **)(*param_1 + 0x20))(param_1,1);
    return 1;
  }
  return 0;
}



// FUNCTION 14516a2b0 FUN_14516a2b0 body=42 status=ok
// SIG undefined FUN_14516a2b0(void)

undefined1 FUN_14516a2b0(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 8))();
  return uVar1;
}



// FUNCTION 14516a2e0 FUN_14516a2e0 body=42 status=ok
// SIG undefined FUN_14516a2e0(void)

undefined1 FUN_14516a2e0(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x10))();
  return uVar1;
}



// FUNCTION 14516a310 FUN_14516a310 body=42 status=ok
// SIG undefined FUN_14516a310(void)

undefined1 FUN_14516a310(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x18))();
  return uVar1;
}



// FUNCTION 14516a340 FUN_14516a340 body=43 status=ok
// SIG undefined FUN_14516a340(void)

undefined8 * FUN_14516a340(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 14516a370 FUN_14516a370 body=107 status=ok
// SIG undefined FUN_14516a370(void)

undefined8 * FUN_14516a370(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149c36fa0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 1) = DAT_14c7301dc;
  param_1[3] = param_1;
  param_1[5] = &LAB_14516a290;
  param_1[6] = FUN_14516a2b0;
  param_1[7] = FUN_14516a2e0;
  param_1[8] = FUN_14516a310;
  param_1[4] = 0x30;
  *param_1 = &PTR_FUN_149c36fc8;
  param_1[9] = FUN_14516a440;
  return param_1;
}



// FUNCTION 14516a3e0 FUN_14516a3e0 body=84 status=ok
// SIG undefined FUN_14516a3e0(void)

undefined8 *
FUN_14516a3e0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &PTR_FUN_149c36fc8;
  FUN_14516fec0();
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x58,param_3,param_4,uVar1);
  }
  return param_1;
}



// FUNCTION 14516a440 FUN_14516a440 body=97 status=ok
// SIG undefined FUN_14516a440(void)

void FUN_14516a440(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 local_res8;
  undefined4 uStackX_c;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  local_res8 = 0;
  FUN_14516fec0();
  if (param_1 != 0) {
    puVar2 = (undefined8 *)FUN_14516a180(&local_res8,param_1,param_3,param_4,uVar3);
    (*(code *)**(undefined8 **)*puVar2)();
    lVar1 = CONCAT44(uStackX_c,local_res8);
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
  }
  return;
}



// FUNCTION 14516a4b0 FUN_14516a4b0 body=48 status=ok
// SIG undefined FUN_14516a4b0(void)

void FUN_14516a4b0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 14516a4e0 FUN_14516a4e0 body=58 status=ok
// SIG undefined FUN_14516a4e0(void)

longlong * FUN_14516a4e0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + -0x10);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)))();
  }
  return param_1;
}



// FUNCTION 14516a520 FUN_14516a520 body=49 status=ok
// SIG undefined FUN_14516a520(void)

int FUN_14516a520(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  (*(code *)**(undefined8 **)
              (*(longlong *)(param_1 + 0x10) + 8 +
              (longlong)*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 4)))();
  LOCK();
  piVar1 = (int *)(param_1 + 0x50);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2;
}



// FUNCTION 14516a560 FUN_14516a560 body=77 status=ok
// SIG undefined FUN_14516a560(void)

undefined8 FUN_14516a560(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  (**(code **)(*(longlong *)(param_1[2] + 8 + (longlong)*(int *)(*(longlong *)(param_1[2] + 8) + 4))
              + 8))();
  LOCK();
  plVar1 = param_1 + 10;
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar2 == 1) {
    (**(code **)(*param_1 + 0x20))(param_1,1);
    return 1;
  }
  return 0;
}



// FUNCTION 14516a610 FUN_14516a610 body=42 status=ok
// SIG undefined FUN_14516a610(void)

undefined1 FUN_14516a610(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 8))();
  return uVar1;
}



// FUNCTION 14516a640 FUN_14516a640 body=42 status=ok
// SIG undefined FUN_14516a640(void)

undefined1 FUN_14516a640(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x10))();
  return uVar1;
}



// FUNCTION 14516a670 FUN_14516a670 body=42 status=ok
// SIG undefined FUN_14516a670(void)

undefined1 FUN_14516a670(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x18))();
  return uVar1;
}



// FUNCTION 14516a6a0 FUN_14516a6a0 body=43 status=ok
// SIG undefined FUN_14516a6a0(void)

undefined8 * FUN_14516a6a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 14516a6d0 FUN_14516a6d0 body=107 status=ok
// SIG undefined FUN_14516a6d0(void)

undefined8 * FUN_14516a6d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149c37040;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 1) = DAT_14c7301e0;
  param_1[3] = param_1;
  param_1[5] = &LAB_14516a5f0;
  param_1[6] = FUN_14516a610;
  param_1[7] = FUN_14516a640;
  param_1[8] = FUN_14516a670;
  param_1[4] = 0x30;
  *param_1 = &PTR_FUN_149c37068;
  param_1[9] = FUN_14516aa10;
  return param_1;
}



// FUNCTION 14516a740 FUN_14516a740 body=43 status=ok
// SIG undefined FUN_14516a740(void)

undefined8 * FUN_14516a740(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 14516a770 FUN_14516a770 body=135 status=ok
// SIG undefined FUN_14516a770(void)

undefined8 * FUN_14516a770(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (*param_1 == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    lVar1 = FUN_14494321d(0x88);
    if (lVar1 == 0) {
      puVar2 = (undefined8 *)0x0;
    }
    else {
      puVar2 = (undefined8 *)FUN_1453e0c70(lVar1);
    }
    puVar2[2] = *param_1;
    (**(code **)*puVar2)(puVar2);
    lVar1 = *param_1;
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
    puVar2 = puVar2 + 4;
  }
  return puVar2;
}



// FUNCTION 14516a800 FUN_14516a800 body=48 status=ok
// SIG undefined FUN_14516a800(void)

void FUN_14516a800(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 14516a830 FUN_14516a830 body=230 status=ok
// SIG undefined FUN_14516a830(void)

longlong * FUN_14516a830(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  uVar3 = 0;
  if (param_2 == 0) {
    *param_1 = 0;
  }
  else {
    puVar2 = (undefined4 *)FUN_14494321d(0x38);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      FUN_14516c5b0(puVar2 + 4,1,param_3,param_4,uVar3,uVar4);
    }
    *puVar2 = DAT_14c7301f4;
    *(longlong *)(puVar2 + 2) = param_2;
    puVar1 = puVar2 + 4;
    if (puVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined8 **)
                  ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1))();
    }
    if (*(code **)(*(longlong *)(puVar2 + 2) + 0x10) != (code *)0x0) {
      (**(code **)(*(longlong *)(puVar2 + 2) + 0x10))();
    }
    *param_1 = (longlong)puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined8 **)
                  ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1))();
      (**(code **)(*(longlong *)
                    ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1) + 8))
                ();
    }
  }
  return param_1;
}



// FUNCTION 14516a920 FUN_14516a920 body=230 status=ok
// SIG undefined FUN_14516a920(void)

longlong * FUN_14516a920(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  uVar3 = 0;
  if (param_2 == 0) {
    *param_1 = 0;
  }
  else {
    puVar2 = (undefined4 *)FUN_14494321d(0x38);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      FUN_1453e1960(puVar2 + 4,1,param_3,param_4,uVar3,uVar4);
    }
    *puVar2 = DAT_14c74416c;
    *(longlong *)(puVar2 + 2) = param_2;
    puVar1 = puVar2 + 4;
    if (puVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined8 **)
                  ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1))();
    }
    if (*(code **)(*(longlong *)(puVar2 + 2) + 0x10) != (code *)0x0) {
      (**(code **)(*(longlong *)(puVar2 + 2) + 0x10))();
    }
    *param_1 = (longlong)puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined8 **)
                  ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1))();
      (**(code **)(*(longlong *)
                    ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1) + 8))
                ();
    }
  }
  return param_1;
}



// FUNCTION 14516aa10 FUN_14516aa10 body=404 status=ok
// SIG undefined FUN_14516aa10(void)

undefined8
FUN_14516aa10(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             longlong param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *local_res8;
  undefined **local_78;
  longlong local_70;
  char local_68;
  undefined1 *local_60;
  longlong local_58;
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined1 *local_30;
  
  local_38 = 0xfffffffffffffffe;
  if (((param_1 == 0) || (param_4 == 0)) || (param_5 == 0)) {
    uVar2 = 0;
  }
  else {
    local_res8 = local_50;
    local_30 = local_48;
    puVar1 = (undefined8 *)FUN_14516a4e0(&local_58,param_1);
    puVar1 = (undefined8 *)*puVar1;
    uVar2 = FUN_14516a920(local_50,param_5);
    local_78 = &PTR_FUN_14ba6d600;
    local_68 = '\0';
    local_70 = param_4;
    uVar3 = FUN_14516a830(local_48,param_3);
    uVar4 = FUN_144d7a4e0(local_40,param_2);
    (**(code **)*puVar1)(puVar1,&local_60,uVar4,uVar3,&local_78,uVar2);
    local_78 = &PTR_FUN_14ba6d600;
    if (local_70 != 0) {
      if (local_68 != '\0') {
        cef_string_utf16_clear();
        thunk_FUN_1400020a8(local_70,0x18);
      }
      local_70 = 0;
      local_68 = '\0';
    }
    if (local_58 != 0) {
      (**(code **)(*(longlong *)(local_58 + 8 + (longlong)*(int *)(*(longlong *)(local_58 + 8) + 4))
                  + 8))();
    }
    local_res8 = local_60;
    if (local_60 != (undefined1 *)0x0) {
      (*(code *)**(undefined8 **)
                  (local_60 + (longlong)*(int *)(*(longlong *)(local_60 + 8) + 4) + 8))();
    }
    uVar2 = FUN_14516a770(&local_res8);
    if (local_60 != (undefined1 *)0x0) {
      (**(code **)(*(longlong *)(local_60 + (longlong)*(int *)(*(longlong *)(local_60 + 8) + 4) + 8)
                  + 8))();
    }
  }
  return uVar2;
}



// FUNCTION 14516abb0 FUN_14516abb0 body=58 status=ok
// SIG undefined FUN_14516abb0(void)

longlong * FUN_14516abb0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + -0x10);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)))();
  }
  return param_1;
}



// FUNCTION 14516abf0 FUN_14516abf0 body=49 status=ok
// SIG undefined FUN_14516abf0(void)

int FUN_14516abf0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  (*(code *)**(undefined8 **)
              (*(longlong *)(param_1 + 0x10) + 8 +
              (longlong)*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 4)))();
  LOCK();
  piVar1 = (int *)(param_1 + 0x50);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2;
}



// FUNCTION 14516ac30 FUN_14516ac30 body=77 status=ok
// SIG undefined FUN_14516ac30(void)

undefined8 FUN_14516ac30(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  (**(code **)(*(longlong *)(param_1[2] + 8 + (longlong)*(int *)(*(longlong *)(param_1[2] + 8) + 4))
              + 8))();
  LOCK();
  plVar1 = param_1 + 10;
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar2 == 1) {
    (**(code **)(*param_1 + 0x20))(param_1,1);
    return 1;
  }
  return 0;
}



// FUNCTION 14516ace0 FUN_14516ace0 body=42 status=ok
// SIG undefined FUN_14516ace0(void)

undefined1 FUN_14516ace0(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 8))();
  return uVar1;
}



// FUNCTION 14516ad10 FUN_14516ad10 body=42 status=ok
// SIG undefined FUN_14516ad10(void)

undefined1 FUN_14516ad10(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x10))();
  return uVar1;
}



// FUNCTION 14516ad40 FUN_14516ad40 body=42 status=ok
// SIG undefined FUN_14516ad40(void)

undefined1 FUN_14516ad40(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x18))();
  return uVar1;
}



// FUNCTION 14516ad70 FUN_14516ad70 body=43 status=ok
// SIG undefined FUN_14516ad70(void)

undefined8 * FUN_14516ad70(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 14516ada0 FUN_14516ada0 body=107 status=ok
// SIG undefined FUN_14516ada0(void)

undefined8 * FUN_14516ada0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149c37180;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 1) = DAT_14c7301e4;
  param_1[3] = param_1;
  param_1[5] = &LAB_14516acc0;
  param_1[6] = FUN_14516ace0;
  param_1[7] = FUN_14516ad10;
  param_1[8] = FUN_14516ad40;
  param_1[4] = 0x30;
  *param_1 = &PTR_FUN_149c371a8;
  param_1[9] = FUN_14516ae40;
  return param_1;
}



// FUNCTION 14516ae10 FUN_14516ae10 body=43 status=ok
// SIG undefined FUN_14516ae10(void)

undefined8 * FUN_14516ae10(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 14516ae40 FUN_14516ae40 body=86 status=ok
// SIG undefined FUN_14516ae40(void)

void FUN_14516ae40(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 local_res8;
  undefined4 uStackX_c;
  
  local_res8 = 0;
  if (param_1 != 0) {
    puVar2 = (undefined8 *)FUN_14516abb0(&local_res8,param_1,param_3,param_4,0xfffffffffffffffe);
    (*(code *)**(undefined8 **)*puVar2)();
    lVar1 = CONCAT44(uStackX_c,local_res8);
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
  }
  return;
}



// FUNCTION 14516aea0 FUN_14516aea0 body=20 status=ok
// SIG undefined FUN_14516aea0(void)

undefined8 * FUN_14516aea0(undefined8 *param_1)

{
  *param_1 = 0;
  return param_1;
}



// FUNCTION 14516aec0 FUN_14516aec0 body=230 status=ok
// SIG undefined FUN_14516aec0(void)

longlong * FUN_14516aec0(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  uVar3 = 0;
  if (param_2 == 0) {
    *param_1 = 0;
  }
  else {
    puVar2 = (undefined4 *)FUN_14494321d(0x38);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      FUN_1453e2890(puVar2 + 4,1,param_3,param_4,uVar3,uVar4);
    }
    *puVar2 = DAT_14c744170;
    *(longlong *)(puVar2 + 2) = param_2;
    puVar1 = puVar2 + 4;
    if (puVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined8 **)
                  ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1))();
    }
    if (*(code **)(*(longlong *)(puVar2 + 2) + 0x10) != (code *)0x0) {
      (**(code **)(*(longlong *)(puVar2 + 2) + 0x10))();
    }
    *param_1 = (longlong)puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined8 **)
                  ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1))();
      (**(code **)(*(longlong *)
                    ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1) + 8))
                ();
    }
  }
  return param_1;
}



// FUNCTION 14516afb0 FUN_14516afb0 body=156 status=ok
// SIG undefined FUN_14516afb0(void)

undefined8 FUN_14516afb0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else if (*(int *)(lVar1 + -0x10) == DAT_14c744170) {
    pcVar2 = *(code **)(*(longlong *)(lVar1 + -8) + 8);
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)();
    }
    uVar3 = *(undefined8 *)(lVar1 + -8);
    lVar1 = *param_1;
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
  }
  else {
    uVar3 = FUN_1453e2820(*(int *)(lVar1 + -0x10),lVar1,param_3,param_4,0xfffffffffffffffe);
    lVar1 = *param_1;
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
  }
  return uVar3;
}



// FUNCTION 14516b050 FUN_14516b050 body=48 status=ok
// SIG undefined FUN_14516b050(void)

void FUN_14516b050(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 14516b080 FUN_14516b080 body=230 status=ok
// SIG undefined FUN_14516b080(void)

longlong * FUN_14516b080(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  uVar3 = 0;
  if (param_2 == 0) {
    *param_1 = 0;
  }
  else {
    puVar2 = (undefined4 *)FUN_14494321d(0x38);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      FUN_1453e4170(puVar2 + 4,1,param_3,param_4,uVar3,uVar4);
    }
    *puVar2 = DAT_14c744174;
    *(longlong *)(puVar2 + 2) = param_2;
    puVar1 = puVar2 + 4;
    if (puVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined8 **)
                  ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1))();
    }
    if (*(code **)(*(longlong *)(puVar2 + 2) + 0x10) != (code *)0x0) {
      (**(code **)(*(longlong *)(puVar2 + 2) + 0x10))();
    }
    *param_1 = (longlong)puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined8 **)
                  ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1))();
      (**(code **)(*(longlong *)
                    ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1) + 8))
                ();
    }
  }
  return param_1;
}



// FUNCTION 14516b170 FUN_14516b170 body=48 status=ok
// SIG undefined FUN_14516b170(void)

void FUN_14516b170(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 14516b1a0 FUN_14516b1a0 body=48 status=ok
// SIG undefined FUN_14516b1a0(void)

longlong FUN_14516b1a0(longlong param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x10,0x18);
    return param_1 + -0x10;
  }
  return param_1 + -0x10;
}



// FUNCTION 14516b1d0 FUN_14516b1d0 body=40 status=ok
// SIG undefined FUN_14516b1d0(void)

int FUN_14516b1d0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  
  pcVar3 = *(code **)(*(longlong *)(param_1 + -0x28) + 8);
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)();
  }
  LOCK();
  piVar1 = (int *)(param_1 + -0x10);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2;
}



// FUNCTION 14516b200 FUN_14516b200 body=105 status=ok
// SIG undefined FUN_14516b200(void)

undefined8 FUN_14516b200(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(code **)(param_1[-5] + 0x10) != (code *)0x0) {
    (**(code **)(param_1[-5] + 0x10))();
  }
  LOCK();
  piVar1 = (int *)(param_1 + -2);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    if (param_1 + -6 != (undefined8 *)0x0) {
      FUN_14516b3f0(param_1);
      *param_1 = &PTR__purecall_14ba6c6b0;
      thunk_FUN_1400020a8(param_1 + -6,0x38);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 14516b270 FUN_14516b270 body=34 status=ok
// SIG undefined FUN_14516b270(void)

bool FUN_14516b270(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(*(longlong *)(param_1 + -0x28) + 0x18);
  if (pcVar1 == (code *)0x0) {
    return false;
  }
  iVar2 = (*pcVar1)();
  return iVar2 != 0;
}



// FUNCTION 14516b2a0 FUN_14516b2a0 body=38 status=ok
// SIG undefined FUN_14516b2a0(void)

bool FUN_14516b2a0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + -0x28);
  if (*(longlong *)(lVar1 + 0x18) == 0) {
    return false;
  }
  iVar2 = (**(code **)(lVar1 + 0x20))(lVar1);
  return iVar2 != 0;
}



// FUNCTION 14516b2d0 FUN_14516b2d0 body=11 status=ok
// SIG undefined FUN_14516b2d0(void)

undefined8 FUN_14516b2d0(void)

{
  return 0;
}



// FUNCTION 14516b2e0 FUN_14516b2e0 body=85 status=ok
// SIG undefined FUN_14516b2e0(void)

longlong FUN_14516b2e0(longlong param_1,ulonglong param_2)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_149c37320;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149c37358;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x20,0x28);
  }
  return param_1 + -0x20;
}



// FUNCTION 14516b340 FUN_14516b340 body=167 status=ok
// SIG undefined FUN_14516b340(void)

undefined8 * FUN_14516b340(undefined8 *param_1,int param_2)

{
  if (param_2 != 0) {
    param_1[1] = &DAT_149c373e0;
    param_1[4] = &PTR__purecall_14ba6c6b0;
  }
  *param_1 = &PTR__purecall_149c372c0;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) =
       &PTR__purecall_149c372f8;
  *param_1 = &PTR__purecall_149c37320;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149c37358;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_149c37380;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149c373b8;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  return param_1;
}



// FUNCTION 14516b3f0 FUN_14516b3f0 body=124 status=ok
// SIG undefined FUN_14516b3f0(void)

void FUN_14516b3f0(longlong param_1)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR_FUN_149c37380;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149c373b8;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  FUN_14516fec0();
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_149c37320;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149c37358;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  return;
}



// FUNCTION 14516b470 FUN_14516b470 body=54 status=ok
// SIG undefined FUN_14516b470(void)

bool FUN_14516b470(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_14516fec0();
  if ((0x2f < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[5], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 14516b4b0 FUN_14516b4b0 body=54 status=ok
// SIG undefined FUN_14516b4b0(void)

bool FUN_14516b4b0(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_14516fec0();
  if ((0x37 < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[6], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 14516b4f0 FUN_14516b4f0 body=202 status=ok
// SIG undefined FUN_14516b4f0(void)

ulonglong FUN_14516b4f0(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong local_res8;
  ulonglong *local_res10;
  
  local_res8 = local_res8 & 0xffffffff00000000;
  local_res10 = param_2;
  uVar4 = FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((*puVar1 < 0x40) || (puVar1[7] == 0)) {
    uVar2 = *param_2;
    if (uVar2 != 0) {
      uVar4 = (**(code **)(*(longlong *)
                            ((longlong)*(int *)(*(longlong *)(uVar2 + 8) + 4) + uVar2 + 8) + 8))();
    }
  }
  else {
    local_res8 = *param_2;
    if (local_res8 != 0) {
      if (local_res8 != 0) {
        (*(code *)**(undefined8 **)
                    (local_res8 + 8 + (longlong)*(int *)(*(longlong *)(local_res8 + 8) + 4)))();
      }
      uVar5 = FUN_144d750c0(&local_res8);
      iVar3 = (*(code *)puVar1[7])(puVar1,uVar5);
      uVar4 = *param_2;
      if (uVar4 != 0) {
        (**(code **)(*(longlong *)(uVar4 + 8 + (longlong)*(int *)(*(longlong *)(uVar4 + 8) + 4)) + 8
                    ))();
      }
      return (ulonglong)(iVar3 != 0);
    }
    uVar4 = 0;
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 14516b5c0 FUN_14516b5c0 body=202 status=ok
// SIG undefined FUN_14516b5c0(void)

ulonglong FUN_14516b5c0(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong local_res8;
  ulonglong *local_res10;
  
  local_res8 = local_res8 & 0xffffffff00000000;
  local_res10 = param_2;
  uVar4 = FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((*puVar1 < 0x48) || (puVar1[8] == 0)) {
    uVar2 = *param_2;
    if (uVar2 != 0) {
      uVar4 = (**(code **)(*(longlong *)
                            ((longlong)*(int *)(*(longlong *)(uVar2 + 8) + 4) + uVar2 + 8) + 8))();
    }
  }
  else {
    local_res8 = *param_2;
    if (local_res8 != 0) {
      if (local_res8 != 0) {
        (*(code *)**(undefined8 **)
                    (local_res8 + 8 + (longlong)*(int *)(*(longlong *)(local_res8 + 8) + 4)))();
      }
      uVar5 = FUN_144d750c0(&local_res8);
      iVar3 = (*(code *)puVar1[8])(puVar1,uVar5);
      uVar4 = *param_2;
      if (uVar4 != 0) {
        (**(code **)(*(longlong *)(uVar4 + 8 + (longlong)*(int *)(*(longlong *)(uVar4 + 8) + 4)) + 8
                    ))();
      }
      return (ulonglong)(iVar3 != 0);
    }
    uVar4 = 0;
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 14516b690 FUN_14516b690 body=96 status=ok
// SIG undefined FUN_14516b690(void)

undefined8 *
FUN_14516b690(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  FUN_14516fec0();
  if ((0x4f < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[9], pcVar1 != (code *)0x0)) {
    uVar2 = (*pcVar1)();
    FUN_144d736f0(param_2,uVar2,param_3,param_4,uVar3);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14516b6f0 FUN_14516b6f0 body=49 status=ok
// SIG undefined FUN_14516b6f0(void)

undefined8 FUN_14516b6f0(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  FUN_14516fec0();
  if ((0x57 < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[10],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014516b716. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}



// FUNCTION 14516b730 FUN_14516b730 body=105 status=ok
// SIG undefined FUN_14516b730(void)

undefined8 FUN_14516b730(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if (((*puVar1 < 0x60) || ((code *)puVar1[0xb] == (code *)0x0)) || (param_2 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = (*(code *)puVar1[0xb])(puVar1,param_2,param_3,param_4);
  }
  return uVar2;
}



// FUNCTION 14516b7a0 FUN_14516b7a0 body=64 status=ok
// SIG undefined FUN_14516b7a0(void)

undefined8 * FUN_14516b7a0(undefined8 *param_1,ulonglong param_2)

{
  FUN_14516b3f0();
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -4,0x28);
  }
  return param_1 + -4;
}



// FUNCTION 14516b830 FUN_14516b830 body=48 status=ok
// SIG undefined FUN_14516b830(void)

longlong FUN_14516b830(longlong param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x10,0x18);
    return param_1 + -0x10;
  }
  return param_1 + -0x10;
}



// FUNCTION 14516b860 FUN_14516b860 body=40 status=ok
// SIG undefined FUN_14516b860(void)

int FUN_14516b860(longlong param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  
  pcVar3 = *(code **)(*(longlong *)(param_1 + -0x28) + 8);
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)();
  }
  LOCK();
  piVar1 = (int *)(param_1 + -0x10);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2;
}



// FUNCTION 14516b890 FUN_14516b890 body=181 status=ok
// SIG undefined FUN_14516b890(void)

undefined8 FUN_14516b890(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if (*(code **)(param_1[-5] + 0x10) != (code *)0x0) {
    (**(code **)(param_1[-5] + 0x10))();
  }
  LOCK();
  piVar1 = (int *)(param_1 + -2);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    puVar3 = param_1 + -6;
    if (puVar3 != (undefined8 *)0x0) {
      param_1[-4] = &PTR_FUN_149c375f0;
      *(undefined ***)((longlong)*(int *)(param_1[-3] + 4) + 0x18 + (longlong)puVar3) =
           &PTR_LAB_149c37690;
      *(int *)((longlong)*(int *)(param_1[-3] + 4) + 0x14 + (longlong)puVar3) =
           *(int *)(param_1[-3] + 4) + -0x18;
      param_1[-4] = &PTR__purecall_149c37528;
      *(undefined ***)((longlong)*(int *)(param_1[-3] + 4) + 0x18 + (longlong)puVar3) =
           &PTR_LAB_149c375c8;
      *(int *)((longlong)*(int *)(param_1[-3] + 4) + 0x14 + (longlong)puVar3) =
           *(int *)(param_1[-3] + 4) + -0x18;
      *param_1 = &PTR__purecall_14ba6c6b0;
      thunk_FUN_1400020a8(puVar3,0x38);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 14516b950 FUN_14516b950 body=34 status=ok
// SIG undefined FUN_14516b950(void)

bool FUN_14516b950(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(*(longlong *)(param_1 + -0x28) + 0x18);
  if (pcVar1 == (code *)0x0) {
    return false;
  }
  iVar2 = (*pcVar1)();
  return iVar2 != 0;
}



// FUNCTION 14516b980 FUN_14516b980 body=38 status=ok
// SIG undefined FUN_14516b980(void)

bool FUN_14516b980(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + -0x28);
  if (*(longlong *)(lVar1 + 0x18) == 0) {
    return false;
  }
  iVar2 = (**(code **)(lVar1 + 0x20))(lVar1);
  return iVar2 != 0;
}



// FUNCTION 14516b9b0 FUN_14516b9b0 body=85 status=ok
// SIG undefined FUN_14516b9b0(void)

longlong FUN_14516b9b0(longlong param_1,ulonglong param_2)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_149c37528;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149c375c8;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x20,0x28);
  }
  return param_1 + -0x20;
}



// FUNCTION 14516ba10 FUN_14516ba10 body=167 status=ok
// SIG undefined FUN_14516ba10(void)

undefined8 * FUN_14516ba10(undefined8 *param_1,int param_2)

{
  if (param_2 != 0) {
    param_1[1] = &DAT_149c376b8;
    param_1[4] = &PTR__purecall_14ba6c6b0;
  }
  *param_1 = &PTR__purecall_149c37460;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) =
       &PTR__purecall_149c37500;
  *param_1 = &PTR__purecall_149c37528;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149c375c8;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_149c375f0;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149c37690;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  return param_1;
}



// FUNCTION 14516bac0 FUN_14516bac0 body=42 status=ok
// SIG undefined FUN_14516bac0(void)

bool FUN_14516bac0(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  if ((0x2f < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[5], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 14516baf0 FUN_14516baf0 body=42 status=ok
// SIG undefined FUN_14516baf0(void)

bool FUN_14516baf0(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  if ((0x37 < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[6], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 14516bb20 FUN_14516bb20 body=68 status=ok
// SIG undefined FUN_14516bb20(void)

undefined8 *
FUN_14516bb20(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if ((0x3f < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[7], pcVar1 != (code *)0x0)) {
    uVar2 = (*pcVar1)();
    FUN_145169c00(param_2,uVar2,param_3,param_4,uVar3);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14516bbf0 FUN_14516bbf0 body=124 status=ok
// SIG undefined FUN_14516bbf0(void)

void FUN_14516bbf0(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x5f < *puVar1) && (puVar1[0xb] != 0)) {
    lVar2 = cef_string_list_alloc();
    if (lVar2 != 0) {
      FUN_14516e860(param_2,lVar2);
    }
    (*(code *)puVar1[0xb])(puVar1,lVar2);
    if (lVar2 != 0) {
      FUN_144d739a0(param_2);
      FUN_14516e770(lVar2,param_2);
      cef_string_list_free(lVar2);
    }
  }
  return;
}



// FUNCTION 14516bc70 FUN_14516bc70 body=214 status=ok
// SIG undefined FUN_14516bc70(void)

undefined8 * FUN_14516bc70(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined **local_28;
  undefined8 *local_20;
  char local_18;
  
  uVar6 = 0xfffffffffffffffe;
  uVar4 = 0;
  uVar5 = 0;
  if ((**(ulonglong **)(param_1 + -8) < 0x68) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0xc], pcVar1 == (code *)0x0)) {
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else {
    uVar3 = (*pcVar1)();
    local_28 = &PTR_FUN_14ba6d600;
    local_20 = (undefined8 *)0x0;
    local_18 = '\0';
    FUN_144d73b20(&local_28,uVar3);
    puVar2 = local_20;
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    uVar3 = uVar4;
    if (local_20 != (undefined8 *)0x0) {
      uVar4 = *local_20;
      uVar3 = local_20[1];
    }
    FUN_149048250(param_2,uVar4,uVar3,1,uVar5,uVar6);
    if ((puVar2 != (undefined8 *)0x0) && (local_18 != '\0')) {
      cef_string_utf16_clear(puVar2);
      thunk_FUN_1400020a8(puVar2,0x18);
    }
  }
  return param_2;
}



// FUNCTION 14516bd50 FUN_14516bd50 body=214 status=ok
// SIG undefined FUN_14516bd50(void)

undefined8 * FUN_14516bd50(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined **local_28;
  undefined8 *local_20;
  char local_18;
  
  uVar6 = 0xfffffffffffffffe;
  uVar4 = 0;
  uVar5 = 0;
  if ((**(ulonglong **)(param_1 + -8) < 0x70) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0xd], pcVar1 == (code *)0x0)) {
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else {
    uVar3 = (*pcVar1)();
    local_28 = &PTR_FUN_14ba6d600;
    local_20 = (undefined8 *)0x0;
    local_18 = '\0';
    FUN_144d73b20(&local_28,uVar3);
    puVar2 = local_20;
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    uVar3 = uVar4;
    if (local_20 != (undefined8 *)0x0) {
      uVar4 = *local_20;
      uVar3 = local_20[1];
    }
    FUN_149048250(param_2,uVar4,uVar3,1,uVar5,uVar6);
    if ((puVar2 != (undefined8 *)0x0) && (local_18 != '\0')) {
      cef_string_utf16_clear(puVar2);
      thunk_FUN_1400020a8(puVar2,0x18);
    }
  }
  return param_2;
}



// FUNCTION 14516be60 FUN_14516be60 body=45 status=ok
// SIG undefined FUN_14516be60(void)

bool FUN_14516be60(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  if ((0x7f < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0xf], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 14516be90 FUN_14516be90 body=72 status=ok
// SIG undefined FUN_14516be90(void)

bool FUN_14516be90(longlong param_1,longlong param_2)

{
  code *pcVar1;
  int iVar2;
  
  if ((((0x87 < **(ulonglong **)(param_1 + -8)) &&
       (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x10], pcVar1 != (code *)0x0)) &&
      (*(longlong *)(param_2 + 8) != 0)) && (*(longlong *)(*(longlong *)(param_2 + 8) + 8) != 0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 14516bee0 FUN_14516bee0 body=259 status=ok
// SIG undefined FUN_14516bee0(void)

undefined8 * FUN_14516bee0(longlong param_1,undefined8 *param_2,longlong param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined **local_28;
  undefined8 *local_20;
  char local_18;
  
  uVar6 = 0xfffffffffffffffe;
  uVar4 = 0;
  uVar5 = 0;
  if ((**(ulonglong **)(param_1 + -8) < 0x90) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x11], pcVar1 == (code *)0x0)) {
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else if ((*(longlong *)(param_3 + 8) == 0) || (*(longlong *)(*(longlong *)(param_3 + 8) + 8) == 0)
          ) {
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else {
    uVar3 = (*pcVar1)();
    local_28 = &PTR_FUN_14ba6d600;
    local_20 = (undefined8 *)0x0;
    local_18 = '\0';
    FUN_144d73b20(&local_28,uVar3);
    puVar2 = local_20;
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    uVar3 = uVar4;
    if (local_20 != (undefined8 *)0x0) {
      uVar4 = *local_20;
      uVar3 = local_20[1];
    }
    FUN_149048250(param_2,uVar4,uVar3,1,uVar5,uVar6);
    if ((puVar2 != (undefined8 *)0x0) && (local_18 != '\0')) {
      cef_string_utf16_clear(puVar2);
      thunk_FUN_1400020a8(puVar2,0x18);
    }
  }
  return param_2;
}



// FUNCTION 14516bff0 FUN_14516bff0 body=168 status=ok
// SIG undefined FUN_14516bff0(void)

void FUN_14516bff0(longlong param_1,longlong *param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x97 < *puVar1) && (puVar1[0x12] != 0)) {
    lVar2 = cef_string_map_alloc();
    if (lVar2 != 0) {
      FUN_14516eb30(param_2,lVar2);
    }
    (*(code *)puVar1[0x12])(puVar1,lVar2);
    if (lVar2 != 0) {
      FUN_14516c300(param_2,*(undefined8 *)(*param_2 + 8));
      *(longlong *)(*param_2 + 8) = *param_2;
      *(longlong *)*param_2 = *param_2;
      *(longlong *)(*param_2 + 0x10) = *param_2;
      param_2[1] = 0;
      FUN_14516e8e0(lVar2,param_2);
      cef_string_map_free(lVar2);
    }
  }
  return;
}



// FUNCTION 14516c130 FUN_14516c130 body=48 status=ok
// SIG undefined FUN_14516c130(void)

bool FUN_14516c130(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  if ((0xaf < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x15], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 14516c160 FUN_14516c160 body=133 status=ok
// SIG undefined FUN_14516c160(void)

void FUN_14516c160(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0xb7 < *puVar1) && (puVar1[0x16] != 0)) {
    lVar2 = cef_string_list_alloc();
    if (lVar2 != 0) {
      FUN_14516e860(param_2,lVar2);
    }
    (*(code *)puVar1[0x16])(puVar1,lVar2);
    if (lVar2 != 0) {
      FUN_144d739a0(param_2);
      FUN_14516e770(lVar2,param_2);
      cef_string_list_free(lVar2);
    }
  }
  return;
}



// FUNCTION 14516c270 FUN_14516c270 body=143 status=ok
// SIG undefined FUN_14516c270(void)

undefined8 * FUN_14516c270(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -4;
  *puVar1 = &PTR_FUN_149c375f0;
  *(undefined ***)((longlong)*(int *)(param_1[-3] + 4) + -0x18 + (longlong)param_1) =
       &PTR_LAB_149c37690;
  *(int *)((longlong)*(int *)(param_1[-3] + 4) + -0x1c + (longlong)param_1) =
       *(int *)(param_1[-3] + 4) + -0x18;
  *puVar1 = &PTR__purecall_149c37528;
  *(undefined ***)((longlong)*(int *)(param_1[-3] + 4) + -0x18 + (longlong)param_1) =
       &PTR_LAB_149c375c8;
  *(int *)((longlong)*(int *)(param_1[-3] + 4) + -0x1c + (longlong)param_1) =
       *(int *)(param_1[-3] + 4) + -0x18;
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(puVar1,0x28);
  }
  return puVar1;
}



// FUNCTION 14516c300 FUN_14516c300 body=211 status=ok
// SIG undefined FUN_14516c300(void)

void FUN_14516c300(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x19);
  while (cVar1 == '\0') {
    FUN_14516c300(param_1,param_2[2]);
    plVar2 = (longlong *)*param_2;
    param_2[7] = (longlong)&PTR_FUN_14ba6d600;
    if (param_2[8] != 0) {
      if ((char)param_2[9] != '\0') {
        cef_string_utf16_clear();
        thunk_FUN_1400020a8(param_2[8],0x18);
      }
      param_2[8] = 0;
      *(undefined1 *)(param_2 + 9) = 0;
    }
    param_2[4] = (longlong)&PTR_FUN_14ba6d600;
    if (param_2[5] != 0) {
      if ((char)param_2[6] != '\0') {
        cef_string_utf16_clear();
        thunk_FUN_1400020a8(param_2[5],0x18);
      }
      param_2[5] = 0;
      *(undefined1 *)(param_2 + 6) = 0;
    }
    thunk_FUN_1400020a8(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}



// FUNCTION 14516c420 FUN_14516c420 body=48 status=ok
// SIG undefined FUN_14516c420(void)

longlong FUN_14516c420(longlong param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x10,0x18);
    return param_1 + -0x10;
  }
  return param_1 + -0x10;
}



// FUNCTION 14516c450 FUN_14516c450 body=40 status=ok
// SIG undefined FUN_14516c450(void)

int FUN_14516c450(longlong param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  
  pcVar3 = *(code **)(*(longlong *)(param_1 + -0x28) + 8);
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)();
  }
  LOCK();
  piVar1 = (int *)(param_1 + -0x10);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2;
}



// FUNCTION 14516c480 FUN_14516c480 body=105 status=ok
// SIG undefined FUN_14516c480(void)

undefined8 FUN_14516c480(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(code **)(param_1[-5] + 0x10) != (code *)0x0) {
    (**(code **)(param_1[-5] + 0x10))();
  }
  LOCK();
  piVar1 = (int *)(param_1 + -2);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    if (param_1 + -6 != (undefined8 *)0x0) {
      FUN_14516c660(param_1);
      *param_1 = &PTR__purecall_14ba6c6b0;
      thunk_FUN_1400020a8(param_1 + -6,0x38);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 14516c4f0 FUN_14516c4f0 body=34 status=ok
// SIG undefined FUN_14516c4f0(void)

bool FUN_14516c4f0(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(*(longlong *)(param_1 + -0x28) + 0x18);
  if (pcVar1 == (code *)0x0) {
    return false;
  }
  iVar2 = (*pcVar1)();
  return iVar2 != 0;
}



// FUNCTION 14516c520 FUN_14516c520 body=38 status=ok
// SIG undefined FUN_14516c520(void)

bool FUN_14516c520(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + -0x28);
  if (*(longlong *)(lVar1 + 0x18) == 0) {
    return false;
  }
  iVar2 = (**(code **)(lVar1 + 0x20))(lVar1);
  return iVar2 != 0;
}



// FUNCTION 14516c550 FUN_14516c550 body=85 status=ok
// SIG undefined FUN_14516c550(void)

longlong FUN_14516c550(longlong param_1,ulonglong param_2)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_149c37828;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149c378f0;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x20,0x28);
  }
  return param_1 + -0x20;
}



// FUNCTION 14516c5b0 FUN_14516c5b0 body=167 status=ok
// SIG undefined FUN_14516c5b0(void)

undefined8 * FUN_14516c5b0(undefined8 *param_1,int param_2)

{
  if (param_2 != 0) {
    param_1[1] = &DAT_149c37a08;
    param_1[4] = &PTR__purecall_14ba6c6b0;
  }
  *param_1 = &PTR__purecall_149c37738;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) =
       &PTR__purecall_149c37800;
  *param_1 = &PTR__purecall_149c37828;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149c378f0;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_149c37918;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149c379e0;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  return param_1;
}



// FUNCTION 14516c660 FUN_14516c660 body=124 status=ok
// SIG undefined FUN_14516c660(void)

void FUN_14516c660(longlong param_1)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR_FUN_149c37918;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149c379e0;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  FUN_14516fec0();
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_149c37828;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149c378f0;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  return;
}



// FUNCTION 14516c6e0 FUN_14516c6e0 body=54 status=ok
// SIG undefined FUN_14516c6e0(void)

bool FUN_14516c6e0(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_14516fec0();
  if ((0x2f < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[5], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 14516c720 FUN_14516c720 body=47 status=ok
// SIG undefined FUN_14516c720(void)

void FUN_14516c720(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_14516fec0();
  if ((0x37 < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[6],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014516c746. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// FUNCTION 14516c750 FUN_14516c750 body=47 status=ok
// SIG undefined FUN_14516c750(void)

void FUN_14516c750(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_14516fec0();
  if ((0x3f < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[7],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014516c776. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// FUNCTION 14516c780 FUN_14516c780 body=47 status=ok
// SIG undefined FUN_14516c780(void)

void FUN_14516c780(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_14516fec0();
  if ((0x47 < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[8],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014516c7a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// FUNCTION 14516c7b0 FUN_14516c7b0 body=47 status=ok
// SIG undefined FUN_14516c7b0(void)

void FUN_14516c7b0(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_14516fec0();
  if ((0x4f < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[9],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014516c7d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// FUNCTION 14516c7e0 FUN_14516c7e0 body=47 status=ok
// SIG undefined FUN_14516c7e0(void)

void FUN_14516c7e0(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_14516fec0();
  if ((0x57 < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[10],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014516c806. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// FUNCTION 14516c810 FUN_14516c810 body=47 status=ok
// SIG undefined FUN_14516c810(void)

void FUN_14516c810(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_14516fec0();
  if ((0x5f < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[0xb],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014516c836. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// FUNCTION 14516c840 FUN_14516c840 body=47 status=ok
// SIG undefined FUN_14516c840(void)

void FUN_14516c840(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_14516fec0();
  if ((0x67 < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[0xc],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014516c866. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// FUNCTION 14516c870 FUN_14516c870 body=47 status=ok
// SIG undefined FUN_14516c870(void)

void FUN_14516c870(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_14516fec0();
  if ((0x6f < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[0xd],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014516c896. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// FUNCTION 14516c8a0 FUN_14516c8a0 body=193 status=ok
// SIG undefined FUN_14516c8a0(void)

void FUN_14516c8a0(longlong param_1,ulonglong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong local_res8;
  ulonglong *local_res10;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  local_res8 = local_res8 & 0xffffffff00000000;
  local_res10 = param_2;
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((*puVar1 < 0x78) || (puVar1[0xe] == 0)) {
    uVar2 = *param_2;
    if (uVar2 != 0) {
      (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(uVar2 + 8) + 4) + uVar2 + 8) + 8))
                ();
    }
  }
  else {
    local_res8 = *param_2;
    if (local_res8 != 0) {
      if (local_res8 != 0) {
        (*(code *)**(undefined8 **)
                    (local_res8 + 8 + (longlong)*(int *)(*(longlong *)(local_res8 + 8) + 4)))();
      }
      uVar3 = FUN_14516d3c0(&local_res8);
      (*(code *)puVar1[0xe])(puVar1,uVar3,param_3,param_4,uVar4);
      uVar2 = *param_2;
      if (uVar2 != 0) {
        (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(uVar2 + 8) + 4) + uVar2 + 8) + 8
                    ))();
      }
    }
  }
  return;
}



// FUNCTION 14516c970 FUN_14516c970 body=196 status=ok
// SIG undefined FUN_14516c970(void)

void FUN_14516c970(longlong param_1,ulonglong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong local_res8;
  ulonglong *local_res10;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  local_res8 = local_res8 & 0xffffffff00000000;
  local_res10 = param_2;
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((*puVar1 < 0x80) || (puVar1[0xf] == 0)) {
    uVar2 = *param_2;
    if (uVar2 != 0) {
      (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(uVar2 + 8) + 4) + uVar2 + 8) + 8))
                ();
    }
  }
  else {
    local_res8 = *param_2;
    if (local_res8 != 0) {
      if (local_res8 != 0) {
        (*(code *)**(undefined8 **)
                    (local_res8 + 8 + (longlong)*(int *)(*(longlong *)(local_res8 + 8) + 4)))();
      }
      uVar3 = FUN_14516d3c0(&local_res8);
      (*(code *)puVar1[0xf])(puVar1,uVar3,param_3,param_4,uVar4);
      uVar2 = *param_2;
      if (uVar2 != 0) {
        (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(uVar2 + 8) + 4) + uVar2 + 8) + 8
                    ))();
      }
    }
  }
  return;
}



// FUNCTION 14516ca40 FUN_14516ca40 body=202 status=ok
// SIG undefined FUN_14516ca40(void)

void FUN_14516ca40(longlong param_1,ulonglong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong local_res8;
  ulonglong *local_res10;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  local_res8 = local_res8 & 0xffffffff00000000;
  local_res10 = param_2;
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((*puVar1 < 0x88) || (puVar1[0x10] == 0)) {
    uVar2 = *param_2;
    if (uVar2 != 0) {
      (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(uVar2 + 8) + 4) + uVar2 + 8) + 8))
                ();
    }
  }
  else {
    local_res8 = *param_2;
    if (local_res8 != 0) {
      if (local_res8 != 0) {
        (*(code *)**(undefined8 **)
                    (local_res8 + 8 + (longlong)*(int *)(*(longlong *)(local_res8 + 8) + 4)))();
      }
      uVar3 = FUN_14516d5c0(&local_res8);
      (*(code *)puVar1[0x10])(puVar1,uVar3,param_3,param_4,uVar4);
      uVar2 = *param_2;
      if (uVar2 != 0) {
        (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(uVar2 + 8) + 4) + uVar2 + 8) + 8
                    ))();
      }
    }
  }
  return;
}



// FUNCTION 14516cb10 FUN_14516cb10 body=83 status=ok
// SIG undefined FUN_14516cb10(void)

void FUN_14516cb10(longlong param_1,longlong param_2)

{
  code *pcVar1;
  
  FUN_14516fec0();
  if ((((0x8f < **(ulonglong **)(param_1 + -8)) &&
       (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x11], pcVar1 != (code *)0x0)) &&
      (*(longlong *)(param_2 + 8) != 0)) && (*(longlong *)(*(longlong *)(param_2 + 8) + 8) != 0)) {
    (*pcVar1)();
  }
  return;
}



// FUNCTION 14516cb70 FUN_14516cb70 body=116 status=ok
// SIG undefined FUN_14516cb70(void)

void FUN_14516cb70(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  ulonglong *puVar1;
  longlong lVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((((0x97 < *puVar1) && ((code *)puVar1[0x12] != (code *)0x0)) &&
      (lVar2 = *(longlong *)(param_2 + 8), lVar2 != 0)) && (*(longlong *)(lVar2 + 8) != 0)) {
    (*(code *)puVar1[0x12])(puVar1,lVar2,*(undefined8 *)(param_3 + 8),param_4);
  }
  return;
}



// FUNCTION 14516cbf0 FUN_14516cbf0 body=60 status=ok
// SIG undefined FUN_14516cbf0(void)

bool FUN_14516cbf0(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_14516fec0();
  if ((0x9f < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x13], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 14516cc30 FUN_14516cc30 body=60 status=ok
// SIG undefined FUN_14516cc30(void)

bool FUN_14516cc30(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_14516fec0();
  if ((0xa7 < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x14], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 14516cc70 FUN_14516cc70 body=228 status=ok
// SIG undefined FUN_14516cc70(void)

undefined8 * FUN_14516cc70(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined **local_28;
  undefined8 *local_20;
  char local_18;
  
  uVar6 = 0xfffffffffffffffe;
  uVar4 = 0;
  uVar5 = 0;
  FUN_14516fec0();
  if ((**(ulonglong **)(param_1 + -8) < 0xb0) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x15], pcVar1 == (code *)0x0)) {
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else {
    uVar3 = (*pcVar1)();
    local_28 = &PTR_FUN_14ba6d600;
    local_20 = (undefined8 *)0x0;
    local_18 = '\0';
    FUN_144d73b20(&local_28,uVar3);
    puVar2 = local_20;
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    uVar3 = uVar4;
    if (local_20 != (undefined8 *)0x0) {
      uVar4 = *local_20;
      uVar3 = local_20[1];
    }
    FUN_149048250(param_2,uVar4,uVar3,1,uVar5,uVar6);
    if ((puVar2 != (undefined8 *)0x0) && (local_18 != '\0')) {
      cef_string_utf16_clear(puVar2);
      thunk_FUN_1400020a8(puVar2,0x18);
    }
  }
  return param_2;
}



// FUNCTION 14516cd60 FUN_14516cd60 body=55 status=ok
// SIG undefined FUN_14516cd60(void)

undefined8 FUN_14516cd60(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  FUN_14516fec0();
  if ((0xb7 < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[0x16],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014516cd8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}



// FUNCTION 14516cda0 FUN_14516cda0 body=102 status=ok
// SIG undefined FUN_14516cda0(void)

undefined8 *
FUN_14516cda0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  FUN_14516fec0();
  if ((0xbf < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x17], pcVar1 != (code *)0x0)) {
    uVar2 = (*pcVar1)();
    FUN_14516a830(param_2,uVar2,param_3,param_4,uVar3);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14516ce10 FUN_14516ce10 body=228 status=ok
// SIG undefined FUN_14516ce10(void)

undefined8 * FUN_14516ce10(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined **local_28;
  undefined8 *local_20;
  char local_18;
  
  uVar6 = 0xfffffffffffffffe;
  uVar4 = 0;
  uVar5 = 0;
  FUN_14516fec0();
  if ((**(ulonglong **)(param_1 + -8) < 200) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x18], pcVar1 == (code *)0x0)) {
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else {
    uVar3 = (*pcVar1)();
    local_28 = &PTR_FUN_14ba6d600;
    local_20 = (undefined8 *)0x0;
    local_18 = '\0';
    FUN_144d73b20(&local_28,uVar3);
    puVar2 = local_20;
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    uVar3 = uVar4;
    if (local_20 != (undefined8 *)0x0) {
      uVar4 = *local_20;
      uVar3 = local_20[1];
    }
    FUN_149048250(param_2,uVar4,uVar3,1,uVar5,uVar6);
    if ((puVar2 != (undefined8 *)0x0) && (local_18 != '\0')) {
      cef_string_utf16_clear(puVar2);
      thunk_FUN_1400020a8(puVar2,0x18);
    }
  }
  return param_2;
}



// FUNCTION 14516cf00 FUN_14516cf00 body=102 status=ok
// SIG undefined FUN_14516cf00(void)

undefined8 *
FUN_14516cf00(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  FUN_14516fec0();
  if ((0xcf < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x19], pcVar1 != (code *)0x0)) {
    uVar2 = (*pcVar1)();
    FUN_144d7a4e0(param_2,uVar2,param_3,param_4,uVar3);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14516cf70 FUN_14516cf70 body=102 status=ok
// SIG undefined FUN_14516cf70(void)

undefined8 *
FUN_14516cf70(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  FUN_14516fec0();
  if ((0xd7 < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x1a], pcVar1 != (code *)0x0)) {
    uVar2 = (*pcVar1)();
    FUN_14516d750(param_2,uVar2,param_3,param_4,uVar3);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14516cfe0 FUN_14516cfe0 body=202 status=ok
// SIG undefined FUN_14516cfe0(void)

void FUN_14516cfe0(longlong param_1,ulonglong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong local_res8;
  ulonglong *local_res10;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  local_res8 = local_res8 & 0xffffffff00000000;
  local_res10 = param_2;
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((*puVar1 < 0xe0) || (puVar1[0x1b] == 0)) {
    uVar2 = *param_2;
    if (uVar2 != 0) {
      (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(uVar2 + 8) + 4) + uVar2 + 8) + 8))
                ();
    }
  }
  else {
    local_res8 = *param_2;
    if (local_res8 != 0) {
      if (local_res8 != 0) {
        (*(code *)**(undefined8 **)
                    (local_res8 + 8 + (longlong)*(int *)(*(longlong *)(local_res8 + 8) + 4)))();
      }
      uVar3 = FUN_14516d330(&local_res8);
      (*(code *)puVar1[0x1b])(puVar1,uVar3,param_3,param_4,uVar4);
      uVar2 = *param_2;
      if (uVar2 != 0) {
        (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(uVar2 + 8) + 4) + uVar2 + 8) + 8
                    ))();
      }
    }
  }
  return;
}



// FUNCTION 14516d0b0 FUN_14516d0b0 body=351 status=ok
// SIG undefined FUN_14516d0b0(void)

undefined8 * FUN_14516d0b0(longlong param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  ulonglong *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 local_res8 [8];
  undefined1 local_40 [8];
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((*puVar1 < 0xe8) || (puVar1[0x1c] == 0)) {
    *param_2 = 0;
    lVar2 = *param_3;
    if (lVar2 != 0) {
      (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8))
                ();
    }
    lVar2 = *param_4;
    if (lVar2 != 0) {
      (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8))
                ();
    }
  }
  else if (*param_3 == 0) {
    *param_2 = 0;
    lVar2 = *param_3;
    if (lVar2 != 0) {
      (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8))
                ();
    }
    lVar2 = *param_4;
    if (lVar2 != 0) {
      (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8))
                ();
    }
  }
  else {
    if (*param_4 == 0) {
      *param_2 = 0;
    }
    else {
      uVar3 = FUN_14516d900(local_res8,param_4);
      uVar3 = FUN_14516d450(uVar3);
      uVar4 = FUN_14516d4e0(local_40,param_3);
      uVar4 = FUN_14516d5c0(uVar4);
      uVar3 = (*(code *)puVar1[0x1c])(puVar1,uVar4,uVar3);
      FUN_14516d660(param_2,uVar3);
    }
    FUN_14516a4b0(param_3);
    FUN_14516d940(param_4);
  }
  return param_2;
}



// FUNCTION 14516d210 FUN_14516d210 body=216 status=ok
// SIG undefined FUN_14516d210(void)

void FUN_14516d210(longlong param_1,undefined4 param_2,ulonglong *param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong local_res8;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  local_res8 = local_res8 & 0xffffffff00000000;
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((*puVar1 < 0xf0) || (puVar1[0x1d] == 0)) {
    uVar2 = *param_3;
    if (uVar2 != 0) {
      (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(uVar2 + 8) + 4) + uVar2 + 8) + 8))
                ();
    }
  }
  else {
    local_res8 = *param_3;
    if (local_res8 != 0) {
      if (local_res8 != 0) {
        (*(code *)**(undefined8 **)
                    (local_res8 + 8 + (longlong)*(int *)(*(longlong *)(local_res8 + 8) + 4)))();
      }
      uVar3 = FUN_14516d520(&local_res8);
      (*(code *)puVar1[0x1d])(puVar1,param_2,uVar3,param_4,uVar4);
      uVar2 = *param_3;
      if (uVar2 != 0) {
        (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(uVar2 + 8) + 4) + uVar2 + 8) + 8
                    ))();
      }
    }
  }
  return;
}



// FUNCTION 14516d2f0 FUN_14516d2f0 body=64 status=ok
// SIG undefined FUN_14516d2f0(void)

undefined8 * FUN_14516d2f0(undefined8 *param_1,ulonglong param_2)

{
  FUN_14516c660();
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -4,0x28);
  }
  return param_1 + -4;
}



// FUNCTION 14516d330 FUN_14516d330 body=135 status=ok
// SIG undefined FUN_14516d330(void)

undefined8 * FUN_14516d330(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (*param_1 == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    lVar1 = FUN_14494321d(0x58);
    if (lVar1 == 0) {
      puVar2 = (undefined8 *)0x0;
    }
    else {
      puVar2 = (undefined8 *)FUN_1453e48a0(lVar1);
    }
    puVar2[2] = *param_1;
    (**(code **)*puVar2)(puVar2);
    lVar1 = *param_1;
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
    puVar2 = puVar2 + 4;
  }
  return puVar2;
}



// FUNCTION 14516d3c0 FUN_14516d3c0 body=135 status=ok
// SIG undefined FUN_14516d3c0(void)

undefined8 * FUN_14516d3c0(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (*param_1 == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    lVar1 = FUN_14494321d(0x58);
    if (lVar1 == 0) {
      puVar2 = (undefined8 *)0x0;
    }
    else {
      puVar2 = (undefined8 *)FUN_1453e4d10(lVar1);
    }
    puVar2[2] = *param_1;
    (**(code **)*puVar2)(puVar2);
    lVar1 = *param_1;
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
    puVar2 = puVar2 + 4;
  }
  return puVar2;
}



// FUNCTION 14516d450 FUN_14516d450 body=135 status=ok
// SIG undefined FUN_14516d450(void)

undefined8 * FUN_14516d450(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (*param_1 == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    lVar1 = FUN_14494321d(0x78);
    if (lVar1 == 0) {
      puVar2 = (undefined8 *)0x0;
    }
    else {
      puVar2 = (undefined8 *)FUN_1453e50d0(lVar1);
    }
    puVar2[2] = *param_1;
    (**(code **)*puVar2)(puVar2);
    lVar1 = *param_1;
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
    puVar2 = puVar2 + 4;
  }
  return puVar2;
}



// FUNCTION 14516d4e0 FUN_14516d4e0 body=49 status=ok
// SIG undefined FUN_14516d4e0(void)

longlong * FUN_14516d4e0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)))();
  }
  return param_1;
}



// FUNCTION 14516d520 FUN_14516d520 body=156 status=ok
// SIG undefined FUN_14516d520(void)

undefined8 FUN_14516d520(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else if (*(int *)(lVar1 + -0x10) == DAT_14c7078e0) {
    pcVar2 = *(code **)(*(longlong *)(lVar1 + -8) + 8);
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)();
    }
    uVar3 = *(undefined8 *)(lVar1 + -8);
    lVar1 = *param_1;
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
  }
  else {
    uVar3 = FUN_144d77d00(*(int *)(lVar1 + -0x10),lVar1,param_3,param_4,0xfffffffffffffffe);
    lVar1 = *param_1;
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
  }
  return uVar3;
}



// FUNCTION 14516d5c0 FUN_14516d5c0 body=156 status=ok
// SIG undefined FUN_14516d5c0(void)

undefined8 FUN_14516d5c0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else if (*(int *)(lVar1 + -0x10) == DAT_14c74416c) {
    pcVar2 = *(code **)(*(longlong *)(lVar1 + -8) + 8);
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)();
    }
    uVar3 = *(undefined8 *)(lVar1 + -8);
    lVar1 = *param_1;
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
  }
  else {
    uVar3 = FUN_1453e18f0(*(int *)(lVar1 + -0x10),lVar1,param_3,param_4,0xfffffffffffffffe);
    lVar1 = *param_1;
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
  }
  return uVar3;
}



// FUNCTION 14516d660 FUN_14516d660 body=230 status=ok
// SIG undefined FUN_14516d660(void)

longlong * FUN_14516d660(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  uVar3 = 0;
  if (param_2 == 0) {
    *param_1 = 0;
  }
  else {
    puVar2 = (undefined4 *)FUN_14494321d(0x38);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      FUN_1453e5900(puVar2 + 4,1,param_3,param_4,uVar3,uVar4);
    }
    *puVar2 = DAT_14c744184;
    *(longlong *)(puVar2 + 2) = param_2;
    puVar1 = puVar2 + 4;
    if (puVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined8 **)
                  ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1))();
    }
    if (*(code **)(*(longlong *)(puVar2 + 2) + 0x10) != (code *)0x0) {
      (**(code **)(*(longlong *)(puVar2 + 2) + 0x10))();
    }
    *param_1 = (longlong)puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined8 **)
                  ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1))();
      (**(code **)(*(longlong *)
                    ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1) + 8))
                ();
    }
  }
  return param_1;
}



// FUNCTION 14516d750 FUN_14516d750 body=230 status=ok
// SIG undefined FUN_14516d750(void)

longlong * FUN_14516d750(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  uVar3 = 0;
  if (param_2 == 0) {
    *param_1 = 0;
  }
  else {
    puVar2 = (undefined4 *)FUN_14494321d(0x38);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      FUN_1453e5f80(puVar2 + 4,1,param_3,param_4,uVar3,uVar4);
    }
    *puVar2 = DAT_14c744188;
    *(longlong *)(puVar2 + 2) = param_2;
    puVar1 = puVar2 + 4;
    if (puVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined8 **)
                  ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1))();
    }
    if (*(code **)(*(longlong *)(puVar2 + 2) + 0x10) != (code *)0x0) {
      (**(code **)(*(longlong *)(puVar2 + 2) + 0x10))();
    }
    *param_1 = (longlong)puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined8 **)
                  ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1))();
      (**(code **)(*(longlong *)
                    ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1) + 8))
                ();
    }
  }
  return param_1;
}



// FUNCTION 14516d840 FUN_14516d840 body=48 status=ok
// SIG undefined FUN_14516d840(void)

void FUN_14516d840(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 14516d870 FUN_14516d870 body=48 status=ok
// SIG undefined FUN_14516d870(void)

void FUN_14516d870(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 14516d8a0 FUN_14516d8a0 body=48 status=ok
// SIG undefined FUN_14516d8a0(void)

void FUN_14516d8a0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 14516d8d0 FUN_14516d8d0 body=48 status=ok
// SIG undefined FUN_14516d8d0(void)

void FUN_14516d8d0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 14516d900 FUN_14516d900 body=49 status=ok
// SIG undefined FUN_14516d900(void)

longlong * FUN_14516d900(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)))();
  }
  return param_1;
}



// FUNCTION 14516d940 FUN_14516d940 body=48 status=ok
// SIG undefined FUN_14516d940(void)

void FUN_14516d940(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 14516d9c0 FUN_14516d9c0 body=48 status=ok
// SIG undefined FUN_14516d9c0(void)

longlong FUN_14516d9c0(longlong param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x10,0x18);
    return param_1 + -0x10;
  }
  return param_1 + -0x10;
}



// FUNCTION 14516d9f0 FUN_14516d9f0 body=40 status=ok
// SIG undefined FUN_14516d9f0(void)

int FUN_14516d9f0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  
  pcVar3 = *(code **)(*(longlong *)(param_1 + -0x28) + 8);
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)();
  }
  LOCK();
  piVar1 = (int *)(param_1 + -0x10);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2;
}



// FUNCTION 14516da20 FUN_14516da20 body=105 status=ok
// SIG undefined FUN_14516da20(void)

undefined8 FUN_14516da20(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(code **)(param_1[-5] + 0x10) != (code *)0x0) {
    (**(code **)(param_1[-5] + 0x10))();
  }
  LOCK();
  piVar1 = (int *)(param_1 + -2);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    if (param_1 + -6 != (undefined8 *)0x0) {
      FUN_14516dc10(param_1);
      *param_1 = &PTR__purecall_14ba6c6b0;
      thunk_FUN_1400020a8(param_1 + -6,0x38);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 14516da90 FUN_14516da90 body=34 status=ok
// SIG undefined FUN_14516da90(void)

bool FUN_14516da90(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(*(longlong *)(param_1 + -0x28) + 0x18);
  if (pcVar1 == (code *)0x0) {
    return false;
  }
  iVar2 = (*pcVar1)();
  return iVar2 != 0;
}



// FUNCTION 14516dac0 FUN_14516dac0 body=38 status=ok
// SIG undefined FUN_14516dac0(void)

bool FUN_14516dac0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + -0x28);
  if (*(longlong *)(lVar1 + 0x18) == 0) {
    return false;
  }
  iVar2 = (**(code **)(lVar1 + 0x20))(lVar1);
  return iVar2 != 0;
}



// FUNCTION 14516daf0 FUN_14516daf0 body=11 status=ok
// SIG undefined FUN_14516daf0(void)

undefined8 FUN_14516daf0(void)

{
  return 0;
}



// FUNCTION 14516db00 FUN_14516db00 body=85 status=ok
// SIG undefined FUN_14516db00(void)

longlong FUN_14516db00(longlong param_1,ulonglong param_2)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_149c37e30;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149c37ee0;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x20,0x28);
  }
  return param_1 + -0x20;
}



// FUNCTION 14516db60 FUN_14516db60 body=167 status=ok
// SIG undefined FUN_14516db60(void)

undefined8 * FUN_14516db60(undefined8 *param_1,int param_2)

{
  if (param_2 != 0) {
    param_1[1] = &DAT_149c37fe0;
    param_1[4] = &PTR__purecall_14ba6c6b0;
  }
  *param_1 = &PTR__purecall_149c37d58;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) =
       &PTR__purecall_149c37e08;
  *param_1 = &PTR__purecall_149c37e30;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149c37ee0;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_149c37f08;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149c37fb8;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  return param_1;
}



// FUNCTION 14516dc10 FUN_14516dc10 body=124 status=ok
// SIG undefined FUN_14516dc10(void)

void FUN_14516dc10(longlong param_1)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR_FUN_149c37f08;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149c37fb8;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  FUN_14516fec0();
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_149c37e30;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149c37ee0;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  return;
}



// FUNCTION 14516dc90 FUN_14516dc90 body=54 status=ok
// SIG undefined FUN_14516dc90(void)

bool FUN_14516dc90(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_14516fec0();
  if ((0x2f < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[5], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 14516dcd0 FUN_14516dcd0 body=54 status=ok
// SIG undefined FUN_14516dcd0(void)

bool FUN_14516dcd0(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_14516fec0();
  if ((0x37 < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[6], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 14516dd10 FUN_14516dd10 body=54 status=ok
// SIG undefined FUN_14516dd10(void)

bool FUN_14516dd10(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_14516fec0();
  if ((0x3f < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[7], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 14516dd50 FUN_14516dd50 body=202 status=ok
// SIG undefined FUN_14516dd50(void)

ulonglong FUN_14516dd50(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong local_res8;
  ulonglong *local_res10;
  
  local_res8 = local_res8 & 0xffffffff00000000;
  local_res10 = param_2;
  uVar4 = FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((*puVar1 < 0x48) || (puVar1[8] == 0)) {
    uVar2 = *param_2;
    if (uVar2 != 0) {
      uVar4 = (**(code **)(*(longlong *)
                            ((longlong)*(int *)(*(longlong *)(uVar2 + 8) + 4) + uVar2 + 8) + 8))();
    }
  }
  else {
    local_res8 = *param_2;
    if (local_res8 != 0) {
      if (local_res8 != 0) {
        (*(code *)**(undefined8 **)
                    (local_res8 + 8 + (longlong)*(int *)(*(longlong *)(local_res8 + 8) + 4)))();
      }
      uVar5 = FUN_144d738d0(&local_res8);
      iVar3 = (*(code *)puVar1[8])(puVar1,uVar5);
      uVar4 = *param_2;
      if (uVar4 != 0) {
        (**(code **)(*(longlong *)(uVar4 + 8 + (longlong)*(int *)(*(longlong *)(uVar4 + 8) + 4)) + 8
                    ))();
      }
      return (ulonglong)(iVar3 != 0);
    }
    uVar4 = 0;
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 14516de20 FUN_14516de20 body=201 status=ok
// SIG undefined FUN_14516de20(void)

ulonglong FUN_14516de20(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong local_res8;
  ulonglong *local_res10;
  
  local_res8 = local_res8 & 0xffffffff00000000;
  local_res10 = param_2;
  uVar4 = FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((*puVar1 < 0x50) || (puVar1[9] == 0)) {
    uVar2 = *param_2;
    if (uVar2 != 0) {
      uVar4 = (**(code **)(*(longlong *)
                            ((longlong)*(int *)(*(longlong *)(uVar2 + 8) + 4) + uVar2 + 8) + 8))();
    }
  }
  else {
    local_res8 = *param_2;
    if (local_res8 != 0) {
      if (local_res8 != 0) {
        (*(code *)**(undefined8 **)
                    (local_res8 + 8 + (longlong)*(int *)(*(longlong *)(local_res8 + 8) + 4)))();
      }
      uVar5 = FUN_144d738d0(&local_res8);
      iVar3 = (*(code *)puVar1[9])(puVar1,uVar5);
      uVar4 = *param_2;
      if (uVar4 != 0) {
        (**(code **)(*(longlong *)(uVar4 + 8 + (longlong)*(int *)(*(longlong *)(uVar4 + 8) + 4)) + 8
                    ))();
      }
      return (ulonglong)(iVar3 != 0);
    }
    uVar4 = 0;
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 14516def0 FUN_14516def0 body=96 status=ok
// SIG undefined FUN_14516def0(void)

undefined8 *
FUN_14516def0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  FUN_14516fec0();
  if ((0x57 < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[10], pcVar1 != (code *)0x0)) {
    uVar2 = (*pcVar1)();
    FUN_144d737e0(param_2,uVar2,param_3,param_4,uVar3);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14516df50 FUN_14516df50 body=49 status=ok
// SIG undefined FUN_14516df50(void)

undefined8 FUN_14516df50(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  FUN_14516fec0();
  if ((0x5f < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[0xb],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014516df76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}



// FUNCTION 14516df90 FUN_14516df90 body=54 status=ok
// SIG undefined FUN_14516df90(void)

bool FUN_14516df90(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_14516fec0();
  if ((0x67 < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0xc], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 14516dfd0 FUN_14516dfd0 body=49 status=ok
// SIG undefined FUN_14516dfd0(void)

undefined8 FUN_14516dfd0(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  FUN_14516fec0();
  if ((0x6f < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[0xd],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014516dff6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}



// FUNCTION 14516e010 FUN_14516e010 body=50 status=ok
// SIG undefined FUN_14516e010(void)

undefined8 FUN_14516e010(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  FUN_14516fec0();
  if ((0x77 < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[0xe],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014516e036. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}



// FUNCTION 14516e050 FUN_14516e050 body=225 status=ok
// SIG undefined FUN_14516e050(void)

undefined8 * FUN_14516e050(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined **local_28;
  undefined8 *local_20;
  char local_18;
  
  uVar6 = 0xfffffffffffffffe;
  uVar4 = 0;
  uVar5 = 0;
  FUN_14516fec0();
  if ((**(ulonglong **)(param_1 + -8) < 0x80) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0xf], pcVar1 == (code *)0x0)) {
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else {
    uVar3 = (*pcVar1)();
    local_28 = &PTR_FUN_14ba6d600;
    local_20 = (undefined8 *)0x0;
    local_18 = '\0';
    FUN_144d73b20(&local_28,uVar3);
    puVar2 = local_20;
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    uVar3 = uVar4;
    if (local_20 != (undefined8 *)0x0) {
      uVar4 = *local_20;
      uVar3 = local_20[1];
    }
    FUN_149048250(param_2,uVar4,uVar3,1,uVar5,uVar6);
    if ((puVar2 != (undefined8 *)0x0) && (local_18 != '\0')) {
      cef_string_utf16_clear(puVar2);
      thunk_FUN_1400020a8(puVar2,0x18);
    }
  }
  return param_2;
}



// FUNCTION 14516e140 FUN_14516e140 body=102 status=ok
// SIG undefined FUN_14516e140(void)

undefined8 *
FUN_14516e140(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  FUN_14516fec0();
  if ((0x87 < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x10], pcVar1 != (code *)0x0)) {
    uVar2 = (*pcVar1)();
    FUN_144d736f0(param_2,uVar2,param_3,param_4,uVar3);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14516e1b0 FUN_14516e1b0 body=102 status=ok
// SIG undefined FUN_14516e1b0(void)

undefined8 *
FUN_14516e1b0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  FUN_14516fec0();
  if ((0x8f < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x11], pcVar1 != (code *)0x0)) {
    uVar2 = (*pcVar1)();
    FUN_144d73c30(param_2,uVar2,param_3,param_4,uVar3);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14516e220 FUN_14516e220 body=102 status=ok
// SIG undefined FUN_14516e220(void)

undefined8 *
FUN_14516e220(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  FUN_14516fec0();
  if ((0x97 < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x12], pcVar1 != (code *)0x0)) {
    uVar2 = (*pcVar1)();
    FUN_144d75160(param_2,uVar2,param_3,param_4,uVar3);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}


