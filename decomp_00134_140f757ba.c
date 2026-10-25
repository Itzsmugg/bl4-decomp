// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140f757ba FUN_140f757ba body=158 status=ok
// SIG undefined FUN_140f757ba(void)

void FUN_140f757ba(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 0x148);
  uVar1 = *(uint *)(param_1 + 0x14c);
  if ((ulonglong)uVar4 < 6) {
    uVar4 = 5;
  }
  else {
    iVar3 = uVar1 - uVar4;
    if (((longlong)iVar3 & 0x3ffffffffffff00U) == 0) {
      if (iVar3 < 0x41 || (int)(uVar1 * 2) <= (int)(uVar4 * 3)) {
        return;
      }
    }
    else if (iVar3 < 0x41) {
      return;
    }
    if (0 < (int)uVar4) {
      uVar2 = FUN_144a3809e((ulonglong)uVar4 << 6,0);
      uVar4 = (uint)(uVar2 >> 6);
      uVar1 = *(uint *)(param_1 + 0x14c);
    }
  }
  if (uVar4 == uVar1) {
    return;
  }
  *(uint *)(param_1 + 0x14c) = uVar4;
  FUN_14896cb04(param_1,*(undefined4 *)(param_1 + 0x148));
  return;
}



// FUNCTION 140f75858 FUN_140f75858 body=206 status=ok
// SIG undefined FUN_140f75858(void)

void FUN_140f75858(longlong param_1,uint param_2)

{
  int *piVar1;
  longlong *plVar2;
  char *_Dst;
  char cVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  
  lVar6 = *(longlong *)(param_1 + 0x140);
  if (*(longlong *)(param_1 + 0x140) == 0) {
    lVar6 = param_1;
  }
  _Dst = (char *)(lVar6 + (longlong)(int)param_2 * 0x40);
  plVar4 = *(longlong **)(lVar6 + 0x38 + (longlong)(int)param_2 * 0x40);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  FUN_1448173f8(_Dst + 0x28);
  cVar3 = *_Dst;
  if (cVar3 != '\0') {
    if (cVar3 == '\x01') {
      _Dst[8] = '\0';
      _Dst[9] = '\0';
      _Dst[10] = '\0';
      _Dst[0xb] = '\0';
      _Dst[0xc] = '\0';
      _Dst[0xd] = '\0';
      _Dst[0xe] = '\0';
      _Dst[0xf] = '\0';
    }
    else if ((cVar3 == '\x03') && (plVar4 = *(longlong **)(_Dst + 0x10), plVar4 != (longlong *)0x0))
    {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))();
      }
    }
    *_Dst = '\0';
  }
  iVar5 = *(int *)(param_1 + 0x148);
  if (~param_2 + iVar5 != 0) {
    memmove(_Dst,_Dst + 0x40,(longlong)(int)(~param_2 + iVar5) << 6);
    iVar5 = *(int *)(param_1 + 0x148);
  }
  *(int *)(param_1 + 0x148) = iVar5 + -1;
  return;
}



// FUNCTION 140f75926 FUN_140f75926 body=774 status=ok
// SIG undefined FUN_140f75926(void)

void FUN_140f75926(longlong param_1,longlong param_2)

{
  int *piVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_98 [40];
  char local_70 [8];
  longlong local_68;
  longlong *local_60;
  undefined8 local_58;
  char local_50;
  int local_48 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 == 0) goto LAB_140f75a84;
  pcVar9 = (char *)(param_1 + 0x108);
  pcVar10 = *(char **)(param_1 + 0x248);
  if (*(char **)(param_1 + 0x248) == (char *)0x0) {
    pcVar10 = pcVar9;
  }
  if ((longlong)*(int *)(param_1 + 0x250) != 0) {
    lVar11 = (longlong)*(int *)(param_1 + 0x250) << 6;
    do {
      local_70[0] = '\0';
      local_48[0] = 0;
      FUN_1456bb102(local_70,param_2);
      cVar4 = FUN_140308e2a(pcVar10,local_70);
      FUN_144a5ac3a(local_70);
      if (cVar4 != '\0') {
        if (pcVar10 != (char *)0x0) goto LAB_140f75a5d;
        break;
      }
      pcVar10 = pcVar10 + 0x40;
      lVar11 = lVar11 + -0x40;
    } while (lVar11 != 0);
  }
  local_70[0] = '\0';
  local_48[0] = 0;
  FUN_1456bb102(local_70,param_2);
  iVar5 = *(int *)(param_1 + 0x250);
  *(uint *)(param_1 + 0x250) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x254) < iVar5 + 1U) {
    FUN_14896ca8c(pcVar9,iVar5);
  }
  if (*(char **)(param_1 + 0x248) != (char *)0x0) {
    pcVar9 = *(char **)(param_1 + 0x248);
  }
  lVar11 = (longlong)iVar5 * 0x40;
  pcVar10 = pcVar9 + lVar11;
  pcVar9[lVar11] = '\0';
  pcVar9[lVar11] = local_70[0];
  if (local_70[0] == '\x01') {
    plVar6 = &local_68;
LAB_140f759dd:
    lVar11 = *plVar6;
    *pcVar10 = '\x02';
    pcVar10[8] = '\0';
    pcVar10[9] = '\0';
    pcVar10[10] = '\0';
    pcVar10[0xb] = '\0';
    pcVar10[0xc] = '\0';
    pcVar10[0xd] = '\0';
    pcVar10[0xe] = '\0';
    pcVar10[0xf] = '\0';
    if (lVar11 == 0) {
      iVar5 = 0;
    }
    else {
      uVar2 = *(uint *)(lVar11 + 0xc);
      *(uint *)(pcVar10 + 8) = uVar2;
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar11 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar11 = 0;
      }
      iVar5 = *(int *)(lVar11 + 0x10);
      if (*(int *)(lVar11 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        iVar8 = DAT_14c964868 + 1;
        bVar12 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar12) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar8);
        }
        LOCK();
        iVar5 = *(int *)(lVar11 + 0x10);
        bVar12 = iVar5 == 0;
        if (bVar12) {
          *(int *)(lVar11 + 0x10) = iVar8;
          iVar5 = 0;
        }
        UNLOCK();
        if (bVar12) {
          iVar5 = iVar8;
        }
      }
    }
    *(int *)(pcVar10 + 0xc) = iVar5;
  }
  else if (local_70[0] == '\x02') {
    *(longlong *)(pcVar10 + 8) = local_68;
  }
  else if (local_70[0] == '\x03') {
    *(longlong *)(pcVar10 + 8) = local_68;
    *(longlong **)(pcVar10 + 0x10) = local_60;
    if (local_60 == (longlong *)0x0) {
      *(undefined8 *)(pcVar10 + 0x18) = local_58;
      pcVar10[0x20] = local_50;
    }
    else {
      LOCK();
      *(int *)((longlong)local_60 + 0xc) = *(int *)((longlong)local_60 + 0xc) + 1;
      UNLOCK();
      *(undefined8 *)(pcVar10 + 0x18) = local_58;
      pcVar10[0x20] = local_50;
      if (*pcVar10 == '\x01') {
        plVar6 = (longlong *)(pcVar10 + 8);
        goto LAB_140f759dd;
      }
    }
  }
  pcVar10[0x28] = '\0';
  pcVar10[0x29] = '\0';
  pcVar10[0x2a] = '\0';
  pcVar10[0x2b] = '\0';
  if (local_48[0] != 0) {
    uVar7 = FUN_1448174c4(pcVar10 + 0x28);
    FUN_1400e08b0(uVar7,DAT_14c9a3da0 + (longlong)local_48[0] * 0x10 + -0x10);
  }
  pcVar10[0x30] = '\0';
  pcVar10[0x31] = '\0';
  pcVar10[0x32] = '\0';
  pcVar10[0x33] = '\0';
  pcVar10[0x34] = '\0';
  pcVar10[0x35] = '\0';
  pcVar10[0x36] = '\0';
  pcVar10[0x37] = '\0';
  pcVar10[0x38] = '\0';
  pcVar10[0x39] = '\0';
  pcVar10[0x3a] = '\0';
  pcVar10[0x3b] = '\0';
  pcVar10[0x3c] = '\0';
  pcVar10[0x3d] = '\0';
  pcVar10[0x3e] = '\0';
  pcVar10[0x3f] = '\0';
  FUN_1448173f8(local_48);
  if ((local_70[0] == '\x03') && (local_60 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_60 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_60 + 0x10))();
    }
  }
LAB_140f75a5d:
  bVar3 = *(byte *)(param_1 + 0x25c);
  if (bVar3 == 0) {
    FUN_140440bd6(param_1);
    bVar3 = *(byte *)(param_1 + 0x25c);
  }
  if ((bVar3 & 1) != 0) {
    FUN_140f75c2e(param_1,pcVar10);
  }
LAB_140f75a84:
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f75c2e FUN_140f75c2e body=858 status=ok
// SIG undefined FUN_140f75c2e(void)

/* WARNING: Removing unreachable block (ram,0x000140f75ea1) */

void FUN_140f75c2e(longlong param_1,char *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  uint uVar5;
  longlong *plVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 unaff_RBX;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined1 local_e0;
  undefined1 *local_d8;
  undefined1 local_c1;
  undefined8 local_c0;
  longlong *local_b8;
  char local_b0 [8];
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  char local_90;
  undefined4 local_88 [2];
  char local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined4 local_58 [2];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (((*(longlong *)(param_2 + 0x30) != 0) || (*(longlong *)(param_1 + 0xf8) == 0)) ||
     (*(char *)(param_1 + 0x25c) != '\x01')) goto LAB_140f75e2b;
  uVar3 = *(undefined4 *)(param_1 + 600);
  uVar4 = *(undefined1 *)(param_1 + 0x100);
  local_b0[0] = *param_2;
  if (local_b0[0] == '\x01') {
    local_b0[0] = '\x02';
    if (*(longlong *)(param_2 + 8) == 0) {
      local_a8._0_4_ = 0;
      iVar7 = 0;
      uVar5 = (uint)local_a8;
    }
    else {
      uVar5 = *(uint *)(*(longlong *)(param_2 + 8) + 0xc);
      local_a8 = (ulonglong)uVar5;
      if ((int)uVar5 < DAT_14c9647dc) {
        lVar10 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
      }
      else {
        lVar10 = 0;
      }
      iVar7 = *(int *)(lVar10 + 0x10);
      if (*(int *)(lVar10 + 0x10) == 0) {
        LOCK();
        iVar7 = DAT_14c964868 + 1;
        UNLOCK();
        iVar9 = DAT_14c964868 + 1;
        bVar11 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar7;
        if (bVar11) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar9);
        }
        LOCK();
        iVar7 = *(int *)(lVar10 + 0x10);
        bVar11 = iVar7 == 0;
        if (bVar11) {
          *(int *)(lVar10 + 0x10) = iVar9;
          iVar7 = 0;
        }
        UNLOCK();
        uVar5 = (uint)local_a8;
        if (bVar11) {
          iVar7 = iVar9;
        }
      }
    }
    local_a8._0_4_ = uVar5;
    local_a8 = CONCAT44(iVar7,(uint)local_a8);
  }
  else if (local_b0[0] == '\x02') {
    local_a8 = *(ulonglong *)(param_2 + 8);
  }
  else if (local_b0[0] == '\x03') {
    local_a8 = *(undefined8 *)(param_2 + 8);
    local_a0 = *(longlong **)(param_2 + 0x10);
    if (local_a0 == (longlong *)0x0) {
      local_98 = *(undefined8 *)(param_2 + 0x18);
      local_90 = param_2[0x20];
    }
    else {
      LOCK();
      *(int *)((longlong)local_a0 + 0xc) = *(int *)((longlong)local_a0 + 0xc) + 1;
      UNLOCK();
      local_98 = *(undefined8 *)(param_2 + 0x18);
      local_90 = param_2[0x20];
    }
  }
  local_88[0] = 0;
  if (*(int *)(param_2 + 0x28) != 0) {
    uVar8 = FUN_1448174c4(local_88);
    FUN_1400e08b0(uVar8,DAT_14c9a3da0 + (longlong)*(int *)(param_2 + 0x28) * 0x10 + -0x10);
  }
  local_80 = '\0';
  local_58[0] = 0;
  local_d8 = &local_c1;
  local_e0 = 1;
  local_e8 = uVar3;
  FUN_140c40077(&local_c0,*(undefined8 *)(param_1 + 0xf8),local_b0,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar4) & 0xffffffff);
  plVar2 = local_b8;
  *(undefined8 *)(param_2 + 0x30) = local_c0;
  local_c0 = 0;
  plVar6 = *(longlong **)(param_2 + 0x38);
  if (local_b8 == plVar6) {
LAB_140f75dcd:
    plVar6 = local_b8;
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_b8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_b8)(local_b8);
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
  else {
    local_b8 = (longlong *)0x0;
    *(longlong **)(param_2 + 0x38) = plVar2;
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
      goto LAB_140f75dcd;
    }
  }
  FUN_1448173f8(local_58);
  if (local_80 != '\0') {
    if (local_80 == '\x01') {
      local_78 = 0;
    }
    else if ((local_80 == '\x03') && (local_70 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_70 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_70 + 0x10))();
      }
    }
    local_80 = '\0';
  }
  FUN_1448173f8(local_88);
  if ((local_b0[0] == '\x03') && (local_a0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_a0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_a0 + 0x10))();
    }
  }
LAB_140f75e2b:
  if ((local_50 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f75f98 FUN_140f75f98 body=350 status=ok
// SIG undefined FUN_140f75f98(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140f75f98(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b3a1a90;
  param_1[0x15] = &PTR_FUN_14b023b20;
  param_1[0x18] = &PTR_FUN_14b023b40;
  if ((longlong *)param_1[0x2a] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x2a] + 0x10))();
  }
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  param_1[0x15] = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 0x17) != '\0') &&
     (plVar3 = (longlong *)param_1[0x16], plVar3 != (longlong *)0x0)) {
    if (plVar3[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar3 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar3;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  *param_1 = &PTR_FUN_14b39baf0;
  FUN_1401beee6(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_1401bef31(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[3];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140f76104 FUN_140f76104 body=36 status=ok
// SIG undefined FUN_140f76104(void)

undefined8 FUN_140f76104(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 140f76128 FUN_140f76128 body=122 status=ok
// SIG undefined FUN_140f76128(void)

void FUN_140f76128(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140f761a2(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ab36580;
  puVar1[0xe] = 0;
  *(undefined4 *)(puVar1 + 0xf) = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x84) = 0;
  puVar1[0x12] = 0;
  *(undefined4 *)(puVar1 + 0x13) = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  *(undefined4 *)(puVar1 + 0x1c) = 0;
  return;
}



// FUNCTION 140f761a2 FUN_140f761a2 body=105 status=ok
// SIG undefined FUN_140f761a2(void)

undefined8 * FUN_140f761a2(undefined8 *param_1,longlong *param_2)

{
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  *param_1 = &PTR_FUN_149fbcf90;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return param_1;
}



// FUNCTION 140f7620c FUN_140f7620c body=71 status=ok
// SIG undefined FUN_140f7620c(void)

void FUN_140f7620c(longlong param_1)

{
  FUN_140d2a262(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_140d2a2ab(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140f76254 FUN_140f76254 body=439 status=ok
// SIG undefined FUN_140f76254(void)

undefined8 FUN_140f76254(longlong param_1,longlong param_2,uint param_3)

{
  int *piVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  PSRWLOCK SRWLock;
  int iVar8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_3 == 0) {
    SRWLock = (PSRWLOCK)(param_1 + 0x378);
    AcquireSRWLockShared(SRWLock);
    if (param_2 == 0) {
      iVar7 = 0;
      iVar8 = 0;
    }
    else {
      local_48 = 0;
      FUN_14485c47a(&local_48,param_2);
      iVar8 = (int)local_48;
      iVar7 = local_48._4_4_;
    }
    uVar3 = FUN_144a78877(iVar8,iVar7);
    if (*(int *)(param_1 + 0x388) != *(int *)(param_1 + 0x3b4)) {
      lVar4 = param_1 + 0x3b8;
      if (*(longlong *)(param_1 + 0x3c0) != 0) {
        lVar4 = *(longlong *)(param_1 + 0x3c0);
      }
      iVar5 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x3c8) - 1U & uVar3) * 4);
      if (iVar5 != -1) {
        do {
          piVar1 = (int *)(*(longlong *)(param_1 + 0x380) + (longlong)iVar5 * 0x18);
          if ((*piVar1 == iVar8) &&
             (*(int *)(*(longlong *)(param_1 + 0x380) + 4 + (longlong)iVar5 * 0x18) == iVar7)) {
            puVar6 = (uint *)(piVar1 + 2);
            if (puVar6 != (uint *)0x0 && piVar1 != (int *)0x0) goto LAB_140f762ed;
            break;
          }
          iVar5 = piVar1[4];
        } while (iVar5 != -1);
      }
    }
  }
  else {
    SRWLock = (PSRWLOCK)(param_1 + 0x4e0);
    AcquireSRWLockShared(SRWLock);
    if (*(int *)(param_1 + 0x4f0) != *(int *)(param_1 + 0x51c)) {
      lVar4 = param_1 + 0x520;
      if (*(longlong *)(param_1 + 0x528) != 0) {
        lVar4 = *(longlong *)(param_1 + 0x528);
      }
      uVar3 = *(uint *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x530) - 1U & param_3) * 4);
      if (uVar3 != 0xffffffff) {
        do {
          puVar6 = (uint *)(*(longlong *)(param_1 + 0x4e8) + (longlong)(int)uVar3 * 0x18);
          if (*puVar6 == param_3) {
            if ((puVar6 != (uint *)0x0) && (puVar6 = puVar6 + 2, puVar6 != (uint *)0x0)) {
LAB_140f762ed:
              uVar2 = *(undefined8 *)puVar6;
              ReleaseSRWLockShared(SRWLock);
              if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
                FUN_144d8e3a0();
              }
              return uVar2;
            }
            break;
          }
          uVar3 = puVar6[4];
        } while (uVar3 != 0xffffffff);
      }
    }
  }
  ReleaseSRWLockShared(SRWLock);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_68);
}



// FUNCTION 140f76428 FUN_140f76428 body=2874 status=ok
// SIG undefined FUN_140f76428(void)

undefined8 FUN_140f76428(longlong param_1,longlong *param_2,uint param_3)

{
  longlong *plVar1;
  uint *puVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 ****ppppuVar11;
  byte bVar12;
  int iVar13;
  ulonglong uVar14;
  uint *puVar15;
  ulonglong uVar16;
  uint *puVar17;
  int iVar18;
  int iVar19;
  undefined2 *puVar20;
  uint uVar21;
  uint uVar22;
  undefined8 uVar23;
  PSRWLOCK SRWLock;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  int iVar27;
  uint uVar28;
  ulonglong uVar29;
  undefined1 auStack_a8 [36];
  uint local_84;
  PSRWLOCK local_80;
  longlong *local_78;
  int local_6c;
  undefined8 local_68;
  longlong **pplStack_60;
  undefined8 ***local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_84 = param_3;
  plVar9 = (longlong *)FUN_14001cc68(0x20);
  *plVar9 = 0;
  plVar9[1] = 0;
  plVar9[2] = 0;
  plVar9[3] = 0;
  local_78 = plVar9;
  lVar10 = (**(code **)(*param_2 + 0x308))(param_2);
  uVar28 = *(uint *)(lVar10 + 0x28);
  uVar16 = (ulonglong)uVar28;
  if ((int)uVar28 < 0) {
LAB_140f76de9:
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar16);
  }
  *(undefined4 *)(plVar9 + 3) = 0;
  if (*(uint *)((longlong)plVar9 + 0x1c) == uVar28) {
    iVar27 = 0;
    uVar22 = uVar28;
  }
  else {
    FUN_14481578e(plVar9 + 2,uVar28);
    iVar27 = (int)plVar9[3];
    uVar22 = *(uint *)((longlong)plVar9 + 0x1c);
  }
  *(uint *)(plVar9 + 3) = iVar27 + uVar28;
  if (uVar22 - iVar27 < uVar28) {
    FUN_1446f48e2();
  }
  if (param_2 != (longlong *)0x0) {
    local_68 = (undefined8 ****)0x0;
    pplStack_60 = (longlong **)0x0;
    local_50 = (undefined8 ***)param_2[3];
    FUN_1400348e2();
    uVar29 = 0;
    uVar14 = (ulonglong)(DAT_14cadbef0 - 1);
    if (DAT_14cadbef0 == 0) {
      uVar14 = uVar29;
    }
    if (0 < (int)uVar14) {
      puVar20 = &DAT_149dfb77a;
      if (DAT_14cadbef0 != 0) {
        puVar20 = DAT_14cadbee8;
      }
      ppppuVar11 = (undefined8 ****)&DAT_149dfb77a;
      if ((int)pplStack_60 != 0) {
        ppppuVar11 = local_68;
      }
      lVar25 = 0;
LAB_140f76540:
      uVar3 = *(ushort *)((longlong)ppppuVar11 + lVar25);
      uVar4 = *(ushort *)((longlong)puVar20 + lVar25);
      if (uVar3 == uVar4) {
        iVar27 = 0;
        if ((uVar3 == 0) || (uVar14 == 1)) goto LAB_140f7658e;
LAB_140f7655b:
        uVar14 = uVar14 - 1;
        lVar25 = lVar25 + 2;
        goto LAB_140f76540;
      }
      if ((uVar4 | uVar3) < 0x80) {
        if ((&DAT_149e05da0)[uVar3] != (&DAT_149e05da0)[(uint)uVar4]) {
          iVar27 = (uint)(byte)(&DAT_149e05da0)[uVar3] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar4];
          goto LAB_140f7658e;
        }
        if (uVar14 == 1) {
          iVar27 = 0;
          goto LAB_140f7658e;
        }
        goto LAB_140f7655b;
      }
      iVar27 = (uint)uVar3 - (uint)uVar4;
LAB_140f7658e:
      uVar29 = (ulonglong)(iVar27 == 0);
    }
    if (local_68 != (undefined8 ****)0x0) {
      FUN_1400020a8();
    }
    if ((char)uVar29 != '\0') {
      FUN_140721cc4(param_1,param_2,1);
    }
  }
  if (uVar28 != 0) {
    uVar14 = 0;
    do {
      lVar25 = *(longlong *)(*(longlong *)(lVar10 + 0x20) + uVar14 * 0xc);
      uVar8 = 0xffffffff;
      if ((lVar25 != 0) && (*(int *)(param_1 + 0xe8) != *(int *)(param_1 + 0x114))) {
        uVar28 = (uint)((ulonglong)lVar25 >> 0x10);
        uVar22 = (uint)lVar25 & 0xffff;
        lVar26 = *(longlong *)(param_1 + 0x120);
        if (*(longlong *)(param_1 + 0x120) == 0) {
          lVar26 = param_1 + 0x118;
        }
        iVar27 = *(int *)(lVar26 + (ulonglong)
                                   (*(int *)(param_1 + 0x128) - 1U &
                                   (int)((ulonglong)lVar25 >> 0x20) +
                                   ((uint)lVar25 << 0x10 | uVar22) +
                                   (uVar28 << 0x13 | uVar28 & 0xffff) + (uVar22 >> 4)) * 4);
        if (iVar27 != -1) {
          do {
            plVar1 = (longlong *)(*(longlong *)(param_1 + 0xe0) + (longlong)iVar27 * 0x14);
            if (*plVar1 == lVar25) {
              if ((plVar1 != (longlong *)0x0) && (plVar1 + 1 != (longlong *)0x0)) {
                uVar8 = (undefined4)plVar1[1];
              }
              break;
            }
            iVar27 = *(int *)((longlong)plVar1 + 0xc);
          } while (iVar27 != -1);
        }
      }
      *(undefined4 *)(plVar9[2] + uVar14 * 4) = uVar8;
      uVar14 = uVar14 + 1;
    } while (uVar14 != uVar16);
  }
  uVar28 = *(uint *)(param_1 + 0x78);
  uVar16 = (ulonglong)uVar28;
  if ((int)uVar28 < 0) goto LAB_140f76de9;
  *(undefined4 *)(plVar9 + 1) = 0;
  if (*(uint *)((longlong)plVar9 + 0xc) == uVar28) {
    iVar27 = 0;
    uVar22 = uVar28;
  }
  else {
    FUN_14481578e(plVar9,uVar28);
    iVar27 = (int)plVar9[1];
    uVar22 = *(uint *)((longlong)plVar9 + 0xc);
  }
  *(uint *)(plVar9 + 1) = iVar27 + uVar28;
  if (uVar22 - iVar27 < uVar28) {
    FUN_1446f48e2();
LAB_140f766d9:
    uVar14 = 0;
    do {
      lVar25 = *(longlong *)(*(longlong *)(param_1 + 0x70) + uVar14 * 0xc);
      uVar8 = 0xffffffff;
      if ((lVar25 != 0) && (*(int *)(lVar10 + 0x98) != *(int *)(lVar10 + 0xc4))) {
        uVar28 = (uint)((ulonglong)lVar25 >> 0x10);
        uVar22 = (uint)lVar25 & 0xffff;
        lVar26 = *(longlong *)(lVar10 + 0xd0);
        if (*(longlong *)(lVar10 + 0xd0) == 0) {
          lVar26 = lVar10 + 200;
        }
        iVar27 = *(int *)(lVar26 + (ulonglong)
                                   (*(int *)(lVar10 + 0xd8) - 1U &
                                   (int)((ulonglong)lVar25 >> 0x20) +
                                   ((uint)lVar25 << 0x10 | uVar22) +
                                   (uVar28 << 0x13 | uVar28 & 0xffff) + (uVar22 >> 4)) * 4);
        if (iVar27 != -1) {
          do {
            plVar1 = (longlong *)(*(longlong *)(lVar10 + 0x90) + (longlong)iVar27 * 0x14);
            if (*plVar1 == lVar25) {
              if ((plVar1 != (longlong *)0x0) && (plVar1 + 1 != (longlong *)0x0)) {
                uVar8 = (undefined4)plVar1[1];
              }
              break;
            }
            iVar27 = *(int *)((longlong)plVar1 + 0xc);
          } while (iVar27 != -1);
        }
      }
      *(undefined4 *)(*plVar9 + uVar14 * 4) = uVar8;
      uVar14 = uVar14 + 1;
    } while (uVar14 != uVar16);
  }
  else if (uVar28 != 0) goto LAB_140f766d9;
  if (local_84 == 0) {
    uVar16 = 0;
    local_50 = (undefined8 ****)0x0;
    uVar8 = 0;
    if (param_2 != (longlong *)0x0) {
      local_68 = (undefined8 ****)0x0;
      FUN_14485c47a(&local_68,param_2);
      uVar16 = (ulonglong)local_68 & 0xffffffff;
      local_50 = local_68;
      uVar8 = local_68._4_4_;
    }
    uVar8 = FUN_144a78877(uVar16,uVar8);
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x378));
    plVar9 = (longlong *)(param_1 + 0x380);
    lVar10 = FUN_14794c1ee(plVar9,uVar8,&local_50);
    if (lVar10 == 0) {
      pplStack_60 = &local_78;
      local_68 = &local_50;
      FUN_14794c246(plVar9,&local_6c,uVar8);
      lVar10 = *plVar9 + (longlong)local_6c * 0x18;
    }
    uVar23 = *(undefined8 *)(lVar10 + 8);
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x378));
    plVar9 = local_78;
    goto LAB_140f76c42;
  }
  SRWLock = (PSRWLOCK)(param_1 + 0x4e0);
  AcquireSRWLockExclusive(SRWLock);
  plVar1 = (longlong *)(param_1 + 0x4e8);
  uVar28 = *(uint *)(param_1 + 0x4f0);
  uVar22 = *(uint *)(param_1 + 0x51c);
  if (uVar28 != uVar22) {
    lVar10 = param_1 + 0x520;
    if (*(longlong *)(param_1 + 0x528) != 0) {
      lVar10 = *(longlong *)(param_1 + 0x528);
    }
    uVar7 = *(uint *)(lVar10 + (ulonglong)(*(int *)(param_1 + 0x530) - 1U & local_84) * 4);
    if (uVar7 != 0xffffffff) {
      do {
        puVar17 = (uint *)(*plVar1 + (longlong)(int)uVar7 * 0x18);
        if (*puVar17 == local_84) {
          if ((puVar17 != (uint *)0x0) && (puVar17 = puVar17 + 2, puVar17 != (uint *)0x0))
          goto LAB_140f76c36;
          break;
        }
        uVar7 = puVar17[4];
      } while (uVar7 != 0xffffffff);
    }
  }
  local_80 = SRWLock;
  if (uVar22 == 0) {
    *(uint *)(param_1 + 0x4f0) = uVar28 + 1;
    if (*(uint *)(param_1 + 0x4f4) == uVar28) {
      FUN_14482b872(plVar1,uVar28);
    }
    iVar27 = *(int *)(param_1 + 0x510);
    if (iVar27 == 0) {
      iVar6 = -1;
    }
    else {
      iVar6 = iVar27 + 0x1e;
      if (-1 < iVar27 + -1) {
        iVar6 = iVar27 + -1;
      }
      iVar6 = iVar6 >> 5;
    }
    lVar25 = param_1 + 0x4f8;
    iVar13 = iVar27 + 1;
    iVar18 = iVar27 + 0x1f;
    if (-1 < iVar27) {
      iVar18 = iVar27;
    }
    if (iVar18 >> 5 == iVar6) {
      *(int *)(param_1 + 0x510) = iVar13;
    }
    else {
      if (*(int *)(param_1 + 0x514) <= iVar27) {
        if (iVar27 + 0x20U < 0xa0) {
          iVar13 = 0x80;
          iVar6 = iVar27;
        }
        else {
          uVar22 = iVar27 + 0x20U >> 5;
          if (*(int *)(param_1 + 0x514) + 0x1fU < 0xa0) {
            uVar7 = 4;
            if (4 < uVar22) {
              uVar7 = uVar22;
            }
          }
          else {
            uVar7 = (uVar22 * 3 >> 3) + uVar22 + 0x10;
          }
          uVar16 = FUN_144a3809e(uVar7 << 2,0);
          iVar6 = (int)(uVar16 >> 2);
          iVar13 = -0x20;
          if ((int)uVar22 <= iVar6) {
            iVar13 = iVar6 << 5;
          }
          iVar6 = *(int *)(param_1 + 0x510);
        }
        *(int *)(param_1 + 0x514) = iVar13;
        FUN_1446efbd8(lVar25,iVar6);
        iVar13 = *(int *)(param_1 + 0x510) + 1;
      }
      iVar6 = iVar13 + 0x1f;
      if (-1 < iVar13) {
        iVar6 = iVar13;
      }
      *(int *)(param_1 + 0x510) = iVar13;
      if (iVar13 % 0x20 != 0) {
        lVar10 = *(longlong *)(param_1 + 0x508);
        if (*(longlong *)(param_1 + 0x508) == 0) {
          lVar10 = lVar25;
        }
        bVar12 = -(char)(iVar13 % 0x20);
        *(uint *)(lVar10 + (longlong)(iVar6 >> 5) * 4) =
             (uint)(*(int *)(lVar10 + (longlong)(iVar6 >> 5) * 4) << (bVar12 & 0x1f)) >>
             (bVar12 & 0x1f);
      }
    }
    lVar10 = (longlong)(int)uVar28;
    if (*(longlong *)(param_1 + 0x508) != 0) {
      lVar25 = *(longlong *)(param_1 + 0x508);
    }
    bVar12 = (byte)iVar27 & 0x1f;
    puVar17 = (uint *)(lVar25 + (longlong)(iVar18 >> 5) * 4);
    *puVar17 = *puVar17 & (-2 << bVar12 | 0xfffffffeU >> 0x20 - bVar12);
  }
  else {
    uVar28 = *(uint *)(param_1 + 0x518);
    lVar10 = (longlong)(int)uVar28;
    iVar27 = *(int *)(*(longlong *)(param_1 + 0x4e8) + 4 + lVar10 * 0x18);
    *(int *)(param_1 + 0x518) = iVar27;
    *(uint *)(param_1 + 0x51c) = uVar22 - 1;
    if (uVar22 - 1 != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x4e8) + (longlong)iVar27 * 0x18) = 0xffffffff;
    }
  }
  puVar17 = (uint *)(param_1 + 0x4f8);
  puVar15 = *(uint **)(param_1 + 0x508);
  if (*(uint **)(param_1 + 0x508) == (uint *)0x0) {
    puVar15 = puVar17;
  }
  uVar22 = uVar28 + 0x1f;
  if (-1 < (int)uVar28) {
    uVar22 = uVar28;
  }
  puVar15[(int)uVar22 >> 5] = puVar15[(int)uVar22 >> 5] | 1 << ((byte)uVar28 & 0x1f);
  uVar22 = 1;
  puVar15 = (uint *)(*(longlong *)(param_1 + 0x4e8) + lVar10 * 0x18);
  *puVar15 = local_84;
  *(longlong **)(puVar15 + 2) = plVar9;
  local_78 = (longlong *)0x0;
  puVar15[4] = 0xffffffff;
  uVar7 = *(int *)(param_1 + 0x4f0) - *(int *)(param_1 + 0x51c);
  if (1 < uVar7) {
    lVar10 = param_1 + 0x520;
    if (*(longlong *)(param_1 + 0x528) != 0) {
      lVar10 = *(longlong *)(param_1 + 0x528);
    }
    uVar21 = *(uint *)(lVar10 + (ulonglong)(*(int *)(param_1 + 0x530) - 1U & local_84) * 4);
    if (uVar21 != 0xffffffff) {
      do {
        puVar2 = (uint *)(*plVar1 + (longlong)(int)uVar21 * 0x18);
        if (*puVar2 == local_84) {
          FUN_140f76f64(*(undefined8 *)(puVar2 + 2));
          uVar22 = puVar15[1];
          uVar7 = puVar15[2];
          uVar5 = puVar15[3];
          *puVar2 = *puVar15;
          puVar2[1] = uVar22;
          puVar2[2] = uVar7;
          puVar2[3] = uVar5;
          FUN_14794c17c(plVar1,uVar28);
          uVar28 = uVar21;
          goto LAB_140f76c1d;
        }
        uVar21 = puVar2[4];
      } while (uVar21 != 0xffffffff);
    }
  }
  if (3 < uVar7) {
    uVar16 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
    lVar10 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar22 = 1 << ((byte)lVar10 & 0x1f);
  }
  if (((int)uVar7 < 1) || ((int)uVar22 <= *(int *)(param_1 + 0x530))) {
    uVar22 = *(int *)(param_1 + 0x530) - 1U & local_84;
    puVar15[5] = uVar22;
    lVar10 = *(longlong *)(param_1 + 0x528);
    if (*(longlong *)(param_1 + 0x528) == 0) {
      lVar10 = param_1 + 0x520;
    }
    puVar15[4] = *(uint *)(lVar10 + ((longlong)*(int *)(param_1 + 0x530) - 1U &
                                    (longlong)(int)uVar22) * 4);
    lVar10 = *(longlong *)(param_1 + 0x528);
    if (*(longlong *)(param_1 + 0x528) == 0) {
      lVar10 = param_1 + 0x520;
    }
    *(uint *)(lVar10 + ((longlong)*(int *)(param_1 + 0x530) - 1U & (longlong)(int)uVar22) * 4) =
         uVar28;
  }
  else {
    *(uint *)(param_1 + 0x530) = uVar22;
    plVar9 = (longlong *)(param_1 + 0x528);
    if (*(longlong *)(param_1 + 0x528) != 0) {
      FUN_1446efa72(plVar9,0,0,4);
      uVar22 = *(uint *)(param_1 + 0x530);
    }
    lVar10 = param_1 + 0x520;
    if (uVar22 == 1) {
      if (*plVar9 != 0) {
        FUN_1446efa72(plVar9,0,0,4);
      }
LAB_140f769f4:
      uVar7 = 0;
      do {
        lVar25 = *(longlong *)(param_1 + 0x528);
        if (*(longlong *)(param_1 + 0x528) == 0) {
          lVar25 = lVar10;
        }
        *(undefined4 *)(lVar25 + (ulonglong)(*(int *)(param_1 + 0x530) + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar22 != uVar7);
    }
    else {
      if (uVar22 == 0) goto LAB_140f76c1d;
      FUN_1446efa72(plVar9,0,uVar22,4);
      if (0 < (int)uVar22) goto LAB_140f769f4;
    }
    iVar27 = *(int *)(param_1 + 0x510);
    if (iVar27 == 0) {
      uVar16 = 0;
      uVar14 = 1;
      iVar6 = 0;
      iVar13 = 0;
    }
    else {
      puVar15 = *(uint **)(param_1 + 0x508);
      if (*(uint **)(param_1 + 0x508) == (uint *)0x0) {
        puVar15 = puVar17;
      }
      uVar22 = *puVar15;
      if (uVar22 == 0) {
        iVar6 = iVar27 + 0x1e;
        if (-1 < iVar27 + -1) {
          iVar6 = iVar27 + -1;
        }
        uVar16 = 0;
        uVar14 = (ulonglong)(uint)(iVar6 >> 5);
        if (iVar6 >> 5 < 1) {
          uVar14 = uVar16;
        }
        iVar13 = 0;
        do {
          if (uVar14 == uVar16) goto LAB_140f76c1d;
          iVar13 = iVar13 + 0x20;
          uVar22 = puVar15[uVar16 + 1];
          uVar16 = uVar16 + 1;
        } while (uVar22 == 0);
      }
      else {
        uVar16 = 0;
        iVar13 = 0;
      }
      uVar14 = (ulonglong)(-uVar22 & uVar22);
      uVar29 = uVar14 * 2 + 1;
      lVar25 = 0x3f;
      if (uVar29 != 0) {
        for (; uVar29 >> lVar25 == 0; lVar25 = lVar25 + -1) {
        }
      }
      iVar6 = (iVar13 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
      if (iVar27 <= iVar6) {
        iVar6 = iVar27;
      }
    }
    if (iVar6 < iVar27) {
      uVar22 = 0xffffffff;
      do {
        lVar25 = *(longlong *)(param_1 + 0x4e8);
        lVar24 = (longlong)iVar6;
        uVar29 = (longlong)*(int *)(param_1 + 0x530) - 1U &
                 (longlong)*(int *)(lVar25 + lVar24 * 0x18);
        iVar27 = (int)uVar29;
        *(int *)(lVar25 + 0x14 + lVar24 * 0x18) = iVar27;
        lVar26 = *(longlong *)(param_1 + 0x528);
        if (*(longlong *)(param_1 + 0x528) == 0) {
          lVar26 = lVar10;
        }
        *(undefined4 *)(lVar25 + 0x10 + lVar24 * 0x18) =
             *(undefined4 *)(lVar26 + ((longlong)*(int *)(param_1 + 0x530) - 1U & uVar29) * 4);
        lVar25 = *(longlong *)(param_1 + 0x528);
        if (*(longlong *)(param_1 + 0x528) == 0) {
          lVar25 = lVar10;
        }
        *(int *)(lVar25 + ((longlong)iVar27 & (longlong)*(int *)(param_1 + 0x530) - 1U) * 4) = iVar6
        ;
        uVar22 = ~(uint)uVar14 & uVar22;
        puVar15 = *(uint **)(param_1 + 0x508);
        if (*(uint **)(param_1 + 0x508) == (uint *)0x0) {
          puVar15 = puVar17;
        }
        iVar27 = *(int *)(param_1 + 0x510);
        iVar6 = (int)uVar16;
        lVar25 = (longlong)iVar6;
        uVar7 = puVar15[lVar25] & uVar22;
        if (uVar7 == 0) {
          iVar18 = iVar27 + 0x1e;
          if (-1 < iVar27 + -1) {
            iVar18 = iVar27 + -1;
          }
          iVar18 = iVar18 >> 5;
          iVar19 = iVar18;
          if (iVar18 < iVar6) {
            iVar19 = iVar6;
          }
          if (iVar18 <= iVar6) break;
          lVar26 = 0;
          while( true ) {
            iVar13 = iVar13 + 0x20;
            uVar7 = puVar15[lVar25 + lVar26 + 1];
            if (uVar7 != 0) break;
            lVar26 = lVar26 + 1;
            if (iVar19 - lVar25 == lVar26) goto LAB_140f76c1d;
          }
          uVar16 = (ulonglong)(iVar6 + (int)lVar26 + 1);
          uVar22 = 0xffffffff;
        }
        uVar14 = (ulonglong)(-uVar7 & uVar7);
        uVar29 = uVar14 * 2 + 1;
        lVar25 = 0x3f;
        if (uVar29 != 0) {
          for (; uVar29 >> lVar25 == 0; lVar25 = lVar25 + -1) {
          }
        }
        iVar6 = (iVar13 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
      } while (iVar6 < iVar27);
    }
  }
LAB_140f76c1d:
  puVar17 = (uint *)(*plVar1 + (longlong)(int)uVar28 * 0x18 + 8);
  plVar9 = (longlong *)0x0;
  SRWLock = local_80;
LAB_140f76c36:
  uVar23 = *(undefined8 *)puVar17;
  ReleaseSRWLockExclusive(SRWLock);
LAB_140f76c42:
  FUN_140f76f64(plVar9);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar23;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f76f64 FUN_140f76f64 body=60 status=ok
// SIG undefined FUN_140f76f64(void)

void FUN_140f76f64(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
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



// FUNCTION 140f76fae FUN_140f76fae body=118 status=ok
// SIG undefined FUN_140f76fae(void)

undefined8 * FUN_140f76fae(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b5dfa60;
  *(undefined4 *)(param_1 + 0x8a) = 0;
  if (param_1[0x89] != 0) {
    FUN_1400020a8();
  }
  FUN_14075386c(param_1 + 0x81);
  if (param_1[0x6a] != 0) {
    FUN_1400020a8();
  }
  FUN_1407538a4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140f77024 FUN_140f77024 body=478 status=ok
// SIG undefined FUN_140f77024(void)

void FUN_140f77024(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = plVar1;
  if ((int)param_1[5] == 0) {
    uVar15 = 1;
    local_58._4_4_ = 0;
    uVar14 = 0xffffffff;
    iVar16 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar15 = local_68 >> 0x20;
    uVar14 = (uint)local_58;
    iVar16 = (int)local_68;
  }
  plVar7 = local_60;
  iVar9 = local_58._4_4_;
  iVar12 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      plVar10 = *(longlong **)(*param_1 + 0x18 + (longlong)iVar9 * 0x28);
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar10 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar3 = (int *)((longlong)plVar10 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
      }
      uVar14 = uVar14 & ~(uint)uVar15;
      plVar10 = (longlong *)plVar7[2];
      if ((longlong *)plVar7[2] == (longlong *)0x0) {
        plVar10 = plVar7;
      }
      iVar5 = (int)plVar7[3];
      lVar13 = (longlong)iVar16;
      uVar8 = *(uint *)((longlong)plVar10 + lVar13 * 4) & uVar14;
      if (uVar8 == 0) {
        iVar9 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar9 = iVar5 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar6 = iVar9;
        if (iVar9 < iVar16) {
          iVar6 = iVar16;
        }
        if (iVar9 <= iVar16) break;
        lVar11 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar8 = *(uint *)((longlong)plVar10 + lVar11 * 4 + lVar13 * 4 + 4);
          if (uVar8 != 0) break;
          lVar11 = lVar11 + 1;
          if (iVar6 - lVar13 == lVar11) goto LAB_140f7715b;
        }
        iVar16 = iVar16 + (int)lVar11 + 1;
        uVar14 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar8 & uVar8);
      uVar4 = uVar15 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar9 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar9 < iVar5);
  }
LAB_140f7715b:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f77204 FUN_140f77204 body=481 status=ok
// SIG undefined FUN_140f77204(void)

void FUN_140f77204(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = plVar1;
  if ((int)param_1[5] == 0) {
    uVar15 = 1;
    local_58._4_4_ = 0;
    uVar14 = 0xffffffff;
    iVar16 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar15 = local_68 >> 0x20;
    uVar14 = (uint)local_58;
    iVar16 = (int)local_68;
  }
  plVar7 = local_60;
  iVar9 = local_58._4_4_;
  iVar12 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      plVar10 = *(longlong **)(*param_1 + 0x10 + (longlong)iVar9 * 0x20);
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar10 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar3 = (int *)((longlong)plVar10 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
      }
      uVar14 = uVar14 & ~(uint)uVar15;
      plVar10 = (longlong *)plVar7[2];
      if ((longlong *)plVar7[2] == (longlong *)0x0) {
        plVar10 = plVar7;
      }
      iVar5 = (int)plVar7[3];
      lVar13 = (longlong)iVar16;
      uVar8 = *(uint *)((longlong)plVar10 + lVar13 * 4) & uVar14;
      if (uVar8 == 0) {
        iVar9 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar9 = iVar5 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar6 = iVar9;
        if (iVar9 < iVar16) {
          iVar6 = iVar16;
        }
        if (iVar9 <= iVar16) break;
        lVar11 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar8 = *(uint *)((longlong)plVar10 + lVar11 * 4 + lVar13 * 4 + 4);
          if (uVar8 != 0) break;
          lVar11 = lVar11 + 1;
          if (iVar6 - lVar13 == lVar11) goto LAB_140f7733b;
        }
        iVar16 = iVar16 + (int)lVar11 + 1;
        uVar14 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar8 & uVar8);
      uVar4 = uVar15 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar9 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar9 < iVar5);
  }
LAB_140f7733b:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f773e6 FUN_140f773e6 body=749 status=ok
// SIG undefined FUN_140f773e6(void)

void FUN_140f773e6(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (lVar3 != 0) {
    *(undefined4 *)(lVar3 + 0x1c0) = 0;
    if (*(longlong *)(lVar3 + 0x1b8) != 0) {
      FUN_1400020a8();
    }
    plVar1 = (longlong *)(lVar3 + 0x178);
    lVar2 = lVar3 + 0x188;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    iStack_34 = 0;
    local_30 = 0;
    local_40 = lVar2;
    if (*(int *)(lVar3 + 0x1a0) != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    iStack_54 = iStack_34;
    local_50 = local_30;
    local_4c = local_2c;
    local_70 = plVar1;
    if (iStack_34 < *(int *)(local_40 + 0x18)) {
      do {
        FUN_140c9e334(*local_70 + (longlong)iStack_54 * 0x98 + 8);
        local_58 = local_58 & ~local_68._4_4_;
        FUN_1449c0562(&local_68);
      } while (iStack_54 < *(int *)(local_60 + 0x18));
    }
    *(undefined4 *)(lVar3 + 0x180) = 0;
    if (*(int *)(lVar3 + 0x184) != 0) {
      FUN_140f776e6(plVar1,0);
    }
    *(undefined8 *)(lVar3 + 0x1a8) = 0xffffffff;
    *(undefined4 *)(lVar3 + 0x1a0) = 0;
    if (0x80 < *(uint *)(lVar3 + 0x1a4)) {
      *(undefined4 *)(lVar3 + 0x1a4) = 0x80;
      FUN_1446efbd8(lVar2,0);
    }
    if (*(longlong *)(lVar3 + 0x198) != 0) {
      FUN_1400020a8();
    }
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    *(undefined4 *)(lVar3 + 0x170) = 0;
    if (*(longlong *)(lVar3 + 0x168) != 0) {
      FUN_1400020a8();
    }
    FUN_1408910a4(lVar3 + 0x128);
    *(undefined4 *)(lVar3 + 0x120) = 0;
    if (*(longlong *)(lVar3 + 0x118) != 0) {
      FUN_1400020a8();
    }
    FUN_1408910a4(lVar3 + 0xd8);
    *(undefined4 *)(lVar3 + 0xd0) = 0;
    if (*(longlong *)(lVar3 + 200) != 0) {
      FUN_1400020a8();
    }
    FUN_1408910a4(lVar3 + 0x88);
    FUN_1447a1747(*(undefined8 *)(lVar3 + 0x70),*(undefined4 *)(lVar3 + 0x78));
    if (*(longlong *)(lVar3 + 0x70) != 0) {
      FUN_1400020a8();
    }
    FUN_140861e20(*(undefined8 *)(lVar3 + 0x50),*(undefined4 *)(lVar3 + 0x58));
    if (*(longlong *)(lVar3 + 0x50) != 0) {
      FUN_1400020a8();
    }
    FUN_14111bf7d(*(undefined8 *)(lVar3 + 0x40),*(undefined4 *)(lVar3 + 0x48));
    if (*(longlong *)(lVar3 + 0x40) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(lVar3 + 0x20) != 0) {
      FUN_1400020a8();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f776e6 FUN_140f776e6 body=112 status=ok
// SIG undefined FUN_140f776e6(void)

void FUN_140f776e6(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x98,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x98)) {
      uVar2 = uVar1 / 0x98 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x98,8);
  }
  return;
}



// FUNCTION 140f77756 FUN_140f77756 body=1784 status=ok
// SIG undefined FUN_140f77756(void)

void FUN_140f77756(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined8 *puVar13;
  int iVar14;
  int iVar15;
  longlong *plVar16;
  longlong **pplVar17;
  longlong *plVar18;
  uint uVar19;
  longlong lVar20;
  uint *puVar21;
  undefined8 *puVar22;
  ulonglong uVar23;
  undefined1 auStack_118 [32];
  longlong *local_f8;
  undefined8 *local_f0;
  longlong local_e8;
  undefined8 *puStack_e0;
  uint local_d8;
  int iStack_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  uint local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  longlong local_a8;
  undefined4 local_a0;
  longlong *local_98;
  uint *local_90;
  uint uStack_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *param_1 = &PTR_FUN_14aabe700;
  uVar7 = FUN_140c61bfa();
  FUN_140457ffc(uVar7,param_1);
  puVar13 = param_1 + 4;
  local_98 = (longlong *)0x100000000;
  local_90 = (uint *)puVar13;
  local_88 = (undefined8 *)0xffffffff;
  local_80 = (ulonglong)local_80._4_4_ << 0x20;
  if (*(int *)(param_1 + 7) == 0) {
    uVar23 = 1;
    local_88._0_4_ = 0xffffffff;
    iVar15 = 0;
    iVar14 = 0;
    local_88._4_4_ = 0;
    local_98._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_98);
    uVar23 = (ulonglong)local_98 >> 0x20;
    iVar15 = *(int *)(param_1 + 7);
    iVar14 = (uint)local_80;
  }
  puVar1 = (undefined8 *)local_90;
  local_f8 = param_1 + 2;
  iVar11 = (int)local_98;
  uVar9 = (uint)local_88;
  iVar10 = local_88._4_4_;
  if (local_88._4_4_ != iVar15 || local_90 != (uint *)puVar13) {
    do {
      FUN_140f77e50(*(undefined8 *)(*local_f8 + 0x20 + (longlong)iVar10 * 0x30));
      uVar9 = ~(uint)uVar23 & uVar9;
      puVar22 = (undefined8 *)puVar1[2];
      if ((undefined8 *)puVar1[2] == (undefined8 *)0x0) {
        puVar22 = puVar1;
      }
      iVar3 = *(int *)(puVar1 + 3);
      lVar20 = (longlong)iVar11;
      uVar19 = *(uint *)((longlong)puVar22 + lVar20 * 4) & uVar9;
      if (uVar19 == 0) {
        iVar10 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar10 = iVar3 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar14 = iVar14 + 0x20;
        iVar5 = iVar10;
        if (iVar10 < iVar11) {
          iVar5 = iVar11;
        }
        if (iVar11 < iVar10) {
          lVar8 = 0;
          do {
            uVar19 = *(uint *)((longlong)puVar22 + lVar8 * 4 + lVar20 * 4 + 4);
            if (uVar19 != 0) {
              iVar11 = iVar11 + (int)lVar8 + 1;
              uVar9 = 0xffffffff;
              goto LAB_140f778ad;
            }
            iVar14 = iVar14 + 0x20;
            lVar8 = lVar8 + 1;
          } while (iVar5 - lVar20 != lVar8);
          uVar9 = 0xffffffff;
          iVar11 = iVar5;
        }
        iVar11 = iVar11 + 1;
        iVar10 = iVar3;
      }
      else {
LAB_140f778ad:
        uVar23 = (ulonglong)(-uVar19 & uVar19);
        uVar2 = uVar23 * 2 + 1;
        lVar20 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar20 == 0; lVar20 = lVar20 + -1) {
          }
        }
        iVar10 = (iVar14 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar10) {
          iVar10 = iVar3;
        }
      }
    } while (iVar10 != iVar15 || puVar1 != puVar13);
  }
  uVar9 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_e8 = 0;
  puStack_e0 = (undefined8 *)0x0;
  local_bc = 0xffffffff00000080;
  local_b4 = 0;
  local_a8 = 0;
  local_a0 = 0;
  plVar16 = &local_e8;
  pplVar17 = &local_98;
  for (lVar20 = 10; lVar20 != 0; lVar20 = lVar20 + -1) {
    *pplVar17 = (longlong *)*plVar16;
    plVar16 = plVar16 + 1;
    pplVar17 = pplVar17 + 1;
  }
  plVar16 = local_f8;
  plVar18 = &local_e8;
  for (lVar20 = 10; lVar20 != 0; lVar20 = lVar20 + -1) {
    *plVar18 = *plVar16;
    plVar16 = plVar16 + 1;
    plVar18 = plVar18 + 1;
  }
  pplVar17 = &local_98;
  plVar16 = local_f8;
  for (lVar20 = 10; lVar20 != 0; lVar20 = lVar20 + -1) {
    *plVar16 = (longlong)*pplVar17;
    pplVar17 = pplVar17 + 1;
    plVar16 = plVar16 + 1;
  }
  local_98 = (longlong *)0x100000000;
  local_90 = &local_d8;
  local_88 = (undefined8 *)0xffffffff;
  local_80 = local_80 & 0xffffffff00000000;
  local_f0 = param_1;
  if (local_c0 == 0) {
    uVar23 = 1;
    local_88._0_4_ = 0xffffffff;
    iVar15 = 0;
    local_88._4_4_ = 0;
    local_98._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_98);
    uVar23 = (ulonglong)local_98 >> 0x20;
    iVar15 = (uint)local_80;
    uVar9 = local_c0;
  }
  puVar6 = local_90;
  iVar14 = (int)local_98;
  uVar19 = (uint)local_88;
  uVar12 = local_88._4_4_;
  if (local_88._4_4_ != uVar9 || local_90 != &local_d8) {
    do {
      lVar20 = *(longlong *)(local_e8 + 0x20 + (longlong)(int)uVar12 * 0x30);
      if (lVar20 != 0) {
        FUN_144936a5c(*(undefined8 *)(lVar20 + 0x18),*(undefined4 *)(lVar20 + 0x20));
        if (*(longlong *)(lVar20 + 0x18) != 0) {
          FUN_1400020a8();
        }
        if (*(longlong *)(lVar20 + 8) != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(lVar20);
      }
      uVar19 = uVar19 & ~(uint)uVar23;
      puVar21 = *(uint **)(puVar6 + 4);
      if (*(uint **)(puVar6 + 4) == (uint *)0x0) {
        puVar21 = puVar6;
      }
      uVar4 = puVar6[6];
      lVar20 = (longlong)iVar14;
      uVar12 = puVar21[lVar20] & uVar19;
      if (uVar12 == 0) {
        iVar11 = uVar4 + 0x1e;
        if (-1 < (int)(uVar4 - 1)) {
          iVar11 = uVar4 - 1;
        }
        iVar11 = iVar11 >> 5;
        iVar15 = iVar15 + 0x20;
        iVar10 = iVar11;
        if (iVar11 < iVar14) {
          iVar10 = iVar14;
        }
        if (iVar14 < iVar11) {
          lVar8 = 0;
          do {
            uVar12 = puVar21[lVar20 + lVar8 + 1];
            if (uVar12 != 0) {
              iVar14 = iVar14 + (int)lVar8 + 1;
              uVar19 = 0xffffffff;
              goto LAB_140f77a7b;
            }
            iVar15 = iVar15 + 0x20;
            lVar8 = lVar8 + 1;
          } while (iVar10 - lVar20 != lVar8);
          uVar19 = 0xffffffff;
          iVar14 = iVar10;
        }
        iVar14 = iVar14 + 1;
        uVar12 = uVar4;
      }
      else {
LAB_140f77a7b:
        uVar23 = (ulonglong)(-uVar12 & uVar12);
        uVar2 = uVar23 * 2 + 1;
        lVar20 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar20 == 0; lVar20 = lVar20 + -1) {
          }
        }
        uVar12 = (iVar15 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
        if ((int)uVar4 <= (int)uVar12) {
          uVar12 = uVar4;
        }
      }
    } while (uVar12 != uVar9 || puVar6 != &local_d8);
  }
  local_a0 = 0;
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  FUN_140f780e0(&local_e8);
  puVar13 = local_f0;
  if (local_f0[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_144936a5c(puVar13[0x1a],*(undefined4 *)(puVar13 + 0x1b));
  if (puVar13[0x1a] != 0) {
    FUN_1400020a8();
  }
  FUN_144936a5c(puVar13[0x18],*(undefined4 *)(puVar13 + 0x19));
  if (puVar13[0x18] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(puVar13 + 0x17) = 0;
  if (puVar13[0x16] != 0) {
    FUN_1400020a8();
  }
  plVar16 = puVar13 + 0xe;
  puVar1 = puVar13 + 0x10;
  local_e8 = 0x100000000;
  local_d8 = 0xffffffff;
  iStack_d4 = 0;
  local_d0 = 0;
  puStack_e0 = puVar1;
  if (*(int *)(puVar13 + 0x13) != 0) {
    FUN_1449c0562(&local_e8);
  }
  local_90 = (uint *)local_e8;
  local_88 = puStack_e0;
  local_80._0_4_ = local_d8;
  local_80._4_4_ = iStack_d4;
  local_78 = local_d0;
  local_74 = local_cc;
  local_98 = plVar16;
  if (iStack_d4 < *(int *)(puStack_e0 + 3)) {
    do {
      lVar20 = *local_98;
      lVar8 = (longlong)(int)local_80._4_4_;
      if (*(longlong *)(lVar20 + 0x30 + lVar8 * 0x50) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar20 + lVar8 * 0x50 + 0x10) != 0) {
        FUN_1400020a8();
      }
      local_80._0_4_ = (uint)local_80 & ~uStack_8c;
      FUN_1449c0562(&stack0xffffffffffffff70);
      puVar13 = local_f0;
    } while ((int)local_80._4_4_ < *(int *)(local_88 + 3));
  }
  *(undefined4 *)(puVar13 + 0xf) = 0;
  if (*(int *)((longlong)puVar13 + 0x7c) != 0) {
    FUN_140e9549c(plVar16,0);
  }
  puVar13[0x14] = 0xffffffff;
  *(undefined4 *)(puVar13 + 0x13) = 0;
  if (0x80 < *(uint *)((longlong)puVar13 + 0x9c)) {
    *(undefined4 *)((longlong)puVar13 + 0x9c) = 0x80;
    FUN_1446efbd8(puVar1,0);
  }
  if (puVar13[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*plVar16 != 0) {
    FUN_1400020a8();
  }
  FUN_140f7807b(puVar13[0xc],*(undefined4 *)(puVar13 + 0xd));
  if (puVar13[0xc] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(puVar13 + 0xb) = 0;
  if (puVar13[10] != 0) {
    FUN_1400020a8();
  }
  FUN_140f780e0(local_f8);
  *puVar13 = &PTR_LAB_149e668b0;
  if ((DAT_14c948580 != 0) && (*(char *)((longlong)puVar13 + 9) == '\x01')) {
    FUN_14019e20a(DAT_14c948580,puVar13);
    *(undefined1 *)((longlong)puVar13 + 9) = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f77e50 FUN_140f77e50 body=554 status=ok
// SIG undefined FUN_140f77e50(void)

void FUN_140f77e50(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  undefined4 uVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong *plStack_70;
  undefined8 *local_68;
  ulonglong uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar9 = *(longlong *)(param_1 + 0x18);
  iVar8 = *(int *)(param_1 + 0x20);
  uVar10 = 0;
  if ((longlong)iVar8 != 0) {
    lVar11 = 0;
    do {
      piVar2 = (int *)(*(longlong *)(lVar9 + lVar11) + 0x5c);
      *piVar2 = *piVar2 + -1;
      lVar11 = lVar11 + 0x10;
    } while ((longlong)iVar8 * 0x10 != lVar11);
    uVar10 = *(undefined4 *)(param_1 + 0x20);
    lVar9 = *(longlong *)(param_1 + 0x18);
  }
  FUN_144936a5c(lVar9,uVar10);
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_1402a19c0(param_1 + 0x18);
  }
  uVar7 = *(uint *)(param_1 + 0x10);
  if (0 < (int)uVar7) {
    do {
      puVar3 = *(undefined8 **)(*(longlong *)(param_1 + 8) + -8 + (ulonglong)uVar7 * 8);
      uVar7 = uVar7 - 1;
      *(uint *)(param_1 + 0x10) = uVar7;
      if (*(char *)((longlong)puVar3 + 0x12) == '\0') {
        *(undefined1 *)((longlong)puVar3 + 0x12) = 1;
        puVar3[0x13] = 0;
        if (*(char *)((longlong)puVar3 + 0x11) == '\x01') {
          FUN_1408870fe(puVar3);
        }
        else {
          plVar4 = (longlong *)puVar3[1];
          if (plVar4 == (longlong *)0x0) {
LAB_140f7800d:
            local_78 = 0;
            plStack_70 = (longlong *)0x0;
            bVar12 = true;
          }
          else {
            iVar8 = (int)plVar4[1];
            do {
              if (iVar8 == 0) goto LAB_140f7800d;
              LOCK();
              iVar6 = (int)plVar4[1];
              bVar12 = iVar8 == iVar6;
              if (bVar12) {
                *(int *)(plVar4 + 1) = iVar8 + 1;
                iVar6 = iVar8;
              }
              iVar8 = iVar6;
              UNLOCK();
            } while (!bVar12);
            uVar5 = *puVar3;
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
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
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
            bVar12 = false;
            local_78 = uVar5;
            plStack_70 = plVar4;
          }
          plVar4 = plStack_70;
          uStack_60 = 0;
          local_68 = (undefined8 *)0x0;
          FUN_1402a1d54(puVar3 + 5,&local_78,&local_68);
          if ((int)uStack_60 == 0) {
LAB_140f77f78:
            if (local_68 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
          }
          else if (local_68 != (undefined8 *)0x0) {
            (**(code **)*local_68)(local_68,0);
            FUN_1446efa72(&local_68,0,0,0x10);
            uStack_60 = uStack_60 & 0xffffffff00000000;
            goto LAB_140f77f78;
          }
          FUN_1402a1ed4(puVar3);
          FUN_1408870fe(puVar3);
          if (!bVar12) {
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
        }
        uVar7 = *(uint *)(param_1 + 0x10);
      }
    } while (0 < (int)uVar7);
  }
  if ((local_50 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f7807b FUN_140f7807b body=100 status=ok
// SIG undefined FUN_140f7807b(void)

void FUN_140f7807b(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + lVar2 * 8);
      if (lVar1 != 0) {
        FUN_144936a5c(*(undefined8 *)(lVar1 + 0x18),*(undefined4 *)(lVar1 + 0x20));
        if (*(longlong *)(lVar1 + 0x18) != 0) {
          FUN_1400020a8();
        }
        if (*(longlong *)(lVar1 + 8) != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(lVar1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 140f780e0 FUN_140f780e0 body=507 status=ok
// SIG undefined FUN_140f780e0(void)

void FUN_140f780e0(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  undefined1 auStack_88 [40];
  ulonglong local_60;
  longlong *local_58;
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  local_48 = 0;
  local_58 = plVar1;
  if ((int)param_1[5] == 0) {
    uVar13 = 1;
    local_50._4_4_ = 0;
    uVar11 = 0xffffffff;
    iVar14 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    uVar13 = local_60 >> 0x20;
    uVar11 = (uint)local_50;
    iVar14 = (int)local_60;
  }
  plVar4 = local_58;
  iVar5 = (int)local_58[3];
  iVar7 = local_50._4_4_;
  iVar10 = local_48;
  if (local_50._4_4_ < iVar5) {
    do {
      if (*(longlong *)(*param_1 + 0x10 + (longlong)iVar7 * 0x30) != 0) {
        FUN_1400020a8();
        iVar5 = (int)plVar4[3];
      }
      uVar11 = uVar11 & ~(uint)uVar13;
      plVar8 = (longlong *)plVar4[2];
      if ((longlong *)plVar4[2] == (longlong *)0x0) {
        plVar8 = plVar4;
      }
      lVar12 = (longlong)iVar14;
      uVar6 = *(uint *)((longlong)plVar8 + lVar12 * 4) & uVar11;
      if (uVar6 == 0) {
        iVar7 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar7 = iVar5 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar3 = iVar7;
        if (iVar7 < iVar14) {
          iVar3 = iVar14;
        }
        if (iVar7 <= iVar14) break;
        lVar9 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar6 = *(uint *)((longlong)plVar8 + lVar9 * 4 + lVar12 * 4 + 4);
          if (uVar6 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar3 - lVar12 == lVar9) goto LAB_140f781fb;
        }
        iVar14 = iVar14 + (int)lVar9 + 1;
        uVar11 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar6 & uVar6);
      uVar2 = uVar13 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar7 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar5);
  }
LAB_140f781fb:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14494313c(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_88);
}



// FUNCTION 140f782f2 FUN_140f782f2 body=5687 status=ok
// SIG undefined FUN_140f782f2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140f782f2(longlong *param_1)

{
  double dVar1;
  undefined1 auVar2 [16];
  double *pdVar3;
  bool bVar4;
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
  char cVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined *puVar18;
  longlong lVar19;
  int iVar20;
  uint uVar21;
  uint *puVar22;
  longlong *plVar23;
  longlong lVar24;
  bool bVar25;
  ulonglong uVar26;
  longlong lVar27;
  longlong lVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  undefined1 auStack_2e8 [32];
  undefined8 local_2c8;
  undefined1 local_2c0;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  undefined1 local_298 [16];
  double local_288;
  double local_280;
  double local_278;
  double local_270;
  undefined1 local_268 [16];
  double local_258;
  double local_248;
  double local_240;
  double local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  double local_218;
  double local_210;
  double local_208;
  undefined1 local_200 [24];
  undefined1 local_1e8 [16];
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  longlong local_188;
  longlong lStack_180;
  longlong local_178;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  undefined1 local_120 [24];
  double local_108;
  double dStack_100;
  double local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  pdVar3 = (double *)param_1[2];
  lVar28 = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar3[5] - DAT_14c8464a8));
  auVar2._8_4_ = (int)lVar28;
  auVar2._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar3[4] - DAT_14c8464a0));
  auVar2._12_4_ = (int)((ulonglong)lVar28 >> 0x20);
  uVar16 = movmskpd((int)local_f0,auVar2);
  auVar7._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar3[7] - DAT_14c8464b8));
  auVar7._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar3[6] - DAT_14c8464b0));
  iVar20 = movmskpd((int)param_1,auVar7);
  uVar21 = iVar20 << 2 | uVar16;
  if (uVar21 == 0) {
    lVar28 = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar3[1] - DAT_14c846488));
    auVar36._8_4_ = (int)lVar28;
    auVar36._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(*pdVar3 - DAT_14c846480));
    auVar36._12_4_ = (int)((ulonglong)lVar28 >> 0x20);
    uVar16 = movmskpd(uVar16,auVar36);
    lVar28 = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar3[3] - DAT_14c846498));
    auVar34._8_4_ = (int)lVar28;
    auVar34._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar3[2] - DAT_14c846490));
    auVar34._12_4_ = (int)((ulonglong)lVar28 >> 0x20);
    iVar20 = movmskpd(0,auVar34);
    uVar21 = iVar20 << 2 | uVar16;
    if (uVar21 != 0) {
      lVar28 = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar3[1] + DAT_14c846488));
      auVar12._8_4_ = (int)lVar28;
      auVar12._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(*pdVar3 + DAT_14c846480));
      auVar12._12_4_ = (int)((ulonglong)lVar28 >> 0x20);
      uVar16 = movmskpd(uVar16,auVar12);
      auVar9._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar3[3] + DAT_14c846498));
      auVar9._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar3[2] + DAT_14c846490));
      iVar20 = movmskpd(uVar21,auVar9);
      uVar21 = iVar20 << 2 | uVar16;
      if (uVar21 != 0) goto LAB_140f78544;
    }
    lVar28 = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar3[9] - DAT_14c8464c8));
    auVar10._8_4_ = (int)lVar28;
    auVar10._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar3[8] - DAT_14c8464c0));
    auVar10._12_4_ = (int)((ulonglong)lVar28 >> 0x20);
    uVar21 = movmskpd(uVar16,auVar10);
    auVar6._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar3[0xb] - dRam000000014c8464d8));
    auVar6._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar3[10] - DAT_14c8464d0));
    iVar20 = movmskpd(0,auVar6);
    uVar21 = iVar20 << 2 | uVar21;
    if (uVar21 == 0) goto LAB_140f78489;
  }
LAB_140f78544:
  if (param_1[1] == 0) {
    lVar28 = -(ulonglong)(9.99999993922529e-09 < ABS(pdVar3[1] - DAT_14c8463d8));
    auVar14._8_4_ = (int)lVar28;
    auVar14._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(*pdVar3 - DAT_14c8463d0));
    auVar14._12_4_ = (int)((ulonglong)lVar28 >> 0x20);
    uVar16 = movmskpd(0,auVar14);
    lVar28 = -(ulonglong)(9.99999993922529e-09 < ABS(pdVar3[3] - DAT_14c8463e8));
    auVar11._8_4_ = (int)lVar28;
    auVar11._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(pdVar3[2] - DAT_14c8463e0));
    auVar11._12_4_ = (int)((ulonglong)lVar28 >> 0x20);
    iVar20 = movmskpd(uVar21,auVar11);
    uVar21 = iVar20 << 2 | uVar16;
    if (uVar21 != 0) {
      auVar5._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(pdVar3[1] + DAT_14c8463d8));
      auVar5._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(*pdVar3 + DAT_14c8463d0));
      iVar20 = movmskpd(uVar16,auVar5);
      auVar8._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(pdVar3[3] + DAT_14c8463e8));
      auVar8._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(pdVar3[2] + DAT_14c8463e0));
      uVar16 = movmskpd(uVar21,auVar8);
      if ((uVar16 & 0x3fffffff) != 0 || iVar20 != 0) {
        *(byte *)(*param_1 + 0x240) = *(byte *)(*param_1 + 0x240) | 8;
      }
    }
    lVar28 = *param_1;
    lVar24 = *(longlong *)(lVar28 + 0xd0);
    iVar20 = *(int *)(lVar28 + 0xd8);
    if ((char)param_1[3] == '\x01') {
      if (iVar20 != 0) {
        lVar28 = 0;
        do {
          lVar27 = *(longlong *)(lVar24 + lVar28);
          if (lVar27 != 0) {
            pdVar3 = (double *)param_1[2];
            dVar38 = *(double *)(lVar27 + 0x198) * pdVar3[8];
            dVar39 = *(double *)(lVar27 + 0x1a0) * pdVar3[9];
            dVar43 = *(double *)(lVar27 + 0x1a8) * pdVar3[10];
            dVar33 = *pdVar3;
            dVar40 = pdVar3[1];
            dVar30 = pdVar3[2];
            dVar1 = pdVar3[3];
            dVar41 = dVar39 * dVar33 - dVar38 * dVar40;
            dVar44 = dVar43 * dVar40 - dVar39 * dVar30;
            dVar32 = dVar38 * dVar30 - dVar33 * dVar43;
            dVar44 = dVar44 + dVar44;
            dVar32 = dVar32 + dVar32;
            dVar41 = dVar41 + dVar41;
            dVar39 = (dVar30 * dVar44 - dVar33 * dVar41) + pdVar3[3] * dVar32 + dVar39 + pdVar3[5];
            local_1d8 = dVar41 * dVar1 + dVar43 + (dVar32 * dVar33 - dVar44 * dVar40) + pdVar3[6];
            local_1e8._8_4_ = SUB84(dVar39,0);
            local_1e8._0_8_ =
                 (dVar41 * dVar40 - dVar32 * dVar30) + dVar1 * dVar44 + dVar38 + pdVar3[4];
            local_1e8._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
            FUN_144a48320(lVar27,local_1e8);
            pdVar3 = (double *)param_1[2];
            local_178 = *(longlong *)(lVar27 + 0x1c0);
            local_188 = *(longlong *)(lVar27 + 0x1b0);
            lStack_180 = *(longlong *)(lVar27 + 0x1b8);
            FUN_144a7484c(&local_188,&local_168);
            dVar1 = pdVar3[3];
            dVar41 = pdVar3[3];
            dVar39 = pdVar3[1];
            dVar32 = pdVar3[1];
            dVar40 = pdVar3[2];
            dVar33 = pdVar3[2];
            local_148 = dStack_160 * dVar40 * -1.0 +
                        local_158 * dVar39 + *pdVar3 * dStack_150 * 1.0 + dVar1 * local_168;
            dStack_140 = local_168 * dVar33 * 1.0 +
                         dStack_150 * dVar32 + *pdVar3 * local_158 * -1.0 + dVar41 * dStack_160;
            local_138 = dStack_150 * dVar40 * 1.0 +
                        ((*pdVar3 * dStack_160 * 1.0 + dVar1 * local_158) - dVar39 * local_168);
            dStack_130 = local_158 * dVar33 * -1.0 +
                         ((*pdVar3 * local_168 * -1.0 + dVar41 * dStack_150) - dVar32 * dStack_160);
            FUN_1448052ee(&local_148,local_200);
            FUN_144b21d44(lVar27,local_200);
            lVar19 = param_1[2];
            local_208 = *(double *)(lVar19 + 0x50) * *(double *)(lVar27 + 0x1d8);
            local_210 = *(double *)(lVar19 + 0x48) * *(double *)(lVar27 + 0x1d0);
            local_218 = *(double *)(lVar19 + 0x40) * *(double *)(lVar27 + 0x1c8);
            FUN_14084f00a(lVar27,&local_218);
          }
          lVar28 = lVar28 + 8;
        } while ((longlong)iVar20 * 8 != lVar28);
        lVar28 = *param_1;
      }
      auVar7 = _DAT_1499387d0;
      iVar20 = *(int *)(lVar28 + 0xa8);
      if ((longlong)iVar20 != 0) {
        lVar28 = *(longlong *)(lVar28 + 0xa0);
        lVar24 = 0;
        dVar1 = (double)DAT_1499387d0;
        dVar41 = DAT_1499387d0._8_8_;
        do {
          lVar27 = *(longlong *)(lVar28 + lVar24);
          if (((lVar27 != 0) && (lVar27 = *(longlong *)(lVar27 + 0x1c8), lVar27 != 0)) &&
             (*(longlong *)(lVar27 + 0x120) == 0)) {
            pdVar3 = (double *)param_1[2];
            dVar37 = *(double *)(lVar27 + 0x198) * pdVar3[8];
            dVar39 = *(double *)(lVar27 + 0x1a0) * pdVar3[9];
            dVar29 = *(double *)(lVar27 + 0x1a8) * pdVar3[10];
            dVar38 = *pdVar3;
            dVar44 = pdVar3[1];
            dVar31 = pdVar3[2];
            dVar32 = pdVar3[3];
            dVar40 = dVar39 * dVar38 - dVar37 * dVar44;
            dVar42 = dVar29 * dVar44 - dVar39 * dVar31;
            dVar43 = dVar37 * dVar31 - dVar38 * dVar29;
            dVar42 = dVar42 + dVar42;
            dVar43 = dVar43 + dVar43;
            dVar40 = dVar40 + dVar40;
            dVar33 = pdVar3[4];
            dVar30 = (dVar31 * dVar42 - dVar38 * dVar40) + pdVar3[3] * dVar43 + dVar39 + pdVar3[5];
            dVar39 = pdVar3[6];
            uVar17 = *(ulonglong *)(lVar27 + 0x38);
            if (uVar17 < 0xffffffff00000000) {
              plVar23 = DAT_14c9980d0;
              if (DAT_14c9980d8 == 0) {
                plVar23 = (longlong *)0x0;
              }
              (**(code **)(*plVar23 + 0x58))(dVar29,lVar27,uVar17,5);
            }
            else {
              uVar16 = (uint)uVar17;
              if ((-1 < (int)uVar16) && ((int)uVar16 < DAT_14c998088)) {
                puVar18 = DAT_14c998080;
                if (DAT_14c998080 == (undefined *)0x0) {
                  puVar18 = &DAT_14c998070;
                }
                if ((*(uint *)(puVar18 + ((uint)(uVar17 >> 3) & 0xffffffc)) >> (uVar16 & 0x1f) & 1)
                    != 0) {
                  lVar19 = DAT_14c998060 + (ulonglong)(uVar16 & 0x7fffffff) * 0x68;
                  puVar22 = *(uint **)(lVar19 + 0x18);
                  if (*(uint **)(lVar19 + 0x18) == (uint *)0x0) {
                    puVar22 = (uint *)(lVar19 + 8);
                  }
                  *puVar22 = *puVar22 | 0x20;
                  *(byte *)(lVar19 + 0x60) = *(byte *)(lVar19 + 0x60) | 1;
                }
              }
            }
            auVar13._8_4_ = SUB84(dVar30,0);
            auVar13._0_8_ = (dVar40 * dVar44 - dVar43 * dVar31) + dVar32 * dVar42 + dVar37 + dVar33;
            auVar13._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
            *(undefined1 (*) [16])(lVar27 + 0x198) = auVar13;
            *(double *)(lVar27 + 0x1a8) =
                 dVar40 * dVar32 + dVar29 + (dVar43 * dVar38 - dVar42 * dVar44) + dVar39;
            pdVar3 = (double *)param_1[2];
            auVar2 = *(undefined1 (*) [16])(lVar27 + 0x1b0);
            auVar34 = divpd(auVar2,auVar7);
            auVar35._8_8_ = 0;
            auVar35._0_8_ = *(double *)(lVar27 + 0x1c0);
            auVar36 = divpd(auVar35,auVar7);
            auVar34 = roundpd(auVar34,auVar34,3);
            auVar36 = roundpd(auVar36,auVar36,3);
            dVar32 = (auVar2._0_8_ - auVar34._0_8_ * dVar1) * 0.008726646259971648;
            dVar39 = (auVar2._8_8_ - auVar34._8_8_ * dVar41) * 0.008726646259971648;
            dVar33 = (*(double *)(lVar27 + 0x1c0) - auVar36._0_8_ * dVar1) * 0.008726646259971648;
            dVar40 = (0.0 - auVar36._8_8_ * dVar41) * 0.008726646259971648;
            dVar30 = sin(dVar32);
            dVar43 = sin(dVar39);
            dVar31 = sin(dVar33);
            sin(dVar40);
            dVar32 = cos(dVar32);
            dVar39 = cos(dVar39);
            dVar33 = cos(dVar33);
            cos(dVar40);
            dVar38 = -(dVar39 * dVar30 * dVar31) + dVar43 * dVar32 * dVar33;
            dVar44 = dVar43 * dVar30 * dVar31 + dVar39 * dVar32 * dVar33;
            dVar29 = dVar30 * dVar43 * dVar33 - dVar32 * dVar39 * dVar31;
            dVar31 = -(dVar30 * dVar39 * dVar33) - dVar32 * dVar43 * dVar31;
            dVar39 = pdVar3[3];
            dVar32 = pdVar3[3];
            dVar40 = pdVar3[1];
            dVar33 = pdVar3[1];
            dVar30 = pdVar3[2];
            dVar43 = pdVar3[2];
            local_148 = dVar31 * dVar30 * -1.0 +
                        dVar38 * dVar40 + *pdVar3 * dVar44 * 1.0 + dVar39 * dVar29;
            dStack_140 = dVar29 * dVar43 * 1.0 +
                         dVar44 * dVar33 + *pdVar3 * dVar38 * -1.0 + dVar32 * dVar31;
            local_138 = dVar44 * dVar30 * 1.0 +
                        ((*pdVar3 * dVar31 * 1.0 + dVar39 * dVar38) - dVar29 * dVar40);
            dStack_130 = dVar38 * dVar43 * -1.0 +
                         ((*pdVar3 * dVar29 * -1.0 + dVar32 * dVar44) - dVar31 * dVar33);
            FUN_1448052ee(&local_148,&local_230);
            uVar17 = *(ulonglong *)(lVar27 + 0x38);
            if (uVar17 < 0xffffffff00000000) {
              plVar23 = DAT_14c9980d0;
              if (DAT_14c9980d8 == 0) {
                plVar23 = (longlong *)0x0;
              }
              (**(code **)(*plVar23 + 0x58))(plVar23,lVar27,uVar17,6);
            }
            else {
              uVar16 = (uint)uVar17;
              if ((-1 < (int)uVar16) && ((int)uVar16 < DAT_14c998088)) {
                puVar18 = DAT_14c998080;
                if (DAT_14c998080 == (undefined *)0x0) {
                  puVar18 = &DAT_14c998070;
                }
                if ((*(uint *)(puVar18 + ((uint)(uVar17 >> 3) & 0xffffffc)) >> (uVar16 & 0x1f) & 1)
                    != 0) {
                  lVar19 = DAT_14c998060 + (ulonglong)(uVar16 & 0x7fffffff) * 0x68;
                  puVar22 = *(uint **)(lVar19 + 0x18);
                  if (*(uint **)(lVar19 + 0x18) == (uint *)0x0) {
                    puVar22 = (uint *)(lVar19 + 8);
                  }
                  *puVar22 = *puVar22 | 0x40;
                  *(byte *)(lVar19 + 0x60) = *(byte *)(lVar19 + 0x60) | 1;
                }
              }
            }
            *(undefined8 *)(lVar27 + 0x1c0) = local_220;
            *(undefined8 *)(lVar27 + 0x1b0) = local_230;
            *(undefined8 *)(lVar27 + 0x1b8) = uStack_228;
            lVar19 = param_1[2];
            local_238 = *(double *)(lVar19 + 0x50) * *(double *)(lVar27 + 0x1d8);
            local_240 = *(double *)(lVar19 + 0x48) * *(double *)(lVar27 + 0x1d0);
            local_248 = *(double *)(lVar19 + 0x40) * *(double *)(lVar27 + 0x1c8);
            FUN_14084f00a(lVar27,&local_248);
            FUN_140f7999e();
          }
          lVar24 = lVar24 + 8;
        } while ((longlong)iVar20 * 8 != lVar24);
      }
    }
    else {
      if (iVar20 != 0) {
        lVar28 = 0;
        do {
          plVar23 = *(longlong **)(lVar24 + lVar28);
          if (plVar23 != (longlong *)0x0) {
            pdVar3 = (double *)param_1[2];
            local_178 = plVar23[0x38];
            local_188 = plVar23[0x36];
            lStack_180 = plVar23[0x37];
            FUN_144a7484c(&local_188,&local_168);
            dVar41 = pdVar3[3];
            dVar1 = pdVar3[3];
            dVar32 = pdVar3[1];
            dVar39 = pdVar3[1];
            dVar33 = pdVar3[2];
            dVar40 = pdVar3[2];
            local_148 = dStack_160 * dVar33 * -1.0 +
                        local_158 * dVar32 + *pdVar3 * dStack_150 * 1.0 + dVar41 * local_168;
            dStack_140 = local_168 * dVar40 * 1.0 +
                         dStack_150 * dVar39 + *pdVar3 * local_158 * -1.0 + dVar1 * dStack_160;
            local_138 = dStack_150 * dVar33 * 1.0 +
                        ((*pdVar3 * dStack_160 * 1.0 + dVar41 * local_158) - dVar32 * local_168);
            dStack_130 = local_158 * dVar40 * -1.0 +
                         ((*pdVar3 * local_168 * -1.0 + dVar1 * dStack_150) - dVar39 * dStack_160);
            pdVar3 = (double *)param_1[2];
            dVar38 = (double)plVar23[0x33] * pdVar3[8];
            dVar39 = (double)plVar23[0x34] * pdVar3[9];
            dVar43 = (double)plVar23[0x35] * pdVar3[10];
            dVar33 = *pdVar3;
            dVar40 = pdVar3[1];
            dVar30 = pdVar3[2];
            dVar1 = pdVar3[3];
            dVar41 = dVar39 * dVar33 - dVar38 * dVar40;
            dVar44 = dVar43 * dVar40 - dVar39 * dVar30;
            dVar32 = dVar38 * dVar30 - dVar33 * dVar43;
            dVar44 = dVar44 + dVar44;
            dVar32 = dVar32 + dVar32;
            dVar41 = dVar41 + dVar41;
            dVar39 = (dVar30 * dVar44 - dVar33 * dVar41) + pdVar3[3] * dVar32 + dVar39 + pdVar3[5];
            local_258 = dVar41 * dVar1 + dVar43 + (dVar32 * dVar33 - dVar44 * dVar40) + pdVar3[6];
            local_268._8_4_ = SUB84(dVar39,0);
            local_268._0_8_ =
                 (dVar41 * dVar40 - dVar32 * dVar30) + dVar1 * dVar44 + dVar38 + pdVar3[4];
            local_268._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
            local_2c0 = 0;
            local_2c8 = 0;
            FUN_144927ad4(plVar23,local_268,&local_148,0);
            lVar27 = param_1[2];
            local_270 = *(double *)(lVar27 + 0x50) * (double)plVar23[0x3b];
            local_278 = *(double *)(lVar27 + 0x48) * (double)plVar23[0x3a];
            local_280 = *(double *)(lVar27 + 0x40) * (double)plVar23[0x39];
            (**(code **)(*plVar23 + 0x478))(plVar23,&local_280);
          }
          lVar28 = lVar28 + 8;
        } while ((longlong)iVar20 * 8 != lVar28);
        lVar28 = *param_1;
      }
      iVar20 = *(int *)(lVar28 + 0xa8);
      if ((longlong)iVar20 != 0) {
        lVar28 = *(longlong *)(lVar28 + 0xa0);
        lVar24 = 0;
        do {
          lVar27 = *(longlong *)(lVar28 + lVar24);
          if (((lVar27 != 0) &&
              (plVar23 = *(longlong **)(lVar27 + 0x1c8), plVar23 != (longlong *)0x0)) &&
             (plVar23[0x24] == 0)) {
            pdVar3 = (double *)param_1[2];
            local_178 = plVar23[0x38];
            local_188 = plVar23[0x36];
            lStack_180 = plVar23[0x37];
            FUN_144a7484c(&local_188,&local_168);
            dVar1 = pdVar3[3];
            dVar41 = pdVar3[3];
            dVar32 = pdVar3[1];
            dVar39 = pdVar3[1];
            dVar33 = pdVar3[2];
            dVar40 = pdVar3[2];
            local_148 = dStack_160 * dVar33 * -1.0 +
                        local_158 * dVar32 + *pdVar3 * dStack_150 * 1.0 + dVar1 * local_168;
            dStack_140 = local_168 * dVar40 * 1.0 +
                         dStack_150 * dVar39 + *pdVar3 * local_158 * -1.0 + dVar41 * dStack_160;
            local_138 = dStack_150 * dVar33 * 1.0 +
                        ((*pdVar3 * dStack_160 * 1.0 + dVar1 * local_158) - dVar32 * local_168);
            dStack_130 = local_158 * dVar40 * -1.0 +
                         ((*pdVar3 * local_168 * -1.0 + dVar41 * dStack_150) - dVar39 * dStack_160);
            pdVar3 = (double *)param_1[2];
            dVar38 = (double)plVar23[0x33] * pdVar3[8];
            dVar39 = (double)plVar23[0x34] * pdVar3[9];
            dVar43 = (double)plVar23[0x35] * pdVar3[10];
            dVar33 = *pdVar3;
            dVar40 = pdVar3[1];
            dVar30 = pdVar3[2];
            dVar1 = pdVar3[3];
            dVar41 = dVar39 * dVar33 - dVar38 * dVar40;
            dVar44 = dVar43 * dVar40 - dVar39 * dVar30;
            dVar32 = dVar38 * dVar30 - dVar33 * dVar43;
            dVar44 = dVar44 + dVar44;
            dVar32 = dVar32 + dVar32;
            dVar41 = dVar41 + dVar41;
            dVar39 = (dVar30 * dVar44 - dVar33 * dVar41) + pdVar3[3] * dVar32 + dVar39 + pdVar3[5];
            local_288 = dVar41 * dVar1 + dVar43 + (dVar32 * dVar33 - dVar44 * dVar40) + pdVar3[6];
            local_298._8_4_ = SUB84(dVar39,0);
            local_298._0_8_ =
                 (dVar41 * dVar40 - dVar32 * dVar30) + dVar1 * dVar44 + dVar38 + pdVar3[4];
            local_298._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
            local_2c0 = 0;
            local_2c8 = 0;
            FUN_144927ad4(plVar23,local_298,&local_148,0);
            lVar19 = param_1[2];
            local_2a0 = *(double *)(lVar19 + 0x50) * (double)plVar23[0x3b];
            local_2a8 = *(double *)(lVar19 + 0x48) * (double)plVar23[0x3a];
            local_2b0 = *(double *)(lVar19 + 0x40) * (double)plVar23[0x39];
            (**(code **)(*plVar23 + 0x478))(plVar23,&local_2b0);
            FUN_140f7999e(lVar27);
          }
          lVar24 = lVar24 + 8;
        } while ((longlong)iVar20 * 8 != lVar24);
      }
    }
    lVar28 = *param_1;
    lVar24 = param_1[2];
    iVar20 = *(int *)(lVar28 + 0x264);
    *(int *)(lVar28 + 0x264) = iVar20 + 1;
    uVar17 = (ulonglong)*(int *)(lVar28 + 600);
    if ((longlong)uVar17 < 1) {
      *(int *)(lVar28 + 0x264) = iVar20;
    }
    else {
      bVar25 = false;
      do {
        lVar27 = uVar17 * 0x10 + -8;
        uVar26 = uVar17;
        while (((lVar19 = *(longlong *)(lVar28 + 0x250), *(int *)(lVar19 + lVar27) != 0 &&
                (plVar23 = *(longlong **)(lVar19 + -8 + lVar27), plVar23 != (longlong *)0x0)) &&
               (cVar15 = (**(code **)(*plVar23 + 0x60))(plVar23,lVar24), cVar15 != '\0'))) {
          lVar27 = lVar27 + -0x10;
          bVar4 = uVar26 < 2;
          uVar26 = uVar26 - 1;
          if (bVar4) {
            *(int *)(lVar28 + 0x264) = *(int *)(lVar28 + 0x264) + -1;
            if (bVar25) goto LAB_140f79965;
            goto LAB_140f78a39;
          }
        }
        uVar17 = uVar26 - 1;
        bVar25 = true;
      } while (1 < uVar26);
      *(int *)(lVar28 + 0x264) = *(int *)(lVar28 + 0x264) + -1;
LAB_140f79965:
      FUN_14474d06a((longlong *)(lVar28 + 0x250),0);
    }
LAB_140f78a39:
    lVar28 = *param_1;
    lVar24 = param_1[2];
    uVar17 = (ulonglong)DAT_14cb10888;
    if (0 < (longlong)uVar17) {
      bVar25 = false;
      DAT_14cb10894 = DAT_14cb10894 + 1;
      do {
        lVar27 = uVar17 * 0x10 + -8;
        uVar26 = uVar17;
        while (((*(int *)(DAT_14cb10880 + lVar27) != 0 &&
                (plVar23 = *(longlong **)(DAT_14cb10880 + -8 + lVar27), plVar23 != (longlong *)0x0))
               && (cVar15 = (**(code **)(*plVar23 + 0x60))(plVar23,lVar28,lVar24), cVar15 != '\0')))
        {
          lVar27 = lVar27 + -0x10;
          bVar4 = uVar26 < 2;
          uVar26 = uVar26 - 1;
          if (bVar4) {
            DAT_14cb10894 = DAT_14cb10894 + -1;
            if (bVar25) goto LAB_140f7998a;
            goto LAB_140f78489;
          }
        }
        uVar17 = uVar26 - 1;
        bVar25 = true;
      } while (1 < uVar26);
      DAT_14cb10894 = DAT_14cb10894 + -1;
LAB_140f7998a:
      FUN_14474d06a(&DAT_14cb10880,0);
    }
  }
  else {
    plVar23 = *(longlong **)(param_1[1] + 0x1c8);
    if ((char)param_1[3] == '\x01') {
      if ((plVar23 != (longlong *)0x0) && (plVar23[0x24] == 0)) {
        dVar38 = (double)plVar23[0x33] * pdVar3[8];
        dVar44 = (double)plVar23[0x34] * pdVar3[9];
        dVar43 = (double)plVar23[0x35] * pdVar3[10];
        dVar33 = *pdVar3;
        dVar40 = pdVar3[1];
        dVar30 = pdVar3[2];
        dVar1 = pdVar3[3];
        dVar41 = dVar44 * dVar33 - dVar38 * dVar40;
        dVar32 = dVar43 * dVar40 - dVar44 * dVar30;
        dVar39 = dVar38 * dVar30 - dVar33 * dVar43;
        dVar32 = dVar32 + dVar32;
        dVar39 = dVar39 + dVar39;
        dVar41 = dVar41 + dVar41;
        local_108 = pdVar3[4] + (dVar41 * dVar40 - dVar39 * dVar30) + dVar1 * dVar32 + dVar38;
        dStack_100 = pdVar3[5] + (dVar30 * dVar32 - dVar33 * dVar41) + pdVar3[3] * dVar39 + dVar44;
        local_f8 = pdVar3[6] + dVar41 * dVar1 + dVar43 + (dVar39 * dVar33 - dVar32 * dVar40);
        FUN_144a48320(plVar23);
        pdVar3 = (double *)param_1[2];
        local_178 = plVar23[0x38];
        local_188 = plVar23[0x36];
        lStack_180 = plVar23[0x37];
        FUN_144a7484c(&local_188,&local_168);
        dVar41 = pdVar3[3];
        dVar1 = pdVar3[3];
        dVar39 = pdVar3[1];
        dVar32 = pdVar3[1];
        dVar40 = pdVar3[2];
        dVar33 = pdVar3[2];
        local_148 = dStack_160 * dVar40 * -1.0 +
                    local_158 * dVar39 + *pdVar3 * dStack_150 * 1.0 + dVar41 * local_168;
        dStack_140 = local_168 * dVar33 * 1.0 +
                     dStack_150 * dVar32 + *pdVar3 * local_158 * -1.0 + dVar1 * dStack_160;
        local_138 = dStack_150 * dVar40 * 1.0 +
                    ((*pdVar3 * dStack_160 * 1.0 + dVar41 * local_158) - dVar39 * local_168);
        dStack_130 = local_158 * dVar33 * -1.0 +
                     ((*pdVar3 * local_168 * -1.0 + dVar1 * dStack_150) - dVar32 * dStack_160);
        FUN_1448052ee(&local_148,local_120);
        FUN_144b21d44(plVar23,local_120);
        lVar28 = param_1[2];
        local_190 = *(double *)(lVar28 + 0x50) * (double)plVar23[0x3b];
        local_198 = *(double *)(lVar28 + 0x48) * (double)plVar23[0x3a];
        local_1a0 = *(double *)(lVar28 + 0x40) * (double)plVar23[0x39];
        FUN_14084f00a(plVar23);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_2e8);
      }
    }
    else if ((plVar23 != (longlong *)0x0) && (plVar23[0x24] == 0)) {
      local_178 = plVar23[0x38];
      local_188 = plVar23[0x36];
      lStack_180 = plVar23[0x37];
      FUN_144a7484c(&local_188,&local_168);
      dVar1 = pdVar3[3];
      dVar41 = pdVar3[3];
      dVar32 = pdVar3[1];
      dVar39 = pdVar3[1];
      dVar40 = pdVar3[2];
      dVar33 = pdVar3[2];
      local_148 = dStack_160 * dVar40 * -1.0 +
                  local_158 * dVar32 + *pdVar3 * dStack_150 * 1.0 + dVar1 * local_168;
      dStack_140 = local_168 * dVar33 * 1.0 +
                   dStack_150 * dVar39 + *pdVar3 * local_158 * -1.0 + dVar41 * dStack_160;
      local_138 = dStack_150 * dVar40 * 1.0 +
                  ((*pdVar3 * dStack_160 * 1.0 + dVar1 * local_158) - dVar32 * local_168);
      dStack_130 = local_158 * dVar33 * -1.0 +
                   ((*pdVar3 * local_168 * -1.0 + dVar41 * dStack_150) - dVar39 * dStack_160);
      pdVar3 = (double *)param_1[2];
      dVar38 = (double)plVar23[0x33] * pdVar3[8];
      dVar39 = (double)plVar23[0x34] * pdVar3[9];
      dVar43 = (double)plVar23[0x35] * pdVar3[10];
      dVar33 = *pdVar3;
      dVar40 = pdVar3[1];
      dVar30 = pdVar3[2];
      dVar1 = pdVar3[3];
      dVar41 = dVar39 * dVar33 - dVar38 * dVar40;
      dVar44 = dVar43 * dVar40 - dVar39 * dVar30;
      dVar32 = dVar38 * dVar30 - dVar33 * dVar43;
      dVar44 = dVar44 + dVar44;
      dVar32 = dVar32 + dVar32;
      dVar41 = dVar41 + dVar41;
      dVar39 = (dVar30 * dVar44 - dVar33 * dVar41) + pdVar3[3] * dVar32 + dVar39 + pdVar3[5];
      local_1a8 = dVar41 * dVar1 + dVar43 + (dVar32 * dVar33 - dVar44 * dVar40) + pdVar3[6];
      local_1b8._8_4_ = SUB84(dVar39,0);
      local_1b8._0_8_ = (dVar41 * dVar40 - dVar32 * dVar30) + dVar1 * dVar44 + dVar38 + pdVar3[4];
      local_1b8._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
      local_2c0 = 0;
      local_2c8 = 0;
      FUN_144927ad4(plVar23,local_1b8,&local_148,0);
      lVar28 = param_1[2];
      local_1c0 = *(double *)(lVar28 + 0x50) * (double)plVar23[0x3b];
      local_1c8 = *(double *)(lVar28 + 0x48) * (double)plVar23[0x3a];
      local_1d0 = *(double *)(lVar28 + 0x40) * (double)plVar23[0x39];
      (**(code **)(*plVar23 + 0x478))(plVar23);
      FUN_140f7999e(param_1[1]);
    }
  }
LAB_140f78489:
  if ((local_f0 ^ (ulonglong)auStack_2e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f7999e FUN_140f7999e body=781 status=ok
// SIG undefined FUN_140f7999e(void)

void FUN_140f7999e(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  longlong local_30;
  longlong local_28;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (DAT_14cac7648 == 0) {
    local_50 = &local_20;
    local_20 = FUN_144a7958c;
    local_40 = FUN_14081d0ea;
    local_48 = FUN_143242436;
    local_58 = &LAB_14789ef1f;
    local_60 = &LAB_1417b008f;
    local_68 = L"Engine";
    local_70 = 0x8000000000;
    local_78 = 0x10000004;
    local_80 = 0x10;
    local_88 = 0x2b0;
    FUN_14081cfa3(L"/Script/Engine",L"SceneComponent",&DAT_14cac7648,FUN_146393848);
  }
  lVar1 = DAT_14cac7648;
  if ((DAT_14cac7648 == 0) || (DAT_14c950c29 == '\0')) {
    if (DAT_14cac7648 != 0) goto LAB_140f799e7;
    if (DAT_14cad00c8 == 0) goto LAB_140f79bba;
    lVar2 = 0;
LAB_140f79a12:
    if (lVar2 == DAT_14cad00c8) {
      local_28 = lVar1;
      if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar1);
      }
      FUN_1433c1422(param_1,&local_28);
      goto LAB_140f79a3f;
    }
  }
  else {
    FUN_1456cec3c();
LAB_140f799e7:
    if (DAT_14cad00c8 == 0) {
      local_50 = &local_20;
      local_20 = FUN_144a7958c;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_14081d0ea;
      local_58 = &LAB_1479b7a0c;
      local_60 = &LAB_1463b464e;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10000005;
      local_80 = 8;
      local_88 = 0x110;
      FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
      if (DAT_14cad00c8 == 0) {
LAB_140f79bba:
        local_50 = &local_20;
        local_20 = FUN_144a7958c;
        local_40 = FUN_14081d0ea;
        local_48 = FUN_14081d0ea;
        local_58 = &LAB_1479b7a0c;
        local_60 = &LAB_1463b464e;
        local_68 = L"Engine";
        local_70 = 0;
        local_78 = 0x10000005;
        local_80 = 8;
        local_88 = 0x110;
        FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
        lVar2 = 0;
        goto LAB_140f79a12;
      }
    }
    if (*(int *)(DAT_14cad00c8 + 0x38) <= *(int *)(lVar1 + 0x38)) {
      lVar2 = 0;
      if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8)
          == DAT_14cad00c8 + 0x30) {
        lVar2 = lVar1;
      }
      goto LAB_140f79a12;
    }
  }
  local_30 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  FUN_140f79cac(param_1,&local_30);
LAB_140f79a3f:
  if ((local_18 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f79cac FUN_140f79cac body=1296 status=ok
// SIG undefined FUN_140f79cac(void)

void FUN_140f79cac(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  longlong lVar9;
  undefined1 *puVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint *puVar16;
  longlong lVar17;
  int iVar18;
  undefined1 auStack_1a8 [32];
  undefined4 local_188;
  undefined4 local_180;
  undefined4 local_178;
  undefined8 local_170;
  wchar_t *local_168;
  code *local_160;
  undefined1 *local_158;
  code **local_150;
  code *local_148;
  code *local_140;
  uint *local_138;
  longlong *local_130;
  longlong local_128;
  code *local_120;
  undefined1 local_118 [192];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1800000000;
  puVar16 = (uint *)(param_1 + 0x250);
  iVar2 = *(int *)(param_1 + 0x268);
  local_130 = param_2;
  if (iVar2 == 0) {
    uVar14 = 1;
    uVar13 = 0;
    iVar18 = 0;
    iVar6 = 0;
  }
  else {
    puVar8 = *(uint **)(param_1 + 0x260);
    if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
      puVar8 = puVar16;
    }
    uVar15 = *puVar8;
    if (uVar15 == 0) {
      iVar6 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar6 = iVar2 + -1;
      }
      uVar13 = 0;
      uVar14 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar14 = uVar13;
      }
      iVar18 = 0;
      do {
        if (uVar14 == uVar13) goto LAB_140f7a185;
        iVar18 = iVar18 + 0x20;
        uVar15 = puVar8[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar15 == 0);
    }
    else {
      uVar13 = 0;
      iVar18 = 0;
    }
    uVar14 = (ulonglong)(-uVar15 & uVar15);
    uVar1 = uVar14 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar6 = (iVar18 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 != iVar2) {
    uVar15 = 0xffffffff;
    local_138 = puVar16;
    do {
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x240) + (longlong)iVar6 * 0x10);
      if (plVar4 != (longlong *)0x0) {
        lVar9 = *local_130;
        if ((lVar9 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar9);
          puVar16 = local_138;
LAB_140f79dd4:
          if (DAT_14cad00c8 == 0) {
            local_120 = FUN_144a7958c;
            local_140 = FUN_14081d0ea;
            local_148 = FUN_14081d0ea;
            local_150 = &local_120;
            local_158 = &LAB_1479b7a0c;
            local_160 = (code *)&LAB_1463b464e;
            local_168 = L"Engine";
            local_170 = 0;
            local_178 = 0x10000005;
            local_180 = 8;
            local_188 = 0x110;
            FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
            puVar16 = local_138;
            if (DAT_14cad00c8 == 0) goto LAB_140f79dee;
          }
          if (*(int *)(lVar9 + 0x38) < *(int *)(DAT_14cad00c8 + 0x38)) goto LAB_140f79dee;
          if (*(longlong *)
               (*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) !=
              DAT_14cad00c8 + 0x30) {
            lVar9 = 0;
          }
        }
        else {
          if (lVar9 != 0) goto LAB_140f79dd4;
LAB_140f79dee:
          lVar9 = 0;
        }
        lVar17 = plVar4[2];
        if (((*(int *)(lVar9 + 0x38) <= *(int *)(lVar17 + 0x38)) &&
            (*(longlong *)(*(longlong *)(lVar17 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
             lVar9 + 0x30)) && (*(char *)((longlong)plVar4 + 0x1f9) < '\0')) {
          *(byte *)((longlong)plVar4 + 0x1fa) = *(byte *)((longlong)plVar4 + 0x1fa) & 0xfe;
        }
        if (DAT_14cabf8d0 == 0) {
          local_120 = FUN_144a7958c;
          local_140 = FUN_14081d0ea;
          local_148 = FUN_142b47bc4;
          local_150 = &local_120;
          local_158 = &LAB_147860ffd;
          local_160 = FUN_1463713dc;
          local_168 = L"Engine";
          local_170 = 0;
          local_178 = 0x10000005;
          local_180 = 0x10;
          local_188 = 0x2b0;
          FUN_14081cfa3(L"/Script/Engine",L"ChildActorBaseComponent",&DAT_14cabf8d0,&DAT_147860ffc);
          lVar17 = plVar4[2];
          puVar16 = local_138;
        }
        if (((*(int *)(DAT_14cabf8d0 + 0x38) <= *(int *)(lVar17 + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(lVar17 + 0x30) + (longlong)*(int *)(DAT_14cabf8d0 + 0x38) * 8) ==
             DAT_14cabf8d0 + 0x30)) &&
           (lVar9 = (**(code **)(*plVar4 + 0x5d8))(plVar4), uVar1 = local_50, puVar16 = local_138,
           lVar9 != 0)) {
          lVar17 = (longlong)(int)local_50;
          uVar7 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar7);
          if (local_50._4_4_ < uVar7) {
            FUN_1470e9d72(local_118,uVar1 & 0xffffffff);
          }
          puVar10 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar10 = local_118;
          }
          *(longlong *)(puVar10 + lVar17 * 8) = lVar9;
          puVar16 = local_138;
        }
      }
      uVar15 = uVar15 & ~(uint)uVar14;
      puVar8 = *(uint **)(param_1 + 0x260);
      if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
        puVar8 = puVar16;
      }
      iVar3 = *(int *)(param_1 + 0x268);
      iVar6 = (int)uVar13;
      lVar9 = (longlong)iVar6;
      uVar7 = puVar8[lVar9] & uVar15;
      if (uVar7 == 0) {
        iVar11 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar11 = iVar3 + -1;
        }
        iVar11 = iVar11 >> 5;
        iVar18 = iVar18 + 0x20;
        iVar12 = iVar11;
        if (iVar11 < iVar6) {
          iVar12 = iVar6;
        }
        if (iVar6 < iVar11) {
          lVar17 = 0;
          do {
            uVar7 = puVar8[lVar9 + lVar17 + 1];
            if (uVar7 != 0) {
              uVar13 = (ulonglong)(iVar6 + (int)lVar17 + 1);
              uVar15 = 0xffffffff;
              goto LAB_140f79f33;
            }
            iVar18 = iVar18 + 0x20;
            lVar17 = lVar17 + 1;
          } while (iVar12 - lVar9 != lVar17);
          uVar15 = 0xffffffff;
          iVar6 = iVar12;
        }
        uVar13 = (ulonglong)(iVar6 + 1);
        puVar16 = local_138;
        iVar6 = iVar3;
      }
      else {
LAB_140f79f33:
        uVar14 = (ulonglong)(-uVar7 & uVar7);
        uVar1 = uVar14 * 2 + 1;
        lVar9 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        iVar6 = (iVar18 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar6) {
          iVar6 = iVar3;
        }
      }
    } while (iVar6 != iVar2);
    lVar9 = (longlong)(int)local_50;
    puVar10 = local_118;
    if (local_58 != (undefined1 *)0x0) {
      puVar10 = local_58;
    }
    if (lVar9 != 0) {
      lVar17 = 0;
      do {
        uVar5 = *(undefined8 *)(puVar10 + lVar17);
        local_128 = *local_130;
        if ((local_128 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_140f79cac(uVar5,&local_128);
        lVar17 = lVar17 + 8;
      } while (lVar9 * 8 != lVar17);
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_140f7a185:
  if ((local_48 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f7a1cc FUN_140f7a1cc body=31 status=ok
// SIG undefined FUN_140f7a1cc(void)

undefined8 FUN_140f7a1cc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140f7a1ec FUN_140f7a1ec body=339 status=ok
// SIG undefined FUN_140f7a1ec(void)

void FUN_140f7a1ec(longlong *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_58 [46];
  short local_2a;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == (longlong *)0x0) {
LAB_140f7a325:
    plVar4 = (longlong *)0x0;
  }
  else {
    lVar3 = (**(code **)(*param_2 + 0x2b8))(param_2);
    if (((lVar3 == 0) || ((*(byte *)(lVar3 + 0x1c0) & 0x40) == 0)) ||
       ((~*(byte *)(lVar3 + 0x1c2) & 0x41) != 0)) goto LAB_140f7a325;
    cVar1 = (**(code **)(*param_2 + 0x460))(param_2);
    if (cVar1 != '\x01') goto LAB_140f7a325;
    iVar2 = (**(code **)(*param_2 + 0x408))(param_2);
    if (iVar2 != 1) goto LAB_140f7a325;
    (**(code **)(*param_2 + 0x410))(param_2,&local_2a);
    plVar4 = (longlong *)0x0;
    if (local_2a == 1) {
      plVar4 = param_2;
    }
  }
  if ((longlong *)param_1[0x150] == plVar4) goto LAB_140f7a304;
  if ((plVar4 == (longlong *)0x0) || (DAT_14c950c29 == '\0')) {
    param_1[0x150] = (longlong)plVar4;
    if (plVar4 != (longlong *)0x0) goto LAB_140f7a2b4;
  }
  else {
    FUN_1456cec3c(plVar4);
    param_1[0x150] = (longlong)plVar4;
LAB_140f7a2b4:
    (**(code **)(*param_1 + 0x310))(param_1);
  }
  if ((param_1[0xb5] != 0) &&
     (param_1[0x150] == 0 ||
      (DAT_14cad2be8 == 0 || (int)param_1[0x65] == *(int *)((longlong)param_1 + 0x32c)))) {
    FUN_140f7a340(param_1[0xb5]);
  }
LAB_140f7a304:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f7a340 FUN_140f7a340 body=1201 status=ok
// SIG undefined FUN_140f7a340(void)

void FUN_140f7a340(undefined8 param_1,undefined8 param_2)

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
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined1 auStack_a8 [32];
  undefined1 **local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  local_78 = param_1;
  uStack_70 = param_2;
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_140f7a388;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_140f7a38d;
      goto LAB_140f7a3b7;
    }
  }
  else {
LAB_140f7a388:
    if (iVar6 != 0x10) {
LAB_140f7a3b7:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
        goto LAB_140f7a38d;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_140f7a38d;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar2;
        if (puVar10 != (uint *)0x0) goto LAB_140f7a518;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_14365fa42);
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
LAB_140f7a518:
          puVar16 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar14 = (uint *)(puVar16 + 0x17);
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
            puVar14 = (uint *)(puVar16 + 0x17);
            uVar12 = 0;
            if (puVar14 <= puVar10 + 0x4000) {
              uVar12 = 1;
              goto LAB_140f7a598;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_140f7a598:
        *(uint **)(puVar10 + 0x10) = puVar14;
        puVar10[0x12] = uVar12;
        iVar6 = 0;
        FUN_1447247dc(puVar16,0);
        *puVar16 = &PTR_FUN_14aa5a080;
        *(undefined4 *)(puVar16 + 0x15) = (undefined4)local_78;
        *(undefined4 *)((longlong)puVar16 + 0xac) = local_78._4_4_;
        *(undefined4 *)(puVar16 + 0x16) = (undefined4)uStack_70;
        *(undefined4 *)((longlong)puVar16 + 0xb4) = uStack_70._4_4_;
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
        local_88 = local_68;
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14aa5a030;
        local_40 = (undefined4)local_78;
        uStack_3c = local_78._4_4_;
        uStack_38 = (undefined4)uStack_70;
        uStack_34 = uStack_70._4_4_;
        local_68[0] = &LAB_143662f18;
        FUN_14005a792(&DAT_14ca9a440,L"FSetCustomMaskMaterial",&DAT_14cafe20c);
        if (local_68[0] != (undefined1 *)0x0) {
          pppuVar13 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar13 = &local_48;
          }
          (*(code *)(*pppuVar13)[2])();
        }
      }
      goto LAB_140f7a453;
    }
  }
LAB_140f7a38d:
  FUN_143662bea(&local_78);
LAB_140f7a453:
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f7a7f2 FUN_140f7a7f2 body=712 status=ok
// SIG undefined FUN_140f7a7f2(void)

undefined8 FUN_140f7a7f2(char *param_1,char *param_2)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  
  if (*param_1 != *param_2) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  piVar5 = (int *)&DAT_14c948618;
  piVar4 = &DAT_14c948620;
  piVar6 = &DAT_14c948620;
  piVar7 = (int *)&DAT_14c948618;
  if (iVar1 != 0) {
    piVar6 = &DAT_14c948620;
    piVar7 = (int *)&DAT_14c948618;
    if (1 < *(int *)(param_1 + 0x14)) {
      piVar6 = &DAT_14c948620;
      piVar7 = (int *)&DAT_14c948618;
      if (iVar1 != DAT_14c948000) {
        piVar7 = (int *)(*(longlong *)(param_1 + 0x28) + 0xc);
        piVar6 = (int *)(*(longlong *)(param_1 + 0x28) + 0x14);
      }
    }
  }
  if (((*(int *)(param_2 + 0x10) != 0) && (1 < *(int *)(param_2 + 0x14))) &&
     (*(int *)(param_2 + 0x10) != DAT_14c948000)) {
    piVar5 = (int *)(*(longlong *)(param_2 + 0x28) + 0xc);
    piVar4 = (int *)(*(longlong *)(param_2 + 0x28) + 0x14);
  }
  if ((*piVar7 != *piVar5) || (*piVar6 != *piVar4)) {
    cVar2 = FUN_140f7aaba(param_1);
    if (cVar2 == '\0') {
      return 0;
    }
    cVar2 = FUN_140f7aaba(param_2);
    if (cVar2 == '\0') {
      return 0;
    }
    iVar1 = *(int *)(param_1 + 0x10);
  }
  piVar5 = (int *)&DAT_14c948618;
  piVar4 = &DAT_14c948620;
  piVar6 = &DAT_14c948620;
  piVar7 = (int *)&DAT_14c948618;
  if (iVar1 != 0) {
    piVar6 = &DAT_14c948620;
    piVar7 = (int *)&DAT_14c948618;
    if (2 < *(int *)(param_1 + 0x14)) {
      piVar6 = &DAT_14c948620;
      piVar7 = (int *)&DAT_14c948618;
      if (iVar1 != DAT_14c948000) {
        piVar7 = (int *)(*(longlong *)(param_1 + 0x28) + 0x18);
        piVar6 = (int *)(*(longlong *)(param_1 + 0x28) + 0x20);
      }
    }
  }
  if (((*(int *)(param_2 + 0x10) != 0) && (2 < *(int *)(param_2 + 0x14))) &&
     (*(int *)(param_2 + 0x10) != DAT_14c948000)) {
    piVar5 = (int *)(*(longlong *)(param_2 + 0x28) + 0x18);
    piVar4 = (int *)(*(longlong *)(param_2 + 0x28) + 0x20);
  }
  if ((*piVar7 != *piVar5) || (*piVar6 != *piVar4)) {
    cVar2 = FUN_1401146b0(param_1);
    if (cVar2 == '\0') {
      return 0;
    }
    cVar2 = FUN_1401146b0(param_2);
    if (cVar2 == '\0') {
      return 0;
    }
    iVar1 = *(int *)(param_1 + 0x10);
  }
  piVar5 = (int *)&DAT_14c948618;
  piVar4 = &DAT_14c948620;
  piVar6 = &DAT_14c948620;
  piVar7 = (int *)&DAT_14c948618;
  if (iVar1 != 0) {
    piVar6 = &DAT_14c948620;
    piVar7 = (int *)&DAT_14c948618;
    if (3 < *(int *)(param_1 + 0x14)) {
      piVar6 = &DAT_14c948620;
      piVar7 = (int *)&DAT_14c948618;
      if (iVar1 != DAT_14c948000) {
        piVar7 = (int *)(*(longlong *)(param_1 + 0x28) + 0x24);
        piVar6 = (int *)(*(longlong *)(param_1 + 0x28) + 0x2c);
      }
    }
  }
  if (((*(int *)(param_2 + 0x10) != 0) && (3 < *(int *)(param_2 + 0x14))) &&
     (*(int *)(param_2 + 0x10) != DAT_14c948000)) {
    piVar5 = (int *)(*(longlong *)(param_2 + 0x28) + 0x24);
    piVar4 = (int *)(*(longlong *)(param_2 + 0x28) + 0x2c);
  }
  if ((*piVar7 != *piVar5) || (*piVar6 != *piVar4)) {
    cVar2 = FUN_14011462e(param_1);
    if (cVar2 == '\0') {
      return 0;
    }
    cVar2 = FUN_14011462e(param_2);
    if (cVar2 == '\0') {
      return 0;
    }
    iVar1 = *(int *)(param_1 + 0x10);
  }
  piVar5 = (int *)&DAT_14c948618;
  piVar4 = &DAT_14c948620;
  piVar6 = &DAT_14c948620;
  piVar7 = (int *)&DAT_14c948618;
  if (iVar1 != 0) {
    piVar6 = &DAT_14c948620;
    piVar7 = (int *)&DAT_14c948618;
    if (4 < *(int *)(param_1 + 0x14)) {
      piVar6 = &DAT_14c948620;
      piVar7 = (int *)&DAT_14c948618;
      if (iVar1 != DAT_14c948000) {
        piVar7 = (int *)(*(longlong *)(param_1 + 0x28) + 0x30);
        piVar6 = (int *)(*(longlong *)(param_1 + 0x28) + 0x38);
      }
    }
  }
  if (((*(int *)(param_2 + 0x10) != 0) && (4 < *(int *)(param_2 + 0x14))) &&
     (*(int *)(param_2 + 0x10) != DAT_14c948000)) {
    piVar5 = (int *)(*(longlong *)(param_2 + 0x28) + 0x30);
    piVar4 = (int *)(*(longlong *)(param_2 + 0x28) + 0x38);
  }
  if ((*piVar7 == *piVar5) && (*piVar6 == *piVar4)) {
    return CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
  }
  piVar7 = (int *)&DAT_14c948618;
  piVar5 = &DAT_14c948620;
  if (((iVar1 != 0) && (4 < *(int *)(param_1 + 0x14))) && (iVar1 != DAT_14c948000)) {
    piVar7 = (int *)(*(longlong *)(param_1 + 0x28) + 0x30);
    piVar5 = (int *)(*(longlong *)(param_1 + 0x28) + 0x38);
  }
  if ((*piVar7 != DAT_14cb7bef8) || (*piVar5 != DAT_14cb7bf00)) {
    piVar7 = (int *)&DAT_14c948618;
    if ((iVar1 != 0) && ((4 < *(int *)(param_1 + 0x14) && (iVar1 != DAT_14c948000)))) {
      piVar7 = (int *)(*(longlong *)(param_1 + 0x28) + 0x30);
    }
    if (*piVar7 != 0) {
      return 0;
    }
  }
  uVar3 = FUN_1402b5438(param_2);
  return uVar3;
}



// FUNCTION 140f7aaba FUN_140f7aaba body=163 status=ok
// SIG undefined FUN_140f7aaba(void)

ulonglong FUN_140f7aaba(longlong param_1)

{
  int iVar1;
  int iVar2;
  uint3 uVar3;
  int *piVar4;
  int *piVar5;
  
  iVar1 = *(int *)(param_1 + 0x10);
  piVar5 = (int *)&DAT_14c948618;
  piVar4 = &DAT_14c948620;
  if ((((iVar1 != 0) && (*(int *)(param_1 + 0x14) != 0)) && (iVar1 != DAT_14c948000)) &&
     (1 < *(int *)(param_1 + 0x14))) {
    piVar5 = (int *)(*(longlong *)(param_1 + 0x28) + 0xc);
    piVar4 = (int *)(*(longlong *)(param_1 + 0x28) + 0x14);
  }
  uVar3 = (uint3)((uint)iVar1 >> 8);
  if ((*piVar5 == DAT_14cb7beb0) && (*piVar4 == DAT_14cb7beb8)) {
    return CONCAT71((uint7)uVar3,1);
  }
  piVar5 = (int *)&DAT_14c948618;
  if (((iVar1 != 0) && (iVar2 = *(int *)(param_1 + 0x14), iVar2 != 0)) && (iVar1 != DAT_14c948000))
  {
    if ((iVar2 < 2) && (*(int *)(param_1 + 0x34) < 1)) {
      param_1 = param_1 + 0x18;
    }
    else {
      param_1 = *(longlong *)(param_1 + 0x28);
    }
    if (iVar2 != 1) {
      piVar5 = (int *)&DAT_14c948618;
      if (1 < iVar2) {
        piVar5 = (int *)(param_1 + 0xc);
      }
    }
  }
  return (ulonglong)CONCAT31(uVar3,*piVar5 == 0);
}



// FUNCTION 140f7ab5e FUN_140f7ab5e body=93 status=ok
// SIG undefined FUN_140f7ab5e(void)

undefined8 * FUN_140f7ab5e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140f7abbb(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_140f7ac60(param_1,iVar1);
      FUN_140f7abee(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 140f7abbb FUN_140f7abbb body=51 status=ok
// SIG undefined FUN_140f7abbb(void)

void FUN_140f7abbb(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140f7abee FUN_140f7abee body=113 status=ok
// SIG undefined FUN_140f7abee(void)

void FUN_140f7abee(undefined8 *param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined4 *)(param_1 + 2) = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    FUN_1447715ec(param_1,param_2);
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 0x28);
    param_1[6] = 0;
    *(undefined4 *)(param_1 + 7) = 0;
    param_1[6] = *(undefined8 *)(param_2 + 0x30);
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
    param_1 = param_1 + 8;
    param_2 = param_2 + 0x40;
  }
  return;
}



// FUNCTION 140f7ac60 FUN_140f7ac60 body=216 status=ok
// SIG undefined FUN_140f7ac60(void)

void FUN_140f7ac60(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = (longlong)param_2 * 0x40;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)
                                        [((longlong)param_2 & 0x3ffffffffffffffU) * 4]];
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
    iVar1 = (int)(uVar2 >> 6);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x40,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140f7ad38 FUN_140f7ad38 body=93 status=ok
// SIG undefined FUN_140f7ad38(void)

void FUN_140f7ad38(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(int *)(param_1 + 1) == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  else {
    puVar1 = (undefined2 *)*param_1;
  }
  FUN_1446f470e(&local_18,puVar1,1);
  FUN_140f7ad96(local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f7ad96 FUN_140f7ad96 body=698 status=ok
// SIG undefined FUN_140f7ad96(void)

undefined * FUN_140f7ad96(longlong param_1)

{
  undefined *puVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  longlong lVar9;
  
  FUN_140f7b050();
  uVar6 = (uint)param_1;
  iVar4 = (int)((ulonglong)param_1 >> 0x20);
  uVar7 = (uint)((ulonglong)param_1 >> 0x10);
  if (DAT_14c867e60 == DAT_14c867e8c) {
LAB_140f7aeab:
    lVar9 = 0;
  }
  else {
    puVar8 = &DAT_14c867e90;
    if (DAT_14c867e98 != (undefined *)0x0) {
      puVar8 = DAT_14c867e98;
    }
    iVar3 = *(int *)(puVar8 + (ulonglong)
                              (DAT_14c867ea0 - 1U &
                              iVar4 + (uVar6 << 0x10 | uVar6 & 0xffff) +
                              (uVar7 << 0x13 | uVar7 & 0xffff) + ((uVar6 & 0xffff) >> 4)) * 4);
    if (iVar3 == -1) goto LAB_140f7aeab;
    do {
      lVar9 = DAT_14c867e58 + (longlong)iVar3 * 0xa0;
      if (*(longlong *)(DAT_14c867e58 + (longlong)iVar3 * 0xa0) == param_1) break;
      iVar3 = *(int *)(lVar9 + 0x98);
      lVar9 = 0;
    } while (iVar3 != -1);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c868008) && (FUN_144b3d300(&DAT_14c868008), DAT_14c868008 == -1)) {
    FUN_1457d330c(&DAT_14c867f78);
    atexit((_func_5014 *)&LAB_142780ecd);
    _Init_thread_footer(&DAT_14c868008);
  }
  if (lVar9 == 0) {
    if (DAT_14c867eb0 != DAT_14c867edc) {
      uVar7 = iVar4 + (uVar6 << 0x10 | uVar6 & 0xffff) + (uVar7 << 0x13 | uVar7 & 0xffff) +
              ((uVar6 & 0xffff) >> 4);
      puVar8 = DAT_14c867ee8;
      if (DAT_14c867ee8 == (undefined *)0x0) {
        puVar8 = &DAT_14c867ee0;
      }
      iVar4 = *(int *)(puVar8 + (ulonglong)(DAT_14c867ef0 - 1U & uVar7) * 4);
      if (iVar4 != -1) {
        puVar8 = (undefined *)0x0;
        do {
          if (*(longlong *)(DAT_14c867ea8 + (longlong)iVar4 * 0x18) == param_1) {
            FUN_140f7b050();
            if (DAT_14c867eb0 == DAT_14c867edc) goto LAB_140f7af61;
            puVar8 = &DAT_14c867ee0;
            if (DAT_14c867ee8 != (undefined *)0x0) {
              puVar8 = DAT_14c867ee8;
            }
            iVar4 = *(int *)(puVar8 + (ulonglong)(DAT_14c867ef0 - 1U & uVar7) * 4);
            if (iVar4 == -1) goto LAB_140f7af61;
            goto LAB_140f7afab;
          }
          iVar4 = *(int *)(DAT_14c867ea8 + (longlong)iVar4 * 0x18 + 0x10);
        } while (iVar4 != -1);
        goto LAB_140f7ae58;
      }
    }
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar8 = (undefined *)(lVar9 + 8);
  }
LAB_140f7ae58:
  puVar1 = &DAT_14c867f78;
  if (puVar8 != (undefined *)0x0) {
    puVar1 = puVar8;
  }
  return puVar1;
  while (iVar4 = (int)plVar2[2], iVar4 != -1) {
LAB_140f7afab:
    plVar2 = (longlong *)(DAT_14c867ea8 + (longlong)iVar4 * 0x18);
    if (*plVar2 == param_1) goto LAB_140f7af63;
  }
LAB_140f7af61:
  plVar2 = (longlong *)0x0;
LAB_140f7af63:
  if (DAT_14c867e60 != DAT_14c867e8c) {
    lVar9 = plVar2[1];
    uVar7 = (uint)((ulonglong)lVar9 >> 0x10);
    uVar6 = (uint)lVar9 & 0xffff;
    puVar8 = &DAT_14c867e90;
    if (DAT_14c867e98 != (undefined *)0x0) {
      puVar8 = DAT_14c867e98;
    }
    iVar4 = *(int *)(puVar8 + (ulonglong)
                              (DAT_14c867ea0 - 1U &
                              (int)((ulonglong)lVar9 >> 0x20) + ((uint)lVar9 << 0x10 | uVar6) +
                              (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar6 >> 4)) * 4);
    while (iVar4 != -1) {
      lVar5 = DAT_14c867e58 + (longlong)iVar4 * 0xa0;
      if (*(longlong *)(DAT_14c867e58 + (longlong)iVar4 * 0xa0) == lVar9) goto LAB_140f7af73;
      iVar4 = *(int *)(lVar5 + 0x98);
    }
  }
  lVar5 = 0;
LAB_140f7af73:
  puVar8 = (undefined *)(lVar5 + 8);
  if (lVar5 == 0) {
    puVar8 = (undefined *)0x0;
  }
  goto LAB_140f7ae58;
}



// FUNCTION 140f7b050 FUN_140f7b050 body=5387 status=ok
// SIG undefined FUN_140f7b050(void)

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_140f7b050(void)

{
  void *pvVar1;
  uint uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  wchar_t *******pppppppwVar12;
  longlong *plVar13;
  ushort uVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  longlong *plVar18;
  longlong lVar19;
  longlong *plVar20;
  int iVar21;
  longlong lVar22;
  longlong *plVar23;
  ulonglong uVar24;
  byte bVar25;
  uint uVar26;
  wchar_t *pwVar27;
  ushort uVar28;
  int iVar29;
  longlong *plVar30;
  uint uVar31;
  uint uVar32;
  longlong **pplVar33;
  bool bVar34;
  float fVar35;
  undefined1 auStack_518 [40];
  longlong *local_4f0;
  longlong *local_4e8;
  longlong *local_4e0;
  longlong *local_4d8;
  int local_4cc;
  ulonglong local_4c8;
  ulonglong local_4c0;
  longlong *local_4b8;
  wchar_t ******local_4b0;
  longlong local_4a8;
  undefined8 uStack_4a0;
  wchar_t *******local_498;
  longlong *plStack_490;
  undefined8 local_488;
  undefined4 local_480;
  undefined4 local_47c;
  longlong local_400;
  wchar_t *******local_3f8;
  undefined8 uStack_3f0;
  undefined1 local_3dc [4];
  wchar_t *******local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  longlong local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_398;
  undefined4 local_390;
  undefined8 local_38c;
  undefined4 local_384;
  longlong local_378;
  undefined4 local_370;
  longlong *local_368;
  undefined8 local_360;
  longlong *local_358;
  undefined8 local_350;
  undefined4 local_348;
  undefined4 local_344;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_518;
  if (DAT_14c867f48 == '\0') {
    DAT_14c867f48 = '\x01';
    FUN_140f7cd83();
    local_398 = 0;
    local_390 = 0;
    local_3b8 = 0;
    uStack_3b0 = 0;
    local_38c = 0xffffffff00000080;
    local_384 = 0;
    local_378 = 0;
    local_370 = 0;
    local_4f0 = (longlong *)CONCAT44(local_4f0._4_4_,DAT_14c868280);
    if (0 < DAT_14c868280) {
      iVar29 = 0;
      do {
        FUN_1408e76da(&local_368);
        local_3f8 = (wchar_t *******)0x0;
        uStack_3f0 = 0;
        FUN_1457d39f8(iVar29,&local_368,&local_3f8);
        pppppppwVar12 = (wchar_t *******)&DAT_149dfb77a;
        if ((int)uStack_3f0 != 0) {
          pppppppwVar12 = local_3f8;
        }
        FUN_1446f470e(&local_400,pppppppwVar12,1);
        FUN_140056680(&local_498,L"DataDrivenPlatformInfo");
        AcquireSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
        pppppppwVar12 = (wchar_t *******)&DAT_149dfb77a;
        if ((int)plStack_490 != 0) {
          pppppppwVar12 = local_498;
        }
        iVar6 = (int)plStack_490 + -1;
        if ((int)plStack_490 == 0) {
          iVar6 = 0;
        }
        uVar5 = FUN_144a49b4a(iVar6,pppppppwVar12);
        iVar6 = FUN_14052bbf0(&local_368,uVar5,&local_498);
        ReleaseSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
        if (local_498 != (wchar_t *******)0x0) {
          FUN_1400020a8();
        }
        if (iVar6 != -1) {
          memset(&local_498,0,0x90);
          FUN_1457d330c(&local_498);
          uVar31 = (uint)((ulonglong)local_400 >> 0x10);
          uVar26 = (uint)local_400 & 0xffff;
          plVar9 = (longlong *)
                   FUN_1457d33f6(((uint)local_400 << 0x10 | uVar26) +
                                 (int)((ulonglong)local_400 >> 0x20) +
                                 (uVar31 << 0x13 | uVar31 & 0xffff) + (uVar26 >> 4),&local_400,
                                 &local_498);
          FUN_1457d3294(&local_498);
          local_4a8 = local_400;
          FUN_1400021e4(&local_4a8,&local_498);
          pppppppwVar12 = (wchar_t *******)&DAT_149dfb77a;
          if ((int)plStack_490 != 0) {
            pppppppwVar12 = local_498;
          }
          FUN_140002266(&local_3d8,L"ddpi:%s:",pppppppwVar12);
          if (local_498 != (wchar_t *******)0x0) {
            FUN_1400020a8();
          }
          pppppppwVar12 = (wchar_t *******)&DAT_149dfb77a;
          if ((int)uStack_3d0 != 0) {
            pppppppwVar12 = local_3d8;
          }
          if (DAT_14c846b14 == '\0') {
            FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                          L"Attempting to get the command line but it hasn\'t been initialized yet."
                         );
          }
          lVar10 = FUN_144a29ec4(&DAT_14c846b20,pppppppwVar12,0);
          if (lVar10 != 0) {
            iVar6 = (int)uStack_3d0 + -1;
            if ((int)uStack_3d0 == 0) {
              iVar6 = 0;
            }
            FUN_1402980a2(&DAT_14c867f38,local_3d8,iVar6);
          }
          FUN_140f7c55c(&local_368,L"bIsConfidential",plVar9 + 3);
          FUN_140f7c55c(&local_368,L"bIsFakePlatform",(longlong)plVar9 + 0x19);
          FUN_140f7c5de(&local_368,L"TargetSettingsIniSectionName",plVar9 + 4);
          FUN_140f7c5de(&local_368,L"HardwareCompressionFormat",plVar9 + 0xf);
          FUN_14105ab36(&local_368,L"DataDrivenPlatformInfo",L"AdditionalRestrictedFolders",
                        plVar9 + 6);
          FUN_140f7c55c(&local_368,L"Freezing_b32Bit",(longlong)plVar9 + 0x54);
          pwVar27 = L"Freezing_MaxFieldAlignment64";
          if (*(char *)((longlong)plVar9 + 0x54) != '\0') {
            pwVar27 = L"Freezing_MaxFieldAlignment32";
          }
          FUN_140f7c6de(&local_498,&local_368,pwVar27,0);
          if ((int)plStack_490 - 2U < 0x7fffffff) {
            uVar11 = _wcstoui64((wchar_t *)local_498,(wchar_t **)0x0,10);
            *(int *)(plVar9 + 10) = (int)uVar11;
          }
          if (local_498 != (wchar_t *******)0x0) {
            FUN_1400020a8();
          }
          FUN_140f7c55c(&local_368,L"Freezing_bForce64BitMemoryImagePointers",
                        (longlong)plVar9 + 0x55);
          FUN_140f7c55c(&local_368,L"Freezing_bAlignBases",(longlong)plVar9 + 0x56);
          FUN_140f7c6de(&local_498,&local_368,L"GlobalIdentifier",0);
          if ((int)plStack_490 - 2U < 0x7fffffff) {
            cVar4 = FUN_140b10a34(&local_498,&local_3c8);
            if (cVar4 == '\0') {
              local_3c8 = (wchar_t *******)0x0;
              uStack_3c0 = (longlong *)0x0;
            }
            *(undefined4 *)(plVar9 + 8) = (undefined4)local_3c8;
            *(undefined4 *)((longlong)plVar9 + 0x44) = local_3c8._4_4_;
            *(int *)(plVar9 + 9) = (int)uStack_3c0;
            *(undefined4 *)((longlong)plVar9 + 0x4c) = uStack_3c0._4_4_;
          }
          if (local_498 != (wchar_t *******)0x0) {
            FUN_1400020a8();
          }
          FUN_140f7c55c(&local_368,L"bHasDedicatedGamepad",(longlong)plVar9 + 0x57);
          FUN_140f7c55c(&local_368,L"bDefaultInputStandardKeyboard",plVar9 + 0xb);
          FUN_140f7c55c(&local_368,L"bInputSupportConfigurable",(longlong)plVar9 + 0x59);
          FUN_140f7c5de(&local_368,L"DefaultInputType",plVar9 + 0xc);
          FUN_140f7c55c(&local_368,L"bSupportsMouseAndKeyboard",plVar9 + 0xe);
          FUN_140f7c55c(&local_368,L"bSupportsGamepad",(longlong)plVar9 + 0x71);
          FUN_140f7c55c(&local_368,L"bCanChangeGamepadType",(longlong)plVar9 + 0x72);
          FUN_140f7c55c(&local_368,L"bSupportsTouch",(longlong)plVar9 + 0x73);
          FUN_140f7c6de(&local_498,&local_368,L"OverrideCookPlatformName",0);
          if ((int)plStack_490 - 2U < 0x7fffffff) {
            FUN_1446f470e(&local_3c8,local_498,1);
            plVar9[0x11] = (longlong)local_3c8;
          }
          if (local_498 != (wchar_t *******)0x0) {
            FUN_1400020a8();
          }
          if (local_3d8 != (wchar_t *******)0x0) {
            FUN_1400020a8();
          }
          *plVar9 = local_400;
          local_3c8 = (wchar_t *******)0x0;
          uStack_3c0 = (longlong *)0x0;
          FUN_1412734f2(&local_368,L"DataDrivenPlatformInfo",L"IniParent",&local_3c8);
          local_498 = (wchar_t *******)&local_3f8;
          plStack_490 = &local_3c8;
          FUN_140ac5c08(&local_3b8,&local_3d8,&local_498,0);
          local_3d8 = (wchar_t *******)0x0;
          uStack_3d0 = 0;
          FUN_1412734f2(&local_368,L"DataDrivenPlatformInfo",L"PlatformNameAliases",&local_3d8);
          local_4a8 = 0;
          uStack_4a0 = 0;
          FUN_140f7c65c(&local_3d8,&local_4a8,&DAT_149e06196);
          lVar10 = local_4a8;
          lVar22 = (longlong)(int)uStack_4a0;
          uVar5 = 0;
          if (lVar22 != 0) {
            local_4e8 = (longlong *)CONCAT44(local_4e8._4_4_,iVar29);
            lVar19 = 0;
            do {
              pppppppwVar12 = (wchar_t *******)&DAT_149dfb77a;
              if (*(int *)(lVar10 + 8 + lVar19) != 0) {
                pppppppwVar12 = *(wchar_t ********)(lVar10 + lVar19);
              }
              FUN_1446f470e(&local_4b0,pppppppwVar12,1);
              plStack_490 = &local_400;
              local_498 = &local_4b0;
              FUN_1457d3898(&DAT_14c867ea8,local_3dc,&local_498);
              lVar19 = lVar19 + 0x10;
            } while (lVar22 * 0x10 != lVar19);
            uVar5 = (int)uStack_4a0;
            iVar29 = (int)local_4e8;
          }
          FUN_1447a1747(local_4a8,uVar5);
          if (local_4a8 != 0) {
            FUN_1400020a8();
          }
          if (local_3d8 != (wchar_t *******)0x0) {
            FUN_1400020a8();
          }
          if (local_3c8 != (wchar_t *******)0x0) {
            FUN_1400020a8();
          }
        }
        if (local_3f8 != (wchar_t *******)0x0) {
          FUN_1400020a8();
        }
        FUN_1409263a6(&local_368);
        iVar29 = iVar29 + 1;
      } while (iVar29 != (int)local_4f0);
    }
    local_498 = (wchar_t *******)&DAT_100000000;
    plStack_490 = (longlong *)&DAT_14c867e68;
    local_488 = 0xffffffff;
    local_480 = 0;
    iVar29 = 0;
    if (DAT_14c867e80 != 0) {
      FUN_1449c0562(&local_498);
      iVar29 = DAT_14c867e80;
    }
    local_350 = local_488;
    uVar3 = local_350;
    local_348 = local_480;
    local_344 = local_47c;
    local_360 = local_498;
    local_358 = plStack_490;
    local_368 = &DAT_14c867e58;
    local_350._4_4_ = (int)((ulonglong)local_488 >> 0x20);
    if ((local_350._4_4_ != iVar29) || (plStack_490 != (longlong *)&DAT_14c867e68)) {
      iVar6 = local_350._4_4_;
      local_350 = uVar3;
LAB_140f7b7d6:
      lVar10 = (longlong)iVar6 * 0xa0 + *local_368;
      FUN_1400021e4(lVar10,&local_3c8);
      pppppppwVar12 = (wchar_t *******)&DAT_149dfb77a;
      if ((int)uStack_3c0 != 0) {
        pppppppwVar12 = local_3c8;
      }
      iVar6 = (int)uStack_3c0 + -1;
      if ((int)uStack_3c0 == 0) {
        iVar6 = 0;
      }
      uVar5 = FUN_144a49b4a(iVar6,pppppppwVar12);
      iVar6 = FUN_1457511aa(&local_3b8,uVar5);
      if ((iVar6 == -1) || (lVar22 = (longlong)iVar6 * 0x28 + local_3b8, lVar22 == 0)) {
        local_498 = (wchar_t *******)0x0;
        plStack_490 = (longlong *)0x0;
      }
      else {
        local_498 = (wchar_t *******)0x0;
        uVar31 = *(uint *)(lVar22 + 0x18);
        pvVar1 = *(void **)(lVar22 + 0x10);
        plStack_490 = (longlong *)CONCAT44(plStack_490._4_4_,uVar31);
        if ((longlong)(int)uVar31 == 0) {
          plStack_490 = (longlong *)(ulonglong)uVar31;
        }
        else {
          FUN_1446dd670(&local_498,uVar31,0);
          memcpy(local_498,pvVar1,(longlong)(int)uVar31 * 2);
        }
      }
      if (local_3c8 != (wchar_t *******)0x0) {
        FUN_1400020a8();
      }
      iVar6 = (int)plStack_490;
LAB_140f7b8bf:
      pppppppwVar12 = local_498;
      if (iVar6 == 0) {
        pppppppwVar12 = (wchar_t *******)&DAT_149dfb77a;
      }
      lVar22 = 0;
      do {
        uVar14 = *(ushort *)((longlong)pppppppwVar12 + lVar22);
        uVar11 = (ulonglong)uVar14;
        uVar28 = *(ushort *)((longlong)&DAT_149dfb77a + lVar22);
        if (uVar14 == uVar28) {
          if (uVar14 == 0) goto LAB_140f7b913;
        }
        else {
          if (0x7f < (uVar28 | uVar14)) goto LAB_140f7bf70;
          uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
          uVar24 = (ulonglong)uVar28;
          uVar28 = (ushort)(byte)(&DAT_149e05da0)[uVar24];
          if ((&DAT_149e05da0)[uVar11] != (&DAT_149e05da0)[uVar24]) goto LAB_140f7bf70;
        }
        lVar22 = lVar22 + 2;
      } while( true );
    }
LAB_140f7b96c:
    local_350 = uVar3;
    FUN_1457d407c();
    uVar31 = DAT_14c867f00;
    plVar9 = DAT_14c867ef8;
    lVar10 = (longlong)(int)DAT_14c867f00;
    if (1 < lVar10) {
      memset(&local_358,0,0x2f0);
      local_368 = plVar9;
      local_360 = (wchar_t *******)(plVar9 + lVar10 + -1);
      fVar35 = logf((float)(int)uVar31);
      local_358 = (longlong *)CONCAT44(local_358._4_4_,(int)(longlong)(fVar35 + fVar35));
      pplVar33 = &local_368;
      do {
        plVar20 = *pplVar33;
        plVar30 = pplVar33[1];
        iVar29 = *(int *)(pplVar33 + 2);
        iVar6 = (int)((ulonglong)((longlong)plVar30 - (longlong)plVar20) >> 3);
        uVar31 = iVar6 + 1;
        plVar23 = plVar20;
        plVar9 = plVar30;
        if (iVar29 != 0) {
LAB_140f7ba00:
          if (8 < (int)uVar31) {
            lVar10 = plVar20[uVar31 >> 1];
            plVar20[uVar31 >> 1] = *plVar20;
            *plVar20 = lVar10;
            local_4e8 = plVar9 + 1;
            local_4f0 = plVar20;
            do {
              plVar13 = local_4f0 + 1;
              plVar18 = plVar13;
              do {
                local_4f0 = plVar18;
                local_4e0 = plVar13;
                if (plVar9 < plVar18) break;
                local_3c8 = (wchar_t *******)*plVar18;
                local_498 = (wchar_t *******)*plVar20;
                iVar6 = FUN_144a78538(&local_498,&local_3c8);
                plVar18 = plVar18 + 1;
                plVar13 = local_4e0 + 1;
              } while (-1 < iVar6);
              plVar13 = local_4e8 + -2;
              plVar18 = local_4e8;
              do {
                plVar18 = plVar18 + -1;
                local_4e8 = plVar18;
                local_4d8 = plVar13;
                if (plVar18 <= plVar20) break;
                local_3c8 = (wchar_t *******)*plVar20;
                local_498 = (wchar_t *******)*plVar18;
                iVar6 = FUN_144a78538(&local_498,&local_3c8);
                plVar13 = local_4d8 + -1;
              } while (-1 < iVar6);
              if (local_4e8 < local_4f0) goto LAB_140f7c468;
              lVar10 = *local_4f0;
              *local_4f0 = *local_4e8;
              *local_4e8 = lVar10;
            } while( true );
          }
          for (; plVar23 = plVar20, plVar30 = plVar20, plVar20 < plVar9; plVar9 = plVar9 + -1) {
            while (plVar30 = plVar30 + 1, plVar30 <= plVar9) {
              local_3c8 = (wchar_t *******)*plVar30;
              local_498 = (wchar_t *******)*plVar23;
              iVar29 = FUN_144a78538(&local_498);
              if (iVar29 < 0) {
                plVar23 = plVar30;
              }
            }
            lVar10 = *plVar23;
            *plVar23 = *plVar9;
            *plVar9 = lVar10;
          }
          goto LAB_140f7ba72;
        }
LAB_140f7c125:
        local_4f0 = plVar20;
        if (uVar31 != 0) {
          iVar29 = (iVar6 - (iVar6 + -1 >> 0x1f)) + -1 >> 1;
          iVar6 = iVar29;
joined_r0x000140f7c14e:
          do {
            iVar8 = iVar29 * 2 + 1;
            if (iVar8 < (int)uVar31) {
              iVar21 = iVar29 * 2 + 2;
              if (iVar21 < (int)uVar31) {
                local_3c8 = (wchar_t *******)local_4f0[iVar8];
                local_498 = (wchar_t *******)local_4f0[iVar21];
                iVar7 = FUN_144a78538(&local_498,&local_3c8);
                if (-1 < iVar7) {
                  iVar8 = iVar21;
                }
              }
              local_3c8 = (wchar_t *******)local_4f0[iVar8];
              local_498 = (wchar_t *******)local_4f0[iVar29];
              iVar21 = FUN_144a78538();
              if (iVar21 < 0) {
                lVar10 = local_4f0[iVar29];
                local_4f0[iVar29] = local_4f0[iVar8];
                local_4f0[iVar8] = lVar10;
                iVar29 = iVar8;
                goto joined_r0x000140f7c14e;
              }
            }
            bVar34 = iVar6 != 0;
            iVar29 = iVar6 + -1;
            iVar6 = iVar29;
          } while (bVar34);
          if (1 < (int)uVar31) {
            uVar11 = (ulonglong)uVar31;
            lVar10 = *local_4f0;
            *local_4f0 = local_4f0[uVar11 - 1];
            local_4f0[uVar11 - 1] = lVar10;
            if (uVar31 != 2) {
              do {
                uVar24 = uVar11 - 1;
                iVar29 = 0;
                iVar8 = 1;
                iVar6 = 0;
                do {
                  iVar29 = iVar29 + 2;
                  iVar21 = iVar8;
                  if ((longlong)iVar29 < (longlong)uVar24) {
                    local_3c8 = (wchar_t *******)local_4f0[iVar8];
                    local_498 = (wchar_t *******)local_4f0[iVar29];
                    iVar8 = FUN_144a78538(&local_498,&local_3c8);
                    if (-1 < iVar8) {
                      iVar21 = iVar29;
                    }
                  }
                  local_3c8 = (wchar_t *******)local_4f0[iVar21];
                  local_498 = (wchar_t *******)local_4f0[iVar6];
                  iVar29 = FUN_144a78538(&local_498,&local_3c8);
                  if (-1 < iVar29) break;
                  lVar10 = local_4f0[iVar6];
                  local_4f0[iVar6] = local_4f0[iVar21];
                  local_4f0[iVar21] = lVar10;
                  iVar29 = iVar21 * 2;
                  iVar8 = iVar21 * 2 + 1;
                  iVar6 = iVar21;
                } while ((longlong)iVar8 < (longlong)uVar24);
                lVar10 = *local_4f0;
                *local_4f0 = local_4f0[uVar11 - 2];
                local_4f0[uVar11 - 2] = lVar10;
                uVar11 = uVar24;
              } while (2 < uVar24);
            }
          }
        }
LAB_140f7ba72:
        pplVar33 = pplVar33 + -3;
      } while (&local_368 <= pplVar33);
    }
    uVar31 = DAT_14c867f00;
    plVar9 = DAT_14c867ef8;
    DAT_14c867f20 = DAT_14c867f00;
    if (DAT_14c867f24 == 0 && DAT_14c867f00 == 0) {
      DAT_14c867f24 = 0;
    }
    else {
      FUN_1401b309e();
      if (uVar31 != 0) {
        memcpy(DAT_14c867f18,plVar9,(longlong)(int)uVar31 << 3);
      }
    }
    uVar31 = DAT_14c867f20;
    if (DAT_14c867f20 != 0) {
      uVar11 = (ulonglong)DAT_14c867ea0;
      local_4f0 = (longlong *)CONCAT44(local_4f0._4_4_,DAT_14c867e8c);
      local_4e8 = DAT_14c867e98;
      if (DAT_14c867e60 == DAT_14c867e8c) {
        lVar10 = 0;
      }
      else {
        lVar22 = *DAT_14c867f18;
        uVar26 = (uint)((ulonglong)lVar22 >> 0x10);
        uVar15 = (uint)lVar22 & 0xffff;
        plVar9 = (longlong *)&DAT_14c867e90;
        if (DAT_14c867e98 != (longlong *)0x0) {
          plVar9 = DAT_14c867e98;
        }
        iVar29 = *(int *)((longlong)plVar9 +
                         (ulonglong)
                         (DAT_14c867ea0 - 1 &
                         (int)((ulonglong)lVar22 >> 0x20) + ((uint)lVar22 << 0x10 | uVar15) +
                         (uVar26 << 0x13 | uVar26 & 0xffff) + (uVar15 >> 4)) * 4);
        while (iVar29 != -1) {
          lVar10 = DAT_14c867e58 + (longlong)iVar29 * 0xa0;
          if (*(longlong *)(DAT_14c867e58 + (longlong)iVar29 * 0xa0) == lVar22) goto LAB_140f7bb8e;
          iVar29 = *(int *)(lVar10 + 0x98);
        }
        lVar10 = 0;
      }
LAB_140f7bb8e:
      plVar9 = (longlong *)(longlong)(int)DAT_14c867f20;
      uVar24 = 0;
      local_4b8 = DAT_14c867f18;
      lVar22 = DAT_14c867e58;
      plVar20 = DAT_14c867f18;
      iVar29 = DAT_14c867e60;
      bVar25 = *(byte *)(lVar10 + 0x21);
      uVar26 = 0;
      local_4e0 = plVar9;
      do {
        uVar15 = uVar26 + 1;
        if ((int)(uVar26 + 1) < (int)uVar31) {
          uVar15 = uVar31;
        }
        uVar16 = (int)uVar11 - 1;
        local_4d8 = (longlong *)CONCAT44(local_4d8._4_4_,uVar16);
        lVar10 = (longlong)(int)uVar26;
        do {
          lVar10 = lVar10 + 1;
          if ((longlong)plVar9 <= lVar10) goto LAB_140f7bc8a;
          if (iVar29 == (int)local_4f0) {
LAB_140f7c111:
            lVar17 = 0;
          }
          else {
            plVar9 = local_4e8;
            if (local_4e8 == (longlong *)0x0) {
              plVar9 = (longlong *)&DAT_14c867e90;
            }
            lVar19 = plVar20[lVar10];
            uVar2 = (uint)((ulonglong)lVar19 >> 0x10);
            uVar32 = (uint)lVar19 & 0xffff;
            iVar6 = *(int *)((longlong)plVar9 +
                            (ulonglong)
                            ((int)((ulonglong)lVar19 >> 0x20) + ((uint)lVar19 << 0x10 | uVar32) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar32 >> 4) & uVar16) * 4);
            if (iVar6 == -1) goto LAB_140f7c111;
            do {
              lVar17 = lVar22 + (longlong)iVar6 * 0xa0;
              if (*(longlong *)(lVar22 + (longlong)iVar6 * 0xa0) == lVar19) break;
              iVar6 = *(int *)(lVar17 + 0x98);
              lVar17 = 0;
            } while (iVar6 != -1);
          }
          plVar9 = local_4e0;
          plVar20 = local_4b8;
          local_4cc = iVar29;
          local_4c8 = uVar24;
          local_4c0 = uVar11;
        } while ((bVar25 & 1) == *(byte *)(lVar17 + 0x21));
        uVar15 = (uint)lVar10;
LAB_140f7bc8a:
        if ((bVar25 & 1) == 0) {
          uVar16 = (uint)uVar24;
          if (uVar16 != uVar26) {
            memmove(plVar20 + (int)uVar16,plVar20 + (int)uVar26,
                    (longlong)(int)(uVar15 - uVar26) << 3);
            local_4f0 = (longlong *)CONCAT44(local_4f0._4_4_,DAT_14c867e8c);
            local_4e8 = DAT_14c867e98;
            uVar11 = (ulonglong)DAT_14c867ea0;
            lVar22 = DAT_14c867e58;
            iVar29 = DAT_14c867e60;
          }
          uVar24 = (ulonglong)(uVar16 + (uVar15 - uVar26));
          plVar9 = local_4e0;
        }
        bVar25 = bVar25 ^ 1;
        uVar26 = uVar15;
      } while (lVar10 < (longlong)plVar9);
      DAT_14c867f20 = (uint)uVar24;
    }
    lVar10 = (longlong)(int)DAT_14c867f00;
    lVar22 = (longlong)DAT_14c867f10;
    iVar29 = DAT_14c867f10 + DAT_14c867f00;
    uVar31 = DAT_14c867f14 - DAT_14c867f10;
    DAT_14c867f10 = iVar29;
    if (uVar31 < DAT_14c867f00) {
      FUN_1457d3372(&DAT_14c867f08);
    }
    memset((void *)(lVar22 * 8 + DAT_14c867f08),0,lVar10 << 3);
    if (0 < DAT_14c867f10) {
      lVar10 = 0;
      do {
        if (DAT_14c867e60 != DAT_14c867e8c) {
          lVar22 = DAT_14c867ef8[lVar10];
          uVar31 = (uint)((ulonglong)lVar22 >> 0x10);
          uVar26 = (uint)lVar22 & 0xffff;
          plVar9 = DAT_14c867e98;
          if (DAT_14c867e98 == (longlong *)0x0) {
            plVar9 = (longlong *)&DAT_14c867e90;
          }
          iVar29 = *(int *)((longlong)plVar9 +
                           (ulonglong)
                           (DAT_14c867ea0 - 1 &
                           (int)((ulonglong)lVar22 >> 0x20) + ((uint)lVar22 << 0x10 | uVar26) +
                           (uVar31 << 0x13 | uVar31 & 0xffff) + (uVar26 >> 4)) * 4);
          while (iVar29 != -1) {
            lVar19 = DAT_14c867e58 + (longlong)iVar29 * 0xa0;
            if (*(longlong *)(DAT_14c867e58 + (longlong)iVar29 * 0xa0) == lVar22)
            goto LAB_140f7be02;
            iVar29 = *(int *)(lVar19 + 0x98);
          }
        }
        lVar19 = 0;
LAB_140f7be02:
        *(longlong *)(DAT_14c867f08 + lVar10 * 8) = lVar19 + 8;
        lVar10 = lVar10 + 1;
      } while (lVar10 < DAT_14c867f10);
    }
    lVar10 = (longlong)(int)DAT_14c867f20;
    lVar22 = (longlong)DAT_14c867f30;
    iVar29 = DAT_14c867f30 + DAT_14c867f20;
    uVar31 = DAT_14c867f34 - DAT_14c867f30;
    DAT_14c867f30 = iVar29;
    if (uVar31 < DAT_14c867f20) {
      FUN_1457d3372(&DAT_14c867f28);
    }
    memset((void *)(lVar22 * 8 + DAT_14c867f28),0,lVar10 << 3);
    if (0 < DAT_14c867f30) {
      lVar10 = 0;
      do {
        if (DAT_14c867e60 == DAT_14c867e8c) {
LAB_140f7c118:
          lVar19 = 0;
        }
        else {
          lVar22 = DAT_14c867f18[lVar10];
          uVar31 = (uint)((ulonglong)lVar22 >> 0x10);
          uVar26 = (uint)lVar22 & 0xffff;
          plVar9 = DAT_14c867e98;
          if (DAT_14c867e98 == (longlong *)0x0) {
            plVar9 = (longlong *)&DAT_14c867e90;
          }
          iVar29 = *(int *)((longlong)plVar9 +
                           (ulonglong)
                           (DAT_14c867ea0 - 1 &
                           (int)((ulonglong)lVar22 >> 0x20) + ((uint)lVar22 << 0x10 | uVar26) +
                           (uVar31 << 0x13 | uVar31 & 0xffff) + (uVar26 >> 4)) * 4);
          if (iVar29 == -1) goto LAB_140f7c118;
          do {
            lVar19 = DAT_14c867e58 + (longlong)iVar29 * 0xa0;
            if (*(longlong *)(DAT_14c867e58 + (longlong)iVar29 * 0xa0) == lVar22) break;
            iVar29 = *(int *)(lVar19 + 0x98);
            lVar19 = 0;
          } while (iVar29 != -1);
        }
        *(longlong *)(DAT_14c867f28 + lVar10 * 8) = lVar19 + 8;
        lVar10 = lVar10 + 1;
      } while (lVar10 < DAT_14c867f30);
    }
    local_370 = 0;
    if (local_378 != 0) {
      FUN_1400020a8();
    }
    FUN_1407a3a68(&local_3b8);
  }
  if ((local_60 ^ (ulonglong)auStack_518) == DAT_14c707940) {
    return &DAT_14c867e58;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_140f7bf70:
  if (uVar14 == uVar28) goto LAB_140f7b913;
  FUN_14127e8fc(lVar10 + 0x10,&local_498,0);
  pppppppwVar12 = (wchar_t *******)&DAT_149dfb77a;
  if ((int)plStack_490 != 0) {
    pppppppwVar12 = local_498;
  }
  iVar6 = (int)plStack_490 + -1;
  if ((int)plStack_490 == 0) {
    iVar6 = 0;
  }
  uVar5 = FUN_144a49b4a(iVar6,pppppppwVar12);
  iVar6 = FUN_1457511aa(&local_3b8,uVar5);
  if ((iVar6 == -1) || (lVar22 = (longlong)iVar6 * 0x28 + local_3b8, lVar22 == 0)) {
    local_3c8 = (wchar_t *******)0x0;
    uStack_3c0 = (longlong *)0x0;
  }
  else {
    local_3c8 = (wchar_t *******)0x0;
    uVar31 = *(uint *)(lVar22 + 0x18);
    pvVar1 = *(void **)(lVar22 + 0x10);
    uStack_3c0 = (longlong *)CONCAT44(uStack_3c0._4_4_,uVar31);
    if ((longlong)(int)uVar31 == 0) {
      uStack_3c0 = (longlong *)(ulonglong)uVar31;
    }
    else {
      FUN_1446dd670(&local_3c8,uVar31,0);
      memcpy(local_3c8,pvVar1,(longlong)(int)uVar31 * 2);
    }
  }
  if (local_498 != (wchar_t *******)0x0) {
    FUN_1400020a8();
  }
  local_498 = local_3c8;
  plStack_490 = uStack_3c0;
  iVar6 = (int)uStack_3c0;
  goto LAB_140f7b8bf;
LAB_140f7b913:
  if (local_498 != (wchar_t *******)0x0) {
    FUN_1400020a8();
  }
  local_350 = CONCAT44(local_350._4_4_,(uint)local_350 & ~local_360._4_4_);
  FUN_1449c0562(&local_360);
  iVar6 = local_350._4_4_;
  uVar3 = local_350;
  if (local_368 == &DAT_14c867e58 &&
      (local_358 == (longlong *)&DAT_14c867e68 && local_350._4_4_ == iVar29)) goto LAB_140f7b96c;
  goto LAB_140f7b7d6;
LAB_140f7c468:
  lVar10 = *plVar20;
  *plVar20 = *local_4e8;
  *local_4e8 = lVar10;
  iVar29 = iVar29 + -1;
  plVar18 = local_4e8 + -1;
  if ((longlong)local_4d8 - (longlong)plVar23 < (longlong)plVar30 - (longlong)local_4e0) {
    if (local_4f0 < plVar9) {
      *pplVar33 = local_4f0;
      pplVar33[1] = plVar9;
      *(int *)(pplVar33 + 2) = iVar29;
      pplVar33 = pplVar33 + 3;
    }
    plVar30 = plVar20;
    plVar9 = local_4d8;
    if (local_4e8 <= plVar20 + 1) goto LAB_140f7ba72;
  }
  else {
    if (plVar20 + 1 < local_4e8) {
      *pplVar33 = plVar20;
      pplVar33[1] = plVar18;
      *(int *)(pplVar33 + 2) = iVar29;
      pplVar33 = pplVar33 + 3;
    }
    plVar18 = plVar9;
    plVar20 = local_4f0;
    plVar30 = local_4e0;
    if (plVar9 <= local_4f0) goto LAB_140f7ba72;
  }
  local_4d8 = plVar9;
  local_4e0 = plVar30;
  local_4f0 = plVar20;
  iVar6 = (int)((ulonglong)((longlong)local_4d8 - (longlong)local_4e0) >> 3);
  uVar31 = iVar6 + 1;
  plVar20 = local_4f0;
  plVar23 = local_4e0;
  plVar30 = local_4d8;
  plVar9 = plVar18;
  if (iVar29 == 0) goto LAB_140f7c125;
  goto LAB_140f7ba00;
}



// FUNCTION 140f7c55c FUN_140f7c55c body=129 status=ok
// SIG undefined FUN_140f7c55c(void)

void FUN_140f7c55c(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  byte local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_21 = 0;
  FUN_140f7c6de(&local_38,param_1,param_2);
  bVar1 = local_21;
  if (local_30 - 2U < 0x7fffffff) {
    bVar2 = FUN_14052c20c(local_38);
    *param_3 = bVar2 ^ bVar1;
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f7c5de FUN_140f7c5de body=124 status=ok
// SIG undefined FUN_140f7c5de(void)

void FUN_140f7c5de(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140f7c6de(&local_30,param_1,param_2,0);
  iVar1 = local_28 + -1;
  if (local_28 == 0) {
    iVar1 = 0;
  }
  if (0 < iVar1) {
    FUN_1402980a2(param_3,local_30);
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f7c65c FUN_140f7c65c body=129 status=ok
// SIG undefined FUN_140f7c65c(void)

void FUN_140f7c65c(undefined8 param_1,undefined8 param_2,short *param_3,undefined1 param_4)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined *local_28;
  undefined2 *puStack_20;
  short *local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_18 = &DAT_149dfb77a;
  local_28 = &DAT_149e01ea8;
  puStack_20 = &DAT_149e01f72;
  local_38 = 0x49e001d8;
  uStack_34 = 1;
  uStack_30 = 0x49e01e02;
  uStack_2c = 1;
  uVar1 = 4;
  if ((param_3 != (short *)0x0) && (*param_3 != 0)) {
    uVar1 = 5;
    local_18 = param_3;
  }
  local_48 = param_4;
  FUN_144a38a52(0x49e001d8,param_2,&local_38,uVar1);
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f7c6de FUN_140f7c6de body=1073 status=ok
// SIG undefined FUN_140f7c6de(void)

undefined1 (*) [16]
FUN_140f7c6de(undefined1 (*param_1) [16],undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  ushort uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined2 *puVar12;
  ushort uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qb;
  undefined1 auStack_1a8 [32];
  ulonglong local_188;
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 local_158 [16] [16];
  longlong local_58;
  undefined1 (*local_50) [16];
  undefined4 local_48;
  ulonglong local_38;
  undefined1 auVar16 [16];
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if (DAT_14c867f40 - 2U < 0x7fffffff) {
    *param_1 = (undefined1  [16])0x0;
    FUN_1449b8608(local_168,&DAT_14c867f38,param_3);
    uVar1 = local_168._8_4_;
    iVar4 = (local_168._8_4_ == 0) + 1;
    uVar2 = local_168._12_4_;
    local_158[0] = local_168;
    local_168 = ZEXT816(0);
    iVar6 = iVar4 + uVar1;
    if (iVar6 < (int)uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar4);
    }
    if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar6);
    }
    if ((int)uVar2 < iVar6) {
      FUN_1446f8c06(local_158);
    }
    FUN_1400020e8(local_158,&DAT_149e06162,1);
    if (local_158[0]._8_4_ == 0) {
      puVar8 = &DAT_149dfb77a;
    }
    else {
      puVar8 = (undefined2 *)local_158[0]._0_8_;
    }
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    local_188 = 0;
    cVar3 = FUN_14063337c(&DAT_14c846b20,puVar8,param_1,1);
    if (local_158[0]._0_8_ != 0) {
      FUN_1400020a8();
    }
    if (local_168._0_8_ != 0) {
      FUN_1400020a8();
    }
    if (cVar3 != '\0') goto LAB_140f7ca0d;
    if (*(longlong *)*param_1 != 0) {
      FUN_1400020a8();
    }
  }
  *param_1 = (undefined1  [16])0x0;
  cVar3 = FUN_1412734f2(param_2,L"DataDrivenPlatformInfo",param_3);
  auVar16._8_8_ = extraout_XMM0_Qb;
  auVar16._0_8_ = extraout_XMM0_Qa;
  if (cVar3 == '\0') {
    local_50 = local_158;
    local_58 = 0;
    local_48 = 7;
    local_158[0] = pmovsxbw(auVar16,(char  [8])0x73776f646e6957);
    FUN_140002266(local_168,L"%s:%s",local_50,param_3);
    if (local_168._8_4_ == 0) {
      puVar8 = &DAT_149dfb77a;
    }
    else {
      puVar8 = (undefined2 *)local_168._0_8_;
    }
    cVar3 = FUN_1412734f2(param_2,L"DataDrivenPlatformInfo",puVar8);
    if (local_168._0_8_ != 0) {
      FUN_1400020a8();
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    if (cVar3 == '\0') goto LAB_140f7ca0d;
  }
  puVar8 = &DAT_149dfb77a;
  psVar5 = *(short **)*param_1;
  if (*(int *)(*param_1 + 8) == 0) {
    psVar5 = &DAT_149dfb77a;
  }
  lVar10 = 4;
  lVar11 = 0;
  while( true ) {
    uVar13 = *(ushort *)((longlong)psVar5 + lVar11);
    uVar14 = (ulonglong)uVar13;
    uVar9 = *(ushort *)((longlong)&DAT_149e2fcd0 + lVar11);
    if (uVar13 != uVar9) break;
    if (uVar13 == 0) goto LAB_140f7c9ad;
LAB_140f7c922:
    lVar10 = lVar10 + -1;
    if (lVar10 == 0) goto LAB_140f7c9ad;
    lVar11 = lVar11 + 2;
  }
  if ((uVar9 | uVar13) < 0x80) {
    uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
    uVar15 = (ulonglong)uVar9;
    uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
    if ((&DAT_149e05da0)[uVar14] == (&DAT_149e05da0)[uVar15]) goto LAB_140f7c922;
  }
  if (uVar13 != uVar9) {
    lVar10 = 5;
    lVar11 = 0;
    goto LAB_140f7c967;
  }
LAB_140f7c9ad:
  if (param_4 != 0) {
    *(bool *)param_4 = **(short **)*param_1 == 0x21;
  }
  local_168 = (undefined1  [16])0x0;
  FUN_1403de9f2(param_1,local_168,&DAT_149e31048,CONCAT71((int7)((ulonglong)lVar11 >> 8),1));
  if (local_168._8_4_ == 5) {
    FUN_1408e76da(local_158);
    puVar12 = &DAT_149dfb77a;
    if (*(int *)(local_168._0_8_ + 0x28) != 0) {
      puVar12 = *(undefined2 **)(local_168._0_8_ + 0x20);
    }
    puVar7 = &DAT_149dfb77a;
    if (*(int *)(local_168._0_8_ + 0x18) != 0) {
      puVar7 = *(undefined2 **)(local_168._0_8_ + 0x10);
    }
    local_188 = local_188 & 0xffffffffffffff00;
    FUN_14626b27c(local_158,puVar7,1,puVar12);
    local_178 = (undefined1  [16])0x0;
    puVar12 = &DAT_149dfb77a;
    if (*(int *)(local_168._0_8_ + 0x48) != 0) {
      puVar12 = *(undefined2 **)(local_168._0_8_ + 0x40);
    }
    if (*(int *)(local_168._0_8_ + 0x38) != 0) {
      puVar8 = *(undefined2 **)(local_168._0_8_ + 0x30);
    }
    FUN_1412734f2(local_158,puVar8,puVar12,local_178);
    iVar4 = local_178._8_4_ + -1;
    if (local_178._8_4_ == 0) {
      iVar4 = 0;
    }
    FUN_1402980a2(param_1,local_178._0_8_,iVar4);
    if (local_178._0_8_ != 0) {
      FUN_1400020a8();
    }
    FUN_1409263a6(local_158);
  }
  else {
    FUN_14020fad6(param_1,&DAT_149dfb77a);
  }
  FUN_1447a1747(local_168._0_8_,local_168._8_4_);
  if (local_168._0_8_ != 0) {
    FUN_1400020a8();
  }
LAB_140f7ca0d:
  if ((local_38 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_140f7c967:
  uVar13 = *(ushort *)((longlong)psVar5 + lVar11);
  uVar14 = (ulonglong)uVar13;
  uVar9 = *(ushort *)((longlong)&DAT_149e2fcda + lVar11);
  if (uVar13 != uVar9) {
    if ((uVar9 | uVar13) < 0x80) {
      uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
      uVar15 = (ulonglong)uVar9;
      uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
      if ((&DAT_149e05da0)[uVar14] == (&DAT_149e05da0)[uVar15]) goto LAB_140f7c97c;
    }
    if (uVar13 != uVar9) goto LAB_140f7ca0d;
    goto LAB_140f7c9ad;
  }
  if (uVar13 == 0) goto LAB_140f7c9ad;
LAB_140f7c97c:
  lVar10 = lVar10 + -1;
  if (lVar10 == 0) goto LAB_140f7c9ad;
  lVar11 = lVar11 + 2;
  goto LAB_140f7c967;
}



// FUNCTION 140f7cb10 FUN_140f7cb10 body=95 status=ok
// SIG undefined FUN_140f7cb10(void)

undefined4
FUN_140f7cb10(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  plVar2 = (longlong *)FUN_14054d1d4();
  puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x18))(plVar2,param_2,param_4);
  if (puVar3 == (undefined8 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_140f7cb70(param_1,puVar3,param_3);
    (**(code **)*puVar3)(puVar3,1);
  }
  return uVar1;
}



// FUNCTION 140f7cb70 FUN_140f7cb70 body=497 status=ok
// SIG undefined FUN_140f7cb70(void)

ulonglong FUN_140f7cb70(longlong param_1,longlong *param_2,ulonglong param_3)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  ulonglong uVar7;
  undefined2 *puVar8;
  undefined1 auStack_138 [40];
  undefined2 *local_110;
  int local_108;
  undefined **local_100;
  int local_f8;
  byte local_d8;
  byte local_d7;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  undefined1 local_58;
  undefined1 local_50 [16];
  undefined1 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_138;
  (**(code **)(*param_2 + 0x18))(param_2,&local_100);
  if (local_100 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  uVar3 = (**(code **)(*param_2 + 0x30))(param_2);
  if (uVar3 == 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    uVar7 = CONCAT71((int7)((ulonglong)&local_100 >> 8),1);
    if (*(int *)(param_1 + 0xc) != 0) {
      FUN_1446f8c06(param_1,0);
    }
    goto LAB_140f7cc98;
  }
  lVar4 = (**(code **)(*param_2 + 0x28))(param_2);
  if (lVar4 != 0) {
    uVar7 = 0;
    goto LAB_140f7cc98;
  }
  uVar5 = FUN_14001cc68(uVar3,0);
  (**(code **)(*param_2 + 0x170))(param_2,uVar5,uVar3);
  uVar2 = (**(code **)(*param_2 + 0x1f8))(param_2);
  uVar7 = (ulonglong)uVar2;
  FUN_14170ac0e(param_1,uVar5,uVar3 & 0xffffffff);
  if ((param_3 & 1) == 0) {
LAB_140f7cc90:
    FUN_1400020a8(uVar5);
  }
  else {
    if ((param_3 & 2) == 0) {
      (**(code **)(*param_2 + 0x18))(param_2,&local_100);
      ppuVar6 = local_100;
      if (local_f8 == 0) {
        ppuVar6 = (undefined **)&DAT_149dfb77a;
      }
      cVar1 = FUN_140d2d64c(ppuVar6,0,1);
      if (local_100 != (undefined **)0x0) {
        FUN_1400020a8();
      }
      if (cVar1 == '\0') goto LAB_140f7cc90;
    }
    (**(code **)(*param_2 + 0x18))(param_2,&local_110);
    puVar8 = local_110;
    if (local_108 == 0) {
      puVar8 = &DAT_149dfb77a;
    }
    FUN_144869430(&local_100);
    local_68 = 0;
    local_58 = 1;
    local_d8 = local_d8 | 1;
    local_d7 = local_d7 & 0xfe;
    local_100 = &PTR_FUN_149e2fe80;
    local_70 = uVar5;
    local_60 = uVar3;
    FUN_140056680(local_50,puVar8);
    local_40 = 1;
    if (local_110 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    FUN_14681a5f2(&local_100);
  }
LAB_140f7cc98:
  if ((local_38 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 140f7cd62 FUN_140f7cd62 body=33 status=ok
// SIG undefined FUN_140f7cd62(void)

undefined8 FUN_140f7cd62(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140d6afb0();
  FUN_140056680(param_1,uVar1);
  return param_1;
}



// FUNCTION 140f7cd83 FUN_140f7cd83 body=1375 status=ok
// SIG undefined FUN_140f7cd83(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140f7cd83(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined1 local_d0;
  undefined1 local_c8;
  longlong local_c0;
  undefined2 *local_b8;
  int local_b0;
  undefined2 *local_a8;
  int local_a0;
  undefined2 *local_98;
  ulonglong uStack_90;
  longlong local_88;
  ulonglong uStack_80;
  undefined2 *local_78;
  int local_70;
  wchar_t *local_68;
  undefined4 local_60;
  undefined2 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c868288) && (FUN_144b3d300(&DAT_14c868288), DAT_14c868288 == -1)) {
    DAT_14c868278 = 0;
    _DAT_14c868280 = 0;
    atexit(FUN_142782957);
    _Init_thread_footer(&DAT_14c868288);
  }
  if (DAT_14c868274 == '\0') {
    DAT_14c868274 = '\x01';
    plVar5 = (longlong *)FUN_14054d1d4();
    FUN_140d6ab96(&local_78);
    puVar6 = local_78;
    if (local_70 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    local_c8 = 1;
    local_d8 = 1;
    local_d0 = 0;
    (**(code **)(*plVar5 + 0x80))(plVar5,&DAT_14c868278,puVar6,L"DataDrivenPlatformInfo.ini");
    if (local_78 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    local_88 = 0;
    uStack_80 = 0;
    plVar5 = (longlong *)FUN_14054d1d4();
    FUN_140d6ac5a();
    FUN_140056680(&local_a8);
    local_70 = local_a0 + -1;
    if (local_a0 == 0) {
      local_70 = 0;
    }
    local_78 = local_a8;
    local_68 = L"Platforms";
    local_60 = 9;
    local_58 = &DAT_149e060b2;
    local_50 = 1;
    FUN_140bee87a(&local_98,&local_78,3);
    puVar6 = local_98;
    if ((int)uStack_90 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    local_d8 = 1;
    (**(code **)(*plVar5 + 0x78))(plVar5,&local_88,puVar6,0);
    if (local_98 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_a8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    lVar11 = (longlong)(int)uStack_80;
    if (lVar11 != 0) {
      lVar9 = 0;
      local_c0 = local_88;
      lVar12 = local_88;
      do {
        puVar6 = &DAT_149dfb77a;
        if (*(int *)(lVar12 + 8 + lVar9) != 0) {
          puVar6 = *(undefined2 **)(lVar12 + lVar9);
        }
        FUN_1457d3d7a(&local_a8,puVar6);
        local_70 = local_a0 + -1;
        if (local_a0 == 0) {
          local_70 = 0;
        }
        local_78 = local_a8;
        local_68 = L"Config/DataDrivenPlatformInfo.ini";
        local_60 = 0x21;
        FUN_140bee87a(&local_98,&local_78,2);
        if (local_a8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        plVar5 = (longlong *)FUN_14054d1d4();
        cVar3 = (**(code **)(*plVar5 + 0x48))(plVar5);
        if (cVar3 != '\0') {
          lVar12 = (longlong)DAT_14c868280;
          uVar4 = DAT_14c868280 + 1;
          _DAT_14c868280 = CONCAT44(DAT_14c868284,uVar4);
          if (DAT_14c868284 < uVar4) {
            FUN_1447a1bd6(&DAT_14c868278);
          }
          puVar6 = local_98;
          lVar2 = DAT_14c868278;
          lVar12 = lVar12 * 0x10;
          puVar1 = (undefined8 *)(DAT_14c868278 + lVar12);
          *(undefined8 *)(DAT_14c868278 + lVar12) = 0;
          lVar10 = (longlong)(int)uStack_90;
          *(int *)(lVar2 + 8 + lVar12) = (int)uStack_90;
          if (lVar10 == 0) {
            *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
            lVar12 = local_c0;
          }
          else {
            FUN_1446dd670(puVar1,uStack_90 & 0xffffffff,0);
            memcpy((void *)*puVar1,puVar6,lVar10 * 2);
            lVar12 = local_c0;
          }
        }
        if (local_98 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        lVar9 = lVar9 + 0x10;
      } while (lVar11 << 4 != lVar9);
    }
    local_98 = (undefined2 *)0x0;
    uStack_90 = 0;
    plVar5 = (longlong *)FUN_14054d1d4();
    FUN_14626c0de(&local_b8);
    local_70 = local_b0 + -1;
    if (local_b0 == 0) {
      local_70 = 0;
    }
    local_78 = local_b8;
    local_68 = L"*";
    local_60 = 1;
    FUN_140bee87a(&local_a8,&local_78,2);
    puVar6 = local_a8;
    if (local_a0 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    local_d8 = 1;
    (**(code **)(*plVar5 + 0x78))(plVar5,&local_98,puVar6,0);
    if (local_a8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_b8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    puVar6 = local_98;
    lVar11 = (longlong)(int)uStack_90;
    if (lVar11 == 0) {
      uVar8 = 0;
    }
    else {
      lVar12 = 0;
      do {
        puVar7 = &DAT_149dfb77a;
        if (*(int *)((longlong)puVar6 + lVar12 + 8) != 0) {
          puVar7 = *(undefined2 **)((longlong)puVar6 + lVar12);
        }
        FUN_1457d3df4(&local_b8,puVar7);
        local_70 = local_b0 + -1;
        if (local_b0 == 0) {
          local_70 = 0;
        }
        local_78 = local_b8;
        local_68 = L"Config/DataDrivenPlatformInfo.ini";
        local_60 = 0x21;
        FUN_140bee87a(&local_a8,&local_78,2);
        if (local_b8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        plVar5 = (longlong *)FUN_14054d1d4();
        puVar7 = &DAT_149dfb77a;
        if (local_a0 != 0) {
          puVar7 = local_a8;
        }
        cVar3 = (**(code **)(*plVar5 + 0x48))(plVar5,puVar7);
        if (cVar3 != '\0') {
          FUN_1412fabe8(&DAT_14c868278,&local_a8);
        }
        if (local_a8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        lVar12 = lVar12 + 0x10;
      } while (lVar11 * 0x10 != lVar12);
      uVar8 = uStack_90 & 0xffffffff;
    }
    FUN_1447a1747(local_98,uVar8);
    if (local_98 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    FUN_1447a1747(local_88,uStack_80 & 0xffffffff);
    if (local_88 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f7d2f2 FUN_140f7d2f2 body=40 status=ok
// SIG undefined FUN_140f7d2f2(void)

undefined8 FUN_140f7d2f2(undefined8 param_1,int param_2)

{
  FUN_140f7d31a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140f7d31a FUN_140f7d31a body=369 status=ok
// SIG undefined FUN_140f7d31a(void)

void FUN_140f7d31a(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_14b39ac80;
  plVar2 = (longlong *)param_1[0x29];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar2 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  plVar2 = param_1 + 0x19;
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x1d) * 0x120));
  if (pcVar3 != (code *)0x0) {
    plVar4 = plVar2;
    if (0x18 < *(ushort *)(param_1 + 0x1c)) {
      plVar4 = (longlong *)*plVar2;
    }
    (*pcVar3)(plVar4);
  }
  if (0x18 < *(ushort *)(param_1 + 0x1c)) {
    FUN_1400020a8(*plVar2);
  }
  plVar2 = (longlong *)param_1[0x13];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar2 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  *param_1 = &PTR_FUN_14b39baf0;
  FUN_1401beee6(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_1401bef31(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[3];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar2 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140f7d44b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x10))(plVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140f7d48c FUN_140f7d48c body=100 status=ok
// SIG undefined FUN_140f7d48c(void)

void FUN_140f7d48c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a353d90;
  FUN_140f7d5a6(param_1 + 0x22);
  FUN_140f7d4f0(param_1 + 0x1c);
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140f7d4f0 FUN_140f7d4f0 body=182 status=ok
// SIG undefined FUN_140f7d4f0(void)

void FUN_140f7d4f0(longlong *param_1)

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
        FUN_14017d6b0(lVar2);
        FUN_1400020a8(lVar2);
      }
      lVar4 = lVar4 + 0x18;
    } while ((longlong)(int)lVar3 * 0x18 != lVar4);
  }
  lVar3 = param_1[2];
  lVar1 = param_1[3];
  if ((longlong)(int)lVar1 != 0) {
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(lVar3 + lVar4);
      if (lVar2 != 0) {
        FUN_14017d6b0(lVar2);
        FUN_1400020a8(lVar2);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)(int)lVar1 * 8 != lVar4);
    lVar3 = param_1[2];
  }
  if (lVar3 != 0) {
    FUN_1400020a8(lVar3);
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 140f7d5a6 FUN_140f7d5a6 body=213 status=ok
// SIG undefined FUN_140f7d5a6(void)

void FUN_140f7d5a6(longlong *param_1)

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
        FUN_14017d40e(lVar2 + 0xd8);
        FUN_14017d442(lVar2 + 0xb8);
        FUN_14017d484(lVar2);
        FUN_1400020a8(lVar2);
      }
      lVar4 = lVar4 + 0x18;
    } while ((longlong)(int)lVar3 * 0x18 != lVar4);
  }
  lVar3 = param_1[2];
  lVar1 = param_1[3];
  if ((longlong)(int)lVar1 != 0) {
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(lVar3 + lVar4);
      if (lVar2 != 0) {
        FUN_14178db1c(lVar2);
        FUN_1400020a8(lVar2);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)(int)lVar1 * 8 != lVar4);
    lVar3 = param_1[2];
  }
  if (lVar3 != 0) {
    FUN_1400020a8(lVar3);
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 140f7d684 FUN_140f7d684 body=487 status=ok
// SIG undefined FUN_140f7d684(void)

undefined8 * FUN_140f7d684(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x1e) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_14ac3d210;
  FUN_14044066a(param_1 + 7,0x14,1);
  param_1[0xe] = 0;
  *(undefined1 *)((longlong)param_1 + 0x7c) = 1;
  *(undefined4 *)(param_1 + 0xf) = 0x1010101;
  *param_1 = &PTR_FUN_14ac3cb10;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0xffffffff00000000;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined8 *)((longlong)param_1 + 0x164) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x16c) = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x31) = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0x200000000;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = 0x20;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x204) = 0;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0x200000000;
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x264) = 0x20;
  *(undefined4 *)(param_1 + 0x4d) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x26c) = 0;
  param_1[0x4f] = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0x200000000;
  param_1[0x58] = 0;
  *(undefined4 *)(param_1 + 0x59) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2cc) = 0x20;
  *(undefined4 *)(param_1 + 0x5a) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2d4) = 0;
  param_1[0x5c] = 0;
  *(undefined4 *)(param_1 + 0x5d) = 0;
  param_1[0x5e] = 0;
  FUN_140785382(param_1 + 0x5f,0x14);
  *(undefined2 *)(param_1 + 0x66) = 0;
  *(undefined1 *)(param_1 + 0xf) = 1;
  *(undefined4 *)((longlong)param_1 + 0x79) = 0x10000;
  return param_1;
}



// FUNCTION 140f7d87a FUN_140f7d87a body=66 status=ok
// SIG undefined FUN_140f7d87a(void)

undefined8 * FUN_140f7d87a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b49d1f0;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 140f7d8c2 FUN_140f7d8c2 body=228 status=ok
// SIG undefined FUN_140f7d8c2(void)

longlong FUN_140f7d8c2(void)

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
  if (DAT_14cba97d8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_14096c2dc;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1464d65ee;
    local_38 = &LAB_148c09837;
    local_40 = &LAB_145868bf4;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x1f00;
    FUN_14081cfa3(L"/Script/OakGame",L"OakDecoCharacter",&DAT_14cba97d8,&DAT_148c09836);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba97d8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f7d9ac FUN_140f7d9ac body=221 status=ok
// SIG undefined FUN_140f7d9ac(void)

longlong FUN_140f7d9ac(void)

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
  if (DAT_14cc1cce0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1494bd54d;
    local_40 = &LAB_14673ae44;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x108;
    FUN_14081cfa3(L"/Script/OptimusCore",L"OptimusNode",&DAT_14cc1cce0,FUN_14673ae22);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc1cce0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f7da8a FUN_140f7da8a body=134 status=ok
// SIG undefined FUN_140f7da8a(void)

undefined4 FUN_140f7da8a(undefined8 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined1 auStack_88 [32];
  undefined ***local_68;
  undefined1 local_60;
  undefined **local_58;
  undefined2 local_50;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    local_58 = &PTR_FUN_149e18960;
    local_50 = 2;
    if (0 < param_3) {
      local_68 = &local_58;
      local_60 = 1;
      FUN_140854fd0(param_1,param_1,param_2,param_3);
    }
    uVar1 = FUN_140f7db11(&local_58);
    FUN_140859a90(&local_58);
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f7db11 FUN_140f7db11 body=75 status=ok
// SIG undefined FUN_140f7db11(void)

uint FUN_140f7db11(longlong param_1)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  
  uVar1 = *(ushort *)(param_1 + 8);
  if ((uVar1 & 0x11) == 0) {
    if ((uVar1 & 2) == 0) {
      lVar3 = *(longlong *)(param_1 + 0x18);
    }
    else {
      lVar3 = param_1 + 10;
    }
  }
  else {
    lVar3 = 0;
  }
  uVar2 = (uint)(uVar1 >> 5);
  if ((short)uVar1 < 0) {
    uVar2 = *(uint *)(param_1 + 0xc);
  }
  uVar2 = FUN_140f7db60(lVar3,uVar2);
  if (uVar2 != 2) {
    uVar2 = (uint)(uVar2 == 1);
  }
  return uVar2;
}



// FUNCTION 140f7db60 FUN_140f7db60 body=186 status=ok
// SIG undefined FUN_140f7db60(void)

undefined8 FUN_140f7db60(wchar_t *param_1,int param_2)

{
  wchar_t wVar1;
  int iVar2;
  size_t sVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  
  uVar5 = 3;
  if ((param_1 != (wchar_t *)0x0) && (-2 < param_2)) {
    if (param_2 == -1) {
      sVar3 = wcslen(param_1);
      param_2 = (int)sVar3;
    }
    iVar6 = 0;
    do {
      if (param_2 <= iVar6) {
        return 3;
      }
      iVar2 = iVar6 + 1;
      wVar1 = param_1[iVar6];
      uVar4 = (uint)(ushort)wVar1;
      if ((((wVar1 & 0xfc00U) == 0xd800) && (iVar2 != param_2)) &&
         (((ushort)param_1[iVar2] & 0xfc00) == 0xdc00)) {
        uVar4 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)param_1[iVar2] + 0xfca02400;
        iVar2 = iVar6 + 2;
      }
      iVar6 = iVar2;
      iVar2 = FUN_142581720(uVar4);
      if (iVar2 == 0) {
        return 0;
      }
    } while ((iVar2 != 0xd) && (iVar2 != 1));
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 140f7dc1c FUN_140f7dc1c body=184 status=ok
// SIG undefined FUN_140f7dc1c(void)

int * FUN_140f7dc1c(longlong param_1,longlong *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  longlong lVar4;
  longlong lVar5;
  int *piVar6;
  
  piVar2 = (int *)(**(code **)(*param_2 + 8))(param_2);
  piVar3 = *(int **)(param_1 + 0xb0);
  iVar1 = *(int *)(param_1 + 0xb8);
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    lVar5 = lVar4 * 0x60;
    piVar6 = piVar3;
    do {
      if ((((*piVar6 == *piVar2) && (piVar6[1] == piVar2[1])) && (piVar6[2] == piVar2[2])) &&
         (piVar6[3] == piVar2[3])) {
        if (piVar6 != (int *)0x0) {
          return piVar6;
        }
        break;
      }
      piVar6 = piVar6 + 0x18;
      lVar5 = lVar5 + -0x60;
    } while (lVar5 != 0);
  }
  *(uint *)(param_1 + 0xb8) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0xbc) < iVar1 + 1U) {
    FUN_140f7ddee((undefined8 *)(param_1 + 0xb0),iVar1);
    piVar3 = *(int **)(param_1 + 0xb0);
  }
  FUN_140f7dcd4(piVar3 + lVar4 * 0x18,param_2);
  return piVar3 + lVar4 * 0x18;
}



// FUNCTION 140f7dcd4 FUN_140f7dcd4 body=142 status=ok
// SIG undefined FUN_140f7dcd4(void)

undefined4 * FUN_140f7dcd4(undefined4 *param_1,longlong *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  
  puVar5 = (undefined4 *)(**(code **)(*param_2 + 8))(param_2);
  uVar2 = puVar5[1];
  uVar3 = puVar5[2];
  uVar4 = puVar5[3];
  *param_1 = *puVar5;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  puVar6 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2);
  *(undefined8 *)(param_1 + 0xe) = 0;
  iVar1 = *(int *)(puVar6 + 1);
  _Src = (void *)*puVar6;
  param_1[0x10] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0x11] = 3;
  }
  else {
    FUN_140f7dd62(param_1 + 4,iVar1,0);
    puVar5 = *(undefined4 **)(param_1 + 0xe);
    if (*(undefined4 **)(param_1 + 0xe) == (undefined4 *)0x0) {
      puVar5 = param_1 + 4;
    }
    memcpy(puVar5,_Src,(longlong)iVar1 * 0xc);
  }
  param_1[0x12] = 0xffffffff;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  return param_1;
}



// FUNCTION 140f7dd62 FUN_140f7dd62 body=140 status=ok
// SIG undefined FUN_140f7dd62(void)

void FUN_140f7dd62(longlong param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 3;
    if (3 < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 * 0xc,0);
      uVar2 = (uint)(uVar1 / 0xc);
      uVar3 = 0x7fffffff;
      if ((int)param_2 <= (int)uVar2) {
        uVar3 = uVar2;
      }
    }
  }
  if (((int)param_3 < (int)uVar3) &&
     ((param_3 = uVar3, 3 < uVar3 || (*(longlong *)(param_1 + 0x28) != 0)))) {
    uVar2 = 0;
    if (3 < uVar3) {
      uVar2 = uVar3;
    }
    FUN_1446efa72(param_1 + 0x28,0,uVar2,0xc);
  }
  *(uint *)(param_1 + 0x34) = param_3;
  return;
}



// FUNCTION 140f7ddee FUN_140f7ddee body=275 status=ok
// SIG undefined FUN_140f7ddee(void)

void FUN_140f7ddee(longlong param_1,int param_2)

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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x60)) {
      uVar5 = uVar4 / 0x60 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x60,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140f7df0a FUN_140f7df0a body=323 status=ok
// SIG undefined FUN_140f7df0a(void)

longlong FUN_140f7df0a(longlong param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140ed1c0c();
  FUN_140ed1c0c(param_1 + 0xf8);
  *(undefined1 *)(param_1 + 0x1f0) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0x41200000;
  *(undefined8 *)(param_1 + 100) = DAT_14cba6080;
  FUN_1400b22c2(&local_28,"DisplayTutorialSlideout");
  if ((longlong *)(param_1 + 200) == &local_28) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 200) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 200) = local_28;
    local_28 = 0;
    *(undefined4 *)(param_1 + 0xd0) = local_20;
    *(undefined4 *)(param_1 + 0xd4) = local_1c;
  }
  FUN_1400b22c2(&local_28,"OnTutorialExpanded");
  if ((longlong *)(param_1 + 0x1c0) == &local_28) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x1c0) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x1c0) = local_28;
    *(undefined4 *)(param_1 + 0x1c8) = local_20;
    *(undefined4 *)(param_1 + 0x1cc) = local_1c;
  }
  *(undefined1 *)(param_1 + 0x1d0) = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f7e04e FUN_140f7e04e body=182 status=ok
// SIG undefined FUN_140f7e04e(void)

void FUN_140f7e04e(longlong param_1,byte param_2)

{
  code *pcVar1;
  uint *puVar2;
  undefined1 auStack_58 [32];
  uint local_38;
  undefined4 uStack_34;
  ushort local_20;
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(char *)(param_1 + -0x700) == '\x03') && (*(char *)(param_1 + 0x2975) == '\x02')) {
    puVar2 = &local_38;
    local_20 = 4;
    local_38 = (uint)param_2;
    local_18 = 1;
    FUN_140f7e106(param_1 + 0x2968,&DAT_14cb71290,puVar2,0);
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_18 * 0x120));
    if (pcVar1 != (code *)0x0) {
      if (0x18 < local_20) {
        puVar2 = (uint *)CONCAT44(uStack_34,local_38);
      }
      (*pcVar1)(puVar2);
    }
    if (0x18 < local_20) {
      FUN_1400020a8(CONCAT44(uStack_34,local_38));
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f7e106 FUN_140f7e106 body=306 status=ok
// SIG undefined FUN_140f7e106(void)

bool FUN_140f7e106(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_178 [40];
  undefined8 local_150;
  char local_148 [4];
  undefined8 local_144;
  int local_13c;
  undefined1 local_138 [256];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_140f7e23a(local_148);
  if (local_148[0] != '\0') {
    uVar1 = local_144;
    if (local_148[0] != '\x03') {
      if (local_148[0] == '\x02') {
        uVar1 = DAT_14cb7c570;
        if ((local_13c != 1) && (uVar1 = DAT_14cb7c578, local_13c != 0)) {
          memset(local_138,0,0x100);
          FUN_1407bf796(local_138,0x100,&DAT_149dfc0ac,local_13c);
          FUN_1446ddc76(&local_150,local_138,1);
          uVar1 = local_150;
        }
      }
      else if (local_148[0] == '\x01') {
        puVar2 = &DAT_14cb7c580;
        if (local_13c != 0) {
          puVar2 = &DAT_14cb7c588;
        }
        uVar1 = *puVar2;
      }
      else {
        local_150 = 0;
        uVar1 = local_150;
      }
    }
    local_150 = uVar1;
    FUN_140bfca4e(param_1,param_2,&local_150,param_4);
  }
  if ((local_38 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_148[0] != '\0';
}



// FUNCTION 140f7e23a FUN_140f7e23a body=229 status=ok
// SIG undefined FUN_140f7e23a(void)

uint * FUN_140f7e23a(uint *param_1,int *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  uint local_28;
  undefined8 uStack_24;
  uint uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined1 *)param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  bVar1 = *(byte *)(param_2 + 8);
  if (bVar1 == 1) {
    uVar3 = (uint)(*param_2 != 0);
    puVar4 = &DAT_14cb7c580;
    if (*param_2 != 0) {
      puVar4 = &DAT_14cb7c588;
    }
    uVar2 = *puVar4;
    *(undefined1 *)param_1 = 1;
    *(undefined8 *)(param_1 + 1) = uVar2;
  }
  else {
    if (0x15 < bVar1) goto LAB_140f7e294;
    if ((0x20000cU >> (bVar1 & 0x1f) & 1) == 0) {
      if ((0x40100U >> (bVar1 & 0x1f) & 1) != 0) {
        FUN_1457d43e4(param_2,&local_30);
        local_28 = local_28 & 0xffffff00;
        uStack_24 = 0;
        uStack_1c = 0;
        FUN_144976b9c(&local_28,local_30);
        *param_1 = local_28;
        param_1[1] = (uint)uStack_24;
        param_1[2] = uStack_24._4_4_;
        param_1[3] = uStack_1c;
      }
      goto LAB_140f7e294;
    }
    uVar3 = FUN_1405d5f74(param_2);
    *(undefined1 *)param_1 = 2;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  param_1[3] = uVar3;
LAB_140f7e294:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f7e320 FUN_140f7e320 body=17 status=ok
// SIG undefined FUN_140f7e320(void)

undefined1 FUN_140f7e320(void)

{
  longlong lVar1;
  
  lVar1 = FUN_140f7e331();
  return *(undefined1 *)(lVar1 + 0x32);
}



// FUNCTION 140f7e331 FUN_140f7e331 body=311 status=ok
// SIG undefined FUN_140f7e331(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_140f7e331(void)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cbc8bf0 == (longlong *)0x0) {
    _DAT_14cbc8c08 = 0;
    DAT_14cbc8c00 = 0;
    plVar2 = &DAT_14cbc8c00;
    _DAT_14cbc8c10 = 0xffffffff;
    _DAT_14cbc8bf8 = &PTR_FUN_14b5f8ca0;
    _DAT_14cbc8c18 = 0;
    uRam000000014cbc8c20 = 0;
    _DAT_14cbc8c28 = 0x101;
    DAT_14cbc8bf0 = (longlong *)&DAT_14cbc8bf8;
LAB_140f7e362:
    plVar4 = DAT_14cbc8bf0;
    if (*plVar2 == 0) goto LAB_140f7e40a;
    cVar1 = FUN_1449e3c20(DAT_14cbc8bf0);
    if (cVar1 == '\0') goto LAB_140f7e37c;
  }
  else {
    plVar2 = DAT_14cbc8bf0 + 1;
    if ((char)DAT_14cbc8bf0[2] == '\0') goto LAB_140f7e362;
    if ((char)DAT_14cbc8bf0[2] == '\x02') {
      plVar2 = (longlong *)(*plVar2 + 0x30);
      goto LAB_140f7e362;
    }
LAB_140f7e40a:
    plVar4 = DAT_14cbc8bf0;
    lVar3 = FUN_140162146();
    if (lVar3 == 0) goto LAB_140f7e37c;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_30 = 0;
    uStack_28 = 0;
    FUN_1446ddda2(&local_48,"def_globals_dlc",0);
    FUN_140024ada(&local_48,plVar4);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  (**(code **)(*plVar4 + 0x20))(plVar4);
LAB_140f7e37c:
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return plVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f7e472 FUN_140f7e472 body=107 status=ok
// SIG undefined FUN_140f7e472(void)

undefined8 FUN_140f7e472(undefined8 *param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  if (*param_2 == 0) {
    local_20 = 0;
  }
  else {
    FUN_1400bc2ec(*param_2,&local_20,&local_28);
  }
  *param_1 = local_20;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f7e4de FUN_140f7e4de body=1214 status=ok
// SIG undefined FUN_140f7e4de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_140f7e4de(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  uint uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined4 *puVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 ****ppppuVar15;
  ulonglong uVar16;
  undefined1 auStack_d8 [40];
  ulonglong local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 *local_98;
  undefined8 uStack_90;
  undefined1 local_84 [4];
  undefined8 ***local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  ushort local_68;
  ushort local_60;
  byte local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar7 = (longlong *)FUN_14001cc68(0x138,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14b432c50;
  plVar1 = plVar7 + 2;
  FUN_140724c88(plVar1,param_1,param_3);
  plVar7[0x1c] = param_1;
  *(undefined1 *)(plVar7 + 0x24) = 0;
  *(undefined4 *)(plVar7 + 0x25) = 0;
  *(undefined1 *)((longlong)plVar7 + 300) = 0;
  plVar7[0x1d] = 0;
  plVar7[0x1e] = 0;
  plVar7[0x1f] = 0;
  plVar7[0x20] = 0;
  plVar7[2] = (longlong)&PTR_FUN_14b431200;
  plVar7[0x26] = param_1;
  if (*(char *)((longlong)param_3 + 9) == '\x01') {
    if (((*(char *)(param_1 + 0xd8) == '\x01') && (1 < *(int *)(param_1 + 0xe8))) &&
       (param_3 = (longlong *)*param_3, param_3 != (longlong *)0x0)) {
      uVar8 = FUN_1407ca880();
      plVar9 = (longlong *)(**(code **)(*param_3 + 0x288))(param_3,uVar8);
      if (plVar9 == (longlong *)0x0) goto LAB_140f7e5fa;
      uVar8 = FUN_1407ca880();
      plVar10 = (longlong *)FUN_144718840(plVar9,uVar8);
      if (((plVar9 == plVar10) || (plVar10 == (longlong *)0x0)) ||
         (lVar11 = (**(code **)(*plVar10 + 0x50))(plVar10), lVar11 == 0)) goto LAB_140f7e5fa;
      local_b0 = 0xffffffff;
      if ((longlong)*(int *)(lVar11 + 0x68) != 0) {
        lVar13 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar11 + 0x60) + lVar13) == param_1) {
            local_b0 = (ulonglong)*(uint *)(*(longlong *)(lVar11 + 0x60) + 8 + lVar13);
            break;
          }
          lVar13 = lVar13 + 0x10;
        } while ((longlong)*(int *)(lVar11 + 0x68) * 0x10 != lVar13);
      }
      local_98 = (undefined8 *)0x0;
      uStack_90 = (undefined8 ****)0x0;
      local_a8 = lVar11;
      if (0 < *(int *)(param_1 + 0xe8)) {
        lVar11 = 0;
        local_a0 = local_b0 * 400;
        uVar16 = 0;
        do {
          uVar4 = (ulonglong)uStack_90;
          lVar13 = *(longlong *)(param_1 + 0xe0);
          lVar14 = (longlong)(int)uStack_90;
          uVar6 = (int)uStack_90 + 1;
          uStack_90 = (undefined8 ****)CONCAT44(uStack_90._4_4_,uVar6);
          if (uStack_90._4_4_ < uVar6) {
            FUN_1457d59a6(&local_98,uVar4 & 0xffffffff);
          }
          FUN_1457d5958(local_98 + lVar14 * 0x32,lVar13 + lVar11);
          if (local_b0 == uVar16) {
            local_80 = (undefined8 ****)0x0;
            local_60 = 4;
            local_78 = 0;
            local_58 = 2;
            local_50 = (byte)~DAT_14c9a8754 >> 4 & 2;
            FUN_1403719a4((longlong)local_98 + local_a0,&local_80);
            pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
            if (pcVar3 != (code *)0x0) {
              puVar12 = &local_78;
              if (0x18 < local_60) {
                puVar12 = (undefined4 *)CONCAT44(uStack_74,local_78);
              }
              (*pcVar3)(puVar12);
            }
            if (0x18 < local_60) {
              FUN_1400020a8(CONCAT44(uStack_74,local_78));
            }
          }
          uVar16 = uVar16 + 1;
          lVar11 = lVar11 + 400;
        } while ((longlong)uVar16 < (longlong)*(int *)(param_1 + 0xe8));
      }
      uVar5 = FUN_140f7e99d(&local_98,plVar7[9],0xbf800000);
      FUN_1457d5bf2(local_a8,param_1,uVar5);
      FUN_140bcae4d(local_98,(ulonglong)uStack_90 & 0xffffffff);
      if (local_98 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
LAB_140f7e5fa:
      uVar5 = FUN_140f7e99d(plVar7[0x26] + 0xe0,plVar7[9],0xbf800000);
    }
    local_68 = 4;
    local_80 = (undefined8 ***)CONCAT44(local_80._4_4_,uVar5);
    local_60 = CONCAT11(local_60._1_1_,2);
    local_98 = &DAT_14cb8cc80;
    uStack_90 = &local_80;
    FUN_140881f5a(plVar7 + 0xb,local_84,&local_98,0);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)(byte)local_60 * 0x120));
    if (pcVar3 != (code *)0x0) {
      ppppuVar15 = &local_80;
      if (0x18 < local_68) {
        ppppuVar15 = (undefined8 ****)local_80;
      }
      (*pcVar3)(ppppuVar15);
    }
    if (0x18 < local_68) {
      FUN_1400020a8(local_80);
    }
  }
  if ((plVar1 == (longlong *)0x0) ||
     (((plVar7[3] != 0 && (plVar7[4] != 0)) && (0 < *(int *)(plVar7[4] + 8))))) {
    *param_2 = (longlong)plVar1;
    param_2[1] = (longlong)plVar7;
    if (plVar7 == (longlong *)0x0) goto LAB_140f7e6e0;
  }
  else {
    if (plVar7 == (longlong *)0x0) {
      _DAT_00000018 = 0x10;
      plVar9 = (longlong *)&DAT_00000020;
      plVar10 = _DAT_00000020;
      if (_DAT_00000020 != (longlong *)0x0) {
LAB_140f7e933:
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar10 + 0x10))();
        }
        *plVar9 = (longlong)plVar7;
        if (plVar7 != (longlong *)0x0) goto LAB_140f7e6c1;
      }
      *param_2 = (longlong)plVar1;
      param_2[1] = (longlong)plVar7;
      goto LAB_140f7e6e0;
    }
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    plVar7[3] = (longlong)plVar1;
    if ((longlong *)plVar7[4] != plVar7) {
      LOCK();
      *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
      UNLOCK();
      if ((longlong *)plVar7[4] != (longlong *)0x0) {
        plVar9 = plVar7 + 4;
        plVar10 = (longlong *)plVar7[4];
        goto LAB_140f7e933;
      }
      plVar7[4] = (longlong)plVar7;
    }
LAB_140f7e6c1:
    LOCK();
    plVar9 = plVar7 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
    *param_2 = (longlong)plVar1;
    param_2[1] = (longlong)plVar7;
  }
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
LAB_140f7e6e0:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140f7e99d FUN_140f7e99d body=421 status=ok
// SIG undefined FUN_140f7e99d(void)

ulonglong FUN_140f7e99d(longlong *param_1,undefined8 param_2,float param_3)

{
  bool bVar1;
  uint uVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_108 [40];
  undefined1 local_e0 [128];
  undefined1 *local_60;
  int local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_3 < 0.0) {
    uVar2 = rand();
    param_3 = (float)(uVar2 & 0x7fff) / 32767.0;
  }
  local_60 = (undefined1 *)0x0;
  local_54 = 0x20;
  local_58 = (int)param_1[1];
  uVar4 = (ulonglong)local_58;
  if (0x20 < uVar4) {
    FUN_140fb08bc(local_e0);
  }
  puVar3 = local_60;
  if (local_60 == (undefined1 *)0x0) {
    puVar3 = local_e0;
  }
  memset(puVar3,0,uVar4 << 2);
  if ((int)param_1[1] < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    fVar10 = 0.0;
    lVar5 = 0;
    lVar7 = 0;
    do {
      uVar8 = FUN_140f7eb44(*param_1 + lVar5,param_2);
      puVar3 = local_60;
      if (local_60 == (undefined1 *)0x0) {
        puVar3 = local_e0;
      }
      *(undefined4 *)(puVar3 + lVar7 * 4) = uVar8;
      puVar3 = local_60;
      if (local_60 == (undefined1 *)0x0) {
        puVar3 = local_e0;
      }
      fVar10 = fVar10 + *(float *)(puVar3 + lVar7 * 4);
      lVar7 = lVar7 + 1;
      uVar2 = *(uint *)(param_1 + 1);
      lVar5 = lVar5 + 400;
    } while (lVar7 < (int)uVar2);
    uVar4 = 0xffffffff;
    if (0 < (int)uVar2) {
      fVar9 = 0.0;
      uVar6 = 0;
      do {
        bVar1 = fVar9 <= param_3 * fVar10;
        fVar9 = fVar9 + *(float *)(puVar3 + uVar6 * 4);
        if ((bVar1) && (param_3 * fVar10 <= fVar9)) {
          uVar4 = uVar6 & 0xffffffff;
          break;
        }
        uVar6 = uVar6 + 1;
      } while (uVar2 != uVar6);
    }
  }
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 140f7eb44 FUN_140f7eb44 body=419 status=ok
// SIG undefined FUN_140f7eb44(void)

undefined4 FUN_140f7eb44(undefined8 param_1)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined1 auStack_d8 [40];
  char local_b0 [16];
  longlong *local_a0;
  undefined4 local_88 [2];
  undefined4 local_80;
  undefined4 uStack_7c;
  ushort local_68;
  byte local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b0[0] = '\0';
  local_88[0] = 0;
  FUN_1456bb102(local_b0);
  puVar4 = &local_80;
  FUN_1447c3578(param_1,puVar4,local_b0);
  if (local_60 == 3) {
    uVar3 = 3;
    uVar6 = local_80;
  }
  else {
    puVar5 = &local_58;
    FUN_1400b56fe(puVar5,&local_80,3);
    uVar6 = 0;
    if (local_38 != 0) {
      uVar6 = local_58;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_40) {
        puVar5 = (undefined4 *)CONCAT44(uStack_54,local_58);
      }
      (*pcVar2)(puVar5);
    }
    if (0x18 < local_40) {
      FUN_1400020a8(CONCAT44(uStack_54,local_58));
    }
    uVar3 = (uint)local_60;
  }
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar3 * 0x120));
  if (pcVar2 != (code *)0x0) {
    if (0x18 < local_68) {
      puVar4 = (undefined4 *)CONCAT44(uStack_7c,local_80);
    }
    (*pcVar2)(puVar4);
  }
  if (0x18 < local_68) {
    FUN_1400020a8(CONCAT44(uStack_7c,local_80));
  }
  FUN_1448173f8(local_88);
  if ((local_b0[0] == '\x03') && (local_a0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_a0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_a0 + 0x10))();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f7ece8 FUN_140f7ece8 body=106 status=ok
// SIG undefined FUN_140f7ece8(void)

undefined4 * FUN_140f7ece8(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  byte bVar2;
  
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = *param_2;
  lVar1 = *(longlong *)(param_2 + 2);
  *(longlong *)(param_1 + 2) = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar2 = DAT_14c950c29;
  lVar1 = *(longlong *)(param_2 + 4);
  *(longlong *)(param_1 + 4) = lVar1;
  if ((lVar1 != 0 & bVar2) == 1) {
    FUN_1456cec3c();
  }
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  return param_1;
}



// FUNCTION 140f7ed52 FUN_140f7ed52 body=317 status=ok
// SIG undefined FUN_140f7ed52(void)

longlong * FUN_140f7ed52(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)FUN_14001cc68(200);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b419410;
  memset(plVar3 + 3,0,0x98);
  *(undefined4 *)(plVar3 + 7) = 2;
  *(undefined8 *)((longlong)plVar3 + 0x3c) = 0;
  *(undefined8 *)((longlong)plVar3 + 0x44) = 0;
  *(undefined8 *)((longlong)plVar3 + 0x4c) = 0x200000000;
  *(undefined8 *)((longlong)plVar3 + 0x54) = 0;
  *(undefined8 *)((longlong)plVar3 + 0x5c) = 0;
  *(undefined8 *)((longlong)plVar3 + 100) = 0;
  *(undefined8 *)((longlong)plVar3 + 0x6c) = 0;
  *(undefined8 *)((longlong)plVar3 + 0x74) = 0;
  *(undefined8 *)((longlong)plVar3 + 0x7c) = 0;
  *(undefined4 *)((longlong)plVar3 + 0x84) = 0;
  plVar3[2] = (longlong)&PTR_FUN_14b348f40;
  *(undefined1 *)((longlong)plVar3 + 0x89) = 0;
  *(undefined4 *)(plVar3 + 0x12) = 0;
  plVar3[0x13] = 0;
  plVar3[0x14] = 0;
  *(undefined4 *)(plVar3 + 0x15) = 0;
  plVar3[0x16] = 0;
  plVar3[0x17] = 0;
  plVar3[0x18] = 0;
  local_40 = plVar3 + 2;
  local_38 = plVar3;
  FUN_140f7ee90(&local_40,plVar3 + 2);
  plVar3 = local_38;
  *param_2 = (longlong)local_40;
  param_2[1] = (longlong)local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f7ee90 FUN_140f7ee90 body=157 status=ok
// SIG undefined FUN_140f7ee90(void)

void FUN_140f7ee90(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_140f7eeca;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_140f7eeca;
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
LAB_140f7eeca:
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
                    /* WARNING: Could not recover jumptable at 0x000140f7ef29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 140f7ef2e FUN_140f7ef2e body=313 status=ok
// SIG undefined FUN_140f7ef2e(void)

undefined8 FUN_140f7ef2e(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_140f7f061;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140f7f061;
    }
    FUN_140192332(param_1 + 0x18,&local_48,0);
  }
  else {
LAB_140f7f061:
    local_48 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140f7f005;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3);
      uVar6 = 1;
      goto LAB_140f7f005;
    }
  }
  uVar6 = 0;
LAB_140f7f005:
  if ((local_48 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_48);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f7f092 FUN_140f7f092 body=57 status=ok
// SIG undefined FUN_140f7f092(void)

void FUN_140f7f092(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5daf8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5daf8 = FUN_140002ddd(FUN_1464dd9af,uVar1,L"GbxEffectRelevanceDef");
  }
  return;
}



// FUNCTION 140f7f0d2 FUN_140f7f0d2 body=57 status=ok
// SIG undefined FUN_140f7f0d2(void)

void FUN_140f7f0d2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbad5c8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbad5c8 = FUN_140002ddd(FUN_1465e687c,uVar1,L"OakPlayerAudioProvider");
  }
  return;
}



// FUNCTION 140f7f11a FUN_140f7f11a body=40 status=ok
// SIG undefined FUN_140f7f11a(void)

undefined8 FUN_140f7f11a(undefined8 param_1,int param_2)

{
  FUN_140b605dc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140f7f142 FUN_140f7f142 body=124 status=ok
// SIG undefined FUN_140f7f142(void)

undefined8 FUN_140f7f142(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  if (((*(longlong *)(param_1 + 0xe8) == 0) ||
      (plVar3 = *(longlong **)(param_1 + 0xf0), plVar3 == (longlong *)0x0)) || ((int)plVar3[1] < 1))
  {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        uVar6 = FUN_140d80c3e(0);
        return uVar6;
      }
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
    uVar6 = FUN_140d80c3e(*(undefined8 *)(param_1 + 0xe8));
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
  return uVar6;
}



// FUNCTION 140f7f1be FUN_140f7f1be body=170 status=ok
// SIG undefined FUN_140f7f1be(void)

longlong * FUN_140f7f1be(longlong param_1)

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
    lVar5 = FUN_140f7f268();
    if ((lVar5 != 0) && (*(int *)(lVar5 + 0x38) <= *(int *)(lVar4 + 0x38))) {
      plVar6 = (longlong *)0x0;
      if (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
          lVar5 + 0x30) {
        plVar6 = plVar2;
      }
      goto LAB_140f7f21c;
    }
  }
  plVar6 = (longlong *)0x0;
LAB_140f7f21c:
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



// FUNCTION 140f7f268 FUN_140f7f268 body=57 status=ok
// SIG undefined FUN_140f7f268(void)

void FUN_140f7f268(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c350 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c350 = FUN_140002ddd(FUN_146530e5b,uVar1,L"MissionGiverType_Basic");
  }
  return;
}



// FUNCTION 140f7f2a2 FUN_140f7f2a2 body=617 status=ok
// SIG undefined FUN_140f7f2a2(void)

void FUN_140f7f2a2(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_1468d96f0;
      local_50 = 0;
      local_58 = 0x4008001;
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
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_30);
            goto LAB_140f7f38d;
          }
        }
        puVar6 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar6 != &local_30) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_30,puVar6,(int)plVar1[6]);
          }
          else {
            memcpy(&local_30,puVar6,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar1[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_30,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_30,lVar2);
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
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
LAB_140f7f38d:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140f7f50c(param_1,local_30);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f7f50c FUN_140f7f50c body=55 status=ok
// SIG undefined FUN_140f7f50c(void)

void FUN_140f7f50c(longlong param_1)

{
  if ((*(byte *)(param_1 + 0xb8) & 0x10) == 0) {
    *(byte *)(param_1 + 0xb8) = *(byte *)(param_1 + 0xb8) | 0x10;
    FUN_140980406(*(undefined8 *)(param_1 + 0x30),DAT_14cbe79f0,0,0,1);
  }
  return;
}



// FUNCTION 140f7f544 FUN_140f7f544 body=40 status=ok
// SIG undefined FUN_140f7f544(void)

undefined8 FUN_140f7f544(undefined8 param_1,int param_2)

{
  FUN_140f7f56c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140f7f56c FUN_140f7f56c body=667 status=ok
// SIG undefined FUN_140f7f56c(void)

void FUN_140f7f56c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  *param_1 = &PTR_FUN_14b4a6720;
  lVar6 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 0x74) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)((longlong)param_1 + 0x74) + -1;
      lVar5 = (longlong)iVar7 * 0x88;
      lVar3 = DAT_14c9a3d60 + lVar5;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar5),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar5));
      if (*(longlong *)(lVar6 + 0x70 + lVar5) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar3 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar7,1);
    }
    *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  }
  lVar6 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0xd) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)(param_1 + 0xd) + -1;
      lVar5 = (longlong)iVar7 * 0x88;
      lVar3 = DAT_14c9a3d60 + lVar5;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar5),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar5));
      if (*(longlong *)(lVar6 + 0x70 + lVar5) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar3 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar7,1);
    }
    *(undefined4 *)(param_1 + 0xd) = 0;
  }
  lVar6 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 0x5c) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)((longlong)param_1 + 0x5c) + -1;
      lVar5 = (longlong)iVar7 * 0x88;
      lVar3 = DAT_14c9a3d60 + lVar5;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar5),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar5));
      if (*(longlong *)(lVar6 + 0x70 + lVar5) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar3 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar7,1);
    }
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  }
  lVar6 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 10) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)(param_1 + 10) + -1;
      lVar5 = (longlong)iVar7 * 0x88;
      lVar3 = DAT_14c9a3d60 + lVar5;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar5),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar5));
      if (*(longlong *)(lVar6 + 0x70 + lVar5) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar3 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar7,1);
    }
    *(undefined4 *)(param_1 + 10) = 0;
  }
  plVar4 = (longlong *)param_1[9];
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
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 140f7f83a FUN_140f7f83a body=800 status=ok
// SIG undefined FUN_140f7f83a(void)

void FUN_140f7f83a(longlong *param_1,char param_2)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  byte bVar8;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined1 local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *(undefined4 *)(param_1 + 0x846) = 0xbf800000;
  if ((param_1[0x841] != 0) && (param_1[0x842] != 0)) {
    if (param_2 != '\0') {
      cVar3 = FUN_1404fa388(param_1 + 0x84d);
      if (cVar3 == '\0') {
        lVar5 = FUN_1404fa18c(param_1);
        local_60 = *(undefined8 *)(lVar5 + 0x28);
        local_58 = *(undefined4 *)(lVar5 + 0x30);
        local_50 = *(undefined8 *)(lVar5 + 0x38);
        uVar6 = FUN_14477b664(*(undefined8 *)(lVar5 + 0x40));
        local_48 = FUN_14477b664(uVar6);
        local_40 = *(undefined8 *)(lVar5 + 0x48);
        local_38 = *(longlong *)(lVar5 + 0x50);
        if ((local_38 != 0) && ((DAT_14cb26569 & 1) != 0)) {
          FUN_14036e5a4(*(undefined8 *)(local_38 + 0x50));
        }
        local_b8 = 0;
        FUN_140f7fb5b(&local_a8,param_1[0x841],&local_60,0);
        if (param_1 + 0x84d != &local_a8) {
          param_1[0x84d] = local_a8;
          local_a8 = 0;
          plVar2 = (longlong *)param_1[0x84e];
          param_1[0x84e] = (longlong)local_a0;
          local_a0 = (longlong *)0x0;
          if (plVar2 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar2 + 0x10))();
            }
          }
        }
        *(undefined4 *)(param_1 + 0x84f) = (undefined4)local_98;
        *(undefined4 *)((longlong)param_1 + 0x427c) = local_98._4_4_;
        *(undefined4 *)(param_1 + 0x850) = (undefined4)uStack_90;
        *(undefined4 *)((longlong)param_1 + 0x4284) = uStack_90._4_4_;
        if (local_a0 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)local_a0 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_a0 + 0x10))();
          }
        }
      }
    }
    cVar3 = FUN_1404fa388(param_1 + 0x84d);
    if (cVar3 != '\0') {
      FUN_1404f9e58(param_1);
      if (param_2 == '\0') {
        lVar5 = FUN_1404fa18c(param_1);
        local_70 = *(undefined8 *)(param_1[0x841] + 0x35d0);
        local_68 = *(longlong *)(param_1[0x841] + 0x35d8);
        if (local_68 != 0) {
          LOCK();
          *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
          UNLOCK();
        }
        uVar6 = FUN_140206ee8(lVar5 + 0x58,&local_70);
        FUN_140bd765a(param_1 + 0x84d,uVar6,0);
      }
    }
    if ((longlong *)param_1[0x841] != (longlong *)0x0) {
      cVar3 = (**(code **)(*(longlong *)param_1[0x841] + 0x700))();
      if (cVar3 != '\0') {
        lVar5 = (**(code **)(*param_1 + 0xf00))(param_1);
        plVar2 = local_a0;
        if (lVar5 != 0) {
          local_a0 = (longlong *)CONCAT71(local_a0._1_7_,0xce);
          uVar6 = local_a0;
          local_a0._1_1_ = SUB81(plVar2,1);
          bVar8 = local_a0._1_1_ & 0xe1;
          local_98 = &DAT_4030000000000000;
          uStack_90 = 0x4022000000000000;
          local_88 = 0x42c80000;
          local_84 = 4;
          local_80 = 0;
          uStack_78 = 0;
          local_a0 = (longlong *)uVar6;
          cVar3 = FUN_140691b73();
          cVar4 = FUN_140691bc1();
          local_a0._0_2_ = CONCAT11(cVar4 << 3 | cVar3 << 2 | bVar8,(undefined1)local_a0);
          lVar7 = FUN_1404fa18c(param_1);
          lVar7 = FUN_1402d1dc0(lVar7 + 0xd0);
          if ((lVar7 == 0) || (DAT_14c950c29 == '\0')) {
            local_a8 = lVar7;
            if (lVar7 == 0) goto LAB_140f7fa16;
          }
          else {
            FUN_1456cec3c(lVar7);
          }
          if (param_2 == '\0') {
            local_a8 = lVar7;
            FUN_14107e4c6(lVar5,lVar7,0,0);
          }
          else {
            local_a8 = lVar7;
            lVar7 = FUN_1404fa18c(param_1);
            FUN_140e99050(lVar5,&local_a8,lVar7 + 0xf8);
          }
        }
      }
    }
  }
LAB_140f7fa16:
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f7fb5b FUN_140f7fb5b body=591 status=ok
// SIG undefined FUN_140f7fb5b(void)

undefined8 *
FUN_140f7fb5b(undefined8 *param_1,longlong param_2,longlong param_3,undefined8 param_4,
             longlong param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong *local_70;
  __uint64 *local_68;
  longlong local_60;
  __uint64 *local_58;
  longlong local_50;
  longlong *local_48;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 != 0) {
    FUN_14026e798(&local_40);
    if (local_40 != 0) {
      local_50 = local_40;
      local_48 = local_38;
      if (local_38 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_38 + 1) = (int)local_38[1] + 1;
        UNLOCK();
      }
      lVar3 = FUN_140206ee8(param_3,&local_50);
      if (lVar3 != 0) {
        FUN_1403c747e(local_40,&local_58,param_4);
        if (local_58 != (__uint64 *)0x0) {
          if (((param_5 != 0) && (*local_58 != 0xffffffffffffffff)) && (DAT_14cb25ab0 == '\x01')) {
            AK::SoundEngine::SetSwitch
                      (*(uint *)(param_5 + 0x48),*(uint *)(param_5 + 0x38),*local_58);
          }
          local_60 = lVar3;
          FUN_140942716(&local_60);
          local_68 = local_58;
          if (local_58 != (__uint64 *)0x0) {
            *(int *)(local_58 + 0x21) = (int)local_58[0x21] + 1;
          }
          local_78 = local_40;
          local_70 = local_38;
          if (local_38 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_38 + 1) = (int)local_38[1] + 1;
            UNLOCK();
          }
          FUN_140c72376(param_1,&local_78,&local_68,local_60);
          if ((local_60 != 0) && ((DAT_14cb26569 & 1) != 0)) {
            FUN_1400848c0(*(undefined8 *)(local_60 + 0x50));
          }
          if ((local_58 != (__uint64 *)0x0) &&
             (*(int *)(local_58 + 0x21) = (int)local_58[0x21] + -1, (int)local_58[0x26] < 1)) {
            FUN_1400847bc(local_58 + 0x17,0);
            if ((int)local_58[0x21] == 0) {
              FUN_140087e46(local_58);
              if (*local_58 != 0xffffffffffffffff) {
                if (DAT_14cb259f8 == 0) goto LAB_140f7fcc3;
                FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),local_58);
              }
              if (DAT_14cb259f8 != 0) {
                FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),local_58);
              }
            }
          }
LAB_140f7fcc3:
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
          goto LAB_140f7fd1d;
        }
      }
    }
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
  }
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
LAB_140f7fd1d:
  if ((*(longlong *)(param_3 + 0x28) != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(*(longlong *)(param_3 + 0x28) + 0x50));
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f7fdac FUN_140f7fdac body=310 status=ok
// SIG undefined FUN_140f7fdac(void)

longlong FUN_140f7fdac(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
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
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x4208) + 0x3c0);
  if (lVar1 != 0) {
    if (DAT_14cb61cd0 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141030f22;
      local_20 = FUN_14081d0ea;
      local_28 = &LAB_1463b31ae;
      local_38 = &LAB_1486dca4f;
      local_40 = &LAB_1464f50a6;
      local_48 = &DAT_149e063b2;
      local_50 = 0;
      local_58 = 0x10000004;
      local_60 = 8;
      local_68 = 0xd70;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,FUN_1464f5084);
    }
    if ((*(int *)(DAT_14cb61cd0 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb61cd0 + 0x38) * 8) == DAT_14cb61cd0 + 0x30)) {
      lVar2 = *(longlong *)(lVar1 + 0xa70) + 0x110;
      if (*(longlong *)(lVar1 + 0xa70) == 0) {
        lVar2 = 0;
      }
      goto LAB_140f7fe1e;
    }
  }
  lVar2 = 0;
LAB_140f7fe1e:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f7fee4 FUN_140f7fee4 body=560 status=ok
// SIG undefined FUN_140f7fee4(void)

undefined8 * FUN_140f7fee4(undefined8 *param_1)

{
  undefined8 **ppuVar1;
  undefined8 **ppuVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140066fe0();
  *param_1 = &PTR_FUN_14b4559e0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  lVar8 = param_1[3];
  lVar7 = 0;
  if (lVar8 != 0) {
    lVar7 = *(longlong *)(lVar8 + 8);
    lVar5 = FUN_1446ebfd4();
    if (*(ulonglong *)(lVar5 + 8) == 0) {
      bVar9 = lVar7 != 0;
      if (lVar7 != lVar5 && bVar9) {
        do {
          lVar7 = *(longlong *)(lVar7 + 0x30);
          bVar9 = lVar7 != 0;
          if (lVar7 == lVar5) break;
        } while (lVar7 != 0);
      }
    }
    else {
      bVar9 = (*(ulonglong *)(lVar7 + 0x18) & *(ulonglong *)(lVar5 + 8)) != 0;
    }
    lVar7 = 0;
    if (bVar9) {
      lVar7 = lVar8;
    }
  }
  ppuVar1 = (undefined8 **)(param_1 + 6);
  ppuVar2 = (undefined8 **)(param_1 + 7);
  uVar3 = *(undefined8 *)(lVar7 + 0x70);
  lVar8 = 0;
  do {
    cVar4 = (**(code **)((longlong)&PTR_FUN_14b454510 + lVar8))(uVar3,0);
    if (cVar4 != '\0') {
      if (lVar8 != -0x14b454510) {
        (**(code **)((longlong)&PTR_FUN_14b454518 + lVar8))(&local_48,*(undefined8 *)(lVar7 + 0x70))
        ;
        puVar6 = local_48;
        if (ppuVar1 == &local_48) goto LAB_140f800a2;
        puVar6 = *ppuVar1;
        *ppuVar1 = local_48;
        local_48 = (undefined8 *)0x0;
        if (puVar6 == (undefined8 *)0x0) goto LAB_140f7ffef;
        (**(code **)*puVar6)(puVar6,1);
        puVar6 = local_48;
        goto LAB_140f800a2;
      }
      break;
    }
    lVar8 = lVar8 + 0x10;
  } while (lVar8 != 0x130);
  puVar6 = *ppuVar1;
  *ppuVar1 = (undefined8 *)0x0;
LAB_140f800a2:
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)(puVar6,1);
  }
LAB_140f7ffef:
  uVar3 = *(undefined8 *)(lVar7 + 0x78);
  lVar8 = 0;
  do {
    cVar4 = (**(code **)((longlong)&PTR_FUN_14b454510 + lVar8))(uVar3,0);
    if (cVar4 != '\0') {
      if (lVar8 != -0x14b454510) {
        (**(code **)((longlong)&PTR_FUN_14b454518 + lVar8))(&local_48,*(undefined8 *)(lVar7 + 0x78))
        ;
        puVar6 = local_48;
        if (ppuVar2 == &local_48) goto LAB_140f80085;
        puVar6 = *ppuVar2;
        *ppuVar2 = local_48;
        local_48 = (undefined8 *)0x0;
        if (puVar6 == (undefined8 *)0x0) goto LAB_140f80051;
        (**(code **)*puVar6)(puVar6,1);
        puVar6 = local_48;
        goto LAB_140f80085;
      }
      break;
    }
    lVar8 = lVar8 + 0x10;
  } while (lVar8 != 0x130);
  puVar6 = *ppuVar2;
  *ppuVar2 = (undefined8 *)0x0;
LAB_140f80085:
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)(puVar6,1);
  }
LAB_140f80051:
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140f80115 FUN_140f80115 body=250 status=ok
// SIG undefined FUN_140f80115(void)

bool FUN_140f80115(longlong param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  bool bVar3;
  
  puVar2 = *(undefined **)(param_1 + 8);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c963e88) && (FUN_144b3d300(&DAT_14c963e88), DAT_14c963e88 == -1)) {
    uVar1 = FUN_1446ddbd2();
    FUN_14000176a(&DAT_14c963e38,L"FStrProperty",0x4000,0,0xc001,0,uVar1,FUN_140dafe7a);
    atexit(FUN_142829758);
    _Init_thread_footer(&DAT_14c963e88);
  }
  if (DAT_14c963e40 == 0) {
    bVar3 = puVar2 != (undefined *)0x0;
    if (puVar2 != &DAT_14c963e38 && bVar3) {
      do {
        puVar2 = *(undefined **)(puVar2 + 0x30);
        bVar3 = puVar2 != (undefined *)0x0;
        if (puVar2 == &DAT_14c963e38) {
          return bVar3;
        }
      } while (puVar2 != (undefined *)0x0);
    }
  }
  else {
    bVar3 = (*(ulonglong *)(puVar2 + 0x18) & DAT_14c963e40) != 0;
  }
  return bVar3;
}



// FUNCTION 140f8020f FUN_140f8020f body=257 status=ok
// SIG undefined FUN_140f8020f(void)

bool FUN_140f8020f(longlong param_1)

{
  undefined *puVar1;
  bool bVar2;
  
  puVar1 = *(undefined **)(param_1 + 8);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c952370) && (FUN_144b3d300(&DAT_14c952370), DAT_14c952370 == -1)) {
    FUN_14475b26a();
    FUN_14000176a(&DAT_14c952320,L"FUInt64Property",0x200,0,0x1008201,0,&DAT_14c9520b8,FUN_1468e12e4
                 );
    atexit(FUN_142817061);
    _Init_thread_footer(&DAT_14c952370);
  }
  if (DAT_14c952328 == 0) {
    bVar2 = puVar1 != (undefined *)0x0;
    if (puVar1 != &DAT_14c952320 && bVar2) {
      do {
        puVar1 = *(undefined **)(puVar1 + 0x30);
        bVar2 = puVar1 != (undefined *)0x0;
        if (puVar1 == &DAT_14c952320) {
          return bVar2;
        }
      } while (puVar1 != (undefined *)0x0);
    }
  }
  else {
    bVar2 = (*(ulonglong *)(puVar1 + 0x18) & DAT_14c952328) != 0;
  }
  return bVar2;
}



// FUNCTION 140f80310 FUN_140f80310 body=257 status=ok
// SIG undefined FUN_140f80310(void)

bool FUN_140f80310(longlong param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  bool bVar3;
  
  puVar2 = *(undefined **)(param_1 + 8);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9496d8) && (FUN_144b3d300(&DAT_14c9496d8), DAT_14c9496d8 == -1)) {
    uVar1 = FUN_1446ddbd2();
    FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0,0x1000000008001,0,uVar1,
                  FUN_140a4831c);
    atexit(FUN_1427e14fe);
    _Init_thread_footer(&DAT_14c9496d8);
  }
  if (DAT_14c949690 == 0) {
    bVar3 = puVar2 != (undefined *)0x0;
    if (puVar2 != &DAT_14c949688 && bVar3) {
      do {
        puVar2 = *(undefined **)(puVar2 + 0x30);
        bVar3 = puVar2 != (undefined *)0x0;
        if (puVar2 == &DAT_14c949688) {
          return bVar3;
        }
      } while (puVar2 != (undefined *)0x0);
    }
  }
  else {
    bVar3 = (*(ulonglong *)(puVar2 + 0x18) & DAT_14c949690) != 0;
  }
  return bVar3;
}



// FUNCTION 140f80411 FUN_140f80411 body=281 status=ok
// SIG undefined FUN_140f80411(void)

bool FUN_140f80411(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  bool bVar4;
  
  if (param_1 == 0) {
LAB_140f80523:
    bVar4 = false;
  }
  else {
    puVar3 = *(undefined **)(param_1 + 8);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c952a58) {
      FUN_144b3d300(&DAT_14c952a58);
      if (DAT_14c952a58 == -1) {
        uVar2 = FUN_1446ddbd2();
        FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0,0x108001,0,uVar2,FUN_1403a682c);
        atexit(FUN_142818c9e);
        _Init_thread_footer(&DAT_14c952a58);
      }
    }
    if (DAT_14c952a10 == 0) {
      bVar4 = puVar3 != (undefined *)0x0;
      if (puVar3 != &DAT_14c952a08 && bVar4) {
        do {
          puVar3 = *(undefined **)(puVar3 + 0x30);
          bVar4 = puVar3 != (undefined *)0x0;
          if (puVar3 == &DAT_14c952a08) break;
        } while (puVar3 != (undefined *)0x0);
      }
      if (!bVar4) goto LAB_140f80523;
    }
    else if ((*(ulonglong *)(puVar3 + 0x18) & DAT_14c952a10) == 0) goto LAB_140f80523;
    lVar1 = FUN_140f8052a();
    bVar4 = *(longlong *)(param_1 + 0x70) == lVar1;
  }
  return bVar4;
}



// FUNCTION 140f8052a FUN_140f8052a body=164 status=ok
// SIG undefined FUN_140f8052a(void)

undefined8 FUN_140f8052a(void)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c949178) {
    FUN_144b3d300(&DAT_14c949178);
    if (DAT_14c949178 == -1) {
      FUN_1446f470e(&local_18,L"Color",1);
      DAT_14c949170 = FUN_141473ad5(local_18);
      _Init_thread_footer(&DAT_14c949178);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return DAT_14c949170;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f80628 FUN_140f80628 body=732 status=ok
// SIG undefined FUN_140f80628(void)

undefined8 FUN_140f80628(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  bool bVar6;
  char cVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_88 [36];
  uint local_64;
  longlong local_60;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((((*(int *)(param_1 + 0x4c) != 0) && (uVar2 = *(uint *)(param_1 + 0x48), -1 < (int)uVar2)) &&
      ((int)uVar2 < DAT_14c9647dc)) &&
     (((lVar10 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar10 != 0 &&
       (*(int *)(lVar10 + 0x10) == *(int *)(param_1 + 0x4c))) &&
      ((*(uint *)(lVar10 + 8) & 0x10200000) == 0)))) {
    plVar11 = *(longlong **)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))();
      }
    }
    local_58 = 0;
    iVar3 = *(int *)(param_1 + 0x70);
    uVar13 = *(undefined8 *)(param_1 + 0x68);
    local_50 = iVar3;
    if (iVar3 == 0) {
      local_4c = 0;
      uVar9 = 0;
    }
    else {
      FUN_140f8099e(&local_58,iVar3);
      FUN_140f80966(local_58,uVar13,iVar3);
      uVar9 = *(undefined4 *)(param_1 + 0x70);
      uVar13 = *(undefined8 *)(param_1 + 0x68);
    }
    FUN_140f80905(uVar13,uVar9);
    *(undefined4 *)(param_1 + 0x70) = 0;
    if (*(int *)(param_1 + 0x74) != 0) {
      FUN_140f80936(param_1 + 0x68);
    }
    if ((longlong)local_50 != 0) {
      local_60 = (longlong)local_50 * 0x38 + local_58;
      lVar10 = local_58;
      do {
        if ((*(int *)(param_1 + 0x4c) == 0) || (uVar2 = *(uint *)(param_1 + 0x48), (int)uVar2 < 0))
        {
LAB_140f80890:
          lVar15 = 0;
        }
        else {
          lVar15 = 0;
          if ((int)uVar2 < DAT_14c9647dc) {
            plVar11 = (longlong *)
                      ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
            if (((plVar11 == (longlong *)0x0) || ((int)plVar11[2] != *(int *)(param_1 + 0x4c))) ||
               ((*(uint *)(plVar11 + 1) & 0x10200000) != 0)) goto LAB_140f80890;
            lVar15 = *plVar11;
          }
        }
        uVar13 = *(undefined8 *)(lVar10 + 0x28);
        uVar4 = *(undefined8 *)(lVar10 + 0x30);
        uVar2 = *(uint *)(lVar15 + 0xc24);
        plVar11 = (longlong *)(ulonglong)uVar2;
        *(uint *)(lVar15 + 0xc24) = uVar2 + 1;
        uVar8 = (ulonglong)*(int *)(lVar15 + 0xc18);
        if ((longlong)uVar8 < 1) {
          *(uint *)(lVar15 + 0xc24) = uVar2;
        }
        else {
          local_64 = 0;
          do {
            lVar14 = uVar8 * 0x10 + -8;
            uVar12 = uVar8;
            while (((lVar5 = *(longlong *)(lVar15 + 0xc10), *(int *)(lVar5 + lVar14) != 0 &&
                    (plVar11 = *(longlong **)(lVar5 + -8 + lVar14), plVar11 != (longlong *)0x0)) &&
                   (cVar7 = (**(code **)(*plVar11 + 0x60))(plVar11,lVar10,uVar13,uVar4),
                   cVar7 != '\0'))) {
              lVar14 = lVar14 + -0x10;
              bVar6 = uVar12 < 2;
              uVar12 = uVar12 - 1;
              if (bVar6) {
                *(int *)(lVar15 + 0xc24) = *(int *)(lVar15 + 0xc24) + -1;
                if ((local_64 & 1) == 0) goto LAB_140f80830;
                goto LAB_140f808bc;
              }
            }
            uVar8 = uVar12 - 1;
            plVar11 = (longlong *)CONCAT71((int7)((ulonglong)plVar11 >> 8),1);
            local_64 = (uint)plVar11;
          } while (1 < uVar12);
          *(int *)(lVar15 + 0xc24) = *(int *)(lVar15 + 0xc24) + -1;
LAB_140f808bc:
          FUN_14474d06a((longlong *)(lVar15 + 0xc10),0);
        }
LAB_140f80830:
        lVar10 = lVar10 + 0x38;
      } while (lVar10 != local_60);
    }
    FUN_140f80905(local_58,local_50);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f80905 FUN_140f80905 body=49 status=ok
// SIG undefined FUN_140f80905(void)

void FUN_140f80905(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140f80936 FUN_140f80936 body=48 status=ok
// SIG undefined FUN_140f80936(void)

void FUN_140f80936(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x38,8);
  }
  return;
}



// FUNCTION 140f80966 FUN_140f80966 body=55 status=ok
// SIG undefined FUN_140f80966(void)

void FUN_140f80966(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  do {
    FUN_1447a97f4(param_1,param_2);
    uVar1 = *(undefined4 *)(param_2 + 0x2c);
    uVar2 = *(undefined4 *)(param_2 + 0x30);
    uVar3 = *(undefined4 *)(param_2 + 0x34);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    *(undefined4 *)(param_1 + 0x2c) = uVar1;
    *(undefined4 *)(param_1 + 0x30) = uVar2;
    *(undefined4 *)(param_1 + 0x34) = uVar3;
    param_1 = param_1 + 0x38;
    param_2 = param_2 + 0x38;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 140f8099e FUN_140f8099e body=319 status=ok
// SIG undefined FUN_140f8099e(void)

undefined8 FUN_140f8099e(longlong param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  ulonglong uVar5;
  undefined8 uVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  
  uVar5 = (longlong)param_2 * 0x38;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar1 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
      }
      else {
        if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
          uVar8 = 0x32;
          if (0x32 < bVar3) {
            uVar8 = (ulonglong)bVar3;
          }
          uVar10 = 0x32 - (ulonglong)bVar3;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar10 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar10 & 0xffffffff] & 0xf) == 0) goto LAB_140f80a00;
            lVar2 = uVar8 + 1 + uVar10;
            uVar10 = uVar10 - 1;
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
LAB_140f80a00:
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar5 >> 3;
  uVar6 = SUB168(auVar4 * ZEXT816(0x2492492492492493),0);
  iVar7 = SUB164(auVar4 * ZEXT816(0x2492492492492493),8);
  iVar9 = 0x7fffffff;
  if (param_2 <= iVar7) {
    iVar9 = iVar7;
  }
  if (iVar9 < 1) {
    iVar9 = 0;
  }
  else {
    uVar6 = FUN_1446f8d3c(param_1,0,iVar9,0x38,8);
  }
  *(int *)(param_1 + 0xc) = iVar9;
  return uVar6;
}



// FUNCTION 140f80add FUN_140f80add body=490 status=ok
// SIG undefined FUN_140f80add(void)

void FUN_140f80add(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14077009c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ab6f5f0;
  puVar1[6] = &PTR_FUN_14ab6f890;
  puVar1[0x17] = 0;
  *(undefined4 *)(puVar1 + 0x18) = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  *(undefined8 *)((longlong)puVar1 + 0xc4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0xcc) = 0;
  puVar1[0x1b] = 0;
  *(undefined4 *)(puVar1 + 0x1c) = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0x3f80000042340000;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  *(undefined1 *)(puVar1 + 0x22) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x114) = 3;
  *(undefined1 *)(puVar1 + 0x23) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x11c) = 0x3f3333333fa66666;
  *(undefined1 *)((longlong)puVar1 + 0x124) = 2;
  puVar1[0x25] = 0x3f00000042c80000;
  puVar1[0x26] = 0x42b4000043200000;
  *(undefined4 *)(puVar1 + 0x27) = 4;
  *(undefined8 *)((longlong)puVar1 + 0x13c) = 0x4234000042340000;
  *(undefined4 *)((longlong)puVar1 + 0x144) = 0x3e99999a;
  puVar1[0x29] = 0;
  *(undefined4 *)(puVar1 + 0x2a) = 0;
  *(undefined1 *)((longlong)puVar1 + 0x154) = 2;
  puVar1[0x2b] = &DAT_41200000;
  *(undefined2 *)(puVar1 + 0x2c) = 0x101;
  *(undefined1 *)((longlong)puVar1 + 0x162) = 1;
  *(undefined8 *)((longlong)puVar1 + 0x164) = 0x41f000003e4ccccd;
  *(undefined4 *)(puVar1 + 0x2e) = 0x3dcccccd;
  *(undefined4 *)((longlong)puVar1 + 0x174) = 0x3e4ccccd;
  *(undefined4 *)(puVar1 + 0x2f) = 0x3f800000;
  *(undefined4 *)((longlong)puVar1 + 0x17c) = 0x40800000;
  *(undefined4 *)(puVar1 + 0x30) = 0x3dcccccd;
  *(undefined1 *)((longlong)puVar1 + 0x184) = 0xf;
  *(undefined1 *)(puVar1 + 0x33) = 0;
  puVar1[0x31] = 0;
  puVar1[0x32] = 0;
  puVar1[0x34] = 0;
  puVar1[0x35] = 0;
  puVar1[0x36] = 0x3f4ccccd3f99999a;
  FUN_140f80cc8(puVar1 + 0x37);
  puVar1[0x80] = 0;
  *(undefined4 *)(puVar1 + 0x81) = 0;
  puVar1[0x78] = 0;
  puVar1[0x79] = 0;
  puVar1[0x7a] = 0;
  puVar1[0x7b] = 0;
  puVar1[0x7c] = 0;
  puVar1[0x7d] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x40c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x414) = 0;
  puVar1[0x84] = 0;
  *(undefined4 *)(puVar1 + 0x85) = 0;
  *(undefined1 *)(puVar1 + 0x86) = 0;
  return;
}



// FUNCTION 140f80cc8 FUN_140f80cc8 body=579 status=ok
// SIG undefined FUN_140f80cc8(void)

undefined2 * FUN_140f80cc8(undefined2 *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 1;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x22) = 0x80;
  *(undefined1 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x74) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined1 *)(param_1 + 0x7c) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10d) = 0;
  *(undefined8 *)(param_1 + 0x8c) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  memset(param_1 + 0x24,0,0x91);
  *(undefined8 *)(param_1 + 0xa2) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0xa6) = 0;
  *(undefined8 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xbc) = 2;
  *(undefined4 *)(param_1 + 0x20) = 0;
  plVar3 = (longlong *)FUN_14001cc68(0x38,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_149e05c70;
  lpCriticalSection = (LPCRITICAL_SECTION)(plVar3 + 2);
  InitializeCriticalSection(lpCriticalSection);
  SetCriticalSectionSpinCount(lpCriticalSection,4000);
  *(LPCRITICAL_SECTION *)(param_1 + 0xc0) = lpCriticalSection;
  *(longlong **)(param_1 + 0xc4) = plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
  *(undefined8 *)(param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xcc) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd4) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xdc) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xf2) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0xf6) = 0;
  *(undefined8 *)(param_1 + 0xfc) = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  FUN_140f80f0c(param_1 + 200,3);
  FUN_1446f470e(&local_48,L"Root",1);
  **(undefined8 **)(param_1 + 200) = local_48;
  FUN_1446f470e(&local_48,L"L_Foot",1);
  *(undefined8 *)(*(longlong *)(param_1 + 200) + 0x10) = local_48;
  FUN_1446f470e(&local_48,L"R_Foot",1);
  *(undefined8 *)(*(longlong *)(param_1 + 200) + 0x20) = local_48;
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f80f0c FUN_140f80f0c body=68 status=ok
// SIG undefined FUN_140f80f0c(void)

int FUN_140f80f0c(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_140f80f72(param_1,iVar1);
  }
  FUN_140f80f50((longlong)iVar1 * 0x10 + *param_1,param_2);
  return iVar1;
}



// FUNCTION 140f80f50 FUN_140f80f50 body=34 status=ok
// SIG undefined FUN_140f80f50(void)

void FUN_140f80f50(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1[1] = 0xffffffff7fffffff;
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 140f80f72 FUN_140f80f72 body=269 status=ok
// SIG undefined FUN_140f80f72(void)

void FUN_140f80f72(longlong param_1,int param_2)

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
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140f81080 FUN_140f81080 body=107 status=ok
// SIG undefined FUN_140f81080(void)

void FUN_140f81080(longlong param_1,uint param_2)

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
LAB_140f810cf:
      FUN_1403c621e(param_1,param_2);
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_1478de2b4(param_1);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x48) != iVar3) goto LAB_140f810cf;
  FUN_140f810ec(param_1);
  FUN_1403c621e(param_1,param_2);
  return;
}



// FUNCTION 140f810ec FUN_140f810ec body=335 status=ok
// SIG undefined FUN_140f810ec(void)

void FUN_140f810ec(longlong *param_1)

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



// FUNCTION 140f8123c FUN_140f8123c body=608 status=ok
// SIG undefined FUN_140f8123c(void)

longlong FUN_140f8123c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  code *local_70;
  undefined1 *local_68;
  code **local_60;
  undefined1 *local_58;
  code *local_50;
  code *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  bVar3 = true;
  if (param_2 == 0) {
    param_2 = 0;
    lVar5 = 0;
  }
  else {
    if (DAT_14caec470 == 0) {
      local_60 = &local_40;
      local_40 = FUN_1417df956;
      local_50 = FUN_14081d0ea;
      local_58 = &LAB_1463eaa20;
      local_68 = &LAB_147bbd9ea;
      local_70 = FUN_1401cf6d7;
      local_78 = L"Engine";
      local_80 = 0;
      local_88 = 0x10000000;
      local_90 = 8;
      local_98 = 0x330;
      FUN_14081cfa3(L"/Script/Engine",L"MaterialInstanceDynamic",&DAT_14caec470,FUN_1463eb22e);
    }
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(DAT_14caec470 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14caec470 + 0x38) * 8) != DAT_14caec470 + 0x30)) {
      lVar5 = param_2;
      param_2 = 0;
    }
    else {
      lVar5 = *(longlong *)(param_2 + 0x110);
      bVar3 = false;
    }
  }
  plVar1 = (longlong *)(param_1 + 0x6c0);
  if (*(uint *)(param_1 + 0x6d0) < *(uint *)(param_1 + 0x6c8)) {
    lVar4 = *(longlong *)(*plVar1 + (longlong)(int)*(uint *)(param_1 + 0x6d0) * 8);
    if (*(longlong *)(lVar4 + 0x110) != lVar5) {
      lVar4 = FUN_14090ceee(lVar5,0,0);
      iVar2 = *(int *)(param_1 + 0x6d0);
      lVar5 = *(longlong *)(param_1 + 0x6c0);
      if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar4);
      }
      *(longlong *)(lVar5 + (longlong)iVar2 * 8) = lVar4;
    }
    FUN_1406a5d86(lVar4,3);
  }
  else {
    lVar4 = FUN_14090ceee(lVar5,0,0);
    if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar4);
    }
    iVar2 = *(int *)(param_1 + 0x6c8);
    *(uint *)(param_1 + 0x6c8) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x6cc) < iVar2 + 1U) {
      FUN_1457d5db8(plVar1,iVar2);
    }
    *(longlong *)(*plVar1 + (longlong)iVar2 * 8) = lVar4;
    if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar4);
    }
  }
  if (!bVar3) {
    FUN_140f8149e(lVar4,param_2);
  }
  *(int *)(param_1 + 0x6d0) = *(int *)(param_1 + 0x6d0) + 1;
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f8149e FUN_140f8149e body=660 status=ok
// SIG undefined FUN_140f8149e(void)

void FUN_140f8149e(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  undefined1 auStack_128 [32];
  ulonglong *local_108;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  ulonglong local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  ulonglong local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (param_2 != 0) {
    iVar2 = *(int *)(param_2 + 0x188);
    if ((longlong)iVar2 != 0) {
      lVar3 = *(longlong *)(param_2 + 0x180);
      lVar4 = 0;
      do {
        local_78 = *(ulonglong *)(lVar3 + lVar4);
        uStack_70 = CONCAT31(uStack_70._1_3_,2);
        uStack_6c = 0xffffffff;
        local_d8 = local_d8 & 0xffffffffffffff00;
        local_90 = 0;
        uStack_88 = 0;
        local_a0 = 0;
        uStack_98 = 0;
        local_b0 = 0;
        uStack_a8 = 0;
        uStack_c0 = 0;
        uStack_b8 = 0;
        uStack_d0 = 0;
        uStack_c8 = 0;
        local_108 = &local_d8;
        FUN_140042bb4(param_1,&local_78,*(undefined4 *)(lVar3 + 0x10 + lVar4),0);
        lVar4 = lVar4 + 0x24;
      } while ((longlong)iVar2 * 0x24 != lVar4);
    }
    if ((longlong)*(int *)(param_2 + 0x198) != 0) {
      puVar6 = *(ulonglong **)(param_2 + 400);
      puVar5 = puVar6 + (longlong)*(int *)(param_2 + 0x198) * 6;
      do {
        local_d8 = *puVar6;
        uStack_d0 = CONCAT71(uStack_d0._1_7_,2);
        uStack_d0 = CONCAT44(0xffffffff,(undefined4)uStack_d0);
        local_78 = puVar6[2];
        uStack_70 = (undefined4)puVar6[3];
        uStack_6c = *(undefined4 *)((longlong)puVar6 + 0x1c);
        FUN_14016d7a8(param_1,&local_d8,&local_78);
        puVar6 = puVar6 + 6;
      } while (puVar6 != puVar5);
    }
    iVar2 = *(int *)(param_2 + 0x1a8);
    if ((longlong)iVar2 != 0) {
      lVar3 = *(longlong *)(param_2 + 0x1a0);
      lVar4 = 0;
      do {
        puVar6 = (ulonglong *)(lVar3 + 0x10 + lVar4);
        local_f8 = (undefined4)*puVar6;
        uStack_f4 = *(undefined4 *)((longlong)puVar6 + 4);
        local_d8 = *puVar6;
        uStack_f0 = (undefined4)puVar6[1];
        uStack_ec = *(undefined4 *)((longlong)puVar6 + 0xc);
        uStack_d0 = puVar6[1];
        puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar4);
        local_e8 = *(undefined4 *)puVar1;
        uStack_e4 = *(undefined4 *)((longlong)puVar1 + 4);
        uStack_c8 = *puVar1;
        uStack_e0 = *(undefined4 *)(puVar1 + 1);
        uStack_dc = *(undefined4 *)((longlong)puVar1 + 0xc);
        uStack_c0 = puVar1[1];
        local_78 = *(ulonglong *)(lVar3 + lVar4);
        uStack_70 = CONCAT31(uStack_70._1_3_,2);
        uStack_6c = 0xffffffff;
        FUN_14357152e(param_1,&local_78,&local_d8);
        lVar4 = lVar4 + 0x40;
      } while ((longlong)iVar2 * 0x40 != lVar4);
    }
    iVar2 = *(int *)(param_2 + 0x1b8);
    if ((longlong)iVar2 != 0) {
      lVar3 = *(longlong *)(param_2 + 0x1b0);
      lVar4 = 0;
      do {
        FUN_14016d8b0(param_1,*(undefined8 *)(lVar3 + lVar4),*(undefined8 *)(lVar3 + 0x10 + lVar4));
        lVar4 = lVar4 + 0x28;
      } while ((longlong)iVar2 * 0x28 != lVar4);
    }
    iVar2 = *(int *)(param_2 + 0x1f8);
    if ((longlong)iVar2 != 0) {
      lVar3 = *(longlong *)(param_2 + 0x1f0);
      lVar4 = 0;
      do {
        local_d8 = *(ulonglong *)(lVar3 + lVar4);
        uStack_d0 = CONCAT71(uStack_d0._1_7_,2);
        uStack_d0 = CONCAT44(0xffffffff,(undefined4)uStack_d0);
        FUN_1415b0836(param_1,&local_d8,*(undefined8 *)(lVar3 + 0x10 + lVar4),
                      *(undefined4 *)(lVar3 + 0x18 + lVar4));
        lVar4 = lVar4 + 0x30;
      } while ((longlong)iVar2 * 0x30 != lVar4);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f81734 FUN_140f81734 body=162 status=ok
// SIG undefined FUN_140f81734(void)

undefined8 * FUN_140f81734(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a4d3f40;
  plVar3 = (longlong *)param_1[0x69];
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
  plVar3 = (longlong *)param_1[0x67];
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
  FUN_140f817d6(param_1 + 0x37);
  FUN_140f817d6(param_1 + 8);
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140f817d6 FUN_140f817d6 body=381 status=ok
// SIG undefined FUN_140f817d6(void)

void FUN_140f817d6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1409ca440(param_1 + 0x170);
  if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x28), lVar1 != 0)) {
    FUN_140457ffc(lVar1 + 0x658,param_1);
    FUN_140457ffc(lVar1 + 0x670,param_1);
    FUN_140457ffc(lVar1 + 0x688,param_1);
  }
  if (*(longlong *)(param_1 + 0x158) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x138) != 0) {
    FUN_1400020a8();
  }
  FUN_140f81954((longlong *)(param_1 + 0xf0));
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xe8) = 0;
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1400020a8();
  }
  FUN_140f819ac((longlong *)(param_1 + 0xa0));
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_14094e882(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_14094e8ba(param_1);
  return;
}



// FUNCTION 140f81954 FUN_140f81954 body=88 status=ok
// SIG undefined FUN_140f81954(void)

void FUN_140f81954(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140b7ce44(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 140f819ac FUN_140f819ac body=88 status=ok
// SIG undefined FUN_140f819ac(void)

void FUN_140f819ac(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14494313c(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 140f81a04 FUN_140f81a04 body=159 status=ok
// SIG undefined FUN_140f81a04(void)

void FUN_140f81a04(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14a4d8460;
  plVar3 = *(longlong **)(param_1 + 0xe0);
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
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  FUN_140f81aa4(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  FUN_140f81bbc(param_1 + 0x28);
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140f81a9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 140f81aa4 FUN_140f81aa4 body=118 status=ok
// SIG undefined FUN_140f81aa4(void)

void FUN_140f81aa4(longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_145acb176(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 2,0);
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140f81b1a FUN_140f81b1a body=161 status=ok
// SIG undefined FUN_140f81b1a(void)

void FUN_140f81b1a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14a4d83a0;
  plVar3 = *(longlong **)(param_1 + 0xe0);
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
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  FUN_140f81c32(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  FUN_140f81bbc(param_1 + 0x28);
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140f81bb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 140f81bbc FUN_140f81bbc body=118 status=ok
// SIG undefined FUN_140f81bbc(void)

void FUN_140f81bbc(longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1407f13e6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 2,0);
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140f81c32 FUN_140f81c32 body=118 status=ok
// SIG undefined FUN_140f81c32(void)

void FUN_140f81c32(longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1405b3ec2(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 2,0);
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140f81ca8 FUN_140f81ca8 body=2061 status=ok
// SIG undefined FUN_140f81ca8(void)

undefined8 FUN_140f81ca8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  byte bVar9;
  undefined1 uVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  uVar12 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_60 = uVar12;
  if (param_4 != 0) {
    do {
      FUN_140f82572(param_2,param_3);
      if (param_3 != param_2) {
        local_78 = 0;
        uStack_70 = 0;
        iVar3 = *(int *)(param_3 + 0xd0);
        if ((longlong)iVar3 != 0) {
          local_98 = *(undefined8 **)(param_3 + 200);
          lVar13 = 0;
          do {
            if ((*(int *)((longlong)local_98 + lVar13 + 8) != 0) &&
               (*(longlong **)((longlong)local_98 + lVar13) != (longlong *)0x0)) {
              local_88 = 0;
              local_80 = 0;
              (**(code **)(**(longlong **)((longlong)local_98 + lVar13) + 0x40))();
              local_90 = (longlong)(int)uStack_70;
              uVar11 = (int)uStack_70 + 1;
              uStack_70 = CONCAT44(uStack_70._4_4_,uVar11);
              if (uStack_70._4_4_ < uVar11) {
                FUN_1447a71f6(&local_78);
              }
              lVar14 = local_90 * 0x10;
              *(undefined8 *)(local_78 + lVar14) = 0;
              *(undefined4 *)(local_78 + 8 + lVar14) = 0;
              *(undefined8 *)(local_78 + lVar14) = local_88;
              local_88 = 0;
              *(undefined4 *)(local_78 + 8 + lVar14) = local_80;
              local_80 = 0;
              FUN_1449db362(&local_88);
            }
            lVar13 = lVar13 + 0x10;
          } while ((longlong)iVar3 * 0x10 != lVar13);
        }
        FUN_1448a8284((longlong *)(param_2 + 200));
        if (&local_78 == (longlong *)(param_2 + 200)) {
          uVar12 = uStack_70 & 0xffffffff;
        }
        else {
          FUN_144760e21(*(undefined8 *)(param_2 + 200),*(undefined4 *)(param_2 + 0xd0));
          if (*(longlong *)(param_2 + 200) != 0) {
            FUN_1400020a8();
          }
          *(longlong *)(param_2 + 200) = local_78;
          local_78 = 0;
          *(int *)(param_2 + 0xd0) = (int)uStack_70;
          *(uint *)(param_2 + 0xd4) = uStack_70._4_4_;
          uStack_70 = 0;
          uVar12 = 0;
        }
        FUN_144760e21(local_78,uVar12);
        if (local_78 != 0) {
          FUN_1400020a8();
        }
        local_78 = 0;
        uStack_70 = 0;
        iVar3 = *(int *)(param_3 + 0xe8);
        if ((longlong)iVar3 != 0) {
          local_98 = *(undefined8 **)(param_3 + 0xe0);
          lVar13 = 0;
          do {
            if ((*(int *)((longlong)local_98 + lVar13 + 8) != 0) &&
               (*(longlong **)((longlong)local_98 + lVar13) != (longlong *)0x0)) {
              local_88 = 0;
              local_80 = 0;
              (**(code **)(**(longlong **)((longlong)local_98 + lVar13) + 0x40))();
              local_90 = (longlong)(int)uStack_70;
              uVar11 = (int)uStack_70 + 1;
              uStack_70 = CONCAT44(uStack_70._4_4_,uVar11);
              if (uStack_70._4_4_ < uVar11) {
                FUN_1447a71f6(&local_78);
              }
              lVar14 = local_90 * 0x10;
              *(undefined8 *)(local_78 + lVar14) = 0;
              *(undefined4 *)(local_78 + 8 + lVar14) = 0;
              *(undefined8 *)(local_78 + lVar14) = local_88;
              local_88 = 0;
              *(undefined4 *)(local_78 + 8 + lVar14) = local_80;
              local_80 = 0;
              FUN_1449db362(&local_88);
            }
            lVar13 = lVar13 + 0x10;
          } while ((longlong)iVar3 * 0x10 != lVar13);
        }
        FUN_1448a8284((longlong *)(param_2 + 0xe0));
        if (&local_78 == (longlong *)(param_2 + 0xe0)) {
          uVar12 = uStack_70 & 0xffffffff;
        }
        else {
          FUN_144760e21(*(undefined8 *)(param_2 + 0xe0),*(undefined4 *)(param_2 + 0xe8));
          if (*(longlong *)(param_2 + 0xe0) != 0) {
            FUN_1400020a8();
          }
          *(longlong *)(param_2 + 0xe0) = local_78;
          local_78 = 0;
          *(int *)(param_2 + 0xe8) = (int)uStack_70;
          *(uint *)(param_2 + 0xec) = uStack_70._4_4_;
          uStack_70 = 0;
          uVar12 = 0;
        }
        FUN_144760e21(local_78,uVar12);
        if (local_78 != 0) {
          FUN_1400020a8();
        }
      }
      FUN_140f824b6(param_2 + 0xf8,param_3 + 0xf8);
      FUN_140f824b6(param_2 + 0x108,param_3 + 0x108);
      *(undefined1 *)(param_2 + 0x118) = *(undefined1 *)(param_3 + 0x118);
      lVar13 = *(longlong *)(param_3 + 0x120);
      if (DAT_14c950c29 == 1) {
        if (lVar13 == 0) {
          lVar13 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar13 = *(longlong *)(param_3 + 0x120);
        }
      }
      bVar9 = DAT_14c950c29;
      *(longlong *)(param_2 + 0x120) = lVar13;
      lVar13 = *(longlong *)(param_3 + 0x128);
      if ((bVar9 & 1) != 0) {
        if (lVar13 == 0) {
          lVar13 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar13 = *(longlong *)(param_3 + 0x128);
        }
      }
      *(longlong *)(param_2 + 0x128) = lVar13;
      uVar4 = *(undefined4 *)(param_3 + 0x134);
      uVar7 = *(undefined4 *)(param_3 + 0x138);
      uVar8 = *(undefined4 *)(param_3 + 0x13c);
      *(undefined4 *)(param_2 + 0x130) = *(undefined4 *)(param_3 + 0x130);
      *(undefined4 *)(param_2 + 0x134) = uVar4;
      *(undefined4 *)(param_2 + 0x138) = uVar7;
      *(undefined4 *)(param_2 + 0x13c) = uVar8;
      *(undefined8 *)(param_2 + 0x140) = *(undefined8 *)(param_3 + 0x140);
      if (param_3 != param_2) {
        FUN_140c2c3ef(*(undefined8 *)(param_2 + 0x148),*(undefined4 *)(param_2 + 0x150));
        iVar3 = *(int *)(param_3 + 0x150);
        uVar5 = *(undefined8 *)(param_3 + 0x148);
        *(int *)(param_2 + 0x150) = iVar3;
        if (iVar3 == 0 && *(int *)(param_2 + 0x154) == 0) {
          *(undefined4 *)(param_2 + 0x154) = 0;
        }
        else {
          local_98 = (undefined8 *)(param_2 + 0x148);
          FUN_148c47afe(local_98,iVar3);
          FUN_148c47b71(*local_98,uVar5,iVar3);
        }
      }
      uVar5 = *(undefined8 *)(param_3 + 0x158);
      lVar13 = *(longlong *)(param_3 + 0x160);
      if (lVar13 != 0) {
        LOCK();
        *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
        UNLOCK();
      }
      plVar6 = *(longlong **)(param_2 + 0x160);
      *(undefined8 *)(param_2 + 0x158) = uVar5;
      *(longlong *)(param_2 + 0x160) = lVar13;
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
      uVar5 = *(undefined8 *)(param_3 + 0x168);
      lVar13 = *(longlong *)(param_3 + 0x170);
      if (lVar13 != 0) {
        LOCK();
        *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
        UNLOCK();
      }
      plVar6 = *(longlong **)(param_2 + 0x170);
      *(undefined8 *)(param_2 + 0x168) = uVar5;
      *(longlong *)(param_2 + 0x170) = lVar13;
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
      uVar5 = *(undefined8 *)(param_3 + 0x178);
      lVar13 = *(longlong *)(param_3 + 0x180);
      if (lVar13 != 0) {
        LOCK();
        *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
        UNLOCK();
      }
      plVar6 = *(longlong **)(param_2 + 0x180);
      *(undefined8 *)(param_2 + 0x178) = uVar5;
      *(longlong *)(param_2 + 0x180) = lVar13;
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
      *(undefined1 *)(param_2 + 0x188) = *(undefined1 *)(param_3 + 0x188);
      FUN_140b177d4(param_2 + 400,param_3 + 400);
      if (param_3 == param_2) {
        *(undefined8 *)(param_2 + 0x1c8) = *(undefined8 *)(param_3 + 0x1c8);
      }
      else {
        if (*(char *)(param_3 + 0x1b4) == '\x01') {
          *(undefined4 *)(param_2 + 0x1b0) = *(undefined4 *)(param_3 + 0x1b0);
          uVar10 = 1;
LAB_140f823cb:
          *(undefined1 *)(param_2 + 0x1b4) = uVar10;
        }
        else if (*(char *)(param_2 + 0x1b4) == '\x01') {
          uVar10 = 0;
          goto LAB_140f823cb;
        }
        if (*(char *)(param_3 + 0x1bc) == '\x01') {
          *(undefined4 *)(param_2 + 0x1b8) = *(undefined4 *)(param_3 + 0x1b8);
          *(undefined1 *)(param_2 + 0x1bc) = 1;
        }
        else if (*(char *)(param_2 + 0x1bc) == '\x01') {
          *(undefined1 *)(param_2 + 0x1bc) = 0;
        }
        if (*(char *)(param_3 + 0x1c4) == '\x01') {
          *(undefined4 *)(param_2 + 0x1c0) = *(undefined4 *)(param_3 + 0x1c0);
          *(undefined1 *)(param_2 + 0x1c4) = 1;
        }
        else if (*(char *)(param_2 + 0x1c4) == '\x01') {
          *(undefined1 *)(param_2 + 0x1c4) = 0;
        }
        *(undefined8 *)(param_2 + 0x1c8) = *(undefined8 *)(param_3 + 0x1c8);
        if (*(char *)(param_3 + 0x1d4) == '\x01') {
          *(undefined4 *)(param_2 + 0x1d0) = *(undefined4 *)(param_3 + 0x1d0);
          uVar10 = 1;
        }
        else {
          if (*(char *)(param_2 + 0x1d4) != '\x01') goto LAB_140f82021;
          uVar10 = 0;
        }
        *(undefined1 *)(param_2 + 0x1d4) = uVar10;
      }
LAB_140f82021:
      uVar5 = *(undefined8 *)(param_3 + 0x1d8);
      lVar13 = *(longlong *)(param_3 + 0x1e0);
      if (lVar13 != 0) {
        LOCK();
        *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
        UNLOCK();
      }
      plVar6 = *(longlong **)(param_2 + 0x1e0);
      *(undefined8 *)(param_2 + 0x1d8) = uVar5;
      *(longlong *)(param_2 + 0x1e0) = lVar13;
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
      uVar5 = *(undefined8 *)(param_3 + 0x1e8);
      lVar13 = *(longlong *)(param_3 + 0x1f0);
      if (lVar13 != 0) {
        LOCK();
        *(int *)(lVar13 + 0xc) = *(int *)(lVar13 + 0xc) + 1;
        UNLOCK();
      }
      plVar6 = *(longlong **)(param_2 + 0x1f0);
      *(undefined8 *)(param_2 + 0x1e8) = uVar5;
      *(longlong *)(param_2 + 0x1f0) = lVar13;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar6 + 0x10))();
        }
      }
      FUN_140f82514(param_2 + 0x1f8,param_3 + 0x1f8);
      uVar4 = *(undefined4 *)(param_3 + 0x208);
      *(undefined4 *)(param_2 + 0x208) = uVar4;
      uVar12 = (ulonglong)CONCAT31((int3)((uint)uVar4 >> 8),*(undefined1 *)(param_3 + 0x20c));
      *(undefined1 *)(param_2 + 0x20c) = *(undefined1 *)(param_3 + 0x20c);
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x210;
      param_3 = param_3 + 0x210;
    } while (param_4 != 0);
  }
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)(uVar12 >> 8),1);
}



// FUNCTION 140f824b6 FUN_140f824b6 body=93 status=ok
// SIG undefined FUN_140f824b6(void)

undefined8 * FUN_140f824b6(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140c2c3b5(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c47a6e(param_1,iVar1);
      FUN_148c47ad0(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 140f82514 FUN_140f82514 body=93 status=ok
// SIG undefined FUN_140f82514(void)

undefined8 * FUN_140f82514(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140368c45(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148b80bbe(param_1,iVar1);
      FUN_148b80c20(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 140f82572 FUN_140f82572 body=221 status=ok
// SIG undefined FUN_140f82572(void)

longlong FUN_140f82572(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_2 + 8);
  if (DAT_14c950c29 == '\x01') {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar4 = *(longlong *)(param_2 + 8);
    }
  }
  *(longlong *)(param_1 + 8) = lVar4;
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  FUN_143c70eb8(param_1 + 0x18,param_2 + 0x18);
  FUN_14185949e(param_1 + 0x28,param_2 + 0x28);
  FUN_140d2c208(param_1 + 0x38,param_2 + 0x38);
  uVar1 = *(undefined4 *)(param_2 + 0x4c);
  uVar2 = *(undefined4 *)(param_2 + 0x50);
  uVar3 = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x4c) = uVar1;
  *(undefined4 *)(param_1 + 0x50) = uVar2;
  *(undefined4 *)(param_1 + 0x54) = uVar3;
  FUN_1418594fc(param_1 + 0x58,param_2 + 0x58);
  FUN_14185955a(param_1 + 0x68,param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  FUN_140d871f2(param_1 + 0x80,param_2 + 0x80);
  if (param_2 != param_1) {
    FUN_143c70f08(param_1 + 0x90,param_2 + 0x90);
    FUN_143c70f08(param_1 + 0xa8,param_2 + 0xa8);
  }
  *(undefined1 *)(param_1 + 0xc0) = *(undefined1 *)(param_2 + 0xc0);
  return param_1;
}



// FUNCTION 140f8264f FUN_140f8264f body=49 status=ok
// SIG undefined FUN_140f8264f(void)

longlong FUN_140f8264f(void)

{
  if (DAT_14cb46ab8 == 0) {
    FUN_140f50038(&DAT_14cb46ab8,&PTR_s__Script_Water_14ae76e68);
  }
  return DAT_14cb46ab8;
}



// FUNCTION 140f82680 FUN_140f82680 body=1592 status=ok
// SIG undefined FUN_140f82680(void)

void FUN_140f82680(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  int iVar12;
  longlong *plVar13;
  int iVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong lVar17;
  bool bVar18;
  undefined1 auStack_a8 [40];
  longlong local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined6 local_58;
  undefined2 uStack_52;
  undefined6 uStack_50;
  undefined2 uStack_4a;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar4 = *param_2;
  plVar13 = (longlong *)param_2[1];
  if (plVar13 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xa8) = uVar4;
    plVar15 = *(longlong **)(param_1 + 0xb0);
    if (plVar15 == (longlong *)0x0) goto LAB_140f826f5;
    *(undefined8 *)(param_1 + 0xb0) = 0;
LAB_140f82ba3:
    LOCK();
    plVar2 = plVar15 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
    if (plVar13 == (longlong *)0x0) goto LAB_140f826f5;
  }
  else {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0xa8) = uVar4;
    plVar15 = *(longlong **)(param_1 + 0xb0);
    if (plVar13 == plVar15) {
      LOCK();
      plVar15 = plVar13 + 1;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)*plVar15 == 0) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
    }
    else {
      *(longlong **)(param_1 + 0xb0) = plVar13;
      if (plVar15 != (longlong *)0x0) goto LAB_140f82ba3;
    }
  }
  LOCK();
  plVar15 = plVar13 + 1;
  *(int *)plVar15 = (int)*plVar15 + -1;
  UNLOCK();
  if ((int)*plVar15 == 0) {
    (**(code **)*plVar13)(plVar13);
    LOCK();
    piVar1 = (int *)((longlong)plVar13 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
  }
LAB_140f826f5:
  local_78 = *param_2;
  local_70 = param_2[1];
  if (local_70 != 0) {
    LOCK();
    *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
    UNLOCK();
  }
  FUN_140f82d6c(param_1,&local_78,param_3,param_4);
  if (((*(byte *)(*(longlong *)(param_1 + 0xa8) + 0x108) & 1) != 0) ||
     (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x118) != 0)) {
    *(byte *)(param_1 + 0xb8) = *(byte *)(param_1 + 0xb8) | 1;
  }
  lVar5 = *(longlong *)(param_1 + 0x30);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cbe81f8) && (FUN_144b3d300(&DAT_14cbe81f8), DAT_14cbe81f8 == -1)) {
    local_58 = 0x6300610074;
    uStack_52 = 0x68;
    uStack_50 = 0x640065;
    local_68 = 0x70006100650057;
    uStack_60._0_2_ = L'o';
    uStack_60._2_2_ = L'n';
    uStack_5c = 0x41;
    uStack_5a = 0x74;
    FUN_1446f470e(&DAT_14cbe81f0,&local_68,1);
    _Init_thread_footer(&DAT_14cbe81f8);
  }
  lVar17 = DAT_14cbe81f0;
  local_68 = 0;
  uStack_60 = 0;
  uVar6 = uStack_60;
  uStack_5c = 0;
  uVar8 = uStack_5c;
  uStack_5a = 0;
  uVar10 = uStack_5a;
  uStack_5c = (undefined2)((ulonglong)DAT_14cbe81f0 >> 0x20);
  uVar9 = uStack_5c;
  uStack_5a = (undefined2)((ulonglong)DAT_14cbe81f0 >> 0x30);
  uVar11 = uStack_5a;
  uStack_60 = (undefined4)DAT_14cbe81f0;
  uVar7 = uStack_60;
  uStack_60 = uVar7;
  uStack_5c = uVar9;
  uStack_5a = uVar11;
  if (param_1 != 0) {
    uVar3 = *(uint *)(param_1 + 0xc);
    local_68 = (ulonglong)uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar16 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar16 = 0;
    }
    iVar12 = *(int *)(lVar16 + 0x10);
    if (*(int *)(lVar16 + 0x10) == 0) {
      LOCK();
      iVar12 = DAT_14c964868 + 1;
      UNLOCK();
      iVar14 = DAT_14c964868 + 1;
      bVar18 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar12;
      if (bVar18) {
        uStack_60 = uVar6;
        uStack_5c = uVar8;
        uStack_5a = uVar10;
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar14);
      }
      LOCK();
      iVar12 = *(int *)(lVar16 + 0x10);
      bVar18 = iVar12 == 0;
      if (bVar18) {
        *(int *)(lVar16 + 0x10) = iVar14;
        iVar12 = 0;
      }
      UNLOCK();
      uVar3 = (uint)local_68;
      if (bVar18) {
        iVar12 = iVar14;
      }
    }
    local_68._0_4_ = uVar3;
    local_68 = CONCAT44(iVar12,(uint)local_68);
    uStack_60 = uVar7;
    uStack_5c = uVar9;
    uStack_5a = uVar11;
    if ((((((lVar17 != 0) && (iVar12 != 0)) && (-1 < (int)(uint)local_68)) &&
         (((int)(uint)local_68 < DAT_14c9647dc &&
          (plVar13 = (longlong *)
                     ((ulonglong)(((uint)local_68 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_68 >> 0x10) * 8)),
          plVar13 != (longlong *)0x0)))) && ((int)plVar13[2] == iVar12)) &&
       (((*(uint *)(plVar13 + 1) & 0x10200000) == 0 && (*plVar13 != 0)))) {
      FUN_1400796d0(*(undefined8 *)(*plVar13 + 0x10),lVar17,1);
    }
  }
  FUN_14053c012(lVar5 + 0x988,&local_68);
  lVar5 = *(longlong *)(param_1 + 0x30);
  FUN_140f82cba(&local_80);
  local_68 = 0;
  uStack_60 = 0;
  uVar6 = uStack_60;
  uStack_5c = 0;
  uVar8 = uStack_5c;
  uStack_5a = 0;
  uVar10 = uStack_5a;
  uStack_5c = (undefined2)((ulonglong)local_80 >> 0x20);
  uVar9 = uStack_5c;
  uStack_5a = (undefined2)((ulonglong)local_80 >> 0x30);
  uVar11 = uStack_5a;
  uStack_60 = (undefined4)local_80;
  uVar7 = uStack_60;
  uStack_60 = uVar7;
  uStack_5c = uVar9;
  uStack_5a = uVar11;
  if (param_1 != 0) {
    uVar3 = *(uint *)(param_1 + 0xc);
    local_68 = (ulonglong)uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar17 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar17 = 0;
    }
    iVar12 = *(int *)(lVar17 + 0x10);
    if (*(int *)(lVar17 + 0x10) == 0) {
      LOCK();
      iVar12 = DAT_14c964868 + 1;
      UNLOCK();
      iVar14 = DAT_14c964868 + 1;
      bVar18 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar12;
      if (bVar18) {
        uStack_60 = uVar6;
        uStack_5c = uVar8;
        uStack_5a = uVar10;
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar14);
      }
      LOCK();
      iVar12 = *(int *)(lVar17 + 0x10);
      bVar18 = iVar12 == 0;
      if (bVar18) {
        *(int *)(lVar17 + 0x10) = iVar14;
        iVar12 = 0;
      }
      UNLOCK();
      uVar3 = (uint)local_68;
      if (bVar18) {
        iVar12 = iVar14;
      }
    }
    local_68._0_4_ = uVar3;
    local_68 = CONCAT44(iVar12,(uint)local_68);
    uStack_60 = uVar7;
    uStack_5c = uVar9;
    uStack_5a = uVar11;
    if ((((local_80 != 0) && (iVar12 != 0)) && (-1 < (int)(uint)local_68)) &&
       ((((int)(uint)local_68 < DAT_14c9647dc &&
         (plVar13 = (longlong *)
                    ((ulonglong)(((uint)local_68 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_68 >> 0x10) * 8)),
         plVar13 != (longlong *)0x0)) &&
        (((int)plVar13[2] == iVar12 &&
         (((*(uint *)(plVar13 + 1) & 0x10200000) == 0 && (*plVar13 != 0)))))))) {
      FUN_1400796d0(*(undefined8 *)(*plVar13 + 0x10),local_80,1);
    }
  }
  FUN_14053c012(lVar5 + 0x998,&local_68);
  lVar5 = *(longlong *)(param_1 + 0x30);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cbe8208) && (FUN_144b3d300(&DAT_14cbe8208), DAT_14cbe8208 == -1)) {
    local_58 = 0x6500530074;
    uStack_52 = 0x71;
    uStack_50 = 0x6e00650075;
    uStack_4a = 99;
    local_68 = 0x72006100740053;
    uStack_60._0_2_ = L't';
    uStack_60._2_2_ = L'I';
    uStack_5c = 0x6e;
    uStack_5a = 0x69;
    local_48 = 0x65;
    FUN_1446f470e(&DAT_14cbe8200,&local_68,1);
    _Init_thread_footer(&DAT_14cbe8208);
  }
  lVar17 = DAT_14cbe8200;
  local_68 = 0;
  uStack_60 = 0;
  uVar6 = uStack_60;
  uStack_5c = 0;
  uVar8 = uStack_5c;
  uStack_5a = 0;
  uVar10 = uStack_5a;
  uStack_5c = (undefined2)((ulonglong)DAT_14cbe8200 >> 0x20);
  uVar9 = uStack_5c;
  uStack_5a = (undefined2)((ulonglong)DAT_14cbe8200 >> 0x30);
  uVar11 = uStack_5a;
  uStack_60 = (undefined4)DAT_14cbe8200;
  uVar7 = uStack_60;
  uStack_60 = uVar7;
  uStack_5c = uVar9;
  uStack_5a = uVar11;
  if (param_1 != 0) {
    uVar3 = *(uint *)(param_1 + 0xc);
    local_68 = (ulonglong)uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar16 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar16 = 0;
    }
    iVar12 = *(int *)(lVar16 + 0x10);
    if (*(int *)(lVar16 + 0x10) == 0) {
      LOCK();
      iVar12 = DAT_14c964868 + 1;
      UNLOCK();
      iVar14 = DAT_14c964868 + 1;
      bVar18 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar12;
      if (bVar18) {
        uStack_60 = uVar6;
        uStack_5c = uVar8;
        uStack_5a = uVar10;
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar14);
      }
      LOCK();
      iVar12 = *(int *)(lVar16 + 0x10);
      bVar18 = iVar12 == 0;
      if (bVar18) {
        *(int *)(lVar16 + 0x10) = iVar14;
        iVar12 = 0;
      }
      UNLOCK();
      uVar3 = (uint)local_68;
      if (bVar18) {
        iVar12 = iVar14;
      }
    }
    local_68._0_4_ = uVar3;
    local_68 = CONCAT44(iVar12,(uint)local_68);
    uStack_60 = uVar7;
    uStack_5c = uVar9;
    uStack_5a = uVar11;
    if ((((lVar17 != 0) && (iVar12 != 0)) && (-1 < (int)(uint)local_68)) &&
       ((((int)(uint)local_68 < DAT_14c9647dc &&
         (plVar13 = (longlong *)
                    ((ulonglong)(((uint)local_68 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_68 >> 0x10) * 8)),
         plVar13 != (longlong *)0x0)) &&
        (((int)plVar13[2] == iVar12 &&
         (((*(uint *)(plVar13 + 1) & 0x10200000) == 0 && (*plVar13 != 0)))))))) {
      FUN_1400796d0(*(undefined8 *)(*plVar13 + 0x10),lVar17,1);
    }
  }
  FUN_14053c012(lVar5 + 0x9b8,&local_68);
  plVar13 = (longlong *)param_2[1];
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar15 = plVar13 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f82cba FUN_140f82cba body=176 status=ok
// SIG undefined FUN_140f82cba(void)

undefined8 * FUN_140f82cba(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  wchar_t local_38 [20];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbe77dc) {
    FUN_144b3d300(&DAT_14cbe77dc);
    if (DAT_14cbe77dc == -1) {
      builtin_wcsncpy(local_38,L"WeaponDetached",0xf);
      FUN_1446f470e(&DAT_14cbe77d4,local_38,1);
      _Init_thread_footer(&DAT_14cbe77dc);
    }
  }
  *param_1 = DAT_14cbe77d4;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f82d6c FUN_140f82d6c body=748 status=ok
// SIG undefined FUN_140f82d6c(void)

void FUN_140f82d6c(longlong param_1,undefined8 *param_2,longlong *param_3,undefined4 param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  longlong *plVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  ushort local_88;
  byte local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  ushort local_60;
  byte local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar7 = *param_2;
  plVar3 = (longlong *)param_2[1];
  if (plVar3 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x88) = uVar7;
    plVar9 = *(longlong **)(param_1 + 0x90);
    if (plVar9 == (longlong *)0x0) goto LAB_140f82dee;
    *(undefined8 *)(param_1 + 0x90) = 0;
LAB_140f82f77:
    LOCK();
    plVar2 = plVar9 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
    if (plVar3 == (longlong *)0x0) goto LAB_140f82dee;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x88) = uVar7;
    plVar9 = *(longlong **)(param_1 + 0x90);
    if (plVar3 == plVar9) {
      LOCK();
      plVar9 = plVar3 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
    else {
      *(longlong **)(param_1 + 0x90) = plVar3;
      if (plVar9 != (longlong *)0x0) goto LAB_140f82f77;
    }
  }
  LOCK();
  plVar9 = plVar3 + 1;
  *(int *)plVar9 = (int)*plVar9 + -1;
  UNLOCK();
  if ((int)*plVar9 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
LAB_140f82dee:
  local_b0 = *param_2;
  local_a8 = param_2[1];
  if (local_a8 != 0) {
    LOCK();
    *(int *)(local_a8 + 8) = *(int *)(local_a8 + 8) + 1;
    UNLOCK();
  }
  FUN_140f8305a(param_1,&local_b0,param_3,param_4);
  lVar4 = *param_3;
  uVar7 = FUN_1407db78e();
  lVar5 = *(longlong *)(lVar4 + 0x200);
  if (lVar5 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_1403f69f4(lVar5,uVar7,0);
  }
  puVar10 = &local_a0;
  FUN_140ccc900(lVar4,puVar10,uVar7,param_4);
  uVar11 = local_a0;
  if (local_80 != 3) {
    puVar8 = &local_78;
    FUN_1400b56fe(puVar8,&local_a0,3);
    uVar11 = 0;
    if (local_58 != 0) {
      uVar11 = local_78;
    }
    pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
    if (pcVar6 != (code *)0x0) {
      if (0x18 < local_60) {
        puVar8 = (undefined4 *)CONCAT44(uStack_74,local_78);
      }
      (*pcVar6)(puVar8);
    }
    if (0x18 < local_60) {
      FUN_1400020a8(CONCAT44(uStack_74,local_78));
    }
  }
  *(undefined4 *)(param_1 + 0xa0) = uVar11;
  FUN_14020a6cc(param_1 + 0x98,1);
  pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_80 * 0x120));
  if (pcVar6 != (code *)0x0) {
    if (0x18 < local_88) {
      puVar10 = (undefined4 *)CONCAT44(uStack_9c,local_a0);
    }
    (*pcVar6)(puVar10);
  }
  if (0x18 < local_88) {
    FUN_1400020a8(CONCAT44(uStack_9c,local_a0));
  }
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar3 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  if ((local_50 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f8305a FUN_140f8305a body=1321 status=ok
// SIG undefined FUN_140f8305a(void)

void FUN_140f8305a(longlong param_1,undefined8 *param_2,longlong *param_3,undefined4 param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  longlong *plVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined1 auStack_c8 [40];
  undefined4 local_a0;
  undefined4 uStack_9c;
  ushort local_88;
  byte local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  ushort local_60;
  byte local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar8 = *param_2;
  plVar3 = (longlong *)param_2[1];
  if (plVar3 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x38) = uVar8;
    plVar10 = *(longlong **)(param_1 + 0x40);
    if (plVar10 == (longlong *)0x0) goto LAB_140f830d2;
    *(undefined8 *)(param_1 + 0x40) = 0;
LAB_140f833ea:
    LOCK();
    plVar2 = plVar10 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
    if (plVar3 == (longlong *)0x0) goto LAB_140f830d2;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x38) = uVar8;
    plVar10 = *(longlong **)(param_1 + 0x40);
    if (plVar3 == plVar10) {
      LOCK();
      plVar10 = plVar3 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
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
    else {
      *(longlong **)(param_1 + 0x40) = plVar3;
      if (plVar10 != (longlong *)0x0) goto LAB_140f833ea;
    }
  }
  LOCK();
  plVar10 = plVar3 + 1;
  *(int *)plVar10 = (int)*plVar10 + -1;
  UNLOCK();
  if ((int)*plVar10 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
LAB_140f830d2:
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    plVar10 = plVar3 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
  lVar4 = *param_3;
  uVar8 = FUN_1407db8b5();
  lVar5 = *(longlong *)(lVar4 + 0x200);
  if (lVar5 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_1403f69f4(lVar5,uVar8,0);
  }
  puVar11 = &local_a0;
  FUN_140ccc900(lVar4,puVar11,uVar8,param_4);
  uVar12 = local_a0;
  if (local_80 != 3) {
    puVar9 = &local_78;
    FUN_1400b56fe(puVar9,&local_a0,3);
    uVar12 = 0;
    if (local_58 != 0) {
      uVar12 = local_78;
    }
    pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
    if (pcVar6 != (code *)0x0) {
      if (0x18 < local_60) {
        puVar9 = (undefined4 *)CONCAT44(uStack_74,local_78);
      }
      (*pcVar6)(puVar9);
    }
    if (0x18 < local_60) {
      FUN_1400020a8(CONCAT44(uStack_74,local_78));
    }
  }
  *(undefined4 *)(param_1 + 0x50) = uVar12;
  FUN_14020a6cc(param_1 + 0x48,1);
  pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_80 * 0x120));
  if (pcVar6 != (code *)0x0) {
    if (0x18 < local_88) {
      puVar11 = (undefined4 *)CONCAT44(uStack_9c,local_a0);
    }
    (*pcVar6)(puVar11);
  }
  if (0x18 < local_88) {
    FUN_1400020a8(CONCAT44(uStack_9c,local_a0));
  }
  lVar4 = *param_3;
  uVar8 = FUN_1407db8b5();
  lVar5 = *(longlong *)(lVar4 + 0x200);
  if (lVar5 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_1403f69f4(lVar5,uVar8,1);
  }
  puVar11 = &local_a0;
  FUN_140ccc900(lVar4,puVar11,uVar8,param_4);
  uVar12 = local_a0;
  if (local_80 != 3) {
    puVar9 = &local_78;
    FUN_1400b56fe(puVar9,&local_a0,3);
    uVar12 = 0;
    if (local_58 != 0) {
      uVar12 = local_78;
    }
    pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
    if (pcVar6 != (code *)0x0) {
      if (0x18 < local_60) {
        puVar9 = (undefined4 *)CONCAT44(uStack_74,local_78);
      }
      (*pcVar6)(puVar9);
    }
    if (0x18 < local_60) {
      FUN_1400020a8(CONCAT44(uStack_74,local_78));
    }
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar12;
  FUN_14020a6cc(param_1 + 0x54,1);
  pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_80 * 0x120));
  if (pcVar6 != (code *)0x0) {
    if (0x18 < local_88) {
      puVar11 = (undefined4 *)CONCAT44(uStack_9c,local_a0);
    }
    (*pcVar6)(puVar11);
  }
  if (0x18 < local_88) {
    FUN_1400020a8(CONCAT44(uStack_9c,local_a0));
  }
  lVar4 = *param_3;
  uVar8 = FUN_1407db8b5();
  lVar5 = *(longlong *)(lVar4 + 0x200);
  if (lVar5 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_1403f69f4(lVar5,uVar8,2);
  }
  puVar11 = &local_a0;
  FUN_140ccc900(lVar4,puVar11,uVar8,param_4);
  if (local_80 == 3) {
    uVar7 = 3;
    uVar12 = local_a0;
  }
  else {
    puVar9 = &local_78;
    FUN_1400b56fe(puVar9,&local_a0,3);
    uVar12 = 0;
    if (local_58 != 0) {
      uVar12 = local_78;
    }
    pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
    if (pcVar6 != (code *)0x0) {
      if (0x18 < local_60) {
        puVar9 = (undefined4 *)CONCAT44(uStack_74,local_78);
      }
      (*pcVar6)(puVar9);
    }
    if (0x18 < local_60) {
      FUN_1400020a8(CONCAT44(uStack_74,local_78));
    }
    uVar7 = (uint)local_80;
  }
  *(undefined4 *)(param_1 + 0x60) = uVar12;
  pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar7 * 0x120));
  if (pcVar6 != (code *)0x0) {
    if (0x18 < local_88) {
      puVar11 = (undefined4 *)CONCAT44(uStack_9c,local_a0);
    }
    (*pcVar6)(puVar11);
  }
  if (0x18 < local_88) {
    FUN_1400020a8(CONCAT44(uStack_9c,local_a0));
  }
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar3 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
  if ((local_50 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f8358a FUN_140f8358a body=57 status=ok
// SIG undefined FUN_140f8358a(void)

void FUN_140f8358a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21ed0 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21ed0 = FUN_140002ddd(FUN_14643668c,uVar1,L"GbxBrainTask_StateMachine");
  }
  return;
}



// FUNCTION 140f835ca FUN_140f835ca body=57 status=ok
// SIG undefined FUN_140f835ca(void)

void FUN_140f835ca(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5ac70 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5ac70 = FUN_140002ddd(FUN_1464cca0f,uVar1,L"GbxBrainAspect_IsSpawnCostAvailable");
  }
  return;
}



// FUNCTION 140f83604 FUN_140f83604 body=143 status=ok
// SIG undefined FUN_140f83604(void)

longlong * FUN_140f83604(char *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  bool bVar9;
  
  if ((*param_1 == '\x03') && (plVar3 = *(longlong **)(param_1 + 0x10), plVar3 != (longlong *)0x0))
  {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_140f83672;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar9 = iVar7 == iVar5;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
    } while (!bVar9);
    lVar4 = *(longlong *)(param_1 + 8);
    bVar9 = true;
    if (lVar4 != 0) {
      uVar8 = FUN_140f83694();
      cVar6 = FUN_1448093f4(lVar4,uVar8);
      if (cVar6 != '\0') {
        *param_2 = lVar4;
        param_2[1] = (longlong)plVar3;
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        bVar9 = false;
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
    if (!bVar9) {
      return param_2;
    }
  }
LAB_140f83672:
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 140f83694 FUN_140f83694 body=57 status=ok
// SIG undefined FUN_140f83694(void)

void FUN_140f83694(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb57c28 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb57c28 = FUN_140002ddd(FUN_1464bec71,uVar1,L"GameResourcePool");
  }
  return;
}



// FUNCTION 140f836ce FUN_140f836ce body=31 status=ok
// SIG undefined FUN_140f836ce(void)

undefined8 FUN_140f836ce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140f836ee FUN_140f836ee body=181 status=ok
// SIG undefined FUN_140f836ee(void)

void FUN_140f836ee(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  
  FUN_140f837a4();
  if (*(longlong *)(param_1 + 0x3b0) != 0) {
    lVar2 = FUN_1401b4c98(param_1 + -0x8c8);
    lVar1 = *(longlong *)(param_1 + 0x3b0);
    if (lVar1 != 0) {
      uVar3 = (uint)lVar1;
      if ((int)(uVar3 & 0xffffff) < *(int *)(lVar2 + 0x10)) {
        lVar4 = lVar2 + 0x18;
        if (*(longlong *)(lVar2 + 0x28) != 0) {
          lVar4 = *(longlong *)(lVar2 + 0x28);
        }
        if ((*(uint *)(lVar4 + (ulonglong)((uVar3 & 0xffffff) >> 5) * 4) >> (uVar3 & 0x1f) & 1) != 0
           ) {
          lVar4 = *(longlong *)(lVar2 + 8);
          lVar5 = (ulonglong)(uVar3 & 0xffffff) * 0x70;
          if (((lVar4 + lVar5 != 0) && (*(longlong *)(lVar4 + 0x60 + lVar5) == lVar1)) &&
             (*(char *)(lVar4 + 1 + lVar5) != '\x04')) {
            FUN_1405a424c(lVar2);
          }
        }
      }
    }
    *(undefined8 *)(param_1 + 0x3b0) = 0;
    FUN_140f83a9a(param_1 + -0x8c8);
  }
  *(undefined1 *)(param_1 + 0x404) = 0;
  return;
}



// FUNCTION 140f837a4 FUN_140f837a4 body=73 status=ok
// SIG undefined FUN_140f837a4(void)

void FUN_140f837a4(longlong param_1)

{
  if (*(char *)(param_1 + -0x750) == '\x03') {
    *(undefined1 *)(param_1 + 0x16d) = 0;
    (**(code **)(*(longlong *)(param_1 + -0x8c8) + 0x578))(param_1 + -0x8c8);
  }
  FUN_140f837ee(param_1 + 0x60);
  FUN_140f837ee(param_1 + 0xe0);
  return;
}



// FUNCTION 140f837ee FUN_140f837ee body=142 status=ok
// SIG undefined FUN_140f837ee(void)

void FUN_140f837ee(longlong param_1)

{
  longlong lVar1;
  
  if ((*(byte *)(param_1 + 0x78) & 2) == 0) {
    return;
  }
  *(byte *)(param_1 + 0x78) = *(byte *)(param_1 + 0x78) & 0xfd;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_140f06f08(*(longlong *)(param_1 + 0x10),0);
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_140f06f08(*(longlong *)(param_1 + 0x18),0);
    lVar1 = *(longlong *)(param_1 + 0x18);
    if (lVar1 != 0) {
      *(byte *)(lVar1 + 0x78) = *(byte *)(lVar1 + 0x78) & 0xf7;
      FUN_140cf5864(lVar1);
      FUN_140cf57c4(lVar1);
    }
  }
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0x78) = *(byte *)(lVar1 + 0x78) & 0xf7;
    FUN_140cf5864(lVar1);
    FUN_140cf57c4(lVar1);
  }
  FUN_140f8387c(param_1,0);
  FUN_140f838ea(param_1);
  return;
}



// FUNCTION 140f8387c FUN_140f8387c body=110 status=ok
// SIG undefined FUN_140f8387c(void)

void FUN_140f8387c(longlong param_1,char param_2)

{
  longlong lVar1;
  
  if (((*(byte *)(param_1 + 0x78) & 4) == 0) == (bool)param_2) {
    *(byte *)(param_1 + 0x78) = *(byte *)(param_1 + 0x78) & 0xfb | param_2 << 2;
    lVar1 = *(longlong *)(param_1 + 0x10);
    if (lVar1 != 0) {
      FUN_140cf5864(lVar1);
      FUN_140cf57c4(lVar1);
      FUN_1409d56ca(lVar1);
    }
    lVar1 = *(longlong *)(param_1 + 0x18);
    if (lVar1 != 0) {
      FUN_140cf5864(lVar1);
      FUN_140cf57c4(lVar1);
      FUN_1409d56ca(lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 140f838ea FUN_140f838ea body=431 status=ok
// SIG undefined FUN_140f838ea(void)

void FUN_140f838ea(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  bool bVar11;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(longlong *)(param_1 + 0x18) == 0) {
    bVar11 = false;
  }
  else {
    bVar11 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x48) != 0;
  }
  if ((*(longlong *)(param_1 + 0x10) != 0) &&
     (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x48), bVar11 && lVar3 != 0)) {
    plVar1 = (longlong *)(param_1 + 0x28);
    lVar2 = param_1 + 0x38;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    iVar10 = 0;
    local_60 = lVar2;
    if (*(int *)(param_1 + 0x50) != 0) {
      FUN_1449c0562(&local_68);
      iVar10 = *(int *)(param_1 + 0x50);
    }
    local_88 = local_68;
    local_80 = local_60;
    local_78 = local_58;
    uVar7 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    iVar6 = local_78._4_4_;
    local_90 = plVar1;
    if ((local_78._4_4_ != iVar10) || (local_78 = local_58, local_60 != lVar2)) {
      do {
        local_78 = uVar7;
        lVar4 = *local_90;
        lVar9 = lVar4 + (longlong)iVar6 * 0x18;
        cVar5 = FUN_144729dda(lVar9);
        if (cVar5 != '\0') {
          uVar7 = FUN_14479d2ce(lVar9);
          FUN_140357fa8(uVar7,2,2);
        }
        lVar9 = lVar4 + (longlong)iVar6 * 0x18 + 8;
        cVar5 = FUN_144729dda(lVar9);
        if (cVar5 != '\0') {
          plVar8 = (longlong *)FUN_14479d2ce(lVar9);
          (**(code **)(*plVar8 + 0x490))(plVar8,lVar3,&DAT_14cadad98,0);
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar6 = local_78._4_4_;
        uVar7 = local_78;
      } while (((local_78._4_4_ != iVar10) || (local_80 != lVar2)) || (local_90 != plVar1));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f83a9a FUN_140f83a9a body=558 status=ok
// SIG undefined FUN_140f83a9a(void)

void FUN_140f83a9a(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140f83ce0(param_1 + 0x928,DAT_14cbcb990,0);
  if (*(longlong *)(param_1 + 0xc80) != 0) {
    lVar5 = FUN_1401b4c98(param_1);
    lVar2 = *(longlong *)(param_1 + 0xc80);
    if (lVar2 != 0) {
      uVar7 = (uint)lVar2;
      if ((int)(uVar7 & 0xffffff) < *(int *)(lVar5 + 0x10)) {
        lVar8 = lVar5 + 0x18;
        if (*(longlong *)(lVar5 + 0x28) != 0) {
          lVar8 = *(longlong *)(lVar5 + 0x28);
        }
        if ((*(uint *)(lVar8 + (ulonglong)((uVar7 & 0xffffff) >> 5) * 4) >> (uVar7 & 0x1f) & 1) != 0
           ) {
          lVar8 = *(longlong *)(lVar5 + 8);
          lVar9 = (ulonglong)(uVar7 & 0xffffff) * 0x70;
          if (((lVar8 + lVar9 != 0) && (*(longlong *)(lVar8 + 0x60 + lVar9) == lVar2)) &&
             (*(char *)(lVar8 + 1 + lVar9) != '\x04')) {
            FUN_1405a424c(lVar5);
          }
        }
      }
    }
    *(undefined8 *)(param_1 + 0xc80) = 0;
  }
  plVar1 = (longlong *)(param_1 + 0xc90);
  cVar4 = FUN_144904448(plVar1);
  if (cVar4 == '\0') goto LAB_140f83c4b;
  lVar2 = *(longlong *)(param_1 + 0xbe8);
  if (lVar2 == 0) goto LAB_140f83b9c;
  lVar5 = *(longlong *)(lVar2 + 0x560);
  if (lVar5 == 0) {
    uVar6 = FUN_140067708();
    lVar5 = FUN_14477b664(uVar6);
    *(longlong *)(lVar2 + 0x560) = lVar5;
  }
  if (*(longlong *)(lVar2 + 0x568) == 0) {
    if ((*(longlong *)(lVar2 + 0x558) == 0) || (lVar5 == 0)) goto LAB_140f83b9c;
    plVar3 = *(longlong **)(lVar5 + 0xb8);
    if (plVar3 != (longlong *)0x0) {
      cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3);
      if (cVar4 != '\0') {
        uVar6 = (**(code **)(*plVar3 + 0x110))(plVar3);
        lVar5 = FUN_144aff482(uVar6,(longlong *)(lVar2 + 0x558));
        *(longlong *)(lVar2 + 0x568) = lVar5;
        if (lVar5 == 0) goto LAB_140f83b9c;
        goto LAB_140f83c25;
      }
    }
    *(undefined8 *)(lVar2 + 0x568) = 0;
LAB_140f83b9c:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
  }
LAB_140f83c25:
  plVar3 = (longlong *)*plVar1;
  if (((plVar3 == (longlong *)0x0) || (*(longlong *)(param_1 + 0xc98) == -1)) ||
     (*plVar3 != *(longlong *)(param_1 + 0xc98))) {
    local_38 = (longlong *)0x0;
    FUN_14072d42a(plVar1,0);
  }
  else {
    *(int *)(plVar3 + 0x21) = (int)plVar3[0x21] + 1;
    local_38 = plVar3;
    uVar6 = FUN_140ba21e6(plVar1);
    local_58 = 0;
    FUN_14071ab80(plVar3,&local_50,*(longlong *)(param_1 + 0xbe8) + 0x558,uVar6);
    local_50 = 0;
    local_48 = 0xffffffffffffffff;
  }
  FUN_144a61ac8(&local_38);
LAB_140f83c4b:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f83ce0 FUN_140f83ce0 body=238 status=ok
// SIG undefined FUN_140f83ce0(void)

void FUN_140f83ce0(longlong param_1,longlong param_2,byte param_3)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar3 = *(longlong *)(param_1 + 0x10);
  if ((lVar3 != 0) && (iVar2 = *(int *)(lVar3 + 0x98), (longlong)iVar2 != 0)) {
    lVar3 = *(longlong *)(lVar3 + 0x90);
    lVar5 = 0;
    do {
      if (((*(longlong *)(lVar3 + lVar5) == param_2) &&
          ((*(uint *)(lVar3 + 0xc + lVar5) & 1 << (param_3 & 0x1f)) != 0)) &&
         (plVar4 = *(longlong **)(lVar3 + 0xe8 + lVar5), plVar4 != (longlong *)0x0)) {
        (**(code **)(*plVar4 + 0x2b0))();
        pbVar1 = (byte *)(lVar3 + 0x15 + lVar5);
        *pbVar1 = *pbVar1 & 0xf7;
      }
      lVar5 = lVar5 + 0xf0;
    } while ((longlong)iVar2 * 0xf0 - lVar5 != 0);
  }
  lVar3 = *(longlong *)(param_1 + 0x18);
  if ((lVar3 != 0) && (iVar2 = *(int *)(lVar3 + 0x98), (longlong)iVar2 != 0)) {
    lVar3 = *(longlong *)(lVar3 + 0x90);
    lVar5 = 0;
    do {
      if (((*(longlong *)(lVar3 + lVar5) == param_2) &&
          ((*(uint *)(lVar3 + 0xc + lVar5) & 1 << (param_3 & 0x1f)) != 0)) &&
         (plVar4 = *(longlong **)(lVar3 + 0xe8 + lVar5), plVar4 != (longlong *)0x0)) {
        (**(code **)(*plVar4 + 0x2b0))();
        pbVar1 = (byte *)(lVar3 + 0x15 + lVar5);
        *pbVar1 = *pbVar1 & 0xf7;
      }
      lVar5 = lVar5 + 0xf0;
    } while ((longlong)iVar2 * 0xf0 - lVar5 != 0);
  }
  return;
}



// FUNCTION 140f83dce FUN_140f83dce body=7598 status=ok
// SIG undefined FUN_140f83dce(void)

void FUN_140f83dce(longlong *param_1)

{
  int *piVar1;
  float fVar2;
  code *pcVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  byte bVar19;
  char cVar20;
  undefined1 uVar21;
  uint uVar22;
  longlong lVar23;
  longlong lVar24;
  bool bVar25;
  float *pfVar26;
  float *pfVar27;
  float fVar28;
  float fVar29;
  undefined1 auStack_138 [32];
  uint local_118;
  undefined4 uStack_114;
  undefined8 uStack_110;
  longlong *local_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  ulonglong local_f0 [2];
  undefined4 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  float local_c0;
  undefined4 uStack_bc;
  ushort local_a8;
  byte local_a0;
  float local_98;
  undefined4 uStack_94;
  ushort local_80;
  byte local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_140f85bac();
  lVar23 = (**(code **)(*param_1 + 0x6d0))(param_1);
  if (lVar23 == 0) goto LAB_140f8492e;
  local_118 = local_118 & 0xffffff00;
  local_f0[0] = local_f0[0] & 0xffffffff00000000;
  FUN_1456bb102(&local_118,param_1[0x332]);
  pfVar26 = &local_c0;
  FUN_1448729ea(param_1 + 0x1b7,pfVar26,&local_118);
  if (local_a0 == 3) {
    fVar28 = local_c0;
    bVar19 = 3;
  }
  else {
    pfVar27 = &local_98;
    FUN_1400b56fe(pfVar27,&local_c0,3);
    fVar28 = 0.0;
    if (local_78 != 0) {
      fVar28 = local_98;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_80) {
        pfVar27 = (float *)CONCAT44(uStack_94,local_98);
      }
      (*pcVar3)(pfVar27);
    }
    bVar19 = local_a0;
    if (0x18 < local_80) {
      FUN_1400020a8(CONCAT44(uStack_94,local_98));
      bVar19 = local_a0;
    }
  }
  fVar28 = ABS(*(float *)(lVar23 + 4) - fVar28);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar19 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_a8) {
      pfVar26 = (float *)CONCAT44(uStack_bc,local_c0);
    }
    (*pcVar3)(pfVar26);
  }
  if (0x18 < local_a8) {
    FUN_1400020a8(CONCAT44(uStack_bc,local_c0));
  }
  FUN_1448173f8(local_f0);
  if (((char)local_118 == '\x03') && (local_108 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_108 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_108 + 0x10))();
    }
  }
  if (1e-08 < fVar28) {
    local_118 = *(uint *)(lVar23 + 4);
    uStack_110 = 0;
    local_108 = (longlong *)0x0;
    uStack_100 = 0;
    uStack_f8 = 0;
    local_f0[0] = 0;
    local_f0[1] = 0;
    local_e0 = 0xf00000d0;
    local_d8 = 0;
    local_d0 = 0x3f800000;
    FUN_140f85fd4(param_1 + 0x1b7);
  }
  local_118 = local_118 & 0xffffff00;
  local_f0[0] = local_f0[0] & 0xffffffff00000000;
  FUN_1456bb102(&local_118,param_1[0x332]);
  pfVar26 = &local_c0;
  FUN_1448729ea(param_1 + 0x1c1,pfVar26,&local_118);
  if (local_a0 == 3) {
    fVar29 = local_c0;
    bVar19 = 3;
  }
  else {
    pfVar27 = &local_98;
    FUN_1400b56fe(pfVar27,&local_c0,3);
    fVar29 = 0.0;
    if (local_78 != 0) {
      fVar29 = local_98;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_80) {
        pfVar27 = (float *)CONCAT44(uStack_94,local_98);
      }
      (*pcVar3)(pfVar27);
    }
    bVar19 = local_a0;
    if (0x18 < local_80) {
      FUN_1400020a8(CONCAT44(uStack_94,local_98));
      bVar19 = local_a0;
    }
  }
  fVar2 = *(float *)(lVar23 + 0x10);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar19 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_a8) {
      pfVar26 = (float *)CONCAT44(uStack_bc,local_c0);
    }
    (*pcVar3)(pfVar26);
  }
  if (0x18 < local_a8) {
    FUN_1400020a8(CONCAT44(uStack_bc,local_c0));
  }
  FUN_1448173f8(local_f0);
  if (((char)local_118 == '\x03') && (local_108 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_108 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_108 + 0x10))();
    }
  }
  bVar6 = 1e-08 < ABS(fVar2 - fVar29);
  if (bVar6) {
    local_118 = *(uint *)(lVar23 + 0x10);
    uStack_110 = 0;
    local_108 = (longlong *)0x0;
    uStack_100 = 0;
    uStack_f8 = 0;
    local_f0[0] = 0;
    local_f0[1] = 0;
    local_e0 = 0xf00000d0;
    local_d8 = 0;
    local_d0 = 0x3f800000;
    FUN_140f85fd4(param_1 + 0x1c1);
  }
  local_118 = local_118 & 0xffffff00;
  local_f0[0] = local_f0[0] & 0xffffffff00000000;
  FUN_1456bb102(&local_118,param_1[0x332]);
  pfVar26 = &local_c0;
  FUN_1448729ea(param_1 + 0x1cb,pfVar26,&local_118);
  if (local_a0 == 3) {
    fVar29 = local_c0;
    bVar19 = 3;
  }
  else {
    pfVar27 = &local_98;
    FUN_1400b56fe(pfVar27,&local_c0,3);
    fVar29 = 0.0;
    if (local_78 != 0) {
      fVar29 = local_98;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_80) {
        pfVar27 = (float *)CONCAT44(uStack_94,local_98);
      }
      (*pcVar3)(pfVar27);
    }
    bVar19 = local_a0;
    if (0x18 < local_80) {
      FUN_1400020a8(CONCAT44(uStack_94,local_98));
      bVar19 = local_a0;
    }
  }
  fVar2 = *(float *)(lVar23 + 0x1c);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar19 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_a8) {
      pfVar26 = (float *)CONCAT44(uStack_bc,local_c0);
    }
    (*pcVar3)(pfVar26);
  }
  if (0x18 < local_a8) {
    FUN_1400020a8(CONCAT44(uStack_bc,local_c0));
  }
  FUN_1448173f8(local_f0);
  if (((char)local_118 == '\x03') && (local_108 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_108 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_108 + 0x10))();
    }
  }
  bVar7 = 1e-08 < ABS(fVar2 - fVar29);
  if (bVar7) {
    local_118 = *(uint *)(lVar23 + 0x1c);
    uStack_110 = 0;
    local_108 = (longlong *)0x0;
    uStack_100 = 0;
    uStack_f8 = 0;
    local_f0[0] = 0;
    local_f0[1] = 0;
    local_e0 = 0xf00000d0;
    local_d8 = 0;
    local_d0 = 0x3f800000;
    FUN_140f85fd4(param_1 + 0x1cb);
  }
  local_118 = local_118 & 0xffffff00;
  local_f0[0] = local_f0[0] & 0xffffffff00000000;
  FUN_1456bb102(&local_118,param_1[0x332]);
  pfVar26 = &local_c0;
  FUN_1448729ea(param_1 + 0x1d5,pfVar26,&local_118);
  if (local_a0 == 3) {
    fVar29 = local_c0;
    bVar19 = 3;
  }
  else {
    pfVar27 = &local_98;
    FUN_1400b56fe(pfVar27,&local_c0,3);
    fVar29 = 0.0;
    if (local_78 != 0) {
      fVar29 = local_98;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_80) {
        pfVar27 = (float *)CONCAT44(uStack_94,local_98);
      }
      (*pcVar3)(pfVar27);
    }
    bVar19 = local_a0;
    if (0x18 < local_80) {
      FUN_1400020a8(CONCAT44(uStack_94,local_98));
      bVar19 = local_a0;
    }
  }
  fVar2 = *(float *)(lVar23 + 0x28);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar19 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_a8) {
      pfVar26 = (float *)CONCAT44(uStack_bc,local_c0);
    }
    (*pcVar3)(pfVar26);
  }
  if (0x18 < local_a8) {
    FUN_1400020a8(CONCAT44(uStack_bc,local_c0));
  }
  FUN_1448173f8(local_f0);
  if (((char)local_118 == '\x03') && (local_108 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_108 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_108 + 0x10))();
    }
  }
  bVar8 = 1e-08 < ABS(fVar2 - fVar29);
  if (bVar8) {
    local_118 = *(uint *)(lVar23 + 0x28);
    uStack_110 = 0;
    local_108 = (longlong *)0x0;
    uStack_100 = 0;
    uStack_f8 = 0;
    local_f0[0] = 0;
    local_f0[1] = 0;
    local_e0 = 0xf00000d0;
    local_d8 = 0;
    local_d0 = 0x3f800000;
    FUN_140f85fd4(param_1 + 0x1d5);
  }
  local_118 = local_118 & 0xffffff00;
  local_f0[0] = local_f0[0] & 0xffffffff00000000;
  FUN_1456bb102(&local_118,param_1[0x332]);
  pfVar26 = &local_c0;
  FUN_1448729ea(param_1 + 0x1a1,pfVar26,&local_118);
  if (local_a0 == 3) {
    fVar29 = local_c0;
    bVar19 = 3;
  }
  else {
    pfVar27 = &local_98;
    FUN_1400b56fe(pfVar27,&local_c0,3);
    fVar29 = 0.0;
    if (local_78 != 0) {
      fVar29 = local_98;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_80) {
        pfVar27 = (float *)CONCAT44(uStack_94,local_98);
      }
      (*pcVar3)(pfVar27);
    }
    bVar19 = local_a0;
    if (0x18 < local_80) {
      FUN_1400020a8(CONCAT44(uStack_94,local_98));
      bVar19 = local_a0;
    }
  }
  fVar2 = *(float *)(lVar23 + 0x34);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar19 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_a8) {
      pfVar26 = (float *)CONCAT44(uStack_bc,local_c0);
    }
    (*pcVar3)(pfVar26);
  }
  if (0x18 < local_a8) {
    FUN_1400020a8(CONCAT44(uStack_bc,local_c0));
  }
  FUN_1448173f8(local_f0);
  if (((char)local_118 == '\x03') && (local_108 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_108 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_108 + 0x10))();
    }
  }
  bVar9 = 1e-08 < ABS(fVar2 - fVar29);
  if (bVar9) {
    local_118 = *(uint *)(lVar23 + 0x34);
    uStack_110 = 0;
    local_108 = (longlong *)0x0;
    uStack_100 = 0;
    uStack_f8 = 0;
    local_f0[0] = 0;
    local_f0[1] = 0;
    local_e0 = 0xf00000d0;
    local_d8 = 0;
    local_d0 = 0x3f800000;
    FUN_140f85fd4(param_1 + 0x1a1);
  }
  local_118 = local_118 & 0xffffff00;
  local_f0[0] = local_f0[0] & 0xffffffff00000000;
  FUN_1456bb102(&local_118,param_1[0x332]);
  pfVar26 = &local_c0;
  FUN_1448729ea(param_1 + 0x1ad,pfVar26,&local_118);
  if (local_a0 == 3) {
    fVar29 = local_c0;
    bVar19 = 3;
  }
  else {
    pfVar27 = &local_98;
    FUN_1400b56fe(pfVar27,&local_c0,3);
    fVar29 = 0.0;
    if (local_78 != 0) {
      fVar29 = local_98;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_80) {
        pfVar27 = (float *)CONCAT44(uStack_94,local_98);
      }
      (*pcVar3)(pfVar27);
    }
    bVar19 = local_a0;
    if (0x18 < local_80) {
      FUN_1400020a8(CONCAT44(uStack_94,local_98));
      bVar19 = local_a0;
    }
  }
  fVar2 = *(float *)(lVar23 + 0x40);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar19 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_a8) {
      pfVar26 = (float *)CONCAT44(uStack_bc,local_c0);
    }
    (*pcVar3)(pfVar26);
  }
  if (0x18 < local_a8) {
    FUN_1400020a8(CONCAT44(uStack_bc,local_c0));
  }
  FUN_1448173f8(local_f0);
  if (((char)local_118 == '\x03') && (local_108 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_108 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_108 + 0x10))();
    }
  }
  bVar10 = 1e-08 < ABS(fVar2 - fVar29);
  if (bVar10) {
    local_118 = *(uint *)(lVar23 + 0x40);
    uStack_110 = 0;
    local_108 = (longlong *)0x0;
    uStack_100 = 0;
    uStack_f8 = 0;
    local_f0[0] = 0;
    local_f0[1] = 0;
    local_e0 = 0xf00000d0;
    local_d8 = 0;
    local_d0 = 0x3f800000;
    FUN_140f85fd4(param_1 + 0x1ad);
  }
  local_118 = local_118 & 0xffffff00;
  local_f0[0] = local_f0[0] & 0xffffffff00000000;
  FUN_1456bb102(&local_118,param_1[0x332]);
  pfVar26 = &local_c0;
  FUN_1448729ea(param_1 + 0x1e9,pfVar26,&local_118);
  if (local_a0 == 3) {
    fVar29 = local_c0;
    bVar19 = 3;
  }
  else {
    pfVar27 = &local_98;
    FUN_1400b56fe(pfVar27,&local_c0,3);
    fVar29 = 0.0;
    if (local_78 != 0) {
      fVar29 = local_98;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_80) {
        pfVar27 = (float *)CONCAT44(uStack_94,local_98);
      }
      (*pcVar3)(pfVar27);
    }
    bVar19 = local_a0;
    if (0x18 < local_80) {
      FUN_1400020a8(CONCAT44(uStack_94,local_98));
      bVar19 = local_a0;
    }
  }
  fVar2 = *(float *)(lVar23 + 0x4c);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar19 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_a8) {
      pfVar26 = (float *)CONCAT44(uStack_bc,local_c0);
    }
    (*pcVar3)(pfVar26);
  }
  if (0x18 < local_a8) {
    FUN_1400020a8(CONCAT44(uStack_bc,local_c0));
  }
  FUN_1448173f8(local_f0);
  if (((char)local_118 == '\x03') && (local_108 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_108 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_108 + 0x10))();
    }
  }
  bVar11 = 1e-08 < ABS(fVar2 - fVar29);
  if (bVar11) {
    local_118 = *(uint *)(lVar23 + 0x4c);
    uStack_110 = 0;
    local_108 = (longlong *)0x0;
    uStack_100 = 0;
    uStack_f8 = 0;
    local_f0[0] = 0;
    local_f0[1] = 0;
    local_e0 = 0xf00000d0;
    local_d8 = 0;
    local_d0 = 0x3f800000;
    FUN_140f85fd4(param_1 + 0x1e9);
  }
  local_118 = local_118 & 0xffffff00;
  local_f0[0] = local_f0[0] & 0xffffffff00000000;
  FUN_1456bb102(&local_118,param_1[0x332]);
  pfVar26 = &local_c0;
  FUN_1448729ea(param_1 + 499,pfVar26,&local_118);
  if (local_a0 == 3) {
    fVar29 = local_c0;
    bVar19 = 3;
  }
  else {
    pfVar27 = &local_98;
    FUN_1400b56fe(pfVar27,&local_c0,3);
    fVar29 = 0.0;
    if (local_78 != 0) {
      fVar29 = local_98;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_80) {
        pfVar27 = (float *)CONCAT44(uStack_94,local_98);
      }
      (*pcVar3)(pfVar27);
    }
    bVar19 = local_a0;
    if (0x18 < local_80) {
      FUN_1400020a8(CONCAT44(uStack_94,local_98));
      bVar19 = local_a0;
    }
  }
  fVar2 = *(float *)(lVar23 + 0x58);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar19 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_a8) {
      pfVar26 = (float *)CONCAT44(uStack_bc,local_c0);
    }
    (*pcVar3)(pfVar26);
  }
  if (0x18 < local_a8) {
    FUN_1400020a8(CONCAT44(uStack_bc,local_c0));
  }
  FUN_1448173f8(local_f0);
  if (((char)local_118 == '\x03') && (local_108 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_108 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_108 + 0x10))();
    }
  }
  bVar12 = 1e-08 < ABS(fVar2 - fVar29);
  if (bVar12) {
    local_118 = *(uint *)(lVar23 + 0x58);
    uStack_110 = 0;
    local_108 = (longlong *)0x0;
    uStack_100 = 0;
    uStack_f8 = 0;
    local_f0[0] = 0;
    local_f0[1] = 0;
    local_e0 = 0xf00000d0;
    local_d8 = 0;
    local_d0 = 0x3f800000;
    FUN_140f85fd4(param_1 + 499);
  }
  local_118 = local_118 & 0xffffff00;
  local_f0[0] = local_f0[0] & 0xffffffff00000000;
  FUN_1456bb102(&local_118,param_1[0x332]);
  pfVar26 = &local_c0;
  FUN_1448729ea(param_1 + 0x1fd,pfVar26,&local_118);
  if (local_a0 == 3) {
    fVar29 = local_c0;
    bVar19 = 3;
  }
  else {
    pfVar27 = &local_98;
    FUN_1400b56fe(pfVar27,&local_c0,3);
    fVar29 = 0.0;
    if (local_78 != 0) {
      fVar29 = local_98;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_80) {
        pfVar27 = (float *)CONCAT44(uStack_94,local_98);
      }
      (*pcVar3)(pfVar27);
    }
    bVar19 = local_a0;
    if (0x18 < local_80) {
      FUN_1400020a8(CONCAT44(uStack_94,local_98));
      bVar19 = local_a0;
    }
  }
  fVar2 = *(float *)(lVar23 + 100);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar19 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_a8) {
      pfVar26 = (float *)CONCAT44(uStack_bc,local_c0);
    }
    (*pcVar3)(pfVar26);
  }
  if (0x18 < local_a8) {
    FUN_1400020a8(CONCAT44(uStack_bc,local_c0));
  }
  FUN_1448173f8(local_f0);
  if (((char)local_118 == '\x03') && (local_108 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_108 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_108 + 0x10))();
    }
  }
  bVar13 = 1e-08 < ABS(fVar2 - fVar29);
  if (bVar13) {
    local_118 = *(uint *)(lVar23 + 100);
    uStack_110 = 0;
    local_108 = (longlong *)0x0;
    uStack_100 = 0;
    uStack_f8 = 0;
    local_f0[0] = 0;
    local_f0[1] = 0;
    local_e0 = 0xf00000d0;
    local_d8 = 0;
    local_d0 = 0x3f800000;
    FUN_140f85fd4(param_1 + 0x1fd);
  }
  local_118 = local_118 & 0xffffff00;
  local_f0[0] = local_f0[0] & 0xffffffff00000000;
  FUN_1456bb102(&local_118,param_1[0x332]);
  pfVar26 = &local_c0;
  FUN_1448729ea(param_1 + 0x207,pfVar26,&local_118);
  if (local_a0 == 3) {
    fVar29 = local_c0;
    bVar19 = 3;
  }
  else {
    pfVar27 = &local_98;
    FUN_1400b56fe(pfVar27,&local_c0,3);
    fVar29 = 0.0;
    if (local_78 != 0) {
      fVar29 = local_98;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_80) {
        pfVar27 = (float *)CONCAT44(uStack_94,local_98);
      }
      (*pcVar3)(pfVar27);
    }
    bVar19 = local_a0;
    if (0x18 < local_80) {
      FUN_1400020a8(CONCAT44(uStack_94,local_98));
      bVar19 = local_a0;
    }
  }
  fVar2 = *(float *)(lVar23 + 0x70);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar19 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_a8) {
      pfVar26 = (float *)CONCAT44(uStack_bc,local_c0);
    }
    (*pcVar3)(pfVar26);
  }
  if (0x18 < local_a8) {
    FUN_1400020a8(CONCAT44(uStack_bc,local_c0));
  }
  FUN_1448173f8(local_f0);
  if (((char)local_118 == '\x03') && (local_108 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_108 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_108 + 0x10))();
    }
  }
  bVar14 = 1e-08 < ABS(fVar2 - fVar29);
  if (bVar14) {
    local_118 = *(uint *)(lVar23 + 0x70);
    uStack_110 = 0;
    local_108 = (longlong *)0x0;
    uStack_100 = 0;
    uStack_f8 = 0;
    local_f0[0] = 0;
    local_f0[1] = 0;
    local_e0 = 0xf00000d0;
    local_d8 = 0;
    local_d0 = 0x3f800000;
    FUN_140f85fd4(param_1 + 0x207);
  }
  local_118 = local_118 & 0xffffff00;
  local_f0[0] = local_f0[0] & 0xffffffff00000000;
  FUN_1456bb102(&local_118,param_1[0x332]);
  pfVar26 = &local_c0;
  FUN_1448729ea(param_1 + 0x212,pfVar26,&local_118);
  if (local_a0 == 3) {
    fVar29 = local_c0;
    bVar19 = 3;
  }
  else {
    pfVar27 = &local_98;
    FUN_1400b56fe(pfVar27,&local_c0,3);
    fVar29 = 0.0;
    if (local_78 != 0) {
      fVar29 = local_98;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_80) {
        pfVar27 = (float *)CONCAT44(uStack_94,local_98);
      }
      (*pcVar3)(pfVar27);
    }
    bVar19 = local_a0;
    if (0x18 < local_80) {
      FUN_1400020a8(CONCAT44(uStack_94,local_98));
      bVar19 = local_a0;
    }
  }
  fVar2 = *(float *)(lVar23 + 0x7c);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar19 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_a8) {
      pfVar26 = (float *)CONCAT44(uStack_bc,local_c0);
    }
    (*pcVar3)(pfVar26);
  }
  if (0x18 < local_a8) {
    FUN_1400020a8(CONCAT44(uStack_bc,local_c0));
  }
  FUN_1448173f8(local_f0);
  if (((char)local_118 == '\x03') && (local_108 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_108 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_108 + 0x10))();
    }
  }
  bVar15 = 1e-08 < ABS(fVar2 - fVar29);
  if (bVar15) {
    local_118 = *(uint *)(lVar23 + 0x7c);
    uStack_110 = 0;
    local_108 = (longlong *)0x0;
    uStack_100 = 0;
    uStack_f8 = 0;
    local_f0[0] = 0;
    local_f0[1] = 0;
    local_e0 = 0xf00000d0;
    local_d8 = 0;
    local_d0 = 0x3f800000;
    FUN_140f85fd4(param_1 + 0x212);
  }
  local_118 = local_118 & 0xffffff00;
  local_f0[0] = local_f0[0] & 0xffffffff00000000;
  FUN_1456bb102(&local_118,param_1[0x332]);
  pfVar26 = &local_c0;
  FUN_1448729ea(param_1 + 0x21c,pfVar26,&local_118);
  if (local_a0 == 3) {
    fVar29 = local_c0;
    bVar19 = 3;
  }
  else {
    pfVar27 = &local_98;
    FUN_1400b56fe(pfVar27,&local_c0,3);
    fVar29 = 0.0;
    if (local_78 != 0) {
      fVar29 = local_98;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_80) {
        pfVar27 = (float *)CONCAT44(uStack_94,local_98);
      }
      (*pcVar3)(pfVar27);
    }
    bVar19 = local_a0;
    if (0x18 < local_80) {
      FUN_1400020a8(CONCAT44(uStack_94,local_98));
      bVar19 = local_a0;
    }
  }
  fVar2 = *(float *)(lVar23 + 0x88);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar19 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_a8) {
      pfVar26 = (float *)CONCAT44(uStack_bc,local_c0);
    }
    (*pcVar3)(pfVar26);
  }
  if (0x18 < local_a8) {
    FUN_1400020a8(CONCAT44(uStack_bc,local_c0));
  }
  FUN_1448173f8(local_f0);
  if (((char)local_118 == '\x03') && (local_108 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_108 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_108 + 0x10))();
    }
  }
  bVar16 = 1e-08 < ABS(fVar2 - fVar29);
  if (bVar16) {
    local_118 = *(uint *)(lVar23 + 0x88);
    uStack_110 = 0;
    local_108 = (longlong *)0x0;
    uStack_100 = 0;
    uStack_f8 = 0;
    local_f0[0] = 0;
    local_f0[1] = 0;
    local_e0 = 0xf00000d0;
    local_d8 = 0;
    local_d0 = 0x3f800000;
    FUN_140f85fd4(param_1 + 0x21c);
  }
  local_118 = local_118 & 0xffffff00;
  local_f0[0] = local_f0[0] & 0xffffffff00000000;
  FUN_1456bb102(&local_118,param_1[0x332]);
  pfVar26 = &local_c0;
  FUN_1448729ea(param_1 + 0x260,pfVar26,&local_118);
  if (local_a0 == 3) {
    fVar29 = local_c0;
    bVar19 = 3;
  }
  else {
    pfVar27 = &local_98;
    FUN_1400b56fe(pfVar27,&local_c0,3);
    fVar29 = 0.0;
    if (local_78 != 0) {
      fVar29 = local_98;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_80) {
        pfVar27 = (float *)CONCAT44(uStack_94,local_98);
      }
      (*pcVar3)(pfVar27);
    }
    bVar19 = local_a0;
    if (0x18 < local_80) {
      FUN_1400020a8(CONCAT44(uStack_94,local_98));
      bVar19 = local_a0;
    }
  }
  fVar2 = *(float *)(lVar23 + 0xb8);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar19 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_a8) {
      pfVar26 = (float *)CONCAT44(uStack_bc,local_c0);
    }
    (*pcVar3)(pfVar26);
  }
  if (0x18 < local_a8) {
    FUN_1400020a8(CONCAT44(uStack_bc,local_c0));
  }
  FUN_1448173f8(local_f0);
  if (((char)local_118 == '\x03') && (local_108 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_108 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_108 + 0x10))();
    }
  }
  bVar17 = 1e-08 < ABS(fVar2 - fVar29);
  if (bVar17) {
    local_118 = *(uint *)(lVar23 + 0xb8);
    uStack_110 = 0;
    local_108 = (longlong *)0x0;
    uStack_100 = 0;
    uStack_f8 = 0;
    local_f0[0] = 0;
    local_f0[1] = 0;
    local_e0 = 0xf00000d0;
    local_d8 = 0;
    local_d0 = 0x3f800000;
    FUN_140f85fd4(param_1 + 0x260);
  }
  local_118 = local_118 & 0xffffff00;
  local_f0[0] = local_f0[0] & 0xffffffff00000000;
  FUN_1456bb102(&local_118,param_1[0x332]);
  pfVar26 = &local_c0;
  FUN_1448729ea(param_1 + 0x26c,pfVar26,&local_118);
  if (local_a0 == 3) {
    fVar29 = local_c0;
    bVar19 = 3;
  }
  else {
    pfVar27 = &local_98;
    FUN_1400b56fe(pfVar27,&local_c0,3);
    fVar29 = 0.0;
    if (local_78 != 0) {
      fVar29 = local_98;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_80) {
        pfVar27 = (float *)CONCAT44(uStack_94,local_98);
      }
      (*pcVar3)(pfVar27);
    }
    bVar19 = local_a0;
    if (0x18 < local_80) {
      FUN_1400020a8(CONCAT44(uStack_94,local_98));
      bVar19 = local_a0;
    }
  }
  fVar2 = *(float *)(lVar23 + 0xc4);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar19 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_a8) {
      pfVar26 = (float *)CONCAT44(uStack_bc,local_c0);
    }
    (*pcVar3)(pfVar26);
  }
  if (0x18 < local_a8) {
    FUN_1400020a8(CONCAT44(uStack_bc,local_c0));
  }
  FUN_1448173f8(local_f0);
  if (((char)local_118 == '\x03') && (local_108 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_108 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_108 + 0x10))();
    }
  }
  bVar18 = 1e-08 < ABS(fVar2 - fVar29);
  if (bVar18) {
    local_118 = *(uint *)(lVar23 + 0xc4);
    uStack_110 = 0;
    local_108 = (longlong *)0x0;
    uStack_100 = 0;
    uStack_f8 = 0;
    local_f0[0] = 0;
    local_f0[1] = 0;
    local_e0 = 0xf00000d0;
    local_d8 = 0;
    local_d0 = 0x3f800000;
    FUN_140f85fd4(param_1 + 0x26c);
  }
  local_118 = local_118 & 0xffffff00;
  local_f0[0] = local_f0[0] & 0xffffffff00000000;
  FUN_1456bb102(&local_118,param_1[0x332]);
  pfVar26 = &local_c0;
  FUN_1448729ea(param_1 + 0x253,pfVar26,&local_118);
  if (local_a0 == 3) {
    uVar22 = 3;
    fVar29 = local_c0;
  }
  else {
    pfVar27 = &local_98;
    FUN_1400b56fe(pfVar27,&local_c0,3);
    fVar29 = 0.0;
    if (local_78 != 0) {
      fVar29 = local_98;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_80) {
        pfVar27 = (float *)CONCAT44(uStack_94,local_98);
      }
      (*pcVar3)(pfVar27);
    }
    if (0x18 < local_80) {
      FUN_1400020a8(CONCAT44(uStack_94,local_98));
    }
    uVar22 = (uint)local_a0;
  }
  fVar2 = *(float *)(lVar23 + 0xd0);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar22 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_a8) {
      pfVar26 = (float *)CONCAT44(uStack_bc,local_c0);
    }
    (*pcVar3)(pfVar26);
  }
  if (0x18 < local_a8) {
    FUN_1400020a8(CONCAT44(uStack_bc,local_c0));
  }
  FUN_1448173f8(local_f0);
  if (((char)local_118 == '\x03') && (local_108 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_108 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_108 + 0x10))();
    }
  }
  bVar25 = 1e-08 < ABS(fVar2 - fVar29);
  if (bVar25) {
    local_118 = *(uint *)(lVar23 + 0xd0);
    uStack_110 = 0;
    local_108 = (longlong *)0x0;
    uStack_100 = 0;
    uStack_f8 = 0;
    local_f0[0] = 0;
    local_f0[1] = 0;
    local_e0 = 0xf00000d0;
    local_d8 = 0;
    local_d0 = 0x3f800000;
    FUN_140f85fd4(param_1 + 0x253);
  }
  bVar25 = bVar25 || (bVar18 ||
                     (bVar17 ||
                     (bVar16 ||
                     (bVar15 ||
                     (bVar14 ||
                     (bVar13 ||
                     (bVar12 ||
                     (bVar11 ||
                     (bVar10 || (bVar9 || (bVar8 || (bVar7 || (bVar6 || 1e-08 < fVar28)))))))))))));
  lVar24 = param_1[0x332];
  if (((lVar24 == 0) ||
      (lVar24 = (**(code **)(*(longlong *)(lVar24 + 0x4a0) + 0x10))(lVar24 + 0x4a0), lVar24 == 0))
     || (*(int *)(lVar24 + 0x40) < 1)) {
LAB_140f84925:
    if (!bVar25) goto LAB_140f8492e;
  }
  else {
    lVar4 = *(longlong *)(lVar24 + 0x38);
    local_118 = *(uint *)(lVar4 + 0x30);
    uStack_114 = *(undefined4 *)(lVar4 + 0x34);
    uStack_110 = *(undefined8 *)(lVar4 + 0x38);
    local_108 = *(longlong **)(lVar4 + 0x40);
    uStack_100 = *(undefined8 *)(lVar4 + 0x48);
    cVar20 = FUN_1403ae288();
    if (cVar20 == '\0') goto LAB_140f84925;
    if (*(int *)(lVar24 + 0x40) < 1) {
      fVar28 = -1.0;
    }
    else {
      fVar28 = (float)FUN_1405583ce(*(undefined8 *)(lVar24 + 0x38));
    }
    bVar6 = 1e-08 < ABS(*(float *)(lVar23 + 0x94) - fVar28);
    if (bVar6) {
      lVar24 = FUN_14008e0ae(&local_118);
      FUN_14117bcd8(lVar24 + 0x2c,lVar23 + 0x90);
    }
    bVar25 = bVar6 || bVar25;
    fVar28 = *(float *)(lVar23 + 0xdc);
    if (0 < *(int *)(lVar23 + 0xf4)) {
      fVar28 = fVar28 * *(float *)(lVar23 + 0x94);
    }
    lVar24 = FUN_14008e0ae(&local_118);
    if (((fVar28 == *(float *)(lVar24 + 0x6c)) && (!NAN(fVar28) && !NAN(*(float *)(lVar24 + 0x6c))))
       && (lVar24 = FUN_14008e0ae(&local_118),
          ABS(*(float *)(lVar23 + 0xe8) - *(float *)(lVar24 + 0x78)) <= 1e-08)) goto LAB_140f84925;
    FUN_1457d6258(param_1[0x332]);
  }
  FUN_1457d6138(param_1);
LAB_140f8492e:
  if (((param_1[0x66] != 0) && (plVar5 = (longlong *)param_1[0x23], plVar5 != (longlong *)0x0)) &&
     ((lVar23 = (**(code **)(*plVar5 + 0x7b8))(plVar5,0,1,0xffffffff), lVar23 != 0 &&
      (*(longlong *)(lVar23 + 0x138) != 0)))) {
    lVar23 = param_1[0x66];
    *(int *)(lVar23 + 0x128) = (int)param_1[0x333];
    *(undefined4 *)(lVar23 + 300) = *(undefined4 *)((longlong)param_1 + 0x199c);
    uVar21 = FUN_1402096b0(param_1);
    *(undefined1 *)(lVar23 + 0x130) = uVar21;
    *(undefined1 *)(lVar23 + 0x131) = *(undefined1 *)((longlong)param_1 + 0x19a3);
    *(longlong *)(lVar23 + 0x148) = param_1[0x337];
    lVar24 = param_1[0x336];
    *(longlong *)(lVar23 + 0x138) = param_1[0x335];
    *(longlong *)(lVar23 + 0x140) = lVar24;
    *(undefined1 *)(lVar23 + 0x132) = *(undefined1 *)((longlong)param_1 + 0x19a4);
    *(int *)(lVar23 + 0x150) = (int)param_1[0x34d];
  }
  if ((local_70 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f85bac FUN_140f85bac body=1062 status=ok
// SIG undefined FUN_140f85bac(void)

void FUN_140f85bac(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  longlong lVar11;
  undefined1 *puVar12;
  longlong lVar13;
  undefined1 *puVar14;
  longlong lVar15;
  undefined1 auStack_108 [32];
  longlong *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 local_c0;
  undefined2 local_bf;
  undefined1 uStack_bd;
  undefined4 uStack_bc;
  undefined1 uStack_b8;
  undefined1 local_b7;
  undefined2 uStack_b6;
  undefined1 uStack_b4;
  undefined1 uStack_b3;
  undefined1 uStack_b2;
  undefined1 uStack_b1;
  undefined1 uStack_b0;
  undefined1 uStack_af;
  undefined2 uStack_ae;
  undefined2 uStack_ac;
  undefined2 uStack_aa;
  undefined2 uStack_a8;
  undefined1 local_a0 [32];
  undefined1 *local_80;
  ulonglong local_78;
  undefined1 local_70 [16];
  undefined1 *local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1407f0d92();
  if ((((param_1[0x66] != 0) && (plVar2 = (longlong *)param_1[0x23], plVar2 != (longlong *)0x0)) &&
      (lVar11 = (**(code **)(*plVar2 + 0x7b8))(plVar2,0,1,0xffffffff), lVar11 != 0)) &&
     (*(longlong *)(lVar11 + 0x138) != 0)) {
    lVar11 = param_1[0x66];
    local_e8 = (longlong *)0x0;
    lVar15 = param_1[0x3b];
    uStack_e0 = 1;
    FUN_1447d05f2(&local_e8,0);
    *local_e8 = lVar15;
    uStack_ac = 0;
    uStack_aa = 0;
    uStack_a8 = 0x101;
    local_80 = (undefined1 *)0x0;
    local_78 = 0x800000000;
    local_60 = (undefined1 *)0x0;
    local_58 = 0x400000000;
    local_c0 = 0;
    uStack_b4 = 0;
    uStack_b3 = 0;
    uStack_b2 = 0;
    uStack_b1 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_bf = 1;
    uStack_b0 = 0;
    uStack_bc = 0x1000000;
    uStack_b8 = 1;
    uStack_bd = 1;
    if (0 < (int)uStack_e0) {
      lVar15 = 0;
      iVar8 = (int)uStack_e0;
      do {
        uVar7 = local_58;
        if (local_e8[lVar15] != 0) {
          uVar10 = *(undefined4 *)(local_e8[lVar15] + 0xc);
          lVar13 = (longlong)(int)local_58;
          uVar9 = (int)local_58 + 1;
          local_58 = CONCAT44(local_58._4_4_,uVar9);
          if (local_58._4_4_ < uVar9) {
            FUN_1447de67e(local_70,uVar7 & 0xffffffff);
          }
          puVar12 = local_60;
          if (local_60 == (undefined1 *)0x0) {
            puVar12 = local_70;
          }
          *(undefined4 *)(puVar12 + lVar13 * 4) = uVar10;
          iVar8 = (int)uStack_e0;
        }
        lVar15 = lVar15 + 1;
      } while (lVar15 < iVar8);
    }
    local_c0 = 1;
    *(uint *)(lVar11 + 0x8a) = CONCAT13(uStack_b3,CONCAT12(uStack_b4,uStack_b6));
    *(uint *)(lVar11 + 0x8e) = CONCAT13(uStack_af,CONCAT12(uStack_b0,CONCAT11(uStack_b1,uStack_b2)))
    ;
    *(uint *)(lVar11 + 0x92) = CONCAT22(uStack_ac,uStack_ae);
    *(uint *)(lVar11 + 0x96) = CONCAT22(uStack_a8,uStack_aa);
    *(undefined4 *)(lVar11 + 0x70) = (undefined4)local_d0;
    *(undefined4 *)(lVar11 + 0x74) = local_d0._4_4_;
    *(undefined4 *)(lVar11 + 0x78) = (undefined4)uStack_c8;
    *(undefined4 *)(lVar11 + 0x7c) = uStack_c8._4_4_;
    *(undefined1 *)(lVar11 + 0x80) = 1;
    *(ulonglong *)(lVar11 + 0x81) =
         CONCAT17(uStack_b8,CONCAT43(uStack_bc,CONCAT12(uStack_bd,local_bf)));
    *(uint *)(lVar11 + 0x89) = CONCAT13(uStack_b4,CONCAT21(uStack_b6,local_b7));
    *(ushort *)(lVar11 + 0x8d) = CONCAT11(uStack_b2,uStack_b3);
    *(undefined1 *)(lVar11 + 0x8f) = uStack_b1;
    puVar12 = (undefined1 *)(lVar11 + 0xa0);
    if (puVar12 != local_a0) {
      puVar14 = local_a0;
      if (local_80 != (undefined1 *)0x0) {
        puVar14 = local_80;
      }
      iVar8 = (int)local_78;
      lVar15 = (longlong)(int)local_78;
      *(int *)(lVar11 + 200) = (int)local_78;
      if ((int)local_78 == 0 && *(int *)(lVar11 + 0xcc) == 0) {
        *(undefined4 *)(lVar11 + 0xcc) = 8;
      }
      else {
        FUN_14470be6c(puVar12,local_78 & 0xffffffff);
        if (iVar8 != 0) {
          if (*(undefined1 **)(lVar11 + 0xc0) != (undefined1 *)0x0) {
            puVar12 = *(undefined1 **)(lVar11 + 0xc0);
          }
          memcpy(puVar12,puVar14,lVar15 << 2);
        }
      }
    }
    puVar12 = (undefined1 *)(lVar11 + 0xd0);
    if (puVar12 != local_70) {
      puVar14 = local_70;
      if (local_60 != (undefined1 *)0x0) {
        puVar14 = local_60;
      }
      iVar8 = (int)local_58;
      lVar15 = (longlong)(int)local_58;
      *(int *)(lVar11 + 0xe8) = (int)local_58;
      if ((int)local_58 == 0 && *(int *)(lVar11 + 0xec) == 0) {
        *(undefined4 *)(lVar11 + 0xec) = 4;
      }
      else {
        FUN_1447163e6(puVar12,local_58 & 0xffffffff);
        if (iVar8 != 0) {
          if (*(undefined1 **)(lVar11 + 0xe0) != (undefined1 *)0x0) {
            puVar12 = *(undefined1 **)(lVar11 + 0xe0);
          }
          memcpy(puVar12,puVar14,lVar15 << 2);
        }
      }
    }
    lVar15 = param_1[0x13b];
    uVar10 = *(undefined4 *)((longlong)param_1 + 0x9dc);
    lVar13 = param_1[0x13c];
    uVar3 = *(undefined4 *)((longlong)param_1 + 0x9e4);
    uVar4 = *(undefined4 *)((longlong)param_1 + 0x9ec);
    lVar6 = param_1[0x13e];
    uVar5 = *(undefined4 *)((longlong)param_1 + 0x9f4);
    *(int *)(lVar11 + 0x100) = (int)param_1[0x13d];
    *(undefined4 *)(lVar11 + 0x104) = uVar4;
    *(int *)(lVar11 + 0x108) = (int)lVar6;
    *(undefined4 *)(lVar11 + 0x10c) = uVar5;
    *(int *)(lVar11 + 0xf0) = (int)lVar15;
    *(undefined4 *)(lVar11 + 0xf4) = uVar10;
    *(int *)(lVar11 + 0xf8) = (int)lVar13;
    *(undefined4 *)(lVar11 + 0xfc) = uVar3;
    plVar2 = (longlong *)(lVar11 + 0x110);
    iVar8 = (int)param_1[0x186];
    iVar1 = *(int *)(lVar11 + 0x118);
    if (iVar1 < iVar8) {
      *(int *)(lVar11 + 0x118) = iVar8;
      if ((uint)(*(int *)(lVar11 + 0x11c) - iVar1) < (uint)(iVar8 - iVar1)) {
        FUN_1418c1e7a(plVar2);
      }
    }
    else {
      if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4();
      }
      if (iVar8 < iVar1) {
        *(int *)(lVar11 + 0x118) = iVar8;
        FUN_148ade0e0(plVar2);
      }
    }
    if (0 < (int)param_1[0x186]) {
      lVar15 = 0;
      do {
        *(undefined1 *)(*plVar2 + lVar15 * 2) =
             *(undefined1 *)(*(longlong *)(param_1[0x185] + lVar15 * 8) + 0x161);
        *(undefined1 *)(*plVar2 + 1 + lVar15 * 2) =
             *(undefined1 *)(*(longlong *)(param_1[0x185] + lVar15 * 8) + 0x160);
        lVar15 = lVar15 + 1;
      } while (lVar15 < (int)param_1[0x186]);
    }
    uVar10 = (**(code **)(*param_1 + 0x6a8))(param_1);
    *(undefined4 *)(lVar11 + 0x120) = uVar10;
    if (local_60 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    if (local_80 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    if (local_e8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_50 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f85fd4 FUN_140f85fd4 body=153 status=ok
// SIG undefined FUN_140f85fd4(void)

undefined4 * FUN_140f85fd4(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  lVar1 = *(longlong *)(param_2 + 2);
  if (*(longlong *)(param_1 + 2) != lVar1) {
    *(undefined8 *)(param_1 + 6) = 0;
  }
  *(longlong *)(param_1 + 2) = lVar1;
  if (*(longlong *)(param_1 + 4) != *(longlong *)(param_2 + 4)) {
    *(undefined8 *)(param_1 + 6) = 0;
  }
  uVar2 = FUN_14477b664();
  uVar2 = FUN_14477b664(uVar2);
  *(undefined8 *)(param_1 + 4) = uVar2;
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  uVar2 = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 10) = uVar2;
  if ((*(longlong *)(param_1 + 0xc) != *(longlong *)(param_2 + 0xc)) ||
     (param_1[0xe] != param_2[0xe])) {
    *(longlong *)(param_1 + 0xc) = *(longlong *)(param_2 + 0xc);
    param_1[0xe] = param_2[0xe];
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  param_1[0x12] = param_2[0x12];
  return param_1;
}



// FUNCTION 140f8606e FUN_140f8606e body=32 status=ok
// SIG undefined FUN_140f8606e(void)

undefined4 FUN_140f8606e(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  iVar1 = *(int *)(param_1 + 0x40);
  if (0 < iVar1) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    uVar3 = *(undefined8 *)(lVar2 + 0x30);
    uVar4 = *(undefined8 *)(lVar2 + 0x38);
    uVar5 = *(undefined8 *)(lVar2 + 0x48);
    param_2[2] = *(undefined8 *)(lVar2 + 0x40);
    param_2[3] = uVar5;
    *param_2 = uVar3;
    param_2[1] = uVar4;
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),0 < iVar1);
}



// FUNCTION 140f8608e FUN_140f8608e body=86 status=ok
// SIG undefined FUN_140f8608e(void)

float FUN_140f8608e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  
  if ((longlong)*(int *)(param_1 + 0x40) == 0) {
    fVar4 = 0.0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x38);
    lVar2 = (longlong)*(int *)(param_1 + 0x40) * 0x88;
    fVar4 = 0.0;
    do {
      fVar3 = (float)FUN_1405583ce(lVar1);
      fVar4 = fVar4 + fVar3;
      lVar1 = lVar1 + 0x88;
      lVar2 = lVar2 + -0x88;
    } while (lVar2 != 0);
  }
  return fVar4;
}



// FUNCTION 140f860e4 FUN_140f860e4 body=40 status=ok
// SIG undefined FUN_140f860e4(void)

undefined8 FUN_140f860e4(undefined8 param_1,int param_2)

{
  FUN_140f8610c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140f8610c FUN_140f8610c body=194 status=ok
// SIG undefined FUN_140f8610c(void)

void FUN_140f8610c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a4ffee0;
  param_1[5] = &PTR_FUN_14a500200;
  plVar3 = (longlong *)param_1[0xae];
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
  if (param_1[0xab] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xa9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xa7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xa5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xa3] != 0) {
    FUN_1400020a8();
  }
  FUN_140ffd6b6(param_1 + 0x30);
  FUN_140f861ce(param_1);
  return;
}



// FUNCTION 140f861ce FUN_140f861ce body=59 status=ok
// SIG undefined FUN_140f861ce(void)

void FUN_140f861ce(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a520560;
  param_1[5] = &PTR_LAB_14a520880;
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  FUN_140cdcfea(param_1);
  return;
}



// FUNCTION 140f86214 FUN_140f86214 body=269 status=ok
// SIG undefined FUN_140f86214(void)

undefined8 * FUN_140f86214(undefined8 *param_1)

{
  FUN_14480568a();
  *param_1 = &PTR_FUN_14ab72e70;
  param_1[5] = &PTR_FUN_14ab738a0;
  param_1[6] = &PTR_LAB_14ab738e0;
  param_1[0x55] = &PTR_FUN_14ab73930;
  param_1[0x56] = &PTR_FUN_14ab739b0;
  param_1[0x57] = &PTR_FUN_14ab739c0;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  *(undefined4 *)(param_1 + 0xc6) = 0xffffffff;
  *(byte *)((longlong)param_1 + 0x2d5) = *(byte *)((longlong)param_1 + 0x2d5) & 0xdf;
  *(undefined1 *)((longlong)param_1 + 0x1fb) = 0;
  FUN_140a18afe(param_1,0);
  *param_1 = &PTR_FUN_14ab74030;
  param_1[5] = &PTR_FUN_14ab74a60;
  param_1[6] = &PTR_LAB_14ab74aa0;
  param_1[0x55] = &PTR_FUN_14ab74af0;
  param_1[0x56] = &PTR_FUN_14ab74b70;
  param_1[0x57] = &PTR_FUN_14ab74b80;
  param_1[199] = 0;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  *(undefined4 *)(param_1 + 0xcf) = 0;
  param_1[0xd0] = 0;
  param_1[0xd1] = 0;
  return param_1;
}



// FUNCTION 140f86380 FUN_140f86380 body=1165 status=ok
// SIG undefined FUN_140f86380(void)

void FUN_140f86380(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  uint uVar3;
  DWORD DVar4;
  byte bVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  LPVOID pvVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  longlong *plVar15;
  void *_Dst;
  byte bVar16;
  ulonglong _Size;
  bool bVar17;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 *local_78;
  undefined8 local_70;
  longlong local_68;
  char local_60;
  undefined8 local_58;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar8 = (longlong *)FUN_1400796d0(param_1[2],*param_2,1);
  if (plVar8 != (longlong *)0x0) {
    DVar7 = DAT_14c7585d0;
    if (DAT_14c7585d0 == 0xffffffff) {
      DVar7 = TlsAlloc();
      DVar6 = 0xffffffff;
      LOCK();
      bVar17 = DAT_14c7585d0 != 0xffffffff;
      DVar4 = DVar7;
      if (bVar17) {
        DVar6 = DAT_14c7585d0;
        DVar4 = DAT_14c7585d0;
      }
      DAT_14c7585d0 = DVar4;
      UNLOCK();
      if (bVar17) {
        TlsFree(DVar7);
        DVar7 = DVar6;
      }
    }
    pvVar9 = TlsGetValue(DVar7);
    if (pvVar9 == (LPVOID)0x0) {
      pvVar9 = (LPVOID)FUN_140036a08(&local_78);
      FUN_140fddf04(pvVar9);
      TlsSetValue(DVar7,pvVar9);
    }
    local_78 = (undefined8 *)((longlong)pvVar9 + 0x10);
    local_70 = *(undefined8 *)((longlong)pvVar9 + 0x10);
    local_68 = *(longlong *)((longlong)pvVar9 + 0x20);
    local_60 = '\0';
    local_58 = *(undefined8 *)((longlong)pvVar9 + 0x28);
    *(undefined8 ***)((longlong)pvVar9 + 0x28) = &local_78;
    *(int *)((longlong)pvVar9 + 0x30) = *(int *)((longlong)pvVar9 + 0x30) + 1;
    _Size = (ulonglong)*(ushort *)((longlong)plVar8 + 0xb6);
    DVar7 = DAT_14c7585d0;
    if (DAT_14c7585d0 == 0xffffffff) {
      DVar7 = TlsAlloc();
      DVar6 = 0xffffffff;
      LOCK();
      bVar17 = DAT_14c7585d0 != 0xffffffff;
      DVar4 = DVar7;
      if (bVar17) {
        DVar6 = DAT_14c7585d0;
        DVar4 = DAT_14c7585d0;
      }
      DAT_14c7585d0 = DVar4;
      UNLOCK();
      if (bVar17) {
        TlsFree(DVar7);
        DVar7 = DVar6;
      }
    }
    pvVar9 = TlsGetValue(DVar7);
    if (pvVar9 == (LPVOID)0x0) {
      pvVar9 = (LPVOID)FUN_140036a08(&local_49);
      FUN_140fddf04(pvVar9);
      TlsSetValue(DVar7,pvVar9);
    }
    puVar1 = (ulonglong *)((longlong)pvVar9 + 0x10);
    _Dst = (void *)(*(longlong *)((longlong)pvVar9 + 0x10) + 0xfU & 0xfffffffffffffff0);
    uVar10 = (longlong)_Dst + _Size;
    if (*(ulonglong *)((longlong)pvVar9 + 0x18) < uVar10) {
      FUN_140023dd8(puVar1);
      _Dst = (void *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      uVar10 = (longlong)_Dst + _Size;
    }
    *puVar1 = uVar10;
    memset(_Dst,0,_Size);
    plVar11 = plVar8;
LAB_140f8648b:
    plVar15 = (longlong *)plVar11[10];
    while( true ) {
      if (plVar15 == (longlong *)0x0) goto LAB_140f864ac;
      if ((~*(uint *)(plVar15[1] + 0x18) & 0x8001) == 0) break;
      plVar15 = (longlong *)plVar15[3];
    }
    lVar12 = plVar15[7];
    if (-1 < (char)lVar12) goto LAB_140f86634;
    bVar16 = 0;
    local_80 = plVar11;
LAB_140f864f6:
    if (((uint)lVar12 >> 9 & 1) == 0) {
      (**(code **)(*plVar15 + 0x160))
                (plVar15,(longlong)*(int *)((longlong)plVar15 + 0x44) + (longlong)_Dst);
    }
    bVar5 = 1;
    if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
      lVar12 = plVar15[4];
      uVar3 = (uint)((ulonglong)lVar12 >> 0x10);
      uVar14 = (uint)lVar12 & 0xffff;
      plVar11 = (longlong *)param_3[8];
      if ((longlong *)param_3[8] == (longlong *)0x0) {
        plVar11 = param_3 + 7;
      }
      iVar13 = *(int *)((longlong)plVar11 +
                       (ulonglong)
                       ((int)param_3[9] - 1U &
                       (int)((ulonglong)lVar12 >> 0x20) + ((uint)lVar12 << 0x10 | uVar14) +
                       (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar14 >> 4)) * 4);
      if (iVar13 != -1) {
        do {
          lVar2 = *param_3 + (longlong)iVar13 * 0x38;
          if (*(longlong *)(*param_3 + (longlong)iVar13 * 0x38) == lVar12) {
            if (lVar2 + 8 != 0 && lVar2 != 0) {
              bVar5 = FUN_1470ee80c(lVar2 + 8,plVar15,
                                    (longlong)*(int *)((longlong)plVar15 + 0x44) + (longlong)_Dst,0)
              ;
              bVar5 = bVar5 ^ 1 | bVar16;
            }
            break;
          }
          iVar13 = *(int *)(lVar2 + 0x30);
        } while (iVar13 != -1);
      }
    }
    plVar15 = plVar15 + 3;
    do {
      for (plVar15 = (longlong *)*plVar15; plVar15 != (longlong *)0x0;
          plVar15 = (longlong *)plVar15[3]) {
        if ((~*(uint *)(plVar15[1] + 0x18) & 0x8001) == 0) {
          lVar12 = plVar15[7];
          bVar16 = bVar5;
          if ((char)lVar12 < '\0') goto LAB_140f864f6;
          goto LAB_140f8662e;
        }
      }
      if (*(code **)(*local_80 + 0x2b0) == (code *)&LAB_1446e8c94) {
        local_80 = (longlong *)local_80[8];
      }
      else {
        local_80 = (longlong *)(**(code **)(*local_80 + 0x2b0))(local_80);
      }
      plVar15 = local_80 + 10;
    } while (local_80 != (longlong *)0x0);
LAB_140f8662e:
    if ((bVar5 & 1) == 0) goto LAB_140f86634;
    goto LAB_140f86646;
  }
  goto LAB_140f86742;
LAB_140f864ac:
  if (*(code **)(*plVar11 + 0x2b0) == (code *)&LAB_1446e8c94) {
    plVar11 = (longlong *)plVar11[8];
  }
  else {
    plVar11 = (longlong *)(**(code **)(*plVar11 + 0x2b0))(plVar11);
  }
  if (plVar11 == (longlong *)0x0) goto LAB_140f86634;
  goto LAB_140f8648b;
LAB_140f86690:
  if ((char)plVar11[7] < '\0') {
    if (((ulonglong)plVar11[7] >> 0x24 & 1) == 0) {
      (**(code **)(*plVar11 + 0x148))
                (plVar11,(longlong)*(int *)((longlong)plVar11 + 0x44) + (longlong)_Dst);
    }
    plVar11 = plVar11 + 3;
    do {
      for (plVar11 = (longlong *)*plVar11; plVar11 != (longlong *)0x0;
          plVar11 = (longlong *)plVar11[3]) {
        if ((~*(uint *)(plVar11[1] + 0x18) & 0x8001) == 0) goto LAB_140f86690;
      }
      if (*(code **)(*plVar8 + 0x2b0) == (code *)&LAB_1446e8c94) {
        plVar8 = (longlong *)plVar8[8];
      }
      else {
        plVar8 = (longlong *)(**(code **)(*plVar8 + 0x2b0))(plVar8);
      }
      plVar11 = plVar8 + 10;
    } while (plVar8 != (longlong *)0x0);
  }
  goto LAB_140f86703;
LAB_140f86634:
  (**(code **)(*param_1 + 0x248))(param_1,plVar8,_Dst);
LAB_140f86646:
  do {
    for (plVar11 = (longlong *)plVar8[10]; plVar11 != (longlong *)0x0;
        plVar11 = (longlong *)plVar11[3]) {
      if ((~*(uint *)(plVar11[1] + 0x18) & 0x8001) == 0) goto LAB_140f86690;
    }
    if (*(code **)(*plVar8 + 0x2b0) == (code *)&LAB_1446e8c94) {
      plVar8 = (longlong *)plVar8[8];
    }
    else {
      plVar8 = (longlong *)(**(code **)(*plVar8 + 0x2b0))(plVar8);
    }
  } while (plVar8 != (longlong *)0x0);
LAB_140f86703:
  if (local_60 == '\0') {
    local_60 = '\x01';
    *(int *)(local_78 + 4) = *(int *)(local_78 + 4) + -1;
    if (local_68 != local_78[2]) {
      FUN_14004673c();
    }
    *local_78 = local_70;
    local_78[3] = local_58;
  }
LAB_140f86742:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f8680e FUN_140f8680e body=917 status=ok
// SIG undefined FUN_140f8680e(void)

/* WARNING: Removing unreachable block (ram,0x000140f86b9a) */

undefined8 FUN_140f8680e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1409ddd8e(param_2,param_3);
    if (param_3 != param_2) {
      local_78 = 0;
      uStack_70 = 0;
      iVar1 = *(int *)(param_3 + 0x100);
      if ((longlong)iVar1 != 0) {
        lVar2 = *(longlong *)(param_3 + 0xf8);
        lVar13 = 0;
        do {
          if ((*(int *)(lVar2 + 8 + lVar13) != 0) &&
             (plVar3 = *(longlong **)(lVar2 + lVar13), plVar3 != (longlong *)0x0)) {
            local_88 = 0;
            local_80 = 0;
            (**(code **)(*plVar3 + 0x40))();
            lVar14 = (longlong)(int)uStack_70;
            uVar11 = (int)uStack_70 + 1;
            uStack_70 = CONCAT44(uStack_70._4_4_,uVar11);
            if (uStack_70._4_4_ < uVar11) {
              FUN_1447a71f6(&local_78);
            }
            lVar14 = lVar14 * 0x10;
            *(undefined8 *)(local_78 + lVar14) = 0;
            *(undefined4 *)(local_78 + 8 + lVar14) = 0;
            *(undefined8 *)(local_78 + lVar14) = local_88;
            local_88 = 0;
            *(undefined4 *)(local_78 + 8 + lVar14) = local_80;
            local_80 = 0;
          }
          lVar13 = lVar13 + 0x10;
        } while ((longlong)iVar1 * 0x10 != lVar13);
      }
      FUN_1448a8284((longlong *)(param_2 + 0xf8));
      if (&local_78 == (longlong *)(param_2 + 0xf8)) {
        uVar12 = uStack_70 & 0xffffffff;
      }
      else {
        FUN_144760e21(*(undefined8 *)(param_2 + 0xf8),*(undefined4 *)(param_2 + 0x100));
        if (*(longlong *)(param_2 + 0xf8) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(param_2 + 0xf8) = local_78;
        local_78 = 0;
        *(int *)(param_2 + 0x100) = (int)uStack_70;
        *(uint *)(param_2 + 0x104) = uStack_70._4_4_;
        uStack_70 = 0;
        uVar12 = 0;
      }
      FUN_144760e21(local_78,uVar12);
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      FUN_1401b31d8(param_2 + 0x110,param_3 + 0x110);
      FUN_1401b31d8(param_2 + 0x128,param_3 + 0x128);
      FUN_1401b31d8(param_2 + 0x140,param_3 + 0x140);
      FUN_140f86ba4(param_2 + 0x158,param_3 + 0x158);
    }
    *(undefined4 *)(param_2 + 0x178) = *(undefined4 *)(param_3 + 0x174);
    FUN_14020a6cc(param_2 + 0x170,1);
    *(undefined4 *)(param_2 + 0x184) = *(undefined4 *)(param_3 + 0x180);
    FUN_14020a6cc(param_2 + 0x17c,1);
    *(undefined4 *)(param_2 + 400) = *(undefined4 *)(param_3 + 0x18c);
    FUN_14020a6cc(param_2 + 0x188,1);
    *(undefined4 *)(param_2 + 0x19c) = *(undefined4 *)(param_3 + 0x198);
    FUN_140841e14(param_2 + 0x194,1);
    *(undefined4 *)(param_2 + 0x1a8) = *(undefined4 *)(param_3 + 0x1a4);
    FUN_140841e14(param_2 + 0x1a0,1);
    uVar4 = *(undefined4 *)(param_3 + 0x1ac);
    uVar5 = *(undefined4 *)(param_3 + 0x1b0);
    uVar6 = *(undefined4 *)(param_3 + 0x1b4);
    uVar7 = *(undefined4 *)(param_3 + 0x1b8);
    uVar8 = *(undefined4 *)(param_3 + 0x1b9);
    uVar9 = *(undefined4 *)(param_3 + 0x1bd);
    uVar10 = *(undefined4 *)(param_3 + 0x1c1);
    *(undefined4 *)(param_2 + 0x1b5) = *(undefined4 *)(param_3 + 0x1b5);
    *(undefined4 *)(param_2 + 0x1b9) = uVar8;
    *(undefined4 *)(param_2 + 0x1bd) = uVar9;
    *(undefined4 *)(param_2 + 0x1c1) = uVar10;
    *(undefined4 *)(param_2 + 0x1ac) = uVar4;
    *(undefined4 *)(param_2 + 0x1b0) = uVar5;
    *(undefined4 *)(param_2 + 0x1b4) = uVar6;
    *(undefined4 *)(param_2 + 0x1b8) = uVar7;
    if (param_3 != param_2) {
      iVar1 = *(int *)(param_3 + 0x1d0);
      _Src = *(void **)(param_3 + 0x1c8);
      *(int *)(param_2 + 0x1d0) = iVar1;
      if (iVar1 == 0 && *(int *)(param_2 + 0x1d4) == 0) {
        *(undefined4 *)(param_2 + 0x1d4) = 0;
      }
      else {
        FUN_148c00848((undefined8 *)(param_2 + 0x1c8),iVar1);
        if (iVar1 != 0) {
          memcpy(*(void **)(param_2 + 0x1c8),_Src,(longlong)iVar1 << 5);
        }
      }
    }
    *(undefined2 *)(param_2 + 0x1d8) = *(undefined2 *)(param_3 + 0x1d8);
    *(undefined4 *)(param_2 + 0x1e4) = *(undefined4 *)(param_3 + 0x1e0);
    FUN_14020a6cc(param_2 + 0x1dc,1);
    param_3 = param_3 + 0x1e8;
    param_2 = param_2 + 0x1e8;
  }
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 140f86ba4 FUN_140f86ba4 body=404 status=ok
// SIG undefined FUN_140f86ba4(void)

/* WARNING: Removing unreachable block (ram,0x000140f86d32) */

void FUN_140f86ba4(longlong *param_1,longlong *param_2)

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
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f86d3a FUN_140f86d3a body=273 status=ok
// SIG undefined FUN_140f86d3a(void)

void FUN_140f86d3a(longlong param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140f86e4c();
  if (param_3 == 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc07ca0) {
      FUN_144b3d300(&DAT_14cc07ca0);
      if (DAT_14cc07ca0 == -1) {
        if (DAT_14cc079c8 == 0) {
          uVar4 = FUN_1408c25db();
          DAT_14cc079c8 = FUN_14171c317(FUN_1466ccfe2,uVar4,L"ERigBoneType");
        }
        DAT_14cc07c98 = DAT_14cc079c8;
        _Init_thread_footer(&DAT_14cc07ca0);
      }
    }
    local_28 = 0;
    (**(code **)(*param_2 + 0x160))(param_2,&local_28);
    lVar1 = DAT_14cc07c98;
    iVar3 = FUN_1448e5bf4(DAT_14cc07c98,local_28,0);
    if (iVar3 == -1) {
      uVar2 = 0xff;
    }
    else {
      uVar2 = *(undefined1 *)(*(longlong *)(lVar1 + 0x40) + 8 + (longlong)iVar3 * 0x10);
    }
    *(undefined1 *)(param_1 + 0x110) = uVar2;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f86e4c FUN_140f86e4c body=191 status=ok
// SIG undefined FUN_140f86e4c(void)

void FUN_140f86e4c(longlong param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [44];
  char local_2c [4];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140f8709c();
  if (param_3 == 1) {
    local_2c[0] = '\0';
    local_28 = 0;
    FUN_140f872f2(local_2c,param_2);
    if ((((uint)local_28._2_2_ < DAT_14c87eb08 + 1U) && (local_28 != 0)) && (local_2c[0] != '\0')) {
      uVar2 = *(undefined8 *)(param_1 + 8);
      uVar1 = FUN_140813180(uVar2,local_2c);
      uVar2 = FUN_141124d94(uVar2,uVar1);
      *(undefined8 *)(param_1 + 0x108) = uVar2;
    }
  }
  else if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f86f22 FUN_140f86f22 body=92 status=ok
// SIG undefined FUN_140f86f22(void)

void FUN_140f86f22(longlong param_1,undefined8 param_2,longlong param_3)

{
  FUN_140f86f7e(param_1,param_2,param_3 + 0x10);
  FUN_140f86f7e(param_1 + 0x10,param_2,param_3);
  FUN_140f86f7e(param_1 + 0x20,param_2,param_3 + 0x30);
  FUN_140f86f7e(param_1 + 0x30,param_2,param_3 + 0x20);
  return;
}



// FUNCTION 140f86f7e FUN_140f86f7e body=285 status=ok
// SIG undefined FUN_140f86f7e(void)

void FUN_140f86f7e(longlong param_1,longlong *param_2,longlong param_3)

{
  uint *puVar1;
  ulonglong *puVar2;
  char *pcVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_b8 [32];
  undefined8 local_98 [4];
  undefined1 local_78 [24];
  undefined8 local_60;
  undefined1 local_58 [24];
  undefined8 local_40;
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar6 = &DAT_14c846480;
  puVar7 = local_98;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  FUN_1400f4f7e(param_2);
  FUN_14480c34d(param_2,local_78);
  FUN_14480c34d(param_2,local_58);
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    local_60 = 0;
    local_40 = 0;
  }
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    local_34 = 0;
    (**(code **)(*param_2 + 0x170))(param_2,&local_34,4);
    uVar4 = local_34;
    if (1 < local_34) {
      FUN_14572541c(param_2);
      uVar4 = local_34;
    }
  }
  else {
    uVar4 = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (*(undefined8 **)(param_1 + 8) != (undefined8 *)0x0) {
    puVar6 = local_98;
    puVar7 = *(undefined8 **)(param_1 + 8);
    for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  pcVar3 = *(char **)(param_3 + 8);
  if ((pcVar3 != (char *)0x0) && ((bool)*pcVar3 != (uVar4 != 0))) {
    *pcVar3 = uVar4 != 0;
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f8709c FUN_140f8709c body=596 status=ok
// SIG undefined FUN_140f8709c(void)

void FUN_140f8709c(longlong param_1,longlong *param_2,int param_3)

{
  int *piVar1;
  undefined2 *puVar2;
  ulonglong *puVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_60;
  undefined8 local_58;
  int local_50;
  uint local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_3 == 0) {
    local_4c = local_4c & 0xffffff00;
    uStack_48 = 0;
    uStack_44 = 0;
    FUN_140f872f2(&local_4c);
    *(undefined4 *)(param_1 + 0x18) = uStack_44;
    *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_48,local_4c);
    *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x40) = 0;
    if (*(int *)(param_1 + 0x44) < 0) {
      FUN_1446f8c06((undefined8 *)(param_1 + 0x38),0);
    }
    puVar2 = *(undefined2 **)(param_1 + 0x38);
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
    iVar5 = FUN_1448332aa(param_2,&DAT_14bb76ef4);
    if ((0x13 < iVar5) && (iVar5 = FUN_1448332aa(param_2,&DAT_14bb76ef4), iVar5 < 0x1c)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cc07bf8) && (FUN_144b3d300(&DAT_14cc07bf8), DAT_14cc07bf8 == -1))
      {
        if (DAT_14cc079e0 == 0) {
          uVar8 = FUN_1408c25db();
          DAT_14cc079e0 = FUN_14171c317(FUN_1466cee30,uVar8,L"ERigMetadataType");
        }
        DAT_14cc07bf0 = DAT_14cc079e0;
        _Init_thread_footer(&DAT_14cc07bf8);
      }
      local_50 = 0;
      puVar3 = (ulonglong *)param_2[1];
      piVar1 = (int *)*puVar3 + 1;
      if ((int *)puVar3[1] < piVar1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_50,4);
        }
        else {
          FUN_14572512c(param_2,&local_50);
        }
      }
      else {
        local_50 = *(int *)*puVar3;
        *puVar3 = (ulonglong)piVar1;
      }
      if (0 < local_50) {
        iVar5 = 0;
        do {
          local_58 = 0;
          local_60 = 0;
          (**(code **)(*param_2 + 0x160))(param_2,&local_58);
          (**(code **)(*param_2 + 0x160))(param_2,&local_60);
          lVar4 = DAT_14cc07bf0;
          iVar6 = FUN_1448e5bf4(DAT_14cc07bf0,local_60,0);
          if (iVar6 == -1) {
            uVar8 = 0xffffffffffffffff;
          }
          else {
            uVar8 = *(undefined8 *)(*(longlong *)(lVar4 + 0x40) + 8 + (longlong)iVar6 * 0x10);
          }
          local_68 = 0;
          plVar7 = (longlong *)FUN_1491e0882(*(undefined8 *)(param_1 + 8),param_1,&local_58,uVar8);
          (**(code **)(*plVar7 + 8))(plVar7,param_2);
          iVar5 = iVar5 + 1;
        } while (iVar5 < local_50);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f872f2 FUN_140f872f2 body=329 status=ok
// SIG undefined FUN_140f872f2(void)

void FUN_140f872f2(undefined1 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(byte *)(param_2 + 5) & 4) != 0) || ((*(byte *)((longlong)param_2 + 0x2b) & 10) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc07be8) {
      FUN_144b3d300(&DAT_14cc07be8);
      if (DAT_14cc07be8 == -1) {
        if (DAT_14cc079b0 == 0) {
          uVar4 = FUN_1408c25db();
          DAT_14cc079b0 = FUN_14171c317(FUN_141906a4d,uVar4,L"ERigElementType");
        }
        DAT_14cc07be0 = DAT_14cc079b0;
        _Init_thread_footer(&DAT_14cc07be8);
      }
    }
    local_30 = 0;
    (**(code **)(*param_2 + 0x160))(param_2,&local_30);
    lVar1 = DAT_14cc07be0;
    iVar3 = FUN_1448e5bf4(DAT_14cc07be0,local_30,0);
    if (iVar3 == -1) {
      uVar2 = 0xff;
    }
    else {
      uVar2 = *(undefined1 *)(*(longlong *)(lVar1 + 0x40) + 8 + (longlong)iVar3 * 0x10);
    }
    *param_1 = uVar2;
    (**(code **)(*param_2 + 0x160))(param_2,param_1 + 4);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f87450 FUN_140f87450 body=164 status=ok
// SIG undefined FUN_140f87450(void)

undefined4
FUN_140f87450(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140f874f6(param_2,&local_40);
  if (local_40 == 0) {
    uVar3 = 0;
  }
  else {
    local_48 = param_4;
    uVar3 = FUN_140f87864(local_40,param_1,param_2,param_3);
  }
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
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f874f6 FUN_140f874f6 body=818 status=ok
// SIG undefined FUN_140f874f6(void)

longlong * FUN_140f874f6(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  longlong *plVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_68 [40];
  uint local_40;
  uint uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((((*(int *)(param_1 + 0x20) == 0) || (uVar4 = *(uint *)(param_1 + 0x1c), (int)uVar4 < 0)) ||
      (DAT_14c9647dc <= (int)uVar4)) ||
     (((lVar9 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8), lVar9 == 0 ||
       (*(int *)(lVar9 + 0x10) != *(int *)(param_1 + 0x20))) ||
      (((*(uint *)(lVar9 + 8) & 0x10200000) != 0 ||
       ((*(longlong *)(param_1 + 0x30) == 0 || (*(int *)(param_1 + 0x2c) == 0)))))))) {
LAB_140f87723:
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
  }
  uVar4 = *(uint *)(param_1 + 0x28);
  if (((int)uVar4 < 0) ||
     ((((DAT_14c9647dc <= (int)uVar4 ||
        (lVar9 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8), lVar9 == 0)) ||
       (*(int *)(lVar9 + 0x10) != *(int *)(param_1 + 0x2c))) ||
      (((*(uint *)(lVar9 + 8) & 0x10200000) != 0 || (lVar9 = FUN_140f8782a(), lVar9 == 0))))))
  goto LAB_140f87723;
  uStack_3c = 0;
  local_40 = *(uint *)(lVar9 + 0xc);
  if ((int)local_40 < DAT_14c9647dc) {
    lVar9 = (ulonglong)((local_40 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_40 >> 0x10) * 8);
  }
  else {
    lVar9 = 0;
  }
  uVar4 = *(uint *)(lVar9 + 0x10);
  if (*(uint *)(lVar9 + 0x10) == 0) {
    LOCK();
    iVar3 = DAT_14c964868 + 1;
    UNLOCK();
    uVar7 = DAT_14c964868 + 1;
    bVar10 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar3;
    if (bVar10) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    uVar7);
    }
    LOCK();
    uVar4 = *(uint *)(lVar9 + 0x10);
    bVar10 = uVar4 == 0;
    if (bVar10) {
      *(uint *)(lVar9 + 0x10) = uVar7;
      uVar4 = 0;
    }
    UNLOCK();
    if (bVar10) {
      uVar4 = uVar7;
    }
  }
  uStack_3c = uVar4;
  plVar5 = (longlong *)FUN_1407699b8(param_1 + 0x50,uVar4 ^ local_40);
  if (*plVar5 != 0) goto LAB_140f876f5;
  plVar6 = (longlong *)FUN_14001cc68(0x78,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14b3e7110;
  plVar6[2] = *(longlong *)(param_1 + 0x1c);
  lVar9 = *(longlong *)(param_1 + 0x30);
  plVar6[3] = *(longlong *)(param_1 + 0x28);
  plVar6[4] = lVar9;
  plVar6[9] = 0;
  *(undefined4 *)(plVar6 + 10) = 0;
  plVar6[5] = 0;
  plVar6[6] = 0;
  *(undefined8 *)((longlong)plVar6 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)plVar6 + 0x5c) = 0;
  plVar6[0xd] = 0;
  *(undefined4 *)(plVar6 + 0xe) = 0;
  if (plVar6 == (longlong *)0x0) {
    *plVar5 = 0x10;
    plVar8 = (longlong *)plVar5[1];
    if (plVar8 == (longlong *)0x0) goto LAB_140f876f5;
    plVar5[1] = 0;
LAB_140f87791:
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
    if (plVar6 == (longlong *)0x0) goto LAB_140f876f5;
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *plVar5 = (longlong)(plVar6 + 2);
    plVar8 = (longlong *)plVar5[1];
    if (plVar6 == plVar8) {
      LOCK();
      plVar8 = plVar6 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
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
    else {
      plVar5[1] = (longlong)plVar6;
      if (plVar8 != (longlong *)0x0) goto LAB_140f87791;
    }
  }
  LOCK();
  plVar8 = plVar6 + 1;
  *(int *)plVar8 = (int)*plVar8 + -1;
  UNLOCK();
  if ((int)*plVar8 == 0) {
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar2 = (int *)((longlong)plVar6 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
  }
LAB_140f876f5:
  *param_2 = *plVar5;
  lVar9 = plVar5[1];
  param_2[1] = lVar9;
  if (lVar9 != 0) {
    LOCK();
    *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
    UNLOCK();
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f8782a FUN_140f8782a body=57 status=ok
// SIG undefined FUN_140f8782a(void)

void FUN_140f8782a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb587d8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb587d8 = FUN_140002ddd(FUN_1464c21d8,uVar1,L"GbxActorPartState_Material");
  }
  return;
}



// FUNCTION 140f87864 FUN_140f87864 body=855 status=ok
// SIG undefined FUN_140f87864(void)

undefined4
FUN_140f87864(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             longlong *param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  byte bVar5;
  uint uVar6;
  undefined4 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  uStack_50 = 0;
  local_70 = param_1;
  local_68 = param_3;
  local_60 = param_4;
  if (0 < (int)param_2[1]) {
    lVar15 = 0;
    do {
      plVar8 = *(longlong **)(*param_2 + lVar15 * 8);
      if (plVar8 != (longlong *)0x0) {
        if (DAT_14c950c29 == 1) {
          FUN_1456cec3c(plVar8);
        }
        if ((DAT_14c950c29 & 1) != 0) {
          FUN_1456cec3c(plVar8);
        }
        if ((DAT_14c950c29 & 1) != 0) {
          FUN_1456cec3c(plVar8);
        }
        if ((DAT_14c950c29 & 1) != 0) {
          FUN_1456cec3c(plVar8);
        }
        if ((int)param_5[1] != *(int *)((longlong)param_5 + 0x34)) {
          uVar6 = ((uint)((ulonglong)plVar8 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar8 >> 4)) *
                  -0x7a143595;
          uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
          plVar10 = param_5 + 7;
          if ((longlong *)param_5[8] != (longlong *)0x0) {
            plVar10 = (longlong *)param_5[8];
          }
          iVar11 = *(int *)((longlong)plVar10 +
                           (ulonglong)((int)param_5[9] - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
          bVar5 = DAT_14c950c29;
          if (iVar11 != -1) {
LAB_140f87a4c:
            if ((bVar5 & 1) != 0) {
              FUN_1456cec3c(plVar8);
              bVar5 = DAT_14c950c29;
            }
            lVar12 = (longlong)iVar11 * 0x20;
            plVar10 = *(longlong **)(*param_5 + lVar12);
            if (((bVar5 & 1) != 0) && (plVar10 != (longlong *)0x0)) {
              FUN_1456cec3c(plVar10);
              bVar5 = DAT_14c950c29;
            }
            if ((bVar5 & 1) != 0) {
              FUN_1456cec3c(plVar8);
              bVar5 = DAT_14c950c29;
            }
            if (plVar10 != plVar8) goto code_r0x000140f87a8f;
            lVar12 = *param_5 + lVar12;
            if (((longlong *)(lVar12 + 8) != (longlong *)0x0 && lVar12 != 0) &&
               (0 < *(int *)(lVar12 + 0x10))) {
              lVar13 = 0;
              do {
                uVar4 = uStack_50;
                lVar1 = *(longlong *)(lVar12 + 8);
                lVar14 = (longlong)(int)uStack_50;
                uVar6 = (int)uStack_50 + 1;
                uStack_50 = CONCAT44(uStack_50._4_4_,uVar6);
                if (uStack_50._4_4_ < uVar6) {
                  FUN_140f87bbc(&local_58,uVar4 & 0xffffffff);
                }
                lVar2 = local_58;
                lVar1 = *(longlong *)(lVar1 + lVar13 * 8);
                *(longlong *)(local_58 + lVar14 * 0x18) = lVar1;
                if ((lVar1 != 0) && (DAT_14c950c29 != 0)) {
                  FUN_1456cec3c();
                }
                lVar2 = lVar2 + lVar14 * 0x18;
                *(undefined8 *)(lVar2 + 8) = 0;
                *(int *)(lVar2 + 0x10) = (int)lVar15;
                *(int *)(lVar2 + 0x14) = (int)lVar13;
                lVar13 = lVar13 + 1;
              } while (lVar13 < *(int *)(lVar12 + 0x10));
              goto LAB_140f8798e;
            }
          }
        }
LAB_140f878f4:
        plVar8 = (longlong *)(**(code **)(*plVar8 + 0x3b8))(plVar8);
        if (0 < (int)plVar8[1]) {
          lVar12 = 8;
          lVar13 = 0;
          do {
            uVar4 = uStack_50;
            lVar1 = *plVar8;
            lVar14 = (longlong)(int)uStack_50;
            uVar6 = (int)uStack_50 + 1;
            uStack_50 = CONCAT44(uStack_50._4_4_,uVar6);
            if (uStack_50._4_4_ < uVar6) {
              FUN_140f87bbc(&local_58,uVar4 & 0xffffffff);
            }
            lVar9 = local_58;
            lVar2 = *(longlong *)(lVar1 + -8 + lVar12);
            uVar3 = *(undefined8 *)(lVar1 + lVar12);
            *(longlong *)(local_58 + lVar14 * 0x18) = lVar2;
            if ((lVar2 != 0) && (DAT_14c950c29 != 0)) {
              FUN_1456cec3c();
            }
            lVar9 = lVar14 * 0x18 + lVar9;
            *(undefined8 *)(lVar9 + 8) = uVar3;
            *(int *)(lVar9 + 0x10) = (int)lVar15;
            *(int *)(lVar9 + 0x14) = (int)lVar13;
            lVar13 = lVar13 + 1;
            lVar12 = lVar12 + 0x28;
          } while (lVar13 < (int)plVar8[1]);
        }
      }
LAB_140f8798e:
      lVar15 = lVar15 + 1;
    } while (lVar15 < (int)param_2[1]);
  }
  uVar7 = FUN_140f87d32(local_70,&local_58,local_68,local_60);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
code_r0x000140f87a8f:
  iVar11 = *(int *)(*param_5 + 0x18 + lVar12);
  if (iVar11 == -1) goto LAB_140f878f4;
  goto LAB_140f87a4c;
}



// FUNCTION 140f87bbc FUN_140f87bbc body=373 status=ok
// SIG undefined FUN_140f87bbc(void)

void FUN_140f87bbc(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140f87c45;
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
LAB_140f87c45:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 140f87d32 FUN_140f87d32 body=9872 status=ok
// SIG undefined FUN_140f87d32(void)

uint FUN_140f87d32(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  byte bVar8;
  uint uVar9;
  longlong *plVar10;
  code *pcVar11;
  code *pcVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  uint *puVar16;
  longlong *plVar17;
  undefined8 uVar18;
  longlong lVar19;
  ulonglong uVar20;
  int iVar21;
  undefined1 *puVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  uint uVar25;
  int iVar26;
  ulonglong uVar27;
  int iVar28;
  ulonglong *puVar29;
  ulonglong uVar30;
  longlong *plVar31;
  longlong lVar32;
  longlong lVar33;
  ulonglong uVar34;
  int iVar35;
  code *pcVar36;
  int iVar37;
  uint uVar38;
  int iVar39;
  int iVar40;
  ulonglong *puVar41;
  uint uVar42;
  byte bVar43;
  longlong *plVar44;
  longlong lVar45;
  ulonglong *puVar46;
  bool bVar47;
  undefined1 auStack_3e8 [32];
  undefined4 local_3c8;
  undefined4 local_3c0;
  undefined4 local_3b8;
  undefined8 local_3b0;
  wchar_t *local_3a8;
  code *local_3a0;
  undefined1 *local_398;
  undefined8 *local_390;
  undefined1 *local_388;
  code *local_380;
  longlong local_370;
  longlong *local_368;
  longlong *local_360;
  longlong *local_358;
  uint local_34c;
  ulonglong local_348;
  longlong *local_340;
  longlong local_338;
  longlong local_330;
  uint *local_328;
  longlong *local_320;
  longlong *local_318;
  code *local_310;
  longlong *local_308;
  ulonglong local_300;
  longlong local_2f8;
  longlong *local_2f0;
  longlong local_2e8;
  undefined4 local_2e0;
  undefined1 local_2d9;
  ulonglong *local_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  longlong local_2b8;
  ulonglong uStack_2b0;
  undefined1 local_2a8 [16];
  longlong local_298;
  undefined4 local_290;
  uint local_28c;
  undefined4 uStack_288;
  undefined4 local_284;
  longlong local_278;
  undefined4 local_270;
  longlong *local_268;
  longlong local_258;
  undefined8 uStack_250;
  uint local_248 [4];
  uint *local_238;
  int local_230;
  uint local_22c;
  int iStack_228;
  int local_224;
  undefined1 local_220 [8];
  undefined1 *local_218;
  uint local_210;
  longlong local_208 [32];
  longlong *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 *local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8;
  undefined1 *local_d4;
  undefined1 *puStack_cc;
  undefined4 local_c4;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  ulonglong *puStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  longlong lStack_80;
  undefined8 local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_3e8;
  local_370 = param_1;
  if ((int)param_2[1] == 0) {
    uVar9 = 0;
    goto LAB_140f8a361;
  }
  local_108 = (longlong *)0x0;
  local_100 = 0x2000000000;
  lVar33 = *(longlong *)(param_3 + 0x40);
  if (lVar33 == 0) {
LAB_140f88bd7:
    uVar9 = 0;
  }
  else {
    FUN_140b38cc4();
    plVar10 = (longlong *)FUN_1403566f4(lVar33);
    lVar33 = plVar10[1];
    if ((longlong)(int)lVar33 == 0) goto LAB_140f88bd7;
    lVar13 = *plVar10;
    lVar45 = 0;
    local_368 = param_2;
    do {
      lVar19 = *(longlong *)(lVar13 + lVar45);
      FUN_140b38cc4();
      if ((lVar19 != 0) && (cVar7 = FUN_1448093f4(lVar19), cVar7 != '\0')) {
        lVar32 = (longlong)(int)local_100;
        uVar9 = (int)local_100 + 1;
        local_100 = CONCAT44(local_100._4_4_,uVar9);
        if (local_100._4_4_ < uVar9) {
          FUN_14577441c(local_208);
        }
        plVar10 = local_108;
        if (local_108 == (longlong *)0x0) {
          plVar10 = local_208;
        }
        plVar10[lVar32] = lVar19;
        param_2 = local_368;
      }
      lVar45 = lVar45 + 8;
    } while ((longlong)(int)lVar33 * 8 != lVar45);
    local_348 = CONCAT44(local_348._4_4_,(int)local_100);
    if ((int)local_100 == 0) goto LAB_140f88bd7;
    iVar37 = (int)param_2[1];
    local_360 = param_4;
    if (0 < iVar37) {
      lVar33 = 0;
      do {
        plVar10 = local_108;
        if (local_108 == (longlong *)0x0) {
          plVar10 = local_208;
        }
        if ((longlong)(int)local_100 != 0) {
          plVar44 = (longlong *)(lVar33 * 0x18 + *local_368);
          plVar17 = plVar10 + (int)local_100;
          do {
            lVar13 = *plVar10;
            if (lVar13 != 0) {
              if (*(int *)(lVar13 + 0x118) != *(int *)(lVar13 + 0x144)) {
                lVar45 = plVar44[1];
                uVar9 = (uint)((ulonglong)lVar45 >> 0x10);
                uVar38 = (uint)lVar45 & 0xffff;
                lVar19 = lVar13 + 0x148;
                if (*(longlong *)(lVar13 + 0x150) != 0) {
                  lVar19 = *(longlong *)(lVar13 + 0x150);
                }
                iVar37 = *(int *)(lVar19 + (ulonglong)
                                           (*(int *)(lVar13 + 0x158) - 1U &
                                           (int)((ulonglong)lVar45 >> 0x20) +
                                           ((uint)lVar45 << 0x10 | uVar38) +
                                           (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar38 >> 4)) * 4);
                if (iVar37 != -1) {
                  do {
                    lVar19 = *(longlong *)(lVar13 + 0x110) + (longlong)iVar37 * 0x38;
                    if (*(longlong *)(*(longlong *)(lVar13 + 0x110) + (longlong)iVar37 * 0x38) ==
                        lVar45) {
                      if (lVar19 != 0) {
                        lVar19 = lVar19 + 8;
                        goto LAB_140f87fb6;
                      }
                      break;
                    }
                    iVar37 = *(int *)(lVar19 + 0x30);
                  } while (iVar37 != -1);
                }
              }
              lVar19 = lVar13 + 0xe8;
              lVar45 = FUN_1402d20ea(lVar19);
              if (lVar45 != 0) {
                if (*(char *)(lVar13 + 0xb0) == '\x01') {
                  if ((longlong)*(int *)(lVar13 + 0xa8) != 0) {
                    lVar45 = 0;
                    do {
                      if (*(longlong *)(*(longlong *)(lVar13 + 0xa0) + lVar45) == plVar44[1])
                      goto LAB_140f87fb6;
                      lVar45 = lVar45 + 8;
                    } while ((longlong)*(int *)(lVar13 + 0xa8) * 8 != lVar45);
                  }
                }
                else {
LAB_140f87fb6:
                  if (*(longlong *)(lVar19 + 8) != 0) {
                    lVar13 = FUN_1402d20ea(lVar19);
                    if ((lVar13 != 0) && (DAT_14c950c29 != 0)) {
                      FUN_1456cec3c(lVar13);
                    }
                    *plVar44 = lVar13;
                  }
                }
              }
            }
            plVar10 = plVar10 + 1;
          } while (plVar10 != plVar17);
          iVar37 = (int)local_368[1];
        }
        lVar33 = lVar33 + 1;
      } while (lVar33 < iVar37);
      local_348 = CONCAT44(local_348._4_4_,(int)local_100);
    }
    local_340 = local_108;
    if (local_108 == (longlong *)0x0) {
      local_340 = local_208;
    }
    if (0 < (int)local_348) {
      pcVar36 = (code *)(local_348 & 0xffffffff);
      pcVar11 = (code *)0x1;
      do {
        if (((pcVar11 < pcVar36) && (*(longlong *)(local_340[(longlong)pcVar11] + 0x1a0) != 0)) &&
           (lVar33 = local_340[(longlong)(pcVar11 + -1)], *(longlong *)(lVar33 + 0x1a0) == 0)) {
          local_340[(longlong)(pcVar11 + -1)] = local_340[(longlong)pcVar11];
          local_340[(longlong)pcVar11] = lVar33;
        }
        pcVar12 = pcVar11 + 1;
        pcVar11 = pcVar11 + 2;
      } while (pcVar12 < pcVar36);
      if (2 < (int)local_348) {
        local_2f0 = local_340 + 1;
        uVar23 = 2;
        do {
          local_300 = uVar23;
          iVar37 = (int)local_300;
          uVar9 = iVar37 * 2;
          local_308 = (longlong *)CONCAT44(local_308._4_4_,uVar9);
          local_330 = (longlong)(int)uVar9;
          local_2e8 = local_330 * 8;
          lVar33 = 0;
          local_358 = local_2f0;
          do {
            local_2f8 = lVar33;
            uVar38 = (int)local_348 - (int)local_2f8;
            if ((int)uVar9 <= (int)uVar38) {
              uVar38 = uVar9;
            }
            if (iVar37 < (int)uVar38 && 0 < iVar37) {
              iVar21 = 0;
              uVar23 = local_300;
              while( true ) {
                iVar26 = (int)uVar23;
                iVar40 = 0;
                uVar25 = iVar26 - iVar21;
                if (uVar25 != 0 && iVar21 <= iVar26) {
                  iVar40 = 0;
                  uVar20 = (ulonglong)uVar25;
                  do {
                    uVar20 = uVar20 >> 1;
                    iVar28 = (uint)uVar20 + iVar40;
                    iVar39 = (uVar25 & 1) + iVar28;
                    iVar35 = iVar40;
                    if (*(longlong *)
                         (local_340[local_2f8 + (longlong)iVar21 + (longlong)iVar28] + 0x1a0) != 0)
                    {
                      iVar35 = iVar39;
                    }
                    iVar40 = iVar39;
                    if (*(longlong *)(local_340[local_2f8 + iVar26] + 0x1a0) != 0) {
                      iVar40 = iVar35;
                    }
                    bVar47 = 1 < uVar25;
                    uVar25 = (uint)uVar20;
                  } while (bVar47);
                }
                iVar40 = iVar40 + iVar21;
                if (iVar26 - iVar40 == 0 || iVar26 < iVar40) break;
                uVar25 = uVar38 - iVar26;
                if (uVar25 == 0 || (int)uVar38 < iVar26) {
                  iVar21 = 0;
                }
                else {
                  plVar10 = local_340 + local_2f8 + iVar40;
                  lVar33 = *plVar10;
                  iVar21 = 0;
                  uVar23 = (ulonglong)uVar25;
                  do {
                    uVar23 = uVar23 >> 1;
                    uVar42 = (uint)uVar23 + iVar21;
                    iVar35 = iVar21;
                    if (*(longlong *)((local_340 + local_2f8 + iVar26)[uVar42] + 0x1a0) != 0) {
                      iVar35 = uVar42 + (uVar25 & 1);
                    }
                    if (*(longlong *)(lVar33 + 0x1a0) == 0) {
                      iVar21 = iVar35;
                    }
                    bVar47 = 1 < uVar25;
                    uVar25 = (uint)uVar23;
                  } while (bVar47);
                  uVar23 = (ulonglong)(uint)(iVar26 + iVar21);
                  if (0 < iVar21) {
                    plVar17 = plVar10 + (iVar26 - iVar40);
                    plVar44 = local_358 + iVar40;
                    plVar14 = plVar17;
                    do {
                      plVar31 = plVar17 + 1;
                      plVar44[-1] = *plVar17;
                      *plVar17 = lVar33;
                      if (plVar31 == plVar10 + ((iVar26 + iVar21) - iVar40)) {
                        plVar17 = plVar14;
                        if (plVar44 == plVar14) break;
                      }
                      else {
                        plVar17 = plVar31;
                        if (plVar44 == plVar14) {
                          plVar14 = plVar31;
                        }
                      }
                      lVar33 = *plVar44;
                      plVar44 = plVar44 + 1;
                    } while( true );
                  }
                }
                if (((int)uVar38 <= (int)uVar23) ||
                   (iVar21 = iVar40 + iVar21 + 1, (int)uVar23 <= iVar21)) break;
              }
            }
            local_358 = local_358 + local_330;
            lVar33 = local_2f8 + local_330;
          } while (local_2f8 + local_330 < (longlong)pcVar36);
          uVar23 = (ulonglong)uVar9;
          local_310 = pcVar36;
        } while ((int)uVar9 < (int)local_348);
      }
    }
    local_238 = (uint *)0x0;
    local_230 = 0;
    local_258 = 0;
    uStack_250 = 0;
    local_22c = 0x80;
    iStack_228 = -1;
    local_224 = 0;
    local_218 = (undefined1 *)0x0;
    local_210 = 0;
    plVar10 = local_360;
    local_338 = param_3;
    if ((longlong)(int)local_360[1] != 0) {
      plVar44 = (longlong *)*local_360;
      plVar17 = plVar44 + (int)local_360[1];
      do {
        lVar33 = *plVar44;
        if (lVar33 != 0) {
          if (DAT_14caec470 == 0) {
            local_f8 = FUN_1417df956;
            local_380 = FUN_14081d0ea;
            local_388 = &LAB_1463eaa20;
            local_390 = &local_f8;
            local_398 = &LAB_147bbd9ea;
            local_3a0 = FUN_1401cf6d7;
            local_3a8 = L"Engine";
            local_3b0 = 0;
            local_3b8 = 0x10000000;
            local_3c0 = 8;
            local_3c8 = 0x330;
            FUN_14081cfa3(L"/Script/Engine",L"MaterialInstanceDynamic",&DAT_14caec470,FUN_1463eb22e)
            ;
          }
          if (((*(int *)(DAT_14caec470 + 0x38) <= *(int *)(*(longlong *)(lVar33 + 0x10) + 0x38)) &&
              (*(longlong *)
                (*(longlong *)(*(longlong *)(lVar33 + 0x10) + 0x30) +
                (longlong)*(int *)(DAT_14caec470 + 0x38) * 8) == DAT_14caec470 + 0x30)) &&
             (*(longlong *)(lVar33 + 0x110) != 0)) {
            FUN_141864840(&local_f8,lVar33 + 0x110);
            iVar37 = iStack_228;
            uVar23 = uStack_250;
            if (local_224 == 0) {
              iVar37 = (int)uStack_250;
              uStack_250 = CONCAT44(uStack_250._4_4_,(int)uStack_250 + 1);
              if (uStack_250._4_4_ == iVar37) {
                FUN_1447711aa(&local_258,uVar23 & 0xffffffff);
              }
              iVar21 = local_230;
              if (local_230 == 0) {
                iVar40 = -1;
              }
              else {
                iVar40 = local_230 + 0x1e;
                if (-1 < local_230 + -1) {
                  iVar40 = local_230 + -1;
                }
                iVar40 = iVar40 >> 5;
              }
              iVar26 = local_230 + 1;
              iVar35 = local_230 + 0x1f;
              if (-1 < local_230) {
                iVar35 = local_230;
              }
              if (iVar35 >> 5 == iVar40) {
                local_230 = iVar26;
              }
              else {
                if ((int)local_22c <= local_230) {
                  if (local_230 + 0x20U < 0xa0) {
                    local_22c = 0x80;
                  }
                  else {
                    uVar9 = local_230 + 0x20U >> 5;
                    local_358 = (longlong *)(ulonglong)uVar9;
                    if (local_22c + 0x1f < 0xa0) {
                      uVar38 = 4;
                      if (4 < uVar9) {
                        uVar38 = uVar9;
                      }
                    }
                    else {
                      uVar38 = uVar9 + (uVar9 * 3 >> 3) + 0x10;
                    }
                    uVar23 = (ulonglong)(uVar38 * 4);
                    if (DAT_14c872d28 != (longlong *)0x0) {
                      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                        uVar9 = (uint)(uVar23 + 0xf);
                        if (uVar38 < 0x1ffd) {
                          uVar23 = (ulonglong)
                                   (ushort)(&DAT_14c841d90)
                                           [0x32 - (byte)(&DAT_14c841e00)[uVar9 >> 4]];
                        }
                        else {
                          uVar20 = uVar23 + 0xf & 0xfffffffffffffff0;
                          if (uVar20 < 0x7ff1) {
                            bVar43 = (&DAT_14c841e00)[uVar9 >> 4];
                            uVar30 = 0x32;
                            if (0x32 < bVar43) {
                              uVar30 = (ulonglong)bVar43;
                            }
                            uVar24 = 0x32 - (ulonglong)bVar43;
                            do {
                              uVar23 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar24 & 0xffffffff];
                              if (((&DAT_14c841d90)[uVar24 & 0xffffffff] & 0xf) == 0)
                              goto LAB_140f889dc;
                              lVar13 = uVar30 + 1 + uVar24;
                              uVar24 = uVar24 - 1;
                            } while (lVar13 != 0x33);
                          }
                          uVar23 = (ulonglong)DAT_14c841df8;
                          if (DAT_14c841df8 < 0x11) {
                            uVar23 = 0x10;
                          }
                          uVar23 = -uVar23 & (uVar20 + uVar23) - 1;
                        }
                      }
                      else {
                        uVar23 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar23,0);
                      }
                    }
LAB_140f889dc:
                    iVar40 = (int)(uVar23 >> 2);
                    local_22c = iVar40 << 5;
                    if (iVar40 < (int)local_358) {
                      local_22c = 0xffffffe0;
                    }
                  }
                  FUN_1446efbd8(local_248,local_230);
                  iVar26 = local_230 + 1;
                }
                iVar40 = iVar26 + 0x1f;
                if (-1 < iVar26) {
                  iVar40 = iVar26;
                }
                local_230 = iVar26;
                if (iVar26 % 0x20 != 0) {
                  puVar16 = local_238;
                  if (local_238 == (uint *)0x0) {
                    puVar16 = local_248;
                  }
                  bVar43 = -(char)(iVar26 % 0x20);
                  puVar16[iVar40 >> 5] =
                       (puVar16[iVar40 >> 5] << (bVar43 & 0x1f)) >> (bVar43 & 0x1f);
                }
              }
              lVar13 = (longlong)iVar37;
              puVar16 = local_238;
              if (local_238 == (uint *)0x0) {
                puVar16 = local_248;
              }
              bVar43 = (byte)iVar21 & 0x1f;
              puVar16[iVar35 >> 5] =
                   puVar16[iVar35 >> 5] & (-2 << bVar43 | 0xfffffffeU >> 0x20 - bVar43);
            }
            else {
              lVar13 = (longlong)iStack_228;
              iStack_228 = *(int *)(local_258 + 4 + lVar13 * 0x20);
              local_224 = local_224 + -1;
              if (local_224 != 0) {
                *(undefined4 *)(local_258 + (longlong)iStack_228 * 0x20) = 0xffffffff;
              }
            }
            plVar10 = local_360;
            uVar9 = 1 << ((byte)iVar37 & 0x1f);
            puVar16 = local_238;
            if (local_238 == (uint *)0x0) {
              puVar16 = local_248;
            }
            iVar21 = iVar37 + 0x1f;
            if (-1 < iVar37) {
              iVar21 = iVar37;
            }
            puVar16[iVar21 >> 5] = puVar16[iVar21 >> 5] | uVar9;
            lVar13 = lVar13 * 0x20;
            puVar1 = (undefined4 *)(local_258 + lVar13);
            puVar2 = (undefined4 *)(local_258 + lVar13);
            *puVar2 = (undefined4)local_f8;
            puVar2[1] = local_f8._4_4_;
            puVar2[2] = (undefined4)uStack_f0;
            puVar2[3] = uStack_f0._4_4_;
            *(longlong *)(local_258 + 0x10 + lVar13) = lVar33;
            *(undefined4 *)(local_258 + 0x18 + lVar13) = 0xffffffff;
            uVar38 = (uint)((ulonglong)*(undefined8 *)(local_258 + lVar13) >> 0x20) ^
                     (uint)*(undefined8 *)(local_258 + lVar13);
            uVar25 = (int)uStack_250 - local_224;
            if ((uVar25 != 0) && (uVar25 != 1)) {
              puVar22 = local_218;
              if (local_218 == (undefined1 *)0x0) {
                puVar22 = local_220;
              }
              iVar40 = *(int *)(puVar22 + (ulonglong)(local_210 - 1 & uVar38) * 4);
              if (iVar40 != -1) {
                do {
                  puVar2 = (undefined4 *)(local_258 + (longlong)iVar40 * 0x20);
                  if (*(longlong *)(local_258 + 8 + (longlong)iVar40 * 0x20) ==
                      *(longlong *)(puVar1 + 2)) {
                    uVar3 = *puVar1;
                    uVar4 = puVar1[1];
                    uVar5 = puVar1[2];
                    uVar6 = puVar1[3];
                    *(undefined8 *)(puVar2 + 4) = *(undefined8 *)(puVar1 + 4);
                    *puVar2 = uVar3;
                    puVar2[1] = uVar4;
                    puVar2[2] = uVar5;
                    puVar2[3] = uVar6;
                    if (local_224 != 0) {
                      *(int *)(local_258 + (longlong)iStack_228 * 0x20) = iVar37;
                    }
                    *(undefined4 *)(local_258 + (longlong)iVar37 * 0x20) = 0xffffffff;
                    iVar40 = -1;
                    if (0 < local_224) {
                      iVar40 = iStack_228;
                    }
                    *(int *)(local_258 + (longlong)iVar37 * 0x20 + 4) = iVar40;
                    iStack_228 = iVar37;
                    local_224 = local_224 + 1;
                    puVar16 = local_238;
                    if (local_238 == (uint *)0x0) {
                      puVar16 = local_248;
                    }
                    puVar16[iVar21 >> 5] = puVar16[iVar21 >> 5] & ~uVar9;
                    goto LAB_140f883a0;
                  }
                  iVar40 = puVar2[6];
                } while (iVar40 != -1);
              }
            }
            uVar9 = 1;
            if (3 < uVar25) {
              uVar23 = (ulonglong)(uVar25 & 0xfffffffe) + 0xf;
              lVar33 = 0x3f;
              if (uVar23 != 0) {
                for (; uVar23 >> lVar33 == 0; lVar33 = lVar33 + -1) {
                }
              }
              uVar9 = 1 << ((byte)lVar33 & 0x1f);
            }
            if (((int)uVar25 < 1) || ((int)uVar9 <= (int)local_210)) {
              uVar38 = local_210 - 1 & uVar38;
              puVar1[7] = uVar38;
              puVar22 = local_218;
              if (local_218 == (undefined1 *)0x0) {
                puVar22 = local_220;
              }
              puVar1[6] = *(undefined4 *)
                           (puVar22 + ((longlong)(int)local_210 - 1U & (longlong)(int)uVar38) * 4);
              puVar22 = local_218;
              if (local_218 == (undefined1 *)0x0) {
                puVar22 = local_220;
              }
              *(int *)(puVar22 + ((longlong)(int)local_210 - 1U & (longlong)(int)uVar38) * 4) =
                   iVar37;
            }
            else {
              local_210 = uVar9;
              if (local_218 != (undefined1 *)0x0) {
                FUN_1446efa72(&local_218,0,0,4);
              }
              uVar9 = local_210;
              if (local_210 == 1) {
                if (local_218 != (undefined1 *)0x0) {
                  FUN_1446efa72(&local_218,0,0,4);
                }
LAB_140f88738:
                uVar38 = 0;
                do {
                  puVar22 = local_218;
                  if (local_218 == (undefined1 *)0x0) {
                    puVar22 = local_220;
                  }
                  *(undefined4 *)(puVar22 + (ulonglong)(local_210 + 0x7fffffff & uVar38) * 4) =
                       0xffffffff;
                  uVar38 = uVar38 + 1;
                } while (uVar9 != uVar38);
              }
              else {
                if (local_210 == 0) goto LAB_140f883a0;
                FUN_1446efa72(&local_218,0,local_210,4);
                if (0 < (int)uVar9) goto LAB_140f88738;
              }
              if (local_230 == 0) {
                uVar23 = 0;
                uVar20 = 1;
                iVar37 = 0;
                iVar21 = 0;
              }
              else {
                puVar16 = local_238;
                if (local_238 == (uint *)0x0) {
                  puVar16 = local_248;
                }
                uVar9 = *puVar16;
                if (uVar9 == 0) {
                  iVar37 = local_230 + 0x1e;
                  if (-1 < local_230 + -1) {
                    iVar37 = local_230 + -1;
                  }
                  uVar23 = 0;
                  uVar20 = (ulonglong)(uint)(iVar37 >> 5);
                  if (iVar37 >> 5 < 1) {
                    uVar20 = uVar23;
                  }
                  iVar21 = 0;
                  do {
                    if (uVar20 == uVar23) goto LAB_140f883a0;
                    iVar21 = iVar21 + 0x20;
                    uVar9 = puVar16[uVar23 + 1];
                    uVar23 = uVar23 + 1;
                  } while (uVar9 == 0);
                }
                else {
                  uVar23 = 0;
                  iVar21 = 0;
                }
                uVar20 = (ulonglong)(-uVar9 & uVar9);
                uVar30 = uVar20 * 2 + 1;
                lVar33 = 0x3f;
                if (uVar30 != 0) {
                  for (; uVar30 >> lVar33 == 0; lVar33 = lVar33 + -1) {
                  }
                }
                iVar37 = (iVar21 - ((uint)lVar33 ^ 0x3f)) + 0x3e;
                if (local_230 <= iVar37) {
                  iVar37 = local_230;
                }
              }
              if (iVar37 < local_230) {
                uVar9 = 0xffffffff;
                do {
                  lVar33 = (longlong)iVar37 * 0x20;
                  uVar30 = (longlong)
                           (int)((uint)((ulonglong)*(undefined8 *)(local_258 + lVar33) >> 0x20) ^
                                (uint)*(undefined8 *)(local_258 + lVar33)) &
                           (longlong)(int)local_210 - 1U;
                  iVar40 = (int)uVar30;
                  *(int *)(local_258 + 0x1c + lVar33) = iVar40;
                  puVar22 = local_218;
                  if (local_218 == (undefined1 *)0x0) {
                    puVar22 = local_220;
                  }
                  *(undefined4 *)(local_258 + 0x18 + lVar33) =
                       *(undefined4 *)(puVar22 + ((longlong)(int)local_210 - 1U & uVar30) * 4);
                  puVar22 = local_218;
                  if (local_218 == (undefined1 *)0x0) {
                    puVar22 = local_220;
                  }
                  *(int *)(puVar22 + ((longlong)iVar40 & (longlong)(int)local_210 - 1U) * 4) =
                       iVar37;
                  uVar9 = ~(uint)uVar20 & uVar9;
                  puVar16 = local_238;
                  if (local_238 == (uint *)0x0) {
                    puVar16 = local_248;
                  }
                  iVar37 = (int)uVar23;
                  lVar33 = (longlong)iVar37;
                  uVar38 = puVar16[lVar33] & uVar9;
                  plVar10 = local_360;
                  if (uVar38 == 0) {
                    iVar40 = local_230 + 0x1e;
                    if (-1 < local_230 + -1) {
                      iVar40 = local_230 + -1;
                    }
                    iVar40 = iVar40 >> 5;
                    iVar26 = iVar40;
                    if (iVar40 < iVar37) {
                      iVar26 = iVar37;
                    }
                    if (iVar40 <= iVar37) break;
                    lVar13 = 0;
                    while( true ) {
                      iVar21 = iVar21 + 0x20;
                      uVar38 = puVar16[lVar33 + lVar13 + 1];
                      if (uVar38 != 0) break;
                      lVar13 = lVar13 + 1;
                      if (iVar26 - lVar33 == lVar13) goto LAB_140f883a0;
                    }
                    uVar23 = (ulonglong)(iVar37 + (int)lVar13 + 1);
                    uVar9 = 0xffffffff;
                  }
                  uVar20 = (ulonglong)(-uVar38 & uVar38);
                  uVar30 = uVar20 * 2 + 1;
                  lVar33 = 0x3f;
                  if (uVar30 != 0) {
                    for (; uVar30 >> lVar33 == 0; lVar33 = lVar33 + -1) {
                    }
                  }
                  iVar37 = (iVar21 - ((uint)lVar33 ^ 0x3f)) + 0x3e;
                } while (iVar37 < local_230);
              }
            }
          }
        }
LAB_140f883a0:
        plVar44 = plVar44 + 1;
      } while (plVar44 != plVar17);
    }
    plVar17 = local_368;
    if ((int)local_368[1] < 1) {
      local_34c = 0;
    }
    else {
      local_318 = (longlong *)(local_370 + 0x18);
      plVar44 = (longlong *)(local_370 + 0x50);
      local_320 = (longlong *)(local_370 + 0x58);
      local_328 = (uint *)(local_370 + 0x28);
      lVar13 = 0;
      local_34c = 0;
      lVar33 = local_338;
      local_340 = plVar44;
      do {
        local_2e8 = lVar13 * 3;
        local_358 = (longlong *)(lVar13 * 0x18 + *plVar17);
        plVar10 = local_108;
        if (local_108 == (longlong *)0x0) {
          plVar10 = local_208;
        }
        puVar29 = (ulonglong *)0x0;
        local_330 = lVar13;
        if ((longlong)(int)local_100 != 0) {
          puVar29 = (ulonglong *)((longlong)(int)local_100 * 8);
          puVar41 = (ulonglong *)0x0;
          do {
            if (*(longlong *)((longlong)plVar10 + (longlong)puVar41) != 0) {
              uVar9 = *(uint *)((longlong)local_358 + 0x14);
              lVar13 = FUN_140cd3166(*(longlong *)((longlong)plVar10 + (longlong)puVar41) + 0x198);
              if (((lVar13 != 0) && (-1 < (int)uVar9)) && ((int)uVar9 < *(int *)(lVar13 + 0x38))) {
                lVar13 = *(longlong *)(lVar13 + 0x30);
                lVar45 = *(longlong *)(lVar13 + (ulonglong)uVar9 * 8);
                if (lVar45 != 0) {
                  if (DAT_14c950c29 == 1) {
                    FUN_1456cec3c();
                    lVar45 = *(longlong *)(lVar13 + (ulonglong)uVar9 * 8);
                  }
                  *local_358 = lVar45;
                }
              }
            }
            puVar41 = puVar41 + 1;
          } while (puVar29 != puVar41);
        }
        FUN_141864840(&local_f8);
        local_348 = uStack_f0;
        uVar9 = (uint)((ulonglong)local_f8 >> 0x20);
        plVar17 = local_368;
        plVar10 = local_360;
        if (*(int *)(local_370 + 0x20) != *(int *)(local_370 + 0x4c)) {
          plVar14 = *(longlong **)(local_370 + 0x58);
          if (*(longlong **)(local_370 + 0x58) == (longlong *)0x0) {
            plVar14 = plVar44;
          }
          iVar37 = *(int *)((longlong)plVar14 +
                           (ulonglong)(*(int *)(local_370 + 0x60) - 1U & (uVar9 ^ (uint)local_f8)) *
                           4);
          if (iVar37 != -1) {
            lVar13 = *local_318;
            do {
              if (*(ulonglong *)(lVar13 + 8 + (longlong)iVar37 * 0x20) == uStack_f0) {
                local_34c = (uint)CONCAT71((int7)((ulonglong)lVar13 >> 8),1);
                goto LAB_140f898b6;
              }
              iVar37 = *(int *)((longlong)iVar37 * 0x20 + lVar13 + 0x18);
            } while (iVar37 != -1);
          }
        }
        local_310 = local_f8;
        if ((int)uStack_250 != local_224) {
          puVar22 = local_218;
          if (local_218 == (undefined1 *)0x0) {
            puVar22 = local_220;
          }
          iVar37 = *(int *)(puVar22 + (ulonglong)(local_210 - 1 & (uVar9 ^ (uint)local_f8)) * 4);
          while (iVar37 != -1) {
            lVar13 = local_258 + (longlong)iVar37 * 0x20;
            if (*(ulonglong *)(local_258 + 8 + (longlong)iVar37 * 0x20) == uStack_f0) {
              if ((undefined8 *)(lVar13 + 0x10) != (undefined8 *)0x0 && lVar13 != 0) {
                plVar14 = *(longlong **)(lVar13 + 0x10);
                goto LAB_140f88eff;
              }
              break;
            }
            iVar37 = *(int *)(lVar13 + 0x18);
          }
        }
        plVar14 = (longlong *)*local_358;
        if (plVar14 == (longlong *)0x0) {
LAB_140f88e94:
          plVar10 = local_360;
          plVar17 = local_368;
          plVar14 = (longlong *)FUN_14090ceee();
LAB_140f88eff:
          plVar44 = local_340;
          if (plVar14 != (longlong *)0x0) goto LAB_140f88f08;
        }
        else {
          if (DAT_14caec470 == 0) {
            local_f8 = FUN_1417df956;
            local_380 = FUN_14081d0ea;
            local_388 = &LAB_1463eaa20;
            local_390 = &local_f8;
            local_398 = &LAB_147bbd9ea;
            local_3a0 = FUN_1401cf6d7;
            local_3a8 = L"Engine";
            local_3b0 = 0;
            local_3b8 = 0x10000000;
            local_3c0 = 8;
            local_3c8 = 0x330;
            FUN_14081cfa3(L"/Script/Engine");
            plVar14 = (longlong *)*local_358;
            lVar33 = local_338;
            if (plVar14 == (longlong *)0x0) goto LAB_140f88e94;
          }
          if (((DAT_14caec470 == 0) || (lVar13 = plVar14[2], lVar13 == 0)) ||
             ((*(int *)(lVar13 + 0x38) < *(int *)(DAT_14caec470 + 0x38) ||
              (plVar17 = local_368, plVar10 = local_360,
              *(longlong *)
               (*(longlong *)(lVar13 + 0x30) + (longlong)*(int *)(DAT_14caec470 + 0x38) * 8) !=
              DAT_14caec470 + 0x30)))) goto LAB_140f88e94;
LAB_140f88f08:
          local_298 = 0;
          local_290 = 0;
          local_2b8 = 0;
          uStack_2b0 = 0;
          local_28c = 0x80;
          uStack_288 = 0xffffffff;
          local_284 = 0;
          local_278 = 0;
          local_270 = 0;
          plVar31 = local_108;
          if (local_108 == (longlong *)0x0) {
            plVar31 = local_208;
          }
          plVar44 = local_340;
          local_2f0 = plVar14;
          local_268 = plVar14;
          if ((longlong)(int)local_100 != 0) {
            local_308 = plVar31 + (int)local_100;
            local_358 = local_358 + 1;
            uVar9 = 0;
            do {
              lVar13 = *plVar31;
              if (lVar13 != 0) {
                local_2f8 = CONCAT44(local_2f8._4_4_,uVar9);
                if (*(char *)(lVar13 + 0xb0) == '\x01') {
                  if ((longlong)*(int *)(lVar13 + 0xa8) != 0) {
                    lVar45 = 0;
                    do {
                      if (*(longlong *)(*(longlong *)(lVar13 + 0xa0) + lVar45) == *local_358)
                      goto LAB_140f88ff9;
                      lVar45 = lVar45 + 8;
                    } while ((longlong)*(int *)(lVar13 + 0xa8) * 8 != lVar45);
                  }
                  puVar29 = (ulonglong *)0x0;
                }
                else {
LAB_140f88ff9:
                  puVar15 = (undefined8 *)FUN_1418647c2(lVar33);
                  if ((longlong)*(int *)(puVar15 + 1) == 0) {
                    puVar41 = (ulonglong *)0x0;
                  }
                  else {
                    puVar41 = (ulonglong *)*puVar15;
                    lVar33 = (longlong)*(int *)(puVar15 + 1) * 0x28;
                    do {
                      pcVar11 = (code *)*puVar41;
                      puVar29 = *(ulonglong **)(lVar13 + 8);
                      if (puVar29 == (ulonglong *)0x0) {
                        puVar29 = (ulonglong *)&DAT_14c9485f0;
                      }
                      if (DAT_14c947fe0 == 0) {
                        lVar45 = FUN_14001cc68(0x140,0x10);
                        FUN_1456b2032(lVar45);
                        DAT_14c947fe0 = lVar45;
                      }
                      FUN_140045924(DAT_14c947fe0,&local_f8,puVar29,1);
                      plVar10 = local_360;
                      if (pcVar11 == local_f8) goto LAB_140f8909d;
                      puVar41 = puVar41 + 5;
                      lVar33 = lVar33 + -0x28;
                    } while (lVar33 != 0);
                    puVar41 = (ulonglong *)0x0;
                  }
LAB_140f8909d:
                  local_2d9 = 0;
                  local_2e0 = 0;
                  local_f8 = (code *)0x0;
                  local_2d8 = puVar41;
                  local_e8 = (undefined8 *)FUN_14001cc68(0x30,8);
                  *local_e8 = &PTR_FUN_14b3e7170;
                  local_e8[1] = local_358;
                  local_e8[2] = &local_2d8;
                  local_e8[3] = &local_2e0;
                  local_e8[4] = &local_2b8;
                  local_e8[5] = &local_2d9;
                  if (local_e8 + 1 != (longlong *)0x0) {
                    local_f8 = FUN_143c999ce;
                  }
                  FUN_140b38cfe(lVar13);
                  puVar29 = (ulonglong *)CONCAT71((int7)((ulonglong)puVar29 >> 8),local_2d9);
                }
                lVar33 = FUN_140c01bae(lVar13 + 0x1c0);
                local_300 = CONCAT44(local_300._4_4_,(int)puVar29);
                if ((lVar33 == 0) || (*(int *)(lVar33 + 0x38) <= (int)local_330)) {
                  bVar43 = 0;
                }
                else {
                  lVar33 = *(longlong *)(lVar33 + 0x30);
                  lVar45 = local_2e8 * 0x10;
                  lVar13 = (longlong)*(int *)(lVar33 + 8 + lVar45);
                  if (lVar13 == 0) {
                    bVar43 = 0;
                  }
                  else {
                    puVar41 = *(ulonglong **)(lVar33 + lVar45);
                    puVar29 = (ulonglong *)((longlong)puVar41 + lVar13 * 0xc);
                    bVar43 = 0;
                    do {
                      local_e8 = (undefined8 *)0x0;
                      uStack_e0 = 0;
                      uStack_f0 = 0;
                      local_d4 = &DAT_3f8000003f800000;
                      puStack_cc = &DAT_3f8000003f800000;
                      local_b8 = 0;
                      uStack_b0 = 0;
                      local_a8 = 0;
                      puStack_a0 = (ulonglong *)0x0;
                      local_98 = 0;
                      uStack_90 = 0;
                      local_88 = 0;
                      lStack_80 = 0;
                      local_78 = 0;
                      local_f8 = (code *)*puVar41;
                      local_d8 = 2;
                      local_c4 = (undefined4)puVar41[1];
                      bVar8 = FUN_1408328ae(&local_2b8);
                      if (lStack_80 != 0) {
                        FUN_1400020a8();
                      }
                      if (uStack_90 != 0) {
                        FUN_1400020a8();
                      }
                      if (local_e8 != (undefined8 *)0x0) {
                        FUN_1400020a8();
                      }
                      bVar43 = bVar43 | bVar8;
                      puVar41 = (ulonglong *)((longlong)puVar41 + 0xc);
                    } while (puVar41 != puVar29);
                  }
                  plVar10 = local_360;
                  lVar33 = lVar33 + lVar45;
                  if ((longlong)*(int *)(lVar33 + 0x18) != 0) {
                    puVar29 = *(ulonglong **)(lVar33 + 0x10);
                    puVar41 = puVar29 + (longlong)*(int *)(lVar33 + 0x18) * 3;
                    do {
                      local_e8 = (undefined8 *)0x0;
                      uStack_e0 = 0;
                      uStack_f0 = 0;
                      local_c4 = 0;
                      local_88 = 0;
                      lStack_80 = 0;
                      local_98 = 0;
                      uStack_90 = 0;
                      local_a8 = 0;
                      puStack_a0 = (ulonglong *)0x0;
                      local_b8 = 0;
                      uStack_b0 = 0;
                      local_78 = 0;
                      local_f8 = (code *)*puVar29;
                      local_d8 = 1;
                      local_d4 = (undefined1 *)puVar29[1];
                      puStack_cc = (undefined1 *)puVar29[2];
                      bVar8 = FUN_1408328ae(&local_2b8);
                      if (lStack_80 != 0) {
                        FUN_1400020a8();
                      }
                      if (uStack_90 != 0) {
                        FUN_1400020a8();
                      }
                      if (local_e8 != (undefined8 *)0x0) {
                        FUN_1400020a8();
                      }
                      bVar43 = bVar43 | bVar8;
                      puVar29 = puVar29 + 3;
                    } while (puVar29 != puVar41);
                  }
                  if ((longlong)*(int *)(lVar33 + 0x28) != 0) {
                    puVar41 = *(ulonglong **)(lVar33 + 0x20);
                    puVar46 = puVar41 + (longlong)*(int *)(lVar33 + 0x28) * 2;
                    do {
                      local_e8 = (undefined8 *)0x0;
                      uStack_e0 = 0;
                      uStack_f0 = 0;
                      local_d4 = &DAT_3f8000003f800000;
                      puStack_cc = &DAT_3f8000003f800000;
                      local_c4 = 0;
                      local_88 = 0;
                      lStack_80 = 0;
                      local_98 = 0;
                      uStack_90 = 0;
                      local_a8 = 0;
                      puStack_a0 = (ulonglong *)0x0;
                      local_b8 = 0;
                      uStack_b0 = 0;
                      local_78 = 0;
                      local_f8 = (code *)*puVar41;
                      local_d8 = 4;
                      uVar23 = puVar41[1];
                      if ((DAT_14c950c29 == 1) && (uVar23 != 0)) {
                        FUN_1456cec3c(uVar23);
LAB_140f8940e:
                        FUN_1400bbfc4(&local_2d8,uVar23);
                        puStack_a0 = local_2d8;
                        local_98 = CONCAT44(uStack_2cc,uStack_2d0);
                        if (uStack_90 != 0) {
                          FUN_1400020a8();
                        }
                        uStack_90 = CONCAT44(uStack_2c4,local_2c8);
                        local_88 = CONCAT44(uStack_2bc,uStack_2c0);
                        cVar7 = (*(code *)PTR_FUN_14c758760)();
                        uVar9 = *(uint *)(uVar23 + 0xc);
                        if (cVar7 != '\0') {
                          if ((int)uVar9 < DAT_14c9647dc) {
                            lVar33 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
                          }
                          else {
                            lVar33 = 0;
                          }
                          if ((*(uint *)(lVar33 + 8) & 0x8400000) != 0) {
                            local_a8 = 0;
                            goto LAB_140f894e9;
                          }
                        }
                        local_a8 = CONCAT44(local_a8._4_4_,uVar9);
                        if ((int)uVar9 < DAT_14c9647dc) {
                          puVar29 = (ulonglong *)
                                    ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8));
                        }
                        else {
                          puVar29 = (ulonglong *)0x0;
                        }
                        iVar37 = (int)puVar29[2];
                        if ((int)puVar29[2] == 0) {
                          LOCK();
                          iVar37 = DAT_14c964868 + 1;
                          UNLOCK();
                          iVar21 = DAT_14c964868 + 1;
                          bVar47 = DAT_14c964868 < 1000;
                          DAT_14c964868 = iVar37;
                          if (bVar47) {
                            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",
                                          0x23d,
                                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                          ,iVar21);
                          }
                          LOCK();
                          iVar37 = (int)puVar29[2];
                          bVar47 = iVar37 == 0;
                          if (bVar47) {
                            *(int *)(puVar29 + 2) = iVar21;
                            iVar37 = 0;
                          }
                          UNLOCK();
                          if (bVar47) {
                            iVar37 = iVar21;
                          }
                        }
                        local_a8 = CONCAT44(iVar37,(undefined4)local_a8);
                      }
                      else {
                        if (uVar23 != 0) goto LAB_140f8940e;
                        local_a8 = 0;
                        puStack_a0 = (ulonglong *)0x0;
                        local_98 = 0;
                        local_88 = 0;
                      }
LAB_140f894e9:
                      bVar8 = FUN_1408328ae(&local_2b8);
                      if (lStack_80 != 0) {
                        FUN_1400020a8();
                      }
                      if (uStack_90 != 0) {
                        FUN_1400020a8();
                      }
                      if (local_e8 != (undefined8 *)0x0) {
                        FUN_1400020a8();
                      }
                      bVar43 = bVar43 | bVar8;
                      puVar41 = puVar41 + 2;
                    } while (puVar41 != puVar46);
                  }
                }
                uVar9 = CONCAT31((int3)((ulonglong)local_2f8 >> 8),
                                 (byte)local_2f8 | (byte)local_300 | bVar43);
                lVar33 = local_338;
              }
              plVar31 = plVar31 + 1;
            } while (plVar31 != local_308);
            plVar44 = local_340;
            plVar17 = local_368;
            if ((uVar9 & 1) != 0) {
              if (local_2f0 == (longlong *)0x0) {
                uVar23 = 0;
                uVar20 = 0;
              }
              else {
                uVar9 = *(uint *)((longlong)local_2f0 + 0xc);
                uVar23 = (ulonglong)uVar9;
                if ((int)uVar9 < DAT_14c9647dc) {
                  lVar33 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
                }
                else {
                  lVar33 = 0;
                }
                uVar20 = (ulonglong)*(uint *)(lVar33 + 0x10);
                if (*(uint *)(lVar33 + 0x10) == 0) {
                  LOCK();
                  iVar37 = DAT_14c964868 + 1;
                  UNLOCK();
                  uVar9 = DAT_14c964868 + 1;
                  bVar47 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar37;
                  if (bVar47) {
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                  ,uVar9);
                  }
                  LOCK();
                  uVar38 = *(uint *)(lVar33 + 0x10);
                  bVar47 = uVar38 == 0;
                  if (bVar47) {
                    *(uint *)(lVar33 + 0x10) = uVar9;
                    uVar38 = 0;
                  }
                  UNLOCK();
                  if (bVar47) {
                    uVar38 = uVar9;
                  }
                  uVar20 = (ulonglong)uVar38;
                }
              }
              lVar33 = local_370;
              if (*(int *)(local_370 + 0x4c) == 0) {
                iVar37 = *(int *)(local_370 + 0x20);
                *(int *)(local_370 + 0x20) = iVar37 + 1;
                if (*(int *)(local_370 + 0x24) == iVar37) {
                  FUN_1447711aa(local_318,iVar37);
                }
                iVar21 = *(int *)(lVar33 + 0x40);
                if (iVar21 == 0) {
                  iVar40 = -1;
                }
                else {
                  iVar40 = iVar21 + 0x1e;
                  if (-1 < iVar21 + -1) {
                    iVar40 = iVar21 + -1;
                  }
                  iVar40 = iVar40 >> 5;
                }
                iVar26 = iVar21 + 1;
                iVar35 = iVar21 + 0x1f;
                if (-1 < iVar21) {
                  iVar35 = iVar21;
                }
                lVar13 = local_370;
                if (iVar35 >> 5 == iVar40) {
                  *(int *)(local_370 + 0x40) = iVar26;
                }
                else {
                  if (*(int *)(local_370 + 0x44) <= iVar21) {
                    iVar40 = iVar21;
                    if (iVar21 + 0x20U < 0xa0) {
                      iVar26 = 0x80;
                    }
                    else {
                      uVar9 = iVar21 + 0x20U >> 5;
                      if (*(int *)(local_370 + 0x44) + 0x1fU < 0xa0) {
                        uVar38 = 4;
                        if (4 < uVar9) {
                          uVar38 = uVar9;
                        }
                      }
                      else {
                        uVar38 = uVar9 + (uVar9 * 3 >> 3) + 0x10;
                      }
                      uVar30 = (ulonglong)(uVar38 * 4);
                      if (DAT_14c872d28 != (longlong *)0x0) {
                        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                          uVar25 = (uint)(uVar30 + 0xf);
                          if (uVar38 < 0x1ffd) {
                            uVar30 = (ulonglong)
                                     (ushort)(&DAT_14c841d90)
                                             [0x32 - (byte)(&DAT_14c841e00)[uVar25 >> 4]];
                          }
                          else {
                            uVar24 = uVar30 + 0xf & 0xfffffffffffffff0;
                            plVar10 = local_360;
                            if (uVar24 < 0x7ff1) {
                              bVar43 = (&DAT_14c841e00)[uVar25 >> 4];
                              uVar27 = 0x32;
                              if (0x32 < bVar43) {
                                uVar27 = (ulonglong)bVar43;
                              }
                              uVar34 = 0x32 - (ulonglong)bVar43;
                              do {
                                uVar30 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar34 & 0xffffffff];
                                if (((&DAT_14c841d90)[uVar34 & 0xffffffff] & 0xf) == 0)
                                goto LAB_140f89c8e;
                                lVar33 = uVar27 + 1 + uVar34;
                                uVar34 = uVar34 - 1;
                              } while (lVar33 != 0x33);
                            }
                            uVar30 = (ulonglong)DAT_14c841df8;
                            if (DAT_14c841df8 < 0x11) {
                              uVar30 = 0x10;
                            }
                            uVar30 = -uVar30 & (uVar24 + uVar30) - 1;
                          }
                        }
                        else {
                          uVar30 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar30,0);
                          iVar40 = *(int *)(local_370 + 0x40);
                        }
                      }
LAB_140f89c8e:
                      iVar28 = (int)(uVar30 >> 2);
                      iVar26 = iVar28 << 5;
                      if (iVar28 < (int)uVar9) {
                        iVar26 = -0x20;
                      }
                    }
                    lVar13 = local_370;
                    *(int *)(local_370 + 0x44) = iVar26;
                    FUN_1446efbd8(local_328,iVar40);
                    iVar26 = *(int *)(lVar13 + 0x40) + 1;
                  }
                  iVar40 = iVar26 + 0x1f;
                  if (-1 < iVar26) {
                    iVar40 = iVar26;
                  }
                  *(int *)(lVar13 + 0x40) = iVar26;
                  if (iVar26 % 0x20 != 0) {
                    puVar16 = *(uint **)(lVar13 + 0x38);
                    if (*(uint **)(lVar13 + 0x38) == (uint *)0x0) {
                      puVar16 = local_328;
                    }
                    bVar43 = -(char)(iVar26 % 0x20);
                    puVar16[iVar40 >> 5] =
                         (puVar16[iVar40 >> 5] << (bVar43 & 0x1f)) >> (bVar43 & 0x1f);
                  }
                }
                lVar45 = (longlong)iVar37;
                puVar16 = *(uint **)(lVar13 + 0x38);
                if (*(uint **)(lVar13 + 0x38) == (uint *)0x0) {
                  puVar16 = local_328;
                }
                bVar43 = (byte)iVar21 & 0x1f;
                puVar16[iVar35 >> 5] =
                     puVar16[iVar35 >> 5] & (-2 << bVar43 | 0xfffffffeU >> 0x20 - bVar43);
              }
              else {
                iVar37 = *(int *)(local_370 + 0x48);
                lVar45 = (longlong)iVar37;
                iVar21 = *(int *)(*(longlong *)(local_370 + 0x18) + 4 + lVar45 * 0x20);
                *(int *)(local_370 + 0x48) = iVar21;
                iVar40 = *(int *)(local_370 + 0x4c) + -1;
                *(int *)(local_370 + 0x4c) = iVar40;
                plVar10 = local_360;
                lVar13 = local_370;
                if (iVar40 != 0) {
                  *(undefined4 *)(*(longlong *)(local_370 + 0x18) + (longlong)iVar21 * 0x20) =
                       0xffffffff;
                }
              }
              lVar33 = local_338;
              plVar44 = local_340;
              puVar16 = *(uint **)(lVar13 + 0x38);
              if (*(uint **)(lVar13 + 0x38) == (uint *)0x0) {
                puVar16 = local_328;
              }
              iVar21 = iVar37 + 0x1f;
              if (-1 < iVar37) {
                iVar21 = iVar37;
              }
              puVar16[iVar21 >> 5] = puVar16[iVar21 >> 5] | 1 << ((byte)iVar37 & 0x1f);
              lVar19 = *(longlong *)(lVar13 + 0x18);
              lVar45 = lVar45 * 0x20;
              puVar1 = (undefined4 *)(lVar19 + lVar45);
              *(code **)(lVar19 + lVar45) = local_310;
              *(ulonglong *)(lVar19 + 8 + lVar45) = local_348;
              *(ulonglong *)(lVar19 + 0x10 + lVar45) = uVar23 | uVar20 << 0x20;
              *(undefined4 *)(lVar19 + 0x18 + lVar45) = 0xffffffff;
              uVar9 = (uint)((ulonglong)local_310 >> 0x20) ^ (uint)local_310;
              uVar38 = *(int *)(lVar13 + 0x20) - *(int *)(lVar13 + 0x4c);
              if (1 < uVar38) {
                plVar17 = *(longlong **)(lVar13 + 0x58);
                if (*(longlong **)(lVar13 + 0x58) == (longlong *)0x0) {
                  plVar17 = local_340;
                }
                iVar21 = *(int *)((longlong)plVar17 +
                                 (ulonglong)(*(int *)(lVar13 + 0x60) - 1U & uVar9) * 4);
                if (iVar21 != -1) {
                  do {
                    puVar2 = (undefined4 *)(*local_318 + (longlong)iVar21 * 0x20);
                    if (*(ulonglong *)(*local_318 + 8 + (longlong)iVar21 * 0x20) == local_348) {
                      uVar3 = *puVar1;
                      uVar4 = puVar1[1];
                      uVar5 = puVar1[2];
                      uVar6 = puVar1[3];
                      *(undefined8 *)(puVar2 + 4) = *(undefined8 *)(puVar1 + 4);
                      *puVar2 = uVar3;
                      puVar2[1] = uVar4;
                      puVar2[2] = uVar5;
                      puVar2[3] = uVar6;
                      uVar18 = FUN_1487bed94(local_318);
                      local_34c = (uint)CONCAT71((int7)((ulonglong)uVar18 >> 8),1);
                      plVar17 = local_368;
                      lVar33 = local_338;
                      goto LAB_140f89822;
                    }
                    iVar21 = puVar2[6];
                  } while (iVar21 != -1);
                }
              }
              uVar25 = 1;
              if (3 < uVar38) {
                uVar23 = (ulonglong)(uVar38 & 0xfffffffe) + 0xf;
                lVar13 = 0x3f;
                if (uVar23 != 0) {
                  for (; uVar23 >> lVar13 == 0; lVar13 = lVar13 + -1) {
                  }
                }
                uVar25 = 1 << ((byte)lVar13 & 0x1f);
              }
              if (((int)uVar38 < 1) || ((int)uVar25 <= *(int *)(local_370 + 0x60))) {
                uVar9 = *(int *)(local_370 + 0x60) - 1U & uVar9;
                puVar1[7] = uVar9;
                plVar17 = *(longlong **)(local_370 + 0x58);
                if (*(longlong **)(local_370 + 0x58) == (longlong *)0x0) {
                  plVar17 = local_340;
                }
                puVar1[6] = *(undefined4 *)
                             ((longlong)plVar17 +
                             ((longlong)*(int *)(local_370 + 0x60) - 1U & (longlong)(int)uVar9) * 4)
                ;
                plVar17 = *(longlong **)(local_370 + 0x58);
                if (*(longlong **)(local_370 + 0x58) == (longlong *)0x0) {
                  plVar17 = local_340;
                }
                *(int *)((longlong)plVar17 +
                        ((longlong)*(int *)(local_370 + 0x60) - 1U & (longlong)(int)uVar9) * 4) =
                     iVar37;
                local_34c = (uint)CONCAT71((int7)((ulonglong)plVar17 >> 8),1);
                plVar17 = local_368;
              }
              else {
                *(uint *)(local_370 + 0x60) = uVar25;
                if (*(longlong *)(local_370 + 0x58) != 0) {
                  FUN_1446efa72(local_320,0,0,4);
                  uVar25 = *(uint *)(local_370 + 0x60);
                }
                lVar13 = local_370;
                local_34c = (uint)CONCAT71((int7)((ulonglong)local_370 >> 8),1);
                if (uVar25 == 1) {
                  if (*local_320 != 0) {
                    FUN_1446efa72(local_320,0,0,4);
                  }
LAB_140f899dc:
                  uVar9 = 0;
                  do {
                    plVar17 = *(longlong **)(lVar13 + 0x58);
                    if (*(longlong **)(lVar13 + 0x58) == (longlong *)0x0) {
                      plVar17 = plVar44;
                    }
                    *(undefined4 *)
                     ((longlong)plVar17 +
                     (ulonglong)(*(int *)(lVar13 + 0x60) + 0x7fffffffU & uVar9) * 4) = 0xffffffff;
                    uVar9 = uVar9 + 1;
                  } while (uVar25 != uVar9);
                }
                else {
                  plVar17 = local_368;
                  if (uVar25 == 0) goto LAB_140f89822;
                  FUN_1446efa72(local_320,0,uVar25,4);
                  lVar13 = local_370;
                  if (0 < (int)uVar25) goto LAB_140f899dc;
                }
                iVar37 = *(int *)(lVar13 + 0x40);
                plVar17 = local_368;
                if (iVar37 == 0) {
                  uVar23 = 0;
                  uVar20 = 1;
                  iVar21 = 0;
                  iVar40 = 0;
                }
                else {
                  puVar16 = *(uint **)(lVar13 + 0x38);
                  if (*(uint **)(lVar13 + 0x38) == (uint *)0x0) {
                    puVar16 = local_328;
                  }
                  uVar9 = *puVar16;
                  if (uVar9 == 0) {
                    iVar21 = iVar37 + 0x1e;
                    if (-1 < iVar37 + -1) {
                      iVar21 = iVar37 + -1;
                    }
                    uVar23 = 0;
                    uVar20 = (ulonglong)(uint)(iVar21 >> 5);
                    if (iVar21 >> 5 < 1) {
                      uVar20 = uVar23;
                    }
                    iVar40 = 0;
                    do {
                      if (uVar20 == uVar23) goto LAB_140f89822;
                      iVar40 = iVar40 + 0x20;
                      uVar9 = puVar16[uVar23 + 1];
                      uVar23 = uVar23 + 1;
                    } while (uVar9 == 0);
                  }
                  else {
                    uVar23 = 0;
                    iVar40 = 0;
                  }
                  uVar20 = (ulonglong)(-uVar9 & uVar9);
                  uVar30 = uVar20 * 2 + 1;
                  lVar13 = 0x3f;
                  if (uVar30 != 0) {
                    for (; uVar30 >> lVar13 == 0; lVar13 = lVar13 + -1) {
                    }
                  }
                  iVar21 = (iVar40 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
                  if (iVar37 <= iVar21) {
                    iVar21 = iVar37;
                  }
                }
                if (iVar21 < iVar37) {
                  uVar9 = 0xffffffff;
                  do {
                    lVar13 = *(longlong *)(local_370 + 0x18);
                    lVar45 = (longlong)iVar21 * 0x20;
                    uVar30 = (longlong)
                             (int)((uint)((ulonglong)*(undefined8 *)(lVar13 + lVar45) >> 0x20) ^
                                  (uint)*(undefined8 *)(lVar13 + lVar45)) &
                             (longlong)*(int *)(local_370 + 0x60) - 1U;
                    iVar37 = (int)uVar30;
                    *(int *)(lVar13 + 0x1c + lVar45) = iVar37;
                    plVar14 = *(longlong **)(local_370 + 0x58);
                    if (*(longlong **)(local_370 + 0x58) == (longlong *)0x0) {
                      plVar14 = plVar44;
                    }
                    *(undefined4 *)(lVar13 + 0x18 + lVar45) =
                         *(undefined4 *)
                          ((longlong)plVar14 +
                          ((longlong)*(int *)(local_370 + 0x60) - 1U & uVar30) * 4);
                    plVar14 = *(longlong **)(local_370 + 0x58);
                    if (*(longlong **)(local_370 + 0x58) == (longlong *)0x0) {
                      plVar14 = plVar44;
                    }
                    *(int *)((longlong)plVar14 +
                            ((longlong)iVar37 & (longlong)*(int *)(local_370 + 0x60) - 1U) * 4) =
                         iVar21;
                    uVar9 = ~(uint)uVar20 & uVar9;
                    puVar16 = *(uint **)(local_370 + 0x38);
                    if (*(uint **)(local_370 + 0x38) == (uint *)0x0) {
                      puVar16 = local_328;
                    }
                    iVar37 = *(int *)(local_370 + 0x40);
                    iVar21 = (int)uVar23;
                    lVar13 = (longlong)iVar21;
                    uVar38 = puVar16[lVar13] & uVar9;
                    if (uVar38 == 0) {
                      iVar26 = iVar37 + 0x1e;
                      if (-1 < iVar37 + -1) {
                        iVar26 = iVar37 + -1;
                      }
                      iVar26 = iVar26 >> 5;
                      iVar35 = iVar26;
                      if (iVar26 < iVar21) {
                        iVar35 = iVar21;
                      }
                      if (iVar26 <= iVar21) break;
                      lVar45 = 0;
                      while( true ) {
                        iVar40 = iVar40 + 0x20;
                        uVar38 = puVar16[lVar13 + lVar45 + 1];
                        if (uVar38 != 0) break;
                        lVar45 = lVar45 + 1;
                        if (iVar35 - lVar13 == lVar45) goto LAB_140f89822;
                      }
                      uVar23 = (ulonglong)(iVar21 + (int)lVar45 + 1);
                      uVar9 = 0xffffffff;
                    }
                    uVar20 = (ulonglong)(-uVar38 & uVar38);
                    uVar30 = uVar20 * 2 + 1;
                    lVar13 = 0x3f;
                    if (uVar30 != 0) {
                      for (; uVar30 >> lVar13 == 0; lVar13 = lVar13 + -1) {
                      }
                    }
                    iVar21 = (iVar40 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
                  } while (iVar21 < iVar37);
                }
              }
            }
          }
LAB_140f89822:
          local_270 = 0;
          if (local_278 != 0) {
            FUN_1400020a8();
          }
          uVar23 = uStack_2b0 >> 0x20;
          uStack_2b0 = uStack_2b0 & 0xffffffff00000000;
          if ((int)uVar23 != 0) {
            FUN_1407f13e6(&local_2b8);
          }
          uStack_288 = 0xffffffff;
          local_284 = 0;
          local_290 = 0;
          if (0x80 < local_28c) {
            local_28c = 0x80;
            FUN_1446efbd8(local_2a8);
          }
          if (local_298 != 0) {
            FUN_1400020a8();
          }
          if (local_2b8 != 0) {
            FUN_1400020a8();
          }
        }
LAB_140f898b6:
        lVar13 = local_330 + 1;
      } while (lVar13 < (int)plVar17[1]);
    }
    iVar37 = *(int *)((longlong)plVar10 + 0xc);
    *(undefined4 *)(plVar10 + 1) = 0;
    iVar21 = 0;
    if (iVar37 < 0) {
      FUN_1448831cc(plVar10);
      iVar21 = (int)plVar10[1];
      iVar37 = *(int *)((longlong)plVar10 + 0xc);
    }
    uVar9 = *(uint *)(plVar17 + 1);
    *(uint *)(plVar10 + 1) = uVar9 + iVar21;
    if ((uint)(iVar37 - iVar21) < uVar9) {
      FUN_144769b64(plVar10);
    }
    memset((void *)((longlong)iVar21 * 8 + *plVar10),0,(longlong)(int)uVar9 << 3);
    if (0 < (int)plVar17[1]) {
      lVar33 = local_370 + 0x50;
      lVar13 = 0;
      do {
        plVar10 = (longlong *)(*plVar17 + lVar13 * 0x18);
        lVar45 = *plVar10;
        if (lVar45 == 0) {
LAB_140f8a27c:
          uVar23 = 0;
          lVar45 = 0;
        }
        else {
          lVar19 = FUN_1402d2740();
          if (*(int *)(*(longlong *)(lVar45 + 0x10) + 0x38) < *(int *)(lVar19 + 0x38))
          goto LAB_140f8a27c;
          if (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar45 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar19 + 0x38) * 8) == lVar19 + 0x30) {
            lVar19 = *plVar10;
            if ((lVar19 != 0 & DAT_14c950c29) == 1) {
              FUN_1456cec3c(lVar19);
LAB_140f8a08c:
              uVar9 = *(uint *)(lVar19 + 0xc);
              uVar23 = (ulonglong)uVar9;
              if ((int)uVar9 < DAT_14c9647dc) {
                lVar19 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
              }
              else {
                lVar19 = 0;
              }
              uVar20 = (ulonglong)*(uint *)(lVar19 + 0x10);
              if (*(uint *)(lVar19 + 0x10) == 0) {
                LOCK();
                iVar37 = DAT_14c964868 + 1;
                UNLOCK();
                uVar9 = DAT_14c964868 + 1;
                bVar47 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar37;
                if (bVar47) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,uVar9);
                }
                LOCK();
                uVar38 = *(uint *)(lVar19 + 0x10);
                bVar47 = uVar38 == 0;
                if (bVar47) {
                  *(uint *)(lVar19 + 0x10) = uVar9;
                  uVar38 = 0;
                }
                UNLOCK();
                if (bVar47) {
                  uVar38 = uVar9;
                }
                uVar20 = (ulonglong)uVar38;
              }
            }
            else {
              if (lVar19 != 0) goto LAB_140f8a08c;
              uVar23 = 0;
              uVar20 = 0;
            }
            uVar23 = uVar23 | uVar20 << 0x20;
            plVar17 = local_368;
          }
          else {
            uVar23 = 0;
            lVar45 = 0;
            plVar17 = local_368;
          }
        }
        uVar9 = (uint)(uVar23 >> 0x20);
        if (*(int *)(local_370 + 0x20) != *(int *)(local_370 + 0x4c)) {
          lVar19 = *(longlong *)(local_370 + 0x58);
          if (*(longlong *)(local_370 + 0x58) == 0) {
            lVar19 = lVar33;
          }
          iVar37 = *(int *)(lVar19 + (ulonglong)
                                     (*(int *)(local_370 + 0x60) - 1U & (uVar9 ^ (uint)uVar23)) * 4)
          ;
          if (iVar37 != -1) {
            do {
              lVar19 = *(longlong *)(local_370 + 0x18) + (longlong)iVar37 * 0x20;
              if (*(longlong *)(*(longlong *)(local_370 + 0x18) + 8 + (longlong)iVar37 * 0x20) ==
                  lVar45) {
                if ((((((uint *)(lVar19 + 0x10) != (uint *)0x0 && lVar19 != 0) &&
                      (*(int *)(lVar19 + 0x14) != 0)) &&
                     (uVar38 = *(uint *)(lVar19 + 0x10), -1 < (int)uVar38)) &&
                    (((int)uVar38 < DAT_14c9647dc &&
                     (plVar44 = (longlong *)
                                ((ulonglong)((uVar38 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar38 >> 0x10) * 8)),
                     plVar44 != (longlong *)0x0)))) &&
                   (((int)plVar44[2] == *(int *)(lVar19 + 0x14) &&
                    ((*(uint *)(plVar44 + 1) & 0x10200000) == 0)))) {
                  if ((*(uint *)(plVar44 + 1) & 0x10200000) == 0) {
                    lVar45 = *plVar44;
                  }
                  else {
                    lVar45 = 0;
                  }
                  goto LAB_140f8a20a;
                }
                break;
              }
              iVar37 = *(int *)(lVar19 + 0x18);
            } while (iVar37 != -1);
          }
        }
        if ((int)uStack_250 != local_224) {
          puVar22 = local_218;
          if (local_218 == (undefined1 *)0x0) {
            puVar22 = local_220;
          }
          iVar37 = *(int *)(puVar22 + (ulonglong)(local_210 - 1 & (uVar9 ^ (uint)uVar23)) * 4);
          while (iVar37 != -1) {
            lVar19 = local_258 + (longlong)iVar37 * 0x20;
            if (*(longlong *)(local_258 + 8 + (longlong)iVar37 * 0x20) == lVar45) {
              if ((longlong *)(lVar19 + 0x10) != (longlong *)0x0 && lVar19 != 0) {
                lVar45 = *(longlong *)(lVar19 + 0x10);
                goto LAB_140f8a20a;
              }
              break;
            }
            iVar37 = *(int *)(lVar19 + 0x18);
          }
        }
        lVar45 = *plVar10;
LAB_140f8a20a:
        *(longlong *)(*local_360 + lVar13 * 8) = lVar45;
        lVar13 = lVar13 + 1;
      } while (lVar13 < (int)plVar17[1]);
    }
    local_210 = 0;
    if (local_218 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    uVar9 = local_34c;
    uVar23 = uStack_250 >> 0x20;
    uStack_250 = uStack_250 & 0xffffffff00000000;
    if ((int)uVar23 != 0) {
      FUN_1446f4a44(&local_258,0);
    }
    iStack_228 = 0xffffffff;
    local_224 = 0;
    local_230 = 0;
    if (0x80 < local_22c) {
      local_22c = 0x80;
      FUN_1446efbd8(local_248,0);
    }
    if (local_238 != (uint *)0x0) {
      FUN_1400020a8();
    }
    if (local_258 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_108 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_140f8a361:
  if ((local_60 ^ (ulonglong)auStack_3e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffff01;
}



// FUNCTION 140f8a3c4 FUN_140f8a3c4 body=127 status=ok
// SIG undefined FUN_140f8a3c4(void)

void FUN_140f8a3c4(longlong param_1,uint *param_2)

{
  char cVar1;
  uint uVar2;
  uint *puVar3;
  
  FUN_140f8a444();
  if ((*(int *)(*(longlong *)(param_1 + 0x430) + 0xd98) < 1) &&
     (*(int *)(*(longlong *)(param_1 + 0x430) + 0xda8) < 1)) {
    if (*(longlong **)(param_1 + 0x428) == (longlong *)0x0) {
      puVar3 = *(uint **)(param_2 + 4);
      if (*(uint **)(param_2 + 4) == (uint *)0x0) {
        puVar3 = param_2;
      }
    }
    else {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x428) + 0xbb0))();
      puVar3 = *(uint **)(param_2 + 4);
      if (*(uint **)(param_2 + 4) == (uint *)0x0) {
        puVar3 = param_2;
      }
      if (cVar1 != '\0') goto LAB_140f8a42d;
    }
    uVar2 = *puVar3 & 0xfeffffff;
  }
  else {
    puVar3 = *(uint **)(param_2 + 4);
    if (*(uint **)(param_2 + 4) == (uint *)0x0) {
      puVar3 = param_2;
    }
LAB_140f8a42d:
    uVar2 = *puVar3 | 0x1000000;
  }
  *puVar3 = uVar2;
  return;
}



// FUNCTION 140f8a444 FUN_140f8a444 body=95 status=ok
// SIG undefined FUN_140f8a444(void)

void FUN_140f8a444(longlong param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = *(uint **)(param_2 + 4);
  if (*(uint **)(param_2 + 4) == (uint *)0x0) {
    puVar1 = param_2;
  }
  *puVar1 = (*puVar1 & 0xffffffbf) + (*(uint *)(param_1 + 0x60) & 0x10) * 4;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    puVar1 = *(uint **)(param_2 + 4);
    if (*(uint **)(param_2 + 4) == (uint *)0x0) {
      puVar1 = param_2;
    }
  }
  else {
    puVar1 = *(uint **)(param_2 + 4);
    if (*(uint **)(param_2 + 4) == (uint *)0x0) {
      puVar1 = param_2;
    }
    if (-1 < *(char *)(*(longlong *)(param_1 + 0x1c8) + 0x9c)) {
      uVar2 = *puVar1 | 0x80;
      goto LAB_140f8a48c;
    }
  }
  uVar2 = *puVar1 & 0xffffff7f;
LAB_140f8a48c:
  *puVar1 = uVar2;
  return;
}



// FUNCTION 140f8a4ac FUN_140f8a4ac body=317 status=ok
// SIG undefined FUN_140f8a4ac(void)

undefined8 * FUN_140f8a4ac(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 auStack_68 [40];
  char *local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1409e6ae2();
  *param_1 = &PTR_FUN_14b5de7b0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  *(undefined1 *)(param_1 + 0x8d) = 0;
  local_40 = "UsePrompt_Deposit";
  local_38 = 0x11;
  local_34 = 0;
  uVar5 = FUN_14001a6c0(&local_40,1);
  param_1[0x8e] = (ulonglong)uVar5;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  *(undefined1 *)(param_1 + 0x91) = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0x92] = DAT_14c8464e0;
  param_1[0x93] = uVar1;
  param_1[0x94] = DAT_14c8464f0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0x4348000043fa0000;
  *(undefined1 *)(param_1 + 0x98) = 1;
  *(undefined8 *)((longlong)param_1 + 0x4c4) = 0x437a000044228000;
  *(undefined2 *)((longlong)param_1 + 0x4cc) = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0x9a] = DAT_14c8464e0;
  param_1[0x9b] = uVar1;
  param_1[0x9c] = DAT_14c8464f0;
  uVar4 = DAT_14c846500._4_4_;
  uVar3 = (undefined4)DAT_14c846500;
  uVar2 = DAT_14c8464f8._4_4_;
  *(undefined4 *)(param_1 + 0x9d) = (undefined4)DAT_14c8464f8;
  *(undefined4 *)((longlong)param_1 + 0x4ec) = uVar2;
  *(undefined4 *)(param_1 + 0x9e) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x4f4) = uVar4;
  param_1[0x9f] = DAT_14c846508;
  param_1[0xa0] = 0x42c8000042f00000;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f8a5ea FUN_140f8a5ea body=1040 status=ok
// SIG undefined FUN_140f8a5ea(void)

int * FUN_140f8a5ea(longlong *param_1,int *param_2,uint param_3,undefined8 *param_4)

{
  uint *puVar1;
  void *_Dst;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  int iVar11;
  longlong *plVar12;
  int iVar13;
  int iVar14;
  undefined1 auStack_c8 [40];
  ulonglong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined4 local_60;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar13 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar13 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar13) {
      FUN_14488f93c(param_1,iVar13);
    }
    iVar11 = (int)param_1[5];
    if (iVar11 == 0) {
      iVar3 = -1;
    }
    else {
      iVar3 = iVar11 + 0x1e;
      if (-1 < iVar11 + -1) {
        iVar3 = iVar11 + -1;
      }
      iVar3 = iVar3 >> 5;
    }
    plVar12 = param_1 + 2;
    iVar7 = iVar11 + 1;
    iVar14 = iVar11 + 0x1f;
    if (-1 < iVar11) {
      iVar14 = iVar11;
    }
    if (iVar14 >> 5 == iVar3) {
      *(int *)(param_1 + 5) = iVar7;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar11) {
        if (iVar11 + 0x20U < 0xa0) {
          iVar7 = 0x80;
          iVar3 = iVar11;
        }
        else {
          uVar4 = iVar11 + 0x20U >> 5;
          local_a0 = (ulonglong)uVar4;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar8 = 4;
            if (4 < uVar4) {
              uVar8 = uVar4;
            }
          }
          else {
            uVar8 = (uVar4 * 3 >> 3) + uVar4 + 0x10;
          }
          uVar10 = FUN_144a3809e(uVar8 << 2,0);
          iVar3 = (int)(uVar10 >> 2);
          iVar7 = -0x20;
          if ((int)local_a0 <= iVar3) {
            iVar7 = iVar3 << 5;
          }
          iVar3 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar7;
        FUN_1446efbd8(plVar12,iVar3);
        iVar7 = (int)param_1[5] + 1;
      }
      iVar3 = iVar7 + 0x1f;
      if (-1 < iVar7) {
        iVar3 = iVar7;
      }
      *(int *)(param_1 + 5) = iVar7;
      if (iVar7 % 0x20 != 0) {
        plVar9 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar9 = plVar12;
        }
        bVar6 = -(char)(iVar7 % 0x20);
        *(uint *)((longlong)plVar9 + (longlong)(iVar3 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar9 + (longlong)(iVar3 >> 5) * 4) << (bVar6 & 0x1f)) >>
             (bVar6 & 0x1f);
      }
    }
    lVar5 = (longlong)iVar13;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[4];
    }
    bVar6 = (byte)iVar11 & 0x1f;
    puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar14 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
  }
  else {
    iVar13 = (int)param_1[6];
    lVar5 = (longlong)iVar13;
    iVar11 = *(int *)(*param_1 + 4 + lVar5 * 0x60);
    *(int *)(param_1 + 6) = iVar11;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar11 * 0x60) = 0xffffffff;
    }
  }
  plVar12 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar12 = (longlong *)param_1[4];
  }
  iVar11 = iVar13 + 0x1f;
  if (-1 < iVar13) {
    iVar11 = iVar13;
  }
  puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar11 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar13 & 0x1f);
  plVar12 = (longlong *)(*param_1 + lVar5 * 0x60);
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  puVar2 = (undefined8 *)(*param_1 + 8 + lVar5 * 0x60);
  puVar2[-1] = *(undefined8 *)*param_4;
  puVar2[4] = 0;
  *(undefined4 *)(puVar2 + 5) = 0;
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
  puVar2[8] = 0;
  *(undefined4 *)(puVar2 + 9) = 0;
  FUN_140f8a9fc(puVar2,&local_98);
  if (local_58 == 0) {
    *(undefined4 *)(plVar12 + 8) = local_60;
  }
  if (plVar12[9] != 0) {
    FUN_1400020a8();
  }
  plVar12[9] = local_58;
  local_58 = 0;
  *(undefined4 *)(plVar12 + 10) = local_50;
  local_50 = 0;
  FUN_1403950f6();
  *(undefined4 *)(plVar12 + 0xb) = 0xffffffff;
  uVar4 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  iVar11 = 1;
  if (uVar4 != 1) {
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      plVar9 = param_1 + 7;
      if ((longlong *)param_1[8] != (longlong *)0x0) {
        plVar9 = (longlong *)param_1[8];
      }
      iVar3 = *(int *)((longlong)plVar9 + (ulonglong)((int)param_1[9] - 1U & param_3) * 4);
      if (iVar3 != -1) {
        do {
          _Dst = (void *)(*param_1 + (longlong)iVar3 * 0x60);
          if (*(longlong *)(*param_1 + (longlong)iVar3 * 0x60) == *plVar12) {
            *(undefined4 *)((longlong)_Dst + 0x50) = 0;
            if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
              FUN_1400020a8();
            }
            FUN_1403950f6((longlong)_Dst + 8);
            memmove(_Dst,plVar12,0x58);
            FUN_14701f00a(param_1,iVar13);
            goto LAB_140f8a858;
          }
          iVar3 = *(int *)((longlong)_Dst + 0x58);
        } while (iVar3 != -1);
      }
    }
    if (3 < uVar4) {
      uVar10 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar5 & 0x1f);
    }
  }
  if (((int)uVar4 < 1) || (iVar11 <= (int)param_1[9])) {
    param_3 = (int)param_1[9] - 1U & param_3;
    *(uint *)((longlong)plVar12 + 0x5c) = param_3;
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(undefined4 *)(plVar12 + 0xb) =
         *(undefined4 *)
          ((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_3) * 4);
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(int *)((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_3) * 4) =
         iVar13;
  }
  else {
    *(int *)(param_1 + 9) = iVar11;
    FUN_140f8aa92(param_1);
  }
LAB_140f8a858:
  *param_2 = iVar13;
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f8a9fc FUN_140f8a9fc body=150 status=ok
// SIG undefined FUN_140f8a9fc(void)

longlong * FUN_140f8a9fc(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar3 = param_2[3];
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)(param_1 + 2) = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
      *(int *)(param_1 + 3) = (int)lVar3;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
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
  }
  return param_1;
}



// FUNCTION 140f8aa92 FUN_140f8aa92 body=665 status=ok
// SIG undefined FUN_140f8aa92(void)

void FUN_140f8aa92(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar7 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar7,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar11 = *(uint *)(param_1 + 9);
  if (uVar11 == 1) {
    if (*plVar7 != 0) {
      FUN_1446efa72(plVar7,0,0,4);
    }
LAB_140f8aaec:
    uVar4 = 0;
    do {
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = plVar1;
      }
      *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar4) * 4) =
           0xffffffff;
      uVar4 = uVar4 + 1;
    } while (uVar11 != uVar4);
  }
  else {
    if (uVar11 == 0) goto LAB_140f8ac9c;
    FUN_1446efa72(plVar7,0,uVar11,4);
    if (0 < (int)uVar11) goto LAB_140f8aaec;
  }
  local_60 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  if ((int)param_1[5] == 0) {
    uVar13 = 1;
    local_58._0_4_ = 0xffffffff;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar13 = local_68 >> 0x20;
  }
  iVar6 = (int)local_68;
  uVar11 = (uint)local_58;
  iVar12 = local_58._4_4_;
  iVar5 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      lVar10 = *param_1;
      lVar14 = (longlong)iVar12 * 0x60;
      uVar2 = *(undefined8 *)(lVar10 + lVar14);
      uVar4 = (uint)((ulonglong)uVar2 >> 0x10);
      uVar15 = (uint)uVar2 & 0xffff;
      uVar9 = (longlong)
              (int)(((uint)uVar2 << 0x10 | uVar15) + (int)((ulonglong)uVar2 >> 0x20) +
                    (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar15 >> 4)) &
              (longlong)(int)param_1[9] - 1U;
      iVar8 = (int)uVar9;
      *(int *)(lVar10 + 0x5c + lVar14) = iVar8;
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = plVar1;
      }
      *(undefined4 *)(lVar10 + 0x58 + lVar14) =
           *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar9) * 4);
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = plVar1;
      }
      *(int *)((longlong)plVar7 + ((longlong)iVar8 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12;
      uVar11 = ~(uint)uVar13 & uVar11;
      plVar7 = (longlong *)local_60[2];
      if ((longlong *)local_60[2] == (longlong *)0x0) {
        plVar7 = local_60;
      }
      iVar8 = (int)local_60[3];
      lVar10 = (longlong)iVar6;
      uVar4 = *(uint *)((longlong)plVar7 + lVar10 * 4) & uVar11;
      if (uVar4 == 0) {
        iVar12 = iVar8 + 0x1e;
        if (-1 < iVar8 + -1) {
          iVar12 = iVar8 + -1;
        }
        iVar12 = iVar12 >> 5;
        iVar3 = iVar12;
        if (iVar12 < iVar6) {
          iVar3 = iVar6;
        }
        if (iVar12 <= iVar6) break;
        lVar14 = 0;
        while( true ) {
          iVar5 = iVar5 + 0x20;
          uVar4 = *(uint *)((longlong)plVar7 + lVar14 * 4 + lVar10 * 4 + 4);
          if (uVar4 != 0) break;
          lVar14 = lVar14 + 1;
          if (iVar3 - lVar10 == lVar14) goto LAB_140f8ac9c;
        }
        iVar6 = iVar6 + (int)lVar14 + 1;
        uVar11 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar4 & uVar4);
      uVar9 = uVar13 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar12 = (iVar5 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    } while (iVar12 < iVar8);
  }
LAB_140f8ac9c:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f8ad2c FUN_140f8ad2c body=257 status=ok
// SIG undefined FUN_140f8ad2c(void)

undefined8 FUN_140f8ad2c(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_140f8ae27;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140f8ae27;
    }
    FUN_1400841de(param_1 + 0x18,&local_28);
  }
  else {
LAB_140f8ae27:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140f8addf;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))();
      uVar6 = 1;
      goto LAB_140f8addf;
    }
  }
  uVar6 = 0;
LAB_140f8addf:
  if (local_28 != 0) {
    FUN_140113f3a(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f8ae2e FUN_140f8ae2e body=748 status=ok
// SIG undefined FUN_140f8ae2e(void)

void FUN_140f8ae2e(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  char *pcVar10;
  longlong *plVar11;
  undefined1 auStack_48 [40];
  undefined2 *local_20;
  int local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((((*(int *)(param_1 + 0x54) == 0) || (uVar5 = *(uint *)(param_1 + 0x50), (int)uVar5 < 0)) ||
      (DAT_14c9647dc <= (int)uVar5)) ||
     (((puVar9 = (undefined8 *)
                 ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
       puVar9 == (undefined8 *)0x0 || (*(int *)(puVar9 + 2) != *(int *)(param_1 + 0x54))) ||
      ((*(uint *)(puVar9 + 1) & 0x10200000) != 0)))) goto LAB_140f8b086;
  if ((*(uint *)(puVar9 + 1) & 0x10200000) == 0) {
    uVar8 = *puVar9;
  }
  else {
    uVar8 = 0;
  }
  lVar6 = FUN_1404281d6(uVar8);
  if (lVar6 == 0) goto LAB_140f8b086;
  plVar11 = (longlong *)(lVar6 + 0x8c8);
  lVar6 = (**(code **)(*(longlong *)(lVar6 + 0x8c8) + 0x18))(plVar11);
  if (lVar6 == 0) {
LAB_140f8b0a3:
    pcVar10 = "Shoot_NoElement";
  }
  else {
    lVar6 = (**(code **)(*plVar11 + 0x18))(plVar11);
    fVar1 = *(float *)(lVar6 + 0x18);
    fVar2 = *(float *)(lVar6 + 0x1c);
    fVar3 = *(float *)(lVar6 + 0x20);
    fVar4 = *(float *)(lVar6 + 0x24);
    if ((((fVar1 == 1.0) && (!NAN(fVar1))) &&
        (((fVar2 == 1.0 && (((!NAN(fVar2) && (fVar3 == 1.0)) && (!NAN(fVar3))))) &&
         ((fVar4 == 1.0 && (!NAN(fVar4))))))) ||
       ((fVar1 == 0.768151 &&
        (((!NAN(fVar1) && (fVar2 == 0.693872)) &&
         ((!NAN(fVar2) &&
          ((((fVar3 == 0.62396 && (!NAN(fVar3))) && (fVar4 == 1.0)) && (!NAN(fVar4)))))))))))
    goto LAB_140f8b0a3;
    if (((fVar1 != 0.168269) || (NAN(fVar1))) ||
       (((fVar2 != 0.938686 || ((NAN(fVar2) || (fVar3 != 0.0)))) ||
        ((NAN(fVar3) || ((fVar4 != 1.0 || (NAN(fVar4))))))))) {
      if (((fVar1 != 0.0865) || (((NAN(fVar1) || (fVar2 != 0.964687)) || (NAN(fVar2))))) ||
         ((((fVar3 != 0.964687 || (NAN(fVar3))) || (fVar4 != 1.0)) || (NAN(fVar4))))) {
        if (((fVar1 != 1.0) || (NAN(fVar1))) ||
           (((fVar2 != 0.084376 || (((NAN(fVar2) || (fVar3 != 0.017642)) || (NAN(fVar3))))) ||
            ((fVar4 != 1.0 || (NAN(fVar4))))))) {
          if ((fVar1 != 0.061246) ||
             (((NAN(fVar1) || (fVar2 != 0.099899)) ||
              ((NAN(fVar2) ||
               ((((fVar3 != 0.879622 || (NAN(fVar3))) || (fVar4 != 1.0)) || (NAN(fVar4))))))))) {
            if (((fVar1 != 0.846873) || (NAN(fVar1))) ||
               ((fVar2 != 1.0 ||
                (((NAN(fVar2) || (fVar3 != 0.078187)) ||
                 ((NAN(fVar3) || ((fVar4 != 1.0 || (NAN(fVar4))))))))))) {
              pcVar10 = "Shoot_MAX";
            }
            else {
              pcVar10 = "Shoot_Radiation";
            }
          }
          else {
            pcVar10 = "Shoot_Shock";
          }
        }
        else {
          pcVar10 = "Shoot_Fire";
        }
      }
      else {
        pcVar10 = "Shoot_Cryo";
      }
    }
    else {
      pcVar10 = "Shoot_Corrosive";
    }
  }
  FUN_1400b22c2(&local_20,pcVar10);
  if (((DAT_14cc2d220 == '\x01') && ((DAT_14cc2d201 & 1) != 0)) && (DAT_14cc2d221 == '\x01')) {
    puVar7 = local_20;
    if (local_18 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    (*DAT_14cc2d210)(puVar7);
  }
  if (local_20 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_140f8b086:
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f8b11c FUN_140f8b11c body=52 status=ok
// SIG undefined FUN_140f8b11c(void)

undefined8 * FUN_140f8b11c(undefined8 *param_1)

{
  FUN_14007ca06();
  FUN_1400841f8(param_1);
  *param_1 = &PTR_FUN_14adafe70;
  param_1[5] = 0;
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xf8;
  return param_1;
}



// FUNCTION 140f8b1a8 FUN_140f8b1a8 body=355 status=ok
// SIG undefined FUN_140f8b1a8(void)

void FUN_140f8b1a8(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if ((int)param_1[0x82] == 0) {
    return;
  }
  lVar3 = param_1[0x7f];
  if (lVar3 == 0) {
    uVar4 = FUN_145c272be();
    lVar3 = FUN_14477b664(uVar4);
    param_1[0x7f] = lVar3;
  }
  if (param_1[0x80] == 0) {
    if (lVar3 == 0) {
      return;
    }
    if (param_1[0x7e] == 0) {
      return;
    }
    plVar1 = *(longlong **)(lVar3 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      param_1[0x80] = 0;
      return;
    }
    uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
    lVar3 = FUN_144aff482(uVar4,param_1 + 0x7e);
    param_1[0x80] = lVar3;
    if (lVar3 == 0) {
      return;
    }
  }
  if (param_1[0x78] != 0) {
    lVar3 = FUN_1404df6a8(param_1);
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      cVar2 = FUN_140f8b30c(lVar3);
      FUN_1400bc96c(lVar3 + 0x10,param_1 + 0x79);
      lVar3 = *(longlong *)(lVar3 + 8);
      if (cVar2 != '\0') {
        lVar5 = param_1[0x78];
        goto LAB_140f8b23b;
      }
    }
    lVar5 = param_1[0x78];
    if (*(longlong *)(lVar5 + 0x3a8) != lVar3) {
LAB_140f8b23b:
      if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar3);
      }
      *(longlong *)(lVar5 + 0x3a8) = lVar3;
      FUN_1447f69b6(param_1 + 0x83);
                    /* WARNING: Could not recover jumptable at 0x000140f8b26d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x648))(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 140f8b30c FUN_140f8b30c body=505 status=ok
// SIG undefined FUN_140f8b30c(void)

undefined8 FUN_140f8b30c(uint *param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  uint *puVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  uint *puVar10;
  float fVar11;
  undefined1 auStack_58 [44];
  uint local_2c;
  uint local_28;
  char local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((0 < (int)param_1[0x28]) && ((char)param_1[4] == '\x01')) {
    if (param_1[1] == 0) {
LAB_140f8b419:
      uVar8 = 0;
    }
    else {
      uVar1 = *param_1;
      uVar8 = 0;
      if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
        puVar9 = (undefined8 *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if ((puVar9 == (undefined8 *)0x0) ||
           ((*(uint *)(puVar9 + 2) != param_1[1] || ((*(uint *)(puVar9 + 1) & 0x10200000) != 0))))
        goto LAB_140f8b419;
        uVar8 = *puVar9;
      }
    }
    puVar10 = &local_2c;
    FUN_140f8b506(puVar10,uVar8);
    if (local_24 == '\x01') {
      puVar4 = &local_28;
    }
    else {
      puVar10 = param_1 + 0x22;
      puVar4 = param_1 + 0x23;
    }
    uVar1 = *puVar4;
    fVar11 = (float)(int)uVar1;
    uVar7 = (uint)ROUND(fVar11 + fVar11 + -0.5);
    uVar8 = 0;
    if (uVar7 < 2) goto LAB_140f8b3f8;
    fVar11 = (float)(int)*puVar10;
    uVar6 = (uint)ROUND(fVar11 + fVar11 + -0.5);
    if (uVar6 < 2) goto LAB_140f8b3f8;
    uVar7 = (int)uVar7 >> 1;
    uVar6 = (int)uVar6 >> 1;
    if ((uVar6 != param_1[0x18]) || (uVar7 != param_1[0x19])) {
      param_1[0x14] = *puVar10;
      param_1[0x15] = uVar1;
      *(ulonglong *)(param_1 + 0x16) = CONCAT44(uVar7,uVar6);
      *(ulonglong *)(param_1 + 0x18) = CONCAT44(uVar7,uVar6);
      param_1[0x1a] = 0;
      param_1[0x1b] = 0;
      param_1[0x1c] = 0;
      param_1[0x1d] = 0;
      param_1[0x1e] = 0;
      param_1[0x1f] = 0x3ff00000;
      param_1[0x20] = 0;
      param_1[0x21] = 0x3ff00000;
      plVar2 = *(longlong **)(param_1 + 2);
      if (plVar2 == (longlong *)0x0) {
        lVar5 = FUN_1457d64a2(uVar6,uVar7,(char)param_1[0x24]);
        lVar3 = *(longlong *)(param_1 + 2);
        if (lVar5 == 0) {
          uVar8 = 1;
          if (lVar3 != 0) {
            if (DAT_14c872a72 == '\0') {
              FUN_140113f48();
            }
            param_1[2] = 0;
            param_1[3] = 0;
          }
        }
        else {
          uVar8 = 1;
          if (lVar3 != lVar5) {
            if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
              FUN_140113f48();
            }
            FUN_1401924dc(lVar5);
            *(longlong *)(param_1 + 2) = lVar5;
          }
        }
      }
      else {
        *(uint *)(plVar2 + 0x28) = uVar6;
        *(uint *)((longlong)plVar2 + 0x144) = uVar7;
        (**(code **)(*plVar2 + 0x318))(plVar2);
        uVar8 = 1;
      }
      goto LAB_140f8b3f8;
    }
  }
  uVar8 = 0;
LAB_140f8b3f8:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f8b506 FUN_140f8b506 body=501 status=ok
// SIG undefined FUN_140f8b506(void)

ulonglong * FUN_140f8b506(ulonglong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 uVar3;
  code *pcVar4;
  ulonglong uVar5;
  longlong lVar6;
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
  undefined1 *local_40;
  undefined8 local_38;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_38 = DAT_14c967818;
  if ((param_2 == 0) || (lVar6 = *(longlong *)(param_2 + 0x430), lVar6 == 0)) {
LAB_140f8b6b4:
    if (((DAT_14cb0d2b0 == 0) || (*(longlong *)(DAT_14cb0d2b0 + 0xc20) == 0)) ||
       (plVar2 = *(longlong **)(*(longlong *)(DAT_14cb0d2b0 + 0xc20) + 0xf8),
       plVar2 == (longlong *)0x0)) {
      uVar3 = 0;
      goto LAB_140f8b5dd;
    }
    (**(code **)(*plVar2 + 0x28))(plVar2,&local_30);
    uVar5 = (ulonglong)local_30 >> 0x20;
    pcVar4 = local_30;
  }
  else {
    if (DAT_14cae9568 == 0) {
      local_50 = &local_30;
      local_30 = FUN_1417de738;
      local_40 = &LAB_145893408;
      local_48 = &LAB_1458cbbd2;
      local_58 = &LAB_147ba21f1;
      local_60 = &LAB_1463e9233;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x1000000c;
      local_80 = 8;
      local_88 = 0x2b8;
      FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
      lVar6 = *(longlong *)(param_2 + 0x430);
      if (lVar6 == 0) goto LAB_140f8b6b4;
    }
    if ((((DAT_14cae9568 == 0) || (lVar1 = *(longlong *)(lVar6 + 0x10), lVar1 == 0)) ||
        (*(int *)(lVar1 + 0x38) < *(int *)(DAT_14cae9568 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) !=
        DAT_14cae9568 + 0x30)) goto LAB_140f8b6b4;
    FUN_14039bfee(param_2,&local_38,(longlong)&local_38 + 4);
    uVar5 = (ulonglong)(uint)(int)((double)local_38._4_4_ * *(double *)(lVar6 + 0x98));
    pcVar4 = (code *)(ulonglong)(uint)(int)((double)(int)local_38 * *(double *)(lVar6 + 0x90));
  }
  *param_1 = (ulonglong)pcVar4 & 0xffffffff | uVar5 << 0x20;
  uVar3 = 1;
LAB_140f8b5dd:
  *(undefined1 *)(param_1 + 1) = uVar3;
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140f8b6fc FUN_140f8b6fc body=277 status=ok
// SIG undefined FUN_140f8b6fc(void)

undefined8 FUN_140f8b6fc(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_140f8b80b;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140f8b80b;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_140f8b80b:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140f8b7b9;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28));
      uVar6 = 1;
      goto LAB_140f8b7b9;
    }
  }
  uVar6 = 0;
LAB_140f8b7b9:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f8b812 FUN_140f8b812 body=110 status=ok
// SIG undefined FUN_140f8b812(void)

void FUN_140f8b812(longlong param_1)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_c = 0;
  local_20 = DAT_14c9a6400;
  local_18 = 0xffffffff;
  local_30 = DAT_14cb8c240;
  local_28 = 0xffffffff;
  FUN_140f8b8f2(param_1 + 0x7c0);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f8b882 FUN_140f8b882 body=110 status=ok
// SIG undefined FUN_140f8b882(void)

void FUN_140f8b882(longlong param_1)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_c = 0;
  local_20 = DAT_14c9a63f8;
  local_18 = 0xffffffff;
  local_30 = DAT_14cb8c240;
  local_28 = 0xffffffff;
  FUN_140f8b8f2(param_1 + 0x7c0);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f8b8f2 FUN_140f8b8f2 body=433 status=ok
// SIG undefined FUN_140f8b8f2(void)

undefined4 FUN_140f8b8f2(longlong *param_1,longlong *param_2,undefined8 param_3,float *param_4)

{
  longlong lVar1;
  float fVar2;
  longlong lVar3;
  undefined4 uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 uVar10;
  float fVar11;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *param_2;
  uVar5 = *(uint *)(param_2 + 1);
  if (lVar3 != 0 || uVar5 != 0xffffffff) {
    if ((int)uVar5 < 0) {
      lVar9 = *param_1;
      uVar7 = *(uint *)(param_1 + 1);
LAB_140f8b94b:
      if (uVar7 != 0) {
        uVar6 = (ulonglong)(int)uVar7;
        goto LAB_140f8b95e;
      }
    }
    else {
      uVar7 = *(uint *)(param_1 + 1);
      uVar6 = (ulonglong)uVar7;
      lVar9 = *param_1;
      if ((int)uVar7 <= (int)uVar5) goto LAB_140f8b94b;
      if (*(longlong *)(lVar9 + 0x68 + (ulonglong)uVar5 * 0x88) == lVar3) {
LAB_140f8b9aa:
        lVar9 = (longlong)(int)uVar5 * 0x88 + lVar9;
        if (lVar9 != 0) {
          uVar10 = FUN_1406400be(param_1);
          fVar2 = *(float *)(lVar9 + 0x84);
          local_58 = *(undefined4 *)(lVar9 + 0x80);
          local_60 = *(undefined8 *)(lVar9 + 0x78);
          fVar11 = (float)uVar10;
          if (*(char *)(param_4 + 1) == '\x01') {
            fVar11 = *param_4;
          }
          uVar4 = FUN_14173e3a4(lVar9,param_3,fVar11);
          if ((char)uVar4 != '\0') {
            uVar5 = -(uint)(fVar2 < 0.0);
            FUN_140640a12(param_1,lVar9,&local_60,
                          (ulonglong)(uVar5 & 0x7f7fffff) |
                          CONCAT44((int)((ulonglong)uVar10 >> 0x20),
                                   ~uVar5 & (uint)((float)uVar10 - fVar2)));
          }
          goto LAB_140f8ba34;
        }
        goto LAB_140f8ba32;
      }
LAB_140f8b95e:
      uVar8 = 0;
      do {
        if (*(longlong *)(lVar9 + 0x68 + uVar8) == lVar3) {
          uVar5 = (int)(uVar8 >> 3) * -0xf0f0f0f;
          *(uint *)(param_2 + 1) = uVar5;
          if (uVar5 == 0xffffffff) goto LAB_140f8ba32;
          lVar9 = *param_1;
          goto LAB_140f8b9aa;
        }
        lVar1 = lVar9 + uVar8;
        uVar8 = uVar8 + 0x88;
      } while (lVar1 + 0x88 != uVar6 * 0x88 + lVar9);
    }
    *(undefined4 *)(param_2 + 1) = 0xffffffff;
  }
LAB_140f8ba32:
  uVar4 = 0;
LAB_140f8ba34:
  if (*(char *)(param_4 + 1) == '\x01') {
    *(undefined1 *)(param_4 + 1) = 0;
  }
  if ((local_50 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 140f8baa4 FUN_140f8baa4 body=366 status=ok
// SIG undefined FUN_140f8baa4(void)

bool FUN_140f8baa4(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_118 [32];
  longlong local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  longlong local_e8 [2];
  longlong *local_d8;
  longlong local_c8 [4];
  longlong local_a8;
  longlong *local_98 [2];
  longlong local_88 [4];
  longlong local_68 [2];
  undefined8 local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_f8 = *param_2;
  *param_2 = 0;
  local_f0 = (undefined4)param_2[1];
  local_ec = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  FUN_140f8bcbc(param_1,local_e8);
  local_a8 = local_e8[0];
  local_98[0] = (longlong *)0x0;
  if (local_e8[0] == 0) {
    local_68[0] = 0;
    local_58[0] = 0;
  }
  else {
    plVar2 = local_d8;
    if (local_d8 == (longlong *)0x0) {
      plVar2 = local_c8;
    }
    (**(code **)*plVar2)(plVar2,local_98);
    local_68[0] = local_a8;
    local_58[0] = 0;
    if (local_a8 != 0) {
      plVar2 = local_98[0];
      if (local_98[0] == (longlong *)0x0) {
        plVar2 = local_88;
      }
      (**(code **)*plVar2)(plVar2,local_58);
    }
  }
  lVar1 = FUN_1407155ac(param_1,local_68);
  if (local_a8 != 0) {
    plVar2 = local_98[0];
    if (local_98[0] == (longlong *)0x0) {
      plVar2 = local_88;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (local_e8[0] != 0) {
    if (local_d8 == (longlong *)0x0) {
      local_d8 = local_c8;
    }
    (**(code **)(*local_d8 + 0x10))();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return lVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f8bc20 FUN_140f8bc20 body=59 status=ok
// SIG undefined FUN_140f8bc20(void)

undefined8 * FUN_140f8bc20(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b9aba60;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140f8bc5c FUN_140f8bc5c body=96 status=ok
// SIG undefined FUN_140f8bc5c(void)

undefined8 * FUN_140f8bc5c(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14b9aba60;
  puVar1 = (undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(param_2 + 0x20) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)(param_2 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(puVar1,iVar2,0);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
  }
  return puVar1;
}



// FUNCTION 140f8bcbc FUN_140f8bcbc body=175 status=ok
// SIG undefined FUN_140f8bcbc(void)

undefined8 * FUN_140f8bcbc(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_3;
  *param_3 = 0;
  local_40 = (undefined4)param_3[1];
  local_3c = *(undefined4 *)((longlong)param_3 + 0xc);
  param_3[1] = 0;
  FUN_140f8bd6c(param_1,&local_38);
  param_2[2] = 0;
  param_2[4] = &PTR_FUN_14b9aba60;
  param_2[5] = local_38;
  local_38 = 0;
  *(undefined4 *)(param_2 + 6) = local_30;
  *(undefined4 *)((longlong)param_2 + 0x34) = local_2c;
  *param_2 = &LAB_144267466;
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f8bd6c FUN_140f8bd6c body=399 status=ok
// SIG undefined FUN_140f8bd6c(void)

undefined8 FUN_140f8bd6c(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined2 *puVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_178 [32];
  undefined2 *local_158;
  undefined2 *local_150;
  ulonglong *local_148;
  char local_140;
  undefined2 local_138 [128];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_158 = local_138;
  local_140 = '\0';
  local_148 = &local_38;
  pvVar3 = *(void **)(param_1 + 0x10);
  uVar2 = *(uint *)(param_1 + 0x18);
  iVar4 = uVar2 - 1;
  if (uVar2 == 0) {
    iVar4 = 0;
  }
  lVar5 = (longlong)iVar4;
  local_150 = local_158;
  if (0x7f < iVar4) {
    FUN_140213274(&local_158,lVar5);
  }
  puVar1 = local_150;
  if (1 < uVar2) {
    memcpy(local_150,pvVar3,lVar5 * 2);
    local_150 = puVar1 + lVar5;
  }
  if (local_148 <= local_150 + 1) {
    FUN_140213274(&local_158,1);
  }
  puVar1 = local_150 + 1;
  *local_150 = 0x2e;
  pvVar3 = (void *)*param_3;
  uVar2 = *(uint *)(param_3 + 1);
  iVar4 = uVar2 - 1;
  if (uVar2 == 0) {
    iVar4 = 0;
  }
  lVar5 = (longlong)iVar4;
  local_150 = puVar1;
  if (local_148 <= puVar1 + lVar5) {
    FUN_140213274(&local_158,lVar5);
  }
  puVar1 = local_150;
  if (1 < uVar2) {
    memcpy(local_150,pvVar3,lVar5 * 2);
    local_150 = puVar1 + lVar5;
  }
  *local_150 = 0;
  FUN_140056680(param_2,local_158);
  if (local_140 == '\x01') {
    FUN_1400020a8(local_158);
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f8bf5a FUN_140f8bf5a body=2383 status=ok
// SIG undefined FUN_140f8bf5a(void)

void FUN_140f8bf5a(longlong param_1,byte *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  ushort uVar4;
  int iVar5;
  ushort *puVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  byte *pbVar11;
  uint uVar12;
  int iVar13;
  byte bVar14;
  longlong lVar15;
  uint *puVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_c8 [32];
  float *local_a8;
  uint local_a0;
  float local_9c;
  float *local_98;
  uint local_90;
  float local_8c;
  float *local_88;
  uint local_80;
  float local_7c;
  float *local_78;
  uint local_70;
  float local_6c;
  float *local_68;
  uint local_60;
  float local_5c;
  float *local_58;
  uint local_50;
  float local_4c;
  float *local_48;
  uint local_40;
  float local_3c;
  float *local_38;
  uint local_30;
  float local_2c;
  float *local_28;
  uint local_20;
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*param_2 == 1) {
    iVar13 = *(int *)(param_2 + 0x30);
    uVar8 = (uint)*(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar13);
    *(int *)(param_2 + 0x30) = iVar13 + 1;
    lVar15 = *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar13 * 8);
    iVar13 = *(int *)(param_2 + 0x44) * uVar8;
    bVar14 = 1;
  }
  else {
    puVar6 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar4 = *puVar6;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar6 + 1;
    uVar12 = uVar4 & 0x7fff;
    uVar8 = (uint)(uVar4 >> 0xf);
    lVar7 = *(longlong *)(param_2 + 0x80);
    if ((short)uVar4 < 0) {
      lVar15 = (ulonglong)(uVar12 * *(int *)(lVar7 + 0x80)) + *(longlong *)(lVar7 + 0x70);
    }
    else {
      iVar13 = **(int **)(lVar7 + 0x20);
      lVar15 = 0;
      if (iVar13 <= (int)uVar12) {
        do {
          uVar12 = uVar12 - iVar13;
          iVar13 = (*(int **)(lVar7 + 0x20))[lVar15 + 1];
          lVar15 = lVar15 + 1;
        } while (iVar13 <= (int)uVar12);
      }
      lVar15 = (longlong)(int)uVar12 + *(longlong *)(*(longlong *)(lVar7 + 0x18) + lVar15 * 8);
    }
    iVar13 = *(int *)(lVar7 + 0x4c) * uVar8;
    bVar14 = *param_2;
  }
  if ((bVar14 & 1) == 0) {
    puVar6 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar4 = *puVar6;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar6 + 1;
    uVar12 = uVar4 & 0x7fff;
    if (uVar12 == 0x7fff) {
      local_48 = &local_3c;
      local_40 = 0;
    }
    else {
      lVar7 = *(longlong *)(param_2 + 0x80);
      local_40 = 1;
      local_48 = (float *)((ulonglong)(uVar12 * *(int *)(lVar7 + 0x80)) +
                           *(longlong *)(lVar7 + 0x70) + (longlong)*(int *)(lVar7 + 0x4c) * 4);
    }
  }
  else {
    iVar5 = *(int *)(param_2 + 0x30);
    bVar14 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar5);
    local_40 = (uint)bVar14;
    *(int *)(param_2 + 0x30) = iVar5 + 1;
    local_48 = (float *)((longlong)*(int *)(param_2 + 0x44) * (ulonglong)bVar14 * 4 +
                        *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar5 * 8));
  }
  if (*param_2 == 1) {
    iVar5 = *(int *)(param_2 + 0x30);
    bVar14 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar5);
    local_30 = (uint)bVar14;
    *(int *)(param_2 + 0x30) = iVar5 + 1;
    local_38 = (float *)((longlong)*(int *)(param_2 + 0x44) * (ulonglong)bVar14 * 4 +
                        *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar5 * 8));
  }
  else {
    puVar6 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar4 = *puVar6;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar6 + 1;
    uVar12 = uVar4 & 0x7fff;
    if (uVar12 == 0x7fff) {
      local_38 = &local_2c;
      local_30 = 0;
    }
    else {
      lVar7 = *(longlong *)(param_2 + 0x80);
      local_30 = 1;
      local_38 = (float *)((ulonglong)(uVar12 * *(int *)(lVar7 + 0x80)) +
                           *(longlong *)(lVar7 + 0x70) + (longlong)*(int *)(lVar7 + 0x4c) * 4);
    }
  }
  if (*param_2 == 1) {
    iVar5 = *(int *)(param_2 + 0x30);
    bVar14 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar5);
    local_20 = (uint)bVar14;
    *(int *)(param_2 + 0x30) = iVar5 + 1;
    local_28 = (float *)((longlong)*(int *)(param_2 + 0x44) * (ulonglong)bVar14 * 4 +
                        *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar5 * 8));
  }
  else {
    puVar6 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar4 = *puVar6;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar6 + 1;
    uVar12 = uVar4 & 0x7fff;
    if (uVar12 == 0x7fff) {
      local_28 = &local_1c;
      local_20 = 0;
    }
    else {
      lVar7 = *(longlong *)(param_2 + 0x80);
      local_20 = 1;
      local_28 = (float *)((ulonglong)(uVar12 * *(int *)(lVar7 + 0x80)) +
                           *(longlong *)(lVar7 + 0x70) + (longlong)*(int *)(lVar7 + 0x4c) * 4);
    }
  }
  if (*param_2 == 1) {
    iVar5 = *(int *)(param_2 + 0x30);
    bVar14 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar5);
    local_70 = (uint)bVar14;
    *(int *)(param_2 + 0x30) = iVar5 + 1;
    local_78 = (float *)((longlong)*(int *)(param_2 + 0x44) * (ulonglong)bVar14 * 4 +
                        *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar5 * 8));
  }
  else {
    puVar6 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar4 = *puVar6;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar6 + 1;
    uVar12 = uVar4 & 0x7fff;
    if (uVar12 == 0x7fff) {
      local_78 = &local_6c;
      local_70 = 0;
    }
    else {
      lVar7 = *(longlong *)(param_2 + 0x80);
      local_70 = 1;
      local_78 = (float *)((ulonglong)(uVar12 * *(int *)(lVar7 + 0x80)) +
                           *(longlong *)(lVar7 + 0x70) + (longlong)*(int *)(lVar7 + 0x4c) * 4);
    }
  }
  if (*param_2 == 1) {
    iVar5 = *(int *)(param_2 + 0x30);
    bVar14 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar5);
    local_60 = (uint)bVar14;
    *(int *)(param_2 + 0x30) = iVar5 + 1;
    local_68 = (float *)((longlong)*(int *)(param_2 + 0x44) * (ulonglong)bVar14 * 4 +
                        *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar5 * 8));
  }
  else {
    puVar6 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar4 = *puVar6;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar6 + 1;
    uVar12 = uVar4 & 0x7fff;
    if (uVar12 == 0x7fff) {
      local_68 = &local_5c;
      local_60 = 0;
    }
    else {
      lVar7 = *(longlong *)(param_2 + 0x80);
      local_60 = 1;
      local_68 = (float *)((ulonglong)(uVar12 * *(int *)(lVar7 + 0x80)) +
                           *(longlong *)(lVar7 + 0x70) + (longlong)*(int *)(lVar7 + 0x4c) * 4);
    }
  }
  if (*param_2 == 1) {
    iVar5 = *(int *)(param_2 + 0x30);
    bVar14 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar5);
    local_50 = (uint)bVar14;
    *(int *)(param_2 + 0x30) = iVar5 + 1;
    local_58 = (float *)((longlong)*(int *)(param_2 + 0x44) * (ulonglong)bVar14 * 4 +
                        *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar5 * 8));
  }
  else {
    puVar6 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar4 = *puVar6;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar6 + 1;
    uVar12 = uVar4 & 0x7fff;
    if (uVar12 == 0x7fff) {
      local_58 = &local_4c;
      local_50 = 0;
    }
    else {
      lVar7 = *(longlong *)(param_2 + 0x80);
      local_50 = 1;
      local_58 = (float *)((ulonglong)(uVar12 * *(int *)(lVar7 + 0x80)) +
                           *(longlong *)(lVar7 + 0x70) + (longlong)*(int *)(lVar7 + 0x4c) * 4);
    }
  }
  if (*param_2 == 1) {
    iVar5 = *(int *)(param_2 + 0x30);
    bVar14 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar5);
    local_a0 = (uint)bVar14;
    *(int *)(param_2 + 0x30) = iVar5 + 1;
    local_a8 = (float *)((longlong)*(int *)(param_2 + 0x44) * (ulonglong)bVar14 * 4 +
                        *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar5 * 8));
  }
  else {
    puVar6 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar4 = *puVar6;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar6 + 1;
    uVar12 = uVar4 & 0x7fff;
    if (uVar12 == 0x7fff) {
      local_a8 = &local_9c;
      local_a0 = 0;
    }
    else {
      lVar7 = *(longlong *)(param_2 + 0x80);
      local_a0 = 1;
      local_a8 = (float *)((ulonglong)(uVar12 * *(int *)(lVar7 + 0x80)) +
                           *(longlong *)(lVar7 + 0x70) + (longlong)*(int *)(lVar7 + 0x4c) * 4);
    }
  }
  if (*param_2 == 1) {
    iVar5 = *(int *)(param_2 + 0x30);
    bVar14 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar5);
    local_90 = (uint)bVar14;
    *(int *)(param_2 + 0x30) = iVar5 + 1;
    local_98 = (float *)((longlong)*(int *)(param_2 + 0x44) * (ulonglong)bVar14 * 4 +
                        *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar5 * 8));
  }
  else {
    puVar6 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar4 = *puVar6;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar6 + 1;
    uVar12 = uVar4 & 0x7fff;
    if (uVar12 == 0x7fff) {
      local_98 = &local_8c;
      local_90 = 0;
    }
    else {
      lVar7 = *(longlong *)(param_2 + 0x80);
      local_90 = 1;
      local_98 = (float *)((ulonglong)(uVar12 * *(int *)(lVar7 + 0x80)) +
                           *(longlong *)(lVar7 + 0x70) + (longlong)*(int *)(lVar7 + 0x4c) * 4);
    }
  }
  if (*param_2 == 1) {
    iVar5 = *(int *)(param_2 + 0x30);
    bVar14 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar5);
    local_80 = (uint)bVar14;
    *(int *)(param_2 + 0x30) = iVar5 + 1;
    local_88 = (float *)((longlong)*(int *)(param_2 + 0x44) * (ulonglong)bVar14 * 4 +
                        *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar5 * 8));
  }
  else {
    puVar6 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar4 = *puVar6;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar6 + 1;
    uVar12 = uVar4 & 0x7fff;
    if (uVar12 == 0x7fff) {
      local_88 = &local_7c;
      local_80 = 0;
    }
    else {
      lVar7 = *(longlong *)(param_2 + 0x80);
      local_80 = 1;
      local_88 = (float *)((ulonglong)(uVar12 * *(int *)(lVar7 + 0x80)) +
                           *(longlong *)(lVar7 + 0x70) + (longlong)*(int *)(lVar7 + 0x4c) * 4);
    }
  }
  pbVar11 = (byte *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != 0) {
    pbVar11 = param_2 + 0x3c;
  }
  if (0 < *(int *)pbVar11) {
    puVar16 = (uint *)(lVar15 + (longlong)iVar13 * 4);
    iVar13 = 0;
    do {
      if (*(int *)(param_1 + 0x48) < 1) {
        fVar19 = 0.0;
        fVar18 = 0.0;
        fVar17 = 0.0;
        fVar20 = 0.0;
        fVar21 = 0.0;
        fVar22 = 0.0;
      }
      else {
        uVar9 = *(int *)(param_1 + 0x48) - 1;
        uVar12 = *puVar16;
        puVar16 = puVar16 + uVar8;
        if ((int)uVar12 < (int)uVar9) {
          uVar9 = uVar12;
        }
        uVar10 = (ulonglong)uVar9;
        if ((int)uVar9 < 1) {
          uVar10 = 0;
        }
        lVar15 = *(longlong *)(param_1 + 0x40);
        fVar20 = *(float *)(lVar15 + uVar10 * 0x18);
        fVar21 = *(float *)(lVar15 + 4 + uVar10 * 0x18);
        fVar22 = *(float *)(lVar15 + 8 + uVar10 * 0x18);
        fVar19 = *(float *)(lVar15 + 0xc + uVar10 * 0x18);
        fVar18 = *(float *)(lVar15 + 0x10 + uVar10 * 0x18);
        fVar17 = *(float *)(lVar15 + 0x14 + uVar10 * 0x18);
      }
      *local_48 = fVar20;
      *local_38 = fVar21;
      *local_28 = fVar22;
      local_48 = local_48 + (int)local_40;
      local_38 = local_38 + (int)local_30;
      local_28 = local_28 + (int)local_20;
      *local_78 = fVar19;
      *local_68 = fVar18;
      *local_58 = fVar17;
      pfVar1 = local_a8 + (int)local_a0;
      local_78 = local_78 + (int)local_70;
      local_68 = local_68 + (int)local_60;
      local_58 = local_58 + (int)local_50;
      *local_a8 = fVar19 - fVar20;
      pfVar2 = local_98 + (int)local_90;
      *local_98 = fVar18 - fVar21;
      pfVar3 = local_88 + (int)local_80;
      *local_88 = fVar17 - fVar22;
      iVar13 = iVar13 + 1;
      pbVar11 = (byte *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != 0) {
        pbVar11 = param_2 + 0x3c;
      }
      local_a8 = pfVar1;
      local_98 = pfVar2;
      local_88 = pfVar3;
    } while (iVar13 < *(int *)pbVar11);
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f8c8aa FUN_140f8c8aa body=291 status=ok
// SIG undefined FUN_140f8c8aa(void)

void FUN_140f8c8aa(longlong param_1,char *param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  ushort uVar3;
  undefined4 uVar4;
  ushort *puVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  undefined1 auStack_38 [32];
  undefined4 *local_18;
  uint local_10;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*param_2 == '\x01') {
    iVar8 = *(int *)(param_2 + 0x30);
    bVar2 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar8);
    local_10 = (uint)bVar2;
    *(int *)(param_2 + 0x30) = iVar8 + 1;
    local_18 = (undefined4 *)
               ((longlong)*(int *)(param_2 + 0x44) * (ulonglong)bVar2 * 4 +
               *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar8 * 8));
  }
  else {
    puVar5 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar3 = *puVar5;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar5 + 1;
    uVar7 = uVar3 & 0x7fff;
    if (uVar7 == 0x7fff) {
      local_18 = &local_c;
      local_10 = 0;
    }
    else {
      lVar6 = *(longlong *)(param_2 + 0x80);
      local_10 = 1;
      local_18 = (undefined4 *)
                 ((ulonglong)(uVar7 * *(int *)(lVar6 + 0x80)) + *(longlong *)(lVar6 + 0x70) +
                 (longlong)*(int *)(lVar6 + 0x4c) * 4);
    }
  }
  piVar9 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar9 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar9) {
    uVar4 = *(undefined4 *)(param_1 + 0x48);
    iVar8 = 0;
    do {
      puVar1 = local_18 + (int)local_10;
      *local_18 = uVar4;
      iVar8 = iVar8 + 1;
      piVar9 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar9 = (int *)(param_2 + 0x3c);
      }
      local_18 = puVar1;
    } while (iVar8 < *piVar9);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f8c9e4 FUN_140f8c9e4 body=128 status=ok
// SIG undefined FUN_140f8c9e4(void)

void FUN_140f8c9e4(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(byte *)(param_1 + 0x1151) & 1) == 0) {
    FUN_1446f470e(local_20,L"OnRep_Thrown",1);
    FUN_140721fbe(param_1 + 0x1328,local_20);
  }
  else if (*(char *)(param_1 + 0x136a) == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f8ca76 FUN_140f8ca76 body=322 status=ok
// SIG undefined FUN_140f8ca76(void)

char * FUN_140f8ca76(longlong *param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x180))();
  iVar4 = (**(code **)*plVar5)(plVar5);
  if (0 < iVar4) {
    uVar6 = iVar4 + 1;
    do {
      (**(code **)(*plVar5 + 0x10))(plVar5,&local_50,uVar6 - 2);
      (**(code **)(*local_50 + 0x68))(local_50,param_2,param_3,param_4);
      if (*param_2 != '\0') {
        if (local_48 != (longlong *)0x0) {
          LOCK();
          plVar5 = local_48 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
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
        goto LAB_140f8cb53;
      }
      FUN_14493db24(param_2);
      plVar3 = local_48;
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_48 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      uVar6 = uVar6 - 1;
    } while (1 < uVar6);
  }
  *param_2 = '\0';
  param_2[0x20] = '\0';
  param_2[8] = '\0';
  param_2[9] = '\0';
  param_2[10] = '\0';
  param_2[0xb] = '\0';
  param_2[0xc] = '\0';
  param_2[0xd] = '\0';
  param_2[0xe] = '\0';
  param_2[0xf] = '\0';
  param_2[0x10] = '\0';
  param_2[0x11] = '\0';
  param_2[0x12] = '\0';
  param_2[0x13] = '\0';
  param_2[0x14] = '\0';
  param_2[0x15] = '\0';
  param_2[0x16] = '\0';
  param_2[0x17] = '\0';
  memset(param_2 + 0x28,0,0x88);
  param_2[0xb0] = '\x02';
  param_2[0xb1] = '\a';
  param_2[0xb2] = '\x02';
  param_2[0xb3] = '\0';
  param_2[0xb4] = '\0';
LAB_140f8cb53:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f8cbba FUN_140f8cbba body=217 status=ok
// SIG undefined FUN_140f8cbba(void)

undefined1 *
FUN_140f8cbba(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  
  if (((*(byte *)(param_1 + 0x39) & 8) == 0) || (cVar1 = FUN_140f8cc94(), cVar1 != '\0')) {
    *param_2 = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
  }
  else {
    FUN_1407c952c(param_1,param_2,param_3,param_4,2);
    if ((longlong)*(int *)(param_1 + 0x2f0) != 0) {
      lVar2 = 0;
      do {
        if ((*(int *)(*(longlong *)(param_1 + 0x2e8) + 8 + lVar2) != 0) &&
           (*(longlong *)(*(longlong *)(param_1 + 0x2e8) + lVar2) != 0)) {
          FUN_148a02f68(param_1 + 0x2e8,param_3,param_4,2,*param_2);
          return param_2;
        }
        lVar2 = lVar2 + 0x10;
      } while ((longlong)*(int *)(param_1 + 0x2f0) * 0x10 != lVar2);
    }
  }
  return param_2;
}



// FUNCTION 140f8cc94 FUN_140f8cc94 body=104 status=ok
// SIG undefined FUN_140f8cc94(void)

undefined8 FUN_140f8cc94(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  lVar3 = *(longlong *)(param_2 + 0x40);
  plVar4 = *(longlong **)(param_2 + 0x50);
  lVar5 = DAT_14c966fa0;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    lVar5 = DAT_14c966fa0;
    UNLOCK();
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
  if ((lVar3 != lVar5) || (uVar6 = 1, *(char *)(param_1 + 0x308) == '\0')) {
    uVar6 = 0;
  }
  return uVar6;
}



// FUNCTION 140f8ccfc FUN_140f8ccfc body=381 status=ok
// SIG undefined FUN_140f8ccfc(void)

void FUN_140f8ccfc(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14bb77650;
  if (param_1[0x38] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[0x34] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x34] + 0x10))();
  }
  FUN_140f8ce79(param_1[0x31],*(undefined4 *)(param_1 + 0x32));
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  FUN_140f8ce79(param_1[0x2f],*(undefined4 *)(param_1 + 0x30));
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 0x26;
  if (*(int *)(param_1 + 0x27) == 0) {
LAB_140f8cd95:
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(plVar1,0,0,0x10);
      *(undefined4 *)(param_1 + 0x27) = 0;
      goto LAB_140f8cd95;
    }
  }
  plVar1 = param_1 + 0x24;
  if (*(int *)(param_1 + 0x25) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_140f8cdbd;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x25) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_140f8cdbd:
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  FUN_140f8ceac(param_1);
  return;
}



// FUNCTION 140f8ce79 FUN_140f8ce79 body=50 status=ok
// SIG undefined FUN_140f8ce79(void)

void FUN_140f8ce79(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if ((longlong *)*plVar1 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar1 + 0x10))();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140f8ceac FUN_140f8ceac body=106 status=ok
// SIG undefined FUN_140f8ceac(void)

void FUN_140f8ceac(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14bad5c20;
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[9];
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
                    /* WARNING: Could not recover jumptable at 0x000140f8cf12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140f8cf16 FUN_140f8cf16 body=126 status=ok
// SIG undefined FUN_140f8cf16(void)

undefined8 * FUN_140f8cf16(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a84ec00;
  FUN_140f8cf94(param_1[0x57],*(undefined4 *)(param_1 + 0x58));
  if (param_1[0x57] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x55] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x53] != 0) {
    FUN_1400020a8();
  }
  FUN_140064e2c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140f8cf94 FUN_140f8cf94 body=63 status=ok
// SIG undefined FUN_140f8cf94(void)

void FUN_140f8cf94(longlong param_1,int param_2)

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
      plVar1 = plVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140f8cfe2 FUN_140f8cfe2 body=40 status=ok
// SIG undefined FUN_140f8cfe2(void)

undefined8 FUN_140f8cfe2(undefined8 param_1,int param_2)

{
  FUN_1407f61d0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140f8d00a FUN_140f8d00a body=362 status=ok
// SIG undefined FUN_140f8d00a(void)

void FUN_140f8d00a(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar6 = (**(code **)(*(longlong *)(param_1 + -0x30) + 0x180))(param_1 + -0x30);
  if (lVar6 != 0) {
    lVar7 = FUN_1402735c8();
    local_48 = 0;
    uStack_40 = 0;
    FUN_140f8d196(lVar7 + 0x720);
    if (*(int *)(param_1 + 0x20) != 0) {
      plVar1 = (longlong *)(param_1 + 0x18);
      if ((longlong *)*plVar1 != (longlong *)0x0) {
        cVar5 = (**(code **)(*(longlong *)*plVar1 + 0x30))();
        if (cVar5 != '\0') {
          if ((*(int *)(param_1 + 0x20) == 0) ||
             (plVar2 = (longlong *)*plVar1, plVar2 == (longlong *)0x0)) {
            local_50 = 0;
          }
          else {
            (**(code **)(*plVar2 + 0x38))(plVar2,&local_50);
          }
          if ((longlong)(int)uStack_40 != 0) {
            lVar9 = (longlong)(int)uStack_40 * 0x38;
            lVar7 = local_48;
            do {
              cVar5 = FUN_140114204(lVar7);
              uVar4 = local_50;
              if (cVar5 != '\0') {
                lVar8 = FUN_140149a73(lVar6,0);
                if (lVar8 != 0) {
                  FUN_140825b72(lVar7,uVar4,lVar8,0);
                }
              }
              lVar7 = lVar7 + 0x38;
              lVar9 = lVar9 + -0x38;
            } while (lVar9 != 0);
          }
          if ((*(int *)(param_1 + 0x20) != 0) &&
             (puVar3 = (undefined8 *)*plVar1, puVar3 != (undefined8 *)0x0)) {
            (**(code **)*puVar3)(puVar3,0);
            FUN_1446efa72(plVar1,0,0,0x10);
            *(undefined4 *)(param_1 + 0x20) = 0;
          }
        }
      }
    }
    FUN_1405d7ab2(local_48,uStack_40 & 0xffffffff);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f8d176 FUN_140f8d176 body=31 status=ok
// SIG undefined FUN_140f8d176(void)

undefined8 FUN_140f8d176(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140f8d196 FUN_140f8d196 body=1345 status=ok
// SIG undefined FUN_140f8d196(void)

void FUN_140f8d196(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined4 uVar13;
  int iVar14;
  longlong lVar15;
  undefined1 auStack_148 [36];
  int local_124;
  longlong *local_120;
  int local_114 [2];
  int local_10c;
  int local_108 [2];
  int local_100;
  int local_fc [2];
  int local_f4;
  int local_f0 [2];
  int local_e8;
  int local_e4 [2];
  int local_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  longlong local_98;
  int local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  int local_70;
  undefined4 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  iVar4 = *(int *)((longlong)param_2 + 0xc);
  FUN_1405d7ab2(*param_2,(int)param_2[1]);
  *(undefined4 *)(param_2 + 1) = 0;
  if ((iVar4 < 0) && (*(int *)((longlong)param_2 + 0xc) != 0)) {
    FUN_140f8dd3e(param_2,0);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_ac = 0xffffffff00000080;
  local_a4 = 0;
  local_98 = 0;
  local_90 = 0;
  uVar9 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar9 != 0) {
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar9);
    }
    FUN_140f8e2aa(&local_d8,uVar9);
    if (uVar9 < 4) {
      iVar4 = 1;
    }
    else {
      uVar9 = (uVar9 | 1) + 0xe;
      iVar4 = 0x1f;
      if (uVar9 != 0) {
        for (; uVar9 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      iVar4 = 1 << ((byte)iVar4 & 0x1f);
    }
    if ((local_90 == 0) || (local_90 < iVar4)) {
      local_90 = iVar4;
      FUN_140f8ddac();
    }
  }
  iVar4 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar4);
  }
  if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
    FUN_140f8dd3e();
  }
  local_80 = param_1 + 2;
  local_88 = 0x100000000;
  local_78 = 0xffffffff;
  local_70 = 0;
  if ((int)param_1[5] == 0) {
    uVar10 = 1;
    local_78._0_4_ = 0xffffffff;
    local_78._4_4_ = 0;
    local_88._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_88);
    uVar10 = local_88 >> 0x20;
  }
  iVar14 = (int)local_88;
  uVar9 = (uint)local_78;
  iVar6 = local_78._4_4_;
  iVar4 = local_70;
  plVar8 = local_80;
  if (local_78._4_4_ < (int)local_80[3]) {
    do {
      local_120 = plVar8;
      lVar15 = (longlong)iVar6 * 0x238;
      lVar11 = *param_1 + lVar15;
      local_124 = iVar4;
      if (*(char *)(*param_1 + lVar15) == '\x01') {
        FUN_1447a97f4(&local_88,lVar11 + 0x10);
        if (0 < local_88._4_4_) {
          iVar4 = 0;
          do {
            FUN_144a7c8fe(&local_88,local_e4,iVar4,1);
            if ((((((local_e4[0] == DAT_14cb7beb0) && (local_dc == DAT_14cb7beb8)) ||
                  ((FUN_144a7c8fe(&local_88,local_f0,iVar4,1), local_f0[0] == DAT_14cb7bec8 &&
                   (local_e8 == DAT_14cb7bed0)))) ||
                 ((FUN_144a7c8fe(&local_88,local_fc,iVar4,1), local_fc[0] == DAT_14cb7bee0 &&
                  (local_f4 == DAT_14cb7bee8)))) ||
                ((FUN_144a7c8fe(&local_88,local_108,iVar4,1), local_108[0] == DAT_14cb7bef8 &&
                 (local_100 == DAT_14cb7bf00)))) ||
               ((FUN_144a7c8fe(&local_88,local_114,iVar4,1), local_114[0] == DAT_14cb7bf10 &&
                (local_10c == DAT_14cb7bf18)))) {
              FUN_1402b5374(&local_88,iVar4,0);
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < local_88._4_4_);
        }
        uVar13 = (int)local_88;
        if (CONCAT44(uStack_6c,local_70) != 0) {
          FUN_1400020a8();
        }
      }
      else {
        uVar13 = *(undefined4 *)(lVar11 + 0x10);
      }
      iVar4 = FUN_140f8dafc(&local_d8,uVar13,lVar11);
      if (iVar4 == -1) {
        puVar12 = (undefined8 *)(*param_1 + lVar15);
        iVar4 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar4 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
          FUN_140f12bd2(param_2,iVar4);
        }
        puVar7 = (undefined8 *)((longlong)iVar4 * 0x38 + *param_2);
        *(undefined2 *)puVar7 = 0;
        *(undefined8 *)((longlong)puVar7 + 4) = 0;
        puVar7[2] = 0;
        puVar7[3] = 0;
        *(undefined4 *)(puVar7 + 4) = 0;
        puVar7[5] = 0;
        puVar7[6] = 0;
        *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar12 + 1);
        *puVar7 = *puVar12;
        FUN_1447715ec(puVar7 + 2,puVar12 + 2);
        FUN_140f8d6d8(&local_d8,&local_88,lVar15 + *param_1,0);
      }
      uVar9 = uVar9 & ~(uint)uVar10;
      plVar8 = (longlong *)local_120[2];
      if ((longlong *)local_120[2] == (longlong *)0x0) {
        plVar8 = local_120;
      }
      iVar2 = (int)local_120[3];
      lVar11 = (longlong)iVar14;
      uVar5 = *(uint *)((longlong)plVar8 + lVar11 * 4) & uVar9;
      iVar4 = local_124;
      if (uVar5 == 0) {
        iVar6 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar6 = iVar2 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar3 = iVar6;
        if (iVar6 < iVar14) {
          iVar3 = iVar14;
        }
        if (iVar6 <= iVar14) break;
        lVar15 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar5 = *(uint *)((longlong)plVar8 + lVar15 * 4 + lVar11 * 4 + 4);
          if (uVar5 != 0) break;
          lVar15 = lVar15 + 1;
          if (iVar3 - lVar11 == lVar15) goto LAB_140f8d632;
        }
        iVar14 = iVar14 + (int)lVar15 + 1;
        uVar9 = 0xffffffff;
      }
      uVar10 = (ulonglong)(-uVar5 & uVar5);
      uVar1 = uVar10 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar6 = (iVar4 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      plVar8 = local_120;
    } while (iVar6 < iVar2);
  }
LAB_140f8d632:
  local_90 = 0;
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  FUN_140292ea0(&local_d8);
  if ((local_60 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f8d6d8 FUN_140f8d6d8 body=895 status=ok
// SIG undefined FUN_140f8d6d8(void)

undefined4 *
FUN_140f8d6d8(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  uint *puVar1;
  char *pcVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  undefined1 *puVar10;
  bool bVar11;
  bool bVar12;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 *local_90;
  undefined4 local_84;
  undefined4 local_80 [2];
  char *local_78;
  uint local_70;
  int local_6c;
  undefined1 local_68 [16];
  undefined1 *local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_140f8db68(param_1,local_80);
  pcVar2 = local_78;
  pcVar2[0] = '\0';
  pcVar2[1] = '\0';
  pcVar2[4] = '\0';
  pcVar2[5] = '\0';
  pcVar2[6] = '\0';
  pcVar2[7] = '\0';
  pcVar2[8] = '\0';
  pcVar2[9] = '\0';
  pcVar2[10] = '\0';
  pcVar2[0xb] = '\0';
  puVar1 = (uint *)(local_78 + 0x10);
  pcVar2[0x10] = '\0';
  pcVar2[0x11] = '\0';
  pcVar2[0x12] = '\0';
  pcVar2[0x13] = '\0';
  pcVar2[0x14] = '\0';
  pcVar2[0x15] = '\0';
  pcVar2[0x16] = '\0';
  pcVar2[0x17] = '\0';
  pcVar2[0x18] = '\0';
  pcVar2[0x19] = '\0';
  pcVar2[0x1a] = '\0';
  pcVar2[0x1b] = '\0';
  pcVar2[0x1c] = '\0';
  pcVar2[0x1d] = '\0';
  pcVar2[0x1e] = '\0';
  pcVar2[0x1f] = '\0';
  pcVar2[0x20] = '\0';
  pcVar2[0x21] = '\0';
  pcVar2[0x22] = '\0';
  pcVar2[0x23] = '\0';
  pcVar2[0x28] = '\0';
  pcVar2[0x29] = '\0';
  pcVar2[0x2a] = '\0';
  pcVar2[0x2b] = '\0';
  pcVar2[0x2c] = '\0';
  pcVar2[0x2d] = '\0';
  pcVar2[0x2e] = '\0';
  pcVar2[0x2f] = '\0';
  pcVar2[0x30] = '\0';
  pcVar2[0x31] = '\0';
  pcVar2[0x32] = '\0';
  pcVar2[0x33] = '\0';
  pcVar2[0x34] = '\0';
  pcVar2[0x35] = '\0';
  pcVar2[0x36] = '\0';
  pcVar2[0x37] = '\0';
  *(undefined4 *)(local_78 + 8) = *(undefined4 *)(param_3 + 1);
  *(undefined8 *)local_78 = *param_3;
  FUN_1447715ec(puVar1,param_3 + 2);
  pcVar2[0x38] = -1;
  pcVar2[0x39] = -1;
  pcVar2[0x3a] = -1;
  pcVar2[0x3b] = -1;
  local_84 = local_80[0];
  if (*local_78 == '\x01') {
    local_90 = param_2;
    FUN_1447a97f4(&local_70,puVar1);
    if (0 < local_6c) {
      lVar6 = 0;
      uVar4 = 0;
      iVar7 = local_6c;
      uVar5 = DAT_14c948000;
      do {
        bVar11 = local_70 != 0;
        bVar12 = local_70 != uVar5;
        piVar8 = &DAT_14c948620;
        piVar9 = (int *)&DAT_14c948618;
        if (bVar12 && bVar11) {
          puVar10 = local_68;
          if (0 < local_4c) {
            puVar10 = local_58;
          }
          if (1 < iVar7) {
            puVar10 = local_58;
          }
          piVar8 = (int *)(puVar10 + lVar6 + 8);
          piVar9 = (int *)(puVar10 + lVar6);
        }
        if ((*piVar9 == DAT_14cb7beb0) && (*piVar8 == DAT_14cb7beb8)) {
LAB_140f8da01:
          FUN_1402b5374(&local_70,uVar4 & 0xffffffff,0);
          iVar7 = local_6c;
          uVar5 = DAT_14c948000;
        }
        else {
          piVar8 = &DAT_14c948620;
          piVar9 = (int *)&DAT_14c948618;
          if (bVar12 && bVar11) {
            puVar10 = local_68;
            if (0 < local_4c) {
              puVar10 = local_58;
            }
            if (1 < iVar7) {
              puVar10 = local_58;
            }
            piVar8 = (int *)(puVar10 + lVar6 + 8);
            piVar9 = (int *)(puVar10 + lVar6);
          }
          if ((*piVar9 == DAT_14cb7bec8) && (*piVar8 == DAT_14cb7bed0)) goto LAB_140f8da01;
          piVar8 = &DAT_14c948620;
          piVar9 = (int *)&DAT_14c948618;
          if (bVar12 && bVar11) {
            puVar10 = local_68;
            if (0 < local_4c) {
              puVar10 = local_58;
            }
            if (1 < iVar7) {
              puVar10 = local_58;
            }
            piVar8 = (int *)(puVar10 + lVar6 + 8);
            piVar9 = (int *)(puVar10 + lVar6);
          }
          if ((*piVar9 == DAT_14cb7bee0) && (*piVar8 == DAT_14cb7bee8)) goto LAB_140f8da01;
          piVar8 = &DAT_14c948620;
          piVar9 = (int *)&DAT_14c948618;
          if (bVar12 && bVar11) {
            puVar10 = local_68;
            if (0 < local_4c) {
              puVar10 = local_58;
            }
            if (1 < iVar7) {
              puVar10 = local_58;
            }
            piVar8 = (int *)(puVar10 + lVar6 + 8);
            piVar9 = (int *)(puVar10 + lVar6);
          }
          if ((*piVar9 == DAT_14cb7bef8) && (*piVar8 == DAT_14cb7bf00)) goto LAB_140f8da01;
          piVar8 = &DAT_14c948620;
          piVar9 = (int *)&DAT_14c948618;
          if (bVar12 && bVar11) {
            puVar10 = local_68;
            if (0 < local_4c) {
              puVar10 = local_58;
            }
            if (1 < iVar7) {
              puVar10 = local_58;
            }
            piVar8 = (int *)(puVar10 + lVar6 + 8);
            piVar9 = (int *)(puVar10 + lVar6);
          }
          if ((*piVar9 == DAT_14cb7bf10) && (*piVar8 == DAT_14cb7bf18)) goto LAB_140f8da01;
        }
        uVar4 = uVar4 + 1;
        lVar6 = lVar6 + 0xc;
      } while ((longlong)uVar4 < (longlong)iVar7);
    }
    param_2 = local_90;
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
      param_2 = local_90;
    }
  }
  else {
    local_70 = *puVar1;
  }
  local_98 = param_4;
  cVar3 = FUN_140f8da58(param_1,local_70,local_78,&local_84);
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar5 < 4) {
      iVar7 = 1;
    }
    else {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      local_70 = *(int *)(param_1 + 0x48) - 1U & local_70;
      *(uint *)(local_78 + 0x3c) = local_70;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_78 + 0x38) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)local_70) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)local_70) * 4) = local_84;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_140f8ddac(param_1);
    }
  }
  *param_2 = local_84;
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140f8da58 FUN_140f8da58 body=163 status=ok
// SIG undefined FUN_140f8da58(void)

void FUN_140f8da58(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4,
                  undefined1 *param_5)

{
  undefined4 *puVar1;
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
  undefined4 uVar13;
  undefined1 uVar14;
  int iVar15;
  
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar15 = FUN_140f8dafc();
    if (iVar15 != -1) {
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar15 * 0x40);
      if (*(longlong *)(*param_1 + 0x28 + (longlong)iVar15 * 0x40) != 0) {
        FUN_1400020a8();
      }
      uVar2 = *param_3;
      uVar3 = param_3[1];
      uVar4 = param_3[2];
      uVar5 = param_3[3];
      uVar6 = param_3[4];
      uVar7 = param_3[5];
      uVar8 = param_3[6];
      uVar9 = param_3[7];
      uVar10 = param_3[8];
      uVar11 = param_3[9];
      uVar12 = param_3[10];
      uVar13 = param_3[0xb];
      *(undefined8 *)(puVar1 + 0xc) = *(undefined8 *)(param_3 + 0xc);
      puVar1[8] = uVar10;
      puVar1[9] = uVar11;
      puVar1[10] = uVar12;
      puVar1[0xb] = uVar13;
      puVar1[4] = uVar6;
      puVar1[5] = uVar7;
      puVar1[6] = uVar8;
      puVar1[7] = uVar9;
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      FUN_1457d66a6(param_1,*param_4,1);
      *param_4 = iVar15;
      uVar14 = 1;
      goto LAB_140f8da8c;
    }
  }
  uVar14 = 0;
LAB_140f8da8c:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar14;
  }
  return;
}



// FUNCTION 140f8dafc FUN_140f8dafc body=108 status=ok
// SIG undefined FUN_140f8dafc(void)

int FUN_140f8dafc(longlong *param_1,uint param_2,undefined8 param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        cVar1 = FUN_14493b798(lVar3 + (longlong)iVar4 * 0x40,param_3);
        if (cVar1 != '\0') {
          return iVar4;
        }
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x38 + (longlong)iVar4 * 0x40);
      } while (iVar4 != -1);
    }
  }
  return -1;
}



// FUNCTION 140f8db68 FUN_140f8db68 body=470 status=ok
// SIG undefined FUN_140f8db68(void)

int * FUN_140f8db68(longlong *param_1,int *param_2)

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
      FUN_1406cd6a8(param_1,iVar11);
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
    iVar5 = *(int *)(*param_1 + 4 + lVar2 * 0x40);
    *(int *)(param_1 + 6) = iVar5;
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar5 * 0x40) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar2 * 0x40 + *param_1;
  return param_2;
}



// FUNCTION 140f8dd3e FUN_140f8dd3e body=109 status=ok
// SIG undefined FUN_140f8dd3e(void)

void FUN_140f8dd3e(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x38,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 3;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar4,0x38,8);
  }
  return;
}



// FUNCTION 140f8ddac FUN_140f8ddac body=1276 status=ok
// SIG undefined FUN_140f8ddac(void)

void FUN_140f8ddac(longlong *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  int *piVar12;
  int *piVar13;
  undefined1 *puVar14;
  uint *puVar15;
  longlong lVar16;
  longlong *plVar17;
  int iVar18;
  bool bVar19;
  bool bVar20;
  undefined1 auStack_b8 [32];
  int local_98;
  uint local_94;
  uint *local_90;
  longlong local_88;
  longlong *local_80;
  ulonglong local_78;
  int local_70;
  int local_6c;
  undefined1 local_68 [16];
  undefined1 *local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar3 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar3,0,0,4);
  }
  plVar17 = param_1 + 7;
  uVar11 = *(uint *)(param_1 + 9);
  if (uVar11 == 1) {
    if (*plVar3 != 0) {
      FUN_1446efa72(plVar3,0,0,4);
    }
LAB_140f8ddf7:
    uVar2 = 0;
    do {
      plVar3 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar3 = plVar17;
      }
      *(undefined4 *)((longlong)plVar3 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar2) * 4) =
           0xffffffff;
      uVar2 = uVar2 + 1;
    } while (uVar11 != uVar2);
  }
  else {
    if (uVar11 == 0) goto LAB_140f8e281;
    FUN_1446efa72(plVar3,0,uVar11,4);
    if (0 < (int)uVar11) goto LAB_140f8ddf7;
  }
  puVar15 = (uint *)(param_1 + 2);
  iVar4 = (int)param_1[5];
  if (iVar4 == 0) {
    uVar9 = 0;
    uVar10 = 1;
    iVar18 = 0;
    local_98 = 0;
  }
  else {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar15;
    }
    uVar11 = *puVar7;
    if (uVar11 == 0) {
      iVar18 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar18 = iVar4 + -1;
      }
      uVar9 = 0;
      uVar10 = (ulonglong)(uint)(iVar18 >> 5);
      if (iVar18 >> 5 < 1) {
        uVar10 = uVar9;
      }
      local_98 = 0;
      do {
        if (uVar10 == uVar9) goto LAB_140f8e281;
        local_98 = local_98 + 0x20;
        uVar11 = puVar7[uVar9 + 1];
        uVar9 = uVar9 + 1;
      } while (uVar11 == 0);
    }
    else {
      uVar9 = 0;
      local_98 = 0;
    }
    uVar10 = (ulonglong)(-uVar11 & uVar11);
    uVar1 = uVar10 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    iVar18 = (local_98 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    if (iVar4 <= iVar18) {
      iVar18 = iVar4;
    }
  }
  if (iVar18 < iVar4) {
    uVar11 = 0xffffffff;
    local_90 = puVar15;
    local_80 = plVar17;
    do {
      lVar16 = *param_1 + (longlong)iVar18 * 0x40;
      local_78 = uVar9;
      if (*(char *)(*param_1 + (longlong)iVar18 * 0x40) == '\x01') {
        local_94 = uVar11;
        local_88 = lVar16;
        FUN_1447a97f4(&local_70,lVar16 + 0x10);
        if (0 < local_6c) {
          lVar16 = 0;
          uVar9 = 0;
          iVar4 = local_6c;
          iVar5 = DAT_14c948000;
          do {
            bVar19 = local_70 != 0;
            bVar20 = local_70 != iVar5;
            piVar12 = &DAT_14c948620;
            piVar13 = (int *)&DAT_14c948618;
            if (bVar20 && bVar19) {
              puVar14 = local_68;
              if (0 < local_4c) {
                puVar14 = local_58;
              }
              if (1 < iVar4) {
                puVar14 = local_58;
              }
              piVar12 = (int *)(puVar14 + lVar16 + 8);
              piVar13 = (int *)(puVar14 + lVar16);
            }
            if ((*piVar13 == DAT_14cb7beb0) && (*piVar12 == DAT_14cb7beb8)) {
LAB_140f8e0ac:
              FUN_1402b5374(&local_70,uVar9 & 0xffffffff,0);
              iVar4 = local_6c;
              iVar5 = DAT_14c948000;
            }
            else {
              piVar12 = &DAT_14c948620;
              piVar13 = (int *)&DAT_14c948618;
              if (bVar20 && bVar19) {
                puVar14 = local_68;
                if (0 < local_4c) {
                  puVar14 = local_58;
                }
                if (1 < iVar4) {
                  puVar14 = local_58;
                }
                piVar12 = (int *)(puVar14 + lVar16 + 8);
                piVar13 = (int *)(puVar14 + lVar16);
              }
              if ((*piVar13 == DAT_14cb7bec8) && (*piVar12 == DAT_14cb7bed0)) goto LAB_140f8e0ac;
              piVar12 = &DAT_14c948620;
              piVar13 = (int *)&DAT_14c948618;
              if (bVar20 && bVar19) {
                puVar14 = local_68;
                if (0 < local_4c) {
                  puVar14 = local_58;
                }
                if (1 < iVar4) {
                  puVar14 = local_58;
                }
                piVar12 = (int *)(puVar14 + lVar16 + 8);
                piVar13 = (int *)(puVar14 + lVar16);
              }
              if ((*piVar13 == DAT_14cb7bee0) && (*piVar12 == DAT_14cb7bee8)) goto LAB_140f8e0ac;
              piVar12 = &DAT_14c948620;
              piVar13 = (int *)&DAT_14c948618;
              if (bVar20 && bVar19) {
                puVar14 = local_68;
                if (0 < local_4c) {
                  puVar14 = local_58;
                }
                if (1 < iVar4) {
                  puVar14 = local_58;
                }
                piVar12 = (int *)(puVar14 + lVar16 + 8);
                piVar13 = (int *)(puVar14 + lVar16);
              }
              if ((*piVar13 == DAT_14cb7bef8) && (*piVar12 == DAT_14cb7bf00)) goto LAB_140f8e0ac;
              piVar12 = &DAT_14c948620;
              piVar13 = (int *)&DAT_14c948618;
              if (bVar20 && bVar19) {
                puVar14 = local_68;
                if (0 < local_4c) {
                  puVar14 = local_58;
                }
                if (1 < iVar4) {
                  puVar14 = local_58;
                }
                piVar12 = (int *)(puVar14 + lVar16 + 8);
                piVar13 = (int *)(puVar14 + lVar16);
              }
              if ((*piVar13 == DAT_14cb7bf10) && (*piVar12 == DAT_14cb7bf18)) goto LAB_140f8e0ac;
            }
            uVar9 = uVar9 + 1;
            lVar16 = lVar16 + 0xc;
          } while ((longlong)uVar9 < (longlong)iVar4);
        }
        iVar4 = local_70;
        lVar16 = local_88;
        puVar15 = local_90;
        plVar17 = local_80;
        uVar11 = local_94;
        if (local_58 != (undefined1 *)0x0) {
          FUN_1400020a8();
          lVar16 = local_88;
          puVar15 = local_90;
          plVar17 = local_80;
          uVar11 = local_94;
        }
      }
      else {
        iVar4 = *(int *)(lVar16 + 0x10);
      }
      uVar9 = (longlong)iVar4 & (longlong)(int)param_1[9] - 1U;
      iVar4 = (int)uVar9;
      *(int *)(lVar16 + 0x3c) = iVar4;
      plVar3 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar3 = plVar17;
      }
      *(undefined4 *)(lVar16 + 0x38) =
           *(undefined4 *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & uVar9) * 4);
      plVar3 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar3 = plVar17;
      }
      *(int *)((longlong)plVar3 + ((longlong)iVar4 & (longlong)(int)param_1[9] - 1U) * 4) = iVar18;
      uVar11 = uVar11 & ~(uint)uVar10;
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = puVar15;
      }
      iVar4 = (int)param_1[5];
      iVar18 = (int)local_78;
      lVar16 = (longlong)iVar18;
      uVar2 = puVar7[lVar16] & uVar11;
      uVar9 = local_78;
      if (uVar2 == 0) {
        iVar5 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar5 = iVar4 + -1;
        }
        iVar5 = iVar5 >> 5;
        iVar6 = iVar5;
        if (iVar5 < iVar18) {
          iVar6 = iVar18;
        }
        if (iVar5 <= iVar18) break;
        local_98 = local_98 + 0x20;
        lVar8 = 0;
        while (uVar2 = puVar7[lVar16 + lVar8 + 1], uVar2 == 0) {
          local_98 = local_98 + 0x20;
          lVar8 = lVar8 + 1;
          if (iVar6 - lVar16 == lVar8) goto LAB_140f8e281;
        }
        uVar9 = (ulonglong)(iVar18 + (int)lVar8 + 1);
        uVar11 = 0xffffffff;
      }
      uVar10 = (ulonglong)(-uVar2 & uVar2);
      uVar1 = uVar10 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      iVar18 = (local_98 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    } while (iVar18 < iVar4);
  }
LAB_140f8e281:
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f8e2aa FUN_140f8e2aa body=442 status=ok
// SIG undefined FUN_140f8e2aa(void)

void FUN_140f8e2aa(longlong *param_1,uint param_2)

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
      FUN_140b7ce44(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar8;
    if ((uint)(iVar10 - iVar11) < uVar8) {
      FUN_1406cd6a8(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(uVar6 * 0x40 + lVar2 + -0x3c);
      do {
        iVar9 = (int)uVar6;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x40) = iVar9 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar6 = uVar6 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar9 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -0x10;
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



// FUNCTION 140f8e464 FUN_140f8e464 body=162 status=ok
// SIG undefined FUN_140f8e464(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140f8e464(undefined8 param_1,ulonglong *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = ram0x00014cb7bde4;
  if ((ram0x00014cb7bde4 == DAT_14c948034) &&
     (uVar1 = DAT_14c948034, (int)DAT_14cb7bde0 != DAT_14c948030)) {
    FUN_14011791e(&local_30,(int)DAT_14cb7bde0,ram0x00014cb7bde4 >> 0x20);
    unique0x00023e00 = local_30;
    uVar1 = local_30;
  }
  if (*param_2 != uVar1) {
    if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  FUN_1407eda54(*param_3);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
}



// FUNCTION 140f8e51a FUN_140f8e51a body=21 status=ok
// SIG undefined FUN_140f8e51a(void)

void FUN_140f8e51a(longlong param_1,byte param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined8 uStack_40;
  longlong lStack_38;
  undefined8 uStack_30;
  ulonglong uStack_28;
  
  if (*(byte *)(param_1 + 0x62) != param_2) {
    *(byte *)(param_1 + 0x62) = param_2;
    param_2 = param_2 | *(byte *)(param_1 + 0x68);
    if (*(byte *)(param_1 + 0x61) != param_2) {
      uStack_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
      lVar1 = FUN_140b15fd0();
      if ((((lVar1 != 0) && ((*(byte *)(lVar1 + 0x65) & 0x18) == 0x10)) &&
          (*(byte *)(param_1 + 0x61) != param_2)) &&
         (*(byte *)(param_1 + 0x61) = param_2, param_2 != 0)) {
        lStack_38 = 0;
        uStack_30 = 0;
        uStack_40 = 0;
        FUN_140d0a558(lVar1,&lStack_38);
        lVar1 = lStack_38;
        lVar2 = (longlong)(int)uStack_30;
        if (lVar2 != 0) {
          lVar3 = 0;
          do {
            FUN_140b1548a(param_1,*(undefined8 *)(lVar1 + lVar3),1);
            lVar3 = lVar3 + 8;
          } while (lVar2 * 8 != lVar3);
        }
        if (lStack_38 != 0) {
          FUN_1400020a8(lStack_38);
        }
      }
      if ((uStack_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  }
  return;
}



// FUNCTION 140f8e530 FUN_140f8e530 body=55 status=ok
// SIG undefined FUN_140f8e530(void)

void FUN_140f8e530(longlong *param_1)

{
  FUN_140f8e568(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140f8e568 FUN_140f8e568 body=121 status=ok
// SIG undefined FUN_140f8e568(void)

void FUN_140f8e568(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1401ad22e(param_1,param_2);
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



// FUNCTION 140f8e5ee FUN_140f8e5ee body=39 status=ok
// SIG undefined FUN_140f8e5ee(void)

void FUN_140f8e5ee(longlong param_1)

{
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
  FUN_1401cd118(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000140f8e60e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bifrost::telemetry::rowBuilder::vEndArray((rowBuilder *)**(undefined8 **)(param_1 + 0x38));
  return;
}



// FUNCTION 140f8e624 FUN_140f8e624 body=40 status=ok
// SIG undefined FUN_140f8e624(void)

undefined8 FUN_140f8e624(undefined8 param_1,int param_2)

{
  FUN_140f8e64c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140f8e64c FUN_140f8e64c body=284 status=ok
// SIG undefined FUN_140f8e64c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140f8e64c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b313d00;
  param_1[0x41] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  FUN_140f8e768(param_1 + 0x1d);
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x12) = 0;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_140f8e768(param_1 + 9);
  if ((longlong *)param_1[5] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[5] + 0x10))();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (puVar1 = (undefined8 *)param_1[1], puVar1 != (undefined8 *)0x0)) {
    if (puVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *puVar1 = DAT_14c9a0ea0;
    DAT_14c9a0ea0 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x000140f8e73c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 140f8e768 FUN_140f8e768 body=55 status=ok
// SIG undefined FUN_140f8e768(void)

void FUN_140f8e768(longlong *param_1)

{
  FUN_140f8e7a0(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140f8e7a0 FUN_140f8e7a0 body=123 status=ok
// SIG undefined FUN_140f8e7a0(void)

void FUN_140f8e7a0(longlong param_1,int param_2)

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



// FUNCTION 140f8e81c FUN_140f8e81c body=290 status=ok
// SIG undefined FUN_140f8e81c(void)

undefined8 FUN_140f8e81c(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_140f8e937;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140f8e937;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
  }
  else {
LAB_140f8e937:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140f8e8e2;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5,param_2,param_3);
      uVar6 = 1;
      goto LAB_140f8e8e2;
    }
  }
  uVar6 = 0;
LAB_140f8e8e2:
  if ((local_38 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f8e940 FUN_140f8e940 body=2230 status=ok
// SIG undefined FUN_140f8e940(void)

void FUN_140f8e940(longlong *param_1,uint *param_2,int param_3)

{
  ushort uVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  code *pcVar10;
  longlong lVar11;
  undefined ***pppuVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong *plVar16;
  longlong lVar17;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined4 local_130;
  undefined4 local_128;
  undefined8 local_120;
  wchar_t *local_118;
  code *local_110;
  undefined1 *local_108;
  code **local_100;
  undefined1 *local_f8;
  code *local_f0;
  longlong *local_e8;
  longlong local_e0;
  int local_d8;
  code *local_d0;
  code *local_c8 [2];
  undefined ***local_b8;
  undefined **local_a8;
  longlong *local_a0;
  undefined1 local_80 [40];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (param_1[5] == 0) goto LAB_140f8f015;
  lVar6 = (**(code **)(*param_1 + 0x180))();
  if (lVar6 == 0) {
    pcVar10 = (code *)0x0;
  }
  else {
    pcVar10 = *(code **)(lVar6 + 0x18);
  }
  FUN_1405f0c40(DAT_14cb84f20,local_c8,pcVar10);
  pcVar7 = local_c8[0];
  if (local_c8[0] == (code *)0x0) {
    pcVar7 = pcVar10;
  }
  if ((((pcVar7 != (code *)param_1[5]) || (*(longlong **)(param_2 + 2) == (longlong *)0x0)) ||
      (param_2[1] == 0)) ||
     (((uVar13 = *param_2, (int)uVar13 < 0 || (DAT_14c9647dc <= (int)uVar13)) ||
      ((lVar6 = (ulonglong)((uVar13 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8), lVar6 == 0 ||
       ((*(uint *)(lVar6 + 0x10) != param_2[1] || ((*(uint *)(lVar6 + 8) & 0x10200000) != 0))))))))
  goto LAB_140f8f015;
  uVar8 = (**(code **)(**(longlong **)(param_2 + 2) + 0x20))();
  FUN_1404e8b2c(uVar8,local_80);
  (**(code **)(**(longlong **)(param_2 + 2) + 0x40))();
  lVar6 = local_e0;
  if (local_d8 < 2) {
LAB_140f8ec4d:
    if (param_3 == 1) {
      local_b8 = (undefined ***)0x0;
      local_a8 = &PTR_LAB_14b3fb0b0;
      local_a0 = (longlong *)&LAB_143d20b20;
      local_c8[0] = FUN_143d20b36;
      lVar6 = param_1[8];
      if ((longlong)(int)lVar6 != 0) {
        local_e8 = param_1 + 7;
        lVar11 = param_1[7];
        lVar17 = 0;
        do {
          lVar2 = *(longlong *)(lVar11 + lVar17);
          if (lVar2 != 0) {
            if (DAT_14cb5d278 == 0) {
              local_d0 = FUN_1449e2820;
              local_f0 = FUN_14081d0ea;
              local_f8 = &LAB_145885dac;
              local_100 = &local_d0;
              local_108 = &LAB_1486962c5;
              local_110 = FUN_1464da8ae;
              local_118 = L"Engine";
              local_120 = 0;
              local_128 = 0x10000000;
              local_130 = 8;
              local_138 = 0x118;
              FUN_14081cfa3(L"/Script/GbxGame",L"GbxDiscoveryProviderObject_DiscoveryLocation",
                            &DAT_14cb5d278,&DAT_1486962c4);
            }
            pcVar10 = local_c8[0];
            if (((*(int *)(DAT_14cb5d278 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
                (*(longlong *)
                  (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
                  (longlong)*(int *)(DAT_14cb5d278 + 0x38) * 8) == DAT_14cb5d278 + 0x30)) &&
               (local_c8[0] != (code *)0x0)) {
              pppuVar12 = local_b8;
              if (local_b8 == (undefined ***)0x0) {
                pppuVar12 = &local_a8;
              }
              uVar8 = (*(code *)(*pppuVar12)[1])();
              cVar4 = (*pcVar10)(uVar8,lVar2,param_2);
              if (cVar4 != '\0') {
                uVar14 = (lVar17 >> 3) * -0x5555555555555555;
                uVar13 = (uint)uVar14;
                if ((-1 < (int)uVar13) && ((int)uVar13 < (int)param_1[8])) {
                  lVar6 = (ulonglong)(uVar13 & 0x7fffffff) * 0x18 + param_1[7];
                  if (param_1[6] != 0) {
                    FUN_140993b54(param_1[6],lVar6 + 8);
                  }
                  FUN_1404e9462(param_1,lVar6);
                  plVar16 = local_e8;
                  FUN_1404ec6d4(local_e8,uVar14 & 0xffffffff);
                  FUN_141089ae6(plVar16);
                }
                break;
              }
            }
          }
          lVar17 = lVar17 + 0x18;
        } while ((longlong)(int)lVar6 * 0x18 != lVar17);
      }
      if (local_c8[0] != (code *)0x0) {
        pppuVar12 = &local_a8;
        if (local_b8 != (undefined ***)0x0) {
          pppuVar12 = local_b8;
        }
        ppuVar9 = *pppuVar12;
LAB_140f8ef82:
        (*(code *)ppuVar9[2])(pppuVar12);
      }
    }
    else if (param_3 == 0) {
      local_b8 = (undefined ***)0x0;
      local_a8 = &PTR_LAB_14b3fb090;
      local_c8[0] = FUN_143d20ac6;
      local_a0 = param_1;
      plVar16 = (longlong *)FUN_1404e9402(param_1 + 7);
      if (DAT_14cb5d278 == 0) {
        local_100 = &local_d0;
        local_d0 = FUN_1449e2820;
        local_f0 = FUN_14081d0ea;
        local_f8 = &LAB_145885dac;
        local_108 = &LAB_1486962c5;
        local_110 = FUN_1464da8ae;
        local_118 = L"Engine";
        local_120 = 0;
        local_128 = 0x10000000;
        local_130 = 8;
        local_138 = 0x118;
        FUN_14081cfa3(L"/Script/GbxGame",L"GbxDiscoveryProviderObject_DiscoveryLocation",
                      &DAT_14cb5d278,&DAT_1486962c4);
      }
      FUN_1404e95e0(param_1,&local_d0,DAT_14cb5d278);
      if ((*plVar16 != 0) && (DAT_14c872a72 == '\0')) {
        FUN_140113f48();
      }
      pcVar10 = local_d0;
      *plVar16 = (longlong)local_d0;
      if (local_d0 != (code *)0x0) {
        if (DAT_14cb5d278 == 0) {
          local_d0 = FUN_1449e2820;
          local_f0 = FUN_14081d0ea;
          local_f8 = &LAB_145885dac;
          local_108 = &LAB_1486962c5;
          local_110 = FUN_1464da8ae;
          local_118 = L"Engine";
          local_120 = 0;
          local_128 = 0x10000000;
          local_130 = 8;
          local_138 = 0x118;
          local_100 = &local_d0;
          FUN_14081cfa3(L"/Script/GbxGame",L"GbxDiscoveryProviderObject_DiscoveryLocation",
                        &DAT_14cb5d278,&DAT_1486962c4);
        }
        pcVar7 = local_c8[0];
        lVar6 = *(longlong *)(pcVar10 + 0x10);
        if (((*(int *)(DAT_14cb5d278 + 0x38) <= *(int *)(lVar6 + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(DAT_14cb5d278 + 0x38) * 8) ==
             DAT_14cb5d278 + 0x30)) && (local_c8[0] != (code *)0x0)) {
          pppuVar12 = local_b8;
          if (local_b8 == (undefined ***)0x0) {
            pppuVar12 = &local_a8;
          }
          uVar8 = (*(code *)(*pppuVar12)[1])();
          (*pcVar7)(uVar8,pcVar10,param_2);
        }
      }
      if (param_1[6] == 0) {
        pcVar10 = (code *)0x0;
      }
      else {
        FUN_140a97e96(param_1[6],&local_d0,*plVar16);
        pcVar10 = local_d0;
      }
      plVar16[1] = (longlong)pcVar10;
      if (local_c8[0] != (code *)0x0) {
        pppuVar12 = &local_a8;
        if (local_b8 != (undefined ***)0x0) {
          pppuVar12 = local_b8;
        }
        ppuVar9 = *pppuVar12;
        goto LAB_140f8ef82;
      }
    }
  }
  else {
    lVar11 = 0;
    uVar14 = 0;
    do {
      uVar1 = *(ushort *)(local_e0 + lVar11 * 2);
      uVar13 = ((uint)(0x19 < uVar1 - 0x61) * 0x20 + (uint)uVar1) - 0x20;
      uVar15 = (uint)(uVar14 >> 8) ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar14 ^ uVar13) & 0xff) * 4);
      uVar14 = (ulonglong)
               (uVar15 >> 8 ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar15 & 0xff ^ uVar13 >> 8 & 0xff) * 4));
      lVar11 = lVar11 + 1;
    } while (local_d8 + -1 != (int)lVar11);
    plVar16 = param_1 + 0xb;
    iVar5 = FUN_140c1fc8e(plVar16,uVar14,&local_e0);
    if (iVar5 == -1) goto LAB_140f8ec4d;
    uVar14 = 0;
    iVar5 = local_d8 + -1;
    if (local_d8 == 0) {
      iVar5 = 0;
    }
    if (0 < iVar5) {
      lVar11 = 0;
      uVar14 = 0;
      do {
        uVar1 = *(ushort *)(lVar6 + lVar11 * 2);
        uVar13 = ((uint)(0x19 < uVar1 - 0x61) * 0x20 + (uint)uVar1) - 0x20;
        uVar15 = (uint)(uVar14 >> 8) ^
                 *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar14 ^ uVar13) & 0xff) * 4);
        uVar14 = (ulonglong)
                 (uVar15 >> 8 ^
                 *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar15 & 0xff ^ uVar13 >> 8 & 0xff) * 4));
        lVar11 = lVar11 + 1;
      } while (iVar5 != (int)lVar11);
    }
    iVar5 = FUN_140c1fc8e(plVar16,uVar14,&local_e0);
    if (iVar5 == -1) {
      lVar6 = 0;
    }
    else {
      lVar6 = (longlong)iVar5 * 0x20 + *plVar16;
    }
    if ((((*(int *)(lVar6 + 0x14) == 0) || (uVar13 = *(uint *)(lVar6 + 0x10), (int)uVar13 < 0)) ||
        (DAT_14c9647dc <= (int)uVar13)) ||
       (((plVar16 = (longlong *)
                    ((ulonglong)((uVar13 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8)),
         plVar16 == (longlong *)0x0 || ((int)plVar16[2] != *(int *)(lVar6 + 0x14))) ||
        (((*(uint *)(plVar16 + 1) & 0x10200000) != 0 ||
         (plVar16 = (longlong *)*plVar16, plVar16 == (longlong *)0x0)))))) goto LAB_140f8ec4d;
    if (param_3 != 2) {
      if (param_3 == 1) {
        FUN_140826ba4(plVar16,0);
        (**(code **)(*plVar16 + 0x3a8))(plVar16);
        plVar16[0x1a] = 0;
        plVar16[0x1b] = 0;
      }
      else {
        if (param_3 != 0) goto LAB_140f8eff1;
        uVar13 = param_2[1];
        uVar15 = param_2[2];
        uVar3 = param_2[3];
        *(uint *)(plVar16 + 0x1a) = *param_2;
        *(uint *)((longlong)plVar16 + 0xd4) = uVar13;
        *(uint *)(plVar16 + 0x1b) = uVar15;
        *(uint *)((longlong)plVar16 + 0xdc) = uVar3;
        FUN_140826ba4(plVar16,CONCAT71((int7)((ulonglong)(plVar16 + 0x1a) >> 8),1));
        (**(code **)(*plVar16 + 0x3a0))(plVar16);
      }
      FUN_1402798cc(plVar16);
    }
LAB_140f8eff1:
    FUN_140a1982e(plVar16);
  }
  if (local_e0 != 0) {
    FUN_1400020a8();
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
LAB_140f8f015:
  if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f8f1f8 FUN_140f8f1f8 body=63 status=ok
// SIG undefined FUN_140f8f1f8(void)

longlong FUN_140f8f1f8(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1411f53a0(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x300 + *param_1;
  FUN_140f8f237(lVar2);
  return lVar2;
}



// FUNCTION 140f8f237 FUN_140f8f237 body=451 status=ok
// SIG undefined FUN_140f8f237(void)

void FUN_140f8f237(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3ff00000;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x3ff00000;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x3ff00000;
  param_1[10] = 0x3ff0000000000000;
  param_1[0xb] = 0;
  uVar3 = DAT_14c8464e8._4_4_;
  uVar2 = (undefined4)DAT_14c8464e8;
  uVar1 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0xc) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 100) = uVar1;
  *(undefined4 *)(param_1 + 0xd) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x6c) = uVar3;
  param_1[0xe] = DAT_14c8464f0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = DAT_14cb7bd68;
  *(undefined4 *)((longlong)param_1 + 0x84) = DAT_14cb7bd70;
  param_1[0x11] = DAT_14cb7bd80;
  *(undefined4 *)(param_1 + 0x12) = DAT_14cb7bd88;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined1 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0x17) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x179) = 0;
  *(undefined8 *)((longlong)param_1 + 0x181) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1fc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x204) = 0;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  param_1[0x48] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x49] = 0xf;
  *(undefined2 *)(param_1 + 0x4a) = 1;
  *(undefined8 *)((longlong)param_1 + 0x254) = 0;
  *(undefined8 *)((longlong)param_1 + 0x25c) = 0;
  *(undefined1 *)(param_1 + 0x4d) = 0;
  *(undefined4 *)(param_1 + 0x52) = 0;
  *(undefined4 *)(param_1 + 0x53) = 1;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  FUN_140265f12();
  param_1[0x5b] = &DAT_14cb83310;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5a] = &PTR_FUN_14b1828b0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  return;
}



// FUNCTION 140f8f402 FUN_140f8f402 body=156 status=ok
// SIG undefined FUN_140f8f402(void)

undefined8 * FUN_140f8f402(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_140751bbe(param_1,uVar1);
  *param_1 = &PTR_FUN_14b0aff90;
  FUN_140440628(param_1 + 6,&DAT_14cb72230,0);
  param_1[0x12] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined2 *)(param_1 + 0x16) = 4;
  *(undefined4 *)(param_1 + 0x13) = 0x42340000;
  *(undefined1 *)(param_1 + 0x17) = 3;
  *(char *)(param_1 + 0x18) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined1 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  return param_1;
}



// FUNCTION 140f8f4fa FUN_140f8f4fa body=108 status=ok
// SIG undefined FUN_140f8f4fa(void)

undefined8 FUN_140f8f4fa(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1401cb356();
  local_20 = *(undefined8 *)(param_1 + 0x4420);
  local_18 = *(longlong *)(param_1 + 0x4428);
  if (local_18 != 0) {
    LOCK();
    *(int *)(local_18 + 0xc) = *(int *)(local_18 + 0xc) + 1;
    UNLOCK();
  }
  FUN_140d61352(&local_20);
  *(undefined1 *)(param_1 + 0x4418) = 0;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f8f568 FUN_140f8f568 body=156 status=ok
// SIG undefined FUN_140f8f568(void)

void FUN_140f8f568(longlong param_1)

{
  undefined4 *puVar1;
  
  FUN_140f8f604(&DAT_14c997c38,param_1);
  puVar1 = *(undefined4 **)(param_1 + 0x80);
  if (puVar1 != (undefined4 *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c994a48) {
      FUN_144b3d300(&DAT_14c994a48);
      if (DAT_14c994a48 == -1) {
        FUN_1456d094c(&DAT_14c994908);
        atexit((_func_5014 *)&LAB_1429e0cbb);
        _Init_thread_footer(&DAT_14c994a48);
      }
    }
    FUN_140f8f6a6(&DAT_14c994908,*puVar1);
  }
  switchD_143c3d4dc::caseD_1f(param_1);
  return;
}



// FUNCTION 140f8f604 FUN_140f8f604 body=162 status=ok
// SIG undefined FUN_140f8f604(void)

void FUN_140f8f604(longlong *param_1,undefined8 param_2)

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
        goto LAB_140f8f691;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_140f8f691:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 140f8f6a6 FUN_140f8f6a6 body=121 status=ok
// SIG undefined FUN_140f8f6a6(void)

void FUN_140f8f6a6(longlong param_1,uint param_2)

{
  if (param_2 < 0x1000000) {
    return;
  }
  FUN_140da7c9e(param_1 + 0x30);
  if (DAT_14c992a90 == '\x01') {
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x130));
    FUN_14106ad44(param_1 + 0x90,param_2);
                    /* WARNING: Could not recover jumptable at 0x000140f8f6f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x130));
    return;
  }
  FUN_14106ad44(param_1 + 0x90,param_2);
  return;
}



// FUNCTION 140f8f72a FUN_140f8f72a body=137 status=ok
// SIG undefined FUN_140f8f72a(void)

undefined8 * FUN_140f8f72a(undefined8 *param_1,longlong *param_2)

{
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  *param_1 = &PTR_FUN_14a3b2810;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[9] = 0x3f80000043c80000;
  param_1[10] = 0x271000002710;
  *(undefined2 *)(param_1 + 0xb) = 0x101;
  *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) | 1;
  return param_1;
}



// FUNCTION 140f8f7b4 FUN_140f8f7b4 body=97 status=ok
// SIG undefined FUN_140f8f7b4(void)

void FUN_140f8f7b4(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_149ef1770;
  plVar2 = *(longlong **)(param_1 + 0x220);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_140f8f815(*(undefined8 *)(param_1 + 0x208),*(undefined4 *)(param_1 + 0x210));
  if (*(longlong *)(param_1 + 0x208) != 0) {
    FUN_1400020a8();
  }
  FUN_140c057ec(param_1 + 0x10);
  return;
}



// FUNCTION 140f8f815 FUN_140f8f815 body=54 status=ok
// SIG undefined FUN_140f8f815(void)

void FUN_140f8f815(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      puVar1 = *(undefined8 **)(param_1 + lVar2 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 140f8f85a FUN_140f8f85a body=144 status=ok
// SIG undefined FUN_140f8f85a(void)

void FUN_140f8f85a(longlong param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    puVar1 = *(undefined8 **)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(puVar1 + 9);
    *(undefined8 *)(param_1 + 0x38) = puVar1[8];
    *(undefined8 *)(param_1 + 0x50) = *puVar1;
    uVar2 = *(undefined4 *)((longlong)puVar1 + 0xc);
    uVar3 = *(undefined4 *)(puVar1 + 2);
    uVar4 = *(undefined4 *)((longlong)puVar1 + 0x14);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(puVar1 + 1);
    *(undefined4 *)(param_1 + 0x5c) = uVar2;
    *(undefined4 *)(param_1 + 0x60) = uVar3;
    *(undefined4 *)(param_1 + 100) = uVar4;
    FUN_144a787a6(param_1 + 0x68,puVar1 + 3);
    FUN_148d0863e(param_1 + 0x28,1,1);
    FUN_148c07116(*(undefined8 *)(param_1 + 0x28),*(longlong *)(param_1 + 0x18) + 0x28);
    FUN_140e426bc(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
    *(undefined4 *)(param_1 + 0x20) = 0;
    if (*(int *)(param_1 + 0x24) != 0) {
      FUN_148d0ccd4(param_1 + 0x18,0);
      return;
    }
  }
  return;
}



// FUNCTION 140f8f8ea FUN_140f8f8ea body=125 status=ok
// SIG undefined FUN_140f8f8ea(void)

undefined8 FUN_140f8f8ea(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined7 uVar6;
  byte bVar7;
  
  bVar7 = (byte)param_2;
  if (*(int *)(param_1 + 0xdc) == 0) {
LAB_140f8f963:
    bVar7 = (byte)param_2;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0xd8);
    bVar3 = 0;
    uVar6 = 0;
    if (-1 < (int)uVar1) {
      if (DAT_14c9647dc <= (int)uVar1) goto LAB_140f8f95b;
      plVar4 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      param_2 = DAT_14c9647c8;
      if ((((plVar4 != (longlong *)0x0) && ((int)plVar4[2] == *(int *)(param_1 + 0xdc))) &&
          (param_2 = (ulonglong)*(uint *)(plVar4 + 1), (*(uint *)(plVar4 + 1) & 0x10200000) == 0))
         && (lVar2 = *plVar4, lVar2 != 0)) {
        uVar5 = FUN_140343d7a();
        uVar5 = FUN_140f8f968(lVar2,uVar5);
        bVar7 = (byte)uVar5;
        uVar6 = (undefined7)((ulonglong)uVar5 >> 8);
        bVar3 = 1;
        goto LAB_140f8f95b;
      }
      goto LAB_140f8f963;
    }
  }
  bVar3 = 0;
  uVar6 = 0;
LAB_140f8f95b:
  return CONCAT71(uVar6,bVar3 & bVar7);
}



// FUNCTION 140f8f968 FUN_140f8f968 body=122 status=ok
// SIG undefined FUN_140f8f968(void)

ulonglong FUN_140f8f968(longlong param_1,longlong param_2)

{
  undefined8 unaff_RSI;
  ulonglong uVar1;
  
  if ((((*(longlong *)(param_1 + 0x620) == 0) || (*(char *)(param_1 + 0x629) != '\x01')) ||
      (*(int *)(param_1 + 0x638) < 1)) ||
     ((*(char *)(param_1 + 0x628) != '\x01' ||
      (*(longlong *)(param_1 + 0x660) != 0 && *(longlong *)(param_1 + 0x660) != param_2)))) {
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),param_2 != 0);
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    *(longlong *)(param_1 + 0x660) = param_2;
  }
  return uVar1 & 0xffffffff;
}



// FUNCTION 140f8f9e2 FUN_140f8f9e2 body=73 status=ok
// SIG undefined FUN_140f8f9e2(void)

void FUN_140f8f9e2(longlong param_1,undefined8 param_2,char param_3)

{
  FUN_140f8fa2c(param_1,*(longlong *)(param_1 + 0x48) + 0x88);
  if ((byte)(param_3 - 1U) < 4) {
    FUN_140f8fa2c(param_1,*(longlong *)(param_1 + 0x48) + (ulonglong)(byte)(param_3 - 1U) * 8 + 0x90
                 );
    return;
  }
  return;
}



// FUNCTION 140f8fa2c FUN_140f8fa2c body=134 status=ok
// SIG undefined FUN_140f8fa2c(void)

void FUN_140f8fa2c(longlong param_1,longlong *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if ((*param_2 != 0) && (*(longlong **)(param_1 + 0xe0) != (longlong *)0x0)) {
    if ((*(int *)(param_1 + 0xdc) != 0) &&
       ((uVar1 = *(uint *)(param_1 + 0xd8), -1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)))) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if ((lVar3 != 0) &&
         ((*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0xdc) &&
          ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)))) {
        uVar2 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x20))();
        FUN_140de99aa(uVar2,param_2,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140f8fab2 FUN_140f8fab2 body=166 status=ok
// SIG undefined FUN_140f8fab2(void)

ulonglong FUN_140f8fab2(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_140f8fb3c:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_140f8fb3c;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      local_20 = *(undefined4 *)(param_2 + 1);
      local_28 = *param_2;
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30),&local_28);
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
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 140f8fb64 FUN_140f8fb64 body=272 status=ok
// SIG undefined FUN_140f8fb64(void)

undefined8 FUN_140f8fb64(longlong *param_1,uint *param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong *plVar7;
  uint uVar8;
  uint uVar9;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = *param_2;
    uVar3 = param_2[2];
    uVar5 = uVar2;
    if (uVar3 != 0) {
      uVar5 = uVar3 >> 0xd ^ uVar2 - uVar3;
      uVar6 = uVar5 << 8 ^ (-0x61c88647 - uVar3) - uVar5;
      uVar8 = uVar6 >> 0xd ^ (uVar3 - uVar5) - uVar6;
      uVar5 = uVar8 >> 0xc ^ (uVar5 - uVar6) - uVar8;
      uVar6 = uVar5 << 0x10 ^ (uVar6 - uVar8) - uVar5;
      uVar8 = uVar6 >> 5 ^ (uVar8 - uVar5) - uVar6;
      uVar9 = uVar8 >> 3 ^ (uVar5 - uVar6) - uVar8;
      uVar5 = uVar9 << 10 ^ (uVar6 - uVar8) - uVar9;
      uVar5 = uVar5 >> 0xf ^ uVar8 - (uVar9 + uVar5);
    }
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar7 + ((longlong)(int)uVar5 & (longlong)(int)param_1[9] - 1U) * 4)
    ;
    if (iVar4 != -1) {
      do {
        lVar1 = *param_1 + (longlong)iVar4 * 0x70;
        if ((*(uint *)(*param_1 + (longlong)iVar4 * 0x70) == uVar2) &&
           (*(uint *)(lVar1 + 8) == uVar3)) {
          FUN_14892221c();
          return 1;
        }
        iVar4 = *(int *)(lVar1 + 0x68);
      } while (iVar4 != -1);
    }
  }
  return 0;
}



// FUNCTION 140f8fc74 FUN_140f8fc74 body=31 status=ok
// SIG undefined FUN_140f8fc74(void)

undefined8 FUN_140f8fc74(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140f8fc94 FUN_140f8fc94 body=31 status=ok
// SIG undefined FUN_140f8fc94(void)

undefined8 FUN_140f8fc94(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140f8fcc2 FUN_140f8fcc2 body=40 status=ok
// SIG undefined FUN_140f8fcc2(void)

undefined8 FUN_140f8fcc2(undefined8 param_1,int param_2)

{
  FUN_140f8fcea();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140f8fcea FUN_140f8fcea body=160 status=ok
// SIG undefined FUN_140f8fcea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140f8fcea(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14b490890;
  plVar3 = (longlong *)param_1[4];
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
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (puVar4 = (undefined8 *)param_1[1], puVar4 != (undefined8 *)0x0)) {
    if (puVar4[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *puVar4 = DAT_14c9a0ea0;
    DAT_14c9a0ea0 = puVar4;
                    /* WARNING: Could not recover jumptable at 0x000140f8fd7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 140f8fd8a FUN_140f8fd8a body=85 status=ok
// SIG undefined FUN_140f8fd8a(void)

undefined8
FUN_140f8fd8a(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  uVar1 = (**(code **)(*param_1 + 0x180))();
  lVar2 = FUN_140149a73(uVar1,0);
  if (lVar2 != 0) {
    plVar3 = (longlong *)FUN_1401499e8(lVar2);
    if (plVar3 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140f8fdd3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(*plVar3 + 0x30))(plVar3,param_4,param_5,*(code **)(*plVar3 + 0x30));
      return uVar1;
    }
  }
  return 0;
}



// FUNCTION 140f8fde0 FUN_140f8fde0 body=1553 status=ok
// SIG undefined FUN_140f8fde0(void)

bool FUN_140f8fde0(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  uint uVar5;
  byte *pbVar6;
  char cVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_1b8 [32];
  undefined1 local_198;
  longlong *local_188;
  int local_17c;
  longlong local_178;
  longlong local_170;
  longlong local_168;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  undefined8 local_148;
  undefined4 local_140;
  longlong local_138;
  longlong *plStack_130;
  char local_128 [4];
  undefined8 local_124;
  int local_11c;
  undefined1 *local_118;
  longlong *plStack_110;
  longlong local_100;
  ulonglong local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  longlong local_d0;
  undefined8 uStack_c8;
  int local_c0;
  int iStack_bc;
  undefined4 uStack_b8;
  undefined1 local_ac [4];
  longlong local_a8;
  int local_9c;
  longlong local_98;
  longlong *plStack_90;
  undefined1 local_88 [24];
  longlong local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_17c = *(int *)(param_1 + 0x1c8);
  local_188 = param_3;
  if (local_17c != 0) {
    if (((byte *)*param_2 == (byte *)0x0) || ((~*(byte *)*param_2 & 3) != 0)) {
      local_98 = 0;
      plStack_90 = (longlong *)0x0;
      FUN_14009b010(&local_98,3,0);
      FUN_1446dcc2e(local_188,&local_98);
    }
    else {
      local_198 = 0;
      FUN_1401412e0(param_2,&local_98,0,0);
      if (local_188 != &DAT_14c9a1308) {
        if (plStack_90 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_90 + 1) = (int)plStack_90[1] + 1;
          UNLOCK();
        }
        plVar8 = (longlong *)local_188[1];
        *local_188 = local_98;
        local_188[1] = (longlong)plStack_90;
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar8 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar8)(plVar8);
            LOCK();
            piVar3 = (int *)((longlong)plVar8 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
        }
      }
    }
    plVar8 = plStack_90;
    if (plStack_90 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_90 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_90)(plStack_90);
        LOCK();
        piVar3 = (int *)((longlong)plVar8 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
    local_178 = (longlong)*(int *)(param_1 + 0x1c8);
    if (local_178 != 0) {
      local_160 = *(longlong *)(param_1 + 0x1c0);
      local_168 = param_1 + 0x50;
      local_178 = local_178 << 2;
      lVar12 = 0;
      local_170 = param_1;
      do {
        uVar5 = *(uint *)(local_160 + lVar12);
        if ((-1 < (int)uVar5) && ((int)uVar5 < *(int *)(param_1 + 0x68))) {
          lVar9 = *(longlong *)(param_1 + 0x60);
          if (*(longlong *)(param_1 + 0x60) == 0) {
            lVar9 = local_168;
          }
          if ((*(uint *)(lVar9 + (ulonglong)(uVar5 >> 5) * 4) >> (uVar5 & 0x1f) & 1) != 0) {
            lVar9 = *(longlong *)(param_1 + 0x40);
            lVar11 = (ulonglong)uVar5 * 0x68;
            local_128[0] = '\0';
            local_124 = 0;
            local_11c = 0;
            FUN_144976b9c(local_128,*(undefined8 *)(lVar9 + 0x38 + lVar11));
            if (local_128[0] == '\x01') {
              if (local_11c != 0) goto LAB_140f8ff9e;
            }
            else if ((local_128[0] != '\x03') || (FUN_1403a0728(local_128,&local_98), local_98 != 0)
                    ) {
LAB_140f8ff9e:
              FUN_144928b90(&local_98,1);
              local_c0 = *(int *)(param_1 + 0x2c);
              if (local_c0 == 0) {
                uStack_b8 = DAT_14cb7bba0;
                local_c0 = (int)DAT_14cb7bb98;
                iStack_bc = (int)((ulonglong)DAT_14cb7bb98 >> 0x20);
              }
              else {
                iStack_bc = (int)*(undefined8 *)(param_1 + 0x30);
                uStack_b8 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x30) >> 0x20);
              }
              lVar4 = lVar9 + lVar11;
              local_158 = lVar11;
              local_150 = lVar9;
              FUN_144928d62(local_88,1,&local_c0);
              local_c0 = (int)*(undefined8 *)(lVar4 + 8);
              iStack_bc = (int)((ulonglong)*(undefined8 *)(lVar4 + 8) >> 0x20);
              uStack_b8 = *(undefined4 *)(lVar4 + 0x10);
              FUN_14013eb2c(&local_98,&local_c0);
              uStack_e0 = CONCAT44(uStack_e0._4_4_,*(undefined4 *)(lVar4 + 0x1c));
              local_e8 = *(ulonglong *)(lVar4 + 0x14);
              FUN_14013eb54(&local_98,&local_e8);
              plStack_110 = (longlong *)CONCAT44(plStack_110._4_4_,*(undefined4 *)(lVar4 + 0x28));
              local_118 = *(undefined1 **)(lVar4 + 0x20);
              FUN_144928d62(local_88,4,&local_118);
              plStack_130 = (longlong *)CONCAT44(plStack_130._4_4_,*(undefined4 *)(lVar4 + 0x34));
              local_138 = *(longlong *)(lVar4 + 0x2c);
              FUN_144928d62(local_88,5,&local_138);
              cVar7 = FUN_1401144ce(&local_98);
              if (cVar7 != '\0') {
                FUN_14014e996(&local_98,&local_c0,1,0);
                local_118 = local_ac;
                if (1 < iStack_bc) {
                  local_118 = (undefined1 *)(local_a8 + 0xc);
                }
                if (0 < local_9c) {
                  local_118 = (undefined1 *)(local_a8 + 0xc);
                }
                local_e8 = 0;
                uStack_e0 = 0;
                local_d8 = 0;
                local_d0 = 0;
                uStack_c8 = 0;
                plStack_110 = (longlong *)CONCAT44(plStack_110._4_4_,iStack_bc + -2);
                FUN_140accc74(&local_e8,&local_118,0);
                pbVar6 = (byte *)*local_188;
                puVar10 = &DAT_14c9a1288;
                if ((pbVar6 != (byte *)0x0) && (puVar10 = &DAT_14c9a1288, (*pbVar6 & 2) != 0)) {
                  puVar10 = (undefined8 *)(*(longlong *)(pbVar6 + 8) + 0x18);
                }
                plVar8 = (longlong *)FUN_140f903f2(puVar10,local_e8 & 0xffffffff,&local_e8);
                if (((byte *)*plVar8 == (byte *)0x0) || ((*(byte *)*plVar8 & 3) == 0)) {
                  local_118 = (undefined1 *)0x0;
                  plStack_110 = (longlong *)0x0;
                  FUN_14009b010(&local_118,3,0);
                  FUN_1446dcc2e(plVar8,&local_118);
                  plVar1 = plStack_110;
                  if (plStack_110 != (longlong *)0x0) {
                    LOCK();
                    plVar2 = plStack_110 + 1;
                    *(int *)plVar2 = (int)*plVar2 + -1;
                    UNLOCK();
                    if ((int)*plVar2 == 0) {
                      (**(code **)*plStack_110)(plStack_110);
                      LOCK();
                      piVar3 = (int *)((longlong)plVar1 + 0xc);
                      *piVar3 = *piVar3 + -1;
                      UNLOCK();
                      if (*piVar3 == 0) {
                        (**(code **)(*plVar1 + 0x10))(plVar1);
                      }
                    }
                  }
                }
                local_138 = 0;
                plStack_130 = (longlong *)0x0;
                FUN_14009b010(&local_138,1,0);
                if (local_138 != 0) {
                  FUN_1401269d0(local_138,local_158 + local_150 + 0x38);
                }
                local_148 = *(undefined8 *)(lVar4 + 0x2c);
                local_140 = *(undefined4 *)(lVar4 + 0x34);
                FUN_1448075d0(&local_118,&local_148);
                if (*plVar8 != 0) {
                  local_198 = 0;
                  FUN_14014191c(*plVar8,&local_118,&local_138);
                }
                if (local_100 != 0) {
                  FUN_1400020a8();
                }
                plVar8 = plStack_130;
                if (plStack_130 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = plStack_130 + 1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)*plVar1 == 0) {
                    (**(code **)*plStack_130)(plStack_130);
                    LOCK();
                    piVar3 = (int *)((longlong)plVar8 + 0xc);
                    *piVar3 = *piVar3 + -1;
                    UNLOCK();
                    if (*piVar3 == 0) {
                      (**(code **)(*plVar8 + 0x10))(plVar8);
                    }
                  }
                }
                param_1 = local_170;
                if (local_d0 != 0) {
                  FUN_1400020a8();
                }
                if (local_a8 != 0) {
                  FUN_1400020a8();
                }
              }
              if (local_70 != 0) {
                FUN_1400020a8();
              }
            }
          }
        }
        lVar12 = lVar12 + 4;
      } while (local_178 != lVar12);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_17c != 0;
}



// FUNCTION 140f903f2 FUN_140f903f2 body=190 status=ok
// SIG undefined FUN_140f903f2(void)

longlong FUN_140f903f2(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  int *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[2] != *(int *)((longlong)param_1 + 0x3c)) {
    plVar2 = param_1 + 8;
    if ((longlong *)param_1[9] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[9];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[10] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x40;
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x40) == *param_3) {
          if (lVar3 != 0) goto LAB_140f90454;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x38);
      } while (iVar1 != -1);
    }
  }
  local_38 = 0;
  local_28 = param_3;
  FUN_14885758e(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x40 + *param_1;
LAB_140f90454:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 0x28;
}



// FUNCTION 140f904b2 FUN_140f904b2 body=256 status=ok
// SIG undefined FUN_140f904b2(void)

undefined8 FUN_140f904b2(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  
  if (*(int *)(param_1 + 0x3ec) != 0) {
    uVar1 = *(uint *)(param_1 + 1000);
    uVar3 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_140f90514;
    puVar4 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((puVar4 != (undefined8 *)0x0) &&
       ((*(int *)(puVar4 + 2) == *(int *)(param_1 + 0x3ec) &&
        ((*(uint *)(puVar4 + 1) & 0x10200000) == 0)))) {
      uVar3 = *puVar4;
      goto LAB_140f90514;
    }
  }
  uVar3 = 0;
LAB_140f90514:
  plVar2 = (longlong *)FUN_14041a931(uVar3);
  if (((*(int *)(param_1 + 0x3ec) != 0) && (uVar1 = *(uint *)(param_1 + 1000), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar6 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar6 != (longlong *)0x0) && ((int)plVar6[2] == *(int *)(param_1 + 0x3ec))) &&
       ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar6 + 1) & 0x10200000) == 0) {
        lVar5 = *plVar6;
      }
      else {
        lVar5 = 0;
      }
      if ((plVar2 != (longlong *)0x0) && (lVar5 = *(longlong *)(lVar5 + 0x398), lVar5 != 0)) {
        uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
        uVar3 = FUN_140f905b2(uVar3,lVar5,1);
        return uVar3;
      }
    }
  }
  return 0;
}



// FUNCTION 140f905b2 FUN_140f905b2 body=94 status=ok
// SIG undefined FUN_140f905b2(void)

int FUN_140f905b2(longlong *param_1,longlong param_2,char param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar2 = 0;
  if ((param_2 != 0) && ((longlong)(int)param_1[1] != 0)) {
    lVar3 = *param_1;
    lVar4 = (longlong)(int)param_1[1] * 0x78;
    iVar2 = 0;
    do {
      cVar1 = FUN_14882d14a(lVar3,param_2);
      if (cVar1 != '\0') {
        iVar2 = iVar2 + (uint)(*(char *)(lVar3 + 8) == param_3);
      }
      lVar3 = lVar3 + 0x78;
      lVar4 = lVar4 + -0x78;
    } while (lVar4 != 0);
  }
  return iVar2;
}



// FUNCTION 140f90610 FUN_140f90610 body=197 status=ok
// SIG undefined FUN_140f90610(void)

void FUN_140f90610(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar1 = (uint *)*param_2;
  local_58 = *param_1;
  local_50 = (int)param_1[1];
  lVar2 = *(longlong *)
           (*(longlong *)(*(longlong *)(local_58 + 0x60) + (longlong)local_50 * 8) + 0x20);
  lVar5 = 0;
  lVar3 = lVar2 + (ulonglong)*puVar1;
  if ((ulonglong)*puVar1 == 0xffffffff) {
    lVar3 = lVar5;
  }
  lVar4 = lVar2 + (ulonglong)puVar1[1];
  if ((ulonglong)puVar1[1] == 0xffffffff) {
    lVar4 = lVar5;
  }
  local_4c = *(undefined4 *)((longlong)param_1 + 0xc);
  local_68 = lVar2 + (ulonglong)puVar1[2];
  if ((ulonglong)puVar1[2] == 0xffffffff) {
    local_68 = lVar5;
  }
  local_60 = lVar2 + (ulonglong)puVar1[3];
  if ((ulonglong)puVar1[3] == 0xffffffff) {
    local_60 = lVar5;
  }
  FUN_140f906d6(param_3 + 8,&local_58,lVar3,lVar4);
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f906d6 FUN_140f906d6 body=506 status=ok
// SIG undefined FUN_140f906d6(void)

void FUN_140f906d6(undefined8 *param_1,longlong *param_2,longlong param_3,longlong *param_4,
                  longlong param_5,longlong param_6)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_f8 [32];
  undefined1 *local_d8;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_94;
  undefined4 local_8c;
  undefined1 local_88;
  undefined1 local_80 [16];
  longlong local_70;
  undefined1 local_59;
  undefined8 local_58;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar6 = (ulonglong)
          *(ushort *)
           (*(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8) + 0xe);
  lVar4 = (longlong)(int)param_2[1] * 0x28 + *(longlong *)(*param_2 + 8);
  local_c8 = param_3;
  lVar3 = FUN_14009d2a0();
  uVar1 = *(ushort *)(lVar3 + 0x10a);
  if ((uVar1 == 0xffff) ||
     (uVar2 = *(uint *)(lVar4 + 0x20), uVar2 == uVar1 || (int)uVar2 < (int)(uint)uVar1)) {
    bVar8 = false;
  }
  else {
    bVar8 = (*(uint *)(lVar4 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  if (uVar6 != 0) {
    uVar7 = 0;
    do {
      if (*(char *)(param_6 + uVar7) == '\0') {
        *(undefined1 *)(param_6 + uVar7) = 1;
      }
      else {
        lVar3 = *(longlong *)(param_1[1] + 8);
        lVar5 = (ulonglong)*(ushort *)(local_c8 + uVar7 * 4) * 0x128;
        FUN_14087ad3e(lVar3 + lVar5 + 0x90,local_80);
        lVar4 = *param_4;
        if (DAT_14c950c29 == '\x01') {
          if (lVar4 == 0) {
            lVar4 = 0;
          }
          else {
            FUN_1456cec3c();
            lVar4 = *param_4;
          }
        }
        lVar3 = lVar3 + lVar5;
        local_b8 = param_4[1];
        local_b0 = (undefined4)param_4[2];
        uStack_ac = *(undefined4 *)((longlong)param_4 + 0x14);
        uStack_a8 = (undefined4)param_4[3];
        uStack_a4 = *(undefined4 *)((longlong)param_4 + 0x1c);
        local_8c = 1;
        local_59 = 0xf;
        local_d8 = &local_59;
        local_c0 = lVar4;
        FUN_140cdcd7c(local_80,&local_58,*(undefined8 *)(param_5 + uVar7 * 8),lVar3 + 0xb0);
        local_94 = local_58;
        if (local_50 == '\0') {
          local_94 = 0;
        }
        local_a0 = *(undefined4 *)(lVar3 + 0x122);
        local_9c = *(undefined4 *)(lVar3 + 0x110);
        local_88 = bVar8;
        FUN_140f908d2(*param_1,local_a0,&local_c0);
        if (local_70 != 0) {
          FUN_1400020a8();
        }
      }
      uVar7 = uVar7 + 1;
      param_4 = param_4 + 4;
    } while (uVar6 != uVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f908d2 FUN_140f908d2 body=176 status=ok
// SIG undefined FUN_140f908d2(void)

void FUN_140f908d2(longlong param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong *plVar10;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = param_2;
  plVar10 = (longlong *)FUN_140f90984(param_1 + 0x40,param_2 & 0xffff);
  iVar2 = (int)plVar10[1];
  *(uint *)(plVar10 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)plVar10 + 0xc) < iVar2 + 1U) {
    FUN_140f90a4c(plVar10,iVar2);
  }
  lVar1 = *plVar10 + (longlong)iVar2 * 0x40;
  lVar3 = *param_3;
  *(longlong *)(*plVar10 + (longlong)iVar2 * 0x40) = lVar3;
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(longlong *)(lVar1 + 8) = param_3[1];
  lVar3 = param_3[3];
  *(longlong *)(lVar1 + 0x10) = param_3[2];
  *(longlong *)(lVar1 + 0x18) = lVar3;
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x24);
  lVar3 = param_3[5];
  uVar5 = *(undefined4 *)((longlong)param_3 + 0x2c);
  uVar6 = *(undefined4 *)((longlong)param_3 + 0x29);
  uVar7 = *(undefined4 *)((longlong)param_3 + 0x2d);
  uVar8 = *(undefined4 *)((longlong)param_3 + 0x31);
  uVar9 = *(undefined4 *)((longlong)param_3 + 0x35);
  *(int *)(lVar1 + 0x20) = (int)param_3[4];
  *(undefined4 *)(lVar1 + 0x24) = uVar4;
  *(int *)(lVar1 + 0x28) = (int)lVar3;
  *(undefined4 *)(lVar1 + 0x2c) = uVar5;
  *(undefined4 *)(lVar1 + 0x29) = uVar6;
  *(undefined4 *)(lVar1 + 0x2d) = uVar7;
  *(undefined4 *)(lVar1 + 0x31) = uVar8;
  *(undefined4 *)(lVar1 + 0x35) = uVar9;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f90984 FUN_140f90984 body=199 status=ok
// SIG undefined FUN_140f90984(void)

longlong FUN_140f90984(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  int *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar2 = *param_1 + (longlong)iVar1 * 0x20;
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x20) == *param_3) {
          if (lVar2 != 0) goto LAB_140f909dc;
          break;
        }
        iVar1 = *(int *)(lVar2 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_38 = 0;
  local_28 = param_3;
  FUN_140f90b4c(param_1,&local_1c,param_2);
  lVar2 = (longlong)local_1c * 0x20 + *param_1;
LAB_140f909dc:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2 + 8;
}



// FUNCTION 140f90a4c FUN_140f90a4c body=255 status=ok
// SIG undefined FUN_140f90a4c(void)

void FUN_140f90a4c(longlong param_1,int param_2)

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



// FUNCTION 140f90b4c FUN_140f90b4c body=1443 status=ok
// SIG undefined FUN_140f90b4c(void)

int * FUN_140f90b4c(longlong *param_1,int *param_2,uint param_3,undefined8 *param_4,char *param_5)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong *plVar15;
  byte bVar16;
  int iVar17;
  uint *puVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  longlong *plVar22;
  ulonglong uVar23;
  int iVar24;
  int iVar25;
  longlong lVar26;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar24 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar24 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar24) {
      FUN_1447711aa(param_1,iVar24);
    }
    iVar25 = (int)param_1[5];
    if (iVar25 == 0) {
      iVar11 = -1;
    }
    else {
      iVar11 = iVar25 + 0x1e;
      if (-1 < iVar25 + -1) {
        iVar11 = iVar25 + -1;
      }
      iVar11 = iVar11 >> 5;
    }
    plVar15 = param_1 + 2;
    iVar17 = iVar25 + 1;
    iVar20 = iVar25 + 0x1f;
    if (-1 < iVar25) {
      iVar20 = iVar25;
    }
    if (iVar20 >> 5 == iVar11) {
      *(int *)(param_1 + 5) = iVar17;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar25) {
        if (iVar25 + 0x20U < 0xa0) {
          iVar17 = 0x80;
          iVar11 = iVar25;
        }
        else {
          uVar19 = iVar25 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar12 = 4;
            if (4 < uVar19) {
              uVar12 = uVar19;
            }
          }
          else {
            uVar12 = (uVar19 * 3 >> 3) + uVar19 + 0x10;
          }
          uVar14 = FUN_144a3809e(uVar12 << 2,0);
          iVar11 = (int)(uVar14 >> 2);
          iVar17 = -0x20;
          if ((int)uVar19 <= iVar11) {
            iVar17 = iVar11 << 5;
          }
          iVar11 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar17;
        FUN_1446efbd8(plVar15,iVar11);
        iVar17 = (int)param_1[5] + 1;
      }
      iVar11 = iVar17 + 0x1f;
      if (-1 < iVar17) {
        iVar11 = iVar17;
      }
      *(int *)(param_1 + 5) = iVar17;
      if (iVar17 % 0x20 != 0) {
        plVar22 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar22 = plVar15;
        }
        bVar16 = -(char)(iVar17 % 0x20);
        *(uint *)((longlong)plVar22 + (longlong)(iVar11 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar22 + (longlong)(iVar11 >> 5) * 4) << (bVar16 & 0x1f)) >>
             (bVar16 & 0x1f);
      }
    }
    lVar13 = (longlong)iVar24;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar15 = (longlong *)param_1[4];
    }
    bVar16 = (byte)iVar25 & 0x1f;
    puVar1 = (uint *)((longlong)plVar15 + (longlong)(iVar20 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar16 | 0xfffffffeU >> 0x20 - bVar16);
  }
  else {
    iVar24 = (int)param_1[6];
    lVar13 = (longlong)iVar24;
    iVar25 = *(int *)(*param_1 + 4 + lVar13 * 0x20);
    *(int *)(param_1 + 6) = iVar25;
    iVar11 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar11;
    if (iVar11 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar25 * 0x20) = 0xffffffff;
    }
  }
  puVar1 = (uint *)(param_1 + 2);
  puVar18 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar18 = puVar1;
  }
  iVar25 = iVar24 + 0x1f;
  if (-1 < iVar24) {
    iVar25 = iVar24;
  }
  puVar18[iVar25 >> 5] = puVar18[iVar25 >> 5] | 1 << ((byte)iVar24 & 0x1f);
  lVar26 = *param_1;
  lVar13 = lVar13 * 0x20;
  puVar2 = (undefined4 *)(lVar26 + lVar13);
  iVar25 = *(int *)*param_4;
  *(int *)(lVar26 + lVar13) = iVar25;
  puVar5 = (undefined8 *)(lVar26 + 8 + lVar13);
  *puVar5 = 0;
  puVar5[1] = 0;
  *(undefined4 *)(lVar26 + 0x18 + lVar13) = 0xffffffff;
  if ((uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34)) < 2) {
LAB_140f90c5b:
    cVar10 = '\0';
  }
  else {
    plVar15 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar15 = (longlong *)param_1[8];
    }
    iVar11 = *(int *)((longlong)plVar15 + (ulonglong)((int)param_1[9] - 1U & param_3) * 4);
    if (iVar11 == -1) goto LAB_140f90c5b;
    do {
      puVar3 = (undefined4 *)(*param_1 + (longlong)iVar11 * 0x20);
      if (*(int *)(*param_1 + (longlong)iVar11 * 0x20) == iVar25) {
        if (*(longlong *)(puVar3 + 2) != 0) {
          FUN_1400020a8();
        }
        uVar6 = *puVar2;
        uVar7 = puVar2[1];
        uVar8 = puVar2[2];
        uVar9 = puVar2[3];
        *(undefined8 *)(puVar3 + 4) = *(undefined8 *)(puVar2 + 4);
        *puVar3 = uVar6;
        puVar3[1] = uVar7;
        puVar3[2] = uVar8;
        puVar3[3] = uVar9;
        FUN_147550d54(param_1,iVar24);
        cVar10 = '\x01';
        break;
      }
      iVar11 = puVar3[6];
      cVar10 = '\0';
    } while (iVar11 != -1);
  }
  if (param_5 != (char *)0x0) {
    *param_5 = cVar10;
  }
  if (cVar10 != '\0') goto LAB_140f90e6b;
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  uVar19 = 1;
  if (3 < uVar12) {
    uVar14 = (ulonglong)(uVar12 & 0xfffffffe) + 0xf;
    lVar13 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar19 = 1 << ((byte)lVar13 & 0x1f);
  }
  if (((int)uVar12 < 1) || ((int)uVar19 <= (int)param_1[9])) {
    param_3 = (int)param_1[9] - 1U & param_3;
    puVar2[7] = param_3;
    plVar15 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar15 = param_1 + 7;
    }
    puVar2[6] = *(undefined4 *)
                 ((longlong)plVar15 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_3) * 4)
    ;
    plVar15 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar15 = param_1 + 7;
    }
    *(int *)((longlong)plVar15 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_3) * 4) =
         iVar24;
    goto LAB_140f90e6b;
  }
  *(uint *)(param_1 + 9) = uVar19;
  plVar15 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar15,0,0,4);
    uVar19 = *(uint *)(param_1 + 9);
  }
  plVar22 = param_1 + 7;
  if (uVar19 == 1) {
    if (*plVar15 != 0) {
      FUN_1446efa72(plVar15,0,0,4);
    }
LAB_140f90cc2:
    uVar12 = 0;
    do {
      plVar15 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar15 = plVar22;
      }
      *(undefined4 *)((longlong)plVar15 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar12) * 4) =
           0xffffffff;
      uVar12 = uVar12 + 1;
    } while (uVar19 != uVar12);
  }
  else {
    if (uVar19 == 0) goto LAB_140f90e6b;
    FUN_1446efa72(plVar15,0,uVar19,4);
    if (0 < (int)uVar19) goto LAB_140f90cc2;
  }
  iVar25 = (int)param_1[5];
  if (iVar25 == 0) {
    uVar14 = 0;
    uVar23 = 1;
    iVar11 = 0;
    iVar17 = 0;
  }
  else {
    puVar18 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar18 = puVar1;
    }
    uVar19 = *puVar18;
    if (uVar19 == 0) {
      iVar11 = iVar25 + 0x1e;
      if (-1 < iVar25 + -1) {
        iVar11 = iVar25 + -1;
      }
      uVar14 = 0;
      uVar23 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar23 = uVar14;
      }
      iVar17 = 0;
      do {
        if (uVar23 == uVar14) goto LAB_140f90e6b;
        iVar17 = iVar17 + 0x20;
        uVar19 = puVar18[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar19 == 0);
    }
    else {
      uVar14 = 0;
      iVar17 = 0;
    }
    uVar23 = (ulonglong)(-uVar19 & uVar19);
    uVar4 = uVar23 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar11 = (iVar17 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (iVar25 <= iVar11) {
      iVar11 = iVar25;
    }
  }
  if (iVar11 < iVar25) {
    uVar19 = 0xffffffff;
    do {
      lVar13 = *param_1;
      lVar26 = (longlong)iVar11 * 0x20;
      uVar12 = (int)param_1[9] - 1U & (uint)*(ushort *)(lVar13 + lVar26);
      *(uint *)(lVar13 + 0x1c + lVar26) = uVar12;
      plVar15 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar15 = plVar22;
      }
      *(undefined4 *)(lVar13 + 0x18 + lVar26) =
           *(undefined4 *)((longlong)plVar15 + (ulonglong)((int)param_1[9] - 1U & uVar12) * 4);
      plVar15 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar15 = plVar22;
      }
      *(int *)((longlong)plVar15 + (ulonglong)((int)param_1[9] - 1U & uVar12) * 4) = iVar11;
      uVar19 = ~(uint)uVar23 & uVar19;
      puVar18 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar18 = puVar1;
      }
      iVar25 = (int)param_1[5];
      iVar11 = (int)uVar14;
      lVar13 = (longlong)iVar11;
      uVar12 = puVar18[lVar13] & uVar19;
      if (uVar12 == 0) {
        iVar20 = iVar25 + 0x1e;
        if (-1 < iVar25 + -1) {
          iVar20 = iVar25 + -1;
        }
        iVar20 = iVar20 >> 5;
        iVar21 = iVar20;
        if (iVar20 < iVar11) {
          iVar21 = iVar11;
        }
        if (iVar20 <= iVar11) break;
        lVar26 = 0;
        while( true ) {
          iVar17 = iVar17 + 0x20;
          uVar12 = puVar18[lVar13 + lVar26 + 1];
          if (uVar12 != 0) break;
          lVar26 = lVar26 + 1;
          if (iVar21 - lVar13 == lVar26) goto LAB_140f90e6b;
        }
        uVar14 = (ulonglong)(iVar11 + (int)lVar26 + 1);
        uVar19 = 0xffffffff;
      }
      uVar23 = (ulonglong)(-uVar12 & uVar12);
      uVar4 = uVar23 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar11 = (iVar17 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar11 < iVar25);
  }
LAB_140f90e6b:
  *param_2 = iVar24;
  return param_2;
}



// FUNCTION 140f910fc FUN_140f910fc body=57 status=ok
// SIG undefined FUN_140f910fc(void)

void FUN_140f910fc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4838 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4838 = FUN_140002ddd(FUN_1465bea8a,uVar1,L"HoldingStationObjectDef");
  }
  return;
}



// FUNCTION 140f91136 FUN_140f91136 body=460 status=ok
// SIG undefined FUN_140f91136(void)

void FUN_140f91136(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  char cVar8;
  int iVar9;
  longlong lVar10;
  void *_Dst;
  uint uVar11;
  ulonglong uVar12;
  
  lVar10 = (**(code **)(*param_1 + 0x48))();
  if (lVar10 != 0) {
    DAT_14cb89f80 = 0;
    iVar9 = (int)param_1[3];
    if (0 < iVar9) {
      iVar4 = *DAT_14cb89f98;
      plVar1 = param_1 + 2;
      uVar12 = 0;
      do {
        uVar11 = (uint)uVar12;
        plVar5 = *(longlong **)(*plVar1 + uVar12 * 0x10);
        plVar6 = *(longlong **)(*plVar1 + 8 + uVar12 * 0x10);
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
        }
        (**(code **)*plVar5)(plVar5,lVar10);
        cVar8 = (**(code **)(*plVar5 + 8))(plVar5);
        if (cVar8 != '\0') {
          lVar7 = *plVar1;
          plVar5 = *(longlong **)(lVar7 + 8 + (longlong)(int)uVar11 * 0x10);
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
          iVar9 = (int)param_1[3];
          if (~uVar11 + iVar9 != 0) {
            _Dst = (void *)(lVar7 + (longlong)(int)uVar11 * 0x10);
            memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)(int)(~uVar11 + iVar9) << 4);
            iVar9 = (int)param_1[3];
          }
          *(int *)(param_1 + 3) = iVar9 + -1;
          FUN_140f913a6(plVar1);
          uVar11 = uVar11 - 1;
        }
        if ((iVar4 < DAT_14cb89f80) || (cVar8 = FUN_140071712(&DAT_14c9a8020,1), cVar8 != '\0')) {
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar6 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar6)(plVar6);
              LOCK();
              piVar3 = (int *)((longlong)plVar6 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (*piVar3 == 0) {
                (**(code **)(*plVar6 + 0x10))(plVar6);
              }
            }
          }
          iVar9 = (int)param_1[3];
          break;
        }
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar5 = plVar6 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
            (**(code **)*plVar6)(plVar6);
            LOCK();
            piVar3 = (int *)((longlong)plVar6 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
            }
          }
        }
        uVar12 = (ulonglong)(uVar11 + 1);
        iVar9 = (int)param_1[3];
      } while ((int)(uVar11 + 1) < iVar9);
    }
    if (iVar9 == 0) {
      FUN_140f9134c(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 140f9134c FUN_140f9134c body=89 status=ok
// SIG undefined FUN_140f9134c(void)

void FUN_140f9134c(undefined8 param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar1;
  
  lVar1 = DAT_14c9a7d48;
  if (DAT_14c9a7d48 != 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(DAT_14c9a7d48 + 0x250);
    EnterCriticalSection(lpCriticalSection);
    FUN_140e67d96(lVar1 + 0x278,param_1);
    LeaveCriticalSection(lpCriticalSection);
    FUN_140f91434(lVar1,param_1);
    return;
  }
  return;
}


