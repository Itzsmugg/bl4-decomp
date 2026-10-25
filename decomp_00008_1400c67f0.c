// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1400c67f0 FUN_1400c67f0 body=176 status=ok
// SIG undefined FUN_1400c67f0(void)

void FUN_1400c67f0(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_b8 [32];
  undefined4 *local_98;
  undefined8 local_90;
  undefined8 local_88 [12];
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((param_1 != 0) && (*(int *)(param_1 + 8) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_b8);
  }
  local_98 = &local_24;
  local_24 = 0;
  local_28 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_88;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_90 = param_3;
  (**(code **)(*param_2 + 0x130))(param_2,local_88,0xffffffff);
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400c68b6 FUN_1400c68b6 body=20 status=ok
// SIG undefined FUN_1400c68b6(void)

void FUN_1400c68b6(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) != param_2) {
    *(int *)(param_1 + 0xc) = param_2;
    FUN_1400c6ee6(param_1,*(undefined4 *)(param_1 + 8),param_2);
    return;
  }
  return;
}



// FUNCTION 1400c68ca FUN_1400c68ca body=1564 status=ok
// SIG undefined FUN_1400c68ca(void)

void FUN_1400c68ca(longlong param_1,longlong *param_2,undefined8 param_3,int param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,longlong *param_8,
                  undefined8 param_9,int param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined1 param_15,undefined1 param_16,
                  longlong param_17)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint *puVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  byte bVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  int iVar21;
  uint uVar22;
  longlong lVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  int iVar26;
  ulonglong uVar27;
  
  if ((*(longlong **)(param_1 + 0x10) != param_2) ||
     (iVar21 = param_10, iVar8 = param_4, *(longlong **)(param_1 + 0x18) != param_8)) {
    iVar21 = param_4;
    iVar8 = param_10;
  }
  plVar1 = (longlong *)(param_1 + 0x40);
  lVar23 = CONCAT44(iVar21,iVar8);
  if (*(int *)(param_1 + 0x48) != *(int *)(param_1 + 0x74)) {
    lVar14 = param_1 + 0x78;
    if (*(longlong *)(param_1 + 0x80) != 0) {
      lVar14 = *(longlong *)(param_1 + 0x80);
    }
    iVar17 = *(int *)(lVar14 + (ulonglong)(*(int *)(param_1 + 0x88) - 1U & iVar21 * 0x17 + iVar8) *
                               4);
    if (iVar17 != -1) {
      do {
        lVar14 = *plVar1 + (longlong)iVar17 * 0x20;
        if (*(longlong *)(*plVar1 + (longlong)iVar17 * 0x20) == lVar23) {
          if (((lVar14 != 0) && (lVar14 != -8)) &&
             (lVar14 = *(longlong *)(lVar14 + 0x10), lVar14 != 0)) goto LAB_1400c698c;
          break;
        }
        iVar17 = *(int *)(lVar14 + 0x18);
      } while (iVar17 != -1);
    }
  }
  uVar24 = 0;
  if (param_2 == (longlong *)0x0) {
    uVar25 = 0;
  }
  else {
    uVar25 = 0;
    if (param_8 != (longlong *)0x0) {
      uVar25 = *(ulonglong *)(*(longlong *)(*param_2 + 0x260) + (longlong)(int)param_2[1] * 8);
      uVar27 = uVar25 >> 0x20;
      uVar6 = *(ulonglong *)(*(longlong *)(*param_8 + 0x260) + (longlong)(int)param_8[1] * 8);
      uVar24 = 0x80000000;
      if (uVar27 == 0xffffffff) {
        uVar24 = 0;
        uVar27 = uVar25;
      }
      uVar24 = uVar27 & 0x7fffffff | uVar24;
      uVar25 = 0x80000000;
      uVar27 = uVar6 >> 0x20;
      if (0xfffffffeffffffff < uVar6) {
        uVar25 = 0;
        uVar27 = uVar6;
      }
      uVar25 = uVar27 & 0x7fffffff | uVar25;
    }
  }
  puVar7 = *(undefined8 **)(param_17 + 8);
  lVar14 = FUN_1400c527a();
  if (lVar14 != 0) {
    *(undefined8 *)(lVar14 + 8) = *puVar7;
    FUN_1400c51ac(param_2,param_3,param_5,param_6,param_7,param_8,param_9,param_11,param_12,param_13
                  ,param_14,param_16,param_15,lVar14);
  }
  uVar5 = *(undefined4 *)(*(longlong *)(param_17 + 8) + 8);
  *(longlong *)(lVar14 + 0x140) = param_1;
  *(byte *)(lVar14 + 0x153) = *(byte *)(lVar14 + 0x153) | 0x80;
  *(undefined4 *)(lVar14 + 0x148) = uVar5;
  *(ulonglong *)(lVar14 + 0x158) = uVar25 << 0x20 | uVar24;
  *(int *)(lVar14 + 0x160) = param_4;
  *(int *)(lVar14 + 0x164) = param_10;
  if (*(int *)(param_1 + 0x74) == 0) {
    iVar17 = *(int *)(param_1 + 0x48);
    *(int *)(param_1 + 0x48) = iVar17 + 1;
    if (*(int *)(param_1 + 0x4c) == iVar17) {
      FUN_1447711aa(plVar1,iVar17);
    }
    iVar19 = *(int *)(param_1 + 0x68);
    if (iVar19 == 0) {
      iVar12 = -1;
    }
    else {
      iVar12 = iVar19 + 0x1e;
      if (-1 < iVar19 + -1) {
        iVar12 = iVar19 + -1;
      }
      iVar12 = iVar12 >> 5;
    }
    lVar20 = param_1 + 0x50;
    iVar18 = iVar19 + 1;
    iVar26 = iVar19 + 0x1f;
    if (-1 < iVar19) {
      iVar26 = iVar19;
    }
    if (iVar26 >> 5 == iVar12) {
      *(int *)(param_1 + 0x68) = iVar18;
    }
    else {
      if (*(int *)(param_1 + 0x6c) <= iVar19) {
        if (iVar19 + 0x20U < 0xa0) {
          iVar18 = 0x80;
          iVar12 = iVar19;
        }
        else {
          uVar13 = iVar19 + 0x20U >> 5;
          if (*(int *)(param_1 + 0x6c) + 0x1fU < 0xa0) {
            uVar22 = 4;
            if (4 < uVar13) {
              uVar22 = uVar13;
            }
          }
          else {
            uVar22 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar24 = FUN_144a3809e(uVar22 << 2,0);
          iVar12 = (int)(uVar24 >> 2);
          iVar18 = -0x20;
          if ((int)uVar13 <= iVar12) {
            iVar18 = iVar12 << 5;
          }
          iVar12 = *(int *)(param_1 + 0x68);
        }
        *(int *)(param_1 + 0x6c) = iVar18;
        FUN_1446efbd8(lVar20,iVar12);
        iVar18 = *(int *)(param_1 + 0x68) + 1;
      }
      iVar12 = iVar18 + 0x1f;
      if (-1 < iVar18) {
        iVar12 = iVar18;
      }
      *(int *)(param_1 + 0x68) = iVar18;
      if (iVar18 % 0x20 != 0) {
        lVar15 = *(longlong *)(param_1 + 0x60);
        if (*(longlong *)(param_1 + 0x60) == 0) {
          lVar15 = lVar20;
        }
        bVar16 = -(char)(iVar18 % 0x20);
        *(uint *)(lVar15 + (longlong)(iVar12 >> 5) * 4) =
             (uint)(*(int *)(lVar15 + (longlong)(iVar12 >> 5) * 4) << (bVar16 & 0x1f)) >>
             (bVar16 & 0x1f);
      }
    }
    lVar15 = (longlong)iVar17;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar20 = *(longlong *)(param_1 + 0x60);
    }
    bVar16 = (byte)iVar19 & 0x1f;
    puVar4 = (uint *)(lVar20 + (longlong)(iVar26 >> 5) * 4);
    *puVar4 = *puVar4 & (-2 << bVar16 | 0xfffffffeU >> 0x20 - bVar16);
  }
  else {
    iVar17 = *(int *)(param_1 + 0x70);
    lVar15 = (longlong)iVar17;
    iVar19 = *(int *)(*(longlong *)(param_1 + 0x40) + 4 + lVar15 * 0x20);
    *(int *)(param_1 + 0x70) = iVar19;
    iVar12 = *(int *)(param_1 + 0x74) + -1;
    *(int *)(param_1 + 0x74) = iVar12;
    if (iVar12 != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar19 * 0x20) = 0xffffffff;
    }
  }
  lVar20 = param_1 + 0x50;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    lVar20 = *(longlong *)(param_1 + 0x60);
  }
  iVar19 = iVar17 + 0x1f;
  if (-1 < iVar17) {
    iVar19 = iVar17;
  }
  puVar4 = (uint *)(lVar20 + (longlong)(iVar19 >> 5) * 4);
  *puVar4 = *puVar4 | 1 << ((byte)iVar17 & 0x1f);
  iVar19 = 1;
  lVar20 = *(longlong *)(param_1 + 0x40);
  lVar15 = lVar15 * 0x20;
  puVar2 = (undefined4 *)(lVar20 + lVar15);
  *(longlong *)(lVar20 + lVar15) = lVar23;
  *(undefined8 **)(lVar20 + 8 + lVar15) = puVar7 + 6;
  *(longlong *)(lVar20 + 0x10 + lVar15) = lVar14;
  *(undefined4 *)(lVar20 + 0x18 + lVar15) = 0xffffffff;
  uVar13 = iVar21 * 0x17 + iVar8;
  uVar22 = *(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x74);
  if ((uVar22 != 0) && (uVar22 != 1)) {
    lVar14 = param_1 + 0x78;
    if (*(longlong *)(param_1 + 0x80) != 0) {
      lVar14 = *(longlong *)(param_1 + 0x80);
    }
    iVar21 = *(int *)(lVar14 + (ulonglong)(*(int *)(param_1 + 0x88) - 1U & uVar13) * 4);
    if (iVar21 != -1) {
      do {
        puVar3 = (undefined4 *)(*plVar1 + (longlong)iVar21 * 0x20);
        if (*(longlong *)(*plVar1 + (longlong)iVar21 * 0x20) == lVar23) {
          if (*(longlong *)(puVar3 + 4) != 0) {
            FUN_14026d0a4(*(undefined8 *)(puVar3 + 2));
          }
          uVar5 = *puVar2;
          uVar9 = puVar2[1];
          uVar10 = puVar2[2];
          uVar11 = puVar2[3];
          *(undefined8 *)(puVar3 + 4) = *(undefined8 *)(puVar2 + 4);
          *puVar3 = uVar5;
          puVar3[1] = uVar9;
          puVar3[2] = uVar10;
          puVar3[3] = uVar11;
          FUN_146d685b4(plVar1,iVar17);
          iVar17 = iVar21;
          goto LAB_1400c6d4c;
        }
        iVar21 = puVar3[6];
      } while (iVar21 != -1);
    }
  }
  if (3 < uVar22) {
    uVar24 = (ulonglong)(uVar22 & 0xfffffffe) + 0xf;
    lVar23 = 0x3f;
    if (uVar24 != 0) {
      for (; uVar24 >> lVar23 == 0; lVar23 = lVar23 + -1) {
      }
    }
    iVar19 = 1 << ((byte)lVar23 & 0x1f);
  }
  if (((int)uVar22 < 1) || (iVar19 <= *(int *)(param_1 + 0x88))) {
    uVar13 = *(int *)(param_1 + 0x88) - 1U & uVar13;
    puVar2[7] = uVar13;
    lVar23 = *(longlong *)(param_1 + 0x80);
    if (*(longlong *)(param_1 + 0x80) == 0) {
      lVar23 = param_1 + 0x78;
    }
    puVar2[6] = *(undefined4 *)
                 (lVar23 + ((longlong)*(int *)(param_1 + 0x88) - 1U & (longlong)(int)uVar13) * 4);
    lVar23 = *(longlong *)(param_1 + 0x80);
    if (*(longlong *)(param_1 + 0x80) == 0) {
      lVar23 = param_1 + 0x78;
    }
    *(int *)(lVar23 + ((longlong)*(int *)(param_1 + 0x88) - 1U & (longlong)(int)uVar13) * 4) =
         iVar17;
  }
  else {
    *(int *)(param_1 + 0x88) = iVar19;
    FUN_1400c7062(plVar1);
  }
LAB_1400c6d4c:
  lVar14 = *(longlong *)(*plVar1 + 0x10 + (longlong)iVar17 * 0x20);
LAB_1400c698c:
  iVar21 = *(int *)(param_1 + 0x98);
  *(uint *)(param_1 + 0x98) = iVar21 + 1U;
  if (*(uint *)(param_1 + 0x9c) < iVar21 + 1U) {
    FUN_140c29ed8((longlong *)(param_1 + 0x90),iVar21);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x90) + (longlong)iVar21 * 8) = lVar14;
  return;
}



// FUNCTION 1400c6ee6 FUN_1400c6ee6 body=379 status=ok
// SIG undefined FUN_1400c6ee6(void)

void FUN_1400c6ee6(undefined8 *param_1,int param_2,int param_3)

{
  longlong lVar1;
  ulonglong *puVar2;
  void *_Src;
  DWORD DVar3;
  uint uVar4;
  DWORD dwTlsIndex;
  DWORD DVar5;
  LPVOID lpTlsValue;
  void *_Dst;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined1 auStack_78 [40];
  int local_50;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_3 != 0) {
    if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_146815189(param_3,8);
    }
    _Src = (void *)*param_1;
    dwTlsIndex = DAT_14c7585d0;
    local_50 = param_2;
    if (DAT_14c7585d0 == 0xffffffff) {
      dwTlsIndex = TlsAlloc();
      DVar5 = 0xffffffff;
      LOCK();
      bVar10 = DAT_14c7585d0 != 0xffffffff;
      DVar3 = dwTlsIndex;
      if (bVar10) {
        DVar5 = DAT_14c7585d0;
        DVar3 = DAT_14c7585d0;
      }
      DAT_14c7585d0 = DVar3;
      UNLOCK();
      if (bVar10) {
        TlsFree(dwTlsIndex);
        dwTlsIndex = DVar5;
      }
    }
    lpTlsValue = TlsGetValue(dwTlsIndex);
    if (lpTlsValue == (LPVOID)0x0) {
      lpTlsValue = (LPVOID)FUN_140036a08(&local_49);
      FUN_140fddf04(lpTlsValue);
      TlsSetValue(dwTlsIndex,lpTlsValue);
    }
    puVar2 = (ulonglong *)((longlong)lpTlsValue + 0x10);
    uVar4 = param_3 * 8;
    uVar8 = (ulonglong)(uVar4 < 0x10) << 3 | 0xfffffffffffffff0;
    uVar6 = (uint)(uVar4 >= 0x10) * 8;
    lVar1 = (ulonglong)uVar6 + 7;
    _Dst = (void *)(*(longlong *)((longlong)lpTlsValue + 0x10) + lVar1 & uVar8);
    uVar9 = (longlong)_Dst + (longlong)(int)uVar4;
    if (*(ulonglong *)((longlong)lpTlsValue + 0x18) < uVar9) {
      FUN_140023dd8(puVar2,uVar6 + 8 + uVar4);
      _Dst = (void *)(lVar1 + *puVar2 & uVar8);
      uVar9 = (longlong)(int)uVar4 + (longlong)_Dst;
    }
    *puVar2 = uVar9;
    *param_1 = _Dst;
    if (local_50 != 0 && _Src != (void *)0x0) {
      iVar7 = local_50;
      if (param_3 < local_50) {
        iVar7 = param_3;
      }
      memcpy(_Dst,_Src,(longlong)iVar7 << 3);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1400c7062 FUN_1400c7062 body=664 status=ok
// SIG undefined FUN_1400c7062(void)

void FUN_1400c7062(longlong *param_1)

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
    if ((int)uVar7 < 1) goto LAB_1400c70c6;
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
LAB_1400c70c6:
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
      lVar13 = (longlong)iVar12 * 0x20;
      uVar15 = (longlong)
               ((int)((ulonglong)*(undefined8 *)(lVar6 + lVar13) >> 0x20) * 0x17 +
               (int)*(undefined8 *)(lVar6 + lVar13)) & (longlong)(int)param_1[9] - 1U;
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0x1c + lVar13) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 0x18 + lVar13) =
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



// FUNCTION 1400c72fa FUN_1400c72fa body=255 status=ok
// SIG undefined FUN_1400c72fa(void)

void FUN_1400c72fa(longlong param_1,int param_2)

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



// FUNCTION 1400c73fa FUN_1400c73fa body=1206 status=ok
// SIG undefined FUN_1400c73fa(void)

longlong * FUN_1400c73fa(longlong param_1,longlong *param_2,byte *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 auStack_88 [40];
  longlong *local_60;
  longlong **local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14016ded4(param_1 + 0x438);
  plVar1 = (longlong *)(param_1 + 200);
  if (*(int *)(param_1 + 0xd0) != *(int *)(param_1 + 0xfc)) {
    uVar5 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
            -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    lVar6 = param_1 + 0x100;
    if (*(longlong *)(param_1 + 0x108) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x108);
    }
    iVar7 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x110) - 1U & (uVar5 >> 0x10 ^ uVar5)) *
                             4);
    if (iVar7 != -1) {
      lVar6 = *plVar1;
      iVar9 = iVar7;
      do {
        if (*(longlong **)(lVar6 + (longlong)iVar9 * 0x20) == param_2) goto LAB_1400c75c5;
        iVar9 = *(int *)((longlong)iVar9 * 0x20 + lVar6 + 0x18);
      } while (iVar9 != -1);
    }
  }
  goto LAB_1400c74b3;
  while (iVar7 = *(int *)(lVar8 + 0x18), iVar7 != -1) {
LAB_1400c770d:
    lVar8 = lVar6 + (longlong)iVar7 * 0x20;
    if (*(longlong **)(lVar6 + (longlong)iVar7 * 0x20) == plVar11) goto LAB_1400c77b4;
  }
  lVar8 = 0;
LAB_1400c77b4:
  local_58 = &local_60;
  local_60 = param_2;
  FUN_146e0faaa(lVar8 + 8);
  if (*(int *)(param_1 + 0xd0) != *(int *)(param_1 + 0xfc)) {
    lVar6 = param_1 + 0x100;
    if (*(longlong *)(param_1 + 0x108) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x108);
    }
    iVar7 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x110) - 1U & uVar5) * 4);
    if (iVar7 != -1) {
      do {
        lVar6 = *plVar1 + (longlong)iVar7 * 0x20;
        if (*(longlong **)(*plVar1 + (longlong)iVar7 * 0x20) == plVar11) goto LAB_1400c77dd;
        iVar7 = *(int *)(lVar6 + 0x18);
      } while (iVar7 != -1);
    }
  }
  lVar6 = 0;
LAB_1400c77dd:
  if (((*(int *)(lVar6 + 0x10) == 0) &&
      ((*(byte *)(*(longlong *)(*plVar11 + 0x680) + (longlong)(int)plVar11[1]) & 1) != 0)) &&
     (cVar4 = FUN_140a356c4(param_1 + 0x118,plVar11), cVar4 == '\0')) {
    FUN_14016dd2a(param_1,param_2,1);
    lVar6 = *(longlong *)(*param_2 + 0x5a8);
    lVar8 = (longlong)(int)param_2[1] * 0x10;
    *(undefined8 *)(lVar6 + lVar8) = 0;
    *(undefined4 *)(lVar6 + 8 + lVar8) = 0;
    *(undefined4 *)(*(longlong *)(*param_2 + 0x5d8) + (longlong)(int)param_2[1] * 4) = 0;
  }
  goto LAB_1400c7506;
  while (iVar7 = *(int *)(lVar8 + 0x18), iVar7 != -1) {
LAB_1400c75c5:
    lVar8 = lVar6 + (longlong)iVar7 * 0x20;
    if (*(longlong **)(lVar6 + (longlong)iVar7 * 0x20) == param_2) goto LAB_1400c7742;
  }
  lVar8 = 0;
LAB_1400c7742:
  iVar7 = *(int *)(lVar8 + 0x10);
  if ((longlong)iVar7 != 0) {
    lVar6 = *(longlong *)(lVar8 + 8);
    lVar8 = 0;
    do {
      plVar11 = *(longlong **)(lVar8 + lVar6);
      if ((plVar11 != (longlong *)0x0) && (2 < *(byte *)((longlong)plVar11 + 0xc))) {
        lVar3 = *(longlong *)(*plVar11 + 0x5a8);
        lVar10 = (longlong)(int)plVar11[1] * 0x10;
        *(undefined8 *)(lVar3 + lVar10) = 0;
        *(undefined4 *)(lVar3 + 8 + lVar10) = 0;
        *(undefined4 *)(*(longlong *)(*plVar11 + 0x5d8) + (longlong)(int)plVar11[1] * 4) = 0;
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)iVar7 * 8 != lVar8);
  }
  FUN_14016df74(plVar1,param_2);
LAB_1400c74b3:
  if (*(char *)(*(longlong *)(*param_2 + 0x2c0) + 0xd + (longlong)(int)param_2[1] * 0x10) == '\0') {
    FUN_14016dd2a(param_1,param_2,1);
  }
  local_58 = (longlong **)CONCAT71(local_58._1_7_,1);
  FUN_1447dc87e(param_1,param_2);
  plVar11 = *(longlong **)(*(longlong *)(*param_2 + 0x5a8) + (longlong)(int)param_2[1] * 0x10);
  if (plVar11 == (longlong *)0x0) {
    plVar11 = (longlong *)0x0;
  }
  else {
    if (*(byte *)((longlong)plVar11 + 0xc) < 3) {
      plVar11 = (longlong *)0x0;
    }
    local_58 = (longlong **)0x0;
    local_50 = 1;
    FUN_140509e62(&local_58,1,0);
    *local_58 = param_2;
    FUN_140509fa0(param_1 + 0x118,&local_58,1);
    if (local_58 != (longlong **)0x0) {
      FUN_1400020a8();
    }
    lVar6 = *(longlong *)(*param_2 + 0x5a8);
    lVar8 = (longlong)(int)param_2[1] * 0x10;
    *(undefined8 *)(lVar6 + lVar8) = 0;
    *(undefined4 *)(lVar6 + 8 + lVar8) = 0;
    *(undefined4 *)(*(longlong *)(*param_2 + 0x5d8) + (longlong)(int)param_2[1] * 4) = 0;
    if (*(int *)(param_1 + 0xd0) != *(int *)(param_1 + 0xfc)) {
      uVar5 = ((uint)((ulonglong)plVar11 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar11 >> 4)) *
              -0x7a143595;
      uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
      uVar5 = uVar5 >> 0x10 ^ uVar5;
      lVar6 = *(longlong *)(param_1 + 0x108);
      if (*(longlong *)(param_1 + 0x108) == 0) {
        lVar6 = param_1 + 0x100;
      }
      iVar7 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x110) - 1U & uVar5) * 4);
      if (iVar7 != -1) {
        lVar6 = *plVar1;
        iVar9 = iVar7;
        do {
          if (*(longlong **)(lVar6 + (longlong)iVar9 * 0x20) == plVar11) goto LAB_1400c770d;
          iVar9 = *(int *)((longlong)iVar9 * 0x20 + lVar6 + 0x18);
        } while (iVar9 != -1);
      }
    }
  }
LAB_1400c7506:
  if ((*(byte *)(*(longlong *)(*param_2 + 0x680) + (longlong)(int)param_2[1]) & 1) != 0) {
    uVar2 = *(undefined4 *)(*(longlong *)(*param_2 + 0x80) + (longlong)(int)param_2[1] * 4);
    FUN_1400c7952(*(undefined8 *)(param_1 + 0x18),param_2);
    lVar6 = *(longlong *)(param_1 + 0x18);
    iVar7 = *(int *)(lVar6 + 0x340);
    *(uint *)(lVar6 + 0x340) = iVar7 + 1U;
    if (*(uint *)(lVar6 + 0x344) < iVar7 + 1U) {
      FUN_140543018((longlong *)(lVar6 + 0x338),iVar7);
    }
    *(undefined4 *)(*(longlong *)(lVar6 + 0x338) + (longlong)iVar7 * 4) = uVar2;
  }
  if (((plVar11 != (longlong *)0x0) && ((*param_3 & 1) != 0)) &&
     ((*(byte *)(*(longlong *)(*plVar11 + 0x680) + (longlong)(int)plVar11[1]) & 1) == 0)) {
    plVar11 = (longlong *)0x0;
  }
  FUN_14016dd9c(param_1 + 0x28,param_2);
  FUN_14016de36(param_1 + 0x78,param_2);
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar11;
}



// FUNCTION 1400c78b2 FUN_1400c78b2 body=64 status=ok
// SIG undefined FUN_1400c78b2(void)

void FUN_1400c78b2(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1400c78f2(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 1400c78f2 FUN_1400c78f2 body=95 status=ok
// SIG undefined FUN_1400c78f2(void)

ulonglong FUN_1400c78f2(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if ((((longlong)(int)(param_3 - param_2) & 0xffffffffffffc00U) == 0) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 1400c7952 FUN_1400c7952 body=1101 status=ok
// SIG undefined FUN_1400c7952(void)

void FUN_1400c7952(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  undefined2 uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  undefined4 uVar20;
  undefined1 auStack_f8 [42];
  undefined2 local_ce;
  uint local_cc;
  uint local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  ulonglong local_b8;
  longlong **local_b0;
  undefined8 *local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (((param_2 != (longlong *)0x0) && (1 < *(byte *)((longlong)param_2 + 0xc))) &&
     (*(char *)(*(longlong *)(*param_2 + 0x2c0) + 0xd + (longlong)(int)param_2[1] * 0x10) == '\0'))
  {
    FUN_14016e00e(param_1,param_2);
  }
  if (param_1[0x5e] != 0) {
    FUN_1400c8c12(param_1[0x5e] + 0x298,param_2,1);
  }
  uVar2 = *(uint *)(*(longlong *)(*param_2 + 0x80) + (longlong)(int)param_2[1] * 4);
  uVar18 = (ulonglong)uVar2;
  local_c8 = 0;
  puVar6 = (undefined8 *)FUN_1447eab44(param_1 + 0x70,uVar18,0);
  *(undefined1 *)(puVar6 + 8) = 0;
  local_ce = *(undefined2 *)(*(longlong *)(*param_2 + 0x170) + (longlong)(int)param_2[1] * 2);
  *(undefined2 *)(puVar6 + 7) = local_ce;
  lVar7 = *param_2;
  lVar9 = (longlong)(int)param_2[1];
  local_c0 = *(undefined8 *)(*(longlong *)(lVar7 + 0xb0) + lVar9 * 8);
  local_c4 = *(undefined4 *)(*(longlong *)(lVar7 + 0x80) + lVar9 * 4);
  lVar7 = *(longlong *)(lVar7 + 0xf8) + lVar9 * 0x18;
  lVar9 = *(longlong *)(lVar7 + 8);
  if (*(longlong *)(lVar7 + 8) == 0) {
    lVar9 = lVar7;
  }
  uVar15 = 0;
  uVar14 = 0;
  local_cc = 0;
  uVar16 = 0;
  uVar17 = 0;
  uVar4 = 0;
  uVar8 = 0;
  if ((longlong)*(int *)(lVar7 + 0x10) != 0) {
    lVar19 = (longlong)*(int *)(lVar7 + 0x10) * 8;
    lVar7 = 0;
    local_cc = 0;
    uVar14 = 0;
    uVar15 = 0;
    local_c8 = 0;
    do {
      lVar3 = *(longlong *)(lVar9 + lVar7);
      if ((lVar3 != 0) &&
         ((*(byte *)(lVar3 + 0x71 + (ulonglong)((*(uint *)(lVar3 + 8) & 3) == 0) * 8) & 2) != 0)) {
        uVar11 = (ulonglong)((*(uint *)(lVar3 + 8) & 3) == 0);
        local_c8 = local_c8 | *(uint *)(lVar3 + 0x48 + uVar11 * 8);
        uVar15 = uVar15 | *(uint *)(lVar3 + 0x4c + uVar11 * 8);
        uVar14 = uVar14 | *(uint *)(lVar3 + 0x50 + uVar11 * 8);
        local_cc = local_cc | *(uint *)(lVar3 + 0x54 + uVar11 * 8);
      }
      lVar7 = lVar7 + 8;
    } while (lVar19 != lVar7);
    lVar7 = 0;
    uVar16 = 0;
    uVar17 = 0;
    uVar4 = 0;
    uVar8 = 0;
    do {
      lVar3 = *(longlong *)(lVar9 + lVar7);
      if ((lVar3 != 0) &&
         ((*(byte *)(lVar3 + 0x71 + (ulonglong)((*(uint *)(lVar3 + 8) & 3) == 0) * 8) & 5) != 0)) {
        uVar11 = (ulonglong)((*(uint *)(lVar3 + 8) & 3) == 0);
        uVar17 = uVar17 | *(uint *)(lVar3 + 0x58 + uVar11 * 8);
        uVar16 = uVar16 | *(uint *)(lVar3 + 0x5c + uVar11 * 8);
        uVar4 = uVar4 | *(uint *)(lVar3 + 0x60 + uVar11 * 8);
        uVar8 = uVar8 | *(uint *)(lVar3 + 100 + uVar11 * 8);
      }
      lVar7 = lVar7 + 8;
      local_b8 = uVar18;
    } while (lVar19 != lVar7);
  }
  *puVar6 = local_c0;
  puVar6[1] = param_2;
  *(undefined4 *)(puVar6 + 2) = local_c4;
  *(uint *)((longlong)puVar6 + 0x14) = local_c8;
  *(uint *)(puVar6 + 3) = uVar15;
  *(uint *)((longlong)puVar6 + 0x1c) = uVar14;
  *(uint *)(puVar6 + 4) = local_cc;
  *(uint *)((longlong)puVar6 + 0x24) = uVar17;
  *(uint *)(puVar6 + 5) = uVar16;
  *(uint *)((longlong)puVar6 + 0x2c) = uVar4;
  *(uint *)(puVar6 + 6) = uVar8;
  *(undefined1 *)((longlong)puVar6 + 0x34) = 1;
  uVar12 = local_ce;
  if ((-1 < (int)uVar2) && ((int)uVar2 < (int)param_1[0x6f])) {
    lVar7 = param_1[0x6e];
    puVar1 = (uint *)(lVar7 + uVar18 * 8);
    if ((puVar1 != (uint *)0x0) && (*(char *)(lVar7 + 4 + uVar18 * 8) != '\0')) {
      uVar2 = *puVar1;
      iVar5 = (int)param_1[0x6d];
      if ((int)(uVar2 + 1) < iVar5) {
        *(uint *)(lVar7 + (longlong)*(int *)(param_1[0x6c] + -0x38 + (longlong)iVar5 * 0x48) * 8) =
             uVar2;
        iVar5 = (int)param_1[0x6d];
      }
      iVar10 = ~uVar2 + iVar5;
      if (iVar10 != 0) {
        iVar13 = 1;
        if (iVar10 < 1) {
          iVar13 = iVar10;
        }
        memmove((void *)(param_1[0x6c] + (longlong)(int)uVar2 * 0x48),
                (void *)(param_1[0x6c] + (longlong)(iVar5 - iVar13) * 0x48),(longlong)iVar13 * 0x48)
        ;
        iVar5 = (int)param_1[0x6d];
      }
      *(int *)(param_1 + 0x6d) = iVar5 + -1;
      FUN_1448b7c04(param_1 + 0x6c);
      *(undefined8 *)(param_1[0x6e] + uVar18 * 8) = 0;
      uVar12 = *(undefined2 *)(puVar6 + 7);
    }
  }
  (**(code **)(*(longlong *)param_1[0x5b] + 0x80))((longlong *)param_1[0x5b],puVar6,uVar12);
  local_a8 = &local_98;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_b0 = &local_a0;
  local_a0 = param_2;
  FUN_1400c7e52(&local_98);
  FUN_1447dcdd0(param_1,&local_98);
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1400c7da0(&local_98);
  (**(code **)(*param_1 + 0x18))(param_1,param_2);
  if (param_2 != (longlong *)0x0) {
    lVar7 = *(longlong *)(*(longlong *)(*param_2 + 0x1e8) + (longlong)(int)param_2[1] * 8);
    if (lVar7 != 0) {
      FUN_1407829ba((longlong)(int)param_2[1],lVar7);
      uVar20 = FUN_1400d25b0(param_1 + 0x20,param_2);
      FUN_140782a1c(uVar20,lVar7);
      FUN_140782aaa(param_1 + 0x26,lVar7);
    }
  }
  FUN_1447dcb4c(param_1[0x59],param_2);
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1400c7da0 FUN_1400c7da0 body=55 status=ok
// SIG undefined FUN_1400c7da0(void)

void FUN_1400c7da0(longlong *param_1)

{
  FUN_1400c7dd8(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1400c7dd8 FUN_1400c7dd8 body=121 status=ok
// SIG undefined FUN_1400c7dd8(void)

void FUN_1400c7dd8(longlong param_1,int param_2)

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



// FUNCTION 1400c7e52 FUN_1400c7e52 body=195 status=ok
// SIG undefined FUN_1400c7e52(void)

void FUN_1400c7e52(longlong param_1,longlong *param_2)

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
  uVar4 = (int)((ulonglong)(param_2[1] - *param_2) >> 3) + uVar2;
  if (uVar2 < uVar4) {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar4);
    }
    FUN_1400c8826(param_1,uVar4);
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
      FUN_1400c98fa(param_1);
    }
  }
  lVar5 = *param_2;
  lVar1 = param_2[1];
  if (lVar5 != lVar1) {
    do {
      FUN_1400c8646(param_1,local_2c,lVar5,0);
      lVar5 = lVar5 + 8;
    } while (lVar5 != lVar1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400c7f16 FUN_1400c7f16 body=1839 status=ok
// SIG undefined FUN_1400c7f16(void)

undefined8 FUN_1400c7f16(longlong param_1,undefined8 *param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  bool bVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  longlong local_80;
  undefined4 *local_78;
  uint *local_70;
  undefined4 local_64;
  longlong local_60;
  uint *local_58;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *(undefined1 *)(param_1 + 0x188) = 1;
  lVar5 = (longlong)*(int *)(param_2 + 2);
  if ((lVar5 < 0) || (*(int *)(param_1 + 0x128) <= *(int *)(param_2 + 2))) {
    uVar7 = 0;
    goto LAB_1400c8021;
  }
  lVar6 = *(longlong *)(param_1 + 0x120);
  puVar1 = (uint *)(lVar6 + lVar5 * 0x18);
  uVar7 = 0;
  if ((puVar1 == (uint *)0x0) || (*(char *)(lVar6 + 0x14 + lVar5 * 0x18) == '\0'))
  goto LAB_1400c8021;
  uVar8 = *puVar1;
  if (uVar8 == 0xffffffff) {
    uVar8 = puVar1[1];
    uVar11 = (ulonglong)(int)uVar8;
    if (uVar11 == 0xffffffffffffffff) {
      if ((longlong)(int)puVar1[2] != -1) {
        if (*(char *)(param_1 + 0x48) == '\x01') {
          uVar11 = (ulonglong)puVar1[4];
          lVar5 = param_1;
          goto LAB_1400c8089;
        }
        local_88 = param_2[6];
        local_b8 = *param_2;
        uStack_b0 = param_2[1];
        local_a8 = param_2[2];
        uStack_a0 = param_2[3];
        local_98 = param_2[4];
        uStack_90 = param_2[5];
        FUN_1429cc24c((longlong)(int)puVar1[2] * 0x48 + *(longlong *)(param_1 + 0x20));
      }
    }
    else {
      lVar5 = *(longlong *)(param_1 + 200);
      if (lVar5 == 0) {
        if ((((*(double *)(param_1 + 0xd0) <= 0.0) || (*(int *)(param_1 + 0xe0) < 1)) ||
            (*(int *)(param_1 + 0xe4) < 1)) || (*(int *)(param_1 + 0xe8) < 1)) {
          iVar4 = *(int *)(param_1 + 0x40);
          if ((int)(uVar8 + 1) < iVar4) {
            *(uint *)(lVar6 + 4 +
                     (longlong)
                     *(int *)((longlong)iVar4 * 0x68 + -0x58 + *(longlong *)(param_1 + 0x38)) * 0x18
                     ) = uVar8;
            uVar8 = puVar1[1];
            iVar4 = *(int *)(param_1 + 0x40);
          }
          iVar10 = ~uVar8 + iVar4;
          if (iVar10 != 0) {
            iVar12 = 1;
            if (iVar10 < 1) {
              iVar12 = iVar10;
            }
            lVar5 = *(longlong *)(param_1 + 0x38);
            goto LAB_1400c81fa;
          }
        }
        else {
          uVar9 = puVar1[3];
          local_4c = uVar8;
          if ((longlong)(int)uVar9 == -1) {
            local_58 = &local_4c;
            dVar15 = *(double *)(param_1 + 0xd8);
            lVar5 = *(longlong *)(param_1 + 0x38);
            lVar6 = uVar11 * 0x68;
            dVar20 = *(double *)(lVar5 + 0x38 + lVar6) * dVar15;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = ABS(dVar20) * 2.220446049250313e-16 + dVar20;
            auVar22 = roundpd(auVar22,auVar22,1);
            dVar20 = *(double *)(lVar5 + 0x50 + lVar6) * dVar15;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = ABS(dVar20) * 2.220446049250313e-16 + dVar20;
            auVar24 = roundpd(auVar24,auVar24,1);
            local_c8 = (longlong)auVar24._0_8_;
            local_60 = param_1;
            if ((longlong)auVar22._0_8_ <= local_c8) {
              dVar20 = *(double *)(lVar5 + lVar6 + 0x40) * dVar15;
              auVar17._0_8_ = ABS(dVar20) * 2.220446049250313e-16 + dVar20;
              auVar17._8_8_ = 0;
              auVar17 = roundpd(auVar17,auVar17,1);
              dVar15 = dVar15 * *(double *)(lVar5 + lVar6 + 0x58);
              auVar19._8_8_ = 0;
              auVar19._0_8_ = ABS(dVar15) * 2.220446049250313e-16 + dVar15;
              auVar24 = roundpd(auVar19,auVar19,1);
              lVar5 = (longlong)auVar22._0_8_;
              do {
                if ((longlong)auVar17._0_8_ <= (longlong)auVar24._0_8_) {
                  uVar8 = ((uint)lVar5 & 0xff00) << 8 | (uint)lVar5 & 0xff;
                  uVar8 = (uVar8 << 4 | uVar8) & 0xf0f0f0f;
                  uVar8 = (uVar8 * 4 | uVar8) & 0x33333333;
                  lVar6 = (longlong)auVar17._0_8_;
                  do {
                    uVar9 = ((uint)lVar6 & 0xff00) << 8 | (uint)lVar6 & 0xff;
                    uVar9 = (uVar9 << 4 | uVar9) & 0xf0f0f0f;
                    uVar9 = (uVar9 * 4 | uVar9) & 0x33333333;
                    cVar3 = FUN_146e076fc(&local_60,
                                          (uVar9 * 2 | uVar9 * 4) & 0xaaaaaaaa |
                                          (uVar8 * 2 | uVar8) & 0x55555555);
                    if (cVar3 == '\0') goto LAB_1400c8407;
                    lVar6 = lVar6 + 1;
                  } while ((longlong)auVar24._0_8_ + 1 != lVar6);
                }
                bVar14 = lVar5 != local_c8;
                lVar5 = lVar5 + 1;
              } while (bVar14);
            }
          }
          else {
            iVar4 = *(int *)(param_1 + 0xc0);
            if ((int)(uVar9 + 1) < iVar4) {
              *(uint *)(lVar6 + 0xc +
                       (longlong)
                       *(int *)(*(longlong *)(param_1 + 0x38) + 0x10 +
                               (longlong)
                               *(int *)(*(longlong *)(param_1 + 0xb8) + -4 + (longlong)iVar4 * 4) *
                               0x68) * 0x18) = uVar9;
              iVar4 = *(int *)(param_1 + 0xc0);
            }
            iVar10 = ~uVar9 + iVar4;
            if (iVar10 != 0) {
              iVar12 = 1;
              if (iVar10 < 1) {
                iVar12 = iVar10;
              }
              memmove((void *)(*(longlong *)(param_1 + 0xb8) + (longlong)(int)uVar9 * 4),
                      (void *)(*(longlong *)(param_1 + 0xb8) + (longlong)(iVar4 - iVar12) * 4),
                      (longlong)iVar12 << 2);
              iVar4 = *(int *)(param_1 + 0xc0);
            }
            *(int *)(param_1 + 0xc0) = iVar4 + -1;
            FUN_14479f406(param_1 + 0xb8);
          }
LAB_1400c8407:
          iVar4 = *(int *)(param_1 + 0x40);
          if ((int)(local_4c + 1) < iVar4) {
            lVar5 = (longlong)iVar4 + -1;
            local_64 = (undefined4)lVar5;
            lVar6 = *(longlong *)(param_1 + 0x38);
            lVar13 = (longlong)*(int *)((longlong)iVar4 * 0x68 + -0x58 + lVar6);
            local_c0 = lVar13 * 3;
            lVar13 = (longlong)*(int *)(*(longlong *)(param_1 + 0x120) + 0xc + lVar13 * 0x18);
            if (lVar13 == -1) {
              local_78 = &local_64;
              local_70 = &local_4c;
              dVar15 = *(double *)(param_1 + 0xd8);
              lVar5 = lVar5 * 0x68;
              dVar20 = *(double *)(lVar6 + 0x38 + lVar5) * dVar15;
              auVar21._8_8_ = 0;
              auVar21._0_8_ = ABS(dVar20) * 2.220446049250313e-16 + dVar20;
              auVar22 = roundpd(auVar21,auVar21,1);
              dVar20 = *(double *)(lVar6 + 0x50 + lVar5) * dVar15;
              auVar23._8_8_ = 0;
              auVar23._0_8_ = ABS(dVar20) * 2.220446049250313e-16 + dVar20;
              auVar24 = roundpd(auVar23,auVar23,1);
              local_c8 = (longlong)auVar24._0_8_;
              local_80 = param_1;
              if ((longlong)auVar22._0_8_ <= local_c8) {
                dVar20 = *(double *)(lVar6 + lVar5 + 0x40) * dVar15;
                auVar18._0_8_ = ABS(dVar20) * 2.220446049250313e-16 + dVar20;
                auVar18._8_8_ = 0;
                auVar19 = roundpd(auVar18,auVar18,1);
                dVar15 = dVar15 * *(double *)(lVar6 + lVar5 + 0x58);
                auVar16._8_8_ = 0;
                auVar16._0_8_ = ABS(dVar15) * 2.220446049250313e-16 + dVar15;
                auVar24 = roundpd(auVar16,auVar16,1);
                lVar5 = (longlong)auVar22._0_8_;
                do {
                  if ((longlong)auVar19._0_8_ <= (longlong)auVar24._0_8_) {
                    uVar8 = ((uint)lVar5 & 0xff00) << 8 | (uint)lVar5 & 0xff;
                    uVar8 = (uVar8 << 4 | uVar8) & 0xf0f0f0f;
                    uVar8 = (uVar8 * 4 | uVar8) & 0x33333333;
                    lVar6 = (longlong)auVar19._0_8_;
                    do {
                      uVar9 = ((uint)lVar6 & 0xff00) << 8 | (uint)lVar6 & 0xff;
                      uVar9 = (uVar9 << 4 | uVar9) & 0xf0f0f0f;
                      uVar9 = (uVar9 * 4 | uVar9) & 0x33333333;
                      cVar3 = FUN_146e0783c(&local_80,
                                            (uVar9 * 2 | uVar9 * 4) & 0xaaaaaaaa |
                                            (uVar8 * 2 | uVar8) & 0x55555555);
                      if (cVar3 == '\0') goto LAB_1400c8604;
                      lVar6 = lVar6 + 1;
                    } while ((longlong)auVar24._0_8_ + 1 != lVar6);
                  }
                  bVar14 = lVar5 != local_c8;
                  lVar5 = lVar5 + 1;
                } while (bVar14);
              }
            }
            else {
              *(uint *)(*(longlong *)(param_1 + 0xb8) + lVar13 * 4) = local_4c;
            }
LAB_1400c8604:
            *(uint *)(*(longlong *)(param_1 + 0x120) + 4 + local_c0 * 8) = local_4c;
            iVar4 = *(int *)(param_1 + 0x40);
          }
          iVar10 = ~local_4c + iVar4;
          if (iVar10 != 0) {
            iVar12 = 1;
            if (iVar10 < 1) {
              iVar12 = iVar10;
            }
            lVar5 = *(longlong *)(param_1 + 0x38);
            uVar8 = local_4c;
LAB_1400c81fa:
            memmove((void *)((longlong)(int)uVar8 * 0x68 + lVar5),
                    (void *)((longlong)(iVar4 - iVar12) * 0x68 + lVar5),(longlong)iVar12 * 0x68);
            iVar4 = *(int *)(param_1 + 0x40);
          }
        }
        lVar5 = param_1 + 0x38;
        *(int *)(param_1 + 0x40) = iVar4 + -1;
        goto LAB_1400c8015;
      }
LAB_1400c8089:
      FUN_1429cbfa8(lVar5,uVar11,param_2);
    }
  }
  else {
    iVar4 = *(int *)(param_1 + 0x118);
    if ((int)(uVar8 + 1) < iVar4) {
      *(uint *)(lVar6 + (longlong)
                        *(int *)((longlong)iVar4 * 0x68 + -0x58 + *(longlong *)(param_1 + 0x110)) *
                        0x18) = uVar8;
      uVar8 = *puVar1;
      iVar4 = *(int *)(param_1 + 0x118);
    }
    lVar5 = param_1 + 0x110;
    iVar10 = ~uVar8 + iVar4;
    if (iVar10 != 0) {
      iVar12 = 1;
      if (iVar10 < 1) {
        iVar12 = iVar10;
      }
      memmove((void *)((longlong)(int)uVar8 * 0x68 + *(longlong *)(param_1 + 0x110)),
              (void *)((longlong)(iVar4 - iVar12) * 0x68 + *(longlong *)(param_1 + 0x110)),
              (longlong)iVar12 * 0x68);
      iVar4 = *(int *)(param_1 + 0x118);
    }
    *(int *)(param_1 + 0x118) = iVar4 + -1;
LAB_1400c8015:
    FUN_144aa423e(lVar5);
  }
  lVar6 = (longlong)*(int *)(param_2 + 2);
  lVar5 = lVar6;
  if ((-1 < lVar6) && (*(int *)(param_2 + 2) < *(int *)(param_1 + 0x128))) {
    lVar13 = *(longlong *)(param_1 + 0x120);
    lVar5 = lVar6 * 3;
    puVar2 = (undefined4 *)(lVar13 + lVar6 * 0x18);
    *puVar2 = 0xffffffff;
    puVar2[1] = 0xffffffff;
    puVar2[2] = 0xffffffff;
    puVar2[3] = 0xffffffff;
    *(undefined4 *)(lVar13 + 0x10 + lVar6 * 0x18) = 0xffffffff;
    *(undefined1 *)(lVar13 + 0x14 + lVar6 * 0x18) = 0;
  }
  *(undefined1 *)(param_1 + 0x189) = 1;
  uVar7 = CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
LAB_1400c8021:
  *(undefined1 *)(param_1 + 0x188) = 0;
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 1400c8646 FUN_1400c8646 body=329 status=ok
// SIG undefined FUN_1400c8646(void)

undefined4 *
FUN_1400c8646(longlong param_1,undefined4 *param_2,ulonglong *param_3,undefined8 param_4)

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
  FUN_1400c89ee(param_1,local_50);
  uVar3 = *param_3;
  *local_48 = uVar3;
  *(undefined4 *)(local_48 + 1) = 0xffffffff;
  local_54 = local_50[0];
  uVar2 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  local_68 = param_4;
  cVar1 = FUN_1400c8790(param_1,uVar2,local_48);
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
      FUN_1400c98fa(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400c8790 FUN_1400c8790 body=149 status=ok
// SIG undefined FUN_1400c8790(void)

void FUN_1400c8790(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
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
          FUN_1400ca654(param_1,*param_4,1);
          *param_4 = iVar3;
          uVar1 = 1;
          break;
        }
        iVar3 = (int)plVar2[1];
        uVar1 = 0;
      } while (iVar3 != -1);
      goto LAB_1400c87b4;
    }
  }
  uVar1 = 0;
LAB_1400c87b4:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  return;
}



// FUNCTION 1400c8826 FUN_1400c8826 body=456 status=ok
// SIG undefined FUN_1400c8826(void)

void FUN_1400c8826(longlong *param_1,uint param_2)

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
      FUN_14474875a(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar8;
    if ((uint)(iVar10 - iVar11) < uVar8) {
      FUN_1446efaca(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(uVar6 * 0x10 + lVar2 + -0xc);
      do {
        iVar9 = (int)uVar6;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = iVar9 + -1;
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
        puVar5 = puVar5 + -4;
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



// FUNCTION 1400c89ee FUN_1400c89ee body=470 status=ok
// SIG undefined FUN_1400c89ee(void)

int * FUN_1400c89ee(longlong *param_1,int *param_2)

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
      FUN_1446efaca(param_1,iVar11);
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
    iVar5 = *(int *)(*param_1 + 4 + lVar2 * 0x10);
    *(int *)(param_1 + 6) = iVar5;
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar5 * 0x10) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar2 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 1400c8bc4 FUN_1400c8bc4 body=77 status=ok
// SIG undefined FUN_1400c8bc4(void)

void FUN_1400c8bc4(longlong param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = ~param_2 + iVar1;
  if (iVar2 != 0) {
    iVar3 = 1;
    if (iVar2 < 1) {
      iVar3 = iVar2;
    }
    memmove((void *)(*(longlong *)(param_1 + 8) + (longlong)(int)param_2 * 8),
            (void *)(*(longlong *)(param_1 + 8) + (longlong)(iVar1 - iVar3) * 8),
            (longlong)iVar3 << 3);
    iVar1 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar1 + -1;
  return;
}



// FUNCTION 1400c8c12 FUN_1400c8c12 body=383 status=ok
// SIG undefined FUN_1400c8c12(void)

void FUN_1400c8c12(longlong *param_1,ulonglong param_2,char param_3)

{
  ulonglong uVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  ulonglong *puVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    iVar4 = *(int *)((longlong)plVar3 +
                    (ulonglong)((int)param_1[9] - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4);
    if (iVar4 != -1) {
      do {
        puVar6 = (ulonglong *)(*param_1 + (longlong)iVar4 * 0x18);
        if (*puVar6 == param_2) {
          if (puVar6 == (ulonglong *)0x0) {
            return;
          }
          puVar6 = puVar6 + 1;
          if (puVar6 == (ulonglong *)0x0) {
            return;
          }
          FUN_1400c8d92(param_1 + 10,(int)*puVar6,1);
          if (param_3 == '\x01') {
            FUN_1400c9f42(param_1 + 10);
          }
          iVar4 = (int)*puVar6;
          if ((int)param_1[0xb] <= iVar4) goto LAB_1400c8d60;
          if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) goto LAB_1400c8d8d;
          uVar1 = *(ulonglong *)(param_1[10] + 0x180 + (longlong)iVar4 * 0x1a0);
          uVar2 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
          uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
          plVar3 = param_1 + 7;
          if ((longlong *)param_1[8] != (longlong *)0x0) {
            plVar3 = (longlong *)param_1[8];
          }
          iVar5 = *(int *)((longlong)plVar3 +
                          (ulonglong)((int)param_1[9] - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4);
          if (iVar5 == -1) goto LAB_1400c8d8d;
          goto LAB_1400c8d4d;
        }
        iVar4 = (int)puVar6[2];
      } while (iVar4 != -1);
    }
  }
  return;
  while (iVar5 = (int)puVar6[2], iVar5 != -1) {
LAB_1400c8d4d:
    puVar6 = (ulonglong *)(*param_1 + (longlong)iVar5 * 0x18);
    if (*puVar6 == uVar1) goto LAB_1400c8d5d;
  }
LAB_1400c8d8d:
  puVar6 = (ulonglong *)0x0;
LAB_1400c8d5d:
  *(int *)(puVar6 + 1) = iVar4;
LAB_1400c8d60:
  FUN_1400c8e46(param_1,param_2);
  return;
}



// FUNCTION 1400c8d92 FUN_1400c8d92 body=119 status=ok
// SIG undefined FUN_1400c8d92(void)

void FUN_1400c8d92(longlong *param_1,int param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  
  lVar1 = *param_1;
  _Dst = (void *)((longlong)param_2 * 0x1a0 + lVar1);
  FUN_1400c8e09(_Dst,param_3);
  iVar2 = (int)param_1[1];
  iVar3 = iVar2 - (param_2 + param_3);
  if (param_3 < iVar3) {
    iVar3 = param_3;
  }
  if (iVar3 != 0) {
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0x1a0),(longlong)iVar3 * 0x1a0);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 - param_3;
  return;
}



// FUNCTION 1400c8e09 FUN_1400c8e09 body=61 status=ok
// SIG undefined FUN_1400c8e09(void)

void FUN_1400c8e09(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*(longlong *)(param_1 + 0x188) != 0) {
      FUN_1400c90de(param_1);
    }
    FUN_1400c8f42(param_1);
    param_1 = param_1 + 0x1a0;
  }
  return;
}



// FUNCTION 1400c8e46 FUN_1400c8e46 body=159 status=ok
// SIG undefined FUN_1400c8e46(void)

undefined8 FUN_1400c8e46(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar1 * 0x18) == param_2) {
          FUN_1400c8ee6(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 1400c8ee6 FUN_1400c8ee6 body=91 status=ok
// SIG undefined FUN_1400c8ee6(void)

void FUN_1400c8ee6(longlong *param_1,int param_2)

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
  lVar1 = *param_1 + (longlong)param_2 * 0x18;
  lVar5 = (longlong)*(int *)(lVar1 + 0x14);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0x10);
  FUN_1400c9056(param_1,param_2,1);
  return;
}



// FUNCTION 1400c8f42 FUN_1400c8f42 body=232 status=ok
// SIG undefined FUN_1400c8f42(void)

void FUN_1400c8f42(longlong param_1)

{
  FUN_1400c902a(*(undefined8 *)(param_1 + 0x140),*(undefined4 *)(param_1 + 0x148));
  if (*(longlong *)(param_1 + 0x140) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1400c902a FUN_1400c902a body=44 status=ok
// SIG undefined FUN_1400c902a(void)

void FUN_1400c902a(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x38;
    do {
      FUN_144aa4484(param_1);
      param_1 = param_1 + 0x80;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1400c9056 FUN_1400c9056 body=136 status=ok
// SIG undefined FUN_1400c9056(void)

void FUN_1400c9056(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x18 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = param_2;
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
      puVar7 = puVar7 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1400c90de FUN_1400c90de body=152 status=ok
// SIG undefined FUN_1400c90de(void)

void FUN_1400c90de(longlong param_1,undefined8 param_2)

{
  FUN_1400c9176();
  FUN_1400c938a(param_1 + 0x20,param_2);
  FUN_1400c960a(param_1 + 0x40,param_2);
  FUN_1400c9832(param_1 + 0x60,param_2);
  FUN_1400c929e(param_1 + 0x80,param_2);
  FUN_1400c953a(param_1 + 0xa0,param_2);
  FUN_1400c9466(param_1 + 0xc0,param_2);
  FUN_1400c9234(param_1 + 0xe0,param_2);
  FUN_1400c96c4(param_1 + 0x100,param_2);
  FUN_1400c93f8(param_1 + 0x120,param_2);
  return;
}



// FUNCTION 1400c9176 FUN_1400c9176 body=103 status=ok
// SIG undefined FUN_1400c9176(void)

void FUN_1400c9176(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    lVar3 = 0;
    do {
      FUN_1400c91de(param_2,*(undefined4 *)(lVar2 + lVar3));
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_1400c95aa(param_1 + 0x10,0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}



// FUNCTION 1400c91de FUN_1400c91de body=85 status=ok
// SIG undefined FUN_1400c91de(void)

void FUN_1400c91de(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *param_1;
  lVar4 = (longlong)param_2 * 0x30;
  puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar4);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar4);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar3 + lVar4) = 0;
  ((undefined8 *)(lVar3 + lVar4))[1] = 0;
  iVar2 = (int)param_1[3];
  *(uint *)(param_1 + 3) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x1c) < iVar2 + 1U) {
    FUN_1446f48e2(param_1 + 2,iVar2);
  }
  *(int *)(param_1[2] + (longlong)iVar2 * 4) = param_2;
  return;
}



// FUNCTION 1400c9234 FUN_1400c9234 body=105 status=ok
// SIG undefined FUN_1400c9234(void)

void FUN_1400c9234(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    lVar3 = 0;
    do {
      FUN_1400c91de(param_2,*(undefined4 *)(lVar2 + lVar3));
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_1400c95aa(param_1 + 0x10,0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}



// FUNCTION 1400c929e FUN_1400c929e body=107 status=ok
// SIG undefined FUN_1400c929e(void)

void FUN_1400c929e(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    lVar3 = 0;
    do {
      FUN_1400c930a(param_2 + 0x60,*(undefined4 *)(lVar2 + lVar3));
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_1400c95aa(param_1 + 0x10,0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}



// FUNCTION 1400c930a FUN_1400c930a body=127 status=ok
// SIG undefined FUN_1400c930a(void)

void FUN_1400c930a(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_1;
  lVar3 = (longlong)param_2 * 0x2c;
  *(undefined8 *)(lVar2 + lVar3) = 0;
  ((undefined8 *)(lVar2 + lVar3))[1] = 0;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3f80000000000000;
  *(undefined8 *)(lVar2 + 0x18 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x20 + lVar3) = 0xffff000000000000;
  *(undefined1 *)(lVar2 + 0x28 + lVar3) = 0xff;
  *(undefined2 *)(lVar2 + 0x29 + lVar3) = 0;
  *(undefined1 *)(lVar2 + 0x2b + lVar3) = 0;
  iVar1 = (int)param_1[3];
  *(uint *)(param_1 + 3) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0x1c) < iVar1 + 1U) {
    FUN_1446f48e2(param_1 + 2,iVar1);
  }
  *(int *)(param_1[2] + (longlong)iVar1 * 4) = param_2;
  return;
}



// FUNCTION 1400c938a FUN_1400c938a body=109 status=ok
// SIG undefined FUN_1400c938a(void)

void FUN_1400c938a(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    lVar3 = 0;
    do {
      FUN_1400ca4f4(param_2 + 0x80,*(undefined4 *)(lVar2 + lVar3));
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_1400c95aa(param_1 + 0x10,0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}



// FUNCTION 1400c93f8 FUN_1400c93f8 body=109 status=ok
// SIG undefined FUN_1400c93f8(void)

void FUN_1400c93f8(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    lVar3 = 0;
    do {
      FUN_1400c930a(param_2 + 0x60,*(undefined4 *)(lVar2 + lVar3));
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_1400c95aa(param_1 + 0x10,0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}



// FUNCTION 1400c9466 FUN_1400c9466 body=110 status=ok
// SIG undefined FUN_1400c9466(void)

void FUN_1400c9466(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    lVar3 = 0;
    do {
      FUN_1400c94d4(param_2 + 0xc0,*(undefined4 *)(lVar2 + lVar3));
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_1400c95aa(param_1 + 0x10,0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}



// FUNCTION 1400c94d4 FUN_1400c94d4 body=101 status=ok
// SIG undefined FUN_1400c94d4(void)

void FUN_1400c94d4(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_1;
  lVar3 = (longlong)param_2 * 0x40;
  *(undefined8 *)(lVar2 + 0x20 + lVar3) = 0;
  *(undefined4 *)(lVar2 + 0x28 + lVar3) = 0;
  *(undefined8 *)(lVar2 + lVar3) = 0;
  ((undefined8 *)(lVar2 + lVar3))[1] = 0;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x2c + lVar3) = 0x3f800000;
  iVar1 = (int)param_1[3];
  *(uint *)(param_1 + 3) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0x1c) < iVar1 + 1U) {
    FUN_1446f48e2(param_1 + 2,iVar1);
  }
  *(int *)(param_1[2] + (longlong)iVar1 * 4) = param_2;
  return;
}



// FUNCTION 1400c953a FUN_1400c953a body=112 status=ok
// SIG undefined FUN_1400c953a(void)

void FUN_1400c953a(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    lVar3 = 0;
    do {
      FUN_1400caafe(param_2 + 0xa0,*(undefined4 *)(lVar2 + lVar3));
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_1400c95aa(param_1 + 0x10,0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}



// FUNCTION 1400c95aa FUN_1400c95aa body=96 status=ok
// SIG undefined FUN_1400c95aa(void)

void FUN_1400c95aa(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,4);
  }
  return;
}



// FUNCTION 1400c960a FUN_1400c960a body=186 status=ok
// SIG undefined FUN_1400c960a(void)

void FUN_1400c960a(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if ((longlong)iVar2 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x10);
    lVar7 = 0;
    do {
      iVar3 = *(int *)(lVar5 + lVar7);
      lVar6 = *(longlong *)(param_2 + 0x20);
      puVar1 = (undefined8 *)(lVar6 + (longlong)iVar3 * 0x18);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)(lVar6 + 0x10 + (longlong)iVar3 * 0x18) = 0;
      iVar4 = *(int *)(param_2 + 0x38);
      *(uint *)(param_2 + 0x38) = iVar4 + 1U;
      if (*(uint *)(param_2 + 0x3c) < iVar4 + 1U) {
        FUN_1446f48e2((longlong *)(param_2 + 0x30),iVar4);
      }
      *(int *)(*(longlong *)(param_2 + 0x30) + (longlong)iVar4 * 4) = iVar3;
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar2 * 8 != lVar7);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_1400c95aa(param_1 + 0x10,0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}



// FUNCTION 1400c96c4 FUN_1400c96c4 body=191 status=ok
// SIG undefined FUN_1400c96c4(void)

void FUN_1400c96c4(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if ((longlong)iVar2 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x10);
    lVar7 = 0;
    do {
      iVar3 = *(int *)(lVar5 + lVar7);
      lVar6 = *(longlong *)(param_2 + 0x20);
      puVar1 = (undefined8 *)(lVar6 + (longlong)iVar3 * 0x18);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)(lVar6 + 0x10 + (longlong)iVar3 * 0x18) = 0;
      iVar4 = *(int *)(param_2 + 0x38);
      *(uint *)(param_2 + 0x38) = iVar4 + 1U;
      if (*(uint *)(param_2 + 0x3c) < iVar4 + 1U) {
        FUN_1446f48e2((longlong *)(param_2 + 0x30),iVar4);
      }
      *(int *)(*(longlong *)(param_2 + 0x30) + (longlong)iVar4 * 4) = iVar3;
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar2 * 8 != lVar7);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_1400c95aa(param_1 + 0x10,0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}



// FUNCTION 1400c9784 FUN_1400c9784 body=174 status=ok
// SIG undefined FUN_1400c9784(void)

int FUN_1400c9784(longlong *param_1,longlong *param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  
  iVar1 = (int)param_1[1];
  iVar3 = iVar1;
  if (0 < iVar1) {
    uVar5 = 0;
    bVar4 = 0;
    do {
      lVar2 = *param_1;
      if (*(longlong *)(lVar2 + (longlong)(int)uVar5 * 0x10) == *param_2) {
        iVar6 = ~uVar5 + iVar3;
        if (iVar6 != 0) {
          if (0 < iVar6) {
            iVar6 = 1;
          }
          memmove((void *)((longlong)(int)uVar5 * 0x10 + lVar2),
                  (void *)((longlong)(iVar3 - iVar6) * 0x10 + lVar2),(longlong)iVar6 << 4);
          iVar3 = (int)param_1[1];
        }
        iVar3 = iVar3 + -1;
        *(int *)(param_1 + 1) = iVar3;
        bVar4 = 1;
      }
      else {
        uVar5 = uVar5 + 1;
      }
    } while ((int)uVar5 < iVar3);
    if ((bool)(param_3 == '\x01' & bVar4)) {
      FUN_146dfc82e(param_1);
      iVar3 = (int)param_1[1];
    }
  }
  return iVar1 - iVar3;
}



// FUNCTION 1400c9832 FUN_1400c9832 body=200 status=ok
// SIG undefined FUN_1400c9832(void)

void FUN_1400c9832(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if ((longlong)iVar2 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x10);
    lVar8 = 0;
    do {
      iVar3 = *(int *)(lVar5 + lVar8);
      lVar6 = *(longlong *)(param_2 + 0x40);
      lVar7 = (longlong)iVar3 * 0x30;
      puVar1 = (undefined8 *)(lVar6 + 0x20 + lVar7);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)(lVar6 + 0x10 + lVar7);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)(lVar6 + lVar7) = 0;
      ((undefined8 *)(lVar6 + lVar7))[1] = 0;
      iVar4 = *(int *)(param_2 + 0x58);
      *(uint *)(param_2 + 0x58) = iVar4 + 1U;
      if (*(uint *)(param_2 + 0x5c) < iVar4 + 1U) {
        FUN_1446f48e2((longlong *)(param_2 + 0x50),iVar4);
      }
      *(int *)(*(longlong *)(param_2 + 0x50) + (longlong)iVar4 * 4) = iVar3;
      lVar8 = lVar8 + 8;
    } while ((longlong)iVar2 * 8 != lVar8);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_1400c95aa(param_1 + 0x10,0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}



// FUNCTION 1400c98fa FUN_1400c98fa body=672 status=ok
// SIG undefined FUN_1400c98fa(void)

void FUN_1400c98fa(longlong *param_1)

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
    if ((int)uVar7 < 1) goto LAB_1400c995e;
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
LAB_1400c995e:
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



// FUNCTION 1400c9b9a FUN_1400c9b9a body=181 status=ok
// SIG undefined FUN_1400c9b9a(void)

void FUN_1400c9b9a(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)(*(longlong *)(*param_2 + 0x248) + (longlong)(int)param_2[1] * 4);
  *puVar1 = *puVar1 & ~*(uint *)(param_1 + 0xa8);
  FUN_1447dd064(param_1 + 0x48,param_2);
  puVar1 = (uint *)(*(longlong *)(*param_2 + 0x248) + (longlong)(int)param_2[1] * 4);
  *puVar1 = *puVar1 & ~*(uint *)(param_1 + 0x110);
  FUN_1447dd064(param_1 + 0xb0,param_2);
  puVar1 = (uint *)(*(longlong *)(*param_2 + 0x248) + (longlong)(int)param_2[1] * 4);
  *puVar1 = *puVar1 & ~*(uint *)(param_1 + 0x178);
  FUN_1447dd064(param_1 + 0x118,param_2);
  puVar1 = (uint *)(*(longlong *)(*param_2 + 0x248) + (longlong)(int)param_2[1] * 4);
  *puVar1 = *puVar1 & ~*(uint *)(param_1 + 0x1e0);
  FUN_1447dd064(param_1 + 0x180,param_2);
  return;
}



// FUNCTION 1400c9c50 FUN_1400c9c50 body=64 status=ok
// SIG undefined FUN_1400c9c50(void)

void FUN_1400c9c50(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1400c9e14(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1400c9c90 FUN_1400c9c90 body=159 status=ok
// SIG undefined FUN_1400c9c90(void)

undefined8 FUN_1400c9c90(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar1 * 0x18) == param_2) {
          FUN_1400c9d30(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 1400c9d30 FUN_1400c9d30 body=91 status=ok
// SIG undefined FUN_1400c9d30(void)

void FUN_1400c9d30(longlong *param_1,int param_2)

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
  lVar1 = *param_1 + (longlong)param_2 * 0x18;
  lVar5 = (longlong)*(int *)(lVar1 + 0x14);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0x10);
  FUN_1400c9d8c(param_1,param_2,1);
  return;
}



// FUNCTION 1400c9d8c FUN_1400c9d8c body=136 status=ok
// SIG undefined FUN_1400c9d8c(void)

void FUN_1400c9d8c(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x18 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = param_2;
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
      puVar7 = puVar7 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1400c9e14 FUN_1400c9e14 body=301 status=ok
// SIG undefined FUN_1400c9e14(void)

ulonglong FUN_1400c9e14(undefined8 param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar3 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     ((param_2 == 0 || (0x40 < (int)(param_3 - param_2))))) {
    if ((int)param_2 < 1) {
      uVar3 = (ulonglong)param_2;
    }
    else {
      uVar3 = (ulonglong)param_2 * 8;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          uVar4 = uVar3 + 0xf;
          if (param_2 < 0xfff) {
            uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
          }
          else {
            if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
              bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
              uVar5 = 0x32;
              if (0x32 < bVar2) {
                uVar5 = (ulonglong)bVar2;
              }
              uVar6 = 0x32 - (ulonglong)bVar2;
              do {
                uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
                if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1400c9eab;
                lVar1 = uVar5 + 1 + uVar6;
                uVar6 = uVar6 - 1;
              } while (lVar1 != 0x33);
            }
            uVar3 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar3 = (ulonglong)DAT_14c841df8;
            }
            uVar3 = -uVar3 & ((uVar4 & 0x7fffffff0) + uVar3) - 1;
          }
        }
        else {
          uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
        }
      }
LAB_1400c9eab:
      uVar3 = uVar3 >> 3;
    }
  }
  return uVar3;
}



// FUNCTION 1400c9f42 FUN_1400c9f42 body=64 status=ok
// SIG undefined FUN_1400c9f42(void)

void FUN_1400c9f42(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1400ca57e(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x1a0,0x10);
  }
  return;
}



// FUNCTION 1400c9f82 FUN_1400c9f82 body=492 status=ok
// SIG undefined FUN_1400c9f82(void)

void FUN_1400c9f82(longlong param_1,longlong *param_2,char param_3)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  longlong *local_40;
  longlong **local_38;
  undefined4 *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar1 = (uint *)(*(longlong *)(*param_2 + 0x248) + (longlong)(int)param_2[1] * 4);
  *puVar1 = *puVar1 & ~*(uint *)(param_1 + 0x248);
  FUN_1447dd1e0(param_1 + 0x1e8,param_2);
  if (*(char *)(param_1 + 0x488) == '\x01') {
    puVar1 = (uint *)(*(longlong *)(*param_2 + 0x248) + (longlong)(int)param_2[1] * 4);
    *puVar1 = *puVar1 & ~*(uint *)(param_1 + 0x380);
    FUN_1447dd1e0(param_1 + 800,param_2);
  }
  if (param_3 == '\0') {
    puVar1 = (uint *)(*(longlong *)(*param_2 + 0x248) + (longlong)(int)param_2[1] * 4);
    *puVar1 = *puVar1 & ~*(uint *)(param_1 + 0x2b0);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
  }
  cVar2 = FUN_1400ca342(param_1 + 0x2b8,param_2);
  if (cVar2 == '\0') {
    puVar1 = (uint *)(*(longlong *)(*param_2 + 0x248) + (longlong)(int)param_2[1] * 4);
    *puVar1 = *puVar1 | *(uint *)(param_1 + 0x2b0);
    local_40 = param_2;
    if (*(int *)(param_1 + 600) != *(int *)(param_1 + 0x284)) {
      uVar3 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
              -0x7a143595;
      uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
      lVar4 = param_1 + 0x288;
      if (*(longlong *)(param_1 + 0x290) != 0) {
        lVar4 = *(longlong *)(param_1 + 0x290);
      }
      iVar5 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x298) - 1U & (uVar3 >> 0x10 ^ uVar3))
                               * 4);
      if (iVar5 != -1) {
        lVar4 = *(longlong *)(param_1 + 0x250);
        do {
          if (*(longlong **)(lVar4 + (longlong)iVar5 * 0x18) == param_2) goto LAB_1400ca128;
          iVar5 = *(int *)(lVar4 + (longlong)iVar5 * 0x18 + 0x10);
        } while (iVar5 != -1);
      }
    }
    local_44 = *(undefined4 *)(param_1 + 0x2a8);
    local_30 = &local_44;
    local_38 = &local_40;
    FUN_14043cbec((longlong *)(param_1 + 0x250),local_24,&local_38,0);
    iVar5 = *(int *)(param_1 + 0x2a8);
    *(uint *)(param_1 + 0x2a8) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0x2ac) < iVar5 + 1U) {
      FUN_1406b7a4a((longlong *)(param_1 + 0x2a0),iVar5);
    }
    *(longlong **)(*(longlong *)(param_1 + 0x2a0) + (longlong)iVar5 * 8) = local_40;
  }
LAB_1400ca128:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400ca182 FUN_1400ca182 body=64 status=ok
// SIG undefined FUN_1400ca182(void)

void FUN_1400ca182(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1400ca3c6(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1400ca1c2 FUN_1400ca1c2 body=155 status=ok
// SIG undefined FUN_1400ca1c2(void)

undefined8 FUN_1400ca1c2(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar1 * 0x18) == param_2) {
          FUN_1400ca25e(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 1400ca25e FUN_1400ca25e body=91 status=ok
// SIG undefined FUN_1400ca25e(void)

void FUN_1400ca25e(longlong *param_1,int param_2)

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
  lVar1 = *param_1 + (longlong)param_2 * 0x18;
  lVar5 = (longlong)*(int *)(lVar1 + 0x14);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0x10);
  FUN_1400ca2ba(param_1,param_2,1);
  return;
}



// FUNCTION 1400ca2ba FUN_1400ca2ba body=136 status=ok
// SIG undefined FUN_1400ca2ba(void)

void FUN_1400ca2ba(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x18 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = param_2;
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
      puVar7 = puVar7 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1400ca342 FUN_1400ca342 body=132 status=ok
// SIG undefined FUN_1400ca342(void)

undefined8 FUN_1400ca342(longlong *param_1,ulonglong param_2)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  bool bVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 +
                    (ulonglong)((int)param_1[9] - 1U & (uVar1 >> 0x10 ^ uVar1)) * 4);
    if (iVar4 != -1) {
      do {
        bVar5 = *(ulonglong *)(*param_1 + (longlong)iVar4 * 0x18) == param_2;
        uVar3 = CONCAT71((int7)(int3)((uint)iVar4 >> 8),bVar5);
        if (bVar5) {
          return uVar3;
        }
        iVar4 = *(int *)(*param_1 + (longlong)iVar4 * 0x18 + 0x10);
      } while (iVar4 != -1);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 1400ca3c6 FUN_1400ca3c6 body=301 status=ok
// SIG undefined FUN_1400ca3c6(void)

ulonglong FUN_1400ca3c6(undefined8 param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar3 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     ((param_2 == 0 || (0x40 < (int)(param_3 - param_2))))) {
    if ((int)param_2 < 1) {
      uVar3 = (ulonglong)param_2;
    }
    else {
      uVar3 = (ulonglong)param_2 * 8;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          uVar4 = uVar3 + 0xf;
          if (param_2 < 0xfff) {
            uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
          }
          else {
            if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
              bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
              uVar5 = 0x32;
              if (0x32 < bVar2) {
                uVar5 = (ulonglong)bVar2;
              }
              uVar6 = 0x32 - (ulonglong)bVar2;
              do {
                uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
                if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1400ca45d;
                lVar1 = uVar5 + 1 + uVar6;
                uVar6 = uVar6 - 1;
              } while (lVar1 != 0x33);
            }
            uVar3 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar3 = (ulonglong)DAT_14c841df8;
            }
            uVar3 = -uVar3 & ((uVar4 & 0x7fffffff0) + uVar3) - 1;
          }
        }
        else {
          uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
        }
      }
LAB_1400ca45d:
      uVar3 = uVar3 >> 3;
    }
  }
  return uVar3;
}



// FUNCTION 1400ca4f4 FUN_1400ca4f4 body=138 status=ok
// SIG undefined FUN_1400ca4f4(void)

void FUN_1400ca4f4(longlong *param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  lVar4 = *param_1;
  lVar6 = (longlong)param_2 * 0x20;
  lVar2 = lVar4 + lVar6;
  puVar5 = *(undefined8 **)(lVar4 + lVar6);
  *(undefined8 *)(lVar4 + lVar6) = 0;
  if (puVar5 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar5 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)puVar5 + 0xc) == 0)) {
      (**(code **)*puVar5)(puVar5,1);
    }
  }
  *(undefined4 *)(lVar2 + 8) = 0xffffffff;
  *(undefined2 *)(lVar2 + 0xc) = 0;
  *(undefined8 *)(lVar2 + 0x10) = 0xffffffffffffffff;
  iVar3 = (int)param_1[3];
  *(uint *)(param_1 + 3) = iVar3 + 1U;
  if (*(uint *)((longlong)param_1 + 0x1c) < iVar3 + 1U) {
    FUN_1446f48e2(param_1 + 2,iVar3);
  }
  *(int *)(param_1[2] + (longlong)iVar3 * 4) = param_2;
  return;
}



// FUNCTION 1400ca57e FUN_1400ca57e body=214 status=ok
// SIG undefined FUN_1400ca57e(void)

ulonglong FUN_1400ca57e(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = (ulonglong)param_3;
  if (((0x3fff < (ulonglong)((longlong)(int)(param_3 - param_2) * 0x1a0)) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     ((param_2 == 0 || (0x40 < (int)(param_3 - param_2))))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = (ulonglong)param_2 * 0x1a0;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          if (param_2 < 0x4f) {
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
      uVar1 = uVar1 / 0x1a0;
    }
  }
  return uVar1;
}



// FUNCTION 1400ca654 FUN_1400ca654 body=138 status=ok
// SIG undefined FUN_1400ca654(void)

void FUN_1400ca654(longlong *param_1,int param_2,int param_3)

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



// FUNCTION 1400ca6de FUN_1400ca6de body=143 status=ok
// SIG undefined FUN_1400ca6de(void)

void FUN_1400ca6de(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)(*(longlong *)(*param_2 + 0x248) + (longlong)(int)param_2[1] * 4);
  *puVar1 = *puVar1 & ~*(uint *)(param_1 + 0x4f0);
  FUN_1400ca76e(param_1 + 0x490,param_2);
  puVar1 = (uint *)(*(longlong *)(*param_2 + 0x248) + (longlong)(int)param_2[1] * 4);
  *puVar1 = *puVar1 & ~*(uint *)(param_1 + 0x558);
  FUN_1400ca76e(param_1 + 0x4f8,param_2);
  puVar1 = (uint *)(*(longlong *)(*param_2 + 0x248) + (longlong)(int)param_2[1] * 4);
  *puVar1 = *puVar1 & ~*(uint *)(param_1 + 0x5c0);
  FUN_1400ca76e(param_1 + 0x560,param_2);
  return;
}



// FUNCTION 1400ca76e FUN_1400ca76e body=375 status=ok
// SIG undefined FUN_1400ca76e(void)

void FUN_1400ca76e(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong *puVar7;
  int iVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    iVar4 = *(int *)((longlong)plVar3 +
                    (ulonglong)((int)param_1[9] - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4);
    if (iVar4 != -1) {
      do {
        puVar7 = (ulonglong *)(*param_1 + (longlong)iVar4 * 0x18);
        if (*puVar7 == param_2) {
          if (puVar7 == (ulonglong *)0x0) {
            return;
          }
          if (puVar7 + 1 == (ulonglong *)0x0) {
            return;
          }
          uVar2 = (uint)puVar7[1];
          iVar4 = (int)param_1[0xb];
          iVar5 = ~uVar2 + iVar4;
          if (iVar5 != 0) {
            iVar8 = 1;
            if (iVar5 < 1) {
              iVar8 = iVar5;
            }
            memmove((void *)(param_1[10] + (longlong)(int)uVar2 * 8),
                    (void *)(param_1[10] + (longlong)(iVar4 - iVar8) * 8),(longlong)iVar8 << 3);
            iVar4 = (int)param_1[0xb];
          }
          *(int *)(param_1 + 0xb) = iVar4 + -1;
          FUN_1400ca8e6();
          if ((int)param_1[0xb] <= (int)uVar2) goto LAB_1400ca854;
          if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) goto LAB_1400ca8e1;
          uVar1 = *(ulonglong *)(param_1[10] + (longlong)(int)uVar2 * 8);
          uVar6 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
          uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
          plVar3 = param_1 + 7;
          if ((longlong *)param_1[8] != (longlong *)0x0) {
            plVar3 = (longlong *)param_1[8];
          }
          iVar4 = *(int *)((longlong)plVar3 +
                          (ulonglong)((int)param_1[9] - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
          if (iVar4 == -1) goto LAB_1400ca8e1;
          goto LAB_1400ca8c1;
        }
        iVar4 = (int)puVar7[2];
      } while (iVar4 != -1);
    }
  }
  return;
  while (iVar4 = (int)puVar7[2], iVar4 != -1) {
LAB_1400ca8c1:
    puVar7 = (ulonglong *)(*param_1 + (longlong)iVar4 * 0x18);
    if (*puVar7 == uVar1) goto LAB_1400ca8d1;
  }
LAB_1400ca8e1:
  puVar7 = (ulonglong *)0x0;
LAB_1400ca8d1:
  *(uint *)(puVar7 + 1) = uVar2;
LAB_1400ca854:
  FUN_1400ca97e(param_1,param_2);
  return;
}



// FUNCTION 1400ca8e6 FUN_1400ca8e6 body=64 status=ok
// SIG undefined FUN_1400ca8e6(void)

void FUN_1400ca8e6(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1400ca926(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1400ca926 FUN_1400ca926 body=87 status=ok
// SIG undefined FUN_1400ca926(void)

ulonglong FUN_1400ca926(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if ((((longlong)(int)(param_3 - param_2) & 0x1ffffffffffff800U) == 0) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if ((param_2 == 0) || (0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 1400ca97e FUN_1400ca97e body=155 status=ok
// SIG undefined FUN_1400ca97e(void)

undefined8 FUN_1400ca97e(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar1 * 0x18) == param_2) {
          FUN_1400caa1a(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 1400caa1a FUN_1400caa1a body=91 status=ok
// SIG undefined FUN_1400caa1a(void)

void FUN_1400caa1a(longlong *param_1,int param_2)

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
  lVar1 = *param_1 + (longlong)param_2 * 0x18;
  lVar5 = (longlong)*(int *)(lVar1 + 0x14);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0x10);
  FUN_1400caa76(param_1,param_2,1);
  return;
}



// FUNCTION 1400caa76 FUN_1400caa76 body=136 status=ok
// SIG undefined FUN_1400caa76(void)

void FUN_1400caa76(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x18 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = param_2;
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
      puVar7 = puVar7 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1400caafe FUN_1400caafe body=105 status=ok
// SIG undefined FUN_1400caafe(void)

void FUN_1400caafe(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *param_1;
  lVar4 = (longlong)param_2 * 0x70;
  puVar1 = (undefined8 *)(lVar3 + 0x50 + lVar4);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + 0x40 + lVar4);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + 0x30 + lVar4);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar4);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar4);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar3 + lVar4) = 0;
  ((undefined8 *)(lVar3 + lVar4))[1] = 0;
  *(undefined8 *)(lVar3 + 0x60 + lVar4) = 0;
  iVar2 = (int)param_1[3];
  *(uint *)(param_1 + 3) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x1c) < iVar2 + 1U) {
    FUN_1446f48e2(param_1 + 2,iVar2);
  }
  *(int *)(param_1[2] + (longlong)iVar2 * 4) = param_2;
  return;
}



// FUNCTION 1400cab68 FUN_1400cab68 body=66 status=ok
// SIG undefined FUN_1400cab68(void)

void FUN_1400cab68(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)param_1[3];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_1447de57f(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1400cabaa FUN_1400cabaa body=379 status=ok
// SIG undefined FUN_1400cabaa(void)

void FUN_1400cabaa(longlong param_1,undefined4 param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  if (*(char *)(param_1 + 0x17c9) == '\x01') {
    if (DAT_14cb71f68 != '\0') {
      return;
    }
    FUN_14022492a(param_1);
    return;
  }
  if (*(char *)(param_1 + 0x17ca) == '\0') {
    FUN_1400cad26(param_1);
    if (*(char *)(param_1 + 0x15e0) == '\x01') {
      puVar1 = (uint *)(param_1 + 0x15e4);
      if ((((*(int *)(param_1 + 0x15e8) == 0) || (uVar2 = *puVar1, (int)uVar2 < 0)) ||
          (DAT_14c9647dc <= (int)uVar2)) ||
         (((lVar3 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar3 == 0 ||
           (*(int *)(lVar3 + 0x10) != *(int *)(param_1 + 0x15e8))) ||
          ((*(uint *)(lVar3 + 8) & 0x10200000) != 0)))) {
        lVar3 = *(longlong *)(param_1 + 0x768);
      }
      else {
        lVar3 = FUN_14479d2ce(puVar1);
      }
      if (lVar3 != 0) {
        if (((*(int *)(param_1 + 0x15e8) == 0) || (uVar2 = *puVar1, (int)uVar2 < 0)) ||
           ((DAT_14c9647dc <= (int)uVar2 ||
            (((lVar3 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar3 == 0 ||
              (*(int *)(lVar3 + 0x10) != *(int *)(param_1 + 0x15e8))) ||
             ((*(uint *)(lVar3 + 8) & 0x10200000) != 0)))))) {
          lVar3 = *(longlong *)(param_1 + 0x768);
        }
        else {
          lVar3 = FUN_14479d2ce(puVar1);
        }
        if (*(int *)(lVar3 + 0x6190) < 1) {
          lVar3 = 0;
        }
        else {
          lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x6188) + 0x20);
          if ((DAT_14c950c29 == '\x01') && (lVar3 != 0)) {
            FUN_1456cec3c(lVar3);
          }
        }
        FUN_140ef75a0(param_1,lVar3,0);
      }
    }
    if (DAT_14cb71f68 != '\0') {
      return;
    }
    FUN_14022589e(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 1400cad26 FUN_1400cad26 body=78 status=ok
// SIG undefined FUN_1400cad26(void)

void FUN_1400cad26(longlong *param_1,undefined4 param_2)

{
  FUN_1400cad74();
  FUN_1400cae04(param_1);
  if (DAT_14cb71f68 != '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001400cad71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x3a0))(param_1,param_2);
  return;
}



// FUNCTION 1400cad74 FUN_1400cad74 body=143 status=ok
// SIG undefined FUN_1400cad74(void)

void FUN_1400cad74(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (DAT_14c9a62a8 == 0) {
    FUN_1449292ca(param_1);
  }
  lVar3 = *(longlong *)(param_1 + 0x558);
  if (lVar3 != 0) {
    lVar4 = *(longlong *)(lVar3 + 0x1518);
    plVar5 = *(longlong **)(lVar3 + 0x1520);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    if (((lVar4 != 0) && (*(char *)(lVar4 + 0x780) == '\x01')) &&
       (*(char *)(lVar4 + 0x778) == '\x02')) {
      *(undefined1 *)(param_1 + 0x560) = 1;
    }
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
                    /* WARNING: Could not recover jumptable at 0x0001400cadff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar5 + 0x10))(plVar5);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1400cae04 FUN_1400cae04 body=535 status=ok
// SIG undefined FUN_1400cae04(void)

void FUN_1400cae04(longlong param_1)

{
  longlong *plVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_108 [44];
  undefined4 local_dc;
  longlong *local_d8;
  undefined8 local_d0;
  undefined4 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  longlong local_b0;
  undefined4 *local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined1 local_8c [4];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  int local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (*(char *)(param_1 + 0x628) == '\x01') {
    *(undefined1 *)(param_1 + 0x628) = 0;
    local_68 = 0;
    iVar6 = 0;
    local_60 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_5c = 0xffffffff00000080;
    local_54 = 0;
    local_48 = 0;
    local_40 = 0;
    plVar1 = (longlong *)(param_1 + 0x5d8);
    puVar2 = (undefined4 *)(param_1 + 0x5e8);
    local_b0 = 0x100000000;
    local_a0 = 0xffffffff;
    local_98 = 0;
    local_a8 = puVar2;
    if (*(int *)(param_1 + 0x600) != 0) {
      FUN_1449c0562(&local_b0);
      iVar6 = *(int *)(param_1 + 0x600);
    }
    local_c0 = local_a0;
    uVar4 = local_c0;
    local_b8 = local_98;
    local_b4 = local_94;
    local_d0 = local_b0;
    local_c8 = local_a8;
    local_c0._4_4_ = (int)((ulonglong)local_a0 >> 0x20);
    iVar5 = local_c0._4_4_;
    local_d8 = plVar1;
    if ((local_c0._4_4_ != iVar6) || (local_c0 = uVar4, local_a8 != puVar2)) {
      do {
        local_c0 = uVar4;
        lVar3 = *local_d8;
        local_dc = FUN_144a7b41a(lVar3 + (longlong)iVar5 * 0x38 + 8,0);
        local_a8 = &local_dc;
        local_b0 = lVar3 + (longlong)iVar5 * 0x38;
        FUN_140d12ea6(&local_88,local_8c,&local_b0,0);
        local_c0 = CONCAT44(local_c0._4_4_,(uint)local_c0 & ~local_d0._4_4_);
        FUN_1449c0562(&local_d0);
        iVar5 = local_c0._4_4_;
        uVar4 = local_c0;
      } while (local_d8 != plVar1 || (local_c8 != puVar2 || local_c0._4_4_ != iVar6));
      if (local_54 < (int)uStack_80) {
        FUN_14869eaae(param_1,&local_88);
      }
    }
    local_40 = 0;
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    FUN_14064e7da(&local_88);
    if (*(char *)(param_1 + 0x629) == '\x01') {
      FUN_14869ea3e(param_1);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400cb01c FUN_1400cb01c body=763 status=ok
// SIG undefined FUN_1400cb01c(void)

void FUN_1400cb01c(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4,
                  undefined1 param_5)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_188 [32];
  undefined8 *local_168;
  undefined4 local_160;
  undefined8 *local_158;
  undefined1 *local_150;
  undefined8 **local_148;
  undefined4 local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 *local_d8;
  int local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined4 local_ac;
  undefined1 local_a8;
  undefined4 local_a4;
  undefined2 local_a0;
  longlong local_78;
  undefined8 local_70;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if (((*(int *)(param_1 + 100) == 0) || (uVar1 = *(uint *)(param_1 + 0x60), (int)uVar1 < 0)) ||
     (DAT_14c9647dc <= (int)uVar1)) goto LAB_1400cb287;
  plVar4 = (longlong *)
           ((ulonglong)((uVar1 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
  if (((plVar4 == (longlong *)0x0) || ((int)plVar4[2] != *(int *)(param_1 + 100))) ||
     (((*(uint *)(plVar4 + 1) & 0x10200000) != 0 || (lVar2 = *plVar4, lVar2 == 0))))
  goto LAB_1400cb287;
  local_a4 = 0;
  local_c0 = 0;
  local_a0 = 0x101;
  local_78 = 0;
  local_70 = 0x800000000;
  local_58 = 0;
  local_50 = 0x400000000;
  local_ac = 0;
  local_a8 = 0;
  local_b0 = 1;
  local_b8 = 0x100000001000101;
  local_c8 = DAT_14cb725a8;
  FUN_1447de5b8(&local_c8,param_1);
  local_e8 = param_2[2];
  local_f8 = *param_2;
  uStack_f0 = param_2[1];
  local_118 = *param_3;
  uStack_110 = param_3[1];
  local_108 = param_3[2];
  local_138 = *param_4;
  uStack_134 = param_4[1];
  uStack_130 = param_4[2];
  uStack_12c = param_4[3];
  local_128 = *(undefined8 *)(param_4 + 4);
  local_d8 = (undefined8 *)0x0;
  local_d0 = 0;
  FUN_1446efa72(&local_d8,0,7,0x10);
  local_d0 = 7;
  *local_d8 = &PTR_LAB_14a78e0f0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_d8[2] = lVar5;
  *local_d8 = &PTR_FUN_14b3ef100;
  local_d8[3] = param_1;
  local_d8[6] = local_e8;
  local_d8[4] = local_f8;
  local_d8[5] = uStack_f0;
  local_d8[7] = local_118;
  local_d8[8] = uStack_110;
  local_d8[9] = local_108;
  *(undefined4 *)(local_d8 + 10) = local_138;
  *(undefined4 *)((longlong)local_d8 + 0x54) = uStack_134;
  *(undefined4 *)(local_d8 + 0xb) = uStack_130;
  *(undefined4 *)((longlong)local_d8 + 0x5c) = uStack_12c;
  local_d8[0xc] = local_128;
  *(undefined1 *)(local_d8 + 0xd) = param_5;
  local_150 = &DAT_14cad0f10;
  local_140 = 0;
  local_160 = 0x10;
  local_168 = param_3;
  local_158 = &local_c8;
  local_148 = &local_d8;
  FUN_1447de878(lVar2,&local_f8,1,param_2);
  if (local_d0 == 0) {
LAB_1400cb257:
    if (local_d8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_d8 != (undefined8 *)0x0) {
    (**(code **)*local_d8)(local_d8,0);
    FUN_1446efa72(&local_d8,0,0,0x10);
    local_d0 = 0;
    goto LAB_1400cb257;
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
LAB_1400cb287:
  if ((local_48 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400cb318 FUN_1400cb318 body=1804 status=ok
// SIG undefined FUN_1400cb318(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_1400cb318(int *param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  char *pcVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined1 auVar26 [16];
  int iVar27;
  longlong lVar28;
  void *pvVar29;
  longlong lVar30;
  int iVar31;
  undefined8 *puVar32;
  undefined8 *puVar33;
  longlong lVar34;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar31 = *(int *)(param_2 + 0xc0);
  lVar28 = (longlong)(iVar31 % 2) * 0x60;
  plVar2 = (longlong *)(param_2 + lVar28);
  iVar27 = *(int *)(param_2 + 0x20 + lVar28);
  if (*(int *)(param_2 + 8 + lVar28) * 0x40 <= iVar27) {
    pvVar29 = (void *)FUN_14001cc68(0x5400);
    memset(pvVar29,0,0x5400);
    auVar26 = _DAT_149c360b0;
    lVar28 = (longlong)pvVar29 + 0x88;
    lVar30 = 0;
    do {
      *(undefined8 *)((longlong)pvVar29 + lVar30) = 0;
      *(undefined4 *)((longlong)pvVar29 + lVar30 + 0x2c) = 0;
      *(undefined2 *)((longlong)pvVar29 + lVar30 + 0x30) = 0x101;
      *(undefined8 *)((longlong)pvVar29 + lVar30 + 0x58) = 0;
      *(undefined8 *)((longlong)pvVar29 + lVar30 + 0x60) = 0x800000000;
      *(undefined8 *)((longlong)pvVar29 + lVar30 + 0x78) = 0;
      *(undefined8 *)((longlong)pvVar29 + lVar30 + 0x80) = 0x400000000;
      *(undefined1 *)((longlong)pvVar29 + lVar30 + 0x18) = 0;
      *(undefined4 *)((longlong)pvVar29 + lVar30 + 0x24) = 0;
      puVar4 = (undefined8 *)((longlong)pvVar29 + lVar30 + 8);
      *puVar4 = 0;
      puVar4[1] = 0;
      *(undefined2 *)((longlong)pvVar29 + lVar30 + 0x19) = 1;
      *(undefined1 *)((longlong)pvVar29 + lVar30 + 0x1b) = 0;
      *(undefined1 *)((longlong)pvVar29 + lVar30 + 0x28) = 0;
      *(undefined4 *)((longlong)pvVar29 + lVar30 + 0x1c) = 0x1000000;
      *(undefined1 *)((longlong)pvVar29 + lVar30 + 0x20) = 1;
      uVar7 = _DAT_14cad0ed8;
      puVar4 = (undefined8 *)((longlong)pvVar29 + lVar30 + 0x88);
      *puVar4 = _DAT_14cad0ed0;
      puVar4[1] = uVar7;
      uVar7 = uRam000000014cad0ee8;
      puVar4 = (undefined8 *)((longlong)pvVar29 + lVar30 + 0x98);
      *puVar4 = _DAT_14cad0ee0;
      puVar4[1] = uVar7;
      lVar34 = 0;
      do {
        pcVar3 = (char *)(lVar28 + lVar34);
        cVar13 = pcVar3[5];
        cVar14 = pcVar3[6];
        cVar15 = pcVar3[7];
        cVar16 = pcVar3[0xd];
        cVar17 = pcVar3[0xe];
        cVar18 = pcVar3[0xf];
        bVar8 = *pcVar3 == auVar26[0];
        bVar9 = pcVar3[1] == auVar26[1];
        bVar10 = pcVar3[2] == auVar26[2];
        bVar11 = pcVar3[3] == auVar26[3];
        bVar12 = pcVar3[4] == auVar26[4];
        if ((bool)(~bVar8 & 1)) {
          *(undefined1 *)(lVar28 + lVar34) = 2;
        }
        if ((bool)(~bVar9 & 1)) {
          *(undefined1 *)(lVar28 + 1 + lVar34) = 2;
        }
        if ((bool)(~bVar10 & 1)) {
          *(undefined1 *)(lVar28 + 2 + lVar34) = 2;
        }
        if ((bool)(~bVar11 & 1)) {
          *(undefined1 *)(lVar28 + 3 + lVar34) = 2;
        }
        if ((bool)(~bVar12 & 1)) {
          *(undefined1 *)(lVar28 + 4 + lVar34) = 2;
        }
        if ((bool)(~(cVar13 == auVar26[5]) & 1)) {
          *(undefined1 *)(lVar28 + 5 + lVar34) = 2;
        }
        if ((bool)(~(cVar14 == auVar26[6]) & 1)) {
          *(undefined1 *)(lVar28 + 6 + lVar34) = 2;
        }
        if ((bool)(~(cVar15 == auVar26[7]) & 1)) {
          *(undefined1 *)(lVar28 + 7 + lVar34) = 2;
        }
        if ((bool)(~bVar8 & 1)) {
          *(undefined1 *)(lVar28 + 8 + lVar34) = 2;
        }
        if ((bool)(~bVar9 & 1)) {
          *(undefined1 *)(lVar28 + 9 + lVar34) = 2;
        }
        if ((bool)(~bVar10 & 1)) {
          *(undefined1 *)(lVar28 + 10 + lVar34) = 2;
        }
        if ((bool)(~bVar11 & 1)) {
          *(undefined1 *)(lVar28 + 0xb + lVar34) = 2;
        }
        if ((bool)(~bVar12 & 1)) {
          *(undefined1 *)(lVar28 + 0xc + lVar34) = 2;
        }
        if ((bool)(~(cVar16 == auVar26[0xd]) & 1)) {
          *(undefined1 *)(lVar28 + 0xd + lVar34) = 2;
        }
        if ((bool)(~(cVar17 == auVar26[0xe]) & 1)) {
          *(undefined1 *)(lVar28 + 0xe + lVar34) = 2;
        }
        if ((bool)(~(cVar18 == auVar26[0xf]) & 1)) {
          *(undefined1 *)(lVar28 + 0xf + lVar34) = 2;
        }
        lVar34 = lVar34 + 0x10;
      } while (lVar34 != 0x20);
      *(undefined4 *)((longlong)pvVar29 + lVar30 + 0xa8) = 0;
      *(undefined1 *)((longlong)pvVar29 + lVar30 + 0xac) = 0;
      *(undefined4 *)((longlong)pvVar29 + lVar30 + 0xb0) = 0;
      *(undefined8 *)((longlong)pvVar29 + lVar30 + 0x120) = 0;
      *(undefined4 *)((longlong)pvVar29 + lVar30 + 0x128) = 0;
      lVar34 = lVar30 + 0x150;
      *(undefined8 *)((longlong)pvVar29 + lVar30 + 0x130) = 0;
      *(undefined8 *)((longlong)pvVar29 + lVar30 + 0x138) = 0;
      lVar28 = lVar28 + 0x150;
      lVar30 = lVar34;
    } while (lVar34 != 0x5400);
    iVar31 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar31 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar31 + 1U) {
      FUN_1463b6718(plVar2,iVar31);
    }
    *(void **)(*plVar2 + (longlong)iVar31 * 8) = pvVar29;
    iVar27 = (int)plVar2[4];
    iVar31 = *(int *)(param_2 + 0xc0);
  }
  *param_1 = iVar31;
  iVar31 = iVar27 + 0x3f;
  if (-1 < iVar27) {
    iVar31 = iVar27;
  }
  param_1[1] = iVar27;
  lVar28 = *(longlong *)(*plVar2 + (longlong)(iVar31 >> 6) * 8);
  lVar30 = (longlong)(iVar27 % 0x40) * 0x150;
  puVar4 = (undefined8 *)(lVar28 + lVar30);
  *(undefined8 *)(lVar28 + lVar30) = *param_3;
  uVar19 = *(undefined4 *)((longlong)param_3 + 0xc);
  uVar20 = *(undefined4 *)(param_3 + 2);
  uVar21 = *(undefined4 *)((longlong)param_3 + 0x14);
  uVar7 = param_3[3];
  uVar23 = param_3[4];
  uVar24 = *(undefined8 *)((longlong)param_3 + 0x22);
  uVar25 = *(undefined8 *)((longlong)param_3 + 0x2a);
  puVar5 = (undefined4 *)(lVar28 + 8 + lVar30);
  *puVar5 = *(undefined4 *)(param_3 + 1);
  puVar5[1] = uVar19;
  puVar5[2] = uVar20;
  puVar5[3] = uVar21;
  puVar32 = (undefined8 *)(lVar28 + 0x18 + lVar30);
  *puVar32 = uVar7;
  puVar32[1] = uVar23;
  puVar32 = (undefined8 *)(lVar28 + 0x22 + lVar30);
  *puVar32 = uVar24;
  puVar32[1] = uVar25;
  if (puVar4 == param_3) {
    puVar4[0x17] = param_3[0x17];
    uVar19 = *(undefined4 *)(param_3 + 0x11);
    uVar20 = *(undefined4 *)((longlong)param_3 + 0x8c);
    uVar21 = *(undefined4 *)(param_3 + 0x12);
    uVar22 = *(undefined4 *)((longlong)param_3 + 0x94);
    uVar7 = param_3[0x13];
    uVar23 = param_3[0x14];
    uVar24 = param_3[0x16];
    puVar4[0x15] = param_3[0x15];
    puVar4[0x16] = uVar24;
    puVar4[0x13] = uVar7;
    puVar4[0x14] = uVar23;
    *(undefined4 *)(puVar4 + 0x11) = uVar19;
    *(undefined4 *)((longlong)puVar4 + 0x8c) = uVar20;
    *(undefined4 *)(puVar4 + 0x12) = uVar21;
    *(undefined4 *)((longlong)puVar4 + 0x94) = uVar22;
    puVar4[0x18] = param_3[0x18];
    *(undefined4 *)(puVar4 + 0x19) = *(undefined4 *)(param_3 + 0x19);
    puVar32 = param_3 + 0x1a;
    puVar33 = puVar4 + 0x1a;
    for (lVar28 = 10; lVar28 != 0; lVar28 = lVar28 + -1) {
      *puVar33 = *puVar32;
      puVar32 = puVar32 + 1;
      puVar33 = puVar33 + 1;
    }
    goto LAB_1400cb8da;
  }
  puVar32 = param_3 + 7;
  if ((undefined8 *)param_3[0xb] != (undefined8 *)0x0) {
    puVar32 = (undefined8 *)param_3[0xb];
  }
  iVar31 = *(int *)(param_3 + 0xc);
  *(int *)(puVar4 + 0xc) = iVar31;
  if (iVar31 == 0 && *(int *)((longlong)puVar4 + 100) == 0) {
    *(undefined4 *)((longlong)puVar4 + 100) = 8;
  }
  else {
    pvVar29 = (void *)(lVar28 + lVar30 + 0x38);
    FUN_14470be6c(pvVar29,iVar31);
    if (iVar31 != 0) {
      if ((void *)puVar4[0xb] != (void *)0x0) {
        pvVar29 = (void *)puVar4[0xb];
      }
      memcpy(pvVar29,puVar32,(longlong)iVar31 << 2);
    }
  }
  puVar32 = param_3 + 0xd;
  if ((undefined8 *)param_3[0xf] != (undefined8 *)0x0) {
    puVar32 = (undefined8 *)param_3[0xf];
  }
  iVar31 = *(int *)(param_3 + 0x10);
  *(int *)(puVar4 + 0x10) = iVar31;
  if (iVar31 == 0 && *(int *)((longlong)puVar4 + 0x84) == 0) {
    *(undefined4 *)((longlong)puVar4 + 0x84) = 4;
  }
  else {
    FUN_1447163e6(puVar4 + 0xd,iVar31);
    if (iVar31 != 0) {
      puVar33 = puVar4 + 0xd;
      if ((undefined8 *)puVar4[0xf] != (undefined8 *)0x0) {
        puVar33 = (undefined8 *)puVar4[0xf];
      }
      memcpy(puVar33,puVar32,(longlong)iVar31 << 2);
    }
  }
  puVar4[0x17] = param_3[0x17];
  uVar19 = *(undefined4 *)(param_3 + 0x11);
  uVar20 = *(undefined4 *)((longlong)param_3 + 0x8c);
  uVar21 = *(undefined4 *)(param_3 + 0x12);
  uVar22 = *(undefined4 *)((longlong)param_3 + 0x94);
  uVar7 = param_3[0x13];
  uVar23 = param_3[0x14];
  uVar24 = param_3[0x16];
  puVar4[0x15] = param_3[0x15];
  puVar4[0x16] = uVar24;
  puVar4[0x13] = uVar7;
  puVar4[0x14] = uVar23;
  *(undefined4 *)(puVar4 + 0x11) = uVar19;
  *(undefined4 *)((longlong)puVar4 + 0x8c) = uVar20;
  *(undefined4 *)(puVar4 + 0x12) = uVar21;
  *(undefined4 *)((longlong)puVar4 + 0x94) = uVar22;
  puVar4[0x18] = param_3[0x18];
  *(undefined4 *)(puVar4 + 0x19) = *(undefined4 *)(param_3 + 0x19);
  puVar32 = param_3 + 0x1a;
  puVar33 = puVar4 + 0x1a;
  for (lVar28 = 10; lVar28 != 0; lVar28 = lVar28 + -1) {
    *puVar33 = *puVar32;
    puVar32 = puVar32 + 1;
    puVar33 = puVar33 + 1;
  }
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  plVar6 = (longlong *)param_3[0x24];
  if (plVar6 == (longlong *)0x0 || *(int *)(param_3 + 0x25) == 0) {
    puVar32 = (undefined8 *)0x0;
    iVar31 = 0;
  }
  else {
    (**(code **)(*plVar6 + 0x40))(plVar6,&local_58);
    puVar32 = local_58;
    iVar31 = local_50;
  }
  plVar6 = puVar4 + 0x24;
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  if (*(int *)(puVar4 + 0x25) == 0) {
LAB_1400cb7d6:
    if (*plVar6 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar33 = (undefined8 *)*plVar6;
    if (puVar33 != (undefined8 *)0x0) {
      (**(code **)*puVar33)(puVar33,0);
      FUN_1446efa72(plVar6,0,0,0x10);
      *(undefined4 *)(puVar4 + 0x25) = 0;
      goto LAB_1400cb7d6;
    }
  }
  puVar4[0x24] = puVar32;
  *(int *)(puVar4 + 0x25) = iVar31;
  if (local_50 == 0) {
LAB_1400cb883:
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (undefined8 *)0x0) {
    if (*(code **)*local_58 == FUN_145715146) {
      *local_58 = &PTR_FUN_14b478da0;
      plVar6 = (longlong *)local_58[4];
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))();
        }
      }
    }
    else {
      (**(code **)*local_58)(local_58,0);
    }
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
    goto LAB_1400cb883;
  }
  iVar31 = *(int *)(param_3 + 0x27);
  uVar7 = param_3[0x26];
  *(int *)(puVar4 + 0x27) = iVar31;
  if (iVar31 == 0 && *(int *)((longlong)puVar4 + 0x13c) == 0) {
    *(undefined4 *)((longlong)puVar4 + 0x13c) = 0;
  }
  else {
    FUN_144723f1e(puVar4 + 0x26,iVar31);
    FUN_144723ff3(puVar4[0x26],uVar7,iVar31);
  }
LAB_1400cb8da:
  *(undefined1 *)(puVar4 + 0x28) = *(undefined1 *)(param_3 + 0x28);
  FUN_1404d82c5(param_2,0);
  *(int *)(plVar2 + 4) = (int)plVar2[4] + 1;
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1400cba26 FUN_1400cba26 body=556 status=ok
// SIG undefined FUN_1400cba26(void)

void FUN_1400cba26(longlong param_1,longlong param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  byte bVar6;
  byte bVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  uint *puVar10;
  longlong lVar11;
  longlong *plVar12;
  uint *puVar13;
  longlong lVar14;
  
  if ((param_2 != 0) && ((*(uint *)(param_2 + 8) >> 0x1e & 1) == 0)) {
    uVar2 = *(uint *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x30) = uVar2 + 1;
    if (*(uint *)(param_1 + 0x34) < uVar2 + 1) {
      FUN_147c43a0c((longlong *)(param_1 + 0x28),uVar2);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x28) + (longlong)(int)uVar2 * 8) = param_2;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    FUN_147c2fb0e(param_1 + 0x38);
    lVar14 = (longlong)(int)uVar2 * 0x10;
    plVar12 = (longlong *)(*(longlong *)(param_1 + 0x38) + lVar14);
    *(uint *)(param_2 + 0x698) = *(uint *)(param_2 + 0x698) & 0x80000000 | uVar2 & 0x3fffffff;
    bVar6 = *(byte *)(param_2 + 0x690);
    if ((bVar6 & 8) == 0) {
      FUN_147c01f74();
      bVar6 = *(byte *)(param_2 + 0x690);
    }
    lVar5 = *(longlong *)(param_2 + 0x120);
    if (lVar5 == 0) {
      if ((longlong)*(int *)(param_2 + 0x58) == 0) {
        bVar7 = 0;
      }
      else {
        bVar7 = 2;
        lVar11 = 0;
        do {
          bVar1 = *(byte *)(*(longlong *)(*(longlong *)(param_2 + 0x50) + 8 + lVar11) + 8);
          if (bVar7 < bVar1) {
            bVar7 = bVar1;
          }
          lVar11 = lVar11 + 0x10;
        } while ((longlong)*(int *)(param_2 + 0x58) * 0x10 != lVar11);
      }
    }
    else {
      bVar7 = 5;
      if (*(byte *)(lVar5 + 0x49) < 5) {
        bVar7 = *(byte *)(lVar5 + 0x49);
      }
      bVar7 = bVar7 + 1;
    }
    *(byte *)((longlong)plVar12 + 0xc) = bVar7;
    *(byte *)((longlong)plVar12 + 0xd) = *(byte *)((longlong)plVar12 + 0xd) & 0xf8 | bVar6 >> 2 & 1;
    if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar5);
    }
    *plVar12 = lVar5;
    if ((longlong)*(int *)(param_2 + 0x58) != 0) {
      puVar10 = *(uint **)(param_2 + 0x50);
      puVar13 = puVar10 + (longlong)*(int *)(param_2 + 0x58) * 4;
      do {
        if ((puVar10[1] == 0) || (uVar3 = *puVar10, (int)uVar3 < 0)) {
LAB_1400cbbd3:
          uVar8 = 0;
        }
        else {
          uVar8 = 0;
          if ((int)uVar3 < DAT_14c9647dc) {
            puVar9 = (undefined8 *)
                     ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
            if (((puVar9 == (undefined8 *)0x0) || (*(uint *)(puVar9 + 2) != puVar10[1])) ||
               ((*(uint *)(puVar9 + 1) & 0x10200000) != 0)) goto LAB_1400cbbd3;
            uVar8 = *puVar9;
          }
        }
        FUN_14082bc44((ulonglong)((uint)*(byte *)((longlong)plVar12 + 0xc) * 0x30) +
                      *(longlong *)(param_1 + 0x18),uVar8,*(undefined8 *)(puVar10 + 2));
        puVar10 = puVar10 + 4;
      } while (puVar10 != puVar13);
    }
    plVar12 = (longlong *)
              (*(longlong *)
                (param_1 + 0x48 + (ulonglong)((*(byte *)((longlong)plVar12 + 0xd) & 1) == 0) * 0x10)
              + (ulonglong)*(byte *)((longlong)plVar12 + 0xc) * 0x18);
    lVar5 = *(longlong *)(*plVar12 + 0x38);
    iVar4 = (int)plVar12[2];
    *(uint *)(plVar12 + 2) = iVar4 + 1U;
    if (*(uint *)((longlong)plVar12 + 0x14) < iVar4 + 1U) {
      FUN_1446f48e2(plVar12 + 1,iVar4);
    }
    *(uint *)(plVar12[1] + (longlong)iVar4 * 4) = uVar2;
    *(int *)(lVar5 + 8 + lVar14) = iVar4;
  }
  return;
}



// FUNCTION 1400cbc52 FUN_1400cbc52 body=533 status=ok
// SIG undefined FUN_1400cbc52(void)

void FUN_1400cbc52(longlong param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  uint *puVar8;
  int iVar9;
  longlong lVar10;
  uint *puVar11;
  longlong lVar12;
  longlong lVar13;
  
  lVar13 = (longlong)(int)param_2;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x28) + lVar13 * 8);
  lVar12 = lVar13 * 0x10;
  bVar1 = *(byte *)(*(longlong *)(param_1 + 0x38) + 0xd + lVar12);
  lVar10 = *(longlong *)(param_1 + 0x38) + lVar12;
  if (lVar3 != 0) {
    *(uint *)(lVar3 + 0x698) = *(uint *)(lVar3 + 0x698) & 0x40000000 | 0x3fffffff;
    if ((longlong)*(int *)(lVar3 + 0x58) != 0) {
      puVar8 = *(uint **)(lVar3 + 0x50);
      puVar11 = puVar8 + (longlong)*(int *)(lVar3 + 0x58) * 4;
      do {
        if ((puVar8[1] == 0) || (uVar2 = *puVar8, (int)uVar2 < 0)) {
LAB_1400cbe63:
          uVar6 = 0;
        }
        else {
          uVar6 = 0;
          if ((int)uVar2 < DAT_14c9647dc) {
            puVar7 = (undefined8 *)
                     ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
            if (((puVar7 == (undefined8 *)0x0) || (*(uint *)(puVar7 + 2) != puVar8[1])) ||
               ((*(uint *)(puVar7 + 1) & 0x10200000) != 0)) goto LAB_1400cbe63;
            uVar6 = *puVar7;
          }
        }
        FUN_1401c4d5c((ulonglong)((uint)*(byte *)(lVar10 + 0xc) * 0x30) +
                      *(longlong *)(param_1 + 0x18),uVar6,*(undefined8 *)(puVar8 + 2));
        puVar8 = puVar8 + 4;
      } while (puVar8 != puVar11);
    }
  }
  FUN_1456cb93e((ulonglong)((uint)*(byte *)(lVar10 + 0xc) * 0x18) +
                *(longlong *)
                 (param_1 + 0x48 + (ulonglong)((*(byte *)(lVar10 + 0xd) & 1) == 0) * 0x10),param_2);
  iVar4 = *(int *)(param_1 + 0x30);
  iVar5 = iVar4 + ~param_2;
  if (iVar5 != 0) {
    iVar9 = 1;
    if (iVar5 < 1) {
      iVar9 = iVar5;
    }
    memmove((void *)(*(longlong *)(param_1 + 0x28) + lVar13 * 8),
            (void *)(*(longlong *)(param_1 + 0x28) + (longlong)(iVar4 - iVar9) * 8),
            (longlong)iVar9 << 3);
    iVar4 = *(int *)(param_1 + 0x30);
  }
  *(int *)(param_1 + 0x30) = iVar4 + -1;
  iVar4 = *(int *)(param_1 + 0x40);
  iVar5 = ~param_2 + iVar4;
  if (iVar5 != 0) {
    iVar9 = 1;
    if (iVar5 < 1) {
      iVar9 = iVar5;
    }
    memmove((void *)(*(longlong *)(param_1 + 0x38) + lVar12),
            (void *)((longlong)(iVar4 - iVar9) * 0x10 + *(longlong *)(param_1 + 0x38)),
            (longlong)iVar9 << 4);
    iVar4 = *(int *)(param_1 + 0x40);
  }
  *(int *)(param_1 + 0x40) = iVar4 + -1;
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x30))) {
    lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x28) + lVar13 * 8);
    if (lVar10 != 0) {
      *(uint *)(lVar10 + 0x698) = *(uint *)(lVar10 + 0x698) & 0xc0000000 | param_2 & 0x3fffffff;
    }
    lVar10 = *(longlong *)(param_1 + 0x38);
    *(uint *)(*(longlong *)
               (*(longlong *)
                 (param_1 + 0x48 + (ulonglong)((*(byte *)(lVar10 + 0xd + lVar12) & 1) == 0) * 0x10)
                + 8 + (ulonglong)*(byte *)(lVar10 + 0xc + lVar12) * 0x18) +
             (longlong)*(int *)(lVar10 + 8 + lVar12) * 4) = param_2;
  }
  if ((bVar1 & 4) != 0) {
    FUN_1400cba26(param_1,lVar3);
    return;
  }
  return;
}



// FUNCTION 1400cbe68 FUN_1400cbe68 body=400 status=ok
// SIG undefined FUN_1400cbe68(void)

void FUN_1400cbe68(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined1 auStack_88 [40];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(byte *)(param_1 + 0x693) = *(byte *)(param_1 + 0x693) | 8;
  puVar7 = (undefined8 *)(param_1 + 0x240);
  puVar8 = (undefined8 *)(param_1 + 0x900);
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  *(undefined4 *)(param_1 + 0x850) = 0;
  if (*(int *)(param_1 + 0x854) < 0) {
    FUN_147c0d2e8(param_1 + 0x848,0);
  }
  FUN_147c00f3c(param_1 + 0x848,param_1 + 0x6a0);
  *(undefined8 *)(param_1 + 0x8a8) = *(undefined8 *)(param_1 + 400);
  *(undefined8 *)(param_1 + 0x898) = *(undefined8 *)(param_1 + 0x180);
  *(undefined8 *)(param_1 + 0x8a0) = *(undefined8 *)(param_1 + 0x188);
  *(undefined8 *)(param_1 + 0x888) = *(undefined8 *)(param_1 + 0x170);
  *(undefined8 *)(param_1 + 0x890) = *(undefined8 *)(param_1 + 0x178);
  *(undefined8 *)(param_1 + 0x878) = *(undefined8 *)(param_1 + 0x160);
  *(undefined8 *)(param_1 + 0x880) = *(undefined8 *)(param_1 + 0x168);
  *(undefined4 *)(param_1 + 0x8b0) = *(undefined4 *)(param_1 + 0x710);
  *(undefined4 *)(param_1 + 0x8b4) = *(undefined4 *)(param_1 + 0x714);
  *(undefined4 *)(param_1 + 0x8b8) = *(undefined4 *)(param_1 + 0x718);
  *(undefined4 *)(param_1 + 0x8bc) = *(undefined4 *)(param_1 + 0x71c);
  *(undefined8 *)(param_1 + 0x8c0) = *(undefined8 *)(param_1 + 0x720);
  iVar2 = *(int *)(param_1 + 0x850);
  if ((longlong)iVar2 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x848);
    lVar9 = lVar4 + 0xd8;
    lVar6 = 0;
    do {
      plVar3 = *(longlong **)(lVar4 + 0x50 + lVar6);
      if (plVar3 != (longlong *)0x0) {
        puVar7 = (undefined8 *)(plVar3[0x39] + 0x240);
        if (plVar3[0x39] == 0) {
          puVar7 = &DAT_14c846480;
        }
        lVar1 = lVar9 + lVar6;
        puVar8 = (undefined8 *)(lVar1 + -0x78);
        for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        (**(code **)(*plVar3 + 0x328))(plVar3,&local_60);
        *(undefined8 *)(lVar1 + -8) = local_50;
        *(undefined4 *)(lVar1 + -0x18) = local_60;
        *(undefined4 *)(lVar1 + -0x14) = uStack_5c;
        *(undefined4 *)(lVar1 + -0x10) = uStack_58;
        *(undefined4 *)(lVar1 + -0xc) = uStack_54;
      }
      *(undefined1 *)(lVar9 + lVar6) = 1;
      lVar6 = lVar6 + 0xe0;
    } while ((longlong)iVar2 * 0xe0 - lVar6 != 0);
  }
  *(undefined1 *)(param_1 + 0x694) = 1;
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400cbffa FUN_1400cbffa body=917 status=ok
// SIG undefined FUN_1400cbffa(void)

void FUN_1400cbffa(longlong param_1,float param_2,undefined4 param_3,uint param_4,longlong *param_5)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong *plVar16;
  bool bVar17;
  float fVar18;
  undefined1 auStack_148 [40];
  longlong *local_120;
  longlong local_118;
  undefined4 local_10c;
  longlong local_108;
  undefined1 local_100 [128];
  undefined1 *local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  plVar16 = (longlong *)(ulonglong)param_4;
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_118 = *param_5;
  uVar9 = (ulonglong)param_4;
  local_108 = uVar9 * 3;
  local_80 = (undefined1 *)0x0;
  local_78 = 0x2000000000;
  lVar15 = (longlong)*(int *)(local_118 + 0x10 + uVar9 * 0x18);
  local_10c = param_3;
  if (lVar15 != 0) {
    lVar5 = *(longlong *)(local_118 + 8 + uVar9 * 0x18);
    lVar13 = 0;
    local_120 = plVar16;
    do {
      iVar3 = *(int *)(lVar5 + lVar13);
      lVar10 = (longlong)iVar3 * 0x10;
      if ((*(byte *)(*(longlong *)(param_1 + 0x38) + 0xd + lVar10) & 2) == 0) {
        plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x28) + (longlong)iVar3 * 8);
        plVar14 = (longlong *)(*(longlong *)(param_1 + 0x38) + lVar10);
        if ((((*plVar14 != 0) && (lVar10 = *(longlong *)(*plVar14 + 0x60), lVar10 != 0)) &&
            ((int)plVar16 != 6)) && ((*(byte *)(lVar10 + 1) & 0xfe) == 2)) {
          puVar12 = *(undefined8 **)(lVar10 + 0x10);
          if (*(byte *)(lVar10 + 1) == 3) {
            puVar12 = (undefined8 *)*puVar12;
          }
          bVar2 = DAT_000000a0;
          if (puVar12 != (undefined8 *)0x0) {
            LOCK();
            *(int *)(puVar12 + 1) = *(int *)(puVar12 + 1) + 1;
            UNLOCK();
            bVar2 = *(byte *)(puVar12 + 0x14);
            LOCK();
            piVar1 = (int *)(puVar12 + 1);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)*puVar12)(puVar12,1);
            }
          }
          uVar9 = local_78;
          plVar16 = local_120;
          if ((bVar2 & 1) == 0) {
            lVar10 = (longlong)(int)local_78;
            uVar8 = (int)local_78 + 1;
            local_78 = CONCAT44(local_78._4_4_,uVar8);
            if (local_78._4_4_ < uVar8) {
              FUN_1456cba76(local_100,uVar9 & 0xffffffff);
            }
            puVar11 = local_80;
            if (local_80 == (undefined1 *)0x0) {
              puVar11 = local_100;
            }
            *(int *)(puVar11 + lVar10 * 4) = iVar3;
            goto LAB_1400cc167;
          }
        }
        if ((plVar6[0x16] == 0) && (lVar10 = FUN_1448abda6(plVar6), lVar10 == 0)) {
          *(uint *)(plVar6 + 0xd3) = *(uint *)(plVar6 + 0xd3) & 0x3fffffff | 0x80000000;
          *(byte *)((longlong)plVar14 + 0xd) = *(byte *)((longlong)plVar14 + 0xd) & 0xf9 | 2;
        }
        else {
          cVar7 = FUN_1456cb7ec(plVar6);
          if (cVar7 == '\0') {
            fVar18 = 1.0;
            if (plVar6[0x15] != 0) {
              fVar18 = *(float *)(plVar6[0x15] + 0x74);
            }
            (**(code **)(*plVar6 + 0x3a0))(plVar6,fVar18 * param_2,local_10c,0);
            FUN_1435c3640(plVar6);
            FUN_1435c3904(plVar6);
          }
        }
      }
LAB_1400cc167:
      param_4 = (uint)plVar16;
      lVar13 = lVar13 + 4;
    } while (lVar15 * 4 != lVar13);
  }
  if ((param_4 != 6) && (0 < (int)local_78)) {
    plVar16 = (longlong *)((ulonglong)(param_4 + 1) * 0x18 + *param_5);
    local_118 = local_118 + local_108 * 8;
    local_120 = plVar16 + 1;
    lVar15 = 0;
    do {
      puVar11 = local_80;
      if (local_80 == (undefined1 *)0x0) {
        puVar11 = local_100;
      }
      FUN_1456cb93e(local_118,*(undefined4 *)(puVar11 + lVar15 * 4));
      puVar11 = local_80;
      if (local_80 == (undefined1 *)0x0) {
        puVar11 = local_100;
      }
      iVar3 = *(int *)(puVar11 + lVar15 * 4);
      lVar5 = *(longlong *)(*plVar16 + 0x38);
      iVar4 = (int)plVar16[2];
      *(uint *)(plVar16 + 2) = iVar4 + 1U;
      if (*(uint *)((longlong)plVar16 + 0x14) < iVar4 + 1U) {
        FUN_1446f48e2(local_120,iVar4);
      }
      *(int *)(*local_120 + (longlong)iVar4 * 4) = iVar3;
      *(int *)(lVar5 + 8 + (longlong)iVar3 * 0x10) = iVar4;
      puVar11 = local_80;
      if (local_80 == (undefined1 *)0x0) {
        puVar11 = local_100;
      }
      *(char *)(*(longlong *)(param_1 + 0x38) + 0xc +
               (longlong)*(int *)(puVar11 + lVar15 * 4) * 0x10) = (char)(param_4 + 1);
      lVar15 = lVar15 + 1;
    } while (lVar15 < (int)local_78);
  }
  bVar17 = (longlong)local_78 < 0;
  local_78 = local_78 & 0xffffffff00000000;
  if (bVar17) {
    FUN_1400cc56e(local_100,0);
  }
  if (local_80 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1400cc390 FUN_1400cc390 body=346 status=ok
// SIG undefined FUN_1400cc390(void)

void FUN_1400cc390(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = *(uint *)(param_1 + 0x28);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar2);
  }
  if (uVar2 < 9) {
    uVar6 = 8;
  }
  else {
    lVar3 = (longlong)(int)uVar2;
    if (8 < *(uint *)(param_1 + 0x2c)) {
      lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
    }
    uVar4 = lVar3 * 4;
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
              if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_1400cc40d;
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
LAB_1400cc40d:
    uVar6 = 0x7fffffff;
    if ((int)uVar2 <= (int)(uVar4 >> 2)) {
      uVar6 = uVar4 >> 2 & 0xffffffff;
    }
  }
  *(int *)(param_1 + 0x2c) = (int)uVar6;
  FUN_1400cc4ea(param_1,param_2,uVar6,4);
  return;
}



// FUNCTION 1400cc4ea FUN_1400cc4ea body=132 status=ok
// SIG undefined FUN_1400cc4ea(void)

void FUN_1400cc4ea(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x20);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x20,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x20),param_1,(longlong)param_2 << 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x20,param_2,param_3,param_4);
  return;
}



// FUNCTION 1400cc56e FUN_1400cc56e body=342 status=ok
// SIG undefined FUN_1400cc56e(void)

void FUN_1400cc56e(longlong param_1,uint param_2)

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
  else if (param_2 < 0x21) {
    uVar5 = 0x20;
  }
  else {
    uVar3 = (longlong)(int)param_2 * 4;
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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1400cc5e1;
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
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,0);
      }
    }
LAB_1400cc5e1:
    uVar5 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
  }
  if ((int)uVar5 == *(int *)(param_1 + 0x8c)) {
    return;
  }
  *(int *)(param_1 + 0x8c) = (int)uVar5;
  FUN_1400cc6c4(param_1,*(undefined4 *)(param_1 + 0x88),uVar5,4);
  return;
}



// FUNCTION 1400cc6c4 FUN_1400cc6c4 body=141 status=ok
// SIG undefined FUN_1400cc6c4(void)

void FUN_1400cc6c4(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x80);
  if ((uint)param_3 < 0x21) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x80,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 << 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x80,param_2,param_3,param_4);
  return;
}



// FUNCTION 1400cc752 FUN_1400cc752 body=23 status=ok
// SIG undefined FUN_1400cc752(void)

undefined1 FUN_1400cc752(longlong param_1)

{
  FUN_1447e031c(param_1 + 0x8a8);
  return 1;
}



// FUNCTION 1400cc76a FUN_1400cc76a body=89 status=ok
// SIG undefined FUN_1400cc76a(void)

longlong FUN_1400cc76a(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x108);
  *(uint *)(param_1 + 0x108) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x10c) < iVar1 + 1U) {
    FUN_14091a6d6(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x100);
  if (*(longlong *)(param_1 + 0x100) == 0) {
    lVar2 = param_1;
  }
  lVar2 = (longlong)iVar1 * 0x20 + lVar2;
  FUN_1447e1577(lVar2,1);
  return lVar2;
}



// FUNCTION 1400cc7c4 FUN_1400cc7c4 body=89 status=ok
// SIG undefined FUN_1400cc7c4(void)

longlong FUN_1400cc7c4(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x208);
  *(uint *)(param_1 + 0x208) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x20c) < iVar1 + 1U) {
    FUN_14091a862(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x200);
  if (*(longlong *)(param_1 + 0x200) == 0) {
    lVar2 = param_1;
  }
  lVar2 = (longlong)iVar1 * 0x40 + lVar2;
  FUN_1447e1596(lVar2,1);
  return lVar2;
}



// FUNCTION 1400cc81e FUN_1400cc81e body=90 status=ok
// SIG undefined FUN_1400cc81e(void)

longlong FUN_1400cc81e(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 200);
  *(uint *)(param_1 + 200) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0xcc) < iVar1 + 1U) {
    FUN_14099c088(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0xc0);
  if (*(longlong *)(param_1 + 0xc0) == 0) {
    lVar2 = param_1;
  }
  lVar2 = lVar2 + (longlong)iVar1 * 0x18;
  FUN_1447e15a9(lVar2,1);
  return lVar2;
}



// FUNCTION 1400cc878 FUN_1400cc878 body=61 status=ok
// SIG undefined FUN_1400cc878(void)

void FUN_1400cc878(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x200);
  if (*(longlong *)(param_1 + 0x200) == 0) {
    lVar1 = param_1;
  }
  FUN_1447e15bf(lVar1,*(undefined4 *)(param_1 + 0x208));
  if (*(longlong *)(param_1 + 0x200) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1400cc8b6 FUN_1400cc8b6 body=61 status=ok
// SIG undefined FUN_1400cc8b6(void)

void FUN_1400cc8b6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x100);
  if (*(longlong *)(param_1 + 0x100) == 0) {
    lVar1 = param_1;
  }
  FUN_1447e163f(lVar1,*(undefined4 *)(param_1 + 0x108));
  if (*(longlong *)(param_1 + 0x100) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1400cc8f4 FUN_1400cc8f4 body=61 status=ok
// SIG undefined FUN_1400cc8f4(void)

void FUN_1400cc8f4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xc0);
  if (*(longlong *)(param_1 + 0xc0) == 0) {
    lVar1 = param_1;
  }
  FUN_1447e1640(lVar1,*(undefined4 *)(param_1 + 200));
  if (*(longlong *)(param_1 + 0xc0) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1400cc932 FUN_1400cc932 body=514 status=ok
// SIG undefined FUN_1400cc932(void)

void FUN_1400cc932(longlong *param_1,longlong *param_2,undefined4 *param_3,longlong *param_4,
                  undefined8 *param_5)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  float *pfVar6;
  void *_Src;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  longlong lStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar4 = (undefined8 *)*param_5;
  plVar5 = (longlong *)param_5[1];
  local_90 = param_5[2];
  FUN_142255df0(*(undefined8 *)*param_1,*puVar4,*(undefined4 *)*param_4,
                *(undefined4 *)((undefined8 *)*param_1 + 1));
  if (1 < (int)param_1[1]) {
    lVar11 = 1;
    lVar9 = 8;
    do {
      FUN_142255d50(*(undefined8 *)(*param_1 + -8 + lVar9 * 4),*puVar4,
                    *(undefined4 *)(*param_4 + lVar11 * 4),*(undefined4 *)(*param_1 + lVar9 * 4));
      lVar11 = lVar11 + 1;
      lVar9 = lVar9 + 6;
    } while (lVar11 < (int)param_1[1]);
    if (1 < (int)param_1[1]) {
      FUN_142400cf0(*puVar4);
    }
  }
  uVar2 = *(uint *)(param_2 + 1);
  if (0 < (int)uVar2) {
    pfVar6 = (float *)*param_4;
    param_2 = (longlong *)*param_2;
    fVar1 = *pfVar6;
    if (plVar5 != param_2) {
      iVar3 = (int)param_2[1];
      _Src = (void *)*param_2;
      *(int *)(plVar5 + 1) = iVar3;
      if (iVar3 == 0 && *(int *)((longlong)plVar5 + 0xc) == 0) {
        *(undefined4 *)((longlong)plVar5 + 0xc) = 0;
      }
      else {
        FUN_14471726c(plVar5);
        if (iVar3 != 0) {
          memcpy((void *)*plVar5,_Src,(longlong)iVar3 << 4);
        }
      }
    }
    *(char *)(plVar5 + 2) = (char)param_2[2];
    if ((1e-08 < ABS(fVar1 + -1.0)) && (lVar9 = plVar5[1], (longlong)(int)lVar9 != 0)) {
      lVar11 = *plVar5;
      lVar7 = 0;
      do {
        *(float *)(lVar11 + 8 + lVar7) = *(float *)(lVar11 + 8 + lVar7) * fVar1;
        lVar7 = lVar7 + 0x10;
      } while ((longlong)(int)lVar9 * 0x10 != lVar7);
    }
    if (uVar2 != 1) {
      uVar10 = 2;
      if (2 < (int)uVar2) {
        uVar10 = (ulonglong)uVar2;
      }
      uVar8 = 1;
      do {
        param_2 = param_2 + 4;
        fVar1 = pfVar6[uVar8];
        if (1e-05 < fVar1) {
          FUN_144716836(plVar5,param_2,fVar1);
        }
        uVar8 = uVar8 + 1;
      } while (uVar10 != uVar8);
    }
  }
  if (0 < (int)param_3[2]) {
    local_78 = *param_4;
    lStack_70 = param_4[1];
    local_88 = *param_3;
    uStack_84 = param_3[1];
    uStack_80 = param_3[2];
    uStack_7c = param_3[3];
    FUN_1433ea500(&local_88,&local_78,local_90);
  }
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400ccb36 FUN_1400ccb36 body=273 status=ok
// SIG undefined FUN_1400ccb36(void)

void FUN_1400ccb36(longlong param_1,int param_2,longlong *param_3)

{
  short sVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  undefined1 local_30;
  undefined8 local_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = *param_3;
  lVar6 = (longlong)param_2 * 0x10;
  sVar1 = *(short *)(*(longlong *)(param_1 + 0x48) + 8 + lVar6);
  plVar5 = (longlong *)(*(longlong *)(param_1 + 0x48) + lVar6);
  if (((sVar1 == -1) || (*plVar5 == -1)) || (sVar1 != *(short *)(lVar3 + 0x5d8))) {
    *(undefined2 *)(plVar5 + 1) = *(undefined2 *)(lVar3 + 0x5d8);
    *plVar5 = *(longlong *)(lVar3 + 0x5d0);
    *(undefined2 *)((longlong)plVar5 + 10) = *(undefined2 *)(lVar3 + 0x5da);
    local_40[1] = 0;
    local_30 = 1;
    local_2c = 0xffffffffffffffff;
    plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x20) + lVar6);
    local_40[0] = lVar3;
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x18))(plVar5,local_40);
    }
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0x20) + lVar6) == 0) {
    if ((char)param_3[0x13] == '\x01') {
      FUN_1433edd58(param_3 + 4);
    }
    else {
      FUN_1448859f0(param_3 + 4,param_3[6]);
    }
  }
  else {
    puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x20) + lVar6);
    uVar2 = *(undefined4 *)(puVar4 + 1);
    *(undefined4 *)(param_3 + 3) = *(undefined4 *)((longlong)param_3 + 0x14);
    *(undefined4 *)((longlong)param_3 + 0x14) = uVar2;
    plVar5 = (longlong *)*puVar4;
    (**(code **)(*plVar5 + 0x28))(plVar5,param_3);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400ccc48 FUN_1400ccc48 body=770 status=ok
// SIG undefined FUN_1400ccc48(void)

void FUN_1400ccc48(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88 [12];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar1 = *(undefined1 *)(param_1 + 0x1c);
  switch(uVar1) {
  case 0:
  case 2:
  case 5:
  case 6:
  case 7:
switchD_1400ccc8f_caseD_42:
    puVar4 = (undefined8 *)param_3[1];
    puVar5 = local_88;
    for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    uVar3 = *(undefined8 *)(*(longlong *)*param_3 + 0x10);
    break;
  case 1:
    puVar4 = (undefined8 *)param_3[1];
    puVar5 = local_88;
    for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    uVar3 = *(undefined8 *)(*(longlong *)*param_3 + 0x10);
LAB_1400cce27:
    uStack_90 = 0;
    local_98 = 0;
    FUN_1405c9af5(uVar3,local_88,param_1);
    goto LAB_1400cce8e;
  case 3:
    puVar4 = (undefined8 *)param_3[1];
    puVar5 = local_88;
    for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    uVar3 = *(undefined8 *)(*(longlong *)*param_3 + 0x10);
LAB_1400cce58:
    uStack_90 = 0;
    local_98 = 0;
    FUN_144945691(uVar3,local_88,param_1);
    goto LAB_1400cce8e;
  case 4:
    FUN_1447dc19e(param_1 + 0x30,local_88,param_2);
    FUN_1400ccc48(*(undefined8 *)(param_1 + 0x20),local_88,param_3);
    goto LAB_1400cce8e;
  case 8:
    puVar4 = (undefined8 *)param_3[1];
    puVar5 = local_88;
    for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    uVar3 = *(undefined8 *)(*(longlong *)*param_3 + 0x10);
LAB_1400cce89:
    uStack_90 = 0;
    local_98 = 0;
    FUN_140ea601d(uVar3,local_88,param_1);
    goto LAB_1400cce8e;
  default:
    switch(uVar1) {
    case 0x40:
      param_1 = *(longlong *)(param_1 + 0x28);
      puVar4 = (undefined8 *)param_3[1];
      puVar5 = local_88;
      for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      uVar3 = *(undefined8 *)(*(longlong *)*param_3 + 0x10);
      break;
    case 0x41:
      param_1 = *(longlong *)(param_1 + 0x28);
      puVar4 = (undefined8 *)param_3[1];
      puVar5 = local_88;
      for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      uVar3 = *(undefined8 *)(*(longlong *)*param_3 + 0x10);
      goto LAB_1400cce27;
    case 0x42:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
      goto switchD_1400ccc8f_caseD_42;
    case 0x43:
      param_1 = *(longlong *)(param_1 + 0x28);
      puVar4 = (undefined8 *)param_3[1];
      puVar5 = local_88;
      for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      uVar3 = *(undefined8 *)(*(longlong *)*param_3 + 0x10);
      goto LAB_1400cce58;
    case 0x48:
      param_1 = *(longlong *)(param_1 + 0x28);
      puVar4 = (undefined8 *)param_3[1];
      puVar5 = local_88;
      for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      uVar3 = *(undefined8 *)(*(longlong *)*param_3 + 0x10);
      goto LAB_1400cce89;
    default:
      switch(uVar1) {
      case 0x80:
        puVar4 = (undefined8 *)param_3[1];
        puVar5 = local_88;
        for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        local_98 = 0;
        uStack_90 = 0;
        FUN_146cd55a9(*(undefined8 *)(*(longlong *)*param_3 + 0x10),local_88,param_1);
        break;
      case 0x81:
        puVar4 = (undefined8 *)param_3[1];
        puVar5 = local_88;
        for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        local_98 = 0;
        uStack_90 = 0;
        FUN_146cd93af(*(undefined8 *)(*(longlong *)*param_3 + 0x10),local_88,param_1);
        break;
      default:
        goto switchD_1400ccc8f_caseD_42;
      case 0x83:
        puVar4 = (undefined8 *)param_3[1];
        puVar5 = local_88;
        for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        local_98 = 0;
        uStack_90 = 0;
        FUN_146cdd0cb(*(undefined8 *)(*(longlong *)*param_3 + 0x10),local_88,param_1);
        break;
      case 0x88:
        puVar4 = (undefined8 *)param_3[1];
        puVar5 = local_88;
        for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        local_98 = 0;
        uStack_90 = 0;
        FUN_140a08058(*(undefined8 *)(*(longlong *)*param_3 + 0x10),local_88,param_1);
      }
      goto LAB_1400cce8e;
    }
  }
  uStack_90 = 0;
  local_98 = 0;
  FUN_140682465(uVar3,local_88,param_1);
LAB_1400cce8e:
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400ccf58 FUN_1400ccf58 body=89 status=ok
// SIG undefined FUN_1400ccf58(void)

void FUN_1400ccf58(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if (*(longlong *)(param_1 + 0xa8) == 0) {
    lVar1 = param_1;
  }
  FUN_1446fc26f(lVar1,*(undefined4 *)(param_1 + 0xb0));
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if (*(int *)(param_1 + 0xb4) != param_2) {
    FUN_1400cd00e(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 1400ccfb2 FUN_1400ccfb2 body=91 status=ok
// SIG undefined FUN_1400ccfb2(void)

int FUN_1400ccfb2(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0xb0);
  *(uint *)(param_1 + 0xb0) = iVar1 + param_2;
  if ((uint)(*(int *)(param_1 + 0xb4) - iVar1) < param_2) {
    FUN_1400cd0f8(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0xa8);
  if (*(longlong *)(param_1 + 0xa8) == 0) {
    lVar2 = param_1;
  }
  FUN_14470b9e0((longlong)iVar1 * 0xa8 + lVar2,param_2);
  return iVar1;
}



// FUNCTION 1400cd00e FUN_1400cd00e body=233 status=ok
// SIG undefined FUN_1400cd00e(void)

void FUN_1400cd00e(void *param_1,uint param_2)

{
  void *_Src;
  undefined1 auVar1 [16];
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = param_2;
  if (1 < param_2) {
    uVar2 = FUN_144a3809e((longlong)(int)param_2 * 0xa8,0);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 3;
    uVar3 = SUB164(auVar1 * ZEXT816(0xc30c30c30c30c31),8);
    uVar5 = 0x7fffffff;
    if ((int)param_2 <= (int)uVar3) {
      uVar5 = uVar3;
    }
  }
  if (uVar5 != *(uint *)((longlong)param_1 + 0xb4)) {
    *(uint *)((longlong)param_1 + 0xb4) = uVar5;
    iVar4 = *(int *)((longlong)param_1 + 0xb0);
    _Src = *(void **)((longlong)param_1 + 0xa8);
    if (uVar5 < 2) {
      if (_Src == (void *)0x0) {
        return;
      }
      memmove(param_1,_Src,(longlong)iVar4 * 0xa8);
      iVar4 = 0;
      uVar5 = 0;
    }
    else if (_Src == (void *)0x0) {
      FUN_1446efa72((longlong)param_1 + 0xa8,0,uVar5,0xa8);
      memmove(*(void **)((longlong)param_1 + 0xa8),param_1,(longlong)iVar4 * 0xa8);
      return;
    }
    FUN_1446efa72((longlong)param_1 + 0xa8,iVar4,uVar5,0xa8);
    return;
  }
  return;
}



// FUNCTION 1400cd0f8 FUN_1400cd0f8 body=580 status=ok
// SIG undefined FUN_1400cd0f8(void)

void FUN_1400cd0f8(void *param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  void *_Src;
  undefined1 auVar4 [16];
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  uVar3 = *(uint *)((longlong)param_1 + 0xb0);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (uVar3 < 2) {
    *(undefined4 *)((longlong)param_1 + 0xb4) = 1;
    _Src = *(void **)((longlong)param_1 + 0xa8);
joined_r0x0001400cd1e9:
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0xa8);
    param_2 = 0;
    uVar6 = 0;
  }
  else {
    if (*(uint *)((longlong)param_1 + 0xb4) < 2) {
      uVar8 = 4;
      if (4 < uVar3) {
        uVar8 = uVar3;
      }
      lVar5 = (longlong)(int)uVar8;
    }
    else {
      lVar5 = ((ulonglong)((longlong)(int)uVar3 * 3) >> 3) + (longlong)(int)uVar3 + 0x10;
    }
    uVar6 = lVar5 * 0xa8;
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
              if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_1400cd193;
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
LAB_1400cd193:
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar6 >> 3;
    uVar6 = (uVar6 >> 3) / 0x15;
    uVar8 = SUB164(auVar4 * ZEXT816(0xc30c30c30c30c31),8);
    if ((int)uVar8 < (int)uVar3) {
      *(undefined4 *)((longlong)param_1 + 0xb4) = 0x7fffffff;
      uVar6 = 0x7fffffff;
      _Src = *(void **)((longlong)param_1 + 0xa8);
    }
    else {
      *(uint *)((longlong)param_1 + 0xb4) = uVar8;
      _Src = *(void **)((longlong)param_1 + 0xa8);
      if (uVar8 < 2) goto joined_r0x0001400cd1e9;
    }
    if (_Src == (void *)0x0) {
      FUN_1446efa72((longlong)param_1 + 0xa8,0,uVar6,0xa8);
      memmove(*(void **)((longlong)param_1 + 0xa8),param_1,(longlong)param_2 * 0xa8);
      return;
    }
  }
  FUN_1446efa72((longlong)param_1 + 0xa8,param_2,uVar6,0xa8);
  return;
}



// FUNCTION 1400cd33c FUN_1400cd33c body=606 status=ok
// SIG undefined FUN_1400cd33c(void)

char FUN_1400cd33c(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 uVar2;
  char cVar3;
  undefined8 unaff_RBX;
  undefined7 uVar4;
  
  cVar1 = (**(code **)(*param_1 + 0x28))();
  if ((cVar1 != '\0') &&
     ((*(char *)((longlong)param_1 + 0xb4) == '\0' ||
      (*(char *)((longlong)param_1 + 0xcd) == '\x01')))) {
    *(undefined1 *)((longlong)param_1 + 0xb4) = 0;
    cVar1 = (**(code **)(*param_1 + 0x80))(param_1,param_2,param_1[0x15],(int)param_1[0x16]);
    if (cVar1 == '\0') {
      *(undefined1 *)((longlong)param_1 + 0xb5) = 2;
      cVar1 = (**(code **)(*param_1 + 0xc0))(param_1,param_2);
      if (cVar1 == '\0') {
        *(undefined1 *)((longlong)param_1 + 0xb4) = 3;
      }
    }
    else {
      if (cVar1 != '\x02') {
        *(undefined1 *)((longlong)param_1 + 0xb4) = 2;
        return '\0';
      }
      FUN_14097ea48(param_1,param_2,param_1[0x15],(int)param_1[0x16]);
    }
    *(undefined1 *)((longlong)param_1 + 0xcd) = 0;
  }
  if (*(char *)((longlong)param_1 + 0xb4) != '\x02') goto LAB_1400cd570;
  cVar1 = (**(code **)(*param_1 + 0x28))(param_1);
  uVar2 = 4;
  if (cVar1 == '\0') {
LAB_1400cd420:
    *(undefined1 *)((longlong)param_1 + 0xb5) = uVar2;
    cVar1 = (**(code **)(*param_1 + 0xc0))(param_1,param_2);
  }
  else {
    cVar1 = (**(code **)(*param_1 + 0xc0))(param_1,param_2);
    if (cVar1 == '\x01') {
      uVar2 = (**(code **)(*param_1 + 0xa0))(param_1,param_2);
      goto LAB_1400cd420;
    }
  }
  uVar4 = (undefined7)((ulonglong)unaff_RBX >> 8);
  if (cVar1 == '\0') {
    cVar1 = *(char *)((longlong)param_1 + 0xb5);
    if ((cVar1 != '\x04') && (cVar3 = (**(code **)(*param_1 + 0x28))(param_1), cVar3 != '\0')) {
      cVar1 = (**(code **)(*param_1 + 0xa8))(param_1,param_2,CONCAT71(uVar4,cVar1) & 0xffffffff);
      if (cVar1 == '\0') goto LAB_1400cd570;
    }
    FUN_14065d9ca(param_1,param_2,*(undefined1 *)((longlong)param_1 + 0xb5));
    goto LAB_1400cd570;
  }
  if (cVar1 != '\x02') goto LAB_1400cd570;
  *(undefined1 *)((longlong)param_1 + 0xcd) = 1;
  cVar1 = *(char *)((longlong)param_1 + 0xb5);
  if ((cVar1 == '\x04') || (cVar3 = (**(code **)(*param_1 + 0x28))(param_1), cVar3 == '\0')) {
LAB_1400cd482:
    cVar1 = FUN_14065d9ca(param_1,param_2,*(undefined1 *)((longlong)param_1 + 0xb5));
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0xd0))(param_1);
      cVar1 = (**(code **)(*param_1 + 0x80))(param_1,param_2,param_1[0x15],(int)param_1[0x16]);
      if (cVar1 == '\0') {
        *(undefined1 *)((longlong)param_1 + 0xb5) = 2;
        cVar1 = (**(code **)(*param_1 + 0xc0))(param_1,param_2);
        if (cVar1 == '\0') {
          *(undefined1 *)((longlong)param_1 + 0xb4) = 3;
        }
      }
      else {
        if (cVar1 != '\x02') {
          *(undefined1 *)((longlong)param_1 + 0xb4) = 2;
          goto LAB_1400cd570;
        }
        cVar1 = FUN_14097ea48(param_1,param_2,param_1[0x15],(int)param_1[0x16]);
        if (cVar1 != '\0') {
          *(undefined1 *)((longlong)param_1 + 0xb4) = 2;
        }
      }
    }
  }
  else {
    cVar1 = (**(code **)(*param_1 + 0xa8))(param_1,param_2,CONCAT71(uVar4,cVar1) & 0xffffffff);
    if (cVar1 != '\0') goto LAB_1400cd482;
  }
  *(undefined1 *)((longlong)param_1 + 0xcd) = 0;
LAB_1400cd570:
  if ((*(char *)((longlong)param_1 + 0xb5) != '\x02') ||
     (cVar1 = '\x01', *(char *)(param_1[9] + 0x73) == '\0')) {
    cVar1 = *(char *)((longlong)param_1 + 0xb5);
  }
  return cVar1;
}



// FUNCTION 1400cd59e FUN_1400cd59e body=1110 status=ok
// SIG undefined FUN_1400cd59e(void)

undefined8 FUN_1400cd59e(longlong param_1)

{
  longlong *plVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined *puVar8;
  int *piVar9;
  int iVar10;
  longlong lVar11;
  int *piVar12;
  longlong *plVar13;
  longlong lVar14;
  bool bVar15;
  bool bVar16;
  undefined1 auStack_d8 [32];
  char local_b8 [8];
  longlong local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  int local_90;
  int local_88;
  undefined4 uStack_84;
  ushort local_70;
  byte local_68;
  int local_60;
  undefined4 uStack_5c;
  ushort local_48;
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(char *)(*(longlong *)(param_1 + 0x48) + 0x146) == '\x01') {
    lVar7 = FUN_144860928();
    lVar14 = *(longlong *)(param_1 + 0x40);
    if (lVar14 == 0) {
      lVar11 = 0;
      local_b0 = 0;
LAB_1400cd903:
      local_a8 = (longlong *)0x0;
      bVar15 = true;
    }
    else {
      if (*(int *)(lVar14 + 0x4c) == 0) {
LAB_1400cd7bb:
        lVar11 = 0;
      }
      else {
        uVar5 = *(uint *)(lVar14 + 0x48);
        lVar11 = 0;
        if ((-1 < (int)uVar5) && ((int)uVar5 < DAT_14c9647dc)) {
          plVar13 = (longlong *)
                    ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
          if ((plVar13 == (longlong *)0x0) ||
             (((int)plVar13[2] != *(int *)(lVar14 + 0x4c) ||
              ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)))) goto LAB_1400cd7bb;
          lVar11 = *plVar13;
        }
      }
      plVar13 = *(longlong **)(lVar14 + 0x118);
      local_b0 = param_1;
      if (plVar13 == (longlong *)0x0) goto LAB_1400cd903;
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)plVar13 + 0xc) = *(int *)((longlong)plVar13 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar13 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar9 = (int *)((longlong)plVar13 + 0xc);
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (*piVar9 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
      LOCK();
      *(int *)((longlong)plVar13 + 0xc) = *(int *)((longlong)plVar13 + 0xc) + 1;
      UNLOCK();
      bVar15 = false;
      local_a8 = plVar13;
    }
    plVar13 = local_a8;
    local_90 = 0;
    local_b8[0] = '\x03';
    local_a0._0_4_ = 0;
    if (lVar11 == 0) {
      iVar4 = 0;
      uVar5 = (uint)local_a0;
    }
    else {
      uVar5 = *(uint *)(lVar11 + 0xc);
      local_a0 = (ulonglong)uVar5;
      if ((int)uVar5 < DAT_14c9647dc) {
        lVar14 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
      }
      else {
        lVar14 = 0;
      }
      iVar4 = *(int *)(lVar14 + 0x10);
      if (*(int *)(lVar14 + 0x10) == 0) {
        LOCK();
        iVar4 = DAT_14c964868 + 1;
        UNLOCK();
        iVar10 = DAT_14c964868 + 1;
        bVar16 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar4;
        if (bVar16) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar10);
        }
        LOCK();
        iVar4 = *(int *)(lVar14 + 0x10);
        bVar16 = iVar4 == 0;
        if (bVar16) {
          *(int *)(lVar14 + 0x10) = iVar10;
          iVar4 = 0;
        }
        UNLOCK();
        uVar5 = (uint)local_a0;
        if (bVar16) {
          iVar4 = iVar10;
        }
      }
    }
    local_a0._0_4_ = uVar5;
    local_a0 = CONCAT44(iVar4,(uint)local_a0);
    local_98 = 2;
    if (local_90 != 0) {
      FUN_1417398fc(&DAT_14c9a3da0,local_90 + -1,1);
      local_90 = 0;
    }
    if (!bVar15) {
      LOCK();
      piVar9 = (int *)((longlong)plVar13 + 0xc);
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (*piVar9 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
    piVar9 = &local_88;
    FUN_1447c3578(lVar7 + 0x48,piVar9,local_b8);
    if (local_68 == 1) {
      bVar15 = local_88 != 0;
      uVar5 = 1;
    }
    else {
      piVar12 = &local_60;
      FUN_1400b56fe(piVar12,&local_88,1);
      bVar15 = local_60 != 0;
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_40 * 0x120));
      if (pcVar2 != (code *)0x0) {
        if (0x18 < local_48) {
          piVar12 = (int *)CONCAT44(uStack_5c,local_60);
        }
        (*pcVar2)(piVar12);
      }
      if (0x18 < local_48) {
        FUN_1400020a8(CONCAT44(uStack_5c,local_60));
      }
      bVar15 = local_40 != 0 && bVar15;
      uVar5 = (uint)local_68;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar5 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_70) {
        piVar9 = (int *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar2)(piVar9);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
    lVar14 = DAT_14c9a3da0;
    if ((longlong)local_90 != 0) {
      lVar11 = (longlong)local_90 + -1;
      lVar7 = lVar11 * 0x10;
      FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar7),
                    *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar7));
      if (*(longlong *)(lVar14 + lVar7) != 0) {
        FUN_1400020a8();
      }
      lVar14 = DAT_14c9a3da0;
      iVar4 = (int)lVar11;
      if (DAT_14c9a3dd4 != 0) {
        *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar4;
      }
      *(undefined4 *)(lVar14 + lVar7) = 0xffffffff;
      iVar10 = -1;
      if (0 < DAT_14c9a3dd4) {
        iVar10 = DAT_14c9a3dd0;
      }
      *(int *)(lVar14 + 4 + lVar7) = iVar10;
      DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
      puVar8 = &DAT_14c9a3db0;
      if (DAT_14c9a3dc0 != (undefined *)0x0) {
        puVar8 = DAT_14c9a3dc0;
      }
      iVar10 = iVar4 + 0x1f;
      if (-1 < iVar4) {
        iVar10 = iVar4;
      }
      bVar3 = (byte)lVar11 & 0x1f;
      DAT_14c9a3dd0 = iVar4;
      *(uint *)(puVar8 + (longlong)(iVar10 >> 5) * 4) =
           *(uint *)(puVar8 + (longlong)(iVar10 >> 5) * 4) &
           (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      local_90 = 0;
    }
    if ((local_b8[0] == '\x03') && (local_a8 != (longlong *)0x0)) {
      LOCK();
      piVar9 = (int *)((longlong)local_a8 + 0xc);
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (*piVar9 == 0) {
        (**(code **)(*local_a8 + 0x10))();
      }
    }
    if (!bVar15) {
      uVar6 = 0;
      goto LAB_1400cd5d7;
    }
  }
  uVar6 = FUN_1400d388e(param_1);
LAB_1400cd5d7:
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 1400cd9f5 FUN_1400cd9f5 body=150 status=ok
// SIG undefined FUN_1400cd9f5(void)

undefined8 FUN_1400cd9f5(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  
  lVar1 = param_1[0x6d7];
  lVar2 = param_1[0x6d8];
  lVar4 = (**(code **)(*param_1 + 0x338))();
  if (lVar4 != 0) {
    if (((lVar1 != 0) && (*(longlong **)(lVar1 + 0x28) == *(longlong **)(param_3 + 0x28))) &&
       (cVar3 = (**(code **)(**(longlong **)(lVar1 + 0x28) + 0x160))(), cVar3 != '\0')) {
      (**(code **)(**(longlong **)(lVar1 + 0x28) + 400))();
      if (0.0 < extraout_XMM0_Da) {
        return 1;
      }
    }
    if (((lVar2 != 0) && (*(longlong **)(lVar2 + 0x28) == *(longlong **)(param_3 + 0x28))) &&
       (cVar3 = (**(code **)(**(longlong **)(lVar2 + 0x28) + 0x160))(), cVar3 != '\0')) {
      (**(code **)(**(longlong **)(lVar2 + 0x28) + 400))();
      if (0.0 < extraout_XMM0_Da_00) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1400cda8c FUN_1400cda8c body=66 status=ok
// SIG undefined FUN_1400cda8c(void)

void FUN_1400cda8c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x138) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x130);
    lVar1 = (longlong)*(int *)(param_1 + 0x138) * 0x30;
    do {
      FUN_1400cdace(lVar2,*(undefined4 *)(param_1 + 8));
      lVar2 = lVar2 + 0x30;
      lVar1 = lVar1 + -0x30;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 1400cdace FUN_1400cdace body=147 status=ok
// SIG undefined FUN_1400cdace(void)

void FUN_1400cdace(longlong *param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  
  if ((((*param_1 != 0) && ((longlong *)param_1[2] != (longlong *)0x0)) &&
      (*(int *)((longlong)param_1 + 0xc) != 0)) &&
     ((uVar1 = *(uint *)(param_1 + 1), -1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)))) {
    lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if ((lVar3 != 0) &&
       ((*(int *)(lVar3 + 0x10) == *(int *)((longlong)param_1 + 0xc) &&
        ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)))) {
      cVar2 = (**(code **)(*(longlong *)param_1[2] + 0x10))();
      if ((cVar2 != '\0') && (*(int *)*param_1 != param_2)) {
        *(int *)*param_1 = param_2;
                    /* WARNING: Could not recover jumptable at 0x0001400cdb5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(longlong *)param_1[2] + 0x20))((longlong *)param_1[2],param_1[4],param_1[3]);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1400cdb62 FUN_1400cdb62 body=180 status=ok
// SIG undefined FUN_1400cdb62(void)

ulonglong FUN_1400cdb62(ulonglong param_1,longlong param_2)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  undefined8 in_RAX;
  ulonglong uVar5;
  undefined8 unaff_RSI;
  uint7 uVar6;
  int iVar7;
  int iVar8;
  
  uVar6 = (uint7)((ulonglong)unaff_RSI >> 8);
  bVar1 = 1;
  if (((1 < (byte)(*(char *)(param_2 + 0x68) - 1U)) && ((*(byte *)(param_2 + 0x78) & 0x10) == 0)) &&
     (*(byte *)(param_2 + 0x75) < 0x40)) {
    uVar5 = CONCAT71((int7)((ulonglong)in_RAX >> 8),*(byte *)(param_2 + 0x75)) & 0xffffffffffffff08;
    bVar1 = (byte)uVar5 >> 3;
    uVar6 = (uint7)(uVar5 >> 8) & 0xffffff;
  }
  cVar2 = FUN_14498f84a();
  uVar5 = param_1 & 0xffff;
  if ((cVar2 == '\0') || (((&DAT_14ca814cc)[uVar5 * 0x3c] & 0x10) == 0)) {
    uVar4 = (&DAT_14ca814c8)[uVar5 * 0xf];
    if ((uVar4 >> 0x16 & 1) == 0) {
      iVar7 = 0xe;
      iVar8 = 0x31;
      goto LAB_1400cdbb8;
    }
  }
  else {
    uVar4 = (&DAT_14ca814c8)[uVar5 * 0xf];
  }
  iVar7 = 0x13;
  iVar8 = 0x22;
LAB_1400cdbb8:
  if ((uVar4 & 0x20) == 0) {
    iVar8 = iVar7;
  }
  if (((&DAT_14c873438)[(uint)(iVar8 * 0x30)] & 1) == 0) {
    uVar5 = 0;
  }
  else {
    bVar3 = 1;
    if ((&DAT_14ca814b8)[uVar5 * 0xf] == 1) {
      bVar3 = FUN_143224a65(param_1 & 0xffffffff);
    }
    uVar5 = CONCAT71(uVar6,bVar1 & bVar3);
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 1400cdc16 FUN_1400cdc16 body=376 status=ok
// SIG undefined FUN_1400cdc16(void)

bool FUN_1400cdc16(longlong param_1,longlong *param_2,char param_3,char param_4,undefined1 param_5,
                  undefined1 *param_6,undefined1 *param_7)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  longlong *plVar5;
  undefined8 unaff_R14;
  ulonglong uVar6;
  bool bVar7;
  code *pcVar4;
  
  *param_6 = 0;
  *param_7 = 0;
  if ((*(int *)(param_1 + 0x20) == 1) && (*(int *)(param_1 + 0x84) == 0)) {
    return false;
  }
  pcVar4 = *(code **)(*param_2 + 0x270);
  plVar5 = param_2;
  if (pcVar4 == (code *)&LAB_1447f82f4) {
    plVar5 = (longlong *)param_2[9];
    if (plVar5 == (longlong *)0x0) {
      plVar5 = (longlong *)param_2[8];
      pcVar4 = *(code **)(*plVar5 + 0x408);
      if (pcVar4 == (code *)&LAB_14470b702) {
        bVar2 = *(byte *)((longlong)plVar5 + 0x129);
        if (bVar2 == 1) {
          bVar2 = ~*(byte *)((longlong)plVar5 + 0x1d6) & 1;
        }
        uVar3 = (uint)bVar2;
        goto LAB_1400cdc9b;
      }
    }
    else {
      pcVar4 = *(code **)(*plVar5 + 0x408);
      if (pcVar4 == (code *)&LAB_14497e176) {
        uVar3 = (uint)*(byte *)(plVar5 + 0x2b);
        goto LAB_1400cdc9b;
      }
    }
  }
  uVar3 = (*pcVar4)(plVar5);
LAB_1400cdc9b:
  uVar6 = CONCAT71((int7)((ulonglong)unaff_R14 >> 8),param_5);
  if (((uVar3 == 0) && ((param_4 == '\x01' && param_3 == '\0') && *(int *)(param_1 + 0x84) != 4)) &&
     (cVar1 = FUN_1447e4184(param_2,0,uVar6 & 0xffffffff), cVar1 != '\0')) {
    bVar7 = true;
    *param_6 = 1;
    *param_7 = 1;
  }
  else {
    cVar1 = FUN_1447e4184(param_2,0,uVar6 & 0xffffffff);
    if ((cVar1 == '\0') || (cVar1 = (**(code **)(*param_2 + 0x50))(param_2), cVar1 != '\0')) {
      bVar7 = *(int *)(param_1 + 0x84) != 1;
    }
    else {
      bVar7 = *(int *)(param_1 + 0x84) != 4;
      if ((bVar7) && (param_3 == '\0')) {
        *param_6 = 1;
        *param_7 = 0;
        bVar7 = true;
      }
    }
  }
  return bVar7;
}



// FUNCTION 1400cdd8e FUN_1400cdd8e body=284 status=ok
// SIG undefined FUN_1400cdd8e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1400cdd8e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c4c20) {
    FUN_144b3d300(&DAT_14c9c4c20);
    if (DAT_14c9c4c20 == -1) {
      FUN_1456cbf48();
      FUN_140db5666(&DAT_14c9c4b78,2,&DAT_14c9c4b10,L"TDepthOnlyPS<false>",
                    L"/Engine/Private/DepthOnlyPixelShader.usf",L"Main",3,1,FUN_14714d942,
                    FUN_14714d91a,FUN_14175f9b6,&LAB_14714d916,&LAB_14712ac0c,&LAB_14712ac08,0x108,0
                   );
      _DAT_14c9c4b78 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142bcb46c);
      _Init_thread_footer(&DAT_14c9c4c20);
    }
  }
  return &DAT_14c9c4b78;
}



// FUNCTION 1400cdeaa FUN_1400cdeaa body=4007 status=ok
// SIG undefined FUN_1400cdeaa(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1400cdeaa(longlong param_1,longlong param_2,ulonglong param_3,undefined8 *param_4,
                  longlong *param_5,longlong *param_6,undefined8 *param_7,longlong *param_8,
                  int param_9,int param_10,undefined8 param_11,byte param_12,undefined8 param_13)

{
  undefined8 *puVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined *puVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong *plVar16;
  int iVar17;
  int iVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  longlong *plVar22;
  undefined1 auStack_348 [32];
  longlong *local_328;
  longlong *local_320;
  undefined8 local_318;
  undefined8 *local_310;
  undefined8 *local_308;
  longlong *local_300;
  longlong *local_2f8;
  undefined8 *local_2f0;
  longlong *local_2e8;
  undefined8 *local_2e0;
  longlong local_2d8;
  longlong *local_2d0;
  longlong *local_2c8;
  uint local_2bc;
  longlong local_2b8;
  uint local_2ac;
  longlong local_2a8;
  ulonglong local_2a0;
  undefined8 local_298;
  longlong *******local_290;
  longlong local_288;
  longlong local_280;
  longlong local_278;
  longlong local_270;
  longlong local_268;
  longlong local_260;
  longlong local_258;
  longlong local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  longlong local_238;
  longlong local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined1 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  longlong local_1f8;
  longlong lStack_1f0;
  longlong local_1e8;
  longlong lStack_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined1 uStack_1a0;
  undefined2 local_19f;
  uint local_19c;
  undefined8 local_198;
  undefined4 local_190;
  longlong local_180 [2];
  longlong *local_170;
  undefined8 local_168;
  longlong *******local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined1 local_108 [88];
  longlong local_b0;
  undefined8 local_a8;
  undefined4 local_98;
  undefined4 local_78;
  undefined8 local_70;
  undefined1 local_68;
  char local_67;
  undefined1 local_66;
  uint local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_348;
  uVar6 = 0;
  if (param_4 == (undefined8 *)0x0) {
    local_2b8 = 0;
  }
  else {
    local_2b8 = param_4[0x43];
  }
  local_2d0 = *(longlong **)(param_2 + 0xb8);
  local_170 = (longlong *)0x0;
  local_168 = 0x200000000;
  local_b0 = 0;
  local_a8 = 0x700000000;
  local_160 = (longlong *******)0x0;
  uStack_158 = 0;
  local_150 = 0;
  uStack_148 = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 0;
  local_98 = 0;
  local_78 = 0xffffffff;
  local_70 = 0;
  local_68 = 0;
  local_2e0 = param_4;
  local_2d8 = param_2;
  local_2a0 = param_3;
  if (param_6[3] != 0) {
    if ((*(byte *)(*(longlong *)(param_6[3] + 0x28) + 0x246) & 0x10) == 0) {
      uVar6 = 0;
    }
    else {
      cVar2 = (**(code **)(*param_6 + 0x358))();
      uVar6 = (uint)(byte)(cVar2 * '\x02' + 1);
    }
  }
  local_66 = *(undefined1 *)(param_7 + 7);
  local_19c = *(uint *)(local_2d8 + 0xe4) >> 0xe & 7;
  local_218 = 0;
  local_228 = 0;
  uStack_220 = 0;
  local_210 = 1;
  local_208 = 0;
  uStack_200 = 0;
  local_1f8 = 0;
  lStack_1f0 = 0;
  local_1e8 = 0;
  lStack_1e0 = 0;
  local_1d8 = 0xffffffff;
  uStack_1d4 = 0xffffffff;
  uStack_1d0 = 0xffffffff;
  uStack_1cc = 0xffffffff;
  local_1c8 = 0;
  uStack_1c0 = 0;
  uStack_1a0 = 0;
  local_1b8 = 0;
  local_19f = 1;
  local_198 = 0;
  local_190 = 0;
  uStack_1b0 = (undefined4)param_5[10];
  uStack_1ac = *(undefined4 *)((longlong)param_5 + 0x54);
  uStack_1a8 = (undefined4)param_5[0xb];
  uStack_1a4 = *(undefined4 *)((longlong)param_5 + 0x5c);
  local_2bc = 2;
  if ((param_12 & 2) == 0) {
    local_2bc = (uint)(param_12 & 1);
  }
  uVar13 = (ulonglong)local_2bc;
  local_248 = 0;
  uStack_240 = 0;
  local_288 = *param_8;
  local_280 = param_8[1];
  local_278 = param_8[2];
  local_270 = param_8[3];
  local_268 = param_8[4];
  local_260 = param_8[5];
  local_258 = param_8[6];
  local_250 = param_8[7];
  local_238 = param_8[8];
  local_230 = param_8[9];
  local_64 = local_19c;
  FUN_144765e6c(&local_228,local_2d0[uVar13 + 0x22],&local_288);
  local_2c8 = local_180;
  FUN_1447662e4(local_180,&local_288);
  if (param_9 == 0) {
    puVar11 = &DAT_14c9c0e48;
    if (param_10 == 2) {
      puVar11 = &DAT_14c9c0e60;
    }
    puVar7 = &DAT_14c9c0e78;
  }
  else if (param_9 == 1) {
    puVar11 = &DAT_14c9c0e00;
    if (param_10 == 2) {
      puVar11 = &DAT_14c9c0e18;
    }
    puVar7 = &DAT_14c9c0e30;
  }
  else {
    puVar11 = &DAT_14c9c0d58;
    if (param_10 == 2) {
      puVar11 = &DAT_14c9c0de8;
    }
    puVar7 = &DAT_14c9c0da0;
  }
  if (param_10 != 0) {
    puVar7 = puVar11;
  }
  uStack_1c0 = *(undefined8 *)(puVar7 + 0x10);
  local_1c8 = *param_7;
  local_1b8 = param_7[1];
  if ((DAT_14ca84f32 == '\x01') && (*(int *)(DAT_14ca620d8 + 4) != 0)) {
    uVar4 = (**(code **)(*param_6 + 0x490))(param_6);
    if (uVar4 < 4) {
      uVar3 = (undefined1)(0x5010400 >> ((byte)(uVar4 << 3) & 0x1f));
    }
    else {
      uVar3 = 0;
      if ((uVar4 < 7) && (DAT_14ca84f33 != '\0')) {
        uVar3 = (undefined1)(0xa060900000000 >> ((byte)(uVar4 << 3) & 0x3f));
      }
    }
  }
  else {
    uVar3 = 0;
  }
  local_19f = CONCAT11(uVar3,(undefined1)local_19f);
  cVar2 = (**(code **)(*param_6 + 0x4a0))(param_6);
  if (cVar2 == '\0') {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_1449c014c(param_1);
  }
  local_19f = CONCAT11(local_19f._1_1_,uVar3);
  if ((DAT_14c760d84 != 0) && ((DAT_14ca84f5a & 1) != 0)) {
    FUN_144766928(&local_228);
  }
  FUN_144765fea(local_2d0,*(undefined4 *)(param_1 + 0x20),local_2bc,local_108);
  plVar15 = local_2d0;
  if ((((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) && ((DAT_14ca84f5a & 1) != 0)) &&
     (DAT_14cafb358 == 2)) {
    uVar5 = *(undefined4 *)(param_1 + 8);
    uVar8 = (**(code **)(*local_2d0 + 0x30))(local_2d0);
    puVar1 = local_2e0;
    local_328._0_4_ = uVar5;
    FUN_1456c013a(&local_228,param_6,uVar8,local_2e0);
    uVar5 = *(undefined4 *)(param_1 + 8);
    uVar8 = (**(code **)(*plVar15 + 0x30))(plVar15);
    local_328 = (longlong *)CONCAT44(local_328._4_4_,uVar5);
    FUN_1456c0257(&local_228,param_6,uVar8,puVar1);
  }
  local_67 = *(char *)((longlong)local_2d0 + uVar13 + 0x128);
  local_2ac = uVar6 + 4;
  if (local_67 == -1) {
    local_2ac = uVar6;
  }
  local_2ac = local_2ac & 0xff;
  if (*param_8 == 0) {
    uVar6 = 0;
  }
  else {
    if ((local_110 & 1) == 0) {
      local_290 = (longlong *******)0x0;
      local_298 = 0x58;
      uVar6 = 0;
    }
    else {
      plVar15 = local_170;
      if (local_170 == (longlong *)0x0) {
        plVar15 = local_180;
      }
      local_298 = *plVar15;
      uVar13 = *(ulonglong *)(local_298 + 0x30);
      if ((uVar13 & 1) != 0) {
        uVar13 = ((longlong)uVar13 >> 0x18) + local_298 + 0x30;
      }
      iVar12 = *(int *)(local_298 + 0x28);
      iVar18 = 0;
      if ((longlong)*(int *)(local_298 + 0x38) != 0) {
        lVar14 = 0;
        iVar18 = 0;
        do {
          iVar18 = iVar18 + (uint)*(ushort *)(uVar13 + 2 + lVar14);
          lVar14 = lVar14 + 0x18;
        } while ((longlong)*(int *)(local_298 + 0x38) * 0x18 != lVar14);
      }
      iVar17 = iVar12 + 0xe;
      if (-1 < iVar12 + 7) {
        iVar17 = iVar12 + 7;
      }
      local_290 = (longlong *******)&local_160;
      if (0x50 < local_110._2_2_) {
        local_290 = local_160;
      }
      uVar6 = iVar18 + (iVar17 >> 3) +
                       (*(int *)(local_298 + 0x18) + *(int *)(local_298 + 8) + iVar12) * 8 + 7U &
              0xfffffff8;
    }
    local_310 = &local_298;
    local_318 = param_13;
    local_320 = param_6;
    local_328 = param_5;
    FUN_14474308c(*param_8,*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20),local_2e0
                 );
  }
  if (param_8[2] != 0) {
    uVar13 = (ulonglong)(local_110 & 0xf) - (ulonglong)(local_110 >> 1 & 5);
    uVar13 = (uVar13 >> 2 & 0x3333333333333333) + (uVar13 & 0x3333333333333333);
    uVar13 = ((uVar13 >> 4) + uVar13 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar13 < 0x100000000000000) {
      local_298 = 0x58;
      local_290 = (longlong *******)0x0;
    }
    else {
      plVar15 = local_170;
      if (local_170 == (longlong *)0x0) {
        plVar15 = local_180;
      }
      local_298 = plVar15[(uVar13 >> 0x38) - 1];
      uVar13 = *(ulonglong *)(local_298 + 0x30);
      if ((uVar13 & 1) != 0) {
        uVar13 = ((longlong)uVar13 >> 0x18) + local_298 + 0x30;
      }
      iVar12 = *(int *)(local_298 + 0x28);
      iVar18 = 0;
      if ((longlong)*(int *)(local_298 + 0x38) != 0) {
        local_2a8 = (longlong)*(int *)(local_298 + 0x38) * 0x18;
        lVar14 = 0;
        iVar18 = 0;
        do {
          iVar18 = iVar18 + (uint)*(ushort *)(uVar13 + 2 + lVar14);
          lVar14 = lVar14 + 0x18;
        } while (local_2a8 != lVar14);
      }
      iVar17 = iVar12 + 0xe;
      if (-1 < iVar12 + 7) {
        iVar17 = iVar12 + 7;
      }
      local_290 = (longlong *******)&local_160;
      if (0x50 < local_110._2_2_) {
        local_290 = local_160;
      }
      local_290 = (longlong *******)((longlong)(int)uVar6 + (longlong)local_290);
      uVar6 = ((iVar17 >> 3) + (*(int *)(local_298 + 0x18) + *(int *)(local_298 + 8) + iVar12) * 8 +
               iVar18 + 7U & 0xfffffff8) + uVar6;
    }
    local_310 = &local_298;
    local_318 = param_13;
    local_320 = param_6;
    local_328 = param_5;
    FUN_14474308c(param_8[2],*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20),
                  local_2e0);
  }
  if (param_8[4] != 0) {
    uVar13 = (ulonglong)(local_110 & 0x1f) - (ulonglong)(local_110 >> 1 & 5);
    uVar13 = (uVar13 >> 2 & 0x3333333333333333) + (uVar13 & 0x3333333333333333);
    uVar13 = ((uVar13 >> 4) + uVar13 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar13 < 0x100000000000000) {
      local_298 = 0x58;
      local_290 = (longlong *******)0x0;
    }
    else {
      if (local_170 != (longlong *)0x0) {
        local_2c8 = local_170;
      }
      local_290 = (longlong *******)&local_160;
      if (0x50 < local_110._2_2_) {
        local_290 = local_160;
      }
      local_298 = local_2c8[(uVar13 >> 0x38) - 1];
      local_290 = (longlong *******)((longlong)(int)uVar6 + (longlong)local_290);
    }
    local_310 = &local_298;
    local_318 = param_13;
    local_320 = param_6;
    local_328 = param_5;
    FUN_14474308c(param_8[4],*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20),
                  local_2e0);
  }
  plVar15 = (longlong *)(longlong)*(int *)(local_2d8 + 0xb0);
  if (0 < (longlong)plVar15) {
    plVar22 = (longlong *)0x0;
    local_2c8 = plVar15;
    do {
      if ((local_2a0 >> ((ulonglong)plVar22 & 0x3f) & 1) != 0) {
        lVar14 = *(longlong *)(local_2d8 + 0xa8);
        if (*(longlong *)(local_2d8 + 0xa8) == 0) {
          lVar14 = local_2d8;
        }
        plVar15 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x30) + 8))();
        uVar6 = *(uint *)(lVar14 + 0x7c + (longlong)plVar22 * 0xa8);
        bVar19 = (byte)(uVar6 >> 8);
        bVar20 = (bVar19 & 8) + (char)local_2ac;
        bVar21 = bVar20;
        if (((uVar6 >> 0xc & 1) != 0) && (bVar21 = bVar20 + 0x10, *(int *)(param_1 + 0x20) < 2)) {
          bVar21 = bVar20;
        }
        lVar14 = lVar14 + (longlong)plVar22 * 0xa8;
        if (*param_8 == 0) {
          uVar6 = 0;
        }
        else {
          if ((*(byte *)(plVar15 + 0xe) & 1) == 0) {
            local_290 = (longlong *******)0x0;
            local_298 = 0x58;
            uVar6 = 0;
          }
          else {
            plVar9 = (longlong *)plVar15[2];
            if ((longlong *)plVar15[2] == (longlong *)0x0) {
              plVar9 = plVar15;
            }
            local_298 = *plVar9;
            uVar13 = *(ulonglong *)(local_298 + 0x30);
            if ((uVar13 & 1) != 0) {
              uVar13 = ((longlong)uVar13 >> 0x18) + local_298 + 0x30;
            }
            iVar12 = 0;
            if ((longlong)*(int *)(local_298 + 0x38) != 0) {
              lVar10 = 0;
              iVar12 = 0;
              do {
                iVar12 = iVar12 + (uint)*(ushort *)(uVar13 + 2 + lVar10);
                lVar10 = lVar10 + 0x18;
              } while ((longlong)*(int *)(local_298 + 0x38) * 0x18 != lVar10);
            }
            iVar18 = *(int *)(local_298 + 0x28);
            iVar17 = iVar18 + 0xe;
            if (-1 < iVar18 + 7) {
              iVar17 = iVar18 + 7;
            }
            if (*(ushort *)((longlong)plVar15 + 0x72) < 0x51) {
              local_290 = (longlong *******)(plVar15 + 4);
            }
            else {
              local_290 = (longlong *******)plVar15[4];
            }
            uVar6 = iVar12 + (iVar17 >> 3) +
                             (*(int *)(local_298 + 8) + *(int *)(local_298 + 0x18) + iVar18) * 8 +
                    7U & 0xfffffff8;
          }
          local_2e8 = plVar15 + 0xf;
          local_2f0 = &local_298;
          local_2f8 = (longlong *)param_13;
          local_308 = (undefined8 *)local_2d8;
          local_310 = local_2e0;
          local_318 = CONCAT44(local_318._4_4_,*(undefined4 *)(param_1 + 0x20));
          local_320 = (longlong *)CONCAT71(local_320._1_7_,(char)local_2bc);
          local_328 = local_2d0;
          local_300 = (longlong *)lVar14;
          FUN_1456bf974(*param_8,*(undefined8 *)(param_8[1] + 0x18),*(undefined8 *)(param_1 + 0x18),
                        *(undefined8 *)(param_1 + 0x28));
        }
        if (param_8[2] != 0) {
          uVar13 = (ulonglong)(*(ushort *)(plVar15 + 0xe) & 0xf) -
                   (ulonglong)(*(ushort *)(plVar15 + 0xe) >> 1 & 5);
          uVar13 = (uVar13 >> 2 & 0x3333333333333333) + (uVar13 & 0x3333333333333333);
          uVar13 = ((uVar13 >> 4) + uVar13 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
          if (uVar13 < 0x100000000000000) {
            local_298 = 0x58;
            local_290 = (longlong *******)0x0;
          }
          else {
            plVar9 = (longlong *)plVar15[2];
            if ((longlong *)plVar15[2] == (longlong *)0x0) {
              plVar9 = plVar15;
            }
            local_298 = plVar9[(uVar13 >> 0x38) - 1];
            uVar13 = *(ulonglong *)(local_298 + 0x30);
            if ((uVar13 & 1) != 0) {
              uVar13 = ((longlong)uVar13 >> 0x18) + local_298 + 0x30;
            }
            iVar12 = 0;
            if ((longlong)*(int *)(local_298 + 0x38) != 0) {
              lVar10 = 0;
              iVar12 = 0;
              do {
                iVar12 = iVar12 + (uint)*(ushort *)(uVar13 + 2 + lVar10);
                lVar10 = lVar10 + 0x18;
              } while ((longlong)*(int *)(local_298 + 0x38) * 0x18 != lVar10);
            }
            iVar18 = *(int *)(local_298 + 0x28);
            iVar17 = iVar18 + 0xe;
            if (-1 < iVar18 + 7) {
              iVar17 = iVar18 + 7;
            }
            if (*(ushort *)((longlong)plVar15 + 0x72) < 0x51) {
              plVar9 = plVar15 + 4;
            }
            else {
              plVar9 = (longlong *)plVar15[4];
            }
            local_290 = (longlong *******)((longlong)(int)uVar6 + (longlong)plVar9);
            uVar6 = ((iVar17 >> 3) +
                     (*(int *)(local_298 + 8) + *(int *)(local_298 + 0x18) + iVar18) * 8 + iVar12 +
                     7U & 0xfffffff8) + uVar6;
          }
          local_2e8 = plVar15 + 0xf;
          local_2f0 = &local_298;
          local_2f8 = (longlong *)param_13;
          local_308 = (undefined8 *)local_2d8;
          local_310 = local_2e0;
          local_318 = CONCAT44(local_318._4_4_,*(undefined4 *)(param_1 + 0x20));
          local_328 = local_2d0;
          local_320 = (longlong *)((ulonglong)local_320 & 0xffffffffffffff00);
          local_300 = (longlong *)lVar14;
          FUN_1456bf974(param_8[2],*(undefined8 *)(param_8[3] + 0x18),
                        *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x28));
        }
        if (param_8[4] != 0) {
          uVar13 = (ulonglong)(*(ushort *)(plVar15 + 0xe) & 0x1f) -
                   (ulonglong)(*(ushort *)(plVar15 + 0xe) >> 1 & 5);
          uVar13 = (uVar13 >> 2 & 0x3333333333333333) + (uVar13 & 0x3333333333333333);
          uVar13 = ((uVar13 >> 4) + uVar13 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
          if (uVar13 < 0x100000000000000) {
            local_298 = 0x58;
            local_290 = (longlong *******)0x0;
          }
          else {
            plVar9 = (longlong *)plVar15[2];
            if ((longlong *)plVar15[2] == (longlong *)0x0) {
              plVar9 = plVar15;
            }
            if (*(ushort *)((longlong)plVar15 + 0x72) < 0x51) {
              plVar16 = plVar15 + 4;
            }
            else {
              plVar16 = (longlong *)plVar15[4];
            }
            local_298 = plVar9[(uVar13 >> 0x38) - 1];
            local_290 = (longlong *******)((longlong)(int)uVar6 + (longlong)plVar16);
          }
          local_2e8 = plVar15 + 0xf;
          local_2f0 = &local_298;
          local_2f8 = (longlong *)param_13;
          local_308 = (undefined8 *)local_2d8;
          local_310 = local_2e0;
          local_318 = CONCAT44(local_318._4_4_,*(undefined4 *)(param_1 + 0x20));
          local_328 = local_2d0;
          local_320 = (longlong *)((ulonglong)local_320 & 0xffffffffffffff00);
          local_300 = (longlong *)lVar14;
          FUN_1456bf974(param_8[4],*(undefined8 *)(param_8[5] + 0x18),
                        *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x28));
        }
        uVar6 = 0;
        local_290 = (longlong *******)CONCAT44(local_290._4_4_,0x7fffffff);
        bVar20 = DAT_14ca96500;
        if (*(int *)(param_1 + 0x20) == 1) {
joined_r0x0001400cecd6:
          if (bVar20 != 0) {
LAB_1400ceb57:
            uVar4 = *(uint *)(lVar14 + 0x54) & 7;
            if (uVar4 == 0) {
              uVar6 = *(uint *)(local_2b8 + 0x15c);
              uVar4 = *(uint *)(local_2b8 + 0x204) & 0x7fffffff;
            }
            else {
              if ((uVar4 != 1) || (*(longlong *)(param_1 + 0x28) == 0)) goto LAB_1400ceb86;
              uVar6 = *(uint *)(lVar14 + 0xa0) | 0x80000000;
              uVar4 = *(uint *)(lVar14 + 0xa4) | 0x80000000;
            }
            local_290 = (longlong *******)CONCAT44(local_290._4_4_,uVar4);
          }
        }
        else if (((2 < *(int *)(param_1 + 0x20)) &&
                 (lVar10 = (ulonglong)DAT_14ca85550 * 0x3c,
                 *(longlong *)(&DAT_14ca814b0 + lVar10) != DAT_14ca81490)) && (DAT_14ca85550 != 0xc)
                ) {
          if ((*(byte *)((longlong)&DAT_14ca814d8 + lVar10 + 3) & 0x10) != 0) {
            bVar20 = *(byte *)((longlong)&DAT_14ca814c8 + lVar10 + 3) & 0x20;
            goto joined_r0x0001400cecd6;
          }
          goto LAB_1400ceb57;
        }
LAB_1400ceb86:
        if (local_2b8 == 0) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = *(undefined4 *)(local_2b8 + 0x158);
        }
        local_298 = CONCAT44(uVar5,uVar6);
        local_300 = &local_288;
        local_308 = &local_228;
        local_310 = (undefined8 *)CONCAT71(local_310._1_7_,bVar21 | bVar19 & 0x20);
        local_318 = param_11;
        local_320 = (longlong *)CONCAT44(local_320._4_4_,param_10);
        local_328 = (longlong *)CONCAT44(local_328._4_4_,param_9);
        local_2f8 = plVar15;
        (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))
                  (*(longlong **)(param_1 + 0x30),local_2d8,(ulonglong)plVar22 & 0xffffffff,
                   &local_298);
        plVar15 = local_2c8;
      }
      plVar22 = (longlong *)((longlong)plVar22 + 1);
    } while (plVar22 != plVar15);
  }
  if (lStack_1e0 != 0) {
    FUN_140021284();
  }
  if (local_1e8 != 0) {
    FUN_140021284();
  }
  if (lStack_1f0 != 0) {
    FUN_140021284();
  }
  if (local_1f8 != 0) {
    FUN_140021284();
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  if ((0x50 < local_110._2_2_) && (local_160 != (longlong *******)0x0)) {
    FUN_1400020a8();
  }
  local_110 = local_110 & 0xffff;
  local_160 = (longlong *******)0x0;
  if (local_170 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_348) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1400cee52 FUN_1400cee52 body=300 status=ok
// SIG undefined FUN_1400cee52(void)

void FUN_1400cee52(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong *param_5,longlong *param_6,longlong *param_7)

{
  char cVar1;
  undefined1 auStack_148 [32];
  longlong local_128;
  longlong lStack_120;
  longlong local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  longlong lStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined *local_b8;
  undefined8 local_b0 [12];
  undefined4 auStack_50 [12];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_148;
  memset(local_b0,0,0x90);
  FUN_1400cef80();
  local_b0[DAT_14c9c4848] = &DAT_14c9c4800;
  auStack_50[DAT_14c9c4848] = 0;
  local_b8 = &DAT_14c9c4e10;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  lStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  lStack_120 = 0;
  cVar1 = FUN_14007744c(param_1,&local_b8,param_2);
  if (cVar1 != '\0') {
    if (lStack_120 != 0) {
      *param_7 = lStack_120;
      param_7[1] = local_128;
    }
    if (local_118 != 0) {
      *param_5 = local_118;
      param_5[1] = local_128;
    }
    if (lStack_100 != 0) {
      *param_6 = lStack_100;
      param_6[1] = local_128;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400cef80 FUN_1400cef80 body=284 status=ok
// SIG undefined FUN_1400cef80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1400cef80(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c48a8) {
    FUN_144b3d300(&DAT_14c9c48a8);
    if (DAT_14c9c48a8 == -1) {
      FUN_1456cbcb4();
      FUN_140db5666(&DAT_14c9c4800,2,&DAT_14c9c4798,L"TDepthOnlyVS<true>",
                    L"/Engine/Private/PositionOnlyDepthVertexShader.usf",L"Main",0,1,FUN_14714d640,
                    FUN_14714d618,&LAB_142bcb432,&LAB_14714d614,&LAB_14712ac0c,&LAB_14712ac08,0x108,
                    0);
      _DAT_14c9c4800 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142bcb448);
      _Init_thread_footer(&DAT_14c9c48a8);
    }
  }
  return &DAT_14c9c4800;
}



// FUNCTION 1400cf09c FUN_1400cf09c body=4007 status=ok
// SIG undefined FUN_1400cf09c(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1400cf09c(longlong param_1,longlong param_2,ulonglong param_3,undefined8 *param_4,
                  longlong *param_5,longlong *param_6,undefined8 *param_7,longlong *param_8,
                  int param_9,int param_10,undefined8 param_11,byte param_12,undefined8 param_13)

{
  undefined8 *puVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined *puVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong *plVar16;
  int iVar17;
  int iVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  longlong *plVar22;
  undefined1 auStack_348 [32];
  longlong *local_328;
  longlong *local_320;
  undefined8 local_318;
  undefined8 *local_310;
  undefined8 *local_308;
  longlong *local_300;
  longlong *local_2f8;
  undefined8 *local_2f0;
  longlong *local_2e8;
  undefined8 *local_2e0;
  longlong local_2d8;
  longlong *local_2d0;
  longlong *local_2c8;
  uint local_2bc;
  longlong local_2b8;
  uint local_2ac;
  longlong local_2a8;
  ulonglong local_2a0;
  undefined8 local_298;
  longlong *******local_290;
  longlong local_288;
  longlong local_280;
  longlong local_278;
  longlong local_270;
  longlong local_268;
  longlong local_260;
  longlong local_258;
  longlong local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  longlong local_238;
  longlong local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined1 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  longlong local_1f8;
  longlong lStack_1f0;
  longlong local_1e8;
  longlong lStack_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined1 uStack_1a0;
  undefined2 local_19f;
  uint local_19c;
  undefined8 local_198;
  undefined4 local_190;
  longlong local_180 [2];
  longlong *local_170;
  undefined8 local_168;
  longlong *******local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined1 local_108 [88];
  longlong local_b0;
  undefined8 local_a8;
  undefined4 local_98;
  undefined4 local_78;
  undefined8 local_70;
  undefined1 local_68;
  char local_67;
  undefined1 local_66;
  uint local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_348;
  uVar6 = 0;
  if (param_4 == (undefined8 *)0x0) {
    local_2b8 = 0;
  }
  else {
    local_2b8 = param_4[0x43];
  }
  local_2d0 = *(longlong **)(param_2 + 0xb8);
  local_170 = (longlong *)0x0;
  local_168 = 0x200000000;
  local_b0 = 0;
  local_a8 = 0x700000000;
  local_160 = (longlong *******)0x0;
  uStack_158 = 0;
  local_150 = 0;
  uStack_148 = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 0;
  local_98 = 0;
  local_78 = 0xffffffff;
  local_70 = 0;
  local_68 = 0;
  local_2e0 = param_4;
  local_2d8 = param_2;
  local_2a0 = param_3;
  if (param_6[3] != 0) {
    if ((*(byte *)(*(longlong *)(param_6[3] + 0x28) + 0x246) & 0x10) == 0) {
      uVar6 = 0;
    }
    else {
      cVar2 = (**(code **)(*param_6 + 0x358))();
      uVar6 = (uint)(byte)(cVar2 * '\x02' + 1);
    }
  }
  local_66 = *(undefined1 *)(param_7 + 7);
  local_19c = *(uint *)(local_2d8 + 0xe4) >> 0xe & 7;
  local_218 = 0;
  local_228 = 0;
  uStack_220 = 0;
  local_210 = 1;
  local_208 = 0;
  uStack_200 = 0;
  local_1f8 = 0;
  lStack_1f0 = 0;
  local_1e8 = 0;
  lStack_1e0 = 0;
  local_1d8 = 0xffffffff;
  uStack_1d4 = 0xffffffff;
  uStack_1d0 = 0xffffffff;
  uStack_1cc = 0xffffffff;
  local_1c8 = 0;
  uStack_1c0 = 0;
  uStack_1a0 = 0;
  local_1b8 = 0;
  local_19f = 1;
  local_198 = 0;
  local_190 = 0;
  uStack_1b0 = (undefined4)param_5[10];
  uStack_1ac = *(undefined4 *)((longlong)param_5 + 0x54);
  uStack_1a8 = (undefined4)param_5[0xb];
  uStack_1a4 = *(undefined4 *)((longlong)param_5 + 0x5c);
  local_2bc = 2;
  if ((param_12 & 2) == 0) {
    local_2bc = (uint)(param_12 & 1);
  }
  uVar13 = (ulonglong)local_2bc;
  local_248 = 0;
  uStack_240 = 0;
  local_288 = *param_8;
  local_280 = param_8[1];
  local_278 = param_8[2];
  local_270 = param_8[3];
  local_268 = param_8[4];
  local_260 = param_8[5];
  local_258 = param_8[6];
  local_250 = param_8[7];
  local_238 = param_8[8];
  local_230 = param_8[9];
  local_64 = local_19c;
  FUN_144765e6c(&local_228,local_2d0[uVar13 + 0x22],&local_288);
  local_2c8 = local_180;
  FUN_1447662e4(local_180,&local_288);
  if (param_9 == 0) {
    puVar11 = &DAT_14c9c0e48;
    if (param_10 == 2) {
      puVar11 = &DAT_14c9c0e60;
    }
    puVar7 = &DAT_14c9c0e78;
  }
  else if (param_9 == 1) {
    puVar11 = &DAT_14c9c0e00;
    if (param_10 == 2) {
      puVar11 = &DAT_14c9c0e18;
    }
    puVar7 = &DAT_14c9c0e30;
  }
  else {
    puVar11 = &DAT_14c9c0d58;
    if (param_10 == 2) {
      puVar11 = &DAT_14c9c0de8;
    }
    puVar7 = &DAT_14c9c0da0;
  }
  if (param_10 != 0) {
    puVar7 = puVar11;
  }
  uStack_1c0 = *(undefined8 *)(puVar7 + 0x10);
  local_1c8 = *param_7;
  local_1b8 = param_7[1];
  if ((DAT_14ca84f32 == '\x01') && (*(int *)(DAT_14ca620d8 + 4) != 0)) {
    uVar4 = (**(code **)(*param_6 + 0x490))(param_6);
    if (uVar4 < 4) {
      uVar3 = (undefined1)(0x5010400 >> ((byte)(uVar4 << 3) & 0x1f));
    }
    else {
      uVar3 = 0;
      if ((uVar4 < 7) && (DAT_14ca84f33 != '\0')) {
        uVar3 = (undefined1)(0xa060900000000 >> ((byte)(uVar4 << 3) & 0x3f));
      }
    }
  }
  else {
    uVar3 = 0;
  }
  local_19f = CONCAT11(uVar3,(undefined1)local_19f);
  cVar2 = (**(code **)(*param_6 + 0x4a0))(param_6);
  if (cVar2 == '\0') {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_1449c014c(param_1);
  }
  local_19f = CONCAT11(local_19f._1_1_,uVar3);
  if ((DAT_14c760d84 != 0) && ((DAT_14ca84f5a & 1) != 0)) {
    FUN_144766928(&local_228);
  }
  FUN_144765fea(local_2d0,*(undefined4 *)(param_1 + 0x20),local_2bc,local_108);
  plVar15 = local_2d0;
  if ((((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) && ((DAT_14ca84f5a & 1) != 0)) &&
     (DAT_14cafb358 == 2)) {
    uVar5 = *(undefined4 *)(param_1 + 8);
    uVar8 = (**(code **)(*local_2d0 + 0x30))(local_2d0);
    puVar1 = local_2e0;
    local_328._0_4_ = uVar5;
    FUN_1456c013a(&local_228,param_6,uVar8,local_2e0);
    uVar5 = *(undefined4 *)(param_1 + 8);
    uVar8 = (**(code **)(*plVar15 + 0x30))(plVar15);
    local_328 = (longlong *)CONCAT44(local_328._4_4_,uVar5);
    FUN_1456c0257(&local_228,param_6,uVar8,puVar1);
  }
  local_67 = *(char *)((longlong)local_2d0 + uVar13 + 0x128);
  local_2ac = uVar6 + 4;
  if (local_67 == -1) {
    local_2ac = uVar6;
  }
  local_2ac = local_2ac & 0xff;
  if (*param_8 == 0) {
    uVar6 = 0;
  }
  else {
    if ((local_110 & 1) == 0) {
      local_290 = (longlong *******)0x0;
      local_298 = 0x58;
      uVar6 = 0;
    }
    else {
      plVar15 = local_170;
      if (local_170 == (longlong *)0x0) {
        plVar15 = local_180;
      }
      local_298 = *plVar15;
      uVar13 = *(ulonglong *)(local_298 + 0x30);
      if ((uVar13 & 1) != 0) {
        uVar13 = ((longlong)uVar13 >> 0x18) + local_298 + 0x30;
      }
      iVar12 = *(int *)(local_298 + 0x28);
      iVar18 = 0;
      if ((longlong)*(int *)(local_298 + 0x38) != 0) {
        lVar14 = 0;
        iVar18 = 0;
        do {
          iVar18 = iVar18 + (uint)*(ushort *)(uVar13 + 2 + lVar14);
          lVar14 = lVar14 + 0x18;
        } while ((longlong)*(int *)(local_298 + 0x38) * 0x18 != lVar14);
      }
      iVar17 = iVar12 + 0xe;
      if (-1 < iVar12 + 7) {
        iVar17 = iVar12 + 7;
      }
      local_290 = (longlong *******)&local_160;
      if (0x50 < local_110._2_2_) {
        local_290 = local_160;
      }
      uVar6 = iVar18 + (iVar17 >> 3) +
                       (*(int *)(local_298 + 0x18) + *(int *)(local_298 + 8) + iVar12) * 8 + 7U &
              0xfffffff8;
    }
    local_310 = &local_298;
    local_318 = param_13;
    local_320 = param_6;
    local_328 = param_5;
    FUN_14474308c(*param_8,*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20),local_2e0
                 );
  }
  if (param_8[2] != 0) {
    uVar13 = (ulonglong)(local_110 & 0xf) - (ulonglong)(local_110 >> 1 & 5);
    uVar13 = (uVar13 >> 2 & 0x3333333333333333) + (uVar13 & 0x3333333333333333);
    uVar13 = ((uVar13 >> 4) + uVar13 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar13 < 0x100000000000000) {
      local_298 = 0x58;
      local_290 = (longlong *******)0x0;
    }
    else {
      plVar15 = local_170;
      if (local_170 == (longlong *)0x0) {
        plVar15 = local_180;
      }
      local_298 = plVar15[(uVar13 >> 0x38) - 1];
      uVar13 = *(ulonglong *)(local_298 + 0x30);
      if ((uVar13 & 1) != 0) {
        uVar13 = ((longlong)uVar13 >> 0x18) + local_298 + 0x30;
      }
      iVar12 = *(int *)(local_298 + 0x28);
      iVar18 = 0;
      if ((longlong)*(int *)(local_298 + 0x38) != 0) {
        local_2a8 = (longlong)*(int *)(local_298 + 0x38) * 0x18;
        lVar14 = 0;
        iVar18 = 0;
        do {
          iVar18 = iVar18 + (uint)*(ushort *)(uVar13 + 2 + lVar14);
          lVar14 = lVar14 + 0x18;
        } while (local_2a8 != lVar14);
      }
      iVar17 = iVar12 + 0xe;
      if (-1 < iVar12 + 7) {
        iVar17 = iVar12 + 7;
      }
      local_290 = (longlong *******)&local_160;
      if (0x50 < local_110._2_2_) {
        local_290 = local_160;
      }
      local_290 = (longlong *******)((longlong)(int)uVar6 + (longlong)local_290);
      uVar6 = ((iVar17 >> 3) + (*(int *)(local_298 + 0x18) + *(int *)(local_298 + 8) + iVar12) * 8 +
               iVar18 + 7U & 0xfffffff8) + uVar6;
    }
    local_310 = &local_298;
    local_318 = param_13;
    local_320 = param_6;
    local_328 = param_5;
    FUN_14474308c(param_8[2],*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20),
                  local_2e0);
  }
  if (param_8[4] != 0) {
    uVar13 = (ulonglong)(local_110 & 0x1f) - (ulonglong)(local_110 >> 1 & 5);
    uVar13 = (uVar13 >> 2 & 0x3333333333333333) + (uVar13 & 0x3333333333333333);
    uVar13 = ((uVar13 >> 4) + uVar13 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar13 < 0x100000000000000) {
      local_298 = 0x58;
      local_290 = (longlong *******)0x0;
    }
    else {
      if (local_170 != (longlong *)0x0) {
        local_2c8 = local_170;
      }
      local_290 = (longlong *******)&local_160;
      if (0x50 < local_110._2_2_) {
        local_290 = local_160;
      }
      local_298 = local_2c8[(uVar13 >> 0x38) - 1];
      local_290 = (longlong *******)((longlong)(int)uVar6 + (longlong)local_290);
    }
    local_310 = &local_298;
    local_318 = param_13;
    local_320 = param_6;
    local_328 = param_5;
    FUN_14474308c(param_8[4],*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20),
                  local_2e0);
  }
  plVar15 = (longlong *)(longlong)*(int *)(local_2d8 + 0xb0);
  if (0 < (longlong)plVar15) {
    plVar22 = (longlong *)0x0;
    local_2c8 = plVar15;
    do {
      if ((local_2a0 >> ((ulonglong)plVar22 & 0x3f) & 1) != 0) {
        lVar14 = *(longlong *)(local_2d8 + 0xa8);
        if (*(longlong *)(local_2d8 + 0xa8) == 0) {
          lVar14 = local_2d8;
        }
        plVar15 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x30) + 8))();
        uVar6 = *(uint *)(lVar14 + 0x7c + (longlong)plVar22 * 0xa8);
        bVar19 = (byte)(uVar6 >> 8);
        bVar20 = (bVar19 & 8) + (char)local_2ac;
        bVar21 = bVar20;
        if (((uVar6 >> 0xc & 1) != 0) && (bVar21 = bVar20 + 0x10, *(int *)(param_1 + 0x20) < 2)) {
          bVar21 = bVar20;
        }
        lVar14 = lVar14 + (longlong)plVar22 * 0xa8;
        if (*param_8 == 0) {
          uVar6 = 0;
        }
        else {
          if ((*(byte *)(plVar15 + 0xe) & 1) == 0) {
            local_290 = (longlong *******)0x0;
            local_298 = 0x58;
            uVar6 = 0;
          }
          else {
            plVar9 = (longlong *)plVar15[2];
            if ((longlong *)plVar15[2] == (longlong *)0x0) {
              plVar9 = plVar15;
            }
            local_298 = *plVar9;
            uVar13 = *(ulonglong *)(local_298 + 0x30);
            if ((uVar13 & 1) != 0) {
              uVar13 = ((longlong)uVar13 >> 0x18) + local_298 + 0x30;
            }
            iVar12 = 0;
            if ((longlong)*(int *)(local_298 + 0x38) != 0) {
              lVar10 = 0;
              iVar12 = 0;
              do {
                iVar12 = iVar12 + (uint)*(ushort *)(uVar13 + 2 + lVar10);
                lVar10 = lVar10 + 0x18;
              } while ((longlong)*(int *)(local_298 + 0x38) * 0x18 != lVar10);
            }
            iVar18 = *(int *)(local_298 + 0x28);
            iVar17 = iVar18 + 0xe;
            if (-1 < iVar18 + 7) {
              iVar17 = iVar18 + 7;
            }
            if (*(ushort *)((longlong)plVar15 + 0x72) < 0x51) {
              local_290 = (longlong *******)(plVar15 + 4);
            }
            else {
              local_290 = (longlong *******)plVar15[4];
            }
            uVar6 = iVar12 + (iVar17 >> 3) +
                             (*(int *)(local_298 + 8) + *(int *)(local_298 + 0x18) + iVar18) * 8 +
                    7U & 0xfffffff8;
          }
          local_2e8 = plVar15 + 0xf;
          local_2f0 = &local_298;
          local_2f8 = (longlong *)param_13;
          local_308 = (undefined8 *)local_2d8;
          local_310 = local_2e0;
          local_318 = CONCAT44(local_318._4_4_,*(undefined4 *)(param_1 + 0x20));
          local_320 = (longlong *)CONCAT71(local_320._1_7_,(char)local_2bc);
          local_328 = local_2d0;
          local_300 = (longlong *)lVar14;
          FUN_1456bf974(*param_8,*(undefined8 *)(param_8[1] + 0x18),*(undefined8 *)(param_1 + 0x18),
                        *(undefined8 *)(param_1 + 0x28));
        }
        if (param_8[2] != 0) {
          uVar13 = (ulonglong)(*(ushort *)(plVar15 + 0xe) & 0xf) -
                   (ulonglong)(*(ushort *)(plVar15 + 0xe) >> 1 & 5);
          uVar13 = (uVar13 >> 2 & 0x3333333333333333) + (uVar13 & 0x3333333333333333);
          uVar13 = ((uVar13 >> 4) + uVar13 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
          if (uVar13 < 0x100000000000000) {
            local_298 = 0x58;
            local_290 = (longlong *******)0x0;
          }
          else {
            plVar9 = (longlong *)plVar15[2];
            if ((longlong *)plVar15[2] == (longlong *)0x0) {
              plVar9 = plVar15;
            }
            local_298 = plVar9[(uVar13 >> 0x38) - 1];
            uVar13 = *(ulonglong *)(local_298 + 0x30);
            if ((uVar13 & 1) != 0) {
              uVar13 = ((longlong)uVar13 >> 0x18) + local_298 + 0x30;
            }
            iVar12 = 0;
            if ((longlong)*(int *)(local_298 + 0x38) != 0) {
              lVar10 = 0;
              iVar12 = 0;
              do {
                iVar12 = iVar12 + (uint)*(ushort *)(uVar13 + 2 + lVar10);
                lVar10 = lVar10 + 0x18;
              } while ((longlong)*(int *)(local_298 + 0x38) * 0x18 != lVar10);
            }
            iVar18 = *(int *)(local_298 + 0x28);
            iVar17 = iVar18 + 0xe;
            if (-1 < iVar18 + 7) {
              iVar17 = iVar18 + 7;
            }
            if (*(ushort *)((longlong)plVar15 + 0x72) < 0x51) {
              plVar9 = plVar15 + 4;
            }
            else {
              plVar9 = (longlong *)plVar15[4];
            }
            local_290 = (longlong *******)((longlong)(int)uVar6 + (longlong)plVar9);
            uVar6 = ((iVar17 >> 3) +
                     (*(int *)(local_298 + 8) + *(int *)(local_298 + 0x18) + iVar18) * 8 + iVar12 +
                     7U & 0xfffffff8) + uVar6;
          }
          local_2e8 = plVar15 + 0xf;
          local_2f0 = &local_298;
          local_2f8 = (longlong *)param_13;
          local_308 = (undefined8 *)local_2d8;
          local_310 = local_2e0;
          local_318 = CONCAT44(local_318._4_4_,*(undefined4 *)(param_1 + 0x20));
          local_328 = local_2d0;
          local_320 = (longlong *)((ulonglong)local_320 & 0xffffffffffffff00);
          local_300 = (longlong *)lVar14;
          FUN_1456bf974(param_8[2],*(undefined8 *)(param_8[3] + 0x18),
                        *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x28));
        }
        if (param_8[4] != 0) {
          uVar13 = (ulonglong)(*(ushort *)(plVar15 + 0xe) & 0x1f) -
                   (ulonglong)(*(ushort *)(plVar15 + 0xe) >> 1 & 5);
          uVar13 = (uVar13 >> 2 & 0x3333333333333333) + (uVar13 & 0x3333333333333333);
          uVar13 = ((uVar13 >> 4) + uVar13 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
          if (uVar13 < 0x100000000000000) {
            local_298 = 0x58;
            local_290 = (longlong *******)0x0;
          }
          else {
            plVar9 = (longlong *)plVar15[2];
            if ((longlong *)plVar15[2] == (longlong *)0x0) {
              plVar9 = plVar15;
            }
            if (*(ushort *)((longlong)plVar15 + 0x72) < 0x51) {
              plVar16 = plVar15 + 4;
            }
            else {
              plVar16 = (longlong *)plVar15[4];
            }
            local_298 = plVar9[(uVar13 >> 0x38) - 1];
            local_290 = (longlong *******)((longlong)(int)uVar6 + (longlong)plVar16);
          }
          local_2e8 = plVar15 + 0xf;
          local_2f0 = &local_298;
          local_2f8 = (longlong *)param_13;
          local_308 = (undefined8 *)local_2d8;
          local_310 = local_2e0;
          local_318 = CONCAT44(local_318._4_4_,*(undefined4 *)(param_1 + 0x20));
          local_328 = local_2d0;
          local_320 = (longlong *)((ulonglong)local_320 & 0xffffffffffffff00);
          local_300 = (longlong *)lVar14;
          FUN_1456bf974(param_8[4],*(undefined8 *)(param_8[5] + 0x18),
                        *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x28));
        }
        uVar6 = 0;
        local_290 = (longlong *******)CONCAT44(local_290._4_4_,0x7fffffff);
        bVar20 = DAT_14ca96500;
        if (*(int *)(param_1 + 0x20) == 1) {
joined_r0x0001400cfec8:
          if (bVar20 != 0) {
LAB_1400cfd49:
            uVar4 = *(uint *)(lVar14 + 0x54) & 7;
            if (uVar4 == 0) {
              uVar6 = *(uint *)(local_2b8 + 0x15c);
              uVar4 = *(uint *)(local_2b8 + 0x204) & 0x7fffffff;
            }
            else {
              if ((uVar4 != 1) || (*(longlong *)(param_1 + 0x28) == 0)) goto LAB_1400cfd78;
              uVar6 = *(uint *)(lVar14 + 0xa0) | 0x80000000;
              uVar4 = *(uint *)(lVar14 + 0xa4) | 0x80000000;
            }
            local_290 = (longlong *******)CONCAT44(local_290._4_4_,uVar4);
          }
        }
        else if (((2 < *(int *)(param_1 + 0x20)) &&
                 (lVar10 = (ulonglong)DAT_14ca85550 * 0x3c,
                 *(longlong *)(&DAT_14ca814b0 + lVar10) != DAT_14ca81490)) && (DAT_14ca85550 != 0xc)
                ) {
          if ((*(byte *)((longlong)&DAT_14ca814d8 + lVar10 + 3) & 0x10) != 0) {
            bVar20 = *(byte *)((longlong)&DAT_14ca814c8 + lVar10 + 3) & 0x20;
            goto joined_r0x0001400cfec8;
          }
          goto LAB_1400cfd49;
        }
LAB_1400cfd78:
        if (local_2b8 == 0) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = *(undefined4 *)(local_2b8 + 0x158);
        }
        local_298 = CONCAT44(uVar5,uVar6);
        local_300 = &local_288;
        local_308 = &local_228;
        local_310 = (undefined8 *)CONCAT71(local_310._1_7_,bVar21 | bVar19 & 0x20);
        local_318 = param_11;
        local_320 = (longlong *)CONCAT44(local_320._4_4_,param_10);
        local_328 = (longlong *)CONCAT44(local_328._4_4_,param_9);
        local_2f8 = plVar15;
        (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))
                  (*(longlong **)(param_1 + 0x30),local_2d8,(ulonglong)plVar22 & 0xffffffff,
                   &local_298);
        plVar15 = local_2c8;
      }
      plVar22 = (longlong *)((longlong)plVar22 + 1);
    } while (plVar22 != plVar15);
  }
  if (lStack_1e0 != 0) {
    FUN_140021284();
  }
  if (local_1e8 != 0) {
    FUN_140021284();
  }
  if (lStack_1f0 != 0) {
    FUN_140021284();
  }
  if (local_1f8 != 0) {
    FUN_140021284();
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  if ((0x50 < local_110._2_2_) && (local_160 != (longlong *******)0x0)) {
    FUN_1400020a8();
  }
  local_110 = local_110 & 0xffff;
  local_160 = (longlong *******)0x0;
  if (local_170 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_348) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1400d0044 FUN_1400d0044 body=327 status=ok
// SIG undefined FUN_1400d0044(void)

undefined8 FUN_1400d0044(undefined8 param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined **local_1a8;
  longlong *plStack_1a0;
  undefined ***local_198;
  undefined ****local_190;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14ab36890);
  if ((*(byte *)(param_2 + 5) & 5) != 0) {
    if (DAT_14cb12948 == (longlong *)0x0) {
      uVar2 = FUN_14125ebb0();
      DAT_14cb12948 = (longlong *)FUN_140002ddd(FUN_146414ef9,uVar2,L"ClothLODDataCommon");
    }
    local_190 = &local_198;
    local_1a8 = &PTR_FUN_149e37810;
    local_198 = &local_1a8;
    local_1b8 = 0;
    uStack_1b0 = 0;
    plStack_1a0 = param_2;
    (**(code **)(*DAT_14cb12948 + 0x2d0))(0,local_190,param_3,DAT_14cb12948);
  }
  uVar2 = FUN_1400d018c(param_2,param_3 + 0x138);
  FUN_1400d018c(uVar2,param_3 + 0x148);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14ab368c4);
  iVar1 = FUN_1448332aa(param_2,&DAT_14ab368c4);
  if (0 < iVar1) {
    local_1a8 = (undefined **)0x0;
    plStack_1a0 = (longlong *)0x0;
    FUN_14089a8aa(param_2,&local_1a8);
    FUN_14074fa8b(local_1a8,(ulonglong)plStack_1a0 & 0xffffffff);
    if (local_1a8 != (undefined **)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400d018c FUN_1400d018c body=378 status=ok
// SIG undefined FUN_1400d018c(void)

longlong * FUN_1400d018c(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 6,(longlong)*(int *)((longlong)param_2 + 0xc) << 6
            );
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_1400d0632(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x40000 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_1400d0370(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x40;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_2c) ||
       (FUN_1400d0632(param_2), 0 < (int)local_2c)) {
      iVar4 = 0;
      do {
        uVar3 = FUN_1400d0308(param_2);
        FUN_1400d0370(param_1,uVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1400d0308 FUN_1400d0308 body=66 status=ok
// SIG undefined FUN_1400d0308(void)

longlong FUN_1400d0308(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147d20624(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x40 + *param_1;
  FUN_1400d034a(lVar2,1);
  return lVar2;
}



// FUNCTION 1400d034a FUN_1400d034a body=38 status=ok
// SIG undefined FUN_1400d034a(void)

void FUN_1400d034a(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1[1] = 0x3f80000000000000;
    param_1[2] = 0;
    param_1[3] = 0x3f80000000000000;
    param_1[4] = 0;
    param_1[5] = 0x3f80000000000000;
    *(undefined4 *)(param_1 + 7) = 0;
    param_1 = param_1 + 8;
  }
  return;
}



// FUNCTION 1400d0370 FUN_1400d0370 body=705 status=ok
// SIG undefined FUN_1400d0370(void)

longlong * FUN_1400d0370(longlong *param_1,longlong param_2)

{
  undefined2 *puVar1;
  ulonglong *puVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x218))(param_1,&DAT_149e31250);
  uVar4 = FUN_1447e46aa(param_1,param_2);
  uVar4 = FUN_1447e46aa(uVar4,param_2 + 0x10);
  plVar5 = (longlong *)FUN_1447e46aa(uVar4,param_2 + 0x20);
  puVar1 = *(undefined2 **)plVar5[1];
  if ((undefined2 *)((undefined8 *)plVar5[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar5 + 0x170))(plVar5,(undefined2 *)(param_2 + 0x30),2);
    }
    else {
      thunk_FUN_1457251a8(plVar5);
    }
  }
  else {
    *(undefined2 *)(param_2 + 0x30) = *puVar1;
    *(longlong *)plVar5[1] = *(longlong *)plVar5[1] + 2;
  }
  puVar1 = *(undefined2 **)plVar5[1];
  if ((undefined2 *)((undefined8 *)plVar5[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar5 + 0x170))(plVar5,(undefined2 *)(param_2 + 0x32),2);
    }
    else {
      thunk_FUN_1457251a8(plVar5);
    }
  }
  else {
    *(undefined2 *)(param_2 + 0x32) = *puVar1;
    *(longlong *)plVar5[1] = *(longlong *)plVar5[1] + 2;
  }
  puVar1 = *(undefined2 **)plVar5[1];
  if ((undefined2 *)((undefined8 *)plVar5[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar5 + 0x170))(plVar5,(undefined2 *)(param_2 + 0x34),2);
    }
    else {
      thunk_FUN_1457251a8(plVar5);
    }
  }
  else {
    *(undefined2 *)(param_2 + 0x34) = *puVar1;
    *(longlong *)plVar5[1] = *(longlong *)plVar5[1] + 2;
  }
  puVar1 = *(undefined2 **)plVar5[1];
  if ((undefined2 *)((undefined8 *)plVar5[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar5 + 0x170))(plVar5,(undefined2 *)(param_2 + 0x36),2);
    }
    else {
      thunk_FUN_1457251a8(plVar5);
    }
  }
  else {
    *(undefined2 *)(param_2 + 0x36) = *puVar1;
    *(longlong *)plVar5[1] = *(longlong *)plVar5[1] + 2;
  }
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
LAB_1400d047c:
    puVar7 = (undefined4 *)(param_2 + 0x38);
    puVar8 = *(undefined4 **)param_1[1];
    if (puVar8 + 1 <= (undefined4 *)((undefined8 *)param_1[1])[1]) {
      *puVar7 = *puVar8;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
      goto LAB_1400d04a1;
    }
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) != 0) {
LAB_1400d0625:
      FUN_14572512c(param_1,puVar7);
      goto LAB_1400d04a1;
    }
    lVar6 = *param_1;
  }
  else {
    iVar3 = FUN_1448332aa(param_1,&DAT_149e31250);
    if (0x20 < iVar3) goto LAB_1400d047c;
    puVar2 = (ulonglong *)param_1[1];
    puVar7 = (undefined4 *)*puVar2 + 1;
    if (puVar7 <= (undefined4 *)puVar2[1]) {
      local_24 = *(undefined4 *)*puVar2;
      *puVar2 = (ulonglong)puVar7;
      goto LAB_1400d04a1;
    }
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) != 0) {
      puVar7 = &local_24;
      goto LAB_1400d0625;
    }
    lVar6 = *param_1;
    puVar7 = &local_24;
  }
  (**(code **)(lVar6 + 0x170))(param_1,puVar7,4);
LAB_1400d04a1:
  puVar8 = (undefined4 *)(param_2 + 0x3c);
  puVar7 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar7 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,puVar8,4);
    }
    else {
      FUN_14572512c(param_1,puVar8);
    }
  }
  else {
    *puVar8 = *puVar7;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400d0632 FUN_1400d0632 body=214 status=ok
// SIG undefined FUN_1400d0632(void)

void FUN_1400d0632(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (longlong)param_2 * 0x40;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar1 < 0x7ff1) {
          uVar1 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)
                                        [((longlong)param_2 & 0x3ffffffffffffffU) * 4]];
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
    if (param_2 <= (int)(uVar1 >> 6)) {
      uVar2 = uVar1 >> 6 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x40,0x10);
  }
  return;
}



// FUNCTION 1400d0708 FUN_1400d0708 body=230 status=ok
// SIG undefined FUN_1400d0708(void)

undefined4 * FUN_1400d0708(undefined4 *param_1,byte param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_2 == 0x1a) {
    uVar1 = 0xc0c00000;
    uVar2 = 0xc0c00000;
    uVar3 = 0xc0a00000;
    goto LAB_1400d0732;
  }
  uVar1 = 0xbf800000;
  if (param_2 < 0x12) {
    if (param_2 != 10) {
      if (param_2 == 1) {
        uVar1 = 0xc1b80000;
        uVar2 = uVar1;
        uVar3 = uVar1;
        goto LAB_1400d0732;
      }
      uVar2 = uVar1;
      uVar3 = 0xbf800000;
      if (param_2 != 2) goto LAB_1400d0732;
LAB_1400d07bc:
      uVar1 = 0xc1000000;
      uVar2 = uVar1;
      uVar3 = uVar1;
      goto LAB_1400d0732;
    }
  }
  else if (0x12 < param_2) {
    if (param_2 == 0x13) {
      uVar1 = 0xc1800000;
      uVar2 = uVar1;
      uVar3 = uVar1;
      goto LAB_1400d0732;
    }
    if (param_2 == 0x24) {
      uVar1 = 0xc0a00000;
      uVar2 = 0xc0c00000;
      uVar3 = uVar1;
      goto LAB_1400d0732;
    }
    uVar2 = 0xbf800000;
    uVar3 = 0xbf800000;
    if (param_2 != 0x25) goto LAB_1400d0732;
    goto LAB_1400d07bc;
  }
  uVar1 = 0xc1200000;
  uVar2 = uVar1;
  uVar3 = uVar1;
LAB_1400d0732:
  uVar1 = exp2f(uVar1);
  *param_1 = uVar1;
  uVar2 = exp2f(uVar2);
  param_1[1] = uVar2;
  uVar2 = exp2f(uVar3);
  param_1[2] = uVar2;
  return param_1;
}



// FUNCTION 1400d07ee FUN_1400d07ee body=469 status=ok
// SIG undefined FUN_1400d07ee(void)

void FUN_1400d07ee(undefined8 *param_1,undefined8 param_2,uint param_3,longlong param_4)

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
  
  if (((int)param_3 < 0) || (param_4 - 0x80000000U < 0xffffffff80000001)) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(param_3,param_4);
  }
  _Size = (ulonglong)param_3 * param_4;
  _Src = (void *)*param_1;
  if (_Size == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_1400d091e:
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
LAB_1400d095b:
    *param_1 = _Dst;
    return;
  }
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_1400d0858;
LAB_1400d084d:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_1400d0858:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 0xfU & 0xfffffffffffffff0);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (_Size < 0xff99) goto code_r0x0001400d0885;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x68,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x67U & 0xfffffffffffffff0);
    *(ulonglong *)(puVar4 + 0x10) = (longlong)puVar4 + _Size + 0x68;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_1400d08db:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_1400d095b;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_1400d091e;
code_r0x0001400d0885:
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
    _Dst = (void *)((longlong)puVar4 + 0x67U & 0xfffffffffffffff0);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_1400d08db;
    }
  }
  goto LAB_1400d084d;
}



// FUNCTION 1400d09c4 FUN_1400d09c4 body=137 status=ok
// SIG undefined FUN_1400d09c4(void)

void FUN_1400d09c4(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined1 auStack_68 [36];
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400d0b52();
  local_44 = param_5;
  FUN_1400d0a4e(param_1,param_2,param_4);
  FUN_1447e4b92(param_2,param_1 + 0x100,&local_44,0);
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400d0a4e FUN_1400d0a4e body=259 status=ok
// SIG undefined FUN_1400d0a4e(void)

void FUN_1400d0a4e(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 0xe2) != '\0') {
    *(undefined8 *)(param_3 + 0x28) = DAT_14c866ff8;
  }
  FUN_144775fd8(param_2,param_1 + 0xe0,*(undefined8 *)(param_3 + 0x10));
  FUN_144775e63(param_2,param_1 + 0xe4,*(undefined8 *)(param_3 + 0x18));
  uVar1 = 0x3f800000;
  local_50 = 0x3f800000;
  if (*(char *)(param_3 + 0x44) == '\0') {
    local_50 = 0;
  }
  local_4c = 0;
  local_44 = 0;
  FUN_1447e4998(param_2,param_1 + 0xe8,&local_50,0);
  if (*(char *)(param_3 + 0x44) == '\0') {
    local_50 = 0;
  }
  else {
    local_50 = 0x3f800000;
    uVar1 = 0;
  }
  local_4c = 0;
  local_44 = uVar1;
  FUN_1447e4998(param_2,param_1 + 0xee,&local_50,0);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400d0b52 FUN_1400d0b52 body=333 status=ok
// SIG undefined FUN_1400d0b52(void)

void FUN_1400d0b52(longlong param_1,longlong *param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  short *psVar5;
  undefined1 auStack_58 [32];
  short *local_38;
  short local_2a [5];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  lVar2 = FUN_1447e4f80();
  uVar1 = *(ulonglong *)(param_1 + 0xa0);
  uVar4 = param_1 + 0xa0 + ((longlong)uVar1 >> 0x18);
  if ((uVar1 & 1) == 0) {
    uVar4 = uVar1;
  }
  if (0 < (longlong)*(int *)(param_1 + 0xa8)) {
    lVar3 = 0;
    do {
      if (*(longlong *)(uVar4 + lVar3 * 4) == *(longlong *)(lVar2 + 0x28)) {
        uVar1 = *(ulonglong *)(param_1 + 0xb0);
        uVar4 = param_1 + 0xb0 + ((longlong)uVar1 >> 0x18);
        if ((uVar1 & 1) == 0) {
          uVar4 = uVar1;
        }
        psVar5 = (short *)(uVar4 + lVar3);
        goto LAB_1400d0c0b;
      }
      lVar3 = lVar3 + 2;
    } while ((longlong)*(int *)(param_1 + 0xa8) * 2 != lVar3);
  }
  psVar5 = &DAT_14c9c45cc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c45d0) {
    FUN_144b3d300(&DAT_14c9c45d0);
    if (DAT_14c9c45d0 == -1) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
  }
LAB_1400d0c0b:
  if (*psVar5 != -1) {
    local_2a[1] = 0;
    local_2a[2] = 0;
    local_2a[3] = 0;
    local_2a[4] = 0;
    local_38 = local_2a;
    local_2a[0] = *psVar5;
    FUN_144aaaac2(*param_2,*param_2 + 0x60,param_2 + 5);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400d0cb6 FUN_1400d0cb6 body=226 status=ok
// SIG undefined FUN_1400d0cb6(void)

longlong * FUN_1400d0cb6(longlong *param_1)

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
  pcVar13 = FUN_1463fee06;
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



// FUNCTION 1400d0d9a FUN_1400d0d9a body=118 status=ok
// SIG undefined FUN_1400d0d9a(void)

undefined8 * FUN_1400d0d9a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aa76140;
  FUN_1400d0e10(param_1[0x16],*(undefined4 *)(param_1 + 0x17));
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_1400d0e42(param_1 + 7);
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1400d0e10 FUN_1400d0e10 body=49 status=ok
// SIG undefined FUN_1400d0e10(void)

void FUN_1400d0e10(longlong param_1,int param_2)

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



// FUNCTION 1400d0e42 FUN_1400d0e42 body=72 status=ok
// SIG undefined FUN_1400d0e42(void)

void FUN_1400d0e42(longlong *param_1)

{
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_140731294(param_1 + 5,0);
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1400d0e8a FUN_1400d0e8a body=363 status=ok
// SIG undefined FUN_1400d0e8a(void)

char FUN_1400d0e8a(longlong param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 local_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  LOCK();
  bVar6 = *(char *)(param_1 + 0x10) == '\0';
  if (bVar6) {
    *(char *)(param_1 + 0x10) = '\x01';
  }
  UNLOCK();
  if (!bVar6) {
    FUN_1447d2058(param_1 + 0x10);
  }
  FUN_1400d0ff6(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x28));
  *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x10) = 0;
  FUN_1400d0ff6(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x30));
  *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x10) = 0;
  FUN_1400d0ff6(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x38));
  *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x10) = 0;
  FUN_1400d0ff6(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x10) = 0;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1447850c6();
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    local_48 = 0;
    uStack_40 = 0;
    FUN_144775d28(&local_48,1);
    uVar2 = uStack_40;
    lVar5 = (longlong)(int)uStack_40;
    uVar4 = (int)uStack_40 + 1;
    uStack_40 = CONCAT44(uStack_40._4_4_,uVar4);
    if (uStack_40._4_4_ < uVar4) {
      FUN_14741464c(&local_48,uVar2 & 0xffffffff);
    }
    *(undefined8 *)(local_48 + lVar5 * 8) = uVar1;
    local_58 = local_48;
    local_50 = (int)uStack_40;
    FUN_14007658c(&DAT_14ca850c8,&local_58,0);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  LOCK();
  cVar3 = *(char *)(param_1 + 0x10);
  bVar6 = cVar3 == '\x01';
  if (bVar6) {
    *(char *)(param_1 + 0x10) = '\0';
    cVar3 = '\x01';
  }
  UNLOCK();
  if (!bVar6) {
    cVar3 = FUN_14008cdb0(param_1 + 0x10);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return cVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400d0ff6 FUN_1400d0ff6 body=142 status=ok
// SIG undefined FUN_1400d0ff6(void)

void FUN_1400d0ff6(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = (int)param_2[1];
  if (0 < iVar5) {
    iVar4 = 0;
    do {
      iVar2 = DAT_14c760dc8;
      lVar1 = *(longlong *)(*param_2 + (longlong)iVar4 * 8);
      if (*(longlong *)(lVar1 + 0x20) == 0) {
        if (((DAT_14c760dc8 != 0) && (*(int *)(lVar1 + 0x28) == 0)) &&
           (iVar3 = *(int *)(lVar1 + 0x2c) + 1, *(int *)(lVar1 + 0x2c) = iVar3, iVar2 <= iVar3)) {
          FUN_14011fb0c(lVar1 + 8);
          FUN_140ee2dc4(param_2,iVar4,1);
          iVar4 = iVar4 + -1;
          iVar5 = iVar5 + -1;
        }
      }
      else {
        FUN_1431f8bac(lVar1,param_1);
        *(undefined8 *)(lVar1 + 0x28) = 0;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar5);
  }
  return;
}



// FUNCTION 1400d1092 FUN_1400d1092 body=31 status=ok
// SIG undefined FUN_1400d1092(void)

undefined8 FUN_1400d1092(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1400d10b2 FUN_1400d10b2 body=202 status=ok
// SIG undefined FUN_1400d10b2(void)

void FUN_1400d10b2(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  
  FUN_1447e5c72(param_1 + 0x10,param_2 + 0x10);
  FUN_1447e5c72(param_1 + 0x2b0,param_2 + 0x2b0);
  uVar1 = *(uint *)(param_2 + 0x560);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x560);
    *(uint *)(param_1 + 0x560) = iVar2 + uVar1;
    if ((uint)(*(int *)(param_1 + 0x564) - iVar2) < uVar1) {
      FUN_14716616c((longlong *)(param_1 + 0x558),iVar2);
    }
    memcpy((void *)((longlong)iVar2 * 8 + *(longlong *)(param_1 + 0x558)),
           *(void **)(param_2 + 0x558),(longlong)(int)uVar1 << 3);
  }
  *(undefined4 *)(param_2 + 0x560) = 0;
  if (*(int *)(param_2 + 0x564) == 0) {
    return;
  }
  FUN_147d0aef6((undefined8 *)(param_2 + 0x558),0);
  return;
}



// FUNCTION 1400d1184 FUN_1400d1184 body=145 status=ok
// SIG undefined FUN_1400d1184(void)

undefined8 FUN_1400d1184(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  
  lVar2 = FUN_14007026e(&DAT_14c967f20,*(undefined4 *)(param_1 + 8));
  if (lVar2 != 0) {
    lVar2 = *(longlong *)(lVar2 + 0x10);
    uVar1 = *(uint *)(param_1 + 0x10);
    uVar3 = uVar1 & 0xffff;
    if ((int)uVar3 < *(int *)(lVar2 + 0x38)) {
      lVar4 = lVar2 + 0x20;
      if (*(longlong *)(lVar2 + 0x30) != 0) {
        lVar4 = *(longlong *)(lVar2 + 0x30);
      }
      if ((*(uint *)(lVar4 + (ulonglong)(uVar3 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0) {
        uVar1 = uVar1 >> 0x10;
        lVar2 = *(longlong *)(lVar2 + 0x10);
        if ((*(ushort *)(lVar2 + 0xc + (ulonglong)(uVar3 << 6)) <= uVar1) &&
           ((int)uVar1 < *(int *)((ulonglong)(uVar3 << 6) + lVar2 + 0x18))) {
          return CONCAT71((int7)((ulonglong)uVar1 * 3 >> 8),
                          *(longlong *)
                           (*(longlong *)(lVar2 + 0x10 + (ulonglong)(uVar3 << 6)) +
                           (ulonglong)uVar1 * 0x18) == param_2);
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1400d1216 FUN_1400d1216 body=16 status=ok
// SIG undefined FUN_1400d1216(void)

undefined8 FUN_1400d1216(longlong param_1,int *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar3 = *(longlong *)(param_1 + 8);
  if (lVar3 == 0) {
    return 0;
  }
  if (*param_2 == DAT_14cab2cd4) {
    if (*(int *)(lVar3 + 0x14) != 0) {
      uVar1 = *(uint *)(lVar3 + 0x10);
      if ((int)uVar1 < 0) {
        return 0;
      }
      if (DAT_14c9647dc <= (int)uVar1) {
        return 0;
      }
      puVar2 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if (((puVar2 != (undefined8 *)0x0) && (*(int *)(puVar2 + 2) == *(int *)(lVar3 + 0x14))) &&
         ((*(uint *)(puVar2 + 1) & 0x10200000) == 0)) {
        return *puVar2;
      }
    }
  }
  else if ((((*(longlong *)(lVar3 + 0x28) != 0) && (*(int *)(lVar3 + 0x34) != -1)) &&
           (lVar3 = FUN_1400a382a(*(longlong *)(lVar3 + 0x28)), lVar3 != 0)) &&
          (lVar3 = FUN_1400d12c6(lVar3,param_2), lVar3 != 0)) {
    uVar4 = FUN_1400a4c08(lVar3);
    return uVar4;
  }
  return 0;
}



// FUNCTION 1400d1226 FUN_1400d1226 body=160 status=ok
// SIG undefined FUN_1400d1226(void)

undefined8 FUN_1400d1226(longlong param_1,int *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (*param_2 == DAT_14cab2cd4) {
    if (*(int *)(param_1 + 0x14) != 0) {
      uVar1 = *(uint *)(param_1 + 0x10);
      if ((int)uVar1 < 0) {
        return 0;
      }
      if (DAT_14c9647dc <= (int)uVar1) {
        return 0;
      }
      puVar2 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if (((puVar2 != (undefined8 *)0x0) && (*(int *)(puVar2 + 2) == *(int *)(param_1 + 0x14))) &&
         ((*(uint *)(puVar2 + 1) & 0x10200000) == 0)) {
        return *puVar2;
      }
    }
  }
  else if ((((*(longlong *)(param_1 + 0x28) != 0) && (*(int *)(param_1 + 0x34) != -1)) &&
           (lVar3 = FUN_1400a382a(*(longlong *)(param_1 + 0x28)), lVar3 != 0)) &&
          (lVar3 = FUN_1400d12c6(lVar3,param_2), lVar3 != 0)) {
    uVar4 = FUN_1400a4c08(lVar3);
    return uVar4;
  }
  return 0;
}



// FUNCTION 1400d12c6 FUN_1400d12c6 body=124 status=ok
// SIG undefined FUN_1400d12c6(void)

longlong FUN_1400d12c6(longlong param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  uVar1 = *param_2;
  if (uVar1 == DAT_14cab2074) {
    return 0;
  }
  if (*(int *)(param_1 + 0xa0) != *(int *)(param_1 + 0xcc)) {
    lVar3 = param_1 + 0xd0;
    if (*(longlong *)(param_1 + 0xd8) != 0) {
      lVar3 = *(longlong *)(param_1 + 0xd8);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0xe0) - 1U & uVar1) * 4);
    if (iVar4 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x98) + (longlong)iVar4 * 0x100;
        if (*(uint *)(*(longlong *)(param_1 + 0x98) + (longlong)iVar4 * 0x100) == uVar1)
        goto LAB_1400d1322;
        iVar4 = *(int *)(lVar3 + 0xf8);
      } while (iVar4 != -1);
    }
  }
  lVar3 = 0;
LAB_1400d1322:
  lVar2 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 1400d134e FUN_1400d134e body=136 status=ok
// SIG undefined FUN_1400d134e(void)

void FUN_1400d134e(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar2 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar2) {
      FUN_1400d13d6(param_1,iVar1);
    }
    if (uVar2 != 0) {
      memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(ulonglong)uVar2 << 4);
      return;
    }
    return;
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
    FUN_146d89674(param_1);
    return;
  }
  return;
}



// FUNCTION 1400d13d6 FUN_1400d13d6 body=269 status=ok
// SIG undefined FUN_1400d13d6(void)

void FUN_1400d13d6(longlong param_1,int param_2)

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
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,0x10);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1400d14e4 FUN_1400d14e4 body=54 status=ok
// SIG undefined FUN_1400d14e4(void)

undefined8
FUN_1400d14e4(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined4 param_5)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0xd78) < 1) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1400d151a(param_1,param_1 + 0xd70,param_3,param_5,param_2,param_4);
  }
  return uVar1;
}



// FUNCTION 1400d151a FUN_1400d151a body=535 status=ok
// SIG undefined FUN_1400d151a(void)

bool FUN_1400d151a(longlong param_1,code *param_2,undefined8 param_3,float param_4,longlong param_5)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  wchar_t *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  code **local_b0;
  undefined1 *local_a8;
  code *local_a0;
  code *local_98;
  undefined8 local_90;
  uint *local_88;
  longlong local_80;
  longlong *local_78;
  longlong *local_70;
  code *local_68;
  code **local_60;
  uint local_54;
  longlong local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_48 = param_1;
  if (param_1 != 0) {
    iVar1 = *(int *)(param_5 + 8);
    if (DAT_14cad2858 == 0) {
      local_b0 = &local_98;
      local_98 = FUN_144a7958c;
      local_a0 = FUN_14081d0ea;
      local_a8 = &LAB_146395584;
      local_b8 = &LAB_147a0ba80;
      local_c0 = &LAB_14575ccce;
      local_c8 = L"Engine";
      local_d0 = 0x40000000000;
      local_d8 = 0x10000004;
      local_e0 = 0x10;
      local_e8 = 0x1180;
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
    }
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(DAT_14cad2858 + 0x38)) ||
       (local_50 = param_1,
       *(longlong *)
        (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
        (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) != DAT_14cad2858 + 0x30)) {
      local_50 = 0;
    }
    lVar3 = *(longlong *)(param_1 + 0xb0);
    if (lVar3 == 0) {
      lVar3 = FUN_1448abda6(param_1);
      if (lVar3 == 0) goto LAB_1400d172b;
    }
    if (*(longlong *)(lVar3 + 0x260) != 0) {
      local_54 = ~-(uint)(param_4 < 0.0) & (uint)(param_4 * param_4) |
                 -(uint)(param_4 < 0.0) & 0x7f7fffff;
      local_88 = &local_54;
      local_60 = &local_98;
      local_80 = param_5;
      local_78 = &local_48;
      local_70 = &local_50;
      local_68 = FUN_1436247b4;
      local_98 = param_2;
      local_90 = param_3;
      FUN_1400d1732();
      bVar2 = iVar1 < *(int *)(param_5 + 8);
      goto LAB_1400d163f;
    }
  }
LAB_1400d172b:
  bVar2 = false;
LAB_1400d163f:
  if ((local_40 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400d1732 FUN_1400d1732 body=118 status=ok
// SIG undefined FUN_1400d1732(void)

bool FUN_1400d1732(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [32];
  char local_38 [8];
  undefined8 local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != 0) {
    local_38[0] = '\0';
    local_30 = *(undefined8 *)(param_1 + 0x38);
    local_28 = 0;
    FUN_1447e649a(local_38);
    (*(code *)*param_2)(param_2[1]);
    if (local_38[0] == '\x01') {
      FUN_1447e63de(local_38);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400d17aa FUN_1400d17aa body=246 status=ok
// SIG undefined FUN_1400d17aa(void)

void FUN_1400d17aa(longlong *param_1,undefined4 *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1[0x7a] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  if ((param_1[0x2e] != 0) && (DAT_14c87ead8 == '\0')) {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  iVar2 = FUN_14487fd02(param_1);
  if ((iVar2 == 3) && (plVar1 = (longlong *)param_1[0x1e9], plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x718))(plVar1,&local_40);
    *(undefined8 *)(param_2 + 4) = local_30;
    *param_2 = local_40;
    param_2[1] = uStack_3c;
    param_2[2] = uStack_38;
    param_2[3] = uStack_34;
    (**(code **)(*(longlong *)param_1[0x1e9] + 0x710))((longlong *)param_1[0x1e9],&local_40);
    *(undefined8 *)(param_3 + 4) = local_30;
    *param_3 = local_40;
    param_3[1] = uStack_3c;
    param_3[2] = uStack_38;
    param_3[3] = uStack_34;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x0001400d18b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb80))(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400d1928 FUN_1400d1928 body=228 status=ok
// SIG undefined FUN_1400d1928(void)

longlong FUN_1400d1928(void)

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
  if (DAT_14cafa698 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_141117124;
    local_38 = &LAB_147ca90b4;
    local_40 = &LAB_1463fac47;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x450;
    FUN_14081cfa3(L"/Script/Engine",L"PlayerState",&DAT_14cafa698,FUN_1463fac20);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cafa698;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400d1a0e FUN_1400d1a0e body=406 status=ok
// SIG undefined FUN_1400d1a0e(void)

void FUN_1400d1a0e(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  int iVar12;
  undefined8 *puVar13;
  double *pdVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_1 + 0x1c8);
  if (lVar1 == 0) {
    puVar13 = &DAT_14c8464e0;
    uVar16 = (undefined4)DAT_14c8464f0;
    uVar17 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
  }
  else {
    uVar16 = (undefined4)*(undefined8 *)(lVar1 + 0x270);
    uVar17 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x270) >> 0x20);
    puVar13 = (undefined8 *)(lVar1 + 0x260);
  }
  uVar4 = *(undefined4 *)((longlong)puVar13 + 4);
  uVar5 = *(undefined4 *)(puVar13 + 1);
  uVar6 = *(undefined4 *)((longlong)puVar13 + 0xc);
  *param_2 = *(undefined4 *)puVar13;
  param_2[1] = uVar4;
  param_2[2] = uVar5;
  param_2[3] = uVar6;
  *(ulonglong *)(param_2 + 4) = CONCAT44(uVar17,uVar16);
  lVar1 = *(longlong *)(param_1 + 0x1c8);
  if (lVar1 == 0) {
    local_48 = DAT_14c846508;
    local_58 = (undefined4)DAT_14c8464f8;
    uStack_54 = DAT_14c8464f8._4_4_;
    uStack_50 = (undefined4)DAT_14c846500;
    uStack_4c = DAT_14c846500._4_4_;
  }
  else {
    dVar7 = *(double *)(lVar1 + 0x240);
    dVar8 = *(double *)(lVar1 + 0x248);
    dVar9 = *(double *)(lVar1 + 0x250);
    dVar10 = *(double *)(lVar1 + 600);
    pdVar14 = *(double **)(lVar1 + 0x228);
    local_78 = dVar7;
    uStack_70 = dVar8;
    local_68 = dVar9;
    uStack_60 = dVar10;
    if (pdVar14 == (double *)0x0) {
      param_1 = 0x40;
      pdVar14 = (double *)FUN_14001cc68(0x40,0x10);
      dVar11 = DAT_14c8463d8;
      *pdVar14 = DAT_14c8463d0;
      pdVar14[1] = dVar11;
      dVar11 = DAT_14c8463e8;
      pdVar14[2] = DAT_14c8463e0;
      pdVar14[3] = dVar11;
      dVar11 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
      pdVar14[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
      pdVar14[5] = dVar11;
      puVar13 = DAT_14c846508;
      pdVar14[6] = (double)DAT_14c846508;
      *(double **)(lVar1 + 0x228) = pdVar14;
    }
    auVar2._8_4_ = (int)-(ulonglong)(dVar8 != pdVar14[1]);
    auVar2._0_8_ = -(ulonglong)(dVar7 != *pdVar14);
    auVar2._12_4_ = (int)(-(ulonglong)(dVar8 != pdVar14[1]) >> 0x20);
    iVar12 = movmskpd((int)puVar13,auVar2);
    auVar3._8_4_ = (int)-(ulonglong)(dVar10 != pdVar14[3]);
    auVar3._0_8_ = -(ulonglong)(dVar9 != pdVar14[2]);
    auVar3._12_4_ = (int)(-(ulonglong)(dVar10 != pdVar14[3]) >> 0x20);
    uVar15 = movmskpd((int)param_1,auVar3);
    if ((uVar15 & 0x3fffffff) != 0 || iVar12 != 0) {
      *(undefined4 *)(pdVar14 + 2) = (undefined4)local_68;
      *(undefined4 *)((longlong)pdVar14 + 0x14) = local_68._4_4_;
      *(undefined4 *)(pdVar14 + 3) = (undefined4)uStack_60;
      *(undefined4 *)((longlong)pdVar14 + 0x1c) = uStack_60._4_4_;
      *(undefined4 *)pdVar14 = (undefined4)local_78;
      *(undefined4 *)((longlong)pdVar14 + 4) = local_78._4_4_;
      *(undefined4 *)(pdVar14 + 1) = (undefined4)uStack_70;
      *(undefined4 *)((longlong)pdVar14 + 0xc) = uStack_70._4_4_;
      FUN_1448052ee(&local_78,&local_58);
      pdVar14[6] = (double)local_48;
      pdVar14[4] = (double)CONCAT44(uStack_54,local_58);
      pdVar14[5] = (double)CONCAT44(uStack_4c,uStack_50);
    }
    local_48 = (undefined8 *)pdVar14[6];
    local_58 = *(undefined4 *)(pdVar14 + 4);
    uStack_54 = *(undefined4 *)((longlong)pdVar14 + 0x24);
    uStack_50 = *(undefined4 *)(pdVar14 + 5);
    uStack_4c = *(undefined4 *)((longlong)pdVar14 + 0x2c);
  }
  *(undefined8 **)(param_3 + 4) = local_48;
  *param_3 = local_58;
  param_3[1] = uStack_54;
  param_3[2] = uStack_50;
  param_3[3] = uStack_4c;
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400d1ba6 FUN_1400d1ba6 body=214 status=ok
// SIG undefined FUN_1400d1ba6(void)

void FUN_1400d1ba6(longlong *param_1,undefined4 *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((param_1[0x7a] != 0) || (param_1[0xf4] != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  plVar1 = (longlong *)param_1[0x89];
  if (plVar1 == (longlong *)0x0) {
    local_38 = param_1[0xf8];
    local_48 = param_1[0xf6];
    uStack_40 = param_1[0xf7];
  }
  else {
    (**(code **)(*plVar1 + 0x730))(plVar1,&local_48);
  }
  *(longlong *)(param_2 + 4) = local_38;
  *param_2 = (undefined4)local_48;
  param_2[1] = local_48._4_4_;
  param_2[2] = (undefined4)uStack_40;
  param_2[3] = uStack_40._4_4_;
  (**(code **)(*param_1 + 0x680))(param_1,&local_48);
  *(longlong *)(param_3 + 4) = local_38;
  *param_3 = (undefined4)local_48;
  param_3[1] = local_48._4_4_;
  param_3[2] = (undefined4)uStack_40;
  param_3[3] = uStack_40._4_4_;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400d1c9c FUN_1400d1c9c body=147 status=ok
// SIG undefined FUN_1400d1c9c(void)

void FUN_1400d1c9c(longlong *param_1,longlong param_2)

{
  uint uVar1;
  undefined1 auStack_1c8 [32];
  undefined **local_1a8;
  longlong local_1a0;
  undefined ***local_198;
  undefined8 **local_190;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_190 = &local_198;
  local_1a8 = &PTR_FUN_149e37810;
  local_198 = &local_1a8;
  local_1a0 = param_2;
  switchD_143c3d4dc::caseD_20();
  if (((*(byte *)(param_2 + 0x28) & 1) != 0) &&
     (uVar1 = *(uint *)(param_1 + 6), *(uint *)(param_1 + 6) = uVar1 | 1, (~uVar1 & 4) == 0)) {
    (**(code **)(*param_1 + 0x428))(param_1);
    *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfe;
  }
  if ((local_18 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400d1d30 FUN_1400d1d30 body=227 status=ok
// SIG undefined FUN_1400d1d30(void)

void FUN_1400d1d30(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_78 [36];
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((longlong)*(int *)(param_1 + 0x60) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x58);
    lVar4 = (longlong)*(int *)(param_1 + 0x60) * 0xb8;
    do {
      lVar2 = FUN_1447e736e(lVar3 + 0x90);
      if (lVar2 == 0) {
        lVar2 = lVar3 + 0x10;
      }
      else {
        lVar2 = FUN_1447e736e(lVar3 + 0x90);
        lVar2 = lVar2 + 0x30;
      }
      if (lVar2 != 0) {
        uVar1 = *(undefined8 *)(param_1 + 8);
        local_54 = FUN_1448c9f94(lVar2,param_2,0);
        if ((*(int *)(param_1 + 0x18) != -1) && (*(int *)(param_1 + 0x1c) != -1)) {
          FUN_144848652(uVar1,param_1 + 0x18,lVar3,&local_54);
        }
      }
      lVar3 = lVar3 + 0xb8;
      lVar4 = lVar4 + -0xb8;
    } while (lVar4 != 0);
  }
  if ((local_50 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1400d1e14 FUN_1400d1e14 body=228 status=ok
// SIG undefined FUN_1400d1e14(void)

longlong FUN_1400d1e14(void)

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
  if (DAT_14cad4178 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1463c12d8;
    local_38 = &LAB_147a3e887;
    local_40 = FUN_1434a7483;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xb8;
    FUN_14081cfa3(L"/Script/Engine",L"CurveFloat",&DAT_14cad4178,FUN_1463c1428);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad4178;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400d1efa FUN_1400d1efa body=273 status=ok
// SIG undefined FUN_1400d1efa(void)

float FUN_1400d1efa(longlong *param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  float fVar5;
  
  if ((char)param_1[0x220] == '\r') {
    if (param_1[0x842] != 0) {
      if (((((*(int *)((longlong)param_1 + 0x44f4) == 0) ||
            (uVar1 = *(uint *)(param_1 + 0x89e), (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1))
          || ((plVar4 = (longlong *)
                        ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
              plVar4 == (longlong *)0x0 || ((int)plVar4[2] != *(int *)((longlong)param_1 + 0x44f4)))
             )) || (((*(uint *)(plVar4 + 1) & 0x10200000) != 0 ||
                    ((*plVar4 == 0 || (lVar3 = 0x940, *(char *)(*plVar4 + 0x25fa) == '\0')))))) {
        lVar3 = 0x908;
      }
      return *(float *)(param_1[0x842] + lVar3);
    }
  }
  else if (((char)param_1[0x220] == '\n') && (param_1[0x22] != 0)) {
    fVar5 = (float)(**(code **)(*param_1 + 0xd88))(param_1);
    goto LAB_1400d1fa1;
  }
  if (param_1[0x279] == 0) {
    fVar5 = (float)FUN_1479c3182(param_1);
  }
  else {
    fVar5 = *(float *)(param_1[0x279] + 0x38);
  }
LAB_1400d1fa1:
  cVar2 = (**(code **)(param_1[0x2f] + 0xd8))(param_1 + 0x2f);
  if ((cVar2 != '\0') && (param_1[0x57c] == DAT_14cbc6c58)) {
    fVar5 = fVar5 * *(float *)(param_1[0x842] + 0x268);
  }
  return fVar5;
}



// FUNCTION 1400d200c FUN_1400d200c body=171 status=ok
// SIG undefined FUN_1400d200c(void)

void FUN_1400d200c(ulonglong *param_1)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  if (*param_1 != 0) {
    piVar3 = (int *)(*param_1 & 0xffffffffffff0000);
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
          __tlregdtor(&LAB_1427ae0f1);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0001400d207f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      _aligned_free(_Memory);
      return;
    }
  }
  return;
}



// FUNCTION 1400d20b8 FUN_1400d20b8 body=564 status=ok
// SIG undefined FUN_1400d20b8(void)

void FUN_1400d20b8(longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined8 uVar3;
  int *piVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  bool bVar10;
  
  if (*(longlong *)(param_2 + 8) != 0) {
    puVar1 = (undefined8 *)(param_2 + 8);
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x20));
    iVar7 = *(int *)(param_1 + 0x30);
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x20));
    puVar9 = (undefined8 *)*puVar1;
    if (0 < iVar7) {
      iVar7 = 0;
      for (; puVar9 != (undefined8 *)0x0; puVar9 = (undefined8 *)*puVar9) {
        puVar9[0xb] = param_3;
        iVar7 = iVar7 + 1;
      }
      if (param_3 != 0) {
        LOCK();
        *(int *)(param_3 + 0x50) = *(int *)(param_3 + 0x50) + iVar7;
        UNLOCK();
      }
      LOCK();
      bVar10 = *(char *)(param_1 + 0xf2) == '\0';
      if (bVar10) {
        *(char *)(param_1 + 0xf2) = '\x01';
      }
      UNLOCK();
      if (!bVar10) {
        FUN_1447d2058(param_1 + 0xf2);
      }
      uVar3 = *(undefined8 *)(param_2 + 0x10);
      if (*(undefined8 **)(param_1 + 0x98) == (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 8);
      }
      else {
        **(undefined8 **)(param_1 + 0x98) = *(undefined8 *)(param_2 + 8);
      }
      *(undefined8 *)(param_1 + 0x98) = uVar3;
      LOCK();
      bVar10 = *(char *)(param_1 + 0xf2) == '\x01';
      if (bVar10) {
        *(char *)(param_1 + 0xf2) = '\0';
      }
      UNLOCK();
      if (!bVar10) {
        FUN_14008cdb0(param_1 + 0xf2);
      }
      *puVar1 = 0;
      *(undefined8 *)(param_2 + 0x10) = 0;
      if (*(char *)(*(longlong *)(param_1 + 8) + 0x28) != '\x01') {
        FUN_142767d66(param_1);
        while (*(longlong *)(param_1 + 0xe0) != 0) {
          FUN_144809d06(param_1);
        }
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x0001400d22bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(param_1 + 0x88) + 0x10))();
      return;
    }
    while (puVar6 = puVar9, puVar6 != (undefined8 *)0x0) {
      puVar9 = (undefined8 *)*puVar6;
      FUN_1400f2382(param_1,puVar6,8);
      LOCK();
      piVar4 = (int *)(puVar6 + 0x16);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        piVar4 = (int *)puVar6[9];
        if (puVar6[0xe] != 0) {
          plVar8 = puVar6 + 0x12;
          if ((longlong *)puVar6[0x10] != (longlong *)0x0) {
            plVar8 = (longlong *)puVar6[0x10];
          }
          (**(code **)(*plVar8 + 0x10))();
        }
        if (*(char *)(puVar6 + 0xd) == '\x01') {
          lVar5 = puVar6[0xc];
          if (lVar5 != 0) {
            LOCK();
            piVar2 = (int *)(lVar5 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              FUN_144716208(lVar5);
              FUN_1400020a8(lVar5);
            }
          }
          *(undefined1 *)(puVar6 + 0xd) = 0;
        }
        EnterCriticalSection((LPCRITICAL_SECTION)(piVar4 + 8));
        puVar6[0x18] = *(undefined8 *)(piVar4 + 4);
        *(undefined8 **)(piVar4 + 4) = puVar6;
        piVar4[6] = piVar4[6] + -1;
        LeaveCriticalSection((LPCRITICAL_SECTION)(piVar4 + 8));
        LOCK();
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (piVar4 != (int *)0x0 && *piVar4 == 0) {
          FUN_1456cc566(piVar4 + 2);
          FUN_1400020a8(piVar4);
        }
      }
    }
    *puVar1 = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
  }
  if (param_3 == 0) {
    return;
  }
  FUN_1400f2252(param_1,param_3);
  return;
}



// FUNCTION 1400d22ec FUN_1400d22ec body=532 status=ok
// SIG undefined FUN_1400d22ec(void)

void FUN_1400d22ec(undefined8 *param_1,undefined1 param_2)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  
  lVar8 = 0;
  bVar6 = true;
  do {
    bVar7 = bVar6;
    lVar5 = param_1[0xe];
    lVar8 = lVar8 * 0xf8;
    lVar2 = lVar5 + lVar8;
    iVar4 = *(int *)(lVar5 + 0xe4 + lVar8);
    FUN_1447e76d0(*(undefined8 *)(lVar5 + 0xd8 + lVar8),*(undefined4 *)(lVar5 + 0xe0 + lVar8));
    *(undefined4 *)(lVar5 + 0xe0 + lVar8) = 0;
    if ((iVar4 < 0) && (*(int *)(lVar2 + 0xe4) != 0)) {
      FUN_1472c3860(lVar5 + lVar8 + 0xd8);
    }
    if (*(int *)(lVar2 + 0xf4) < 0) {
      *(undefined4 *)(lVar2 + 0xf0) = 0;
      FUN_1472c3890(lVar2 + 0xe8);
    }
    else {
      *(undefined4 *)(lVar2 + 0xf0) = 0;
    }
    lVar8 = *(longlong *)(lVar2 + 0x60);
    if (lVar8 != 0) {
      *(undefined8 *)(lVar2 + 0x60) = 0;
      LOCK();
      puVar1 = (uint *)(lVar8 + 8);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    *(undefined8 *)(lVar2 + 0x68) = 0;
    *(undefined8 *)(lVar2 + 0x70) = 0;
    *(undefined8 *)(lVar2 + 0x80) = 0;
    *(undefined8 *)(lVar2 + 0x88) = 0;
    *(undefined8 *)(lVar2 + 200) = 0;
    *(undefined8 *)(lVar2 + 0xd0) = 0;
    lVar8 = 1;
    bVar6 = false;
  } while (bVar7);
  iVar4 = *(int *)((longlong)param_1 + 0x1c);
  FUN_1400d2500(param_1[2],*(undefined4 *)(param_1 + 3));
  *(undefined4 *)(param_1 + 3) = 0;
  if ((iVar4 < 0) && (*(int *)((longlong)param_1 + 0x1c) != 0)) {
    FUN_1472c38c0(param_1 + 2,0);
  }
  iVar4 = *(int *)((longlong)param_1 + 0x2c);
  FUN_14474ae1f(param_1[4],*(undefined4 *)(param_1 + 5));
  *(undefined4 *)(param_1 + 5) = 0;
  if ((iVar4 < 0) && (*(int *)((longlong)param_1 + 0x2c) != 0)) {
    FUN_1472c2746(param_1 + 4,0);
  }
  if (*(int *)((longlong)param_1 + 0x3c) < 0) {
    *(undefined4 *)(param_1 + 7) = 0;
    FUN_1472c3932(param_1 + 6,0);
  }
  else {
    *(undefined4 *)(param_1 + 7) = 0;
  }
  if (*(int *)((longlong)param_1 + 0x4c) < 0) {
    *(undefined4 *)(param_1 + 9) = 0;
    FUN_140ca8596(param_1 + 8,0);
  }
  else {
    *(undefined4 *)(param_1 + 9) = 0;
  }
  *param_1 = 0x100000000;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_14004673c(param_1 + 0x10,0);
  *(undefined1 *)(param_1 + 0x15) = param_2;
  return;
}



// FUNCTION 1400d2500 FUN_1400d2500 body=43 status=ok
// SIG undefined FUN_1400d2500(void)

void FUN_1400d2500(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_144ab2e4c(param_1);
    param_1 = param_1 + 0x90;
  }
  return;
}



// FUNCTION 1400d252c FUN_1400d252c body=132 status=ok
// SIG undefined FUN_1400d252c(void)

void FUN_1400d252c(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  if ((((*(int *)(param_2 + 1) < 2) && (*(int *)(param_2 + 3) == 0)) && (*(int *)(param_2 + 5) == 0)
      ) && (*(int *)(param_2 + 7) == 0)) {
    if (*(int *)(param_2 + 1) < 1) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)*param_2;
    }
    uVar2 = *(uint *)(param_1 + 8);
    if ((uVar2 & 4) == 0) {
      lVar1 = *(longlong *)(param_1 + 0x78);
      if (lVar1 != 0) {
        FUN_144aa4484(lVar1);
        FUN_1400020a8(lVar1);
        uVar2 = *(uint *)(param_1 + 8);
      }
      *(uint *)(param_1 + 8) = uVar2 | 4;
    }
    *(undefined4 *)(param_1 + 0x78) = uVar4;
    return;
  }
  uVar3 = FUN_140135db2(param_1);
  FUN_1400bff1c(uVar3,param_2);
  return;
}



// FUNCTION 1400d25b0 FUN_1400d25b0 body=89 status=ok
// SIG undefined FUN_1400d25b0(void)

void FUN_1400d25b0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (((param_2 != (longlong *)0x0) &&
      (lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x1e8) + (longlong)(int)param_2[1] * 8),
      lVar1 != 0)) && (0 < (longlong)*(int *)(lVar1 + 0x18))) {
    uVar2 = (longlong)*(int *)(lVar1 + 0x18) + 1;
    do {
      FUN_1400d2a94(param_1,**(undefined8 **)(*(longlong *)(lVar1 + 0x10) + -0x10 + uVar2 * 8));
      uVar2 = uVar2 - 1;
    } while (1 < uVar2);
  }
  return;
}



// FUNCTION 1400d260a FUN_1400d260a body=236 status=ok
// SIG undefined FUN_1400d260a(void)

void FUN_1400d260a(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (undefined8 *)*param_2;
  if (local_28 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = *(int *)(local_28 + 1) + 1;
    UNLOCK();
  }
  (**(code **)(*(longlong *)*param_1 + 0x10))((longlong *)*param_1,(int)param_1[1],&local_28);
  if (local_28 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_28 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)local_28 + 0xc) == 0)) {
      (**(code **)*local_28)(local_28,1);
    }
  }
  *(int *)(*(longlong *)(*param_1 + 0x80) + (longlong)(int)param_1[1] * 4) = (int)param_2[1];
  *(undefined2 *)(*(longlong *)(*param_1 + 0x170) + (longlong)(int)param_1[1] * 2) =
       *(undefined2 *)((longlong)param_2 + 0xc);
  *(char *)(*(longlong *)(*param_1 + 0x200) + (longlong)(int)param_1[1]) = (char)param_2[3];
  if (((int)param_2[2] != -1) || (*(int *)((longlong)param_2 + 0x14) != -1)) {
    *(longlong *)(*(longlong *)(*param_1 + 0x260) + (longlong)(int)param_1[1] * 8) = param_2[2];
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400d2704 FUN_1400d2704 body=390 status=ok
// SIG undefined FUN_1400d2704(void)

void FUN_1400d2704(undefined8 param_1,longlong *param_2,double *param_3,float *param_4)

{
  double *pdVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  byte bVar7;
  longlong lVar8;
  longlong lVar9;
  
  bVar7 = *(byte *)((longlong)param_2 + 0xc);
  if ((param_2 != (longlong *)0x0) && (bVar7 != 0)) {
    dVar4 = param_3[2];
    dVar5 = param_3[1];
    lVar8 = (longlong)(int)param_2[1];
    lVar9 = *(longlong *)(*param_2 + 0x278);
    *(float *)(lVar9 + lVar8 * 0xc) = (float)*param_3;
    *(float *)(lVar9 + 4 + lVar8 * 0xc) = (float)dVar5;
    *(float *)(lVar9 + 8 + lVar8 * 0xc) = (float)dVar4;
    fVar2 = param_4[2];
    lVar8 = param_2[1];
    lVar9 = *(longlong *)(*param_2 + 0x290);
    *(undefined8 *)(lVar9 + (longlong)(int)lVar8 * 0xc) = *(undefined8 *)param_4;
    *(float *)(lVar9 + 8 + (longlong)(int)lVar8 * 0xc) = fVar2;
    bVar7 = *(byte *)((longlong)param_2 + 0xc);
  }
  if ((param_2 != (longlong *)0x0) && (1 < bVar7)) {
    lVar9 = (longlong)(int)param_2[1];
    cVar6 = *(char *)(*(longlong *)(*param_2 + 0x2c0) + 0xb + lVar9 * 0x10);
    if ((cVar6 == '\x04') || (cVar6 == '\x01')) {
      lVar8 = *(longlong *)(*param_2 + 0x2d8);
      *(double *)(lVar8 + 0x10 + lVar9 * 0x18) = param_3[2];
      dVar4 = param_3[1];
      pdVar1 = (double *)(lVar8 + lVar9 * 0x18);
      *pdVar1 = *param_3;
      pdVar1[1] = dVar4;
      fVar2 = param_4[2];
      fVar3 = param_4[1];
      lVar8 = (longlong)(int)param_2[1];
      lVar9 = *(longlong *)(*param_2 + 0x2f0);
      *(double *)(lVar9 + lVar8 * 0x18) = (double)*param_4;
      *(double *)(lVar9 + 8 + lVar8 * 0x18) = (double)fVar3;
      *(double *)(lVar9 + 0x10 + lVar8 * 0x18) = (double)fVar2;
      if ((((ABS(*param_3) <= 9.999999747378752e-05) && (ABS(param_3[1]) <= 9.999999747378752e-05))
          && (ABS(param_3[2]) <= 9.999999747378752e-05)) &&
         (((ABS(*param_4) <= 0.0001 && (ABS(param_4[1]) <= 0.0001)) && (ABS(param_4[2]) <= 0.0001)))
         ) {
        return;
      }
      FUN_1400d3626();
      return;
    }
  }
  return;
}



// FUNCTION 1400d288a FUN_1400d288a body=215 status=ok
// SIG undefined FUN_1400d288a(void)

void FUN_1400d288a(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  byte *pbVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  lVar7 = param_1[1];
  lVar3 = *(longlong *)(*param_1 + 0x3e0);
  *(undefined8 *)(lVar3 + 0x10 + (longlong)(int)lVar7 * 0x18) = param_2[2];
  uVar4 = param_2[1];
  puVar1 = (undefined8 *)(lVar3 + (longlong)(int)lVar7 * 0x18);
  *puVar1 = *param_2;
  puVar1[1] = uVar4;
  lVar3 = *(longlong *)(*param_1 + 0x3f8);
  lVar7 = (longlong)(int)param_1[1] * 0x20;
  uVar4 = param_2[4];
  uVar5 = param_2[5];
  uVar6 = param_2[7];
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar7);
  *puVar1 = param_2[6];
  puVar1[1] = uVar6;
  puVar1 = (undefined8 *)(lVar3 + lVar7);
  *puVar1 = uVar4;
  puVar1[1] = uVar5;
  lVar7 = param_1[1];
  lVar3 = *(longlong *)(*param_1 + 0x368);
  *(undefined4 *)(lVar3 + 8 + (longlong)(int)lVar7 * 0xc) = *(undefined4 *)(param_2 + 9);
  *(undefined8 *)(lVar3 + (longlong)(int)lVar7 * 0xc) = param_2[8];
  lVar7 = param_1[1];
  lVar3 = *(longlong *)(*param_1 + 0x380);
  *(undefined4 *)(lVar3 + 8 + (longlong)(int)lVar7 * 0xc) =
       *(undefined4 *)((longlong)param_2 + 0x54);
  *(undefined8 *)(lVar3 + (longlong)(int)lVar7 * 0xc) = *(undefined8 *)((longlong)param_2 + 0x4c);
  *(undefined8 *)(*(longlong *)(*param_1 + 0x3b0) + (longlong)(int)param_1[1] * 8) = param_2[0xb];
  *(undefined8 *)(*(longlong *)(*param_1 + 0x3c8) + (longlong)(int)param_1[1] * 8) = param_2[0xc];
  pbVar2 = (byte *)(*(longlong *)(*param_1 + 0x2c0) + 10 + (longlong)(int)param_1[1] * 0x10);
  *pbVar2 = *pbVar2 | 1;
  return;
}



// FUNCTION 1400d2962 FUN_1400d2962 body=69 status=ok
// SIG undefined FUN_1400d2962(void)

void FUN_1400d2962(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (param_2 <= *(int *)(param_1 + 100)) {
    lVar1 = *(longlong *)(param_1 + 0x58);
    if (*(longlong *)(param_1 + 0x58) == 0) {
      lVar1 = param_1;
    }
    FUN_14026cdd0(lVar1,*(undefined4 *)(param_1 + 0x60));
    *(undefined4 *)(param_1 + 0x60) = 0;
    return;
  }
  FUN_146d6845a(param_1);
  return;
}



// FUNCTION 1400d29a8 FUN_1400d29a8 body=236 status=ok
// SIG undefined FUN_1400d29a8(void)

void FUN_1400d29a8(longlong *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  
  fVar1 = param_2[2];
  fVar2 = param_2[1];
  lVar4 = (longlong)(int)param_1[1];
  lVar3 = *(longlong *)(*param_1 + 0x308);
  *(double *)(lVar3 + lVar4 * 0x18) = (double)*param_2;
  *(double *)(lVar3 + 8 + lVar4 * 0x18) = (double)fVar2;
  *(double *)(lVar3 + 0x10 + lVar4 * 0x18) = (double)fVar1;
  fVar1 = param_2[5];
  fVar2 = param_2[4];
  lVar4 = (longlong)(int)param_1[1];
  lVar3 = *(longlong *)(*param_1 + 800);
  *(double *)(lVar3 + lVar4 * 0x18) = (double)param_2[3];
  *(double *)(lVar3 + 8 + lVar4 * 0x18) = (double)fVar2;
  *(double *)(lVar3 + 0x10 + lVar4 * 0x18) = (double)fVar1;
  fVar1 = param_2[8];
  fVar2 = param_2[7];
  lVar4 = (longlong)(int)param_1[1];
  lVar3 = *(longlong *)(*param_1 + 0x338);
  *(double *)(lVar3 + lVar4 * 0x18) = (double)param_2[6];
  *(double *)(lVar3 + 8 + lVar4 * 0x18) = (double)fVar2;
  *(double *)(lVar3 + 0x10 + lVar4 * 0x18) = (double)fVar1;
  fVar1 = param_2[0xb];
  fVar2 = param_2[10];
  lVar4 = (longlong)(int)param_1[1];
  lVar3 = *(longlong *)(*param_1 + 0x350);
  *(double *)(lVar3 + lVar4 * 0x18) = (double)param_2[9];
  *(double *)(lVar3 + 8 + lVar4 * 0x18) = (double)fVar2;
  *(double *)(lVar3 + 0x10 + lVar4 * 0x18) = (double)fVar1;
  return;
}



// FUNCTION 1400d2a94 FUN_1400d2a94 body=79 status=ok
// SIG undefined FUN_1400d2a94(void)

void FUN_1400d2a94(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_2 + 0x10);
  if (lVar2 != 0) {
    if (*(longlong *)(lVar2 + 8) != 0) {
      pbVar1 = (byte *)(*(longlong *)(lVar2 + 8) + 0x90);
      *pbVar1 = *pbVar1 | 0x20;
    }
    FUN_1400d2c70(param_1,lVar2);
    FUN_1400d2ae4();
    FUN_1400d2ba8(param_1 + 0x70,lVar2);
    return;
  }
  return;
}



// FUNCTION 1400d2ae4 FUN_1400d2ae4 body=195 status=ok
// SIG undefined FUN_1400d2ae4(void)

void FUN_1400d2ae4(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  
  lVar7 = 0;
  bVar3 = true;
  do {
    bVar5 = bVar3;
    lVar2 = *(longlong *)(param_2 + 0x10 + lVar7 * 8);
    if (lVar2 != 0) {
      uVar1 = *(uint *)(param_2 + 0x28 + lVar7 * 4);
      iVar4 = *(int *)(lVar2 + 0x18);
      iVar6 = ~uVar1 + iVar4;
      if (iVar6 != 0) {
        if (0 < iVar6) {
          iVar6 = 1;
        }
        memmove((void *)(*(longlong *)(lVar2 + 0x10) + (longlong)(int)uVar1 * 8),
                (void *)(*(longlong *)(lVar2 + 0x10) + (longlong)(iVar4 - iVar6) * 8),
                (longlong)iVar6 << 3);
        iVar4 = *(int *)(lVar2 + 0x18);
      }
      *(int *)(lVar2 + 0x18) = iVar4 + -1;
      *(undefined8 *)(param_2 + 0x10 + lVar7 * 8) = 0;
      *(undefined4 *)(param_2 + 0x28 + lVar7 * 4) = 0xffffffff;
      if ((int)uVar1 < *(int *)(lVar2 + 0x18)) {
        lVar7 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + (longlong)(int)uVar1 * 8);
        if (*(longlong *)(lVar7 + 0x10) == lVar2) {
          *(uint *)(lVar7 + 0x28) = uVar1;
        }
        else if (*(longlong *)(lVar7 + 0x18) == lVar2) {
          *(uint *)(lVar7 + 0x2c) = uVar1;
        }
      }
    }
    lVar7 = 1;
    bVar3 = false;
  } while (bVar5);
  return;
}



// FUNCTION 1400d2ba8 FUN_1400d2ba8 body=200 status=ok
// SIG undefined FUN_1400d2ba8(void)

void FUN_1400d2ba8(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 != (longlong *)0x0) {
    uVar1 = *(uint *)((longlong)param_2 + 0x24);
    iVar2 = (int)param_1[1];
    iVar3 = ~uVar1 + iVar2;
    if (iVar3 != 0) {
      iVar4 = 1;
      if (iVar3 < 1) {
        iVar4 = iVar3;
      }
      memmove((void *)(*param_1 + (longlong)(int)uVar1 * 8),
              (void *)(*param_1 + (longlong)(iVar2 - iVar4) * 8),(longlong)iVar4 << 3);
      iVar2 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar2 + -1;
    *(undefined4 *)((longlong)param_2 + 0x24) = 0xffffffff;
    if ((int)uVar1 < (int)param_1[1]) {
      *(uint *)(*(longlong *)(*param_1 + (longlong)(int)uVar1 * 8) + 0x24) = uVar1;
    }
    if (*param_2 != 0) {
      *(undefined8 *)(*param_2 + 0x10) = 0;
      *param_2 = 0;
    }
    *(undefined4 *)(param_2 + 4) = 0xffffffff;
    *(undefined4 *)(param_2 + 6) = 0xffffffff;
    *(undefined4 *)(param_2 + 7) = 0xffffffff;
    *(undefined4 *)(param_2 + 8) = 0;
    iVar2 = (int)param_1[3];
    *(uint *)(param_1 + 3) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0x1c) < iVar2 + 1U) {
      FUN_14082058a(param_1 + 2,iVar2);
    }
    *(longlong **)(param_1[2] + (longlong)iVar2 * 8) = param_2;
  }
  return;
}



// FUNCTION 1400d2c70 FUN_1400d2c70 body=204 status=ok
// SIG undefined FUN_1400d2c70(void)

void FUN_1400d2c70(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  
  lVar2 = *(longlong *)(param_2 + 8);
  if (lVar2 != 0) {
    uVar1 = *(uint *)(param_2 + 0x34);
    lVar6 = *(longlong *)(lVar2 + 0x60);
    if (*(longlong *)(lVar2 + 0x60) == 0) {
      lVar6 = lVar2 + 0x10;
    }
    lVar8 = (longlong)*(int *)(param_2 + 0x30) * 0x10;
    iVar3 = *(int *)(lVar6 + 8 + lVar8);
    plVar7 = (longlong *)(lVar6 + lVar8);
    iVar4 = ~uVar1 + iVar3;
    if (iVar4 != 0) {
      iVar5 = 1;
      if (iVar4 < 1) {
        iVar5 = iVar4;
      }
      memmove((void *)(*plVar7 + (longlong)(int)uVar1 * 8),
              (void *)(*plVar7 + (longlong)(iVar3 - iVar5) * 8),(longlong)iVar5 << 3);
      iVar3 = (int)plVar7[1];
    }
    *(int *)(plVar7 + 1) = iVar3 + -1;
    lVar6 = lVar2 + 0x10;
    if (*(longlong *)(lVar2 + 0x60) != 0) {
      lVar6 = *(longlong *)(lVar2 + 0x60);
    }
    if ((int)uVar1 < *(int *)(lVar6 + 8 + lVar8)) {
      *(uint *)(*(longlong *)(*(longlong *)(lVar6 + lVar8) + (longlong)(int)uVar1 * 8) + 0x34) =
           uVar1;
    }
    *(byte *)(lVar2 + 0x90) = *(byte *)(lVar2 + 0x90) | 2;
    *(int *)(lVar2 + 0x80) = *(int *)(lVar2 + 0x80) + -1;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined4 *)(param_2 + 0x34) = 0xffffffff;
  }
  return;
}



// FUNCTION 1400d2d3c FUN_1400d2d3c body=491 status=ok
// SIG undefined FUN_1400d2d3c(void)

void FUN_1400d2d3c(longlong param_1,longlong *param_2,float *param_3)

{
  byte *pbVar1;
  undefined2 uVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  
  if (param_2 != (longlong *)0x0) {
    if (*(char *)(*(longlong *)(*param_2 + 0x2c0) + 0xd + (longlong)(int)param_2[1] * 0x10) !=
        *(char *)((longlong)param_3 + 0x29)) {
      if (*(char *)((longlong)param_3 + 0x29) == '\0') {
        FUN_140a36458(*(undefined8 *)(param_1 + 0x9c8),param_2);
      }
      else {
        FUN_14016e00e();
      }
    }
    lVar4 = (longlong)(int)param_2[1] * 0x10;
    if (*(char *)(*(longlong *)(*param_2 + 0x2c0) + 0xb + lVar4) != *(char *)(param_3 + 7)) {
      pbVar1 = (byte *)(*(longlong *)(*param_2 + 0x2c0) + 10 + lVar4);
      *pbVar1 = *pbVar1 | 1;
    }
    fVar5 = param_3[4];
    if (fVar5 < 0.0) {
      fVar5 = *(float *)(*(longlong *)(param_1 + 0x9c8) + 0xd40);
    }
    *(double *)(*(longlong *)(*param_2 + 0x410) + (longlong)(int)param_2[1] * 8) = (double)*param_3;
    *(double *)(*(longlong *)(*param_2 + 0x428) + (longlong)(int)param_2[1] * 8) =
         (double)param_3[1];
    *(double *)(*(longlong *)(*param_2 + 0x440) + (longlong)(int)param_2[1] * 8) =
         (double)param_3[2];
    *(double *)(*(longlong *)(*param_2 + 0x458) + (longlong)(int)param_2[1] * 8) =
         (double)param_3[3];
    *(float *)(*(longlong *)(*param_2 + 0x470) + (longlong)(int)param_2[1] * 4) = fVar5;
    *(float *)(*(longlong *)(*param_2 + 0x488) + (longlong)(int)param_2[1] * 4) = param_3[5];
    *(float *)(*(longlong *)(*param_2 + 0x2c0) + (longlong)(int)param_2[1] * 0x10) = param_3[6];
    *(undefined1 *)(*(longlong *)(*param_2 + 0x2c0) + 0xd + (longlong)(int)param_2[1] * 0x10) =
         *(undefined1 *)((longlong)param_3 + 0x29);
    *(float *)(*(longlong *)(*param_2 + 0x2c0) + 4 + (longlong)(int)param_2[1] * 0x10) = param_3[8];
    *(undefined2 *)(*(longlong *)(*param_2 + 0x2c0) + 8 + (longlong)(int)param_2[1] * 0x10) =
         *(undefined2 *)(param_3 + 9);
    lVar4 = *(longlong *)(*param_2 + 0x500);
    lVar3 = (longlong)(int)param_2[1] * 3;
    uVar2 = *(undefined2 *)((longlong)param_3 + 0x26);
    *(undefined1 *)(lVar4 + 2 + lVar3) = *(undefined1 *)(param_3 + 10);
    *(undefined2 *)(lVar4 + lVar3) = uVar2;
    FUN_1400d2fee(*(undefined8 *)(param_1 + 0x9c8),param_2,*(undefined1 *)(param_3 + 7));
    FUN_1400d2f28(*(undefined8 *)(param_1 + 0x9c8),param_2,*(undefined1 *)((longlong)param_3 + 0x1e)
                 );
    return;
  }
  return;
}



// FUNCTION 1400d2f28 FUN_1400d2f28 body=197 status=ok
// SIG undefined FUN_1400d2f28(void)

void FUN_1400d2f28(longlong param_1,longlong *param_2,char param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  
  lVar4 = *param_2;
  iVar3 = (int)param_2[1];
  cVar1 = *(char *)(*(longlong *)(lVar4 + 0x2c0) + 0xb + (longlong)iVar3 * 0x10);
  if ((param_3 == '\x01') && (cVar1 == '\x01')) {
    FUN_1403f44de(lVar4,iVar3,4);
  }
  *(char *)(*(longlong *)(lVar4 + 0x4b8) + (longlong)iVar3) = param_3;
  cVar2 = *(char *)(*(longlong *)(*param_2 + 0x2c0) + 0xb + (longlong)(int)param_2[1] * 0x10);
  if ((param_2 == (longlong *)0x0) || (*(byte *)((longlong)param_2 + 0xc) < 3)) {
    FUN_1456cc2b4(*(undefined8 *)(param_1 + 0x2c8),param_2);
  }
  else {
    FUN_1456cc488(*(undefined8 *)(param_1 + 0x2c8),param_2);
  }
  if ((cVar1 != cVar2) && (cVar2 != '\x04')) {
    FUN_1456cc230(*(undefined8 *)(param_1 + 0x2c8),param_2,1);
    return;
  }
  return;
}



// FUNCTION 1400d2fee FUN_1400d2fee body=343 status=ok
// SIG undefined FUN_1400d2fee(void)

void FUN_1400d2fee(longlong param_1,longlong *param_2,undefined4 param_3)

{
  byte *pbVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  
  cVar2 = *(char *)(*(longlong *)(*param_2 + 0x2c0) + 0xb + (longlong)(int)param_2[1] * 0x10);
  cVar5 = (char)param_3;
  FUN_1403f44de(*param_2,(longlong)(int)param_2[1],param_3);
  if ((param_2 == (longlong *)0x0) || (*(byte *)((longlong)param_2 + 0xc) < 3)) {
    FUN_1456cc2b4(*(undefined8 *)(param_1 + 0x2c8),param_2);
  }
  else {
    FUN_1456cc488(*(undefined8 *)(param_1 + 0x2c8),param_2);
  }
  lVar3 = *param_2;
  iVar4 = (int)param_2[1];
  if (cVar2 != cVar5) {
    if (*(char *)(*(longlong *)(lVar3 + 0x2c0) + 0xd + (longlong)iVar4 * 0x10) == '\0') {
      if (cVar5 == '\x04') {
        *(undefined1 *)(*(longlong *)(lVar3 + 0x4d0) + (longlong)iVar4) = 0;
      }
      else {
        FUN_1456cc230(*(undefined8 *)(param_1 + 0x2c8),param_2,
                      CONCAT71((int7)((ulonglong)*(longlong *)(lVar3 + 0x2c0) >> 8),1));
        if (cVar5 == '\x01') {
          *(undefined1 *)(*(longlong *)(*param_2 + 0x4d0) + (longlong)(int)param_2[1]) = 0;
          FUN_1400d32bc(param_1 + 0x100,param_2);
        }
      }
      pbVar1 = (byte *)(*(longlong *)(*param_2 + 0x2c0) + 10 + (longlong)(int)param_2[1] * 0x10);
      *pbVar1 = *pbVar1 & 0xfb;
      lVar3 = *param_2;
      iVar4 = (int)param_2[1];
    }
  }
  if ((cVar5 == '\x04' || cVar5 == '\x01') != (cVar2 == '\x04' || cVar2 == '\x01')) {
    if ((*(ushort *)(*(longlong *)(lVar3 + 0x2c0) + 8 + (longlong)iVar4 * 0x10) & 0x10) != 0) {
      pbVar1 = (byte *)(*(longlong *)(lVar3 + 0x2c0) + 10 + (longlong)iVar4 * 0x10);
      *pbVar1 = *pbVar1 | 1;
    }
  }
  return;
}



// FUNCTION 1400d3146 FUN_1400d3146 body=373 status=ok
// SIG undefined FUN_1400d3146(void)

void FUN_1400d3146(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1400d31d1;
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
LAB_1400d31d1:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x48)) {
    uVar7 = uVar5 / 0x48 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x48,8);
  return;
}



// FUNCTION 1400d32bc FUN_1400d32bc body=64 status=ok
// SIG undefined FUN_1400d32bc(void)

void FUN_1400d32bc(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  if ((param_2 != (longlong *)0x0) &&
     (lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x1e8) + (longlong)(int)param_2[1] * 8),
     lVar1 != 0)) {
    *(byte *)(lVar1 + 0x2c) = *(byte *)(lVar1 + 0x2c) | 2;
    lVar1 = *(longlong *)(lVar1 + 8);
    if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x90) & 8) == 0)) {
      *(uint *)(lVar1 + 0x90) = *(uint *)(lVar1 + 0x90) | 0x20;
    }
  }
  return;
}



// FUNCTION 1400d32fc FUN_1400d32fc body=67 status=ok
// SIG undefined FUN_1400d32fc(void)

void FUN_1400d32fc(longlong param_1)

{
  FUN_1400d3340(param_1 + 0x40,0);
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(int *)(param_1 + 0x9c) != 0) {
    FUN_1400d33ac(param_1 + 0x90,0);
    return;
  }
  return;
}



// FUNCTION 1400d3340 FUN_1400d3340 body=107 status=ok
// SIG undefined FUN_1400d3340(void)

void FUN_1400d3340(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((int)param_2 < 1) {
    if (iVar3 < *(int *)(param_1 + 0x48)) {
LAB_1400d338f:
      FUN_14026d260(param_1,param_2);
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_1400c7062(param_1);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x48) != iVar3) goto LAB_1400d338f;
  FUN_1400d34e0(param_1);
  FUN_14026d260(param_1,param_2);
  return;
}



// FUNCTION 1400d33ac FUN_1400d33ac body=307 status=ok
// SIG undefined FUN_1400d33ac(void)

void FUN_1400d33ac(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar5 = 0;
  if (param_2 != 0) {
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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1400d3440;
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
LAB_1400d3440:
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



// FUNCTION 1400d34e0 FUN_1400d34e0 body=325 status=ok
// SIG undefined FUN_1400d34e0(void)

void FUN_1400d34e0(longlong *param_1)

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
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
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
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1400d3626 FUN_1400d3626 body=261 status=ok
// SIG undefined FUN_1400d3626(void)

void FUN_1400d3626(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  
  if (*(char *)(*(longlong *)(*param_2 + 0x2c0) + 0xb + (longlong)(int)param_2[1] * 0x10) == '\x01')
  {
    FUN_1400d2fee(param_1,param_2,4);
  }
  if (param_2 != (longlong *)0x0) {
    lVar2 = *(longlong *)(*(longlong *)(*param_2 + 0x1e8) + (longlong)(int)param_2[1] * 8);
    if (lVar2 != 0) {
      if (*(byte *)((longlong)param_2 + 0xc) < 2) {
        uVar4 = 0;
      }
      else {
        uVar4 = (uint)(*(char *)(*(longlong *)(*param_2 + 0x2c0) + 0xb +
                                (longlong)(int)param_2[1] * 0x10) == '\x01') * 2;
      }
      *(uint *)(lVar2 + 0x2c) = *(uint *)(lVar2 + 0x2c) & 0xfffffffd | uVar4;
      lVar5 = *(longlong *)(lVar2 + 8);
      if (lVar5 == 0) {
        iVar1 = *(int *)(lVar2 + 0x18);
        if ((longlong)iVar1 != 0) {
          lVar2 = *(longlong *)(lVar2 + 0x10);
          lVar5 = 0;
          do {
            lVar3 = *(longlong *)(*(longlong *)(lVar2 + lVar5) + 8);
            if (lVar3 != 0) {
              *(uint *)(lVar3 + 0x90) = *(uint *)(lVar3 + 0x90) & 0xffffffdb | 0x20;
            }
            lVar5 = lVar5 + 8;
          } while ((longlong)iVar1 * 8 != lVar5);
        }
      }
      else {
        *(uint *)(lVar5 + 0x90) = *(uint *)(lVar5 + 0x90) & 0xffffffdb | 0x20;
      }
    }
    if (1 < *(byte *)((longlong)param_2 + 0xc)) {
      *(undefined1 *)(*(longlong *)(*param_2 + 0x4d0) + (longlong)(int)param_2[1]) = 0;
    }
  }
  return;
}



// FUNCTION 1400d372c FUN_1400d372c body=353 status=ok
// SIG undefined FUN_1400d372c(void)

void FUN_1400d372c(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1400d37b3;
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
LAB_1400d37b3:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 1400d388e FUN_1400d388e body=1291 status=ok
// SIG undefined FUN_1400d388e(void)

undefined8 FUN_1400d388e(longlong param_1)

{
  code *pcVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  int *piVar7;
  undefined *puVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong *plVar12;
  int iVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  bool bVar17;
  bool bVar18;
  undefined1 auStack_b8 [32];
  int local_98;
  undefined4 uStack_94;
  longlong local_90;
  longlong *local_88;
  undefined8 local_80;
  byte local_78;
  int local_70;
  int local_68;
  undefined4 uStack_64;
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar12 = *(longlong **)(param_1 + 0x48);
  if (*(code **)(*plVar12 + 0x18) == (code *)&LAB_14490ec78) {
    if ((*(char *)((longlong)plVar12 + 0x1c) != '\0') &&
       (*(char *)((longlong)plVar12 + 0x1d) == '\x01')) {
LAB_1400d38e0:
      plVar14 = plVar12 + 8;
      if (0x18 < *(ushort *)(plVar12 + 0xb)) {
        plVar14 = (longlong *)*plVar14;
      }
      if (*(code **)(&DAT_14c9a8620 + (uint)*(byte *)(plVar12 + 0xc) * 0x120) == (code *)0x0) {
        plVar9 = (longlong *)
                 ((longlong)
                  *(int *)((longlong)&DAT_14c9a8510 +
                          (ulonglong)((uint)*(byte *)(plVar12 + 0xc) * 0x120)) + (longlong)plVar14);
        do {
          uVar6 = 1;
          if (plVar9 <= plVar14) goto LAB_1400d3b11;
          lVar15 = *plVar14;
          plVar14 = (longlong *)((longlong)plVar14 + 1);
        } while ((char)lVar15 == '\0');
      }
      else {
        cVar3 = (**(code **)(&DAT_14c9a8620 + (uint)*(byte *)(plVar12 + 0xc) * 0x120))();
        uVar6 = 1;
        if (cVar3 != '\0') goto LAB_1400d3b11;
      }
      lVar15 = *(longlong *)(param_1 + 0x40);
      if (lVar15 == 0) {
        lVar10 = 0;
        param_1 = 0;
LAB_1400d3ce6:
        local_88 = (longlong *)0x0;
        bVar17 = true;
        local_90 = param_1;
      }
      else {
        if (*(int *)(lVar15 + 0x4c) == 0) {
LAB_1400d3b64:
          lVar10 = 0;
        }
        else {
          uVar5 = *(uint *)(lVar15 + 0x48);
          lVar10 = 0;
          if ((-1 < (int)uVar5) && ((int)uVar5 < DAT_14c9647dc)) {
            plVar14 = (longlong *)
                      ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
            if ((plVar14 == (longlong *)0x0) ||
               (((int)plVar14[2] != *(int *)(lVar15 + 0x4c) ||
                ((*(uint *)(plVar14 + 1) & 0x10200000) != 0)))) goto LAB_1400d3b64;
            lVar10 = *plVar14;
          }
        }
        plVar14 = *(longlong **)(lVar15 + 0x118);
        if (plVar14 == (longlong *)0x0) goto LAB_1400d3ce6;
        LOCK();
        *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)((longlong)plVar14 + 0xc) = *(int *)((longlong)plVar14 + 0xc) + 1;
        UNLOCK();
        LOCK();
        plVar9 = plVar14 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*plVar14)(plVar14);
          LOCK();
          piVar7 = (int *)((longlong)plVar14 + 0xc);
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (*piVar7 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
          }
        }
        LOCK();
        *(int *)((longlong)plVar14 + 0xc) = *(int *)((longlong)plVar14 + 0xc) + 1;
        UNLOCK();
        bVar17 = false;
        local_90 = param_1;
        local_88 = plVar14;
      }
      plVar14 = local_88;
      local_98 = CONCAT31(local_98._1_3_,3);
      local_70 = 0;
      local_80._0_4_ = 0;
      if (lVar10 == 0) {
        iVar4 = 0;
        uVar5 = (uint)local_80;
      }
      else {
        uVar5 = *(uint *)(lVar10 + 0xc);
        local_80 = (ulonglong)uVar5;
        if ((int)uVar5 < DAT_14c9647dc) {
          lVar15 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
        }
        else {
          lVar15 = 0;
        }
        iVar4 = *(int *)(lVar15 + 0x10);
        if (*(int *)(lVar15 + 0x10) == 0) {
          LOCK();
          iVar4 = DAT_14c964868 + 1;
          UNLOCK();
          iVar13 = DAT_14c964868 + 1;
          bVar18 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar4;
          if (bVar18) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar13);
          }
          LOCK();
          iVar4 = *(int *)(lVar15 + 0x10);
          bVar18 = iVar4 == 0;
          if (bVar18) {
            *(int *)(lVar15 + 0x10) = iVar13;
            iVar4 = 0;
          }
          UNLOCK();
          uVar5 = (uint)local_80;
          if (bVar18) {
            iVar4 = iVar13;
          }
        }
      }
      local_80._0_4_ = uVar5;
      local_80 = CONCAT44(iVar4,(uint)local_80);
      local_78 = 2;
      if (local_70 != 0) {
        FUN_1417398fc(&DAT_14c9a3da0,local_70 + -1,1);
        local_70 = 0;
      }
      if (!bVar17) {
        LOCK();
        piVar7 = (int *)((longlong)plVar14 + 0xc);
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (*piVar7 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
      piVar7 = &local_68;
      FUN_1447c3578(plVar12 + 7,piVar7,&local_98);
      lVar15 = DAT_14c9a3da0;
      if ((longlong)local_70 != 0) {
        lVar10 = (longlong)local_70 + -1;
        lVar16 = lVar10 * 0x10;
        FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar16),
                      *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar16));
        if (*(longlong *)(lVar15 + lVar16) != 0) {
          FUN_1400020a8();
        }
        lVar15 = DAT_14c9a3da0;
        iVar4 = (int)lVar10;
        if (DAT_14c9a3dd4 != 0) {
          *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar4;
        }
        *(undefined4 *)(lVar15 + lVar16) = 0xffffffff;
        iVar13 = -1;
        if (0 < DAT_14c9a3dd4) {
          iVar13 = DAT_14c9a3dd0;
        }
        *(int *)(lVar15 + 4 + lVar16) = iVar13;
        DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
        puVar8 = &DAT_14c9a3db0;
        if (DAT_14c9a3dc0 != (undefined *)0x0) {
          puVar8 = DAT_14c9a3dc0;
        }
        iVar13 = iVar4 + 0x1f;
        if (-1 < iVar4) {
          iVar13 = iVar4;
        }
        bVar2 = (byte)lVar10 & 0x1f;
        DAT_14c9a3dd0 = iVar4;
        *(uint *)(puVar8 + (longlong)(iVar13 >> 5) * 4) =
             *(uint *)(puVar8 + (longlong)(iVar13 >> 5) * 4) &
             (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
        local_70 = 0;
      }
      if (((char)local_98 == '\x03') && (local_88 != (longlong *)0x0)) {
        LOCK();
        piVar11 = (int *)((longlong)local_88 + 0xc);
        *piVar11 = *piVar11 + -1;
        UNLOCK();
        if (*piVar11 == 0) {
          (**(code **)(*local_88 + 0x10))();
        }
      }
      uVar5 = (uint)local_48;
      if (local_48 != 0) {
        if (local_48 == 1) {
          bVar17 = local_68 != 0;
          uVar5 = 1;
        }
        else {
          piVar11 = &local_98;
          FUN_1400b56fe(piVar11,&local_68,1);
          bVar17 = local_78 != 0;
          bVar18 = local_98 != 0;
          pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
          if (pcVar1 != (code *)0x0) {
            if (0x18 < (ushort)local_80) {
              piVar11 = (int *)CONCAT44(uStack_94,local_98);
            }
            (*pcVar1)(piVar11);
          }
          if (0x18 < (ushort)local_80) {
            FUN_1400020a8(CONCAT44(uStack_94,local_98));
          }
          bVar17 = bVar17 && bVar18;
          uVar5 = (uint)local_48;
        }
        if ((bool)(char)plVar12[0xe] == bVar17) {
          pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar5 * 0x120));
          if (pcVar1 != (code *)0x0) {
            if (0x18 < local_50) {
              piVar7 = (int *)CONCAT44(uStack_64,local_68);
            }
            (*pcVar1)(piVar7);
          }
          if (0x18 < local_50) {
            FUN_1400020a8(CONCAT44(uStack_64,local_68));
          }
          goto LAB_1400d3acc;
        }
      }
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar5 * 0x120));
      if (pcVar1 != (code *)0x0) {
        if (local_50 < 0x19) {
          piVar7 = &local_68;
        }
        else {
          piVar7 = (int *)CONCAT44(uStack_64,local_68);
        }
        (*pcVar1)(piVar7);
      }
      if (0x18 < local_50) {
        FUN_1400020a8(CONCAT44(uStack_64,local_68));
      }
      uVar6 = 1;
      goto LAB_1400d3b11;
    }
  }
  else {
    cVar3 = (**(code **)(*plVar12 + 0x18))(plVar12);
    if (cVar3 != '\0') {
      plVar12 = *(longlong **)(param_1 + 0x48);
      goto LAB_1400d38e0;
    }
  }
LAB_1400d3acc:
  uVar6 = 0;
LAB_1400d3b11:
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 1400d3d9a FUN_1400d3d9a body=142 status=ok
// SIG undefined FUN_1400d3d9a(void)

int FUN_1400d3d9a(longlong *param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  lVar2 = (**(code **)(*param_1 + 0xa90))();
  iVar7 = -1;
  iVar6 = -1;
  if (lVar2 != 0) {
    iVar6 = *(int *)(lVar2 + 8) + -1;
  }
  plVar3 = (longlong *)(**(code **)(*param_1 + 0xa90))(param_1);
  if (plVar3 != (longlong *)0x0) {
    uVar1 = *(uint *)(plVar3 + 1);
    if ((ulonglong)uVar1 != 0) {
      uVar5 = uVar1 - 1;
      if ((int)param_2 < (int)(uVar1 - 1)) {
        uVar5 = param_2;
      }
      uVar8 = 0;
      if (0 < (int)uVar5) {
        uVar8 = uVar5;
      }
      if ((int)uVar8 < (int)uVar1) {
        uVar4 = (ulonglong)uVar8;
        do {
          if (*(int *)(*(longlong *)(*plVar3 + uVar4 * 8) + 0xec) != 0) {
            iVar7 = (int)uVar4;
            break;
          }
          uVar4 = uVar4 + 1;
        } while (uVar1 != uVar4);
      }
    }
  }
  if (iVar7 < iVar6) {
    iVar6 = iVar7;
  }
  iVar7 = 0;
  if (0 < iVar6) {
    iVar7 = iVar6;
  }
  return iVar7;
}



// FUNCTION 1400d3e84 FUN_1400d3e84 body=152 status=ok
// SIG undefined FUN_1400d3e84(void)

longlong * FUN_1400d3e84(undefined8 *param_1,longlong *param_2)

{
  ushort uVar1;
  void *_Src;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  
  *param_2 = 0;
  iVar3 = *(int *)(param_1 + 1);
  _Src = (void *)*param_1;
  *(int *)(param_2 + 1) = iVar3;
  if ((longlong)iVar3 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    lVar2 = 0;
    iVar3 = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar3,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar3 * 2);
    iVar3 = (int)param_2[1];
    lVar2 = *param_2;
  }
  uVar4 = iVar3 - 1;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  if (0 < (int)uVar4) {
    uVar5 = 0;
    do {
      uVar1 = *(ushort *)(lVar2 + uVar5 * 2);
      *(ushort *)(lVar2 + uVar5 * 2) = uVar1 + (ushort)(0x19 < uVar1 - 0x61) * 0x20 + -0x20;
      uVar5 = uVar5 + 1;
    } while (uVar4 != uVar5);
  }
  return param_2;
}



// FUNCTION 1400d3f26 FUN_1400d3f26 body=57 status=ok
// SIG undefined FUN_1400d3f26(void)

void FUN_1400d3f26(longlong param_1)

{
  FUN_1401b424a(param_1,param_1);
  FUN_1404023b2(param_1,param_1 + 0x30);
  FUN_144a57cbe(param_1,param_1 + 0x10);
  FUN_144a3e942(param_1,param_1 + 0x20);
  return;
}



// FUNCTION 1400d3f60 FUN_1400d3f60 body=1470 status=ok
// SIG undefined FUN_1400d3f60(void)

void FUN_1400d3f60(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  bool bVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  code *pcVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  longlong lVar18;
  longlong lVar19;
  undefined1 auStack_98 [32];
  code **local_78;
  code *local_68;
  uint local_60;
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(char *)(*(longlong *)(param_1 + 8) + 0x3c) == '\0') {
    FUN_144948aec(param_1);
    if (DAT_14c7628b8 == '\x01') {
      local_60 = 0;
      local_68 = (code *)(param_1 + 0x88);
      do {
        if (*(int *)(local_68 + 0x18) <= (int)local_60) break;
        pcVar13 = *(code **)(param_1 + 0x98);
        if (*(code **)(param_1 + 0x98) == (code *)0x0) {
          pcVar13 = (code *)(param_1 + 0x88);
        }
        if (*(int *)(*(longlong *)(pcVar13 + (ulonglong)local_60 * 8) + 8) < 1) {
          FUN_143a77450();
        }
        else {
          FUN_14032eae4();
          FUN_14071697e(&local_68);
        }
        uVar12 = local_60 + 1;
        bVar4 = -2 < (int)local_60;
        local_60 = uVar12;
      } while (bVar4);
    }
    goto LAB_1400d4155;
  }
  lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar18 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_1400d3faf;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_1400d3fb8;
      goto LAB_1400d40b6;
    }
  }
  else {
LAB_1400d3faf:
    if (iVar6 != 0x10) {
LAB_1400d40b6:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar18 + 0xc60), iVar6 == 2)) {
LAB_1400d44d1:
          lVar18 = param_1 + 0x88;
          if (*(longlong *)(param_1 + 0x98) != 0) {
            lVar18 = *(longlong *)(param_1 + 0x98);
          }
          iVar6 = *(int *)(param_1 + 0xa0);
          if ((longlong)iVar6 != 0) {
            lVar19 = 0;
            do {
              FUN_143a79364(*(undefined8 *)(lVar18 + lVar19));
              lVar19 = lVar19 + 8;
            } while ((longlong)iVar6 * 8 != lVar19);
          }
          goto LAB_1400d3ff2;
        }
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_1400d44d1;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar2;
        if (puVar10 != (uint *)0x0) goto LAB_1400d4216;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_143a7d97b);
          }
          lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar9 = *(undefined4 **)(lVar18 + 0x310);
          *(undefined8 *)(lVar18 + 0x310) = 0;
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar9 = 0xffffffff;
          *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
          puVar9[0x12] = 0;
          *puVar2 = puVar9;
          FUN_140217a48(puVar2);
          puVar10 = (uint *)*puVar2;
LAB_1400d4216:
          puVar17 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar15 = (uint *)(puVar17 + 0x16);
          uVar12 = puVar10[0x12];
          if (puVar15 <= puVar10 + 0x4000) break;
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
            puVar17 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
            puVar15 = (uint *)(puVar17 + 0x16);
            uVar12 = 0;
            if (puVar15 <= puVar10 + 0x4000) {
              uVar12 = 1;
              goto LAB_1400d4296;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_1400d4296:
        *(uint **)(puVar10 + 0x10) = puVar15;
        puVar10[0x12] = uVar12;
        iVar6 = 0;
        FUN_1447247dc(puVar17,0);
        *puVar17 = &PTR_FUN_14adf3308;
        puVar17[0x15] = param_1;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar12 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
            uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
            iVar6 = 0;
          }
          else {
            uVar16 = 2;
          }
        }
        else {
          iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
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
        lVar18 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar18 == 0) {
          uVar5 = 1;
          if ((char)uVar16 != '\x06') {
            uVar5 = uVar16;
          }
          uVar16 = uVar5;
          uVar11 = 0;
        }
        else {
          if ((char)uVar16 == '\x06') {
            uVar16 = *(ulonglong *)(lVar18 + 0x38) >> 0x3b;
          }
          uVar11 = *(undefined8 *)(lVar18 + 0x30);
        }
        puVar17[0xf] = uVar11;
        puVar17[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar17 + 0x1c) = iVar6;
        if (puVar17 == (undefined8 *)0x0) {
          local_68 = (code *)CONCAT71(local_68._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
          UNLOCK();
          local_68 = (code *)CONCAT71(local_68._1_7_,1);
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
        local_78 = &local_68;
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14adf32c0;
        local_68 = FUN_143a7fd6c;
        local_40 = param_1;
        FUN_14005a792(&DAT_14ca9a440,L"ResetBuffersCommand",&DAT_14cb3e638);
        if (local_68 != (code *)0x0) {
          pppuVar14 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar14 = &local_48;
          }
          (*(code *)(*pppuVar14)[2])();
        }
      }
LAB_1400d4155:
      if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  }
LAB_1400d3fb8:
  lVar18 = param_1 + 0x88;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    lVar18 = *(longlong *)(param_1 + 0x98);
  }
  iVar6 = *(int *)(param_1 + 0xa0);
  if ((longlong)iVar6 != 0) {
    lVar19 = 0;
    do {
      FUN_143a79364(*(undefined8 *)(lVar18 + lVar19));
      lVar19 = lVar19 + 8;
    } while ((longlong)iVar6 * 8 != lVar19);
  }
LAB_1400d3ff2:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
}



// FUNCTION 1400d4530 FUN_1400d4530 body=1213 status=ok
// SIG undefined FUN_1400d4530(void)

void FUN_1400d4530(undefined8 param_1,longlong param_2)

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
  undefined ***pppuVar13;
  uint *puVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar17 = 0;
  if ((param_2 != 0) && (*(char *)(param_2 + 8) == '\0')) {
    lVar17 = param_2;
  }
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 == 2) goto LAB_1400d4582;
    if (iVar6 != 1) goto LAB_1400d457d;
    DVar7 = FUN_140ad26c0();
    DVar8 = GetCurrentThreadId();
    if (DVar7 == DVar8) goto LAB_1400d4582;
  }
  else {
LAB_1400d457d:
    if (iVar6 == 0x10) goto LAB_1400d4582;
  }
  if (DAT_14ca9a438 == '\0') {
    if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2)) {
LAB_1400d4582:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
    }
    if (iVar6 == 1) {
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_1400d4582;
    }
  }
  if (DAT_14ca9a43c == 0) {
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar10 = (uint *)*puVar2;
    if (puVar10 != (uint *)0x0) goto LAB_1400d471a;
    while( true ) {
      uVar12 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar12 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar12 | 1;
        __tlregdtor(&LAB_143a091f0);
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
LAB_1400d471a:
      puVar15 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar14 = (uint *)(puVar15 + 0x17);
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
        puVar15 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
        puVar14 = (uint *)(puVar15 + 0x17);
        uVar12 = 0;
        if (puVar14 <= puVar10 + 0x4000) {
          uVar12 = 1;
          goto LAB_1400d479a;
        }
      }
    }
    uVar12 = uVar12 + 1;
LAB_1400d479a:
    *(uint **)(puVar10 + 0x10) = puVar14;
    puVar10[0x12] = uVar12;
    iVar6 = 0;
    FUN_1447247dc(puVar15,0);
    *puVar15 = &PTR_FUN_14adbbf20;
    puVar15[0x15] = lVar17;
    puVar15[0x16] = param_1;
    if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
      uVar12 = DAT_14c7585c8 >> 10 & 3;
      if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
        uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
        iVar6 = 0;
      }
      else {
        uVar16 = 2;
      }
    }
    else {
      iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
              *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
      uVar16 = 5;
    }
    if (*(code **)(puVar15[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar15[0xe] + 0x18))(puVar15 + 0xe,puVar15 + 9);
    }
    puVar15[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar15[9] = puVar15;
    puVar15[10] = puVar15;
    lVar17 = *(longlong *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x2b8);
    if (lVar17 == 0) {
      uVar5 = 1;
      if ((char)uVar16 != '\x06') {
        uVar5 = uVar16;
      }
      uVar16 = uVar5;
      uVar11 = 0;
    }
    else {
      if ((char)uVar16 == '\x06') {
        uVar16 = *(ulonglong *)(lVar17 + 0x38) >> 0x3b;
      }
      uVar11 = *(undefined8 *)(lVar17 + 0x30);
    }
    puVar15[0xf] = uVar11;
    puVar15[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
    *(int *)((longlong)puVar15 + 0x1c) = iVar6;
    if (puVar15 == (undefined8 *)0x0) {
      local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
      FUN_1447439e4(0);
    }
    else {
      LOCK();
      *(int *)(puVar15 + 1) = *(int *)(puVar15 + 1) + 1;
      UNLOCK();
      local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
      FUN_1447439e4(puVar15);
      LOCK();
      piVar1 = (int *)(puVar15 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar15)(puVar15,1);
      }
    }
  }
  else {
    local_78 = local_68;
    local_58 = (undefined ***)0x0;
    local_48 = &PTR_LAB_14adbbef0;
    local_68[0] = &LAB_143a0a288;
    local_40 = lVar17;
    local_38 = param_1;
    FUN_14005a792(&DAT_14ca9a440,L"ResetRT",&DAT_14cb3ad08);
    if (local_68[0] != (undefined1 *)0x0) {
      pppuVar13 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar13 = &local_48;
      }
      (*(code *)(*pppuVar13)[2])();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400d4a02 FUN_1400d4a02 body=32 status=ok
// SIG undefined FUN_1400d4a02(void)

void FUN_1400d4a02(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  if ((param_1 != 0) && (DAT_14cb259f8 != 0)) {
    FUN_1447eec96(DAT_14cb259f8,param_1,param_2,param_3);
    return;
  }
  return;
}



// FUNCTION 1400d4a22 FUN_1400d4a22 body=209 status=ok
// SIG undefined FUN_1400d4a22(void)

uint * FUN_1400d4a22(longlong *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint *puVar9;
  
  uVar2 = *(uint *)(param_1 + 1);
  lVar4 = *param_1;
  if ((int)uVar2 < 1) {
    uVar7 = 0;
  }
  else {
    uVar5 = *param_2;
    uVar7 = 0;
    uVar6 = uVar2;
    do {
      uVar1 = (uVar6 >> 1) + uVar7;
      if (*(uint *)(lVar4 + (ulonglong)uVar1 * 8) < uVar5) {
        uVar7 = uVar1 + (uVar6 & 1);
      }
      bVar3 = 1 < uVar6;
      uVar6 = uVar6 >> 1;
    } while (bVar3);
    if (((int)uVar7 < (int)uVar2) && (*(uint *)(lVar4 + (ulonglong)uVar7 * 8) <= uVar5)) {
      puVar9 = (uint *)(lVar4 + (ulonglong)uVar7 * 8);
      goto LAB_1400d4ab6;
    }
  }
  *(uint *)(param_1 + 1) = uVar2 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar2) {
    FUN_140134eb8(param_1,uVar2);
    lVar4 = *param_1;
  }
  uVar8 = (ulonglong)uVar7;
  memmove((void *)(lVar4 + uVar8 * 8 + 8),(void *)(lVar4 + uVar8 * 8),
          (ulonglong)(uVar2 - uVar7) << 3);
  puVar9 = (uint *)(uVar8 * 8 + *param_1);
  uVar5 = *param_2;
LAB_1400d4ab6:
  *puVar9 = uVar5;
  puVar9[1] = *param_3;
  return puVar9 + 1;
}



// FUNCTION 1400d4af4 FUN_1400d4af4 body=552 status=ok
// SIG undefined FUN_1400d4af4(void)

void FUN_1400d4af4(longlong *param_1,undefined4 param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined2 *puVar9;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  if (*(int *)((longlong)param_1 + 0x24) < 0) {
    FUN_1400821c8(param_1 + 3);
  }
  lVar7 = param_1[6];
  if ((longlong)(int)lVar7 != 0) {
    lVar8 = param_1[5];
    lVar6 = 0;
    do {
      lVar4 = *(longlong *)(lVar8 + 8 + lVar6);
      if (lVar4 != 0) {
        *(undefined4 *)(lVar4 + 0xe8) = 0xffffffff;
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)lVar7 * 0x10 != lVar6);
  }
  plVar1 = param_1 + 5;
  *(undefined4 *)(param_1 + 6) = 0;
  if (*(int *)((longlong)param_1 + 0x34) < 0) {
    FUN_147d6bf06(plVar1);
  }
  FUN_1400d4d1e(param_1,param_2,DAT_14c760db4,param_3);
  if (((((param_3 != 0) && (param_4 != 0)) && ((char)param_1[8] != '\0')) &&
      ((DAT_14c761bd0 != 0 && (0 < *(int *)(param_3 + 0x138))))) &&
     (*(int *)(param_3 + 0x138) == *(int *)(param_4 + 8) - *(int *)(param_4 + 0x34))) {
    *(bool *)(param_1 + 1) = (*(byte *)(param_3 + 0x240) & 8) == 0;
    *param_1 = param_4;
    uVar2 = *(uint *)(param_3 + 0x138);
    iVar3 = (int)param_1[6];
    *(uint *)(param_1 + 6) = iVar3 + uVar2;
    if ((uint)(*(int *)((longlong)param_1 + 0x34) - iVar3) < uVar2) {
      FUN_147d6bf36(plVar1);
    }
    memset((void *)((longlong)iVar3 * 0x10 + *plVar1),0,(longlong)(int)uVar2 << 4);
    if ((*(int *)(param_3 + 0x148) == *(int *)(param_3 + 0x138)) &&
       (FUN_147d66052(param_1 + 3), 0 < *(int *)(param_3 + 0x148))) {
      lVar7 = 0;
      lVar8 = 0;
      do {
        FUN_1400021e4(*(longlong *)(param_3 + 0x140) + lVar7,&local_58);
        puVar9 = &DAT_149dfb77a;
        if (local_50 != 0) {
          puVar9 = local_58;
        }
        uVar5 = FUN_144a7937e();
        lVar6 = FUN_140277b32(uVar5,0,puVar9,0);
        if (local_58 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (lVar6 != 0) {
          *(longlong *)(param_1[3] + lVar8 * 8) = lVar6;
          FUN_147d660c8(param_1,lVar6);
        }
        lVar8 = lVar8 + 1;
        lVar7 = lVar7 + 8;
      } while (lVar8 < *(int *)(param_3 + 0x148));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1400d4d1e FUN_1400d4d1e body=140 status=ok
// SIG undefined FUN_1400d4d1e(void)

void FUN_1400d4d1e(longlong param_1,byte param_2,uint param_3,longlong param_4)

{
  uint uVar1;
  uint uVar2;
  
  *(byte *)(param_1 + 0x38) = param_2;
  *(uint *)(param_1 + 0x3c) = param_3;
  *(undefined1 *)(param_1 + 0x40) = 0;
  if (param_4 != 0) {
    if (*(longlong *)(param_4 + 0xc0) != 0) {
      param_3 = (uint)*(byte *)(*(longlong *)(param_4 + 0xc0) + 0x150);
      *(uint *)(param_1 + 0x3c) = param_3;
    }
    uVar1 = *(uint *)(param_4 + 0x150);
    if ((uVar1 < 0x50000) && (uVar2 = uVar1 & 0xffff, uVar2 < 6)) {
      uVar1 = uVar1 >> 0x10;
      if (uVar1 == 4) {
        uVar1 = (uint)DAT_14cb0cc00;
      }
      if (uVar2 == 5) {
        uVar2 = DAT_14c760db4;
      }
      if (param_2 == 4) {
        param_2 = DAT_14cb0cc00;
      }
      if (param_3 == 5) {
        param_3 = DAT_14c760db4;
      }
      *(bool *)(param_1 + 0x40) = param_3 == uVar2 && param_2 == (byte)uVar1;
    }
  }
  return;
}



// FUNCTION 1400d4daa FUN_1400d4daa body=3180 status=ok
// SIG undefined FUN_1400d4daa(void)

void FUN_1400d4daa(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  undefined8 *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  byte bVar12;
  uint uVar13;
  longlong lVar14;
  undefined1 *puVar15;
  ulonglong *puVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  uint *puVar22;
  longlong lVar23;
  longlong lVar24;
  PSRWLOCK pRVar25;
  ulonglong uVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  int iVar31;
  undefined8 *puVar32;
  ulonglong uVar33;
  longlong lVar34;
  ulonglong uVar35;
  ulonglong *puVar36;
  double dVar37;
  double dVar38;
  undefined1 auStack_158 [40];
  PSRWLOCK local_130;
  int local_124;
  ulonglong local_120;
  longlong local_118;
  longlong local_110;
  ulonglong local_108;
  ulonglong *local_100;
  uint local_f8;
  uint local_f4;
  longlong local_f0;
  longlong local_e8;
  uint *local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  longlong local_c8;
  ulonglong *local_c0;
  ulonglong *local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong *local_a0;
  char local_92;
  char local_91;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar14 = *(longlong *)(param_1 + 0xb0);
  if (lVar14 == 0) {
    lVar14 = FUN_1448abda6(param_1);
  }
  lVar14 = *(longlong *)(lVar14 + 0x260);
  iVar18 = *(int *)(param_1 + 0x1c4);
  FUN_1447f696d(*(undefined8 *)(param_1 + 0x1b8),*(undefined4 *)(param_1 + 0x1c0));
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  if ((iVar18 < 0) && (*(int *)(param_1 + 0x1c4) != 0)) {
    FUN_14748bf18(param_1 + 0x1b8,0);
  }
  local_118 = param_1;
  if (*(int *)(param_1 + 0x120) != *(int *)(param_1 + 0x14c)) {
    FUN_14748cf32();
    *(undefined4 *)(param_1 + 0x120) = 0;
    if (*(int *)(param_1 + 0x124) < 0) {
      FUN_1446f4a44(param_1 + 0x118,0);
    }
    *(undefined8 *)(local_118 + 0x148) = 0xffffffff;
    *(undefined4 *)(local_118 + 0x140) = 0;
  }
  if (0 < *(int *)(param_2 + 0x10)) {
    iVar18 = *(int *)(local_118 + 0x208);
    if (iVar18 == 0) {
      uVar26 = 1;
      uVar33 = 0;
      iVar31 = 0;
      iVar17 = 0;
    }
    else {
      puVar22 = *(uint **)(local_118 + 0x200);
      if (*(uint **)(local_118 + 0x200) == (uint *)0x0) {
        puVar22 = (uint *)(local_118 + 0x1f0);
      }
      uVar13 = *puVar22;
      if (uVar13 == 0) {
        iVar31 = iVar18 + 0x1e;
        if (-1 < iVar18 + -1) {
          iVar31 = iVar18 + -1;
        }
        uVar33 = 0;
        uVar26 = (ulonglong)(uint)(iVar31 >> 5);
        if (iVar31 >> 5 < 1) {
          uVar26 = uVar33;
        }
        iVar31 = 0;
        do {
          if (uVar26 == uVar33) goto LAB_1400d5953;
          iVar31 = iVar31 + 0x20;
          uVar13 = puVar22[uVar33 + 1];
          uVar33 = uVar33 + 1;
        } while (uVar13 == 0);
      }
      else {
        uVar33 = 0;
        iVar31 = 0;
      }
      uVar26 = (ulonglong)(-uVar13 & uVar13);
      uVar35 = uVar26 * 2 + 1;
      lVar29 = 0x3f;
      if (uVar35 != 0) {
        for (; uVar35 >> lVar29 == 0; lVar29 = lVar29 + -1) {
        }
      }
      iVar17 = (iVar31 - ((uint)lVar29 ^ 0x3f)) + 0x3e;
      if (iVar18 <= iVar17) {
        iVar17 = iVar18;
      }
    }
    if (iVar17 < iVar18) {
      local_130 = (PSRWLOCK)(lVar14 + 0x280);
      local_e8 = lVar14 + 0x330;
      local_c8 = param_2 + 0x58;
      local_110 = lVar14 + 0x2e0;
      local_e0 = (uint *)(local_118 + 0x1f0);
      local_b0 = param_2;
      uVar13 = 0xffffffff;
      do {
        local_f8 = uVar13;
        lVar29 = *(longlong *)(local_118 + 0x1e0);
        local_120 = *(ulonglong *)(lVar29 + (longlong)iVar17 * 0x68);
        pRVar25 = (PSRWLOCK)0x0;
        if (DAT_14c992a90 != '\0') {
          pRVar25 = local_130;
        }
        local_124 = iVar31;
        local_d8 = uVar26;
        if (pRVar25 != (PSRWLOCK)0x0) {
          AcquireSRWLockShared(pRVar25);
        }
        if (*(int *)(lVar14 + 0x300) != *(int *)(lVar14 + 0x32c)) {
          uVar13 = ((uint)(local_120 >> 0x14) & 0xffff ^ (uint)(local_120 >> 4)) * -0x7a143595;
          uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
          lVar24 = *(longlong *)(lVar14 + 0x338);
          if (*(longlong *)(lVar14 + 0x338) == 0) {
            lVar24 = local_e8;
          }
          iVar18 = *(int *)(lVar24 + (ulonglong)
                                     (*(int *)(lVar14 + 0x340) - 1U & (uVar13 >> 0x10 ^ uVar13)) * 4
                           );
          if (iVar18 != -1) {
            do {
              lVar24 = *(longlong *)(lVar14 + 0x2f8) + (longlong)iVar18 * 0x20;
              if (*(ulonglong *)(*(longlong *)(lVar14 + 0x2f8) + (longlong)iVar18 * 0x20) ==
                  local_120) goto LAB_1400d5032;
              iVar18 = *(int *)(lVar24 + 0x18);
            } while (iVar18 != -1);
          }
        }
        lVar24 = 0;
LAB_1400d5032:
        local_d0 = uVar33;
        if (pRVar25 != (PSRWLOCK)0x0) {
          ReleaseSRWLockShared(pRVar25);
        }
        if ((lVar24 != 0) && ((longlong)*(int *)(lVar24 + 0x10) != 0)) {
          local_100 = *(ulonglong **)(lVar24 + 8);
          local_b8 = local_100 + *(int *)(lVar24 + 0x10);
          local_f0 = lVar29 + (longlong)iVar17 * 0x68 + 0x10;
          do {
            if (*(int *)(param_2 + 0x28) != *(int *)(param_2 + 0x54)) {
              uVar33 = *local_100;
              uVar13 = ((uint)(uVar33 >> 0x14) & 0xffff ^ (uint)(uVar33 >> 4)) * -0x7a143595;
              local_f4 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
              local_f4 = local_f4 >> 0x10 ^ local_f4;
              lVar29 = *(longlong *)(param_2 + 0x60);
              if (*(longlong *)(param_2 + 0x60) == 0) {
                lVar29 = local_c8;
              }
              iVar18 = *(int *)(lVar29 + (ulonglong)(*(int *)(param_2 + 0x68) - 1U & local_f4) * 4);
              if (iVar18 != -1) {
                do {
                  lVar29 = *(longlong *)(param_2 + 0x20) + (longlong)iVar18 * 0x20;
                  if (*(ulonglong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar18 * 0x20) ==
                      uVar33) {
                    local_a0 = (longlong *)(lVar29 + 8);
                    if ((local_a0 != (longlong *)0x0 && lVar29 != 0) &&
                       (local_a8 = (longlong)*(int *)(lVar29 + 0x10), 0 < local_a8)) {
                      lVar29 = 0;
                      do {
                        uVar13 = *(uint *)(*local_a0 + lVar29 * 4);
                        local_108 = (ulonglong)uVar13;
                        lVar24 = *(longlong *)(param_2 + 8);
                        lVar34 = (ulonglong)(uVar13 & 0x7fffffff) * 0x120;
                        uVar26 = *(ulonglong *)(lVar24 + 0x108 + lVar34);
                        if (uVar26 == 0) {
                          uVar26 = uVar33;
                        }
                        pRVar25 = (PSRWLOCK)0x0;
                        if (DAT_14c992a90 != '\0') {
                          pRVar25 = local_130;
                        }
                        if (pRVar25 != (PSRWLOCK)0x0) {
                          AcquireSRWLockShared(pRVar25);
                        }
                        if (*(int *)(lVar14 + 0x2b0) != *(int *)(lVar14 + 0x2dc)) {
                          lVar23 = *(longlong *)(lVar14 + 0x2e8);
                          if (*(longlong *)(lVar14 + 0x2e8) == 0) {
                            lVar23 = local_110;
                          }
                          iVar18 = *(int *)(lVar23 + (ulonglong)
                                                     (*(int *)(lVar14 + 0x2f0) - 1U & local_f4) * 4)
                          ;
                          if (iVar18 != -1) {
                            do {
                              puVar36 = (ulonglong *)
                                        (*(longlong *)(lVar14 + 0x2a8) + (longlong)iVar18 * 0x18);
                              if (*puVar36 == uVar33) {
                                if (puVar36 != (ulonglong *)0x0) {
                                  uVar35 = 0;
                                  if (puVar36 + 1 != (ulonglong *)0x0) {
                                    uVar35 = puVar36[1];
                                  }
                                  goto LAB_1400d51f9;
                                }
                                break;
                              }
                              iVar18 = (int)puVar36[2];
                            } while (iVar18 != -1);
                          }
                        }
                        uVar35 = 0;
LAB_1400d51f9:
                        if (pRVar25 != (PSRWLOCK)0x0) {
                          ReleaseSRWLockShared(pRVar25);
                        }
                        if (uVar35 != 0) {
                          pRVar25 = (PSRWLOCK)0x0;
                          if (DAT_14c992a90 != '\0') {
                            pRVar25 = local_130;
                          }
                          if (pRVar25 != (PSRWLOCK)0x0) {
                            AcquireSRWLockShared(pRVar25);
                          }
                          if (*(int *)(lVar14 + 0x2b0) != *(int *)(lVar14 + 0x2dc)) {
                            uVar13 = ((uint)(uVar26 >> 0x14) & 0xffff ^ (uint)(uVar26 >> 4)) *
                                     -0x7a143595;
                            uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
                            lVar23 = *(longlong *)(lVar14 + 0x2e8);
                            if (*(longlong *)(lVar14 + 0x2e8) == 0) {
                              lVar23 = local_110;
                            }
                            iVar18 = *(int *)(lVar23 + (ulonglong)
                                                       (*(int *)(lVar14 + 0x2f0) - 1U &
                                                       (uVar13 >> 0x10 ^ uVar13)) * 4);
                            if (iVar18 != -1) {
                              do {
                                puVar36 = (ulonglong *)
                                          (*(longlong *)(lVar14 + 0x2a8) + (longlong)iVar18 * 0x18);
                                if (*puVar36 == uVar26) {
                                  if (puVar36 != (ulonglong *)0x0) {
                                    uVar35 = 0;
                                    if (puVar36 + 1 != (ulonglong *)0x0) {
                                      uVar35 = puVar36[1];
                                    }
                                    goto LAB_1400d52be;
                                  }
                                  break;
                                }
                                iVar18 = (int)puVar36[2];
                              } while (iVar18 != -1);
                            }
                          }
                          uVar35 = 0;
LAB_1400d52be:
                          if (pRVar25 != (PSRWLOCK)0x0) {
                            ReleaseSRWLockShared(pRVar25);
                          }
                          if (uVar35 != 0) {
                            local_108 = local_108 >> 0x1f & 1;
                            puVar32 = (undefined8 *)(lVar24 + lVar34);
                            local_91 = '\0';
                            puVar15 = (undefined1 *)FUN_140e6d564(local_118,uVar33,uVar26,&local_91)
                            ;
                            dVar4 = (double)puVar32[3];
                            dVar5 = (double)puVar32[4];
                            dVar6 = (double)puVar32[5];
                            dVar7 = dVar6 * (double)puVar32[8] +
                                    dVar4 * (double)puVar32[6] + dVar5 * (double)puVar32[7];
                            dVar37 = (double)puVar32[6] * dVar7;
                            dVar38 = (double)puVar32[7] * dVar7;
                            dVar7 = dVar7 * (double)puVar32[8];
                            *(double *)(puVar15 + 0x88) = dVar37 + *(double *)(puVar15 + 0x88);
                            *(double *)(puVar15 + 0x90) = dVar38 + *(double *)(puVar15 + 0x90);
                            *(double *)(puVar15 + 0x98) = dVar7 + *(double *)(puVar15 + 0x98);
                            *(double *)(puVar15 + 0xa0) =
                                 (dVar4 - dVar37) + *(double *)(puVar15 + 0xa0);
                            *(double *)(puVar15 + 0xa8) =
                                 (dVar5 - dVar38) + *(double *)(puVar15 + 0xa8);
                            puVar36 = puVar32 + 6;
                            *(double *)(puVar15 + 0xb0) =
                                 (dVar6 - dVar7) + *(double *)(puVar15 + 0xb0);
                            if (local_91 == '\x01') {
                              pRVar25 = (PSRWLOCK)0x0;
                              if (DAT_14c992a90 != '\0') {
                                pRVar25 = local_130;
                              }
                              if (pRVar25 != (PSRWLOCK)0x0) {
                                AcquireSRWLockShared(pRVar25);
                              }
                              if (*(int *)(lVar14 + 0x2b0) != *(int *)(lVar14 + 0x2dc)) {
                                uVar13 = ((uint)(uVar26 >> 0x14) & 0xffff ^ (uint)(uVar26 >> 4)) *
                                         -0x7a143595;
                                uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
                                lVar24 = *(longlong *)(lVar14 + 0x2e8);
                                if (*(longlong *)(lVar14 + 0x2e8) == 0) {
                                  lVar24 = local_110;
                                }
                                iVar18 = *(int *)(lVar24 + (ulonglong)
                                                           (*(int *)(lVar14 + 0x2f0) - 1U &
                                                           (uVar13 >> 0x10 ^ uVar13)) * 4);
                                if (iVar18 != -1) {
                                  do {
                                    puVar16 = (ulonglong *)
                                              (*(longlong *)(lVar14 + 0x2a8) +
                                              (longlong)iVar18 * 0x18);
                                    if (*puVar16 == uVar26) {
                                      if (puVar16 != (ulonglong *)0x0) {
                                        uVar35 = 0;
                                        if (puVar16 + 1 != (ulonglong *)0x0) {
                                          uVar35 = puVar16[1];
                                        }
                                        goto LAB_1400d549d;
                                      }
                                      break;
                                    }
                                    iVar18 = (int)puVar16[2];
                                  } while (iVar18 != -1);
                                }
                              }
                              uVar35 = 0;
LAB_1400d549d:
                              local_c0 = puVar36;
                              if (pRVar25 != (PSRWLOCK)0x0) {
                                ReleaseSRWLockShared(pRVar25);
                              }
                              plVar1 = (longlong *)(puVar15 + 0x78);
                              *puVar15 = 1;
                              FUN_143276ee6(puVar15 + 8,local_120);
                              FUN_143276ee6(puVar15 + 0x40,uVar35);
                              iVar18 = *(int *)(puVar15 + 0x80);
                              lVar24 = (longlong)iVar18;
                              *(uint *)(puVar15 + 0x80) = iVar18 + 1U;
                              if (*(uint *)(puVar15 + 0x84) < iVar18 + 1U) {
                                FUN_141795f68(plVar1,iVar18);
                              }
                              puVar36 = local_c0;
                              lVar34 = *plVar1;
                              puVar3 = (undefined8 *)(lVar34 + 0x30 + lVar24 * 0x48);
                              *puVar3 = 0;
                              puVar3[1] = 0;
                              puVar3 = (undefined8 *)(lVar34 + 0x20 + lVar24 * 0x48);
                              *puVar3 = 0;
                              puVar3[1] = 0;
                              puVar3 = (undefined8 *)(lVar34 + 0x10 + lVar24 * 0x48);
                              *puVar3 = 0;
                              puVar3[1] = 0;
                              puVar3 = (undefined8 *)(lVar34 + lVar24 * 0x48);
                              *puVar3 = 0;
                              puVar3[1] = 0;
                              *(undefined8 *)(lVar34 + 0x40 + lVar24 * 0x48) = 0;
                              *(ulonglong *)(lVar34 + 0x28 + lVar24 * 0x48) = local_c0[2];
                              uVar35 = local_c0[1];
                              puVar16 = (ulonglong *)(lVar34 + 0x18 + lVar24 * 0x48);
                              *puVar16 = *local_c0;
                              puVar16[1] = uVar35;
                              uVar11 = puVar32[1];
                              puVar3 = (undefined8 *)(lVar34 + lVar24 * 0x48);
                              *puVar3 = *puVar32;
                              puVar3[1] = uVar11;
                              *(undefined8 *)(lVar34 + 0x10 + lVar24 * 0x48) = puVar32[2];
                              *(float *)(lVar34 + 0x30 + lVar24 * 0x48) =
                                   (float)(double)puVar32[0x1d];
                              if ((int)local_108 != 0) {
                                FUN_1436454fc(plVar1);
                              }
                            }
                            if (*(int *)(local_f0 + 0x34) < *(int *)(local_f0 + 8)) {
                              local_92 = '\0';
                              puVar16 = (ulonglong *)
                                        FUN_140e3c858(local_118,uVar33,uVar26,&local_92);
                              puVar16[8] = (ulonglong)((double)puVar32[3] + (double)puVar16[8]);
                              puVar16[9] = (ulonglong)((double)puVar32[4] + (double)puVar16[9]);
                              puVar16[10] = (ulonglong)((double)puVar32[5] + (double)puVar16[10]);
                              if (local_92 == '\x01') {
                                pRVar25 = (PSRWLOCK)0x0;
                                if (DAT_14c992a90 != '\0') {
                                  pRVar25 = local_130;
                                }
                                if (pRVar25 != (PSRWLOCK)0x0) {
                                  AcquireSRWLockShared(pRVar25);
                                }
                                if (*(int *)(lVar14 + 0x2b0) != *(int *)(lVar14 + 0x2dc)) {
                                  uVar13 = ((uint)(uVar26 >> 0x14) & 0xffff ^ (uint)(uVar26 >> 4)) *
                                           -0x7a143595;
                                  uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
                                  lVar24 = *(longlong *)(lVar14 + 0x2e8);
                                  if (*(longlong *)(lVar14 + 0x2e8) == 0) {
                                    lVar24 = local_110;
                                  }
                                  iVar18 = *(int *)(lVar24 + (ulonglong)
                                                             (*(int *)(lVar14 + 0x2f0) - 1U &
                                                             (uVar13 >> 0x10 ^ uVar13)) * 4);
                                  if (iVar18 != -1) {
                                    do {
                                      puVar2 = (ulonglong *)
                                               (*(longlong *)(lVar14 + 0x2a8) +
                                               (longlong)iVar18 * 0x18);
                                      if (*puVar2 == uVar26) {
                                        if (puVar2 != (ulonglong *)0x0) {
                                          uVar26 = 0;
                                          if (puVar2 + 1 != (ulonglong *)0x0) {
                                            uVar26 = puVar2[1];
                                          }
                                          goto LAB_1400d568a;
                                        }
                                        break;
                                      }
                                      iVar18 = (int)puVar2[2];
                                    } while (iVar18 != -1);
                                  }
                                }
                                uVar26 = 0;
LAB_1400d568a:
                                if (pRVar25 != (PSRWLOCK)0x0) {
                                  ReleaseSRWLockShared(pRVar25);
                                }
                                if (DAT_14c950c29 == 1 && local_120 != 0) {
                                  FUN_1456cec3c();
                                }
                                bVar12 = DAT_14c950c29;
                                *puVar16 = local_120;
                                if ((uVar26 != 0) && ((bVar12 & 1) != 0)) {
                                  FUN_1456cec3c(uVar26);
                                }
                                puVar16[1] = uVar26;
                                uVar8 = *(undefined4 *)((longlong)puVar32 + 4);
                                uVar9 = *(undefined4 *)(puVar32 + 1);
                                uVar10 = *(undefined4 *)((longlong)puVar32 + 0xc);
                                *(undefined4 *)(puVar16 + 2) = *(undefined4 *)puVar32;
                                *(undefined4 *)((longlong)puVar16 + 0x14) = uVar8;
                                *(undefined4 *)(puVar16 + 3) = uVar9;
                                *(undefined4 *)((longlong)puVar16 + 0x1c) = uVar10;
                                puVar16[4] = puVar32[2];
                                FUN_140200ab6(puVar16 + 0x18,local_f0);
                                if ((int)local_108 == 0) {
                                  puVar16[10] = puVar32[5];
                                  uVar26 = puVar32[4];
                                  puVar16[8] = puVar32[3];
                                  puVar16[9] = uVar26;
                                  puVar16[7] = puVar36[2];
                                  uVar26 = puVar36[1];
                                  puVar16[5] = *puVar36;
                                  puVar16[6] = uVar26;
                                  lVar24 = 0xe0;
                                  lVar34 = 0xd8;
                                  lVar23 = 0xc0;
                                  lVar27 = 0xa8;
                                  lVar28 = 0x60;
                                  lVar30 = 0x48;
                                }
                                else {
                                  uVar26 = puVar32[5];
                                  uVar35 = puVar32[4];
                                  puVar16[8] = puVar32[3] ^ 0x8000000000000000;
                                  puVar16[9] = uVar35 ^ 0x8000000000000000;
                                  puVar16[10] = uVar26 ^ 0x8000000000000000;
                                  uVar26 = puVar32[8];
                                  uVar35 = puVar32[7];
                                  puVar16[5] = puVar32[6] ^ 0x8000000000000000;
                                  puVar16[6] = uVar35 ^ 0x8000000000000000;
                                  puVar16[7] = uVar26 ^ 0x8000000000000000;
                                  lVar24 = 0xd8;
                                  lVar34 = 0xe0;
                                  lVar23 = 0xa8;
                                  lVar27 = 0xc0;
                                  lVar28 = 0x48;
                                  lVar30 = 0x60;
                                }
                                puVar16[0xd] = *(ulonglong *)((longlong)puVar32 + lVar30 + 0x10);
                                uVar26 = ((ulonglong *)((longlong)puVar32 + lVar30))[1];
                                puVar16[0xb] = *(ulonglong *)((longlong)puVar32 + lVar30);
                                puVar16[0xc] = uVar26;
                                puVar16[0x10] = *(ulonglong *)((longlong)puVar32 + lVar28 + 0x10);
                                uVar26 = ((ulonglong *)((longlong)puVar32 + lVar28))[1];
                                puVar16[0xe] = *(ulonglong *)((longlong)puVar32 + lVar28);
                                puVar16[0xf] = uVar26;
                                puVar16[0x13] = *(ulonglong *)((longlong)puVar32 + lVar27 + 0x10);
                                uVar26 = ((ulonglong *)((longlong)puVar32 + lVar27))[1];
                                puVar16[0x11] = *(ulonglong *)((longlong)puVar32 + lVar27);
                                puVar16[0x12] = uVar26;
                                puVar16[0x16] = *(ulonglong *)((longlong)puVar32 + lVar23 + 0x10);
                                uVar26 = ((ulonglong *)((longlong)puVar32 + lVar23))[1];
                                puVar16[0x14] = *(ulonglong *)((longlong)puVar32 + lVar23);
                                puVar16[0x15] = uVar26;
                                *(float *)(puVar16 + 0x17) =
                                     (float)*(double *)((longlong)puVar32 + lVar34);
                                *(float *)((longlong)puVar16 + 0xbc) =
                                     (float)*(double *)((longlong)puVar32 + lVar24);
                              }
                            }
                          }
                        }
                        lVar29 = lVar29 + 1;
                        param_2 = local_b0;
                      } while (lVar29 != local_a8);
                    }
                    break;
                  }
                  iVar18 = *(int *)(lVar29 + 0x18);
                } while (iVar18 != -1);
              }
            }
            local_100 = local_100 + 1;
          } while (local_100 != local_b8);
        }
        uVar13 = local_f8 & ~(uint)local_d8;
        puVar22 = *(uint **)(local_118 + 0x200);
        if (*(uint **)(local_118 + 0x200) == (uint *)0x0) {
          puVar22 = local_e0;
        }
        iVar18 = *(int *)(local_118 + 0x208);
        iVar17 = (int)local_d0;
        lVar29 = (longlong)iVar17;
        uVar19 = puVar22[lVar29] & uVar13;
        uVar33 = local_d0;
        iVar31 = local_124;
        if (uVar19 == 0) {
          iVar20 = iVar18 + 0x1e;
          if (-1 < iVar18 + -1) {
            iVar20 = iVar18 + -1;
          }
          iVar20 = iVar20 >> 5;
          iVar21 = iVar20;
          if (iVar20 < iVar17) {
            iVar21 = iVar17;
          }
          if (iVar20 <= iVar17) break;
          lVar24 = 0;
          while( true ) {
            iVar31 = iVar31 + 0x20;
            uVar19 = puVar22[lVar29 + lVar24 + 1];
            if (uVar19 != 0) break;
            lVar24 = lVar24 + 1;
            if (iVar21 - lVar29 == lVar24) goto LAB_1400d5953;
          }
          uVar13 = 0xffffffff;
          uVar33 = (ulonglong)(iVar17 + (int)lVar24 + 1);
        }
        uVar26 = (ulonglong)(-uVar19 & uVar19);
        uVar35 = uVar26 * 2 + 1;
        lVar29 = 0x3f;
        if (uVar35 != 0) {
          for (; uVar35 >> lVar29 == 0; lVar29 = lVar29 + -1) {
          }
        }
        iVar17 = (iVar31 - ((uint)lVar29 ^ 0x3f)) + 0x3e;
      } while (iVar17 < iVar18);
    }
  }
LAB_1400d5953:
  if ((local_90 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    FUN_1447f6436(local_118);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400d5a18 caseD_4f body=1756 status=ok
// SIG undefined caseD_4f(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void switchD_143c3d4dc::caseD_4f(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  size_t _Size;
  longlong lVar10;
  undefined1 *puVar11;
  undefined8 uStack_110;
  undefined1 auStack_108 [12];
  undefined4 local_fc;
  code *local_f8;
  undefined **local_f0;
  undefined2 local_e8;
  longlong local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  undefined1 *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong lStack_70;
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  undefined2 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)&local_88;
  puVar7 = auStack_108;
  if ((param_1 == (longlong *)0x0) ||
     (puVar7 = auStack_108, (*(uint *)(param_1 + 1) >> 0x1e & 1) != 0)) goto LAB_1400d5e6f;
  if ((*(byte *)(param_2 + 0xb1) & 4) == 0) {
    uVar5 = *(uint *)(param_2 + 0x68);
  }
  else {
    uVar5 = (**(code **)(*param_1 + 0x250))(param_1,param_2,0);
    if ((uVar5 & 1) != 0) {
      (**(code **)(*param_1 + 600))(param_1,param_2,param_3,0,0);
    }
    uVar5 = uVar5 & 2;
  }
  puVar7 = auStack_108;
  if (uVar5 == 0) goto LAB_1400d5e6f;
  if (*(longlong *)(param_2 + 200) != 0) {
    local_fc = *(undefined4 *)(param_2 + 0xd0);
    param_3 = &local_fc;
    param_2 = *(longlong *)(param_2 + 200);
  }
  if ((*(byte *)(param_2 + 0xb1) & 0x80) == 0) {
    puVar6 = (undefined1 *)0x0;
  }
  else {
    puVar6 = (undefined1 *)
             (**(code **)(**(longlong **)(param_2 + 0x20) + 0x388))
                       (*(longlong **)(param_2 + 0x20),param_1,param_2);
  }
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0xdb0) == '\0') {
    lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    *(undefined1 *)(lVar8 + 0xdb0) = 1;
    FUN_1417070f4(lVar8 + 0xd70,0,0);
    __tlregdtor(&LAB_14282552c);
  }
  puVar7 = auStack_108;
  puVar11 = puVar6;
  if (puVar6 == (undefined1 *)0x0) {
    uVar5 = *(uint *)(param_2 + 0x58);
    lVar8 = (longlong)(int)uVar5;
    if (lVar8 == 0) {
      puVar11 = (undefined1 *)0x0;
      puVar7 = auStack_108;
    }
    else {
      lVar10 = (longlong)*(int *)(param_2 + 0x5c);
      if (lVar10 < 0x11) {
        uStack_110 = 0x1400d5b59;
        lVar10 = -(lVar8 + 0x1eU & 0xfffffffffffffff0);
        puVar11 = auStack_108 + lVar10;
        puVar7 = auStack_108 + lVar10;
      }
      else {
        uStack_110 = 0x1400d5b7b;
        lVar3 = -((longlong)(int)(uVar5 + *(int *)(param_2 + 0x5c) + -1) + 0xfU & 0xfffffffffffffff0
                 );
        puVar11 = (undefined1 *)(-lVar10 & (ulonglong)(auStack_108 + lVar10 + lVar3 + -1));
        puVar7 = auStack_108 + lVar3;
      }
    }
    uVar1 = *(ushort *)(param_2 + 0xb6);
    if (uVar5 != uVar1) {
      *(undefined8 *)(puVar7 + -0x28) = 0x1400d5bac;
      memset(puVar11 + (uint)uVar1,0,lVar8 - (ulonglong)uVar1);
    }
  }
  uVar1 = *(ushort *)(param_2 + 0xb6);
  if ((ulonglong)uVar1 != 0) {
    *(undefined8 *)(puVar7 + -0x28) = 0x1400d5bcc;
    memcpy(puVar11,param_3,(ulonglong)uVar1);
  }
  local_e8 = 0x100;
  local_f0 = &PTR_FUN_149ead850;
  local_d0 = *(undefined8 *)(param_2 + 0x60);
  local_88 = 0;
  local_80 = 0x800000000;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  local_78 = 0;
  lStack_70 = 0;
  local_68 = *(undefined8 *)(param_2 + 0x50);
  local_60 = 0;
  local_50 = 0;
  lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_58 = *(longlong *)(lVar8 + 0xdb8);
  *(undefined ****)(lVar8 + 0xdb8) = &local_f0;
  if (local_58 != 0) {
    local_50 = (ushort)*(byte *)(local_58 + 0xa1) << 8;
  }
  local_e0 = param_2;
  local_d8 = param_1;
  local_c8 = puVar11;
  if (((*(byte *)(param_2 + 0xb2) & 0x40) != 0) &&
     (lVar10 = *(longlong *)(param_2 + 0x50), lVar10 != 0)) {
    plVar9 = &lStack_70;
    puVar11 = puVar7;
    do {
      puVar7 = puVar11;
      if (-1 < (char)*(undefined8 *)(lVar10 + 0x38)) break;
      if (((uint)*(undefined8 *)(lVar10 + 0x38) >> 8 & 1) != 0) {
        *(undefined8 *)(puVar11 + -8) = 0x1400d5c9a;
        puVar7 = puVar11 + -0x30;
        *(longlong *)(puVar11 + -0x28) = (longlong)*(int *)(lVar10 + 0x44) + (longlong)param_3;
        *(longlong *)(puVar11 + -0x30) = lVar10;
        if (*plVar9 == 0) {
          *plVar9 = (longlong)(puVar11 + -0x30);
        }
        else {
          *(undefined1 **)(*plVar9 + 0x10) = puVar11 + -0x30;
          plVar9 = (longlong *)(*plVar9 + 0x10);
          puVar7 = puVar11 + -0x30;
        }
      }
      lVar10 = *(longlong *)(lVar10 + 0x18);
      puVar11 = puVar7;
    } while (lVar10 != 0);
    if (*plVar9 != 0) {
      *(undefined8 *)(*plVar9 + 0x10) = 0;
    }
  }
  if (puVar6 == (undefined1 *)0x0) {
    for (plVar9 = *(longlong **)(param_2 + 0xc0); plVar9 != (longlong *)0x0;
        plVar9 = (longlong *)plVar9[0xc]) {
      if ((*(byte *)((longlong)plVar9 + 0x39) & 2) == 0) {
        puVar6 = local_c8 + *(int *)((longlong)plVar9 + 0x44);
        pcVar4 = *(code **)(*plVar9 + 0x160);
        *(undefined8 *)(puVar7 + -0x28) = 0x1400d5d93;
        (*pcVar4)(plVar9,puVar6);
      }
      else {
        iVar2 = *(int *)((longlong)plVar9 + 0x34);
        lVar10 = plVar9[6];
        puVar6 = local_c8 + *(int *)((longlong)plVar9 + 0x44);
        *(undefined8 *)(puVar7 + -0x28) = 0x1400d5db6;
        memset(puVar6,0,(longlong)(int)lVar10 * (longlong)iVar2);
      }
    }
    lVar10 = 0;
    if ((ulonglong)*(ushort *)(param_2 + 0xb8) != 0xffff) {
      lVar10 = (longlong)param_3 + (ulonglong)*(ushort *)(param_2 + 0xb8);
    }
    lVar3 = *(longlong *)(param_2 + 0x20);
    if (DAT_14c950d78 == 0) {
      local_f8 = FUN_1449e2820;
      *(code **)(puVar7 + -8) = FUN_14081d0ea;
      *(code **)(puVar7 + -0x10) = FUN_14081d0ea;
      *(code ***)(puVar7 + -0x18) = &local_f8;
      *(undefined1 **)(puVar7 + -0x20) = &LAB_1468b50ee;
      *(code **)(puVar7 + -0x28) = FUN_1427f23a3;
      *(wchar_t **)(puVar7 + -0x30) = L"Engine";
      *(undefined8 *)(puVar7 + -0x38) = 0;
      *(undefined4 *)(puVar7 + -0x40) = 0x10004001;
      *(undefined4 *)(puVar7 + -0x48) = 8;
      *(undefined4 *)(puVar7 + -0x50) = 0x28;
      *(undefined8 *)(puVar7 + -0x78) = 0x1400d60ce;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Interface",&DAT_14c950d78,&DAT_1468b50f4);
      if (DAT_14c950d78 != 0) goto LAB_1400d5dec;
    }
    else {
LAB_1400d5dec:
      if ((*(int *)(DAT_14c950d78 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(DAT_14c950d78 + 0x38) * 8)
          == DAT_14c950d78 + 0x30)) {
        *(undefined8 *)(puVar7 + -0x28) = 0x1400d5f8d;
        param_1 = (longlong *)FUN_144718840(param_1,lVar3);
      }
    }
    lVar3 = local_60;
    pcVar4 = *(code **)(param_2 + 0xd8);
    if (pcVar4 == FUN_144810466) {
      local_60 = param_2;
      *(undefined8 *)(puVar7 + -0x28) = 0x1400d5ea9;
      FUN_144810466(param_1,&local_f0,lVar10);
    }
    else {
      local_60 = param_2;
      *(undefined8 *)(puVar7 + -0x28) = 0x1400d5e33;
      (*pcVar4)(param_1,&local_f0,lVar10);
    }
    local_60 = lVar3;
    for (plVar9 = *(longlong **)(param_2 + 0x80); plVar9 != (longlong *)0x0;
        plVar9 = (longlong *)plVar9[0xb]) {
      lVar10 = (longlong)*(int *)((longlong)plVar9 + 0x44);
      _Size = (longlong)*(int *)((longlong)plVar9 + 0x34) * (longlong)(int)plVar9[6];
      if ((int)(uint)*(ushort *)(param_2 + 0xb6) < (int)_Size + *(int *)((longlong)plVar9 + 0x44)) {
        if (((ulonglong)plVar9[7] >> 0x24 & 1) == 0) {
          puVar6 = local_c8 + lVar10;
          pcVar4 = *(code **)(*plVar9 + 0x148);
          *(undefined8 *)(puVar7 + -0x28) = 0x1400d5efc;
          (*pcVar4)(plVar9,puVar6);
        }
      }
      else if (((uint)plVar9[7] >> 8 & 1) == 0) {
        puVar6 = local_c8 + lVar10;
        *(undefined8 *)(puVar7 + -0x28) = 0x1400d5f15;
        memcpy((void *)((longlong)param_3 + lVar10),puVar6,_Size);
      }
    }
  }
  else {
    lVar10 = 0;
    if ((ulonglong)*(ushort *)(param_2 + 0xb8) != 0xffff) {
      lVar10 = (longlong)param_3 + (ulonglong)*(ushort *)(param_2 + 0xb8);
    }
    lVar3 = *(longlong *)(param_2 + 0x20);
    if (DAT_14c950d78 == 0) {
      local_f8 = FUN_1449e2820;
      *(code **)(puVar7 + -8) = FUN_14081d0ea;
      *(code **)(puVar7 + -0x10) = FUN_14081d0ea;
      *(code ***)(puVar7 + -0x18) = &local_f8;
      *(undefined1 **)(puVar7 + -0x20) = &LAB_1468b50ee;
      *(code **)(puVar7 + -0x28) = FUN_1427f23a3;
      *(wchar_t **)(puVar7 + -0x30) = L"Engine";
      *(undefined8 *)(puVar7 + -0x38) = 0;
      *(undefined4 *)(puVar7 + -0x40) = 0x10004001;
      *(undefined4 *)(puVar7 + -0x48) = 8;
      *(undefined4 *)(puVar7 + -0x50) = 0x28;
      *(undefined8 *)(puVar7 + -0x78) = 0x1400d6027;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Interface",&DAT_14c950d78,&DAT_1468b50f4);
      if (DAT_14c950d78 != 0) goto LAB_1400d5d16;
    }
    else {
LAB_1400d5d16:
      if ((*(int *)(DAT_14c950d78 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(DAT_14c950d78 + 0x38) * 8)
          == DAT_14c950d78 + 0x30)) {
        *(undefined8 *)(puVar7 + -0x28) = 0x1400d5f72;
        param_1 = (longlong *)FUN_144718840(param_1,lVar3);
      }
    }
    lVar3 = local_60;
    pcVar4 = *(code **)(param_2 + 0xd8);
    if (pcVar4 == FUN_144810466) {
      local_60 = param_2;
      *(undefined8 *)(puVar7 + -0x28) = 0x1400d5e40;
      FUN_144810466(param_1,&local_f0,lVar10);
      local_60 = lVar3;
    }
    else {
      local_60 = param_2;
      *(undefined8 *)(puVar7 + -0x28) = 0x1400d5d60;
      (*pcVar4)(param_1,&local_f0,lVar10);
      local_60 = lVar3;
    }
  }
  local_f0 = &PTR_FUN_149ead850;
  *(longlong *)(lVar8 + 0xdb8) = local_58;
  if (local_58 != 0) {
    *(byte *)(local_58 + 0xa1) = *(byte *)(local_58 + 0xa1) | local_50._1_1_;
  }
  if (local_88 != 0) {
    *(undefined8 *)(puVar7 + -0x28) = 0x1400d60f0;
    FUN_1400020a8();
  }
LAB_1400d5e6f:
  if ((local_48 ^ (ulonglong)&local_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar7 + -0x28) = &UNK_1400d5e99;
  FUN_144d8e3a0();
}



// FUNCTION 1400d6102 FUN_1400d6102 body=335 status=ok
// SIG undefined FUN_1400d6102(void)

void FUN_1400d6102(char *param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  ushort uVar3;
  ushort *puVar4;
  longlong lVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  undefined1 auStack_58 [40];
  undefined4 *local_30;
  uint local_28;
  undefined4 local_24;
  undefined1 local_20 [8];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1447eef60(local_20,param_1);
  if (*param_1 == '\x01') {
    iVar8 = *(int *)(param_1 + 0x30);
    bVar2 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar8);
    local_28 = (uint)bVar2;
    *(int *)(param_1 + 0x30) = iVar8 + 1;
    local_30 = (undefined4 *)
               ((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar2 * 4 +
               *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar8 * 8));
  }
  else {
    puVar4 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar3 = *puVar4;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar4 + 1;
    uVar6 = uVar3 & 0x7fff;
    if (uVar6 == 0x7fff) {
      local_30 = &local_24;
      local_28 = 0;
    }
    else {
      lVar5 = *(longlong *)(param_1 + 0x80);
      local_28 = 1;
      local_30 = (undefined4 *)
                 ((ulonglong)(uVar6 * *(int *)(lVar5 + 0x80)) + *(longlong *)(lVar5 + 0x70) +
                 (longlong)*(int *)(lVar5 + 0x4c) * 4);
    }
  }
  uVar7 = 0;
  if ((*(longlong *)(local_18 + 8) != 0) &&
     (lVar5 = *(longlong *)(*(longlong *)(*(longlong *)(local_18 + 8) + 0x10) + 0x78), uVar7 = 0,
     lVar5 != 0)) {
    uVar7 = *(undefined4 *)(lVar5 + 0x120);
  }
  piVar9 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar9 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar9) {
    iVar8 = 0;
    do {
      puVar1 = local_30 + (int)local_28;
      *local_30 = uVar7;
      iVar8 = iVar8 + 1;
      piVar9 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar9 = (int *)(param_1 + 0x3c);
      }
      local_30 = puVar1;
    } while (iVar8 < *piVar9);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400d6252 FUN_1400d6252 body=44 status=ok
// SIG undefined FUN_1400d6252(void)

longlong FUN_1400d6252(longlong param_1,int param_2)

{
  FUN_1400d627e(param_1 + 8);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1400d627e FUN_1400d627e body=99 status=ok
// SIG undefined FUN_1400d627e(void)

void FUN_1400d627e(longlong *param_1)

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



// FUNCTION 1400d62e2 FUN_1400d62e2 body=126 status=ok
// SIG undefined FUN_1400d62e2(void)

void FUN_1400d62e2(longlong param_1,undefined8 param_2,uint param_3,int *param_4,undefined8 param_5,
                  undefined8 param_6)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  *param_4 = *param_4 + 1;
  if (0 < *(int *)(param_1 + 0x28)) {
    uVar3 = 0;
    do {
      uVar2 = uVar3 & 0xffffffff;
      if (param_3 != 0xffffffff) {
        uVar2 = (ulonglong)param_3;
      }
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x20) + uVar3 * 8);
      (**(code **)(*plVar1 + 0x130))(plVar1,param_2,uVar2,param_4,param_5,param_6);
      uVar3 = uVar3 + 1;
    } while ((longlong)uVar3 < (longlong)*(int *)(param_1 + 0x28));
  }
  return;
}



// FUNCTION 1400d6360 FUN_1400d6360 body=151 status=ok
// SIG undefined FUN_1400d6360(void)

void FUN_1400d6360(longlong param_1,undefined8 param_2,undefined4 param_3,int *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong *plVar1;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [104];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *param_4 = *param_4 + 1;
  plVar1 = *(longlong **)(param_1 + 0x20);
  FUN_1447dc19e(param_1 + 0x30,local_a8,param_2);
  local_b8 = param_5;
  uStack_b0 = param_6;
  (**(code **)(*plVar1 + 0x130))(plVar1,local_a8,param_3,param_4);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400d63f8 caseD_e body=327 status=ok
// SIG undefined caseD_e(void)

longlong switchD_14013128b::caseD_e
                   (longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
                   undefined8 param_5,longlong param_6)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_6 == 0) {
    FUN_1400eecdc(&local_58,param_3);
  }
  else {
    local_58 = (longlong *)FUN_14001cc68(0x20,0x10);
    local_58[1] = 0;
    local_58[2] = 0;
    *local_58 = param_6;
    *(int *)(local_58 + 1) = (int)param_3;
    *(char *)(local_58 + 3) = (char)((ulonglong)param_3 >> 0x20);
    *(undefined1 *)((longlong)local_58 + 0x19) = 0;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)local_58 + 0xc) = *(int *)((longlong)local_58 + 0xc) + 1;
      UNLOCK();
    }
  }
  lVar3 = FUN_14001cc68(0x90,0x10);
  FUN_1400d6540(lVar3,param_5,&local_58);
  local_68 = 0;
  local_60 = 0;
  local_50 = *(undefined8 *)(param_1 + 8);
  local_48 = *(undefined4 *)(param_1 + 0x10);
  local_78 = param_2;
  local_70 = param_3;
  FUN_1400d65e0(lVar3,&local_50,&local_78,*(undefined4 *)(&DAT_149e69990 + (param_4 & 0xff) * 4));
  plVar2 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_58 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      FUN_144716208(local_58);
      FUN_1400020a8(plVar2);
    }
  }
  lVar4 = lVar3 + 0x30;
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400d6540 FUN_1400d6540 body=160 status=ok
// SIG undefined FUN_1400d6540(void)

undefined8 * FUN_1400d6540(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_LAB_149e69080;
  param_1[1] = *param_3;
  *param_3 = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = &PTR_LAB_149e064f0;
  param_1[8] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined2 *)((longlong)param_1 + 0x84) = 0;
  if (param_2 != 0) {
    FUN_14274e1bc(param_1 + 8);
    uVar1 = 0xffffffffffffffff;
    if ((*(byte *)((longlong)param_1 + 0x84) & 1) != 0) goto LAB_1400d65b3;
  }
  uVar1 = 0;
LAB_1400d65b3:
  param_1[7] = uVar1;
  *param_1 = &PTR_FUN_149e69090;
  param_1[6] = &PTR_FUN_149e690a0;
  param_1[7] = *(undefined8 *)param_1[1];
  return param_1;
}



// FUNCTION 1400d65e0 FUN_1400d65e0 body=563 status=ok
// SIG undefined FUN_1400d65e0(void)

void FUN_1400d65e0(longlong param_1,longlong *param_2,longlong *param_3,undefined4 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong **pplVar8;
  undefined ***pppuVar9;
  undefined1 auStack_e8 [40];
  longlong local_c0;
  longlong *local_b8;
  longlong *plStack_b0;
  code *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined ***local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined **local_88;
  longlong lStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong *local_68;
  undefined8 uStack_60;
  undefined ***local_58;
  undefined8 uStack_50;
  undefined **local_48;
  longlong lStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *(undefined4 *)(param_1 + 0x28) = 1;
  param_3[2] = **(longlong **)(param_1 + 8);
  local_c0 = *DAT_14c844ed8;
  local_b8 = (longlong *)0x0;
  plStack_b0 = (longlong *)0x0;
  local_98 = (undefined ***)0x0;
  local_88 = &PTR_caseD_8_149e69bb0;
  local_a8 = FUN_1427da18c;
  piVar1 = *(int **)(local_c0 + 0x38);
  local_68 = (longlong *)*param_3;
  uStack_60 = param_3[1];
  local_58 = (undefined ***)param_3[2];
  uStack_50 = param_3[3];
  lStack_80 = param_1;
  plVar7 = (longlong *)FUN_14005d3a6(piVar1 + 2,piVar1);
  LOCK();
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  *(int *)(plVar7 + 3) = (int)param_2[1];
  plVar7[2] = *param_2;
  plVar7[4] = (longlong)local_68;
  plVar7[5] = uStack_60;
  plVar7[6] = (longlong)local_58;
  plVar7[7] = uStack_50;
  *(undefined4 *)(plVar7 + 8) = param_4;
  LOCK();
  *(int *)(plVar7 + 0x16) = (int)plVar7[0x16] + 1;
  UNLOCK();
  if (local_b8 == (longlong *)0x0) {
    pplVar8 = &local_b8;
    plStack_b0 = plVar7;
  }
  else {
    pplVar8 = &plStack_b0;
    *plStack_b0 = (longlong)plVar7;
  }
  *pplVar8 = plVar7;
  lVar2 = plVar7[0xe];
  lVar3 = plVar7[0xf];
  local_58 = (undefined ***)plVar7[0x10];
  lVar4 = plVar7[0x11];
  local_48 = (undefined **)plVar7[0x12];
  lStack_40 = plVar7[0x13];
  lVar5 = plVar7[0x14];
  lVar6 = plVar7[0x15];
  plVar7[0x14] = CONCAT44(uStack_74,local_78);
  plVar7[0x15] = CONCAT44(uStack_6c,uStack_70);
  plVar7[0x12] = (longlong)local_88;
  plVar7[0x13] = lStack_80;
  plVar7[0x10] = (longlong)local_98;
  plVar7[0x11] = CONCAT44(uStack_8c,uStack_90);
  plVar7[0xe] = (longlong)local_a8;
  plVar7[0xf] = CONCAT44(uStack_9c,uStack_a0);
  uStack_60._0_4_ = (undefined4)lVar3;
  uStack_60._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
  uStack_50._0_4_ = (undefined4)lVar4;
  uStack_50._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
  local_38._0_4_ = (undefined4)lVar5;
  local_38._4_4_ = (undefined4)((ulonglong)lVar5 >> 0x20);
  uStack_30._0_4_ = (undefined4)lVar6;
  uStack_30._4_4_ = (undefined4)((ulonglong)lVar6 >> 0x20);
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 0x16) = (int)plVar7[0x16] + 1;
    UNLOCK();
  }
  local_a8 = (code *)lVar2;
  local_98 = local_58;
  local_88 = local_48;
  lStack_80 = lStack_40;
  local_68 = plVar7;
  uStack_60 = lVar3;
  uStack_50 = lVar4;
  local_38 = lVar5;
  uStack_30 = lVar6;
  FUN_1447ef144(param_1 + 0x18,&local_68);
  FUN_1447ef07c(&local_68);
  if (local_a8 != (code *)0x0) {
    pppuVar9 = local_98;
    if (local_98 == (undefined ***)0x0) {
      pppuVar9 = &local_88;
    }
    (*(code *)(*pppuVar9)[2])();
  }
  FUN_1400d20b8(local_c0,&local_c0,0);
  FUN_1400d6814(&local_c0);
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400d6814 FUN_1400d6814 body=51 status=ok
// SIG undefined FUN_1400d6814(void)

void FUN_1400d6814(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = *(undefined8 **)(param_1 + 8);
  while (puVar3 = puVar2, puVar3 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar3;
    LOCK();
    piVar1 = (int *)(puVar3 + 0x16);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      FUN_141703ac6(puVar3[9]);
    }
  }
  return;
}



// FUNCTION 1400d6848 FUN_1400d6848 body=71 status=ok
// SIG undefined FUN_1400d6848(void)

bool FUN_1400d6848(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar1 == 0) {
    bVar3 = false;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar5 = 0;
    do {
      iVar4 = (**(code **)(**(longlong **)(lVar2 + lVar5) + 0x30))();
      bVar3 = 0 < iVar4;
      if (0 < iVar4) {
        return bVar3;
      }
      bVar6 = (longlong)iVar1 * 0x10 + -0x10 != lVar5;
      lVar5 = lVar5 + 0x10;
    } while (bVar6);
  }
  return bVar3;
}



// FUNCTION 1400d68a8 FUN_1400d68a8 body=101 status=ok
// SIG undefined FUN_1400d68a8(void)

undefined8 FUN_1400d68a8(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((param_2 != 0) && ((longlong)*(int *)(param_1 + 0x98) != 0)) {
    lVar4 = *(longlong *)(param_1 + 0x90);
    lVar3 = (longlong)*(int *)(param_1 + 0x98) * 0xf8;
    do {
      plVar2 = (longlong *)FUN_1400d690e(lVar4);
      if ((plVar2 != (longlong *)0x0) &&
         (cVar1 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2), cVar1 != '\0')) {
        return 1;
      }
      lVar4 = lVar4 + 0xf8;
      lVar3 = lVar3 + -0xf8;
    } while (lVar3 != 0);
  }
  return 0;
}



// FUNCTION 1400d690e FUN_1400d690e body=100 status=ok
// SIG undefined FUN_1400d690e(void)

void FUN_1400d690e(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1[2] == 0) {
    local_48 = *param_1;
    FUN_1446dcdd4(local_40);
    uVar1 = FUN_1400d6974(local_40);
    param_1[2] = uVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400d6974 FUN_1400d6974 body=84 status=ok
// SIG undefined FUN_1400d6974(void)

undefined8 FUN_1400d6974(int *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = 0;
    if ((param_1[1] == 0) || (*param_1 == DAT_14c948000)) goto LAB_1400d69aa;
    if (DAT_14cb1aeb8 != 0) {
      uVar1 = FUN_144837462(DAT_14cb1aeb8,param_1);
      goto LAB_1400d69aa;
    }
  }
  uVar1 = 0;
LAB_1400d69aa:
  if (*(longlong *)(param_1 + 6) != 0) {
    FUN_1400020a8();
  }
  return uVar1;
}



// FUNCTION 1400d69c8 FUN_1400d69c8 body=221 status=ok
// SIG undefined FUN_1400d69c8(void)

short * FUN_1400d69c8(longlong param_1,short *param_2,longlong *param_3)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  char cVar4;
  longlong lVar5;
  short sVar6;
  short sVar7;
  
  lVar5 = (**(code **)(*param_3 + 8))(param_3);
  sVar3 = *(short *)(lVar5 + 0x2e);
  bVar1 = *(byte *)(param_1 + 2);
  sVar6 = sVar3;
  if (((bVar1 & 0x70) == 0x20) && (sVar6 = sVar3 * 6, 1 < (byte)(*(char *)(lVar5 + 0x32) - 3U))) {
    sVar6 = sVar3;
  }
  cVar2 = *(char *)(param_1 + 1);
  cVar4 = *(char *)(lVar5 + 0x33);
  if (cVar2 != '\0') {
    cVar4 = cVar2;
  }
  *(char *)((longlong)param_2 + 5) = cVar4;
  *(byte *)(param_2 + 2) = bVar1 & 7;
  switch(bVar1 & 7) {
  case 2:
  case 4:
  case 5:
  case 6:
    break;
  case 3:
    if (cVar2 == '\0') {
      *(undefined1 *)((longlong)param_2 + 5) = 0x2c;
    }
    break;
  default:
    if (cVar2 == ',') {
      *(undefined1 *)(param_2 + 2) = 3;
    }
  }
  sVar3 = *(short *)(param_1 + 6);
  *param_2 = sVar3;
  sVar7 = *(short *)(param_1 + 8);
  if (*(short *)(param_1 + 8) == 0) {
    sVar7 = sVar6;
  }
  param_2[1] = sVar7;
  *(byte *)(param_2 + 3) =
       (sVar7 == sVar6 && sVar3 == 0) << 4 | bVar1 >> 4 & 7 | *(byte *)(param_2 + 3) & 0xe0;
  return param_2;
}



// FUNCTION 1400d6aa5 FUN_1400d6aa5 body=411 status=ok
// SIG undefined FUN_1400d6aa5(void)

void FUN_1400d6aa5(int *param_1,longlong *param_2,ushort *param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  puVar1 = (ulonglong *)(**(code **)(*param_2 + 8))(param_2);
  iVar5 = *(int *)((longlong)&DAT_14c873434 +
                  (ulonglong)((uint)*(byte *)((longlong)param_3 + 5) * 0x30));
  if (iVar5 == 0x13) {
    iVar5 = 0x15;
  }
  else if (iVar5 == 0x5a) {
    iVar5 = 0x57;
  }
  else if (iVar5 == 0x1b) {
    iVar5 = 0x1c;
  }
  uVar3 = *(uint *)((longlong)&DAT_14c873434 +
                   (ulonglong)((uint)*(byte *)((longlong)puVar1 + 0x33) * 0x30));
  uVar2 = (ulonglong)uVar3;
  uVar4 = (uint)*puVar1;
  if ((uVar4 >> 0x19 & 1) == 0) {
    if (((*puVar1 & 4) == 0) || ((uVar3 != 0x36 && (uVar3 != 0x29)))) goto LAB_1400d6b2f;
    *param_1 = iVar5;
LAB_1400d6b6d:
    bVar6 = false;
  }
  else {
    uVar2 = FUN_147365ff0(uVar2,(uVar4 & 0x10) >> 4);
LAB_1400d6b2f:
    *param_1 = iVar5;
    uVar3 = (uint)uVar2;
    if (uVar3 < 0x30) {
      if ((0x580000UL >> (uVar2 & 0x3f) & 1) == 0) {
        if ((0xb00000000000U >> (uVar2 & 0x3f) & 1) == 0) goto LAB_1400d6b5b;
        bVar6 = iVar5 == 0x2f;
      }
      else {
        bVar6 = iVar5 == 0x16;
      }
    }
    else {
LAB_1400d6b5b:
      if (uVar3 == 0x67) {
        bVar6 = iVar5 == 0x31;
      }
      else {
        if (uVar3 != 0x68) goto LAB_1400d6b6d;
        bVar6 = iVar5 == 0x23;
      }
    }
  }
  uVar3 = (byte)param_3[3] & 7;
  if (uVar3 == 1) {
    if ((4 < *(byte *)((longlong)puVar1 + 0x32)) ||
       ((0x1aU >> (*(byte *)((longlong)puVar1 + 0x32) & 0x1f) & 1) == 0)) {
      param_1[1] = 4;
      param_1[2] = (uint)(byte)param_3[4];
      param_1[3] = (uint)bVar6;
      return;
    }
  }
  else {
    if (uVar3 - 3 < 2) {
      param_1[1] = 5;
      param_1[3] = (uint)*param_3 * 6;
      uVar3 = (uint)param_3[1] * 6;
      goto LAB_1400d6ba2;
    }
    if (uVar3 != 2) {
      if (uVar3 != 5) {
        return;
      }
      param_1[1] = 8;
      param_1[3] = 0;
      uVar3 = (uint)(*(ushort *)((longlong)puVar1 + 0x2c) >> ((byte)param_3[4] & 0x1f));
      param_1[4] = uVar3 + (uVar3 == 0);
      param_1[2] = (uint)(byte)param_3[4];
      return;
    }
  }
  param_1[1] = 5;
  param_1[3] = (uint)*param_3;
  uVar3 = (uint)param_3[1];
LAB_1400d6ba2:
  param_1[4] = uVar3;
  param_1[2] = (uint)(byte)param_3[4];
  param_1[5] = (uint)bVar6;
  return;
}



// FUNCTION 1400d6c40 FUN_1400d6c40 body=83 status=ok
// SIG undefined FUN_1400d6c40(void)

ulonglong FUN_1400d6c40(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  cVar2 = FUN_1400d6c94(param_1 + -8);
  if (cVar2 == '\0') {
    uVar4 = 0;
  }
  else {
    plVar3 = (longlong *)FUN_1400d6e82(param_1 + -0x38);
    lVar1 = *plVar3;
    AcquireSRWLockShared((PSRWLOCK)(lVar1 + 0x88));
    uVar4 = CONCAT71((int7)((ulonglong)lVar1 >> 8),*(int *)(lVar1 + 0x20) != 0);
    ReleaseSRWLockShared((PSRWLOCK)(lVar1 + 0x88));
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 1400d6c94 FUN_1400d6c94 body=81 status=ok
// SIG undefined FUN_1400d6c94(void)

bool FUN_1400d6c94(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    plVar2 = (longlong *)(param_1 + -0x30);
    lVar1 = FUN_1400d6ef8(plVar2);
    if (((lVar1 != 0) && (lVar1 = (**(code **)(*plVar2 + 0x180))(plVar2), lVar1 != 0)) &&
       (*(longlong *)(lVar1 + 0x1f0) != 0)) {
      lVar1 = FUN_1400d6ce6();
      return lVar1 != 0;
    }
  }
  return false;
}



// FUNCTION 1400d6ce6 FUN_1400d6ce6 body=105 status=ok
// SIG undefined FUN_1400d6ce6(void)

void FUN_1400d6ce6(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_1400d6d9c();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_1400d6d50(param_1 + 0x100,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400d6d50 FUN_1400d6d50 body=76 status=ok
// SIG undefined FUN_1400d6d50(void)

void FUN_1400d6d50(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_1400d6d9c();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_1400d6d8d;
    }
  }
  lVar2 = 0;
LAB_1400d6d8d:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 1400d6d9c FUN_1400d6d9c body=228 status=ok
// SIG undefined FUN_1400d6d9c(void)

longlong FUN_1400d6d9c(void)

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
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbaf3f0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_1417ad04a;
    local_28 = &LAB_1459f369e;
    local_38 = &LAB_148c45f99;
    local_40 = &LAB_145a99079;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x1a8;
    FUN_14081cfa3(L"/Script/OakGame",L"OakThumbnailManager",&DAT_14cbaf3f0,&DAT_148c45f98);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbaf3f0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400d6e82 FUN_1400d6e82 body=116 status=ok
// SIG undefined FUN_1400d6e82(void)

longlong FUN_1400d6e82(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1449027d0(param_1,&local_28);
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
    return local_28 + 0x4c0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400d6ef8 FUN_1400d6ef8 body=323 status=ok
// SIG undefined FUN_1400d6ef8(void)

undefined8 FUN_1400d6ef8(longlong param_1)

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
  lVar1 = FUN_1400d7050(param_1 + 0x30);
  if (lVar1 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1459f2e4c;
      local_48 = &LAB_148c39de3;
      local_50 = &LAB_1457a9eb2;
      local_58 = &DAT_149e063b2;
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
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



// FUNCTION 1400d7050 FUN_1400d7050 body=282 status=ok
// SIG undefined FUN_1400d7050(void)

longlong FUN_1400d7050(longlong param_1)

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
  lVar1 = *(longlong *)(param_1 + -0x10);
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
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) goto LAB_1400d70a3;
  }
  lVar1 = 0;
LAB_1400d70a3:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400d716c FUN_1400d716c body=1928 status=ok
// SIG undefined FUN_1400d716c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_1400d716c(longlong param_1,double *param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined4 uVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  double *pdVar18;
  double *pdVar19;
  ulonglong uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar25;
  double dVar26;
  undefined1 auVar24 [16];
  double dVar27;
  undefined1 auVar28 [16];
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar32;
  double dVar33;
  double dVar34;
  undefined1 auStack_2e8 [32];
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  undefined4 local_298;
  undefined4 uStack_294;
  double dStack_290;
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  undefined8 uStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  undefined8 uStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  undefined8 uStack_1b0;
  undefined1 local_1a8 [16];
  double local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 uStack_170;
  double local_168;
  double dStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  double local_148;
  double local_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  double local_108;
  double local_100;
  double local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  if (*(char *)(param_1 + 0xc5d) == '\0') {
    uVar14 = FUN_1447f067c(param_3,&local_2c8,1,0);
    param_2[6] = 0.0;
    param_2[7] = 0.0;
    param_2[4] = 0.0;
    param_2[5] = 0.0;
    auVar30 = _DAT_149934d80;
    dVar2 = local_288._0_8_;
    dVar6 = local_288._8_8_;
    dVar3 = local_278._0_8_;
    auVar22 = *(undefined1 (*) [16])(param_1 + 0xd30);
    dVar4 = auVar22._0_8_;
    dVar7 = auVar22._8_8_;
    auVar1 = *(undefined1 (*) [16])(param_1 + 0xd40);
    dVar5 = auVar1._0_8_;
    auVar22 = minpd(auVar22,local_288);
    auVar28 = minpd(auVar1,local_278);
    auVar23._8_8_ = -(ulonglong)(auVar22._8_8_ < 0.0);
    auVar23._0_8_ = -(ulonglong)(auVar22._0_8_ < 0.0);
    iVar15 = movmskpd(uVar14,auVar23);
    auVar22._8_8_ = -(ulonglong)(auVar28._8_8_ < 0.0);
    auVar22._0_8_ = -(ulonglong)(auVar28._0_8_ < 0.0);
    uVar16 = movmskpd((int)param_3,auVar22);
    if ((uVar16 & 0x3fffffff) == 0 && iVar15 == 0) {
      dVar11 = *(double *)(param_1 + 0xcf0);
      dVar12 = *(double *)(param_1 + 0xcf8);
      dVar13 = *(double *)(param_1 + 0xd00);
      dVar29 = *(double *)(param_1 + 0xd08);
      dVar32 = *(double *)(param_1 + 0xd10) * dVar2;
      dVar34 = *(double *)(param_1 + 0xd18) * dVar6;
      dVar25 = *(double *)(param_1 + 0xd20) * dVar3;
      dVar9 = *(double *)(param_1 + 0xd28) * local_278._8_8_;
      dVar27 = dVar34 * local_2c8 - dStack_2c0 * dVar32;
      dVar26 = dVar25 * dStack_2c0 - local_2b8 * dVar34;
      dVar33 = dVar32 * local_2b8 - local_2c8 * dVar25;
      dVar10 = dVar9 * dStack_2b0 - dStack_2b0 * dVar9;
      dVar26 = dVar26 + dVar26;
      dVar33 = dVar33 + dVar33;
      dVar27 = dVar27 + dVar27;
      dVar10 = dVar10 + dVar10;
      dStack_2a0 = (dVar26 * local_2b8 - dVar27 * local_2c8) + dStack_2b0 * dVar33 + dVar34 +
                   dStack_2a0;
      *param_2 = dVar12 * local_2b8 * -1.0 +
                 dVar13 * dStack_2c0 + dVar29 * local_2c8 * 1.0 + dVar11 * dStack_2b0;
      param_2[1] = dVar11 * local_2b8 * 1.0 +
                   dVar29 * dStack_2c0 + dVar13 * local_2c8 * -1.0 + dVar12 * dStack_2b0;
      param_2[2] = dVar29 * local_2b8 * 1.0 +
                   ((local_2c8 * dVar12 * 1.0 + dVar13 * dStack_2b0) - dVar11 * dStack_2c0);
      param_2[3] = dVar13 * local_2b8 * -1.0 +
                   ((local_2c8 * dVar11 * -1.0 + dVar29 * dStack_2b0) - dVar12 * dStack_2c0);
      auVar30._8_4_ = SUB84(dStack_2a0,0);
      auVar30._0_8_ =
           (dVar27 * dStack_2c0 - local_2b8 * dVar33) + dStack_2b0 * dVar26 + dVar32 + local_2a8;
      auVar30._12_4_ = (int)((ulonglong)dStack_2a0 >> 0x20);
      *(undefined1 (*) [16])(param_2 + 4) = auVar30;
      param_2[6] = (dVar33 * local_2c8 - dStack_2c0 * dVar26) + dStack_2b0 * dVar27 + dVar25 +
                   (double)CONCAT44(uStack_294,local_298);
      param_2[7] = (dVar10 * dStack_2b0 - dVar10 * dStack_2b0) + dStack_2b0 * dVar10 + dVar9 +
                   dStack_290;
    }
    else {
      dVar25 = dStack_2c0 + dStack_2c0;
      dVar27 = local_2b8 + local_2b8;
      dVar33 = local_2c8 * (local_2c8 + local_2c8);
      local_178 = (1.0 - (dVar33 + dStack_2c0 * dVar25)) * dVar3;
      dVar26 = (local_2c8 + local_2c8) * dStack_2b0;
      local_188 = (dVar25 * dStack_2b0 + local_2c8 * dVar27) * dVar3;
      dStack_180 = (dVar27 * dStack_2c0 - dVar26) * dVar3;
      local_1c8 = ((double)DAT_149934d80 - (local_2b8 * dVar27 + dStack_2c0 * dVar25)) * dVar2;
      dVar33 = (DAT_149934d80._8_8_ - (local_2b8 * dVar27 + dVar33)) * dVar6;
      dStack_1c0 = (dVar25 * local_2c8 + dVar27 * dStack_2b0) * dVar2;
      local_198 = (dVar27 * dStack_2c0 + dVar26) * dVar6;
      local_1b8 = (local_2c8 * dVar27 - dVar25 * dStack_2b0) * dVar2;
      uStack_1b0 = 0;
      local_1a8._8_4_ = SUB84(dVar33,0);
      local_1a8._0_8_ = (dVar25 * local_2c8 - dVar27 * dStack_2b0) * dVar6;
      local_1a8._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
      uStack_190 = 0;
      uStack_170 = 0;
      local_168 = local_2a8;
      dStack_160 = dStack_2a0;
      local_158 = local_298;
      uStack_154 = uStack_294;
      uStack_150 = 0;
      uStack_14c = 0x3ff00000;
      dVar11 = *(double *)(param_1 + 0xcf0);
      dVar12 = *(double *)(param_1 + 0xcf8);
      dVar13 = *(double *)(param_1 + 0xd00);
      dVar29 = dVar12 + dVar12;
      dVar26 = dVar13 + dVar13;
      dVar9 = dVar11 * (dVar11 + dVar11);
      local_1f8 = (1.0 - (dVar9 + dVar12 * dVar29)) * dVar5;
      dVar10 = *(double *)(param_1 + 0xcf0) * dVar26;
      dVar27 = *(double *)(param_1 + 0xd08);
      dVar33 = dVar26 * dVar27;
      dVar25 = (dVar11 + dVar11) * *(double *)(param_1 + 0xd08);
      dVar27 = dVar29 * dVar27;
      local_208 = (dVar27 + dVar10) * dVar5;
      local_228 = (dVar29 * dVar11 - dVar33) * dVar7;
      dStack_200 = (dVar26 * dVar12 - dVar25) * dVar5;
      local_248 = ((double)DAT_149934d80 - (dVar13 * dVar26 + dVar12 * dVar29)) * dVar4;
      dStack_220 = (DAT_149934d80._8_8_ - (dVar13 * dVar26 + dVar9)) * dVar7;
      dStack_240 = (dVar29 * dVar11 + dVar33) * dVar4;
      local_218 = (dVar26 * dVar12 + dVar25) * dVar7;
      local_238 = (dVar10 - dVar27) * dVar4;
      uStack_230 = 0;
      uStack_210 = 0;
      uStack_1f0 = 0;
      local_1e8 = *(undefined8 *)(param_1 + 0xd10);
      uStack_1e0 = *(undefined8 *)(param_1 + 0xd18);
      local_1d8 = *(undefined8 *)(param_1 + 0xd20);
      uStack_1d0 = 0x3ff0000000000000;
      FUN_1447fea8d(&local_148);
      FUN_144a1c686(&local_148,0x3e45798ee0000000);
      auVar28._8_8_ = -(ulonglong)(0.0 <= dVar6 * dVar7);
      auVar28._0_8_ = -(ulonglong)(0.0 <= dVar2 * dVar4);
      auVar22 = blendvpd(_DAT_149936790,auVar30,auVar28);
      uVar20 = -(ulonglong)(0.0 <= dVar3 * dVar5);
      dVar27 = (double)(~uVar20 & 0xbff0000000000000 | uVar20 & 0x3ff0000000000000);
      dVar26 = auVar22._0_8_;
      local_138 = local_138 * dVar26;
      local_140 = local_140 * dVar26;
      local_148 = local_148 * dVar26;
      dVar26 = auVar22._8_8_;
      local_118 = local_118 * dVar26;
      local_120 = local_120 * dVar26;
      local_128 = dVar26 * local_128;
      local_f8 = local_f8 * dVar27;
      local_100 = local_100 * dVar27;
      local_108 = dVar27 * local_108;
      FUN_14481fd10(&local_268,&local_148);
      dVar27 = local_258 * local_258 + local_268 * local_268;
      dVar26 = dStack_250 * dStack_250 + dStack_260 * dStack_260;
      auVar24._0_8_ = dVar27 + dVar26;
      auVar24._8_8_ = dVar27 + dVar26;
      auVar21._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar24._8_8_);
      auVar21._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar24._0_8_);
      auVar22 = sqrtpd(auVar24,auVar24);
      auVar30 = divpd(auVar30,auVar22);
      auVar31._0_8_ = auVar30._0_8_ * local_258;
      auVar31._8_8_ = auVar30._8_8_ * dStack_250;
      auVar22 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar31,auVar21);
      *param_2 = (double)((ulonglong)(local_268 * auVar30._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar24._0_8_));
      param_2[1] = (double)((ulonglong)(dStack_260 * auVar30._8_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar24._8_8_));
      *(undefined1 (*) [16])(param_2 + 2) = auVar22;
      param_2[4] = local_e8;
      param_2[5] = dStack_e0;
      param_2[6] = local_d8;
      param_2[7] = 0.0;
    }
    dVar27 = auVar1._8_8_ * local_278._8_8_;
    auVar8._8_4_ = SUB84(dVar7 * dVar6,0);
    auVar8._0_8_ = dVar4 * dVar2;
    auVar8._12_4_ = (int)((ulonglong)(dVar7 * dVar6) >> 0x20);
    *(undefined1 (*) [16])(param_2 + 8) = auVar8;
    auVar1._8_4_ = SUB84(dVar27,0);
    auVar1._0_8_ = dVar5 * dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
    *(undefined1 (*) [16])(param_2 + 10) = auVar1;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_c0 ^ (ulonglong)auStack_2e8);
  }
  pdVar18 = (double *)(param_1 + 0x240);
  pdVar19 = param_2;
  for (lVar17 = 0xc; lVar17 != 0; lVar17 = lVar17 + -1) {
    *pdVar19 = *pdVar18;
    pdVar18 = pdVar18 + 1;
    pdVar19 = pdVar19 + 1;
  }
  if ((local_c0 ^ (ulonglong)auStack_2e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1400d78f6 FUN_1400d78f6 body=260 status=ok
// SIG undefined FUN_1400d78f6(void)

void FUN_1400d78f6(undefined8 *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  double *pdVar5;
  double *pdVar6;
  undefined1 auStack_a8 [32];
  double local_88 [4];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = param_1[1];
  cVar1 = *(char *)param_1[2];
  pdVar5 = (double *)&DAT_14c846480;
  pdVar6 = local_88;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pdVar6 = *pdVar5;
    pdVar5 = pdVar5 + 1;
    pdVar6 = pdVar6 + 1;
  }
  if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x138) != 0)) {
    lVar3 = *(longlong *)(*(longlong *)(lVar4 + 0x138) + 0x40);
    local_88[0] = (double)*(float *)(lVar3 + 0x40);
    local_88[1] = (double)*(float *)(lVar3 + 0x44);
    local_88[2] = (double)*(float *)(lVar3 + 0x48);
    local_88[3] = (double)*(float *)(lVar3 + 0x4c);
    local_68 = *(undefined8 *)(lVar3 + 0x20);
    uStack_60 = *(undefined8 *)(lVar3 + 0x28);
    local_58 = *(undefined8 *)(lVar3 + 0x30);
    uStack_50 = 0;
    local_48 = 0x3ff0000000000000;
    uStack_40 = 0x3ff0000000000000;
    local_38 = 0x3ff0000000000000;
    uStack_30 = 0;
    if ((cVar1 != '\0') &&
       (((plVar2 = *(longlong **)(lVar4 + 0x158), plVar2 != (longlong *)0x0 && ((int)plVar2[1] != 0)
         ) && (plVar2 = (longlong *)*plVar2, plVar2 != (longlong *)0x0)))) {
      (**(code **)(*plVar2 + 0x60))(plVar2,lVar4,local_88);
    }
  }
  pdVar5 = local_88;
  pdVar6 = (double *)*param_1;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *pdVar6 = *pdVar5;
    pdVar5 = pdVar5 + 1;
    pdVar6 = pdVar6 + 1;
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400d79fc FUN_1400d79fc body=3 status=ok
// SIG undefined FUN_1400d79fc(void)

undefined1 FUN_1400d79fc(void)

{
  return 1;
}



// FUNCTION 1400d7a00 FUN_1400d7a00 body=80 status=ok
// SIG undefined FUN_1400d7a00(void)

undefined1 * FUN_1400d7a00(void)

{
  undefined1 *lpTlsValue;
  
  lpTlsValue = TlsGetValue(DAT_14c84500c);
  if (lpTlsValue == (undefined1 *)0x0) {
    lpTlsValue = (undefined1 *)FUN_14001cc68(0xc,0x10);
    *lpTlsValue = 5;
    *(undefined8 *)(lpTlsValue + 4) = 0;
    TlsSetValue(DAT_14c84500c,lpTlsValue);
  }
  return lpTlsValue;
}



// FUNCTION 1400d7a50 FUN_1400d7a50 body=40 status=ok
// SIG undefined FUN_1400d7a50(void)

undefined8 FUN_1400d7a50(undefined8 param_1,int param_2)

{
  FUN_1400d7a78();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1400d7a78 FUN_1400d7a78 body=325 status=ok
// SIG undefined FUN_1400d7a78(void)

void FUN_1400d7a78(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14aa0eeb0;
  FUN_1400d7bea(param_1[0x60],*(undefined4 *)(param_1 + 0x61));
  if (param_1[0x60] != 0) {
    FUN_1400020a8();
  }
  lVar1 = param_1[0x5f];
  if (lVar1 != 0) {
    FUN_1402ef326(lVar1);
    FUN_1400020a8(lVar1);
  }
  FUN_144760d56(param_1 + 0x29);
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  FUN_1400d7bbd(param_1[0x25],*(undefined4 *)(param_1 + 0x26));
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  FUN_14018429c(param_1[0x1f],*(undefined4 *)(param_1 + 0x20));
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  FUN_1400d7c38(param_1 + 0x1b);
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  FUN_1400d7d10(param_1 + 7);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1400d7bbd FUN_1400d7bbd body=45 status=ok
// SIG undefined FUN_1400d7bbd(void)

void FUN_1400d7bbd(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 1400d7bea FUN_1400d7bea body=77 status=ok
// SIG undefined FUN_1400d7bea(void)

void FUN_1400d7bea(longlong param_1,int param_2)

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



// FUNCTION 1400d7c38 FUN_1400d7c38 body=119 status=ok
// SIG undefined FUN_1400d7c38(void)

void FUN_1400d7c38(longlong *param_1)

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
      lVar2 = *(longlong *)(lVar1 + 8 + lVar4);
      if (lVar2 != 0) {
        FUN_1400ea36e(lVar2,lVar2);
        FUN_1400020a8(lVar2);
      }
      lVar4 = lVar4 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar4);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1400d7cb0(param_1,0);
    return;
  }
  return;
}



// FUNCTION 1400d7cb0 FUN_1400d7cb0 body=96 status=ok
// SIG undefined FUN_1400d7cb0(void)

void FUN_1400d7cb0(longlong param_1,int param_2)

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



// FUNCTION 1400d7d10 FUN_1400d7d10 body=223 status=ok
// SIG undefined FUN_1400d7d10(void)

void FUN_1400d7d10(longlong *param_1)

{
  FUN_1400d7df3(param_1[0xc],(int)param_1[0xd]);
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_1400d7e46(param_1[10],(int)param_1[0xb]);
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_1400d7def(param_1[8],(int)param_1[9]);
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_1400d7e1b(param_1[6],(int)param_1[7]);
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_1400d7df0(param_1[4],(int)param_1[5]);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_1400d7df1(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_1400d7df2(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1400d7def FUN_1400d7def body=1 status=ok
// SIG undefined FUN_1400d7def(void)

void FUN_1400d7def(void)

{
  return;
}



// FUNCTION 1400d7df0 FUN_1400d7df0 body=1 status=ok
// SIG undefined FUN_1400d7df0(void)

void FUN_1400d7df0(void)

{
  return;
}



// FUNCTION 1400d7df1 FUN_1400d7df1 body=1 status=ok
// SIG undefined FUN_1400d7df1(void)

void FUN_1400d7df1(void)

{
  return;
}



// FUNCTION 1400d7df2 FUN_1400d7df2 body=1 status=ok
// SIG undefined FUN_1400d7df2(void)

void FUN_1400d7df2(void)

{
  return;
}



// FUNCTION 1400d7df3 FUN_1400d7df3 body=40 status=ok
// SIG undefined FUN_1400d7df3(void)

void FUN_1400d7df3(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1474b868e(param_1);
    param_1 = param_1 + 0x38;
  }
  return;
}



// FUNCTION 1400d7e1b FUN_1400d7e1b body=43 status=ok
// SIG undefined FUN_1400d7e1b(void)

void FUN_1400d7e1b(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1400d7e72(param_1);
    param_1 = param_1 + 0x100;
  }
  return;
}



// FUNCTION 1400d7e46 FUN_1400d7e46 body=43 status=ok
// SIG undefined FUN_1400d7e46(void)

void FUN_1400d7e46(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1474b86e2(param_1);
    param_1 = param_1 + 0xa0;
  }
  return;
}



// FUNCTION 1400d7e72 FUN_1400d7e72 body=93 status=ok
// SIG undefined FUN_1400d7e72(void)

void FUN_1400d7e72(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14aa0f410;
  puVar2 = (undefined8 *)param_1[0x1e];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)puVar2 + 0xc) == 0)) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1400d7ed0 FUN_1400d7ed0 body=123 status=ok
// SIG undefined FUN_1400d7ed0(void)

longlong * FUN_1400d7ed0(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((longlong)*(int *)(param_1 + 0x58) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x50);
    lVar5 = 0;
    do {
      lVar1 = *(longlong *)(lVar4 + lVar5);
      if (*(longlong *)(lVar1 + 0x18) == param_3) {
        *param_2 = lVar1;
        lVar4 = *(longlong *)(lVar4 + 8 + lVar5);
        goto LAB_1400d7f01;
      }
      lVar5 = lVar5 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x58) * 0x10 != lVar5);
  }
  cVar3 = FUN_144b2acba(param_3);
  if ((cVar3 == '\0') && (0 < *(int *)(param_1 + 0x58))) {
    plVar2 = *(longlong **)(param_1 + 0x50);
    *param_2 = *plVar2;
    lVar4 = plVar2[1];
LAB_1400d7f01:
    param_2[1] = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
  }
  return param_2;
}



// FUNCTION 1400d7f4c FUN_1400d7f4c body=12 status=ok
// SIG undefined FUN_1400d7f4c(void)

void FUN_1400d7f4c(longlong param_1)

{
  FUN_1400d7f58(param_1 + 0x120);
  return;
}



// FUNCTION 1400d7f58 FUN_1400d7f58 body=112 status=ok
// SIG undefined FUN_1400d7f58(void)

undefined4 FUN_1400d7f58(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_78 [32];
  longlong local_58 [6];
  char local_24;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1400d80c8(param_1,local_58,param_2);
  uVar1 = FUN_1400d7fca(param_1,local_58);
  if (local_24 == '\x01') {
    local_24 = '\0';
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400d7fca FUN_1400d7fca body=64 status=ok
// SIG undefined FUN_1400d7fca(void)

undefined4 FUN_1400d7fca(longlong *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_1447f11e6(param_1 + 2);
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1446f48e2(param_1,iVar1);
  }
  *(undefined4 *)(*param_1 + (longlong)iVar1 * 4) = uVar2;
  return uVar2;
}



// FUNCTION 1400d800a FUN_1400d800a body=122 status=ok
// SIG undefined FUN_1400d800a(void)

byte FUN_1400d800a(float *param_1,float *param_2)

{
  if (((*(byte *)(param_2 + 8) ^ *(byte *)(param_1 + 8)) & 7) == 0) {
    if ((*param_1 == *param_2) && (!NAN(*param_1) && !NAN(*param_2))) {
      if ((param_1[1] == param_2[1]) && (!NAN(param_1[1]) && !NAN(param_2[1]))) {
        if ((param_1[2] == param_2[2]) && (!NAN(param_1[2]) && !NAN(param_2[2]))) {
          if ((param_1[3] == param_2[3]) && (!NAN(param_1[3]) && !NAN(param_2[3]))) {
            if ((param_1[4] == param_2[4]) && (!NAN(param_1[4]) && !NAN(param_2[4]))) {
              if ((param_1[5] == param_2[5]) && (!NAN(param_1[5]) && !NAN(param_2[5]))) {
                if ((param_1[6] == param_2[6]) && (!NAN(param_1[6]) && !NAN(param_2[6]))) {
                  return -(param_2[7] == param_1[7]) & 1;
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1400d8084 FUN_1400d8084 body=68 status=ok
// SIG undefined FUN_1400d8084(void)

char FUN_1400d8084(longlong param_1,longlong param_2,int param_3)

{
  char cVar1;
  
  cVar1 = '\x01';
  while( true ) {
    if (param_3 == 0) {
      return cVar1;
    }
    param_3 = param_3 + -1;
    cVar1 = FUN_1400d800a(param_1,param_2);
    if (cVar1 == '\0') break;
    param_1 = param_1 + 0x24;
    param_2 = param_2 + 0x24;
  }
  return '\0';
}



// FUNCTION 1400d80c8 FUN_1400d80c8 body=600 status=ok
// SIG undefined FUN_1400d80c8(void)

longlong * FUN_1400d80c8(longlong *param_1,longlong *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined4 uVar13;
  undefined1 in_XMM1 [16];
  undefined1 auVar14 [16];
  undefined4 uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  undefined4 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar22 [16];
  
  bVar3 = *(byte *)(param_3 + 8);
  uVar10 = (ulonglong)*(uint *)(param_1 + 1);
  if ((bVar3 & 2) == 0) {
    do {
      if ((int)uVar10 < 1) goto LAB_1400d8259;
      lVar11 = uVar10 * 4;
      uVar10 = uVar10 - 1;
      lVar12 = (longlong)*(int *)(*param_1 + -4 + lVar11) * 0x40;
      lVar11 = param_1[2] + lVar12;
    } while ((*(byte *)(param_1[2] + 0x38 + lVar12) & 1) == 0);
  }
  else if ((int)*(uint *)(param_1 + 1) < 1) {
LAB_1400d8259:
    lVar11 = 0;
  }
  else {
    lVar11 = (longlong)*(int *)(*param_1 + -4 + uVar10 * 4) * 0x40 + param_1[2];
  }
  *(undefined1 *)((longlong)param_2 + 0x34) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(byte *)(param_2 + 7) = bVar3 >> 2 & 1;
  if (lVar11 == 0) {
    if ((bVar3 & 1) == 0) {
      *(undefined4 *)(param_2 + 1) = 1;
      FUN_1469530c0(param_2,0);
      puVar5 = (undefined8 *)*param_2;
      *(float *)(puVar5 + 4) = param_3[8];
      uVar7 = *(undefined8 *)param_3;
      uVar8 = *(undefined8 *)(param_3 + 2);
      uVar9 = *(undefined8 *)(param_3 + 6);
      puVar5[2] = *(undefined8 *)(param_3 + 4);
      puVar5[3] = uVar9;
      *puVar5 = uVar7;
      puVar5[1] = uVar8;
      return param_2;
    }
    if ((float *)(param_2 + 2) == param_3) {
      return param_2;
    }
    *(float *)(param_2 + 6) = param_3[8];
    uVar7 = *(undefined8 *)param_3;
    lVar11 = *(longlong *)(param_3 + 2);
    lVar12 = *(longlong *)(param_3 + 6);
    param_2[4] = *(longlong *)(param_3 + 4);
    param_2[5] = lVar12;
    param_2[2] = uVar7;
    param_2[3] = lVar11;
LAB_1400d81f7:
    *(undefined1 *)((longlong)param_2 + 0x34) = 1;
  }
  else {
    if (*(char *)(lVar11 + 0x34) == '\0') {
      FUN_146948ffe(param_2,lVar11);
    }
    else {
      if ((bVar3 & 1) != 0) {
        fVar18 = *(float *)(lVar11 + 0x2c);
        if (param_3[7] <= *(float *)(lVar11 + 0x2c)) {
          fVar18 = param_3[7];
        }
        fVar6 = *(float *)(lVar11 + 0x14);
        if (*(float *)(lVar11 + 0x14) <= param_3[1]) {
          fVar6 = param_3[1];
        }
        if (fVar18 < fVar6) {
LAB_1400d8260:
          auVar14._0_12_ = ZEXT812(0x3f000000);
          auVar14._12_4_ = 0;
          auVar20 = roundps(in_XMM1,auVar14,1);
          uVar19 = auVar20._0_4_;
          uVar15 = uVar19;
          uVar13 = uVar19;
        }
        else {
          fVar1 = *(float *)(lVar11 + 0x28);
          if (param_3[6] <= *(float *)(lVar11 + 0x28)) {
            fVar1 = param_3[6];
          }
          fVar2 = *(float *)(lVar11 + 0x10);
          if (*(float *)(lVar11 + 0x10) <= *param_3) {
            fVar2 = *param_3;
          }
          in_XMM1 = ZEXT416((uint)fVar2);
          if (fVar1 < fVar2) goto LAB_1400d8260;
          auVar16 = blendps(ZEXT416((uint)(fVar18 + 0.5)),ZEXT816(0),0xe);
          auVar22 = roundps(unaff_XMM6,auVar16,1);
          auVar20 = blendps(ZEXT416((uint)(fVar1 + 0.5)),ZEXT816(0),0xe);
          auVar21 = roundps(auVar20,auVar20,1);
          auVar20 = blendps(ZEXT416((uint)(fVar6 + 0.5)),ZEXT816(0),0xe);
          auVar20 = roundps(auVar20,auVar20,1);
          auVar14 = blendps(ZEXT416((uint)(fVar2 + 0.5)),ZEXT816(0),0xe);
          auVar17 = roundps(auVar16,auVar14,1);
          fVar18 = auVar21._0_4_;
          auVar16 = auVar17;
          if (fVar18 <= auVar17._0_4_) {
            auVar16._4_12_ = auVar17._4_12_;
            auVar16._0_4_ = fVar18;
          }
          if (auVar17._0_4_ <= fVar18) {
            auVar17._0_4_ = fVar18;
          }
          fVar18 = auVar22._0_4_;
          auVar21 = auVar20;
          if (fVar18 <= auVar20._0_4_) {
            auVar21._4_12_ = auVar20._4_12_;
            auVar21._0_4_ = fVar18;
          }
          uVar19 = auVar21._0_4_;
          uVar15 = auVar17._0_4_;
          uVar13 = auVar16._0_4_;
          if (auVar20._0_4_ <= fVar18) {
            auVar20._0_4_ = fVar18;
          }
        }
        *(undefined4 *)(param_2 + 2) = uVar13;
        *(undefined4 *)((longlong)param_2 + 0x14) = uVar19;
        *(undefined4 *)(param_2 + 3) = uVar15;
        *(undefined4 *)((longlong)param_2 + 0x1c) = uVar19;
        *(undefined4 *)(param_2 + 4) = uVar13;
        *(int *)((longlong)param_2 + 0x24) = auVar20._0_4_;
        *(undefined4 *)(param_2 + 5) = uVar15;
        *(int *)((longlong)param_2 + 0x2c) = auVar20._0_4_;
        *(undefined1 *)(param_2 + 6) = 3;
        goto LAB_1400d81f7;
      }
      *(undefined4 *)(param_2 + 1) = 1;
      FUN_1469530c0(param_2,0);
      puVar5 = (undefined8 *)*param_2;
      *(undefined4 *)(puVar5 + 4) = *(undefined4 *)(lVar11 + 0x30);
      uVar7 = *(undefined8 *)(lVar11 + 0x10);
      uVar8 = *(undefined8 *)(lVar11 + 0x18);
      uVar9 = *(undefined8 *)(lVar11 + 0x28);
      puVar5[2] = *(undefined8 *)(lVar11 + 0x20);
      puVar5[3] = uVar9;
      *puVar5 = uVar7;
      puVar5[1] = uVar8;
    }
    iVar4 = (int)param_2[1];
    lVar11 = (longlong)iVar4;
    *(uint *)(param_2 + 1) = iVar4 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
      FUN_1469530c0(param_2,iVar4);
    }
    lVar12 = *param_2;
    *(float *)(lVar12 + 0x20 + lVar11 * 0x24) = param_3[8];
    uVar7 = *(undefined8 *)param_3;
    uVar8 = *(undefined8 *)(param_3 + 2);
    uVar9 = *(undefined8 *)(param_3 + 6);
    puVar5 = (undefined8 *)(lVar12 + 0x10 + lVar11 * 0x24);
    *puVar5 = *(undefined8 *)(param_3 + 4);
    puVar5[1] = uVar9;
    puVar5 = (undefined8 *)(lVar12 + lVar11 * 0x24);
    *puVar5 = uVar7;
    puVar5[1] = uVar8;
  }
  return param_2;
}



// FUNCTION 1400d8320 FUN_1400d8320 body=255 status=ok
// SIG undefined FUN_1400d8320(void)

void FUN_1400d8320(longlong param_1,int param_2)

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
    uVar4 = uVar3 * 0x40;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x3ffffffffffffff) * 4]];
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
    if ((int)uVar1 <= (int)(uVar4 >> 6)) {
      uVar3 = uVar4 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x40,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1400d8420 FUN_1400d8420 body=381 status=ok
// SIG undefined FUN_1400d8420(void)

ulonglong FUN_1400d8420(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  
  uVar5 = FUN_1447b4afa();
  uVar6 = (ulonglong)uVar5;
  iVar1 = *(int *)(param_1 + 0x3c0);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x3b8);
    lVar8 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar8);
      if (lVar3 != 0) {
        if ((((*(longlong **)(lVar3 + 0x180) != (longlong *)0x0) && (*(int *)(lVar3 + 0x17c) != 0))
            && (uVar5 = *(uint *)(lVar3 + 0x178), -1 < (int)uVar5)) && ((int)uVar5 < DAT_14c9647dc))
        {
          lVar7 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
          if (((lVar7 != 0) && (*(int *)(lVar7 + 0x10) == *(int *)(lVar3 + 0x17c))) &&
             ((*(uint *)(lVar7 + 8) & 0x10200000) == 0)) {
            lVar7 = (**(code **)(**(longlong **)(lVar3 + 0x180) + 0x18))();
            if ((lVar7 != 0) && ((*(byte *)(lVar7 + 99) & 8) == 0)) goto LAB_1400d850b;
          }
        }
        if (((*(uint *)(lVar3 + 8) >> 0x1e & 1) == 0) && (DAT_14cad4be8 == '\0')) {
          bVar4 = FUN_14009cd08(param_2,lVar3,param_3,*param_4);
        }
        else {
          bVar4 = 0;
        }
        uVar6 = CONCAT71((int7)(uVar6 >> 8),(byte)uVar6 | bVar4);
      }
LAB_1400d850b:
      lVar8 = lVar8 + 8;
    } while ((longlong)iVar1 * 8 != lVar8);
  }
  iVar1 = *(int *)(param_1 + 0x3b0);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x3a8);
    lVar8 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar8);
      if ((lVar3 != 0) &&
         ((*(longlong *)(lVar3 + 0x48) == 0 ||
          ((*(byte *)(*(longlong *)(lVar3 + 0x48) + 99) & 8) != 0)))) {
        if (((*(uint *)(lVar3 + 8) >> 0x1e & 1) == 0) && (DAT_14cad4be8 == '\0')) {
          bVar4 = FUN_14009cd08(param_2,lVar3,param_3,*param_4);
        }
        else {
          bVar4 = 0;
        }
        uVar6 = CONCAT71((int7)(uVar6 >> 8),(byte)uVar6 | bVar4);
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)iVar1 * 8 != lVar8);
  }
  return uVar6 & 0xffffffffffffff01;
}



// FUNCTION 1400d859d FUN_1400d859d body=876 status=ok
// SIG undefined FUN_1400d859d(void)

void FUN_1400d859d(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
                  float param_5,longlong param_6,undefined2 param_7,undefined4 *param_8,
                  undefined8 param_9)

{
  int *piVar1;
  double dVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_238 [32];
  double *local_218;
  undefined ***local_210;
  double local_200;
  double local_1f8;
  double local_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  undefined **local_1b8;
  double local_1b0;
  double dStack_1a8;
  double local_1a0;
  double local_198;
  double dStack_190;
  undefined8 local_188;
  double local_180;
  double local_178;
  double local_170;
  undefined2 local_168;
  byte local_166;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  longlong local_148;
  undefined4 *local_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  longlong local_128;
  undefined8 local_120;
  undefined8 local_118 [13];
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_238;
  dVar2 = *(double *)(param_1 + 0x10);
  dStack_190 = dVar2 + *(double *)(param_1 + 0x30);
  local_198 = dVar2 + *(double *)(param_1 + 0x28);
  local_1a0 = dVar2 + *(double *)(param_1 + 0x20);
  dStack_1a8 = *(double *)(param_1 + 0x30) - dVar2;
  local_1b0 = *(double *)(param_1 + 0x28) - dVar2;
  local_1b8 = (undefined **)(*(double *)(param_1 + 0x20) - dVar2);
  FUN_1400fd046(&local_1b8,&local_b0);
  local_1b8 = &PTR_FUN_149f74ea0;
  local_1a0 = (double)DAT_14c8464f0;
  local_1b0 = (double)DAT_14c8464e0;
  dStack_1a8 = (double)DAT_14c8464e8;
  local_198 = (double)*param_4;
  dStack_190 = (double)param_4[1];
  local_188 = param_4[2];
  dVar2 = *(double *)(param_1 + 0x10);
  local_170 = ((dVar2 + *(double *)(param_1 + 0x30)) - (*(double *)(param_1 + 0x30) - dVar2)) * 0.5;
  local_178 = ((dVar2 + *(double *)(param_1 + 0x28)) - (*(double *)(param_1 + 0x28) - dVar2)) * 0.5;
  local_180 = ((dVar2 + *(double *)(param_1 + 0x20)) - (*(double *)(param_1 + 0x20) - dVar2)) * 0.5;
  local_168 = param_7;
  local_150 = DAT_14c8464f0;
  local_160 = DAT_14c8464e0;
  uStack_158 = DAT_14c8464e8;
  local_148 = param_6;
  local_140 = param_8;
  local_138 = *param_8;
  local_134 = param_8[1];
  local_130 = param_8[2];
  local_12c = param_8[3];
  local_120 = param_9;
  puVar4 = local_118;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = *param_3;
    param_3 = param_3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_166 = *(byte *)(param_8 + 4) >> 4 & 1;
  *(int *)(param_6 + 0x80) = *(int *)(param_6 + 0x80) + 1;
  local_128 = param_1;
  if ((param_5 != 0.0) || (NAN(param_5))) {
    local_1c0 = (local_88 - local_a0) * 0.5;
    local_1c8 = (local_90 - local_a8) * 0.5;
    local_1d0 = (local_98 - local_b0) * 0.5;
    local_218 = &local_1d0;
    local_1d8 = param_4[2];
    local_1e8 = *(undefined4 *)param_4;
    uStack_1e4 = *(undefined4 *)((longlong)param_4 + 4);
    uStack_1e0 = *(undefined4 *)(param_4 + 1);
    uStack_1dc = *(undefined4 *)((longlong)param_4 + 0xc);
    local_1f0 = local_1c0 + local_a0;
    local_1f8 = local_1c8 + local_a8;
    local_200 = local_1d0 + local_b0;
    local_210 = &local_1b8;
    (**(code **)(*param_2 + 0x58))(param_2,&local_200,&local_1e8,(double)param_5);
  }
  else {
    (**(code **)(*param_2 + 0x60))(param_2,&local_b0,&local_1b8);
  }
  piVar1 = (int *)(param_6 + 0x80);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14480df5d(param_6 + 0x88,param_6 + 8,*(undefined1 *)(param_6 + 0x84));
  }
  if ((local_80 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400d890a FUN_1400d890a body=3107 status=ok
// SIG undefined FUN_1400d890a(void)

undefined8 FUN_1400d890a(longlong param_1,double *param_2,undefined8 *param_3)

{
  double dVar1;
  undefined8 *puVar2;
  ushort uVar3;
  double dVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  int iVar11;
  char cVar12;
  char cVar13;
  undefined8 uVar14;
  longlong lVar15;
  longlong lVar16;
  double *pdVar17;
  double *pdVar18;
  double *pdVar19;
  int iVar20;
  longlong lVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  undefined1 auStack_388 [32];
  undefined8 local_368;
  undefined8 *puStack_360;
  double *local_358;
  undefined8 *local_350;
  undefined8 *local_348;
  int *local_340;
  double *local_338;
  undefined8 local_330;
  byte local_328;
  int local_320;
  uint local_31c;
  double *local_318;
  double *local_310;
  longlong local_308;
  longlong local_300;
  undefined8 local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  double local_2a0;
  double local_298 [12];
  double local_238;
  double dStack_230;
  double local_228;
  int local_214;
  double local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  double local_1d0 [2];
  double local_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined4 local_1a0;
  undefined2 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  float local_160;
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_388;
  dVar4 = *param_2;
  uVar14 = CONCAT71((int7)((DAT_14c707940 ^ (ulonglong)auStack_388) >> 8),1);
  if ((dVar4 != 0.0) && (*(int *)((longlong)dVar4 + 0x58) == *(int *)(param_2 + 2))) {
    iVar20 = *(int *)((longlong)dVar4 + 0x88);
    local_158._8_4_ = SUB84((double)*(float *)((longlong)dVar4 + 0x44),0);
    local_158._0_8_ = (double)*(float *)((longlong)dVar4 + 0x40);
    local_158._12_4_ = (int)((ulonglong)(double)*(float *)((longlong)dVar4 + 0x44) >> 0x20);
    local_148._8_4_ = SUB84((double)*(float *)((longlong)dVar4 + 0x4c),0);
    local_148._0_8_ = (double)*(float *)((longlong)dVar4 + 0x48);
    local_148._12_4_ = (int)((ulonglong)(double)*(float *)((longlong)dVar4 + 0x4c) >> 0x20);
    local_138 = *(undefined8 *)((longlong)dVar4 + 0x20);
    uStack_130 = *(undefined8 *)((longlong)dVar4 + 0x28);
    local_128 = *(undefined8 *)((longlong)dVar4 + 0x30);
    uStack_120 = 0;
    local_118 = 0x3ff0000000000000;
    uStack_110 = 0x3ff0000000000000;
    local_108 = 0x3ff0000000000000;
    uStack_100 = 0;
    lVar21 = *(longlong *)(param_1 + 0x90);
    if (lVar21 == 0) {
      dVar28 = *(double *)(param_1 + 0x38);
      dVar24 = *(double *)(param_1 + 0x40);
      dVar25 = *(double *)(param_1 + 0x48);
      dVar6 = -dVar25;
      dVar33 = -dVar24;
      dVar29 = 0.0;
      dVar1 = -dVar28;
    }
    else {
      dVar8 = *(double *)(param_1 + 0xa0);
      dVar9 = *(double *)(param_1 + 0xa8);
      dVar34 = *(double *)(param_1 + 0xb0);
      dVar29 = *(double *)(lVar21 + 0x20);
      dVar10 = *(double *)(lVar21 + 0x28);
      dVar1 = *(double *)(param_1 + 0xb8);
      dVar24 = *(double *)(param_1 + 0xb8);
      dVar25 = dVar10 * dVar8 - dVar9 * dVar29;
      dVar26 = *(double *)(lVar21 + 0x30) * dVar9 - dVar34 * dVar10;
      dVar27 = dVar29 * dVar34 - *(double *)(lVar21 + 0x30) * dVar8;
      dVar26 = dVar26 + dVar26;
      dVar27 = dVar27 + dVar27;
      dVar25 = dVar25 + dVar25;
      dVar28 = *(double *)(lVar21 + 0x50);
      dVar6 = *(double *)(lVar21 + 0x48) * dVar28 + *(double *)(lVar21 + 0x30);
      dVar31 = *(double *)(lVar21 + 0x40) * dVar28 + *(double *)(lVar21 + 0x28);
      dVar33 = dVar28 * *(double *)(lVar21 + 0x38) + dVar29;
      dVar30 = dVar31 * dVar8 - dVar9 * dVar33;
      dVar7 = dVar6 * dVar9 - dVar34 * dVar31;
      dVar32 = dVar33 * dVar34 - dVar6 * dVar8;
      dVar7 = dVar7 + dVar7;
      dVar32 = dVar32 + dVar32;
      dVar30 = dVar30 + dVar30;
      dVar28 = (dVar25 * dVar9 - dVar27 * dVar34) + dVar1 * dVar26 + dVar29 +
               *(double *)(param_1 + 0xc0);
      dVar29 = (dVar34 * dVar26 - dVar8 * dVar25) + dVar24 * dVar27 + dVar10 +
               *(double *)(param_1 + 200);
      dVar25 = dVar25 * dVar1 + *(double *)(lVar21 + 0x30) + (dVar27 * dVar8 - dVar26 * dVar9) +
               *(double *)(param_1 + 0xd0);
      dVar33 = (dVar30 * dVar9 - dVar32 * dVar34) + dVar1 * dVar7 + dVar33 +
               *(double *)(param_1 + 0xc0);
      dVar34 = (dVar34 * dVar7 - dVar8 * dVar30) + dVar24 * dVar32 + dVar31 +
               *(double *)(param_1 + 200);
      dVar31 = dVar30 * dVar1 + dVar6 + (dVar32 * dVar8 - dVar7 * dVar9) +
               *(double *)(param_1 + 0xd0);
      dVar1 = dVar28;
      if (dVar33 <= dVar28) {
        dVar1 = dVar33;
      }
      if (dVar28 <= dVar33) {
        dVar28 = dVar33;
      }
      dVar33 = dVar29;
      if (dVar34 <= dVar29) {
        dVar33 = dVar34;
      }
      dVar6 = dVar25;
      if (dVar31 <= dVar25) {
        dVar6 = dVar31;
      }
      dVar24 = dVar29;
      if (dVar29 <= dVar34) {
        dVar24 = dVar34;
      }
      if (dVar25 <= dVar31) {
        dVar25 = dVar31;
      }
      dVar31 = *(double *)(lVar21 + 0x10);
      dVar25 = dVar25 + dVar31;
      dVar24 = dVar24 + dVar31;
      dVar28 = dVar28 + dVar31;
      dVar6 = dVar6 - dVar31;
      dVar33 = dVar33 - dVar31;
      dVar1 = dVar1 - dVar31;
    }
    uVar14 = CONCAT71((int7)((ulonglong)lVar21 >> 8),1);
    if (0 < iVar20) {
      local_300 = (longlong)dVar4 + 0x78;
      dVar25 = (dVar25 - dVar6) * 0.5;
      local_2e8 = (dVar24 - dVar33) * 0.5;
      local_2f8 = (dVar28 - dVar1) * 0.5;
      dVar6 = dVar6 + dVar25;
      dVar33 = dVar33 + local_2e8;
      dVar1 = dVar1 + local_2f8;
      local_308 = param_1 + 0x80;
      local_318 = (double *)(param_1 + 0xa0);
      local_310 = (double *)(param_1 + 0x58);
      lVar21 = 0;
      local_320 = iVar20;
      dStack_2f0 = dVar29;
      dStack_2e0 = dVar29;
      do {
        lVar16 = *(longlong *)((longlong)dVar4 + 0x80);
        if (*(longlong *)((longlong)dVar4 + 0x80) == 0) {
          lVar16 = local_300;
        }
        lVar5 = *(longlong *)(lVar16 + lVar21 * 8);
        uVar14 = *(undefined8 *)(lVar5 + 0x10);
        if (iVar20 < 2) {
LAB_1400d8ec8:
          cVar12 = '\x02';
          if (((*(byte *)(*(longlong *)(param_1 + 0x78) + 0x10) & 4) == 0) ||
             (cVar12 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x20))
                                 (*(longlong **)(param_1 + 0x98),local_308,lVar5,dVar4),
             cVar12 != '\0')) {
            iVar11 = local_320;
            local_1c0 = (double)CONCAT44(local_1c0._4_4_,0xffffffff);
            local_1a8 = 0.0;
            local_1b8 = 0.0;
            dStack_1b0 = 0.0;
            local_1a0 = 0xffffffff;
            local_198 = 0;
            local_1d0[1] = *(double *)(lVar16 + lVar21 * 8);
            local_1d8 = 0;
            local_1e8 = 0;
            uStack_1e0 = 0;
            local_1f8 = 0;
            local_208 = 0;
            uStack_200 = 0;
            local_210 = 0.0;
            local_214 = -1;
            local_228 = DAT_14c8464f0;
            local_238 = DAT_14c8464e0;
            dStack_230 = DAT_14c8464e8;
            uVar3 = *(ushort *)(param_1 + 0x50);
            puVar2 = (undefined8 *)param_3[4];
            local_31c = (uint)uVar3;
            local_1d0[0] = dVar4;
            if (((double)puVar2 <= 0.0) || (*(longlong *)(param_1 + 0x90) == 0)) {
              if (((double)puVar2 == 0.0) &&
                 ((!NAN((double)puVar2) && (*(longlong *)(param_1 + 0x90) != 0)))) {
                if ((uVar3 >> 9 & 1) == 0) {
                  pdVar19 = local_318;
                  pdVar18 = local_298;
                  for (lVar16 = 0xc; lVar16 != 0; lVar16 = lVar16 + -1) {
                    *pdVar18 = *pdVar19;
                    pdVar19 = pdVar19 + 1;
                    pdVar18 = pdVar18 + 1;
                  }
                  local_368 = 0;
                  puStack_360 = (undefined8 *)0x0;
                  cVar13 = FUN_144945691(uVar14,local_158);
                  iVar11 = local_320;
                  goto joined_r0x0001400d915b;
                }
                pdVar19 = local_318;
                pdVar18 = local_298;
                for (lVar16 = 0xc; lVar16 != 0; lVar16 = lVar16 + -1) {
                  *pdVar18 = *pdVar19;
                  pdVar19 = pdVar19 + 1;
                  pdVar18 = pdVar18 + 1;
                }
                puStack_360 = &local_2d0;
                local_368 = 0;
                cVar13 = FUN_144945691(uVar14,local_158);
                iVar20 = local_320;
                if (cVar13 == '\0') goto LAB_1400d9434;
                local_1f8 = local_2c0;
                local_208 = local_2d0;
                uStack_200 = uStack_2c8;
                local_1e8 = local_2b8;
                uStack_1e0 = uStack_2b0;
                local_1d8 = local_2a8;
                local_210 = -local_2a0;
                goto LAB_1400d9161;
              }
            }
            else {
              local_328 = (byte)(uVar3 >> 9) & 1;
              local_368 = *param_3;
              pdVar19 = local_318;
              pdVar18 = local_298;
              for (lVar16 = 0xc; lVar16 != 0; lVar16 = lVar16 + -1) {
                *pdVar18 = *pdVar19;
                pdVar19 = pdVar19 + 1;
                pdVar18 = pdVar18 + 1;
              }
              local_338 = &local_238;
              local_340 = &local_214;
              local_348 = &local_208;
              local_350 = &local_1e8;
              local_358 = &local_210;
              local_330 = 0;
              puStack_360 = puVar2;
              cVar13 = FUN_14496e94c(uVar14,local_158);
joined_r0x0001400d915b:
              iVar20 = iVar11;
              if (cVar13 != '\0') {
LAB_1400d9161:
                lVar16 = *(longlong *)(param_1 + 0x70) + 8;
                if (*(char *)(*(longlong *)(param_1 + 0x70) + 0x84) == '\0') {
                  lVar16 = 0;
                }
                if ((((local_214 != -1) || (9.999999747378752e-05 < ABS(local_238))) ||
                    (9.999999747378752e-05 < ABS(dStack_230))) ||
                   (9.999999747378752e-05 < ABS(local_228))) {
                  if ((lVar16 != 0) && (ABS(local_210 - (double)*(float *)(lVar16 + 0x70)) < 1e-06))
                  {
                    if (ABS(*(double *)(param_1 + 0x58)) <= 9.999999747378752e-05) {
                      dVar28 = *(double *)(param_1 + 0x68);
                      uVar22 = SUB84(dVar28,0);
                      uVar23 = (undefined4)((ulonglong)dVar28 >> 0x20);
                      if ((ABS(*(double *)(param_1 + 0x60)) <= 9.999999747378752e-05) &&
                         (ABS(dVar28) <= 9.999999747378752e-05)) goto LAB_1400d92b4;
                    }
                    else {
                      uVar22 = (undefined4)*(undefined8 *)(param_1 + 0x68);
                      uVar23 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x68) >> 0x20);
                    }
                    pdVar19 = (double *)*param_3;
                    if ((double)CONCAT44(uVar23,uVar22) * pdVar19[2] +
                        *(double *)(param_1 + 0x58) * *pdVar19 +
                        *(double *)(param_1 + 0x60) * pdVar19[1] <=
                        pdVar19[2] * local_228 + *pdVar19 * local_238 + pdVar19[1] * dStack_230)
                    goto LAB_1400d9434;
                  }
LAB_1400d92b4:
                  local_310[2] = local_228;
                  *local_310 = local_238;
                  local_310[1] = dStack_230;
                }
                local_160 = (float)local_210;
                local_180 = local_1d8;
                local_190 = local_1e8;
                uStack_188 = uStack_1e0;
                local_168 = local_1f8;
                local_178 = (undefined4)local_208;
                uStack_174 = local_208._4_4_;
                uStack_170 = (undefined4)uStack_200;
                uStack_16c = uStack_200._4_4_;
                local_198 = 0x404;
                if (0.0 < local_210) {
                  local_198 = 7;
                }
                if ((local_31c & 0x200) != 0) {
                  local_198 = 7;
                }
                local_1c0 = (double)CONCAT44(local_1c0._4_4_,local_214);
                local_1a8 = local_310[2];
                local_1b8 = *local_310;
                dStack_1b0 = local_310[1];
                if ((*(byte *)(*(longlong *)(param_1 + 0x78) + 0x10) & 8) != 0) {
                  cVar12 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x10))
                                     (*(longlong **)(param_1 + 0x98),local_308,local_1d0);
                }
                if (cVar12 != '\0') {
                  if (cVar12 == '\x02') {
                    pdVar19 = *(double **)(param_1 + 0x70);
LAB_1400d93c3:
                    pdVar17 = local_1d0;
                    pdVar18 = pdVar19;
                    for (lVar16 = 0xf; pdVar18 = pdVar18 + 1, lVar16 != 0; lVar16 = lVar16 + -1) {
                      *pdVar18 = *pdVar17;
                      pdVar17 = pdVar17 + 1;
                    }
                    *(undefined1 *)((longlong)pdVar19 + 0x84) = 1;
                    uVar22 = 0;
                    uVar23 = 0;
                    if (0.0 <= local_210) {
                      uVar22 = SUB84(local_210,0);
                      uVar23 = (undefined4)((ulonglong)local_210 >> 0x20);
                    }
                    param_3[4] = CONCAT44(uVar23,uVar22);
                    if (((double)CONCAT44(uVar23,uVar22) != 0.0) ||
                       (NAN((double)CONCAT44(uVar23,uVar22)))) {
                      param_3[5] = 1.0 / (double)CONCAT44(uVar23,uVar22);
                    }
                    if ((((double)CONCAT44(uVar23,uVar22) != 0.0) ||
                        (NAN((double)CONCAT44(uVar23,uVar22)))) ||
                       (*(char *)(*(longlong *)(param_1 + 0x70) + 0x85) != '\x01'))
                    goto LAB_1400d9429;
                  }
                  else {
                    pdVar19 = *(double **)(param_1 + 0x70);
                    if ((*(char *)(param_1 + 0x52) != '\0') ||
                       (*(char *)((longlong)pdVar19 + 0x85) != '\0')) goto LAB_1400d93c3;
                    iVar20 = *(int *)(pdVar19 + 0x792);
                    *(uint *)(pdVar19 + 0x792) = iVar20 + 1U;
                    if (*(uint *)((longlong)pdVar19 + 0x3c94) < iVar20 + 1U) {
                      FUN_1412de590(pdVar19 + 0x11,iVar20);
                    }
                    pdVar18 = pdVar19 + 0x11;
                    if ((double *)pdVar19[0x791] != (double *)0x0) {
                      pdVar18 = (double *)pdVar19[0x791];
                    }
                    pdVar19 = local_1d0;
                    pdVar18 = pdVar18 + (longlong)iVar20 * 0xf;
                    for (lVar16 = 0xf; lVar16 != 0; lVar16 = lVar16 + -1) {
                      *pdVar18 = *pdVar19;
                      pdVar19 = pdVar19 + 1;
                      pdVar18 = pdVar18 + 1;
                    }
LAB_1400d9429:
                    iVar20 = local_320;
                    if (*(char *)(param_1 + 0x52) == '\0') goto LAB_1400d9434;
                  }
                  uVar14 = 0;
                  goto LAB_1400d94a1;
                }
              }
            }
          }
        }
        else {
          uVar22 = (undefined4)local_2f8;
          uVar23 = local_2f8._4_4_;
          dVar28 = local_2e8;
          dVar24 = dVar25;
          if (*(longlong *)(param_1 + 0x90) == 0) {
            uVar22 = (undefined4)*(undefined8 *)(param_1 + 0x38);
            uVar23 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x38) >> 0x20);
            dVar28 = *(double *)(param_1 + 0x40);
            dVar24 = *(double *)(param_1 + 0x48);
          }
          local_1d0[0] = (*(double *)(lVar5 + 0x18) - (double)CONCAT44(uVar23,uVar22)) - dVar1;
          local_1d0[1] = (*(double *)(lVar5 + 0x20) - dVar28) - dVar33;
          local_1c0 = (*(double *)(lVar5 + 0x28) - dVar24) - dVar6;
          local_298[0] = (*(double *)(lVar5 + 0x30) + (double)CONCAT44(uVar23,uVar22)) - dVar1;
          local_298[1] = (*(double *)(lVar5 + 0x38) + dVar28) - dVar33;
          local_298[2] = (*(double *)(lVar5 + 0x40) + dVar24) - dVar6;
          dVar28 = 0.0;
          lVar15 = 0;
          uVar22 = 0xffffffff;
          uVar23 = 0x7fefffff;
          do {
            if (*(char *)((longlong)param_3 + lVar15 + 0x30) == '\x01') {
              if (0.0 < local_1d0[lVar15]) goto LAB_1400d9434;
              dVar24 = 0.0;
              dVar29 = 1.79769313486232e+308;
              if (local_298[lVar15] <= 0.0 && local_298[lVar15] != 0.0) goto LAB_1400d9434;
            }
            else {
              dVar24 = local_1d0[lVar15] * (double)param_3[lVar15 + 1];
              dVar29 = (double)param_3[lVar15 + 1] * local_298[lVar15];
            }
            dVar31 = dVar29;
            if (dVar24 <= dVar29) {
              dVar31 = dVar24;
            }
            if (dVar28 <= dVar31) {
              dVar28 = dVar31;
            }
            if (dVar24 <= dVar29) {
              dVar24 = dVar29;
            }
            if (dVar24 <= (double)CONCAT44(uVar23,uVar22)) {
              uVar22 = SUB84(dVar24,0);
              uVar23 = (undefined4)((ulonglong)dVar24 >> 0x20);
            }
            if ((double)CONCAT44(uVar23,uVar22) <= dVar28 &&
                dVar28 != (double)CONCAT44(uVar23,uVar22)) goto LAB_1400d9434;
            lVar15 = lVar15 + 1;
          } while (lVar15 != 3);
          if ((dVar28 <= (double)param_3[4]) &&
             (0.0 < (double)CONCAT44(uVar23,uVar22) || (double)CONCAT44(uVar23,uVar22) == 0.0))
          goto LAB_1400d8ec8;
        }
LAB_1400d9434:
        lVar21 = lVar21 + 1;
      } while (lVar21 < *(int *)((longlong)dVar4 + 0x88));
      uVar14 = CONCAT71((int7)(int3)((uint)*(int *)((longlong)dVar4 + 0x88) >> 8),1);
    }
  }
LAB_1400d94a1:
  if ((local_f0 ^ (ulonglong)auStack_388) == DAT_14c707940) {
    return uVar14;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400d952e FUN_1400d952e body=2834 status=ok
// SIG undefined FUN_1400d952e(void)

undefined8 FUN_1400d952e(longlong param_1,double *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  ushort uVar2;
  double dVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  char cVar8;
  char cVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  double *pdVar13;
  double *pdVar14;
  double *pdVar15;
  int iVar16;
  longlong lVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined1 auStack_398 [32];
  undefined8 local_378;
  undefined8 *puStack_370;
  double *local_368;
  undefined8 *local_360;
  undefined8 *local_358;
  int *local_350;
  double *local_348;
  undefined8 local_340;
  byte local_338;
  int local_330;
  uint local_32c;
  double *local_328;
  double *local_320;
  longlong local_318;
  longlong local_310;
  undefined8 local_308;
  undefined8 uStack_300;
  double local_2f8;
  undefined8 uStack_2f0;
  double local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  double local_2a0;
  double local_298 [12];
  double local_238;
  double dStack_230;
  double local_228;
  int local_214;
  double local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  double local_1d0 [2];
  double local_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined4 local_1a0;
  undefined2 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  float local_160;
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_398;
  dVar3 = *param_2;
  uVar10 = CONCAT71((int7)((DAT_14c707940 ^ (ulonglong)auStack_398) >> 8),1);
  if ((dVar3 != 0.0) && (*(int *)((longlong)dVar3 + 0x58) == *(int *)(param_2 + 2))) {
    iVar16 = *(int *)((longlong)dVar3 + 0x88);
    local_158._8_4_ = SUB84((double)*(float *)((longlong)dVar3 + 0x44),0);
    local_158._0_8_ = (double)*(float *)((longlong)dVar3 + 0x40);
    local_158._12_4_ = (int)((ulonglong)(double)*(float *)((longlong)dVar3 + 0x44) >> 0x20);
    local_148._8_4_ = SUB84((double)*(float *)((longlong)dVar3 + 0x4c),0);
    local_148._0_8_ = (double)*(float *)((longlong)dVar3 + 0x48);
    local_148._12_4_ = (int)((ulonglong)(double)*(float *)((longlong)dVar3 + 0x4c) >> 0x20);
    local_138 = *(undefined8 *)((longlong)dVar3 + 0x20);
    uStack_130 = *(undefined8 *)((longlong)dVar3 + 0x28);
    local_128 = *(undefined8 *)((longlong)dVar3 + 0x30);
    uStack_120 = 0;
    local_118 = 0x3ff0000000000000;
    uStack_110 = 0x3ff0000000000000;
    local_108 = 0x3ff0000000000000;
    uStack_100 = 0;
    lVar17 = *(longlong *)(param_1 + 0x90);
    if (lVar17 == 0) {
      dVar22 = *(double *)(param_1 + 0x38);
      dVar24 = *(double *)(param_1 + 0x40);
      dVar26 = *(double *)(param_1 + 0x48);
      dVar5 = -dVar26;
      dVar6 = -dVar24;
      dVar21 = -dVar22;
    }
    else {
      dVar5 = *(double *)(param_1 + 0xa0);
      dVar27 = *(double *)(param_1 + 0xa8);
      dVar6 = *(double *)(param_1 + 0xb0);
      dVar21 = *(double *)(lVar17 + 0x20) * *(double *)(param_1 + 0xe0);
      dVar23 = *(double *)(lVar17 + 0x28) * *(double *)(param_1 + 0xe8);
      dVar20 = *(double *)(lVar17 + 0x30) * *(double *)(param_1 + 0xf0);
      dVar22 = *(double *)(param_1 + 0xb8);
      dVar24 = dVar23 * dVar5 - dVar27 * dVar21;
      dVar25 = dVar20 * dVar27 - dVar6 * dVar23;
      dVar26 = dVar21 * dVar6 - dVar5 * dVar20;
      dVar25 = dVar25 + dVar25;
      dVar26 = dVar26 + dVar26;
      dVar24 = dVar24 + dVar24;
      dVar21 = (dVar24 * dVar27 - dVar26 * dVar6) + dVar22 * dVar25 + dVar21 +
               *(double *)(param_1 + 0xc0);
      dVar6 = (dVar6 * dVar25 - dVar5 * dVar24) + *(double *)(param_1 + 0xb8) * dVar26 + dVar23 +
              *(double *)(param_1 + 200);
      dVar5 = dVar24 * dVar22 + dVar20 + (dVar26 * dVar5 - dVar25 * dVar27) +
              *(double *)(param_1 + 0xd0);
      dVar27 = *(double *)(lVar17 + 0x10);
      dVar26 = dVar27 + dVar5;
      dVar24 = dVar27 + dVar6;
      dVar22 = dVar27 + dVar21;
      dVar5 = dVar5 - dVar27;
      dVar6 = dVar6 - dVar27;
      dVar21 = dVar21 - dVar27;
    }
    uVar10 = CONCAT71((int7)((ulonglong)lVar17 >> 8),1);
    if (0 < iVar16) {
      local_310 = (longlong)dVar3 + 0x78;
      local_2e8 = (dVar26 - dVar5) * 0.5;
      local_2f8 = (dVar24 - dVar6) * 0.5;
      local_308 = (dVar22 - dVar21) * 0.5;
      uStack_2e0 = 0;
      dVar5 = dVar5 + local_2e8;
      uStack_2f0 = 0;
      dVar6 = dVar6 + local_2f8;
      uStack_300 = 0;
      dVar21 = dVar21 + local_308;
      local_318 = param_1 + 0x80;
      local_328 = (double *)(param_1 + 0xa0);
      local_320 = (double *)(param_1 + 0x58);
      lVar17 = 0;
      local_330 = iVar16;
      do {
        lVar12 = *(longlong *)((longlong)dVar3 + 0x80);
        if (*(longlong *)((longlong)dVar3 + 0x80) == 0) {
          lVar12 = local_310;
        }
        lVar4 = *(longlong *)(lVar12 + lVar17 * 8);
        uVar10 = *(undefined8 *)(lVar4 + 0x10);
        if (iVar16 < 2) {
LAB_1400d99e6:
          cVar8 = '\x02';
          if (((*(byte *)(*(longlong *)(param_1 + 0x78) + 0x10) & 4) == 0) ||
             (cVar8 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x20))
                                (*(longlong **)(param_1 + 0x98),local_318,lVar4,dVar3),
             cVar8 != '\0')) {
            iVar7 = local_330;
            local_1c0 = (double)CONCAT44(local_1c0._4_4_,0xffffffff);
            local_1a8 = 0.0;
            local_1b8 = 0.0;
            dStack_1b0 = 0.0;
            local_1a0 = 0xffffffff;
            local_198 = 0;
            local_1d0[1] = *(double *)(lVar12 + lVar17 * 8);
            local_1d8 = 0;
            local_1e8 = 0;
            uStack_1e0 = 0;
            local_1f8 = 0;
            local_208 = 0;
            uStack_200 = 0;
            local_210 = 0.0;
            local_214 = -1;
            local_228 = DAT_14c8464f0;
            local_238 = DAT_14c8464e0;
            dStack_230 = DAT_14c8464e8;
            uVar2 = *(ushort *)(param_1 + 0x50);
            puVar1 = (undefined8 *)param_3[4];
            local_32c = (uint)uVar2;
            local_1d0[0] = dVar3;
            if (((double)puVar1 <= 0.0) || (*(longlong *)(param_1 + 0x90) == 0)) {
              if (((double)puVar1 == 0.0) &&
                 ((!NAN((double)puVar1) && (*(longlong *)(param_1 + 0x90) != 0)))) {
                if ((uVar2 >> 9 & 1) == 0) {
                  pdVar15 = local_328;
                  pdVar14 = local_298;
                  for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
                    *pdVar14 = *pdVar15;
                    pdVar15 = pdVar15 + 1;
                    pdVar14 = pdVar14 + 1;
                  }
                  local_378 = 0;
                  puStack_370 = (undefined8 *)0x0;
                  cVar9 = FUN_140682465(uVar10,local_158);
                  iVar7 = local_330;
                  goto joined_r0x0001400d9c71;
                }
                pdVar15 = local_328;
                pdVar14 = local_298;
                for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
                  *pdVar14 = *pdVar15;
                  pdVar15 = pdVar15 + 1;
                  pdVar14 = pdVar14 + 1;
                }
                puStack_370 = &local_2d0;
                local_378 = 0;
                cVar9 = FUN_140682465(uVar10,local_158);
                iVar16 = local_330;
                if (cVar9 == '\0') goto LAB_1400d9f47;
                local_1f8 = local_2c0;
                local_208 = local_2d0;
                uStack_200 = uStack_2c8;
                local_1e8 = local_2b8;
                uStack_1e0 = uStack_2b0;
                local_1d8 = local_2a8;
                local_210 = -local_2a0;
                goto LAB_1400d9c77;
              }
            }
            else {
              local_338 = (byte)(uVar2 >> 9) & 1;
              local_378 = *param_3;
              pdVar15 = local_328;
              pdVar14 = local_298;
              for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
                *pdVar14 = *pdVar15;
                pdVar15 = pdVar15 + 1;
                pdVar14 = pdVar14 + 1;
              }
              local_348 = &local_238;
              local_350 = &local_214;
              local_358 = &local_208;
              local_360 = &local_1e8;
              local_368 = &local_210;
              local_340 = 0;
              puStack_370 = puVar1;
              cVar9 = FUN_144852885(uVar10,local_158);
joined_r0x0001400d9c71:
              iVar16 = iVar7;
              if (cVar9 != '\0') {
LAB_1400d9c77:
                lVar12 = *(longlong *)(param_1 + 0x70) + 8;
                if (*(char *)(*(longlong *)(param_1 + 0x70) + 0x84) == '\0') {
                  lVar12 = 0;
                }
                if ((((local_214 != -1) || (9.999999747378752e-05 < ABS(local_238))) ||
                    (9.999999747378752e-05 < ABS(dStack_230))) ||
                   (9.999999747378752e-05 < ABS(local_228))) {
                  if ((lVar12 != 0) && (ABS(local_210 - (double)*(float *)(lVar12 + 0x70)) < 1e-06))
                  {
                    if (ABS(*(double *)(param_1 + 0x58)) <= 9.999999747378752e-05) {
                      dVar22 = *(double *)(param_1 + 0x68);
                      uVar18 = SUB84(dVar22,0);
                      uVar19 = (undefined4)((ulonglong)dVar22 >> 0x20);
                      if ((ABS(*(double *)(param_1 + 0x60)) <= 9.999999747378752e-05) &&
                         (ABS(dVar22) <= 9.999999747378752e-05)) goto LAB_1400d9dc7;
                    }
                    else {
                      uVar18 = (undefined4)*(undefined8 *)(param_1 + 0x68);
                      uVar19 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x68) >> 0x20);
                    }
                    pdVar15 = (double *)*param_3;
                    if ((double)CONCAT44(uVar19,uVar18) * pdVar15[2] +
                        *(double *)(param_1 + 0x58) * *pdVar15 +
                        *(double *)(param_1 + 0x60) * pdVar15[1] <=
                        pdVar15[2] * local_228 + *pdVar15 * local_238 + pdVar15[1] * dStack_230)
                    goto LAB_1400d9f47;
                  }
LAB_1400d9dc7:
                  local_320[2] = local_228;
                  *local_320 = local_238;
                  local_320[1] = dStack_230;
                }
                local_160 = (float)local_210;
                local_180 = local_1d8;
                local_190 = local_1e8;
                uStack_188 = uStack_1e0;
                local_168 = local_1f8;
                local_178 = (undefined4)local_208;
                uStack_174 = local_208._4_4_;
                uStack_170 = (undefined4)uStack_200;
                uStack_16c = uStack_200._4_4_;
                local_198 = 0x404;
                if (0.0 < local_210) {
                  local_198 = 7;
                }
                if ((local_32c & 0x200) != 0) {
                  local_198 = 7;
                }
                local_1c0 = (double)CONCAT44(local_1c0._4_4_,local_214);
                local_1a8 = local_320[2];
                local_1b8 = *local_320;
                dStack_1b0 = local_320[1];
                if ((*(byte *)(*(longlong *)(param_1 + 0x78) + 0x10) & 8) != 0) {
                  cVar8 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x10))
                                    (*(longlong **)(param_1 + 0x98),local_318,local_1d0);
                }
                if (cVar8 != '\0') {
                  if (cVar8 == '\x02') {
                    pdVar15 = *(double **)(param_1 + 0x70);
LAB_1400d9ed6:
                    pdVar13 = local_1d0;
                    pdVar14 = pdVar15;
                    for (lVar12 = 0xf; pdVar14 = pdVar14 + 1, lVar12 != 0; lVar12 = lVar12 + -1) {
                      *pdVar14 = *pdVar13;
                      pdVar13 = pdVar13 + 1;
                    }
                    *(undefined1 *)((longlong)pdVar15 + 0x84) = 1;
                    uVar18 = 0;
                    uVar19 = 0;
                    if (0.0 <= local_210) {
                      uVar18 = SUB84(local_210,0);
                      uVar19 = (undefined4)((ulonglong)local_210 >> 0x20);
                    }
                    param_3[4] = CONCAT44(uVar19,uVar18);
                    if (((double)CONCAT44(uVar19,uVar18) != 0.0) ||
                       (NAN((double)CONCAT44(uVar19,uVar18)))) {
                      param_3[5] = 1.0 / (double)CONCAT44(uVar19,uVar18);
                    }
                    if ((((double)CONCAT44(uVar19,uVar18) != 0.0) ||
                        (NAN((double)CONCAT44(uVar19,uVar18)))) ||
                       (*(char *)(*(longlong *)(param_1 + 0x70) + 0x85) != '\x01'))
                    goto LAB_1400d9f3c;
                  }
                  else {
                    pdVar15 = *(double **)(param_1 + 0x70);
                    if ((*(char *)(param_1 + 0x52) != '\0') ||
                       (*(char *)((longlong)pdVar15 + 0x85) != '\0')) goto LAB_1400d9ed6;
                    iVar16 = *(int *)(pdVar15 + 0x792);
                    *(uint *)(pdVar15 + 0x792) = iVar16 + 1U;
                    if (*(uint *)((longlong)pdVar15 + 0x3c94) < iVar16 + 1U) {
                      FUN_1412de590(pdVar15 + 0x11,iVar16);
                    }
                    pdVar14 = pdVar15 + 0x11;
                    if ((double *)pdVar15[0x791] != (double *)0x0) {
                      pdVar14 = (double *)pdVar15[0x791];
                    }
                    pdVar15 = local_1d0;
                    pdVar14 = pdVar14 + (longlong)iVar16 * 0xf;
                    for (lVar12 = 0xf; lVar12 != 0; lVar12 = lVar12 + -1) {
                      *pdVar14 = *pdVar15;
                      pdVar15 = pdVar15 + 1;
                      pdVar14 = pdVar14 + 1;
                    }
LAB_1400d9f3c:
                    iVar16 = local_330;
                    if (*(char *)(param_1 + 0x52) == '\0') goto LAB_1400d9f47;
                  }
                  uVar10 = 0;
                  goto LAB_1400d9fb4;
                }
              }
            }
          }
        }
        else {
          uVar18 = (undefined4)local_308;
          uVar19 = local_308._4_4_;
          dVar22 = local_2f8;
          dVar24 = local_2e8;
          if (*(longlong *)(param_1 + 0x90) == 0) {
            uVar18 = (undefined4)*(undefined8 *)(param_1 + 0x38);
            uVar19 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x38) >> 0x20);
            dVar22 = *(double *)(param_1 + 0x40);
            dVar24 = *(double *)(param_1 + 0x48);
          }
          local_1d0[0] = (*(double *)(lVar4 + 0x18) - (double)CONCAT44(uVar19,uVar18)) - dVar21;
          local_1d0[1] = (*(double *)(lVar4 + 0x20) - dVar22) - dVar6;
          local_1c0 = (*(double *)(lVar4 + 0x28) - dVar24) - dVar5;
          local_298[0] = (*(double *)(lVar4 + 0x30) + (double)CONCAT44(uVar19,uVar18)) - dVar21;
          local_298[1] = (*(double *)(lVar4 + 0x38) + dVar22) - dVar6;
          local_298[2] = (*(double *)(lVar4 + 0x40) + dVar24) - dVar5;
          dVar22 = 0.0;
          lVar11 = 0;
          uVar18 = 0xffffffff;
          uVar19 = 0x7fefffff;
          do {
            if (*(char *)((longlong)param_3 + lVar11 + 0x30) == '\x01') {
              if (0.0 < local_1d0[lVar11]) goto LAB_1400d9f47;
              dVar26 = 0.0;
              dVar24 = 1.79769313486232e+308;
              if (local_298[lVar11] <= 0.0 && local_298[lVar11] != 0.0) goto LAB_1400d9f47;
            }
            else {
              dVar26 = local_1d0[lVar11] * (double)param_3[lVar11 + 1];
              dVar24 = (double)param_3[lVar11 + 1] * local_298[lVar11];
            }
            dVar27 = dVar24;
            if (dVar26 <= dVar24) {
              dVar27 = dVar26;
            }
            if (dVar22 <= dVar27) {
              dVar22 = dVar27;
            }
            if (dVar26 <= dVar24) {
              dVar26 = dVar24;
            }
            if (dVar26 <= (double)CONCAT44(uVar19,uVar18)) {
              uVar18 = SUB84(dVar26,0);
              uVar19 = (undefined4)((ulonglong)dVar26 >> 0x20);
            }
            if ((double)CONCAT44(uVar19,uVar18) <= dVar22 &&
                dVar22 != (double)CONCAT44(uVar19,uVar18)) goto LAB_1400d9f47;
            lVar11 = lVar11 + 1;
          } while (lVar11 != 3);
          if ((dVar22 <= (double)param_3[4]) &&
             (0.0 < (double)CONCAT44(uVar19,uVar18) || (double)CONCAT44(uVar19,uVar18) == 0.0))
          goto LAB_1400d99e6;
        }
LAB_1400d9f47:
        lVar17 = lVar17 + 1;
      } while (lVar17 < *(int *)((longlong)dVar3 + 0x88));
      uVar10 = CONCAT71((int7)(int3)((uint)*(int *)((longlong)dVar3 + 0x88) >> 8),1);
    }
  }
LAB_1400d9fb4:
  if ((local_f0 ^ (ulonglong)auStack_398) == DAT_14c707940) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400da041 FUN_1400da041 body=492 status=ok
// SIG undefined FUN_1400da041(void)

void FUN_1400da041(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  
  if ((*(byte *)(param_3 + 0x68) & 0x80) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0x1c;
  }
  plVar1 = (longlong *)(param_1 + 0x70);
  puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar3 = puVar4 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar3) {
    FUN_140023dd8(plVar1,0x50);
    puVar4 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar3 = puVar4 + 9;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar3;
  puVar4[1] = *(undefined8 *)(param_3 + 8);
  puVar4[2] = 0;
  *(undefined1 *)(puVar4 + 3) = 3;
  *(undefined8 *)((longlong)puVar4 + 0x1c) = 0xffffffffffffffff;
  *puVar4 = &PTR_FUN_14a1fb168;
  *(undefined1 *)(puVar4 + 5) = uVar5;
  *(undefined8 *)((longlong)puVar4 + 0x2c) = 0xffffffff00000000;
  puVar4[7] = 0;
  puVar4[8] = param_3;
  iVar2 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar2 + 1U) {
    FUN_1447568fc(param_1 + 0x198,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar2 * 8) = puVar4;
  *(int *)((longlong)puVar4 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  if ((*(byte *)(param_2 + 0x68) & 0x80) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0x1c;
  }
  puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar3 = puVar6 + 8;
  if (*(undefined8 **)(param_1 + 0x78) < puVar3) {
    FUN_140023dd8(plVar1,0x48);
    puVar6 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar3 = puVar6 + 8;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar3;
  puVar6[1] = *(undefined8 *)(param_2 + 8);
  puVar6[2] = 0;
  *(undefined1 *)(puVar6 + 3) = 2;
  *(undefined8 *)((longlong)puVar6 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar6 + 5) = 1;
  *puVar6 = &PTR_FUN_14a1fb3e8;
  *(undefined1 *)(puVar6 + 6) = uVar5;
  *(undefined2 *)((longlong)puVar6 + 0x31) = 0;
  puVar6[7] = param_2;
  iVar2 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar2 + 1U) {
    FUN_1447568fc(param_1 + 0x198,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar2 * 8) = puVar6;
  *(int *)((longlong)puVar6 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  FUN_1400da22d(param_1,puVar6,puVar4,param_4);
  return;
}



// FUNCTION 1400da22d FUN_1400da22d body=517 status=ok
// SIG undefined FUN_1400da22d(void)

void FUN_1400da22d(longlong param_1,longlong *param_2,longlong *param_3,uint *param_4)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined1 auStack_108 [40];
  longlong *local_e0;
  longlong *local_d8;
  longlong *local_d0;
  int local_c4;
  uint local_c0;
  undefined4 local_bc;
  longlong *local_b0;
  longlong local_a8;
  code *local_a0;
  uint *local_98;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_e0 = param_2;
  lVar4 = (**(code **)(*param_2 + 8))(param_2);
  local_d8 = param_3;
  (**(code **)(*param_3 + 8))();
  if (*(char *)(lVar4 + 0x18) == '\0') {
    uVar7 = 3;
  }
  else if (*(char *)(lVar4 + 0x18) == '\x01') {
    uVar7 = 2;
    if ((*(uint *)(lVar4 + 0x68) & 0x10) == 0) {
      uVar7 = *(uint *)(lVar4 + 0x68) >> 0x10 & 1;
    }
  }
  else {
    uVar7 = 0;
  }
  uVar2 = *param_4;
  if (uVar2 == 0) {
    if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  local_c4 = (uint)(uVar7 == 2) * 2;
  plVar1 = (longlong *)(param_1 + 0x70);
  local_b0 = (longlong *)(param_1 + 0x98);
  local_a8 = param_1 + 0x168;
  local_a0 = (code *)(&DAT_14a39a1b8 + *(int *)(&DAT_14a39a1b8 + (ulonglong)uVar7 * 4));
  uVar7 = (uVar2 >> (sbyte)local_c4) + 0x3f >> 6;
  if (DAT_14ca84f24 < uVar7) {
    uVar7 = DAT_14ca84f24;
  }
  uVar7 = (uVar7 + (uVar7 == 0) << (sbyte)local_c4) << 6;
  if (uVar2 <= uVar7) {
    uVar7 = uVar2;
  }
  puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar5 = puVar6 + 0x14;
  local_d0 = plVar1;
  local_98 = param_4;
  if (*(undefined8 **)(param_1 + 0x78) < puVar5) {
    FUN_140023dd8(plVar1,0xb0);
    puVar6 = (undefined8 *)(*plVar1 + 0xfU & 0xfffffffffffffff0);
    puVar5 = puVar6 + 0x14;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar5;
  *puVar6 = &PTR_FUN_14a399d98;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  puVar6[10] = 0;
  puVar6[0xb] = 0;
  puVar6[0xc] = 0;
  puVar6[0xd] = 0;
  puVar6[0xe] = 0;
  puVar6[0xf] = 0;
  puVar6[0x10] = 0;
  puVar6[0x11] = 0;
  puVar6[0x12] = 0;
  iVar3 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar3 + 1U) {
    FUN_1448cfae8(local_b0,iVar3);
  }
  *(undefined8 **)(*local_b0 + (longlong)iVar3 * 8) = puVar6;
  *(uint *)((longlong)puVar6 + 0x14) = uVar7;
  *(uint *)(puVar6 + 3) = param_4[1];
  *(uint *)((longlong)puVar6 + 0x1c) = param_4[2];
  local_bc = 0;
  local_c0 = uVar7;
                    /* WARNING: Could not recover jumptable at 0x0001400da3f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*local_a0)();
  return;
}



// FUNCTION 1400da8cc FUN_1400da8cc body=93 status=ok
// SIG undefined FUN_1400da8cc(void)

undefined8 * FUN_1400da8cc(undefined8 *param_1)

{
  undefined4 uVar1;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  uVar1 = FUN_144830b78(param_1 + 5,&DAT_14cb42160);
  *(undefined4 *)(param_1 + 5) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  uVar1 = FUN_144830b78((longlong)param_1 + 0x34,&DAT_14cb42160);
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar1;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  return param_1;
}



// FUNCTION 1400da929 FUN_1400da929 body=144 status=ok
// SIG undefined FUN_1400da929(void)

int FUN_1400da929(longlong param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x18))) {
    lVar1 = *(longlong *)(param_1 + 0x10) + (ulonglong)param_2 * 0x10;
    if (*(short *)(*(longlong *)(param_1 + 0x10) + 2 + (ulonglong)param_2 * 0x10) == -1) {
      if ((longlong)*(short *)(lVar1 + 10) == -1) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(*(longlong *)
                          (*(longlong *)(param_1 + 0x20) + (longlong)*(short *)(lVar1 + 10) * 0x18)
                        + 0x28);
      }
    }
    else {
      iVar2 = FUN_1400da929(param_1,(int)*(short *)(lVar1 + 8));
      iVar3 = FUN_1400da929(param_1,(int)*(short *)(lVar1 + 6));
      iVar4 = FUN_1400da929(param_1,(int)*(short *)(lVar1 + 4));
      if (iVar4 < iVar3) {
        iVar4 = iVar3;
      }
      if (iVar4 < iVar2) {
        iVar4 = iVar2;
      }
    }
    *(int *)(lVar1 + 0xc) = iVar4;
  }
  return iVar4;
}



// FUNCTION 1400da9ba FUN_1400da9ba body=291 status=ok
// SIG undefined FUN_1400da9ba(void)

void FUN_1400da9ba(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  iVar4 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar4 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar4;
  }
  else {
    bVar7 = false;
    do {
      lVar9 = uVar5 * 0x10 + -8;
      uVar10 = uVar5;
      while (((*(int *)(*param_1 + lVar9) != 0 &&
              (plVar1 = *(longlong **)(*param_1 + -8 + lVar9), plVar1 != (longlong *)0x0)) &&
             (cVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,param_2), cVar3 != '\0'))) {
        lVar9 = lVar9 + -0x10;
        bVar2 = uVar10 < 2;
        uVar10 = uVar10 - 1;
        if (bVar2) {
          iVar4 = *(int *)((longlong)param_1 + 0x14);
          *(int *)((longlong)param_1 + 0x14) = iVar4 + -1;
          if (!bVar7) {
            return;
          }
          goto LAB_1400daa53;
        }
      }
      uVar5 = uVar10 - 1;
      bVar7 = true;
    } while (1 < uVar10);
    iVar4 = *(int *)((longlong)param_1 + 0x14);
    *(int *)((longlong)param_1 + 0x14) = iVar4 + -1;
LAB_1400daa53:
    if (iVar4 < 2) {
      iVar4 = (int)param_1[1];
      iVar6 = iVar4;
      if (0 < iVar4) {
        iVar8 = 0;
        do {
          if (((*(int *)(*param_1 + 8 + (longlong)iVar8 * 0x10) == 0) ||
              (plVar1 = *(longlong **)(*param_1 + (longlong)iVar8 * 0x10), plVar1 == (longlong *)0x0
              )) || (cVar3 = (**(code **)(*plVar1 + 0x28))(), cVar3 != '\0')) {
            FUN_14005b288(param_1,iVar8);
            FUN_14005b248(param_1);
          }
          else {
            iVar8 = iVar8 + 1;
          }
          iVar6 = (int)param_1[1];
        } while (iVar8 < iVar6);
      }
      iVar8 = 2;
      if (2 < iVar6 * 2) {
        iVar8 = iVar6 * 2;
      }
      *(int *)(param_1 + 2) = iVar8;
      if ((iVar8 < iVar4) && (*(int *)((longlong)param_1 + 0xc) != iVar6)) {
        FUN_14045812c(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1400daade FUN_1400daade body=143 status=ok
// SIG undefined FUN_1400daade(void)

void FUN_1400daade(longlong *param_1)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if ((*param_1 != 0) && ((*(byte *)(*param_1 + 0xa0) & 1) == 0)) {
    LOCK();
    *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
    UNLOCK();
    local_9 = 1;
    FUN_1447439e4();
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400dab6e FUN_1400dab6e body=319 status=ok
// SIG undefined FUN_1400dab6e(void)

void FUN_1400dab6e(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if ((longlong)*(int *)(param_2 + 0x38) != 0) {
    plVar4 = *(longlong **)(param_2 + 0x30);
    lVar3 = (longlong)*(int *)(param_2 + 0x38) << 3;
    do {
      lVar2 = *plVar4;
      if (*(int *)(lVar2 + 0x20) == *(int *)(param_1 + 0x28)) {
        if (plVar4 == (longlong *)0x0) {
          return;
        }
        if (lVar2 == 0) {
          return;
        }
        lVar3 = *(longlong *)(param_1 + 0x30);
        iVar1 = *(int *)(param_1 + 0x38);
        uVar5 = 0;
        if ((longlong)iVar1 != 0) {
          lVar6 = 0;
          do {
            if (*(int *)(lVar3 + 8 + lVar6) == 0) {
              plVar4 = (longlong *)0x0;
            }
            else {
              plVar4 = *(longlong **)(lVar3 + lVar6);
            }
            (**(code **)(*plVar4 + 0x58))(plVar4,lVar2);
            lVar6 = lVar6 + 0x10;
          } while ((longlong)iVar1 * 0x10 != lVar6);
          uVar5 = *(undefined4 *)(param_1 + 0x38);
          lVar3 = *(longlong *)(param_1 + 0x30);
        }
        iVar1 = *(int *)(param_1 + 0x3c);
        FUN_1400dacd5(lVar3,uVar5);
        *(undefined4 *)(param_1 + 0x38) = 0;
        if ((iVar1 < 0) && (*(int *)(param_1 + 0x3c) != 0)) {
          FUN_1498025e2(param_1 + 0x30,0);
        }
        lVar3 = *(longlong *)(param_1 + 0x40);
        iVar1 = *(int *)(param_1 + 0x48);
        uVar5 = 0;
        if ((longlong)iVar1 != 0) {
          lVar6 = 0;
          do {
            if (*(int *)(lVar3 + 8 + lVar6) == 0) {
              plVar4 = (longlong *)0x0;
            }
            else {
              plVar4 = *(longlong **)(lVar3 + lVar6);
            }
            (**(code **)(*plVar4 + 0x58))(plVar4,*(undefined8 *)(lVar2 + 8),0);
            lVar6 = lVar6 + 0x10;
          } while ((longlong)iVar1 * 0x10 != lVar6);
          uVar5 = *(undefined4 *)(param_1 + 0x48);
          lVar3 = *(longlong *)(param_1 + 0x40);
        }
        iVar1 = *(int *)(param_1 + 0x4c);
        FUN_1400dacad(lVar3,uVar5);
        *(undefined4 *)(param_1 + 0x48) = 0;
        if (-1 < iVar1) {
          return;
        }
        if (*(int *)(param_1 + 0x4c) == 0) {
          return;
        }
        FUN_149802642(param_1 + 0x40,0);
        return;
      }
      plVar4 = plVar4 + 1;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 1400dacad FUN_1400dacad body=40 status=ok
// SIG undefined FUN_1400dacad(void)

void FUN_1400dacad(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1449db362(param_1);
    param_1 = param_1 + 0x10;
  }
  return;
}



// FUNCTION 1400dacd5 FUN_1400dacd5 body=40 status=ok
// SIG undefined FUN_1400dacd5(void)

void FUN_1400dacd5(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1449db362(param_1);
    param_1 = param_1 + 0x10;
  }
  return;
}



// FUNCTION 1400dacfe FUN_1400dacfe body=107 status=ok
// SIG undefined FUN_1400dacfe(void)

void FUN_1400dacfe(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_2 + 1);
  if ((longlong)(int)uVar1 == 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar2 + uVar1;
  if ((uint)(*(int *)(param_1 + 0x1c) - iVar2) < uVar1) {
    FUN_146f01f82(param_1,iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar3 = param_1;
  }
  memcpy((void *)(lVar3 + (longlong)iVar2 * 4),(void *)*param_2,(longlong)(int)uVar1 << 2);
  return;
}



// FUNCTION 1400dad69 FUN_1400dad69 body=122 status=ok
// SIG undefined FUN_1400dad69(void)

undefined8 FUN_1400dad69(void)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  DWORD DVar4;
  DWORD DVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined4 extraout_var;
  ulonglong uVar8;
  
  cVar3 = FUN_1400dade3();
  lVar2 = DAT_14ca5bee8;
  if (cVar3 == '\0') {
    uVar7 = 0;
  }
  else {
    uVar1 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xc60);
    uVar6 = (ulonglong)uVar1;
    if (((uVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (uVar1 == 2)) {
      uVar8 = 0;
    }
    else if (uVar1 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      uVar6 = CONCAT44(extraout_var,DVar5);
      uVar8 = (ulonglong)(DVar4 != DVar5);
    }
    else {
      uVar8 = 1;
    }
    uVar7 = CONCAT71((int7)(uVar6 >> 8),0 < *(int *)(lVar2 + uVar8 * 4));
  }
  return uVar7;
}



// FUNCTION 1400dade3 FUN_1400dade3 body=282 status=ok
// SIG undefined FUN_1400dade3(void)

undefined8 FUN_1400dade3(uint param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined7 uVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca97060) {
    FUN_144b3d300(&DAT_14ca97060);
    if (DAT_14ca97060 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14ca97058 =
           (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))
                     (DAT_14c8407a8,L"r.Water.SingleLayer.ShadersSupportDistanceFieldShadow",1);
      _Init_thread_footer(&DAT_14ca97060);
    }
  }
  if (DAT_14ca97058 == (longlong *)0x0) {
    bVar1 = false;
    uVar3 = 0;
  }
  else {
    uVar2 = (**(code **)(*DAT_14ca97058 + 0xb0))();
    bVar1 = 0 < (int)uVar2;
    uVar3 = (undefined7)((ulonglong)uVar2 >> 8);
  }
  uVar4 = (ulonglong)param_1 & 0xffff;
  puVar5 = &DAT_14ca96aa8;
  if (DAT_14ca96af8 != (undefined4 *)0x0) {
    puVar5 = DAT_14ca96af8;
  }
  if ((((uint)puVar5[uVar4 >> 5] >> ((uint)uVar4 & 0x1f) & 1) == 0) ||
     ((int)(&DAT_14ca814b8)[uVar4 * 0xf] < 3)) {
    puVar5 = &DAT_14ca96c28;
    if (DAT_14ca96c78 != (undefined4 *)0x0) {
      puVar5 = DAT_14ca96c78;
    }
    uVar2 = CONCAT71(uVar3,bVar1 & (puVar5[uVar4 >> 5] & 1 << ((byte)uVar4 & 0x1f)) != 0U);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


