// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14011778a FUN_14011778a body=111 status=ok
// SIG undefined FUN_14011778a(void)

int FUN_14011778a(uint param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  if (DAT_14cb7c0d8 != DAT_14cb7c104) {
    puVar2 = &DAT_14cb7c108;
    if (DAT_14cb7c110 != (undefined4 *)0x0) {
      puVar2 = DAT_14cb7c110;
    }
    iVar1 = puVar2[DAT_14cb7c118 - 1U & param_1];
    if (iVar1 != -1) {
      do {
        lVar3 = (longlong)iVar1;
        if ((*(int *)(DAT_14cb7c0d0 + lVar3 * 0x18) == *param_2) &&
           (*(int *)(DAT_14cb7c0d0 + lVar3 * 0x18 + 8) == param_2[2])) {
          return iVar1;
        }
        iVar1 = *(int *)(DAT_14cb7c0d0 + 0x10 + lVar3 * 0x18);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 1401177fa FUN_1401177fa body=292 status=ok
// SIG undefined FUN_1401177fa(void)

void FUN_1401177fa(longlong *param_1,byte *param_2,longlong param_3)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  
  lVar3 = param_1[0x14] + param_3;
  if (param_1[0x15] < lVar3) {
    if ((char)param_1[0x16] != '\x01') {
      lVar3 = (**(code **)(*param_1 + 8))(param_1);
      do {
        *(byte *)(lVar3 + 0x29) = *(byte *)(lVar3 + 0x29) | 2;
        lVar3 = *(longlong *)(lVar3 + 0x88);
      } while (lVar3 != 0);
      return;
    }
    lVar7 = param_1[0x15] * 2;
    if (lVar7 < lVar3) {
      lVar7 = lVar3;
    }
    param_1[0x15] = lVar7;
    iVar2 = (int)param_1[0x13];
    iVar5 = (int)(lVar7 + 7U >> 3);
    *(int *)(param_1 + 0x13) = iVar5;
    uVar6 = iVar5 - iVar2;
    if ((uint)(*(int *)((longlong)param_1 + 0x9c) - iVar2) < uVar6) {
      FUN_1447403be(param_1 + 0x12);
    }
    memset((void *)((longlong)iVar2 + param_1[0x12]),0,(longlong)(int)uVar6);
  }
  if (param_3 == 1) {
    uVar4 = param_1[0x14];
    if ((*param_2 & 1) != 0) {
      pbVar1 = (byte *)(param_1[0x12] + (longlong)(int)(uVar4 >> 3));
      *pbVar1 = *pbVar1 | (&DAT_149e37088)[(uint)uVar4 & 7];
      uVar4 = param_1[0x14];
    }
    param_3 = uVar4 + 1;
  }
  else {
    FUN_1449bc9dc(param_1[0x12],(int)param_1[0x14],param_2,0,(int)param_3);
    param_3 = param_3 + param_1[0x14];
  }
  param_1[0x14] = param_3;
  return;
}



// FUNCTION 14011791e FUN_14011791e body=157 status=ok
// SIG undefined FUN_14011791e(void)

ulonglong * FUN_14011791e(ulonglong *param_1,undefined4 param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  uint local_38 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c947fe0 == 0) {
    lVar1 = FUN_14001cc68(0x140,0x10);
    FUN_1456b2032(lVar1);
    DAT_14c947fe0 = lVar1;
  }
  FUN_1401179bc(DAT_14c947fe0,local_38,param_2,DAT_14c948034);
  *param_1 = param_3 << 0x20 | (ulonglong)local_38[0];
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401179bc FUN_1401179bc body=165 status=ok
// SIG undefined FUN_1401179bc(void)

undefined8 * FUN_1401179bc(longlong *param_1,undefined8 *param_2,uint param_3,undefined8 param_4)

{
  PSRWLOCK SRWLock;
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  
  if (param_3 == 0) {
    param_4 = 0;
  }
  else {
    SRWLock = (PSRWLOCK)(param_1 + 10);
    AcquireSRWLockShared(SRWLock);
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      plVar2 = param_1 + 7;
      if ((longlong *)param_1[8] != (longlong *)0x0) {
        plVar2 = (longlong *)param_1[8];
      }
      uVar3 = *(uint *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_3) * 4);
      if (uVar3 != 0xffffffff) {
        do {
          puVar1 = (uint *)(*param_1 + (longlong)(int)uVar3 * 0x14);
          if (*puVar1 == param_3) {
            ReleaseSRWLockShared(SRWLock);
            if (puVar1 != (uint *)0x0) {
              param_4 = *(undefined8 *)(puVar1 + 1);
            }
            goto LAB_140117a4b;
          }
          uVar3 = puVar1[3];
        } while (uVar3 != 0xffffffff);
      }
    }
    ReleaseSRWLockShared(SRWLock);
  }
LAB_140117a4b:
  *param_2 = param_4;
  return param_2;
}



// FUNCTION 140117a62 FUN_140117a62 body=123 status=ok
// SIG undefined FUN_140117a62(void)

undefined8 * FUN_140117a62(undefined8 *param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  int iVar3;
  uint uVar4;
  ulonglong _Size;
  
  *param_1 = 0;
  param_1[1] = 0;
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    sVar2 = strlen(param_2);
    iVar3 = (int)sVar2;
    uVar4 = iVar3 + 1;
    _Size = (ulonglong)uVar4;
    if (iVar3 < -1) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(_Size);
    }
    if (iVar3 < 0) {
      iVar1 = 0;
      iVar3 = 0;
    }
    else {
      FUN_141701710(param_1,_Size);
      iVar3 = *(int *)(param_1 + 1);
      iVar1 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar3 + uVar4;
    if ((uint)(iVar1 - iVar3) < uVar4) {
      FUN_144761492(param_1);
    }
    memcpy((void *)*param_1,param_2,_Size);
  }
  return param_1;
}



// FUNCTION 140117ade FUN_140117ade body=489 status=ok
// SIG undefined FUN_140117ade(void)

longlong * FUN_140117ade(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  char *_Str;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  int iVar7;
  undefined1 auStack_48 [44];
  uint local_1c;
  ulonglong local_18;
  size_t sVar6;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    (**(code **)(*param_1 + 0x10))
              (param_1,(longlong)(int)param_2[1],(longlong)*(int *)((longlong)param_2 + 0xc));
    local_1c = (int)param_2[1] - 1;
    if ((int)param_2[1] == 0) {
      local_1c = 0;
    }
    puVar2 = (ulonglong *)param_1[1];
    puVar1 = (uint *)*puVar2 + 1;
    if ((uint *)puVar2[1] < puVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_1c,4);
      }
      else {
        FUN_14572512c(param_1,&local_1c);
      }
    }
    else {
      local_1c = *(uint *)*puVar2;
      *puVar2 = (ulonglong)puVar1;
    }
    if (local_1c != 0) {
      _Str = (char *)*param_2;
      uVar4 = local_1c;
      if (local_1c == 0xffffffff) {
        sVar6 = strlen(_Str);
        uVar4 = (uint)sVar6;
      }
      (**(code **)(*param_1 + 0x170))(param_1,_Str,(longlong)(int)uVar4);
    }
  }
  else {
    local_1c = 0;
    puVar2 = (ulonglong *)param_1[1];
    puVar1 = (uint *)*puVar2 + 1;
    if ((uint *)puVar2[1] < puVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_1c,4);
      }
      else {
        FUN_14572512c(param_1);
      }
    }
    else {
      local_1c = *(uint *)*puVar2;
      *puVar2 = (ulonglong)puVar1;
    }
    if (((int)local_1c < 0) || ((0 < param_1[7] && (param_1[7] < (longlong)(ulonglong)local_1c)))) {
      FUN_1468216ba(param_1);
    }
    else if (local_1c == 0) {
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_141701710(param_2,0);
      }
    }
    else {
      uVar4 = local_1c + 1;
      *(undefined4 *)(param_2 + 1) = 0;
      iVar7 = 0;
      uVar5 = uVar4;
      if (*(uint *)((longlong)param_2 + 0xc) != uVar4) {
        FUN_141701710(param_2,uVar4);
        iVar7 = (int)param_2[1];
        uVar4 = *(uint *)((longlong)param_2 + 0xc);
        uVar5 = local_1c + 1;
      }
      *(uint *)(param_2 + 1) = iVar7 + uVar5;
      if (uVar4 - iVar7 < uVar5) {
        FUN_144761492(param_2);
      }
      lVar3 = *param_2;
      (**(code **)(*param_1 + 0x170))(param_1,lVar3,(longlong)(int)local_1c);
      *(undefined1 *)(lVar3 + (int)local_1c) = 0;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140117cc8 FUN_140117cc8 body=325 status=ok
// SIG undefined FUN_140117cc8(void)

void FUN_140117cc8(longlong param_1,int param_2)

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
    uVar3 = (longlong)param_2 * 0x68;
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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140117d32;
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
LAB_140117d32:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 / 0x68)) {
      uVar5 = uVar3 / 0x68 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,0x68,8);
  }
  return;
}



// FUNCTION 140117e0e FUN_140117e0e body=48 status=ok
// SIG undefined FUN_140117e0e(void)

void FUN_140117e0e(longlong param_1,int param_2)

{
  if (param_2 < 1) {
    param_2 = 0;
  }
  else {
    FUN_140117e3e(param_1,0,param_2,0x70);
  }
  *(int *)(param_1 + 0xc) = param_2;
  return;
}



// FUNCTION 140117e3e FUN_140117e3e body=354 status=ok
// SIG undefined FUN_140117e3e(void)

void FUN_140117e3e(undefined8 *param_1,int param_2,int param_3,longlong param_4)

{
  ulonglong *puVar1;
  void *_Src;
  DWORD DVar2;
  int iVar3;
  DWORD dwTlsIndex;
  DWORD DVar4;
  LPVOID lpTlsValue;
  void *_Dst;
  ulonglong uVar5;
  bool bVar6;
  undefined1 auStack_78 [47];
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_3 != 0) {
    if ((param_3 < 0) || (param_4 - 0x80000000U < 0xffffffff80000001)) {
                    /* WARNING: Subroutine does not return */
      FUN_146815189(param_3,param_4);
    }
    _Src = (void *)*param_1;
    dwTlsIndex = DAT_14c7585d0;
    if (DAT_14c7585d0 == 0xffffffff) {
      dwTlsIndex = TlsAlloc();
      DVar4 = 0xffffffff;
      LOCK();
      bVar6 = DAT_14c7585d0 != 0xffffffff;
      DVar2 = dwTlsIndex;
      if (bVar6) {
        DVar4 = DAT_14c7585d0;
        DVar2 = DAT_14c7585d0;
      }
      DAT_14c7585d0 = DVar2;
      UNLOCK();
      if (bVar6) {
        TlsFree(dwTlsIndex);
        dwTlsIndex = DVar4;
      }
    }
    lpTlsValue = TlsGetValue(dwTlsIndex);
    if (lpTlsValue == (LPVOID)0x0) {
      lpTlsValue = (LPVOID)FUN_140036a08(&local_49);
      FUN_140fddf04(lpTlsValue);
      TlsSetValue(dwTlsIndex,lpTlsValue);
    }
    puVar1 = (ulonglong *)((longlong)lpTlsValue + 0x10);
    iVar3 = (int)param_4 * param_3;
    _Dst = (void *)(*(longlong *)((longlong)lpTlsValue + 0x10) + 0xfU & 0xfffffffffffffff0);
    uVar5 = (longlong)_Dst + (longlong)iVar3;
    if (*(ulonglong *)((longlong)lpTlsValue + 0x18) < uVar5) {
      FUN_140023dd8(puVar1,iVar3 + 0x10);
      _Dst = (void *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      uVar5 = (longlong)iVar3 + (longlong)_Dst;
    }
    *puVar1 = uVar5;
    *param_1 = _Dst;
    if (param_2 != 0 && _Src != (void *)0x0) {
      if (param_3 < param_2) {
        param_2 = param_3;
      }
      memcpy(_Dst,_Src,param_2 * param_4);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140117fa2 FUN_140117fa2 body=666 status=ok
// SIG undefined FUN_140117fa2(void)

uint * FUN_140117fa2(longlong param_1,uint *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  byte bVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  code *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = FUN_14011823e(param_4);
  plVar5 = (longlong *)FUN_1447262c2(param_4);
  if (plVar5 == (longlong *)0x0) {
LAB_140118092:
    lVar7 = 0;
  }
  else {
    if (DAT_14cb20e58 == 0) {
      local_50 = &local_30;
      local_30 = FUN_1449e2820;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_1427b09ee;
      local_58 = &LAB_147f14d13;
      local_60 = FUN_1464313b0;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10004001;
      local_80 = 8;
      local_88 = 0x28;
      FUN_14081cfa3(L"/Script/GbxAI",L"GbxAggroInterface",&DAT_14cb20e58,&DAT_147f14d12);
    }
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x288))(plVar5,DAT_14cb20e58);
    if (plVar5 == (longlong *)0x0) goto LAB_140118092;
    if (DAT_14cb20e58 == 0) {
      local_50 = &local_30;
      local_30 = FUN_1449e2820;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_1427b09ee;
      local_58 = &LAB_147f14d13;
      local_60 = FUN_1464313b0;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10004001;
      local_80 = 8;
      local_88 = 0x28;
      FUN_14081cfa3(L"/Script/GbxAI",L"GbxAggroInterface",&DAT_14cb20e58,&DAT_147f14d12);
    }
    plVar6 = (longlong *)FUN_144718840(plVar5,DAT_14cb20e58);
    lVar7 = 0;
    if ((plVar5 != plVar6) && (plVar6 != (longlong *)0x0)) {
      lVar7 = (**(code **)(*plVar6 + 0x10))();
    }
  }
  cVar1 = *(char *)(param_1 + 8);
  if (cVar1 == '\0') {
    if (lVar7 == 0) {
      uVar8 = 0;
    }
    else {
      bVar2 = FUN_14482d262(lVar7,3);
      uVar8 = (uint)bVar2;
    }
    *(undefined2 *)(param_2 + 6) = 4;
    *param_2 = uVar8;
  }
  else {
    if (cVar1 == '\x01') {
      uVar8 = 0;
      if (lVar7 != 0) {
        bVar2 = FUN_147f42fe2(lVar7);
LAB_140118238:
        uVar8 = (uint)bVar2;
      }
    }
    else if (cVar1 == '\x02') {
      uVar8 = 0;
      if (lVar7 != 0) {
        bVar2 = FUN_147f4308a(lVar7);
        goto LAB_140118238;
      }
    }
    else {
      if (cVar1 != '\x03') {
        *(undefined2 *)(param_2 + 6) = 0;
        uVar3 = 0;
        goto LAB_140118065;
      }
      uVar8 = 0;
      if ((lVar4 != 0) && (lVar7 != 0)) {
        bVar2 = FUN_147f43132(lVar7,lVar4);
        goto LAB_140118238;
      }
    }
    *(undefined2 *)(param_2 + 6) = 4;
    *param_2 = uVar8;
  }
  uVar3 = 1;
LAB_140118065:
  *(undefined1 *)(param_2 + 8) = uVar3;
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14011823e FUN_14011823e body=270 status=ok
// SIG undefined FUN_14011823e(void)

longlong FUN_14011823e(void)

{
  longlong lVar1;
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
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = FUN_1447262c2();
  if (lVar1 != 0) {
    if (DAT_14cac9ca8 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141030f22;
      local_20 = FUN_14081d0ea;
      local_28 = FUN_14081d0ea;
      local_38 = &LAB_1478c0a72;
      local_40 = &LAB_1417b2375;
      local_48 = L"Engine";
      local_50 = 0x1000000000;
      local_58 = 0x10000004;
      local_60 = 8;
      local_68 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) goto LAB_140118289;
  }
  lVar1 = 0;
LAB_140118289:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14011834e FUN_14011834e body=142 status=ok
// SIG undefined FUN_14011834e(void)

ulonglong FUN_14011834e(float *param_1,char param_2)

{
  longlong lVar1;
  ulonglong unaff_RBX;
  undefined7 uVar2;
  float fVar3;
  float fVar4;
  
  if (param_2 == '\x02') {
LAB_1401183a4:
    unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),
                         param_1[2] <= 3.4028235e+38 && param_1[2] != 3.4028235e+38);
  }
  else {
    uVar2 = (undefined7)(unaff_RBX >> 8);
    if (param_2 == '\x01') {
      fVar4 = param_1[1];
      lVar1 = FUN_144860928();
      fVar3 = *(float *)(lVar1 + 0x38);
    }
    else {
      if (param_2 != '\0') {
        fVar4 = *param_1;
        lVar1 = FUN_144860928();
        unaff_RBX = CONCAT71(uVar2,1);
        if (fVar4 <= *(float *)(lVar1 + 0x34)) goto LAB_140118382;
        fVar4 = param_1[1];
        lVar1 = FUN_144860928();
        if (fVar4 <= *(float *)(lVar1 + 0x38)) goto LAB_140118382;
        goto LAB_1401183a4;
      }
      fVar4 = *param_1;
      lVar1 = FUN_144860928();
      fVar3 = *(float *)(lVar1 + 0x34);
    }
    unaff_RBX = CONCAT71(uVar2,fVar4 <= fVar3);
  }
LAB_140118382:
  return unaff_RBX & 0xffffffff;
}



// FUNCTION 1401183dc FUN_1401183dc body=26 status=ok
// SIG undefined FUN_1401183dc(void)

void FUN_1401183dc(undefined8 param_1)

{
  FUN_1401183f6();
  FUN_14011842e(param_1);
  return;
}



// FUNCTION 1401183f6 FUN_1401183f6 body=55 status=ok
// SIG undefined FUN_1401183f6(void)

void FUN_1401183f6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x60);
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + 0x60) = 0;
    FUN_1400baf84(lVar1);
    FUN_1400020a8(lVar1);
    *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) & 0xfd;
  }
  return;
}



// FUNCTION 14011842e FUN_14011842e body=172 status=ok
// SIG undefined FUN_14011842e(void)

void FUN_14011842e(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(byte *)(param_1 + 0x6c) & 1) != 0) && (DAT_14c75f1a4 == '\x01')) {
    local_38 = *(undefined8 *)(param_1 + 0x20);
    local_30 = *(undefined4 *)(param_1 + 0x28);
    FUN_1401184dc(&local_28,&local_38,DAT_14c75f1ac,DAT_14c75f1a8);
    lVar1 = *(longlong *)(param_1 + 0x60);
    *(longlong *)(param_1 + 0x60) = local_28;
    if (lVar1 != 0) {
      FUN_1400baf84(lVar1);
      FUN_1400020a8(lVar1);
      local_28 = *(longlong *)(param_1 + 0x60);
    }
    *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) & 0xfd | (local_28 != 0) * '\x02';
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401184dc FUN_1401184dc body=111 status=ok
// SIG undefined FUN_1401184dc(void)

undefined8
FUN_1401184dc(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14482d4e2(local_38);
  FUN_14011854c(param_1,local_38,param_3,param_4);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14011854c FUN_14011854c body=103 status=ok
// SIG undefined FUN_14011854c(void)

undefined8 * FUN_14011854c(undefined8 *param_1,longlong param_2,int param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  
  if (param_3 < *(int *)(param_2 + 8)) {
    puVar1 = (undefined8 *)FUN_14001cc68(0x38,0x10);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0;
    FUN_140118700(puVar1,param_2,param_4,1);
  }
  else {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = puVar1;
  return param_1;
}



// FUNCTION 1401185b4 FUN_1401185b4 body=332 status=ok
// SIG undefined FUN_1401185b4(void)

void FUN_1401185b4(longlong param_1,int param_2)

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
    uVar3 = (longlong)param_2 * 0x48;
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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140118622;
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
LAB_140118622:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 / 0x48)) {
      uVar5 = uVar3 / 0x48 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,0x48,8);
  }
  return;
}



// FUNCTION 140118700 FUN_140118700 body=92 status=ok
// SIG undefined FUN_140118700(void)

void FUN_140118700(longlong *param_1,longlong *param_2,undefined4 param_3,undefined4 param_4)

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
  FUN_14011875c(param_1,param_3,param_4);
  return;
}



// FUNCTION 14011875c FUN_14011875c body=789 status=ok
// SIG undefined FUN_14011875c(void)

void FUN_14011875c(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  longlong *local_f0;
  longlong local_e8 [3];
  undefined8 uStack_d0;
  int iStack_cc;
  longlong local_c8;
  undefined8 uStack_c0;
  int iStack_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*(int *)((longlong)param_1 + 0x2c) < 0) {
    *(undefined4 *)(param_1 + 5) = 0;
    FUN_146db6516(param_1 + 4);
  }
  else {
    *(undefined4 *)(param_1 + 5) = 0;
  }
  iVar12 = (int)param_1[1];
  iVar7 = (int)param_1[3];
  if (iVar7 < iVar12) {
    *(int *)(param_1 + 3) = iVar12;
    if ((uint)(*(int *)((longlong)param_1 + 0x1c) - iVar7) < (uint)(iVar12 - iVar7)) {
      FUN_1446f48e2(param_1 + 2);
    }
  }
  else {
    if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar12);
    }
    if (iVar12 < iVar7) {
      *(int *)(param_1 + 3) = iVar12;
      FUN_14479f406();
    }
  }
  local_c8 = 0;
  uStack_c0 = 0;
  local_e8[2] = 0;
  uStack_d0 = 0;
  local_e8[0] = 0;
  local_e8[1] = 0;
  FUN_140aacae8(local_e8,(int)param_1[1],1);
  iVar12 = (int)param_1[1];
  if (iVar12 < 0) {
LAB_140118a62:
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar12);
  }
  if (iStack_cc < iVar12) {
    FUN_14481578e(local_e8 + 2);
    iVar12 = (int)param_1[1];
    if (iVar12 < 0) goto LAB_140118a62;
  }
  if (iStack_bc < iVar12) {
    FUN_14481578e(&local_c8);
    iVar12 = (int)param_1[1];
  }
  if (iVar12 < 1) {
    local_b8 = 3.4028235e+38;
    local_ac = -3.4028235e+38;
    local_a8 = -3.4028235e+38;
    local_a4 = -3.4028235e+38;
    local_b4 = 3.4028235e+38;
    local_b0 = 3.4028235e+38;
  }
  else {
    local_a4 = -3.4028235e+38;
    local_b0 = 3.4028235e+38;
    lVar9 = 2;
    lVar10 = 0xc;
    lVar11 = 0;
    local_b4 = 3.4028235e+38;
    local_b8 = 3.4028235e+38;
    local_a8 = -3.4028235e+38;
    local_ac = -3.4028235e+38;
    do {
      lVar8 = *param_1;
      *(int *)(param_1[2] + lVar11 * 4) = (int)lVar11;
      fVar1 = *(float *)(lVar8 + -0xc + lVar10 * 4);
      if (fVar1 <= local_b0) {
        local_b0 = fVar1;
      }
      fVar2 = *(float *)(lVar8 + -0x14 + lVar10 * 4);
      fVar3 = *(float *)(lVar8 + -0x10 + lVar10 * 4);
      if (fVar3 <= local_b4) {
        local_b4 = fVar3;
      }
      if (fVar2 <= local_b8) {
        local_b8 = fVar2;
      }
      fVar4 = *(float *)(lVar8 + lVar10 * 4);
      if (local_a4 <= fVar4) {
        local_a4 = fVar4;
      }
      fVar5 = *(float *)(lVar8 + -4 + lVar10 * 4);
      if (local_a8 <= fVar5) {
        local_a8 = fVar5;
      }
      fVar6 = *(float *)(lVar8 + -8 + lVar10 * 4);
      if (local_ac <= fVar6) {
        local_ac = fVar6;
      }
      *(float *)(local_e8[0] + -8 + lVar9 * 4) = (fVar6 - fVar2) * 0.5 + fVar2;
      *(float *)(local_e8[0] + -4 + lVar9 * 4) = (fVar5 - fVar3) * 0.5 + fVar3;
      *(float *)(local_e8[0] + lVar9 * 4) = (fVar4 - fVar1) * 0.5 + fVar1;
      lVar11 = lVar11 + 1;
      lVar9 = lVar9 + 3;
      lVar10 = lVar10 + 0x12;
    } while (lVar11 < (int)param_1[1]);
  }
  local_108 = 0;
  local_100 = param_2;
  local_f8 = param_3;
  local_f0 = local_e8;
  FUN_1449b2602(param_1,&local_b8,0);
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  if (local_e8[2] != 0) {
    FUN_1400020a8();
  }
  if (local_e8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_a0 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140118a74 FUN_140118a74 body=838 status=ok
// SIG undefined FUN_140118a74(void)

void FUN_140118a74(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  undefined4 local_190;
  longlong *local_188;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined1 local_148 [12];
  undefined8 uStack_13c;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 auStack_d8 [23];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if ((*(byte *)(param_1 + 0x171) & 2) == 0) goto LAB_140118c2a;
  plVar5 = *(longlong **)(param_1 + 0x148);
  lVar4 = plVar5[1];
  if (((int)lVar4 < 3) && (0 < (int)plVar5[0x7e0])) {
    if (*(int *)(plVar5[0x7d7] + 8) < 3) {
      if (0 < (int)plVar5[0x77e]) goto LAB_140118c79;
      goto LAB_140118ac1;
    }
    if (plVar5[0x780] == 0) goto LAB_140118ac1;
LAB_140118c79:
    lVar3 = *(longlong *)(param_1 + 8);
    bVar1 = *(byte *)(lVar3 + 0x6f);
    if ((bVar1 & 0x20) == 0 && (byte)(*(char *)(lVar3 + 0x68) - 3U) < 0xfe) {
      if (*(char *)(lVar3 + 0x69) != '\x02' || -1 < (char)bVar1) goto LAB_140118ac1;
    }
    else if (-1 < (char)bVar1) goto LAB_140118ac1;
    local_190 = (**(code **)(*plVar5 + 0x490))(plVar5);
    lVar4 = *(longlong *)(param_1 + 8);
    local_178 = *(undefined8 *)(lVar4 + 0x180);
    uStack_170 = *(undefined8 *)(lVar4 + 0x188);
    local_168 = *(undefined8 *)(lVar4 + 400);
    local_f8 = 0;
    uStack_f0 = 0x3f80000000000000;
    lVar4 = 0x6c;
    do {
      *(undefined8 *)(local_148 + lVar4 + 4) = 0;
      *(undefined8 *)((longlong)&uStack_13c + lVar4) = 0x3f80000000000000;
      lVar4 = lVar4 + 0x10;
    } while (lVar4 != 0x9c);
    lVar4 = 0x9c;
    do {
      *(undefined8 *)(local_148 + lVar4 + 4) = 0;
      *(undefined8 *)((longlong)&uStack_13c + lVar4) = 0x3f80000000000000;
      lVar4 = lVar4 + 0x10;
    } while (lVar4 != 0xcc);
    auStack_d8[0xc] = 0;
    auStack_d8[0xd] = 0x3f80000000000000;
    auStack_d8[0xe] = 0;
    auStack_d8[0xf] = 0x3f80000000000000;
    auStack_d8[0x10] = 0;
    auStack_d8[0x11] = 0;
    auStack_d8[0x12] = 0;
    auStack_d8[0x13] = 0;
    auStack_d8[0x14] = 0;
    auStack_d8[0x15] = 0;
    local_198 = &local_158;
    local_188 = plVar5 + 0x767;
    local_158 = local_178;
    uStack_150 = uStack_170;
    local_148._0_8_ = local_168;
    FUN_144b11692(*(undefined4 *)(*(longlong *)(param_1 + 0x148) + 8),(longlong)&uStack_13c + 4,0,0)
    ;
    lVar4 = *(longlong *)(param_1 + 0xc0);
  }
  else {
LAB_140118ac1:
    lVar3 = *(longlong *)(param_1 + 0xb8);
    if (((lVar3 == 0) || ((int)plVar5[0x727] == -1)) || (*(char *)(lVar3 + 0x1d0) != '\x01')) {
      lVar3 = 0x6c;
      do {
        *(undefined8 *)(local_148 + lVar3 + 4) = 0;
        *(undefined8 *)((longlong)&uStack_13c + lVar3) = 0x3f80000000000000;
        lVar3 = lVar3 + 0x10;
      } while (lVar3 != 0x9c);
      lVar3 = 0x9c;
      do {
        *(undefined8 *)(local_148 + lVar3 + 4) = 0;
        *(undefined8 *)((longlong)&uStack_13c + lVar3) = 0x3f80000000000000;
        lVar3 = lVar3 + 0x10;
      } while (lVar3 != 0xcc);
      plVar5 = (longlong *)0x0;
      lVar3 = 0;
    }
    else {
      lVar2 = 0x6c;
      do {
        *(undefined8 *)(local_148 + lVar2 + 4) = 0;
        *(undefined8 *)((longlong)&uStack_13c + lVar2) = 0x3f80000000000000;
        lVar2 = lVar2 + 0x10;
      } while (lVar2 != 0x9c);
      lVar2 = 0x9c;
      do {
        *(undefined8 *)(local_148 + lVar2 + 4) = 0;
        *(undefined8 *)((longlong)&uStack_13c + lVar2) = 0x3f80000000000000;
        lVar2 = lVar2 + 0x10;
      } while (lVar2 != 0xcc);
      plVar5 = plVar5 + 0x726;
    }
    local_198 = &local_158;
    auStack_d8[0x15] = 0;
    auStack_d8[0x14] = 0;
    auStack_d8[0x13] = 0;
    auStack_d8[0x12] = 0;
    auStack_d8[0x11] = 0;
    auStack_d8[0x10] = 0;
    auStack_d8[0xf] = 0x3f80000000000000;
    auStack_d8[0xe] = 0;
    auStack_d8[0xd] = 0x3f80000000000000;
    auStack_d8[0xc] = 0;
    uStack_f0 = 0x3f80000000000000;
    local_f8 = 0;
    local_148._0_8_ = 0;
    uStack_150 = 0;
    local_158 = 0;
    local_188 = (longlong *)0x0;
    local_190 = 0;
    FUN_144b11692((int)lVar4,(longlong)&uStack_13c + 4,plVar5,lVar3);
    lVar4 = *(longlong *)(param_1 + 0xc0);
  }
  if (lVar4 != 0) {
    FUN_1472ab878(param_1 + 0xc0,param_2,(longlong)&uStack_13c + 4);
  }
  *(byte *)(param_1 + 0x171) = *(byte *)(param_1 + 0x171) & 0xfd;
LAB_140118c2a:
  if ((local_20 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140118dbb FUN_140118dbb body=1880 status=ok
// SIG undefined FUN_140118dbb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140118dbb(ulonglong *param_1,ulonglong param_2,int param_3,undefined4 param_4,uint param_5,
                  undefined8 param_6)

{
  longlong lVar1;
  ulonglong *puVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  void *_Src;
  longlong lVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  longlong lVar18;
  undefined8 *puVar19;
  void *pvVar20;
  int iVar21;
  size_t _Size;
  void *_Dst;
  uint uVar22;
  undefined2 *puVar23;
  undefined1 auStack_e8 [32];
  wchar_t *local_c8;
  wchar_t *local_c0;
  undefined4 local_b8;
  undefined4 local_b0;
  code *local_a8;
  code *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined4 local_78;
  undefined8 local_70;
  ulonglong local_68;
  undefined2 *local_60;
  undefined8 local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar16 = *(undefined8 *)
            (&DAT_14ca8c1f0 +
            (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8);
  local_68 = param_2;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca86628) {
    FUN_144b3d300(&DAT_14ca86628);
    if (DAT_14ca86628 == -1) {
      FUN_145cc90d4();
      local_80 = &LAB_14712ac08;
      local_88 = &LAB_14712ac0c;
      local_90 = &LAB_147416532;
      local_98 = &LAB_147416536;
      local_a0 = FUN_14741653a;
      local_a8 = FUN_147416592;
      local_c0 = L"ClearCS";
      local_c8 = L"/Engine/Private/ClearReplacementShaders.usf";
      local_70 = 0;
      local_78 = 0x100;
      local_b0 = 1;
      local_b8 = 5;
      FUN_140db5666(&DAT_14ca86580,0,&DAT_14ca86518,L"FClearReplacementCS_Buffer_Uint4_Bounds");
      _DAT_14ca86580 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f1e63);
      _Init_thread_footer(&DAT_14ca86628);
    }
  }
  FUN_1448e935e(uVar16,&local_58,&DAT_14ca86580,0);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca86628) {
    FUN_144b3d300(&DAT_14ca86628);
    if (DAT_14ca86628 == -1) {
      FUN_145cc90d4();
      local_80 = &LAB_14712ac08;
      local_88 = &LAB_14712ac0c;
      local_90 = &LAB_147416532;
      local_98 = &LAB_147416536;
      local_a0 = FUN_14741653a;
      local_a8 = FUN_147416592;
      local_c0 = L"ClearCS";
      local_c8 = L"/Engine/Private/ClearReplacementShaders.usf";
      local_70 = 0;
      local_78 = 0x100;
      local_b0 = 1;
      local_b8 = 5;
      FUN_140db5666(&DAT_14ca86580,0,&DAT_14ca86518,L"FClearReplacementCS_Buffer_Uint4_Bounds");
      _DAT_14ca86580 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f1e63);
      _Init_thread_footer(&DAT_14ca86628);
    }
  }
  lVar12 = local_58;
  if (local_58 == 0) {
    uVar15 = 0;
  }
  else {
    uVar15 = *(ulonglong *)
              (*(longlong *)(*(longlong *)(uStack_50 + 8) + 0x50) +
              (longlong)*(int *)(local_58 + 0xd4) * 8);
    if (uVar15 == 0) {
      uVar15 = FUN_1400bafc2(*(longlong *)(uStack_50 + 8),(longlong)*(int *)(local_58 + 0xd4),1);
    }
  }
  uVar16 = FUN_140029432(param_1,uVar15,0);
  param_1[0x37] = uVar15;
  puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar19 = puVar17 + 3;
  if ((undefined8 *)param_1[1] < puVar19) {
    FUN_140023dd8(param_1,0x20);
    puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar19 = puVar17 + 3;
  }
  *param_1 = (ulonglong)puVar19;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar17;
  param_1[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a37d340;
  puVar17[2] = uVar16;
  lVar18 = FUN_144821ef4(param_1);
  FUN_144abcaea(lVar18,local_58 + 0xe0,param_6,0);
  lVar1 = local_58 + 0xe6;
  local_58 = 0;
  uStack_50 = 0;
  FUN_144a86d70(lVar18,lVar1,&local_58,0);
  local_58 = CONCAT44(param_4,param_3);
  uStack_50 = (ulonglong)param_5;
  FUN_144a86d70(lVar18,lVar12 + 0xec,&local_58,0);
  puVar23 = (undefined2 *)(lVar12 + 0xf8);
  FUN_144a86a8e(lVar18,puVar23,local_68);
  iVar13 = *(int *)(lVar18 + 0x30) + *(int *)(lVar18 + 0x20);
  iVar14 = iVar13 + *(int *)(lVar18 + 0x40);
  if (iVar14 != 0 && SCARRY4(iVar13,*(int *)(lVar18 + 0x40)) == iVar14 < 0) {
    puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar19 = puVar17 + 0xb;
    local_68 = uVar15;
    local_60 = puVar23;
    if ((undefined8 *)param_1[1] < puVar19) {
      FUN_140023dd8(param_1,0x60);
      puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar19 = puVar17 + 0xb;
    }
    *param_1 = (ulonglong)puVar19;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar17;
    param_1[6] = (ulonglong)(puVar17 + 1);
    uVar16 = *(undefined8 *)(lVar18 + 0x38);
    uVar4 = *(undefined4 *)(lVar18 + 0x40);
    uVar8 = *(undefined8 *)(lVar18 + 0x28);
    uVar5 = *(undefined4 *)(lVar18 + 0x30);
    uVar9 = *(undefined8 *)(lVar18 + 0x18);
    uVar6 = *(undefined4 *)(lVar18 + 0x20);
    uVar10 = *(undefined8 *)(lVar18 + 8);
    uVar7 = *(undefined4 *)(lVar18 + 0x10);
    puVar17[1] = 0;
    *puVar17 = &PTR_FUN_14a1e7fa8;
    puVar17[2] = local_68;
    puVar17[3] = uVar10;
    *(undefined4 *)(puVar17 + 4) = uVar7;
    puVar17[5] = uVar9;
    *(undefined4 *)(puVar17 + 6) = uVar6;
    puVar17[7] = uVar8;
    *(undefined4 *)(puVar17 + 8) = uVar5;
    puVar17[9] = uVar16;
    *(undefined4 *)(puVar17 + 10) = uVar4;
    *(undefined8 *)(lVar18 + 8) = 0;
    *(undefined4 *)(lVar18 + 0x10) = 0;
    *(undefined8 *)(lVar18 + 0x18) = 0;
    *(undefined4 *)(lVar18 + 0x20) = 0;
    *(undefined8 *)(lVar18 + 0x28) = 0;
    *(undefined4 *)(lVar18 + 0x30) = 0;
    *(undefined8 *)(lVar18 + 0x38) = 0;
    *(undefined4 *)(lVar18 + 0x40) = 0;
    uVar15 = local_68;
    puVar23 = local_60;
  }
  iVar13 = param_3 + 0x7e;
  if (-1 < param_3 + 0x3f) {
    iVar13 = param_3 + 0x3f;
  }
  iVar13 = iVar13 >> 6;
  iVar14 = 1;
  if (DAT_14ca84f24 < iVar13) {
    iVar21 = iVar13 + 0xfe;
    if (-1 < iVar13 + 0x7f) {
      iVar21 = iVar13 + 0x7f;
    }
    iVar21 = iVar21 >> 7;
    iVar13 = 0x80;
  }
  else {
    iVar21 = 1;
  }
  if (DAT_14ca84f28 < iVar21) {
    iVar14 = iVar21 + 0xfe;
    if (-1 < iVar21 + 0x7f) {
      iVar14 = iVar21 + 0x7f;
    }
    iVar14 = iVar14 >> 7;
    iVar21 = 0x80;
  }
  puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar19 = puVar17 + 4;
  if ((undefined8 *)param_1[1] < puVar19) {
    FUN_140023dd8(param_1,0x28);
    puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar19 = puVar17 + 4;
  }
  *param_1 = (ulonglong)puVar19;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar17;
  param_1[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a1fbc30;
  *(int *)(puVar17 + 2) = iVar13;
  *(int *)((longlong)puVar17 + 0x14) = iVar21;
  *(int *)(puVar17 + 3) = iVar14;
  if (DAT_14ca8507b == '\x01') {
    puVar2 = param_1 + 0x12;
    uVar22 = (uint)param_1[0x13];
    if (0 < (int)uVar22) {
      uVar22 = 0;
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar2,0);
        uVar22 = (uint)param_1[0x13];
      }
    }
    if ((*(char *)(lVar12 + 0xfa) != '\0') && (*(char *)(lVar12 + 0xfb) != '\x06')) {
      uVar3 = *puVar23;
      *(uint *)(param_1 + 0x13) = uVar22 + 1;
      if (*(uint *)((longlong)param_1 + 0x9c) < uVar22 + 1) {
        FUN_1447477d8(puVar2,uVar22);
      }
      uVar11 = param_1[0x12];
      *(undefined2 *)(uVar11 + (longlong)(int)uVar22 * 4) = uVar3;
      *(undefined1 *)(uVar11 + 2 + (longlong)(int)uVar22 * 4) = 1;
      uVar22 = (uint)param_1[0x13];
    }
    if (0 < (int)uVar22) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar2;
        puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar19 = puVar17 + 5;
        if ((undefined8 *)param_1[1] < puVar19) {
          FUN_140023dd8(param_1,0x30);
          puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar19 = puVar17 + 5;
        }
        *param_1 = (ulonglong)puVar19;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar17;
        param_1[6] = (ulonglong)(puVar17 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar20 = (void *)((ulonglong)uVar22 * 4 + (longlong)_Dst);
        _Size = (ulonglong)uVar22 * 4;
        if ((void *)param_1[1] < pvVar20) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar20 = (void *)(_Size + (longlong)_Dst);
        }
        *param_1 = (ulonglong)pvVar20;
        memcpy(_Dst,_Src,_Size);
        puVar17[1] = 0;
        *puVar17 = &PTR_FUN_14a1fbc38;
        puVar17[2] = uVar15;
        puVar17[3] = _Dst;
        *(uint *)(puVar17 + 4) = uVar22;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar2,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140119514 FUN_140119514 body=1300 status=ok
// SIG undefined FUN_140119514(void)

void FUN_140119514(ulonglong *param_1,undefined8 param_2,int param_3,undefined4 param_4,uint param_5
                  ,undefined8 param_6)

{
  longlong lVar1;
  ulonglong *puVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  void *_Src;
  longlong lVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  longlong lVar18;
  undefined8 *puVar19;
  void *pvVar20;
  int iVar21;
  size_t _Size;
  void *_Dst;
  undefined2 *puVar22;
  uint uVar23;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  ulonglong local_60;
  undefined8 local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar16 = *(undefined8 *)
            (&DAT_14ca8c1f0 +
            (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8);
  uVar14 = FUN_145cca9fa();
  uVar15 = 0;
  FUN_1448e935e(uVar16,&local_58,uVar14,0);
  FUN_145cca9fa();
  lVar11 = local_58;
  if (local_58 != 0) {
    uVar15 = *(ulonglong *)
              (*(longlong *)(*(longlong *)(uStack_50 + 8) + 0x50) +
              (longlong)*(int *)(local_58 + 0xd4) * 8);
    if (uVar15 == 0) {
      uVar15 = FUN_1400bafc2(*(longlong *)(uStack_50 + 8),(longlong)*(int *)(local_58 + 0xd4),1);
    }
  }
  uVar16 = FUN_140029432(param_1,uVar15,0);
  param_1[0x37] = uVar15;
  puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar19 = puVar17 + 3;
  if ((undefined8 *)param_1[1] < puVar19) {
    FUN_140023dd8(param_1,0x20);
    puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar19 = puVar17 + 3;
  }
  *param_1 = (ulonglong)puVar19;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar17;
  param_1[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a37d340;
  puVar17[2] = uVar16;
  lVar18 = FUN_144821ef4(param_1);
  FUN_141788ec8(lVar18,local_58 + 0xe0,param_6,0);
  lVar1 = local_58 + 0xe6;
  local_58 = 0;
  uStack_50 = 0;
  FUN_144a86d70(lVar18,lVar1,&local_58,0);
  local_58 = CONCAT44(param_4,param_3);
  uStack_50 = (ulonglong)param_5;
  FUN_144a86d70(lVar18,lVar11 + 0xec,&local_58,0);
  puVar22 = (undefined2 *)(lVar11 + 0xf8);
  FUN_144a86a8e(lVar18,puVar22,param_2);
  iVar12 = *(int *)(lVar18 + 0x30) + *(int *)(lVar18 + 0x20);
  iVar13 = iVar12 + *(int *)(lVar18 + 0x40);
  if (iVar13 != 0 && SCARRY4(iVar12,*(int *)(lVar18 + 0x40)) == iVar13 < 0) {
    puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar19 = puVar17 + 0xb;
    local_68 = puVar22;
    local_60 = uVar15;
    if ((undefined8 *)param_1[1] < puVar19) {
      FUN_140023dd8(param_1,0x60);
      puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar19 = puVar17 + 0xb;
    }
    *param_1 = (ulonglong)puVar19;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar17;
    param_1[6] = (ulonglong)(puVar17 + 1);
    uVar16 = *(undefined8 *)(lVar18 + 0x38);
    uVar4 = *(undefined4 *)(lVar18 + 0x40);
    uVar14 = *(undefined8 *)(lVar18 + 0x28);
    uVar5 = *(undefined4 *)(lVar18 + 0x30);
    uVar8 = *(undefined8 *)(lVar18 + 0x18);
    uVar6 = *(undefined4 *)(lVar18 + 0x20);
    uVar9 = *(undefined8 *)(lVar18 + 8);
    uVar7 = *(undefined4 *)(lVar18 + 0x10);
    puVar17[1] = 0;
    *puVar17 = &PTR_FUN_14a1e7fa8;
    puVar17[2] = local_60;
    puVar17[3] = uVar9;
    *(undefined4 *)(puVar17 + 4) = uVar7;
    puVar17[5] = uVar8;
    *(undefined4 *)(puVar17 + 6) = uVar6;
    puVar17[7] = uVar14;
    *(undefined4 *)(puVar17 + 8) = uVar5;
    puVar17[9] = uVar16;
    *(undefined4 *)(puVar17 + 10) = uVar4;
    *(undefined8 *)(lVar18 + 8) = 0;
    *(undefined4 *)(lVar18 + 0x10) = 0;
    *(undefined8 *)(lVar18 + 0x18) = 0;
    *(undefined4 *)(lVar18 + 0x20) = 0;
    *(undefined8 *)(lVar18 + 0x28) = 0;
    *(undefined4 *)(lVar18 + 0x30) = 0;
    *(undefined8 *)(lVar18 + 0x38) = 0;
    *(undefined4 *)(lVar18 + 0x40) = 0;
    uVar15 = local_60;
    puVar22 = local_68;
  }
  iVar12 = param_3 + 0x7e;
  if (-1 < param_3 + 0x3f) {
    iVar12 = param_3 + 0x3f;
  }
  iVar12 = iVar12 >> 6;
  iVar13 = 1;
  if (DAT_14ca84f24 < iVar12) {
    iVar21 = iVar12 + 0xfe;
    if (-1 < iVar12 + 0x7f) {
      iVar21 = iVar12 + 0x7f;
    }
    iVar21 = iVar21 >> 7;
    iVar12 = 0x80;
  }
  else {
    iVar21 = 1;
  }
  if (DAT_14ca84f28 < iVar21) {
    iVar13 = iVar21 + 0xfe;
    if (-1 < iVar21 + 0x7f) {
      iVar13 = iVar21 + 0x7f;
    }
    iVar13 = iVar13 >> 7;
    iVar21 = 0x80;
  }
  puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar19 = puVar17 + 4;
  if ((undefined8 *)param_1[1] < puVar19) {
    FUN_140023dd8(param_1,0x28);
    puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar19 = puVar17 + 4;
  }
  *param_1 = (ulonglong)puVar19;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar17;
  param_1[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a1fbc30;
  *(int *)(puVar17 + 2) = iVar12;
  *(int *)((longlong)puVar17 + 0x14) = iVar21;
  *(int *)(puVar17 + 3) = iVar13;
  if (DAT_14ca8507b == '\x01') {
    puVar2 = param_1 + 0x12;
    uVar23 = (uint)param_1[0x13];
    if (0 < (int)uVar23) {
      uVar23 = 0;
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar2,0);
        uVar23 = (uint)param_1[0x13];
      }
    }
    if ((*(char *)(lVar11 + 0xfa) != '\0') && (*(char *)(lVar11 + 0xfb) != '\x06')) {
      uVar3 = *puVar22;
      *(uint *)(param_1 + 0x13) = uVar23 + 1;
      if (*(uint *)((longlong)param_1 + 0x9c) < uVar23 + 1) {
        FUN_1447477d8(puVar2,uVar23);
      }
      uVar10 = param_1[0x12];
      *(undefined2 *)(uVar10 + (longlong)(int)uVar23 * 4) = uVar3;
      *(undefined1 *)(uVar10 + 2 + (longlong)(int)uVar23 * 4) = 1;
      uVar23 = (uint)param_1[0x13];
    }
    if (0 < (int)uVar23) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar2;
        puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar19 = puVar17 + 5;
        if ((undefined8 *)param_1[1] < puVar19) {
          FUN_140023dd8(param_1,0x30);
          puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar19 = puVar17 + 5;
        }
        *param_1 = (ulonglong)puVar19;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar17;
        param_1[6] = (ulonglong)(puVar17 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar20 = (void *)((ulonglong)uVar23 * 4 + (longlong)_Dst);
        _Size = (ulonglong)uVar23 * 4;
        if ((void *)param_1[1] < pvVar20) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar20 = (void *)(_Size + (longlong)_Dst);
        }
        *param_1 = (ulonglong)pvVar20;
        memcpy(_Dst,_Src,_Size);
        puVar17[1] = 0;
        *puVar17 = &PTR_FUN_14a1fbc38;
        puVar17[2] = uVar15;
        puVar17[3] = _Dst;
        *(uint *)(puVar17 + 4) = uVar23;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar2,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140119a2a FUN_140119a2a body=197 status=ok
// SIG undefined FUN_140119a2a(void)

ulonglong FUN_140119a2a(longlong *param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined7 uVar9;
  ulonglong uVar8;
  longlong lVar10;
  
  uVar9 = (undefined7)((ulonglong)param_3 >> 8);
  if ((param_2 == 0) || (param_3 == 0)) {
    uVar8 = CONCAT71(uVar9,param_2 == param_3);
  }
  else {
    plVar4 = (longlong *)(**(code **)(*param_1 + 0x208))(param_1,param_2,0);
    plVar5 = (longlong *)(**(code **)(*param_1 + 0x208))(param_1,param_3,0);
    uVar8 = CONCAT71(uVar9,1);
    if (plVar4 != plVar5) {
      uVar1 = *(uint *)(plVar4 + 1);
      if (uVar1 == *(uint *)(plVar5 + 1)) {
        if ((ulonglong)uVar1 != 0) {
          lVar10 = 0;
          do {
            lVar2 = *plVar4;
            lVar3 = *plVar5;
            lVar6 = FUN_14479d2ce(lVar2 + lVar10);
            lVar7 = FUN_14479d2ce(lVar3 + lVar10);
            if ((lVar6 != lVar7) ||
               (*(longlong *)(lVar2 + 8 + lVar10) != *(longlong *)(lVar3 + 8 + lVar10)))
            goto LAB_140119aeb;
            lVar10 = lVar10 + 0x10;
          } while ((ulonglong)uVar1 << 4 != lVar10);
        }
      }
      else {
LAB_140119aeb:
        uVar8 = 0;
      }
    }
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 140119b0a FUN_140119b0a body=99 status=ok
// SIG undefined FUN_140119b0a(void)

undefined8 * FUN_140119b0a(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar2 = &DAT_14c951f48;
  if ((param_2 != 0) && (*(char *)(param_2 + param_3) == '\x01')) {
    lVar1 = *(longlong *)(param_1 + 0x70);
    uVar3 = FUN_140bc13b4(param_2 + param_3,*(undefined8 *)(lVar1 + 0xe0),
                          *(undefined8 *)(lVar1 + 0xe8));
    puVar4 = (undefined8 *)FUN_140119b6e(uVar3,*(undefined8 *)(lVar1 + 0xe8));
    puVar2 = &DAT_14c951f48;
    if (puVar4 != (undefined8 *)0x0) {
      puVar2 = puVar4;
    }
  }
  return puVar2;
}



// FUNCTION 140119b6e FUN_140119b6e body=359 status=ok
// SIG undefined FUN_140119b6e(void)

undefined8 FUN_140119b6e(ulonglong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c963d60);
  if (DAT_14c963d90 != DAT_14c963dbc) {
    uVar2 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    puVar4 = &DAT_14c963dc0;
    if (DAT_14c963dc8 != (undefined *)0x0) {
      puVar4 = DAT_14c963dc8;
    }
    iVar3 = *(int *)(puVar4 + (ulonglong)(DAT_14c963dd0 - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4);
    if (iVar3 != -1) {
      uVar6 = 0;
      do {
        lVar1 = DAT_14c963d88 + (longlong)iVar3 * 0x60;
        if (*(ulonglong *)(DAT_14c963d88 + (longlong)iVar3 * 0x60) == param_1) {
          uVar6 = 0;
          if ((lVar1 != 0) && ((longlong *)(lVar1 + 8) != (longlong *)0x0)) {
            if (*(int *)(lVar1 + 0x10) == *(int *)(lVar1 + 0x3c)) goto LAB_140119cd1;
            uVar2 = (uint)((ulonglong)param_2 >> 0x10);
            uVar7 = (uint)param_2 & 0xffff;
            lVar5 = lVar1 + 0x40;
            if (*(longlong *)(lVar1 + 0x48) != 0) {
              lVar5 = *(longlong *)(lVar1 + 0x48);
            }
            iVar3 = *(int *)(lVar5 + (ulonglong)
                                     (*(int *)(lVar1 + 0x50) - 1U &
                                     (int)((ulonglong)param_2 >> 0x20) +
                                     ((uint)param_2 << 0x10 | uVar7) +
                                     (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar7 >> 4)) * 4);
            if (iVar3 == -1) goto LAB_140119cd1;
            lVar1 = *(longlong *)(lVar1 + 8);
            uVar6 = 0;
            goto LAB_140119c8e;
          }
          break;
        }
        iVar3 = *(int *)(lVar1 + 0x58);
      } while (iVar3 != -1);
      goto LAB_140119cb9;
    }
  }
LAB_140119cd1:
  uVar6 = 0;
  goto LAB_140119cb9;
  while (iVar3 = *(int *)(lVar5 + 0x18), iVar3 != -1) {
LAB_140119c8e:
    lVar5 = lVar1 + (longlong)iVar3 * 0x20;
    if (*(longlong *)(lVar1 + (longlong)iVar3 * 0x20) == param_2) {
      uVar6 = 0;
      if ((lVar5 != 0) && ((undefined8 *)(lVar5 + 8) != (undefined8 *)0x0)) {
        uVar6 = *(undefined8 *)(lVar5 + 8);
      }
      break;
    }
  }
LAB_140119cb9:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c963d60);
  return uVar6;
}



// FUNCTION 140119ce0 FUN_140119ce0 body=160 status=ok
// SIG undefined FUN_140119ce0(void)

void FUN_140119ce0(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x450);
  iVar1 = *(int *)(param_1 + 0x458);
  uVar2 = 0;
  if ((longlong)iVar1 != 0) {
    lVar4 = 0;
    do {
      if ((*(int *)(lVar3 + 8 + lVar4) != 0) && (*(longlong **)(lVar3 + lVar4) != (longlong *)0x0))
      {
        (**(code **)(**(longlong **)(lVar3 + lVar4) + 0x60))();
      }
      lVar4 = lVar4 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar4);
    uVar2 = *(undefined4 *)(param_1 + 0x458);
    lVar3 = *(longlong *)(param_1 + 0x450);
  }
  iVar1 = *(int *)(param_1 + 0x45c);
  FUN_144959b6a(lVar3,uVar2);
  *(undefined4 *)(param_1 + 0x458) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x45c) != 0)) {
    FUN_145947f4c(param_1 + 0x450,0);
    return;
  }
  return;
}



// FUNCTION 140119d80 FUN_140119d80 body=22 status=ok
// SIG undefined FUN_140119d80(void)

undefined1 FUN_140119d80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140119d96(param_2,param_3);
  return 1;
}



// FUNCTION 140119d96 FUN_140119d96 body=94 status=ok
// SIG undefined FUN_140119d96(void)

longlong * FUN_140119d96(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  uVar2 = FUN_14480c34d();
  plVar3 = (longlong *)FUN_14480c34d(uVar2,param_2 + 0x18);
  puVar1 = *(undefined1 **)plVar3[1];
  if ((undefined1 *)((undefined8 *)plVar3[1])[1] < puVar1 + 1) {
    (**(code **)(*plVar3 + 0x170))(plVar3,(undefined1 *)(param_2 + 0x30),1);
  }
  else {
    *(undefined1 *)(param_2 + 0x30) = *puVar1;
    *(longlong *)plVar3[1] = *(longlong *)plVar3[1] + 1;
  }
  return plVar3;
}



// FUNCTION 140119df4 FUN_140119df4 body=80 status=ok
// SIG undefined FUN_140119df4(void)

void FUN_140119df4(longlong param_1)

{
  if ((DAT_14c86a9fc == 0) &&
     (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 1)) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  FUN_14482dff6(param_1 + -0x438,0);
  return;
}



// FUNCTION 140119e44 FUN_140119e44 body=40 status=ok
// SIG undefined FUN_140119e44(void)

void FUN_140119e44(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    lVar1 = *(longlong *)(param_2 + lVar2);
    *(longlong *)(param_1 + lVar2) = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    *(undefined8 *)(param_1 + 8 + lVar2) = *(undefined8 *)(param_2 + 8 + lVar2);
    lVar2 = lVar2 + 0x10;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 140119e6c FUN_140119e6c body=269 status=ok
// SIG undefined FUN_140119e6c(void)

void FUN_140119e6c(longlong param_1,int param_2)

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



// FUNCTION 140119f90 FUN_140119f90 body=109 status=ok
// SIG undefined FUN_140119f90(void)

undefined8 * FUN_140119f90(longlong param_1,undefined8 *param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  
  *param_2 = 0;
  *(undefined1 *)(param_2 + 1) = 1;
  param_2[2] = 0;
  *(undefined1 *)(param_2 + 3) = 1;
  if (param_3 < 3) {
    uVar1 = *(undefined8 *)(param_1 + 0x1a0);
    lVar2 = FUN_144a890ae();
    cVar3 = '\x02';
    if (*(char *)(lVar2 + 0x41) != '\x03') {
      cVar3 = *(char *)(lVar2 + 0x41);
    }
    param_2[2] = uVar1;
    *(char *)(param_2 + 3) = cVar3;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x198);
    lVar2 = FUN_14482e3b2();
    cVar3 = '\x02';
    if (*(char *)(lVar2 + 0x41) != '\x03') {
      cVar3 = *(char *)(lVar2 + 0x41);
    }
    *param_2 = uVar1;
    *(char *)(param_2 + 1) = cVar3;
  }
  return param_2;
}



// FUNCTION 140119ffe FUN_140119ffe body=226 status=ok
// SIG undefined FUN_140119ffe(void)

longlong * FUN_140119ffe(longlong *param_1)

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
  pcVar13 = FUN_1463fe9c6;
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



// FUNCTION 14011a0e2 FUN_14011a0e2 body=344 status=ok
// SIG undefined FUN_14011a0e2(void)

void FUN_14011a0e2(longlong param_1,int param_2)

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
  
  uVar3 = *(uint *)(param_1 + 0x88);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar3);
  }
  if (uVar3 < 0x11) {
    iVar8 = 0x10;
  }
  else {
    lVar5 = (longlong)(int)uVar3;
    if (0x10 < *(uint *)(param_1 + 0x8c)) {
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
              if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_14011a174;
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
LAB_14011a174:
    iVar4 = (int)(uVar6 >> 3);
    iVar8 = 0x7fffffff;
    if ((int)uVar3 <= iVar4) {
      iVar8 = iVar4;
    }
  }
  *(int *)(param_1 + 0x8c) = iVar8;
  FUN_14011a23a(param_1,param_2);
  return;
}



// FUNCTION 14011a23a FUN_14011a23a body=141 status=ok
// SIG undefined FUN_14011a23a(void)

void FUN_14011a23a(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x80);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x80,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x80,param_2,param_3,8);
  return;
}



// FUNCTION 14011a2c8 FUN_14011a2c8 body=110 status=ok
// SIG undefined FUN_14011a2c8(void)

undefined8 FUN_14011a2c8(longlong param_1,byte param_2,ulonglong param_3,byte param_4)

{
  ulonglong uVar1;
  byte bVar2;
  undefined7 uVar4;
  undefined8 uVar3;
  bool bVar5;
  
  uVar1 = *(ulonglong *)(param_1 + 0x28);
  uVar4 = (undefined7)((param_3 & 0xffffffff) >> 8);
  if ((uVar1 & 1) == 0) {
    if ((uVar1 & 0x1000004) == 0) {
      bVar5 = false;
    }
    else if ((uVar1 >> 0x30 & 1) == 0) {
      bVar5 = 0 < *(int *)(param_1 + 0x1c);
    }
    else {
      bVar5 = true;
    }
    if ((((uint)uVar1 >> 0x17 & 1) == 0) &&
       ((byte)(bVar5 | param_2 ^ 1 | (param_4 ^ 1) & (byte)(uVar1 >> 0x15)) != 1)) {
      uVar3 = 0;
    }
    else {
      bVar2 = (byte)(param_3 & 0xffffffff);
      uVar3 = CONCAT71(uVar4,(bVar2 ^ 1 | (uVar1 & 0x1000004) != 0) & (param_2 | bVar2));
    }
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
  }
  return uVar3;
}



// FUNCTION 14011a336 FUN_14011a336 body=666 status=ok
// SIG undefined FUN_14011a336(void)

void FUN_14011a336(longlong param_1,double *param_2,float *param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  double *pdVar11;
  float fVar12;
  undefined1 auVar13 [16];
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auStack_98 [32];
  float local_78 [4];
  double local_68 [9];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68[2] = (double)(*(float *)(param_1 + 4) * 0.5);
  local_68[5] = *(double *)(param_1 + 0x20) - local_68[2];
  local_68[2] = *(double *)(param_1 + 0x18) - local_68[2];
  dVar14 = (double)*(float *)(param_1 + 4);
  dVar3 = (param_2[1] - local_68[5]) * (1.0 / dVar14);
  dVar5 = (1.0 / dVar14) * (*param_2 - local_68[2]);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = dVar3;
  auVar13 = roundpd(auVar13,auVar13,1);
  auVar15._8_8_ = 0;
  auVar15._0_8_ = dVar5;
  auVar15 = roundpd(auVar15,auVar15,1);
  local_68[5] = auVar13._0_8_ * dVar14 + local_68[5];
  local_68[2] = auVar15._0_8_ * dVar14 + local_68[2];
  local_68[1] = local_68[5] + 0.0;
  local_68[0] = local_68[2] + 0.0;
  local_68[2] = local_68[2] + dVar14;
  local_68[3] = local_68[1];
  local_68[5] = local_68[5] + dVar14;
  local_68[4] = local_68[0];
  local_68[6] = local_68[2];
  local_68[7] = local_68[5];
  local_78[0] = 0.0;
  local_78[1] = 0.0;
  local_78[2] = 0.0;
  local_78[3] = 0.0;
  iVar1 = *(int *)(param_1 + 0x48);
  lVar6 = 0;
  do {
    if (iVar1 < 1) {
      fVar12 = 0.0;
    }
    else {
      lVar8 = *(longlong *)(param_1 + 0x40);
      lVar10 = lVar8;
      if ((~*(uint *)(lVar8 + 0x3c) & 0x30000000) != 0) {
        lVar9 = lVar8;
        do {
          lVar7 = 0;
          while ((((lVar10 = (longlong)*(int *)(lVar9 + 0x40 + lVar7), lVar10 < 1 ||
                   (lVar10 = lVar10 * 0x58, local_68[lVar6 * 2] < *(double *)(lVar8 + lVar10))) ||
                  (*(double *)(lVar8 + 0x18 + lVar10) <= local_68[lVar6 * 2])) ||
                 ((lVar10 = lVar10 + lVar8, local_68[lVar6 * 2 + 1] < *(double *)(lVar10 + 8) ||
                  (*(double *)(lVar10 + 0x20) <= local_68[lVar6 * 2 + 1]))))) {
            lVar7 = lVar7 + 4;
            if (lVar7 == 0x10) {
              pdVar11 = (double *)
                        (*(longlong *)(param_1 + 0x50) + (ulonglong)*(ushort *)(lVar9 + 0x38) * 0x40
                        + 0x18);
              goto LAB_14011a4f0;
            }
          }
          lVar9 = lVar10;
        } while ((~*(uint *)(lVar10 + 0x3c) & 0x30000000) != 0);
      }
      lVar8 = (ulonglong)*(ushort *)(lVar10 + 0x38) * 0x40 + *(longlong *)(param_1 + 0x50);
      pdVar11 = (double *)(lVar10 + 0x28);
      if (*(char *)(lVar8 + 0x3e) != '\0') {
        pdVar11 = (double *)(lVar8 + 0x18);
      }
LAB_14011a4f0:
      fVar12 = (float)*pdVar11;
    }
    local_78[lVar6] = fVar12;
    lVar6 = lVar6 + 1;
    if (lVar6 == 4) {
      auVar2._8_8_ = 0;
      auVar2._0_8_ = dVar3;
      auVar13 = roundsd(ZEXT816(0),auVar2,9);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = dVar5;
      auVar15 = roundsd(ZEXT816(0),auVar4,9);
      dVar5 = dVar5 - auVar15._0_8_;
      fVar12 = (float)((double)(local_78[1] - local_78[0]) * dVar5 + (double)local_78[0]);
      *param_3 = (float)((double)((float)((double)(local_78[3] - local_78[2]) * dVar5 +
                                         (double)local_78[2]) - fVar12) * (dVar3 - auVar13._0_8_) +
                        (double)fVar12);
      if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  } while( true );
}



// FUNCTION 14011a5d2 FUN_14011a5d2 body=161 status=ok
// SIG undefined FUN_14011a5d2(void)

void FUN_14011a5d2(longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  ulonglong *puVar1;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400748c2(param_1,0);
  FUN_1400748c2(param_1,0);
  (**(code **)(*param_1 + 400))(param_1,param_2);
  FUN_1400748c2(param_1,0);
  FUN_1400748c2(param_1,1);
  puVar1 = (ulonglong *)param_1[1];
  local_21 = param_3;
  if (puVar1[1] < *puVar1 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,&local_21,1);
  }
  else {
    *puVar1 = *puVar1 + 1;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14011a674 FUN_14011a674 body=217 status=ok
// SIG undefined FUN_14011a674(void)

void FUN_14011a674(longlong *param_1,ulonglong *param_2)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  ulonglong uVar4;
  char cVar5;
  ulonglong uVar6;
  undefined1 auStack_58 [38];
  byte local_32 [10];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    uVar4 = *param_2;
    iVar3 = (int)uVar4 * 2;
    bVar2 = (byte)iVar3;
    uVar6 = 0;
    if (0x7f < uVar4) {
      do {
        local_32[uVar6] = (byte)iVar3 | 1;
        uVar6 = uVar6 + 1;
        iVar3 = (int)(uVar4 >> 7) * 2;
        bVar2 = (byte)iVar3;
        bVar1 = 0x3fff < uVar4;
        uVar4 = uVar4 >> 7;
      } while (bVar1);
    }
    local_32[uVar6 & 0xffffffff] = bVar2;
    (**(code **)(*param_1 + 0x170))(param_1,local_32,(int)uVar6 + 1);
  }
  else {
    *param_2 = 0;
    cVar5 = '\0';
    do {
      (**(code **)(*param_1 + 0x170))(param_1,local_32,1);
      *param_2 = *param_2 + ((ulonglong)(local_32[0] >> 1) << (cVar5 * '\a' & 0x3fU));
      cVar5 = cVar5 + '\x01';
    } while ((local_32[0] & 1) != 0);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14011a74e FUN_14011a74e body=1542 status=ok
// SIG undefined FUN_14011a74e(void)

void FUN_14011a74e(longlong param_1,longlong param_2,longlong param_3,char param_4,longlong *param_5
                  )

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 **local_100;
  int local_f4;
  longlong local_f0;
  longlong local_e8;
  ulonglong local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined8 *local_c8;
  undefined8 uStack_c0;
  int local_b8;
  int iStack_b4;
  int iStack_b0;
  uint uStack_ac;
  undefined4 local_a8;
  int iStack_a4;
  undefined8 uStack_a0;
  ulonglong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar12 = param_3 + 0x13b98;
  if (param_4 != '\0') {
    lVar12 = param_3 + 0x13bc8;
  }
  if (*(char *)(lVar12 + 0x20) == '\0') {
    if (*(longlong *)(lVar12 + 0x18) != 0) {
      FUN_142c2fba2(*(undefined8 *)(*(longlong *)(lVar12 + 0x28) + 0x418),&local_b8,lVar12);
      *(int *)(lVar12 + 8) = local_b8;
      *(int *)(lVar12 + 0xc) = iStack_b4;
      *(int *)(lVar12 + 0x10) = iStack_b0;
      *(uint *)(lVar12 + 0x14) = uStack_ac;
    }
    *(undefined1 *)(lVar12 + 0x20) = 1;
  }
  lVar15 = *(longlong *)(lVar12 + 0x18);
  if (((lVar15 == 0) || (*(int *)(lVar15 + 0x388) < 1)) || (*(char *)(lVar15 + 0x3b0) != '\0')) {
    uVar8 = (**(code **)(**(longlong **)(*(longlong *)(param_3 + 8) + 0x178) + 8))();
    if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    FUN_1449b3f6c(param_1,param_2,uVar8);
    return;
  }
  *(undefined1 *)(lVar15 + 0x3b0) = 1;
  uVar3 = *(undefined4 *)(lVar12 + 0xc);
  lVar15 = *(longlong *)(lVar12 + 0x18);
  iVar4 = *(int *)(lVar15 + 0x3a0);
  local_f0 = param_3;
  local_e8 = param_1;
  if (param_5 != (longlong *)0x0) {
    lVar14 = *(longlong *)(lVar15 + 0x380);
    if (*(longlong *)(lVar15 + 0x380) == 0) {
      lVar14 = lVar15;
    }
    iVar5 = *(int *)(lVar15 + 0x388);
    if ((longlong)iVar5 != 0) {
      lVar15 = 0;
      do {
        (**(code **)(*param_5 + 0x10))
                  (param_5,0xffffffff,*(int *)(lVar14 + 100 + lVar15) + iVar4,
                   *(undefined4 *)(lVar14 + 0x60 + lVar15));
        lVar15 = lVar15 + 0x70;
      } while ((longlong)iVar5 * 0x70 - lVar15 != 0);
      lVar15 = *(longlong *)(lVar12 + 0x18);
    }
  }
  lVar14 = local_e8;
  puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar9 = puVar11 + 6;
  if (*(undefined8 **)(param_2 + 0x78) < puVar9) {
    FUN_140023dd8((longlong *)(param_2 + 0x70),0x40);
    puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar9 = puVar11 + 6;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar9;
  *puVar11 = &PTR_FUN_14a222548;
  puVar9 = puVar11 + 1;
  local_100 = (undefined8 **)CONCAT44(local_100._4_4_,*(undefined4 *)(lVar14 + 0x374));
  local_108 = (undefined8 *)CONCAT44(local_108._4_4_,*(undefined4 *)(lVar15 + 0x3a8));
  FUN_1448693cc(puVar9,lVar15,uVar3,iVar4);
  iVar4 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar4 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar4 + 1U) {
    FUN_1448cfae8(param_2 + 0x98,iVar4);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar4 * 8) = puVar11;
  uVar8 = (**(code **)(**(longlong **)(*(longlong *)(local_f0 + 8) + 0x178) + 8))();
  local_108 = puVar9;
  FUN_142c3003e(lVar14,&local_b8,param_2,uVar8);
  FUN_1448cff7e(lVar14,param_2,*(undefined8 *)(*(longlong *)(lVar14 + 0x228) + 0x5358));
  local_100 = &local_c8;
  local_c8 = (undefined8 *)0x0;
  local_108 = puVar9;
  FUN_142c30a76(lVar14,param_2,&local_b8,0);
  if (local_c8 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_c8 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_c8)(local_c8,1);
    }
  }
  uVar8 = (**(code **)(**(longlong **)(*(longlong *)(local_f0 + 8) + 0x178) + 8))();
  FUN_1449b3f6c(lVar14,param_2,uVar8);
  local_e0 = (ulonglong)*(uint *)(lVar12 + 0xc);
  local_f4 = *(int *)(*(longlong *)(lVar12 + 0x18) + 0x3a0);
  local_c8 = (undefined8 *)0x0;
  uStack_c0 = 0;
  iVar4 = *(int *)(*(longlong *)(lVar12 + 0x18) + 0x398);
  if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar4);
  }
  if (iVar4 != 0) {
    FUN_144757ad2(&local_c8);
    lVar15 = (longlong)*(int *)(*(longlong *)(lVar12 + 0x18) + 0x398);
    if (lVar15 != 0) {
      lVar14 = *(longlong *)(*(longlong *)(lVar12 + 0x18) + 0x390);
      local_d0 = local_e8 + 0x360;
      lVar15 = lVar15 << 2;
      lVar13 = 0;
      local_d8 = lVar15;
      do {
        uVar6 = uStack_c0;
        lVar16 = *(longlong *)(*(longlong *)(lVar12 + 0x18) + 0x380);
        if (lVar16 == 0) {
          lVar16 = *(longlong *)(lVar12 + 0x18);
        }
        iVar4 = *(int *)(lVar14 + lVar13);
        cVar2 = *(char *)(lVar16 + 0x50 + (longlong)iVar4 * 0x70);
        if ((cVar2 == -1) || (cVar2 <= *(char *)(local_e8 + 0x370))) {
          lVar16 = (longlong)(int)uStack_c0;
          uVar7 = (int)uStack_c0 + 1;
          uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar7);
          if (uStack_c0._4_4_ < uVar7) {
            FUN_144757aec(&local_c8,uVar6 & 0xffffffff);
          }
          *(int *)((longlong)local_c8 + lVar16 * 4) = iVar4;
        }
        else {
          lVar16 = lVar16 + (longlong)iVar4 * 0x70;
          local_b8 = 0;
          iStack_b4 = 0;
          iStack_b0 = 0;
          local_a8 = 0xffffffff;
          iStack_a4 = 0xffffffff;
          uStack_a0 = 0xffffffffffffffff;
          local_98 = local_98 & 0xffffffff00000000;
          FUN_141763b3e(&local_b8,lVar16 + 0x40);
          local_a8 = *(undefined4 *)(local_f0 + 0x13b84);
          iStack_a4 = (int)local_e0 + iVar4;
          uStack_a0 = CONCAT44(*(undefined4 *)(lVar16 + 0x54),*(int *)(lVar16 + 100) + local_f4);
          local_98 = CONCAT44(local_98._4_4_,(uint)*(ushort *)(lVar16 + 0x52));
          lVar15 = (ulonglong)(uint)(int)*(char *)(lVar16 + 0x50) * 0x10;
          plVar10 = (longlong *)(local_d0 + lVar15);
          iVar4 = *(int *)(local_d0 + 8 + lVar15);
          *(uint *)(local_d0 + 8 + lVar15) = iVar4 + 1U;
          if (*(uint *)(local_d0 + 0xc + lVar15) < iVar4 + 1U) {
            FUN_1462ca14c(plVar10,iVar4);
          }
          puVar9 = (undefined8 *)(*plVar10 + (longlong)iVar4 * 0x28);
          *puVar9 = 0;
          *(undefined4 *)(puVar9 + 1) = 0;
          FUN_141763b3e(puVar9,&local_b8);
          lVar15 = local_d8;
          *(undefined4 *)(puVar9 + 4) = (undefined4)local_98;
          *(undefined4 *)(puVar9 + 2) = local_a8;
          *(int *)((longlong)puVar9 + 0x14) = iStack_a4;
          *(undefined4 *)(puVar9 + 3) = (undefined4)uStack_a0;
          *(undefined4 *)((longlong)puVar9 + 0x1c) = uStack_a0._4_4_;
          if (iStack_b0 != 0) {
            puVar9 = (undefined8 *)CONCAT44(iStack_b4,local_b8);
            if (puVar9 == (undefined8 *)0x0) goto LAB_14011ac34;
            (**(code **)*puVar9)(puVar9,0);
            FUN_1446efa72(&local_b8,0,0,0x10);
            iStack_b0 = 0;
          }
          if (CONCAT44(iStack_b4,local_b8) != 0) {
            FUN_1400020a8();
          }
        }
LAB_14011ac34:
        lVar13 = lVar13 + 4;
      } while (lVar15 != lVar13);
    }
  }
  if (0 < (int)uStack_c0) {
    iStack_b4 = -1;
    iStack_b0 = -1;
    uStack_ac = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_a0 = local_f0;
    local_a8 = CONCAT31(local_a8._1_3_,0xff);
    FUN_1401d0fb8(local_e8,param_2);
    puVar9 = local_c8;
    lVar15 = (longlong)(int)uStack_c0;
    if (lVar15 != 0) {
      lVar14 = 0;
      do {
        lVar13 = *(longlong *)(*(longlong *)(lVar12 + 0x18) + 0x380);
        if (lVar13 == 0) {
          lVar13 = *(longlong *)(lVar12 + 0x18);
        }
        lVar16 = (longlong)*(int *)((longlong)puVar9 + lVar14) * 0x70;
        local_b8 = *(int *)((longlong)puVar9 + lVar14) + (int)local_e0;
        iStack_b4 = *(int *)(lVar13 + 100 + lVar16) + local_f4;
        iStack_b0 = *(int *)(lVar13 + 0x54 + lVar16);
        uStack_ac = (uint)*(ushort *)(lVar13 + 0x52 + lVar16);
        if (*(int *)(lVar13 + 0x48 + lVar16) == 0) {
          plVar10 = (longlong *)0x0;
        }
        else {
          plVar10 = *(longlong **)(lVar13 + lVar16 + 0x40);
        }
        (**(code **)(*plVar10 + 0x58))(plVar10,param_2,&local_b8);
        lVar14 = lVar14 + 4;
      } while (lVar15 * 4 != lVar14);
    }
  }
  FUN_1400200e4(&local_c8);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_128);
}



// FUNCTION 14011ad8c FUN_14011ad8c body=140 status=ok
// SIG undefined FUN_14011ad8c(void)

void FUN_14011ad8c(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x10))();
  pcVar1 = *(code **)(param_1 + 0x10);
  plVar4 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x20);
  }
  local_40 = param_2;
  local_31 = param_3;
  uVar3 = (**(code **)(*plVar4 + 8))(plVar4);
  (*pcVar1)(uVar3,&local_40,uVar2,&local_31);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14011ae32 FUN_14011ae32 body=226 status=ok
// SIG undefined FUN_14011ae32(void)

void FUN_14011ae32(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar5 = (longlong *)*param_2;
  plVar3 = *(longlong **)(param_1 + 0x2e0);
  if (plVar3 != plVar5) {
    *(longlong **)(param_1 + 0x2e0) = plVar5;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      puVar1 = (uint *)(plVar3 + 1);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    plVar5 = (longlong *)*param_2;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x2e8);
  if (plVar5 == (longlong *)0x0) {
    plVar5 = &local_38;
    local_38 = 0;
    uVar7 = 0;
    uVar8 = 0;
  }
  else {
    lVar6 = (**(code **)(*plVar5 + 8))(plVar5);
    uVar8 = *(undefined4 *)(lVar6 + 0x28);
    lVar6 = (**(code **)(*(longlong *)*param_2 + 8))();
    uVar7 = *(undefined4 *)(lVar6 + 0x24);
    local_30 = *(longlong *)(param_1 + 0x2e0);
    if (local_30 != 0) {
      LOCK();
      *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
      UNLOCK();
    }
    plVar5 = &local_30;
  }
  FUN_14011af16(uVar4,plVar5,uVar7,uVar8);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14011af16 FUN_14011af16 body=138 status=ok
// SIG undefined FUN_14011af16(void)

void FUN_14011af16(longlong param_1,longlong *param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *param_2;
  lVar4 = *(longlong *)(param_1 + 8);
  if (lVar4 != lVar3) {
    *(longlong *)(param_1 + 8) = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    if (lVar4 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar4 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  *(undefined4 *)(param_1 + 0x20) = param_3;
  *(undefined4 *)(param_1 + 0x24) = param_4;
  if (*param_2 != 0) {
    LOCK();
    puVar1 = (uint *)(*param_2 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
      return;
    }
  }
  return;
}



// FUNCTION 14011afa0 FUN_14011afa0 body=1756 status=ok
// SIG undefined FUN_14011afa0(void)

void FUN_14011afa0(longlong param_1,byte *param_2,undefined4 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  longlong *plVar14;
  ulonglong uVar15;
  undefined1 auStack_1e8 [32];
  longlong local_1c8;
  longlong *local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  byte local_188;
  undefined8 local_178;
  undefined8 uStack_170;
  longlong local_168;
  longlong *plStack_160;
  longlong local_158;
  undefined8 local_150;
  longlong local_148;
  byte local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  longlong local_120;
  byte local_118;
  byte local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a0;
  undefined8 local_98;
  longlong local_90;
  longlong local_88;
  undefined8 local_80;
  longlong local_78;
  longlong *local_70;
  undefined4 local_68;
  uint uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  lVar13 = *(longlong *)(param_2 + 8);
  if (lVar13 == DAT_14c966e68) {
    plVar3 = (longlong *)(param_1 + 0x2e0);
    lVar13 = param_1 + 0x2f0;
    local_178 = 0x100000000;
    local_168 = 0xffffffff;
    plStack_160 = (longlong *)((ulonglong)plStack_160 & 0xffffffff00000000);
    uStack_170 = lVar13;
    if (*(int *)(param_1 + 0x308) == 0) {
      iVar10 = 0;
    }
    else {
      FUN_1449c0562(&local_178);
      iVar10 = *(int *)(param_1 + 0x308);
    }
    local_68 = (undefined4)local_178;
    uStack_64 = local_178._4_4_;
    uStack_60 = (undefined4)uStack_170;
    uStack_5c = uStack_170._4_4_;
    plStack_50 = plStack_160;
    local_58 = local_168;
    lVar11 = local_58;
    local_58._4_4_ = (int)((ulonglong)local_168 >> 0x20);
    iVar9 = local_58._4_4_;
    local_70 = plVar3;
    if ((local_58._4_4_ != iVar10) || (local_58 = local_168, uStack_170 != lVar13)) {
      do {
        local_58 = lVar11;
        plVar14 = (longlong *)((longlong)iVar9 * 0x110 + *local_70);
        cVar7 = FUN_1449448d4(plVar14);
        if ((cVar7 == '\0') && ((*(byte *)((longlong)plVar14 + 0x4c) & 4) == 0)) {
          FUN_147b4dcf6(&local_178,param_2);
          uStack_170 = *plVar14;
          local_168 = plVar14[1];
          plVar4 = (longlong *)plVar14[2];
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
          }
          local_1c0 = plStack_160;
          if (plStack_160 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_160 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              puVar5 = (undefined8 *)*plStack_160;
              plStack_160 = plVar4;
              (*(code *)*puVar5)();
              LOCK();
              piVar2 = (int *)((longlong)local_1c0 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              plVar4 = plStack_160;
              if (*piVar2 == 0) {
                (**(code **)(*local_1c0 + 0x10))();
                plVar4 = plStack_160;
              }
            }
          }
          plStack_160 = plVar4;
          FUN_14011afa0(param_1,&local_178,param_3,plVar14 + 3);
          FUN_140ffc3da(&local_178);
        }
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~uStack_64);
        FUN_1449c0562(&local_68);
        iVar9 = local_58._4_4_;
        lVar11 = local_58;
      } while (local_70 != plVar3 ||
               (CONCAT44(uStack_5c,uStack_60) != lVar13 || local_58._4_4_ != iVar10));
    }
  }
  else {
    if (param_4 == 0) {
      if (*(int *)(param_1 + 0x2e8) == *(int *)(param_1 + 0x314)) {
LAB_14011b053:
        lVar11 = 0;
      }
      else {
        uVar8 = (uint)((ulonglong)lVar13 >> 0x10);
        uVar12 = (uint)lVar13 & 0xffff;
        lVar11 = param_1 + 0x318;
        if (*(longlong *)(param_1 + 800) != 0) {
          lVar11 = *(longlong *)(param_1 + 800);
        }
        iVar10 = *(int *)(lVar11 + (ulonglong)
                                   (*(int *)(param_1 + 0x328) - 1U &
                                   (int)((ulonglong)lVar13 >> 0x20) +
                                   ((uint)lVar13 << 0x10 | uVar12) +
                                   (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar12 >> 4)) * 4);
        if (iVar10 == -1) goto LAB_14011b053;
        do {
          lVar11 = *(longlong *)(param_1 + 0x2e0) + (longlong)iVar10 * 0x110;
          if (*(longlong *)(*(longlong *)(param_1 + 0x2e0) + (longlong)iVar10 * 0x110) == lVar13)
          break;
          iVar10 = *(int *)(lVar11 + 0x108);
          lVar11 = 0;
        } while (iVar10 != -1);
      }
      param_4 = lVar11 + 0x18;
      if (lVar11 == 0) {
        param_4 = 0;
      }
    }
    local_80 = *(undefined8 *)(param_2 + 0x10);
    local_78 = *(longlong *)(param_2 + 0x18);
    if (local_78 != 0) {
      LOCK();
      *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
      UNLOCK();
    }
    local_88 = lVar13;
    cVar7 = FUN_14011b7ae(param_1,&local_88,param_4);
    if (cVar7 == '\0') {
      uVar8 = *(uint *)(param_2 + 0x20);
      if ((uVar8 & 4) != 0) {
        cVar7 = FUN_14011bae6(param_1);
        if (cVar7 == '\0') goto LAB_14011b11c;
        uVar8 = *(uint *)(param_2 + 0x20);
      }
      if ((uVar8 & 2) != 0) {
        cVar7 = FUN_1417f7d46(param_1);
        if (cVar7 == '\0') goto LAB_14011b11c;
        uVar8 = *(uint *)(param_2 + 0x20);
      }
      if ((uVar8 & 1) != 0) {
        cVar7 = FUN_14011b712(param_1);
        if (cVar7 == '\0') goto LAB_14011b11c;
        uVar8 = *(uint *)(param_2 + 0x20);
      }
      if (((uVar8 & 8) == 0) || (cVar7 = FUN_1417f7de2(param_1), cVar7 != '\0')) {
        plVar3 = (longlong *)(param_1 + 0x480);
        local_a0 = *(undefined8 *)(param_2 + 8);
        local_98 = *(undefined8 *)(param_2 + 0x10);
        local_90 = *(longlong *)(param_2 + 0x18);
        if (local_90 != 0) {
          LOCK();
          *(int *)(local_90 + 8) = *(int *)(local_90 + 8) + 1;
          UNLOCK();
        }
        local_1c8 = param_4;
        cVar7 = FUN_14011b9d8();
        if (cVar7 != '\0') {
          uVar15 = (ulonglong)(int)DAT_14cb0e590;
          if (0 < (longlong)uVar15) {
            do {
              iVar10 = FUN_1469ba826();
              if (iVar10 == 3) {
                FUN_147da2bcc();
              }
              else if (iVar10 == 2) {
                bVar6 = false;
                goto LAB_14011b3fa;
              }
              bVar6 = 1 < uVar15;
              uVar15 = uVar15 - 1;
            } while (bVar6);
          }
          local_110 = param_2[1];
          if (((char)param_3 == '\0') || ((*param_2 & 2) != 0)) {
            uStack_170 = *(longlong *)(param_2 + 0x28);
            local_168 = *(longlong *)(param_2 + 0x30);
            if (local_168 != 0) {
              LOCK();
              *(int *)(local_168 + 8) = *(int *)(local_168 + 8) + 1;
              UNLOCK();
            }
            plStack_160 = *(longlong **)(param_2 + 0x38);
            local_158 = *(longlong *)(param_2 + 0x40);
            if (local_158 != 0) {
              LOCK();
              *(int *)(local_158 + 8) = *(int *)(local_158 + 8) + 1;
              UNLOCK();
            }
            local_150 = *(undefined8 *)(param_2 + 0x48);
            local_148 = *(longlong *)(param_2 + 0x50);
            if (local_148 == 0) {
              local_148 = 0;
            }
            else {
              LOCK();
              *(int *)(local_148 + 8) = *(int *)(local_148 + 8) + 1;
              UNLOCK();
            }
            local_188 = param_2[0x58];
          }
          else {
            local_188 = 0;
            local_148 = 0;
            local_150 = 0;
            local_158 = 0;
            plStack_160 = (longlong *)0x0;
            local_168 = 0;
            uStack_170 = 0;
          }
          local_178 = CONCAT44(DAT_14cb0e590,*(undefined4 *)*plVar3);
          local_1b8 = 0;
          uStack_1b0 = 0;
          local_1a8 = 0;
          uStack_1a0 = 0;
          local_198 = 0;
          uStack_190 = 0;
          local_138 = 0;
          local_130 = *(undefined8 *)(param_2 + 8);
          local_128 = *(undefined8 *)(param_2 + 0x10);
          local_120 = *(longlong *)(param_2 + 0x18);
          if (local_120 != 0) {
            LOCK();
            *(int *)(local_120 + 8) = *(int *)(local_120 + 8) + 1;
            UNLOCK();
          }
          local_118 = param_2[0x20];
          local_108 = 0;
          uStack_100 = 0;
          local_f8 = 0;
          uStack_f0 = 0;
          local_c8 = 0;
          uStack_c0 = 0;
          local_b8 = 0;
          uStack_b0 = 0;
          local_140 = local_188;
          FUN_14128edda(&local_1b8);
          uVar8 = *(int *)(param_1 + 0x488) - 1;
          local_1c0 = (longlong *)CONCAT44(local_1c0._4_4_,uVar8);
          if (1 < *(int *)(param_1 + 0x488)) {
            uVar15 = 0;
            do {
              uVar12 = DAT_14cb0e590;
              local_178 = CONCAT44(local_178._4_4_,*(undefined4 *)(*plVar3 + uVar15 * 4));
              lVar13 = (longlong)(int)DAT_14cb0e590;
              DAT_14cb0e590 = DAT_14cb0e590 + 1;
              if (DAT_14cb0e594 < DAT_14cb0e590) {
                FUN_147da2d50(&DAT_14cb0e588,uVar12);
              }
              FUN_147da2c3e(lVar13 * 0xd8 + DAT_14cb0e588,&local_178);
              uVar15 = uVar15 + 1;
            } while (uVar8 != uVar15);
          }
          uVar8 = DAT_14cb0e590;
          local_178 = CONCAT44(local_178._4_4_,
                               *(undefined4 *)(*plVar3 + (longlong)(int)local_1c0 * 4));
          lVar13 = (longlong)(int)DAT_14cb0e590;
          DAT_14cb0e590 = DAT_14cb0e590 + 1;
          if (DAT_14cb0e594 < DAT_14cb0e590) {
            FUN_147da2d50(&DAT_14cb0e588,uVar8);
          }
          FUN_147da2de4(lVar13 * 0xd8 + DAT_14cb0e588,&local_178);
          FUN_147d94cdc(&local_178);
          bVar6 = true;
LAB_14011b3fa:
          *(undefined4 *)(param_1 + 0x488) = 0;
          if (*(int *)(param_1 + 0x48c) < 0) {
            FUN_14480809c(plVar3,0);
          }
          goto LAB_14011b11e;
        }
      }
    }
  }
LAB_14011b11c:
  bVar6 = false;
LAB_14011b11e:
  if (((*param_2 & 1) != 0) && ((bVar6 || (((param_2[0x20] & 0xf) == 0 && (param_2[1] != 3)))))) {
    FUN_14011b67e(&DAT_14cb0e570,param_2 + 8);
  }
  if ((local_48 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14011b67e FUN_14011b67e body=148 status=ok
// SIG undefined FUN_14011b67e(void)

int FUN_14011b67e(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = *param_1;
  iVar1 = (int)param_1[1];
  lVar6 = (longlong)iVar1;
  if (lVar6 != 0) {
    uVar4 = 0;
    do {
      if (*(longlong *)(lVar5 + uVar4) == *param_2) {
        iVar3 = (int)(uVar4 >> 3) * -0x55555555;
        if (iVar3 != -1) {
          return iVar3;
        }
        break;
      }
      uVar4 = uVar4 + 0x18;
    } while (lVar6 * 0x18 != uVar4);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14011bb82(param_1,iVar1);
    lVar5 = *param_1;
  }
  *(longlong *)(lVar5 + lVar6 * 0x18) = *param_2;
  *(longlong *)(lVar5 + 8 + lVar6 * 0x18) = param_2[1];
  lVar2 = param_2[2];
  *(longlong *)(lVar5 + 0x10 + lVar6 * 0x18) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return iVar1;
}



// FUNCTION 14011b712 FUN_14011b712 body=155 status=ok
// SIG undefined FUN_14011b712(void)

undefined8 FUN_14011b712(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  longlong local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = (undefined4)DAT_14c965418;
  uStack_24 = DAT_14c965418._4_4_;
  uStack_20 = (undefined4)DAT_14c965420;
  uStack_1c = DAT_14c965420._4_4_;
  local_18 = DAT_14c965428;
  if (DAT_14c965428 != 0) {
    LOCK();
    *(int *)(DAT_14c965428 + 8) = *(int *)(DAT_14c965428 + 8) + 1;
    UNLOCK();
  }
  cVar1 = FUN_14482ef28(param_1,&local_28);
  if (cVar1 == '\0') {
    local_40 = (undefined4)DAT_14c965430;
    uStack_3c = DAT_14c965430._4_4_;
    uStack_38 = (undefined4)DAT_14c965438;
    uStack_34 = DAT_14c965438._4_4_;
    local_30 = DAT_14c965440;
    if (DAT_14c965440 != 0) {
      LOCK();
      *(int *)(DAT_14c965440 + 8) = *(int *)(DAT_14c965440 + 8) + 1;
      UNLOCK();
    }
    uVar2 = FUN_14482ef28(param_1,&local_40);
  }
  else {
    uVar2 = 1;
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14011b7ae FUN_14011b7ae body=552 status=ok
// SIG undefined FUN_14011b7ae(void)

ulonglong FUN_14011b7ae(ulonglong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
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
  lVar3 = *param_2;
  if (lVar3 == DAT_14c966e68) {
    plVar4 = (longlong *)(param_1 + 0x2e0);
    lVar3 = param_1 + 0x2f0;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = lVar3;
    if (*(int *)(param_1 + 0x308) == 0) {
      iVar10 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar10 = *(int *)(param_1 + 0x308);
    }
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar6 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    local_78 = plVar4;
    if ((local_60._4_4_ != iVar10) || (uStack_48 != lVar3)) {
      iVar7 = local_60._4_4_;
      local_60 = uVar6;
      do {
        if ((*(byte *)(*local_78 + 0x4c + (longlong)iVar7 * 0x110) & 4) != 0) {
          param_1 = CONCAT71((int7)((ulonglong)&local_70 >> 8),1);
          goto LAB_14011b84a;
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar7 = local_60._4_4_;
        uVar6 = local_60;
      } while (local_78 != plVar4 ||
               (CONCAT44(uStack_64,uStack_68) != lVar3 || local_60._4_4_ != iVar10));
    }
  }
  else {
    if (param_3 != 0) {
LAB_14011b9c6:
      uVar11 = CONCAT71((int7)(param_1 >> 8),*(undefined1 *)(param_3 + 0x34)) & 0xffffffffffffff04;
      param_1 = CONCAT71((int7)(uVar11 >> 8),(byte)uVar11 >> 2);
      goto LAB_14011b84a;
    }
    uVar6 = local_60;
    if (*(int *)(param_1 + 0x2e8) != *(int *)(param_1 + 0x314)) {
      uVar5 = (uint)((ulonglong)lVar3 >> 0x10);
      uVar9 = (uint)lVar3 & 0xffff;
      lVar8 = param_1 + 0x318;
      if (*(longlong *)(param_1 + 800) != 0) {
        lVar8 = *(longlong *)(param_1 + 800);
      }
      iVar10 = *(int *)(lVar8 + (ulonglong)
                                (*(int *)(param_1 + 0x328) - 1U &
                                (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar9) +
                                (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar9 >> 4)) * 4);
      if (iVar10 != -1) {
        plVar4 = (longlong *)(param_1 + 0x2e0);
        param_1 = 0;
        do {
          param_3 = *plVar4 + (longlong)iVar10 * 0x110;
          if (*(longlong *)(*plVar4 + (longlong)iVar10 * 0x110) == lVar3) {
            if ((param_3 == 0) || (param_3 = param_3 + 0x18, param_3 == 0)) goto LAB_14011b848;
            goto LAB_14011b9c6;
          }
          iVar10 = *(int *)(param_3 + 0x108);
        } while (iVar10 != -1);
        goto LAB_14011b84a;
      }
    }
  }
LAB_14011b848:
  local_60 = uVar6;
  param_1 = 0;
LAB_14011b84a:
  plVar4 = (longlong *)param_2[2];
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
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1 & 0xffffffff;
}



// FUNCTION 14011b9d8 FUN_14011b9d8 body=270 status=ok
// SIG undefined FUN_14011b9d8(void)

ulonglong FUN_14011b9d8(longlong param_1,longlong *param_2,int param_3,undefined8 param_4,
                       longlong param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong unaff_RDI;
  uint uVar8;
  
  if (param_5 == 0) {
    if (*(int *)(param_1 + 0x2e8) != *(int *)(param_1 + 0x314)) {
      lVar3 = *param_2;
      uVar5 = (uint)((ulonglong)lVar3 >> 0x10);
      uVar8 = (uint)lVar3 & 0xffff;
      lVar7 = param_1 + 0x318;
      if (*(longlong *)(param_1 + 800) != 0) {
        lVar7 = *(longlong *)(param_1 + 800);
      }
      iVar6 = *(int *)(lVar7 + (ulonglong)
                               (*(int *)(param_1 + 0x328) - 1U &
                               (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar8) +
                               (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar8 >> 4)) * 4);
      if (iVar6 != -1) {
        unaff_RDI = 0;
        do {
          param_5 = *(longlong *)(param_1 + 0x2e0) + (longlong)iVar6 * 0x110;
          if (*(longlong *)(*(longlong *)(param_1 + 0x2e0) + (longlong)iVar6 * 0x110) == lVar3) {
            if ((param_5 == 0) || (param_5 = param_5 + 0x18, param_5 == 0)) goto LAB_14011ba59;
            goto LAB_14011bac1;
          }
          iVar6 = *(int *)(param_5 + 0x108);
        } while (iVar6 != -1);
        goto LAB_14011ba5b;
      }
    }
  }
  else {
LAB_14011bac1:
    if (0 < *(int *)(param_5 + 0x40 + (longlong)param_3 * 0x10)) {
      FUN_1447bdc4c(param_4,param_5 + (longlong)param_3 * 0x10 + 0x38);
      unaff_RDI = CONCAT71((int7)(unaff_RDI >> 8),1);
      goto LAB_14011ba5b;
    }
  }
LAB_14011ba59:
  unaff_RDI = 0;
LAB_14011ba5b:
  plVar4 = (longlong *)param_2[2];
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
  return unaff_RDI & 0xffffffff;
}



// FUNCTION 14011bae6 FUN_14011bae6 body=155 status=ok
// SIG undefined FUN_14011bae6(void)

undefined8 FUN_14011bae6(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  longlong local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = (undefined4)DAT_14c965478;
  uStack_24 = DAT_14c965478._4_4_;
  uStack_20 = (undefined4)DAT_14c965480;
  uStack_1c = DAT_14c965480._4_4_;
  local_18 = DAT_14c965488;
  if (DAT_14c965488 != 0) {
    LOCK();
    *(int *)(DAT_14c965488 + 8) = *(int *)(DAT_14c965488 + 8) + 1;
    UNLOCK();
  }
  cVar1 = FUN_14482ef28(param_1,&local_28);
  if (cVar1 == '\0') {
    local_40 = (undefined4)DAT_14c965490;
    uStack_3c = DAT_14c965490._4_4_;
    uStack_38 = (undefined4)DAT_14c965498;
    uStack_34 = DAT_14c965498._4_4_;
    local_30 = DAT_14c9654a0;
    if (DAT_14c9654a0 != 0) {
      LOCK();
      *(int *)(DAT_14c9654a0 + 8) = *(int *)(DAT_14c9654a0 + 8) + 1;
      UNLOCK();
    }
    uVar2 = FUN_14482ef28(param_1,&local_40);
  }
  else {
    uVar2 = 1;
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14011bb82 FUN_14011bb82 body=373 status=ok
// SIG undefined FUN_14011bb82(void)

void FUN_14011bb82(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x18;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14011bc0b;
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
LAB_14011bc0b:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 14011bcf8 FUN_14011bcf8 body=275 status=ok
// SIG undefined FUN_14011bcf8(void)

void FUN_14011bcf8(void)

{
  longlong lVar1;
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
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = FUN_14011be0c();
  if (lVar1 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141030f22;
      local_20 = FUN_14081d0ea;
      local_28 = &LAB_1459f2e4c;
      local_38 = &LAB_148c39de3;
      local_40 = &LAB_1457a9eb2;
      local_48 = &DAT_149e063b2;
      local_50 = 0;
      local_58 = 0x10000004;
      local_60 = 0x10;
      local_68 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) goto LAB_14011bd43;
  }
  lVar1 = 0;
LAB_14011bd43:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_14011bf50(lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14011be0c FUN_14011be0c body=301 status=ok
// SIG undefined FUN_14011be0c(void)

undefined8 FUN_14011be0c(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_1 + -0x10);
  if (lVar1 != 0) {
    if (DAT_14cba8288 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141864c34;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1464cee30;
      local_48 = &LAB_148bfac22;
      local_50 = &LAB_140f21842;
      local_58 = &DAT_149e063b2;
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    lVar1 = *(longlong *)(lVar1 + 0x10);
    if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) ==
        DAT_14cba8288 + 0x30)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14011bf50 FUN_14011bf50 body=315 status=ok
// SIG undefined FUN_14011bf50(void)

undefined8 FUN_14011bf50(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
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
  undefined1 *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((param_1 != 0) && (lVar3 = *(longlong *)(param_1 + 0x430), lVar3 != 0)) {
    if (DAT_14cae9568 == 0) {
      local_30 = &local_18;
      local_18 = FUN_1417de738;
      local_20 = &LAB_145893408;
      local_28 = &LAB_1458cbbd2;
      local_38 = &LAB_147ba21f1;
      local_40 = &LAB_1463e9233;
      local_48 = L"Engine";
      local_50 = 0;
      local_58 = 0x1000000c;
      local_60 = 8;
      local_68 = 0x2b8;
      FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
      lVar3 = *(longlong *)(param_1 + 0x430);
      if (lVar3 == 0) goto LAB_14011c085;
    }
    uVar2 = 0;
    if ((DAT_14cae9568 == 0) || (lVar3 = *(longlong *)(lVar3 + 0x10), lVar3 == 0))
    goto LAB_14011bfbb;
    iVar1 = *(int *)(DAT_14cae9568 + 0x38);
    if (iVar1 <= *(int *)(lVar3 + 0x38)) {
      uVar2 = CONCAT71((int7)(int3)((uint)iVar1 >> 8),
                       *(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) ==
                       DAT_14cae9568 + 0x30);
      goto LAB_14011bfbb;
    }
  }
LAB_14011c085:
  uVar2 = 0;
LAB_14011bfbb:
  if ((local_10 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 14011c2be FUN_14011c2be body=138 status=ok
// SIG undefined FUN_14011c2be(void)

longlong FUN_14011c2be(undefined8 *param_1)

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
    if (DAT_14cb7d760 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = FUN_144837462(DAT_14cb7d760,local_40);
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



// FUNCTION 14011c349 FUN_14011c349 body=442 status=ok
// SIG undefined FUN_14011c349(void)

longlong * FUN_14011c349(void)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cbcbdf0 == (longlong *)0x0) {
    memset(&DAT_14cbcbdf8,0,0x810);
    FUN_1461632d4(&DAT_14cbcbdf8);
    DAT_14cbcbdf0 = (longlong *)&DAT_14cbcbdf8;
  }
  plVar1 = DAT_14cbcbdf0;
  plVar4 = DAT_14cbcbdf0 + 1;
  cVar2 = (char)DAT_14cbcbdf0[2];
  plVar5 = plVar4;
  if (cVar2 == '\0') {
LAB_14011c37d:
    if (*plVar5 == 0) goto LAB_14011c456;
    plVar5 = plVar4;
    if (cVar2 == '\0') {
LAB_14011c38e:
      if (*plVar5 == 0) goto LAB_14011c3f7;
      if ((((int)DAT_14cbcbdf0[3] == *(int *)(*plVar5 + 0x44)) || (DAT_14c9a1ab0 == 0)) ||
         ((*plVar4 == 0 ||
          (plVar4 = (longlong *)FUN_140156428(DAT_14c9a1ab0,*(undefined2 *)(*plVar4 + 0x28)),
          plVar4 == (longlong *)0x0)))) goto LAB_14011c3a2;
      cVar2 = (**(code **)(*plVar4 + 0x2a8))(plVar4,plVar1);
    }
    else {
      if (cVar2 == '\x02') {
        plVar5 = (longlong *)(*plVar4 + 0x30);
        goto LAB_14011c38e;
      }
LAB_14011c3f7:
      if (((DAT_14c9a1ab0 == 0) || (*plVar4 == 0)) ||
         (plVar4 = (longlong *)FUN_140156428(DAT_14c9a1ab0,*(undefined2 *)(*plVar4 + 0x28)),
         plVar4 == (longlong *)0x0)) goto LAB_14011c3a2;
      puVar6 = &DAT_14c9485f0;
      if ((undefined4 *)plVar1[1] != (undefined4 *)0x0) {
        puVar6 = (undefined4 *)plVar1[1];
      }
      cVar2 = (**(code **)(*plVar4 + 0x2a0))(plVar4,plVar1,puVar6);
    }
    if (cVar2 == '\0') goto LAB_14011c3a2;
  }
  else {
    if (cVar2 == '\x02') {
      plVar5 = (longlong *)(*plVar4 + 0x30);
      goto LAB_14011c37d;
    }
LAB_14011c456:
    lVar3 = FUN_140162146();
    if (lVar3 == 0) goto LAB_14011c3a2;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_30 = 0;
    uStack_28 = 0;
    FUN_1446ddda2(&local_48,"def_globals_oak_inventory",0);
    FUN_140024ada(&local_48,plVar1);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  (**(code **)(*plVar1 + 0x20))(plVar1);
LAB_14011c3a2:
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar1;
}



// FUNCTION 14011c504 FUN_14011c504 body=109 status=ok
// SIG undefined FUN_14011c504(void)

int FUN_14011c504(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  uVar1 = *param_2;
  uVar2 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar3 = (uint)uVar1 & 0xffff;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return ((uint)uVar1 << 0x10 | uVar3) + (int)((ulonglong)uVar1 >> 0x20) +
           (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar3 >> 4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14011c580 FUN_14011c580 body=80 status=ok
// SIG undefined FUN_14011c580(void)

void FUN_14011c580(longlong param_1)

{
  if ((DAT_14c86a9fc == 0) &&
     (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 1)) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  FUN_14482f31e(param_1 + -0x438,0);
  return;
}



// FUNCTION 14011c5d0 FUN_14011c5d0 body=40 status=ok
// SIG undefined FUN_14011c5d0(void)

void FUN_14011c5d0(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    lVar1 = *(longlong *)(param_2 + lVar2);
    *(longlong *)(param_1 + lVar2) = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    *(undefined8 *)(param_1 + 8 + lVar2) = *(undefined8 *)(param_2 + 8 + lVar2);
    lVar2 = lVar2 + 0x10;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 14011c5f8 FUN_14011c5f8 body=269 status=ok
// SIG undefined FUN_14011c5f8(void)

void FUN_14011c5f8(longlong param_1,int param_2)

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



// FUNCTION 14011c706 FUN_14011c706 body=105 status=ok
// SIG undefined FUN_14011c706(void)

void FUN_14011c706(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14011c7bc();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_14011c770(param_1 + 0x870,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14011c770 FUN_14011c770 body=76 status=ok
// SIG undefined FUN_14011c770(void)

void FUN_14011c770(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_14011c7bc();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_14011c7ad;
    }
  }
  lVar2 = 0;
LAB_14011c7ad:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 14011c7bc FUN_14011c7bc body=228 status=ok
// SIG undefined FUN_14011c7bc(void)

longlong FUN_14011c7bc(void)

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
  if (DAT_14cb12080 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14588a134;
    local_38 = &LAB_147dd1368;
    local_40 = &LAB_145d61061;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x2f8;
    FUN_14081cfa3(L"/Script/Engine",L"WorldPartitionSubsystem",&DAT_14cb12080,FUN_146412e0a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb12080;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14011c8a2 FUN_14011c8a2 body=80 status=ok
// SIG undefined FUN_14011c8a2(void)

void FUN_14011c8a2(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [7];
  undefined1 local_11;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_11 = 0;
  local_10 = param_2;
  FUN_1459a26f6(param_1 + 0xf8,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14011c8f4 FUN_14011c8f4 body=1298 status=ok
// SIG undefined FUN_14011c8f4(void)

void FUN_14011c8f4(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_f8 [44];
  uint local_cc;
  longlong local_c8;
  longlong lStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  float local_a8;
  float fStack_a4;
  longlong lStack_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar7 = FUN_14477dc2a();
  FUN_14477dadc(uVar7,param_2);
  uVar15 = *(uint *)(param_1 + 0x70);
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar15);
  }
  plVar1 = (longlong *)(param_1 + 0x128);
  *(undefined4 *)(param_1 + 0x130) = 0;
  if (*(uint *)(param_1 + 0x134) == uVar15) {
    iVar6 = 0;
    uVar10 = uVar15;
  }
  else {
    FUN_14482f6fa(plVar1);
    uVar15 = *(uint *)(param_1 + 0x70);
    iVar6 = *(int *)(param_1 + 0x130);
    uVar10 = *(uint *)(param_1 + 0x134);
  }
  *(uint *)(param_1 + 0x130) = uVar15 + iVar6;
  if (uVar10 - iVar6 < uVar15) {
    FUN_14475e4ac(plVar1);
  }
  memset((void *)((longlong)iVar6 * 4 + *(longlong *)(param_1 + 0x128)),0,(longlong)(int)uVar15 << 2
        );
  if (0 < *(int *)(param_1 + 0x70)) {
    lVar8 = 0;
    do {
      if (*(char *)(*(longlong *)(param_1 + 0x108) + lVar8) == '\x01') {
        uVar16 = 0x3f800000;
        if (*(char *)(*(longlong *)(param_1 + 0xf8) + lVar8) == '\0') {
          uVar16 = 0;
        }
      }
      else {
        uVar16 = *(undefined4 *)(*(longlong *)(param_1 + 0x68) + lVar8 * 4);
      }
      *(undefined4 *)(*(longlong *)(param_1 + 0x128) + lVar8 * 4) = uVar16;
      if (*(char *)(*(longlong *)(param_1 + 0x118) + lVar8) == '\x01') {
        *(float *)(*plVar1 + lVar8 * 4) = 1.0 - *(float *)(*plVar1 + lVar8 * 4);
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(param_1 + 0x70));
  }
  if (0 < *(int *)(param_1 + 0x40)) {
    lVar8 = 0;
    do {
      lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x38) + lVar8 * 8);
      if (lVar14 == 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x48) + lVar8 * 8) = 0;
      }
      else {
        lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0xf0) + 0xbc8);
        if (lVar9 != 0) {
          lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xf0) + 0xbc0);
          lVar11 = 0;
          do {
            if (*(longlong *)(lVar4 + lVar11) == lVar14) {
              lVar14 = *(longlong *)(lVar4 + 8 + lVar11);
              plVar12 = (longlong *)(lVar8 * 8 + *(longlong *)(param_1 + 0x48));
              if ((lVar14 != 0) && (DAT_14c950c29 != '\0')) {
                FUN_1456cec3c(lVar14);
              }
              goto LAB_14011ca9c;
            }
            lVar11 = lVar11 + 0x10;
          } while (lVar9 * 0x10 != lVar11);
        }
        plVar12 = (longlong *)(lVar8 * 8 + *(longlong *)(param_1 + 0x48));
        lVar14 = 0;
LAB_14011ca9c:
        *plVar12 = lVar14;
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(param_1 + 0x40));
  }
  *(undefined1 *)(param_1 + 0x7a) = 0;
  fVar17 = 0.0;
  fVar18 = 0.0;
  if (*(char *)(param_1 + 0x79) == '\0') {
    fVar18 = 1.0;
  }
  iVar6 = *(int *)(param_1 + 0x30);
  if (0 < iVar6) {
    uVar15 = 0xffffffff;
    lVar8 = 0;
    uVar13 = 0;
    do {
      fVar2 = *(float *)(*plVar1 + uVar13 * 4);
      if (1e-05 < fVar2) {
        local_cc = uVar15;
        if (*(char *)(param_1 + 0x7a) == '\0') {
          lVar14 = *param_2;
          uVar7 = *(undefined8 *)(lVar14 + 0x140);
          cVar5 = FUN_14011ce08(param_1,uVar7);
          if (cVar5 == '\0') {
            FUN_14482f832(param_1);
          }
          else {
            FUN_144a62104(param_1,*(undefined8 *)(lVar14 + 0x6a0),uVar7);
            cVar5 = FUN_14011ce08(param_1,*(undefined8 *)(*param_2 + 0x140));
            if (cVar5 != '\0') break;
          }
          *(undefined1 *)(param_1 + 0x7a) = 1;
          if (*(char *)(param_1 + 0x79) == '\x01') {
            fVar3 = (float)(*(uint **)(param_1 + 0xc0))[1];
            if (1e-05 < fVar3) {
              fVar17 = fVar3;
              local_cc = **(uint **)(param_1 + 0xc0);
            }
          }
        }
        uVar15 = local_cc;
        lVar14 = *(longlong *)(param_1 + 0x28);
        plVar12 = *(longlong **)(lVar14 + lVar8);
        if (plVar12 != (longlong *)0x0) {
          fStack_a4 = fVar17;
          if (uVar13 != local_cc) {
            fStack_a4 = fVar18;
          }
          fStack_a4 = fStack_a4 * *(float *)((longlong)param_2 + 0x24);
          local_a8 = fVar2 * *(float *)(param_2 + 4);
          lStack_a0 = param_2[5];
          uStack_b4 = *(undefined4 *)(lVar14 + 8 + lVar8);
          local_c8 = *param_2;
          lStack_c0 = param_2[1];
          local_b8 = (undefined4)param_2[2];
          uStack_b0 = *(undefined4 *)((longlong)param_2 + 0x14);
          uStack_ac = *(undefined4 *)((longlong)param_2 + 0x1c);
          if ((plVar12[1] != 0) && ((*(byte *)(plVar12[1] + 0x24) & 7) != 0)) {
            FUN_144b1fcbe(&local_c8);
            FUN_144b1fd46(&local_c8,*(undefined8 *)(lVar14 + lVar8));
            FUN_144b1fe18(&local_c8,*(undefined8 *)(lVar14 + lVar8));
            plVar12 = *(longlong **)(lVar14 + lVar8);
          }
          (**(code **)(*plVar12 + 0x20))(plVar12,&local_c8);
        }
        iVar6 = *(int *)(param_1 + 0x30);
      }
      uVar13 = uVar13 + 1;
      lVar8 = lVar8 + 0x10;
    } while ((longlong)uVar13 < (longlong)iVar6);
  }
  plVar1 = (longlong *)(param_1 + 0x18);
  if (1.0 - fVar17 < 1e-05) {
    local_c8 = *param_2;
    lStack_c0 = param_2[1];
    local_b8 = (undefined4)param_2[2];
    uStack_b4 = *(undefined4 *)((longlong)param_2 + 0x14);
    uStack_b0 = (undefined4)param_2[3];
    uStack_ac = *(undefined4 *)((longlong)param_2 + 0x1c);
    lStack_a0 = param_2[5];
    local_a8 = *(float *)(param_2 + 4);
    fStack_a4 = (1.0 - fVar17) * *(float *)((longlong)param_2 + 0x24);
    FUN_14474897c(plVar1);
  }
  else {
    plVar12 = (longlong *)*plVar1;
    if (plVar12 != (longlong *)0x0) {
      uStack_b4 = *(undefined4 *)(param_1 + 0x20);
      local_c8 = *param_2;
      lStack_c0 = param_2[1];
      local_b8 = (undefined4)param_2[2];
      uStack_b0 = *(undefined4 *)((longlong)param_2 + 0x14);
      uStack_ac = *(undefined4 *)((longlong)param_2 + 0x1c);
      local_a8 = *(float *)(param_2 + 4);
      fStack_a4 = *(float *)((longlong)param_2 + 0x24);
      lStack_a0 = param_2[5];
      if ((plVar12[1] != 0) && ((*(byte *)(plVar12[1] + 0x24) & 7) != 0)) {
        FUN_144b1fcbe(&local_c8,plVar12);
        FUN_144b1fd46(&local_c8,*plVar1);
        FUN_144b1fe18(&local_c8,*plVar1);
        plVar12 = (longlong *)*plVar1;
      }
      (**(code **)(*plVar12 + 0x20))(plVar12,&local_c8);
    }
  }
  if ((local_90 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14011ce08 FUN_14011ce08 body=283 status=ok
// SIG undefined FUN_14011ce08(void)

bool FUN_14011ce08(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  
  uVar1 = *(uint *)(param_1 + 0x50);
  bVar9 = true;
  if (uVar1 == *(uint *)(param_1 + 0x60)) {
    if (0 < (int)uVar1) {
      lVar2 = *(longlong *)(param_1 + 0x58);
      lVar8 = 0;
      do {
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x48) + lVar8);
        iVar5 = 0;
        iVar4 = 0;
        iVar7 = 0;
        iVar6 = 0;
        if (lVar3 != 0) {
          iVar5 = *(int *)(lVar3 + 0x38);
          iVar4 = *(int *)(lVar3 + 0x3c);
          iVar7 = *(int *)(lVar3 + 0x40);
          iVar6 = *(int *)(lVar3 + 0x44);
        }
        if (iVar5 != *(int *)(lVar2 + lVar8 * 2)) {
          return true;
        }
        if (iVar4 != *(int *)(lVar2 + 4 + lVar8 * 2)) {
          return true;
        }
        if (iVar7 != *(int *)(lVar2 + 8 + lVar8 * 2)) {
          return true;
        }
        if (iVar6 != *(int *)(lVar2 + 0xc + lVar8 * 2)) {
          return true;
        }
        lVar8 = lVar8 + 8;
      } while ((ulonglong)uVar1 << 3 != lVar8);
    }
    if ((((param_2 != 0) && (*(int *)(param_2 + 0x168) == *(int *)(param_1 + 0x90))) &&
        (*(int *)(param_2 + 0x16c) == *(int *)(param_1 + 0x94))) &&
       ((*(int *)(param_2 + 0x170) == *(int *)(param_1 + 0x98) &&
        (*(int *)(param_2 + 0x174) == *(int *)(param_1 + 0x9c))))) {
      bVar9 = *(int *)(param_2 + 0x184) != *(int *)(param_1 + 0xac) ||
              (*(int *)(param_2 + 0x180) != *(int *)(param_1 + 0xa8) ||
              (*(int *)(param_2 + 0x17c) != *(int *)(param_1 + 0xa4) ||
              *(int *)(param_2 + 0x178) != *(int *)(param_1 + 0xa0)));
    }
  }
  return bVar9;
}



// FUNCTION 14011cf24 FUN_14011cf24 body=127 status=ok
// SIG undefined FUN_14011cf24(void)

void FUN_14011cf24(longlong param_1,undefined8 *param_2,undefined8 param_3,char param_4)

{
  int iVar1;
  
  *(byte *)(param_1 + 0x608) = *(byte *)(param_1 + 0x608) | 2;
  iVar1 = *(int *)(param_1 + 0x10);
  if (param_4 == '\0') {
    *(undefined4 *)(param_1 + 0x10) = 1;
    *(undefined4 *)(param_1 + 200) = 0xffffffff;
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = 2;
    if (*(int *)(param_2 + 1) == 0) {
      *(undefined4 *)(param_1 + 200) = 0xffffffff;
      goto LAB_14011cf68;
    }
    *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_1 + 0x3f0);
  }
  FUN_14011cfa4(param_1 + 0xd0,*param_2,*(undefined4 *)(param_2 + 1));
LAB_14011cf68:
  if (iVar1 == 3) {
    *(undefined4 *)(param_1 + 0x10) = 3;
  }
  return;
}



// FUNCTION 14011cfa4 FUN_14011cfa4 body=105 status=ok
// SIG undefined FUN_14011cfa4(void)

void FUN_14011cfa4(longlong param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 800);
  *(uint *)(param_1 + 800) = iVar1 + param_3;
  if ((uint)(*(int *)(param_1 + 0x324) - iVar1) < param_3) {
    FUN_14011d10e(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x318);
  if (*(longlong *)(param_1 + 0x318) == 0) {
    lVar2 = param_1;
  }
  FUN_14011d00d((longlong)iVar1 * 0x108 + lVar2,param_2,param_3);
  return;
}



// FUNCTION 14011d00d FUN_14011d00d body=256 status=ok
// SIG undefined FUN_14011d00d(void)

void FUN_14011d00d(longlong param_1,longlong param_2,int param_3)

{
  undefined1 *puVar1;
  void *_Dst;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if (param_3 != 0) {
    lVar5 = 0;
    do {
      puVar1 = (undefined1 *)(param_2 + lVar5);
      _Dst = (void *)(param_1 + 8 + lVar5);
      *(undefined1 *)((longlong)_Dst + -8) = *puVar1;
      memcpy(_Dst,puVar1 + 8,0xb8);
      *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
      *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
      *(undefined8 *)((longlong)_Dst + 200) = 0;
      *(undefined4 *)((longlong)_Dst + 0xd0) = 0xffffffff;
      *(undefined1 *)((longlong)_Dst + 0xd4) = 0;
      *(undefined8 *)((longlong)_Dst + 0xb8) = *(undefined8 *)(puVar1 + 0xc0);
      uVar2 = *(undefined8 *)(puVar1 + 0xd0);
      *(undefined8 *)((longlong)_Dst + 0xc0) = *(undefined8 *)(puVar1 + 200);
      *(undefined8 *)((longlong)_Dst + 200) = uVar2;
      *(undefined4 *)((longlong)_Dst + 0xd0) = *(undefined4 *)(puVar1 + 0xd8);
      *(undefined1 *)((longlong)_Dst + 0xd4) = puVar1[0xdc];
      *(undefined8 *)((longlong)_Dst + 0xf8) = *(undefined8 *)(puVar1 + 0x100);
      uVar2 = *(undefined8 *)(puVar1 + 0xe0);
      uVar3 = *(undefined8 *)(puVar1 + 0xe8);
      uVar4 = *(undefined8 *)(puVar1 + 0xf8);
      *(undefined8 *)((longlong)_Dst + 0xe8) = *(undefined8 *)(puVar1 + 0xf0);
      *(undefined8 *)((longlong)_Dst + 0xf0) = uVar4;
      *(undefined8 *)((longlong)_Dst + 0xd8) = uVar2;
      *(undefined8 *)((longlong)_Dst + 0xe0) = uVar3;
      lVar5 = lVar5 + 0x108;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14011d10e FUN_14011d10e body=379 status=ok
// SIG undefined FUN_14011d10e(void)

void FUN_14011d10e(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = *(uint *)(param_1 + 800);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar2);
  }
  if (uVar2 < 4) {
    uVar6 = 3;
  }
  else {
    lVar3 = (longlong)(int)uVar2;
    if (3 < *(uint *)(param_1 + 0x324)) {
      lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
    }
    uVar4 = lVar3 * 0x108;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar6 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 >> 4]];
        }
        else {
          if ((uVar6 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar1 = (&DAT_14c841e00)[uVar6 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar1) {
              uVar5 = (ulonglong)bVar1;
            }
            uVar7 = 0x32 - (ulonglong)bVar1;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar7 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_14011d19c;
              lVar3 = uVar5 + 1 + uVar7;
              uVar7 = uVar7 - 1;
            } while (lVar3 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar6 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0);
      }
    }
LAB_14011d19c:
    uVar6 = 0x7fffffff;
    if ((int)uVar2 <= (int)(uVar4 / 0x108)) {
      uVar6 = uVar4 / 0x108 & 0xffffffff;
    }
  }
  *(int *)(param_1 + 0x324) = (int)uVar6;
  FUN_14011d28a(param_1,param_2,uVar6,0x108);
  return;
}



// FUNCTION 14011d28a FUN_14011d28a body=155 status=ok
// SIG undefined FUN_14011d28a(void)

void FUN_14011d28a(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x318);
  if ((uint)param_3 < 4) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x108);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x318,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x318),param_1,(longlong)param_2 * 0x108);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x318,param_2,param_3,param_4);
  return;
}



// FUNCTION 14011d326 FUN_14011d326 body=254 status=ok
// SIG undefined FUN_14011d326(void)

void FUN_14011d326(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  code *pcVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 *local_50;
  longlong local_48;
  int local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = *param_5;
  uStack_34 = param_5[1];
  uStack_30 = param_5[2];
  uStack_2c = param_5[3];
  plVar2 = *(longlong **)(param_1 + 0x208);
  if (*(code **)(*plVar2 + 0x50) != FUN_144828418) {
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x50))();
  }
  FUN_1447a1fc0(plVar2);
  plVar2 = *(longlong **)(param_1 + 0x208);
  pcVar1 = *(code **)(*plVar2 + 0x28);
  if (pcVar1 == FUN_14482841c) {
    plVar3 = plVar2 + 3;
    if (plVar2[5] != 0) {
      plVar3 = (longlong *)(plVar2[5] + 8);
    }
  }
  else if (pcVar1 == (code *)&LAB_14010c34c) {
    plVar3 = plVar2 + 2;
  }
  else {
    plVar3 = (longlong *)(*pcVar1)(plVar2);
  }
  local_48 = *plVar3;
  local_40 = (int)plVar3[1] + -1;
  if ((int)plVar3[1] == 0) {
    local_40 = 0;
  }
  local_50 = &local_38;
  local_58 = param_4;
  FUN_14482f9ae(param_1,param_2,&local_48,param_3);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14011d426 FUN_14011d426 body=1309 status=ok
// SIG undefined FUN_14011d426(void)

void FUN_14011d426(undefined8 *param_1,float *param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  undefined4 uVar13;
  longlong lVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  lVar12 = param_1[3];
  lVar14 = param_1[2];
  fVar16 = (float)((double)(int)*(short *)(lVar14 + 0x32) * *(double *)(lVar12 + 0xd0) +
                  (double)*(float *)param_1[1] + (double)*param_2 + *(double *)*param_1);
  fVar21 = (float)((double)*(float *)param_1[6] *
                   ((double)(int)*(short *)(lVar14 + 0x34) * *(double *)(lVar12 + 0xd8) +
                   (double)*(float *)param_1[5]) +
                  (((double)*(float *)param_1[4] + (double)param_2[1] + ((double *)*param_1)[1]) -
                  (double)(int)*(short *)(lVar14 + 0x30) * *(double *)(lVar12 + 0xd8)));
  fVar18 = *(float *)(lVar12 + 0x44);
  fVar19 = fVar18 * fVar16;
  fVar20 = fVar18 * fVar21;
  fVar17 = *(float *)param_1[7];
  fVar3 = *(float *)param_1[8];
  lVar14 = *(longlong *)(lVar12 + 400);
  uVar5 = *(undefined4 *)param_1[0xb];
  uVar6 = *(undefined4 *)param_1[10];
  uVar7 = *(undefined4 *)param_1[9];
  iVar8 = *(int *)(lVar14 + 0x290);
  *(uint *)(lVar14 + 0x290) = iVar8 + 1U;
  if (*(uint *)(lVar14 + 0x294) < iVar8 + 1U) {
    FUN_14021e72e(lVar14 + 0x180,iVar8);
  }
  fVar17 = (fVar16 + fVar17) * fVar18;
  lVar15 = lVar14 + 0x180;
  if (*(longlong *)(lVar14 + 0x280) != 0) {
    lVar15 = *(longlong *)(lVar14 + 0x280);
  }
  lVar14 = (longlong)iVar8 * 0x40;
  *(float *)(lVar15 + lVar14) = fVar19;
  *(float *)(lVar15 + 4 + lVar14) = fVar20;
  *(undefined4 *)(lVar15 + 8 + lVar14) = 0;
  *(float *)(lVar15 + 0xc + lVar14) = fVar18;
  puVar1 = (undefined8 *)(lVar15 + 0x10 + lVar14);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined4 *)(lVar15 + 0x20 + lVar14) = uVar7;
  *(undefined4 *)(lVar15 + 0x24 + lVar14) = uVar6;
  uVar6 = param_3[1];
  uVar7 = param_3[2];
  uVar13 = param_3[3];
  puVar2 = (undefined4 *)(lVar15 + 0x28 + lVar14);
  *puVar2 = *param_3;
  puVar2[1] = uVar6;
  puVar2[2] = uVar7;
  puVar2[3] = uVar13;
  *(undefined4 *)(lVar15 + 0x38 + lVar14) = uVar5;
  lVar14 = *(longlong *)(lVar12 + 400);
  uVar6 = *(undefined4 *)param_1[0xb];
  fVar16 = *(float *)param_1[9];
  fVar4 = *(float *)param_1[0xc];
  uVar7 = *(undefined4 *)param_1[10];
  uVar5 = *(undefined4 *)(lVar12 + 0x44);
  iVar9 = *(int *)(lVar14 + 0x290);
  *(uint *)(lVar14 + 0x290) = iVar9 + 1U;
  if (*(uint *)(lVar14 + 0x294) < iVar9 + 1U) {
    FUN_14021e72e(lVar14 + 0x180,iVar9);
  }
  fVar18 = fVar18 * (fVar21 + fVar3);
  lVar15 = lVar14 + 0x180;
  if (*(longlong *)(lVar14 + 0x280) != 0) {
    lVar15 = *(longlong *)(lVar14 + 0x280);
  }
  lVar14 = (longlong)iVar9 * 0x40;
  *(float *)(lVar15 + lVar14) = fVar17;
  *(float *)(lVar15 + 4 + lVar14) = fVar20;
  *(undefined4 *)(lVar15 + 8 + lVar14) = 0;
  *(undefined4 *)(lVar15 + 0xc + lVar14) = uVar5;
  puVar1 = (undefined8 *)(lVar15 + 0x10 + lVar14);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(float *)(lVar15 + 0x20 + lVar14) = fVar16 + fVar4;
  *(undefined4 *)(lVar15 + 0x24 + lVar14) = uVar7;
  uVar5 = param_3[1];
  uVar7 = param_3[2];
  uVar13 = param_3[3];
  puVar2 = (undefined4 *)(lVar15 + 0x28 + lVar14);
  *puVar2 = *param_3;
  puVar2[1] = uVar5;
  puVar2[2] = uVar7;
  puVar2[3] = uVar13;
  *(undefined4 *)(lVar15 + 0x38 + lVar14) = uVar6;
  lVar14 = *(longlong *)(lVar12 + 400);
  uVar6 = *(undefined4 *)param_1[0xb];
  fVar3 = *(float *)param_1[10];
  fVar16 = *(float *)param_1[0xd];
  uVar7 = *(undefined4 *)param_1[9];
  uVar5 = *(undefined4 *)(lVar12 + 0x44);
  iVar10 = *(int *)(lVar14 + 0x290);
  *(uint *)(lVar14 + 0x290) = iVar10 + 1U;
  if (*(uint *)(lVar14 + 0x294) < iVar10 + 1U) {
    FUN_14021e72e(lVar14 + 0x180,iVar10);
  }
  lVar15 = lVar14 + 0x180;
  if (*(longlong *)(lVar14 + 0x280) != 0) {
    lVar15 = *(longlong *)(lVar14 + 0x280);
  }
  lVar14 = (longlong)iVar10 * 0x40;
  *(float *)(lVar15 + lVar14) = fVar19;
  *(float *)(lVar15 + 4 + lVar14) = fVar18;
  *(undefined4 *)(lVar15 + 8 + lVar14) = 0;
  *(undefined4 *)(lVar15 + 0xc + lVar14) = uVar5;
  puVar1 = (undefined8 *)(lVar15 + 0x10 + lVar14);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined4 *)(lVar15 + 0x20 + lVar14) = uVar7;
  *(float *)(lVar15 + 0x24 + lVar14) = fVar3 + fVar16;
  uVar5 = param_3[1];
  uVar7 = param_3[2];
  uVar13 = param_3[3];
  puVar2 = (undefined4 *)(lVar15 + 0x28 + lVar14);
  *puVar2 = *param_3;
  puVar2[1] = uVar5;
  puVar2[2] = uVar7;
  puVar2[3] = uVar13;
  *(undefined4 *)(lVar15 + 0x38 + lVar14) = uVar6;
  lVar14 = *(longlong *)(lVar12 + 400);
  uVar6 = *(undefined4 *)param_1[0xb];
  fVar3 = *(float *)param_1[10];
  fVar16 = *(float *)param_1[0xd];
  fVar19 = *(float *)param_1[9];
  fVar20 = *(float *)param_1[0xc];
  uVar5 = *(undefined4 *)(lVar12 + 0x44);
  iVar11 = *(int *)(lVar14 + 0x290);
  *(uint *)(lVar14 + 0x290) = iVar11 + 1U;
  if (*(uint *)(lVar14 + 0x294) < iVar11 + 1U) {
    FUN_14021e72e(lVar14 + 0x180,iVar11);
  }
  lVar15 = lVar14 + 0x180;
  if (*(longlong *)(lVar14 + 0x280) != 0) {
    lVar15 = *(longlong *)(lVar14 + 0x280);
  }
  lVar14 = (longlong)iVar11 * 0x40;
  *(float *)(lVar15 + lVar14) = fVar17;
  *(float *)(lVar15 + 4 + lVar14) = fVar18;
  *(undefined4 *)(lVar15 + 8 + lVar14) = 0;
  *(undefined4 *)(lVar15 + 0xc + lVar14) = uVar5;
  puVar1 = (undefined8 *)(lVar15 + 0x10 + lVar14);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(float *)(lVar15 + 0x20 + lVar14) = fVar19 + fVar20;
  *(float *)(lVar15 + 0x24 + lVar14) = fVar3 + fVar16;
  uVar5 = param_3[1];
  uVar7 = param_3[2];
  uVar13 = param_3[3];
  puVar2 = (undefined4 *)(lVar15 + 0x28 + lVar14);
  *puVar2 = *param_3;
  puVar2[1] = uVar5;
  puVar2[2] = uVar7;
  puVar2[3] = uVar13;
  *(undefined4 *)(lVar15 + 0x38 + lVar14) = uVar6;
  FUN_14002b732(*(undefined8 *)(lVar12 + 400),iVar8,iVar9,iVar11,0,*(undefined8 *)param_1[0xe],
                *(undefined4 *)param_1[0xf],lVar12 + 0x50);
  FUN_14002b732(*(undefined8 *)(lVar12 + 400),iVar8,iVar11,iVar10,0,*(undefined8 *)param_1[0xe],
                *(undefined4 *)param_1[0xf],lVar12 + 0x50);
  return;
}



// FUNCTION 14011d944 FUN_14011d944 body=45 status=ok
// SIG undefined FUN_14011d944(void)

void FUN_14011d944(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (*(int *)(param_1 + 0x294) < param_2) {
    FUN_1447e6282(param_1 + 0x180);
    return;
  }
  return;
}



// FUNCTION 14011d972 FUN_14011d972 body=144 status=ok
// SIG undefined FUN_14011d972(void)

undefined8 * FUN_14011d972(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  puVar3 = (undefined8 *)*param_1;
  if (puVar3 == (undefined8 *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x10) {
      uVar4 = puVar3[2];
      plVar5 = (longlong *)puVar3[3];
    }
    else {
      uVar4 = *puVar3;
      plVar5 = (longlong *)puVar3[1];
    }
    if (plVar5 == (longlong *)0x0) {
      *param_2 = uVar4;
      param_2[1] = 0;
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      *param_2 = uVar4;
      param_2[1] = plVar5;
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
    }
  }
  return param_2;
}



// FUNCTION 14011da02 FUN_14011da02 body=164 status=ok
// SIG undefined FUN_14011da02(void)

void FUN_14011da02(longlong param_1,int param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (0 < (int)*(uint *)(param_1 + 0x170)) {
    lVar2 = -8;
    lVar3 = 0x20;
    do {
      lVar1 = *(longlong *)(param_1 + 0x168);
      if (*(longlong *)(param_1 + 0x168) == 0) {
        lVar1 = param_1 + 0x78;
      }
      if ((((*(longlong *)(lVar1 + 8 + lVar3) == param_3) &&
           (*(longlong *)(lVar1 + 0x10 + lVar3) == 0)) &&
          (*(int *)(lVar1 + 0x18 + lVar3) == param_4)) &&
         (*(int *)(lVar1 + lVar3) + 3 < *(int *)(param_1 + 0x70))) {
        if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(param_2);
        }
        if (param_2 <= *(int *)(lVar1 + 4 + lVar3)) {
          return;
        }
        FUN_14011edb0(lVar1 - lVar2);
        return;
      }
      lVar1 = (ulonglong)*(uint *)(param_1 + 0x170) * 0x78 + lVar2;
      lVar2 = lVar2 + -0x78;
      lVar3 = lVar3 + 0x78;
    } while (lVar1 != 0x70);
  }
  return;
}



// FUNCTION 14011daa8 FUN_14011daa8 body=128 status=ok
// SIG undefined FUN_14011daa8(void)

undefined8 FUN_14011daa8(longlong param_1,short param_2)

{
  undefined1 auStack_58 [44];
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != -3) {
    FUN_1406d80a6(*(undefined8 *)(*(longlong *)(param_1 + 0xd8) + 0x40),param_1 + 0x50,param_2,
                  local_2c);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return CONCAT71((int7)(local_28 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14011db44 FUN_14011db44 body=1583 status=ok
// SIG undefined FUN_14011db44(void)

undefined8 *
FUN_14011db44(longlong param_1,int param_2,longlong param_3,longlong param_4,int param_5,
             uint *param_6,char param_7)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  uint uVar26;
  uint uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  int iVar31;
  uint uVar32;
  longlong lVar33;
  longlong lVar34;
  longlong lVar35;
  undefined8 *puVar36;
  undefined8 *puVar37;
  longlong *plVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  undefined4 uVar65;
  undefined4 uVar66;
  undefined4 uVar67;
  undefined4 uVar68;
  undefined4 uVar69;
  undefined4 uVar70;
  undefined4 uVar71;
  undefined4 uVar72;
  undefined4 uVar73;
  undefined4 uVar74;
  undefined4 uVar75;
  undefined4 uVar76;
  undefined1 auStack_1d8 [36];
  undefined4 local_1b4;
  longlong local_1b0;
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined4 local_104;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_1b0 = param_3;
  lVar33 = FUN_144914fe6(param_1,*(undefined4 *)
                                  (*(longlong *)(param_1 + 0x18) +
                                  (longlong)(*(int *)(param_1 + 0x20) + -1) * 4));
  lVar35 = *(longlong *)(param_1 + 0x28);
  lVar34 = (longlong)(*(int *)(param_1 + 0x30) + -1) * 0x90;
  auVar2 = *(undefined1 (*) [16])(lVar35 + lVar34);
  uVar45 = auVar2._0_4_;
  uVar46 = auVar2._4_4_;
  uVar47 = auVar2._8_4_;
  uVar48 = auVar2._12_4_;
  auVar3 = *(undefined1 (*) [16])(lVar35 + 0x10 + lVar34);
  uVar49 = auVar3._0_4_;
  uVar50 = auVar3._4_4_;
  uVar51 = auVar3._8_4_;
  uVar52 = auVar3._12_4_;
  auVar4 = *(undefined1 (*) [16])(lVar35 + 0x20 + lVar34);
  uVar53 = auVar4._0_4_;
  uVar54 = auVar4._4_4_;
  uVar55 = auVar4._8_4_;
  uVar56 = auVar4._12_4_;
  auVar5 = *(undefined1 (*) [16])(lVar35 + 0x30 + lVar34);
  uVar57 = auVar5._0_4_;
  uVar58 = auVar5._4_4_;
  uVar59 = auVar5._8_4_;
  uVar60 = auVar5._12_4_;
  auVar6 = *(undefined1 (*) [16])(lVar35 + 0x40 + lVar34);
  uVar61 = auVar6._0_4_;
  uVar62 = auVar6._4_4_;
  uVar63 = auVar6._8_4_;
  uVar64 = auVar6._12_4_;
  auVar7 = *(undefined1 (*) [16])(lVar35 + 0x50 + lVar34);
  uVar65 = auVar7._0_4_;
  uVar66 = auVar7._4_4_;
  uVar67 = auVar7._8_4_;
  uVar68 = auVar7._12_4_;
  auVar8 = *(undefined1 (*) [16])(lVar35 + 0x60 + lVar34);
  uVar73 = auVar8._0_4_;
  uVar74 = auVar8._4_4_;
  uVar75 = auVar8._8_4_;
  uVar76 = auVar8._12_4_;
  auVar9 = *(undefined1 (*) [16])(lVar35 + 0x70 + lVar34);
  uVar69 = auVar9._0_4_;
  uVar70 = auVar9._4_4_;
  uVar71 = auVar9._8_4_;
  uVar72 = auVar9._12_4_;
  iVar31 = *(int *)(lVar35 + 0x80 + lVar34);
  local_1b4 = *(undefined4 *)(lVar35 + 0x84 + lVar34);
  uVar10 = *(undefined8 *)(lVar35 + 0x88 + lVar34);
  if ((param_7 == '\0') && (*(char *)(param_1 + 0xa0) == '\0')) {
    fVar1 = *(float *)(param_1 + 0xb0);
    if ((fVar1 != 1.0) || (NAN(fVar1))) {
      dVar24 = auVar4._0_8_ * 0.0;
      dVar25 = auVar4._8_8_ * 0.0;
      dVar43 = auVar5._0_8_ * 0.0;
      dVar44 = auVar5._8_8_ * 0.0;
      dVar11 = auVar6._0_8_ * 0.0;
      dVar12 = auVar6._8_8_ * 0.0;
      dVar39 = auVar7._0_8_ * 0.0;
      dVar40 = auVar7._8_8_ * 0.0;
      dVar22 = auVar8._0_8_ * 0.0;
      dVar23 = auVar8._8_8_ * 0.0;
      dVar41 = auVar9._0_8_ * 0.0;
      dVar42 = auVar9._8_8_ * 0.0;
      dVar13 = auVar2._0_8_ * 0.0;
      dVar15 = auVar2._8_8_ * 0.0;
      dVar17 = auVar3._0_8_ * 0.0;
      dVar19 = auVar3._8_8_ * 0.0;
      dVar21 = (double)(1.0 / fVar1);
      dVar14 = dVar13 + dVar24;
      dVar16 = dVar15 + dVar25;
      dVar18 = dVar17 + dVar43;
      dVar20 = dVar19 + dVar44;
      local_188 = auVar2._0_8_ * dVar21 + dVar24 + dVar11 + dVar22;
      uStack_180 = auVar2._8_8_ * dVar21 + dVar25 + dVar12 + dVar23;
      dVar24 = auVar4._8_8_ * dVar21 + dVar15 + dVar12 + dVar23;
      dVar23 = auVar6._8_8_ * dVar21 + dVar16 + dVar23;
      local_178 = auVar3._0_8_ * dVar21 + dVar43 + dVar39 + dVar41;
      uStack_170 = auVar3._8_8_ * dVar21 + dVar44 + dVar40 + dVar42;
      dVar19 = auVar5._8_8_ * dVar21 + dVar19 + dVar40 + dVar42;
      dVar42 = auVar7._8_8_ * dVar21 + dVar20 + dVar42;
      dVar12 = dVar16 + dVar12 + auVar8._8_8_;
      dVar15 = dVar20 + dVar40 + auVar9._8_8_;
      local_168._8_4_ = SUB84(dVar24,0);
      local_168._0_8_ = auVar4._0_8_ * dVar21 + dVar13 + dVar11 + dVar22;
      local_168._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
      local_158._8_4_ = SUB84(dVar19,0);
      local_158._0_8_ = auVar5._0_8_ * dVar21 + dVar17 + dVar39 + dVar41;
      local_158._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
      local_148._8_4_ = SUB84(dVar23,0);
      local_148._0_8_ = auVar6._0_8_ * dVar21 + dVar14 + dVar22;
      local_148._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
      local_138._8_4_ = SUB84(dVar42,0);
      local_138._0_8_ = auVar7._0_8_ * dVar21 + dVar18 + dVar41;
      local_138._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
      local_128._8_4_ = SUB84(dVar12,0);
      local_128._0_8_ = dVar14 + dVar11 + auVar8._0_8_;
      local_128._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
      local_118._8_4_ = SUB84(dVar15,0);
      local_118._0_8_ = dVar18 + dVar39 + auVar9._0_8_;
      local_118._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
      local_1a8 = auVar8;
      local_198 = auVar9;
      iVar31 = FUN_1448eb174(&local_188,0x80,0);
      local_1b4 = local_104;
      uVar45 = (undefined4)local_188;
      uVar46 = local_188._4_4_;
      uVar47 = (undefined4)uStack_180;
      uVar48 = uStack_180._4_4_;
      uVar49 = (undefined4)local_178;
      uVar50 = local_178._4_4_;
      uVar51 = (undefined4)uStack_170;
      uVar52 = uStack_170._4_4_;
      uVar53 = local_168._0_4_;
      uVar54 = local_168._4_4_;
      uVar55 = local_168._8_4_;
      uVar56 = local_168._12_4_;
      uVar57 = local_158._0_4_;
      uVar58 = local_158._4_4_;
      uVar59 = local_158._8_4_;
      uVar60 = local_158._12_4_;
      uVar61 = local_148._0_4_;
      uVar62 = local_148._4_4_;
      uVar63 = local_148._8_4_;
      uVar64 = local_148._12_4_;
      uVar65 = local_138._0_4_;
      uVar66 = local_138._4_4_;
      uVar67 = local_138._8_4_;
      uVar68 = local_138._12_4_;
      uVar69 = local_118._0_4_;
      uVar70 = local_118._4_4_;
      uVar71 = local_118._8_4_;
      uVar72 = local_118._12_4_;
      uVar73 = local_128._0_4_;
      uVar74 = local_128._4_4_;
      uVar75 = local_128._8_4_;
      uVar76 = local_128._12_4_;
    }
  }
  plVar38 = (longlong *)(lVar33 + 8);
  if (((((0 < (longlong)*(int *)(lVar33 + 0x10)) &&
        (lVar35 = (**(code **)(**(longlong **)
                                 (*plVar38 + -8 + (longlong)*(int *)(lVar33 + 0x10) * 8) + 0x18))(),
        lVar35 != 0)) && (puVar37 = *(undefined8 **)(lVar35 + 8), puVar37[0x54] == local_1b0)) &&
      ((puVar37[0x55] == param_4 && (*(int *)(puVar37 + 0x56) == param_5)))) &&
     ((*(int *)((longlong)puVar37 + 0x2b4) == param_2 &&
      ((*(int *)(puVar37 + 0x68) == iVar31 && ((*param_6 & 1) == (*(uint *)(puVar37 + 0x6a) & 1)))))
     )) {
    if ((*param_6 & 1) == 0) goto LAB_14011e0eb;
    if (((float)param_6[1] == *(float *)((longlong)puVar37 + 0x354)) &&
       (!NAN((float)param_6[1]) && !NAN(*(float *)((longlong)puVar37 + 0x354)))) {
      if (((float)param_6[2] == *(float *)(puVar37 + 0x6b)) &&
         (!NAN((float)param_6[2]) && !NAN(*(float *)(puVar37 + 0x6b)))) {
        if (((float)param_6[3] == *(float *)((longlong)puVar37 + 0x35c)) &&
           (!NAN((float)param_6[3]) && !NAN(*(float *)((longlong)puVar37 + 0x35c)))) {
          if (((float)param_6[4] == *(float *)(puVar37 + 0x6c)) &&
             (!NAN((float)param_6[4]) && !NAN(*(float *)(puVar37 + 0x6c)))) {
            if ((*(double *)(param_6 + 6) == (double)puVar37[0x6d]) &&
               (!NAN(*(double *)(param_6 + 6)) && !NAN((double)puVar37[0x6d]))) {
              if ((*(double *)(param_6 + 8) == (double)puVar37[0x6e]) &&
                 (!NAN(*(double *)(param_6 + 8)) && !NAN((double)puVar37[0x6e]))) {
                if ((*(double *)(param_6 + 10) == (double)puVar37[0x6f]) &&
                   (!NAN(*(double *)(param_6 + 10)) && !NAN((double)puVar37[0x6f]))) {
                  if ((*(double *)(param_6 + 0xc) == (double)puVar37[0x70]) &&
                     (!NAN(*(double *)(param_6 + 0xc)) && !NAN((double)puVar37[0x70])))
                  goto LAB_14011e0eb;
                }
              }
            }
          }
        }
      }
    }
  }
  puVar36 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar36 = &PTR_FUN_14aaf7400;
  puVar37 = (undefined8 *)FUN_14001cc68(0x390,0x10);
  *puVar37 = 0;
  puVar37[1] = 0;
  puVar37[2] = 0;
  puVar37[3] = 0;
  puVar37[4] = 0;
  puVar37[5] = 0;
  puVar37[7] = 0;
  puVar37[8] = 0;
  puVar37[6] = &PTR_FUN_14a7fec80;
  *(undefined1 *)(puVar37 + 9) = 1;
  puVar37[10] = 0;
  puVar37[0xb] = 0;
  puVar37[0xc] = 0;
  puVar37[0xd] = 0;
  *(int *)(puVar37 + 0xe) = DAT_14ca84e80 >> 2;
  uVar32 = DAT_14ca84e7c >> 6;
  if (0xfffe < uVar32) {
    uVar32 = 0xffff;
  }
  *(uint *)((longlong)puVar37 + 0x74) = uVar32;
  puVar37[0x2d] = 0;
  puVar37[0x2e] = 0x200000000;
  puVar37[0x50] = 0;
  puVar37[0x52] = 0x400000000;
  puVar37[0x54] = local_1b0;
  if (local_1b0 != 0) {
    *(int *)(local_1b0 + 8) = *(int *)(local_1b0 + 8) + 1;
  }
  puVar37[0x55] = param_4;
  *(int *)(puVar37 + 0x56) = param_5;
  *(int *)((longlong)puVar37 + 0x2b4) = param_2;
  *(undefined4 *)(puVar37 + 0x58) = uVar45;
  *(undefined4 *)((longlong)puVar37 + 0x2c4) = uVar46;
  *(undefined4 *)(puVar37 + 0x59) = uVar47;
  *(undefined4 *)((longlong)puVar37 + 0x2cc) = uVar48;
  *(undefined4 *)(puVar37 + 0x5a) = uVar49;
  *(undefined4 *)((longlong)puVar37 + 0x2d4) = uVar50;
  *(undefined4 *)(puVar37 + 0x5b) = uVar51;
  *(undefined4 *)((longlong)puVar37 + 0x2dc) = uVar52;
  *(undefined4 *)(puVar37 + 0x5c) = uVar53;
  *(undefined4 *)((longlong)puVar37 + 0x2e4) = uVar54;
  *(undefined4 *)(puVar37 + 0x5d) = uVar55;
  *(undefined4 *)((longlong)puVar37 + 0x2ec) = uVar56;
  *(undefined4 *)(puVar37 + 0x5e) = uVar57;
  *(undefined4 *)((longlong)puVar37 + 0x2f4) = uVar58;
  *(undefined4 *)(puVar37 + 0x5f) = uVar59;
  *(undefined4 *)((longlong)puVar37 + 0x2fc) = uVar60;
  *(undefined4 *)(puVar37 + 0x60) = uVar61;
  *(undefined4 *)((longlong)puVar37 + 0x304) = uVar62;
  *(undefined4 *)(puVar37 + 0x61) = uVar63;
  *(undefined4 *)((longlong)puVar37 + 0x30c) = uVar64;
  *(undefined4 *)(puVar37 + 0x62) = uVar65;
  *(undefined4 *)((longlong)puVar37 + 0x314) = uVar66;
  *(undefined4 *)(puVar37 + 99) = uVar67;
  *(undefined4 *)((longlong)puVar37 + 0x31c) = uVar68;
  *(undefined4 *)(puVar37 + 100) = uVar73;
  *(undefined4 *)((longlong)puVar37 + 0x324) = uVar74;
  *(undefined4 *)(puVar37 + 0x65) = uVar75;
  *(undefined4 *)((longlong)puVar37 + 0x32c) = uVar76;
  *(undefined4 *)(puVar37 + 0x66) = uVar69;
  *(undefined4 *)((longlong)puVar37 + 0x334) = uVar70;
  *(undefined4 *)(puVar37 + 0x67) = uVar71;
  *(undefined4 *)((longlong)puVar37 + 0x33c) = uVar72;
  *(int *)(puVar37 + 0x68) = iVar31;
  *(undefined4 *)((longlong)puVar37 + 0x344) = local_1b4;
  puVar37[0x69] = uVar10;
  uVar32 = param_6[1];
  uVar26 = param_6[2];
  uVar27 = param_6[3];
  uVar10 = *(undefined8 *)(param_6 + 4);
  uVar28 = *(undefined8 *)(param_6 + 6);
  uVar29 = *(undefined8 *)(param_6 + 8);
  uVar30 = *(undefined8 *)(param_6 + 10);
  *(uint *)(puVar37 + 0x6a) = *param_6;
  *(uint *)((longlong)puVar37 + 0x354) = uVar32;
  *(uint *)(puVar37 + 0x6b) = uVar26;
  *(uint *)((longlong)puVar37 + 0x35c) = uVar27;
  puVar37[0x6c] = uVar10;
  puVar37[0x6d] = uVar28;
  puVar37[0x6e] = uVar29;
  puVar37[0x6f] = uVar30;
  puVar37[0x70] = *(undefined8 *)(param_6 + 0xc);
  puVar36[1] = puVar37;
  iVar31 = *(int *)(lVar33 + 0x10);
  *(uint *)(lVar33 + 0x10) = iVar31 + 1U;
  if (*(uint *)(lVar33 + 0x14) < iVar31 + 1U) {
    FUN_1417f94f0(plVar38,iVar31);
  }
  *(undefined8 **)(*plVar38 + (longlong)iVar31 * 8) = puVar36;
LAB_14011e0eb:
  if ((local_f0 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar37;
}



// FUNCTION 14011e174 FUN_14011e174 body=2882 status=ok
// SIG undefined FUN_14011e174(void)

longlong FUN_14011e174(longlong *param_1,ushort param_2)

{
  int *piVar1;
  void *_Src;
  void *_Dst;
  uint *puVar2;
  longlong *plVar3;
  char cVar4;
  char cVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  undefined8 uVar11;
  longlong lVar12;
  ulonglong uVar13;
  byte bVar14;
  int iVar15;
  uint uVar16;
  longlong *plVar17;
  ushort uVar18;
  longlong lVar19;
  uint uVar20;
  undefined8 uVar21;
  byte bVar22;
  int iVar23;
  bool bVar24;
  undefined4 uVar25;
  float fVar26;
  undefined4 uVar27;
  undefined1 auStack_238 [32];
  float local_218;
  float local_210;
  undefined1 local_208;
  undefined1 local_1f7;
  ushort local_1f6;
  int local_1f4;
  undefined8 local_1f0;
  uint local_1e4;
  ulonglong local_1e0;
  undefined8 local_1d8;
  ulonglong local_1d0;
  ulonglong local_1c8;
  ulonglong local_1c0;
  ulonglong local_1b8;
  ulonglong local_1b0;
  ulonglong local_1a8;
  ulonglong local_1a0;
  ulonglong local_198;
  ulonglong local_190;
  undefined8 local_188;
  undefined8 local_180;
  ulonglong local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined1 local_15c [8];
  undefined4 local_154;
  longlong *local_150;
  longlong *local_148;
  undefined1 local_138;
  float local_12c;
  undefined8 local_128;
  undefined8 local_120;
  longlong *local_118;
  longlong *plStack_110;
  undefined8 local_108;
  ushort uStack_100;
  undefined3 uStack_fe;
  undefined3 uStack_fb;
  undefined4 uStack_f8;
  undefined1 uStack_f4;
  undefined8 local_f0;
  longlong alStack_e8 [21];
  
  alStack_e8[0xf] = DAT_14c707940 ^ (ulonglong)auStack_238;
  local_12c = 1.0;
  uVar20 = (uint)param_2;
  local_1f0 = FUN_1406d80a6(*(undefined8 *)(param_1[0x1b] + 0x40),param_1 + 10,uVar20);
  local_218 = (float)CONCAT31(local_218._1_3_,*(undefined1 *)((longlong)param_1 + 0xa4));
  FUN_1406d7b94(*(undefined8 *)(param_1[0x1b] + 0x48),&local_150,local_1f0,uVar20);
  if (((local_150 == (longlong *)0x0) || ((char)local_150[3] != '\0')) || (*local_150 == 0)) {
    lVar12 = 0;
    goto LAB_14011e8a4;
  }
  if ((*(byte *)(*local_150 + 8) & 1) == 0) {
    local_12c = 1.0;
  }
  fVar26 = local_12c * *(float *)(param_1 + 0x1a);
  uVar18 = 0;
  local_154 = 0;
  local_1f6 = param_2;
  FUN_1406d99f9(local_150,local_1f0,&local_154);
  bVar22 = *(byte *)(*local_150 + 8);
  cVar4 = FUN_140665610(uVar20);
  local_1e4 = uVar20;
  iVar7 = FUN_144b42f90(*local_150,uVar20);
  local_128 = (longlong *)((ulonglong)local_128._4_4_ << 0x20);
  local_218 = (float)param_1[0x13];
  local_210 = fVar26;
  FUN_1406da070(*(undefined8 *)(param_1[0x1b] + 0x38),&local_118,*local_150,local_154);
  local_1f4 = iVar7;
  cVar5 = FUN_1406d7a52(local_118,iVar7,&local_128);
  if (cVar5 != '\0') {
    uVar18 = (ushort)(((int)local_128 + 0x200U >> 10) + 0x20 >> 6);
  }
  if (plStack_110 != (longlong *)0x0) {
    LOCK();
    plVar10 = plStack_110 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*plStack_110)(plStack_110);
      LOCK();
      piVar1 = (int *)((longlong)plStack_110 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plStack_110 + 0x10))(plStack_110);
      }
    }
  }
  local_108 = 0;
  uStack_100 = 0;
  uStack_fe = 0;
  local_118 = (longlong *)0x0;
  plStack_110 = (longlong *)0x0;
  uStack_fb = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  local_f0 = 0;
  alStack_e8[0] = 0;
  alStack_e8[1] = 0;
  alStack_e8[2] = 0;
  alStack_e8[3] = 0;
  alStack_e8[4] = 0;
  alStack_e8[5] = 0;
  alStack_e8[6] = 0;
  alStack_e8[7] = 0;
  alStack_e8[8] = 0;
  alStack_e8[9] = 0;
  alStack_e8[10] = 0;
  alStack_e8[0xb] = 0;
  alStack_e8[0xc] = 0;
  alStack_e8[0xd] = 0;
  alStack_e8[0xe] = 0;
  FUN_1406d996e(local_1f0,local_15c);
  plVar10 = (longlong *)FUN_14001cc68(0x38,0x10);
  plVar10[1] = (longlong)&DAT_100000001;
  *plVar10 = (longlong)&PTR_FUN_149eda190;
  lVar12 = param_1[0x13];
  local_128 = local_150;
  local_120 = local_148;
  if (local_148 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)local_148 + 0xc) = *(int *)((longlong)local_148 + 0xc) + 1;
    UNLOCK();
  }
  plVar17 = plVar10 + 2;
  local_208 = local_15c[0];
  local_210 = 0.0;
  local_218 = fVar26;
  FUN_1406d9b98(plVar17,&local_128,local_154,(int)lVar12);
  plVar3 = plStack_110;
  local_118 = plVar17;
  if (plVar10 == (longlong *)0x0) {
    if (plStack_110 != (longlong *)0x0) {
      plStack_110 = (longlong *)0x0;
LAB_14011ead3:
      LOCK();
      plVar17 = plVar3 + 1;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)*plVar17 == 0) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
      if (plVar10 != (longlong *)0x0) goto LAB_14011e460;
    }
  }
  else {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    if (plVar10 == plStack_110) {
      LOCK();
      plVar17 = plVar10 + 1;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)*plVar17 == 0) {
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
    else {
      bVar24 = plStack_110 != (longlong *)0x0;
      plStack_110 = plVar10;
      if (bVar24) goto LAB_14011ead3;
    }
LAB_14011e460:
    LOCK();
    plVar17 = plVar10 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
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
  uStack_f4 = cVar4 == '\0';
  local_108 = CONCAT44(local_108._4_4_,local_1f4);
  uVar13 = (ulonglong)local_1f6;
  uStack_100 = uVar18;
  if (local_1f4 == 0 && local_1f6 != 0) {
    lVar12 = 0;
  }
  else {
    FUN_140c765f8(param_1[0x1b],&local_128,&local_118);
    if (local_120._6_1_ == '\x01') {
      lVar12 = *(longlong *)(param_1[0x1b] + 0x48);
      lVar19 = param_1[0x13];
      uVar11 = FUN_14011f70a(lVar12,local_1f0);
      local_218 = fVar26;
      FUN_1406d9de0(*(undefined8 *)(lVar12 + 8),&local_170,uVar11,(int)lVar19);
      uVar25 = (undefined4)local_118[3];
      uVar27 = *(undefined4 *)((longlong)local_118 + 0x1c);
      local_198 = (ulonglong)local_128 >> 0x20 & 0xffff;
      local_1a0 = (ulonglong)local_128 >> 0x30;
      local_1a8 = (ulonglong)local_120 & 0xffff;
      local_1b0 = (ulonglong)local_120 >> 0x10 & 0xffff;
      local_1b8 = (ulonglong)local_128 & 0xffff;
      local_1c0 = (ulonglong)local_128 >> 0x10 & 0xffff;
      sVar6 = *(short *)((longlong)param_1 + 0xe2);
      if (sVar6 == 0) {
        sVar6 = FUN_14574f520(*(undefined8 *)(param_1[0x1b] + 0x48),param_1 + 10,(int)param_1[0x1a])
        ;
        *(short *)((longlong)param_1 + 0xe2) = sVar6;
      }
      bVar22 = bVar22 >> 6 & 1;
      local_1c8 = (ulonglong)uStack_100;
      bVar14 = (byte)(uStack_100 >> 8);
      local_1d0 = (ulonglong)CONCAT11(bVar14,local_120._4_1_);
      local_1e0 = (ulonglong)CONCAT11(bVar14,local_120._5_1_);
      local_1f7 = local_138;
      local_1d8 = CONCAT71((uint7)bVar14,1);
      uVar11 = local_170;
      uVar21 = local_168;
    }
    else {
      local_1f7 = 2;
      uVar25 = 0;
      uVar21 = 0;
      uVar27 = 0;
      local_198 = 0;
      local_1a0 = 0;
      local_1a8 = 0;
      local_1b0 = 0;
      local_1b8 = 0;
      local_1c0 = 0;
      sVar6 = 0;
      local_1c8 = 0;
      local_1d0 = 0;
      local_1f0 = 0;
      local_1d8 = 0;
      local_1e0 = 0;
      bVar22 = 0;
      local_1f4 = 0;
      uVar13 = 0;
      uVar11 = 0;
    }
    local_178 = uVar13;
    if (*(int *)((longlong)param_1 + 0x34) == 0) {
      iVar7 = (int)param_1[1];
      *(int *)(param_1 + 1) = iVar7 + 1;
      if (*(int *)((longlong)param_1 + 0xc) == iVar7) {
        FUN_1406fba42(param_1,iVar7);
      }
      iVar9 = (int)param_1[5];
      if (iVar9 == 0) {
        iVar8 = -1;
      }
      else {
        iVar8 = iVar9 + 0x1e;
        if (-1 < iVar9 + -1) {
          iVar8 = iVar9 + -1;
        }
        iVar8 = iVar8 >> 5;
      }
      plVar10 = param_1 + 2;
      iVar15 = iVar9 + 1;
      iVar23 = iVar9 + 0x1f;
      if (-1 < iVar9) {
        iVar23 = iVar9;
      }
      if (iVar23 >> 5 == iVar8) {
        *(int *)(param_1 + 5) = iVar15;
      }
      else {
        if (*(int *)((longlong)param_1 + 0x2c) <= iVar9) {
          local_188 = uVar21;
          local_180 = uVar11;
          if (iVar9 + 0x20U < 0xa0) {
            iVar15 = 0x80;
            iVar8 = iVar9;
          }
          else {
            uVar20 = iVar9 + 0x20U >> 5;
            local_190 = (ulonglong)uVar20;
            if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
              uVar16 = 4;
              if (4 < uVar20) {
                uVar16 = uVar20;
              }
            }
            else {
              uVar16 = (uVar20 * 3 >> 3) + uVar20 + 0x10;
            }
            uVar13 = FUN_144a3809e(uVar16 << 2,0);
            iVar8 = (int)(uVar13 >> 2);
            iVar15 = -0x20;
            if ((int)local_190 <= iVar8) {
              iVar15 = iVar8 << 5;
            }
            iVar8 = (int)param_1[5];
          }
          *(int *)((longlong)param_1 + 0x2c) = iVar15;
          FUN_1446efbd8(plVar10,iVar8);
          iVar15 = (int)param_1[5] + 1;
          uVar11 = local_180;
          uVar21 = local_188;
        }
        iVar8 = iVar15 + 0x1f;
        if (-1 < iVar15) {
          iVar8 = iVar15;
        }
        *(int *)(param_1 + 5) = iVar15;
        if (iVar15 % 0x20 != 0) {
          plVar17 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar17 = plVar10;
          }
          bVar14 = -(char)(iVar15 % 0x20);
          *(uint *)((longlong)plVar17 + (longlong)(iVar8 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar17 + (longlong)(iVar8 >> 5) * 4) << (bVar14 & 0x1f))
               >> (bVar14 & 0x1f);
        }
      }
      lVar12 = (longlong)iVar7;
      if ((longlong *)param_1[4] != (longlong *)0x0) {
        plVar10 = (longlong *)param_1[4];
      }
      bVar14 = (byte)iVar9 & 0x1f;
      puVar2 = (uint *)((longlong)plVar10 + (longlong)(iVar23 >> 5) * 4);
      *puVar2 = *puVar2 & (-2 << bVar14 | 0xfffffffeU >> 0x20 - bVar14);
    }
    else {
      iVar7 = (int)param_1[6];
      lVar12 = (longlong)iVar7;
      iVar9 = *(int *)(*param_1 + 4 + lVar12 * 0x50);
      *(int *)(param_1 + 6) = iVar9;
      iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
      *(int *)((longlong)param_1 + 0x34) = iVar8;
      if (iVar8 != 0) {
        *(undefined4 *)(*param_1 + (longlong)iVar9 * 0x50) = 0xffffffff;
      }
    }
    plVar10 = param_1 + 2;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar10 = (longlong *)param_1[4];
    }
    iVar9 = iVar7 + 0x1f;
    if (-1 < iVar7) {
      iVar9 = iVar7;
    }
    puVar2 = (uint *)((longlong)plVar10 + (longlong)(iVar9 >> 5) * 4);
    *puVar2 = *puVar2 | 1 << ((byte)iVar7 & 0x1f);
    lVar12 = lVar12 * 0x50;
    lVar19 = *param_1;
    *(ushort *)(lVar19 + lVar12) = local_1f6;
    *(short *)(lVar19 + 8 + lVar12) = (short)local_178;
    *(int *)(lVar19 + 0xc + lVar12) = local_1f4;
    *(undefined8 *)(lVar19 + 0x10 + lVar12) = local_1f0;
    *(undefined8 *)(lVar19 + 0x18 + lVar12) = uVar11;
    *(undefined8 *)(lVar19 + 0x20 + lVar12) = uVar21;
    *(undefined4 *)(lVar19 + 0x28 + lVar12) = uVar25;
    *(undefined4 *)(lVar19 + 0x2c + lVar12) = uVar27;
    *(short *)(lVar19 + 0x30 + lVar12) = (short)local_198;
    *(short *)(lVar19 + 0x32 + lVar12) = (short)local_1a0;
    *(short *)(lVar19 + 0x34 + lVar12) = (short)local_1a8;
    *(short *)(lVar19 + 0x36 + lVar12) = (short)local_1b0;
    *(short *)(lVar19 + 0x38 + lVar12) = (short)local_1b8;
    *(short *)(lVar19 + 0x3a + lVar12) = (short)local_1c0;
    *(short *)(lVar19 + 0x3c + lVar12) = sVar6;
    *(short *)(lVar19 + 0x3e + lVar12) = (short)local_1c8;
    *(char *)(lVar19 + 0x40 + lVar12) = (char)local_1d0;
    *(undefined1 *)(lVar19 + 0x41 + lVar12) = local_1f7;
    *(byte *)(lVar19 + 0x42 + lVar12) = bVar22;
    *(char *)(lVar19 + 0x43 + lVar12) = (char)local_1e0;
    *(char *)(lVar19 + 0x44 + lVar12) = (char)local_1d8;
    iVar9 = 1;
    *(undefined4 *)(lVar19 + 0x48 + lVar12) = 0xffffffff;
    _Src = (void *)(lVar19 + lVar12);
    uVar20 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    if ((uVar20 != 0) && (uVar20 != 1)) {
      plVar10 = param_1 + 7;
      if ((longlong *)param_1[8] != (longlong *)0x0) {
        plVar10 = (longlong *)param_1[8];
      }
      iVar8 = *(int *)((longlong)plVar10 + (ulonglong)((int)param_1[9] - 1U & local_1e4) * 4);
      if (iVar8 != -1) {
        do {
          _Dst = (void *)(*param_1 + (longlong)iVar8 * 0x50);
          if (*(ushort *)(*param_1 + (longlong)iVar8 * 0x50) == local_1f6) {
            plVar10 = *(longlong **)((longlong)_Dst + 0x20);
            if (plVar10 != (longlong *)0x0) {
              LOCK();
              plVar17 = plVar10 + 1;
              *(int *)plVar17 = (int)*plVar17 + -1;
              UNLOCK();
              if ((int)*plVar17 == 0) {
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
            memmove(_Dst,_Src,0x48);
            FUN_14694d6be(param_1,iVar7);
            iVar7 = iVar8;
            goto LAB_14011e82e;
          }
          iVar8 = *(int *)((longlong)_Dst + 0x48);
        } while (iVar8 != -1);
      }
    }
    if (3 < uVar20) {
      uVar13 = (ulonglong)(uVar20 & 0xfffffffe) + 0xf;
      lVar12 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar12 & 0x1f);
    }
    if (((int)uVar20 < 1) || (iVar9 <= (int)param_1[9])) {
      uVar20 = (int)param_1[9] - 1U & local_1e4;
      *(uint *)((longlong)_Src + 0x4c) = uVar20;
      plVar10 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar10 = param_1 + 7;
      }
      *(undefined4 *)((longlong)_Src + 0x48) =
           *(undefined4 *)((longlong)plVar10 + (ulonglong)((int)param_1[9] - 1U & uVar20) * 4);
      plVar10 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar10 = param_1 + 7;
      }
      *(int *)((longlong)plVar10 + (ulonglong)((int)param_1[9] - 1U & uVar20) * 4) = iVar7;
    }
    else {
      *(int *)(param_1 + 9) = iVar9;
      FUN_14011f818(param_1);
    }
LAB_14011e82e:
    lVar12 = *param_1 + (longlong)iVar7 * 0x50 + 8;
  }
  lVar19 = 0x78;
  do {
    plVar10 = *(longlong **)((longlong)&plStack_110 + lVar19);
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))();
      }
    }
    lVar19 = lVar19 + -0x10;
  } while (lVar19 != 0x58);
  lVar19 = 0x58;
  do {
    plVar10 = *(longlong **)((longlong)&plStack_110 + lVar19);
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))();
      }
    }
    plVar10 = plStack_110;
    lVar19 = lVar19 + -0x10;
  } while (lVar19 != 0x18);
  if (plStack_110 != (longlong *)0x0) {
    LOCK();
    plVar17 = plStack_110 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
      (**(code **)*plStack_110)(plStack_110);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
LAB_14011e8a4:
  if (local_148 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_148 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*local_148)(local_148);
      LOCK();
      piVar1 = (int *)((longlong)local_148 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_148 + 0x10))(local_148);
      }
    }
  }
  if ((alStack_e8[0xf] ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar12;
}



// FUNCTION 14011ecb7 FUN_14011ecb7 body=248 status=ok
// SIG undefined FUN_14011ecb7(void)

void FUN_14011ecb7(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  
  if ((*(uint *)(param_1 + 8) & 1) != 0) {
    FUN_144b3d9c0(param_1,param_2,param_2);
    return;
  }
  if ((*(uint *)(param_1 + 8) & 2) != 0) {
    if ((longlong)*(int *)(param_1 + 0x28) < 1) {
      iVar8 = -1;
    }
    else {
      iVar5 = param_2 * 0x40;
      piVar6 = (int *)(*(longlong *)(param_1 + 0x30) + 0xc);
      lVar9 = 0;
      iVar7 = -1;
      iVar10 = 0;
      do {
        iVar1 = *piVar6;
        iVar8 = (int)lVar9;
        if (iVar1 == iVar5) break;
        iVar2 = iVar8;
        iVar3 = iVar1;
        if (iVar7 != -1) {
          iVar2 = iVar7;
          iVar3 = iVar10;
          if (iVar10 < iVar5) {
            if (iVar10 < iVar1) {
              iVar2 = iVar8;
              iVar3 = iVar1;
            }
          }
          else if ((iVar5 < iVar10) && (iVar1 < iVar10 && iVar5 < iVar1)) {
            iVar2 = iVar8;
            iVar3 = iVar1;
          }
        }
        iVar10 = iVar3;
        iVar7 = iVar2;
        lVar9 = lVar9 + 1;
        piVar6 = piVar6 + 4;
        iVar8 = iVar7;
      } while (*(int *)(param_1 + 0x28) != lVar9);
    }
    FUN_144b54bf0(param_1,iVar8);
    uVar4 = FUN_144b555e0(param_2 << 0x10,
                          *(int *)(*(longlong *)(param_1 + 0x30) + 0xc + (longlong)iVar8 * 0x10) <<
                          10);
    *(undefined4 *)(*(longlong *)(param_1 + 0x80) + 0x1c) = uVar4;
    *(undefined4 *)(*(longlong *)(param_1 + 0x80) + 0x20) = uVar4;
  }
  return;
}



// FUNCTION 14011edb0 FUN_14011edb0 body=437 status=ok
// SIG undefined FUN_14011edb0(void)

void FUN_14011edb0(void *param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  void *_Src;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    uVar7 = 0;
  }
  else if (param_2 < 7) {
    uVar7 = 6;
  }
  else {
    uVar3 = (longlong)(int)param_2 * 2;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar7 = uVar3 + 0xf;
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
        }
        else {
          if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar7 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar8 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14011ee27;
              lVar1 = uVar5 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar7 & 0xfffffffffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,0);
      }
    }
LAB_14011ee27:
    uVar7 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar3 >> 1)) {
      uVar7 = uVar3 >> 1 & 0xffffffff;
    }
  }
  uVar6 = (uint)uVar7;
  if (uVar6 == *(uint *)((longlong)param_1 + 0x1c)) {
    return;
  }
  *(uint *)((longlong)param_1 + 0x1c) = uVar6;
  iVar4 = *(int *)((longlong)param_1 + 0x18);
  _Src = *(void **)((longlong)param_1 + 0x10);
  if (uVar6 < 7) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)iVar4 * 2);
    iVar4 = 0;
    uVar7 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x10,0,uVar7,2);
    memmove(*(void **)((longlong)param_1 + 0x10),param_1,(longlong)iVar4 * 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x10,iVar4,uVar7,2);
  return;
}



// FUNCTION 14011ef66 FUN_14011ef66 body=1955 status=ok
// SIG undefined FUN_14011ef66(void)

void FUN_14011ef66(longlong *param_1,int *param_2,undefined8 *param_3)

{
  uint *puVar1;
  ulonglong *puVar2;
  int *piVar3;
  ulonglong *puVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  ulonglong uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  longlong *plVar16;
  ulonglong uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  longlong lVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  ulonglong uVar25;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar19 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar19 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar19) {
      FUN_1403951a8(param_1,iVar19);
    }
    iVar9 = (int)param_1[5];
    if (iVar9 == 0) {
      iVar5 = -1;
    }
    else {
      iVar5 = iVar9 + 0x1e;
      if (-1 < iVar9 + -1) {
        iVar5 = iVar9 + -1;
      }
      iVar5 = iVar5 >> 5;
    }
    plVar7 = param_1 + 2;
    iVar10 = iVar9 + 1;
    iVar14 = iVar9 + 0x1f;
    if (-1 < iVar9) {
      iVar14 = iVar9;
    }
    if (iVar14 >> 5 == iVar5) {
      *(int *)(param_1 + 5) = iVar10;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar9) {
        if (iVar9 + 0x20U < 0xa0) {
          iVar10 = 0x80;
          iVar5 = iVar9;
        }
        else {
          uVar18 = iVar9 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar13 = 4;
            if (4 < uVar18) {
              uVar13 = uVar18;
            }
          }
          else {
            uVar13 = (uVar18 * 3 >> 3) + uVar18 + 0x10;
          }
          uVar12 = FUN_144a3809e(uVar13 << 2,0);
          iVar5 = (int)(uVar12 >> 2);
          iVar10 = -0x20;
          if ((int)uVar18 <= iVar5) {
            iVar10 = iVar5 << 5;
          }
          iVar5 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar10;
        FUN_1446efbd8(plVar7,iVar5);
        iVar10 = (int)param_1[5] + 1;
      }
      iVar5 = iVar10 + 0x1f;
      if (-1 < iVar10) {
        iVar5 = iVar10;
      }
      *(int *)(param_1 + 5) = iVar10;
      if (iVar10 % 0x20 != 0) {
        plVar16 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar16 = plVar7;
        }
        bVar8 = -(char)(iVar10 % 0x20);
        *(uint *)((longlong)plVar16 + (longlong)(iVar5 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar16 + (longlong)(iVar5 >> 5) * 4) << (bVar8 & 0x1f)) >>
             (bVar8 & 0x1f);
      }
    }
    lVar6 = (longlong)iVar19;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[4];
    }
    bVar8 = (byte)iVar9 & 0x1f;
    puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar14 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar8 | 0xfffffffeU >> 0x20 - bVar8);
  }
  else {
    iVar19 = (int)param_1[6];
    lVar6 = (longlong)iVar19;
    iVar9 = *(int *)(*param_1 + 4 + lVar6 * 0x18);
    *(int *)(param_1 + 6) = iVar9;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar9 * 0x18) = 0xffffffff;
    }
  }
  puVar1 = (uint *)(param_1 + 2);
  puVar11 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar11 = puVar1;
  }
  iVar9 = iVar19 + 0x1f;
  if (-1 < iVar19) {
    iVar9 = iVar19;
  }
  puVar11[iVar9 >> 5] = puVar11[iVar9 >> 5] | 1 << ((byte)iVar19 & 0x1f);
  uVar18 = 1;
  puVar2 = (ulonglong *)(*param_1 + lVar6 * 0x18);
  puVar4 = (ulonglong *)param_3[1];
  uVar12 = *(ulonglong *)*param_3;
  *puVar2 = uVar12;
  puVar2[1] = *puVar4;
  *(int *)(puVar2 + 2) = -1;
  iVar9 = (int)uVar12;
  uVar13 = (uint)(uVar12 >> 0xd) & 0x7ffff ^ -iVar9;
  uVar20 = uVar13 << 8 ^ (-0x61c88647 - uVar13) - iVar9;
  uVar22 = uVar20 >> 0xd ^ (iVar9 - uVar13) - uVar20;
  uVar23 = uVar22 >> 0xc ^ (uVar13 - uVar20) - uVar22;
  uVar13 = uVar23 << 0x10 ^ (uVar20 - uVar22) - uVar23;
  uVar22 = uVar13 >> 5 ^ (uVar22 - uVar23) - uVar13;
  uVar23 = uVar22 >> 3 ^ (uVar23 - uVar13) - uVar22;
  uVar13 = uVar23 << 10 ^ (uVar13 - uVar22) - uVar23;
  uVar20 = (uint)(uVar12 >> 0x20);
  uVar22 = uVar20 >> 0xd ^ (uVar13 >> 0xf ^ uVar22 - (uVar23 + uVar13)) - uVar20;
  uVar23 = uVar22 << 8 ^ (-0x61c88647 - uVar22) - uVar20;
  uVar13 = uVar23 >> 0xd ^ (uVar20 - uVar22) - uVar23;
  uVar24 = uVar13 >> 0xc ^ (uVar22 - uVar23) - uVar13;
  uVar22 = uVar24 << 0x10 ^ (uVar23 - uVar13) - uVar24;
  uVar23 = uVar22 >> 5 ^ (uVar13 - uVar24) - uVar22;
  uVar24 = uVar23 >> 3 ^ (uVar24 - uVar22) - uVar23;
  uVar13 = uVar24 << 10 ^ (uVar22 - uVar23) - uVar24;
  uVar13 = uVar13 >> 0xf ^ uVar23 - (uVar24 + uVar13);
  uVar22 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if ((uVar22 != 0) && (uVar22 != 1)) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & uVar13) * 4);
    if (iVar5 != -1) {
      do {
        piVar3 = (int *)(*param_1 + (longlong)iVar5 * 0x18);
        if ((*piVar3 == iVar9) && (*(uint *)(*param_1 + 4 + (longlong)iVar5 * 0x18) == uVar20)) {
          iVar9 = *(int *)((longlong)puVar2 + 4);
          uVar12 = puVar2[1];
          iVar10 = *(int *)((longlong)puVar2 + 0xc);
          *piVar3 = (int)*puVar2;
          piVar3[1] = iVar9;
          piVar3[2] = (int)uVar12;
          piVar3[3] = iVar10;
          FUN_14694ffa8(param_1,iVar19);
          iVar19 = iVar5;
          goto LAB_14011f251;
        }
        iVar5 = piVar3[4];
      } while (iVar5 != -1);
    }
  }
  if (3 < uVar22) {
    uVar12 = (ulonglong)(uVar22 & 0xfffffffe) + 0xf;
    lVar6 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    uVar18 = 1 << ((byte)lVar6 & 0x1f);
  }
  if (((int)uVar22 < 1) || ((int)uVar18 <= (int)param_1[9])) {
    uVar13 = (int)param_1[9] - 1U & uVar13;
    *(uint *)((longlong)puVar2 + 0x14) = uVar13;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)(puVar2 + 2) =
         *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4) =
         iVar19;
    goto LAB_14011f251;
  }
  *(uint *)(param_1 + 9) = uVar18;
  plVar7 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar7,0,0,4);
    uVar18 = *(uint *)(param_1 + 9);
  }
  plVar16 = param_1 + 7;
  if (uVar18 == 1) {
    if (*plVar7 != 0) {
      FUN_1446efa72(plVar7,0,0,4);
    }
LAB_14011f2f7:
    uVar13 = 0;
    do {
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = plVar16;
      }
      *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar13) * 4) =
           0xffffffff;
      uVar13 = uVar13 + 1;
    } while (uVar18 != uVar13);
  }
  else {
    if (uVar18 == 0) goto LAB_14011f251;
    FUN_1446efa72(plVar7,0,uVar18,4);
    if (0 < (int)uVar18) goto LAB_14011f2f7;
  }
  iVar9 = (int)param_1[5];
  if (iVar9 == 0) {
    uVar12 = 0;
    uVar17 = 1;
    iVar5 = 0;
    iVar10 = 0;
  }
  else {
    puVar11 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar18 = *puVar11;
    if (uVar18 == 0) {
      iVar5 = iVar9 + 0x1e;
      if (-1 < iVar9 + -1) {
        iVar5 = iVar9 + -1;
      }
      uVar12 = 0;
      uVar17 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar17 = uVar12;
      }
      iVar10 = 0;
      do {
        if (uVar17 == uVar12) goto LAB_14011f251;
        iVar10 = iVar10 + 0x20;
        uVar18 = puVar11[uVar12 + 1];
        uVar12 = uVar12 + 1;
      } while (uVar18 == 0);
    }
    else {
      uVar12 = 0;
      iVar10 = 0;
    }
    uVar17 = (ulonglong)(-uVar18 & uVar18);
    uVar25 = uVar17 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar25 != 0) {
      for (; uVar25 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar5 = (iVar10 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar9 <= iVar5) {
      iVar5 = iVar9;
    }
  }
  if (iVar5 < iVar9) {
    uVar18 = 0xffffffff;
    do {
      lVar6 = *param_1;
      lVar21 = (longlong)iVar5;
      uVar13 = *(uint *)(lVar6 + lVar21 * 0x18);
      uVar20 = *(uint *)(lVar6 + 4 + lVar21 * 0x18);
      uVar23 = uVar13 >> 0xd ^ -uVar13;
      uVar22 = uVar23 << 8 ^ (-0x61c88647 - uVar13) - uVar23;
      uVar13 = uVar22 >> 0xd ^ (uVar13 - uVar23) - uVar22;
      uVar23 = uVar13 >> 0xc ^ (uVar23 - uVar22) - uVar13;
      uVar22 = uVar23 << 0x10 ^ (uVar22 - uVar13) - uVar23;
      uVar13 = uVar22 >> 5 ^ (uVar13 - uVar23) - uVar22;
      uVar23 = uVar13 >> 3 ^ (uVar23 - uVar22) - uVar13;
      uVar22 = uVar23 << 10 ^ (uVar22 - uVar13) - uVar23;
      uVar22 = uVar20 >> 0xd ^ (uVar22 >> 0xf ^ uVar13 - (uVar23 + uVar22)) - uVar20;
      uVar13 = uVar22 << 8 ^ (-0x61c88647 - uVar20) - uVar22;
      uVar20 = uVar13 >> 0xd ^ (uVar20 - uVar22) - uVar13;
      uVar22 = uVar20 >> 0xc ^ (uVar22 - uVar13) - uVar20;
      uVar13 = uVar22 << 0x10 ^ (uVar13 - uVar20) - uVar22;
      uVar20 = uVar13 >> 5 ^ (uVar20 - uVar22) - uVar13;
      uVar22 = uVar20 >> 3 ^ (uVar22 - uVar13) - uVar20;
      uVar13 = uVar22 << 10 ^ (uVar13 - uVar20) - uVar22;
      uVar25 = (longlong)(int)(uVar13 >> 0xf ^ uVar20 - (uVar22 + uVar13)) &
               (longlong)(int)param_1[9] - 1U;
      iVar9 = (int)uVar25;
      *(int *)(lVar6 + 0x14 + lVar21 * 0x18) = iVar9;
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = plVar16;
      }
      *(undefined4 *)(lVar6 + 0x10 + lVar21 * 0x18) =
           *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar25) * 4);
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = plVar16;
      }
      *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
      uVar18 = ~(uint)uVar17 & uVar18;
      puVar11 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar11 = puVar1;
      }
      iVar9 = (int)param_1[5];
      iVar5 = (int)uVar12;
      lVar6 = (longlong)iVar5;
      uVar13 = puVar11[lVar6] & uVar18;
      if (uVar13 == 0) {
        iVar14 = iVar9 + 0x1e;
        if (-1 < iVar9 + -1) {
          iVar14 = iVar9 + -1;
        }
        iVar14 = iVar14 >> 5;
        iVar15 = iVar14;
        if (iVar14 < iVar5) {
          iVar15 = iVar5;
        }
        if (iVar14 <= iVar5) break;
        lVar21 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar13 = puVar11[lVar6 + lVar21 + 1];
          if (uVar13 != 0) break;
          lVar21 = lVar21 + 1;
          if (iVar15 - lVar6 == lVar21) goto LAB_14011f251;
        }
        uVar12 = (ulonglong)(iVar5 + (int)lVar21 + 1);
        uVar18 = 0xffffffff;
      }
      uVar17 = (ulonglong)(-uVar13 & uVar13);
      uVar25 = uVar17 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar25 != 0) {
        for (; uVar25 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = (iVar10 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    } while (iVar5 < iVar9);
  }
LAB_14011f251:
  *param_2 = iVar19;
  return;
}



// FUNCTION 14011f70a FUN_14011f70a body=129 status=ok
// SIG undefined FUN_14011f70a(void)

undefined8 FUN_14011f70a(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1406d8dea(*(undefined8 *)(param_1 + 0x10),&local_28,param_2);
  if (local_28 == (undefined8 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *local_28;
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
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14011f818 FUN_14011f818 body=538 status=ok
// SIG undefined FUN_14011f818(void)

void FUN_14011f818(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
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
  uVar7 = *(uint *)(param_1 + 9);
  if (uVar7 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar7,4);
    if (0 < (int)uVar7) {
      uVar5 = 0;
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar5) * 4) =
             0xffffffff;
        uVar5 = uVar5 + 1;
      } while (uVar7 != uVar5);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] == 0) {
      uVar10 = 1;
      local_48._0_4_ = 0xffffffff;
      local_48._4_4_ = 0;
      local_58._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      uVar10 = local_58 >> 0x20;
    }
    iVar6 = (int)local_58;
    uVar7 = (uint)local_48;
    iVar8 = local_48._4_4_;
    iVar11 = local_40;
    if (local_48._4_4_ < (int)local_50[3]) {
      do {
        lVar13 = *param_1;
        lVar12 = (longlong)iVar8 * 0x50;
        uVar5 = (int)param_1[9] - 1U & (uint)*(ushort *)(lVar13 + lVar12);
        *(uint *)(lVar13 + 0x4c + lVar12) = uVar5;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(lVar13 + 0x48 + lVar12) =
             *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] - 1U & uVar5) * 4);
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + (ulonglong)((int)param_1[9] - 1U & uVar5) * 4) = iVar8;
        uVar7 = ~(uint)uVar10 & uVar7;
        plVar9 = (longlong *)local_50[2];
        if ((longlong *)local_50[2] == (longlong *)0x0) {
          plVar9 = local_50;
        }
        iVar3 = (int)local_50[3];
        lVar13 = (longlong)iVar6;
        uVar5 = *(uint *)((longlong)plVar9 + lVar13 * 4) & uVar7;
        if (uVar5 == 0) {
          iVar8 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar8 = iVar3 + -1;
          }
          iVar8 = iVar8 >> 5;
          iVar4 = iVar8;
          if (iVar8 < iVar6) {
            iVar4 = iVar6;
          }
          if (iVar8 <= iVar6) break;
          lVar12 = 0;
          while( true ) {
            iVar11 = iVar11 + 0x20;
            uVar5 = *(uint *)((longlong)plVar9 + lVar12 * 4 + lVar13 * 4 + 4);
            if (uVar5 != 0) break;
            lVar12 = lVar12 + 1;
            if (iVar4 - lVar13 == lVar12) goto LAB_14011f9ed;
          }
          iVar6 = iVar6 + (int)lVar12 + 1;
          uVar7 = 0xffffffff;
        }
        uVar10 = (ulonglong)(-uVar5 & uVar5);
        uVar2 = uVar10 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar8 = (iVar11 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      } while (iVar8 < iVar3);
    }
  }
LAB_14011f9ed:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14011fa34 FUN_14011fa34 body=215 status=ok
// SIG undefined FUN_14011fa34(void)

undefined8 * FUN_14011fa34(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  *param_1 = &PTR_FUN_14adcb320;
  FUN_14011fb0c(param_1 + 5);
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
  lVar4 = param_1[5];
  if (lVar4 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
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



// FUNCTION 14011fb0c FUN_14011fb0c body=198 status=ok
// SIG undefined FUN_14011fb0c(void)

void FUN_14011fb0c(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  *(undefined4 *)(param_1 + 2) = 0;
  lVar4 = *param_1;
  if (lVar4 != 0) {
    *param_1 = 0;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  lVar4 = param_1[1];
  if (lVar4 != 0) {
    param_1[1] = 0;
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
  return;
}



// FUNCTION 14011fbd2 FUN_14011fbd2 body=76 status=ok
// SIG undefined FUN_14011fbd2(void)

undefined8 FUN_14011fbd2(undefined8 param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_14011fc22(param_2);
  if ((lVar1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x40), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    plVar2 = (longlong *)(lVar1 + 0x60);
    if (*(longlong **)(lVar1 + 0x50) != (longlong *)0x0) {
      plVar2 = *(longlong **)(lVar1 + 0x50);
    }
    uVar3 = (**(code **)(*plVar2 + 8))(plVar2);
                    /* WARNING: Could not recover jumptable at 0x00014011fc13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar3);
    return uVar3;
  }
  return 0;
}



// FUNCTION 14011fc22 FUN_14011fc22 body=191 status=ok
// SIG undefined FUN_14011fc22(void)

longlong FUN_14011fc22(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined *puVar7;
  
  FUN_14011fce2();
  lVar3 = *param_1;
  if (DAT_14cb7e918 != DAT_14cb7e944) {
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar6 = (uint)lVar3 & 0xffff;
    puVar7 = &DAT_14cb7e948;
    if (DAT_14cb7e950 != (undefined *)0x0) {
      puVar7 = DAT_14cb7e950;
    }
    iVar2 = *(int *)(puVar7 + (ulonglong)
                              (DAT_14cb7e958 - 1U &
                              (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar6) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar6 >> 4)) * 4);
    while (iVar2 != -1) {
      plVar1 = (longlong *)(DAT_14cb7e910 + (longlong)iVar2 * 0x18);
      if (*plVar1 == lVar3) {
        if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
          return plVar1[1];
        }
        break;
      }
      iVar2 = (int)plVar1[2];
    }
  }
  lVar5 = DAT_14cb7e908;
  if (lVar3 != 0) {
    lVar5 = 0;
  }
  return lVar5;
}



// FUNCTION 14011fce2 FUN_14011fce2 body=157 status=ok
// SIG undefined FUN_14011fce2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14011fce2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb7e960) {
    FUN_144b3d300(&DAT_14cb7e960);
    if (DAT_14cb7e960 == -1) {
      DAT_14cb7e930 = 0;
      DAT_14cb7e938 = 0;
      DAT_14cb7e910 = 0;
      _DAT_14cb7e918 = 0;
      _DAT_14cb7e93c = 0xffffffff00000080;
      DAT_14cb7e944 = 0;
      DAT_14cb7e950 = 0;
      DAT_14cb7e958 = 0;
      atexit(FUN_143d63841);
      _Init_thread_footer(&DAT_14cb7e960);
    }
  }
  return &DAT_14cb7e910;
}



// FUNCTION 14011fd80 FUN_14011fd80 body=301 status=ok
// SIG undefined FUN_14011fd80(void)

void FUN_14011fd80(longlong param_1)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_48 [40];
  char *local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14011ff66();
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
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
    local_20 = "Niagara";
    local_18 = 7;
    local_14 = 0;
    uVar3 = FUN_14001a6c0(&local_20,1);
    cVar2 = FUN_14011feae(&DAT_14c874628,uVar3);
    if (cVar2 == '\0') {
      local_20 = (char *)0x0;
      FUN_14485c47a(&local_20,param_1);
      uVar1 = DAT_14cb43628;
      lVar4 = (longlong)(int)DAT_14cb43628;
      DAT_14cb43628 = DAT_14cb43628 + 1;
      if (DAT_14cb4362c < DAT_14cb43628) {
        FUN_1481f7cc6(uVar1);
      }
      *(char **)(DAT_14cb43620 + lVar4 * 8) = local_20;
    }
    else {
      FUN_14011fffe(param_1);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14011feae FUN_14011feae body=182 status=ok
// SIG undefined FUN_14011feae(void)

ulonglong FUN_14011feae(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *unaff_RDI;
  ulonglong uVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144830a4e(param_1,&local_30,param_2);
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
    unaff_RDI = local_28;
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
  }
  if ((local_30 == 0) ||
     (uVar3 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1), *(longlong *)(local_30 + 0x28) == 0)) {
    uVar3 = 0;
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14011ff66 FUN_14011ff66 body=151 status=ok
// SIG undefined FUN_14011ff66(void)

void FUN_14011ff66(longlong param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(**(longlong **)(param_1 + 0x10) + 0x390);
  if (pcVar1 != (code *)&LAB_1427dd5fe) {
    (*pcVar1)(*(longlong **)(param_1 + 0x10),param_1,0x1427dd501,0,0);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951808) {
    FUN_144b3d300(&DAT_14c951808);
    if (DAT_14c951808 == -1) {
      FUN_145dfc00c(&DAT_14c951778);
      atexit((_func_5014 *)&LAB_142809c19);
      _Init_thread_footer(&DAT_14c951808);
      return;
    }
  }
  return;
}



// FUNCTION 14011fffe FUN_14011fffe body=3795 status=ok
// SIG undefined FUN_14011fffe(void)

void FUN_14011fffe(longlong param_1)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined1 local_33;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(longlong *)(param_1 + 0x148) == 0) {
    FUN_140120ed2(&local_68,&DAT_14cb41b58);
    *(undefined4 *)(param_1 + 0x130) = (undefined4)uStack_60;
    *(undefined8 *)(param_1 + 0x128) = local_68;
    if ((undefined8 *)(param_1 + 0x128) != &local_68) {
      if (*(longlong *)(param_1 + 0x138) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x138) = local_58;
      local_58 = 0;
      *(undefined4 *)(param_1 + 0x140) = (undefined4)local_50;
      *(undefined4 *)(param_1 + 0x144) = local_50._4_4_;
      local_50 = 0;
    }
    *(undefined4 *)(param_1 + 0x158) = local_38;
    *(undefined4 *)(param_1 + 0x148) = local_48;
    *(undefined4 *)(param_1 + 0x14c) = uStack_44;
    *(undefined4 *)(param_1 + 0x150) = uStack_40;
    *(undefined4 *)(param_1 + 0x154) = uStack_3c;
    *(undefined1 *)(param_1 + 0x15c) = local_34;
    *(undefined1 *)(param_1 + 0x15d) = local_33;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_140120ed2(&local_68,&DAT_14cb41c38);
    *(undefined4 *)(param_1 + 0x168) = (undefined4)uStack_60;
    *(undefined8 *)(param_1 + 0x160) = local_68;
    if ((undefined8 *)(param_1 + 0x160) != &local_68) {
      if (*(longlong *)(param_1 + 0x170) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x170) = local_58;
      local_58 = 0;
      *(undefined4 *)(param_1 + 0x178) = (undefined4)local_50;
      *(undefined4 *)(param_1 + 0x17c) = local_50._4_4_;
      local_50 = 0;
    }
    *(undefined4 *)(param_1 + 400) = local_38;
    *(undefined4 *)(param_1 + 0x180) = local_48;
    *(undefined4 *)(param_1 + 0x184) = uStack_44;
    *(undefined4 *)(param_1 + 0x188) = uStack_40;
    *(undefined4 *)(param_1 + 0x18c) = uStack_3c;
    *(undefined1 *)(param_1 + 0x194) = local_34;
    *(undefined1 *)(param_1 + 0x195) = local_33;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_140120ed2(&local_68,&DAT_14cb41c18);
    *(undefined4 *)(param_1 + 0x1a0) = (undefined4)uStack_60;
    *(undefined8 *)(param_1 + 0x198) = local_68;
    if ((undefined8 *)(param_1 + 0x198) != &local_68) {
      if (*(longlong *)(param_1 + 0x1a8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x1a8) = local_58;
      local_58 = 0;
      *(undefined4 *)(param_1 + 0x1b0) = (undefined4)local_50;
      *(undefined4 *)(param_1 + 0x1b4) = local_50._4_4_;
      local_50 = 0;
    }
    *(undefined4 *)(param_1 + 0x1c8) = local_38;
    *(undefined4 *)(param_1 + 0x1b8) = local_48;
    *(undefined4 *)(param_1 + 0x1bc) = uStack_44;
    *(undefined4 *)(param_1 + 0x1c0) = uStack_40;
    *(undefined4 *)(param_1 + 0x1c4) = uStack_3c;
    *(undefined1 *)(param_1 + 0x1cc) = local_34;
    *(undefined1 *)(param_1 + 0x1cd) = local_33;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_140120ed2(&local_68,&DAT_14cb41c58);
    *(undefined4 *)(param_1 + 0x1d8) = (undefined4)uStack_60;
    *(undefined8 *)(param_1 + 0x1d0) = local_68;
    if ((undefined8 *)(param_1 + 0x1d0) != &local_68) {
      if (*(longlong *)(param_1 + 0x1e0) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x1e0) = local_58;
      local_58 = 0;
      *(undefined4 *)(param_1 + 0x1e8) = (undefined4)local_50;
      *(undefined4 *)(param_1 + 0x1ec) = local_50._4_4_;
      local_50 = 0;
    }
    *(undefined4 *)(param_1 + 0x200) = local_38;
    *(undefined4 *)(param_1 + 0x1f0) = local_48;
    *(undefined4 *)(param_1 + 500) = uStack_44;
    *(undefined4 *)(param_1 + 0x1f8) = uStack_40;
    *(undefined4 *)(param_1 + 0x1fc) = uStack_3c;
    *(undefined1 *)(param_1 + 0x204) = local_34;
    *(undefined1 *)(param_1 + 0x205) = local_33;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_140120ed2(&local_68,&DAT_14cb41c98);
    *(undefined4 *)(param_1 + 0x210) = (undefined4)uStack_60;
    *(undefined8 *)(param_1 + 0x208) = local_68;
    if ((undefined8 *)(param_1 + 0x208) != &local_68) {
      if (*(longlong *)(param_1 + 0x218) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x218) = local_58;
      local_58 = 0;
      *(undefined4 *)(param_1 + 0x220) = (undefined4)local_50;
      *(undefined4 *)(param_1 + 0x224) = local_50._4_4_;
      local_50 = 0;
    }
    *(undefined4 *)(param_1 + 0x238) = local_38;
    *(undefined4 *)(param_1 + 0x228) = local_48;
    *(undefined4 *)(param_1 + 0x22c) = uStack_44;
    *(undefined4 *)(param_1 + 0x230) = uStack_40;
    *(undefined4 *)(param_1 + 0x234) = uStack_3c;
    *(undefined1 *)(param_1 + 0x23c) = local_34;
    *(undefined1 *)(param_1 + 0x23d) = local_33;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_140120ed2(&local_68,&DAT_14cb41cb8);
    *(undefined4 *)(param_1 + 0x248) = (undefined4)uStack_60;
    *(undefined8 *)(param_1 + 0x240) = local_68;
    if ((undefined8 *)(param_1 + 0x240) != &local_68) {
      if (*(longlong *)(param_1 + 0x250) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x250) = local_58;
      local_58 = 0;
      *(undefined4 *)(param_1 + 600) = (undefined4)local_50;
      *(undefined4 *)(param_1 + 0x25c) = local_50._4_4_;
      local_50 = 0;
    }
    *(undefined4 *)(param_1 + 0x270) = local_38;
    *(undefined4 *)(param_1 + 0x260) = local_48;
    *(undefined4 *)(param_1 + 0x264) = uStack_44;
    *(undefined4 *)(param_1 + 0x268) = uStack_40;
    *(undefined4 *)(param_1 + 0x26c) = uStack_3c;
    *(undefined1 *)(param_1 + 0x274) = local_34;
    *(undefined1 *)(param_1 + 0x275) = local_33;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_140120ed2(&local_68,&DAT_14cb41cd8);
    *(undefined4 *)(param_1 + 0x280) = (undefined4)uStack_60;
    *(undefined8 *)(param_1 + 0x278) = local_68;
    if ((undefined8 *)(param_1 + 0x278) != &local_68) {
      if (*(longlong *)(param_1 + 0x288) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x288) = local_58;
      local_58 = 0;
      *(undefined4 *)(param_1 + 0x290) = (undefined4)local_50;
      *(undefined4 *)(param_1 + 0x294) = local_50._4_4_;
      local_50 = 0;
    }
    *(undefined4 *)(param_1 + 0x2a8) = local_38;
    *(undefined4 *)(param_1 + 0x298) = local_48;
    *(undefined4 *)(param_1 + 0x29c) = uStack_44;
    *(undefined4 *)(param_1 + 0x2a0) = uStack_40;
    *(undefined4 *)(param_1 + 0x2a4) = uStack_3c;
    *(undefined1 *)(param_1 + 0x2ac) = local_34;
    *(undefined1 *)(param_1 + 0x2ad) = local_33;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_140120ed2(&local_68,&DAT_14cb41cf8);
    *(undefined4 *)(param_1 + 0x2b8) = (undefined4)uStack_60;
    *(undefined8 *)(param_1 + 0x2b0) = local_68;
    if ((undefined8 *)(param_1 + 0x2b0) != &local_68) {
      if (*(longlong *)(param_1 + 0x2c0) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x2c0) = local_58;
      local_58 = 0;
      *(undefined4 *)(param_1 + 0x2c8) = (undefined4)local_50;
      *(undefined4 *)(param_1 + 0x2cc) = local_50._4_4_;
      local_50 = 0;
    }
    *(undefined4 *)(param_1 + 0x2e0) = local_38;
    *(undefined4 *)(param_1 + 0x2d0) = local_48;
    *(undefined4 *)(param_1 + 0x2d4) = uStack_44;
    *(undefined4 *)(param_1 + 0x2d8) = uStack_40;
    *(undefined4 *)(param_1 + 0x2dc) = uStack_3c;
    *(undefined1 *)(param_1 + 0x2e4) = local_34;
    *(undefined1 *)(param_1 + 0x2e5) = local_33;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_140120ed2(&local_68,&DAT_14cb41d18);
    *(undefined4 *)(param_1 + 0x2f0) = (undefined4)uStack_60;
    *(undefined8 *)(param_1 + 0x2e8) = local_68;
    if ((undefined8 *)(param_1 + 0x2e8) != &local_68) {
      if (*(longlong *)(param_1 + 0x2f8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x2f8) = local_58;
      local_58 = 0;
      *(undefined4 *)(param_1 + 0x300) = (undefined4)local_50;
      *(undefined4 *)(param_1 + 0x304) = local_50._4_4_;
      local_50 = 0;
    }
    *(undefined4 *)(param_1 + 0x318) = local_38;
    *(undefined4 *)(param_1 + 0x308) = local_48;
    *(undefined4 *)(param_1 + 0x30c) = uStack_44;
    *(undefined4 *)(param_1 + 0x310) = uStack_40;
    *(undefined4 *)(param_1 + 0x314) = uStack_3c;
    *(undefined1 *)(param_1 + 0x31c) = local_34;
    *(undefined1 *)(param_1 + 0x31d) = local_33;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_140120ed2(&local_68,&DAT_14cb41d38);
    *(undefined4 *)(param_1 + 0x328) = (undefined4)uStack_60;
    *(undefined8 *)(param_1 + 800) = local_68;
    if ((undefined8 *)(param_1 + 800) != &local_68) {
      if (*(longlong *)(param_1 + 0x330) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x330) = local_58;
      local_58 = 0;
      *(undefined4 *)(param_1 + 0x338) = (undefined4)local_50;
      *(undefined4 *)(param_1 + 0x33c) = local_50._4_4_;
      local_50 = 0;
    }
    *(undefined4 *)(param_1 + 0x350) = local_38;
    *(undefined4 *)(param_1 + 0x340) = local_48;
    *(undefined4 *)(param_1 + 0x344) = uStack_44;
    *(undefined4 *)(param_1 + 0x348) = uStack_40;
    *(undefined4 *)(param_1 + 0x34c) = uStack_3c;
    *(undefined1 *)(param_1 + 0x354) = local_34;
    *(undefined1 *)(param_1 + 0x355) = local_33;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_140120ed2(&local_68,&DAT_14cb41d58);
    *(undefined4 *)(param_1 + 0x360) = (undefined4)uStack_60;
    *(undefined8 *)(param_1 + 0x358) = local_68;
    if ((undefined8 *)(param_1 + 0x358) != &local_68) {
      if (*(longlong *)(param_1 + 0x368) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x368) = local_58;
      local_58 = 0;
      *(undefined4 *)(param_1 + 0x370) = (undefined4)local_50;
      *(undefined4 *)(param_1 + 0x374) = local_50._4_4_;
      local_50 = 0;
    }
    *(undefined4 *)(param_1 + 0x388) = local_38;
    *(undefined4 *)(param_1 + 0x378) = local_48;
    *(undefined4 *)(param_1 + 0x37c) = uStack_44;
    *(undefined4 *)(param_1 + 0x380) = uStack_40;
    *(undefined4 *)(param_1 + 900) = uStack_3c;
    *(undefined1 *)(param_1 + 0x38c) = local_34;
    *(undefined1 *)(param_1 + 0x38d) = local_33;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_140120ed2(&local_68,&DAT_14cb41d78);
    *(undefined4 *)(param_1 + 0x398) = (undefined4)uStack_60;
    *(undefined8 *)(param_1 + 0x390) = local_68;
    if ((undefined8 *)(param_1 + 0x390) != &local_68) {
      if (*(longlong *)(param_1 + 0x3a0) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x3a0) = local_58;
      local_58 = 0;
      *(undefined4 *)(param_1 + 0x3a8) = (undefined4)local_50;
      *(undefined4 *)(param_1 + 0x3ac) = local_50._4_4_;
      local_50 = 0;
    }
    *(undefined4 *)(param_1 + 0x3c0) = local_38;
    *(undefined4 *)(param_1 + 0x3b0) = local_48;
    *(undefined4 *)(param_1 + 0x3b4) = uStack_44;
    *(undefined4 *)(param_1 + 0x3b8) = uStack_40;
    *(undefined4 *)(param_1 + 0x3bc) = uStack_3c;
    *(undefined1 *)(param_1 + 0x3c4) = local_34;
    *(undefined1 *)(param_1 + 0x3c5) = local_33;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_140120ed2(&local_68,&DAT_14cb41e18);
    *(undefined4 *)(param_1 + 0x3d0) = (undefined4)uStack_60;
    *(undefined8 *)(param_1 + 0x3c8) = local_68;
    if ((undefined8 *)(param_1 + 0x3c8) != &local_68) {
      if (*(longlong *)(param_1 + 0x3d8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x3d8) = local_58;
      local_58 = 0;
      *(undefined4 *)(param_1 + 0x3e0) = (undefined4)local_50;
      *(undefined4 *)(param_1 + 0x3e4) = local_50._4_4_;
      local_50 = 0;
    }
    *(undefined4 *)(param_1 + 0x3f8) = local_38;
    *(undefined4 *)(param_1 + 1000) = local_48;
    *(undefined4 *)(param_1 + 0x3ec) = uStack_44;
    *(undefined4 *)(param_1 + 0x3f0) = uStack_40;
    *(undefined4 *)(param_1 + 0x3f4) = uStack_3c;
    *(undefined1 *)(param_1 + 0x3fc) = local_34;
    *(undefined1 *)(param_1 + 0x3fd) = local_33;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_140120ed2(&local_68,&DAT_14cb41e38);
    *(undefined4 *)(param_1 + 0x408) = (undefined4)uStack_60;
    *(undefined8 *)(param_1 + 0x400) = local_68;
    if ((undefined8 *)(param_1 + 0x400) != &local_68) {
      if (*(longlong *)(param_1 + 0x410) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x410) = local_58;
      local_58 = 0;
      *(undefined4 *)(param_1 + 0x418) = (undefined4)local_50;
      *(undefined4 *)(param_1 + 0x41c) = local_50._4_4_;
      local_50 = 0;
    }
    *(undefined4 *)(param_1 + 0x430) = local_38;
    *(undefined4 *)(param_1 + 0x420) = local_48;
    *(undefined4 *)(param_1 + 0x424) = uStack_44;
    *(undefined4 *)(param_1 + 0x428) = uStack_40;
    *(undefined4 *)(param_1 + 0x42c) = uStack_3c;
    *(undefined1 *)(param_1 + 0x434) = local_34;
    *(undefined1 *)(param_1 + 0x435) = local_33;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_140120ed2(&local_68,&DAT_14cb41e58);
    *(undefined4 *)(param_1 + 0x440) = (undefined4)uStack_60;
    *(undefined8 *)(param_1 + 0x438) = local_68;
    if ((undefined8 *)(param_1 + 0x438) != &local_68) {
      if (*(longlong *)(param_1 + 0x448) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x448) = local_58;
      local_58 = 0;
      *(undefined4 *)(param_1 + 0x450) = (undefined4)local_50;
      *(undefined4 *)(param_1 + 0x454) = local_50._4_4_;
      local_50 = 0;
    }
    *(undefined4 *)(param_1 + 0x468) = local_38;
    *(undefined4 *)(param_1 + 0x458) = local_48;
    *(undefined4 *)(param_1 + 0x45c) = uStack_44;
    *(undefined4 *)(param_1 + 0x460) = uStack_40;
    *(undefined4 *)(param_1 + 0x464) = uStack_3c;
    *(undefined1 *)(param_1 + 0x46c) = local_34;
    *(undefined1 *)(param_1 + 0x46d) = local_33;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_140120ed2(&local_68,&DAT_14cb41e78);
    *(undefined4 *)(param_1 + 0x478) = (undefined4)uStack_60;
    *(undefined8 *)(param_1 + 0x470) = local_68;
    if ((undefined8 *)(param_1 + 0x470) != &local_68) {
      if (*(longlong *)(param_1 + 0x480) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x480) = local_58;
      local_58 = 0;
      *(undefined4 *)(param_1 + 0x488) = (undefined4)local_50;
      *(undefined4 *)(param_1 + 0x48c) = local_50._4_4_;
      local_50 = 0;
    }
    *(undefined4 *)(param_1 + 0x4a0) = local_38;
    *(undefined4 *)(param_1 + 0x490) = local_48;
    *(undefined4 *)(param_1 + 0x494) = uStack_44;
    *(undefined4 *)(param_1 + 0x498) = uStack_40;
    *(undefined4 *)(param_1 + 0x49c) = uStack_3c;
    *(undefined1 *)(param_1 + 0x4a4) = local_34;
    *(undefined1 *)(param_1 + 0x4a5) = local_33;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_140120ed2(&local_68,&DAT_14cb41c78);
    *(undefined4 *)(param_1 + 0x4e8) = (undefined4)uStack_60;
    *(undefined8 *)(param_1 + 0x4e0) = local_68;
    if ((undefined8 *)(param_1 + 0x4e0) != &local_68) {
      if (*(longlong *)(param_1 + 0x4f0) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x4f0) = local_58;
      local_58 = 0;
      *(undefined4 *)(param_1 + 0x4f8) = (undefined4)local_50;
      *(undefined4 *)(param_1 + 0x4fc) = local_50._4_4_;
      local_50 = 0;
    }
    *(undefined4 *)(param_1 + 0x510) = local_38;
    *(undefined4 *)(param_1 + 0x500) = local_48;
    *(undefined4 *)(param_1 + 0x504) = uStack_44;
    *(undefined4 *)(param_1 + 0x508) = uStack_40;
    *(undefined4 *)(param_1 + 0x50c) = uStack_3c;
    *(undefined1 *)(param_1 + 0x514) = local_34;
    *(undefined1 *)(param_1 + 0x515) = local_33;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_140120ed2(&local_68,&DAT_14cb413f8);
    *(undefined4 *)(param_1 + 0x520) = (undefined4)uStack_60;
    *(undefined8 *)(param_1 + 0x518) = local_68;
    if ((undefined8 *)(param_1 + 0x518) != &local_68) {
      if (*(longlong *)(param_1 + 0x528) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x528) = local_58;
      local_58 = 0;
      *(undefined4 *)(param_1 + 0x530) = (undefined4)local_50;
      *(undefined4 *)(param_1 + 0x534) = local_50._4_4_;
      local_50 = 0;
    }
    *(undefined4 *)(param_1 + 0x548) = local_38;
    *(undefined4 *)(param_1 + 0x538) = local_48;
    *(undefined4 *)(param_1 + 0x53c) = uStack_44;
    *(undefined4 *)(param_1 + 0x540) = uStack_40;
    *(undefined4 *)(param_1 + 0x544) = uStack_3c;
    *(undefined1 *)(param_1 + 0x54c) = local_34;
    *(undefined1 *)(param_1 + 0x54d) = local_33;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_140120ed2(&local_68,&DAT_14cb41308);
    *(undefined4 *)(param_1 + 0x4b0) = (undefined4)uStack_60;
    *(undefined8 *)(param_1 + 0x4a8) = local_68;
    if ((undefined8 *)(param_1 + 0x4a8) != &local_68) {
      if (*(longlong *)(param_1 + 0x4b8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x4b8) = local_58;
      local_58 = 0;
      *(undefined4 *)(param_1 + 0x4c0) = (undefined4)local_50;
      *(undefined4 *)(param_1 + 0x4c4) = local_50._4_4_;
      local_50 = 0;
    }
    *(undefined4 *)(param_1 + 0x4d8) = local_38;
    *(undefined4 *)(param_1 + 0x4c8) = local_48;
    *(undefined4 *)(param_1 + 0x4cc) = uStack_44;
    *(undefined4 *)(param_1 + 0x4d0) = uStack_40;
    *(undefined4 *)(param_1 + 0x4d4) = uStack_3c;
    *(undefined1 *)(param_1 + 0x4dc) = local_34;
    *(undefined1 *)(param_1 + 0x4dd) = local_33;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  FUN_140349b00(param_1,&local_68,*(undefined1 *)(param_1 + 0xe0));
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140120ed2 FUN_140120ed2 body=137 status=ok
// SIG undefined FUN_140120ed2(void)

undefined8 FUN_140120ed2(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [16];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb3a3e0 == DAT_14cb3a40c) {
    FUN_1439f8e86();
  }
  FUN_140120f5c(param_1);
  FUN_14012126a(local_40,param_2);
  FUN_140120fb8(param_1,param_2,local_40,0);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140120f5c FUN_140120f5c body=92 status=ok
// SIG undefined FUN_140120f5c(void)

undefined8 * FUN_140120f5c(undefined8 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  uVar1 = FUN_144830b78(param_1 + 1,&DAT_14cb42160);
  *(undefined4 *)(param_1 + 1) = uVar1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  uVar1 = FUN_144830b78(param_1 + 5,&DAT_14cb42160);
  *(undefined4 *)(param_1 + 5) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  *(byte *)((longlong)param_1 + 0x35) = *(byte *)((longlong)param_1 + 0x35) & 0xfc | 2;
  return param_1;
}



// FUNCTION 140120fb8 FUN_140120fb8 body=382 status=ok
// SIG undefined FUN_140120fb8(void)

void FUN_140120fb8(undefined8 *param_1,undefined8 *param_2,longlong param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  void *_Src;
  short sVar3;
  ushort uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar2 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = uVar2;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  param_1[2] = 0;
  param_1[3] = 0;
  iVar1 = *(int *)(param_3 + 0x18);
  if (0 < iVar1) {
    plVar5 = (longlong *)FUN_144741050(param_3 + 8);
    uVar4 = *(ushort *)((longlong)plVar5 + 0xc);
    if (uVar4 == 0xffff) {
      uVar4 = 0;
      if ((*plVar5 != 0) && (uVar4 = 0, (short)plVar5[1] != 1)) {
        lVar7 = FUN_144a811ba(plVar5);
        sVar3 = (short)*(undefined4 *)(lVar7 + 0x5c);
        uVar4 = -sVar3 & ((short)*(undefined4 *)(lVar7 + 0x58) + sVar3) - 1U;
      }
      *(ushort *)((longlong)plVar5 + 0xc) = uVar4;
    }
    if (iVar1 == (short)uVar4) {
      plVar5 = (longlong *)FUN_144741050(param_3 + 8);
      plVar6 = (longlong *)FUN_144741050(param_2 + 1);
      lVar7 = *plVar6;
      if ((lVar7 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar7);
      }
      if (((*plVar5 == lVar7) && ((short)plVar5[1] == (short)plVar6[1])) &&
         (*(char *)((longlong)plVar5 + 10) == *(char *)((longlong)plVar6 + 10))) {
        _Src = *(void **)(param_3 + 0x10);
        FUN_140121138(param_1);
        memcpy((void *)param_1[2],_Src,(longlong)*(int *)(param_1 + 3));
      }
    }
  }
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  FUN_140121554(param_1,param_2,&local_78,param_4);
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140121138 FUN_140121138 body=190 status=ok
// SIG undefined FUN_140121138(void)

void FUN_140121138(longlong param_1)

{
  int iVar1;
  short sVar2;
  ushort uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x18);
  plVar4 = (longlong *)FUN_144741050(param_1 + 8);
  uVar3 = *(ushort *)((longlong)plVar4 + 0xc);
  if (uVar3 == 0xffff) {
    uVar3 = 0;
    if ((*plVar4 != 0) && (uVar3 = 0, (short)plVar4[1] != 1)) {
      lVar5 = FUN_144a811ba(plVar4);
      sVar2 = (short)*(undefined4 *)(lVar5 + 0x5c);
      uVar3 = -sVar2 & ((short)*(undefined4 *)(lVar5 + 0x58) + sVar2) - 1U;
    }
    *(ushort *)((longlong)plVar4 + 0xc) = uVar3;
  }
  if (iVar1 != (short)uVar3) {
    plVar4 = (longlong *)FUN_144741050(param_1 + 8);
    uVar3 = *(ushort *)((longlong)plVar4 + 0xc);
    if (uVar3 == 0xffff) {
      uVar3 = 0;
      if ((*plVar4 != 0) && (uVar3 = 0, (short)plVar4[1] != 1)) {
        lVar5 = FUN_144a811ba(plVar4);
        sVar2 = (short)*(undefined4 *)(lVar5 + 0x5c);
        uVar3 = -sVar2 & ((short)*(undefined4 *)(lVar5 + 0x58) + sVar2) - 1U;
      }
      *(ushort *)((longlong)plVar4 + 0xc) = uVar3;
    }
    FUN_1401211f6(param_1 + 0x10,(int)(short)uVar3,1);
    return;
  }
  return;
}



// FUNCTION 1401211f6 FUN_1401211f6 body=114 status=ok
// SIG undefined FUN_1401211f6(void)

void FUN_1401211f6(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1447403be(param_1);
    }
    memset((void *)((longlong)iVar1 + *param_1),0,(longlong)(param_2 - iVar1));
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_140b3f66e(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14012126a FUN_14012126a body=745 status=ok
// SIG undefined FUN_14012126a(void)

longlong * FUN_14012126a(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  ushort uVar2;
  longlong lVar3;
  void *_Src;
  uint uVar4;
  undefined4 uVar5;
  ulonglong *puVar6;
  undefined *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  lVar3 = *param_2;
  puVar6 = (ulonglong *)FUN_144741050(param_2 + 1);
  if (DAT_14cb3a3e0 != DAT_14cb3a40c) {
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar10 = (uint)lVar3 & 0xffff;
    uVar9 = (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar10) +
            (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar10 >> 4);
    uVar2 = (ushort)puVar6[1];
    uVar4 = ((uint)(*puVar6 >> 0x14) & 0xffff ^ (uint)(*puVar6 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    uVar4 = (uint)(uVar2 >> 0xd) ^ (uVar4 >> 0x10 ^ uVar4) - (uint)uVar2;
    uVar10 = uVar4 << 8 ^ (-0x61c88647 - uVar4) - (uint)uVar2;
    uVar11 = uVar10 >> 0xd ^ (uVar2 - uVar4) - uVar10;
    uVar4 = uVar11 >> 0xc ^ (uVar4 - uVar10) - uVar11;
    uVar10 = uVar4 << 0x10 ^ (uVar10 - uVar11) - uVar4;
    uVar11 = uVar10 >> 5 ^ (uVar11 - uVar4) - uVar10;
    uVar12 = uVar11 >> 3 ^ (uVar4 - uVar10) - uVar11;
    uVar4 = uVar12 << 10 ^ (uVar10 - uVar11) - uVar12;
    uVar4 = uVar4 >> 0xf ^ uVar11 - (uVar12 + uVar4);
    iVar8 = uVar4 - *(byte *)((longlong)puVar6 + 10);
    uVar10 = iVar8 * 0x100 ^ 0x9e3779b9 - uVar4;
    uVar11 = uVar10 >> 0xd ^ ((uint)*(byte *)((longlong)puVar6 + 10) - iVar8) - uVar10;
    uVar4 = uVar11 >> 0xc ^ (iVar8 - uVar10) - uVar11;
    uVar10 = uVar4 << 0x10 ^ (uVar10 - uVar11) - uVar4;
    uVar12 = uVar10 >> 5 ^ (uVar11 - uVar4) - uVar10;
    uVar11 = uVar12 >> 3 ^ (uVar4 - uVar10) - uVar12;
    uVar4 = uVar11 << 10 ^ (uVar10 - uVar12) - uVar11;
    uVar11 = uVar9 >> 0xd ^ (uVar4 >> 0xf ^ uVar12 - (uVar11 + uVar4)) - uVar9;
    uVar10 = uVar11 << 8 ^ (-0x61c88647 - uVar9) - uVar11;
    uVar4 = uVar10 >> 0xd ^ (uVar9 - uVar11) - uVar10;
    uVar9 = uVar4 >> 0xc ^ (uVar11 - uVar10) - uVar4;
    uVar11 = uVar9 << 0x10 ^ (uVar10 - uVar4) - uVar9;
    uVar10 = uVar11 >> 5 ^ (uVar4 - uVar9) - uVar11;
    uVar4 = uVar10 >> 3 ^ (uVar9 - uVar11) - uVar10;
    uVar11 = uVar4 << 10 ^ (uVar11 - uVar10) - uVar4;
    puVar7 = &DAT_14cb3a410;
    if (DAT_14cb3a418 != (undefined *)0x0) {
      puVar7 = DAT_14cb3a418;
    }
    iVar8 = *(int *)(puVar7 + (ulonglong)
                              (DAT_14cb3a420 - 1U & (uVar11 >> 0xf ^ uVar10 - (uVar4 + uVar11))) * 4
                    );
    if (iVar8 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb3a3d8 + (longlong)iVar8 * 0x48);
        if ((*plVar1 == *param_2) &&
           (*(int *)(DAT_14cb3a3d8 + 8 + (longlong)iVar8 * 0x48) == (int)param_2[1])) {
          if ((plVar1 != (longlong *)0x0) && (plVar1 + 4 != (longlong *)0x0)) {
            *(int *)(param_1 + 1) = (int)plVar1[5];
            *param_1 = plVar1[4];
            param_1[2] = 0;
            iVar8 = (int)plVar1[7];
            _Src = (void *)plVar1[6];
            *(int *)(param_1 + 3) = iVar8;
            if ((longlong)iVar8 != 0) {
              FUN_1447a127e(param_1 + 2,iVar8,0);
              memcpy((void *)param_1[2],_Src,(longlong)iVar8);
              return param_1;
            }
            *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
            return param_1;
          }
          break;
        }
        iVar8 = (int)plVar1[8];
      } while (iVar8 != -1);
    }
  }
  *param_1 = 0;
  uVar5 = FUN_144830b78(param_1 + 1,&DAT_14cb42160);
  *(undefined4 *)(param_1 + 1) = uVar5;
  param_1[2] = 0;
  param_1[3] = 0;
  return param_1;
}



// FUNCTION 140121554 FUN_140121554 body=2900 status=ok
// SIG undefined FUN_140121554(void)

void FUN_140121554(undefined8 *param_1,undefined8 *param_2,longlong *param_3,undefined1 param_4)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  longlong lVar4;
  undefined3 uVar5;
  undefined1 *puVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  byte bVar11;
  int iVar12;
  undefined4 uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  bool bVar16;
  undefined1 auStack_8f8 [47];
  undefined1 local_8c9;
  undefined4 local_8c8;
  undefined4 local_8c4;
  longlong *local_8c0;
  undefined4 local_8b4;
  longlong local_8b0;
  undefined4 local_8a4;
  undefined8 local_8a0;
  undefined4 local_898;
  longlong local_890;
  undefined8 local_888;
  undefined1 *local_880;
  undefined1 *local_878;
  undefined1 *local_870;
  char local_868;
  undefined1 local_860 [24];
  undefined1 local_848;
  undefined8 local_840;
  undefined8 local_838;
  undefined1 local_810;
  undefined8 local_808;
  undefined8 local_800;
  undefined1 local_7d8;
  undefined1 local_4a [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_8f8;
  lVar4 = *param_3;
  local_8a0 = *param_2;
  *param_1 = local_8a0;
  uVar3 = DAT_14cb3af78;
  lVar9 = DAT_14cb3af70;
  uVar14 = (ulonglong)(DAT_14cb3af78 - 1);
  if (DAT_14cb3af78 == 0) {
    uVar14 = 0;
  }
  local_868 = '\0';
  local_870 = local_4a;
  local_8c9 = param_4;
  local_8c0 = param_3;
  local_880 = local_860;
  local_878 = local_860;
  FUN_14005eb5c(&local_8a0,&local_880);
  iVar12 = (int)uVar14;
  iVar8 = (int)((ulonglong)((longlong)local_878 - (longlong)local_880) >> 1);
  if ((iVar12 < 2) || (*(short *)(lVar9 + -2 + uVar14 * 2) != 0x2e)) {
    if (iVar8 <= iVar12 + 1) goto LAB_140121dcd;
    local_8b4 = 0;
    if ((-1 < iVar12) && (uVar14 = (ulonglong)iVar12, *(short *)(local_880 + uVar14 * 2) == 0x2e)) {
      if (1 < uVar3) goto LAB_14012198e;
      local_8b4 = 1;
    }
  }
  else if (iVar12 < iVar8) {
LAB_14012198e:
    lVar10 = 0;
LAB_140121997:
    uVar1 = *(ushort *)(lVar9 + lVar10);
    uVar2 = *(ushort *)(local_880 + lVar10);
    if (uVar1 == uVar2) {
      iVar8 = 0;
      if ((uVar1 == 0) || (uVar14 == 1)) goto LAB_1401219e8;
LAB_1401219b4:
      uVar14 = uVar14 - 1;
      lVar10 = lVar10 + 2;
      goto LAB_140121997;
    }
    if ((uVar2 | uVar1) < 0x80) {
      if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2]) {
        iVar8 = (uint)(byte)(&DAT_149e05da0)[uVar1] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
        goto LAB_1401219e8;
      }
      if (uVar14 == 1) {
        iVar8 = 0;
        goto LAB_1401219e8;
      }
      goto LAB_1401219b4;
    }
    iVar8 = (uint)uVar1 - (uint)uVar2;
LAB_1401219e8:
    local_8b4 = (undefined4)CONCAT71((int7)((ulonglong)lVar10 >> 8),iVar8 == 0);
  }
  else {
LAB_140121dcd:
    local_8b4 = 0;
  }
  if (local_868 == '\x01') {
    FUN_1400020a8();
  }
  uVar3 = DAT_14cb3b000;
  lVar9 = DAT_14cb3aff8;
  uVar14 = (ulonglong)(DAT_14cb3b000 - 1);
  if (DAT_14cb3b000 == 0) {
    uVar14 = 0;
  }
  local_8a0 = *param_1;
  local_868 = '\0';
  local_870 = local_4a;
  local_880 = local_860;
  local_878 = local_860;
  FUN_14005eb5c(&local_8a0,&local_880);
  iVar12 = (int)uVar14;
  iVar8 = (int)((ulonglong)((longlong)local_878 - (longlong)local_880) >> 1);
  if ((iVar12 < 2) || (*(short *)(lVar9 + -2 + uVar14 * 2) != 0x2e)) {
    if (iVar8 <= iVar12 + 1) goto LAB_140121ddc;
    local_8c4 = 0;
    if ((-1 < iVar12) && (*(short *)(local_880 + (longlong)iVar12 * 2) == 0x2e)) {
      uVar15 = (longlong)iVar12;
      if (1 < uVar3) goto LAB_1401219fc;
      local_8c4 = (undefined4)CONCAT71((int7)(int3)(uVar14 >> 8),1);
    }
  }
  else {
    uVar15 = uVar14;
    if (iVar12 < iVar8) {
LAB_1401219fc:
      lVar10 = 0;
LAB_140121a05:
      uVar1 = *(ushort *)(lVar9 + lVar10);
      uVar2 = *(ushort *)(local_880 + lVar10);
      uVar14 = uVar15;
      if (uVar1 == uVar2) {
        iVar8 = 0;
        if ((uVar1 == 0) || (uVar14 = 0, uVar15 == 1)) goto LAB_140121a56;
LAB_140121a22:
        uVar15 = uVar15 - 1;
        lVar10 = lVar10 + 2;
        goto LAB_140121a05;
      }
      if ((uVar2 | uVar1) < 0x80) {
        if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2]) {
          iVar8 = (uint)(byte)(&DAT_149e05da0)[uVar1] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
          goto LAB_140121a56;
        }
        if (uVar15 == 1) {
          iVar8 = 0;
          uVar14 = 0;
          goto LAB_140121a56;
        }
        goto LAB_140121a22;
      }
      iVar8 = (uint)uVar1 - (uint)uVar2;
LAB_140121a56:
      local_8c4 = (undefined4)CONCAT71((int7)(uVar14 >> 8),iVar8 == 0);
    }
    else {
LAB_140121ddc:
      local_8c4 = 0;
    }
  }
  if (local_868 == '\x01') {
    FUN_1400020a8();
  }
  local_8c8 = 0;
  if (lVar4 != 0) {
    lVar9 = *(longlong *)(lVar4 + 0x60);
    uVar3 = *(uint *)(lVar4 + 0x68);
    uVar14 = (ulonglong)(uVar3 - 1);
    if (uVar3 == 0) {
      uVar14 = 0;
    }
    local_8a0 = *param_1;
    local_868 = '\0';
    local_870 = local_4a;
    local_880 = local_860;
    local_878 = local_860;
    FUN_14005eb5c(&local_8a0,&local_880);
    iVar12 = (int)uVar14;
    iVar8 = (int)((ulonglong)((longlong)local_878 - (longlong)local_880) >> 1);
    if ((iVar12 < 2) || (*(short *)(lVar9 + -2 + uVar14 * 2) != 0x2e)) {
      if (iVar8 <= iVar12 + 1) goto LAB_140121fab;
      local_8c8 = 0;
      if ((-1 < iVar12) && (*(short *)(local_880 + (longlong)iVar12 * 2) == 0x2e)) {
        uVar15 = (longlong)iVar12;
        if (1 < uVar3) goto LAB_140121ca1;
        local_8c8 = (undefined4)CONCAT71((int7)(int3)(uVar14 >> 8),1);
      }
    }
    else {
      uVar15 = uVar14;
      if (iVar12 < iVar8) {
LAB_140121ca1:
        lVar10 = 0;
LAB_140121caa:
        uVar1 = *(ushort *)(lVar9 + lVar10);
        uVar2 = *(ushort *)(local_880 + lVar10);
        uVar14 = uVar15;
        if (uVar1 == uVar2) {
          iVar8 = 0;
          if ((uVar1 == 0) || (uVar14 = 0, uVar15 == 1)) goto LAB_140121cfc;
LAB_140121cc8:
          uVar15 = uVar15 - 1;
          lVar10 = lVar10 + 2;
          goto LAB_140121caa;
        }
        if ((uVar2 | uVar1) < 0x80) {
          if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2]) {
            iVar8 = (uint)(byte)(&DAT_149e05da0)[uVar1] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
            goto LAB_140121cfc;
          }
          if (uVar15 == 1) {
            iVar8 = 0;
            uVar14 = 0;
            goto LAB_140121cfc;
          }
          goto LAB_140121cc8;
        }
        iVar8 = (uint)uVar1 - (uint)uVar2;
LAB_140121cfc:
        local_8c8 = (undefined4)CONCAT71((int7)(uVar14 >> 8),iVar8 == 0);
      }
      else {
LAB_140121fab:
        local_8c8 = 0;
      }
    }
    if (local_868 == '\x01') {
      FUN_1400020a8();
    }
  }
  uVar3 = DAT_14cb3af88;
  lVar9 = DAT_14cb3af80;
  uVar14 = (ulonglong)(DAT_14cb3af88 - 1);
  if (DAT_14cb3af88 == 0) {
    uVar14 = 0;
  }
  local_8a0 = *param_1;
  local_868 = '\0';
  local_870 = local_4a;
  local_880 = local_860;
  local_878 = local_860;
  FUN_14005eb5c(&local_8a0,&local_880);
  iVar12 = (int)uVar14;
  iVar8 = (int)((ulonglong)((longlong)local_878 - (longlong)local_880) >> 1);
  if ((iVar12 < 2) || (*(short *)(lVar9 + -2 + uVar14 * 2) != 0x2e)) {
    if (iVar8 <= iVar12 + 1) goto LAB_140121df1;
    local_8a4 = 0;
    if ((-1 < iVar12) && (uVar14 = (ulonglong)iVar12, *(short *)(local_880 + uVar14 * 2) == 0x2e)) {
      if (1 < uVar3) goto LAB_140121a6e;
      local_8a4 = 1;
    }
  }
  else if (iVar12 < iVar8) {
LAB_140121a6e:
    lVar10 = 0;
LAB_140121a77:
    uVar1 = *(ushort *)(lVar9 + lVar10);
    uVar2 = *(ushort *)(local_880 + lVar10);
    if (uVar1 == uVar2) {
      iVar8 = 0;
      if ((uVar1 == 0) || (uVar14 == 1)) goto LAB_140121ac9;
LAB_140121a95:
      uVar14 = uVar14 - 1;
      lVar10 = lVar10 + 2;
      goto LAB_140121a77;
    }
    if ((uVar2 | uVar1) < 0x80) {
      if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2]) {
        iVar8 = (uint)(byte)(&DAT_149e05da0)[uVar1] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
        goto LAB_140121ac9;
      }
      if (uVar14 == 1) {
        iVar8 = 0;
        goto LAB_140121ac9;
      }
      goto LAB_140121a95;
    }
    iVar8 = (uint)uVar1 - (uint)uVar2;
LAB_140121ac9:
    local_8a4 = (undefined4)CONCAT71((int7)((ulonglong)lVar10 >> 8),iVar8 == 0);
  }
  else {
LAB_140121df1:
    local_8a4 = 0;
  }
  if (local_868 == '\x01') {
    FUN_1400020a8();
  }
  uVar3 = DAT_14cb3aff0;
  lVar9 = DAT_14cb3afe8;
  uVar14 = (ulonglong)(DAT_14cb3aff0 - 1);
  if (DAT_14cb3aff0 == 0) {
    uVar14 = 0;
  }
  local_8a0 = *param_1;
  local_868 = '\0';
  local_870 = local_4a;
  local_880 = local_860;
  local_878 = local_860;
  FUN_14005eb5c(&local_8a0,&local_880);
  iVar12 = (int)uVar14;
  iVar8 = (int)((ulonglong)((longlong)local_878 - (longlong)local_880) >> 1);
  if ((iVar12 < 2) || (*(short *)(lVar9 + -2 + uVar14 * 2) != 0x2e)) {
    if (iVar8 <= iVar12 + 1) goto LAB_140121e00;
    bVar16 = false;
    if ((-1 < iVar12) &&
       (uVar14 = (ulonglong)iVar12, bVar16 = false, *(short *)(local_880 + uVar14 * 2) == 0x2e)) {
      if (1 < uVar3) goto LAB_140121add;
      bVar16 = true;
    }
  }
  else if (iVar12 < iVar8) {
LAB_140121add:
    lVar10 = 0;
LAB_140121ae6:
    uVar1 = *(ushort *)(lVar9 + lVar10);
    uVar2 = *(ushort *)(local_880 + lVar10);
    if (uVar1 == uVar2) {
      iVar8 = 0;
      if ((uVar1 == 0) || (uVar14 == 1)) goto LAB_140121b38;
LAB_140121b04:
      uVar14 = uVar14 - 1;
      lVar10 = lVar10 + 2;
      goto LAB_140121ae6;
    }
    if ((uVar2 | uVar1) < 0x80) {
      if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2]) {
        iVar8 = (uint)(byte)(&DAT_149e05da0)[uVar1] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
        goto LAB_140121b38;
      }
      if (uVar14 == 1) {
        iVar8 = 0;
        goto LAB_140121b38;
      }
      goto LAB_140121b04;
    }
    iVar8 = (uint)uVar1 - (uint)uVar2;
LAB_140121b38:
    bVar16 = iVar8 == 0;
  }
  else {
LAB_140121e00:
    bVar16 = false;
  }
  local_8b0 = lVar4;
  if (local_868 == '\x01') {
    FUN_1400020a8();
  }
  uVar3 = DAT_14cb3af98;
  lVar4 = DAT_14cb3af90;
  uVar14 = (ulonglong)DAT_14cb3af98;
  uVar15 = (ulonglong)(DAT_14cb3af98 - 1);
  if (DAT_14cb3af98 == 0) {
    uVar15 = 0;
  }
  local_8a0 = *param_1;
  local_868 = '\0';
  local_870 = local_4a;
  local_880 = local_860;
  local_878 = local_860;
  FUN_14005eb5c(&local_8a0,&local_880);
  puVar6 = local_880;
  iVar12 = (int)uVar15;
  uVar5 = (undefined3)(uVar3 >> 8);
  iVar8 = (int)((ulonglong)((longlong)local_878 - (longlong)local_880) >> 1);
  if ((iVar12 < 2) || (*(short *)(lVar4 + -2 + uVar15 * 2) != 0x2e)) {
    if ((iVar8 <= iVar12 + 1) ||
       ((iVar12 < 0 || (lVar9 = (longlong)iVar12, *(short *)(local_880 + lVar9 * 2) != 0x2e))))
    goto LAB_14012189c;
    if (1 < uVar3) {
      lVar10 = 0;
LAB_140121b55:
      uVar1 = *(ushort *)(lVar4 + lVar10);
      uVar2 = *(ushort *)(local_880 + lVar10);
      if (uVar1 == uVar2) {
        uVar14 = 0;
        if ((uVar1 == 0) || (lVar9 == 1)) goto LAB_140121ba5;
LAB_140121b72:
        lVar9 = lVar9 + -1;
        lVar10 = lVar10 + 2;
        goto LAB_140121b55;
      }
      if ((uVar2 | uVar1) < 0x80) {
        if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2]) {
          uVar14 = (ulonglong)
                   ((uint)(byte)(&DAT_149e05da0)[uVar1] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar2])
          ;
          goto LAB_140121ba5;
        }
        if (lVar9 == 1) {
          uVar14 = 0;
          goto LAB_140121ba5;
        }
        goto LAB_140121b72;
      }
      uVar14 = (ulonglong)((uint)uVar1 - (uint)uVar2);
LAB_140121ba5:
      if (local_868 == '\x01') {
        FUN_1400020a8(local_880);
      }
      iVar8 = (int)uVar14;
      goto LAB_140121bb5;
    }
    if (local_868 == '\x01') {
      FUN_1400020a8(local_880);
    }
    uVar14 = (ulonglong)CONCAT31(uVar5,local_8c9);
LAB_140121bc0:
    uVar13 = (undefined4)uVar14;
    bVar11 = (byte)local_8b4;
    if ((char)uVar14 == '\x01') goto LAB_140121bce;
    if ((uVar14 & 0xff) != 0) goto LAB_140121950;
LAB_1401218bd:
    FUN_144831bae(&local_880,param_1);
    *param_1 = local_880;
    if (local_870 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    cVar7 = '\0';
  }
  else {
    if (iVar12 < iVar8) {
      iVar8 = FUN_144a54874(lVar4,local_880);
      if (local_868 == '\x01') {
        FUN_1400020a8(puVar6);
      }
LAB_140121bb5:
      uVar14 = CONCAT71((int7)(uVar14 >> 8),local_8c9);
      if (iVar8 == 0) goto LAB_140121bc0;
    }
    else {
LAB_14012189c:
      if (local_868 == '\x01') {
        FUN_1400020a8(local_880);
      }
      uVar14 = (ulonglong)CONCAT31(uVar5,local_8c9);
    }
    uVar13 = (undefined4)uVar14;
    cVar7 = (char)uVar14;
    bVar11 = (byte)local_8b4;
    if ((cVar7 == '\0' & bVar11) != 0) goto LAB_1401218bd;
    if ((char)local_8c4 == '\x01' && cVar7 == '\x01') {
LAB_140121bce:
      FUN_1456cfcc2(&local_880,param_1);
      *param_1 = local_880;
      if (local_870 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      cVar7 = '\0';
LAB_140121bf4:
      uVar13 = (undefined4)CONCAT71((int7)(uVar14 >> 8),local_8c9);
    }
    else {
      if ((char)local_8c8 == '\x01' && cVar7 == '\x01') {
        local_880 = (undefined1 *)CONCAT44(local_880._4_4_,2);
        local_878 = (undefined1 *)0x0;
        local_870 = (undefined1 *)0xffffffff00000000;
        local_848 = 0;
        local_840 = 0;
        local_838 = 0xffffffff00000000;
        local_810 = 0;
        local_808 = 0;
        local_800 = 0xffffffff00000000;
        local_7d8 = 0;
        FUN_1480d8568(&local_880,local_8b0 + 0x60);
        FUN_14034a447(&local_8a0,param_1,&local_880);
        *(undefined4 *)(param_1 + 1) = local_898;
        *param_1 = local_8a0;
        if (&local_8a0 == param_1) {
          if (local_890 != 0) {
            FUN_1400020a8();
          }
        }
        else {
          if (param_1[2] != 0) {
            FUN_1400020a8();
          }
          param_1[2] = local_890;
          local_890 = 0;
          *(undefined4 *)(param_1 + 3) = (undefined4)local_888;
          *(undefined4 *)((longlong)param_1 + 0x1c) = local_888._4_4_;
          local_888 = 0;
        }
        FUN_1456cfc20(&local_880);
        goto LAB_140121bce;
      }
LAB_140121950:
      uVar13 = (undefined4)uVar14;
      if (bVar11 != 0) {
        FUN_144831bae(&local_880,param_1);
        *param_1 = local_880;
        if (local_870 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        cVar7 = '\x01';
        goto LAB_140121bf4;
      }
      if ((byte)((byte)local_8c4 | (byte)local_8c8) == 1) {
        if (local_8b0 != 0) {
          local_880 = (undefined1 *)CONCAT44(local_880._4_4_,2);
          local_878 = (undefined1 *)0x0;
          local_870 = (undefined1 *)0xffffffff00000000;
          local_848 = 0;
          local_840 = 0;
          local_838 = 0xffffffff00000000;
          local_810 = 0;
          local_808 = 0;
          local_800 = 0xffffffff00000000;
          local_7d8 = 0;
          FUN_1480d8568(&local_880,local_8b0 + 0x60);
          FUN_14034a447(&local_8a0,param_1,&local_880);
          *(undefined4 *)(param_1 + 1) = local_898;
          *param_1 = local_8a0;
          if (&local_8a0 == param_1) {
            if (local_890 != 0) {
              FUN_1400020a8();
            }
          }
          else {
            if (param_1[2] != 0) {
              FUN_1400020a8();
            }
            param_1[2] = local_890;
            local_890 = 0;
            *(undefined4 *)(param_1 + 3) = (undefined4)local_888;
            *(undefined4 *)((longlong)param_1 + 0x1c) = local_888._4_4_;
            local_888 = 0;
          }
          FUN_1456cfc20(&local_880);
        }
        FUN_1456cfcc2(&local_880,param_1);
        *param_1 = local_880;
        if (local_870 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        cVar7 = '\x02';
        goto LAB_140121bf4;
      }
      if ((byte)(bVar16 | (byte)local_8a4) != 1) goto LAB_1401218eb;
      cVar7 = '\x04' - (byte)local_8a4;
    }
  }
  *(char *)((longlong)param_1 + 0x34) = cVar7;
LAB_1401218eb:
  FUN_144830e52(param_1,local_8c0,uVar13);
  if ((local_48 ^ (ulonglong)auStack_8f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1401220aa FUN_1401220aa body=130 status=ok
// SIG undefined FUN_1401220aa(void)

int FUN_1401220aa(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = FUN_140122262();
  if (iVar2 == -1) {
    iVar2 = *(int *)(param_1 + 0x2000);
    *(uint *)(param_1 + 0x2000) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x2004) < iVar2 + 1U) {
      FUN_148083f72(param_1,iVar2);
    }
    lVar1 = *param_2;
    *(longlong *)(param_1 + (longlong)iVar2 * 0x10) = lVar1;
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    *(longlong *)(param_1 + (longlong)iVar2 * 0x10 + 8) = param_2[1];
  }
  return iVar2;
}



// FUNCTION 14012212c FUN_14012212c body=308 status=ok
// SIG undefined FUN_14012212c(void)

undefined4 *
FUN_14012212c(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  uint *puVar1;
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
  FUN_14028411c(param_1,local_50);
  puVar1 = (uint *)param_3[1];
  uVar4 = *(uint *)*param_3;
  *local_48 = uVar4;
  local_48[1] = *puVar1;
  local_48[2] = 0xffffffff;
  local_54 = local_50[0];
  local_68 = param_4;
  cVar2 = FUN_140284086(param_1,uVar4,local_48);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar5 < 4) {
      iVar6 = 1;
    }
    else {
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
      FUN_1402843ec(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140122262 FUN_140122262 body=144 status=ok
// SIG undefined FUN_140122262(void)

int FUN_140122262(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x2000);
  if ((longlong)iVar1 != 0) {
    lVar5 = 0;
    iVar4 = 0;
    bVar3 = DAT_14c950c29;
    do {
      lVar2 = *param_2;
      if ((lVar2 != 0 & bVar3) == 1) {
        FUN_1456cec3c(lVar2);
        bVar3 = DAT_14c950c29;
      }
      if (((*(longlong *)(param_1 + lVar5) == lVar2) &&
          (*(short *)(param_1 + 8 + lVar5) == (short)param_2[1])) &&
         (*(char *)(param_1 + 10 + lVar5) == *(char *)((longlong)param_2 + 10))) {
        return iVar4;
      }
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar5);
  }
  return -1;
}



// FUNCTION 1401222f2 FUN_1401222f2 body=356 status=ok
// SIG undefined FUN_1401222f2(void)

undefined8 FUN_1401222f2(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  undefined7 uVar5;
  longlong lVar6;
  byte bVar7;
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
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = FUN_14018d992();
  if (DAT_14c951858 == 0) {
    local_40 = &local_28;
    local_28 = FUN_1449e2820;
    local_30 = FUN_14081d0ea;
    local_38 = FUN_14081d0ea;
    local_48 = &LAB_1468c5283;
    local_50 = FUN_142809da0;
    local_58 = L"Engine";
    local_60 = 0x400000000;
    local_68 = 0x10000000;
    local_70 = 8;
    local_78 = 0x50;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
  }
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (lVar3 != 0) {
    piVar4 = (int *)(lVar2 + 0x38);
    lVar2 = lVar2 + 0x30;
    do {
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *piVar4) ||
         (lVar6 = lVar3,
         *(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*piVar4 * 8) !=
         lVar2)) {
        lVar6 = 0;
      }
    } while ((lVar6 == 0) && (lVar3 = *(longlong *)(lVar3 + 0x20), lVar3 != 0));
    if (lVar6 != 0) {
      bVar7 = 0;
      piVar4 = (int *)(**(code **)(*(longlong *)(lVar6 + 0x338) + 0x58))(lVar6 + 0x338,param_2,0);
      uVar5 = (undefined7)((ulonglong)piVar4 >> 8);
      bVar1 = 1;
      if (piVar4 != (int *)0x0) {
        bVar7 = *piVar4 != -1;
      }
      goto LAB_140122395;
    }
  }
  bVar7 = (byte)lVar2;
  bVar1 = 0;
  uVar5 = 0;
LAB_140122395:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return CONCAT71(uVar5,bVar1 & bVar7);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140122458 FUN_140122458 body=358 status=ok
// SIG undefined FUN_140122458(void)

ulonglong FUN_140122458(longlong *param_1,undefined8 param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined1 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined1 **ppuVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_888 [40];
  undefined8 local_860;
  undefined1 *local_858;
  undefined1 *local_850;
  undefined1 *local_848;
  char local_840;
  undefined1 local_838 [2070];
  undefined1 local_22 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_888;
  local_858 = local_838;
  local_840 = '\0';
  local_848 = local_22;
  ppuVar6 = &local_858;
  local_860 = param_2;
  local_850 = local_858;
  FUN_14005eb5c(&local_860,ppuVar6);
  puVar3 = local_858;
  iVar8 = (int)param_1[1];
  lVar7 = (longlong)iVar8;
  iVar4 = (int)((ulonglong)((longlong)local_850 - (longlong)local_858) >> 1);
  if ((lVar7 < 2) || (*(short *)(*param_1 + -2 + lVar7 * 2) != 0x2e)) {
    if (iVar8 + 1 < iVar4) {
      ppuVar6 = (undefined1 **)0x0;
      if ((-1 < iVar8) && (*(short *)(local_858 + lVar7 * 2) == 0x2e)) {
        if (iVar8 != 0) {
          lVar5 = 0;
          do {
            uVar1 = *(ushort *)(*param_1 + lVar5);
            uVar2 = *(ushort *)(local_858 + lVar5);
            if (uVar1 == uVar2) {
              iVar8 = 0;
              if ((uVar1 == 0) || (lVar7 == 1)) goto LAB_14012257e;
            }
            else {
              if (0x7f < (uVar2 | uVar1)) {
                iVar8 = (uint)uVar1 - (uint)uVar2;
                goto LAB_14012257e;
              }
              if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2]) {
                iVar8 = (uint)(byte)(&DAT_149e05da0)[uVar1] -
                        (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
                goto LAB_14012257e;
              }
              if (lVar7 == 1) {
                iVar8 = 0;
                goto LAB_14012257e;
              }
            }
            lVar7 = lVar7 + -1;
            lVar5 = lVar5 + 2;
          } while( true );
        }
        ppuVar6 = (undefined1 **)&DAT_00000001;
      }
      goto LAB_1401224eb;
    }
  }
  else if (iVar8 < iVar4) {
    iVar8 = FUN_144a54874(*param_1,local_858);
LAB_14012257e:
    ppuVar6 = (undefined1 **)CONCAT71((int7)((ulonglong)ppuVar6 >> 8),iVar8 == 0);
    goto LAB_1401224eb;
  }
  ppuVar6 = (undefined1 **)0x0;
LAB_1401224eb:
  if (local_840 == '\x01') {
    FUN_1400020a8(puVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_888) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)ppuVar6 & 0xffffffff;
}



// FUNCTION 1401225c0 FUN_1401225c0 body=458 status=ok
// SIG undefined FUN_1401225c0(void)

bool FUN_1401225c0(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_78 [48];
  undefined1 local_48 [12];
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    plVar3 = (longlong *)FUN_144741050(param_2 + 1);
    lVar4 = *plVar3;
    if (DAT_14c950c29 == 1) {
      if (lVar4 == 0) {
        lVar4 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar4 = *plVar3;
      }
    }
    *param_3 = lVar4;
    param_3[1] = plVar3[1];
    lVar4 = *(longlong *)(param_1 + 0xd8);
    lVar1 = *param_2;
    iVar2 = FUN_144830b78(local_3c,param_3);
    lVar5 = (longlong)*(int *)(lVar4 + 0x270);
    if (lVar5 != 0) {
      plVar3 = *(longlong **)(lVar4 + 0x268);
      lVar5 = lVar5 * 0xc;
      do {
        if ((*plVar3 == lVar1) && ((int)plVar3[1] == iVar2)) {
          bVar6 = true;
          if (plVar3 != (longlong *)0x0) goto LAB_14012266e;
          break;
        }
        plVar3 = (longlong *)((longlong)plVar3 + 0xc);
        lVar5 = lVar5 + -0xc;
      } while (lVar5 != 0);
    }
    plVar3 = (longlong *)FUN_144741050(param_2 + 1);
    lVar4 = DAT_14cb42130;
    if ((DAT_14cb42130 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(DAT_14cb42130);
    }
    if (((*plVar3 == lVar4) && ((short)plVar3[1] == DAT_14cb42138)) &&
       (*(char *)((longlong)plVar3 + 10) == DAT_14cb4213a)) {
      lVar4 = DAT_14cb42140;
      if (DAT_14c950c29 == 1) {
        if (DAT_14cb42140 == 0) {
          lVar4 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar4 = DAT_14cb42140;
        }
      }
      *param_3 = lVar4;
      param_3[1] = DAT_14cb42148;
      lVar4 = *(longlong *)(param_1 + 0xd8);
      lVar1 = *param_2;
      iVar2 = FUN_144830b78(local_48,param_3);
      lVar5 = (longlong)*(int *)(lVar4 + 0x270);
      if (lVar5 != 0) {
        plVar3 = *(longlong **)(lVar4 + 0x268);
        lVar5 = lVar5 * 0xc;
        do {
          if ((*plVar3 == lVar1) && ((int)plVar3[1] == iVar2)) goto LAB_140122749;
          plVar3 = (longlong *)((longlong)plVar3 + 0xc);
          lVar5 = lVar5 + -0xc;
        } while (lVar5 != 0);
        plVar3 = (longlong *)0x0;
LAB_140122749:
        bVar6 = plVar3 != (longlong *)0x0;
        goto LAB_14012266e;
      }
    }
  }
  bVar6 = false;
LAB_14012266e:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar6;
}



// FUNCTION 14012278c FUN_14012278c body=322 status=ok
// SIG undefined FUN_14012278c(void)

void FUN_14012278c(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 unaff_RBP;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 unaff_R14;
  ulonglong uVar9;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  undefined8 local_f0;
  undefined1 local_e8;
  undefined8 local_e0;
  undefined1 local_d1;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  puVar7 = (undefined8 *)*param_2;
  local_d0 = *puVar7;
  uVar6 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),*(undefined1 *)puVar7[4]);
  uVar9 = CONCAT71((int7)((ulonglong)unaff_R14 >> 8),*(undefined1 *)puVar7[8]);
  puVar2 = (undefined4 *)puVar7[0xc];
  uVar1 = *(undefined4 *)puVar7[0x10];
  local_d1 = *(undefined1 *)puVar7[0x14];
  lVar5 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  local_e0 = FUN_144828ac0(puVar7 + 0x18,0,
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar5 * 0x14) +
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar5 * 0x14));
  uVar4 = local_d0;
  uVar3 = *(undefined8 *)(param_1 + 0xc0);
  puVar7 = &DAT_14c846480;
  puVar8 = &local_c8;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  local_f8 = &local_c8;
  local_f0 = local_e0;
  FUN_144828832(uVar3,local_d0,uVar6 & 0xffffffff,uVar9 & 0xffffffff);
  local_c8._0_4_ = *puVar2;
  local_c8._4_4_ = puVar2[1];
  uStack_c0 = puVar2[2];
  uStack_bc = puVar2[3];
  local_b8 = puVar2[4];
  uStack_b4 = puVar2[5];
  uStack_b0 = puVar2[6];
  uStack_ac = puVar2[7];
  local_e8 = local_d1;
  local_f0 = CONCAT44(local_f0._4_4_,uVar1);
  local_f8 = &local_c8;
  FUN_1401228d0(uVar3,uVar4,uVar6 & 0xffffffff,uVar9 & 0xffffffff);
  if ((local_60 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401228d0 FUN_1401228d0 body=1013 status=ok
// SIG undefined FUN_1401228d0(void)

void FUN_1401228d0(longlong param_1,undefined8 param_2,uint param_3,undefined4 param_4,
                  undefined8 *param_5,float param_6,undefined1 param_7,char *param_8)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_408 [32];
  char *local_3e8;
  undefined1 local_3e0;
  undefined1 local_3d8;
  undefined8 local_3c8 [12];
  undefined8 local_368 [12];
  undefined8 local_308 [12];
  undefined8 local_2a8 [12];
  undefined8 local_248 [12];
  undefined8 local_1e8 [12];
  undefined8 local_188 [12];
  undefined8 local_128 [12];
  undefined8 local_c8 [13];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_408;
  if ((1e-08 <= param_6) && (lVar1 = *(longlong *)(param_1 + 0x1b0), lVar1 != 0)) {
    cVar2 = FUN_144828dba(param_8,param_2,lVar1);
    if (cVar2 != '\0') {
      cVar2 = (char)param_4;
      if ((cVar2 == '\0') || (*param_8 != '\x04')) {
        puVar5 = param_5;
        puVar6 = local_c8;
        for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        if (param_6 < 1.0) {
          puVar5 = local_1e8;
          for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
            *puVar5 = *param_5;
            param_5 = param_5 + 1;
            puVar5 = puVar5 + 1;
          }
          if ((char)param_3 == '\0') {
            uVar4 = 0xffffffff;
            if (*(ushort *)(param_8 + 0xc) != 0xffff) {
              uVar4 = (uint)*(ushort *)(param_8 + 0xc);
            }
            FUN_144afced8(lVar1,local_1e8,uVar4,param_4);
          }
          else if ((param_3 & 0xff) == 1) {
            uVar4 = 0xffffffff;
            if (*(ushort *)(param_8 + 0xc) != 0xffff) {
              uVar4 = (uint)*(ushort *)(param_8 + 0xc);
            }
            FUN_14486750c(lVar1,local_1e8,uVar4,param_4);
          }
          FUN_14915b8da(local_248,local_1e8,local_c8,param_6);
          puVar5 = local_248;
          puVar6 = local_c8;
          for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
          }
        }
        if ((char)param_3 != '\0') {
          if ((param_3 & 0xff) == 1) {
            puVar5 = local_c8;
            puVar6 = local_2a8;
            for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
              *puVar6 = *puVar5;
              puVar5 = puVar5 + 1;
              puVar6 = puVar6 + 1;
            }
            uVar4 = 0xffffffff;
            if (*(ushort *)(param_8 + 0xc) != 0xffff) {
              uVar4 = (uint)*(ushort *)(param_8 + 0xc);
            }
            local_3d8 = 0;
            local_3e0 = 0;
            local_3e8 = (char *)CONCAT71(local_3e8._1_7_,param_7);
            FUN_144831e8e(lVar1,uVar4,local_2a8,param_4);
            if ((cVar2 != '\0') &&
               (cVar2 = FUN_1403f35db(*(undefined8 *)(param_1 + 8),&DAT_14cc074d8), cVar2 != '\0'))
            {
              puVar5 = local_c8;
              puVar6 = local_308;
              for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
                *puVar6 = *puVar5;
                puVar5 = puVar5 + 1;
                puVar6 = puVar6 + 1;
              }
              uVar4 = 0xffffffff;
              if (*(ushort *)(param_8 + 0xc) != 0xffff) {
                uVar4 = (uint)*(ushort *)(param_8 + 0xc);
              }
              local_3d8 = 0;
              local_3e0 = 0;
              local_3e8 = (char *)CONCAT71(local_3e8._1_7_,param_7);
              FUN_144831e8e(lVar1,uVar4,local_308,0);
            }
          }
          goto LAB_1401229ee;
        }
        puVar5 = local_c8;
        puVar6 = local_368;
        for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        uVar4 = 0xffffffff;
        if (*(ushort *)(param_8 + 0xc) != 0xffff) {
          uVar4 = (uint)*(ushort *)(param_8 + 0xc);
        }
        local_3d8 = 0;
        local_3e0 = 0;
        local_3e8 = (char *)CONCAT71(local_3e8._1_7_,param_7);
        FUN_140122cc6(lVar1,uVar4,local_368,param_4);
        if ((cVar2 == '\0') ||
           (cVar2 = FUN_1403f35db(*(undefined8 *)(param_1 + 8),&DAT_14cc074d8), cVar2 == '\0'))
        goto LAB_1401229ee;
        puVar5 = local_3c8;
        puVar6 = local_c8;
        puVar7 = puVar5;
        for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        uVar4 = 0xffffffff;
        if (*(ushort *)(param_8 + 0xc) != 0xffff) {
          uVar4 = (uint)*(ushort *)(param_8 + 0xc);
        }
      }
      else {
        puVar5 = local_c8;
        for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
          *puVar5 = *param_5;
          param_5 = param_5 + 1;
          puVar5 = puVar5 + 1;
        }
        local_3e8 = param_8;
        FUN_14925615a(param_1,param_8 + 4,local_c8,param_3);
        cVar2 = FUN_1403f35db(*(undefined8 *)(param_1 + 8),&DAT_14cc074d8);
        if (cVar2 == '\0') goto LAB_1401229ee;
        puVar5 = &DAT_14c846480;
        puVar6 = local_128;
        for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        uVar4 = (uint)*(ushort *)(param_8 + 0xc);
        if (uVar4 == 0xffff) {
          uVar4 = 0xffffffff;
        }
        local_3d8 = 0;
        local_3e0 = 0;
        local_3e8._0_1_ = param_7;
        FUN_140122cc6(lVar1,uVar4,local_128,1);
        puVar5 = local_188;
        puVar6 = &DAT_14c846480;
        puVar7 = puVar5;
        for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        uVar4 = (uint)*(ushort *)(param_8 + 0xc);
        if (*(ushort *)(param_8 + 0xc) == 0xffff) {
          uVar4 = 0xffffffff;
        }
      }
      local_3e8 = (char *)CONCAT71(local_3e8._1_7_,param_7);
      local_3d8 = 0;
      local_3e0 = 0;
      FUN_140122cc6(lVar1,uVar4,puVar5,0);
    }
  }
LAB_1401229ee:
  if ((local_60 ^ (ulonglong)auStack_408) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140122cc6 FUN_140122cc6 body=135 status=ok
// SIG undefined FUN_140122cc6(void)

void FUN_140122cc6(longlong param_1,uint param_2)

{
  byte bVar1;
  longlong lVar2;
  
  if ((((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0xc0))) &&
      (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)param_2 * 8), lVar2 != 0))
     && (((bVar1 = *(byte *)(lVar2 + 0x10), bVar1 - 1 < 2 || (bVar1 == 0x80)) ||
         ((bVar1 < 0x21 && ((0x100010010U >> ((ulonglong)bVar1 & 0x3f) & 1) != 0)))))) {
    FUN_140122d4e();
  }
  return;
}



// FUNCTION 140122d4e FUN_140122d4e body=934 status=ok
// SIG undefined FUN_140122d4e(void)

void FUN_140122d4e(longlong param_1,longlong param_2,undefined8 *param_3,uint param_4,
                  undefined1 param_5,undefined8 param_6,char param_7,undefined1 param_8)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  undefined1 *puVar5;
  char *pcVar6;
  undefined1 *puVar7;
  longlong lVar8;
  undefined8 *unaff_RSI;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined8 unaff_R13;
  undefined7 uVar12;
  undefined8 *puVar11;
  undefined1 auStack_168 [32];
  uint local_148;
  undefined8 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined1 local_120 [24];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_a8 [12];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (param_2 == 0) goto LAB_140122f65;
  uVar10 = (ulonglong)param_4;
  uVar12 = (undefined7)((ulonglong)unaff_R13 >> 8);
  if (((param_4 & 0xfffffffe) == 2) && (*(char *)(param_2 + 0x10) == '\x04')) {
    FUN_1401261c4(param_1,local_a8,param_2,param_4 & 1);
    local_148 = param_4;
    local_140 = local_a8;
    FUN_1444a2580(param_1,&local_108,param_3,param_2 + 0x110);
    FUN_1491ddfd0(param_2 + 0x210,&local_108);
    local_130 = param_8;
    local_138 = 0;
    local_140 = (undefined8 *)((ulonglong)local_140 & 0xffffffffffffff00);
    local_148 = CONCAT31(local_148._1_3_,param_5);
    FUN_140122d4e(param_1,param_2,&local_108,param_4 & 1);
    goto LAB_140122f65;
  }
  lVar4 = 0xb0;
  if (param_4 < 4) {
    lVar4 = *(longlong *)(&DAT_14bb90798 + uVar10 * 8);
  }
  pcVar6 = "";
  if (*(char **)(param_2 + lVar4) != (char *)0x0) {
    pcVar6 = *(char **)(param_2 + lVar4);
  }
  if (*pcVar6 == '\0') {
    if (param_4 == 0) {
      lVar4 = param_2 + 0x68;
    }
    else if (param_4 == 1) {
      lVar4 = param_2 + 0x48;
    }
    else if (param_4 == 3) {
      lVar4 = param_2 + 0x58;
    }
    else {
      lVar4 = param_2 + 0x78;
    }
    puVar11 = *(undefined8 **)(lVar4 + 8);
    if (puVar11 == (undefined8 *)0x0) {
      puVar11 = &DAT_14cc07c00;
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14cc07c60) {
        FUN_144b3d300(&DAT_14cc07c60);
        if (DAT_14cc07c60 != -1) goto LAB_140122e10;
        puVar11 = &DAT_14c846480;
        puVar9 = &DAT_14cc07c00;
        for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
          *puVar9 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar9 = puVar9 + 1;
        }
        _Init_thread_footer(&DAT_14cc07c60);
      }
      puVar11 = &DAT_14cc07c00;
    }
LAB_140122e10:
    unaff_RSI = puVar11;
    puVar9 = local_a8;
    for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar9 = *unaff_RSI;
      unaff_RSI = unaff_RSI + 1;
      puVar9 = puVar9 + 1;
    }
    if (param_7 == '\0') {
      cVar3 = FUN_141124de2(local_a8,param_3,0x38d1b717);
      if (cVar3 != '\0') goto LAB_140122f65;
    }
    uVar12 = (undefined7)((ulonglong)puVar11 >> 8);
  }
  FUN_1401571e4(param_1,local_a8,param_2,uVar10);
  local_140 = (undefined8 *)CONCAT71(local_140._1_7_,1);
  local_148 = CONCAT31(local_148._1_3_,1);
  FUN_1448340d4(param_1,param_2,(param_4 & 0xfffffffd) == 0,CONCAT71(uVar12,param_5) & 0xffffffff);
  if (param_4 < 4) {
    lVar4 = *(longlong *)(&DAT_14bb90778 + uVar10 * 8);
    lVar8 = (longlong)(int)(&switchD_140157364::switchdataD_14bb90818)[uVar10];
  }
  else {
    lVar4 = 0x78;
    lVar8 = 0;
  }
  puVar11 = *(undefined8 **)(param_2 + 8 + lVar4);
  if (puVar11 != (undefined8 *)0x0) {
    unaff_RSI = param_3;
    for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar11 = *unaff_RSI;
      unaff_RSI = unaff_RSI + 1;
      puVar11 = puVar11 + 1;
    }
  }
  lVar4 = 0xb0;
  if (param_4 < 4) {
    lVar4 = *(longlong *)(&DAT_14bb90798 + uVar10 * 8);
  }
  puVar7 = *(undefined1 **)(param_2 + lVar4);
  if (puVar7 == (undefined1 *)0x0) {
    puVar7 = &DAT_14cc07bfc;
  }
  *puVar7 = 0;
  puVar7 = *(undefined1 **)(param_2 + 0x88 + *(longlong *)(&DAT_14bb90848 + lVar8 * 8));
  if (puVar7 == (undefined1 *)0x0) {
    puVar7 = &DAT_14cc07bfc;
  }
  *puVar7 = 1;
  iVar2 = *(int *)(param_2 + 0x1c);
  if ((-1 < (longlong)iVar2) && (iVar2 < *(int *)(param_1 + 0x568))) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x560) + (longlong)iVar2 * 4);
    *piVar1 = *piVar1 + 1;
  }
  if (*(char *)(param_2 + 0x10) == '\x04') {
    puVar7 = *(undefined1 **)(param_2 + 0x4c8 + (ulonglong)((param_4 - 1 & 0xfffffffd) != 0) * 0x20)
    ;
    puVar5 = &DAT_14cc07bfc;
    if (puVar7 != (undefined1 *)0x0) {
      puVar5 = puVar7;
    }
    *puVar5 = 1;
    if ((param_4 < 2) && (*(char *)(param_1 + 0x52c) != '\0')) {
      local_108 = *param_3;
      uStack_100 = param_3[1];
      local_f8 = *(undefined4 *)(param_3 + 2);
      uStack_f4 = *(undefined4 *)((longlong)param_3 + 0x14);
      uStack_f0 = *(undefined4 *)(param_3 + 3);
      uStack_ec = *(undefined4 *)((longlong)param_3 + 0x1c);
      local_148._0_1_ = 1;
      FUN_1491de082(param_1,local_120,param_2);
      local_148 = CONCAT31(local_148._1_3_,1);
      FUN_1491de136(param_2 + 0x3c8,local_120,
                    CONCAT71((int7)((ulonglong)unaff_RSI >> 8),(param_4 & 0xfffffffd) == 0) &
                    0xffffffff,*(undefined1 *)(param_2 + 0x3c8));
    }
  }
LAB_140122f65:
  if ((local_48 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401230f6 FUN_1401230f6 body=104 status=ok
// SIG undefined FUN_1401230f6(void)

undefined8 FUN_1401230f6(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  FUN_1446dcdd4(local_40);
  uVar1 = FUN_140123160(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140123160 FUN_140123160 body=744 status=ok
// SIG undefined FUN_140123160(void)

longlong * FUN_140123160(int *param_1)

{
  longlong lVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint *puVar13;
  longlong *plVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  int local_20;
  ulonglong local_18;
  
  plVar14 = DAT_14cb7f870;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cb7f870 != (longlong *)0x0) {
    cVar3 = (**(code **)(*DAT_14cb7f870 + 0x300))(DAT_14cb7f870);
    if (cVar3 == '\0') {
      lVar8 = FUN_1400e3c00(plVar14,param_1,1);
      if (((lVar8 != 0) && (lVar8 = FUN_14013f0dc(plVar14,lVar8,param_1,1), lVar8 != 0)) &&
         (*(char *)(lVar8 + 0x2a) == '\0')) {
        plVar14 = *(longlong **)(lVar8 + 0x30);
LAB_1401233c8:
        if (plVar14 != (longlong *)0x0) {
          lVar8 = (**(code **)(*plVar14 + 8))(plVar14);
          lVar11 = FUN_14012344a();
          if ((lVar11 != 0) && (*(int *)(lVar11 + 0x38) <= *(int *)(lVar8 + 0x38))) {
            plVar9 = (longlong *)0x0;
            if (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8)
                == lVar11 + 0x30) {
              plVar9 = plVar14;
            }
            goto LAB_140123401;
          }
        }
      }
    }
    else {
      if (((*param_1 == 0) || (iVar4 = param_1[1], iVar4 == 0)) ||
         ((*param_1 == DAT_14c948000 || (iVar4 < 1)))) {
        local_20 = DAT_14c948620;
        local_28 = DAT_14c948618;
      }
      else {
        puVar10 = (ulonglong *)(param_1 + 2);
        if (0 < param_1[9]) {
          puVar10 = *(ulonglong **)(param_1 + 6);
        }
        if (iVar4 != 1) {
          puVar10 = *(ulonglong **)(param_1 + 6);
        }
        local_20 = (int)puVar10[1];
        local_28 = *puVar10;
      }
      uVar12 = local_28 & 0xffffffff;
      if (local_20 != 0) {
        uVar6 = FUN_144a78877(uVar12,local_20);
        uVar12 = (ulonglong)uVar6;
      }
      iVar4 = FUN_1448467de(plVar14 + 0x3f,uVar12,&local_28);
      if (iVar4 != -1) {
        lVar8 = plVar14[0x3f];
        lVar11 = lVar8 + (longlong)iVar4 * 0x70;
        plVar9 = (longlong *)0x0;
        if ((lVar11 == 0) || (lVar8 + (longlong)iVar4 * 0x70 == -0x10)) goto LAB_140123401;
        puVar13 = (uint *)&DAT_14c948618;
        puVar7 = (uint *)&DAT_14c948620;
        if ((*param_1 != 0) && ((1 < param_1[1] && (*param_1 != DAT_14c948000)))) {
          puVar13 = (uint *)(*(longlong *)(param_1 + 6) + 0xc);
          puVar7 = (uint *)(*(longlong *)(param_1 + 6) + 0x14);
        }
        uVar6 = *puVar13;
        uVar2 = *puVar7;
        uVar5 = uVar6;
        if (uVar2 != 0) {
          uVar5 = uVar2 >> 0xd ^ uVar6 - uVar2;
          uVar15 = uVar5 << 8 ^ (-0x61c88647 - uVar2) - uVar5;
          uVar16 = uVar15 >> 0xd ^ (uVar2 - uVar5) - uVar15;
          uVar17 = uVar16 >> 0xc ^ (uVar5 - uVar15) - uVar16;
          uVar5 = uVar17 << 0x10 ^ (uVar15 - uVar16) - uVar17;
          uVar15 = uVar5 >> 5 ^ (uVar16 - uVar17) - uVar5;
          uVar16 = uVar15 >> 3 ^ (uVar17 - uVar5) - uVar15;
          uVar5 = uVar16 << 10 ^ (uVar5 - uVar15) - uVar16;
          uVar5 = uVar5 >> 0xf ^ uVar15 - (uVar16 + uVar5);
        }
        if (*(int *)(lVar11 + 0x20) != *(int *)(lVar11 + 0x4c)) {
          lVar8 = lVar11 + 0x50;
          if (*(longlong *)(lVar11 + 0x58) != 0) {
            lVar8 = *(longlong *)(lVar11 + 0x58);
          }
          iVar4 = *(int *)(lVar8 + (ulonglong)(*(int *)(lVar11 + 0x60) - 1U & uVar5) * 4);
          if (iVar4 != -1) {
            lVar8 = *(longlong *)(lVar11 + 0x18);
            plVar9 = (longlong *)0x0;
            do {
              lVar11 = (longlong)iVar4 * 0x20;
              if ((*(uint *)(lVar8 + lVar11) == uVar6) &&
                 (lVar1 = lVar8 + lVar11, *(uint *)(lVar1 + 8) == uVar2)) {
                plVar9 = (longlong *)0x0;
                if ((lVar1 != 0) && ((undefined8 *)(lVar1 + 0x10) != (undefined8 *)0x0)) {
                  plVar14 = *(longlong **)(lVar1 + 0x10);
                  goto LAB_1401233c8;
                }
                break;
              }
              iVar4 = *(int *)(lVar8 + 0x18 + lVar11);
            } while (iVar4 != -1);
            goto LAB_140123401;
          }
        }
      }
    }
  }
  plVar9 = (longlong *)0x0;
LAB_140123401:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar9;
}



// FUNCTION 14012344a FUN_14012344a body=57 status=ok
// SIG undefined FUN_14012344a(void)

void FUN_14012344a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb571e0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb571e0 = FUN_140002ddd(FUN_1464bbb08,uVar1,L"GbxDialogLineSlotDef");
  }
  return;
}



// FUNCTION 140123484 FUN_140123484 body=328 status=ok
// SIG undefined FUN_140123484(void)

undefined4 *
FUN_140123484(longlong param_1,undefined4 *param_2,ulonglong *param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  ulonglong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1401236ea(param_1,local_50);
  uVar3 = *param_3;
  *local_48 = uVar3;
  *(undefined4 *)(local_48 + 1) = 0xffffffff;
  local_54 = local_50[0];
  uVar2 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  local_68 = param_4;
  cVar1 = FUN_1401235ce(param_1,uVar2,local_48);
  if (cVar1 == '\0') {
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
      uVar2 = *(int *)(param_1 + 0x48) - 1U & uVar2;
      *(uint *)((longlong)local_48 + 0xc) = uVar2;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 1) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1401239a4(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401235ce FUN_1401235ce body=146 status=ok
// SIG undefined FUN_1401235ce(void)

void FUN_1401235ce(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined1 uVar1;
  longlong *plVar2;
  int iVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        plVar2 = (longlong *)(*param_1 + (longlong)iVar3 * 0x10);
        if (*(longlong *)(*param_1 + (longlong)iVar3 * 0x10) == *param_3) {
          *plVar2 = *param_3;
          FUN_140123660(param_1,*param_4,1);
          *param_4 = iVar3;
          uVar1 = 1;
          goto LAB_14012364f;
        }
        iVar3 = (int)plVar2[1];
      } while (iVar3 != -1);
    }
  }
  uVar1 = 0;
LAB_14012364f:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  return;
}



// FUNCTION 140123660 FUN_140123660 body=138 status=ok
// SIG undefined FUN_140123660(void)

void FUN_140123660(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x10 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      uVar4 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
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
      puVar7 = puVar7 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1401236ea FUN_1401236ea body=697 status=ok
// SIG undefined FUN_1401236ea(void)

int * FUN_1401236ea(longlong *param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar15 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar15 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar15) {
      FUN_1446efaca(param_1,iVar15);
    }
    iVar7 = (int)param_1[5];
    if (iVar7 == 0) {
      iVar10 = -1;
    }
    else {
      iVar10 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar10 = iVar7 + -1;
      }
      iVar10 = iVar10 >> 5;
    }
    plVar12 = param_1 + 2;
    iVar8 = iVar7 + 1;
    iVar16 = iVar7 + 0x1f;
    if (-1 < iVar7) {
      iVar16 = iVar7;
    }
    if (iVar16 >> 5 == iVar10) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar7) {
        iVar10 = iVar7;
        if (iVar7 + 0x20U < 0xa0) {
          iVar8 = 0x80;
        }
        else {
          uVar18 = iVar7 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar11 = 4;
            if (4 < uVar18) {
              uVar11 = uVar18;
            }
          }
          else {
            uVar11 = uVar18 + (uVar18 * 3 >> 3) + 0x10;
          }
          uVar5 = (ulonglong)(uVar11 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar2 = (uint)(uVar5 + 0xf);
              if (uVar11 < 0x1ffd) {
                uVar5 = (ulonglong)
                        (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 + 0xf >> 4]];
              }
              else {
                uVar9 = (ulonglong)(uVar2 & 0xfffffff0);
                if (uVar9 < 0x7ff1) {
                  bVar6 = (&DAT_14c841e00)[uVar2 >> 4];
                  uVar14 = 0x32;
                  if (0x32 < bVar6) {
                    uVar14 = (ulonglong)bVar6;
                  }
                  uVar17 = 0x32 - (ulonglong)bVar6;
                  do {
                    uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar17 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar17 & 0xffffffff] & 0xf) == 0) goto LAB_1401238bd;
                    lVar4 = uVar14 + 1 + uVar17;
                    uVar17 = uVar17 - 1;
                  } while (lVar4 != 0x33);
                }
                uVar5 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar5 = (ulonglong)DAT_14c841df8;
                }
                uVar5 = -uVar5 & (uVar9 + uVar5) - 1;
              }
            }
            else {
              uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,0);
              iVar10 = (int)param_1[5];
            }
          }
LAB_1401238bd:
          iVar3 = (int)(uVar5 >> 2);
          iVar8 = -0x20;
          if ((int)uVar18 <= iVar3) {
            iVar8 = iVar3 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar12,iVar10);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar10 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar10 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar13 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar13 = plVar12;
        }
        bVar6 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar13 + (longlong)(iVar10 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar13 + (longlong)(iVar10 >> 5) * 4) << (bVar6 & 0x1f)) >>
             (bVar6 & 0x1f);
      }
    }
    lVar4 = (longlong)iVar15;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[4];
    }
    bVar6 = (byte)iVar7 & 0x1f;
    puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar16 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
  }
  else {
    iVar15 = (int)param_1[6];
    lVar4 = (longlong)iVar15;
    iVar7 = *(int *)(*param_1 + 4 + lVar4 * 0x10);
    *(int *)(param_1 + 6) = iVar7;
    iVar10 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar7 * 0x10) = 0xffffffff;
    }
  }
  plVar12 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar12 = (longlong *)param_1[4];
  }
  iVar7 = iVar15 + 0x1f;
  if (-1 < iVar15) {
    iVar7 = iVar15;
  }
  puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar7 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar15 & 0x1f);
  *param_2 = iVar15;
  *(longlong *)(param_2 + 2) = lVar4 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 1401239a4 FUN_1401239a4 body=663 status=ok
// SIG undefined FUN_1401239a4(void)

void FUN_1401239a4(longlong *param_1)

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
    if ((int)uVar7 < 1) goto LAB_140123a17;
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
LAB_140123a17:
  iVar14 = (int)param_1[5];
  if (iVar14 == 0) {
    uVar3 = 0;
    uVar11 = 1;
    iVar4 = 0;
    iVar12 = 0;
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
      uVar2 = ((uint)(*(ulonglong *)(lVar6 + lVar13) >> 0x14) & 0xffff ^
              (uint)(*(ulonglong *)(lVar6 + lVar13) >> 4)) * -0x7a143595;
      uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
      uVar15 = (longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U;
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



// FUNCTION 140123c3c FUN_140123c3c body=93 status=ok
// SIG undefined FUN_140123c3c(void)

undefined8 * FUN_140123c3c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_144909e75(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_140123e52(param_1,iVar1);
      FUN_140123c99(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 140123c99 FUN_140123c99 body=206 status=ok
// SIG undefined FUN_140123c99(void)

void FUN_140123c99(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  
  if (param_3 != 0) {
    puVar8 = (undefined8 *)(param_1 + 0x50);
    do {
      puVar8[-10] = *param_2;
      lVar2 = param_2[1];
      puVar8[-9] = lVar2;
      if ((lVar2 != 0 & DAT_14c950c29) == 1) {
        FUN_14689c22e();
      }
      *(undefined4 *)(puVar8 + -4) = *(undefined4 *)(param_2 + 6);
      uVar6 = param_2[2];
      uVar7 = param_2[3];
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x24);
      uVar4 = *(undefined4 *)(param_2 + 5);
      uVar5 = *(undefined4 *)((longlong)param_2 + 0x2c);
      *(undefined4 *)(puVar8 + -6) = *(undefined4 *)(param_2 + 4);
      *(undefined4 *)((longlong)puVar8 + -0x2c) = uVar3;
      *(undefined4 *)(puVar8 + -5) = uVar4;
      *(undefined4 *)((longlong)puVar8 + -0x24) = uVar5;
      puVar8[-8] = uVar6;
      puVar8[-7] = uVar7;
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x3c);
      uVar4 = *(undefined4 *)(param_2 + 8);
      uVar5 = *(undefined4 *)((longlong)param_2 + 0x44);
      *(undefined4 *)(puVar8 + -3) = *(undefined4 *)(param_2 + 7);
      *(undefined4 *)((longlong)puVar8 + -0x14) = uVar3;
      *(undefined4 *)(puVar8 + -2) = uVar4;
      *(undefined4 *)((longlong)puVar8 + -0xc) = uVar5;
      puVar8[-1] = param_2[9];
      *puVar8 = 0;
      iVar1 = *(int *)(param_2 + 0xb);
      _Src = (void *)param_2[10];
      *(int *)(puVar8 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
      }
      else {
        FUN_140123d68(puVar8,iVar1,0);
        memcpy((void *)*puVar8,_Src,(longlong)iVar1 * 0x60);
      }
      param_2 = param_2 + 0xc;
      puVar8 = puVar8 + 0xc;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140123d68 FUN_140123d68 body=233 status=ok
// SIG undefined FUN_140123d68(void)

void FUN_140123d68(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 0x60;
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
    iVar1 = (int)(uVar3 / 0x60);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x60,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140123e52 FUN_140123e52 body=235 status=ok
// SIG undefined FUN_140123e52(void)

void FUN_140123e52(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 0x60;
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
    iVar1 = (int)(uVar3 / 0x60);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x60,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140123f3e FUN_140123f3e body=121 status=ok
// SIG undefined FUN_140123f3e(void)

longlong FUN_140123f3e(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (((((*(int *)(param_1 + 0x1c) != 0) && (uVar1 = *(uint *)(param_1 + 0x18), -1 < (int)uVar1)) &&
       ((int)uVar1 < DAT_14c9647dc)) &&
      ((plVar4 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar4 != (longlong *)0x0 && ((int)plVar4[2] == *(int *)(param_1 + 0x1c))))) &&
     (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (lVar2 = *plVar4, lVar2 != 0)))) {
    lVar3 = FUN_140123fb8();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      return lVar2;
    }
  }
  return 0;
}



// FUNCTION 140123fb8 FUN_140123fb8 body=228 status=ok
// SIG undefined FUN_140123fb8(void)

longlong FUN_140123fb8(void)

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
  if (DAT_14cbac988 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14592272a;
    local_38 = &LAB_148c2ec3b;
    local_40 = &LAB_146224556;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0xc00;
    FUN_14081cfa3(L"/Script/OakGame",L"OakMapViewer",&DAT_14cbac988,&DAT_148c2ec3a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbac988;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14012409e FUN_14012409e body=58 status=ok
// SIG undefined FUN_14012409e(void)

undefined8 FUN_14012409e(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0xd0))();
  if (plVar1 != (longlong *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1);
    if ((uVar2 & 8) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001401240cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*plVar1 + 0x38))(plVar1);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 1401240dc FUN_1401240dc body=44 status=ok
// SIG undefined FUN_1401240dc(void)

longlong * FUN_1401240dc(void)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  plVar1 = (longlong *)FUN_144831f16();
  if (plVar1 != (longlong *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1);
    if ((uVar2 & 0x10) != 0) {
      plVar1 = (longlong *)0x0;
    }
  }
  return plVar1;
}



// FUNCTION 140124110 FUN_140124110 body=273 status=ok
// SIG undefined FUN_140124110(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140124110(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_140124222();
  if ((cVar1 != '\0') || (lVar2 = FUN_140124256(param_1), 1 < *(int *)(lVar2 + 8))) {
    return (undefined *)(param_1 + 0x6b0);
  }
  if (DAT_14cc06bf0 <=
      *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110)) {
    return &DAT_14cc06b48;
  }
  FUN_144b3d300();
  if (DAT_14cc06bf0 != -1) {
    return &DAT_14cc06b48;
  }
  _DAT_14cc06b68 = 0;
  uRam000000014cc06b80 = 0;
  _DAT_14cc06b88 = 0;
  uRam000000014cc06b90 = 0;
  _DAT_14cc06b58 = 0;
  uRam000000014cc06b60 = 0;
  _DAT_14cc06b48 = 0;
  uRam000000014cc06b50 = 0;
  uRam000000014cc06b70 = 0x8000000000;
  _DAT_14cc06b78 = 0xffffffff;
  _DAT_14cc06bb8 = 0;
  _DAT_14cc06bc0 = 0;
  _DAT_14cc06b98 = 0;
  uRam000000014cc06ba0 = 0;
  _DAT_14cc06bc4 = 0xffffffff00000080;
  _DAT_14cc06bcc = 0;
  _DAT_14cc06bd8 = 0;
  _DAT_14cc06be0 = 0;
  _DAT_14cc06be8 = 0xffffffff;
  atexit((_func_5014 *)&LAB_14448af7f);
  _Init_thread_footer(&DAT_14cc06bf0);
  return &DAT_14cc06b48;
}



// FUNCTION 140124222 FUN_140124222 body=51 status=ok
// SIG undefined FUN_140124222(void)

bool FUN_140124222(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  bool bVar3;
  
  lVar1 = FUN_140124256();
  if (*(int *)(lVar1 + 8) < 2) {
    bVar3 = false;
  }
  else {
    uVar2 = FUN_1401242c6();
    lVar1 = FUN_144a78ede(param_1,uVar2);
    bVar3 = lVar1 != 0;
  }
  return bVar3;
}



// FUNCTION 140124256 FUN_140124256 body=112 status=ok
// SIG undefined FUN_140124256(void)

longlong FUN_140124256(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  while (lVar3 = param_1, (*(uint *)(lVar3 + 8) & 0x10) == 0) {
    plVar1 = *(longlong **)(lVar3 + 0x10);
    param_1 = plVar1[0x22];
    if (param_1 == 0) {
      (**(code **)(*plVar1 + 1000))(plVar1);
      param_1 = plVar1[0x22];
      if (param_1 == 0) break;
    }
    lVar2 = FUN_1401242c6();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) != lVar2 + 0x30)) break;
  }
  return lVar3 + 0xa40;
}



// FUNCTION 1401242c6 FUN_1401242c6 body=228 status=ok
// SIG undefined FUN_1401242c6(void)

longlong FUN_1401242c6(void)

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
  if (DAT_14cc06ad0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1466c4a56;
    local_38 = &LAB_14919d808;
    local_40 = &LAB_145b27569;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0xad0;
    FUN_14081cfa3(L"/Script/ControlRig",L"ControlRig",&DAT_14cc06ad0,FUN_1466c9f84);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc06ad0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401243ac FUN_1401243ac body=606 status=ok
// SIG undefined FUN_1401243ac(void)

void FUN_1401243ac(longlong param_1,undefined8 *param_2,ushort *param_3)

{
  ulonglong uVar1;
  ushort uVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  undefined2 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x178));
  iVar3 = *(int *)(param_1 + 0x30);
  if (iVar3 == 0) {
    uVar15 = 1;
    uVar18 = 0;
    iVar5 = 0;
    iVar14 = 0;
  }
  else {
    puVar9 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar9 = (uint *)(param_1 + 0x18);
    }
    uVar13 = *puVar9;
    if (uVar13 == 0) {
      iVar14 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar14 = iVar3 + -1;
      }
      uVar18 = 0;
      uVar15 = (ulonglong)(uint)(iVar14 >> 5);
      if (iVar14 >> 5 < 1) {
        uVar15 = uVar18;
      }
      iVar14 = 0;
      do {
        if (uVar15 == uVar18) goto LAB_1401245dd;
        iVar14 = iVar14 + 0x20;
        uVar13 = puVar9[uVar18 + 1];
        uVar18 = uVar18 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar18 = 0;
      iVar14 = 0;
    }
    uVar15 = (ulonglong)(-uVar13 & uVar13);
    uVar1 = uVar15 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    iVar5 = (iVar14 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar5) {
      iVar5 = iVar3;
    }
  }
  if (iVar5 < iVar3) {
    uVar13 = 0xffffffff;
    do {
      lVar16 = *(longlong *)(param_1 + 8);
      plVar11 = *(longlong **)(lVar16 + 0x10 + (longlong)iVar5 * 0x20);
      cVar4 = (**(code **)(*plVar11 + 0x88))(plVar11);
      if (cVar4 == '\0') {
        puVar17 = (undefined8 *)(lVar16 + (longlong)iVar5 * 0x20);
        puVar10 = &DAT_149dfb77a;
        if (*(int *)(puVar17 + 1) != 0) {
          puVar10 = (undefined2 *)*puVar17;
        }
        uVar2 = *param_3;
        if (uVar2 != 0) {
          lVar16 = 0;
          do {
            if ((ushort)((ushort)(*(ushort *)((longlong)puVar10 + lVar16) - 0x41 < 0x1a) * 0x20 +
                        *(ushort *)((longlong)puVar10 + lVar16)) !=
                (ushort)((ushort)(uVar2 - 0x41 < 0x1a) * 0x20 + uVar2)) goto LAB_140124535;
            uVar2 = *(ushort *)((longlong)param_3 + lVar16 + 2);
            lVar16 = lVar16 + 2;
          } while (uVar2 != 0);
        }
        puVar10 = &DAT_149dfb77a;
        if (*(int *)(puVar17 + 1) != 0) {
          puVar10 = (undefined2 *)*puVar17;
        }
        if (*(int *)(param_2 + 1) == 0) {
          plVar11 = (longlong *)0x0;
        }
        else {
          plVar11 = (longlong *)*param_2;
        }
        (**(code **)(*plVar11 + 0x58))(plVar11,puVar10);
      }
LAB_140124535:
      uVar13 = uVar13 & ~(uint)uVar15;
      puVar9 = *(uint **)(param_1 + 0x28);
      if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
        puVar9 = (uint *)(param_1 + 0x18);
      }
      iVar3 = *(int *)(param_1 + 0x30);
      iVar5 = (int)uVar18;
      lVar16 = (longlong)iVar5;
      uVar6 = puVar9[lVar16] & uVar13;
      if (uVar6 == 0) {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar8 = iVar7;
        if (iVar7 < iVar5) {
          iVar8 = iVar5;
        }
        if (iVar7 <= iVar5) break;
        lVar12 = 0;
        while( true ) {
          iVar14 = iVar14 + 0x20;
          uVar6 = puVar9[lVar16 + lVar12 + 1];
          if (uVar6 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar8 - lVar16 == lVar12) goto LAB_1401245dd;
        }
        uVar18 = (ulonglong)(iVar5 + (int)lVar12 + 1);
        uVar13 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar6 & uVar6);
      uVar1 = uVar15 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      iVar5 = (iVar14 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    } while (iVar5 < iVar3);
  }
LAB_1401245dd:
                    /* WARNING: Could not recover jumptable at 0x0001401245f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x178));
  return;
}



// FUNCTION 140124628 FUN_140124628 body=188 status=ok
// SIG undefined FUN_140124628(void)

undefined1 FUN_140124628(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  
  lVar1 = *param_2;
  if ((*(byte *)(param_1 + 0x448) & 1) != 0) {
    if (*(double *)(param_1 + 0x470) != *(double *)(lVar1 + 0x470)) {
      return 1;
    }
    if (NAN(*(double *)(param_1 + 0x470)) || NAN(*(double *)(lVar1 + 0x470))) {
      return 1;
    }
    if (*(double *)(param_1 + 0x478) != *(double *)(lVar1 + 0x478)) {
      return 1;
    }
    if (NAN(*(double *)(param_1 + 0x478)) || NAN(*(double *)(lVar1 + 0x478))) {
      return 1;
    }
    if (*(double *)(param_1 + 0x480) != *(double *)(lVar1 + 0x480)) {
      return 1;
    }
    if (NAN(*(double *)(param_1 + 0x480)) || NAN(*(double *)(lVar1 + 0x480))) {
      return 1;
    }
  }
  if ((((((*(byte *)(param_1 + 0x448) ^ *(byte *)(lVar1 + 0x448)) & 0x1c) == 0) &&
       (cVar2 = FUN_1401246e4(param_1 + 0x450,lVar1 + 0x450), cVar2 != '\0')) &&
      (cVar2 = FUN_1401246e4(param_1 + 0x458,lVar1 + 0x458), cVar2 != '\0')) &&
     (((*(byte *)(lVar1 + 0x449) ^ *(byte *)(param_1 + 0x449)) & 4) == 0)) {
    uVar3 = FUN_14012474c(param_1,param_2);
    return uVar3;
  }
  return 1;
}



// FUNCTION 1401246e4 FUN_1401246e4 body=104 status=ok
// SIG undefined FUN_1401246e4(void)

ulonglong FUN_1401246e4(uint *param_1,uint *param_2)

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



// FUNCTION 14012474c FUN_14012474c body=228 status=ok
// SIG undefined FUN_14012474c(void)

undefined8 FUN_14012474c(longlong *param_1,longlong *param_2)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  
  param_2 = (longlong *)*param_2;
  cVar1 = (**(code **)(*param_1 + 0x50))();
  cVar2 = (**(code **)(*param_2 + 0x50))(param_2);
  uVar3 = 1;
  if ((((cVar1 == cVar2) &&
       (*(char *)((longlong)param_1 + 0x12) == *(char *)((longlong)param_2 + 0x13))) &&
      (*(char *)((longlong)param_1 + 0x13) == *(char *)((longlong)param_1 + 0x12))) &&
     ((((((double)param_1[0x65] == (double)param_2[0x65] &&
         (!NAN((double)param_1[0x65]) && !NAN((double)param_2[0x65]))) &&
        (((double)param_1[0x66] == (double)param_2[0x66] &&
         ((!NAN((double)param_1[0x66]) && !NAN((double)param_2[0x66]) &&
          ((double)param_1[0x67] == (double)param_2[0x67])))))) &&
       (!NAN((double)param_1[0x67]) && !NAN((double)param_2[0x67]))) ||
      ((ABS(*(float *)(param_1 + 0x6c) - *(float *)(param_2 + 0x6c)) <
        *(float *)((longlong)param_1 + 0x43c) ||
        ABS(*(float *)(param_1 + 0x6c) - *(float *)(param_2 + 0x6c)) ==
        *(float *)((longlong)param_1 + 0x43c) &&
       ((double)*(float *)(param_1 + 0x87) <=
        (double)param_1[0x6b] * (double)param_2[0x6b] +
        (double)param_1[0x69] * (double)param_2[0x69] +
        (double)param_1[0x6a] * (double)param_2[0x6a])))))) {
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 14012483a FUN_14012483a body=319 status=ok
// SIG undefined FUN_14012483a(void)

longlong FUN_14012483a(longlong param_1)

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
  if (*(longlong *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x20);
  if (lVar1 != 0) {
    if (DAT_14cb10130 == 0) {
      local_40 = &local_20;
      local_20 = FUN_140754f84;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_14081d0ea;
      local_48 = &LAB_147da9a76;
      local_50 = FUN_1409f3105;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000000;
      local_70 = 8;
      local_78 = 0x990;
      FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
    }
    if ((*(int *)(DAT_14cb10130 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) == DAT_14cb10130 + 0x30)) goto LAB_14012489e;
  }
  lVar1 = 0;
LAB_14012489e:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140124990 FUN_140124990 body=241 status=ok
// SIG undefined FUN_140124990(void)

void FUN_140124990(longlong param_1,undefined8 param_2,undefined8 *param_3,int param_4)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  bool bVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined2 *local_50;
  undefined8 uStack_48;
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_4 == 1) {
    param_3 = (undefined8 *)((longlong)param_3 + (longlong)*(int *)(param_1 + 0x44));
  }
  local_58 = *param_3;
  FUN_1400021e4(&local_58,&local_50);
  FUN_144832102(&local_50,0);
  puVar1 = local_50;
  bVar4 = (int)uStack_48 != 0;
  local_50 = (undefined2 *)0x0;
  uStack_48 = 0;
  puVar3 = &DAT_149dfb77a;
  if (bVar4) {
    puVar3 = puVar1;
  }
  FUN_140002266(&local_40,L"(%u,\"%s\")",*(undefined4 *)(param_3 + 1),puVar3);
  iVar2 = local_38 + -1;
  if (local_38 == 0) {
    iVar2 = 0;
  }
  FUN_1400020e8(param_2,local_40,iVar2);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if (puVar1 != (undefined2 *)0x0) {
    FUN_1400020a8(puVar1);
  }
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140124a88 FUN_140124a88 body=57 status=ok
// SIG undefined FUN_140124a88(void)

void FUN_140124a88(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb62eb8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb62eb8 =
         FUN_140002ddd(FUN_1464fb63c,uVar1,L"GbxRotationTargetModifierSettings_DistanceBasedBlend");
  }
  return;
}



// FUNCTION 140124ac2 FUN_140124ac2 body=14 status=ok
// SIG undefined FUN_140124ac2(void)

void FUN_140124ac2(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140124acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x90) + 0x28))();
  return;
}



// FUNCTION 140124ad0 FUN_140124ad0 body=20 status=ok
// SIG undefined FUN_140124ad0(void)

void FUN_140124ad0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140124ae1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x90) + 0x1a0))();
  return;
}



// FUNCTION 140124ae4 FUN_140124ae4 body=433 status=ok
// SIG undefined FUN_140124ae4(void)

longlong * FUN_140124ae4(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  int iVar2;
  ulonglong *puVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_58 [36];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0xc,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0xc);
  local_34 = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_34 = *(uint *)(param_2 + 1);
  }
  puVar3 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_34,4);
    }
    else {
      FUN_14572512c(param_1,&local_34);
    }
  }
  else {
    local_34 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  if (local_34 == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_14570c084(param_2,0);
    }
  }
  else if ((((int)local_34 < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x155555 < local_34 && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_34;
    lVar4 = 0;
    lVar6 = 0;
    do {
      FUN_140124ca5(param_1,*param_2 + lVar4);
      lVar6 = lVar6 + 1;
      lVar4 = lVar4 + 0xc;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_34) ||
       (FUN_14570c084(param_2), 0 < (int)local_34)) {
      iVar5 = 0;
      do {
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_147020db4(param_2,iVar2);
        }
        lVar4 = (longlong)iVar2 * 0xc + *param_2;
        FUN_140124c96(lVar4);
        FUN_140124ca5(param_1,lVar4);
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)local_34);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140124c96 FUN_140124c96 body=15 status=ok
// SIG undefined FUN_140124c96(void)

void FUN_140124c96(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  *(undefined8 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 140124ca5 FUN_140124ca5 body=112 status=ok
// SIG undefined FUN_140124ca5(void)

longlong * FUN_140124ca5(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  (**(code **)(*param_1 + 0x160))(param_1,param_2 + 1);
  return param_1;
}



// FUNCTION 140124d15 FUN_140124d15 body=775 status=ok
// SIG undefined FUN_140124d15(void)

longlong * FUN_140124d15(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  int local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 5,(longlong)*(int *)((longlong)param_2 + 0xc) << 5
            );
  (**(code **)(*param_1 + 0x10))
            (param_1,(int)param_2[5] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_2 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  uVar4 = local_60._4_4_;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_64 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    puVar2 = (ulonglong *)param_1[1];
    piVar1 = (int *)*puVar2 + 1;
    if ((int *)puVar2[1] < piVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_64,4);
      }
      else {
        FUN_14572512c(param_1,&local_64);
      }
    }
    else {
      local_64 = *(int *)*puVar2;
      *puVar2 = (ulonglong)piVar1;
    }
    local_58 = param_2 + 2;
    local_60 = (undefined4 *)&DAT_100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_2[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_88 = local_60;
    local_80 = local_58;
    local_70 = local_48;
    local_6c = local_44;
    local_78 = local_50;
    uVar5 = local_78;
    local_78._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_90 = param_2;
    if (local_78._4_4_ < (int)local_58[3]) {
      iVar7 = local_78._4_4_;
      local_78 = uVar5;
      do {
        puVar6 = (undefined4 *)((longlong)iVar7 * 0x20 + *local_90);
        puVar3 = *(undefined4 **)param_1[1];
        if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,puVar6,4);
          }
          else {
            FUN_14572512c(param_1,puVar6);
          }
        }
        else {
          *puVar6 = *puVar3;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
        }
        FUN_1447a84cc(param_1,puVar6 + 2);
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar7 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  else {
    local_60 = (undefined4 *)((ulonglong)local_60._4_4_ << 0x20);
    puVar2 = (ulonglong *)param_1[1];
    puVar3 = (undefined4 *)*puVar2 + 1;
    if ((undefined4 *)puVar2[1] < puVar3) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_60,4);
      }
      else {
        FUN_14572512c(param_1,&local_60);
      }
    }
    else {
      local_60 = (undefined4 *)CONCAT44(uVar4,*(undefined4 *)*puVar2);
      *puVar2 = (ulonglong)puVar3;
    }
    FUN_1403fa6f6(param_2,(ulonglong)local_60 & 0xffffffff);
    uVar5 = local_78;
    if (0 < (int)local_60) {
      iVar7 = 0;
      do {
        FUN_14012501e(param_2,&local_90);
        puVar6 = local_88;
        *local_88 = 0;
        *(undefined8 *)(local_88 + 2) = 0;
        *(undefined8 *)(local_88 + 4) = 0;
        local_88[6] = 0xffffffff;
        puVar3 = *(undefined4 **)param_1[1];
        if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,local_88,4);
          }
          else {
            FUN_14572512c(param_1,local_88);
          }
        }
        else {
          *local_88 = *puVar3;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
        }
        FUN_1447a84cc(param_1,puVar6 + 2);
        iVar7 = iVar7 + 1;
        uVar5 = local_78;
      } while (iVar7 < (int)local_60);
    }
  }
  local_78 = uVar5;
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14012501e FUN_14012501e body=715 status=ok
// SIG undefined FUN_14012501e(void)

int * FUN_14012501e(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar15 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar15 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar15) {
      FUN_1447711aa(param_1,iVar15);
    }
    iVar8 = (int)param_1[5];
    if (iVar8 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar8 + 0x1e;
      if (-1 < iVar8 + -1) {
        iVar2 = iVar8 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar12 = param_1 + 2;
    iVar9 = iVar8 + 1;
    iVar16 = iVar8 + 0x1f;
    if (-1 < iVar8) {
      iVar16 = iVar8;
    }
    if (iVar16 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar9;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar8) {
        iVar2 = iVar8;
        if (iVar8 + 0x20U < 0xa0) {
          iVar9 = 0x80;
        }
        else {
          uVar18 = iVar8 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar11 = 4;
            if (4 < uVar18) {
              uVar11 = uVar18;
            }
          }
          else {
            uVar11 = uVar18 + (uVar18 * 3 >> 3) + 0x10;
          }
          uVar6 = (ulonglong)(uVar11 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar3 = (uint)(uVar6 + 0xf);
              if (uVar11 < 0x1ffd) {
                uVar6 = (ulonglong)
                        (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 + 0xf >> 4]];
              }
              else {
                uVar10 = (ulonglong)(uVar3 & 0xfffffff0);
                if (uVar10 < 0x7ff1) {
                  bVar7 = (&DAT_14c841e00)[uVar3 >> 4];
                  uVar14 = 0x32;
                  if (0x32 < bVar7) {
                    uVar14 = (ulonglong)bVar7;
                  }
                  uVar17 = 0x32 - (ulonglong)bVar7;
                  do {
                    uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar17 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar17 & 0xffffffff] & 0xf) == 0) goto LAB_1401251cd;
                    lVar5 = uVar14 + 1 + uVar17;
                    uVar17 = uVar17 - 1;
                  } while (lVar5 != 0x33);
                }
                uVar6 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar6 = (ulonglong)DAT_14c841df8;
                }
                uVar6 = -uVar6 & (uVar10 + uVar6) - 1;
              }
            }
            else {
              uVar6 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar6,0);
              iVar2 = (int)param_1[5];
            }
          }
LAB_1401251cd:
          iVar4 = (int)(uVar6 >> 2);
          iVar9 = -0x20;
          if ((int)uVar18 <= iVar4) {
            iVar9 = iVar4 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar9;
        FUN_1446efbd8(plVar12,iVar2);
        iVar9 = (int)param_1[5] + 1;
      }
      iVar2 = iVar9 + 0x1f;
      if (-1 < iVar9) {
        iVar2 = iVar9;
      }
      *(int *)(param_1 + 5) = iVar9;
      if (iVar9 % 0x20 != 0) {
        plVar13 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar13 = plVar12;
        }
        bVar7 = -(char)(iVar9 % 0x20);
        *(uint *)((longlong)plVar13 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar13 + (longlong)(iVar2 >> 5) * 4) << (bVar7 & 0x1f)) >>
             (bVar7 & 0x1f);
      }
    }
    lVar5 = (longlong)iVar15;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[4];
    }
    bVar7 = (byte)iVar8 & 0x1f;
    puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar16 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
  }
  else {
    iVar15 = (int)param_1[6];
    lVar5 = (longlong)iVar15;
    iVar8 = *(int *)(*param_1 + 4 + lVar5 * 0x20);
    *(int *)(param_1 + 6) = iVar8;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x20) = 0xffffffff;
    }
  }
  plVar12 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar12 = (longlong *)param_1[4];
  }
  iVar8 = iVar15 + 0x1f;
  if (-1 < iVar15) {
    iVar8 = iVar15;
  }
  puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar8 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar15 & 0x1f);
  *param_2 = iVar15;
  *(longlong *)(param_2 + 2) = lVar5 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 1401252ea FUN_1401252ea body=440 status=ok
// SIG undefined FUN_1401252ea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1401252ea(undefined8 *param_1)

{
  void *pvVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c87e460) {
    FUN_144b3d300(&DAT_14c87e460);
    if (DAT_14c87e460 == -1) {
      InitializeSRWLock((PSRWLOCK)&DAT_14c87d788);
      DAT_14c87e3a0 = 0;
      _DAT_14c87e3a8 = 0x4000000000;
      DAT_14c87d790 = (void *)0x0;
      _DAT_14c87d798 = 0;
      DAT_14c87e3b8 = 0;
      _DAT_14c87e3c0 = 0x4000000000;
      uRam000000014c87e3c8 = 0xffffffff;
      DAT_14c87e450 = 0;
      _DAT_14c87e458 = 0;
      atexit((_func_5014 *)&LAB_142790ecc);
      _Init_thread_footer(&DAT_14c87e460);
    }
  }
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c87d788);
  if (DAT_14c87e3a8 == DAT_14c87e3cc) {
    *param_1 = 0;
    uVar2 = _DAT_14c87d798;
    pvVar1 = DAT_14c87d790;
    lVar3 = (longlong)DAT_14c87d798;
    *(int *)(param_1 + 1) = DAT_14c87d798;
    if (lVar3 == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1401254a2(param_1,uVar2 & 0xffffffff,0);
      memcpy((void *)*param_1,pvVar1,lVar3 * 0x28);
    }
    ReleaseSRWLockShared((PSRWLOCK)&DAT_14c87d788);
  }
  else {
    ReleaseSRWLockShared((PSRWLOCK)&DAT_14c87d788);
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c87d788);
    FUN_1401257b8(&DAT_14c87d788);
    *param_1 = 0;
    uVar2 = _DAT_14c87d798;
    pvVar1 = DAT_14c87d790;
    lVar3 = (longlong)DAT_14c87d798;
    *(int *)(param_1 + 1) = DAT_14c87d798;
    if (lVar3 == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1401254a2(param_1,uVar2 & 0xffffffff,0);
      memcpy((void *)*param_1,pvVar1,lVar3 * 0x28);
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c87d788);
  }
  return param_1;
}



// FUNCTION 1401254a2 FUN_1401254a2 body=334 status=ok
// SIG undefined FUN_1401254a2(void)

void FUN_1401254a2(longlong param_1,int param_2,int param_3)

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
    uVar4 = (longlong)param_2 * 0x28;
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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140125514;
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
LAB_140125514:
    iVar5 = (int)(uVar4 / 0x28);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x28,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1401255f0 FUN_1401255f0 body=113 status=ok
// SIG undefined FUN_1401255f0(void)

void FUN_1401255f0(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x28,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x28)) {
      uVar2 = uVar1 / 0x28 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x28,8);
  }
  return;
}



// FUNCTION 140125662 FUN_140125662 body=341 status=ok
// SIG undefined FUN_140125662(void)

longlong * FUN_140125662(longlong *param_1,longlong param_2)

{
  byte *pbVar1;
  ulonglong *puVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  byte local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_21 = 0;
  puVar2 = (ulonglong *)param_1[1];
  pbVar1 = (byte *)*puVar2 + 1;
  if ((byte *)puVar2[1] < pbVar1) {
    (**(code **)(*param_1 + 0x170))(param_1,&local_21,1);
  }
  else {
    local_21 = *(byte *)*puVar2;
    *puVar2 = (ulonglong)pbVar1;
  }
  if ((local_21 & 1) != 0) {
    (**(code **)(*param_1 + 0x160))(param_1,param_2);
  }
  if ((local_21 & 2) != 0) {
    local_30 = 0;
    (**(code **)(*param_1 + 0x160))(param_1,&local_30);
    if (((int)local_30 == (int)DAT_14c99df08) && (local_30._4_4_ == DAT_14c99df08._4_4_)) {
      *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) | 1;
    }
  }
  if ((local_21 & 4) != 0) {
    local_30 = 0;
    (**(code **)(*param_1 + 0x160))(param_1,&local_30);
    if (((int)local_30 == DAT_14c99def8) && (local_30._4_4_ == DAT_14c99defc)) {
      *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) | 2;
    }
    else if (((int)local_30 == DAT_14c99df00) && (local_30._4_4_ == DAT_14c99df04)) {
      *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) | 4;
    }
    else {
      *(undefined8 *)(param_2 + 0xc) = local_30;
    }
  }
  if ((local_21 & 8) != 0) {
    (**(code **)(*param_1 + 0x160))(param_1,param_2 + 0xc);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1401257b8 FUN_1401257b8 body=816 status=ok
// SIG undefined FUN_1401257b8(void)

void FUN_1401257b8(longlong param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong *puVar15;
  int *piVar16;
  undefined1 auStack_c8 [40];
  int local_a0;
  int local_9c;
  ulonglong local_98;
  longlong local_90;
  longlong *local_88;
  ulonglong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(param_1 + 0xc20) != *(int *)(param_1 + 0xc44)) {
    local_98 = param_1 + 0xc28;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    uStack_60 = local_98;
    if (*(int *)(param_1 + 0xc38) == 0) {
      uVar14 = 1;
      local_58._0_4_ = 0xffffffff;
      iVar9 = 0;
      local_58._4_4_ = 0;
      uVar13 = 0;
    }
    else {
      FUN_144a7765a(&local_68);
      uVar13 = local_68 & 0xffffffff;
      uVar14 = local_68 >> 0x20;
      iVar9 = *(int *)(param_1 + 0xc38);
    }
    uVar3 = uStack_60;
    local_90 = param_1 + 0x18;
    local_a0 = local_50;
    if (local_58._4_4_ != iVar9 || uStack_60 != local_98) {
      local_88 = (longlong *)(param_1 + 8);
      uVar8 = (uint)local_58;
      iVar7 = local_58._4_4_;
      local_9c = iVar9;
      do {
        lVar11 = *(longlong *)(param_1 + 0xc18);
        if (*(longlong *)(param_1 + 0xc18) == 0) {
          lVar11 = local_90;
        }
        puVar15 = (ulonglong *)((longlong)iVar7 * 0x30 + lVar11);
        local_80 = uVar13;
        if ((longlong)*(int *)(param_1 + 0x10) != 0) {
          piVar16 = *(int **)(param_1 + 8);
          lVar11 = (longlong)*(int *)(param_1 + 0x10) * 0x28;
          do {
            if ((((*piVar16 == (int)*puVar15) && (piVar16[1] == *(int *)((longlong)puVar15 + 4))) &&
                (piVar16[2] == (int)puVar15[1])) &&
               (piVar16[3] == *(int *)((longlong)puVar15 + 0xc))) {
              if (piVar16 != (int *)0x0) {
                if (piVar16[4] == (int)puVar15[2]) {
                  uVar13 = puVar15[3];
                  FUN_14278ffaa(piVar16,&local_70);
                  FUN_1402ca022(local_70,uVar13);
                }
                piVar16[5] = piVar16[5] + 1;
                goto LAB_140125962;
              }
              break;
            }
            piVar16 = piVar16 + 10;
            lVar11 = lVar11 + -0x28;
          } while (lVar11 != 0);
        }
        uVar13 = puVar15[4];
        FUN_1446f470e(&local_78,puVar15[3],1);
        uVar2 = local_78;
        uVar12 = puVar15[2];
        local_68 = *puVar15;
        uStack_60 = puVar15[1];
        iVar9 = *(int *)(param_1 + 0x10);
        lVar11 = (longlong)iVar9;
        *(uint *)(param_1 + 0x10) = iVar9 + 1U;
        if (*(uint *)(param_1 + 0x14) < iVar9 + 1U) {
          FUN_14009063a(local_88,iVar9);
        }
        lVar10 = *local_88;
        puVar1 = (undefined4 *)(lVar10 + lVar11 * 0x28);
        *puVar1 = (undefined4)local_68;
        puVar1[1] = local_68._4_4_;
        puVar1[2] = (undefined4)uStack_60;
        puVar1[3] = uStack_60._4_4_;
        *(int *)(lVar10 + 0x10 + lVar11 * 0x28) = (int)uVar12;
        *(undefined4 *)(lVar10 + 0x14 + lVar11 * 0x28) = 1;
        *(ulonglong *)(lVar10 + 0x18 + lVar11 * 0x28) = uVar13;
        *(undefined8 *)(lVar10 + 0x20 + lVar11 * 0x28) = uVar2;
LAB_140125962:
        uVar8 = uVar8 & ~(uint)uVar14;
        uVar12 = *(ulonglong *)(uVar3 + 8);
        if (*(ulonglong *)(uVar3 + 8) == 0) {
          uVar12 = uVar3;
        }
        iVar9 = *(int *)(uVar3 + 0x10);
        iVar7 = (int)local_80;
        lVar11 = (longlong)iVar7;
        uVar6 = *(uint *)(uVar12 + lVar11 * 4) & uVar8;
        uVar13 = local_80;
        if (uVar6 == 0) {
          iVar4 = iVar9 + 0x1e;
          if (-1 < iVar9 + -1) {
            iVar4 = iVar9 + -1;
          }
          iVar4 = iVar4 >> 5;
          local_a0 = local_a0 + 0x20;
          iVar5 = iVar4;
          if (iVar4 < iVar7) {
            iVar5 = iVar7;
          }
          if (iVar7 < iVar4) {
            lVar10 = 0;
            do {
              uVar6 = *(uint *)(uVar12 + lVar11 * 4 + 4 + lVar10 * 4);
              if (uVar6 != 0) {
                uVar13 = (ulonglong)(iVar7 + (int)lVar10 + 1);
                uVar8 = 0xffffffff;
                goto LAB_140125987;
              }
              local_a0 = local_a0 + 0x20;
              lVar10 = lVar10 + 1;
            } while (iVar5 - lVar11 != lVar10);
            uVar8 = 0xffffffff;
            iVar7 = iVar5;
          }
          uVar13 = (ulonglong)(iVar7 + 1);
          iVar7 = iVar9;
        }
        else {
LAB_140125987:
          uVar14 = (ulonglong)(-uVar6 & uVar6);
          uVar12 = uVar14 * 2 + 1;
          lVar11 = 0x3f;
          if (uVar12 != 0) {
            for (; uVar12 >> lVar11 == 0; lVar11 = lVar11 + -1) {
            }
          }
          iVar7 = (local_a0 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
          if (iVar9 <= iVar7) {
            iVar7 = iVar9;
          }
        }
      } while (iVar7 != local_9c || uVar3 != local_98);
    }
    FUN_1456d0294(local_90);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140125af8 FUN_140125af8 body=132 status=ok
// SIG undefined FUN_140125af8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140125af8(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (plVar1 = (longlong *)param_1[1], plVar1 != (longlong *)0x0)) {
    if (plVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar1 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar1;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140125b88 FUN_140125b88 body=117 status=ok
// SIG undefined FUN_140125b88(void)

longlong * FUN_140125b88(longlong *param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = param_3;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined1 *)(param_2 + 0x70);
  }
  *(undefined1 *)((longlong)param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 2) = param_4;
  FUN_140125bfd(param_1);
  *(undefined1 *)(*(longlong *)(*param_1 + 0x158) + (longlong)(int)param_1[1]) = 0;
  *(undefined1 *)(*(longlong *)(*param_1 + 0x230) + (longlong)(int)param_1[1]) = 0;
  *(undefined8 *)(*(longlong *)(*param_1 + 0x1e8) + (longlong)(int)param_1[1] * 8) = 0;
  return param_1;
}



// FUNCTION 140125bfd FUN_140125bfd body=161 status=ok
// SIG undefined FUN_140125bfd(void)

void FUN_140125bfd(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  lVar3 = param_1[1];
  lVar2 = *(longlong *)(*param_1 + 0x28);
  puVar1 = (undefined8 *)(lVar2 + (longlong)(int)lVar3 * 0x18);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar2 + 0x10 + (longlong)(int)lVar3 * 0x18) = 0;
  fVar4 = (float)DAT_14c8463e8;
  fVar5 = (float)DAT_14c8463e0;
  fVar6 = (float)DAT_14c8463d8;
  lVar2 = *(longlong *)(*param_1 + 0x48);
  lVar3 = (longlong)(int)param_1[1] * 0x10;
  *(float *)(lVar2 + lVar3) = (float)DAT_14c8463d0;
  *(float *)(lVar2 + 4 + lVar3) = fVar6;
  *(float *)(lVar2 + 8 + lVar3) = fVar5;
  *(float *)(lVar2 + 0xc + lVar3) = fVar4;
  *(undefined2 *)(*(longlong *)(*param_1 + 0x170) + (longlong)(int)param_1[1] * 2) = 0;
  *(undefined1 *)(*(longlong *)(*param_1 + 0x200) + (longlong)(int)param_1[1]) = 0;
  *(undefined1 *)(*(longlong *)(*param_1 + 0x218) + (longlong)(int)param_1[1]) = 1;
  return;
}



// FUNCTION 140125c9e FUN_140125c9e body=208 status=ok
// SIG undefined FUN_140125c9e(void)

void FUN_140125c9e(longlong *param_1,uint param_2,char param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  
  iVar2 = (int)param_1[1];
  if (iVar2 < (int)param_2) {
    *(uint *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < param_2 - iVar2) {
      FUN_140125ed4(param_1);
    }
    memset((void *)((longlong)iVar2 * 8 + *param_1),0,(longlong)(int)(param_2 - iVar2) << 3);
    return;
  }
  if (-1 < (int)param_2) {
    iVar3 = iVar2 - param_2;
    if (iVar3 != 0 && (int)param_2 <= iVar2) {
      _Dst = (void *)((ulonglong)param_2 * 8 + *param_1);
      FUN_140081195(_Dst,iVar3);
      iVar1 = (int)param_1[1] - iVar2;
      if (iVar1 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + (longlong)iVar3 * 8),(longlong)iVar1 << 3);
        iVar2 = (int)param_1[1];
      }
      *(int *)(param_1 + 1) = iVar2 - iVar3;
      if (param_3 == '\x01') {
        FUN_146e0eb44(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 140125d6e FUN_140125d6e body=356 status=ok
// SIG undefined FUN_140125d6e(void)

void FUN_140125d6e(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140125df3;
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
LAB_140125df3:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140125ed4 FUN_140125ed4 body=353 status=ok
// SIG undefined FUN_140125ed4(void)

void FUN_140125ed4(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140125f5b;
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
LAB_140125f5b:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140126036 FUN_140126036 body=398 status=ok
// SIG undefined FUN_140126036(void)

void FUN_140126036(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14481578e(param_1,0);
  }
  plVar1 = param_1 + 2;
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    FUN_14481578e(plVar1,0);
  }
  if ((longlong)*(int *)(param_2 + 0x390) != 0) {
    lVar12 = *(longlong *)(param_2 + 0x388);
    lVar9 = (longlong)*(int *)(param_2 + 0x390) * 0x50 + lVar12;
    do {
      plVar3 = *(longlong **)(lVar12 + 0x40);
      if (plVar3 != (longlong *)0x0) {
        cVar6 = (**(code **)(*plVar3 + 0x348))(plVar3,(char)param_1[4]);
        cVar7 = (**(code **)(**(longlong **)(lVar12 + 0x40) + 0x350))
                          (*(longlong **)(lVar12 + 0x40),(char)param_1[4]);
        if (((cVar6 != '\0') || (cVar7 != '\0')) &&
           (iVar10 = *(int *)(param_3 + 0x170), (longlong)iVar10 != 0)) {
          lVar4 = *(longlong *)(lVar12 + 0x40);
          lVar5 = *(longlong *)(param_3 + 0x168);
          uVar11 = 0;
          do {
            lVar8 = FUN_14479d2ce(lVar5 + uVar11);
            if (lVar8 == lVar4) {
              iVar10 = (int)(uVar11 >> 2) * -0x55555555;
              if (iVar10 != -1) {
                if (cVar6 != '\0') {
                  iVar2 = (int)param_1[1];
                  *(uint *)(param_1 + 1) = iVar2 + 1U;
                  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
                    FUN_1446f48e2(param_1,iVar2);
                  }
                  *(int *)(*param_1 + (longlong)iVar2 * 4) = iVar10;
                }
                if (cVar7 != '\0') {
                  iVar2 = (int)param_1[3];
                  *(uint *)(param_1 + 3) = iVar2 + 1U;
                  if (*(uint *)((longlong)param_1 + 0x1c) < iVar2 + 1U) {
                    FUN_1446f48e2(plVar1,iVar2);
                  }
                  *(int *)(*plVar1 + (longlong)iVar2 * 4) = iVar10;
                }
              }
              break;
            }
            uVar11 = uVar11 + 0xc;
          } while ((longlong)iVar10 * 0xc != uVar11);
        }
      }
      lVar12 = lVar12 + 0x50;
    } while (lVar12 != lVar9);
  }
  return;
}



// FUNCTION 1401261c4 FUN_1401261c4 body=1136 status=ok
// SIG undefined FUN_1401261c4(void)

undefined8 * FUN_1401261c4(longlong param_1,undefined8 *param_2,longlong param_3,uint param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  char *pcVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  bool bVar9;
  undefined1 auStack_158 [32];
  undefined8 *local_138;
  undefined8 *local_130;
  undefined8 *local_128;
  undefined1 local_120;
  uint local_10c;
  undefined1 local_108 [96];
  undefined8 local_a8 [12];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (param_3 == 0) {
    puVar8 = &DAT_14c846480;
    for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
      *param_2 = *puVar8;
      puVar8 = puVar8 + 1;
      param_2 = param_2 + 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_158);
  }
  lVar2 = 0x468;
  if (param_4 < 4) {
    lVar2 = *(longlong *)(&DAT_14bb907d8 + (ulonglong)param_4 * 8);
  }
  pcVar3 = "";
  if (*(char **)(param_3 + lVar2) != (char *)0x0) {
    pcVar3 = *(char **)(param_3 + lVar2);
  }
  if (*pcVar3 != '\x01') goto LAB_14012642f;
  if (param_4 < 2) {
    bVar9 = (param_4 - 1 & 0xfffffffd) == 0;
    uVar5 = bVar9 | 2;
LAB_140126250:
    puVar8 = *(undefined8 **)(param_3 + 0x418 + (ulonglong)(bVar9 ^ 1) * 0x20);
    if (((puVar8 == (undefined8 *)0x0) &&
        (puVar8 = &DAT_14cc07c00,
        *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc07c60)) && (FUN_144b3d300(&DAT_14cc07c60), DAT_14cc07c60 == -1)) {
      puVar8 = &DAT_14cc07c00;
      puVar6 = &DAT_14c846480;
      puVar7 = &DAT_14cc07c00;
      for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      _Init_thread_footer(&DAT_14cc07c60);
    }
    local_130 = &DAT_14c846480;
    local_138 = (undefined8 *)CONCAT44(local_138._4_4_,uVar5);
    local_10c = uVar5;
    FUN_1444a2580(param_1,local_a8,puVar8,param_3 + 0x110);
    puVar8 = *(undefined8 **)(param_3 + 0x408 + (ulonglong)(param_4 != 1) * 0x20);
    if (puVar8 != (undefined8 *)0x0) {
      puVar6 = local_a8;
      for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
    }
    puVar1 = *(undefined1 **)(param_3 + 0x458 + (ulonglong)(param_4 != 1) * 0x20);
    puVar4 = &DAT_14cc07bfc;
    if (puVar1 != (undefined1 *)0x0) {
      puVar4 = puVar1;
    }
    *puVar4 = 0;
    if (*(char *)(param_1 + 0x4c8) != '\x01') goto LAB_14012642f;
    local_128 = &DAT_14c846480;
    local_138 = local_a8;
    local_120 = 0;
    local_130 = (undefined8 *)CONCAT71(local_130._1_7_,1);
    FUN_1444a3b48(param_1,local_108,param_3 + 0x110,local_10c);
  }
  else {
    lVar2 = 0x400;
    uVar5 = param_4;
    if (param_4 != 3) {
      bVar9 = (param_4 - 1 & 0xfffffffd) == 0;
      uVar5 = bVar9 | 2;
      lVar2 = 0x420;
      if (param_4 < 2) goto LAB_140126250;
    }
    puVar8 = *(undefined8 **)(param_3 + 8 + lVar2);
    local_10c = uVar5;
    if (((puVar8 == (undefined8 *)0x0) &&
        (puVar8 = &DAT_14cc07c00,
        *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc07c60)) && (FUN_144b3d300(&DAT_14cc07c60), DAT_14cc07c60 == -1)) {
      puVar8 = &DAT_14cc07c00;
      puVar6 = &DAT_14c846480;
      puVar7 = &DAT_14cc07c00;
      for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      _Init_thread_footer(&DAT_14cc07c60);
    }
    local_128 = &DAT_14c846480;
    local_120 = 0;
    local_130 = (undefined8 *)CONCAT71(local_130._1_7_,1);
    local_138 = puVar8;
    FUN_1444a3b48(param_1,local_a8,param_3 + 0x110,(ulonglong)param_4);
    puVar8 = *(undefined8 **)(param_3 + 0x418 + (ulonglong)(param_4 != 3) * 0x20);
    if (puVar8 != (undefined8 *)0x0) {
      puVar6 = local_a8;
      for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
    }
    puVar1 = *(undefined1 **)(param_3 + 0x448 + (ulonglong)(param_4 != 3) * 0x20);
    puVar4 = &DAT_14cc07bfc;
    if (puVar1 != (undefined1 *)0x0) {
      puVar4 = puVar1;
    }
    *puVar4 = 0;
    if (*(char *)(param_1 + 0x4c8) != '\x01') goto LAB_14012642f;
    local_130 = &DAT_14c846480;
    local_138 = (undefined8 *)CONCAT44(local_138._4_4_,local_10c);
    FUN_1444a2580(param_1,local_108,local_a8,param_3 + 0x110);
  }
  FUN_1491de36e();
LAB_14012642f:
  if (param_4 == 0) {
    param_3 = param_3 + 0x420;
  }
  else if (param_4 == 1) {
    param_3 = param_3 + 0x400;
  }
  else if (param_4 == 3) {
    param_3 = param_3 + 0x410;
  }
  else {
    param_3 = param_3 + 0x430;
  }
  puVar8 = *(undefined8 **)(param_3 + 8);
  if (((puVar8 == (undefined8 *)0x0) &&
      (puVar8 = &DAT_14cc07c00,
      *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc07c60)) && (FUN_144b3d300(&DAT_14cc07c60), DAT_14cc07c60 == -1)) {
    puVar8 = &DAT_14cc07c00;
    puVar6 = &DAT_14c846480;
    puVar7 = &DAT_14cc07c00;
    for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    _Init_thread_footer(&DAT_14cc07c60);
  }
  puVar6 = param_2;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar6 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar6 = puVar6 + 1;
  }
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14012663a FUN_14012663a body=101 status=ok
// SIG undefined FUN_14012663a(void)

undefined8 FUN_14012663a(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_14498f84a();
  if (cVar1 == '\0') {
LAB_14012669b:
    uVar2 = 0;
  }
  else {
    cVar1 = FUN_14012669f(param_1);
    if (cVar1 != '\0') {
      cVar1 = FUN_144b13553(param_1);
      if (cVar1 != '\0') {
        cVar1 = FUN_144b1320f(param_1);
        if (cVar1 != '\0') {
          cVar1 = FUN_142d32f2b(param_1);
          if (cVar1 != '\0') {
            cVar1 = FUN_147221fe6(param_1);
            if (cVar1 != '\0') {
              cVar1 = FUN_147225e4d(param_1);
              if (cVar1 != '\0') goto LAB_14012669b;
            }
          }
        }
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 14012669f FUN_14012669f body=330 status=ok
// SIG undefined FUN_14012669f(void)

undefined8 FUN_14012669f(undefined8 param_1)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  bool bVar7;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca97070) {
    FUN_144b3d300(&DAT_14ca97070);
    if (DAT_14ca97070 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar5 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Raytracing.Enable",1);
      if (plVar5 == (longlong *)0x0) {
        DAT_14ca97068 = 0;
      }
      else {
        DAT_14ca97068 = (**(code **)(*plVar5 + 0x68))(plVar5);
      }
      _Init_thread_footer(&DAT_14ca97070);
    }
  }
  lVar1 = DAT_14ca97068;
  bVar7 = true;
  cVar2 = DAT_14ca96da8;
  if (DAT_14ca97068 != 0 && DAT_14ca96da8 == '\x02') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar6 = 0;
      cVar2 = '\x02';
    }
    else {
      bVar3 = FUN_144a61b4f();
      uVar6 = (ulonglong)(bVar3 ^ 1);
      cVar2 = DAT_14ca96da8;
    }
    bVar7 = *(int *)(lVar1 + uVar6 * 4) != 0;
  }
  if ((bVar7) && (cVar2 != '\0')) {
    cVar2 = FUN_141767a62(param_1);
    if ((cVar2 != '\0') && (*(int *)(DAT_14c9fa1e8 + 4) != 0)) {
      return 1;
    }
  }
  uVar4 = FUN_1401267e9(param_1);
  return uVar4;
}



// FUNCTION 1401267e9 FUN_1401267e9 body=325 status=ok
// SIG undefined FUN_1401267e9(void)

bool FUN_1401267e9(undefined8 param_1)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  longlong *plVar4;
  ulonglong uVar5;
  bool bVar6;
  bool bVar7;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca97070) {
    FUN_144b3d300(&DAT_14ca97070);
    if (DAT_14ca97070 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar4 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Raytracing.Enable",1);
      if (plVar4 == (longlong *)0x0) {
        DAT_14ca97068 = 0;
      }
      else {
        DAT_14ca97068 = (**(code **)(*plVar4 + 0x68))(plVar4);
      }
      _Init_thread_footer(&DAT_14ca97070);
    }
  }
  lVar1 = DAT_14ca97068;
  bVar7 = true;
  cVar2 = DAT_14ca96da8;
  if (DAT_14ca97068 != 0 && DAT_14ca96da8 == '\x02') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar5 = 0;
      cVar2 = '\x02';
    }
    else {
      bVar3 = FUN_144a61b4f();
      uVar5 = (ulonglong)(bVar3 ^ 1);
      cVar2 = DAT_14ca96da8;
    }
    bVar7 = *(int *)(lVar1 + uVar5 * 4) != 0;
  }
  bVar6 = false;
  if ((bVar7) && (cVar2 != '\0')) {
    cVar2 = FUN_141767a62(param_1);
    if (cVar2 == '\0') {
      bVar6 = false;
    }
    else {
      bVar6 = *(int *)(DAT_14c9f28e8 + 4) != 0;
    }
  }
  return bVar6;
}



// FUNCTION 14012692e FUN_14012692e body=52 status=ok
// SIG undefined FUN_14012692e(void)

void FUN_14012692e(longlong *param_1)

{
  FUN_140126962(param_1 + 2);
  if (param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140126958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x28))(param_1,1);
    return;
  }
  return;
}



// FUNCTION 140126962 FUN_140126962 body=93 status=ok
// SIG undefined FUN_140126962(void)

void FUN_140126962(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  iVar2 = *piVar1;
  if (iVar2 == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    iVar2 = *piVar1;
  }
  *piVar1 = 0x40000002;
  FUN_1449b3b46(*param_1,2);
  *(int *)(*param_1 + 0x48) = *(int *)(*param_1 + 0x48) + -1;
  *piVar1 = iVar2;
  return;
}



// FUNCTION 1401269c0 FUN_1401269c0 body=15 status=ok
// SIG undefined FUN_1401269c0(void)

undefined4 FUN_1401269c0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  size_t sVar3;
  wchar_t *_Str;
  undefined1 auStack_e8 [32];
  wchar_t *pwStack_c8;
  int iStack_c0;
  undefined1 auStack_b8 [128];
  longlong lStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  ulonglong uStack_20;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return 0;
  }
  uStack_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((*(byte *)(lVar1 + 1) & 2) == 0) {
    FUN_1400021e4(param_2,&pwStack_c8);
    _Str = pwStack_c8;
    if (iStack_c0 == 0) {
      _Str = L"";
    }
    lStack_38 = 0;
    if (_Str == (wchar_t *)0x0) {
      uStack_30 = 0;
      uStack_28 = 0;
    }
    else {
      sVar3 = wcslen(_Str);
      FUN_1449b853c(auStack_b8,_Str,sVar3 & 0xffffffff,1);
    }
    uVar2 = FUN_140126aca(lVar1,uStack_30);
    if (lStack_38 != 0) {
      FUN_1400020a8();
    }
    if (pwStack_c8 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    uVar2 = 0;
  }
  if ((uStack_20 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 1401269d0 FUN_1401269d0 body=249 status=ok
// SIG undefined FUN_1401269d0(void)

undefined4 FUN_1401269d0(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  size_t sVar2;
  wchar_t *_Str;
  undefined1 auStack_e8 [32];
  wchar_t *local_c8;
  int local_c0;
  undefined1 local_b8 [128];
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((*(byte *)(param_1 + 1) & 2) == 0) {
    FUN_1400021e4(param_2,&local_c8);
    _Str = local_c8;
    if (local_c0 == 0) {
      _Str = L"";
    }
    local_38 = 0;
    if (_Str == (wchar_t *)0x0) {
      local_30 = 0;
      local_28 = 0;
    }
    else {
      sVar2 = wcslen(_Str);
      FUN_1449b853c(local_b8,_Str,sVar2 & 0xffffffff,1);
    }
    uVar1 = FUN_140126aca(param_1,local_30);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    if (local_c8 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    uVar1 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 140126aca FUN_140126aca body=229 status=ok
// SIG undefined FUN_140126aca(void)

bool FUN_140126aca(byte *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  longlong local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*param_1 & 3) == 1) {
    plVar3 = *(longlong **)(param_1 + 0x18);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
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
          (**(code **)(*plVar3 + 8))(plVar3);
        }
      }
    }
    uVar5 = FUN_1401418d6(param_2);
    *(undefined8 *)(param_1 + 8) = uVar5;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    local_40 = 0;
    uStack_38 = 0;
    FUN_1446ddda2(&local_58,uVar5,0);
    uVar4 = FUN_14009aea0(&DAT_14c9a1320,&local_58);
    *(undefined4 *)(param_1 + 4) = uVar4;
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    bVar6 = *(longlong *)(param_1 + 8) == 0;
  }
  else {
    bVar6 = false;
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140126bb0 FUN_140126bb0 body=656 status=ok
// SIG undefined FUN_140126bb0(void)

void FUN_140126bb0(char *param_1,uint param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  ushort uVar3;
  ushort *puVar4;
  code *pcVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined1 auStack_a8 [32];
  undefined4 *local_88;
  uint local_80;
  undefined4 local_7c;
  undefined4 *local_78;
  int local_70;
  undefined1 local_68 [8];
  longlong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140126eee(local_68,param_1);
  FUN_140126e42(&local_78,param_1);
  if (*param_1 == '\x01') {
    iVar8 = *(int *)(param_1 + 0x30);
    bVar2 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar8);
    local_80 = (uint)bVar2;
    *(int *)(param_1 + 0x30) = iVar8 + 1;
    local_88 = (undefined4 *)
               ((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar2 * 4 +
               *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar8 * 8));
  }
  else {
    puVar4 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar3 = *puVar4;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar4 + 1;
    uVar6 = uVar3 & 0x7fff;
    if (uVar6 == 0x7fff) {
      local_88 = &local_7c;
      local_80 = 0;
    }
    else {
      lVar7 = *(longlong *)(param_1 + 0x80);
      local_80 = 1;
      local_88 = (undefined4 *)
                 ((ulonglong)(uVar6 * *(int *)(lVar7 + 0x80)) + *(longlong *)(lVar7 + 0x70) +
                 (longlong)*(int *)(lVar7 + 0x4c) * 4);
    }
  }
  if (((int)param_2 < 0) || (*(int *)(local_60 + 0xe0) <= (int)param_2)) {
    piVar9 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar9 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar9) {
      iVar8 = 0;
      do {
        *local_78 = 0;
        puVar1 = local_88 + (int)local_80;
        local_78 = local_78 + local_70;
        *local_88 = 0;
        iVar8 = iVar8 + 1;
        piVar9 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar9 = (int *)(param_1 + 0x3c);
        }
        local_88 = puVar1;
      } while (iVar8 < *piVar9);
    }
  }
  else {
    lVar7 = local_60 + 0x38;
    if (*(longlong *)(local_60 + 0xd8) != 0) {
      lVar7 = *(longlong *)(local_60 + 0xd8);
    }
    puVar1 = (undefined4 *)(lVar7 + (ulonglong)param_2 * 0x28);
    if (*(char *)(puVar1 + 8) == '\x03') {
      uVar11 = *puVar1;
    }
    else {
      puVar10 = &local_58;
      FUN_1400b56fe(puVar10,puVar1,3);
      uVar11 = 0;
      if (local_38 != 0) {
        uVar11 = local_58;
      }
      pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
      if (pcVar5 != (code *)0x0) {
        if (0x18 < local_40) {
          puVar10 = (undefined4 *)CONCAT44(uStack_54,local_58);
        }
        (*pcVar5)(puVar10);
      }
      if (0x18 < local_40) {
        FUN_1400020a8(CONCAT44(uStack_54,local_58));
      }
    }
    piVar9 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar9 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar9) {
      iVar8 = 0;
      do {
        *local_78 = 0xffffffff;
        puVar1 = local_88 + (int)local_80;
        local_78 = local_78 + local_70;
        *local_88 = uVar11;
        iVar8 = iVar8 + 1;
        piVar9 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar9 = (int *)(param_1 + 0x3c);
        }
        local_88 = puVar1;
      } while (iVar8 < *piVar9);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140126e42 FUN_140126e42 body=171 status=ok
// SIG undefined FUN_140126e42(void)

void FUN_140126e42(longlong *param_1,char *param_2)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  uint uVar4;
  longlong lVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (*param_2 == '\x01') {
    *(uint *)(param_1 + 1) =
         (uint)*(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)*(int *)(param_2 + 0x30));
    iVar2 = *(int *)(param_2 + 0x30);
    *(int *)(param_2 + 0x30) = iVar2 + 1;
    lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar2 * 8);
    *param_1 = lVar5;
    lVar5 = lVar5 + (longlong)(int)param_1[1] * (longlong)*(int *)(param_2 + 0x44) * 4;
  }
  else {
    puVar3 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar1 = *puVar3;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar3 + 1;
    uVar4 = uVar1 & 0x7fff;
    if (uVar4 == 0x7fff) {
      *param_1 = (longlong)param_1 + 0xc;
      *(undefined4 *)(param_1 + 1) = 0;
      return;
    }
    lVar5 = (ulonglong)(uVar4 * *(int *)(*(longlong *)(param_2 + 0x80) + 0x80)) +
            *(longlong *)(*(longlong *)(param_2 + 0x80) + 0x70);
    *param_1 = lVar5;
    *(undefined4 *)(param_1 + 1) = 1;
    lVar5 = lVar5 + (longlong)*(int *)(*(longlong *)(param_2 + 0x80) + 0x4c) * 4;
  }
  *param_1 = lVar5;
  return;
}



// FUNCTION 140126eee FUN_140126eee body=148 status=ok
// SIG undefined FUN_140126eee(void)

void FUN_140126eee(int *param_1,char *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  int *piVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  
  if (*param_2 == '\x01') {
    iVar7 = *(int *)(param_2 + 0x30);
    *(int *)(param_2 + 0x30) = iVar7 + 1;
    iVar7 = **(int **)(*(longlong *)(param_2 + 0x20) + (longlong)iVar7 * 8);
    *param_1 = iVar7;
    plVar5 = (longlong *)(param_2 + 0x48);
  }
  else {
    puVar2 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar1 = *puVar2;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar2 + 1;
    uVar4 = uVar1 & 0x7fff;
    piVar3 = *(int **)(*(longlong *)(param_2 + 0x80) + 0x20);
    iVar7 = *piVar3;
    lVar6 = 0;
    if (iVar7 <= (int)uVar4) {
      do {
        uVar4 = uVar4 - iVar7;
        iVar7 = piVar3[lVar6 + 1];
        lVar6 = lVar6 + 1;
      } while (iVar7 <= (int)uVar4);
    }
    iVar7 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x80) + 0x18) + lVar6 * 8)
                    + (longlong)(int)uVar4);
    *param_1 = iVar7;
    plVar5 = (longlong *)(*(longlong *)(param_2 + 0x80) + 0x38);
  }
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(*plVar5 + (longlong)iVar7 * 8);
  return;
}



// FUNCTION 140126f82 FUN_140126f82 body=61 status=ok
// SIG undefined FUN_140126f82(void)

longlong FUN_140126f82(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1447262c2();
  if (lVar1 != 0) {
    lVar2 = FUN_140126fc0();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 140126fc0 FUN_140126fc0 body=228 status=ok
// SIG undefined FUN_140126fc0(void)

longlong FUN_140126fc0(void)

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
  if (DAT_14cb69c10 == 0) {
    local_30 = &local_10;
    local_10 = FUN_140940a0a;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4754c;
    local_38 = &LAB_148758bdf;
    local_40 = &LAB_1465233f4;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x520;
    FUN_14081cfa3(L"/Script/GbxGame",L"InventoryBase",&DAT_14cb69c10,FUN_1465233d2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb69c10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401270a6 FUN_1401270a6 body=269 status=ok
// SIG undefined FUN_1401270a6(void)

longlong FUN_1401270a6(void)

{
  longlong lVar1;
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
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = FUN_1447262c2();
  if (lVar1 != 0) {
    if (DAT_14cad3ae0 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141030f22;
      local_20 = FUN_14081d0ea;
      local_28 = FUN_142b4754c;
      local_38 = &LAB_147a36475;
      local_40 = &LAB_1463c0cc7;
      local_48 = L"Engine";
      local_50 = 0;
      local_58 = 0x10000005;
      local_60 = 8;
      local_68 = 0x428;
      FUN_14081cfa3(L"/Script/Engine",L"Controller",&DAT_14cad3ae0,FUN_1463c0ca0);
    }
    if ((*(int *)(DAT_14cad3ae0 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cad3ae0 + 0x38) * 8) == DAT_14cad3ae0 + 0x30)) goto LAB_1401270f3;
  }
  lVar1 = 0;
LAB_1401270f3:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401271b4 FUN_1401271b4 body=265 status=ok
// SIG undefined FUN_1401271b4(void)

undefined8 FUN_1401271b4(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  float fVar2;
  undefined1 auStack_a8 [32];
  undefined4 *local_88;
  undefined1 local_80;
  float local_78;
  float local_74;
  float local_70;
  undefined8 local_6c;
  undefined8 local_64;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = *(undefined8 *)(param_1 + 0x380);
  local_70 = (float)(**(code **)(*DAT_14c968098 + 0x58))();
  fVar2 = 1.0;
  if (*(longlong **)(param_1 + 0x510) != (longlong *)0x0) {
    fVar2 = (float)(**(code **)(**(longlong **)(param_1 + 0x510) + 0xf8))();
  }
  local_70 = local_70 * fVar2;
  local_74 = *(float *)(param_1 + 0x394) * (1.0 / local_70);
  local_78 = (1.0 / local_70) * *(float *)(param_1 + 0x390);
  local_88 = &local_58;
  local_58 = 0x3f800000;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0x3f800000;
  local_48 = 0;
  local_64 = 0x3f800000;
  local_5c = 0;
  local_80 = 0;
  local_6c = uVar1;
  FUN_1401272be(param_2);
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401272be FUN_1401272be body=360 status=ok
// SIG undefined FUN_1401272be(void)

void FUN_1401272be(undefined8 *param_1,undefined8 *param_2,float *param_3,float *param_4,
                  float *param_5,byte param_6)

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
  
  *param_1 = *param_2;
  param_1[1] = 0x3f800000;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = DAT_14c84635c;
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = *param_5;
  fVar4 = param_5[1];
  fVar5 = param_5[3];
  fVar6 = param_5[2];
  fVar7 = param_5[5];
  fVar8 = param_5[4];
  fVar9 = *param_3;
  *(float *)((longlong)param_1 + 0x1c) = fVar6 * 0.0 + fVar9 * fVar3;
  *(float *)(param_1 + 4) = fVar5 * 0.0 + fVar9 * fVar4;
  *(float *)((longlong)param_1 + 0x24) = fVar3 * 0.0 + fVar9 * fVar6;
  *(float *)(param_1 + 5) = fVar4 * 0.0 + fVar9 * fVar5;
  *(float *)((longlong)param_1 + 0x2c) = fVar1 * fVar3 + fVar2 * fVar6 + fVar8;
  *(float *)(param_1 + 6) = fVar1 * fVar4 + fVar2 * fVar5 + fVar7;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) & 0xfe | param_6;
  fVar1 = *param_4;
  fVar2 = *param_3;
  *(ulonglong *)((longlong)param_1 + 0xc) =
       CONCAT44(param_3[2] * fVar1 + param_4[2],param_3[1] * fVar1 + param_4[1]);
  *(float *)(param_1 + 1) = fVar1 * fVar2;
  *(undefined8 *)((longlong)param_1 + 0x14) = *(undefined8 *)(param_3 + 1);
  return;
}



// FUNCTION 140127426 FUN_140127426 body=1706 status=ok
// SIG undefined FUN_140127426(void)

void FUN_140127426(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong lVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  int iVar12;
  longlong *plVar13;
  uint *puVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  int iVar18;
  undefined1 auStack_c8 [32];
  code **local_a8;
  longlong local_a0;
  undefined4 local_98 [2];
  undefined4 *local_90;
  undefined8 local_88;
  undefined4 local_80 [2];
  undefined4 *local_78;
  undefined8 local_70;
  code *local_68 [2];
  longlong *local_58;
  longlong local_48 [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78 = (undefined4 *)0x0;
  local_70 = 0x100000000;
  iVar18 = (int)param_2[1];
  if (iVar18 < 1) {
    if (iVar18 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4();
    }
  }
  else {
    local_70 = CONCAT44(1,iVar18);
    if ((iVar18 == 1) || (FUN_1472d51a4(local_80,0), 0 < (int)param_2[1])) {
      lVar8 = 0;
      do {
        puVar9 = local_78;
        if (local_78 == (undefined4 *)0x0) {
          puVar9 = local_80;
        }
        puVar9[lVar8] = *(undefined4 *)(*(longlong *)(*param_2 + lVar8 * 8) + 0x3d0);
        lVar8 = lVar8 + 1;
      } while (lVar8 < (int)param_2[1]);
    }
  }
  if (local_78 == (undefined4 *)0x0) {
    local_98[0] = local_80[0];
  }
  local_90 = local_78;
  local_78 = (undefined4 *)0x0;
  iVar12 = (int)local_70;
  local_88 = local_70;
  local_70 = 0x100000000;
  lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar18 = *(int *)(lVar8 + 0xc60);
  local_a0 = param_1;
  if (DAT_14c86a9fc == 0) {
    if (iVar18 != 2) {
      if (iVar18 != 1) goto LAB_140127509;
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      if (DVar6 == DVar7) {
        iVar12 = (int)local_88;
        goto LAB_14012750e;
      }
      goto LAB_140127570;
    }
  }
  else {
LAB_140127509:
    if (iVar18 != 0x10) {
LAB_140127570:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar18 = *(int *)(lVar8 + 0xc60), iVar18 == 2)) {
LAB_140127a71:
          puVar9 = local_98;
          if (local_90 != (undefined4 *)0x0) {
            puVar9 = local_90;
          }
          lVar8 = (longlong)(int)local_88;
          if (lVar8 != 0) {
            lVar15 = 0;
            do {
              FUN_144b1112c(local_a0 + 0x3930,*(undefined4 *)((longlong)puVar9 + lVar15));
              lVar15 = lVar15 + 4;
            } while (lVar8 * 4 != lVar15);
          }
          goto LAB_14012766b;
        }
        if (iVar18 == 1) {
          DVar6 = FUN_140ad26c0();
          DVar7 = GetCurrentThreadId();
          if (DVar6 == DVar7) goto LAB_140127a71;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar2;
        if (puVar10 != (uint *)0x0) goto LAB_140127750;
        while( true ) {
          uVar5 = *(uint *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x318);
          if ((uVar5 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar5 | 1;
            __tlregdtor(&LAB_142fb49ae);
          }
          lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar9 = *(undefined4 **)(lVar8 + 0x310);
          *(undefined8 *)(lVar8 + 0x310) = 0;
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar9 = 0xffffffff;
          *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
          puVar9[0x12] = 0;
          *puVar2 = puVar9;
          FUN_140217a48(puVar2);
          puVar10 = (uint *)*puVar2;
LAB_140127750:
          puVar17 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar14 = (uint *)(puVar17 + 0x19);
          uVar5 = puVar10[0x12];
          if (puVar14 <= puVar10 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
            LOCK();
            uVar3 = *puVar10;
            *puVar10 = *puVar10 + uVar5 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar5) != 0xffffffff) break;
            puVar10 = (uint *)*puVar2;
            *puVar10 = 0xffffffff;
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
            puVar10[0x12] = 0;
            *puVar2 = puVar10;
            puVar17 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
            puVar14 = (uint *)(puVar17 + 0x19);
            uVar5 = 0;
            if (puVar14 <= puVar10 + 0x4000) {
              uVar5 = 1;
              goto LAB_1401277d0;
            }
          }
        }
        uVar5 = uVar5 + 1;
LAB_1401277d0:
        *(uint **)(puVar10 + 0x10) = puVar14;
        puVar10[0x12] = uVar5;
        FUN_1447247dc(puVar17,0);
        *puVar17 = &PTR_FUN_14a2e8488;
        puVar17[0x15] = local_a0;
        puVar17[0x17] = 0;
        if (local_90 == (undefined4 *)0x0) {
          *(undefined4 *)(puVar17 + 0x16) = local_98[0];
        }
        puVar17[0x17] = local_90;
        local_90 = (undefined4 *)0x0;
        *(int *)(puVar17 + 0x18) = (int)local_88;
        *(undefined4 *)((longlong)puVar17 + 0xc4) = local_88._4_4_;
        local_88 = 0x100000000;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar5 = DAT_14c7585c8 >> 10 & 3;
          iVar18 = 0;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar5 < 2) {
            uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar5];
            iVar18 = 0;
          }
          else {
            uVar16 = 2;
          }
        }
        else {
          iVar18 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                   *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar16 = 5;
        }
        if (*(code **)(puVar17[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar17[0xe] + 0x18))(puVar17 + 0xe,puVar17 + 9);
        }
        puVar17[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar17[9] = puVar17;
        puVar17[10] = puVar17;
        lVar8 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar8 == 0) {
          uVar4 = 1;
          if ((char)uVar16 != '\x06') {
            uVar4 = uVar16;
          }
          uVar16 = uVar4;
          uVar11 = 0;
        }
        else {
          if ((char)uVar16 == '\x06') {
            uVar16 = *(ulonglong *)(lVar8 + 0x38) >> 0x3b;
          }
          uVar11 = *(undefined8 *)(lVar8 + 0x30);
        }
        puVar17[0xf] = uVar11;
        puVar17[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar17 + 0x1c) = iVar18;
        if (puVar17 == (undefined8 *)0x0) {
          local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
          UNLOCK();
          local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(puVar17);
          LOCK();
          piVar1 = (int *)(puVar17 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar17)(puVar17,1);
          }
        }
      }
      else {
        local_68[0] = (code *)0x0;
        local_58 = (longlong *)FUN_14001cc68(0x28,8);
        *local_58 = (longlong)&PTR_LAB_14a2e8430;
        local_58[1] = local_a0;
        local_58[3] = 0;
        if (local_90 == (undefined4 *)0x0) {
          *(undefined4 *)(local_58 + 2) = local_98[0];
        }
        local_58[3] = (longlong)local_90;
        local_90 = (undefined4 *)0x0;
        *(int *)(local_58 + 4) = (int)local_88;
        *(undefined4 *)((longlong)local_58 + 0x24) = local_88._4_4_;
        local_88 = 0x100000000;
        if (local_58 != (longlong *)&DAT_fffffffffffffff8) {
          local_68[0] = FUN_144b15e2a;
        }
        local_a8 = local_68;
        FUN_14005a792(&DAT_14ca9a440,L"FReleasePrimitiveCommand",&DAT_14ca44c64);
        if (local_68[0] != (code *)0x0) {
          plVar13 = local_58;
          if (local_58 == (longlong *)0x0) {
            plVar13 = local_48;
          }
          (**(code **)(*plVar13 + 0x10))();
        }
      }
      goto LAB_14012766b;
    }
  }
LAB_14012750e:
  puVar9 = local_98;
  if (local_90 != (undefined4 *)0x0) {
    puVar9 = local_90;
  }
  if (iVar12 != 0) {
    lVar8 = 0;
    do {
      FUN_144b1112c(local_a0 + 0x3930,*(undefined4 *)((longlong)puVar9 + lVar8));
      lVar8 = lVar8 + 4;
    } while ((longlong)iVar12 * 4 != lVar8);
  }
LAB_14012766b:
  if (local_90 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if (local_78 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140127ad2 FUN_140127ad2 body=38 status=ok
// SIG undefined FUN_140127ad2(void)

undefined8 FUN_140127ad2(undefined8 param_1,int param_2)

{
  FUN_144834c52();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140127af8 FUN_140127af8 body=75 status=ok
// SIG undefined FUN_140127af8(void)

void FUN_140127af8(longlong param_1,int param_2)

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



// FUNCTION 140127b44 FUN_140127b44 body=9 status=ok
// SIG undefined FUN_140127b44(void)

void FUN_140127b44(longlong param_1)

{
  FUN_1448470d8(param_1 + 0x10);
  return;
}



// FUNCTION 140127b4e FUN_140127b4e body=89 status=ok
// SIG undefined FUN_140127b4e(void)

void FUN_140127b4e(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x8c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
    if (*(void **)((longlong)param_1 + 0x80) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x80),
              (longlong)*(int *)((longlong)param_1 + 0x88) << 4);
      FUN_1446efa72((longlong)param_1 + 0x80,0,0,0x10);
      return;
    }
  }
  return;
}



// FUNCTION 140127ba8 FUN_140127ba8 body=9 status=ok
// SIG undefined FUN_140127ba8(void)

void FUN_140127ba8(longlong param_1)

{
  FUN_1448470d8(param_1 + 0x10);
  return;
}



// FUNCTION 140127bb2 FUN_140127bb2 body=112 status=ok
// SIG undefined FUN_140127bb2(void)

int FUN_140127bb2(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x14);
  iVar3 = iVar2 + param_2;
  if (iVar1 < iVar3) {
    if (DAT_14c963f58 != 0) {
      FUN_14282a052(&DAT_14c9647b8);
    }
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x2bf,
                  L"Maximum number of UObjects (%d) exceeded when trying to add %d object(s), make sure you update MaxObjectsInGame/MaxObjectsInEditor/MaxObjectsInProgram in project settings."
                  ,iVar1,param_2);
  }
  FUN_140127c22(param_1,iVar3 + -1);
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + param_2;
  return iVar2;
}



// FUNCTION 140127c22 FUN_140127c22 body=122 status=ok
// SIG undefined FUN_140127c22(void)

void FUN_140127c22(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  bool bVar6;
  
  iVar5 = param_2 + 0xffff;
  if (-1 < param_2) {
    iVar5 = param_2;
  }
  iVar3 = *(int *)((longlong)param_1 + 0x1c);
  while (iVar3 <= iVar5 >> 0x10) {
    lVar2 = *param_1;
    puVar4 = (undefined8 *)FUN_14001cc68(0x180008);
    *puVar4 = 0x10000;
    memset(puVar4 + 1,0,0x180000);
    plVar1 = (longlong *)(lVar2 + (longlong)iVar3 * 8);
    LOCK();
    bVar6 = *plVar1 == 0;
    if (bVar6) {
      *plVar1 = (longlong)(puVar4 + 1);
    }
    UNLOCK();
    iVar3 = *(int *)((longlong)param_1 + 0x1c);
    if (bVar6) {
      iVar3 = iVar3 + 1;
      *(int *)((longlong)param_1 + 0x1c) = iVar3;
    }
  }
  return;
}



// FUNCTION 140127c9c FUN_140127c9c body=507 status=ok
// SIG undefined FUN_140127c9c(void)

void FUN_140127c9c(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 auStack_e8 [40];
  longlong local_c0;
  undefined8 local_b8 [12];
  undefined1 local_58 [8];
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_14012803a(*(undefined8 *)(param_1 + 8),
                *(int *)(*(longlong *)(param_1 + 0x10) + 0x10) -
                *(int *)(*(longlong *)(param_1 + 0x10) + 0x3c));
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (0 < *(int *)(lVar2 + 0x10)) {
    local_c0 = lVar2 + 0x18;
    lVar12 = 0x122;
    uVar13 = 0;
    do {
      if ((longlong)uVar13 < (longlong)*(int *)(lVar2 + 0x30)) {
        lVar7 = *(longlong *)(lVar2 + 0x28);
        if (*(longlong *)(lVar2 + 0x28) == 0) {
          lVar7 = local_c0;
        }
        if (((*(uint *)(lVar7 + (uVar13 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar13 & 0x1f) & 1) != 0)
           && (lVar7 = *(longlong *)(lVar2 + 8),
              *(int *)(lVar7 + lVar12) == *(int *)(lVar7 + -8 + lVar12))) {
          lVar3 = *(longlong *)(lVar7 + -0x22 + lVar12);
          plVar4 = *(longlong **)(lVar7 + -0x1a + lVar12);
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
            LOCK();
            plVar6 = plVar4 + 1;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)*plVar6 == 0) {
              (**(code **)*plVar4)(plVar4);
              LOCK();
              piVar1 = (int *)((longlong)plVar4 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar4 + 0x10))(plVar4);
              }
            }
          }
          plVar6 = (longlong *)FUN_140127e98(lVar3 + 0x38);
          if (plVar6 != (longlong *)0x0) {
            lVar7 = (**(code **)(*plVar6 + 0x18))(plVar6);
            if (lVar7 != 0) {
              uVar8 = FUN_140127f54();
              plVar6 = (longlong *)FUN_144718840(lVar7,uVar8);
              if (plVar6 == (longlong *)0x0) {
                uVar8 = *(undefined8 *)(lVar7 + 0x10);
                uVar9 = FUN_140127f54();
                cVar5 = FUN_144a7ff9e(uVar8,uVar9);
                if (cVar5 == '\0') goto LAB_140127dcf;
                FUN_1475a1e7e(local_b8,lVar7);
              }
              else {
                (**(code **)(*plVar6 + 0x10))(plVar6,local_b8);
              }
              FUN_1401280b4(*(undefined8 *)(param_1 + 8),local_58,uVar13 & 0xffffffff);
              puVar10 = local_b8;
              puVar11 = local_50;
              for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
                *puVar11 = *puVar10;
                puVar10 = puVar10 + 1;
                puVar11 = puVar11 + 1;
              }
            }
          }
LAB_140127dcf:
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            plVar6 = plVar4 + 1;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)*plVar6 == 0) {
              (**(code **)*plVar4)(plVar4);
              LOCK();
              piVar1 = (int *)((longlong)plVar4 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar4 + 0x10))(plVar4);
              }
            }
          }
        }
      }
      uVar13 = uVar13 + 1;
      lVar12 = lVar12 + 0x128;
    } while ((longlong)uVar13 < (longlong)*(int *)(lVar2 + 0x10));
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140127e98 FUN_140127e98 body=188 status=ok
// SIG undefined FUN_140127e98(void)

undefined8 * FUN_140127e98(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if ((*(uint *)(param_1 + 2) >> (DAT_14cab3b74 & 0x1f) & 1) != 0) {
    uVar5 = (1 << ((byte)DAT_14cab3b74 & 0x1f)) - 1U & *(uint *)(param_1 + 2);
    uVar6 = (ulonglong)uVar5 - (ulonglong)(uVar5 >> 1 & 0x55555555);
    uVar6 = (uVar6 >> 2 & 0x3333333333333333) + (uVar6 & 0x3333333333333333);
    uVar6 = ((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    lVar2 = *param_1;
    uVar3 = (ulonglong)*(ushort *)(lVar2 + uVar6 * 6);
    lVar7 = lVar2 + uVar3;
    if (uVar3 == 0xffff) {
      lVar7 = 0;
    }
    puVar4 = (undefined8 *)((ulonglong)*(byte *)(lVar2 + 4 + uVar6 * 6) + lVar7);
    if (puVar4 != (undefined8 *)0x0) {
      cVar1 = *(char *)(lVar2 + uVar6 * 6 + 5);
      if (cVar1 != '\x01') {
        if (cVar1 == '\0') {
          return puVar4;
        }
        if (cVar1 != '\x02') {
          return (undefined8 *)0x0;
        }
      }
      return (undefined8 *)*puVar4;
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140127f54 FUN_140127f54 body=228 status=ok
// SIG undefined FUN_140127f54(void)

longlong FUN_140127f54(void)

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
  if (DAT_14cab45d0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_1475a1f43;
    local_40 = FUN_146344e35;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/MovieSceneTracks",L"MovieSceneTransformOrigin",&DAT_14cab45d0,
                  &DAT_1475a1f42);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab45d0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14012803a FUN_14012803a body=121 status=ok
// SIG undefined FUN_14012803a(void)

void FUN_14012803a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1401283f4(param_1,param_2);
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



// FUNCTION 1401280b4 FUN_1401280b4 body=831 status=ok
// SIG undefined FUN_1401280b4(void)

int * FUN_1401280b4(longlong *param_1,int *param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  byte bVar9;
  int iVar10;
  longlong *plVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint uVar18;
  
  iVar2 = (int)param_1[1];
  if (param_3 < iVar2) {
    lVar17 = *param_1;
  }
  else {
    iVar3 = param_3 + 1;
    *(int *)(param_1 + 1) = iVar3;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < (uint)(iVar3 - iVar2)) {
      FUN_1401284dc(param_1);
      iVar3 = (int)param_1[1];
    }
    lVar17 = *param_1;
    iVar2 = (int)param_1[5];
    if (iVar2 < iVar3) {
      plVar11 = param_1 + 2;
      do {
        *(undefined4 *)(lVar17 + (longlong)iVar2 * 0x60) = 0xffffffff;
        lVar7 = param_1[6];
        *(int *)(lVar17 + 4 + (longlong)iVar2 * 0x60) = (int)lVar7;
        if (*(int *)((longlong)param_1 + 0x34) != 0) {
          *(int *)(lVar17 + (longlong)(int)lVar7 * 0x60) = iVar2;
        }
        *(int *)(param_1 + 6) = iVar2;
        iVar2 = (int)param_1[5];
        if (iVar2 == 0) {
          iVar3 = -1;
        }
        else {
          iVar3 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar3 = iVar2 + -1;
          }
          iVar3 = iVar3 >> 5;
        }
        iVar10 = iVar2 + 1;
        iVar15 = iVar2 + 0x1f;
        if (-1 < iVar2) {
          iVar15 = iVar2;
        }
        if (iVar15 >> 5 == iVar3) {
          *(int *)(param_1 + 5) = iVar10;
        }
        else {
          if (*(int *)((longlong)param_1 + 0x2c) <= iVar2) {
            iVar3 = iVar2;
            if (iVar2 + 0x20U < 0xa0) {
              iVar10 = 0x80;
            }
            else {
              uVar18 = iVar2 + 0x20U >> 5;
              if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
                uVar13 = 4;
                if (4 < uVar18) {
                  uVar13 = uVar18;
                }
              }
              else {
                uVar13 = uVar18 + (uVar18 * 3 >> 3) + 0x10;
              }
              uVar8 = (ulonglong)(uVar13 * 4);
              if (DAT_14c872d28 != (longlong *)0x0) {
                if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                  uVar4 = (uint)(uVar8 + 0xf);
                  if (uVar13 < 0x1ffd) {
                    uVar8 = (ulonglong)
                            (ushort)(&DAT_14c841d90)
                                    [0x32 - (byte)(&DAT_14c841e00)[uVar8 + 0xf >> 4]];
                  }
                  else {
                    uVar12 = (ulonglong)(uVar4 & 0xfffffff0);
                    if (uVar12 < 0x7ff1) {
                      bVar9 = (&DAT_14c841e00)[uVar4 >> 4];
                      uVar14 = 0x32;
                      if (0x32 < bVar9) {
                        uVar14 = (ulonglong)bVar9;
                      }
                      uVar16 = 0x32 - (ulonglong)bVar9;
                      do {
                        uVar8 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar16 & 0xffffffff];
                        if (((&DAT_14c841d90)[uVar16 & 0xffffffff] & 0xf) == 0) goto LAB_140128280;
                        lVar7 = uVar14 + 1 + uVar16;
                        uVar16 = uVar16 - 1;
                      } while (lVar7 != 0x33);
                    }
                    uVar8 = 0x10;
                    if (0x10 < DAT_14c841df8) {
                      uVar8 = (ulonglong)DAT_14c841df8;
                    }
                    uVar8 = -uVar8 & (uVar12 + uVar8) - 1;
                  }
                }
                else {
                  uVar8 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar8,0);
                  iVar3 = (int)param_1[5];
                }
              }
LAB_140128280:
              iVar5 = (int)(uVar8 >> 2);
              iVar10 = -0x20;
              if ((int)uVar18 <= iVar5) {
                iVar10 = iVar5 << 5;
              }
            }
            *(int *)((longlong)param_1 + 0x2c) = iVar10;
            FUN_1446efbd8(plVar11,iVar3);
            iVar10 = (int)param_1[5] + 1;
          }
          iVar3 = iVar10 + 0x1f;
          if (-1 < iVar10) {
            iVar3 = iVar10;
          }
          *(int *)(param_1 + 5) = iVar10;
          if (iVar10 % 0x20 != 0) {
            plVar6 = (longlong *)param_1[4];
            if ((longlong *)param_1[4] == (longlong *)0x0) {
              plVar6 = plVar11;
            }
            bVar9 = -(char)(iVar10 % 0x20);
            *(uint *)((longlong)plVar6 + (longlong)(iVar3 >> 5) * 4) =
                 (uint)(*(int *)((longlong)plVar6 + (longlong)(iVar3 >> 5) * 4) << (bVar9 & 0x1f))
                 >> (bVar9 & 0x1f);
          }
        }
        plVar6 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar6 = plVar11;
        }
        bVar9 = (byte)iVar2 & 0x1f;
        puVar1 = (uint *)((longlong)plVar6 + (longlong)(iVar15 >> 5) * 4);
        *puVar1 = *puVar1 & (-2 << bVar9 | 0xfffffffeU >> 0x20 - bVar9);
        *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
        iVar2 = (int)param_1[5];
      } while (iVar2 < (int)param_1[1]);
    }
  }
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
  lVar7 = (longlong)param_3 * 0x60;
  iVar2 = *(int *)(lVar17 + lVar7);
  iVar3 = *(int *)(lVar17 + 4 + lVar7);
  if ((longlong)iVar2 == -1) {
    *(int *)(param_1 + 6) = iVar3;
  }
  else {
    *(int *)(lVar17 + 4 + (longlong)iVar2 * 0x60) = iVar3;
  }
  if (iVar3 != -1) {
    *(int *)(lVar17 + (longlong)iVar3 * 0x60) = iVar2;
  }
  plVar11 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar11 = (longlong *)param_1[4];
  }
  iVar2 = param_3 + 0x1f;
  if (-1 < param_3) {
    iVar2 = param_3;
  }
  puVar1 = (uint *)((longlong)plVar11 + (longlong)(iVar2 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)param_3 & 0x1f);
  *param_2 = param_3;
  *(longlong *)(param_2 + 2) = lVar7 + *param_1;
  return param_2;
}



// FUNCTION 1401283f4 FUN_1401283f4 body=231 status=ok
// SIG undefined FUN_1401283f4(void)

void FUN_1401283f4(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (longlong)param_2 * 0x60;
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
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,0x10);
      }
    }
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x60)) {
      uVar2 = uVar1 / 0x60 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x60,0x10);
  }
  return;
}



// FUNCTION 1401284dc FUN_1401284dc body=275 status=ok
// SIG undefined FUN_1401284dc(void)

void FUN_1401284dc(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x60;
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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0x10);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x60)) {
      uVar5 = uVar4 / 0x60 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x60,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1401285f0 FUN_1401285f0 body=144 status=ok
// SIG undefined FUN_1401285f0(void)

longlong * FUN_1401285f0(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  if (*param_2 == 0) {
    if (param_3 == 0) {
      *param_1 = 0;
    }
    else {
      puVar2 = &DAT_14c9485f0;
      if (*(undefined4 **)(param_3 + 8) != (undefined4 *)0x0) {
        puVar2 = *(undefined4 **)(param_3 + 8);
      }
      if (DAT_14c947fe0 == 0) {
        lVar1 = FUN_14001cc68(0x140,0x10);
        FUN_1456b2032(lVar1);
        DAT_14c947fe0 = lVar1;
      }
      FUN_140045924(DAT_14c947fe0,param_1,puVar2,1);
    }
    *(undefined4 *)(param_1 + 1) = 0xffffffff;
  }
  else {
    *(int *)(param_1 + 1) = (int)param_2[1];
    *param_1 = *param_2;
  }
  return param_1;
}



// FUNCTION 140128680 FUN_140128680 body=276 status=ok
// SIG undefined FUN_140128680(void)

void FUN_140128680(undefined8 param_1,longlong param_2)

{
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
  if (DAT_14cb652c0 == 0) {
    local_40 = &local_20;
    local_20 = FUN_1449e2820;
    local_30 = FUN_14081d0ea;
    local_38 = FUN_1427b09ee;
    local_48 = &LAB_148715fe1;
    local_50 = FUN_146508b0f;
    local_58 = L"Engine";
    local_60 = 0;
    local_68 = 0x10004001;
    local_70 = 8;
    local_78 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkillOwner",&DAT_14cb652c0,&DAT_148715fe0);
  }
  if (DAT_14cb652c0 != param_2) {
    if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      switchD_143c3d4dc::caseD_57(param_1,param_2);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
}



// FUNCTION 1401287ae FUN_1401287ae body=206 status=ok
// SIG undefined FUN_1401287ae(void)

ulonglong FUN_1401287ae(longlong param_1,longlong param_2,undefined8 param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  DWORD DVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  bool bVar10;
  
  puVar1 = (uint *)(param_1 + 4);
  DVar6 = GetCurrentThreadId();
  uVar7 = *(uint *)(param_1 + 4);
  if ((uVar7 & 1) == 0) {
    LOCK();
    uVar2 = *puVar1;
    bVar10 = uVar7 == uVar2;
    if (bVar10) {
      *puVar1 = uVar7 | 1;
      uVar2 = uVar7;
    }
    uVar7 = uVar2;
    UNLOCK();
    if (bVar10) {
      *(DWORD *)(param_1 + 8) = DVar6;
      goto LAB_1401287e7;
    }
  }
  if (*(DWORD *)(param_1 + 8) == DVar6) {
    LOCK();
    *puVar1 = *puVar1 + 4;
    UNLOCK();
  }
  else {
    FUN_1402441ea(puVar1,uVar7);
  }
LAB_1401287e7:
  iVar3 = *(int *)(param_2 + 0x20);
  if ((longlong)iVar3 != 0) {
    lVar4 = *(longlong *)(param_2 + 0x18);
    lVar9 = 0;
    do {
      lVar5 = *(longlong *)(lVar4 + lVar9);
      if (lVar5 != 0) {
        FUN_144835bd8(param_1,lVar5,param_3,0xffffffff);
      }
      lVar9 = lVar9 + 8;
    } while ((longlong)iVar3 * 8 != lVar9);
  }
  uVar7 = *puVar1;
  uVar8 = (ulonglong)uVar7;
  if (uVar7 < 4) {
    *(undefined4 *)(param_1 + 8) = 0;
    if (uVar7 < 2) {
      LOCK();
      uVar2 = *puVar1;
      if (uVar7 == uVar2) {
        *puVar1 = 0;
      }
      else {
        uVar8 = (ulonglong)uVar2;
      }
      UNLOCK();
      if (uVar7 == uVar2) {
        return uVar8;
      }
    }
    uVar8 = FUN_140d366d2(puVar1);
    return uVar8;
  }
  LOCK();
  *puVar1 = *puVar1 - 4;
  UNLOCK();
  return uVar8;
}



// FUNCTION 14012887c FUN_14012887c body=626 status=ok
// SIG undefined FUN_14012887c(void)

undefined8 FUN_14012887c(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 uVar13;
  char cVar14;
  int iVar15;
  undefined8 *puVar16;
  double *pdVar17;
  undefined4 uVar18;
  uint uVar19;
  undefined8 *puVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140128b26();
  lVar1 = param_1[0x7a];
  if (lVar1 != 0) {
    iVar15 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar15 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar15 + 1U) {
      FUN_140178088(param_2,iVar15);
    }
    puVar20 = (undefined8 *)((longlong)iVar15 * 0x160 + *param_2);
    puVar16 = puVar20;
    FUN_140128c56();
    uVar18 = SUB84(puVar16,0);
    lVar2 = *(longlong *)(lVar1 + 0x1c8);
    if (lVar2 == 0) {
      puVar16 = &DAT_14c8464e0;
      uVar21 = (undefined4)DAT_14c8464f0;
      uVar22 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    }
    else {
      uVar21 = (undefined4)*(undefined8 *)(lVar2 + 0x270);
      uVar22 = (undefined4)((ulonglong)*(undefined8 *)(lVar2 + 0x270) >> 0x20);
      puVar16 = (undefined8 *)(lVar2 + 0x260);
    }
    uVar5 = *(undefined4 *)((longlong)puVar16 + 4);
    uVar6 = *(undefined4 *)(puVar16 + 1);
    uVar7 = *(undefined4 *)((longlong)puVar16 + 0xc);
    *(undefined4 *)(puVar20 + 1) = *(undefined4 *)puVar16;
    *(undefined4 *)((longlong)puVar20 + 0xc) = uVar5;
    *(undefined4 *)(puVar20 + 2) = uVar6;
    *(undefined4 *)((longlong)puVar20 + 0x14) = uVar7;
    puVar20[3] = CONCAT44(uVar22,uVar21);
    lVar2 = *(longlong *)(lVar1 + 0x1c8);
    if (lVar2 == 0) {
      local_58 = DAT_14c846508;
      local_68 = (undefined4)DAT_14c8464f8;
      uStack_64 = DAT_14c8464f8._4_4_;
      uStack_60 = (undefined4)DAT_14c846500;
      uStack_5c = DAT_14c846500._4_4_;
    }
    else {
      dVar8 = *(double *)(lVar2 + 0x240);
      dVar9 = *(double *)(lVar2 + 0x248);
      dVar10 = *(double *)(lVar2 + 0x250);
      dVar11 = *(double *)(lVar2 + 600);
      pdVar17 = *(double **)(lVar2 + 0x228);
      local_88 = dVar8;
      uStack_80 = dVar9;
      local_78 = dVar10;
      uStack_70 = dVar11;
      if (pdVar17 == (double *)0x0) {
        uVar18 = 0x40;
        pdVar17 = (double *)FUN_14001cc68(0x40,0x10);
        dVar12 = DAT_14c8463d8;
        *pdVar17 = DAT_14c8463d0;
        pdVar17[1] = dVar12;
        dVar12 = DAT_14c8463e8;
        pdVar17[2] = DAT_14c8463e0;
        pdVar17[3] = dVar12;
        dVar12 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
        pdVar17[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
        pdVar17[5] = dVar12;
        puVar16 = DAT_14c846508;
        pdVar17[6] = (double)DAT_14c846508;
        *(double **)(lVar2 + 0x228) = pdVar17;
      }
      auVar3._8_4_ = (int)-(ulonglong)(dVar9 != pdVar17[1]);
      auVar3._0_8_ = -(ulonglong)(dVar8 != *pdVar17);
      auVar3._12_4_ = (int)(-(ulonglong)(dVar9 != pdVar17[1]) >> 0x20);
      iVar15 = movmskpd((int)puVar16,auVar3);
      auVar4._8_4_ = (int)-(ulonglong)(dVar11 != pdVar17[3]);
      auVar4._0_8_ = -(ulonglong)(dVar10 != pdVar17[2]);
      auVar4._12_4_ = (int)(-(ulonglong)(dVar11 != pdVar17[3]) >> 0x20);
      uVar19 = movmskpd(uVar18,auVar4);
      if ((uVar19 & 0x3fffffff) != 0 || iVar15 != 0) {
        *(undefined4 *)(pdVar17 + 2) = (undefined4)local_78;
        *(undefined4 *)((longlong)pdVar17 + 0x14) = local_78._4_4_;
        *(undefined4 *)(pdVar17 + 3) = (undefined4)uStack_70;
        *(undefined4 *)((longlong)pdVar17 + 0x1c) = uStack_70._4_4_;
        *(undefined4 *)pdVar17 = (undefined4)local_88;
        *(undefined4 *)((longlong)pdVar17 + 4) = local_88._4_4_;
        *(undefined4 *)(pdVar17 + 1) = (undefined4)uStack_80;
        *(undefined4 *)((longlong)pdVar17 + 0xc) = uStack_80._4_4_;
        FUN_1448052ee(&local_88,&local_68);
        pdVar17[6] = (double)local_58;
        pdVar17[4] = (double)CONCAT44(uStack_64,local_68);
        pdVar17[5] = (double)CONCAT44(uStack_5c,uStack_60);
      }
      local_58 = (undefined8 *)pdVar17[6];
      local_68 = *(undefined4 *)(pdVar17 + 4);
      uStack_64 = *(undefined4 *)((longlong)pdVar17 + 0x24);
      uStack_60 = *(undefined4 *)(pdVar17 + 5);
      uStack_5c = *(undefined4 *)((longlong)pdVar17 + 0x2c);
    }
    puVar20[6] = local_58;
    *(undefined4 *)(puVar20 + 4) = local_68;
    *(undefined4 *)((longlong)puVar20 + 0x24) = uStack_64;
    *(undefined4 *)(puVar20 + 5) = uStack_60;
    *(undefined4 *)((longlong)puVar20 + 0x2c) = uStack_5c;
    *puVar20 = *(undefined8 *)(lVar1 + 0x18);
    uVar13 = (**(code **)(*param_1 + 0xb88))(param_1);
    *(undefined1 *)(puVar20 + 7) = uVar13;
    uVar13 = (**(code **)(*param_1 + 0xb90))(param_1);
    *(undefined1 *)((longlong)puVar20 + 0x39) = uVar13;
    *(undefined4 *)((longlong)puVar20 + 0x5c) = *(undefined4 *)((longlong)param_1 + 0x63c);
    uVar13 = (**(code **)(*param_1 + 0xb98))(param_1);
    *(undefined1 *)((longlong)puVar20 + 0x3a) = uVar13;
    cVar14 = (**(code **)(*param_1 + 0x6c8))(param_1);
    if (cVar14 == '\0') {
      uVar13 = 1;
    }
    else {
      uVar13 = FUN_140128af0(param_1);
    }
    *(undefined1 *)((longlong)puVar20 + 0x119) = uVar13;
    (**(code **)(*param_1 + 0xba8))(param_1,puVar20 + 0x21);
  }
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140128af0 FUN_140128af0 body=54 status=ok
// SIG undefined FUN_140128af0(void)

undefined1 FUN_140128af0(longlong param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  
  if ((*(longlong *)(param_1 + 0x398) == 0) ||
     ((*(byte *)(*(longlong *)(param_1 + 0x398) + 0x39a) & 8) == 0)) {
    uVar1 = 0;
  }
  else {
    lVar2 = FUN_144a7ba4c();
    if (lVar2 == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = *(undefined1 *)(lVar2 + 0x2b0);
    }
  }
  return uVar1;
}



// FUNCTION 140128b26 FUN_140128b26 body=152 status=ok
// SIG undefined FUN_140128b26(void)

undefined8 FUN_140128b26(longlong *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  byte bVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_140128bea(param_2);
  (**(code **)(*param_1 + 0xba0))(param_1,plVar3 + 1,plVar3 + 4);
  *plVar3 = param_1[3];
  uVar1 = (**(code **)(*param_1 + 0xb88))(param_1);
  *(undefined1 *)(plVar3 + 7) = uVar1;
  uVar1 = (**(code **)(*param_1 + 0xb90))(param_1);
  *(undefined1 *)((longlong)plVar3 + 0x39) = uVar1;
  *(undefined4 *)((longlong)plVar3 + 0x5c) = *(undefined4 *)((longlong)param_1 + 0x63c);
  uVar1 = (**(code **)(*param_1 + 0xb98))(param_1);
  *(undefined1 *)((longlong)plVar3 + 0x3a) = uVar1;
  bVar2 = (**(code **)(*param_1 + 0x6c8))(param_1);
  *(byte *)((longlong)plVar3 + 0x119) = bVar2 ^ 1;
  (**(code **)(*param_1 + 0xba8))(param_1,plVar3 + 0x21);
  return 1;
}



// FUNCTION 140128bea FUN_140128bea body=67 status=ok
// SIG undefined FUN_140128bea(void)

longlong FUN_140128bea(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140178088(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x160 + *param_1;
  FUN_140128c2d(lVar2,1);
  return lVar2;
}



// FUNCTION 140128c2d FUN_140128c2d body=41 status=ok
// SIG undefined FUN_140128c2d(void)

void FUN_140128c2d(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140128c56(param_1);
    param_1 = param_1 + 0x160;
  }
  return;
}



// FUNCTION 140128c56 FUN_140128c56 body=279 status=ok
// SIG undefined FUN_140128c56(void)

void FUN_140128c56(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  uVar1 = DAT_14c8464e8;
  param_1[1] = DAT_14c8464e0;
  param_1[2] = uVar1;
  param_1[3] = DAT_14c8464f0;
  uVar1 = DAT_14c846500;
  param_1[4] = DAT_14c8464f8;
  param_1[5] = uVar1;
  param_1[6] = DAT_14c846508;
  *(undefined2 *)(param_1 + 7) = 1;
  *(undefined1 *)((longlong)param_1 + 0x3a) = 0x80;
  uVar1 = DAT_14c8464e8;
  param_1[8] = DAT_14c8464e0;
  param_1[9] = uVar1;
  param_1[10] = DAT_14c8464f0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x117) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x27] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x25] = DAT_14c8464e0;
  param_1[0x26] = uVar1;
  uVar1 = DAT_14c846500;
  param_1[0x28] = DAT_14c8464f8;
  param_1[0x29] = uVar1;
  param_1[0x2a] = DAT_14c846508;
  param_1[0x2b] = 0;
  return;
}



// FUNCTION 140128d6e FUN_140128d6e body=300 status=ok
// SIG undefined FUN_140128d6e(void)

void FUN_140128d6e(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  float fVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  
  cVar3 = (**(code **)(*param_1 + 0x6c8))();
  if (((cVar3 != '\0') && ((param_1[0x73] == 0 || ((*(byte *)(param_1[0x73] + 0x39a) & 8) == 0))))
     || (fVar2 = DAT_14c75f6e4, ABS(DAT_14c75f6e4 + -1.0) <= 1e-08)) {
    uVar6 = -(uint)(ABS(DAT_14c75f6e0 + -1.0) <= 1e-08);
    fVar2 = (float)(~uVar6 & (uint)DAT_14c75f6e0 | uVar6 & 0xbf800000);
  }
  if (DAT_14c76384c == '\x01') {
    if ((int)param_1[0xc9] != 0) {
      FUN_147a3464c(param_2);
    }
    if (fVar2 <= 0.0) {
      return;
    }
    if ((DAT_14cb71520 != '\x01') || (lVar4 = param_2[1], (longlong)(int)lVar4 == 0))
    goto LAB_140128e73;
    lVar1 = *param_2;
    lVar5 = 0;
    do {
      *(float *)(lVar1 + 4 + lVar5) = *(float *)(lVar1 + 4 + lVar5) * fVar2;
      lVar5 = lVar5 + 0x48;
    } while ((longlong)(int)lVar4 * 0x48 != lVar5);
  }
  if (fVar2 <= 0.0) {
    return;
  }
LAB_140128e73:
  FUN_1487c4856(param_2);
  lVar4 = (longlong)((int)param_2[1] + -1);
  *(float *)(*param_2 + 4 + lVar4 * 0x48) = fVar2 * *(float *)(*param_2 + 4 + lVar4 * 0x48);
  return;
}



// FUNCTION 140128eb8 FUN_140128eb8 body=201 status=ok
// SIG undefined FUN_140128eb8(void)

void FUN_140128eb8(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_58 [44];
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  uVar4 = (int)((ulonglong)(param_2[1] - *param_2) >> 3) * -0x33333333 + uVar2;
  if (uVar2 < uVar4) {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar4);
    }
    FUN_140129366(param_1,uVar4);
    iVar3 = 1;
    if (3 < uVar4) {
      uVar2 = (uVar4 | 1) + 0xe;
      iVar3 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      iVar3 = 1 << ((byte)iVar3 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x48) < iVar3)) {
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_140129534(param_1);
    }
  }
  lVar5 = *param_2;
  lVar1 = param_2[1];
  if (lVar5 != lVar1) {
    do {
      FUN_140128f82(param_1,local_2c,lVar5,0);
      lVar5 = lVar5 + 0x28;
    } while (lVar5 != lVar1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140128f82 FUN_140128f82 body=303 status=ok
// SIG undefined FUN_140128f82(void)

undefined4 *
FUN_140128f82(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_140129182(param_1,local_50);
  FUN_1447a97f4(local_48,param_3);
  local_48[10] = 0xffffffff;
  local_54 = local_50[0];
  uVar3 = *local_48;
  local_68 = param_4;
  cVar1 = FUN_1401290b2(param_1,uVar3,local_48);
  if (cVar1 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar4) {
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
      local_48[0xb] = uVar3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      local_48[10] = *(uint *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
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
      FUN_140129534(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401290b2 FUN_1401290b2 body=207 status=ok
// SIG undefined FUN_1401290b2(void)

void FUN_1401290b2(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 uVar10;
  longlong *plVar11;
  int iVar12;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar11 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar11 = (longlong *)param_1[8];
    }
    iVar12 = *(int *)((longlong)plVar11 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar12 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar12 * 0x30);
        if (*(int *)(*param_1 + (longlong)iVar12 * 0x30) == *param_3) {
          if (*(longlong *)(piVar1 + 6) != 0) {
            FUN_1400020a8();
          }
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          iVar6 = param_3[4];
          iVar7 = param_3[5];
          iVar8 = param_3[6];
          iVar9 = param_3[7];
          *(undefined8 *)(piVar1 + 8) = *(undefined8 *)(param_3 + 8);
          piVar1[4] = iVar6;
          piVar1[5] = iVar7;
          piVar1[6] = iVar8;
          piVar1[7] = iVar9;
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_14709f0a8(param_1,*param_4,1);
          *param_4 = iVar12;
          uVar10 = 1;
          break;
        }
        iVar12 = piVar1[10];
        uVar10 = 0;
      } while (iVar12 != -1);
      goto LAB_1401290de;
    }
  }
  uVar10 = 0;
LAB_1401290de:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar10;
  }
  return;
}



// FUNCTION 140129182 FUN_140129182 body=484 status=ok
// SIG undefined FUN_140129182(void)

int * FUN_140129182(longlong *param_1,int *param_2)

{
  uint *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
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
      FUN_140044672(param_1,iVar11);
    }
    iVar5 = (int)param_1[5];
    if (iVar5 == 0) {
      iVar8 = -1;
    }
    else {
      iVar8 = iVar5 + 0x1e;
      if (-1 < iVar5 + -1) {
        iVar8 = iVar5 + -1;
      }
      iVar8 = iVar8 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar7 = iVar5 + 1;
    iVar12 = iVar5 + 0x1f;
    if (-1 < iVar5) {
      iVar12 = iVar5;
    }
    if (iVar12 >> 5 == iVar8) {
      *(int *)(param_1 + 5) = iVar7;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar5) {
        if (iVar5 + 0x20U < 0xa0) {
          iVar7 = 0x80;
          iVar8 = iVar5;
        }
        else {
          uVar13 = iVar5 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar6 = 4;
            if (4 < uVar13) {
              uVar6 = uVar13;
            }
          }
          else {
            uVar6 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar3 = FUN_144a3809e(uVar6 << 2,0);
          iVar8 = (int)(uVar3 >> 2);
          iVar7 = -0x20;
          if ((int)uVar13 <= iVar8) {
            iVar7 = iVar8 << 5;
          }
          iVar8 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar7;
        FUN_1446efbd8(plVar9,iVar8);
        iVar7 = (int)param_1[5] + 1;
      }
      iVar8 = iVar7 + 0x1f;
      if (-1 < iVar7) {
        iVar8 = iVar7;
      }
      *(int *)(param_1 + 5) = iVar7;
      if (iVar7 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar4 = -(char)(iVar7 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar8 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar8 >> 5) * 4) << (bVar4 & 0x1f)) >>
             (bVar4 & 0x1f);
      }
    }
    lVar2 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar4 = (byte)iVar5 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar2 = (longlong)iVar11;
    iVar5 = *(int *)(*param_1 + 4 + lVar2 * 0x30);
    *(int *)(param_1 + 6) = iVar5;
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar5 * 0x30) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar5 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar5 = iVar11;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar5 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  *param_2 = iVar11;
  *(longlong *)(param_2 + 2) = lVar2 * 0x30 + *param_1;
  return param_2;
}



// FUNCTION 140129366 FUN_140129366 body=461 status=ok
// SIG undefined FUN_140129366(void)

void FUN_140129366(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar8 = param_2 - iVar1;
  if (uVar8 != 0 && iVar1 <= (int)param_2) {
    uVar6 = (ulonglong)param_2;
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar6);
    }
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_14494313c(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar8;
    if ((uint)(iVar10 - iVar11) < uVar8) {
      FUN_140044672(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(uVar6 * 0x30 + lVar2 + -0x2c);
      do {
        iVar9 = (int)uVar6;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x30) = iVar9 + -1;
        }
        puVar5[-1] = 0xffffffff;
        uVar3 = 0xffffffff;
        if (0 < *(int *)((longlong)param_1 + 0x34)) {
          uVar3 = (undefined4)param_1[6];
        }
        uVar6 = uVar6 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar9 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -0xc;
      } while ((longlong)iVar11 < (longlong)uVar6);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar8;
      if (param_2 != 0) {
        plVar7 = param_1 + 2;
        uVar12 = uVar8 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar7,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar8 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar7;
        }
        if (uVar8 < 0x101) {
          uVar12 = uVar12 + (uVar12 == 0);
        }
        memset(_Dst,0,(ulonglong)(uVar12 << 2));
        iVar1 = (int)param_1[5];
        iVar10 = iVar1 + 0x1f;
        if (-1 < iVar1) {
          iVar10 = iVar1;
        }
        if (iVar1 % 0x20 != 0) {
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar7 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar8) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar8);
      FUN_1447c6044(param_1 + 2,uVar3,uVar8,0);
      return;
    }
  }
  return;
}



// FUNCTION 140129534 FUN_140129534 body=639 status=ok
// SIG undefined FUN_140129534(void)

void FUN_140129534(longlong *param_1)

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
    if ((int)uVar7 < 1) goto LAB_140129597;
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
LAB_140129597:
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
      lVar13 = (longlong)iVar12 * 0x30;
      uVar15 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar6 + lVar13);
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0x2c + lVar13) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 0x28 + lVar13) =
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



// FUNCTION 1401297de FUN_1401297de body=1764 status=ok
// SIG undefined FUN_1401297de(void)

void FUN_1401297de(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4,
                  undefined4 param_5,undefined4 param_6,char param_7,uint *param_8,
                  undefined8 param_9,undefined8 param_10)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  byte bVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  uint uVar9;
  uint local_88;
  undefined8 *local_70;
  
  uVar9 = *param_8;
  if (uVar9 == 0) {
    local_88 = 0x20;
  }
  else {
    local_88 = 0;
    if (uVar9 != 0) {
      for (; (uVar9 >> local_88 & 1) == 0; local_88 = local_88 + 1) {
      }
    }
  }
  bVar4 = (byte)local_88;
  if ((*(uint *)(param_4 + 1) & 6) == 0) {
    if (uVar9 != 0) {
      puVar8 = (undefined8 *)0x0;
      uVar7 = uVar9;
      do {
        lVar5 = param_1[(ulonglong)local_88 + 0xfa];
        puVar2 = (undefined8 *)FUN_14001cc68(0x1e0,0x10);
        *(undefined4 *)(puVar2 + 1) = 0;
        *(undefined1 *)((longlong)puVar2 + 0xc) = 0x13;
        *(byte *)((longlong)puVar2 + 0xd) = *(byte *)((longlong)puVar2 + 0xd) | 3;
        puVar2[2] = 0;
        *(undefined4 *)(puVar2 + 3) = 0;
        *puVar2 = &PTR_FUN_14a1e4968;
        puVar2[4] = *param_4;
        *(undefined4 *)(puVar2 + 5) = *(undefined4 *)(param_4 + 1);
        plVar1 = puVar2 + 6;
        puVar2[7] = lVar5;
        puVar2[6] = &PTR_LAB_14a349320;
        InitializeCriticalSection((LPCRITICAL_SECTION)(puVar2 + 8));
        SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar2 + 8),4000);
        puVar2[0xd] = 0;
        puVar2[0xe] = 0;
        puVar2[0xf] = lVar5;
        puVar2[0x11] = 0;
        puVar2[0x12] = 0;
        puVar2[0x19] = 0;
        puVar2[0x1a] = 0;
        puVar2[0x1b] = 0;
        puVar2[0x1c] = 0;
        *(undefined1 *)(puVar2 + 0x1d) = 0;
        *(undefined2 *)((longlong)puVar2 + 0xe9) = 0xff;
        puVar2[0x13] = 0;
        puVar2[0x14] = 0;
        puVar2[0x15] = 0;
        puVar2[0x16] = 0;
        puVar2[0x17] = 0;
        puVar2[0x18] = 0;
        puVar2[0x10] = plVar1;
        *(undefined4 *)(puVar2 + 0x1e) = 1;
        puVar2[0x1f] = 0;
        puVar2[0x20] = 0;
        puVar2[0x21] = 0;
        puVar2[0x22] = 0;
        puVar2[0x23] = 0;
        puVar2[0x24] = 0;
        puVar2[0x25] = 0;
        puVar2[0x26] = 0;
        *puVar2 = &PTR_FUN_14a347ef8;
        puVar2[6] = &PTR_FUN_14a347f10;
        puVar2[0x27] = lVar5;
        puVar2[0x28] = lVar5;
        puVar2[0x2b] = 0;
        puVar2[0x29] = 0;
        puVar2[0x2a] = 0;
        puVar2[0x32] = 0;
        puVar2[0x33] = 0;
        puVar2[0x34] = 0;
        puVar2[0x35] = 0;
        *(undefined1 *)(puVar2 + 0x36) = 0;
        *(undefined2 *)((longlong)puVar2 + 0x1b1) = 0xff;
        puVar2[0x2c] = 0;
        puVar2[0x2d] = 0;
        puVar2[0x2e] = 0;
        puVar2[0x2f] = 0;
        puVar2[0x30] = 0;
        puVar2[0x31] = 0;
        puVar2[0x37] = 0;
        puVar2[0x38] = 0;
        *(undefined8 *)((longlong)puVar2 + 0x1c4) = 0;
        *(undefined8 *)((longlong)puVar2 + 0x1cc) = 0;
        *(uint *)((longlong)puVar2 + 0x1d4) = *(uint *)((longlong)puVar2 + 0x1d4) & 0xfffffff8 | 4;
        *(undefined4 *)(puVar2 + 0x3b) = param_3;
        (**(code **)(*param_1 + 0x10))
                  (param_1,lVar5,param_2,*(undefined4 *)param_4,*(undefined4 *)(param_4 + 1),param_5
                   ,param_6,param_3,puVar2,puVar2 + 0xf,param_9,param_10);
        if ((param_7 == '\0') && (*(char *)((longlong)puVar2 + 0xe9) == '\x02')) {
          *(byte *)((longlong)puVar2 + 0xa6) = *(byte *)((longlong)puVar2 + 0xa6) & 0xef;
        }
        puVar3 = puVar2;
        if (puVar8 != (undefined8 *)0x0) {
          (**(code **)(*plVar1 + 8))(plVar1);
          puVar3 = puVar8;
        }
        puVar3[(ulonglong)local_88 + 0x1f] = puVar2;
        uVar7 = uVar7 & ~(1 << (local_88 & 0x1f));
        if (uVar7 == 0) {
          local_88 = 0x20;
        }
        else {
          local_88 = 0;
          if (uVar7 != 0) {
            for (; (uVar7 >> local_88 & 1) == 0; local_88 = local_88 + 1) {
            }
          }
        }
        puVar8 = puVar3;
      } while (uVar7 != 0);
      if (puVar3 != (undefined8 *)0x0) {
        *(uint *)(puVar3 + 0x1e) = uVar9;
        bVar4 = bVar4 & 0x1f;
        uVar9 = (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4) & uVar9;
        if (uVar9 != 0) {
          uVar7 = 0;
          if (uVar9 != 0) {
            for (; (uVar9 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
            }
          }
          do {
            puVar8 = puVar3 + 0x1e;
            puVar2 = (undefined8 *)(puVar3[(ulonglong)uVar7 + 0x1f] + 0xf0);
            for (lVar5 = 9; lVar5 != 0; lVar5 = lVar5 + -1) {
              *puVar2 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar2 = puVar2 + 1;
            }
            bVar4 = (byte)uVar7 & 0x1f;
            uVar9 = (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4) & uVar9;
            if (uVar9 == 0) {
              uVar7 = 0x20;
            }
            else {
              uVar7 = 0;
              if (uVar9 != 0) {
                for (; (uVar9 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
                }
              }
            }
          } while (uVar9 != 0);
        }
        goto LAB_140129e8e;
      }
    }
  }
  else if (uVar9 != 0) {
    local_70 = (undefined8 *)0x0;
    puVar8 = (undefined8 *)0x0;
    uVar6 = uVar9;
    uVar7 = local_88;
    do {
      lVar5 = param_1[(ulonglong)uVar7 + 0xfa];
      puVar2 = (undefined8 *)FUN_14001cc68(0x1e0,0x10);
      *(undefined4 *)(puVar2 + 1) = 0;
      *(undefined1 *)((longlong)puVar2 + 0xc) = 0x13;
      *(byte *)((longlong)puVar2 + 0xd) = *(byte *)((longlong)puVar2 + 0xd) | 3;
      puVar2[2] = 0;
      *(undefined4 *)(puVar2 + 3) = 0;
      *puVar2 = &PTR_FUN_14a1e4968;
      puVar2[4] = *param_4;
      *(undefined4 *)(puVar2 + 5) = *(undefined4 *)(param_4 + 1);
      plVar1 = puVar2 + 6;
      puVar2[7] = lVar5;
      puVar2[6] = &PTR_LAB_14a349320;
      InitializeCriticalSection((LPCRITICAL_SECTION)(puVar2 + 8));
      SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar2 + 8),4000);
      puVar2[0xd] = 0;
      puVar2[0xe] = 0;
      puVar2[0xf] = lVar5;
      puVar2[0x11] = 0;
      puVar2[0x12] = 0;
      puVar2[0x19] = 0;
      puVar2[0x1a] = 0;
      puVar2[0x1b] = 0;
      puVar2[0x1c] = 0;
      *(undefined1 *)(puVar2 + 0x1d) = 0;
      *(undefined2 *)((longlong)puVar2 + 0xe9) = 0xff;
      puVar2[0x13] = 0;
      puVar2[0x14] = 0;
      puVar2[0x15] = 0;
      puVar2[0x16] = 0;
      puVar2[0x17] = 0;
      puVar2[0x18] = 0;
      puVar2[0x10] = plVar1;
      *(undefined4 *)(puVar2 + 0x1e) = 1;
      puVar2[0x1f] = 0;
      puVar2[0x20] = 0;
      puVar2[0x21] = 0;
      puVar2[0x22] = 0;
      puVar2[0x23] = 0;
      puVar2[0x24] = 0;
      puVar2[0x25] = 0;
      puVar2[0x26] = 0;
      *puVar2 = &PTR_FUN_14a347ef8;
      puVar2[6] = &PTR_FUN_14a347f10;
      puVar2[0x27] = lVar5;
      puVar2[0x28] = lVar5;
      puVar2[0x2b] = 0;
      puVar2[0x29] = 0;
      puVar2[0x2a] = 0;
      puVar2[0x32] = 0;
      puVar2[0x33] = 0;
      puVar2[0x34] = 0;
      puVar2[0x35] = 0;
      *(undefined1 *)(puVar2 + 0x36) = 0;
      *(undefined2 *)((longlong)puVar2 + 0x1b1) = 0xff;
      puVar2[0x2c] = 0;
      puVar2[0x2d] = 0;
      puVar2[0x2e] = 0;
      puVar2[0x2f] = 0;
      puVar2[0x30] = 0;
      puVar2[0x31] = 0;
      puVar2[0x37] = 0;
      puVar2[0x38] = 0;
      *(undefined8 *)((longlong)puVar2 + 0x1c4) = 0;
      *(undefined8 *)((longlong)puVar2 + 0x1cc) = 0;
      *(uint *)((longlong)puVar2 + 0x1d4) = *(uint *)((longlong)puVar2 + 0x1d4) & 0xfffffff8 | 4;
      *(undefined4 *)(puVar2 + 0x3b) = param_3;
      if (*(uint *)(lVar5 + 8) == local_88 || (*(uint *)(param_4 + 1) >> 0x11 & 1) != 0) {
        (**(code **)(*param_1 + 0x10))
                  (param_1,lVar5,param_2,*(undefined4 *)param_4,*(uint *)(param_4 + 1),param_5,
                   param_6,param_3,puVar2,puVar2 + 0xf,param_9,param_10);
        local_70 = puVar2;
      }
      else {
        FUN_14737f7b6(lVar5,puVar2 + 0xf,local_70 + 0xf);
      }
      puVar3 = puVar2;
      if (puVar8 != (undefined8 *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1);
        puVar3 = puVar8;
      }
      puVar3[(ulonglong)uVar7 + 0x1f] = puVar2;
      uVar6 = uVar6 & ~(1 << (uVar7 & 0x1f));
      if (uVar6 == 0) {
        uVar7 = 0x20;
      }
      else {
        uVar7 = 0;
        if (uVar6 != 0) {
          for (; (uVar6 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
          }
        }
      }
      puVar8 = puVar3;
    } while (uVar6 != 0);
    if (puVar3 != (undefined8 *)0x0) {
      *(uint *)(puVar3 + 0x1e) = uVar9;
      bVar4 = bVar4 & 0x1f;
      uVar9 = (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4) & uVar9;
      if (uVar9 != 0) {
        uVar7 = 0;
        if (uVar9 != 0) {
          for (; (uVar9 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
          }
        }
        do {
          puVar8 = puVar3 + 0x1e;
          puVar2 = (undefined8 *)(puVar3[(ulonglong)uVar7 + 0x1f] + 0xf0);
          for (lVar5 = 9; lVar5 != 0; lVar5 = lVar5 + -1) {
            *puVar2 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar2 = puVar2 + 1;
          }
          bVar4 = (byte)uVar7 & 0x1f;
          uVar9 = (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4) & uVar9;
          if (uVar9 == 0) {
            uVar7 = 0x20;
          }
          else {
            uVar7 = 0;
            if (uVar9 != 0) {
              for (; (uVar9 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
              }
            }
          }
        } while (uVar9 != 0);
      }
      goto LAB_140129e8e;
    }
  }
  puVar3 = (undefined8 *)0x0;
LAB_140129e8e:
  if (*(char *)((longlong)puVar3 + 0xea) == '\0') {
    LOCK();
    DAT_14ca84ee0 = DAT_14ca84ee0 + puVar3[0x1c];
    UNLOCK();
  }
  return;
}



// FUNCTION 140129ec2 FUN_140129ec2 body=991 status=ok
// SIG undefined FUN_140129ec2(void)

void FUN_140129ec2(longlong param_1,ulonglong *param_2,longlong *param_3,undefined4 param_4)

{
  int iVar1;
  byte bVar2;
  longlong lVar3;
  DWORD DVar4;
  void *pvVar5;
  void *pvVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong _Size;
  bool bVar13;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  DWORD local_14c;
  longlong local_148;
  uint uStack_140;
  undefined4 uStack_13c;
  longlong local_138 [14];
  undefined1 local_c8;
  undefined2 local_c7;
  longlong local_c0 [14];
  undefined1 local_50;
  undefined2 local_4f;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if ((*(byte *)(param_1 + 0x28) & 6) != 0) {
    uVar12 = *(uint *)(param_1 + 0x20);
    pvVar6 = *(void **)(param_1 + 200);
    pvVar5 = (void *)(**(code **)(*param_3 + 8))(param_3);
    memcpy(pvVar6,pvVar5,(ulonglong)uVar12);
    goto LAB_14012a1bf;
  }
  pvVar6 = (void *)(**(code **)(*param_3 + 8))(param_3);
  bVar2 = (byte)DAT_14c760da4 & 0x1f;
  local_c0[0] = *(longlong *)(param_1 + 0x38);
  _Size = (ulonglong)*(uint *)(param_1 + 0x20);
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (iVar1 == 0x20) {
LAB_14012a08e:
    local_4f = 0xff;
    local_50 = 0;
    local_c0[0xd] = 0;
    local_c0[0xc] = 0;
    local_c0[0xb] = 0;
    local_c0[10] = 0;
    local_c0[9] = 0;
    local_c0[8] = 0;
    local_c0[7] = 0;
    local_c0[6] = 0;
    local_c0[5] = 0;
    local_c0[4] = 0;
    local_c0[3] = 0;
    local_c0[2] = 0;
    local_c0[1] = 0;
    pvVar5 = (void *)FUN_140a6e1ae(local_c0[0] + 0x1438,_Size,4,local_c0);
  }
  else {
    if (DAT_14c86a9fc == 0) {
      bVar13 = true;
      if (iVar1 != 2) {
        if (iVar1 == 1) {
          local_14c = FUN_140ad26c0();
          DVar4 = GetCurrentThreadId();
          bVar13 = local_14c == DVar4;
        }
        else if (iVar1 != 0x10) {
          bVar13 = false;
        }
      }
    }
    else {
      bVar13 = iVar1 == 0x10;
    }
    local_c0[1] = 0;
    local_c0[2] = 0;
    local_c0[3] = 0;
    local_c0[10] = 0;
    local_c0[0xb] = 0;
    local_c0[0xc] = 0;
    local_c0[0xd] = 0;
    local_50 = 0;
    local_4f = 0xff;
    local_c0[4] = 0;
    local_c0[5] = 0;
    local_c0[6] = 0;
    local_c0[7] = 0;
    local_c0[8] = 0;
    local_c0[9] = 0;
    if (bVar13) goto LAB_14012a08e;
    pvVar5 = (void *)FUN_14008f39a(*(undefined8 *)
                                    (*(longlong *)(local_c0[0] + 0x10) + 0x4e0 +
                                    (ulonglong)*(uint *)(local_c0[0] + 8) * 8),_Size,4,local_c0);
  }
  memcpy(pvVar5,pvVar6,_Size);
  local_138[0] = local_c0[0];
  local_138[1] = 0;
  local_138[2] = 0;
  local_138[3] = 0;
  local_138[10] = 0;
  local_138[0xb] = 0;
  local_138[0xc] = 0;
  local_138[0xd] = 0;
  local_c8 = 0;
  local_c7 = 0xff;
  local_138[4] = 0;
  local_138[5] = 0;
  local_138[6] = 0;
  local_138[7] = 0;
  local_138[8] = 0;
  local_138[9] = 0;
  local_148 = param_1;
  uStack_140 = ~(-1 << bVar2);
  uStack_13c = param_4;
  FUN_14488e164(local_138);
  lVar3 = local_148;
  if (*(char *)((longlong)param_2 + 100) == '\x01') {
    uVar12 = uStack_140 & *(uint *)((longlong)param_2 + 0x17c);
    if (uVar12 != 0) {
      uVar10 = 0;
      if (uVar12 != 0) {
        for (; (uVar12 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
        }
      }
      do {
        uVar8 = (**(code **)(*(longlong *)param_2[8] + 0x278))((longlong *)param_2[8],uVar10);
        if (lVar3 == 0) {
          lVar11 = 0;
        }
        else {
          lVar11 = *(longlong *)(lVar3 + 0xf8 + (ulonglong)uVar10 * 8);
        }
        local_158 = *(undefined4 *)(lVar3 + 0x20);
        FUN_14315b796(uVar8,uStack_13c,lVar11 + 0x78,local_138);
        bVar2 = (byte)uVar10 & 0x1f;
        uVar12 = uVar12 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
        if (uVar12 == 0) {
          uVar10 = 0x20;
        }
        else {
          uVar10 = 0;
          if (uVar12 != 0) {
            for (; (uVar12 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
            }
          }
        }
      } while (uVar12 != 0);
    }
  }
  else {
    puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar9 = puVar7 + 0x13;
    if ((undefined8 *)param_2[1] < puVar9) {
      FUN_140023dd8(param_2);
      puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar9 = puVar7 + 0x13;
    }
    *param_2 = (ulonglong)puVar9;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar7;
    param_2[6] = (ulonglong)(puVar7 + 1);
    puVar7[1] = 0;
    *puVar7 = &PTR_FUN_14a348ff0;
    puVar7[2] = local_148;
    puVar7[3] = CONCAT44(uStack_13c,uStack_140);
    puVar7[4] = local_138[0];
    puVar7[7] = 0;
    puVar7[5] = 0;
    puVar7[6] = 0;
    puVar7[0x10] = 0;
    puVar7[0x11] = 0;
    puVar7[0xe] = 0;
    puVar7[0xf] = 0;
    *(undefined1 *)(puVar7 + 0x12) = 0;
    *(undefined2 *)((longlong)puVar7 + 0x91) = 0xff;
    puVar7[0xc] = 0;
    puVar7[0xd] = 0;
    puVar7[10] = 0;
    puVar7[0xb] = 0;
    puVar7[8] = 0;
    puVar7[9] = 0;
    FUN_14488e164(puVar7 + 4,local_138);
  }
  FUN_144902b9c(local_138);
  FUN_144902b9c(local_c0);
LAB_14012a1bf:
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Could not recover jumptable at 0x00014012a1ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x18))(param_3);
  return;
}



// FUNCTION 14012a2a2 FUN_14012a2a2 body=162 status=ok
// SIG undefined FUN_14012a2a2(void)

void FUN_14012a2a2(longlong param_1,byte param_2)

{
  byte bVar1;
  longlong lVar2;
  
  bVar1 = *(byte *)(*(longlong *)(&DAT_00001ce8 + param_1) + 0x550);
  FUN_14012c654();
  if ((((bVar1 ^ *(byte *)(*(longlong *)(&DAT_00001ce8 + param_1) + 0x550)) & 2) == 0 &
      (param_2 ^ 1)) == 0) {
    if (param_2 == 0) {
      FUN_14483674a(param_1 + 0x1288);
    }
    if ((longlong)*(int *)(param_1 + 0x41a0) != 0) {
      lVar2 = 0;
      do {
        if ((*(int *)(*(longlong *)(param_1 + 0x4198) + 8 + lVar2) != 0) &&
           (*(longlong *)(*(longlong *)(param_1 + 0x4198) + lVar2) != 0)) {
          FUN_1404f44a8(param_1 + 0x4198,param_1);
          return;
        }
        lVar2 = lVar2 + 0x10;
      } while ((longlong)*(int *)(param_1 + 0x41a0) * 0x10 != lVar2);
    }
  }
  return;
}



// FUNCTION 14012a344 FUN_14012a344 body=215 status=ok
// SIG undefined FUN_14012a344(void)

void FUN_14012a344(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  
  cVar4 = (**(code **)(*param_1 + 0x300))();
  if ((cVar4 == '\0') && (*(int *)(param_2 + 0x40) != *(int *)(param_2 + 0x44))) {
    puVar1 = (undefined8 *)(param_2 + 0x30);
    *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x44);
    cVar4 = FUN_14012a8d0(param_1,puVar1,param_2);
    uVar3 = *(ulonglong *)(param_2 + 0x30);
    if (uVar3 == 0 || cVar4 != '\0') {
      if (uVar3 != 0) {
        uVar5 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        lVar6 = FUN_14012a666(param_1 + 0x66,uVar5 >> 0x10 ^ uVar5,puVar1);
        *(char *)(lVar6 + 0x10) = '\x02' - cVar4;
      }
    }
    else {
      iVar2 = (int)param_1[0x65];
      *(uint *)(param_1 + 0x65) = iVar2 + 1U;
      if (*(uint *)((longlong)param_1 + 0x32c) < iVar2 + 1U) {
        FUN_1470a4daa(param_1 + 100,iVar2);
      }
      *(undefined8 *)(param_1[100] + (longlong)iVar2 * 8) = *puVar1;
      *puVar1 = 0;
    }
  }
  return;
}



// FUNCTION 14012a41c FUN_14012a41c body=446 status=ok
// SIG undefined FUN_14012a41c(void)

undefined8 FUN_14012a41c(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined1 auStack_88 [32];
  longlong local_68;
  char local_60;
  longlong local_58;
  longlong local_50 [3];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50[0] = param_1;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  FUN_14012a5dc(&local_68,
                *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xfd0,local_50);
  if ((local_60 == '\0') && ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34))) {
    lVar2 = *(longlong *)(param_1 + 0x18);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar6 = (uint)lVar2 & 0xffff;
    plVar4 = param_3 + 7;
    if ((longlong *)param_3[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_3[8];
    }
    iVar1 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_3[9] - 1U &
                    (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar6) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar1 != -1) {
      do {
        plVar4 = (longlong *)(*param_3 + (longlong)iVar1 * 0x28);
        if (*plVar4 == lVar2) {
          if (plVar4 + 1 == (longlong *)0x0 || plVar4 == (longlong *)0x0) goto LAB_14012a51a;
          local_58 = plVar4[1];
          FUN_1446dcdd4(local_50);
          if (DAT_14cb1d1f0 == 0) {
            if (local_38 != 0) {
              FUN_1400020a8();
            }
            goto LAB_14012a51a;
          }
          plVar4 = (longlong *)FUN_144837462(DAT_14cb1d1f0,local_50);
          if (local_38 != 0) {
            FUN_1400020a8();
          }
          if (plVar4 == (longlong *)0x0) goto LAB_14012a51a;
          uVar5 = (**(code **)(*plVar4 + 0x28))(plVar4,param_2,param_3);
          break;
        }
        iVar1 = (int)plVar4[4];
        uVar5 = 0;
      } while (iVar1 != -1);
      goto LAB_14012a570;
    }
  }
LAB_14012a51a:
  uVar5 = 0;
LAB_14012a570:
  if (local_60 == '\0') {
    *(int *)(local_68 + 0x28) = *(int *)(local_68 + 0x28) + -1;
  }
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 14012a5dc FUN_14012a5dc body=138 status=ok
// SIG undefined FUN_14012a5dc(void)

longlong * FUN_14012a5dc(longlong *param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  iVar1 = *(int *)(param_2 + 0x28);
  lVar4 = (longlong)iVar1;
  if (0 < lVar4) {
    lVar2 = *(longlong *)(param_2 + 0x20);
    if (*(longlong *)(param_2 + 0x20) == 0) {
      lVar2 = param_2;
    }
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar3) == *param_3) {
        *(undefined1 *)(param_1 + 1) = 1;
        return param_1;
      }
      lVar3 = lVar3 + 8;
    } while (lVar4 * 8 - lVar3 != 0);
  }
  *(uint *)(param_2 + 0x28) = iVar1 + 1U;
  if (*(uint *)(param_2 + 0x2c) < iVar1 + 1U) {
    FUN_147e6c600(param_2,iVar1);
  }
  lVar2 = *(longlong *)(param_2 + 0x20);
  if (*(longlong *)(param_2 + 0x20) == 0) {
    lVar2 = param_2;
  }
  *(longlong *)(lVar2 + lVar4 * 8) = *param_3;
  return param_1;
}



// FUNCTION 14012a666 FUN_14012a666 body=189 status=ok
// SIG undefined FUN_14012a666(void)

longlong * FUN_14012a666(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)(*param_1 + (longlong)iVar1 * 0x28);
        if (*plVar2 == *param_3) {
          if (plVar2 != (longlong *)0x0) goto LAB_14012a6c6;
          break;
        }
        iVar1 = (int)plVar2[4];
      } while (iVar1 != -1);
    }
  }
  local_38 = 0;
  local_28 = param_3;
  FUN_1470eacc2(param_1,&local_1c,param_2);
  plVar2 = (longlong *)(*param_1 + (longlong)local_1c * 0x28);
LAB_14012a6c6:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar2 + 1;
}



// FUNCTION 14012a724 FUN_14012a724 body=163 status=ok
// SIG undefined FUN_14012a724(void)

void FUN_14012a724(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  undefined8 local_28;
  longlong lStack_20;
  int local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  local_30 = 0xc;
  local_28 = 0;
  lStack_20 = 0;
  local_18 = 0xc;
  if (*param_2 != 0 || (int)param_2[1] != 0xc) {
    local_38 = *param_2;
    local_30 = (int)param_2[1];
  }
  if ((*param_3 != 0) || ((int)param_3[1] != 0xc)) {
    lStack_20 = *param_3;
    local_18 = (int)param_3[1];
  }
  local_10 = 0;
  FUN_1447cd2ec(0,&local_38);
  if ((local_8 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14012a7c8 FUN_14012a7c8 body=173 status=ok
// SIG undefined FUN_14012a7c8(void)

void FUN_14012a7c8(longlong *param_1,undefined8 param_2,undefined8 param_3)

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
        goto LAB_14012a85f;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14012a85f:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14012a876 FUN_14012a876 body=90 status=ok
// SIG undefined FUN_14012a876(void)

void FUN_14012a876(longlong param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = FUN_1407d402c(param_1 + 0x68);
  if (lVar2 != 0) {
    FUN_14012bcc6(lVar2);
    FUN_14012b926(lVar2 + 0x1b8);
  }
  plVar3 = (longlong *)FUN_1405c052c(param_1);
  if ((plVar3 != (longlong *)0x0) && ((char)plVar3[3] == '\0')) {
    uVar1 = (**(code **)(*plVar3 + 0x18))(plVar3);
    *(undefined1 *)(plVar3 + 3) = uVar1;
  }
  return;
}



// FUNCTION 14012a8d0 FUN_14012a8d0 body=1201 status=ok
// SIG undefined FUN_14012a8d0(void)

ulonglong FUN_14012a8d0(longlong *param_1,ulonglong *param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  void *_Src;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  void **ppvVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  longlong local_a8;
  longlong *local_a0;
  byte *local_98;
  longlong *plStack_90;
  void *local_88;
  ulonglong uStack_80;
  int local_74;
  int local_70 [2];
  ulonglong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar2 = param_1 + 0x66;
  if ((int)param_1[0x67] != *(int *)((longlong)param_1 + 0x364)) {
    uVar6 = *param_2;
    uVar9 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
    uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
    plVar8 = param_1 + 0x6d;
    if ((longlong *)param_1[0x6e] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[0x6e];
    }
    iVar3 = *(int *)((longlong)plVar8 +
                    ((longlong)(int)(uVar9 >> 0x10 ^ uVar9) & (longlong)(int)param_1[0x6f] - 1U) * 4
                    );
    if (iVar3 != -1) {
      do {
        if (*(ulonglong *)(*plVar2 + (longlong)iVar3 * 0x28) == uVar6) {
          FUN_1470eae62(plVar2);
          break;
        }
        iVar3 = *(int *)(*plVar2 + (longlong)iVar3 * 0x28 + 0x20);
      } while (iVar3 != -1);
    }
  }
  local_88 = (void *)0x0;
  uStack_80 = 0;
  cVar4 = (**(code **)(*param_1 + 0x418))(param_1,&local_88,param_3,param_3);
  if (cVar4 == '\0') {
    uVar6 = 0;
    goto LAB_14012ac35;
  }
  local_98 = (byte *)0x0;
  plStack_90 = (longlong *)0x0;
  uVar6 = 0;
  cVar4 = FUN_1446e9750(param_1,&local_98,&local_88,0);
  if (cVar4 != '\0') {
    FUN_14483827e(param_1,&local_a8,&local_98);
    if (local_a8 == 0) {
LAB_14012ac7a:
      uVar6 = 0;
    }
    else {
      if ((longlong *)*param_2 == (longlong *)0x0) {
LAB_14012aa09:
        uVar6 = FUN_14012ad82(local_a8);
        if (*param_2 != uVar6 && *param_2 != 0) {
          iVar3 = (int)param_1[0x65];
          *(uint *)(param_1 + 0x65) = iVar3 + 1U;
          if (*(uint *)((longlong)param_1 + 0x32c) < iVar3 + 1U) {
            FUN_1470a4daa(param_1 + 100,iVar3);
          }
          *(ulonglong *)(param_1[100] + (longlong)iVar3 * 8) = *param_2;
        }
        *param_2 = uVar6;
        if (uVar6 == 0) goto LAB_14012ac7a;
      }
      else {
        lVar13 = (**(code **)(*(longlong *)*param_2 + 8))();
        lVar12 = local_a8 + 0x38;
        lVar7 = FUN_14479d2ce(lVar12);
        if (lVar13 != lVar7) goto LAB_14012aa09;
        uVar6 = *param_2;
        plVar8 = (longlong *)FUN_14479d2ce(lVar12);
        (**(code **)(*plVar8 + 0x2f0))(plVar8,uVar6,1);
        plVar8 = (longlong *)FUN_14479d2ce(lVar12);
        (**(code **)(*plVar8 + 0x2e8))(plVar8,uVar6,1);
        uVar6 = *param_2;
      }
      *(ulonglong *)(param_3 + 0x30) = uVar6;
      if ((param_3 != 0) && (uVar6 != 0)) {
        FUN_1407d81de(uVar6 + 8,param_3);
      }
      FUN_14012b0fa(plVar2,local_70);
      uVar6 = *param_2;
      *local_68 = uVar6;
      local_68[1] = 0;
      local_68[2] = 0;
      *(undefined1 *)(local_68 + 3) = 0;
      *(undefined4 *)(local_68 + 4) = 0xffffffff;
      local_74 = local_70[0];
      uVar9 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
      uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
      uVar9 = uVar9 >> 0x10 ^ uVar9;
      local_b8 = 0;
      cVar4 = FUN_14012af04(plVar2,uVar9,local_68,&local_74);
      iVar3 = local_74;
      lVar12 = (longlong)local_74;
      if (cVar4 == '\0') {
        uVar5 = (int)param_1[0x67] - *(int *)((longlong)param_1 + 0x364);
        if (uVar5 < 4) {
          iVar11 = 1;
        }
        else {
          uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
          lVar13 = 0x3f;
          if (uVar6 != 0) {
            for (; uVar6 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          iVar11 = 1 << ((byte)lVar13 & 0x1f);
        }
        if (((int)uVar5 < 1) || (iVar11 <= (int)param_1[0x6f])) {
          uVar9 = (int)param_1[0x6f] - 1U & uVar9;
          *(uint *)((longlong)local_68 + 0x24) = uVar9;
          plVar8 = (longlong *)param_1[0x6e];
          if ((longlong *)param_1[0x6e] == (longlong *)0x0) {
            plVar8 = param_1 + 0x6d;
          }
          *(undefined4 *)(local_68 + 4) =
               *(undefined4 *)
                ((longlong)plVar8 + ((longlong)(int)param_1[0x6f] - 1U & (longlong)(int)uVar9) * 4);
          plVar8 = (longlong *)param_1[0x6e];
          if ((longlong *)param_1[0x6e] == (longlong *)0x0) {
            plVar8 = param_1 + 0x6d;
          }
          *(int *)((longlong)plVar8 + ((longlong)(int)param_1[0x6f] - 1U & (longlong)(int)uVar9) * 4
                  ) = local_74;
        }
        else {
          *(int *)(param_1 + 0x6f) = iVar11;
          FUN_14012bf40(plVar2);
        }
      }
      _Src = local_88;
      lVar12 = *plVar2 + lVar12 * 0x28;
      ppvVar10 = (void **)(lVar12 + 8);
      if (ppvVar10 != &local_88) {
        iVar11 = (int)uStack_80;
        lVar13 = (longlong)(int)uStack_80;
        *(int *)(lVar12 + 0x10) = (int)uStack_80;
        if ((int)uStack_80 == 0 && *(int *)(lVar12 + 0x14) == 0) {
          *(undefined4 *)(lVar12 + 0x14) = 0;
        }
        else {
          FUN_14012afbc(ppvVar10,uStack_80 & 0xffffffff);
          if (iVar11 != 0) {
            memcpy(*ppvVar10,_Src,lVar13 << 3);
          }
        }
      }
      if ((local_98 == (byte *)0x0) || ((*local_98 & 0x6b) != 3)) goto LAB_14012ac7a;
      (**(code **)(*param_1 + 0x428))(param_1,*param_2,&local_98,&local_88);
      uVar6 = CONCAT71((int7)(int3)((uint)iVar3 >> 8),1);
    }
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_a0 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar1 = (int *)((longlong)local_a0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_a0 + 0x10))(local_a0);
        }
      }
    }
  }
  plVar2 = plStack_90;
  if (plStack_90 != (longlong *)0x0) {
    LOCK();
    plVar8 = plStack_90 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plStack_90)(plStack_90);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
LAB_14012ac35:
  if (local_88 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14012ad82 FUN_14012ad82 body=145 status=ok
// SIG undefined FUN_14012ad82(void)

undefined8 * FUN_14012ad82(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(param_1 + 8);
  if (puVar4 == (undefined8 *)0x0) {
    FUN_14012b77c(param_1,*(undefined4 *)(param_1 + 4));
    puVar4 = *(undefined8 **)(param_1 + 8);
  }
  *(undefined8 *)(param_1 + 8) = *puVar4;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  if (*(int *)(param_1 + 0x3c) != 0) {
    uVar1 = *(uint *)(param_1 + 0x38);
    plVar2 = (longlong *)0x0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_14012ade2;
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((puVar3 != (undefined8 *)0x0) &&
       ((*(int *)(puVar3 + 2) == *(int *)(param_1 + 0x3c) &&
        ((*(uint *)(puVar3 + 1) & 0x10200000) == 0)))) {
      plVar2 = (longlong *)*puVar3;
      goto LAB_14012ade2;
    }
  }
  plVar2 = (longlong *)0x0;
LAB_14012ade2:
  (**(code **)(*plVar2 + 0x2e8))(plVar2,puVar4,1);
  return puVar4;
}



// FUNCTION 14012ae14 FUN_14012ae14 body=119 status=ok
// SIG undefined FUN_14012ae14(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14012ae14(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _DAT_14c9a1268 = 2;
  uVar1 = (**(code **)(*param_2 + 8))(param_2);
  FUN_1446e7478(param_3,param_2,uVar1,1);
  _DAT_14c9a1268 = 0;
  (**(code **)(*param_1 + 0x430))(param_1,param_2,param_3);
  if (param_2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014012ae7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x10))(param_2,param_3);
    return;
  }
  return;
}



// FUNCTION 14012ae8c FUN_14012ae8c body=119 status=ok
// SIG undefined FUN_14012ae8c(void)

undefined4 FUN_14012ae8c(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_78 [40];
  undefined1 local_50 [24];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_1 + 0x2b8))(param_1,local_50);
  uVar1 = FUN_144837a70(param_1,param_2,param_3,local_50);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14012af04 FUN_14012af04 body=183 status=ok
// SIG undefined FUN_14012af04(void)

void FUN_14012af04(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 uVar8;
  longlong *plVar9;
  int iVar10;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar9 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[8];
    }
    iVar10 = *(int *)((longlong)plVar9 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar10 != -1) {
      do {
        plVar9 = (longlong *)(*param_1 + (longlong)iVar10 * 0x28);
        if (*plVar9 == *param_3) {
          if (plVar9[1] != 0) {
            FUN_1400020a8();
          }
          lVar5 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar6 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          uVar3 = *(undefined4 *)((longlong)param_3 + 0x14);
          lVar7 = param_3[3];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0x1c);
          *(int *)(plVar9 + 2) = (int)param_3[2];
          *(undefined4 *)((longlong)plVar9 + 0x14) = uVar3;
          *(int *)(plVar9 + 3) = (int)lVar7;
          *(undefined4 *)((longlong)plVar9 + 0x1c) = uVar4;
          *(int *)plVar9 = (int)lVar5;
          *(undefined4 *)((longlong)plVar9 + 4) = uVar1;
          *(int *)(plVar9 + 1) = (int)lVar6;
          *(undefined4 *)((longlong)plVar9 + 0xc) = uVar2;
          FUN_1470eadf0(param_1,*param_4);
          *param_4 = iVar10;
          uVar8 = 1;
          goto LAB_14012af76;
        }
        iVar10 = (int)plVar9[4];
      } while (iVar10 != -1);
    }
  }
  uVar8 = 0;
LAB_14012af76:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar8;
  }
  return;
}



// FUNCTION 14012afbc FUN_14012afbc body=317 status=ok
// SIG undefined FUN_14012afbc(void)

void FUN_14012afbc(longlong param_1,int param_2,int param_3)

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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14012b02a;
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
LAB_14012b02a:
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



// FUNCTION 14012b0fa FUN_14012b0fa body=715 status=ok
// SIG undefined FUN_14012b0fa(void)

int * FUN_14012b0fa(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar15 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar15 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar15) {
      FUN_140549c28(param_1,iVar15);
    }
    iVar8 = (int)param_1[5];
    if (iVar8 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar8 + 0x1e;
      if (-1 < iVar8 + -1) {
        iVar2 = iVar8 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar12 = param_1 + 2;
    iVar9 = iVar8 + 1;
    iVar16 = iVar8 + 0x1f;
    if (-1 < iVar8) {
      iVar16 = iVar8;
    }
    if (iVar16 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar9;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar8) {
        iVar2 = iVar8;
        if (iVar8 + 0x20U < 0xa0) {
          iVar9 = 0x80;
        }
        else {
          uVar18 = iVar8 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar11 = 4;
            if (4 < uVar18) {
              uVar11 = uVar18;
            }
          }
          else {
            uVar11 = uVar18 + (uVar18 * 3 >> 3) + 0x10;
          }
          uVar6 = (ulonglong)(uVar11 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar3 = (uint)(uVar6 + 0xf);
              if (uVar11 < 0x1ffd) {
                uVar6 = (ulonglong)
                        (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 + 0xf >> 4]];
              }
              else {
                uVar10 = (ulonglong)(uVar3 & 0xfffffff0);
                if (uVar10 < 0x7ff1) {
                  bVar7 = (&DAT_14c841e00)[uVar3 >> 4];
                  uVar14 = 0x32;
                  if (0x32 < bVar7) {
                    uVar14 = (ulonglong)bVar7;
                  }
                  uVar17 = 0x32 - (ulonglong)bVar7;
                  do {
                    uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar17 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar17 & 0xffffffff] & 0xf) == 0) goto LAB_14012b2bc;
                    lVar5 = uVar14 + 1 + uVar17;
                    uVar17 = uVar17 - 1;
                  } while (lVar5 != 0x33);
                }
                uVar6 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar6 = (ulonglong)DAT_14c841df8;
                }
                uVar6 = -uVar6 & (uVar10 + uVar6) - 1;
              }
            }
            else {
              uVar6 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar6,0);
              iVar2 = (int)param_1[5];
            }
          }
LAB_14012b2bc:
          iVar4 = (int)(uVar6 >> 2);
          iVar9 = -0x20;
          if ((int)uVar18 <= iVar4) {
            iVar9 = iVar4 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar9;
        FUN_1446efbd8(plVar12,iVar2);
        iVar9 = (int)param_1[5] + 1;
      }
      iVar2 = iVar9 + 0x1f;
      if (-1 < iVar9) {
        iVar2 = iVar9;
      }
      *(int *)(param_1 + 5) = iVar9;
      if (iVar9 % 0x20 != 0) {
        plVar13 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar13 = plVar12;
        }
        bVar7 = -(char)(iVar9 % 0x20);
        *(uint *)((longlong)plVar13 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar13 + (longlong)(iVar2 >> 5) * 4) << (bVar7 & 0x1f)) >>
             (bVar7 & 0x1f);
      }
    }
    lVar5 = (longlong)iVar15;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[4];
    }
    bVar7 = (byte)iVar8 & 0x1f;
    puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar16 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
  }
  else {
    iVar15 = (int)param_1[6];
    lVar5 = (longlong)iVar15;
    iVar8 = *(int *)(*param_1 + 4 + lVar5 * 0x28);
    *(int *)(param_1 + 6) = iVar8;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x28) = 0xffffffff;
    }
  }
  plVar12 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar12 = (longlong *)param_1[4];
  }
  iVar8 = iVar15 + 0x1f;
  if (-1 < iVar15) {
    iVar8 = iVar15;
  }
  puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar8 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar15 & 0x1f);
  *param_2 = iVar15;
  *(longlong *)(param_2 + 2) = lVar5 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 14012b3c6 FUN_14012b3c6 body=547 status=ok
// SIG undefined FUN_14012b3c6(void)

longlong FUN_14012b3c6(uint *param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined4 local_70;
  undefined8 local_68;
  wchar_t *local_60;
  undefined4 local_58;
  code *local_50;
  undefined1 *local_48;
  undefined2 **local_40;
  undefined2 *local_38;
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((((param_1[1] == 0) || (uVar1 = *param_1, (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1))
      || ((plVar7 = (longlong *)
                    ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
          plVar7 == (longlong *)0x0 || (*(uint *)(plVar7 + 2) != param_1[1])))) ||
     (((*(uint *)(plVar7 + 1) & 0x10200000) != 0 || (lVar3 = *plVar7, lVar3 == 0)))) {
    if (*(longlong *)(param_1 + 2) != 0) {
      lVar3 = FUN_140007850();
      cVar2 = (*(code *)PTR_FUN_14c758760)();
      if ((lVar3 == 0) || (cVar2 == '\0')) {
        FUN_14485c47a(param_1,lVar3);
        if (lVar3 == 0) goto LAB_14012b45b;
      }
      else {
        uVar1 = *(uint *)(lVar3 + 0xc);
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar4 = 0;
        }
        if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
          FUN_14485c47a(param_1,lVar3);
        }
      }
      if ((*(uint *)(lVar3 + 8) >> 0x1e & 1) == 0) goto LAB_14012b427;
    }
  }
  else {
LAB_14012b427:
    if (DAT_14c948fa0 == 0) {
      local_38 = &DAT_1427db2a2;
      lVar4 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
      DAT_14c948fa0 = lVar4;
      FUN_1446f470e(local_30,L"ScriptStruct",1);
      local_48 = &LAB_1468915ce;
      local_50 = FUN_1427dc742;
      local_60 = L"Engine";
      local_58 = 199;
      local_68 = 0x10;
      local_70 = 0x10000020;
      local_78 = (wchar_t *)CONCAT44(local_78._4_4_,8);
      local_40 = &local_38;
      FUN_14574b4b2(lVar4);
      DAT_14c948fa0 = lVar4;
      uVar5 = FUN_1446f8646();
      lVar4 = DAT_14c948fa0;
      uVar6 = FUN_1449e2fb2();
      local_78 = L"ScriptStruct";
      FUN_14574b446(uVar6,lVar4,uVar5,L"/Script/CoreUObject");
    }
    if ((*(int *)(DAT_14c948fa0 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14c948fa0 + 0x38) * 8) == DAT_14c948fa0 + 0x30)) goto LAB_14012b45d;
  }
LAB_14012b45b:
  lVar3 = 0;
LAB_14012b45d:
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 14012b5ea FUN_14012b5ea body=401 status=ok
// SIG undefined FUN_14012b5ea(void)

longlong * FUN_14012b5ea(longlong param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((longlong)*(int *)(param_1 + 0x388) != 0) {
    plVar3 = *(longlong **)(param_1 + 0x380);
    lVar4 = (longlong)*(int *)(param_1 + 0x388) << 4;
    do {
      lVar5 = *plVar3;
      if ((*(int *)(lVar5 + 0x3c) == 0) || (uVar2 = *(uint *)(lVar5 + 0x38), (int)uVar2 < 0)) {
LAB_14012b76b:
        lVar6 = 0;
      }
      else {
        lVar6 = 0;
        if ((int)uVar2 < DAT_14c9647dc) {
          plVar7 = (longlong *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
          if (((plVar7 == (longlong *)0x0) || ((int)plVar7[2] != *(int *)(lVar5 + 0x3c))) ||
             ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)) goto LAB_14012b76b;
          lVar6 = *plVar7;
        }
      }
      if (lVar6 == param_3) {
        if (plVar3 != (longlong *)0x0) {
          *param_2 = lVar5;
          lVar4 = plVar3[1];
          param_2[1] = lVar4;
          if (lVar4 != 0) {
            LOCK();
            *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
            UNLOCK();
            lVar5 = *param_2;
          }
          if (lVar5 != 0) goto LAB_14012b747;
          plVar3 = (longlong *)param_2[1];
          goto LAB_14012b6a7;
        }
        break;
      }
      plVar3 = plVar3 + 2;
      lVar4 = lVar4 + -0x10;
    } while (lVar4 != 0);
  }
  param_2[1] = 0;
  plVar3 = (longlong *)0x0;
LAB_14012b6a7:
  FUN_14012bb88(param_1,&local_38);
  plVar7 = local_30;
  *param_2 = local_38;
  local_38 = 0;
  if (local_30 != plVar3) {
    local_30 = (longlong *)0x0;
    param_2[1] = (longlong)plVar7;
    if (plVar3 == (longlong *)0x0) goto LAB_14012b747;
    LOCK();
    plVar7 = plVar3 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  plVar3 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_30 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
LAB_14012b747:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14012b77c FUN_14012b77c body=138 status=ok
// SIG undefined FUN_14012b77c(void)

void FUN_14012b77c(uint *param_1,int param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  if (param_2 != 0) {
    puVar2 = (undefined8 *)FUN_140595974(*param_1 * param_2,0);
    uVar1 = param_1[8];
    param_1[8] = uVar1 + 1;
    if (param_1[9] < uVar1 + 1) {
      FUN_1456bd870(param_1 + 6,uVar1);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 6) + (longlong)(int)uVar1 * 8) = puVar2;
    puVar5 = puVar2;
    if (param_2 - 1U != 0) {
      uVar1 = *param_1;
      uVar3 = (ulonglong)(param_2 - 1U);
      puVar6 = puVar2;
      uVar4 = uVar1;
      do {
        puVar5 = (undefined8 *)((ulonglong)uVar4 + (longlong)puVar2);
        *puVar6 = puVar5;
        uVar4 = uVar4 + uVar1;
        uVar3 = uVar3 - 1;
        puVar6 = puVar5;
      } while (uVar3 != 0);
    }
    *puVar5 = *(undefined8 *)(param_1 + 2);
    *(undefined8 **)(param_1 + 2) = puVar2;
    param_1[4] = param_1[4] + param_2;
  }
  return;
}



// FUNCTION 14012b806 FUN_14012b806 body=287 status=ok
// SIG undefined FUN_14012b806(void)

void FUN_14012b806(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  lVar8 = (longlong)(int)param_1[1];
  if (lVar8 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
  }
  else {
    uVar7 = lVar8 + 1;
    lVar8 = lVar8 * 0x10 + -8;
    bVar5 = 0;
    do {
      if (((*(int *)(*param_1 + lVar8) == 0) ||
          (plVar2 = *(longlong **)(*param_1 + -8 + lVar8), plVar2 == (longlong *)0x0)) ||
         (cVar3 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4), cVar3 == '\0')) {
        bVar5 = 1;
      }
      uVar7 = uVar7 - 1;
      lVar8 = lVar8 + -0x10;
    } while (1 < uVar7);
    iVar1 = *(int *)((longlong)param_1 + 0x14);
    *(int *)((longlong)param_1 + 0x14) = iVar1 + -1;
    if ((bool)(bVar5 & iVar1 < 2)) {
      iVar1 = (int)param_1[1];
      iVar4 = iVar1;
      if (0 < iVar1) {
        iVar6 = 0;
        do {
          if (((*(int *)(*param_1 + 8 + (longlong)iVar6 * 0x10) == 0) ||
              (plVar2 = *(longlong **)(*param_1 + (longlong)iVar6 * 0x10), plVar2 == (longlong *)0x0
              )) || (cVar3 = (**(code **)(*plVar2 + 0x28))(), cVar3 != '\0')) {
            FUN_14005b288(param_1,iVar6);
            FUN_14005b248(param_1);
          }
          else {
            iVar6 = iVar6 + 1;
          }
          iVar4 = (int)param_1[1];
        } while (iVar6 < iVar4);
      }
      iVar6 = 2;
      if (2 < iVar4 * 2) {
        iVar6 = iVar4 * 2;
      }
      *(int *)(param_1 + 2) = iVar6;
      if ((iVar6 < iVar1) && (*(int *)((longlong)param_1 + 0xc) != iVar4)) {
        FUN_14045812c(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14012b926 FUN_14012b926 body=110 status=ok
// SIG undefined FUN_14012b926(void)

void FUN_14012b926(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  
  if (((((*(int *)(param_1 + 0x4c) != 0) && (uVar1 = *(uint *)(param_1 + 0x48), -1 < (int)uVar1)) &&
       ((int)uVar1 < DAT_14c9647dc)) &&
      ((lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar2 != 0 &&
       (*(int *)(lVar2 + 0x10) == *(int *)(param_1 + 0x4c))))) &&
     (((*(uint *)(lVar2 + 8) & 0x10200000) == 0 &&
      ((*(longlong *)(param_1 + 0x60) != 0 && (0 < *(int *)(param_1 + 0x20))))))) {
    return;
  }
  if (*(longlong *)(param_1 + 0x1b0) == 0) {
    return;
  }
  FUN_14012c456(param_1 + 8,*(longlong *)(param_1 + 0x1b0),param_1 + 400);
  return;
}



// FUNCTION 14012b994 FUN_14012b994 body=232 status=ok
// SIG undefined FUN_14012b994(void)

void FUN_14012b994(longlong param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x160) == '\x01') {
    *(undefined1 *)(param_1 + 0x160) = 0;
  }
  FUN_14012bae6(param_1 + 0x60,*(undefined8 *)(param_1 + 0x140));
  if (*(longlong *)(param_1 + 0x140) == 0) {
    local_38 = 0;
  }
  else {
    puVar1 = *(undefined4 **)(*(longlong *)(param_1 + 0x140) + 8);
    puVar3 = &DAT_14c9485f0;
    if (puVar1 != (undefined4 *)0x0) {
      puVar3 = puVar1;
    }
    if (DAT_14c947fe0 == 0) {
      lVar2 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar2);
      DAT_14c947fe0 = lVar2;
    }
    FUN_140045924(DAT_14c947fe0,&local_38,puVar3,1);
  }
  local_30 = 0xc;
  local_28 = 0;
  FUN_14012ba7d(param_1 + 0x98);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14012ba7d FUN_14012ba7d body=103 status=ok
// SIG undefined FUN_14012ba7d(void)

void FUN_14012ba7d(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  int local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  local_18 = 0xc;
  local_10 = 0;
  if ((*param_2 != 0) || ((int)param_2[1] != 0xc)) {
    local_20 = *param_2;
    local_18 = (int)param_2[1];
  }
  FUN_1447cd2ec(param_1,&local_20);
  if ((local_8 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14012bae6 FUN_14012bae6 body=162 status=ok
// SIG undefined FUN_14012bae6(void)

void FUN_14012bae6(longlong *param_1,undefined8 param_2)

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
        goto LAB_14012bb73;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14012bb73:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14012bb88 FUN_14012bb88 body=317 status=ok
// SIG undefined FUN_14012bb88(void)

undefined8 * FUN_14012bb88(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if ((((param_3 == 0) || (lVar4 = FUN_14012b3c6(param_1 + 0x2d0), lVar4 == 0)) ||
      (*(int *)(param_3 + 0x38) < *(int *)(lVar4 + 0x38))) ||
     (*(longlong *)(*(longlong *)(param_3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
      lVar4 + 0x30)) {
    *param_2 = 0;
    param_2[1] = 0;
    return param_2;
  }
  plVar5 = (longlong *)FUN_14001cc68(0x50,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14a1ca340;
  FUN_14012c1dc(plVar5 + 2,param_3);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  iVar3 = *(int *)(param_1 + 0x388);
  *(uint *)(param_1 + 0x388) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x38c) < iVar3 + 1U) {
    FUN_14012c348((longlong *)(param_1 + 0x380),iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x380);
  *(longlong **)(lVar4 + (longlong)iVar3 * 0x10) = plVar5 + 2;
  *(longlong **)(lVar4 + 8 + (longlong)iVar3 * 0x10) = plVar5;
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
  lVar4 = *(longlong *)(param_1 + 0x380);
  lVar6 = (longlong)(*(int *)(param_1 + 0x388) + -1) * 0x10;
  *param_2 = *(undefined8 *)(lVar4 + lVar6);
  lVar4 = *(longlong *)(lVar4 + 8 + lVar6);
  param_2[1] = lVar4;
  if (lVar4 == 0) {
    return param_2;
  }
  LOCK();
  *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
  UNLOCK();
  return param_2;
}



// FUNCTION 14012bcc6 FUN_14012bcc6 body=633 status=ok
// SIG undefined FUN_14012bcc6(void)

void FUN_14012bcc6(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  uint *puVar7;
  undefined8 uVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  
  iVar2 = *(int *)(param_1 + 0xc0);
  if (iVar2 == 0) {
    uVar17 = 1;
    uVar16 = 0;
    iVar13 = 0;
    iVar6 = 0;
  }
  else {
    puVar7 = *(uint **)(param_1 + 0xb8);
    if (*(uint **)(param_1 + 0xb8) == (uint *)0x0) {
      puVar7 = (uint *)(param_1 + 0xa8);
    }
    uVar18 = *puVar7;
    if (uVar18 == 0) {
      iVar6 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar6 = iVar2 + -1;
      }
      uVar16 = 0;
      uVar17 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar17 = uVar16;
      }
      iVar13 = 0;
      do {
        if (uVar17 == uVar16) {
          return;
        }
        iVar13 = iVar13 + 0x20;
        uVar18 = puVar7[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (uVar18 == 0);
    }
    else {
      uVar16 = 0;
      iVar13 = 0;
    }
    uVar17 = (ulonglong)(-uVar18 & uVar18);
    uVar1 = uVar17 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar6 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 != iVar2) {
    uVar18 = 0xffffffff;
    do {
      lVar14 = *(longlong *)(param_1 + 0x98) + (longlong)iVar6 * 0x28;
      lVar15 = *(longlong *)(lVar14 + 0x10);
      if (lVar15 == 0) {
        uVar8 = FUN_145cd6c5a();
        lVar15 = FUN_14477b664(uVar8);
        *(longlong *)(lVar14 + 0x10) = lVar15;
      }
      plVar9 = *(longlong **)(lVar14 + 0x18);
      if (plVar9 == (longlong *)0x0) {
        if ((lVar15 != 0) && (*(longlong *)(lVar14 + 8) != 0)) {
          plVar9 = *(longlong **)(lVar15 + 0xb8);
          if ((plVar9 == (longlong *)0x0) ||
             (cVar4 = (**(code **)(*plVar9 + 0x108))(plVar9), cVar4 == '\0')) {
            *(undefined8 *)(lVar14 + 0x18) = 0;
          }
          else {
            uVar8 = (**(code **)(*plVar9 + 0x110))(plVar9);
            plVar9 = (longlong *)FUN_144aff482(uVar8,(longlong *)(lVar14 + 8));
            *(longlong **)(lVar14 + 0x18) = plVar9;
            if (plVar9 != (longlong *)0x0) goto LAB_14012bdb8;
          }
        }
      }
      else {
LAB_14012bdb8:
        if ((char)plVar9[3] == '\0') {
          uVar5 = (**(code **)(*plVar9 + 0x70))(plVar9);
          *(undefined1 *)(plVar9 + 3) = uVar5;
        }
      }
      uVar18 = uVar18 & ~(uint)uVar17;
      puVar7 = *(uint **)(param_1 + 0xb8);
      if (*(uint **)(param_1 + 0xb8) == (uint *)0x0) {
        puVar7 = (uint *)(param_1 + 0xa8);
      }
      iVar3 = *(int *)(param_1 + 0xc0);
      iVar6 = (int)uVar16;
      lVar14 = (longlong)iVar6;
      uVar12 = puVar7[lVar14] & uVar18;
      if (uVar12 == 0) {
        iVar10 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar10 = iVar3 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar13 = iVar13 + 0x20;
        iVar11 = iVar10;
        if (iVar10 < iVar6) {
          iVar11 = iVar6;
        }
        if (iVar6 < iVar10) {
          lVar15 = 0;
          do {
            uVar12 = puVar7[lVar14 + lVar15 + 1];
            if (uVar12 != 0) {
              uVar16 = (ulonglong)(iVar6 + (int)lVar15 + 1);
              uVar18 = 0xffffffff;
              goto LAB_14012be47;
            }
            iVar13 = iVar13 + 0x20;
            lVar15 = lVar15 + 1;
          } while (iVar11 - lVar14 != lVar15);
          uVar18 = 0xffffffff;
          iVar6 = iVar11;
        }
        uVar16 = (ulonglong)(iVar6 + 1);
        iVar6 = iVar3;
      }
      else {
LAB_14012be47:
        uVar17 = (ulonglong)(-uVar12 & uVar12);
        uVar1 = uVar17 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar6 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar6) {
          iVar6 = iVar3;
        }
      }
    } while (iVar6 != iVar2);
  }
  return;
}



// FUNCTION 14012bf40 FUN_14012bf40 body=667 status=ok
// SIG undefined FUN_14012bf40(void)

void FUN_14012bf40(longlong *param_1)

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
  longlong lVar12;
  int iVar13;
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
    if ((int)uVar7 < 1) goto LAB_14012bfb3;
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
LAB_14012bfb3:
  iVar14 = (int)param_1[5];
  if (iVar14 == 0) {
    uVar3 = 0;
    uVar11 = 1;
    iVar13 = 0;
    iVar4 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 2);
    }
    uVar7 = *puVar10;
    if (uVar7 == 0) {
      iVar13 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar13 = iVar14 + -1;
      }
      uVar3 = 0;
      uVar11 = (ulonglong)(uint)(iVar13 >> 5);
      if (iVar13 >> 5 < 1) {
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
    iVar13 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar14 <= iVar13) {
      iVar13 = iVar14;
    }
  }
  if (iVar13 < iVar14) {
    uVar7 = 0xffffffff;
    do {
      lVar6 = *param_1;
      lVar12 = (longlong)iVar13;
      uVar15 = *(ulonglong *)(lVar6 + lVar12 * 0x28);
      uVar2 = ((uint)(uVar15 >> 0x14) & 0xffff ^ (uint)(uVar15 >> 4)) * -0x7a143595;
      uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
      uVar15 = (longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U;
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0x24 + lVar12 * 0x28) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 0x20 + lVar12 * 0x28) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar15) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar14 & (longlong)(int)param_1[9] - 1U) * 4) = iVar13;
      uVar7 = ~(uint)uVar11 & uVar7;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 2);
      }
      iVar14 = (int)param_1[5];
      iVar13 = (int)uVar3;
      lVar6 = (longlong)iVar13;
      uVar2 = puVar10[lVar6] & uVar7;
      if (uVar2 == 0) {
        iVar8 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar8 = iVar14 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar13) {
          iVar9 = iVar13;
        }
        if (iVar8 <= iVar13) {
          return;
        }
        lVar12 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar2 = puVar10[lVar6 + lVar12 + 1];
          if (uVar2 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar9 - lVar6 == lVar12) {
            return;
          }
        }
        uVar3 = (ulonglong)(iVar13 + (int)lVar12 + 1);
        uVar7 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar2 & uVar2);
      uVar15 = uVar11 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar13 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    } while (iVar13 < iVar14);
  }
  return;
}



// FUNCTION 14012c1dc FUN_14012c1dc body=362 status=ok
// SIG undefined FUN_14012c1dc(void)

uint * FUN_14012c1dc(uint *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  undefined2 *puVar5;
  longlong lVar6;
  uint uVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = *(longlong **)(param_2 + 0xb8);
  cVar3 = (**(code **)(*plVar1 + 0x150))(plVar1);
  uVar4 = DAT_14c75f7d0;
  if (cVar3 != '\0') {
    uVar4 = (**(code **)(*plVar1 + 0x158))(plVar1);
  }
  param_1[1] = uVar4;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *param_1 = -*(int *)(param_2 + 0x5c) & (*(int *)(param_2 + 0x58) + *(int *)(param_2 + 0x5c)) - 1U;
  local_38 = (undefined2 *)0x0;
  uStack_30 = 0;
  FUN_1401031ac(param_2,0,&local_38);
  puVar5 = local_38;
  if ((int)uStack_30 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  FUN_1446f470e(param_1 + 10,puVar5,1);
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0x18);
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(uint *)(param_2 + 0xc);
    param_1[0xe] = uVar4;
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    uVar4 = *(uint *)(lVar6 + 0x10);
    if (*(uint *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      uVar7 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar7);
      }
      LOCK();
      uVar4 = *(uint *)(lVar6 + 0x10);
      bVar8 = uVar4 == 0;
      if (bVar8) {
        *(uint *)(lVar6 + 0x10) = uVar7;
        uVar4 = 0;
      }
      UNLOCK();
      if (bVar8) {
        uVar4 = uVar7;
      }
    }
  }
  param_1[0xf] = uVar4;
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14012c348 FUN_14012c348 body=269 status=ok
// SIG undefined FUN_14012c348(void)

void FUN_14012c348(longlong param_1,int param_2)

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



// FUNCTION 14012c456 FUN_14012c456 body=508 status=ok
// SIG undefined FUN_14012c456(void)

void FUN_14012c456(longlong *param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong *plVar10;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  longlong local_80;
  longlong local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined4 local_5c;
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 != 0) {
    local_58 = 0;
    uStack_50 = 0;
    if ((longlong)(int)param_3[1] == 0) {
      uVar7 = 0;
    }
    else {
      plVar8 = (longlong *)*param_3;
      plVar10 = plVar8 + (longlong)(int)param_3[1] * 2;
      local_80 = param_2 + 0x118;
      do {
        lVar2 = *plVar8;
        uVar9 = 0xffffffff;
        if ((lVar2 != 0) && (*(int *)(param_2 + 0xe8) != *(int *)(param_2 + 0x114))) {
          uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
          uVar5 = (uint)lVar2 & 0xffff;
          lVar4 = *(longlong *)(param_2 + 0x120);
          if (*(longlong *)(param_2 + 0x120) == 0) {
            lVar4 = local_80;
          }
          iVar6 = *(int *)(lVar4 + (ulonglong)
                                   (*(int *)(param_2 + 0x128) - 1U &
                                   (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar5) +
                                   (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar5 >> 4)) * 4);
          if (iVar6 != -1) {
            do {
              plVar1 = (longlong *)(*(longlong *)(param_2 + 0xe0) + (longlong)iVar6 * 0x14);
              if (*plVar1 == lVar2) {
                if ((plVar1 != (longlong *)0x0) && ((uint *)(plVar1 + 1) != (uint *)0x0)) {
                  uVar9 = *(uint *)(plVar1 + 1);
                }
                break;
              }
              iVar6 = *(int *)((longlong)plVar1 + 0xc);
            } while (iVar6 != -1);
          }
        }
        iVar6 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar6 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar6 + 1U) {
          FUN_1446f48e2(param_1,iVar6);
        }
        *(uint *)(*param_1 + (longlong)iVar6 * 4) = uVar9;
        for (; uVar9 != 0xffffffff;
            uVar9 = *(uint *)(*(longlong *)(param_2 + 0x70) + 8 + (ulonglong)uVar9 * 0xc)) {
          local_68 = CONCAT62(local_68._2_6_,(short)uVar9);
          FUN_144838706(&local_58,&local_68);
          if (((int)uVar9 < 0) || (*(int *)(param_2 + 0x78) <= (int)uVar9)) break;
        }
        plVar8 = plVar8 + 2;
      } while (plVar8 != plVar10);
      uVar7 = uStack_50 & 0xffffffff;
    }
    FUN_144a2d711(local_58,uVar7);
    local_68 = 0;
    local_60 = 1;
    local_5c = 0;
    local_78 = local_58;
    local_70 = (undefined4)uStack_50;
    local_88 = 0;
    FUN_1406cb364(param_1 + 2,&local_78,&local_68,param_2);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14012c654 FUN_14012c654 body=2698 status=ok
// SIG undefined FUN_14012c654(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14012c654(longlong *param_1,char param_2)

{
  byte *pbVar1;
  double dVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auVar5 [32];
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  undefined4 uVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  longlong *plVar18;
  double dVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_1f8 [32];
  undefined8 local_1d8;
  ulonglong *local_1d0;
  undefined8 *local_1c8;
  undefined4 *local_1c0;
  wchar_t *local_1b8;
  code *local_1b0;
  undefined1 *local_1a8;
  code **local_1a0;
  code *local_198;
  code *local_190;
  double local_180;
  double local_178;
  double local_170;
  code *local_168;
  longlong lStack_160;
  longlong local_158;
  longlong lStack_150;
  undefined4 local_148;
  float local_144;
  float local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  double local_128;
  undefined8 uStack_120;
  ulonglong local_118;
  longlong lStack_110;
  undefined1 local_108;
  undefined2 uStack_107;
  undefined1 uStack_105;
  undefined2 uStack_104;
  undefined1 uStack_102;
  undefined1 uStack_101;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined1 local_f8;
  undefined4 local_f4;
  undefined2 local_f0;
  longlong local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  longlong local_a8;
  undefined8 local_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  cVar13 = (**(code **)(*param_1 + 0x600))();
  if (cVar13 == '\0') goto LAB_14012cf79;
  if (param_2 == '\0') {
    cVar13 = (**(code **)(*param_1 + 0x7f8))(param_1);
    if (cVar13 == '\0') goto LAB_14012cf79;
    lVar17 = *(longlong *)(param_1[0x3e] + 0x438);
    fVar24 = *(float *)(lVar17 + 0x640);
    fVar25 = *(float *)(param_1 + 100);
    if ((fVar24 == fVar25) && (!NAN(fVar24) && !NAN(fVar25))) {
      pbVar1 = (byte *)(param_1[0x3e] + 0x550);
      *pbVar1 = *pbVar1 | 2;
      goto LAB_14012c863;
    }
  }
  else {
    plVar18 = (longlong *)param_1[0x3e];
    lVar17 = plVar18[0x87];
    fVar24 = *(float *)(lVar17 + 0x640);
    fVar25 = *(float *)(param_1 + 100);
    if ((fVar24 == fVar25) && (!NAN(fVar24) && !NAN(fVar25))) {
LAB_14012c863:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_90 ^ (ulonglong)auStack_1f8);
    }
    if ((char)plVar18[0x2f] == '\x01') {
      plVar3 = (longlong *)plVar18[2];
      if (plVar3[0x22] == 0) {
        (**(code **)(*plVar3 + 1000))(plVar3);
        plVar18 = (longlong *)param_1[0x3e];
      }
      (**(code **)(*plVar18 + 0x680))(plVar18);
      (**(code **)(*(longlong *)param_1[0x3e] + 0x678))();
      FUN_140d491fc(*(undefined8 *)(param_1[0x3e] + 0x438));
      *(byte *)((longlong)param_1 + 0x349) = *(byte *)((longlong)param_1 + 0x349) | 0x20;
      lVar17 = *(longlong *)(param_1[0x3e] + 0x438);
      fVar24 = *(float *)(lVar17 + 0x640);
      fVar25 = *(float *)(param_1 + 100);
    }
  }
  plVar18 = param_1 + 0x3e;
  auVar22 = *(undefined1 (*) [16])(lVar17 + 0x280) & _DAT_149931180;
  auVar21 = _DAT_149931180 & *(undefined1 (*) [16])(lVar17 + 0x290);
  auVar5._16_16_ = auVar21;
  auVar5._0_16_ = auVar22;
  auVar21._8_8_ = auVar22._0_8_;
  auVar22 = minpd(auVar22,auVar5._8_16_);
  auVar21 = minpd(auVar22,auVar21);
  fVar23 = 0.0;
  if (0.0 <= *(float *)(lVar17 + 0x644)) {
    fVar23 = *(float *)(lVar17 + 0x644);
  }
  if (fVar23 <= fVar25) {
    fVar23 = fVar25;
  }
  FUN_140d491fc();
  fVar25 = (fVar24 - fVar23) * (float)auVar21._0_8_;
  if (param_2 == '\0') {
    if (fVar24 < fVar23) {
      lVar17 = *plVar18;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cad0dc0) && (FUN_144b3d300(), DAT_14cad0dc0 == -1)) {
        local_138 = "CrouchTrace";
        uStack_130 = (double)CONCAT35(uStack_130._5_3_,0xb);
        uVar16 = FUN_14001a6c0(&local_138,1);
        DAT_14cad0db8 = (ulonglong)uVar16;
        _Init_thread_footer();
      }
      local_f4 = 0;
      lStack_110 = 0;
      local_f0 = 0x101;
      local_c8 = 0;
      local_c0 = 0x800000000;
      local_a8 = 0;
      local_a0 = 0x400000000;
      local_108 = 0;
      uStack_fc = 0;
      local_118 = DAT_14cad0db8;
      uStack_107 = 1;
      uStack_105 = 0;
      local_f8 = 0;
      uStack_104 = 0;
      uStack_102 = 0;
      if (lVar17 != 0) {
        local_b8 = *(undefined4 *)(lVar17 + 0xc);
        local_a0 = 0x400000001;
        lStack_110 = *(longlong *)(lVar17 + 0x18);
      }
      uStack_101 = 1;
      uStack_100 = CONCAT31(uStack_100._1_3_,1);
      local_128 = _DAT_14cad0ee0;
      uStack_120 = uRam000000014cad0ee8;
      local_138 = (char *)_DAT_14cad0ed0;
      uStack_130 = _DAT_14cad0ed8;
      lVar17 = 0;
      do {
        cVar13 = *(char *)((longlong)&uStack_130 + lVar17);
        cVar6 = *(char *)((longlong)&uStack_130 + lVar17 + 1);
        cVar7 = *(char *)((longlong)&uStack_130 + lVar17 + 2);
        cVar8 = *(char *)((longlong)&uStack_130 + lVar17 + 3);
        cVar9 = *(char *)((longlong)&uStack_130 + lVar17 + 4);
        cVar10 = *(char *)((longlong)&uStack_130 + lVar17 + 5);
        cVar11 = *(char *)((longlong)&uStack_130 + lVar17 + 6);
        cVar12 = *(char *)((longlong)&uStack_130 + lVar17 + 7);
        if ((*(char *)((longlong)&local_138 + lVar17) == DAT_149c360b0) != true) {
          *(undefined1 *)((longlong)&local_138 + lVar17) = 2;
        }
        if ((*(char *)((longlong)&local_138 + lVar17 + 1) == DAT_149c360b0._1_1_) != true) {
          *(undefined1 *)((longlong)&local_138 + lVar17 + 1) = 2;
        }
        if ((*(char *)((longlong)&local_138 + lVar17 + 2) == DAT_149c360b0._2_1_) != true) {
          *(undefined1 *)((longlong)&local_138 + lVar17 + 2) = 2;
        }
        if ((*(char *)((longlong)&local_138 + lVar17 + 3) == DAT_149c360b0._3_1_) != true) {
          *(undefined1 *)((longlong)&local_138 + lVar17 + 3) = 2;
        }
        if ((*(char *)((longlong)&local_138 + lVar17 + 4) == DAT_149c360b0._4_1_) != true) {
          *(undefined1 *)((longlong)&local_138 + lVar17 + 4) = 2;
        }
        if ((*(char *)((longlong)&local_138 + lVar17 + 5) == DAT_149c360b0._5_1_) != true) {
          *(undefined1 *)((longlong)&local_138 + lVar17 + 5) = 2;
        }
        if ((*(char *)((longlong)&local_138 + lVar17 + 6) == DAT_149c360b0._6_1_) != true) {
          *(undefined1 *)((longlong)&local_138 + lVar17 + 6) = 2;
        }
        if ((*(char *)((longlong)&local_138 + lVar17 + 7) == DAT_149c360b0._7_1_) != true) {
          *(undefined1 *)((longlong)&local_138 + lVar17 + 7) = 2;
        }
        if ((cVar13 == DAT_149c360b0._8_1_) != true) {
          *(undefined1 *)((longlong)&uStack_130 + lVar17) = 2;
        }
        if ((cVar6 == DAT_149c360b0._9_1_) != true) {
          *(undefined1 *)((longlong)&uStack_130 + lVar17 + 1) = 2;
        }
        if ((cVar7 == DAT_149c360b0._10_1_) != true) {
          *(undefined1 *)((longlong)&uStack_130 + lVar17 + 2) = 2;
        }
        if ((cVar8 == DAT_149c360b0._11_1_) != true) {
          *(undefined1 *)((longlong)&uStack_130 + lVar17 + 3) = 2;
        }
        if ((cVar9 == DAT_149c360b0._12_1_) != true) {
          *(undefined1 *)((longlong)&uStack_130 + lVar17 + 4) = 2;
        }
        if ((cVar10 == DAT_149c360b0._13_1_) != true) {
          *(undefined1 *)((longlong)&uStack_130 + lVar17 + 5) = 2;
        }
        if ((cVar11 == DAT_149c360b0._14_1_) != true) {
          *(undefined1 *)((longlong)&uStack_130 + lVar17 + 6) = 2;
        }
        if ((cVar12 == DAT_149c360b0._15_1_) != true) {
          *(undefined1 *)((longlong)&uStack_130 + lVar17 + 7) = 2;
        }
        lVar17 = lVar17 + 0x10;
      } while (lVar17 != 0x20);
      (**(code **)(*param_1 + 0x4d8))(param_1,&local_118,&local_138);
      lVar17 = param_1[0x16];
      if ((lVar17 == 0) &&
         (((param_1[0x15] == 0 || ((*(uint *)(param_1[0x15] + 8) & 0x10) != 0)) ||
          (lVar17 = FUN_1447210f0(), lVar17 == 0)))) {
        lVar17 = param_1[4];
        if (lVar17 != 0) {
          if (DAT_14cb10130 == 0) {
            local_1a0 = &local_168;
            local_168 = FUN_140754f84;
            local_190 = FUN_14081d0ea;
            local_198 = FUN_14081d0ea;
            local_1a8 = &LAB_147da9a76;
            local_1b0 = FUN_1409f3105;
            local_1b8 = L"Engine";
            local_1c0 = (undefined4 *)0x0;
            local_1c8 = (undefined8 *)CONCAT44(local_1c8._4_4_,0x10000000);
            local_1d0 = (ulonglong *)CONCAT44(local_1d0._4_4_,8);
            local_1d8 = CONCAT44(local_1d8._4_4_,0x990);
            FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
          }
          if ((*(int *)(DAT_14cb10130 + 0x38) <= *(int *)(*(longlong *)(lVar17 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar17 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) == DAT_14cb10130 + 0x30))
          goto LAB_14012cc00;
        }
        lVar17 = 0;
      }
LAB_14012cc00:
      lVar4 = *(longlong *)(param_1[0x3e] + 0x438);
      dVar19 = *(double *)(lVar4 + 0x280);
      if (*(double *)(lVar4 + 0x288) <= *(double *)(lVar4 + 0x280)) {
        dVar19 = *(double *)(lVar4 + 0x288);
      }
      local_144 = (float)dVar19 * *(float *)(lVar4 + 0x644);
      local_140 = (float)*(double *)(lVar4 + 0x290) * *(float *)(lVar4 + 0x640);
      local_148 = 3;
      uVar14 = (**(code **)(*(longlong *)param_1[0x22] + 0x580))();
      local_168 = (code *)param_1[0x4a];
      lStack_160 = param_1[0x4b];
      local_158 = param_1[0x4c];
      lStack_150 = param_1[0x4d];
      lVar4 = param_1[0x22];
      dVar19 = (double)fVar25;
      local_170 = (double)param_1[0x48] * dVar19 + *(double *)(lVar4 + 0x270);
      local_178 = (double)param_1[0x47] * dVar19 + *(double *)(lVar4 + 0x268);
      local_180 = dVar19 * (double)param_1[0x46] + *(double *)(lVar4 + 0x260);
      local_1c0 = &DAT_14cad0f08;
      local_1d8 = CONCAT44(local_1d8._4_4_,uVar14);
      local_1d0 = &local_118;
      local_1c8 = &local_138;
      cVar13 = FUN_140ad65d6(lVar17,&local_148);
      if (cVar13 != '\0') {
        FUN_140d491fc(*(undefined8 *)(*plVar18 + 0x438));
        if (local_a8 != 0) {
          FUN_1400020a8();
        }
        if (local_c8 != 0) {
          FUN_1400020a8();
        }
        goto LAB_14012cf79;
      }
      if (local_a8 != 0) {
        FUN_1400020a8();
      }
      if (local_c8 != 0) {
        FUN_1400020a8();
      }
    }
    if ((*(byte *)((longlong)param_1 + 0x5b5) & 0x40) != 0) {
      plVar3 = (longlong *)param_1[0x22];
      local_118 = plVar3[0x48];
      lStack_110 = plVar3[0x49];
      lVar17 = plVar3[0x4a];
      local_108 = (undefined1)lVar17;
      uStack_107 = (undefined2)((ulonglong)lVar17 >> 8);
      uStack_105 = (undefined1)((ulonglong)lVar17 >> 0x18);
      uStack_104 = (undefined2)((ulonglong)lVar17 >> 0x20);
      uStack_102 = (undefined1)((ulonglong)lVar17 >> 0x30);
      uStack_101 = (undefined1)((ulonglong)lVar17 >> 0x38);
      uStack_100 = (undefined4)plVar3[0x4b];
      uStack_fc = (undefined4)((ulonglong)plVar3[0x4b] >> 0x20);
      dVar19 = (double)fVar25;
      local_128 = (double)param_1[0x48] * dVar19;
      uStack_130 = (double)param_1[0x47] * dVar19;
      local_138 = (char *)(dVar19 * (double)param_1[0x46]);
      local_1c8 = (undefined8 *)CONCAT71(local_1c8._1_7_,1);
      local_1d0 = (ulonglong *)((ulonglong)local_1d0 & 0xffffffff00000000);
      local_1d8 = 0;
      (**(code **)(*plVar3 + 0x510))(plVar3,&local_138,&local_118,1);
    }
    *(byte *)(*plVar18 + 0x550) = *(byte *)(*plVar18 + 0x550) | 2;
  }
  *(byte *)((longlong)param_1 + 0x349) = *(byte *)((longlong)param_1 + 0x349) | 0x10;
  (**(code **)(*(longlong *)param_1[0x3e] + 0x678))();
  (**(code **)(*param_1 + 0x950))(param_1);
  (**(code **)(*(longlong *)param_1[0x3e] + 0x880))();
  if (((param_2 != '\0') && (*(char *)(*plVar18 + 0x178) == '\x01')) ||
     ((param_1[0x15] != 0 &&
      ((iVar15 = FUN_14487fd02(), iVar15 == 2 && (*(char *)(*plVar18 + 0x68) == '\x02')))))) {
    lVar17 = param_1[0x102];
    if (lVar17 == 0) {
      lVar17 = (**(code **)(param_1[0x3d] + 0x28))(param_1 + 0x3d);
      param_1[0x102] = lVar17;
      if (lVar17 == 0) goto LAB_14012cf79;
    }
    dVar20 = (double)fVar25;
    dVar19 = (double)param_1[0x47];
    dVar2 = (double)param_1[0x48];
    *(double *)(lVar17 + 0x80) = (double)param_1[0x46] * dVar20 + *(double *)(lVar17 + 0x80);
    *(double *)(lVar17 + 0x88) = dVar19 * dVar20 + *(double *)(lVar17 + 0x88);
    *(double *)(lVar17 + 0x90) = dVar20 * dVar2 + *(double *)(lVar17 + 0x90);
    *(undefined8 *)(lVar17 + 0x68) = *(undefined8 *)(lVar17 + 0x80);
    *(undefined8 *)(lVar17 + 0x70) = *(undefined8 *)(lVar17 + 0x88);
    *(undefined8 *)(lVar17 + 0x78) = *(undefined8 *)(lVar17 + 0x90);
  }
LAB_14012cf79:
  if ((local_90 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14012d12b FUN_14012d12b body=124 status=ok
// SIG undefined FUN_14012d12b(void)

bool FUN_14012d12b(longlong param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caf1e74) {
    FUN_144b3d300(&DAT_14caf1e74);
    if (DAT_14caf1e74 == -1) {
      DAT_14caf1e71 = FUN_14473b0f0();
      _Init_thread_footer(&DAT_14caf1e74);
    }
  }
  if (DAT_14caf1e71 == '\x01') {
    bVar2 = iVar1 == 2 || iVar1 == 7;
  }
  else {
    bVar2 = iVar1 == 2;
  }
  return bVar2;
}



// FUNCTION 14012d1a7 FUN_14012d1a7 body=29 status=ok
// SIG undefined FUN_14012d1a7(void)

void FUN_14012d1a7(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  *(undefined8 *)(param_1 + 0x2d0) = 0x600000000;
  return;
}



// FUNCTION 14012d1c4 FUN_14012d1c4 body=278 status=ok
// SIG undefined FUN_14012d1c4(void)

void FUN_14012d1c4(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  
  if (*(longlong *)(param_1 + 0x538) == 0) {
    bVar5 = 0;
  }
  else {
    bVar5 = *(byte *)(*(longlong *)(param_1 + 0x538) + 0xa0) ^ 1;
  }
  if (*(longlong *)(param_1 + 0x540) == 0) {
    bVar6 = 0;
  }
  else {
    bVar6 = *(byte *)(*(longlong *)(param_1 + 0x540) + 0xa0) ^ 1;
  }
  if (((bVar5 | bVar6) & 1) != 0) {
    FUN_1403373b6(param_1,0);
    if (0 < *(int *)(param_1 + 0x80)) {
      iVar7 = 0;
      do {
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x78) + (longlong)iVar7 * 8);
        FUN_140336cb8(lVar3,0);
        if (*(longlong *)(lVar3 + 0x7b0) != 0) {
          FUN_14005a35e(lVar3,1);
        }
        uVar2 = *(uint *)(lVar3 + 0x18);
        if ((int)uVar2 < *(int *)(param_1 + 0x80) && -1 < (int)uVar2) {
          iVar7 = iVar7 + (uint)(*(longlong *)(*(longlong *)(param_1 + 0x78) + (ulonglong)uVar2 * 8)
                                == lVar3);
        }
      } while (iVar7 < *(int *)(param_1 + 0x80));
    }
  }
  puVar4 = *(undefined8 **)(param_1 + 0x538);
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x538) = 0;
    LOCK();
    piVar1 = (int *)(puVar4 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  puVar4 = *(undefined8 **)(param_1 + 0x540);
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x540) = 0;
    LOCK();
    piVar1 = (int *)(puVar4 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014012d2ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar4)(puVar4,1);
      return;
    }
  }
  return;
}



// FUNCTION 14012d2da FUN_14012d2da body=113 status=ok
// SIG undefined FUN_14012d2da(void)

void FUN_14012d2da(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xc,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0xc)) {
      uVar2 = uVar1 / 0xc & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xc,4);
  }
  return;
}



// FUNCTION 14012d34c FUN_14012d34c body=96 status=ok
// SIG undefined FUN_14012d34c(void)

void FUN_14012d34c(longlong param_1,int param_2)

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



// FUNCTION 14012d3ac FUN_14012d3ac body=113 status=ok
// SIG undefined FUN_14012d3ac(void)

void FUN_14012d3ac(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x18)) {
      uVar2 = uVar1 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x18,4);
  }
  return;
}



// FUNCTION 14012d41e FUN_14012d41e body=139 status=ok
// SIG undefined FUN_14012d41e(void)

void FUN_14012d41e(longlong *param_1,uint param_2)

{
  void *_Dst;
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *param_1;
  _Dst = (void *)(lVar1 + (longlong)(int)param_2 * 0x38);
  if (*(longlong *)(lVar1 + 0x28 + (longlong)(int)param_2 * 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)((longlong)_Dst + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)((longlong)_Dst + 8) != 0) {
    FUN_1400020a8();
  }
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0x38),(longlong)iVar3 * 0x38);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 14012d4aa FUN_14012d4aa body=177 status=ok
// SIG undefined FUN_14012d4aa(void)

undefined8 FUN_14012d4aa(longlong *param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  iVar2 = (int)param_1[1];
  if ((longlong)iVar2 != 0) {
    lVar1 = *param_1;
    iVar4 = 1;
    lVar6 = 0;
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar1 + lVar6) == *param_2) {
        if (iVar4 == 0) {
          return 0;
        }
        iVar4 = iVar2 - iVar4;
        if (iVar4 != 0) {
          iVar5 = 1;
          if (iVar4 < 1) {
            iVar5 = iVar4;
          }
          memmove((void *)(lVar1 + (lVar3 >> 0x20) * 8),
                  (void *)(lVar1 + (longlong)(iVar2 - iVar5) * 8),(longlong)iVar5 << 3);
          iVar2 = (int)param_1[1];
        }
        *(int *)(param_1 + 1) = iVar2 + -1;
        if (param_3 == '\x01') {
          FUN_1481d5b0a(param_1);
          return 1;
        }
        return 1;
      }
      lVar3 = lVar3 + 0x100000000;
      iVar4 = iVar4 + 1;
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar2 << 3 != lVar6);
  }
  return 0;
}



// FUNCTION 14012d55c FUN_14012d55c body=197 status=ok
// SIG undefined FUN_14012d55c(void)

undefined8 FUN_14012d55c(undefined4 *param_1,undefined8 param_2)

{
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  uint uStack_c4;
  undefined4 uStack_c0;
  uint uStack_bc;
  ulonglong local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [136];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_b8 = *(ulonglong *)(param_1 + 4) ^ 0x8000000000000000;
  local_c8 = *param_1;
  uStack_c0 = param_1[2];
  uStack_c4 = param_1[1] ^ 0x80000000;
  uStack_bc = param_1[3] ^ 0x80000000;
  local_128 = 0x3ff0000000000000;
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_100 = 0x3ff0000000000000;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0x3ff0000000000000;
  local_d0 = 0;
  local_b0 = 0x3ff0000000000000;
  FUN_1447fea8d(local_a8,&local_128,param_1 + 8);
  FUN_1447fea8d(param_2,local_a8,param_1 + 0x28);
  if ((local_20 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14012d622 FUN_14012d622 body=146 status=ok
// SIG undefined FUN_14012d622(void)

void FUN_14012d622(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 0x1710);
  uVar1 = *(uint *)(param_1 + 0x1714);
  if ((ulonglong)uVar3 < 9) {
    uVar3 = 8;
  }
  else {
    if ((int)(uVar1 - uVar3) < 0x41) {
      return;
    }
    if ((ulonglong)((longlong)(int)(uVar1 - uVar3) * 0x2e0) < 0x4000) {
      return;
    }
    if (0 < (int)uVar3) {
      uVar2 = FUN_144a3809e((ulonglong)uVar3 * 0x2e0,0);
      uVar3 = (uint)(uVar2 / 0x2e0);
      uVar1 = *(uint *)(param_1 + 0x1714);
    }
  }
  if (uVar3 == uVar1) {
    return;
  }
  *(uint *)(param_1 + 0x1714) = uVar3;
  FUN_1482085b4(param_1,*(undefined4 *)(param_1 + 0x1710));
  return;
}



// FUNCTION 14012d6b4 FUN_14012d6b4 body=456 status=ok
// SIG undefined FUN_14012d6b4(void)

void FUN_14012d6b4(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  iVar2 = *(int *)(param_1 + 0x1bc8);
  if (iVar2 == 0) {
    uVar13 = 1;
    uVar14 = 0;
    iVar9 = 0;
    iVar4 = 0;
  }
  else {
    puVar5 = *(uint **)(param_1 + 0x1bc0);
    if (*(uint **)(param_1 + 0x1bc0) == (uint *)0x0) {
      puVar5 = (uint *)(param_1 + 0x1bb0);
    }
    uVar6 = *puVar5;
    if (uVar6 == 0) {
      iVar4 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar4 = iVar2 + -1;
      }
      uVar14 = 0;
      uVar13 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar13 = uVar14;
      }
      iVar9 = 0;
      do {
        if (uVar13 == uVar14) {
          return;
        }
        iVar9 = iVar9 + 0x20;
        uVar6 = puVar5[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar6 == 0);
    }
    else {
      uVar14 = 0;
      iVar9 = 0;
    }
    uVar13 = (ulonglong)(-uVar6 & uVar6);
    uVar1 = uVar13 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar4 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar4) {
      iVar4 = iVar2;
    }
  }
  if (iVar4 != iVar2) {
    uVar6 = 0xffffffff;
    do {
      FUN_143abb374(*(longlong *)(param_1 + 0x1ba0) + (longlong)iVar4 * 0xf0 + 8,param_1,param_2,
                    param_3);
      uVar6 = ~(uint)uVar13 & uVar6;
      puVar5 = *(uint **)(param_1 + 0x1bc0);
      if (*(uint **)(param_1 + 0x1bc0) == (uint *)0x0) {
        puVar5 = (uint *)(param_1 + 0x1bb0);
      }
      iVar3 = *(int *)(param_1 + 0x1bc8);
      iVar4 = (int)uVar14;
      lVar11 = (longlong)iVar4;
      uVar10 = puVar5[lVar11] & uVar6;
      if (uVar10 == 0) {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar9 = iVar9 + 0x20;
        iVar8 = iVar7;
        if (iVar7 < iVar4) {
          iVar8 = iVar4;
        }
        if (iVar4 < iVar7) {
          lVar12 = 0;
          do {
            uVar10 = puVar5[lVar11 + lVar12 + 1];
            if (uVar10 != 0) {
              uVar14 = (ulonglong)(iVar4 + (int)lVar12 + 1);
              uVar6 = 0xffffffff;
              goto LAB_14012d827;
            }
            iVar9 = iVar9 + 0x20;
            lVar12 = lVar12 + 1;
          } while (iVar8 - lVar11 != lVar12);
          uVar6 = 0xffffffff;
          iVar4 = iVar8;
        }
        uVar14 = (ulonglong)(iVar4 + 1);
        iVar4 = iVar3;
      }
      else {
LAB_14012d827:
        uVar13 = (ulonglong)(-uVar10 & uVar10);
        uVar1 = uVar13 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar4 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar4) {
          iVar4 = iVar3;
        }
      }
    } while (iVar4 != iVar2);
  }
  return;
}



// FUNCTION 14012d87c FUN_14012d87c body=375 status=ok
// SIG undefined FUN_14012d87c(void)

ulonglong FUN_14012d87c(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  
  uVar3 = *(uint *)(param_1 + 8);
  iVar11 = *(int *)(param_1 + 0xc);
  uVar6 = iVar11 - uVar3;
  uVar7 = (ulonglong)uVar6;
  if ((0x3fff < (ulonglong)((longlong)(int)uVar6 * 0x38)) || ((int)(uVar3 * 3) < iVar11 * 2)) {
    uVar7 = CONCAT44(0,CONCAT31((int3)(uVar6 >> 8),(int)uVar6 < 0x41));
    auVar5._8_4_ = uVar3;
    auVar5._0_8_ = uVar7;
    auVar5._12_4_ = 0;
    if (uVar3 == 0 || (int)uVar6 >= 0x41) {
      if (0 < (int)uVar3) {
        uVar7 = (ulonglong)uVar3 * 0x38;
        if (DAT_14c872d28 != (longlong *)0x0) {
          if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
            uVar8 = uVar7 + 0xf;
            if (uVar3 < 0x249) {
              uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar8 >> 4]]
              ;
            }
            else {
              if ((uVar8 & 0x3ffffffff0) < 0x7ff1) {
                bVar2 = (&DAT_14c841e00)[uVar8 >> 4];
                uVar9 = 0x32;
                if (0x32 < bVar2) {
                  uVar9 = (ulonglong)bVar2;
                }
                uVar10 = 0x32 - (ulonglong)bVar2;
                do {
                  uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar10 & 0xffffffff];
                  if (((&DAT_14c841d90)[uVar10 & 0xffffffff] & 0xf) == 0) goto LAB_14012d942;
                  lVar1 = uVar9 + 1 + uVar10;
                  uVar10 = uVar10 - 1;
                } while (lVar1 != 0x33);
              }
              uVar7 = 0x10;
              if (0x10 < DAT_14c841df8) {
                uVar7 = (ulonglong)DAT_14c841df8;
              }
              uVar7 = -uVar7 & ((uVar8 & 0x3ffffffff0) + uVar7) - 1;
            }
          }
          else {
            uVar7 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar7,8);
            iVar11 = *(int *)(param_1 + 0xc);
          }
        }
LAB_14012d942:
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar7 >> 3;
        auVar5 = auVar4 * ZEXT816(0x2492492492492493);
      }
      uVar7 = auVar5._0_8_;
      if (auVar5._8_4_ != iVar11) {
        *(int *)(param_1 + 0xc) = auVar5._8_4_;
        uVar7 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),auVar5._8_8_,0x38,8);
      }
    }
  }
  return uVar7;
}



// FUNCTION 14012d9f4 FUN_14012d9f4 body=873 status=ok
// SIG undefined FUN_14012d9f4(void)

void FUN_14012d9f4(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  uint *puVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  
  puVar1 = (uint *)(param_1 + 3);
  iVar3 = *(int *)(param_1 + 6);
  if (DAT_14c76292d == '\x01') {
    if (iVar3 == 0) {
      uVar15 = 1;
      uVar16 = 0;
      iVar11 = 0;
      iVar6 = 0;
    }
    else {
      puVar7 = (uint *)param_1[5];
      if ((uint *)param_1[5] == (uint *)0x0) {
        puVar7 = puVar1;
      }
      uVar8 = *puVar7;
      if (uVar8 == 0) {
        iVar6 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar6 = iVar3 + -1;
        }
        uVar16 = 0;
        uVar15 = (ulonglong)(uint)(iVar6 >> 5);
        if (iVar6 >> 5 < 1) {
          uVar15 = uVar16;
        }
        iVar11 = 0;
        do {
          if (uVar15 == uVar16) {
            return;
          }
          iVar11 = iVar11 + 0x20;
          uVar8 = puVar7[uVar16 + 1];
          uVar16 = uVar16 + 1;
        } while (uVar8 == 0);
      }
      else {
        uVar16 = 0;
        iVar11 = 0;
      }
      uVar15 = (ulonglong)(-uVar8 & uVar8);
      uVar2 = uVar15 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar6 = (iVar11 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      if (iVar3 <= iVar6) {
        iVar6 = iVar3;
      }
    }
    if (iVar6 != iVar3) {
      uVar8 = 0xffffffff;
      do {
        plVar5 = *(longlong **)(param_1[1] + 8 + (longlong)iVar6 * 0x18);
        (**(code **)(*plVar5 + 0x2c0))(plVar5,param_2,param_3,*param_1);
        uVar8 = ~(uint)uVar15 & uVar8;
        puVar7 = (uint *)param_1[5];
        if ((uint *)param_1[5] == (uint *)0x0) {
          puVar7 = puVar1;
        }
        iVar4 = *(int *)(param_1 + 6);
        iVar6 = (int)uVar16;
        lVar13 = (longlong)iVar6;
        uVar12 = puVar7[lVar13] & uVar8;
        if (uVar12 == 0) {
          iVar9 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar9 = iVar4 + -1;
          }
          iVar9 = iVar9 >> 5;
          iVar11 = iVar11 + 0x20;
          iVar10 = iVar9;
          if (iVar9 < iVar6) {
            iVar10 = iVar6;
          }
          if (iVar6 < iVar9) {
            lVar14 = 0;
            do {
              uVar12 = puVar7[lVar13 + lVar14 + 1];
              if (uVar12 != 0) {
                uVar16 = (ulonglong)(iVar6 + (int)lVar14 + 1);
                uVar8 = 0xffffffff;
                goto LAB_14012dbec;
              }
              iVar11 = iVar11 + 0x20;
              lVar14 = lVar14 + 1;
            } while (iVar10 - lVar13 != lVar14);
            uVar8 = 0xffffffff;
            lVar13 = (longlong)iVar10;
          }
          uVar16 = lVar13 + 1U & 0xffffffff;
          iVar6 = iVar4;
        }
        else {
LAB_14012dbec:
          uVar15 = (ulonglong)(-uVar12 & uVar12);
          uVar2 = uVar15 * 2 + 1;
          lVar13 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          iVar6 = (iVar11 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
          if (iVar4 <= iVar6) {
            iVar6 = iVar4;
          }
        }
      } while (iVar6 != iVar3);
    }
    return;
  }
  if (iVar3 == 0) {
    uVar15 = 1;
    uVar16 = 0;
    iVar11 = 0;
    iVar6 = 0;
  }
  else {
    puVar7 = (uint *)param_1[5];
    if ((uint *)param_1[5] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar8 = *puVar7;
    if (uVar8 == 0) {
      iVar6 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar6 = iVar3 + -1;
      }
      uVar16 = 0;
      uVar15 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar15 = uVar16;
      }
      iVar11 = 0;
      do {
        if (uVar15 == uVar16) goto LAB_14012dc49;
        iVar11 = iVar11 + 0x20;
        uVar8 = puVar7[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (uVar8 == 0);
    }
    else {
      uVar16 = 0;
      iVar11 = 0;
    }
    uVar15 = (ulonglong)(-uVar8 & uVar8);
    uVar2 = uVar15 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar6 = (iVar11 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar6) {
      iVar6 = iVar3;
    }
  }
  if (iVar6 != iVar3) {
    uVar8 = 0xffffffff;
    do {
      (**(code **)(**(longlong **)(param_1[1] + 8 + (longlong)iVar6 * 0x18) + 0x2a8))();
      uVar8 = ~(uint)uVar15 & uVar8;
      puVar7 = (uint *)param_1[5];
      if ((uint *)param_1[5] == (uint *)0x0) {
        puVar7 = puVar1;
      }
      iVar4 = *(int *)(param_1 + 6);
      iVar6 = (int)uVar16;
      lVar13 = (longlong)iVar6;
      uVar12 = puVar7[lVar13] & uVar8;
      if (uVar12 == 0) {
        iVar9 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar9 = iVar4 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar11 = iVar11 + 0x20;
        iVar10 = iVar9;
        if (iVar9 < iVar6) {
          iVar10 = iVar6;
        }
        if (iVar6 < iVar9) {
          lVar14 = 0;
          do {
            uVar12 = puVar7[lVar13 + lVar14 + 1];
            if (uVar12 != 0) {
              uVar16 = (ulonglong)(iVar6 + (int)lVar14 + 1);
              uVar8 = 0xffffffff;
              goto LAB_14012dcfe;
            }
            iVar11 = iVar11 + 0x20;
            lVar14 = lVar14 + 1;
          } while (iVar10 - lVar13 != lVar14);
          uVar8 = 0xffffffff;
          lVar13 = (longlong)iVar10;
        }
        uVar16 = lVar13 + 1U & 0xffffffff;
        iVar6 = iVar4;
      }
      else {
LAB_14012dcfe:
        uVar15 = (ulonglong)(-uVar12 & uVar12);
        uVar2 = uVar15 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar6 = (iVar11 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
        if (iVar4 <= iVar6) {
          iVar6 = iVar4;
        }
      }
    } while (iVar6 != iVar3);
  }
LAB_14012dc49:
  FUN_14032c8ca(param_1 + 1);
  return;
}



// FUNCTION 14012dd5e FUN_14012dd5e body=1490 status=ok
// SIG undefined FUN_14012dd5e(void)

void FUN_14012dd5e(undefined8 *param_1,undefined8 *param_2)

{
  double dVar1;
  int iVar2;
  double *pdVar3;
  longlong lVar4;
  undefined8 *puVar5;
  double *pdVar6;
  undefined8 *puVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  puVar5 = param_2;
  puVar7 = param_1;
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  puVar5 = param_2 + 0x10;
  puVar7 = param_1 + 0x10;
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  puVar5 = param_2 + 0x30;
  puVar7 = param_1 + 0x30;
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  puVar5 = param_2 + 0x20;
  puVar7 = param_1 + 0x20;
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  pdVar6 = (double *)(param_1 + 0x40);
  iVar2 = *(int *)(param_1 + 0x5a);
  if (iVar2 < 6) {
    *(undefined4 *)(param_1 + 0x5a) = 6;
    if ((uint)(*(int *)((longlong)param_1 + 0x2d4) - iVar2) < 6U - iVar2) {
      FUN_1448afb60(pdVar6);
    }
  }
  else if (iVar2 != 6) {
    *(undefined4 *)(param_1 + 0x5a) = 6;
    FUN_14717cd08(pdVar6);
  }
  dVar8 = (double)param_1[0x2b] - (double)param_1[0x2a];
  dVar9 = (double)param_1[0x27] - (double)param_1[0x26];
  dVar10 = (double)param_1[0x23] - (double)param_1[0x22];
  pdVar3 = (double *)param_1[0x58];
  if ((double *)param_1[0x58] == (double *)0x0) {
    pdVar3 = pdVar6;
  }
  dVar11 = dVar8 * dVar8 + dVar10 * dVar10 + dVar9 * dVar9;
  if (dVar11 <= 9.999999439624929e-11) {
    pdVar3[2] = 0.0;
    pdVar3[3] = 0.0;
    *pdVar3 = 0.0;
    pdVar3[1] = 0.0;
  }
  else {
    dVar12 = (double)param_1[0x2f];
    dVar1 = (double)param_1[0x2e];
    dVar11 = 1.0 / SQRT(dVar11);
    *pdVar3 = -dVar10 * dVar11;
    pdVar3[1] = -dVar9 * dVar11;
    pdVar3[2] = -dVar8 * dVar11;
    pdVar3[3] = (dVar12 - dVar1) * dVar11;
  }
  dVar8 = (double)param_1[0x2a];
  dVar9 = (double)param_1[0x22];
  dVar10 = (double)param_1[0x26];
  pdVar3 = (double *)param_1[0x58];
  if ((double *)param_1[0x58] == (double *)0x0) {
    pdVar3 = pdVar6;
  }
  dVar11 = dVar8 * dVar8 + dVar9 * dVar9 + dVar10 * dVar10;
  if (9.999999439624929e-11 < dVar11) {
    dVar12 = 1.0 / SQRT(dVar11);
    dVar11 = (double)param_1[0x2e];
    pdVar3[4] = -dVar9 * dVar12;
    pdVar3[5] = -dVar10 * dVar12;
    pdVar3[6] = -dVar8 * dVar12;
    pdVar3[7] = dVar11 * dVar12;
  }
  else {
    pdVar3[6] = 0.0;
    pdVar3[7] = 0.0;
    pdVar3[4] = 0.0;
    pdVar3[5] = 0.0;
  }
  dVar8 = (double)param_1[0x2b] - (double)param_1[0x29];
  dVar9 = (double)param_1[0x27] - (double)param_1[0x25];
  dVar10 = (double)param_1[0x23] - (double)param_1[0x21];
  pdVar3 = (double *)param_1[0x58];
  if ((double *)param_1[0x58] == (double *)0x0) {
    pdVar3 = pdVar6;
  }
  dVar11 = dVar8 * dVar8 + dVar10 * dVar10 + dVar9 * dVar9;
  if (dVar11 <= 9.999999439624929e-11) {
    pdVar3[10] = 0.0;
    pdVar3[0xb] = 0.0;
    pdVar3[8] = 0.0;
    pdVar3[9] = 0.0;
  }
  else {
    dVar12 = (double)param_1[0x2f];
    dVar1 = (double)param_1[0x2d];
    dVar11 = 1.0 / SQRT(dVar11);
    pdVar3[8] = -dVar10 * dVar11;
    pdVar3[9] = -dVar9 * dVar11;
    pdVar3[10] = -dVar8 * dVar11;
    pdVar3[0xb] = (dVar12 - dVar1) * dVar11;
  }
  dVar8 = (double)param_1[0x2b] + (double)param_1[0x29];
  dVar9 = (double)param_1[0x27] + (double)param_1[0x25];
  dVar10 = (double)param_1[0x23] + (double)param_1[0x21];
  pdVar3 = (double *)param_1[0x58];
  if ((double *)param_1[0x58] == (double *)0x0) {
    pdVar3 = pdVar6;
  }
  dVar11 = dVar8 * dVar8 + dVar10 * dVar10 + dVar9 * dVar9;
  if (dVar11 <= 9.999999439624929e-11) {
    pdVar3[0xe] = 0.0;
    pdVar3[0xf] = 0.0;
    pdVar3[0xc] = 0.0;
    pdVar3[0xd] = 0.0;
  }
  else {
    dVar12 = (double)param_1[0x2f];
    dVar1 = (double)param_1[0x2d];
    dVar11 = 1.0 / SQRT(dVar11);
    pdVar3[0xc] = -dVar10 * dVar11;
    pdVar3[0xd] = -dVar9 * dVar11;
    pdVar3[0xe] = -dVar8 * dVar11;
    pdVar3[0xf] = (dVar12 + dVar1) * dVar11;
  }
  dVar8 = (double)param_1[0x2b] + (double)param_1[0x28];
  dVar9 = (double)param_1[0x27] + (double)param_1[0x24];
  dVar10 = (double)param_1[0x23] + (double)param_1[0x20];
  pdVar3 = (double *)param_1[0x58];
  if ((double *)param_1[0x58] == (double *)0x0) {
    pdVar3 = pdVar6;
  }
  dVar11 = dVar8 * dVar8 + dVar10 * dVar10 + dVar9 * dVar9;
  if (dVar11 <= 9.999999439624929e-11) {
    pdVar3[0x12] = 0.0;
    pdVar3[0x13] = 0.0;
    pdVar3[0x10] = 0.0;
    pdVar3[0x11] = 0.0;
  }
  else {
    dVar12 = (double)param_1[0x2f];
    dVar1 = (double)param_1[0x2c];
    dVar11 = 1.0 / SQRT(dVar11);
    pdVar3[0x10] = -dVar10 * dVar11;
    pdVar3[0x11] = -dVar9 * dVar11;
    pdVar3[0x12] = -dVar8 * dVar11;
    pdVar3[0x13] = (dVar12 + dVar1) * dVar11;
  }
  dVar8 = (double)param_1[0x2b] - (double)param_1[0x28];
  dVar9 = (double)param_1[0x27] - (double)param_1[0x24];
  dVar10 = (double)param_1[0x23] - (double)param_1[0x20];
  if ((double *)param_1[0x58] != (double *)0x0) {
    pdVar6 = (double *)param_1[0x58];
  }
  dVar11 = dVar8 * dVar8 + dVar10 * dVar10 + dVar9 * dVar9;
  if (dVar11 <= 9.999999439624929e-11) {
    pdVar6[0x16] = 0.0;
    pdVar6[0x17] = 0.0;
    pdVar6[0x14] = 0.0;
    pdVar6[0x15] = 0.0;
  }
  else {
    dVar12 = (double)param_1[0x2f];
    dVar1 = (double)param_1[0x2c];
    dVar11 = 1.0 / SQRT(dVar11);
    pdVar6[0x14] = -dVar10 * dVar11;
    pdVar6[0x15] = -dVar9 * dVar11;
    pdVar6[0x16] = -dVar8 * dVar11;
    pdVar6[0x17] = (dVar12 - dVar1) * dVar11;
  }
  return;
}


