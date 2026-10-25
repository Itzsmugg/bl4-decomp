// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142f5daec FUN_142f5daec body=307 status=ok
// SIG undefined FUN_142f5daec(void)

void FUN_142f5daec(longlong param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined1 auStack_68 [40];
  undefined **local_40;
  longlong local_38;
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  piVar2 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  iVar5 = *piVar2;
  if (iVar5 == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    iVar5 = *piVar2;
  }
  if ((iVar5 == 0x60000000) || (iVar5 == 0)) {
    *piVar2 = 0x40000010;
  }
  lVar3 = *(longlong *)(**(longlong **)(param_1 + 8) + (longlong)param_2 * 8);
  local_40 = &PTR_FUN_14a2d35c0;
  local_30 = (undefined8 *)0x0;
  puVar4 = *(undefined8 **)(lVar3 + 0x130);
  if (puVar4 != (undefined8 *)0x0) {
    *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
    local_30 = puVar4;
  }
  local_38 = lVar3;
  (**(code **)(**(longlong **)(lVar3 + 8) + 0x38))(*(longlong **)(lVar3 + 8),&local_40);
  if (*(int *)(lVar3 + 0x4c) != *(int *)(lVar3 + 0x48)) {
    FUN_1400dfcbe(lVar3 + 0x40);
  }
  if (*(int *)(lVar3 + 0x3c) != *(int *)(lVar3 + 0x38)) {
    FUN_1400dfd8e(lVar3 + 0x30);
  }
  *(byte *)(lVar3 + 0x171) = *(byte *)(lVar3 + 0x171) & 0x7f;
  local_40 = &PTR_FUN_14a2d35c0;
  if (local_30 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_30 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*local_30)(local_30,1);
    }
  }
  if ((iVar5 == 0x60000000) || (iVar5 == 0)) {
    *piVar2 = iVar5;
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142f5dc20 FUN_142f5dc20 body=125 status=ok
// SIG undefined FUN_142f5dc20(void)

void FUN_142f5dc20(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  undefined8 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar3 = *param_1;
  LOCK();
  piVar1 = (int *)(lVar3 + 0x28);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  if ((iVar2 != -1) && (iVar2 < *(int *)(lVar3 + 0x60))) {
    local_18 = (undefined8 *)*param_1;
    if (local_18 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(local_18 + 1) = *(int *)(local_18 + 1) + 1;
      UNLOCK();
    }
    FUN_142f5e954(&local_18);
    if (local_18 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_18 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_18)(local_18,1);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f5dc9e FUN_142f5dc9e body=913 status=ok
// SIG undefined FUN_142f5dc9e(void)

ulonglong FUN_142f5dc9e(longlong *param_1,byte param_2)

{
  int *piVar1;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  longlong *plVar5;
  DWORD DVar6;
  DWORD dwTlsIndex;
  DWORD DVar7;
  LPVOID lpTlsValue;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auStack_108 [46];
  byte local_da;
  byte local_d9;
  longlong local_d8;
  longlong *local_d0;
  int local_c4;
  longlong local_c0;
  ulonglong local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  longlong local_a0;
  char local_98;
  undefined8 local_90;
  LARGE_INTEGER local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_108;
  dwTlsIndex = DAT_14c7585d0;
  local_da = param_2;
  local_d0 = param_1;
  if (DAT_14c7585d0 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar7 = 0xffffffff;
    LOCK();
    bVar15 = DAT_14c7585d0 != 0xffffffff;
    DVar6 = dwTlsIndex;
    if (bVar15) {
      DVar7 = DAT_14c7585d0;
      DVar6 = DAT_14c7585d0;
    }
    DAT_14c7585d0 = DVar6;
    UNLOCK();
    if (bVar15) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar7;
    }
  }
  plVar5 = local_d0;
  lpTlsValue = TlsGetValue(dwTlsIndex);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_140036a08(&local_b0);
    FUN_140fddf04(lpTlsValue);
    TlsSetValue(dwTlsIndex,lpTlsValue);
  }
  local_b0 = (undefined8 *)((longlong)lpTlsValue + 0x10);
  local_a8 = *(undefined8 *)((longlong)lpTlsValue + 0x10);
  local_a0 = *(longlong *)((longlong)lpTlsValue + 0x20);
  local_98 = '\0';
  local_90 = *(undefined8 *)((longlong)lpTlsValue + 0x28);
  *(undefined8 ***)((longlong)lpTlsValue + 0x28) = &local_b0;
  *(int *)((longlong)lpTlsValue + 0x30) = *(int *)((longlong)lpTlsValue + 0x30) + 1;
  local_c0 = -0x8000000000000000;
  lVar8 = *plVar5;
  if (local_da == 0) {
    lVar8 = *plVar5;
    iVar9 = *(int *)(lVar8 + 0x34);
    if (*(int *)(lVar8 + 0x20) + 2 <= iVar9) {
      FUN_142f5dc20(plVar5);
      lVar8 = *plVar5;
    }
    if ('\x02' < *(char *)(lVar8 + 0x50)) {
      QueryPerformanceCounter(&local_88);
      auVar18._0_8_ = ((double)local_88.QuadPart * DAT_14c83f420 + 16777216.0) * 10000000.0 + 0.5;
      auVar18._8_8_ = 0;
      auVar18 = roundpd(auVar18,auVar18,1);
      local_c0 = (longlong)auVar18._0_8_;
      iVar13 = 0;
      if (0 < DAT_14c7585cc) {
        iVar13 = DAT_14c7585cc;
      }
      auVar16._0_8_ = (double)iVar13 * 10000.0 + 0.5;
      auVar16._8_8_ = 0;
      auVar18 = roundpd(auVar16,auVar16,1);
      local_d8 = (longlong)auVar18._0_8_;
      lVar8 = *plVar5;
      bVar15 = true;
      goto LAB_142f5de2b;
    }
  }
  else {
    iVar9 = *(int *)(lVar8 + 0x34);
  }
  bVar15 = false;
  local_d8 = 0;
LAB_142f5de2b:
  iVar13 = *(int *)(lVar8 + 0x2c);
  local_b8 = (ulonglong)*(uint *)(lVar8 + 0x30);
  uVar2 = *(undefined8 *)(lVar8 + 0x40);
  local_c4 = iVar9 + -1;
  local_d9 = local_da ^ 1;
  do {
    LOCK();
    piVar1 = (int *)(lVar8 + 0x20);
    iVar11 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (iVar9 < iVar13) {
      bVar3 = local_c4 <= iVar11;
      if (local_c4 <= iVar11) {
        iVar11 = local_c4;
      }
      if ((local_d9 & bVar3) != 0) goto LAB_142f5df55;
    }
    iVar11 = iVar11 * (int)local_b8;
    iVar14 = iVar11 + (int)local_b8;
    iVar4 = iVar13;
    if (iVar14 < iVar13) {
      iVar4 = iVar14;
    }
    iVar10 = iVar11;
    if (iVar11 < iVar4) {
      do {
        FUN_142f5daec(uVar2,iVar10);
        iVar10 = iVar10 + 1;
      } while (iVar4 != iVar10);
    }
    plVar5 = local_d0;
    if (iVar11 < iVar13) {
      LOCK();
      piVar1 = (int *)(*local_d0 + 0x24);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        uVar12 = CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
        if (local_da == 0) {
          (**(code **)(*(longlong *)**(undefined8 **)(*local_d0 + 0x48) + 0x10))();
        }
        goto LAB_142f5df57;
      }
    }
    if (iVar14 < iVar13 && bVar15) {
      QueryPerformanceCounter(&local_88);
      auVar17._0_8_ = ((double)local_88.QuadPart * DAT_14c83f420 + 16777216.0) * 10000000.0 + 0.5;
      auVar17._8_8_ = 0;
      auVar18 = roundpd(auVar17,auVar17,1);
      if (local_d8 < (longlong)auVar18._0_8_ - local_c0) {
        *(undefined1 *)((longlong)plVar5 + 0xc) = 1;
LAB_142f5df55:
        uVar12 = 0;
LAB_142f5df57:
        if (local_98 == '\0') {
          local_98 = '\x01';
          *(int *)(local_b0 + 4) = *(int *)(local_b0 + 4) + -1;
          if (local_a0 != local_b0[2]) {
            FUN_14004673c();
          }
          *local_b0 = local_a8;
          local_b0[3] = local_90;
        }
        if ((local_80 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        return uVar12 & 0xffffffff;
      }
    }
    else if (iVar13 <= iVar14) goto LAB_142f5df55;
    lVar8 = *plVar5;
  } while( true );
}



// FUNCTION 142f5e030 FUN_142f5e030 body=73 status=ok
// SIG undefined FUN_142f5e030(void)

void FUN_142f5e030(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    if (*(char *)((longlong)param_1 + 0xc) == '\x01') {
      FUN_142f5e954(param_1,(int)param_1[1]);
      puVar2 = (undefined8 *)*param_1;
      if (puVar2 == (undefined8 *)0x0) {
        return;
      }
    }
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142f5e06f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 142f5e07a FUN_142f5e07a body=1056 status=ok
// SIG undefined FUN_142f5e07a(void)

void FUN_142f5e07a(longlong param_1,longlong param_2,undefined4 param_3)

{
  uint uVar1;
  byte bVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  undefined4 uVar15;
  byte bVar16;
  ulonglong uVar17;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  byte local_d0;
  byte local_c8;
  undefined1 local_c0;
  undefined1 local_b8;
  byte local_b0;
  undefined1 local_a8;
  undefined1 local_a0;
  int local_98;
  undefined1 local_89;
  undefined4 local_88;
  undefined4 local_84;
  longlong local_80;
  undefined8 local_78;
  int local_70;
  ushort local_62;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((longlong)*(int *)(param_2 + 0xb0) < 1) {
LAB_142f5e412:
    if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  lVar12 = *(longlong *)(param_2 + 0xa8);
  if (*(longlong *)(param_2 + 0xa8) == 0) {
    lVar12 = param_2;
  }
  lVar10 = 0;
  while( true ) {
    lVar6 = lVar12 + lVar10 * 0xa8;
    uVar1 = *(uint *)(lVar12 + 0x7c + lVar10 * 0xa8);
    if (((uVar1 >> 10 & 1) == 0) || (lVar11 = *(longlong *)(lVar6 + 0x30), lVar11 == 0)) break;
    if ((ulonglong)*(uint *)(lVar6 + 0x60) != 0) {
      uVar17 = 0;
      iVar13 = 0;
      do {
        iVar13 = iVar13 + ((*(int *)(lVar11 + (ulonglong)((int)uVar17 + 1) * 4) -
                           *(int *)(lVar11 + (uVar17 & 0xffffffff) * 4)) + 1) *
                          *(int *)(lVar6 + 0x5c);
        uVar17 = uVar17 + 2;
      } while ((ulonglong)*(uint *)(lVar6 + 0x60) * 2 != uVar17);
      goto LAB_142f5e132;
    }
LAB_142f5e136:
    if (((uVar1 >> 0xd & 1) != 0) || (*(longlong *)(lVar6 + 0x48) != 0)) goto LAB_142f5e151;
    lVar10 = lVar10 + 1;
    if (lVar10 == *(int *)(param_2 + 0xb0)) goto LAB_142f5e412;
  }
  iVar13 = *(int *)(lVar6 + 0x60) * *(int *)(lVar6 + 0x5c);
LAB_142f5e132:
  if (iVar13 < 1) goto LAB_142f5e136;
LAB_142f5e151:
  lVar12 = *(longlong *)(param_1 + 8);
  lVar10 = *(longlong *)(lVar12 + 8);
  iVar13 = *(int *)(*(longlong *)(lVar12 + 0x148) + 8);
  iVar5 = *(int *)(lVar12 + 0x48);
  *(uint *)(lVar12 + 0x48) = iVar5 + 1U;
  if (*(uint *)(lVar12 + 0x4c) < iVar5 + 1U) {
    FUN_14177511e((longlong *)(lVar12 + 0x40),iVar5);
  }
  lVar12 = (longlong)iVar5 * 0x100 + *(longlong *)(lVar12 + 0x40);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    uVar15 = 0xffffffff;
  }
  else {
    uVar15 = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x18);
  }
  FUN_1417830e8(lVar12,*(undefined8 *)(param_1 + 8),param_2,uVar15);
  if (((((iVar13 < 3) || ((ulonglong)DAT_14ca85550 == 0xc)) ||
       (lVar6 = (ulonglong)DAT_14ca85550 * 0x3c,
       *(longlong *)(&DAT_14ca814b0 + lVar6) == DAT_14ca81490)) ||
      (((*(byte *)((longlong)&DAT_14ca814d8 + lVar6 + 3) & 0x10) != 0 &&
       ((*(byte *)((longlong)&DAT_14ca814c8 + lVar6 + 3) & 0x20) == 0)))) &&
     (iVar5 = *(int *)(lVar12 + 0xb0), 0 < iVar5)) {
    lVar6 = 0;
    lVar11 = 0;
    do {
      lVar14 = *(longlong *)(lVar12 + 0xa8);
      if (*(longlong *)(lVar12 + 0xa8) == 0) {
        lVar14 = lVar12;
      }
      if (*(longlong *)(lVar14 + 8 + lVar6) == 0 && *(longlong *)(lVar14 + lVar6) == 0) {
        *(undefined8 *)(lVar14 + lVar6) = *(undefined8 *)(lVar10 + 0x250);
        iVar5 = *(int *)(lVar12 + 0xb0);
      }
      lVar11 = lVar11 + 1;
      lVar6 = lVar6 + 0xa8;
    } while (lVar11 < iVar5);
  }
  uVar7 = FUN_1417e9863(lVar12,iVar13);
  if ((char)uVar7 == '\0') {
    local_84 = 0;
  }
  else {
    local_84 = (undefined4)
               CONCAT71((int7)((ulonglong)uVar7 >> 8),(*(byte *)(lVar10 + 0x72) & 1) == 0);
  }
  local_80 = lVar10;
  plVar8 = (longlong *)FUN_14485b2b4(*(undefined8 *)(param_2 + 0xc0),iVar13);
  local_89 = (**(code **)(*plVar8 + 0x368))(plVar8);
  (**(code **)(*plVar8 + 0x288))(plVar8,&local_78);
  bVar2 = local_78._1_1_;
  (**(code **)(*plVar8 + 0x288))(plVar8,&local_62);
  local_78 = (undefined8 *)0x0;
  local_70 = 2;
  bVar16 = 0;
  FUN_14470b5ae(&local_78,2);
  *local_78 = 0x400000001;
  if ((longlong)local_70 != 0) {
    lVar10 = 0;
    do {
      if ((local_62 >> (*(uint *)((longlong)local_78 + lVar10) & 0x1f) & 1) != 0) {
        if (plVar8[3] != 0) {
          bVar16 = (*(byte *)(*(longlong *)(plVar8[3] + 0x28) + 0x247) & 8) >> 3;
          goto LAB_142f5e2f8;
        }
        break;
      }
      lVar10 = lVar10 + 4;
    } while ((longlong)local_70 * 4 != lVar10);
    bVar16 = 0;
  }
LAB_142f5e2f8:
  if (local_78 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  uVar3 = FUN_143658bc0(*(undefined8 *)(lVar12 + 0xb8),local_80,*(undefined8 *)(param_2 + 0xc0),
                        iVar13);
  local_80 = CONCAT71(local_80._1_7_,uVar3);
  plVar9 = *(longlong **)(lVar12 + 0xb8);
  lVar10 = (**(code **)(*plVar9 + 0x30))(plVar9);
  if ((*(byte *)(lVar10 + 0x28) & 0x80) == 0) {
    local_88 = 0;
  }
  else {
    local_88 = (undefined4)CONCAT71((int7)((ulonglong)lVar10 >> 8),(char)plVar9[0x25] != -1);
  }
  uVar1 = *(uint *)(param_2 + 0xe8);
  plVar9 = (longlong *)FUN_14485b2b4(*(undefined8 *)(param_2 + 0xc0),iVar13);
  cVar4 = (**(code **)(*plVar9 + 0xe8))(plVar9);
  if (cVar4 == '\0') {
    local_a0 = 0;
  }
  else {
    local_a0 = FUN_1408d5de1(plVar8,iVar13);
  }
  lVar10 = *(longlong *)(param_1 + 8);
  iVar5 = *(int *)(lVar10 + 0x38);
  *(uint *)(lVar10 + 0x38) = iVar5 + 1U;
  if (*(uint *)(lVar10 + 0x3c) < iVar5 + 1U) {
    FUN_14177521e((longlong *)(lVar10 + 0x30),iVar5);
  }
  local_d0 = bVar2 >> 2 & 1;
  local_a8 = (undefined1)((uVar1 & 2) >> 1);
  local_b0 = (byte)uVar1 & 1;
  local_b8 = (undefined1)local_88;
  local_c0 = (undefined1)local_80;
  local_d8 = local_89;
  local_c8 = bVar16;
  local_98 = iVar13;
  FUN_1402db494((longlong)iVar5 * 0x18 + *(longlong *)(lVar10 + 0x30),lVar12,param_3,local_84);
  goto LAB_142f5e412;
}



// FUNCTION 142f5e49c FUN_142f5e49c body=434 status=ok
// SIG undefined FUN_142f5e49c(void)

undefined8 * FUN_142f5e49c(undefined8 *param_1,int param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  int *piVar3;
  undefined4 uVar4;
  longlong lVar5;
  int *piVar6;
  
  *param_1 = &PTR_FUN_14a2d35e0;
  lVar2 = param_1[0xb];
  if ((longlong)*(int *)(param_1 + 0xc) == 0) {
    uVar4 = 0;
  }
  else {
    lVar5 = 0;
    do {
      param_3 = *(longlong *)(lVar2 + 0x40 + lVar5);
      if (param_3 != -1) {
        param_3 = *(longlong *)(lVar2 + 0x40 + lVar5);
      }
      lVar5 = lVar5 + 0x48;
    } while ((longlong)*(int *)(param_1 + 0xc) * 0x48 != lVar5);
    uVar4 = *(undefined4 *)(param_1 + 0xc);
    lVar2 = param_1[0xb];
  }
  FUN_142f5e924(lVar2,uVar4,param_3);
  if (param_1[0xb] != 0) {
    piVar6 = (int *)(param_1[0xb] & 0xffffffffffff0000);
    LOCK();
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (*piVar6 == 0) {
      piVar3 = piVar6;
      if (*(longlong *)(piVar6 + 0x10) - (longlong)piVar6 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_142f5b241);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        piVar3 = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar6;
        if (piVar3 == (int *)0x0) goto LAB_142f5e566;
      }
      _aligned_free(piVar3);
    }
  }
LAB_142f5e566:
  *param_1 = &PTR_FUN_149e002e8;
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar6 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (*piVar6 == 0) {
      piVar3 = piVar6;
      if (*(longlong *)(piVar6 + 0x10) - (longlong)piVar6 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_142f5b241);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        piVar3 = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar6;
        if (piVar3 == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(piVar3);
    }
  }
  return param_1;
}



// FUNCTION 142f5e64e FUN_142f5e64e body=57 status=ok
// SIG undefined FUN_142f5e64e(void)

void FUN_142f5e64e(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x40);
    do {
      puVar1[-3] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateDummy::vftable;
      puVar1[-2] = 0;
      puVar1[-1] = 0xe800000000000020;
      *puVar1 = 0xffffffffffffffff;
      puVar1 = puVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 142f5e688 FUN_142f5e688 body=667 status=ok
// SIG undefined FUN_142f5e688(void)

void FUN_142f5e688(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *_Src;
  longlong lVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  int *_Memory;
  uint *puVar9;
  int *piVar10;
  void *_Dst;
  
  uVar7 = *(uint *)(param_1 + 1);
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar7) {
      uVar3 = uVar7;
    }
  }
  else {
    uVar3 = (int)((ulonglong)uVar7 * 3 >> 3) + uVar7 + 0x10;
  }
  uVar8 = 0x7fffffff;
  if ((int)uVar7 <= (int)uVar3) {
    uVar8 = (ulonglong)uVar3;
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar8;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar8,0x48);
  }
  uVar8 = uVar8 * 0x48;
  _Src = (void *)*param_1;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308);
  puVar5 = (uint *)*puVar1;
  if (puVar5 != (uint *)0x0) goto LAB_142f5e783;
  while( true ) {
    uVar7 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318);
    if ((uVar7 & 1) == 0) {
      *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x318) = uVar7 | 1;
      __tlregdtor(&LAB_142f5b241);
    }
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar4 = *(undefined4 **)(lVar2 + 0x310);
    *(undefined8 *)(lVar2 + 0x310) = 0;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = _aligned_malloc(0x10000,0x10000);
    }
    *puVar4 = 0xffffffff;
    *(undefined4 **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    FUN_140217a48(puVar1);
    puVar5 = (uint *)*puVar1;
LAB_142f5e783:
    _Dst = (void *)(*(longlong *)(puVar5 + 0x10) + 7U & 0xfffffffffffffff8);
    puVar9 = (uint *)((longlong)_Dst + uVar8);
    uVar7 = puVar5[0x12];
    if (puVar9 <= puVar5 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar5 + 0x10) = puVar5 + 0x4000;
      LOCK();
      uVar3 = *puVar5;
      *puVar5 = *puVar5 + uVar7 + 1;
      UNLOCK();
      if ((uVar3 ^ uVar7) != 0xffffffff) break;
      puVar5 = (uint *)*puVar1;
      *puVar5 = 0xffffffff;
      *(uint **)(puVar5 + 0x10) = puVar5 + 0x16;
      puVar5[0x12] = 0;
      *puVar1 = puVar5;
      _Dst = (void *)((longlong)puVar5 + 0x5fU & 0xfffffffffffffff8);
      puVar9 = (uint *)((longlong)_Dst + uVar8);
      uVar7 = 0;
      if (puVar9 <= puVar5 + 0x4000) {
        uVar7 = 1;
        goto LAB_142f5e7fd;
      }
    }
  }
  uVar7 = uVar7 + 1;
LAB_142f5e7fd:
  *(uint **)(puVar5 + 0x10) = puVar9;
  puVar5[0x12] = uVar7;
  uVar6 = ((longlong)_Src + 0xffffU & 0xffffffffffff0000) - (longlong)_Src;
  if (uVar6 == 0 || _Src == (void *)0x0) {
    if (_Src == (void *)0x0) goto LAB_142f5e8a4;
  }
  else {
    if (uVar6 < uVar8) {
      uVar8 = uVar6;
    }
    memcpy(_Dst,_Src,uVar8);
  }
  piVar10 = (int *)((ulonglong)_Src & 0xffffffffffff0000);
  LOCK();
  *piVar10 = *piVar10 + -1;
  UNLOCK();
  if (*piVar10 == 0) {
    _Memory = piVar10;
    if (*(longlong *)(piVar10 + 0x10) - (longlong)piVar10 == 0x10000) {
      uVar7 = *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
      if ((uVar7 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar7 | 1;
        __tlregdtor(&LAB_142f5b241);
      }
      lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      _Memory = *(int **)(lVar2 + 0x310);
      *(int **)(lVar2 + 0x310) = piVar10;
      if (_Memory == (int *)0x0) goto LAB_142f5e8a4;
    }
    _aligned_free(_Memory);
  }
LAB_142f5e8a4:
  *param_1 = _Dst;
  return;
}



// FUNCTION 142f5e924 FUN_142f5e924 body=47 status=ok
// SIG undefined FUN_142f5e924(void)

void FUN_142f5e924(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x28);
    do {
      (**(code **)(*plVar1 + 0x18))(plVar1,plVar1 + -5);
      plVar1 = plVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 142f5e954 FUN_142f5e954 body=369 status=ok
// SIG undefined FUN_142f5e954(void)

void FUN_142f5e954(longlong *param_1,int param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  byte bVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  int local_50;
  undefined1 local_4c;
  undefined8 local_48;
  int local_40;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar2 = (longlong *)(*(longlong *)(*param_1 + 0x58) + (longlong)param_2 * 0x48);
  uVar4 = *(ulonglong *)(*param_1 + 0x18);
  bVar3 = *(byte *)(*param_1 + 0x50);
  uVar6 = (ulonglong)bVar3;
  LOCK();
  plVar2[8] = -1;
  UNLOCK();
  lVar5 = *param_1;
  *param_1 = 0;
  local_4c = 0;
  local_58 = 0;
  local_3c = 0;
  local_50 = param_2;
  local_40 = param_2;
  (**(code **)(plVar2[5] + 0x18))(plVar2 + 5,plVar2);
  plVar2[5] = (longlong)&PTR_FUN_14a2d35f0;
  *plVar2 = lVar5;
  local_48 = 0;
  *(undefined1 *)((longlong)plVar2 + 0xc) = local_4c;
  *(int *)(plVar2 + 1) = local_50;
  FUN_142f5e030(&local_48);
  lVar5 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8);
  if (lVar5 == 0) {
    uVar6 = 1;
    if (bVar3 != 6) {
      uVar6 = (ulonglong)bVar3;
    }
    lVar5 = 0;
  }
  else {
    if (bVar3 == 6) {
      uVar6 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
    }
    lVar5 = *(longlong *)(lVar5 + 0x30);
  }
  plVar2[6] = lVar5;
  plVar2[7] = uVar6 << 0x3b | (uVar4 & 0x1fffffffffffff) << 6 | 0xc000000000000000;
  FUN_142f5e030(&local_58);
  LOCK();
  puVar1 = (ulonglong *)(plVar2 + 7);
  uVar4 = *puVar1;
  *puVar1 = *puVar1 | 2;
  UNLOCK();
  if ((uVar4 >> 1 & 1) != 0) {
    if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
}



// FUNCTION 142f5eae4 FUN_142f5eae4 body=450 status=ok
// SIG undefined FUN_142f5eae4(void)

void FUN_142f5eae4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  uint param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  uint *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint *puVar8;
  
  if (((ulonglong)param_3 & 7) == 0 && 0xf < param_5) {
    *param_2 = &PTR_FUN_14a2d35f0;
    puVar6 = param_3;
  }
  else {
    *param_2 = &PTR_LAB_14a2d3630;
    puVar1 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x330
             );
    puVar5 = (uint *)*puVar1;
    if (puVar5 != (uint *)0x0) goto LAB_142f5ebc1;
    while( true ) {
      uVar7 = *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
      if ((uVar7 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar7 | 1;
        __tlregdtor(&LAB_142f5b241);
      }
      lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar4 = *(undefined4 **)(lVar3 + 0x310);
      *(undefined8 *)(lVar3 + 0x310) = 0;
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar4 = 0xffffffff;
      *(undefined4 **)(puVar4 + 0x10) = puVar4 + 0x16;
      puVar4[0x12] = 0;
      *puVar1 = puVar4;
      FUN_1467aa772(puVar1);
      puVar5 = (uint *)*puVar1;
LAB_142f5ebc1:
      puVar6 = (undefined8 *)(*(longlong *)(puVar5 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar8 = (uint *)(puVar6 + 2);
      uVar7 = puVar5[0x12];
      if (puVar8 <= puVar5 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar5 + 0x10) = puVar5 + 0x4000;
        LOCK();
        uVar2 = *puVar5;
        *puVar5 = *puVar5 + uVar7 + 1;
        UNLOCK();
        if ((uVar2 ^ uVar7) != 0xffffffff) break;
        puVar5 = (uint *)*puVar1;
        *puVar5 = 0xffffffff;
        *(uint **)(puVar5 + 0x10) = puVar5 + 0x16;
        puVar5[0x12] = 0;
        *puVar1 = puVar5;
        puVar6 = (undefined8 *)((longlong)puVar5 + 0x5fU & 0xfffffffffffffff8);
        puVar8 = (uint *)(puVar6 + 2);
        uVar7 = 0;
        if (puVar8 <= puVar5 + 0x4000) {
          uVar7 = 1;
          goto LAB_142f5ec3b;
        }
      }
    }
    uVar7 = uVar7 + 1;
LAB_142f5ec3b:
    *(uint **)(puVar5 + 0x10) = puVar8;
    puVar5[0x12] = uVar7;
    *param_3 = puVar6;
  }
  *puVar6 = *param_4;
  *param_4 = 0;
  *(undefined1 *)((longlong)puVar6 + 0xc) = *(undefined1 *)((longlong)param_4 + 0xc);
  *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(param_4 + 1);
  *param_1 = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
             TTaskDelegateDummy::vftable;
  return;
}



// FUNCTION 142f5eca6 FUN_142f5eca6 body=26 status=ok
// SIG undefined FUN_142f5eca6(void)

undefined8 FUN_142f5eca6(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 != '\0') {
    FUN_142f5dc9e(param_2,0);
  }
  return 0;
}



// FUNCTION 142f5ecc0 FUN_142f5ecc0 body=72 status=ok
// SIG undefined FUN_142f5ecc0(void)

undefined8
FUN_142f5ecc0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4,char param_5
             )

{
  if (param_5 != '\0') {
    FUN_142f5dc9e(param_3,0);
  }
  FUN_142f5eae4(param_1,param_2 + 0x28,param_2,param_3,param_4);
  return 0;
}



// FUNCTION 142f5ed3a FUN_142f5ed3a body=26 status=ok
// SIG undefined FUN_142f5ed3a(void)

undefined8 FUN_142f5ed3a(undefined8 param_1,undefined8 *param_2,char param_3)

{
  if (param_3 != '\0') {
    FUN_142f5dc9e(*param_2,0);
  }
  return 0;
}



// FUNCTION 142f5ed54 FUN_142f5ed54 body=70 status=ok
// SIG undefined FUN_142f5ed54(void)

undefined8
FUN_142f5ed54(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             char param_5)

{
  if (param_5 != '\0') {
    FUN_142f5dc9e(*param_3,0);
  }
  param_2[5] = &PTR_LAB_14a2d3630;
  *param_2 = *param_3;
  *param_1 = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
             TTaskDelegateDummy::vftable;
  return 0;
}



// FUNCTION 142f5ed9a FUN_142f5ed9a body=179 status=ok
// SIG undefined FUN_142f5ed9a(void)

void FUN_142f5ed9a(undefined8 param_1,ulonglong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  int *_Memory;
  int *piVar4;
  
  uVar2 = *param_2;
  FUN_142f5e030(uVar2);
  if (uVar2 != 0) {
    piVar4 = (int *)(uVar2 & 0xffffffffffff0000);
    LOCK();
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (*piVar4 == 0) {
      _Memory = piVar4;
      if (*(longlong *)(piVar4 + 0x10) - (longlong)piVar4 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_142f5b241);
        }
        lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar3 + 0x310);
        *(int **)(lVar3 + 0x310) = piVar4;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x000142f5ee15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      _aligned_free(_Memory);
      return;
    }
  }
  return;
}



// FUNCTION 142f5ee5c FUN_142f5ee5c body=114 status=ok
// SIG undefined FUN_142f5ee5c(void)

void FUN_142f5ee5c(longlong *param_1,int param_2)

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



// FUNCTION 142f5eece FUN_142f5eece body=4023 status=ok
// SIG undefined FUN_142f5eece(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f5eece(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined *local_70;
  code *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1400b22c2(&local_70,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_70,&DAT_14ca35194);
  if (cVar1 == '\0') {
    _DAT_14ca35194 = 0;
    uRam000000014ca3519c = 0;
  }
  if (local_70 != (undefined *)0x0) {
    FUN_1400020a8();
  }
  local_70._0_4_ = 0x3f800000;
  local_78 = 0x60;
  FUN_140a6b41e(&DAT_14ca351a8,L"r.Upscale.Softness",&local_70,
                L"Amount of sharpening for Gaussian Unsharp filter (r.UpscaleQuality=5). Reduce if ringing is visible\n  1: Normal sharpening (default)\n  0: No sharpening (pure Gaussian)."
               );
  atexit(FUN_142f26374);
  local_70 = (undefined *)CONCAT44(local_70._4_4_,3);
  local_78 = 0x60;
  FUN_14078dbce(&DAT_14ca351c0,L"r.Upscale.Quality",&local_70,
                L"Defines the quality in which ScreenPercentage and WindowedFullscreen scales the 3d rendering.\n 0: Nearest filtering\n 1: Simple Bilinear\n 2: Directional blur with unsharp mask upsample.\n 3: 5-tap Catmull-Rom bicubic, approximating Lanczos 2. (default)\n 4: 13-tap Lanczos 3.\n 5: 36-tap Gaussian-filtered unsharp mask (very expensive, but good for extreme upsampling).\n"
               );
  atexit(FUN_142f263b9);
  local_68 = FUN_145f57bee;
  local_70 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca352f0,&local_70);
  local_68 = FUN_145e1a52c;
  local_70 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca35418,&local_70);
  local_68 = FUN_145e92c36;
  local_70 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca35540,&local_70);
  local_68 = FUN_145f581e4;
  local_70 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca35688,&local_70);
  local_70 = (undefined *)CONCAT44(local_70._4_4_,0x3f800000);
  local_78 = 0x20;
  FUN_140a6b41e(&DAT_14ca35698,L"r.EyeAdaptation.VisualizeLuminanceScale",&local_70,
                L"Scale applied to output when visualizing luminance.\n");
  atexit(FUN_142f29e4b);
  local_68 = FUN_145f587da;
  local_70 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca357c8,&local_70);
  local_70 = (undefined *)((ulonglong)local_70 & 0xffffffff00000000);
  local_78 = 0x20;
  FUN_14078dbce(&DAT_14ca357d8,L"r.LocalExposure.VisualizeDebugMode",&local_70,
                L"When enabling Show->Visualize->Local Exposure is enabled, this flag controls which mode to use.\n    0: Local Exposure\n    1: Base Luminance\n    2: Detail Luminance\n    3: Valid Bilateral Grid Lookup\n"
               );
  atexit(FUN_142f2bc1f);
  local_68 = FUN_145f58cec;
  local_70 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca35908,&local_70);
  local_68 = FUN_145e931a6;
  local_70 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca35a30,&local_70);
  local_70 = (undefined *)((ulonglong)local_70 & 0xffffffff00000000);
  local_78 = 0x60;
  FUN_14078dbce(&DAT_14ca35a40,L"r.Filter.LoopMode",&local_70,
                L"Controls when to use either dynamic or unrolled loops to iterates over the Gaussian filtering.\nThis passes is used for Gaussian Blur, Bloom and Depth of Field. The dynamic loop allows\nup to 128 samples versus the 32 samples of unrolled loops, but add an additional cost for\nthe loop\'s stop test at every iterations.\n 0: Unrolled loop only (default; limited to 32 samples).\n 1: Fall back to dynamic loop if needs more than 32 samples.\n 2: Dynamic loop only."
               );
  atexit(FUN_142f2c440);
  local_70._0_4_ = 0x3f800000;
  local_78 = 0x60;
  FUN_140a6b41e(&DAT_14ca35a58,L"r.Filter.SizeScale",&local_70,
                L"Allows to scale down or up the sample count used for bloom and Gaussian depth of field (scale is clamped to give reasonable results).\nValues down to 0.6 are hard to notice\n 1 full quality (default)\n >1 more samples (slower)\n <1 less samples (faster, artifacts with HDR content or boxy results with GaussianDOF)"
               );
  atexit(FUN_142f2c485);
  local_70 = (undefined *)CONCAT44(local_70._4_4_,0x40e00000);
  local_78 = 0x60;
  FUN_140a6b41e(&DAT_14ca35a70,L"r.FastBlurThreshold",&local_70,
                L"Defines at what radius the Gaussian blur optimization kicks in (estimated 25% - 40% faster).\nThe optimization uses slightly less memory and has a quality loss on smallblur radius.\n  0: use the optimization always (fastest, lowest quality)\n  3: use the optimization starting at a 3 pixel radius (quite fast)\n  7: use the optimization starting at a 7 pixel radius (default)\n>15: barely ever use the optimization (high quality)"
               );
  atexit(FUN_142f2c4ca);
  local_68 = FUN_142f2c510;
  local_70 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca35a88,&local_70);
  local_68 = FUN_142f2c750;
  local_70 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca35a98,&local_70);
  local_68 = FUN_142f2c990;
  local_70 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca35aa8,&local_70);
  _DAT_14ca35ac0 = 0xffffffff;
  _DAT_14ca35ac4 = 0x105;
  DAT_14ca35ac6 = 0;
  DAT_14ca35ac8 = 0;
  DAT_14ca35ab8 = &PTR_FUN_14a2d2c90;
  FUN_146300d3c();
  atexit(FUN_142f2cbd0);
  local_68 = FUN_1472a9d7e;
  local_70 = &DAT_14152059c;
  FUN_14142a670(&DAT_14ca35b58,&local_70);
  local_70._0_4_ = 1;
  local_78 = 0x20;
  FUN_14078dbce(&DAT_14ca35b68,L"r.DrawRectangleOptimization",&local_70,
                L"Controls an optimization for DrawRectangle(). When enabled a triangle can be used to draw a quad in certain situations (viewport sized quad).\nUsing a triangle allows for slightly faster post processing in lower resolutions but can not always be used.\n 0: Optimization is disabled, DrawDenormalizedQuad always render with quad\n 1: Optimization is enabled, a triangle can be rendered where specified (default)"
               );
  atexit(FUN_142f2cc0b);
  local_70._0_4_ = 0x3f800000;
  local_78 = 0x60;
  FUN_140a6b41e(&DAT_14ca35b80,L"r.TemporalAAFilterSize",&local_70,
                L"Size of the filter kernel. (1.0 = smoother, 0.0 = sharper but aliased).");
  atexit(FUN_142f2cf70);
  local_70._0_4_ = 0;
  local_78 = 0x60;
  FUN_14078dbce(&DAT_14ca35b98,L"r.TemporalAACatmullRom",&local_70,
                L"Whether to use a Catmull-Rom filter kernel. Should be a bit sharper than Gaussian."
               );
  atexit(FUN_142f2cfb5);
  local_70._0_4_ = 1;
  local_78 = 0x20;
  FUN_14078dbce(&DAT_14ca35bb0,L"r.TemporalAAPauseCorrect",&local_70,
                L"Correct temporal AA in pause. This holds onto render targets longer preventing reuse and consumes more memory."
               );
  atexit(FUN_142f2cffa);
  local_70._0_4_ = 0x3d23d70a;
  local_78 = 0x60;
  FUN_140a6b41e(&DAT_14ca35bc8,L"r.TemporalAACurrentFrameWeight",&local_70,
                L"Weight of current frame\'s contribution to the history.  Low values cause blurriness and ghosting, high values fail to hide jittering."
               );
  atexit(FUN_142f2d03f);
  local_70._0_4_ = 2;
  local_78 = 0x60;
  FUN_14078dbce(&DAT_14ca35be0,L"r.TemporalAA.Quality",&local_70,
                L"Quality of the main Temporal AA pass.\n 0: Disable input filtering;\n 1: Enable input filtering;\n 2: Enable more input filtering, enable mobility based anti-ghosting (Default)\n 3: Quality 1 input filtering, enable anti-ghosting"
               );
  atexit(FUN_142f2d084);
  local_70._0_4_ = 0x42c80000;
  local_78 = 0x20;
  FUN_140a6b41e(&DAT_14ca35bf8,L"r.TemporalAA.HistoryScreenPercentage",&local_70,
                L"Size of temporal AA\'s history.");
  atexit(FUN_142f2d0c9);
  local_70._0_4_ = 1;
  local_78 = 0x20;
  FUN_14078dbce(&DAT_14ca35c10,L"r.TemporalAA.Upscaler",&local_70,
                L"Choose the upscaling algorithm.\n 0: Forces the default temporal upscaler of the renderer;\n 1: GTemporalUpscaler which may be overridden by a third party plugin (default)."
               );
  atexit(FUN_142f2d10e);
  local_70._0_4_ = 1;
  local_78 = 0x20;
  FUN_14078dbce(&DAT_14ca35c28,L"r.TemporalAA.R11G11B10History",&local_70,
                L"Select the bitdepth of the history.");
  atexit(FUN_142f2d153);
  local_70._0_4_ = 0;
  local_78 = 4;
  FUN_14078dbce(&DAT_14ca35c40,L"r.TemporalAA.UseMobileConfig",&local_70,
                L"1 to use mobile TAA config. This will disable groupshared caching of the color and depth buffers.\n 0: disabled (default);\n 1: enabled;\n"
               );
  atexit(FUN_142f2d198);
  local_70 = (undefined *)CONCAT44(local_70._4_4_,1);
  local_78 = 0x20;
  FUN_14078dbce(&DAT_14ca35c58,L"r.TemporalAA.Mobile.UseCompute",&local_70,
                L" 0: Uses pixel shader to save bandwidth with FBC on tiled gpu;\n 1: Uses compute shader (default);\n"
               );
  atexit(FUN_142f2d1dd);
  local_70 = &DAT_14a2c7ab6;
  local_68 = (code *)CONCAT35(local_68._5_3_,3);
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14ca35c70 = (ulonglong)uVar2;
  local_68 = FUN_142f2d222;
  local_70 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca35c78,&local_70);
  local_68 = FUN_142f2d462;
  local_70 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca35c88,&local_70);
  local_70._0_4_ = 1;
  local_78 = 4;
  FUN_14078dbce(&DAT_14ca35c98,L"r.TSR.Support.LensDistortion",&local_70,
                L"Whether to compile lens distortion support in TSR\'s shaders (adds the lens distortion LUT in the HistoryUpdate pass in branches that even disabled can add a bit of VALU cost when no lens distortion is used).\n 0: unsupported;\n 1: supported only on desktop (default);\n 2: supported everywhere;\n"
               );
  atexit(FUN_142f2ec0a);
  local_70._0_4_ = 0xffffffff;
  local_78 = 0x20;
  FUN_14078dbce(&DAT_14ca35cb0,L"r.TSR.AplhaChannel",&local_70,
                L"Controls whether TSR should process the scene color\'s alpha channel.\n -1: based of r.PostProcessing.PropagateAlpha (default);\n  0: disabled;\n  1: enabled.\n"
               );
  atexit(FUN_142f2ec4f);
  local_70._0_4_ = 0x41800000;
  local_78 = 0x20;
  FUN_140a6b41e(&DAT_14ca35cc8,L"r.TSR.History.SampleCount",&local_70,
                L"Maximum number sample for each output pixel in the history. Higher values means more stability on highlights on static images, but may introduce additional ghosting on firefliers style of VFX. Minimum value supported is 8.0 as TSR was in 5.0 and 5.1. Maximum value possible due to the encoding of the TSR.History.Metadata is 32.0. Defaults to 16.0.\n\nUse \"r.TSR.Visualize 0\" command to see how many samples where accumulated in TSR history on areas of the screen."
               );
  atexit(FUN_142f2ec94);
  local_70._0_4_ = 0x42c80000;
  local_78 = 0x60;
  FUN_140a6b41e(&DAT_14ca35ce0,L"r.TSR.History.ScreenPercentage",&local_70,
                L"Resolution multiplier of the history of TSR based of output resolution. While increasing the resolution adds runtime cost to TSR, it allows to maintain a better sharpness and stability of the details stored in history through out the reprojection.\n\nSetting to 200 brings on a very particular property relying on NyQuist-Shannon sampling theorem that establishes a sufficient condition for the sample rate of the accumulated details in the history. As a result only values between 100 and 200 are supported.\nIt is controlled by default in the anti-aliasing scalability group set to 200 on Epic and Cinematic, 100 otherwise."
               );
  atexit(FUN_142f2ecd9);
  local_70._0_4_ = 1;
  local_78 = 0x60;
  FUN_14078dbce(&DAT_14ca35cf8,L"r.TSR.History.R11G11B10",&local_70,
                L"Select the bitdepth of the history. r.TSR.History.R11G11B10=1 Saves memory bandwidth that is of particular interest of the TSR\'s UpdateHistory\'s runtime performance by saving memory both at previous frame\'s history reprojection and write out of the output and new history.\nThis optimisation is unsupported with r.PostProcessing.PropagateAlpha=True.\n\nPlease also not that increasing r.TSR.History.ScreenPercentage=200 adds 2 additional implicit encoding bits in the history compared to the TSR.Output\'s bitdepth thanks to the downscaling pass from TSR history resolution to TSR output resolution."
               );
  atexit(FUN_142f2ed1e);
  local_70._0_4_ = 3;
  local_78 = 0x60;
  FUN_14078dbce(&DAT_14ca35d10,L"r.TSR.History.UpdateQuality",&local_70,
                L"Selects shader permutation of the quality of the update of the history in the TSR HistoryUpdate pass currently driven by the sg.AntiAliasingQuality scalability group. For further details about what each offers, you are invited to look at DIM_UPDATE_QUALITY in TSRUpdateHistory.usf and customise to your need."
               );
  atexit(FUN_142f2ed63);
  local_70._0_4_ = 1;
  local_78 = 0x20;
  FUN_14078dbce(&DAT_14ca35d28,L"r.TSR.WaveOps",&local_70,
                L"Whether to use wave ops in the shading rejection heuristics to speeds up convolutions.\n\nThe shading rejection heuristic optimisation can be particularily hard for shader compiler and hit bug in them causing corruption/quality loss.\n\nNote this optimisation is currently disabled on SPIRV platforms (mainly Vulkan and Metal) due to 5min+ compilation times in SPIRV backend of DXC which is not great for editor startup."
               );
  atexit(FUN_142f2eda8);
  local_70._0_4_ = 0;
  local_78 = 0x20;
  FUN_14078dbce(&DAT_14ca35d40,L"r.TSR.WaveSize",&local_70,
                L"Overrides the WaveSize to use.\n 0: Automatic (default);\n 16: WaveSizeOps 16;\n 32: WaveSizeOps 32;\n 64: WaveSizeOps 64;\n"
               );
  atexit(FUN_142f2eded);
  local_70._0_4_ = 1;
  local_78 = 0x20;
  FUN_14078dbce(&DAT_14ca35d58,L"r.TSR.16BitVALU",&local_70,
                L"Whether to use 16bit VALU on platform that have bSupportsRealTypes=RuntimeDependent"
               );
  atexit(FUN_142f2ee32);
  local_70._0_4_ = 1;
  local_78 = 0x20;
  FUN_14078dbce(&DAT_14ca35d70,L"r.TSR.16BitVALU.AMD",&local_70,
                L"Overrides whether to use 16bit VALU on AMD desktop GPUs");
  atexit(FUN_142f2ee77);
  local_70._0_4_ = 1;
  local_78 = 0x20;
  FUN_14078dbce(&DAT_14ca35d88,L"r.TSR.16BitVALU.Intel",&local_70,
                L"Overrides whether to use 16bit VALU on Intel desktop GPUs");
  atexit(FUN_142f2eebc);
  local_70._0_4_ = 0;
  local_78 = 0x20;
  FUN_14078dbce(&DAT_14ca35da0,L"r.TSR.16BitVALU.Nvidia",&local_70,
                L"Overrides whether to use 16bit VALU on Nvidia desktop GPUs");
  atexit(FUN_142f2ef01);
  local_70._0_4_ = 0x40000000;
  local_78 = 0x20;
  FUN_140a6b41e(&DAT_14ca35db8,L"r.TSR.ShadingRejection.SampleCount",&local_70,
                L"Maximum number of sample in each output pixel of the history after total shading rejection.\n\nLower values means higher clarity of the image after shading rejection of the history, but at the trade of higher instability of the pixel on following frames accumulating new details which can be distracting to the human eye (Defaults to 2.0)."
               );
  atexit(FUN_142f2ef46);
  local_70._0_4_ = 1;
  local_78 = 0x60;
  FUN_14078dbce(&DAT_14ca35dd0,L"r.TSR.ShadingRejection.Flickering",&local_70,
                L"Instability in TSR output 99% of the time coming from instability of the shading rejection, for different reasons:\n - One first source of instability is most famously moire pattern between structured geometry and the rendering pixel grid changing every frame due to the offset of the jittering pixel grid offset;\n - Another source of instability can happen on extrem geometric complexity due to temporal history\'s chicken-and-egg problem that can not be overcome by other mechanisms in place in TSR\'s RejectHistory pass: how can the history be identical to rendered frame if the amount of details you have in the rendered frame is not in history? how can the history accumulate details if the history is too different from the rendered frame?\n\nWhen enabled, this flickering temporal analysis monitor how the luminance of the scene right before any translucency drawing stored in the TSR.Flickering.Luminance resource how it involves over successive frames. And if it is detected to constantly flicker regularily above a certain threshold defined with this r.TSR.ShadingRejection.Flickering.* cvars, the heuristic attempts to stabilize the image by letting ghost within luminance boundary tied to the amplititude of flickering.\n\nUse \"r.TSR.Visualize 7\" command to see on screen where this heuristic quicks in orange and red. Pink is where it is disabled.\n\nOne particular caveat of this heuristic is that any opaque geometry with incorrect motion vector can make a pixel look identically flickery quicking this heuristic in and leaving undesired ghosting effects on the said geometry. When that happens, it is highly encourage to verify the motion vector through the VisualizeMotionBlur show flag and how these motion vectors are able to reproject previous frame with the VisualizeReprojection show flag.\n\nThe variable to countrol the frame frequency at which a pixel is considered flickery and needs to be stabilized with this heuristic is defined with the r.TSR.ShadingRejection.Flickering.Period in frames. For instance, a value r.TSR.ShadingRejec..." /* TRUNCATED STRING LITERAL */
               );
  atexit(FUN_142f2ef8b);
  local_70._0_4_ = 0x42700000;
  local_78 = 0x60;
  FUN_140a6b41e(&DAT_14ca35de8,L"r.TSR.ShadingRejection.Flickering.FrameRateCap",&local_70,
                L"Framerate cap in hertz at which point there is automatic adjustment of r.TSR.ShadingRejection.Flickering.Period when the rendering frame rate is lower. Please read r.TSR.ShadingRejection.Flickering\'s help for further details. (Default to 60hz)"
               );
  atexit(FUN_142f2efd0);
  local_70._0_4_ = 1;
  local_78 = 0x60;
  FUN_14078dbce(&DAT_14ca35e00,L"r.TSR.ShadingRejection.Flickering.AdjustToFrameRate",&local_70,
                L"Whether r.TSR.ShadingRejection.Flickering.Period settings should adjust to frame rate when below r.TSR.ShadingRejection.Flickering.FrameRateCap. Please read r.TSR.ShadingRejection.Flickering\'s help for further details. (Enabled by default)."
               );
  atexit(FUN_142f2f015);
  local_70._0_4_ = 0x40000000;
  local_78 = 0x20;
  FUN_140a6b41e(&DAT_14ca35e18,L"r.TSR.ShadingRejection.Flickering.Period",&local_70,
                L"Periode in frames in which luma oscilations at equal or greater frequency is considered flickering and should ghost to stabilize the image Please read r.TSR.ShadingRejection.Flickering\'s help for further details. (Default to 3 frames)."
               );
  atexit(FUN_142f2f05a);
  local_70._0_4_ = 0x41200000;
  local_78 = 0x20;
  FUN_140a6b41e(&DAT_14ca35e30,L"r.TSR.ShadingRejection.Flickering.MaxParallaxVelocity",&local_70,
                L"Some material might for instance might do something like parallax occlusion mapping such as CitySample\'s buildings\' window\'s interiors. This often can not render accurately a motion vector of this fake interior geometry and therefore make the heuristic believe it is in fact flickering.\n\nThis variable define the parallax velocity in 1080p pixel at frame rate defined by r.TSR.ShadingRejection.Flickering.FrameRateCap at which point the heuristic should be disabled to not ghost. \n(Default to 10 pixels 1080p).\n"
               );
  atexit(FUN_142f2f09f);
  local_70._0_4_ = 3;
  local_78 = 0x20;
  FUN_14078dbce(&DAT_14ca35e48,L"r.TSR.ShadingRejection.TileOverscan",&local_70,
                L"The shading rejection run a network of convolutions on the GPU all in single 32x32 without roundtrip to main video memory. However chaining many convlutions in this tiles means that some convolutions on the edge arround are becoming corrupted and therefor need to overlap the tile by couple of padding to hide it. Higher means less prones to tiling artifacts, but performance loss."
               );
  atexit(FUN_142f2f0e4);
  local_70._0_4_ = 1;
  local_78 = 0x20;
  FUN_14078dbce(&DAT_14ca35e60,L"r.TSR.LensDistortion",&local_70,
                L"Whether to apply lens distortion in TSR at runtime (enabled by default, requires r.TSR.Support.LensDistortion enabled at cook time)."
               );
  atexit(FUN_142f2f129);
  local_70._0_4_ = 3;
  local_78 = 0x60;
  FUN_14078dbce(&DAT_14ca35e78,L"r.TSR.RejectionAntiAliasingQuality",&local_70,
                L"Controls the quality of TSR\'s built-in spatial anti-aliasing technology when the history needs to be rejected. While this may not be critical when the rendering resolution is not much lowered than display resolution, this technic however becomes essential to hide lower rendering resolution rendering because of two reasons:\n - the screen space size of aliasing is inverse proportional to rendering resolution;\n - rendering at lower resolution means need more frame to reach at least 1 rendered pixel per display pixel.\n\nUse \"r.TSR.Visualize 6\" command to see on screen where the spatial anti-aliaser quicks in green.\n\nBy default, it is only disabled by default in the low anti-aliasing scalability group."
               );
  atexit(FUN_142f2f16e);
  local_70._0_4_ = 0;
  local_78 = 0x60;
  FUN_14078dbce(&DAT_14ca35e90,L"r.TSR.Resurrection",&local_70,
                L"Allows TSR to resurrect previously discarded details from many frames ago.\n\nWhen enabled, the entire frames of the TSR are stored in a same unique Texture2DArray including a configurable number of persistent frame (defined by r.TSR.Resurrection.PersistentFrameCount) that are occasionally recorded (defined by r.TSR.Resurrection.PersistentFrameInterval).\nThen every frame, TSR will attempt to reproject either previous frame, or the oldest persistent frame available based which matches best the current frames. The later option will happen when something previously seen by TSR shows up again (no matter through parallax disocclusion, shading changes, translucent VFX moving) which will have the advantage bypass the need to newly accumulate a second time by simply resurrected the previously accumulated details.\n\nCommand \"r.TSR.Visualize 4\" too see parts of the screen is being resurrected by TSR in green.\nCommand \"r.TSR.Visualize 5\" too see the oldest frame being possibly resurrected.\n\nCurrently experimental and disabled by default."
               );
  atexit(FUN_142f2f1b3);
  local_70._0_4_ = 2;
  local_78 = 0x20;
  FUN_14078dbce(&DAT_14ca35ea8,L"r.TSR.Resurrection.PersistentFrameCount",&local_70,
                L"Configures the number of persistent frame to record in history for futur history resurrection. This will increase the memory footprint of the entire TSR history. Must be an even number greater or equal to 2. (default=2)"
               );
  atexit(FUN_142f2f1f8);
  local_70._0_4_ = 0x1f;
  local_78 = 0x20;
  FUN_14078dbce(&DAT_14ca35ec0,L"r.TSR.Resurrection.PersistentFrameInterval",&local_70,
                L"Configures in number of frames how often persistent frame should be recorded in history for futur history resurrection. This has no implication on memory footprint of the TSR history. Must be an odd number greater or equal to 1. Uses the VisualizeTSR show flag and r.TSR.Visualize=5 to tune this parameter to your content. (default=31)"
               );
  atexit(FUN_142f2f23d);
  local_70._0_4_ = 2;
  local_78 = 0x20;
  FUN_14078dbce(&DAT_14ca35ed8,L"r.TSR.AsyncCompute",&local_70,
                L"Controls how TSR run on async compute. Some TSR passes can overlap with previous passes.\n 0: Disabled;\n 1: Run on async compute only passes that are completly independent from any intermediary resource of this frame, namely ClearPrevTextures and ForwardScatterDepth passes;\n 2: Run on async compute only passes that are completly independent or only dependent on the depth and velocity buffer which can overlap for instance with translucency or DOF. Any passes on critical path remains on the graphics queue (default);\n 3: Run all passes on async compute;"
               );
  atexit(FUN_142f2f282);
  local_70._0_4_ = 0;
  local_78 = 0x60;
  FUN_14078dbce(&DAT_14ca35ef0,L"r.TSR.ReprojectionField",&local_70,
                L"Enables TSR\'s reprojection field for higher reprojection vector upscale and dilate quality (Enabled by default on high, epic and cinematic anti-aliasing quality).\n\nWhen the reprojection fields is enabled, it dilates the reprojection vector by half spatially anti-aliased rendering pixel from the depth buffer, instead by a full rendering pixel in dilate velocity pass. This allows hide the rendering resolution due whenever velocity buffer ends up extruding some object to edges, for instance when rotating. This come at the cost of spatial anti-aliasing in the DilateVelocity pass as well as an extra dependent texture fetches right at the begining of the HistoryUpdate pass.\n\nThe reprojection field also embeds a jacobian 2x2 matrix for each pixel to have more precise reprojection of the historyfor the display pixels in the rendering pixels. This for instance allows to maintains sharp geometric edges on movements."
               );
  atexit(FUN_142f2f2c7);
  local_70._0_4_ = 0x3e000000;
  local_78 = 0x20;
  FUN_140a6b41e(&DAT_14ca35f08,L"r.TSR.ReprojectionField.AntiAliasPixelSpeed",&local_70,
                L"Defines the output pixel velocity at which point the dilation should be spatial anti-aliased based of the depth buffer to avoid reprojection aliasing by extrusion on fast geometric edges (Default to 0.125, best tuned with r.TSR.Visualize=11)."
               );
  atexit(FUN_142f2f30c);
  local_70._0_4_ = 0x40800000;
  local_78 = 0x20;
  FUN_140a6b41e(&DAT_14ca35f20,L"r.TSR.Velocity.WeightClampingSampleCount",&local_70,
                L"Number of sample to count to in history pixel to clamp history to when output pixel velocity reach r.TSR.Velocity.WeightClampingPixelSpeed. Higher value means higher stability on movement, but at the expense of additional blur due to successive convolution of each history reprojection.\n\nUse \"r.TSR.Visualize 0\" command to see how many samples where accumulated in TSR history on areas of the screen.\n\nPlease note this clamp the sample count in history pixel, not output pixel, and therefore lower values are by designed less noticeable with higher r.TSR.History.ScreenPercentage. This is done so such that increasing r.TSR.History.ScreenPercentage uniterally & automatically give more temporal stability and maintaining sharpness of the details reprojection at the expense of that extra runtime cost regardless of this setting.\n\nA story telling game might preferer to keep this 4.0 for a \'cinematic look\' whereas a competitive game like Fortnite would preferer to lower that to 2.0. (Default = 4.0f)."
               );
  atexit(FUN_142f2f351);
  local_70._0_4_ = 0x3f800000;
  local_78 = 0x20;
  FUN_140a6b41e(&DAT_14ca35f38,L"r.TSR.Velocity.WeightClampingPixelSpeed",&local_70,
                L"Defines the output pixel velocity at which the the high frequencies of the history get\'s their contributing weight clamped. It\'s basically to lerp the effect of r.TSR.Velocity.WeightClampingSampleCount when the pixel velocity get smaller than r.TSR.Velocity.WeightClampingPixelSpeed. (Default = 1.0f)."
               );
  atexit(FUN_142f2f396);
  local_70 = (undefined *)CONCAT44(local_70._4_4_,0xf00);
  local_78 = 0x20;
  FUN_14078dbce(&DAT_14ca35f50,L"gbx.TSR.History.ClampTSRHistoryTexturesSize",&local_70,
                L"Maximum possible texture size we want for TSR History Textures, Default is 4k width. 0 would disable this clamp"
               );
  atexit(FUN_142f2f3db);
  local_68 = FUN_142f2f420;
  local_70 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca35f68,&local_70);
  local_68 = FUN_142f2f660;
  local_70 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca35f78,&local_70);
  local_68 = FUN_142f2f8a0;
  local_70 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca35f88,&local_70);
  local_68 = FUN_142f2fae0;
  local_70 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca35f98,&local_70);
  local_68 = FUN_142f2fd20;
  local_70 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca35fa8,&local_70);
  local_68 = FUN_142f2ff60;
  local_70 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca35fb8,&local_70);
  local_68 = FUN_142f301a0;
  local_70 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca35fc8,&local_70);
  local_68 = FUN_142f303e0;
  local_70 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca35fd8,&local_70);
  local_68 = FUN_142f30620;
  local_70 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca35fe8,&local_70);
  local_68 = FUN_145f80754;
  local_70 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca36120,&local_70);
  local_68 = FUN_145ea6bd8;
  local_70 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca36248,&local_70);
  local_78 = 0x20;
  FUN_141471170(&DAT_14ca36258,L"r.MeshDrawCommands.CacheMultithreaded",&DAT_14c7608ec,
                L"Enable multithreading of draw command caching for static meshes. 0=disabled, 1=enabled (default)"
               );
  atexit(FUN_142f42461);
  local_78 = 0x20;
  FUN_141471170(&DAT_14ca36268,L"r.MeshDrawCommands.BatchSize",&DAT_14c7608f0,
                L"Batch size of cache mesh draw commands when multithreading of draw command caching is enabled"
               );
  atexit(FUN_142f424a6);
  local_78 = 0x20;
  FUN_141471170(&DAT_14ca36278,L"r.Nanite.CacheMaterialBinsParallel",&DAT_14c7608f4,
                L"Enable parallel caching of raster and shading bins for Nanite materials. 0=disabled, 1=enabled (default)"
               );
  atexit(FUN_142f424eb);
  local_78 = 0x20;
  FUN_141471170(&DAT_14ca36288,L"r.RayTracing.MeshDrawCommands.CacheMultithreaded",&DAT_14c7608f8,
                L"Enable multithreading of raytracing primitive mesh command caching. 0=disabled, 1=enabled (default)"
               );
  atexit(FUN_142f42530);
  DAT_14ca38478 = 0;
  _DAT_14ca38480 = 0;
  _DAT_14ca38488 = 2;
  _DAT_14ca3848c = 0;
  atexit(FUN_142f42575);
  DAT_14ca38490 = 0;
  _DAT_14ca38498 = 0;
  _DAT_14ca384a0 = 2;
  _DAT_14ca384a4 = 0;
  atexit(FUN_142f425a6);
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f5fe88 FUN_142f5fe88 body=69 status=ok
// SIG undefined FUN_142f5fe88(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f5fe88(void)

{
  _DAT_14ca38540 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f5feca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca38548,1);
  return;
}



// FUNCTION 142f5fecd FUN_142f5fecd body=69 status=ok
// SIG undefined FUN_142f5fecd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f5fecd(void)

{
  _DAT_14ca38550 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f5ff0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca38558,1);
  return;
}



// FUNCTION 142f5ff12 FUN_142f5ff12 body=69 status=ok
// SIG undefined FUN_142f5ff12(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f5ff12(void)

{
  _DAT_14ca38560 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f5ff54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca38568,1);
  return;
}



// FUNCTION 142f5ff57 FUN_142f5ff57 body=69 status=ok
// SIG undefined FUN_142f5ff57(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f5ff57(void)

{
  _DAT_14ca38578 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f5ff99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca38580,1);
  return;
}



// FUNCTION 142f5ff9c FUN_142f5ff9c body=69 status=ok
// SIG undefined FUN_142f5ff9c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f5ff9c(void)

{
  _DAT_14ca38590 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f5ffde. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca38598,1);
  return;
}



// FUNCTION 142f5ffe1 FUN_142f5ffe1 body=69 status=ok
// SIG undefined FUN_142f5ffe1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f5ffe1(void)

{
  _DAT_14ca385a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f60023. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca385b0,1);
  return;
}



// FUNCTION 142f60026 FUN_142f60026 body=69 status=ok
// SIG undefined FUN_142f60026(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f60026(void)

{
  _DAT_14ca385b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f60068. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca385c0,1);
  return;
}



// FUNCTION 142f6006b FUN_142f6006b body=69 status=ok
// SIG undefined FUN_142f6006b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f6006b(void)

{
  _DAT_14ca385d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f600ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca385d8,1);
  return;
}



// FUNCTION 142f600b0 FUN_142f600b0 body=69 status=ok
// SIG undefined FUN_142f600b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f600b0(void)

{
  _DAT_14ca385e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f600f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca385f0,1);
  return;
}



// FUNCTION 142f600f5 FUN_142f600f5 body=69 status=ok
// SIG undefined FUN_142f600f5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f600f5(void)

{
  _DAT_14ca38600 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f60137. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca38608,1);
  return;
}



// FUNCTION 142f6013a FUN_142f6013a body=2289 status=ok
// SIG undefined FUN_142f6013a(void)

void FUN_142f6013a(void)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  DWORD DVar15;
  DWORD DVar16;
  undefined4 *puVar17;
  uint *puVar18;
  undefined8 uVar19;
  longlong *plVar20;
  uint uVar21;
  undefined ***pppuVar22;
  uint *puVar23;
  undefined8 *puVar24;
  ulonglong uVar25;
  undefined1 auStack_b8 [32];
  undefined1 **local_98;
  undefined1 *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  undefined1 *local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca3e438) && (FUN_144b3d300(&DAT_14ca3e438), DAT_14ca3e438 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar20 = (longlong *)
              (**(code **)(*DAT_14c8407a8 + 200))
                        (DAT_14c8407a8,L"r.RayTracing.Geometry.StaticMeshes",1);
    if (plVar20 == (longlong *)0x0) {
      DAT_14ca3e430 = (int *)0x0;
    }
    else {
      DAT_14ca3e430 = (int *)(**(code **)(*plVar20 + 0x68))(plVar20);
    }
    _Init_thread_footer(&DAT_14ca3e438);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca3e448) && (FUN_144b3d300(&DAT_14ca3e448), DAT_14ca3e448 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar20 = (longlong *)
              (**(code **)(*DAT_14c8407a8 + 200))
                        (DAT_14c8407a8,L"r.RayTracing.Geometry.HierarchicalInstancedStaticMesh",1);
    if (plVar20 == (longlong *)0x0) {
      DAT_14ca3e440 = (int *)0x0;
    }
    else {
      DAT_14ca3e440 = (int *)(**(code **)(*plVar20 + 0x68))(plVar20);
    }
    _Init_thread_footer(&DAT_14ca3e448);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca3e458) && (FUN_144b3d300(&DAT_14ca3e458), DAT_14ca3e458 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar20 = (longlong *)
              (**(code **)(*DAT_14c8407a8 + 200))
                        (DAT_14c8407a8,L"r.RayTracing.Geometry.NaniteProxies",1);
    if (plVar20 == (longlong *)0x0) {
      DAT_14ca3e450 = (int *)0x0;
    }
    else {
      DAT_14ca3e450 = (int *)(**(code **)(*plVar20 + 0x68))(plVar20);
    }
    _Init_thread_footer(&DAT_14ca3e458);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca3e468) && (FUN_144b3d300(&DAT_14ca3e468), DAT_14ca3e468 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar20 = (longlong *)
              (**(code **)(*DAT_14c8407a8 + 200))
                        (DAT_14c8407a8,L"r.RayTracing.Geometry.LandscapeGrass",1);
    if (plVar20 == (longlong *)0x0) {
      DAT_14ca3e460 = (int *)0x0;
    }
    else {
      DAT_14ca3e460 = (int *)(**(code **)(*plVar20 + 0x68))(plVar20);
    }
    _Init_thread_footer(&DAT_14ca3e468);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca3e470) && (FUN_144b3d300(&DAT_14ca3e470), DAT_14ca3e470 == -1)) {
    DAT_14ca3e46c = *DAT_14ca3e430;
    _Init_thread_footer(&DAT_14ca3e470);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca3e478) && (FUN_144b3d300(&DAT_14ca3e478), DAT_14ca3e478 == -1)) {
    DAT_14ca3e474 = *DAT_14ca3e440;
    _Init_thread_footer(&DAT_14ca3e478);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca3e480) && (FUN_144b3d300(&DAT_14ca3e480), DAT_14ca3e480 == -1)) {
    DAT_14ca3e47c = *DAT_14ca3e450;
    _Init_thread_footer(&DAT_14ca3e480);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca3e488) && (FUN_144b3d300(&DAT_14ca3e488), DAT_14ca3e488 == -1)) {
    DAT_14ca3e484 = *DAT_14ca3e460;
    _Init_thread_footer(&DAT_14ca3e488);
  }
  iVar14 = *DAT_14ca3e430;
  iVar4 = *DAT_14ca3e440;
  iVar5 = *DAT_14ca3e450;
  iVar6 = *DAT_14ca3e460;
  if ((((iVar14 == DAT_14ca3e46c) && (iVar4 == DAT_14ca3e474)) && (iVar5 == DAT_14ca3e47c)) &&
     (iVar10 = DAT_14ca3e46c, iVar11 = DAT_14ca3e474, iVar12 = DAT_14ca3e47c, iVar13 = DAT_14ca3e484
     , iVar6 == DAT_14ca3e484)) goto LAB_142f603d4;
  lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar8 + 0xc60);
  iVar10 = iVar14;
  iVar11 = iVar4;
  iVar12 = iVar5;
  iVar13 = iVar6;
  if (DAT_14c86a9fc == 0) {
    if (iVar7 != 2) {
      if (iVar7 != 1) goto LAB_142f602f0;
      DVar15 = FUN_140ad26c0();
      DVar16 = GetCurrentThreadId();
      if (DVar15 == DVar16) goto LAB_142f602f5;
      goto LAB_142f6031c;
    }
  }
  else {
LAB_142f602f0:
    if (iVar7 != 0x10) {
LAB_142f6031c:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar14 = *(int *)(lVar8 + 0xc60), iVar14 == 2))
        goto LAB_142f602f5;
        if (iVar14 == 1) {
          DVar15 = FUN_140ad26c0();
          DVar16 = GetCurrentThreadId();
          if (DVar15 == DVar16) goto LAB_142f602f5;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar18 = (uint *)*puVar2;
        if (puVar18 != (uint *)0x0) goto LAB_142f6049d;
        while( true ) {
          uVar21 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar21 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar21 | 1;
            __tlregdtor(&LAB_142f6f4c4);
          }
          lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar17 = *(undefined4 **)(lVar8 + 0x310);
          *(undefined8 *)(lVar8 + 0x310) = 0;
          if (puVar17 == (undefined4 *)0x0) {
            puVar17 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar17 = 0xffffffff;
          *(undefined4 **)(puVar17 + 0x10) = puVar17 + 0x16;
          puVar17[0x12] = 0;
          *puVar2 = puVar17;
          FUN_140217a48(puVar2);
          puVar18 = (uint *)*puVar2;
LAB_142f6049d:
          puVar24 = (undefined8 *)(*(longlong *)(puVar18 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar23 = (uint *)(puVar24 + 0x16);
          uVar21 = puVar18[0x12];
          if (puVar23 <= puVar18 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar18 + 0x10) = puVar18 + 0x4000;
            LOCK();
            uVar3 = *puVar18;
            *puVar18 = *puVar18 + uVar21 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar21) != 0xffffffff) break;
            puVar18 = (uint *)*puVar2;
            *puVar18 = 0xffffffff;
            *(uint **)(puVar18 + 0x10) = puVar18 + 0x16;
            puVar18[0x12] = 0;
            *puVar2 = puVar18;
            puVar24 = (undefined8 *)((longlong)puVar18 + 0x5fU & 0xfffffffffffffff8);
            puVar23 = (uint *)(puVar24 + 0x16);
            uVar21 = 0;
            if (puVar23 <= puVar18 + 0x4000) {
              uVar21 = 1;
              goto LAB_142f6051d;
            }
          }
        }
        uVar21 = uVar21 + 1;
LAB_142f6051d:
        *(uint **)(puVar18 + 0x10) = puVar23;
        puVar18[0x12] = uVar21;
        iVar14 = 0;
        FUN_1447247dc(puVar24,0);
        *puVar24 = &PTR_FUN_14a2da910;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar21 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar21 < 2) {
            uVar25 = (ulonglong)(byte)(&DAT_149e38edc)[uVar21];
            iVar14 = 0;
          }
          else {
            uVar25 = 2;
          }
        }
        else {
          iVar14 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                   *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar25 = 5;
        }
        if (*(code **)(puVar24[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar24[0xe] + 0x18))(puVar24 + 0xe,puVar24 + 9);
        }
        puVar24[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar24[9] = puVar24;
        puVar24[10] = puVar24;
        lVar8 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar8 == 0) {
          uVar9 = 1;
          if ((char)uVar25 != '\x06') {
            uVar9 = uVar25;
          }
          uVar25 = uVar9;
          uVar19 = 0;
        }
        else {
          if ((char)uVar25 == '\x06') {
            uVar25 = *(ulonglong *)(lVar8 + 0x38) >> 0x3b;
          }
          uVar19 = *(undefined8 *)(lVar8 + 0x30);
        }
        puVar24[0xf] = uVar19;
        puVar24[0x10] = uVar25 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar24 + 0x1c) = iVar14;
        if (puVar24 == (undefined8 *)0x0) {
          local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar24 + 1) = *(int *)(puVar24 + 1) + 1;
          UNLOCK();
          local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(puVar24);
          LOCK();
          piVar1 = (int *)(puVar24 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar24)(puVar24,1);
          }
        }
      }
      else {
        local_98 = local_88;
        local_78 = (undefined ***)0x0;
        local_68 = &PTR_LAB_14a2b3190;
        local_60 = &LAB_142f6f4bc;
        local_88[0] = &LAB_142ea45a2;
        FUN_14005a792(&DAT_14ca9a440,L"RefreshRayTracingInstancesCmd",&DAT_14ca3e48c);
        if (local_88[0] != (undefined1 *)0x0) {
          pppuVar22 = local_78;
          if (local_78 == (undefined ***)0x0) {
            pppuVar22 = &local_68;
          }
          (*(code *)(*pppuVar22)[2])();
        }
      }
      goto LAB_142f603d4;
    }
  }
LAB_142f602f5:
  DAT_14ca38629 = 1;
LAB_142f603d4:
  DAT_14ca3e484 = iVar13;
  DAT_14ca3e47c = iVar12;
  DAT_14ca3e474 = iVar11;
  DAT_14ca3e46c = iVar10;
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f60a2c FUN_142f60a2c body=713 status=ok
// SIG undefined FUN_142f60a2c(void)

void FUN_142f60a2c(longlong param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  char cVar6;
  byte bVar7;
  longlong lVar8;
  byte bVar9;
  undefined1 auStack_98 [32];
  LARGE_INTEGER local_78;
  undefined8 uStack_70;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  cVar6 = DAT_14caff4f8;
  cVar5 = DAT_14ca1c4ed;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  bVar9 = *(byte *)(param_3 + 0x60) >> 1 & 1;
  DAT_14ca1c4ec = DAT_14ca1c4ed;
  DAT_14ca1c4ed = DAT_14caff4f8;
  if (((cVar5 != DAT_14caff4f8) || (bVar9 != *(byte *)(param_1 + 0x3600))) ||
     (DAT_14ca38628 == '\x01')) {
    lVar2 = *(longlong *)(param_1 + 0x5658);
    if (lVar2 != 0) {
      if (DAT_14c87e718 == '\0') {
        iVar1 = *(int *)(lVar2 + 0x1c);
        if (2 < iVar1) {
          bVar7 = (**(code **)(*DAT_14c82b500 + 0x10))(DAT_14c82b500,0);
          if (bVar7 < 3) {
            local_78.QuadPart = 0x20100000001;
            uStack_70 = 0x30100000101;
            local_68 = DAT_14c7585c8;
            local_64 = DAT_14c7585c8 | 0x200;
            local_60 = DAT_14c7585c8 | 0x100;
            local_5c = DAT_14c7585c8 | 0x300;
            local_58 = 0;
            uStack_54 = 0x200;
            uStack_50 = 0x100;
            uStack_4c = 0x300;
            if (*(byte *)((longlong)&local_78 + (ulonglong)(iVar1 - 3) * 4) == bVar7)
            goto LAB_142f60ce9;
          }
        }
        QueryPerformanceCounter(&local_78);
        uStack_70 = 0xffffffffffffffff;
        FUN_140056092(lVar2,&local_78);
      }
      else {
LAB_142f60ce9:
        FUN_140082318(lVar2);
      }
    }
    *(byte *)(param_1 + 0x3600) = bVar9;
    FUN_1472aa7f8(param_1);
    DAT_14ca38628 = '\0';
  }
  if (DAT_14ca38629 != '\x01') goto LAB_142f60b11;
  lVar2 = *(longlong *)(param_1 + 0x5658);
  if (lVar2 != 0) {
    if (DAT_14c87e718 == '\0') {
      iVar1 = *(int *)(lVar2 + 0x1c);
      if (2 < iVar1) {
        bVar9 = (**(code **)(*DAT_14c82b500 + 0x10))(DAT_14c82b500,0);
        if (bVar9 < 3) {
          local_78.QuadPart = 0x20100000001;
          uStack_70 = 0x30100000101;
          local_68 = DAT_14c7585c8;
          local_64 = DAT_14c7585c8 | 0x200;
          local_60 = DAT_14c7585c8 | 0x100;
          local_5c = DAT_14c7585c8 | 0x300;
          local_58 = 0;
          uStack_54 = 0x200;
          uStack_50 = 0x100;
          uStack_4c = 0x300;
          if (*(byte *)((longlong)&local_78 + (ulonglong)(iVar1 - 3) * 4) == bVar9)
          goto LAB_142f60c5d;
        }
      }
      QueryPerformanceCounter(&local_78);
      uStack_70 = 0xffffffffffffffff;
      FUN_140056092(lVar2,&local_78);
    }
    else {
LAB_142f60c5d:
      FUN_140082318(lVar2);
    }
  }
  local_78 = *(LARGE_INTEGER *)(param_1 + 0x3330);
  uStack_70 = CONCAT44(uStack_70._4_4_,*(undefined4 *)(param_1 + 0x3338));
  FUN_142f44c64(param_1);
  DAT_14ca38629 = '\0';
LAB_142f60b11:
  if ((cVar5 != cVar6) && (lVar2 = param_2[1], (longlong)(int)lVar2 != 0)) {
    lVar3 = *param_2;
    lVar8 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + 0x3108 + lVar8);
      if ((lVar4 != 0) && (*(char *)(lVar3 + 0x23ee + lVar8) == '\0')) {
        FUN_142e73f6a(lVar4,1);
      }
      lVar8 = lVar8 + 0x13c10;
    } while ((longlong)(int)lVar2 * 0x13c10 - lVar8 != 0);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f60cf6 FUN_142f60cf6 body=2375 status=ok
// SIG undefined FUN_142f60cf6(void)

void FUN_142f60cf6(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *lpTlsValue;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  bool bVar15;
  undefined4 uVar16;
  undefined1 auStack_c8 [47];
  undefined1 local_99;
  longlong *local_98;
  undefined8 *local_90;
  undefined8 local_88;
  undefined8 local_80;
  longlong local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_99 = FUN_147430d07();
  puVar2 = *(undefined8 **)(*param_1 + 0x5658);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
    UNLOCK();
  }
  local_78 = *param_2;
  local_80 = puVar2;
  lpTlsValue = TlsGetValue(DAT_14c896140);
  if (lpTlsValue == (longlong *)0x0) {
    lpTlsValue = (longlong *)FUN_14001cc68(0x18,0x10);
    *lpTlsValue = 0;
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
    TlsSetValue(DAT_14c896140,lpTlsValue);
  }
  plVar14 = (longlong *)lpTlsValue[1];
  if (plVar14 == (longlong *)0x0) {
    plVar14 = (longlong *)*lpTlsValue;
    if (plVar14 == (longlong *)0x0) {
      uVar12 = (uint)DAT_14c896180;
      puVar4 = DAT_14c896180;
      while (DAT_14c896180 = puVar4, local_88 = puVar4, ((ulonglong)puVar4 & 0x3ffffff) != 0) {
        local_90 = (undefined8 *)(((ulonglong)puVar4 & 0xfffffffffc000000) + 0x4000000);
        if ((ulonglong)local_90 >> 0x1a < (ulonglong)puVar4 >> 0x1a) {
          FUN_14000f986(0x3a83126f);
        }
        uVar11 = (ulonglong)((uVar12 & 0x3ffffff) >> 0xe);
        uVar13 = (ulonglong)((uint)puVar4 & 0x3fff);
        local_90 = (undefined8 *)
                   ((ulonglong)local_90 & 0xfffffffffc000000 |
                   (ulonglong)
                   *(uint *)(*(longlong *)(&DAT_14c833b00 + uVar11 * 8) + 0x10 + uVar13 * 0x18));
        LOCK();
        bVar15 = local_88 == DAT_14c896180;
        puVar4 = local_90;
        if (!bVar15) {
          puVar4 = DAT_14c896180;
        }
        DAT_14c896180 = puVar4;
        UNLOCK();
        if (bVar15) {
          *(undefined4 *)(*(longlong *)(&DAT_14c833b00 + uVar11 * 8) + uVar13 * 0x18 + 0x10) = 0;
          plVar14 = *(longlong **)
                     (*(longlong *)(&DAT_14c833b00 + uVar11 * 8) + 8 +
                     (ulonglong)(uVar12 & 0x3fff) * 0x18);
          FUN_1447d080c(uVar12 & 0x3ffffff);
          lpTlsValue[1] = (longlong)plVar14;
          if (plVar14 == (longlong *)0x0) goto LAB_142f60ed5;
          goto LAB_142f60f10;
        }
        uVar12 = (uint)DAT_14c896180;
        puVar4 = DAT_14c896180;
      }
      lpTlsValue[1] = 0;
LAB_142f60ed5:
      puVar4 = (undefined8 *)FUN_14001cc68(0x10000,0);
      lpTlsValue[1] = (longlong)puVar4;
      iVar10 = 0xff;
      do {
        puVar8 = puVar4 + 0x20;
        *puVar4 = puVar8;
        iVar10 = iVar10 + -1;
        puVar4 = puVar8;
      } while (iVar10 != 0);
      *puVar8 = 0;
      plVar14 = (longlong *)lpTlsValue[1];
    }
    else {
      lpTlsValue[1] = (longlong)plVar14;
      *lpTlsValue = 0;
    }
LAB_142f60f10:
    *(undefined4 *)(lpTlsValue + 2) = 0x100;
    iVar10 = 0x100;
  }
  else {
    iVar10 = (int)lpTlsValue[2];
  }
  lpTlsValue[1] = *plVar14;
  *(int *)(lpTlsValue + 2) = iVar10 + -1;
  *plVar14 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
  plVar14[1] = (longlong)&DAT_100000002;
  plVar14[2] = 0;
  *(undefined4 *)(plVar14 + 3) = 0;
  *(undefined4 *)(plVar14 + 4) = 0xffffffff;
  plVar14[6] = 0;
  plVar14[7] = 0x100000000;
  *(undefined1 *)(plVar14 + 8) = 1;
  plVar14[0xe] = (longlong)
                 LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                 ::TTaskDelegateDummy::vftable;
  plVar14[0xf] = 0;
  plVar14[0x10] = -0x17ffffffffffffe0;
  plVar14[0x12] = 0;
  plVar14[0x13] = 0x100000000;
  *(undefined2 *)(plVar14 + 0x14) = 0;
  LOCK();
  bVar15 = (char)plVar14[8] == '\x01';
  if (bVar15) {
    *(char *)(plVar14 + 8) = '\0';
  }
  UNLOCK();
  if (!bVar15) {
    FUN_14008cdb0(plVar14 + 8);
  }
  *plVar14 = (longlong)&PTR_FUN_14a2dbb58;
  if (*(code **)(plVar14[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(plVar14[0xe] + 0x18))(plVar14 + 0xe,plVar14 + 9);
  }
  plVar14[0xe] = (longlong)
                 LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                 ::
                 TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                 ::vftable;
  plVar14[9] = (longlong)plVar14;
  plVar14[10] = (longlong)plVar14;
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  lVar5 = *(longlong *)(lVar3 + 0x2b8);
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(longlong *)(lVar5 + 0x30);
  }
  plVar14[0xf] = lVar5;
  plVar14[0x10] = -0x3fffffad74ae0200;
  *(undefined4 *)((longlong)plVar14 + 0x1c) = 0;
  plVar14[0x15] = (longlong)param_1;
  *(undefined1 *)(plVar14 + 0x16) = local_99;
  uVar16 = (undefined4)local_88;
  *(undefined4 *)((longlong)plVar14 + 0xb1) = uVar16;
  *(undefined4 *)((longlong)plVar14 + 0xb4) = local_88._3_4_;
  *plVar14 = (longlong)&PTR_FUN_14a2dbb48;
  FUN_1472c0d16(plVar14,&local_80);
  local_90 = (undefined8 *)CONCAT71(local_90._1_7_,1);
  FUN_1447439e4(plVar14);
  puVar4 = (undefined8 *)param_1[0xd];
  param_1[0xd] = (longlong)plVar14;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar4 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca38640) && (FUN_144b3d300(&DAT_14ca38640), DAT_14ca38640 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    DAT_14ca38638 =
         (longlong *)
         (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.StaticMeshLODDistanceScale",1);
    _Init_thread_footer(&DAT_14ca38640);
  }
  uVar16 = (**(code **)(*DAT_14ca38638 + 0xb8))();
  puVar4 = TlsGetValue(DAT_14c896140);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *puVar4 = 0;
    puVar4[1] = 0;
    *(undefined4 *)(puVar4 + 2) = 0;
    TlsSetValue(DAT_14c896140,puVar4);
  }
  puVar8 = (undefined8 *)puVar4[1];
  if (puVar8 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)*puVar4;
    if (puVar8 == (undefined8 *)0x0) {
      uVar12 = (uint)DAT_14c896180;
      local_98 = param_2;
      puVar8 = DAT_14c896180;
      while (DAT_14c896180 = puVar8, local_80 = puVar8, ((ulonglong)puVar8 & 0x3ffffff) != 0) {
        local_88 = (undefined8 *)(((ulonglong)puVar8 & 0xfffffffffc000000) + 0x4000000);
        if ((ulonglong)local_88 >> 0x1a < (ulonglong)puVar8 >> 0x1a) {
          FUN_14000f986(0x3a83126f);
        }
        uVar11 = (ulonglong)((uVar12 & 0x3ffffff) >> 0xe);
        uVar13 = (ulonglong)((uint)puVar8 & 0x3fff);
        local_88 = (undefined8 *)
                   ((ulonglong)local_88 & 0xfffffffffc000000 |
                   (ulonglong)
                   *(uint *)(*(longlong *)(&DAT_14c833b00 + uVar11 * 8) + 0x10 + uVar13 * 0x18));
        LOCK();
        bVar15 = local_80 == DAT_14c896180;
        puVar8 = local_88;
        if (!bVar15) {
          puVar8 = DAT_14c896180;
        }
        DAT_14c896180 = puVar8;
        UNLOCK();
        if (bVar15) {
          *(undefined4 *)(*(longlong *)(&DAT_14c833b00 + uVar11 * 8) + uVar13 * 0x18 + 0x10) = 0;
          puVar8 = *(undefined8 **)
                    (*(longlong *)(&DAT_14c833b00 + uVar11 * 8) + 8 +
                    (ulonglong)(uVar12 & 0x3fff) * 0x18);
          FUN_1447d080c(uVar12 & 0x3ffffff);
          puVar4[1] = puVar8;
          param_2 = local_98;
          if (puVar8 != (undefined8 *)0x0) goto LAB_142f612bc;
          goto LAB_142f6157b;
        }
        uVar12 = (uint)DAT_14c896180;
        puVar8 = DAT_14c896180;
      }
      puVar4[1] = 0;
LAB_142f6157b:
      param_2 = local_98;
      puVar8 = (undefined8 *)FUN_14001cc68(0x10000,0);
      puVar4[1] = puVar8;
      iVar10 = 0xff;
      puVar9 = puVar8;
      do {
        puVar6 = puVar9 + 0x20;
        *puVar9 = puVar6;
        iVar10 = iVar10 + -1;
        puVar9 = puVar6;
      } while (iVar10 != 0);
    }
    else {
      puVar4[1] = puVar8;
      puVar6 = puVar4;
    }
    *puVar6 = 0;
LAB_142f612bc:
    *(undefined4 *)(puVar4 + 2) = 0x100;
    iVar10 = 0xff;
  }
  else {
    iVar10 = *(int *)(puVar4 + 2) + -1;
  }
  puVar4[1] = *puVar8;
  *(int *)(puVar4 + 2) = iVar10;
  *puVar8 = UE::Tasks::Private::FTaskBase::vftable;
  puVar8[1] = &DAT_100000002;
  puVar8[2] = 0;
  *(undefined4 *)(puVar8 + 3) = 0;
  *(undefined4 *)(puVar8 + 4) = 0xffffffff;
  puVar8[6] = 0;
  puVar8[7] = 0x100000000;
  *(undefined1 *)(puVar8 + 8) = 1;
  puVar8[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                TTaskDelegateDummy::vftable;
  puVar8[0xf] = 0;
  puVar8[0x10] = 0xe800000000000020;
  puVar8[0x12] = 0;
  puVar8[0x13] = 0x100000000;
  *(undefined2 *)(puVar8 + 0x14) = 0;
  LOCK();
  bVar15 = *(char *)(puVar8 + 8) == '\x01';
  if (bVar15) {
    *(char *)(puVar8 + 8) = '\0';
  }
  UNLOCK();
  if (!bVar15) {
    FUN_14008cdb0(puVar8 + 8);
  }
  *puVar8 = &PTR_FUN_14a2dbb78;
  if (*(code **)(puVar8[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(puVar8[0xe] + 0x18))(puVar8 + 0xe,puVar8 + 9);
  }
  puVar8[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                ::vftable;
  puVar8[9] = puVar8;
  puVar8[10] = puVar8;
  lVar3 = *(longlong *)(lVar3 + 0x2b8);
  if (lVar3 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(lVar3 + 0x30);
  }
  puVar8[0xf] = uVar7;
  puVar8[0x10] = 0xc80000528b521b80;
  *(undefined4 *)((longlong)puVar8 + 0x1c) = 0;
  puVar8[0x15] = param_1;
  *(undefined4 *)(puVar8 + 0x16) = uVar16;
  *(undefined4 *)((longlong)puVar8 + 0xb4) = 0xffffffff;
  *(undefined1 *)(puVar8 + 0x17) = local_99;
  uVar16 = (undefined4)local_80;
  *(undefined4 *)((longlong)puVar8 + 0xb9) = uVar16;
  *(undefined4 *)((longlong)puVar8 + 0xbc) = local_80._3_4_;
  *puVar8 = &PTR_FUN_14a2dbb68;
  FUN_1400e88c2(puVar8,param_1 + 0xd);
  local_88 = (undefined8 *)CONCAT71(local_88._1_7_,1);
  FUN_1447439e4(puVar8);
  puVar4 = (undefined8 *)param_1[0xe];
  param_1[0xe] = (longlong)puVar8;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar4 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  *(undefined1 *)(param_1 + 0x15) = 1;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = (undefined8 *)*param_2;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f6163e FUN_142f6163e body=13823 status=ok
// SIG undefined FUN_142f6163e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_142f6163e(longlong param_1,longlong *param_2,int *param_3,longlong param_4)

{
  double dVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  LARGE_INTEGER LVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong *plVar15;
  void *_Dst;
  longlong *plVar16;
  longlong *plVar17;
  longlong *plVar18;
  ulonglong uVar19;
  uint *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined4 *puVar24;
  int *piVar25;
  undefined1 *puVar26;
  int iVar27;
  LARGE_INTEGER *pLVar28;
  undefined1 *puVar29;
  longlong lVar30;
  size_t sVar31;
  undefined8 *puVar32;
  int *piVar33;
  ulonglong uVar34;
  byte bVar35;
  undefined4 uVar36;
  longlong lVar37;
  undefined8 *****pppppuVar38;
  longlong *plVar39;
  LARGE_INTEGER *pLVar40;
  int *piVar41;
  ulonglong uVar42;
  longlong lVar43;
  byte bVar44;
  bool bVar45;
  undefined1 auStack_6f8 [32];
  longlong *local_6d8;
  longlong *local_6d0;
  undefined8 *local_6c8;
  undefined8 **local_6c0;
  int *local_6b8;
  int *local_6b0;
  undefined8 *local_6a8;
  undefined8 **local_6a0;
  undefined ***local_698;
  undefined8 local_690;
  undefined8 *local_688;
  LARGE_INTEGER *local_680;
  undefined4 *local_678;
  longlong *local_670;
  longlong *local_668;
  int *local_660;
  undefined8 local_658;
  int *local_650;
  longlong local_648;
  undefined8 *local_640;
  undefined8 *local_638;
  longlong *local_630;
  int local_628;
  uint local_624;
  int *local_620;
  LARGE_INTEGER *local_618;
  longlong *local_610;
  int *local_608;
  longlong local_600;
  undefined8 local_5f8;
  int *local_5f0;
  LARGE_INTEGER local_5e8;
  undefined8 local_5e0;
  longlong local_5d8;
  longlong local_5d0;
  longlong local_5c8;
  undefined4 *local_5c0;
  longlong *local_5b8;
  void *local_5b0;
  longlong *local_5a8;
  undefined4 local_5a0;
  undefined2 local_59c;
  uint local_598;
  uint local_594;
  uint local_590;
  uint local_58c;
  undefined8 *local_588;
  undefined8 ****local_580;
  undefined8 local_578;
  undefined8 local_570;
  undefined8 local_568;
  undefined8 uStack_560;
  undefined8 local_558;
  undefined8 uStack_550;
  undefined8 local_548;
  undefined8 uStack_540;
  PSRWLOCK local_538;
  LARGE_INTEGER *pLStack_530;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined8 local_518;
  undefined8 uStack_510;
  longlong local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined4 local_4f0;
  undefined4 local_4dc;
  LARGE_INTEGER local_4d8;
  undefined4 *puStack_4d0;
  uint local_4c8;
  uint uStack_4c4;
  uint local_4c0;
  uint uStack_4bc;
  undefined4 local_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  longlong local_4a8;
  void *local_4a0;
  uint local_498;
  int local_494;
  undefined1 local_490 [40];
  undefined1 local_468 [80];
  undefined1 local_418 [16];
  undefined1 *local_408;
  int local_400;
  undefined1 local_3d8 [8];
  undefined1 *local_3d0;
  int local_3c8;
  longlong *local_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  longlong local_318;
  int local_310;
  int local_30c;
  longlong local_308;
  int local_300;
  int local_2fc;
  undefined1 local_2f8 [88];
  int *local_2a0;
  uint local_298;
  uint local_294;
  undefined **local_290;
  undefined8 *local_288;
  LARGE_INTEGER local_280;
  undefined4 *local_278;
  undefined4 local_270;
  undefined1 local_26c;
  longlong local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined4 *local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined4 *puStack_200;
  undefined8 local_1f8;
  PSRWLOCK pRStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  LARGE_INTEGER local_1b0;
  undefined4 local_1a8 [2];
  LARGE_INTEGER *local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  ulonglong local_188;
  undefined4 local_180;
  undefined8 local_178;
  undefined4 local_170;
  int local_16c;
  ulonglong local_168;
  undefined4 local_160;
  undefined1 local_158;
  undefined1 local_157;
  undefined1 local_156;
  undefined1 local_155;
  undefined1 local_154;
  undefined4 auStack_148 [12];
  LARGE_INTEGER local_118;
  undefined8 uStack_110;
  LARGE_INTEGER *local_108;
  ulonglong local_100;
  undefined8 ****local_f8;
  ulonglong uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  uint local_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_6f8;
  lVar12 = param_2[0xd];
  local_5d8 = param_1;
  local_5d0 = param_4;
  if (lVar12 == 0) goto LAB_142f616de;
  if (DAT_14c87e718 == '\0') {
    iVar11 = *(int *)(lVar12 + 0x1c);
    if ((2 < iVar11) && (bVar35 = (**(code **)(*DAT_14c82b500 + 0x10))(DAT_14c82b500,0), bVar35 < 3)
       ) {
      local_4d8.QuadPart = 0x20100000001;
      puStack_4d0 = (undefined4 *)0x30100000101;
      local_4c8 = DAT_14c7585c8;
      uStack_4c4 = DAT_14c7585c8 | 0x200;
      local_4c0 = DAT_14c7585c8 | 0x100;
      uStack_4bc = DAT_14c7585c8 | 0x300;
      local_4b8 = 0;
      uStack_4b4 = 0x200;
      uStack_4b0 = 0x100;
      uStack_4ac = 0x300;
      if (*(byte *)((longlong)&local_4d8 + (ulonglong)(iVar11 - 3) * 4) == bVar35)
      goto LAB_142f64c20;
    }
    QueryPerformanceCounter(&local_4d8);
    puStack_4d0 = (undefined4 *)0xffffffffffffffff;
    FUN_140056092(lVar12,&local_4d8);
  }
  else {
LAB_142f64c20:
    FUN_140082318(lVar12);
  }
LAB_142f616de:
  local_5b8 = (longlong *)*param_2;
  iVar11 = ((int)local_5b8[0x667] + 0x6a) / 0x6b;
  if ((int)local_5b8[0x667] < -0xd4) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar11);
  }
  local_600 = param_2[1];
  if (*(int *)(local_600 + 0x1171c) < iVar11) {
    FUN_1447ab16c(local_600 + 0x11710);
  }
  FUN_1456b49c8(local_5d0);
  if ((longlong *)(param_3 + 0x10) != param_2 + 0x11) {
    if (*(longlong *)(param_3 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_3 + 0x10) = param_2[0x11];
    param_2[0x11] = 0;
    param_3[0x12] = (int)param_2[0x12];
    param_3[0x13] = *(int *)((longlong)param_2 + 0x94);
    param_2[0x12] = 0;
  }
  lVar12 = FUN_140083894();
  if (*(longlong *)(lVar12 + 0x50) != 0) {
    local_4d8 = *(LARGE_INTEGER *)(param_3 + 0x10);
    puStack_4d0 = (undefined4 *)CONCAT44(puStack_4d0._4_4_,param_3[0x12]);
    FUN_147ccab14(*(longlong *)(lVar12 + 0x50) + 0x48);
  }
  piVar33 = (int *)param_2[5];
  iVar11 = (int)param_2[6];
  local_660 = param_3;
  local_5a8 = param_2;
  if (DAT_14c7608fc != 0) {
    FUN_1447e0190();
  }
  FUN_147430d07();
  plVar14 = local_5b8;
  uVar13 = (**(code **)(*local_5b8 + 0x4a8))(local_5b8);
  local_648 = FUN_1472b131c(uVar13);
  local_6d8 = param_2 + 2;
  FUN_1472b0a18(&local_4d8,plVar14,local_600);
  iVar27 = local_298 + iVar11;
  if (iVar27 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar27);
  }
  if ((int)local_294 < iVar27) {
    FUN_1472bfd3a(&local_2a0);
  }
  if (iVar11 != 0) {
    local_650 = piVar33 + iVar11;
    do {
      uVar36 = DAT_14cae48b8;
      iVar11 = *piVar33;
      plVar14 = *(longlong **)(*(longlong *)(local_4d8.QuadPart + 0x3358) + (longlong)iVar11 * 8);
      local_378 = plVar14;
      if (0 < (longlong)local_400) {
        puVar29 = local_408;
        if (local_408 == (undefined1 *)0x0) {
          puVar29 = local_418;
        }
        lVar12 = 0;
        do {
          if (*(longlong *)(puVar29 + lVar12 * 8) != 0) {
            *(undefined4 *)(*(longlong *)(puVar29 + lVar12 * 8) + 0x550) = uVar36;
          }
          lVar12 = lVar12 + 1;
        } while (local_400 != lVar12);
      }
      if (0 < local_3c8) {
        lVar12 = 0;
        do {
          puVar29 = local_3d0;
          if (local_3d0 == (undefined1 *)0x0) {
            puVar29 = local_3d8;
          }
          *(undefined2 *)(puVar29 + lVar12 * 2) = 0;
          lVar12 = lVar12 + 1;
        } while (lVar12 < local_3c8);
      }
      iVar5 = local_300;
      iVar27 = local_310;
      if ((*(char *)CONCAT44(uStack_4bc,local_4c0) != '\0') ||
         ((*(byte *)((longlong)plVar14 + 0x6f) & 4) != 0)) {
        (**(code **)(*plVar14 + 0x78))();
      }
      iVar6 = local_300;
      iVar4 = local_310;
      lVar12 = (longlong)(int)local_298;
      local_298 = local_298 + 1;
      if (local_294 < local_298) {
        FUN_1472bfdaa(&local_2a0);
      }
      local_2a0[lVar12 * 9] = iVar11;
      *(undefined1 *)(local_2a0 + lVar12 * 9 + 1) = 1;
      local_2a0[lVar12 * 9 + 2] = iVar27;
      *(undefined1 *)(local_2a0 + lVar12 * 9 + 3) = 0;
      local_2a0[lVar12 * 9 + 4] = iVar4;
      *(undefined1 *)(local_2a0 + lVar12 * 9 + 5) = 1;
      local_2a0[lVar12 * 9 + 6] = iVar5;
      *(undefined1 *)(local_2a0 + lVar12 * 9 + 7) = 0;
      local_2a0[lVar12 * 9 + 8] = iVar6;
      piVar33 = piVar33 + 1;
    } while (piVar33 != local_650);
  }
  local_5e0 = *(undefined8 *)(local_5d8 + 0x18);
  if ((longlong)(int)local_298 != 0) {
    local_620 = local_2a0 + (longlong)(int)local_298 * 9;
    piVar33 = local_2a0;
    do {
      lVar12 = (longlong)piVar33[6];
      if (piVar33[6] < piVar33[8]) {
        local_658 = *(ulonglong *)
                     (*(longlong *)(local_4d8.QuadPart + 0x3358) + (longlong)*piVar33 * 8);
        local_618 = (LARGE_INTEGER *)
                    CONCAT44(local_618._4_4_,
                             *(undefined4 *)
                              (*(longlong *)
                                (*(longlong *)(local_4d8.QuadPart + 0x3330) + (longlong)*piVar33 * 8
                                ) + 0x15c));
        local_608 = piVar33;
        do {
          local_670 = (longlong *)(**(code **)(*(longlong *)local_4d8 + 0x4a8))();
          lVar37 = local_308;
          LVar7 = local_4d8;
          lVar30 = lVar12 * 0x80;
          local_678 = puStack_4d0;
          local_5f8 = CONCAT44(uStack_4ac,uStack_4b0);
          local_4dc = local_618._0_4_;
          local_668 = *(longlong **)(local_308 + 0x20 + lVar30);
          local_610 = *(longlong **)(local_308 + 0x28 + lVar30);
          local_5f0 = (int *)CONCAT44(local_5f0._4_4_,(uint)*(byte *)(local_308 + 0x10 + lVar30));
          plVar14 = local_670 + 0xc;
          iVar11 = (int)local_670[0xd];
          local_5c8 = lVar12;
          if (((longlong)iVar11 == 0) ||
             (*(longlong *)(*plVar14 + (longlong)(iVar11 + -1) * 8) !=
              *(longlong *)(puStack_4d0 + 6))) {
            *(uint *)(local_670 + 0xd) = iVar11 + 1U;
            if (*(uint *)((longlong)local_670 + 0x6c) < iVar11 + 1U) {
              FUN_144ab4262(plVar14);
            }
            lVar12 = *(longlong *)(local_678 + 6);
            *(longlong *)(*plVar14 + (longlong)iVar11 * 8) = lVar12;
            if (lVar12 != 0) {
              LOCK();
              *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
              UNLOCK();
            }
          }
          puVar32 = (undefined8 *)(lVar37 + lVar30);
          puVar22 = (undefined8 *)0x0;
          plVar14 = local_610;
          if (local_610 == (longlong *)0x0) {
            lVar12 = local_670[10];
            iVar11 = (int)local_670[0xb];
            lVar37 = (longlong)iVar11;
            if (lVar37 != 0) {
              lVar30 = 0;
              do {
                plVar14 = *(longlong **)(lVar12 + lVar30);
                puVar22 = (undefined8 *)(ulonglong)*(uint *)(plVar14 + 6);
                if (*(uint *)(plVar14 + 6) + *(int *)(puVar32 + 3) <= *(uint *)(plVar14 + 3)) {
                  if (plVar14 != (longlong *)0x0) goto LAB_142f61b37;
                  break;
                }
                lVar30 = lVar30 + 8;
              } while (lVar37 * 8 - lVar30 != 0);
            }
            plVar14 = (longlong *)FUN_14001cc68(0x38,0x10);
            plVar14[6] = 0;
            *plVar14 = 0;
            plVar14[1] = 0;
            plVar14[2] = 0;
            plVar14[3] = 0;
            ((int *)((longlong)plVar14 + 0x1c))[0] = 0;
            ((int *)((longlong)plVar14 + 0x1c))[1] = 0;
            ((int *)((longlong)plVar14 + 0x24))[0] = 0;
            ((int *)((longlong)plVar14 + 0x24))[1] = 0;
            *(uint *)(local_670 + 0xb) = iVar11 + 1U;
            if (*(uint *)((longlong)local_670 + 0x5c) < iVar11 + 1U) {
              plVar15 = local_670 + 10;
              FUN_1472c18c2(plVar15,iVar11);
              lVar12 = *plVar15;
            }
            *(longlong **)(lVar12 + lVar37 * 8) = plVar14;
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14ca3a8cc) && (FUN_144b3d300(&DAT_14ca3a8cc), DAT_14ca3a8cc == -1))
            {
              DAT_14ca3a8c8 = DAT_14c760910 << 0x14;
              _Init_thread_footer(&DAT_14ca3a8cc);
            }
            uVar10 = DAT_14ca3a8c8;
            if (DAT_14ca3a8c8 < *(uint *)(puVar32 + 3)) {
              uVar10 = *(uint *)(puVar32 + 3);
            }
            local_6d8 = (longlong *)CONCAT44(local_6d8._4_4_,uVar10 >> 2);
            local_6b8 = (int *)0x0;
            local_6c0 = (undefined8 **)CONCAT44(local_6c0._4_4_,0x108);
            local_6c8 = (undefined8 *)CONCAT44(local_6c8._4_4_,0x400);
            local_6d0 = (longlong *)CONCAT71(local_6d0._1_7_,0xd);
            FUN_1407fe5c2(plVar14,local_5f8,
                          L"FRayTracingDynamicGeometryCollection::RayTracingDynamicVertexBuffer");
            *(int *)(plVar14 + 6) = 0;
            puVar22 = (undefined8 *)0x0;
LAB_142f61b37:
            *(int *)((longlong)plVar14 + 0x34) = (int)local_670[0xe];
            *(uint *)(plVar14 + 6) = *(int *)(puVar32 + 3) + (int)puVar22 + 0xfU & 0xfffffff0;
          }
          local_508 = 0;
          uStack_500 = 0;
          local_4f0 = 0xffffffff;
          iVar11 = *(int *)(puVar32 + 1);
          if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(iVar11);
          }
          local_638 = puVar22;
          if (iVar11 != 0) {
            FUN_1472c1684(&local_508);
          }
          local_5e8.s.LowPart = 0xffffffff;
          local_688 = puVar32;
          local_630 = plVar14;
          if ((((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) && ((DAT_14ca84f5a & 1) != 0)) &&
             ((DAT_14cafb358 == 2 && (lVar12 = (longlong)DAT_14c9c0cf0, 0 < lVar12)))) {
            puVar32 = &DAT_14cafe978;
            lVar37 = 0;
            do {
              iVar11 = wcscmp((wchar_t *)*puVar32,L"RayTracingDynamicGeometry");
              if (iVar11 == 0) {
                local_5e8.s.LowPart = (int)lVar37;
                break;
              }
              lVar37 = lVar37 + 1;
              puVar32 = puVar32 + 2;
            } while (lVar12 != lVar37);
          }
          if ((longlong)*(int *)(local_688 + 1) != 0) {
            piVar33 = (int *)*local_688;
            local_650 = piVar33 + (longlong)*(int *)(local_688 + 1) * 0x3c;
            local_624 = (uint)((ulonglong)local_638 >> 2) & 0x3fffffff;
            local_5b0 = (void *)((longlong)local_688 + 0x34);
            local_640 = local_688 + 8;
            local_628 = CONCAT31(local_628._1_3_,local_678 == (undefined4 *)0x0 || local_658 == 0);
            local_5c0 = local_678 + 0xc6a;
LAB_142f61c7f:
            lVar12 = (**(code **)(**(longlong **)(piVar33 + 0x2e) + 0x30))();
            if ((*(byte *)(lVar12 + 0x29) & 4) != 0) {
              for (plVar14 = *(longlong **)(piVar33 + 0x30); plVar14 != (longlong *)0x0;
                  plVar14 = (longlong *)
                            (**(code **)(*plVar14 + 0x38))
                                      (plVar14,*(undefined4 *)(LVar7.QuadPart + 8))) {
                plVar15 = (longlong *)(**(code **)(*plVar14 + 0x30))(plVar14);
                if ((plVar15 != (longlong *)0x0) && (plVar15[3] != 0)) {
                  (**(code **)(*plVar15 + 0x4c0))(plVar15);
                  local_108 = (LARGE_INTEGER *)0x0;
                  local_100 = 0x200000000;
                  local_a8 = 0;
                  local_b8 = 0;
                  uStack_b0 = 0;
                  local_c8 = 0;
                  uStack_c0 = 0;
                  local_d8 = 0;
                  uStack_d0 = 0;
                  local_e8 = 0;
                  uStack_e0 = 0;
                  local_f8 = (undefined8 *****)0x0;
                  uStack_f0 = 0;
                  local_a0 = (PSRWLOCK)0x0;
                  uStack_98 = (LARGE_INTEGER *)0x0;
                  memset(&local_1b0,0,0x98);
                  FUN_140bed418();
                  *(undefined **)(local_1a8 + (ulonglong)DAT_14ca3a848 * 2) = &DAT_14ca3a800;
                  auStack_148[DAT_14ca3a848] = 0;
                  local_1c8 = 0;
                  uStack_1c0 = 0;
                  local_1d8 = 0;
                  uStack_1d0 = 0;
                  local_1e8 = 0;
                  uStack_1e0 = 0;
                  local_1f8 = 0;
                  pRStack_1f0 = (PSRWLOCK)0x0;
                  local_208 = 0;
                  puStack_200 = (undefined4 *)0x0;
                  local_218 = (undefined4 *)0x0;
                  uStack_210 = 0;
                  local_228 = (undefined **)0x0;
                  uStack_220 = (undefined4 *)0x0;
                  uVar13 = (**(code **)(**(longlong **)(piVar33 + 0x2e) + 0x30))();
                  cVar8 = FUN_14007744c(plVar15,&local_1b0,uVar13);
                  if (cVar8 != '\0') {
                    local_680 = (LARGE_INTEGER *)0x0;
                    if (pRStack_1f0 != (PSRWLOCK)0x0) {
                      local_680 = (LARGE_INTEGER *)local_228;
                    }
                    local_518 = 0;
                    uStack_510 = 0;
                    local_528 = 0;
                    uStack_520 = 0;
                    local_548 = 0;
                    uStack_540 = 0;
                    local_558 = 0;
                    uStack_550 = 0;
                    local_568 = 0;
                    uStack_560 = 0;
                    local_538 = pRStack_1f0;
                    local_690 = (LARGE_INTEGER *)pRStack_1f0;
                    local_a0 = pRStack_1f0;
                    pLStack_530 = local_680;
                    uStack_98 = local_680;
                    FUN_1447662e4(&local_118,&local_568);
                    uVar34 = local_658;
                    local_578 = DAT_14ca44d40;
                    local_570 = DAT_14ca44d68;
                    if ((char)local_628 == '\0') {
                      uVar10 = *(uint *)(*(longlong *)(local_658 + 0x218) + 0x158);
                      if ((-1 < (int)uVar10) && ((int)uVar10 < (int)local_678[0xc70])) {
                        puVar24 = *(undefined4 **)(local_678 + 0xc6e);
                        if (*(undefined4 **)(local_678 + 0xc6e) == (undefined4 *)0x0) {
                          puVar24 = local_5c0;
                        }
                        if (((uint)puVar24[uVar10 >> 5] >> (uVar10 & 0x1f) & 1) != 0) {
                          local_578 = *(undefined8 *)
                                       (*(longlong *)(local_678 + 0xc66) + (ulonglong)uVar10 * 8);
                        }
                      }
                    }
                    uVar19 = (ulonglong)(local_a8 & 0x3f) - (ulonglong)(local_a8 >> 1 & 0x15);
                    uVar19 = (uVar19 >> 2 & 0x3333333333333333) + (uVar19 & 0x3333333333333333);
                    uVar19 = ((uVar19 >> 4) + uVar19 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                             0x38;
                    if (uVar19 == 0) {
                      local_588 = (undefined8 *)&DAT_00000058;
                      local_580 = (undefined8 *****)0x0;
                    }
                    else {
                      pLVar40 = local_108;
                      if (local_108 == (LARGE_INTEGER *)0x0) {
                        pLVar40 = &local_118;
                      }
                      local_580 = &local_f8;
                      if (0x50 < local_a8._2_2_) {
                        local_580 = local_f8;
                      }
                      local_588 = (undefined8 *)pLVar40[uVar19 - 1].QuadPart;
                    }
                    local_6c8 = &local_578;
                    local_6d8 = plVar14;
                    local_6d0 = plVar15;
                    local_6c0 = &local_588;
                    FUN_14474308c(local_690,LVar7.QuadPart,*(undefined4 *)(LVar7.QuadPart + 8),
                                  local_658);
                    local_238 = 0;
                    local_230 = 0x700000000;
                    local_6d8 = *(longlong **)(piVar33 + 0x2e);
                    local_6b0 = *(int **)(piVar33 + 0x2a);
                    if (*(int **)(piVar33 + 0x2a) == (int *)0x0) {
                      local_6b0 = piVar33;
                    }
                    local_698 = &local_290;
                    local_6a8 = &local_578;
                    local_6c0 = (undefined8 **)uVar34;
                    local_6c8 = (undefined8 *)
                                CONCAT44(local_6c8._4_4_,*(undefined4 *)(LVar7.QuadPart + 8));
                    local_6d0 = (longlong *)((ulonglong)local_6d0 & 0xffffffffffffff00);
                    local_6b8 = piVar33;
                    local_6a0 = &local_588;
                    FUN_1456bf974(local_690,local_680[3].QuadPart,LVar7.QuadPart);
                    uStack_88 = local_630;
                    local_90 = *(uint *)((longlong)local_688 + 0x14);
                    local_58c = local_624;
                    piVar25 = *(int **)(piVar33 + 0x2a);
                    if (*(int **)(piVar33 + 0x2a) == (int *)0x0) {
                      piVar25 = piVar33;
                    }
                    local_590 = piVar25[0x1a];
                    iVar11 = piVar25[0x1b] - local_590;
                    uVar10 = iVar11 + 1;
                    if ((uint)piVar25[0x1b] < local_590 || iVar11 == 0) {
                      uVar10 = local_90;
                    }
                    local_594 = *(uint *)(local_688 + 3) / 0xc - local_590;
                    if (uVar10 < local_594) {
                      local_594 = uVar10;
                    }
                    local_598 = (uint)local_5f0;
                    uVar2 = *(ushort *)&((PSRWLOCK)(local_690 + 0x22))->Ptr;
                    puVar32 = local_688;
                    if (uVar2 == 0) goto LAB_142f6211d;
                    puVar29 = (undefined1 *)local_588[6];
                    puVar26 = (undefined1 *)
                              ((longlong)local_588 + ((longlong)puVar29 >> 0x18) + 0x30);
                    if (((ulonglong)puVar29 & 1) == 0) {
                      puVar26 = puVar29;
                    }
                    lVar12 = (longlong)*(int *)(local_588 + 7);
                    if (lVar12 < 1) goto LAB_142f6211d;
                    iVar11 = *(int *)(local_588 + 5);
                    iVar27 = iVar11 + 0xe;
                    if (-1 < iVar11 + 7) {
                      iVar27 = iVar11 + 7;
                    }
                    pLVar40 = (LARGE_INTEGER *)
                              ((ulonglong)
                               (uint)((iVar27 >> 3) +
                                     (*(int *)(local_588 + 1) + *(int *)(local_588 + 3) + iVar11) *
                                     8) + (longlong)local_580);
                    puVar22 = (undefined8 *)(puVar26 + 8);
                    goto LAB_142f62562;
                  }
                  if ((0x50 < local_a8._2_2_) &&
                     ((undefined8 *****)local_f8 != (undefined8 *****)0x0)) {
                    FUN_1400020a8();
                  }
                  local_a8 = local_a8 & 0xffff;
                  local_f8 = (undefined8 ****)0x0;
                  if (local_108 != (LARGE_INTEGER *)0x0) {
                    FUN_1400020a8();
                  }
                }
              }
            }
            goto LAB_142f62463;
          }
LAB_142f61bdd:
          plVar15 = local_630;
          plVar14 = local_668;
          puVar32 = local_688;
          bVar35 = 1;
          if ((local_610 != (longlong *)0x0) &&
             (*(uint *)(local_630 + 3) != *(uint *)(local_688 + 3))) {
            local_6d8 = (longlong *)CONCAT44(local_6d8._4_4_,*(uint *)(local_688 + 3) >> 2);
            local_6b8 = (int *)0x0;
            local_6c0 = (undefined8 **)CONCAT44(local_6c0._4_4_,0x108);
            local_6c8 = (undefined8 *)CONCAT44(local_6c8._4_4_,0x400);
            local_6d0 = (longlong *)CONCAT71(local_6d0._1_7_,0xd);
            FUN_1407fe5c2(local_630,local_5f8,
                          L"FRayTracingDynamicGeometryCollection::RayTracingDynamicVertexBuffer");
            bVar35 = 0;
          }
          if ((int)plVar14[10] == *(int *)((longlong)puVar32 + 0x1c)) {
            bVar35 = bVar35 & (*(uint *)(plVar14 + 0x14) & 10) == 2 &
                     *(byte *)((longlong)plVar14 + 0x55);
          }
          else {
            *(int *)(plVar14 + 10) = *(int *)((longlong)puVar32 + 0x1c);
            plVar15 = plVar14 + 0xb;
            FUN_14005bcf4(plVar14[0xb],(int)plVar14[0xc]);
            *(undefined4 *)(plVar14 + 0xc) = 0;
            uVar10 = 0;
            iVar11 = 0;
            if (*(int *)((longlong)plVar14 + 100) != 0) {
              FUN_1472c1754(plVar15,0);
              iVar11 = (int)plVar14[0xc];
              uVar10 = *(uint *)((longlong)plVar14 + 100);
            }
            uVar36 = *(undefined4 *)((longlong)puVar32 + 0x14);
            uVar3 = *(undefined4 *)((longlong)puVar32 + 0x1c);
            *(uint *)(plVar14 + 0xc) = iVar11 + 1U;
            if (uVar10 < iVar11 + 1U) {
              FUN_1471b2628(plVar15,iVar11);
            }
            lVar12 = *plVar15;
            lVar37 = (longlong)iVar11;
            *(undefined8 *)(lVar12 + lVar37 * 0x28) = 0;
            *(undefined8 *)(lVar12 + 8 + lVar37 * 0x28) = 3;
            *(undefined4 *)(lVar12 + 0x10 + lVar37 * 0x28) = 0xc;
            *(undefined4 *)(lVar12 + 0x14 + lVar37 * 0x28) = uVar36;
            *(undefined4 *)(lVar12 + 0x18 + lVar37 * 0x28) = 0;
            *(undefined4 *)(lVar12 + 0x1c + lVar37 * 0x28) = uVar3;
            *(undefined2 *)(lVar12 + 0x20 + lVar37 * 0x28) = 0x100;
            *(undefined1 *)(lVar12 + 0x22 + lVar37 * 0x28) = 1;
            bVar35 = 0;
            plVar15 = local_630;
            plVar14 = local_668;
          }
          if ((longlong)(int)plVar14[0xc] != 0) {
            plVar39 = (longlong *)local_668[0xb];
            plVar14 = plVar39 + (longlong)(int)plVar14[0xc] * 5;
            puVar32 = local_638;
            do {
              lVar12 = *plVar15;
              lVar37 = *plVar39;
              if (lVar37 != lVar12) {
                *plVar39 = lVar12;
                if (lVar12 != 0) {
                  LOCK();
                  *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
                  UNLOCK();
                }
                if (lVar37 != 0) {
                  LOCK();
                  puVar20 = (uint *)(lVar37 + 8);
                  uVar10 = *puVar20;
                  *puVar20 = *puVar20 - 1;
                  UNLOCK();
                  if ((uVar10 & 0x3fffffff) == 1) {
                    puVar20 = (uint *)(lVar37 + 8);
                    LOCK();
                    uVar10 = *puVar20;
                    *puVar20 = *puVar20 | 0x40000000;
                    UNLOCK();
                    if ((uVar10 >> 0x1e & 1) == 0) {
                      bVar44 = *(byte *)(lVar37 + 0xd);
                      plVar16 = (longlong *)FUN_14001cc68(0x10,8);
                      plVar16[1] = lVar37;
                      plVar18 = DAT_14ca843c0;
                      plVar17 = DAT_14ca843c8;
                      plVar15 = local_630;
                      puVar32 = local_638;
                      if ((bVar44 & 2) == 0) {
                        do {
                          *plVar16 = (longlong)plVar18;
                          LOCK();
                          bVar45 = plVar18 != DAT_14ca843c0;
                          plVar17 = plVar16;
                          if (bVar45) {
                            plVar18 = DAT_14ca843c0;
                            plVar17 = DAT_14ca843c0;
                          }
                          DAT_14ca843c0 = plVar17;
                          UNLOCK();
                        } while (bVar45);
                      }
                      else {
                        do {
                          *plVar16 = (longlong)plVar17;
                          LOCK();
                          bVar45 = plVar17 != DAT_14ca843c8;
                          plVar18 = plVar16;
                          if (bVar45) {
                            plVar17 = DAT_14ca843c8;
                            plVar18 = DAT_14ca843c8;
                          }
                          DAT_14ca843c8 = plVar18;
                          UNLOCK();
                        } while (bVar45);
                      }
                    }
                  }
                }
              }
              *(int *)((longlong)plVar39 + 0xc) = (int)puVar32;
              plVar39 = plVar39 + 5;
            } while (plVar39 != plVar14);
          }
          plVar14 = local_668;
          if (bVar35 == 0) {
            FUN_147428186(local_668,local_5f8,4);
          }
          lVar12 = local_5c8;
          plVar15 = local_670;
          uVar10 = *(uint *)(plVar14 + 0x14);
          local_4f8 = local_688[4];
          uVar9 = uVar10;
          if (local_610 == (longlong *)0x0) {
            local_4f0 = (undefined4)local_670[9];
            FUN_1472b4b08(local_670 + 8,plVar14 + 0xb);
            uVar9 = *(uint *)(plVar14 + 0x14);
          }
          *(uint *)(plVar14 + 0x14) = uVar9 & 0xfffffffe;
          if ((uVar10 & 1) == 0) {
            plVar14 = plVar15 + 2;
            iVar11 = (int)plVar15[3];
            *(uint *)(plVar15 + 3) = iVar11 + 1U;
            if (*(uint *)((longlong)plVar15 + 0x1c) < iVar11 + 1U) {
              FUN_1472c1a7a(plVar14,iVar11);
            }
          }
          else {
            iVar11 = (int)plVar15[1];
            *(uint *)(plVar15 + 1) = iVar11 + 1U;
            plVar14 = plVar15;
            if (*(uint *)((longlong)plVar15 + 0xc) < iVar11 + 1U) {
              FUN_1472c1a7a(plVar15,iVar11);
            }
          }
          FUN_1472c1a1a((longlong)iVar11 * 0x20 + *plVar14,&local_508);
          lVar37 = -1;
          if (local_610 == (longlong *)0x0) {
            lVar37 = plVar15[0xe];
          }
          local_668[6] = lVar37;
          FUN_1472c162a(local_508,uStack_500 & 0xffffffff);
          if (local_508 != 0) {
            FUN_1400020a8();
          }
          lVar12 = lVar12 + 1;
          piVar33 = local_608;
        } while (lVar12 < local_608[8]);
      }
      piVar33 = piVar33 + 9;
    } while (piVar33 != local_620);
  }
  FUN_1472bbb15(local_308,local_300);
  local_300 = 0;
  if (local_2fc != 0) {
    FUN_1472bfe3e(&local_308,0);
  }
  lVar37 = local_648;
  lVar12 = DAT_14ca964f8;
  if ((char)local_4b8 != '\0') {
    cVar8 = FUN_147430d07();
    if (cVar8 != '\0') {
      FUN_1468b3f6e(lVar12 + 0x270,local_2f8);
    }
    FUN_14068ded2(local_2f8,0);
  }
  FUN_1436a12c2(local_468);
  FUN_144b27220(local_468);
  local_360 = 0;
  uStack_358 = 0;
  local_370 = 0;
  uStack_368 = 0;
  if (local_4a8 != 0) {
    if ((longlong)(int)local_498 != 0) {
      sVar31 = (longlong)(int)local_498 * 8;
      lVar12 = 0;
      do {
        FUN_140152f5c(*(undefined8 *)((longlong)local_4a0 + lVar12),local_4a8);
        lVar12 = lVar12 + 8;
      } while (sVar31 - lVar12 != 0);
      LOCK();
      bVar45 = DAT_14ca8c140 == '\0';
      if (bVar45) {
        DAT_14ca8c140 = '\x01';
      }
      UNLOCK();
      if (!bVar45) {
        FUN_1447d2058(&DAT_14ca8c140);
      }
      lVar37 = local_648;
      iVar11 = DAT_14ca8c180;
      lVar12 = (longlong)DAT_14ca8c180;
      iVar27 = DAT_14ca8c180 + local_498;
      uVar10 = DAT_14ca8c184 - DAT_14ca8c180;
      DAT_14ca8c180 = iVar27;
      if (uVar10 < local_498) {
        FUN_1400f7990(&DAT_14ca8c178,iVar11);
      }
      memcpy((void *)(lVar12 * 8 + _DAT_14ca8c178),local_4a0,sVar31);
      LOCK();
      bVar45 = DAT_14ca8c140 == '\x01';
      if (bVar45) {
        DAT_14ca8c140 = '\0';
      }
      UNLOCK();
      if (!bVar45) {
        FUN_14008cdb0(&DAT_14ca8c140);
      }
    }
    local_498 = 0;
    if (local_494 < 0) {
      FUN_145ccb7b2(&local_4a0,0);
    }
  }
  FUN_1447609e4(local_490);
  FUN_1447850c6(CONCAT44(uStack_4ac,uStack_4b0));
  FUN_1400d0e8a(&DAT_14ca47560,local_5e0);
  lVar12 = CONCAT44(uStack_4ac,uStack_4b0);
  local_118.QuadPart = 0;
  uStack_110 = 0;
  FUN_144775d28(&local_118,1);
  uVar34 = uStack_110;
  piVar33 = local_660;
  lVar30 = (longlong)(int)uStack_110;
  uVar10 = (int)uStack_110 + 1;
  uStack_110 = CONCAT44(uStack_110._4_4_,uVar10);
  if (uStack_110._4_4_ < uVar10) {
    FUN_14741464c(&local_118,uVar34 & 0xffffffff);
  }
  *(longlong *)(local_118.QuadPart + lVar30 * 8) = lVar12;
  local_1b0.s = local_118.s;
  local_1a8[0] = (int)uStack_110;
  FUN_14007658c(&DAT_14ca850c8,&local_1b0,0);
  if ((longlong *)local_118.QuadPart != (longlong *)0x0) {
    FUN_1400020a8();
  }
  local_6d8 = (longlong *)0x0;
  FUN_14482edda(local_5b8 + 0x7e1,local_5d8,local_600,1);
  dVar1 = *(double *)(*(longlong *)(puStack_4d0 + 2) + 0x90);
  uVar36 = 0;
  local_624 = 0;
  if (DAT_14c7608fc != 0) {
    local_624 = FUN_1447e0190();
  }
  if (*(longlong *)(puStack_4d0 + 0x4ef8) != 0) {
    uVar36 = *(undefined4 *)(*(longlong *)(puStack_4d0 + 0x4ef8) + 0x3a0);
  }
  if ((longlong)(int)local_298 != 0) {
    local_5d8 = CONCAT44(local_5d8._4_4_,uVar36);
    local_5b0 = (void *)CONCAT44(local_5b0._4_4_,DAT_14c760900);
    piVar25 = local_2a0 + (longlong)(int)local_298 * 9;
    local_630 = (longlong *)(piVar33 + 0xc);
    local_680 = (LARGE_INTEGER *)(piVar33 + 0x20);
    local_638 = (undefined8 *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xea8);
    local_688 = (undefined8 *)0x0;
    local_670 = (longlong *)0x0;
    local_668 = (longlong *)0x0;
    piVar41 = local_2a0;
    local_5f0 = piVar25;
    do {
      iVar11 = piVar41[2];
      uVar10 = piVar41[4] - iVar11;
      if (uVar10 != 0 && iVar11 <= piVar41[4]) {
        local_650 = *(int **)(*(longlong *)(local_4d8.QuadPart + 0x3358) + (longlong)*piVar41 * 8);
        plVar14 = (longlong *)((longlong)iVar11 * 0x80 + local_318);
        lVar12 = *(longlong *)(*(longlong *)(local_4d8.QuadPart + 0x3330) + (longlong)*piVar41 * 8);
        plVar15 = plVar14 + (ulonglong)uVar10 * 0x10;
        do {
          lVar30 = *plVar14;
          if (((*(longlong *)(lVar30 + 0x30) == -1) || (*(longlong *)(lVar30 + 0x30) == lVar37)) &&
             (FUN_147ccd8ce(DAT_14ca964f8,lVar30), (*(byte *)(lVar30 + 0xa0) & 8) == 0)) {
            if (*(int *)(lVar30 + 0xa4) != -1) {
              iVar11 = piVar33[0xe];
              piVar33[0xe] = iVar11 + 1U;
              if ((uint)piVar33[0xf] < iVar11 + 1U) {
                FUN_1472bfe9e(local_630,iVar11);
              }
              *(longlong *)(*local_630 + (longlong)iVar11 * 8) = lVar30;
              lVar37 = local_648;
            }
            iVar11 = (int)plVar14[2];
            iVar27 = iVar11;
            if (iVar11 == 0) {
              iVar27 = (int)plVar14[4];
            }
            if (iVar27 == *(int *)(lVar30 + 0x60)) {
LAB_142f634bb:
              if ((*(char *)((longlong)plVar14 + 0x2d) != '\0') ||
                 (bVar35 = *(byte *)(lVar12 + 0x173), (bVar35 & 0x20) != 0)) {
                uVar34 = CONCAT71((int7)((ulonglong)local_228 >> 8),0xff);
                local_228 = (undefined **)(uVar34 & 0xffffffffffffe0ff);
                if ((iVar11 == 0) && ((int)plVar14[4] == 0)) {
                  local_228 = (undefined **)(uVar34 & 0xffffffffffffe000);
                }
                else {
                  FUN_1472b0b22(&local_228,plVar14,local_650);
                }
                FUN_1472aade4(lVar12,&local_228);
                bVar35 = *(byte *)(lVar12 + 0x173);
              }
              pLVar40 = local_680;
              bVar44 = DAT_14ca385c8 == 0;
              if (((bool)bVar44) || (lVar37 = local_648, -1 < (char)bVar35)) {
                local_628 = *(int *)(lVar12 + 0x204);
                local_610 = plVar14 + 1;
                if ((0 < (int)plVar14[2]) && (lVar37 = *local_610, 0 < *(int *)(lVar37 + 0xb0))) {
                  lVar43 = *(longlong *)(lVar37 + 0xa8);
                  if (*(longlong *)(lVar37 + 0xa8) == 0) {
                    lVar43 = lVar37;
                  }
                  if (*(longlong *)(lVar43 + 0x98) != 0) {
                    local_628 = *(int *)(lVar43 + 0xa4) + (int)local_5d8;
                  }
                }
                local_5e8 = *(LARGE_INTEGER *)(lVar30 + 0x90);
                uVar10 = (uint)(byte)((byte)*(uint *)(lVar12 + 0x1ec) | 8);
                if (DAT_14ca385f8 == 0) {
                  uVar10 = *(uint *)(lVar12 + 0x1ec);
                }
                local_5f8 = CONCAT71(local_5f8._1_7_,*(undefined1 *)((longlong)plVar14 + 0x2a));
                uVar9 = (uint)(byte)((byte)uVar10 | 2);
                if (DAT_14ca385e0 == 0) {
                  uVar9 = uVar10;
                }
                local_5c0 = (undefined4 *)CONCAT44(local_5c0._4_4_,uVar9);
                local_5c8 = CONCAT71(local_5c8._1_7_,*(undefined1 *)(lVar12 + 0x1ea));
                uVar10 = *(uint *)(plVar14 + 8);
                lVar37 = 0x38;
                if (uVar10 == 0) {
                  uVar10 = *(uint *)(plVar14 + 10);
                  lVar37 = 0x48;
                  if (uVar10 != 0) goto LAB_142f636a0;
                  local_640 = (undefined8 *)(longlong)(int)plVar14[0xc];
                  if (local_640 == (undefined8 *)0x0) {
                    uVar10 = *(uint *)(plVar14 + 0xe);
                    local_640 = (undefined8 *)(ulonglong)uVar10;
                    if (uVar10 == 0) {
                      local_620 = (int *)CONCAT44(local_620._4_4_,(int)plVar14[6]);
                      local_618 = (LARGE_INTEGER *)0x0;
                      local_640 = (undefined8 *)0x0;
                      local_608 = (int *)CONCAT44(local_608._4_4_,local_628);
                      uVar42 = 0;
                      local_658 = (ulonglong)local_658._4_4_ << 0x20;
                    }
                    else {
                      local_618 = (LARGE_INTEGER *)plVar14[0xd];
                      local_5e0 = CONCAT44(local_5e0._4_4_,*(undefined4 *)((longlong)plVar14 + 0x74)
                                          );
                      uVar42 = 0;
                      local_608 = (int *)CONCAT44(local_608._4_4_,0xffffffff);
                      local_658 = (ulonglong)local_658._4_4_ << 0x20;
                      local_620 = (int *)CONCAT44(local_620._4_4_,uVar10);
                    }
                  }
                  else {
                    local_678 = (undefined4 *)CONCAT71(local_678._1_7_,bVar44);
                    lVar37 = (longlong)local_640 << 7;
                    if ((int)plVar14[0xc] < 0) {
                      lVar37 = -1;
                    }
                    pLVar40 = (LARGE_INTEGER *)
                              (*(longlong *)(piVar33 + 0x20) + 0xfU & 0xfffffffffffffff0);
                    uVar34 = (longlong)pLVar40 + lVar37;
                    if (*(ulonglong *)(piVar33 + 0x22) < uVar34) {
                      FUN_140023dd8(local_680,(int)lVar37 + 0x10);
                      pLVar40 = (LARGE_INTEGER *)(local_680->QuadPart + 0xfU & 0xfffffffffffffff0);
                      uVar34 = lVar37 + (longlong)pLVar40;
                    }
                    local_680->QuadPart = uVar34;
                    local_618 = pLVar40;
                    memcpy(pLVar40,(void *)plVar14[0xb],(longlong)(int)plVar14[0xc] << 7);
                    uVar42 = 0;
                    local_608 = (int *)CONCAT44(local_608._4_4_,0xffffffff);
                    local_658 = local_658 & 0xffffffff00000000;
                    local_620 = (int *)CONCAT44(local_620._4_4_,(int)local_640);
                    bVar44 = (byte)local_678;
                  }
                }
                else {
LAB_142f636a0:
                  uVar34 = (ulonglong)uVar10;
                  lVar37 = *(longlong *)((longlong)plVar14 + lVar37);
                  pLVar28 = (LARGE_INTEGER *)((longlong)(int)uVar10 * 4);
                  if ((int)uVar10 < 0) {
                    pLVar28 = (LARGE_INTEGER *)0xffffffffffffffff;
                  }
                  uVar42 = *(longlong *)(piVar33 + 0x20) + 0xfU & 0xfffffffffffffff0;
                  uVar19 = uVar42 + (longlong)pLVar28;
                  local_658 = CONCAT44(local_658._4_4_,uVar10);
                  if (*(ulonglong *)(piVar33 + 0x22) < uVar19) {
                    local_678 = (undefined4 *)CONCAT71(local_678._1_7_,bVar44);
                    local_690 = pLVar28;
                    FUN_140023dd8(local_680,(int)pLVar28 + 0x10);
                    uVar34 = local_658 & 0xffffffff;
                    uVar42 = pLVar40->QuadPart + 0xfU & 0xfffffffffffffff0;
                    uVar19 = (longlong)local_690 + uVar42;
                    bVar44 = (byte)local_678;
                  }
                  local_680->QuadPart = uVar19;
                  local_608 = (int *)CONCAT44(local_608._4_4_,0xffffffff);
                  if (0 < (int)uVar34) {
                    uVar19 = 0;
                    do {
                      *(int *)(uVar42 + uVar19 * 4) =
                           *(int *)(lVar37 + uVar19 * 4) + *(int *)(lVar12 + 0x204);
                      uVar19 = uVar19 + 1;
                    } while (uVar34 != uVar19);
                  }
                  local_618 = (LARGE_INTEGER *)0x0;
                  local_640 = (undefined8 *)0x0;
                  local_620 = (int *)CONCAT44(local_620._4_4_,(int)uVar34);
                  piVar25 = local_5f0;
                }
                bVar44 = bVar35 >> 6 & bVar44;
                local_690 = (LARGE_INTEGER *)CONCAT71(local_690._1_7_,bVar44);
                cVar8 = (-1 < (char)bVar35) + '\x02';
                if (bVar44 == 0) {
                  cVar8 = -1 < (char)bVar35;
                }
                iVar11 = (int)plVar14[2];
                if (iVar11 == 0) {
                  iVar11 = (int)plVar14[4];
                }
                local_678 = (undefined4 *)FUN_1472c3fd6(local_5d0,cVar8,iVar11);
                uVar13 = uStack_c0;
                lVar37 = local_648;
                if (-1 < (char)bVar35) {
                  iVar11 = (int)plVar14[2];
                  if (iVar11 == 0) {
                    iVar11 = (int)plVar14[4];
                  }
                  *local_660 = *local_660 + iVar11;
                  local_118 = local_5e8;
                  uStack_110 = CONCAT44(uStack_110._4_4_,*local_678);
                  local_108 = local_618;
                  local_100 = CONCAT44((undefined4)local_5e0,(int)local_640);
                  local_f8 = (undefined8 ****)CONCAT44(local_f8._4_4_,local_608._0_4_);
                  local_e8 = CONCAT44(local_e8._4_4_,(undefined4)local_658);
                  uStack_e0 = 0;
                  local_d8 = CONCAT44(local_628,(int)local_620);
                  local_c8 = CONCAT44(local_c8._4_4_,(undefined4)local_658);
                  uStack_c0._0_4_ =
                       (uint)CONCAT12((undefined1)local_5c8,CONCAT11(1,(undefined1)local_5f8));
                  uStack_c0._5_3_ = SUB83(uVar13,5);
                  uStack_c0._0_5_ = CONCAT14((char)local_5c0,(uint)uStack_c0);
                  local_6d0 = (longlong *)CONCAT71(local_6d0._1_7_,1);
                  local_6d8 = (longlong *)local_650;
                  uStack_f0 = uVar42;
                  uStack_d0 = uVar42;
                  FUN_1472b0bf2(local_660,&local_228,&local_118,0);
                }
                piVar33 = local_660;
                if ((char)local_690 != '\0') {
                  iVar11 = (int)plVar14[2];
                  if (iVar11 == 0) {
                    iVar11 = (int)plVar14[4];
                  }
                  *local_660 = *local_660 + iVar11;
                  local_1a8[0] = FUN_1472c3992(local_678,1,0);
                  local_1b0 = local_5e8;
                  local_1a0 = local_618;
                  local_198 = SUB84(local_640,0);
                  local_194 = (undefined4)local_5e0;
                  local_190 = local_608._0_4_;
                  local_180 = (undefined4)local_658;
                  local_178 = 0;
                  local_170 = local_620._0_4_;
                  local_16c = local_628;
                  local_160 = (undefined4)local_658;
                  local_158 = (undefined1)local_5f8;
                  local_157 = 1;
                  local_156 = (undefined1)local_5c8;
                  local_155 = 0;
                  local_154 = SUB81(local_5c0,0);
                  local_6d0 = (longlong *)CONCAT71(local_6d0._1_7_,1);
                  local_6d8 = (longlong *)local_650;
                  local_188 = uVar42;
                  local_168 = uVar42;
                  FUN_1472b0bf2(piVar33,&local_228,&local_1b0,1);
                  lVar37 = local_648;
                }
                if ((char)local_624 == '\0') {
                  uVar10 = *(uint *)(plVar14 + 2);
                  if (uVar10 == 0) {
                    local_610 = plVar14 + 3;
                    uVar10 = *(uint *)(plVar14 + 4);
                  }
                  piVar25 = local_5f0;
                  piVar33 = local_660;
                  if (0 < (int)uVar10) {
                    lVar43 = *local_610;
                    uVar34 = 0;
                    do {
                      uStack_210 = *(undefined8 *)(lVar30 + 0x90);
                      local_218 = puStack_4d0 + 0x45c0;
                      uStack_220 = puStack_4d0 + 0x45c4;
                      local_228 = &PTR_FUN_14a2da920;
                      local_208 = CONCAT44(local_208._4_4_,(int)uVar34);
                      puStack_200 = local_678;
                      local_1f8 = 0xffffffffffffffff;
                      local_26c = *(undefined1 *)(local_4d8.QuadPart + 0x3600);
                      local_290 = &PTR_FUN_14a2da418;
                      local_288 = &local_228;
                      local_280.s = local_4d8.s;
                      local_278 = puStack_4d0;
                      local_270 = 3;
                      if ((longlong *)local_4d8.QuadPart != (longlong *)0x0) {
                        local_270 = *(undefined4 *)(local_4d8.QuadPart + 8);
                      }
                      FUN_1472b0d56(&local_290,lVar43,1,local_650);
                      uVar34 = uVar34 + 1;
                      lVar43 = lVar43 + 0xf0;
                      piVar25 = local_5f0;
                      piVar33 = local_660;
                      lVar37 = local_648;
                    } while (uVar10 != uVar34);
                  }
                }
                else {
                  if ((uint)local_688 < (uint)local_5b0) {
                    if (local_670 == (longlong *)0x0) {
                      local_690 = (LARGE_INTEGER *)CONCAT44(local_690._4_4_,1);
                      local_670 = (longlong *)0x0;
                      goto LAB_142f63a79;
                    }
                    uVar10 = *(uint *)(local_670 + 0x380);
                    if (uVar10 == 0x80) {
                      local_690 = (LARGE_INTEGER *)((ulonglong)local_690._4_4_ << 0x20);
                      goto LAB_142f63a79;
                    }
                  }
                  else {
                    uVar36 = (undefined4)CONCAT71((int7)((ulonglong)local_688 >> 8),1);
                    if (local_668 == (longlong *)0x0) {
                      local_690 = (LARGE_INTEGER *)CONCAT44(local_690._4_4_,uVar36);
                    }
                    else {
                      local_690 = (LARGE_INTEGER *)CONCAT44(local_690._4_4_,uVar36);
                      local_6d8 = (longlong *)CONCAT44(local_6d8._4_4_,(uint)local_688);
                      FUN_1472b0743(CONCAT44(uStack_4c4,local_4c8),local_4d8.QuadPart,puStack_4d0);
                    }
                    local_688 = (undefined8 *)0x0;
                    local_670 = (longlong *)0x0;
                    local_668 = (longlong *)0x0;
LAB_142f63a79:
                    plVar39 = (longlong *)CONCAT44(uStack_4c4,local_4c8);
                    puVar20 = (uint *)*local_638;
                    if (puVar20 != (uint *)0x0) goto LAB_142f63aa4;
                    while( true ) {
                      puVar32 = local_638;
                      FUN_14472e504(local_638);
                      puVar20 = (uint *)*puVar32;
LAB_142f63aa4:
                      puVar32 = (undefined8 *)
                                (*(longlong *)(puVar20 + 0x10) + 7U & 0xfffffffffffffff8);
                      uVar10 = puVar20[0x12];
                      if (puVar32 + 900 <= puVar20 + 0x4000) break;
                      while( true ) {
                        *(uint **)(puVar20 + 0x10) = puVar20 + 0x4000;
                        LOCK();
                        uVar9 = *puVar20;
                        *puVar20 = *puVar20 + uVar10 + 1;
                        UNLOCK();
                        if ((uVar9 ^ uVar10) != 0xffffffff) break;
                        puVar20 = (uint *)*local_638;
                        *puVar20 = 0xffffffff;
                        *(uint **)(puVar20 + 0x10) = puVar20 + 0x16;
                        puVar20[0x12] = 0;
                        *local_638 = puVar20;
                        puVar32 = (undefined8 *)((longlong)puVar20 + 0x5fU & 0xfffffffffffffff8);
                        uVar10 = 0;
                        if (puVar32 + 900 <= puVar20 + 0x4000) {
                          uVar10 = 1;
                          goto LAB_142f63b28;
                        }
                      }
                    }
                    uVar10 = uVar10 + 1;
LAB_142f63b28:
                    *(undefined8 **)(puVar20 + 0x10) = puVar32 + 0x385;
                    puVar20[0x12] = uVar10;
                    *(int *)(puVar32 + -1) = ((int)puVar32 + -8) - (int)puVar20;
                    *(undefined4 *)((longlong)puVar32 + -4) = 0x1c20;
                    puVar32[1] = 0;
                    *puVar32 = &PTR_FUN_14a2dba38;
                    lVar37 = *plVar39;
                    do {
                      puVar32[1] = lVar37;
                      LOCK();
                      lVar43 = *plVar39;
                      bVar45 = lVar37 == lVar43;
                      if (bVar45) {
                        *plVar39 = (longlong)puVar32;
                        lVar43 = lVar37;
                      }
                      UNLOCK();
                      lVar37 = lVar43;
                    } while (!bVar45);
                    plVar39 = puVar32 + 2;
                    memset(plVar39,0,0x1c10);
                    lVar37 = 0;
                    do {
                      puVar22 = (undefined8 *)((longlong)puVar32 + lVar37 + 0x2c);
                      *puVar22 = 0;
                      puVar22[1] = 0;
                      puVar22 = (undefined8 *)((longlong)puVar32 + lVar37 + 0x20);
                      *puVar22 = 0;
                      puVar22[1] = 0;
                      *(undefined8 *)((longlong)plVar39 + lVar37) = 0;
                      ((undefined8 *)((longlong)plVar39 + lVar37))[1] = 0;
                      lVar37 = lVar37 + 0x38;
                    } while (lVar37 != 0x1c00);
                    *(undefined4 *)(puVar32 + 0x382) = 0;
                    puVar32[899] = 0;
                    if (local_668 == (longlong *)0x0) {
                      local_668 = plVar39;
                    }
                    lVar37 = local_648;
                    if ((char)local_690 == '\0') {
                      local_670[0x381] = (longlong)plVar39;
                      uVar10 = *(uint *)(puVar32 + 0x382);
                      local_670 = plVar39;
                    }
                    else {
                      uVar10 = 0;
                      local_670 = plVar39;
                    }
                  }
                  plVar39 = local_670 + (ulonglong)uVar10 * 7;
                  *(uint *)(local_670 + 0x380) = uVar10 + 1;
                  iVar11 = (int)plVar14[2];
                  if (iVar11 == 0) {
                    iVar11 = (int)plVar14[4];
                    uVar36 = *(undefined4 *)((longlong)plVar14 + 0x1c);
                    lVar43 = plVar14[4];
                    uVar3 = *(undefined4 *)((longlong)plVar14 + 0x24);
                    *(int *)(plVar39 + 4) = (int)plVar14[3];
                    *(undefined4 *)((longlong)plVar39 + 0x24) = uVar36;
                    *(int *)(plVar39 + 5) = (int)lVar43;
                    *(undefined4 *)((longlong)plVar39 + 0x2c) = uVar3;
                  }
                  else {
                    pLVar40 = (LARGE_INTEGER *)plVar39[2];
                    puVar24 = (undefined4 *)plVar39[3];
                    lVar43 = local_610[1];
                    plVar39[2] = *local_610;
                    plVar39[3] = lVar43;
                    local_228._0_4_ = (int)pLVar40;
                    local_228._4_4_ = (int)((ulonglong)pLVar40 >> 0x20);
                    uStack_220._0_4_ = (int)puVar24;
                    uStack_220._4_4_ = (int)((ulonglong)puVar24 >> 0x20);
                    *(int *)local_610 = (int)local_228;
                    *(int *)((longlong)local_610 + 4) = local_228._4_4_;
                    *(int *)(local_610 + 1) = (int)uStack_220;
                    *(int *)((longlong)local_610 + 0xc) = uStack_220._4_4_;
                    local_228 = (undefined **)pLVar40;
                    uStack_220 = puVar24;
                  }
                  local_688 = (undefined8 *)(ulonglong)(uint)((int)local_688 + iVar11);
                  *plVar39 = (longlong)local_650;
                  plVar39[1] = *(longlong *)(lVar30 + 0x90);
                  plVar39[6] = (longlong)local_678;
                  piVar33 = local_660;
                }
              }
            }
            else if (*(int *)(lVar30 + 0x60) == 0) {
              iVar27 = iVar11;
              if (iVar11 == 0) {
                iVar27 = (int)plVar14[4];
              }
              if (iVar27 == 1) goto LAB_142f634bb;
            }
          }
          plVar14 = plVar14 + 0x10;
        } while (plVar14 != plVar15);
        if ((0.0 < *(float *)(DAT_14ca38570 + 4)) &&
           (SQRT((*(double *)(puStack_4d0 + 0x416) - *(double *)(local_650 + 0x80)) *
                 (*(double *)(puStack_4d0 + 0x416) - *(double *)(local_650 + 0x80)) +
                 (*(double *)(puStack_4d0 + 0x414) - *(double *)(local_650 + 0x7e)) *
                 (*(double *)(puStack_4d0 + 0x414) - *(double *)(local_650 + 0x7e)) +
                 (*(double *)(puStack_4d0 + 0x412) - *(double *)(local_650 + 0x7c)) *
                 (*(double *)(puStack_4d0 + 0x412) - *(double *)(local_650 + 0x7c))) <
            (double)*(float *)(DAT_14ca38570 + 4))) {
          *(float *)(lVar12 + 0x13c) = (float)dVar1;
          FUN_1400612d4(lVar12,(float)dVar1,1);
        }
      }
      piVar41 = piVar41 + 9;
    } while (piVar41 != piVar25);
    if (local_668 != (longlong *)0x0) {
      local_6d8 = (longlong *)CONCAT44(local_6d8._4_4_,(int)local_688);
      FUN_1472b0743(CONCAT44(uStack_4c4,local_4c8),local_4d8.QuadPart,puStack_4d0);
    }
  }
  FUN_1472bbb4b(local_318,local_310);
  local_310 = 0;
  if (local_30c != 0) {
    FUN_1472bff88(&local_318,0);
  }
  FUN_1472b13da(&local_4d8);
  plVar14 = TlsGetValue(DAT_14c896140);
  if (plVar14 == (longlong *)0x0) {
    plVar14 = (longlong *)FUN_14001cc68(0x18,0x10);
    *plVar14 = 0;
    plVar14[1] = 0;
    *(undefined4 *)(plVar14 + 2) = 0;
    TlsSetValue(DAT_14c896140,plVar14);
  }
  plVar15 = (longlong *)plVar14[1];
  if (plVar15 == (longlong *)0x0) {
    plVar15 = (longlong *)*plVar14;
    if (plVar15 == (longlong *)0x0) {
      uVar10 = DAT_14c896180.s.LowPart;
      LVar7 = DAT_14c896180;
      while (DAT_14c896180 = LVar7, local_4d8 = LVar7, (LVar7.QuadPart & 0x3ffffffU) != 0) {
        local_118.QuadPart = (LVar7.QuadPart & 0xfffffffffc000000U) + 0x4000000;
        if ((ulonglong)local_118.QuadPart >> 0x1a < (ulonglong)LVar7.QuadPart >> 0x1a) {
          FUN_14000f986(0x3a83126f);
        }
        uVar34 = (ulonglong)((uVar10 & 0x3ffffff) >> 0xe);
        uVar19 = (ulonglong)(LVar7.s.LowPart & 0x3fff);
        local_118.QuadPart =
             local_118.QuadPart & 0xfffffffffc000000U |
             (ulonglong)*(uint *)(*(longlong *)(&DAT_14c833b00 + uVar34 * 8) + 0x10 + uVar19 * 0x18)
        ;
        LOCK();
        bVar45 = local_4d8.QuadPart == DAT_14c896180.QuadPart;
        LVar7.QuadPart = local_118.QuadPart;
        if (!bVar45) {
          LVar7 = DAT_14c896180;
        }
        DAT_14c896180 = LVar7;
        UNLOCK();
        if (bVar45) {
          *(undefined4 *)(*(longlong *)(&DAT_14c833b00 + uVar34 * 8) + uVar19 * 0x18 + 0x10) = 0;
          plVar15 = *(longlong **)
                     (*(longlong *)(&DAT_14c833b00 + uVar34 * 8) + 8 +
                     (ulonglong)(uVar10 & 0x3fff) * 0x18);
          FUN_1447d080c(uVar10 & 0x3ffffff);
          plVar14[1] = (longlong)plVar15;
          if (plVar15 == (longlong *)0x0) goto LAB_142f6438d;
          goto LAB_142f643c8;
        }
        uVar10 = DAT_14c896180.s.LowPart;
        LVar7 = DAT_14c896180;
      }
      plVar14[1] = 0;
LAB_142f6438d:
      puVar32 = (undefined8 *)FUN_14001cc68(0x10000,0);
      plVar14[1] = (longlong)puVar32;
      iVar11 = 0xff;
      do {
        puVar22 = puVar32 + 0x20;
        *puVar32 = puVar22;
        iVar11 = iVar11 + -1;
        puVar32 = puVar22;
      } while (iVar11 != 0);
      *puVar22 = 0;
      plVar15 = (longlong *)plVar14[1];
    }
    else {
      plVar14[1] = (longlong)plVar15;
      *plVar14 = 0;
    }
LAB_142f643c8:
    *(undefined4 *)(plVar14 + 2) = 0x100;
    iVar11 = 0x100;
  }
  else {
    iVar11 = (int)plVar14[2];
  }
  plVar14[1] = *plVar15;
  *(int *)(plVar14 + 2) = iVar11 + -1;
  *plVar15 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
  plVar15[1] = (longlong)&DAT_100000002;
  plVar15[2] = 0;
  *(undefined4 *)(plVar15 + 3) = 0;
  *(undefined4 *)(plVar15 + 4) = 0xffffffff;
  plVar15[6] = 0;
  plVar15[7] = 0x100000000;
  *(undefined1 *)(plVar15 + 8) = 1;
  plVar15[0xe] = (longlong)
                 LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                 ::TTaskDelegateDummy::vftable;
  plVar15[0xf] = 0;
  plVar15[0x10] = -0x17ffffffffffffe0;
  plVar15[0x12] = 0;
  plVar15[0x13] = 0x100000000;
  *(undefined2 *)(plVar15 + 0x14) = 0;
  LOCK();
  bVar45 = (char)plVar15[8] == '\x01';
  if (bVar45) {
    *(char *)(plVar15 + 8) = '\0';
  }
  UNLOCK();
  if (!bVar45) {
    FUN_14008cdb0(plVar15 + 8);
  }
  plVar14 = local_5a8;
  *plVar15 = (longlong)&PTR_FUN_14a2dbb98;
  if (*(code **)(plVar15[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(plVar15[0xe] + 0x18))(plVar15 + 0xe,plVar15 + 9);
  }
  plVar15[0xe] = (longlong)
                 LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                 ::
                 TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                 ::vftable;
  plVar15[9] = (longlong)plVar15;
  plVar15[10] = (longlong)plVar15;
  lVar12 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  lVar37 = *(longlong *)(lVar12 + 0x2b8);
  if (lVar37 == 0) {
    lVar37 = 0;
  }
  else {
    lVar37 = *(longlong *)(lVar37 + 0x30);
  }
  plVar15[0xf] = lVar37;
  plVar15[0x10] = -0x37ffffad74adc700;
  *(undefined4 *)((longlong)plVar15 + 0x1c) = 0;
  plVar15[0x15] = (longlong)plVar14;
  plVar15[0x16] = (longlong)local_5b8;
  plVar15[0x17] = local_600;
  plVar15[0x18] = (longlong)local_660;
  plVar15[0x19] = local_5d0;
  *plVar15 = (longlong)&PTR_FUN_14a2dbb88;
  FUN_1400e88c2(plVar15,plVar14 + 0xe);
  local_4d8.s.LowPart._0_1_ = 1;
  FUN_1447439e4(plVar15);
  puVar32 = TlsGetValue(DAT_14c896140);
  if (puVar32 == (undefined8 *)0x0) {
    puVar32 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *puVar32 = 0;
    puVar32[1] = 0;
    *(undefined4 *)(puVar32 + 2) = 0;
    TlsSetValue(DAT_14c896140,puVar32);
  }
  puVar22 = (undefined8 *)puVar32[1];
  if (puVar22 == (undefined8 *)0x0) {
    puVar22 = (undefined8 *)*puVar32;
    if (puVar22 == (undefined8 *)0x0) {
      uVar10 = DAT_14c896180.s.LowPart;
      LVar7 = DAT_14c896180;
      while (DAT_14c896180 = LVar7, local_4d8 = LVar7, (LVar7.QuadPart & 0x3ffffffU) != 0) {
        local_118.QuadPart = (LVar7.QuadPart & 0xfffffffffc000000U) + 0x4000000;
        if ((ulonglong)local_118.QuadPart >> 0x1a < (ulonglong)LVar7.QuadPart >> 0x1a) {
          FUN_14000f986(0x3a83126f);
        }
        uVar34 = (ulonglong)((uVar10 & 0x3ffffff) >> 0xe);
        uVar19 = (ulonglong)(LVar7.s.LowPart & 0x3fff);
        local_118.QuadPart =
             local_118.QuadPart & 0xfffffffffc000000U |
             (ulonglong)*(uint *)(*(longlong *)(&DAT_14c833b00 + uVar34 * 8) + 0x10 + uVar19 * 0x18)
        ;
        LOCK();
        bVar45 = local_4d8.QuadPart == DAT_14c896180.QuadPart;
        LVar7.QuadPart = local_118.QuadPart;
        if (!bVar45) {
          LVar7 = DAT_14c896180;
        }
        DAT_14c896180 = LVar7;
        UNLOCK();
        if (bVar45) {
          *(undefined4 *)(*(longlong *)(&DAT_14c833b00 + uVar34 * 8) + uVar19 * 0x18 + 0x10) = 0;
          puVar22 = *(undefined8 **)
                     (*(longlong *)(&DAT_14c833b00 + uVar34 * 8) + 8 +
                     (ulonglong)(uVar10 & 0x3fff) * 0x18);
          FUN_1447d080c(uVar10 & 0x3ffffff);
          puVar32[1] = puVar22;
          if (puVar22 != (undefined8 *)0x0) goto LAB_142f64766;
          goto LAB_142f64aec;
        }
        uVar10 = DAT_14c896180.s.LowPart;
        LVar7 = DAT_14c896180;
      }
      puVar32[1] = 0;
LAB_142f64aec:
      puVar22 = (undefined8 *)FUN_14001cc68(0x10000,0);
      puVar32[1] = puVar22;
      iVar11 = 0xff;
      puVar23 = puVar22;
      do {
        puVar21 = puVar23 + 0x20;
        *puVar23 = puVar21;
        iVar11 = iVar11 + -1;
        puVar23 = puVar21;
      } while (iVar11 != 0);
    }
    else {
      puVar32[1] = puVar22;
      puVar21 = puVar32;
    }
    *puVar21 = 0;
LAB_142f64766:
    *(undefined4 *)(puVar32 + 2) = 0x100;
    iVar11 = 0xff;
  }
  else {
    iVar11 = *(int *)(puVar32 + 2) + -1;
  }
  puVar32[1] = *puVar22;
  *(int *)(puVar32 + 2) = iVar11;
  *puVar22 = UE::Tasks::Private::FTaskBase::vftable;
  puVar22[1] = &DAT_100000002;
  puVar22[2] = 0;
  *(undefined4 *)(puVar22 + 3) = 0;
  *(undefined4 *)(puVar22 + 4) = 0xffffffff;
  puVar22[6] = 0;
  puVar22[7] = 0x100000000;
  *(undefined1 *)(puVar22 + 8) = 1;
  puVar22[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                 ::TTaskDelegateDummy::vftable;
  puVar22[0xf] = 0;
  puVar22[0x10] = 0xe800000000000020;
  puVar22[0x12] = 0;
  puVar22[0x13] = 0x100000000;
  *(undefined2 *)(puVar22 + 0x14) = 0;
  LOCK();
  bVar45 = *(char *)(puVar22 + 8) == '\x01';
  if (bVar45) {
    *(char *)(puVar22 + 8) = '\0';
  }
  UNLOCK();
  if (!bVar45) {
    FUN_14008cdb0(puVar22 + 8);
  }
  *puVar22 = &PTR_FUN_14a2dbbb8;
  if (*(code **)(puVar22[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(puVar22[0xe] + 0x18))(puVar22 + 0xe,puVar22 + 9);
  }
  puVar22[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                 ::
                 TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                 ::vftable;
  puVar22[9] = puVar22;
  puVar22[10] = puVar22;
  lVar12 = *(longlong *)(lVar12 + 0x2b8);
  if (lVar12 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = *(undefined8 *)(lVar12 + 0x30);
  }
  puVar22[0xf] = uVar13;
  puVar22[0x10] = 0xc80000528b525680;
  *(undefined4 *)((longlong)puVar22 + 0x1c) = 0;
  puVar22[0x15] = local_600;
  puVar22[0x16] = local_660;
  puVar22[0x17] = local_5d0;
  *puVar22 = &PTR_FUN_14a2dbba8;
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)puVar22 + 0xc) = *(int *)((longlong)puVar22 + 0xc) + 1;
    UNLOCK();
    cVar8 = FUN_1456bb142(plVar15 + 0x11,puVar22);
    if (cVar8 == '\0') {
      LOCK();
      *(int *)((longlong)puVar22 + 0xc) = *(int *)((longlong)puVar22 + 0xc) + -1;
      UNLOCK();
    }
    else {
      LOCK();
      *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
      UNLOCK();
      FUN_1456bb1d4(puVar22 + 5,plVar15);
    }
  }
  local_4d8.s.LowPart._0_1_ = 1;
  FUN_1447439e4(puVar22);
  puVar32 = *(undefined8 **)(local_600 + 0x11788);
  *(undefined8 **)(local_600 + 0x11788) = puVar22;
  if (puVar32 != (undefined8 *)0x0) {
    LOCK();
    piVar33 = (int *)(puVar32 + 1);
    *piVar33 = *piVar33 + -1;
    UNLOCK();
    if (*piVar33 == 0) {
      (**(code **)*puVar32)(puVar32,1);
    }
  }
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar15 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*plVar15)(plVar15,1);
    }
  }
  if ((local_80 ^ (ulonglong)auStack_6f8) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
  while( true ) {
    pLVar40 = (LARGE_INTEGER *)((longlong)pLVar40 + (ulonglong)*(ushort *)((longlong)puVar22 + -6));
    puVar22 = puVar22 + 3;
    lVar12 = lVar12 + -1;
    if (lVar12 == 0) break;
LAB_142f62562:
    if (*(short *)((longlong)&((PSRWLOCK)(local_690 + 0x21))->Ptr + 4) == *(short *)(puVar22 + -1))
    {
      puVar29 = (undefined1 *)*puVar22;
      puVar26 = (undefined1 *)(((longlong)puVar29 >> 0x18) + (longlong)puVar22);
      if (((ulonglong)puVar29 & 1) == 0) {
        puVar26 = puVar29;
      }
      if (0 < (longlong)*(int *)(puVar22 + 1)) {
        lVar12 = 0;
        goto LAB_142f62637;
      }
      break;
    }
  }
  goto LAB_142f6211d;
  while( true ) {
    pLVar40 = (LARGE_INTEGER *)
              ((longlong)pLVar40 + (ulonglong)*(ushort *)(puVar26 + lVar12 * 4 + 2));
    lVar12 = lVar12 + 1;
    if (*(int *)(puVar22 + 1) == lVar12) break;
LAB_142f62637:
    if (*(short *)((longlong)&((PSRWLOCK)(local_690 + 0x21))->Ptr + 6) ==
        *(short *)(puVar26 + lVar12 * 4)) {
      sVar31 = 4;
      if (uVar2 < 4) {
        sVar31 = (size_t)(uint)uVar2;
      }
      local_680 = pLVar40;
      memcpy(pLVar40,&local_598,sVar31);
      puVar32 = local_688;
      uVar10 = (uint)uVar2 - (int)sVar31;
      memset((void *)((longlong)local_680 + sVar31),0,(longlong)(int)((int)uVar10 >> 0x1f & uVar10))
      ;
      break;
    }
  }
LAB_142f6211d:
  uVar2 = *(ushort *)((longlong)&((PSRWLOCK)(local_690 + 0x22))->Ptr + 6);
  if (uVar2 != 0) {
    puVar29 = (undefined1 *)local_588[6];
    puVar26 = (undefined1 *)((longlong)local_588 + ((longlong)puVar29 >> 0x18) + 0x30);
    if (((ulonglong)puVar29 & 1) == 0) {
      puVar26 = puVar29;
    }
    lVar12 = (longlong)*(int *)(local_588 + 7);
    if (0 < lVar12) {
      iVar11 = *(int *)(local_588 + 5);
      iVar27 = iVar11 + 0xe;
      if (-1 < iVar11 + 7) {
        iVar27 = iVar11 + 7;
      }
      pLVar40 = (LARGE_INTEGER *)
                ((ulonglong)
                 (uint)((iVar27 >> 3) +
                       (*(int *)(local_588 + 1) + *(int *)(local_588 + 3) + iVar11) * 8) +
                (longlong)local_580);
      puVar22 = (undefined8 *)(puVar26 + 8);
      do {
        if (*(short *)((longlong)&((PSRWLOCK)(local_690 + 0x22))->Ptr + 2) ==
            *(short *)(puVar22 + -1)) {
          puVar29 = (undefined1 *)*puVar22;
          puVar26 = (undefined1 *)(((longlong)puVar29 >> 0x18) + (longlong)puVar22);
          if (((ulonglong)puVar29 & 1) == 0) {
            puVar26 = puVar29;
          }
          if (0 < (longlong)*(int *)(puVar22 + 1)) {
            lVar12 = 0;
            goto LAB_142f62a37;
          }
          break;
        }
        pLVar40 = (LARGE_INTEGER *)
                  ((longlong)pLVar40 + (ulonglong)*(ushort *)((longlong)puVar22 + -6));
        puVar22 = puVar22 + 3;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
  }
LAB_142f6212d:
  uVar2 = *(ushort *)((longlong)&((PSRWLOCK)(local_690 + 0x23))->Ptr + 4);
  if (uVar2 != 0) {
    puVar29 = (undefined1 *)local_588[6];
    puVar26 = (undefined1 *)((longlong)local_588 + ((longlong)puVar29 >> 0x18) + 0x30);
    if (((ulonglong)puVar29 & 1) == 0) {
      puVar26 = puVar29;
    }
    lVar12 = (longlong)*(int *)(local_588 + 7);
    if (0 < lVar12) {
      iVar11 = *(int *)(local_588 + 5);
      iVar27 = iVar11 + 0xe;
      if (-1 < iVar11 + 7) {
        iVar27 = iVar11 + 7;
      }
      pLVar40 = (LARGE_INTEGER *)
                ((ulonglong)
                 (uint)((iVar27 >> 3) +
                       (*(int *)(local_588 + 1) + *(int *)(local_588 + 3) + iVar11) * 8) +
                (longlong)local_580);
      puVar22 = (undefined8 *)(puVar26 + 8);
      do {
        if (*(short *)&((PSRWLOCK)(local_690 + 0x23))->Ptr == *(short *)(puVar22 + -1)) {
          puVar29 = (undefined1 *)*puVar22;
          puVar26 = (undefined1 *)(((longlong)puVar29 >> 0x18) + (longlong)puVar22);
          if (((ulonglong)puVar29 & 1) == 0) {
            puVar26 = puVar29;
          }
          if (0 < (longlong)*(int *)(puVar22 + 1)) {
            lVar12 = 0;
            goto LAB_142f62a87;
          }
          break;
        }
        pLVar40 = (LARGE_INTEGER *)
                  ((longlong)pLVar40 + (ulonglong)*(ushort *)((longlong)puVar22 + -6));
        puVar22 = puVar22 + 3;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
  }
LAB_142f6213d:
  uVar2 = *(ushort *)((longlong)&((PSRWLOCK)(local_690 + 0x24))->Ptr + 2);
  if (uVar2 != 0) {
    puVar29 = (undefined1 *)local_588[6];
    puVar26 = (undefined1 *)((longlong)local_588 + ((longlong)puVar29 >> 0x18) + 0x30);
    if (((ulonglong)puVar29 & 1) == 0) {
      puVar26 = puVar29;
    }
    lVar12 = (longlong)*(int *)(local_588 + 7);
    if (0 < lVar12) {
      iVar11 = *(int *)(local_588 + 5);
      iVar27 = iVar11 + 0xe;
      if (-1 < iVar11 + 7) {
        iVar27 = iVar11 + 7;
      }
      pLVar40 = (LARGE_INTEGER *)
                ((ulonglong)
                 (uint)((iVar27 >> 3) +
                       (*(int *)(local_588 + 1) + *(int *)(local_588 + 3) + iVar11) * 8) +
                (longlong)local_580);
      puVar22 = (undefined8 *)(puVar26 + 8);
      do {
        if (*(short *)((longlong)&((PSRWLOCK)(local_690 + 0x23))->Ptr + 6) ==
            *(short *)(puVar22 + -1)) {
          puVar29 = (undefined1 *)*puVar22;
          puVar26 = (undefined1 *)(((longlong)puVar29 >> 0x18) + (longlong)puVar22);
          if (((ulonglong)puVar29 & 1) == 0) {
            puVar26 = puVar29;
          }
          if (0 < (longlong)*(int *)(puVar22 + 1)) {
            lVar12 = 0;
            goto LAB_142f62ad7;
          }
          break;
        }
        pLVar40 = (LARGE_INTEGER *)
                  ((longlong)pLVar40 + (ulonglong)*(ushort *)((longlong)puVar22 + -6));
        puVar22 = puVar22 + 3;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
  }
LAB_142f6214d:
  uVar2 = *(ushort *)((longlong)&((PSRWLOCK)(local_690 + 0x25))->Ptr + 6);
  if (uVar2 != 0) {
    puVar29 = (undefined1 *)local_588[6];
    puVar26 = (undefined1 *)((longlong)local_588 + ((longlong)puVar29 >> 0x18) + 0x30);
    if (((ulonglong)puVar29 & 1) == 0) {
      puVar26 = puVar29;
    }
    lVar12 = (longlong)*(int *)(local_588 + 7);
    if (0 < lVar12) {
      iVar11 = *(int *)(local_588 + 5);
      iVar27 = iVar11 + 0xe;
      if (-1 < iVar11 + 7) {
        iVar27 = iVar11 + 7;
      }
      pLVar40 = (LARGE_INTEGER *)
                ((ulonglong)
                 (uint)((iVar27 >> 3) +
                       (*(int *)(local_588 + 1) + *(int *)(local_588 + 3) + iVar11) * 8) +
                (longlong)local_580);
      puVar22 = (undefined8 *)(puVar26 + 8);
      do {
        if (*(short *)((longlong)&((PSRWLOCK)(local_690 + 0x25))->Ptr + 2) ==
            *(short *)(puVar22 + -1)) {
          puVar29 = (undefined1 *)*puVar22;
          puVar26 = (undefined1 *)(((longlong)puVar29 >> 0x18) + (longlong)puVar22);
          if (((ulonglong)puVar29 & 1) == 0) {
            puVar26 = puVar29;
          }
          if (0 < (longlong)*(int *)(puVar22 + 1)) {
            lVar12 = 0;
            goto LAB_142f62b27;
          }
          break;
        }
        pLVar40 = (LARGE_INTEGER *)
                  ((longlong)pLVar40 + (ulonglong)*(ushort *)((longlong)puVar22 + -6));
        puVar22 = puVar22 + 3;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
  }
LAB_142f6215d:
  local_598 = (uint)*(byte *)(puVar32 + 6);
  uVar2 = *(ushort *)&((PSRWLOCK)(local_690 + 0x25))->Ptr;
  if (uVar2 != 0) {
    puVar29 = (undefined1 *)local_588[6];
    puVar26 = (undefined1 *)((longlong)local_588 + ((longlong)puVar29 >> 0x18) + 0x30);
    if (((ulonglong)puVar29 & 1) == 0) {
      puVar26 = puVar29;
    }
    lVar12 = (longlong)*(int *)(local_588 + 7);
    if (0 < lVar12) {
      iVar11 = *(int *)(local_588 + 5);
      iVar27 = iVar11 + 0xe;
      if (-1 < iVar11 + 7) {
        iVar27 = iVar11 + 7;
      }
      pLVar40 = (LARGE_INTEGER *)
                ((ulonglong)
                 (uint)((iVar27 >> 3) +
                       (*(int *)(local_588 + 1) + *(int *)(local_588 + 3) + iVar11) * 8) +
                (longlong)local_580);
      puVar32 = (undefined8 *)(puVar26 + 8);
      do {
        if (*(short *)((longlong)&((PSRWLOCK)(local_690 + 0x24))->Ptr + 4) ==
            *(short *)(puVar32 + -1)) {
          puVar29 = (undefined1 *)*puVar32;
          puVar26 = (undefined1 *)(((longlong)puVar29 >> 0x18) + (longlong)puVar32);
          if (((ulonglong)puVar29 & 1) == 0) {
            puVar26 = puVar29;
          }
          if (0 < (longlong)*(int *)(puVar32 + 1)) {
            lVar12 = 0;
            goto LAB_142f62679;
          }
          break;
        }
        pLVar40 = (LARGE_INTEGER *)
                  ((longlong)pLVar40 + (ulonglong)*(ushort *)((longlong)puVar32 + -6));
        puVar32 = puVar32 + 3;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
  }
LAB_142f62178:
  uVar2 = *(ushort *)((longlong)&((PSRWLOCK)(local_690 + 0x26))->Ptr + 4);
  if (uVar2 != 0) {
    puVar29 = (undefined1 *)local_588[6];
    puVar26 = (undefined1 *)((longlong)local_588 + ((longlong)puVar29 >> 0x18) + 0x30);
    if (((ulonglong)puVar29 & 1) == 0) {
      puVar26 = puVar29;
    }
    lVar12 = (longlong)*(int *)(local_588 + 7);
    if (0 < lVar12) {
      iVar11 = *(int *)(local_588 + 5);
      iVar27 = iVar11 + 0xe;
      if (-1 < iVar11 + 7) {
        iVar27 = iVar11 + 7;
      }
      pLVar40 = (LARGE_INTEGER *)
                ((ulonglong)
                 (uint)((iVar27 >> 3) +
                       (*(int *)(local_588 + 1) + *(int *)(local_588 + 3) + iVar11) * 8) +
                (longlong)local_580);
      puVar32 = (undefined8 *)(puVar26 + 8);
      do {
        if (*(short *)&((PSRWLOCK)(local_690 + 0x26))->Ptr == *(short *)(puVar32 + -1)) {
          puVar29 = (undefined1 *)*puVar32;
          puVar26 = (undefined1 *)(((longlong)puVar29 >> 0x18) + (longlong)puVar32);
          if (((ulonglong)puVar29 & 1) == 0) {
            puVar26 = puVar29;
          }
          if (0 < (longlong)*(int *)(puVar32 + 1)) {
            lVar12 = 0;
            goto LAB_142f62b77;
          }
          break;
        }
        pLVar40 = (LARGE_INTEGER *)
                  ((longlong)pLVar40 + (ulonglong)*(ushort *)((longlong)puVar32 + -6));
        puVar32 = puVar32 + 3;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
  }
LAB_142f62188:
  local_59c = *(undefined2 *)((longlong)&((PSRWLOCK)(local_690 + 0x27))->Ptr + 2);
  local_5a0 = *(undefined4 *)((longlong)&((PSRWLOCK)(local_690 + 0x26))->Ptr + 6);
  FUN_1472b4a02(&local_588,&local_5a0,local_640);
  if (local_a0 != (PSRWLOCK)0x0) {
    lVar37 = (longlong)*(int *)((longlong)&local_a0[0x1a].Ptr + 4);
    lVar12 = *(longlong *)(*(longlong *)(uStack_98[1].QuadPart + 0x50) + lVar37 * 8);
    if (lVar12 == 0) {
      lVar12 = FUN_1400bafc2(uStack_98[1].QuadPart,lVar37,1);
    }
    lVar37 = DAT_14ca811d0;
    if (lVar12 != 0) {
      cVar8 = '\0';
      if ((DAT_14c760d84 != 0) && ((DAT_14ca84f5a & 1) != 0)) {
        local_690 = (LARGE_INTEGER *)(DAT_14ca811d0 + 8);
        AcquireSRWLockShared((PSRWLOCK)local_690);
        if (*(int *)(lVar37 + 0x28) != *(int *)(lVar37 + 0x54)) {
          lVar30 = lVar37 + 0x58;
          if (*(longlong *)(lVar37 + 0x60) != 0) {
            lVar30 = *(longlong *)(lVar37 + 0x60);
          }
          iVar11 = *(int *)(lVar30 + (ulonglong)
                                     (*(int *)(lVar37 + 0x68) - 1U &
                                     (int)lVar12 + (int)((ulonglong)lVar12 >> 0x20) * 0x17) * 4);
          if (iVar11 != -1) {
            do {
              lVar30 = *(longlong *)(lVar37 + 0x20) + (longlong)iVar11 * 0x20;
              if (*(longlong *)(*(longlong *)(lVar37 + 0x20) + (longlong)iVar11 * 0x20) == lVar12) {
                if ((lVar30 != 0) && (lVar30 != -8)) {
                  bVar35 = *(byte *)(lVar30 + 0x14);
                  ReleaseSRWLockShared((PSRWLOCK)local_690);
                  if ((bVar35 & 6) == 0) {
                    cVar8 = '\x01';
                  }
                  else {
                    cVar8 = ((bVar35 & 4) >> 2) * '\x03' + '\x02';
                  }
                  goto LAB_142f622d5;
                }
                break;
              }
              iVar11 = *(int *)(lVar30 + 0x18);
            } while (iVar11 != -1);
          }
        }
        ReleaseSRWLockShared((PSRWLOCK)local_690);
        cVar8 = '\x03';
      }
LAB_142f622d5:
      FUN_140022858(lVar12,cVar8,plVar14);
    }
  }
  uVar34 = uStack_500;
  lVar12 = (longlong)(int)uStack_500;
  uVar10 = (int)uStack_500 + 1;
  uStack_500 = CONCAT44(uStack_500._4_4_,uVar10);
  if (uStack_500._4_4_ < uVar10) {
    FUN_1472c1948(&local_508,uVar34 & 0xffffffff);
  }
  lVar37 = local_508;
  lVar12 = lVar12 * 0x98;
  local_690 = (LARGE_INTEGER *)(local_508 + lVar12);
  *(undefined8 *)(local_508 + 0x10 + lVar12) = 0;
  *(undefined8 *)(local_508 + 0x18 + lVar12) = 0x200000000;
  puVar32 = (undefined8 *)(local_508 + 0x20 + lVar12);
  *puVar32 = 0;
  puVar32[1] = 0;
  puVar32 = (undefined8 *)(local_508 + 0x60 + lVar12);
  *puVar32 = 0;
  puVar32[1] = 0;
  puVar32 = (undefined8 *)(local_508 + 0x50 + lVar12);
  *puVar32 = 0;
  puVar32[1] = 0;
  puVar32 = (undefined8 *)(local_508 + 0x40 + lVar12);
  *puVar32 = 0;
  puVar32[1] = 0;
  puVar32 = (undefined8 *)(local_508 + 0x30 + lVar12);
  *puVar32 = 0;
  puVar32[1] = 0;
  *(undefined4 *)(local_508 + 0x70 + lVar12) = 0;
  *(undefined8 *)(local_508 + 0x20 + lVar12) = 0;
  if (local_690 != &local_118) {
    lVar30 = (longlong)(int)(DWORD)local_100;
    local_680 = local_108;
    local_690[3].s.LowPart = (DWORD)local_100;
    FUN_14470ca02(local_690,local_100 & 0xffffffff,2);
    if (lVar30 != 0) {
      pLVar40 = local_680;
      if (local_680 == (LARGE_INTEGER *)0x0) {
        pLVar40 = &local_118;
      }
      pLVar28 = (LARGE_INTEGER *)local_690[2].QuadPart;
      if ((LARGE_INTEGER *)local_690[2].QuadPart == (LARGE_INTEGER *)0x0) {
        pLVar28 = local_690;
      }
      memcpy(pLVar28,pLVar40,lVar30 << 3);
    }
  }
  puVar32 = (undefined8 *)(lVar12 + lVar37 + 0x20);
  *(undefined2 *)(local_690 + 0xe) = (undefined2)local_a8;
  uVar34 = (ulonglong)local_a8._2_2_;
  *(ushort *)((longlong)local_690 + 0x72) = local_a8._2_2_;
  if (0x50 < uVar34) {
    _Dst = (void *)FUN_14001cc68(uVar34,0x10);
    *puVar32 = _Dst;
    if (0x50 < local_a8._2_2_) {
      memcpy(_Dst,local_f8,uVar34);
      goto LAB_142f623ff;
    }
  }
  pppppuVar38 = &local_f8;
  for (lVar12 = 10; lVar12 != 0; lVar12 = lVar12 + -1) {
    *puVar32 = *pppppuVar38;
    pppppuVar38 = pppppuVar38 + 1;
    puVar32 = puVar32 + 1;
  }
LAB_142f623ff:
  local_690[0x11].s.LowPart = local_90;
  *(undefined4 *)((longlong)local_690 + 0x8c) = uStack_8c;
  local_690[0x12].s.LowPart = (DWORD)uStack_88;
  *(undefined4 *)((longlong)local_690 + 0x94) = uStack_88._4_4_;
  local_690[0xf].s.LowPart = (DWORD)local_a0;
  *(undefined4 *)((longlong)local_690 + 0x7c) = local_a0._4_4_;
  local_690[0x10].s.LowPart = (DWORD)uStack_98;
  *(undefined4 *)((longlong)local_690 + 0x84) = uStack_98._4_4_;
  if (local_238 != 0) {
    FUN_1400020a8();
  }
  if ((0x50 < local_a8._2_2_) && ((undefined8 *****)local_f8 != (undefined8 *****)0x0)) {
    FUN_1400020a8();
  }
  local_a8 = local_a8 & 0xffff;
  local_f8 = (undefined8 ****)0x0;
  if (local_108 != (LARGE_INTEGER *)0x0) {
    FUN_1400020a8();
  }
LAB_142f62463:
  piVar33 = piVar33 + 0x3c;
  if (piVar33 == local_650) goto LAB_142f61bdd;
  goto LAB_142f61c7f;
  while( true ) {
    pLVar40 = (LARGE_INTEGER *)
              ((longlong)pLVar40 + (ulonglong)*(ushort *)(puVar26 + lVar12 * 4 + 2));
    lVar12 = lVar12 + 1;
    puVar32 = local_688;
    if (*(int *)(puVar22 + 1) == lVar12) break;
LAB_142f62a37:
    if (*(short *)((longlong)&((PSRWLOCK)(local_690 + 0x22))->Ptr + 4) ==
        *(short *)(puVar26 + lVar12 * 4)) {
      sVar31 = 4;
      if (uVar2 < 4) {
        sVar31 = (size_t)(uint)uVar2;
      }
      local_680 = pLVar40;
      memcpy(pLVar40,&local_594,sVar31);
      uVar10 = (uint)uVar2 - (int)sVar31;
      memset((void *)((longlong)local_680 + sVar31),0,(longlong)(int)((int)uVar10 >> 0x1f & uVar10))
      ;
      puVar32 = local_688;
      break;
    }
  }
  goto LAB_142f6212d;
  while( true ) {
    pLVar40 = (LARGE_INTEGER *)
              ((longlong)pLVar40 + (ulonglong)*(ushort *)(puVar26 + lVar12 * 4 + 2));
    lVar12 = lVar12 + 1;
    puVar32 = local_688;
    if (*(int *)(puVar22 + 1) == lVar12) break;
LAB_142f62a87:
    if (*(short *)((longlong)&((PSRWLOCK)(local_690 + 0x23))->Ptr + 2) ==
        *(short *)(puVar26 + lVar12 * 4)) {
      sVar31 = 4;
      if (uVar2 < 4) {
        sVar31 = (size_t)(uint)uVar2;
      }
      local_680 = pLVar40;
      memcpy(pLVar40,&local_590,sVar31);
      uVar10 = (uint)uVar2 - (int)sVar31;
      memset((void *)((longlong)local_680 + sVar31),0,(longlong)(int)((int)uVar10 >> 0x1f & uVar10))
      ;
      puVar32 = local_688;
      break;
    }
  }
  goto LAB_142f6213d;
  while( true ) {
    pLVar40 = (LARGE_INTEGER *)
              ((longlong)pLVar40 + (ulonglong)*(ushort *)(puVar26 + lVar12 * 4 + 2));
    lVar12 = lVar12 + 1;
    puVar32 = local_688;
    if (*(int *)(puVar22 + 1) == lVar12) break;
LAB_142f62ad7:
    if (*(short *)&((PSRWLOCK)(local_690 + 0x24))->Ptr == *(short *)(puVar26 + lVar12 * 4)) {
      sVar31 = 4;
      if (uVar2 < 4) {
        sVar31 = (size_t)(uint)uVar2;
      }
      local_680 = pLVar40;
      memcpy(pLVar40,&local_4dc,sVar31);
      uVar10 = (uint)uVar2 - (int)sVar31;
      memset((void *)((longlong)local_680 + sVar31),0,(longlong)(int)((int)uVar10 >> 0x1f & uVar10))
      ;
      puVar32 = local_688;
      break;
    }
  }
  goto LAB_142f6214d;
  while( true ) {
    pLVar40 = (LARGE_INTEGER *)
              ((longlong)pLVar40 + (ulonglong)*(ushort *)(puVar26 + lVar12 * 4 + 2));
    lVar12 = lVar12 + 1;
    puVar32 = local_688;
    if (*(int *)(puVar22 + 1) == lVar12) break;
LAB_142f62b27:
    if (*(short *)((longlong)&((PSRWLOCK)(local_690 + 0x25))->Ptr + 4) ==
        *(short *)(puVar26 + lVar12 * 4)) {
      sVar31 = 4;
      if (uVar2 < 4) {
        sVar31 = (size_t)(uint)uVar2;
      }
      local_680 = pLVar40;
      memcpy(pLVar40,&local_58c,sVar31);
      uVar10 = (uint)uVar2 - (int)sVar31;
      memset((void *)((longlong)local_680 + sVar31),0,(longlong)(int)((int)uVar10 >> 0x1f & uVar10))
      ;
      puVar32 = local_688;
      break;
    }
  }
  goto LAB_142f6215d;
  while( true ) {
    pLVar40 = (LARGE_INTEGER *)
              ((longlong)pLVar40 + (ulonglong)*(ushort *)(puVar26 + lVar12 * 4 + 2));
    lVar12 = lVar12 + 1;
    if (*(int *)(puVar32 + 1) == lVar12) break;
LAB_142f62679:
    if (*(short *)((longlong)&((PSRWLOCK)(local_690 + 0x24))->Ptr + 6) ==
        *(short *)(puVar26 + lVar12 * 4)) {
      sVar31 = 4;
      if (uVar2 < 4) {
        sVar31 = (size_t)(uint)uVar2;
      }
      local_680 = pLVar40;
      memcpy(pLVar40,&local_598,sVar31);
      uVar10 = (uint)uVar2 - (int)sVar31;
      memset((void *)((longlong)local_680 + sVar31),0,(longlong)(int)((int)uVar10 >> 0x1f & uVar10))
      ;
      break;
    }
  }
  goto LAB_142f62178;
  while( true ) {
    pLVar40 = (LARGE_INTEGER *)
              ((longlong)pLVar40 + (ulonglong)*(ushort *)(puVar26 + lVar12 * 4 + 2));
    lVar12 = lVar12 + 1;
    if (*(int *)(puVar32 + 1) == lVar12) break;
LAB_142f62b77:
    if (*(short *)((longlong)&((PSRWLOCK)(local_690 + 0x26))->Ptr + 2) ==
        *(short *)(puVar26 + lVar12 * 4)) {
      sVar31 = 4;
      if (uVar2 < 4) {
        sVar31 = (size_t)(uint)uVar2;
      }
      local_680 = pLVar40;
      memcpy(pLVar40,local_5b0,sVar31);
      uVar10 = (uint)uVar2 - (int)sVar31;
      memset((void *)((longlong)local_680 + sVar31),0,(longlong)(int)((int)uVar10 >> 0x1f & uVar10))
      ;
      break;
    }
  }
  goto LAB_142f62188;
}



// FUNCTION 142f64c3e FUN_142f64c3e body=69 status=ok
// SIG undefined FUN_142f64c3e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f64c3e(void)

{
  _DAT_14ca38648 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f64c80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca38650,1);
  return;
}



// FUNCTION 142f64c83 FUN_142f64c83 body=69 status=ok
// SIG undefined FUN_142f64c83(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f64c83(void)

{
  _DAT_14ca38658 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f64cc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca38660,1);
  return;
}



// FUNCTION 142f64cc8 FUN_142f64cc8 body=69 status=ok
// SIG undefined FUN_142f64cc8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f64cc8(void)

{
  _DAT_14ca38670 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f64d0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca38678,1);
  return;
}



// FUNCTION 142f64d0d FUN_142f64d0d body=69 status=ok
// SIG undefined FUN_142f64d0d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f64d0d(void)

{
  _DAT_14ca38680 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f64d4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca38688,1);
  return;
}



// FUNCTION 142f64d52 FUN_142f64d52 body=69 status=ok
// SIG undefined FUN_142f64d52(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f64d52(void)

{
  _DAT_14ca38698 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f64d94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca386a0,1);
  return;
}



// FUNCTION 142f64da4 FUN_142f64da4 body=2469 status=ok
// SIG undefined FUN_142f64da4(void)

void FUN_142f64da4(longlong param_1,longlong param_2,longlong param_3,longlong *param_4,
                  longlong *param_5)

{
  ulonglong *puVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  char cVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  int iVar15;
  ulonglong uVar16;
  undefined6 uVar17;
  int iVar18;
  undefined8 *puVar19;
  uint uVar20;
  float fVar21;
  undefined1 auStack_138 [32];
  longlong local_118;
  longlong *local_110;
  undefined8 **local_108;
  ulonglong local_100;
  ulonglong *local_f8;
  longlong local_f0;
  longlong *local_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 *local_c8;
  ulonglong uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined8 *local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 local_80;
  uint local_7c;
  undefined4 local_78;
  int local_74;
  int local_70;
  undefined4 local_6c;
  undefined2 local_68;
  undefined4 local_66;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_f0 = *(longlong *)(param_1 + 8);
  local_c8 = (undefined8 *)0x0;
  uStack_c0 = 0;
  local_a8 = DAT_14ca85098;
  local_b8 = CONCAT44(DAT_14ca8508c,DAT_14ca85088);
  uStack_b0 = CONCAT44(DAT_14ca85094,DAT_14ca85090);
  uVar20 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_66 = 0xff001500;
  local_98 = (undefined8 *)0x20009;
  local_6c = 0x10001;
  local_68 = 0x101;
  uStack_90 = CONCAT44(DAT_14ca8508c,DAT_14ca85088);
  uStack_88 = (undefined *)CONCAT44(DAT_14ca85094,DAT_14ca85090);
  local_80 = DAT_14ca85098;
  local_78 = 0;
  iVar15 = (int)*(undefined8 *)(*param_4 + 0x84);
  local_74 = DAT_14ca84e40;
  if (iVar15 < DAT_14ca84e40) {
    local_74 = iVar15;
  }
  if (local_74 < 2) {
    local_74 = 1;
  }
  iVar18 = (int)((ulonglong)*(undefined8 *)(*param_4 + 0x84) >> 0x20);
  local_70 = DAT_14ca84e40;
  if (iVar18 < DAT_14ca84e40) {
    local_70 = iVar18;
  }
  if (local_70 < 2) {
    local_70 = 1;
  }
  puVar1 = (ulonglong *)(param_2 + 0x70);
  puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar12 + 0x24;
  local_f8 = puVar1;
  local_e8 = param_4;
  local_e0 = param_1;
  local_7c = uVar20;
  if (*(undefined8 **)(param_2 + 0x78) < puVar10) {
    FUN_140023dd8(puVar1,0x128);
    puVar12 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar10 = puVar12 + 0x24;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar10;
  FUN_1456bbb8c(puVar12,L"RayTracingAmbientOcclusion",&local_98,0);
  iVar3 = *(int *)(param_2 + 0x180);
  *(uint *)(param_2 + 0x180) = iVar3 + 1U;
  if (*(uint *)(param_2 + 0x184) < iVar3 + 1U) {
    FUN_14472c0f6(param_2 + 0x178,iVar3);
  }
  puVar1 = local_f8;
  *(undefined8 **)(*(longlong *)(param_2 + 0x178) + (longlong)iVar3 * 8) = puVar12;
  *(int *)((longlong)puVar12 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
  local_66 = 0xff001500;
  local_98 = (undefined8 *)0x20009;
  local_6c = 0x10001;
  local_68 = 0x101;
  uStack_90 = local_b8;
  uStack_88 = (undefined *)uStack_b0;
  local_80 = local_a8;
  local_74 = DAT_14ca84e40;
  if (iVar15 < DAT_14ca84e40) {
    local_74 = iVar15;
  }
  if (local_74 < 2) {
    local_74 = 1;
  }
  local_78 = 0;
  local_70 = DAT_14ca84e40;
  if (iVar18 < DAT_14ca84e40) {
    local_70 = iVar18;
  }
  if (local_70 < 2) {
    local_70 = 1;
  }
  uVar16 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar6 = uVar16 + 0x120;
  local_c8 = puVar12;
  local_7c = uVar20;
  if (*(ulonglong *)(param_2 + 0x78) < uVar6) {
    FUN_140023dd8(local_f8,0x128);
    uVar16 = *puVar1 + 7 & 0xfffffffffffffff8;
    uVar6 = uVar16 + 0x120;
  }
  *(ulonglong *)(param_2 + 0x70) = uVar6;
  FUN_1456bbb8c(uVar16,L"RayTracingAmbientOcclusionHitDistance",&local_98,0);
  iVar15 = *(int *)(param_2 + 0x180);
  *(uint *)(param_2 + 0x180) = iVar15 + 1U;
  if (*(uint *)(param_2 + 0x184) < iVar15 + 1U) {
    FUN_14472c0f6(param_2 + 0x178,iVar15);
  }
  puVar1 = local_f8;
  *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar15 * 8) = uVar16;
  *(int *)(uVar16 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
  iVar15 = DAT_14c76090c;
  if (DAT_14c76090c < 0) {
    iVar15 = *(int *)(param_3 + 0x2b2c);
  }
  puVar19 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar10 = puVar19 + 0x18;
  uStack_c0 = uVar16;
  if (*(undefined8 **)(param_2 + 0x78) < puVar10) {
    FUN_140023dd8(local_f8,0xd0);
    puVar19 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar10 = puVar19 + 0x18;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar10;
  *puVar19 = &PTR_FUN_14a2dbbc8;
  puVar19[8] = 0;
  puVar19[4] = 0;
  puVar19[5] = 0;
  puVar19[6] = 0;
  *(undefined1 *)(puVar19 + 9) = 1;
  puVar19[10] = 0;
  puVar19[0xb] = 0;
  puVar19[0xc] = 0;
  puVar19[0xd] = 0;
  puVar19[0xe] = 0;
  puVar19[0xf] = 0;
  puVar19[0x10] = 0;
  puVar19[0x11] = 0;
  puVar19[0x12] = 0;
  puVar19[0x13] = 0;
  puVar19[0x14] = 0;
  puVar19[0x15] = 0;
  puVar19[0x16] = 0;
  *(undefined1 *)(puVar19 + 0x17) = 1;
  iVar18 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar18 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar18 + 1U) {
    FUN_1448cfae8(param_2 + 0x98,iVar18);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar18 * 8) = puVar19;
  *(int *)(puVar19 + 2) = (int)(float)iVar15;
  *(undefined4 *)((longlong)puVar19 + 0x14) = *(undefined4 *)(param_3 + 0x2b34);
  *(undefined4 *)(puVar19 + 3) = *(undefined4 *)(param_3 + 0x2b30);
  fVar21 = 0.01;
  if (0.01 <= DAT_14c760924) {
    fVar21 = DAT_14c760924;
  }
  *(float *)((longlong)puVar19 + 0x1c) = fVar21;
  puVar19[4] = *(undefined8 *)(*(longlong *)(local_f0 + 0x4308) + 0x88);
  uVar8 = *(undefined8 *)(param_3 + 0x118d0);
  lVar7 = FUN_144a2c9be();
  puVar1 = local_f8;
  cVar11 = '\x02';
  if (*(char *)(lVar7 + 0x41) != '\x03') {
    cVar11 = *(char *)(lVar7 + 0x41);
  }
  puVar19[0x16] = uVar8;
  *(char *)(puVar19 + 0x17) = cVar11;
  uVar2 = *(undefined1 *)((longlong)puVar12 + 0x94);
  puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar13 + 9;
  if (*(undefined8 **)(param_2 + 0x78) < puVar10) {
    FUN_140023dd8(local_f8,0x50);
    puVar13 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar10 = puVar13 + 9;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar10;
  puVar13[1] = puVar12[1];
  puVar13[2] = 0;
  *(undefined1 *)(puVar13 + 3) = 0;
  *(undefined8 *)((longlong)puVar13 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar13 + 5) = 0;
  *puVar13 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar13 + 6) = uVar2;
  *(undefined1 *)(puVar13 + 7) = 0;
  *(undefined4 *)((longlong)puVar13 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar13 + 0x35) = 0;
  puVar13[8] = puVar12;
  iVar18 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar18 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar18 + 1U) {
    FUN_1447568fc(param_2 + 0x198,iVar18);
  }
  puVar1 = local_f8;
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar18 * 8) = puVar13;
  *(int *)((longlong)puVar13 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  puVar19[5] = puVar13;
  uVar2 = *(undefined1 *)(uVar16 + 0x94);
  puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar12 + 9;
  if (*(undefined8 **)(param_2 + 0x78) < puVar10) {
    FUN_140023dd8(local_f8,0x50);
    puVar12 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar10 = puVar12 + 9;
  }
  puVar13 = puVar19 + 2;
  *(undefined8 **)(param_2 + 0x70) = puVar10;
  puVar12[1] = *(undefined8 *)(uVar16 + 8);
  puVar12[2] = 0;
  *(undefined1 *)(puVar12 + 3) = 0;
  *(undefined8 *)((longlong)puVar12 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar12 + 5) = 0;
  *puVar12 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar12 + 6) = uVar2;
  *(undefined1 *)(puVar12 + 7) = 0;
  *(undefined4 *)((longlong)puVar12 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar12 + 0x35) = 0;
  puVar12[8] = uVar16;
  iVar18 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar18 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar18 + 1U) {
    FUN_1447568fc(param_2 + 0x198,iVar18);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar18 * 8) = puVar12;
  *(int *)((longlong)puVar12 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  puVar19[6] = puVar12;
  lVar7 = FUN_1447e4f80();
  cVar11 = '\x02';
  if (*(char *)(lVar7 + 0x41) != '\x03') {
    cVar11 = *(char *)(lVar7 + 0x41);
  }
  puVar19[8] = *(undefined8 *)(param_3 + 0x18);
  *(char *)(puVar19 + 9) = cVar11;
  plVar9 = local_e8;
  plVar14 = puVar19 + 10;
  for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
    *plVar14 = *plVar9;
    plVar9 = plVar9 + 1;
    plVar14 = plVar14 + 1;
  }
  iVar18 = *(int *)(DAT_14ca38690 + 4);
  iVar3 = *(int *)(DAT_14ca386a8 + 4);
  uVar8 = *(undefined8 *)
           (&DAT_14ca8c1f0 +
           (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(local_e0 + 0x8a4) * 2) * 8);
  FUN_145eaf6ee();
  FUN_1448e935e(uVar8,&local_98,&DAT_14ca38718,(iVar18 != 0) + (iVar3 != 0) * '\x02');
  FUN_145eaf6ee();
  puVar10 = local_98;
  local_d0 = uStack_90;
  FUN_145eaf95c();
  local_98 = (undefined8 *)0x0;
  uStack_90 = 0;
  FUN_1448f70da(puVar10,&DAT_14ca3e638,puVar13,&local_98);
  uVar8 = (**(code **)(**(longlong **)(*(longlong *)(param_3 + 8) + 0x178) + 8))();
  local_d8 = FUN_1472e1976(uVar8,param_2);
  iVar18 = *(int *)(param_3 + 0x3100);
  iVar3 = *(int *)(param_3 + 0x3104);
  iVar4 = *(int *)(param_3 + 0x30fc);
  iVar5 = *(int *)(param_3 + 0x30f8);
  FUN_145eaf95c();
  FUN_140069376(param_2);
  puVar1 = local_f8;
  uVar17 = (undefined6)((ulonglong)param_3 >> 0x10);
  uVar6 = CONCAT62(uVar17,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar6 = CONCAT62(uVar17,4);
  }
  puVar19 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar19 + 0x3f;
  if (*(undefined8 **)(param_2 + 0x78) < puVar12) {
    FUN_140023dd8(local_f8,0x200);
    puVar19 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar19 + 0x3f;
  }
  local_f0 = local_f0 + 0x4298;
  *local_f8 = (ulonglong)puVar12;
  uStack_90 = DAT_14ca3e680;
  if (DAT_14ca3e680 != 0) {
    LOCK();
    *(int *)(DAT_14ca3e680 + 8) = *(int *)(DAT_14ca3e680 + 8) + 1;
    UNLOCK();
  }
  uStack_88 = &DAT_14ca3e638;
  local_118 = CONCAT71(local_118._1_7_,1);
  local_98 = puVar13;
  FUN_140068f1a(puVar19,&local_b8,&local_98,uVar6 & 0xffffffff);
  *puVar19 = &PTR_FUN_14a2dbbd0;
  puVar19[0x37] = puVar13;
  puVar19[0x38] = local_e0;
  puVar19[0x39] = param_3;
  puVar19[0x3a] = local_d8;
  puVar19[0x3b] = puVar10;
  puVar19[0x3c] = local_d0;
  puVar19[0x3d] = CONCAT44(iVar3 - iVar4,iVar18 - iVar5);
  puVar19[0x3e] = local_f0;
  iVar18 = *(int *)(param_2 + 0x170);
  *(uint *)(param_2 + 0x170) = iVar18 + 1U;
  if (*(uint *)(param_2 + 0x174) < iVar18 + 1U) {
    FUN_14470e57a(param_2 + 0x168,iVar18);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar18 * 8) = puVar19;
  *(int *)((longlong)puVar19 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
  FUN_140069100(param_2,puVar19);
  iVar18 = *(int *)(DAT_14ca38668 + 4);
  puVar10 = local_c8;
  if (iVar18 != 0) {
    plVar9 = (longlong *)FUN_141508108();
    if (iVar18 != 1) {
      plVar9 = DAT_14ca4cb10;
    }
    local_100 = (ulonglong)(uint)(float)iVar15 << 0x20 | 0x3f800000;
    local_118 = param_3 + 0x125c0;
    local_108 = &local_c8;
    local_110 = local_e8;
    (**(code **)(*plVar9 + 0x38))(plVar9,&local_98,param_2,param_3);
    puVar10 = local_98;
  }
  *param_5 = (longlong)puVar10;
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142f65792 FUN_142f65792 body=69 status=ok
// SIG undefined FUN_142f65792(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f65792(void)

{
  _DAT_14ca38ec8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f657d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca38ed0,1);
  return;
}



// FUNCTION 142f657d7 FUN_142f657d7 body=69 status=ok
// SIG undefined FUN_142f657d7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f657d7(void)

{
  _DAT_14ca38ee0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f65819. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca38ee8,1);
  return;
}



// FUNCTION 142f6581c FUN_142f6581c body=69 status=ok
// SIG undefined FUN_142f6581c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f6581c(void)

{
  _DAT_14ca38ef8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f6585e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca38f00,1);
  return;
}



// FUNCTION 142f65861 FUN_142f65861 body=69 status=ok
// SIG undefined FUN_142f65861(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f65861(void)

{
  _DAT_14ca38f10 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f658a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca38f18,1);
  return;
}



// FUNCTION 142f658a6 FUN_142f658a6 body=69 status=ok
// SIG undefined FUN_142f658a6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f658a6(void)

{
  _DAT_14ca38f28 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f658e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca38f30,1);
  return;
}



// FUNCTION 142f658eb FUN_142f658eb body=69 status=ok
// SIG undefined FUN_142f658eb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f658eb(void)

{
  _DAT_14ca38f40 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f6592d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca38f48,1);
  return;
}



// FUNCTION 142f65930 FUN_142f65930 body=69 status=ok
// SIG undefined FUN_142f65930(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f65930(void)

{
  _DAT_14ca38f58 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f65972. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca38f60,1);
  return;
}



// FUNCTION 142f65975 FUN_142f65975 body=69 status=ok
// SIG undefined FUN_142f65975(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f65975(void)

{
  _DAT_14ca38f70 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f659b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca38f78,1);
  return;
}



// FUNCTION 142f659ba FUN_142f659ba body=69 status=ok
// SIG undefined FUN_142f659ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f659ba(void)

{
  _DAT_14ca38f88 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f659fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca38f90,1);
  return;
}



// FUNCTION 142f659ff FUN_142f659ff body=69 status=ok
// SIG undefined FUN_142f659ff(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f659ff(void)

{
  _DAT_14ca38fa0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f65a41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca38fa8,1);
  return;
}



// FUNCTION 142f65a44 FUN_142f65a44 body=69 status=ok
// SIG undefined FUN_142f65a44(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f65a44(void)

{
  _DAT_14ca38fb8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f65a86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca38fc0,1);
  return;
}



// FUNCTION 142f65a89 FUN_142f65a89 body=69 status=ok
// SIG undefined FUN_142f65a89(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f65a89(void)

{
  _DAT_14ca38fd0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f65acb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca38fd8,1);
  return;
}



// FUNCTION 142f65ace FUN_142f65ace body=69 status=ok
// SIG undefined FUN_142f65ace(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f65ace(void)

{
  _DAT_14ca38fe8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f65b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca38ff0,1);
  return;
}



// FUNCTION 142f65b13 FUN_142f65b13 body=69 status=ok
// SIG undefined FUN_142f65b13(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f65b13(void)

{
  _DAT_14ca39000 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f65b55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca39008,1);
  return;
}



// FUNCTION 142f65be8 FUN_142f65be8 body=47 status=ok
// SIG undefined FUN_142f65be8(void)

void FUN_142f65be8(void)

{
  DAT_14ca39d68 = &PTR_FUN_14a2dbbf0;
  FUN_144725486(&DAT_14ca39d68);
  FUN_14003f39a(&DAT_14ca39d68);
  return;
}



// FUNCTION 142f65c17 FUN_142f65c17 body=47 status=ok
// SIG undefined FUN_142f65c17(void)

void FUN_142f65c17(void)

{
  DAT_14ca39d80 = &PTR_FUN_14a2dbca0;
  FUN_144725486(&DAT_14ca39d80);
  FUN_146302a02(&DAT_14ca39d80);
  return;
}



// FUNCTION 142f65c52 FUN_142f65c52 body=3663 status=ok
// SIG undefined FUN_142f65c52(void)

void FUN_142f65c52(longlong param_1,longlong param_2,longlong param_3,ulonglong *param_4,
                  ulonglong *param_5,undefined4 param_6,undefined4 param_7,float param_8,
                  undefined4 param_9)

{
  ulonglong *puVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  char cVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined4 uVar19;
  undefined1 uVar20;
  undefined8 uVar21;
  undefined1 uVar22;
  undefined2 uVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  ulonglong uVar26;
  undefined8 *puVar27;
  float fVar28;
  undefined1 auStack_3a8 [32];
  undefined1 local_388;
  undefined1 local_374;
  undefined1 local_373;
  undefined1 local_372;
  undefined1 local_371;
  ulonglong *local_370;
  undefined2 local_362;
  undefined8 *local_360;
  undefined4 local_358;
  undefined4 local_354;
  ulonglong *local_350;
  undefined4 local_348;
  uint local_344;
  longlong local_340;
  ulonglong local_338;
  longlong local_330;
  undefined1 local_328 [16];
  float local_318;
  int local_314;
  undefined4 local_310;
  undefined4 local_30c;
  uint local_308;
  float local_304;
  float local_300;
  uint local_2fc;
  undefined8 local_2f8 [13];
  undefined8 local_290;
  undefined8 *local_288;
  undefined8 uStack_280;
  longlong local_278;
  undefined4 local_270;
  undefined4 local_26c;
  undefined4 local_268;
  int local_264;
  int local_260;
  undefined2 local_25c;
  undefined2 local_25a;
  undefined1 local_258;
  undefined1 local_257;
  undefined1 local_256;
  undefined1 local_255;
  undefined1 local_254;
  undefined1 local_253;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  lVar11 = *(longlong *)(param_1 + 0x3e0);
  local_330 = param_1;
  FUN_14494b062(local_2f8,param_2,lVar11);
  iVar16 = (int)(1.0 / param_8);
  local_338 = (longlong)((*(int *)(param_3 + 0x3104) + iVar16 + -1) - *(int *)(param_3 + 0x30fc)) /
              (longlong)iVar16 & 0xffffffff;
  local_344 = ((iVar16 + -1 + *(int *)(param_3 + 0x3100)) - *(int *)(param_3 + 0x30f8)) / iVar16;
  lVar8 = *(longlong *)(lVar11 + 0x1b0);
  local_374 = *(undefined1 *)(lVar8 + 0x92);
  uVar22 = *(undefined1 *)(lVar8 + 0x94);
  uVar14 = *(ulonglong *)(lVar8 + 0x84);
  uVar23 = *(undefined2 *)(lVar8 + 0x8c);
  uVar6 = *(undefined2 *)(lVar8 + 0x8e);
  local_360 = (undefined8 *)CONCAT62(local_360._2_6_,uVar6);
  uVar5 = *(undefined1 *)(lVar8 + 0x90);
  local_370 = (ulonglong *)CONCAT71(local_370._1_7_,uVar5);
  local_373 = *(undefined1 *)(lVar8 + 0x91);
  local_354 = *(undefined4 *)(lVar8 + 0x68);
  uVar3 = *(undefined4 *)(lVar8 + 0x6c);
  uVar12 = *(undefined8 *)(lVar8 + 0x68);
  uVar21 = *(undefined8 *)(lVar8 + 0x70);
  uVar13 = *(undefined8 *)(lVar8 + 0x70);
  uVar4 = *(undefined4 *)(lVar8 + 0x78);
  local_358 = *(undefined4 *)(lVar8 + 0x80);
  uVar20 = *(undefined1 *)(lVar8 + 0x95);
  uVar19 = *(undefined4 *)(lVar8 + 0x7c);
  puVar24 = (undefined8 *)(*(ulonglong *)(lVar8 + 0x60) & 0xffffffffffddffff | 0x20000);
  iVar17 = (int)((longlong)((ulonglong)(uint)((int)uVar14 >> 0x1f) << 0x20 | uVar14 & 0xffffffff) /
                (longlong)iVar16);
  iVar18 = (int)((longlong)((ulonglong)(uint)((longlong)uVar14 >> 0x3f) << 0x20 | uVar14 >> 0x20) /
                (longlong)iVar16);
  local_350 = param_4;
  local_340 = lVar11;
  if (*param_4 == 0) {
    local_255 = 10;
    local_264 = DAT_14ca84e40;
    if (iVar17 < DAT_14ca84e40) {
      local_264 = iVar17;
    }
    if (local_264 < 2) {
      local_264 = 1;
    }
    local_260 = DAT_14ca84e40;
    if (iVar18 < DAT_14ca84e40) {
      local_260 = iVar18;
    }
    if (local_260 < 2) {
      local_260 = 1;
    }
    uVar26 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar14 = uVar26 + 0x120;
    local_372 = uVar22;
    local_371 = uVar20;
    local_362 = uVar23;
    local_348 = uVar19;
    local_288 = puVar24;
    uStack_280 = uVar12;
    local_278 = uVar13;
    local_270 = uVar4;
    local_26c = uVar19;
    local_268 = local_358;
    local_25c = uVar23;
    local_25a = uVar6;
    local_258 = uVar5;
    local_257 = local_373;
    local_256 = local_374;
    local_254 = uVar22;
    local_253 = uVar20;
    if (*(ulonglong *)(param_2 + 0x78) < uVar14) {
      FUN_140023dd8((longlong *)(param_2 + 0x70),0x128);
      uVar26 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
      uVar14 = uVar26 + 0x120;
    }
    *(ulonglong *)(param_2 + 0x70) = uVar14;
    FUN_1456bbb8c(uVar26,L"RayTracingPrimaryRays",&local_288,0);
    iVar7 = *(int *)(param_2 + 0x180);
    *(uint *)(param_2 + 0x180) = iVar7 + 1U;
    if (*(uint *)(param_2 + 0x184) < iVar7 + 1U) {
      FUN_14472c0f6(param_2 + 0x178,iVar7);
    }
    *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar7 * 8) = uVar26;
    *(int *)(uVar26 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
    *local_350 = uVar26;
    uVar22 = local_372;
    uVar23 = local_362;
    uVar20 = local_371;
    uVar19 = local_348;
  }
  if (*param_5 == 0) {
    local_256 = local_374;
    local_255 = 0x15;
    local_25a = local_360._0_2_;
    local_258 = local_370._0_1_;
    local_257 = local_373;
    uStack_280 = CONCAT44(uVar3,local_354);
    local_268 = local_358;
    if (DAT_14ca84e40 <= iVar17) {
      iVar17 = DAT_14ca84e40;
    }
    local_264 = iVar17;
    if (iVar17 < 2) {
      local_264 = 1;
    }
    local_260 = DAT_14ca84e40;
    if (iVar18 < DAT_14ca84e40) {
      local_260 = iVar18;
    }
    if (local_260 < 2) {
      local_260 = 1;
    }
    uVar26 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar14 = uVar26 + 0x120;
    local_288 = puVar24;
    local_278 = uVar21;
    local_270 = uVar4;
    local_26c = uVar19;
    local_25c = uVar23;
    local_254 = uVar22;
    local_253 = uVar20;
    if (*(ulonglong *)(param_2 + 0x78) < uVar14) {
      FUN_140023dd8((longlong *)(param_2 + 0x70),0x128);
      uVar26 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
      uVar14 = uVar26 + 0x120;
    }
    *(ulonglong *)(param_2 + 0x70) = uVar14;
    FUN_1456bbb8c(uVar26,L"RayTracingPrimaryRaysHitDistance",&local_288,0);
    iVar17 = *(int *)(param_2 + 0x180);
    *(uint *)(param_2 + 0x180) = iVar17 + 1U;
    if (*(uint *)(param_2 + 0x184) < iVar17 + 1U) {
      FUN_14472c0f6(param_2 + 0x178,iVar17);
    }
    *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar17 * 8) = uVar26;
    *(int *)(uVar26 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
    *param_5 = uVar26;
  }
  FUN_1472c4a68(local_328,param_3);
  puVar1 = (ulonglong *)(param_2 + 0x70);
  puVar25 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar24 = puVar25 + 0x24;
  if (*(undefined8 **)(param_2 + 0x78) < puVar24) {
    FUN_140023dd8(puVar1,0x130);
    puVar25 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar24 = puVar25 + 0x24;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar24;
  *puVar25 = &PTR_FUN_14a2dbf08;
  puVar25[9] = 0;
  puVar25[10] = 0;
  *(undefined1 *)(puVar25 + 0xb) = 1;
  puVar25[0xc] = 0;
  *(undefined1 *)(puVar25 + 0xd) = 1;
  puVar25[0xe] = 0;
  *(undefined1 *)(puVar25 + 0xf) = 1;
  puVar25[0x10] = 0;
  *(undefined1 *)(puVar25 + 0x11) = 1;
  puVar25[0x12] = 0;
  *(undefined1 *)(puVar25 + 0x13) = 1;
  plVar2 = (longlong *)(param_2 + 0x98);
  puVar25[0x14] = 0;
  puVar25[0x15] = 0;
  puVar25[0x16] = 0;
  puVar25[0x17] = 0;
  puVar25[0x18] = 0;
  puVar25[0x19] = 0;
  puVar25[0x1a] = 0;
  puVar25[0x1b] = 0;
  puVar25[0x1c] = 0;
  puVar25[0x1d] = 0;
  puVar25[0x1e] = 0;
  puVar25[0x1f] = 0;
  puVar25[0x20] = 0;
  puVar25[0x21] = 0;
  puVar25[0x22] = 0;
  iVar17 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar17 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar17 + 1U) {
    FUN_1448cfae8(plVar2,iVar17);
  }
  *(undefined8 **)(*plVar2 + (longlong)iVar17 * 8) = puVar25;
  *(undefined4 *)(puVar25 + 2) = param_6;
  if (local_314 < 0) {
    local_314 = *(int *)(param_3 + 0x2bdc);
  }
  *(int *)((longlong)puVar25 + 0x14) = local_314;
  *(undefined4 *)(puVar25 + 3) = param_7;
  *(undefined4 *)((longlong)puVar25 + 0x1c) = local_30c;
  uVar15 = (uint)*(byte *)(param_3 + 0x2be4);
  if (-1 < (int)local_308) {
    uVar15 = local_308;
  }
  *(uint *)(puVar25 + 4) = uVar15;
  *(undefined4 *)((longlong)puVar25 + 0x24) = local_310;
  *(int *)(puVar25 + 5) = iVar16;
  if (local_300 <= local_304) {
    local_304 = local_300;
  }
  *(float *)((longlong)puVar25 + 0x34) = local_304;
  *(float *)(puVar25 + 7) = local_300;
  fVar28 = (float)(~-(uint)(local_318 < 0.0) & (uint)local_318 |
                  *(uint *)(param_3 + 0x2bd8) & -(uint)(local_318 < 0.0));
  if (1.0 <= fVar28) {
    fVar28 = 1.0;
  }
  if (fVar28 <= 0.01) {
    fVar28 = 0.01;
  }
  *(float *)((longlong)puVar25 + 0x3c) = fVar28;
  uVar15 = *(byte *)(param_3 + 0x2be5) & 1;
  if (-1 < (int)local_2fc) {
    uVar15 = local_2fc;
  }
  *(uint *)(puVar25 + 8) = uVar15;
  fVar28 = 0.01;
  if (0.01 <= DAT_14c760924) {
    fVar28 = DAT_14c760924;
  }
  *(float *)((longlong)puVar25 + 0x44) = fVar28;
  *(undefined4 *)((longlong)puVar25 + 0x2c) = 1;
  *(undefined4 *)(puVar25 + 6) = param_9;
  plVar9 = *(longlong **)(*(longlong *)(param_3 + 8) + 0x40);
  if (plVar9 != (longlong *)0x0) {
    lVar11 = (**(code **)(*plVar9 + 0x3e0))();
    if (lVar11 != 0) {
      uVar12 = *(undefined8 *)(*(longlong *)(lVar11 + 0x4308) + 0x88);
      goto LAB_142f662ad;
    }
  }
  uVar12 = 0;
LAB_142f662ad:
  puVar25[9] = uVar12;
  lVar11 = FUN_1447e4f80();
  cVar10 = *(char *)(lVar11 + 0x41);
  if (cVar10 == '\x03') {
    cVar10 = '\x02';
  }
  puVar25[10] = *(undefined8 *)(param_3 + 0x18);
  *(char *)(puVar25 + 0xb) = cVar10;
  uVar12 = *(undefined8 *)(param_3 + 0x13b68);
  FUN_145ce4a14();
  cVar10 = DAT_14ca3ab29;
  if (DAT_14ca3ab29 == '\x03') {
    cVar10 = '\x02';
  }
  puVar25[0xc] = uVar12;
  *(char *)(puVar25 + 0xd) = cVar10;
  puVar27 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar24 = puVar27 + 0x40;
  if (*(undefined8 **)(param_2 + 0x78) < puVar24) {
    FUN_140023dd8(puVar1,0x210);
    puVar27 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar24 = puVar27 + 0x40;
  }
  local_360 = puVar25 + 2;
  *puVar1 = (ulonglong)puVar24;
  *puVar27 = &PTR_FUN_14a236e80;
  puVar27[0xc] = 0;
  puVar27[0xd] = 0;
  puVar27[0xe] = 0;
  puVar27[0xf] = 0;
  puVar27[0x10] = 0;
  puVar27[0x11] = 0;
  lVar11 = 0x9c;
  do {
    puVar24 = (undefined8 *)((longlong)puVar27 + lVar11 + -0xc);
    *puVar24 = 0;
    puVar24[1] = 0x3f80000000000000;
    lVar11 = lVar11 + 0x10;
  } while (lVar11 != 0xfc);
  lVar11 = 0xfc;
  do {
    puVar24 = (undefined8 *)((longlong)puVar27 + lVar11 + -0xc);
    *puVar24 = 0;
    puVar24[1] = 0x3f80000000000000;
    lVar11 = lVar11 + 0x10;
  } while (lVar11 != 0x15c);
  puVar27[0x30] = 0;
  puVar27[0x31] = 0;
  puVar27[0x32] = 0;
  puVar27[0x36] = 0;
  puVar27[0x37] = 0;
  puVar27[0x38] = 0;
  puVar27[0x39] = 0;
  puVar27[0x3a] = 0;
  iVar17 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar17 + 1U;
  local_370 = puVar1;
  if (*(uint *)(param_2 + 0xa4) < iVar17 + 1U) {
    FUN_1448cfae8(plVar2,iVar17);
  }
  *(undefined8 **)(*plVar2 + (longlong)iVar17 * 8) = puVar27;
  lVar11 = param_3;
  if ((((*(char *)(param_3 + 0x23f2) == '\x01') && (DAT_14c7604d0 != 0)) &&
      (*(int *)(param_3 + 0x1dd0) == 2)) && (lVar8 = *(longlong *)(param_3 + 8), lVar8 != 0)) {
    iVar17 = *(int *)(param_3 + 0x1dd8);
    if ((-1 < (longlong)iVar17) && (iVar17 < *(int *)(lVar8 + 0x10))) {
      lVar11 = *(longlong *)(*(longlong *)(lVar8 + 8) + (longlong)iVar17 * 8);
    }
  }
  FUN_144ab197e(&local_288,param_2,lVar11 + 0x138f0,param_3 + 0x13ab8);
  memcpy(puVar27 + 2,&local_288,0x1f0);
  local_288 = puVar27 + 2;
  lVar11 = FUN_1404d38b4();
  local_290 = *(undefined8 *)(lVar11 + 0x18);
  uVar12 = FUN_1404d37cc(param_2 + 0x1a8,local_370,&local_288);
  lVar11 = FUN_1404d38b4();
  cVar10 = '\x02';
  if (*(char *)(lVar11 + 0x41) != '\x03') {
    cVar10 = *(char *)(lVar11 + 0x41);
  }
  puVar25[0x12] = uVar12;
  *(char *)(puVar25 + 0x13) = cVar10;
  puVar24 = local_2f8;
  puVar27 = puVar25 + 0x14;
  for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
    *puVar27 = *puVar24;
    puVar24 = puVar24 + 1;
    puVar27 = puVar27 + 1;
  }
  if (DAT_14c760a84 == -1) {
    FUN_145fdab76(&local_288,L"FRDGSystemTextures",L".\\Runtime/Renderer/Private/SystemTextures.cpp"
                  ,0x66);
    DAT_14c760a84 = FUN_145d12cf0(&local_288);
    if (local_288 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((DAT_14c760a84 < *(int *)(param_2 + 0x130)) &&
     (lVar11 = *(longlong *)(*(longlong *)(param_2 + 0x128) + (longlong)DAT_14c760a84 * 8),
     lVar11 != 0)) {
    lVar11 = lVar11 + 8;
  }
  else {
    lVar11 = 0;
  }
  lVar8 = *(longlong *)(local_340 + 0x1b8);
  lVar11 = *(longlong *)(lVar11 + 8);
  if ((lVar8 != 0) && ((*(byte *)(lVar8 + 0x24) & 4) != 0)) {
    lVar11 = lVar8;
  }
  puVar25[0x20] = lVar11;
  uVar12 = FUN_144886931(param_2,param_3);
  lVar11 = FUN_144a89262();
  cVar10 = *(char *)(lVar11 + 0x41);
  if (*(char *)(lVar11 + 0x41) == '\x03') {
    cVar10 = '\x02';
  }
  puVar25[0xe] = uVar12;
  *(char *)(puVar25 + 0xf) = cVar10;
  uVar12 = FUN_144a97bef(param_2,param_3);
  lVar11 = FUN_144a80e70();
  puVar1 = local_370;
  cVar10 = *(char *)(lVar11 + 0x41);
  if (cVar10 == '\x03') {
    cVar10 = '\x02';
  }
  puVar25[0x10] = uVar12;
  *(char *)(puVar25 + 0x11) = cVar10;
  uVar14 = *local_350;
  uVar22 = *(undefined1 *)(uVar14 + 0x94);
  puVar27 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar24 = puVar27 + 9;
  if (*(undefined8 **)(param_2 + 0x78) < puVar24) {
    FUN_140023dd8(local_370,0x50);
    puVar27 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar24 = puVar27 + 9;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar24;
  puVar27[1] = *(undefined8 *)(uVar14 + 8);
  puVar27[2] = 0;
  *(undefined1 *)(puVar27 + 3) = 0;
  *(undefined8 *)((longlong)puVar27 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar27 + 5) = 0;
  *puVar27 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar27 + 6) = uVar22;
  *(undefined1 *)(puVar27 + 7) = 0;
  *(undefined4 *)((longlong)puVar27 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar27 + 0x35) = 0;
  puVar27[8] = uVar14;
  iVar17 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar17 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar17 + 1U) {
    FUN_1447568fc(param_2 + 0x198,iVar17);
  }
  puVar1 = local_370;
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar17 * 8) = puVar27;
  *(int *)((longlong)puVar27 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  puVar25[0x21] = puVar27;
  uVar14 = *param_5;
  uVar22 = *(undefined1 *)(uVar14 + 0x94);
  puVar27 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar24 = puVar27 + 9;
  if (*(undefined8 **)(param_2 + 0x78) < puVar24) {
    FUN_140023dd8(local_370,0x50);
    puVar27 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar24 = puVar27 + 9;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar24;
  puVar27[1] = *(undefined8 *)(uVar14 + 8);
  puVar27[2] = 0;
  *(undefined1 *)(puVar27 + 3) = 0;
  *(undefined8 *)((longlong)puVar27 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar27 + 5) = 0;
  *puVar27 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar27 + 6) = uVar22;
  *(undefined1 *)(puVar27 + 7) = 0;
  *(undefined4 *)((longlong)puVar27 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar27 + 0x35) = 0;
  puVar27[8] = uVar14;
  iVar17 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar17 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar17 + 1U) {
    FUN_1447568fc(param_2 + 0x198,iVar17);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar17 * 8) = puVar27;
  *(int *)((longlong)puVar27 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  puVar25[0x22] = puVar27;
  iVar17 = *(int *)(DAT_14ca409b8 + 4);
  uVar12 = *(undefined8 *)(param_3 + 0x13818);
  FUN_145f8492c();
  FUN_1448e935e(uVar12,&local_288,&DAT_14ca3e340,iVar17 != 0);
  FUN_145f8492c();
  uVar12 = uStack_280;
  puVar24 = local_288;
  uVar13 = FUN_145f84b98();
  local_288 = (undefined8 *)0x0;
  uStack_280 = 0;
  FUN_1448f70da(puVar24,uVar13,local_360,&local_288);
  uVar13 = (**(code **)(**(longlong **)(*(longlong *)(param_3 + 8) + 0x178) + 8))();
  uVar13 = FUN_1472e1976(uVar13,param_2);
  uVar14 = (ulonglong)local_344;
  lVar11 = FUN_145f84b98();
  FUN_140069376(param_2);
  puVar1 = local_370;
  uVar21 = 2;
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar21 = 4;
  }
  local_338 = local_338 << 0x20;
  puVar27 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar25 = puVar27 + 0x3e;
  local_350 = (ulonglong *)uVar13;
  if (*(undefined8 **)(param_2 + 0x78) < puVar25) {
    FUN_140023dd8(local_370,0x1f8);
    puVar27 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar25 = puVar27 + 0x3e;
  }
  uVar14 = local_338 | uVar14;
  *local_370 = (ulonglong)puVar25;
  local_288 = local_360;
  uStack_280 = *(longlong *)(lVar11 + 0x48);
  if (uStack_280 != 0) {
    LOCK();
    *(int *)(uStack_280 + 8) = *(int *)(uStack_280 + 8) + 1;
    UNLOCK();
  }
  local_388 = 2;
  local_278 = lVar11;
  FUN_140068f1a(puVar27,&local_290,&local_288,uVar21);
  *puVar27 = &PTR_FUN_14a2dbf10;
  puVar27[0x37] = local_360;
  puVar27[0x38] = local_330;
  puVar27[0x39] = param_3;
  puVar27[0x3a] = local_350;
  puVar27[0x3b] = puVar24;
  puVar27[0x3c] = uVar12;
  puVar27[0x3d] = uVar14;
  iVar17 = *(int *)(param_2 + 0x170);
  *(uint *)(param_2 + 0x170) = iVar17 + 1U;
  if (*(uint *)(param_2 + 0x174) < iVar17 + 1U) {
    FUN_14470e57a(param_2 + 0x168,iVar17);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar17 * 8) = puVar27;
  *(int *)((longlong)puVar27 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
  FUN_140069100(param_2,puVar27);
  if ((local_90 ^ (ulonglong)auStack_3a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f66aa2 FUN_142f66aa2 body=69 status=ok
// SIG undefined FUN_142f66aa2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f66aa2(void)

{
  _DAT_14ca39ef8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f66ae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca39f00,1);
  return;
}



// FUNCTION 142f66ae7 FUN_142f66ae7 body=69 status=ok
// SIG undefined FUN_142f66ae7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f66ae7(void)

{
  _DAT_14ca39f10 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f66b29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca39f18,1);
  return;
}



// FUNCTION 142f66b2c FUN_142f66b2c body=69 status=ok
// SIG undefined FUN_142f66b2c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f66b2c(void)

{
  _DAT_14ca39f28 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f66b6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca39f30,1);
  return;
}



// FUNCTION 142f66bd1 FUN_142f66bd1 body=69 status=ok
// SIG undefined FUN_142f66bd1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f66bd1(void)

{
  _DAT_14ca3a760 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f66c13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca3a768,1);
  return;
}



// FUNCTION 142f66c16 FUN_142f66c16 body=69 status=ok
// SIG undefined FUN_142f66c16(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f66c16(void)

{
  _DAT_14ca3a770 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f66c58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca3a778,1);
  return;
}



// FUNCTION 142f66c5b FUN_142f66c5b body=69 status=ok
// SIG undefined FUN_142f66c5b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f66c5b(void)

{
  _DAT_14ca3a780 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f66c9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca3a788,1);
  return;
}



// FUNCTION 142f66d1e FUN_142f66d1e body=3943 status=ok
// SIG undefined FUN_142f66d1e(void)

void FUN_142f66d1e(longlong *param_1,longlong param_2,longlong param_3,uint param_4,
                  ulonglong *param_5)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  char cVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  longlong lVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  longlong lVar22;
  undefined8 *puVar23;
  uint uVar24;
  ulonglong uVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  undefined4 uVar28;
  undefined8 *puVar29;
  int iVar30;
  longlong lVar31;
  undefined8 *puVar32;
  longlong lVar33;
  undefined8 *puVar34;
  uint uVar35;
  ulonglong uVar36;
  bool bVar37;
  float fVar38;
  undefined1 auStack_3f8 [32];
  undefined1 local_3d8;
  int local_3c4;
  longlong *local_3c0;
  longlong *local_3b8;
  ulonglong local_3b0;
  longlong *local_3a8;
  longlong local_3a0;
  uint local_394;
  uint local_390;
  int local_38c;
  ulonglong *local_388;
  longlong local_380;
  ulonglong local_378;
  longlong local_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3f8;
  puVar1 = *(ulonglong **)(param_3 + 0x18);
  uVar11 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_390 = *(uint *)((longlong)puVar1 + 0x17c);
  local_3c0 = param_1;
  local_370 = param_2;
  if (local_390 != uVar11) {
    *(uint *)((longlong)puVar1 + 0x17c) = uVar11;
    puVar12 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar12 + 3;
    if ((undefined8 *)puVar1[1] < puVar13) {
      FUN_140023dd8(puVar1,0x20);
      puVar12 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar12 + 3;
    }
    *puVar1 = (ulonglong)puVar13;
    *(int *)(puVar1 + 0xc) = (int)puVar1[0xc] + 1;
    *(undefined8 **)puVar1[6] = puVar12;
    puVar1[6] = (ulonglong)(puVar12 + 1);
    uVar28 = *(undefined4 *)((longlong)puVar1 + 0x17c);
    puVar12[1] = 0;
    *puVar12 = &PTR_FUN_14a1fb2c0;
    *(undefined4 *)(puVar12 + 2) = uVar28;
  }
  iVar30 = (int)local_3c0[3] + (int)local_3c0[1];
  local_394 = param_4;
  local_388 = puVar1;
  local_380 = param_3;
  if (iVar30 != 0) {
    if (iVar30 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar30);
    }
    local_378 = (ulonglong)DAT_14ca84f04;
    local_3a8 = local_3c0 + 4;
    if (*(int *)((longlong)local_3c0 + 0x2c) < iVar30) {
      FUN_1472c1684(local_3a8);
    }
    local_3b8 = local_3c0 + 6;
    if (*(int *)((longlong)local_3c0 + 0x3c) < iVar30) {
      FUN_1472c16f4(local_3b8);
    }
    local_3a0 = local_3c0[8];
    local_3b0 = (ulonglong)DAT_14ca84f04;
    uVar11 = 0;
    if ((longlong)(int)local_3c0[1] != 0) {
      lVar31 = *local_3c0;
      local_3c4 = DAT_14ca84f04 - 1;
      uVar35 = -DAT_14ca84f04;
      lVar22 = (longlong)(int)local_3c0[1] << 5;
      uVar11 = 0;
      do {
        iVar19 = uVar11 + local_3c4;
        lVar2 = *(longlong *)(*(longlong *)(lVar31 + 0x10) + 0x90);
        iVar30 = *(int *)(lVar2 + 0x18);
        if (lVar2 != 0) {
          LOCK();
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
          UNLOCK();
        }
        if ((longlong)*(int *)(lVar31 + 0x18) < 0) {
          lVar18 = 0;
          uVar28 = 0;
        }
        else {
          uVar28 = *(undefined4 *)(*(longlong *)(lVar31 + 0x10) + 0x60);
          lVar18 = local_3a0 + (longlong)*(int *)(lVar31 + 0x18) * 0x28;
        }
        iVar20 = (int)local_3c0[7];
        *(uint *)(local_3c0 + 7) = iVar20 + 1U;
        if (*(uint *)((longlong)local_3c0 + 0x3c) < iVar20 + 1U) {
          FUN_1471b2712(local_3b8,iVar20);
        }
        uVar11 = iVar19 + iVar30 & uVar35;
        lVar3 = *local_3b8;
        lVar33 = (longlong)iVar20 * 0x20;
        *(longlong *)(lVar3 + lVar33) = lVar2;
        *(undefined4 *)(lVar3 + 8 + lVar33) = 0;
        *(longlong *)(lVar3 + 0x10 + lVar33) = lVar18;
        *(undefined4 *)(lVar3 + 0x18 + lVar33) = uVar28;
        FUN_1472b4b68(local_3a8);
        lVar31 = lVar31 + 0x20;
        lVar22 = lVar22 + -0x20;
      } while (lVar22 != 0);
    }
    local_3c4 = *(int *)(DAT_14ca3a790 + 4);
    if (local_3c4 < 1) {
      if ((longlong)(int)local_3c0[3] != 0) {
        lVar31 = local_3c0[2];
        iVar30 = (int)local_3b0;
        local_3c4 = iVar30 + -1;
        lVar22 = (longlong)(int)local_3c0[3] << 5;
        do {
          iVar20 = uVar11 + local_3c4;
          lVar2 = *(longlong *)(*(longlong *)(lVar31 + 0x10) + 0x90);
          *(undefined8 *)(*(longlong *)(lVar31 + 0x10) + 0x38) = DAT_14c867d10;
          iVar19 = *(int *)(lVar2 + 0x20);
          if (lVar2 != 0) {
            LOCK();
            *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
            UNLOCK();
          }
          if ((longlong)*(int *)(lVar31 + 0x18) < 0) {
            lVar18 = 0;
            uVar28 = 0;
          }
          else {
            uVar28 = *(undefined4 *)(*(longlong *)(lVar31 + 0x10) + 0x60);
            lVar18 = local_3a0 + (longlong)*(int *)(lVar31 + 0x18) * 0x28;
          }
          iVar21 = (int)local_3c0[7];
          *(uint *)(local_3c0 + 7) = iVar21 + 1U;
          if (*(uint *)((longlong)local_3c0 + 0x3c) < iVar21 + 1U) {
            FUN_1471b2712(local_3b8,iVar21);
          }
          uVar11 = iVar20 + iVar19 & -iVar30;
          lVar3 = *local_3b8;
          lVar33 = (longlong)iVar21 * 0x20;
          *(longlong *)(lVar3 + lVar33) = lVar2;
          *(undefined4 *)(lVar3 + 8 + lVar33) = 1;
          *(longlong *)(lVar3 + 0x10 + lVar33) = lVar18;
          *(undefined4 *)(lVar3 + 0x18 + lVar33) = uVar28;
          FUN_1472b4b68(local_3a8);
          lVar31 = lVar31 + 0x20;
          lVar22 = lVar22 + -0x20;
        } while (lVar22 != 0);
      }
    }
    else {
      iVar30 = (int)local_3c0[3];
      if (1 < (longlong)iVar30) {
        lVar31 = local_3c0[2];
        memset(&local_358,0,0x2f0);
        uStack_360 = (longlong)iVar30 * 0x20 + lVar31 + -0x20;
        local_368 = (undefined8 *)lVar31;
        fVar38 = logf((float)iVar30);
        local_358 = (undefined *)CONCAT44(local_358._4_4_,(int)(longlong)(fVar38 + fVar38));
        plVar16 = &local_368;
        do {
          puVar12 = (undefined8 *)*plVar16;
          puVar13 = (undefined8 *)plVar16[1];
          iVar30 = (int)plVar16[2];
          iVar19 = (int)((ulonglong)((longlong)puVar13 - (longlong)puVar12) >> 5);
          uVar35 = iVar19 + 1;
          puVar29 = puVar12;
          puVar34 = puVar13;
          if (iVar30 != 0) {
LAB_142f670b2:
            if (8 < (int)uVar35) {
              uVar25 = (ulonglong)(uVar35 >> 1);
              uVar14 = puVar12[uVar25 * 4];
              uVar4 = (puVar12 + uVar25 * 4)[1];
              uVar5 = puVar12[uVar25 * 4 + 2];
              uVar6 = (puVar12 + uVar25 * 4 + 2)[1];
              uVar7 = *puVar12;
              uVar8 = puVar12[1];
              uVar9 = puVar12[3];
              puVar12[uVar25 * 4 + 2] = puVar12[2];
              (puVar12 + uVar25 * 4 + 2)[1] = uVar9;
              puVar12[uVar25 * 4] = uVar7;
              (puVar12 + uVar25 * 4)[1] = uVar8;
              puVar12[2] = uVar5;
              puVar12[3] = uVar6;
              *puVar12 = uVar14;
              puVar12[1] = uVar4;
              puVar27 = puVar13 + 4;
              puVar17 = puVar12;
              do {
                puVar10 = puVar17 + 4;
                puVar26 = puVar17 + 4;
                do {
                  puVar32 = puVar26;
                  puVar17 = puVar10;
                  if (puVar13 < puVar17) break;
                  puVar10 = puVar17 + 4;
                  puVar26 = puVar32 + 4;
                } while (*(ulonglong *)(puVar17[2] + 0x38) <= *(ulonglong *)(puVar12[2] + 0x38));
                puVar10 = puVar27 + -8;
                do {
                  puVar26 = puVar27;
                  puVar23 = puVar10;
                  puVar27 = puVar26 + -4;
                  if (puVar27 <= puVar12) break;
                  puVar10 = puVar23 + -4;
                } while (*(ulonglong *)(puVar12[2] + 0x38) <= *(ulonglong *)(puVar26[-2] + 0x38));
                if (puVar27 < puVar17) goto LAB_142f671bc;
                uVar14 = *puVar17;
                uVar4 = puVar17[1];
                uVar5 = puVar17[2];
                uVar6 = puVar17[3];
                uVar7 = *puVar27;
                uVar8 = puVar26[-3];
                uVar9 = puVar26[-1];
                puVar17[2] = puVar26[-2];
                puVar17[3] = uVar9;
                *puVar17 = uVar7;
                puVar17[1] = uVar8;
                puVar26[-2] = uVar5;
                puVar26[-1] = uVar6;
                *puVar27 = uVar14;
                puVar26[-3] = uVar4;
              } while( true );
            }
            for (; puVar34 = puVar12, puVar29 = puVar12, puVar12 < puVar13; puVar13 = puVar13 + -4)
            {
              while (puVar27 = puVar34, puVar29 = puVar29 + 4, puVar29 <= puVar13) {
                puVar34 = puVar29;
                if (*(ulonglong *)(puVar29[2] + 0x38) <= *(ulonglong *)(puVar27[2] + 0x38)) {
                  puVar34 = puVar27;
                }
              }
              local_68 = *puVar27;
              uStack_60 = puVar27[1];
              local_58 = puVar27[2];
              uStack_50 = puVar27[3];
              uVar6 = local_68;
              uVar7 = uStack_60;
              uVar14 = *puVar13;
              uVar4 = puVar13[1];
              uVar5 = puVar13[3];
              puVar27[2] = puVar13[2];
              puVar27[3] = uVar5;
              *puVar27 = uVar14;
              puVar27[1] = uVar4;
              local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
              uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
              puVar13[2] = local_58;
              puVar13[3] = uStack_50;
              *(undefined4 *)puVar13 = (undefined4)local_68;
              *(undefined4 *)((longlong)puVar13 + 4) = local_68._4_4_;
              *(undefined4 *)(puVar13 + 1) = (undefined4)uStack_60;
              *(undefined4 *)((longlong)puVar13 + 0xc) = uStack_60._4_4_;
              local_68 = uVar6;
              uStack_60 = uVar7;
            }
            goto LAB_142f67594;
          }
LAB_142f6728a:
          if (uVar35 != 0) {
            iVar30 = (iVar19 - (iVar19 + -1 >> 0x1f)) + -1 >> 1;
            iVar19 = iVar30;
joined_r0x000142f672b1:
            do {
              iVar20 = iVar30 * 2 + 1;
              if (iVar20 < (int)uVar35) {
                iVar21 = iVar30 * 2 + 2;
                if ((iVar21 < (int)uVar35) &&
                   (*(ulonglong *)(puVar12[(longlong)iVar20 * 4 + 2] + 0x38) <=
                    *(ulonglong *)(puVar12[(longlong)iVar21 * 4 + 2] + 0x38))) {
                  iVar20 = iVar21;
                }
                if (*(ulonglong *)(puVar12[(longlong)iVar30 * 4 + 2] + 0x38) <
                    *(ulonglong *)(puVar12[(longlong)iVar20 * 4 + 2] + 0x38)) {
                  puVar13 = puVar12 + (longlong)iVar30 * 4;
                  puVar29 = puVar12 + (longlong)iVar20 * 4;
                  local_68 = *puVar13;
                  uStack_60 = puVar13[1];
                  local_58 = puVar13[2];
                  uStack_50 = puVar13[3];
                  uVar6 = local_68;
                  uVar7 = uStack_60;
                  uVar14 = *puVar29;
                  uVar4 = puVar29[1];
                  uVar5 = puVar29[3];
                  puVar13[2] = puVar29[2];
                  puVar13[3] = uVar5;
                  *puVar13 = uVar14;
                  puVar13[1] = uVar4;
                  local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
                  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
                  puVar29[2] = local_58;
                  puVar29[3] = uStack_50;
                  *(undefined4 *)puVar29 = (undefined4)local_68;
                  *(undefined4 *)((longlong)puVar29 + 4) = local_68._4_4_;
                  *(undefined4 *)(puVar29 + 1) = (undefined4)uStack_60;
                  *(undefined4 *)((longlong)puVar29 + 0xc) = uStack_60._4_4_;
                  iVar30 = iVar20;
                  local_68 = uVar6;
                  uStack_60 = uVar7;
                  goto joined_r0x000142f672b1;
                }
              }
              bVar37 = iVar19 != 0;
              iVar30 = iVar19 + -1;
              iVar19 = iVar30;
            } while (bVar37);
            if (1 < (int)uVar35) {
              uVar25 = (ulonglong)uVar35 - 1;
              local_68 = *puVar12;
              uStack_60 = puVar12[1];
              local_58 = puVar12[2];
              uStack_50 = puVar12[3];
              uVar6 = local_68;
              uVar7 = uStack_60;
              uVar14 = puVar12[uVar25 * 4];
              uVar4 = (puVar12 + uVar25 * 4)[1];
              uVar5 = (puVar12 + uVar25 * 4 + 2)[1];
              puVar12[2] = puVar12[uVar25 * 4 + 2];
              puVar12[3] = uVar5;
              *puVar12 = uVar14;
              puVar12[1] = uVar4;
              local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
              uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
              puVar12[uVar25 * 4 + 2] = local_58;
              (puVar12 + uVar25 * 4 + 2)[1] = uStack_50;
              puVar13 = puVar12 + uVar25 * 4;
              *(undefined4 *)puVar13 = (undefined4)local_68;
              *(undefined4 *)((longlong)puVar13 + 4) = local_68._4_4_;
              *(undefined4 *)(puVar13 + 1) = (undefined4)uStack_60;
              *(undefined4 *)((longlong)puVar13 + 0xc) = uStack_60._4_4_;
              local_68 = uVar6;
              uStack_60 = uVar7;
              if (uVar35 != 2) {
                do {
                  iVar30 = 0;
                  iVar20 = 1;
                  iVar19 = 0;
                  do {
                    iVar30 = iVar30 + 2;
                    iVar21 = iVar20;
                    if (((longlong)iVar30 < (longlong)uVar25) &&
                       (*(ulonglong *)(puVar12[(longlong)iVar20 * 4 + 2] + 0x38) <=
                        *(ulonglong *)(puVar12[(longlong)iVar30 * 4 + 2] + 0x38))) {
                      iVar21 = iVar30;
                    }
                    if (*(ulonglong *)(puVar12[(longlong)iVar21 * 4 + 2] + 0x38) <=
                        *(ulonglong *)(puVar12[(longlong)iVar19 * 4 + 2] + 0x38)) break;
                    puVar29 = puVar12 + (longlong)iVar19 * 4;
                    puVar13 = puVar12 + (longlong)iVar21 * 4;
                    uVar14 = *puVar29;
                    uVar4 = puVar29[1];
                    uVar5 = puVar29[2];
                    uVar6 = puVar29[3];
                    uVar7 = *puVar13;
                    uVar8 = puVar13[1];
                    uVar9 = puVar13[3];
                    puVar29[2] = puVar13[2];
                    puVar29[3] = uVar9;
                    *puVar29 = uVar7;
                    puVar29[1] = uVar8;
                    puVar13[2] = uVar5;
                    puVar13[3] = uVar6;
                    *puVar13 = uVar14;
                    puVar13[1] = uVar4;
                    iVar30 = iVar21 * 2;
                    iVar20 = iVar21 * 2 + 1;
                    iVar19 = iVar21;
                  } while ((longlong)iVar20 < (longlong)uVar25);
                  uVar36 = uVar25 - 1;
                  local_68 = *puVar12;
                  uStack_60 = puVar12[1];
                  local_58 = puVar12[2];
                  uStack_50 = puVar12[3];
                  uVar6 = local_68;
                  uVar7 = uStack_60;
                  uVar14 = puVar12[uVar36 * 4];
                  uVar4 = (puVar12 + uVar36 * 4)[1];
                  uVar5 = (puVar12 + uVar36 * 4 + 2)[1];
                  puVar12[2] = puVar12[uVar36 * 4 + 2];
                  puVar12[3] = uVar5;
                  *puVar12 = uVar14;
                  puVar12[1] = uVar4;
                  local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
                  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
                  puVar12[uVar36 * 4 + 2] = local_58;
                  (puVar12 + uVar36 * 4 + 2)[1] = uStack_50;
                  puVar13 = puVar12 + uVar36 * 4;
                  *(undefined4 *)puVar13 = (undefined4)local_68;
                  *(undefined4 *)((longlong)puVar13 + 4) = local_68._4_4_;
                  *(undefined4 *)(puVar13 + 1) = (undefined4)uStack_60;
                  *(undefined4 *)((longlong)puVar13 + 0xc) = uStack_60._4_4_;
                  bVar37 = 2 < uVar25;
                  uVar25 = uVar36;
                  local_68 = uVar6;
                  uStack_60 = uVar7;
                } while (bVar37);
              }
            }
          }
LAB_142f67594:
          plVar16 = plVar16 + -3;
        } while (&local_368 <= plVar16);
        iVar30 = (int)local_3c0[3];
      }
      if (iVar30 != 0) {
        lVar31 = local_3c0[2];
        local_38c = (int)local_3b0 + -1;
        local_3b0 = (ulonglong)(uint)-(int)local_3b0;
        lVar22 = (longlong)iVar30 * 0x20;
        iVar30 = 0;
        do {
          lVar22 = lVar22 + -0x20;
          lVar2 = *(longlong *)(*(longlong *)(lVar31 + 0x10) + 0x90);
          *(undefined8 *)(*(longlong *)(lVar31 + 0x10) + 0x38) = DAT_14c867d10;
          iVar30 = iVar30 + *(int *)(*(longlong *)(lVar31 + 0x10) + 0x50);
          iVar20 = uVar11 + local_38c;
          iVar19 = *(int *)(lVar2 + 0x20);
          if (lVar2 != 0) {
            LOCK();
            *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
            UNLOCK();
          }
          if ((longlong)*(int *)(lVar31 + 0x18) < 0) {
            uVar28 = 0;
            lVar18 = 0;
          }
          else {
            uVar28 = *(undefined4 *)(*(longlong *)(lVar31 + 0x10) + 0x60);
            lVar18 = local_3a0 + (longlong)*(int *)(lVar31 + 0x18) * 0x28;
          }
          iVar21 = (int)local_3c0[7];
          *(uint *)(local_3c0 + 7) = iVar21 + 1U;
          if (*(uint *)((longlong)local_3c0 + 0x3c) < iVar21 + 1U) {
            FUN_1471b2712(local_3b8,iVar21);
          }
          uVar11 = iVar20 + iVar19 & (uint)local_3b0;
          lVar3 = *local_3b8;
          lVar33 = (longlong)iVar21 * 0x20;
          *(longlong *)(lVar3 + lVar33) = lVar2;
          *(undefined4 *)(lVar3 + 8 + lVar33) = 1;
          *(longlong *)(lVar3 + 0x10 + lVar33) = lVar18;
          *(undefined4 *)(lVar3 + 0x18 + lVar33) = uVar28;
          FUN_1472b4b68(local_3a8);
        } while ((iVar30 <= local_3c4) && (lVar31 = lVar31 + 0x20, lVar22 != 0));
      }
    }
    lVar31 = local_380;
    if (uVar11 != 0) {
      uVar35 = (uint)local_378;
      uVar24 = uVar35;
      if (DAT_14ca84e48 <= uVar35) {
        uVar24 = DAT_14ca84e48;
      }
      uStack_360 = CONCAT44(uStack_360._4_4_,0x90008);
      uVar35 = (uint)((ulonglong)((uVar35 + uVar11) - 1) / (local_378 & 0xffffffff));
      uVar11 = DAT_14ca84e48;
      if (uVar35 < DAT_14ca84e48) {
        uVar11 = uVar35;
      }
      local_358 = (undefined *)0x0;
      local_368 = (undefined8 *)CONCAT44(uVar11 + (uVar11 == 0),uVar24 + (uVar24 == 0));
      uVar36 = *(longlong *)(local_380 + 0x70) + 0xfU & 0xfffffffffffffff0;
      uVar25 = uVar36 + 0x150;
      if (*(ulonglong *)(local_380 + 0x78) < uVar25) {
        plVar16 = (longlong *)(local_380 + 0x70);
        FUN_140023dd8(plVar16,0x160);
        uVar36 = *plVar16 + 0xfU & 0xfffffffffffffff0;
        uVar25 = uVar36 + 0x150;
      }
      *(ulonglong *)(lVar31 + 0x70) = uVar25;
      FUN_1456bd266(uVar36,L"DynamicGeometry.BLASSharedScratchBuffer",&local_368,0);
      iVar30 = *(int *)(lVar31 + 400);
      *(uint *)(lVar31 + 400) = iVar30 + 1U;
      if (*(uint *)(lVar31 + 0x194) < iVar30 + 1U) {
        FUN_144737178(lVar31 + 0x188,iVar30);
      }
      *(ulonglong *)(*(longlong *)(lVar31 + 0x188) + (longlong)iVar30 * 8) = uVar36;
      *(int *)(uVar36 + 0x7c) = *(int *)(lVar31 + 400) + -1;
      *param_5 = uVar36;
    }
  }
  lVar31 = local_380;
  puVar1 = (ulonglong *)(local_380 + 0x70);
  puVar12 = (undefined8 *)(*(longlong *)(local_380 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar13 = puVar12 + 10;
  if (*(undefined8 **)(local_380 + 0x78) < puVar13) {
    FUN_140023dd8(puVar1,0x60);
    puVar12 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar13 = puVar12 + 10;
  }
  uVar11 = local_394;
  *(undefined8 **)(lVar31 + 0x70) = puVar13;
  *puVar12 = &PTR_FUN_14a2dbd70;
  puVar12[2] = 0;
  *(undefined4 *)(puVar12 + 3) = 0x400;
  puVar12[4] = 0;
  *(undefined1 *)(puVar12 + 5) = 1;
  puVar12[6] = 0;
  *(undefined1 *)(puVar12 + 7) = 1;
  puVar12[8] = 0;
  *(undefined1 *)(puVar12 + 9) = 1;
  iVar30 = *(int *)(lVar31 + 0xa0);
  *(uint *)(lVar31 + 0xa0) = iVar30 + 1U;
  if (*(uint *)(lVar31 + 0xa4) < iVar30 + 1U) {
    FUN_1448cfae8(lVar31 + 0x98,iVar30);
  }
  lVar22 = local_370;
  *(undefined8 **)(*(longlong *)(lVar31 + 0x98) + (longlong)iVar30 * 8) = puVar12;
  FUN_1448c58dc(local_370,&local_368);
  *(undefined4 *)(puVar12 + 6) = (undefined4)local_358;
  *(undefined4 *)((longlong)puVar12 + 0x34) = local_358._4_4_;
  *(undefined4 *)(puVar12 + 7) = uStack_350;
  *(undefined4 *)((longlong)puVar12 + 0x3c) = uStack_34c;
  *(undefined4 *)(puVar12 + 4) = (undefined4)local_368;
  *(undefined4 *)((longlong)puVar12 + 0x24) = local_368._4_4_;
  *(undefined4 *)(puVar12 + 5) = (undefined4)uStack_360;
  *(undefined4 *)((longlong)puVar12 + 0x2c) = uStack_360._4_4_;
  uVar14 = (**(code **)(**(longlong **)(*(longlong *)(lVar22 + 8) + 0x178) + 8))();
  uVar14 = FUN_1448c569e(uVar14,lVar31);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca4b328) && (FUN_144b3d300(&DAT_14ca4b328), DAT_14ca4b328 == -1)) {
    DAT_14ca4b320 = FUN_145900d44();
    _Init_thread_footer(&DAT_14ca4b328);
  }
  cVar15 = '\x02';
  if (*(char *)(DAT_14ca4b320 + 0x41) != '\x03') {
    cVar15 = *(char *)(DAT_14ca4b320 + 0x41);
  }
  puVar13 = puVar12 + 2;
  puVar12[8] = uVar14;
  *(char *)(puVar12 + 9) = cVar15;
  puVar12[2] = *param_5;
  *(undefined4 *)(puVar12 + 3) = 0x400;
  uVar35 = uVar11 | 0x10;
  FUN_1472c1c12();
  FUN_140069376(lVar31);
  if ((uVar11 & 4) == 0) {
    if (((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) &&
       ((DAT_14ca84e6a == '\x01' &&
        (((DAT_14ca84e99 & 1) == 0 && (DAT_14c760ddc == 2 && (uVar11 & 2) != 0)))))) {
      uVar35 = uVar11 & 0xfffffff9 | 0x14;
    }
    puVar29 = (undefined8 *)(*(longlong *)(lVar31 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar29 + 0x39;
    if (*(undefined8 **)(lVar31 + 0x78) < puVar12) {
      FUN_140023dd8(puVar1,0x1d0);
      puVar29 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar12 = puVar29 + 0x39;
    }
    *puVar1 = (ulonglong)puVar12;
    uStack_360 = DAT_14ca3f908;
    if (DAT_14ca3f908 != 0) {
      LOCK();
      *(int *)(DAT_14ca3f908 + 8) = *(int *)(DAT_14ca3f908 + 8) + 1;
      UNLOCK();
    }
    local_358 = &DAT_14ca3f8c0;
    local_3d8 = 2;
    local_368 = puVar13;
    FUN_140068f1a(puVar29,&local_68,&local_368,uVar35);
    *puVar29 = &PTR_FUN_14a2dbda0;
    puVar29[0x37] = local_3c0;
    puVar29[0x38] = puVar13;
  }
  else {
    if ((((DAT_14c760ddc < 1) || (DAT_14ca84e23 != '\x01')) || (DAT_14ca84e6a != '\x01')) ||
       ((DAT_14ca84e99 & 1) != 0)) {
      uVar35 = uVar11 & 0xfffffff9 | 0x12;
    }
    else if (DAT_14c760ddc == 2 && (uVar11 & 2) != 0) {
      uVar35 = uVar11 & 0xfffd | 0x10;
    }
    puVar29 = (undefined8 *)(*(longlong *)(lVar31 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar29 + 0x3a;
    if (*(undefined8 **)(lVar31 + 0x78) < puVar12) {
      FUN_140023dd8(puVar1,0x1d8);
      puVar29 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar12 = puVar29 + 0x3a;
    }
    *(undefined8 **)(lVar31 + 0x70) = puVar12;
    uVar28 = *(undefined4 *)(lVar31 + 0x660);
    uStack_360 = DAT_14ca3f908;
    if (DAT_14ca3f908 != 0) {
      LOCK();
      *(int *)(DAT_14ca3f908 + 8) = *(int *)(DAT_14ca3f908 + 8) + 1;
      UNLOCK();
    }
    local_358 = &DAT_14ca3f8c0;
    local_3d8 = 2;
    local_368 = puVar13;
    FUN_140068f1a(puVar29,&local_68,&local_368,uVar35);
    puVar29[0x37] = local_3c0;
    puVar29[0x38] = puVar13;
    *puVar29 = &PTR_FUN_14a2dbd80;
    *(undefined4 *)(puVar29 + 0x39) = uVar28;
  }
  puVar1 = local_388;
  iVar30 = *(int *)(lVar31 + 0x170);
  *(uint *)(lVar31 + 0x170) = iVar30 + 1U;
  if (*(uint *)(lVar31 + 0x174) < iVar30 + 1U) {
    FUN_14470e57a(lVar31 + 0x168,iVar30);
  }
  *(undefined8 **)(*(longlong *)(lVar31 + 0x168) + (longlong)iVar30 * 8) = puVar29;
  *(int *)((longlong)puVar29 + 0x2c) = *(int *)(lVar31 + 0x170) + -1;
  FUN_140069100(lVar31,puVar29);
  if (*(uint *)((longlong)puVar1 + 0x17c) != local_390) {
    *(uint *)((longlong)puVar1 + 0x17c) = local_390;
    puVar12 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar12 + 3;
    if ((undefined8 *)puVar1[1] < puVar13) {
      FUN_140023dd8(puVar1,0x20);
      puVar12 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar12 + 3;
    }
    *puVar1 = (ulonglong)puVar13;
    *(int *)(puVar1 + 0xc) = (int)puVar1[0xc] + 1;
    *(undefined8 **)puVar1[6] = puVar12;
    puVar1[6] = (ulonglong)(puVar12 + 1);
    uVar28 = *(undefined4 *)((longlong)puVar1 + 0x17c);
    puVar12[1] = 0;
    *puVar12 = &PTR_FUN_14a1fb2c0;
    *(undefined4 *)(puVar12 + 2) = uVar28;
  }
  if ((local_48 ^ (ulonglong)auStack_3f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_142f671bc:
  local_68 = *puVar12;
  uStack_60 = puVar12[1];
  local_58 = puVar12[2];
  uStack_50 = puVar12[3];
  uVar6 = local_68;
  uVar7 = uStack_60;
  uVar14 = *puVar27;
  uVar4 = puVar26[-3];
  uVar5 = puVar26[-1];
  puVar12[2] = puVar26[-2];
  puVar12[3] = uVar5;
  *puVar12 = uVar14;
  puVar12[1] = uVar4;
  local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  puVar26[-2] = local_58;
  puVar26[-1] = uStack_50;
  *(undefined4 *)puVar27 = (undefined4)local_68;
  *(undefined4 *)((longlong)puVar26 + -0x1c) = local_68._4_4_;
  *(undefined4 *)(puVar26 + -3) = (undefined4)uStack_60;
  *(undefined4 *)((longlong)puVar26 + -0x14) = uStack_60._4_4_;
  iVar30 = iVar30 + -1;
  puVar26 = puVar26 + -8;
  local_68 = uVar6;
  uStack_60 = uVar7;
  if ((longlong)puVar23 - (longlong)puVar29 < (longlong)puVar34 - (longlong)puVar32) {
    if (puVar17 < puVar13) {
      *plVar16 = (longlong)puVar17;
      plVar16[1] = (longlong)puVar13;
      *(int *)(plVar16 + 2) = iVar30;
      plVar16 = plVar16 + 3;
    }
    puVar32 = puVar12;
    if (puVar27 <= puVar12 + 4) goto LAB_142f67594;
  }
  else {
    if (puVar12 + 4 < puVar27) {
      *plVar16 = (longlong)puVar12;
      plVar16[1] = (longlong)puVar26;
      *(int *)(plVar16 + 2) = iVar30;
      plVar16 = plVar16 + 3;
    }
    puVar23 = puVar13;
    puVar12 = puVar17;
    puVar26 = puVar13;
    if (puVar13 <= puVar17) goto LAB_142f67594;
  }
  iVar19 = (int)((ulonglong)((longlong)puVar23 - (longlong)puVar32) >> 5);
  uVar35 = iVar19 + 1;
  puVar29 = puVar32;
  puVar13 = puVar26;
  puVar34 = puVar23;
  if (iVar30 == 0) goto LAB_142f6728a;
  goto LAB_142f670b2;
}



// FUNCTION 142f67cf3 FUN_142f67cf3 body=1752 status=ok
// SIG undefined FUN_142f67cf3(void)

void FUN_142f67cf3(ulonglong *param_1,longlong param_2,undefined8 *param_3,int param_4,
                  undefined4 param_5,longlong *param_6,longlong *param_7,longlong *param_8,
                  longlong *param_9,byte *param_10,longlong *param_11,longlong *param_12)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  bool bVar12;
  undefined1 auStack_138 [32];
  undefined8 *local_118;
  longlong local_110;
  longlong local_108;
  undefined1 local_fe;
  undefined1 local_fd;
  undefined1 local_fc;
  undefined1 local_fb;
  undefined1 local_fa;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  int local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_68;
  undefined4 local_60;
  uint local_5c;
  longlong local_58;
  longlong lStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_e8 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_d8 = *param_6;
  local_d0 = *param_7;
  local_c8 = *param_8;
  local_c0 = *param_9;
  local_b0 = *(undefined4 *)(DAT_14c9f5cb8 + 4);
  local_b8 = 0;
  local_a8 = param_5;
  local_98 = *param_3;
  local_90 = *(undefined4 *)(param_3 + 1);
  local_88 = *(undefined8 *)((longlong)param_3 + 0xc);
  local_80 = *(undefined4 *)((longlong)param_3 + 0x14);
  if (param_2 != 0) {
    local_a4 = *(undefined4 *)(param_2 + 0x38);
    local_f8 = *(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0x30);
    uStack_f0 = *(undefined8 *)(*(longlong *)(param_2 + 0x118) + 0x30);
    local_e8 = *(undefined8 *)(*(longlong *)(param_2 + 8) + 0x30);
  }
  if (param_10 != (byte *)0x0) {
    local_7c = *(undefined4 *)(param_10 + 4);
    local_78 = *(undefined4 *)(param_10 + 8);
    local_74 = *(undefined4 *)(param_10 + 0x14);
    local_68 = *(undefined8 *)(param_10 + 0x48);
    local_60 = *(undefined4 *)(param_10 + 0x50);
    local_5c = (uint)*param_10;
  }
  local_58 = *param_11;
  lStack_50 = *param_12;
  local_fe = local_c0 == 0;
  local_fd = lStack_50 != 0;
  local_fb = local_58 != 0;
  local_fc = param_10 != (byte *)0x0;
  local_fa = DAT_14ca84f10;
  local_ac = param_4;
  FUN_1472b50b2(*(undefined8 *)
                 (&DAT_14ca8c1f0 +
                 (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8),
                &local_110);
  if (local_110 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(ulonglong *)
             (*(longlong *)(*(longlong *)(local_108 + 8) + 0x50) +
             (longlong)*(int *)(local_110 + 0xd4) * 8);
    if (uVar4 == 0) {
      uVar4 = FUN_1400bafc2(*(longlong *)(local_108 + 8),(longlong)*(int *)(local_110 + 0xd4),1);
    }
  }
  uVar5 = FUN_140029432(param_1,uVar4,0);
  param_1[0x37] = uVar4;
  puVar6 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar6 + 3;
  if ((undefined8 *)param_1[1] < puVar11) {
    FUN_140023dd8(param_1,0x20);
    puVar6 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar6 + 3;
  }
  *param_1 = (ulonglong)puVar11;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar6;
  param_1[6] = (ulonglong)(puVar6 + 1);
  puVar6[1] = 0;
  *puVar6 = &PTR_LAB_14a37d340;
  puVar6[2] = uVar5;
  if (local_110 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = *(longlong *)
             (*(longlong *)(*(longlong *)(local_108 + 8) + 0x50) +
             (longlong)*(int *)(local_110 + 0xd4) * 8);
    if (lVar7 == 0) {
      lVar7 = FUN_1400bafc2(*(longlong *)(local_108 + 8),(longlong)*(int *)(local_110 + 0xd4),1);
    }
  }
  FUN_145f59b46();
  local_118 = &local_f8;
  FUN_140023cbf(param_1,lVar7,local_110,&DAT_14ca3f120);
  puVar6 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar6 + 4;
  if ((undefined8 *)param_1[1] < puVar11) {
    FUN_140023dd8(param_1,0x28);
    puVar6 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar6 + 4;
  }
  *param_1 = (ulonglong)puVar11;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar6;
  param_1[6] = (ulonglong)(puVar6 + 1);
  puVar6[1] = 0;
  *puVar6 = &PTR_LAB_14a1fbc30;
  *(uint *)(puVar6 + 2) = param_4 + 0x3fU >> 6;
  *(undefined1 **)((longlong)puVar6 + 0x14) = &DAT_100000001;
  if (local_110 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = *(longlong *)
             (*(longlong *)(*(longlong *)(local_108 + 8) + 0x50) +
             (longlong)*(int *)(local_110 + 0xd4) * 8);
    if (lVar7 == 0) {
      lVar7 = FUN_1400bafc2(*(longlong *)(local_108 + 8),(longlong)*(int *)(local_110 + 0xd4),1);
    }
  }
  FUN_1472b5148(param_1,&local_110,lVar7);
  lVar7 = *param_6;
  if (lVar7 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar7 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar7 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar7 + 0xd);
        plVar8 = (longlong *)FUN_14001cc68(0x10,8);
        plVar8[1] = lVar7;
        plVar10 = DAT_14ca843c0;
        plVar9 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar8 = (longlong)plVar10;
            LOCK();
            bVar12 = plVar10 != DAT_14ca843c0;
            plVar9 = plVar8;
            if (bVar12) {
              plVar10 = DAT_14ca843c0;
              plVar9 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar9;
            UNLOCK();
          } while (bVar12);
        }
        else {
          do {
            *plVar8 = (longlong)plVar9;
            LOCK();
            bVar12 = plVar9 != DAT_14ca843c8;
            plVar10 = plVar8;
            if (bVar12) {
              plVar9 = DAT_14ca843c8;
              plVar10 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar10;
            UNLOCK();
          } while (bVar12);
        }
      }
    }
  }
  lVar7 = *param_7;
  if (lVar7 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar7 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar7 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar7 + 0xd);
        plVar8 = (longlong *)FUN_14001cc68(0x10,8);
        plVar8[1] = lVar7;
        plVar10 = DAT_14ca843c0;
        plVar9 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar8 = (longlong)plVar10;
            LOCK();
            bVar12 = plVar10 != DAT_14ca843c0;
            plVar9 = plVar8;
            if (bVar12) {
              plVar10 = DAT_14ca843c0;
              plVar9 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar9;
            UNLOCK();
          } while (bVar12);
        }
        else {
          do {
            *plVar8 = (longlong)plVar9;
            LOCK();
            bVar12 = plVar9 != DAT_14ca843c8;
            plVar10 = plVar8;
            if (bVar12) {
              plVar9 = DAT_14ca843c8;
              plVar10 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar10;
            UNLOCK();
          } while (bVar12);
        }
      }
    }
  }
  lVar7 = *param_8;
  if (lVar7 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar7 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar7 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar7 + 0xd);
        plVar8 = (longlong *)FUN_14001cc68(0x10,8);
        plVar8[1] = lVar7;
        plVar10 = DAT_14ca843c0;
        plVar9 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar8 = (longlong)plVar10;
            LOCK();
            bVar12 = plVar10 != DAT_14ca843c0;
            plVar9 = plVar8;
            if (bVar12) {
              plVar10 = DAT_14ca843c0;
              plVar9 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar9;
            UNLOCK();
          } while (bVar12);
        }
        else {
          do {
            *plVar8 = (longlong)plVar9;
            LOCK();
            bVar12 = plVar9 != DAT_14ca843c8;
            plVar10 = plVar8;
            if (bVar12) {
              plVar9 = DAT_14ca843c8;
              plVar10 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar10;
            UNLOCK();
          } while (bVar12);
        }
      }
    }
  }
  lVar7 = *param_9;
  if (lVar7 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar7 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar7 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar7 + 0xd);
        plVar8 = (longlong *)FUN_14001cc68(0x10,8);
        plVar8[1] = lVar7;
        plVar10 = DAT_14ca843c0;
        plVar9 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar8 = (longlong)plVar10;
            LOCK();
            bVar12 = plVar10 != DAT_14ca843c0;
            plVar9 = plVar8;
            if (bVar12) {
              plVar10 = DAT_14ca843c0;
              plVar9 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar9;
            UNLOCK();
          } while (bVar12);
        }
        else {
          do {
            *plVar8 = (longlong)plVar9;
            LOCK();
            bVar12 = plVar9 != DAT_14ca843c8;
            plVar10 = plVar8;
            if (bVar12) {
              plVar9 = DAT_14ca843c8;
              plVar10 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar10;
            UNLOCK();
          } while (bVar12);
        }
      }
    }
  }
  lVar7 = *param_11;
  if (lVar7 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar7 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar7 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar7 + 0xd);
        plVar8 = (longlong *)FUN_14001cc68(0x10,8);
        plVar8[1] = lVar7;
        plVar10 = DAT_14ca843c0;
        plVar9 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar8 = (longlong)plVar10;
            LOCK();
            bVar12 = plVar10 != DAT_14ca843c0;
            plVar9 = plVar8;
            if (bVar12) {
              plVar10 = DAT_14ca843c0;
              plVar9 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar9;
            UNLOCK();
          } while (bVar12);
        }
        else {
          do {
            *plVar8 = (longlong)plVar9;
            LOCK();
            bVar12 = plVar9 != DAT_14ca843c8;
            plVar10 = plVar8;
            if (bVar12) {
              plVar9 = DAT_14ca843c8;
              plVar10 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar10;
            UNLOCK();
          } while (bVar12);
        }
      }
    }
  }
  lVar7 = *param_12;
  if (lVar7 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar7 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar7 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar7 + 0xd);
        plVar8 = (longlong *)FUN_14001cc68(0x10,8);
        plVar8[1] = lVar7;
        plVar10 = DAT_14ca843c0;
        plVar9 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar8 = (longlong)plVar10;
            LOCK();
            bVar12 = plVar10 != DAT_14ca843c0;
            plVar9 = plVar8;
            if (bVar12) {
              plVar10 = DAT_14ca843c0;
              plVar9 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar9;
            UNLOCK();
          } while (bVar12);
        }
        else {
          do {
            *plVar8 = (longlong)plVar9;
            LOCK();
            bVar12 = plVar9 != DAT_14ca843c8;
            plVar10 = plVar8;
            if (bVar12) {
              plVar9 = DAT_14ca843c8;
              plVar10 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar10;
            UNLOCK();
          } while (bVar12);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142f683cc FUN_142f683cc body=69 status=ok
// SIG undefined FUN_142f683cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f683cc(void)

{
  _DAT_14ca3a9f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f6840e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca3aa00,1);
  return;
}



// FUNCTION 142f68411 FUN_142f68411 body=69 status=ok
// SIG undefined FUN_142f68411(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f68411(void)

{
  _DAT_14ca3aa10 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f68453. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca3aa18,1);
  return;
}



// FUNCTION 142f68456 FUN_142f68456 body=69 status=ok
// SIG undefined FUN_142f68456(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f68456(void)

{
  _DAT_14ca3aa28 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f68498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca3aa30,1);
  return;
}



// FUNCTION 142f6849b FUN_142f6849b body=69 status=ok
// SIG undefined FUN_142f6849b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f6849b(void)

{
  _DAT_14ca3aa40 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f684dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca3aa48,1);
  return;
}



// FUNCTION 142f684e0 FUN_142f684e0 body=69 status=ok
// SIG undefined FUN_142f684e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f684e0(void)

{
  _DAT_14ca3aa58 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f68522. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca3aa60,1);
  return;
}



// FUNCTION 142f68525 FUN_142f68525 body=69 status=ok
// SIG undefined FUN_142f68525(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f68525(void)

{
  _DAT_14ca3aa70 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f68567. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca3aa78,1);
  return;
}



// FUNCTION 142f6856a FUN_142f6856a body=391 status=ok
// SIG undefined FUN_142f6856a(void)

void FUN_142f6856a(byte *param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  int iVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  
  bVar5 = 0;
  if ((*(byte *)(*(longlong *)(param_2 + 8) + 0x60) & 2) == 0) {
    iVar6 = 3;
    if (*(int *)(DAT_14ca3aa08 + 4) < 3) {
      iVar6 = *(int *)(DAT_14ca3aa08 + 4);
    }
    bVar5 = 0;
    if (0 < iVar6) {
      bVar5 = (byte)iVar6;
    }
  }
  *param_1 = bVar5;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(DAT_14ca3aa38 + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(DAT_14c9f5c88 + 4);
  fVar9 = *(float *)(DAT_14ca3aa50 + 4);
  *(float *)(param_1 + 0xc) = fVar9;
  fVar8 = 89.99;
  if (fVar9 <= 89.99) {
    fVar8 = fVar9;
  }
  fVar9 = tanf((fVar8 * 3.1415927) / 180.0);
  *(float *)(param_1 + 0x10) = fVar9;
  *(float *)(param_1 + 0x14) = fVar9 * fVar9;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x1058);
  uVar3 = *(undefined8 *)(param_2 + 0x1050);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x1048);
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  dVar1 = *(double *)(param_2 + 0x1040);
  dVar2 = *(double *)(param_2 + 0x1038);
  *(float *)(param_1 + 0x48) = (float)(*(double *)(param_1 + 0x18) + *(double *)(param_2 + 0x1030));
  *(float *)(param_1 + 0x4c) = (float)(*(double *)(param_1 + 0x20) + dVar2);
  *(float *)(param_1 + 0x50) = (float)(*(double *)(param_1 + 0x28) + dVar1);
  uVar3 = *(undefined8 *)(param_2 + 0xa00);
  uVar4 = *(undefined8 *)(param_2 + 0x9e0);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x9c0);
  *(undefined8 *)(param_1 + 0x38) = uVar4;
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  bVar7 = (*param_1 & 0xfe) == 2;
  param_1[0x54] = bVar7;
  param_1[0x55] = *param_1 == 3;
  param_1[0x56] =
       (byte)(*(uint *)(*(longlong *)(param_2 + 8) + 0x60) >> 0x13) & 1 &
       *(int *)(DAT_14c9f5c70 + 4) != 0;
  param_1[0x57] = *(int *)(DAT_14ca3aa80 + 4) != 0;
  param_1[0x58] = *(int *)(DAT_14ca3aa68 + 4) != 0;
  param_1[0x59] = *(int *)(DAT_14ca3aa20 + 4) != 0 && bVar7;
  return;
}



// FUNCTION 142f686f1 FUN_142f686f1 body=69 status=ok
// SIG undefined FUN_142f686f1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f686f1(void)

{
  _DAT_14ca3aa88 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f68733. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca3aa90,1);
  return;
}



// FUNCTION 142f68736 FUN_142f68736 body=69 status=ok
// SIG undefined FUN_142f68736(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f68736(void)

{
  _DAT_14ca3aaa0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f68778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca3aaa8,1);
  return;
}



// FUNCTION 142f6877b FUN_142f6877b body=69 status=ok
// SIG undefined FUN_142f6877b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f6877b(void)

{
  _DAT_14ca3aab8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f687bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca3aac0,1);
  return;
}



// FUNCTION 142f687c0 FUN_142f687c0 body=69 status=ok
// SIG undefined FUN_142f687c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f687c0(void)

{
  _DAT_14ca3aad0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f68802. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca3aad8,1);
  return;
}



// FUNCTION 142f6881d FUN_142f6881d body=7859 status=ok
// SIG undefined FUN_142f6881d(void)

void FUN_142f6881d(longlong param_1,longlong param_2,ulonglong param_3,undefined8 param_4,
                  char param_5)

{
  undefined8 *puVar1;
  double dVar2;
  double dVar3;
  byte bVar4;
  undefined1 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  char cVar8;
  uint uVar9;
  longlong lVar10;
  int *piVar11;
  uint *puVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  int iVar15;
  int iVar16;
  longlong *plVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uVar21;
  undefined8 *puVar22;
  uint uVar23;
  float fVar24;
  ulonglong uVar25;
  undefined4 uVar26;
  int iVar27;
  uint uVar28;
  longlong lVar29;
  int iVar30;
  int iVar31;
  longlong lVar32;
  undefined8 *puVar33;
  int *piVar34;
  bool bVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  undefined1 auStack_288 [32];
  int *local_268;
  int *local_260;
  undefined1 local_258;
  longlong *local_248;
  longlong *local_240;
  longlong local_238;
  undefined8 *local_230;
  uint *local_228;
  ulonglong local_220;
  longlong local_218;
  longlong *local_210;
  longlong local_208;
  ulonglong *local_200;
  ulonglong local_1f8;
  float local_1ec;
  uint *local_1e8;
  longlong *local_1e0;
  undefined8 local_1d8;
  int local_1d0;
  int iStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined1 local_1b9;
  int local_1b8;
  int iStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 uStack_1a8;
  int local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  int local_18c;
  undefined2 local_188;
  undefined1 uStack_186;
  char cStack_185;
  undefined2 uStack_184;
  undefined2 uStack_182;
  int local_180;
  float local_17c;
  float local_178;
  undefined8 local_174;
  int local_16c;
  int local_168;
  undefined8 local_164;
  int local_15c;
  int local_158;
  int local_154;
  int local_150;
  int local_14c;
  int local_148;
  int local_144;
  int local_140;
  int local_13c;
  int local_138;
  float local_12c;
  undefined8 local_128;
  uint local_118;
  int iStack_10c;
  ulonglong local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_288;
  plVar17 = (longlong *)(param_1 + 0x70);
  local_230 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar14 = local_230 + 0xe;
  local_240 = plVar17;
  local_238 = param_2;
  if (*(undefined8 **)(param_1 + 0x78) < puVar14) {
    FUN_140023dd8(plVar17,0x80);
    local_230 = (undefined8 *)(*plVar17 + 0xfU & 0xfffffffffffffff0);
    puVar14 = local_230 + 0xe;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar14;
  *local_230 = &PTR_FUN_14a2dbe10;
  plVar17 = (longlong *)(param_1 + 0x98);
  local_230[8] = 0;
  local_230[9] = 0;
  local_230[10] = 0;
  iVar15 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar15 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar15 + 1U) {
    FUN_1448cfae8(plVar17,iVar15);
  }
  puVar14 = local_230;
  plVar6 = local_240;
  local_200 = local_230 + 9;
  *(undefined8 **)(*plVar17 + (longlong)iVar15 * 8) = local_230;
  local_1e8 = (uint *)(local_230 + 2);
  if (param_5 == '\0') {
    local_230[2] = 0;
    local_230[4] = DAT_14c846330;
    *(undefined4 *)(local_230 + 5) = DAT_14c846338;
    local_230[6] = DAT_14c846330;
    *(undefined4 *)(local_230 + 7) = DAT_14c846338;
    local_1b8 = 0;
    local_268 = (int *)CONCAT44(local_268._4_4_,1);
    local_260 = &local_1b8;
    lVar10 = FUN_14489a2c5(param_1,&DAT_14ca63c48,&DAT_14ca63c78,0x80);
    plVar17 = local_240;
    cVar8 = *(char *)(lVar10 + 0x68);
    puVar33 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar22 = puVar33 + 9;
    if (*(undefined8 **)(param_1 + 0x78) < puVar22) {
      FUN_140023dd8(local_240,0x50);
      puVar33 = (undefined8 *)(*plVar17 + 7U & 0xfffffffffffffff8);
      puVar22 = puVar33 + 9;
    }
    local_248 = (longlong *)(param_1 + 0x198);
    *(undefined8 **)(param_1 + 0x70) = puVar22;
    puVar33[1] = *(undefined8 *)(lVar10 + 8);
    puVar33[2] = 0;
    *(undefined1 *)(puVar33 + 3) = 3;
    *(undefined8 *)((longlong)puVar33 + 0x1c) = 0xffffffffffffffff;
    *puVar33 = &PTR_FUN_14a1fb168;
    *(byte *)(puVar33 + 5) = cVar8 >> 7 & 0x1c;
    *(undefined8 *)((longlong)puVar33 + 0x2c) = 0xffffffff00000000;
    puVar33[7] = 0;
    puVar33[8] = lVar10;
    iVar15 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar15 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar15 + 1U) {
      FUN_1447568fc(local_248,iVar15);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar15 * 8) = puVar33;
    *(int *)((longlong)puVar33 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar14[8] = puVar33;
    local_260 = (int *)((ulonglong)local_260 & 0xffffffff00000000);
    local_268 = (int *)CONCAT71(local_268._1_7_,0x1c);
    uVar19 = FUN_14060c6ec(param_1,&DAT_14ca63c38,&DAT_14ca63c58,0);
    *local_200 = uVar19;
    local_1b8 = 0;
    local_268 = (int *)CONCAT44(local_268._4_4_,1);
    local_260 = &local_1b8;
    lVar10 = FUN_14489a2c5(param_1,&DAT_14ca63c48,&DAT_14ca63c78,4);
    plVar17 = local_240;
    puVar22 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar14 = puVar22 + 9;
    if (*(undefined8 **)(param_1 + 0x78) < puVar14) {
      FUN_140023dd8(local_240,0x50);
      puVar22 = (undefined8 *)(*plVar17 + 7U & 0xfffffffffffffff8);
      puVar14 = puVar22 + 9;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar14;
    puVar22[1] = *(undefined8 *)(lVar10 + 8);
    puVar22[2] = 0;
    *(undefined1 *)(puVar22 + 3) = 3;
    *(undefined8 *)((longlong)puVar22 + 0x1c) = 0xffffffffffffffff;
    *puVar22 = &PTR_FUN_14a1fb168;
    *(undefined1 *)(puVar22 + 5) = 0x1c;
    *(undefined8 *)((longlong)puVar22 + 0x2c) = 0xffffffff00000000;
    puVar22[7] = 0;
    puVar22[8] = lVar10;
    iVar15 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar15 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar15 + 1U) {
      FUN_1447568fc(local_248,iVar15);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar15 * 8) = puVar22;
    *(int *)((longlong)puVar22 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    local_230[10] = puVar22;
    local_230[0xb] = 0;
    *(undefined4 *)(local_230 + 0xc) = 0;
    goto LAB_142f6a387;
  }
  local_108 = 0;
  uStack_100 = 0;
  local_228 = (uint *)(local_238 + 0x3560);
  iVar15 = *(int *)(local_238 + 0x3578);
  if (iVar15 == 0) {
    uVar25 = 1;
    iVar27 = 0;
    uVar19 = 0;
    iVar16 = 0;
  }
  else {
    puVar12 = *(uint **)(local_238 + 0x3570);
    if (*(uint **)(local_238 + 0x3570) == (uint *)0x0) {
      puVar12 = local_228;
    }
    uVar9 = *puVar12;
    if (uVar9 == 0) {
      iVar27 = iVar15 + 0x1e;
      if (-1 < iVar15 + -1) {
        iVar27 = iVar15 + -1;
      }
      uVar19 = 0;
      uVar18 = (ulonglong)(uint)(iVar27 >> 5);
      if (iVar27 >> 5 < 1) {
        uVar18 = uVar19;
      }
      iVar27 = 0;
      do {
        if (uVar18 == uVar19) goto LAB_142f68c5f;
        iVar27 = iVar27 + 0x20;
        uVar9 = puVar12[uVar19 + 1];
        uVar19 = uVar19 + 1;
      } while (uVar9 == 0);
    }
    else {
      iVar27 = 0;
      uVar19 = 0;
    }
    uVar25 = (ulonglong)(-uVar9 & uVar9);
    uVar18 = uVar25 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar16 = (iVar27 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    if (iVar15 <= iVar16) {
      iVar16 = iVar15;
    }
  }
  if (iVar16 != iVar15) {
    lVar10 = *(longlong *)(local_238 + 0x3550);
    puVar12 = *(uint **)(local_238 + 0x3570);
    if (*(uint **)(local_238 + 0x3570) == (uint *)0x0) {
      puVar12 = local_228;
    }
    iVar30 = iVar15 + 0x1e;
    if (-1 < iVar15 + -1) {
      iVar30 = iVar15 + -1;
    }
    local_248 = (longlong *)CONCAT44(local_248._4_4_,DAT_14c760480);
    iVar30 = iVar30 >> 5;
    uVar9 = 0xffffffff;
    do {
      lVar32 = *(longlong *)(lVar10 + 0x30 + (longlong)iVar16 * 0x40);
      bVar4 = *(byte *)(*(longlong *)(lVar32 + 0x28) + 0x1d0);
      bVar35 = true;
      if ((bVar4 & 4) != 0) {
        if (((*(byte *)(lVar32 + 0xe4) & 1) == 0) ||
           (local_220 = param_3, DAT_14c760480 <= *(int *)(lVar32 + 0xf8))) {
          bVar35 = (bVar4 & 8) == 0;
        }
        bVar35 = (bool)(bVar35 ^ 1);
      }
      if ((bVar35) && ((*(byte *)(*(longlong *)(lVar32 + 0x28) + 0x1d3) & 1) != 0)) {
        piVar11 = (int *)((longlong)&local_108 +
                         (ulonglong)(*(uint *)((longlong)iVar16 * 0x40 + lVar10 + 0x38) & 3) * 4);
        *piVar11 = *piVar11 + 1;
      }
      uVar9 = uVar9 & ~(uint)uVar25;
      iVar16 = (int)uVar19;
      lVar32 = (longlong)iVar16;
      uVar21 = puVar12[lVar32] & uVar9;
      if (uVar21 == 0) {
        iVar31 = iVar30;
        if (iVar30 < iVar16) {
          iVar31 = iVar16;
        }
        if (iVar30 <= iVar16) break;
        lVar29 = 0;
        while( true ) {
          iVar27 = iVar27 + 0x20;
          uVar21 = puVar12[lVar32 + lVar29 + 1];
          if (uVar21 != 0) break;
          lVar29 = lVar29 + 1;
          if (iVar31 - lVar32 == lVar29) goto LAB_142f68c5f;
        }
        uVar19 = (ulonglong)(iVar16 + (int)lVar29 + 1);
        uVar9 = 0xffffffff;
      }
      uVar25 = (ulonglong)(-uVar21 & uVar21);
      uVar18 = uVar25 * 2 + 1;
      lVar32 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar32 == 0; lVar32 = lVar32 + -1) {
        }
      }
      iVar16 = (iVar27 - ((uint)lVar32 ^ 0x3f)) + 0x3e;
    } while (iVar16 < iVar15);
  }
LAB_142f68c5f:
  local_128 = local_128 & 0xffffffff00000000;
  lVar10 = 1;
  iVar15 = 0;
  do {
    iVar15 = iVar15 + (&iStack_10c)[lVar10];
    *(int *)((longlong)&local_128 + lVar10 * 4) = iVar15;
    lVar10 = lVar10 + 1;
  } while (lVar10 != 5);
  uVar19 = (ulonglong)local_118;
  *local_1e8 = local_118;
  piVar34 = (int *)(*(longlong *)(param_1 + 0x70) + 3U & 0xfffffffffffffffc);
  piVar11 = piVar34 + uVar19 * 0x20;
  local_218 = param_1;
  local_1f8 = uVar19;
  local_1e0 = plVar17;
  local_1d8 = param_4;
  if (*(int **)(param_1 + 0x78) < piVar11) {
    FUN_140023dd8(local_240,local_118 * 0x80 | 4);
    piVar34 = (int *)(*plVar6 + 3U & 0xfffffffffffffffc);
    piVar11 = piVar34 + uVar19 * 0x20;
  }
  *(int **)(param_1 + 0x70) = piVar11;
  iVar15 = FUN_14714c33c();
  if ((iVar15 < *(int *)(param_1 + 0x130)) &&
     (lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x128) + (longlong)iVar15 * 8), lVar10 != 0)) {
    local_248 = (longlong *)(lVar10 + 8);
  }
  else {
    local_248 = (longlong *)0x0;
  }
  uVar9 = *(uint *)(local_238 + 0x3578);
  uVar19 = (ulonglong)uVar9;
  if (uVar9 == 0) {
    uVar20 = 1;
    uVar18 = 0;
    iVar15 = 0;
    uVar21 = 0;
  }
  else {
    puVar12 = *(uint **)(local_238 + 0x3570);
    if (*(uint **)(local_238 + 0x3570) == (uint *)0x0) {
      puVar12 = local_228;
    }
    uVar21 = *puVar12;
    if (uVar21 == 0) {
      iVar15 = uVar9 + 0x1e;
      if (-1 < (int)(uVar9 - 1)) {
        iVar15 = uVar9 - 1;
      }
      uVar18 = 0;
      uVar25 = (ulonglong)(uint)(iVar15 >> 5);
      if (iVar15 >> 5 < 1) {
        uVar25 = uVar18;
      }
      iVar15 = 0;
      do {
        if (uVar25 == uVar18) goto LAB_142f68ef3;
        iVar15 = iVar15 + 0x20;
        uVar21 = puVar12[uVar18 + 1];
        uVar18 = uVar18 + 1;
      } while (uVar21 == 0);
    }
    else {
      uVar18 = 0;
      iVar15 = 0;
    }
    uVar20 = (ulonglong)(-uVar21 & uVar21);
    uVar25 = uVar20 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar25 != 0) {
      for (; uVar25 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar21 = (iVar15 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    if ((int)uVar9 <= (int)uVar21) {
      uVar21 = uVar9;
    }
  }
  if (uVar21 != uVar9) {
    local_210 = local_248 + 7;
    uVar23 = 0xffffffff;
    lVar10 = local_238;
    local_220 = uVar19;
    do {
      lVar32 = *(longlong *)(*(longlong *)(lVar10 + 0x3550) + 0x30 + (longlong)(int)uVar21 * 0x40);
      plVar17 = *(longlong **)(lVar32 + 0x28);
      bVar35 = true;
      if ((*(byte *)(plVar17 + 0x3a) & 4) != 0) {
        if (((*(byte *)(lVar32 + 0xe4) & 1) == 0) || (DAT_14c760480 <= *(int *)(lVar32 + 0xf8))) {
          bVar35 = (*(byte *)(plVar17 + 0x3a) & 8) == 0;
        }
        bVar35 = (bool)(bVar35 ^ 1);
      }
      if ((bVar35) && ((*(byte *)((longlong)plVar17 + 0x1d3) & 1) != 0)) {
        lVar10 = *(longlong *)(lVar10 + 0x3550) + (longlong)(int)uVar21 * 0x40;
        (**(code **)(*plVar17 + 0x78))(plVar17,&local_1b8,0);
        cVar8 = (**(code **)(**(longlong **)(*(longlong *)(lVar10 + 0x30) + 0x28) + 0x30))();
        fVar40 = local_194;
        fVar39 = local_198;
        fVar42 = local_19c;
        if (cVar8 != '\0') {
          local_18c = 0;
        }
        uVar9 = *(uint *)(lVar10 + 0x38) & 3;
        iVar27 = *(int *)((longlong)&local_128 + (ulonglong)uVar9 * 4);
        lVar32 = (longlong)iVar27;
        *(int *)((longlong)&local_128 + (ulonglong)uVar9 * 4) = iVar27 + 1;
        piVar34[lVar32 * 0x20] = uVar9;
        *(ulonglong *)(piVar34 + lVar32 * 0x20 + 8) =
             CONCAT26(uStack_182,
                      CONCAT24(uStack_184,CONCAT13(cStack_185,CONCAT12(uStack_186,local_188))));
        piVar34[lVar32 * 0x20 + 10] = local_180;
        dVar2 = *(double *)(param_3 + 0x1040);
        dVar3 = *(double *)(param_3 + 0x1038);
        piVar34[lVar32 * 0x20 + 4] =
             (int)(float)((double)CONCAT44(iStack_1b4,local_1b8) + *(double *)(param_3 + 0x1030));
        piVar34[lVar32 * 0x20 + 5] = (int)(float)((double)CONCAT44(uStack_1ac,uStack_1b0) + dVar3);
        piVar34[lVar32 * 0x20 + 6] = (int)(float)(uStack_1a8 + dVar2);
        plVar17 = *(longlong **)(param_3 + 0x30d8);
        fVar38 = 1.0;
        if (plVar17 != (longlong *)0x0) {
          if (*(code **)(*plVar17 + 0x88) == (code *)&LAB_144b15dc6) {
            fVar37 = *(float *)((longlong)plVar17 + 0x66c);
          }
          else {
            fVar37 = (float)(**(code **)(*plVar17 + 0x88))();
          }
          fVar38 = 1.0;
          if (0.0 < fVar37) {
            fVar36 = -local_12c;
            fVar38 = logf(fVar37);
            fVar38 = expf(fVar38 * fVar36);
          }
        }
        piVar34[lVar32 * 0x20 + 0xc] = (int)(fVar42 * fVar38);
        piVar34[lVar32 * 0x20 + 0xd] = (int)(fVar39 * fVar38);
        piVar34[lVar32 * 0x20 + 0xe] = (int)(fVar40 * fVar38);
        *(undefined8 *)(piVar34 + lVar32 * 0x20 + 0x10) = local_174;
        piVar34[lVar32 * 0x20 + 0x12] = local_16c;
        plVar17 = *(longlong **)(*(longlong *)(lVar10 + 0x30) + 0x28);
        uVar26 = *(undefined4 *)(param_3 + 0x3090);
        local_268 = (int *)CONCAT44(local_268._4_4_,*(undefined4 *)(param_3 + 0x4f8));
        (**(code **)(*plVar17 + 0x80))(plVar17,&local_1d0,uVar26,0);
        *(undefined8 *)(piVar34 + lVar32 * 0x20 + 0x14) = local_164;
        fVar39 = (float)(double)CONCAT44(uStack_1c4,local_1c8);
        fVar42 = ABS(fVar39);
        if ((uint)fVar42 < 0x47800000) {
          if ((uint)fVar42 < 0x38800000) {
            fVar42 = fVar42 + 0.5;
          }
          else {
            fVar42 = (float)((int)fVar42 + 0x8000fff + (uint)(((uint)fVar42 >> 0xd & 1) != 0) >> 0xd
                            );
          }
        }
        else {
          fVar42 = (float)((0x7f800000 < (uint)fVar42 | 0x3e) << 9);
        }
        fVar38 = (float)((double)CONCAT44(uStack_1c4,local_1c8) *
                        -(double)CONCAT44(iStack_1cc,local_1d0));
        fVar40 = ABS(fVar38);
        if ((uint)fVar40 < 0x47800000) {
          if ((uint)fVar40 < 0x38800000) {
            fVar37 = fVar40 + 0.5;
          }
          else {
            fVar40 = (float)((int)fVar40 + 0x8000fff + (uint)(((uint)fVar40 >> 0xd & 1) != 0) >> 0xd
                            );
            fVar37 = fVar40;
          }
        }
        else {
          fVar37 = (float)((0x7f800000 < (uint)fVar40 | 0x3e) << 9);
        }
        uVar9 = movmskps(fVar40,ZEXT416((uint)fVar39));
        iVar27 = movmskps(uVar26,ZEXT416((uint)fVar38));
        uVar9 = iVar27 << 0x1f | (uVar9 & 1) << 0xf | (uint)fVar42 & 0xffff;
        piVar34[lVar32 * 0x20 + 0x18] = (int)fVar37 << 0x10 | uVar9;
        piVar34[lVar32 * 0x20 + 0x19] =
             *(int *)(*(longlong *)(*(longlong *)(lVar10 + 0x30) + 0x28) + 0x150);
        piVar34[lVar32 * 0x20 + 7] = local_1a0;
        fVar42 = ABS(local_178);
        if ((uint)fVar42 < 0x47800000) {
          if ((uint)fVar42 < 0x38800000) {
            fVar42 = fVar42 + 0.5;
          }
          else {
            fVar42 = (float)((int)fVar42 + 0x8000fff + (uint)(((uint)fVar42 >> 0xd & 1) != 0) >> 0xd
                            );
          }
        }
        else {
          fVar42 = (float)((0x7f800000 < (uint)fVar42 | 0x3e) << 9);
        }
        fVar39 = ABS(local_17c);
        if ((uint)fVar39 < 0x47800000) {
          if ((uint)fVar39 < 0x38800000) {
            fVar40 = fVar39 + 0.5;
          }
          else {
            fVar39 = (float)((int)fVar39 + 0x8000fff + (uint)(((uint)fVar39 >> 0xd & 1) != 0) >> 0xd
                            );
            fVar40 = fVar39;
          }
        }
        else {
          fVar40 = (float)((0x7f800000 < (uint)fVar39 | 0x3e) << 9);
        }
        uVar21 = movmskps(fVar39,ZEXT416((uint)local_178));
        iVar27 = movmskps(uVar9,ZEXT416((uint)local_17c));
        piVar34[lVar32 * 0x20 + 0xf] =
             (int)fVar40 << 0x10 | iVar27 << 0x1f | (uVar21 & 1) << 0xf | (uint)fVar42 & 0xffff;
        piVar34[lVar32 * 0x20 + 0xb] = local_18c;
        piVar34[lVar32 * 0x20 + 0x13] = local_168;
        piVar34[lVar32 * 0x20 + 0x16] = local_158;
        piVar34[lVar32 * 0x20 + 0x17] = local_15c;
        piVar34[lVar32 * 0x20 + 0x1a] = local_154;
        piVar34[lVar32 * 0x20 + 0x1b] = local_150;
        piVar34[lVar32 * 0x20 + 1] = local_138;
        piVar34[lVar32 * 0x20 + 0x1c] = local_14c;
        piVar34[lVar32 * 0x20 + 0x1d] = local_148;
        piVar34[lVar32 * 0x20 + 0x1e] = local_144;
        piVar34[lVar32 * 0x20 + 0x1f] = local_140;
        piVar34[lVar32 * 0x20 + 2] = local_13c;
        piVar34[lVar32 * 0x20 + 3] = 1;
        if ((*(byte *)(lVar10 + 0x38) & 3) == 0) {
          iVar27 = (**(code **)(**(longlong **)(*(longlong *)(lVar10 + 0x30) + 0x28) + 0x58))();
          piVar34[lVar32 * 0x20 + 0x1a] = iVar27;
        }
        if ((local_248 != (longlong *)0x0) &&
           ((int)local_248[1] != *(int *)((longlong)local_248 + 0x34))) {
          plVar17 = (longlong *)local_248[8];
          if ((longlong *)local_248[8] == (longlong *)0x0) {
            plVar17 = local_210;
          }
          iVar27 = *(int *)((longlong)plVar17 +
                           (ulonglong)
                           ((int)local_248[9] - 1U & *(uint *)(*(longlong *)(lVar10 + 0x30) + 0x34))
                           * 4);
          if (iVar27 != -1) {
            do {
              plVar17 = (longlong *)(*local_248 + (longlong)iVar27 * 0x18);
              if (*plVar17 == *(longlong *)(lVar10 + 0x30)) {
                if (plVar17 + 1 != (longlong *)0x0 && plVar17 != (longlong *)0x0) {
                  piVar34[lVar32 * 0x20 + 3] = (int)plVar17[1];
                }
                break;
              }
              iVar27 = (int)plVar17[2];
            } while (iVar27 != -1);
          }
        }
        uVar9 = *(uint *)(local_238 + 0x3578);
        lVar10 = local_238;
        uVar19 = local_220;
      }
      uVar23 = uVar23 & ~(uint)uVar20;
      puVar12 = *(uint **)(lVar10 + 0x3570);
      if (*(uint **)(lVar10 + 0x3570) == (uint *)0x0) {
        puVar12 = local_228;
      }
      iVar27 = (int)uVar18;
      lVar32 = (longlong)iVar27;
      uVar21 = puVar12[lVar32] & uVar23;
      if (uVar21 == 0) {
        iVar16 = uVar9 + 0x1e;
        if (-1 < (int)(uVar9 - 1)) {
          iVar16 = uVar9 - 1;
        }
        iVar16 = iVar16 >> 5;
        iVar15 = iVar15 + 0x20;
        iVar30 = iVar16;
        if (iVar16 < iVar27) {
          iVar30 = iVar27;
        }
        if (iVar27 < iVar16) {
          lVar29 = 0;
          do {
            uVar21 = puVar12[lVar32 + lVar29 + 1];
            if (uVar21 != 0) {
              uVar18 = (ulonglong)(iVar27 + (int)lVar29 + 1);
              uVar23 = 0xffffffff;
              goto LAB_142f69cb1;
            }
            iVar15 = iVar15 + 0x20;
            lVar29 = lVar29 + 1;
          } while (iVar30 - lVar32 != lVar29);
          uVar23 = 0xffffffff;
          iVar27 = iVar30;
        }
        uVar18 = (ulonglong)(iVar27 + 1);
        lVar10 = local_238;
        uVar19 = local_220;
        uVar21 = uVar9;
      }
      else {
LAB_142f69cb1:
        uVar20 = (ulonglong)(-uVar21 & uVar21);
        uVar25 = uVar20 * 2 + 1;
        lVar32 = 0x3f;
        if (uVar25 != 0) {
          for (; uVar25 >> lVar32 == 0; lVar32 = lVar32 + -1) {
          }
        }
        uVar21 = (iVar15 - ((uint)lVar32 ^ 0x3f)) + 0x3e;
        if ((int)uVar9 <= (int)uVar21) {
          uVar21 = uVar9;
        }
      }
    } while (uVar21 != (uint)uVar19);
  }
LAB_142f68ef3:
  param_1 = local_218;
  if ((int)local_1f8 == 0) {
    local_268 = (int *)&DAT_14a2dbe18;
    local_260 = (int *)&DAT_00000080;
    uVar19 = 1;
  }
  else {
    local_260 = (int *)(longlong)((int)local_1f8 << 7);
    uVar19 = local_1f8;
    local_268 = piVar34;
  }
  local_258 = 1;
  lVar10 = FUN_144942e63(local_218,L"LightBuffer",0x80,uVar19);
  plVar17 = local_240;
  cVar8 = *(char *)(lVar10 + 0x68);
  puVar22 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar14 = puVar22 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar14) {
    FUN_140023dd8(local_240,0x50);
    puVar22 = (undefined8 *)(*plVar17 + 7U & 0xfffffffffffffff8);
    puVar14 = puVar22 + 9;
  }
  lVar32 = param_1 + 0x198;
  *(undefined8 **)(param_1 + 0x70) = puVar14;
  puVar22[1] = *(undefined8 *)(lVar10 + 8);
  puVar22[2] = 0;
  *(undefined1 *)(puVar22 + 3) = 3;
  *(undefined8 *)((longlong)puVar22 + 0x1c) = 0xffffffffffffffff;
  *puVar22 = &PTR_FUN_14a1fb168;
  *(byte *)(puVar22 + 5) = cVar8 >> 7 & 0x1c;
  *(undefined8 *)((longlong)puVar22 + 0x2c) = 0xffffffff00000000;
  puVar22[7] = 0;
  puVar22[8] = lVar10;
  iVar15 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar15 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar15 + 1U) {
    FUN_1447568fc(lVar32,iVar15);
  }
  puVar14 = local_230;
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar15 * 8) = puVar22;
  *(int *)((longlong)puVar22 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  local_230[8] = puVar22;
  uVar19 = local_108 & 0xffffffff;
  *(int *)((longlong)local_230 + 0x14) = (int)local_108;
  uVar9 = *(uint *)(local_230 + 2);
  local_230[4] = 0x7f8000007f800000;
  *(undefined4 *)(local_230 + 5) = 0x7f800000;
  local_230[6] = 0xff800000ff800000;
  *(undefined4 *)(local_230 + 7) = 0xff800000;
  *local_200 = 0;
  local_200[1] = 0;
  uVar21 = uVar9 - (int)local_108;
  if (uVar21 == 0) {
    local_230[0xb] = 0;
    *(undefined4 *)(local_230 + 0xc) = 0;
    uVar13 = FUN_14473c272(param_1,&DAT_14ca63b28,0);
    plVar17 = local_240;
    puVar14[9] = uVar13;
    uStack_1a8 = 0.0;
    uVar9 = 4;
    if (DAT_14ca84e48 < 4) {
      uVar9 = DAT_14ca84e48;
    }
    local_1b8 = uVar9 + (uVar9 == 0);
    iStack_1b4 = 1;
    uStack_1b0 = 0x4109;
    uVar18 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
    uVar19 = uVar18 + 0x150;
    if (*(ulonglong *)(param_1 + 0x78) < uVar19) {
      FUN_140023dd8(local_240,0x160);
      uVar18 = *plVar17 + 0xfU & 0xfffffffffffffff0;
      uVar19 = uVar18 + 0x150;
    }
    *(ulonglong *)(param_1 + 0x70) = uVar19;
    FUN_1456bd266(uVar18,L"RayTracing.LightGridData",&local_1b8,0);
    iVar15 = *(int *)(param_1 + 400);
    *(uint *)(param_1 + 400) = iVar15 + 1U;
    if (*(uint *)(param_1 + 0x194) < iVar15 + 1U) {
      FUN_144737178(param_1 + 0x188,iVar15);
    }
    plVar17 = local_240;
    *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar15 * 8) = uVar18;
    *(int *)(uVar18 + 0x7c) = *(int *)(param_1 + 400) + -1;
    puVar22 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar14 = puVar22 + 8;
    if (*(undefined8 **)(param_1 + 0x78) < puVar14) {
      FUN_140023dd8(local_240,0x48);
      puVar22 = (undefined8 *)(*plVar17 + 7U & 0xfffffffffffffff8);
      puVar14 = puVar22 + 8;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar14;
    puVar22[1] = *(undefined8 *)(uVar18 + 8);
    puVar22[2] = 0;
    *(undefined1 *)(puVar22 + 3) = 2;
    *(undefined8 *)((longlong)puVar22 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar22 + 5) = 0;
    *puVar22 = &PTR_FUN_14a1fb3e8;
    *(undefined2 *)(puVar22 + 6) = 0x1c;
    *(undefined1 *)((longlong)puVar22 + 0x32) = 0;
    puVar22[7] = uVar18;
    iVar15 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar15 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar15 + 1U) {
      FUN_1447568fc(lVar32,iVar15);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar15 * 8) = puVar22;
    *(int *)((longlong)puVar22 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    FUN_1405bfba3(param_1,puVar22,0,2);
    plVar17 = local_240;
    puVar22 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar14 = puVar22 + 9;
    if (*(undefined8 **)(param_1 + 0x78) < puVar14) {
      FUN_140023dd8(local_240,0x50);
      puVar22 = (undefined8 *)(*plVar17 + 7U & 0xfffffffffffffff8);
      puVar14 = puVar22 + 9;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar14;
    puVar22[1] = *(undefined8 *)(uVar18 + 8);
    puVar22[2] = 0;
    *(undefined1 *)(puVar22 + 3) = 3;
    *(undefined8 *)((longlong)puVar22 + 0x1c) = 0xffffffffffffffff;
    *puVar22 = &PTR_FUN_14a1fb168;
    *(undefined1 *)(puVar22 + 5) = 0x1c;
    *(undefined8 *)((longlong)puVar22 + 0x2c) = 0xffffffff00000000;
    puVar22[7] = 0;
    puVar22[8] = uVar18;
    uVar19 = (ulonglong)*(int *)(param_1 + 0x1a0);
    uVar9 = *(int *)(param_1 + 0x1a0) + 1;
    *(uint *)(param_1 + 0x1a0) = uVar9;
    if (*(uint *)(param_1 + 0x1a4) < uVar9) {
LAB_142f6a49e:
      FUN_1447568fc(lVar32,uVar19 & 0xffffffff);
    }
  }
  else {
    local_208 = lVar32;
    if ((int)uVar21 < 1) {
      fVar36 = -INFINITY;
      fVar39 = INFINITY;
      fVar40 = INFINITY;
      fVar37 = -INFINITY;
      fVar42 = INFINITY;
      fVar38 = -INFINITY;
    }
    else {
      fVar42 = INFINITY;
      fVar38 = -INFINITY;
      lVar10 = 0;
      fVar36 = -INFINITY;
      fVar37 = -INFINITY;
      fVar39 = INFINITY;
      fVar40 = INFINITY;
      do {
        fVar46 = 1.0 / *(float *)((longlong)piVar34 + lVar10 + uVar19 * 0x80 + 0x1c);
        fVar24 = *(float *)((longlong)piVar34 + lVar10 + uVar19 * 0x80 + 0x10);
        local_228 = (uint *)CONCAT44(local_228._4_4_,fVar24);
        fVar52 = *(float *)((longlong)piVar34 + lVar10 + uVar19 * 0x80 + 0x14);
        local_248 = (longlong *)CONCAT44(local_248._4_4_,fVar52);
        fVar41 = *(float *)((longlong)piVar34 + lVar10 + uVar19 * 0x80 + 0x18);
        fVar53 = *(float *)((longlong)piVar34 + lVar10 + uVar19 * 0x80 + 0x28);
        fVar51 = *(float *)((longlong)piVar34 + lVar10 + uVar19 * 0x80 + 0x24);
        fVar45 = *(float *)((longlong)piVar34 + lVar10 + uVar19 * 0x80 + 0x20);
        fVar43 = 1.0 - fVar53 * fVar53;
        if (1.0 <= fVar43) {
          fVar43 = 1.0;
        }
        if (fVar43 <= 0.0) {
          fVar43 = 0.0;
        }
        local_238 = CONCAT44(local_238._4_4_,SQRT(fVar43));
        fVar44 = 1.0 - fVar51 * fVar51;
        if (1.0 <= fVar44) {
          fVar44 = 1.0;
        }
        if (fVar44 <= 0.0) {
          fVar44 = 0.0;
        }
        fVar47 = 1.0 - fVar45 * fVar45;
        if (1.0 <= fVar47) {
          fVar47 = 1.0;
        }
        if (fVar47 <= 0.0) {
          fVar47 = 0.0;
        }
        iVar15 = *(int *)((longlong)piVar34 + lVar10 + uVar19 * 0x80);
        if (iVar15 == 3) {
          local_210 = (longlong *)CONCAT44(local_210._4_4_,fVar41);
          fVar48 = fVar41 - fVar53 * fVar46;
          fVar51 = fVar52 - fVar51 * fVar46;
          local_218 = CONCAT44(local_218._4_4_,fVar51);
          fVar53 = fVar24 - fVar45 * fVar46;
          fVar50 = SQRT(fVar43) * fVar46;
          fVar45 = SQRT(fVar44) * fVar46;
          fVar46 = SQRT(fVar47) * fVar46;
          fVar44 = fVar41 - fVar50;
          fVar47 = fVar52 - fVar45;
          fVar49 = fVar24 - fVar46;
          fVar43 = fVar48;
          if (fVar44 <= fVar48) {
            fVar43 = fVar44;
          }
          local_220 = CONCAT44(local_220._4_4_,fVar43);
          fVar44 = fVar51;
          if (fVar47 <= fVar51) {
            fVar44 = fVar47;
          }
          fVar47 = fVar53;
          if (fVar49 <= fVar53) {
            fVar47 = fVar49;
          }
          fVar50 = fVar50 + fVar41;
          fVar45 = fVar45 + fVar52;
          fVar46 = fVar46 + fVar24;
          if (fVar48 <= fVar50) {
            fVar48 = fVar50;
          }
          if (fVar51 <= fVar45) {
            fVar51 = fVar45;
          }
          if (fVar53 <= fVar46) {
            fVar53 = fVar46;
          }
        }
        else if (iVar15 == 2) {
          fVar39 = fVar41 - fVar46 * fVar53;
          fVar40 = fVar52 - fVar46 * fVar51;
          fVar38 = fVar24 - fVar46 * fVar45;
          fVar42 = fVar41;
          if (fVar39 <= fVar41) {
            fVar42 = fVar39;
          }
          local_220 = CONCAT44(local_220._4_4_,fVar42);
          local_1ec = fVar52;
          if (fVar40 <= fVar52) {
            local_1ec = fVar40;
          }
          fVar42 = fVar24;
          if (fVar38 <= fVar24) {
            fVar42 = fVar38;
          }
          local_1f8 = CONCAT44(local_1f8._4_4_,fVar42);
          fVar42 = fVar41;
          if (fVar41 <= fVar39) {
            fVar42 = fVar39;
          }
          local_218 = CONCAT44(local_218._4_4_,fVar42);
          if (fVar52 <= fVar40) {
            fVar52 = fVar40;
          }
          if (fVar24 <= fVar38) {
            fVar24 = fVar38;
          }
          fVar42 = *(float *)((longlong)piVar34 + lVar10 + uVar19 * 0x80 + 0x50);
          fVar39 = 1.0 - fVar42 * fVar42;
          if (fVar39 < 0.0) {
            fVar39 = sqrtf(fVar39);
            puVar14 = local_230;
          }
          else {
            fVar39 = SQRT(fVar39);
          }
          fVar37 = SQRT(fVar44) * fVar39;
          fVar38 = SQRT(fVar47) * fVar39;
          fVar40 = (-fVar53 * fVar42 - (float)local_238 * fVar39) * fVar46 + fVar41;
          fVar43 = (float)local_220;
          if (fVar40 <= (float)local_220) {
            fVar43 = fVar40;
          }
          fVar40 = (-fVar51 * fVar42 - fVar37) * fVar46 + local_248._0_4_;
          fVar44 = local_1ec;
          if (fVar40 <= local_1ec) {
            fVar44 = fVar40;
          }
          fVar40 = (-fVar45 * fVar42 - fVar38) * fVar46 + local_228._0_4_;
          fVar47 = (float)local_1f8;
          if (fVar40 <= (float)local_1f8) {
            fVar47 = fVar40;
          }
          fVar41 = ((float)local_238 * fVar39 + -fVar53 * fVar42) * fVar46 + fVar41;
          fVar48 = (float)local_218;
          if ((float)local_218 <= fVar41) {
            fVar48 = fVar41;
          }
          fVar39 = (fVar37 + -fVar51 * fVar42) * fVar46 + local_248._0_4_;
          fVar51 = fVar52;
          if (fVar52 <= fVar39) {
            fVar51 = fVar39;
          }
          fVar42 = (fVar38 + -fVar45 * fVar42) * fVar46 + local_228._0_4_;
          if (fVar24 <= fVar42) {
            fVar24 = fVar42;
          }
          fVar42 = *(float *)(puVar14 + 5);
          fVar39 = *(float *)(puVar14 + 4);
          fVar40 = *(float *)((longlong)puVar14 + 0x24);
          fVar38 = *(float *)(puVar14 + 7);
          fVar37 = *(float *)((longlong)puVar14 + 0x34);
          fVar36 = *(float *)(puVar14 + 6);
          fVar53 = fVar24;
        }
        else if (iVar15 == 1) {
          fVar47 = fVar24 - fVar46;
          fVar48 = fVar46 + fVar41;
          fVar43 = fVar41 - fVar46;
          fVar51 = fVar46 + fVar52;
          fVar44 = fVar52 - fVar46;
          fVar53 = fVar24 + fVar46;
        }
        else {
          fVar51 = INFINITY;
          fVar48 = INFINITY;
          fVar47 = -INFINITY;
          fVar44 = -INFINITY;
          fVar43 = -INFINITY;
          fVar53 = INFINITY;
        }
        if (fVar36 <= fVar53) {
          fVar36 = fVar53;
        }
        if (fVar37 <= fVar51) {
          fVar37 = fVar51;
        }
        if (fVar38 <= fVar48) {
          fVar38 = fVar48;
        }
        if (fVar47 <= fVar39) {
          fVar39 = fVar47;
        }
        if (fVar44 <= fVar40) {
          fVar40 = fVar44;
        }
        if (fVar43 <= fVar42) {
          fVar42 = fVar43;
        }
        *(float *)(puVar14 + 4) = fVar39;
        *(float *)((longlong)puVar14 + 0x24) = fVar40;
        *(float *)(puVar14 + 5) = fVar42;
        *(float *)(puVar14 + 6) = fVar36;
        *(float *)((longlong)puVar14 + 0x34) = fVar37;
        *(float *)(puVar14 + 7) = fVar38;
        lVar10 = lVar10 + 0x80;
      } while ((ulonglong)uVar21 << 7 != lVar10);
    }
    plVar17 = local_240;
    uVar19 = (ulonglong)
             (*(int *)(DAT_14ca3aab0 + 4) + -1 + (uint)(*(int *)(DAT_14ca3aab0 + 4) == 0)) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    bVar4 = (byte)lVar10;
    fVar24 = (float)(1 << (bVar4 & 0x1f));
    if ((int)*(uint *)(DAT_14ca3aac8 + 4) < (int)uVar21) {
      uVar21 = *(uint *)(DAT_14ca3aac8 + 4);
    }
    if ((int)uVar21 < 2) {
      uVar21 = 1;
    }
    *(float *)(puVar14 + 0xb) = fVar24;
    *(uint *)((longlong)puVar14 + 0x5c) = uVar21;
    uVar23 = *(uint *)(DAT_14ca3aae0 + 4);
    if (2 < *(uint *)(DAT_14ca3aae0 + 4)) {
      uVar23 = 0;
      if (fVar37 - fVar40 <= fVar36 - fVar39 || fVar38 - fVar42 <= fVar36 - fVar39) {
        uVar23 = (fVar38 - fVar42 <= fVar37 - fVar40) + 1;
      }
    }
    *(uint *)(puVar14 + 0xc) = uVar23;
    uVar23 = (uint)(uVar9 >= 0x10001) * 2 + 2;
    if (uVar9 < 0x101) {
      uVar23 = 1;
    }
    uVar28 = (uint)(byte)((uVar9 < 0x10001) * '\x04' + 0x1c);
    if (uVar9 < 0x101) {
      uVar28 = 0x39;
    }
    local_248 = (longlong *)CONCAT44(local_248._4_4_,uVar28);
    cStack_185 = (uVar9 < 0x10000) * '\x04' + '\x1c';
    if (uVar9 < 0x100) {
      cStack_185 = '9';
    }
    local_1a0 = DAT_14ca85098;
    uStack_1b0 = DAT_14ca85088;
    uStack_1ac = DAT_14ca8508c;
    uStack_1a8 = (double)CONCAT44(DAT_14ca85094,DAT_14ca85090);
    local_19c = (float)~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    uStack_186 = 0;
    local_1b8 = 0x20008;
    iStack_1b4 = 0;
    uStack_184 = 0xff00;
    local_18c = 0x10001;
    local_188 = 0x101;
    local_198 = 0.0;
    local_194 = DAT_14ca84e40;
    if ((int)fVar24 < (int)DAT_14ca84e40) {
      local_194 = fVar24;
    }
    if ((int)local_194 < 2) {
      local_194 = 1.4013e-45;
    }
    uVar18 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar19 = uVar18 + 0x120;
    local_190 = local_194;
    if (*(ulonglong *)(param_1 + 0x78) < uVar19) {
      FUN_140023dd8(local_240,0x128);
      uVar18 = *plVar17 + 7U & 0xfffffffffffffff8;
      uVar19 = uVar18 + 0x120;
    }
    *(ulonglong *)(param_1 + 0x70) = uVar19;
    FUN_1456bbb8c(uVar18,L"RayTracing.LightGrid",&local_1b8,0);
    iVar15 = *(int *)(param_1 + 0x180);
    *(uint *)(param_1 + 0x180) = iVar15 + 1U;
    if (*(uint *)(param_1 + 0x184) < iVar15 + 1U) {
      FUN_14472c0f6(param_1 + 0x178,iVar15);
    }
    plVar17 = local_240;
    *(ulonglong *)(*(longlong *)(param_1 + 0x178) + (longlong)iVar15 * 8) = uVar18;
    *(int *)(uVar18 + 0x9c) = *(int *)(param_1 + 0x180) + -1;
    uVar9 = (uVar21 << (bVar4 & 0x1f)) << (bVar4 & 0x1f);
    if (DAT_14ca84e48 <= uVar23) {
      uVar23 = DAT_14ca84e48;
    }
    local_1b8 = uVar23 + (uVar23 == 0);
    uStack_1b0 = 0x4109;
    if (DAT_14ca84e48 <= uVar9) {
      uVar9 = DAT_14ca84e48;
    }
    uStack_1a8 = 0.0;
    iStack_1b4 = uVar9 + (uVar9 == 0);
    uVar25 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
    uVar19 = uVar25 + 0x150;
    if (*(ulonglong *)(param_1 + 0x78) < uVar19) {
      FUN_140023dd8(local_240,0x160);
      uVar25 = *plVar17 + 0xfU & 0xfffffffffffffff0;
      uVar19 = uVar25 + 0x150;
    }
    *(ulonglong *)(param_1 + 0x70) = uVar19;
    FUN_1456bd266(uVar25,L"RayTracing.LightGridData",&local_1b8,0);
    iVar15 = *(int *)(param_1 + 400);
    *(uint *)(param_1 + 400) = iVar15 + 1U;
    if (*(uint *)(param_1 + 0x194) < iVar15 + 1U) {
      FUN_144737178(param_1 + 0x188,iVar15);
    }
    plVar17 = local_240;
    *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar15 * 8) = uVar25;
    *(int *)(uVar25 + 0x7c) = *(int *)(param_1 + 400) + -1;
    puVar22 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar14 = puVar22 + 0xe;
    if (*(undefined8 **)(param_1 + 0x78) < puVar14) {
      FUN_140023dd8(local_240,0x80);
      puVar22 = (undefined8 *)(*plVar17 + 0xfU & 0xfffffffffffffff0);
      puVar14 = puVar22 + 0xe;
    }
    puVar7 = local_230;
    puVar33 = local_230 + 4;
    puVar1 = local_230 + 6;
    *(undefined8 **)(param_1 + 0x70) = puVar14;
    *puVar22 = &PTR_FUN_14a2db7b8;
    puVar22[8] = 0;
    puVar22[0xb] = 0;
    puVar22[0xc] = 0;
    iVar15 = *(int *)(param_1 + 0xa0);
    *(uint *)(param_1 + 0xa0) = iVar15 + 1U;
    if (*(uint *)(param_1 + 0xa4) < iVar15 + 1U) {
      FUN_1448cfae8(local_1e0,iVar15);
    }
    plVar17 = local_240;
    *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar15 * 8) = puVar22;
    *(undefined4 *)(puVar22 + 2) = *(undefined4 *)(local_230 + 2);
    *(undefined4 *)((longlong)puVar22 + 0x14) = *(undefined4 *)((longlong)local_230 + 0x14);
    puVar22[8] = local_230[8];
    *(undefined4 *)(puVar22 + 5) = *(undefined4 *)(puVar7 + 5);
    puVar22[4] = *puVar33;
    puVar22[6] = *puVar1;
    *(undefined4 *)(puVar22 + 7) = *(undefined4 *)(puVar7 + 7);
    *(undefined4 *)(puVar22 + 9) = *(undefined4 *)(local_230 + 0xb);
    *(undefined4 *)((longlong)puVar22 + 0x4c) = *(undefined4 *)((longlong)local_230 + 0x5c);
    *(undefined4 *)(puVar22 + 10) = *(undefined4 *)(local_230 + 0xc);
    uVar5 = *(undefined1 *)(uVar18 + 0x94);
    puVar33 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar14 = puVar33 + 9;
    if (*(undefined8 **)(param_1 + 0x78) < puVar14) {
      FUN_140023dd8(local_240,0x50);
      puVar33 = (undefined8 *)(*plVar17 + 7U & 0xfffffffffffffff8);
      puVar14 = puVar33 + 9;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar14;
    puVar33[1] = *(undefined8 *)(uVar18 + 8);
    puVar33[2] = 0;
    *(undefined1 *)(puVar33 + 3) = 0;
    *(undefined8 *)((longlong)puVar33 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar33 + 5) = 0;
    *puVar33 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar33 + 6) = uVar5;
    *(undefined1 *)(puVar33 + 7) = 0;
    *(undefined4 *)((longlong)puVar33 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar33 + 0x35) = 0;
    puVar33[8] = uVar18;
    iVar15 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar15 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar15 + 1U) {
      FUN_1447568fc(local_208,iVar15);
    }
    plVar17 = local_240;
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar15 * 8) = puVar33;
    *(int *)((longlong)puVar33 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar22[0xb] = puVar33;
    puVar33 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar14 = puVar33 + 8;
    if (*(undefined8 **)(param_1 + 0x78) < puVar14) {
      FUN_140023dd8(local_240,0x48);
      puVar33 = (undefined8 *)(*plVar17 + 7U & 0xfffffffffffffff8);
      puVar14 = puVar33 + 8;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar14;
    puVar33[1] = *(undefined8 *)(uVar25 + 8);
    puVar33[2] = 0;
    *(undefined1 *)(puVar33 + 3) = 2;
    *(undefined8 *)((longlong)puVar33 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar33 + 5) = 0;
    *puVar33 = &PTR_FUN_14a1fb3e8;
    *(char *)(puVar33 + 6) = (char)local_248;
    *(undefined2 *)((longlong)puVar33 + 0x31) = 0;
    puVar33[7] = uVar25;
    iVar15 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar15 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar15 + 1U) {
      FUN_1447568fc(local_208,iVar15);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar15 * 8) = puVar33;
    *(int *)((longlong)puVar33 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar22[0xc] = puVar33;
    FUN_145e941f6();
    FUN_1448e935e(local_1d8,&local_1b8,&DAT_14ca3abe8,0);
    FUN_145e941f6();
    local_1d0 = (int)fVar24 + 0xe;
    if (-1 < (int)fVar24 + 7) {
      local_1d0 = (int)fVar24 + 7;
    }
    local_1d0 = local_1d0 >> 3;
    local_268 = &local_1d0;
    local_1c8 = 1;
    iStack_1cc = local_1d0;
    FUN_1472be472(param_1,&local_1b9,&local_1b8,puVar22 + 2);
    plVar17 = local_240;
    *local_200 = uVar18;
    puVar22 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar14 = puVar22 + 9;
    if (*(undefined8 **)(param_1 + 0x78) < puVar14) {
      FUN_140023dd8(local_240,0x50);
      puVar22 = (undefined8 *)(*plVar17 + 7U & 0xfffffffffffffff8);
      puVar14 = puVar22 + 9;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar14;
    puVar22[1] = *(undefined8 *)(uVar25 + 8);
    puVar22[2] = 0;
    *(undefined1 *)(puVar22 + 3) = 3;
    *(undefined8 *)((longlong)puVar22 + 0x1c) = 0xffffffffffffffff;
    *puVar22 = &PTR_FUN_14a1fb168;
    *(char *)(puVar22 + 5) = (char)local_248;
    *(undefined8 *)((longlong)puVar22 + 0x2c) = 0xffffffff00000000;
    puVar22[7] = 0;
    puVar22[8] = uVar25;
    uVar19 = (ulonglong)*(int *)(param_1 + 0x1a0);
    uVar9 = *(int *)(param_1 + 0x1a0) + 1;
    *(uint *)(param_1 + 0x1a0) = uVar9;
    lVar32 = local_208;
    if (*(uint *)(param_1 + 0x1a4) < uVar9) goto LAB_142f6a49e;
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + uVar19 * 8) = puVar22;
  *(int *)((longlong)puVar22 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  local_230[10] = puVar22;
LAB_142f6a387:
  local_1b8 = (int)local_1e8;
  iStack_1b4 = (int)((ulonglong)local_1e8 >> 0x20);
  FUN_145ce4a14();
  local_128 = DAT_14ca3ab00;
  FUN_1472c2d26(param_1 + 0x1a8,local_240,&local_1b8);
  if ((local_f0 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f6a6f5 FUN_142f6a6f5 body=69 status=ok
// SIG undefined FUN_142f6a6f5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f6a6f5(void)

{
  _DAT_14ca3af98 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f6a737. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca3afa0,1);
  return;
}



// FUNCTION 142f6a73a FUN_142f6a73a body=69 status=ok
// SIG undefined FUN_142f6a73a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f6a73a(void)

{
  _DAT_14ca3afa8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f6a77c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca3afb0,1);
  return;
}



// FUNCTION 142f6a77f FUN_142f6a77f body=69 status=ok
// SIG undefined FUN_142f6a77f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f6a77f(void)

{
  _DAT_14ca3afb8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f6a7c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca3afc0,1);
  return;
}



// FUNCTION 142f6a7c4 FUN_142f6a7c4 body=69 status=ok
// SIG undefined FUN_142f6a7c4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f6a7c4(void)

{
  _DAT_14ca3afc8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f6a806. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca3afd0,1);
  return;
}



// FUNCTION 142f6aa1a FUN_142f6aa1a body=5352 status=ok
// SIG undefined FUN_142f6aa1a(void)

void FUN_142f6aa1a(longlong param_1,longlong param_2,longlong param_3,longlong *param_4,
                  undefined4 *param_5)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  int iVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  uint uVar22;
  uint uVar23;
  bool bVar24;
  undefined1 local_268 [39];
  byte local_241;
  ulonglong local_240;
  longlong local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 *local_220;
  longlong local_218;
  undefined8 local_210;
  longlong *local_208;
  longlong local_200;
  ulonglong local_1f8;
  undefined8 local_1f0;
  undefined4 local_1e8;
  uint local_1e4;
  longlong *local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  undefined8 local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  undefined8 uStack_1a0;
  longlong local_198;
  undefined8 uStack_190;
  longlong local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  int iStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  ulonglong local_168;
  ulonglong uStack_160;
  ulonglong local_158;
  ulonglong uStack_150;
  undefined2 local_148;
  longlong local_140;
  longlong lStack_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  longlong local_120;
  int local_118;
  longlong local_110;
  int local_108;
  longlong local_100;
  int local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  uint local_c0;
  byte bStack_bc;
  undefined1 uStack_bb;
  undefined1 uStack_ba;
  undefined1 uStack_b9;
  undefined4 local_b8;
  undefined4 local_b4;
  int local_b0;
  uint local_ac;
  int local_a8;
  ulonglong local_a0;
  longlong local_98 [5];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)local_268;
  uVar22 = *(uint *)(param_1 + 0xf8) & 2;
  uVar16 = 0x120;
  if (uVar22 == 0) {
    uVar16 = 4;
  }
  local_220 = *(undefined8 **)(param_2 + 0x18);
  local_178 = 8;
  uStack_170 = CONCAT31(uStack_170._1_3_,1);
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  local_140 = 0;
  lStack_138 = 0;
  local_218 = param_2;
  local_200 = param_1;
  iStack_174 = FUN_147433942(uVar16);
  if ((((*(byte *)((longlong)&DAT_14ca814d0 +
                  (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_3 + 0x3090) * 2)
                  * 0x3c + 7) & 0x60) == 0) || (lVar5 = FUN_1472b0504(0), lVar5 == 0 || uVar22 != 0)
      ) && (lVar5 = lStack_138, uVar22 != 0)) {
    local_1f0 = FUN_14727365e(*(undefined8 *)(param_3 + 0x13818));
  }
  else {
    lStack_138 = lVar5;
    local_1f0 = FUN_1472b6f9a(*(undefined8 *)(param_3 + 0x13818));
  }
  uVar20 = 0x4f1a08f64cae0c3d;
  local_188 = 0;
  uStack_180 = 0;
  FUN_147441fd4(&DAT_14ca9fc50,&local_188);
  local_120 = local_188;
  local_118 = (int)uStack_180;
  uStack_160 = 0x4f1a08f64cae0c3d;
  if ((longlong)(int)uStack_180 != 0) {
    lVar5 = 0;
    uStack_160 = 0x4f1a08f64cae0c3d;
    do {
      if (*(longlong *)(local_188 + lVar5) == 0) {
        lVar18 = 0;
      }
      else {
        lVar18 = *(longlong *)(*(longlong *)(local_188 + lVar5) + 0x88);
      }
      uStack_160 = uStack_160 ^ uStack_160 * 0x40 + 0x9e3779b9 + (uStack_160 >> 2) + lVar18;
      lVar5 = lVar5 + 8;
    } while ((longlong)(int)uStack_180 * 8 != lVar5);
  }
  local_130 = (undefined4)*param_4;
  uStack_12c = *(undefined4 *)((longlong)param_4 + 4);
  uStack_128 = (undefined4)param_4[1];
  uStack_124 = *(undefined4 *)((longlong)param_4 + 0xc);
  local_168 = 0x4f1a08f64cae0c3d;
  if ((longlong)(int)param_4[1] != 0) {
    lVar5 = 0;
    local_168 = 0x4f1a08f64cae0c3d;
    do {
      if (*(longlong *)(*param_4 + lVar5) == 0) {
        lVar18 = 0;
      }
      else {
        lVar18 = *(longlong *)(*(longlong *)(*param_4 + lVar5) + 0x88);
      }
      local_168 = local_168 ^ local_168 * 0x40 + 0x9e3779b9 + (local_168 >> 2) + lVar18;
      lVar5 = lVar5 + 8;
    } while ((longlong)(int)param_4[1] * 8 != lVar5);
  }
  bVar2 = FUN_1403fac90(*(undefined2 *)(&DAT_14ca85070 + (longlong)*(int *)(param_3 + 0x3090) * 2));
  bVar24 = DAT_14ca3af90 != 0;
  uVar14 = (ulonglong)DAT_14ca3e2d0;
  local_238 = param_3;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < (int)DAT_14ca3e2d0) &&
     (uVar14 = FUN_144b3d300(&DAT_14ca3e2d0), DAT_14ca3e2d0 == 0xffffffff)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    DAT_14ca3e2c8 =
         (longlong *)
         (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.RayTracing.Shadows.EnableMaterials");
    uVar14 = _Init_thread_footer(&DAT_14ca3e2d0);
    param_3 = local_238;
  }
  if (bVar2 == 0) {
    local_210 = (ulonglong)local_210._4_4_ << 0x20;
  }
  else {
    local_210 = CONCAT44(local_210._4_4_,(int)CONCAT71((int7)(uVar14 >> 8),1));
    if (DAT_14ca3e2c8 != (longlong *)0x0) {
      uVar16 = (**(code **)(*DAT_14ca3e2c8 + 0xb0))();
      local_210 = CONCAT44(local_210._4_4_,
                           (int)CONCAT71((int7)((ulonglong)uVar16 >> 8),(int)uVar16 != 0));
    }
  }
  local_241 = bVar2 & bVar24;
  if (uVar22 == 0) {
    lVar5 = FUN_1472ba6ff();
    uVar16 = FUN_1472ba7db(*(undefined8 *)(param_3 + 0x13818));
  }
  else {
    lVar5 = FUN_147274f06(*(undefined8 *)(param_3 + 0x13818));
    uVar16 = FUN_147274fe3(*(undefined8 *)(param_3 + 0x13818));
  }
  local_1e4 = uVar22 >> 1;
  uVar6 = FUN_1472b288c(*(undefined8 *)(param_3 + 0x13818));
  uVar7 = FUN_1472b2983(*(undefined8 *)(param_3 + 0x13818));
  local_198 = 0;
  uStack_190 = 0;
  if ((local_241 != 0) && (FUN_147441fd4(&DAT_14ca9f400,&local_198), uVar22 != 0)) {
    FUN_147441fd4(&DAT_14ca9f400,&local_198);
  }
  local_98[0] = lVar5;
  local_98[1] = uVar16;
  local_98[2] = uVar6;
  local_98[3] = uVar7;
  lVar18 = 0;
  local_230 = uVar6;
  local_228 = uVar16;
  local_1f8 = uVar7;
  do {
    uVar14 = uStack_190;
    uVar16 = *(undefined8 *)((longlong)local_98 + lVar18);
    lVar21 = (longlong)(int)uStack_190;
    uVar3 = (int)uStack_190 + 1;
    uStack_190 = CONCAT44(uStack_190._4_4_,uVar3);
    if (uStack_190._4_4_ < uVar3) {
      FUN_1471499ca(&local_198,uVar14 & 0xffffffff);
    }
    *(undefined8 *)(local_198 + lVar21 * 8) = uVar16;
    lVar18 = lVar18 + 8;
  } while (lVar18 != 0x20);
  local_110 = local_198;
  local_108 = (int)uStack_190;
  local_158 = 0x4f1a08f64cae0c3d;
  if ((longlong)(int)uStack_190 != 0) {
    lVar18 = 0;
    local_158 = 0x4f1a08f64cae0c3d;
    do {
      if (*(longlong *)(local_198 + lVar18) == 0) {
        lVar21 = 0;
      }
      else {
        lVar21 = *(longlong *)(*(longlong *)(local_198 + lVar18) + 0x88);
      }
      local_158 = local_158 ^ local_158 * 0x40 + 0x9e3779b9 + (local_158 >> 2) + lVar21;
      lVar18 = lVar18 + 8;
    } while ((longlong)(int)uStack_190 * 8 != lVar18);
  }
  if (uVar22 == 0) {
LAB_142f6aeeb:
    uStack_1a0 = 0;
    local_1a8 = 0;
    uVar16 = 0;
    lVar18 = 0;
  }
  else {
    lVar18 = *(longlong *)(*(longlong *)(local_238 + 8) + 0x40);
    piVar8 = &DAT_14c760db4;
    if (lVar18 != 0) {
      piVar8 = (int *)(lVar18 + 8);
    }
    local_1a8 = 0;
    uStack_1a0 = 0;
    if ((~(&DAT_14ca814c8)[(ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*piVar8 * 2) * 0xf] &
        0xc00000) != 0) goto LAB_142f6aeeb;
    FUN_1472ba8d2(*(undefined8 *)(local_238 + 0x13818));
    if (local_f0 == 0) {
      lVar18 = 0;
    }
    else {
      lVar18 = *(longlong *)
                (*(longlong *)(*(longlong *)(uStack_e8 + 8) + 0x50) +
                (longlong)*(int *)(local_f0 + 0xd4) * 8);
      if (lVar18 == 0) {
        lVar18 = FUN_1400bafc2(*(longlong *)(uStack_e8 + 8),(longlong)*(int *)(local_f0 + 0xd4),1);
      }
    }
    if (local_241 == 0) {
      lVar21 = (longlong)(int)uStack_1a0;
      uVar3 = (int)uStack_1a0 + 1;
      uStack_1a0 = CONCAT44(uStack_1a0._4_4_,uVar3);
      if (uStack_1a0._4_4_ < uVar3) {
        FUN_1471499ca(&local_1a8);
      }
      *(longlong *)(local_1a8 + lVar21 * 8) = lVar18;
    }
    else {
      FUN_147441fd4(&DAT_14ca9f828,&local_1a8,lVar18);
    }
    local_100 = local_1a8;
    local_f8 = (int)uStack_1a0;
    if ((longlong)(int)uStack_1a0 != 0) {
      lVar21 = 0;
      do {
        if (*(longlong *)(local_1a8 + lVar21) == 0) {
          lVar19 = 0;
        }
        else {
          lVar19 = *(longlong *)(*(longlong *)(local_1a8 + lVar21) + 0x88);
        }
        uVar20 = uVar20 ^ uVar20 * 0x40 + 0x9e3779b9 + (uVar20 >> 2) + lVar19;
        lVar21 = lVar21 + 8;
      } while ((longlong)(int)uStack_1a0 * 8 != lVar21);
    }
    uVar16 = CONCAT71((int7)(uVar20 >> 8),1);
    uStack_150 = uVar20;
  }
  puVar9 = (undefined8 *)0x0;
  uVar4 = 0;
  if ((DAT_14c760920 == 0) || ((*(byte *)(local_238 + 0x23ee) & 1) != 0)) goto LAB_142f6b02c;
  if ((*(longlong *)(local_238 + 0x3108) == 0) ||
     (puVar9 = (undefined8 *)FUN_147405b4a(*(longlong *)(local_238 + 0x3108) + 0x1d98),
     puVar9 == (undefined8 *)0x0)) {
    puVar9 = (undefined8 *)0x0;
LAB_142f6b02a:
    uVar4 = 0;
  }
  else {
    lVar21 = *(longlong *)(local_238 + 0x3108);
    if ((((lVar21 == 0) || (iStack_174 != *(int *)(lVar21 + 0x1d9c))) ||
        (local_168 != *(ulonglong *)(lVar21 + 0x1da8))) ||
       ((uStack_160 != *(ulonglong *)(lVar21 + 0x1db0) ||
        (uStack_150 != *(ulonglong *)(lVar21 + 0x1dc0))))) goto LAB_142f6b02a;
    lVar21 = 0;
    uVar4 = 0;
    do {
      iVar15 = FUN_14740503d(puVar9,*(undefined8 *)((longlong)local_98 + lVar21),0);
      if (iVar15 == -1) goto LAB_142f6b02c;
      lVar21 = lVar21 + 8;
    } while (lVar21 != 0x20);
    uVar4 = 0;
    iVar15 = FUN_1474050e2(puVar9,local_1f0,0);
    if (iVar15 != -1) {
      if ((char)uVar16 != '\0') {
        uVar4 = 0;
        iVar15 = FUN_14740508e(puVar9,lVar18,0);
        if (iVar15 == -1) goto LAB_142f6b02c;
      }
      uVar4 = 1;
    }
  }
LAB_142f6b02c:
  puVar10 = (undefined8 *)FUN_1431e3d59(local_220,&local_178,uVar4);
  uVar6 = local_230;
  if (puVar10 == (undefined8 *)0x0) {
    puVar10 = puVar9;
    if (puVar9 == (undefined8 *)0x0) {
      puVar10 = (undefined8 *)0x0;
      uVar4 = 0;
      goto LAB_142f6b09f;
    }
  }
  else {
    lVar21 = *(longlong *)(local_238 + 0x3108);
    if (lVar21 != 0) {
      *(ulonglong *)(lVar21 + 0x1db8) = local_158;
      *(ulonglong *)(lVar21 + 0x1dc0) = uStack_150;
      *(ulonglong *)(lVar21 + 0x1da8) = local_168;
      *(ulonglong *)(lVar21 + 0x1db0) = uStack_160;
      *(undefined4 *)(lVar21 + 0x1d98) = local_178;
      *(int *)(lVar21 + 0x1d9c) = iStack_174;
      *(undefined4 *)(lVar21 + 0x1da0) = uStack_170;
      *(undefined4 *)(lVar21 + 0x1da4) = uStack_16c;
    }
  }
  uVar4 = *(undefined4 *)(puVar10 + 6);
LAB_142f6b09f:
  *param_5 = uVar4;
  local_1c8 = lVar18;
  local_1c0 = uVar16;
  uVar4 = FUN_14740503d(puVar10,lVar5,1);
  local_1f0 = CONCAT44(local_1f0._4_4_,uVar4);
  local_1e8 = FUN_14740503d(puVar10,local_228,1);
  local_228._0_4_ = -1;
  local_230._0_4_ = 0xffffffff;
  if (uVar22 != 0) {
    local_228._0_4_ = FUN_14740503d(puVar10,uVar6,1);
    local_230._0_4_ = FUN_14740503d(puVar10,local_1f8,1);
  }
  lVar21 = local_200;
  lVar5 = local_238;
  uVar22 = *(uint *)(local_238 + 0x11708);
  local_1f8 = (ulonglong)uVar22;
  uVar3 = uVar22 + 0x3ff >> 10;
  uVar3 = uVar3 + (uVar3 == 0);
  local_1b8 = *(longlong *)(local_200 + 1000);
  uVar22 = ((uVar22 + uVar3) - 1) / uVar3;
  local_220 = puVar10;
  FUN_1471dd2e6(local_238 + 0x13b10,(ulonglong)uVar3,1);
  lVar18 = local_218;
  local_1d0 = lVar21 + 0x10;
  local_1b0 = FUN_1472e1976(local_1d0,local_218);
  local_208 = (longlong *)(lVar18 + 0x500);
  local_1d8 = -0x37ffffad77750000;
  local_1e0 = (longlong *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x2b8);
  uVar20 = 0;
  do {
    iVar15 = (int)uVar20;
    lVar18 = (ulonglong)(uVar22 * iVar15) * 0x20 + *(longlong *)(lVar5 + 0x11700);
    uVar23 = (int)local_1f8 - uVar22 * iVar15;
    if (uVar22 < uVar23) {
      uVar23 = uVar22;
    }
    puVar9 = (undefined8 *)FUN_14001cc68(0x38,0x10);
    *puVar9 = 0;
    puVar9[1] = 0;
    puVar9[2] = 0;
    puVar9[3] = 0;
    puVar9[4] = 0;
    puVar9[5] = 0;
    *(undefined8 *)((longlong)puVar9 + 0x2e) = 0;
    if (DAT_14c872d30 == 0) {
      FUN_145bdc178();
    }
    *(undefined8 **)(*(longlong *)(lVar5 + 0x13b10) + uVar20 * 8) = puVar9;
    uStack_e8 = local_1b0;
    uStack_ba = (undefined1)local_1e4;
    local_e0 = (undefined8 *)CONCAT71(local_e0._1_7_,uStack_ba);
    uStack_d8 = local_220;
    bStack_bc = local_241;
    uStack_bb = (undefined1)local_210;
    local_b8 = (undefined4)local_1f0;
    local_b4 = local_1e8;
    local_b0 = (int)local_228;
    local_ac = (uint)local_230;
    bVar2 = *(byte *)(local_218 + 0x520);
    local_f0 = lVar5;
    local_d0 = puVar9;
    uStack_c8 = lVar18;
    local_c0 = uVar23;
    local_a8 = iVar15;
    if (bVar2 == 0) {
      FUN_142f785b0(&local_f0);
LAB_142f6b6e5:
      FUN_14473400f(0,0);
    }
    else {
      plVar11 = TlsGetValue(DAT_14c896140);
      if (plVar11 == (longlong *)0x0) {
        plVar11 = (longlong *)FUN_14001cc68(0x18,0x10);
        *plVar11 = 0;
        plVar11[1] = 0;
        *(undefined4 *)(plVar11 + 2) = 0;
        TlsSetValue(DAT_14c896140,plVar11);
      }
      plVar13 = (longlong *)plVar11[1];
      if (plVar13 == (longlong *)0x0) {
        plVar13 = (longlong *)*plVar11;
        if (plVar13 == (longlong *)0x0) {
          do {
            local_a0 = DAT_14c896180;
            uVar23 = (uint)DAT_14c896180;
            if ((DAT_14c896180 & 0x3ffffff) == 0) {
              plVar11[1] = 0;
              goto LAB_142f6b4c1;
            }
            local_240 = (DAT_14c896180 & 0xfffffffffc000000) + 0x4000000;
            if (local_240 >> 0x1a < DAT_14c896180 >> 0x1a) {
              FUN_14000f986(0x3a83126f);
            }
            uVar17 = (ulonglong)((uVar23 & 0x3ffffff) >> 0xe);
            local_240 = local_240 & 0xfffffffffc000000 |
                        (ulonglong)
                        *(uint *)(*(longlong *)(&DAT_14c833b00 + uVar17 * 8) + 0x10 +
                                 (ulonglong)(uVar23 & 0x3fff) * 0x18);
            LOCK();
            bVar24 = local_a0 != DAT_14c896180;
            uVar14 = local_240;
            if (bVar24) {
              uVar14 = DAT_14c896180;
            }
            DAT_14c896180 = uVar14;
            UNLOCK();
          } while (bVar24);
          *(undefined4 *)
           (*(longlong *)(&DAT_14c833b00 + uVar17 * 8) + (ulonglong)(uVar23 & 0x3fff) * 0x18 + 0x10)
               = 0;
          plVar13 = *(longlong **)
                     (*(longlong *)(&DAT_14c833b00 + uVar17 * 8) + 8 +
                     (ulonglong)(uVar23 & 0x3fff) * 0x18);
          FUN_1447d080c(uVar23 & 0x3ffffff);
          plVar11[1] = (longlong)plVar13;
          if (plVar13 == (longlong *)0x0) {
LAB_142f6b4c1:
            puVar9 = (undefined8 *)FUN_14001cc68(0x10000,0);
            plVar11[1] = (longlong)puVar9;
            iVar15 = 0xff;
            do {
              puVar10 = puVar9 + 0x20;
              *puVar9 = puVar10;
              iVar15 = iVar15 + -1;
              puVar9 = puVar10;
            } while (iVar15 != 0);
            *puVar10 = 0;
            plVar13 = (longlong *)plVar11[1];
          }
        }
        else {
          plVar11[1] = (longlong)plVar13;
          *plVar11 = 0;
        }
        *(undefined4 *)(plVar11 + 2) = 0x100;
        iVar15 = 0x100;
      }
      else {
        iVar15 = (int)plVar11[2];
      }
      plVar11[1] = *plVar13;
      *(int *)(plVar11 + 2) = iVar15 + -1;
      *plVar13 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
      plVar13[1] = (longlong)&DAT_100000002;
      plVar13[2] = 0;
      *(undefined4 *)(plVar13 + 3) = 0;
      *(undefined4 *)(plVar13 + 4) = 0xffffffff;
      plVar13[6] = 0;
      plVar13[7] = 0x100000000;
      *(undefined1 *)(plVar13 + 8) = 1;
      plVar13[0xe] = (longlong)
                     LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateDummy::vftable;
      plVar13[0xf] = 0;
      plVar13[0x10] = -0x17ffffffffffffe0;
      plVar13[0x12] = 0;
      plVar13[0x13] = 0x100000000;
      *(undefined2 *)(plVar13 + 0x14) = 0;
      LOCK();
      bVar24 = (char)plVar13[8] == '\x01';
      if (bVar24) {
        *(char *)(plVar13 + 8) = '\0';
      }
      UNLOCK();
      if (!bVar24) {
        FUN_14008cdb0(plVar13 + 8);
      }
      *plVar13 = (longlong)&PTR_FUN_14a2dbed0;
      if (*(code **)(plVar13[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(plVar13[0xe] + 0x18))(plVar13 + 0xe,plVar13 + 9);
      }
      plVar13[0xe] = (longlong)
                     LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      plVar13[9] = (longlong)plVar13;
      plVar13[10] = (longlong)plVar13;
      if (*local_1e0 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = *(longlong *)(*local_1e0 + 0x30);
      }
      plVar13[0xf] = lVar5;
      plVar13[0x10] = local_1d8;
      *(uint *)((longlong)plVar13 + 0x1c) = bVar2 ^ 1;
      plVar11 = &local_f0;
      plVar12 = plVar13 + 0x15;
      for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
        *plVar12 = *plVar11;
        plVar11 = plVar11 + 1;
        plVar12 = plVar12 + 1;
      }
      *plVar13 = (longlong)&PTR_FUN_14a2dbec0;
      LOCK();
      UNLOCK();
      LOCK();
      UNLOCK();
      local_a0 = CONCAT71(local_a0._1_7_,1);
      FUN_1447439e4(plVar13,&local_a0);
      if (plVar13 == (longlong *)0x0) goto LAB_142f6b6e5;
      iVar15 = *(int *)(local_218 + 0x508);
      *(uint *)(local_218 + 0x508) = iVar15 + 1U;
      if (*(uint *)(local_218 + 0x50c) < iVar15 + 1U) {
        FUN_1401d03aa(local_208,iVar15);
      }
      *(longlong **)(*local_208 + (longlong)iVar15 * 8) = plVar13;
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
      FUN_14473400f(0,0);
      LOCK();
      plVar11 = plVar13 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*plVar13)(plVar13,1);
      }
    }
    lVar5 = local_238;
    uVar20 = uVar20 + 1;
  } while (uVar20 != uVar3);
  if ((char)local_1c0 != '\0') {
    local_230._0_4_ = FUN_14740508e(local_220,local_1c8,1);
    local_228._0_4_ = *(int *)(*(longlong *)(local_200 + 8) + 0x42b0);
    uVar3 = (int)local_228 + 0xfffU >> 0xc;
    uVar3 = uVar3 + (uVar3 == 0);
    local_228._4_4_ = 0;
    uVar22 = (((int)local_228 + uVar3) - 1) / uVar3;
    FUN_1471dd2e6(lVar5 + 0x13b20,(ulonglong)uVar3,1);
    local_210 = FUN_1472e1976(local_1d0,local_218);
    uVar20 = 0;
    do {
      uVar23 = uVar22 * (int)uVar20;
      puVar9 = (undefined8 *)
               ((ulonglong)uVar23 * 0x90 + *(longlong *)(*(longlong *)(local_200 + 8) + 0x42a8));
      uVar23 = (int)local_228 - uVar23;
      if (uVar22 < uVar23) {
        uVar23 = uVar22;
      }
      puVar10 = (undefined8 *)FUN_14001cc68(0x38,0x10);
      *puVar10 = 0;
      puVar10[1] = 0;
      puVar10[2] = 0;
      puVar10[3] = 0;
      puVar10[4] = 0;
      puVar10[5] = 0;
      *(undefined8 *)((longlong)puVar10 + 0x2e) = 0;
      if (DAT_14c872d30 == 0) {
        FUN_145bdc178();
      }
      *(undefined8 **)(*(longlong *)(lVar5 + 0x13b20) + uVar20 * 8) = puVar10;
      uStack_e8 = local_210;
      local_e0 = local_220;
      uStack_c8._0_5_ = CONCAT14(local_241,uVar23);
      local_c0 = (uint)local_230;
      bStack_bc = (byte)uVar20;
      uStack_bb = (undefined1)(uVar20 >> 8);
      uStack_ba = (undefined1)(uVar20 >> 0x10);
      uStack_b9 = (undefined1)(uVar20 >> 0x18);
      bVar2 = *(byte *)(local_218 + 0x520);
      local_f0 = lVar5;
      uStack_d8 = puVar10;
      local_d0 = puVar9;
      if (bVar2 == 0) {
        FUN_142f78c38(&local_f0);
LAB_142f6be44:
        FUN_14473400f(0,0);
      }
      else {
        plVar11 = TlsGetValue(DAT_14c896140);
        if (plVar11 == (longlong *)0x0) {
          plVar11 = (longlong *)FUN_14001cc68(0x18,0x10);
          *plVar11 = 0;
          plVar11[1] = 0;
          *(undefined4 *)(plVar11 + 2) = 0;
          TlsSetValue(DAT_14c896140,plVar11);
        }
        plVar13 = (longlong *)plVar11[1];
        if (plVar13 == (longlong *)0x0) {
          plVar13 = (longlong *)*plVar11;
          if (plVar13 == (longlong *)0x0) {
            do {
              local_a0 = DAT_14c896180;
              uVar23 = (uint)DAT_14c896180;
              if ((DAT_14c896180 & 0x3ffffff) == 0) {
                plVar11[1] = 0;
                goto LAB_142f6bbf9;
              }
              local_240 = (DAT_14c896180 & 0xfffffffffc000000) + 0x4000000;
              if (local_240 >> 0x1a < DAT_14c896180 >> 0x1a) {
                FUN_14000f986(0x3a83126f);
              }
              uVar17 = (ulonglong)((uVar23 & 0x3ffffff) >> 0xe);
              local_240 = local_240 & 0xfffffffffc000000 |
                          (ulonglong)
                          *(uint *)(*(longlong *)(&DAT_14c833b00 + uVar17 * 8) + 0x10 +
                                   (ulonglong)(uVar23 & 0x3fff) * 0x18);
              LOCK();
              bVar24 = local_a0 != DAT_14c896180;
              uVar14 = local_240;
              if (bVar24) {
                uVar14 = DAT_14c896180;
              }
              DAT_14c896180 = uVar14;
              UNLOCK();
            } while (bVar24);
            *(undefined4 *)
             (*(longlong *)(&DAT_14c833b00 + uVar17 * 8) + (ulonglong)(uVar23 & 0x3fff) * 0x18 +
             0x10) = 0;
            plVar13 = *(longlong **)
                       (*(longlong *)(&DAT_14c833b00 + uVar17 * 8) + 8 +
                       (ulonglong)(uVar23 & 0x3fff) * 0x18);
            FUN_1447d080c(uVar23 & 0x3ffffff);
            plVar11[1] = (longlong)plVar13;
            if (plVar13 == (longlong *)0x0) {
LAB_142f6bbf9:
              puVar9 = (undefined8 *)FUN_14001cc68(0x10000,0);
              plVar11[1] = (longlong)puVar9;
              iVar15 = 0xff;
              do {
                puVar10 = puVar9 + 0x20;
                *puVar9 = puVar10;
                iVar15 = iVar15 + -1;
                puVar9 = puVar10;
              } while (iVar15 != 0);
              *puVar10 = 0;
              plVar13 = (longlong *)plVar11[1];
            }
          }
          else {
            plVar11[1] = (longlong)plVar13;
            *plVar11 = 0;
          }
          *(undefined4 *)(plVar11 + 2) = 0x100;
          iVar15 = 0x100;
        }
        else {
          iVar15 = (int)plVar11[2];
        }
        plVar11[1] = *plVar13;
        *(int *)(plVar11 + 2) = iVar15 + -1;
        *plVar13 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
        plVar13[1] = (longlong)&DAT_100000002;
        plVar13[2] = 0;
        *(undefined4 *)(plVar13 + 3) = 0;
        *(undefined4 *)(plVar13 + 4) = 0xffffffff;
        plVar13[6] = 0;
        plVar13[7] = 0x100000000;
        *(undefined1 *)(plVar13 + 8) = 1;
        plVar13[0xe] = (longlong)
                       LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateDummy::vftable;
        plVar13[0xf] = 0;
        plVar13[0x10] = -0x17ffffffffffffe0;
        plVar13[0x12] = 0;
        plVar13[0x13] = 0x100000000;
        *(undefined2 *)(plVar13 + 0x14) = 0;
        LOCK();
        bVar24 = (char)plVar13[8] == '\x01';
        if (bVar24) {
          *(char *)(plVar13 + 8) = '\0';
        }
        UNLOCK();
        if (!bVar24) {
          FUN_14008cdb0(plVar13 + 8);
        }
        lVar5 = local_238;
        *plVar13 = (longlong)&PTR_FUN_14a2dbef0;
        if (*(code **)(plVar13[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(plVar13[0xe] + 0x18))(plVar13 + 0xe,plVar13 + 9);
        }
        plVar13[0xe] = (longlong)
                       LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        plVar13[9] = (longlong)plVar13;
        plVar13[10] = (longlong)plVar13;
        if (*local_1e0 == 0) {
          lVar18 = 0;
        }
        else {
          lVar18 = *(longlong *)(*local_1e0 + 0x30);
        }
        plVar13[0xf] = lVar18;
        plVar13[0x10] = local_1d8;
        *(uint *)((longlong)plVar13 + 0x1c) = bVar2 ^ 1;
        *(undefined4 *)(plVar13 + 0x15) = (undefined4)local_f0;
        *(undefined4 *)((longlong)plVar13 + 0xac) = local_f0._4_4_;
        *(undefined4 *)(plVar13 + 0x16) = (undefined4)uStack_e8;
        *(undefined4 *)((longlong)plVar13 + 0xb4) = uStack_e8._4_4_;
        *(undefined4 *)(plVar13 + 0x17) = (undefined4)local_e0;
        *(undefined4 *)((longlong)plVar13 + 0xbc) = local_e0._4_4_;
        *(undefined4 *)(plVar13 + 0x18) = (undefined4)uStack_d8;
        *(undefined4 *)((longlong)plVar13 + 0xc4) = uStack_d8._4_4_;
        *(undefined4 *)(plVar13 + 0x19) = (undefined4)local_d0;
        *(undefined4 *)((longlong)plVar13 + 0xcc) = local_d0._4_4_;
        *(undefined4 *)(plVar13 + 0x1a) = (undefined4)uStack_c8;
        *(undefined4 *)((longlong)plVar13 + 0xd4) = uStack_c8._4_4_;
        plVar13[0x1b] =
             CONCAT17(uStack_b9,CONCAT16(uStack_ba,CONCAT15(uStack_bb,CONCAT14(bStack_bc,local_c0)))
                     );
        *plVar13 = (longlong)&PTR_FUN_14a2dbee0;
        LOCK();
        UNLOCK();
        LOCK();
        UNLOCK();
        local_a0 = CONCAT71(local_a0._1_7_,1);
        FUN_1447439e4(plVar13,&local_a0);
        if (plVar13 == (longlong *)0x0) goto LAB_142f6be44;
        iVar15 = *(int *)(local_218 + 0x508);
        *(uint *)(local_218 + 0x508) = iVar15 + 1U;
        if (*(uint *)(local_218 + 0x50c) < iVar15 + 1U) {
          FUN_1401d03aa(local_208,iVar15);
        }
        *(longlong **)(*local_208 + (longlong)iVar15 * 8) = plVar13;
        LOCK();
        *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
        UNLOCK();
        FUN_14473400f(0,0);
        LOCK();
        plVar11 = plVar13 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
          (**(code **)*plVar13)(plVar13,1);
        }
      }
      uVar20 = uVar20 + 1;
    } while (uVar20 != uVar3);
  }
  *(undefined8 **)(local_1b8 + 0x13ae0) = local_220;
  if (local_1a8 != 0) {
    FUN_1400020a8();
  }
  if (local_198 != 0) {
    FUN_1400020a8();
  }
  if (local_188 != 0) {
    FUN_1400020a8();
  }
  lVar5 = local_140;
  if (local_140 != 0) {
    LOCK();
    puVar1 = (uint *)(local_140 + 8);
    uVar22 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar22 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_140 + 8);
      LOCK();
      uVar22 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar22 >> 0x1e & 1) == 0) {
        bVar2 = *(byte *)(local_140 + 0xd);
        plVar12 = (longlong *)FUN_14001cc68(0x10,8);
        plVar12[1] = lVar5;
        plVar11 = DAT_14ca843c0;
        plVar13 = DAT_14ca843c8;
        if ((bVar2 & 2) == 0) {
          do {
            *plVar12 = (longlong)plVar11;
            LOCK();
            bVar24 = plVar11 != DAT_14ca843c0;
            plVar13 = plVar12;
            if (bVar24) {
              plVar11 = DAT_14ca843c0;
              plVar13 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar13;
            UNLOCK();
          } while (bVar24);
        }
        else {
          do {
            *plVar12 = (longlong)plVar13;
            LOCK();
            bVar24 = plVar13 != DAT_14ca843c8;
            plVar11 = plVar12;
            if (bVar24) {
              plVar13 = DAT_14ca843c8;
              plVar11 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar11;
            UNLOCK();
          } while (bVar24);
        }
      }
    }
  }
  if ((local_70 ^ (ulonglong)local_268) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f6bf10 FUN_142f6bf10 body=252 status=ok
// SIG undefined FUN_142f6bf10(void)

void FUN_142f6bf10(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  char local_58;
  undefined7 uStack_57;
  longlong local_50;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar3 = FUN_14090c054(1,1,param_1);
  if (cVar3 != '\0') {
    FUN_1472c4a68(&local_58,param_1);
    if (local_58 == '\x01') {
      iVar1 = *(int *)(DAT_14ca409b8 + 4);
      uVar2 = *(undefined8 *)(param_1 + 0x13818);
      FUN_145f8492c();
      FUN_1448e935e(uVar2,&local_58,&DAT_14ca3e340,iVar1 != 0);
      FUN_145f8492c();
      if (CONCAT71(uStack_57,local_58) == 0) {
        lVar4 = 0;
      }
      else {
        lVar5 = (longlong)*(int *)(CONCAT71(uStack_57,local_58) + 0xd4);
        lVar4 = *(longlong *)(*(longlong *)(*(longlong *)(local_50 + 8) + 0x50) + lVar5 * 8);
        if (lVar4 == 0) {
          lVar4 = FUN_1400bafc2(*(longlong *)(local_50 + 8),lVar5,1);
        }
      }
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_1471499ca(param_2,iVar1);
      }
      *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar4;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f6c00d FUN_142f6c00d body=69 status=ok
// SIG undefined FUN_142f6c00d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f6c00d(void)

{
  _DAT_14ca3e400 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f6c04f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca3e408,1);
  return;
}



// FUNCTION 142f6c052 FUN_142f6c052 body=11869 status=ok
// SIG undefined FUN_142f6c052(void)

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f6c052(longlong param_1,ulonglong param_2,longlong param_3,undefined8 param_4,
                  ushort param_5)

{
  uint *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong *puVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined *puVar19;
  char cVar20;
  uint uVar21;
  uint uVar22;
  longlong *plVar23;
  ulonglong uVar24;
  undefined1 *puVar25;
  longlong *plVar26;
  longlong lVar27;
  undefined8 uVar28;
  undefined8 *puVar29;
  longlong *plVar30;
  uint uVar31;
  int iVar32;
  int *piVar33;
  undefined8 *puVar34;
  undefined8 *puVar35;
  undefined8 *puVar36;
  longlong lVar37;
  undefined1 *puVar38;
  ulonglong uVar39;
  undefined4 *puVar40;
  ulonglong uVar41;
  uint uVar42;
  longlong lVar43;
  longlong lVar44;
  bool bVar45;
  bool bVar46;
  undefined1 local_348 [32];
  undefined1 *local_328;
  undefined8 *local_320;
  undefined1 local_318;
  int *local_308;
  uint local_2fc;
  ulonglong local_2f8;
  ulonglong *local_2f0;
  uint local_2e8;
  uint local_2e4;
  ulonglong *local_2e0;
  ulonglong *local_2d8;
  longlong *local_2d0;
  ulonglong local_2c8;
  ulonglong local_2c0;
  longlong local_2b8;
  undefined8 local_2b0;
  uint local_2a4;
  int *local_2a0;
  longlong local_298;
  longlong local_290;
  longlong *local_288;
  uint local_280;
  int local_27c;
  longlong local_278;
  undefined8 local_270;
  undefined8 *local_268;
  ulonglong local_260;
  longlong local_258;
  longlong local_250;
  undefined8 *local_248;
  undefined4 *local_240;
  longlong local_238;
  longlong local_230;
  longlong local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  longlong lStack_1c8;
  ulonglong local_1c0;
  undefined8 uStack_1b8;
  undefined4 local_1b0;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  uint uStack_19c;
  undefined *local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  ulonglong uStack_180;
  wchar_t *local_178;
  ulonglong *puStack_170;
  undefined4 *local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  longlong lStack_150;
  ulonglong uStack_148;
  int iStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  ulonglong local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  int local_108;
  undefined4 uStack_104;
  uint uStack_100;
  undefined4 uStack_fc;
  int iStack_f8;
  uint uStack_f4;
  ulonglong local_f0;
  wchar_t *local_e8;
  ulonglong *local_e0;
  undefined4 *puStack_d8;
  undefined8 local_d0;
  uint local_c8;
  undefined4 uStack_c4;
  longlong lStack_c0;
  ulonglong local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)local_348;
  iVar32 = *(int *)(DAT_14ca3e410 + 4);
  local_270 = param_4;
  if (*(char *)(param_1 + 0xa9) == '\0') {
    FUN_1472bb432(param_1);
  }
  local_27c = (uint)(iVar32 == 0) * 4 + 4;
  *(undefined1 *)(param_1 + 0xaa) = 1;
  local_230 = *(longlong *)(param_2 + 0x18);
  local_298 = param_2 + 0x198;
  local_2f0 = (ulonglong *)(param_2 + 0x70);
  local_290 = param_2 + 0x188;
  local_228 = -0x37ffffad77750000;
  local_278 = -0x37ffffad77cd8400;
  lVar37 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_2a0 = (int *)(lVar37 + 0xc60);
  local_288 = (longlong *)(lVar37 + 0x2b8);
  local_280 = (param_5 & 0xfffffff9) + 4;
  local_260 = (ulonglong)(param_5 & 0xfffffff9 | 2);
  local_2d0 = (longlong *)(param_2 + 0x500);
  local_240 = (undefined4 *)(param_1 + 0x58);
  local_250 = param_2 + 0x98;
  local_248 = (undefined8 *)(param_3 + 0x11728);
  local_258 = param_2 + 0x168;
  uVar28 = CONCAT71((uint7)(uint3)(local_280 >> 8),1);
  lVar37 = 0;
  local_2f8 = param_2;
  local_2b8 = param_1;
  local_238 = param_3;
  do {
    local_2a4 = (uint)uVar28;
    lVar43 = *(longlong *)(param_1 + 0x70);
    lVar37 = lVar37 * 0xf8;
    local_158 = 0;
    local_168 = (undefined4 *)0x0;
    uStack_160 = 0;
    local_178 = (wchar_t *)0x0;
    puStack_170 = (ulonglong *)0x0;
    local_188 = 0;
    uStack_180 = 0;
    local_198 = (undefined *)0x0;
    uStack_190 = 0;
    local_1a8._0_1_ = 0;
    local_1a8._1_1_ = 0;
    local_1a8._2_1_ = 0;
    local_1a8._3_1_ = 0;
    local_1a8._4_4_ = 0;
    uStack_1a0 = 0;
    uStack_19c = 0;
    lStack_150 = 1;
    uStack_148 = 1;
    iStack_140 = 4;
    uStack_13c = 0;
    local_138 = 0;
    FUN_1446f470e(&local_118,L"FRayTracingScene",1);
    local_d0 = uStack_160;
    puStack_d8 = local_168;
    local_e0 = puStack_170;
    local_e8 = local_178;
    local_f0 = uStack_180;
    uVar28 = local_188;
    puVar19 = local_198;
    uVar21 = uStack_19c;
    uVar11 = uStack_1a0;
    uStack_13c = (undefined4)local_118;
    local_138 = (undefined4)(local_118 >> 0x20);
    uVar5 = *(undefined4 *)(lVar43 + 8 + lVar37);
    local_158 = CONCAT44(uVar5,*(int *)(lVar43 + 4 + lVar37) + *(int *)(lVar43 + lVar37));
    iStack_140 = local_27c;
    local_2c0 = CONCAT44(local_1a8._4_4_,
                         CONCAT13(local_1a8._3_1_,
                                  CONCAT12(local_1a8._2_1_,
                                           CONCAT11(local_1a8._1_1_,(undefined1)local_1a8))));
    local_1a8._0_1_ = 0;
    local_1a8._1_1_ = 0;
    local_1a8._2_1_ = '\0';
    local_1a8._3_1_ = 0;
    local_1a8._4_4_ = 0;
    local_2c8 = CONCAT44(local_2c8._4_4_,uStack_1a0);
    local_2e8 = uStack_19c;
    uStack_1a0 = 0;
    uStack_19c = 0;
    local_2b0 = local_198;
    local_198 = (undefined *)0x0;
    uStack_100 = (uint)uStack_190;
    local_2fc = (uint)uStack_190;
    uStack_fc = uStack_190._4_4_;
    uStack_190 = 0;
    local_188 = 0;
    uStack_180 = 0;
    local_178 = (wchar_t *)0x0;
    puStack_170 = (ulonglong *)0x0;
    local_168 = (undefined4 *)0x0;
    iVar32 = (int)uStack_160;
    uStack_160 = 0;
    local_1b0 = local_138;
    uStack_1b8 = CONCAT44(uStack_13c,local_27c);
    local_1c0 = uStack_148;
    local_1d0 = local_158;
    lStack_1c8 = lStack_150;
    if (0 < iVar32) {
      local_1d0 = CONCAT44(uVar5,*puStack_d8);
    }
    piVar33 = (int *)(lVar43 + lVar37);
    uStack_110 = (int *)CONCAT44(uVar21,uVar11);
    local_108 = (int)puVar19;
    uStack_104 = (undefined4)((ulonglong)puVar19 >> 0x20);
    iStack_f8 = (int)uVar28;
    uStack_f4 = (uint)((ulonglong)uVar28 >> 0x20);
    local_220 = 0;
    uStack_218 = 0;
    local_210 = 0;
    uStack_208 = 0;
    local_200 = 0;
    uStack_1f8 = 0;
    local_1f0 = 0;
    uStack_1e8 = 0;
    local_1e0 = 0;
    uStack_1d8 = 0;
    local_a8 = local_138;
    local_b8 = uStack_148;
    uStack_b0 = CONCAT44(uStack_13c,local_27c);
    local_c8 = (uint)local_1d0;
    uStack_c4 = local_1d0._4_4_;
    lStack_c0 = lStack_150;
    local_308 = (int *)lVar43;
    local_118 = local_2c0;
    (**(code **)(*DAT_14ca83900 + 0x4e0))(DAT_14ca83900,&local_128,&local_118);
    FUN_147123b8c(&local_220);
    param_1 = local_2b8;
    puVar9 = (ulonglong *)(piVar33 + 0x18);
    local_308 = piVar33;
    if (puVar9 == &local_128) {
LAB_142f6c5a3:
      uVar24 = local_128;
      if (local_128 != 0) {
        LOCK();
        puVar1 = (uint *)(local_128 + 8);
        uVar21 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar21 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(local_128 + 8);
          LOCK();
          uVar21 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar21 >> 0x1e & 1) == 0) {
            bVar4 = *(byte *)(local_128 + 0xd);
            plVar23 = (longlong *)FUN_14001cc68(0x10,8);
            plVar23[1] = uVar24;
            plVar26 = DAT_14ca843c0;
            plVar30 = DAT_14ca843c8;
            if ((bVar4 & 2) == 0) {
              do {
                *plVar23 = (longlong)plVar26;
                LOCK();
                bVar45 = plVar26 != DAT_14ca843c0;
                plVar30 = plVar23;
                if (bVar45) {
                  plVar26 = DAT_14ca843c0;
                  plVar30 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar30;
                UNLOCK();
              } while (bVar45);
            }
            else {
              do {
                *plVar23 = (longlong)plVar30;
                LOCK();
                bVar45 = plVar30 != DAT_14ca843c8;
                plVar26 = plVar23;
                if (bVar45) {
                  plVar30 = DAT_14ca843c8;
                  plVar26 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar26;
                UNLOCK();
              } while (bVar45);
            }
          }
        }
      }
    }
    else {
      uVar24 = *puVar9;
      *puVar9 = local_128;
      local_128 = 0;
      if (uVar24 != 0) {
        LOCK();
        puVar1 = (uint *)(uVar24 + 8);
        uVar21 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar21 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(uVar24 + 8);
          LOCK();
          uVar21 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar21 >> 0x1e & 1) == 0) {
            bVar4 = *(byte *)(uVar24 + 0xd);
            plVar23 = (longlong *)FUN_14001cc68(0x10,8);
            plVar23[1] = uVar24;
            plVar26 = DAT_14ca843c0;
            plVar30 = DAT_14ca843c8;
            if ((bVar4 & 2) == 0) {
              do {
                *plVar23 = (longlong)plVar26;
                LOCK();
                bVar45 = plVar26 != DAT_14ca843c0;
                plVar30 = plVar23;
                if (bVar45) {
                  plVar26 = DAT_14ca843c0;
                  plVar30 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar30;
                UNLOCK();
              } while (bVar45);
            }
            else {
              do {
                *plVar23 = (longlong)plVar30;
                LOCK();
                bVar45 = plVar30 != DAT_14ca843c8;
                plVar26 = plVar23;
                if (bVar45) {
                  plVar30 = DAT_14ca843c8;
                  plVar26 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar26;
                UNLOCK();
              } while (bVar45);
            }
          }
        }
        goto LAB_142f6c5a3;
      }
    }
    piVar33 = local_308;
    FUN_147123b8c(&local_1a8);
    FUN_147123bf0(0,0);
    iVar32 = piVar33[1];
    uVar21 = iVar32 + *piVar33;
    uVar42 = *piVar33 + iVar32 + (uint)(uVar21 == 0);
    lVar37 = *(longlong *)(*(longlong *)(piVar33 + 0x18) + 0x10);
    lVar43 = *(longlong *)(*(longlong *)(piVar33 + 0x18) + 0x18);
    uVar24 = lVar37 + 0xffffff + (ulonglong)(lVar37 == 0) & 0xffffffffff000000;
    plVar26 = (longlong *)(piVar33 + 0x1e);
    lVar37 = *(longlong *)(piVar33 + 0x1e);
    if (((lVar37 == 0) ||
        (uVar31 = *(int *)(lVar37 + 0x14) * *(int *)(lVar37 + 0x10), uVar31 < uVar24)) ||
       (uVar24 < uVar31 >> 1)) {
      local_108 = 0;
      uStack_104 = 0;
      local_118 = CONCAT44((int)uVar24,1);
      uStack_110 = (int *)CONCAT44(uStack_110._4_4_,0x2000);
      FUN_14490af1f(&local_1a8,&local_118,L"FRayTracingScene::SceneBuffer",1);
      if (plVar26 != &local_1a8) {
        puVar29 = (undefined8 *)*plVar26;
        *plVar26 = CONCAT44(local_1a8._4_4_,
                            CONCAT13(local_1a8._3_1_,
                                     CONCAT12(local_1a8._2_1_,
                                              CONCAT11(local_1a8._1_1_,(undefined1)local_1a8))));
        local_1a8._0_1_ = 0;
        local_1a8._1_1_ = 0;
        local_1a8._2_1_ = '\0';
        local_1a8._3_1_ = 0;
        local_1a8._4_4_ = 0;
        piVar33 = local_308;
        if (puVar29 == (undefined8 *)0x0) goto LAB_142f6c746;
        LOCK();
        piVar33 = (int *)(puVar29 + 1);
        *piVar33 = *piVar33 + -1;
        UNLOCK();
        if (*piVar33 == 0) {
          (**(code **)*puVar29)(puVar29,1);
        }
      }
      puVar29 = (undefined8 *)
                CONCAT44(local_1a8._4_4_,
                         CONCAT13(local_1a8._3_1_,
                                  CONCAT12(local_1a8._2_1_,
                                           CONCAT11(local_1a8._1_1_,(undefined1)local_1a8))));
      piVar33 = local_308;
      if (puVar29 != (undefined8 *)0x0) {
        LOCK();
        piVar2 = (int *)(puVar29 + 1);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)*puVar29)(puVar29,1);
          piVar33 = local_308;
        }
      }
    }
LAB_142f6c746:
    uVar24 = local_2f8;
    local_2fc = uVar21;
    lVar37 = FUN_144735dd8(local_2f8,plVar26,0);
    puVar9 = local_2f0;
    *(longlong *)(piVar33 + 0x20) = lVar37;
    uVar28 = *(undefined8 *)(piVar33 + 0x18);
    puVar35 = (undefined8 *)(*(longlong *)(uVar24 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar29 = puVar35 + 9;
    if (*(undefined8 **)(uVar24 + 0x78) < puVar29) {
      FUN_140023dd8(local_2f0);
      puVar35 = (undefined8 *)(*puVar9 + 7 & 0xfffffffffffffff8);
      puVar29 = puVar35 + 9;
    }
    *(undefined8 **)(uVar24 + 0x70) = puVar29;
    puVar35[1] = *(undefined8 *)(lVar37 + 8);
    puVar35[2] = 0;
    *(undefined1 *)(puVar35 + 3) = 3;
    *(undefined8 *)((longlong)puVar35 + 0x1c) = 0xffffffffffffffff;
    *puVar35 = &PTR_FUN_14a1fb168;
    *(undefined1 *)(puVar35 + 5) = 0;
    *(undefined8 *)((longlong)puVar35 + 0x2c) = 0xffffffff00000000;
    puVar35[7] = uVar28;
    puVar35[8] = lVar37;
    iVar6 = *(int *)(uVar24 + 0x1a0);
    uVar21 = iVar6 + 1;
    *(uint *)(uVar24 + 0x1a0) = uVar21;
    if (*(uint *)(uVar24 + 0x1a4) < uVar21) {
      FUN_1447568fc(local_298);
    }
    puVar9 = local_2f0;
    piVar33 = local_308;
    *(undefined8 **)(*(longlong *)(uVar24 + 0x198) + (longlong)iVar6 * 8) = puVar35;
    *(int *)((longlong)puVar35 + 0x1c) = *(int *)(uVar24 + 0x1a0) + -1;
    *(undefined8 **)(local_308 + 0x22) = puVar35;
    uVar21 = DAT_14ca84e48;
    if (DAT_14ca84f04 < DAT_14ca84e48) {
      uVar21 = DAT_14ca84f04;
    }
    uStack_110 = (int *)CONCAT44(uStack_110._4_4_,0x90008);
    uVar22 = (uint)(((lVar43 + (ulonglong)DAT_14ca84f04) - 1) / (ulonglong)DAT_14ca84f04);
    uVar31 = DAT_14ca84e48;
    if (uVar22 < DAT_14ca84e48) {
      uVar31 = uVar22;
    }
    local_108 = 0;
    uStack_104 = 0;
    local_118 = CONCAT44(uVar31 + (uVar31 == 0),uVar21 + (uVar21 == 0));
    uVar39 = *(longlong *)(uVar24 + 0x70) + 0xfU & 0xfffffffffffffff0;
    uVar41 = uVar39 + 0x150;
    if (*(ulonglong *)(uVar24 + 0x78) < uVar41) {
      FUN_140023dd8(local_2f0,0x160);
      uVar39 = *puVar9 + 0xf & 0xfffffffffffffff0;
      uVar41 = uVar39 + 0x150;
    }
    *(ulonglong *)(uVar24 + 0x70) = uVar41;
    FUN_1456bd266(uVar39,L"FRayTracingScene::ScratchBuffer",&local_118,0);
    iVar6 = *(int *)(uVar24 + 400);
    *(uint *)(uVar24 + 400) = iVar6 + 1U;
    if (*(uint *)(uVar24 + 0x194) < iVar6 + 1U) {
      FUN_144737178(local_290,iVar6);
    }
    puVar9 = local_2f0;
    uVar21 = uVar42 + 0x1fff & 0xffffe000;
    *(ulonglong *)(*(longlong *)(uVar24 + 0x188) + (longlong)iVar6 * 8) = uVar39;
    *(int *)(uVar39 + 0x7c) = *(int *)(uVar24 + 400) + -1;
    *(ulonglong *)(piVar33 + 0x1c) = uVar39;
    uVar31 = DAT_14ca84f0c;
    if (DAT_14ca84e48 <= DAT_14ca84f0c) {
      uVar31 = DAT_14ca84e48;
    }
    uStack_110 = (int *)CONCAT44(uStack_110._4_4_,0x10108);
    if (DAT_14ca84e48 <= uVar21) {
      uVar21 = DAT_14ca84e48;
    }
    local_108 = 0;
    uStack_104 = 0;
    local_118 = CONCAT44(uVar21 + (uVar21 == 0),uVar31 + (uVar31 == 0));
    uVar39 = *(longlong *)(uVar24 + 0x70) + 0xfU & 0xfffffffffffffff0;
    uVar41 = uVar39 + 0x150;
    if (*(ulonglong *)(uVar24 + 0x78) < uVar41) {
      FUN_140023dd8(local_2f0,0x160);
      uVar39 = *puVar9 + 0xf & 0xfffffffffffffff0;
      uVar41 = uVar39 + 0x150;
    }
    *(ulonglong *)(uVar24 + 0x70) = uVar41;
    FUN_1456bd266(uVar39,L"FRayTracingScene::InstanceBuffer",&local_118,0);
    iVar6 = *(int *)(uVar24 + 400);
    uVar21 = iVar6 + 1;
    *(uint *)(uVar24 + 400) = uVar21;
    if (*(uint *)(uVar24 + 0x194) < uVar21) {
      FUN_144737178(local_290);
    }
    *(ulonglong *)(*(longlong *)(uVar24 + 0x188) + (longlong)iVar6 * 8) = uVar39;
    *(int *)(uVar39 + 0x7c) = *(int *)(uVar24 + 400) + -1;
    *(ulonglong *)(piVar33 + 0x1a) = uVar39;
    uVar24 = (ulonglong)(piVar33[0x16] + -1 + (uint)(piVar33[0x16] == 0)) * 2 + 1;
    lVar37 = 0x3f;
    if (uVar24 != 0) {
      for (; uVar24 >> lVar37 == 0; lVar37 = lVar37 + -1) {
      }
    }
    if ((uint)piVar33[0x30] < (uint)(8 << ((byte)lVar37 & 0x1f))) {
      local_328 = (undefined1 *)CONCAT44(local_328._4_4_,0x20004);
      FUN_140b9bef8(piVar33 + 0x2c,*(undefined8 *)(local_2f8 + 0x18),
                    L"FRayTracingScene::AccelerationStructureAddressesBuffer");
    }
    lVar37 = local_230;
    uVar21 = (uVar42 + 0x1fff >> 0xd) * 0x38000;
    local_2d8 = (ulonglong *)(piVar33 + 0x24);
    if (((*(longlong *)(piVar33 + 0x24) == 0) ||
        (uVar31 = *(uint *)(*(longlong *)(piVar33 + 0x24) + 0x20), uVar31 < uVar21)) ||
       (uVar21 < uVar31 >> 1)) {
      local_118 = 0;
      uStack_110 = (int *)0x0;
      local_108 = 1;
      uStack_104 = 0;
      uStack_100 = 0;
      uStack_fc = 0;
      iStack_f8 = 0;
      uStack_f4 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
      local_f0 = (local_f0 >> 8 & 0xffffff) << 8;
      local_e8 = L"FRayTracingScene::InstanceUploadBuffer";
      local_e0 = (ulonglong *)0x0;
      puStack_d8 = (undefined4 *)0x0;
      local_1a8._0_1_ = 0;
      local_1a8._1_1_ = (undefined1)(uVar21 >> 8);
      local_1a8._2_1_ = (char)(uVar21 >> 0x10);
      local_1a8._3_1_ = (byte)(uVar21 >> 0x18);
      local_1a8._4_4_ = 0x1c;
      uStack_1a0 = 0x10104;
      if (uVar21 == 0) {
        FUN_14570b4be(local_230,&local_118,0x10104,0x1c);
      }
      if (*(char *)(lVar37 + 0x69) == '\0') {
        FUN_14002049c(lVar37,1);
        local_320 = &local_118;
        local_328 = (undefined1 *)CONCAT44(local_328._4_4_,0x70);
        (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_128,lVar37,&local_1a8);
        *(undefined4 *)(local_128 + 0x18) = 0x70;
        FUN_14002049c(lVar37,0);
      }
      else {
        local_320 = &local_118;
        local_328 = (undefined1 *)CONCAT44(local_328._4_4_,0x70);
        (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_128,lVar37,&local_1a8);
        *(undefined4 *)(local_128 + 0x18) = 0x70;
      }
      if (local_2d8 == &local_128) {
LAB_142f6cbda:
        uVar24 = local_128;
        if (local_128 != 0) {
          LOCK();
          puVar1 = (uint *)(local_128 + 8);
          uVar21 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar21 & 0x3fffffff) == 1) {
            puVar1 = (uint *)(local_128 + 8);
            LOCK();
            uVar21 = *puVar1;
            *puVar1 = *puVar1 | 0x40000000;
            UNLOCK();
            if ((uVar21 >> 0x1e & 1) == 0) {
              bVar4 = *(byte *)(local_128 + 0xd);
              plVar23 = (longlong *)FUN_14001cc68(0x10,8);
              plVar23[1] = uVar24;
              plVar26 = DAT_14ca843c0;
              plVar30 = DAT_14ca843c8;
              piVar33 = local_308;
              if ((bVar4 & 2) == 0) {
                do {
                  *plVar23 = (longlong)plVar26;
                  LOCK();
                  bVar45 = plVar26 != DAT_14ca843c0;
                  plVar30 = plVar23;
                  if (bVar45) {
                    plVar26 = DAT_14ca843c0;
                    plVar30 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar30;
                  UNLOCK();
                } while (bVar45);
              }
              else {
                do {
                  *plVar23 = (longlong)plVar30;
                  LOCK();
                  bVar45 = plVar30 != DAT_14ca843c8;
                  plVar26 = plVar23;
                  if (bVar45) {
                    plVar30 = DAT_14ca843c8;
                    plVar26 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar26;
                  UNLOCK();
                } while (bVar45);
              }
            }
          }
        }
      }
      else {
        uVar24 = *local_2d8;
        *local_2d8 = local_128;
        local_128 = 0;
        if (uVar24 != 0) {
          LOCK();
          puVar1 = (uint *)(uVar24 + 8);
          uVar21 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar21 & 0x3fffffff) == 1) {
            puVar1 = (uint *)(uVar24 + 8);
            LOCK();
            uVar21 = *puVar1;
            *puVar1 = *puVar1 | 0x40000000;
            UNLOCK();
            if ((uVar21 >> 0x1e & 1) == 0) {
              bVar4 = *(byte *)(uVar24 + 0xd);
              plVar23 = (longlong *)FUN_14001cc68(0x10,8);
              plVar23[1] = uVar24;
              plVar26 = DAT_14ca843c0;
              plVar30 = DAT_14ca843c8;
              piVar33 = local_308;
              if ((bVar4 & 2) == 0) {
                do {
                  *plVar23 = (longlong)plVar26;
                  LOCK();
                  bVar45 = plVar26 != DAT_14ca843c0;
                  plVar30 = plVar23;
                  if (bVar45) {
                    plVar26 = DAT_14ca843c0;
                    plVar30 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar30;
                  UNLOCK();
                } while (bVar45);
              }
              else {
                do {
                  *plVar23 = (longlong)plVar30;
                  LOCK();
                  bVar45 = plVar30 != DAT_14ca843c8;
                  plVar26 = plVar23;
                  if (bVar45) {
                    plVar30 = DAT_14ca843c8;
                    plVar26 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar26;
                  UNLOCK();
                } while (bVar45);
              }
            }
          }
          goto LAB_142f6cbda;
        }
      }
      local_1a8._0_1_ = 0;
      local_1a8._1_1_ = 0;
      local_1a8._3_1_ = 0;
      local_1a8._4_4_ = 0;
      uStack_1a0 = 0;
      uStack_19c = 0;
      uVar21 = *(uint *)(*local_2d8 + 0x28);
      local_1a8._2_1_ = '\x04';
      if (((uVar21 & 0x10) == 0) && (local_1a8._2_1_ = '\x02', (uVar21 >> 0x10 & 1) == 0)) {
        local_1a8._2_1_ = ((byte)(uVar21 >> 0xd) & 1) * '\x02' + '\x01';
      }
      local_328 = (undefined1 *)&local_1a8;
      (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_128,lVar37);
      puVar9 = (ulonglong *)(piVar33 + 0x26);
      if (puVar9 != &local_128) {
        uVar24 = *puVar9;
        *puVar9 = local_128;
        local_128 = 0;
        if (uVar24 == 0) goto LAB_142f6cd8c;
        LOCK();
        puVar1 = (uint *)(uVar24 + 8);
        uVar21 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar21 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(uVar24 + 8);
          LOCK();
          uVar21 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar21 >> 0x1e & 1) == 0) {
            bVar4 = *(byte *)(uVar24 + 0xd);
            plVar23 = (longlong *)FUN_14001cc68(0x10);
            plVar23[1] = uVar24;
            plVar26 = DAT_14ca843c0;
            plVar30 = DAT_14ca843c8;
            piVar33 = local_308;
            if ((bVar4 & 2) == 0) {
              do {
                *plVar23 = (longlong)plVar26;
                LOCK();
                bVar45 = plVar26 != DAT_14ca843c0;
                plVar30 = plVar23;
                if (bVar45) {
                  plVar26 = DAT_14ca843c0;
                  plVar30 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar30;
                UNLOCK();
              } while (bVar45);
            }
            else {
              do {
                *plVar23 = (longlong)plVar30;
                LOCK();
                bVar45 = plVar30 != DAT_14ca843c8;
                plVar26 = plVar23;
                if (bVar45) {
                  plVar30 = DAT_14ca843c8;
                  plVar26 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar26;
                UNLOCK();
              } while (bVar45);
            }
          }
        }
      }
      uVar24 = local_128;
      if (local_128 != 0) {
        LOCK();
        puVar1 = (uint *)(local_128 + 8);
        uVar21 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar21 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(local_128 + 8);
          LOCK();
          uVar21 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar21 >> 0x1e & 1) == 0) {
            bVar4 = *(byte *)(local_128 + 0xd);
            plVar23 = (longlong *)FUN_14001cc68(0x10);
            plVar23[1] = uVar24;
            plVar26 = DAT_14ca843c0;
            plVar30 = DAT_14ca843c8;
            piVar33 = local_308;
            if ((bVar4 & 2) == 0) {
              do {
                *plVar23 = (longlong)plVar26;
                LOCK();
                bVar45 = plVar26 != DAT_14ca843c0;
                plVar30 = plVar23;
                if (bVar45) {
                  plVar26 = DAT_14ca843c0;
                  plVar30 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar30;
                UNLOCK();
              } while (bVar45);
            }
            else {
              do {
                *plVar23 = (longlong)plVar30;
                LOCK();
                bVar45 = plVar30 != DAT_14ca843c8;
                plVar26 = plVar23;
                if (bVar45) {
                  plVar30 = DAT_14ca843c8;
                  plVar26 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar26;
                UNLOCK();
              } while (bVar45);
            }
          }
        }
      }
    }
LAB_142f6cd8c:
    uVar24 = local_2f8;
    uVar21 = (iVar32 + 0x1fff + (uint)(iVar32 == 0) >> 0xd) * 0x60000;
    local_2e0 = (ulonglong *)(piVar33 + 0x28);
    if (((*(longlong *)(piVar33 + 0x28) == 0) ||
        (uVar31 = *(uint *)(*(longlong *)(piVar33 + 0x28) + 0x20), uVar31 < uVar21)) ||
       (uVar21 < uVar31 >> 1)) {
      local_118 = 0;
      uStack_110 = (int *)0x0;
      local_108 = 1;
      uStack_104 = 0;
      uStack_100 = 0;
      uStack_fc = 0;
      iStack_f8 = 0;
      uStack_f4 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
      local_f0 = (local_f0 >> 8 & 0xffffff) << 8;
      local_e8 = L"FRayTracingScene::TransformUploadBuffer";
      local_e0 = (ulonglong *)0x0;
      puStack_d8 = (undefined4 *)0x0;
      local_1a8._0_1_ = 0;
      local_1a8._1_1_ = 0;
      local_1a8._2_1_ = (char)(uVar21 >> 0x10);
      local_1a8._3_1_ = (byte)(uVar21 >> 0x18);
      local_1a8._4_4_ = 0x10;
      uStack_1a0 = 0x10104;
      if (uVar21 == 0) {
        FUN_14570b4be(lVar37,&local_118,0x10104,0x10);
      }
      if (*(char *)(lVar37 + 0x69) == '\0') {
        FUN_14002049c(lVar37,1);
        local_320 = &local_118;
        local_328 = (undefined1 *)CONCAT44(local_328._4_4_,0x70);
        (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_128,lVar37,&local_1a8);
        *(undefined4 *)(local_128 + 0x18) = 0x70;
        FUN_14002049c(lVar37,0);
      }
      else {
        local_320 = &local_118;
        local_328 = (undefined1 *)CONCAT44(local_328._4_4_,0x70);
        (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_128,lVar37,&local_1a8);
        *(undefined4 *)(local_128 + 0x18) = 0x70;
      }
      if (local_2e0 == &local_128) {
LAB_142f6cf6a:
        uVar41 = local_128;
        if (local_128 != 0) {
          LOCK();
          puVar1 = (uint *)(local_128 + 8);
          uVar21 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar21 & 0x3fffffff) == 1) {
            puVar1 = (uint *)(local_128 + 8);
            LOCK();
            uVar21 = *puVar1;
            *puVar1 = *puVar1 | 0x40000000;
            UNLOCK();
            if ((uVar21 >> 0x1e & 1) == 0) {
              bVar4 = *(byte *)(local_128 + 0xd);
              plVar23 = (longlong *)FUN_14001cc68(0x10,8);
              plVar23[1] = uVar41;
              plVar26 = DAT_14ca843c0;
              plVar30 = DAT_14ca843c8;
              piVar33 = local_308;
              if ((bVar4 & 2) == 0) {
                do {
                  *plVar23 = (longlong)plVar26;
                  LOCK();
                  bVar45 = plVar26 != DAT_14ca843c0;
                  plVar30 = plVar23;
                  if (bVar45) {
                    plVar26 = DAT_14ca843c0;
                    plVar30 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar30;
                  UNLOCK();
                } while (bVar45);
              }
              else {
                do {
                  *plVar23 = (longlong)plVar30;
                  LOCK();
                  bVar45 = plVar30 != DAT_14ca843c8;
                  plVar26 = plVar23;
                  if (bVar45) {
                    plVar30 = DAT_14ca843c8;
                    plVar26 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar26;
                  UNLOCK();
                } while (bVar45);
              }
            }
          }
        }
      }
      else {
        uVar41 = *local_2e0;
        *local_2e0 = local_128;
        local_128 = 0;
        if (uVar41 != 0) {
          LOCK();
          puVar1 = (uint *)(uVar41 + 8);
          uVar21 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar21 & 0x3fffffff) == 1) {
            puVar1 = (uint *)(uVar41 + 8);
            LOCK();
            uVar21 = *puVar1;
            *puVar1 = *puVar1 | 0x40000000;
            UNLOCK();
            if ((uVar21 >> 0x1e & 1) == 0) {
              bVar4 = *(byte *)(uVar41 + 0xd);
              plVar23 = (longlong *)FUN_14001cc68(0x10,8);
              plVar23[1] = uVar41;
              plVar26 = DAT_14ca843c0;
              plVar30 = DAT_14ca843c8;
              piVar33 = local_308;
              if ((bVar4 & 2) == 0) {
                do {
                  *plVar23 = (longlong)plVar26;
                  LOCK();
                  bVar45 = plVar26 != DAT_14ca843c0;
                  plVar30 = plVar23;
                  if (bVar45) {
                    plVar26 = DAT_14ca843c0;
                    plVar30 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar30;
                  UNLOCK();
                } while (bVar45);
              }
              else {
                do {
                  *plVar23 = (longlong)plVar30;
                  LOCK();
                  bVar45 = plVar30 != DAT_14ca843c8;
                  plVar26 = plVar23;
                  if (bVar45) {
                    plVar30 = DAT_14ca843c8;
                    plVar26 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar26;
                  UNLOCK();
                } while (bVar45);
              }
            }
          }
          goto LAB_142f6cf6a;
        }
      }
      local_1a8._0_1_ = 0;
      local_1a8._1_1_ = 0;
      local_1a8._3_1_ = 0;
      local_1a8._4_4_ = 0;
      uStack_1a0 = 0;
      uStack_19c = 0;
      uVar21 = *(uint *)(*local_2e0 + 0x28);
      local_1a8._2_1_ = '\x04';
      if (((uVar21 & 0x10) == 0) && (local_1a8._2_1_ = '\x02', (uVar21 >> 0x10 & 1) == 0)) {
        local_1a8._2_1_ = ((byte)(uVar21 >> 0xd) & 1) * '\x02' + '\x01';
      }
      local_328 = (undefined1 *)&local_1a8;
      (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_128,lVar37);
      puVar9 = (ulonglong *)(piVar33 + 0x2a);
      if (puVar9 != &local_128) {
        uVar41 = *puVar9;
        *puVar9 = local_128;
        local_128 = 0;
        if (uVar41 == 0) goto LAB_142f6d11c;
        LOCK();
        puVar1 = (uint *)(uVar41 + 8);
        uVar21 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar21 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(uVar41 + 8);
          LOCK();
          uVar21 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar21 >> 0x1e & 1) == 0) {
            bVar4 = *(byte *)(uVar41 + 0xd);
            plVar23 = (longlong *)FUN_14001cc68(0x10);
            plVar23[1] = uVar41;
            plVar26 = DAT_14ca843c0;
            plVar30 = DAT_14ca843c8;
            piVar33 = local_308;
            if ((bVar4 & 2) == 0) {
              do {
                *plVar23 = (longlong)plVar26;
                LOCK();
                bVar45 = plVar26 != DAT_14ca843c0;
                plVar30 = plVar23;
                if (bVar45) {
                  plVar26 = DAT_14ca843c0;
                  plVar30 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar30;
                UNLOCK();
              } while (bVar45);
            }
            else {
              do {
                *plVar23 = (longlong)plVar30;
                LOCK();
                bVar45 = plVar30 != DAT_14ca843c8;
                plVar26 = plVar23;
                if (bVar45) {
                  plVar30 = DAT_14ca843c8;
                  plVar26 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar26;
                UNLOCK();
              } while (bVar45);
            }
          }
        }
      }
      uVar41 = local_128;
      if (local_128 != 0) {
        LOCK();
        puVar1 = (uint *)(local_128 + 8);
        uVar21 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar21 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(local_128 + 8);
          LOCK();
          uVar21 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar21 >> 0x1e & 1) == 0) {
            bVar4 = *(byte *)(local_128 + 0xd);
            plVar23 = (longlong *)FUN_14001cc68(0x10);
            plVar23[1] = uVar41;
            plVar26 = DAT_14ca843c0;
            plVar30 = DAT_14ca843c8;
            piVar33 = local_308;
            if ((bVar4 & 2) == 0) {
              do {
                *plVar23 = (longlong)plVar26;
                LOCK();
                bVar45 = plVar26 != DAT_14ca843c0;
                plVar30 = plVar23;
                if (bVar45) {
                  plVar26 = DAT_14ca843c0;
                  plVar30 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar30;
                UNLOCK();
              } while (bVar45);
            }
            else {
              do {
                *plVar23 = (longlong)plVar30;
                LOCK();
                bVar45 = plVar30 != DAT_14ca843c8;
                plVar26 = plVar23;
                if (bVar45) {
                  plVar30 = DAT_14ca843c8;
                  plVar26 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar26;
                UNLOCK();
              } while (bVar45);
            }
          }
        }
      }
    }
LAB_142f6d11c:
    puVar9 = local_2f0;
    if (*(char *)(param_1 + 0x50) == '\x01') {
      uVar21 = 4;
      if (DAT_14ca84e48 < 4) {
        uVar21 = DAT_14ca84e48;
      }
      uStack_110 = (int *)CONCAT44(uStack_110._4_4_,0x10108);
      uVar31 = DAT_14ca84e48;
      if (uVar42 < DAT_14ca84e48) {
        uVar31 = uVar42;
      }
      local_108 = 0;
      uStack_104 = 0;
      local_118 = CONCAT44(uVar31 + (uVar31 == 0),uVar21 + (uVar21 == 0));
      uVar39 = *(longlong *)(uVar24 + 0x70) + 0xfU & 0xfffffffffffffff0;
      uVar41 = uVar39 + 0x150;
      if (*(ulonglong *)(uVar24 + 0x78) < uVar41) {
        FUN_140023dd8(local_2f0,0x160);
        uVar39 = *puVar9 + 0xf & 0xfffffffffffffff0;
        uVar41 = uVar39 + 0x150;
      }
      *(ulonglong *)(uVar24 + 0x70) = uVar41;
      FUN_1456bd266(uVar39,L"FRayTracingScene::DebugInstanceGPUSceneIndexBuffer",&local_118,0);
      iVar32 = *(int *)(uVar24 + 400);
      *(uint *)(uVar24 + 400) = iVar32 + 1U;
      if (*(uint *)(uVar24 + 0x194) < iVar32 + 1U) {
        FUN_144737178(local_290,iVar32);
      }
      puVar9 = local_2f0;
      *(ulonglong *)(*(longlong *)(uVar24 + 0x188) + (longlong)iVar32 * 8) = uVar39;
      *(int *)(uVar39 + 0x7c) = *(int *)(uVar24 + 400) + -1;
      *(ulonglong *)(piVar33 + 0x34) = uVar39;
      cVar20 = *(char *)(uVar39 + 0x68);
      puVar35 = (undefined8 *)(*(longlong *)(uVar24 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar29 = puVar35 + 8;
      if (*(undefined8 **)(uVar24 + 0x78) < puVar29) {
        FUN_140023dd8(local_2f0,0x48);
        puVar35 = (undefined8 *)(*puVar9 + 7 & 0xfffffffffffffff8);
        puVar29 = puVar35 + 8;
      }
      uVar21 = local_2fc;
      *(undefined8 **)(uVar24 + 0x70) = puVar29;
      puVar35[1] = *(undefined8 *)(uVar39 + 8);
      puVar35[2] = 0;
      *(undefined1 *)(puVar35 + 3) = 2;
      *(undefined8 *)((longlong)puVar35 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar35 + 5) = 0;
      *puVar35 = &PTR_FUN_14a1fb3e8;
      *(byte *)(puVar35 + 6) = cVar20 >> 7 & 0x1c;
      *(undefined2 *)((longlong)puVar35 + 0x31) = 0;
      puVar35[7] = uVar39;
      iVar32 = *(int *)(uVar24 + 0x1a0);
      *(uint *)(uVar24 + 0x1a0) = iVar32 + 1U;
      if (*(uint *)(uVar24 + 0x1a4) < iVar32 + 1U) {
        FUN_1447568fc(local_298,iVar32);
      }
      *(undefined8 **)(*(longlong *)(uVar24 + 0x198) + (longlong)iVar32 * 8) = puVar35;
      *(int *)((longlong)puVar35 + 0x1c) = *(int *)(uVar24 + 0x1a0) + -1;
      local_268 = puVar35;
      FUN_1405bfba3(uVar24,puVar35,0xffffffff,2);
      piVar33 = local_308;
    }
    else {
      local_268 = (undefined8 *)0x0;
      uVar21 = local_2fc;
    }
    puVar9 = local_2f0;
    if ((uVar21 != 0) && (0 < piVar33[0x3c])) {
      puVar38 = (undefined1 *)(*(longlong *)(uVar24 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar25 = puVar38 + (ulonglong)uVar21 * 0x10;
      if (*(undefined1 **)(uVar24 + 0x78) < puVar25) {
        FUN_140023dd8(local_2f0);
        puVar38 = (undefined1 *)(*puVar9 + 7 & 0xfffffffffffffff8);
        puVar25 = puVar38 + (ulonglong)uVar21 * 0x10;
      }
      *local_2f0 = (ulonglong)puVar25;
      uVar21 = piVar33[0x3c];
      uVar42 = *(uint *)(DAT_14ca84d28 + 4);
      uVar31 = (**(code **)(*DAT_14c82b500 + 0x20))();
      if ((int)uVar31 < (int)uVar42) {
        uVar42 = uVar31;
      }
      uVar31 = uVar21 + 0x1ff >> 9;
      if (uVar42 < uVar31) {
        uVar31 = uVar42;
      }
      local_2e8 = ((uVar21 + uVar31) - 1) / uVar31;
      local_2c8 = (ulonglong)(uVar31 + (uVar31 == 0));
      uVar41 = 0;
      local_2c0 = (ulonglong)uVar21;
      do {
        uVar21 = local_2e8 * (int)uVar41;
        uVar39 = (ulonglong)uVar21;
        uVar21 = (int)local_2c0 - uVar21;
        if (local_2e8 < uVar21) {
          uVar21 = local_2e8;
        }
        lVar44 = uVar39 * 0x60 + *(longlong *)(local_308 + 0x36);
        lVar43 = uVar39 * 0x10 + *(longlong *)(local_308 + 0x3a);
        lVar37 = uVar39 * 4 + *(longlong *)(local_308 + 0xc);
        if (*(byte *)(uVar24 + 0x520) == 0) {
          iVar32 = *local_2a0;
          if (iVar32 == 1) {
            FUN_140ad26c0();
            GetCurrentThreadId();
            iVar32 = *local_2a0;
          }
          if ((iVar32 == 0x60000000) || (iVar32 == 0)) {
            *local_2a0 = 0x40000010;
          }
          if (0 < (int)uVar21) {
            uVar39 = 0;
            do {
              if (*(int *)(lVar44 + 0x40 + uVar39 * 0x60) != 0) {
                iVar6 = *(int *)(lVar37 + uVar39 * 4);
                puVar40 = (undefined4 *)(uVar39 * 0x10 + lVar43);
                uVar42 = 0;
                do {
                  uVar5 = puVar40[1];
                  uVar11 = puVar40[2];
                  uVar12 = puVar40[3];
                  puVar3 = (undefined4 *)(puVar38 + (longlong)(int)(iVar6 + uVar42) * 0x10);
                  *puVar3 = *puVar40;
                  puVar3[1] = uVar5;
                  puVar3[2] = uVar11;
                  puVar3[3] = uVar12;
                  uVar42 = uVar42 + 1;
                } while (uVar42 < *(uint *)(uVar39 * 0x60 + lVar44 + 0x40));
              }
              uVar39 = uVar39 + 1;
            } while (uVar39 < uVar21);
          }
          if ((iVar32 == 0x60000000) || (iVar32 == 0)) {
            *local_2a0 = iVar32;
          }
LAB_142f6d889:
          FUN_14473400f(0);
        }
        else {
          local_2b0 = CONCAT44(local_2b0._4_4_,(uint)*(byte *)(uVar24 + 0x520));
          plVar26 = TlsGetValue(DAT_14c896140);
          if (plVar26 == (longlong *)0x0) {
            plVar26 = (longlong *)FUN_14001cc68(0x18,0x10);
            *plVar26 = 0;
            plVar26[1] = 0;
            *(undefined4 *)(plVar26 + 2) = 0;
            TlsSetValue(DAT_14c896140,plVar26);
          }
          plVar30 = (longlong *)plVar26[1];
          if (plVar30 == (longlong *)0x0) {
            plVar30 = (longlong *)*plVar26;
            if (plVar30 == (longlong *)0x0) {
              do {
                local_118 = DAT_14c896180;
                uVar31 = (uint)DAT_14c896180;
                uVar42 = uVar31 & 0x3ffffff;
                if ((DAT_14c896180 & 0x3ffffff) == 0) {
                  plVar26[1] = 0;
                  goto LAB_142f6d636;
                }
                uVar24 = (DAT_14c896180 & 0xfffffffffc000000) + 0x4000000;
                local_1a8._0_1_ = 0;
                local_1a8._1_1_ = 0;
                local_1a8._2_1_ = 0;
                local_1a8._3_1_ = (byte)(uVar24 >> 0x18);
                local_1a8._4_4_ = (undefined4)(uVar24 >> 0x20);
                if (uVar24 >> 0x1a < DAT_14c896180 >> 0x1a) {
                  local_2e4 = uVar42;
                  FUN_14000f986(0x3a83126f);
                  uVar42 = local_2e4;
                }
                uVar39 = (ulonglong)(uVar31 & 0x3fff);
                uVar5 = *(undefined4 *)
                         (*(longlong *)(&DAT_14c833b00 + (ulonglong)(uVar42 >> 0xe) * 8) + 0x10 +
                         uVar39 * 0x18);
                uVar24 = (ulonglong)CONCAT41(local_1a8._4_4_,local_1a8._3_1_) & 0xfffffffffc;
                local_1a8._3_1_ = (byte)uVar24 | (byte)((uint)uVar5 >> 0x18);
                local_1a8._0_1_ = (undefined1)uVar5;
                local_1a8._1_1_ = (undefined1)((uint)uVar5 >> 8);
                local_1a8._2_1_ = (char)((uint)uVar5 >> 0x10);
                local_1a8._4_4_ = (undefined4)(uVar24 >> 8);
                LOCK();
                bVar45 = local_118 != DAT_14c896180;
                uVar24 = CONCAT44(local_1a8._4_4_,CONCAT13(local_1a8._3_1_,(int3)uVar5));
                if (bVar45) {
                  uVar24 = DAT_14c896180;
                }
                DAT_14c896180 = uVar24;
                UNLOCK();
              } while (bVar45);
              *(undefined4 *)
               (*(longlong *)(&DAT_14c833b00 + (ulonglong)(uVar42 >> 0xe) * 8) + uVar39 * 0x18 +
               0x10) = 0;
              plVar30 = *(longlong **)
                         (*(longlong *)(&DAT_14c833b00 + (ulonglong)(uVar42 >> 0xe) * 8) + 8 +
                         (ulonglong)(uVar42 & 0x3fff) * 0x18);
              FUN_1447d080c();
              plVar26[1] = (longlong)plVar30;
              if (plVar30 == (longlong *)0x0) {
LAB_142f6d636:
                puVar29 = (undefined8 *)FUN_14001cc68(0x10000,0);
                plVar26[1] = (longlong)puVar29;
                iVar32 = 0xff;
                do {
                  puVar35 = puVar29 + 0x20;
                  *puVar29 = puVar35;
                  iVar32 = iVar32 + -1;
                  puVar29 = puVar35;
                } while (iVar32 != 0);
                *puVar35 = 0;
                plVar30 = (longlong *)plVar26[1];
              }
            }
            else {
              plVar26[1] = (longlong)plVar30;
              *plVar26 = 0;
            }
            *(undefined4 *)(plVar26 + 2) = 0x100;
            iVar32 = 0x100;
          }
          else {
            iVar32 = (int)plVar26[2];
          }
          plVar26[1] = *plVar30;
          *(int *)(plVar26 + 2) = iVar32 + -1;
          *plVar30 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
          plVar30[1] = (longlong)&DAT_100000002;
          plVar30[2] = 0;
          *(undefined4 *)(plVar30 + 3) = 0;
          *(undefined4 *)(plVar30 + 4) = 0xffffffff;
          plVar30[6] = 0;
          plVar30[7] = 0x100000000;
          *(undefined1 *)(plVar30 + 8) = 1;
          plVar30[0xe] = (longlong)
                         LowLevelTasks::
                         TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                         TTaskDelegateDummy::vftable;
          plVar30[0xf] = 0;
          plVar30[0x10] = -0x17ffffffffffffe0;
          plVar30[0x12] = 0;
          plVar30[0x13] = 0x100000000;
          *(undefined2 *)(plVar30 + 0x14) = 0;
          LOCK();
          bVar45 = (char)plVar30[8] == '\x01';
          if (bVar45) {
            *(char *)(plVar30 + 8) = '\0';
          }
          UNLOCK();
          if (!bVar45) {
            FUN_14008cdb0(plVar30 + 8);
          }
          uVar24 = local_2f8;
          *plVar30 = (longlong)&PTR_FUN_14a2dbf38;
          if (*(code **)(plVar30[0xe] + 0x18) != FUN_144713626) {
            (**(code **)(plVar30[0xe] + 0x18))(plVar30 + 0xe,plVar30 + 9);
          }
          plVar30[0xe] = (longlong)
                         LowLevelTasks::
                         TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                         TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                         ::vftable;
          plVar30[9] = (longlong)plVar30;
          plVar30[10] = (longlong)plVar30;
          if (*local_288 == 0) {
            lVar27 = 0;
          }
          else {
            lVar27 = *(longlong *)(*local_288 + 0x30);
          }
          plVar30[0xf] = lVar27;
          plVar30[0x10] = local_228;
          *(uint *)((longlong)plVar30 + 0x1c) = (uint)local_2b0 ^ 1;
          plVar30[0x15] = (longlong)puVar38;
          *(uint *)(plVar30 + 0x16) = local_2fc;
          plVar30[0x17] = lVar43;
          *(uint *)(plVar30 + 0x18) = uVar21;
          plVar30[0x19] = lVar44;
          *(uint *)(plVar30 + 0x1a) = uVar21;
          plVar30[0x1b] = lVar37;
          *(uint *)(plVar30 + 0x1c) = uVar21;
          *plVar30 = (longlong)&PTR_FUN_14a2dbf28;
          LOCK();
          UNLOCK();
          LOCK();
          UNLOCK();
          local_118 = CONCAT71(local_118._1_7_,1);
          FUN_1447439e4(plVar30);
          if (plVar30 == (longlong *)0x0) goto LAB_142f6d889;
          iVar32 = *(int *)(uVar24 + 0x508);
          uVar21 = iVar32 + 1;
          *(uint *)(uVar24 + 0x508) = uVar21;
          if (*(uint *)(uVar24 + 0x50c) < uVar21) {
            FUN_1401d03aa(local_2d0);
          }
          *(longlong **)(*local_2d0 + (longlong)iVar32 * 8) = plVar30;
          LOCK();
          *(int *)(plVar30 + 1) = (int)plVar30[1] + 1;
          UNLOCK();
          FUN_14473400f(0);
          LOCK();
          plVar26 = plVar30 + 1;
          *(int *)plVar26 = (int)*plVar26 + -1;
          UNLOCK();
          if ((int)*plVar26 == 0) {
            (**(code **)*plVar30)(plVar30);
          }
        }
        param_1 = local_2b8;
        uVar41 = uVar41 + 1;
      } while (uVar41 != local_2c8);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14ca40850) && (FUN_144b3d300(&DAT_14ca40850), DAT_14ca40850 == -1))
      {
        _DAT_14ca40840 = 0;
        uRam000000014ca40848 = 0;
        _Init_thread_footer(&DAT_14ca40850);
      }
      uVar21 = local_2fc;
      local_320 = (undefined8 *)(longlong)(int)(local_2fc << 4);
      local_318 = 1;
      local_328 = puVar38;
      uVar28 = FUN_144942e63(uVar24,L"FRayTracingScene::InstanceDebugData",0x10,local_2fc);
      *(undefined8 *)(local_308 + 0x32) = uVar28;
      piVar33 = local_308;
    }
    uVar5 = uStack_fc;
    uVar42 = uStack_100;
    uVar24 = local_2f8;
    if (uVar21 != 0) {
      iVar32 = *piVar33;
      iVar6 = piVar33[1];
      uVar28 = *(undefined8 *)(piVar33 + 0x36);
      iVar7 = piVar33[0x38];
      local_2c8 = CONCAT44(local_2c8._4_4_,iVar7);
      local_2c0 = *(ulonglong *)(piVar33 + 4);
      uVar21 = piVar33[6];
      puVar9 = *(ulonglong **)(piVar33 + 8);
      iVar8 = piVar33[10];
      uVar10 = *(undefined8 *)(piVar33 + 0xc);
      uVar31 = piVar33[0xe];
      lVar37 = *(longlong *)(piVar33 + 0x18);
      if (lVar37 != 0) {
        LOCK();
        *(int *)(lVar37 + 8) = *(int *)(lVar37 + 8) + 1;
        UNLOCK();
      }
      uVar41 = *local_2d8;
      if (uVar41 != 0) {
        LOCK();
        *(int *)(uVar41 + 8) = *(int *)(uVar41 + 8) + 1;
        UNLOCK();
      }
      uVar39 = *local_2e0;
      if (uVar39 != 0) {
        LOCK();
        *(int *)(uVar39 + 8) = *(int *)(uVar39 + 8) + 1;
        UNLOCK();
      }
      local_198 = *(undefined **)(local_240 + 4);
      uVar11 = *local_240;
      local_1a8._4_4_ = local_240[1];
      uStack_1a0 = local_240[2];
      uStack_19c = local_240[3];
      local_1a8._0_1_ = (undefined1)uVar11;
      local_1a8._1_1_ = (undefined1)((uint)uVar11 >> 8);
      local_1a8._2_1_ = (char)((uint)uVar11 >> 0x10);
      local_1a8._3_1_ = (byte)((uint)uVar11 >> 0x18);
      uStack_100 = (uint)uVar28;
      uVar22 = uStack_100;
      uStack_fc = (undefined4)((ulonglong)uVar28 >> 0x20);
      uVar11 = uStack_fc;
      if (*(char *)(local_2f8 + 0x520) == '\x01') {
        local_2d8 = (ulonglong *)CONCAT44(local_2d8._4_4_,iVar8);
        local_2e8 = uVar31;
        local_2e4 = uVar21;
        local_2e0 = puVar9;
        local_2b0 = uVar10;
        uStack_100 = uVar42;
        uStack_fc = uVar5;
        uVar28 = FUN_14001cc68(0x308,0x10);
        FUN_14009016e(uVar28,*(undefined4 *)(*(longlong *)(uVar24 + 0x18) + 0x17c),0);
        local_118 = 0;
        uStack_110 = (int *)0x0;
        FUN_144775d28(&local_118,1);
        uVar24 = (ulonglong)uStack_110;
        lVar43 = (longlong)(int)uStack_110;
        uVar21 = (int)uStack_110 + 1;
        uStack_110 = (int *)CONCAT44(uStack_110._4_4_,uVar21);
        if (uStack_110._4_4_ < uVar21) {
          FUN_14741464c(&local_118,uVar24 & 0xffffffff);
        }
        *(undefined8 *)(local_118 + lVar43 * 8) = uVar28;
        local_128 = local_118;
        local_120 = (int)uStack_110;
        FUN_14007658c(&DAT_14ca850c8,&local_128,0);
        if (local_118 != 0) {
          FUN_1400020a8();
        }
        local_118 = local_2f8;
        uStack_110 = (int *)CONCAT44(iVar32,local_2fc);
        iStack_f8 = (int)local_2c8;
        local_f0 = local_2c0;
        local_e8 = (wchar_t *)CONCAT44(local_e8._4_4_,local_2e4);
        local_e0 = local_2e0;
        puStack_d8 = (undefined4 *)CONCAT44(puStack_d8._4_4_,local_2d8._0_4_);
        local_d0 = local_2b0;
        local_c8 = local_2e8;
        local_98 = local_198;
        local_a8 = CONCAT13(local_1a8._3_1_,
                            CONCAT12(local_1a8._2_1_,CONCAT11(local_1a8._1_1_,(undefined1)local_1a8)
                                    ));
        uStack_a4 = local_1a8._4_4_;
        uStack_a0 = uStack_1a0;
        uStack_9c = uStack_19c;
        local_88 = 1;
        local_108 = iVar6;
        uStack_100 = uVar22;
        uStack_fc = uVar11;
        lStack_c0 = lVar37;
        local_b8 = uVar41;
        uStack_b0 = uVar39;
        local_90 = uVar28;
        puVar29 = (undefined8 *)(**(code **)(*DAT_14c872d28 + 0x28))(DAT_14c872d28,0x140,0x10);
        *puVar29 = UE::Tasks::Private::FTaskBase::vftable;
        puVar29[1] = &DAT_100000002;
        puVar29[2] = 0;
        *(undefined4 *)(puVar29 + 3) = 0;
        *(undefined4 *)(puVar29 + 4) = 0xffffffff;
        puVar29[6] = 0;
        puVar29[7] = 0x100000000;
        *(undefined1 *)(puVar29 + 8) = 1;
        puVar29[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateDummy::vftable;
        puVar29[0xf] = 0;
        puVar29[0x10] = 0xe800000000000020;
        puVar29[0x12] = 0;
        puVar29[0x13] = 0x100000000;
        *(undefined2 *)(puVar29 + 0x14) = 0;
        LOCK();
        bVar45 = *(char *)(puVar29 + 8) == '\x01';
        if (bVar45) {
          *(char *)(puVar29 + 8) = '\0';
        }
        UNLOCK();
        if (!bVar45) {
          FUN_14008cdb0(puVar29 + 8);
        }
        param_1 = local_2b8;
        *puVar29 = &PTR_FUN_14a2dbf58;
        if (*(code **)(puVar29[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar29[0xe] + 0x18))(puVar29 + 0xe,puVar29 + 9);
        }
        puVar29[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar29[9] = puVar29;
        puVar29[10] = puVar29;
        if (*local_288 == 0) {
          uVar28 = 0;
        }
        else {
          uVar28 = *(undefined8 *)(*local_288 + 0x30);
        }
        puVar29[0xf] = uVar28;
        puVar29[0x10] = local_278;
        *(undefined4 *)((longlong)puVar29 + 0x1c) = 0;
        puVar29[0x15] = local_118;
        puVar35 = &uStack_110;
        puVar36 = puVar29 + 0x16;
        for (lVar37 = 10; lVar37 != 0; lVar37 = lVar37 + -1) {
          *puVar36 = *puVar35;
          puVar35 = puVar35 + 1;
          puVar36 = puVar36 + 1;
        }
        puVar29[0x20] = lStack_c0;
        lStack_c0 = 0;
        puVar29[0x21] = local_b8;
        local_b8 = 0;
        puVar29[0x22] = uStack_b0;
        uStack_b0 = 0;
        puVar29[0x25] = local_98;
        *(undefined4 *)(puVar29 + 0x23) = local_a8;
        *(undefined4 *)((longlong)puVar29 + 0x11c) = uStack_a4;
        *(undefined4 *)(puVar29 + 0x24) = uStack_a0;
        *(undefined4 *)((longlong)puVar29 + 0x124) = uStack_9c;
        puVar29[0x26] = local_90;
        *(undefined1 *)(puVar29 + 0x27) = local_88;
        *puVar29 = &PTR_FUN_14a2dbf48;
        LOCK();
        UNLOCK();
        LOCK();
        UNLOCK();
        local_128 = CONCAT71(local_128._1_7_,1);
        FUN_1447439e4(puVar29,&local_128);
        bVar45 = puVar29 == (undefined8 *)0x0;
        uVar39 = uStack_b0;
        if (!bVar45) {
          iVar32 = *(int *)(local_2f8 + 0x508);
          *(uint *)(local_2f8 + 0x508) = iVar32 + 1U;
          if (*(uint *)(local_2f8 + 0x50c) < iVar32 + 1U) {
            FUN_1401d03aa(local_2d0,iVar32);
          }
          *(undefined8 **)(*local_2d0 + (longlong)iVar32 * 8) = puVar29;
          LOCK();
          *(int *)(puVar29 + 1) = *(int *)(puVar29 + 1) + 1;
          UNLOCK();
          uVar39 = uStack_b0;
        }
      }
      else {
        local_90 = *(undefined8 *)(local_2f8 + 0x18);
        local_118 = local_2f8;
        uStack_110 = (int *)CONCAT44(iVar32,local_2fc);
        local_e8 = (wchar_t *)CONCAT44(local_e8._4_4_,uVar21);
        puStack_d8 = (undefined4 *)CONCAT44(puStack_d8._4_4_,iVar8);
        local_98 = *(undefined8 *)(local_240 + 4);
        local_a8 = *local_240;
        uStack_a4 = local_240[1];
        uStack_a0 = local_240[2];
        uStack_9c = local_240[3];
        local_88 = 0;
        local_108 = iVar6;
        iStack_f8 = iVar7;
        local_f0 = local_2c0;
        local_e0 = puVar9;
        local_d0 = uVar10;
        local_c8 = uVar31;
        lStack_c0 = lVar37;
        local_b8 = uVar41;
        uStack_b0 = uVar39;
        FUN_142f79892(&local_118);
        bVar45 = true;
        puVar29 = (undefined8 *)0x0;
        param_1 = local_2b8;
      }
      if (uVar39 != 0) {
        LOCK();
        puVar1 = (uint *)(uVar39 + 8);
        uVar21 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar21 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(uVar39 + 8);
          LOCK();
          uVar21 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar21 >> 0x1e & 1) == 0) {
            bVar4 = *(byte *)(uVar39 + 0xd);
            plVar23 = (longlong *)FUN_14001cc68(0x10,8);
            plVar23[1] = uVar39;
            plVar26 = DAT_14ca843c0;
            plVar30 = DAT_14ca843c8;
            if ((bVar4 & 2) == 0) {
              do {
                *plVar23 = (longlong)plVar26;
                LOCK();
                bVar46 = plVar26 != DAT_14ca843c0;
                plVar30 = plVar23;
                if (bVar46) {
                  plVar26 = DAT_14ca843c0;
                  plVar30 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar30;
                UNLOCK();
              } while (bVar46);
            }
            else {
              do {
                *plVar23 = (longlong)plVar30;
                LOCK();
                bVar46 = plVar30 != DAT_14ca843c8;
                plVar26 = plVar23;
                if (bVar46) {
                  plVar30 = DAT_14ca843c8;
                  plVar26 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar26;
                UNLOCK();
              } while (bVar46);
            }
          }
        }
      }
      uVar24 = local_b8;
      if (local_b8 != 0) {
        LOCK();
        puVar1 = (uint *)(local_b8 + 8);
        uVar21 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar21 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(local_b8 + 8);
          LOCK();
          uVar21 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar21 >> 0x1e & 1) == 0) {
            bVar4 = *(byte *)(local_b8 + 0xd);
            plVar23 = (longlong *)FUN_14001cc68(0x10,8);
            plVar23[1] = uVar24;
            plVar26 = DAT_14ca843c0;
            plVar30 = DAT_14ca843c8;
            if ((bVar4 & 2) == 0) {
              do {
                *plVar23 = (longlong)plVar26;
                LOCK();
                bVar46 = plVar26 != DAT_14ca843c0;
                plVar30 = plVar23;
                if (bVar46) {
                  plVar26 = DAT_14ca843c0;
                  plVar30 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar30;
                UNLOCK();
              } while (bVar46);
            }
            else {
              do {
                *plVar23 = (longlong)plVar30;
                LOCK();
                bVar46 = plVar30 != DAT_14ca843c8;
                plVar26 = plVar23;
                if (bVar46) {
                  plVar30 = DAT_14ca843c8;
                  plVar26 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar26;
                UNLOCK();
              } while (bVar46);
            }
          }
        }
      }
      lVar37 = lStack_c0;
      if (lStack_c0 != 0) {
        LOCK();
        puVar1 = (uint *)(lStack_c0 + 8);
        uVar21 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar21 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lStack_c0 + 8);
          LOCK();
          uVar21 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar21 >> 0x1e & 1) == 0) {
            bVar4 = *(byte *)(lStack_c0 + 0xd);
            plVar23 = (longlong *)FUN_14001cc68(0x10,8);
            plVar23[1] = lVar37;
            plVar26 = DAT_14ca843c0;
            plVar30 = DAT_14ca843c8;
            if ((bVar4 & 2) == 0) {
              do {
                *plVar23 = (longlong)plVar26;
                LOCK();
                bVar46 = plVar26 != DAT_14ca843c0;
                plVar30 = plVar23;
                if (bVar46) {
                  plVar26 = DAT_14ca843c0;
                  plVar30 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar30;
                UNLOCK();
              } while (bVar46);
            }
            else {
              do {
                *plVar23 = (longlong)plVar30;
                LOCK();
                bVar46 = plVar30 != DAT_14ca843c8;
                plVar26 = plVar23;
                if (bVar46) {
                  plVar30 = DAT_14ca843c8;
                  plVar26 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar26;
                UNLOCK();
              } while (bVar46);
            }
          }
        }
      }
      FUN_14473400f(0,0);
      if (!bVar45) {
        LOCK();
        piVar33 = (int *)(puVar29 + 1);
        *piVar33 = *piVar33 + -1;
        UNLOCK();
        if (*piVar33 == 0) {
          (**(code **)*puVar29)(puVar29,1);
        }
      }
      uVar24 = local_2f8;
      if (*(char *)(local_2f8 + 0x520) == '\x01') {
        uVar28 = FUN_14001cc68(0x308,0x10);
        FUN_14009016e(uVar28,*(undefined4 *)(*(longlong *)(uVar24 + 0x18) + 0x17c),0);
        local_118 = 0;
        uStack_110 = (int *)0x0;
        FUN_144775d28(&local_118,1);
        uVar41 = (ulonglong)uStack_110;
        lVar37 = (longlong)(int)uStack_110;
        uVar21 = (int)uStack_110 + 1;
        uStack_110 = (int *)CONCAT44(uStack_110._4_4_,uVar21);
        if (uStack_110._4_4_ < uVar21) {
          FUN_14741464c(&local_118,uVar41 & 0xffffffff);
        }
        *(undefined8 *)(local_118 + lVar37 * 8) = uVar28;
        local_1a8._0_1_ = (undefined1)local_118;
        local_1a8._1_1_ = (undefined1)(local_118 >> 8);
        local_1a8._2_1_ = (char)(local_118 >> 0x10);
        local_1a8._3_1_ = (byte)(local_118 >> 0x18);
        local_1a8._4_4_ = (undefined4)(local_118 >> 0x20);
        uStack_1a0 = (int)uStack_110;
        FUN_14007658c(&DAT_14ca850c8,&local_1a8,0);
        if (local_118 != 0) {
          FUN_1400020a8();
        }
        local_118 = uVar24;
        uStack_110 = local_308;
        local_108 = (int)uVar28;
        uStack_104 = (undefined4)((ulonglong)uVar28 >> 0x20);
        uStack_100 = CONCAT31(uStack_100._1_3_,1);
        plVar26 = TlsGetValue(DAT_14c896140);
        if (plVar26 == (longlong *)0x0) {
          plVar26 = (longlong *)FUN_14001cc68(0x18,0x10);
          *plVar26 = 0;
          plVar26[1] = 0;
          *(undefined4 *)(plVar26 + 2) = 0;
          TlsSetValue(DAT_14c896140,plVar26);
        }
        plVar30 = (longlong *)plVar26[1];
        if (plVar30 == (longlong *)0x0) {
          plVar30 = (longlong *)*plVar26;
          if (plVar30 == (longlong *)0x0) {
            do {
              local_1a8._0_1_ = (undefined1)DAT_14c896180;
              local_1a8._1_1_ = (undefined1)(DAT_14c896180 >> 8);
              local_1a8._2_1_ = (char)(DAT_14c896180 >> 0x10);
              local_1a8._3_1_ = (byte)(DAT_14c896180 >> 0x18);
              local_1a8._4_4_ = (undefined4)(DAT_14c896180 >> 0x20);
              uVar21 = (uint)DAT_14c896180;
              if ((DAT_14c896180 & 0x3ffffff) == 0) {
                plVar26[1] = 0;
                goto LAB_142f6e3c0;
              }
              local_128 = (DAT_14c896180 >> 0x18 & 0xfffffffffc) * 0x1000000 + 0x4000000;
              if (local_128 >> 0x1a < DAT_14c896180 >> 0x1a) {
                FUN_14000f986(0x3a83126f);
              }
              uVar41 = (ulonglong)((uVar21 & 0x3ffffff) >> 0xe);
              local_128 = local_128 & 0xfffffffffc000000 |
                          (ulonglong)
                          *(uint *)(*(longlong *)(&DAT_14c833b00 + uVar41 * 8) + 0x10 +
                                   (ulonglong)(uVar21 & 0x3fff) * 0x18);
              LOCK();
              bVar45 = CONCAT44(local_1a8._4_4_,
                                CONCAT13(local_1a8._3_1_,
                                         CONCAT12(local_1a8._2_1_,
                                                  CONCAT11(local_1a8._1_1_,(undefined1)local_1a8))))
                       != DAT_14c896180;
              uVar24 = local_128;
              if (bVar45) {
                uVar24 = DAT_14c896180;
              }
              DAT_14c896180 = uVar24;
              UNLOCK();
            } while (bVar45);
            *(undefined4 *)
             (*(longlong *)(&DAT_14c833b00 + uVar41 * 8) + (ulonglong)(uVar21 & 0x3fff) * 0x18 +
             0x10) = 0;
            plVar30 = *(longlong **)
                       (*(longlong *)(&DAT_14c833b00 + uVar41 * 8) + 8 +
                       (ulonglong)(uVar21 & 0x3fff) * 0x18);
            FUN_1447d080c(uVar21 & 0x3ffffff);
            plVar26[1] = (longlong)plVar30;
            uVar24 = local_2f8;
            if (plVar30 == (longlong *)0x0) {
LAB_142f6e3c0:
              uVar24 = local_2f8;
              puVar29 = (undefined8 *)FUN_14001cc68(0x10000,0);
              plVar26[1] = (longlong)puVar29;
              iVar32 = 0xff;
              do {
                puVar35 = puVar29 + 0x20;
                *puVar29 = puVar35;
                iVar32 = iVar32 + -1;
                puVar29 = puVar35;
              } while (iVar32 != 0);
              *puVar35 = 0;
              plVar30 = (longlong *)plVar26[1];
            }
          }
          else {
            plVar26[1] = (longlong)plVar30;
            *plVar26 = 0;
          }
          *(undefined4 *)(plVar26 + 2) = 0x100;
          iVar32 = 0x100;
        }
        else {
          iVar32 = (int)plVar26[2];
        }
        plVar26[1] = *plVar30;
        *(int *)(plVar26 + 2) = iVar32 + -1;
        *plVar30 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
        plVar30[1] = (longlong)&DAT_100000002;
        plVar30[2] = 0;
        *(undefined4 *)(plVar30 + 3) = 0;
        *(undefined4 *)(plVar30 + 4) = 0xffffffff;
        plVar30[6] = 0;
        plVar30[7] = 0x100000000;
        *(undefined1 *)(plVar30 + 8) = 1;
        plVar30[0xe] = (longlong)
                       LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateDummy::vftable;
        plVar30[0xf] = 0;
        plVar30[0x10] = -0x17ffffffffffffe0;
        plVar30[0x12] = 0;
        plVar30[0x13] = 0x100000000;
        *(undefined2 *)(plVar30 + 0x14) = 0;
        LOCK();
        bVar45 = (char)plVar30[8] == '\x01';
        if (bVar45) {
          *(char *)(plVar30 + 8) = '\0';
        }
        UNLOCK();
        if (!bVar45) {
          FUN_14008cdb0(plVar30 + 8);
        }
        *plVar30 = (longlong)&PTR_FUN_14a2dbf80;
        if (*(code **)(plVar30[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(plVar30[0xe] + 0x18))(plVar30 + 0xe,plVar30 + 9);
        }
        plVar30[0xe] = (longlong)
                       LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        plVar30[9] = (longlong)plVar30;
        plVar30[10] = (longlong)plVar30;
        if (*local_288 == 0) {
          lVar37 = 0;
        }
        else {
          lVar37 = *(longlong *)(*local_288 + 0x30);
        }
        plVar30[0xf] = lVar37;
        plVar30[0x10] = local_278;
        *(undefined4 *)((longlong)plVar30 + 0x1c) = 0;
        *(undefined4 *)(plVar30 + 0x15) = (undefined4)local_118;
        *(undefined4 *)((longlong)plVar30 + 0xac) = local_118._4_4_;
        *(int *)(plVar30 + 0x16) = (int)uStack_110;
        *(uint *)((longlong)plVar30 + 0xb4) = uStack_110._4_4_;
        *(int *)(plVar30 + 0x17) = local_108;
        *(undefined4 *)((longlong)plVar30 + 0xbc) = uStack_104;
        *(uint *)(plVar30 + 0x18) = uStack_100;
        *(undefined4 *)((longlong)plVar30 + 0xc4) = uStack_fc;
        *plVar30 = (longlong)&PTR_FUN_14a2dbf70;
        LOCK();
        UNLOCK();
        LOCK();
        UNLOCK();
        local_1a8._0_1_ = 1;
        FUN_1447439e4(plVar30,&local_1a8);
        if (plVar30 == (longlong *)0x0) goto LAB_142f6e58c;
        iVar32 = *(int *)(uVar24 + 0x508);
        *(uint *)(uVar24 + 0x508) = iVar32 + 1U;
        if (*(uint *)(uVar24 + 0x50c) < iVar32 + 1U) {
          FUN_1401d03aa(local_2d0,iVar32);
        }
        *(longlong **)(*local_2d0 + (longlong)iVar32 * 8) = plVar30;
        LOCK();
        *(int *)(plVar30 + 1) = (int)plVar30[1] + 1;
        UNLOCK();
        FUN_14473400f(0,0);
        LOCK();
        plVar26 = plVar30 + 1;
        *(int *)plVar26 = (int)*plVar26 + -1;
        UNLOCK();
        if ((int)*plVar26 == 0) {
          (**(code **)*plVar30)(plVar30,1);
        }
      }
      else {
        local_118 = local_2f8;
        uStack_110 = local_308;
        local_108 = (int)*(undefined8 *)(local_2f8 + 0x18);
        uStack_104 = (undefined4)((ulonglong)*(undefined8 *)(local_2f8 + 0x18) >> 0x20);
        uStack_100 = uStack_100 & 0xffffff00;
        FUN_142f79f46(&local_118);
LAB_142f6e58c:
        FUN_14473400f(0,0);
      }
      puVar9 = local_2f0;
      puVar35 = (undefined8 *)(*(longlong *)(uVar24 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar29 = puVar35 + 8;
      if (*(undefined8 **)(uVar24 + 0x78) < puVar29) {
        FUN_140023dd8(local_2f0,0x50);
        puVar35 = (undefined8 *)(*puVar9 + 0xf & 0xfffffffffffffff0);
        puVar29 = puVar35 + 8;
      }
      *(undefined8 **)(uVar24 + 0x70) = puVar29;
      *puVar35 = &PTR_FUN_14a2dbf90;
      puVar35[6] = 0;
      puVar35[2] = 0;
      puVar35[3] = 0;
      puVar35[4] = 0;
      *(undefined1 *)(puVar35 + 7) = 1;
      iVar32 = *(int *)(uVar24 + 0xa0);
      *(uint *)(uVar24 + 0xa0) = iVar32 + 1U;
      if (*(uint *)(uVar24 + 0xa4) < iVar32 + 1U) {
        FUN_1448cfae8(local_250,iVar32);
      }
      puVar9 = local_2f0;
      *(undefined8 **)(*(longlong *)(uVar24 + 0x98) + (longlong)iVar32 * 8) = puVar35;
      lVar37 = *(longlong *)(local_308 + 0x1a);
      cVar20 = *(char *)(lVar37 + 0x68);
      puVar36 = (undefined8 *)(*(longlong *)(uVar24 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar29 = puVar36 + 8;
      if (*(undefined8 **)(uVar24 + 0x78) < puVar29) {
        FUN_140023dd8(local_2f0,0x48);
        puVar36 = (undefined8 *)(*puVar9 + 7 & 0xfffffffffffffff8);
        puVar29 = puVar36 + 8;
      }
      *(undefined8 **)(uVar24 + 0x70) = puVar29;
      puVar36[1] = *(undefined8 *)(lVar37 + 8);
      puVar36[2] = 0;
      *(undefined1 *)(puVar36 + 3) = 2;
      *(undefined8 *)((longlong)puVar36 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar36 + 5) = 0;
      *puVar36 = &PTR_FUN_14a1fb3e8;
      *(byte *)(puVar36 + 6) = cVar20 >> 7 & 0x1c;
      *(undefined2 *)((longlong)puVar36 + 0x31) = 0;
      puVar36[7] = lVar37;
      iVar32 = *(int *)(uVar24 + 0x1a0);
      *(uint *)(uVar24 + 0x1a0) = iVar32 + 1U;
      if (*(uint *)(uVar24 + 0x1a4) < iVar32 + 1U) {
        FUN_1447568fc(local_298,iVar32);
      }
      *(undefined8 **)(*(longlong *)(uVar24 + 0x198) + (longlong)iVar32 * 8) = puVar36;
      *(int *)((longlong)puVar36 + 0x1c) = *(int *)(uVar24 + 0x1a0) + -1;
      puVar35[2] = puVar36;
      puVar35[4] = local_268;
      uVar28 = (**(code **)(**(longlong **)(*(longlong *)(local_238 + 8) + 0x178) + 8))();
      uVar28 = FUN_1448c569e(uVar28,uVar24);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14ca4b328) && (FUN_144b3d300(&DAT_14ca4b328), DAT_14ca4b328 == -1))
      {
        DAT_14ca4b320 = FUN_145900d44();
        _Init_thread_footer(&DAT_14ca4b328);
      }
      puVar29 = puVar35 + 2;
      cVar20 = *(char *)(DAT_14ca4b320 + 0x41);
      if (*(char *)(DAT_14ca4b320 + 0x41) == '\x03') {
        cVar20 = '\x02';
      }
      puVar35[6] = uVar28;
      *(char *)(puVar35 + 7) = cVar20;
      iVar32 = *local_308;
      iVar6 = local_308[1];
      puVar35 = local_248;
      puVar36 = &local_118;
      for (lVar37 = 0xc; lVar37 != 0; lVar37 = lVar37 + -1) {
        *puVar36 = *puVar35;
        puVar35 = puVar35 + 1;
        puVar36 = puVar36 + 1;
      }
      FUN_1472c2f0e();
      FUN_140069376(uVar24);
      uVar5 = local_1a8._4_4_;
      uVar18 = local_1a8._3_1_;
      uVar17 = local_1a8._2_1_;
      uVar15 = local_1a8._1_1_;
      uVar13 = (undefined1)local_1a8;
      puVar9 = local_2f0;
      if ((((DAT_14c760ddc < 1) || (DAT_14ca84e23 != '\x01')) || (DAT_14ca84e6a != '\x01')) ||
         ((DAT_14ca84e99 & 1) != 0)) {
        lVar37 = *(longlong *)(local_2f8 + 0x70);
        puVar35 = *(undefined8 **)(local_2f8 + 0x78);
        uVar21 = (uint)local_260;
        uVar42 = (uint)param_5;
      }
      else {
        uVar21 = (uint)param_5;
        if (DAT_14c760ddc == 2 && (param_5 & 2) != 0) {
          uVar21 = local_280;
        }
        lVar37 = *(longlong *)(local_2f8 + 0x70);
        puVar35 = *(undefined8 **)(local_2f8 + 0x78);
        uVar42 = uVar21;
      }
      puVar36 = (undefined8 *)(lVar37 + 7U & 0xfffffffffffffff8);
      local_1a8._0_1_ = SUB81(puVar29,0);
      uVar14 = (undefined1)local_1a8;
      local_1a8._1_1_ = (undefined1)((ulonglong)puVar29 >> 8);
      uVar16 = local_1a8._1_1_;
      local_1a8._2_1_ = (char)((ulonglong)puVar29 >> 0x10);
      cVar20 = local_1a8._2_1_;
      local_1a8._3_1_ = (byte)((ulonglong)puVar29 >> 0x18);
      bVar4 = local_1a8._3_1_;
      local_1a8._4_4_ = (undefined4)((ulonglong)puVar29 >> 0x20);
      uVar11 = local_1a8._4_4_;
      local_1a8._0_1_ = uVar13;
      local_1a8._1_1_ = uVar15;
      local_1a8._2_1_ = uVar17;
      local_1a8._3_1_ = uVar18;
      local_1a8._4_4_ = uVar5;
      if ((param_5 & 4) == 0) {
        puVar34 = puVar36 + 0x48;
        if (puVar35 < puVar34) {
          FUN_140023dd8(local_2f0,0x248);
          puVar36 = (undefined8 *)(*puVar9 + 7 & 0xfffffffffffffff8);
          puVar34 = puVar36 + 0x48;
        }
        *local_2f0 = (ulonglong)puVar34;
        uStack_1a0 = (undefined4)DAT_14ca408a0;
        uStack_19c = (uint)((ulonglong)DAT_14ca408a0 >> 0x20);
        if (DAT_14ca408a0 != 0) {
          LOCK();
          *(int *)(DAT_14ca408a0 + 8) = *(int *)(DAT_14ca408a0 + 8) + 1;
          UNLOCK();
        }
        local_198 = &DAT_14ca40858;
        local_328 = (undefined1 *)CONCAT71(local_328._1_7_,1);
        local_1a8._0_1_ = uVar14;
        local_1a8._1_1_ = uVar16;
        local_1a8._2_1_ = cVar20;
        local_1a8._3_1_ = bVar4;
        local_1a8._4_4_ = uVar11;
        FUN_140068f1a(puVar36,&local_128,&local_1a8,uVar42);
        *puVar36 = &PTR_FUN_14a2dbfc0;
        puVar36[0x37] = puVar29;
        puVar36[0x38] = param_1;
        puVar36[0x39] = local_308;
        puVar36[0x3a] = local_270;
        *(int *)(puVar36 + 0x3b) = iVar32;
        *(int *)((longlong)puVar36 + 0x1dc) = iVar6;
        puVar29 = &local_118;
        puVar35 = puVar36 + 0x3c;
        for (lVar37 = 0xc; lVar37 != 0; lVar37 = lVar37 + -1) {
          *puVar35 = *puVar29;
          puVar29 = puVar29 + 1;
          puVar35 = puVar35 + 1;
        }
      }
      else {
        puVar34 = puVar36 + 0x49;
        if (puVar35 < puVar34) {
          FUN_140023dd8(local_2f0,0x250);
          puVar36 = (undefined8 *)(*puVar9 + 7 & 0xfffffffffffffff8);
          puVar34 = puVar36 + 0x49;
        }
        *(undefined8 **)(local_2f8 + 0x70) = puVar34;
        uVar5 = *(undefined4 *)(local_2f8 + 0x660);
        uStack_1a0 = (undefined4)DAT_14ca408a0;
        uStack_19c = (uint)((ulonglong)DAT_14ca408a0 >> 0x20);
        if (DAT_14ca408a0 != 0) {
          LOCK();
          *(int *)(DAT_14ca408a0 + 8) = *(int *)(DAT_14ca408a0 + 8) + 1;
          UNLOCK();
        }
        local_198 = &DAT_14ca40858;
        local_328 = (undefined1 *)CONCAT71(local_328._1_7_,1);
        local_1a8._0_1_ = uVar14;
        local_1a8._1_1_ = uVar16;
        local_1a8._2_1_ = cVar20;
        local_1a8._3_1_ = bVar4;
        local_1a8._4_4_ = uVar11;
        FUN_140068f1a(puVar36,&local_128,&local_1a8,uVar21);
        puVar36[0x37] = puVar29;
        puVar36[0x38] = local_2b8;
        puVar36[0x39] = local_308;
        puVar36[0x3a] = local_270;
        *(int *)(puVar36 + 0x3b) = iVar32;
        *(int *)((longlong)puVar36 + 0x1dc) = iVar6;
        puVar29 = &local_118;
        puVar35 = puVar36 + 0x3c;
        for (lVar37 = 0xc; lVar37 != 0; lVar37 = lVar37 + -1) {
          *puVar35 = *puVar29;
          puVar29 = puVar29 + 1;
          puVar35 = puVar35 + 1;
        }
        *puVar36 = &PTR_FUN_14a2dbfa0;
        *(undefined4 *)(puVar36 + 0x48) = uVar5;
        param_1 = local_2b8;
      }
      uVar24 = local_2f8;
      iVar32 = *(int *)(local_2f8 + 0x170);
      *(uint *)(local_2f8 + 0x170) = iVar32 + 1U;
      if (*(uint *)(local_2f8 + 0x174) < iVar32 + 1U) {
        FUN_14470e57a(local_258,iVar32);
      }
      *(undefined8 **)(*(longlong *)(uVar24 + 0x168) + (longlong)iVar32 * 8) = puVar36;
      *(int *)((longlong)puVar36 + 0x2c) = *(int *)(uVar24 + 0x170) + -1;
      FUN_140069100(uVar24,puVar36);
    }
    lVar37 = 1;
    uVar28 = 0;
    if ((local_2a4 & 1) == 0) {
      if ((local_80 ^ (ulonglong)local_348) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  } while( true );
}



// FUNCTION 142f6eeb0 FUN_142f6eeb0 body=995 status=ok
// SIG undefined FUN_142f6eeb0(void)

void FUN_142f6eeb0(longlong param_1,longlong param_2,uint param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong *puVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  bool bVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  ulonglong *local_a0;
  uint local_94;
  longlong local_90;
  ulonglong local_88;
  longlong local_80;
  longlong local_78;
  undefined8 local_70;
  undefined1 local_61;
  undefined8 *local_60;
  longlong local_58;
  undefined *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a0 = (ulonglong *)(param_2 + 0x70);
  local_78 = param_2 + 0x98;
  local_80 = param_2 + 0x168;
  local_94 = (param_3 & 0xfffffff9) + 4;
  local_88 = (ulonglong)(param_3 & 0xfffffff9 | 2);
  lVar14 = 0;
  bVar6 = true;
  local_90 = param_1;
  local_70 = param_4;
  do {
    bVar10 = bVar6;
    puVar5 = local_a0;
    lVar14 = lVar14 * 0xf8 + *(longlong *)(param_1 + 0x70);
    puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar7 = puVar12 + 10;
    if (*(undefined8 **)(param_2 + 0x78) < puVar7) {
      FUN_140023dd8(local_a0,0x60);
      puVar12 = (undefined8 *)(*puVar5 + 0xf & 0xfffffffffffffff0);
      puVar7 = puVar12 + 10;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar7;
    *puVar12 = &PTR_FUN_14a2dc070;
    puVar12[2] = 0;
    *(undefined4 *)(puVar12 + 3) = 0x400;
    puVar12[4] = 0;
    *(undefined4 *)(puVar12 + 5) = 0x10;
    puVar12[6] = 0;
    *(undefined4 *)(puVar12 + 7) = 0x20000;
    puVar12[8] = 0;
    *(undefined4 *)(puVar12 + 9) = 0x400;
    iVar1 = *(int *)(param_2 + 0xa0);
    *(uint *)(param_2 + 0xa0) = iVar1 + 1U;
    if (*(uint *)(param_2 + 0xa4) < iVar1 + 1U) {
      FUN_1448cfae8(local_78,iVar1);
    }
    puVar7 = puVar12 + 2;
    *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar1 * 8) = puVar12;
    puVar12[2] = *(undefined8 *)(lVar14 + 0x70);
    *(undefined4 *)(puVar12 + 3) = 0x400;
    puVar12[4] = *(undefined8 *)(lVar14 + 0x68);
    *(undefined4 *)(puVar12 + 5) = 0x10;
    puVar12[6] = *(undefined8 *)(lVar14 + 0x80);
    *(undefined4 *)(puVar12 + 7) = 0x20000;
    puVar12[8] = local_70;
    *(undefined4 *)(puVar12 + 9) = 0x400;
    FUN_1472c3338();
    FUN_140069376(param_2);
    puVar5 = local_a0;
    if ((((DAT_14c760ddc < 1) || (DAT_14ca84e23 != '\x01')) || (DAT_14ca84e6a != '\x01')) ||
       ((DAT_14ca84e99 & 1) != 0)) {
      lVar3 = *(longlong *)(param_2 + 0x70);
      puVar12 = *(undefined8 **)(param_2 + 0x78);
      uVar11 = local_88 & 0xffffffff;
      uVar13 = (ulonglong)param_3;
    }
    else {
      uVar4 = param_3;
      if (DAT_14c760ddc == 2 && (param_3 & 2) != 0) {
        uVar4 = local_94;
      }
      uVar11 = (ulonglong)uVar4;
      lVar3 = *(longlong *)(param_2 + 0x70);
      puVar12 = *(undefined8 **)(param_2 + 0x78);
      uVar13 = uVar11;
    }
    puVar9 = (undefined8 *)(lVar3 + 7U & 0xfffffffffffffff8);
    if ((param_3 & 4) == 0) {
      puVar8 = puVar9 + 0x3a;
      if (puVar12 < puVar8) {
        FUN_140023dd8(local_a0,0x1d8);
        puVar9 = (undefined8 *)(*puVar5 + 7 & 0xfffffffffffffff8);
        puVar8 = puVar9 + 0x3a;
      }
      *local_a0 = (ulonglong)puVar8;
      local_58 = DAT_14ca40928;
      if (DAT_14ca40928 != 0) {
        LOCK();
        *(int *)(DAT_14ca40928 + 8) = *(int *)(DAT_14ca40928 + 8) + 1;
        UNLOCK();
      }
      local_50 = &DAT_14ca408e0;
      local_a8 = 1;
      local_60 = puVar7;
      FUN_140068f1a(puVar9,&local_61,&local_60,uVar13);
      *puVar9 = &PTR_FUN_14a2dc0a0;
      puVar9[0x37] = puVar7;
      puVar9[0x38] = local_90;
      puVar9[0x39] = lVar14;
    }
    else {
      puVar8 = puVar9 + 0x3b;
      if (puVar12 < puVar8) {
        FUN_140023dd8(local_a0,0x1e0);
        puVar9 = (undefined8 *)(*puVar5 + 7 & 0xfffffffffffffff8);
        puVar8 = puVar9 + 0x3b;
      }
      *(undefined8 **)(param_2 + 0x70) = puVar8;
      uVar2 = *(undefined4 *)(param_2 + 0x660);
      local_58 = DAT_14ca40928;
      if (DAT_14ca40928 != 0) {
        LOCK();
        *(int *)(DAT_14ca40928 + 8) = *(int *)(DAT_14ca40928 + 8) + 1;
        UNLOCK();
      }
      local_50 = &DAT_14ca408e0;
      local_a8 = 1;
      local_60 = puVar7;
      FUN_140068f1a(puVar9,&local_61,&local_60,uVar11);
      puVar9[0x37] = puVar7;
      puVar9[0x38] = local_90;
      puVar9[0x39] = lVar14;
      *puVar9 = &PTR_FUN_14a2dc080;
      *(undefined4 *)(puVar9 + 0x3a) = uVar2;
    }
    param_1 = local_90;
    iVar1 = *(int *)(param_2 + 0x170);
    *(uint *)(param_2 + 0x170) = iVar1 + 1U;
    if (*(uint *)(param_2 + 0x174) < iVar1 + 1U) {
      FUN_14470e57a(local_80,iVar1);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar1 * 8) = puVar9;
    *(int *)((longlong)puVar9 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
    FUN_140069100(param_2,puVar9);
    lVar14 = 1;
    bVar6 = false;
  } while (bVar10);
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f6f294 FUN_142f6f294 body=165 status=ok
// SIG undefined FUN_142f6f294(void)

undefined8 FUN_142f6f294(longlong param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  uint uVar1;
  byte bVar2;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong local_28;
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x60 + (ulonglong)param_4 * 0xf8);
  local_18 = *(longlong *)
              (*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x78 + (ulonglong)param_4 * 0xf8) +
              0x28);
  uVar1 = *(uint *)(local_18 + 0x28);
  bVar2 = 4;
  if (((uVar1 & 0x10) == 0) && (bVar2 = 2, (uVar1 >> 0x10 & 1) == 0)) {
    bVar2 = ((byte)(uVar1 >> 0xd) & 1) * '\x02' + 1;
  }
  local_38 = &local_28;
  local_28 = (ulonglong)bVar2 << 0x10;
  (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,param_2);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f6f33a FUN_142f6f33a body=364 status=ok
// SIG undefined FUN_142f6f33a(void)

void FUN_142f6f33a(longlong param_1)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined4 local_130;
  undefined1 local_128 [184];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_158;
  FUN_1400d22ec();
  if (*(char *)(param_1 + 0xaa) == '\0') {
    lVar3 = 0;
    bVar1 = true;
    do {
      bVar2 = bVar1;
      local_138 = 0;
      local_130 = 0;
      memset(local_128,0,0xb4);
      local_70 = 0;
      uStack_68 = 0;
      local_60 = 0;
      uStack_58 = 0;
      local_50 = 0;
      uStack_48 = 0;
      FUN_140346b34(lVar3 * 0xf8 + *(longlong *)(param_1 + 0x70));
      FUN_1412bdbbe(&local_138);
      lVar3 = 1;
      bVar1 = false;
    } while (bVar2);
    FUN_1400d2500(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x18) = 0;
    if (*(int *)(param_1 + 0x1c) != 0) {
      FUN_1472c38c0(param_1 + 0x10,0);
    }
    FUN_14474ae1f(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
    *(undefined4 *)(param_1 + 0x28) = 0;
    if (*(int *)(param_1 + 0x2c) != 0) {
      FUN_1472c2746(param_1 + 0x20,0);
    }
    *(undefined4 *)(param_1 + 0x38) = 0;
    if (*(int *)(param_1 + 0x3c) != 0) {
      FUN_1472c3932(param_1 + 0x30,0);
    }
    *(undefined4 *)(param_1 + 0x48) = 0;
    if (*(int *)(param_1 + 0x4c) != 0) {
      FUN_140ca8596(param_1 + 0x40,0);
    }
  }
  *(undefined2 *)(param_1 + 0xa9) = 0;
  if ((local_40 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f6f4ec FUN_142f6f4ec body=282 status=ok
// SIG undefined FUN_142f6f4ec(void)

undefined8 * FUN_142f6f4ec(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
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
          __tlregdtor(&LAB_142f6f4c4);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 142f6f63e FUN_142f6f63e body=88 status=ok
// SIG undefined FUN_142f6f63e(void)

void FUN_142f6f63e(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  puVar2 = &DAT_14ca3e630;
  puVar1 = &DAT_14ca3e490;
  do {
    puVar2 = puVar2 + -0x34;
    lVar3 = 0x188;
    do {
      if (*(longlong *)((longlong)puVar1 + lVar3) != 0) {
        FUN_1400020a8();
      }
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != 200);
    puVar1 = puVar1 + -0x34;
  } while (puVar2 != &DAT_14ca3e490);
  return;
}



// FUNCTION 142f6f762 FUN_142f6f762 body=243 status=ok
// SIG undefined FUN_142f6f762(void)

longlong * FUN_142f6f762(longlong *param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145e3f878();
  local_30 = 1;
  local_38 = 1;
  (**(code **)(*DAT_14ca83900 + 0x138))(DAT_14ca83900,&local_28,param_2,DAT_14ca3a020);
  *param_1 = local_28;
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
    if (local_28 != 0) {
      LOCK();
      puVar1 = (uint *)(local_28 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_28 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_28 + 0xd);
          plVar4 = (longlong *)FUN_14001cc68(0x10,8);
          plVar4[1] = local_28;
          plVar6 = DAT_14ca843c0;
          plVar5 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar4 = (longlong)plVar6;
              LOCK();
              bVar7 = plVar6 != DAT_14ca843c0;
              plVar5 = plVar4;
              if (bVar7) {
                plVar6 = DAT_14ca843c0;
                plVar5 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar5;
              UNLOCK();
            } while (bVar7);
          }
          else {
            do {
              *plVar4 = (longlong)plVar5;
              LOCK();
              bVar7 = plVar5 != DAT_14ca843c8;
              plVar6 = plVar4;
              if (bVar7) {
                plVar5 = DAT_14ca843c8;
                plVar6 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar6;
              UNLOCK();
            } while (bVar7);
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 142f6f856 FUN_142f6f856 body=90 status=ok
// SIG undefined FUN_142f6f856(void)

void FUN_142f6f856(longlong param_1,longlong param_2)

{
  code *pcVar1;
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *(undefined4 *)(param_1 + 0x10);
  uStack_14 = *(undefined4 *)(param_1 + 0x14);
  uStack_10 = *(undefined4 *)(param_1 + 0x18);
  uStack_c = *(undefined4 *)(param_1 + 0x1c);
  pcVar1 = *(code **)(**(longlong **)(param_2 + 0x40) + 0x70);
  if (pcVar1 != (code *)&DAT_144b0dc46) {
    (*pcVar1)(*(longlong **)(param_2 + 0x40),&local_18);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f6f8b2 FUN_142f6f8b2 body=93 status=ok
// SIG undefined FUN_142f6f8b2(void)

void FUN_142f6f8b2(longlong param_1,longlong param_2)

{
  code *pcVar1;
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *(undefined4 *)(param_1 + 0x10);
  uStack_14 = *(undefined4 *)(param_1 + 0x14);
  uStack_10 = *(undefined4 *)(param_1 + 0x18);
  uStack_c = *(undefined4 *)(param_1 + 0x1c);
  pcVar1 = *(code **)(**(longlong **)(param_2 + 0x40) + 0x80);
  if (pcVar1 != (code *)&DAT_144b0dc48) {
    (*pcVar1)(*(longlong **)(param_2 + 0x40),&local_18);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f6f928 FUN_142f6f928 body=481 status=ok
// SIG undefined FUN_142f6f928(void)

void FUN_142f6f928(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_1472be6ea(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f6fb0a FUN_142f6fb0a body=232 status=ok
// SIG undefined FUN_142f6fb0a(void)

void FUN_142f6fb0a(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 142f6fbf2 FUN_142f6fbf2 body=81 status=ok
// SIG undefined FUN_142f6fbf2(void)

void FUN_142f6fbf2(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1472be78d(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142f6fc50 FUN_142f6fc50 body=243 status=ok
// SIG undefined FUN_142f6fc50(void)

longlong * FUN_142f6fc50(longlong *param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145f9dfe0();
  local_30 = 1;
  local_38 = 1;
  (**(code **)(*DAT_14ca83900 + 0x138))(DAT_14ca83900,&local_28,param_2,DAT_14ca3ae18);
  *param_1 = local_28;
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
    if (local_28 != 0) {
      LOCK();
      puVar1 = (uint *)(local_28 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_28 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_28 + 0xd);
          plVar4 = (longlong *)FUN_14001cc68(0x10,8);
          plVar4[1] = local_28;
          plVar6 = DAT_14ca843c0;
          plVar5 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar4 = (longlong)plVar6;
              LOCK();
              bVar7 = plVar6 != DAT_14ca843c0;
              plVar5 = plVar4;
              if (bVar7) {
                plVar6 = DAT_14ca843c0;
                plVar5 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar5;
              UNLOCK();
            } while (bVar7);
          }
          else {
            do {
              *plVar4 = (longlong)plVar5;
              LOCK();
              bVar7 = plVar5 != DAT_14ca843c8;
              plVar6 = plVar4;
              if (bVar7) {
                plVar5 = DAT_14ca843c8;
                plVar6 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar6;
              UNLOCK();
            } while (bVar7);
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 142f6fd72 FUN_142f6fd72 body=258 status=ok
// SIG undefined FUN_142f6fd72(void)

undefined8 * FUN_142f6fd72(longlong *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  uint uVar7;
  bool bVar8;
  
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar3 = (uint *)*puVar1;
  if (puVar3 != (uint *)0x0) goto LAB_142f6fda8;
  while( true ) {
    FUN_14472e504(puVar1);
    puVar3 = (uint *)*puVar1;
LAB_142f6fda8:
    puVar6 = (undefined8 *)(*(longlong *)(puVar3 + 0x10) + 7U & 0xfffffffffffffff8);
    uVar7 = puVar3[0x12];
    if (puVar6 + 0x18 <= puVar3 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar3 + 0x10) = puVar3 + 0x4000;
      LOCK();
      uVar2 = *puVar3;
      *puVar3 = *puVar3 + uVar7 + 1;
      UNLOCK();
      if ((uVar2 ^ uVar7) != 0xffffffff) break;
      puVar3 = (uint *)*puVar1;
      *puVar3 = 0xffffffff;
      *(uint **)(puVar3 + 0x10) = puVar3 + 0x16;
      puVar3[0x12] = 0;
      *puVar1 = puVar3;
      puVar6 = (undefined8 *)((longlong)puVar3 + 0x5fU & 0xfffffffffffffff8);
      uVar7 = 0;
      if (puVar6 + 0x18 <= puVar3 + 0x4000) {
        uVar7 = 1;
        goto LAB_142f6fe24;
      }
    }
  }
  uVar7 = uVar7 + 1;
LAB_142f6fe24:
  *(undefined8 **)(puVar3 + 0x10) = puVar6 + 0x19;
  puVar3[0x12] = uVar7;
  *(int *)(puVar6 + -1) = ((int)puVar6 + -8) - (int)puVar3;
  *(undefined4 *)((longlong)puVar6 + -4) = 0xc0;
  puVar6[1] = 0;
  *puVar6 = &PTR_FUN_14a2dba00;
  lVar4 = *param_1;
  do {
    puVar6[1] = lVar4;
    LOCK();
    lVar5 = *param_1;
    bVar8 = lVar4 == lVar5;
    if (bVar8) {
      *param_1 = (longlong)puVar6;
      lVar5 = lVar4;
    }
    UNLOCK();
    lVar4 = lVar5;
  } while (!bVar8);
  return puVar6 + 2;
}



// FUNCTION 142f6fe74 FUN_142f6fe74 body=249 status=ok
// SIG undefined FUN_142f6fe74(void)

undefined8 * FUN_142f6fe74(longlong *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  uint uVar7;
  bool bVar8;
  
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar3 = (uint *)*puVar1;
  if (puVar3 != (uint *)0x0) goto LAB_142f6feaa;
  while( true ) {
    FUN_14472e504(puVar1);
    puVar3 = (uint *)*puVar1;
LAB_142f6feaa:
    puVar6 = (undefined8 *)(*(longlong *)(puVar3 + 0x10) + 7U & 0xfffffffffffffff8);
    uVar7 = puVar3[0x12];
    if (puVar6 + 5 <= puVar3 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar3 + 0x10) = puVar3 + 0x4000;
      LOCK();
      uVar2 = *puVar3;
      *puVar3 = *puVar3 + uVar7 + 1;
      UNLOCK();
      if ((uVar2 ^ uVar7) != 0xffffffff) break;
      puVar3 = (uint *)*puVar1;
      *puVar3 = 0xffffffff;
      *(uint **)(puVar3 + 0x10) = puVar3 + 0x16;
      puVar3[0x12] = 0;
      *puVar1 = puVar3;
      puVar6 = (undefined8 *)((longlong)puVar3 + 0x5fU & 0xfffffffffffffff8);
      uVar7 = 0;
      if (puVar6 + 5 <= puVar3 + 0x4000) {
        uVar7 = 1;
        goto LAB_142f6ff20;
      }
    }
  }
  uVar7 = uVar7 + 1;
LAB_142f6ff20:
  *(undefined8 **)(puVar3 + 0x10) = puVar6 + 6;
  puVar3[0x12] = uVar7;
  *(int *)(puVar6 + -1) = ((int)puVar6 + -8) - (int)puVar3;
  *(undefined4 *)((longlong)puVar6 + -4) = 0x28;
  puVar6[1] = 0;
  *puVar6 = &PTR_FUN_14a2dba08;
  lVar4 = *param_1;
  do {
    puVar6[1] = lVar4;
    LOCK();
    lVar5 = *param_1;
    bVar8 = lVar4 == lVar5;
    if (bVar8) {
      *param_1 = (longlong)puVar6;
      lVar5 = lVar4;
    }
    UNLOCK();
    lVar4 = lVar5;
  } while (!bVar8);
  return puVar6 + 2;
}



// FUNCTION 142f6ff6e FUN_142f6ff6e body=450 status=ok
// SIG undefined FUN_142f6ff6e(void)

void FUN_142f6ff6e(undefined8 *param_1,uint param_2)

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
  
  uVar3 = (ulonglong)param_2;
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar3,8);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_142f70089:
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
LAB_142f700c6:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 8;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_142f6ffc4;
LAB_142f6ffb9:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_142f6ffc4:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0x1ff5) goto code_r0x000142f6fff0;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 2 + 0x18;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_142f70046:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_142f700c6;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_142f70089;
code_r0x000142f6fff0:
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
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_142f70046;
    }
  }
  goto LAB_142f6ffb9;
}



// FUNCTION 142f70130 FUN_142f70130 body=249 status=ok
// SIG undefined FUN_142f70130(void)

undefined8 * FUN_142f70130(longlong *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  uint uVar7;
  bool bVar8;
  
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar3 = (uint *)*puVar1;
  if (puVar3 != (uint *)0x0) goto LAB_142f70166;
  while( true ) {
    FUN_14472e504(puVar1);
    puVar3 = (uint *)*puVar1;
LAB_142f70166:
    puVar6 = (undefined8 *)(*(longlong *)(puVar3 + 0x10) + 7U & 0xfffffffffffffff8);
    uVar7 = puVar3[0x12];
    if (puVar6 + 4 <= puVar3 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar3 + 0x10) = puVar3 + 0x4000;
      LOCK();
      uVar2 = *puVar3;
      *puVar3 = *puVar3 + uVar7 + 1;
      UNLOCK();
      if ((uVar2 ^ uVar7) != 0xffffffff) break;
      puVar3 = (uint *)*puVar1;
      *puVar3 = 0xffffffff;
      *(uint **)(puVar3 + 0x10) = puVar3 + 0x16;
      puVar3[0x12] = 0;
      *puVar1 = puVar3;
      puVar6 = (undefined8 *)((longlong)puVar3 + 0x5fU & 0xfffffffffffffff8);
      uVar7 = 0;
      if (puVar6 + 4 <= puVar3 + 0x4000) {
        uVar7 = 1;
        goto LAB_142f701dc;
      }
    }
  }
  uVar7 = uVar7 + 1;
LAB_142f701dc:
  *(undefined8 **)(puVar3 + 0x10) = puVar6 + 5;
  puVar3[0x12] = uVar7;
  *(int *)(puVar6 + -1) = ((int)puVar6 + -8) - (int)puVar3;
  *(undefined4 *)((longlong)puVar6 + -4) = 0x20;
  puVar6[1] = 0;
  *puVar6 = &PTR_FUN_14a2dba10;
  lVar4 = *param_1;
  do {
    puVar6[1] = lVar4;
    LOCK();
    lVar5 = *param_1;
    bVar8 = lVar4 == lVar5;
    if (bVar8) {
      *param_1 = (longlong)puVar6;
      lVar5 = lVar4;
    }
    UNLOCK();
    lVar4 = lVar5;
  } while (!bVar8);
  return puVar6 + 2;
}



// FUNCTION 142f7022a FUN_142f7022a body=450 status=ok
// SIG undefined FUN_142f7022a(void)

void FUN_142f7022a(undefined8 *param_1,uint param_2)

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
  
  uVar3 = (ulonglong)param_2;
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar3,8);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_142f70345:
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
LAB_142f70382:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 8;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_142f70280;
LAB_142f70275:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_142f70280:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0x1ff5) goto code_r0x000142f702ac;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 2 + 0x18;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_142f70302:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_142f70382;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_142f70345;
code_r0x000142f702ac:
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
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_142f70302;
    }
  }
  goto LAB_142f70275;
}



// FUNCTION 142f703ec FUN_142f703ec body=547 status=ok
// SIG undefined FUN_142f703ec(void)

longlong * FUN_142f703ec(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  longlong *lpTlsValue;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
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
      lVar5 = lpTlsValue[1];
    }
    else {
      lVar5 = *lpTlsValue;
      if (lVar5 != 0) {
        uVar2 = FUN_14493c560();
        if (uVar2 == 0) {
          uVar3 = 0;
          uVar7 = 0;
          lVar6 = 0;
        }
        else {
          uVar7 = (ulonglong)(uVar2 >> 0xe);
          uVar3 = uVar2 & 0x3fff;
          lVar6 = (ulonglong)(uVar3 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar7 * 8);
        }
        *(longlong *)(lVar6 + 8) = lVar5;
        do {
          uVar1 = DAT_14c896180;
          uVar4 = (DAT_14c896180 & 0xfffffffffc000000) + 0x4000000;
          if (uVar4 >> 0x1a < DAT_14c896180 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          if (uVar2 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = *(longlong *)(&DAT_14c833b00 + uVar7 * 8) + (ulonglong)(uVar3 * 0x18);
          }
          *(uint *)(lVar5 + 0x10) = (uint)uVar1 & 0x3ffffff;
          LOCK();
          bVar8 = uVar1 != DAT_14c896180;
          uVar1 = uVar4 | uVar2;
          if (bVar8) {
            uVar1 = DAT_14c896180;
          }
          DAT_14c896180 = uVar1;
          UNLOCK();
        } while (bVar8);
      }
      *lpTlsValue = lpTlsValue[1];
      *(undefined4 *)(lpTlsValue + 2) = 0;
      lVar5 = 0;
    }
    *param_1 = lVar5;
    lpTlsValue[1] = (longlong)param_1;
    *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  }
  return param_1;
}



// FUNCTION 142f70610 FUN_142f70610 body=468 status=ok
// SIG undefined FUN_142f70610(void)

void FUN_142f70610(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auStack_d8 [36];
  int local_b4;
  int *local_b0;
  undefined **local_a8;
  undefined ***local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined1 local_84;
  undefined **local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  local_b4 = *piVar1;
  if (local_b4 == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    local_b4 = *piVar1;
  }
  *piVar1 = 0x40000010;
  lVar9 = *(longlong *)(param_1 + 0xa8);
  local_b0 = piVar1;
  if (lVar9 != 0) {
    do {
      uVar3 = *(uint *)(lVar9 + 0x1c00);
      if (uVar3 != 0) {
        uVar8 = 0;
        do {
          puVar2 = (undefined8 *)(lVar9 + uVar8 * 0x38);
          uVar4 = *(uint *)(lVar9 + 0x18 + uVar8 * 0x38);
          if (uVar4 == 0) {
            plVar5 = puVar2 + 4;
            uVar4 = *(uint *)(puVar2 + 5);
          }
          else {
            plVar5 = puVar2 + 2;
          }
          if (0 < (int)uVar4) {
            lVar6 = *plVar5;
            uVar7 = 0;
            do {
              local_68 = puVar2[1];
              local_58 = puVar2[6];
              local_78 = *(undefined4 *)(param_1 + 0xc0);
              uStack_74 = *(undefined4 *)(param_1 + 0xc4);
              uStack_70 = *(undefined4 *)(param_1 + 200);
              uStack_6c = *(undefined4 *)(param_1 + 0xcc);
              local_80 = &PTR_FUN_14a2da920;
              local_60 = (undefined4)uVar7;
              local_50 = 0xffffffffffffffff;
              local_90 = *(undefined8 *)(param_1 + 0xb0);
              local_98 = *(longlong *)(param_1 + 0xb8);
              local_84 = *(undefined1 *)(local_98 + 0x3600);
              local_a8 = &PTR_FUN_14a2da418;
              local_a0 = &local_80;
              local_88 = 3;
              if (local_98 != 0) {
                local_88 = *(undefined4 *)(local_98 + 8);
              }
              FUN_1472b0d56(&local_a8,lVar6,1,*puVar2);
              uVar7 = uVar7 + 1;
              lVar6 = lVar6 + 0xf0;
            } while (uVar4 != uVar7);
            uVar3 = *(uint *)(lVar9 + 0x1c00);
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar3);
      }
      lVar9 = *(longlong *)(lVar9 + 0x1c08);
    } while (lVar9 != 0);
  }
  *local_b0 = local_b4;
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f707e6 FUN_142f707e6 body=110 status=ok
// SIG undefined FUN_142f707e6(void)

undefined8 * FUN_142f707e6(undefined8 *param_1,int param_2)

{
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
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
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142f70854 FUN_142f70854 body=306 status=ok
// SIG undefined FUN_142f70854(void)

void FUN_142f70854(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined4 *)(param_1 + 0x15) = 0;
    if (param_1[0x14] != 0) {
      FUN_1400020a8();
    }
    *(undefined4 *)(param_1 + 0xd) = 0;
    if (*(int *)((longlong)param_1 + 0x6c) != 0) {
      FUN_1447a08a2(param_1 + 0xc,0);
    }
    param_1[0x12] = 0xffffffff;
    *(undefined4 *)(param_1 + 0x11) = 0;
    if (0x80 < *(uint *)((longlong)param_1 + 0x8c)) {
      *(undefined4 *)((longlong)param_1 + 0x8c) = 0x80;
      FUN_1446efbd8(param_1 + 0xe);
    }
    if (param_1[0x10] != 0) {
      FUN_1400020a8();
    }
    if (param_1[0xc] != 0) {
      FUN_1400020a8();
    }
    FUN_1472bffe8(param_1 + 9);
    if (param_1[9] != 0) {
      FUN_1400020a8();
    }
    FUN_1472c0044(param_1 + 6);
    if (param_1[6] != 0) {
      FUN_1400020a8();
    }
    FUN_1472c00a0(param_1 + 3);
    if (param_1[3] != 0) {
      FUN_1400020a8();
    }
    FUN_1472c00a0(param_1);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 0x16;
  }
  return;
}



// FUNCTION 142f70986 FUN_142f70986 body=165 status=ok
// SIG undefined FUN_142f70986(void)

void FUN_142f70986(undefined8 *param_1,int param_2)

{
  do {
    *(undefined4 *)(param_1 + 2) = 0;
    *param_1 = 0;
    param_1[1] = 0;
    FUN_1472c00a0(param_1);
    *(undefined4 *)(param_1 + 5) = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    FUN_1472c00a0(param_1 + 3);
    *(undefined4 *)(param_1 + 8) = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    FUN_1472c0044(param_1 + 6);
    *(undefined4 *)(param_1 + 0xb) = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    FUN_1472bffe8(param_1 + 9);
    param_1[0x10] = 0;
    *(undefined4 *)(param_1 + 0x11) = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *(undefined8 *)((longlong)param_1 + 0x8c) = 0xffffffff00000080;
    *(undefined4 *)((longlong)param_1 + 0x94) = 0;
    param_1[0x14] = 0;
    *(undefined4 *)(param_1 + 0x15) = 0;
    param_1 = param_1 + 0x16;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}



// FUNCTION 142f70a2c FUN_142f70a2c body=260 status=ok
// SIG undefined FUN_142f70a2c(void)

void FUN_142f70a2c(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  if (-1 < (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = (ulonglong)uVar1;
      }
    }
    else {
      uVar3 = uVar3 + (uVar3 * 3 >> 3) + 0x10;
    }
    uVar2 = uVar3 * 0xb0;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0xbb) {
          uVar2 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar2 >> 4]];
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
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar2 / 0xb0)) {
      uVar3 = uVar2 / 0xb0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,0,uVar3,0xb0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar3);
}



// FUNCTION 142f70b30 FUN_142f70b30 body=521 status=ok
// SIG undefined FUN_142f70b30(void)

void FUN_142f70b30(longlong *param_1,longlong *param_2,int param_3,uint param_4)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 auStack_68 [44];
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = param_1[1];
  lVar5 = lVar2 + 0x3138;
  if (*(longlong *)(lVar2 + 0x3148) != 0) {
    lVar5 = *(longlong *)(lVar2 + 0x3148);
  }
  uVar7 = param_4 + 0x1f;
  if (-1 < (int)param_4) {
    uVar7 = param_4;
  }
  if ((*(uint *)(lVar5 + (longlong)((int)uVar7 >> 5) * 4) >> (param_4 & 0x1f) & 1) != 0) {
    lVar8 = (longlong)(int)param_4;
    bVar1 = *(byte *)(*(longlong *)(*param_1 + 0x3408) + lVar8);
    lVar5 = *(longlong *)(*(longlong *)(*param_1 + 0x3330) + lVar8 * 8);
    plVar6 = (longlong *)((longlong)param_3 * 0xb0 + *param_2);
    if (*(char *)(lVar2 + 0x23e8) == '\x01') {
      if (-1 < *(char *)(lVar5 + 0x172)) goto LAB_142f70c60;
    }
    else if ((*(byte *)(lVar5 + 0x173) & 1) != 0) goto LAB_142f70c60;
    if (((((char)param_1[2] != '\x01') || ((*(byte *)(lVar5 + 0x172) & 0x60) != 0)) ||
        ((*(byte *)(*(longlong *)(lVar5 + 8) + 0x72) & 0x20) != 0)) ||
       ((*(byte *)(*(longlong *)(lVar5 + 8) + 0x70) & 8) != 0)) {
      if ((char)bVar1 < '\0') {
        iVar3 = FUN_1472c00fc(plVar6 + 6);
        iVar4 = iVar3 + 0x1fff;
        if (-1 < iVar3) {
          iVar4 = iVar3;
        }
        *(undefined2 *)
         (*(longlong *)(plVar6[6] + (longlong)(iVar4 >> 0xd) * 8) +
         (ulonglong)(uint)(iVar3 % 0x2000) * 2) = *(undefined2 *)(lVar5 + 0x174);
      }
      if ((*(char *)((longlong)param_1 + 0x11) == '\x01') && (*(int *)(lVar5 + 0x178) != -1)) {
        FUN_1447cbafe(plVar6 + 0xc,local_3c,lVar5 + 0x178,0);
      }
      if ((*(byte *)(lVar5 + 0x173) & 0x10) != 0) {
        lVar2 = *(longlong *)(*param_1 + 0x3330);
        iVar3 = FUN_1472c0172(plVar6 + 9);
        iVar4 = iVar3 + 0x7ff;
        if (-1 < iVar3) {
          iVar4 = iVar3;
        }
        *(undefined8 *)
         (*(longlong *)(plVar6[9] + (longlong)(iVar4 >> 0xb) * 8) +
         (ulonglong)(uint)(iVar3 % 0x800) * 8) = *(undefined8 *)(lVar2 + lVar8 * 8);
      }
      if ((bVar1 & 4) == 0) {
        if ((bVar1 & 8) == 0) {
          if ((*(byte *)(*(longlong *)(param_1[1] + 8) + 0x58) & 0x10) == 0) goto LAB_142f70c60;
        }
        else {
          if ((*(byte *)(*(longlong *)(param_1[1] + 8) + 0x53) & 0x40) == 0) goto LAB_142f70c60;
          plVar6 = plVar6 + 3;
        }
        iVar3 = FUN_1472c01e8(plVar6);
        iVar4 = iVar3 + 0xfff;
        if (-1 < iVar3) {
          iVar4 = iVar3;
        }
        *(uint *)(*(longlong *)(*plVar6 + (longlong)(iVar4 >> 0xc) * 8) +
                 (ulonglong)(uint)(iVar3 % 0x1000) * 4) = param_4;
      }
    }
  }
LAB_142f70c60:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142f70d3a FUN_142f70d3a body=125 status=ok
// SIG undefined FUN_142f70d3a(void)

void FUN_142f70d3a(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  undefined8 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar3 = *param_1;
  LOCK();
  piVar1 = (int *)(lVar3 + 0x28);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  if ((iVar2 != -1) && (iVar2 < *(int *)(lVar3 + 0x60))) {
    local_18 = (undefined8 *)*param_1;
    if (local_18 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(local_18 + 1) = *(int *)(local_18 + 1) + 1;
      UNLOCK();
    }
    FUN_142f71662(&local_18);
    if (local_18 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_18 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_18)(local_18,1);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f70db8 FUN_142f70db8 body=939 status=ok
// SIG undefined FUN_142f70db8(void)

ulonglong FUN_142f70db8(longlong *param_1,byte param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  DWORD DVar6;
  DWORD dwTlsIndex;
  DWORD DVar7;
  LPVOID lpTlsValue;
  longlong lVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  bool bVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auStack_108 [38];
  byte local_e2;
  byte local_e1;
  longlong local_e0;
  int local_d4;
  longlong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  longlong local_a0;
  char local_98;
  undefined8 local_90;
  LARGE_INTEGER local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_108;
  dwTlsIndex = DAT_14c7585d0;
  if (DAT_14c7585d0 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar7 = 0xffffffff;
    LOCK();
    bVar14 = DAT_14c7585d0 != 0xffffffff;
    DVar6 = dwTlsIndex;
    if (bVar14) {
      DVar7 = DAT_14c7585d0;
      DVar6 = DAT_14c7585d0;
    }
    DAT_14c7585d0 = DVar6;
    UNLOCK();
    if (bVar14) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar7;
    }
  }
  lpTlsValue = TlsGetValue(dwTlsIndex);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_140036a08(&local_b0);
    FUN_140fddf04(lpTlsValue);
    TlsSetValue(dwTlsIndex,lpTlsValue);
  }
  local_b0 = (undefined8 *)((longlong)lpTlsValue + 0x10);
  local_a8 = *(undefined8 *)((longlong)lpTlsValue + 0x10);
  local_a0 = *(longlong *)((longlong)lpTlsValue + 0x20);
  local_98 = '\0';
  local_90 = *(undefined8 *)((longlong)lpTlsValue + 0x28);
  *(undefined8 ***)((longlong)lpTlsValue + 0x28) = &local_b0;
  *(int *)((longlong)lpTlsValue + 0x30) = *(int *)((longlong)lpTlsValue + 0x30) + 1;
  local_d0 = -0x8000000000000000;
  lVar8 = *param_1;
  if (param_2 == 0) {
    lVar8 = *param_1;
    uVar11 = (ulonglong)*(uint *)(lVar8 + 0x34);
    if (*(int *)(lVar8 + 0x20) + 2 <= (int)*(uint *)(lVar8 + 0x34)) {
      FUN_142f70d3a(param_1);
      lVar8 = *param_1;
    }
    uVar13 = 0;
    if ('\x02' < *(char *)(lVar8 + 0x50)) {
      QueryPerformanceCounter(&local_88);
      auVar17._0_8_ = ((double)local_88.QuadPart * DAT_14c83f420 + 16777216.0) * 10000000.0 + 0.5;
      auVar17._8_8_ = 0;
      auVar17 = roundpd(auVar17,auVar17,1);
      local_d0 = (longlong)auVar17._0_8_;
      if (0 < (int)DAT_14c7585cc) {
        uVar13 = (ulonglong)DAT_14c7585cc;
      }
      auVar15._0_8_ = (double)(int)uVar13 * 10000.0 + 0.5;
      auVar15._8_8_ = 0;
      auVar17 = roundpd(auVar15,auVar15,1);
      local_e0 = (longlong)auVar17._0_8_;
      lVar8 = *param_1;
      local_c0 = CONCAT71((int7)(uVar13 >> 8),1);
      goto LAB_142f70f3e;
    }
  }
  else {
    uVar11 = (ulonglong)*(uint *)(lVar8 + 0x34);
  }
  local_c0 = 0;
  local_e0 = 0;
LAB_142f70f3e:
  iVar2 = *(int *)(lVar8 + 0x2c);
  local_b8 = (ulonglong)*(uint *)(lVar8 + 0x30);
  uVar3 = *(undefined8 *)(lVar8 + 0x38);
  uVar4 = *(undefined8 *)(lVar8 + 0x40);
  local_d4 = (int)uVar11 + -1;
  local_e1 = param_2 ^ 1;
  local_c0 = local_c0 ^ 1;
  local_e2 = param_2;
  local_c8 = uVar11;
  do {
    LOCK();
    piVar1 = (int *)(lVar8 + 0x20);
    iVar9 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if ((int)local_c8 < iVar2) {
      bVar14 = local_d4 <= iVar9;
      if (local_d4 <= iVar9) {
        iVar9 = local_d4;
      }
      if ((local_e1 & bVar14) != 0) goto LAB_142f7108a;
    }
    iVar9 = iVar9 * (int)local_b8;
    iVar12 = iVar9 + (int)local_b8;
    iVar5 = iVar2;
    if (iVar12 < iVar2) {
      iVar5 = iVar12;
    }
    iVar10 = iVar9;
    if (iVar9 < iVar5) {
      do {
        FUN_142f70b30(uVar4,uVar3,(int)param_1[1],iVar10);
        iVar10 = iVar10 + 1;
      } while (iVar5 != iVar10);
    }
    if (iVar9 < iVar2) {
      LOCK();
      piVar1 = (int *)(*param_1 + 0x24);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        uVar11 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
        if (local_e2 == 0) {
          (**(code **)(*(longlong *)**(undefined8 **)(*param_1 + 0x48) + 0x10))();
        }
        goto LAB_142f7108c;
      }
    }
    if (iVar12 < iVar2 && (char)local_c0 == '\0') {
      QueryPerformanceCounter(&local_88);
      auVar16._0_8_ = ((double)local_88.QuadPart * DAT_14c83f420 + 16777216.0) * 10000000.0 + 0.5;
      auVar16._8_8_ = 0;
      auVar17 = roundpd(auVar16,auVar16,1);
      if (local_e0 < (longlong)auVar17._0_8_ - local_d0) {
        *(undefined1 *)((longlong)param_1 + 0xc) = 1;
LAB_142f7108a:
        uVar11 = 0;
LAB_142f7108c:
        if (local_98 == '\0') {
          local_98 = '\x01';
          *(int *)(local_b0 + 4) = *(int *)(local_b0 + 4) + -1;
          if (local_a0 != local_b0[2]) {
            FUN_14004673c();
          }
          *local_b0 = local_a8;
          local_b0[3] = local_90;
        }
        if ((local_80 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        return uVar11 & 0xffffffff;
      }
    }
    else if (iVar2 <= iVar12) goto LAB_142f7108a;
    lVar8 = *param_1;
  } while( true );
}



// FUNCTION 142f71164 FUN_142f71164 body=73 status=ok
// SIG undefined FUN_142f71164(void)

void FUN_142f71164(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    if (*(char *)((longlong)param_1 + 0xc) == '\x01') {
      FUN_142f71662(param_1,(int)param_1[1]);
      puVar2 = (undefined8 *)*param_1;
      if (puVar2 == (undefined8 *)0x0) {
        return;
      }
    }
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142f711a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 142f711ae FUN_142f711ae body=434 status=ok
// SIG undefined FUN_142f711ae(void)

undefined8 * FUN_142f711ae(undefined8 *param_1,int param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  int *piVar3;
  undefined4 uVar4;
  longlong lVar5;
  int *piVar6;
  
  *param_1 = &PTR_FUN_14a2dba40;
  lVar2 = param_1[0xb];
  if ((longlong)*(int *)(param_1 + 0xc) == 0) {
    uVar4 = 0;
  }
  else {
    lVar5 = 0;
    do {
      param_3 = *(longlong *)(lVar2 + 0x40 + lVar5);
      if (param_3 != -1) {
        param_3 = *(longlong *)(lVar2 + 0x40 + lVar5);
      }
      lVar5 = lVar5 + 0x48;
    } while ((longlong)*(int *)(param_1 + 0xc) * 0x48 != lVar5);
    uVar4 = *(undefined4 *)(param_1 + 0xc);
    lVar2 = param_1[0xb];
  }
  FUN_142f71632(lVar2,uVar4,param_3);
  if (param_1[0xb] != 0) {
    piVar6 = (int *)(param_1[0xb] & 0xffffffffffff0000);
    LOCK();
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (*piVar6 == 0) {
      piVar3 = piVar6;
      if (*(longlong *)(piVar6 + 0x10) - (longlong)piVar6 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_142f6f4c4);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        piVar3 = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar6;
        if (piVar3 == (int *)0x0) goto LAB_142f71278;
      }
      _aligned_free(piVar3);
    }
  }
LAB_142f71278:
  *param_1 = &PTR_FUN_149e002e8;
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar6 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (*piVar6 == 0) {
      piVar3 = piVar6;
      if (*(longlong *)(piVar6 + 0x10) - (longlong)piVar6 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_142f6f4c4);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        piVar3 = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar6;
        if (piVar3 == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(piVar3);
    }
  }
  return param_1;
}



// FUNCTION 142f71360 FUN_142f71360 body=53 status=ok
// SIG undefined FUN_142f71360(void)

void FUN_142f71360(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0x40);
  do {
    puVar1[-3] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                 ::TTaskDelegateDummy::vftable;
    puVar1[-2] = 0;
    puVar1[-1] = 0xe800000000000020;
    *puVar1 = 0xffffffffffffffff;
    puVar1 = puVar1 + 9;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}



// FUNCTION 142f71396 FUN_142f71396 body=667 status=ok
// SIG undefined FUN_142f71396(void)

void FUN_142f71396(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *_Src;
  longlong lVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  int *_Memory;
  uint *puVar9;
  int *piVar10;
  void *_Dst;
  
  uVar7 = *(uint *)(param_1 + 1);
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar7) {
      uVar3 = uVar7;
    }
  }
  else {
    uVar3 = (int)((ulonglong)uVar7 * 3 >> 3) + uVar7 + 0x10;
  }
  uVar8 = 0x7fffffff;
  if ((int)uVar7 <= (int)uVar3) {
    uVar8 = (ulonglong)uVar3;
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar8;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar8,0x48);
  }
  uVar8 = uVar8 * 0x48;
  _Src = (void *)*param_1;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308);
  puVar5 = (uint *)*puVar1;
  if (puVar5 != (uint *)0x0) goto LAB_142f71491;
  while( true ) {
    uVar7 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318);
    if ((uVar7 & 1) == 0) {
      *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x318) = uVar7 | 1;
      __tlregdtor(&LAB_142f6f4c4);
    }
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar4 = *(undefined4 **)(lVar2 + 0x310);
    *(undefined8 *)(lVar2 + 0x310) = 0;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = _aligned_malloc(0x10000,0x10000);
    }
    *puVar4 = 0xffffffff;
    *(undefined4 **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    FUN_140217a48(puVar1);
    puVar5 = (uint *)*puVar1;
LAB_142f71491:
    _Dst = (void *)(*(longlong *)(puVar5 + 0x10) + 7U & 0xfffffffffffffff8);
    puVar9 = (uint *)((longlong)_Dst + uVar8);
    uVar7 = puVar5[0x12];
    if (puVar9 <= puVar5 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar5 + 0x10) = puVar5 + 0x4000;
      LOCK();
      uVar3 = *puVar5;
      *puVar5 = *puVar5 + uVar7 + 1;
      UNLOCK();
      if ((uVar3 ^ uVar7) != 0xffffffff) break;
      puVar5 = (uint *)*puVar1;
      *puVar5 = 0xffffffff;
      *(uint **)(puVar5 + 0x10) = puVar5 + 0x16;
      puVar5[0x12] = 0;
      *puVar1 = puVar5;
      _Dst = (void *)((longlong)puVar5 + 0x5fU & 0xfffffffffffffff8);
      puVar9 = (uint *)((longlong)_Dst + uVar8);
      uVar7 = 0;
      if (puVar9 <= puVar5 + 0x4000) {
        uVar7 = 1;
        goto LAB_142f7150b;
      }
    }
  }
  uVar7 = uVar7 + 1;
LAB_142f7150b:
  *(uint **)(puVar5 + 0x10) = puVar9;
  puVar5[0x12] = uVar7;
  uVar6 = ((longlong)_Src + 0xffffU & 0xffffffffffff0000) - (longlong)_Src;
  if (uVar6 == 0 || _Src == (void *)0x0) {
    if (_Src == (void *)0x0) goto LAB_142f715b2;
  }
  else {
    if (uVar6 < uVar8) {
      uVar8 = uVar6;
    }
    memcpy(_Dst,_Src,uVar8);
  }
  piVar10 = (int *)((ulonglong)_Src & 0xffffffffffff0000);
  LOCK();
  *piVar10 = *piVar10 + -1;
  UNLOCK();
  if (*piVar10 == 0) {
    _Memory = piVar10;
    if (*(longlong *)(piVar10 + 0x10) - (longlong)piVar10 == 0x10000) {
      uVar7 = *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
      if ((uVar7 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar7 | 1;
        __tlregdtor(&LAB_142f6f4c4);
      }
      lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      _Memory = *(int **)(lVar2 + 0x310);
      *(int **)(lVar2 + 0x310) = piVar10;
      if (_Memory == (int *)0x0) goto LAB_142f715b2;
    }
    _aligned_free(_Memory);
  }
LAB_142f715b2:
  *param_1 = _Dst;
  return;
}



// FUNCTION 142f71632 FUN_142f71632 body=47 status=ok
// SIG undefined FUN_142f71632(void)

void FUN_142f71632(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x28);
    do {
      (**(code **)(*plVar1 + 0x18))(plVar1,plVar1 + -5);
      plVar1 = plVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 142f71662 FUN_142f71662 body=369 status=ok
// SIG undefined FUN_142f71662(void)

void FUN_142f71662(longlong *param_1,int param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  byte bVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  int local_50;
  undefined1 local_4c;
  undefined8 local_48;
  int local_40;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar2 = (longlong *)(*(longlong *)(*param_1 + 0x58) + (longlong)param_2 * 0x48);
  uVar4 = *(ulonglong *)(*param_1 + 0x18);
  bVar3 = *(byte *)(*param_1 + 0x50);
  uVar6 = (ulonglong)bVar3;
  LOCK();
  plVar2[8] = -1;
  UNLOCK();
  lVar5 = *param_1;
  *param_1 = 0;
  local_4c = 0;
  local_58 = 0;
  local_3c = 0;
  local_50 = param_2;
  local_40 = param_2;
  (**(code **)(plVar2[5] + 0x18))(plVar2 + 5,plVar2);
  plVar2[5] = (longlong)&PTR_FUN_14a2dba50;
  *plVar2 = lVar5;
  local_48 = 0;
  *(undefined1 *)((longlong)plVar2 + 0xc) = local_4c;
  *(int *)(plVar2 + 1) = local_50;
  FUN_142f71164(&local_48);
  lVar5 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8);
  if (lVar5 == 0) {
    uVar6 = 1;
    if (bVar3 != 6) {
      uVar6 = (ulonglong)bVar3;
    }
    lVar5 = 0;
  }
  else {
    if (bVar3 == 6) {
      uVar6 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
    }
    lVar5 = *(longlong *)(lVar5 + 0x30);
  }
  plVar2[6] = lVar5;
  plVar2[7] = uVar6 << 0x3b | (uVar4 & 0x1fffffffffffff) << 6 | 0xc000000000000000;
  FUN_142f71164(&local_58);
  LOCK();
  puVar1 = (ulonglong *)(plVar2 + 7);
  uVar4 = *puVar1;
  *puVar1 = *puVar1 | 2;
  UNLOCK();
  if ((uVar4 >> 1 & 1) != 0) {
    if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
}



// FUNCTION 142f717f2 FUN_142f717f2 body=450 status=ok
// SIG undefined FUN_142f717f2(void)

void FUN_142f717f2(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  uint param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  uint *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint *puVar8;
  
  if (((ulonglong)param_3 & 7) == 0 && 0xf < param_5) {
    *param_2 = &PTR_FUN_14a2dba50;
    puVar6 = param_3;
  }
  else {
    *param_2 = &PTR_LAB_14a2dba90;
    puVar1 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x330
             );
    puVar5 = (uint *)*puVar1;
    if (puVar5 != (uint *)0x0) goto LAB_142f718cf;
    while( true ) {
      uVar7 = *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
      if ((uVar7 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar7 | 1;
        __tlregdtor(&LAB_142f6f4c4);
      }
      lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar4 = *(undefined4 **)(lVar3 + 0x310);
      *(undefined8 *)(lVar3 + 0x310) = 0;
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar4 = 0xffffffff;
      *(undefined4 **)(puVar4 + 0x10) = puVar4 + 0x16;
      puVar4[0x12] = 0;
      *puVar1 = puVar4;
      FUN_1467aa772(puVar1);
      puVar5 = (uint *)*puVar1;
LAB_142f718cf:
      puVar6 = (undefined8 *)(*(longlong *)(puVar5 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar8 = (uint *)(puVar6 + 2);
      uVar7 = puVar5[0x12];
      if (puVar8 <= puVar5 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar5 + 0x10) = puVar5 + 0x4000;
        LOCK();
        uVar2 = *puVar5;
        *puVar5 = *puVar5 + uVar7 + 1;
        UNLOCK();
        if ((uVar2 ^ uVar7) != 0xffffffff) break;
        puVar5 = (uint *)*puVar1;
        *puVar5 = 0xffffffff;
        *(uint **)(puVar5 + 0x10) = puVar5 + 0x16;
        puVar5[0x12] = 0;
        *puVar1 = puVar5;
        puVar6 = (undefined8 *)((longlong)puVar5 + 0x5fU & 0xfffffffffffffff8);
        puVar8 = (uint *)(puVar6 + 2);
        uVar7 = 0;
        if (puVar8 <= puVar5 + 0x4000) {
          uVar7 = 1;
          goto LAB_142f71949;
        }
      }
    }
    uVar7 = uVar7 + 1;
LAB_142f71949:
    *(uint **)(puVar5 + 0x10) = puVar8;
    puVar5[0x12] = uVar7;
    *param_3 = puVar6;
  }
  *puVar6 = *param_4;
  *param_4 = 0;
  *(undefined1 *)((longlong)puVar6 + 0xc) = *(undefined1 *)((longlong)param_4 + 0xc);
  *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(param_4 + 1);
  *param_1 = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
             TTaskDelegateDummy::vftable;
  return;
}



// FUNCTION 142f719b4 FUN_142f719b4 body=26 status=ok
// SIG undefined FUN_142f719b4(void)

undefined8 FUN_142f719b4(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 != '\0') {
    FUN_142f70db8(param_2,0);
  }
  return 0;
}



// FUNCTION 142f719ce FUN_142f719ce body=72 status=ok
// SIG undefined FUN_142f719ce(void)

undefined8
FUN_142f719ce(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4,char param_5
             )

{
  if (param_5 != '\0') {
    FUN_142f70db8(param_3,0);
  }
  FUN_142f717f2(param_1,param_2 + 0x28,param_2,param_3,param_4);
  return 0;
}



// FUNCTION 142f71a48 FUN_142f71a48 body=26 status=ok
// SIG undefined FUN_142f71a48(void)

undefined8 FUN_142f71a48(undefined8 param_1,undefined8 *param_2,char param_3)

{
  if (param_3 != '\0') {
    FUN_142f70db8(*param_2,0);
  }
  return 0;
}



// FUNCTION 142f71a62 FUN_142f71a62 body=70 status=ok
// SIG undefined FUN_142f71a62(void)

undefined8
FUN_142f71a62(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             char param_5)

{
  if (param_5 != '\0') {
    FUN_142f70db8(*param_3,0);
  }
  param_2[5] = &PTR_LAB_14a2dba90;
  *param_2 = *param_3;
  *param_1 = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
             TTaskDelegateDummy::vftable;
  return 0;
}



// FUNCTION 142f71aa8 FUN_142f71aa8 body=179 status=ok
// SIG undefined FUN_142f71aa8(void)

void FUN_142f71aa8(undefined8 param_1,ulonglong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  int *_Memory;
  int *piVar4;
  
  uVar2 = *param_2;
  FUN_142f71164(uVar2);
  if (uVar2 != 0) {
    piVar4 = (int *)(uVar2 & 0xffffffffffff0000);
    LOCK();
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (*piVar4 == 0) {
      _Memory = piVar4;
      if (*(longlong *)(piVar4 + 0x10) - (longlong)piVar4 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_142f6f4c4);
        }
        lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar3 + 0x310);
        *(int **)(lVar3 + 0x310) = piVar4;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x000142f71b23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      _aligned_free(_Memory);
      return;
    }
  }
  return;
}



// FUNCTION 142f71b6a FUN_142f71b6a body=105 status=ok
// SIG undefined FUN_142f71b6a(void)

void FUN_142f71b6a(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      FUN_1472c025e(plVar1 + 3);
      if (plVar1[3] != 0) {
        FUN_1400020a8();
      }
      FUN_1472c02ba(plVar1);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      FUN_1472c02ba(plVar1 + -3);
      if (plVar1[-3] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 142f71bd4 FUN_142f71bd4 body=264 status=ok
// SIG undefined FUN_142f71bd4(void)

void FUN_142f71bd4(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar2 = (ulonglong)uVar1;
  if (-1 < (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = (ulonglong)uVar1;
      }
    }
    else {
      uVar2 = uVar2 + (uVar2 * 3 >> 3) + 0x10;
    }
    uVar3 = uVar2 * 0x60;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x156) {
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
    uVar2 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 / 0x60)) {
      uVar2 = uVar3 / 0x60 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,0,uVar2,0x60,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar2);
}



// FUNCTION 142f71cdc FUN_142f71cdc body=1061 status=ok
// SIG undefined FUN_142f71cdc(void)

void FUN_142f71cdc(longlong *param_1,longlong *param_2,int param_3,int param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong *plVar17;
  byte bVar18;
  byte bVar19;
  longlong lVar20;
  undefined1 auStack_d8 [32];
  float local_b8;
  undefined4 local_b0;
  undefined4 *local_a8;
  undefined1 local_a0;
  float local_98;
  undefined1 local_90;
  uint local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  ushort local_52;
  undefined4 local_50;
  byte local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar6 = *param_1;
  iVar5 = *(int *)(*(longlong *)param_1[3] + (longlong)param_4 * 4);
  lVar20 = (longlong)iVar5;
  bVar19 = *(byte *)(*(longlong *)(lVar6 + 0x3408) + lVar20);
  plVar7 = *(longlong **)(*(longlong *)(lVar6 + 0x3358) + lVar20 * 8);
  lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x3330) + lVar20 * 8);
  plVar17 = (longlong *)((longlong)param_3 * 0x60 + *param_2);
  if ((DAT_14caff4f8 == '\0') || ((*(byte *)((longlong)plVar7 + 0x74) & 8) == 0)) {
    uVar15 = 0;
  }
  else {
    iVar11 = FUN_1472c0316(plVar17 + 6);
    iVar14 = iVar11 + 0x7ff;
    if (-1 < iVar11) {
      iVar14 = iVar11;
    }
    lVar20 = *(longlong *)(plVar17[6] + (longlong)(iVar14 >> 0xb) * 8);
    *(longlong *)(lVar20 + (ulonglong)(uint)(iVar11 % 0x800) * 8) = lVar6;
    uVar15 = CONCAT71((int7)((ulonglong)lVar20 >> 8),1);
  }
  local_49 = 0;
  if ((bVar19 & 0x20) != 0) {
    local_7c = (uint)uVar15;
    iVar14 = iVar5 + 0x3ff;
    if (-1 < iVar5) {
      iVar14 = iVar5;
    }
    lVar20 = **(longlong **)(*(longlong *)(*param_1 + 0x3368) + (longlong)(iVar14 >> 10) * 8);
    lVar12 = (longlong)(iVar5 % 0x400);
    local_a0 = (**(code **)(*plVar7 + 0x1f8))(plVar7);
    local_a8 = &local_50;
    local_50 = 0;
    local_98 = *(float *)(param_1 + 2) * *(float *)(param_1[1] + 0x23c8);
    local_b8 = (float)*(double *)(lVar20 + 0x30 + lVar12 * 0x48);
    local_b0 = *(undefined4 *)((longlong)param_1 + 0x14);
    local_78 = *(undefined8 *)(lVar20 + lVar12 * 0x48);
    local_70 = *(undefined8 *)(lVar20 + 8 + lVar12 * 0x48);
    local_68 = *(undefined8 *)(lVar20 + 0x10 + lVar12 * 0x48);
    local_60 = 0x3ff0000000000000;
    local_90 = 1;
    FUN_1436a1bdd(&local_52,lVar6 + 0x30);
    uVar15 = (ulonglong)local_7c;
    local_49 = (byte)(local_52 >> 7) & 0x7f;
  }
  if ((bVar19 & 0x10) == 0) {
    if ((bVar19 & 4) == 0) {
      lVar20 = FUN_1472aa51e(lVar6,&local_49);
      bVar19 = local_49;
      if (lVar20 != 0) {
        uVar16 = (uint)(char)local_49;
        if (uVar16 < *(uint *)(lVar6 + 0x188)) {
          iVar11 = FUN_1472c038c(plVar17);
          iVar14 = iVar11 + 0xff;
          if (-1 < iVar11) {
            iVar14 = iVar11;
          }
          lVar12 = *(longlong *)(*plVar17 + (longlong)(iVar14 >> 8) * 8);
          lVar13 = (ulonglong)(uint)(iVar11 % 0x100) * 0x40;
          puVar1 = (undefined8 *)(lVar12 + 0x10 + lVar13);
          *puVar1 = 0;
          puVar1[1] = 0;
          puVar1 = (undefined8 *)(lVar12 + 0x20 + lVar13);
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined8 *)(lVar12 + lVar13) = 0;
          ((undefined8 *)(lVar12 + lVar13))[1] = 0;
          *(undefined2 *)(lVar12 + 0x11 + lVar13) = 0x193;
          *(undefined8 *)(lVar12 + 0x18 + lVar13) = 0xffffffffffffffff;
          *(undefined1 *)(lVar12 + 0x20 + lVar13) = 0xff;
          puVar2 = (undefined4 *)(lVar12 + 0x30 + lVar13);
          *puVar2 = 0xffffffff;
          puVar2[1] = 0xffffffff;
          puVar2[2] = 0xffffffff;
          puVar2[3] = 0xffffffff;
          *(int *)(lVar12 + 0x18 + lVar13) = iVar5;
          *(undefined4 *)(lVar12 + 0x1c + lVar13) = *(undefined4 *)(lVar6 + 0x15c);
          *(byte *)(lVar12 + 0x20 + lVar13) = bVar19;
          *(longlong *)(lVar12 + lVar13) = lVar20;
          puVar2 = (undefined4 *)(*(longlong *)(lVar6 + 0x180) + (longlong)(int)uVar16 * 0x30);
          uVar8 = puVar2[1];
          uVar9 = puVar2[2];
          uVar10 = puVar2[3];
          puVar3 = (undefined4 *)(lVar12 + 8 + lVar13);
          *puVar3 = *puVar2;
          puVar3[1] = uVar8;
          puVar3[2] = uVar9;
          puVar3[3] = uVar10;
        }
      }
    }
  }
  else if ((((byte)uVar15 & *(longlong *)(lVar6 + 400) == 0) == 0) &&
          (((DAT_14ca385c8 == 0 || (-1 < *(char *)(lVar6 + 0x173))) &&
           (lVar20 = *(longlong *)(lVar6 + 0x180), *(longlong *)(lVar20 + 0x28) != 0)))) {
    iVar11 = FUN_1472c038c(plVar17 + 3);
    iVar14 = iVar11 + 0xff;
    if (-1 < iVar11) {
      iVar14 = iVar11;
    }
    lVar12 = *(longlong *)(plVar17[3] + (longlong)(iVar14 >> 8) * 8);
    lVar13 = (ulonglong)(uint)(iVar11 % 0x100) * 0x40;
    puVar1 = (undefined8 *)(lVar12 + 0x10 + lVar13);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar12 + 0x20 + lVar13);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)(lVar12 + lVar13) = 0;
    ((undefined8 *)(lVar12 + lVar13))[1] = 0;
    *(undefined2 *)(lVar12 + 0x11 + lVar13) = 0x193;
    *(undefined8 *)(lVar12 + 0x18 + lVar13) = 0xffffffffffffffff;
    *(undefined1 *)(lVar12 + 0x20 + lVar13) = 0xff;
    puVar2 = (undefined4 *)(lVar12 + 0x30 + lVar13);
    *puVar2 = 0xffffffff;
    puVar2[1] = 0xffffffff;
    puVar2[2] = 0xffffffff;
    puVar2[3] = 0xffffffff;
    *(int *)(lVar12 + 0x18 + lVar13) = iVar5;
    *(undefined4 *)(lVar12 + 0x1c + lVar13) = *(undefined4 *)(lVar6 + 0x15c);
    *(undefined8 *)(lVar12 + lVar13) = *(undefined8 *)(lVar6 + 0x230);
    *(longlong *)(lVar12 + 0x28 + lVar13) = lVar6 + 400;
    bVar19 = *(byte *)(lVar6 + 0x173);
    bVar18 = bVar19 >> 3 & 8;
    *(byte *)(lVar12 + 0x11 + lVar13) = bVar18 + 0x93;
    bVar4 = *(byte *)(lVar6 + 0x173);
    *(byte *)(lVar12 + 0x11 + lVar13) = bVar4 >> 3 & 0x10 | bVar18 | 0x83;
    bVar19 = DAT_14ca385c8 == 0 & bVar19 >> 6;
    *(int *)(lVar12 + 0x30 + lVar13) = (int)plVar17[9];
    *(undefined4 *)(lVar12 + 0x34 + lVar13) = *(undefined4 *)((longlong)plVar17 + 0x4c);
    *(int *)(lVar12 + 0x3c + lVar13) = (int)plVar17[0xb];
    if (-1 < (char)bVar4) {
      *(int *)(plVar17 + 9) = (int)plVar17[9] + 1;
    }
    if (bVar19 != 0) {
      *(int *)((longlong)plVar17 + 0x4c) = *(int *)((longlong)plVar17 + 0x4c) + 1;
    }
    *(int *)(plVar17 + 10) =
         (int)plVar17[10] + (*(int *)(lVar20 + 0x20) << (-1 < (char)bVar4 & bVar19));
    iVar5 = *(int *)((longlong)plVar17 + 0x54);
    *(int *)(lVar12 + lVar13 + 0x38) = iVar5;
    *(uint *)((longlong)plVar17 + 0x54) = (*(uint *)(*(longlong *)(lVar20 + 0x28) + 8) >> 1) + iVar5
    ;
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f72102 FUN_142f72102 body=125 status=ok
// SIG undefined FUN_142f72102(void)

void FUN_142f72102(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  undefined8 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar3 = *param_1;
  LOCK();
  piVar1 = (int *)(lVar3 + 0x28);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  if ((iVar2 != -1) && (iVar2 < *(int *)(lVar3 + 0x60))) {
    local_18 = (undefined8 *)*param_1;
    if (local_18 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(local_18 + 1) = *(int *)(local_18 + 1) + 1;
      UNLOCK();
    }
    FUN_142f72a2a(&local_18);
    if (local_18 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_18 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_18)(local_18,1);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f72180 FUN_142f72180 body=939 status=ok
// SIG undefined FUN_142f72180(void)

ulonglong FUN_142f72180(longlong *param_1,byte param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  DWORD DVar6;
  DWORD dwTlsIndex;
  DWORD DVar7;
  LPVOID lpTlsValue;
  longlong lVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  bool bVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auStack_108 [38];
  byte local_e2;
  byte local_e1;
  longlong local_e0;
  int local_d4;
  longlong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  longlong local_a0;
  char local_98;
  undefined8 local_90;
  LARGE_INTEGER local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_108;
  dwTlsIndex = DAT_14c7585d0;
  if (DAT_14c7585d0 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar7 = 0xffffffff;
    LOCK();
    bVar14 = DAT_14c7585d0 != 0xffffffff;
    DVar6 = dwTlsIndex;
    if (bVar14) {
      DVar7 = DAT_14c7585d0;
      DVar6 = DAT_14c7585d0;
    }
    DAT_14c7585d0 = DVar6;
    UNLOCK();
    if (bVar14) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar7;
    }
  }
  lpTlsValue = TlsGetValue(dwTlsIndex);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_140036a08(&local_b0);
    FUN_140fddf04(lpTlsValue);
    TlsSetValue(dwTlsIndex,lpTlsValue);
  }
  local_b0 = (undefined8 *)((longlong)lpTlsValue + 0x10);
  local_a8 = *(undefined8 *)((longlong)lpTlsValue + 0x10);
  local_a0 = *(longlong *)((longlong)lpTlsValue + 0x20);
  local_98 = '\0';
  local_90 = *(undefined8 *)((longlong)lpTlsValue + 0x28);
  *(undefined8 ***)((longlong)lpTlsValue + 0x28) = &local_b0;
  *(int *)((longlong)lpTlsValue + 0x30) = *(int *)((longlong)lpTlsValue + 0x30) + 1;
  local_d0 = -0x8000000000000000;
  lVar8 = *param_1;
  if (param_2 == 0) {
    lVar8 = *param_1;
    uVar11 = (ulonglong)*(uint *)(lVar8 + 0x34);
    if (*(int *)(lVar8 + 0x20) + 2 <= (int)*(uint *)(lVar8 + 0x34)) {
      FUN_142f72102(param_1);
      lVar8 = *param_1;
    }
    uVar13 = 0;
    if ('\x02' < *(char *)(lVar8 + 0x50)) {
      QueryPerformanceCounter(&local_88);
      auVar17._0_8_ = ((double)local_88.QuadPart * DAT_14c83f420 + 16777216.0) * 10000000.0 + 0.5;
      auVar17._8_8_ = 0;
      auVar17 = roundpd(auVar17,auVar17,1);
      local_d0 = (longlong)auVar17._0_8_;
      if (0 < (int)DAT_14c7585cc) {
        uVar13 = (ulonglong)DAT_14c7585cc;
      }
      auVar15._0_8_ = (double)(int)uVar13 * 10000.0 + 0.5;
      auVar15._8_8_ = 0;
      auVar17 = roundpd(auVar15,auVar15,1);
      local_e0 = (longlong)auVar17._0_8_;
      lVar8 = *param_1;
      local_c0 = CONCAT71((int7)(uVar13 >> 8),1);
      goto LAB_142f72306;
    }
  }
  else {
    uVar11 = (ulonglong)*(uint *)(lVar8 + 0x34);
  }
  local_c0 = 0;
  local_e0 = 0;
LAB_142f72306:
  iVar2 = *(int *)(lVar8 + 0x2c);
  local_b8 = (ulonglong)*(uint *)(lVar8 + 0x30);
  uVar3 = *(undefined8 *)(lVar8 + 0x38);
  uVar4 = *(undefined8 *)(lVar8 + 0x40);
  local_d4 = (int)uVar11 + -1;
  local_e1 = param_2 ^ 1;
  local_c0 = local_c0 ^ 1;
  local_e2 = param_2;
  local_c8 = uVar11;
  do {
    LOCK();
    piVar1 = (int *)(lVar8 + 0x20);
    iVar9 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if ((int)local_c8 < iVar2) {
      bVar14 = local_d4 <= iVar9;
      if (local_d4 <= iVar9) {
        iVar9 = local_d4;
      }
      if ((local_e1 & bVar14) != 0) goto LAB_142f72452;
    }
    iVar9 = iVar9 * (int)local_b8;
    iVar12 = iVar9 + (int)local_b8;
    iVar5 = iVar2;
    if (iVar12 < iVar2) {
      iVar5 = iVar12;
    }
    iVar10 = iVar9;
    if (iVar9 < iVar5) {
      do {
        FUN_142f71cdc(uVar4,uVar3,(int)param_1[1],iVar10);
        iVar10 = iVar10 + 1;
      } while (iVar5 != iVar10);
    }
    if (iVar9 < iVar2) {
      LOCK();
      piVar1 = (int *)(*param_1 + 0x24);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        uVar11 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
        if (local_e2 == 0) {
          (**(code **)(*(longlong *)**(undefined8 **)(*param_1 + 0x48) + 0x10))();
        }
        goto LAB_142f72454;
      }
    }
    if (iVar12 < iVar2 && (char)local_c0 == '\0') {
      QueryPerformanceCounter(&local_88);
      auVar16._0_8_ = ((double)local_88.QuadPart * DAT_14c83f420 + 16777216.0) * 10000000.0 + 0.5;
      auVar16._8_8_ = 0;
      auVar17 = roundpd(auVar16,auVar16,1);
      if (local_e0 < (longlong)auVar17._0_8_ - local_d0) {
        *(undefined1 *)((longlong)param_1 + 0xc) = 1;
LAB_142f72452:
        uVar11 = 0;
LAB_142f72454:
        if (local_98 == '\0') {
          local_98 = '\x01';
          *(int *)(local_b0 + 4) = *(int *)(local_b0 + 4) + -1;
          if (local_a0 != local_b0[2]) {
            FUN_14004673c();
          }
          *local_b0 = local_a8;
          local_b0[3] = local_90;
        }
        if ((local_80 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        return uVar11 & 0xffffffff;
      }
    }
    else if (iVar2 <= iVar12) goto LAB_142f72452;
    lVar8 = *param_1;
  } while( true );
}



// FUNCTION 142f7252c FUN_142f7252c body=73 status=ok
// SIG undefined FUN_142f7252c(void)

void FUN_142f7252c(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    if (*(char *)((longlong)param_1 + 0xc) == '\x01') {
      FUN_142f72a2a(param_1,(int)param_1[1]);
      puVar2 = (undefined8 *)*param_1;
      if (puVar2 == (undefined8 *)0x0) {
        return;
      }
    }
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142f7256b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 142f72576 FUN_142f72576 body=434 status=ok
// SIG undefined FUN_142f72576(void)

undefined8 * FUN_142f72576(undefined8 *param_1,int param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  int *piVar3;
  undefined4 uVar4;
  longlong lVar5;
  int *piVar6;
  
  *param_1 = &PTR_FUN_14a2dbac8;
  lVar2 = param_1[0xb];
  if ((longlong)*(int *)(param_1 + 0xc) == 0) {
    uVar4 = 0;
  }
  else {
    lVar5 = 0;
    do {
      param_3 = *(longlong *)(lVar2 + 0x40 + lVar5);
      if (param_3 != -1) {
        param_3 = *(longlong *)(lVar2 + 0x40 + lVar5);
      }
      lVar5 = lVar5 + 0x48;
    } while ((longlong)*(int *)(param_1 + 0xc) * 0x48 != lVar5);
    uVar4 = *(undefined4 *)(param_1 + 0xc);
    lVar2 = param_1[0xb];
  }
  FUN_142f729fa(lVar2,uVar4,param_3);
  if (param_1[0xb] != 0) {
    piVar6 = (int *)(param_1[0xb] & 0xffffffffffff0000);
    LOCK();
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (*piVar6 == 0) {
      piVar3 = piVar6;
      if (*(longlong *)(piVar6 + 0x10) - (longlong)piVar6 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_142f6f4c4);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        piVar3 = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar6;
        if (piVar3 == (int *)0x0) goto LAB_142f72640;
      }
      _aligned_free(piVar3);
    }
  }
LAB_142f72640:
  *param_1 = &PTR_FUN_149e002e8;
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar6 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (*piVar6 == 0) {
      piVar3 = piVar6;
      if (*(longlong *)(piVar6 + 0x10) - (longlong)piVar6 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_142f6f4c4);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        piVar3 = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar6;
        if (piVar3 == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(piVar3);
    }
  }
  return param_1;
}



// FUNCTION 142f72728 FUN_142f72728 body=53 status=ok
// SIG undefined FUN_142f72728(void)

void FUN_142f72728(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0x40);
  do {
    puVar1[-3] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                 ::TTaskDelegateDummy::vftable;
    puVar1[-2] = 0;
    puVar1[-1] = 0xe800000000000020;
    *puVar1 = 0xffffffffffffffff;
    puVar1 = puVar1 + 9;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}



// FUNCTION 142f7275e FUN_142f7275e body=667 status=ok
// SIG undefined FUN_142f7275e(void)

void FUN_142f7275e(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *_Src;
  longlong lVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  int *_Memory;
  uint *puVar9;
  int *piVar10;
  void *_Dst;
  
  uVar7 = *(uint *)(param_1 + 1);
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar7) {
      uVar3 = uVar7;
    }
  }
  else {
    uVar3 = (int)((ulonglong)uVar7 * 3 >> 3) + uVar7 + 0x10;
  }
  uVar8 = 0x7fffffff;
  if ((int)uVar7 <= (int)uVar3) {
    uVar8 = (ulonglong)uVar3;
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar8;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar8,0x48);
  }
  uVar8 = uVar8 * 0x48;
  _Src = (void *)*param_1;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308);
  puVar5 = (uint *)*puVar1;
  if (puVar5 != (uint *)0x0) goto LAB_142f72859;
  while( true ) {
    uVar7 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318);
    if ((uVar7 & 1) == 0) {
      *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x318) = uVar7 | 1;
      __tlregdtor(&LAB_142f6f4c4);
    }
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar4 = *(undefined4 **)(lVar2 + 0x310);
    *(undefined8 *)(lVar2 + 0x310) = 0;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = _aligned_malloc(0x10000,0x10000);
    }
    *puVar4 = 0xffffffff;
    *(undefined4 **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    FUN_140217a48(puVar1);
    puVar5 = (uint *)*puVar1;
LAB_142f72859:
    _Dst = (void *)(*(longlong *)(puVar5 + 0x10) + 7U & 0xfffffffffffffff8);
    puVar9 = (uint *)((longlong)_Dst + uVar8);
    uVar7 = puVar5[0x12];
    if (puVar9 <= puVar5 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar5 + 0x10) = puVar5 + 0x4000;
      LOCK();
      uVar3 = *puVar5;
      *puVar5 = *puVar5 + uVar7 + 1;
      UNLOCK();
      if ((uVar3 ^ uVar7) != 0xffffffff) break;
      puVar5 = (uint *)*puVar1;
      *puVar5 = 0xffffffff;
      *(uint **)(puVar5 + 0x10) = puVar5 + 0x16;
      puVar5[0x12] = 0;
      *puVar1 = puVar5;
      _Dst = (void *)((longlong)puVar5 + 0x5fU & 0xfffffffffffffff8);
      puVar9 = (uint *)((longlong)_Dst + uVar8);
      uVar7 = 0;
      if (puVar9 <= puVar5 + 0x4000) {
        uVar7 = 1;
        goto LAB_142f728d3;
      }
    }
  }
  uVar7 = uVar7 + 1;
LAB_142f728d3:
  *(uint **)(puVar5 + 0x10) = puVar9;
  puVar5[0x12] = uVar7;
  uVar6 = ((longlong)_Src + 0xffffU & 0xffffffffffff0000) - (longlong)_Src;
  if (uVar6 == 0 || _Src == (void *)0x0) {
    if (_Src == (void *)0x0) goto LAB_142f7297a;
  }
  else {
    if (uVar6 < uVar8) {
      uVar8 = uVar6;
    }
    memcpy(_Dst,_Src,uVar8);
  }
  piVar10 = (int *)((ulonglong)_Src & 0xffffffffffff0000);
  LOCK();
  *piVar10 = *piVar10 + -1;
  UNLOCK();
  if (*piVar10 == 0) {
    _Memory = piVar10;
    if (*(longlong *)(piVar10 + 0x10) - (longlong)piVar10 == 0x10000) {
      uVar7 = *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
      if ((uVar7 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar7 | 1;
        __tlregdtor(&LAB_142f6f4c4);
      }
      lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      _Memory = *(int **)(lVar2 + 0x310);
      *(int **)(lVar2 + 0x310) = piVar10;
      if (_Memory == (int *)0x0) goto LAB_142f7297a;
    }
    _aligned_free(_Memory);
  }
LAB_142f7297a:
  *param_1 = _Dst;
  return;
}



// FUNCTION 142f729fa FUN_142f729fa body=47 status=ok
// SIG undefined FUN_142f729fa(void)

void FUN_142f729fa(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x28);
    do {
      (**(code **)(*plVar1 + 0x18))(plVar1,plVar1 + -5);
      plVar1 = plVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 142f72a2a FUN_142f72a2a body=369 status=ok
// SIG undefined FUN_142f72a2a(void)

void FUN_142f72a2a(longlong *param_1,int param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  byte bVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  int local_50;
  undefined1 local_4c;
  undefined8 local_48;
  int local_40;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar2 = (longlong *)(*(longlong *)(*param_1 + 0x58) + (longlong)param_2 * 0x48);
  uVar4 = *(ulonglong *)(*param_1 + 0x18);
  bVar3 = *(byte *)(*param_1 + 0x50);
  uVar6 = (ulonglong)bVar3;
  LOCK();
  plVar2[8] = -1;
  UNLOCK();
  lVar5 = *param_1;
  *param_1 = 0;
  local_4c = 0;
  local_58 = 0;
  local_3c = 0;
  local_50 = param_2;
  local_40 = param_2;
  (**(code **)(plVar2[5] + 0x18))(plVar2 + 5,plVar2);
  plVar2[5] = (longlong)&PTR_FUN_14a2dbad0;
  *plVar2 = lVar5;
  local_48 = 0;
  *(undefined1 *)((longlong)plVar2 + 0xc) = local_4c;
  *(int *)(plVar2 + 1) = local_50;
  FUN_142f7252c(&local_48);
  lVar5 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8);
  if (lVar5 == 0) {
    uVar6 = 1;
    if (bVar3 != 6) {
      uVar6 = (ulonglong)bVar3;
    }
    lVar5 = 0;
  }
  else {
    if (bVar3 == 6) {
      uVar6 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
    }
    lVar5 = *(longlong *)(lVar5 + 0x30);
  }
  plVar2[6] = lVar5;
  plVar2[7] = uVar6 << 0x3b | (uVar4 & 0x1fffffffffffff) << 6 | 0xc000000000000000;
  FUN_142f7252c(&local_58);
  LOCK();
  puVar1 = (ulonglong *)(plVar2 + 7);
  uVar4 = *puVar1;
  *puVar1 = *puVar1 | 2;
  UNLOCK();
  if ((uVar4 >> 1 & 1) != 0) {
    if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
}



// FUNCTION 142f72bba FUN_142f72bba body=450 status=ok
// SIG undefined FUN_142f72bba(void)

void FUN_142f72bba(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  uint param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  uint *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint *puVar8;
  
  if (((ulonglong)param_3 & 7) == 0 && 0xf < param_5) {
    *param_2 = &PTR_FUN_14a2dbad0;
    puVar6 = param_3;
  }
  else {
    *param_2 = &PTR_LAB_14a2dbb10;
    puVar1 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x330
             );
    puVar5 = (uint *)*puVar1;
    if (puVar5 != (uint *)0x0) goto LAB_142f72c97;
    while( true ) {
      uVar7 = *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
      if ((uVar7 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar7 | 1;
        __tlregdtor(&LAB_142f6f4c4);
      }
      lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar4 = *(undefined4 **)(lVar3 + 0x310);
      *(undefined8 *)(lVar3 + 0x310) = 0;
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar4 = 0xffffffff;
      *(undefined4 **)(puVar4 + 0x10) = puVar4 + 0x16;
      puVar4[0x12] = 0;
      *puVar1 = puVar4;
      FUN_1467aa772(puVar1);
      puVar5 = (uint *)*puVar1;
LAB_142f72c97:
      puVar6 = (undefined8 *)(*(longlong *)(puVar5 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar8 = (uint *)(puVar6 + 2);
      uVar7 = puVar5[0x12];
      if (puVar8 <= puVar5 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar5 + 0x10) = puVar5 + 0x4000;
        LOCK();
        uVar2 = *puVar5;
        *puVar5 = *puVar5 + uVar7 + 1;
        UNLOCK();
        if ((uVar2 ^ uVar7) != 0xffffffff) break;
        puVar5 = (uint *)*puVar1;
        *puVar5 = 0xffffffff;
        *(uint **)(puVar5 + 0x10) = puVar5 + 0x16;
        puVar5[0x12] = 0;
        *puVar1 = puVar5;
        puVar6 = (undefined8 *)((longlong)puVar5 + 0x5fU & 0xfffffffffffffff8);
        puVar8 = (uint *)(puVar6 + 2);
        uVar7 = 0;
        if (puVar8 <= puVar5 + 0x4000) {
          uVar7 = 1;
          goto LAB_142f72d11;
        }
      }
    }
    uVar7 = uVar7 + 1;
LAB_142f72d11:
    *(uint **)(puVar5 + 0x10) = puVar8;
    puVar5[0x12] = uVar7;
    *param_3 = puVar6;
  }
  *puVar6 = *param_4;
  *param_4 = 0;
  *(undefined1 *)((longlong)puVar6 + 0xc) = *(undefined1 *)((longlong)param_4 + 0xc);
  *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(param_4 + 1);
  *param_1 = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
             TTaskDelegateDummy::vftable;
  return;
}



// FUNCTION 142f72d7c FUN_142f72d7c body=26 status=ok
// SIG undefined FUN_142f72d7c(void)

undefined8 FUN_142f72d7c(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 != '\0') {
    FUN_142f72180(param_2,0);
  }
  return 0;
}



// FUNCTION 142f72d96 FUN_142f72d96 body=72 status=ok
// SIG undefined FUN_142f72d96(void)

undefined8
FUN_142f72d96(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4,char param_5
             )

{
  if (param_5 != '\0') {
    FUN_142f72180(param_3,0);
  }
  FUN_142f72bba(param_1,param_2 + 0x28,param_2,param_3,param_4);
  return 0;
}



// FUNCTION 142f72e10 FUN_142f72e10 body=26 status=ok
// SIG undefined FUN_142f72e10(void)

undefined8 FUN_142f72e10(undefined8 param_1,undefined8 *param_2,char param_3)

{
  if (param_3 != '\0') {
    FUN_142f72180(*param_2,0);
  }
  return 0;
}



// FUNCTION 142f72e2a FUN_142f72e2a body=70 status=ok
// SIG undefined FUN_142f72e2a(void)

undefined8
FUN_142f72e2a(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             char param_5)

{
  if (param_5 != '\0') {
    FUN_142f72180(*param_3,0);
  }
  param_2[5] = &PTR_LAB_14a2dbb10;
  *param_2 = *param_3;
  *param_1 = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
             TTaskDelegateDummy::vftable;
  return 0;
}



// FUNCTION 142f72e70 FUN_142f72e70 body=179 status=ok
// SIG undefined FUN_142f72e70(void)

void FUN_142f72e70(undefined8 param_1,ulonglong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  int *_Memory;
  int *piVar4;
  
  uVar2 = *param_2;
  FUN_142f7252c(uVar2);
  if (uVar2 != 0) {
    piVar4 = (int *)(uVar2 & 0xffffffffffff0000);
    LOCK();
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (*piVar4 == 0) {
      _Memory = piVar4;
      if (*(longlong *)(piVar4 + 0x10) - (longlong)piVar4 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_142f6f4c4);
        }
        lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar3 + 0x310);
        *(int **)(lVar3 + 0x310) = piVar4;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x000142f72eeb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      _aligned_free(_Memory);
      return;
    }
  }
  return;
}



// FUNCTION 142f72f32 FUN_142f72f32 body=1081 status=ok
// SIG undefined FUN_142f72f32(void)

void FUN_142f72f32(longlong *param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong *puVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  byte bVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  char cVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  byte bVar21;
  longlong lVar22;
  byte bVar23;
  undefined1 auStack_198 [32];
  undefined8 local_178;
  char local_16a;
  byte local_169;
  ulonglong local_168;
  longlong local_160;
  undefined8 local_158;
  undefined4 local_150;
  longlong local_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined4 local_130;
  ulonglong local_12c;
  undefined8 uStack_124;
  undefined4 local_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  longlong local_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined4 local_ec;
  undefined4 uStack_e8;
  undefined8 uStack_e4;
  byte local_dc;
  ulonglong local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  ulonglong uStack_a8;
  ulonglong local_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  byte local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  ulonglong uStack_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  lVar11 = (longlong)*param_2;
  lVar3 = *(longlong *)param_1[3];
  lVar19 = lVar3 + lVar11 * 0x40;
  lVar18 = (longlong)*(int *)(lVar3 + (lVar11 * 8 + 3) * 8);
  uVar4 = *(undefined8 *)(*(longlong *)(*param_1 + 0x3358) + lVar18 * 8);
  bVar23 = *(byte *)(lVar3 + lVar11 * 0x40 + 0x11);
  cVar16 = DAT_14ca385c8 == 0 && (bVar23 & 0x18) == 8;
  lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(*param_1 + 0x3330) + lVar18 * 8) + 0x180);
  if ((bVar23 & 0x10) == 0) {
    iVar2 = *(int *)(lVar19 + 0x30);
    iVar13 = *(int *)(*(longlong *)param_1[4] + (longlong)*(int *)(lVar19 + 0x3c) * 0xc);
    puVar6 = *(undefined8 **)(lVar19 + 0x28);
    local_138 = *puVar6;
    uStack_b8 = (undefined4)((ulonglong)puVar6[5] >> 0x20);
    uStack_b4 = (undefined4)puVar6[6];
    uStack_b0 = (undefined4)((ulonglong)puVar6[6] >> 0x20);
    uVar8 = *(undefined8 *)((longlong)puVar6 + 0x1c);
    uStack_c0 = (undefined4)*(undefined8 *)((longlong)puVar6 + 0x24);
    uStack_bc = (undefined4)((ulonglong)*(undefined8 *)((longlong)puVar6 + 0x24) >> 0x20);
    local_12c = *(ulonglong *)((longlong)puVar6 + 0xc);
    uStack_124 = *(undefined8 *)((longlong)puVar6 + 0x14);
    local_100 = puVar6[7];
    if (local_100 != 0) {
      LOCK();
      *(int *)(local_100 + 8) = *(int *)(local_100 + 8) + 1;
      UNLOCK();
    }
    uStack_f8 = puVar6[8];
    uStack_e4 = *(undefined8 *)((longlong)puVar6 + 0x54);
    uStack_e8 = (undefined4)((ulonglong)*(undefined8 *)((longlong)puVar6 + 0x4c) >> 0x20);
    uStack_f0 = (undefined4)puVar6[9];
    local_ec = (undefined4)((ulonglong)puVar6[9] >> 0x20);
    bVar12 = (byte)*(undefined4 *)((longlong)puVar6 + 0x5c);
    bVar21 = bVar12 | 8;
    if (DAT_14ca385f8 == 0) {
      bVar21 = bVar12;
    }
    local_130 = **(undefined4 **)(lVar3 + 0x28);
    local_dc = bVar21 | 2;
    if (DAT_14ca385e0 == 0) {
      local_dc = bVar21;
    }
    uStack_c8._0_4_ = (undefined4)uVar8;
    uStack_c8._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
    local_11c = (undefined4)uStack_c8;
    uStack_118 = uStack_c8._4_4_;
    uStack_114 = uStack_c0;
    uStack_110 = uStack_bc;
    uStack_10c = uStack_b8;
    uStack_108 = uStack_b4;
    uStack_104 = uStack_b0;
    local_148 = param_1[5];
    local_140 = (undefined4)param_1[6];
    local_178 = uVar4;
    local_d8 = local_12c;
    uStack_d0 = uStack_124;
    uStack_c8 = uVar8;
    FUN_1472bb52c(param_1[1],&local_148,iVar2 + iVar13);
  }
  if ((bool)cVar16) {
    iVar2 = *(int *)(lVar19 + 0x34);
    iVar13 = *(int *)(*(longlong *)param_1[4] + 4 + (longlong)*(int *)(lVar19 + 0x3c) * 0xc);
    puVar7 = *(ulonglong **)(lVar19 + 0x28);
    local_168 = *puVar7;
    uStack_54 = puVar7[6];
    uStack_58 = (undefined4)(puVar7[5] >> 0x20);
    uStack_68 = *(undefined8 *)((longlong)puVar7 + 0x1c);
    uStack_60 = (undefined4)*(undefined8 *)((longlong)puVar7 + 0x24);
    local_5c = (undefined4)((ulonglong)*(undefined8 *)((longlong)puVar7 + 0x24) >> 0x20);
    local_78 = *(undefined8 *)((longlong)puVar7 + 0xc);
    uStack_70 = *(undefined8 *)((longlong)puVar7 + 0x14);
    uVar15 = puVar7[7];
    if (uVar15 != 0) {
      LOCK();
      *(int *)(uVar15 + 8) = *(int *)(uVar15 + 8) + 1;
      UNLOCK();
    }
    uStack_98 = (undefined4)puVar7[8];
    uStack_94 = *(undefined4 *)((longlong)puVar7 + 0x44);
    uStack_90 = (undefined4)puVar7[9];
    local_8c = *(undefined4 *)((longlong)puVar7 + 0x4c);
    uStack_88 = (undefined4)puVar7[10];
    uStack_84 = *(undefined4 *)((longlong)puVar7 + 0x54);
    uStack_80 = (undefined4)puVar7[0xb];
    uVar9 = *(undefined4 *)((longlong)puVar7 + 0x5c);
    local_16a = cVar16;
    local_160 = lVar19;
    uVar10 = FUN_1472c3992(*(undefined8 *)(lVar3 + 0x28),1,0);
    bVar12 = (byte)uVar9;
    bVar21 = bVar12 | 8;
    if (DAT_14ca385f8 == 0) {
      bVar21 = bVar12;
    }
    local_7c = bVar21 | 2;
    if (DAT_14ca385e0 == 0) {
      local_7c = bVar21;
    }
    local_d8 = local_168;
    uStack_ac = uStack_58;
    uStack_a8 = uStack_54;
    uStack_bc = (undefined4)uStack_68;
    uStack_b8 = uStack_68._4_4_;
    uStack_b4 = uStack_60;
    uStack_b0 = local_5c;
    uStack_d0 = CONCAT44((undefined4)local_78,uVar10);
    uStack_c8 = CONCAT44((undefined4)uStack_70,local_78._4_4_);
    uStack_c0 = uStack_70._4_4_;
    local_150 = *(undefined4 *)((longlong)param_1 + 0x3c);
    local_158 = *(undefined8 *)((longlong)param_1 + 0x34);
    local_178 = uVar4;
    local_a0 = uVar15;
    FUN_1472bb52c(param_1[1],&local_158,iVar2 + iVar13,&local_d8);
    lVar19 = local_160;
    cVar16 = local_16a;
  }
  if (*(int *)(lVar19 + 0x38) != -1) {
    iVar2 = *(int *)(lVar3 + 0x20);
    lVar11 = lVar3 + 0x10;
    if (*(longlong *)(lVar3 + 0x18) != 0) {
      lVar11 = *(longlong *)(lVar3 + 0x18);
    }
    if ((longlong)iVar2 != 0) {
      lVar18 = 0;
      iVar13 = 0;
      if ((bVar23 & 0x10) == 0) {
        iVar13 = iVar2;
      }
      iVar17 = *(int *)(lVar19 + 0x38) + (int)param_1[8] +
               *(int *)(*(longlong *)param_1[4] + 8 + (longlong)*(int *)(lVar19 + 0x3c) * 0xc);
      uVar15 = (ulonglong)(uint)(iVar13 + iVar17);
      local_16a = cVar16;
      local_169 = bVar23;
      local_168 = uVar15;
      local_160 = lVar19;
      do {
        lVar22 = (longlong)*(int *)(lVar11 + lVar18) * 0x98 + *(longlong *)(*param_1 + 0x2a08);
        if ((bVar23 & 0x10) == 0) {
          uVar1 = *(undefined1 *)(lVar22 + 0x8c);
          uVar14 = *(int *)(lVar22 + 0x84) * 2 + **(int **)(lVar3 + 0x28);
          uVar15 = (ulonglong)uVar14;
          uVar4 = **(undefined8 **)(lVar19 + 0x28);
          lVar5 = *(longlong *)param_1[2];
          lVar20 = (longlong)iVar17 * 0x20;
          *(longlong *)(lVar5 + lVar20) = lVar22;
          *(undefined8 *)(lVar5 + 8 + lVar20) = uVar4;
          *(uint *)(lVar5 + 0x10 + lVar20) = uVar14;
          *(undefined4 *)(lVar5 + 0x14 + lVar20) = 0xffffffff;
          *(undefined1 *)(lVar5 + 0x18 + lVar20) = uVar1;
          iVar17 = iVar17 + 1;
        }
        if (cVar16 != '\0') {
          bVar23 = *(byte *)(lVar22 + 0x8c);
          uVar9 = FUN_1472c3992(*(undefined8 *)(lVar3 + 0x28),CONCAT71((int7)(uVar15 >> 8),1),
                                *(undefined4 *)(lVar22 + 0x84));
          uVar4 = **(undefined8 **)(local_160 + 0x28);
          uVar15 = *(ulonglong *)param_1[2];
          lVar19 = (longlong)(int)local_168 * 0x20;
          *(longlong *)(uVar15 + lVar19) = lVar22;
          *(undefined8 *)(uVar15 + 8 + lVar19) = uVar4;
          *(undefined4 *)(uVar15 + 0x10 + lVar19) = uVar9;
          *(undefined4 *)(uVar15 + 0x14 + lVar19) = 0xffffffff;
          *(byte *)(uVar15 + 0x18 + lVar19) = bVar23 ^ 1;
          local_168 = (ulonglong)((int)local_168 + 1);
          lVar19 = local_160;
          bVar23 = local_169;
          cVar16 = local_16a;
        }
        lVar18 = lVar18 + 4;
      } while ((longlong)iVar2 * 4 != lVar18);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142f7336c FUN_142f7336c body=547 status=ok
// SIG undefined FUN_142f7336c(void)

longlong * FUN_142f7336c(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  longlong *lpTlsValue;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
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
      lVar5 = lpTlsValue[1];
    }
    else {
      lVar5 = *lpTlsValue;
      if (lVar5 != 0) {
        uVar2 = FUN_14493c560();
        if (uVar2 == 0) {
          uVar3 = 0;
          uVar7 = 0;
          lVar6 = 0;
        }
        else {
          uVar7 = (ulonglong)(uVar2 >> 0xe);
          uVar3 = uVar2 & 0x3fff;
          lVar6 = (ulonglong)(uVar3 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar7 * 8);
        }
        *(longlong *)(lVar6 + 8) = lVar5;
        do {
          uVar1 = DAT_14c896180;
          uVar4 = (DAT_14c896180 & 0xfffffffffc000000) + 0x4000000;
          if (uVar4 >> 0x1a < DAT_14c896180 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          if (uVar2 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = *(longlong *)(&DAT_14c833b00 + uVar7 * 8) + (ulonglong)(uVar3 * 0x18);
          }
          *(uint *)(lVar5 + 0x10) = (uint)uVar1 & 0x3ffffff;
          LOCK();
          bVar8 = uVar1 != DAT_14c896180;
          uVar1 = uVar4 | uVar2;
          if (bVar8) {
            uVar1 = DAT_14c896180;
          }
          DAT_14c896180 = uVar1;
          UNLOCK();
        } while (bVar8);
      }
      *lpTlsValue = lpTlsValue[1];
      *(undefined4 *)(lpTlsValue + 2) = 0;
      lVar5 = 0;
    }
    *param_1 = lVar5;
    lpTlsValue[1] = (longlong)param_1;
    *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  }
  return param_1;
}



// FUNCTION 142f73590 FUN_142f73590 body=2229 status=ok
// SIG undefined FUN_142f73590(void)

void FUN_142f73590(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  uint *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  byte bVar13;
  undefined1 uVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong *plVar18;
  undefined8 *puVar19;
  byte *pbVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  bool bVar24;
  undefined1 auStack_198 [32];
  int *local_178;
  undefined1 *local_170;
  char local_15d;
  int local_15c;
  byte *local_158;
  longlong *local_150;
  int *local_148;
  undefined8 *local_140;
  ulonglong local_138;
  ulonglong uStack_130;
  longlong local_120;
  longlong local_118;
  byte local_110;
  char local_10f;
  ulonglong local_108;
  int local_100;
  undefined8 *local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined1 local_e1;
  int local_e0;
  int local_dc;
  undefined1 local_d5;
  int local_d4;
  undefined8 *local_d0;
  int local_c8;
  undefined1 local_c4;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  pbVar20 = (byte *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
  iVar15 = *(int *)pbVar20;
  if (iVar15 == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    iVar15 = *(int *)pbVar20;
  }
  pbVar20[0] = 0x10;
  pbVar20[1] = 0;
  pbVar20[2] = 0;
  pbVar20[3] = 0x40;
  plVar18 = *(longlong **)(param_1 + 0xa8);
  lVar11 = plVar18[1];
  bVar13 = 1;
  if (*(char *)(lVar11 + 0x23d8) == '\0') {
    bVar13 = (byte)(*(uint *)(*(longlong *)(lVar11 + 8) + 0x58) >> 9) & 1;
  }
  lVar17 = *plVar18;
  if ((((*(longlong *)(lVar11 + 0x10) == 0) || (*(char *)(lVar11 + 0x23eb) != '\0')) ||
      (*(char *)(lVar11 + 0x3098) != '\x01')) ||
     ((local_15d = *(char *)(param_1 + 0xb0), *(char *)(lVar11 + 0x23e8) == '\x01' &&
      (*(char *)(lVar11 + 0x23ea) != '\x01')))) goto LAB_142f73c36;
  local_138 = 0;
  uStack_130 = 0;
  uVar4 = *(uint *)(lVar17 + 0x3360);
  uVar12 = (ulonglong)uVar4;
  local_150 = plVar18;
  if ((int)uVar4 < 1) {
    uVar12 = 0;
  }
  else {
    cVar6 = FUN_1447e0190();
    if (cVar6 == '\0') {
      bVar24 = uVar4 != 1;
LAB_142f736b4:
      uVar7 = 0;
    }
    else {
      if (uVar4 == 1) {
        bVar24 = false;
        goto LAB_142f736b4;
      }
      uVar7 = uVar4 + 0x40 >> 7;
      if ((int)DAT_14c8335d8 < (int)uVar7) {
        uVar7 = DAT_14c8335d8;
      }
      bVar24 = true;
    }
    lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar21 = (*(undefined **)(lVar5 + 0x2c0) != &DAT_14c82ba00 || *(int *)(lVar5 + 0x2c8) == 0) +
             uVar7;
    local_15c = iVar15;
    local_158 = pbVar20;
    if (DAT_14c8c27ac < 1) {
      memset(&local_d0,0,0x82);
      local_108 = local_108 & 0xffffffff00000000;
      local_f0 = 0;
      local_f8 = (undefined8 *)((ulonglong)local_f8 & 0xffffffff00000000);
      FUN_140e55932(&local_d0,&local_108,&local_f0,&local_f8);
      iVar15 = (int)local_f8;
      local_170 = &local_d5;
      local_178 = &local_dc;
      FUN_1457b80ec(local_f0,(ulonglong)local_f8 & 0xffffffff,&local_e0,&local_d4);
      DAT_14c8c27ac = iVar15;
      if ((0 < local_dc) && (DAT_14c8c27ac = iVar15, local_dc <= iVar15)) {
        DAT_14c8c27ac = local_dc;
      }
    }
    local_148 = (int *)(lVar5 + 0x2c8);
    local_140 = (undefined8 *)(lVar5 + 0x2c0);
    iVar15 = DAT_14c8c27ac;
    if (iVar21 < DAT_14c8c27ac) {
      iVar15 = iVar21;
    }
    iVar21 = 1;
    if (1 < iVar15) {
      iVar21 = iVar15;
    }
    FUN_142f70854(0,0);
    uStack_130 = CONCAT44(uStack_130._4_4_,iVar21);
    FUN_142f70a2c(&local_138);
    FUN_142f70986(local_138,iVar21);
    local_108 = local_138;
    local_100 = (int)uStack_130;
    local_10f = local_15d;
    local_120 = lVar17;
    local_118 = lVar11;
    local_110 = bVar13;
    bVar13 = FUN_1447e0190();
    uVar7 = 0;
    if (((bVar24 & bVar13) == 1) && (uVar7 = uVar4 + 0x40 >> 7, (int)DAT_14c8335d8 < (int)uVar7)) {
      uVar7 = DAT_14c8335d8;
    }
    iVar15 = ((undefined *)*local_140 != &DAT_14c82ba00 || *local_148 == 0) + uVar7;
    if (DAT_14c8c27ac < 1) {
      memset(&local_d0,0,0x82);
      local_f0 = 0;
      local_f8 = (undefined8 *)((ulonglong)local_f8 & 0xffffffff00000000);
      local_d4 = 0;
      FUN_140e55932(&local_d0,&local_f0,&local_f8,&local_d4);
      iVar21 = local_d4;
      local_170 = &local_e1;
      local_178 = &local_e0;
      FUN_1457b80ec((ulonglong)local_f8 & 0xffffffff,local_d4,&local_d5,&local_dc);
      DAT_14c8c27ac = iVar21;
      if ((0 < local_e0) && (local_e0 <= iVar21)) {
        DAT_14c8c27ac = local_e0;
      }
    }
    pbVar20 = local_158;
    iVar21 = DAT_14c8c27ac;
    if (iVar15 < DAT_14c8c27ac) {
      iVar21 = iVar15;
    }
    iVar15 = 1;
    if (iVar21 < 2) {
      iVar21 = 1;
    }
    iVar22 = local_100;
    if (iVar21 < local_100) {
      iVar22 = iVar21;
    }
    if (local_100 == 0) {
      iVar22 = iVar21;
    }
    if (1 < iVar22) {
      iVar21 = iVar22 * 6;
      iVar23 = -6;
      do {
        if (iVar21 <= (int)uVar4) {
          iVar15 = (int)(uVar4 + iVar21 + -1) / iVar21;
          uVar12 = (longlong)(int)(iVar15 + (uVar4 - 1)) / (longlong)iVar15;
          iVar8 = (int)uVar12;
          uVar12 = uVar12 & 0xffffffff;
          if (iVar22 <= iVar8) break;
        }
        iVar8 = (int)uVar12;
        iVar21 = iVar21 - iVar22;
        iVar23 = iVar23 + 1;
      } while (iVar23 != 0);
      iVar22 = iVar22 + -1;
      uVar14 = 6;
      if ((*local_158 & 0x37) != 0) {
        uVar14 = 0;
      }
      FUN_144a85b52(&local_f0,1);
      puVar1 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar10 = (uint *)*puVar1;
      if (puVar10 != (uint *)0x0) goto LAB_142f73930;
      do {
        uVar7 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar7 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar7 | 1;
          __tlregdtor(&LAB_142f6f4c4);
        }
        lVar11 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar9 = *(undefined4 **)(lVar11 + 0x310);
        *(undefined8 *)(lVar11 + 0x310) = 0;
        if (puVar9 == (undefined4 *)0x0) {
          puVar9 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar9 = 0xffffffff;
        *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
        puVar9[0x12] = 0;
        *puVar1 = puVar9;
        FUN_140217a48(puVar1);
        puVar10 = (uint *)*puVar1;
LAB_142f73930:
        uVar12 = *(longlong *)(puVar10 + 0x10) + 0x3f;
        uVar7 = puVar10[0x12];
        while( true ) {
          puVar19 = (undefined8 *)(uVar12 & 0xffffffffffffffc0);
          if (puVar19 + 0x10 <= puVar10 + 0x4000) {
            *(undefined8 **)(puVar10 + 0x10) = puVar19 + 0x10;
            puVar10[0x12] = uVar7 + 1;
            *puVar19 = &PTR_FUN_149e002e8;
            *(undefined4 *)(puVar19 + 1) = 0;
            *puVar19 = &PTR_FUN_14a2dba40;
            puVar19[3] = L"GatherRayTracingRelevantPrimitives_Parallel";
            *(undefined4 *)(puVar19 + 4) = 0;
            *(undefined4 *)(puVar19 + 5) = 0;
            *(uint *)((longlong)puVar19 + 0x2c) = uVar4;
            *(int *)(puVar19 + 6) = iVar15;
            *(int *)((longlong)puVar19 + 0x34) = iVar8;
            puVar19[7] = &local_108;
            puVar19[8] = &local_120;
            puVar19[9] = &local_f0;
            *(undefined1 *)(puVar19 + 10) = uVar14;
            puVar19[0xb] = 0;
            puVar19[0xc] = 0;
            *(int *)((longlong)puVar19 + 0x24) = iVar8;
            *(int *)(puVar19 + 0xc) = iVar22;
            FUN_142f71396(puVar19 + 0xb);
            FUN_142f71360(puVar19[0xb],iVar22);
            if (puVar19 != (undefined8 *)0x0) {
              LOCK();
              *(int *)(puVar19 + 1) = *(int *)(puVar19 + 1) + 1;
              UNLOCK();
            }
            local_f8 = puVar19;
            FUN_142f70d3a(&local_f8);
            local_c4 = 0;
            local_d0 = puVar19;
            local_c8 = iVar22;
            cVar6 = FUN_142f70db8(&local_d0,1);
            if (cVar6 == '\0') {
              (**(code **)(*(longlong *)CONCAT44(uStack_ec,local_f0) + 0x20))
                        ((longlong *)CONCAT44(uStack_ec,local_f0),0xffffffff,0);
            }
            FUN_142f71164(&local_d0);
            FUN_144a75412();
            pbVar20 = local_158;
            goto LAB_142f73aa9;
          }
          *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
          LOCK();
          uVar3 = *puVar10;
          *puVar10 = *puVar10 + uVar7 + 1;
          UNLOCK();
          if ((uVar3 ^ uVar7) != 0xffffffff) break;
          puVar10 = (uint *)*puVar1;
          *puVar10 = 0xffffffff;
          *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
          puVar10[0x12] = 0;
          *puVar1 = puVar10;
          uVar12 = (longlong)puVar10 + 0x97;
          uVar7 = 0;
        }
      } while( true );
    }
    uVar7 = 0;
    do {
      FUN_142f70b30(&local_120,&local_108,0,uVar7);
      uVar7 = uVar7 + 1;
    } while (uVar4 != uVar7);
LAB_142f73aa9:
    plVar18 = local_150;
    uVar12 = (ulonglong)(int)uStack_130;
    iVar15 = local_15c;
    if (0 < (longlong)uVar12) {
      lVar11 = 0;
      iVar15 = 0;
      iVar22 = 0;
      iVar23 = 0;
      iVar21 = 0;
      do {
        iVar15 = iVar15 + *(int *)(local_138 + 0x10 + lVar11);
        iVar22 = iVar22 + *(int *)(local_138 + 0x28 + lVar11);
        iVar23 = iVar23 + *(int *)(local_138 + 0x40 + lVar11);
        iVar21 = iVar21 + *(int *)(local_138 + 0x58 + lVar11);
        lVar11 = lVar11 + 0xb0;
      } while (uVar12 * 0xb0 - lVar11 != 0);
      if (iVar15 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar15);
      }
      plVar2 = local_150 + 3;
      if (*(int *)((longlong)local_150 + 0x24) < iVar15) {
        FUN_14481578e(plVar2);
      }
      if (iVar22 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar22);
      }
      if (*(int *)((longlong)plVar18 + 0x34) < iVar22) {
        FUN_14481578e(plVar18 + 5,iVar22);
      }
      if (iVar23 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar23);
      }
      if (*(int *)((longlong)plVar18 + 0x94) < iVar23) {
        FUN_140ca8596(plVar18 + 0x11,iVar23);
      }
      if (iVar21 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar21);
      }
      if (*(int *)((longlong)plVar18 + 0x84) < iVar21) {
        FUN_141773842(plVar18 + 0xf,iVar21);
      }
      uVar12 = 0;
      iVar15 = local_15c;
      if ((longlong)(int)uStack_130 != 0) {
        uVar16 = (longlong)(int)uStack_130 * 0xb0 + local_138;
        uVar12 = local_138;
        do {
          FUN_1472b0df2(uVar12,plVar2);
          FUN_1472b0df2(uVar12 + 0x18,plVar18 + 5);
          FUN_1472b0e86(uVar12 + 0x30,plVar18 + 0x11);
          FUN_1472b0f16(uVar12 + 0x48,plVar18 + 0xf);
          lVar11 = DAT_14ca964f8;
          if ((local_15d != '\0') && (cVar6 = FUN_147430d07(), cVar6 != '\0')) {
            FUN_1468b3f6e(lVar11 + 0x270,uVar12 + 0x60);
          }
          uVar12 = uVar12 + 0xb0;
        } while (uVar12 != uVar16);
        uVar12 = uStack_130 & 0xffffffff;
        plVar18 = local_150;
        pbVar20 = local_158;
        iVar15 = local_15c;
      }
    }
  }
  FUN_142f70854(local_138,uVar12);
  if (local_138 != 0) {
    FUN_1400020a8();
  }
  lVar17 = *plVar18;
LAB_142f73c36:
  local_d0 = (undefined8 *)plVar18[0xf];
  local_c8 = (int)plVar18[0x10];
  FUN_1472ab1c0(lVar17);
  *(int *)pbVar20 = iVar15;
  if ((local_48 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142f73e46 FUN_142f73e46 body=110 status=ok
// SIG undefined FUN_142f73e46(void)

undefined8 * FUN_142f73e46(undefined8 *param_1,int param_2)

{
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
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
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142f73eb4 FUN_142f73eb4 body=547 status=ok
// SIG undefined FUN_142f73eb4(void)

longlong * FUN_142f73eb4(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  longlong *lpTlsValue;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
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
      lVar5 = lpTlsValue[1];
    }
    else {
      lVar5 = *lpTlsValue;
      if (lVar5 != 0) {
        uVar2 = FUN_14493c560();
        if (uVar2 == 0) {
          uVar3 = 0;
          uVar7 = 0;
          lVar6 = 0;
        }
        else {
          uVar7 = (ulonglong)(uVar2 >> 0xe);
          uVar3 = uVar2 & 0x3fff;
          lVar6 = (ulonglong)(uVar3 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar7 * 8);
        }
        *(longlong *)(lVar6 + 8) = lVar5;
        do {
          uVar1 = DAT_14c896180;
          uVar4 = (DAT_14c896180 & 0xfffffffffc000000) + 0x4000000;
          if (uVar4 >> 0x1a < DAT_14c896180 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          if (uVar2 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = *(longlong *)(&DAT_14c833b00 + uVar7 * 8) + (ulonglong)(uVar3 * 0x18);
          }
          *(uint *)(lVar5 + 0x10) = (uint)uVar1 & 0x3ffffff;
          LOCK();
          bVar8 = uVar1 != DAT_14c896180;
          uVar1 = uVar4 | uVar2;
          if (bVar8) {
            uVar1 = DAT_14c896180;
          }
          DAT_14c896180 = uVar1;
          UNLOCK();
        } while (bVar8);
      }
      *lpTlsValue = lpTlsValue[1];
      *(undefined4 *)(lpTlsValue + 2) = 0;
      lVar5 = 0;
    }
    *param_1 = lVar5;
    lpTlsValue[1] = (longlong)param_1;
    *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  }
  return param_1;
}



// FUNCTION 142f740d8 FUN_142f740d8 body=2346 status=ok
// SIG undefined FUN_142f740d8(void)

void FUN_142f740d8(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  byte bVar8;
  char cVar9;
  int iVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  uint *puVar13;
  void *pvVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  undefined1 uVar18;
  uint uVar19;
  int iVar20;
  ulonglong uVar21;
  undefined8 *puVar22;
  ulonglong uVar23;
  longlong *plVar24;
  uint uVar25;
  uint uVar26;
  longlong lVar27;
  byte *pbVar28;
  longlong lVar29;
  undefined1 auStack_1e8 [32];
  uint *local_1c8;
  undefined1 *local_1c0;
  int local_1b0;
  undefined4 local_1ac;
  byte *local_1a8;
  undefined8 *local_1a0;
  undefined8 *local_198;
  undefined8 *local_190;
  int *local_188;
  undefined8 *local_180;
  undefined8 local_178;
  undefined8 local_170;
  ulonglong local_168;
  ulonglong uStack_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined4 local_144;
  undefined8 *local_140;
  undefined1 local_138;
  ulonglong local_130;
  uint local_128;
  undefined8 *local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined1 local_109;
  uint local_108;
  uint local_104;
  undefined1 local_fd;
  uint local_fc;
  undefined8 *local_f8;
  int local_f0;
  undefined1 local_ec;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  pbVar28 = (byte *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
  iVar20 = *(int *)pbVar28;
  pvVar14 = ThreadLocalStoragePointer;
  if (iVar20 == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    iVar20 = *(int *)pbVar28;
  }
  pbVar28[0] = 0x10;
  pbVar28[1] = 0;
  pbVar28[2] = 0;
  pbVar28[3] = 0x40;
  uVar18 = *(undefined1 *)(param_1 + 0xb8);
  uVar4 = *(undefined4 *)(param_1 + 0xb4);
  uVar3 = *(undefined4 *)(param_1 + 0xb0);
  puVar5 = *(undefined8 **)(param_1 + 0xa8);
  local_168 = 0;
  uStack_160 = 0;
  uVar26 = *(uint *)(puVar5 + 4);
  if ((int)uVar26 < 1) {
    uVar21 = 0;
    goto LAB_142f74676;
  }
  uVar6 = *puVar5;
  local_178 = puVar5[1];
  uVar11 = FUN_1447e0190();
  local_198 = (undefined8 *)CONCAT71(local_198._1_7_,uVar18);
  local_1a0 = (undefined8 *)CONCAT44(local_1a0._4_4_,uVar4);
  if ((char)uVar11 == '\0') {
    local_1ac = (undefined4)CONCAT71((int7)((ulonglong)uVar11 >> 8),uVar26 != 1);
LAB_142f741c7:
    uVar19 = 0;
  }
  else {
    if (uVar26 == 1) {
      local_1ac = 0;
      goto LAB_142f741c7;
    }
    uVar19 = DAT_14c8335d8;
    if ((int)uVar26 <= (int)DAT_14c8335d8) {
      uVar19 = uVar26;
    }
    local_1ac = (undefined4)CONCAT71((int7)((ulonglong)pvVar14 >> 8),1);
  }
  lVar27 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  uVar19 = (*(undefined **)(lVar27 + 0x2c0) != &DAT_14c82ba00 || *(int *)(lVar27 + 0x2c8) == 0) +
           uVar19;
  local_1b0 = iVar20;
  local_1a8 = pbVar28;
  local_170 = uVar6;
  if ((int)DAT_14c8c27ac < 1) {
    memset(&local_f8,0,0x82);
    local_130 = local_130 & 0xffffffff00000000;
    local_118 = 0;
    local_120 = (undefined8 *)((ulonglong)local_120 & 0xffffffff00000000);
    FUN_140e55932(&local_f8,&local_130,&local_118,&local_120);
    uVar25 = (uint)local_120;
    local_1c0 = &local_fd;
    local_1c8 = &local_104;
    FUN_1457b80ec(local_118,(ulonglong)local_120 & 0xffffffff,&local_108,&local_fc);
    DAT_14c8c27ac = uVar25;
    if ((0 < (int)local_104) && ((int)local_104 <= (int)uVar25)) {
      DAT_14c8c27ac = local_104;
    }
  }
  local_188 = (int *)(lVar27 + 0x2c8);
  local_180 = (undefined8 *)(lVar27 + 0x2c0);
  uVar25 = DAT_14c8c27ac;
  if ((int)uVar19 < (int)DAT_14c8c27ac) {
    uVar25 = uVar19;
  }
  uVar21 = 1;
  if (1 < (int)uVar25) {
    uVar21 = (ulonglong)uVar25;
  }
  local_190 = puVar5;
  FUN_142f71b6a(0,0);
  uStack_160 = CONCAT44(uStack_160._4_4_,(int)uVar21);
  FUN_142f71bd4();
  lVar27 = 0x30;
  uVar23 = 0;
  do {
    uVar7 = local_168;
    lVar1 = local_168 + lVar27;
    lVar2 = local_168 + lVar27;
    *(undefined4 *)(lVar2 + -0x20) = 0;
    *(undefined8 *)(lVar2 + -0x30) = 0;
    *(undefined8 *)(lVar2 + -0x28) = 0;
    FUN_1472c02ba();
    puVar22 = (undefined8 *)(uVar7 + lVar27);
    *(undefined4 *)(puVar22 + -1) = 0;
    puVar22[-3] = 0;
    puVar22[-2] = 0;
    FUN_1472c02ba(puVar22 + -3);
    *(undefined4 *)(puVar22 + 2) = 0;
    *puVar22 = 0;
    puVar22[1] = 0;
    FUN_1472c025e(lVar1);
    puVar22[3] = 0;
    puVar22[4] = 0;
    *(int *)(puVar22 + 5) = (int)uVar23;
    uVar23 = uVar23 + 1;
    lVar27 = lVar27 + 0x60;
  } while (uVar21 != uVar23);
  local_130 = local_168;
  uVar19 = (uint)uStack_160;
  local_128 = (uint)uStack_160;
  local_158 = local_170;
  local_150 = local_178;
  local_144 = local_1a0._0_4_;
  local_138 = local_198._0_1_;
  local_148 = uVar3;
  local_140 = puVar5 + 3;
  bVar8 = FUN_1447e0190();
  if (((byte)local_1ac & bVar8) == 1) {
    uVar25 = DAT_14c8335d8;
    if ((int)uVar26 <= (int)DAT_14c8335d8) {
      uVar25 = uVar26;
    }
  }
  else {
    uVar25 = 0;
  }
  uVar25 = ((undefined *)*local_180 != &DAT_14c82ba00 || *local_188 == 0) + uVar25;
  if ((int)DAT_14c8c27ac < 1) {
    memset(&local_f8,0,0x82);
    local_118 = 0;
    local_120 = (undefined8 *)((ulonglong)local_120 & 0xffffffff00000000);
    local_fc = 0;
    FUN_140e55932(&local_f8,&local_118,&local_120,&local_fc);
    uVar16 = local_fc;
    local_1c0 = &local_109;
    local_1c8 = &local_108;
    FUN_1457b80ec((ulonglong)local_120 & 0xffffffff,local_fc,&local_fd,&local_104);
    DAT_14c8c27ac = uVar16;
    if ((0 < (int)local_108) && (DAT_14c8c27ac = uVar16, (int)local_108 <= (int)uVar16)) {
      DAT_14c8c27ac = local_108;
    }
  }
  pbVar28 = local_1a8;
  iVar20 = local_1b0;
  uVar16 = DAT_14c8c27ac;
  if ((int)uVar25 < (int)DAT_14c8c27ac) {
    uVar16 = uVar25;
  }
  iVar15 = 1;
  if ((int)uVar16 < 2) {
    uVar16 = 1;
  }
  uVar25 = uVar19;
  if ((int)uVar16 < (int)uVar19) {
    uVar25 = uVar16;
  }
  if (uVar19 == 0) {
    uVar25 = uVar16;
  }
  if (1 < (int)uVar25) {
    iVar20 = uVar25 * 6;
    iVar17 = -6;
    uVar21 = (ulonglong)uVar26;
    do {
      if (iVar20 <= (int)uVar26) {
        iVar15 = (int)(uVar26 + iVar20 + -1) / iVar20;
        uVar21 = (longlong)(int)(iVar15 + (uVar26 - 1)) / (longlong)iVar15;
        iVar10 = (int)uVar21;
        uVar21 = uVar21 & 0xffffffff;
        if ((int)uVar25 <= iVar10) break;
      }
      iVar10 = (int)uVar21;
      iVar20 = iVar20 - uVar25;
      iVar17 = iVar17 + 1;
    } while (iVar17 != 0);
    iVar17 = uVar25 - 1;
    uVar18 = 6;
    if ((*local_1a8 & 0x37) != 0) {
      uVar18 = 0;
    }
    FUN_144a85b52(&local_118,1);
    puVar5 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar13 = (uint *)*puVar5;
    if (puVar13 != (uint *)0x0) goto LAB_142f744d6;
    do {
      uVar19 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar19 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar19 | 1;
        __tlregdtor(&LAB_142f6f4c4);
      }
      lVar27 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar12 = *(undefined4 **)(lVar27 + 0x310);
      *(undefined8 *)(lVar27 + 0x310) = 0;
      if (puVar12 == (undefined4 *)0x0) {
        puVar12 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar12 = 0xffffffff;
      *(undefined4 **)(puVar12 + 0x10) = puVar12 + 0x16;
      puVar12[0x12] = 0;
      *puVar5 = puVar12;
      FUN_140217a48(puVar5);
      puVar13 = (uint *)*puVar5;
LAB_142f744d6:
      uVar21 = *(longlong *)(puVar13 + 0x10) + 0x3f;
      uVar19 = puVar13[0x12];
      while( true ) {
        puVar22 = (undefined8 *)(uVar21 & 0xffffffffffffffc0);
        if (puVar22 + 0x10 <= puVar13 + 0x4000) {
          *(undefined8 **)(puVar13 + 0x10) = puVar22 + 0x10;
          puVar13[0x12] = uVar19 + 1;
          *puVar22 = &PTR_FUN_149e002e8;
          *(undefined4 *)(puVar22 + 1) = 0;
          *puVar22 = &PTR_FUN_14a2dbac8;
          puVar22[3] = L"GatherRayTracingRelevantStaticPrimitives_Parallel";
          *(undefined4 *)(puVar22 + 4) = 0;
          *(undefined4 *)(puVar22 + 5) = 0;
          *(uint *)((longlong)puVar22 + 0x2c) = uVar26;
          *(int *)(puVar22 + 6) = iVar15;
          *(int *)((longlong)puVar22 + 0x34) = iVar10;
          puVar22[7] = &local_130;
          puVar22[8] = &local_158;
          puVar22[9] = &local_118;
          *(undefined1 *)(puVar22 + 10) = uVar18;
          puVar22[0xb] = 0;
          puVar22[0xc] = 0;
          *(int *)((longlong)puVar22 + 0x24) = iVar10;
          *(int *)(puVar22 + 0xc) = iVar17;
          FUN_142f7275e(puVar22 + 0xb);
          FUN_142f72728(puVar22[0xb],iVar17);
          pbVar28 = local_1a8;
          iVar20 = local_1b0;
          if (puVar22 != (undefined8 *)0x0) {
            LOCK();
            *(int *)(puVar22 + 1) = *(int *)(puVar22 + 1) + 1;
            UNLOCK();
          }
          local_120 = puVar22;
          FUN_142f72102(&local_120);
          local_ec = 0;
          local_f8 = puVar22;
          local_f0 = iVar17;
          cVar9 = FUN_142f72180(&local_f8,1);
          if (cVar9 == '\0') {
            (**(code **)(*(longlong *)CONCAT44(uStack_114,local_118) + 0x20))
                      ((longlong *)CONCAT44(uStack_114,local_118),0xffffffff);
          }
          FUN_142f7252c(&local_f8);
          FUN_144a75412(&local_118);
          goto LAB_142f74669;
        }
        *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
        LOCK();
        uVar25 = *puVar13;
        *puVar13 = *puVar13 + uVar19 + 1;
        UNLOCK();
        if ((uVar25 ^ uVar19) != 0xffffffff) break;
        puVar13 = (uint *)*puVar5;
        *puVar13 = 0xffffffff;
        *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
        puVar13[0x12] = 0;
        *puVar5 = puVar13;
        uVar21 = (longlong)puVar13 + 0x97;
        uVar19 = 0;
      }
    } while( true );
  }
  uVar19 = 0;
  do {
    FUN_142f71cdc(&local_158,&local_130,0,uVar19);
    uVar19 = uVar19 + 1;
  } while (uVar26 != uVar19);
LAB_142f74669:
  puVar5 = local_190;
  uVar21 = (ulonglong)(int)(uint)uStack_160;
  if (0 < (longlong)uVar21) {
    lVar27 = 0;
    iVar15 = 0;
    iVar17 = 0;
    do {
      iVar15 = iVar15 + *(int *)(local_168 + 0x10 + lVar27);
      iVar17 = iVar17 + *(int *)(local_168 + 0x28 + lVar27);
      lVar27 = lVar27 + 0x60;
    } while (uVar21 * 0x60 != lVar27);
    if (iVar15 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar15);
    }
    local_198 = local_190 + 7;
    if (*(int *)((longlong)local_190 + 0x44) < iVar15) {
      FUN_1472c046e(local_198);
    }
    if (iVar17 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar17);
    }
    local_1a0 = puVar5 + 9;
    if (*(int *)((longlong)puVar5 + 0x54) < iVar17) {
      FUN_1472c046e(local_1a0,iVar17);
    }
    FUN_1472b0faa(puVar5 + 0xb,uStack_160 & 0xffffffff);
    uVar21 = uStack_160 & 0xffffffff;
    if (0 < (int)(uint)uStack_160) {
      lVar27 = 0;
      do {
        uVar21 = local_168;
        puVar5 = local_190;
        lVar1 = local_168 + lVar27 * 0x60;
        lVar2 = local_190[0xb];
        FUN_1472b101a(lVar1,local_198);
        lVar29 = uVar21 + lVar27 * 0x60;
        FUN_1472b101a(lVar29 + 0x18,local_1a0);
        *(undefined4 *)(lVar2 + lVar27 * 0xc) = *(undefined4 *)(puVar5 + 0x13);
        *(undefined4 *)(lVar2 + 4 + lVar27 * 0xc) = *(undefined4 *)((longlong)puVar5 + 0x9c);
        iVar20 = *(int *)((longlong)puVar5 + 0xa4);
        *(int *)(lVar2 + 8 + lVar27 * 0xc) = iVar20;
        *(int *)(puVar5 + 0x13) = *(int *)(puVar5 + 0x13) + *(int *)(lVar29 + 0x48);
        *(int *)((longlong)puVar5 + 0x9c) =
             *(int *)((longlong)puVar5 + 0x9c) + *(int *)(lVar29 + 0x4c);
        *(int *)(puVar5 + 0x14) = *(int *)(puVar5 + 0x14) + *(int *)(lVar29 + 0x50);
        *(int *)((longlong)puVar5 + 0xa4) = iVar20 + *(int *)(lVar29 + 0x54);
        iVar20 = *(int *)(lVar29 + 0x40);
        if (iVar20 != 0) {
          plVar24 = *(longlong **)(lVar1 + 0x30);
          uVar21 = 0;
          do {
            FUN_147262d56(&DAT_14ca1c220,*(undefined8 *)(*plVar24 + uVar21 * 8));
            uVar26 = (int)uVar21 + 1;
            plVar24 = plVar24 + (0x7ff < uVar26);
            uVar21 = (ulonglong)uVar26;
            if (0x7ff < uVar26) {
              uVar21 = 0;
            }
            iVar20 = iVar20 + -1;
          } while (iVar20 != 0);
        }
        lVar27 = lVar27 + 1;
        uVar21 = (ulonglong)(int)(uint)uStack_160;
        pbVar28 = local_1a8;
        iVar20 = local_1b0;
      } while (lVar27 < (longlong)uVar21);
    }
  }
LAB_142f74676:
  FUN_142f71b6a(local_168,uVar21);
  if (local_168 != 0) {
    FUN_1400020a8();
  }
  *(int *)pbVar28 = iVar20;
  if ((local_70 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142f74a04 FUN_142f74a04 body=110 status=ok
// SIG undefined FUN_142f74a04(void)

undefined8 * FUN_142f74a04(undefined8 *param_1,int param_2)

{
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
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
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142f74a72 FUN_142f74a72 body=547 status=ok
// SIG undefined FUN_142f74a72(void)

longlong * FUN_142f74a72(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  longlong *lpTlsValue;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
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
      lVar5 = lpTlsValue[1];
    }
    else {
      lVar5 = *lpTlsValue;
      if (lVar5 != 0) {
        uVar2 = FUN_14493c560();
        if (uVar2 == 0) {
          uVar3 = 0;
          uVar7 = 0;
          lVar6 = 0;
        }
        else {
          uVar7 = (ulonglong)(uVar2 >> 0xe);
          uVar3 = uVar2 & 0x3fff;
          lVar6 = (ulonglong)(uVar3 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar7 * 8);
        }
        *(longlong *)(lVar6 + 8) = lVar5;
        do {
          uVar1 = DAT_14c896180;
          uVar4 = (DAT_14c896180 & 0xfffffffffc000000) + 0x4000000;
          if (uVar4 >> 0x1a < DAT_14c896180 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          if (uVar2 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = *(longlong *)(&DAT_14c833b00 + uVar7 * 8) + (ulonglong)(uVar3 * 0x18);
          }
          *(uint *)(lVar5 + 0x10) = (uint)uVar1 & 0x3ffffff;
          LOCK();
          bVar8 = uVar1 != DAT_14c896180;
          uVar1 = uVar4 | uVar2;
          if (bVar8) {
            uVar1 = DAT_14c896180;
          }
          DAT_14c896180 = uVar1;
          UNLOCK();
        } while (bVar8);
      }
      *lpTlsValue = lpTlsValue[1];
      *(undefined4 *)(lpTlsValue + 2) = 0;
      lVar5 = 0;
    }
    *param_1 = lVar5;
    lpTlsValue[1] = (longlong)param_1;
    *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  }
  return param_1;
}



// FUNCTION 142f74c96 FUN_142f74c96 body=2627 status=ok
// SIG undefined FUN_142f74c96(void)

void FUN_142f74c96(longlong param_1)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  byte bVar7;
  char cVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  ulonglong *puVar11;
  byte bVar12;
  longlong *plVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  longlong *plVar19;
  byte bVar20;
  longlong lVar21;
  undefined8 *puVar22;
  ulonglong uVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  longlong *plVar27;
  undefined1 auStack_258 [32];
  undefined8 local_238;
  uint local_230;
  undefined8 **local_228;
  undefined1 local_219;
  ulonglong *local_218;
  longlong local_210;
  longlong local_208;
  int *local_200;
  longlong *local_1f8;
  longlong local_1f0;
  undefined8 *local_1e8;
  longlong local_1e0;
  ulonglong local_1d8;
  undefined4 local_1cc;
  int local_1c8;
  int local_1c4;
  longlong local_1c0;
  longlong local_1b8;
  int *local_1b0;
  undefined8 *local_1a8;
  undefined4 local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_188;
  ulonglong local_180;
  undefined4 local_178;
  undefined8 local_170;
  undefined8 local_168;
  ulonglong local_160;
  undefined4 local_158;
  undefined2 local_150;
  undefined1 local_14e;
  undefined1 local_14d;
  undefined1 local_14c;
  undefined8 *local_148;
  int *local_140;
  longlong local_138;
  ulonglong *local_130;
  ulonglong *local_128;
  ulonglong local_120;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 uStack_110;
  undefined4 local_10c;
  undefined8 local_108;
  ulonglong local_100;
  undefined4 local_f8;
  undefined2 local_f0;
  undefined1 local_ee;
  undefined1 local_ed;
  byte local_ec;
  ulonglong local_e8;
  ulonglong local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  longlong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  uint uStack_9c;
  undefined8 local_98;
  undefined8 **local_90;
  undefined5 uStack_88;
  undefined3 uStack_83;
  undefined5 uStack_80;
  undefined8 uStack_7b;
  undefined4 local_70;
  undefined1 local_64 [8];
  undefined4 local_5c;
  ulonglong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_258;
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  iVar16 = *piVar1;
  if (iVar16 == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    iVar16 = *piVar1;
  }
  *piVar1 = 0x40000010;
  local_208 = *(longlong *)(param_1 + 0xa8);
  iVar18 = *(int *)(local_208 + 0x40);
  iVar15 = *(int *)(local_208 + 0xa4) + iVar18;
  if (-1 < iVar15) {
    local_1c0 = *(longlong *)(param_1 + 0xb8);
    if (*(int *)(local_1c0 + 0x1170c) < iVar15) {
      FUN_1472bfc84(local_1c0 + 0x11700);
      local_208 = *(longlong *)(param_1 + 0xa8);
      local_1c0 = *(longlong *)(param_1 + 0xb8);
      iVar18 = *(int *)(local_208 + 0x40);
    }
    iVar15 = *(int *)(local_1c0 + 0x11708) + iVar18;
    if (-1 < iVar15) {
      local_1f8 = (longlong *)(local_1c0 + 0x11700);
      local_210 = *(longlong *)(param_1 + 0xb0);
      local_200 = *(int **)(param_1 + 0xc0);
      plVar27 = *(longlong **)(local_208 + 0x38);
      local_1b8 = param_1;
      local_1b0 = piVar1;
      if (*(int *)(local_1c0 + 0x1170c) < iVar15) {
        FUN_1472bfc84(local_1f8);
      }
      local_1c4 = *(int *)(DAT_14ca38588 + 4);
      local_98 = (code *)((ulonglong)local_98._4_4_ << 0x20);
      local_70 = 0;
      local_90 = (undefined8 **)0x0;
      uStack_88 = 0;
      uStack_83 = 0;
      uStack_80 = 0;
      uStack_7b = 0;
      local_1c8 = iVar16;
      if (iVar18 != 0) {
        plVar19 = plVar27 + (longlong)iVar18 * 8;
        lVar14 = local_208;
        lVar25 = local_210;
        do {
          lVar21 = plVar27[4];
          if (-1 < (longlong)(char)lVar21) {
            bVar2 = *(byte *)((longlong)plVar27 + 0x11);
            bVar20 = DAT_14ca385c8 == 0 & bVar2 >> 3;
            if ((byte)(bVar2 >> 4 & (bVar20 ^ 1)) == 0) {
              lVar17 = *(longlong *)(*(longlong *)(lVar25 + 0x3330) + (longlong)(int)plVar27[3] * 8)
              ;
              uVar5 = *(undefined8 *)
                       (*(longlong *)(lVar25 + 0x3358) + (longlong)(int)plVar27[3] * 8);
              if (((-1 < (char)bVar2) || (*(char *)(lVar14 + 0x10) != '\0')) &&
                 (((bVar2 & 0x40) == 0 || (DAT_14c760904 == 0)))) {
                uVar10 = FUN_1472b10b2(plVar27);
                local_c0 = DAT_14ca38630;
                local_b8 = DAT_14ca38630;
                local_b0 = 0;
                local_a8 = 0;
                local_a0 = 0;
                puVar11 = &local_c0;
                if (local_1c4 != 0) {
                  local_c8 = (ulonglong)uStack_9c << 0x20;
                  local_d8 = 0;
                  local_d0 = 0;
                  local_cc = local_a4;
                  local_e8 = DAT_14ca38630;
                  local_e0 = DAT_14ca38630;
                  puVar11 = (ulonglong *)FUN_1472b10e4(&local_98,uVar10,&local_e8);
                  if ((int)puVar11[3] != 0) {
                    cVar8 = FUN_1472b11a0(puVar11,local_200,*(undefined4 *)(lVar17 + 0x204));
                    if (((byte)*puVar11 < 2) && (*(int *)((longlong)puVar11 + 4) != -1)) {
                      lVar14 = *(longlong *)
                                (*(longlong *)(local_200 + 0x1c) + 0xd8 + (*puVar11 & 0xff) * 0xf8);
                      lVar25 = ((longlong)*puVar11 >> 0x20) * 0x60;
                      piVar1 = (int *)(lVar14 + 0x40 + lVar25);
                      *piVar1 = *piVar1 + 1;
                      if (cVar8 != '\0') {
                        lVar14 = lVar14 + lVar25;
                        uVar23 = puVar11[3];
                        *(ulonglong *)(lVar14 + 0x28) = puVar11[2];
                        *(int *)(lVar14 + 0x30) = (int)uVar23;
                        uVar23 = puVar11[3];
                        *(ulonglong *)(lVar14 + 0x48) = puVar11[2];
                        *(int *)(lVar14 + 0x50) = (int)uVar23;
                      }
                    }
                    lVar14 = local_208;
                    lVar25 = local_210;
                    if (((byte)puVar11[1] < 2) && (*(int *)((longlong)puVar11 + 0xc) != -1)) {
                      lVar21 = *(longlong *)
                                (*(longlong *)(local_200 + 0x1c) + 0xd8 + (puVar11[1] & 0xff) * 0xf8
                                );
                      lVar17 = ((longlong)puVar11[1] >> 0x20) * 0x60;
                      piVar1 = (int *)(lVar21 + 0x40 + lVar17);
                      *piVar1 = *piVar1 + 1;
                      if (cVar8 != '\0') {
                        lVar21 = lVar21 + lVar17;
                        uVar23 = puVar11[3];
                        *(ulonglong *)(lVar21 + 0x28) = puVar11[2];
                        *(int *)(lVar21 + 0x30) = (int)uVar23;
                        uVar23 = puVar11[3];
                        *(ulonglong *)(lVar21 + 0x48) = puVar11[2];
                        *(int *)(lVar21 + 0x50) = (int)uVar23;
                      }
                    }
                    goto LAB_142f75000;
                  }
                }
                local_218 = puVar11;
                FUN_1472b11a0(puVar11,local_200,*(undefined4 *)(lVar17 + 0x204));
                puVar11 = local_218;
                local_1e8 = *(undefined8 **)(*plVar27 + 0x90);
                bVar7 = *(byte *)((longlong)plVar27 + 0x11);
                bVar12 = ((bVar7 & 6) != 4) << 3;
                if ((bVar7 & 1) == 0) {
                  bVar12 = 0;
                }
                bVar12 = bVar7 >> 4 & 2 | bVar12;
                bVar7 = bVar12 | 4;
                if ((*(byte *)((longlong)plVar27 + 0x12) & 1) == 0) {
                  bVar7 = bVar12;
                }
                local_1d8 = local_218[2];
                bVar12 = bVar7 | 8;
                if (DAT_14ca385f8 == 0) {
                  bVar12 = bVar7;
                }
                local_1cc = (undefined4)local_218[3];
                bVar7 = bVar12 | 2;
                if (DAT_14ca385e0 == 0) {
                  bVar7 = bVar12;
                }
                local_1e0 = CONCAT44(local_1e0._4_4_,(uint)bVar7);
                local_219 = (undefined1)plVar27[2];
                *local_218 = DAT_14ca38630;
                local_1f0 = *(longlong *)(lVar17 + 0x180);
                lVar21 = (longlong)(char)lVar21 * 0x30;
                lVar14 = local_208;
                lVar25 = local_210;
                if (*(longlong *)(local_1f0 + 0x28 + lVar21) != 0) {
                  local_1f0 = local_1f0 + lVar21;
                  iVar16 = *(int *)(*plVar27 + 0x60);
                  if ((bVar2 & 0x10) == 0) {
                    *local_200 = *local_200 + iVar16;
                    local_140 = (int *)CONCAT44(local_140._4_4_,**(undefined4 **)(local_1f0 + 0x28))
                    ;
                    local_138 = 0;
                    local_130 = (ulonglong *)((ulonglong)local_130 & 0xffffffff00000000);
                    local_128 = (ulonglong *)CONCAT44(local_128._4_4_,0xffffffff);
                    uStack_110 = 0;
                    local_10c = 0;
                    local_108 = 1;
                    local_f0 = 0;
                    local_ed = 0;
                    local_230 = local_230 & 0xffffff00;
                    local_238 = uVar5;
                    local_148 = local_1e8;
                    local_120 = local_1d8;
                    local_118 = local_1cc;
                    local_100 = local_1d8;
                    local_f8 = local_1cc;
                    local_ee = local_219;
                    local_ec = bVar7;
                    FUN_1472b0bf2(local_200,&local_58,&local_148,0);
                    *puVar11 = local_58;
                  }
                  piVar1 = local_200;
                  puVar11[1] = DAT_14ca38630;
                  if (bVar20 != 0) {
                    *local_200 = *local_200 + iVar16;
                    local_1a0 = FUN_1472c3992(*(undefined8 *)(local_1f0 + 0x28),1,0);
                    local_1a8 = local_1e8;
                    local_198 = 0;
                    local_190 = 0;
                    local_188 = 0xffffffff;
                    local_180 = local_1d8;
                    local_178 = local_1cc;
                    local_170 = 0;
                    local_168 = 1;
                    local_160 = local_1d8;
                    local_158 = local_1cc;
                    local_150 = 0;
                    local_14e = local_219;
                    local_14d = 0;
                    local_14c = (undefined1)local_1e0;
                    local_230 = local_230 & 0xffffff00;
                    local_238 = uVar5;
                    FUN_1472b0bf2(piVar1,&local_58,&local_1a8,1);
                    local_218[1] = local_58;
                  }
                  uVar23 = local_1f0 + 0x10;
                  if (*(ulonglong *)(local_1f0 + 0x18) != 0) {
                    uVar23 = *(ulonglong *)(local_1f0 + 0x18);
                  }
                  lVar14 = local_208;
                  lVar25 = local_210;
                  if ((longlong)*(int *)(local_1f0 + 0x20) != 0) {
                    lVar21 = (longlong)*(int *)(local_1f0 + 0x20) << 2;
                    lVar17 = 0;
                    plVar13 = local_1f8;
                    local_1e0 = lVar21;
                    local_1d8 = uVar23;
                    do {
                      if (-1 < (longlong)*(int *)(uVar23 + lVar17)) {
                        lVar26 = (longlong)*(int *)(uVar23 + lVar17) * 0x98 +
                                 *(longlong *)(lVar25 + 0x2a08);
                        if ((bVar2 & 0x10) == 0) {
                          iVar16 = *(int *)(lVar26 + 0x84);
                          iVar18 = **(int **)(local_1f0 + 0x28);
                          local_218 = (ulonglong *)
                                      CONCAT71(local_218._1_7_,*(undefined1 *)(lVar26 + 0x8c));
                          local_1e8 = *(undefined8 **)(*plVar27 + 0x90);
                          iVar15 = *(int *)(local_1c0 + 0x11708);
                          *(uint *)(local_1c0 + 0x11708) = iVar15 + 1U;
                          if (*(uint *)(local_1c0 + 0x1170c) < iVar15 + 1U) {
                            FUN_14714c1d8(plVar13,iVar15);
                            plVar13 = local_1f8;
                            lVar21 = local_1e0;
                            lVar14 = local_208;
                            lVar25 = local_210;
                            uVar23 = local_1d8;
                          }
                          lVar6 = *plVar13;
                          lVar24 = (longlong)iVar15 * 0x20;
                          *(longlong *)(lVar6 + lVar24) = lVar26;
                          *(undefined8 **)(lVar6 + 8 + lVar24) = local_1e8;
                          *(int *)(lVar6 + 0x10 + lVar24) = iVar16 * 2 + iVar18;
                          *(undefined4 *)(lVar6 + 0x14 + lVar24) = 0xffffffff;
                          *(undefined1 *)(lVar6 + 0x18 + lVar24) = local_218._0_1_;
                        }
                        if (bVar20 != 0) {
                          bVar7 = *(byte *)(lVar26 + 0x8c);
                          uVar9 = FUN_1472c3992(*(undefined8 *)(local_1f0 + 0x28),1,
                                                *(undefined4 *)(lVar26 + 0x84));
                          puVar22 = *(undefined8 **)(*plVar27 + 0x90);
                          iVar16 = *(int *)(local_1c0 + 0x11708);
                          *(uint *)(local_1c0 + 0x11708) = iVar16 + 1U;
                          if (*(uint *)(local_1c0 + 0x1170c) < iVar16 + 1U) {
                            local_218 = (ulonglong *)CONCAT44(local_218._4_4_,uVar9);
                            local_1e8 = puVar22;
                            FUN_14714c1d8(local_1f8,iVar16);
                            puVar22 = local_1e8;
                            uVar9 = (int)local_218;
                          }
                          lVar14 = *local_1f8;
                          lVar25 = (longlong)iVar16 * 0x20;
                          *(longlong *)(lVar14 + lVar25) = lVar26;
                          *(undefined8 **)(lVar14 + 8 + lVar25) = puVar22;
                          *(undefined4 *)(lVar14 + 0x10 + lVar25) = uVar9;
                          *(undefined4 *)(lVar14 + 0x14 + lVar25) = 0xffffffff;
                          *(byte *)(lVar14 + 0x18 + lVar25) = bVar7 ^ 1;
                          plVar13 = local_1f8;
                          lVar21 = local_1e0;
                          lVar14 = local_208;
                          lVar25 = local_210;
                          uVar23 = local_1d8;
                        }
                      }
                      lVar17 = lVar17 + 4;
                    } while (lVar21 != lVar17);
                  }
                }
              }
            }
          }
LAB_142f75000:
          plVar27 = plVar27 + 8;
        } while (plVar27 != plVar19);
      }
      FUN_1472bba5a(&local_98);
      lVar14 = *(longlong *)(local_1b8 + 0xa8);
      lVar25 = *(longlong *)(local_1b8 + 0xb8);
      piVar1 = *(int **)(local_1b8 + 0xc0);
      uVar3 = *(uint *)(lVar14 + 0xa4);
      local_218 = (ulonglong *)CONCAT44(local_218._4_4_,*(undefined4 *)(lVar14 + 0xa0));
      uVar9 = *(undefined4 *)(lVar14 + 0x9c);
      local_c0 = *(ulonglong *)(lVar14 + 0x58);
      local_b8 = CONCAT44(local_b8._4_4_,*(undefined4 *)(lVar14 + 0x60));
      local_e8 = *(ulonglong *)(lVar14 + 0x48);
      uVar4 = *(undefined4 *)(lVar14 + 0x50);
      local_e0 = CONCAT44(local_e0._4_4_,uVar4);
      puVar22 = *(undefined8 **)(local_1b8 + 0xb0);
      FUN_1472b1268(piVar1,&local_58,*(undefined4 *)(lVar14 + 0x98),0);
      FUN_1472b1268(piVar1,local_64,uVar9,1);
      iVar16 = *(int *)(lVar25 + 0x11708);
      *(uint *)(lVar25 + 0x11708) = iVar16 + uVar3;
      if ((uint)(*(int *)(lVar25 + 0x1170c) - iVar16) < uVar3) {
        FUN_14714c1d8(lVar25 + 0x11700,iVar16);
      }
      *piVar1 = *piVar1 + (int)local_218;
      local_90 = &local_148;
      local_130 = &local_e8;
      local_128 = &local_c0;
      local_120 = local_58;
      local_118 = local_50;
      local_114 = local_64._0_4_;
      uStack_110 = local_64._4_4_;
      local_10c = local_5c;
      local_108 = CONCAT44(local_108._4_4_,iVar16);
      local_228 = &local_1a8;
      local_1a8 = (undefined8 *)0x0;
      local_1a0 = 0;
      local_98 = FUN_142f72f32;
      local_230 = 0;
      local_148 = puVar22;
      local_140 = piVar1;
      local_138 = lVar25 + 0x11700;
      FUN_1411ca36e(L"RayTracingScene_AddCachedStaticInstances_ParallelFor",uVar4,0x80);
      *local_1b0 = local_1c8;
      if ((local_48 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar15);
}



// FUNCTION 142f756da FUN_142f756da body=110 status=ok
// SIG undefined FUN_142f756da(void)

undefined8 * FUN_142f756da(undefined8 *param_1,int param_2)

{
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
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
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142f75748 FUN_142f75748 body=547 status=ok
// SIG undefined FUN_142f75748(void)

longlong * FUN_142f75748(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  longlong *lpTlsValue;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
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
      lVar5 = lpTlsValue[1];
    }
    else {
      lVar5 = *lpTlsValue;
      if (lVar5 != 0) {
        uVar2 = FUN_14493c560();
        if (uVar2 == 0) {
          uVar3 = 0;
          uVar7 = 0;
          lVar6 = 0;
        }
        else {
          uVar7 = (ulonglong)(uVar2 >> 0xe);
          uVar3 = uVar2 & 0x3fff;
          lVar6 = (ulonglong)(uVar3 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar7 * 8);
        }
        *(longlong *)(lVar6 + 8) = lVar5;
        do {
          uVar1 = DAT_14c896180;
          uVar4 = (DAT_14c896180 & 0xfffffffffc000000) + 0x4000000;
          if (uVar4 >> 0x1a < DAT_14c896180 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          if (uVar2 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = *(longlong *)(&DAT_14c833b00 + uVar7 * 8) + (ulonglong)(uVar3 * 0x18);
          }
          *(uint *)(lVar5 + 0x10) = (uint)uVar1 & 0x3ffffff;
          LOCK();
          bVar8 = uVar1 != DAT_14c896180;
          uVar1 = uVar4 | uVar2;
          if (bVar8) {
            uVar1 = DAT_14c896180;
          }
          DAT_14c896180 = uVar1;
          UNLOCK();
        } while (bVar8);
      }
      *lpTlsValue = lpTlsValue[1];
      *(undefined4 *)(lpTlsValue + 2) = 0;
      lVar5 = 0;
    }
    *param_1 = lVar5;
    lpTlsValue[1] = (longlong)param_1;
    *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  }
  return param_1;
}



// FUNCTION 142f7596c FUN_142f7596c body=747 status=ok
// SIG undefined FUN_142f7596c(void)

void FUN_142f7596c(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  uint *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  int iVar12;
  byte bVar13;
  undefined1 *puVar14;
  uint uVar15;
  longlong lVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  undefined1 auStack_a8 [44];
  int local_7c;
  longlong local_78;
  undefined8 uStack_70;
  undefined1 local_68 [16];
  undefined1 *local_58;
  int local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  iVar17 = *piVar1;
  if (iVar17 == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    iVar17 = *piVar1;
  }
  *piVar1 = 0x40000010;
  puVar5 = *(uint **)(param_1 + 0xb8);
  iVar12 = puVar5[(ulonglong)(byte)puVar5[0x40] + 0xd] / *puVar5 + puVar5[0x60];
  local_50 = iVar12 * 2;
  local_58 = (undefined1 *)0x0;
  local_4c = 0x80;
  uVar15 = iVar12 * 2 + 0x1f;
  if (uVar15 < 0x20) goto LAB_142f75a9b;
  if (uVar15 < 0xa0) {
    puVar14 = local_68;
LAB_142f75a53:
    uVar15 = uVar15 >> 3 & 0xfffffffc;
  }
  else {
    FUN_1446efa72(&local_58,0,uVar15 >> 5,4);
    local_4c = uVar15 & 0xffffffe0;
    puVar14 = local_68;
    if (local_58 != (undefined1 *)0x0) {
      puVar14 = local_58;
    }
    if (uVar15 < 0x120) goto LAB_142f75a53;
    uVar15 = (uVar15 >> 5) << 2;
  }
  memset(puVar14,0,(ulonglong)uVar15);
  iVar12 = local_50 + 0x1f;
  if (-1 < local_50) {
    iVar12 = local_50;
  }
  if (local_50 % 0x20 != 0) {
    puVar14 = local_58;
    if (local_58 == (undefined1 *)0x0) {
      puVar14 = local_68;
    }
    bVar13 = -(char)(local_50 % 0x20);
    *(uint *)(puVar14 + (longlong)(iVar12 >> 5) * 4) =
         (uint)(*(int *)(puVar14 + (longlong)(iVar12 >> 5) * 4) << (bVar13 & 0x1f)) >>
         (bVar13 & 0x1f);
  }
LAB_142f75a9b:
  local_78 = 0;
  uStack_70 = 0;
  lVar19 = *(longlong *)(param_1 + 0xa8);
  iVar12 = *(int *)(lVar19 + 0x11708);
  if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar12);
  }
  if (iVar12 != 0) {
    FUN_1472bfc84(&local_78);
    lVar19 = *(longlong *)(param_1 + 0xa8);
    iVar12 = *(int *)(lVar19 + 0x11708);
    if ((longlong)iVar12 != 0) {
      lVar19 = *(longlong *)(lVar19 + 0x11700) + 0x10;
      lVar20 = 0;
      local_7c = iVar17;
      do {
        uVar11 = uStack_70;
        uVar15 = *(uint *)(lVar19 + lVar20);
        puVar14 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar14 = local_68;
        }
        uVar18 = uVar15 + 0x1f;
        if (-1 < (int)uVar15) {
          uVar18 = uVar15;
        }
        if ((*(uint *)(puVar14 + (longlong)((int)uVar18 >> 5) * 4) >> (uVar15 & 0x1f) & 1) == 0) {
          *(uint *)(puVar14 + (longlong)((int)uVar18 >> 5) * 4) =
               *(uint *)(puVar14 + (longlong)((int)uVar18 >> 5) * 4) | 1 << ((byte)uVar15 & 0x1f);
          lVar16 = (longlong)(int)uStack_70;
          uVar15 = (int)uStack_70 + 1;
          uStack_70 = CONCAT44(uStack_70._4_4_,uVar15);
          if (uStack_70._4_4_ < uVar15) {
            FUN_14714c1d8(&local_78,uVar11 & 0xffffffff);
          }
          puVar2 = (undefined8 *)(lVar19 + lVar20);
          uVar6 = *(undefined4 *)(puVar2 + -2);
          uVar7 = *(undefined4 *)((longlong)puVar2 + -0xc);
          uVar8 = *(undefined4 *)(puVar2 + -1);
          uVar9 = *(undefined4 *)((longlong)puVar2 + -4);
          uVar10 = puVar2[1];
          puVar4 = (undefined8 *)(local_78 + 0x10 + lVar16 * 0x20);
          *puVar4 = *puVar2;
          puVar4[1] = uVar10;
          puVar3 = (undefined4 *)(local_78 + lVar16 * 0x20);
          *puVar3 = uVar6;
          puVar3[1] = uVar7;
          puVar3[2] = uVar8;
          puVar3[3] = uVar9;
        }
        lVar20 = lVar20 + 0x20;
      } while ((longlong)iVar12 * 0x20 != lVar20);
      lVar19 = *(longlong *)(param_1 + 0xa8);
      iVar17 = local_7c;
    }
  }
  if ((longlong *)(lVar19 + 0x11700) == &local_78) {
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(lVar19 + 0x11700) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(lVar19 + 0x11700) = local_78;
    local_78 = 0;
    *(int *)(lVar19 + 0x11708) = (int)uStack_70;
    *(uint *)(lVar19 + 0x1170c) = uStack_70._4_4_;
  }
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  *(undefined1 *)(*(longlong *)(param_1 + 0xb8) + 4) = 0;
  FUN_1472bb432(*(undefined8 *)(param_1 + 0xb0));
  *piVar1 = iVar17;
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f75c58 FUN_142f75c58 body=110 status=ok
// SIG undefined FUN_142f75c58(void)

undefined8 * FUN_142f75c58(undefined8 *param_1,int param_2)

{
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
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
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142f75cc6 FUN_142f75cc6 body=38 status=ok
// SIG undefined FUN_142f75cc6(void)

undefined8 FUN_142f75cc6(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142f75cec FUN_142f75cec body=2396 status=ok
// SIG undefined FUN_142f75cec(void)

void FUN_142f75cec(longlong param_1,ulonglong *param_2)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined1 *_Src;
  ulonglong *_Src_00;
  undefined8 *puVar16;
  undefined8 *puVar17;
  size_t _Size;
  longlong lVar18;
  bool bVar19;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined4 local_110;
  undefined8 *local_100;
  ulonglong local_f8;
  longlong local_f0;
  longlong local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined1 local_d8;
  undefined7 uStack_d7;
  ulonglong local_d0;
  ulonglong uStack_c8;
  ulonglong local_c0;
  undefined8 uStack_b8;
  undefined2 local_b0;
  longlong local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  ulonglong *local_88;
  int local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_58 [8];
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_144b1c6fa(param_1 + 0x10,&stack0xffffffffffffff20);
  puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar16 + 0x11;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x90);
    puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar16 + 0x11;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar16;
  param_2[6] = (ulonglong)(puVar16 + 1);
  puVar16[1] = 0;
  *puVar16 = &PTR_FUN_14a1fb978;
  puVar16[3] = 0;
  _Size = (size_t)(int)local_d0;
  *(int *)(puVar16 + 4) = (int)local_d0;
  if (_Size == 0) {
    *(undefined4 *)((longlong)puVar16 + 0x24) = 8;
  }
  else {
    _Src = (undefined1 *)&stack0xffffffffffffff20;
    if ((undefined1 *)CONCAT71(uStack_d7,local_d8) != (undefined1 *)0x0) {
      _Src = (undefined1 *)CONCAT71(uStack_d7,local_d8);
    }
    FUN_1446fe144(puVar16 + 2,local_d0 & 0xffffffff,0);
    puVar12 = (undefined8 *)puVar16[3];
    if ((undefined8 *)puVar16[3] == (undefined8 *)0x0) {
      puVar12 = puVar16 + 2;
    }
    memcpy(puVar12,_Src,_Size);
  }
  puVar16[0xd] = 0;
  lVar18 = (longlong)local_80;
  *(int *)(puVar16 + 0xe) = local_80;
  if (lVar18 == 0) {
    *(undefined4 *)((longlong)puVar16 + 0x74) = 8;
  }
  else {
    _Src_00 = local_88;
    if (local_88 == (ulonglong *)0x0) {
      _Src_00 = &uStack_c8;
    }
    FUN_1446fe1b8(puVar16 + 5,local_80,0);
    puVar12 = (undefined8 *)puVar16[0xd];
    if ((undefined8 *)puVar16[0xd] == (undefined8 *)0x0) {
      puVar12 = puVar16 + 5;
    }
    memcpy(puVar12,_Src_00,lVar18 << 3);
  }
  *(undefined4 *)(puVar16 + 0xf) = (undefined4)local_78;
  *(undefined4 *)((longlong)puVar16 + 0x7c) = local_78._4_4_;
  *(undefined4 *)(puVar16 + 0x10) = uStack_70;
  *(undefined4 *)((longlong)puVar16 + 0x84) = uStack_6c;
  if (local_88 != (ulonglong *)0x0) {
    FUN_1400020a8(local_88);
  }
  if (CONCAT71(uStack_d7,local_d8) != 0) {
    FUN_1400020a8();
  }
  lVar18 = *(longlong *)(param_1 + 0x1c0);
  uVar7 = FUN_144821ef4(param_2);
  uVar9 = *(undefined8 *)(param_1 + 0x1b8);
  FUN_145eaf95c();
  FUN_1472c0da9(uVar7,(longlong *)(param_1 + 0x1d8),uVar9);
  FUN_1472b057a(local_58,*(undefined8 *)(param_1 + 0x1c8),*(undefined8 *)(param_1 + 0x1d0),param_2);
  uVar9 = *(undefined8 *)(*(longlong *)(param_1 + 0x1c8) + 0x13ae0);
  puVar12 = *(undefined8 **)(*(longlong *)(param_1 + 0x1c8) + 0x13ae8);
  if (puVar12 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar12 + 1) = *(int *)(puVar12 + 1) + 1;
    UNLOCK();
  }
  puVar16 = puVar12;
  if (*(int *)(DAT_14ca386a8 + 4) != 0) goto LAB_142f764e0;
  _local_e0 = 0x1800000008;
  local_d8 = 1;
  local_88 = (ulonglong *)0x0;
  local_80 = 0;
  local_78 = (longlong *)0x0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  local_98._0_4_ = 0;
  local_98._4_4_ = 0;
  local_90 = 0;
  uVar6 = DAT_14ca98718;
  if (DAT_14ca98620 != (code *)0x0) {
    uVar6 = (*DAT_14ca98620)();
  }
  _local_e0 = CONCAT44(uVar6,local_e0);
  if (((*(byte *)((longlong)&DAT_14ca814d0 + (ulonglong)*(ushort *)(lVar18 + 0x8a8) * 0x3c + 7) &
       0x60) != 0) && (lVar8 = FUN_1472b0504(0), lVar8 != 0)) {
    uStack_a0 = (undefined4)lVar8;
    uStack_9c = (undefined4)((ulonglong)lVar8 >> 0x20);
  }
  lVar8 = *(longlong *)(param_1 + 0x1d8);
  if (lVar8 == 0) {
    local_e8 = 0;
LAB_142f76023:
    lVar8 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1e0) + 8);
    lVar8 = (longlong)*(int *)(lVar8 + 0xd4);
    local_e8 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar8 * 8);
    if (local_e8 == 0) {
      local_e8 = FUN_1400bafc2(lVar15,lVar8,1);
    }
    if (local_e8 == 0) goto LAB_142f76023;
    lVar8 = *(longlong *)(local_e8 + 0x88);
  }
  local_90 = 1;
  local_d0 = lVar8 + 0xda48bfd15ce60c08U ^ 0x4f1a08f64cae0c3d;
  local_98 = &local_e8;
  local_f0 = FUN_1472ba6ff(*(undefined8 *)(*(longlong *)(param_1 + 0x1c8) + 0x13818));
  local_78 = &local_f0;
  uStack_70 = 1;
  if (local_f0 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = *(longlong *)(local_f0 + 0x88);
  }
  local_c0 = lVar8 + 0xda48bfd15ce60c08U ^ 0x4f1a08f64cae0c3d;
  local_f8 = FUN_1472b6f9a(*(undefined8 *)(*(longlong *)(param_1 + 0x1c8) + 0x13818));
  local_88 = &local_f8;
  local_80 = 1;
  if (local_f8 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = *(longlong *)(local_f8 + 0x88);
  }
  uStack_c8 = lVar8 + 0xda48bfd15ce60c08U ^ 0x4f1a08f64cae0c3d;
  uVar9 = FUN_1431e3d59(param_2,&stack0xffffffffffffff20,0);
  lVar18 = *(longlong *)(lVar18 + 8);
  local_110 = FUN_147413892(&stack0xffffffffffffff20);
  local_120 = *(undefined4 *)(*(longlong *)(param_1 + 0x1f0) + 4);
  local_118 = *(undefined4 *)(*(longlong *)(param_1 + 0x1f0) + 8);
  local_128 = CONCAT44(local_128._4_4_,1);
  FUN_1472c3ac0(lVar18 + 0x43f8,&local_100,param_2,2);
  puVar16 = local_100;
  local_100 = (undefined8 *)0x0;
  if (puVar12 != (undefined8 *)0x0) {
    LOCK();
    puVar2 = (uint *)(puVar12 + 1);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      puVar2 = (uint *)(puVar12 + 1);
      LOCK();
      uVar3 = *puVar2;
      *puVar2 = *puVar2 | 0x40000000;
      UNLOCK();
      if ((uVar3 >> 0x1e & 1) == 0) {
        bVar4 = *(byte *)((longlong)puVar12 + 0xd);
        plVar10 = (longlong *)FUN_14001cc68(0x10,8);
        plVar10[1] = (longlong)puVar12;
        plVar14 = DAT_14ca843c0;
        plVar13 = DAT_14ca843c8;
        if ((bVar4 & 2) == 0) {
          do {
            *plVar10 = (longlong)plVar14;
            LOCK();
            bVar19 = plVar14 != DAT_14ca843c0;
            plVar13 = plVar10;
            if (bVar19) {
              plVar14 = DAT_14ca843c0;
              plVar13 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar13;
            UNLOCK();
          } while (bVar19);
        }
        else {
          do {
            *plVar10 = (longlong)plVar13;
            LOCK();
            bVar19 = plVar13 != DAT_14ca843c8;
            plVar14 = plVar10;
            if (bVar19) {
              plVar13 = DAT_14ca843c8;
              plVar14 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar14;
            UNLOCK();
          } while (bVar19);
        }
      }
    }
    puVar12 = local_100;
    if (local_100 != (undefined8 *)0x0) {
      LOCK();
      puVar2 = (uint *)(local_100 + 1);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(local_100 + 1);
        LOCK();
        uVar3 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)((longlong)local_100 + 0xd);
          plVar10 = (longlong *)FUN_14001cc68(0x10,8);
          plVar10[1] = (longlong)puVar12;
          plVar14 = DAT_14ca843c0;
          plVar13 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar10 = (longlong)plVar14;
              LOCK();
              bVar19 = plVar14 != DAT_14ca843c0;
              plVar13 = plVar10;
              if (bVar19) {
                plVar14 = DAT_14ca843c0;
                plVar13 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar13;
              UNLOCK();
            } while (bVar19);
          }
          else {
            do {
              *plVar10 = (longlong)plVar13;
              LOCK();
              bVar19 = plVar13 != DAT_14ca843c8;
              plVar14 = plVar10;
              if (bVar19) {
                plVar13 = DAT_14ca843c8;
                plVar14 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar14;
              UNLOCK();
            } while (bVar19);
          }
        }
      }
    }
  }
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar17 + 7;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x40);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar17 + 7;
  }
  *param_2 = (ulonglong)puVar12;
  puVar17[4] = 0;
  puVar17[5] = 0;
  puVar17[2] = 0;
  puVar17[3] = 0;
  *puVar17 = 0;
  puVar17[1] = 0;
  puVar17[6] = 0;
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar11 + 8;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x48);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar11 + 8;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_14a203848;
  puVar11[2] = puVar16;
  puVar11[3] = 0;
  puVar11[4] = uVar9;
  *(undefined4 *)(puVar11 + 5) = 1;
  puVar11[6] = puVar17;
  *(undefined1 *)(puVar11 + 7) = 0;
  FUN_14494c7ac(param_2,&local_100,1);
  if (local_100 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_100 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_100)(local_100,1);
    }
  }
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar17 + 7;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x40);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar17 + 7;
  }
  *param_2 = (ulonglong)puVar12;
  puVar17[4] = 0;
  puVar17[5] = 0;
  puVar17[2] = 0;
  puVar17[3] = 0;
  *puVar17 = 0;
  puVar17[1] = 0;
  puVar17[6] = 0;
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar11 + 8;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x48);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar11 + 8;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_14a203848;
  puVar11[2] = puVar16;
  puVar11[3] = 0;
  puVar11[4] = uVar9;
  *(undefined4 *)(puVar11 + 5) = 1;
  puVar11[6] = puVar17;
  *(undefined1 *)(puVar11 + 7) = 2;
  FUN_14494c7ac(param_2,&local_100,1);
  if (local_100 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_100 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_100)(local_100,1);
    }
  }
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar17 + 3;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x20);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar17 + 3;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a203850;
  puVar17[2] = puVar16;
  FUN_14494c7ac(param_2,&local_100,1);
  if (local_100 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_100 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_100)(local_100,1);
    }
  }
  lVar18 = local_a8;
  if (local_a8 != 0) {
    LOCK();
    puVar2 = (uint *)(local_a8 + 8);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      puVar2 = (uint *)(local_a8 + 8);
      LOCK();
      uVar3 = *puVar2;
      *puVar2 = *puVar2 | 0x40000000;
      UNLOCK();
      if ((uVar3 >> 0x1e & 1) == 0) {
        bVar4 = *(byte *)(local_a8 + 0xd);
        plVar10 = (longlong *)FUN_14001cc68(0x10,8);
        plVar10[1] = lVar18;
        plVar14 = DAT_14ca843c0;
        plVar13 = DAT_14ca843c8;
        if ((bVar4 & 2) == 0) {
          do {
            *plVar10 = (longlong)plVar14;
            LOCK();
            bVar19 = plVar14 != DAT_14ca843c0;
            plVar13 = plVar10;
            if (bVar19) {
              plVar14 = DAT_14ca843c0;
              plVar13 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar13;
            UNLOCK();
          } while (bVar19);
        }
        else {
          do {
            *plVar10 = (longlong)plVar13;
            LOCK();
            bVar19 = plVar13 != DAT_14ca843c8;
            plVar14 = plVar10;
            if (bVar19) {
              plVar13 = DAT_14ca843c8;
              plVar14 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar14;
            UNLOCK();
          } while (bVar19);
        }
      }
    }
  }
LAB_142f764e0:
  uVar6 = *(undefined4 *)(param_1 + 0x1ec);
  uVar5 = *(undefined4 *)(param_1 + 0x1e8);
  if (*(longlong *)(param_1 + 0x1d8) == 0) {
    lVar8 = 0;
  }
  else {
    lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x1e0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1d8) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar18 + 0x50) + lVar15 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar18,lVar15,1);
    }
  }
  local_128 = uVar7;
  local_120 = uVar5;
  local_118 = uVar6;
  FUN_147412f8e(param_2,uVar9,lVar8,puVar16);
  if (puVar16 != (undefined8 *)0x0) {
    LOCK();
    puVar2 = (uint *)(puVar16 + 1);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      puVar2 = (uint *)(puVar16 + 1);
      LOCK();
      uVar3 = *puVar2;
      *puVar2 = *puVar2 | 0x40000000;
      UNLOCK();
      if ((uVar3 >> 0x1e & 1) == 0) {
        bVar4 = *(byte *)((longlong)puVar16 + 0xd);
        plVar10 = (longlong *)FUN_14001cc68(0x10,8);
        plVar10[1] = (longlong)puVar16;
        plVar14 = DAT_14ca843c0;
        plVar13 = DAT_14ca843c8;
        if ((bVar4 & 2) == 0) {
          do {
            *plVar10 = (longlong)plVar14;
            LOCK();
            bVar19 = plVar14 != DAT_14ca843c0;
            plVar13 = plVar10;
            if (bVar19) {
              plVar14 = DAT_14ca843c0;
              plVar13 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar13;
            UNLOCK();
          } while (bVar19);
        }
        else {
          do {
            *plVar10 = (longlong)plVar13;
            LOCK();
            bVar19 = plVar13 != DAT_14ca843c8;
            plVar14 = plVar10;
            if (bVar19) {
              plVar13 = DAT_14ca843c8;
              plVar14 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar14;
            UNLOCK();
          } while (bVar19);
        }
      }
    }
  }
  if (local_50 == '\x01') {
    FUN_1471f3c22(local_58);
  }
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142f7664a FUN_142f7664a body=481 status=ok
// SIG undefined FUN_142f7664a(void)

void FUN_142f7664a(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_1472c134c(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f7682c FUN_142f7682c body=232 status=ok
// SIG undefined FUN_142f7682c(void)

void FUN_142f7682c(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 142f76914 FUN_142f76914 body=81 status=ok
// SIG undefined FUN_142f76914(void)

void FUN_142f76914(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1472c13ef(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142f76966 FUN_142f76966 body=31 status=ok
// SIG undefined FUN_142f76966(void)

undefined8 FUN_142f76966(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142f76986 FUN_142f76986 body=99 status=ok
// SIG undefined FUN_142f76986(void)

void FUN_142f76986(longlong *param_1)

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



// FUNCTION 142f769ea FUN_142f769ea body=450 status=ok
// SIG undefined FUN_142f769ea(void)

void FUN_142f769ea(undefined8 *param_1,uint param_2)

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
  
  uVar3 = (ulonglong)param_2;
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar3,0x20);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_142f76b05:
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
LAB_142f76b42:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 0x20;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_142f76a40;
LAB_142f76a35:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_142f76a40:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 3U & 0xfffffffffffffffc);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0x7fe) goto code_r0x000142f76a6c;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x5c,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 8 + 0x17;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_142f76ac2:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_142f76b42;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_142f76b05;
code_r0x000142f76a6c:
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
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_142f76ac2;
    }
  }
  goto LAB_142f76a35;
}



// FUNCTION 142f76bac FUN_142f76bac body=38 status=ok
// SIG undefined FUN_142f76bac(void)

undefined8 FUN_142f76bac(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142f76bd2 FUN_142f76bd2 body=219 status=ok
// SIG undefined FUN_142f76bd2(void)

void FUN_142f76bd2(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1c8);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  FUN_142f76cd4(param_1,param_2);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = 4;
  return;
}



// FUNCTION 142f76cae FUN_142f76cae body=38 status=ok
// SIG undefined FUN_142f76cae(void)

undefined8 FUN_142f76cae(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142f76cd4 FUN_142f76cd4 body=4698 status=ok
// SIG undefined FUN_142f76cd4(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_142f76cd4(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  void *pvVar11;
  DWORD DVar12;
  char cVar13;
  int iVar14;
  int iVar15;
  DWORD dwTlsIndex;
  DWORD DVar16;
  undefined8 *puVar17;
  LPVOID lpTlsValue;
  ulonglong uVar18;
  undefined8 uVar19;
  longlong lVar20;
  ulonglong uVar21;
  void *pvVar22;
  void *pvVar23;
  uint *puVar24;
  uint uVar25;
  longlong lVar26;
  undefined8 *puVar27;
  ulonglong *puVar28;
  size_t sVar29;
  int *piVar30;
  void *pvVar31;
  longlong lVar32;
  int iVar33;
  int iVar34;
  void *pvVar35;
  void *pvVar36;
  uint uVar37;
  void *pvVar38;
  void *pvVar39;
  longlong lVar40;
  bool bVar41;
  float fVar42;
  undefined1 auStack_4d8 [32];
  uint *local_4b8;
  void *local_4b0;
  longlong local_4a8;
  ulonglong *local_4a0;
  void *local_498;
  undefined8 local_490;
  void *local_488;
  longlong local_480;
  undefined4 local_478;
  longlong local_470;
  undefined4 local_468;
  ulonglong local_460;
  void *local_458;
  undefined8 uStack_450;
  longlong local_448;
  undefined8 uStack_440;
  longlong local_438;
  undefined8 uStack_430;
  undefined8 *local_420;
  undefined8 local_418;
  longlong local_410;
  char local_408;
  undefined8 local_400;
  uint local_3f8;
  undefined4 uStack_3f4;
  undefined8 uStack_3f0;
  int aiStack_3e8 [188];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  longlong local_b8;
  undefined4 local_b0;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_4d8;
  FUN_144b1c6fa(param_1 + 0x10);
  puVar27 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar17 = puVar27 + 0x11;
  if ((undefined8 *)param_2[1] < puVar17) {
    FUN_140023dd8(param_2);
    puVar27 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar17 = puVar27 + 0x11;
  }
  *param_2 = (ulonglong)puVar17;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar27;
  param_2[6] = (ulonglong)(puVar27 + 1);
  puVar27[1] = 0;
  *puVar27 = &PTR_FUN_14a1fb978;
  puVar27[3] = 0;
  sVar29 = (size_t)aiStack_3e8[0];
  *(int *)(puVar27 + 4) = aiStack_3e8[0];
  local_4a0 = param_2;
  if (sVar29 == 0) {
    *(undefined4 *)((longlong)puVar27 + 0x24) = 8;
  }
  else {
    puVar24 = (uint *)CONCAT44(uStack_3f0._4_4_,(undefined4)uStack_3f0);
    if ((uint *)CONCAT44(uStack_3f0._4_4_,(undefined4)uStack_3f0) == (uint *)0x0) {
      puVar24 = &local_3f8;
    }
    FUN_1446fe144(puVar27 + 2,aiStack_3e8[0],0);
    puVar17 = (undefined8 *)puVar27[3];
    if ((undefined8 *)puVar27[3] == (undefined8 *)0x0) {
      puVar17 = puVar27 + 2;
    }
    memcpy(puVar17,puVar24,sVar29);
  }
  puVar27[0xd] = 0;
  lVar40 = (longlong)aiStack_3e8[0x14];
  piVar30 = (int *)CONCAT44(aiStack_3e8[0x13],aiStack_3e8[0x12]);
  *(int *)(puVar27 + 0xe) = aiStack_3e8[0x14];
  if (lVar40 == 0) {
    *(undefined4 *)((longlong)puVar27 + 0x74) = 8;
  }
  else {
    if (piVar30 == (int *)0x0) {
      piVar30 = aiStack_3e8 + 2;
    }
    FUN_1446fe1b8(puVar27 + 5,aiStack_3e8[0x14],0);
    puVar17 = (undefined8 *)puVar27[0xd];
    if ((undefined8 *)puVar27[0xd] == (undefined8 *)0x0) {
      puVar17 = puVar27 + 5;
    }
    memcpy(puVar17,piVar30,lVar40 << 3);
    piVar30 = (int *)CONCAT44(aiStack_3e8[0x13],aiStack_3e8[0x12]);
  }
  *(int *)(puVar27 + 0xf) = aiStack_3e8[0x16];
  *(int *)((longlong)puVar27 + 0x7c) = aiStack_3e8[0x17];
  *(int *)(puVar27 + 0x10) = aiStack_3e8[0x18];
  *(int *)((longlong)puVar27 + 0x84) = aiStack_3e8[0x19];
  if (piVar30 != (int *)0x0) {
    FUN_1400020a8(piVar30);
  }
  if (CONCAT44(uStack_3f0._4_4_,(undefined4)uStack_3f0) != 0) {
    FUN_1400020a8();
  }
  lVar40 = *(longlong *)(param_1 + 0x1b8);
  if (**(longlong **)(param_1 + 0x1c0) == 0) {
    uVar19 = 0;
  }
  else {
    uVar19 = *(undefined8 *)(**(longlong **)(param_1 + 0x1c0) + 0x10);
  }
  iVar14 = *(int *)(lVar40 + 0x28);
  if (0 < (longlong)iVar14) {
    local_4a8 = lVar40;
    local_490 = uVar19;
    if (iVar14 != 1) {
      lVar40 = *(longlong *)(lVar40 + 0x20);
      memset(aiStack_3e8,0,0x2f0);
      local_3f8 = (uint)lVar40;
      uStack_3f4 = (undefined4)((ulonglong)lVar40 >> 0x20);
      uStack_3f0 = (longlong)iVar14 * 0x98 + lVar40 + -0x98;
      fVar42 = logf((float)iVar14);
      aiStack_3e8[0] = (int)(longlong)(fVar42 + fVar42);
      puVar24 = &local_3f8;
      do {
        pvVar23 = *(void **)puVar24;
        pvVar36 = *(void **)(puVar24 + 2);
        uVar25 = puVar24[4];
        iVar14 = (int)((ulonglong)((longlong)pvVar36 - (longlong)pvVar23) >> 3) * 0x286bca1b;
        uVar21 = (ulonglong)(iVar14 + 1);
        pvVar39 = pvVar23;
        pvVar35 = pvVar36;
        pvVar31 = pvVar23;
        local_4b8 = puVar24;
        if (uVar25 != 0) {
LAB_142f76f36:
          if (8 < (int)(uint)uVar21) {
            local_4b0 = (void *)CONCAT44(local_4b0._4_4_,uVar25);
            pvVar31 = (void *)((ulonglong)((uint)uVar21 >> 1) * 0x98 + (longlong)pvVar39);
            local_498 = pvVar36;
            local_488 = pvVar23;
            memcpy(&local_f8,pvVar31,0x98);
            memcpy(pvVar31,pvVar39,0x98);
            memcpy(pvVar39,&local_f8,0x98);
            pvVar23 = (void *)((longlong)pvVar35 + 0x98);
            pvVar31 = pvVar39;
            do {
              pvVar36 = (void *)((longlong)pvVar31 + 0x98);
              pvVar11 = (void *)((longlong)pvVar31 + 0x98);
              do {
                pvVar31 = pvVar11;
                pvVar22 = pvVar36;
                if (pvVar35 < pvVar31) break;
                cVar13 = FUN_142f77f3c(pvVar39,pvVar31);
                pvVar36 = (void *)((longlong)pvVar22 + 0x98);
                pvVar11 = (void *)((longlong)pvVar31 + 0x98);
              } while (cVar13 == '\0');
              pvVar11 = (void *)((longlong)pvVar23 + -0x130);
              do {
                pvVar38 = pvVar23;
                pvVar36 = pvVar11;
                pvVar23 = (void *)((longlong)pvVar38 + -0x98);
                if (pvVar23 <= pvVar39) break;
                cVar13 = FUN_142f77f3c(pvVar23,pvVar39);
                pvVar11 = (void *)((longlong)pvVar36 + -0x98);
              } while (cVar13 == '\0');
              if (pvVar23 < pvVar31) goto LAB_142f77045;
              memcpy(&local_f8,pvVar31,0x98);
              memcpy(pvVar31,pvVar23,0x98);
              memcpy(pvVar23,&local_f8,0x98);
            } while( true );
          }
          for (; puVar24 = local_4b8, pvVar36 = pvVar39, pvVar23 = pvVar39, pvVar39 < pvVar35;
              pvVar35 = (void *)((longlong)pvVar35 + -0x98)) {
            while (pvVar31 = pvVar36, pvVar23 = (void *)((longlong)pvVar23 + 0x98),
                  pvVar23 <= pvVar35) {
              cVar13 = FUN_142f77f3c(pvVar31,pvVar23);
              pvVar36 = pvVar23;
              if (cVar13 == '\0') {
                pvVar36 = pvVar31;
              }
            }
            memcpy(&local_f8,pvVar31,0x98);
            memcpy(pvVar31,pvVar35,0x98);
            memcpy(pvVar35,&local_f8,0x98);
          }
          goto LAB_142f77428;
        }
LAB_142f77132:
        iVar15 = (int)uVar21;
        puVar24 = local_4b8;
        if (iVar15 != 0) {
          uVar25 = (iVar14 - (iVar14 + -1 >> 0x1f)) + -1 >> 1;
          do {
            local_4b0 = (void *)(ulonglong)uVar25;
            pvVar35 = local_4b0;
            while (uVar8 = uVar25 * 2 + 1, (int)uVar8 < iVar15) {
              uVar37 = uVar25 * 2 + 2;
              uVar25 = uVar8;
              if ((int)uVar37 < iVar15) {
                cVar13 = FUN_142f77f3c((void *)((longlong)(int)uVar37 * 0x98 + (longlong)pvVar31),
                                       (void *)((longlong)(int)uVar8 * 0x98 + (longlong)pvVar31));
                if (cVar13 == '\0') {
                  uVar25 = uVar37;
                }
              }
              pvVar23 = (void *)((longlong)(int)pvVar35 * 0x98 + (longlong)pvVar31);
              pvVar35 = (void *)((longlong)(int)uVar25 * 0x98 + (longlong)pvVar31);
              cVar13 = FUN_142f77f3c(pvVar23,pvVar35);
              if (cVar13 == '\0') break;
              memcpy(&local_f8,pvVar23,0x98);
              memcpy(pvVar23,pvVar35,0x98);
              memcpy(pvVar35,&local_f8,0x98);
              pvVar35 = (void *)(ulonglong)uVar25;
            }
            uVar25 = (int)local_4b0 - 1;
          } while ((int)local_4b0 != 0);
          puVar24 = local_4b8;
          if (1 < iVar15) {
            pvVar35 = (void *)((uVar21 - 1) * 0x98 + (longlong)pvVar31);
            memcpy(&local_f8,pvVar31,0x98);
            memcpy(pvVar31,pvVar35,0x98);
            memcpy(pvVar35,&local_f8,0x98);
            puVar24 = local_4b8;
            uVar21 = uVar21 - 1;
            if (iVar15 != 2) {
              do {
                iVar14 = 0;
                iVar34 = 1;
                iVar15 = 0;
                do {
                  iVar14 = iVar14 + 2;
                  iVar33 = iVar34;
                  if ((longlong)iVar14 < (longlong)uVar21) {
                    cVar13 = FUN_142f77f3c((void *)((longlong)iVar14 * 0x98 + (longlong)pvVar31),
                                           (void *)((longlong)iVar34 * 0x98 + (longlong)pvVar31));
                    if (cVar13 == '\0') {
                      iVar33 = iVar14;
                    }
                  }
                  pvVar23 = (void *)((longlong)iVar15 * 0x98 + (longlong)pvVar31);
                  pvVar35 = (void *)((longlong)iVar33 * 0x98 + (longlong)pvVar31);
                  cVar13 = FUN_142f77f3c(pvVar23,pvVar35);
                  if (cVar13 == '\0') break;
                  memcpy(&local_f8,pvVar23,0x98);
                  memcpy(pvVar23,pvVar35,0x98);
                  memcpy(pvVar35,&local_f8,0x98);
                  iVar14 = iVar33 * 2;
                  iVar34 = iVar33 * 2 + 1;
                  iVar15 = iVar33;
                } while ((longlong)iVar34 < (longlong)uVar21);
                pvVar35 = (void *)((uVar21 - 1) * 0x98 + (longlong)pvVar31);
                memcpy(&local_f8,pvVar31,0x98);
                memcpy(pvVar31,pvVar35,0x98);
                memcpy(pvVar35,&local_f8,0x98);
                bVar41 = 2 < uVar21;
                puVar24 = local_4b8;
                uVar21 = uVar21 - 1;
              } while (bVar41);
            }
          }
        }
LAB_142f77428:
        puVar24 = puVar24 + -6;
      } while (&local_3f8 <= puVar24);
    }
    lVar40 = local_4a8;
    dwTlsIndex = DAT_14c7585d0;
    if (DAT_14c7585d0 == 0xffffffff) {
      dwTlsIndex = TlsAlloc();
      DVar16 = 0xffffffff;
      LOCK();
      bVar41 = DAT_14c7585d0 != 0xffffffff;
      DVar12 = dwTlsIndex;
      if (bVar41) {
        DVar16 = DAT_14c7585d0;
        DVar12 = DAT_14c7585d0;
      }
      DAT_14c7585d0 = DVar12;
      UNLOCK();
      if (bVar41) {
        TlsFree(dwTlsIndex);
        dwTlsIndex = DVar16;
      }
    }
    lpTlsValue = TlsGetValue(dwTlsIndex);
    if (lpTlsValue == (LPVOID)0x0) {
      lpTlsValue = (LPVOID)FUN_140036a08(&local_3f8);
      FUN_140fddf04(lpTlsValue);
      TlsSetValue(dwTlsIndex,lpTlsValue);
    }
    local_420 = (undefined8 *)((longlong)lpTlsValue + 0x10);
    local_418 = *(undefined8 *)((longlong)lpTlsValue + 0x10);
    local_410 = *(longlong *)((longlong)lpTlsValue + 0x20);
    local_408 = '\0';
    local_400 = *(undefined8 *)((longlong)lpTlsValue + 0x28);
    *(undefined8 ***)((longlong)lpTlsValue + 0x28) = &local_420;
    *(int *)((longlong)lpTlsValue + 0x30) = *(int *)((longlong)lpTlsValue + 0x30) + 1;
    local_438 = 0;
    uStack_430 = 0;
    local_448 = 0;
    uStack_440 = 0;
    local_458 = (void *)0x0;
    uStack_450 = 0;
    iVar14 = *(int *)(lVar40 + 0x28);
    if (iVar14 < 0) {
LAB_142f77ed2:
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar14);
    }
    iVar15 = 0;
    if (iVar14 != 0) {
      FUN_1472c1f9c(&local_438);
      iVar14 = *(int *)(lVar40 + 0x28);
      if (iVar14 < 0) goto LAB_142f77ed2;
      iVar15 = 0;
      if (iVar14 != 0) {
        FUN_1472c1f9c(&local_448);
        iVar14 = *(int *)(lVar40 + 0x28);
        if (iVar14 < 0) goto LAB_142f77ed2;
        iVar15 = 0;
        if (iVar14 != 0) {
          FUN_1472c20c6(&local_458);
          iVar15 = *(int *)(lVar40 + 0x28);
        }
      }
    }
    local_460 = 0;
    local_d8 = 0;
    local_d0 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_cc = 0xffffffff00000080;
    local_c4 = 0;
    local_b8 = 0;
    local_b0 = 0;
    if (iVar15 != 0) {
      lVar40 = *(longlong *)(local_4a8 + 0x20);
      lVar32 = 0;
      uVar21 = 0;
      do {
        uVar10 = uStack_450;
        uVar18 = *(ulonglong *)(lVar40 + 0x90 + lVar32);
        if (uVar18 != 0) {
          lVar20 = *(longlong *)(uVar18 + 8);
          if (uVar21 == uVar18) {
            lVar26 = (longlong)(int)uStack_450;
            if ((lVar26 == 0) ||
               (*(longlong *)((longlong)local_458 + (longlong)((int)uStack_450 + -1) * 8) != lVar20)
               ) {
              uVar25 = (int)uStack_450 + 1;
              uStack_450 = CONCAT44(uStack_450._4_4_,uVar25);
              if (uStack_450._4_4_ < uVar25) {
                FUN_1472c2282(&local_458,uVar10 & 0xffffffff);
              }
              *(longlong *)((longlong)local_458 + lVar26 * 8) = lVar20;
            }
          }
          else {
            local_3f8 = local_3f8 & 0xffffff00;
            uVar25 = ((uint)(uVar18 >> 0x14) & 0xffff ^ (uint)(uVar18 >> 4)) * -0x7a143595;
            uVar25 = (uVar25 >> 0xd ^ uVar25) * -0x3d4d51cb;
            local_460 = uVar18;
            FUN_1472c22da(&local_f8,uVar25 >> 0x10 ^ uVar25,&local_460,&local_3f8);
            uVar10 = uStack_430;
            uVar21 = uVar18;
            if ((char)local_3f8 == '\0') {
              lVar26 = (longlong)(int)uStack_430;
              uVar25 = (int)uStack_430 + 1;
              uStack_430 = CONCAT44(uStack_430._4_4_,uVar25);
              if (uStack_430._4_4_ < uVar25) {
                FUN_1472c26ee(&local_438,uVar10 & 0xffffffff);
              }
              uVar18 = uStack_440;
              lVar26 = lVar26 * 0x38;
              *(undefined8 *)(local_438 + lVar26) = 0xffffffffffffffff;
              *(undefined4 *)(local_438 + 8 + lVar26) = 0xffffffff;
              *(longlong *)(local_438 + 0x10 + lVar26) = lVar20;
              *(undefined1 *)(local_438 + 0x18 + lVar26) = 3;
              *(undefined8 *)(local_438 + 0x1c + lVar26) = 0x40000000000;
              *(undefined4 *)(local_438 + 0x24 + lVar26) = 0;
              *(undefined1 *)(local_438 + 0x30 + lVar26) = 0;
              lVar26 = (longlong)(int)uStack_440;
              uVar25 = (int)uStack_440 + 1;
              uStack_440 = CONCAT44(uStack_440._4_4_,uVar25);
              if (uStack_440._4_4_ < uVar25) {
                FUN_1472c26ee(&local_448,uVar18 & 0xffffffff);
              }
              lVar26 = lVar26 * 0x38;
              *(undefined8 *)(local_448 + lVar26) = 0xffffffffffffffff;
              *(undefined4 *)(local_448 + 8 + lVar26) = 0xffffffff;
              *(longlong *)(local_448 + 0x10 + lVar26) = lVar20;
              *(undefined1 *)(local_448 + 0x18 + lVar26) = 3;
              *(undefined8 *)(local_448 + 0x1c + lVar26) = 0x7000000400;
              *(undefined4 *)(local_448 + 0x24 + lVar26) = 0;
              *(undefined1 *)(local_448 + 0x30 + lVar26) = 0;
            }
          }
        }
        lVar32 = lVar32 + 0x98;
      } while ((longlong)iVar15 * 0x98 - lVar32 != 0);
    }
    puVar28 = local_4a0;
    local_470 = local_438;
    local_468 = (int)uStack_430;
    FUN_144760590(local_4a0,&local_470,0);
    pvVar35 = local_458;
    iVar14 = (int)uStack_450;
    sVar29 = (size_t)(uint)((int)uStack_450 * 8);
    pvVar23 = (void *)(*puVar28 + 7 & 0xfffffffffffffff8);
    uVar21 = (longlong)pvVar23 + sVar29;
    if (puVar28[1] < uVar21) {
      FUN_140023dd8(puVar28,(int)uStack_450 * 8 + 8);
      pvVar23 = (void *)(*puVar28 + 7 & 0xfffffffffffffff8);
      uVar21 = (longlong)pvVar23 + sVar29;
    }
    *puVar28 = uVar21;
    memcpy(pvVar23,pvVar35,sVar29);
    puVar27 = (undefined8 *)(*puVar28 + 7 & 0xfffffffffffffff8);
    puVar17 = puVar27 + 4;
    if ((undefined8 *)puVar28[1] < puVar17) {
      FUN_140023dd8(puVar28,0x28);
      puVar27 = (undefined8 *)(*puVar28 + 7 & 0xfffffffffffffff8);
      puVar17 = puVar27 + 4;
    }
    *puVar28 = (ulonglong)puVar17;
    *(int *)(puVar28 + 0xc) = (int)puVar28[0xc] + 1;
    *(undefined8 **)puVar28[6] = puVar27;
    puVar28[6] = (ulonglong)(puVar27 + 1);
    puVar27[1] = 0;
    *puVar27 = &PTR_FUN_14a2dc3b0;
    puVar27[2] = pvVar23;
    *(int *)(puVar27 + 3) = iVar14;
    local_3f8 = 0xffffffff;
    uStack_3f0._0_4_ = 0;
    uStack_3f0._4_4_ = 0;
    aiStack_3e8[0] = 0;
    aiStack_3e8[1] = 0;
    aiStack_3e8[2] = 0;
    aiStack_3e8[3] = 0;
    aiStack_3e8[4] = 0;
    aiStack_3e8[5] = 0;
    aiStack_3e8[6] = 0;
    aiStack_3e8[7] = 0;
    aiStack_3e8[8] = 0;
    aiStack_3e8[9] = 0;
    aiStack_3e8[10] = 0;
    aiStack_3e8[0xb] = 0;
    aiStack_3e8[0xc] = 0;
    aiStack_3e8[0xd] = 0;
    aiStack_3e8[0xe] = 0;
    aiStack_3e8[0xf] = 0;
    aiStack_3e8[0x10] = 0;
    aiStack_3e8[0x11] = 0;
    aiStack_3e8[0x12] = 0;
    aiStack_3e8[0x13] = 0;
    aiStack_3e8[0x14] = 0;
    aiStack_3e8[0x15] = 0;
    aiStack_3e8[0x16] = 0;
    aiStack_3e8[0x17] = 0;
    aiStack_3e8[0x18] = 0;
    aiStack_3e8[0x19] = 0;
    if ((longlong)*(int *)(local_4a8 + 0x28) != 0) {
      lVar40 = *(longlong *)(local_4a8 + 0x20);
      lVar32 = (longlong)*(int *)(local_4a8 + 0x28) * 0x98;
      uVar21 = 0;
      pvVar35 = (void *)0x0;
      puVar28 = local_4a0;
      do {
        if (*(longlong *)(lVar40 + 0x78) == 0) {
          uVar18 = 0;
        }
        else {
          lVar20 = *(longlong *)(*(longlong *)(lVar40 + 0x80) + 8);
          lVar26 = (longlong)*(int *)(*(longlong *)(lVar40 + 0x78) + 0xd4);
          uVar18 = *(ulonglong *)(*(longlong *)(lVar20 + 0x50) + lVar26 * 8);
          if (uVar18 == 0) {
            uVar18 = FUN_1400bafc2(lVar20,lVar26,1);
          }
        }
        if (uVar21 != uVar18) {
          uVar19 = FUN_140029432(puVar28,uVar18,0);
          puVar28[0x37] = uVar18;
          puVar27 = (undefined8 *)(*puVar28 + 7 & 0xfffffffffffffff8);
          puVar17 = puVar27 + 3;
          if ((undefined8 *)puVar28[1] < puVar17) {
            FUN_140023dd8(puVar28,0x20);
            puVar27 = (undefined8 *)(*puVar28 + 7 & 0xfffffffffffffff8);
            puVar17 = puVar27 + 3;
          }
          *puVar28 = (ulonglong)puVar17;
          *(int *)(puVar28 + 0xc) = (int)puVar28[0xc] + 1;
          *(undefined8 **)puVar28[6] = puVar27;
          puVar28[6] = (ulonglong)(puVar27 + 1);
          puVar27[1] = 0;
          *puVar27 = &PTR_LAB_14a37d340;
          puVar27[2] = uVar19;
          local_3f8 = 0xffffffff;
          aiStack_3e8[0x15] = 0;
          aiStack_3e8[0x16] = 0;
          aiStack_3e8[0x17] = 0;
          aiStack_3e8[0x18] = 0;
          aiStack_3e8[0x11] = 0;
          aiStack_3e8[0x12] = 0;
          aiStack_3e8[0x13] = 0;
          aiStack_3e8[0x14] = 0;
          aiStack_3e8[0xd] = 0;
          aiStack_3e8[0xe] = 0;
          aiStack_3e8[0xf] = 0;
          aiStack_3e8[0x10] = 0;
          aiStack_3e8[9] = 0;
          aiStack_3e8[10] = 0;
          aiStack_3e8[0xb] = 0;
          aiStack_3e8[0xc] = 0;
          aiStack_3e8[5] = 0;
          aiStack_3e8[6] = 0;
          aiStack_3e8[7] = 0;
          aiStack_3e8[8] = 0;
          aiStack_3e8[1] = 0;
          aiStack_3e8[2] = 0;
          aiStack_3e8[3] = 0;
          aiStack_3e8[4] = 0;
          uStack_3f4 = 0;
          uStack_3f0._0_4_ = 0;
          uStack_3f0._4_4_ = 0;
          aiStack_3e8[0] = 0;
          aiStack_3e8[0x19] = 0;
          pvVar35 = (void *)0x0;
          uVar21 = uVar18;
        }
        lVar20 = FUN_144821ef4(puVar28);
        pvVar23 = *(void **)(lVar40 + 0x90);
        if (pvVar35 != pvVar23) {
          FUN_144a86a8e(lVar20,*(longlong *)(lVar40 + 0x78) + 0x108,
                        *(undefined8 *)((longlong)pvVar23 + 8));
          pvVar35 = pvVar23;
        }
        FUN_1448a2d16(lVar40,lVar20);
        iVar14 = *(int *)(lVar20 + 0x30) + *(int *)(lVar20 + 0x20);
        iVar15 = iVar14 + *(int *)(lVar20 + 0x40);
        if (iVar15 != 0 && SCARRY4(iVar14,*(int *)(lVar20 + 0x40)) == iVar15 < 0) {
          puVar27 = (undefined8 *)(*puVar28 + 7 & 0xfffffffffffffff8);
          puVar17 = puVar27 + 0xb;
          local_4b0 = pvVar35;
          if ((undefined8 *)puVar28[1] < puVar17) {
            FUN_140023dd8(puVar28,0x60);
            puVar27 = (undefined8 *)(*puVar28 + 7 & 0xfffffffffffffff8);
            puVar17 = puVar27 + 0xb;
          }
          *puVar28 = (ulonglong)puVar17;
          *(int *)(puVar28 + 0xc) = (int)puVar28[0xc] + 1;
          *(undefined8 **)puVar28[6] = puVar27;
          puVar28[6] = (ulonglong)(puVar27 + 1);
          uVar19 = *(undefined8 *)(lVar20 + 0x38);
          uVar1 = *(undefined4 *)(lVar20 + 0x40);
          uVar5 = *(undefined8 *)(lVar20 + 0x28);
          uVar2 = *(undefined4 *)(lVar20 + 0x30);
          uVar6 = *(undefined8 *)(lVar20 + 0x18);
          uVar3 = *(undefined4 *)(lVar20 + 0x20);
          uVar7 = *(undefined8 *)(lVar20 + 8);
          uVar4 = *(undefined4 *)(lVar20 + 0x10);
          puVar27[1] = 0;
          *puVar27 = &PTR_FUN_14a1e7fa8;
          puVar27[2] = uVar21;
          puVar27[3] = uVar7;
          *(undefined4 *)(puVar27 + 4) = uVar4;
          puVar27[5] = uVar6;
          *(undefined4 *)(puVar27 + 6) = uVar3;
          puVar27[7] = uVar5;
          *(undefined4 *)(puVar27 + 8) = uVar2;
          puVar27[9] = uVar19;
          *(undefined4 *)(puVar27 + 10) = uVar1;
          *(undefined8 *)(lVar20 + 8) = 0;
          *(undefined4 *)(lVar20 + 0x10) = 0;
          *(undefined8 *)(lVar20 + 0x18) = 0;
          *(undefined4 *)(lVar20 + 0x20) = 0;
          *(undefined8 *)(lVar20 + 0x28) = 0;
          *(undefined4 *)(lVar20 + 0x30) = 0;
          *(undefined8 *)(lVar20 + 0x38) = 0;
          *(undefined4 *)(lVar20 + 0x40) = 0;
          puVar28 = local_4a0;
          pvVar35 = local_4b0;
        }
        iVar14 = *(int *)(lVar40 + 0x88);
        puVar27 = (undefined8 *)(*puVar28 + 7 & 0xfffffffffffffff8);
        puVar17 = puVar27 + 4;
        if ((undefined8 *)puVar28[1] < puVar17) {
          FUN_140023dd8(puVar28,0x28);
          puVar27 = (undefined8 *)(*puVar28 + 7 & 0xfffffffffffffff8);
          puVar17 = puVar27 + 4;
        }
        *puVar28 = (ulonglong)puVar17;
        *(int *)(puVar28 + 0xc) = (int)puVar28[0xc] + 1;
        *(undefined8 **)puVar28[6] = puVar27;
        puVar28[6] = (ulonglong)(puVar27 + 1);
        puVar27[1] = 0;
        *puVar27 = &PTR_LAB_14a1fbc30;
        *(uint *)(puVar27 + 2) = iVar14 + 0x3fU >> 6;
        *(undefined1 **)((longlong)puVar27 + 0x14) = &DAT_100000001;
        lVar40 = lVar40 + 0x98;
        lVar32 = lVar32 + -0x98;
      } while (lVar32 != 0);
      sVar29 = (size_t)(uint)((int)uStack_450 * 8);
      pvVar35 = local_458;
      iVar14 = (int)uStack_450;
    }
    puVar28 = local_4a0;
    pvVar23 = (void *)(*local_4a0 + 7 & 0xfffffffffffffff8);
    uVar21 = (longlong)pvVar23 + sVar29;
    if (local_4a0[1] < uVar21) {
      FUN_140023dd8(local_4a0,(int)sVar29 + 8);
      pvVar23 = (void *)(*puVar28 + 7 & 0xfffffffffffffff8);
      uVar21 = (longlong)pvVar23 + sVar29;
    }
    *puVar28 = uVar21;
    memcpy(pvVar23,pvVar35,sVar29);
    puVar27 = (undefined8 *)(*puVar28 + 7 & 0xfffffffffffffff8);
    puVar17 = puVar27 + 4;
    if ((undefined8 *)puVar28[1] < puVar17) {
      FUN_140023dd8(puVar28,0x28);
      puVar27 = (undefined8 *)(*puVar28 + 7 & 0xfffffffffffffff8);
      puVar17 = puVar27 + 4;
    }
    *puVar28 = (ulonglong)puVar17;
    *(int *)(puVar28 + 0xc) = (int)puVar28[0xc] + 1;
    *(undefined8 **)puVar28[6] = puVar27;
    puVar28[6] = (ulonglong)(puVar27 + 1);
    puVar27[1] = 0;
    *puVar27 = &PTR_FUN_14a2dc3b8;
    puVar27[2] = pvVar23;
    *(int *)(puVar27 + 3) = iVar14;
    local_480 = local_448;
    local_478 = (int)uStack_440;
    FUN_144760590(puVar28,&local_480,0);
    pvVar35 = (void *)(longlong)*(int *)(local_4a8 + 0x38);
    if (0 < (longlong)pvVar35) {
      pvVar36 = *(void **)(local_4a8 + 0x30);
      sVar29 = (longlong)pvVar35 * 0x20;
      pvVar39 = (void *)(*puVar28 + 7 & 0xfffffffffffffff8);
      pvVar23 = (void *)((longlong)pvVar39 + sVar29);
      if ((void *)puVar28[1] < pvVar23) {
        FUN_140023dd8(puVar28,(uint)sVar29 | 8);
        pvVar39 = (void *)(*puVar28 + 7 & 0xfffffffffffffff8);
        pvVar23 = (void *)((longlong)pvVar39 + sVar29);
      }
      *puVar28 = (ulonglong)pvVar23;
      memcpy(pvVar39,pvVar36,sVar29);
      puVar28 = local_4a0;
      lVar40 = 0x18;
      local_4b0 = pvVar36;
      local_498 = pvVar35;
      do {
        iVar14 = *(int *)((longlong)pvVar36 + lVar40);
        if ((longlong)iVar14 != 0) {
          pvVar36 = *(void **)((longlong)pvVar36 + lVar40 + -8);
          sVar29 = (longlong)iVar14 * 0x28;
          pvVar31 = (void *)(*puVar28 + 7 & 0xfffffffffffffff8);
          pvVar23 = (void *)(sVar29 + (longlong)pvVar31);
          if ((void *)puVar28[1] < pvVar23) {
            FUN_140023dd8(puVar28,(int)sVar29 + 8);
            pvVar31 = (void *)(*puVar28 + 7 & 0xfffffffffffffff8);
            pvVar23 = (void *)(sVar29 + (longlong)pvVar31);
          }
          *puVar28 = (ulonglong)pvVar23;
          memcpy(pvVar31,pvVar36,sVar29);
          *(void **)((longlong)pvVar39 + lVar40 + -8) = pvVar31;
          *(int *)((longlong)pvVar39 + lVar40) = iVar14;
          pvVar36 = local_4b0;
        }
        puVar9 = local_4a0;
        lVar40 = lVar40 + 0x20;
        pvVar35 = (void *)((longlong)pvVar35 + -1);
      } while (pvVar35 != (void *)0x0);
      puVar27 = (undefined8 *)(*local_4a0 + 7 & 0xfffffffffffffff8);
      puVar17 = puVar27 + 8;
      if ((undefined8 *)local_4a0[1] < puVar17) {
        FUN_140023dd8(local_4a0,0x48);
        puVar27 = (undefined8 *)(*puVar9 + 7 & 0xfffffffffffffff8);
        puVar17 = puVar27 + 8;
      }
      *puVar9 = (ulonglong)puVar17;
      *(int *)(puVar9 + 0xc) = (int)puVar9[0xc] + 1;
      *(undefined8 **)puVar9[6] = puVar27;
      puVar9[6] = (ulonglong)(puVar27 + 1);
      puVar27[1] = 0;
      *puVar27 = &PTR_FUN_14a236970;
      puVar27[2] = pvVar39;
      *(int *)(puVar27 + 3) = (int)local_498;
      puVar27[4] = local_490;
      puVar27[5] = 0;
      puVar27[6] = 0;
      puVar27[7] = local_490;
      FUN_14494c7ac(puVar9,&local_3f8,1);
      puVar17 = (undefined8 *)CONCAT44(uStack_3f4,local_3f8);
      if (puVar17 != (undefined8 *)0x0) {
        LOCK();
        piVar30 = (int *)(puVar17 + 1);
        *piVar30 = *piVar30 + -1;
        UNLOCK();
        if (*piVar30 == 0) {
          (**(code **)*puVar17)(puVar17,1);
        }
      }
    }
    local_b0 = 0;
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
    FUN_1472c21f4(&local_f8);
    FUN_144705e08(local_448,uStack_440 & 0xffffffff);
    FUN_144705e08(local_438,uStack_430 & 0xffffffff);
    lVar40 = local_4a8;
    if (local_408 == '\0') {
      local_408 = '\x01';
      *(int *)(local_420 + 4) = *(int *)(local_420 + 4) + -1;
      if (local_410 != local_420[2]) {
        FUN_14004673c();
      }
      *local_420 = local_418;
      local_420[3] = local_400;
    }
  }
  FUN_1472b4bc6(lVar40 + 0x60,*(undefined4 *)(lVar40 + 0x6c));
  FUN_1472b489e(lVar40);
  if ((local_60 ^ (ulonglong)auStack_4d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_142f77045:
  memcpy(&local_f8,pvVar39,0x98);
  memcpy(pvVar39,pvVar23,0x98);
  memcpy(pvVar23,&local_f8,0x98);
  uVar25 = (int)local_4b0 - 1;
  pvVar38 = (void *)((longlong)pvVar38 + -0x130);
  if ((longlong)pvVar36 - (longlong)local_488 < (longlong)local_498 - (longlong)pvVar22) {
    if (pvVar31 < pvVar35) {
      *(void **)local_4b8 = pvVar31;
      *(void **)(local_4b8 + 2) = pvVar35;
      local_4b8[4] = uVar25;
      local_4b8 = local_4b8 + 6;
    }
    puVar24 = local_4b8;
    pvVar31 = pvVar39;
    if (pvVar23 <= (void *)((longlong)pvVar39 + 0x98U)) goto LAB_142f77428;
  }
  else {
    puVar24 = local_4b8;
    if ((void *)((longlong)pvVar39 + 0x98U) < pvVar23) {
      *(void **)local_4b8 = pvVar39;
      *(void **)(local_4b8 + 2) = pvVar38;
      local_4b8[4] = uVar25;
      puVar24 = local_4b8 + 6;
    }
    pvVar39 = pvVar22;
    pvVar36 = pvVar35;
    pvVar38 = pvVar35;
    if (pvVar35 <= pvVar31) goto LAB_142f77428;
  }
  local_4b8 = puVar24;
  iVar14 = (int)((ulonglong)((longlong)pvVar36 - (longlong)pvVar39) >> 3) * 0x286bca1b;
  uVar21 = (ulonglong)(iVar14 + 1);
  pvVar23 = pvVar39;
  pvVar39 = pvVar31;
  pvVar35 = pvVar38;
  if (uVar25 == 0) goto LAB_142f77132;
  goto LAB_142f76f36;
}



// FUNCTION 142f77f3c FUN_142f77f3c body=262 status=ok
// SIG undefined FUN_142f77f3c(void)

bool FUN_142f77f3c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  
  if (*(longlong *)(param_1 + 0x78) == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 8);
    lVar5 = (longlong)*(int *)(*(longlong *)(param_1 + 0x78) + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(lVar2 + 0x50) + lVar5 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(lVar2,lVar5,1);
    }
  }
  if (*(longlong *)(param_2 + 0x78) == 0) {
    lVar2 = 0;
  }
  else {
    lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x80) + 8);
    lVar6 = (longlong)*(int *)(*(longlong *)(param_2 + 0x78) + 0xd4);
    lVar2 = *(longlong *)(*(longlong *)(lVar5 + 0x50) + lVar6 * 8);
    if (lVar2 == 0) {
      lVar2 = FUN_1400bafc2(lVar5,lVar6,1);
    }
  }
  if (lVar1 == lVar2) {
    bVar7 = *(ulonglong *)(param_1 + 0x90) < *(ulonglong *)(param_2 + 0x90);
  }
  else {
    if (*(longlong *)(param_1 + 0x78) == 0) {
      uVar3 = 0;
    }
    else {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 8);
      lVar2 = (longlong)*(int *)(*(longlong *)(param_1 + 0x78) + 0xd4);
      uVar3 = *(ulonglong *)(*(longlong *)(lVar1 + 0x50) + lVar2 * 8);
      if (uVar3 == 0) {
        uVar3 = FUN_1400bafc2(lVar1,lVar2,1);
      }
    }
    if (*(longlong *)(param_2 + 0x78) == 0) {
      uVar4 = 0;
    }
    else {
      lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x80) + 8);
      lVar2 = (longlong)*(int *)(*(longlong *)(param_2 + 0x78) + 0xd4);
      uVar4 = *(ulonglong *)(*(longlong *)(lVar1 + 0x50) + lVar2 * 8);
      if (uVar4 == 0) {
        uVar4 = FUN_1400bafc2(lVar1,lVar2,1);
      }
    }
    bVar7 = uVar3 < uVar4;
  }
  return bVar7;
}



// FUNCTION 142f78042 FUN_142f78042 body=710 status=ok
// SIG undefined FUN_142f78042(void)

void FUN_142f78042(longlong *param_1,int *param_2)

{
  longlong lVar1;
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
  double dVar14;
  double dVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  byte bVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  undefined4 uVar22;
  bool bVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  int iVar31;
  longlong lVar32;
  int iVar33;
  undefined4 local_c0;
  
  lVar32 = (longlong)*param_2;
  lVar29 = param_1[5];
  lVar28 = lVar32 * 0x60;
  lVar1 = lVar29 + lVar28;
  iVar19 = *(int *)(lVar29 + 0x40 + lVar28);
  if (*(int *)(lVar29 + 0x20 + lVar28) == -1) {
    local_c0 = *(undefined4 *)(param_1[7] + lVar32 * 4);
    iVar20 = *(int *)(param_1[0xb] + lVar32 * 4);
    if (*(int *)(lVar1 + 0x30) == 0) {
      iVar31 = *(int *)(param_1[9] + lVar32 * 4);
      iVar25 = (int)param_1[4];
      bVar23 = false;
      iVar24 = iVar31;
      goto LAB_142f780f1;
    }
  }
  else {
    local_c0 = *(undefined4 *)(param_1[7] + lVar32 * 4);
    iVar20 = *(int *)(param_1[0xb] + lVar32 * 4);
  }
  iVar31 = *(int *)(param_1[9] + lVar32 * 4);
  bVar23 = true;
  iVar25 = 0;
  iVar24 = 0;
LAB_142f780f1:
  if (iVar19 != 0) {
    iVar21 = *(int *)(lVar29 + 0x50 + lVar28);
    iVar26 = 0;
    do {
      lVar29 = (longlong)iVar26;
      if (bVar23) {
        if (*(int *)(lVar1 + 0x20) == -1) {
          iVar33 = *(int *)(*(longlong *)(lVar1 + 0x28) + lVar29 * 4);
        }
        else {
          iVar33 = *(int *)(lVar1 + 0x20) + iVar26;
        }
      }
      else {
        iVar33 = iVar24 + iVar26;
      }
      if (iVar21 == 0) {
        iVar27 = 0;
        if (*(char *)(lVar1 + 0x59) != '\0') {
          iVar27 = iVar26;
        }
        iVar27 = iVar27 + *(int *)(lVar1 + 0x44);
      }
      else {
        iVar27 = *(int *)(*(longlong *)(lVar1 + 0x48) + lVar29 * 4);
      }
      uVar16 = *(undefined1 *)(lVar1 + 0x5a);
      uVar17 = *(undefined1 *)(lVar1 + 0x5c);
      uVar22 = *(undefined4 *)(lVar1 + 8);
      bVar18 = *(byte *)(lVar1 + 0x58);
      if (!bVar23) {
        lVar28 = *(longlong *)(lVar1 + 0x10);
        lVar29 = lVar29 * 0x80;
        dVar2 = *(double *)(lVar28 + 0x60 + lVar29);
        dVar3 = *(double *)(lVar28 + 0x68 + lVar29);
        dVar4 = (double)param_1[0xd];
        dVar5 = (double)param_1[0xe];
        dVar6 = *(double *)(lVar28 + 0x20 + lVar29);
        dVar7 = *(double *)(lVar28 + 0x70 + lVar29);
        dVar8 = *(double *)(lVar28 + 0x40 + lVar29);
        dVar9 = (double)param_1[0xf];
        dVar10 = *(double *)(lVar28 + 8 + lVar29);
        dVar11 = *(double *)(lVar28 + 0x28 + lVar29);
        dVar12 = *(double *)(lVar28 + 0x48 + lVar29);
        dVar13 = *(double *)(lVar28 + 0x10 + lVar29);
        dVar14 = *(double *)(lVar28 + 0x30 + lVar29);
        dVar15 = *(double *)(lVar28 + 0x50 + lVar29);
        lVar32 = param_1[2];
        lVar30 = (longlong)(iVar33 * 3) * 0x10;
        *(float *)(lVar32 + lVar30) = (float)*(double *)(lVar28 + lVar29);
        *(float *)(lVar32 + 4 + lVar30) = (float)dVar6;
        *(float *)(lVar32 + 8 + lVar30) = (float)dVar8;
        *(float *)(lVar32 + 0xc + lVar30) = (float)(dVar2 + dVar4);
        lVar29 = param_1[2];
        lVar28 = (longlong)(iVar33 * 3 + 1) * 0x10;
        *(float *)(lVar29 + lVar28) = (float)dVar10;
        *(float *)(lVar29 + 4 + lVar28) = (float)dVar11;
        *(float *)(lVar29 + 8 + lVar28) = (float)dVar12;
        *(float *)(lVar29 + 0xc + lVar28) = (float)(dVar3 + dVar5);
        lVar29 = param_1[2];
        lVar28 = (longlong)(iVar33 * 3 + 2) * 0x10;
        *(float *)(lVar29 + lVar28) = (float)dVar13;
        *(float *)(lVar29 + 4 + lVar28) = (float)dVar14;
        *(float *)(lVar29 + 8 + lVar28) = (float)dVar15;
        *(float *)(lVar29 + 0xc + lVar28) = (float)(dVar7 + dVar9);
      }
      lVar29 = *param_1;
      lVar28 = (longlong)(iVar31 + iVar25 + iVar26) * 0x1c;
      *(int *)(lVar29 + lVar28) = iVar33;
      *(int *)(lVar29 + 4 + lVar28) = iVar20 + iVar26;
      *(undefined4 *)(lVar29 + 8 + lVar28) = local_c0;
      *(int *)(lVar29 + 0xc + lVar28) = iVar27;
      *(uint *)(lVar29 + 0x10 + lVar28) = (uint)CONCAT11(uVar17,uVar16);
      *(undefined4 *)(lVar29 + 0x14 + lVar28) = uVar22;
      *(uint *)(lVar29 + 0x18 + lVar28) = (uint)bVar18;
      iVar26 = iVar26 + 1;
    } while (iVar19 != iVar26);
  }
  return;
}



// FUNCTION 142f785b0 FUN_142f785b0 body=1002 status=ok
// SIG undefined FUN_142f785b0(void)

void FUN_142f785b0(longlong *param_1)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  longlong *plVar18;
  longlong *plVar19;
  longlong lVar20;
  ulonglong uVar21;
  bool bVar22;
  
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  iVar13 = *piVar1;
  if (iVar13 == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    iVar13 = *piVar1;
  }
  if ((iVar13 == 0x60000000) || (iVar13 == 0)) {
    *piVar1 = 0x40000010;
  }
  if ((int)param_1[6] != 0) {
    uVar21 = 0;
    do {
      lVar9 = param_1[5];
      lVar20 = uVar21 * 0x20;
      lVar10 = *(longlong *)(lVar9 + lVar20);
      uVar11 = *(undefined8 *)(lVar9 + 8 + lVar20);
      iVar6 = *(int *)(lVar9 + 0x10 + lVar20);
      bVar4 = *(byte *)(lVar9 + 0x18 + lVar20);
      iVar7 = *(int *)(*(longlong *)(lVar10 + 0x78) + 0xa0);
      iVar14 = *(int *)((ulonglong)((bVar4 & 1) * 4 + (uint)(iVar7 == 0x100) * 8) + 0x38 +
                       (longlong)param_1);
      if ((((bVar4 & 1) == 0) && (*(char *)((longlong)param_1 + 0x34) != '\0')) &&
         (iVar15 = FUN_14740503d(param_1[3],*(longlong *)(lVar10 + 0x78),0), iVar15 != -1)) {
        iVar14 = iVar15;
      }
      lVar9 = DAT_14ca1c4e0;
      uVar8 = *(undefined4 *)(lVar10 + 0x84);
      if (DAT_14ca1c4e0 != 0) {
        LOCK();
        *(int *)(DAT_14ca1c4e0 + 8) = *(int *)(DAT_14ca1c4e0 + 8) + 1;
        UNLOCK();
      }
      lVar20 = *param_1;
      lVar12 = param_1[1];
      puVar16 = (undefined8 *)FUN_14723bf4e(lVar10,param_1[4],iVar14,iVar6,0);
      *puVar16 = uVar11;
      *(undefined4 *)(puVar16 + 1) = uVar8;
      if ((ulonglong)*(ushort *)(lVar10 + 0x92) != 0xffff) {
        *(undefined8 *)(puVar16[4] + (ulonglong)*(ushort *)(lVar10 + 0x92) * 8) =
             *(undefined8 *)(lVar20 + 0x18);
      }
      if ((ulonglong)*(ushort *)(lVar10 + 0x94) != 0xffff) {
        *(longlong *)(puVar16[4] + (ulonglong)*(ushort *)(lVar10 + 0x94) * 8) = lVar12;
      }
      if ((ulonglong)*(ushort *)(lVar10 + 0x96) != 0xffff) {
        *(longlong *)(puVar16[4] + (ulonglong)*(ushort *)(lVar10 + 0x96) * 8) = lVar9;
      }
      if (lVar9 != 0) {
        LOCK();
        puVar2 = (uint *)(lVar9 + 8);
        uVar3 = *puVar2;
        *puVar2 = *puVar2 - 1;
        UNLOCK();
        if ((uVar3 & 0x3fffffff) == 1) {
          puVar2 = (uint *)(lVar9 + 8);
          LOCK();
          uVar3 = *puVar2;
          *puVar2 = *puVar2 | 0x40000000;
          UNLOCK();
          if ((uVar3 >> 0x1e & 1) == 0) {
            bVar5 = *(byte *)(lVar9 + 0xd);
            plVar17 = (longlong *)FUN_14001cc68(0x10,8);
            plVar17[1] = lVar9;
            plVar19 = DAT_14ca843c0;
            plVar18 = DAT_14ca843c8;
            if ((bVar5 & 2) == 0) {
              do {
                *plVar17 = (longlong)plVar19;
                LOCK();
                bVar22 = plVar19 != DAT_14ca843c0;
                plVar18 = plVar17;
                if (bVar22) {
                  plVar19 = DAT_14ca843c0;
                  plVar18 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar18;
                UNLOCK();
              } while (bVar22);
            }
            else {
              do {
                *plVar17 = (longlong)plVar18;
                LOCK();
                bVar22 = plVar18 != DAT_14ca843c8;
                plVar19 = plVar17;
                if (bVar22) {
                  plVar18 = DAT_14ca843c8;
                  plVar19 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar19;
                UNLOCK();
              } while (bVar22);
            }
          }
        }
      }
      lVar9 = DAT_14ca1c4e0;
      plVar19 = param_1 + 8;
      if (((iVar7 == 0x100) || (plVar19 = (longlong *)((longlong)param_1 + 0x3c), (bVar4 & 1) != 0))
         || ((*(char *)(lVar10 + 0x89) == '\0' ||
             ((plVar19 = param_1 + 7, *(char *)(lVar10 + 0x8a) != '\0' ||
              (*(char *)((longlong)param_1 + 0x35) != '\x01')))))) {
        puVar16 = (undefined8 *)FUN_1471e7936(param_1[4]);
        *(int *)((longlong)puVar16 + 0xc) = iVar6 + 1;
        *puVar16 = uVar11;
        *(undefined4 *)(puVar16 + 1) = *(undefined4 *)(lVar10 + 0x84);
        *(int *)(puVar16 + 2) = (int)*plVar19;
      }
      else {
        uVar8 = *(undefined4 *)(lVar10 + 0x84);
        if (DAT_14ca1c4e0 != 0) {
          LOCK();
          *(int *)(DAT_14ca1c4e0 + 8) = *(int *)(DAT_14ca1c4e0 + 8) + 1;
          UNLOCK();
        }
        lVar20 = *param_1;
        lVar12 = param_1[1];
        puVar16 = (undefined8 *)FUN_14723bf4e(lVar10,param_1[4],iVar14,iVar6 + 1,0);
        *puVar16 = uVar11;
        *(undefined4 *)(puVar16 + 1) = uVar8;
        if ((ulonglong)*(ushort *)(lVar10 + 0x92) != 0xffff) {
          *(undefined8 *)(puVar16[4] + (ulonglong)*(ushort *)(lVar10 + 0x92) * 8) =
               *(undefined8 *)(lVar20 + 0x18);
        }
        if ((ulonglong)*(ushort *)(lVar10 + 0x94) != 0xffff) {
          *(longlong *)(puVar16[4] + (ulonglong)*(ushort *)(lVar10 + 0x94) * 8) = lVar12;
        }
        if ((ulonglong)*(ushort *)(lVar10 + 0x96) != 0xffff) {
          *(longlong *)(puVar16[4] + (ulonglong)*(ushort *)(lVar10 + 0x96) * 8) = lVar9;
        }
        if (lVar9 != 0) {
          LOCK();
          puVar2 = (uint *)(lVar9 + 8);
          uVar3 = *puVar2;
          *puVar2 = *puVar2 - 1;
          UNLOCK();
          if ((uVar3 & 0x3fffffff) == 1) {
            puVar2 = (uint *)(lVar9 + 8);
            LOCK();
            uVar3 = *puVar2;
            *puVar2 = *puVar2 | 0x40000000;
            UNLOCK();
            if ((uVar3 >> 0x1e & 1) == 0) {
              bVar4 = *(byte *)(lVar9 + 0xd);
              plVar17 = (longlong *)FUN_14001cc68(0x10,8);
              plVar17[1] = lVar9;
              plVar19 = DAT_14ca843c0;
              plVar18 = DAT_14ca843c8;
              if ((bVar4 & 2) == 0) {
                do {
                  *plVar17 = (longlong)plVar19;
                  LOCK();
                  bVar22 = plVar19 != DAT_14ca843c0;
                  plVar18 = plVar17;
                  if (bVar22) {
                    plVar19 = DAT_14ca843c0;
                    plVar18 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar18;
                  UNLOCK();
                } while (bVar22);
              }
              else {
                do {
                  *plVar17 = (longlong)plVar18;
                  LOCK();
                  bVar22 = plVar18 != DAT_14ca843c8;
                  plVar19 = plVar17;
                  if (bVar22) {
                    plVar18 = DAT_14ca843c8;
                    plVar19 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar19;
                  UNLOCK();
                } while (bVar22);
              }
            }
          }
        }
      }
      uVar21 = uVar21 + 1;
    } while (uVar21 < *(uint *)(param_1 + 6));
  }
  if ((iVar13 == 0x60000000) || (iVar13 == 0)) {
    *piVar1 = iVar13;
  }
  return;
}



// FUNCTION 142f7899a FUN_142f7899a body=547 status=ok
// SIG undefined FUN_142f7899a(void)

longlong * FUN_142f7899a(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  longlong *lpTlsValue;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
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
      lVar5 = lpTlsValue[1];
    }
    else {
      lVar5 = *lpTlsValue;
      if (lVar5 != 0) {
        uVar2 = FUN_14493c560();
        if (uVar2 == 0) {
          uVar3 = 0;
          uVar7 = 0;
          lVar6 = 0;
        }
        else {
          uVar7 = (ulonglong)(uVar2 >> 0xe);
          uVar3 = uVar2 & 0x3fff;
          lVar6 = (ulonglong)(uVar3 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar7 * 8);
        }
        *(longlong *)(lVar6 + 8) = lVar5;
        do {
          uVar1 = DAT_14c896180;
          uVar4 = (DAT_14c896180 & 0xfffffffffc000000) + 0x4000000;
          if (uVar4 >> 0x1a < DAT_14c896180 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          if (uVar2 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = *(longlong *)(&DAT_14c833b00 + uVar7 * 8) + (ulonglong)(uVar3 * 0x18);
          }
          *(uint *)(lVar5 + 0x10) = (uint)uVar1 & 0x3ffffff;
          LOCK();
          bVar8 = uVar1 != DAT_14c896180;
          uVar1 = uVar4 | uVar2;
          if (bVar8) {
            uVar1 = DAT_14c896180;
          }
          DAT_14c896180 = uVar1;
          UNLOCK();
        } while (bVar8);
      }
      *lpTlsValue = lpTlsValue[1];
      *(undefined4 *)(lpTlsValue + 2) = 0;
      lVar5 = 0;
    }
    *param_1 = lVar5;
    lpTlsValue[1] = (longlong)param_1;
    *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  }
  return param_1;
}



// FUNCTION 142f78bca FUN_142f78bca body=110 status=ok
// SIG undefined FUN_142f78bca(void)

undefined8 * FUN_142f78bca(undefined8 *param_1,int param_2)

{
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
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
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142f78c38 FUN_142f78c38 body=476 status=ok
// SIG undefined FUN_142f78c38(void)

void FUN_142f78c38(longlong *param_1)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  byte bVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  ulonglong uVar17;
  bool bVar18;
  
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  iVar15 = *piVar1;
  if (iVar15 == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    iVar15 = *piVar1;
  }
  if ((iVar15 == 0x60000000) || (iVar15 == 0)) {
    *piVar1 = 0x40000010;
  }
  if ((int)param_1[5] != 0) {
    uVar17 = 0;
    do {
      lVar8 = param_1[6];
      lVar16 = uVar17 * 0x90 + param_1[4];
      iVar14 = (int)lVar8;
      if ((*(char *)((longlong)param_1 + 0x2c) == '\x01') &&
         (iVar9 = FUN_14740508e(param_1[2],*(undefined8 *)(lVar16 + 0x78),0), iVar9 != -1)) {
        iVar14 = iVar9;
      }
      lVar8 = DAT_14ca1c4e0;
      uVar5 = *(undefined4 *)(lVar16 + 0x84);
      if (DAT_14ca1c4e0 != 0) {
        LOCK();
        *(int *)(DAT_14ca1c4e0 + 8) = *(int *)(DAT_14ca1c4e0 + 8) + 1;
        UNLOCK();
      }
      lVar6 = *param_1;
      lVar7 = param_1[1];
      lVar10 = FUN_14723bf4e(lVar16,param_1[3],iVar14,uVar5,0);
      if ((ulonglong)*(ushort *)(lVar16 + 0x88) != 0xffff) {
        *(undefined8 *)(*(longlong *)(lVar10 + 0x20) + (ulonglong)*(ushort *)(lVar16 + 0x88) * 8) =
             *(undefined8 *)(lVar6 + 0x18);
      }
      if ((ulonglong)*(ushort *)(lVar16 + 0x8a) != 0xffff) {
        *(longlong *)(*(longlong *)(lVar10 + 0x20) + (ulonglong)*(ushort *)(lVar16 + 0x8a) * 8) =
             lVar7;
      }
      if ((ulonglong)*(ushort *)(lVar16 + 0x8c) != 0xffff) {
        *(longlong *)(*(longlong *)(lVar10 + 0x20) + (ulonglong)*(ushort *)(lVar16 + 0x8c) * 8) =
             lVar8;
      }
      if (lVar8 != 0) {
        LOCK();
        puVar2 = (uint *)(lVar8 + 8);
        uVar3 = *puVar2;
        *puVar2 = *puVar2 - 1;
        UNLOCK();
        if ((uVar3 & 0x3fffffff) == 1) {
          puVar2 = (uint *)(lVar8 + 8);
          LOCK();
          uVar3 = *puVar2;
          *puVar2 = *puVar2 | 0x40000000;
          UNLOCK();
          if ((uVar3 >> 0x1e & 1) == 0) {
            bVar4 = *(byte *)(lVar8 + 0xd);
            plVar11 = (longlong *)FUN_14001cc68(0x10,8);
            plVar11[1] = lVar8;
            plVar13 = DAT_14ca843c0;
            plVar12 = DAT_14ca843c8;
            if ((bVar4 & 2) == 0) {
              do {
                *plVar11 = (longlong)plVar13;
                LOCK();
                bVar18 = plVar13 != DAT_14ca843c0;
                plVar12 = plVar11;
                if (bVar18) {
                  plVar13 = DAT_14ca843c0;
                  plVar12 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar12;
                UNLOCK();
              } while (bVar18);
            }
            else {
              do {
                *plVar11 = (longlong)plVar12;
                LOCK();
                bVar18 = plVar12 != DAT_14ca843c8;
                plVar13 = plVar11;
                if (bVar18) {
                  plVar12 = DAT_14ca843c8;
                  plVar13 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar13;
                UNLOCK();
              } while (bVar18);
            }
          }
        }
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 < *(uint *)(param_1 + 5));
  }
  if ((iVar15 == 0x60000000) || (iVar15 == 0)) {
    *piVar1 = iVar15;
  }
  return;
}



// FUNCTION 142f78e14 FUN_142f78e14 body=547 status=ok
// SIG undefined FUN_142f78e14(void)

longlong * FUN_142f78e14(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  longlong *lpTlsValue;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
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
      lVar5 = lpTlsValue[1];
    }
    else {
      lVar5 = *lpTlsValue;
      if (lVar5 != 0) {
        uVar2 = FUN_14493c560();
        if (uVar2 == 0) {
          uVar3 = 0;
          uVar7 = 0;
          lVar6 = 0;
        }
        else {
          uVar7 = (ulonglong)(uVar2 >> 0xe);
          uVar3 = uVar2 & 0x3fff;
          lVar6 = (ulonglong)(uVar3 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar7 * 8);
        }
        *(longlong *)(lVar6 + 8) = lVar5;
        do {
          uVar1 = DAT_14c896180;
          uVar4 = (DAT_14c896180 & 0xfffffffffc000000) + 0x4000000;
          if (uVar4 >> 0x1a < DAT_14c896180 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          if (uVar2 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = *(longlong *)(&DAT_14c833b00 + uVar7 * 8) + (ulonglong)(uVar3 * 0x18);
          }
          *(uint *)(lVar5 + 0x10) = (uint)uVar1 & 0x3ffffff;
          LOCK();
          bVar8 = uVar1 != DAT_14c896180;
          uVar1 = uVar4 | uVar2;
          if (bVar8) {
            uVar1 = DAT_14c896180;
          }
          DAT_14c896180 = uVar1;
          UNLOCK();
        } while (bVar8);
      }
      *lpTlsValue = lpTlsValue[1];
      *(undefined4 *)(lpTlsValue + 2) = 0;
      lVar5 = 0;
    }
    *param_1 = lVar5;
    lpTlsValue[1] = (longlong)param_1;
    *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  }
  return param_1;
}



// FUNCTION 142f79044 FUN_142f79044 body=110 status=ok
// SIG undefined FUN_142f79044(void)

undefined8 * FUN_142f79044(undefined8 *param_1,int param_2)

{
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
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
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142f790b2 FUN_142f790b2 body=113 status=ok
// SIG undefined FUN_142f790b2(void)

void FUN_142f790b2(longlong *param_1,longlong *param_2)

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
      }
      else {
        FUN_144705e74(piVar2);
      }
    }
  }
  *param_1 = *param_2;
  *param_2 = 0;
  return;
}



// FUNCTION 142f79124 FUN_142f79124 body=139 status=ok
// SIG undefined FUN_142f79124(void)

void FUN_142f79124(longlong *param_1)

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
        FUN_14004673c(lVar2 + 0x10,0);
        FUN_1400020a8(lVar2);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar4);
  }
  lVar3 = param_1[3];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = param_1[2];
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(lVar1 + lVar4);
      if (lVar2 != 0) {
        FUN_14004673c(lVar2 + 0x10,0);
        FUN_1400020a8(lVar2);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar4);
  }
  return;
}



// FUNCTION 142f791b0 FUN_142f791b0 body=167 status=ok
// SIG undefined FUN_142f791b0(void)

void FUN_142f791b0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar4);
      if (lVar3 != 0) {
        FUN_14004673c(lVar3 + 0x10,0);
        FUN_1400020a8(lVar3);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar4);
      if (lVar3 != 0) {
        FUN_14004673c(lVar3 + 0x10,0);
        FUN_1400020a8(lVar3);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  FUN_140046130(param_1 + 0x20);
  FUN_140046130(param_1 + 0x10);
  return;
}



// FUNCTION 142f79258 FUN_142f79258 body=38 status=ok
// SIG undefined FUN_142f79258(void)

undefined8 FUN_142f79258(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142f7927e FUN_142f7927e body=651 status=ok
// SIG undefined FUN_142f7927e(void)

void FUN_142f7927e(longlong param_1,ulonglong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined1 local_c0 [8];
  char local_b8;
  undefined7 uStack_b7;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar11 + 0x11;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x90);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar11 + 0x11;
  }
  *param_2 = (ulonglong)puVar5;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  puVar11[1] = 0;
  *puVar11 = &PTR_FUN_14a1fb978;
  puVar11[3] = 0;
  *(int *)(puVar11 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar11 + 0x24) = 8;
  }
  else {
    puVar10 = local_c0;
    if ((undefined1 *)CONCAT71(uStack_b7,local_b8) != (undefined1 *)0x0) {
      puVar10 = (undefined1 *)CONCAT71(uStack_b7,local_b8);
    }
    FUN_1446fe144(puVar11 + 2,local_b0,0);
    puVar5 = (undefined8 *)puVar11[3];
    if ((undefined8 *)puVar11[3] == (undefined8 *)0x0) {
      puVar5 = puVar11 + 2;
    }
    memcpy(puVar5,puVar10,(longlong)local_b0);
  }
  puVar11[0xd] = 0;
  *(int *)(puVar11 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar11 + 0x74) = 8;
  }
  else {
    puVar10 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar10 = local_a8;
    }
    FUN_1446fe1b8(puVar11 + 5,local_60,0);
    puVar5 = (undefined8 *)puVar11[0xd];
    if ((undefined8 *)puVar11[0xd] == (undefined8 *)0x0) {
      puVar5 = puVar11 + 5;
    }
    memcpy(puVar5,puVar10,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar11 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar11 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar11 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar11 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT71(uStack_b7,local_b8) != 0) {
    FUN_1400020a8();
  }
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x1c8) + 0x13ae0);
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x1c8) + 0x13ae8);
  uVar6 = FUN_144821ef4(param_2);
  uVar3 = *(undefined8 *)(param_1 + 0x1b8);
  uVar7 = FUN_145f84b98();
  FUN_1472c2ed5(uVar6,param_1 + 0x1d8,uVar7,uVar3);
  FUN_1472b057a(local_c0,*(undefined8 *)(param_1 + 0x1c8),*(undefined8 *)(param_1 + 0x1d0),param_2);
  local_c8 = *(undefined4 *)(param_1 + 0x1ec);
  local_d0 = *(undefined4 *)(param_1 + 0x1e8);
  if (*(longlong *)(param_1 + 0x1d8) == 0) {
    lVar8 = 0;
  }
  else {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x1e0) + 8);
    lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1d8) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar4 + 0x50) + lVar9 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar4,lVar9,1);
    }
  }
  local_d8 = uVar6;
  FUN_147412f8e(param_2,uVar1,lVar8,uVar2);
  if (local_b8 == '\x01') {
    FUN_1471f3c22(local_c0);
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f7950a FUN_142f7950a body=547 status=ok
// SIG undefined FUN_142f7950a(void)

longlong * FUN_142f7950a(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  longlong *lpTlsValue;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
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
      lVar5 = lpTlsValue[1];
    }
    else {
      lVar5 = *lpTlsValue;
      if (lVar5 != 0) {
        uVar2 = FUN_14493c560();
        if (uVar2 == 0) {
          uVar3 = 0;
          uVar7 = 0;
          lVar6 = 0;
        }
        else {
          uVar7 = (ulonglong)(uVar2 >> 0xe);
          uVar3 = uVar2 & 0x3fff;
          lVar6 = (ulonglong)(uVar3 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar7 * 8);
        }
        *(longlong *)(lVar6 + 8) = lVar5;
        do {
          uVar1 = DAT_14c896180;
          uVar4 = (DAT_14c896180 & 0xfffffffffc000000) + 0x4000000;
          if (uVar4 >> 0x1a < DAT_14c896180 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          if (uVar2 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = *(longlong *)(&DAT_14c833b00 + uVar7 * 8) + (ulonglong)(uVar3 * 0x18);
          }
          *(uint *)(lVar5 + 0x10) = (uint)uVar1 & 0x3ffffff;
          LOCK();
          bVar8 = uVar1 != DAT_14c896180;
          uVar1 = uVar4 | uVar2;
          if (bVar8) {
            uVar1 = DAT_14c896180;
          }
          DAT_14c896180 = uVar1;
          UNLOCK();
        } while (bVar8);
      }
      *lpTlsValue = lpTlsValue[1];
      *(undefined4 *)(lpTlsValue + 2) = 0;
      lVar5 = 0;
    }
    *param_1 = lVar5;
    lpTlsValue[1] = (longlong)param_1;
    *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  }
  return param_1;
}



// FUNCTION 142f7972e FUN_142f7972e body=246 status=ok
// SIG undefined FUN_142f7972e(void)

void FUN_142f7972e(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  iVar6 = *piVar1;
  if (iVar6 == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    iVar6 = *piVar1;
  }
  if ((iVar6 == 0x60000000) || (iVar6 == 0)) {
    *piVar1 = 0x40000010;
  }
  iVar8 = *(int *)(param_1 + 0xc0);
  if (0 < iVar8) {
    lVar7 = 0;
    do {
      lVar4 = *(longlong *)(param_1 + 200);
      if (*(int *)(lVar4 + 0x40 + lVar7 * 0x60) != 0) {
        iVar8 = *(int *)(*(longlong *)(param_1 + 0xd8) + lVar7 * 4);
        uVar9 = 0;
        do {
          puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0xb8) + lVar7 * 0x10);
          uVar5 = puVar2[1];
          puVar3 = (undefined8 *)
                   (*(longlong *)(param_1 + 0xa8) + (longlong)(int)(iVar8 + uVar9) * 0x10);
          *puVar3 = *puVar2;
          puVar3[1] = uVar5;
          uVar9 = uVar9 + 1;
        } while (uVar9 < *(uint *)(lVar4 + lVar7 * 0x60 + 0x40));
        iVar8 = *(int *)(param_1 + 0xc0);
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar8);
  }
  if ((iVar6 == 0x60000000) || (iVar6 == 0)) {
    *piVar1 = iVar6;
  }
  return;
}



// FUNCTION 142f79824 FUN_142f79824 body=110 status=ok
// SIG undefined FUN_142f79824(void)

undefined8 * FUN_142f79824(undefined8 *param_1,int param_2)

{
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
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
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142f79892 FUN_142f79892 body=1091 status=ok
// SIG undefined FUN_142f79892(void)

void FUN_142f79892(longlong param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  int iVar15;
  bool bVar16;
  undefined1 auStack_178 [32];
  int local_158;
  undefined4 local_150;
  undefined8 *local_148;
  int local_138;
  int local_134;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  longlong local_118;
  int *local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  int local_d0;
  undefined4 local_c8;
  int local_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  code *local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  piVar2 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  iVar15 = *piVar2;
  if (iVar15 == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    iVar15 = *piVar2;
  }
  if ((iVar15 == 0x60000000) || (local_138 = iVar15, iVar15 == 0)) {
    *piVar2 = 0x40000010;
    local_138 = 0x40000010;
  }
  if (*(char *)(param_1 + 0x90) == '\x01') {
    FUN_14002049c(*(undefined8 *)(param_1 + 0x88),1);
    local_138 = *piVar2;
  }
  lVar8 = *(longlong *)(param_1 + 0x88);
  if (local_138 == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    local_138 = *piVar2;
  }
  if ((local_138 == 0x60000000) || (local_138 == 0)) {
    *piVar2 = 0x40000010;
  }
  iVar6 = *(int *)(param_1 + 8);
  iVar7 = *(int *)(param_1 + 0x10);
  uVar9 = *(undefined8 *)(param_1 + 0x60);
  cVar4 = *(char *)(lVar8 + 0x69);
  local_134 = iVar15;
  if (cVar4 == '\0') {
    FUN_14002049c(lVar8,1);
  }
  local_150 = 1;
  local_158 = iVar6 * 0x1c;
  local_120 = (**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,lVar8,uVar9,0);
  if (cVar4 == '\0') {
    FUN_14002049c(lVar8,0);
  }
  local_118 = lVar8;
  if (*(int *)(param_1 + 0x10) == 0) {
    local_130 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(param_1 + 0x68);
    cVar4 = *(char *)(lVar8 + 0x69);
    if (cVar4 == '\0') {
      FUN_14002049c(lVar8,1);
    }
    local_150 = 1;
    local_158 = iVar7 * 0x30;
    local_130 = (**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,lVar8,uVar9,0);
    if (cVar4 == '\0') {
      FUN_14002049c(lVar8,0);
    }
  }
  local_c4 = *(int *)(param_1 + 0x10);
  local_d0 = local_c4 * 3;
  local_e0 = *(undefined4 *)(param_1 + 8);
  local_c8 = *(undefined4 *)(param_1 + 0xc);
  local_128 = *(undefined8 *)(param_1 + 0x48);
  local_88 = *(undefined4 *)(param_1 + 0x50);
  local_a0 = *(undefined8 *)(param_1 + 0x38);
  local_98 = *(undefined4 *)(param_1 + 0x40);
  local_b0 = *(undefined8 *)(param_1 + 0x28);
  local_a8 = *(undefined4 *)(param_1 + 0x30);
  local_c0 = *(undefined8 *)(param_1 + 0x18);
  local_b8 = *(undefined4 *)(param_1 + 0x20);
  local_f8 = *(undefined8 *)(param_1 + 0x80);
  uVar9 = *(undefined8 *)(param_1 + 0x70);
  uVar10 = *(undefined8 *)(param_1 + 0x78);
  lVar8 = *(longlong *)(param_1 + 0x58);
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
  }
  local_60 = &local_e8;
  local_e8 = local_120;
  local_d8 = local_130;
  local_108._0_4_ = (undefined4)uVar9;
  local_108._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
  uStack_100._0_4_ = (undefined4)uVar10;
  uStack_100._4_4_ = (undefined4)((ulonglong)uVar10 >> 0x20);
  local_80 = (undefined4)local_108;
  uStack_7c = local_108._4_4_;
  uStack_78 = (undefined4)uStack_100;
  uStack_74 = uStack_100._4_4_;
  local_148 = &local_58;
  local_58 = 0;
  local_50 = 0;
  local_68 = FUN_142f78042;
  local_150 = 0;
  local_110 = piVar2;
  local_108 = uVar9;
  uStack_100 = uVar10;
  local_90 = local_128;
  local_70 = local_f8;
  FUN_1411ca36e(L"FillRayTracingInstanceUploadBuffer_Parallel",local_b8,0x80);
  piVar2 = local_110;
  lVar11 = local_118;
  iVar15 = local_138;
  if (lVar8 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar8 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar8 + 8);
      LOCK();
      uVar3 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar3 >> 0x1e & 1) == 0) {
        bVar5 = *(byte *)(lVar8 + 0xd);
        plVar12 = (longlong *)FUN_14001cc68(0x10,8);
        plVar12[1] = lVar8;
        plVar14 = DAT_14ca843c0;
        plVar13 = DAT_14ca843c8;
        if ((bVar5 & 2) == 0) {
          do {
            *plVar12 = (longlong)plVar14;
            LOCK();
            bVar16 = plVar14 != DAT_14ca843c0;
            plVar13 = plVar12;
            if (bVar16) {
              plVar14 = DAT_14ca843c0;
              plVar13 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar13;
            UNLOCK();
          } while (bVar16);
        }
        else {
          do {
            *plVar12 = (longlong)plVar13;
            LOCK();
            bVar16 = plVar13 != DAT_14ca843c8;
            plVar14 = plVar12;
            if (bVar16) {
              plVar13 = DAT_14ca843c8;
              plVar14 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar14;
            UNLOCK();
          } while (bVar16);
        }
      }
    }
  }
  uVar9 = *(undefined8 *)(param_1 + 0x60);
  if (*(char *)(lVar11 + 0x69) == '\0') {
    FUN_14002049c(lVar11,1);
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,lVar11,uVar9);
    FUN_14002049c(lVar11,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,lVar11,uVar9);
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar9 = *(undefined8 *)(param_1 + 0x68);
    if (*(char *)(lVar11 + 0x69) == '\0') {
      FUN_14002049c(lVar11,1);
      (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,lVar11,uVar9);
      FUN_14002049c(lVar11,0);
    }
    else {
      (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,lVar11,uVar9);
    }
  }
  iVar6 = local_134;
  if ((iVar15 == 0x60000000) || (iVar15 == 0)) {
    *piVar2 = iVar15;
  }
  if (*(char *)(param_1 + 0x90) == '\x01') {
    FUN_1447850c6(*(undefined8 *)(param_1 + 0x88));
  }
  if ((iVar6 == 0x60000000) || (iVar6 == 0)) {
    *piVar2 = iVar6;
  }
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142f79cd6 FUN_142f79cd6 body=118 status=ok
// SIG undefined FUN_142f79cd6(void)

undefined8 * FUN_142f79cd6(undefined8 *param_1,int param_2)

{
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
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
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,param_1);
  }
  return param_1;
}



// FUNCTION 142f79d4c FUN_142f79d4c body=395 status=ok
// SIG undefined FUN_142f79d4c(void)

void FUN_142f79d4c(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  FUN_142f79892(param_1 + 0xa8);
  lVar4 = *(longlong *)(param_1 + 0x110);
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
  lVar4 = *(longlong *)(param_1 + 0x108);
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
  lVar4 = *(longlong *)(param_1 + 0x100);
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
  return;
}



// FUNCTION 142f79ed8 FUN_142f79ed8 body=110 status=ok
// SIG undefined FUN_142f79ed8(void)

undefined8 * FUN_142f79ed8(undefined8 *param_1,int param_2)

{
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
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
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142f79f46 FUN_142f79f46 body=593 status=ok
// SIG undefined FUN_142f79f46(void)

void FUN_142f79f46(longlong param_1)

{
  int *piVar1;
  size_t _Size;
  int iVar2;
  ulonglong *puVar3;
  void *_Src;
  longlong *plVar4;
  byte bVar5;
  int iVar6;
  longlong lVar7;
  void *pvVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  void *_Dst;
  
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  iVar6 = *piVar1;
  if (iVar6 == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    iVar6 = *piVar1;
  }
  if ((iVar6 == 0x60000000) || (iVar6 == 0)) {
    *piVar1 = 0x40000010;
  }
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_14002049c(*(undefined8 *)(param_1 + 0x10),1);
  }
  puVar3 = *(ulonglong **)(param_1 + 0x10);
  uVar13 = *(uint *)((longlong)puVar3 + 0x17c);
  if (uVar13 != 0) {
    iVar12 = 0;
    if (uVar13 != 0) {
      for (; (uVar13 >> iVar12 & 1) == 0; iVar12 = iVar12 + 1) {
      }
    }
    do {
      lVar7 = (**(code **)(*DAT_14ca83900 + 0x160))
                        (DAT_14ca83900,puVar3,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0xb0),
                         iVar12,0,*(int *)(*(longlong *)(param_1 + 8) + 0x58) << 3,1);
      iVar2 = *(int *)(*(longlong *)(param_1 + 8) + 0x58);
      lVar14 = (longlong)iVar2;
      if (lVar14 == 0) {
        if (*(char *)((longlong)puVar3 + 100) == '\0') {
          _Dst = (void *)0x0;
          goto LAB_142f7a094;
        }
      }
      else {
        _Src = *(void **)(*(longlong *)(param_1 + 8) + 0x50);
        _Size = lVar14 * 8;
        _Dst = (void *)(*puVar3 + 7 & 0xfffffffffffffff8);
        pvVar8 = (void *)((longlong)_Dst + lVar14 * 8);
        if ((void *)puVar3[1] < pvVar8) {
          FUN_140023dd8(puVar3,(int)_Size + 8);
          _Dst = (void *)(*puVar3 + 7 & 0xfffffffffffffff8);
          pvVar8 = (void *)((longlong)_Dst + _Size);
        }
        *puVar3 = (ulonglong)pvVar8;
        memcpy(_Dst,_Src,_Size);
        if (*(char *)((longlong)puVar3 + 100) == '\0') {
LAB_142f7a094:
          puVar10 = (undefined8 *)(*puVar3 + 7 & 0xfffffffffffffff8);
          puVar11 = puVar10 + 6;
          if ((undefined8 *)puVar3[1] < puVar11) {
            FUN_140023dd8(puVar3,0x38);
            puVar10 = (undefined8 *)(*puVar3 + 7 & 0xfffffffffffffff8);
            puVar11 = puVar10 + 6;
          }
          *puVar3 = (ulonglong)puVar11;
          *(int *)(puVar3 + 0xc) = (int)puVar3[0xc] + 1;
          *(undefined8 **)puVar3[6] = puVar10;
          puVar3[6] = (ulonglong)(puVar10 + 1);
          puVar10[1] = 0;
          *puVar10 = &PTR_FUN_14a2dbf68;
          puVar10[2] = lVar7;
          puVar10[3] = _Dst;
          *(int *)(puVar10 + 4) = iVar2;
          *(int *)(puVar10 + 5) = iVar12;
        }
        else if (0 < iVar2) {
          lVar15 = 0;
          do {
            plVar4 = *(longlong **)((longlong)_Dst + lVar15 * 8);
            uVar9 = (**(code **)(*plVar4 + 8))(plVar4,iVar12);
            *(undefined8 *)(lVar7 + lVar15 * 8) = uVar9;
            lVar15 = lVar15 + 1;
          } while (lVar14 != lVar15);
        }
      }
      (**(code **)(*DAT_14ca83900 + 0x170))
                (DAT_14ca83900,puVar3,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0xb0),iVar12);
      bVar5 = (byte)iVar12 & 0x1f;
      uVar13 = uVar13 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
      if (uVar13 == 0) {
        iVar12 = 0x20;
      }
      else {
        iVar12 = 0;
        if (uVar13 != 0) {
          for (; (uVar13 >> iVar12 & 1) == 0; iVar12 = iVar12 + 1) {
          }
        }
      }
    } while (uVar13 != 0);
  }
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_1447850c6(*(undefined8 *)(param_1 + 0x10));
  }
  if ((iVar6 == 0x60000000) || (iVar6 == 0)) {
    *piVar1 = iVar6;
  }
  return;
}



// FUNCTION 142f7a198 FUN_142f7a198 body=61 status=ok
// SIG undefined FUN_142f7a198(void)

void FUN_142f7a198(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + lVar3 * 8);
      uVar2 = (**(code **)(*plVar1 + 8))(plVar1,*(undefined4 *)(param_1 + 0x28));
      *(undefined8 *)(*(longlong *)(param_1 + 0x10) + lVar3 * 8) = uVar2;
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(param_1 + 0x20));
  }
  return;
}



// FUNCTION 142f7a1d6 FUN_142f7a1d6 body=547 status=ok
// SIG undefined FUN_142f7a1d6(void)

longlong * FUN_142f7a1d6(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  longlong *lpTlsValue;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
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
      lVar5 = lpTlsValue[1];
    }
    else {
      lVar5 = *lpTlsValue;
      if (lVar5 != 0) {
        uVar2 = FUN_14493c560();
        if (uVar2 == 0) {
          uVar3 = 0;
          uVar7 = 0;
          lVar6 = 0;
        }
        else {
          uVar7 = (ulonglong)(uVar2 >> 0xe);
          uVar3 = uVar2 & 0x3fff;
          lVar6 = (ulonglong)(uVar3 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar7 * 8);
        }
        *(longlong *)(lVar6 + 8) = lVar5;
        do {
          uVar1 = DAT_14c896180;
          uVar4 = (DAT_14c896180 & 0xfffffffffc000000) + 0x4000000;
          if (uVar4 >> 0x1a < DAT_14c896180 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          if (uVar2 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = *(longlong *)(&DAT_14c833b00 + uVar7 * 8) + (ulonglong)(uVar3 * 0x18);
          }
          *(uint *)(lVar5 + 0x10) = (uint)uVar1 & 0x3ffffff;
          LOCK();
          bVar8 = uVar1 != DAT_14c896180;
          uVar1 = uVar4 | uVar2;
          if (bVar8) {
            uVar1 = DAT_14c896180;
          }
          DAT_14c896180 = uVar1;
          UNLOCK();
        } while (bVar8);
      }
      *lpTlsValue = lpTlsValue[1];
      *(undefined4 *)(lpTlsValue + 2) = 0;
      lVar5 = 0;
    }
    *param_1 = lVar5;
    lpTlsValue[1] = (longlong)param_1;
    *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  }
  return param_1;
}



// FUNCTION 142f7a406 FUN_142f7a406 body=110 status=ok
// SIG undefined FUN_142f7a406(void)

undefined8 * FUN_142f7a406(undefined8 *param_1,int param_2)

{
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
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
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142f7a474 FUN_142f7a474 body=38 status=ok
// SIG undefined FUN_142f7a474(void)

undefined8 FUN_142f7a474(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142f7a49a FUN_142f7a49a body=219 status=ok
// SIG undefined FUN_142f7a49a(void)

void FUN_142f7a49a(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x240);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  FUN_142f7a59c(param_1,param_2);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = 4;
  return;
}



// FUNCTION 142f7a576 FUN_142f7a576 body=38 status=ok
// SIG undefined FUN_142f7a576(void)

undefined8 FUN_142f7a576(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142f7a59c FUN_142f7a59c body=925 status=ok
// SIG undefined FUN_142f7a59c(void)

void FUN_142f7a59c(longlong param_1,ulonglong *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  float *_Src;
  undefined1 *_Src_00;
  undefined8 *puVar5;
  undefined1 auStack_158 [32];
  longlong *local_138;
  longlong *local_130;
  longlong *local_128;
  undefined4 local_120;
  undefined4 local_118;
  longlong local_110;
  longlong *local_108;
  longlong *local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  float local_c8;
  float local_c4;
  float local_c0;
  float fStack_bc;
  float local_b8;
  float local_b4;
  undefined1 local_b0 [64];
  undefined1 *local_70;
  int local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  FUN_144b1c6fa(param_1 + 0x10,&local_c8);
  puVar5 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar5 + 0x11;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x90);
    puVar5 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar5 + 0x11;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar5;
  param_2[6] = (ulonglong)(puVar5 + 1);
  puVar5[1] = 0;
  *puVar5 = &PTR_FUN_14a1fb978;
  puVar5[3] = 0;
  *(float *)(puVar5 + 4) = local_b8;
  if ((longlong)(int)local_b8 == 0) {
    *(undefined4 *)((longlong)puVar5 + 0x24) = 8;
  }
  else {
    _Src = &local_c8;
    if ((float *)CONCAT44(fStack_bc,local_c0) != (float *)0x0) {
      _Src = (float *)CONCAT44(fStack_bc,local_c0);
    }
    FUN_1446fe144(puVar5 + 2,local_b8,0);
    puVar3 = (undefined8 *)puVar5[3];
    if ((undefined8 *)puVar5[3] == (undefined8 *)0x0) {
      puVar3 = puVar5 + 2;
    }
    memcpy(puVar3,_Src,(longlong)(int)local_b8);
  }
  puVar5[0xd] = 0;
  *(int *)(puVar5 + 0xe) = local_68;
  if ((longlong)local_68 == 0) {
    *(undefined4 *)((longlong)puVar5 + 0x74) = 8;
  }
  else {
    _Src_00 = local_70;
    if (local_70 == (undefined1 *)0x0) {
      _Src_00 = local_b0;
    }
    FUN_1446fe1b8(puVar5 + 5,local_68,0);
    puVar3 = (undefined8 *)puVar5[0xd];
    if ((undefined8 *)puVar5[0xd] == (undefined8 *)0x0) {
      puVar3 = puVar5 + 5;
    }
    memcpy(puVar3,_Src_00,(longlong)local_68 << 3);
  }
  *(undefined4 *)(puVar5 + 0xf) = local_60;
  *(undefined4 *)((longlong)puVar5 + 0x7c) = uStack_5c;
  *(undefined4 *)(puVar5 + 0x10) = uStack_58;
  *(undefined4 *)((longlong)puVar5 + 0x84) = uStack_54;
  if (local_70 != (undefined1 *)0x0) {
    FUN_1400020a8(local_70);
  }
  if (CONCAT44(fStack_bc,local_c0) != 0) {
    FUN_1400020a8();
  }
  lVar4 = *(longlong *)(param_1 + 0x1b8);
  lVar2 = *(longlong *)(param_1 + 0x1c0);
  if (*(longlong *)(lVar4 + 0x10) == 0) {
    local_d0 = 0;
  }
  else {
    local_d0 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x10);
    if (local_d0 != 0) {
      LOCK();
      *(int *)(local_d0 + 8) = *(int *)(local_d0 + 8) + 1;
      UNLOCK();
      lVar4 = *(longlong *)(param_1 + 0x1b8);
    }
  }
  if (*(longlong *)(lVar4 + 8) == 0) {
    local_d8 = 0;
  }
  else {
    local_d8 = *(longlong *)(*(longlong *)(lVar4 + 8) + 0x10);
    if (local_d8 != 0) {
      LOCK();
      *(int *)(local_d8 + 8) = *(int *)(local_d8 + 8) + 1;
      UNLOCK();
    }
  }
  cVar1 = *(char *)(param_1 + 0x239);
  local_118 = *(undefined4 *)(param_1 + 0x1dc);
  local_120 = *(undefined4 *)(param_1 + 0x1d8);
  lVar4 = *(longlong *)(param_1 + 0x1c8);
  local_e0 = *(longlong *)(lVar4 + 0xa8);
  if (local_e0 != 0) {
    LOCK();
    *(int *)(local_e0 + 8) = *(int *)(local_e0 + 8) + 1;
    UNLOCK();
    lVar4 = *(longlong *)(param_1 + 0x1c8);
  }
  local_e8 = *(longlong *)(lVar4 + 0xb8);
  if (local_e8 != 0) {
    LOCK();
    *(int *)(local_e8 + 8) = *(int *)(local_e8 + 8) + 1;
    UNLOCK();
    lVar4 = *(longlong *)(param_1 + 0x1c8);
  }
  local_f0 = *(longlong *)(lVar4 + 0x98);
  if (local_f0 != 0) {
    LOCK();
    *(int *)(local_f0 + 8) = *(int *)(local_f0 + 8) + 1;
    UNLOCK();
  }
  local_f8 = *(longlong *)(**(longlong **)(param_1 + 0x1b8) + 0x10);
  if (local_f8 != 0) {
    LOCK();
    *(int *)(local_f8 + 8) = *(int *)(local_f8 + 8) + 1;
    UNLOCK();
  }
  local_110 = 0;
  if (cVar1 != '\0') {
    local_110 = param_1 + 0x1e0;
  }
  local_c8 = (float)*(double *)(lVar2 + 0x58);
  fStack_bc = (float)(*(double *)(lVar2 + 0x58) - (double)local_c8);
  local_c4 = (float)*(double *)(lVar2 + 0x60);
  local_b8 = (float)(*(double *)(lVar2 + 0x60) - (double)local_c4);
  local_c0 = (float)*(double *)(lVar2 + 0x68);
  local_b4 = (float)(*(double *)(lVar2 + 0x68) - (double)local_c0);
  local_100 = &local_d0;
  local_108 = &local_d8;
  local_128 = &local_e0;
  local_130 = &local_e8;
  local_138 = &local_f0;
  FUN_1472b52be(param_2,*(undefined8 *)(param_1 + 0x1d0),&local_c8,&local_f8);
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f7a946 FUN_142f7a946 body=38 status=ok
// SIG undefined FUN_142f7a946(void)

undefined8 FUN_142f7a946(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142f7a96c FUN_142f7a96c body=219 status=ok
// SIG undefined FUN_142f7a96c(void)

void FUN_142f7a96c(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1d0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  FUN_142f7aa6e(param_1,param_2);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = 4;
  return;
}



// FUNCTION 142f7aa48 FUN_142f7aa48 body=38 status=ok
// SIG undefined FUN_142f7aa48(void)

undefined8 FUN_142f7aa48(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142f7aa6e FUN_142f7aa6e body=1009 status=ok
// SIG undefined FUN_142f7aa6e(void)

void FUN_142f7aa6e(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  void *pvVar10;
  undefined8 **_Src;
  undefined1 *_Src_00;
  void *_Dst;
  undefined8 *puVar11;
  void *pvVar12;
  size_t sVar13;
  undefined1 auStack_f8 [32];
  void *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 *local_c0;
  undefined8 **local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar9 = puVar11 + 0x11;
  if ((undefined8 *)param_2[1] < puVar9) {
    FUN_140023dd8(param_2,0x90);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar9 = puVar11 + 0x11;
  }
  *param_2 = (ulonglong)puVar9;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  puVar11[1] = 0;
  *puVar11 = &PTR_FUN_14a1fb978;
  puVar11[3] = 0;
  *(int *)(puVar11 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar11 + 0x24) = 8;
  }
  else {
    _Src = &local_c0;
    if (local_b8 != (undefined8 **)0x0) {
      _Src = local_b8;
    }
    FUN_1446fe144(puVar11 + 2,local_b0,0);
    puVar9 = (undefined8 *)puVar11[3];
    if ((undefined8 *)puVar11[3] == (undefined8 *)0x0) {
      puVar9 = puVar11 + 2;
    }
    memcpy(puVar9,_Src,(longlong)local_b0);
  }
  puVar11[0xd] = 0;
  *(int *)(puVar11 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar11 + 0x74) = 8;
  }
  else {
    _Src_00 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src_00 = local_a8;
    }
    FUN_1446fe1b8(puVar11 + 5,local_60,0);
    puVar9 = (undefined8 *)puVar11[0xd];
    if ((undefined8 *)puVar11[0xd] == (undefined8 *)0x0) {
      puVar9 = puVar11 + 5;
    }
    memcpy(puVar9,_Src_00,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar11 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar11 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar11 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar11 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined8 **)0x0) {
    FUN_1400020a8();
  }
  plVar5 = *(longlong **)(param_1 + 0x1b8);
  piVar6 = *(int **)(param_1 + 0x1c8);
  uVar7 = *(undefined8 *)(piVar6 + 0x18);
  local_d0 = *(undefined8 *)(*plVar5 + 0x10);
  local_c8 = *(undefined8 *)(plVar5[2] + 0x10);
  iVar1 = *piVar6;
  iVar2 = piVar6[1];
  pvVar12 = *(void **)(piVar6 + 0x14);
  iVar3 = piVar6[0x16];
  local_d8 = *(void **)(piVar6 + 0x10);
  iVar4 = piVar6[0x12];
  uVar8 = *(undefined8 *)(plVar5[4] + 0x10);
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar9 = puVar11 + 5;
  if ((undefined8 *)param_2[1] < puVar9) {
    FUN_140023dd8(param_2,0x30);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar9 = puVar11 + 5;
  }
  *param_2 = (ulonglong)puVar9;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_14a2dc0b8;
  puVar11[2] = uVar7;
  puVar11[3] = uVar8;
  *(undefined4 *)(puVar11 + 4) = 0;
  FUN_14494c7ac(param_2,&local_c0,1);
  if (local_c0 != (undefined8 *)0x0) {
    LOCK();
    piVar6 = (int *)(local_c0 + 1);
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (*piVar6 == 0) {
      (**(code **)*local_c0)(local_c0,1);
    }
  }
  if (iVar3 == 0) {
    _Dst = (void *)0x0;
  }
  else {
    _Dst = (void *)(*param_2 + 7 & 0xfffffffffffffff8);
    pvVar10 = (void *)((longlong)_Dst + (longlong)iVar3 * 8);
    sVar13 = (longlong)iVar3 * 8;
    if ((void *)param_2[1] < pvVar10) {
      FUN_140023dd8(param_2,(int)sVar13 + 8);
      _Dst = (void *)(*param_2 + 7 & 0xfffffffffffffff8);
      pvVar10 = (void *)((longlong)_Dst + sVar13);
    }
    *param_2 = (ulonglong)pvVar10;
    memcpy(_Dst,pvVar12,sVar13);
  }
  if (iVar4 == 0) {
    pvVar12 = (void *)0x0;
  }
  else {
    pvVar12 = (void *)(*param_2 + 7 & 0xfffffffffffffff8);
    pvVar10 = (void *)((longlong)pvVar12 + (longlong)iVar4 * 8);
    sVar13 = (longlong)iVar4 * 8;
    if ((void *)param_2[1] < pvVar10) {
      FUN_140023dd8(param_2,(int)sVar13 + 8);
      pvVar12 = (void *)(*param_2 + 7 & 0xfffffffffffffff8);
      pvVar10 = (void *)((longlong)pvVar12 + sVar13);
    }
    *param_2 = (ulonglong)pvVar10;
    memcpy(pvVar12,local_d8,sVar13);
  }
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar9 = puVar11 + 0xe;
  if ((undefined8 *)param_2[1] < puVar9) {
    FUN_140023dd8(param_2,0x78);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar9 = puVar11 + 0xe;
  }
  *param_2 = (ulonglong)puVar9;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_14a2dc0c0;
  puVar11[2] = uVar7;
  puVar11[3] = 0;
  *(undefined4 *)(puVar11 + 4) = 0;
  puVar11[5] = local_d0;
  *(undefined4 *)(puVar11 + 6) = 0;
  puVar11[7] = local_c8;
  *(undefined4 *)(puVar11 + 8) = 0;
  *(int *)((longlong)puVar11 + 0x44) = iVar1 + iVar2;
  puVar11[9] = _Dst;
  *(int *)(puVar11 + 10) = iVar3;
  puVar11[0xb] = pvVar12;
  *(int *)(puVar11 + 0xc) = iVar4;
  puVar11[0xd] = 0;
  FUN_14494c7ac(param_2,&local_c0,1);
  if (local_c0 != (undefined8 *)0x0) {
    LOCK();
    piVar6 = (int *)(local_c0 + 1);
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (*piVar6 == 0) {
      (**(code **)*local_c0)(local_c0,1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f7aea4 FUN_142f7aea4 body=6390 status=ok
// SIG undefined FUN_142f7aea4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f7aea4(void)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1400b22c2(&local_58,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_58,&DAT_14ca3852c);
  if (cVar2 == '\0') {
    _DAT_14ca3852c = 0;
    uRam000000014ca38534 = 0;
  }
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  local_68 = 0x20;
  FUN_141471170(&DAT_14ca38540,L"r.RayTracing.ParallelMeshBatchSetup",&DAT_14c7608fc,
                L"Whether to setup ray tracing materials via parallel jobs.");
  atexit(FUN_142f5fe88);
  local_68 = 0x20;
  FUN_141471170(&DAT_14ca38550,L"r.RayTracing.ParallelMeshBatchSize",&DAT_14c760900,
                L"Batch size for ray tracing materials parallel jobs.");
  atexit(FUN_142f5fecd);
  local_58._0_4_ = 0x459c4000;
  local_68 = 0;
  FUN_140a6b41e(&DAT_14ca38560,L"r.RayTracing.DynamicGeometryLastRenderTimeUpdateDistance",&local_58
                ,
                L"Dynamic geometries within this distance will have their LastRenderTime updated, so that visibility based ticking (like skeletal mesh) can work when the component is not directly visible in the view (but reflected)."
               );
  atexit(FUN_142f5ff12);
  local_58 = (undefined8 *)CONCAT44(local_58._4_4_,1);
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca38578,L"r.RayTracing.AutoInstance",&local_58,
                L"Whether to auto instance static meshes\n");
  atexit(FUN_142f5ff57);
  local_68 = 0x20;
  FUN_141471170(&DAT_14ca38590,L"r.RayTracing.ExcludeTranslucent",&DAT_14ca385a0,
                L"A toggle that modifies the inclusion of translucent objects in the ray tracing scene.\n 0: Translucent objects included in the ray tracing scene (default)\n 1: Translucent objects excluded from the ray tracing scene"
               );
  atexit(FUN_142f5ff9c);
  local_68 = 0x20;
  FUN_141471170(&DAT_14ca385a8,L"r.RayTracing.ExcludeSky",&DAT_14c760904,
                L"A toggle that controls inclusion of sky geometry in the ray tracing scene (excluding sky can make ray tracing faster). This setting is ignored for the Path Tracer.\n 0: Sky objects included in the ray tracing scene\n 1: Sky objects excluded from the ray tracing scene (default)"
               );
  atexit(FUN_142f5ffe1);
  local_68 = 0x20;
  FUN_141471170(&DAT_14ca385b8,L"r.RayTracing.ExcludeDecals",&DAT_14ca385c8,
                L"A toggle that modifies the inclusion of decals in the ray tracing BVH.\n 0: Decals included in the ray tracing BVH (default)\n 1: Decals excluded from the ray tracing BVH"
               );
  atexit(FUN_142f60026);
  local_68 = 0;
  FUN_141471170(&DAT_14ca385d0,L"r.RayTracing.DebugDisableTriangleCull",&DAT_14ca385e0,
                L"Forces all ray tracing geometry instances to be double-sided by disabling back-face culling. This is useful for debugging and profiling. (default = 0)"
               );
  atexit(FUN_142f6006b);
  local_68 = 0;
  FUN_141471170(&DAT_14ca385e8,L"r.RayTracing.DebugForceOpaque",&DAT_14ca385f8,
                L"Forces all ray tracing geometry instances to be opaque, effectively disabling any-hit shaders. This is useful for debugging and profiling. (default = 0)"
               );
  atexit(FUN_142f600b0);
  local_58 = (undefined8 *)0x0;
  local_50._0_4_ = 0;
  FUN_1446efa72(&local_58,0,2,0x10);
  local_50._0_4_ = 2;
  *local_58 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_58[2] = lVar4;
  *local_58 = &PTR_FUN_149e062c0;
  local_58[3] = &LAB_142f6f4b4;
  local_68 = 0;
  FUN_14152bcb8(&DAT_14ca38600,L"r.RayTracing.UpdateCachedState",
                L"Update cached ray tracing state (mesh commands and instances).",&local_58);
  if ((int)local_50 == 0) {
LAB_142f7b19f:
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50._0_4_ = 0;
    goto LAB_142f7b19f;
  }
  atexit(FUN_142f600f5);
  local_58 = (undefined8 *)0x0;
  local_50._0_4_ = 0;
  FUN_1446efa72(&local_58,0,2,0x10);
  local_50._0_4_ = 2;
  *local_58 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_58[2] = lVar4;
  *local_58 = &PTR_FUN_149e062c0;
  local_58[3] = FUN_142f6013a;
  FUN_141253d16(&DAT_14ca38610,&local_58);
  if ((int)local_50 != 0) {
    if (local_58 == (undefined8 *)0x0) goto LAB_142f7b275;
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50._0_4_ = 0;
  }
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_142f7b275:
  local_68 = 0x60;
  FUN_141471170(&DAT_14ca38648,L"r.RayTracing.AmbientOcclusion",&DAT_14c760908,
                L"-1: Value driven by postprocess volume (default) \n 0: ray tracing ambient occlusion off \n 1: ray tracing ambient occlusion enabled"
               );
  atexit(FUN_142f64c3e);
  local_58._0_4_ = 2;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca38658,L"r.AmbientOcclusion.Denoiser",&local_58,
                L"Choose the denoising algorithm.\n 0: Disabled;\n 1: Forces the default denoiser of the renderer;\n 2: GScreenSpaceDenoiser witch may be overriden by a third party plugin (default)."
               );
  atexit(FUN_142f64c83);
  local_68 = 0;
  FUN_141471170(&DAT_14ca38670,L"r.RayTracing.AmbientOcclusion.SamplesPerPixel",&DAT_14c76090c,
                L"Sets the samples-per-pixel for ambient occlusion (default = -1 (driven by postprocesing volume))"
               );
  atexit(FUN_142f64cc8);
  local_58._0_4_ = 0;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca38680,L"r.RayTracing.AmbientOcclusion.EnableTwoSidedGeometry",&local_58,
                L"Enables two-sided geometry when tracing shadow rays (default = 0)");
  atexit(FUN_142f64d0d);
  local_58 = (undefined8 *)((ulonglong)local_58._4_4_ << 0x20);
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca38698,L"r.RayTracing.AmbientOcclusion.EnableMaterials",&local_58,
                L"Enables ");
  atexit(FUN_142f64d52);
  local_50 = FUN_145eaf6ee;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca387c8,&local_58);
  local_50 = FUN_145eafc64;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca388f0,&local_58);
  local_50 = FUN_146081628;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca38a18,&local_58);
  local_50 = FUN_145f80c72;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca38b40,&local_58);
  local_50 = FUN_145e5b33a;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca38c68,&local_58);
  local_50 = FUN_145e5b8a4;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca38d90,&local_58);
  local_50 = FUN_14608188e;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca38eb8,&local_58);
  FUN_140056680(&local_58,&DAT_149dfb77a);
  local_68 = 0;
  FUN_140f510cc(&DAT_14ca38ec8,L"r.RayTracing.DebugVisualizationMode",&local_58,
                L"Sets the ray tracing debug visualization mode (default = None - Driven by viewport menu) .\n"
               );
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  atexit(FUN_142f65792);
  local_58 = (undefined8 *)((ulonglong)local_58 & 0xffffffff00000000);
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca38ee0,L"r.RayTracing.Debug.PickerDomain",&local_58,
                L"Changes the picker domain to highlight:\n0 - Triangles (default)\n1 - Instances\n"
               );
  atexit(FUN_142f657d7);
  local_58._0_4_ = 1;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca38ef8,L"r.RayTracing.DebugVisualizationMode.OpaqueOnly",&local_58,
                L"Sets whether the view mode rendes opaque objects only (default = 1, render only opaque objects, 0 = render all objects)"
               );
  atexit(FUN_142f6581c);
  local_58._0_4_ = 0x3f800000;
  local_68 = 0;
  FUN_140a6b41e(&DAT_14ca38f10,L"r.RayTracing.DebugTimingScale",&local_58,
                L"Scaling factor for ray timing heat map visualization. (default = 1)\n");
  atexit(FUN_142f65861);
  local_58._0_4_ = 0x43160000;
  local_68 = 0;
  FUN_140a6b41e(&DAT_14ca38f28,L"r.RayTracing.DebugTraversalScale.Box",&local_58,
                L"Scaling factor for box traversal heat map visualization. (default = 150)\n");
  atexit(FUN_142f658a6);
  local_58._0_4_ = 0x451c4000;
  local_68 = 0;
  FUN_140a6b41e(&DAT_14ca38f40,L"r.RayTracing.DebugTraversalScale.Cluster",&local_58,
                L"Scaling factor for cluster traversal heat map visualization. (default = 2500)\n");
  atexit(FUN_142f658eb);
  local_58._0_4_ = 0x41800000;
  local_68 = 0;
  FUN_140a6b41e(&DAT_14ca38f58,L"r.RayTracing.Debug.InstanceOverlap.Scale",&local_58,
                L"Scaling factor for instance traversal heat map visualization. (default = 16)\n");
  atexit(FUN_142f65930);
  local_58._0_4_ = 0x3f8020c5;
  local_68 = 0;
  FUN_140a6b41e(&DAT_14ca38f70,L"r.RayTracing.Debug.InstanceOverlap.BoundingBoxScale",&local_58,
                L"Scaling factor for instance bounding box extent for avoiding z-fighting. (default = 1.001)\n"
               );
  atexit(FUN_142f65975);
  local_58._0_4_ = 1;
  local_68 = 0;
  FUN_14078dbce(&DAT_14ca38f88,L"r.RayTracing.Debug.InstanceOverlap.ShowWireframe",&local_58,
                L"Show instance bounding boxes in wireframe in Instances Overlap mode. (default = 1)\n"
               );
  atexit(FUN_142f659ba);
  local_58._0_4_ = 0x41f00000;
  local_68 = 0;
  FUN_140a6b41e(&DAT_14ca38fa0,L"r.RayTracing.DebugTraversalScale.Triangle",&local_58,
                L"Scaling factor for triangle traversal heat map visualization. (default = 30)\n");
  atexit(FUN_142f659ff);
  local_58._0_4_ = 6;
  local_68 = 0;
  FUN_14078dbce(&DAT_14ca38fb8,L"r.RayTracing.DebugTriangleHitCount.MaxThreshold",&local_58,
                L"Maximum hit count threshold for debug ray tracing triangle hit count heat map visualization. (default = 6)\n"
               );
  atexit(FUN_142f65a44);
  local_58._0_4_ = 100000;
  local_68 = 0;
  FUN_14078dbce(&DAT_14ca38fd0,L"r.RayTracing.DebugTriangleHitCountPerInstance.MaxThreshold",
                &local_58,
                L"Maximum hit count threshold for debug ray tracing hit count per instance heat map visualization. (default = 100000)\n"
               );
  atexit(FUN_142f65a89);
  local_58 = (undefined8 *)CONCAT44(local_58._4_4_,10);
  local_68 = 0;
  FUN_14078dbce(&DAT_14ca38fe8,L"r.RayTracing.DebugTriangleHitCount.TopKMostHits",&local_58,
                L"Highlight top k most hit instances in the view. (default = 10)\n");
  atexit(FUN_142f65ace);
  local_68 = 0x20;
  FUN_141471170(&DAT_14ca39000,L"r.RayTracing.DebugVisualizationMode.ProceduralPrimitives",
                &DAT_14ca39010,
                L"Whether to include procedural primitives in visualization modes.\nCurrently only supports Nanite primitives in inline barycentrics mode."
               );
  atexit(FUN_142f65b13);
  _DAT_14ca98628 = 0;
  _DAT_14ca9871c = 0x2c;
  DAT_14ca98790 = DAT_14ca98790 | 8;
  local_50 = FUN_145cded52;
  local_58 = (undefined8 *)&DAT_14152059c;
  FUN_14142a670(&DAT_14ca390a0,&local_58);
  local_50 = FUN_145f6cc30;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca391c8,&local_58);
  local_50 = FUN_146081af4;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca392f0,&local_58);
  local_50 = FUN_146081d5a;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca39418,&local_58);
  local_50 = FUN_145f7c6d0;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca39540,&local_58);
  local_50 = FUN_145ede13a;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca39668,&local_58);
  local_50 = FUN_145ec613c;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca39790,&local_58);
  local_50 = FUN_145eb01da;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca398b8,&local_58);
  local_50 = FUN_145f750c4;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca399e0,&local_58);
  local_50 = FUN_145f91df8;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca39b08,&local_58);
  local_50 = FUN_145e93716;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca39c30,&local_58);
  local_50 = FUN_145f592e2;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca39d58,&local_58);
  _DAT_14ca39d70 = 0xffffffff;
  _DAT_14ca39d74 = 0x105;
  DAT_14ca39d76 = 0;
  _DAT_14ca39d78 = 0;
  DAT_14ca39d68 = &PTR_FUN_14a2dbbf0;
  FUN_1463028e4();
  atexit(FUN_142f65be8);
  _DAT_14ca39d88 = 0xffffffff;
  _DAT_14ca39d8c = 0x105;
  DAT_14ca39d8e = 0;
  _DAT_14ca39d90 = 4;
  _DAT_14ca39d98 = 0;
  _DAT_14ca39da0 = 0;
  uRam000000014ca39da8 = 0;
  _DAT_14ca39db0 = 4;
  _DAT_14ca39db8 = 0;
  _DAT_14ca39dc0 = 0;
  uRam000000014ca39dc8 = 0;
  DAT_14ca39d80 = &PTR_FUN_14a2dbca0;
  FUN_14630292c();
  atexit(FUN_142f65c17);
  local_50 = FUN_145e93c86;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca39ee8,&local_58);
  local_58._0_4_ = 0x100;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca39ef8,L"r.RayTracing.DecalGrid.Resolution",&local_58,
                L"Controls the resolution of the 2D decal grid used to cull irrelevant decal from calculations (default = 256)\n"
               );
  atexit(FUN_142f66aa2);
  local_58._0_4_ = 0x80;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca39f10,L"r.RayTracing.DecalGrid.MaxCount",&local_58,
                L"Controls the maximum number of decals per cell in the 2D decal grid. The minimum of this value and the number of decal in the scene is used. (default = 128)\n"
               );
  atexit(FUN_142f66ae7);
  local_58 = (undefined8 *)CONCAT44(local_58._4_4_,0xffffffff);
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca39f28,L"r.RayTracing.DecalGrid.Axis",&local_58,
                L"Choose the coordinate axis along which to project the decal grid (default = -1, automatic)\n"
               );
  atexit(FUN_142f66b2c);
  local_50 = FUN_14049cdc2;
  local_58 = (undefined8 *)&DAT_14152059c;
  FUN_14142a670(&DAT_14ca39fc8,&local_58);
  local_50 = FUN_145e3f878;
  local_58 = (undefined8 *)&DAT_14152059c;
  FUN_14142a670(&DAT_14ca3a060,&local_58);
  local_50 = FUN_145f1aae0;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca3a188,&local_58);
  _DAT_14ca98650 = 0;
  _DAT_14ca98730 = 0x30;
  DAT_14ca98791 = DAT_14ca98791 | 1;
  local_50 = FUN_14612f510;
  local_58 = (undefined8 *)&DAT_142bc70ae;
  FUN_1412df486(&DAT_14ca3a2b0,&local_58);
  local_50 = FUN_14608c3d2;
  local_58 = (undefined8 *)&DAT_141535a92;
  FUN_1412df486(&DAT_14ca3a3d8,&local_58);
  local_50 = FUN_14608c63c;
  local_58 = (undefined8 *)&DAT_141535a92;
  FUN_1412df486(&DAT_14ca3a500,&local_58);
  local_50 = FUN_146091190;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca3a628,&local_58);
  local_50 = FUN_1460913fc;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca3a750,&local_58);
  local_68 = 0x20;
  FUN_141471170(&DAT_14ca3a760,L"r.RayTracing.DynamicGeometry.SharedVertexBufferSizeInMB",
                &DAT_14c760910,
                L"Size of the a single shared vertex buffer used during the BLAS update of dynamic geometries (default 4MB)"
               );
  atexit(FUN_142f66bd1);
  local_68 = 0x20;
  FUN_141471170(&DAT_14ca3a770,
                L"r.RayTracing.DynamicGeometry.SharedVertexBufferGarbageCollectLatency",
                &DAT_14c760914,
                L"Amount of update cycles before a heap is deleted when not used (default 30).");
  atexit(FUN_142f66c16);
  local_58 = (undefined8 *)CONCAT44(local_58._4_4_,0xffffffff);
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca3a780,L"r.RayTracing.DynamicGeometry.MaxUpdatePrimitivesPerFrame",&local_58
                ,
                L"Sets the dynamic ray tracing acceleration structure build budget in terms of maximum number of updated triangles per frame (<= 0 then disabled and all acceleration structures are updated - default)"
               );
  atexit(FUN_142f66c5b);
  local_50 = FUN_140bed418;
  local_58 = (undefined8 *)&DAT_141535a92;
  FUN_1412df486(&DAT_14ca3a8b0,&local_58);
  DAT_14ca3a8c0 = 1;
  uVar3 = (ulonglong)DAT_14c9c0cf0;
  DAT_14ca3a8c4 = DAT_14c9c0cf0;
  DAT_14c9c0cf0 = DAT_14c9c0cf0 + 1;
  *(code **)(&DAT_14cafe970 + uVar3 * 0x10) = FUN_14177582a;
  (&DAT_14cafe978)[uVar3 * 2] = L"RayTracingDynamicGeometry";
  atexit((_func_5014 *)&LAB_142f66cf4);
  local_50 = FUN_145f598d8;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca3a9e8,&local_58);
  local_58._0_4_ = 3;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca3a9f8,L"r.RayTracing.Culling",&local_58,
                L"Enable culling in ray tracing for objects that are behind the camera\n 0: Culling disabled (default)\n 1: Culling by distance and solid angle enabled. Only cull objects behind camera.\n 2: Culling by distance and solid angle enabled. Cull objects in front and behind camera.\n 3: Culling by distance OR solid angle enabled. Cull objects in front and behind camera."
               );
  atexit(FUN_142f683cc);
  local_58._0_4_ = 1;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca3aa10,L"r.RayTracing.Culling.PerInstance",&local_58,&DAT_149dfb77a);
  atexit(FUN_142f68411);
  local_58._0_4_ = 0x46ea6000;
  local_68 = 0x20;
  FUN_140a6b41e(&DAT_14ca3aa28,L"r.RayTracing.Culling.Radius",&local_58,
                L"Do camera culling for objects behind the camera outside of this radius in ray tracing effects (default = 30000 (300m))"
               );
  atexit(FUN_142f68456);
  local_58._0_4_ = 0x3f800000;
  local_68 = 0x20;
  FUN_140a6b41e(&DAT_14ca3aa40,L"r.RayTracing.Culling.Angle",&local_58,
                L"Do camera culling for objects behind the camera with a projected angle smaller than this threshold in ray tracing effects (default = 1 degrees)"
               );
  atexit(FUN_142f6849b);
  local_58._0_4_ = 1;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca3aa58,L"r.RayTracing.Culling.UseMinDrawDistance",&local_58,
                L"Use min draw distance for culling");
  atexit(FUN_142f684e0);
  local_58._0_4_ = 0;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca3aa70,L"r.RayTracing.Culling.UseGroupIds",&local_58,
                L"Cull using aggregate ray tracing group id bounds when defined instead of primitive or instance bounds."
               );
  atexit(FUN_142f68525);
  local_58._0_4_ = 1;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca3aa88,L"r.RayTracing.LightFunction",&local_58,
                L"Whether to support light material functions in ray tracing effects. (default = 1)"
               );
  atexit(FUN_142f686f1);
  local_58._0_4_ = 0x100;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca3aaa0,L"r.RayTracing.LightGridResolution",&local_58,
                L"Controls the resolution of the 2D light grid used to cull irrelevant lights from lighting calculations (default = 256)\n"
               );
  atexit(FUN_142f68736);
  local_58._0_4_ = 0x80;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca3aab8,L"r.RayTracing.LightGridMaxCount",&local_58,
                L"Controls the maximum number of lights per cell in the 2D light grid. The minimum of this value and the number of lights in the scene is used. (default = 128)\n"
               );
  atexit(FUN_142f6877b);
  local_58 = (undefined8 *)CONCAT44(local_58._4_4_,0xffffffff);
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca3aad0,L"r.RayTracing.LightGridAxis",&local_58,
                L"Choose the coordinate axis along which to project the light grid (default = -1, automatic)\n"
               );
  atexit(FUN_142f687c0);
  local_50 = FUN_145ce4a14;
  local_58 = (undefined8 *)&DAT_14152059c;
  FUN_14142a670(&DAT_14ca3ab70,&local_58);
  local_50 = FUN_145e941f6;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca3ac98,&local_58);
  local_50 = FUN_145ee3050;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca3adc0,&local_58);
  local_50 = FUN_145f9dfe0;
  local_58 = (undefined8 *)&DAT_14152059c;
  FUN_14142a670(&DAT_14ca3ae58,&local_58);
  local_50 = FUN_1460478b0;
  local_58 = (undefined8 *)&DAT_142bc70ae;
  FUN_1412df486(&DAT_14ca3af80,&local_58);
  local_68 = 0x20;
  FUN_141471170(&DAT_14ca3af98,L"r.RayTracing.EnableMaterials",&DAT_14ca3af90,
                L" 0: bind default material shader that outputs placeholder data\n 1: bind real material shaders (default)\n"
               );
  atexit(FUN_142f6a6f5);
  local_68 = 0x24;
  FUN_141471170(&DAT_14ca3afa8,L"r.RayTracing.CompileMaterialCHS",&DAT_14c760918,
                L" 0: skip compilation of closest-hit shaders for materials (useful if only shadows or ambient occlusion effects are needed)\n 1: compile closest hit shaders for all ray tracing materials (default)\n"
               );
  atexit(FUN_142f6a73a);
  local_68 = 0x24;
  FUN_141471170(&DAT_14ca3afb8,L"r.RayTracing.CompileMaterialAHS",&DAT_14c76091c,
                L" 0: skip compilation of any-hit shaders for materials (useful if alpha masked or translucent materials are not needed)\n 1: compile any hit shaders for all ray tracing materials (default)\n"
               );
  atexit(FUN_142f6a77f);
  local_68 = 0x20;
  FUN_141471170(&DAT_14ca3afc8,L"r.RayTracing.NonBlockingPipelineCreation",&DAT_14c760920,
                L"Enable background ray tracing pipeline creation, without blocking RHI or Render thread.\nFallback opaque black material will be used for missing shaders meanwhile.\n 0: off (rendering will always use correct requested material)\n 1: on (default, non-blocking mode may sometimes use the fallback opaque black material outside of offline rendering scenarios)\n"
               );
  atexit(FUN_142f6a7c4);
  local_50 = FUN_1460c8f08;
  local_58 = (undefined8 *)&DAT_141535a92;
  FUN_1412df486(&DAT_14ca3b0f0,&local_58);
  local_50 = FUN_1460c917c;
  local_58 = (undefined8 *)&DAT_141535a92;
  FUN_1412df486(&DAT_14ca3b218,&local_58);
  local_50 = FUN_1460c93f0;
  local_58 = (undefined8 *)&DAT_141535a92;
  FUN_1412df486(&DAT_14ca3b340,&local_58);
  local_50 = FUN_1460c9664;
  local_58 = (undefined8 *)&DAT_141535a92;
  FUN_1412df486(&DAT_14ca3b468,&local_58);
  local_50 = FUN_1460c98d8;
  local_58 = (undefined8 *)&DAT_141535a92;
  FUN_1412df486(&DAT_14ca3b590,&local_58);
  local_50 = FUN_1460c9b4c;
  local_58 = (undefined8 *)&DAT_141535a92;
  FUN_1412df486(&DAT_14ca3b6b8,&local_58);
  local_50 = FUN_1460c9dc0;
  local_58 = (undefined8 *)&DAT_141535a92;
  FUN_1412df486(&DAT_14ca3b7e0,&local_58);
  local_50 = FUN_1460ca034;
  local_58 = (undefined8 *)&DAT_141535a92;
  FUN_1412df486(&DAT_14ca3b908,&local_58);
  local_50 = FUN_1460ca2a8;
  local_58 = (undefined8 *)&DAT_141535a92;
  FUN_1412df486(&DAT_14ca3ba30,&local_58);
  local_50 = FUN_1460ca51c;
  local_58 = (undefined8 *)&DAT_141535a92;
  FUN_1412df486(&DAT_14ca3bb58,&local_58);
  local_50 = FUN_1460ca790;
  local_58 = (undefined8 *)&DAT_141535a92;
  FUN_1412df486(&DAT_14ca3bc80,&local_58);
  local_50 = FUN_1460caa04;
  local_58 = (undefined8 *)&DAT_141535a92;
  FUN_1412df486(&DAT_14ca3bda8,&local_58);
  local_50 = FUN_1460cac78;
  local_58 = (undefined8 *)&DAT_141535a92;
  FUN_1412df486(&DAT_14ca3bed0,&local_58);
  local_50 = FUN_1460caeec;
  local_58 = (undefined8 *)&DAT_141535a92;
  FUN_1412df486(&DAT_14ca3bff8,&local_58);
  local_50 = FUN_1460cb160;
  local_58 = (undefined8 *)&DAT_141535a92;
  FUN_1412df486(&DAT_14ca3c120,&local_58);
  local_50 = FUN_1460cb3d4;
  local_58 = (undefined8 *)&DAT_141535a92;
  FUN_1412df486(&DAT_14ca3c248,&local_58);
  local_50 = FUN_1460cb648;
  local_58 = (undefined8 *)&DAT_141535a92;
  FUN_1412df486(&DAT_14ca3c370,&local_58);
  local_50 = FUN_1460cb8bc;
  local_58 = (undefined8 *)&DAT_141535a92;
  FUN_1412df486(&DAT_14ca3c498,&local_58);
  local_50 = FUN_1460cbb30;
  local_58 = (undefined8 *)&DAT_141535a92;
  FUN_1412df486(&DAT_14ca3c5c0,&local_58);
  local_50 = FUN_1460cbda4;
  local_58 = (undefined8 *)&DAT_141535a92;
  FUN_1412df486(&DAT_14ca3c6e8,&local_58);
  local_50 = FUN_1460cc018;
  local_58 = (undefined8 *)&DAT_141535a92;
  FUN_1412df486(&DAT_14ca3c810,&local_58);
  local_50 = FUN_1460cc28c;
  local_58 = (undefined8 *)&DAT_141535a92;
  FUN_1412df486(&DAT_14ca3c938,&local_58);
  local_50 = FUN_1460cc500;
  local_58 = (undefined8 *)&DAT_141535a92;
  FUN_1412df486(&DAT_14ca3ca60,&local_58);
  local_50 = FUN_1460cc774;
  local_58 = (undefined8 *)&DAT_141535a92;
  FUN_1412df486(&DAT_14ca3cb88,&local_58);
  local_50 = FUN_1460cc9e8;
  local_58 = (undefined8 *)&DAT_141535a92;
  FUN_1412df486(&DAT_14ca3ccb0,&local_58);
  local_50 = FUN_1460ccc5c;
  local_58 = (undefined8 *)&DAT_141535a92;
  FUN_1412df486(&DAT_14ca3cdd8,&local_58);
  local_50 = FUN_1460cced0;
  local_58 = (undefined8 *)&DAT_141535a92;
  FUN_1412df486(&DAT_14ca3cf00,&local_58);
  local_50 = FUN_1460cd144;
  local_58 = (undefined8 *)&DAT_141535a92;
  FUN_1412df486(&DAT_14ca3d028,&local_58);
  local_50 = FUN_1460cd3b8;
  local_58 = (undefined8 *)&DAT_141535a92;
  FUN_1412df486(&DAT_14ca3d150,&local_58);
  local_50 = FUN_1460cd62c;
  local_58 = (undefined8 *)&DAT_141535a92;
  FUN_1412df486(&DAT_14ca3d278,&local_58);
  local_50 = FUN_1460cd8a0;
  local_58 = (undefined8 *)&DAT_141535a92;
  FUN_1412df486(&DAT_14ca3d3a0,&local_58);
  local_50 = FUN_1460cdb14;
  local_58 = (undefined8 *)&DAT_141535a92;
  FUN_1412df486(&DAT_14ca3d4c8,&local_58);
  local_50 = FUN_1460cdd88;
  local_58 = (undefined8 *)&DAT_141535a92;
  FUN_1412df486(&DAT_14ca3d5f0,&local_58);
  local_50 = FUN_1460cdffc;
  local_58 = (undefined8 *)&DAT_141535a92;
  FUN_1412df486(&DAT_14ca3d718,&local_58);
  local_50 = FUN_1460ce270;
  local_58 = (undefined8 *)&DAT_141535a92;
  FUN_1412df486(&DAT_14ca3d840,&local_58);
  local_50 = FUN_1460ce4e4;
  local_58 = (undefined8 *)&DAT_141535a92;
  FUN_1412df486(&DAT_14ca3d968,&local_58);
  local_50 = FUN_1460ce758;
  local_58 = (undefined8 *)&DAT_141535a92;
  FUN_1412df486(&DAT_14ca3da90,&local_58);
  local_50 = FUN_1460ce9cc;
  local_58 = (undefined8 *)&DAT_141535a92;
  FUN_1412df486(&DAT_14ca3dbb8,&local_58);
  local_50 = FUN_1460cec40;
  local_58 = (undefined8 *)&DAT_141535a92;
  FUN_1412df486(&DAT_14ca3dce0,&local_58);
  local_50 = FUN_1460ceeb4;
  local_58 = (undefined8 *)&DAT_141535a92;
  FUN_1412df486(&DAT_14ca3de08,&local_58);
  local_50 = FUN_1460cf128;
  local_58 = (undefined8 *)&DAT_141535a92;
  FUN_1412df486(&DAT_14ca3df30,&local_58);
  local_50 = FUN_146091668;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca3e058,&local_58);
  local_50 = FUN_1460918d4;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca3e180,&local_58);
  local_50 = FUN_146091b40;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca3e2a8,&local_58);
  local_50 = FUN_145f8492c;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca3e3f0,&local_58);
  local_58 = (undefined8 *)CONCAT44(local_58._4_4_,1);
  local_68 = 0x60;
  FUN_14078dbce(&DAT_14ca3e400,L"r.RayTracing.Scene.BuildMode",&local_58,
                L"Controls the mode in which ray tracing scene is built:\n 0: Fast build\n 1: Fast trace (default)\n"
               );
  atexit(FUN_142f6c00d);
  DAT_14ca38630._0_1_ = 2;
  DAT_14ca38630._4_4_ = 0xffffffff;
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f7c79c FUN_142f7c79c body=69 status=ok
// SIG undefined FUN_142f7c79c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f7c79c(void)

{
  _DAT_14ca40978 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f7c7de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca40980,1);
  return;
}



// FUNCTION 142f7c7e1 FUN_142f7c7e1 body=69 status=ok
// SIG undefined FUN_142f7c7e1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f7c7e1(void)

{
  _DAT_14ca40988 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f7c823. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca40990,1);
  return;
}



// FUNCTION 142f7c826 FUN_142f7c826 body=69 status=ok
// SIG undefined FUN_142f7c826(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f7c826(void)

{
  _DAT_14ca40998 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f7c868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca409a0,1);
  return;
}



// FUNCTION 142f7c86b FUN_142f7c86b body=69 status=ok
// SIG undefined FUN_142f7c86b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f7c86b(void)

{
  _DAT_14ca409a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f7c8ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca409b0,1);
  return;
}



// FUNCTION 142f7c8b0 FUN_142f7c8b0 body=69 status=ok
// SIG undefined FUN_142f7c8b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f7c8b0(void)

{
  _DAT_14ca409c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f7c8f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca409c8,1);
  return;
}



// FUNCTION 142f7c8f5 FUN_142f7c8f5 body=69 status=ok
// SIG undefined FUN_142f7c8f5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f7c8f5(void)

{
  _DAT_14ca409d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f7c937. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca409e0,1);
  return;
}



// FUNCTION 142f7c93a FUN_142f7c93a body=69 status=ok
// SIG undefined FUN_142f7c93a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f7c93a(void)

{
  _DAT_14ca409f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f7c97c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca409f8,1);
  return;
}



// FUNCTION 142f7c97f FUN_142f7c97f body=69 status=ok
// SIG undefined FUN_142f7c97f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f7c97f(void)

{
  _DAT_14ca40a08 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f7c9c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca40a10,1);
  return;
}



// FUNCTION 142f7c9c4 FUN_142f7c9c4 body=69 status=ok
// SIG undefined FUN_142f7c9c4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f7c9c4(void)

{
  _DAT_14ca40a20 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f7ca06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca40a28,1);
  return;
}



// FUNCTION 142f7ca09 FUN_142f7ca09 body=69 status=ok
// SIG undefined FUN_142f7ca09(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f7ca09(void)

{
  _DAT_14ca40a38 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f7ca4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca40a40,1);
  return;
}



// FUNCTION 142f7ca4e FUN_142f7ca4e body=69 status=ok
// SIG undefined FUN_142f7ca4e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f7ca4e(void)

{
  _DAT_14ca40a50 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f7ca90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca40a58,1);
  return;
}



// FUNCTION 142f7ca93 FUN_142f7ca93 body=69 status=ok
// SIG undefined FUN_142f7ca93(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f7ca93(void)

{
  _DAT_14ca40a68 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f7cad5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca40a70,1);
  return;
}



// FUNCTION 142f7cad8 FUN_142f7cad8 body=69 status=ok
// SIG undefined FUN_142f7cad8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f7cad8(void)

{
  _DAT_14ca40a80 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f7cb1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca40a88,1);
  return;
}



// FUNCTION 142f7cb1d FUN_142f7cb1d body=69 status=ok
// SIG undefined FUN_142f7cb1d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f7cb1d(void)

{
  _DAT_14ca40a98 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f7cb5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca40aa0,1);
  return;
}



// FUNCTION 142f7cbc0 FUN_142f7cbc0 body=2823 status=ok
// SIG undefined FUN_142f7cbc0(void)

void FUN_142f7cbc0(undefined8 *param_1,longlong param_2,undefined8 *param_3,longlong param_4,
                  longlong param_5,int *param_6,int param_7,longlong param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11)

{
  ulonglong *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  char cVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined6 uVar14;
  int iVar15;
  undefined8 *puVar16;
  uint uVar17;
  int iVar18;
  undefined8 *puVar19;
  int iVar20;
  bool bVar21;
  undefined4 uVar22;
  float fVar23;
  undefined1 auStack_1a8 [32];
  undefined1 local_188;
  bool local_176;
  byte local_175;
  int local_174;
  ulonglong local_170;
  ulonglong *local_168;
  undefined8 *local_160;
  uint local_154;
  undefined8 *local_150;
  longlong *local_148;
  ulonglong local_140;
  undefined8 *local_138;
  undefined1 local_129;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 local_100;
  uint local_f8;
  undefined1 local_f4;
  int local_f0;
  uint local_ec;
  undefined1 local_e8;
  uint local_e4;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined *local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  plVar2 = *(longlong **)(param_5 + 0x28);
  local_170 = CONCAT71(local_170._1_7_,DAT_14ca84ef5);
  local_175 = DAT_14ca84efa;
  local_108 = *(ulonglong *)(param_4 + 0x30f8);
  local_100 = *(undefined8 *)(param_4 + 0x3100);
  local_174 = *(int *)(*(longlong *)(param_4 + 8) + 0x10);
  local_150 = param_1;
  local_138 = param_3;
  cVar6 = (**(code **)(*plVar2 + 0xe0))(plVar2,&local_108,param_4,param_4 + 0x30f8);
  if (cVar6 == '\0') {
    local_108 = *(ulonglong *)(param_4 + 0x30f8);
    local_100 = *(undefined8 *)(param_4 + 0x3100);
  }
  if (*(char *)(param_4 + 0x11a08) == '\x01') {
    local_154 = 0;
    if ((*(longlong *)(param_4 + 0x11c90) != 0) && (*(longlong *)(param_4 + 0x11c98) != 0)) {
      local_154 = (uint)(*(longlong *)(param_4 + 0x11ca8) != 0);
    }
    local_176 = (*(byte *)((longlong)plVar2 + 0x1d1) & 2) == 0;
  }
  else {
    local_176 = true;
    local_154 = 0;
  }
  puVar1 = (ulonglong *)(param_2 + 0x70);
  puVar19 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar11 = puVar19 + 0x48;
  local_168 = puVar1;
  local_140 = local_108;
  if (*(undefined8 **)(param_2 + 0x78) < puVar11) {
    FUN_140023dd8(puVar1,0x250);
    puVar19 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar11 = puVar19 + 0x48;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar11;
  *puVar19 = &PTR_FUN_14a2e6f18;
  local_160 = puVar19 + 2;
  FUN_1472cfc4c();
  local_148 = (longlong *)(param_2 + 0x98);
  iVar15 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar15 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar15 + 1U) {
    FUN_1448cfae8(local_148,iVar15);
  }
  *(undefined8 **)(*local_148 + (longlong)iVar15 * 8) = puVar19;
  puVar19[0x3c] = param_9;
  puVar19[0x3d] = param_10;
  puVar19[0x3e] = param_11;
  *(int *)(puVar19 + 6) = *param_6;
  fVar23 = 0.01;
  if (0.01 <= DAT_14c760924) {
    fVar23 = DAT_14c760924;
  }
  *(float *)((longlong)puVar19 + 0x34) = fVar23;
  *(uint *)(puVar19 + 7) = (uint)*(byte *)((longlong)plVar2 + 0x1e9);
  (**(code **)(*plVar2 + 0x78))(plVar2,&local_f8,0);
  if (*(longlong **)(param_4 + 0x30d8) == (longlong *)0x0) {
    uVar22 = 0;
  }
  else {
    uVar22 = (**(code **)(**(longlong **)(param_4 + 0x30d8) + 0x88))();
  }
  uVar5 = local_154;
  FUN_144b21414(&local_f8,param_4 + 0x500,uVar22,puVar19 + 0x12);
  fVar23 = (float)(**(code **)(*plVar2 + 0x58))(plVar2);
  *(float *)((longlong)puVar19 + 0xdc) = fVar23 * *(float *)((longlong)puVar19 + 0xdc);
  uVar22 = (**(code **)(*plVar2 + 0x60))(plVar2);
  *(undefined4 *)((longlong)puVar19 + 0x5c) = uVar22;
  *(float *)(puVar19 + 0xc) = (float)*(int *)(DAT_14ca40a48 + 4);
  *(float *)((longlong)puVar19 + 100) = (float)*(int *)(DAT_14ca40a60 + 4);
  *(float *)(puVar19 + 0xd) = DAT_14c76092c;
  *(undefined4 *)((longlong)puVar19 + 0x7c) = *(undefined4 *)(DAT_14ca40a78 + 4);
  *(uint *)(puVar19 + 0x10) = (uint)(*(int *)(DAT_14ca409b8 + 4) != 0);
  *(uint *)((longlong)puVar19 + 0x84) = (uint)(*(int *)(DAT_14ca40a90 + 4) != 0);
  *(undefined4 *)(puVar19 + 0x11) = *(undefined4 *)(DAT_14ca40aa8 + 4);
  uVar9 = FUN_1472daef4(param_4,0);
  puVar19[0x3b] = uVar9;
  lVar10 = FUN_1447e4f80();
  cVar6 = '\x02';
  if (*(char *)(lVar10 + 0x41) != '\x03') {
    cVar6 = *(char *)(lVar10 + 0x41);
  }
  puVar19[0x40] = *(undefined8 *)(param_4 + 0x18);
  *(char *)(puVar19 + 0x41) = cVar6;
  puVar11 = local_138;
  puVar16 = puVar19 + 0x2c;
  for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar16 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar16 = puVar16 + 1;
  }
  bVar21 = param_8 != 0;
  if (!bVar21) {
    param_8 = FUN_144aba02a(&DAT_14ca63b10,param_2);
  }
  uVar12 = 0;
  *(uint *)(puVar19 + 0x38) = (uint)bVar21;
  puVar19[0x39] = param_8;
  puVar19[8] = local_108;
  uVar13 = local_140;
  if (local_174 != 1) {
    uVar13 = uVar12;
  }
  puVar19[9] = local_100;
  puVar19[10] = uVar13;
  *(undefined4 *)((longlong)puVar19 + 0x6c) = *(undefined4 *)(DAT_14ca409d0 + 4);
  *(undefined4 *)(puVar19 + 0xe) = *(undefined4 *)(DAT_14ca409e8 + 4);
  lVar10 = DAT_14ca97170;
  iVar15 = *(int *)(DAT_14ca40a00 + 4);
  iVar20 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc60);
  if (iVar20 != 0x40000002) {
    if ((DAT_14c86a9f8 == '\x01') && (iVar20 != 2)) {
      if (iVar20 == 1) {
        DVar7 = FUN_140ad26c0();
        DVar8 = GetCurrentThreadId();
        uVar12 = (ulonglong)(DVar7 != DVar8);
      }
      else {
        uVar12 = 1;
      }
    }
    else {
      uVar12 = 0;
    }
  }
  local_170 = local_170 ^ 1;
  *(uint *)((longlong)puVar19 + 0x74) = (uint)(*(int *)(lVar10 + uVar12 * 4) < 1 && 0 < iVar15);
  *(undefined4 *)(puVar19 + 0xf) = *(undefined4 *)(DAT_14ca40a18 + 4);
  uVar9 = *(undefined8 *)(param_4 + 0x118d0);
  lVar10 = FUN_144a2c9be();
  cVar6 = *(char *)(lVar10 + 0x41);
  if (*(char *)(lVar10 + 0x41) == '\x03') {
    cVar6 = '\x02';
  }
  puVar19[0x46] = uVar9;
  *(char *)(puVar19 + 0x47) = cVar6;
  if ((char)uVar5 != '\0') {
    *(uint *)(puVar19 + 0xb) = (uint)(byte)(local_176 & 0 < *(int *)(DAT_14ca40a30 + 4));
    puVar19[0x3a] = *(undefined8 *)(param_4 + 0x11a50);
    uVar9 = *(undefined8 *)(param_4 + 0x11a00);
    lVar10 = FUN_144a81af4();
    cVar6 = *(char *)(lVar10 + 0x41);
    if (cVar6 == '\x03') {
      cVar6 = '\x02';
    }
    puVar19[0x42] = uVar9;
    *(char *)(puVar19 + 0x43) = cVar6;
    uVar9 = *(undefined8 *)(param_4 + 0x11c90);
    lVar10 = FUN_1414708b2();
    cVar6 = *(char *)(lVar10 + 0x41);
    if (cVar6 == '\x03') {
      cVar6 = '\x02';
    }
    puVar19[0x44] = uVar9;
    *(char *)(puVar19 + 0x45) = cVar6;
    if (*(longlong *)(param_4 + 0x138d0) != 0) {
      FUN_1472ea582(param_2,param_4 + 0x13870,local_160);
    }
  }
  puVar1 = local_168;
  local_f0 = 0;
  local_f8 = (uint)*(byte *)(plVar2 + 0x3d);
  local_f4 = 0.0 < DAT_14c76092c;
  if (param_7 - 1U < 2) {
    local_f0 = param_7;
  }
  local_ec = uVar5 & 0xff;
  local_e8 = 1 < *param_6;
  uVar17 = (uint)(*(byte *)(plVar2 + 0x3a) >> 7);
  local_e4 = uVar17;
  if (((byte)local_170 & local_175) == 0) {
    lVar10 = local_150[1];
    FUN_1472c4452(&local_118,
                  *(undefined8 *)
                   (&DAT_14ca8c1f0 +
                   (ulonglong)
                   *(ushort *)(&DAT_14ca85070 + (longlong)*(int *)((longlong)local_150 + 0x8a4) * 2)
                   * 8),&local_f8);
    FUN_145e2866e();
    local_68 = (undefined8 *)0x0;
    uStack_60 = 0;
    FUN_1448f70da(CONCAT44(uStack_114,local_118),&DAT_14ca435d8,local_160);
    if (local_174 == 1) {
      iVar20 = local_100._4_4_ - local_108._4_4_;
      iVar15 = (int)local_100 - (int)local_108;
    }
    else {
      iVar20 = *(int *)(param_4 + 0x3104) - *(int *)(param_4 + 0x30fc);
      iVar15 = *(int *)(param_4 + 0x3100) - *(int *)(param_4 + 0x30f8);
    }
    uVar9 = (**(code **)(**(longlong **)(*(longlong *)(param_4 + 8) + 0x178) + 8))();
    uVar9 = FUN_1472e1976(uVar9,param_2);
    local_128 = local_118;
    uStack_124 = uStack_114;
    uStack_120 = uStack_110;
    uStack_11c = uStack_10c;
    FUN_145e2866e();
    FUN_140069376(param_2);
    puVar1 = local_168;
    uVar14 = (undefined6)((ulonglong)plVar2 >> 0x10);
    uVar22 = (undefined4)CONCAT62(uVar14,2);
    if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
       ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
      uVar22 = (undefined4)CONCAT62(uVar14,4);
    }
    puVar19 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar19 + 0x3f;
    local_170 = uVar9;
    if (*(undefined8 **)(param_2 + 0x78) < puVar11) {
      FUN_140023dd8(local_168,0x200);
      puVar19 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar11 = puVar19 + 0x3f;
    }
    *local_168 = (ulonglong)puVar11;
    local_68 = local_160;
    uStack_60 = DAT_14ca43620;
    if (DAT_14ca43620 != 0) {
      LOCK();
      *(int *)(DAT_14ca43620 + 8) = *(int *)(DAT_14ca43620 + 8) + 1;
      UNLOCK();
    }
    local_58 = &DAT_14ca435d8;
    local_188 = 1;
    FUN_140068f1a(puVar19,&local_129,&local_68,uVar22);
    *puVar19 = &PTR_FUN_14a2e6f50;
    puVar19[0x37] = local_150;
    puVar19[0x38] = param_4;
    puVar19[0x39] = local_170;
    *(undefined4 *)(puVar19 + 0x3a) = local_128;
    *(undefined4 *)((longlong)puVar19 + 0x1d4) = uStack_124;
    *(undefined4 *)(puVar19 + 0x3b) = uStack_120;
    *(undefined4 *)((longlong)puVar19 + 0x1dc) = uStack_11c;
    puVar19[0x3c] = local_160;
    puVar19[0x3d] = CONCAT44(iVar20,iVar15);
    puVar19[0x3e] = lVar10 + 0x4298;
    iVar15 = *(int *)(param_2 + 0x170);
    *(uint *)(param_2 + 0x170) = iVar15 + 1U;
    if (*(uint *)(param_2 + 0x174) < iVar15 + 1U) {
      FUN_14470e57a(param_2 + 0x168,iVar15);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar15 * 8) = puVar19;
    *(int *)((longlong)puVar19 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
  }
  else {
    local_174 = CONCAT31(local_174._1_3_,1 < *param_6);
    local_170 = CONCAT44(local_170._4_4_,local_f0);
    puVar16 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar11 = puVar16 + 0x48;
    if (*(undefined8 **)(param_2 + 0x78) < puVar11) {
      FUN_140023dd8(local_168,0x250);
      puVar16 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar11 = puVar16 + 0x48;
    }
    local_150 = puVar19 + 10;
    *(undefined8 **)(param_2 + 0x70) = puVar11;
    *puVar16 = &PTR_FUN_14a2e6f20;
    puVar11 = puVar16 + 2;
    FUN_1472cfc4c(puVar11);
    iVar15 = *(int *)(param_2 + 0xa0);
    *(uint *)(param_2 + 0xa0) = iVar15 + 1U;
    if (*(uint *)(param_2 + 0xa4) < iVar15 + 1U) {
      FUN_1448cfae8(local_148,iVar15);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar15 * 8) = puVar16;
    uVar9 = *(undefined8 *)((longlong)local_160 + 0x24);
    *(undefined8 *)((longlong)puVar16 + 0x2c) = *(undefined8 *)((longlong)local_160 + 0x1c);
    *(undefined8 *)((longlong)puVar16 + 0x34) = uVar9;
    uVar9 = *local_160;
    uVar3 = local_160[1];
    uVar4 = local_160[3];
    puVar16[4] = local_160[2];
    puVar16[5] = uVar4;
    *puVar11 = uVar9;
    puVar16[3] = uVar3;
    puVar16[8] = puVar19[8];
    puVar16[9] = puVar19[9];
    memcpy(puVar16 + 10,local_150,0x1f0);
    local_68 = (undefined8 *)CONCAT44((undefined4)local_170,local_f8);
    uStack_60 = CONCAT44(CONCAT31(uStack_60._5_3_,(undefined1)local_174),uVar5) & 0xffffffff000000ff
    ;
    local_58 = (undefined *)CONCAT44(local_58._4_4_,uVar17);
    FUN_1472c44e6(*(undefined8 *)(param_4 + 0x13818),&local_118);
    iVar20 = *(int *)(param_4 + 0x3104) - *(int *)(param_4 + 0x30fc);
    iVar15 = iVar20 + 3;
    iVar20 = iVar20 + 6;
    if (-1 < iVar15) {
      iVar20 = iVar15;
    }
    iVar18 = *(int *)(param_4 + 0x3100) - *(int *)(param_4 + 0x30f8);
    iVar15 = iVar18 + 7;
    iVar18 = iVar18 + 0xe;
    if (-1 < iVar15) {
      iVar18 = iVar15;
    }
    FUN_145f924c8();
    FUN_140069376(param_2);
    puVar1 = local_168;
    uVar14 = (undefined6)((ulonglong)(puVar16 + 10) >> 0x10);
    uVar22 = (undefined4)CONCAT62(uVar14,2);
    if (((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) &&
       ((DAT_14c760ddc == 2 && ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))))) {
      uVar22 = (undefined4)CONCAT62(uVar14,4);
    }
    puVar19 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar16 = puVar19 + 0x3c;
    if (*(undefined8 **)(param_2 + 0x78) < puVar16) {
      FUN_140023dd8(local_168,0x1e8);
      puVar19 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar16 = puVar19 + 0x3c;
    }
    *local_168 = (ulonglong)puVar16;
    uStack_60 = DAT_14ca436a8;
    if (DAT_14ca436a8 != 0) {
      LOCK();
      *(int *)(DAT_14ca436a8 + 8) = *(int *)(DAT_14ca436a8 + 8) + 1;
      UNLOCK();
    }
    local_58 = &DAT_14ca43660;
    local_188 = 2;
    local_68 = puVar11;
    FUN_140068f1a(puVar19,&local_128,&local_68,uVar22);
    *puVar19 = &PTR_FUN_14a2e6f30;
    puVar19[0x37] = puVar11;
    *(undefined4 *)(puVar19 + 0x38) = local_118;
    *(undefined4 *)((longlong)puVar19 + 0x1c4) = uStack_114;
    *(undefined4 *)(puVar19 + 0x39) = uStack_110;
    *(undefined4 *)((longlong)puVar19 + 0x1cc) = uStack_10c;
    *(int *)(puVar19 + 0x3a) = iVar18 >> 3;
    *(int *)((longlong)puVar19 + 0x1d4) = iVar20 >> 2;
    *(undefined4 *)(puVar19 + 0x3b) = 1;
    iVar15 = *(int *)(param_2 + 0x170);
    *(uint *)(param_2 + 0x170) = iVar15 + 1U;
    if (*(uint *)(param_2 + 0x174) < iVar15 + 1U) {
      FUN_14470e57a(param_2 + 0x168,iVar15);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar15 * 8) = puVar19;
    *(int *)((longlong)puVar19 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
  }
  FUN_140069100(param_2,puVar19);
  if ((local_48 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142f7d6c8 FUN_142f7d6c8 body=650 status=ok
// SIG undefined FUN_142f7d6c8(void)

void FUN_142f7d6c8(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  longlong local_70;
  undefined1 local_61;
  undefined8 *local_60;
  longlong local_58;
  undefined *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar1 = (ulonglong *)(param_2 + 0x70);
  puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar3 = puVar6 + 0x30;
  local_70 = param_1;
  if (*(undefined8 **)(param_2 + 0x78) < puVar3) {
    FUN_140023dd8(puVar1,400);
    puVar6 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar3 = puVar6 + 0x30;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar3;
  *puVar6 = &PTR_FUN_14a2e6f68;
  puVar3 = puVar6 + 2;
  FUN_1472cff7e(puVar3);
  iVar2 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar2 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar2 + 1U) {
    FUN_1448cfae8((longlong *)(param_2 + 0x98),iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar2 * 8) = puVar6;
  lVar4 = FUN_1447e4f80();
  cVar5 = '\x02';
  if (*(char *)(lVar4 + 0x41) != '\x03') {
    cVar5 = *(char *)(lVar4 + 0x41);
  }
  puVar6[0xe] = *(undefined8 *)(param_3 + 0x18);
  *(char *)(puVar6 + 0xf) = cVar5;
  puVar6[0x28] = param_4;
  puVar6[0x29] = 0;
  *(undefined2 *)(puVar6 + 0x2a) = 0x101;
  *(undefined4 *)((longlong)puVar6 + 0x154) = 0x22;
  if (*(char *)(param_3 + 0xb230) == '\x01') {
    lVar4 = *(longlong *)(local_70 + 8);
    if (*(int *)(DAT_14ca09490 + 4) == 0) {
      FUN_144b112d8(param_3 + 0xb1f0);
    }
    local_78 = puVar3;
    FUN_1401b6588(param_3 + 0xb1f0,param_2,lVar4 + 0x3f08,0);
    *(undefined1 *)(param_3 + 0xb338) = 1;
  }
  else {
    puVar6[2] = 0;
    *(undefined4 *)(puVar6 + 3) = 4;
    puVar6[4] = 0;
    *(undefined4 *)(puVar6 + 5) = 8;
    puVar6[6] = 0;
  }
  FUN_1472d0038();
  FUN_140069376(param_2);
  puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar7 + 0x39;
  if (*(undefined8 **)(param_2 + 0x78) < puVar6) {
    FUN_140023dd8(puVar1,0x1d0);
    puVar7 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar7 + 0x39;
  }
  *puVar1 = (ulonglong)puVar6;
  local_58 = DAT_14ca44600;
  if (DAT_14ca44600 != 0) {
    LOCK();
    *(int *)(DAT_14ca44600 + 8) = *(int *)(DAT_14ca44600 + 8) + 1;
    UNLOCK();
  }
  local_50 = &DAT_14ca445b8;
  local_78 = (undefined8 *)CONCAT71(local_78._1_7_,2);
  local_60 = puVar3;
  FUN_140068f1a(puVar7,&local_61,&local_60,1);
  *puVar7 = &PTR_FUN_14a2e6f70;
  puVar7[0x37] = param_3;
  puVar7[0x38] = puVar3;
  iVar2 = *(int *)(param_2 + 0x170);
  *(uint *)(param_2 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_2 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_2 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar2 * 8) = puVar7;
  *(int *)((longlong)puVar7 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    FUN_140069100(param_2,puVar7);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f7d953 FUN_142f7d953 body=69 status=ok
// SIG undefined FUN_142f7d953(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f7d953(void)

{
  _DAT_14ca40d00 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f7d995. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca40d08,1);
  return;
}



// FUNCTION 142f7d998 FUN_142f7d998 body=69 status=ok
// SIG undefined FUN_142f7d998(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f7d998(void)

{
  _DAT_14ca40d18 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f7d9da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca40d20,1);
  return;
}



// FUNCTION 142f7d9dd FUN_142f7d9dd body=69 status=ok
// SIG undefined FUN_142f7d9dd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f7d9dd(void)

{
  _DAT_14ca40d28 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f7da1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca40d30,1);
  return;
}



// FUNCTION 142f7da22 FUN_142f7da22 body=69 status=ok
// SIG undefined FUN_142f7da22(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f7da22(void)

{
  _DAT_14ca40d38 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f7da64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca40d40,1);
  return;
}



// FUNCTION 142f7da67 FUN_142f7da67 body=69 status=ok
// SIG undefined FUN_142f7da67(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f7da67(void)

{
  _DAT_14ca40d48 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f7daa9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca40d50,1);
  return;
}



// FUNCTION 142f7daac FUN_142f7daac body=69 status=ok
// SIG undefined FUN_142f7daac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f7daac(void)

{
  _DAT_14ca40d60 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f7daee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca40d68,1);
  return;
}



// FUNCTION 142f7daf1 FUN_142f7daf1 body=69 status=ok
// SIG undefined FUN_142f7daf1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f7daf1(void)

{
  _DAT_14ca40d70 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f7db33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca40d78,1);
  return;
}



// FUNCTION 142f7db36 FUN_142f7db36 body=69 status=ok
// SIG undefined FUN_142f7db36(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f7db36(void)

{
  _DAT_14ca40d88 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f7db78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca40d90,1);
  return;
}



// FUNCTION 142f7db7b FUN_142f7db7b body=69 status=ok
// SIG undefined FUN_142f7db7b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f7db7b(void)

{
  _DAT_14ca40da0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f7dbbd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca40da8,1);
  return;
}



// FUNCTION 142f7dbc0 FUN_142f7dbc0 body=69 status=ok
// SIG undefined FUN_142f7dbc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f7dbc0(void)

{
  _DAT_14ca40db8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f7dc02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca40dc0,1);
  return;
}



// FUNCTION 142f7dc05 FUN_142f7dc05 body=69 status=ok
// SIG undefined FUN_142f7dc05(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f7dc05(void)

{
  _DAT_14ca40dd0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f7dc47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca40dd8,1);
  return;
}



// FUNCTION 142f7dc6e FUN_142f7dc6e body=6834 status=ok
// SIG undefined FUN_142f7dc6e(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_142f7dc6e(longlong *param_1,longlong param_2,longlong param_3,ulonglong *param_4,
                  ulonglong *param_5)

{
  int *piVar1;
  uint *puVar2;
  char *pcVar3;
  undefined1 uVar4;
  byte bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong *puVar11;
  char cVar12;
  longlong *plVar13;
  undefined8 uVar14;
  longlong lVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  longlong *plVar18;
  longlong *plVar19;
  longlong *plVar20;
  uint uVar21;
  int iVar22;
  longlong lVar23;
  ulonglong *puVar24;
  int iVar25;
  longlong lVar26;
  int iVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined8 *puVar30;
  ulonglong uVar31;
  undefined8 *puVar32;
  bool bVar33;
  float fVar34;
  undefined1 auStack_298 [32];
  undefined8 **local_278;
  undefined8 **local_270;
  undefined8 **local_268;
  undefined8 local_260;
  longlong *local_258;
  ulonglong local_250;
  undefined4 local_248;
  undefined4 local_244;
  ulonglong *local_240;
  ulonglong *local_238;
  longlong local_230;
  int local_224;
  longlong local_220;
  int local_214;
  longlong *local_210;
  longlong local_208;
  longlong local_200;
  ulonglong local_1f8;
  undefined8 *local_1f0;
  undefined8 *local_1e8;
  undefined8 local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  int local_1c8;
  undefined1 local_1b9;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined1 local_170;
  undefined4 local_16c;
  undefined8 *local_158;
  longlong lStack_150;
  undefined *local_148;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  int local_114;
  int local_110;
  undefined2 local_10c;
  undefined2 local_10a;
  undefined1 local_108;
  undefined1 local_107;
  undefined1 local_106;
  undefined1 local_105;
  undefined1 local_104;
  undefined1 local_103;
  int local_d8 [10];
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_298;
  lVar26 = *(longlong *)(param_1[1] + 0x3608);
  local_258 = param_1;
  local_240 = param_4;
  local_230 = param_2;
  if ((lVar26 == 0) ||
     (cVar12 = FUN_144785782(*(undefined2 *)
                              (&DAT_14ca85070 + (longlong)*(int *)(param_1[1] + 8) * 2)),
     cVar12 == '\0')) {
    bVar33 = false;
  }
  else {
    param_2 = local_230;
    param_1 = local_258;
    if ((((*(char *)(lVar26 + 0x21) == '\x02' ||
           *(char *)(lVar26 + 0x21) == '\x01' && 0 < DAT_14ca40d10) && (DAT_14ca84ef5 == '\x01')) &&
        (*(int *)(DAT_14c9c2d90 + 4) != 0)) && (*(int *)(DAT_14c9c2d60 + 4) != 0)) {
      bVar33 = DAT_14c760930 != 0;
    }
    else {
      bVar33 = false;
    }
  }
  local_278 = (undefined8 **)&local_198;
  local_198 = (undefined8 *)0x0;
  uStack_190 = 0;
  local_188 = 0;
  local_270 = (undefined8 **)local_d8;
  cVar12 = FUN_1472c4573(param_2,param_1[1],param_1[0x7d],bVar33);
  if (cVar12 == '\0') {
    uVar17 = FUN_14473c272(param_2,&DAT_14ca63b28,0);
    *local_240 = uVar17;
    uVar17 = FUN_14473c272(param_2,&DAT_14ca63b28,0);
    *param_5 = uVar17;
    goto LAB_142f7f149;
  }
  fVar34 = 1.0;
  if (DAT_14c76093c != 0) {
    fVar34 = *(float *)(DAT_14ca40de0 + 4) / 100.0;
    if (1.0 <= fVar34) {
      fVar34 = 1.0;
    }
    if (fVar34 <= 0.25) {
      fVar34 = 0.25;
    }
  }
  local_214 = (int)(1.0 / fVar34);
  local_106 = *(undefined1 *)(param_3 + 0x92);
  local_104 = *(undefined1 *)(param_3 + 0x94);
  uVar17 = *(ulonglong *)(param_3 + 0x84);
  local_10c = *(undefined2 *)(param_3 + 0x8c);
  local_10a = *(undefined2 *)(param_3 + 0x8e);
  local_108 = *(undefined1 *)(param_3 + 0x90);
  local_107 = *(undefined1 *)(param_3 + 0x91);
  uVar6 = *(undefined4 *)(param_3 + 0x68);
  local_200 = CONCAT44(local_200._4_4_,uVar6);
  uVar28 = *(undefined4 *)(param_3 + 0x6c);
  uVar14 = *(undefined8 *)(param_3 + 0x70);
  local_128 = *(undefined8 *)(param_3 + 0x70);
  uVar29 = *(undefined4 *)(param_3 + 0x78);
  uVar7 = *(undefined4 *)(param_3 + 0x80);
  local_208 = CONCAT44(local_208._4_4_,uVar7);
  local_103 = *(undefined1 *)(param_3 + 0x95);
  local_244 = *(undefined4 *)(param_3 + 0x7c);
  local_1f8 = *(ulonglong *)(param_3 + 0x60) & 0xffffffffffdfffff;
  local_1f0 = (undefined8 *)CONCAT71(local_1f0._1_7_,local_106);
  local_138._0_4_ = (int)local_1f8;
  local_138._4_4_ = (int)(local_1f8 >> 0x20);
  local_105 = 10;
  local_248 = CONCAT31(local_248._1_3_,local_104);
  local_224 = CONCAT22(local_224._2_2_,local_10c);
  local_1e8 = (undefined8 *)CONCAT62(local_1e8._2_6_,local_10a);
  local_1e0 = CONCAT71(local_1e0._1_7_,local_108);
  local_210 = (longlong *)CONCAT71(local_210._1_7_,local_107);
  local_250 = CONCAT71(local_250._1_7_,local_103);
  iVar27 = (int)((longlong)((ulonglong)(uint)((int)uVar17 >> 0x1f) << 0x20 | uVar17 & 0xffffffff) /
                (longlong)local_214);
  local_114 = DAT_14ca84e40;
  if (iVar27 < DAT_14ca84e40) {
    local_114 = iVar27;
  }
  if (local_114 < 2) {
    local_114 = 1;
  }
  iVar25 = (int)((longlong)((ulonglong)(uint)((longlong)uVar17 >> 0x3f) << 0x20 | uVar17 >> 0x20) /
                (longlong)local_214);
  local_110 = DAT_14ca84e40;
  if (iVar25 < DAT_14ca84e40) {
    local_110 = iVar25;
  }
  if (local_110 < 2) {
    local_110 = 1;
  }
  puVar24 = (ulonglong *)(param_2 + 0x70);
  uVar31 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar17 = uVar31 + 0x120;
  local_238 = puVar24;
  local_1d8 = lVar26;
  local_130 = uVar6;
  local_12c = uVar28;
  local_120 = uVar29;
  local_11c = local_244;
  local_118 = uVar7;
  if (*(ulonglong *)(param_2 + 0x78) < uVar17) {
    FUN_140023dd8(puVar24,0x128);
    uVar31 = *puVar24 + 7 & 0xfffffffffffffff8;
    uVar17 = uVar31 + 0x120;
  }
  lVar26 = param_2 + 0x178;
  *(ulonglong *)(param_2 + 0x70) = uVar17;
  FUN_1456bbb8c(uVar31,L"RayTracingSkylight",&local_138);
  iVar22 = *(int *)(param_2 + 0x180);
  *(uint *)(param_2 + 0x180) = iVar22 + 1U;
  if (*(uint *)(param_2 + 0x184) < iVar22 + 1U) {
    FUN_14472c0f6(lVar26,iVar22);
  }
  puVar24 = local_238;
  *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar22 * 8) = uVar31;
  *(int *)(uVar31 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
  *local_240 = uVar31;
  local_106 = local_1f0._0_1_;
  local_138._0_4_ = (int)local_1f8;
  local_138._4_4_ = (int)(local_1f8 >> 0x20);
  local_105 = 0xe;
  local_104 = (undefined1)local_248;
  local_10c = (undefined2)local_224;
  local_10a = local_1e8._0_2_;
  local_108 = (undefined1)local_1e0;
  local_107 = local_210._0_1_;
  if (DAT_14ca84e40 <= iVar27) {
    iVar27 = DAT_14ca84e40;
  }
  local_114 = iVar27;
  if (iVar27 < 2) {
    local_114 = 1;
  }
  local_110 = DAT_14ca84e40;
  if (iVar25 < DAT_14ca84e40) {
    local_110 = iVar25;
  }
  local_103 = (undefined1)local_250;
  local_11c = local_244;
  if (local_110 < 2) {
    local_110 = 1;
  }
  uVar31 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar17 = uVar31 + 0x120;
  local_220 = lVar26;
  local_130 = uVar6;
  local_12c = uVar28;
  local_128 = uVar14;
  local_120 = uVar29;
  local_118 = uVar7;
  if (*(ulonglong *)(param_2 + 0x78) < uVar17) {
    FUN_140023dd8(local_238,0x128);
    uVar31 = *puVar24 + 7 & 0xfffffffffffffff8;
    uVar17 = uVar31 + 0x120;
  }
  *(ulonglong *)(param_2 + 0x70) = uVar17;
  FUN_1456bbb8c(uVar31,L"RayTracingSkyLightHitDistance",&local_138);
  plVar20 = local_258;
  iVar27 = *(int *)(param_2 + 0x180);
  *(uint *)(param_2 + 0x180) = iVar27 + 1U;
  if (*(uint *)(param_2 + 0x184) < iVar27 + 1U) {
    FUN_14472c0f6(local_220,iVar27);
  }
  puVar24 = local_238;
  *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar27 * 8) = uVar31;
  *(int *)(uVar31 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
  *param_5 = uVar31;
  if (*(int *)(DAT_14ca40db0 + 4) == 1) {
    lVar26 = plVar20[0x7d];
    puVar30 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar16 = puVar30 + 0x10;
    if (*(undefined8 **)(param_2 + 0x78) < puVar16) {
      FUN_140023dd8(local_238,0x90);
      puVar30 = (undefined8 *)(*puVar24 + 0xf & 0xfffffffffffffff0);
      puVar16 = puVar30 + 0x10;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar16;
    *puVar30 = &PTR_FUN_14a2e5d40;
    puVar30[8] = 0;
    puVar30[4] = 0;
    puVar30[5] = 0;
    puVar30[6] = 0;
    *(undefined1 *)(puVar30 + 9) = 1;
    puVar30[10] = 0;
    *(undefined1 *)(puVar30 + 0xb) = 1;
    puVar30[0xc] = 0;
    iVar27 = *(int *)(param_2 + 0xa0);
    *(uint *)(param_2 + 0xa0) = iVar27 + 1U;
    if (*(uint *)(param_2 + 0xa4) < iVar27 + 1U) {
      FUN_1448cfae8((longlong *)(param_2 + 0x98),iVar27);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar27 * 8) = puVar30;
    lVar23 = FUN_1447e4f80();
    cVar12 = *(char *)(lVar23 + 0x41);
    if (cVar12 == '\x03') {
      cVar12 = '\x02';
    }
    puVar30[10] = *(undefined8 *)(lVar26 + 0x18);
    *(char *)(puVar30 + 0xb) = cVar12;
    FUN_142fb5966(&local_138,local_d8);
    FUN_145d4cc50();
    cVar12 = DAT_14ca40e29;
    if (DAT_14ca40e29 == '\x03') {
      cVar12 = '\x02';
    }
    lVar23 = CONCAT44(local_138._4_4_,(int)local_138);
    puVar30[8] = lVar23;
    *(char *)(puVar30 + 9) = cVar12;
    if (lVar23 != 0) {
      LOCK();
      puVar2 = (uint *)(lVar23 + 8);
      uVar21 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar21 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(lVar23 + 8);
        LOCK();
        uVar21 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar21 >> 0x1e & 1) == 0) {
          bVar5 = *(byte *)(lVar23 + 0xd);
          plVar19 = (longlong *)FUN_14001cc68(0x10,8);
          plVar19[1] = lVar23;
          plVar20 = DAT_14ca843c0;
          plVar18 = DAT_14ca843c8;
          param_2 = local_230;
          if ((bVar5 & 2) == 0) {
            do {
              *plVar19 = (longlong)plVar20;
              LOCK();
              bVar33 = plVar20 != DAT_14ca843c0;
              plVar18 = plVar19;
              if (bVar33) {
                plVar20 = DAT_14ca843c0;
                plVar18 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar18;
              UNLOCK();
            } while (bVar33);
          }
          else {
            do {
              *plVar19 = (longlong)plVar18;
              LOCK();
              bVar33 = plVar18 != DAT_14ca843c8;
              plVar20 = plVar19;
              if (bVar33) {
                plVar18 = DAT_14ca843c8;
                plVar20 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar20;
              UNLOCK();
            } while (bVar33);
          }
        }
      }
    }
    puVar24 = local_238;
    *(undefined4 *)(puVar30 + 6) = (undefined4)local_188;
    *(undefined4 *)((longlong)puVar30 + 0x34) = local_188._4_4_;
    *(undefined4 *)(puVar30 + 7) = uStack_180;
    *(undefined4 *)((longlong)puVar30 + 0x3c) = uStack_17c;
    *(undefined4 *)(puVar30 + 4) = (undefined4)local_198;
    *(undefined4 *)((longlong)puVar30 + 0x24) = local_198._4_4_;
    *(undefined4 *)(puVar30 + 5) = (undefined4)uStack_190;
    *(undefined4 *)((longlong)puVar30 + 0x2c) = uStack_190._4_4_;
    uVar21 = 0x10;
    if (DAT_14ca84e48 < 0x10) {
      uVar21 = DAT_14ca84e48;
    }
    local_138._0_4_ = uVar21 + (uVar21 == 0);
    local_130 = 0x10109;
    uVar21 = local_d8[0] << 0x10;
    if (DAT_14ca84e48 <= (uint)(local_d8[0] << 0x10)) {
      uVar21 = DAT_14ca84e48;
    }
    local_128 = 0;
    local_138._4_4_ = uVar21 + (uVar21 == 0);
    uVar31 = *(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0;
    uVar17 = uVar31 + 0x150;
    if (*(ulonglong *)(param_2 + 0x78) < uVar17) {
      FUN_140023dd8(local_238,0x160);
      uVar31 = *puVar24 + 0xf & 0xfffffffffffffff0;
      uVar17 = uVar31 + 0x150;
    }
    *(ulonglong *)(param_2 + 0x70) = uVar17;
    FUN_1456bd266(uVar31,L"SkyLightVisibilityRays",&local_138,0);
    iVar27 = *(int *)(param_2 + 400);
    *(uint *)(param_2 + 400) = iVar27 + 1U;
    if (*(uint *)(param_2 + 0x194) < iVar27 + 1U) {
      FUN_144737178(param_2 + 0x188,iVar27);
    }
    puVar24 = local_238;
    *(ulonglong *)(*(longlong *)(param_2 + 0x188) + (longlong)iVar27 * 8) = uVar31;
    *(int *)(uVar31 + 0x7c) = *(int *)(param_2 + 400) + -1;
    puVar30[0xe] = 0x10000000100;
    *(undefined4 *)(puVar30 + 0xf) = 0;
    puVar32 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar16 = puVar32 + 8;
    if (*(undefined8 **)(param_2 + 0x78) < puVar16) {
      FUN_140023dd8(local_238,0x48);
      puVar32 = (undefined8 *)(*puVar24 + 7 & 0xfffffffffffffff8);
      puVar16 = puVar32 + 8;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar16;
    puVar32[1] = *(undefined8 *)(uVar31 + 8);
    puVar32[2] = 0;
    *(undefined1 *)(puVar32 + 3) = 2;
    *(undefined8 *)((longlong)puVar32 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar32 + 5) = 0;
    *puVar32 = &PTR_FUN_14a1fb3e8;
    *(undefined2 *)(puVar32 + 6) = 0x1c;
    local_244 = 0;
    *(undefined1 *)((longlong)puVar32 + 0x32) = 0;
    puVar32[7] = uVar31;
    iVar27 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar27 + 1U;
    local_250 = uVar31;
    if (*(uint *)(param_2 + 0x1a4) < iVar27 + 1U) {
      FUN_1447568fc(param_2 + 0x198,iVar27);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar27 * 8) = puVar32;
    *(int *)((longlong)puVar32 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    puVar30[0xc] = puVar32;
    FUN_1472cb414(*(undefined8 *)(lVar26 + 0x13818),&local_138);
    local_278 = &local_158;
    local_158 = (undefined8 *)0x1000000010;
    lStack_150 = CONCAT44(lStack_150._4_4_,1);
    FUN_1472cb481(param_2,&local_178,&local_138);
    local_248 = 0x100;
    plVar20 = local_258;
  }
  else {
    local_128 = 0;
    uVar21 = 0x10;
    if (DAT_14ca84e48 < 0x10) {
      uVar21 = DAT_14ca84e48;
    }
    local_138._0_4_ = uVar21 + (uVar21 == 0);
    local_138._4_4_ = 1;
    local_130 = 0x10109;
    uVar31 = *(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0;
    uVar17 = uVar31 + 0x150;
    if (*(ulonglong *)(param_2 + 0x78) < uVar17) {
      FUN_140023dd8(local_238,0x160);
      uVar31 = *puVar24 + 0xf & 0xfffffffffffffff0;
      uVar17 = uVar31 + 0x150;
    }
    *(ulonglong *)(param_2 + 0x70) = uVar17;
    FUN_1456bd266(uVar31,L"SkyLightVisibilityRays",&local_138);
    iVar27 = *(int *)(param_2 + 400);
    *(uint *)(param_2 + 400) = iVar27 + 1U;
    if (*(uint *)(param_2 + 0x194) < iVar27 + 1U) {
      FUN_144737178(param_2 + 0x188,iVar27);
    }
    *(ulonglong *)(*(longlong *)(param_2 + 0x188) + (longlong)iVar27 * 8) = uVar31;
    *(int *)(uVar31 + 0x7c) = *(int *)(param_2 + 400) + -1;
    local_248 = 1;
    local_244 = 1;
    local_250 = uVar31;
  }
  puVar24 = local_238;
  uVar17 = *local_240;
  uVar4 = *(undefined1 *)(uVar17 + 0x94);
  puVar30 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar16 = puVar30 + 9;
  if (*(undefined8 **)(param_2 + 0x78) < puVar16) {
    FUN_140023dd8(local_238,0x50);
    puVar30 = (undefined8 *)(*puVar24 + 7 & 0xfffffffffffffff8);
    puVar16 = puVar30 + 9;
  }
  local_220 = param_2 + 0x198;
  *(undefined8 **)(param_2 + 0x70) = puVar16;
  puVar30[1] = *(undefined8 *)(uVar17 + 8);
  puVar30[2] = 0;
  *(undefined1 *)(puVar30 + 3) = 0;
  *(undefined8 *)((longlong)puVar30 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar30 + 5) = 0;
  *puVar30 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar30 + 6) = uVar4;
  *(undefined1 *)(puVar30 + 7) = 0;
  *(undefined4 *)((longlong)puVar30 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar30 + 0x35) = 0;
  puVar30[8] = uVar17;
  iVar27 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar27 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar27 + 1U) {
    FUN_1447568fc(local_220,iVar27);
  }
  puVar24 = local_238;
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar27 * 8) = puVar30;
  *(int *)((longlong)puVar30 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  uVar17 = *param_5;
  uVar4 = *(undefined1 *)(uVar17 + 0x94);
  puVar32 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar16 = puVar32 + 9;
  if (*(undefined8 **)(param_2 + 0x78) < puVar16) {
    FUN_140023dd8(local_238,0x50);
    puVar32 = (undefined8 *)(*puVar24 + 7 & 0xfffffffffffffff8);
    puVar16 = puVar32 + 9;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar16;
  puVar32[1] = *(undefined8 *)(uVar17 + 8);
  puVar32[2] = 0;
  *(undefined1 *)(puVar32 + 3) = 0;
  *(undefined8 *)((longlong)puVar32 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar32 + 5) = 0;
  *puVar32 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar32 + 6) = uVar4;
  *(undefined1 *)(puVar32 + 7) = 0;
  *(undefined4 *)((longlong)puVar32 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar32 + 0x35) = 0;
  puVar32[8] = uVar17;
  iVar27 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar27 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar27 + 1U) {
    FUN_1447568fc(local_220,iVar27);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar27 * 8) = puVar32;
  *(int *)((longlong)puVar32 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  local_1e8 = puVar32;
  FUN_14494b062(&local_138,param_2,*(undefined8 *)(*(longlong *)(plVar20[0x7d] + 8) + 0x348));
  if ((longlong)(int)plVar20[0x7e] != 0) {
    local_1f8 = plVar20[1] + 0x4298;
    lVar26 = plVar20[0x7d];
    local_200 = (longlong)(int)plVar20[0x7e] * 0x13c10 + lVar26;
    local_210 = (longlong *)(param_2 + 0x98);
    local_208 = param_2 + 0x168;
    local_1f0 = puVar30;
    do {
      puVar24 = *(ulonglong **)(param_2 + 0x18);
      local_224 = *(int *)((longlong)puVar24 + 0x17c);
      if (local_224 != *(int *)(lVar26 + 0x1de0)) {
        *(int *)((longlong)puVar24 + 0x17c) = *(int *)(lVar26 + 0x1de0);
        puVar32 = (undefined8 *)(*puVar24 + 7 & 0xfffffffffffffff8);
        puVar16 = puVar32 + 3;
        if ((undefined8 *)puVar24[1] < puVar16) {
          FUN_140023dd8(puVar24,0x20);
          puVar32 = (undefined8 *)(*puVar24 + 7 & 0xfffffffffffffff8);
          puVar16 = puVar32 + 3;
        }
        *puVar24 = (ulonglong)puVar16;
        *(int *)(puVar24 + 0xc) = (int)puVar24[0xc] + 1;
        *(undefined8 **)puVar24[6] = puVar32;
        puVar24[6] = (ulonglong)(puVar32 + 1);
        uVar28 = *(undefined4 *)((longlong)puVar24 + 0x17c);
        puVar32[1] = 0;
        *puVar32 = &PTR_FUN_14a1fb2c0;
        *(undefined4 *)(puVar32 + 2) = uVar28;
      }
      puVar11 = local_238;
      puVar32 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar16 = puVar32 + 0x20;
      if (*(undefined8 **)(param_2 + 0x78) < puVar16) {
        FUN_140023dd8(local_238,0x110);
        puVar32 = (undefined8 *)(*puVar11 + 0xf & 0xfffffffffffffff0);
        puVar16 = puVar32 + 0x20;
      }
      *(undefined8 **)(param_2 + 0x70) = puVar16;
      *puVar32 = &PTR_FUN_14a2e6fd0;
      puVar32[3] = 0;
      puVar32[4] = 0;
      puVar32[5] = 0;
      puVar32[6] = 0;
      *(undefined1 *)(puVar32 + 7) = 1;
      puVar32[8] = 0;
      *(undefined1 *)(puVar32 + 9) = 1;
      puVar32[0xe] = 0;
      puVar32[10] = 0;
      puVar32[0xb] = 0;
      puVar32[0xc] = 0;
      *(undefined1 *)(puVar32 + 0xf) = 1;
      puVar32[0x10] = 0;
      puVar32[0x14] = 0;
      puVar32[0x15] = 0;
      puVar32[0x16] = 0;
      puVar32[0x17] = 0;
      puVar32[0x18] = 0;
      puVar32[0x19] = 0;
      puVar32[0x1a] = 0;
      puVar32[0x1b] = 0;
      puVar32[0x1c] = 0;
      puVar32[0x1d] = 0;
      puVar32[0x1e] = 0;
      puVar32[0x1f] = 0;
      iVar27 = *(int *)(param_2 + 0xa0);
      *(uint *)(param_2 + 0xa0) = iVar27 + 1U;
      if (*(uint *)(param_2 + 0xa4) < iVar27 + 1U) {
        FUN_1448cfae8(local_210,iVar27);
      }
      *(undefined8 **)(*local_210 + (longlong)iVar27 * 8) = puVar32;
      puVar32[4] = puVar30;
      puVar32[5] = local_1e8;
      *(undefined4 *)(puVar32 + 0xc) = (undefined4)local_188;
      *(undefined4 *)((longlong)puVar32 + 100) = local_188._4_4_;
      *(undefined4 *)(puVar32 + 0xd) = uStack_180;
      *(undefined4 *)((longlong)puVar32 + 0x6c) = uStack_17c;
      *(undefined4 *)(puVar32 + 10) = (undefined4)local_198;
      *(undefined4 *)((longlong)puVar32 + 0x54) = local_198._4_4_;
      *(undefined4 *)(puVar32 + 0xb) = (undefined4)uStack_190;
      *(undefined4 *)((longlong)puVar32 + 0x5c) = uStack_190._4_4_;
      FUN_142fb5966(&local_158,local_d8);
      FUN_145d4cc50();
      puVar16 = local_158;
      cVar12 = DAT_14ca40e29;
      if (DAT_14ca40e29 == '\x03') {
        cVar12 = '\x02';
      }
      puVar32[8] = local_158;
      *(char *)(puVar32 + 9) = cVar12;
      if (local_158 != (undefined8 *)0x0) {
        LOCK();
        puVar2 = (uint *)(local_158 + 1);
        uVar21 = *puVar2;
        *puVar2 = *puVar2 - 1;
        UNLOCK();
        if ((uVar21 & 0x3fffffff) == 1) {
          puVar2 = (uint *)(local_158 + 1);
          LOCK();
          uVar21 = *puVar2;
          *puVar2 = *puVar2 | 0x40000000;
          UNLOCK();
          if ((uVar21 >> 0x1e & 1) == 0) {
            bVar5 = *(byte *)((longlong)local_158 + 0xd);
            plVar13 = (longlong *)FUN_14001cc68(0x10,8);
            plVar13[1] = (longlong)puVar16;
            plVar18 = DAT_14ca843c0;
            plVar19 = DAT_14ca843c8;
            param_2 = local_230;
            if ((bVar5 & 2) == 0) {
              do {
                *plVar13 = (longlong)plVar18;
                LOCK();
                bVar33 = plVar18 != DAT_14ca843c0;
                plVar19 = plVar13;
                if (bVar33) {
                  plVar18 = DAT_14ca843c0;
                  plVar19 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar19;
                UNLOCK();
              } while (bVar33);
            }
            else {
              do {
                *plVar13 = (longlong)plVar19;
                LOCK();
                bVar33 = plVar19 != DAT_14ca843c8;
                plVar18 = plVar13;
                if (bVar33) {
                  plVar19 = DAT_14ca843c8;
                  plVar18 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar18;
                UNLOCK();
              } while (bVar33);
            }
          }
        }
      }
      puVar11 = local_238;
      *(undefined4 *)(puVar32 + 0x12) = local_248;
      *(undefined4 *)((longlong)puVar32 + 0x94) = local_248;
      *(undefined4 *)(puVar32 + 0x13) = local_244;
      if (*(int *)(DAT_14ca40db0 + 4) == 1) {
        puVar30 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar16 = puVar30 + 9;
        if (*(undefined8 **)(param_2 + 0x78) < puVar16) {
          FUN_140023dd8(local_238,0x50);
          puVar30 = (undefined8 *)(*puVar11 + 7 & 0xfffffffffffffff8);
          puVar16 = puVar30 + 9;
        }
        *(undefined8 **)(param_2 + 0x70) = puVar16;
        puVar30[1] = *(undefined8 *)(local_250 + 8);
        puVar30[2] = 0;
        *(undefined1 *)(puVar30 + 3) = 3;
        *(undefined8 *)((longlong)puVar30 + 0x1c) = 0xffffffffffffffff;
        *puVar30 = &PTR_FUN_14a1fb168;
        *(undefined1 *)(puVar30 + 5) = 0x1c;
        *(undefined8 *)((longlong)puVar30 + 0x2c) = 0xffffffff00000000;
        puVar30[7] = 0;
        puVar30[8] = local_250;
        iVar27 = *(int *)(param_2 + 0x1a0);
        *(uint *)(param_2 + 0x1a0) = iVar27 + 1U;
        if (*(uint *)(param_2 + 0x1a4) < iVar27 + 1U) {
          FUN_1447568fc(local_220,iVar27);
        }
        *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar27 * 8) = puVar30;
        *(int *)((longlong)puVar30 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
        puVar32[0x10] = puVar30;
      }
      puVar16 = &local_138;
      puVar30 = puVar32 + 0x14;
      for (lVar23 = 0xc; lVar23 != 0; lVar23 = lVar23 + -1) {
        *puVar30 = *puVar16;
        puVar16 = puVar16 + 1;
        puVar30 = puVar30 + 1;
      }
      *(int *)(puVar32 + 2) = local_214;
      uVar28 = 0;
      uVar14 = FUN_1472daef4(lVar26,0);
      puVar32[3] = uVar14;
      lVar23 = FUN_1447e4f80();
      cVar12 = *(char *)(lVar23 + 0x41);
      if (cVar12 == '\x03') {
        cVar12 = '\x02';
      }
      puVar32[6] = *(undefined8 *)(lVar26 + 0x18);
      *(char *)(puVar32 + 7) = cVar12;
      uVar29 = 0;
      if (((*(char *)(lVar26 + 0x11a08) == '\x01') &&
          (lVar23 = *(longlong *)(lVar26 + 0x11c90), uVar29 = 0, lVar23 != 0)) &&
         ((uVar29 = uVar28, *(longlong *)(lVar26 + 0x11c98) != 0 &&
          ((*(longlong *)(lVar26 + 0x11ca8) != 0 && (0 < *(int *)(DAT_14ca40dc8 + 4))))))) {
        lVar15 = FUN_1414708b2();
        cVar12 = *(char *)(lVar15 + 0x41);
        if (cVar12 == '\x03') {
          cVar12 = '\x02';
        }
        puVar32[0xe] = lVar23;
        *(char *)(puVar32 + 0xf) = cVar12;
        uVar29 = 1;
      }
      puVar32 = puVar32 + 2;
      local_178 = CONCAT31(local_178._1_3_,*(int *)(DAT_14ca40d80 + 4) != 0);
      uStack_174 = CONCAT31((int3)((uint)uStack_174 >> 8),*(int *)(DAT_14ca40d98 + 4) != 0);
      local_170 = *(int *)(DAT_14ca40db0 + 4) != 0;
      local_16c = uVar29;
      FUN_1472c4852(&local_1a8,
                    *(undefined8 *)
                     (&DAT_14ca8c1f0 +
                     (ulonglong)
                     *(ushort *)(&DAT_14ca85070 + (longlong)*(int *)((longlong)plVar20 + 0x8a4) * 2)
                     * 8),&local_178);
      FUN_145f5a058();
      local_158 = (undefined8 *)0x0;
      lStack_150 = 0;
      FUN_1448f70da(CONCAT44(uStack_1a4,local_1a8),&DAT_14ca436e8,puVar32,&local_158);
      uVar14 = (**(code **)(**(longlong **)(*(longlong *)(lVar26 + 8) + 0x178) + 8))();
      uVar14 = FUN_1472e1976(uVar14,param_2);
      iVar27 = *(int *)(lVar26 + 0x3100);
      iVar22 = *(int *)(lVar26 + 0x3104) - *(int *)(lVar26 + 0x30fc);
      iVar25 = *(int *)(lVar26 + 0x30f8);
      lVar23 = (longlong)local_214;
      lVar15 = (longlong)local_214;
      local_1b8 = local_1a8;
      uStack_1b4 = uStack_1a4;
      uStack_1b0 = uStack_1a0;
      uStack_1ac = uStack_19c;
      FUN_145f5a058(iVar22,(longlong)iVar22 % lVar15 & 0xffffffff);
      FUN_140069376(param_2);
      puVar11 = local_238;
      puVar30 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar16 = puVar30 + 0x3f;
      local_1e0 = uVar14;
      if (*(undefined8 **)(param_2 + 0x78) < puVar16) {
        FUN_140023dd8(local_238,0x200);
        puVar30 = (undefined8 *)(*puVar11 + 7 & 0xfffffffffffffff8);
        puVar16 = puVar30 + 0x3f;
      }
      *local_238 = (ulonglong)puVar16;
      lStack_150 = DAT_14ca43730;
      if (DAT_14ca43730 != 0) {
        LOCK();
        *(int *)(DAT_14ca43730 + 8) = *(int *)(DAT_14ca43730 + 8) + 1;
        UNLOCK();
      }
      local_148 = &DAT_14ca436e8;
      local_278 = (undefined8 **)CONCAT71(local_278._1_7_,1);
      local_158 = puVar32;
      FUN_140068f1a(puVar30,&local_1b9,&local_158);
      plVar20 = local_258;
      *puVar30 = &PTR_FUN_14a2e6fe0;
      puVar30[0x37] = puVar32;
      puVar30[0x38] = local_258;
      puVar30[0x39] = lVar26;
      puVar30[0x3a] = local_1e0;
      *(undefined4 *)(puVar30 + 0x3b) = local_1b8;
      *(undefined4 *)((longlong)puVar30 + 0x1dc) = uStack_1b4;
      *(undefined4 *)(puVar30 + 0x3c) = uStack_1b0;
      *(undefined4 *)((longlong)puVar30 + 0x1e4) = uStack_1ac;
      puVar30[0x3d] =
           (longlong)(iVar27 - iVar25) / lVar23 & 0xffffffffU | (longlong)iVar22 / lVar15 << 0x20;
      puVar30[0x3e] = local_1f8;
      iVar27 = *(int *)(param_2 + 0x170);
      *(uint *)(param_2 + 0x170) = iVar27 + 1U;
      if (*(uint *)(param_2 + 0x174) < iVar27 + 1U) {
        FUN_14470e57a(local_208,iVar27);
      }
      *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar27 * 8) = puVar30;
      *(int *)((longlong)puVar30 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
      FUN_140069100(param_2,puVar30);
      puVar30 = local_1f0;
      if (*(int *)((longlong)puVar24 + 0x17c) != local_224) {
        *(int *)((longlong)puVar24 + 0x17c) = local_224;
        puVar32 = (undefined8 *)(*puVar24 + 7 & 0xfffffffffffffff8);
        puVar16 = puVar32 + 3;
        if ((undefined8 *)puVar24[1] < puVar16) {
          FUN_140023dd8(puVar24,0x20);
          puVar32 = (undefined8 *)(*puVar24 + 7 & 0xfffffffffffffff8);
          puVar16 = puVar32 + 3;
        }
        *puVar24 = (ulonglong)puVar16;
        *(int *)(puVar24 + 0xc) = (int)puVar24[0xc] + 1;
        *(undefined8 **)puVar24[6] = puVar32;
        puVar24[6] = (ulonglong)(puVar32 + 1);
        uVar28 = *(undefined4 *)((longlong)puVar24 + 0x17c);
        puVar32[1] = 0;
        *puVar32 = &PTR_FUN_14a1fb2c0;
        *(undefined4 *)(puVar32 + 2) = uVar28;
      }
      lVar26 = lVar26 + 0x13c10;
    } while (lVar26 != local_200);
  }
  if (DAT_14c76093c != 0) {
    fVar34 = 1.0 / (float)(int)(1.0 / fVar34);
    plVar18 = (longlong *)FUN_141508108();
    lStack_150 = 0;
    local_158 = (undefined8 *)*local_240;
    local_148 = (undefined *)*param_5;
    iVar27 = DAT_14c760930;
    if (DAT_14c760930 < 0) {
      iVar27 = 2;
      if (2 < *(int *)(local_1d8 + 0xf4)) {
        iVar27 = *(int *)(local_1d8 + 0xf4);
      }
    }
    iVar25 = (int)plVar20[0x7e];
    lVar26 = plVar20[0x7d];
    iVar22 = *(int *)(lVar26 + 0x1de0);
    if (1 < (longlong)iVar25) {
      lVar15 = (longlong)iVar25 * 0x13c10;
      bVar33 = true;
      lVar23 = 0;
      do {
        bVar33 = (bool)(bVar33 & *(int *)(lVar26 + 0x159f0 + lVar23) == iVar22);
        lVar23 = lVar23 + 0x13c10;
      } while (lVar15 + -0x13c10 != lVar23);
      if (!bVar33) {
        do {
          iVar25 = iVar25 + -1;
          puVar24 = *(ulonglong **)(param_2 + 0x18);
          iVar22 = *(int *)((longlong)puVar24 + 0x17c);
          if (iVar22 != *(int *)(lVar26 + 0x1de0)) {
            *(int *)((longlong)puVar24 + 0x17c) = *(int *)(lVar26 + 0x1de0);
            puVar30 = (undefined8 *)(*puVar24 + 7 & 0xfffffffffffffff8);
            puVar16 = puVar30 + 3;
            if ((undefined8 *)puVar24[1] < puVar16) {
              FUN_140023dd8(puVar24,0x20);
              puVar30 = (undefined8 *)(*puVar24 + 7 & 0xfffffffffffffff8);
              puVar16 = puVar30 + 3;
            }
            *puVar24 = (ulonglong)puVar16;
            *(int *)(puVar24 + 0xc) = (int)puVar24[0xc] + 1;
            *(undefined8 **)puVar24[6] = puVar30;
            puVar24[6] = (ulonglong)(puVar30 + 1);
            uVar28 = *(undefined4 *)((longlong)puVar24 + 0x17c);
            puVar30[1] = 0;
            *puVar30 = &PTR_FUN_14a1fb2c0;
            *(undefined4 *)(puVar30 + 2) = uVar28;
          }
          local_278 = (undefined8 **)(lVar26 + 0x125c0);
          local_268 = &local_158;
          local_270 = (undefined8 **)&local_138;
          local_260 = CONCAT44((float)iVar27,fVar34);
          (**(code **)(*plVar18 + 0x48))(plVar18,&local_178,param_2,lVar26);
          if (iVar25 == 0) {
            *local_240 = CONCAT44(uStack_174,local_178);
          }
          if (*(int *)((longlong)puVar24 + 0x17c) != iVar22) {
            *(int *)((longlong)puVar24 + 0x17c) = iVar22;
            puVar30 = (undefined8 *)(*puVar24 + 7 & 0xfffffffffffffff8);
            puVar16 = puVar30 + 3;
            if ((undefined8 *)puVar24[1] < puVar16) {
              FUN_140023dd8(puVar24,0x20);
              puVar30 = (undefined8 *)(*puVar24 + 7 & 0xfffffffffffffff8);
              puVar16 = puVar30 + 3;
            }
            *puVar24 = (ulonglong)puVar16;
            *(int *)(puVar24 + 0xc) = (int)puVar24[0xc] + 1;
            *(undefined8 **)puVar24[6] = puVar30;
            puVar24[6] = (ulonglong)(puVar30 + 1);
            uVar28 = *(undefined4 *)((longlong)puVar24 + 0x17c);
            puVar30[1] = 0;
            *puVar30 = &PTR_FUN_14a1fb2c0;
            *(undefined4 *)(puVar30 + 2) = uVar28;
          }
          lVar26 = lVar26 + 0x13c10;
          lVar15 = lVar15 + -0x13c10;
          plVar20 = local_258;
        } while (lVar15 != 0);
        goto LAB_142f7ef2d;
      }
    }
    puVar24 = *(ulonglong **)(param_2 + 0x18);
    iVar8 = *(int *)((longlong)puVar24 + 0x17c);
    if (iVar8 != iVar22) {
      *(int *)((longlong)puVar24 + 0x17c) = iVar22;
      puVar30 = (undefined8 *)(*puVar24 + 7 & 0xfffffffffffffff8);
      puVar16 = puVar30 + 3;
      if ((undefined8 *)puVar24[1] < puVar16) {
        FUN_140023dd8(puVar24,0x20);
        puVar30 = (undefined8 *)(*puVar24 + 7 & 0xfffffffffffffff8);
        puVar16 = puVar30 + 3;
      }
      *puVar24 = (ulonglong)puVar16;
      *(int *)(puVar24 + 0xc) = (int)puVar24[0xc] + 1;
      *(undefined8 **)puVar24[6] = puVar30;
      puVar24[6] = (ulonglong)(puVar30 + 1);
      uVar28 = *(undefined4 *)((longlong)puVar24 + 0x17c);
      puVar30[1] = 0;
      *puVar30 = &PTR_FUN_14a1fb2c0;
      *(undefined4 *)(puVar30 + 2) = uVar28;
      lVar26 = local_258[0x7d];
      iVar25 = (int)local_258[0x7e];
    }
    local_268 = (undefined8 **)CONCAT44((float)iVar27,fVar34);
    local_270 = &local_158;
    local_278 = (undefined8 **)&local_138;
    local_1d0 = lVar26;
    local_1c8 = iVar25;
    FUN_1430219d2(&local_178,param_2,&local_1d0,lVar26 + 0x125c0);
    *local_240 = CONCAT44(uStack_174,local_178);
    plVar20 = local_258;
    if (*(int *)((longlong)puVar24 + 0x17c) != iVar8) {
      *(int *)((longlong)puVar24 + 0x17c) = iVar8;
      puVar30 = (undefined8 *)(*puVar24 + 7 & 0xfffffffffffffff8);
      puVar16 = puVar30 + 3;
      if ((undefined8 *)puVar24[1] < puVar16) {
        FUN_140023dd8(puVar24,0x20);
        puVar30 = (undefined8 *)(*puVar24 + 7 & 0xfffffffffffffff8);
        puVar16 = puVar30 + 3;
      }
      *puVar24 = (ulonglong)puVar16;
      *(int *)(puVar24 + 0xc) = (int)puVar24[0xc] + 1;
      *(undefined8 **)puVar24[6] = puVar30;
      puVar24[6] = (ulonglong)(puVar30 + 1);
      uVar28 = *(undefined4 *)((longlong)puVar24 + 0x17c);
      puVar30[1] = 0;
      *puVar30 = &PTR_FUN_14a1fb2c0;
      *(undefined4 *)(puVar30 + 2) = uVar28;
      plVar20 = local_258;
    }
  }
LAB_142f7ef2d:
  lVar26 = plVar20[0x7e];
  if ((longlong)(int)lVar26 != 0) {
    lVar23 = plVar20[0x7d];
    puVar24 = (ulonglong *)(param_2 + 0x1c8);
    pcVar3 = (char *)(param_2 + 0x4a8);
    plVar20 = (longlong *)(param_2 + 0x4b0);
    lVar15 = 0;
    uVar17 = local_250;
    local_258 = plVar20;
    local_240 = puVar24;
    do {
      lVar9 = *(longlong *)(lVar23 + 0x10 + lVar15);
      if (lVar9 != 0) {
        puVar16 = (undefined8 *)(lVar9 + 0x1d80);
        puVar30 = *(undefined8 **)(lVar9 + 0x1d80);
        if (*(int *)(DAT_14ca40db0 + 4) == 1) {
          if (puVar30 != (undefined8 *)0x0) {
            *puVar16 = 0;
            LOCK();
            piVar1 = (int *)(puVar30 + 1);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)*puVar30)(puVar30,1);
              puVar24 = local_240;
              uVar17 = local_250;
              plVar20 = local_258;
            }
          }
          bVar5 = *(byte *)(uVar17 + 0x24);
          *(byte *)(uVar17 + 0x24) = bVar5 | 0x12;
          iVar27 = *(int *)(local_230 + 0x1d0);
          *(uint *)(local_230 + 0x1d0) = iVar27 + 1U;
          if (*(uint *)(local_230 + 0x1d4) < iVar27 + 1U) {
            FUN_14010a38e(puVar24,iVar27);
            puVar24 = local_240;
            uVar17 = local_250;
            plVar20 = local_258;
          }
          lVar10 = local_230;
          uVar31 = *puVar24;
          *(ulonglong *)(uVar31 + (longlong)iVar27 * 0x10) = uVar17;
          *(undefined8 **)(uVar31 + 8 + (longlong)iVar27 * 0x10) = puVar16;
          uVar28 = local_248;
          uVar29 = local_244;
          if ((bVar5 & 2) == 0) {
            LOCK();
            cVar12 = *pcVar3;
            if (cVar12 == '\0') {
              *pcVar3 = '\x01';
            }
            UNLOCK();
            if (cVar12 != '\0') {
              FUN_1447d2058();
              puVar24 = local_240;
              uVar17 = local_250;
              plVar20 = local_258;
            }
            iVar27 = *(int *)(lVar10 + 0x4b8);
            *(uint *)(lVar10 + 0x4b8) = iVar27 + 1U;
            if (*(uint *)(lVar10 + 0x4bc) < iVar27 + 1U) {
              FUN_1447f2dbc(plVar20,iVar27);
              puVar24 = local_240;
              uVar17 = local_250;
              plVar20 = local_258;
            }
            lVar10 = *plVar20;
            *(undefined8 *)(lVar10 + (longlong)iVar27 * 0x10) = 1;
            *(ulonglong *)(lVar10 + 8 + (longlong)iVar27 * 0x10) = uVar17;
            LOCK();
            cVar12 = *pcVar3;
            if (cVar12 == '\x01') {
              *pcVar3 = '\0';
            }
            UNLOCK();
            uVar28 = local_248;
            uVar29 = local_244;
            if (cVar12 != '\x01') {
              FUN_14008cdb0(pcVar3);
              puVar24 = local_240;
              uVar17 = local_250;
              plVar20 = local_258;
              uVar28 = local_248;
              uVar29 = local_244;
            }
          }
        }
        else {
          uVar28 = 1;
          if (puVar30 != (undefined8 *)0x0) {
            *puVar16 = 0;
            LOCK();
            piVar1 = (int *)(puVar30 + 1);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            uVar29 = 1;
            if (*piVar1 != 0) goto LAB_142f7f0c9;
            (**(code **)*puVar30)(puVar30,1);
            puVar24 = local_240;
            uVar17 = local_250;
            plVar20 = local_258;
          }
          uVar29 = 1;
        }
LAB_142f7f0c9:
        *(undefined4 *)(lVar9 + 0x1d88) = uVar28;
        *(undefined4 *)(lVar9 + 0x1d8c) = uVar28;
        *(undefined4 *)(lVar9 + 0x1d90) = uVar29;
      }
      lVar15 = lVar15 + 0x13c10;
    } while ((longlong)(int)lVar26 * 0x13c10 - lVar15 != 0);
  }
LAB_142f7f149:
  if ((local_b0 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f7f72e FUN_142f7f72e body=954 status=ok
// SIG undefined FUN_142f7f72e(void)

void FUN_142f7f72e(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong *puVar4;
  undefined8 *puVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined1 auStack_148 [32];
  undefined1 local_128;
  ulonglong *local_120;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  undefined8 local_100;
  undefined8 *local_f8;
  undefined1 local_e9;
  undefined8 local_e8 [12];
  undefined8 *local_88;
  longlong local_80;
  undefined *local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_118 = param_3;
  local_100 = param_4;
  if (0 < *(int *)(param_1 + 0x3f0)) {
    local_120 = (ulonglong *)(param_2 + 0x70);
    local_108 = param_2 + 0x98;
    local_110 = param_2 + 0x168;
    lVar10 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 1000);
      FUN_1448e94e7(local_e8,param_2,*(undefined8 *)(local_118 + 0x198));
      puVar4 = local_120;
      puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar9 = puVar11 + 0x32;
      if (*(undefined8 **)(param_2 + 0x78) < puVar9) {
        FUN_140023dd8(local_120,0x1a0);
        puVar11 = (undefined8 *)(*puVar4 + 0xf & 0xfffffffffffffff0);
        puVar9 = puVar11 + 0x32;
      }
      *local_120 = (ulonglong)puVar9;
      *puVar11 = &PTR_FUN_14a2e6ff8;
      local_f8 = puVar11 + 2;
      lVar7 = 0x22;
      do {
        puVar9 = (undefined8 *)((longlong)puVar11 + lVar7 + -0x12);
        *puVar9 = 0;
        puVar9[1] = 0;
        *(undefined4 *)((longlong)puVar11 + lVar7 + -2) = 0xffff0000;
        lVar7 = lVar7 + 0x18;
      } while (lVar7 != 0xe2);
      *(undefined4 *)((longlong)puVar11 + 0xe4) = 0;
      puVar11[0x1a] = 0;
      puVar11[0x1b] = 0;
      *(undefined2 *)(puVar11 + 0x1c) = 0;
      *(undefined4 *)(puVar11 + 0x1d) = 0xffffffff;
      *(undefined4 *)((longlong)puVar11 + 0xec) = 0xffffffff;
      *(undefined4 *)(puVar11 + 0x1e) = 0xffffffff;
      *(undefined4 *)((longlong)puVar11 + 0xf4) = 0xffffffff;
      *(undefined4 *)(puVar11 + 0x1f) = 0;
      *(undefined2 *)((longlong)puVar11 + 0xfc) = 0;
      puVar11[0x20] = 0;
      puVar11[0x22] = 0;
      puVar11[0x23] = 0;
      puVar11[0x24] = 0;
      *(undefined1 *)(puVar11 + 0x25) = 1;
      puVar11[0x26] = 0;
      puVar11[0x27] = 0;
      puVar11[0x28] = 0;
      puVar11[0x29] = 0;
      puVar11[0x2a] = 0;
      puVar11[0x2b] = 0;
      puVar11[0x2c] = 0;
      puVar11[0x2d] = 0;
      puVar11[0x2e] = 0;
      puVar11[0x2f] = 0;
      puVar11[0x30] = 0;
      puVar11[0x31] = 0;
      iVar1 = *(int *)(param_2 + 0xa0);
      *(uint *)(param_2 + 0xa0) = iVar1 + 1U;
      if (*(uint *)(param_2 + 0xa4) < iVar1 + 1U) {
        FUN_1448cfae8(local_108,iVar1);
      }
      *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar1 * 8) = puVar11;
      puVar11[0x22] = local_100;
      puVar11[0x23] = DAT_14c9c0d80;
      lVar7 = *(longlong *)(param_1 + 1000);
      lVar8 = FUN_1447e4f80();
      cVar6 = *(char *)(lVar8 + 0x41);
      if (*(char *)(lVar8 + 0x41) == '\x03') {
        cVar6 = '\x02';
      }
      puVar11[0x24] = *(undefined8 *)(lVar7 + 0x18 + lVar10 * 0x13c10);
      *(char *)(puVar11 + 0x25) = cVar6;
      puVar11[2] = *(undefined8 *)(local_118 + 0x1b0);
      puVar11[3] = 0;
      *(undefined4 *)(puVar11 + 4) = 0xffff0001;
      puVar9 = local_e8;
      puVar11 = puVar11 + 0x26;
      for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
        *puVar11 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar11 = puVar11 + 1;
      }
      uVar3 = *(undefined8 *)(local_118 + 0x20);
      FUN_145f3537a();
      FUN_140069376(param_2);
      puVar4 = local_120;
      puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar11 + 0x3b;
      if (*(undefined8 **)(param_2 + 0x78) < puVar9) {
        FUN_140023dd8(local_120,0x1e0);
        puVar11 = (undefined8 *)(*puVar4 + 7 & 0xfffffffffffffff8);
        puVar9 = puVar11 + 0x3b;
      }
      puVar5 = local_f8;
      *local_120 = (ulonglong)puVar9;
      local_88 = local_f8;
      local_80 = DAT_14ca43950;
      if (DAT_14ca43950 != 0) {
        LOCK();
        *(int *)(DAT_14ca43950 + 8) = *(int *)(DAT_14ca43950 + 8) + 1;
        UNLOCK();
      }
      local_78 = &DAT_14ca43908;
      local_128 = 2;
      FUN_140068f1a(puVar11,&local_e9,&local_88,1);
      *puVar11 = &PTR_FUN_14a2e7000;
      puVar11[0x37] = param_1;
      puVar11[0x38] = lVar2 + lVar10 * 0x13c10;
      puVar11[0x39] = puVar5;
      puVar11[0x3a] = uVar3;
      iVar1 = *(int *)(param_2 + 0x170);
      *(uint *)(param_2 + 0x170) = iVar1 + 1U;
      if (*(uint *)(param_2 + 0x174) < iVar1 + 1U) {
        FUN_14470e57a(local_110,iVar1);
      }
      *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar1 * 8) = puVar11;
      *(int *)((longlong)puVar11 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
      FUN_140069100(param_2,puVar11);
      lVar10 = lVar10 + 1;
    } while (lVar10 < *(int *)(param_1 + 0x3f0));
  }
  if ((local_70 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f7fae9 FUN_142f7fae9 body=69 status=ok
// SIG undefined FUN_142f7fae9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f7fae9(void)

{
  _DAT_14ca411f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f7fb2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca41200,1);
  return;
}



// FUNCTION 142f7fb2e FUN_142f7fb2e body=69 status=ok
// SIG undefined FUN_142f7fb2e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f7fb2e(void)

{
  _DAT_14ca41210 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f7fb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca41218,1);
  return;
}



// FUNCTION 142f7fb73 FUN_142f7fb73 body=69 status=ok
// SIG undefined FUN_142f7fb73(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f7fb73(void)

{
  _DAT_14ca41220 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f7fbb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca41228,1);
  return;
}



// FUNCTION 142f7fbb8 FUN_142f7fbb8 body=69 status=ok
// SIG undefined FUN_142f7fbb8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f7fbb8(void)

{
  _DAT_14ca41230 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f7fbfa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca41238,1);
  return;
}



// FUNCTION 142f7fbfd FUN_142f7fbfd body=69 status=ok
// SIG undefined FUN_142f7fbfd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f7fbfd(void)

{
  _DAT_14ca41240 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f7fc3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca41248,1);
  return;
}



// FUNCTION 142f7fc42 FUN_142f7fc42 body=69 status=ok
// SIG undefined FUN_142f7fc42(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f7fc42(void)

{
  _DAT_14ca41250 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f7fc84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca41258,1);
  return;
}



// FUNCTION 142f7fc87 FUN_142f7fc87 body=69 status=ok
// SIG undefined FUN_142f7fc87(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f7fc87(void)

{
  _DAT_14ca41260 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f7fcc9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca41268,1);
  return;
}



// FUNCTION 142f7fccc FUN_142f7fccc body=69 status=ok
// SIG undefined FUN_142f7fccc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f7fccc(void)

{
  _DAT_14ca41270 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f7fd0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca41278,1);
  return;
}



// FUNCTION 142f7fd11 FUN_142f7fd11 body=69 status=ok
// SIG undefined FUN_142f7fd11(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f7fd11(void)

{
  _DAT_14ca41280 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f7fd53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca41288,1);
  return;
}



// FUNCTION 142f7fd56 FUN_142f7fd56 body=69 status=ok
// SIG undefined FUN_142f7fd56(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f7fd56(void)

{
  _DAT_14ca41290 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f7fd98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca41298,1);
  return;
}



// FUNCTION 142f7fd9b FUN_142f7fd9b body=69 status=ok
// SIG undefined FUN_142f7fd9b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f7fd9b(void)

{
  _DAT_14ca412a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f7fddd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca412a8,1);
  return;
}



// FUNCTION 142f7fde0 FUN_142f7fde0 body=69 status=ok
// SIG undefined FUN_142f7fde0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f7fde0(void)

{
  _DAT_14ca412b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f7fe22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca412b8,1);
  return;
}



// FUNCTION 142f7fe26 FUN_142f7fe26 body=1194 status=ok
// SIG undefined FUN_142f7fe26(void)

void FUN_142f7fe26(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_178 [32];
  undefined8 *local_158;
  int local_150;
  undefined4 local_148;
  undefined4 local_140;
  undefined4 local_138;
  undefined8 local_128;
  int local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined1 local_f4;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 local_c0;
  longlong local_b8;
  int local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar10 = *(longlong *)(param_1 + 1000);
  iVar3 = *(int *)(param_1 + 0x3f0);
  if ((longlong)iVar3 == 0) {
    if (DAT_14c9f21d4 == 0) goto LAB_142f80293;
  }
  else {
    lVar8 = (longlong)iVar3 * 0x13c10;
    lVar9 = 0;
    do {
      if ((((((*(byte *)(lVar10 + 0x125b0 + lVar9) & 4) != 0) ||
            (*(int *)(lVar10 + 0x3d98 + lVar9) != 0)) || (*(int *)(lVar10 + 0x3da8 + lVar9) != 0))
          || ((*(int *)(lVar10 + 0x3df8 + lVar9) != 0 || (*(int *)(lVar10 + 0x3f00 + lVar9) != 0))))
         || ((*(int *)(lVar10 + 0x3de8 + lVar9) != 0 || (0 < *(int *)(lVar10 + 0x3db8 + lVar9)))))
      goto LAB_142f8008a;
      lVar9 = lVar9 + 0x13c10;
    } while (lVar8 - lVar9 != 0);
    lVar9 = 0;
    do {
      if ((0 < *(int *)(lVar10 + 0x3680 + lVar9)) || (0 < *(int *)(lVar10 + 0x36a0 + lVar9)))
      goto LAB_142f8008a;
      lVar9 = lVar9 + 0x13c10;
    } while (lVar8 - lVar9 != 0);
    lVar9 = 0;
    do {
      if ((0 < *(int *)(lVar10 + 0x3684 + lVar9)) || (0 < *(int *)(lVar10 + 0x36a4 + lVar9)))
      goto LAB_142f8008a;
      lVar9 = lVar9 + 0x13c10;
    } while (lVar8 - lVar9 != 0);
    if (DAT_14c9f21d4 == 0) {
      if (iVar3 != 0) {
        lVar9 = 0;
        do {
          if ((0 < *(int *)(lVar10 + 0x3688 + lVar9)) || (0 < *(int *)(lVar10 + 0x36a8 + lVar9)))
          goto LAB_142f8008a;
          lVar9 = lVar9 + 0x13c10;
        } while (lVar8 - lVar9 != 0);
        lVar9 = 0;
        do {
          if ((0 < *(int *)(lVar10 + 0x368c + lVar9)) || (0 < *(int *)(lVar10 + 0x36ac + lVar9)))
          goto LAB_142f8008a;
          lVar9 = lVar9 + 0x13c10;
        } while (lVar8 - lVar9 != 0);
        lVar9 = 0;
        do {
          if ((0 < *(int *)(lVar10 + 0x3690 + lVar9)) || (0 < *(int *)(lVar10 + 14000 + lVar9)))
          goto LAB_142f8008a;
          lVar9 = lVar9 + 0x13c10;
        } while (lVar8 - lVar9 != 0);
        lVar9 = 0;
        do {
          if (((((*(byte *)(lVar10 + 0x125b0 + lVar9) & 4) != 0) ||
               (*(int *)(lVar10 + 0x3d98 + lVar9) != 0)) || (*(int *)(lVar10 + 0x3da8 + lVar9) != 0)
              ) || (((*(int *)(lVar10 + 0x3df8 + lVar9) != 0 ||
                     (*(int *)(lVar10 + 0x3f00 + lVar9) != 0)) ||
                    ((*(int *)(lVar10 + 0x3de8 + lVar9) != 0 ||
                     (0 < *(int *)(lVar10 + 0x3db8 + lVar9))))))) goto LAB_142f8008a;
          lVar9 = lVar9 + 0x13c10;
        } while (lVar8 - lVar9 != 0);
        lVar9 = 0;
        do {
          if ((0 < *(int *)(lVar10 + 0x3698 + lVar9)) || (0 < *(int *)(lVar10 + 0x36b4 + lVar9)))
          goto LAB_142f8008a;
          lVar9 = lVar9 + 0x13c10;
        } while (lVar8 - lVar9 != 0);
      }
      goto LAB_142f80293;
    }
  }
LAB_142f8008a:
  local_a8 = *(undefined4 *)param_3;
  uStack_a4 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_a0 = *(undefined4 *)(param_3 + 1);
  uStack_9c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_b8 = lVar10;
  local_b0 = iVar3;
  FUN_14034d3d3(param_2);
  local_120 = *(int *)(param_1 + 0x3f0);
  if (0 < (longlong)local_120) {
    lVar10 = 0;
    do {
      lVar8 = *(longlong *)(param_1 + 1000);
      if ((((*(byte *)(lVar8 + 0x125b0 + lVar10) & 2) == 0) &&
          (*(char *)(lVar8 + 0x30c8 + lVar10) == '\0')) &&
         (((*(char *)(lVar8 + 0x23f2 + lVar10) == '\0' &&
           (*(char *)(lVar8 + 0x23f5 + lVar10) != '\x01')) ||
          (*(int *)(lVar8 + 0x1dd0 + lVar10) != 2)))) {
        bVar11 = *(int *)(DAT_14ca41208 + 4) != 0;
        if (*(int *)(DAT_14ca41208 + 4) < 0) {
          bVar11 = *(char *)(lVar8 + 0x2bd4 + lVar10) == '\x01';
        }
        cVar7 = FUN_14090c054(bVar11,1,lVar8 + lVar10);
        if (cVar7 != '\0') {
          puVar1 = (undefined8 *)(lVar8 + 0x30f8 + lVar10);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          uVar4 = *param_3;
          local_98 = 0;
          uStack_90 = 0;
          local_88 = 0;
          local_150 = DAT_14c76095c;
          if (DAT_14c76095c < 0) {
            local_150 = *(int *)(lVar8 + 0x2be0 + lVar10);
          }
          local_148 = DAT_14c760960;
          local_158 = &uStack_90;
          local_138 = 5;
          local_140 = 0x3f800000;
          FUN_142f65c52(param_1,param_2,lVar8 + lVar10,&local_98);
          puVar2 = (undefined4 *)(lVar8 + 0x30f8 + lVar10);
          local_e8 = *puVar2;
          uStack_e4 = puVar2[1];
          uStack_e0 = puVar2[2];
          uStack_dc = puVar2[3];
          local_c0 = 1;
          local_f0 = local_98;
          local_100 = *(undefined4 *)(lVar8 + 0x3090 + lVar10);
          local_fc = *(undefined4 *)(lVar8 + 0x1dd4 + lVar10);
          local_f8 = *(undefined4 *)(lVar8 + 0x3094 + lVar10);
          local_f4 = (&DAT_00001de6)[lVar10 + lVar8];
          local_158 = (undefined8 *)CONCAT44(local_158._4_4_,1);
          local_d8 = uVar4;
          local_d0 = uVar5;
          uStack_c8 = uVar6;
          FUN_14301884d(param_2,&local_100,&local_f0,&local_d8);
        }
      }
      lVar10 = lVar10 + 0x13c10;
    } while ((longlong)local_120 * 0x13c10 - lVar10 != 0);
    local_120 = *(int *)(param_1 + 0x3f0);
  }
  local_118 = *(undefined4 *)param_3;
  uStack_114 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_110 = *(undefined4 *)(param_3 + 1);
  uStack_10c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_128 = *(undefined8 *)(param_1 + 1000);
  FUN_14034d3d3(param_2);
LAB_142f80293:
  if ((local_70 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142f802dd FUN_142f802dd body=69 status=ok
// SIG undefined FUN_142f802dd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f802dd(void)

{
  _DAT_14ca413e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f8031f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca413f0,1);
  return;
}



// FUNCTION 142f80322 FUN_142f80322 body=69 status=ok
// SIG undefined FUN_142f80322(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f80322(void)

{
  _DAT_14ca41400 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f80364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca41408,1);
  return;
}



// FUNCTION 142f80367 FUN_142f80367 body=69 status=ok
// SIG undefined FUN_142f80367(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f80367(void)

{
  _DAT_14ca41418 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f803a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca41420,1);
  return;
}



// FUNCTION 142f803ac FUN_142f803ac body=69 status=ok
// SIG undefined FUN_142f803ac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f803ac(void)

{
  _DAT_14ca41430 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f803ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca41438,1);
  return;
}



// FUNCTION 142f803f1 FUN_142f803f1 body=69 status=ok
// SIG undefined FUN_142f803f1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f803f1(void)

{
  _DAT_14ca41448 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f80433. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca41450,1);
  return;
}



// FUNCTION 142f80436 FUN_142f80436 body=69 status=ok
// SIG undefined FUN_142f80436(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f80436(void)

{
  _DAT_14ca41460 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f80478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca41468,1);
  return;
}



// FUNCTION 142f8047b FUN_142f8047b body=69 status=ok
// SIG undefined FUN_142f8047b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f8047b(void)

{
  _DAT_14ca41478 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f804bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca41480,1);
  return;
}



// FUNCTION 142f804c0 FUN_142f804c0 body=47 status=ok
// SIG undefined FUN_142f804c0(void)

void FUN_142f804c0(void)

{
  DAT_14ca414a0 = &PTR_FUN_14a2e7020;
  FUN_144725486(&DAT_14ca414a0);
  FUN_145ee547e(&DAT_14ca414a0);
  return;
}



// FUNCTION 142f8052b FUN_142f8052b body=10389 status=ok
// SIG undefined FUN_142f8052b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f8052b(longlong param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auVar9 [11];
  undefined1 auVar10 [11];
  ulonglong *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  longlong *plVar15;
  uint uVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong *plVar20;
  undefined4 *puVar21;
  longlong *plVar22;
  longlong *plVar23;
  int *piVar24;
  undefined8 *puVar25;
  longlong *plVar26;
  undefined8 uVar27;
  byte bVar28;
  byte bVar29;
  longlong *plVar30;
  undefined1 (*pauVar31) [16];
  int iVar32;
  longlong *plVar33;
  undefined8 *puVar34;
  uint uVar35;
  ulonglong uVar36;
  uint uVar37;
  longlong *plVar38;
  int iVar39;
  int iVar40;
  longlong *plVar41;
  longlong lVar42;
  longlong *plVar43;
  undefined1 (*pauVar44) [16];
  longlong lVar45;
  undefined8 *puVar46;
  uint uVar47;
  longlong *plVar48;
  longlong lVar49;
  int iVar50;
  bool bVar51;
  bool bVar52;
  undefined4 uVar53;
  float fVar54;
  undefined4 uVar56;
  undefined1 in_XMM1 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auStack_478 [32];
  undefined8 *local_458;
  ulonglong local_450;
  ulonglong *local_448;
  longlong local_440;
  int local_434;
  longlong local_430;
  uint local_424;
  longlong local_420;
  undefined8 local_418;
  longlong local_410;
  longlong local_408;
  undefined8 local_400;
  undefined1 local_3f8 [16];
  undefined1 local_3e8 [16];
  undefined1 local_3d8 [16];
  undefined1 local_3b9;
  undefined1 local_3b8 [16];
  undefined1 local_3a8 [12];
  uint uStack_39c;
  undefined1 local_398 [16];
  undefined1 local_388 [16];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  longlong lStack_90;
  longlong local_88;
  longlong lStack_80;
  ulonglong local_70;
  undefined1 auVar55 [16];
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_478;
  if (DAT_14ca41520 != '\0') goto LAB_142f8081b;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca41afc) && (FUN_144b3d300(&DAT_14ca41afc), DAT_14ca41afc == -1)) {
    DAT_14ca41af8 = *(int *)(DAT_14ca413f8 + 4);
    _Init_thread_footer(&DAT_14ca41afc);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca41b04) && (FUN_144b3d300(&DAT_14ca41b04), DAT_14ca41b04 == -1)) {
    DAT_14ca41b00 = (*(int *)(DAT_14ca41488 + 4) < 1) << 4 | 10;
    _Init_thread_footer(&DAT_14ca41b04);
  }
  auVar57 = _local_3a8;
  bVar28 = (*(int *)(DAT_14ca41488 + 4) < 1) << 4;
  bVar29 = bVar28 | 10;
  local_448 = (ulonglong *)(CONCAT71(local_448._1_7_,bVar28) | 10);
  local_440 = param_1;
  if (*(int *)(DAT_14ca41440 + 4) < 1) {
    iVar39 = *(int *)(DAT_14ca413f8 + 4);
    if ((DAT_14ca41af8 != iVar39) || (DAT_14ca41b00 != bVar29)) goto LAB_142f806c1;
LAB_142f8060d:
    lVar19 = DAT_14ca414b8;
    lVar17 = (longlong)DAT_14ca414c0;
    if (lVar17 == 0) goto LAB_142f807f8;
    lVar42 = 0;
    iVar39 = 0;
    do {
      lVar45 = *(longlong *)(lVar19 + 0x18 + lVar42);
      if ((lVar45 != 0) && (*(longlong *)(lVar45 + 0x60) != 0)) {
        bVar28 = DAT_14ca414f8;
        FUN_1472c4c30(local_3a8);
        iVar50 = 1 << (bVar28 & 0x1f);
        if ((*(int *)(lVar19 + 0xc + lVar42) < (local_3a8._0_4_ + iVar50 + -1) / iVar50) ||
           (*(int *)(lVar19 + 0x10 + lVar42) < (iVar50 + -1 + local_3a8._4_4_) / iVar50)) {
          *(ulonglong *)(lVar19 + 4 + lVar42) = CONCAT44(DAT_14ca41490._4_4_,(int)DAT_14ca41490);
          DAT_14ca41521 = '\x01';
        }
        iVar39 = iVar39 + (uint)*(byte *)(lVar19 + 0x2c + lVar42);
      }
      lVar42 = lVar42 + 0x30;
    } while (lVar17 * 0x30 != lVar42);
  }
  else {
    iVar39 = *(int *)(DAT_14ca413f8 + 4);
LAB_142f806c1:
    DAT_14ca41521 = '\x01';
    local_3a8._4_4_ = iVar39;
    local_3a8._0_4_ = iVar39;
    uStack_39c = auVar57._12_4_;
    local_3a8._8_4_ = 0;
    local_398 = (undefined1  [16])0x0;
    local_388 = (undefined1  [16])0x0;
    DAT_14ca41af8 = iVar39;
    DAT_14ca41b00 = bVar29;
    FUN_1472c52f6(local_3a8);
    if (local_388._0_8_ != 0) {
      FUN_1400020a8();
    }
    if (local_398._0_8_ != 0) {
      FUN_1400020a8();
    }
    if ((longlong)DAT_14ca414c0 != 0) {
      uVar3 = CONCAT44(DAT_14ca41490._4_4_,(int)DAT_14ca41490);
      uVar18 = (longlong)DAT_14ca414c0 * 0x30 - 0x30;
      auVar57._8_8_ = 0;
      auVar57._0_8_ = uVar18;
      uVar53 = SUB164(auVar57 * ZEXT816(0xaaaaaaaaaaaaaaab),8);
      uVar56 = (undefined4)(uVar18 / 0x180000000);
      auVar55._0_8_ = CONCAT44(uVar56,uVar53);
      auVar55._8_4_ = uVar53;
      auVar55._12_4_ = uVar56;
      puVar25 = (undefined8 *)(DAT_14ca414b8 + 0x34);
      uVar36 = 0;
      auVar57 = pmovsxbq(in_XMM1,0x100);
      do {
        if ((bool)(~((longlong)(auVar55._0_8_ >> 5 | 0x8000000000000000) <
                    (longlong)(uVar36 ^ 0x8000000000000000)) & 1)) {
          puVar25[-6] = uVar3;
        }
        auVar58._8_4_ = (int)uVar36;
        auVar58._0_8_ = uVar36;
        auVar58._12_4_ = (int)(uVar36 >> 0x20);
        if ((longlong)((auVar58._8_8_ | auVar57._8_8_) ^ 0x8000000000000000) <=
            (longlong)(auVar55._8_8_ >> 5 | 0x8000000000000000)) {
          *puVar25 = uVar3;
        }
        uVar36 = uVar36 + 2;
        puVar25 = puVar25 + 0xc;
      } while ((uVar18 / 0x30 + 2 & 0xfffffffffffffffe) != uVar36);
      goto LAB_142f8060d;
    }
LAB_142f807f8:
    iVar39 = 0;
  }
  lVar19 = DAT_14ca414c8;
  lVar17 = (longlong)DAT_14ca414d0;
  if (0 < lVar17) {
    lVar42 = 0;
    do {
      uVar16 = DAT_14ca41518;
      if ((-1 < *(int *)(lVar19 + lVar42)) && (-1 < *(int *)(lVar19 + 4 + lVar42))) {
        lVar45 = (longlong)(int)DAT_14ca41518;
        DAT_14ca41518 = DAT_14ca41518 + 1;
        if (DAT_14ca4151c < DAT_14ca41518) {
          FUN_1472cccfa(&DAT_14ca41510,uVar16);
        }
        uVar3 = ((undefined8 *)(lVar19 + lVar42))[1];
        puVar25 = (undefined8 *)(DAT_14ca41510 + lVar45 * 0x10);
        *puVar25 = *(undefined8 *)(lVar19 + lVar42);
        puVar25[1] = uVar3;
      }
      lVar42 = lVar42 + 0x10;
    } while (lVar17 * 0x10 != lVar42);
    FUN_1472c5394();
    DAT_14ca41522 = 0;
  }
  if (DAT_14ca41521 == '\x01') {
    local_418 = *(undefined8 *)
                 (&DAT_14ca8c1f0 +
                 (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)param_2 * 2) * 8);
    local_3e8 = (undefined1  [16])0x0;
    local_3f8 = (undefined1  [16])0x0;
    local_430 = CONCAT44(local_430._4_4_,*(undefined4 *)(DAT_14ca413f8 + 4));
    local_3b8 = (undefined1  [16])0x0;
    local_3d8 = (undefined1  [16])0x0;
    iVar39 = DAT_14ca414c0;
    if (DAT_14ca414c0 < 0) {
LAB_142f82d35:
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar39);
    }
    uVar16 = 0;
    if (DAT_14ca414c0 != 0) {
      FUN_1472d049c(local_3b8);
      iVar39 = DAT_14ca414c0;
      if (DAT_14ca414c0 < 0) goto LAB_142f82d35;
      if ((int)local_3d8._12_4_ < DAT_14ca414c0) {
        FUN_1472d049c(local_3d8);
      }
      lVar19 = DAT_14ca414b8;
      if (DAT_14ca414c0 != 0) {
        lVar17 = (longlong)DAT_14ca414c0;
        lVar42 = DAT_14ca414b8 + 0x20;
        lVar45 = 0;
        uVar16 = 0;
        do {
          if (*(longlong *)(lVar19 + 0x18 + lVar45) != 0) {
            uVar53 = local_3b8._8_4_;
            lVar49 = (longlong)(int)local_3b8._8_4_;
            uVar47 = local_3b8._8_4_ + 1;
            local_3b8._8_4_ = uVar47;
            if ((uint)local_3b8._12_4_ < uVar47) {
              FUN_1472cca80(local_3b8,uVar53);
            }
            lVar2 = lVar42 + lVar45;
            lVar49 = lVar49 * 0x30;
            puVar25 = (undefined8 *)(local_3b8._0_8_ + lVar49);
            *(undefined4 *)(local_3b8._0_8_ + 0x10 + lVar49) = *(undefined4 *)(lVar2 + -0x10);
            uVar3 = *(undefined8 *)(lVar2 + -0x18);
            *(undefined8 *)(local_3b8._0_8_ + lVar49) = *(undefined8 *)(lVar2 + -0x20);
            ((undefined8 *)(local_3b8._0_8_ + lVar49))[1] = uVar3;
            lVar2 = *(longlong *)(lVar42 + lVar45 + -8);
            *(longlong *)(local_3b8._0_8_ + 0x18 + lVar49) = lVar2;
            if (lVar2 == 0) {
              uVar3 = *(undefined8 *)(lVar42 + lVar45);
              *(undefined8 *)((longlong)puVar25 + 0x25) = *(undefined8 *)(lVar19 + 0x25 + lVar45);
              puVar25[4] = uVar3;
            }
            else {
              LOCK();
              *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
              UNLOCK();
              uVar3 = *(undefined8 *)(lVar19 + 0x25 + lVar45);
              puVar25[4] = *(undefined8 *)(lVar42 + lVar45);
              *(undefined8 *)((longlong)puVar25 + 0x25) = uVar3;
            }
            FUN_1472c4c30(local_3a8);
            uVar53 = local_3a8._0_4_;
            uVar56 = local_3a8._4_4_;
            if (((*(uint *)(puVar25 + 4) != local_3a8._0_4_) ||
                (*(uint *)((longlong)puVar25 + 0x24) != local_3a8._4_4_)) ||
               (*(char *)((longlong)puVar25 + 0x2c) == '\x01')) {
              *(ulonglong *)((longlong)puVar25 + 4) =
                   CONCAT44(DAT_14ca41490._4_4_,(int)DAT_14ca41490);
              uVar47 = uVar56;
              if ((int)uVar53 < (int)uVar56) {
                uVar47 = uVar53;
              }
              iVar39 = 0x1f;
              if (uVar47 != 0) {
                for (; uVar47 >> iVar39 == 0; iVar39 = iVar39 + -1) {
                }
              }
              bVar28 = (char)iVar39 - 1;
              if (iVar39 == 0) {
                bVar28 = 0;
              }
              if (uVar47 == 0) {
                bVar28 = 0;
              }
              iVar39 = 1 << (bVar28 & 0x1f);
              *(ulonglong *)((longlong)puVar25 + 0xc) =
                   CONCAT44((iVar39 + uVar56 + -1) / iVar39 << (bVar28 & 0x1f),
                            (iVar39 + uVar53 + -1) / iVar39 << (bVar28 & 0x1f));
              puVar25[4] = local_3a8._0_8_;
            }
            iVar39 = *(int *)(puVar25 + 2);
            iVar50 = *(int *)((longlong)puVar25 + 0xc);
            if ((*(int *)((longlong)puVar25 + 4) == (int)DAT_14ca41490) &&
               (*(int *)(puVar25 + 1) == DAT_14ca41490._4_4_)) {
              uVar53 = local_3d8._8_4_;
              lVar49 = (longlong)(int)local_3d8._8_4_;
              uVar47 = local_3d8._8_4_ + 1;
              local_3d8._8_4_ = uVar47;
              if ((uint)local_3d8._12_4_ < uVar47) {
                FUN_1472cca80(local_3d8,uVar53);
              }
              lVar49 = lVar49 * 0x30;
              *(undefined4 *)(local_3d8._0_8_ + 0x10 + lVar49) = *(undefined4 *)(puVar25 + 2);
              uVar3 = puVar25[1];
              *(undefined8 *)(local_3d8._0_8_ + lVar49) = *puVar25;
              ((undefined8 *)(local_3d8._0_8_ + lVar49))[1] = uVar3;
              lVar2 = puVar25[3];
              *(longlong *)(local_3d8._0_8_ + 0x18 + lVar49) = lVar2;
              if (lVar2 != 0) {
                LOCK();
                *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
                UNLOCK();
              }
              uVar3 = puVar25[4];
              *(undefined8 *)(local_3d8._0_8_ + lVar49 + 0x25) =
                   *(undefined8 *)((longlong)puVar25 + 0x25);
              *(undefined8 *)(local_3d8._0_8_ + lVar49 + 0x20) = uVar3;
            }
            uVar16 = uVar16 + iVar39 * iVar50;
          }
          lVar45 = lVar45 + 0x30;
        } while (lVar17 * 0x30 != lVar45);
      }
    }
    if ((DAT_14ca414f0 == (int)DAT_14c967818) && (DAT_14ca414f4 == DAT_14c967818._4_4_)) {
      uVar47 = 1;
      if (1 < (uint)(longlong)SQRT((float)uVar16)) {
        uVar47 = (uint)(longlong)SQRT((float)uVar16);
      }
      uVar18 = (ulonglong)(uVar47 - 1) * 2 + 1;
      lVar19 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      lVar19 = 0x100000001 << ((byte)lVar19 & 0x3f);
      iVar39 = (int)lVar19;
      if ((int)local_430 < iVar39) {
        iVar39 = (int)local_430;
      }
      iVar50 = (int)((ulonglong)lVar19 >> 0x20);
      if ((int)local_430 < iVar50) {
        iVar50 = (int)local_430;
      }
      _DAT_14ca414f0 = CONCAT44(iVar50,iVar39);
    }
    uVar53 = local_3b8._8_4_;
    lVar19 = (longlong)(int)local_3b8._8_4_;
    if (1 < lVar19) {
      uVar3 = local_3b8._0_8_;
      memset(local_398,0,0x2f0);
      stack0xfffffffffffffc60 = lVar19 * 0x30 + uVar3 + -0x30;
      local_3a8._0_8_ = uVar3;
      fVar54 = logf((float)(int)uVar53);
      local_398._0_4_ = (int)(longlong)(fVar54 + fVar54);
      plVar23 = (longlong *)local_3a8;
      do {
        plVar20 = (longlong *)*plVar23;
        plVar33 = (longlong *)plVar23[1];
        iVar39 = (int)plVar23[2];
        iVar50 = (int)((ulonglong)((longlong)plVar33 - (longlong)plVar20) >> 4) * -0x55555555;
        uVar16 = iVar50 + 1;
        plVar30 = plVar20;
        plVar26 = plVar20;
        plVar22 = plVar33;
        if (iVar39 != 0) {
LAB_142f80a86:
          if (8 < (int)uVar16) {
            uVar18 = (ulonglong)(uVar16 >> 1);
            lVar19 = plVar30[uVar18 * 6];
            lVar17 = (plVar30 + uVar18 * 6)[1];
            lVar42 = plVar30[uVar18 * 6 + 2];
            lVar45 = (plVar30 + uVar18 * 6 + 2)[1];
            lVar49 = plVar30[uVar18 * 6 + 4];
            lVar2 = (plVar30 + uVar18 * 6 + 4)[1];
            lVar4 = *plVar30;
            lVar5 = plVar30[1];
            lVar6 = plVar30[2];
            lVar7 = plVar30[3];
            lVar8 = plVar30[5];
            plVar30[uVar18 * 6 + 4] = plVar30[4];
            (plVar30 + uVar18 * 6 + 4)[1] = lVar8;
            plVar30[uVar18 * 6 + 2] = lVar6;
            (plVar30 + uVar18 * 6 + 2)[1] = lVar7;
            plVar30[uVar18 * 6] = lVar4;
            (plVar30 + uVar18 * 6)[1] = lVar5;
            plVar30[4] = lVar49;
            plVar30[5] = lVar2;
            plVar30[2] = lVar42;
            plVar30[3] = lVar45;
            *plVar30 = lVar19;
            plVar30[1] = lVar17;
            plVar41 = plVar22 + 6;
            plVar26 = plVar30;
            do {
              plVar15 = plVar26 + 6;
              plVar38 = plVar26 + 6;
              do {
                plVar26 = plVar38;
                plVar48 = plVar15;
                if (plVar22 < plVar26) break;
                plVar15 = plVar48 + 6;
                plVar38 = plVar26 + 6;
              } while ((int)plVar30[2] + *(int *)((longlong)plVar30 + 0xc) <=
                       (int)plVar26[2] + *(int *)((longlong)plVar26 + 0xc));
              plVar15 = plVar41 + -0xc;
              do {
                plVar38 = plVar41;
                plVar43 = plVar15;
                plVar41 = plVar38 + -6;
                if (plVar41 <= plVar30) break;
                plVar15 = plVar43 + -6;
              } while ((int)plVar38[-4] + *(int *)((longlong)plVar38 + -0x24) <=
                       (int)plVar30[2] + *(int *)((longlong)plVar30 + 0xc));
              if (plVar41 < plVar26) goto LAB_142f80be9;
              lVar19 = *plVar26;
              lVar17 = plVar26[1];
              lVar42 = plVar26[2];
              lVar45 = plVar26[3];
              lVar49 = plVar26[4];
              lVar2 = plVar26[5];
              lVar4 = *plVar41;
              lVar5 = plVar38[-5];
              lVar6 = plVar38[-4];
              lVar7 = plVar38[-3];
              lVar8 = plVar38[-1];
              plVar26[4] = plVar38[-2];
              plVar26[5] = lVar8;
              plVar26[2] = lVar6;
              plVar26[3] = lVar7;
              *plVar26 = lVar4;
              plVar26[1] = lVar5;
              plVar38[-2] = lVar49;
              plVar38[-1] = lVar2;
              plVar38[-4] = lVar42;
              plVar38[-3] = lVar45;
              *plVar41 = lVar19;
              plVar38[-5] = lVar17;
            } while( true );
          }
          for (; plVar20 = plVar30, plVar33 = plVar30, plVar30 < plVar22; plVar22 = plVar22 + -6) {
            while (plVar26 = plVar20, plVar20 = plVar33 + 6, plVar20 <= plVar22) {
              piVar24 = (int *)((longlong)plVar33 + 0x3c);
              plVar33 = plVar20;
              if ((int)plVar26[2] + *(int *)((longlong)plVar26 + 0xc) <= (int)plVar20[2] + *piVar24)
              {
                plVar20 = plVar26;
              }
            }
            local_a8 = *plVar26;
            uStack_a0 = plVar26[1];
            auVar57 = *(undefined1 (*) [16])(plVar26 + 2);
            local_88 = plVar26[4];
            lStack_80 = plVar26[5];
            local_98 = *(undefined8 *)*(undefined1 (*) [16])(plVar26 + 2);
            lStack_90 = plVar26[3];
            lVar2 = local_a8;
            uVar18 = uStack_a0;
            lVar19 = *plVar22;
            lVar17 = plVar22[1];
            lVar42 = plVar22[2];
            lVar45 = plVar22[3];
            lVar49 = plVar22[5];
            plVar26[4] = plVar22[4];
            plVar26[5] = lVar49;
            plVar26[2] = lVar42;
            plVar26[3] = lVar45;
            *plVar26 = lVar19;
            plVar26[1] = lVar17;
            local_a8._4_4_ = (undefined4)((ulonglong)local_a8 >> 0x20);
            uStack_a0._4_4_ = (undefined4)(uStack_a0 >> 0x20);
            plVar22[4] = local_88;
            plVar22[5] = lStack_80;
            *(undefined1 (*) [16])(plVar22 + 2) = auVar57;
            *(undefined4 *)plVar22 = (undefined4)local_a8;
            *(undefined4 *)((longlong)plVar22 + 4) = local_a8._4_4_;
            *(undefined4 *)(plVar22 + 1) = (undefined4)uStack_a0;
            *(undefined4 *)((longlong)plVar22 + 0xc) = uStack_a0._4_4_;
            local_a8 = lVar2;
            uStack_a0 = uVar18;
          }
          goto LAB_142f810f0;
        }
LAB_142f80ce6:
        if (uVar16 != 0) {
          iVar39 = (iVar50 - (iVar50 + -1 >> 0x1f)) + -1 >> 1;
          iVar50 = iVar39;
joined_r0x000142f80d0d:
          do {
            iVar40 = iVar39 * 2 + 1;
            if (iVar40 < (int)uVar16) {
              iVar32 = iVar39 * 2 + 2;
              if ((iVar32 < (int)uVar16) &&
                 ((int)plVar26[(longlong)iVar32 * 6 + 2] +
                  *(int *)((longlong)plVar26 + (longlong)iVar32 * 0x30 + 0xc) <=
                  (int)plVar26[(longlong)iVar40 * 6 + 2] +
                  *(int *)((longlong)plVar26 + (longlong)iVar40 * 0x30 + 0xc))) {
                iVar40 = iVar32;
              }
              lVar19 = (longlong)iVar39;
              lVar17 = (longlong)iVar40;
              if ((int)plVar26[lVar17 * 6 + 2] + *(int *)((longlong)plVar26 + lVar17 * 0x30 + 0xc) <
                  (int)plVar26[lVar19 * 6 + 2] + *(int *)((longlong)plVar26 + lVar19 * 0x30 + 0xc))
              {
                plVar22 = plVar26 + lVar19 * 6;
                plVar20 = plVar26 + lVar17 * 6;
                local_a8 = *plVar22;
                uStack_a0 = plVar22[1];
                auVar57 = *(undefined1 (*) [16])(plVar22 + 2);
                local_88 = plVar22[4];
                lStack_80 = plVar22[5];
                local_98 = *(undefined8 *)*(undefined1 (*) [16])(plVar22 + 2);
                lStack_90 = plVar22[3];
                lVar2 = local_a8;
                uVar18 = uStack_a0;
                lVar19 = *plVar20;
                lVar17 = plVar20[1];
                lVar42 = plVar20[2];
                lVar45 = plVar20[3];
                lVar49 = plVar20[5];
                plVar22[4] = plVar20[4];
                plVar22[5] = lVar49;
                plVar22[2] = lVar42;
                plVar22[3] = lVar45;
                *plVar22 = lVar19;
                plVar22[1] = lVar17;
                local_a8._4_4_ = (undefined4)((ulonglong)local_a8 >> 0x20);
                uStack_a0._4_4_ = (undefined4)(uStack_a0 >> 0x20);
                plVar20[4] = local_88;
                plVar20[5] = lStack_80;
                *(undefined1 (*) [16])(plVar20 + 2) = auVar57;
                *(undefined4 *)plVar20 = (undefined4)local_a8;
                *(undefined4 *)((longlong)plVar20 + 4) = local_a8._4_4_;
                *(undefined4 *)(plVar20 + 1) = (undefined4)uStack_a0;
                *(undefined4 *)((longlong)plVar20 + 0xc) = uStack_a0._4_4_;
                local_a8 = lVar2;
                uStack_a0 = uVar18;
                iVar39 = iVar40;
                goto joined_r0x000142f80d0d;
              }
            }
            bVar51 = iVar50 != 0;
            iVar39 = iVar50 + -1;
            iVar50 = iVar39;
          } while (bVar51);
          if (1 < (int)uVar16) {
            uVar36 = (ulonglong)uVar16 - 1;
            local_a8 = *plVar26;
            uStack_a0 = plVar26[1];
            auVar57 = *(undefined1 (*) [16])(plVar26 + 2);
            local_88 = plVar26[4];
            lStack_80 = plVar26[5];
            local_98 = *(undefined8 *)*(undefined1 (*) [16])(plVar26 + 2);
            lStack_90 = plVar26[3];
            lVar2 = local_a8;
            uVar18 = uStack_a0;
            lVar19 = plVar26[uVar36 * 6];
            lVar17 = (plVar26 + uVar36 * 6)[1];
            lVar42 = plVar26[uVar36 * 6 + 2];
            lVar45 = (plVar26 + uVar36 * 6 + 2)[1];
            lVar49 = (plVar26 + uVar36 * 6 + 4)[1];
            plVar26[4] = plVar26[uVar36 * 6 + 4];
            plVar26[5] = lVar49;
            plVar26[2] = lVar42;
            plVar26[3] = lVar45;
            *plVar26 = lVar19;
            plVar26[1] = lVar17;
            local_a8._4_4_ = (undefined4)((ulonglong)local_a8 >> 0x20);
            uStack_a0._4_4_ = (undefined4)(uStack_a0 >> 0x20);
            plVar26[uVar36 * 6 + 4] = local_88;
            (plVar26 + uVar36 * 6 + 4)[1] = lStack_80;
            *(undefined1 (*) [16])(plVar26 + uVar36 * 6 + 2) = auVar57;
            plVar22 = plVar26 + uVar36 * 6;
            *(undefined4 *)plVar22 = (undefined4)local_a8;
            *(undefined4 *)((longlong)plVar22 + 4) = local_a8._4_4_;
            *(undefined4 *)(plVar22 + 1) = (undefined4)uStack_a0;
            *(undefined4 *)((longlong)plVar22 + 0xc) = uStack_a0._4_4_;
            local_a8 = lVar2;
            uStack_a0 = uVar18;
            if (uVar16 != 2) {
              do {
                iVar39 = 0;
                iVar40 = 1;
                iVar50 = 0;
                do {
                  lVar19 = (longlong)(iVar39 + 2);
                  iVar32 = iVar40;
                  if ((lVar19 < (longlong)uVar36) &&
                     ((int)plVar26[lVar19 * 6 + 2] +
                      *(int *)((longlong)plVar26 + lVar19 * 0x30 + 0xc) <=
                      (int)plVar26[(longlong)iVar40 * 6 + 2] +
                      *(int *)((longlong)plVar26 + (longlong)iVar40 * 0x30 + 0xc))) {
                    iVar32 = iVar39 + 2;
                  }
                  lVar19 = (longlong)iVar50;
                  lVar17 = (longlong)iVar32;
                  if ((int)plVar26[lVar19 * 6 + 2] +
                      *(int *)((longlong)plVar26 + lVar19 * 0x30 + 0xc) <=
                      (int)plVar26[lVar17 * 6 + 2] +
                      *(int *)((longlong)plVar26 + lVar17 * 0x30 + 0xc)) break;
                  plVar20 = plVar26 + lVar19 * 6;
                  plVar22 = plVar26 + lVar17 * 6;
                  lVar19 = *plVar20;
                  lVar17 = plVar20[1];
                  lVar42 = plVar20[2];
                  lVar45 = plVar20[3];
                  lVar49 = plVar20[4];
                  lVar2 = plVar20[5];
                  lVar4 = *plVar22;
                  lVar5 = plVar22[1];
                  lVar6 = plVar22[2];
                  lVar7 = plVar22[3];
                  lVar8 = plVar22[5];
                  plVar20[4] = plVar22[4];
                  plVar20[5] = lVar8;
                  plVar20[2] = lVar6;
                  plVar20[3] = lVar7;
                  *plVar20 = lVar4;
                  plVar20[1] = lVar5;
                  plVar22[4] = lVar49;
                  plVar22[5] = lVar2;
                  plVar22[2] = lVar42;
                  plVar22[3] = lVar45;
                  *plVar22 = lVar19;
                  plVar22[1] = lVar17;
                  iVar39 = iVar32 * 2;
                  iVar40 = iVar32 * 2 + 1;
                  iVar50 = iVar32;
                } while ((longlong)iVar40 < (longlong)uVar36);
                uVar18 = uVar36 - 1;
                local_a8 = *plVar26;
                uStack_a0 = plVar26[1];
                auVar57 = *(undefined1 (*) [16])(plVar26 + 2);
                local_88 = plVar26[4];
                lStack_80 = plVar26[5];
                local_98 = *(undefined8 *)*(undefined1 (*) [16])(plVar26 + 2);
                lStack_90 = plVar26[3];
                lVar2 = local_a8;
                uVar14 = uStack_a0;
                lVar19 = plVar26[uVar18 * 6];
                lVar17 = (plVar26 + uVar18 * 6)[1];
                lVar42 = plVar26[uVar18 * 6 + 2];
                lVar45 = (plVar26 + uVar18 * 6 + 2)[1];
                lVar49 = (plVar26 + uVar18 * 6 + 4)[1];
                plVar26[4] = plVar26[uVar18 * 6 + 4];
                plVar26[5] = lVar49;
                plVar26[2] = lVar42;
                plVar26[3] = lVar45;
                *plVar26 = lVar19;
                plVar26[1] = lVar17;
                local_a8._4_4_ = (undefined4)((ulonglong)local_a8 >> 0x20);
                uStack_a0._4_4_ = (undefined4)(uStack_a0 >> 0x20);
                plVar26[uVar18 * 6 + 4] = local_88;
                (plVar26 + uVar18 * 6 + 4)[1] = lStack_80;
                *(undefined1 (*) [16])(plVar26 + uVar18 * 6 + 2) = auVar57;
                plVar22 = plVar26 + uVar18 * 6;
                *(undefined4 *)plVar22 = (undefined4)local_a8;
                *(undefined4 *)((longlong)plVar22 + 4) = local_a8._4_4_;
                *(undefined4 *)(plVar22 + 1) = (undefined4)uStack_a0;
                *(undefined4 *)((longlong)plVar22 + 0xc) = uStack_a0._4_4_;
                bVar51 = 2 < uVar36;
                uVar36 = uVar18;
                local_a8 = lVar2;
                uStack_a0 = uVar14;
              } while (bVar51);
            }
          }
        }
LAB_142f810f0:
        plVar23 = plVar23 + -3;
      } while (local_3a8 <= plVar23);
    }
    uVar53 = local_3d8._8_4_;
    lVar19 = (longlong)(int)local_3d8._8_4_;
    uVar3 = local_3d8._0_8_;
    pauVar31 = (undefined1 (*) [16])local_3d8._0_8_;
    if (1 < lVar19) {
      memset(local_398,0,0x2f0);
      stack0xfffffffffffffc60 = (longlong)(uVar3 + (lVar19 * 3 + -3) * 0x10);
      local_3a8._0_8_ = uVar3;
      fVar54 = logf((float)(int)uVar53);
      local_398._0_4_ = (int)(longlong)(fVar54 + fVar54);
      plVar23 = (longlong *)local_3a8;
      do {
        plVar20 = (longlong *)*plVar23;
        plVar33 = (longlong *)plVar23[1];
        iVar39 = (int)plVar23[2];
        iVar50 = (int)((ulonglong)((longlong)plVar33 - (longlong)plVar20) >> 4) * -0x55555555;
        uVar16 = iVar50 + 1;
        plVar30 = plVar20;
        plVar26 = plVar20;
        plVar22 = plVar33;
        if (iVar39 != 0) {
LAB_142f81198:
          if (8 < (int)uVar16) {
            uVar18 = (ulonglong)(uVar16 >> 1);
            lVar19 = plVar30[uVar18 * 6];
            lVar17 = (plVar30 + uVar18 * 6)[1];
            lVar42 = plVar30[uVar18 * 6 + 2];
            lVar45 = (plVar30 + uVar18 * 6 + 2)[1];
            lVar49 = plVar30[uVar18 * 6 + 4];
            lVar2 = (plVar30 + uVar18 * 6 + 4)[1];
            lVar4 = *plVar30;
            lVar5 = plVar30[1];
            lVar6 = plVar30[2];
            lVar7 = plVar30[3];
            lVar8 = plVar30[5];
            plVar30[uVar18 * 6 + 4] = plVar30[4];
            (plVar30 + uVar18 * 6 + 4)[1] = lVar8;
            plVar30[uVar18 * 6 + 2] = lVar6;
            (plVar30 + uVar18 * 6 + 2)[1] = lVar7;
            plVar30[uVar18 * 6] = lVar4;
            (plVar30 + uVar18 * 6)[1] = lVar5;
            plVar30[4] = lVar49;
            plVar30[5] = lVar2;
            plVar30[2] = lVar42;
            plVar30[3] = lVar45;
            *plVar30 = lVar19;
            plVar30[1] = lVar17;
            plVar41 = plVar22 + 6;
            plVar26 = plVar30;
            do {
              plVar15 = plVar26 + 6;
              plVar38 = plVar26 + 6;
              do {
                plVar26 = plVar38;
                plVar48 = plVar15;
                if (plVar22 < plVar26) break;
                plVar15 = plVar48 + 6;
                plVar38 = plVar26 + 6;
              } while ((int)plVar30[2] + *(int *)((longlong)plVar30 + 0xc) <=
                       (int)plVar26[2] + *(int *)((longlong)plVar26 + 0xc));
              plVar15 = plVar41 + -0xc;
              do {
                plVar38 = plVar41;
                plVar43 = plVar15;
                plVar41 = plVar38 + -6;
                if (plVar41 <= plVar30) break;
                plVar15 = plVar43 + -6;
              } while ((int)plVar38[-4] + *(int *)((longlong)plVar38 + -0x24) <=
                       (int)plVar30[2] + *(int *)((longlong)plVar30 + 0xc));
              if (plVar41 < plVar26) goto LAB_142f812fb;
              lVar19 = *plVar26;
              lVar17 = plVar26[1];
              lVar42 = plVar26[2];
              lVar45 = plVar26[3];
              lVar49 = plVar26[4];
              lVar2 = plVar26[5];
              lVar4 = *plVar41;
              lVar5 = plVar38[-5];
              lVar6 = plVar38[-4];
              lVar7 = plVar38[-3];
              lVar8 = plVar38[-1];
              plVar26[4] = plVar38[-2];
              plVar26[5] = lVar8;
              plVar26[2] = lVar6;
              plVar26[3] = lVar7;
              *plVar26 = lVar4;
              plVar26[1] = lVar5;
              plVar38[-2] = lVar49;
              plVar38[-1] = lVar2;
              plVar38[-4] = lVar42;
              plVar38[-3] = lVar45;
              *plVar41 = lVar19;
              plVar38[-5] = lVar17;
            } while( true );
          }
          for (; plVar20 = plVar30, plVar33 = plVar30, plVar30 < plVar22; plVar22 = plVar22 + -6) {
            while (plVar26 = plVar20, plVar20 = plVar33 + 6, plVar20 <= plVar22) {
              piVar24 = (int *)((longlong)plVar33 + 0x3c);
              plVar33 = plVar20;
              if ((int)plVar26[2] + *(int *)((longlong)plVar26 + 0xc) <= (int)plVar20[2] + *piVar24)
              {
                plVar20 = plVar26;
              }
            }
            local_a8 = *plVar26;
            uStack_a0 = plVar26[1];
            auVar57 = *(undefined1 (*) [16])(plVar26 + 2);
            local_88 = plVar26[4];
            lStack_80 = plVar26[5];
            local_98 = *(undefined8 *)*(undefined1 (*) [16])(plVar26 + 2);
            lStack_90 = plVar26[3];
            lVar2 = local_a8;
            uVar18 = uStack_a0;
            lVar19 = *plVar22;
            lVar17 = plVar22[1];
            lVar42 = plVar22[2];
            lVar45 = plVar22[3];
            lVar49 = plVar22[5];
            plVar26[4] = plVar22[4];
            plVar26[5] = lVar49;
            plVar26[2] = lVar42;
            plVar26[3] = lVar45;
            *plVar26 = lVar19;
            plVar26[1] = lVar17;
            local_a8._4_4_ = (undefined4)((ulonglong)local_a8 >> 0x20);
            uStack_a0._4_4_ = (undefined4)(uStack_a0 >> 0x20);
            plVar22[4] = local_88;
            plVar22[5] = lStack_80;
            *(undefined1 (*) [16])(plVar22 + 2) = auVar57;
            *(undefined4 *)plVar22 = (undefined4)local_a8;
            *(undefined4 *)((longlong)plVar22 + 4) = local_a8._4_4_;
            *(undefined4 *)(plVar22 + 1) = (undefined4)uStack_a0;
            *(undefined4 *)((longlong)plVar22 + 0xc) = uStack_a0._4_4_;
            local_a8 = lVar2;
            uStack_a0 = uVar18;
          }
          goto LAB_142f81802;
        }
LAB_142f813f8:
        if (uVar16 != 0) {
          iVar39 = (iVar50 - (iVar50 + -1 >> 0x1f)) + -1 >> 1;
          iVar50 = iVar39;
joined_r0x000142f8141f:
          do {
            iVar40 = iVar39 * 2 + 1;
            if (iVar40 < (int)uVar16) {
              iVar32 = iVar39 * 2 + 2;
              if ((iVar32 < (int)uVar16) &&
                 ((int)plVar26[(longlong)iVar32 * 6 + 2] +
                  *(int *)((longlong)plVar26 + (longlong)iVar32 * 0x30 + 0xc) <=
                  (int)plVar26[(longlong)iVar40 * 6 + 2] +
                  *(int *)((longlong)plVar26 + (longlong)iVar40 * 0x30 + 0xc))) {
                iVar40 = iVar32;
              }
              lVar19 = (longlong)iVar39;
              lVar17 = (longlong)iVar40;
              if ((int)plVar26[lVar17 * 6 + 2] + *(int *)((longlong)plVar26 + lVar17 * 0x30 + 0xc) <
                  (int)plVar26[lVar19 * 6 + 2] + *(int *)((longlong)plVar26 + lVar19 * 0x30 + 0xc))
              {
                plVar22 = plVar26 + lVar19 * 6;
                plVar20 = plVar26 + lVar17 * 6;
                local_a8 = *plVar22;
                uStack_a0 = plVar22[1];
                auVar57 = *(undefined1 (*) [16])(plVar22 + 2);
                local_88 = plVar22[4];
                lStack_80 = plVar22[5];
                local_98 = *(undefined8 *)*(undefined1 (*) [16])(plVar22 + 2);
                lStack_90 = plVar22[3];
                lVar2 = local_a8;
                uVar18 = uStack_a0;
                lVar19 = *plVar20;
                lVar17 = plVar20[1];
                lVar42 = plVar20[2];
                lVar45 = plVar20[3];
                lVar49 = plVar20[5];
                plVar22[4] = plVar20[4];
                plVar22[5] = lVar49;
                plVar22[2] = lVar42;
                plVar22[3] = lVar45;
                *plVar22 = lVar19;
                plVar22[1] = lVar17;
                local_a8._4_4_ = (undefined4)((ulonglong)local_a8 >> 0x20);
                uStack_a0._4_4_ = (undefined4)(uStack_a0 >> 0x20);
                plVar20[4] = local_88;
                plVar20[5] = lStack_80;
                *(undefined1 (*) [16])(plVar20 + 2) = auVar57;
                *(undefined4 *)plVar20 = (undefined4)local_a8;
                *(undefined4 *)((longlong)plVar20 + 4) = local_a8._4_4_;
                *(undefined4 *)(plVar20 + 1) = (undefined4)uStack_a0;
                *(undefined4 *)((longlong)plVar20 + 0xc) = uStack_a0._4_4_;
                local_a8 = lVar2;
                uStack_a0 = uVar18;
                iVar39 = iVar40;
                goto joined_r0x000142f8141f;
              }
            }
            bVar51 = iVar50 != 0;
            iVar39 = iVar50 + -1;
            iVar50 = iVar39;
          } while (bVar51);
          if (1 < (int)uVar16) {
            uVar36 = (ulonglong)uVar16 - 1;
            local_a8 = *plVar26;
            uStack_a0 = plVar26[1];
            auVar57 = *(undefined1 (*) [16])(plVar26 + 2);
            local_88 = plVar26[4];
            lStack_80 = plVar26[5];
            local_98 = *(undefined8 *)*(undefined1 (*) [16])(plVar26 + 2);
            lStack_90 = plVar26[3];
            lVar2 = local_a8;
            uVar18 = uStack_a0;
            lVar19 = plVar26[uVar36 * 6];
            lVar17 = (plVar26 + uVar36 * 6)[1];
            lVar42 = plVar26[uVar36 * 6 + 2];
            lVar45 = (plVar26 + uVar36 * 6 + 2)[1];
            lVar49 = (plVar26 + uVar36 * 6 + 4)[1];
            plVar26[4] = plVar26[uVar36 * 6 + 4];
            plVar26[5] = lVar49;
            plVar26[2] = lVar42;
            plVar26[3] = lVar45;
            *plVar26 = lVar19;
            plVar26[1] = lVar17;
            local_a8._4_4_ = (undefined4)((ulonglong)local_a8 >> 0x20);
            uStack_a0._4_4_ = (undefined4)(uStack_a0 >> 0x20);
            plVar26[uVar36 * 6 + 4] = local_88;
            (plVar26 + uVar36 * 6 + 4)[1] = lStack_80;
            *(undefined1 (*) [16])(plVar26 + uVar36 * 6 + 2) = auVar57;
            plVar22 = plVar26 + uVar36 * 6;
            *(undefined4 *)plVar22 = (undefined4)local_a8;
            *(undefined4 *)((longlong)plVar22 + 4) = local_a8._4_4_;
            *(undefined4 *)(plVar22 + 1) = (undefined4)uStack_a0;
            *(undefined4 *)((longlong)plVar22 + 0xc) = uStack_a0._4_4_;
            local_a8 = lVar2;
            uStack_a0 = uVar18;
            if (uVar16 != 2) {
              do {
                iVar39 = 0;
                iVar40 = 1;
                iVar50 = 0;
                do {
                  lVar19 = (longlong)(iVar39 + 2);
                  iVar32 = iVar40;
                  if ((lVar19 < (longlong)uVar36) &&
                     ((int)plVar26[lVar19 * 6 + 2] +
                      *(int *)((longlong)plVar26 + lVar19 * 0x30 + 0xc) <=
                      (int)plVar26[(longlong)iVar40 * 6 + 2] +
                      *(int *)((longlong)plVar26 + (longlong)iVar40 * 0x30 + 0xc))) {
                    iVar32 = iVar39 + 2;
                  }
                  lVar19 = (longlong)iVar50;
                  lVar17 = (longlong)iVar32;
                  if ((int)plVar26[lVar19 * 6 + 2] +
                      *(int *)((longlong)plVar26 + lVar19 * 0x30 + 0xc) <=
                      (int)plVar26[lVar17 * 6 + 2] +
                      *(int *)((longlong)plVar26 + lVar17 * 0x30 + 0xc)) break;
                  plVar20 = plVar26 + lVar19 * 6;
                  plVar22 = plVar26 + lVar17 * 6;
                  lVar19 = *plVar20;
                  lVar17 = plVar20[1];
                  lVar42 = plVar20[2];
                  lVar45 = plVar20[3];
                  lVar49 = plVar20[4];
                  lVar2 = plVar20[5];
                  lVar4 = *plVar22;
                  lVar5 = plVar22[1];
                  lVar6 = plVar22[2];
                  lVar7 = plVar22[3];
                  lVar8 = plVar22[5];
                  plVar20[4] = plVar22[4];
                  plVar20[5] = lVar8;
                  plVar20[2] = lVar6;
                  plVar20[3] = lVar7;
                  *plVar20 = lVar4;
                  plVar20[1] = lVar5;
                  plVar22[4] = lVar49;
                  plVar22[5] = lVar2;
                  plVar22[2] = lVar42;
                  plVar22[3] = lVar45;
                  *plVar22 = lVar19;
                  plVar22[1] = lVar17;
                  iVar39 = iVar32 * 2;
                  iVar40 = iVar32 * 2 + 1;
                  iVar50 = iVar32;
                } while ((longlong)iVar40 < (longlong)uVar36);
                uVar18 = uVar36 - 1;
                local_a8 = *plVar26;
                uStack_a0 = plVar26[1];
                auVar57 = *(undefined1 (*) [16])(plVar26 + 2);
                local_88 = plVar26[4];
                lStack_80 = plVar26[5];
                local_98 = *(undefined8 *)*(undefined1 (*) [16])(plVar26 + 2);
                lStack_90 = plVar26[3];
                lVar2 = local_a8;
                uVar14 = uStack_a0;
                lVar19 = plVar26[uVar18 * 6];
                lVar17 = (plVar26 + uVar18 * 6)[1];
                lVar42 = plVar26[uVar18 * 6 + 2];
                lVar45 = (plVar26 + uVar18 * 6 + 2)[1];
                lVar49 = (plVar26 + uVar18 * 6 + 4)[1];
                plVar26[4] = plVar26[uVar18 * 6 + 4];
                plVar26[5] = lVar49;
                plVar26[2] = lVar42;
                plVar26[3] = lVar45;
                *plVar26 = lVar19;
                plVar26[1] = lVar17;
                local_a8._4_4_ = (undefined4)((ulonglong)local_a8 >> 0x20);
                uStack_a0._4_4_ = (undefined4)(uStack_a0 >> 0x20);
                plVar26[uVar18 * 6 + 4] = local_88;
                (plVar26 + uVar18 * 6 + 4)[1] = lStack_80;
                *(undefined1 (*) [16])(plVar26 + uVar18 * 6 + 2) = auVar57;
                plVar22 = plVar26 + uVar18 * 6;
                *(undefined4 *)plVar22 = (undefined4)local_a8;
                *(undefined4 *)((longlong)plVar22 + 4) = local_a8._4_4_;
                *(undefined4 *)(plVar22 + 1) = (undefined4)uStack_a0;
                *(undefined4 *)((longlong)plVar22 + 0xc) = uStack_a0._4_4_;
                bVar51 = 2 < uVar36;
                uVar36 = uVar18;
                local_a8 = lVar2;
                uStack_a0 = uVar14;
              } while (bVar51);
            }
          }
        }
LAB_142f81802:
        plVar23 = plVar23 + -3;
      } while (local_3a8 <= plVar23);
      pauVar31 = (undefined1 (*) [16])local_3d8._0_8_;
    }
    if (local_3d8._8_4_ != 0) {
      pauVar44 = pauVar31 + (longlong)(int)local_3d8._8_4_ * 3;
      bVar51 = false;
      do {
        local_398._0_4_ = *(undefined4 *)pauVar31[1];
        _local_3a8 = *pauVar31;
        lVar19 = *(longlong *)(pauVar31[1] + 8);
        local_398._8_8_ = lVar19;
        if (lVar19 != 0) {
          LOCK();
          *(int *)(lVar19 + 8) = *(int *)(lVar19 + 8) + 1;
          UNLOCK();
        }
        auVar9._8_3_ = local_388._13_3_;
        auVar9._0_8_ = *(undefined8 *)(pauVar31[2] + 5);
        local_388._8_8_ = auVar9._3_8_;
        local_388._0_8_ = *(undefined8 *)pauVar31[2];
        bVar28 = FUN_142fafda3(local_3a8);
        bVar52 = true;
        if (bVar28 != 0) {
          uVar53 = local_3e8._8_4_;
          lVar19 = (longlong)(int)local_3e8._8_4_;
          uVar16 = local_3e8._8_4_ + 1;
          local_3e8._8_4_ = uVar16;
          if ((uint)local_3e8._12_4_ < uVar16) {
            FUN_1472cca80(local_3e8,uVar53);
          }
          lVar19 = lVar19 * 0x30;
          *(undefined4 *)(local_3e8._0_8_ + 0x10 + lVar19) = local_398._0_4_;
          *(longlong *)(local_3e8._0_8_ + lVar19) = local_3a8._0_8_;
          ((longlong *)(local_3e8._0_8_ + lVar19))[1] = stack0xfffffffffffffc60;
          *(undefined8 *)(local_3e8._0_8_ + 0x18 + lVar19) = local_398._8_8_;
          if (local_398._8_8_ != 0) {
            LOCK();
            *(int *)(local_398._8_8_ + 8) = *(int *)(local_398._8_8_ + 8) + 1;
            UNLOCK();
          }
          uVar3 = local_388._0_8_;
          *(undefined8 *)(local_3e8._0_8_ + lVar19 + 0x25) = local_388._5_8_;
          *(undefined8 *)(local_3e8._0_8_ + lVar19 + 0x20) = uVar3;
          bVar52 = bVar51;
        }
        uVar3 = local_398._8_8_;
        if (local_398._8_8_ != 0) {
          LOCK();
          puVar1 = (uint *)(local_398._8_8_ + 8);
          uVar16 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar16 & 0x3fffffff) == 1) {
            puVar1 = (uint *)(local_398._8_8_ + 8);
            LOCK();
            uVar16 = *puVar1;
            *puVar1 = *puVar1 | 0x40000000;
            UNLOCK();
            if ((uVar16 >> 0x1e & 1) == 0) {
              bVar29 = *(byte *)(local_398._8_8_ + 0xd);
              plVar20 = (longlong *)FUN_14001cc68(0x10,8);
              plVar20[1] = uVar3;
              plVar23 = DAT_14ca843c0;
              plVar22 = DAT_14ca843c8;
              if ((bVar29 & 2) == 0) {
                do {
                  *plVar20 = (longlong)plVar23;
                  LOCK();
                  bVar51 = plVar23 != DAT_14ca843c0;
                  plVar22 = plVar20;
                  if (bVar51) {
                    plVar23 = DAT_14ca843c0;
                    plVar22 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar22;
                  UNLOCK();
                } while (bVar51);
              }
              else {
                do {
                  *plVar20 = (longlong)plVar22;
                  LOCK();
                  bVar51 = plVar22 != DAT_14ca843c8;
                  plVar23 = plVar20;
                  if (bVar51) {
                    plVar22 = DAT_14ca843c8;
                    plVar23 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar23;
                  UNLOCK();
                } while (bVar51);
              }
            }
          }
        }
        pauVar31 = pauVar31 + 3;
        bVar51 = bVar52;
      } while ((bVar28 & pauVar31 != pauVar44) != 0);
      if (bVar52) {
        iVar39 = local_3b8._8_4_;
        if ((int)local_3b8._8_4_ < 0) goto LAB_142f82d35;
        if ((int)local_3f8._12_4_ < (int)local_3b8._8_4_) {
          FUN_1472cce3a(local_3f8);
        }
        FUN_1472cc9d4(local_3f8);
        FUN_1472c518c(local_3e8,0,0);
        local_450 = _DAT_14ca414f0;
        iVar39 = 0;
        while( true ) {
          local_3a8._8_4_ = 0;
          local_3a8._0_8_ = local_450;
          local_388 = ZEXT816(0);
          local_398 = ZEXT816(0);
          FUN_1472c52f6(local_3a8);
          if (local_388._0_8_ != 0) {
            FUN_1400020a8();
          }
          if (local_398._0_8_ != 0) {
            FUN_1400020a8();
          }
          _DAT_14ca414f0 = local_450;
          _DAT_14ca414f8 = iVar39;
          local_434 = iVar39;
          if ((longlong)(int)local_3b8._8_4_ == 0) break;
          pauVar44 = (undefined1 (*) [16])
                     (local_3b8._0_8_ + (longlong)(int)local_3b8._8_4_ * 3 * 0x10);
          bVar51 = true;
          pauVar31 = (undefined1 (*) [16])local_3b8._0_8_;
          do {
            local_398._0_4_ = *(undefined4 *)pauVar31[1];
            _local_3a8 = *pauVar31;
            lVar19 = *(longlong *)(pauVar31[1] + 8);
            local_398._8_8_ = lVar19;
            if (lVar19 != 0) {
              LOCK();
              *(int *)(lVar19 + 8) = *(int *)(lVar19 + 8) + 1;
              UNLOCK();
            }
            auVar10._8_3_ = local_388._13_3_;
            auVar10._0_8_ = *(undefined8 *)(pauVar31[2] + 5);
            local_388._8_8_ = auVar10._3_8_;
            local_388._0_8_ = *(undefined8 *)pauVar31[2];
            bVar28 = FUN_142fafda3(local_3a8);
            if (bVar28 == 0) {
              bVar51 = false;
            }
            else if ((*(int *)(*pauVar31 + 4) == (int)DAT_14ca41490) &&
                    (*(int *)(*pauVar31 + 8) == DAT_14ca41490._4_4_)) {
              uVar53 = local_3e8._8_4_;
              lVar19 = (longlong)(int)local_3e8._8_4_;
              uVar16 = local_3e8._8_4_ + 1;
              local_3e8._8_4_ = uVar16;
              if ((uint)local_3e8._12_4_ < uVar16) {
                FUN_1472cca80(local_3e8,uVar53);
              }
              lVar19 = lVar19 * 0x30;
              *(undefined4 *)(local_3e8._0_8_ + 0x10 + lVar19) = local_398._0_4_;
              *(longlong *)(local_3e8._0_8_ + lVar19) = local_3a8._0_8_;
              ((longlong *)(local_3e8._0_8_ + lVar19))[1] = stack0xfffffffffffffc60;
              *(undefined8 *)(local_3e8._0_8_ + 0x18 + lVar19) = local_398._8_8_;
              if (local_398._8_8_ != 0) {
                LOCK();
                *(int *)(local_398._8_8_ + 8) = *(int *)(local_398._8_8_ + 8) + 1;
                UNLOCK();
              }
              uVar3 = local_388._0_8_;
              *(undefined8 *)(local_3e8._0_8_ + lVar19 + 0x25) = local_388._5_8_;
              *(undefined8 *)(local_3e8._0_8_ + lVar19 + 0x20) = uVar3;
            }
            else {
              puVar21 = (undefined4 *)FUN_1472cca3c(local_3f8);
              *puVar21 = *(undefined4 *)*pauVar31;
              *(undefined8 *)(puVar21 + 5) = *(undefined8 *)(*pauVar31 + 0xc);
              *(undefined8 *)(puVar21 + 1) = *(undefined8 *)(*pauVar31 + 4);
              *(undefined8 *)(puVar21 + 3) = local_3a8._4_8_;
              lVar19 = *(longlong *)(pauVar31[1] + 8);
              lVar17 = *(longlong *)(puVar21 + 8);
              if (lVar17 != lVar19) {
                *(longlong *)(puVar21 + 8) = lVar19;
                if (lVar19 != 0) {
                  LOCK();
                  *(int *)(lVar19 + 8) = *(int *)(lVar19 + 8) + 1;
                  UNLOCK();
                }
                if (lVar17 != 0) {
                  LOCK();
                  puVar1 = (uint *)(lVar17 + 8);
                  uVar16 = *puVar1;
                  *puVar1 = *puVar1 - 1;
                  UNLOCK();
                  if ((uVar16 & 0x3fffffff) == 1) {
                    puVar1 = (uint *)(lVar17 + 8);
                    LOCK();
                    uVar16 = *puVar1;
                    *puVar1 = *puVar1 | 0x40000000;
                    UNLOCK();
                    if ((uVar16 >> 0x1e & 1) == 0) {
                      bVar29 = *(byte *)(lVar17 + 0xd);
                      plVar20 = (longlong *)FUN_14001cc68(0x10,8);
                      plVar20[1] = lVar17;
                      plVar23 = DAT_14ca843c0;
                      plVar22 = DAT_14ca843c8;
                      if ((bVar29 & 2) == 0) {
                        do {
                          *plVar20 = (longlong)plVar23;
                          LOCK();
                          bVar52 = plVar23 != DAT_14ca843c0;
                          plVar22 = plVar20;
                          if (bVar52) {
                            plVar23 = DAT_14ca843c0;
                            plVar22 = DAT_14ca843c0;
                          }
                          DAT_14ca843c0 = plVar22;
                          UNLOCK();
                        } while (bVar52);
                      }
                      else {
                        do {
                          *plVar20 = (longlong)plVar22;
                          LOCK();
                          bVar52 = plVar22 != DAT_14ca843c8;
                          plVar23 = plVar20;
                          if (bVar52) {
                            plVar22 = DAT_14ca843c8;
                            plVar23 = DAT_14ca843c8;
                          }
                          DAT_14ca843c8 = plVar23;
                          UNLOCK();
                        } while (bVar52);
                      }
                    }
                  }
                }
              }
            }
            uVar3 = local_398._8_8_;
            if (local_398._8_8_ != 0) {
              LOCK();
              puVar1 = (uint *)(local_398._8_8_ + 8);
              uVar16 = *puVar1;
              *puVar1 = *puVar1 - 1;
              UNLOCK();
              if ((uVar16 & 0x3fffffff) == 1) {
                puVar1 = (uint *)(local_398._8_8_ + 8);
                LOCK();
                uVar16 = *puVar1;
                *puVar1 = *puVar1 | 0x40000000;
                UNLOCK();
                if ((uVar16 >> 0x1e & 1) == 0) {
                  bVar29 = *(byte *)(local_398._8_8_ + 0xd);
                  plVar20 = (longlong *)FUN_14001cc68(0x10,8);
                  plVar20[1] = uVar3;
                  plVar23 = DAT_14ca843c0;
                  plVar22 = DAT_14ca843c8;
                  if ((bVar29 & 2) == 0) {
                    do {
                      *plVar20 = (longlong)plVar23;
                      LOCK();
                      bVar52 = plVar23 != DAT_14ca843c0;
                      plVar22 = plVar20;
                      if (bVar52) {
                        plVar23 = DAT_14ca843c0;
                        plVar22 = DAT_14ca843c0;
                      }
                      DAT_14ca843c0 = plVar22;
                      UNLOCK();
                    } while (bVar52);
                  }
                  else {
                    do {
                      *plVar20 = (longlong)plVar22;
                      LOCK();
                      bVar52 = plVar22 != DAT_14ca843c8;
                      plVar23 = plVar20;
                      if (bVar52) {
                        plVar22 = DAT_14ca843c8;
                        plVar23 = DAT_14ca843c8;
                      }
                      DAT_14ca843c8 = plVar23;
                      UNLOCK();
                    } while (bVar52);
                  }
                }
              }
            }
            pauVar31 = pauVar31 + 3;
          } while ((bVar28 & pauVar31 != pauVar44) != 0);
          if (bVar51) break;
          if (((int)local_430 < DAT_14ca414f0 * 2) || ((int)local_430 < DAT_14ca414f4 * 2)) {
            iVar39 = local_434 + 1;
            lVar19 = (longlong)(int)local_3b8._8_4_;
            if (lVar19 != 0) {
              uVar3 = local_3b8._0_8_;
              uVar16 = 1 << ((byte)iVar39 & 0x1f);
              pauVar31 = (undefined1 (*) [16])(ulonglong)uVar16;
              lVar17 = 0;
              do {
                lVar42 = *(longlong *)(uVar3 + 0x18 + lVar17);
                if (lVar42 == 0) {
                  uVar27 = 0;
                }
                else {
                  uVar27 = *(undefined8 *)(lVar42 + 0x60);
                }
                FUN_1472c4c30(local_3a8,uVar27);
                *(ulonglong *)(uVar3 + 4 + lVar17) =
                     CONCAT44(DAT_14ca41490._4_4_,(int)DAT_14ca41490);
                uVar18 = (longlong)(int)(local_3a8._0_4_ + (uVar16 - 1)) / (longlong)(int)uVar16;
                lVar42 = (longlong)(int)(local_3a8._4_4_ + (uVar16 - 1)) / (longlong)(int)uVar16;
                uVar35 = (uint)uVar18;
                uVar37 = (uint)lVar42;
                uVar47 = uVar37;
                if ((int)uVar35 < (int)uVar37) {
                  uVar47 = uVar35;
                }
                iVar50 = 0x1f;
                if (uVar47 != 0) {
                  for (; uVar47 >> iVar50 == 0; iVar50 = iVar50 + -1) {
                  }
                }
                bVar28 = (char)iVar50 - 1;
                if (iVar50 == 0) {
                  bVar28 = 0;
                }
                if (uVar47 == 0) {
                  bVar28 = 0;
                }
                iVar50 = 1 << (bVar28 & 0x1f);
                *(ulonglong *)(uVar3 + 0x20 + lVar17) = (lVar42 << 0x20) + (uVar18 & 0xffffffff);
                *(ulonglong *)(uVar3 + 0xc + lVar17) =
                     CONCAT44((int)(iVar50 + uVar37 + -1) / iVar50 << (bVar28 & 0x1f),
                              (int)(iVar50 + uVar35 + -1) / iVar50 << (bVar28 & 0x1f));
                lVar17 = lVar17 + 0x30;
              } while (lVar19 * 0x30 != lVar17);
            }
          }
          else {
            local_450 = _DAT_14ca414f0 * 2 & 0xfffffffefffffffe;
            iVar39 = local_434;
          }
          FUN_1472cc9d4(local_3f8);
          FUN_1472c518c(local_3e8);
        }
      }
    }
    FUN_145ee550a(local_3d8._0_8_,local_3d8._8_4_);
    if (local_3d8._0_8_ != 0) {
      FUN_1400020a8();
    }
    FUN_145ee550a(local_3b8._0_8_,local_3b8._8_4_);
    lVar19 = local_440;
    uVar18 = CONCAT71((int7)((ulonglong)pauVar31 >> 8),local_448._0_1_);
    if (local_3b8._0_8_ != 0) {
      FUN_1400020a8();
    }
    uVar53 = 0;
    if (local_3e8._8_4_ != 0 || local_3f8._8_4_ != 0) {
      if (DAT_14ca414b0 == (longlong *)0x0) {
LAB_142f81fa3:
        uVar36 = FUN_142f82dc2(lVar19,uVar18 & 0xffffffff);
        bVar51 = true;
      }
      else {
        if (local_3f8._8_4_ == 0) {
          lVar17 = (**(code **)(*DAT_14ca414b0 + 0x10))(DAT_14ca414b0,0);
          if ((*(int *)(lVar17 + 0x2c) != DAT_14ca414f0) ||
             (*(int *)(lVar17 + 0x30) != DAT_14ca414f4)) goto LAB_142f81fa3;
        }
        bVar51 = false;
        uVar36 = FUN_14473c272(lVar19,&DAT_14ca414b0,0);
      }
      lVar19 = local_440;
      local_3d8._0_8_ = uVar36;
      if (0 < (int)local_3f8._8_4_) {
        local_450 = FUN_142f82dc2(local_440,uVar18 & 0xffffffff);
        bVar28 = *(byte *)(uVar36 + 0x90);
        uVar16 = (uint)bVar28;
        if (bVar28 != 0) {
          local_448 = (ulonglong *)(lVar19 + 0x70);
          local_408 = lVar19 + 0x98;
          local_420 = lVar19 + 0x198;
          local_410 = lVar19 + 0x168;
          uVar47 = 0;
          local_424 = (uint)bVar28;
          do {
            local_a8 = 0;
            uStack_a0 = 0;
            local_3b8 = ZEXT816(0);
            iVar39 = local_3f8._8_4_;
            if ((int)local_3f8._8_4_ < 0) goto LAB_142f82d35;
            bVar28 = (byte)uVar47;
            if (local_3f8._8_4_ != 0) {
              FUN_1472d049c(&local_a8);
              iVar39 = local_3f8._8_4_;
              if ((int)local_3f8._8_4_ < 0) goto LAB_142f82d35;
              if ((int)local_3b8._12_4_ < (int)local_3f8._8_4_) {
                FUN_1472d049c(local_3b8);
              }
              if (local_3f8._8_4_ != 0) {
                lVar19 = local_3f8._0_8_ + (longlong)(int)local_3f8._8_4_ * 0x28;
                iVar50 = 1 << (bVar28 & 0x1f);
                iVar39 = iVar50 + -1;
                lVar17 = local_3f8._0_8_;
                do {
                  if ((1 < *(int *)(lVar17 + 0x14) >> (bVar28 & 0x1f)) &&
                     (1 < *(int *)(lVar17 + 0x18) >> (bVar28 & 0x1f))) {
                    lVar49 = FUN_1472c5148(local_3b8);
                    *(ulonglong *)(lVar49 + 4) =
                         (longlong)(*(int *)(lVar17 + 0xc) + iVar39) / (longlong)iVar50 &
                         0xffffffffU |
                         (longlong)(*(int *)(lVar17 + 0x10) + iVar39) / (longlong)iVar50 << 0x20;
                    *(ulonglong *)(lVar49 + 0xc) =
                         (longlong)(*(int *)(lVar17 + 0x14) + iVar39) / (longlong)iVar50 &
                         0xffffffffU |
                         (longlong)(*(int *)(lVar17 + 0x18) + iVar39) / (longlong)iVar50 << 0x20;
                    lVar42 = *(longlong *)(lVar17 + 0x20);
                    lVar45 = *(longlong *)(lVar49 + 0x18);
                    if (lVar45 != lVar42) {
                      *(longlong *)(lVar49 + 0x18) = lVar42;
                      if (lVar42 != 0) {
                        LOCK();
                        *(int *)(lVar42 + 8) = *(int *)(lVar42 + 8) + 1;
                        UNLOCK();
                      }
                      if (lVar45 != 0) {
                        LOCK();
                        puVar1 = (uint *)(lVar45 + 8);
                        uVar35 = *puVar1;
                        *puVar1 = *puVar1 - 1;
                        UNLOCK();
                        if ((uVar35 & 0x3fffffff) == 1) {
                          puVar1 = (uint *)(lVar45 + 8);
                          LOCK();
                          uVar35 = *puVar1;
                          *puVar1 = *puVar1 | 0x40000000;
                          UNLOCK();
                          if ((uVar35 >> 0x1e & 1) == 0) {
                            bVar29 = *(byte *)(lVar45 + 0xd);
                            plVar20 = (longlong *)FUN_14001cc68(0x10,8);
                            plVar20[1] = lVar45;
                            plVar23 = DAT_14ca843c0;
                            plVar22 = DAT_14ca843c8;
                            if ((bVar29 & 2) == 0) {
                              do {
                                *plVar20 = (longlong)plVar23;
                                LOCK();
                                bVar51 = plVar23 != DAT_14ca843c0;
                                plVar22 = plVar20;
                                if (bVar51) {
                                  plVar23 = DAT_14ca843c0;
                                  plVar22 = DAT_14ca843c0;
                                }
                                DAT_14ca843c0 = plVar22;
                                UNLOCK();
                              } while (bVar51);
                            }
                            else {
                              do {
                                *plVar20 = (longlong)plVar22;
                                LOCK();
                                bVar51 = plVar22 != DAT_14ca843c8;
                                plVar23 = plVar20;
                                if (bVar51) {
                                  plVar22 = DAT_14ca843c8;
                                  plVar23 = DAT_14ca843c8;
                                }
                                DAT_14ca843c8 = plVar23;
                                UNLOCK();
                              } while (bVar51);
                            }
                          }
                        }
                      }
                    }
                    lVar49 = FUN_1472c5148(&local_a8);
                    *(ulonglong *)(lVar49 + 4) =
                         (longlong)(*(int *)(lVar17 + 4) + iVar39) / (longlong)iVar50 & 0xffffffffU
                         | (longlong)(*(int *)(lVar17 + 8) + iVar39) / (longlong)iVar50 << 0x20;
                    *(ulonglong *)(lVar49 + 0xc) =
                         (longlong)(*(int *)(lVar17 + 0x14) + iVar39) / (longlong)iVar50 &
                         0xffffffffU |
                         (longlong)(*(int *)(lVar17 + 0x18) + iVar39) / (longlong)iVar50 << 0x20;
                    lVar42 = *(longlong *)(lVar17 + 0x20);
                    lVar45 = *(longlong *)(lVar49 + 0x18);
                    if (lVar45 != lVar42) {
                      *(longlong *)(lVar49 + 0x18) = lVar42;
                      if (lVar42 != 0) {
                        LOCK();
                        *(int *)(lVar42 + 8) = *(int *)(lVar42 + 8) + 1;
                        UNLOCK();
                      }
                      if (lVar45 != 0) {
                        LOCK();
                        puVar1 = (uint *)(lVar45 + 8);
                        uVar35 = *puVar1;
                        *puVar1 = *puVar1 - 1;
                        UNLOCK();
                        if ((uVar35 & 0x3fffffff) == 1) {
                          puVar1 = (uint *)(lVar45 + 8);
                          LOCK();
                          uVar35 = *puVar1;
                          *puVar1 = *puVar1 | 0x40000000;
                          UNLOCK();
                          if ((uVar35 >> 0x1e & 1) == 0) {
                            bVar29 = *(byte *)(lVar45 + 0xd);
                            plVar20 = (longlong *)FUN_14001cc68(0x10,8);
                            plVar20[1] = lVar45;
                            plVar23 = DAT_14ca843c0;
                            plVar22 = DAT_14ca843c8;
                            if ((bVar29 & 2) == 0) {
                              do {
                                *plVar20 = (longlong)plVar23;
                                LOCK();
                                bVar51 = plVar23 != DAT_14ca843c0;
                                plVar22 = plVar20;
                                if (bVar51) {
                                  plVar23 = DAT_14ca843c0;
                                  plVar22 = DAT_14ca843c0;
                                }
                                DAT_14ca843c0 = plVar22;
                                UNLOCK();
                              } while (bVar51);
                            }
                            else {
                              do {
                                *plVar20 = (longlong)plVar22;
                                LOCK();
                                bVar51 = plVar22 != DAT_14ca843c8;
                                plVar23 = plVar20;
                                if (bVar51) {
                                  plVar22 = DAT_14ca843c8;
                                  plVar23 = DAT_14ca843c8;
                                }
                                DAT_14ca843c8 = plVar23;
                                UNLOCK();
                              } while (bVar51);
                            }
                          }
                        }
                      }
                    }
                  }
                  lVar17 = lVar17 + 0x28;
                } while (lVar17 != lVar19);
              }
            }
            lVar19 = local_440;
            uVar53 = 0;
            if (local_3b8._8_4_ != 0) {
              local_434 = local_3b8._8_4_;
              lVar17 = FUN_142fb06b0(local_440,&local_a8,L"RectLight.SrcSlotBuffer");
              lVar42 = FUN_142fb06b0(lVar19,local_3b8,L"RectLight.DstSlotBuffer");
              puVar11 = local_448;
              iVar39 = *(int *)(local_450 + 0x84);
              iVar50 = 1 << (bVar28 & 0x1f);
              local_400 = CONCAT44(DAT_14c967818._4_4_,(int)DAT_14c967818);
              puVar46 = (undefined8 *)(*(longlong *)(lVar19 + 0x70) + 0xfU & 0xfffffffffffffff0);
              puVar25 = puVar46 + 0x2a;
              if (*(undefined8 **)(lVar19 + 0x78) < puVar25) {
                FUN_140023dd8(local_448,0x160);
                puVar46 = (undefined8 *)(*puVar11 + 0xf & 0xfffffffffffffff0);
                puVar25 = puVar46 + 0x2a;
              }
              lVar49 = ((longlong)(iVar39 + iVar50 + -1) / (longlong)iVar50 & 0xffffffffU) *
                       0x100000001;
              *local_448 = (ulonglong)puVar25;
              *puVar46 = &PTR_FUN_14a2e61f8;
              puVar46[8] = 0;
              puVar46[3] = 0;
              puVar46[4] = 0;
              lVar45 = 0x62;
              do {
                puVar25 = (undefined8 *)((longlong)puVar46 + lVar45 + -0x12);
                *puVar25 = 0;
                puVar25[1] = 0;
                *(undefined4 *)((longlong)puVar46 + lVar45 + -2) = 0xffff0000;
                lVar45 = lVar45 + 0x18;
              } while (lVar45 != 0x122);
              *(undefined4 *)((longlong)puVar46 + 0x124) = 0;
              puVar46[0x22] = 0;
              puVar46[0x23] = 0;
              *(undefined2 *)(puVar46 + 0x24) = 0;
              *(undefined4 *)(puVar46 + 0x25) = 0xffffffff;
              *(undefined4 *)((longlong)puVar46 + 300) = 0xffffffff;
              *(undefined4 *)(puVar46 + 0x26) = 0xffffffff;
              *(undefined4 *)((longlong)puVar46 + 0x134) = 0xffffffff;
              *(undefined4 *)(puVar46 + 0x27) = 0;
              *(undefined2 *)((longlong)puVar46 + 0x13c) = 0;
              puVar46[0x28] = 0;
              iVar39 = *(int *)(lVar19 + 0xa0);
              *(uint *)(lVar19 + 0xa0) = iVar39 + 1U;
              if (*(uint *)(lVar19 + 0xa4) < iVar39 + 1U) {
                FUN_1448cfae8(local_408,iVar39);
              }
              puVar11 = local_448;
              *(undefined8 **)(*(longlong *)(lVar19 + 0x98) + (longlong)iVar39 * 8) = puVar46;
              puVar46[4] = local_3d8._0_8_;
              *(uint *)(puVar46 + 2) = uVar47;
              puVar34 = (undefined8 *)(*(longlong *)(lVar19 + 0x70) + 7U & 0xfffffffffffffff8);
              puVar25 = puVar34 + 9;
              if (*(undefined8 **)(lVar19 + 0x78) < puVar25) {
                FUN_140023dd8(local_448,0x50);
                puVar34 = (undefined8 *)(*puVar11 + 7 & 0xfffffffffffffff8);
                puVar25 = puVar34 + 9;
              }
              *(undefined8 **)(lVar19 + 0x70) = puVar25;
              puVar34[1] = *(undefined8 *)(lVar17 + 8);
              puVar34[2] = 0;
              *(undefined1 *)(puVar34 + 3) = 3;
              *(undefined8 *)((longlong)puVar34 + 0x1c) = 0xffffffffffffffff;
              *puVar34 = &PTR_FUN_14a1fb168;
              *(undefined1 *)(puVar34 + 5) = 0x22;
              *(undefined8 *)((longlong)puVar34 + 0x2c) = 0xffffffff00000000;
              puVar34[7] = 0;
              puVar34[8] = lVar17;
              iVar39 = *(int *)(lVar19 + 0x1a0);
              *(uint *)(lVar19 + 0x1a0) = iVar39 + 1U;
              if (*(uint *)(lVar19 + 0x1a4) < iVar39 + 1U) {
                FUN_1447568fc(local_420,iVar39);
              }
              puVar11 = local_448;
              *(undefined8 **)(*(longlong *)(lVar19 + 0x198) + (longlong)iVar39 * 8) = puVar34;
              *(int *)((longlong)puVar34 + 0x1c) = *(int *)(lVar19 + 0x1a0) + -1;
              puVar46[3] = puVar34;
              puVar46[6] = lVar49;
              *(undefined4 *)(puVar46 + 7) = 0;
              puVar34 = (undefined8 *)(*(longlong *)(lVar19 + 0x70) + 7U & 0xfffffffffffffff8);
              puVar25 = puVar34 + 9;
              if (*(undefined8 **)(lVar19 + 0x78) < puVar25) {
                FUN_140023dd8(local_448,0x50);
                puVar34 = (undefined8 *)(*puVar11 + 7 & 0xfffffffffffffff8);
                puVar25 = puVar34 + 9;
              }
              *(undefined8 **)(lVar19 + 0x70) = puVar25;
              puVar34[1] = *(undefined8 *)(lVar42 + 8);
              puVar34[2] = 0;
              *(undefined1 *)(puVar34 + 3) = 3;
              *(undefined8 *)((longlong)puVar34 + 0x1c) = 0xffffffffffffffff;
              *puVar34 = &PTR_FUN_14a1fb168;
              *(undefined1 *)(puVar34 + 5) = 0x22;
              *(undefined8 *)((longlong)puVar34 + 0x2c) = 0xffffffff00000000;
              puVar34[7] = 0;
              puVar34[8] = lVar42;
              iVar39 = *(int *)(lVar19 + 0x1a0);
              *(uint *)(lVar19 + 0x1a0) = iVar39 + 1U;
              local_430 = lVar49;
              if (*(uint *)(lVar19 + 0x1a4) < iVar39 + 1U) {
                FUN_1447568fc(local_420,iVar39);
              }
              *(undefined8 **)(*(longlong *)(lVar19 + 0x198) + (longlong)iVar39 * 8) = puVar34;
              *(int *)((longlong)puVar34 + 0x1c) = *(int *)(lVar19 + 0x1a0) + -1;
              puVar46[8] = puVar34;
              puVar46[10] = local_450;
              puVar46[0xb] = 0;
              *(undefined1 *)(puVar46 + 0xc) = 1;
              *(byte *)((longlong)puVar46 + 0x61) = bVar28;
              *(undefined2 *)((longlong)puVar46 + 0x62) = 0xffff;
              FUN_145cfe67a();
              uVar3 = local_418;
              FUN_1448e935e(local_418,local_3a8,&DAT_14ca416c0,0);
              FUN_145cfe67a();
              uVar27 = local_3a8._0_8_;
              uVar12 = stack0xfffffffffffffc60;
              FUN_145e4a7f2();
              FUN_1448e935e(uVar3,local_3a8,&DAT_14ca41910,0);
              FUN_145e4a7f2();
              uVar3 = local_3a8._0_8_;
              uVar13 = stack0xfffffffffffffc60;
              FUN_145e4aa60();
              FUN_140069376(lVar19);
              puVar11 = local_448;
              puVar34 = (undefined8 *)(*(longlong *)(lVar19 + 0x70) + 7U & 0xfffffffffffffff8);
              puVar25 = puVar34 + 0x40;
              if (*(undefined8 **)(lVar19 + 0x78) < puVar25) {
                FUN_140023dd8(local_448,0x208);
                puVar34 = (undefined8 *)(*puVar11 + 7 & 0xfffffffffffffff8);
                puVar25 = puVar34 + 0x40;
              }
              *local_448 = (ulonglong)puVar25;
              stack0xfffffffffffffc60 = DAT_14ca43bf8;
              local_3a8._0_8_ = puVar46 + 2;
              if (DAT_14ca43bf8 != 0) {
                LOCK();
                *(int *)(DAT_14ca43bf8 + 8) = *(int *)(DAT_14ca43bf8 + 8) + 1;
                UNLOCK();
              }
              local_398._0_8_ = &DAT_14ca43bb0;
              local_458 = (undefined8 *)CONCAT71(local_458._1_7_,2);
              FUN_140068f1a(puVar34,&local_3b9,local_3a8);
              lVar19 = local_440;
              *puVar34 = &PTR_FUN_14a2e6200;
              puVar34[0x37] = puVar46 + 2;
              puVar34[0x38] = uVar27;
              puVar34[0x39] = uVar12;
              puVar34[0x3a] = uVar3;
              puVar34[0x3b] = uVar13;
              puVar34[0x3c] = local_400;
              puVar34[0x3d] = local_430;
              puVar34[0x3e] = local_430;
              *(int *)(puVar34 + 0x3f) = local_434;
              iVar39 = *(int *)(local_440 + 0x170);
              *(uint *)(local_440 + 0x170) = iVar39 + 1U;
              if (*(uint *)(local_440 + 0x174) < iVar39 + 1U) {
                FUN_14470e57a(local_410,iVar39);
              }
              *(undefined8 **)(*(longlong *)(lVar19 + 0x168) + (longlong)iVar39 * 8) = puVar34;
              *(int *)((longlong)puVar34 + 0x2c) = *(int *)(lVar19 + 0x170) + -1;
              FUN_140069100(lVar19,puVar34);
              uVar16 = local_424;
              uVar53 = local_3b8._8_4_;
            }
            FUN_145ee550a(local_3b8._0_8_,uVar53);
            if (local_3b8._0_8_ != 0) {
              FUN_1400020a8();
            }
            FUN_145ee550a(local_a8,uStack_a0 & 0xffffffff);
            if (local_a8 != 0) {
              FUN_1400020a8();
            }
            uVar47 = uVar47 + 1;
          } while (uVar47 != uVar16);
        }
        if ((longlong)(int)local_3f8._8_4_ != 0) {
          piVar24 = (int *)local_3f8._0_8_;
          do {
            *(undefined8 *)(DAT_14ca414b8 + 4 + (longlong)*piVar24 * 0x30) =
                 *(undefined8 *)(piVar24 + 3);
            *(undefined8 *)(DAT_14ca414b8 + 0xc + (longlong)*piVar24 * 0x30) =
                 *(undefined8 *)(piVar24 + 5);
            *(undefined1 *)(DAT_14ca414b8 + 0x2c + (longlong)*piVar24 * 0x30) = 0;
            piVar24 = piVar24 + 10;
          } while (piVar24 != (int *)(local_3f8._0_8_ + (longlong)(int)local_3f8._8_4_ * 10 * 4));
        }
        local_3d8._0_8_ = local_450;
        bVar51 = true;
        uVar36 = local_450;
      }
      local_450 = uVar36;
      uVar3 = local_418;
      lVar19 = local_440;
      if (0 < (int)local_3e8._8_4_) {
        local_458 = (undefined8 *)local_3d8;
        FUN_142f82f59(local_440,local_418,_DAT_14ca414f8,local_3e8);
        FUN_142f83642(lVar19,uVar3,local_3e8,local_3d8);
        if ((longlong)(int)local_3e8._8_4_ != 0) {
          piVar24 = (int *)local_3e8._0_8_;
          do {
            *(undefined8 *)(DAT_14ca414b8 + 4 + (longlong)*piVar24 * 0x30) =
                 *(undefined8 *)(piVar24 + 1);
            *(undefined8 *)(DAT_14ca414b8 + 0xc + (longlong)*piVar24 * 0x30) =
                 *(undefined8 *)(piVar24 + 3);
            *(undefined1 *)(DAT_14ca414b8 + 0x2c + (longlong)*piVar24 * 0x30) = 0;
            piVar24 = piVar24 + 0xc;
          } while (piVar24 != (int *)(local_3e8._0_8_ + (longlong)(int)local_3e8._8_4_ * 0xc * 4));
        }
      }
      if (bVar51) {
        puVar25 = (undefined8 *)FUN_14495f742(local_440,local_450);
        plVar22 = DAT_14ca414b0;
        plVar23 = (longlong *)*puVar25;
        if (DAT_14ca414b0 != plVar23) {
          DAT_14ca414b0 = plVar23;
          if (plVar23 != (longlong *)0x0) {
            (**(code **)(*plVar23 + 0x30))();
          }
          if (plVar22 != (longlong *)0x0) {
            (**(code **)(*plVar22 + 0x38))(plVar22);
          }
        }
      }
      uVar53 = local_3f8._8_4_;
    }
    DAT_14ca41521 = '\0';
    FUN_1472ccfbc(local_3f8._0_8_,uVar53);
    if (local_3f8._0_8_ != 0) {
      FUN_1400020a8();
    }
    FUN_145ee550a(local_3e8._0_8_,local_3e8._8_4_);
    lVar19 = local_3e8._0_8_;
  }
  else {
    if (iVar39 == 0) goto LAB_142f8081b;
    _local_3a8 = (undefined1  [16])0x0;
    if (iVar39 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar39);
    }
    FUN_1472d049c(local_3a8,iVar39);
    lVar19 = DAT_14ca414b8;
    lVar17 = (longlong)DAT_14ca414c0;
    if (lVar17 != 0) {
      lVar42 = DAT_14ca414b8 + 0x2c;
      lVar45 = 0;
      do {
        if (*(char *)(lVar42 + lVar45) == '\x01') {
          *(undefined1 *)(lVar42 + lVar45) = 0;
          uVar53 = local_3a8._8_4_;
          lVar49 = (longlong)(int)local_3a8._8_4_;
          uVar16 = local_3a8._8_4_ + 1;
          local_3a8._8_4_ = uVar16;
          if (uStack_39c < uVar16) {
            FUN_1472cca80(local_3a8,uVar53);
          }
          lVar2 = lVar42 + lVar45;
          lVar49 = lVar49 * 0x30;
          *(undefined4 *)(local_3a8._0_8_ + 0x10 + lVar49) = *(undefined4 *)(lVar2 + -0x1c);
          uVar3 = *(undefined8 *)(lVar2 + -0x24);
          *(undefined8 *)(local_3a8._0_8_ + lVar49) = *(undefined8 *)(lVar2 + -0x2c);
          ((undefined8 *)(local_3a8._0_8_ + lVar49))[1] = uVar3;
          lVar2 = *(longlong *)(lVar2 + -0x14);
          *(longlong *)(local_3a8._0_8_ + 0x18 + lVar49) = lVar2;
          if (lVar2 != 0) {
            LOCK();
            *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
            UNLOCK();
          }
          uVar3 = *(undefined8 *)(lVar19 + 0x20 + lVar45);
          *(undefined8 *)(local_3a8._0_8_ + lVar49 + 0x25) = *(undefined8 *)(lVar19 + 0x25 + lVar45)
          ;
          *(undefined8 *)(local_3a8._0_8_ + lVar49 + 0x20) = uVar3;
        }
        lVar45 = lVar45 + 0x30;
      } while (lVar17 * 0x30 != lVar45);
    }
    lVar19 = local_440;
    uVar3 = *(undefined8 *)
             (&DAT_14ca8c1f0 + (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)param_2 * 2) * 8);
    local_a8 = FUN_14473c272(local_440,&DAT_14ca414b0,0);
    local_458 = &local_a8;
    FUN_142f82f59(lVar19,uVar3,_DAT_14ca414f8,local_3a8);
    FUN_142f83642(lVar19,uVar3,local_3a8,&local_a8);
    FUN_145ee550a(local_3a8._0_8_,local_3a8._8_4_);
    lVar19 = local_3a8._0_8_;
  }
  if (lVar19 != 0) {
    FUN_1400020a8();
  }
LAB_142f8081b:
  if ((local_70 ^ (ulonglong)auStack_478) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_142f80be9:
  local_a8 = *plVar30;
  uStack_a0 = plVar30[1];
  auVar57 = *(undefined1 (*) [16])(plVar30 + 2);
  local_88 = plVar30[4];
  lStack_80 = plVar30[5];
  local_98 = *(undefined8 *)*(undefined1 (*) [16])(plVar30 + 2);
  lStack_90 = plVar30[3];
  lVar2 = local_a8;
  uVar18 = uStack_a0;
  lVar19 = *plVar41;
  lVar17 = plVar38[-5];
  lVar42 = plVar38[-4];
  lVar45 = plVar38[-3];
  lVar49 = plVar38[-1];
  plVar30[4] = plVar38[-2];
  plVar30[5] = lVar49;
  plVar30[2] = lVar42;
  plVar30[3] = lVar45;
  *plVar30 = lVar19;
  plVar30[1] = lVar17;
  local_a8._4_4_ = (undefined4)((ulonglong)local_a8 >> 0x20);
  uStack_a0._4_4_ = (undefined4)(uStack_a0 >> 0x20);
  plVar38[-2] = local_88;
  plVar38[-1] = lStack_80;
  *(undefined1 (*) [16])(plVar38 + -4) = auVar57;
  *(undefined4 *)plVar41 = (undefined4)local_a8;
  *(undefined4 *)((longlong)plVar38 + -0x2c) = local_a8._4_4_;
  *(undefined4 *)(plVar38 + -5) = (undefined4)uStack_a0;
  *(undefined4 *)((longlong)plVar38 + -0x24) = uStack_a0._4_4_;
  iVar39 = iVar39 + -1;
  plVar38 = plVar38 + -0xc;
  local_a8 = lVar2;
  uStack_a0 = uVar18;
  if ((longlong)plVar43 - (longlong)plVar20 < (longlong)plVar33 - (longlong)plVar48) {
    if (plVar26 < plVar22) {
      *plVar23 = (longlong)plVar26;
      plVar23[1] = (longlong)plVar22;
      *(int *)(plVar23 + 2) = iVar39;
      plVar23 = plVar23 + 3;
    }
    plVar26 = plVar30;
    plVar33 = plVar43;
    if (plVar41 <= plVar30 + 6) goto LAB_142f810f0;
  }
  else {
    if (plVar30 + 6 < plVar41) {
      *plVar23 = (longlong)plVar30;
      plVar23[1] = (longlong)plVar38;
      *(int *)(plVar23 + 2) = iVar39;
      plVar23 = plVar23 + 3;
    }
    plVar30 = plVar48;
    plVar38 = plVar22;
    plVar33 = plVar22;
    if (plVar22 <= plVar26) goto LAB_142f810f0;
  }
  iVar50 = (int)((ulonglong)((longlong)plVar33 - (longlong)plVar30) >> 4) * -0x55555555;
  uVar16 = iVar50 + 1;
  plVar20 = plVar30;
  plVar30 = plVar26;
  plVar22 = plVar38;
  if (iVar39 == 0) goto LAB_142f80ce6;
  goto LAB_142f80a86;
LAB_142f812fb:
  local_a8 = *plVar30;
  uStack_a0 = plVar30[1];
  auVar57 = *(undefined1 (*) [16])(plVar30 + 2);
  local_88 = plVar30[4];
  lStack_80 = plVar30[5];
  local_98 = *(undefined8 *)*(undefined1 (*) [16])(plVar30 + 2);
  lStack_90 = plVar30[3];
  lVar2 = local_a8;
  uVar18 = uStack_a0;
  lVar19 = *plVar41;
  lVar17 = plVar38[-5];
  lVar42 = plVar38[-4];
  lVar45 = plVar38[-3];
  lVar49 = plVar38[-1];
  plVar30[4] = plVar38[-2];
  plVar30[5] = lVar49;
  plVar30[2] = lVar42;
  plVar30[3] = lVar45;
  *plVar30 = lVar19;
  plVar30[1] = lVar17;
  local_a8._4_4_ = (undefined4)((ulonglong)local_a8 >> 0x20);
  uStack_a0._4_4_ = (undefined4)(uStack_a0 >> 0x20);
  plVar38[-2] = local_88;
  plVar38[-1] = lStack_80;
  *(undefined1 (*) [16])(plVar38 + -4) = auVar57;
  *(undefined4 *)plVar41 = (undefined4)local_a8;
  *(undefined4 *)((longlong)plVar38 + -0x2c) = local_a8._4_4_;
  *(undefined4 *)(plVar38 + -5) = (undefined4)uStack_a0;
  *(undefined4 *)((longlong)plVar38 + -0x24) = uStack_a0._4_4_;
  iVar39 = iVar39 + -1;
  plVar38 = plVar38 + -0xc;
  local_a8 = lVar2;
  uStack_a0 = uVar18;
  if ((longlong)plVar43 - (longlong)plVar20 < (longlong)plVar33 - (longlong)plVar48) {
    if (plVar26 < plVar22) {
      *plVar23 = (longlong)plVar26;
      plVar23[1] = (longlong)plVar22;
      *(int *)(plVar23 + 2) = iVar39;
      plVar23 = plVar23 + 3;
    }
    plVar26 = plVar30;
    plVar33 = plVar43;
    if (plVar41 <= plVar30 + 6) goto LAB_142f81802;
  }
  else {
    if (plVar30 + 6 < plVar41) {
      *plVar23 = (longlong)plVar30;
      plVar23[1] = (longlong)plVar38;
      *(int *)(plVar23 + 2) = iVar39;
      plVar23 = plVar23 + 3;
    }
    plVar30 = plVar48;
    plVar38 = plVar22;
    plVar33 = plVar22;
    if (plVar22 <= plVar26) goto LAB_142f81802;
  }
  iVar50 = (int)((ulonglong)((longlong)plVar33 - (longlong)plVar30) >> 4) * -0x55555555;
  uVar16 = iVar50 + 1;
  plVar20 = plVar30;
  plVar30 = plVar26;
  plVar22 = plVar38;
  if (iVar39 == 0) goto LAB_142f813f8;
  goto LAB_142f81198;
}



// FUNCTION 142f82dc2 FUN_142f82dc2 body=406 status=ok
// SIG undefined FUN_142f82dc2(void)

ulonglong FUN_142f82dc2(longlong param_1,undefined1 param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  float fVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  undefined1 local_28;
  undefined2 local_27;
  undefined1 local_25;
  undefined2 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = DAT_14ca414f4;
  if (DAT_14ca414f0 < DAT_14ca414f4) {
    iVar1 = DAT_14ca414f0;
  }
  fVar4 = logf((float)iVar1);
  local_50 = DAT_14ca83a58;
  uStack_4c = DAT_14ca83a5c;
  uStack_48 = DAT_14ca83a60;
  uStack_44 = DAT_14ca83a64;
  local_40 = DAT_14ca83a68;
  local_58 = 0x20009;
  local_34 = DAT_14ca84e40;
  if (DAT_14ca414f0 < DAT_14ca84e40) {
    local_34 = DAT_14ca414f0;
  }
  if (local_34 < 2) {
    local_34 = 1;
  }
  local_30 = DAT_14ca84e40;
  if (DAT_14ca414f4 < DAT_14ca84e40) {
    local_30 = DAT_14ca414f4;
  }
  local_24 = 0xff00;
  local_2c = 0x10001;
  local_28 = (undefined1)(longlong)(fVar4 * 1.442695);
  local_3c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_27 = 1;
  local_38 = 0;
  if (local_30 < 2) {
    local_30 = 1;
  }
  uVar3 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar2 = uVar3 + 0x120;
  local_25 = param_2;
  if (*(ulonglong *)(param_1 + 0x78) < uVar2) {
    FUN_140023dd8((longlong *)(param_1 + 0x70),0x128);
    uVar3 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar2 = uVar3 + 0x120;
  }
  *(ulonglong *)(param_1 + 0x70) = uVar2;
  FUN_1456bbb8c(uVar3,L"RectLight.AtlasTexture",&local_58,1);
  iVar1 = *(int *)(param_1 + 0x180);
  *(uint *)(param_1 + 0x180) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x184) < iVar1 + 1U) {
    FUN_14472c0f6(param_1 + 0x178,iVar1);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x178) + (longlong)iVar1 * 8) = uVar3;
  *(int *)(uVar3 + 0x9c) = *(int *)(param_1 + 0x180) + -1;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f82f59 FUN_142f82f59 body=1768 status=ok
// SIG undefined FUN_142f82f59(void)

void FUN_142f82f59(longlong param_1,undefined8 param_2,undefined4 param_3,longlong *param_4,
                  longlong *param_5)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int iVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  ulonglong *local_100;
  longlong local_f8;
  ulonglong local_f0;
  uint local_e8;
  undefined4 local_e4;
  longlong *local_e0;
  ulonglong local_d8;
  longlong local_d0;
  longlong local_c8;
  ulonglong local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined1 local_89;
  undefined8 *local_88;
  longlong local_80;
  undefined *local_78;
  ulonglong local_70;
  
  uVar3 = DAT_14c967818;
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar6 = *(longlong *)(*param_5 + 0x84);
  local_e4 = param_3;
  local_a8 = param_2;
  local_b0 = FUN_142fb06b0(param_1,param_4,L"RectLight.AtlasSlotBuffer");
  uVar9 = (int)param_4[1] + 7;
  if (7 < uVar9) {
    local_e8 = uVar9 >> 3;
    local_100 = (ulonglong *)(param_1 + 0x70);
    local_e0 = (longlong *)(param_1 + 0x98);
    local_d8 = (ulonglong)(uint)((int)lVar6 - (int)uVar3) |
               lVar6 - (uVar3 & 0xffffffff00000000) & 0xffffffff00000000;
    local_d0 = param_1 + 0x198;
    local_c8 = param_1 + 0x168;
    iVar8 = 0;
    local_f0 = 0;
    local_c0 = uVar3;
    local_b8 = lVar6;
    do {
      puVar4 = local_100;
      iVar1 = (int)local_f0;
      local_f8 = CONCAT44(local_f8._4_4_,iVar1 * 8);
      uVar9 = *(uint *)(param_4 + 1) + iVar1 * -8;
      if (iVar1 * 8 + 8U <= *(uint *)(param_4 + 1)) {
        uVar9 = 8;
      }
      puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar7 = puVar10 + 0x38;
      if (*(undefined8 **)(param_1 + 0x78) < puVar7) {
        FUN_140023dd8(local_100);
        puVar10 = (undefined8 *)(*puVar4 + 0xf & 0xfffffffffffffff0);
        puVar7 = puVar10 + 0x38;
      }
      local_f0 = (ulonglong)((int)local_f0 + 1);
      *local_100 = (ulonglong)puVar7;
      *puVar10 = &PTR_FUN_14a2e6250;
      puVar10[0x16] = 0;
      puVar10[3] = 0;
      puVar10[4] = 0;
      puVar10[5] = 0;
      puVar10[6] = 0;
      puVar10[7] = 0;
      puVar10[8] = 0;
      puVar10[9] = 0;
      puVar10[10] = 0;
      puVar10[0xb] = 0;
      puVar10[0xc] = 0;
      puVar10[0xd] = 0;
      puVar10[0xe] = 0;
      puVar10[0xf] = 0;
      puVar10[0x10] = 0;
      puVar10[0x11] = 0;
      puVar10[0x12] = 0;
      lVar6 = 0xc0;
      do {
        *(undefined8 *)((longlong)puVar10 + lVar6) = 0;
        ((undefined8 *)((longlong)puVar10 + lVar6))[1] = 0;
        *(undefined4 *)((longlong)puVar10 + lVar6 + 0x10) = 0xffff0000;
        lVar6 = lVar6 + 0x18;
      } while (lVar6 != 0x180);
      *(undefined4 *)((longlong)puVar10 + 0x194) = 0;
      puVar10[0x30] = 0;
      puVar10[0x31] = 0;
      *(undefined2 *)(puVar10 + 0x32) = 0;
      *(undefined4 *)(puVar10 + 0x33) = 0xffffffff;
      *(undefined4 *)((longlong)puVar10 + 0x19c) = 0xffffffff;
      *(undefined4 *)(puVar10 + 0x34) = 0xffffffff;
      *(undefined4 *)((longlong)puVar10 + 0x1a4) = 0xffffffff;
      *(undefined4 *)(puVar10 + 0x35) = 0;
      *(undefined2 *)((longlong)puVar10 + 0x1ac) = 0;
      puVar10[0x36] = 0;
      iVar1 = *(int *)(param_1 + 0xa0);
      uVar5 = iVar1 + 1;
      *(uint *)(param_1 + 0xa0) = uVar5;
      if (*(uint *)(param_1 + 0xa4) < uVar5) {
        FUN_1448cfae8(local_e0);
      }
      puVar4 = local_100;
      *(undefined8 **)(*local_e0 + (longlong)iVar1 * 8) = puVar10;
      puVar10[3] = *(undefined8 *)(DAT_14ca63b28 + 8);
      lVar6 = DAT_14ca63b28;
      uVar2 = *(undefined8 *)(DAT_14ca63b28 + 8);
      puVar10[4] = uVar2;
      puVar10[5] = uVar2;
      uVar2 = *(undefined8 *)(lVar6 + 8);
      puVar10[6] = uVar2;
      puVar10[7] = uVar2;
      uVar2 = *(undefined8 *)(lVar6 + 8);
      puVar10[8] = uVar2;
      puVar10[9] = uVar2;
      puVar10[10] = *(undefined8 *)(lVar6 + 8);
      if (uVar9 != 0) {
        uVar5 = 0;
        do {
          if (uVar5 < 8) {
            lVar6 = (longlong)(int)(iVar8 + uVar5) * 0x30 + *param_4;
            switch(uVar5) {
            case 0:
              puVar10[3] = *(undefined8 *)(*(longlong *)(lVar6 + 0x18) + 0x60);
              break;
            case 1:
              puVar10[4] = *(undefined8 *)(*(longlong *)(lVar6 + 0x18) + 0x60);
              break;
            case 2:
              puVar10[5] = *(undefined8 *)(*(longlong *)(lVar6 + 0x18) + 0x60);
              break;
            case 3:
              puVar10[6] = *(undefined8 *)(*(longlong *)(lVar6 + 0x18) + 0x60);
              break;
            case 4:
              puVar10[7] = *(undefined8 *)(*(longlong *)(lVar6 + 0x18) + 0x60);
              break;
            case 5:
              puVar10[8] = *(undefined8 *)(*(longlong *)(lVar6 + 0x18) + 0x60);
              break;
            case 6:
              puVar10[9] = *(undefined8 *)(*(longlong *)(lVar6 + 0x18) + 0x60);
              break;
            case 7:
              puVar10[10] = *(undefined8 *)(*(longlong *)(lVar6 + 0x18) + 0x60);
            }
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar9);
      }
      uVar2 = DAT_14c9c0de0;
      puVar10[0xb] = DAT_14c9c0de0;
      puVar10[0xc] = uVar2;
      puVar10[0xd] = uVar2;
      puVar10[0xe] = uVar2;
      puVar10[0xf] = uVar2;
      puVar10[0x10] = uVar2;
      puVar10[0x11] = uVar2;
      puVar10[0x12] = uVar2;
      *(undefined4 *)(puVar10 + 2) = local_e4;
      puVar10[0x14] = local_d8;
      *(undefined4 *)(puVar10 + 0x15) = (undefined4)local_f8;
      puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar11 + 9;
      if (*(undefined8 **)(param_1 + 0x78) < puVar7) {
        FUN_140023dd8(local_100);
        puVar11 = (undefined8 *)(*puVar4 + 7 & 0xfffffffffffffff8);
        puVar7 = puVar11 + 9;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar7;
      puVar11[1] = *(undefined8 *)(local_b0 + 8);
      puVar11[2] = 0;
      *(undefined1 *)(puVar11 + 3) = 3;
      *(undefined8 *)((longlong)puVar11 + 0x1c) = 0xffffffffffffffff;
      *puVar11 = &PTR_FUN_14a1fb168;
      *(undefined1 *)(puVar11 + 5) = 0x22;
      *(undefined8 *)((longlong)puVar11 + 0x2c) = 0xffffffff00000000;
      puVar11[7] = 0;
      puVar11[8] = local_b0;
      iVar1 = *(int *)(param_1 + 0x1a0);
      *(uint *)(param_1 + 0x1a0) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0x1a4) < iVar1 + 1U) {
        FUN_1447568fc(local_d0,iVar1);
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar1 * 8) = puVar11;
      *(int *)((longlong)puVar11 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
      puVar10[0x16] = puVar11;
      puVar10[0x18] = *param_5;
      puVar10[0x19] = 0;
      *(undefined4 *)(puVar10 + 0x1a) = 0xffff0001;
      FUN_145cfe67a();
      uVar2 = local_a8;
      FUN_1448e935e(local_a8,&local_88,&DAT_14ca416c0,0);
      FUN_145cfe67a();
      local_98 = local_88;
      local_f8 = local_80;
      FUN_145f1b0d0();
      FUN_1448e935e(uVar2,&local_88,&DAT_14ca417e8,0);
      FUN_145f1b0d0();
      lVar6 = local_80;
      local_a0 = local_88;
      FUN_145f1b33e();
      FUN_140069376(param_1);
      puVar4 = local_100;
      puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar11 + 0x40;
      if (*(undefined8 **)(param_1 + 0x78) < puVar7) {
        FUN_140023dd8(local_100,0x208);
        puVar11 = (undefined8 *)(*puVar4 + 7 & 0xfffffffffffffff8);
        puVar7 = puVar11 + 0x40;
      }
      *local_100 = (ulonglong)puVar7;
      local_80 = DAT_14ca43b70;
      if (DAT_14ca43b70 != 0) {
        LOCK();
        *(int *)(DAT_14ca43b70 + 8) = *(int *)(DAT_14ca43b70 + 8) + 1;
        UNLOCK();
      }
      local_78 = &DAT_14ca43b28;
      local_108 = 2;
      local_88 = puVar10 + 2;
      FUN_140068f1a(puVar11,&local_89,&local_88);
      *puVar11 = &PTR_FUN_14a2e6260;
      puVar11[0x37] = puVar10 + 2;
      puVar11[0x38] = local_98;
      puVar11[0x39] = local_f8;
      puVar11[0x3a] = local_a0;
      puVar11[0x3b] = lVar6;
      puVar11[0x3c] = local_c0;
      puVar11[0x3d] = local_b8;
      puVar11[0x3e] = local_d8;
      *(uint *)(puVar11 + 0x3f) = uVar9;
      iVar1 = *(int *)(param_1 + 0x170);
      *(uint *)(param_1 + 0x170) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0x174) < iVar1 + 1U) {
        FUN_14470e57a(local_c8,iVar1);
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar1 * 8) = puVar11;
      *(int *)((longlong)puVar11 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
      FUN_140069100(param_1,puVar11);
      iVar8 = iVar8 + 8;
    } while ((uint)local_f0 != local_e8);
  }
  if ((local_70 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142f83642 FUN_142f83642 body=2878 status=ok
// SIG undefined FUN_142f83642(void)

void FUN_142f83642(longlong param_1,undefined8 param_2,longlong *param_3,longlong *param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  ulonglong *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined2 uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  longlong lVar19;
  undefined8 *puVar20;
  int iVar21;
  int iVar22;
  byte bVar23;
  uint uVar24;
  int iVar25;
  bool bVar26;
  undefined1 auStack_138 [32];
  undefined1 local_118;
  longlong local_108;
  uint local_fc;
  ulonglong *local_f8;
  int local_ec;
  longlong local_e8;
  longlong *local_e0;
  uint local_d4;
  longlong *local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined1 local_a9;
  longlong local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  ulonglong uStack_90;
  undefined8 *local_88;
  longlong local_80;
  undefined *local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_d4 = (uint)*(byte *)(*param_4 + 0x90);
  local_108 = param_1;
  local_e0 = param_3;
  local_b8 = param_2;
  if (1 < local_d4) {
    local_f8 = (ulonglong *)(param_1 + 0x70);
    local_c0 = param_1 + 0x98;
    local_e8 = param_1 + 0x198;
    local_c8 = param_1 + 0x168;
    uVar24 = 1;
    local_d0 = param_4;
    do {
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      iVar21 = (int)local_e0[1];
      if (iVar21 < 0) {
LAB_142f84179:
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar21);
      }
      local_ec = uVar24 - 1;
      bVar23 = (byte)uVar24;
      if (iVar21 != 0) {
        FUN_1472d049c(&local_98);
        iVar21 = (int)local_e0[1];
        if (iVar21 < 0) goto LAB_142f84179;
        if (uStack_a0._4_4_ < iVar21) {
          FUN_1472d049c(&local_a8);
          iVar21 = (int)local_e0[1];
        }
        if (iVar21 != 0) {
          lVar19 = *local_e0;
          iVar25 = 1 << (bVar23 & 0x1f);
          lVar7 = (longlong)iVar21 * 0x30 + lVar19;
          iVar21 = iVar25 + -1;
          iVar22 = 1 << ((byte)local_ec & 0x1f);
          iVar2 = iVar22 + -1;
          do {
            if ((1 < *(int *)(lVar19 + 0xc) >> (bVar23 & 0x1f)) &&
               (1 < *(int *)(lVar19 + 0x10) >> (bVar23 & 0x1f))) {
              lVar10 = FUN_1472c5148(&local_a8);
              *(ulonglong *)(lVar10 + 4) =
                   (longlong)(*(int *)(lVar19 + 4) + iVar21) / (longlong)iVar25 & 0xffffffffU |
                   (longlong)(*(int *)(lVar19 + 8) + iVar21) / (longlong)iVar25 << 0x20;
              *(ulonglong *)(lVar10 + 0xc) =
                   (longlong)(*(int *)(lVar19 + 0xc) + iVar21) / (longlong)iVar25 & 0xffffffffU |
                   (longlong)(*(int *)(lVar19 + 0x10) + iVar21) / (longlong)iVar25 << 0x20;
              lVar8 = *(longlong *)(lVar19 + 0x18);
              lVar9 = *(longlong *)(lVar10 + 0x18);
              if (lVar9 != lVar8) {
                *(longlong *)(lVar10 + 0x18) = lVar8;
                if (lVar8 != 0) {
                  LOCK();
                  *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
                  UNLOCK();
                }
                if (lVar9 != 0) {
                  LOCK();
                  puVar1 = (uint *)(lVar9 + 8);
                  uVar3 = *puVar1;
                  *puVar1 = *puVar1 - 1;
                  UNLOCK();
                  if ((uVar3 & 0x3fffffff) == 1) {
                    puVar1 = (uint *)(lVar9 + 8);
                    LOCK();
                    uVar3 = *puVar1;
                    *puVar1 = *puVar1 | 0x40000000;
                    UNLOCK();
                    if ((uVar3 >> 0x1e & 1) == 0) {
                      local_fc = CONCAT31(local_fc._1_3_,*(undefined1 *)(lVar9 + 0xd));
                      plVar11 = (longlong *)FUN_14001cc68(0x10,8);
                      plVar11[1] = lVar9;
                      plVar13 = DAT_14ca843c0;
                      plVar12 = DAT_14ca843c8;
                      if ((local_fc & 2) == 0) {
                        do {
                          *plVar11 = (longlong)plVar13;
                          LOCK();
                          bVar26 = plVar13 != DAT_14ca843c0;
                          plVar12 = plVar11;
                          if (bVar26) {
                            plVar13 = DAT_14ca843c0;
                            plVar12 = DAT_14ca843c0;
                          }
                          DAT_14ca843c0 = plVar12;
                          UNLOCK();
                        } while (bVar26);
                      }
                      else {
                        do {
                          *plVar11 = (longlong)plVar12;
                          LOCK();
                          bVar26 = plVar12 != DAT_14ca843c8;
                          plVar13 = plVar11;
                          if (bVar26) {
                            plVar12 = DAT_14ca843c8;
                            plVar13 = DAT_14ca843c8;
                          }
                          DAT_14ca843c8 = plVar13;
                          UNLOCK();
                        } while (bVar26);
                      }
                    }
                  }
                }
              }
              lVar10 = FUN_1472c5148(&local_98);
              *(ulonglong *)(lVar10 + 4) =
                   (longlong)(*(int *)(lVar19 + 4) + iVar2) / (longlong)iVar22 & 0xffffffffU |
                   (longlong)(*(int *)(lVar19 + 8) + iVar2) / (longlong)iVar22 << 0x20;
              *(ulonglong *)(lVar10 + 0xc) =
                   (longlong)(*(int *)(lVar19 + 0xc) + iVar2) / (longlong)iVar22 & 0xffffffffU |
                   (longlong)(*(int *)(lVar19 + 0x10) + iVar2) / (longlong)iVar22 << 0x20;
              lVar8 = *(longlong *)(lVar19 + 0x18);
              lVar9 = *(longlong *)(lVar10 + 0x18);
              if (lVar9 != lVar8) {
                *(longlong *)(lVar10 + 0x18) = lVar8;
                if (lVar8 != 0) {
                  LOCK();
                  *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
                  UNLOCK();
                }
                if (lVar9 != 0) {
                  LOCK();
                  puVar1 = (uint *)(lVar9 + 8);
                  uVar3 = *puVar1;
                  *puVar1 = *puVar1 - 1;
                  UNLOCK();
                  if ((uVar3 & 0x3fffffff) == 1) {
                    puVar1 = (uint *)(lVar9 + 8);
                    LOCK();
                    uVar3 = *puVar1;
                    *puVar1 = *puVar1 | 0x40000000;
                    UNLOCK();
                    if ((uVar3 >> 0x1e & 1) == 0) {
                      local_fc = CONCAT31(local_fc._1_3_,*(undefined1 *)(lVar9 + 0xd));
                      plVar11 = (longlong *)FUN_14001cc68(0x10,8);
                      plVar11[1] = lVar9;
                      plVar13 = DAT_14ca843c0;
                      plVar12 = DAT_14ca843c8;
                      if ((local_fc & 2) == 0) {
                        do {
                          *plVar11 = (longlong)plVar13;
                          LOCK();
                          bVar26 = plVar13 != DAT_14ca843c0;
                          plVar12 = plVar11;
                          if (bVar26) {
                            plVar13 = DAT_14ca843c0;
                            plVar12 = DAT_14ca843c0;
                          }
                          DAT_14ca843c0 = plVar12;
                          UNLOCK();
                        } while (bVar26);
                      }
                      else {
                        do {
                          *plVar11 = (longlong)plVar12;
                          LOCK();
                          bVar26 = plVar12 != DAT_14ca843c8;
                          plVar13 = plVar11;
                          if (bVar26) {
                            plVar12 = DAT_14ca843c8;
                            plVar13 = DAT_14ca843c8;
                          }
                          DAT_14ca843c8 = plVar13;
                          UNLOCK();
                        } while (bVar26);
                      }
                    }
                  }
                }
              }
            }
            lVar19 = lVar19 + 0x30;
          } while (lVar19 != lVar7);
        }
      }
      plVar13 = local_d0;
      lVar19 = local_108;
      uVar15 = 0;
      if ((uint)uStack_a0 != 0) {
        local_fc = (uint)uStack_a0;
        lVar7 = FUN_142fb06b0(local_108,&local_98,L"RectLight.SrcMIPSlotBuffer");
        lVar8 = FUN_142fb06b0(lVar19,&local_a8,L"RectLight.DstMIPSlotBuffer");
        puVar4 = local_f8;
        puVar20 = (undefined8 *)(*(longlong *)(lVar19 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar14 = puVar20 + 0x2c;
        if (*(undefined8 **)(lVar19 + 0x78) < puVar14) {
          FUN_140023dd8(local_f8,0x170);
          puVar20 = (undefined8 *)(*puVar4 + 0xf & 0xfffffffffffffff0);
          puVar14 = puVar20 + 0x2c;
          lVar19 = local_108;
        }
        *local_f8 = (ulonglong)puVar14;
        *puVar20 = &PTR_FUN_14a2e62e8;
        puVar20[10] = 0;
        puVar20[4] = 0;
        puVar20[5] = 0;
        puVar20[6] = 0;
        puVar20[7] = 0;
        lVar9 = 0x72;
        do {
          puVar14 = (undefined8 *)((longlong)puVar20 + lVar9 + -0x12);
          *puVar14 = 0;
          puVar14[1] = 0;
          *(undefined4 *)((longlong)puVar20 + lVar9 + -2) = 0xffff0000;
          lVar9 = lVar9 + 0x18;
        } while (lVar9 != 0x132);
        *(undefined4 *)((longlong)puVar20 + 0x134) = 0;
        puVar20[0x24] = 0;
        puVar20[0x25] = 0;
        *(undefined2 *)(puVar20 + 0x26) = 0;
        *(undefined4 *)(puVar20 + 0x27) = 0xffffffff;
        *(undefined4 *)((longlong)puVar20 + 0x13c) = 0xffffffff;
        *(undefined4 *)(puVar20 + 0x28) = 0xffffffff;
        *(undefined4 *)((longlong)puVar20 + 0x144) = 0xffffffff;
        *(undefined4 *)(puVar20 + 0x29) = 0;
        *(undefined2 *)((longlong)puVar20 + 0x14c) = 0;
        puVar20[0x2a] = 0;
        iVar21 = *(int *)(lVar19 + 0xa0);
        *(uint *)(lVar19 + 0xa0) = iVar21 + 1U;
        if (*(uint *)(lVar19 + 0xa4) < iVar21 + 1U) {
          FUN_1448cfae8(local_c0,iVar21);
          lVar19 = local_108;
        }
        puVar4 = local_f8;
        *(undefined8 **)(*(longlong *)(lVar19 + 0x98) + (longlong)iVar21 * 8) = puVar20;
        iVar21 = 1 << ((byte)local_ec & 0x1f);
        *(uint *)(puVar20 + 3) = (uint)(0 < *(int *)(DAT_14ca41458 + 4));
        puVar20[2] = (longlong)(*(int *)(*plVar13 + 0x84) + iVar21 + -1) / (longlong)iVar21 &
                     0xffffffffU |
                     (longlong)(iVar21 + -1 + *(int *)(*plVar13 + 0x88)) / (longlong)iVar21 << 0x20;
        puVar18 = (undefined8 *)(*(longlong *)(local_108 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar14 = puVar18 + 9;
        if (*(undefined8 **)(local_108 + 0x78) < puVar14) {
          FUN_140023dd8(local_f8,0x50);
          puVar18 = (undefined8 *)(*puVar4 + 7 & 0xfffffffffffffff8);
          puVar14 = puVar18 + 9;
        }
        *(undefined8 **)(local_108 + 0x70) = puVar14;
        puVar18[1] = *(undefined8 *)(lVar8 + 8);
        puVar18[2] = 0;
        *(undefined1 *)(puVar18 + 3) = 3;
        *(undefined8 *)((longlong)puVar18 + 0x1c) = 0xffffffffffffffff;
        *puVar18 = &PTR_FUN_14a1fb168;
        *(undefined1 *)(puVar18 + 5) = 0x22;
        *(undefined8 *)((longlong)puVar18 + 0x2c) = 0xffffffff00000000;
        puVar18[7] = 0;
        puVar18[8] = lVar8;
        iVar21 = *(int *)(local_108 + 0x1a0);
        *(uint *)(local_108 + 0x1a0) = iVar21 + 1U;
        if (*(uint *)(local_108 + 0x1a4) < iVar21 + 1U) {
          FUN_1447568fc(local_e8,iVar21);
        }
        puVar4 = local_f8;
        *(undefined8 **)(*(longlong *)(local_108 + 0x198) + (longlong)iVar21 * 8) = puVar18;
        *(int *)((longlong)puVar18 + 0x1c) = *(int *)(local_108 + 0x1a0) + -1;
        puVar20[4] = puVar18;
        puVar18 = (undefined8 *)(*(longlong *)(local_108 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar14 = puVar18 + 9;
        if (*(undefined8 **)(local_108 + 0x78) < puVar14) {
          FUN_140023dd8(local_f8,0x50);
          puVar18 = (undefined8 *)(*puVar4 + 7 & 0xfffffffffffffff8);
          puVar14 = puVar18 + 9;
        }
        *(undefined8 **)(local_108 + 0x70) = puVar14;
        puVar18[1] = *(undefined8 *)(lVar7 + 8);
        puVar18[2] = 0;
        *(undefined1 *)(puVar18 + 3) = 3;
        *(undefined8 *)((longlong)puVar18 + 0x1c) = 0xffffffffffffffff;
        *puVar18 = &PTR_FUN_14a1fb168;
        *(undefined1 *)(puVar18 + 5) = 0x22;
        *(undefined8 *)((longlong)puVar18 + 0x2c) = 0xffffffff00000000;
        puVar18[7] = 0;
        puVar18[8] = lVar7;
        iVar21 = *(int *)(local_108 + 0x1a0);
        *(uint *)(local_108 + 0x1a0) = iVar21 + 1U;
        if (*(uint *)(local_108 + 0x1a4) < iVar21 + 1U) {
          FUN_1447568fc(local_e8,iVar21);
        }
        puVar4 = local_f8;
        *(undefined8 **)(*(longlong *)(local_108 + 0x198) + (longlong)iVar21 * 8) = puVar18;
        *(int *)((longlong)puVar18 + 0x1c) = *(int *)(local_108 + 0x1a0) + -1;
        puVar20[5] = puVar18;
        lVar19 = *plVar13;
        if ((*(char *)(lVar19 + 0x92) == '\x04') || (*(char *)(lVar19 + 0x92) == '\x01')) {
          uVar16 = *(undefined2 *)(lVar19 + 0x8e);
        }
        else {
          uVar16 = 0;
        }
        puVar18 = (undefined8 *)(*(longlong *)(local_108 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar14 = puVar18 + 8;
        if (*(undefined8 **)(local_108 + 0x78) < puVar14) {
          FUN_140023dd8(local_f8,0x48);
          puVar18 = (undefined8 *)(*puVar4 + 7 & 0xfffffffffffffff8);
          puVar14 = puVar18 + 8;
        }
        *(undefined8 **)(local_108 + 0x70) = puVar14;
        puVar18[1] = *(undefined8 *)(lVar19 + 8);
        puVar18[2] = 0;
        *(undefined1 *)(puVar18 + 3) = 1;
        *(undefined8 *)((longlong)puVar18 + 0x1c) = 0xffffffffffffffff;
        *puVar18 = &PTR_FUN_14a203858;
        *(undefined1 *)(puVar18 + 5) = 0;
        *(char *)((longlong)puVar18 + 0x29) = (char)local_ec;
        *(undefined4 *)((longlong)puVar18 + 0x2a) = 1;
        *(undefined2 *)((longlong)puVar18 + 0x2e) = uVar16;
        *(undefined1 *)(puVar18 + 6) = 0;
        *(undefined1 *)((longlong)puVar18 + 0x32) = 0;
        puVar18[7] = lVar19;
        iVar21 = *(int *)(local_108 + 0x1a0);
        *(uint *)(local_108 + 0x1a0) = iVar21 + 1U;
        if (*(uint *)(local_108 + 0x1a4) < iVar21 + 1U) {
          FUN_1447568fc(local_e8,iVar21);
        }
        puVar4 = local_f8;
        *(undefined8 **)(*(longlong *)(local_108 + 0x198) + (longlong)iVar21 * 8) = puVar18;
        *(int *)((longlong)puVar18 + 0x1c) = *(int *)(local_108 + 0x1a0) + -1;
        puVar20[7] = puVar18;
        puVar20[6] = DAT_14c9c0de0;
        iVar21 = 1 << (bVar23 & 0x1f);
        puVar20[8] = (longlong)(*(int *)(*plVar13 + 0x84) + iVar21 + -1) / (longlong)iVar21 &
                     0xffffffffU |
                     (longlong)(iVar21 + -1 + *(int *)(*plVar13 + 0x88)) / (longlong)iVar21 << 0x20;
        *(undefined4 *)(puVar20 + 9) = 0;
        puVar18 = (undefined8 *)(*(longlong *)(local_108 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar14 = puVar18 + 9;
        if (*(undefined8 **)(local_108 + 0x78) < puVar14) {
          FUN_140023dd8(local_f8,0x50);
          puVar18 = (undefined8 *)(*puVar4 + 7 & 0xfffffffffffffff8);
          puVar14 = puVar18 + 9;
        }
        *(undefined8 **)(local_108 + 0x70) = puVar14;
        puVar18[1] = *(undefined8 *)(lVar8 + 8);
        puVar18[2] = 0;
        *(undefined1 *)(puVar18 + 3) = 3;
        *(undefined8 *)((longlong)puVar18 + 0x1c) = 0xffffffffffffffff;
        *puVar18 = &PTR_FUN_14a1fb168;
        *(undefined1 *)(puVar18 + 5) = 0x22;
        *(undefined8 *)((longlong)puVar18 + 0x2c) = 0xffffffff00000000;
        puVar18[7] = 0;
        puVar18[8] = lVar8;
        iVar21 = *(int *)(local_108 + 0x1a0);
        *(uint *)(local_108 + 0x1a0) = iVar21 + 1U;
        if (*(uint *)(local_108 + 0x1a4) < iVar21 + 1U) {
          FUN_1447568fc(local_e8,iVar21);
        }
        lVar19 = local_108;
        *(undefined8 **)(*(longlong *)(local_108 + 0x198) + (longlong)iVar21 * 8) = puVar18;
        *(int *)((longlong)puVar18 + 0x1c) = *(int *)(local_108 + 0x1a0) + -1;
        puVar20[10] = puVar18;
        puVar20[0xc] = *local_d0;
        puVar20[0xd] = 0;
        *(undefined1 *)(puVar20 + 0xe) = 1;
        *(byte *)((longlong)puVar20 + 0x71) = bVar23;
        *(undefined2 *)((longlong)puVar20 + 0x72) = 0xffff;
        FUN_145cfe67a();
        uVar5 = local_b8;
        FUN_1448e935e(local_b8,&local_88,&DAT_14ca416c0,0);
        FUN_145cfe67a();
        lVar7 = local_80;
        puVar18 = local_88;
        FUN_145f0858e();
        FUN_1448e935e(uVar5,&local_88,&DAT_14ca41a38,0);
        FUN_145f0858e();
        lVar8 = local_80;
        puVar6 = local_88;
        FUN_145f087fc();
        FUN_140069376(lVar19);
        puVar4 = local_f8;
        puVar17 = (undefined8 *)(*(longlong *)(lVar19 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar14 = puVar17 + 0x3d;
        if (*(undefined8 **)(lVar19 + 0x78) < puVar14) {
          FUN_140023dd8(local_f8,0x1f0);
          puVar17 = (undefined8 *)(*puVar4 + 7 & 0xfffffffffffffff8);
          puVar14 = puVar17 + 0x3d;
        }
        *local_f8 = (ulonglong)puVar14;
        local_80 = DAT_14ca43c80;
        if (DAT_14ca43c80 != 0) {
          LOCK();
          *(int *)(DAT_14ca43c80 + 8) = *(int *)(DAT_14ca43c80 + 8) + 1;
          UNLOCK();
        }
        local_78 = &DAT_14ca43c38;
        local_118 = 2;
        local_88 = puVar20 + 2;
        FUN_140068f1a(puVar17,&local_a9,&local_88,1);
        *puVar17 = &PTR_FUN_14a2e62f0;
        puVar17[0x37] = puVar20 + 2;
        puVar17[0x38] = puVar18;
        puVar17[0x39] = lVar7;
        puVar17[0x3a] = puVar6;
        puVar17[0x3b] = lVar8;
        *(uint *)(puVar17 + 0x3c) = local_fc;
        iVar21 = *(int *)(local_108 + 0x170);
        *(uint *)(local_108 + 0x170) = iVar21 + 1U;
        if (*(uint *)(local_108 + 0x174) < iVar21 + 1U) {
          FUN_14470e57a(local_c8,iVar21);
        }
        *(undefined8 **)(*(longlong *)(local_108 + 0x168) + (longlong)iVar21 * 8) = puVar17;
        *(int *)((longlong)puVar17 + 0x2c) = *(int *)(local_108 + 0x170) + -1;
        FUN_140069100(local_108,puVar17);
        uVar15 = uStack_a0 & 0xffffffff;
      }
      FUN_145ee550a(local_a8,uVar15);
      if (local_a8 != 0) {
        FUN_1400020a8();
      }
      FUN_145ee550a(local_98,uStack_90 & 0xffffffff);
      if (local_98 != 0) {
        FUN_1400020a8();
      }
      uVar24 = uVar24 + 1;
    } while (uVar24 != local_d4);
  }
  if ((local_70 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}


