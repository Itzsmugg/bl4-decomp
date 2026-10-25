// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1434b2517 FUN_1434b2517 body=69 status=ok
// SIG undefined FUN_1434b2517(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434b2517(void)

{
  _DAT_14cad5518 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434b2559. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad5520,1);
  return;
}



// FUNCTION 1434b255c FUN_1434b255c body=69 status=ok
// SIG undefined FUN_1434b255c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434b255c(void)

{
  _DAT_14cad5530 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434b259e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad5538,1);
  return;
}



// FUNCTION 1434b25a2 FUN_1434b25a2 body=930 status=ok
// SIG undefined FUN_1434b25a2(void)

/* WARNING: Removing unreachable block (ram,0x0001434b28e3) */
/* WARNING: Removing unreachable block (ram,0x0001434b28ef) */
/* WARNING: Removing unreachable block (ram,0x0001434b2904) */

undefined4
FUN_1434b25a2(longlong param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 *param_6,undefined4 param_7)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  char cVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_158 [40];
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  longlong local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined1 uStack_f0;
  undefined7 uStack_ef;
  undefined1 uStack_e8;
  undefined8 uStack_e7;
  longlong local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined2 local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined **local_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  longlong *plStack_68;
  undefined1 local_60;
  undefined8 local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x58);
  local_90 = &PTR_FUN_14a8a89c0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  plStack_68 = (longlong *)0x0;
  local_60 = 0;
  local_58 = *(undefined8 *)(param_1 + 0x10);
  plVar8 = *(longlong **)(param_1 + 0x18);
  local_88 = lVar4;
  if (plVar8 == (longlong *)0x0) {
    plStack_50 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    local_60 = 0;
    plStack_68 = (longlong *)0x0;
    local_70 = 0;
    uStack_78 = 0;
    local_80 = 0;
    local_90 = &PTR_FUN_14a8a89c0;
    LOCK();
    plVar1 = plVar8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    plStack_50 = plVar8;
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
  uStack_e8 = 0;
  uStack_e7 = 0;
  local_f8 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_128 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  local_b0 = 0xffff;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_d0 = *(longlong *)(param_1 + 0x48);
  if (local_d0 == 0) {
    if (*(int *)(param_1 + 0xdc) == 0) {
LAB_1434b28a4:
      local_d0 = 0;
    }
    else {
      uVar3 = *(uint *)(param_1 + 0xd8);
      local_d0 = 0;
      if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
        plVar8 = (longlong *)
                 ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
        if ((plVar8 == (longlong *)0x0) ||
           (((int)plVar8[2] != *(int *)(param_1 + 0xdc) ||
            ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)))) goto LAB_1434b28a4;
        local_d0 = *plVar8;
      }
    }
  }
  lVar9 = *(longlong *)(param_1 + 0x50);
  uStack_110 = *(undefined8 *)(lVar9 + 0x68);
  local_118 = *param_6;
  uStack_120 = param_5;
  uStack_f0 = SUB81(&local_90,0);
  uStack_ef = (undefined7)((ulonglong)&local_90 >> 8);
  local_130 = param_4;
  local_d8 = param_2;
  if ((lVar4 == 0) || (lVar4 = *(longlong *)(lVar4 + 0x1a8), lVar4 == 0)) {
    uVar7 = 0;
    goto LAB_1434b27dd;
  }
  plVar8 = *(longlong **)(lVar4 + 0x38);
  if (plVar8 == (longlong *)0x0) {
LAB_1434b27d3:
    uVar7 = 0;
  }
  else {
    if (*(code **)(*plVar8 + 0x3c0) != (code *)&LAB_1448ff5f6) {
      cVar5 = (**(code **)(*plVar8 + 0x3c0))();
      if (cVar5 == '\0') goto LAB_1434b291d;
      goto LAB_1434b27d3;
    }
    if (plVar8[0x1e] == 0) goto LAB_1434b27d3;
LAB_1434b291d:
    if (*(longlong **)(lVar4 + 0x108) == (longlong *)0x0) goto LAB_1434b27d3;
    cVar5 = (**(code **)(**(longlong **)(lVar4 + 0x108) + 0x3c0))();
    uVar7 = 1;
    if (cVar5 == '\0') goto LAB_1434b27d3;
  }
  lVar9 = *(longlong *)(param_1 + 0x50);
LAB_1434b27dd:
  uStack_e7._0_5_ = CONCAT14(uVar7,(undefined4)uStack_e7);
  uStack_e7._0_6_ = (uint6)(uint5)uStack_e7;
  uStack_e7 = CONCAT17(*(byte *)(lVar9 + 0xa4) >> 1,
                       CONCAT16(*(byte *)(param_1 + 0xc) >> 5,(uint6)uStack_e7)) & 0x101ffffffffffff
  ;
  local_98 = param_7;
  if (param_2 == 0) {
    bVar10 = false;
  }
  else {
    bVar10 = (*(uint *)(param_2 + 8) & 0x30) != 0;
  }
  uStack_e7._0_6_ = CONCAT15(bVar10,(uint5)uStack_e7);
  local_108 = lVar9;
  local_b0 = (short)param_3;
  uVar6 = FUN_1447713a8(*(undefined8 *)(param_1 + 0x20),&local_130,param_3);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  plVar8 = plStack_50;
  local_90 = &PTR_FUN_14a8a89c0;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  plVar8 = plStack_68;
  if (plStack_68 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_68 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_68)(plStack_68);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434b2946 FUN_1434b2946 body=68 status=ok
// SIG undefined FUN_1434b2946(void)

ulonglong FUN_1434b2946(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  
  if (((*(longlong *)(param_1 + 0x20) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) ||
     (*(longlong *)(param_1 + 0x10) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_147ce2758(*(longlong *)(param_1 + 0x20),0,
                          *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x820),param_2,0);
    uVar1 = uVar1 ^ 1;
  }
  return uVar1;
}



// FUNCTION 1434b298a FUN_1434b298a body=2133 status=ok
// SIG undefined FUN_1434b298a(void)

ulonglong FUN_1434b298a(longlong param_1,void *param_2,undefined8 param_3,ulonglong *param_4,
                       char param_5,undefined1 *param_6,longlong param_7)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  void *pvVar4;
  DWORD DVar5;
  byte bVar6;
  char cVar7;
  DWORD DVar8;
  DWORD DVar9;
  longlong *plVar10;
  undefined8 uVar11;
  LPVOID pvVar12;
  ulonglong uVar13;
  ulonglong *puVar14;
  longlong lVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  int iVar18;
  int iVar19;
  longlong *plVar20;
  longlong lVar21;
  void *_Dst;
  undefined7 uVar22;
  longlong *plVar23;
  bool bVar24;
  undefined1 auStack_f8 [32];
  void *local_d8;
  void *local_d0;
  longlong local_c8;
  ulonglong *local_b8;
  undefined4 local_ac;
  void *local_a8;
  longlong local_a0;
  longlong *local_98;
  LARGE_INTEGER local_90;
  undefined8 local_88;
  longlong local_80;
  char local_78;
  undefined8 local_70;
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  double dStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  bVar6 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x50) + 0x58) + 0x3c0))();
  plVar23 = *(longlong **)(param_1 + 0x48);
  if (plVar23 == (longlong *)0x0) {
    if (*(int *)(param_1 + 0xdc) == 0) {
LAB_1434b2e85:
      plVar23 = (longlong *)0x0;
    }
    else {
      uVar2 = *(uint *)(param_1 + 0xd8);
      plVar23 = (longlong *)0x0;
      if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
        puVar16 = (undefined8 *)
                  ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if ((puVar16 == (undefined8 *)0x0) ||
           ((*(int *)(puVar16 + 2) != *(int *)(param_1 + 0xdc) ||
            ((*(uint *)(puVar16 + 1) & 0x10200000) != 0)))) goto LAB_1434b2e85;
        plVar23 = (longlong *)*puVar16;
      }
    }
  }
  uVar17 = *param_4;
  if ((uVar17 & 1) == 0) {
    if (uVar17 != 0) {
      puVar14 = (ulonglong *)(uVar17 + 0x20);
      goto LAB_1434b2a54;
    }
    uVar17 = 0;
  }
  else {
    puVar14 = (ulonglong *)((uVar17 & 0xfffffffffffffffe) + 0x18);
LAB_1434b2a54:
    uVar17 = *puVar14;
  }
  local_b8 = param_4;
  local_a8 = param_2;
  plVar10 = (longlong *)FUN_1400796d0(plVar23[2],uVar17,1);
  local_68 = *(longlong *)(param_1 + 0x50);
  lVar15 = *(longlong *)(local_68 + 0x1d50);
  local_58 = 0;
  dStack_50 = 0.0;
  local_60 = plVar10;
  if (DAT_14cad58f9 == '\x01') {
    QueryPerformanceCounter(&local_90);
    dStack_50 = (double)local_90.QuadPart * DAT_14c83f420 + 16777216.0;
  }
  iVar18 = DAT_14cad5548;
  lVar21 = (longlong)(int)DAT_14cad5548;
  DAT_14cad5548 = DAT_14cad5548 + 1;
  if (DAT_14cad554c < DAT_14cad5548) {
    FUN_1417c39a6(iVar18);
  }
  *(longlong **)(DAT_14cad5540 + lVar21 * 8) = &local_68;
  if ((plVar10 == (longlong *)0x0) || (uVar2 = *(uint *)(plVar10 + 0x16), (uVar2 & 0x40) == 0)) {
    if (bVar6 != 0) {
LAB_1434b2b3e:
      uVar17 = 0;
      goto LAB_1434b2b4f;
    }
  }
  else if ((uVar2 >> 0x15 & 1) == 0 || bVar6 != 0) {
    if ((bVar6 & (uVar2 & 0x1004000) != 0) != 0) goto LAB_1434b2b3e;
    if (((bVar6 == 1 && lVar15 != 0) && (*(char *)(lVar15 + 0x10a8) == '\x01')) &&
       ((*(byte *)(*(longlong *)(param_1 + 0x50) + 0xa4) & 4) == 0)) {
      local_58 = lVar15;
      if (*(char *)(lVar15 + 0x1358) == '\x01') {
        if (*(char *)(lVar15 + 0x11f0) == '\0') {
          if (*(char *)(lVar15 + 0x70) == '\0') {
            *(undefined2 *)(lVar15 + 0x70) = 0x101;
            *(undefined4 *)(lVar15 + 0x74) = 0;
            *(undefined1 *)(lVar15 + 0x1078) = 0;
            *(undefined8 *)(lVar15 + 0x10a0) = 0;
            *(undefined8 *)(lVar15 + 0x1080) = 0;
            *(undefined8 *)(lVar15 + 0x1088) = 0;
            *(undefined8 *)(lVar15 + 0x108c) = 0;
            *(undefined8 *)(lVar15 + 0x1094) = 0;
          }
          cVar7 = FUN_147be4dae(lVar15,plVar10,uVar17);
          uVar17 = CONCAT71((int7)(uVar17 >> 8),1);
          if (cVar7 == '\x01') goto LAB_1434b2b4f;
        }
      }
      else {
        FUN_147a48f2a(lVar15,plVar10,uVar17);
      }
    }
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x50) + 0x58);
    uVar11 = (**(code **)(*plVar3 + 0x448))(plVar3,plVar23,plVar10,param_3);
    if ((char)uVar11 != '\0') {
      if (param_5 == '\0') {
        local_ac = 0;
      }
      else {
        local_ac = (undefined4)
                   CONCAT71((int7)((ulonglong)uVar11 >> 8),*(byte *)(plVar10 + 0x16) >> 7);
      }
      DVar9 = DAT_14c7585d0;
      if (DAT_14c7585d0 == 0xffffffff) {
        DVar9 = TlsAlloc();
        DVar8 = 0xffffffff;
        LOCK();
        bVar24 = DAT_14c7585d0 != 0xffffffff;
        DVar5 = DVar9;
        if (bVar24) {
          DVar8 = DAT_14c7585d0;
          DVar5 = DAT_14c7585d0;
        }
        DAT_14c7585d0 = DVar5;
        UNLOCK();
        if (bVar24) {
          TlsFree(DVar9);
          DVar9 = DVar8;
        }
      }
      pvVar12 = TlsGetValue(DVar9);
      if (pvVar12 == (LPVOID)0x0) {
        pvVar12 = (LPVOID)FUN_140036a08(&local_90);
        FUN_140fddf04(pvVar12);
        TlsSetValue(DVar9,pvVar12);
      }
      local_90.QuadPart = (longlong)pvVar12 + 0x10;
      local_88 = *(undefined8 *)((longlong)pvVar12 + 0x10);
      local_80 = *(longlong *)((longlong)pvVar12 + 0x20);
      local_78 = '\0';
      local_70 = *(undefined8 *)((longlong)pvVar12 + 0x28);
      *(LARGE_INTEGER **)((longlong)pvVar12 + 0x28) = &local_90;
      *(int *)((longlong)pvVar12 + 0x30) = *(int *)((longlong)pvVar12 + 0x30) + 1;
      uVar17 = (ulonglong)*(ushort *)((longlong)plVar10 + 0xb6);
      DVar9 = DAT_14c7585d0;
      if (DAT_14c7585d0 == 0xffffffff) {
        DVar9 = TlsAlloc();
        DVar8 = 0xffffffff;
        LOCK();
        bVar24 = DAT_14c7585d0 != 0xffffffff;
        DVar5 = DVar9;
        if (bVar24) {
          DVar8 = DAT_14c7585d0;
          DVar5 = DAT_14c7585d0;
        }
        DAT_14c7585d0 = DVar5;
        UNLOCK();
        if (bVar24) {
          TlsFree(DVar9);
          DVar9 = DVar8;
        }
      }
      pvVar12 = TlsGetValue(DVar9);
      if (pvVar12 == (LPVOID)0x0) {
        pvVar12 = (LPVOID)FUN_140036a08(&local_a0);
        FUN_140fddf04(pvVar12);
        TlsSetValue(DVar9,pvVar12);
      }
      puVar14 = (ulonglong *)((longlong)pvVar12 + 0x10);
      _Dst = (void *)(*(longlong *)((longlong)pvVar12 + 0x10) + 0xfU & 0xfffffffffffffff0);
      uVar13 = (longlong)_Dst + uVar17;
      if (*(ulonglong *)((longlong)pvVar12 + 0x18) < uVar13) {
        FUN_140023dd8(puVar14);
        _Dst = (void *)(*puVar14 + 0xf & 0xfffffffffffffff0);
        uVar13 = (longlong)_Dst + uVar17;
      }
      *puVar14 = uVar13;
      memset(_Dst,0,uVar17);
      plVar3 = plVar10;
      do {
        plVar20 = plVar3;
        plVar3 = (longlong *)plVar20[8];
      } while ((longlong *)plVar20[8] != (longlong *)0x0);
      FUN_14001eaf4(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x58),&local_a0,plVar20);
      pvVar4 = local_a8;
      if (local_a0 == 0) {
LAB_1434b2e96:
        uVar17 = 0;
      }
      else {
        local_c8 = param_7;
        local_d8 = local_a8;
        local_d0 = _Dst;
        FUN_1436927c6(local_a0,plVar23,plVar20,*(undefined8 *)(param_1 + 0x58));
        uVar22 = (undefined7)((ulonglong)pvVar4 >> 8);
        if ((*(byte *)((longlong)pvVar4 + 0x29) & 2) != 0) {
          if (bVar6 == 0) {
            *(undefined1 *)(local_b8 + 2) = 1;
            uVar17 = CONCAT71(uVar22,1);
            uVar13 = 0;
          }
          else {
            uVar13 = 0;
            uVar17 = 0;
          }
          goto LAB_1434b3012;
        }
        if (*(longlong *)((longlong)pvVar4 + 0xa0) == *(longlong *)((longlong)pvVar4 + 0xa8)) {
          DAT_14c949520 = 0;
          if (((char)local_ac == '\0') ||
             ((*(int *)(param_7 + 8) <= *(int *)(param_7 + 0x34) && (*(int *)(param_1 + 0x80) < 1)))
             ) {
            plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 0x68);
            plVar20 = (longlong *)0x0;
            if (plVar3 != plVar23) {
              plVar20 = plVar23;
            }
            local_d8 = _Dst;
            FUN_14359f266(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x58),plVar3,plVar20,
                          plVar10);
            DAT_14c949520 = 0;
            DAT_14c997f18 = 1;
            (**(code **)(*plVar23 + 0x248))(plVar23,plVar10,_Dst);
            DAT_14c997f18 = 0;
          }
          else {
            *param_6 = 1;
          }
          do {
            for (plVar23 = (longlong *)plVar10[10]; plVar23 != (longlong *)0x0;
                plVar23 = (longlong *)plVar23[3]) {
              if ((~*(uint *)(plVar23[1] + 0x18) & 0x8001) == 0) goto LAB_1434b2f42;
            }
            plVar10 = (longlong *)(**(code **)(*plVar10 + 0x2b0))(plVar10);
          } while (plVar10 != (longlong *)0x0);
          goto LAB_1434b2faa;
        }
        if (bVar6 != 0) goto LAB_1434b2e96;
        *(undefined1 *)(local_b8 + 2) = 1;
        uVar17 = CONCAT71(uVar22,1);
      }
      uVar13 = 0;
      goto LAB_1434b3012;
    }
    goto LAB_1434b2b4c;
  }
  *(undefined1 *)(local_b8 + 2) = 1;
  goto LAB_1434b2b4c;
LAB_1434b2f42:
  if (((uint)plVar23[7] & 0x480) == 0x80) {
    if (((ulonglong)plVar23[7] >> 0x24 & 1) == 0) {
      (**(code **)(*plVar23 + 0x148))
                (plVar23,(longlong)*(int *)((longlong)plVar23 + 0x44) + (longlong)_Dst);
    }
    plVar23 = plVar23 + 3;
    do {
      for (plVar23 = (longlong *)*plVar23; plVar23 != (longlong *)0x0;
          plVar23 = (longlong *)plVar23[3]) {
        if ((~*(uint *)(plVar23[1] + 0x18) & 0x8001) == 0) goto LAB_1434b2f42;
      }
      plVar10 = (longlong *)(**(code **)(*plVar10 + 0x2b0))(plVar10);
      plVar23 = plVar10 + 10;
    } while (plVar10 != (longlong *)0x0);
  }
LAB_1434b2faa:
  if (local_78 == '\0') {
    local_78 = '\x01';
    *(int *)(local_90.QuadPart + 0x20) = *(int *)(local_90.QuadPart + 0x20) + -1;
    if (local_80 != *(longlong *)(local_90.QuadPart + 0x10)) {
      FUN_14004673c();
    }
    *(undefined8 *)local_90 = local_88;
    *(undefined8 *)(local_90.QuadPart + 0x18) = local_70;
    local_88 = 0;
  }
  uVar13 = CONCAT71((int7)((ulonglong)plVar23 >> 8),DAT_14c949520 == 0);
  uVar17 = uVar13 & 0xffffffff;
LAB_1434b3012:
  if (local_98 != (longlong *)0x0) {
    LOCK();
    plVar23 = local_98 + 1;
    *(int *)plVar23 = (int)*plVar23 + -1;
    UNLOCK();
    if ((int)*plVar23 == 0) {
      (**(code **)*local_98)(local_98);
      LOCK();
      piVar1 = (int *)((longlong)local_98 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_98 + 0x10))(local_98);
      }
    }
  }
  if (local_78 == '\0') {
    local_78 = '\x01';
    *(int *)(local_90.QuadPart + 0x20) = *(int *)(local_90.QuadPart + 0x20) + -1;
    if (local_80 != *(longlong *)(local_90.QuadPart + 0x10)) {
      FUN_14004673c();
    }
    *(undefined8 *)local_90 = local_88;
    *(undefined8 *)(local_90.QuadPart + 0x18) = local_70;
  }
  if ((char)uVar13 == '\0') goto LAB_1434b2b4f;
LAB_1434b2b4c:
  uVar17 = CONCAT71((int7)(uVar17 >> 8),1);
LAB_1434b2b4f:
  if (((local_58 != 0) && (*(char *)(local_58 + 0x10a8) == '\x01')) &&
     (*(char *)(local_58 + 0x11f0) == '\0')) {
    *(int *)(local_58 + 0x50) = *(int *)(local_58 + 0x50) + 1;
    *(int *)(local_58 + 0x1348) = *(int *)(local_58 + 0x1348) + 1;
    *(int *)(local_58 + 0x74) = *(int *)(local_58 + 0x74) + 1;
    *(undefined1 *)(local_58 + 0x61) = 1;
    FUN_147a4d204();
  }
  if ((longlong)(int)DAT_14cad5548 != 0) {
    iVar18 = 1;
    lVar21 = 0;
    lVar15 = 0;
    do {
      if (*(longlong **)(DAT_14cad5540 + lVar21) == &local_68) {
        if (iVar18 != 0) {
          iVar18 = DAT_14cad5548 - iVar18;
          if (iVar18 != 0) {
            iVar19 = 1;
            if (iVar18 < 1) {
              iVar19 = iVar18;
            }
            memmove((void *)(DAT_14cad5540 + (lVar15 >> 0x20) * 8),
                    (void *)(DAT_14cad5540 + (longlong)(int)(DAT_14cad5548 - iVar19) * 8),
                    (longlong)iVar19 << 3);
          }
          DAT_14cad5548 = DAT_14cad5548 - 1;
          FUN_1417c3b10();
        }
        break;
      }
      lVar15 = lVar15 + 0x100000000;
      iVar18 = iVar18 + 1;
      lVar21 = lVar21 + 8;
    } while ((longlong)(int)DAT_14cad5548 << 3 != lVar21);
  }
  if (DAT_14cad58f9 == '\x01') {
    QueryPerformanceCounter(&local_90);
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar17 & 0xffffffff;
}



// FUNCTION 1434b31e0 FUN_1434b31e0 body=4224 status=ok
// SIG undefined FUN_1434b31e0(void)

void FUN_1434b31e0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  void *_Dst;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  byte bVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  int iVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined1 *puVar20;
  int iVar21;
  uint uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  longlong lVar26;
  longlong lVar27;
  uint uVar28;
  longlong *plVar29;
  ulonglong uVar30;
  uint uVar31;
  int iVar32;
  undefined1 auStack_218 [32];
  int *local_1f8;
  uint *local_1f0;
  longlong *local_1e8;
  longlong local_1e0;
  ulonglong local_1d8;
  int local_1cc;
  longlong *local_1c8;
  ulonglong local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  undefined **local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  longlong *plStack_180;
  undefined1 local_178;
  undefined8 local_170;
  longlong *plStack_168;
  int local_15c;
  longlong local_158 [5];
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 uStack_120;
  undefined ***local_118;
  ulonglong uStack_110;
  byte local_108;
  longlong local_100;
  undefined8 uStack_f8;
  longlong *local_f0;
  int *piStack_e8;
  undefined8 local_e0;
  undefined2 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  uint local_a8 [4];
  uint *local_98;
  uint local_90;
  undefined8 local_8c;
  int local_84;
  undefined1 local_80 [8];
  undefined1 *local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_218;
  cVar4 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x50) + 0x58) + 0x3c0))();
  if (cVar4 != '\0') goto LAB_1434b3fb5;
  local_98 = (uint *)0x0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = (undefined1 *)0x0;
  local_70 = 0;
  local_15c = 0;
  local_1e0 = param_1;
  if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
    local_1a0 = *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x58);
    local_118 = &local_1a8;
    local_1a8 = &PTR_FUN_14a8a89c0;
    local_198 = 0;
    uStack_190 = 0;
    local_188 = 0;
    plStack_180 = (longlong *)0x0;
    local_178 = 0;
    local_170 = 0;
    plStack_168 = (longlong *)0x0;
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_124 = 0;
    uStack_120 = 0;
    local_158[4] = 0;
    uStack_130 = 0;
    uStack_12c = 0;
    local_158[2] = 0;
    local_158[3] = 0;
    local_158[0] = 0;
    local_158[1] = 0;
    uStack_f8 = 0;
    local_e0 = 0;
    local_d8 = 0xffff;
    local_d0 = 0;
    uStack_c8 = 0;
    local_c0 = 0;
    local_f0 = &local_b8;
    local_1f8 = &local_15c;
    local_100 = *(longlong *)(param_1 + 0x48);
    if (local_100 == 0) {
      if (*(int *)(param_1 + 0xdc) == 0) {
LAB_1434b420f:
        local_100 = 0;
      }
      else {
        uVar12 = *(uint *)(param_1 + 0xd8);
        local_100 = 0;
        if ((-1 < (int)uVar12) && ((int)uVar12 < DAT_14c9647dc)) {
          plVar29 = (longlong *)
                    ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8));
          if ((plVar29 == (longlong *)0x0) ||
             (((int)plVar29[2] != *(int *)(param_1 + 0xdc) ||
              ((*(uint *)(plVar29 + 1) & 0x10200000) != 0)))) goto LAB_1434b420f;
          local_100 = *plVar29;
        }
      }
    }
    local_108 = *(byte *)(*(longlong *)(param_1 + 0x50) + 0xa4) >> 1 & 1;
    piStack_e8 = local_1f8;
    FUN_140665946(*(undefined8 *)(param_1 + 0x20),**(undefined8 **)(param_1 + 0x30),local_158,
                  &local_b8);
    plVar29 = plStack_168;
    local_1a8 = &PTR_FUN_14a8a89c0;
    if (plStack_168 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_168 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_168)();
        LOCK();
        piVar2 = (int *)((longlong)plVar29 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar29 + 0x10))();
        }
      }
    }
    plVar29 = plStack_180;
    param_1 = local_1e0;
    if (plStack_180 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_180 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_180)();
        LOCK();
        piVar2 = (int *)((longlong)plVar29 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar29 + 0x10))();
        }
      }
    }
  }
  if ((longlong)*(int *)(param_1 + 0x80) != 0) {
    plVar29 = *(longlong **)(param_1 + 0x78);
    local_1e8 = plVar29 + (longlong)*(int *)(param_1 + 0x80) * 0xf;
    do {
      iVar21 = (int)plVar29[10];
      if (iVar21 == 0) {
        uVar30 = 1;
        uVar23 = 0;
        iVar32 = 0;
        iVar5 = 0;
      }
      else {
        puVar7 = (uint *)plVar29[9];
        if ((uint *)plVar29[9] == (uint *)0x0) {
          puVar7 = (uint *)(plVar29 + 7);
        }
        uVar12 = *puVar7;
        if (uVar12 == 0) {
          iVar5 = iVar21 + 0x1e;
          if (-1 < iVar21 + -1) {
            iVar5 = iVar21 + -1;
          }
          uVar23 = 0;
          uVar30 = (ulonglong)(uint)(iVar5 >> 5);
          if (iVar5 >> 5 < 1) {
            uVar30 = uVar23;
          }
          iVar32 = 0;
          do {
            if (uVar30 == uVar23) goto LAB_1434b34d3;
            iVar32 = iVar32 + 0x20;
            uVar12 = puVar7[uVar23 + 1];
            uVar23 = uVar23 + 1;
          } while (uVar12 == 0);
        }
        else {
          uVar23 = 0;
          iVar32 = 0;
        }
        uVar30 = (ulonglong)(-uVar12 & uVar12);
        uVar24 = uVar30 * 2 + 1;
        lVar26 = 0x3f;
        if (uVar24 != 0) {
          for (; uVar24 >> lVar26 == 0; lVar26 = lVar26 + -1) {
          }
        }
        iVar5 = (iVar32 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
        if (iVar21 <= iVar5) {
          iVar5 = iVar21;
        }
      }
      if (iVar5 != iVar21) {
        uVar12 = 0xffffffff;
        do {
          FUN_140325a06(&local_b8,local_158,(longlong)iVar5 * 0x10 + plVar29[5],0);
          iVar5 = *(uint *)(plVar29 + 0xe) * 4;
          if (*(uint *)(plVar29 + 0xe) < 2) {
            iVar5 = 0;
          }
          local_15c = *(int *)((longlong)plVar29 + 0x34) * 0x10 + local_15c +
                      (*(int *)((longlong)plVar29 + 0x54) + 0x1fU >> 5) * 4 + iVar5 +
                      (int)plVar29[2];
          uVar12 = ~(uint)uVar30 & uVar12;
          puVar7 = (uint *)plVar29[9];
          if ((uint *)plVar29[9] == (uint *)0x0) {
            puVar7 = (uint *)(plVar29 + 7);
          }
          iVar13 = (int)plVar29[10];
          iVar5 = (int)uVar23;
          lVar26 = (longlong)iVar5;
          uVar18 = puVar7[lVar26] & uVar12;
          if (uVar18 == 0) {
            iVar14 = iVar13 + 0x1e;
            if (-1 < iVar13 + -1) {
              iVar14 = iVar13 + -1;
            }
            iVar14 = iVar14 >> 5;
            iVar32 = iVar32 + 0x20;
            iVar17 = iVar14;
            if (iVar14 < iVar5) {
              iVar17 = iVar5;
            }
            if (iVar5 < iVar14) {
              lVar27 = 0;
              do {
                uVar18 = puVar7[lVar26 + lVar27 + 1];
                if (uVar18 != 0) {
                  uVar23 = (ulonglong)(iVar5 + (int)lVar27 + 1);
                  uVar12 = 0xffffffff;
                  goto LAB_1434b35c9;
                }
                iVar32 = iVar32 + 0x20;
                lVar27 = lVar27 + 1;
              } while (iVar17 - lVar26 != lVar27);
              uVar12 = 0xffffffff;
              iVar5 = iVar17;
            }
            uVar23 = (ulonglong)(iVar5 + 1);
            iVar5 = iVar13;
          }
          else {
LAB_1434b35c9:
            uVar30 = (ulonglong)(-uVar18 & uVar18);
            uVar24 = uVar30 * 2 + 1;
            lVar26 = 0x3f;
            if (uVar24 != 0) {
              for (; uVar24 >> lVar26 == 0; lVar26 = lVar26 + -1) {
              }
            }
            iVar5 = (iVar32 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
            if (iVar13 <= iVar5) {
              iVar5 = iVar13;
            }
          }
        } while (iVar5 != iVar21);
      }
LAB_1434b34d3:
      plVar29 = plVar29 + 0xf;
      param_1 = local_1e0;
    } while (plVar29 != local_1e8);
  }
  uVar23 = (ulonglong)local_90;
  if (local_90 == 0) {
    uVar30 = 1;
    iVar21 = 0;
    uVar24 = 0;
    uVar12 = 0;
  }
  else {
    puVar7 = local_98;
    if (local_98 == (uint *)0x0) {
      puVar7 = local_a8;
    }
    uVar12 = *puVar7;
    if (uVar12 == 0) {
      iVar21 = local_90 + 0x1e;
      if (-1 < (int)(local_90 - 1)) {
        iVar21 = local_90 - 1;
      }
      uVar24 = 0;
      uVar30 = (ulonglong)(uint)(iVar21 >> 5);
      if (iVar21 >> 5 < 1) {
        uVar30 = uVar24;
      }
      iVar21 = 0;
      do {
        if (uVar30 == uVar24) goto LAB_1434b36aa;
        iVar21 = iVar21 + 0x20;
        uVar12 = puVar7[uVar24 + 1];
        uVar24 = uVar24 + 1;
      } while (uVar12 == 0);
    }
    else {
      iVar21 = 0;
      uVar24 = 0;
    }
    uVar30 = (ulonglong)(-uVar12 & uVar12);
    uVar10 = uVar30 * 2 + 1;
    lVar26 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar26 == 0; lVar26 = lVar26 + -1) {
      }
    }
    uVar12 = (iVar21 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
    if ((int)local_90 <= (int)uVar12) {
      uVar12 = local_90;
    }
  }
  if (uVar12 != local_90) {
    local_1b0 = param_1 + 0xc0;
    uVar31 = 0xffffffff;
    uVar18 = local_90;
    local_1c0 = uVar23;
    do {
      lVar27 = local_b8;
      local_1e8 = (longlong *)CONCAT44(local_1e8._4_4_,iVar21);
      lVar26 = *(longlong *)(local_b8 + (longlong)(int)uVar12 * 0x10);
      iVar5 = (int)((ulonglong)lVar26 >> 0x20);
      if (*(int *)(param_1 + 0x90) == *(int *)(param_1 + 0xbc)) {
        uVar22 = iVar5 * 0x17 + (int)lVar26;
      }
      else {
        uVar22 = (int)lVar26 + iVar5 * 0x17;
        lVar15 = *(longlong *)(param_1 + 200);
        if (*(longlong *)(param_1 + 200) == 0) {
          lVar15 = local_1b0;
        }
        iVar5 = *(int *)(lVar15 + (ulonglong)(*(int *)(param_1 + 0xd0) - 1U & uVar22) * 4);
        if (iVar5 != -1) {
          do {
            if (*(longlong *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar5 * 0x10) == lVar26)
            goto LAB_1434b3b18;
            iVar5 = *(int *)((longlong)iVar5 * 0x10 + *(longlong *)(param_1 + 0x88) + 8);
          } while (iVar5 != -1);
        }
      }
      lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x58);
      plVar29 = (longlong *)(lVar15 + 0x5c8);
      uVar18 = *(uint *)(lVar15 + 0x5d0);
      local_1f0 = (uint *)(ulonglong)uVar18;
      uVar28 = *(uint *)(lVar15 + 0x5fc);
      if (uVar18 != uVar28) {
        lVar9 = lVar15 + 0x600;
        if (*(longlong *)(lVar15 + 0x608) != 0) {
          lVar9 = *(longlong *)(lVar15 + 0x608);
        }
        iVar5 = *(int *)(lVar9 + (ulonglong)(*(int *)(lVar15 + 0x610) - 1U & uVar22) * 4);
        if (iVar5 != -1) {
          do {
            lVar9 = *plVar29 + (longlong)iVar5 * 0x60;
            if (*(longlong *)(*plVar29 + (longlong)iVar5 * 0x60) == lVar26) {
              if (lVar9 != 0) goto LAB_1434b3afa;
              break;
            }
            iVar5 = *(int *)(lVar9 + 0x58);
          } while (iVar5 != -1);
        }
      }
      local_1c8 = plVar29;
      if (uVar28 == 0) {
        *(uint *)(lVar15 + 0x5d0) = uVar18 + 1;
        if (*(uint *)(lVar15 + 0x5d4) == uVar18) {
          FUN_14488f93c(plVar29,local_1f0);
        }
        uVar18 = *(uint *)(lVar15 + 0x5f0);
        uVar23 = (ulonglong)uVar18;
        if (uVar18 == 0) {
          iVar21 = -1;
        }
        else {
          iVar21 = uVar18 + 0x1e;
          if (-1 < (int)(uVar18 - 1)) {
            iVar21 = uVar18 - 1;
          }
          iVar21 = iVar21 >> 5;
        }
        lVar26 = lVar15 + 0x5d8;
        iVar5 = uVar18 + 1;
        uVar28 = uVar18 + 0x1f;
        if (-1 < (int)uVar18) {
          uVar28 = uVar18;
        }
        iVar32 = (int)uVar28 >> 5;
        if (iVar32 == iVar21) {
          *(int *)(lVar15 + 0x5f0) = iVar5;
        }
        else {
          local_1cc = iVar32;
          if (*(int *)(lVar15 + 0x5f4) <= (int)uVar18) {
            local_1d8 = uVar23;
            local_1b8 = lVar26;
            if (uVar18 + 0x20 < 0xa0) {
              iVar21 = 0x80;
            }
            else {
              uVar18 = uVar18 + 0x20 >> 5;
              if (*(int *)(lVar15 + 0x5f4) + 0x1fU < 0xa0) {
                uVar28 = 4;
                if (4 < uVar18) {
                  uVar28 = uVar18;
                }
              }
              else {
                uVar28 = uVar18 + (uVar18 * 3 >> 3) + 0x10;
              }
              uVar10 = (ulonglong)(uVar28 * 4);
              if (DAT_14c872d28 != (longlong *)0x0) {
                if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                  uVar6 = (uint)(uVar10 + 0xf);
                  if (uVar28 < 0x1ffd) {
                    uVar10 = (ulonglong)
                             (ushort)(&DAT_14c841d90)
                                     [0x32 - (byte)(&DAT_14c841e00)[uVar10 + 0xf >> 4]];
                  }
                  else {
                    uVar16 = (ulonglong)(uVar6 & 0xfffffff0);
                    if (uVar16 < 0x7ff1) {
                      bVar11 = (&DAT_14c841e00)[uVar6 >> 4];
                      uVar19 = 0x32;
                      if (0x32 < bVar11) {
                        uVar19 = (ulonglong)bVar11;
                      }
                      uVar25 = 0x32 - (ulonglong)bVar11;
                      do {
                        uVar10 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar25 & 0xffffffff];
                        if (((&DAT_14c841d90)[uVar25 & 0xffffffff] & 0xf) == 0) goto LAB_1434b3da8;
                        lVar26 = uVar19 + 1 + uVar25;
                        uVar25 = uVar25 - 1;
                      } while (lVar26 != 0x33);
                    }
                    uVar10 = (ulonglong)DAT_14c841df8;
                    if (DAT_14c841df8 < 0x11) {
                      uVar10 = 0x10;
                    }
                    uVar10 = -uVar10 & (uVar16 + uVar10) - 1;
                  }
                }
                else {
                  uVar10 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar10,0);
                  uVar23 = (ulonglong)*(uint *)(lVar15 + 0x5f0);
                }
              }
LAB_1434b3da8:
              iVar5 = (int)(uVar10 >> 2);
              iVar21 = iVar5 << 5;
              if (iVar5 < (int)uVar18) {
                iVar21 = -0x20;
              }
            }
            lVar26 = local_1b8;
            *(int *)(lVar15 + 0x5f4) = iVar21;
            FUN_1446efbd8(local_1b8,uVar23);
            iVar5 = *(int *)(lVar15 + 0x5f0) + 1;
            uVar23 = local_1d8;
          }
          iVar21 = iVar5 + 0x1f;
          if (-1 < iVar5) {
            iVar21 = iVar5;
          }
          *(int *)(lVar15 + 0x5f0) = iVar5;
          iVar32 = local_1cc;
          if (iVar5 % 0x20 != 0) {
            lVar9 = *(longlong *)(lVar15 + 0x5e8);
            if (*(longlong *)(lVar15 + 0x5e8) == 0) {
              lVar9 = lVar26;
            }
            bVar11 = -(char)(iVar5 % 0x20);
            *(uint *)(lVar9 + (longlong)(iVar21 >> 5) * 4) =
                 (uint)(*(int *)(lVar9 + (longlong)(iVar21 >> 5) * 4) << (bVar11 & 0x1f)) >>
                 (bVar11 & 0x1f);
          }
        }
        lVar9 = (longlong)(int)local_1f0;
        if (*(longlong *)(lVar15 + 0x5e8) != 0) {
          lVar26 = *(longlong *)(lVar15 + 0x5e8);
        }
        bVar11 = (byte)uVar23 & 0x1f;
        puVar7 = (uint *)(lVar26 + (longlong)iVar32 * 4);
        *puVar7 = *puVar7 & (-2 << bVar11 | 0xfffffffeU >> 0x20 - bVar11);
      }
      else {
        local_1f0 = (uint *)(ulonglong)*(uint *)(lVar15 + 0x5f8);
        lVar9 = (longlong)(int)*(uint *)(lVar15 + 0x5f8);
        iVar21 = *(int *)(*(longlong *)(lVar15 + 0x5c8) + 4 + lVar9 * 0x60);
        *(int *)(lVar15 + 0x5f8) = iVar21;
        *(uint *)(lVar15 + 0x5fc) = uVar28 - 1;
        if (uVar28 - 1 != 0) {
          *(undefined4 *)(*(longlong *)(lVar15 + 0x5c8) + (longlong)iVar21 * 0x60) = 0xffffffff;
        }
      }
      iVar21 = (int)local_1f0;
      lVar26 = lVar15 + 0x5d8;
      if (*(longlong *)(lVar15 + 0x5e8) != 0) {
        lVar26 = *(longlong *)(lVar15 + 0x5e8);
      }
      iVar5 = iVar21 + 0x1f;
      if (-1 < iVar21) {
        iVar5 = iVar21;
      }
      puVar7 = (uint *)(lVar26 + (longlong)(iVar5 >> 5) * 4);
      *puVar7 = *puVar7 | 1 << ((byte)local_1f0 & 0x1f);
      lVar26 = *(longlong *)(lVar15 + 0x5c8);
      local_158[4] = 0;
      uStack_130 = 0;
      local_158[0] = 0;
      local_158[1] = 0;
      uStack_12c = 0x80;
      uStack_128 = 0xffffffff;
      uStack_124 = 0;
      local_118 = (undefined ***)0x0;
      uStack_110 = uStack_110 & 0xffffffff00000000;
      puVar3 = (undefined8 *)(lVar9 * 0x60 + lVar26);
      *puVar3 = *(undefined8 *)(lVar27 + (longlong)(int)uVar12 * 0x10);
      FUN_1407b285a(puVar3 + 1,local_158);
      uStack_110 = uStack_110 & 0xffffffff00000000;
      if (local_118 != (undefined ***)0x0) {
        FUN_1400020a8();
      }
      plVar29 = (longlong *)(lVar26 + lVar9 * 0x60);
      FUN_1404427ee(local_158);
      param_1 = local_1e0;
      *(undefined4 *)(plVar29 + 0xb) = 0xffffffff;
      uVar12 = *(int *)(lVar15 + 0x5d0) - *(int *)(lVar15 + 0x5fc);
      iVar5 = (int)local_1f0;
      if ((uVar12 != 0) && (uVar12 != 1)) {
        lVar26 = lVar15 + 0x600;
        if (*(longlong *)(lVar15 + 0x608) != 0) {
          lVar26 = *(longlong *)(lVar15 + 0x608);
        }
        iVar21 = *(int *)(lVar26 + (ulonglong)(*(int *)(lVar15 + 0x610) - 1U & uVar22) * 4);
        if (iVar21 != -1) {
          do {
            _Dst = (void *)(*local_1c8 + (longlong)iVar21 * 0x60);
            if (*(longlong *)(*local_1c8 + (longlong)iVar21 * 0x60) == *plVar29) {
              *(undefined4 *)((longlong)_Dst + 0x50) = 0;
              if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
                FUN_1400020a8();
              }
              FUN_1404427ee((longlong)_Dst + 8);
              memmove(_Dst,plVar29,0x58);
              plVar29 = local_1c8;
              iVar5 = (int)local_1f0;
              FUN_1404428a2(local_1c8,(ulonglong)local_1f0 & 0xffffffff);
              param_1 = local_1e0;
              iVar21 = (int)local_1e8;
              goto LAB_1434b3ac2;
            }
            iVar21 = *(int *)((longlong)_Dst + 0x58);
          } while (iVar21 != -1);
        }
      }
      if (uVar12 < 4) {
        iVar21 = 1;
      }
      else {
        uVar23 = (ulonglong)(uVar12 & 0xfffffffe) + 0xf;
        lVar26 = 0x3f;
        if (uVar23 != 0) {
          for (; uVar23 >> lVar26 == 0; lVar26 = lVar26 + -1) {
          }
        }
        iVar21 = 1 << ((byte)lVar26 & 0x1f);
      }
      if (((int)uVar12 < 1) || (iVar21 <= *(int *)(lVar15 + 0x610))) {
        uVar22 = *(int *)(lVar15 + 0x610) - 1U & uVar22;
        *(uint *)((longlong)plVar29 + 0x5c) = uVar22;
        lVar26 = *(longlong *)(lVar15 + 0x608);
        if (*(longlong *)(lVar15 + 0x608) == 0) {
          lVar26 = lVar15 + 0x600;
        }
        *(undefined4 *)(plVar29 + 0xb) =
             *(undefined4 *)
              (lVar26 + ((longlong)*(int *)(lVar15 + 0x610) - 1U & (longlong)(int)uVar22) * 4);
        lVar26 = *(longlong *)(lVar15 + 0x608);
        if (*(longlong *)(lVar15 + 0x608) == 0) {
          lVar26 = lVar15 + 0x600;
        }
        *(int *)(lVar26 + ((longlong)*(int *)(lVar15 + 0x610) - 1U & (longlong)(int)uVar22) * 4) =
             iVar5;
      }
      else {
        *(int *)(lVar15 + 0x610) = iVar21;
        FUN_1417c4312(local_1c8,iVar21,local_158);
        iVar5 = (int)local_1f0;
      }
      plVar29 = local_1c8;
      iVar21 = (int)local_1e8;
LAB_1434b3ac2:
      lVar9 = (longlong)iVar5 * 0x60 + *plVar29;
LAB_1434b3afa:
      local_158[0] = param_1;
      FUN_14066d0c6(lVar9 + 8,&local_1a8,local_158);
      uVar23 = local_1c0;
      uVar18 = local_90;
LAB_1434b3b18:
      uVar31 = uVar31 & ~(uint)uVar30;
      puVar7 = local_98;
      if (local_98 == (uint *)0x0) {
        puVar7 = local_a8;
      }
      iVar5 = (int)uVar24;
      lVar26 = (longlong)iVar5;
      uVar12 = puVar7[lVar26] & uVar31;
      if (uVar12 == 0) {
        iVar32 = uVar18 + 0x1e;
        if (-1 < (int)(uVar18 - 1)) {
          iVar32 = uVar18 - 1;
        }
        iVar32 = iVar32 >> 5;
        iVar21 = iVar21 + 0x20;
        iVar13 = iVar32;
        if (iVar32 < iVar5) {
          iVar13 = iVar5;
        }
        if (iVar5 < iVar32) {
          lVar27 = 0;
          do {
            uVar12 = puVar7[lVar26 + lVar27 + 1];
            if (uVar12 != 0) {
              uVar24 = (ulonglong)(iVar5 + (int)lVar27 + 1);
              uVar31 = 0xffffffff;
              goto LAB_1434b3b94;
            }
            iVar21 = iVar21 + 0x20;
            lVar27 = lVar27 + 1;
          } while (iVar13 - lVar26 != lVar27);
          uVar31 = 0xffffffff;
          iVar5 = iVar13;
        }
        uVar24 = (ulonglong)(iVar5 + 1);
        param_1 = local_1e0;
        uVar23 = local_1c0;
        uVar12 = uVar18;
      }
      else {
LAB_1434b3b94:
        uVar30 = (ulonglong)(-uVar12 & uVar12);
        uVar10 = uVar30 * 2 + 1;
        lVar26 = 0x3f;
        if (uVar10 != 0) {
          for (; uVar10 >> lVar26 == 0; lVar26 = lVar26 + -1) {
          }
        }
        uVar12 = (iVar21 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
        if ((int)uVar18 <= (int)uVar12) {
          uVar12 = uVar18;
        }
      }
    } while (uVar12 != (uint)uVar23);
  }
LAB_1434b36aa:
  local_1e8 = (longlong *)(param_1 + 0x88);
  puVar7 = (uint *)(param_1 + 0x98);
  iVar21 = *(int *)(param_1 + 0xb0);
  if (iVar21 == 0) {
    uVar30 = 1;
    uVar23 = 0;
    iVar32 = 0;
    iVar5 = 0;
  }
  else {
    puVar8 = *(uint **)(param_1 + 0xa8);
    if (*(uint **)(param_1 + 0xa8) == (uint *)0x0) {
      puVar8 = puVar7;
    }
    uVar12 = *puVar8;
    if (uVar12 == 0) {
      iVar5 = iVar21 + 0x1e;
      if (-1 < iVar21 + -1) {
        iVar5 = iVar21 + -1;
      }
      uVar23 = 0;
      uVar30 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar30 = uVar23;
      }
      iVar32 = 0;
      do {
        if (uVar30 == uVar23) goto LAB_1434b3f55;
        iVar32 = iVar32 + 0x20;
        uVar12 = puVar8[uVar23 + 1];
        uVar23 = uVar23 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar23 = 0;
      iVar32 = 0;
    }
    uVar30 = (ulonglong)(-uVar12 & uVar12);
    uVar24 = uVar30 * 2 + 1;
    lVar26 = 0x3f;
    if (uVar24 != 0) {
      for (; uVar24 >> lVar26 == 0; lVar26 = lVar26 + -1) {
      }
    }
    iVar5 = (iVar32 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
    if (iVar21 <= iVar5) {
      iVar5 = iVar21;
    }
  }
  if (iVar5 != iVar21) {
    uVar12 = 0xffffffff;
    local_1f0 = puVar7;
    do {
      lVar26 = local_1e0;
      plVar29 = (longlong *)((longlong)iVar5 * 0x10 + *local_1e8);
      if ((int)uStack_b0 != local_84) {
        lVar27 = *plVar29;
        puVar20 = local_78;
        if (local_78 == (undefined1 *)0x0) {
          puVar20 = local_80;
        }
        for (iVar5 = *(int *)(puVar20 +
                             (ulonglong)
                             (local_70 - 1U & (int)lVar27 + (int)((ulonglong)lVar27 >> 0x20) * 0x17)
                             * 4); iVar5 != -1;
            iVar5 = *(int *)((longlong)iVar5 * 0x10 + local_b8 + 8)) {
          if (*(longlong *)(local_b8 + (longlong)iVar5 * 0x10) == lVar27) goto LAB_1434b4135;
        }
      }
      lVar27 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x58);
      if (*(int *)(lVar27 + 0x5d0) != *(int *)(lVar27 + 0x5fc)) {
        lVar15 = *plVar29;
        lVar9 = lVar27 + 0x600;
        if (*(longlong *)(lVar27 + 0x608) != 0) {
          lVar9 = *(longlong *)(lVar27 + 0x608);
        }
        iVar5 = *(int *)(lVar9 + (ulonglong)
                                 (*(int *)(lVar27 + 0x610) - 1U &
                                 (int)lVar15 + (int)((ulonglong)lVar15 >> 0x20) * 0x17) * 4);
        if (iVar5 != -1) {
          do {
            lVar9 = *(longlong *)(lVar27 + 0x5c8) + (longlong)iVar5 * 0x60;
            if (*(longlong *)(*(longlong *)(lVar27 + 0x5c8) + (longlong)iVar5 * 0x60) == lVar15)
            goto LAB_1434b40fc;
            iVar5 = *(int *)(lVar9 + 0x58);
          } while (iVar5 != -1);
        }
      }
      lVar9 = 0;
LAB_1434b40fc:
      FUN_140441cb0(lVar9 + 8,local_1e0);
      puVar7 = local_1f0;
      param_1 = lVar26;
      if (*(int *)(lVar9 + 0x10) == *(int *)(lVar9 + 0x3c)) {
        FUN_14044270c(*(longlong *)(*(longlong *)(lVar26 + 0x50) + 0x58) + 0x5c8,plVar29);
      }
LAB_1434b4135:
      uVar12 = uVar12 & ~(uint)uVar30;
      puVar8 = *(uint **)(param_1 + 0xa8);
      if (*(uint **)(param_1 + 0xa8) == (uint *)0x0) {
        puVar8 = puVar7;
      }
      iVar13 = *(int *)(param_1 + 0xb0);
      iVar5 = (int)uVar23;
      lVar26 = (longlong)iVar5;
      uVar18 = puVar8[lVar26] & uVar12;
      if (uVar18 == 0) {
        iVar14 = iVar13 + 0x1e;
        if (-1 < iVar13 + -1) {
          iVar14 = iVar13 + -1;
        }
        iVar14 = iVar14 >> 5;
        iVar32 = iVar32 + 0x20;
        iVar17 = iVar14;
        if (iVar14 < iVar5) {
          iVar17 = iVar5;
        }
        if (iVar5 < iVar14) {
          lVar27 = 0;
          do {
            uVar18 = puVar8[lVar26 + lVar27 + 1];
            if (uVar18 != 0) {
              uVar23 = (ulonglong)(iVar5 + (int)lVar27 + 1);
              uVar12 = 0xffffffff;
              goto LAB_1434b41b3;
            }
            iVar32 = iVar32 + 0x20;
            lVar27 = lVar27 + 1;
          } while (iVar17 - lVar26 != lVar27);
          uVar12 = 0xffffffff;
          iVar5 = iVar17;
        }
        uVar23 = (ulonglong)(iVar5 + 1);
        param_1 = local_1e0;
        puVar7 = local_1f0;
        iVar5 = iVar13;
      }
      else {
LAB_1434b41b3:
        uVar30 = (ulonglong)(-uVar18 & uVar18);
        uVar24 = uVar30 * 2 + 1;
        lVar26 = 0x3f;
        if (uVar24 != 0) {
          for (; uVar24 >> lVar26 == 0; lVar26 = lVar26 + -1) {
          }
        }
        iVar5 = (iVar32 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
        if (iVar13 <= iVar5) {
          iVar5 = iVar13;
        }
      }
    } while (iVar5 != iVar21);
  }
LAB_1434b3f55:
  piVar2 = (int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x58) + 0x618);
  *piVar2 = *piVar2 - *(int *)(param_1 + 8);
  *(int *)(param_1 + 8) = local_15c;
  piVar2 = (int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x58) + 0x618);
  *piVar2 = *piVar2 + local_15c;
  FUN_14173352c(local_1e8,&local_b8);
  local_70 = 0;
  if (local_78 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_14041fb7c(&local_b8);
LAB_1434b3fb5:
  if ((local_60 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434b4272 FUN_1434b4272 body=3046 status=ok
// SIG undefined FUN_1434b4272(void)

undefined8 FUN_1434b4272(longlong param_1,longlong *param_2,uint param_3,longlong *param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined **ppuVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  longlong lVar16;
  ulonglong uVar17;
  int iVar18;
  longlong lVar19;
  byte bVar20;
  undefined ***pppuVar21;
  longlong *unaff_RDI;
  uint uVar22;
  ulonglong uVar23;
  longlong *plVar24;
  ulonglong uVar25;
  undefined *puVar26;
  bool bVar27;
  undefined1 auStack_238 [32];
  undefined ***local_218;
  undefined ***local_210;
  longlong *local_208;
  undefined ***local_200;
  undefined1 local_1e9;
  longlong local_1e8;
  ulonglong local_1e0;
  uint local_1d8;
  uint local_1d4;
  undefined8 local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  longlong local_1b8;
  longlong *local_1b0;
  longlong local_1a8;
  longlong *local_1a0;
  undefined ***local_198;
  undefined ***local_190;
  longlong local_188;
  undefined *local_180;
  longlong local_178;
  ulonglong local_170;
  ulonglong local_168;
  longlong local_160;
  undefined4 local_158;
  uint local_14c;
  undefined **local_148;
  undefined **ppuStack_140;
  undefined **local_130;
  longlong *local_128;
  longlong *local_d8;
  longlong local_b8;
  longlong local_a0;
  longlong local_70;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_238;
  lVar19 = *(longlong *)(param_1 + 0x48);
  local_14c = param_3;
  if (lVar19 == 0) {
    if (*(int *)(param_1 + 0xdc) != 0) {
      uVar8 = *(uint *)(param_1 + 0xd8);
      uVar13 = 0;
      if (((int)uVar8 < 0) || (DAT_14c9647dc <= (int)uVar8)) goto LAB_1434b4633;
      plVar9 = (longlong *)
               ((ulonglong)((uVar8 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8));
      if ((plVar9 != (longlong *)0x0) &&
         ((((int)plVar9[2] == *(int *)(param_1 + 0xdc) &&
           ((*(uint *)(plVar9 + 1) & 0x10200000) == 0)) && (lVar19 = *plVar9, lVar19 != 0))))
      goto LAB_1434b4325;
    }
    uVar13 = 0;
    goto LAB_1434b4633;
  }
LAB_1434b4325:
  param_4[0x18] = param_2[0x18];
  cVar6 = *(char *)(*(longlong *)(param_1 + 0x50) + 0x16c0);
  if (cVar6 == '\x02') {
    ppuVar12 = *(undefined ***)(param_1 + 0x38);
    if (ppuVar12 == (undefined **)0x0) {
      pppuVar21 = (undefined ***)(param_1 + 0x38);
      lVar10 = *(longlong *)(param_1 + 0x48);
      if (lVar10 == 0) {
        if (*(int *)(param_1 + 0xdc) == 0) {
LAB_1434b4e2a:
          lVar10 = 0;
        }
        else {
          uVar8 = *(uint *)(param_1 + 0xd8);
          lVar10 = 0;
          if ((-1 < (int)uVar8) && ((int)uVar8 < DAT_14c9647dc)) {
            plVar9 = (longlong *)
                     ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8));
            if ((plVar9 == (longlong *)0x0) ||
               (((int)plVar9[2] != *(int *)(param_1 + 0xdc) ||
                ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)))) goto LAB_1434b4e2a;
            lVar10 = *plVar9;
          }
        }
      }
      FUN_1417e39fa(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x58),&local_130,lVar10);
      local_218 = (undefined ***)CONCAT44(local_218._4_4_,1);
      FUN_140a0283a(*(undefined8 *)(param_1 + 0x20),&local_148,lVar19,&local_130);
      if (pppuVar21 == &local_148) {
LAB_1434b442c:
        ppuVar12 = local_148;
        if (local_148 != (undefined **)0x0) {
          FUN_140441e36(local_148);
          FUN_1400020a8(ppuVar12);
        }
      }
      else {
        ppuVar12 = *pppuVar21;
        *pppuVar21 = local_148;
        local_148 = (undefined **)0x0;
        if (ppuVar12 != (undefined **)0x0) {
          FUN_140441e36(ppuVar12);
          FUN_1400020a8(ppuVar12);
          goto LAB_1434b442c;
        }
      }
      if (local_128 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_128 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*local_128)(local_128);
          LOCK();
          piVar1 = (int *)((longlong)local_128 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_128 + 0x10))(local_128);
          }
        }
      }
      ppuVar12 = *pppuVar21;
      unaff_RDI = local_128;
      if (ppuVar12 == (undefined **)0x0) goto LAB_1434b447b;
    }
  }
  else {
LAB_1434b447b:
    ppuVar12 = *(undefined ***)(param_1 + 0x30);
  }
  puVar26 = ppuVar12[1];
  local_1c0 = *(longlong *)(param_1 + 0x10);
  if ((((*(ulonglong *)(local_1c0 + 0x880) < 0xffffffff00000000) &&
       (lVar10 = FUN_144b07724(), lVar10 != 0)) &&
      (plVar9 = *(longlong **)(*(longlong *)(param_1 + 0x20) + 0x58), plVar9 != (longlong *)0x0)) &&
     ((ulonglong)*(ushort *)(plVar9 + 1) != 0)) {
    lVar16 = *(longlong *)(lVar10 + 0x10);
    if (*(longlong *)(lVar10 + 0x10) == 0) {
      lVar16 = lVar10;
    }
    lVar10 = 0;
    do {
      bVar27 = (*(uint *)(lVar16 + (ulonglong)(*(ushort *)(*plVar9 + lVar10) >> 5) * 4) >>
                (*(ushort *)(*plVar9 + lVar10) & 0x1f) & 1) != 0;
      unaff_RDI = (longlong *)CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar27);
      if (bVar27) break;
      bVar27 = (ulonglong)*(ushort *)(plVar9 + 1) * 0x18 + -0x18 != lVar10;
      lVar10 = lVar10 + 0x18;
    } while (bVar27);
  }
  else {
    unaff_RDI = (longlong *)0x0;
  }
  local_218 = (undefined ***)
              CONCAT44(local_218._4_4_,
                       *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x58) + 0x520))
  ;
  local_208 = (longlong *)
              CONCAT71(local_208._1_7_,
                       (byte)((*(uint *)(*(longlong *)(param_1 + 0x58) + 0x90) & 2) >> 1) |
                       cVar6 == '\x02');
  local_210 = (undefined ***)&local_14c;
  iVar7 = FUN_14368c77c(*(undefined8 *)(param_1 + 0x20),puVar26,*(undefined8 *)(param_1 + 0x10),
                        lVar19);
  if (iVar7 == 3) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x50) + 0x1c9e) = 1;
LAB_1434b4625:
    uVar13 = 0;
  }
  else {
    local_210 = *(undefined ****)(param_1 + 0x58);
    local_218 = *(undefined ****)(param_1 + 0x40);
    local_208 = param_4;
    local_200 = (undefined ***)&local_14c;
    uVar8 = FUN_14368cf54(*(undefined8 *)(param_1 + 0x20),puVar26,*(longlong *)(param_1 + 0x10) + 8,
                          lVar19);
    uVar25 = (ulonglong)uVar8;
    lVar10 = param_4[0x14];
    lVar16 = *(longlong *)(param_1 + 0x20);
    if ((*(longlong *)(lVar16 + 0x58) == 0) ||
       (local_168 = (ulonglong)*(ushort *)(*(longlong *)(lVar16 + 0x58) + 8), local_168 == 0)) {
      bVar20 = 0;
      lVar16 = lVar10;
    }
    else {
      local_1e0 = (ulonglong)local_14c;
      local_1e8 = *(longlong *)(param_1 + 0x48);
      if (local_1e8 == 0) {
        if (*(int *)(param_1 + 0xdc) == 0) {
LAB_1434b4e32:
          local_1e8 = 0;
        }
        else {
          uVar22 = *(uint *)(param_1 + 0xd8);
          local_1e8 = 0;
          if ((-1 < (int)uVar22) && ((int)uVar22 < DAT_14c9647dc)) {
            plVar9 = (longlong *)
                     ((ulonglong)((uVar22 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar22 >> 0x10) * 8));
            if ((plVar9 == (longlong *)0x0) ||
               (((int)plVar9[2] != *(int *)(param_1 + 0xdc) ||
                ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)))) goto LAB_1434b4e32;
            local_1e8 = *plVar9;
          }
        }
      }
      lVar3 = *(longlong *)(param_1 + 0x50);
      uVar11 = 0x490;
      if (*(char *)(lVar3 + 0x16c0) != '\0') {
        uVar11 = (ulonglong)(*(char *)(lVar3 + 0x16c0) != '\x01') << 4 | 0x4a0;
      }
      local_1c8 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 8);
      local_210 = (undefined ***)(uVar11 + local_1c8);
      local_218 = (undefined ***)
                  CONCAT44(local_218._4_4_,*(undefined4 *)(*(longlong *)(lVar3 + 0x58) + 0x520));
      local_1b8 = lVar10;
      local_190 = local_210;
      FUN_144a77ef4(lVar16,local_1e8,lVar3,*(undefined8 *)(param_1 + 0x10));
      uVar22 = (uint)local_1e0;
      uVar11 = (ulonglong)
               ((uint)((uVar22 & 0x14) == 4) << 0xb |
               (uVar22 & 2) + ((uint)((local_1e0 & 1) == 0) | uVar22 & 4) * 4) + 5 |
               (ulonglong)((uVar22 & 4) << 3 ^ 0x20);
      if ((local_1e0 & 0xc) == 0) {
LAB_1434b4e08:
        uVar11 = uVar11 & 0xffffffffffffefff;
      }
      else {
        if ((local_1e0 & 0x10) != 0) {
          uVar11 = uVar11 | 0x40;
          goto LAB_1434b4e08;
        }
        uVar11 = uVar11 | 0x1040;
      }
      uVar23 = 0x2000;
      if ((local_1e0 & 0x10) != 0) {
        uVar23 = 0x400;
      }
      local_170 = ((uint)((local_1e0 & 3) != 0) << 7 | (uint)((local_1e0 & 0x11) != 0) << 9) |
                  uVar23 | uVar11 | 0x4100;
      local_1b0 = param_2;
      local_198 = (undefined ***)FUN_1434b1492(*(undefined8 *)(param_1 + 0x58),local_1e8);
      FUN_144a679e2(&local_130,*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x68),0x400);
      local_1d4 = *(uint *)(*(longlong *)(param_1 + 0x50) + 0xa4);
      local_70 = param_4[0x18];
      local_1d0 = 0;
      uVar11 = 0;
      local_1d8 = (uint)unaff_RDI;
      local_1e9 = (undefined1)uVar8;
      local_1a8 = lVar19;
      local_1a0 = param_4;
      local_188 = lVar16;
      local_180 = puVar26;
      do {
        uVar17 = (ulonglong)
                 ((uint)*(ushort *)(**(longlong **)(lVar16 + 0x58) + (uVar11 & 0xffff) * 0x18) *
                 0x30);
        uVar8 = *(uint *)(*(longlong *)(lVar16 + 0x28) + 0x20 + uVar17);
        uVar23 = (ulonglong)uVar8;
        lVar10 = *(longlong *)(*(longlong *)(lVar16 + 0x28) + uVar17);
        if (uVar8 == 0xe) {
          uVar23 = 0xe;
          if (*(longlong *)(local_1c8 + 0x20) != 0) {
            uVar23 = FUN_146efd72c(*(longlong *)(local_1c8 + 0x20),*(undefined2 *)(lVar10 + 0x40));
          }
        }
        if ((local_170 >> (uVar23 & 0x3f) & 1) == 0) {
          local_1d0 = CONCAT71((int7)(uVar23 >> 8),1);
        }
        else {
          local_148 = (undefined **)0x0;
          ppuStack_140 = (undefined **)0x0;
          FUN_14493765a(&local_130);
          pppuVar21 = (undefined ***)(*local_190 + uVar11 * 2);
          cVar6 = *(char *)(*(longlong *)(param_1 + 0x50) + 0x16c0);
          local_178 = lVar10;
          if (cVar6 == '\0') {
            if ((local_1d4 & 2) != 0) goto LAB_1434b4afe;
            plVar24 = (longlong *)(uVar11 * 0x28 + *(longlong *)(local_1c8 + 0x430));
            iVar7 = *(int *)(*(longlong *)(param_1 + 0x50) + 0x13e0);
            iVar18 = 0;
            plVar9 = plVar24;
            while (plVar4 = (longlong *)*plVar9, plVar4 != (longlong *)0x0) {
              plVar9 = plVar4;
              if (*(int *)((longlong)plVar4 + 0x1c) <= iVar7) {
                *plVar24 = *plVar4;
                iVar18 = (int)plVar4[4];
                plVar9 = (longlong *)plVar4[2];
                if (plVar9 != (longlong *)0x0) {
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
                }
                FUN_1400020a8(plVar4);
                plVar9 = plVar24;
              }
            }
            if ((iVar18 != 0) && (*pppuVar21 != (undefined **)0x0)) {
              *(int *)(*pppuVar21 + 3) = iVar18;
            }
            local_208 = (longlong *)CONCAT44(local_208._4_4_,(int)local_1e0);
            local_218 = &local_148;
            local_210 = pppuVar21;
            cVar6 = FUN_1434b25a2(param_1,local_1e8,uVar11 & 0xffffffff,&local_130);
            param_4 = local_1a0;
            lVar19 = local_1a8;
            uVar25 = CONCAT71((int7)((ulonglong)plVar24 >> 8),local_1e9);
            if (cVar6 == '\0') goto LAB_1434b4bdd;
            puVar15 = (undefined8 *)FUN_14001cc68(0x28,0x10);
            *puVar15 = 0;
            puVar15[1] = 0;
            puVar15[2] = 0;
            puVar15[3] = 0xffffffffffffffff;
            *(undefined4 *)(puVar15 + 4) = 0;
            *plVar9 = (longlong)puVar15;
            ppuVar12 = *pppuVar21;
            ppuVar5 = pppuVar21[1];
            if (ppuVar5 != (undefined **)0x0) {
              LOCK();
              *(int *)(ppuVar5 + 1) = *(int *)(ppuVar5 + 1) + 1;
              UNLOCK();
            }
            plVar24 = (longlong *)puVar15[2];
            puVar15[1] = ppuVar12;
            puVar15[2] = ppuVar5;
            if (plVar24 != (longlong *)0x0) {
              LOCK();
              plVar4 = plVar24 + 1;
              *(int *)plVar4 = (int)*plVar4 + -1;
              UNLOCK();
              if ((int)*plVar4 == 0) {
                (**(code **)*plVar24)(plVar24);
                LOCK();
                piVar1 = (int *)((longlong)plVar24 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar24 + 0x10))(plVar24);
                }
              }
            }
            if (local_148 == (undefined **)0x0) {
              ppuVar12 = (undefined **)0x0;
            }
            else {
              *(undefined4 *)(*plVar9 + 0x20) = *(undefined4 *)((longlong)local_148 + 0x1c);
              ppuVar12 = local_148;
            }
LAB_1434b4b33:
            if (ppuStack_140 != (undefined **)0x0) {
              LOCK();
              *(int *)(ppuStack_140 + 1) = *(int *)(ppuStack_140 + 1) + 1;
              UNLOCK();
            }
            ppuVar5 = pppuVar21[1];
            *pppuVar21 = ppuVar12;
            pppuVar21[1] = ppuStack_140;
            if (ppuVar5 != (undefined **)0x0) {
              LOCK();
              ppuVar12 = ppuVar5 + 1;
              *(int *)ppuVar12 = *(int *)ppuVar12 + -1;
              UNLOCK();
              if (*(int *)ppuVar12 == 0) {
                (**(code **)*ppuVar5)(ppuVar5);
                LOCK();
                piVar1 = (int *)((longlong)ppuVar5 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*ppuVar5 + 0x10))(ppuVar5);
                }
              }
            }
LAB_1434b4b71:
            uVar13 = FUN_140575224(*(undefined8 *)
                                    (*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x58) + 0x1c8),
                                   *(undefined8 *)(param_1 + 0x40));
            local_68 = local_178;
            uVar14 = FUN_1434b57a0(uVar13,&local_68);
            local_210 = &local_130;
            local_218 = local_198;
            local_208 = (longlong *)((ulonglong)local_208 & 0xffffffffffffff00);
            FUN_1434b1370(*(undefined8 *)(param_1 + 0x58),param_4,uVar13,uVar14);
          }
          else if (cVar6 == '\x02') {
LAB_1434b4afe:
            local_208 = (longlong *)CONCAT44(local_208._4_4_,(int)local_1e0);
            local_218 = &local_148;
            local_210 = pppuVar21;
            cVar6 = FUN_1434b25a2(param_1,local_1e8,uVar11 & 0xffffffff,&local_130);
            ppuVar12 = local_148;
            if (cVar6 != '\0') goto LAB_1434b4b33;
          }
          else {
            local_208 = (longlong *)CONCAT44(local_208._4_4_,(int)local_1e0);
            local_218 = &local_148;
            local_210 = pppuVar21;
            cVar6 = FUN_1434b25a2(param_1,local_1e8,uVar11 & 0xffffffff,&local_130);
            if (cVar6 != '\0') goto LAB_1434b4b71;
          }
LAB_1434b4bdd:
          ppuVar12 = ppuStack_140;
          lVar16 = local_188;
          puVar26 = local_180;
          if (ppuStack_140 != (undefined **)0x0) {
            LOCK();
            ppuVar5 = ppuStack_140 + 1;
            *(int *)ppuVar5 = *(int *)ppuVar5 + -1;
            UNLOCK();
            if (*(int *)ppuVar5 == 0) {
              (**(code **)*ppuStack_140)(ppuStack_140);
              LOCK();
              piVar1 = (int *)((longlong)ppuVar12 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              lVar16 = local_188;
              puVar26 = local_180;
              if (*piVar1 == 0) {
                (**(code **)(*ppuVar12 + 0x10))(ppuVar12);
                lVar16 = local_188;
                puVar26 = local_180;
              }
            }
          }
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 != local_168);
      local_130 = &PTR_FUN_149e37560;
      if (local_a0 != 0) {
        FUN_1400020a8();
      }
      param_2 = local_1b0;
      local_130 = &PTR__purecall_149e35f70;
      bVar20 = (byte)local_1d0;
      if (local_d8 != (longlong *)0x0) {
        if (*local_d8 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(local_d8);
      }
      if (local_b8 != 0) {
        if (*(longlong *)(local_b8 + 0x40) != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(local_b8);
      }
      lVar10 = param_4[0x14];
      unaff_RDI = (longlong *)(ulonglong)local_1d8;
      lVar16 = local_1b8;
    }
    if ((int)lVar16 == lVar10) {
      if (((byte)unaff_RDI & bVar20) == 1) {
        iVar7 = *(int *)(local_1c0 + 0x81c);
LAB_1434b45a4:
        iVar7 = iVar7 + 1;
        *(int *)(local_1c0 + 0x81c) = iVar7;
        goto LAB_1434b45af;
      }
    }
    else {
      iVar7 = *(int *)(local_1c0 + 0x81c);
      if ((byte)unaff_RDI != 0) goto LAB_1434b45a4;
LAB_1434b45af:
      *(int *)(puVar26 + 0x18) = iVar7;
    }
    if (*(char *)(*(longlong *)(param_1 + 0x50) + 0x16c0) == '\0') {
      *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffffe | (uint)(param_4[0x14] == 0);
      lVar10 = *(longlong *)(param_1 + 0x60);
      if ((lVar10 != 0) && (0 < *(longlong *)(lVar10 + 0xa0))) {
        (**(code **)(*param_4 + 0x178))(param_4,*(undefined8 *)(lVar10 + 0x90));
        lVar10 = *(longlong *)(param_1 + 0x60);
        local_160 = lVar10 + 0x118;
        if (*(longlong *)(lVar10 + 0x128) != 0) {
          local_160 = *(longlong *)(lVar10 + 0x128);
        }
        local_158 = *(undefined4 *)(lVar10 + 0x130);
        if (*(longlong *)(param_4[0x18] + 8) != 0) {
          FUN_1400dacfe(*(longlong *)(param_4[0x18] + 8),&local_160);
          lVar10 = *(longlong *)(param_1 + 0x60);
        }
        if (*(int *)(lVar10 + 0x134) < 0) {
          *(undefined4 *)(lVar10 + 0x130) = 0;
          FUN_1479d8eae(lVar10 + 0x118,0);
        }
        else {
          *(undefined4 *)(lVar10 + 0x130) = 0;
        }
        (**(code **)(**(longlong **)(param_1 + 0x60) + 0xa8))();
        *(undefined4 *)(param_1 + 0x70) = 0;
        if (*(int *)(param_1 + 0x74) != 0) {
          FUN_1417c4548(param_1 + 0x68);
        }
      }
    }
    else {
      *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) & 0x7f;
    }
    if (param_4[0x14] == 0) goto LAB_1434b4625;
    FUN_1403f2c2c(*(undefined8 *)(param_1 + 0x58),lVar19,param_2,uVar25 & 0xffffffff);
    local_130 = (undefined **)CONCAT44(local_130._4_4_,(int)param_4[0x14]);
    (**(code **)(*param_2 + 0x188))(param_2);
    (**(code **)(*param_2 + 0x178))(param_2,param_4[0x12],param_4[0x14]);
    uVar13 = 1;
  }
  param_4[0x18] = 0;
LAB_1434b4633:
  if ((local_60 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar13;
}



// FUNCTION 1434b4e5a FUN_1434b4e5a body=2372 status=ok
// SIG undefined FUN_1434b4e5a(void)

void FUN_1434b4e5a(longlong param_1,byte *param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  byte *pbVar4;
  char cVar5;
  longlong lVar6;
  int *piVar7;
  uint *puVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  uint uVar14;
  int iVar15;
  undefined1 uVar16;
  ulonglong uVar17;
  uint uVar18;
  int iVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar22;
  bool bVar23;
  undefined1 auStack_318 [32];
  undefined8 *local_2f8;
  byte *local_2f0;
  byte *local_2e8;
  byte *local_2e0;
  char local_2d5;
  int local_2d4;
  int *local_2d0;
  longlong *local_2c8;
  longlong local_2c0;
  uint local_2b4;
  byte *local_2b0;
  longlong *local_2a8;
  longlong *local_2a0;
  longlong local_298;
  undefined4 local_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 local_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  byte local_269;
  undefined **local_268 [11];
  longlong *local_210;
  longlong local_1f0;
  longlong local_1d8;
  longlong local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  longlong lStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined ***local_168;
  undefined8 uStack_160;
  byte local_158;
  longlong local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined2 local_128;
  longlong local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined **local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  longlong *plStack_e0;
  undefined1 local_d8;
  undefined8 local_d0;
  longlong *plStack_c8;
  byte local_ba;
  byte local_b9;
  byte local_b8 [32];
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_318;
  lVar22 = *(longlong *)(param_1 + 0x48);
  if (((lVar22 == 0) &&
      ((((((*(int *)(param_1 + 0xdc) == 0 || (uVar14 = *(uint *)(param_1 + 0xd8), (int)uVar14 < 0))
          || (DAT_14c9647dc <= (int)uVar14)) ||
         ((plVar12 = (longlong *)
                     ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8)),
          plVar12 == (longlong *)0x0 || ((int)plVar12[2] != *(int *)(param_1 + 0xdc))))) ||
        ((*(uint *)(plVar12 + 1) & 0x10200000) != 0)) || (lVar22 = *plVar12, lVar22 == 0)))) ||
     ((*(uint *)(lVar22 + 8) >> 0x1e & 1) != 0)) {
    *param_2 = 0;
  }
  else {
    lVar6 = *(longlong *)(param_1 + 0x50);
    if (*(int *)(lVar6 + 0x134) != 1) {
      local_2f0 = &local_b9;
      local_b9 = 0;
      local_2e8 = &local_ba;
      local_ba = 0;
      local_100 = *(longlong *)(lVar6 + 0x58);
      uVar14 = *(uint *)(local_100 + 0x520);
      local_168 = &local_108;
      local_108 = &PTR_FUN_14a8a89c0;
      local_f8 = 0;
      uStack_f0 = 0;
      local_e8 = 0;
      plStack_e0 = (longlong *)0x0;
      local_d8 = 0;
      local_d0 = 0;
      plStack_c8 = (longlong *)0x0;
      local_2f8 = &local_1a8;
      local_178 = 0;
      uStack_170 = 0;
      local_198 = 0;
      uStack_190 = 0;
      local_1a8 = 0;
      uStack_1a0 = 0;
      local_148 = 0;
      uStack_140 = 0;
      local_138 = 0;
      uStack_130 = 0;
      local_128 = 0xffff;
      local_120 = 0;
      uStack_118 = 0;
      local_110 = 0;
      local_158 = *(byte *)(lVar6 + 0xa4) >> 1 & 1;
      local_188 = *(undefined8 *)(lVar6 + 0x68);
      uStack_160 = 1;
      local_2e0 = param_2;
      lStack_180 = lVar6;
      local_150 = lVar22;
      FUN_140f2e956(*(undefined8 *)(param_1 + 0x20),**(undefined8 **)(param_1 + 0x30));
      local_ba = local_ba | uStack_160._1_1_;
      *param_2 = *param_2 | uStack_160._3_1_;
      local_b9 = local_b9 | uStack_160._2_1_;
      if (local_b9 != 0) {
        plVar12 = *(longlong **)(param_1 + 0x48);
        if ((plVar12 != (longlong *)0x0) ||
           ((((*(int *)(param_1 + 0xdc) != 0 &&
              (uVar18 = *(uint *)(param_1 + 0xd8), -1 < (int)uVar18)) &&
             (((int)uVar18 < DAT_14c9647dc &&
              (((plVar12 = (longlong *)
                           ((ulonglong)((uVar18 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8)),
                plVar12 != (longlong *)0x0 && ((int)plVar12[2] == *(int *)(param_1 + 0xdc))) &&
               ((*(uint *)(plVar12 + 1) & 0x10200000) == 0)))))) &&
            (plVar12 = (longlong *)*plVar12, plVar12 != (longlong *)0x0)))) {
          (**(code **)(*plVar12 + 0x218))();
        }
        FUN_1434b31e0(param_1);
      }
      plVar12 = *(longlong **)(param_1 + 0x48);
      if (((plVar12 != (longlong *)0x0) ||
          ((((*(int *)(param_1 + 0xdc) != 0 &&
             (uVar18 = *(uint *)(param_1 + 0xd8), -1 < (int)uVar18)) &&
            (((int)uVar18 < DAT_14c9647dc &&
             ((puVar13 = (undefined8 *)
                         ((ulonglong)((uVar18 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8)),
              puVar13 != (undefined8 *)0x0 && (*(int *)(puVar13 + 2) == *(int *)(param_1 + 0xdc)))))
            )) && (((*(uint *)(puVar13 + 1) & 0x10200000) == 0 &&
                   (plVar12 = (longlong *)*puVar13, plVar12 != (longlong *)0x0)))))) &&
         ((((*(uint *)(plVar12 + 1) >> 0x1e & 1) == 0 &&
           (((*(longlong *)(param_1 + 0x50) == 0 ||
             (plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x50) + 0x58),
             plVar3 == (longlong *)0x0)) ||
            (cVar5 = (**(code **)(*plVar3 + 0x3f8))(), cVar5 == '\0')))) &&
          ((FUN_1400f5d32(*(undefined8 *)(param_1 + 0x20),**(undefined8 **)(param_1 + 0x30),plVar12)
           , (*(uint *)(plVar12 + 1) >> 0x1e & 1) == 0 &&
           (*(code **)(*plVar12 + 0x220) != (code *)0x144aff47c)))))) {
        (**(code **)(*plVar12 + 0x220))(plVar12);
      }
      lVar22 = *(longlong *)(param_1 + 0x50);
      if (*(longlong *)(lVar22 + 0x68) != 0) {
        lVar6 = FUN_1413dbcfa();
        local_2a0 = *(longlong **)(lVar22 + 0x68);
        if (((local_2a0 != (longlong *)0x0) && (lVar6 != 0)) &&
           ((lVar22 = local_2a0[2], lVar22 != 0 &&
            (((*(int *)(lVar6 + 0x38) <= *(int *)(lVar22 + 0x38) &&
              (*(longlong *)(*(longlong *)(lVar22 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
               lVar6 + 0x30)) && (*(longlong *)(param_1 + 0x58) != 0)))))) {
          local_2d5 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x50) + 0x58) + 0x3c0))()
          ;
          piVar7 = (int *)FUN_140575224(*(undefined8 *)
                                         (*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x58) +
                                         0x1c8),*(undefined8 *)(param_1 + 0x40));
          if (0 < *(int *)(param_1 + 0x80)) {
            local_2c8 = (longlong *)(param_1 + 0x78);
            iVar15 = 0;
            local_2d0 = piVar7;
            local_2b4 = uVar14;
            local_2b0 = param_2;
            local_298 = param_1;
            do {
              if (piVar7 != (int *)0x0) {
                iVar1 = *(int *)(*local_2c8 + (longlong)iVar15 * 0x78);
                do {
                  iVar19 = *piVar7;
                  if ((iVar19 <= iVar1) && (iVar1 < iVar19 + piVar7[10])) {
                    local_2c0 = (longlong)(iVar1 - iVar19) * 0x18 + *(longlong *)(piVar7 + 8);
                    goto LAB_1434b5273;
                  }
                  piVar7 = *(int **)(piVar7 + 2);
                } while (piVar7 != (int *)0x0);
              }
              local_2c0 = 0;
LAB_1434b5273:
              lVar22 = *local_2c8 + (longlong)iVar15 * 0x78;
              FUN_1448fcc30(local_268,*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x68),
                            *(undefined8 *)(lVar22 + 8),*(undefined8 *)(lVar22 + 0x18));
              FUN_143588808(*(undefined8 *)(param_1 + 0x50),local_268);
              local_2a8 = (longlong *)(lVar22 + 0x28);
              iVar1 = *(int *)(lVar22 + 0x50);
              local_2d4 = iVar15;
              if (iVar1 == 0) {
                uVar21 = 1;
                uVar17 = 0;
                iVar15 = 0;
                iVar19 = 0;
              }
              else {
                puVar8 = *(uint **)(lVar22 + 0x48);
                if (*(uint **)(lVar22 + 0x48) == (uint *)0x0) {
                  puVar8 = (uint *)(lVar22 + 0x38);
                }
                uVar14 = *puVar8;
                if (uVar14 == 0) {
                  iVar15 = iVar1 + 0x1e;
                  if (-1 < iVar1 + -1) {
                    iVar15 = iVar1 + -1;
                  }
                  uVar17 = 0;
                  uVar9 = (ulonglong)(uint)(iVar15 >> 5);
                  if (iVar15 >> 5 < 1) {
                    uVar9 = uVar17;
                  }
                  iVar15 = 0;
                  do {
                    if (uVar9 == uVar17) goto LAB_1434b5336;
                    iVar15 = iVar15 + 0x20;
                    uVar14 = puVar8[uVar17 + 1];
                    uVar17 = uVar17 + 1;
                  } while (uVar14 == 0);
                }
                else {
                  uVar17 = 0;
                  iVar15 = 0;
                }
                uVar21 = (ulonglong)(-uVar14 & uVar14);
                uVar9 = uVar21 * 2 + 1;
                lVar6 = 0x3f;
                if (uVar9 != 0) {
                  for (; uVar9 >> lVar6 == 0; lVar6 = lVar6 + -1) {
                  }
                }
                iVar19 = (iVar15 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
                if (iVar1 <= iVar19) {
                  iVar19 = iVar1;
                }
              }
              if (iVar19 == iVar1) {
LAB_1434b5336:
                uVar16 = 0;
              }
              else {
                uVar14 = 0xffffffff;
                uVar16 = 0;
                do {
                  cVar5 = (**(code **)(*local_2a0 + 0x340))
                                    (local_2a0,(longlong)iVar19 * 0x10 + *local_2a8);
                  if (cVar5 != '\0') {
                    uVar16 = 1;
                    break;
                  }
                  uVar14 = uVar14 & ~(uint)uVar21;
                  puVar8 = *(uint **)(lVar22 + 0x48);
                  if (*(uint **)(lVar22 + 0x48) == (uint *)0x0) {
                    puVar8 = (uint *)(lVar22 + 0x38);
                  }
                  iVar2 = *(int *)(lVar22 + 0x50);
                  iVar19 = (int)uVar17;
                  lVar6 = (longlong)iVar19;
                  uVar18 = puVar8[lVar6] & uVar14;
                  if (uVar18 == 0) {
                    iVar10 = iVar2 + 0x1e;
                    if (-1 < iVar2 + -1) {
                      iVar10 = iVar2 + -1;
                    }
                    iVar10 = iVar10 >> 5;
                    iVar15 = iVar15 + 0x20;
                    iVar11 = iVar10;
                    if (iVar10 < iVar19) {
                      iVar11 = iVar19;
                    }
                    if (iVar19 < iVar10) {
                      lVar20 = 0;
                      do {
                        uVar18 = puVar8[lVar6 + lVar20 + 1];
                        if (uVar18 != 0) {
                          uVar17 = (ulonglong)(iVar19 + (int)lVar20 + 1);
                          uVar14 = 0xffffffff;
                          goto LAB_1434b53e0;
                        }
                        iVar15 = iVar15 + 0x20;
                        lVar20 = lVar20 + 1;
                      } while (iVar11 - lVar6 != lVar20);
                      uVar14 = 0xffffffff;
                      iVar19 = iVar11;
                    }
                    uVar17 = (ulonglong)(iVar19 + 1);
                    iVar19 = iVar2;
                  }
                  else {
LAB_1434b53e0:
                    uVar21 = (ulonglong)(-uVar18 & uVar18);
                    uVar9 = uVar21 * 2 + 1;
                    lVar6 = 0x3f;
                    if (uVar9 != 0) {
                      for (; uVar9 >> lVar6 == 0; lVar6 = lVar6 + -1) {
                      }
                    }
                    iVar19 = (iVar15 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
                    if (iVar2 <= iVar19) {
                      iVar19 = iVar2;
                    }
                  }
                } while (iVar19 != iVar1);
              }
              local_98 = 0;
              local_90 = 0;
              local_b8[0] = 0;
              local_b8[1] = 0;
              local_b8[2] = 0;
              local_b8[3] = 0;
              local_b8[4] = 0;
              local_b8[5] = 0;
              local_b8[6] = 0;
              local_b8[7] = 0;
              local_b8[8] = 0;
              local_b8[9] = 0;
              local_b8[10] = 0;
              local_b8[0xb] = 0;
              local_b8[0xc] = 0;
              local_b8[0xd] = 0;
              local_b8[0xe] = 0;
              local_b8[0xf] = 0;
              local_8c = 0xffffffff00000080;
              local_84 = 0;
              local_78 = 0;
              local_70 = 0;
              local_269 = 0;
              FUN_140056680(&local_280,L"(Unknown)");
              param_1 = local_298;
              uVar14 = local_2b4;
              lVar6 = local_2c0;
              if (local_2c0 == 0) {
LAB_1434b54a4:
                if ((local_2d5 == '\0') ||
                   ((*(byte *)(*(longlong *)(param_1 + 0x50) + 0xa4) & 2) != 0)) goto LAB_1434b55e7;
                FUN_14044246e(*(undefined8 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x80));
                pbVar4 = local_2b0;
                piVar7 = local_2d0;
                *(undefined4 *)(param_1 + 0x80) = 0;
                if (*(int *)(param_1 + 0x84) != 0) {
                  FUN_147a4fd72(local_2c8);
                }
                *pbVar4 = 0;
                FUN_147a491c6(*(undefined8 *)(param_1 + 0x50));
LAB_1434b55a0:
                bVar23 = false;
                iVar15 = local_2d4;
              }
              else {
                FUN_14689b058(local_2c0,&local_290);
                if (CONCAT44(uStack_27c,local_280) != 0) {
                  FUN_1400020a8();
                }
                local_280 = local_290;
                uStack_27c = uStack_28c;
                uStack_278 = uStack_288;
                uStack_274 = uStack_284;
                local_2f0 = &local_269;
                local_2f8 = (undefined8 *)CONCAT71(local_2f8._1_7_,uVar16);
                local_2e8 = local_b8;
                cVar5 = FUN_1434b298a(param_1,local_268,lVar22 + 4,lVar6);
                if (cVar5 == '\0') goto LAB_1434b54a4;
                if (local_269 == 1) {
                  FUN_140492002(local_2a8,local_b8);
                  *local_2b0 = 1;
                  piVar7 = local_2d0;
                  goto LAB_1434b55a0;
                }
                bVar23 = uVar14 < *(uint *)(lVar22 + 0x20);
                iVar15 = uVar14 - *(uint *)(lVar22 + 0x20);
                if (!bVar23 && iVar15 != 0) {
                  if (bVar23) {
                    iVar15 = 0;
                  }
                  piVar7 = (int *)(*(longlong *)(param_1 + 0x50) + 0x500);
                  *piVar7 = *piVar7 + 1;
                  piVar7 = (int *)(*(longlong *)(param_1 + 0x50) + 0x504);
                  *piVar7 = *piVar7 + iVar15;
                }
LAB_1434b55e7:
                iVar15 = local_2d4;
                FUN_147a49266(local_2c8,local_2d4);
                iVar15 = iVar15 + -1;
                bVar23 = true;
                piVar7 = local_2d0;
              }
              if (CONCAT44(uStack_27c,local_280) != 0) {
                FUN_1400020a8();
              }
              local_70 = 0;
              if (local_78 != 0) {
                FUN_1400020a8();
              }
              FUN_14041fb7c(local_b8);
              local_268[0] = &PTR_FUN_149e73df0;
              if (local_1b0 != 0) {
                (**(code **)(local_1b0 + -0x10))(local_1b0 + -0x10);
              }
              local_268[0] = &PTR_FUN_149e37220;
              if (local_1d8 != 0) {
                FUN_1400020a8();
              }
              plVar12 = local_210;
              local_268[0] = &PTR__purecall_149e35f70;
              if (local_210 != (longlong *)0x0) {
                if (*local_210 != 0) {
                  FUN_1400020a8();
                }
                FUN_1400020a8(plVar12);
              }
              lVar22 = local_1f0;
              if (local_1f0 != 0) {
                if (*(longlong *)(local_1f0 + 0x40) != 0) {
                  FUN_1400020a8();
                }
                FUN_1400020a8(lVar22);
              }
            } while ((bVar23) && (iVar15 = iVar15 + 1, iVar15 < *(int *)(param_1 + 0x80)));
          }
        }
      }
      if (local_120 != 0) {
        FUN_1400020a8();
      }
      plVar12 = plStack_c8;
      local_108 = &PTR_FUN_14a8a89c0;
      if (plStack_c8 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_c8 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plStack_c8)(plStack_c8);
          LOCK();
          piVar7 = (int *)((longlong)plVar12 + 0xc);
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (*piVar7 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
        }
      }
      plVar12 = plStack_e0;
      if (plStack_e0 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_e0 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plStack_e0)(plStack_e0);
          LOCK();
          piVar7 = (int *)((longlong)plVar12 + 0xc);
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (*piVar7 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
        }
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_318) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1434b57a0 FUN_1434b57a0 body=166 status=ok
// SIG undefined FUN_1434b57a0(void)

ulonglong FUN_1434b57a0(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  
  if (param_1 != 0) {
    uVar2 = *param_2;
    uVar3 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    do {
      if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
        lVar4 = param_1 + 0x68;
        if (*(longlong *)(param_1 + 0x70) != 0) {
          lVar4 = *(longlong *)(param_1 + 0x70);
        }
        iVar5 = *(int *)(lVar4 + (ulonglong)
                                 (*(int *)(param_1 + 0x78) - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
        if (iVar5 != -1) {
          do {
            puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar5 * 0x18);
            if (*puVar1 == uVar2) {
              if ((puVar1 != (ulonglong *)0x0) && (puVar1[1] != 0)) {
                return puVar1[1];
              }
              break;
            }
            iVar5 = (int)puVar1[2];
          } while (iVar5 != -1);
        }
      }
      param_1 = *(longlong *)(param_1 + 8);
    } while (param_1 != 0);
  }
  return 0;
}



// FUNCTION 1434b5846 FUN_1434b5846 body=587 status=ok
// SIG undefined FUN_1434b5846(void)

void FUN_1434b5846(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  undefined8 uVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  
  if ((*(longlong *)(param_1 + 0x28) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x78) != 0)) {
    iVar2 = *(int *)(param_1 + 0x58);
    if (iVar2 == 0) {
      uVar17 = 1;
      uVar16 = 0;
      iVar8 = 0;
      iVar12 = 0;
    }
    else {
      puVar7 = *(uint **)(param_1 + 0x50);
      if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
        puVar7 = (uint *)(param_1 + 0x40);
      }
      uVar15 = *puVar7;
      if (uVar15 == 0) {
        iVar8 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar8 = iVar2 + -1;
        }
        uVar16 = 0;
        uVar17 = (ulonglong)(uint)(iVar8 >> 5);
        if (iVar8 >> 5 < 1) {
          uVar17 = uVar16;
        }
        iVar12 = 0;
        do {
          if (uVar17 == uVar16) {
            return;
          }
          iVar12 = iVar12 + 0x20;
          uVar15 = puVar7[uVar16 + 1];
          uVar16 = uVar16 + 1;
        } while (uVar15 == 0);
      }
      else {
        uVar16 = 0;
        iVar12 = 0;
      }
      uVar17 = (ulonglong)(-uVar15 & uVar15);
      uVar1 = uVar17 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar8 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar8) {
        iVar8 = iVar2;
      }
    }
    if (iVar8 != iVar2) {
      uVar15 = 0xffffffff;
      iVar5 = iVar2;
      do {
        lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 8 + (longlong)iVar8 * 0x18);
        if (lVar13 != 0) {
          uVar3 = *(undefined8 *)(param_1 + 0x28);
          lVar14 = *param_2;
          if (*(code **)(lVar14 + 0x38) == (code *)&LAB_144809cfe) {
            uVar9 = 0;
          }
          else {
            bVar4 = (**(code **)(lVar14 + 0x38))(param_2);
            uVar9 = (uint)bVar4 * 2;
            lVar14 = *param_2;
          }
          if (*(code **)(lVar14 + 0x48) == (code *)&LAB_144809d02) {
            uVar6 = 0;
          }
          else {
            bVar4 = (**(code **)(lVar14 + 0x48))(param_2);
            uVar6 = (uint)bVar4;
          }
          (*(code *)(&PTR_FUN_149eb1110)[uVar6 | uVar9])(param_2,uVar3,lVar13,param_1);
          iVar5 = *(int *)(param_1 + 0x58);
        }
        uVar15 = uVar15 & ~(uint)uVar17;
        puVar7 = *(uint **)(param_1 + 0x50);
        if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
          puVar7 = (uint *)(param_1 + 0x40);
        }
        iVar8 = (int)uVar16;
        lVar13 = (longlong)iVar8;
        uVar9 = puVar7[lVar13] & uVar15;
        if (uVar9 == 0) {
          iVar10 = iVar5 + 0x1e;
          if (-1 < iVar5 + -1) {
            iVar10 = iVar5 + -1;
          }
          iVar10 = iVar10 >> 5;
          iVar12 = iVar12 + 0x20;
          iVar11 = iVar10;
          if (iVar10 < iVar8) {
            iVar11 = iVar8;
          }
          if (iVar8 < iVar10) {
            lVar14 = 0;
            do {
              uVar9 = puVar7[lVar13 + lVar14 + 1];
              if (uVar9 != 0) {
                uVar16 = (ulonglong)(iVar8 + (int)lVar14 + 1);
                uVar15 = 0xffffffff;
                goto LAB_1434b59f1;
              }
              iVar12 = iVar12 + 0x20;
              lVar14 = lVar14 + 1;
            } while (iVar11 - lVar13 != lVar14);
            uVar15 = 0xffffffff;
            iVar8 = iVar11;
          }
          uVar16 = (ulonglong)(iVar8 + 1);
          iVar8 = iVar5;
        }
        else {
LAB_1434b59f1:
          uVar17 = (ulonglong)(-uVar9 & uVar9);
          uVar1 = uVar17 * 2 + 1;
          lVar13 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          iVar8 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
          if (iVar5 <= iVar8) {
            iVar8 = iVar5;
          }
        }
      } while (iVar8 != iVar2);
    }
  }
  return;
}



// FUNCTION 1434b5a91 FUN_1434b5a91 body=41 status=ok
// SIG undefined FUN_1434b5a91(void)

void FUN_1434b5a91(void)

{
  DAT_14cad5620 = 0;
  if (DAT_14cad5618 != 0) {
    FUN_1400020a8();
  }
  FUN_145d63454();
  return;
}



// FUNCTION 1434b5bd4 FUN_1434b5bd4 body=373 status=ok
// SIG undefined FUN_1434b5bd4(void)

void FUN_1434b5bd4(longlong param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  longlong *plVar2;
  char cVar3;
  undefined1 *puVar4;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined1 *local_60;
  ulonglong *local_58;
  ulonglong *local_50;
  undefined8 local_48;
  ulonglong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_147a4d1a6(param_1,param_2[7]);
  puVar4 = (undefined1 *)param_2[1];
  if (puVar4 == (undefined1 *)0x0) {
    puVar4 = (undefined1 *)*param_2;
  }
  puVar1 = (undefined1 *)((longlong)param_2 + 0x4b);
  *(undefined1 *)((longlong)param_2 + 0x4b) = 0;
  if ((*(byte *)(*(longlong *)(param_1 + 0x18) + 0xb1) & 4) == 0) {
    FUN_140b9733e(param_1);
    local_60 = puVar1;
    if ((param_2[4] == 0) ||
       (puVar1 = *(undefined1 **)(param_2[4] + 0x130), (puVar1[0xa4] & 2) == 0)) {
      local_58 = (ulonglong *)param_2[0xb];
      local_68 = (undefined1 *)param_2[6];
      FUN_147ce19a8(*(undefined8 *)(param_1 + 0x20),param_2[7],puVar4);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38[2] ^ (ulonglong)auStack_88);
    }
    if ((puVar4[0x28] & 4) == 0) {
      local_50 = local_38;
      local_38[0] = local_38[0] & 0xffffffffffffff00;
      local_48 = param_2[0xb];
      local_58 = (ulonglong *)((ulonglong)local_58 & 0xffffffffffffff00);
      local_68 = puVar4;
      FUN_147ce12c8(*(undefined8 *)(param_1 + 0x20),puVar1,0,param_2[6]);
    }
    else {
      local_58 = local_38;
      local_38[0] = 0;
      local_38[1] = 0;
      local_68 = puVar1;
      local_60 = puVar4;
      FUN_14368db7a(*(undefined8 *)(param_1 + 0x20),0,0,param_2[6]);
      if (local_38[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  else {
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0xb8);
    local_38[0] = CONCAT71(local_38[0]._1_7_,1);
    local_68 = (undefined1 *)param_2[6];
    cVar3 = (**(code **)(*plVar2 + 0x40))(plVar2,puVar4,param_2[4]);
    if (cVar3 == '\0') {
      *puVar1 = 1;
    }
  }
  if ((local_38[2] ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434b5d76 FUN_1434b5d76 body=253 status=ok
// SIG undefined FUN_1434b5d76(void)

void FUN_1434b5d76(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if ((*(uint *)(param_2 + 8) >> 0x1e & 1) == 0) {
    lVar1 = *(longlong *)(param_2 + 0x660);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
    }
    else if (lVar1 == 0) {
      return;
    }
    if ((*(uint *)(lVar1 + 8) >> 0x1e & 1) == 0) {
      lVar1 = *(longlong *)(param_2 + 0x660);
      if ((lVar1 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar1);
      }
      if ((longlong)(int)param_1[1] != 0) {
        fVar3 = 0.0;
        fVar4 = 3.4028235e+38;
        lVar2 = 0;
        do {
          fVar5 = ABS((float)(*(double *)(lVar1 + 0x230) + *(double *)(lVar1 + 0x230)) -
                      *(float *)(*param_1 + lVar2));
          if (fVar5 < fVar4) {
            fVar3 = *(float *)(*param_1 + 4 + lVar2);
            fVar4 = fVar5;
          }
          lVar2 = lVar2 + 8;
        } while ((longlong)(int)param_1[1] * 8 != lVar2);
        if (0.0 < fVar3) {
          FUN_140ea0802(param_2,(int)fVar3,(int)fVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1434b5ec4 FUN_1434b5ec4 body=771 status=ok
// SIG undefined FUN_1434b5ec4(void)

void FUN_1434b5ec4(int param_1,int param_2,int param_3,ushort *param_4,float param_5)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_d8 [32];
  int local_b8;
  int local_b0;
  int local_a8;
  float *local_a0;
  float *local_98;
  ushort *local_90;
  float local_88;
  float local_84;
  int local_80;
  float local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar2 = param_3 * 2 + 3U & 0xfffffffc;
  local_80 = uVar2 + 8;
  pfVar1 = (float *)((longlong)param_4 + (longlong)(int)uVar2 + 8);
  fVar8 = pfVar1[-2];
  fVar9 = pfVar1[-1];
  local_74 = 0.0;
  fVar7 = (float)*param_4 * 1.5259022e-05 * fVar9 + fVar8;
  local_98 = pfVar1;
  local_90 = param_4;
  local_88 = fVar8;
  local_84 = fVar9;
  if (param_5 < fVar7) {
    if (0xfffffffd < param_1 - 5U) {
      fVar6 = *pfVar1;
      if ((param_1 == 3) &&
         (fVar8 = ((float)param_4[1] * 1.5259022e-05 * fVar9 + fVar8) - fVar7, 1e-08 < ABS(fVar8)))
      {
        fVar9 = pfVar1[1];
        goto LAB_1434b61a7;
      }
      goto LAB_1434b60d1;
    }
    local_a8 = param_3 + -1;
    local_a0 = &local_74;
    local_b0 = 0;
    local_b8 = param_1;
    param_5 = (float)FUN_1434b61d0(param_5,&local_90,&local_98,param_3);
  }
  iVar4 = param_3 + -1;
  fVar7 = (float)param_4[iVar4] * 1.5259022e-05 * fVar9 + fVar8;
  if (fVar7 < param_5) {
    if (0xfffffffd < param_2 - 5U) {
      fVar6 = pfVar1[iVar4];
      if ((param_2 == 3) &&
         (fVar8 = ((float)param_4[(longlong)param_3 + -2] * 1.5259022e-05 * fVar9 + fVar8) - fVar7,
         1e-08 < ABS(fVar8))) {
        fVar9 = pfVar1[(longlong)param_3 + -2];
LAB_1434b61a7:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_d8,fVar7,fVar8,(fVar9 - fVar6) / fVar8);
      }
      goto LAB_1434b60d1;
    }
    local_a0 = &local_74;
    local_a8 = 0;
    local_b8 = param_2;
    local_b0 = iVar4;
    param_5 = (float)FUN_1434b61d0(param_5,&local_90,&local_98,param_3);
  }
  uVar2 = 1;
  if (2 < param_3) {
    uVar5 = param_3 - 2;
    uVar2 = 1;
    do {
      uVar3 = uVar5 >> 1;
      if ((float)param_4[uVar3 + uVar2] * 1.5259022e-05 * fVar9 + fVar8 <= param_5) {
        uVar2 = uVar2 + uVar3 + 1;
        uVar3 = uVar5 + ~uVar3;
      }
      uVar5 = uVar3;
    } while (0 < (int)uVar5);
  }
  fVar7 = (float)param_4[uVar2 - 1] * 1.5259022e-05 * fVar9 + fVar8;
  fVar8 = ((float)param_4[uVar2] * 1.5259022e-05 * fVar9 + fVar8) - fVar7;
  fVar6 = pfVar1[uVar2 - 1];
  if (0.0 < fVar8) {
    fVar6 = fVar6 + (pfVar1[uVar2] - fVar6) * ((param_5 - fVar7) / fVar8);
  }
  fVar6 = fVar6 + local_74;
LAB_1434b60d1:
  if ((local_70 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(fVar6);
  }
  return;
}



// FUNCTION 1434b61d0 FUN_1434b61d0 body=285 status=ok
// SIG undefined FUN_1434b61d0(void)

void FUN_1434b61d0(float param_1,undefined8 *param_2,longlong *param_3,int param_4,int param_5,
                  int param_6,int param_7,float *param_8)

{
  float fVar1;
  float fVar2;
  undefined1 auStack_68 [32];
  uint local_48;
  float local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  fVar1 = (float)*(ushort *)*param_2 * 1.5259022e-05 * *(float *)((longlong)param_2 + 0xc) +
          *(float *)(param_2 + 1);
  fVar2 = (float)((ushort *)*param_2)[(longlong)param_4 + -1] * 1.5259022e-05 *
          *(float *)((longlong)param_2 + 0xc) + *(float *)(param_2 + 1);
  local_48 = 0;
  local_44 = param_1;
  FUN_1434b62ee(fVar1,fVar2);
  if (param_5 == 2) {
    if ((local_48 & 0x80000001) == 1) {
      local_44 = fVar1 + (fVar2 - local_44);
    }
  }
  else if (param_5 == 1) {
    *param_8 = (float)(int)local_48 *
               (*(float *)(*param_3 + (longlong)param_6 * 4) -
               *(float *)(*param_3 + (longlong)param_7 * 4));
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_44);
}



// FUNCTION 1434b62ee FUN_1434b62ee body=211 status=ok
// SIG undefined FUN_1434b62ee(void)

void FUN_1434b62ee(float param_1,float param_2,float *param_3,int *param_4)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *param_3;
  fVar3 = param_2 - param_1;
  if (fVar1 <= param_2) {
    fVar4 = fVar1;
    if (param_1 <= fVar1) goto LAB_1434b636f;
    fVar4 = (fVar1 - param_1) / fVar3;
    iVar2 = (int)ROUND(fVar4 + fVar4 + -0.5) >> 1;
    *param_4 = iVar2;
    fVar4 = *param_3 - (float)iVar2 * fVar3;
  }
  else {
    fVar4 = (param_2 - fVar1) / fVar3;
    iVar2 = (int)ROUND(fVar4 + fVar4 + -0.5) >> 1;
    *param_4 = iVar2;
    fVar4 = (float)iVar2 * fVar3 + *param_3;
  }
  *param_3 = fVar4;
LAB_1434b636f:
  fVar3 = param_1;
  if (param_1 <= fVar1 || fVar4 != param_2) {
    fVar3 = fVar4;
  }
  if (param_1 > fVar1 && fVar4 == param_2 || fVar1 > param_2 && param_1 == fVar3) {
    if (fVar1 <= param_2 || param_1 != fVar3) {
      param_2 = fVar3;
    }
    *param_3 = param_2;
  }
  iVar2 = -*param_4;
  if (iVar2 < 0) {
    iVar2 = *param_4;
  }
  *param_4 = iVar2;
  return;
}



// FUNCTION 1434b63c2 FUN_1434b63c2 body=537 status=ok
// SIG undefined FUN_1434b63c2(void)

void FUN_1434b63c2(int param_1,int param_2,int param_3,float *param_4,float param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_a8 [32];
  int local_88;
  int local_80;
  int local_78;
  float *local_70;
  float *local_60;
  float *local_58;
  int local_50;
  float local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_50 = param_3 * 4;
  pfVar5 = (float *)((longlong)local_50 + (longlong)param_4);
  local_44 = 0.0;
  fVar7 = *param_4;
  local_60 = pfVar5;
  local_58 = param_4;
  if (param_5 < fVar7) {
    if (0xfffffffd < param_1 - 5U) {
      fVar6 = *pfVar5;
      if ((param_1 == 3) && (fVar8 = param_4[1] - fVar7, 1e-08 < ABS(fVar8))) {
        fVar9 = pfVar5[1];
        goto LAB_1434b65bb;
      }
      goto LAB_1434b6522;
    }
    local_78 = param_3 + -1;
    local_70 = &local_44;
    local_80 = 0;
    local_88 = param_1;
    param_5 = (float)FUN_1434b65e4(param_5,&local_58,&local_60,param_3);
  }
  iVar3 = param_3 + -1;
  fVar7 = param_4[iVar3];
  if (fVar7 < param_5) {
    if (0xfffffffd < param_2 - 5U) {
      fVar6 = pfVar5[iVar3];
      if (param_2 == 3) {
        fVar8 = param_4[(longlong)param_3 + -2] - fVar7;
        if (1e-08 < ABS(fVar8)) {
          fVar9 = pfVar5[(longlong)param_3 + -2];
LAB_1434b65bb:
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_a8,fVar7,fVar8,(fVar9 - fVar6) / fVar8);
        }
      }
      goto LAB_1434b6522;
    }
    local_70 = &local_44;
    local_78 = 0;
    local_88 = param_2;
    local_80 = iVar3;
    param_5 = (float)FUN_1434b65e4(param_5,&local_58,&local_60,param_3);
  }
  uVar1 = 1;
  if (2 < param_3) {
    uVar4 = param_3 - 2;
    uVar1 = 1;
    do {
      uVar2 = uVar4 >> 1;
      if (param_4[uVar2 + uVar1] <= param_5) {
        uVar1 = uVar1 + uVar2 + 1;
        uVar2 = uVar4 + ~uVar2;
      }
      uVar4 = uVar2;
    } while (0 < (int)uVar4);
  }
  fVar7 = param_4[uVar1] - param_4[uVar1 - 1];
  fVar6 = pfVar5[uVar1 - 1];
  if (0.0 < fVar7) {
    fVar6 = fVar6 + (pfVar5[uVar1] - fVar6) * ((param_5 - param_4[uVar1 - 1]) / fVar7);
  }
  fVar6 = fVar6 + local_44;
LAB_1434b6522:
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(fVar6);
  }
  return;
}



// FUNCTION 1434b65e4 FUN_1434b65e4 body=231 status=ok
// SIG undefined FUN_1434b65e4(void)

void FUN_1434b65e4(float param_1,undefined8 *param_2,longlong *param_3,int param_4,int param_5,
                  int param_6,int param_7,float *param_8)

{
  float fVar1;
  float fVar2;
  undefined1 auStack_68 [32];
  uint local_48;
  float local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  fVar1 = *(float *)*param_2;
  fVar2 = ((float *)*param_2)[(longlong)param_4 + -1];
  local_48 = 0;
  local_44 = param_1;
  FUN_1434b62ee(fVar1,fVar2);
  if (param_5 == 2) {
    if ((local_48 & 0x80000001) == 1) {
      local_44 = fVar1 + (fVar2 - local_44);
    }
  }
  else if (param_5 == 1) {
    *param_8 = (float)(int)local_48 *
               (*(float *)(*param_3 + (longlong)param_6 * 4) -
               *(float *)(*param_3 + (longlong)param_7 * 4));
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_44);
}



// FUNCTION 1434b66cc FUN_1434b66cc body=891 status=ok
// SIG undefined FUN_1434b66cc(void)

void FUN_1434b66cc(int param_1,int param_2,int param_3,ushort *param_4,float param_5)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_c8 [32];
  int local_a8;
  int local_a0;
  int local_98;
  float *local_90;
  float *local_88;
  ushort *local_80;
  float local_78;
  float local_74;
  int local_70;
  float local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar2 = param_3 * 2 + 3U & 0xfffffffc;
  local_70 = uVar2 + 8;
  pfVar1 = (float *)((longlong)param_4 + (longlong)(int)uVar2 + 8);
  fVar8 = pfVar1[-2];
  fVar9 = pfVar1[-1];
  local_64 = 0.0;
  fVar7 = (float)*param_4 * 1.5259022e-05 * fVar9 + fVar8;
  local_88 = pfVar1;
  local_80 = param_4;
  local_78 = fVar8;
  local_74 = fVar9;
  if (param_5 < fVar7) {
    if (0xfffffffd < param_1 - 5U) {
      fVar10 = *pfVar1;
      if ((param_1 == 3) &&
         (fVar8 = ((float)param_4[1] * 1.5259022e-05 * fVar9 + fVar8) - fVar7, 1e-08 < ABS(fVar8)))
      {
        fVar9 = pfVar1[3];
        goto LAB_1434b6a27;
      }
      goto LAB_1434b6947;
    }
    local_98 = param_3 + -1;
    local_90 = &local_64;
    local_a0 = 0;
    local_a8 = param_1;
    param_5 = (float)FUN_1434b6a50(param_5,&local_80,&local_88,param_3);
  }
  iVar6 = param_3 + -1;
  fVar7 = (float)param_4[iVar6] * 1.5259022e-05 * fVar9 + fVar8;
  if (fVar7 < param_5) {
    if (0xfffffffd < param_2 - 5U) {
      fVar10 = pfVar1[iVar6 * 3];
      if (param_2 == 3) {
        fVar8 = ((float)param_4[param_3 + -2] * 1.5259022e-05 * fVar9 + fVar8) - fVar7;
        if (1e-08 < ABS(fVar8)) {
          fVar9 = pfVar1[(param_3 + -2) * 3];
LAB_1434b6a27:
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_c8,fVar7,fVar8,(fVar9 - fVar10) / fVar8);
        }
      }
      goto LAB_1434b6947;
    }
    local_90 = &local_64;
    local_98 = 0;
    local_a8 = param_2;
    local_a0 = iVar6;
    param_5 = (float)FUN_1434b6a50(param_5,&local_80,&local_88,param_3);
  }
  uVar2 = 1;
  if (2 < param_3) {
    uVar5 = param_3 - 2;
    uVar2 = 1;
    do {
      uVar3 = uVar5 >> 1;
      if ((float)param_4[uVar3 + uVar2] * 1.5259022e-05 * fVar9 + fVar8 <= param_5) {
        uVar2 = uVar2 + uVar3 + 1;
        uVar3 = uVar5 + ~uVar3;
      }
      uVar5 = uVar3;
    } while (0 < (int)uVar5);
  }
  fVar7 = (float)param_4[uVar2 - 1] * 1.5259022e-05 * fVar9 + fVar8;
  fVar8 = ((float)param_4[uVar2] * 1.5259022e-05 * fVar9 + fVar8) - fVar7;
  uVar4 = (ulonglong)((uVar2 - 1) * 3);
  fVar10 = pfVar1[uVar4];
  if (0.0 < fVar8) {
    fVar11 = (param_5 - fVar7) / fVar8;
    fVar9 = pfVar1[uVar4 + 2] * fVar8 * 0.33333334 + fVar10;
    fVar8 = pfVar1[uVar2 * 3] - fVar8 * 0.33333334 * pfVar1[(ulonglong)(uVar2 * 3) + 1];
    fVar7 = (fVar8 - fVar9) * fVar11 + fVar9;
    fVar10 = (fVar9 - fVar10) * fVar11 + fVar10;
    fVar10 = (fVar7 - fVar10) * fVar11 + fVar10;
    fVar10 = (((((pfVar1[uVar2 * 3] - fVar8) * fVar11 + fVar8) - fVar7) * fVar11 + fVar7) - fVar10)
             * fVar11 + fVar10;
  }
  fVar10 = fVar10 + local_64;
LAB_1434b6947:
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(fVar10);
  }
  return;
}



// FUNCTION 1434b6a50 FUN_1434b6a50 body=297 status=ok
// SIG undefined FUN_1434b6a50(void)

void FUN_1434b6a50(float param_1,undefined8 *param_2,longlong *param_3,int param_4,int param_5,
                  int param_6,int param_7,float *param_8)

{
  float fVar1;
  float fVar2;
  undefined1 auStack_68 [32];
  uint local_48;
  float local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  fVar1 = (float)*(ushort *)*param_2 * 1.5259022e-05 * *(float *)((longlong)param_2 + 0xc) +
          *(float *)(param_2 + 1);
  fVar2 = (float)((ushort *)*param_2)[(longlong)param_4 + -1] * 1.5259022e-05 *
          *(float *)((longlong)param_2 + 0xc) + *(float *)(param_2 + 1);
  local_48 = 0;
  local_44 = param_1;
  FUN_1434b62ee(fVar1,fVar2);
  if (param_5 == 2) {
    if ((local_48 & 0x80000001) == 1) {
      local_44 = fVar1 + (fVar2 - local_44);
    }
  }
  else if (param_5 == 1) {
    *param_8 = (float)(int)local_48 *
               (*(float *)(*param_3 + (longlong)(param_6 * 3) * 4) -
               *(float *)(*param_3 + (longlong)(param_7 * 3) * 4));
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_44);
}



// FUNCTION 1434b6b7a FUN_1434b6b7a body=662 status=ok
// SIG undefined FUN_1434b6b7a(void)

void FUN_1434b6b7a(int param_1,int param_2,int param_3,float *param_4,float param_5)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  float *pfVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_a8 [32];
  int local_88;
  int local_80;
  int local_78;
  float *local_70;
  float *local_60;
  float *local_58;
  int local_50;
  float local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_50 = param_3 * 4;
  pfVar5 = (float *)((longlong)local_50 + (longlong)param_4);
  local_44 = 0.0;
  fVar7 = *param_4;
  local_60 = pfVar5;
  local_58 = param_4;
  if (param_5 < fVar7) {
    if (0xfffffffd < param_1 - 5U) {
      fVar9 = *pfVar5;
      if ((param_1 == 3) && (fVar8 = param_4[1] - fVar7, 1e-08 < ABS(fVar8))) {
        fVar10 = pfVar5[3];
        goto LAB_1434b6df0;
      }
      goto LAB_1434b6d4d;
    }
    local_78 = param_3 + -1;
    local_70 = &local_44;
    local_80 = 0;
    local_88 = param_1;
    param_5 = (float)FUN_1434b6e19(param_5,&local_58,&local_60,param_3);
  }
  iVar6 = param_3 + -1;
  fVar7 = param_4[iVar6];
  if (fVar7 < param_5) {
    if (0xfffffffd < param_2 - 5U) {
      fVar9 = pfVar5[iVar6 * 3];
      if (param_2 == 3) {
        fVar8 = param_4[param_3 + -2] - fVar7;
        if (1e-08 < ABS(fVar8)) {
          fVar10 = pfVar5[(param_3 + -2) * 3];
LAB_1434b6df0:
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_a8,fVar7,fVar8,(fVar10 - fVar9) / fVar8);
        }
      }
      goto LAB_1434b6d4d;
    }
    local_70 = &local_44;
    local_78 = 0;
    local_88 = param_2;
    local_80 = iVar6;
    param_5 = (float)FUN_1434b6e19(param_5,&local_58,&local_60,param_3);
  }
  uVar1 = 1;
  if (2 < param_3) {
    uVar4 = param_3 - 2;
    uVar1 = 1;
    do {
      uVar2 = uVar4 >> 1;
      if (param_4[uVar2 + uVar1] <= param_5) {
        uVar1 = uVar1 + uVar2 + 1;
        uVar2 = uVar4 + ~uVar2;
      }
      uVar4 = uVar2;
    } while (0 < (int)uVar4);
  }
  fVar7 = param_4[uVar1] - param_4[uVar1 - 1];
  uVar3 = (ulonglong)((uVar1 - 1) * 3);
  fVar9 = pfVar5[uVar3];
  if (0.0 < fVar7) {
    fVar11 = (param_5 - param_4[uVar1 - 1]) / fVar7;
    fVar8 = pfVar5[uVar3 + 2] * fVar7 * 0.33333334 + fVar9;
    fVar7 = pfVar5[uVar1 * 3] - fVar7 * 0.33333334 * pfVar5[(ulonglong)(uVar1 * 3) + 1];
    fVar10 = (fVar7 - fVar8) * fVar11 + fVar8;
    fVar9 = (fVar8 - fVar9) * fVar11 + fVar9;
    fVar9 = (fVar10 - fVar9) * fVar11 + fVar9;
    fVar9 = (((((pfVar5[uVar1 * 3] - fVar7) * fVar11 + fVar7) - fVar10) * fVar11 + fVar10) - fVar9)
            * fVar11 + fVar9;
  }
  fVar9 = fVar9 + local_44;
LAB_1434b6d4d:
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(fVar9);
  }
  return;
}



// FUNCTION 1434b6e19 FUN_1434b6e19 body=243 status=ok
// SIG undefined FUN_1434b6e19(void)

void FUN_1434b6e19(float param_1,undefined8 *param_2,longlong *param_3,int param_4,int param_5,
                  int param_6,int param_7,float *param_8)

{
  float fVar1;
  float fVar2;
  undefined1 auStack_68 [32];
  uint local_48;
  float local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  fVar1 = *(float *)*param_2;
  fVar2 = ((float *)*param_2)[(longlong)param_4 + -1];
  local_48 = 0;
  local_44 = param_1;
  FUN_1434b62ee(fVar1,fVar2);
  if (param_5 == 2) {
    if ((local_48 & 0x80000001) == 1) {
      local_44 = fVar1 + (fVar2 - local_44);
    }
  }
  else if (param_5 == 1) {
    *param_8 = (float)(int)local_48 *
               (*(float *)(*param_3 + (longlong)(param_6 * 3) * 4) -
               *(float *)(*param_3 + (longlong)(param_7 * 3) * 4));
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_44);
}



// FUNCTION 1434b6f0e FUN_1434b6f0e body=981 status=ok
// SIG undefined FUN_1434b6f0e(void)

void FUN_1434b6f0e(int param_1,int param_2,int param_3,longlong param_4,float param_5)

{
  longlong lVar1;
  float *pfVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_e8 [32];
  int local_c8;
  int local_c0;
  int local_b8;
  float *local_b0;
  longlong local_a0;
  float *local_98;
  longlong local_90;
  float local_88;
  float local_84;
  int local_80;
  float local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar6 = (longlong)(param_3 + 1) & 0xfffffffffffffffe;
  uVar4 = (int)uVar6 + param_3 * 2 + 3U & 0xfffffffc;
  local_80 = uVar4 + 8;
  lVar1 = param_4 + uVar6;
  pfVar2 = (float *)(param_4 + 8 + (longlong)(int)uVar4);
  fVar11 = pfVar2[-2];
  fVar12 = pfVar2[-1];
  local_74 = 0.0;
  fVar10 = (float)*(ushort *)(param_4 + uVar6) * 1.5259022e-05 * fVar12 + fVar11;
  local_a0 = param_4;
  local_98 = pfVar2;
  local_90 = lVar1;
  local_88 = fVar11;
  local_84 = fVar12;
  if (param_5 < fVar10) {
    if (0xfffffffd < param_1 - 5U) {
      fVar9 = *pfVar2;
      if ((param_1 == 3) &&
         (fVar11 = ((float)*(ushort *)(lVar1 + 2) * 1.5259022e-05 * fVar12 + fVar11) - fVar10,
         1e-08 < ABS(fVar11))) {
        fVar12 = pfVar2[3];
        goto LAB_1434b720c;
      }
      goto LAB_1434b72ab;
    }
    local_b8 = param_3 + -1;
    local_b0 = &local_74;
    local_c0 = 0;
    local_c8 = param_1;
    param_5 = (float)FUN_1434b72ec(param_5,&local_90,&local_a0,param_3);
  }
  iVar8 = param_3 + -1;
  fVar10 = (float)*(ushort *)(lVar1 + (longlong)iVar8 * 2) * 1.5259022e-05 * fVar12 + fVar11;
  if (fVar10 < param_5) {
    if (0xfffffffd < param_2 - 5U) {
      fVar9 = pfVar2[iVar8 * 3];
      if (param_2 == 3) {
        fVar11 = ((float)*(ushort *)(lVar1 + (longlong)(param_3 + -2) * 2) * 1.5259022e-05 * fVar12
                 + fVar11) - fVar10;
        if (1e-08 < ABS(fVar11)) {
          fVar12 = pfVar2[(param_3 + -2) * 3];
LAB_1434b720c:
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_e8,fVar10,fVar11,(fVar12 - fVar9) / fVar11);
        }
      }
      goto LAB_1434b72ab;
    }
    local_b0 = &local_74;
    local_b8 = 0;
    local_c8 = param_2;
    local_c0 = iVar8;
    param_5 = (float)FUN_1434b72ec(param_5,&local_90,&local_a0,param_3);
  }
  uVar4 = 1;
  if (2 < param_3) {
    uVar7 = param_3 - 2;
    uVar4 = 1;
    do {
      uVar5 = uVar7 >> 1;
      if ((float)*(ushort *)(lVar1 + (ulonglong)(uVar5 + uVar4) * 2) * 1.5259022e-05 * fVar12 +
          fVar11 <= param_5) {
        uVar4 = uVar4 + uVar5 + 1;
        uVar5 = uVar7 + ~uVar5;
      }
      uVar7 = uVar5;
    } while (0 < (int)uVar7);
  }
  uVar7 = uVar4 - 1;
  fVar9 = pfVar2[uVar7 * 3];
  cVar3 = *(char *)(param_4 + (ulonglong)uVar7);
  if (cVar3 != '\x01') {
    fVar10 = (float)*(ushort *)(lVar1 + (ulonglong)uVar7 * 2) * 1.5259022e-05 * fVar12 + fVar11;
    fVar11 = ((float)*(ushort *)(lVar1 + (ulonglong)uVar4 * 2) * 1.5259022e-05 * fVar12 + fVar11) -
             fVar10;
    if (0.0 < fVar11) {
      fVar12 = pfVar2[uVar4 * 3];
      fVar10 = (param_5 - fVar10) / fVar11;
      if (cVar3 == '\x02') {
        fVar9 = fVar9 + fVar10 * (fVar12 - fVar9);
      }
      else {
        fVar13 = pfVar2[(ulonglong)(uVar7 * 3) + 2] * fVar11 * 0.33333334 + fVar9;
        fVar11 = fVar12 - fVar11 * 0.33333334 * pfVar2[(ulonglong)(uVar4 * 3) + 1];
        fVar14 = (fVar11 - fVar13) * fVar10 + fVar13;
        fVar9 = (fVar13 - fVar9) * fVar10 + fVar9;
        fVar9 = (fVar14 - fVar9) * fVar10 + fVar9;
        fVar9 = (((((fVar12 - fVar11) * fVar10 + fVar11) - fVar14) * fVar10 + fVar14) - fVar9) *
                fVar10 + fVar9;
      }
    }
  }
  fVar9 = fVar9 + local_74;
LAB_1434b72ab:
  if ((local_70 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(fVar9);
  }
  return;
}



// FUNCTION 1434b72ec FUN_1434b72ec body=298 status=ok
// SIG undefined FUN_1434b72ec(void)

void FUN_1434b72ec(float param_1,undefined8 *param_2,longlong param_3,int param_4,int param_5,
                  int param_6,int param_7,float *param_8)

{
  float fVar1;
  float fVar2;
  undefined1 auStack_68 [32];
  uint local_48;
  float local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  fVar1 = (float)*(ushort *)*param_2 * 1.5259022e-05 * *(float *)((longlong)param_2 + 0xc) +
          *(float *)(param_2 + 1);
  fVar2 = (float)((ushort *)*param_2)[(longlong)param_4 + -1] * 1.5259022e-05 *
          *(float *)((longlong)param_2 + 0xc) + *(float *)(param_2 + 1);
  local_48 = 0;
  local_44 = param_1;
  FUN_1434b62ee(fVar1,fVar2);
  if (param_5 == 2) {
    if ((local_48 & 0x80000001) == 1) {
      local_44 = fVar1 + (fVar2 - local_44);
    }
  }
  else if (param_5 == 1) {
    *param_8 = (float)(int)local_48 *
               (*(float *)(*(longlong *)(param_3 + 8) + (longlong)(param_6 * 3) * 4) -
               *(float *)(*(longlong *)(param_3 + 8) + (longlong)(param_7 * 3) * 4));
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_44);
}



// FUNCTION 1434b7418 FUN_1434b7418 body=737 status=ok
// SIG undefined FUN_1434b7418(void)

void FUN_1434b7418(int param_1,int param_2,int param_3,longlong param_4,float param_5)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_b8 [32];
  int local_98;
  int local_90;
  int local_88;
  float *local_80;
  longlong local_78;
  float *local_70;
  longlong local_68;
  int local_60;
  float local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar4 = (longlong)(param_3 + 3) & 0xfffffffffffffffc;
  lVar1 = param_4 + uVar4;
  local_60 = (int)uVar4 + param_3 * 4;
  pfVar8 = (float *)(local_60 + param_4);
  local_54 = 0.0;
  fVar14 = *(float *)(param_4 + uVar4);
  local_78 = param_4;
  local_70 = pfVar8;
  local_68 = lVar1;
  if (param_5 < fVar14) {
    if (0xfffffffd < param_1 - 5U) {
      fVar9 = *pfVar8;
      if ((param_1 == 3) && (fVar10 = *(float *)(lVar1 + 4) - fVar14, 1e-08 < ABS(fVar10))) {
        fVar11 = pfVar8[3];
        goto LAB_1434b7636;
      }
      goto LAB_1434b76d5;
    }
    local_88 = param_3 + -1;
    local_80 = &local_54;
    local_90 = 0;
    local_98 = param_1;
    param_5 = (float)FUN_1434b7702(param_5,&local_68,&local_78,param_3);
  }
  iVar7 = param_3 + -1;
  fVar14 = *(float *)(lVar1 + (longlong)iVar7 * 4);
  if (fVar14 < param_5) {
    if (0xfffffffd < param_2 - 5U) {
      fVar9 = pfVar8[iVar7 * 3];
      if (param_2 == 3) {
        fVar10 = *(float *)(lVar1 + (longlong)(param_3 + -2) * 4) - fVar14;
        if (1e-08 < ABS(fVar10)) {
          fVar11 = pfVar8[(param_3 + -2) * 3];
LAB_1434b7636:
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_b8,fVar14,fVar10,(fVar11 - fVar9) / fVar10);
        }
      }
      goto LAB_1434b76d5;
    }
    local_80 = &local_54;
    local_88 = 0;
    local_98 = param_2;
    local_90 = iVar7;
    param_5 = (float)FUN_1434b7702(param_5,&local_68,&local_78,param_3);
  }
  uVar3 = 1;
  if (2 < param_3) {
    uVar6 = param_3 - 2;
    uVar3 = 1;
    do {
      uVar5 = uVar6 >> 1;
      if (*(float *)(lVar1 + (ulonglong)(uVar5 + uVar3) * 4) <= param_5) {
        uVar3 = uVar3 + uVar5 + 1;
        uVar5 = uVar6 + ~uVar5;
      }
      uVar6 = uVar5;
    } while (0 < (int)uVar6);
  }
  uVar6 = uVar3 - 1;
  fVar14 = *(float *)(lVar1 + (ulonglong)uVar6 * 4);
  fVar10 = *(float *)(lVar1 + (ulonglong)uVar3 * 4) - fVar14;
  fVar9 = pfVar8[uVar6 * 3];
  if ((0.0 < fVar10) && (cVar2 = *(char *)(param_4 + (ulonglong)uVar6), cVar2 != '\x01')) {
    fVar11 = pfVar8[uVar3 * 3];
    fVar14 = (param_5 - fVar14) / fVar10;
    if (cVar2 == '\x02') {
      fVar9 = fVar9 + fVar14 * (fVar11 - fVar9);
    }
    else {
      fVar12 = pfVar8[(ulonglong)(uVar6 * 3) + 2] * fVar10 * 0.33333334 + fVar9;
      fVar10 = fVar11 - fVar10 * 0.33333334 * pfVar8[(ulonglong)(uVar3 * 3) + 1];
      fVar13 = (fVar10 - fVar12) * fVar14 + fVar12;
      fVar9 = (fVar12 - fVar9) * fVar14 + fVar9;
      fVar9 = (fVar13 - fVar9) * fVar14 + fVar9;
      fVar9 = (((((fVar11 - fVar10) * fVar14 + fVar10) - fVar13) * fVar14 + fVar13) - fVar9) *
              fVar14 + fVar9;
    }
  }
  fVar9 = fVar9 + local_54;
LAB_1434b76d5:
  if ((local_50 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(fVar9);
  }
  return;
}



// FUNCTION 1434b7702 FUN_1434b7702 body=244 status=ok
// SIG undefined FUN_1434b7702(void)

void FUN_1434b7702(float param_1,undefined8 *param_2,longlong param_3,int param_4,int param_5,
                  int param_6,int param_7,float *param_8)

{
  float fVar1;
  float fVar2;
  undefined1 auStack_68 [32];
  uint local_48;
  float local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  fVar1 = *(float *)*param_2;
  fVar2 = ((float *)*param_2)[(longlong)param_4 + -1];
  local_48 = 0;
  local_44 = param_1;
  FUN_1434b62ee(fVar1,fVar2);
  if (param_5 == 2) {
    if ((local_48 & 0x80000001) == 1) {
      local_44 = fVar1 + (fVar2 - local_44);
    }
  }
  else if (param_5 == 1) {
    *param_8 = (float)(int)local_48 *
               (*(float *)(*(longlong *)(param_3 + 8) + (longlong)(param_6 * 3) * 4) -
               *(float *)(*(longlong *)(param_3 + 8) + (longlong)(param_7 * 3) * 4));
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_44);
}



// FUNCTION 1434b77f8 FUN_1434b77f8 body=1147 status=ok
// SIG undefined FUN_1434b77f8(void)

void FUN_1434b77f8(uint param_1,uint param_2,int param_3,longlong param_4,float param_5)

{
  ushort *puVar1;
  float *pfVar2;
  float fVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_f8 [32];
  uint local_d8;
  float local_d0;
  float local_c8;
  float *local_c0;
  float local_b8;
  uint local_b0;
  float local_a8;
  longlong local_a0;
  float *local_98;
  ushort *local_90;
  float local_88;
  float local_84;
  int local_80;
  float local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_80 = param_3 * 4 + 8;
  puVar1 = (ushort *)(param_4 + (longlong)param_3 * 2);
  pfVar2 = (float *)(param_4 + 8 + (longlong)(param_3 * 4));
  fVar15 = pfVar2[-2];
  fVar14 = pfVar2[-1];
  local_74 = 0.0;
  fVar13 = (float)*puVar1 * 1.5259022e-05 * fVar14 + fVar15;
  local_a0 = param_4;
  local_98 = pfVar2;
  local_90 = puVar1;
  local_88 = fVar15;
  local_84 = fVar14;
  if (param_5 < fVar13) {
    if (param_1 - 5 < 0xfffffffe) {
      local_c8 = (float)(param_3 + -1);
      local_c0 = &local_74;
      local_d0 = 0.0;
      local_d8 = param_1;
      param_5 = (float)FUN_1434b7c7c(param_5,&local_90,&local_a0,param_3);
      goto LAB_1434b7909;
    }
    fVar12 = *pfVar2;
    if (param_1 != 3) goto LAB_1434b7bd7;
    fVar13 = ((float)puVar1[1] * 1.5259022e-05 * fVar14 + fVar15) - fVar13;
joined_r0x0001434b7a99:
    if (1e-08 < ABS(fVar13)) {
LAB_1434b7b1a:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_f8);
    }
  }
  else {
LAB_1434b7909:
    fVar12 = (float)(param_3 + -1);
    fVar13 = (float)puVar1[(int)fVar12] * 1.5259022e-05 * fVar14 + fVar15;
    if (fVar13 < param_5) {
      if (0xfffffffd < param_2 - 5) {
        fVar12 = pfVar2[(int)fVar12 * 5];
        if (param_2 != 3) goto LAB_1434b7bd7;
        fVar13 = ((float)puVar1[param_3 + -2] * 1.5259022e-05 * fVar14 + fVar15) - fVar13;
        goto joined_r0x0001434b7a99;
      }
      local_c0 = &local_74;
      local_c8 = 0.0;
      local_d8 = param_2;
      local_d0 = fVar12;
      param_5 = (float)FUN_1434b7c7c(param_5,&local_90,&local_a0,param_3);
    }
    uVar6 = 1;
    if (2 < param_3) {
      uVar10 = param_3 - 2;
      uVar6 = 1;
      do {
        uVar7 = uVar10 >> 1;
        if ((float)puVar1[uVar7 + uVar6] * 1.5259022e-05 * fVar14 + fVar15 <= param_5) {
          uVar6 = uVar6 + uVar7 + 1;
          uVar7 = uVar10 + ~uVar7;
        }
        uVar10 = uVar7;
      } while (0 < (int)uVar10);
    }
    uVar10 = uVar6 - 1;
    uVar9 = (ulonglong)uVar10;
    uVar8 = (ulonglong)(uVar10 * 5);
    fVar12 = pfVar2[uVar8];
    cVar4 = *(char *)(param_4 + uVar9 * 2);
    if (cVar4 != '\x01') {
      fVar13 = (float)puVar1[uVar9] * 1.5259022e-05 * fVar14 + fVar15;
      fVar15 = (float)puVar1[uVar6] * 1.5259022e-05 * fVar14 + fVar15;
      fVar14 = fVar15 - fVar13;
      if (0.0 < fVar14) {
        uVar11 = (ulonglong)(uVar6 * 5);
        fVar3 = pfVar2[uVar11];
        fVar13 = (param_5 - fVar13) / fVar14;
        if (cVar4 == '\x02') {
          fVar12 = fVar12 + fVar13 * (fVar3 - fVar12);
        }
        else {
          if ((1 < *(byte *)(param_4 + 1 + (longlong)(int)(uVar10 * 10))) ||
             ((*(byte *)(param_4 + 1 + (longlong)(int)(uVar6 * 10)) & 0xfd) != 0)) {
            bVar5 = *(byte *)(param_4 + 1 + (ulonglong)uVar6 * 2);
            local_b8 = pfVar2[uVar11 + 3];
            local_b0 = (uint)bVar5;
            local_c0 = (float *)CONCAT44(local_c0._4_4_,pfVar2[uVar11 + 1]);
            local_d8 = (uint)*(byte *)(param_4 + 1 + (uVar9 * 2 & 0xffffffff));
            local_d0 = fVar3;
            local_c8 = fVar15;
            local_a8 = param_5;
            FUN_147a3e1e7(uVar8,bVar5,pfVar2[uVar8 + 2],pfVar2[uVar8 + 4]);
            goto LAB_1434b7b1a;
          }
          fVar15 = pfVar2[uVar8 + 2] * fVar14 * 0.33333334 + fVar12;
          fVar14 = fVar3 - fVar14 * 0.33333334 * pfVar2[uVar11 + 1];
          fVar16 = (fVar14 - fVar15) * fVar13 + fVar15;
          fVar12 = (fVar15 - fVar12) * fVar13 + fVar12;
          fVar12 = (fVar16 - fVar12) * fVar13 + fVar12;
          fVar12 = (((((fVar3 - fVar14) * fVar13 + fVar14) - fVar16) * fVar13 + fVar16) - fVar12) *
                   fVar13 + fVar12;
        }
      }
    }
    fVar12 = fVar12 + local_74;
  }
LAB_1434b7bd7:
  if ((local_70 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(fVar12);
}



// FUNCTION 1434b7c7c FUN_1434b7c7c body=298 status=ok
// SIG undefined FUN_1434b7c7c(void)

void FUN_1434b7c7c(float param_1,undefined8 *param_2,longlong param_3,int param_4,int param_5,
                  int param_6,int param_7,float *param_8)

{
  float fVar1;
  float fVar2;
  undefined1 auStack_68 [32];
  uint local_48;
  float local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  fVar1 = (float)*(ushort *)*param_2 * 1.5259022e-05 * *(float *)((longlong)param_2 + 0xc) +
          *(float *)(param_2 + 1);
  fVar2 = (float)((ushort *)*param_2)[(longlong)param_4 + -1] * 1.5259022e-05 *
          *(float *)((longlong)param_2 + 0xc) + *(float *)(param_2 + 1);
  local_48 = 0;
  local_44 = param_1;
  FUN_1434b62ee(fVar1,fVar2);
  if (param_5 == 2) {
    if ((local_48 & 0x80000001) == 1) {
      local_44 = fVar1 + (fVar2 - local_44);
    }
  }
  else if (param_5 == 1) {
    *param_8 = (float)(int)local_48 *
               (*(float *)(*(longlong *)(param_3 + 8) + (longlong)(param_6 * 5) * 4) -
               *(float *)(*(longlong *)(param_3 + 8) + (longlong)(param_7 * 5) * 4));
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_44);
}



// FUNCTION 1434b7da8 FUN_1434b7da8 body=954 status=ok
// SIG undefined FUN_1434b7da8(void)

void FUN_1434b7da8(uint param_1,uint param_2,int param_3,longlong param_4,float param_5)

{
  longlong lVar1;
  float fVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  float *pfVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_f8 [32];
  uint local_d8;
  float local_d0;
  float local_c8;
  float *local_c0;
  float local_b8;
  uint local_b0;
  float local_a8;
  longlong local_98;
  float *local_90;
  longlong local_88;
  int local_80;
  float local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar6 = (longlong)(param_3 * 2 + 3) & 0xfffffffffffffffc;
  lVar1 = param_4 + uVar6;
  local_80 = (int)uVar6 + param_3 * 4;
  pfVar11 = (float *)(local_80 + param_4);
  local_74 = 0.0;
  local_98 = param_4;
  local_90 = pfVar11;
  local_88 = lVar1;
  if (param_5 < *(float *)(param_4 + uVar6)) {
    if (param_1 - 5 < 0xfffffffe) {
      local_c8 = (float)(param_3 + -1);
      local_c0 = &local_74;
      local_d0 = 0.0;
      local_d8 = param_1;
      param_5 = (float)FUN_1434b816b(param_5,&local_88,&local_98,param_3);
      goto LAB_1434b7e83;
    }
    fVar12 = *pfVar11;
    if (param_1 != 3) goto LAB_1434b80c6;
    fVar14 = *(float *)(lVar1 + 4) - *(float *)(param_4 + uVar6);
joined_r0x0001434b7f9c:
    if (1e-08 < ABS(fVar14)) {
LAB_1434b8009:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_f8);
    }
  }
  else {
LAB_1434b7e83:
    fVar12 = (float)(param_3 + -1);
    fVar14 = *(float *)(lVar1 + (longlong)(int)fVar12 * 4);
    if (fVar14 < param_5) {
      if (0xfffffffd < param_2 - 5) {
        fVar12 = pfVar11[(int)fVar12 * 5];
        if (param_2 != 3) goto LAB_1434b80c6;
        fVar14 = *(float *)(lVar1 + (longlong)(param_3 + -2) * 4) - fVar14;
        goto joined_r0x0001434b7f9c;
      }
      local_c0 = &local_74;
      local_c8 = 0.0;
      local_d8 = param_2;
      local_d0 = fVar12;
      param_5 = (float)FUN_1434b816b(param_5,&local_88,&local_98,param_3);
    }
    uVar5 = 1;
    if (2 < param_3) {
      uVar9 = param_3 - 2;
      uVar5 = 1;
      do {
        uVar7 = uVar9 >> 1;
        if (*(float *)(lVar1 + (ulonglong)(uVar7 + uVar5) * 4) <= param_5) {
          uVar5 = uVar5 + uVar7 + 1;
          uVar7 = uVar9 + ~uVar7;
        }
        uVar9 = uVar7;
      } while (0 < (int)uVar9);
    }
    uVar9 = uVar5 - 1;
    uVar8 = (ulonglong)uVar9;
    fVar14 = *(float *)(lVar1 + uVar8 * 4);
    fVar13 = *(float *)(lVar1 + (ulonglong)uVar5 * 4);
    fVar15 = fVar13 - fVar14;
    uVar6 = (ulonglong)(uVar9 * 5);
    fVar12 = pfVar11[uVar6];
    if ((0.0 < fVar15) && (cVar3 = *(char *)(param_4 + uVar8 * 2), cVar3 != '\x01')) {
      uVar10 = (ulonglong)(uVar5 * 5);
      fVar2 = pfVar11[uVar10];
      fVar14 = (param_5 - fVar14) / fVar15;
      if (cVar3 == '\x02') {
        fVar12 = fVar12 + fVar14 * (fVar2 - fVar12);
      }
      else {
        if ((1 < *(byte *)(param_4 + 1 + (longlong)(int)(uVar9 * 10))) ||
           ((*(byte *)(param_4 + 1 + (longlong)(int)(uVar5 * 10)) & 0xfd) != 0)) {
          bVar4 = *(byte *)(param_4 + 1 + (ulonglong)uVar5 * 2);
          local_b8 = pfVar11[uVar10 + 3];
          local_b0 = (uint)bVar4;
          local_c0 = (float *)CONCAT44(local_c0._4_4_,pfVar11[uVar10 + 1]);
          local_d8 = (uint)*(byte *)(param_4 + 1 + (uVar8 * 2 & 0xffffffff));
          local_d0 = fVar2;
          local_c8 = fVar13;
          local_a8 = param_5;
          FUN_147a3e1e7(uVar6,bVar4,pfVar11[uVar6 + 2],pfVar11[uVar6 + 4]);
          goto LAB_1434b8009;
        }
        fVar13 = pfVar11[uVar6 + 2] * fVar15 * 0.33333334 + fVar12;
        fVar15 = fVar2 - fVar15 * 0.33333334 * pfVar11[uVar10 + 1];
        fVar16 = (fVar15 - fVar13) * fVar14 + fVar13;
        fVar12 = (fVar13 - fVar12) * fVar14 + fVar12;
        fVar12 = (fVar16 - fVar12) * fVar14 + fVar12;
        fVar12 = (((((fVar2 - fVar15) * fVar14 + fVar15) - fVar16) * fVar14 + fVar16) - fVar12) *
                 fVar14 + fVar12;
      }
    }
    fVar12 = fVar12 + local_74;
  }
LAB_1434b80c6:
  if ((local_70 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(fVar12);
}



// FUNCTION 1434b816b FUN_1434b816b body=244 status=ok
// SIG undefined FUN_1434b816b(void)

void FUN_1434b816b(float param_1,undefined8 *param_2,longlong param_3,int param_4,int param_5,
                  int param_6,int param_7,float *param_8)

{
  float fVar1;
  float fVar2;
  undefined1 auStack_68 [32];
  uint local_48;
  float local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  fVar1 = *(float *)*param_2;
  fVar2 = ((float *)*param_2)[(longlong)param_4 + -1];
  local_48 = 0;
  local_44 = param_1;
  FUN_1434b62ee(fVar1,fVar2);
  if (param_5 == 2) {
    if ((local_48 & 0x80000001) == 1) {
      local_44 = fVar1 + (fVar2 - local_44);
    }
  }
  else if (param_5 == 1) {
    *param_8 = (float)(int)local_48 *
               (*(float *)(*(longlong *)(param_3 + 8) + (longlong)(param_6 * 5) * 4) -
               *(float *)(*(longlong *)(param_3 + 8) + (longlong)(param_7 * 5) * 4));
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_44);
}



// FUNCTION 1434b8460 FUN_1434b8460 body=207 status=ok
// SIG undefined FUN_1434b8460(void)

void FUN_1434b8460(undefined1 *param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  ushort uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  uVar11 = (longlong)((int)param_2 + 1) & 0xfffffffffffffffe;
  uVar9 = (param_2 << 0x21) + 0x300000000 + (uVar11 << 0x20) & 0xfffffffc00000000;
  lVar8 = (longlong)uVar9 >> 0x20;
  bVar4 = *(byte *)(param_3 + param_4);
  uVar7 = 3;
  if (bVar4 < 6) {
    uVar7 = (undefined1)(0x20302000103 >> ((bVar4 & 7) << 3));
  }
  lVar10 = ((longlong)(uVar9 + 0x800000000) >> 0x20) + param_3;
  uVar1 = *(undefined4 *)(lVar10 + 8 + (longlong)(param_4 * 3) * 4);
  uVar5 = *(ushort *)(uVar11 + param_3 + (longlong)param_4 * 2);
  fVar2 = *(float *)(param_3 + 4 + lVar8);
  uVar6 = *(undefined8 *)(lVar10 + (longlong)(param_4 * 3) * 4);
  fVar3 = *(float *)(param_3 + lVar8);
  *param_1 = uVar7;
  *(undefined2 *)(param_1 + 1) = 0;
  *(float *)(param_1 + 4) = (float)uVar5 * 1.5259022e-05 * fVar2 + fVar3;
  *(undefined8 *)(param_1 + 8) = uVar6;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}



// FUNCTION 1434b85aa FUN_1434b85aa body=227 status=ok
// SIG undefined FUN_1434b85aa(void)

void FUN_1434b85aa(undefined1 *param_1,int param_2,longlong param_3,int param_4)

{
  byte *pbVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  ushort uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 uVar11;
  ulonglong uVar12;
  
  lVar8 = (longlong)param_2;
  pbVar1 = (byte *)(param_3 + (longlong)param_4 * 2);
  uVar6 = *(ushort *)(pbVar1 + lVar8 * 2);
  uVar12 = (lVar8 << 0x21) + 0x300000000 + (lVar8 << 0x21) & 0xfffffffc00000000;
  bVar5 = *pbVar1;
  lVar8 = (longlong)uVar12 >> 0x20;
  uVar11 = 3;
  if (bVar5 < 6) {
    uVar11 = (undefined1)(0x20302000103 >> ((bVar5 & 7) << 3));
  }
  lVar10 = ((longlong)(uVar12 + 0x800000000) >> 0x20) + param_3;
  lVar9 = (longlong)(param_4 * 5);
  uVar2 = *(undefined4 *)(lVar10 + 8 + lVar9 * 4);
  fVar3 = *(float *)(param_3 + 4 + lVar8);
  uVar7 = *(undefined8 *)(lVar10 + lVar9 * 4);
  fVar4 = *(float *)(param_3 + lVar8);
  *param_1 = uVar11;
  *(float *)(param_1 + 4) = (float)uVar6 * 1.5259022e-05 * fVar3 + fVar4;
  *(undefined8 *)(param_1 + 8) = uVar7;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  param_1[1] = 1;
  param_1[2] = *(undefined1 *)(param_3 + 1 + (longlong)(param_4 * 2));
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(lVar10 + 0xc + lVar9 * 4);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(lVar10 + 0x10 + lVar9 * 4);
  return;
}



// FUNCTION 1434b868e FUN_1434b868e body=156 status=ok
// SIG undefined FUN_1434b868e(void)

void FUN_1434b868e(undefined1 *param_1,int param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  bVar3 = *(byte *)(param_3 + (longlong)param_4 * 2);
  uVar5 = 3;
  if (bVar3 < 6) {
    uVar5 = (undefined1)(0x20302000103 >> ((bVar3 & 7) << 3));
  }
  uVar7 = (longlong)(param_2 * 2 + 3) & 0xfffffffffffffffc;
  lVar6 = ((int)uVar7 + param_2 * 4) + param_3;
  lVar8 = (longlong)(param_4 * 5);
  uVar1 = *(undefined4 *)(lVar6 + 8 + lVar8 * 4);
  uVar4 = *(undefined8 *)(lVar6 + lVar8 * 4);
  uVar2 = *(undefined4 *)(uVar7 + param_3 + (longlong)param_4 * 4);
  *param_1 = uVar5;
  *(undefined4 *)(param_1 + 4) = uVar2;
  *(undefined8 *)(param_1 + 8) = uVar4;
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  param_1[1] = 1;
  param_1[2] = *(undefined1 *)(param_3 + 1 + (longlong)(param_4 * 2));
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(lVar6 + 0xc + lVar8 * 4);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(lVar6 + 0x10 + lVar8 * 4);
  return;
}



// FUNCTION 1434b872a FUN_1434b872a body=346 status=ok
// SIG undefined FUN_1434b872a(void)

void FUN_1434b872a(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  bool bVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  
  iVar1 = (int)param_1[1];
  lVar12 = (longlong)iVar1;
  if (lVar12 != 0) {
    plVar2 = (longlong *)*param_1;
    lVar5 = *(longlong *)*param_2;
    if ((lVar5 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar5);
    }
    iVar6 = 0;
    iVar9 = 0;
    bVar7 = *plVar2 == lVar5;
    do {
      lVar8 = (longlong)iVar9;
      iVar10 = iVar9;
      lVar5 = lVar8;
      iVar4 = iVar9 + 1;
      if (iVar9 + 1 < iVar1) {
        iVar4 = iVar1;
      }
      do {
        lVar5 = lVar5 + 1;
        iVar11 = iVar4;
        if (lVar12 <= lVar5) break;
        lVar3 = *(longlong *)*param_2;
        if ((lVar3 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar3);
        }
        iVar11 = iVar10 + 1;
        iVar10 = iVar11;
      } while (bVar7 == (plVar2[lVar5] == lVar3));
      if (bVar7 == false) {
        if (iVar6 != iVar9) {
          memmove(plVar2 + iVar6,plVar2 + lVar8,(longlong)(iVar11 - iVar9) << 3);
        }
        iVar6 = iVar6 + (iVar11 - iVar9);
      }
      iVar9 = iVar11;
      bVar7 = (bool)(bVar7 ^ 1);
    } while (lVar5 < lVar12);
    *(int *)(param_1 + 1) = iVar6;
  }
  return;
}



// FUNCTION 1434b8884 FUN_1434b8884 body=61 status=ok
// SIG undefined FUN_1434b8884(void)

void FUN_1434b8884(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  *puVar1 = FUN_146efe1bf;
  puVar1[1] = FUN_1434b8884;
  FUN_146efe1f2(puVar1 + 2,param_1);
  return;
}



// FUNCTION 1434b88c2 FUN_1434b88c2 body=138 status=ok
// SIG undefined FUN_1434b88c2(void)

void FUN_1434b88c2(longlong *param_1,int param_2,int param_3)

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



// FUNCTION 1434b894c FUN_1434b894c body=42 status=ok
// SIG undefined FUN_1434b894c(void)

void FUN_1434b894c(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0xffffffffffffffff;
    *(undefined4 *)(param_1 + 4) = 0;
    param_1 = param_1 + 5;
  }
  return;
}



// FUNCTION 1434b8976 FUN_1434b8976 body=5493 status=ok
// SIG undefined FUN_1434b8976(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434b8976(void)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  undefined **ppuStack_80;
  undefined8 local_78;
  undefined8 local_68;
  code *pcStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a89bc70,2,0);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cad3bf0,L"s.UseUnifiedTimeBudgetForStreaming",&DAT_14cad5900,
                L"Whether to use unified time budgets and logic for async loading and level streaming.\nIf 0 (current default), cvars like s.AsyncLoadingTimeLimit and s.LevelStreamingActorsUpdateTimeLimit will separately control each phase and can be modified by game-specific code.\nIf 1, the time budgets are added together in GetUnifiedTimeBudgetForStreaming, and asset streaming will run immediately before level streaming with a shared budget."
               );
  atexit(FUN_1434a6cd4);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cad3c00,L"s.UseBackgroundLevelStreaming",&DAT_14c761470,
                L"Whether to allow background level streaming. If this is 0, all level loading will block the game thread until it completes."
               );
  atexit(FUN_1434a6d19);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14cad3c10,L"s.AsyncLoadingTimeLimit",&DAT_14c76149c,
                L"Maximum amount of time to spend doing asynchronous asset loading (ms per frame).")
  ;
  atexit(FUN_1434a6d5e);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cad3c20,L"s.AsyncLoadingUseFullTimeLimit",&DAT_14cad5904,
                L"Whether to use the entire time limit for async asset loading even if blocked on I/O."
               );
  atexit(FUN_1434a6da3);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14cad3c30,L"s.PriorityAsyncLoadingExtraTime",&DAT_14c7614a0,
                L"Additional time to spend asynchronous loading during a high priority load.");
  atexit(FUN_1434a6de8);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14cad3c40,L"s.LevelStreamingActorsUpdateTimeLimit",&DAT_14c7614a8,
                L"Maximum allowed time to spend for actor registration steps during level streaming (ms per frame)."
               );
  atexit(FUN_1434a6e2d);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14cad3c50,L"s.PriorityLevelStreamingActorsUpdateExtraTime",&DAT_14c7614a4,
                L"Additional time to spend on actor registration steps during a high priority load."
               );
  atexit(FUN_1434a6e72);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14cad3c60,L"s.UnregisterComponentsTimeLimit",&DAT_14c7614b8,
                L"Maximum allowed time to spend for actor unregistration steps during level streaming (ms per frame). If this is zero then we don\'t timeslice"
               );
  atexit(FUN_1434a6eb7);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cad3c70,L"s.LevelStreamingComponentsRegistrationGranularity",&DAT_14c7614b0,
                L"Batching granularity used to register actor components during level streaming.");
  atexit(FUN_1434a6efc);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cad3c80,L"s.LevelStreamingAddPrimitiveGranularity",&DAT_14c7614ac,
                L"Batching granularity used to add primitives to scene in parallel when registering actor components during level streaming."
               );
  atexit(FUN_1434a6f41);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cad3c90,L"s.LevelStreamingComponentsUnregistrationGranularity",&DAT_14c7614bc
                ,
                L"Batching granularity used to unregister actor components during level unstreaming."
               );
  atexit(FUN_1434a6f86);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cad3ca0,L"s.LevelStreamingRouteActorInitializationGranularity",&DAT_14c7614b4
                ,
                L"Batching granularity used to initialize actors during level streaming. If this is zero, we process all actors and stages in one pass."
               );
  atexit(FUN_1434a6fcb);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cad3cb0,L"s.LevelStreamingRouteActorEndPlayForRemoveFromWorldGranularity",
                &DAT_14cad590c,
                L"Batching granularity used to call EndPlay on actors when removing streaming level. If this is zero, we process all actors in one pass."
               );
  atexit(FUN_1434a7010);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cad3cc0,L"s.ForceGCAfterLevelStreamedOut",&DAT_14c7614c8,
                L"Whether to force a GC after levels are streamed out to instantly reclaim the memory at the expensive of a hitch."
               );
  atexit(FUN_1434a7055);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cad3cd0,L"s.ForceVerifyLevelsGotRemovedByGC",&DAT_14cad3be8,
                L"Whether to force a verification of objects residing in a GC\'ed level package (ignored in shipping builds)."
               );
  atexit(FUN_1434a709a);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cad3ce0,L"s.ForceRouteActorInitializeNextFrame",&DAT_14cad5908,
                L"Whether to force routing actor initialize phase in its own frame.");
  atexit(FUN_1434a70df);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cad3cf0,L"s.ContinuouslyIncrementalGCWhileLevelsPendingPurge",&DAT_14c7614c0,
                L"Whether to repeatedly kick off incremental GC when there are levels still waiting to be purged."
               );
  atexit(FUN_1434a7124);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cad3d00,L"s.AllowLevelRequestsWhileAsyncLoadingInMatch",&DAT_14c7614cc,
                L"Enables level streaming requests while async loading (of anything) while the match is already in progress and no loading screen is up."
               );
  atexit(FUN_1434a7169);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cad3d10,L"s.MaxLevelRequestsAtOnceWhileInMatch",&DAT_14cad5910,
                L"When we\'re already loading this many levels and actively in match, don\'t allow any more requests until one of those completes.  Set to zero to disable."
               );
  atexit(FUN_1434a71ae);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cad3d20,L"s.LevelStreamingLowMemoryPendingPurgeCount",&DAT_14c7614c4,
                L"When system is in low memory state, if the number of streaming levels to purge meets or exceeds this value, perform a \'soft\' GC."
               );
  atexit(FUN_1434a71f3);
  pcStack_60 = FUN_14612cd56;
  local_68 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cad3e48,&local_68);
  pcStack_60 = FUN_145dd2c96;
  local_68 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cad3f70,&local_68);
  pcStack_60 = FUN_145febed0;
  local_68 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cad4098,&local_68);
  local_68 = "SMInstance";
  pcStack_60 = (code *)CONCAT35(pcStack_60._5_3_,10);
  uVar2 = FUN_14001a6c0(&local_68,1);
  _DAT_14cad40a8 = (ulonglong)uVar2;
  FUN_1400b22c2(&local_68,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_68,&DAT_14cad40b0);
  if (cVar1 == '\0') {
    _DAT_14cad40b0 = 0;
    uRam000000014cad40b8 = 0;
  }
  if (local_68 != (char *)0x0) {
    FUN_1400020a8();
  }
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a89e660,2,&PTR_FUN_14a89e630);
  local_68 = (char *)0x364b4506a66b7b77;
  pcStack_60 = (code *)0x26be6cfb3b632f2;
  _DAT_14cad4108 = 0x364b4506a66b7b77;
  uRam000000014cad4110 = 0x26be6cfb3b632f2;
  FUN_141005458(&local_68,1,L"GbxFixup_ACullDistanceVolume_Version",0);
  atexit((_func_5014 *)&LAB_1434a725c);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a89ecf0,1,0);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a89f120,1,0);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a89f7d0,1,&PTR_FUN_14a89f7a0);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8a02c0,1,&PTR_FUN_14a8a0290);
  FUN_1446f470e(&DAT_14cad41d8,&DAT_149ebbc0e,1);
  FUN_1446f470e(&DAT_14cad41e0,&DAT_149ebbbea,1);
  FUN_1446f470e(&DAT_14cad41e8,&DAT_149e060e8,1);
  FUN_1446f470e(&DAT_14cad41f0,&DAT_149e71d50,1);
  FUN_1446f470e(&DAT_14cad41f8,L"GradientTexture",1);
  FUN_1446f470e(&DAT_14cad4200,L"GradientBias",1);
  FUN_1446f470e(&DAT_14cad4208,L"GradientScale",1);
  FUN_1446f470e(&DAT_14cad4210,L"GradientCount",1);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8a0e10,1,&PTR_FUN_14a8a0de0);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8a1480,1,&PTR_FUN_14a8a1450);
  FUN_1446f470e(&DAT_14cad4288,&DAT_149e25cc8,1);
  FUN_1446f470e(&DAT_14cad4290,&DAT_149e25ccc,1);
  FUN_1446f470e(&DAT_14cad4298,&DAT_149e25cd0,1);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a8a1570);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a8a1810);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a8a1940);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a8a1b70);
  _DAT_14cad4360 = 0;
  _DAT_14cad4370 = &PTR_LAB_14a8a8e60;
  _DAT_14cad4378 = &LAB_1434b5e74;
  _DAT_14cad4350 = FUN_1402a0a3a;
  _DAT_14cad43a0 = 0;
  _DAT_14cad43b0 = &PTR_LAB_14a8a8e60;
  _DAT_14cad43b8 = &LAB_1434b5e96;
  _DAT_14cad4390 = FUN_1402a0a3a;
  _DAT_14cad43e0 = 0;
  _DAT_14cad43f0 = &PTR_LAB_14a8a8e60;
  _DAT_14cad43f8 = &LAB_1434b5eb8;
  _DAT_14cad43d0 = FUN_1402a0a3a;
  _DAT_14cad4420 = 0;
  _DAT_14cad4430 = &PTR_LAB_14a8a8e60;
  _DAT_14cad4438 = &LAB_1434b5ebe;
  _DAT_14cad4410 = FUN_1402a0a3a;
  _DAT_14cad4460 = 0;
  _DAT_14cad4470 = &PTR_LAB_14a8a8e60;
  _DAT_14cad4478 = FUN_1434b5ec4;
  _DAT_14cad4450 = FUN_1402a0a3a;
  _DAT_14cad44a0 = 0;
  _DAT_14cad44b0 = &PTR_LAB_14a8a8e60;
  _DAT_14cad44b8 = FUN_1434b63c2;
  _DAT_14cad4490 = FUN_1402a0a3a;
  _DAT_14cad44e0 = 0;
  _DAT_14cad44f0 = &PTR_LAB_14a8a8e60;
  _DAT_14cad44f8 = FUN_1434b66cc;
  _DAT_14cad44d0 = FUN_1402a0a3a;
  _DAT_14cad4520 = 0;
  _DAT_14cad4530 = &PTR_LAB_14a8a8e60;
  _DAT_14cad4538 = FUN_1434b6b7a;
  _DAT_14cad4510 = FUN_1402a0a3a;
  _DAT_14cad4560 = 0;
  _DAT_14cad4570 = &PTR_LAB_14a8a8e60;
  _DAT_14cad4578 = FUN_1434b6f0e;
  _DAT_14cad4550 = FUN_1402a0a3a;
  _DAT_14cad45a0 = 0;
  _DAT_14cad45b0 = &PTR_LAB_14a8a8e60;
  _DAT_14cad45b8 = FUN_1434b7418;
  _DAT_14cad4590 = FUN_1402a0a3a;
  DAT_14cad45e0 = 0;
  DAT_14cad45f0 = &PTR_LAB_14a8a8e60;
  _DAT_14cad45f8 = FUN_1434b77f8;
  DAT_14cad45d0 = FUN_1402a0a3a;
  DAT_14cad4620 = 0;
  DAT_14cad4630 = &PTR_LAB_14a8a8e60;
  _DAT_14cad4638 = FUN_1434b7da8;
  DAT_14cad4610 = FUN_1402a0a3a;
  atexit(FUN_1434a764b);
  _DAT_14cad4660 = 0;
  _DAT_14cad4670 = &PTR_LAB_14a8a8e80;
  _DAT_14cad4678 = &LAB_1434b8260;
  _DAT_14cad4650 = FUN_147a4e19c;
  _DAT_14cad46a0 = 0;
  _DAT_14cad46b0 = &PTR_LAB_14a8a8e80;
  _DAT_14cad46b8 = &LAB_1434b827e;
  _DAT_14cad4690 = FUN_147a4e19c;
  _DAT_14cad46e0 = 0;
  _DAT_14cad46f0 = &PTR_LAB_14a8a8e80;
  _DAT_14cad46f8 = &LAB_1434b829c;
  _DAT_14cad46d0 = FUN_147a4e19c;
  _DAT_14cad4720 = 0;
  _DAT_14cad4730 = &PTR_LAB_14a8a8e80;
  _DAT_14cad4738 = &LAB_1434b82ba;
  _DAT_14cad4710 = FUN_147a4e19c;
  _DAT_14cad4760 = 0;
  _DAT_14cad4770 = &PTR_LAB_14a8a8e80;
  _DAT_14cad4778 = &LAB_1434b82d8;
  _DAT_14cad4750 = FUN_147a4e19c;
  _DAT_14cad47a0 = 0;
  _DAT_14cad47b0 = &PTR_LAB_14a8a8e80;
  _DAT_14cad47b8 = &LAB_1434b8354;
  _DAT_14cad4790 = FUN_147a4e19c;
  _DAT_14cad47e0 = 0;
  _DAT_14cad47f0 = &PTR_LAB_14a8a8e80;
  _DAT_14cad47f8 = &LAB_1434b838c;
  _DAT_14cad47d0 = FUN_147a4e19c;
  _DAT_14cad4820 = 0;
  _DAT_14cad4830 = &PTR_LAB_14a8a8e80;
  _DAT_14cad4838 = &LAB_1434b841a;
  _DAT_14cad4810 = FUN_147a4e19c;
  _DAT_14cad4860 = 0;
  _DAT_14cad4870 = &PTR_LAB_14a8a8e80;
  _DAT_14cad4878 = FUN_1434b8460;
  _DAT_14cad4850 = FUN_147a4e19c;
  _DAT_14cad48a0 = 0;
  _DAT_14cad48b0 = &PTR_LAB_14a8a8e80;
  _DAT_14cad48b8 = &LAB_1434b8530;
  _DAT_14cad4890 = FUN_147a4e19c;
  DAT_14cad48e0 = 0;
  DAT_14cad48f0 = &PTR_LAB_14a8a8e80;
  _DAT_14cad48f8 = FUN_1434b85aa;
  DAT_14cad48d0 = FUN_147a4e19c;
  DAT_14cad4920 = 0;
  DAT_14cad4930 = &PTR_LAB_14a8a8e80;
  _DAT_14cad4938 = FUN_1434b868e;
  DAT_14cad4910 = FUN_147a4e19c;
  atexit(FUN_1434a7688);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a8a1de0);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a8a2030);
  local_78 = 1;
  ppuStack_80 = &PTR_FUN_14a8a25a0;
  local_88 = 1;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8a25f0,1,&PTR_FUN_14a8a25c0);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cad49f8,L"CurveTable.RemoveRedundantKeys",&DAT_14c76147c,&DAT_149dfb77a);
  atexit(FUN_1434a76fc);
  DAT_14cad4a28 = 0;
  _DAT_14cad4a30 = 0;
  DAT_14cad4a08 = 0;
  _DAT_14cad4a10 = 0;
  _DAT_14cad4a34 = 0xffffffff00000080;
  DAT_14cad4a3c = 0;
  DAT_14cad4a48 = 0;
  DAT_14cad4a50 = 0;
  atexit(FUN_1434a7741);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14cad4a58);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14cad4a58,4000);
  atexit((_func_5014 *)&LAB_1434a776a);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8a2db0,1,0);
  local_68 = "AssetRegistry";
  pcStack_60 = (code *)CONCAT35(pcStack_60._5_3_,0xd);
  uVar2 = FUN_14001a6c0(&local_68,1);
  _DAT_14cad4ab0 = (ulonglong)uVar2;
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8a3470,2,0);
  local_68 = (char *)((ulonglong)local_68 & 0xffffffff00000000);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cad4ae8,L"net.Reliable.Debug",&local_68,
                L"Print all reliable bunches sent over the network\n 0: no print.\n 1: Print bunches as they are sent.\n 2: Print reliable bunch buffer each net update"
               );
  atexit(FUN_1434a7893);
  local_68._0_4_ = 0x1e;
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cad4b00,L"net.ProcessQueuedBunchesMillisecondLimit",&local_68,
                L"Time threshold for processing queued bunches. If it takes longer than this in a single frame, wait until the next frame to continue processing queued bunches. For unlimited time, set to 0."
               );
  atexit(FUN_1434a78d8);
  local_68 = (char *)CONCAT44(local_68._4_4_,8);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cad4b18,L"net.InstantReplayProcessQueuedBunchesMillisecondLimit",&local_68,
                L"Time threshold for processing queued bunches during instant replays. If it takes longer than this in a single frame, wait until the next frame to continue processing queued bunches. For unlimited time, set to 0."
               );
  atexit(FUN_1434a791d);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cad4b30,L"net.PartialBunchReliableThreshold",&DAT_14c761480,
                L"If a bunch is broken up into this many partial bunches are more, we will send it reliable even if the original bunch was not reliable. Partial bunches are atonmic and must all make it over to be used"
               );
  atexit(FUN_1434a7962);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cad4b40,L"net.SkipReplicatorForDestructionInfos",&DAT_14c761484,
                L"If enabled, skip creation of object replicator in SetChannelActor when we know there is no content payload and we\'re going to immediately destroy the actor."
               );
  atexit(FUN_1434a79a7);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cad4b50,L"net.MaxConstructedPartialBunchSizeBytes",&DAT_14c761488,
                L"The maximum size allowed for Partial Bunches.");
  atexit(FUN_1434a79ec);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14cad4b60,L"net.DormancyHysteresis",&DAT_14cad4b70,
                L"When > 0, represents the time we\'ll wait before letting a channel become fully dormant (in seconds). This can prevent churn when objects are going in and out of dormant more frequently than normal."
               );
  atexit(FUN_1434a7a31);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14cad4b78,L"net.QueuedBunchTimeoutSeconds",&DAT_14c76148c,
                L"Time in seconds to wait for queued bunches on a channel to flush before logging a warning."
               );
  atexit(FUN_1434a7a76);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cad4b88,L"net.ReplicateOnlyBeginPlay",&DAT_14cad58f8,
                L"Only allow property replication of actors that had BeginPlay called on them.");
  atexit(FUN_1434a7abb);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cad4b98,L"net.EnableNetInitialSubObjects",&DAT_14c761490,
                L"Enables new SubObjects to set bNetInitial to true to make sure all replicated properties are replicated."
               );
  atexit(FUN_1434a7b00);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cad4ba8,L"net.PushModelValidateSkipUpdate",&DAT_14cad4bb8,
                L"If enabled, detect when we thought we could skip an object replication based on push model state, but we sent data anyway."
               );
  atexit(FUN_1434a7b45);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cad4bc0,L"net.SkipDestroyNetStartupActorsOnChannelCloseDueToLevelUnloaded",
                &DAT_14c761491,
                L"Controls if Actor that is a NetStartUpActor assosciated with the channel is destroyed or not when we receive a channel close with ECloseReason::LevelUnloaded."
               );
  atexit(FUN_1434a7b8a);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14cad4bd0,L"net.QueuedBunchTimeFailsafeSeconds",&DAT_14c761494,
                L"Amount of time in seconds to wait with queued bunches before forcibly processing them all, ignoring the NetDriver\'s HasExceededIncomingBunchFrameProcessingTime."
               );
  atexit(FUN_1434a7bcf);
  FUN_140056680(&DAT_14cad4bf0,L"_ClassNetCache");
  atexit((_func_5014 *)&LAB_1434a878e);
  if (DAT_14cad5400 == '\0') {
    lVar3 = 0;
    do {
      *(undefined4 *)(&DAT_14cad4c00 + lVar3) = 0x49dfb77a;
      *(undefined4 *)(lVar3 + 0x14cad4c04) = 1;
      *(undefined4 *)(lVar3 + 0x14cad4c08) = 0x49dfb77a;
      *(undefined4 *)(lVar3 + 0x14cad4c0c) = 1;
      lVar3 = lVar3 + 0x10;
    } while (lVar3 != 0x800);
    DAT_14cad5400 = '\x01';
  }
  local_68 = (char *)0x0;
  pcStack_60 = (code *)((ulonglong)pcStack_60 & 0xffffffff00000000);
  FUN_1446efa72(&local_68,0,2,0x10);
  pcStack_60._0_4_ = 2;
  *(undefined ***)local_68 = &PTR_LAB_14a1e1a40;
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
  *(longlong *)((longlong)local_68 + 0x10) = lVar5;
  *(undefined ***)local_68 = &PTR_FUN_14a1e19d0;
  *(code **)((longlong)local_68 + 0x18) = FUN_1434b1887;
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14156bb80(&DAT_14cad5410,L"net.ListNetGUIDs",L"Lists NetGUIDs for actors",&local_68);
  if ((int)pcStack_60 == 0) {
LAB_1434b9a0c:
    if (local_68 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_68 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_68)(local_68,0);
    FUN_1446efa72(&local_68,0,0,0x10);
    pcStack_60._0_4_ = 0;
    goto LAB_1434b9a0c;
  }
  atexit(FUN_1434b193b);
  local_68 = (char *)0x0;
  pcStack_60._0_4_ = 0;
  FUN_1446efa72(&local_68,0,2,0x10);
  pcStack_60._0_4_ = 2;
  *(undefined ***)local_68 = &PTR_LAB_14a1e1a40;
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
  *(longlong *)((longlong)local_68 + 0x10) = lVar5;
  *(undefined ***)local_68 = &PTR_FUN_14a1e19d0;
  *(code **)((longlong)local_68 + 0x18) = FUN_1434b1980;
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14156bb80(&DAT_14cad5420,L"net.ListActorChannels",L"Lists open actor channels",&local_68);
  if ((int)pcStack_60 == 0) {
LAB_1434b9aea:
    if (local_68 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_68 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_68)(local_68,0);
    FUN_1446efa72(&local_68,0,0,0x10);
    pcStack_60._0_4_ = 0;
    goto LAB_1434b9aea;
  }
  atexit(FUN_1434b2131);
  local_68 = (char *)0x0;
  pcStack_60._0_4_ = 0;
  FUN_1446efa72(&local_68,0,2,0x10);
  pcStack_60._0_4_ = 2;
  *(undefined ***)local_68 = &PTR_LAB_14a1e1a40;
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
  *(longlong *)((longlong)local_68 + 0x10) = lVar5;
  *(undefined ***)local_68 = &PTR_FUN_14a1e19d0;
  *(code **)((longlong)local_68 + 0x18) = FUN_1434b2176;
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14156bb80(&DAT_14cad5430,L"net.DeleteDormantActor",L"Lists open actor channels",&local_68);
  if ((int)pcStack_60 != 0) {
    if (local_68 == (char *)0x0) goto LAB_1434b9bd6;
    (*(code *)**(undefined8 **)local_68)(local_68,0);
    FUN_1446efa72(&local_68,0,0,0x10);
    pcStack_60._0_4_ = 0;
  }
  if (local_68 != (char *)0x0) {
    FUN_1400020a8();
  }
LAB_1434b9bd6:
  atexit(FUN_1434b2342);
  local_78 = 1;
  ppuStack_80 = &PTR_FUN_14a8a5e70;
  local_88 = 1;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8a5ec0,2,&PTR_FUN_14a8a5e90);
  local_68._0_4_ = 2;
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cad54a8,L"net.MaxRPCPerNetUpdate",&local_68,
                L"Maximum number of unreliable multicast RPC calls allowed per net update, additional ones will be dropped"
               );
  atexit(FUN_1434b23be);
  local_68 = (char *)((ulonglong)local_68._4_4_ << 0x20);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cad54c0,L"net.DelayUnmappedRPCs",&local_68,
                L"If true delay received RPCs with unmapped object references until they are received or loaded, if false RPCs will execute immediately with null parameters. This can be used with net.AllowAsyncLoading to avoid null asset parameters during async loads."
               );
  atexit(FUN_1434b2403);
  FUN_140056680(&local_68,&DAT_149dfb77a);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_140f510cc(&DAT_14cad54d8,L"net.Replication.DebugProperty",&local_68,
                L"Debugs Replication of property by name, this should be set to the partial name of the property to debug"
               );
  if (local_68 != (char *)0x0) {
    FUN_1400020a8();
  }
  atexit(FUN_1434b2448);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cad54f0,L"net.RPC.Debug",&DAT_14cad58fc,
                L"Print all RPC bunches sent over the network\n 0: no print.\n 1: Print bunches as they are sent."
               );
  atexit(FUN_1434b248d);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cad5500,L"net.SupportFastArrayDelta",&DAT_14c761498,
                L"Whether or not Fast Array Struct Delta Serialization is enabled.");
  atexit(FUN_1434b24d2);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cad5518,L"net.PushModelSkipUndirtiedReplication",&DAT_14cad5510,
                L"When true, skip replicating any objects that we can safely see aren\'t dirty.");
  atexit(FUN_1434b2517);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cad5530,L"net.PushModelSkipUndirtiedFastArrays",&DAT_14cad5528,
                L"When true, include fast arrays when skipping objects that we can safely see aren\'t dirty."
               );
  atexit(FUN_1434b255c);
  DAT_14cad5540 = 0;
  _DAT_14cad5548 = 0;
  atexit((_func_5014 *)&LAB_1434b4261);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 3;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8a6f80,1,&PTR_FUN_14a8a6f00);
  uVar4 = FUN_145bdd13a(&DAT_14c950040);
  FUN_145bdd0b8(uVar4,FUN_1434b5846,2);
  DAT_14cad55f8 = 0;
  _DAT_14cad5600 = 0;
  DAT_14cad55d8 = 0;
  _DAT_14cad55e0 = 0;
  _DAT_14cad5604 = 0xffffffff00000080;
  DAT_14cad560c = 0;
  DAT_14cad5618 = 0;
  DAT_14cad5620 = 0;
  atexit(FUN_1434b5a91);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14cad55b0);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14cad55b0,4000);
  atexit((_func_5014 *)&LAB_1434b5aba);
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434b9eec FUN_1434b9eec body=535 status=ok
// SIG undefined FUN_1434b9eec(void)

undefined8 *
FUN_1434b9eec(undefined8 *param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  void *_Src;
  char cVar1;
  int iVar2;
  uint uVar3;
  short *psVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_a8 [32];
  undefined ***local_88;
  longlong local_78;
  ulonglong uStack_70;
  longlong local_68 [2];
  undefined **local_58;
  undefined2 local_50;
  void *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140056680(&local_48);
  local_50 = 0;
  local_58 = &PTR_FUN_149e98010;
  if (param_3 != 0) {
    cVar1 = FUN_147a54b5d(param_3);
    if (cVar1 != '\0') {
      if (*(int *)(param_3 + 0x30) == 1) {
        local_88 = &local_58;
        FUN_1434ba13b(param_2,param_3,param_4 + *(int *)(param_3 + 0x44),0x40);
      }
      else {
        iVar2 = *(int *)(param_2 + 1);
        uVar3 = iVar2 - 1;
        if (iVar2 == 0) {
          uVar3 = 0;
        }
        if (((1 < (int)uVar3) && (psVar4 = (short *)*param_2, *psVar4 == 0x28)) &&
           (uVar5 = (ulonglong)uVar3, psVar4[uVar5 - 1] == 0x29)) {
          if (uVar5 - 1 < uVar5) {
            uVar3 = (uint)(uVar5 - 1);
          }
          if (iVar2 == 0) {
            psVar4 = &DAT_149dfb77a;
          }
          FUN_14006620a(local_68,psVar4 + 1,uVar3 - 1);
          local_78 = 0;
          uStack_70 = 0;
          FUN_1403de9f2(local_68,&local_78,&DAT_149e06196,1);
          iVar2 = *(int *)(param_3 + 0x30);
          if (0 < iVar2) {
            lVar7 = 0;
            lVar6 = 0;
            do {
              if (lVar6 < (int)uStack_70) {
                local_88 = &local_58;
                FUN_1434ba13b(local_78 + lVar7,param_3,
                              *(int *)(param_3 + 0x34) * lVar6 + *(int *)(param_3 + 0x44) + param_4,
                              1);
                iVar2 = *(int *)(param_3 + 0x30);
              }
              lVar6 = lVar6 + 1;
              lVar7 = lVar7 + 0x10;
            } while (lVar6 < iVar2);
          }
          FUN_1447a1747(local_78,uStack_70 & 0xffffffff);
          if (local_78 != 0) {
            FUN_1400020a8();
          }
          if (local_68[0] != 0) {
            FUN_1400020a8();
          }
        }
      }
    }
  }
  _Src = local_48;
  *param_1 = 0;
  *(int *)(param_1 + 1) = local_40;
  if ((longlong)local_40 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,local_40,0);
    memcpy((void *)*param_1,_Src,(longlong)local_40 * 2);
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8(local_48);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434ba104 FUN_1434ba104 body=55 status=ok
// SIG undefined FUN_1434ba104(void)

void FUN_1434ba104(void)

{
  undefined8 uVar1;
  
  if (DAT_14cad5920 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cad5920 = FUN_14171c317(FUN_1463c292a,uVar1,L"EEvaluateCurveTableResult");
  }
  return;
}



// FUNCTION 1434ba13b FUN_1434ba13b body=1373 status=ok
// SIG undefined FUN_1434ba13b(void)

void FUN_1434ba13b(longlong *param_1,longlong *param_2,undefined8 param_3,uint param_4,
                  undefined *param_5)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ushort uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined *puVar14;
  undefined2 *puVar15;
  bool bVar16;
  bool bVar17;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined *local_88;
  code *local_80;
  uint local_74;
  undefined8 local_70;
  undefined2 *local_68;
  int local_60;
  longlong *local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar14 = (undefined *)param_2[1];
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9496d8) && (FUN_144b3d300(&DAT_14c9496d8), DAT_14c9496d8 == -1)) {
    local_88 = (undefined *)FUN_1446ddbd2();
    local_80 = FUN_140a4831c;
    local_98 = 0x1000000008001;
    local_90 = 0;
    FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
    atexit(FUN_1427e14fe);
    _Init_thread_footer(&DAT_14c9496d8);
  }
  if (DAT_14c949690 == 0) {
    bVar16 = puVar14 != (undefined *)0x0;
    if (puVar14 != &DAT_14c949688 && bVar16) {
      do {
        puVar14 = *(undefined **)(puVar14 + 0x30);
        bVar16 = puVar14 != (undefined *)0x0;
        if (puVar14 == &DAT_14c949688) break;
      } while (puVar14 != (undefined *)0x0);
    }
    if (bVar16) goto LAB_1434ba1aa;
LAB_1434ba1e8:
    puVar14 = (undefined *)param_2[1];
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951d78) && (FUN_144b3d300(&DAT_14c951d78), DAT_14c951d78 == -1)) {
      FUN_14475b26a();
      local_80 = FUN_1409f1a5c;
      local_88 = &DAT_14c9520b8;
      local_90 = 0;
      local_98 = 0x1008041;
      FUN_14000176a(&DAT_14c951d28,L"FByteProperty",0x40,0);
      atexit(FUN_14281201f);
      _Init_thread_footer(&DAT_14c951d78);
    }
    if (DAT_14c951d30 == 0) {
      bVar16 = puVar14 != (undefined *)0x0;
      if (puVar14 != &DAT_14c951d28 && bVar16) {
        do {
          puVar14 = *(undefined **)(puVar14 + 0x30);
          bVar16 = puVar14 != (undefined *)0x0;
          if (puVar14 == &DAT_14c951d28) break;
        } while (puVar14 != (undefined *)0x0);
      }
      if (bVar16) {
LAB_1434ba25b:
        lVar10 = (**(code **)(*param_2 + 0x1f0))(param_2);
        if (lVar10 != 0) {
          plVar6 = (longlong *)(**(code **)(*param_2 + 0x1f0))(param_2);
          goto LAB_1434ba27b;
        }
      }
    }
    else if ((*(ulonglong *)(puVar14 + 0x18) & DAT_14c951d30) != 0) goto LAB_1434ba25b;
  }
  else {
    if ((*(ulonglong *)(puVar14 + 0x18) & DAT_14c949690) == 0) goto LAB_1434ba1e8;
LAB_1434ba1aa:
    plVar6 = (longlong *)param_2[0xf];
LAB_1434ba27b:
    if (((plVar6 != (longlong *)0x0) && (iVar3 = FUN_1401e9588(plVar6,param_1,0), iVar3 == -1)) &&
       (0 < (int)plVar6[9])) {
      local_74 = param_4 | 0x8000000;
      bVar16 = true;
      iVar3 = 0;
      local_70 = param_3;
      do {
        (**(code **)(*plVar6 + 0x2b0))(plVar6,local_58);
        plVar7 = local_58[0];
        if (*(code **)(*local_58[0] + 0x50) != FUN_144828418) {
          plVar7 = (longlong *)(**(code **)(*local_58[0] + 0x50))();
        }
        FUN_1447a1fc0(plVar7);
        pcVar1 = *(code **)(*local_58[0] + 0x28);
        if (pcVar1 == FUN_14482841c) {
          plVar7 = local_58[0] + 3;
          if (local_58[0][5] != 0) {
            plVar7 = (longlong *)(local_58[0][5] + 8);
          }
        }
        else if (pcVar1 == (code *)&LAB_14010c34c) {
          plVar7 = local_58[0] + 2;
        }
        else {
          plVar7 = (longlong *)(*pcVar1)(local_58[0]);
        }
        iVar5 = (int)plVar7[1];
        if (iVar5 == (int)param_1[1]) {
          if (1 < iVar5) {
            lVar10 = 0;
            while( true ) {
              uVar8 = *(ushort *)(*plVar7 + lVar10);
              uVar9 = (ulonglong)uVar8;
              uVar11 = *(ushort *)(*param_1 + lVar10);
              if (uVar8 != uVar11) break;
              if (uVar8 == 0) goto LAB_1434ba420;
LAB_1434ba3de:
              lVar10 = lVar10 + 2;
            }
            if ((uVar11 | uVar8) < 0x80) {
              uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
              uVar13 = (ulonglong)uVar11;
              uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
              if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar13]) goto LAB_1434ba3de;
            }
            if (uVar8 != uVar11) goto LAB_1434ba4cb;
          }
LAB_1434ba420:
          FUN_1401cfb1c(plVar6,&local_68,iVar3);
          FUN_1414cc200();
          puVar15 = &DAT_149dfb77a;
          if (local_60 != 0) {
            puVar15 = local_68;
          }
          cVar2 = FUN_140d50488(param_2,param_4,param_5);
          if ((cVar2 != '\0') && (puVar15 != (undefined2 *)0x0)) {
            local_88 = param_5;
            local_90 = CONCAT44(local_90._4_4_,local_74);
            local_98 = 0;
            (**(code **)(*param_2 + 0xf8))(param_2,puVar15,local_70,0);
          }
          if (local_68 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          bVar17 = true;
          bVar16 = false;
        }
        else {
          if ((int)param_1[1] + iVar5 == 1) goto LAB_1434ba420;
LAB_1434ba4cb:
          FUN_147a54af3(&local_68,local_58);
          if (local_60 == (int)param_1[1]) {
            bVar17 = true;
            if (1 < local_60) {
              lVar10 = 0;
              while( true ) {
                uVar8 = *(ushort *)((longlong)local_68 + lVar10);
                uVar4 = (uint)uVar8;
                uVar11 = *(ushort *)(*param_1 + lVar10);
                uVar12 = (uint)uVar11;
                if (uVar8 != uVar11) {
                  if ((uVar11 | uVar8) < 0x80) {
                    uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar8];
                    uVar12 = (uint)(byte)(&DAT_149e05da0)[uVar11];
                    if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar11]) goto LAB_1434ba50d;
                  }
                  iVar5 = uVar4 - uVar12;
                  goto LAB_1434ba54f;
                }
                if (uVar8 == 0) break;
LAB_1434ba50d:
                lVar10 = lVar10 + 2;
              }
              iVar5 = 0;
LAB_1434ba54f:
              bVar17 = iVar5 == 0;
            }
          }
          else {
            bVar17 = (int)param_1[1] + local_60 == 1;
          }
          if (local_68 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          if (bVar17) goto LAB_1434ba420;
          bVar17 = false;
        }
        if (local_58[0] != (longlong *)0x0) {
          (**(code **)(*local_58[0] + 0x10))();
        }
      } while ((!bVar17) && (iVar3 = iVar3 + 1, iVar3 < (int)plVar6[9]));
      param_3 = local_70;
      if (!bVar16) goto LAB_1434ba2f0;
    }
  }
  if ((int)param_1[1] == 0) {
    puVar15 = &DAT_149dfb77a;
  }
  else {
    puVar15 = (undefined2 *)*param_1;
  }
  cVar2 = FUN_140d50488(param_2,param_4,param_5);
  if (puVar15 != (undefined2 *)0x0 && cVar2 == '\x01') {
    local_88 = param_5;
    local_90 = CONCAT44(local_90._4_4_,param_4) | 0x8000000;
    local_98 = 0;
    (**(code **)(*param_2 + 0xf8))(param_2,puVar15,param_3,0);
  }
LAB_1434ba2f0:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1434ba69a FUN_1434ba69a body=746 status=ok
// SIG undefined FUN_1434ba69a(void)

void FUN_1434ba69a(longlong *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  undefined8 uVar6;
  undefined1 auStack_278 [32];
  undefined4 local_258;
  undefined8 *local_250;
  undefined1 *local_248;
  double local_238;
  double local_230;
  double local_228;
  undefined1 local_220 [4];
  undefined4 local_21c;
  undefined4 local_17c;
  undefined4 local_150;
  undefined4 local_120 [2];
  undefined4 local_118;
  double local_108;
  double local_100;
  double local_f8;
  undefined8 local_f0;
  longlong lStack_e8;
  undefined1 local_e0;
  undefined2 local_df;
  undefined1 local_dd;
  undefined2 local_dc;
  undefined1 local_da;
  undefined2 local_d9;
  undefined4 local_d4;
  undefined1 local_d0;
  undefined4 local_cc;
  undefined2 local_c8;
  longlong local_a0;
  undefined8 local_98;
  undefined4 local_90;
  longlong local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_278;
  (**(code **)(*param_1 + 0x718))(param_1,&local_108,local_120);
  memset(local_220,0,0x100);
  local_150 = 0xffffffff;
  local_21c = 0x3f800000;
  local_17c = 0xffffffff;
  local_cc = 0;
  local_c8 = 0x101;
  local_a0 = 0;
  local_98 = 0x800000000;
  local_80 = 0;
  local_78 = 0x400000000;
  local_e0 = 1;
  local_d4 = 0;
  local_f0 = 0;
  lStack_e8 = 0;
  local_df = 1;
  local_dd = 0;
  local_d0 = 0;
  local_dc = 0;
  local_da = 0;
  if (param_1 != (longlong *)0x0) {
    local_90 = *(undefined4 *)((longlong)param_1 + 0xc);
    local_78 = 0x400000001;
    lStack_e8 = param_1[3];
  }
  local_d9 = 0x101;
  uVar6 = FUN_1447210f0(param_1);
  dVar3 = (double)FUN_144719204(local_120[0],0x4076800000000000);
  dVar4 = (double)FUN_144719204(local_118,0x4076800000000000);
  dVar1 = sin(dVar3 * 0.017453292519943295);
  dVar3 = cos(dVar3 * 0.017453292519943295);
  dVar2 = sin(dVar4 * 0.017453292519943295);
  dVar4 = cos(dVar4 * 0.017453292519943295);
  local_228 = dVar1 * 5000.0 * 20.0 + local_f8;
  local_230 = dVar2 * dVar3 * 5000.0 * 20.0 + local_100;
  local_238 = dVar4 * dVar3 * 5000.0 * 20.0 + local_108;
  local_248 = &DAT_14cad0f10;
  local_258 = 2;
  local_250 = &local_f0;
  cVar5 = FUN_1400b50cc(uVar6,local_220);
  if (cVar5 != '\0') {
    (**(code **)(*param_1 + 0xf48))(param_1,local_220);
  }
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if (local_a0 != 0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434ba986 FUN_1434ba986 body=520 status=ok
// SIG undefined FUN_1434ba986(void)

longlong * FUN_1434ba986(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong local_c8;
  undefined1 local_c0 [24];
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_1[0xf4] == 0) {
    cVar2 = (**(code **)(*param_1 + 0x6c8))(param_1);
    if (cVar2 != '\0') {
      lVar3 = FUN_1447210f0(param_1);
      lVar3 = *(longlong *)(lVar3 + 0x178);
      if (lVar3 != 0) {
        uStack_90 = 0;
        local_88 = 0;
        uStack_80 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        local_68 = 0;
        local_58 = (longlong *)0x0;
        local_78 = 0x4800000101;
        local_98 = param_1;
        uVar4 = FUN_1447210f0(param_1);
        (**(code **)(*param_1 + 0x680))(param_1,local_c0);
        local_c8 = param_1[0xf8];
        local_d8 = (undefined4)param_1[0xf6];
        uStack_d4 = *(undefined4 *)((longlong)param_1 + 0x7b4);
        uStack_d0 = (undefined4)param_1[0xf7];
        uStack_cc = *(undefined4 *)((longlong)param_1 + 0x7bc);
        lVar1 = *(longlong *)(lVar3 + 0x3a0);
        if (lVar1 == 0) {
LAB_1434baa85:
          uVar6 = FUN_140554cf2();
        }
        else {
          lVar5 = FUN_140554cf2();
          if ((((lVar5 == 0) || (*(int *)(lVar1 + 0x38) < *(int *)(lVar5 + 0x38))) ||
              (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
               lVar5 + 0x30)) || (lVar1 = *(longlong *)(lVar3 + 0x3a0), lVar1 == 0))
          goto LAB_1434baa85;
          lVar5 = FUN_140554cf2();
          if (((lVar5 == 0) || (*(int *)(lVar1 + 0x38) < *(int *)(lVar5 + 0x38))) ||
             (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
              lVar5 + 0x30)) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(undefined8 *)(lVar3 + 0x3a0);
          }
        }
        local_e8 = &local_a8;
        plVar7 = (longlong *)FUN_141137228(uVar4,uVar6,&local_d8,local_c0);
        if (plVar7 != (longlong *)0x0) {
          (**(code **)(*plVar7 + 0x6d0))(plVar7,param_1);
          (**(code **)(*plVar7 + 0x6f8))(plVar7);
          (**(code **)(*plVar7 + 0x6e8))(plVar7);
          if ((*(byte *)((longlong)plVar7 + 0x3a) & 4) != 0) {
            (**(code **)(*plVar7 + 0x400))(plVar7,1);
          }
        }
        if (local_68 != 0) {
          plVar8 = local_58;
          if (local_58 == (longlong *)0x0) {
            plVar8 = local_48;
          }
          (**(code **)(*plVar8 + 0x10))();
        }
        if (plVar7 != (longlong *)0x0) goto LAB_1434bab20;
      }
    }
  }
  plVar7 = (longlong *)FUN_14365039e(param_1);
LAB_1434bab20:
  if ((local_28 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return plVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434bab90 FUN_1434bab90 body=263 status=ok
// SIG undefined FUN_1434bab90(void)

void FUN_1434bab90(longlong *param_1,undefined8 param_2,int param_3,int param_4)

{
  longlong lVar1;
  undefined1 auStack_288 [32];
  undefined *local_268;
  longlong *local_258 [2];
  double local_248;
  double local_240;
  longlong local_238 [9];
  byte local_1f0;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined2 local_180;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_288;
  local_240 = (double)param_4;
  local_248 = (double)param_3;
  FUN_140009b9a(local_258);
  local_268 = &DAT_149e1dd24;
  FUN_140114bb6(local_238,&local_248,local_258,*(undefined8 *)(DAT_14cb0d2b0 + 0x58));
  if (local_258[0] != (longlong *)0x0) {
    (**(code **)(*local_258[0] + 0x10))();
  }
  local_1a0 = 0x3ff0000000000000;
  local_198 = 0x3ff0000000000000;
  local_1b0 = 0;
  uStack_1ac = 0;
  uStack_1a8 = 0;
  uStack_1a4 = 0x3f800000;
  local_1f0 = local_1f0 | 2;
  local_180 = 0x101;
  lVar1 = *(longlong *)(*param_1 + 0x2e0);
  (**(code **)(local_238[0] + 0x18))(local_238,lVar1);
  if (*(int *)(lVar1 + 0xac) == 1) {
    FUN_14376e4da(lVar1,0);
  }
  FUN_140b2399e(local_238);
  if ((local_20 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434bac98 FUN_1434bac98 body=103 status=ok
// SIG undefined FUN_1434bac98(void)

void FUN_1434bac98(void)

{
  uint uVar1;
  longlong lVar2;
  
  if (DAT_14cad6ba8 != 0) {
    return;
  }
  DAT_14cad6ba8 = FUN_147a66c7c(DAT_14c951640);
  uVar1 = *(uint *)(DAT_14cad6ba8 + 0xc);
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  else {
    lVar2 = 0;
  }
  FUN_1447f71cc(lVar2,0x40000000);
  FUN_147a58dca(DAT_14cad6ba8);
  return;
}



// FUNCTION 1434bacff FUN_1434bacff body=69 status=ok
// SIG undefined FUN_1434bacff(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434bacff(void)

{
  _DAT_14cad5a58 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434bad41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad5a60,1);
  return;
}



// FUNCTION 1434bad44 FUN_1434bad44 body=112 status=ok
// SIG undefined FUN_1434bad44(void)

void FUN_1434bad44(void)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = DAT_14cad6ba8;
  if (DAT_14cad6ba8 != 0) {
    if (*(longlong *)(DAT_14cad6ba8 + 0x40) != 0) {
      FUN_1414dc69c();
      *(undefined8 *)(lVar2 + 0x40) = 0;
    }
    uVar1 = *(uint *)(DAT_14cad6ba8 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar2 = 0;
    }
    FUN_14482b126(lVar2,0x40000000);
    DAT_14cad6ba8 = 0;
  }
  return;
}



// FUNCTION 1434badb4 FUN_1434badb4 body=69 status=ok
// SIG undefined FUN_1434badb4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434badb4(void)

{
  _DAT_14cad5a68 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434badf6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad5a70,1);
  return;
}



// FUNCTION 1434badf9 FUN_1434badf9 body=69 status=ok
// SIG undefined FUN_1434badf9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434badf9(void)

{
  _DAT_14cad5a78 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434bae3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad5a80,1);
  return;
}



// FUNCTION 1434bae46 FUN_1434bae46 body=667 status=ok
// SIG undefined FUN_1434bae46(void)

void FUN_1434bae46(longlong *param_1,longlong *param_2,undefined8 param_3,uint param_4,
                  undefined8 param_5)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  ulonglong uVar6;
  bool bVar7;
  undefined1 auStack_158 [32];
  uint local_138;
  undefined8 local_130;
  undefined8 *local_128;
  undefined8 *local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined4 local_dc;
  longlong local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  longlong local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_b0 = param_5;
  local_88 = 0;
  local_80 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_7c = 0xffffffff00000080;
  local_74 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  lVar3 = 0;
  if (*(int *)((longlong)param_1 + 900) != 0) {
    uVar1 = *(uint *)(param_1 + 0x70);
    lVar3 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar4 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar4 == (longlong *)0x0) ||
         (((int)plVar4[2] != *(int *)((longlong)param_1 + 900) ||
          ((*(uint *)(plVar4 + 1) & 0x10200000) != 0)))) {
        lVar3 = 0;
      }
      else {
        lVar3 = *plVar4;
      }
    }
  }
  local_118 = param_5;
  local_f0 = 0;
  local_e8 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_e4 = 0xffffffff00000080;
  local_dc = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0._0_4_ = 0;
  iVar2 = 0;
  uVar1 = (uint)local_c0;
  if (lVar3 != 0) {
    uVar1 = *(uint *)(lVar3 + 0xc);
    local_c0 = (ulonglong)uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    iVar2 = *(int *)(lVar3 + 0x10);
    if (*(int *)(lVar3 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar2 = *(int *)(lVar3 + 0x10);
      bVar7 = iVar2 == 0;
      if (bVar7) {
        *(int *)(lVar3 + 0x10) = iVar5;
        iVar2 = 0;
      }
      UNLOCK();
      uVar1 = (uint)local_c0;
      if (bVar7) {
        iVar2 = iVar5;
      }
    }
  }
  local_c0._0_4_ = uVar1;
  local_c0 = CONCAT44(iVar2,(uint)local_c0);
  local_b8 = 1;
  iVar2 = (int)param_2[1];
  if (0 < iVar2) {
    uVar6 = 0;
    do {
      if ((param_4 >> ((uint)uVar6 & 0x1f) & 1) != 0) {
        local_130 = param_5;
        local_138 = param_4;
        local_128 = &local_b0;
        local_120 = &local_118;
        (**(code **)(*param_1 + 0x240))
                  (param_1,*(undefined8 *)(*param_2 + uVar6 * 8),uVar6 & 0xffffffff,param_3);
        iVar2 = (int)param_2[1];
      }
      uVar6 = uVar6 + 1;
    } while ((longlong)uVar6 < (longlong)iVar2);
  }
  local_c8 = 0;
  if (local_d0 != 0) {
    FUN_1400020a8();
  }
  FUN_147a66d12(&local_110);
  local_60 = 0;
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  FUN_147a66d12(&local_a8);
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1434bb0e2 FUN_1434bb0e2 body=69 status=ok
// SIG undefined FUN_1434bb0e2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434bb0e2(void)

{
  _DAT_14cad5a90 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434bb124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad5a98,1);
  return;
}



// FUNCTION 1434bb135 FUN_1434bb135 body=49 status=ok
// SIG undefined FUN_1434bb135(void)

void FUN_1434bb135(void)

{
  FUN_1417c4f5e(DAT_14cad5b00,DAT_14cad5b08);
  if (DAT_14cad5b00 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1434bb177 FUN_1434bb177 body=55 status=ok
// SIG undefined FUN_1434bb177(void)

void FUN_1434bb177(void)

{
  undefined8 uVar1;
  
  if (DAT_14cad5b58 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cad5b58 = FUN_14171c317(FUN_1463c2eaf,uVar1,L"EReporterLineStyle");
  }
  return;
}



// FUNCTION 1434bb1ae FUN_1434bb1ae body=55 status=ok
// SIG undefined FUN_1434bb1ae(void)

void FUN_1434bb1ae(void)

{
  undefined8 uVar1;
  
  if (DAT_14cad5b88 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cad5b88 = FUN_14171c317(FUN_1463c2f34,uVar1,L"EGraphAxisStyle");
  }
  return;
}



// FUNCTION 1434bb1e5 FUN_1434bb1e5 body=55 status=ok
// SIG undefined FUN_1434bb1e5(void)

void FUN_1434bb1e5(void)

{
  undefined8 uVar1;
  
  if (DAT_14cad5ba0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cad5ba0 = FUN_14171c317(FUN_1463c2f63,uVar1,L"EGraphDataStyle");
  }
  return;
}



// FUNCTION 1434bb21c FUN_1434bb21c body=55 status=ok
// SIG undefined FUN_1434bb21c(void)

void FUN_1434bb21c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cad5bb8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cad5bb8 = FUN_14171c317(FUN_1463c2f92,uVar1,L"ELegendPosition");
  }
  return;
}



// FUNCTION 1434bb253 FUN_1434bb253 body=63 status=ok
// SIG undefined FUN_1434bb253(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434bb253(void)

{
  _DAT_14cad5c58 = &PTR_LAB_149e668b0;
  if ((DAT_14c948580 != 0) && (DAT_14cad5c61 == '\x01')) {
    FUN_14019e20a(DAT_14c948580,&DAT_14cad5c58);
    DAT_14cad5c61 = '\0';
  }
  return;
}



// FUNCTION 1434bb292 FUN_1434bb292 body=69 status=ok
// SIG undefined FUN_1434bb292(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434bb292(void)

{
  _DAT_14cad6ea0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434bb2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad6ea8,1);
  return;
}



// FUNCTION 1434bb2d7 FUN_1434bb2d7 body=69 status=ok
// SIG undefined FUN_1434bb2d7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434bb2d7(void)

{
  _DAT_14cad6e88 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434bb319. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad6e90,1);
  return;
}



// FUNCTION 1434bb31c FUN_1434bb31c body=69 status=ok
// SIG undefined FUN_1434bb31c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434bb31c(void)

{
  _DAT_14cad5cf0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434bb35e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad5cf8,1);
  return;
}



// FUNCTION 1434bb361 FUN_1434bb361 body=69 status=ok
// SIG undefined FUN_1434bb361(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434bb361(void)

{
  _DAT_14cad5d08 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434bb3a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad5d10,1);
  return;
}



// FUNCTION 1434bb3a6 FUN_1434bb3a6 body=69 status=ok
// SIG undefined FUN_1434bb3a6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434bb3a6(void)

{
  _DAT_14cad6eb8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434bb3e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad6ec0,1);
  return;
}



// FUNCTION 1434bb3eb FUN_1434bb3eb body=69 status=ok
// SIG undefined FUN_1434bb3eb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434bb3eb(void)

{
  _DAT_14cad5d20 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434bb42d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad5d28,1);
  return;
}



// FUNCTION 1434bb430 FUN_1434bb430 body=69 status=ok
// SIG undefined FUN_1434bb430(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434bb430(void)

{
  _DAT_14cad5d38 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434bb472. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad5d40,1);
  return;
}



// FUNCTION 1434bb475 FUN_1434bb475 body=69 status=ok
// SIG undefined FUN_1434bb475(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434bb475(void)

{
  _DAT_14cad5d50 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434bb4b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad5d58,1);
  return;
}



// FUNCTION 1434bb4ba FUN_1434bb4ba body=69 status=ok
// SIG undefined FUN_1434bb4ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434bb4ba(void)

{
  _DAT_14cad5d68 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434bb4fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad5d70,1);
  return;
}



// FUNCTION 1434bb4ff FUN_1434bb4ff body=69 status=ok
// SIG undefined FUN_1434bb4ff(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434bb4ff(void)

{
  _DAT_14cad5d80 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434bb541. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad5d88,1);
  return;
}



// FUNCTION 1434bb544 FUN_1434bb544 body=69 status=ok
// SIG undefined FUN_1434bb544(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434bb544(void)

{
  _DAT_14cad5d98 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434bb586. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad5da0,1);
  return;
}



// FUNCTION 1434bb589 FUN_1434bb589 body=69 status=ok
// SIG undefined FUN_1434bb589(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434bb589(void)

{
  _DAT_14cad6ed0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434bb5cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad6ed8,1);
  return;
}



// FUNCTION 1434bb5ce FUN_1434bb5ce body=69 status=ok
// SIG undefined FUN_1434bb5ce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434bb5ce(void)

{
  _DAT_14cad5db0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434bb610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad5db8,1);
  return;
}



// FUNCTION 1434bb613 FUN_1434bb613 body=69 status=ok
// SIG undefined FUN_1434bb613(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434bb613(void)

{
  _DAT_14cad6ee8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434bb655. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad6ef0,1);
  return;
}



// FUNCTION 1434bb658 FUN_1434bb658 body=69 status=ok
// SIG undefined FUN_1434bb658(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434bb658(void)

{
  _DAT_14cad6e58 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434bb69a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad6e60,1);
  return;
}



// FUNCTION 1434bb69d FUN_1434bb69d body=69 status=ok
// SIG undefined FUN_1434bb69d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434bb69d(void)

{
  _DAT_14cad5dc8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434bb6df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad5dd0,1);
  return;
}



// FUNCTION 1434bb6e2 FUN_1434bb6e2 body=69 status=ok
// SIG undefined FUN_1434bb6e2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434bb6e2(void)

{
  _DAT_14cad6e70 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434bb724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad6e78,1);
  return;
}



// FUNCTION 1434bb727 FUN_1434bb727 body=69 status=ok
// SIG undefined FUN_1434bb727(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434bb727(void)

{
  _DAT_14cad5de0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434bb769. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad5de8,1);
  return;
}



// FUNCTION 1434bb76c FUN_1434bb76c body=69 status=ok
// SIG undefined FUN_1434bb76c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434bb76c(void)

{
  _DAT_14cad5df8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434bb7ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad5e00,1);
  return;
}



// FUNCTION 1434bb7b1 FUN_1434bb7b1 body=69 status=ok
// SIG undefined FUN_1434bb7b1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434bb7b1(void)

{
  _DAT_14cad5e10 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434bb7f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad5e18,1);
  return;
}



// FUNCTION 1434bb7f6 FUN_1434bb7f6 body=69 status=ok
// SIG undefined FUN_1434bb7f6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434bb7f6(void)

{
  _DAT_14cad5e28 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434bb838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad5e30,1);
  return;
}



// FUNCTION 1434bb83b FUN_1434bb83b body=69 status=ok
// SIG undefined FUN_1434bb83b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434bb83b(void)

{
  _DAT_14cad5e40 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434bb87d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad5e48,1);
  return;
}



// FUNCTION 1434bb880 FUN_1434bb880 body=69 status=ok
// SIG undefined FUN_1434bb880(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434bb880(void)

{
  _DAT_14cad5e58 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434bb8c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad5e60,1);
  return;
}



// FUNCTION 1434bb8c5 FUN_1434bb8c5 body=69 status=ok
// SIG undefined FUN_1434bb8c5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434bb8c5(void)

{
  _DAT_14cad5e70 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434bb907. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad5e78,1);
  return;
}



// FUNCTION 1434bb90a FUN_1434bb90a body=69 status=ok
// SIG undefined FUN_1434bb90a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434bb90a(void)

{
  _DAT_14cad5e88 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434bb94c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad5e90,1);
  return;
}



// FUNCTION 1434bb94f FUN_1434bb94f body=69 status=ok
// SIG undefined FUN_1434bb94f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434bb94f(void)

{
  _DAT_14cad5ea0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434bb991. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad5ea8,1);
  return;
}



// FUNCTION 1434bb994 FUN_1434bb994 body=69 status=ok
// SIG undefined FUN_1434bb994(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434bb994(void)

{
  _DAT_14cad6e10 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434bb9d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad6e18,1);
  return;
}



// FUNCTION 1434bb9d9 FUN_1434bb9d9 body=69 status=ok
// SIG undefined FUN_1434bb9d9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434bb9d9(void)

{
  _DAT_14cad5eb0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434bba1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad5eb8,1);
  return;
}



// FUNCTION 1434bba1e FUN_1434bba1e body=69 status=ok
// SIG undefined FUN_1434bba1e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434bba1e(void)

{
  _DAT_14cad6e28 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434bba60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad6e30,1);
  return;
}



// FUNCTION 1434bba63 FUN_1434bba63 body=69 status=ok
// SIG undefined FUN_1434bba63(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434bba63(void)

{
  _DAT_14cad6e40 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434bbaa5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad6e48,1);
  return;
}



// FUNCTION 1434bbaa8 FUN_1434bbaa8 body=69 status=ok
// SIG undefined FUN_1434bbaa8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434bbaa8(void)

{
  _DAT_14cad5ec8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434bbaea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad5ed0,1);
  return;
}



// FUNCTION 1434bbaed FUN_1434bbaed body=69 status=ok
// SIG undefined FUN_1434bbaed(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434bbaed(void)

{
  _DAT_14cad5ee0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434bbb2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad5ee8,1);
  return;
}



// FUNCTION 1434bbb32 FUN_1434bbb32 body=69 status=ok
// SIG undefined FUN_1434bbb32(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434bbb32(void)

{
  _DAT_14cad5ef8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434bbb74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad5f00,1);
  return;
}



// FUNCTION 1434bbb77 FUN_1434bbb77 body=69 status=ok
// SIG undefined FUN_1434bbb77(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434bbb77(void)

{
  _DAT_14cad5f10 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434bbbb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad5f18,1);
  return;
}



// FUNCTION 1434bbbbc FUN_1434bbbbc body=69 status=ok
// SIG undefined FUN_1434bbbbc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434bbbbc(void)

{
  _DAT_14cad5f28 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434bbbfe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad5f30,1);
  return;
}



// FUNCTION 1434bbc01 FUN_1434bbc01 body=69 status=ok
// SIG undefined FUN_1434bbc01(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434bbc01(void)

{
  _DAT_14cad5f60 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434bbc43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad5f68,1);
  return;
}



// FUNCTION 1434bbc46 FUN_1434bbc46 body=69 status=ok
// SIG undefined FUN_1434bbc46(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434bbc46(void)

{
  _DAT_14cad5f70 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434bbc88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad5f78,1);
  return;
}



// FUNCTION 1434bbc8b FUN_1434bbc8b body=69 status=ok
// SIG undefined FUN_1434bbc8b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434bbc8b(void)

{
  _DAT_14cad5f88 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434bbccd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad5f90,1);
  return;
}



// FUNCTION 1434bbcd0 FUN_1434bbcd0 body=69 status=ok
// SIG undefined FUN_1434bbcd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434bbcd0(void)

{
  _DAT_14cad5fa0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434bbd12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad5fa8,1);
  return;
}



// FUNCTION 1434bbd15 FUN_1434bbd15 body=69 status=ok
// SIG undefined FUN_1434bbd15(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434bbd15(void)

{
  _DAT_14cad5fb8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434bbd57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad5fc0,1);
  return;
}



// FUNCTION 1434bbd5a FUN_1434bbd5a body=69 status=ok
// SIG undefined FUN_1434bbd5a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434bbd5a(void)

{
  _DAT_14cad5fd0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434bbd9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad5fd8,1);
  return;
}



// FUNCTION 1434bbd9f FUN_1434bbd9f body=69 status=ok
// SIG undefined FUN_1434bbd9f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434bbd9f(void)

{
  _DAT_14cad5fe8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434bbde1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad5ff0,1);
  return;
}



// FUNCTION 1434bbde4 FUN_1434bbde4 body=69 status=ok
// SIG undefined FUN_1434bbde4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434bbde4(void)

{
  _DAT_14cad6000 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434bbe26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad6008,1);
  return;
}



// FUNCTION 1434bbe29 FUN_1434bbe29 body=69 status=ok
// SIG undefined FUN_1434bbe29(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434bbe29(void)

{
  _DAT_14cad6010 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434bbe6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad6018,1);
  return;
}



// FUNCTION 1434bbe6e FUN_1434bbe6e body=69 status=ok
// SIG undefined FUN_1434bbe6e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434bbe6e(void)

{
  _DAT_14cad6020 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434bbeb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad6028,1);
  return;
}



// FUNCTION 1434bbeb3 FUN_1434bbeb3 body=69 status=ok
// SIG undefined FUN_1434bbeb3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434bbeb3(void)

{
  _DAT_14cad6030 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434bbef5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad6038,1);
  return;
}



// FUNCTION 1434bbef8 FUN_1434bbef8 body=183 status=ok
// SIG undefined FUN_1434bbef8(void)

void FUN_1434bbef8(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0xa00);
  *(uint *)(param_1 + 0xa00) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0xa04) < iVar1 + 1U) {
    FUN_147a6fc16(param_1 + 0x9f8,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x9f8);
  lVar4 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar4) = param_2;
  puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar3[1] = &DAT_100000001;
  *puVar3 = &PTR_LAB_14a8bc530;
  puVar3[2] = param_2;
  *(undefined8 **)(lVar2 + 8 + lVar4) = puVar3;
  FUN_147a6fc9c(lVar2 + lVar4,param_2);
  if ((*(int *)(param_1 + 0xa00) < 1) && (*(longlong *)(param_1 + 0xa08) == 0)) {
    FUN_1434bbfb0(param_1);
    return;
  }
  return;
}



// FUNCTION 1434bbfb0 FUN_1434bbfb0 body=472 status=ok
// SIG undefined FUN_1434bbfb0(void)

ulonglong FUN_1434bbfb0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  
  plVar5 = *(longlong **)(param_1 + 0xa08);
  if (plVar5 == (longlong *)0x0) {
    uVar6 = 1;
    if (*(int *)(param_1 + 0xa00) < 1) goto LAB_1434bc0d0;
    plVar5 = (longlong *)(param_1 + 0x9f8);
    plVar8 = *(longlong **)*plVar5;
    plVar7 = (longlong *)((undefined8 *)*plVar5)[1];
    if (plVar7 == (longlong *)0x0) {
      *(longlong **)(param_1 + 0xa08) = plVar8;
      plVar9 = *(longlong **)(param_1 + 0xa10);
      if (plVar9 != (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0xa10) = 0;
LAB_1434bc11a:
        LOCK();
        plVar7 = plVar9 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar2 = *piVar1;
          UNLOCK();
joined_r0x0001434bc10a:
          if (iVar2 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
LAB_1434bc139:
        plVar8 = *(longlong **)(param_1 + 0xa08);
        plVar7 = *(longlong **)(param_1 + 0xa10);
        if (plVar7 != (longlong *)0x0) goto LAB_1434bc150;
      }
      plVar7 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      *(longlong **)(param_1 + 0xa08) = plVar8;
      plVar9 = *(longlong **)(param_1 + 0xa10);
      if (plVar7 == plVar9) {
        LOCK();
        plVar8 = plVar7 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar2 = *piVar1;
          UNLOCK();
          plVar9 = plVar7;
          goto joined_r0x0001434bc10a;
        }
        goto LAB_1434bc139;
      }
      *(longlong **)(param_1 + 0xa10) = plVar7;
      if (plVar9 != (longlong *)0x0) goto LAB_1434bc11a;
LAB_1434bc150:
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    FUN_147a6fdaa(plVar5);
    FUN_147a6fe0c(plVar5);
    (**(code **)(*plVar8 + 8))(plVar8);
    plVar5 = *(longlong **)(param_1 + 0xa08);
    plVar8 = plVar7;
    if (plVar5 != (longlong *)0x0) goto LAB_1434bbfd1;
    uVar6 = 1;
  }
  else {
    plVar8 = (longlong *)0x0;
LAB_1434bbfd1:
    plVar7 = *(longlong **)(param_1 + 0xa10);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar8 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
    cVar3 = (**(code **)(*plVar5 + 0x10))(plVar5);
    if (cVar3 == '\0') {
      uVar4 = (**(code **)(*plVar5 + 0x20))(plVar5);
      uVar6 = (ulonglong)uVar4 ^ 1;
    }
    else {
      *(undefined8 *)(param_1 + 0xa08) = 0;
      plVar8 = *(longlong **)(param_1 + 0xa10);
      uVar6 = CONCAT71((int7)((ulonglong)plVar5 >> 8),1);
      if (plVar8 != (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0xa10) = 0;
        LOCK();
        plVar5 = plVar8 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar7 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
LAB_1434bc0d0:
  return uVar6 & 0xffffffff;
}



// FUNCTION 1434bc188 FUN_1434bc188 body=284 status=ok
// SIG undefined FUN_1434bc188(void)

void FUN_1434bc188(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (((*(int *)(param_1 + 0x100) < 1) || (lVar2 = **(longlong **)(param_1 + 0xf8), lVar2 == 0)) ||
     (*(int *)(lVar2 + 0x134) == 1)) {
    plVar1 = *(longlong **)(param_1 + 0xf0);
    if (*(char *)(param_1 + 0xcbe) == '\0') {
      if ((plVar1 == (longlong *)0x0) || (*(int *)((longlong)plVar1 + 0x134) == 1)) {
        FUN_147a5f386(param_1);
        *(undefined4 *)(param_1 + 0xc70) = 0;
        if (*(int *)(param_1 + 0xc74) != 0) {
          FUN_1446f8c06(param_1 + 0xc68,0);
        }
        goto LAB_1434bc296;
      }
LAB_1434bc22f:
      (**(code **)(*plVar1 + 0x2f8))(plVar1,0);
      *(undefined4 *)(*(longlong *)(param_1 + 0xf0) + 0x134) = 1;
      lVar2 = *(longlong *)(param_1 + 0xf0);
      goto LAB_1434bc251;
    }
    if (plVar1 != (longlong *)0x0) goto LAB_1434bc22f;
    if ((0 < *(int *)(param_1 + 0x100)) && (lVar2 = **(longlong **)(param_1 + 0xf8), lVar2 != 0))
    goto LAB_1434bc251;
  }
  else {
    plVar1 = *(longlong **)(param_1 + 0xf0);
    if (plVar1 != (longlong *)0x0) goto LAB_1434bc22f;
LAB_1434bc251:
    FUN_147a491c6(lVar2);
  }
  FUN_147cdd888(param_1 + 0xb40);
  *(undefined4 *)(param_1 + 0xa90) = 0;
  if (*(int *)(param_1 + 0xa94) != 0) {
    FUN_147a70b24(param_1 + 0xa88,0);
  }
  *(undefined8 *)(param_1 + 0x8f0) = 0;
  FUN_147a5f386(param_1);
LAB_1434bc296:
  FUN_147a5f954(param_1);
  return;
}



// FUNCTION 1434bc2a4 FUN_1434bc2a4 body=1885 status=ok
// SIG undefined FUN_1434bc2a4(void)

void FUN_1434bc2a4(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  double dVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  wchar_t *_Str;
  undefined8 *puVar10;
  undefined8 uVar11;
  int iVar12;
  bool bVar13;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong local_e0;
  longlong local_d0;
  LARGE_INTEGER local_c8;
  undefined4 local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a0 [2];
  longlong local_90;
  longlong local_80;
  undefined4 local_78;
  longlong local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  bVar2 = *(byte *)((longlong)param_1 + 0x9ab);
  *(byte *)((longlong)param_1 + 0x9ab) = bVar2 & 0xdf;
  iVar8 = *(int *)(param_2 + 8);
  *(byte *)((longlong)param_1 + 0x9ab) = bVar2 & 0xdb | (iVar8 == 0) << 2;
  if (iVar8 == 0) {
    if (*(char *)(param_2 + 0x10) != '\0') goto LAB_1434bc30d;
    local_108 = 0;
    uStack_100 = 0;
    QueryPerformanceCounter(&local_c8);
    dVar5 = (double)local_c8.QuadPart * DAT_14c83f420;
    FUN_147a5f954(param_1);
    plVar1 = param_1 + 0x168;
    cVar6 = FUN_143686888(plVar1,&local_108);
    local_b0 = local_108;
    if (cVar6 != '\0') {
      FUN_147cdd174(plVar1,param_1[0x1e]);
      FUN_1463ecc48(param_1);
      cVar6 = 0 < *DAT_14cad5da8;
      lVar9 = FUN_14045d4ce(param_1 + 0x180,L"AsyncLoadWorldOverride=",0);
      if (lVar9 != 0) {
        cVar6 = FUN_14052c20c(lVar9);
      }
      local_c8.QuadPart = (LONGLONG)FUN_147a60286;
      local_c0 = 0;
      FUN_147a6018c(&local_f8,param_1);
      if (*(int *)((longlong)param_1 + 0x86c) == -1) {
        if ((cVar6 == '\0') || (*(char *)(param_1[0x35] + 0x152) == '\x03')) {
          FUN_140810d00(&local_c8,0);
          FUN_1402980a2(local_a0,*(undefined8 *)param_1[0x1aa]);
          cVar6 = FUN_14622a50c(DAT_14cb0d2b0,local_a0);
          if (cVar6 == '\0') {
            FUN_147a60036(&local_f8,6);
            FUN_146efbfa6(param_1 + 0x27c,&local_f8);
            if (local_d0 != 0) {
              (**(code **)(local_d0 + -0x10))(local_d0 + -0x10);
            }
            if (local_e0 != 0) {
              FUN_1400020a8();
            }
            if (local_70 != 0) {
              FUN_1400020a8();
            }
            FUN_1447a1747(local_80,local_78);
            if (local_80 != 0) {
              FUN_1400020a8();
            }
            if (local_90 != 0) {
              FUN_1400020a8();
            }
            if (local_a0[0] != 0) {
              FUN_1400020a8();
            }
            if (local_b8 != 0) {
              FUN_1400020a8();
            }
            local_b0 = local_108;
            if ((code *)local_c8.QuadPart != (code *)0x0) {
              FUN_1400020a8();
              local_b0 = local_108;
            }
          }
          else {
            if ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0) {
              lVar9 = 0;
              do {
                lVar4 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar9);
                if (*(longlong *)(lVar4 + 0x360) == param_1[0x35]) {
                  if (lVar4 != 0) {
                    FUN_147daab40();
                    (**(code **)(*param_1 + 0x3d8))(param_1,0);
                    lVar9 = FUN_147a6064b(DAT_14c951640);
                    if ((param_1 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
                      FUN_1456cec3c(param_1);
                    }
                    *(longlong **)(lVar9 + 0x38) = param_1;
                    FUN_1405f35b2(lVar9 + 0x40,&local_c8);
                    *(undefined1 *)(lVar9 + 0xa8) = 1;
                    if ((lVar9 != 0) && (DAT_14c950c29 != '\0')) {
                      FUN_1456cec3c(lVar9);
                    }
                    *(longlong *)(lVar4 + 0x230) = lVar9;
                    bVar13 = false;
                    goto LAB_1434bc88d;
                  }
                  break;
                }
                lVar9 = lVar9 + 8;
              } while ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8 != lVar9);
            }
            FUN_140002266(&local_f8,L"No world context");
            if (local_108 != 0) {
              FUN_1400020a8();
            }
            local_108 = CONCAT44(uStack_f4,local_f8);
            uStack_100 = CONCAT44(uStack_ec,uStack_f0);
            FUN_147a60036(&local_f8,5);
            FUN_146efbfa6(param_1 + 0x27c,&local_f8);
            if (local_d0 != 0) {
              (**(code **)(local_d0 + -0x10))(local_d0 + -0x10);
            }
            if (local_e0 != 0) {
              FUN_1400020a8();
            }
            bVar13 = true;
LAB_1434bc88d:
            if (local_70 != 0) {
              FUN_1400020a8();
            }
            FUN_1447a1747(local_80,local_78);
            if (local_80 != 0) {
              FUN_1400020a8();
            }
            if (local_90 != 0) {
              FUN_1400020a8();
            }
            if (local_a0[0] != 0) {
              FUN_1400020a8();
            }
            if (local_b8 != 0) {
              FUN_1400020a8();
            }
            if ((code *)local_c8.QuadPart != (code *)0x0) {
              FUN_1400020a8();
            }
            local_b0 = local_108;
            if (!bVar13) goto LAB_1434bc52c;
          }
          goto LAB_1434bc3db;
        }
        FUN_147a6032c(param_1 + 0x192,param_1 + 0x1aa);
        FUN_147a6038c(param_1,0);
      }
      else {
        FUN_147cdea6e(plVar1);
        FUN_147cdeb10(plVar1);
      }
LAB_1434bc52c:
      *(byte *)((longlong)param_1 + 0x9ab) =
           *(byte *)((longlong)param_1 + 0x9ab) & 0xfb | (*(int *)(param_2 + 8) == 0) << 2;
      _Str = (wchar_t *)FUN_14045d4ce(param_1 + 0x180,L"SkipToLevelIndex=",0);
      if (((_Str != (wchar_t *)0x0) && (uVar7 = _wtoi(_Str), -1 < (int)uVar7)) &&
         ((int)uVar7 < (int)param_1[0x193])) {
        puVar10 = (undefined8 *)FUN_14001cc68(0x50,0x10);
        uVar7 = *(uint *)(param_1[0x192] + 0x10 + (ulonglong)uVar7 * 0x18);
        puVar10[1] = 0;
        puVar10[2] = 0;
        *puVar10 = &PTR_LAB_14a8ba590;
        *(undefined4 *)((longlong)puVar10 + 0x1c) = 0;
        if (param_1 == (longlong *)0x0) {
          *(undefined4 *)(puVar10 + 3) = 0;
          iVar8 = 0;
        }
        else {
          uVar3 = *(uint *)((longlong)param_1 + 0xc);
          *(uint *)(puVar10 + 3) = uVar3;
          if ((int)uVar3 < DAT_14c9647dc) {
            lVar9 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
          }
          else {
            lVar9 = 0;
          }
          iVar8 = *(int *)(lVar9 + 0x10);
          if (*(int *)(lVar9 + 0x10) == 0) {
            LOCK();
            iVar8 = DAT_14c964868 + 1;
            UNLOCK();
            iVar12 = DAT_14c964868 + 1;
            bVar13 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar8;
            if (bVar13) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar12);
            }
            LOCK();
            iVar8 = *(int *)(lVar9 + 0x10);
            bVar13 = iVar8 == 0;
            if (bVar13) {
              *(int *)(lVar9 + 0x10) = iVar12;
              iVar8 = 0;
            }
            UNLOCK();
            if (bVar13) {
              iVar8 = iVar12;
            }
          }
        }
        *(int *)((longlong)puVar10 + 0x1c) = iVar8;
        *puVar10 = &PTR_FUN_14a8ba5c0;
        *(float *)((longlong)puVar10 + 0x24) = (float)uVar7 / 1000.0;
        *(undefined1 *)(puVar10 + 9) = 0;
        FUN_1434bbef8(param_1,puVar10);
      }
      if (((*DAT_14cad5e68 != 0) &&
          (cVar6 = (**(code **)(*(longlong *)param_1[399] + 0x128))(), cVar6 != '\0')) &&
         (uVar7 = (**(code **)(*(longlong *)param_1[399] + 0x60))(), 15000 < uVar7)) {
        QueryPerformanceCounter(&local_c8);
        if (10.0 <= ((double)local_c8.QuadPart * DAT_14c83f420 + 16777216.0) - (dVar5 + 16777216.0))
        {
          uVar11 = FUN_14001cc68(0x30,0x10);
          FUN_147a61aa0(uVar11,param_1);
          FUN_1434bbef8(param_1,uVar11);
        }
        else {
          FUN_1434c220c(param_1);
        }
      }
      FUN_14107e8f0(&DAT_14cb0d370,param_1[0x35]);
      local_b0 = local_108;
    }
  }
  else {
    if (*(char *)(param_2 + 0x10) == '\0') {
      uVar11 = 1;
    }
    else {
      uVar11 = 8;
    }
    FUN_147a60036(&local_c8,uVar11);
    FUN_146efbfa6(param_1 + 0x27c,&local_c8);
    if (local_a0[0] != 0) {
      (**(code **)(local_a0[0] + -0x10))(local_a0[0] + -0x10);
    }
  }
LAB_1434bc3db:
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
LAB_1434bc30d:
  if ((local_60 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434bca02 FUN_1434bca02 body=135 status=ok
// SIG undefined FUN_1434bca02(void)

void FUN_1434bca02(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x48);
  if ((lVar3 != 0) ||
     ((((*(int *)(param_1 + 0xdc) != 0 && (uVar1 = *(uint *)(param_1 + 0xd8), -1 < (int)uVar1)) &&
       ((int)uVar1 < DAT_14c9647dc)) &&
      (((plVar2 = (longlong *)
                  ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
        plVar2 != (longlong *)0x0 && ((int)plVar2[2] == *(int *)(param_1 + 0xdc))) &&
       (((*(uint *)(plVar2 + 1) & 0x10200000) == 0 && (lVar3 = *plVar2, lVar3 != 0)))))))) {
    FUN_147ce2758(*(undefined8 *)(param_1 + 0x20),
                  (undefined8 *)**(longlong **)(param_1 + 0x30) + 0xe,
                  *(undefined8 *)**(longlong **)(param_1 + 0x30),lVar3,1);
  }
  return;
}



// FUNCTION 1434bca8a FUN_1434bca8a body=11617 status=ok
// SIG undefined FUN_1434bca8a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434bca8a(longlong param_1,float param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  LARGE_INTEGER LVar3;
  _struct_19 _Var4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  LARGE_INTEGER LVar12;
  _struct_19 _Var13;
  _struct_19 _Var14;
  _struct_19 _Var15;
  _struct_19 _Var16;
  _struct_19 _Var17;
  _struct_19 _Var18;
  _struct_19 _Var19;
  double dVar20;
  float *pfVar21;
  LARGE_INTEGER LVar22;
  _struct_19 *p_Var23;
  char cVar24;
  int iVar25;
  uint uVar26;
  undefined4 uVar27;
  DWORD DVar28;
  DWORD DVar29;
  ulonglong uVar30;
  longlong lVar31;
  longlong lVar32;
  int *piVar33;
  longlong *plVar34;
  ulonglong uVar35;
  LARGE_INTEGER *pLVar36;
  _struct_19 *p_Var37;
  double *pdVar38;
  uint uVar39;
  int iVar40;
  int iVar41;
  _struct_19 *p_Var42;
  uint uVar43;
  longlong *plVar44;
  longlong *plVar45;
  _struct_19 *p_Var46;
  byte bVar47;
  longlong lVar48;
  longlong lVar49;
  undefined4 uVar50;
  _struct_19 *p_Var51;
  _struct_19 *p_Var52;
  _struct_19 *p_Var53;
  _struct_19 *p_Var54;
  int iVar55;
  _struct_19 *p_Var56;
  _struct_19 *p_Var57;
  ulonglong uVar58;
  bool bVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  undefined8 uVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  double dVar67;
  undefined4 uVar68;
  undefined1 auStack_918 [32];
  longlong *local_8f8;
  LARGE_INTEGER *local_8f0;
  float local_8e8;
  bool local_8d3;
  byte local_8d2;
  byte local_8d1;
  LARGE_INTEGER *local_8d0;
  byte local_8c1;
  LARGE_INTEGER *local_8c0;
  uint local_8b4;
  LARGE_INTEGER *local_8b0;
  int *local_8a8;
  longlong local_8a0;
  longlong local_898;
  longlong local_890;
  longlong *local_888;
  undefined4 local_87c;
  longlong local_878;
  longlong *local_870;
  undefined4 local_864;
  longlong *local_860;
  longlong local_858;
  int local_84c;
  undefined8 local_848;
  longlong *local_830;
  double local_828;
  longlong *local_820;
  longlong local_818;
  longlong *local_810;
  longlong *local_808;
  longlong local_800;
  double *local_7f8;
  double local_7f0;
  LARGE_INTEGER local_7e8;
  double local_7e0;
  undefined8 local_7d8;
  undefined8 uStack_7d0;
  double local_7c8;
  undefined8 local_7b8;
  undefined8 uStack_7b0;
  double local_7a8;
  LARGE_INTEGER local_7a0;
  LARGE_INTEGER local_798;
  undefined1 uStack_790;
  byte bStack_78f;
  byte bStack_78e;
  undefined1 uStack_78d;
  int iStack_78c;
  int iStack_788;
  float fStack_784;
  LARGE_INTEGER LStack_780;
  LARGE_INTEGER local_778;
  double local_770;
  double local_768;
  undefined8 local_760;
  LARGE_INTEGER *local_398;
  undefined8 local_390;
  LARGE_INTEGER local_388;
  _struct_19 _Stack_380;
  _struct_19 local_378;
  _struct_19 _Stack_370;
  _struct_19 local_368;
  LARGE_INTEGER *local_108;
  undefined8 local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_918;
  DAT_14cad6e08 = 0.0;
  QueryPerformanceCounter(&local_798);
  LVar22 = local_798;
  dVar20 = DAT_14c83f420;
  lVar1 = *(longlong *)(param_1 + 0x1a8);
  if (lVar1 == 0) {
    uVar50 = 0xffffffff;
  }
  else {
    iVar25 = -1;
    if ((longlong)*(int *)(lVar1 + 0x1a8) != 0) {
      uVar30 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar1 + 0x1a0) + 0x18 + uVar30) == param_1) {
          iVar25 = (int)(uVar30 >> 3) * -0x11111111;
          break;
        }
        uVar30 = uVar30 + 0x78;
      } while ((longlong)*(int *)(lVar1 + 0x1a8) * 0x78 - uVar30 != 0);
    }
    uVar50 = *(undefined4 *)(lVar1 + 0x1b0);
    FUN_140080e72(lVar1,iVar25);
  }
  FUN_140ab3f22(param_1,param_2);
  if ((((*(int *)(param_1 + 0x100) < 1) || (**(longlong **)(param_1 + 0xf8) == 0)) ||
      (*(int *)(**(longlong **)(param_1 + 0xf8) + 0x134) == 1)) ||
     ((*(byte *)(param_1 + 0x9ab) & 0x20) != 0)) goto LAB_1434bcf53;
  plVar44 = *(longlong **)(param_1 + 0x8f8);
  plVar34 = *(longlong **)(param_1 + 0x900);
  if (plVar34 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar34 + 1) = (int)plVar34[1] + 1;
    UNLOCK();
  }
  cVar24 = (**(code **)(*plVar44 + 0x170))(plVar44,param_1 + 0x13e0);
  if (cVar24 == '\x01') {
    uVar63 = 8;
LAB_1434bcd50:
    FUN_147a60036(&local_798,uVar63);
    FUN_146efbfa6(param_1 + 0x13e0,&local_798);
    if (local_770 != 0.0) {
      (**(code **)((longlong)local_770 + -0x10))((longlong)local_770 + -0x10);
    }
    if ((double)LStack_780.QuadPart != 0.0) {
      FUN_1400020a8();
    }
  }
  else if (*(char *)(param_1 + 0xcc2) == '\0') {
    lVar31 = (**(code **)(*plVar44 + 0x20))(plVar44);
    if (lVar31 == 0) {
      uVar63 = 10;
      goto LAB_1434bcd50;
    }
    QueryPerformanceCounter(&local_798);
    dVar11 = (double)local_798.QuadPart * DAT_14c83f420;
    if (((0 < *(int *)(param_1 + 0x100)) && (**(longlong **)(param_1 + 0xf8) != 0)) &&
       ((*(int *)(**(longlong **)(param_1 + 0xf8) + 0x134) != 1 &&
        (*(char *)(param_1 + 0xcc2) == '\0')))) {
      fVar65 = *(float *)(param_1 + 0xca8);
      lVar31 = *(longlong *)(*(longlong *)(param_1 + 0x1a8) + 0x30);
      if (lVar31 == 0) {
        plVar44 = (longlong *)0x0;
      }
      else {
        plVar44 = *(longlong **)(lVar31 + 0x2b0);
      }
      lVar31 = param_1 + 0xb40;
      fVar60 = (float)(**(code **)(*plVar44 + 0x668))(plVar44);
      fVar60 = (float)(**(code **)(*plVar44 + 0x670))(plVar44,fVar60 * param_2,param_2);
      fVar65 = fVar65 + fVar60;
      *(float *)(param_1 + 0xca8) = fVar65;
      (**(code **)(**(longlong **)(param_1 + 0xc78) + 0x50))
                (*(longlong **)(param_1 + 0xc78),(longlong)(fVar65 * 1000.0));
      if (*(int *)(param_1 + 0xd80) == 0) {
        plVar44 = *(longlong **)(param_1 + 0x8f8);
        plVar45 = *(longlong **)(param_1 + 0x900);
        if (plVar45 == (longlong *)0x0) {
          lVar32 = (**(code **)(*plVar44 + 0x20))();
        }
        else {
          LOCK();
          *(int *)(plVar45 + 1) = (int)plVar45[1] + 1;
          UNLOCK();
          lVar32 = (**(code **)(*plVar44 + 0x20))();
          LOCK();
          plVar44 = plVar45 + 1;
          *(int *)plVar44 = (int)*plVar44 + -1;
          UNLOCK();
          if ((int)*plVar44 == 0) {
            (**(code **)*plVar45)(plVar45);
            LOCK();
            piVar33 = (int *)((longlong)plVar45 + 0xc);
            *piVar33 = *piVar33 + -1;
            UNLOCK();
            if (*piVar33 == 0) {
              (**(code **)(*plVar45 + 0x10))(plVar45);
            }
          }
        }
        local_858 = lVar31;
        if (lVar32 == 0) {
          piVar33 = (int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0xc60);
        }
        else {
          local_818 = lVar32;
          local_810 = plVar34;
          QueryPerformanceCounter(&local_798);
          dVar67 = (double)local_798.QuadPart * DAT_14c83f420;
          fVar65 = *(float *)(param_1 + 0xa58);
          if (*(char *)(param_1 + 0xcbf) == '\0') {
            lVar31 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1a8) + 0x90);
            if (lVar31 != 0) {
              lVar32 = *(longlong *)(*(longlong *)(param_1 + 0x1a8) + 0x88);
              local_8d0 = (LARGE_INTEGER *)(param_1 + 0x11a8);
              local_8c0 = (LARGE_INTEGER *)(param_1 + 0x11f8);
              lVar49 = 0;
              do {
                plVar44 = *(longlong **)(lVar32 + lVar49);
                if (((plVar44 != (longlong *)0x0) &&
                    (cVar24 = (**(code **)(*plVar44 + 0x2d8))(plVar44), cVar24 != '\0')) &&
                   (cVar24 = (**(code **)(*plVar44 + 0x2f0))(plVar44), cVar24 == '\0')) {
                  local_388.s.LowPart = *(uint *)((longlong)plVar44 + 0xc);
                  local_388.s.HighPart = 0;
                  if ((int)local_388.s.LowPart < DAT_14c9647dc) {
                    lVar48 = (ulonglong)((local_388.s.LowPart & 0xffff) * 0x18) +
                             *(longlong *)
                              (DAT_14c9647c8 + (ulonglong)(local_388.s.LowPart >> 0x10) * 8);
                  }
                  else {
                    lVar48 = 0;
                  }
                  uVar39 = *(uint *)(lVar48 + 0x10);
                  if (*(uint *)(lVar48 + 0x10) == 0) {
                    LOCK();
                    iVar25 = DAT_14c964868 + 1;
                    UNLOCK();
                    iVar41 = DAT_14c964868 + 1;
                    local_898 = CONCAT44(local_898._4_4_,iVar41);
                    bVar59 = DAT_14c964868 < 1000;
                    DAT_14c964868 = iVar25;
                    if (bVar59) {
                      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                    L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                    ,iVar41);
                    }
                    LOCK();
                    uVar39 = *(uint *)(lVar48 + 0x10);
                    bVar59 = uVar39 == 0;
                    if (bVar59) {
                      *(uint *)(lVar48 + 0x10) = (uint)local_898;
                      uVar39 = 0;
                    }
                    UNLOCK();
                    if (bVar59) {
                      uVar39 = (uint)local_898;
                    }
                  }
                  local_388.s.HighPart = uVar39;
                  local_798 = local_388;
                  iVar25 = FUN_147a70c0a(local_8d0,uVar39 ^ local_388.s.LowPart,&local_798);
                  if (iVar25 == -1) {
                    FUN_147a70cc4(local_8d0,&local_798,&local_388,0);
                    FUN_147a70cc4(local_8c0,&local_798,&local_388);
                  }
                }
                lVar49 = lVar49 + 8;
              } while (lVar31 * 8 != lVar49);
            }
          }
          *(int *)(param_1 + 0xca4) = *(int *)(param_1 + 0xca4) + 1;
          *(int *)(param_1 + 0x520) = *(int *)(param_1 + 0x520) + 1;
          puVar2 = *(undefined1 **)(param_1 + 0xb28);
          if ((*(double *)(puVar2 + 0x10) != 0.0) || (NAN(*(double *)(puVar2 + 0x10)))) {
            *(int *)(puVar2 + 4) = *(int *)(puVar2 + 4) + 1;
            *puVar2 = 0;
            QueryPerformanceCounter(&local_798);
            if ((double)_DAT_14c7614d8 <
                ((double)local_798.QuadPart * DAT_14c83f420 + 16777216.0) -
                *(double *)(puVar2 + 0x10)) {
              FUN_147a683ee(puVar2);
            }
          }
          local_888 = (longlong *)**(undefined8 **)(param_1 + 0xf8);
          (**(code **)(*local_888 + 0x2f8))(local_888,0);
          fVar60 = (float)(**(code **)(*DAT_14cb0d2b0 + 0x2f8))(DAT_14cb0d2b0,param_2,1);
          local_8a0 = *(longlong *)(param_1 + 0x858);
          local_870 = (longlong *)(param_1 + 0xa68);
          FUN_147a618a8(local_870,*(int *)(local_8a0 + 0x58) - *(int *)(local_8a0 + 0x84));
          local_7a8 = DAT_14c8464f0;
          local_7b8 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
          uStack_7b0 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          local_7c8 = DAT_14c8464f0;
          local_7d8 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
          uStack_7d0 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          if (((((*(int *)(param_1 + 0xa64) == 0) ||
                (uVar39 = *(uint *)(param_1 + 0xa60), (int)uVar39 < 0)) ||
               (DAT_14c9647dc <= (int)uVar39)) ||
              (((plVar44 = (longlong *)
                           ((ulonglong)((uVar39 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar39 >> 0x10) * 8)),
                plVar44 == (longlong *)0x0 || ((int)plVar44[2] != *(int *)(param_1 + 0xa64))) ||
               (((*(uint *)(plVar44 + 1) & 0x10200000) != 0 ||
                (plVar44 = (longlong *)*plVar44, plVar44 == (longlong *)0x0)))))) &&
             (plVar44 = (longlong *)FUN_140334a94(local_888,*(undefined8 *)(param_1 + 0x1a8)),
             plVar44 == (longlong *)0x0)) {
            local_860 = (longlong *)0x0;
            local_830 = (longlong *)0x0;
          }
          else {
            local_830 = plVar44;
            plVar34 = (longlong *)(**(code **)(*plVar44 + 0x6b8))();
            uVar27 = SUB84(plVar44,0);
            if (plVar34 == (longlong *)0x0) {
              local_860 = (longlong *)0x0;
            }
            else {
              lVar31 = plVar34[0x39];
              local_860 = plVar34;
              if (lVar31 == 0) {
                local_7b8 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
                uStack_7b0 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
                local_7a8 = DAT_14c8464f0;
                uVar27 = SUB84(DAT_14c8464f8,0);
                uVar68 = SUB84(DAT_14c846500,0);
              }
              else {
                local_7a8 = *(double *)(lVar31 + 0x270);
                local_7b8 = *(undefined8 *)(lVar31 + 0x260);
                uStack_7b0 = *(undefined8 *)(lVar31 + 0x268);
                LVar12 = (LARGE_INTEGER)*(LARGE_INTEGER *)&((LARGE_INTEGER *)(lVar31 + 0x240))->s;
                dVar5 = *(double *)(lVar31 + 0x248);
                uStack_790 = SUB81(dVar5,0);
                bStack_78f = (byte)((ulonglong)dVar5 >> 8);
                bStack_78e = (byte)((ulonglong)dVar5 >> 0x10);
                uStack_78d = (undefined1)((ulonglong)dVar5 >> 0x18);
                iStack_78c = (int)((ulonglong)dVar5 >> 0x20);
                dVar10 = *(double *)(lVar31 + 0x250);
                LVar3 = (LARGE_INTEGER)*(LARGE_INTEGER *)&((LARGE_INTEGER *)(lVar31 + 600))->s;
                iStack_788 = SUB84(dVar10,0);
                fStack_784 = (float)((ulonglong)dVar10 >> 0x20);
                pdVar38 = *(double **)(lVar31 + 0x228);
                local_798 = LVar12;
                LStack_780 = LVar3;
                if (pdVar38 == (double *)0x0) {
                  uVar27 = 0x40;
                  pdVar38 = (double *)FUN_14001cc68(0x40,0x10);
                  dVar6 = DAT_14c8463d8;
                  *pdVar38 = DAT_14c8463d0;
                  pdVar38[1] = dVar6;
                  dVar6 = DAT_14c8463e8;
                  pdVar38[2] = DAT_14c8463e0;
                  pdVar38[3] = dVar6;
                  dVar6 = DAT_14c846500;
                  pdVar38[4] = DAT_14c8464f8;
                  pdVar38[5] = dVar6;
                  plVar34 = DAT_14c846508;
                  pdVar38[6] = (double)DAT_14c846508;
                  *(double **)(lVar31 + 0x228) = pdVar38;
                }
                auVar8._8_4_ = (int)-(ulonglong)(dVar5 != pdVar38[1]);
                auVar8._0_8_ = -(ulonglong)((double)LVar12 != *pdVar38);
                auVar8._12_4_ = (int)(-(ulonglong)(dVar5 != pdVar38[1]) >> 0x20);
                iVar25 = movmskpd((int)plVar34,auVar8);
                auVar9._8_4_ = (int)-(ulonglong)((double)LVar3 != pdVar38[3]);
                auVar9._0_8_ = -(ulonglong)(dVar10 != pdVar38[2]);
                auVar9._12_4_ = (int)(-(ulonglong)((double)LVar3 != pdVar38[3]) >> 0x20);
                uVar39 = movmskpd(uVar27,auVar9);
                if ((uVar39 & 0x3fffffff) != 0 || iVar25 != 0) {
                  *(int *)(pdVar38 + 2) = iStack_788;
                  *(float *)((longlong)pdVar38 + 0x14) = fStack_784;
                  *(undefined4 *)(pdVar38 + 3) = LStack_780._0_4_;
                  *(undefined4 *)((longlong)pdVar38 + 0x1c) = LStack_780._4_4_;
                  *(DWORD *)pdVar38 = local_798.s.LowPart;
                  *(LONG *)((longlong)pdVar38 + 4) = local_798.s.HighPart;
                  *(uint *)(pdVar38 + 1) =
                       CONCAT13(uStack_78d,CONCAT12(bStack_78e,CONCAT11(bStack_78f,uStack_790)));
                  *(int *)((longlong)pdVar38 + 0xc) = iStack_78c;
                  FUN_1448052ee(&local_798,&local_388);
                  *(_struct_19 *)(pdVar38 + 6) = local_378;
                  *(LARGE_INTEGER *)(pdVar38 + 4) = local_388;
                  *(_struct_19 *)(pdVar38 + 5) = _Stack_380;
                }
                uVar27 = SUB84(pdVar38[4],0);
                uVar68 = SUB84(pdVar38[5],0);
              }
              dVar10 = (double)FUN_144719204(uVar27,0);
              dVar7 = (double)FUN_144719204(uVar68);
              dVar5 = sin(dVar10 * 0.017453292519943295);
              dVar10 = cos(dVar10 * 0.017453292519943295);
              dVar6 = sin(dVar7 * 0.017453292519943295);
              local_7d8 = cos(dVar7 * 0.017453292519943295);
              uStack_7d0 = dVar6 * dVar10;
              local_7d8 = local_7d8 * dVar10;
              local_7c8 = dVar5;
            }
          }
          piVar33 = DAT_14cad5e50;
          LVar12 = (LARGE_INTEGER)(dVar67 + 16777216.0);
          dVar67 = (double)(fVar65 / 1000.0);
          local_8a8 = (int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0xc60);
          iVar25 = *local_8a8;
          if (iVar25 == 0x40000002) {
            local_8d3 = *DAT_14cad5e50 == 0;
LAB_1434bd632:
            uVar30 = 0;
            lVar31 = DAT_14cad5fc8;
          }
          else {
            if (DAT_14c86a9f8 == 0) {
              iVar41 = *DAT_14cad5e50;
LAB_1434bf53c:
              local_8d3 = iVar41 == 0;
            }
            else {
              if (iVar25 == 2) {
                iVar41 = *DAT_14cad5e50;
                iVar25 = 2;
                goto LAB_1434bf53c;
              }
              if (iVar25 == 1) {
                DVar28 = FUN_140ad26c0();
                DVar29 = GetCurrentThreadId();
                bVar59 = DVar28 == DVar29;
                iVar25 = *local_8a8;
              }
              else {
                bVar59 = false;
              }
              local_8d3 = piVar33[bVar59 ^ 1] == 0;
              if (iVar25 == 0x40000002) goto LAB_1434bd632;
            }
            lVar31 = DAT_14cad5fc8;
            bVar59 = true;
            if (((DAT_14c86a9f8 & 1) != 0) && (iVar25 != 2)) {
              if (iVar25 == 1) {
                DVar28 = FUN_140ad26c0();
                DVar29 = GetCurrentThreadId();
                bVar59 = DVar28 == DVar29;
              }
              else {
                bVar59 = false;
              }
            }
            uVar30 = (ulonglong)(bVar59 ^ 1);
          }
          fVar65 = 1.0;
          local_84c = *(int *)(lVar31 + uVar30 * 4);
          local_8c1 = *(byte *)(param_1 + 0x9ab);
          bVar47 = local_8c1 & 8;
          local_7f0 = (double)*(float *)(param_1 + 0xb20) * dVar67;
          local_7f8 = &local_7f0;
          local_808 = local_888;
          local_800 = param_1;
          local_7e8 = LVar12;
          local_7e0 = dVar67;
          if (local_84c == 0) {
            FUN_1434c141e(&local_808);
          }
          local_8d1 = bVar47 >> 3 | local_8d3;
          if ((local_7e0 <= 0.0) ||
             (QueryPerformanceCounter(&local_798),
             ((double)local_798.QuadPart * DAT_14c83f420 + 16777216.0) - (double)local_7e8 <=
             local_7f0)) {
            lVar31 = DAT_14cad6e80;
            local_108 = (LARGE_INTEGER *)0x0;
            local_100 = 0x1000000000;
            iVar25 = *local_8a8;
            if (iVar25 == 0x40000002) {
              uVar30 = 0;
            }
            else {
              bVar59 = true;
              if ((DAT_14c86a9f8 == 1) && (iVar25 != 2)) {
                if (iVar25 == 1) {
                  DVar28 = FUN_140ad26c0();
                  DVar29 = GetCurrentThreadId();
                  bVar59 = DVar28 == DVar29;
                }
                else {
                  bVar59 = false;
                }
              }
              uVar30 = (ulonglong)(bVar59 ^ 1);
            }
            if (((*(int *)(lVar31 + uVar30 * 4) < 1) ||
                (plVar44 = *(longlong **)(*(longlong *)(param_1 + 0x1a8) + 0x38),
                plVar44 == (longlong *)0x0)) ||
               (cVar24 = (**(code **)(*plVar44 + 0x3c0))(), cVar24 == '\0')) {
              local_87c = 0;
            }
            else {
              lVar31 = (longlong)
                       *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x1a8) + 0x38) + 0x100);
              local_87c = (undefined4)CONCAT71((int7)((ulonglong)plVar44 >> 8),1);
              if (lVar31 != 0) {
                lVar32 = 0;
                do {
                  FUN_147a618d2(&local_798);
                  uVar30 = local_100;
                  if (CONCAT44(iStack_78c,
                               CONCAT13(uStack_78d,
                                        CONCAT12(bStack_78e,CONCAT11(bStack_78f,uStack_790)))) != 0)
                  {
                    lVar49 = (longlong)(int)local_100;
                    uVar39 = (int)local_100 + 1;
                    local_100 = CONCAT44(local_100._4_4_,uVar39);
                    if (local_100._4_4_ < uVar39) {
                      FUN_147a712c2(&local_388,uVar30 & 0xffffffff);
                    }
                    pLVar36 = local_108;
                    if (local_108 == (LARGE_INTEGER *)0x0) {
                      pLVar36 = &local_388;
                    }
                    pLVar36[lVar49 * 5 + 4] = local_778;
                    LVar3.s.HighPart = (LONG)fStack_784;
                    LVar3.s.LowPart = iStack_788;
                    pLVar36[lVar49 * 5 + 2] = LVar3;
                    (pLVar36 + lVar49 * 5 + 2)[1] = LStack_780;
                    pLVar36 = pLVar36 + lVar49 * 5;
                    (pLVar36->s).LowPart = local_798.s.LowPart;
                    *(LONG *)((longlong)pLVar36 + 4) = local_798.s.HighPart;
                    pLVar36[1].s.LowPart =
                         CONCAT13(uStack_78d,CONCAT12(bStack_78e,CONCAT11(bStack_78f,uStack_790)));
                    *(int *)((longlong)pLVar36 + 0xc) = iStack_78c;
                  }
                  lVar32 = lVar32 + 8;
                } while (lVar31 * 8 != lVar32);
              }
            }
            iVar25 = *local_8a8;
            if (iVar25 == 0x40000002) {
LAB_1434bd8c6:
              uVar30 = 0;
              lVar31 = DAT_14cad5e08;
            }
            else {
              if ((iVar25 == 1 & DAT_14c86a9f8) != 0) {
                FUN_140ad26c0();
                GetCurrentThreadId();
                iVar25 = *local_8a8;
                if (iVar25 == 0x40000002) goto LAB_1434bd8c6;
              }
              lVar31 = DAT_14cad5e08;
              uVar30 = 1;
              if (((DAT_14c86a9f8 & 1) != 0) && (iVar25 != 2)) {
                if (iVar25 == 1) {
                  DVar28 = FUN_140ad26c0();
                  DVar29 = GetCurrentThreadId();
                  uVar30 = (ulonglong)(DVar28 == DVar29);
                }
                else {
                  uVar30 = 0;
                }
              }
              uVar30 = uVar30 ^ 1;
            }
            fVar61 = *(float *)(lVar31 + uVar30 * 4);
            local_398 = (LARGE_INTEGER *)0x0;
            local_390 = 0x8000000000;
            local_8d2 = *(byte *)(param_1 + 0xcc0);
            local_8c0 = (LARGE_INTEGER *)(local_8a0 + 0x60);
            uVar39 = *(uint *)(local_8a0 + 0x78);
            local_8d0 = (LARGE_INTEGER *)(ulonglong)uVar39;
            if (uVar39 == 0) {
              uVar58 = 1;
              uVar30 = 0;
              iVar25 = 0;
              pLVar36 = (LARGE_INTEGER *)0x0;
            }
            else {
              pLVar36 = *(LARGE_INTEGER **)(local_8a0 + 0x70);
              if (*(LARGE_INTEGER **)(local_8a0 + 0x70) == (LARGE_INTEGER *)0x0) {
                pLVar36 = local_8c0;
              }
              uVar26 = (pLVar36->s).LowPart;
              if (uVar26 == 0) {
                iVar25 = uVar39 + 0x1e;
                if (-1 < (int)(uVar39 - 1)) {
                  iVar25 = uVar39 - 1;
                }
                uVar30 = 0;
                uVar58 = (ulonglong)(uint)(iVar25 >> 5);
                if (iVar25 >> 5 < 1) {
                  uVar58 = uVar30;
                }
                iVar25 = 0;
                do {
                  if (uVar58 == uVar30) goto LAB_1434be217;
                  iVar25 = iVar25 + 0x20;
                  uVar26 = *(uint *)((longlong)pLVar36 + (uVar30 + 1) * 4);
                  uVar30 = uVar30 + 1;
                } while (uVar26 == 0);
              }
              else {
                uVar30 = 0;
                iVar25 = 0;
              }
              uVar58 = (ulonglong)(-uVar26 & uVar26);
              uVar35 = uVar58 * 2 + 1;
              lVar31 = 0x3f;
              if (uVar35 != 0) {
                for (; uVar35 >> lVar31 == 0; lVar31 = lVar31 + -1) {
                }
              }
              uVar26 = (iVar25 - ((uint)lVar31 ^ 0x3f)) + 0x3e;
              pLVar36 = (LARGE_INTEGER *)(ulonglong)uVar26;
              if ((int)uVar39 <= (int)uVar26) {
                pLVar36 = local_8d0;
              }
            }
            if ((uint)pLVar36 != uVar39) {
              uVar39 = -(uint)(0.0 < fVar61);
              local_828 = (double)((float)(~uVar39 & 0x3f000000 | (uint)(1.0 / fVar61) & uVar39) +
                                  *(float *)(param_1 + 0xca8));
              local_820 = local_888 + 0x292;
              local_8d2 = local_8d2 * '\x02';
              uVar39 = 0xffffffff;
              local_848 = 0;
              lVar31 = local_8a0;
              do {
                uVar35 = local_390;
                plVar44 = *(longlong **)
                           (*(longlong *)(lVar31 + 0x50) + (longlong)(int)pLVar36 * 0x18);
                if ((double)*(float *)(param_1 + 0xca8) < (double)plVar44[2] ||
                    (double)*(float *)(param_1 + 0xca8) == (double)plVar44[2]) {
LAB_1434bdeb6:
                  if ((0.0 < local_7e0) &&
                     (QueryPerformanceCounter(&local_7a0), lVar31 = local_8a0,
                     local_7f0 <
                     ((double)local_7a0.QuadPart * DAT_14c83f420 + 16777216.0) - (double)local_7e8))
                  break;
                }
                else {
                  local_898 = CONCAT44(local_898._4_4_,iVar25);
                  plVar34 = (longlong *)*plVar44;
                  if ((plVar34 == (longlong *)0x0) || ((*(uint *)(plVar34 + 1) >> 0x1e & 1) != 0)) {
                    lVar32 = (longlong)(int)local_390;
                    uVar26 = (int)local_390 + 1;
                    local_390 = CONCAT44(local_390._4_4_,uVar26);
                    if (local_390._4_4_ < uVar26) {
                      local_8b4 = uVar39;
                      FUN_147a713e2(&local_798,uVar35 & 0xffffffff);
                      lVar31 = local_8a0;
                      uVar39 = local_8b4;
                    }
                    pLVar36 = local_398;
                    if (local_398 == (LARGE_INTEGER *)0x0) {
                      pLVar36 = &local_798;
                    }
                    pLVar36[lVar32].QuadPart = (LONGLONG)plVar34;
                    iVar25 = (uint)local_898;
                  }
                  else {
                    if (((((char)plVar34[0xd] == '\0') &&
                         (local_8b4 = uVar39, (*(byte *)((longlong)plVar34 + 0x61) & 1) == 0)) ||
                        ((local_8b4 = uVar39, uVar35 = FUN_1449e2a3e(plVar34), (char)uVar35 != '\0'
                         && (*(char *)((longlong)plVar34 + 0x179) == '\x04')))) ||
                       ((*(byte *)((longlong)plVar34 + 0x61) & 0x20) == 0)) {
                      uVar35 = local_390;
                      lVar31 = (longlong)(int)local_390;
                      uVar39 = (int)local_390 + 1;
                      local_390 = CONCAT44(local_390._4_4_,uVar39);
                      if (local_390._4_4_ < uVar39) {
                        FUN_147a713e2(&local_798,uVar35 & 0xffffffff);
                      }
                      pLVar36 = local_398;
                      if (local_398 == (LARGE_INTEGER *)0x0) {
                        pLVar36 = &local_798;
                      }
                      pLVar36[lVar31].QuadPart = (LONGLONG)plVar34;
                    }
                    else if ((DAT_14cad58f8 != '\x01') ||
                            (uVar35 = CONCAT71((int7)(uVar35 >> 8),
                                               *(undefined1 *)((longlong)plVar34 + 0x65)) &
                                      0xffffffffffffff18, (char)uVar35 == '\x10')) {
                      local_864 = (undefined4)CONCAT71((int7)(uVar35 >> 8),1);
                      local_890 = CONCAT71(local_890._1_7_,1);
                      if (9.999999747378752e-05 <= (double)plVar44[5]) {
                        local_890 = CONCAT71(local_890._1_7_,
                                             *(double *)(param_1 + 0x300) - (double)plVar44[5] <
                                             (double)*(float *)(param_1 + 0xd4));
                      }
                      if (((((char)local_87c != '\0') && ((*(byte *)(plVar34 + 0xc) & 8) == 0)) &&
                          ((longlong *)local_888[6] != plVar34)) &&
                         (*(uint *)((longlong)plVar44 + 0xd4) < *(uint *)(param_1 + 0x520))) {
                        local_8b0 = local_108;
                        if (local_108 == (LARGE_INTEGER *)0x0) {
                          local_8b0 = &local_388;
                        }
                        if ((longlong)(int)local_100 != 0) {
                          local_878 = (longlong)(int)local_100 * 0x28;
                          local_8b0 = local_8b0 + 2;
                          do {
                            cVar24 = (**(code **)(*plVar34 + 0x468))
                                               (plVar34,local_8b0[-2].QuadPart,
                                                local_8b0[-1].QuadPart);
                            if (cVar24 != '\0') goto LAB_1434bdc98;
                            local_8b0 = local_8b0 + 5;
                            local_878 = local_878 + -0x28;
                          } while (local_878 != 0);
                        }
                        if ((char)local_890 == '\0') {
                          plVar44[2] = (longlong)local_828;
                          goto LAB_1434bdb1c;
                        }
                        local_864 = 0;
                      }
LAB_1434bdc98:
                      if (local_8d1 == 0) {
                        local_890 = plVar34[4];
LAB_1434bddb4:
                        local_8b0 = (LARGE_INTEGER *)0x0;
                      }
                      else {
                        uVar39 = *(uint *)((longlong)plVar34 + 0xc);
                        local_8b0 = (LARGE_INTEGER *)(ulonglong)uVar39;
                        if ((int)uVar39 < DAT_14c9647dc) {
                          local_890 = (ulonglong)((uVar39 & 0xffff) * 0x18) +
                                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar39 >> 0x10) * 8)
                          ;
                        }
                        else {
                          local_890 = 0;
                        }
                        uVar39 = *(uint *)(local_890 + 0x10);
                        if (*(uint *)(local_890 + 0x10) == 0) {
                          LOCK();
                          iVar25 = DAT_14c964868 + 1;
                          UNLOCK();
                          iVar41 = DAT_14c964868 + 1;
                          local_878 = CONCAT44(local_878._4_4_,iVar41);
                          bVar59 = DAT_14c964868 < 1000;
                          DAT_14c964868 = iVar25;
                          if (bVar59) {
                            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",
                                          0x23d,
                                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                          ,iVar41);
                          }
                          LOCK();
                          uVar39 = *(uint *)(local_890 + 0x10);
                          bVar59 = uVar39 == 0;
                          if (bVar59) {
                            *(uint *)(local_890 + 0x10) = (uint)local_878;
                            uVar39 = 0;
                          }
                          UNLOCK();
                          if (bVar59) {
                            uVar39 = (uint)local_878;
                          }
                        }
                        if ((int)local_888[0x28c] != *(int *)((longlong)local_888 + 0x148c)) {
                          plVar45 = (longlong *)local_888[0x293];
                          if ((longlong *)local_888[0x293] == (longlong *)0x0) {
                            plVar45 = local_820;
                          }
                          iVar25 = *(int *)((longlong)plVar45 +
                                           (ulonglong)
                                           ((int)local_888[0x294] - 1U & (uVar39 ^ (uint)local_8b0))
                                           * 4);
                          if (iVar25 != -1) {
                            do {
                              plVar45 = (longlong *)(local_888[0x28b] + (longlong)iVar25 * 0x18);
                              if (*plVar45 == ((ulonglong)uVar39 << 0x20) + (longlong)local_8b0) {
                                if (plVar45 != (longlong *)0x0) {
                                  local_8b0 = (LARGE_INTEGER *)plVar45[1];
                                  if (((local_8d3 == true && local_8b0 != (LARGE_INTEGER *)0x0) &&
                                      (1 < *(byte *)((longlong)plVar34 + 0x179))) &&
                                     ((*(byte *)(local_8b0 + 6) & 0x84) == 0)) {
                                    (**(code **)(local_8b0->QuadPart + 0x318))();
                                  }
                                  local_890 = plVar34[4];
                                  if ((local_8c1 & 8) == 0) goto LAB_1434bde18;
                                  if (local_8b0 == (LARGE_INTEGER *)0x0) goto LAB_1434be00e;
                                  dVar5 = *(double *)(param_1 + 0x300) - (double)local_8b0[0x11];
                                  goto LAB_1434be039;
                                }
                                break;
                              }
                              iVar25 = (int)plVar45[2];
                            } while (iVar25 != -1);
                          }
                        }
                        local_890 = plVar34[4];
                        if ((local_8c1 & 8) == 0) goto LAB_1434bddb4;
LAB_1434be00e:
                        dVar5 = (double)*(float *)(param_1 + 0xd0);
                        local_8b0 = (LARGE_INTEGER *)0x0;
LAB_1434be039:
                        local_8e8 = (float)dVar5;
                        local_8f0 = local_8b0;
                        local_8f8 = local_860;
                        uVar63 = FUN_1478c912e(plVar34,&local_7b8,&local_7d8,local_830);
                        lVar31 = DAT_14cad5fe0;
                        local_848 = CONCAT44((int)((ulonglong)uVar63 >> 0x20),
                                             (float)uVar63 * 65536.0);
                        if (plVar34 == local_860) {
                          iVar25 = *local_8a8;
                          if (iVar25 == 0x40000002) {
                            uVar35 = 0;
                          }
                          else {
                            bVar59 = true;
                            if ((DAT_14c86a9f8 == 1) && (iVar25 != 2)) {
                              if (iVar25 == 1) {
                                uVar27 = FUN_140ad26c0();
                                local_878 = CONCAT44(local_878._4_4_,uVar27);
                                DVar28 = GetCurrentThreadId();
                                bVar59 = (uint)local_878 == DVar28;
                              }
                              else {
                                bVar59 = false;
                              }
                            }
                            uVar35 = (ulonglong)(bVar59 ^ 1);
                          }
                          local_848 = (ulonglong)
                                      (uint)((float)local_848 * *(float *)(lVar31 + uVar35 * 4));
                        }
                        if (2.1474836e+09 <= (float)local_848) {
                          local_848._0_4_ = 2.1474836e+09;
                        }
                        if ((float)local_848 <= -2.1474836e+09) {
                          local_848._0_4_ = -2.1474836e+09;
                        }
                        local_848 = (ulonglong)
                                    (uint)((int)ROUND((float)local_848 + (float)local_848 + 0.5) >>
                                          1);
                      }
LAB_1434bde18:
                      iVar25 = *(int *)(param_1 + 0xa70);
                      lVar31 = (longlong)iVar25;
                      *(uint *)(param_1 + 0xa70) = iVar25 + 1U;
                      if (*(uint *)(param_1 + 0xa74) < iVar25 + 1U) {
                        FUN_147a7122e(local_870,iVar25);
                      }
                      lVar32 = *local_870;
                      *(int *)(lVar32 + lVar31 * 0x28) = (int)local_848;
                      *(longlong **)(lVar32 + 8 + lVar31 * 0x28) = plVar44;
                      *(LARGE_INTEGER **)(lVar32 + 0x10 + lVar31 * 0x28) = local_8b0;
                      *(undefined8 *)(lVar32 + 0x18 + lVar31 * 0x28) = 0;
                      *(longlong *)(lVar32 + 0x20 + lVar31 * 0x28) = local_890;
                      *(byte *)(plVar44 + 0x1a) = *(byte *)(plVar44 + 0x1a) & 0xfd | local_8d2;
                      if ((char)local_864 != '\0') {
                        plVar44[5] = *(longlong *)(param_1 + 0x300);
                      }
                      lVar31 = local_8a0;
                      iVar25 = (uint)local_898;
                      uVar39 = local_8b4;
                      goto LAB_1434bdeb6;
                    }
LAB_1434bdb1c:
                    lVar31 = local_8a0;
                    iVar25 = (uint)local_898;
                    uVar39 = local_8b4;
                  }
                }
                uVar39 = uVar39 & ~(uint)uVar58;
                pLVar36 = *(LARGE_INTEGER **)(lVar31 + 0x70);
                if (*(LARGE_INTEGER **)(lVar31 + 0x70) == (LARGE_INTEGER *)0x0) {
                  pLVar36 = local_8c0;
                }
                uVar26 = *(uint *)(lVar31 + 0x78);
                iVar41 = (int)uVar30;
                lVar32 = (longlong)iVar41;
                uVar43 = *(uint *)((longlong)pLVar36 + lVar32 * 4) & uVar39;
                if (uVar43 == 0) {
                  iVar40 = uVar26 + 0x1e;
                  if (-1 < (int)(uVar26 - 1)) {
                    iVar40 = uVar26 - 1;
                  }
                  iVar40 = iVar40 >> 5;
                  iVar25 = iVar25 + 0x20;
                  iVar55 = iVar40;
                  if (iVar40 < iVar41) {
                    iVar55 = iVar41;
                  }
                  if (iVar41 < iVar40) {
                    lVar49 = 0;
                    do {
                      uVar43 = *(uint *)((longlong)pLVar36 + (lVar32 + lVar49 + 1) * 4);
                      if (uVar43 != 0) {
                        uVar30 = (ulonglong)(iVar41 + (int)lVar49 + 1);
                        uVar39 = 0xffffffff;
                        goto LAB_1434bdf94;
                      }
                      iVar25 = iVar25 + 0x20;
                      lVar49 = lVar49 + 1;
                    } while (iVar55 - lVar32 != lVar49);
                    uVar39 = 0xffffffff;
                    iVar41 = iVar55;
                  }
                  uVar30 = (ulonglong)(iVar41 + 1);
                  lVar31 = local_8a0;
                  uVar43 = uVar26;
                }
                else {
LAB_1434bdf94:
                  uVar58 = (ulonglong)(-uVar43 & uVar43);
                  uVar35 = uVar58 * 2 + 1;
                  lVar32 = 0x3f;
                  if (uVar35 != 0) {
                    for (; uVar35 >> lVar32 == 0; lVar32 = lVar32 + -1) {
                    }
                  }
                  uVar43 = (iVar25 - ((uint)lVar32 ^ 0x3f)) + 0x3e;
                  if ((int)uVar26 <= (int)uVar43) {
                    uVar43 = uVar26;
                  }
                }
                pLVar36 = (LARGE_INTEGER *)(ulonglong)uVar43;
              } while (uVar43 != (uint)local_8d0);
              lVar31 = (longlong)(int)local_390;
              if (lVar31 != 0) {
                lVar32 = 0;
                do {
                  FUN_14021bb6a(param_1);
                  lVar32 = lVar32 + 8;
                } while (lVar31 * 8 != lVar32);
              }
              if (local_398 != (LARGE_INTEGER *)0x0) {
                FUN_1400020a8();
              }
            }
LAB_1434be217:
            if (local_108 != (LARGE_INTEGER *)0x0) {
              FUN_1400020a8();
            }
          }
          if ((local_84c != 0) &&
             ((local_7e0 <= 0.0 ||
              (QueryPerformanceCounter(&local_798),
              ((double)local_798.QuadPart * DAT_14c83f420 + 16777216.0) - (double)local_7e8 <=
              local_7f0)))) {
            FUN_1434c141e(&local_808);
          }
          if (*(char *)(param_1 + 0xcbf) == '\x01') {
            iVar25 = *(int *)(param_1 + 0xa70);
            if (1 < (longlong)iVar25) {
              LVar3.QuadPart = *local_870;
              memset(&iStack_788,0,0x2f0);
              plVar44 = (longlong *)(LVar3.QuadPart + (longlong)iVar25 * 0x28) + -5;
              uStack_790 = SUB81(plVar44,0);
              bStack_78f = (byte)((ulonglong)plVar44 >> 8);
              bStack_78e = (byte)((ulonglong)plVar44 >> 0x10);
              uStack_78d = (undefined1)((ulonglong)plVar44 >> 0x18);
              iStack_78c = (int)((ulonglong)plVar44 >> 0x20);
              local_798.QuadPart = LVar3.QuadPart;
              fVar61 = logf((float)iVar25);
              iStack_788 = (int)(longlong)(fVar61 + fVar61);
              pLVar36 = &local_798;
              do {
                p_Var46 = (_struct_19 *)pLVar36->QuadPart;
                p_Var51 = (_struct_19 *)pLVar36[1].QuadPart;
                DVar28 = pLVar36[2].s.LowPart;
                iVar25 = (int)((ulonglong)((longlong)p_Var51 - (longlong)p_Var46) >> 3) *
                         -0x33333333;
                uVar39 = iVar25 + 1;
                local_8d0 = pLVar36;
                if (DVar28 != 0) {
LAB_1434beea6:
                  if (8 < (int)uVar39) {
                    uVar30 = (ulonglong)(uVar39 >> 1);
                    _Var4 = p_Var46[uVar30 * 5 + 4];
                    _Var13 = p_Var46[uVar30 * 5];
                    _Var14 = (p_Var46 + uVar30 * 5)[1];
                    _Var15 = p_Var46[uVar30 * 5 + 2];
                    _Var16 = (p_Var46 + uVar30 * 5 + 2)[1];
                    p_Var46[uVar30 * 5 + 4] = p_Var46[4];
                    _Var17 = *p_Var46;
                    _Var18 = p_Var46[1];
                    _Var19 = p_Var46[3];
                    p_Var46[uVar30 * 5 + 2] = p_Var46[2];
                    (p_Var46 + uVar30 * 5 + 2)[1] = _Var19;
                    p_Var46[uVar30 * 5] = _Var17;
                    (p_Var46 + uVar30 * 5)[1] = _Var18;
                    p_Var46[4] = _Var4;
                    p_Var46[2] = _Var15;
                    p_Var46[3] = _Var16;
                    *p_Var46 = _Var13;
                    p_Var46[1] = _Var14;
                    p_Var37 = p_Var46;
                    p_Var53 = p_Var51 + 5;
                    do {
                      p_Var37 = p_Var37 + 5;
                      if (p_Var37 <= p_Var51) {
                        while ((ulonglong)p_Var46[4] <= (ulonglong)p_Var37[4]) {
                          if (((p_Var37[4] == p_Var46[4]) &&
                              ((int)p_Var37->LowPart < (int)p_Var46->LowPart)) ||
                             (p_Var37 = p_Var37 + 5, p_Var51 < p_Var37)) break;
                        }
                      }
                      p_Var54 = p_Var53 + -5;
                      if (p_Var46 < p_Var54) {
                        do {
                          p_Var42 = p_Var54;
                          p_Var54 = p_Var42;
                          if ((ulonglong)p_Var46[4] < (ulonglong)p_Var42[4]) break;
                          if ((p_Var46[4] == p_Var42[4]) &&
                             ((int)p_Var46->LowPart < (int)p_Var42->LowPart)) {
                            p_Var53 = p_Var42 + 5;
                            break;
                          }
                          p_Var54 = p_Var42 + -5;
                          p_Var53 = p_Var42;
                        } while (p_Var46 < p_Var54);
                      }
                      if (p_Var54 < p_Var37) goto LAB_1434beff6;
                      _Var4 = p_Var37[4];
                      _Var13 = *p_Var37;
                      _Var14 = p_Var37[1];
                      _Var15 = p_Var37[2];
                      _Var16 = p_Var37[3];
                      p_Var37[4] = p_Var54[4];
                      _Var17 = *p_Var54;
                      _Var18 = p_Var54[1];
                      _Var19 = p_Var54[3];
                      p_Var37[2] = p_Var54[2];
                      p_Var37[3] = _Var19;
                      *p_Var37 = _Var17;
                      p_Var37[1] = _Var18;
                      p_Var54[4] = _Var4;
                      p_Var54[2] = _Var15;
                      p_Var54[3] = _Var16;
                      *p_Var54 = _Var13;
                      p_Var54[1] = _Var14;
                      p_Var53 = p_Var54;
                    } while( true );
                  }
                  for (; p_Var53 = p_Var46, p_Var37 = p_Var46, p_Var46 < p_Var51;
                      p_Var51 = p_Var51 + -5) {
                    while (p_Var37 = p_Var37 + 5, p_Var37 <= p_Var51) {
                      if (((ulonglong)p_Var37[4] < (ulonglong)p_Var53[4]) ||
                         ((p_Var37[4] == p_Var53[4] &&
                          ((int)p_Var37->LowPart < (int)p_Var53->LowPart)))) {
                        p_Var53 = p_Var37;
                      }
                    }
                    local_368 = p_Var53[4];
                    local_388 = *(LARGE_INTEGER *)p_Var53;
                    _Stack_380 = p_Var53[1];
                    local_378 = p_Var53[2];
                    _Stack_370 = p_Var53[3];
                    _Var16 = local_378;
                    _Var17 = _Stack_370;
                    LVar3.s = local_388.s;
                    _Var15 = _Stack_380;
                    p_Var53[4] = p_Var51[4];
                    _Var4 = *p_Var51;
                    _Var13 = p_Var51[1];
                    _Var14 = p_Var51[3];
                    p_Var53[2] = p_Var51[2];
                    p_Var53[3] = _Var14;
                    *p_Var53 = _Var4;
                    p_Var53[1] = _Var13;
                    p_Var51[4] = local_368;
                    p_Var51[2].LowPart = local_378.LowPart;
                    p_Var51[2].HighPart = local_378.HighPart;
                    p_Var51[3].LowPart = _Stack_370.LowPart;
                    p_Var51[3].HighPart = _Stack_370.HighPart;
                    p_Var51->LowPart = local_388.s.LowPart;
                    p_Var51->HighPart = local_388.s.HighPart;
                    p_Var51[1].LowPart = _Stack_380.LowPart;
                    p_Var51[1].HighPart = _Stack_380.HighPart;
                    local_388.s = LVar3.s;
                    _Stack_380 = _Var15;
                    local_378 = _Var16;
                    _Stack_370 = _Var17;
                  }
                  goto LAB_1434bf4f8;
                }
LAB_1434bf0fb:
                if (uVar39 != 0) {
                  iVar25 = (iVar25 - (iVar25 + -1 >> 0x1f)) + -1 >> 1;
                  iVar41 = iVar25;
joined_r0x0001434bf121:
                  do {
                    iVar40 = iVar25 * 2 + 1;
                    if (iVar40 < (int)uVar39) {
                      iVar55 = iVar25 * 2 + 2;
                      if (iVar55 < (int)uVar39) {
                        lVar31 = (longlong)iVar55;
                        if (((ulonglong)p_Var46[(longlong)iVar40 * 5 + 4] <
                             (ulonglong)p_Var46[lVar31 * 5 + 4]) ||
                           ((p_Var46[(longlong)iVar40 * 5 + 4] == p_Var46[lVar31 * 5 + 4] &&
                            ((int)p_Var46[(longlong)iVar40 * 5].LowPart <
                             (int)p_Var46[lVar31 * 5].LowPart)))) goto LAB_1434bf167;
                      }
                      else {
LAB_1434bf167:
                        lVar31 = (longlong)iVar40;
                        iVar55 = iVar40;
                      }
                      p_Var51 = p_Var46 + (longlong)iVar25 * 5;
                      p_Var37 = p_Var46 + lVar31 * 5;
                      if (((ulonglong)p_Var37[4] < (ulonglong)p_Var51[4]) ||
                         ((p_Var37[4] == p_Var51[4] &&
                          ((int)p_Var37->LowPart < (int)p_Var51->LowPart)))) {
                        local_368 = p_Var51[4];
                        local_388 = *(LARGE_INTEGER *)p_Var51;
                        _Stack_380 = p_Var51[1];
                        local_378 = p_Var51[2];
                        _Stack_370 = p_Var51[3];
                        _Var16 = local_378;
                        _Var17 = _Stack_370;
                        LVar3.s = local_388.s;
                        _Var15 = _Stack_380;
                        p_Var51[4] = p_Var37[4];
                        _Var4 = *p_Var37;
                        _Var13 = p_Var37[1];
                        _Var14 = p_Var37[3];
                        p_Var51[2] = p_Var37[2];
                        p_Var51[3] = _Var14;
                        *p_Var51 = _Var4;
                        p_Var51[1] = _Var13;
                        p_Var37[4] = local_368;
                        p_Var37[2].LowPart = local_378.LowPart;
                        p_Var37[2].HighPart = local_378.HighPart;
                        p_Var37[3].LowPart = _Stack_370.LowPart;
                        p_Var37[3].HighPart = _Stack_370.HighPart;
                        p_Var37->LowPart = local_388.s.LowPart;
                        p_Var37->HighPart = local_388.s.HighPart;
                        p_Var37[1].LowPart = _Stack_380.LowPart;
                        p_Var37[1].HighPart = _Stack_380.HighPart;
                        iVar25 = iVar55;
                        local_388.s = LVar3.s;
                        _Stack_380 = _Var15;
                        local_378 = _Var16;
                        _Stack_370 = _Var17;
                        goto joined_r0x0001434bf121;
                      }
                    }
                    bVar59 = iVar41 != 0;
                    iVar25 = iVar41 + -1;
                    iVar41 = iVar25;
                  } while (bVar59);
                  if (1 < (int)uVar39) {
                    uVar30 = (ulonglong)uVar39 - 1;
                    local_368 = p_Var46[4];
                    local_388 = *(LARGE_INTEGER *)p_Var46;
                    _Stack_380 = p_Var46[1];
                    local_378 = p_Var46[2];
                    _Stack_370 = p_Var46[3];
                    _Var16 = local_378;
                    _Var17 = _Stack_370;
                    LVar3.s = local_388.s;
                    _Var15 = _Stack_380;
                    p_Var46[4] = p_Var46[uVar30 * 5 + 4];
                    _Var4 = p_Var46[uVar30 * 5];
                    _Var13 = (p_Var46 + uVar30 * 5)[1];
                    _Var14 = (p_Var46 + uVar30 * 5 + 2)[1];
                    p_Var46[2] = p_Var46[uVar30 * 5 + 2];
                    p_Var46[3] = _Var14;
                    *p_Var46 = _Var4;
                    p_Var46[1] = _Var13;
                    p_Var46[uVar30 * 5 + 4] = local_368;
                    p_Var51 = p_Var46 + uVar30 * 5 + 2;
                    p_Var51->LowPart = local_378.LowPart;
                    p_Var51->HighPart = local_378.HighPart;
                    p_Var51[1].LowPart = _Stack_370.LowPart;
                    p_Var51[1].HighPart = _Stack_370.HighPart;
                    p_Var51 = p_Var46 + uVar30 * 5;
                    p_Var51->LowPart = local_388.s.LowPart;
                    p_Var51->HighPart = local_388.s.HighPart;
                    p_Var51[1].LowPart = _Stack_380.LowPart;
                    p_Var51[1].HighPart = _Stack_380.HighPart;
                    local_388.s = LVar3.s;
                    _Stack_380 = _Var15;
                    local_378 = _Var16;
                    _Stack_370 = _Var17;
                    if (uVar39 != 2) {
                      do {
                        iVar41 = 0;
                        iVar25 = 1;
                        iVar40 = 0;
                        do {
                          iVar55 = iVar41 + 2;
                          lVar31 = (longlong)iVar55;
                          if (lVar31 < (longlong)uVar30) {
                            if (((ulonglong)p_Var46[(longlong)iVar25 * 5 + 4] <
                                 (ulonglong)p_Var46[lVar31 * 5 + 4]) ||
                               ((p_Var46[(longlong)iVar25 * 5 + 4] == p_Var46[lVar31 * 5 + 4] &&
                                ((int)p_Var46[(longlong)iVar25 * 5].LowPart <
                                 (int)p_Var46[lVar31 * 5].LowPart)))) goto LAB_1434bf2fb;
                          }
                          else {
LAB_1434bf2fb:
                            lVar31 = (longlong)iVar25;
                            iVar55 = iVar25;
                          }
                          p_Var51 = p_Var46 + (longlong)iVar40 * 5;
                          p_Var37 = p_Var46 + lVar31 * 5;
                          if (((ulonglong)p_Var51[4] <= (ulonglong)p_Var37[4]) &&
                             ((p_Var37[4] != p_Var51[4] ||
                              ((int)p_Var51->LowPart <= (int)p_Var37->LowPart)))) break;
                          _Var4 = p_Var51[4];
                          _Var13 = *p_Var51;
                          _Var14 = p_Var51[1];
                          _Var15 = p_Var51[2];
                          _Var16 = p_Var51[3];
                          p_Var51[4] = p_Var37[4];
                          _Var17 = *p_Var37;
                          _Var18 = p_Var37[1];
                          _Var19 = p_Var37[3];
                          p_Var51[2] = p_Var37[2];
                          p_Var51[3] = _Var19;
                          *p_Var51 = _Var17;
                          p_Var51[1] = _Var18;
                          p_Var37[4] = _Var4;
                          p_Var37[2] = _Var15;
                          p_Var37[3] = _Var16;
                          *p_Var37 = _Var13;
                          p_Var37[1] = _Var14;
                          iVar41 = iVar55 * 2;
                          iVar25 = iVar55 * 2 + 1;
                          iVar40 = iVar55;
                        } while ((longlong)iVar25 < (longlong)uVar30);
                        uVar58 = uVar30 - 1;
                        local_368 = p_Var46[4];
                        local_388 = *(LARGE_INTEGER *)p_Var46;
                        _Stack_380 = p_Var46[1];
                        local_378 = p_Var46[2];
                        _Stack_370 = p_Var46[3];
                        _Var16 = local_378;
                        _Var17 = _Stack_370;
                        LVar3.s = local_388.s;
                        _Var15 = _Stack_380;
                        p_Var46[4] = p_Var46[uVar58 * 5 + 4];
                        _Var4 = p_Var46[uVar58 * 5];
                        _Var13 = (p_Var46 + uVar58 * 5)[1];
                        _Var14 = (p_Var46 + uVar58 * 5 + 2)[1];
                        p_Var46[2] = p_Var46[uVar58 * 5 + 2];
                        p_Var46[3] = _Var14;
                        *p_Var46 = _Var4;
                        p_Var46[1] = _Var13;
                        p_Var46[uVar58 * 5 + 4] = local_368;
                        p_Var51 = p_Var46 + uVar58 * 5 + 2;
                        p_Var51->LowPart = local_378.LowPart;
                        p_Var51->HighPart = local_378.HighPart;
                        p_Var51[1].LowPart = _Stack_370.LowPart;
                        p_Var51[1].HighPart = _Stack_370.HighPart;
                        p_Var51 = p_Var46 + uVar58 * 5;
                        p_Var51->LowPart = local_388.s.LowPart;
                        p_Var51->HighPart = local_388.s.HighPart;
                        p_Var51[1].LowPart = _Stack_380.LowPart;
                        p_Var51[1].HighPart = _Stack_380.HighPart;
                        bVar59 = 2 < uVar30;
                        uVar30 = uVar58;
                        local_388.s = LVar3.s;
                        _Stack_380 = _Var15;
                        local_378 = _Var16;
                        _Stack_370 = _Var17;
                      } while (bVar59);
                    }
                  }
                }
LAB_1434bf4f8:
                pLVar36 = local_8d0 + -3;
              } while (&local_798 <= pLVar36);
            }
            FUN_147a610ba(param_1,local_870,param_1 + 0xa98);
          }
          else if ((*(byte *)(param_1 + 0x9ab) & 8) != 0) {
            iVar25 = *(int *)(param_1 + 0xa70);
            if (1 < (longlong)iVar25) {
              LVar3.QuadPart = *local_870;
              memset(&iStack_788,0,0x2f0);
              plVar44 = (longlong *)(LVar3.QuadPart + (longlong)iVar25 * 0x28) + -5;
              uStack_790 = SUB81(plVar44,0);
              bStack_78f = (byte)((ulonglong)plVar44 >> 8);
              bStack_78e = (byte)((ulonglong)plVar44 >> 0x10);
              uStack_78d = (undefined1)((ulonglong)plVar44 >> 0x18);
              iStack_78c = (int)((ulonglong)plVar44 >> 0x20);
              local_798.QuadPart = LVar3.QuadPart;
              fVar61 = logf((float)iVar25);
              iStack_788 = (int)(longlong)(fVar61 + fVar61);
              pLVar36 = &local_798;
              do {
                p_Var46 = (_struct_19 *)pLVar36->QuadPart;
                p_Var37 = (_struct_19 *)pLVar36[1].QuadPart;
                DVar28 = pLVar36[2].s.LowPart;
                iVar25 = (int)((ulonglong)((longlong)p_Var37 - (longlong)p_Var46) >> 3) *
                         -0x33333333;
                uVar39 = iVar25 + 1;
                p_Var51 = p_Var37;
                p_Var53 = p_Var46;
                local_8c0 = pLVar36;
                if (DVar28 != 0) {
LAB_1434be358:
                  pLVar36 = local_8c0;
                  if (8 < (int)uVar39) {
                    local_8d0 = (LARGE_INTEGER *)CONCAT44(local_8d0._4_4_,DVar28);
                    uVar30 = (ulonglong)(uVar39 >> 1);
                    _Var4 = p_Var46[uVar30 * 5 + 4];
                    _Var13 = p_Var46[uVar30 * 5];
                    _Var14 = (p_Var46 + uVar30 * 5)[1];
                    _Var15 = p_Var46[uVar30 * 5 + 2];
                    _Var16 = (p_Var46 + uVar30 * 5 + 2)[1];
                    p_Var46[uVar30 * 5 + 4] = p_Var46[4];
                    _Var17 = *p_Var46;
                    _Var18 = p_Var46[1];
                    _Var19 = p_Var46[3];
                    p_Var46[uVar30 * 5 + 2] = p_Var46[2];
                    (p_Var46 + uVar30 * 5 + 2)[1] = _Var19;
                    p_Var46[uVar30 * 5] = _Var17;
                    (p_Var46 + uVar30 * 5)[1] = _Var18;
                    p_Var46[4] = _Var4;
                    p_Var46[2] = _Var15;
                    p_Var46[3] = _Var16;
                    *p_Var46 = _Var13;
                    p_Var46[1] = _Var14;
                    p_Var54 = p_Var51 + 5;
                    p_Var42 = p_Var46;
                    do {
                      p_Var23 = p_Var42 + 5;
                      p_Var52 = p_Var42 + 5;
                      do {
                        p_Var56 = p_Var52;
                        p_Var42 = p_Var23;
                        if (p_Var51 < p_Var42) break;
                        p_Var23 = p_Var42 + 5;
                        p_Var52 = p_Var56 + 5;
                      } while ((int)p_Var46->LowPart <= (int)p_Var42->LowPart);
                      p_Var23 = p_Var54 + -10;
                      do {
                        p_Var52 = p_Var54;
                        p_Var57 = p_Var23;
                        p_Var54 = p_Var52 + -5;
                        if (p_Var54 <= p_Var46) break;
                        p_Var23 = p_Var57 + -5;
                      } while ((int)p_Var54->LowPart <= (int)p_Var46->LowPart);
                      if (p_Var54 < p_Var42) goto LAB_1434be48b;
                      _Var4 = p_Var42[4];
                      _Var13 = *p_Var42;
                      _Var14 = p_Var42[1];
                      _Var15 = p_Var42[2];
                      _Var16 = p_Var42[3];
                      p_Var42[4] = p_Var52[-1];
                      _Var17 = *p_Var54;
                      _Var18 = p_Var52[-4];
                      _Var19 = p_Var52[-2];
                      p_Var42[2] = p_Var52[-3];
                      p_Var42[3] = _Var19;
                      *p_Var42 = _Var17;
                      p_Var42[1] = _Var18;
                      p_Var52[-1] = _Var4;
                      p_Var52[-3] = _Var15;
                      p_Var52[-2] = _Var16;
                      *p_Var54 = _Var13;
                      p_Var52[-4] = _Var14;
                    } while( true );
                  }
                  if (p_Var46 < p_Var51) {
                    do {
                      p_Var37 = p_Var46;
                      if (p_Var46 + 5 <= p_Var51) {
                        DVar28 = p_Var46->LowPart;
                        p_Var53 = p_Var46 + 5;
                        do {
                          if ((int)p_Var53->LowPart < (int)DVar28) {
                            p_Var37 = p_Var53;
                            DVar28 = p_Var53->LowPart;
                          }
                          p_Var53 = p_Var53 + 5;
                        } while (p_Var53 <= p_Var51);
                      }
                      local_368 = p_Var37[4];
                      local_388 = *(LARGE_INTEGER *)p_Var37;
                      _Stack_380 = p_Var37[1];
                      local_378 = p_Var37[2];
                      _Stack_370 = p_Var37[3];
                      _Var16 = local_378;
                      _Var17 = _Stack_370;
                      LVar3.s = local_388.s;
                      _Var15 = _Stack_380;
                      p_Var37[4] = p_Var51[4];
                      _Var4 = *p_Var51;
                      _Var13 = p_Var51[1];
                      _Var14 = p_Var51[3];
                      p_Var37[2] = p_Var51[2];
                      p_Var37[3] = _Var14;
                      *p_Var37 = _Var4;
                      p_Var37[1] = _Var13;
                      p_Var51[4] = local_368;
                      p_Var51[2].LowPart = local_378.LowPart;
                      p_Var51[2].HighPart = local_378.HighPart;
                      p_Var51[3].LowPart = _Stack_370.LowPart;
                      p_Var51[3].HighPart = _Stack_370.HighPart;
                      p_Var51->LowPart = local_388.s.LowPart;
                      p_Var51->HighPart = local_388.s.HighPart;
                      p_Var51[1].LowPart = _Stack_380.LowPart;
                      p_Var51[1].HighPart = _Stack_380.HighPart;
                      p_Var51 = p_Var51 + -5;
                      local_388.s = LVar3.s;
                      _Stack_380 = _Var15;
                      local_378 = _Var16;
                      _Stack_370 = _Var17;
                    } while (p_Var46 < p_Var51);
                  }
                  goto LAB_1434be915;
                }
LAB_1434be59b:
                pLVar36 = local_8c0;
                if (uVar39 != 0) {
                  iVar25 = (iVar25 - (iVar25 + -1 >> 0x1f)) + -1 >> 1;
                  iVar41 = iVar25;
joined_r0x0001434be5bd:
                  do {
                    iVar40 = iVar25 * 2 + 1;
                    if (iVar40 < (int)uVar39) {
                      iVar55 = iVar25 * 2 + 2;
                      if ((iVar55 < (int)uVar39) &&
                         ((int)p_Var46[(longlong)iVar55 * 5].LowPart <=
                          (int)p_Var46[(longlong)iVar40 * 5].LowPart)) {
                        iVar40 = iVar55;
                      }
                      if ((int)p_Var46[(longlong)iVar40 * 5].LowPart <
                          (int)p_Var46[(longlong)iVar25 * 5].LowPart) {
                        p_Var51 = p_Var46 + (longlong)iVar25 * 5;
                        p_Var37 = p_Var46 + (longlong)iVar40 * 5;
                        local_368 = p_Var51[4];
                        local_388 = *(LARGE_INTEGER *)p_Var51;
                        _Stack_380 = p_Var51[1];
                        local_378 = p_Var51[2];
                        _Stack_370 = p_Var51[3];
                        _Var16 = local_378;
                        _Var17 = _Stack_370;
                        LVar3.s = local_388.s;
                        _Var15 = _Stack_380;
                        p_Var51[4] = p_Var37[4];
                        _Var4 = *p_Var37;
                        _Var13 = p_Var37[1];
                        _Var14 = p_Var37[3];
                        p_Var51[2] = p_Var37[2];
                        p_Var51[3] = _Var14;
                        *p_Var51 = _Var4;
                        p_Var51[1] = _Var13;
                        p_Var37[4] = local_368;
                        p_Var37[2].LowPart = local_378.LowPart;
                        p_Var37[2].HighPart = local_378.HighPart;
                        p_Var37[3].LowPart = _Stack_370.LowPart;
                        p_Var37[3].HighPart = _Stack_370.HighPart;
                        p_Var37->LowPart = local_388.s.LowPart;
                        p_Var37->HighPart = local_388.s.HighPart;
                        p_Var37[1].LowPart = _Stack_380.LowPart;
                        p_Var37[1].HighPart = _Stack_380.HighPart;
                        local_388.s = LVar3.s;
                        _Stack_380 = _Var15;
                        local_378 = _Var16;
                        _Stack_370 = _Var17;
                        iVar25 = iVar40;
                        goto joined_r0x0001434be5bd;
                      }
                    }
                    bVar59 = iVar41 != 0;
                    iVar25 = iVar41 + -1;
                    iVar41 = iVar25;
                  } while (bVar59);
                  if (1 < (int)uVar39) {
                    uVar30 = (ulonglong)uVar39 - 1;
                    local_368 = p_Var46[4];
                    local_388 = *(LARGE_INTEGER *)p_Var46;
                    _Stack_380 = p_Var46[1];
                    local_378 = p_Var46[2];
                    _Stack_370 = p_Var46[3];
                    _Var16 = local_378;
                    _Var17 = _Stack_370;
                    LVar3.s = local_388.s;
                    _Var15 = _Stack_380;
                    p_Var46[4] = p_Var46[uVar30 * 5 + 4];
                    _Var4 = p_Var46[uVar30 * 5];
                    _Var13 = (p_Var46 + uVar30 * 5)[1];
                    _Var14 = (p_Var46 + uVar30 * 5 + 2)[1];
                    p_Var46[2] = p_Var46[uVar30 * 5 + 2];
                    p_Var46[3] = _Var14;
                    *p_Var46 = _Var4;
                    p_Var46[1] = _Var13;
                    p_Var46[uVar30 * 5 + 4] = local_368;
                    p_Var51 = p_Var46 + uVar30 * 5 + 2;
                    p_Var51->LowPart = local_378.LowPart;
                    p_Var51->HighPart = local_378.HighPart;
                    p_Var51[1].LowPart = _Stack_370.LowPart;
                    p_Var51[1].HighPart = _Stack_370.HighPart;
                    p_Var51 = p_Var46 + uVar30 * 5;
                    p_Var51->LowPart = local_388.s.LowPart;
                    p_Var51->HighPart = local_388.s.HighPart;
                    p_Var51[1].LowPart = _Stack_380.LowPart;
                    p_Var51[1].HighPart = _Stack_380.HighPart;
                    local_388.s = LVar3.s;
                    _Stack_380 = _Var15;
                    local_378 = _Var16;
                    _Stack_370 = _Var17;
                    if (uVar39 != 2) {
                      do {
                        iVar25 = 0;
                        iVar40 = 1;
                        iVar41 = 0;
                        do {
                          iVar25 = iVar25 + 2;
                          iVar55 = iVar40;
                          if (((longlong)iVar25 < (longlong)uVar30) &&
                             ((int)p_Var46[(longlong)iVar25 * 5].LowPart <=
                              (int)p_Var46[(longlong)iVar40 * 5].LowPart)) {
                            iVar55 = iVar25;
                          }
                          if ((int)p_Var46[(longlong)iVar41 * 5].LowPart <=
                              (int)p_Var46[(longlong)iVar55 * 5].LowPart) break;
                          p_Var51 = p_Var46 + (longlong)iVar41 * 5;
                          p_Var37 = p_Var46 + (longlong)iVar55 * 5;
                          _Var4 = p_Var51[4];
                          _Var13 = *p_Var51;
                          _Var14 = p_Var51[1];
                          _Var15 = p_Var51[2];
                          _Var16 = p_Var51[3];
                          p_Var51[4] = p_Var37[4];
                          _Var17 = *p_Var37;
                          _Var18 = p_Var37[1];
                          _Var19 = p_Var37[3];
                          p_Var51[2] = p_Var37[2];
                          p_Var51[3] = _Var19;
                          *p_Var51 = _Var17;
                          p_Var51[1] = _Var18;
                          p_Var37[4] = _Var4;
                          p_Var37[2] = _Var15;
                          p_Var37[3] = _Var16;
                          *p_Var37 = _Var13;
                          p_Var37[1] = _Var14;
                          iVar25 = iVar55 * 2;
                          iVar40 = iVar55 * 2 + 1;
                          iVar41 = iVar55;
                        } while ((longlong)iVar40 < (longlong)uVar30);
                        uVar58 = uVar30 - 1;
                        local_368 = p_Var46[4];
                        local_388 = *(LARGE_INTEGER *)p_Var46;
                        _Stack_380 = p_Var46[1];
                        local_378 = p_Var46[2];
                        _Stack_370 = p_Var46[3];
                        _Var16 = local_378;
                        _Var17 = _Stack_370;
                        LVar3.s = local_388.s;
                        _Var15 = _Stack_380;
                        p_Var46[4] = p_Var46[uVar58 * 5 + 4];
                        _Var4 = p_Var46[uVar58 * 5];
                        _Var13 = (p_Var46 + uVar58 * 5)[1];
                        _Var14 = (p_Var46 + uVar58 * 5 + 2)[1];
                        p_Var46[2] = p_Var46[uVar58 * 5 + 2];
                        p_Var46[3] = _Var14;
                        *p_Var46 = _Var4;
                        p_Var46[1] = _Var13;
                        p_Var46[uVar58 * 5 + 4] = local_368;
                        p_Var51 = p_Var46 + uVar58 * 5 + 2;
                        p_Var51->LowPart = local_378.LowPart;
                        p_Var51->HighPart = local_378.HighPart;
                        p_Var51[1].LowPart = _Stack_370.LowPart;
                        p_Var51[1].HighPart = _Stack_370.HighPart;
                        p_Var51 = p_Var46 + uVar58 * 5;
                        p_Var51->LowPart = local_388.s.LowPart;
                        p_Var51->HighPart = local_388.s.HighPart;
                        p_Var51[1].LowPart = _Stack_380.LowPart;
                        p_Var51[1].HighPart = _Stack_380.HighPart;
                        bVar59 = 2 < uVar30;
                        uVar30 = uVar58;
                        local_388.s = LVar3.s;
                        _Stack_380 = _Var15;
                        local_378 = _Var16;
                        _Stack_370 = _Var17;
                      } while (bVar59);
                    }
                  }
                }
LAB_1434be915:
                pLVar36 = pLVar36 + -3;
              } while (&local_798 <= pLVar36);
            }
          }
          QueryPerformanceCounter(&local_798);
          pfVar21 = DAT_14cad6e98;
          local_8d0 = (LARGE_INTEGER *)CONCAT44(local_8d0._4_4_,*(undefined4 *)(param_1 + 0xa70));
          iVar25 = *local_8a8;
          if (iVar25 == 0x40000002) {
            fVar61 = *DAT_14cad6e98;
LAB_1434be9ab:
            iVar25 = 0x40000002;
            uVar30 = 0;
            lVar31 = DAT_14cad6eb0;
          }
          else {
            if (DAT_14c86a9f8 == 0) {
              fVar61 = *DAT_14cad6e98;
            }
            else if (iVar25 == 2) {
              fVar61 = *DAT_14cad6e98;
              iVar25 = 2;
            }
            else {
              if (iVar25 == 1) {
                DVar28 = FUN_140ad26c0();
                DVar29 = GetCurrentThreadId();
                bVar59 = DVar28 == DVar29;
                iVar25 = *local_8a8;
              }
              else {
                bVar59 = false;
              }
              fVar61 = pfVar21[bVar59 ^ 1];
              if (iVar25 == 0x40000002) goto LAB_1434be9ab;
            }
            lVar31 = DAT_14cad6eb0;
            uVar30 = 1;
            if (((DAT_14c86a9f8 & 1) != 0) && (iVar25 != 2)) {
              if (iVar25 == 1) {
                DVar28 = FUN_140ad26c0();
                DVar29 = GetCurrentThreadId();
                uVar30 = (ulonglong)(DVar28 == DVar29);
                iVar25 = *local_8a8;
              }
              else {
                uVar30 = 0;
              }
            }
            uVar30 = uVar30 ^ 1;
          }
          lVar32 = DAT_14cad5d90;
          fVar66 = *(float *)(lVar31 + uVar30 * 4);
          fVar64 = fVar61;
          if (fVar61 <= fVar66) {
            fVar64 = fVar66;
            fVar66 = fVar61;
          }
          dVar5 = (double)*(float *)(param_1 + 0xb24) * dVar67;
          local_8d3 = (bool)(local_8d3 ^ 1);
          local_8d1 = local_8d1 ^ 1;
          if (iVar25 == 0x40000002) {
            uVar30 = 0;
          }
          else {
            bVar59 = true;
            if ((DAT_14c86a9f8 == 1) && (iVar25 != 2)) {
              if (iVar25 == 1) {
                DVar28 = FUN_140ad26c0();
                DVar29 = GetCurrentThreadId();
                bVar59 = DVar28 == DVar29;
              }
              else {
                bVar59 = false;
              }
            }
            uVar30 = (ulonglong)(bVar59 ^ 1);
          }
          local_798.QuadPart = (LONGLONG)local_888;
          uStack_790 = 0 < *(int *)(lVar32 + uVar30 * 4);
          bStack_78f = local_8d1;
          bStack_78e = local_8d3;
          iStack_78c = 0;
          iStack_788 = 0;
          LStack_780.s.HighPart =
               ~-(uint)(fVar60 == 0.0) & (uint)(1.0 / fVar60) |
               (uint)param_2 & -(uint)(fVar60 == 0.0);
          LStack_780.s.LowPart = (DWORD)fVar64;
          local_760 = 0;
          fStack_784 = fVar66;
          local_778 = LVar12;
          local_770 = dVar67;
          local_768 = dVar5;
          if (*(char *)(param_1 + 0xcbf) == '\x01') {
            if ((longlong)*(int *)(param_1 + 0xaa0) != 0) {
              local_898 = *(longlong *)(param_1 + 0xa68);
              pLVar36 = *(LARGE_INTEGER **)(param_1 + 0xa98);
              local_8c0 = pLVar36 + (longlong)*(int *)(param_1 + 0xaa0) * 2;
              do {
                uVar30 = (ulonglong)pLVar36[1].s.LowPart;
                if (uVar30 != 0) {
                  lVar31 = local_898 + (longlong)*(int *)((longlong)pLVar36 + 4) * 0x28;
                  do {
                    cVar24 = FUN_1434c1800(param_1,lVar31,&local_798);
                    if (cVar24 == '\0') goto LAB_1434beb81;
                    lVar31 = lVar31 + 0x28;
                    uVar30 = uVar30 - 1;
                  } while (uVar30 != 0);
                }
                pLVar36 = pLVar36 + 2;
              } while (pLVar36 != local_8c0);
            }
          }
          else {
            uVar30 = (ulonglong)*(uint *)(param_1 + 0xa70);
            if (uVar30 != 0) {
              lVar31 = *(longlong *)(param_1 + 0xa68);
              do {
                uVar30 = uVar30 - 1;
                cVar24 = FUN_1434c1800(param_1,lVar31,&local_798);
                if (cVar24 == '\0') break;
                lVar31 = lVar31 + 0x28;
              } while (uVar30 != 0);
            }
          }
LAB_1434beb81:
          (**(code **)(*local_888 + 0x2f8))(local_888,0);
          local_8f8 = (longlong *)CONCAT44(local_8f8._4_4_,*(undefined4 *)(param_1 + 0xca8));
          local_8f0 = (LARGE_INTEGER *)((ulonglong)local_8f0 & 0xffffffff00000000);
          FUN_14368964c(local_858,**(undefined8 **)(param_1 + 0xf8),local_818,param_1 + 0x1248);
          pfVar21 = DAT_14cad5ef0;
          if ((uint)local_8d0 != 0) {
            fVar65 = (float)(iStack_788 + iStack_78c) / (float)(int)(uint)local_8d0;
          }
          if (0.0 < *(float *)(param_1 + 0xa58)) {
            iVar25 = *local_8a8;
            if (iVar25 == 0x40000002) {
              fVar60 = *DAT_14cad5ef0;
LAB_1434bec6b:
              fVar66 = *DAT_14cad5ed8;
              fVar61 = fVar60;
              if (fVar60 <= fVar66) {
                fVar61 = fVar66;
                fVar66 = fVar60;
              }
LAB_1434bec82:
              fVar60 = *DAT_14cad5f08;
LAB_1434bec8e:
              uVar30 = 0;
              lVar31 = DAT_14cad5f20;
            }
            else {
              if (DAT_14c86a9f8 == 0) {
                fVar60 = *DAT_14cad5ef0;
              }
              else if (iVar25 == 2) {
                fVar60 = *DAT_14cad5ef0;
                iVar25 = 2;
              }
              else {
                uVar30 = 1;
                if (iVar25 == 1) {
                  DVar28 = FUN_140ad26c0();
                  DVar29 = GetCurrentThreadId();
                  uVar30 = (ulonglong)(DVar28 != DVar29);
                  iVar25 = *local_8a8;
                }
                fVar60 = pfVar21[uVar30];
                if (iVar25 == 0x40000002) goto LAB_1434bec6b;
              }
              pfVar21 = DAT_14cad5ed8;
              fVar61 = fVar60;
              if (((DAT_14c86a9f8 & 1) == 0) || (iVar25 == 2)) {
                fVar66 = *DAT_14cad5ed8;
                if (fVar60 <= fVar66) {
                  fVar61 = fVar66;
                  fVar66 = fVar60;
                }
              }
              else {
                uVar30 = 1;
                if (iVar25 == 1) {
                  DVar28 = FUN_140ad26c0();
                  DVar29 = GetCurrentThreadId();
                  uVar30 = (ulonglong)(DVar28 != DVar29);
                  iVar25 = *local_8a8;
                }
                fVar66 = pfVar21[uVar30];
                if (fVar60 <= fVar66) {
                  fVar61 = fVar66;
                  fVar66 = fVar60;
                }
                if (iVar25 == 0x40000002) goto LAB_1434bec82;
              }
              pfVar21 = DAT_14cad5f08;
              if ((DAT_14c86a9f8 & 1) == 0) {
                fVar60 = *DAT_14cad5f08;
              }
              else if (iVar25 == 2) {
                fVar60 = *DAT_14cad5f08;
                iVar25 = 2;
              }
              else {
                uVar30 = 1;
                if (iVar25 == 1) {
                  DVar28 = FUN_140ad26c0();
                  DVar29 = GetCurrentThreadId();
                  uVar30 = (ulonglong)(DVar28 != DVar29);
                  iVar25 = *local_8a8;
                }
                fVar60 = pfVar21[uVar30];
                if (iVar25 == 0x40000002) goto LAB_1434bec8e;
              }
              lVar31 = DAT_14cad5f20;
              if (((DAT_14c86a9f8 & 1) == 0) || (iVar25 == 2)) goto LAB_1434bec8e;
              if (iVar25 == 1) {
                DVar28 = FUN_140ad26c0();
                DVar29 = GetCurrentThreadId();
                uVar30 = (ulonglong)(DVar28 != DVar29);
              }
              else {
                uVar30 = 1;
              }
            }
            fVar64 = *(float *)(lVar31 + uVar30 * 4);
            fVar62 = fVar64;
            if (fVar60 <= fVar64) {
              fVar62 = fVar60;
            }
            dVar67 = (double)fVar62;
            if (1.0 <= (double)fVar62) {
              dVar67 = 1.0;
            }
            if (dVar67 <= 0.1) {
              dVar67 = 0.1;
            }
            if (fVar60 <= fVar64) {
              fVar60 = fVar64;
            }
            dVar5 = (double)fVar60;
            if (1.0 <= (double)fVar60) {
              dVar5 = 1.0;
            }
            if (dVar5 <= 0.1) {
              dVar5 = 0.1;
            }
            if (fVar65 <= fVar61) {
              if (fVar66 <= fVar65) {
                fVar60 = *(float *)(param_1 + 0xb20);
              }
              else {
                fVar60 = (1.0 - fVar65) * 0.5 * *(float *)(param_1 + 0xb20);
              }
            }
            else {
              fVar60 = *(float *)(param_1 + 0xb20) + 0.1;
            }
            if ((float)dVar5 <= fVar60) {
              fVar60 = (float)dVar5;
            }
            if (fVar60 <= (float)dVar67) {
              fVar60 = (float)dVar67;
            }
            *(float *)(param_1 + 0xb20) = fVar60;
          }
          LOCK();
          *(float *)(param_1 + 0xb30) = fVar65;
          UNLOCK();
          piVar33 = local_8a8;
          plVar34 = local_810;
        }
        lVar31 = DAT_14cad6ec8;
        iVar25 = *piVar33;
        if (((iVar25 == 0x40000002) || (DAT_14c86a9f8 != 1)) || (iVar25 == 2)) {
          uVar30 = 0;
        }
        else if (iVar25 == 1) {
          DVar28 = FUN_140ad26c0();
          DVar29 = GetCurrentThreadId();
          uVar30 = (ulonglong)(DVar28 != DVar29);
        }
        else {
          uVar30 = 1;
        }
        if ((*(int *)(lVar31 + uVar30 * 4) == 1) &&
           (cVar24 = FUN_147cddbfa(local_858), cVar24 != '\0')) {
          FUN_143687d6e(local_858,**(undefined8 **)(param_1 + 0xf8));
        }
      }
      else {
        FUN_143687178(lVar31,**(undefined8 **)(param_1 + 0xf8));
      }
    }
    QueryPerformanceCounter(&local_798);
    dVar67 = (double)local_798.QuadPart * DAT_14c83f420 + 16777216.0;
    dVar11 = dVar67 - (dVar11 + 16777216.0);
    uVar27 = *(undefined4 *)(param_1 + 0xca8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c868710) && (FUN_144b3d300(&DAT_14c868710), DAT_14c868710 == -1)) {
      FUN_145c3c252(&DAT_14c8686c8);
      DAT_14c868708 = &DAT_14c8686c8;
      atexit(thunk_FUN_14626bbac);
      _Init_thread_footer(&DAT_14c868710);
    }
    FUN_1434bf7ec(*(uint *)(DAT_14c868708 + 4) & 0x7fffffff,uVar27);
    dVar5 = *(double *)(param_1 + 0x918);
    if (*(double *)(param_1 + 0x918) <= dVar11) {
      dVar5 = dVar11;
    }
    *(double *)(param_1 + 0x918) = dVar5;
    *(double *)(param_1 + 0x908) = dVar11 + *(double *)(param_1 + 0x908);
    iVar25 = *(int *)(param_1 + 0x920);
    *(int *)(param_1 + 0x920) = iVar25 + 1;
    if (-1 < iVar25 && 2.0 < dVar67 - *(double *)(param_1 + 0x910)) {
      *(double *)(param_1 + 0x910) = dVar67;
      *(undefined8 *)(param_1 + 0x908) = 0;
      *(undefined8 *)(param_1 + 0x918) = 0;
      *(undefined4 *)(param_1 + 0x920) = 0;
    }
  }
  if (plVar34 != (longlong *)0x0) {
    LOCK();
    plVar44 = plVar34 + 1;
    *(int *)plVar44 = (int)*plVar44 + -1;
    UNLOCK();
    if ((int)*plVar44 == 0) {
      (**(code **)*plVar34)(plVar34);
      LOCK();
      piVar33 = (int *)((longlong)plVar34 + 0xc);
      *piVar33 = *piVar33 + -1;
      UNLOCK();
      if (*piVar33 == 0) {
        (**(code **)(*plVar34 + 0x10))(plVar34);
      }
    }
  }
LAB_1434bcf53:
  if (lVar1 != 0) {
    FUN_140080e72(lVar1,uVar50);
  }
  QueryPerformanceCounter(&local_798);
  DAT_14cad6e08 =
       (((double)local_798.QuadPart * DAT_14c83f420 + 16777216.0) -
       ((double)LVar22.QuadPart * dVar20 + 16777216.0)) + DAT_14cad6e08;
  if ((local_f0 ^ (ulonglong)auStack_918) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_1434beff6:
  local_368 = p_Var46[4];
  local_388 = *(LARGE_INTEGER *)p_Var46;
  _Stack_380 = p_Var46[1];
  local_378 = p_Var46[2];
  _Stack_370 = p_Var46[3];
  _Var16 = local_378;
  _Var17 = _Stack_370;
  LVar3.s = local_388.s;
  _Var15 = _Stack_380;
  p_Var46[4] = p_Var54[4];
  _Var4 = *p_Var54;
  _Var13 = p_Var54[1];
  _Var14 = p_Var54[3];
  p_Var46[2] = p_Var54[2];
  p_Var46[3] = _Var14;
  *p_Var46 = _Var4;
  p_Var46[1] = _Var13;
  p_Var54[4] = local_368;
  p_Var54[2].LowPart = local_378.LowPart;
  p_Var54[2].HighPart = local_378.HighPart;
  p_Var54[3].LowPart = _Stack_370.LowPart;
  p_Var54[3].HighPart = _Stack_370.HighPart;
  p_Var54->LowPart = local_388.s.LowPart;
  p_Var54->HighPart = local_388.s.HighPart;
  p_Var54[1].LowPart = _Stack_380.LowPart;
  p_Var54[1].HighPart = _Stack_380.HighPart;
  DVar28 = DVar28 - 1;
  p_Var53 = p_Var53 + -10;
  local_388.s = LVar3.s;
  _Stack_380 = _Var15;
  local_378 = _Var16;
  _Stack_370 = _Var17;
  if ((longlong)p_Var53 - (longlong)p_Var46 < (longlong)p_Var51 - (longlong)p_Var37) {
    if (p_Var37 < p_Var51) {
      local_8d0->QuadPart = (LONGLONG)p_Var37;
      local_8d0[1].QuadPart = (LONGLONG)p_Var51;
      local_8d0[2].s.LowPart = DVar28;
      local_8d0 = local_8d0 + 3;
    }
    if (p_Var54 <= p_Var46 + 5) goto LAB_1434bf4f8;
  }
  else {
    if (p_Var46 + 5 < p_Var54) {
      local_8d0->QuadPart = (LONGLONG)p_Var46;
      local_8d0[1].QuadPart = (LONGLONG)p_Var53;
      local_8d0[2].s.LowPart = DVar28;
      local_8d0 = local_8d0 + 3;
    }
    p_Var53 = p_Var51;
    p_Var46 = p_Var37;
    if (p_Var51 <= p_Var37) goto LAB_1434bf4f8;
  }
  iVar25 = (int)((ulonglong)((longlong)p_Var53 - (longlong)p_Var46) >> 3) * -0x33333333;
  uVar39 = iVar25 + 1;
  p_Var51 = p_Var53;
  if (DVar28 == 0) goto LAB_1434bf0fb;
  goto LAB_1434beea6;
LAB_1434be48b:
  local_368 = p_Var46[4];
  local_388 = *(LARGE_INTEGER *)p_Var46;
  _Stack_380 = p_Var46[1];
  local_378 = p_Var46[2];
  _Stack_370 = p_Var46[3];
  _Var16 = local_378;
  _Var17 = _Stack_370;
  LVar3.s = local_388.s;
  _Var15 = _Stack_380;
  p_Var46[4] = p_Var52[-1];
  _Var4 = *p_Var54;
  _Var13 = p_Var52[-4];
  _Var14 = p_Var52[-2];
  p_Var46[2] = p_Var52[-3];
  p_Var46[3] = _Var14;
  *p_Var46 = _Var4;
  p_Var46[1] = _Var13;
  p_Var52[-1] = local_368;
  p_Var52[-3].LowPart = local_378.LowPart;
  p_Var52[-3].HighPart = local_378.HighPart;
  p_Var52[-2].LowPart = _Stack_370.LowPart;
  p_Var52[-2].HighPart = _Stack_370.HighPart;
  p_Var54->LowPart = local_388.s.LowPart;
  p_Var52[-5].HighPart = local_388.s.HighPart;
  p_Var52[-4].LowPart = _Stack_380.LowPart;
  p_Var52[-4].HighPart = _Stack_380.HighPart;
  DVar28 = DVar28 - 1;
  p_Var52 = p_Var52 + -10;
  local_388.s = LVar3.s;
  _Stack_380 = _Var15;
  local_378 = _Var16;
  _Stack_370 = _Var17;
  if ((longlong)p_Var57 - (longlong)p_Var53 < (longlong)p_Var37 - (longlong)p_Var56) {
    if (p_Var42 < p_Var51) {
      local_8c0->QuadPart = (LONGLONG)p_Var42;
      local_8c0[1].QuadPart = (LONGLONG)p_Var51;
      local_8c0[2].s.LowPart = DVar28;
      local_8c0 = local_8c0 + 3;
    }
    pLVar36 = local_8c0;
    p_Var37 = p_Var57;
    p_Var56 = p_Var46;
    if (p_Var54 <= p_Var46 + 5) goto LAB_1434be915;
  }
  else {
    if (p_Var46 + 5 < p_Var54) {
      local_8c0->QuadPart = (LONGLONG)p_Var46;
      local_8c0[1].QuadPart = (LONGLONG)p_Var52;
      local_8c0[2].s.LowPart = DVar28;
      pLVar36 = local_8c0 + 3;
    }
    p_Var46 = p_Var42;
    p_Var52 = p_Var51;
    p_Var37 = p_Var51;
    if (p_Var51 <= p_Var42) goto LAB_1434be915;
  }
  local_8c0 = pLVar36;
  iVar25 = (int)((ulonglong)((longlong)p_Var37 - (longlong)p_Var56) >> 3) * -0x33333333;
  uVar39 = iVar25 + 1;
  p_Var51 = p_Var52;
  p_Var53 = p_Var56;
  if (DVar28 == 0) goto LAB_1434be59b;
  goto LAB_1434be358;
}



// FUNCTION 1434bf7ec FUN_1434bf7ec body=337 status=ok
// SIG undefined FUN_1434bf7ec(void)

void FUN_1434bf7ec(undefined4 param_1,float param_2)

{
  int iVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  ulonglong uVar5;
  undefined1 auStack_68 [32];
  double local_48;
  longlong local_40 [2];
  ulonglong local_30;
  
  lVar2 = DAT_14cad5ec0;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
    uVar5 = 0;
  }
  else if (iVar1 == 1) {
    DVar3 = FUN_140ad26c0();
    DVar4 = GetCurrentThreadId();
    uVar5 = (ulonglong)(DVar3 != DVar4);
  }
  else {
    uVar5 = 1;
  }
  if (*(int *)(lVar2 + uVar5 * 4) != 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c868710) {
      FUN_144b3d300(&DAT_14c868710);
      if (DAT_14c868710 == -1) {
        FUN_145c3c252(&DAT_14c8686c8);
        DAT_14c868708 = &DAT_14c8686c8;
        atexit(thunk_FUN_14626bbac);
        _Init_thread_footer(&DAT_14c868710);
      }
    }
    local_48 = (double)param_2;
    FUN_140002266(local_40,L"Current CL: %u | Recorded CL: %u | Time: %f",
                  *(uint *)(DAT_14c868708 + 4) & 0x7fffffff,param_1);
    if (local_40[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434bf93e FUN_1434bf93e body=6507 status=ok
// SIG undefined FUN_1434bf93e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434bf93e(longlong param_1,float param_2)

{
  int *piVar1;
  byte *pbVar2;
  longlong *plVar3;
  void *_Dst;
  code *pcVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  DWORD DVar8;
  DWORD DVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined8 uVar15;
  uint *puVar16;
  longlong lVar17;
  uint *puVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  undefined8 *puVar22;
  int iVar23;
  longlong *plVar24;
  LARGE_INTEGER *pLVar25;
  ulonglong uVar26;
  int iVar27;
  int iVar28;
  undefined4 uVar29;
  ulonglong uVar30;
  int iVar31;
  longlong lVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  bool bVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auStack_138 [40];
  undefined4 local_110;
  undefined1 local_109;
  longlong local_108;
  int local_fc;
  ulonglong local_f8;
  uint *local_f0;
  uint local_e4;
  ulonglong local_e0;
  ulonglong local_d8;
  uint *local_d0;
  longlong local_c8;
  ulonglong local_c0;
  LARGE_INTEGER local_b8;
  undefined1 *puStack_b0;
  longlong local_a0;
  longlong local_90;
  undefined1 local_84 [4];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar14 = *(longlong *)(param_1 + 0x1a8);
  if (lVar14 == 0) {
    uVar29 = 0xffffffff;
  }
  else {
    iVar6 = -1;
    if ((longlong)*(int *)(lVar14 + 0x1a8) != 0) {
      uVar10 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar14 + 0x1a0) + 0x18 + uVar10) == param_1) {
          iVar6 = (int)(uVar10 >> 3) * -0x11111111;
          break;
        }
        uVar10 = uVar10 + 0x78;
      } while ((longlong)*(int *)(lVar14 + 0x1a8) * 0x78 - uVar10 != 0);
    }
    uVar29 = *(undefined4 *)(lVar14 + 0x1b0);
    FUN_140080e72(lVar14,iVar6);
  }
  FUN_14359781c(param_1);
  if (((*(char *)(param_1 + 0xcbe) == '\0') &&
      ((*(longlong *)(param_1 + 0xf0) == 0 || (*(int *)(*(longlong *)(param_1 + 0xf0) + 0x134) == 1)
       ))) || ((*(byte *)(param_1 + 0x9ab) & 0x20) != 0)) goto LAB_1434c0664;
  plVar13 = *(longlong **)(param_1 + 0x8f8);
  plVar24 = *(longlong **)(param_1 + 0x900);
  if (plVar24 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar24 + 1) = (int)plVar24[1] + 1;
    UNLOCK();
  }
  cVar5 = (**(code **)(*plVar13 + 0x170))(plVar13,param_1 + 0x13e0);
  if (plVar24 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar24 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*plVar24)(plVar24);
      LOCK();
      piVar1 = (int *)((longlong)plVar24 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar24 + 0x10))(plVar24);
      }
    }
  }
  if (cVar5 == '\x01') {
    uVar15 = 8;
  }
  else {
    plVar13 = *(longlong **)(param_1 + 0x8f8);
    plVar24 = *(longlong **)(param_1 + 0x900);
    local_110 = uVar29;
    if (plVar24 == (longlong *)0x0) {
      lVar11 = (**(code **)(*plVar13 + 0x20))();
    }
    else {
      LOCK();
      *(int *)(plVar24 + 1) = (int)plVar24[1] + 1;
      UNLOCK();
      lVar11 = (**(code **)(*plVar13 + 0x20))();
      LOCK();
      plVar13 = plVar24 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
        (**(code **)*plVar24)(plVar24);
        LOCK();
        piVar1 = (int *)((longlong)plVar24 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar24 + 0x10))(plVar24);
        }
      }
    }
    uVar29 = local_110;
    if (lVar11 != 0) {
      lVar11 = *(longlong *)(param_1 + 0x1a8);
      if ((*(char *)(param_1 + 0xcbf) == '\0') && ((longlong)*(int *)(lVar11 + 0x90) != 0)) {
        plVar24 = *(longlong **)(lVar11 + 0x88);
        plVar13 = plVar24 + *(int *)(lVar11 + 0x90);
LAB_1434bfb0a:
        plVar3 = (longlong *)*plVar24;
        if ((plVar3 == (longlong *)0x0) ||
           (cVar5 = (**(code **)(*plVar3 + 0x2d8))(plVar3), cVar5 == '\0')) goto LAB_1434bfb8b;
        lVar11 = plVar3[0x2f];
        if (plVar3[0x2f] != 0) {
LAB_1434bfb32:
          lVar32 = lVar11;
          lVar11 = lVar32;
          if (*(longlong *)(lVar32 + 0x20) != 0) goto code_r0x0001434bfb41;
          goto LAB_1434bfb56;
        }
        goto LAB_1434c0664;
      }
      goto LAB_1434bfb9f;
    }
    uVar15 = 10;
  }
  FUN_147a60036(&local_b8,uVar15);
  FUN_146efbfa6(param_1 + 0x13e0,&local_b8);
  if (local_90 != 0) {
    (**(code **)(local_90 + -0x10))(local_90 + -0x10);
  }
  if (local_a0 != 0) {
    FUN_1400020a8();
  }
  goto LAB_1434c0664;
code_r0x0001434bfb41:
  lVar11 = *(longlong *)(lVar32 + 0x20);
  if ((*(uint *)(lVar32 + 8) >> 0x1c & 1) == 0) goto LAB_1434bfb32;
  lVar11 = FUN_142840154(lVar32);
LAB_1434bfb56:
  if (lVar11 == 0) {
    lVar11 = *(longlong *)(lVar32 + 0x20);
    goto LAB_1434bfb32;
  }
  cVar5 = FUN_140ebe022();
  if (((cVar5 == '\0') || (plVar3[0x2f] == 0)) || ((*(byte *)(plVar3[0x2f] + 0x240) & 0x20) == 0))
  goto LAB_1434c0664;
LAB_1434bfb8b:
  plVar24 = plVar24 + 1;
  if (plVar24 == plVar13) goto code_r0x0001434bfb98;
  goto LAB_1434bfb0a;
code_r0x0001434bfb98:
  lVar11 = *(longlong *)(param_1 + 0x1a8);
LAB_1434bfb9f:
  if (0.0 <= *DAT_14cad5d00) {
    if (*(longlong *)(lVar11 + 0x30) == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = *(longlong *)(*(longlong *)(lVar11 + 0x30) + 0x2b0);
    }
    *(float *)(lVar11 + 0x4d0) = *DAT_14cad5d00;
    lVar11 = *(longlong *)(param_1 + 0x1a8);
  }
  if (*(longlong *)(lVar11 + 0x30) == 0) {
    plVar13 = (longlong *)0x0;
  }
  else {
    plVar13 = *(longlong **)(*(longlong *)(lVar11 + 0x30) + 0x2b0);
  }
  fVar36 = (float)(**(code **)(*plVar13 + 0x668))(plVar13);
  fVar36 = (float)(**(code **)(*plVar13 + 0x670))(plVar13,fVar36 * param_2,param_2);
  iVar6 = *(int *)(param_1 + 0xa90);
  if ((longlong)iVar6 != 0) {
    lVar11 = *(longlong *)(param_1 + 0xa88);
    lVar32 = 0;
    do {
      lVar12 = *(longlong *)(lVar11 + lVar32);
      if (lVar12 != 0) {
        lVar17 = *(longlong *)(*(longlong *)(param_1 + 0x1a8) + 0x30);
        fVar37 = _DAT_000004d0;
        if (lVar17 != 0) {
          fVar37 = *(float *)(*(longlong *)(lVar17 + 0x2b0) + 0x4d0);
        }
        fVar38 = 1.0;
        if (0.0001 < fVar37) {
          fVar38 = 1.0 / fVar37;
        }
        *(float *)(lVar12 + 0x78) = fVar38;
        FUN_14020a6cc(lVar12 + 0x70,1);
        lVar17 = *(longlong *)(lVar12 + 0x7a0);
        if (lVar17 != 0) {
          *(undefined4 *)(lVar17 + 0x78) = *(undefined4 *)(lVar12 + 0x74);
          FUN_14020a6cc(lVar17 + 0x70,1);
          pbVar2 = (byte *)(*(longlong *)(lVar12 + 0x7a0) + 0x3a);
          *pbVar2 = *pbVar2 | 1;
          lVar12 = (**(code **)(**(longlong **)(lVar12 + 0x7a0) + 0x638))();
          if (lVar12 != 0) {
            lVar17 = FUN_145c25d4c();
            if ((*(int *)(lVar17 + 0x38) <= *(int *)(*(longlong *)(lVar12 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar17 + 0x38) * 8) == lVar17 + 0x30)) {
              *(byte *)(lVar12 + 0x4a) = *(byte *)(lVar12 + 0x4a) | 1;
            }
          }
        }
      }
      lVar32 = lVar32 + 8;
    } while ((longlong)iVar6 * 8 != lVar32);
  }
  if ((((*(longlong *)(param_1 + 0x1a8) == 0) ||
       (lVar11 = FUN_1405e677a(DAT_14cb0d2b0), *(char *)(lVar11 + 0x88) == '\0')) &&
      ((*(char *)(param_1 + 0xcbe) != '\0' ||
       ((*(longlong *)(param_1 + 0xf0) != 0 &&
        (*(int *)(*(longlong *)(param_1 + 0xf0) + 0x134) != 1)))))) &&
     ((*(byte *)(param_1 + 0x9ab) & 0x10) == 0)) {
    *(bool *)(*(longlong *)(param_1 + 0x1b8) + 0x151) = 0 < *DAT_14cad5dd8;
    if (0.0 <= *DAT_14cad5d30) {
      local_b8.QuadPart = 0;
      puStack_b0 = (undefined1 *)0x0;
      FUN_1434c20c8(param_1,*DAT_14cad5d30,&local_b8);
      if ((int)puStack_b0 == 0) {
LAB_1434bfdfa:
        if ((code *)local_b8.QuadPart != (code *)0x0) {
          FUN_1400020a8();
        }
      }
      else if ((code *)local_b8.QuadPart != (code *)0x0) {
        (*(code *)**(undefined8 **)local_b8)(local_b8.QuadPart,0);
        FUN_1446efa72(&local_b8,0,0,0x10);
        puStack_b0 = (undefined1 *)((ulonglong)puStack_b0 & 0xffffffff00000000);
        goto LAB_1434bfdfa;
      }
      (**(code **)(*DAT_14cad5d28 + 0x98))(DAT_14cad5d28,&DAT_14a8b567e,0xe000000,0);
    }
    if (*DAT_14cad5d18 != 0.0) {
      local_b8.QuadPart = 0;
      puStack_b0 = (undefined1 *)0x0;
      FUN_1434c20c8(param_1,*(float *)(param_1 + 0xca8) + *DAT_14cad5d18,&local_b8);
      if ((int)puStack_b0 == 0) {
LAB_1434bfe9f:
        if ((code *)local_b8.QuadPart != (code *)0x0) {
          FUN_1400020a8();
        }
      }
      else if ((code *)local_b8.QuadPart != (code *)0x0) {
        (*(code *)**(undefined8 **)local_b8)(local_b8.QuadPart,0);
        FUN_1446efa72(&local_b8,0,0,0x10);
        puStack_b0 = (undefined1 *)((ulonglong)puStack_b0 & 0xffffffff00000000);
        goto LAB_1434bfe9f;
      }
      (**(code **)(*DAT_14cad5d10 + 0x98))(DAT_14cad5d10,&DAT_149e25dfc,0xe000000,0);
    }
    local_108 = lVar14;
    if ((*(char *)(param_1 + 0xcbf) == '\x01') &&
       (*(int *)(param_1 + 0x1200) != *(int *)(param_1 + 0x122c))) {
      iVar6 = *(int *)(param_1 + 0x1220);
      if (iVar6 == 0) {
        uVar33 = 1;
        uVar10 = 0;
        iVar23 = 0;
        iVar31 = 0;
      }
      else {
        puVar16 = *(uint **)(param_1 + 0x1218);
        if (*(uint **)(param_1 + 0x1218) == (uint *)0x0) {
          puVar16 = (uint *)(param_1 + 0x1208);
        }
        uVar7 = *puVar16;
        if (uVar7 == 0) {
          iVar23 = iVar6 + 0x1e;
          if (-1 < iVar6 + -1) {
            iVar23 = iVar6 + -1;
          }
          uVar10 = 0;
          uVar34 = (ulonglong)(uint)(iVar23 >> 5);
          if (iVar23 >> 5 < 1) {
            uVar34 = uVar10;
          }
          iVar23 = 0;
          do {
            if (uVar34 == uVar10) goto LAB_1434c07ca;
            iVar23 = iVar23 + 0x20;
            uVar7 = puVar16[uVar10 + 1];
            uVar10 = uVar10 + 1;
          } while (uVar7 == 0);
        }
        else {
          uVar10 = 0;
          iVar23 = 0;
        }
        uVar33 = (ulonglong)(-uVar7 & uVar7);
        uVar34 = uVar33 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar34 != 0) {
          for (; uVar34 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar31 = (iVar23 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if (iVar6 <= iVar31) {
          iVar31 = iVar6;
        }
      }
      if (iVar31 != iVar6) {
        local_f8 = param_1 + 0x13b8;
        uVar7 = 0xffffffff;
        iVar20 = iVar6;
        do {
          lVar14 = *(longlong *)(param_1 + 0x11f8);
          DVar8 = *(DWORD *)(lVar14 + 4 + (longlong)iVar31 * 0x10);
          if (((((DVar8 != 0) &&
                (uVar19 = *(uint *)(lVar14 + (longlong)iVar31 * 0x10), -1 < (int)uVar19)) &&
               ((int)uVar19 < DAT_14c9647dc)) &&
              ((pLVar25 = (LARGE_INTEGER *)
                          ((ulonglong)((uVar19 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8)),
               pLVar25 != (LARGE_INTEGER *)0x0 && (pLVar25[2].s.LowPart == DVar8)))) &&
             (((pLVar25[1].s.LowPart & 0x10200000) == 0 &&
              (local_b8 = (LARGE_INTEGER)pLVar25->QuadPart, (code *)local_b8.QuadPart != (code *)0x0
              )))) {
            if (*(int *)(param_1 + 5000) != *(int *)(param_1 + 0x13b4)) {
              uVar19 = ((uint)((ulonglong)local_b8.QuadPart >> 0x14) & 0xffff ^
                       (uint)((ulonglong)local_b8.QuadPart >> 4)) * -0x7a143595;
              uVar19 = (uVar19 >> 0xd ^ uVar19) * -0x3d4d51cb;
              uVar34 = *(ulonglong *)(param_1 + 0x13c0);
              if (*(ulonglong *)(param_1 + 0x13c0) == 0) {
                uVar34 = local_f8;
              }
              iVar31 = *(int *)(uVar34 + (ulonglong)
                                         (*(int *)(param_1 + 0x13c8) - 1U &
                                         (uVar19 >> 0x10 ^ uVar19)) * 4);
              if (iVar31 != -1) {
                lVar14 = *(longlong *)(param_1 + 0x1380);
                do {
                  if (*(code **)(lVar14 + (longlong)iVar31 * 0x10) == (code *)local_b8.QuadPart)
                  goto LAB_1434c0ae2;
                  iVar31 = *(int *)((longlong)iVar31 * 0x10 + lVar14 + 8);
                } while (iVar31 != -1);
              }
            }
            local_f0 = (uint *)CONCAT44(local_f0._4_4_,iVar23);
            FUN_147a72144((longlong *)(param_1 + 0x1380),local_84,&local_b8);
            iVar20 = *(int *)(param_1 + 0x1220);
            iVar23 = (int)local_f0;
          }
LAB_1434c0ae2:
          uVar7 = uVar7 & ~(uint)uVar33;
          puVar16 = *(uint **)(param_1 + 0x1218);
          if (*(uint **)(param_1 + 0x1218) == (uint *)0x0) {
            puVar16 = (uint *)(param_1 + 0x1208);
          }
          iVar31 = (int)uVar10;
          lVar14 = (longlong)iVar31;
          uVar19 = puVar16[lVar14] & uVar7;
          if (uVar19 == 0) {
            iVar27 = iVar20 + 0x1e;
            if (-1 < iVar20 + -1) {
              iVar27 = iVar20 + -1;
            }
            iVar27 = iVar27 >> 5;
            iVar23 = iVar23 + 0x20;
            iVar28 = iVar27;
            if (iVar27 < iVar31) {
              iVar28 = iVar31;
            }
            if (iVar31 < iVar27) {
              lVar11 = 0;
              do {
                uVar19 = puVar16[lVar14 + lVar11 + 1];
                if (uVar19 != 0) {
                  uVar10 = (ulonglong)(iVar31 + (int)lVar11 + 1);
                  uVar7 = 0xffffffff;
                  goto LAB_1434c0b5b;
                }
                iVar23 = iVar23 + 0x20;
                lVar11 = lVar11 + 1;
              } while (iVar28 - lVar14 != lVar11);
              uVar7 = 0xffffffff;
              lVar14 = (longlong)iVar28;
            }
            uVar10 = lVar14 + 1U & 0xffffffff;
            iVar31 = iVar20;
          }
          else {
LAB_1434c0b5b:
            uVar33 = (ulonglong)(-uVar19 & uVar19);
            uVar34 = uVar33 * 2 + 1;
            lVar14 = 0x3f;
            if (uVar34 != 0) {
              for (; uVar34 >> lVar14 == 0; lVar14 = lVar14 + -1) {
              }
            }
            iVar31 = (iVar23 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
            if (iVar20 <= iVar31) {
              iVar31 = iVar20;
            }
          }
        } while (iVar31 != iVar6);
      }
LAB_1434c07ca:
      FUN_147a61e96((longlong *)(param_1 + 0x11f8),0);
      lVar14 = local_108;
      uVar29 = local_110;
      if (((*(int *)(param_1 + 5000) != *(int *)(param_1 + 0x13b4)) &&
          ((*(float *)(param_1 + 0xaf8) != 0.0 || (NAN(*(float *)(param_1 + 0xaf8)))))) &&
         ((cVar5 = FUN_147a5f410(param_1,&DAT_14cad5f50), cVar5 == '\0' &&
          (cVar5 = FUN_147a5f410(param_1,&DAT_14cad5f58), cVar5 == '\0')))) {
        puVar22 = (undefined8 *)FUN_14001cc68(0x50,0x10);
        puVar22[1] = 0;
        puVar22[2] = 0;
        *puVar22 = &PTR_LAB_14a8ba590;
        *(undefined4 *)((longlong)puVar22 + 0x1c) = 0;
        if (param_1 == 0) {
          *(undefined4 *)(puVar22 + 3) = 0;
          iVar6 = 0;
        }
        else {
          uVar7 = *(uint *)(param_1 + 0xc);
          *(uint *)(puVar22 + 3) = uVar7;
          if ((int)uVar7 < DAT_14c9647dc) {
            lVar14 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
          }
          else {
            lVar14 = 0;
          }
          iVar6 = *(int *)(lVar14 + 0x10);
          if (*(int *)(lVar14 + 0x10) == 0) {
            LOCK();
            iVar6 = DAT_14c964868 + 1;
            UNLOCK();
            iVar23 = DAT_14c964868 + 1;
            bVar35 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar6;
            if (bVar35) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar23);
            }
            LOCK();
            iVar6 = *(int *)(lVar14 + 0x10);
            bVar35 = iVar6 == 0;
            if (bVar35) {
              *(int *)(lVar14 + 0x10) = iVar23;
              iVar6 = 0;
            }
            UNLOCK();
            if (bVar35) {
              iVar6 = iVar23;
            }
          }
        }
        *(int *)((longlong)puVar22 + 0x1c) = iVar6;
        *puVar22 = &PTR_FUN_14a8ba700;
        *(undefined4 *)(puVar22 + 4) = 0;
        *(undefined1 *)((longlong)puVar22 + 0x24) = 0;
        *(undefined1 *)(puVar22 + 9) = 0;
        FUN_1434bbef8(param_1,puVar22);
        lVar14 = local_108;
        uVar29 = local_110;
      }
    }
    iVar6 = (**(code **)(**(longlong **)(param_1 + 0xc78) + 0x60))();
    if (iVar6 != 0) {
      uVar7 = (**(code **)(**(longlong **)(param_1 + 0xc78) + 0x60))();
      *(float *)(param_1 + 0xcac) = (float)uVar7 / 1000.0;
    }
    cVar5 = FUN_1434bbfb0(param_1);
    if (cVar5 != '\0') {
      plVar13 = *(longlong **)(param_1 + 0x8f8);
      plVar24 = *(longlong **)(param_1 + 0x900);
      if (plVar24 == (longlong *)0x0) {
        cVar5 = (**(code **)(*plVar13 + 0x68))();
        if (cVar5 == '\0') {
          iVar6 = *(int *)(param_1 + 0xca4);
          goto joined_r0x0001434bfffc;
        }
      }
      else {
        LOCK();
        *(int *)(plVar24 + 1) = (int)plVar24[1] + 1;
        UNLOCK();
        cVar5 = (**(code **)(*plVar13 + 0x68))();
        if (cVar5 == '\0') {
          iVar6 = *(int *)(param_1 + 0xca4);
          LOCK();
          plVar13 = plVar24 + 1;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)*plVar13 == 0) {
            (**(code **)*plVar24)(plVar24);
            LOCK();
            piVar1 = (int *)((longlong)plVar24 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar24 + 0x10))(plVar24);
            }
          }
joined_r0x0001434bfffc:
          if (iVar6 == 0) goto LAB_1434c064c;
        }
        else {
          LOCK();
          plVar13 = plVar24 + 1;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)*plVar13 == 0) {
            (**(code **)*plVar24)(plVar24);
            LOCK();
            piVar1 = (int *)((longlong)plVar24 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar24 + 0x10))(plVar24);
            }
          }
        }
      }
      plVar13 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0xc78) + 0x20))();
      if (plVar13 != (longlong *)0x0) {
        cVar5 = (**(code **)(*plVar13 + 0x38))(plVar13);
        if (cVar5 == '\0') {
          bVar35 = false;
        }
        else if (*(int *)(param_1 + 0x9a0) == 0) {
          bVar35 = true;
        }
        else {
          bVar35 = *(float *)(param_1 + 0xcac) <= *(float *)(param_1 + 0xca8) + fVar36;
        }
        cVar5 = (**(code **)(**(longlong **)(param_1 + 0xc78) + 0x128))();
        if ((cVar5 == '\0') && (bVar35)) {
          FUN_14107e8f0(&DAT_14cb0d3d0,*(undefined8 *)(param_1 + 0x1a8));
          lVar11 = *(longlong *)(param_1 + 0x988);
          if (DAT_14cad5e98 < 2) {
            if (DAT_14c846b14 == '\0') {
              FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                            L"Attempting to get the command line but it hasn\'t been initialized yet."
                           );
            }
            cVar5 = FUN_14054d46e(&DAT_14c846b20,L"ExitAfterReplay");
            if ((cVar5 == '\0') ||
               ((lVar11 != 0 && (*(int *)(lVar11 + 0x14) != *(int *)(lVar11 + 0x20))))) {
              if (0 < *DAT_14cad5e20) {
                if (lVar11 == 0) goto LAB_1434c0195;
                if (*(int *)(lVar11 + 0x14) == *(int *)(lVar11 + 0x20)) goto LAB_1434c0147;
              }
            }
            else {
              FUN_142797bc0(0,0);
            }
          }
          else if (lVar11 == 0) {
            DAT_14cad5e98 = DAT_14cad5e98 + -1;
LAB_1434c0195:
            local_b8.QuadPart = 0;
            puStack_b0 = (undefined1 *)0x0;
            FUN_1434c20c8(param_1,0,&local_b8);
            if ((int)puStack_b0 != 0) {
              if ((code *)local_b8.QuadPart == (code *)0x0) goto LAB_1434c0201;
              (*(code *)**(undefined8 **)local_b8)(local_b8.QuadPart,0);
              FUN_1446efa72(&local_b8,0,0,0x10);
              puStack_b0 = (undefined1 *)((ulonglong)puStack_b0 & 0xffffffff00000000);
            }
            if ((code *)local_b8.QuadPart != (code *)0x0) {
              FUN_1400020a8();
            }
          }
          else if (*(int *)(lVar11 + 0x14) == *(int *)(lVar11 + 0x20)) {
            DAT_14cad5e98 = DAT_14cad5e98 + -1;
LAB_1434c0147:
            *(undefined4 *)(lVar11 + 0x14) = 0;
            FUN_1435a8808(lVar11);
          }
        }
      }
LAB_1434c0201:
      if ((((*(longlong *)(param_1 + 0x1a8) != 0) &&
           (lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x1a8) + 0x30), lVar11 != 0)) &&
          (lVar11 = *(longlong *)(lVar11 + 0x2b0), lVar11 != 0)) &&
         (*(longlong *)(lVar11 + 0x588) == 0)) {
        *(float *)(param_1 + 0xca8) = fVar36 + *(float *)(param_1 + 0xca8);
      }
      fVar37 = *(float *)(param_1 + 0xcac) + 0.01;
      fVar36 = *(float *)(param_1 + 0xca8);
      if (fVar37 <= *(float *)(param_1 + 0xca8)) {
        fVar36 = fVar37;
      }
      if (fVar36 <= 0.0) {
        fVar36 = 0.0;
      }
      *(float *)(param_1 + 0xca8) = fVar36;
      (**(code **)(**(longlong **)(param_1 + 0xc78) + 0x58))
                (*(longlong **)(param_1 + 0xc78),(longlong)(fVar36 * 1000.0));
      cVar5 = '\x01';
      if (*(int *)(param_1 + 0x9a0) < 1) {
        plVar13 = *(longlong **)(param_1 + 0x8f8);
        plVar24 = *(longlong **)(param_1 + 0x900);
        if (plVar24 == (longlong *)0x0) {
          cVar5 = (**(code **)(*plVar13 + 0x68))();
        }
        else {
          LOCK();
          *(int *)(plVar24 + 1) = (int)plVar24[1] + 1;
          UNLOCK();
          cVar5 = (**(code **)(*plVar13 + 0x68))();
          LOCK();
          plVar13 = plVar24 + 1;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)*plVar13 == 0) {
            (**(code **)*plVar24)(plVar24);
            LOCK();
            piVar1 = (int *)((longlong)plVar24 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar24 + 0x10))(plVar24);
            }
          }
        }
      }
      lVar11 = DAT_14cad5f38;
      iVar6 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if (iVar6 == 0x40000002) {
        uVar10 = 0;
      }
      else {
        bVar35 = true;
        if ((DAT_14c86a9f8 == '\x01') && (iVar6 != 2)) {
          if (iVar6 == 1) {
            DVar8 = FUN_140ad26c0();
            DVar9 = GetCurrentThreadId();
            bVar35 = DVar8 == DVar9;
          }
          else {
            bVar35 = false;
          }
        }
        uVar10 = (ulonglong)(bVar35 ^ 1);
      }
      if (*(int *)(lVar11 + uVar10 * 4) == 0) {
        if (cVar5 == '\0') {
          uVar10 = (ulonglong)(*(float *)(param_1 + 0xca8) * 1000.0);
          plVar13 = *(longlong **)(param_1 + 0x8f8);
          plVar24 = *(longlong **)(param_1 + 0x900);
          if (plVar24 == (longlong *)0x0) {
            cVar5 = (**(code **)(*plVar13 + 0x78))(plVar13,uVar10,uVar10 & 0xffffffff);
          }
          else {
            LOCK();
            *(int *)(plVar24 + 1) = (int)plVar24[1] + 1;
            UNLOCK();
            cVar5 = (**(code **)(*plVar13 + 0x78))(plVar13,uVar10,uVar10 & 0xffffffff);
            LOCK();
            plVar13 = plVar24 + 1;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)*plVar13 == 0) {
              (**(code **)*plVar24)(plVar24);
              LOCK();
              piVar1 = (int *)((longlong)plVar24 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar24 + 0x10))(plVar24);
              }
            }
          }
          goto joined_r0x0001434c073a;
        }
      }
      else {
joined_r0x0001434c073a:
        if (cVar5 == '\0') {
          FUN_1434c1d2e(param_1,1);
          goto LAB_1434c064c;
        }
      }
      FUN_1434c1d2e(param_1,0);
      QueryPerformanceCounter(&local_b8);
      plVar13 = *(longlong **)(param_1 + 0x8f8);
      plVar24 = *(longlong **)(param_1 + 0x900);
      if (plVar24 == (longlong *)0x0) {
        lVar14 = (**(code **)(*plVar13 + 0x20))();
      }
      else {
        LOCK();
        *(int *)(plVar24 + 1) = (int)plVar24[1] + 1;
        UNLOCK();
        lVar14 = (**(code **)(*plVar13 + 0x20))();
        LOCK();
        plVar13 = plVar24 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
          (**(code **)*plVar24)(plVar24);
          LOCK();
          piVar1 = (int *)((longlong)plVar24 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar24 + 0x10))(plVar24);
          }
        }
      }
      if (lVar14 != 0) {
        FUN_147cdd036(param_1 + 0xb40,lVar14);
      }
      do {
        plVar13 = *(longlong **)(param_1 + 0x8f8);
        plVar24 = *(longlong **)(param_1 + 0x900);
        if (plVar24 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar24 + 1) = (int)plVar24[1] + 1;
          UNLOCK();
        }
        uVar15 = (**(code **)(*plVar13 + 0x20))();
        cVar5 = FUN_147a6197e(param_1,uVar15);
        if (plVar24 != (longlong *)0x0) {
          LOCK();
          plVar13 = plVar24 + 1;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)*plVar13 == 0) {
            (**(code **)*plVar24)(plVar24);
            LOCK();
            piVar1 = (int *)((longlong)plVar24 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar24 + 0x10))(plVar24);
            }
          }
        }
      } while (cVar5 != '\0');
      while( true ) {
        uVar7 = *(uint *)(param_1 + 0xafc);
        if (((int)uVar7 < 0) || (*(int *)(param_1 + 0x9a0) <= (int)uVar7)) break;
        fVar36 = *(float *)(*(longlong *)(param_1 + 0x998) + 0x10 + (ulonglong)uVar7 * 0x20);
        if (*(float *)(param_1 + 0xca8) <= fVar36 && fVar36 != *(float *)(param_1 + 0xca8))
        goto LAB_1434c0485;
        lVar14 = *(longlong *)(param_1 + 0x998) + (ulonglong)uVar7 * 0x20;
        if (*(int *)(param_1 + 0xca0) != *(int *)(lVar14 + 0x14)) {
          (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x1a8) + 0x1f0) + 0x358))();
          *(undefined4 *)(param_1 + 0xca0) = *(undefined4 *)(lVar14 + 0x14);
          FUN_147a6038c();
          goto LAB_1434c0485;
        }
        *(uint *)(param_1 + 0xafc) = uVar7 + 1;
        cVar5 = FUN_1434c1fb4(param_1,lVar14);
        if (cVar5 == '\0') goto LAB_1434c0485;
        *(int *)(param_1 + 0xca4) = *(int *)(param_1 + 0xca4) + 1;
      }
      FUN_1434c1d2e(param_1,1);
LAB_1434c0485:
      iVar6 = *(int *)(param_1 + 0xafc);
      if (0 < (longlong)iVar6) {
        _Dst = *(void **)(param_1 + 0x998);
        lVar14 = (longlong)iVar6 * 0x20;
        *(undefined4 *)(param_1 + 0xaf8) = *(undefined4 *)((longlong)_Dst + lVar14 + -0x10);
        FUN_145ad50ba(_Dst,iVar6);
        iVar31 = *(int *)(param_1 + 0x9a0) - iVar6;
        iVar23 = iVar6;
        if (iVar31 != 0) {
          memmove(_Dst,(void *)(lVar14 + (longlong)_Dst),(longlong)iVar31 << 5);
          iVar23 = *(int *)(param_1 + 0x9a0);
        }
        *(int *)(param_1 + 0x9a0) = iVar23 - iVar6;
        FUN_147a71c2e();
        *(undefined4 *)(param_1 + 0xafc) = 0;
      }
      iVar6 = *(int *)(param_1 + 0x14f8);
      if (iVar6 == 0) {
        uVar34 = 1;
        uVar10 = 0;
        iVar31 = 0;
        iVar23 = 0;
      }
      else {
        puVar16 = *(uint **)(param_1 + 0x14f0);
        if (*(uint **)(param_1 + 0x14f0) == (uint *)0x0) {
          puVar16 = (uint *)(param_1 + 0x14e0);
        }
        uVar7 = *puVar16;
        if (uVar7 == 0) {
          iVar23 = iVar6 + 0x1e;
          if (-1 < iVar6 + -1) {
            iVar23 = iVar6 + -1;
          }
          uVar10 = 0;
          uVar34 = (ulonglong)(uint)(iVar23 >> 5);
          if (iVar23 >> 5 < 1) {
            uVar34 = uVar10;
          }
          iVar31 = 0;
          do {
            if (uVar34 == uVar10) goto LAB_1434c0635;
            iVar31 = iVar31 + 0x20;
            uVar7 = puVar16[uVar10 + 1];
            uVar10 = uVar10 + 1;
          } while (uVar7 == 0);
        }
        else {
          uVar10 = 0;
          iVar31 = 0;
        }
        uVar34 = (ulonglong)(-uVar7 & uVar7);
        uVar33 = uVar34 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar33 != 0) {
          for (; uVar33 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar23 = (iVar31 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if (iVar6 <= iVar23) {
          iVar23 = iVar6;
        }
      }
      if (iVar23 < iVar6) {
        uVar7 = 0xffffffff;
        do {
          lVar14 = (longlong)iVar23 * 0x60;
          if (*(float *)(*(longlong *)(param_1 + 0x14d0) + lVar14) <= *(float *)(param_1 + 0xca8)) {
            if (*(char *)(param_1 + 0x9a8) == '\0') {
              FUN_147a71cca(*(undefined8 *)(param_1 + 0x1a8),lVar14,
                            *(longlong *)(param_1 + 0x14d0) + lVar14 + 8);
            }
            FUN_147a71da4(param_1 + 0x14d0,iVar23);
            iVar6 = *(int *)(param_1 + 0x14f8);
          }
          uVar7 = uVar7 & ~(uint)uVar34;
          puVar16 = *(uint **)(param_1 + 0x14f0);
          if (*(uint **)(param_1 + 0x14f0) == (uint *)0x0) {
            puVar16 = (uint *)(param_1 + 0x14e0);
          }
          iVar23 = (int)uVar10;
          lVar14 = (longlong)iVar23;
          uVar19 = puVar16[lVar14] & uVar7;
          if (uVar19 == 0) {
            iVar20 = iVar6 + 0x1e;
            if (-1 < iVar6 + -1) {
              iVar20 = iVar6 + -1;
            }
            iVar20 = iVar20 >> 5;
            iVar27 = iVar20;
            if (iVar20 < iVar23) {
              iVar27 = iVar23;
            }
            if (iVar20 <= iVar23) break;
            lVar11 = 0;
            while( true ) {
              iVar31 = iVar31 + 0x20;
              uVar19 = puVar16[lVar14 + lVar11 + 1];
              if (uVar19 != 0) break;
              lVar11 = lVar11 + 1;
              if (iVar27 - lVar14 == lVar11) goto LAB_1434c0635;
            }
            uVar10 = (ulonglong)(iVar23 + (int)lVar11 + 1);
            uVar7 = 0xffffffff;
          }
          uVar34 = (ulonglong)(-uVar19 & uVar19);
          uVar33 = uVar34 * 2 + 1;
          lVar14 = 0x3f;
          if (uVar33 != 0) {
            for (; uVar33 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          iVar23 = (iVar31 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        } while (iVar23 < iVar6);
      }
LAB_1434c0635:
      lVar14 = local_108;
      uVar29 = local_110;
      if (*(char *)(param_1 + 0x9a8) != '\0') {
        local_109 = *(undefined1 *)(param_1 + 0x9a9);
        *(undefined2 *)(param_1 + 0x9a8) = 0x100;
        if (*(longlong *)(param_1 + 0x1a8) == 0) {
          plVar13 = (longlong *)0x0;
        }
        else {
          plVar13 = *(longlong **)(*(longlong *)(param_1 + 0x1a8) + 0x178);
        }
        if ((*(byte *)(param_1 + 0x9ab) & 2) != 0) {
          FUN_1434c2358();
        }
        if (plVar13 != (longlong *)0x0) {
          if ((*(byte *)(param_1 + 0x9ab) & 2) != 0) {
            plVar13[0x78] =
                 (longlong)((double)*(float *)(param_1 + 0xa40) + *(double *)(param_1 + 0xa38));
          }
          (**(code **)(*plVar13 + 0x6c8))();
        }
        lVar11 = *(longlong *)(param_1 + 0xf0);
        if (lVar11 != 0) {
          if (((*(byte *)(param_1 + 0x9ab) & 2) != 0) &&
             (iVar6 = *(int *)(lVar11 + 0x78), (longlong)iVar6 != 0)) {
            lVar11 = *(longlong *)(lVar11 + 0x70);
            lVar32 = 0;
            do {
              lVar12 = *(longlong *)(lVar11 + lVar32);
              if (lVar12 != 0) {
                lVar17 = FUN_1414cbbb6();
                if ((((*(int *)(lVar17 + 0x38) <= *(int *)(*(longlong *)(lVar12 + 0x10) + 0x38)) &&
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
                       (longlong)*(int *)(lVar17 + 0x38) * 8) == lVar17 + 0x30)) &&
                    (*(longlong *)(lVar12 + 0x68) != 0)) && (cVar5 = FUN_1449e2a3e(), cVar5 != '\0')
                   ) {
                  FUN_147a60c04();
                }
              }
              lVar32 = lVar32 + 8;
            } while ((longlong)iVar6 * 8 != lVar32);
            lVar11 = *(longlong *)(param_1 + 0xf0);
            if (lVar11 == 0) goto LAB_1434c1186;
          }
          puVar16 = (uint *)(lVar11 + 0x1468);
          uVar7 = *(uint *)(lVar11 + 0x1480);
          uVar10 = (ulonglong)uVar7;
          if (uVar7 == 0) {
            uVar26 = 1;
            uVar34 = 0;
            iVar6 = 0;
            uVar19 = 0;
          }
          else {
            puVar18 = *(uint **)(lVar11 + 0x1478);
            if (*(uint **)(lVar11 + 0x1478) == (uint *)0x0) {
              puVar18 = puVar16;
            }
            uVar19 = *puVar18;
            if (uVar19 == 0) {
              iVar6 = uVar7 + 0x1e;
              if (-1 < (int)(uVar7 - 1)) {
                iVar6 = uVar7 - 1;
              }
              uVar34 = 0;
              uVar33 = (ulonglong)(uint)(iVar6 >> 5);
              if (iVar6 >> 5 < 1) {
                uVar33 = uVar34;
              }
              iVar6 = 0;
              do {
                if (uVar33 == uVar34) goto LAB_1434c1159;
                iVar6 = iVar6 + 0x20;
                uVar19 = puVar18[uVar34 + 1];
                uVar34 = uVar34 + 1;
              } while (uVar19 == 0);
            }
            else {
              uVar34 = 0;
              iVar6 = 0;
            }
            uVar26 = (ulonglong)(-uVar19 & uVar19);
            uVar33 = uVar26 * 2 + 1;
            lVar32 = 0x3f;
            if (uVar33 != 0) {
              for (; uVar33 >> lVar32 == 0; lVar32 = lVar32 + -1) {
              }
            }
            uVar19 = (iVar6 - ((uint)lVar32 ^ 0x3f)) + 0x3e;
            if ((int)uVar7 <= (int)uVar19) {
              uVar19 = uVar7;
            }
          }
          if (uVar19 != uVar7) {
            uVar21 = 0xffffffff;
            local_d8 = uVar10;
            local_d0 = puVar16;
            local_c8 = lVar11;
            do {
              lVar14 = *(longlong *)
                        (*(longlong *)(lVar11 + 0x1458) + 8 + (longlong)(int)uVar19 * 0x18);
              local_fc = iVar6;
              local_e4 = uVar21;
              local_e0 = uVar26;
              if (lVar14 != 0) {
                uVar19 = *(uint *)(lVar14 + 0xd0);
                local_f8 = (ulonglong)uVar19;
                if (uVar19 == 0) {
                  uVar26 = 1;
                  uVar30 = 0;
                  iVar6 = 0;
                  uVar33 = 0;
                }
                else {
                  puVar18 = *(uint **)(lVar14 + 200);
                  if (*(uint **)(lVar14 + 200) == (uint *)0x0) {
                    puVar18 = (uint *)(lVar14 + 0xb8);
                  }
                  uVar21 = *puVar18;
                  if (uVar21 == 0) {
                    iVar6 = uVar19 + 0x1e;
                    if (-1 < (int)(uVar19 - 1)) {
                      iVar6 = uVar19 - 1;
                    }
                    uVar30 = 0;
                    uVar33 = (ulonglong)(uint)(iVar6 >> 5);
                    if (iVar6 >> 5 < 1) {
                      uVar33 = uVar30;
                    }
                    iVar6 = 0;
                    do {
                      if (uVar33 == uVar30) goto LAB_1434c1058;
                      iVar6 = iVar6 + 0x20;
                      uVar21 = puVar18[uVar30 + 1];
                      uVar30 = uVar30 + 1;
                    } while (uVar21 == 0);
                  }
                  else {
                    uVar30 = 0;
                    iVar6 = 0;
                  }
                  uVar26 = (ulonglong)(-uVar21 & uVar21);
                  uVar33 = uVar26 * 2 + 1;
                  lVar32 = 0x3f;
                  if (uVar33 != 0) {
                    for (; uVar33 >> lVar32 == 0; lVar32 = lVar32 + -1) {
                    }
                  }
                  uVar21 = (iVar6 - ((uint)lVar32 ^ 0x3f)) + 0x3e;
                  uVar33 = (ulonglong)uVar21;
                  if ((int)uVar19 <= (int)uVar21) {
                    uVar33 = local_f8;
                  }
                }
                if ((uint)uVar33 != uVar19) {
                  uVar7 = 0xffffffff;
                  local_f0 = (uint *)(lVar14 + 0xb8);
                  local_c0 = uVar34;
                  do {
                    lVar11 = *(longlong *)
                              (*(longlong *)(lVar14 + 0xa8) + 8 + (longlong)(int)uVar33 * 0x20);
                    plVar13 = *(longlong **)(lVar11 + 0x48);
                    if (((plVar13 != (longlong *)0x0) ||
                        ((((*(int *)(lVar11 + 0xdc) != 0 &&
                           (uVar19 = *(uint *)(lVar11 + 0xd8), -1 < (int)uVar19)) &&
                          (((int)uVar19 < DAT_14c9647dc &&
                           ((puVar22 = (undefined8 *)
                                       ((ulonglong)((uVar19 & 0xffff) * 0x18) +
                                       *(longlong *)
                                        (DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8)),
                            puVar22 != (undefined8 *)0x0 &&
                            (*(int *)(puVar22 + 2) == *(int *)(lVar11 + 0xdc))))))) &&
                         (((*(uint *)(puVar22 + 1) & 0x10200000) == 0 &&
                          (plVar13 = (longlong *)*puVar22, plVar13 != (longlong *)0x0)))))) &&
                       ((((((*(uint *)(plVar13 + 1) >> 0x1e & 1) == 0 &&
                           ((((*(longlong *)(lVar11 + 0x50) == 0 ||
                              (plVar24 = *(longlong **)(*(longlong *)(lVar11 + 0x50) + 0x58),
                              plVar24 == (longlong *)0x0)) ||
                             (pcVar4 = *(code **)(*plVar24 + 0x3f8),
                             pcVar4 == (code *)&LAB_14359f930)) ||
                            (cVar5 = (*pcVar4)(), cVar5 == '\0')))) &&
                          ((*(longlong *)(lVar11 + 0x58) == 0 ||
                           (*(int *)(*(longlong *)(lVar11 + 0x58) + 0x100) < 1)))) &&
                         (FUN_1400f5d32(*(undefined8 *)(lVar11 + 0x20),
                                        **(undefined8 **)(lVar11 + 0x30),plVar13),
                         (*(uint *)(plVar13 + 1) >> 0x1e & 1) == 0)) &&
                        (*(code **)(*plVar13 + 0x220) != (code *)0x144aff47c)))) {
                      (**(code **)(*plVar13 + 0x220))(plVar13);
                    }
                    uVar7 = uVar7 & ~(uint)uVar26;
                    puVar16 = *(uint **)(lVar14 + 200);
                    if (*(uint **)(lVar14 + 200) == (uint *)0x0) {
                      puVar16 = local_f0;
                    }
                    uVar19 = *(uint *)(lVar14 + 0xd0);
                    iVar23 = (int)uVar30;
                    lVar11 = (longlong)iVar23;
                    uVar21 = puVar16[lVar11] & uVar7;
                    if (uVar21 == 0) {
                      iVar31 = uVar19 + 0x1e;
                      if (-1 < (int)(uVar19 - 1)) {
                        iVar31 = uVar19 - 1;
                      }
                      iVar31 = iVar31 >> 5;
                      iVar6 = iVar6 + 0x20;
                      iVar20 = iVar31;
                      if (iVar31 < iVar23) {
                        iVar20 = iVar23;
                      }
                      if (iVar23 < iVar31) {
                        lVar32 = 0;
                        do {
                          uVar21 = puVar16[lVar11 + lVar32 + 1];
                          if (uVar21 != 0) {
                            uVar30 = (ulonglong)(iVar23 + (int)lVar32 + 1);
                            uVar7 = 0xffffffff;
                            goto LAB_1434c0f74;
                          }
                          iVar6 = iVar6 + 0x20;
                          lVar32 = lVar32 + 1;
                        } while (iVar20 - lVar11 != lVar32);
                        uVar7 = 0xffffffff;
                        iVar23 = iVar20;
                      }
                      uVar30 = (ulonglong)(iVar23 + 1);
                      uVar21 = uVar19;
                    }
                    else {
LAB_1434c0f74:
                      uVar26 = (ulonglong)(-uVar21 & uVar21);
                      uVar10 = uVar26 * 2 + 1;
                      lVar11 = 0x3f;
                      if (uVar10 != 0) {
                        for (; uVar10 >> lVar11 == 0; lVar11 = lVar11 + -1) {
                        }
                      }
                      uVar21 = (iVar6 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
                      if ((int)uVar19 <= (int)uVar21) {
                        uVar21 = uVar19;
                      }
                    }
                    uVar33 = (ulonglong)uVar21;
                  } while (uVar21 != (uint)local_f8);
                  uVar7 = *(uint *)(local_c8 + 0x1480);
                  puVar16 = local_d0;
                  lVar11 = local_c8;
                  uVar10 = local_d8;
                  uVar34 = local_c0;
                }
              }
LAB_1434c1058:
              uVar21 = local_e4 & ~(uint)local_e0;
              puVar18 = *(uint **)(lVar11 + 0x1478);
              if (*(uint **)(lVar11 + 0x1478) == (uint *)0x0) {
                puVar18 = puVar16;
              }
              iVar23 = (int)uVar34;
              lVar14 = (longlong)iVar23;
              uVar19 = puVar18[lVar14] & uVar21;
              iVar6 = local_fc;
              if (uVar19 == 0) {
                iVar31 = uVar7 + 0x1e;
                if (-1 < (int)(uVar7 - 1)) {
                  iVar31 = uVar7 - 1;
                }
                iVar31 = iVar31 >> 5;
                iVar6 = local_fc + 0x20;
                iVar20 = iVar31;
                if (iVar31 < iVar23) {
                  iVar20 = iVar23;
                }
                if (iVar23 < iVar31) {
                  lVar32 = 0;
                  do {
                    uVar19 = puVar18[lVar14 + lVar32 + 1];
                    if (uVar19 != 0) {
                      uVar34 = (ulonglong)(iVar23 + (int)lVar32 + 1);
                      uVar21 = 0xffffffff;
                      goto LAB_1434c10ed;
                    }
                    iVar6 = iVar6 + 0x20;
                    lVar32 = lVar32 + 1;
                  } while (iVar20 - lVar14 != lVar32);
                  uVar21 = 0xffffffff;
                  iVar23 = iVar20;
                }
                uVar34 = (ulonglong)(iVar23 + 1);
                uVar26 = local_e0;
                uVar19 = uVar7;
              }
              else {
LAB_1434c10ed:
                uVar26 = (ulonglong)(-uVar19 & uVar19);
                uVar33 = uVar26 * 2 + 1;
                lVar14 = 0x3f;
                if (uVar33 != 0) {
                  for (; uVar33 >> lVar14 == 0; lVar14 = lVar14 + -1) {
                  }
                }
                uVar19 = (iVar6 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
                if ((int)uVar7 <= (int)uVar19) {
                  uVar19 = uVar7;
                }
              }
            } while (uVar19 != (uint)uVar10);
            lVar11 = *(longlong *)(param_1 + 0xf0);
            lVar14 = local_108;
            uVar29 = local_110;
          }
LAB_1434c1159:
          local_b8.QuadPart = (LONGLONG)FUN_1434d4758;
          puStack_b0 = local_84;
          FUN_147bdbac4(lVar11 + 0x15d0);
        }
LAB_1434c1186:
        *(byte *)(param_1 + 0x9ab) = *(byte *)(param_1 + 0x9ab) & 0xfd;
        if (*(int *)(param_1 + 0x9f4) < 0) {
          *(undefined4 *)(param_1 + 0x9f0) = 0;
          FUN_1417c3e4a(param_1 + 0x9e8,0);
        }
        else {
          *(undefined4 *)(param_1 + 0x9f0) = 0;
        }
        QueryPerformanceCounter(&local_b8);
        FUN_147a619fe(param_1,1);
        *(undefined1 *)(param_1 + 0x9a9) = local_109;
      }
    }
  }
LAB_1434c064c:
  FUN_1434bf7ec(*(uint *)(param_1 + 0xd30) & 0x7fffffff,*(undefined4 *)(param_1 + 0xaf8));
LAB_1434c0664:
  if (lVar14 != 0) {
    FUN_140080e72(lVar14,uVar29);
  }
  if ((local_80 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434c12aa FUN_1434c12aa body=346 status=ok
// SIG undefined FUN_1434c12aa(void)

void FUN_1434c12aa(longlong *param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  byte bVar1;
  longlong lVar2;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined4 *local_60;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (((0 < (int)param_1[0x20]) && (*(longlong *)param_1[0x1f] != 0)) &&
     (*(int *)(*(longlong *)param_1[0x1f] + 0x134) != 1)) {
    if (DAT_14cad5f80 == '\x01') {
      bVar1 = (**(code **)(*param_1 + 0x430))(param_1,param_2,param_3);
    }
    else {
      bVar1 = *(byte *)(param_3 + 0xb1) & 0x40;
    }
    if ((bVar1 != 0) &&
       (((*(byte *)(param_2 + 0x60) & 4) == 0 || (*(longlong *)(param_2 + 0x170) == param_1[0x40])))
       ) {
      if ((param_2 == 0) || (*(char *)(param_2 + 0x68) != '\x03')) {
        lVar2 = 0;
      }
      else {
        FUN_1478c0b8c(param_2);
        lVar2 = param_2;
      }
      local_68 = (**(code **)(*param_1 + 0x3c0))(param_1);
      local_60 = &local_4c;
      local_4c = 0;
      local_70 = param_6;
      local_78 = param_5;
      local_88 = param_3;
      local_80 = param_4;
      FUN_143597de4(param_1,param_2,param_7,*(undefined8 *)param_1[0x1f]);
      if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_a8);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434c141e FUN_1434c141e body=992 status=ok
// SIG undefined FUN_1434c141e(void)

void FUN_1434c141e(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  double *pdVar3;
  uint *puVar4;
  DWORD DVar5;
  DWORD DVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  ulonglong uVar18;
  longlong *plVar19;
  ulonglong uVar20;
  undefined8 uVar21;
  longlong lVar22;
  longlong lVar23;
  double dVar24;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  undefined4 local_ac;
  longlong *local_a8;
  longlong local_a0;
  uint *local_98;
  longlong local_90;
  LARGE_INTEGER local_88;
  ulonglong local_80;
  
  lVar22 = DAT_14cad5fb0;
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar2 = param_1[1];
  iVar12 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc60);
  uVar20 = 0;
  local_b8 = param_1;
  if (((iVar12 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar12 == 2)) {
    uVar18 = 0;
  }
  else if (iVar12 == 1) {
    DVar5 = FUN_140ad26c0();
    DVar6 = GetCurrentThreadId();
    uVar18 = (ulonglong)(DVar5 != DVar6);
  }
  else {
    uVar18 = 1;
  }
  local_ac = *(undefined4 *)(lVar22 + uVar18 * 4);
  lVar22 = *local_b8;
  iVar12 = *(int *)(lVar22 + 0x1508);
  if (iVar12 == 0) {
    uVar18 = 1;
    iVar17 = 0;
    iVar7 = 0;
  }
  else {
    puVar11 = *(uint **)(lVar22 + 0x1500);
    if (*(uint **)(lVar22 + 0x1500) == (uint *)0x0) {
      puVar11 = (uint *)(lVar22 + 0x14f0);
    }
    uVar16 = *puVar11;
    if (uVar16 == 0) {
      iVar7 = iVar12 + 0x1e;
      if (-1 < iVar12 + -1) {
        iVar7 = iVar12 + -1;
      }
      uVar20 = 0;
      uVar18 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar18 = uVar20;
      }
      iVar17 = 0;
      do {
        if (uVar18 == uVar20) goto LAB_1434c1799;
        iVar17 = iVar17 + 0x20;
        uVar16 = puVar11[uVar20 + 1];
        uVar20 = uVar20 + 1;
      } while (uVar16 == 0);
    }
    else {
      uVar20 = 0;
      iVar17 = 0;
    }
    uVar18 = (ulonglong)(-uVar16 & uVar16);
    uVar1 = uVar18 * 2 + 1;
    lVar23 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar23 == 0; lVar23 = lVar23 + -1) {
      }
    }
    iVar7 = (iVar17 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
    if (iVar12 <= iVar7) {
      iVar7 = iVar12;
    }
  }
  if (iVar7 < iVar12) {
    local_a0 = lVar2 + 0x418;
    local_a8 = (longlong *)(lVar2 + 0xa68);
    uVar16 = 0xffffffff;
    plVar19 = local_b8;
    local_98 = (uint *)(lVar22 + 0x14f0);
    local_90 = lVar22;
    do {
      if (*(int *)(lVar2 + 1000) != *(int *)(lVar2 + 0x414)) {
        lVar22 = *(longlong *)(*(longlong *)(lVar22 + 0x14e0) + (longlong)iVar7 * 0x10);
        lVar23 = *(longlong *)(lVar2 + 0x420);
        if (*(longlong *)(lVar2 + 0x420) == 0) {
          lVar23 = local_a0;
        }
        iVar12 = *(int *)(lVar23 + (ulonglong)
                                   (*(int *)(lVar2 + 0x428) - 1U &
                                   (int)lVar22 + (int)((ulonglong)lVar22 >> 0x20) * 0x17) * 4);
        if (iVar12 != -1) {
          do {
            plVar13 = (longlong *)(*(longlong *)(lVar2 + 0x3e0) + (longlong)iVar12 * 0x18);
            if (*plVar13 == lVar22) goto LAB_1434c15fe;
            iVar12 = (int)plVar13[2];
          } while (iVar12 != -1);
        }
      }
      plVar13 = (longlong *)0x0;
LAB_1434c15fe:
      puVar11 = (uint *)plVar13[1];
      if (((*(char *)(lVar2 + 0xcbf) == '\x01') && (puVar11[1] != 0)) &&
         (uVar8 = *puVar11, -1 < (int)uVar8)) {
        uVar21 = 0;
        if ((int)uVar8 < DAT_14c9647dc) {
          puVar14 = (undefined8 *)
                    ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8));
          if (((puVar14 == (undefined8 *)0x0) || (*(uint *)(puVar14 + 2) != puVar11[1])) ||
             ((*(uint *)(puVar14 + 1) & 0x10200000) != 0)) goto LAB_1434c1655;
          uVar21 = *puVar14;
        }
      }
      else {
LAB_1434c1655:
        uVar21 = 0;
      }
      iVar12 = *(int *)(lVar2 + 0xa70);
      lVar23 = (longlong)iVar12;
      *(uint *)(lVar2 + 0xa70) = iVar12 + 1U;
      if (*(uint *)(lVar2 + 0xa74) < iVar12 + 1U) {
        FUN_147a7122e(local_a8,iVar12);
        plVar19 = local_b8;
      }
      lVar22 = local_90;
      puVar4 = local_98;
      lVar15 = *local_a8;
      *(undefined4 *)(lVar15 + lVar23 * 0x28) = local_ac;
      puVar14 = (undefined8 *)(lVar15 + 8 + lVar23 * 0x28);
      *puVar14 = 0;
      puVar14[1] = 0;
      *(uint **)(lVar15 + 0x18 + lVar23 * 0x28) = puVar11;
      *(undefined8 *)(lVar15 + 0x20 + lVar23 * 0x28) = uVar21;
      pdVar3 = (double *)plVar19[2];
      if ((0.0 < pdVar3[2]) &&
         (QueryPerformanceCounter(&local_88),
         dVar24 = ((double)local_88.QuadPart * DAT_14c83f420 + 16777216.0) - pdVar3[1],
         plVar19 = local_b8, *pdVar3 <= dVar24 && dVar24 != *pdVar3)) break;
      uVar16 = uVar16 & ~(uint)uVar18;
      puVar11 = *(uint **)(lVar22 + 0x1500);
      if (*(uint **)(lVar22 + 0x1500) == (uint *)0x0) {
        puVar11 = puVar4;
      }
      iVar12 = *(int *)(lVar22 + 0x1508);
      iVar7 = (int)uVar20;
      lVar23 = (longlong)iVar7;
      uVar8 = puVar11[lVar23] & uVar16;
      if (uVar8 == 0) {
        iVar9 = iVar12 + 0x1e;
        if (-1 < iVar12 + -1) {
          iVar9 = iVar12 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar10 = iVar9;
        if (iVar9 < iVar7) {
          iVar10 = iVar7;
        }
        if (iVar9 <= iVar7) break;
        lVar15 = 0;
        while( true ) {
          iVar17 = iVar17 + 0x20;
          uVar8 = puVar11[lVar23 + lVar15 + 1];
          if (uVar8 != 0) break;
          lVar15 = lVar15 + 1;
          if (iVar10 - lVar23 == lVar15) goto LAB_1434c1799;
        }
        uVar20 = (ulonglong)(iVar7 + (int)lVar15 + 1);
        uVar16 = 0xffffffff;
      }
      uVar18 = (ulonglong)(-uVar8 & uVar8);
      uVar1 = uVar18 * 2 + 1;
      lVar23 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar23 == 0; lVar23 = lVar23 + -1) {
        }
      }
      iVar7 = (iVar17 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar12);
  }
LAB_1434c1799:
  if ((local_80 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434c1800 FUN_1434c1800 body=1325 status=ok
// SIG undefined FUN_1434c1800(void)

ulonglong FUN_1434c1800(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  char cVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  longlong *plVar12;
  bool bVar13;
  uint uVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  float fVar18;
  double dVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_c8 [44];
  uint local_9c;
  LARGE_INTEGER local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar1 = *(longlong **)(param_2 + 8);
  lVar2 = *(longlong *)(param_2 + 0x18);
  QueryPerformanceCounter(&local_98);
  dVar4 = (double)local_98.QuadPart * DAT_14c83f420;
  if (plVar1 != (longlong *)0x0 || lVar2 == 0) {
    if (lVar2 == 0 && plVar1 != (longlong *)0x0) {
      *(int *)((longlong)param_3 + 0xc) = *(int *)((longlong)param_3 + 0xc) + 1;
      lVar6 = *plVar1;
      if (*(char *)((longlong)param_3 + 10) != '\0') {
        if (*(char *)((longlong)param_3 + 9) == '\0') {
          plVar12 = (longlong *)(param_2 + 0x10);
LAB_1434c1a2f:
          plVar12 = (longlong *)*plVar12;
          if (((plVar12 != (longlong *)0x0) && (1 < *(byte *)(lVar6 + 0x179))) &&
             ((*(byte *)(plVar12 + 6) & 0x84) == 0)) {
            (**(code **)(*plVar12 + 0x318))();
          }
        }
        else {
          lVar3 = *param_3;
          if (lVar6 == 0) {
            uVar11 = 0;
            uVar14 = 0;
          }
          else {
            uVar11 = *(uint *)(lVar6 + 0xc);
            if ((int)uVar11 < DAT_14c9647dc) {
              lVar8 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
            }
            else {
              lVar8 = 0;
            }
            uVar14 = *(uint *)(lVar8 + 0x10);
            if (*(uint *)(lVar8 + 0x10) == 0) {
              LOCK();
              iVar7 = DAT_14c964868 + 1;
              UNLOCK();
              uVar10 = DAT_14c964868 + 1;
              bVar13 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar7;
              if (bVar13) {
                local_9c = uVar10;
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,uVar10);
                uVar10 = local_9c;
              }
              LOCK();
              uVar14 = *(uint *)(lVar8 + 0x10);
              bVar13 = uVar14 == 0;
              if (bVar13) {
                *(uint *)(lVar8 + 0x10) = uVar10;
                uVar14 = 0;
              }
              UNLOCK();
              if (bVar13) {
                uVar14 = uVar10;
              }
            }
          }
          if (*(int *)(lVar3 + 0x1460) != *(int *)(lVar3 + 0x148c)) {
            lVar8 = lVar3 + 0x1490;
            if (*(longlong *)(lVar3 + 0x1498) != 0) {
              lVar8 = *(longlong *)(lVar3 + 0x1498);
            }
            iVar7 = *(int *)(lVar8 + (ulonglong)(*(int *)(lVar3 + 0x14a0) - 1U & (uVar14 ^ uVar11))
                                     * 4);
            if (iVar7 != -1) {
              do {
                plVar12 = (longlong *)(*(longlong *)(lVar3 + 0x1458) + (longlong)iVar7 * 0x18);
                if (*plVar12 == CONCAT44(uVar14,uVar11)) {
                  if (plVar12 != (longlong *)0x0) {
                    plVar12 = plVar12 + 1;
                    goto LAB_1434c1a2f;
                  }
                  break;
                }
                iVar7 = (int)plVar12[2];
              } while (iVar7 != -1);
            }
          }
        }
      }
      fVar15 = *(float *)(lVar6 + 0x198);
      if (*(float *)(param_3 + 3) <= *(float *)(lVar6 + 0x198)) {
        fVar15 = *(float *)(param_3 + 3);
      }
      if (fVar15 <= *(float *)((longlong)param_3 + 0x14)) {
        fVar15 = *(float *)((longlong)param_3 + 0x14);
      }
      dVar16 = 1.0 / (double)fVar15;
      dVar17 = (double)plVar1[3];
      if ((dVar17 == 0.0) && (!NAN(dVar17))) {
        dVar17 = (double)*(float *)(param_1 + 0xca8);
        plVar1[3] = (longlong)dVar17;
        *(float *)(plVar1 + 4) = (float)dVar16;
      }
      fVar20 = (float)dVar16;
      fVar21 = (float)((double)*(float *)(param_1 + 0xca8) - dVar17);
      uVar14 = -(uint)(*(float *)(lVar6 + 0x19c) == 0.0);
      fVar15 = (float)(uVar14 & 0x3f000000 | ~uVar14 & (uint)(1.0 / *(float *)(lVar6 + 0x19c)));
      if (fVar15 <= fVar20) {
        fVar15 = fVar20;
      }
      if (2.0 < fVar21) {
        fVar18 = (fVar21 + -2.0) / 5.0;
        if (1.0 <= fVar18) {
          fVar18 = 1.0;
        }
        if (fVar18 <= 0.0) {
          fVar18 = 0.0;
        }
        *(float *)(plVar1 + 4) = (fVar15 - fVar20) * fVar18 + fVar20;
      }
      dVar17 = dVar16;
      if ((char)param_3[1] == '\x01') {
        dVar17 = (double)*(float *)(plVar1 + 4);
      }
      dVar19 = (double)*(float *)(param_1 + 0xca8) - (double)plVar1[2];
      if (dVar16 <= dVar19) {
        dVar19 = dVar16;
      }
      uVar14 = *(int *)(param_1 + 0x814) * 0xbb38435 + 0x3619636b;
      *(uint *)(param_1 + 0x814) = uVar14;
      if (dVar19 <= 0.0) {
        dVar19 = 0.0;
      }
      plVar1[2] = (longlong)
                  ((double)*(float *)((longlong)param_3 + 0x1c) *
                   ((double)((float)(uVar14 >> 9 | 0x3f800000) + -1.0) + -0.5) +
                  ((dVar17 + (double)*(float *)(param_1 + 0xca8)) - dVar19));
      cVar5 = FUN_14368a3f6(param_1 + 0xb40,lVar6,*param_3,0);
      if (cVar5 != '\0') {
        fVar18 = fVar21 * 0.7;
        if (fVar15 <= fVar21 * 0.7) {
          fVar18 = fVar15;
        }
        if (fVar18 <= fVar20) {
          fVar18 = fVar20;
        }
        *(float *)(plVar1 + 4) = fVar18;
        plVar1[3] = (longlong)(double)*(float *)(param_1 + 0xca8);
      }
    }
  }
  else {
    dVar17 = (double)param_3[6];
    if ((dVar17 <= 0.0) || (dVar17 < (double)param_3[7] || dVar17 == (double)param_3[7])) {
      *(int *)(param_3 + 2) = (int)param_3[2] + 1;
      lVar6 = *param_3;
      if (DAT_14c87ead8 == '\0') {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = '\x01';
      }
      local_98.s.HighPart = 0;
      local_98.s.LowPart = DAT_14c892cd8;
      lVar6 = FUN_141364a4a(lVar6,&local_98,2,0xffffffff);
      if (lVar6 != 0) {
        FUN_1435990e4(param_1,*param_3,lVar2);
        lVar3 = *param_3;
        if ((*(longlong *)(lVar3 + 0x58) == 0) ||
           (*(longlong *)(*(longlong *)(lVar3 + 0x58) + 0x840) == 0)) {
          plVar12 = *(longlong **)(lVar3 + 0x14a8);
          if (plVar12 == (longlong *)0x0) {
            FUN_140326250(lVar3 + 0x14e0,lVar2 + 0x28);
          }
          else {
            (**(code **)(*plVar12 + 0x2c8))(plVar12,lVar2);
          }
        }
        FUN_140cef0f4(lVar6,0,*(undefined1 *)(lVar2 + 0x48));
      }
    }
  }
  uVar9 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
  if (0.0 < (double)param_3[5]) {
    QueryPerformanceCounter(&local_98);
    dVar17 = (double)local_98.QuadPart * DAT_14c83f420 + 16777216.0;
    if (plVar1 == (longlong *)0x0 && lVar2 != 0) {
      param_3[7] = (longlong)((dVar17 - (dVar4 + 16777216.0)) + (double)param_3[7]);
    }
    dVar17 = dVar17 - (double)param_3[4];
    if ((double)param_3[5] <= dVar17 && dVar17 != (double)param_3[5]) {
      uVar9 = 0;
    }
  }
  if ((local_90 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 1434c1d2e FUN_1434c1d2e body=374 status=ok
// SIG undefined FUN_1434c1d2e(void)

void FUN_1434c1d2e(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  DWORD DVar4;
  DWORD DVar5;
  longlong lVar6;
  ulonglong uVar7;
  byte bVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  
  lVar10 = DAT_14cad5e80;
  bVar8 = (byte)param_2;
  if ((*(byte *)(param_1 + 0x9ab) & 1) == bVar8) {
    return;
  }
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
    uVar7 = 0;
  }
  else if (iVar1 == 1) {
    DVar4 = FUN_140ad26c0();
    DVar5 = GetCurrentThreadId();
    uVar7 = (ulonglong)(DVar4 != DVar5);
  }
  else {
    uVar7 = 1;
  }
  if ((0 < *(int *)(lVar10 + uVar7 * 4)) &&
     (lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0xf0) + 0x78), 0 < lVar10)) {
    uVar11 = 0;
    if (bVar8 == 0) {
      uVar11 = 0x3f800000;
    }
    do {
      lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xf0) + 0x70) + -8 + lVar10 * 8);
      if (lVar2 != 0) {
        lVar6 = FUN_1414cbbb6();
        lVar9 = (longlong)*(int *)(lVar6 + 0x38);
        if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
           (*(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + lVar9 * 8) ==
            lVar6 + 0x30)) {
          *(undefined4 *)(lVar2 + 0x78) = uVar11;
          lVar2 = *(longlong *)(lVar2 + 0x68);
          if (lVar2 != 0) {
            if ((longlong)*(int *)(param_1 + 0xa90) != 0) {
              lVar9 = *(longlong *)(param_1 + 0xa88);
              lVar6 = 0;
              do {
                if (*(longlong *)(lVar9 + lVar6) == lVar2) goto LAB_1434c1e4e;
                lVar6 = lVar6 + 8;
              } while ((longlong)*(int *)(param_1 + 0xa90) * 8 != lVar6);
            }
            *(undefined4 *)(lVar2 + 0x78) = uVar11;
            FUN_14020a6cc(lVar2 + 0x70,CONCAT71((int7)((ulonglong)lVar9 >> 8),1));
          }
        }
      }
LAB_1434c1e4e:
      bVar3 = 1 < lVar10;
      lVar10 = lVar10 + -1;
    } while (bVar3);
  }
  *(byte *)(param_1 + 0x9ab) = *(byte *)(param_1 + 0x9ab) & 0xfe | bVar8;
  FUN_147a714f0(*(undefined8 *)(param_1 + 0x1a8),param_2);
  return;
}



// FUNCTION 1434c1ea4 FUN_1434c1ea4 body=270 status=ok
// SIG undefined FUN_1434c1ea4(void)

void FUN_1434c1ea4(longlong param_1,longlong param_2,int param_3)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58 [24];
  longlong local_40;
  longlong local_30;
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(byte *)(param_1 + 0x9ab) = *(byte *)(param_1 + 0x9ab) & 0xef;
  if (*(int *)(param_2 + 8) == 0) {
    local_28 = 0;
    uStack_20 = 0;
    cVar1 = FUN_143686888(param_1 + 0xb40);
    lVar2 = local_28;
    if (cVar1 != '\0') {
      if ((param_3 < 0) || (*(int *)(param_1 + 0xd58) <= param_3)) {
        FUN_147a60036(local_58,2);
        FUN_146efbfa6(param_1 + 0x13e0,local_58);
        if (local_30 != 0) {
          (**(code **)(local_30 + -0x10))(local_30 + -0x10);
        }
        lVar2 = local_28;
        if (local_40 != 0) {
          FUN_1400020a8();
          lVar2 = local_28;
        }
      }
      else {
        FUN_147a6038c(param_1,param_3);
        lVar2 = local_28;
      }
    }
  }
  else {
    FUN_147a60036(local_58,2);
    FUN_146efbfa6(param_1 + 0x13e0,local_58);
    lVar2 = local_40;
    if (local_30 != 0) {
      (**(code **)(local_30 + -0x10))(local_30 + -0x10);
      lVar2 = local_40;
    }
  }
  if (lVar2 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1434c1fb4 FUN_1434c1fb4 body=86 status=ok
// SIG undefined FUN_1434c1fb4(void)

undefined8 FUN_1434c1fb4(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (*(char *)(param_1 + 0xcbf) == '\x01') {
    uVar1 = *(uint *)(param_2 + 3);
    if ((((ulonglong)uVar1 != 0) && (-1 < (int)(uVar1 - 1))) &&
       ((int)(uVar1 - 1) < *(int *)(param_1 + 0x1370))) {
      lVar2 = *(longlong *)(param_1 + 0x1268);
      lVar3 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1368) + -4 + (ulonglong)uVar1 * 4);
      *(undefined1 *)(lVar2 + 0x15 + lVar3 * 0x18) = 1;
      if (*(char *)(lVar2 + 0x14 + lVar3 * 0x18) != '\x01') {
        return CONCAT71((int7)((ulonglong)(lVar3 * 3) >> 8),1);
      }
    }
  }
  uVar4 = FUN_1434c200a(param_1,*param_2,*(undefined4 *)(param_2 + 1));
  return uVar4;
}



// FUNCTION 1434c200a FUN_1434c200a body=189 status=ok
// SIG undefined FUN_1434c200a(void)

undefined8 FUN_1434c200a(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [40];
  undefined1 local_50 [24];
  longlong local_38;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1434c1d2e(param_1,0);
  plVar1 = *(longlong **)(param_1 + 0xf0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x398))(plVar1,param_2,param_3);
    if ((*(longlong *)(param_1 + 0xf0) != 0) &&
       (uVar2 = 1, *(int *)(*(longlong *)(param_1 + 0xf0) + 0x134) != 1)) goto LAB_1434c2062;
  }
  FUN_147a60036(local_50,9);
  FUN_146efbfa6(param_1 + 0x13e0,local_50);
  if (local_28 != 0) {
    (**(code **)(local_28 + -0x10))(local_28 + -0x10);
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  uVar2 = 0;
LAB_1434c2062:
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434c20c8 FUN_1434c20c8 body=324 status=ok
// SIG undefined FUN_1434c20c8(void)

void FUN_1434c20c8(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  FUN_14114e6dc(param_1 + 0xa28,param_3);
  cVar2 = FUN_147a5f410(param_1,&DAT_14cad5f50);
  if ((cVar2 == '\0') && (*(char *)(param_1 + 0x9a8) != '\x01')) {
    puVar4 = (undefined8 *)FUN_14001cc68(0x50,0x10);
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = &PTR_LAB_14a8ba590;
    *(undefined4 *)((longlong)puVar4 + 0x1c) = 0;
    if (param_1 == 0) {
      *(undefined4 *)(puVar4 + 3) = 0;
      iVar3 = 0;
    }
    else {
      uVar1 = *(uint *)(param_1 + 0xc);
      *(uint *)(puVar4 + 3) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      iVar3 = *(int *)(lVar6 + 0x10);
      if (*(int *)(lVar6 + 0x10) == 0) {
        LOCK();
        iVar3 = DAT_14c964868 + 1;
        UNLOCK();
        iVar5 = DAT_14c964868 + 1;
        bVar7 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar3;
        if (bVar7) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar5);
        }
        LOCK();
        iVar3 = *(int *)(lVar6 + 0x10);
        bVar7 = iVar3 == 0;
        if (bVar7) {
          *(int *)(lVar6 + 0x10) = iVar5;
          iVar3 = 0;
        }
        UNLOCK();
        if (bVar7) {
          iVar3 = iVar5;
        }
      }
    }
    *(int *)((longlong)puVar4 + 0x1c) = iVar3;
    *puVar4 = &PTR_FUN_14a8ba5c0;
    *(undefined4 *)((longlong)puVar4 + 0x24) = param_2;
    *(undefined1 *)(puVar4 + 9) = 0;
    FUN_1434bbef8(param_1,puVar4);
    return;
  }
  FUN_147a619fe(param_1,0);
  return;
}



// FUNCTION 1434c220c FUN_1434c220c body=331 status=ok
// SIG undefined FUN_1434c220c(void)

void FUN_1434c220c(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar2 = *(longlong **)(param_1 + 0x8f8);
  plVar3 = *(longlong **)(param_1 + 0x900);
  if (plVar3 == (longlong *)0x0) {
    uVar4 = (**(code **)(*plVar2 + 0x60))();
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    uVar4 = (**(code **)(*plVar2 + 0x60))();
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
  *(float *)(param_1 + 0xcac) = (float)uVar4 / 1000.0;
  plVar2 = *(longlong **)(param_1 + 0x8f8);
  plVar3 = *(longlong **)(param_1 + 0x900);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  iVar5 = (**(code **)(*plVar2 + 0x60))();
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
  if (iVar5 - 5000U != 0) {
    local_38 = (undefined8 *)0x0;
    uStack_30 = 0;
    FUN_1434c20c8(param_1,(float)(iVar5 - 5000U) / 1000.0,&local_38);
    if ((int)uStack_30 != 0) {
      if (local_38 == (undefined8 *)0x0) goto LAB_1434c2332;
      (**(code **)*local_38)(local_38,0);
      FUN_1446efa72(&local_38,0,0,0x10);
      uStack_30 = uStack_30 & 0xffffffff00000000;
    }
    if (local_38 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1434c2332:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434c2358 FUN_1434c2358 body=1006 status=ok
// SIG undefined FUN_1434c2358(void)

void FUN_1434c2358(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong *plVar9;
  int iVar10;
  uint uVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  uint *puVar15;
  longlong *plVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  code **local_80;
  code *local_78;
  code *local_70;
  uint *local_60;
  longlong local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    puVar15 = (uint *)(param_1 + 0xab8);
    iVar2 = *(int *)(param_1 + 0xad0);
    if (iVar2 == 0) {
      uVar18 = 1;
      uVar17 = 0;
      iVar10 = 0;
      iVar4 = 0;
    }
    else {
      puVar5 = *(uint **)(param_1 + 0xac8);
      if (*(uint **)(param_1 + 0xac8) == (uint *)0x0) {
        puVar5 = puVar15;
      }
      uVar11 = *puVar5;
      if (uVar11 == 0) {
        iVar4 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar4 = iVar2 + -1;
        }
        uVar17 = 0;
        uVar18 = (ulonglong)(uint)(iVar4 >> 5);
        if (iVar4 >> 5 < 1) {
          uVar18 = uVar17;
        }
        iVar10 = 0;
        do {
          if (uVar18 == uVar17) goto LAB_1434c241b;
          iVar10 = iVar10 + 0x20;
          uVar11 = puVar5[uVar17 + 1];
          uVar17 = uVar17 + 1;
        } while (uVar11 == 0);
      }
      else {
        uVar17 = 0;
        iVar10 = 0;
      }
      uVar18 = (ulonglong)(-uVar11 & uVar11);
      uVar1 = uVar18 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar4 = (iVar10 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar4) {
        iVar4 = iVar2;
      }
    }
    if (iVar4 != iVar2) {
      uVar11 = 0xffffffff;
      do {
        plVar9 = *(longlong **)(param_1 + 0x1b8);
        if ((int)plVar9[1] != *(int *)((longlong)plVar9 + 0x34)) {
          plVar16 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(param_1 + 0xaa8));
          lVar13 = *plVar16;
          plVar12 = plVar9 + 7;
          if ((longlong *)plVar9[8] != (longlong *)0x0) {
            plVar12 = (longlong *)plVar9[8];
          }
          iVar4 = *(int *)((longlong)plVar12 +
                          (ulonglong)
                          ((int)plVar9[9] - 1U &
                          (int)lVar13 + (int)((ulonglong)lVar13 >> 0x20) * 0x17) * 4);
          if (iVar4 != -1) {
            do {
              lVar14 = *plVar9 + (longlong)iVar4 * 0x40;
              if (*(longlong *)(*plVar9 + (longlong)iVar4 * 0x40) == lVar13) {
                if ((((((uint *)(lVar14 + 8) != (uint *)0x0 && lVar14 != 0) &&
                      (*(int *)(lVar14 + 0xc) != 0)) &&
                     (uVar8 = *(uint *)(lVar14 + 8), -1 < (int)uVar8)) &&
                    (((int)uVar8 < DAT_14c9647dc &&
                     (plVar9 = (longlong *)
                               ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
                     plVar9 != (longlong *)0x0)))) &&
                   (((int)plVar9[2] == *(int *)(lVar14 + 0xc) &&
                    (((*(uint *)(plVar9 + 1) & 0x10200000) == 0 && (lVar13 = *plVar9, lVar13 != 0)))
                    ))) {
                  if (DAT_14cac9ca8 == 0) {
                    local_50 = FUN_141030f22;
                    local_70 = FUN_14081d0ea;
                    local_78 = FUN_14081d0ea;
                    local_80 = &local_50;
                    local_88 = &LAB_1478c0a72;
                    local_90 = &LAB_1417b2375;
                    local_98 = L"Engine";
                    local_a0 = 0x1000000000;
                    local_a8 = 0x10000004;
                    local_b0 = 8;
                    local_b8 = 0x390;
                    local_60 = puVar15;
                    local_58 = lVar13;
                    FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
                    lVar13 = local_58;
                    puVar15 = local_60;
                  }
                  if ((*(int *)(DAT_14cac9ca8 + 0x38) <=
                       *(int *)(*(longlong *)(lVar13 + 0x10) + 0x38)) &&
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
                       (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) {
                    local_60 = puVar15;
                    FUN_1412f3774(*(undefined8 *)(param_1 + 0x1a8),lVar13,1,1);
                    FUN_141021032(*(longlong *)(param_1 + 0x1b8) + 0x50,*(undefined8 *)(lVar14 + 8))
                    ;
                    FUN_140ec6b16(*(undefined8 *)(param_1 + 0x1b8),plVar16);
                    *(byte *)(lVar14 + 0x30) = *(byte *)(lVar14 + 0x30) & 0xfe;
                    puVar15 = local_60;
                  }
                }
                break;
              }
              iVar4 = *(int *)(lVar14 + 0x38);
            } while (iVar4 != -1);
          }
        }
        uVar11 = uVar11 & ~(uint)uVar18;
        puVar5 = *(uint **)(param_1 + 0xac8);
        if (*(uint **)(param_1 + 0xac8) == (uint *)0x0) {
          puVar5 = puVar15;
        }
        iVar3 = *(int *)(param_1 + 0xad0);
        iVar4 = (int)uVar17;
        lVar13 = (longlong)iVar4;
        uVar8 = puVar5[lVar13] & uVar11;
        if (uVar8 == 0) {
          iVar6 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar6 = iVar3 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar10 = iVar10 + 0x20;
          iVar7 = iVar6;
          if (iVar6 < iVar4) {
            iVar7 = iVar4;
          }
          if (iVar4 < iVar6) {
            lVar14 = 0;
            do {
              uVar8 = puVar5[lVar13 + lVar14 + 1];
              if (uVar8 != 0) {
                uVar17 = (ulonglong)(iVar4 + (int)lVar14 + 1);
                uVar11 = 0xffffffff;
                goto LAB_1434c2640;
              }
              iVar10 = iVar10 + 0x20;
              lVar14 = lVar14 + 1;
            } while (iVar7 - lVar13 != lVar14);
            uVar11 = 0xffffffff;
            iVar4 = iVar7;
          }
          uVar17 = (ulonglong)(iVar4 + 1);
          iVar4 = iVar3;
        }
        else {
LAB_1434c2640:
          uVar18 = (ulonglong)(-uVar8 & uVar8);
          uVar1 = uVar18 * 2 + 1;
          lVar13 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          iVar4 = (iVar10 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar4) {
            iVar4 = iVar3;
          }
        }
      } while (iVar4 != iVar2);
    }
  }
LAB_1434c241b:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_144958770(param_1 + 0xaa8,0);
  return;
}



// FUNCTION 1434c2748 FUN_1434c2748 body=498 status=ok
// SIG undefined FUN_1434c2748(void)

ulonglong FUN_1434c2748(longlong *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  byte bVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  if (param_3 != 0 && param_2 != 0) {
    if ((int)param_1[0x20] == 0) {
      if (param_1[0x1e] != 0) goto LAB_1434c278e;
    }
    else {
      if ((int)param_1[0x20] < 1) {
LAB_1434c278e:
        plVar4 = param_1 + 0x1e;
      }
      else {
        plVar4 = (longlong *)param_1[0x1f];
      }
      lVar3 = (**(code **)(*param_1 + 0x3b8))(param_1,*plVar4);
      plVar4 = (longlong *)FUN_143685fee(param_1 + 0x168,lVar3);
      if (plVar4 != (longlong *)0x0) {
        if (DAT_14c950c29 == 1) {
          FUN_1456cec3c(param_2);
        }
        plVar4[0x86] = param_2;
        plVar5 = (longlong *)FUN_140161992(DAT_14cb0d2b0,param_3);
        uVar6 = 0xff;
        if ((longlong)(int)plVar5[1] != 0) {
          lVar7 = (longlong)(int)plVar5[1] << 3;
          lVar9 = 0;
          do {
            if (*(longlong *)(*plVar5 + lVar9 * 8) == param_2) {
              uVar6 = (undefined1)lVar9;
              break;
            }
            lVar9 = lVar9 + 1;
            lVar7 = lVar7 + -8;
          } while (lVar7 != 0);
        }
        *(undefined1 *)((longlong)plVar4 + 0x5a4) = uVar6;
        if (DAT_14c87ead8 == '\0') {
          FUN_140024d3a(&DAT_14c87eb00);
          DAT_14c87ead8 = '\x01';
        }
        (**(code **)(*plVar4 + 0x678))(plVar4,DAT_14c893048);
        *(undefined4 *)(param_2 + 0x38) = 0;
        if (DAT_14c950c29 == 1) {
          FUN_1456cec3c(plVar4);
        }
        bVar2 = DAT_14c950c29;
        *(longlong **)(param_2 + 0x30) = plVar4;
        if ((bVar2 & 1) != 0) {
          FUN_1456cec3c(plVar4);
          bVar2 = DAT_14c950c29;
        }
        *(longlong **)(lVar3 + 0x30) = plVar4;
        if ((bVar2 & 1) != 0) {
          FUN_1456cec3c(plVar4);
        }
        *(longlong **)(lVar3 + 0x98) = plVar4;
        (**(code **)(*plVar4 + 0xd30))(plVar4,param_2);
        if (DAT_14c950c29 == 1) {
          FUN_1456cec3c(plVar4);
        }
        iVar1 = (int)param_1[0x152];
        *(uint *)(param_1 + 0x152) = iVar1 + 1U;
        if (*(uint *)((longlong)param_1 + 0xa94) < iVar1 + 1U) {
          FUN_14572fcec(param_1 + 0x151,iVar1);
        }
        *(longlong **)(param_1[0x151] + (longlong)iVar1 * 8) = plVar4;
        uVar8 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
        if (DAT_14c950c29 == 1) {
          FUN_1456cec3c(plVar4);
        }
        goto LAB_1434c28c8;
      }
    }
  }
  uVar8 = 0;
LAB_1434c28c8:
  return uVar8 & 0xffffffff;
}



// FUNCTION 1434c293a FUN_1434c293a body=227 status=ok
// SIG undefined FUN_1434c293a(void)

undefined8 FUN_1434c293a(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_2 != 0) && ((longlong)*(int *)(param_1 + 0xa90) != 0)) {
    lVar3 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0xa88) + lVar3) == param_2) {
        if (*(longlong *)(param_1 + 0x8f0) != param_2) {
          local_30 = param_2;
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(param_2);
          }
          local_28 = &local_30;
          FUN_14062a896(param_1 + 0xa88);
          plVar1 = *(longlong **)(param_2 + 0x608);
          if (param_3 == '\0') {
            plVar1[0x13] = 0;
          }
          FUN_147a491c6(plVar1);
          (**(code **)(*plVar1 + 0x330))(plVar1);
          *(undefined8 *)(param_2 + 0x608) = 0;
          uVar2 = 1;
          goto LAB_1434c2998;
        }
        break;
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)*(int *)(param_1 + 0xa90) * 8 != lVar3);
  }
  uVar2 = 0;
LAB_1434c2998:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 1434c2a1e FUN_1434c2a1e body=6719 status=ok
// SIG undefined FUN_1434c2a1e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434c2a1e(longlong param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  double dVar3;
  undefined1 auVar4 [16];
  longlong lVar5;
  double dVar6;
  double dVar7;
  double _X;
  undefined1 auVar8 [16];
  char cVar9;
  undefined8 uVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  undefined1 *puVar15;
  code *pcVar16;
  undefined8 *puVar17;
  int iVar18;
  uint uVar19;
  undefined4 uVar20;
  ulonglong uVar21;
  int iVar22;
  ushort uVar23;
  ulonglong uVar24;
  ulonglong *puVar25;
  int iVar26;
  undefined2 *puVar27;
  longlong lVar28;
  longlong *plVar29;
  uint *puVar30;
  ushort uVar31;
  uint uVar32;
  longlong lVar33;
  uint uVar34;
  ulonglong uVar35;
  longlong lVar36;
  longlong *plVar37;
  ulonglong uVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auStack_5b8 [32];
  ulonglong local_598;
  undefined4 local_590;
  undefined4 local_588;
  undefined8 local_580;
  wchar_t *local_578;
  undefined1 *local_570;
  undefined1 *local_568;
  code **local_560;
  code *local_558;
  code *local_550;
  longlong *local_548;
  undefined8 local_540;
  uint *local_538;
  undefined1 local_529;
  undefined8 local_528;
  longlong local_520;
  ulonglong local_518;
  longlong *local_510;
  int local_504;
  longlong *local_500;
  ulonglong *local_4f8;
  undefined8 local_4f0;
  longlong *local_4e8;
  undefined4 local_4e0;
  uint local_4dc;
  code *local_4d8;
  longlong local_4d0;
  uint *local_4c8;
  ulonglong *local_4c0;
  longlong local_4b8;
  longlong local_4b0;
  longlong local_4a8;
  longlong local_4a0;
  longlong local_498;
  ulonglong local_490;
  longlong local_488;
  undefined8 uStack_480;
  longlong local_478;
  longlong *local_470;
  longlong local_468;
  longlong *local_460;
  double local_458;
  double dStack_450;
  undefined1 local_448 [16];
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f0;
  longlong local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3c8;
  undefined4 local_3c0;
  undefined8 local_3bc;
  int local_3b4;
  undefined1 local_3b0 [8];
  undefined1 *local_3a8;
  int local_3a0;
  longlong local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  uint *local_378;
  undefined8 uStack_370;
  undefined2 local_368;
  byte local_366;
  undefined1 local_365;
  undefined4 local_364;
  longlong local_358;
  longlong *local_348;
  longlong local_338 [5];
  code *local_310;
  code *local_308;
  code *local_300;
  char local_2f8;
  undefined1 local_2f0 [512];
  ulonglong local_f0 [22];
  
  local_f0[0] = DAT_14c707940 ^ (ulonglong)auStack_5b8;
  local_529 = *(undefined1 *)(param_1 + 0x9aa);
  *(undefined1 *)(param_1 + 0x9aa) = 1;
  local_4e8 = param_2;
  local_4a0 = param_3;
  if (param_3 != 0) {
LAB_1434c2ae3:
    lVar28 = param_3;
    lVar33 = lVar28;
    if (*(longlong *)(lVar28 + 0x20) != 0) goto code_r0x0001434c2af2;
    goto LAB_1434c2b03;
  }
  local_4d0 = 0;
LAB_1434c2b1a:
  auVar8 = _DAT_1499387d0;
  puVar25 = (ulonglong *)(param_1 + 0x928);
  local_4c8 = (uint *)(param_1 + 0x938);
  iVar26 = *(int *)(param_1 + 0x950);
  uVar38 = 1;
  iVar18 = 0;
  uVar35 = 0;
  iVar22 = 0;
  if (iVar26 != 0) {
    puVar11 = *(uint **)(param_1 + 0x948);
    if (*(uint **)(param_1 + 0x948) == (uint *)0x0) {
      puVar11 = local_4c8;
    }
    uVar32 = *puVar11;
    if (uVar32 == 0) {
      iVar18 = iVar26 + 0x1e;
      if (-1 < iVar26 + -1) {
        iVar18 = iVar26 + -1;
      }
      uVar35 = 0;
      uVar38 = (ulonglong)(uint)(iVar18 >> 5);
      if (iVar18 >> 5 < 1) {
        uVar38 = 0;
      }
      iVar18 = 0;
      do {
        if (uVar38 == uVar35) goto LAB_1434c437b;
        iVar18 = iVar18 + 0x20;
        uVar32 = puVar11[uVar35 + 1];
        uVar35 = uVar35 + 1;
      } while (uVar32 == 0);
    }
    else {
      uVar35 = 0;
    }
    uVar38 = (ulonglong)(-uVar32 & uVar32);
    uVar21 = uVar38 * 2 + 1;
    lVar33 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar33 == 0; lVar33 = lVar33 + -1) {
      }
    }
    iVar22 = (iVar18 - ((uint)lVar33 ^ 0x3f)) + 0x3e;
    if (iVar26 <= iVar22) {
      iVar22 = iVar26;
    }
  }
  if (iVar26 <= iVar22) {
LAB_1434c437b:
    cVar9 = FUN_147a71fbe(puVar25);
    if (cVar9 != '\0') {
      uVar32 = *(int *)(param_1 + 0x930) - *(int *)(param_1 + 0x95c);
      iVar26 = 1;
      if (3 < uVar32) {
        uVar35 = (ulonglong)(uVar32 & 0xfffffffe) + 0xf;
        lVar33 = 0x3f;
        if (uVar35 != 0) {
          for (; uVar35 >> lVar33 == 0; lVar33 = lVar33 + -1) {
          }
        }
        iVar26 = 1 << ((byte)lVar33 & 0x1f);
      }
      *(int *)(param_1 + 0x970) = iVar26;
      FUN_147a70814(puVar25);
    }
    *(undefined1 *)(param_1 + 0x9aa) = local_529;
    if ((local_f0[0] ^ (ulonglong)auStack_5b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  local_4b0 = param_1 + 0xb40;
  local_498 = param_1 + 0x1568;
  local_4a8 = param_1 + 0x12b0;
  local_4b8 = param_1 + 0x1350;
  local_4d8 = (code *)local_f0;
  uVar32 = 0xffffffff;
  dVar6 = (double)DAT_1499387d0;
  dVar7 = DAT_1499387d0._8_8_;
  local_4f8 = puVar25;
LAB_1434c2c45:
  uVar21 = *local_4f8;
  local_520 = (longlong)iVar22 * 0xe8;
  iVar26 = *(int *)(uVar21 + 8 + local_520);
  iVar12 = iVar26 + -1;
  if (iVar26 == 0) {
    iVar12 = 0;
  }
  uVar34 = 0;
  if (0 < iVar12) {
    puVar27 = &DAT_149dfb77a;
    if (iVar26 != 0) {
      puVar27 = *(undefined2 **)(uVar21 + local_520);
    }
    lVar33 = 0;
    uVar34 = 0;
    do {
      uVar19 = ((uint)(0x19 < (ushort)puVar27[lVar33] - 0x61) * 0x20 + (uint)(ushort)puVar27[lVar33]
               ) - 0x20;
      uVar34 = uVar34 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar34 ^ uVar19) & 0xff) * 4);
      uVar34 = uVar34 >> 8 ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar34 & 0xff ^ uVar19 >> 8 & 0xff) * 4);
      lVar33 = lVar33 + 1;
    } while (iVar12 != (int)lVar33);
  }
  local_518 = uVar21;
  local_504 = iVar18;
  local_4dc = uVar32;
  local_490 = uVar35;
  if (*(int *)(param_1 + 0x1538) != *(int *)(param_1 + 0x1564)) {
    lVar33 = *(longlong *)(param_1 + 0x1570);
    if (*(longlong *)(param_1 + 0x1570) == 0) {
      lVar33 = local_498;
    }
    iVar18 = *(int *)(lVar33 + (ulonglong)(*(int *)(param_1 + 0x1578) - 1U & uVar34) * 4);
    if (iVar18 != -1) {
      lVar33 = *(longlong *)(param_1 + 0x1530);
LAB_1434c2d40:
      lVar28 = (longlong)iVar18;
      iVar18 = *(int *)(lVar33 + 8 + lVar28 * 0x18);
      if (iVar18 == iVar26) {
        if (1 < iVar26) {
          lVar36 = 0;
          do {
            uVar31 = *(ushort *)(*(longlong *)(lVar33 + lVar28 * 0x18) + lVar36);
            uVar23 = *(ushort *)(*(longlong *)(uVar21 + local_520) + lVar36);
            if (uVar31 == uVar23) {
              if (uVar31 == 0) break;
            }
            else {
              if (0x7f < (uVar23 | uVar31)) {
                iVar18 = (uint)uVar31 - (uint)uVar23;
                goto LAB_1434c2dd9;
              }
              if ((&DAT_149e05da0)[uVar31] != (&DAT_149e05da0)[(uint)uVar23])
              goto code_r0x0001434c2dd6;
            }
            lVar36 = lVar36 + 2;
          } while( true );
        }
      }
      else if (iVar18 + iVar26 != 1) goto LAB_1434c2d5e;
      goto LAB_1434c30e4;
    }
  }
LAB_1434c2df0:
  if ((local_4a0 == 0) || (*(longlong *)(uVar21 + 0x68 + local_520) == local_4d0)) {
    if (*(char *)(param_1 + 0xcbf) == '\x01') {
      FUN_1400021e4(uVar21 + local_520 + 0x68,&local_398);
      FUN_14094a6a4(&local_310,&local_398,0);
      if (local_398 != 0) {
        FUN_1400020a8();
      }
      uVar32 = 0;
      iVar26 = (int)local_308 + -1;
      if ((int)local_308 == 0) {
        iVar26 = 0;
      }
      if (0 < iVar26) {
        pcVar16 = (code *)&DAT_149dfb77a;
        if ((int)local_308 != 0) {
          pcVar16 = local_310;
        }
        lVar33 = 0;
        do {
          uVar34 = ((uint)(0x19 < *(ushort *)(pcVar16 + lVar33 * 2) - 0x61) * 0x20 +
                   (uint)*(ushort *)(pcVar16 + lVar33 * 2)) - 0x20;
          uVar32 = uVar32 >> 8 ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar32 ^ uVar34) & 0xff) * 4);
          uVar32 = uVar32 >> 8 ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar32 & 0xff ^ uVar34 >> 8 & 0xff) * 4);
          lVar33 = lVar33 + 1;
        } while (iVar26 != (int)lVar33);
      }
      if (*(int *)(param_1 + 0x1280) != *(int *)(param_1 + 0x12ac)) {
        lVar33 = *(longlong *)(param_1 + 0x12b8);
        if (*(longlong *)(param_1 + 0x12b8) == 0) {
          lVar33 = local_4a8;
        }
        iVar26 = *(int *)(lVar33 + (ulonglong)(*(int *)(param_1 + 0x12c0) - 1U & uVar32) * 4);
        if (iVar26 != -1) {
          lVar33 = *(longlong *)(param_1 + 0x1278);
LAB_1434c2f33:
          lVar28 = (longlong)iVar26 * 0x20;
          iVar26 = *(int *)(lVar33 + 8 + lVar28);
          if (iVar26 != (int)local_308) {
            if (iVar26 + (int)local_308 == 1) goto LAB_1434c2fb1;
            goto LAB_1434c2fa2;
          }
          if (1 < (int)local_308) {
            lVar36 = 0;
            do {
              uVar31 = *(ushort *)(*(longlong *)(lVar33 + lVar28) + lVar36);
              uVar35 = (ulonglong)uVar31;
              uVar23 = *(ushort *)(local_310 + lVar36);
              if (uVar31 == uVar23) {
                if (uVar31 == 0) break;
              }
              else {
                if (0x7f < (uVar23 | uVar31)) goto LAB_1434c2f8f;
                uVar31 = (ushort)(byte)(&DAT_149e05da0)[uVar35];
                uVar24 = (ulonglong)uVar23;
                uVar23 = (ushort)(byte)(&DAT_149e05da0)[uVar24];
                if ((&DAT_149e05da0)[uVar35] != (&DAT_149e05da0)[uVar24]) goto LAB_1434c2f8f;
              }
              lVar36 = lVar36 + 2;
            } while( true );
          }
          goto LAB_1434c2fb1;
        }
      }
LAB_1434c2fad:
      cVar9 = '\0';
LAB_1434c2fca:
      if (local_310 != (code *)0x0) {
        FUN_1400020a8();
      }
      if (cVar9 == '\0') goto LAB_1434c30e4;
    }
    if (*(int *)(param_1 + 0x1320) != *(int *)(param_1 + 0x134c)) {
      lVar33 = *(longlong *)(uVar21 + 0x68 + local_520);
      uVar32 = (uint)((ulonglong)lVar33 >> 0x10);
      uVar34 = (uint)lVar33 & 0xffff;
      lVar28 = *(longlong *)(param_1 + 0x1358);
      if (*(longlong *)(param_1 + 0x1358) == 0) {
        lVar28 = local_4b8;
      }
      iVar26 = *(int *)(lVar28 + (ulonglong)
                                 (*(int *)(param_1 + 0x1360) - 1U &
                                 (int)((ulonglong)lVar33 >> 0x20) + ((uint)lVar33 << 0x10 | uVar34)
                                 + (uVar32 << 0x13 | uVar32 & 0xffff) + (uVar34 >> 4)) * 4);
      if (iVar26 != -1) {
        plVar29 = (longlong *)(uVar21 + local_520 + 0x10);
        do {
          plVar2 = (longlong *)(*(longlong *)(param_1 + 0x1318) + (longlong)iVar26 * 0x18);
          if (*plVar2 == lVar33) {
            if ((((plVar2 != (longlong *)0x0) && (uVar35 = plVar2[1], uVar35 >> 0x20 != 0)) &&
                (uVar32 = (uint)uVar35, -1 < (int)uVar32)) &&
               ((((int)uVar32 < DAT_14c9647dc &&
                 (puVar17 = (undefined8 *)
                            ((ulonglong)((uVar32 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar32 >> 0xd & 0x3fff8))),
                 puVar17 != (undefined8 *)0x0)) &&
                ((*(int *)(puVar17 + 2) == (int)(uVar35 >> 0x20) &&
                 (((*(uint *)(puVar17 + 1) & 0x10200000) == 0 &&
                  (puVar11 = (uint *)*puVar17, puVar11 != (uint *)0x0)))))))) {
              lVar33 = *plVar29;
              local_510 = plVar29;
              if (DAT_14cac9ca8 == 0) {
                local_310 = FUN_141030f22;
                local_550 = FUN_14081d0ea;
                local_558 = FUN_14081d0ea;
                local_560 = &local_310;
                local_568 = &LAB_1478c0a72;
                local_570 = &LAB_1417b2375;
                local_578 = L"Engine";
                local_580 = 0x1000000000;
                local_588 = 0x10000004;
                local_590 = 8;
                local_598 = CONCAT44(local_598._4_4_,0x390);
                FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
              }
              local_590 = 0;
              local_598 = local_598 & 0xffffffff00000000;
              local_540 = puVar11;
              plVar29 = (longlong *)FUN_140be85e0(DAT_14cac9ca8,puVar11,lVar33,0);
              puVar25 = local_4f8;
              if (plVar29 != (longlong *)0x0) {
                (**(code **)(*plVar29 + 0x170))(plVar29,0,DAT_14c951640,0x10);
              }
              lVar33 = local_520;
              uStack_370 = 0;
              local_388 = 0;
              uStack_380 = 0;
              local_365 = 0;
              local_364 = 8;
              local_358 = 0;
              local_348 = (longlong *)0x0;
              uStack_390 = *(undefined8 *)(uVar21 + 0x18 + local_520);
              local_368 = 0x101;
              local_398 = *local_510;
              local_378 = local_540;
              local_366 = local_366 & 0xe0 | 6;
              auVar4 = *(undefined1 (*) [16])(uVar21 + 0x38 + local_520);
              dVar3 = *(double *)(uVar21 + 0x48 + local_520);
              auVar45 = divpd(auVar4,auVar8);
              auVar46._8_8_ = 0;
              auVar46._0_8_ = dVar3;
              auVar46 = divpd(auVar46,auVar8);
              auVar45 = roundpd(auVar45,auVar45,3);
              auVar46 = roundpd(auVar46,auVar46,3);
              dVar42 = (auVar4._0_8_ - auVar45._0_8_ * dVar6) * 0.008726646259971648;
              dVar43 = (auVar4._8_8_ - auVar45._8_8_ * dVar7) * 0.008726646259971648;
              dVar3 = (dVar3 - auVar46._0_8_ * dVar6) * 0.008726646259971648;
              _X = (0.0 - auVar46._8_8_ * dVar7) * 0.008726646259971648;
              dVar39 = sin(dVar42);
              dVar40 = sin(dVar43);
              dVar41 = sin(dVar3);
              sin(_X);
              dVar42 = cos(dVar42);
              dVar43 = cos(dVar43);
              dVar44 = cos(dVar3);
              cos(_X);
              dVar3 = dVar40 * dVar39 * dVar41 + dVar43 * dVar42 * dVar44;
              local_458 = dVar39 * dVar40 * dVar44 - dVar42 * dVar43 * dVar41;
              dStack_450 = -(dVar39 * dVar43 * dVar44) - dVar42 * dVar40 * dVar41;
              local_448._8_4_ = SUB84(dVar3,0);
              local_448._0_8_ = -(dVar43 * dVar39 * dVar41) + dVar40 * dVar42 * dVar44;
              local_448._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
              puVar17 = (undefined8 *)(uVar21 + 0x20 + lVar33);
              local_438 = *puVar17;
              uStack_430 = puVar17[1];
              local_428 = *(undefined8 *)(uVar21 + 0x30 + lVar33);
              uStack_420 = 0;
              puVar17 = (undefined8 *)(uVar21 + 0x50 + lVar33);
              local_418 = *puVar17;
              uStack_410 = puVar17[1];
              local_408 = *(undefined8 *)(uVar21 + 0x60 + lVar33);
              uStack_400 = 0;
              plVar29 = (longlong *)
                        FUN_141037e38(*(undefined8 *)(param_1 + 0x1a8),
                                      *(undefined8 *)(*(longlong *)(uVar21 + 0x18 + lVar33) + 0x10),
                                      &local_458,&local_398);
              if (plVar29 == (longlong *)0x0) goto LAB_1434c3c1f;
              local_3e8 = 0;
              uStack_3e0 = 0;
              FUN_14005eb28(&local_3e8,0x80);
              local_2f8 = '\0';
              local_310 = (code *)local_2f0;
              local_300 = local_4d8;
              local_468 = *(longlong *)(plVar29[2] + 0x18);
              local_308 = local_310;
              FUN_14005eb5c(&local_468,&local_310);
              if (local_300 <= local_308 + 2) {
                FUN_140213274(&local_310,1);
              }
              *(undefined2 *)local_308 = 0x20;
              local_548 = plVar29;
              local_308 = local_308 + 2;
              FUN_144750bde(plVar29,0,&local_310);
              FUN_1400020e8(&local_3e8,local_310,
                            (ulonglong)((longlong)local_308 - (longlong)local_310) >> 1);
              if (local_2f8 == '\x01') {
                FUN_1400020a8(local_310);
              }
              lVar33 = local_520;
              if (local_3e8 != 0) {
                FUN_1400020a8();
              }
              lVar28 = (longlong)*(int *)(uVar21 + 0xd8 + lVar33);
              uVar20 = (undefined4)CONCAT71((int7)((ulonglong)plVar29 >> 8),1);
              if (lVar28 == 0) goto LAB_1434c35ee;
              lVar36 = 0;
              goto LAB_1434c35cd;
            }
            break;
          }
          iVar26 = (int)plVar2[2];
        } while (iVar26 != -1);
      }
    }
  }
  goto LAB_1434c30e4;
code_r0x0001434c2af2:
  param_3 = *(longlong *)(lVar28 + 0x20);
  if ((*(uint *)(lVar28 + 8) >> 0x1c & 1) == 0) goto LAB_1434c2ae3;
  lVar33 = FUN_142840154(lVar28);
LAB_1434c2b03:
  if (lVar33 == 0) {
    param_3 = *(longlong *)(lVar28 + 0x20);
    goto LAB_1434c2ae3;
  }
  local_4d0 = *(longlong *)(lVar33 + 0x18);
  goto LAB_1434c2b1a;
code_r0x0001434c2dd6:
  iVar18 = (uint)(byte)(&DAT_149e05da0)[uVar31] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar23];
LAB_1434c2dd9:
  if (iVar18 == 0) goto LAB_1434c30e4;
LAB_1434c2d5e:
  iVar18 = *(int *)(lVar33 + 0x10 + lVar28 * 0x18);
  if (iVar18 == -1) goto LAB_1434c2df0;
  goto LAB_1434c2d40;
LAB_1434c2f8f:
  if (uVar31 == uVar23) {
LAB_1434c2fb1:
    lVar33 = FUN_147a61e24(local_4b0,&local_310);
    cVar9 = *(char *)(lVar33 + 0x14);
    goto LAB_1434c2fca;
  }
LAB_1434c2fa2:
  iVar26 = *(int *)(lVar33 + 0x18 + lVar28);
  if (iVar26 == -1) goto LAB_1434c2fad;
  goto LAB_1434c2f33;
  while (lVar36 = lVar36 + 8, lVar28 * 8 != lVar36) {
LAB_1434c35cd:
    lVar5 = *(longlong *)(*(longlong *)(uVar21 + 0xd0 + lVar33) + lVar36);
    if ((lVar5 == 0) || ((*(uint *)(lVar5 + 8) >> 0x1e & 1) != 0)) {
      uVar20 = 0;
      break;
    }
  }
LAB_1434c35ee:
  plVar29 = &local_468;
  FUN_140b97432(param_1,plVar29,local_548[2]);
  plVar37 = local_548;
  plVar2 = *(longlong **)(uVar21 + 0x70 + lVar33);
  if (plVar2 == (longlong *)0x0) {
    local_4f0 = 0;
    puVar25 = (ulonglong *)0x0;
    uVar10 = local_4f0;
  }
  else {
    puVar25 = (ulonglong *)*plVar2;
    uVar10 = CONCAT71((int7)((ulonglong)plVar29 >> 8),puVar25 != (ulonglong *)0x0);
    if ((local_468 != 0 & (byte)uVar20 & puVar25 != (ulonglong *)0x0) == 1) {
      local_540 = (uint *)CONCAT44(local_540._4_4_,(uint)*(byte *)(local_548 + 0x2f));
      local_598 = *puVar25;
      FUN_147ce25b4(local_468,puVar25 + 0xe,0);
      uVar10 = FUN_1433b72a0(plVar37,(ulonglong)local_540 & 0xffffffff);
      uVar10 = CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
    }
  }
  local_4f0 = uVar10;
  *(byte *)(plVar37 + 0xc) = *(byte *)(plVar37 + 0xc) | 2;
  if ((char)plVar37[0x2f] == '\x03') {
    FUN_1478c0b8c(plVar37);
    plVar37 = local_548;
  }
  local_3c8 = 0;
  local_3c0 = 0;
  local_3e8 = 0;
  uStack_3e0 = 0;
  local_3bc = 0xffffffff00000080;
  local_3b4 = 0;
  local_3a8 = (undefined1 *)0x0;
  local_3a0 = 0;
  local_4e0 = uVar20;
  local_4c0 = puVar25;
  if ((byte)uVar20 == 0) {
    FUN_1458f5d9e(plVar37);
    local_598 = local_598 & 0xffffffffffffff00;
    FUN_14113775c(local_548,&local_458,1,0);
    plVar29 = local_548;
  }
  else {
    uVar32 = *(uint *)(plVar37 + 0x4d);
    puVar11 = (uint *)(plVar37 + 0x4a);
    local_538 = puVar11;
    if (uVar32 == 0) {
      uVar35 = 0;
      uVar21 = 1;
      uVar34 = 0;
      local_540 = (uint *)((ulonglong)local_540._4_4_ << 0x20);
    }
    else {
      puVar30 = (uint *)plVar37[0x4c];
      if ((uint *)plVar37[0x4c] == (uint *)0x0) {
        puVar30 = puVar11;
      }
      uVar34 = *puVar30;
      if (uVar34 == 0) {
        iVar26 = uVar32 + 0x1e;
        if (-1 < (int)(uVar32 - 1)) {
          iVar26 = uVar32 - 1;
        }
        uVar35 = 0;
        uVar21 = (ulonglong)(uint)(iVar26 >> 5);
        if (iVar26 >> 5 < 1) {
          uVar21 = uVar35;
        }
        local_540 = (uint *)((ulonglong)local_540 & 0xffffffff00000000);
        do {
          if (uVar21 == uVar35) goto LAB_1434c379c;
          local_540 = (uint *)CONCAT44(local_540._4_4_,(int)local_540 + 0x20);
          uVar34 = puVar30[uVar35 + 1];
          uVar35 = uVar35 + 1;
        } while (uVar34 == 0);
      }
      else {
        uVar35 = 0;
        local_540 = (uint *)((ulonglong)local_540._4_4_ << 0x20);
      }
      uVar21 = (ulonglong)(-uVar34 & uVar34);
      uVar24 = uVar21 * 2 + 1;
      lVar33 = 0x3f;
      if (uVar24 != 0) {
        for (; uVar24 >> lVar33 == 0; lVar33 = lVar33 + -1) {
        }
      }
      uVar34 = ((int)local_540 - ((uint)lVar33 ^ 0x3f)) + 0x3e;
      if ((int)uVar32 <= (int)uVar34) {
        uVar34 = uVar32;
      }
    }
    if (uVar34 != uVar32) {
      uVar19 = 0xffffffff;
      local_528 = (ulonglong)uVar32;
      do {
        local_310 = *(code **)(plVar37[0x48] + (longlong)(int)uVar34 * 0x10);
        if (local_310 != (code *)0x0) {
          FUN_147a61cb4(param_1,local_310,local_510);
          FUN_1479cbdfe(&local_3e8,&local_478,&local_310,0);
          uVar32 = *(uint *)(local_548 + 0x4d);
          puVar11 = local_538;
          plVar37 = local_548;
        }
        uVar19 = uVar19 & ~(uint)uVar21;
        puVar30 = (uint *)plVar37[0x4c];
        if ((uint *)plVar37[0x4c] == (uint *)0x0) {
          puVar30 = puVar11;
        }
        iVar26 = (int)uVar35;
        lVar33 = (longlong)iVar26;
        uVar34 = puVar30[lVar33] & uVar19;
        if (uVar34 == 0) {
          iVar18 = uVar32 + 0x1e;
          if (-1 < (int)(uVar32 - 1)) {
            iVar18 = uVar32 - 1;
          }
          iVar18 = iVar18 >> 5;
          local_540 = (uint *)CONCAT44(local_540._4_4_,(int)local_540 + 0x20);
          iVar12 = iVar18;
          if (iVar18 < iVar26) {
            iVar12 = iVar26;
          }
          puVar11 = local_538;
          if (iVar26 < iVar18) {
            lVar28 = 0;
            do {
              uVar34 = puVar30[lVar33 + lVar28 + 1];
              if (uVar34 != 0) {
                uVar35 = (ulonglong)(iVar26 + (int)lVar28 + 1);
                uVar19 = 0xffffffff;
                goto LAB_1434c3d11;
              }
              local_540 = (uint *)CONCAT44(local_540._4_4_,(int)local_540 + 0x20);
              lVar28 = lVar28 + 1;
            } while (iVar12 - lVar33 != lVar28);
            uVar19 = 0xffffffff;
            iVar26 = iVar12;
          }
          uVar35 = (ulonglong)(iVar26 + 1);
          plVar37 = local_548;
          uVar34 = uVar32;
        }
        else {
LAB_1434c3d11:
          uVar21 = (ulonglong)(-uVar34 & uVar34);
          uVar24 = uVar21 * 2 + 1;
          lVar33 = 0x3f;
          if (uVar24 != 0) {
            for (; uVar24 >> lVar33 == 0; lVar33 = lVar33 + -1) {
            }
          }
          uVar34 = ((int)local_540 - ((uint)lVar33 ^ 0x3f)) + 0x3e;
          if ((int)uVar32 <= (int)uVar34) {
            uVar34 = uVar32;
          }
        }
      } while (uVar34 != (uint)local_528);
    }
LAB_1434c379c:
    FUN_1458f5d9e(plVar37);
    local_598 = local_598 & 0xffffffffffffff00;
    FUN_14113775c(local_548,&local_458,1);
    uVar32 = *(uint *)(local_548 + 0x4d);
    plVar29 = local_548;
    if (uVar32 == 0) {
      local_540 = (uint *)0x0;
      uVar35 = 1;
      uVar34 = 0;
      local_528 = (ulonglong)local_528._4_4_ << 0x20;
    }
    else {
      puVar11 = (uint *)local_548[0x4c];
      if ((uint *)local_548[0x4c] == (uint *)0x0) {
        puVar11 = local_538;
      }
      uVar34 = *puVar11;
      if (uVar34 == 0) {
        iVar26 = uVar32 + 0x1e;
        if (-1 < (int)(uVar32 - 1)) {
          iVar26 = uVar32 - 1;
        }
        puVar30 = (uint *)0x0;
        puVar14 = (uint *)(ulonglong)(uint)(iVar26 >> 5);
        if (iVar26 >> 5 < 1) {
          puVar14 = puVar30;
        }
        local_528 = local_528 & 0xffffffff00000000;
        do {
          if (puVar14 == puVar30) goto LAB_1434c3a6f;
          local_528 = CONCAT44(local_528._4_4_,(int)local_528 + 0x20);
          uVar34 = puVar11[(longlong)puVar30 + 1];
          puVar30 = (uint *)((longlong)puVar30 + 1);
        } while (uVar34 == 0);
      }
      else {
        local_540 = (uint *)0x0;
        local_528 = (ulonglong)local_528._4_4_ << 0x20;
        puVar30 = local_540;
      }
      local_540 = puVar30;
      uVar35 = (ulonglong)(-uVar34 & uVar34);
      uVar21 = uVar35 * 2 + 1;
      lVar33 = 0x3f;
      if (uVar21 != 0) {
        for (; uVar21 >> lVar33 == 0; lVar33 = lVar33 + -1) {
        }
      }
      uVar34 = ((int)local_528 - ((uint)lVar33 ^ 0x3f)) + 0x3e;
      if ((int)uVar32 <= (int)uVar34) {
        uVar34 = uVar32;
      }
    }
    if (uVar34 != uVar32) {
      uVar19 = 0xffffffff;
      puVar11 = local_538;
      local_500 = (longlong *)(ulonglong)uVar32;
      do {
        uVar21 = *(ulonglong *)(plVar29[0x48] + (longlong)(int)uVar34 * 0x10);
        if (uVar21 != 0) {
          if ((int)uStack_3e0 != local_3b4) {
            uVar34 = ((uint)(uVar21 >> 0x14) & 0xffff ^ (uint)(uVar21 >> 4)) * -0x7a143595;
            uVar34 = (uVar34 >> 0xd ^ uVar34) * -0x3d4d51cb;
            puVar15 = local_3a8;
            if (local_3a8 == (undefined1 *)0x0) {
              puVar15 = local_3b0;
            }
            for (iVar26 = *(int *)(puVar15 +
                                  (ulonglong)(local_3a0 - 1U & (uVar34 >> 0x10 ^ uVar34)) * 4);
                iVar26 != -1; iVar26 = *(int *)((longlong)iVar26 * 0x10 + local_3e8 + 8)) {
              if (*(ulonglong *)(local_3e8 + (longlong)iVar26 * 0x10) == uVar21) goto LAB_1434c3957;
            }
          }
          FUN_147a61cb4(param_1,uVar21,local_510);
          uVar32 = *(uint *)(local_548 + 0x4d);
          puVar11 = local_538;
          plVar29 = local_548;
        }
LAB_1434c3957:
        uVar19 = uVar19 & ~(uint)uVar35;
        puVar30 = (uint *)plVar29[0x4c];
        if ((uint *)plVar29[0x4c] == (uint *)0x0) {
          puVar30 = puVar11;
        }
        iVar26 = (int)local_540;
        lVar33 = (longlong)iVar26;
        uVar34 = puVar30[lVar33] & uVar19;
        if (uVar34 == 0) {
          iVar18 = uVar32 + 0x1e;
          if (-1 < (int)(uVar32 - 1)) {
            iVar18 = uVar32 - 1;
          }
          iVar18 = iVar18 >> 5;
          local_528 = CONCAT44(local_528._4_4_,(int)local_528 + 0x20);
          iVar12 = iVar18;
          if (iVar18 < iVar26) {
            iVar12 = iVar26;
          }
          puVar11 = local_538;
          if (iVar26 < iVar18) {
            lVar28 = 0;
            do {
              uVar34 = puVar30[lVar33 + lVar28 + 1];
              if (uVar34 != 0) {
                local_540 = (uint *)(ulonglong)(iVar26 + (int)lVar28 + 1);
                uVar19 = 0xffffffff;
                goto LAB_1434c39f0;
              }
              local_528 = CONCAT44(local_528._4_4_,(int)local_528 + 0x20);
              lVar28 = lVar28 + 1;
            } while (iVar12 - lVar33 != lVar28);
            uVar19 = 0xffffffff;
            lVar33 = (longlong)iVar12;
          }
          local_540 = (uint *)(lVar33 + 1);
          plVar29 = local_548;
          uVar34 = uVar32;
        }
        else {
LAB_1434c39f0:
          uVar35 = (ulonglong)(-uVar34 & uVar34);
          uVar21 = uVar35 * 2 + 1;
          lVar33 = 0x3f;
          if (uVar21 != 0) {
            for (; uVar21 >> lVar33 == 0; lVar33 = lVar33 + -1) {
            }
          }
          uVar34 = ((int)local_528 - ((uint)lVar33 ^ 0x3f)) + 0x3e;
          if ((int)uVar32 <= (int)uVar34) {
            uVar34 = uVar32;
          }
        }
      } while (uVar34 != (uint)local_500);
    }
  }
LAB_1434c3a6f:
  FUN_1458f5d9e(plVar29);
  FUN_1405d0f74(plVar29);
  (**(code **)(*plVar29 + 0x420))(plVar29);
  plVar29 = local_548;
  if (((char)local_4f0 == '\x01' && local_468 != 0) && (0 < (int)local_4c0[0xf])) {
    FUN_1400f5d32(local_468,local_4c0,local_548);
    (**(code **)(*plVar29 + 0x220))(plVar29);
  }
  plVar29 = local_548;
  if ((char)local_4e0 != '\0') {
    uVar32 = *(uint *)(local_548 + 0x4d);
    local_540 = (uint *)(local_548 + 0x4a);
    if (uVar32 == 0) {
      uVar35 = 0;
      uVar21 = 1;
      uVar34 = 0;
      iVar26 = 0;
    }
    else {
      puVar11 = (uint *)local_548[0x4c];
      if ((uint *)local_548[0x4c] == (uint *)0x0) {
        puVar11 = local_540;
      }
      uVar34 = *puVar11;
      if (uVar34 == 0) {
        iVar26 = uVar32 + 0x1e;
        if (-1 < (int)(uVar32 - 1)) {
          iVar26 = uVar32 - 1;
        }
        uVar35 = 0;
        uVar21 = (ulonglong)(uint)(iVar26 >> 5);
        if (iVar26 >> 5 < 1) {
          uVar21 = uVar35;
        }
        iVar26 = 0;
        do {
          if (uVar21 == uVar35) goto LAB_1434c3b82;
          iVar26 = iVar26 + 0x20;
          uVar34 = puVar11[uVar35 + 1];
          uVar35 = uVar35 + 1;
        } while (uVar34 == 0);
      }
      else {
        uVar35 = 0;
        iVar26 = 0;
      }
      uVar21 = (ulonglong)(-uVar34 & uVar34);
      uVar24 = uVar21 * 2 + 1;
      lVar33 = 0x3f;
      if (uVar24 != 0) {
        for (; uVar24 >> lVar33 == 0; lVar33 = lVar33 + -1) {
        }
      }
      uVar34 = (iVar26 - ((uint)lVar33 ^ 0x3f)) + 0x3e;
      if ((int)uVar32 <= (int)uVar34) {
        uVar34 = uVar32;
      }
    }
    if (uVar34 != uVar32) {
      local_510 = (longlong *)(local_520 + local_518 + 0x80);
      uVar19 = 0xffffffff;
      local_528 = (ulonglong)uVar32;
      do {
        local_520 = CONCAT44(local_520._4_4_,iVar26);
        plVar2 = *(longlong **)(plVar29[0x48] + (longlong)(int)uVar34 * 0x10);
        if (plVar2 != (longlong *)0x0) {
          local_518 = uVar35;
          FUN_140b97432(param_1,&local_478,plVar2[2]);
          if (local_478 != 0) {
            local_488 = 0;
            uStack_480 = 0;
            FUN_14005eb28(&local_488,0x80);
            local_2f8 = '\0';
            local_310 = (code *)local_2f0;
            local_300 = local_4d8;
            local_3f0 = *(undefined8 *)(plVar2[2] + 0x18);
            local_308 = local_310;
            FUN_14005eb5c(&local_3f0,&local_310);
            if (local_300 <= local_308 + 2) {
              FUN_140213274(&local_310,1);
            }
            *(undefined2 *)local_308 = 0x20;
            local_308 = local_308 + 2;
            FUN_144750bde(plVar2,0,&local_310);
            FUN_1400020e8(&local_488,local_310,
                          (ulonglong)((longlong)local_308 - (longlong)local_310) >> 1);
            if (local_2f8 == '\x01') {
              FUN_1400020a8(local_310);
            }
            plVar29 = local_510;
            iVar26 = (int)uStack_480 + -1;
            if ((int)uStack_480 == 0) {
              iVar26 = 0;
            }
            if (0 < iVar26) {
              iVar18 = 0;
              do {
                iVar18 = iVar18 + 1;
              } while (iVar26 != iVar18);
            }
            local_538 = (uint *)CONCAT44(local_538._4_4_,uVar19);
            iVar26 = FUN_147a71ef2(local_510);
            uVar19 = (uint)local_538;
            if ((iVar26 == -1) || (lVar33 = (longlong)iVar26 * 0x28 + *plVar29, lVar33 == 0)) {
              plVar29 = (longlong *)0x0;
              puVar11 = (uint *)0x0;
            }
            else {
              plVar29 = *(longlong **)(lVar33 + 0x10);
              puVar11 = *(uint **)(lVar33 + 0x18);
              if (puVar11 == (uint *)0x0) {
                puVar11 = (uint *)0x0;
              }
              else {
                LOCK();
                puVar11[2] = puVar11[2] + 1;
                UNLOCK();
              }
            }
            if (local_488 != 0) {
              local_538 = puVar11;
              local_500 = plVar29;
              FUN_1400020a8();
              plVar29 = local_500;
              puVar11 = local_538;
            }
            if (((plVar29 != (longlong *)0x0) && (lVar33 = *plVar29, lVar33 != 0)) &&
               (0 < *(int *)(lVar33 + 0x78))) {
              local_538 = puVar11;
              FUN_1400f5d32(local_478,lVar33,plVar2);
              (**(code **)(*plVar2 + 0x220))(plVar2);
              puVar11 = local_538;
            }
            if (puVar11 != (uint *)0x0) {
              LOCK();
              puVar30 = puVar11 + 2;
              *puVar30 = *puVar30 - 1;
              UNLOCK();
              if (*puVar30 == 0) {
                (*(code *)**(undefined8 **)puVar11)(puVar11);
                LOCK();
                puVar30 = puVar11 + 3;
                *puVar30 = *puVar30 - 1;
                UNLOCK();
                if (*puVar30 == 0) {
                  (**(code **)(*(longlong *)puVar11 + 0x10))(puVar11);
                }
              }
            }
          }
          plVar29 = local_470;
          if (local_470 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_470 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*local_470)(local_470);
              LOCK();
              piVar1 = (int *)((longlong)plVar29 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar29 + 0x10))(plVar29);
              }
            }
          }
          uVar32 = *(uint *)(local_548 + 0x4d);
          uVar35 = local_518;
          plVar29 = local_548;
        }
        uVar19 = uVar19 & ~(uint)uVar21;
        puVar11 = (uint *)plVar29[0x4c];
        if ((uint *)plVar29[0x4c] == (uint *)0x0) {
          puVar11 = local_540;
        }
        iVar18 = (int)uVar35;
        lVar33 = (longlong)iVar18;
        uVar34 = puVar11[lVar33] & uVar19;
        iVar26 = (int)local_520;
        if (uVar34 == 0) {
          iVar12 = uVar32 + 0x1e;
          if (-1 < (int)(uVar32 - 1)) {
            iVar12 = uVar32 - 1;
          }
          iVar12 = iVar12 >> 5;
          iVar26 = (int)local_520 + 0x20;
          iVar13 = iVar12;
          if (iVar12 < iVar18) {
            iVar13 = iVar18;
          }
          local_518 = uVar21;
          if (iVar18 < iVar12) {
            lVar28 = 0;
            do {
              uVar34 = puVar11[lVar33 + lVar28 + 1];
              if (uVar34 != 0) {
                uVar35 = (ulonglong)(iVar18 + (int)lVar28 + 1);
                uVar19 = 0xffffffff;
                goto LAB_1434c3f25;
              }
              iVar26 = iVar26 + 0x20;
              lVar28 = lVar28 + 1;
            } while (iVar13 - lVar33 != lVar28);
            uVar19 = 0xffffffff;
            iVar18 = iVar13;
          }
          uVar35 = (ulonglong)(iVar18 + 1);
          plVar29 = local_548;
          uVar34 = uVar32;
        }
        else {
LAB_1434c3f25:
          uVar21 = (ulonglong)(-uVar34 & uVar34);
          uVar24 = uVar21 * 2 + 1;
          lVar33 = 0x3f;
          if (uVar24 != 0) {
            for (; uVar24 >> lVar33 == 0; lVar33 = lVar33 + -1) {
            }
          }
          uVar34 = (iVar26 - ((uint)lVar33 ^ 0x3f)) + 0x3e;
          if ((int)uVar32 <= (int)uVar34) {
            uVar34 = uVar32;
          }
        }
      } while (uVar34 != (uint)local_528);
    }
  }
LAB_1434c3b82:
  iVar26 = (int)local_4e8[1];
  *(uint *)(local_4e8 + 1) = iVar26 + 1U;
  if (*(uint *)((longlong)local_4e8 + 0xc) < iVar26 + 1U) {
    FUN_1447d05f2(local_4e8,iVar26);
    plVar29 = local_548;
  }
  puVar25 = local_4f8;
  *(longlong **)(*local_4e8 + (longlong)iVar26 * 8) = plVar29;
  local_3a0 = 0;
  if (local_3a8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1403cd038(&local_3e8);
  plVar29 = local_460;
  if (local_460 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_460 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_460)(local_460);
      LOCK();
      piVar1 = (int *)((longlong)plVar29 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar29 + 0x10))(plVar29);
      }
    }
  }
LAB_1434c3c1f:
  FUN_147a709fa(puVar25,iVar22);
  if (local_358 != 0) {
    plVar29 = local_348;
    if (local_348 == (longlong *)0x0) {
      plVar29 = local_338;
    }
    (**(code **)(*plVar29 + 0x10))();
  }
LAB_1434c30e4:
  uVar32 = local_4dc & ~(uint)uVar38;
  puVar11 = *(uint **)(param_1 + 0x948);
  if (*(uint **)(param_1 + 0x948) == (uint *)0x0) {
    puVar11 = local_4c8;
  }
  iVar26 = *(int *)(param_1 + 0x950);
  iVar22 = (int)local_490;
  lVar33 = (longlong)iVar22;
  uVar34 = puVar11[lVar33] & uVar32;
  uVar35 = local_490;
  iVar18 = local_504;
  puVar25 = local_4f8;
  if (uVar34 == 0) {
    iVar12 = iVar26 + 0x1e;
    if (-1 < iVar26 + -1) {
      iVar12 = iVar26 + -1;
    }
    iVar12 = iVar12 >> 5;
    iVar13 = iVar12;
    if (iVar12 < iVar22) {
      iVar13 = iVar22;
    }
    if (iVar12 <= iVar22) goto LAB_1434c437b;
    lVar28 = 0;
    while( true ) {
      iVar18 = iVar18 + 0x20;
      uVar34 = puVar11[lVar33 + lVar28 + 1];
      if (uVar34 != 0) break;
      lVar28 = lVar28 + 1;
      if (iVar13 - lVar33 == lVar28) goto LAB_1434c437b;
    }
    uVar32 = 0xffffffff;
    uVar35 = (ulonglong)(iVar22 + (int)lVar28 + 1);
  }
  uVar38 = (ulonglong)(-uVar34 & uVar34);
  uVar21 = uVar38 * 2 + 1;
  lVar33 = 0x3f;
  if (uVar21 != 0) {
    for (; uVar21 >> lVar33 == 0; lVar33 = lVar33 + -1) {
    }
  }
  iVar22 = (iVar18 - ((uint)lVar33 ^ 0x3f)) + 0x3e;
  if (iVar26 <= iVar22) goto LAB_1434c437b;
  goto LAB_1434c2c45;
}



// FUNCTION 1434c445e FUN_1434c445e body=224 status=ok
// SIG undefined FUN_1434c445e(void)

void FUN_1434c445e(longlong param_1,longlong *param_2,longlong *param_3)

{
  uint uVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  if ((longlong)(int)param_2[1] != 0) {
    puVar6 = (undefined8 *)*param_2;
    puVar5 = puVar6 + (longlong)(int)param_2[1] * 4;
    do {
      uVar1 = *(uint *)(puVar6 + 3);
      if ((ulonglong)uVar1 != 0) {
        if (*(float *)(param_1 + 0xca8) < *(float *)(puVar6 + 2)) {
          return;
        }
        if (((-1 < (int)(uVar1 - 1)) && ((int)(uVar1 - 1) < *(int *)(param_1 + 0x1370))) &&
           ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34))) {
          uVar1 = *(uint *)(*(longlong *)(param_1 + 0x1268) + 0x10 +
                           (longlong)
                           *(int *)(*(longlong *)(param_1 + 0x1368) + -4 + (ulonglong)uVar1 * 4) *
                           0x18);
          plVar3 = (longlong *)param_3[8];
          if ((longlong *)param_3[8] == (longlong *)0x0) {
            plVar3 = param_3 + 7;
          }
          iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_3[9] - 1U & uVar1) * 4);
          if (iVar4 != -1) {
            do {
              if (*(uint *)(*param_3 + (longlong)iVar4 * 0xc) == uVar1) {
                cVar2 = FUN_1434c200a(param_1,*puVar6,*(undefined4 *)(puVar6 + 1));
                if (cVar2 == '\0') {
                  return;
                }
                break;
              }
              iVar4 = *(int *)(*param_3 + (longlong)iVar4 * 0xc + 4);
            } while (iVar4 != -1);
          }
        }
      }
      puVar6 = puVar6 + 4;
    } while (puVar6 != puVar5);
  }
  return;
}



// FUNCTION 1434c453e FUN_1434c453e body=8952 status=ok
// SIG undefined FUN_1434c453e(void)

ulonglong FUN_1434c453e(longlong *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  ushort uVar3;
  ushort uVar4;
  ulonglong *puVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  void *_Dst;
  longlong lVar12;
  longlong *plVar13;
  uint *puVar14;
  code *pcVar15;
  ulonglong uVar16;
  undefined2 *puVar17;
  ulonglong uVar18;
  code *pcVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  ulonglong uVar23;
  undefined1 *puVar24;
  uint uVar25;
  undefined8 *puVar26;
  ulonglong uVar27;
  longlong *plVar28;
  uint uVar29;
  int iVar30;
  longlong lVar31;
  undefined2 *puVar32;
  longlong lVar33;
  uint uVar34;
  longlong *plVar35;
  ulonglong uVar36;
  bool bVar37;
  undefined1 auStack_548 [32];
  undefined4 local_528;
  undefined4 local_520;
  undefined4 local_518;
  undefined8 local_510;
  wchar_t *local_508;
  code *local_500;
  undefined1 *local_4f8;
  undefined8 *local_4f0;
  code *local_4e8;
  code *local_4e0;
  longlong *local_4d8;
  code *local_4d0;
  undefined1 local_4c1;
  longlong local_4c0;
  longlong *local_4b8;
  longlong *local_4b0;
  longlong *local_4a8;
  longlong *local_4a0;
  ulonglong local_498;
  uint local_48c;
  ulonglong local_488;
  longlong *local_480;
  uint local_478;
  int local_474;
  longlong *local_470;
  uint *local_468;
  ulonglong local_460;
  longlong local_458;
  undefined4 local_450;
  longlong local_448;
  int local_440;
  undefined8 local_438;
  undefined8 uStack_430;
  longlong local_420;
  longlong local_418;
  undefined8 uStack_410;
  longlong local_408;
  ulonglong uStack_400;
  longlong *local_3f8;
  undefined4 local_3f0;
  undefined8 local_3ec;
  undefined8 local_3e0;
  char local_3d8;
  undefined8 local_3d0;
  longlong *local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3a8;
  undefined4 local_3a0;
  undefined8 local_39c;
  undefined4 local_394;
  longlong local_388;
  undefined4 local_380;
  longlong local_378;
  undefined8 uStack_370;
  undefined8 local_358;
  undefined4 local_350;
  undefined8 local_34c;
  int local_344;
  undefined1 local_340 [8];
  undefined1 *local_338;
  int local_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_308;
  undefined4 local_300;
  undefined8 local_2fc;
  int local_2f4;
  longlong local_2e8;
  int local_2e0;
  longlong local_2d8;
  ulonglong uStack_2d0;
  undefined1 local_2c8 [16];
  longlong local_2b8;
  undefined4 local_2b0;
  uint local_2ac;
  undefined4 uStack_2a8;
  undefined4 local_2a4;
  longlong local_298;
  int local_290;
  undefined8 local_288;
  undefined8 uStack_280;
  code *local_278;
  ulonglong local_270;
  undefined8 uStack_268;
  longlong local_260;
  undefined1 auStack_68 [8];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_548;
  plVar9 = (longlong *)param_1[0x11f];
  plVar28 = (longlong *)param_1[0x120];
  local_4d8 = param_1;
  if (plVar28 == (longlong *)0x0) {
    plVar9 = (longlong *)(**(code **)(*plVar9 + 0x28))();
  }
  else {
    LOCK();
    *(int *)(plVar28 + 1) = (int)plVar28[1] + 1;
    UNLOCK();
    plVar9 = (longlong *)(**(code **)(*plVar9 + 0x28))();
    LOCK();
    plVar11 = plVar28 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*plVar28)(plVar28);
      LOCK();
      piVar1 = (int *)((longlong)plVar28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar28 + 0x10))(plVar28);
      }
    }
  }
  plVar28 = local_4d8;
  FUN_1434c1d2e(local_4d8,0);
  pcVar19 = (code *)0x0;
  if (0 < (int)plVar28[0x140]) {
    plVar28 = *(longlong **)plVar28[0x13f];
    (**(code **)(*plVar28 + 0x18))(plVar28,&local_288);
    pcVar19 = local_288;
  }
  if (pcVar19 == DAT_14cad5f50) {
    local_4d8[0x141] = 0;
    plVar9 = (longlong *)local_4d8[0x142];
    if (plVar9 != (longlong *)0x0) {
      local_4d8[0x142] = 0;
      LOCK();
      plVar28 = plVar9 + 1;
      *(int *)plVar28 = (int)*plVar28 + -1;
      UNLOCK();
      if ((int)*plVar28 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    uVar27 = 0;
    goto LAB_1434c4647;
  }
  local_2b8 = 0;
  local_2b0 = 0;
  local_2d8 = 0;
  uStack_2d0 = 0;
  local_2ac = 0x80;
  uStack_2a8 = 0xffffffff;
  local_2a4 = 0;
  local_298 = 0;
  local_290 = 0;
  local_308 = 0;
  local_300 = 0;
  local_328 = 0;
  uStack_320 = 0;
  local_2fc = 0xffffffff00000080;
  local_2f4 = 0;
  local_2e8 = 0;
  local_2e0 = 0;
  local_358 = 0;
  local_350 = 0;
  local_378 = 0;
  uStack_370 = 0;
  local_34c = 0xffffffff00000080;
  local_344 = 0;
  local_338 = (undefined1 *)0x0;
  local_330 = 0;
  uVar29 = (int)local_4d8[0x271] - *(int *)((longlong)local_4d8 + 0x13b4);
  if (uVar29 != 0) {
    if ((int)uVar29 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar29);
    }
    FUN_1400bac10(&local_2d8,uVar29);
    iVar7 = 1;
    if (3 < uVar29) {
      uVar29 = (uVar29 | 1) + 0xe;
      iVar7 = 0x1f;
      if (uVar29 != 0) {
        for (; uVar29 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      iVar7 = 1 << ((byte)iVar7 & 0x1f);
    }
    if ((local_290 == 0) || (local_290 < iVar7)) {
      local_290 = iVar7;
      FUN_144a56d22();
    }
  }
  lVar10 = (longlong)(int)local_4d8[0x271] - (longlong)*(int *)((longlong)local_4d8 + 0x13b4);
  uVar27 = lVar10 * 4;
  if ((uint)((int)uStack_320 - local_2f4) < (uint)uVar27) {
    if ((int)lVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b(uVar27);
    }
    FUN_140374d2c(&local_328,uVar27 & 0xffffffff);
    uVar29 = (uint)uVar27 + 0xf;
    iVar7 = 0x1f;
    if (uVar29 != 0) {
      for (; uVar29 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    iVar7 = 1 << ((byte)iVar7 & 0x1f);
    if ((local_2e0 == 0) || (local_2e0 < iVar7)) {
      local_2e0 = iVar7;
      FUN_14037622e();
    }
  }
  plVar28 = local_4d8;
  local_3f0 = (undefined4)local_4d8[0x15f];
  local_408 = 0;
  uStack_400 = 0;
  local_3f8 = local_4d8;
  local_3ec = 0;
  local_3e0 = 0;
  local_3d8 = '\0';
  local_4b8 = local_4d8 + 0x2a6;
  FUN_145d323a0(local_4b8,0);
  local_480 = plVar28 + 0x12f;
  FUN_145ad581e(plVar28[0x12f],(int)plVar28[0x130]);
  *(undefined4 *)(plVar28 + 0x130) = 0;
  if (*(int *)((longlong)plVar28 + 0x984) != 0) {
    FUN_147a725b4(local_480);
  }
  local_418 = 0;
  uStack_410 = 0;
  local_4c0 = CONCAT71(local_4c0._1_7_,(char)local_4d8[0x198]);
  lVar10 = local_4d8[0x1e];
  if (*(longlong *)(lVar10 + 0x68) == 0) {
LAB_1434c48be:
    lVar33 = 0;
  }
  else {
    lVar12 = FUN_1413dbcfa();
    lVar10 = *(longlong *)(lVar10 + 0x68);
    if (lVar10 == 0) goto LAB_1434c48be;
    lVar33 = 0;
    if ((lVar12 != 0) && (lVar31 = *(longlong *)(lVar10 + 0x10), lVar31 != 0)) {
      if (*(int *)(lVar31 + 0x38) < *(int *)(lVar12 + 0x38)) goto LAB_1434c48be;
      lVar33 = 0;
      if (*(longlong *)(*(longlong *)(lVar31 + 0x30) + (longlong)*(int *)(lVar12 + 0x38) * 8) ==
          lVar12 + 0x30) {
        lVar33 = lVar10;
      }
    }
  }
  plVar28 = local_4d8;
  local_4b0 = local_4d8 + 0x168;
  plVar11 = (longlong *)FUN_14001cc68(0x10,0x10);
  *plVar11 = lVar33 + 0x380;
  *(undefined1 *)(plVar11 + 1) = *(undefined1 *)(lVar33 + 0x380);
  *(undefined1 *)(lVar33 + 0x380) = 1;
  lVar10 = (**(code **)(*plVar9 + 0x30))(plVar9);
  if (lVar10 != 0) {
    FUN_147cdd036(local_4b0,plVar9);
    plVar9[7] = 0x1000000;
    local_4d0 = (code *)CONCAT71(local_4d0._1_7_,*(undefined1 *)((longlong)plVar28 + 0xcbe));
    *(undefined1 *)((longlong)plVar28 + 0xcbe) = 1;
    local_288 = (code *)0xbbc043ec8417998a;
    uStack_280 = (code *)0x72d272281b3d119;
    FUN_144afef82();
    do {
      if ((char)local_4c0 == '\0') {
        lVar10 = 0;
      }
      else {
        uVar27 = (ulonglong)local_288 >> 0x20;
        local_288 = (code *)((ulonglong)local_288 & 0xffffffff00000000);
        puVar5 = (ulonglong *)plVar9[1];
        puVar2 = (undefined4 *)*puVar5 + 1;
        if ((undefined4 *)puVar5[1] < puVar2) {
          if ((*(byte *)((longlong)plVar9 + 0x2a) & 2) == 0) {
            (**(code **)(*plVar9 + 0x170))(plVar9,&local_288,4);
          }
          else {
            FUN_14572512c(plVar9,&local_288);
          }
        }
        else {
          local_288 = (code *)CONCAT44((int)uVar27,*(undefined4 *)*puVar5);
          *puVar5 = (ulonglong)puVar2;
        }
        lVar10 = (**(code **)(*plVar9 + 0x28))(plVar9);
        lVar10 = ((ulonglong)local_288 & 0xffffffff) + lVar10;
      }
      lVar12 = local_4d8[0x163];
      local_4d8[0x163] = lVar10;
      local_3c8 = (longlong *)0x0;
      FUN_1408383eb(plVar9,&local_3c8);
      lVar10 = (**(code **)(*plVar9 + 0x28))(plVar9);
      local_3c8 = (longlong *)((longlong)local_3c8 + lVar10);
      local_438 = (undefined2 *)CONCAT44(local_438._4_4_,0xffffffff);
      puVar5 = (ulonglong *)plVar9[1];
      puVar2 = (undefined4 *)*puVar5 + 1;
      if ((undefined4 *)puVar5[1] < puVar2) {
        if ((*(byte *)((longlong)plVar9 + 0x2a) & 2) == 0) {
          (**(code **)(*plVar9 + 0x170))(plVar9,&local_438,4);
        }
        else {
          FUN_14572512c(plVar9,&local_438);
        }
      }
      else {
        local_438 = (undefined2 *)CONCAT44(local_438._4_4_,*(undefined4 *)*puVar5);
        *puVar5 = (ulonglong)puVar2;
      }
      plVar28 = local_4b8;
      if ((char)local_4c0 == '\0') {
        FUN_145d323a0(local_4b8,0);
        FUN_147cdfde0(local_4b0,local_4d8[0x1e],plVar9,plVar28);
      }
      else {
        _Dst = (void *)FUN_14001cc68(0x100);
        memset(_Dst,0,0x100);
        FUN_145c3c018(_Dst);
        iVar7 = (int)local_4d8[0x130];
        lVar10 = (longlong)iVar7;
        *(uint *)(local_4d8 + 0x130) = iVar7 + 1U;
        if (*(uint *)((longlong)local_4d8 + 0x984) < iVar7 + 1U) {
          FUN_147a725e4(local_480,iVar7);
        }
        lVar33 = local_4d8[0x12f];
        *(void **)(lVar33 + lVar10 * 8) = _Dst;
        FUN_147cdfde0(local_4b0,local_4d8[0x1e],plVar9,(longlong)_Dst + 0x10);
        FUN_146b6f6ea(local_4b8,*(longlong *)(lVar33 + lVar10 * 8) + 0x10);
        FUN_147a7266a(plVar9,*(longlong *)(lVar33 + lVar10 * 8) + 0x60);
        FUN_147a72934(plVar9,*(longlong *)(lVar33 + lVar10 * 8) + 0xb0);
      }
      (**(code **)(*plVar9 + 0x1a0))(plVar9,local_3c8);
      iVar7 = (int)uStack_400;
      cVar6 = FUN_1434c6838(&local_408,plVar9);
      uVar27 = uStack_410;
      if ((cVar6 == '\0') && (local_3d8 == '\x01')) {
        local_278 = (code *)FUN_147be3f33();
        local_288 = (code *)&DAT_0000000b;
        if (local_278 == (code *)0x0) {
          uStack_280._0_4_ = 0;
          iVar7 = 0;
          uVar29 = (uint)uStack_280;
        }
        else {
          uVar29 = *(uint *)(local_278 + 0xc);
          uStack_280 = (code *)(ulonglong)uVar29;
          if ((int)uVar29 < DAT_14c9647dc) {
            lVar10 = (ulonglong)((uVar29 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8);
          }
          else {
            lVar10 = 0;
          }
          iVar7 = *(int *)(lVar10 + 0x10);
          if (*(int *)(lVar10 + 0x10) == 0) {
            LOCK();
            iVar7 = DAT_14c964868 + 1;
            UNLOCK();
            iVar8 = DAT_14c964868 + 1;
            bVar37 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar7;
            if (bVar37) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar8);
            }
            LOCK();
            iVar7 = *(int *)(lVar10 + 0x10);
            bVar37 = iVar7 == 0;
            if (bVar37) {
              *(int *)(lVar10 + 0x10) = iVar8;
              iVar7 = 0;
            }
            UNLOCK();
            uVar29 = (uint)uStack_280;
            if (bVar37) {
              iVar7 = iVar8;
            }
          }
        }
        uStack_280._0_4_ = uVar29;
        uStack_280 = (code *)CONCAT44(iVar7,(uint)uStack_280);
        local_270 = 0;
        uStack_268 = 0;
        local_260 = 0;
        FUN_146efbfa6(local_4d8 + 0x27c,&local_288);
        if (local_260 != 0) {
          (**(code **)(local_260 + -0x10))(local_260 + -0x10);
        }
        if (local_270 != 0) {
          FUN_1400020a8();
        }
        local_4d8[0x163] = lVar12;
        *(undefined1 *)((longlong)local_4d8 + 0xcbe) = local_4d0._0_1_;
        plVar9 = local_4d8;
        goto LAB_1434c4f03;
      }
      if (((char)local_4c0 != '\0') && (iVar8 = (int)uStack_400, iVar7 < (int)uStack_400)) {
        lVar10 = (longlong)(int)uStack_410;
        uVar29 = (int)uStack_410 + 1;
        uStack_410 = CONCAT44(uStack_410._4_4_,uVar29);
        if (uStack_410._4_4_ < uVar29) {
          FUN_147a72f2c(&local_418,uVar27 & 0xffffffff);
        }
        *(int *)(local_418 + lVar10 * 8) = iVar7;
        *(int *)(local_418 + 4 + lVar10 * 8) = iVar8 + -1;
      }
      local_4d8[0x163] = lVar12;
      if ((*(byte *)((longlong)plVar9 + 0x29) & 2) != 0) break;
      lVar10 = (**(code **)(*plVar9 + 0x28))(plVar9);
      lVar12 = (**(code **)(*plVar9 + 0x30))();
    } while (lVar10 < lVar12);
    *(undefined1 *)((longlong)local_4d8 + 0xcbe) = local_4d0._0_1_;
    plVar28 = local_4d8;
  }
  plVar9 = (longlong *)plVar28[0x11f];
  plVar35 = (longlong *)plVar28[0x120];
  if (plVar35 == (longlong *)0x0) {
    plVar13 = (longlong *)(**(code **)(*plVar9 + 0x20))();
  }
  else {
    LOCK();
    *(int *)(plVar35 + 1) = (int)plVar35[1] + 1;
    UNLOCK();
    plVar13 = (longlong *)(**(code **)(*plVar9 + 0x20))();
    LOCK();
    plVar9 = plVar35 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plVar35)(plVar35);
      LOCK();
      piVar1 = (int *)((longlong)plVar35 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar35 + 0x10))(plVar35);
      }
    }
  }
  FUN_147cdd036(local_4b0,plVar13);
  iVar7 = (int)uStack_400;
  cVar6 = (**(code **)(*plVar13 + 0x38))(plVar13);
  if (cVar6 == '\0') {
    do {
      plVar9 = (longlong *)local_4d8[0x11f];
      plVar35 = (longlong *)local_4d8[0x120];
      if (plVar35 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar35 + 1) = (int)plVar35[1] + 1;
        UNLOCK();
      }
      cVar6 = (**(code **)(*plVar9 + 0x68))();
      if (cVar6 == '\0') {
        cVar6 = '\0';
      }
      else {
        cVar6 = FUN_1434c6838(&local_408,plVar13);
      }
      if (plVar35 != (longlong *)0x0) {
        LOCK();
        plVar9 = plVar35 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*plVar35)(plVar35);
          LOCK();
          piVar1 = (int *)((longlong)plVar35 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar35 + 0x10))(plVar35);
          }
        }
      }
    } while ((cVar6 != '\0') && (cVar6 = (**(code **)(*plVar13 + 0x38))(plVar13), cVar6 == '\0'));
  }
  uVar36 = uStack_410;
  plVar9 = local_4d8;
  if (local_3d8 == '\x01') {
    FUN_147a60036(&local_288,7);
    plVar9 = local_4d8;
    FUN_146efbfa6(local_4d8 + 0x27c,&local_288);
    if (local_260 != 0) {
      (**(code **)(local_260 + -0x10))(local_260 + -0x10);
    }
    if (local_270 != 0) {
      FUN_1400020a8();
    }
LAB_1434c4f03:
    uVar27 = 0;
  }
  else {
    uVar27 = CONCAT71((int7)((ulonglong)plVar28 >> 8),1);
    if (((char)local_4c0 != '\0') && (iVar7 < (int)uStack_400)) {
      iVar8 = (int)uStack_400 + -1;
      lVar10 = (longlong)(int)uStack_410;
      uVar29 = (int)uStack_410 + 1;
      uStack_410 = CONCAT44(uStack_410._4_4_,uVar29);
      if (uStack_410._4_4_ < uVar29) {
        FUN_147a72f2c(&local_418,uVar36 & 0xffffffff);
      }
      *(int *)(local_418 + lVar10 * 8) = iVar7;
      *(int *)(local_418 + 4 + lVar10 * 8) = iVar8;
    }
  }
  if (plVar11 != (longlong *)0x0) {
    *(char *)*plVar11 = (char)plVar11[1];
    FUN_1400020a8(plVar11);
  }
  if ((char)uVar27 != '\0') {
    plVar28 = plVar9 + 0x270;
    local_4c1 = *(undefined1 *)((longlong)plVar9 + 0x9aa);
    *(undefined1 *)((longlong)plVar9 + 0x9aa) = 1;
    uVar29 = *(uint *)(plVar9 + 0x275);
    local_48c = (uint)uVar27;
    if (uVar29 == 0) {
      local_498 = 1;
      iVar7 = 0;
      uVar27 = 0;
      uVar25 = 0;
    }
    else {
      puVar14 = (uint *)plVar9[0x274];
      if ((uint *)plVar9[0x274] == (uint *)0x0) {
        puVar14 = (uint *)(plVar9 + 0x272);
      }
      uVar25 = *puVar14;
      if (uVar25 == 0) {
        iVar7 = uVar29 + 0x1e;
        if (-1 < (int)(uVar29 - 1)) {
          iVar7 = uVar29 - 1;
        }
        uVar27 = 0;
        uVar36 = (ulonglong)(uint)(iVar7 >> 5);
        if (iVar7 >> 5 < 1) {
          uVar36 = uVar27;
        }
        iVar7 = 0;
        do {
          if (uVar36 == uVar27) goto LAB_1434c4fed;
          iVar7 = iVar7 + 0x20;
          uVar25 = puVar14[uVar27 + 1];
          uVar27 = uVar27 + 1;
        } while (uVar25 == 0);
      }
      else {
        iVar7 = 0;
        uVar27 = 0;
      }
      local_498 = (ulonglong)(-uVar25 & uVar25);
      uVar36 = local_498 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar36 != 0) {
        for (; uVar36 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      uVar25 = (iVar7 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
      if ((int)uVar29 <= (int)uVar25) {
        uVar25 = uVar29;
      }
    }
    if (uVar25 != uVar29) {
      local_4a0 = plVar9 + 0x2ad;
      local_4a8 = plVar9 + 0x125;
      local_4d0 = (code *)auStack_68;
      local_488 = (ulonglong)uVar29;
      local_470 = plVar28;
      local_468 = (uint *)(plVar9 + 0x272);
      uVar29 = 0xffffffff;
      do {
        local_478 = uVar29;
        local_420 = *(longlong *)(*plVar28 + (longlong)(int)uVar25 * 0x10);
        FUN_147cded98(&local_288);
        lVar10 = FUN_147a61e24(local_4b0,&local_288);
        if (local_288 != (code *)0x0) {
          FUN_1400020a8();
        }
        local_474 = iVar7;
        local_460 = uVar27;
        FUN_1447cbafe(&local_2d8,&local_288,lVar10 + 0x10,0);
        *(undefined1 *)(lVar10 + 0x14) = 1;
        local_3a8 = 0;
        local_3a0 = 0;
        local_3c8 = (longlong *)0x0;
        uStack_3c0 = 0;
        local_39c = 0xffffffff00000080;
        local_394 = 0;
        local_388 = 0;
        local_380 = 0;
        if ((longlong)*(int *)(local_420 + 0xa8) != 0) {
          plVar11 = *(longlong **)(local_420 + 0xa0);
          plVar35 = plVar11 + *(int *)(local_420 + 0xa8);
          do {
            lVar10 = *plVar11;
            if ((lVar10 != 0) && (cVar6 = FUN_1449e2a3e(lVar10), cVar6 != '\0')) {
              local_438 = (undefined2 *)0x0;
              uStack_430 = 0;
              FUN_14005eb28(&local_438,0x80);
              local_270 = local_270 & 0xffffffffffffff00;
              local_288 = (code *)&uStack_268;
              local_278 = local_4d0;
              local_3d0 = *(undefined8 *)(*(longlong *)(lVar10 + 0x10) + 0x18);
              uStack_280 = local_288;
              FUN_14005eb5c(&local_3d0,&local_288);
              if (local_278 <= uStack_280 + 2) {
                FUN_140213274(&local_288,1);
              }
              *(undefined2 *)uStack_280 = 0x20;
              uStack_280 = uStack_280 + 2;
              FUN_144750bde(lVar10,0,&local_288);
              FUN_1400020e8(&local_438,local_288,
                            (ulonglong)((longlong)uStack_280 - (longlong)local_288) >> 1);
              if ((char)local_270 == '\x01') {
                FUN_1400020a8(local_288);
              }
              uVar25 = 0;
              uVar29 = (int)uStack_430 - 1;
              if ((int)uStack_430 == 0) {
                uVar29 = uVar25;
              }
              if (0 < (int)uVar29) {
                puVar32 = local_438;
                if ((int)uStack_430 == 0) {
                  puVar32 = &DAT_149dfb77a;
                }
                lVar12 = 0;
                uVar27 = 0;
                do {
                  uVar25 = ((uint)(ushort)puVar32[lVar12] +
                           (uint)(0x19 < (ushort)puVar32[lVar12] - 0x61) * 0x20) - 0x20;
                  uVar34 = (uint)(uVar27 >> 8) ^
                           *(uint *)(&DAT_14c75d150 +
                                    (ulonglong)(((uint)uVar27 ^ uVar25) & 0xff) * 4);
                  uVar25 = uVar34 >> 8 ^
                           *(uint *)(&DAT_14c75d150 +
                                    (ulonglong)(uVar34 & 0xff ^ uVar25 >> 8 & 0xff) * 4);
                  uVar27 = (ulonglong)uVar25;
                  lVar12 = lVar12 + 1;
                } while (uVar29 != (uint)lVar12);
              }
              if ((int)plVar9[0x2a7] != *(int *)((longlong)plVar9 + 0x1564)) {
                plVar28 = (longlong *)plVar9[0x2ae];
                if ((longlong *)plVar9[0x2ae] == (longlong *)0x0) {
                  plVar28 = local_4a0;
                }
                iVar7 = *(int *)((longlong)plVar28 +
                                (ulonglong)((int)plVar9[0x2af] - 1U & uVar25) * 4);
                if (iVar7 != -1) {
                  lVar12 = *local_4b8;
LAB_1434c5af3:
                  lVar33 = (longlong)iVar7;
                  iVar8 = *(int *)(lVar12 + 8 + lVar33 * 0x18);
                  if (iVar8 == (int)uStack_430) {
                    plVar9 = local_4d8;
                    if (1 < (int)uStack_430) {
                      lVar31 = 0;
                      do {
                        uVar3 = *(ushort *)(*(longlong *)(lVar12 + lVar33 * 0x18) + lVar31);
                        uVar4 = *(ushort *)((longlong)local_438 + lVar31);
                        if (uVar3 == uVar4) {
                          if (uVar3 == 0) break;
                        }
                        else {
                          if (0x7f < (uVar4 | uVar3)) {
                            iVar8 = (uint)uVar3 - (uint)uVar4;
                            goto LAB_1434c5b7d;
                          }
                          if ((&DAT_149e05da0)[uVar3] != (&DAT_149e05da0)[(uint)uVar4])
                          goto code_r0x0001434c5b7a;
                        }
                        lVar31 = lVar31 + 2;
                      } while( true );
                    }
                  }
                  else if (iVar8 + (int)uStack_430 != 1) goto LAB_1434c5b10;
                  goto LAB_1434c5b93;
                }
              }
LAB_1434c5b8e:
              iVar7 = -1;
LAB_1434c5b93:
              if (local_438 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              if (iVar7 == -1) {
                local_438 = (undefined2 *)0x0;
                uStack_430 = 0;
                FUN_14005eb28(&local_438,0x80);
                local_270 = local_270 & 0xffffffffffffff00;
                local_288 = (code *)&uStack_268;
                local_278 = local_4d0;
                local_3d0 = *(undefined8 *)(*(longlong *)(lVar10 + 0x10) + 0x18);
                uStack_280 = local_288;
                FUN_14005eb5c(&local_3d0,&local_288);
                if (local_278 <= uStack_280 + 2) {
                  FUN_140213274(&local_288,1);
                }
                *(undefined2 *)uStack_280 = 0x20;
                uStack_280 = uStack_280 + 2;
                FUN_144750bde(lVar10,0,&local_288);
                FUN_1400020e8(&local_438);
                if ((char)local_270 == '\x01') {
                  FUN_1400020a8(local_288);
                }
                puVar32 = local_438;
                uVar27 = 0;
                iVar7 = (int)uStack_430 + -1;
                if ((int)uStack_430 == 0) {
                  iVar7 = 0;
                }
                if (0 < iVar7) {
                  puVar17 = local_438;
                  if ((int)uStack_430 == 0) {
                    puVar17 = &DAT_149dfb77a;
                  }
                  lVar12 = 0;
                  uVar27 = 0;
                  do {
                    uVar29 = ((uint)(ushort)puVar17[lVar12] +
                             (uint)(0x19 < (ushort)puVar17[lVar12] - 0x61) * 0x20) - 0x20;
                    uVar25 = (uint)(uVar27 >> 8) ^
                             *(uint *)(&DAT_14c75d150 +
                                      (ulonglong)(((uint)uVar27 ^ uVar29) & 0xff) * 4);
                    uVar27 = (ulonglong)
                             (uVar25 >> 8 ^
                             *(uint *)(&DAT_14c75d150 +
                                      (ulonglong)(uVar25 & 0xff ^ uVar29 >> 8 & 0xff) * 4));
                    lVar12 = lVar12 + 1;
                  } while (iVar7 != (int)lVar12);
                }
                iVar7 = FUN_147a72fb2(local_4a8,uVar27,&local_438);
                if (puVar32 != (undefined2 *)0x0) {
                  FUN_1400020a8(puVar32);
                }
                plVar9 = local_4d8;
                if (iVar7 == -1) {
                  uVar29 = *(uint *)(lVar10 + 0xc);
                  local_288 = (code *)(ulonglong)uVar29;
                  if ((int)uVar29 < DAT_14c9647dc) {
                    lVar10 = (ulonglong)((uVar29 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8);
                  }
                  else {
                    lVar10 = 0;
                  }
                  iVar7 = *(int *)(lVar10 + 0x10);
                  if (*(int *)(lVar10 + 0x10) == 0) {
                    LOCK();
                    iVar7 = DAT_14c964868 + 1;
                    UNLOCK();
                    iVar8 = DAT_14c964868 + 1;
                    bVar37 = DAT_14c964868 < 1000;
                    DAT_14c964868 = iVar7;
                    if (bVar37) {
                      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                    L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                    ,iVar8);
                    }
                    LOCK();
                    iVar7 = *(int *)(lVar10 + 0x10);
                    bVar37 = iVar7 == 0;
                    if (bVar37) {
                      *(int *)(lVar10 + 0x10) = iVar8;
                      iVar7 = 0;
                    }
                    UNLOCK();
                    uVar29 = (uint)local_288;
                    if (bVar37) {
                      iVar7 = iVar8;
                    }
                  }
                  local_288._0_4_ = uVar29;
                  local_288 = (code *)CONCAT44(iVar7,(uint)local_288);
                  FUN_147a73084(&local_328,&local_438,&local_288);
                }
                else {
                  FUN_1412f3774(local_4d8[0x35],lVar10,1,1);
                }
              }
              else {
                (**(code **)(*plVar9 + 0x4b0))(plVar9,lVar10);
                FUN_1412f3774(plVar9[0x35],lVar10,1,1);
              }
            }
            plVar11 = plVar11 + 1;
            plVar28 = local_470;
          } while (plVar11 != plVar35);
        }
        local_288 = (code *)0x0;
        uStack_280 = (code *)0x0;
        FUN_1434c2a1e(plVar9,&local_288,local_420);
        pcVar19 = local_288;
        lVar10 = (longlong)(int)(uint)uStack_280;
        if (lVar10 != 0) {
          lVar12 = 0;
          do {
            if (*(longlong *)(pcVar19 + lVar12) == 0) {
              local_438._0_4_ = 0;
              iVar7 = 0;
              uVar29 = (uint)local_438;
            }
            else {
              uVar29 = *(uint *)(*(longlong *)(pcVar19 + lVar12) + 0xc);
              local_438 = (undefined2 *)(ulonglong)uVar29;
              if ((int)uVar29 < DAT_14c9647dc) {
                lVar33 = (ulonglong)((uVar29 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8);
              }
              else {
                lVar33 = 0;
              }
              iVar7 = *(int *)(lVar33 + 0x10);
              if (*(int *)(lVar33 + 0x10) == 0) {
                LOCK();
                iVar7 = DAT_14c964868 + 1;
                UNLOCK();
                iVar8 = DAT_14c964868 + 1;
                bVar37 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar7;
                if (bVar37) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar8);
                }
                LOCK();
                iVar7 = *(int *)(lVar33 + 0x10);
                bVar37 = iVar7 == 0;
                if (bVar37) {
                  *(int *)(lVar33 + 0x10) = iVar8;
                  iVar7 = 0;
                }
                UNLOCK();
                uVar29 = (uint)local_438;
                if (bVar37) {
                  iVar7 = iVar8;
                }
              }
            }
            local_438._0_4_ = uVar29;
            local_438 = (undefined2 *)CONCAT44(iVar7,(uint)local_438);
            FUN_147a73084(&local_328,&local_3d0,&local_438);
            lVar12 = lVar12 + 8;
          } while (lVar10 * 8 != lVar12);
        }
        FUN_147a72144(&local_378,&local_438,&local_420);
        if (local_288 != (code *)0x0) {
          FUN_1400020a8();
        }
        uVar27 = local_460;
        iVar7 = local_474;
        plVar9 = local_4d8;
        local_380 = 0;
        if (local_388 != 0) {
          FUN_1400020a8();
        }
        FUN_140367f32(&local_3c8);
        uVar29 = local_478 & ~(uint)local_498;
        puVar14 = (uint *)plVar9[0x274];
        if ((uint *)plVar9[0x274] == (uint *)0x0) {
          puVar14 = local_468;
        }
        uVar34 = *(uint *)(plVar9 + 0x275);
        iVar8 = (int)uVar27;
        lVar10 = (longlong)iVar8;
        uVar25 = puVar14[lVar10] & uVar29;
        if (uVar25 == 0) {
          iVar30 = uVar34 + 0x1e;
          if (-1 < (int)(uVar34 - 1)) {
            iVar30 = uVar34 - 1;
          }
          iVar30 = iVar30 >> 5;
          iVar7 = iVar7 + 0x20;
          iVar21 = iVar30;
          if (iVar30 < iVar8) {
            iVar21 = iVar8;
          }
          if (iVar8 < iVar30) {
            lVar12 = 0;
            do {
              uVar25 = puVar14[lVar10 + lVar12 + 1];
              if (uVar25 != 0) {
                uVar27 = (ulonglong)(iVar8 + (int)lVar12 + 1);
                uVar29 = 0xffffffff;
                goto LAB_1434c5fe6;
              }
              iVar7 = iVar7 + 0x20;
              lVar12 = lVar12 + 1;
            } while (iVar21 - lVar10 != lVar12);
            uVar29 = 0xffffffff;
            iVar8 = iVar21;
          }
          uVar27 = (ulonglong)(iVar8 + 1);
          plVar9 = local_4d8;
          uVar25 = uVar34;
        }
        else {
LAB_1434c5fe6:
          local_498 = (ulonglong)(-uVar25 & uVar25);
          uVar36 = local_498 * 2 + 1;
          lVar10 = 0x3f;
          if (uVar36 != 0) {
            for (; uVar36 >> lVar10 == 0; lVar10 = lVar10 + -1) {
            }
          }
          uVar25 = (iVar7 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
          if ((int)uVar34 <= (int)uVar25) {
            uVar25 = uVar34;
          }
        }
      } while (uVar25 != (uint)local_488);
    }
LAB_1434c4fed:
    *(undefined1 *)((longlong)plVar9 + 0x9aa) = local_4c1;
    FUN_147a61f04(plVar28);
    local_4b0 = (longlong *)CONCAT71(local_4b0._1_7_,(char)plVar9[0x135]);
    *(undefined1 *)(plVar9 + 0x135) = 1;
    FUN_147a61f48(&local_3c8,plVar9[0x1e]);
    if ((char)local_4c0 == '\0') {
      local_458 = local_408;
      local_450 = (int)uStack_400;
      FUN_1434c445e(plVar9,&local_458,&local_2d8);
    }
    else if (0 < (int)uStack_410) {
      lVar10 = plVar9[0x1e];
      local_4a8 = (longlong *)(lVar10 + 0x1e20);
      plVar28 = (longlong *)0x0;
      do {
        local_4a0 = plVar28;
        if ((longlong)plVar28 < (longlong)(int)plVar9[0x130]) {
          lVar12 = *(longlong *)(*local_480 + (longlong)plVar28 * 8);
          pcVar19 = (code *)(lVar12 + 0xc0);
          iVar7 = *(int *)(lVar12 + 0xd8);
          if (iVar7 == 0) {
            uVar36 = 1;
            uVar27 = 0;
            iVar30 = 0;
            iVar8 = 0;
          }
          else {
            pcVar15 = *(code **)(lVar12 + 0xd0);
            if (*(code **)(lVar12 + 0xd0) == (code *)0x0) {
              pcVar15 = pcVar19;
            }
            uVar29 = *(uint *)pcVar15;
            if (uVar29 == 0) {
              iVar8 = iVar7 + 0x1e;
              if (-1 < iVar7 + -1) {
                iVar8 = iVar7 + -1;
              }
              uVar27 = 0;
              uVar36 = (ulonglong)(uint)(iVar8 >> 5);
              if (iVar8 >> 5 < 1) {
                uVar36 = uVar27;
              }
              iVar30 = 0;
              do {
                if (uVar36 == uVar27) goto LAB_1434c5122;
                iVar30 = iVar30 + 0x20;
                uVar29 = *(uint *)(pcVar15 + (uVar27 + 1) * 4);
                uVar27 = uVar27 + 1;
              } while (uVar29 == 0);
            }
            else {
              uVar27 = 0;
              iVar30 = 0;
            }
            uVar36 = (ulonglong)(-uVar29 & uVar29);
            uVar18 = uVar36 * 2 + 1;
            lVar33 = 0x3f;
            if (uVar18 != 0) {
              for (; uVar18 >> lVar33 == 0; lVar33 = lVar33 + -1) {
              }
            }
            iVar8 = (iVar30 - ((uint)lVar33 ^ 0x3f)) + 0x3e;
            if (iVar7 <= iVar8) {
              iVar8 = iVar7;
            }
          }
          if (iVar8 != iVar7) {
            uVar29 = 0xffffffff;
            plVar9 = local_4a8;
            local_4d0 = pcVar19;
            do {
              if (*(int *)(lVar10 + 0x1df0) != *(int *)(lVar10 + 0x1e1c)) {
                plVar11 = (longlong *)((longlong)iVar8 * 0x18 + *(longlong *)(lVar12 + 0xb0));
                lVar33 = *plVar11;
                plVar28 = *(longlong **)(lVar10 + 0x1e28);
                if (*(longlong **)(lVar10 + 0x1e28) == (longlong *)0x0) {
                  plVar28 = plVar9;
                }
                iVar8 = *(int *)((longlong)plVar28 +
                                (ulonglong)
                                (*(int *)(lVar10 + 0x1e30) - 1U &
                                (int)lVar33 + (int)((ulonglong)lVar33 >> 0x20) * 0x17) * 4);
                if (iVar8 != -1) {
LAB_1434c5209:
                  plVar28 = (longlong *)(*(longlong *)(lVar10 + 0x1de8) + (longlong)iVar8 * 0x18);
                  if (*plVar28 != lVar33) goto code_r0x0001434c5219;
                  if (((plVar28 != (longlong *)0x0) &&
                      (local_4b8 = (longlong *)plVar28[1], local_4b8 != (longlong *)0x0)) &&
                     (lVar33 = local_4b8[0xd], lVar33 != 0)) {
                    if (DAT_14cae8b20 == 0) {
                      local_288 = (code *)&LAB_14355090c;
                      local_4e0 = FUN_14081d0ea;
                      local_4e8 = FUN_14081d0ea;
                      local_4f0 = &local_288;
                      local_4f8 = &LAB_147b8e16d;
                      local_500 = (code *)&LAB_140810a38;
                      local_508 = L"Engine";
                      local_510 = 0x800000000;
                      local_518 = 0x10000000;
                      local_520 = 8;
                      local_528 = 0x3f0;
                      local_4c0 = lVar33;
                      FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
                      lVar33 = local_4c0;
                      pcVar19 = local_4d0;
                      plVar9 = local_4a8;
                    }
                    uVar18 = DAT_14cae8b20;
                    if (DAT_14c951858 == 0) {
                      local_288 = FUN_1449e2820;
                      local_4e0 = FUN_14081d0ea;
                      local_4e8 = FUN_14081d0ea;
                      local_4f0 = &local_288;
                      local_4f8 = &LAB_1468c5283;
                      local_500 = FUN_142809da0;
                      local_508 = L"Engine";
                      local_510 = 0x400000000;
                      local_518 = 0x10000000;
                      local_520 = 8;
                      local_528 = 0x50;
                      local_498 = DAT_14cae8b20;
                      local_4c0 = lVar33;
                      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288)
                      ;
                      lVar33 = local_4c0;
                      uVar18 = local_498;
                      pcVar19 = local_4d0;
                      plVar9 = local_4a8;
                    }
                    uVar23 = *(ulonglong *)(lVar33 + 0x20);
                    if (uVar23 == 0) {
                      uVar16 = 0;
                    }
                    else {
                      do {
                        if ((*(int *)(*(longlong *)(uVar23 + 0x10) + 0x38) < *(int *)(uVar18 + 0x38)
                            ) || (uVar16 = uVar23,
                                 *(longlong *)
                                  (*(longlong *)(*(longlong *)(uVar23 + 0x10) + 0x30) +
                                  (longlong)*(int *)(uVar18 + 0x38) * 8) != uVar18 + 0x30)) {
                          uVar16 = 0;
                        }
                      } while ((uVar16 == 0) &&
                              (uVar23 = *(ulonglong *)(uVar23 + 0x20), uVar23 != 0));
                    }
                    if ((int)uStack_370 != local_344) {
                      uVar25 = ((uint)(uVar16 >> 0x14) & 0xffff ^ (uint)(uVar16 >> 4)) * -0x7a143595
                      ;
                      uVar25 = (uVar25 >> 0xd ^ uVar25) * -0x3d4d51cb;
                      puVar24 = local_338;
                      if (local_338 == (undefined1 *)0x0) {
                        puVar24 = local_340;
                      }
                      uVar25 = local_330 - 1U & (uVar25 >> 0x10 ^ uVar25);
                      iVar8 = *(int *)(puVar24 + (ulonglong)uVar25 * 4);
                      if (iVar8 != -1) {
                        while (lVar33 = (longlong)iVar8 * 0x10,
                              *(ulonglong *)(local_378 + lVar33) != uVar16) {
                          iVar8 = *(int *)(lVar33 + local_378 + 8);
                          if (iVar8 == -1) goto LAB_1434c535e;
                        }
                        FUN_140cef0f4(local_4b8,CONCAT71((int7)((ulonglong)lVar33 >> 8),1),
                                      CONCAT31((int3)(uVar25 >> 8),(char)plVar11[1]));
                        pcVar19 = local_4d0;
                        plVar9 = local_4a8;
                      }
                    }
                  }
                }
              }
LAB_1434c535e:
              uVar29 = uVar29 & ~(uint)uVar36;
              pcVar15 = *(code **)(lVar12 + 0xd0);
              if (*(code **)(lVar12 + 0xd0) == (code *)0x0) {
                pcVar15 = pcVar19;
              }
              iVar21 = *(int *)(lVar12 + 0xd8);
              iVar8 = (int)uVar27;
              lVar33 = (longlong)iVar8;
              uVar25 = *(uint *)(pcVar15 + lVar33 * 4) & uVar29;
              if (uVar25 == 0) {
                iVar22 = iVar21 + 0x1e;
                if (-1 < iVar21 + -1) {
                  iVar22 = iVar21 + -1;
                }
                iVar22 = iVar22 >> 5;
                iVar30 = iVar30 + 0x20;
                iVar20 = iVar22;
                if (iVar22 < iVar8) {
                  iVar20 = iVar8;
                }
                pcVar19 = local_4d0;
                if (iVar8 < iVar22) {
                  lVar31 = 0;
                  do {
                    uVar25 = *(uint *)(pcVar15 + (lVar33 + lVar31 + 1) * 4);
                    if (uVar25 != 0) {
                      uVar27 = (ulonglong)(iVar8 + (int)lVar31 + 1);
                      uVar29 = 0xffffffff;
                      goto LAB_1434c53df;
                    }
                    iVar30 = iVar30 + 0x20;
                    lVar31 = lVar31 + 1;
                  } while (iVar20 - lVar33 != lVar31);
                  uVar29 = 0xffffffff;
                  iVar8 = iVar20;
                }
                uVar27 = (ulonglong)(iVar8 + 1);
                plVar9 = local_4a8;
                iVar8 = iVar21;
              }
              else {
LAB_1434c53df:
                uVar36 = (ulonglong)(-uVar25 & uVar25);
                uVar18 = uVar36 * 2 + 1;
                lVar33 = 0x3f;
                if (uVar18 != 0) {
                  for (; uVar18 >> lVar33 == 0; lVar33 = lVar33 + -1) {
                  }
                }
                iVar8 = (iVar30 - ((uint)lVar33 ^ 0x3f)) + 0x3e;
                if (iVar21 <= iVar8) {
                  iVar8 = iVar21;
                }
              }
            } while (iVar8 != iVar7);
          }
        }
LAB_1434c5122:
        plVar28 = local_4a0;
        plVar9 = local_4d8;
        iVar7 = *(int *)(local_418 + (longlong)local_4a0 * 8);
        local_440 = (*(int *)(local_418 + 4 + (longlong)local_4a0 * 8) - iVar7) + 1;
        local_448 = (longlong)iVar7 * 0x20 + local_408;
        FUN_1434c445e(local_4d8,&local_448,&local_2d8);
        plVar28 = (longlong *)((longlong)plVar28 + 1);
      } while ((longlong)plVar28 < (longlong)(int)uStack_410);
    }
    FUN_147a61f84(&local_3c8);
    *(undefined1 *)(plVar9 + 0x135) = local_4b0._0_1_;
    lVar10 = plVar9[0x1e];
    uVar27 = (ulonglong)local_48c;
    if (lVar10 != 0) {
      local_3c8 = (longlong *)0x0;
      uStack_3c0 = 0;
      iVar7 = (int)uStack_320 - local_2f4;
      if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar7);
      }
      if (iVar7 != 0) {
        FUN_147a73234(&local_3c8);
        lVar10 = plVar9[0x1e];
      }
      if ((longlong)*(int *)(lVar10 + 0x78) != 0) {
        plVar28 = *(longlong **)(lVar10 + 0x70);
        plVar9 = plVar28 + *(int *)(lVar10 + 0x78);
        do {
          lVar10 = *plVar28;
          if (lVar10 != 0) {
            uVar27 = *(ulonglong *)(lVar10 + 0x40);
            if (DAT_14c87ead8 == '\0') {
              FUN_140024d3a(&DAT_14c87eb00);
              DAT_14c87ead8 = '\x01';
            }
            if ((uVar27 == DAT_14c892cd8) && (lVar12 = *(longlong *)(lVar10 + 0x68), lVar12 != 0)) {
              cVar6 = FUN_1449e2a3e(lVar12);
              if (cVar6 == '\0') {
                if (DAT_14cae8b20 == 0) {
                  local_288 = (code *)&LAB_14355090c;
                  local_4e0 = FUN_14081d0ea;
                  local_4e8 = FUN_14081d0ea;
                  local_4f8 = &LAB_147b8e16d;
                  local_500 = (code *)&LAB_140810a38;
                  local_508 = L"Engine";
                  local_510 = 0x800000000;
                  local_518 = 0x10000000;
                  local_520 = 8;
                  local_528 = 0x3f0;
                  local_4f0 = &local_288;
                  FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
                }
                uVar27 = DAT_14cae8b20;
                if (DAT_14c951858 == 0) {
                  local_288 = FUN_1449e2820;
                  local_4e0 = FUN_14081d0ea;
                  local_4e8 = FUN_14081d0ea;
                  local_4f8 = &LAB_1468c5283;
                  local_500 = FUN_142809da0;
                  local_508 = L"Engine";
                  local_510 = 0x400000000;
                  local_518 = 0x10000000;
                  local_520 = 8;
                  local_528 = 0x50;
                  local_4f0 = &local_288;
                  FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
                }
                uVar36 = *(ulonglong *)(lVar12 + 0x20);
                if (uVar36 == 0) {
                  uVar18 = 0;
                }
                else {
                  iVar7 = *(int *)(uVar27 + 0x38);
                  do {
                    if ((*(int *)(*(longlong *)(uVar36 + 0x10) + 0x38) < iVar7) ||
                       (uVar18 = uVar36,
                       *(longlong *)
                        (*(longlong *)(*(longlong *)(uVar36 + 0x10) + 0x30) + (longlong)iVar7 * 8)
                       != uVar27 + 0x30)) {
                      uVar18 = 0;
                    }
                  } while ((uVar18 == 0) && (uVar36 = *(ulonglong *)(uVar36 + 0x20), uVar36 != 0));
                }
                if ((int)uStack_370 != local_344) {
                  uVar29 = ((uint)(uVar18 >> 0x14) & 0xffff ^ (uint)(uVar18 >> 4)) * -0x7a143595;
                  uVar29 = (uVar29 >> 0xd ^ uVar29) * -0x3d4d51cb;
                  puVar24 = local_338;
                  if (local_338 == (undefined1 *)0x0) {
                    puVar24 = local_340;
                  }
                  for (iVar7 = *(int *)(puVar24 +
                                       (ulonglong)(local_330 - 1U & (uVar29 >> 0x10 ^ uVar29)) * 4);
                      iVar7 != -1; iVar7 = *(int *)((longlong)iVar7 * 0x10 + local_378 + 8)) {
                    if (*(ulonglong *)(local_378 + (longlong)iVar7 * 0x10) == uVar18)
                    goto LAB_1434c62ec;
                  }
                }
              }
              uVar29 = *(uint *)(lVar12 + 0xc);
              if ((int)uVar29 < DAT_14c9647dc) {
                lVar12 = (ulonglong)((uVar29 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8);
              }
              else {
                lVar12 = 0;
              }
              uVar25 = *(uint *)(lVar12 + 0x10);
              if (*(uint *)(lVar12 + 0x10) == 0) {
                LOCK();
                iVar7 = DAT_14c964868 + 1;
                UNLOCK();
                uVar34 = DAT_14c964868 + 1;
                bVar37 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar7;
                if (bVar37) {
                  local_4d0 = (code *)CONCAT44(local_4d0._4_4_,uVar34);
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,uVar34);
                  uVar34 = (uint)local_4d0;
                }
                LOCK();
                uVar25 = *(uint *)(lVar12 + 0x10);
                bVar37 = uVar25 == 0;
                if (bVar37) {
                  *(uint *)(lVar12 + 0x10) = uVar34;
                  uVar25 = 0;
                }
                UNLOCK();
                if (bVar37) {
                  uVar25 = uVar34;
                }
              }
              local_288 = (code *)CONCAT44(uVar25,uVar29);
              iVar7 = FUN_1403682a2(&local_328,uVar29 ^ uVar25,&local_288);
              if (iVar7 != -1) {
LAB_1434c62ec:
                uVar27 = uStack_3c0;
                lVar12 = (longlong)(int)uStack_3c0;
                uVar29 = (int)uStack_3c0 + 1;
                uStack_3c0 = CONCAT44(uStack_3c0._4_4_,uVar29);
                if (uStack_3c0._4_4_ < uVar29) {
                  FUN_147a73294(&local_3c8,uVar27 & 0xffffffff);
                }
                local_3c8[lVar12] = lVar10;
                FUN_147a60c04(lVar10);
              }
            }
          }
          plVar28 = plVar28 + 1;
        } while (plVar28 != plVar9);
      }
      if ((longlong)(int)uStack_3c0 != 0) {
        local_4b8 = local_3c8 + (int)uStack_3c0;
        plVar9 = local_3c8;
        do {
          lVar10 = *plVar9;
          local_4d0 = (code *)(lVar10 + 0xb8);
          iVar7 = *(int *)(lVar10 + 0xd0);
          local_4a0 = plVar9;
          if (iVar7 == 0) {
            uVar27 = 1;
            uVar36 = 0;
            iVar30 = 0;
            iVar8 = 0;
          }
          else {
            pcVar19 = *(code **)(lVar10 + 200);
            if (*(code **)(lVar10 + 200) == (code *)0x0) {
              pcVar19 = local_4d0;
            }
            uVar29 = *(uint *)pcVar19;
            if (uVar29 == 0) {
              iVar8 = iVar7 + 0x1e;
              if (-1 < iVar7 + -1) {
                iVar8 = iVar7 + -1;
              }
              uVar36 = 0;
              uVar27 = (ulonglong)(uint)(iVar8 >> 5);
              if (iVar8 >> 5 < 1) {
                uVar27 = uVar36;
              }
              iVar30 = 0;
              do {
                if (uVar27 == uVar36) goto LAB_1434c657e;
                iVar30 = iVar30 + 0x20;
                uVar29 = *(uint *)(pcVar19 + (uVar36 + 1) * 4);
                uVar36 = uVar36 + 1;
              } while (uVar29 == 0);
            }
            else {
              uVar36 = 0;
              iVar30 = 0;
            }
            uVar27 = (ulonglong)(-uVar29 & uVar29);
            uVar18 = uVar27 * 2 + 1;
            lVar12 = 0x3f;
            if (uVar18 != 0) {
              for (; uVar18 >> lVar12 == 0; lVar12 = lVar12 + -1) {
              }
            }
            iVar8 = (iVar30 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
            if (iVar7 <= iVar8) {
              iVar8 = iVar7;
            }
          }
          if (iVar8 != iVar7) {
            uVar29 = 0xffffffff;
            do {
              lVar12 = *(longlong *)(*(longlong *)(lVar10 + 0xa8) + 8 + (longlong)iVar8 * 0x20);
              plVar9 = *(longlong **)(lVar12 + 0x48);
              if ((((plVar9 != (longlong *)0x0) ||
                   ((((*(int *)(lVar12 + 0xdc) != 0 &&
                      (uVar25 = *(uint *)(lVar12 + 0xd8), -1 < (int)uVar25)) &&
                     ((int)uVar25 < DAT_14c9647dc)) &&
                    (((puVar26 = (undefined8 *)
                                 ((ulonglong)((uVar25 & 0xffff) * 0x18) +
                                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar25 >> 0x10) * 8)),
                      puVar26 != (undefined8 *)0x0 &&
                      (*(int *)(puVar26 + 2) == *(int *)(lVar12 + 0xdc))) &&
                     (((*(uint *)(puVar26 + 1) & 0x10200000) == 0 &&
                      (plVar9 = (longlong *)*puVar26, plVar9 != (longlong *)0x0)))))))) &&
                  ((*(uint *)(plVar9 + 1) >> 0x1e & 1) == 0)) &&
                 ((((*(longlong *)(lVar12 + 0x50) == 0 ||
                    (plVar28 = *(longlong **)(*(longlong *)(lVar12 + 0x50) + 0x58),
                    plVar28 == (longlong *)0x0)) ||
                   ((pcVar19 = *(code **)(*plVar28 + 0x3f8), pcVar19 == (code *)&LAB_14359f930 ||
                    (cVar6 = (*pcVar19)(), cVar6 == '\0')))) &&
                  ((((*(longlong *)(lVar12 + 0x58) == 0 ||
                     (*(int *)(*(longlong *)(lVar12 + 0x58) + 0x100) < 1)) &&
                    (FUN_1400f5d32(*(undefined8 *)(lVar12 + 0x20),**(undefined8 **)(lVar12 + 0x30),
                                   plVar9), (*(uint *)(plVar9 + 1) >> 0x1e & 1) == 0)) &&
                   (*(code **)(*plVar9 + 0x220) != (code *)0x144aff47c)))))) {
                (**(code **)(*plVar9 + 0x220))(plVar9);
              }
              uVar29 = uVar29 & ~(uint)uVar27;
              pcVar19 = *(code **)(lVar10 + 200);
              if (*(code **)(lVar10 + 200) == (code *)0x0) {
                pcVar19 = local_4d0;
              }
              iVar21 = *(int *)(lVar10 + 0xd0);
              iVar8 = (int)uVar36;
              lVar12 = (longlong)iVar8;
              uVar25 = *(uint *)(pcVar19 + lVar12 * 4) & uVar29;
              if (uVar25 == 0) {
                iVar22 = iVar21 + 0x1e;
                if (-1 < iVar21 + -1) {
                  iVar22 = iVar21 + -1;
                }
                iVar22 = iVar22 >> 5;
                iVar30 = iVar30 + 0x20;
                iVar20 = iVar22;
                if (iVar22 < iVar8) {
                  iVar20 = iVar8;
                }
                if (iVar8 < iVar22) {
                  lVar33 = 0;
                  do {
                    uVar25 = *(uint *)(pcVar19 + (lVar12 + lVar33 + 1) * 4);
                    if (uVar25 != 0) {
                      uVar36 = (ulonglong)(iVar8 + (int)lVar33 + 1);
                      uVar29 = 0xffffffff;
                      goto LAB_1434c66c3;
                    }
                    iVar30 = iVar30 + 0x20;
                    lVar33 = lVar33 + 1;
                  } while (iVar20 - lVar12 != lVar33);
                  uVar29 = 0xffffffff;
                  iVar8 = iVar20;
                }
                uVar36 = (ulonglong)(iVar8 + 1);
                iVar8 = iVar21;
              }
              else {
LAB_1434c66c3:
                uVar27 = (ulonglong)(-uVar25 & uVar25);
                uVar18 = uVar27 * 2 + 1;
                lVar12 = 0x3f;
                if (uVar18 != 0) {
                  for (; uVar18 >> lVar12 == 0; lVar12 = lVar12 + -1) {
                  }
                }
                iVar8 = (iVar30 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
                if (iVar21 <= iVar8) {
                  iVar8 = iVar21;
                }
              }
            } while (iVar8 != iVar7);
          }
LAB_1434c657e:
          plVar9 = local_4a0 + 1;
        } while (plVar9 != local_4b8);
      }
      local_288 = FUN_1434d485a;
      uStack_280 = (code *)&local_438;
      FUN_147bdbac4(local_4d8[0x1e] + 0x15d0);
      uVar27 = (ulonglong)local_48c;
      if (local_3c8 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if (local_418 != 0) {
    FUN_1400020a8();
  }
  FUN_145ad50ba(local_408,uStack_400 & 0xffffffff);
  if (local_408 != 0) {
    FUN_1400020a8();
  }
  local_330 = 0;
  if (local_338 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_145ad5980(&local_378);
  local_2e0 = 0;
  if (local_2e8 != 0) {
    FUN_1400020a8();
  }
  FUN_140367f32(&local_328);
  local_290 = 0;
  if (local_298 != 0) {
    FUN_1400020a8();
  }
  uVar36 = uStack_2d0 >> 0x20;
  uStack_2d0 = uStack_2d0 & 0xffffffff00000000;
  if ((int)uVar36 != 0) {
    FUN_1447a08a2(&local_2d8,0);
  }
  uStack_2a8 = 0xffffffff;
  local_2a4 = 0;
  local_2b0 = 0;
  if (0x80 < local_2ac) {
    local_2ac = 0x80;
    FUN_1446efbd8(local_2c8,0);
  }
  if (local_2b8 != 0) {
    FUN_1400020a8();
  }
  if (local_2d8 != 0) {
    FUN_1400020a8();
  }
LAB_1434c4647:
  if ((local_60 ^ (ulonglong)auStack_548) == DAT_14c707940) {
    return uVar27 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
code_r0x0001434c5b7a:
  iVar8 = (uint)(byte)(&DAT_149e05da0)[uVar3] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar4];
LAB_1434c5b7d:
  if (iVar8 == 0) goto LAB_1434c5b93;
LAB_1434c5b10:
  iVar7 = *(int *)(lVar12 + 0x10 + lVar33 * 0x18);
  if (iVar7 == -1) goto LAB_1434c5b8e;
  goto LAB_1434c5af3;
code_r0x0001434c5219:
  iVar8 = (int)plVar28[2];
  if (iVar8 == -1) goto LAB_1434c535e;
  goto LAB_1434c5209;
}



// FUNCTION 1434c6838 FUN_1434c6838 body=166 status=ok
// SIG undefined FUN_1434c6838(void)

undefined8 FUN_1434c6838(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  uVar3 = (**(code **)(*param_2 + 0x28))(param_2);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 8);
  lVar1 = *(longlong *)(param_1 + 0x10);
  cVar2 = FUN_14368ad3e(lVar1 + 0xb40,*(undefined8 *)(lVar1 + 0xf0),param_2,param_1,1,
                        *(undefined8 *)(lVar1 + 0xb18),param_1 + 0x20);
  if (cVar2 == '\0') {
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
  else {
    if (*(float *)(param_1 + 0x20) < *(float *)(param_1 + 0x18) ||
        *(float *)(param_1 + 0x20) == *(float *)(param_1 + 0x18)) {
      return 1;
    }
    (**(code **)(*param_2 + 0x1a0))(param_2,*(undefined8 *)(param_1 + 0x28));
    if ((*(int *)(param_1 + 0x1c) != 0) && (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x1c))) {
      FUN_147a71bce(param_1);
      FUN_147a71c2e(param_1);
    }
  }
  return 0;
}



// FUNCTION 1434c68de FUN_1434c68de body=9403 status=ok
// SIG undefined FUN_1434c68de(void)

bool FUN_1434c68de(longlong *param_1,longlong param_2)

{
  int *piVar1;
  byte *pbVar2;
  ulonglong uVar3;
  ushort uVar4;
  ushort uVar5;
  ulonglong *puVar6;
  undefined4 *puVar7;
  byte bVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 *puVar15;
  code *pcVar16;
  undefined8 uVar17;
  longlong *plVar18;
  code *pcVar19;
  void *_Dst;
  uint *puVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  undefined1 *puVar25;
  undefined8 *puVar26;
  code **ppcVar27;
  longlong *plVar28;
  int iVar29;
  uint uVar30;
  longlong lVar31;
  uint uVar32;
  code *pcVar33;
  byte bVar34;
  longlong lVar35;
  ulonglong uVar36;
  longlong lVar37;
  ulonglong uVar38;
  bool bVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined1 auStack_2e8 [32];
  ulonglong local_2c8;
  ulonglong local_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  wchar_t *local_2a8;
  undefined1 *local_2a0;
  undefined1 *local_298;
  code **local_290;
  code *local_288;
  code *local_280;
  char local_271;
  longlong *local_270;
  longlong *local_268;
  longlong *local_260;
  undefined8 local_258;
  longlong *local_250;
  longlong *local_248;
  int local_23c;
  int local_238;
  int local_234;
  longlong local_230;
  longlong local_228;
  longlong *local_220;
  longlong *local_218;
  undefined4 local_20c;
  undefined1 local_208;
  undefined4 local_204;
  byte local_200;
  byte local_1f9;
  code *local_1f8;
  code **ppcStack_1f0;
  undefined8 local_1e8;
  int local_1e0;
  undefined4 local_1dc;
  longlong local_1d8;
  undefined8 uStack_1d0;
  code *local_1c8;
  undefined8 uStack_1c0;
  undefined8 *local_1b8;
  undefined8 uStack_1b0;
  longlong local_1a0;
  int local_194;
  code *local_190;
  code **ppcStack_188;
  int local_17c;
  code *local_178;
  int iStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 local_160 [2];
  undefined8 local_158;
  byte local_150;
  longlong local_148;
  char local_120;
  longlong local_118;
  undefined8 uStack_110;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_ec;
  int local_e4;
  undefined1 local_e0 [8];
  undefined1 *local_d8;
  int local_d0;
  undefined8 *local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  char local_a4;
  longlong local_a0;
  code *local_98;
  longlong local_90;
  longlong local_80;
  undefined4 local_78;
  char local_70;
  undefined7 uStack_6f;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  plVar28 = (longlong *)param_1[0x11f];
  plVar18 = (longlong *)param_1[0x120];
  if (plVar18 == (longlong *)0x0) {
    plVar12 = (longlong *)(**(code **)(*plVar28 + 0x28))();
  }
  else {
    LOCK();
    *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
    UNLOCK();
    plVar12 = (longlong *)(**(code **)(*plVar28 + 0x28))();
    LOCK();
    plVar28 = plVar18 + 1;
    *(int *)plVar28 = (int)*plVar28 + -1;
    UNLOCK();
    if ((int)*plVar28 == 0) {
      (**(code **)*plVar18)(plVar18);
      LOCK();
      piVar1 = (int *)((longlong)plVar18 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
      }
    }
  }
  plVar28 = param_1 + 0x168;
  FUN_147cdd036(plVar28,plVar12);
  plVar12[7] = 0x1000000;
  local_194 = 0;
  local_271 = (char)param_1[0x198];
  local_270 = plVar12;
  if ((local_271 == '\x01') && (lVar13 = (**(code **)(*plVar12 + 0x30))(), 0 < lVar13)) {
    local_c8 = (undefined8 *)((ulonglong)local_c8 & 0xffffffff00000000);
    puVar6 = (ulonglong *)local_270[1];
    if (puVar6[1] < *puVar6 + 4) {
      if ((*(byte *)((longlong)local_270 + 0x2a) & 2) == 0) {
        (**(code **)(*local_270 + 0x170))(local_270,&local_c8,4);
      }
      else {
        FUN_14572512c(local_270,&local_c8);
      }
    }
    else {
      *puVar6 = *puVar6 + 4;
    }
  }
  if (*(char *)((longlong)param_1 + 0xcbf) == '\x01') {
    lVar13 = (**(code **)(*local_270 + 0x30))();
    if (0 < lVar13) {
      local_c8 = (undefined8 *)0x0;
      FUN_1408383eb(local_270);
    }
    FUN_147cdea6e(plVar28);
  }
  FUN_147cdeb10(plVar28);
  *(undefined4 *)(param_1 + 0x15f) = 0;
  local_258 = (uint *)((ulonglong)local_258._4_4_ << 0x20);
  *(undefined4 *)(param_1 + 0x197) = 0;
  local_c8 = (undefined8 *)0xbbc043ec8417998a;
  uStack_c0 = 0x72d272281b3d119;
  lVar13 = FUN_144afef82(param_1 + 0x19c);
  if (lVar13 != 0) {
    local_258 = (uint *)CONCAT44(local_258._4_4_,*(undefined4 *)(lVar13 + 0x10));
  }
  lVar13 = (**(code **)(*local_270 + 0x30))();
  if (0 < lVar13) {
    puVar6 = (ulonglong *)local_270[1];
    piVar1 = (int *)*puVar6 + 1;
    if ((int *)puVar6[1] < piVar1) {
      if ((*(byte *)((longlong)local_270 + 0x2a) & 2) == 0) {
        (**(code **)(*local_270 + 0x170))(local_270,&local_194,4);
      }
      else {
        FUN_14572512c(local_270,&local_194);
      }
    }
    else {
      local_194 = *(int *)*puVar6;
      *puVar6 = (ulonglong)piVar1;
    }
  }
  local_238 = (int)param_1[0x194];
  local_234 = local_194;
  if (local_238 != local_194) {
    (**(code **)(**(longlong **)(param_1[0x35] + 0x1f0) + 0x358))();
    FUN_1405f0e9c(&local_c8,param_1[0x35],5);
    if (local_a4 == '\0') {
      do {
        FUN_1412f3774(param_1[0x35],local_98,1,1);
        FUN_14059e512(&local_c8);
      } while (local_a4 == '\0');
    }
    plVar28 = local_270;
    if (local_70 == '\x01') {
      FUN_14024445c(&uStack_c0);
    }
    FUN_147be8d12(param_1[0x37]);
    iVar10 = FUN_14164d430(param_1,1);
    if (iVar10 < -1) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar10 + 1);
    }
    *(undefined4 *)(param_1 + 0x152) = 0;
    if (*(int *)((longlong)param_1 + 0xa94) != iVar10 + 1) {
      FUN_147a70b24(param_1 + 0x151);
    }
    param_1[0x11e] = 0;
    FUN_147a491c6(param_1[0x1e]);
    (**(code **)(*(longlong *)param_1[0x1e] + 0x330))();
    uVar17 = FUN_145b3bbc8();
    local_2b8 = 0;
    uStack_2b0 = 0;
    local_2c8 = 0;
    local_2c0 = local_2c0 & 0xffffffffffffff00;
    lVar13 = FUN_147a6009f(DAT_14c951640,uVar17,0,0);
    if ((lVar13 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar13);
    }
    param_1[0x1e] = lVar13;
    FUN_140810d00(&local_c8,0);
    iVar10 = (int)param_1[0x186] + -1;
    if ((int)param_1[0x186] == 0) {
      iVar10 = 0;
    }
    FUN_1402980a2(&local_a0,param_1[0x185],iVar10);
    local_2c0 = local_2c0 & 0xffffffff00000000;
    local_2c8 = CONCAT44(local_2c8._4_4_,1000000);
    (**(code **)(*(longlong *)param_1[0x1e] + 0x350))((longlong *)param_1[0x1e],param_1,2,&local_c8)
    ;
    plVar18 = DAT_14cb0d2b0;
    fVar40 = (float)(**(code **)(*DAT_14cb0d2b0 + 0x388))(DAT_14cb0d2b0,0);
    *(float *)(plVar18 + 0x1e4) = fVar40 + 1.0;
    *(undefined1 *)((longlong)plVar18 + 0xf24) = 1;
    FUN_147a6038c(param_1,local_194);
    *(int *)(param_1 + 0x194) = local_194;
    lVar13 = (**(code **)(*plVar28 + 0x30))(plVar28);
    if ((lVar13 != 0) && (lVar13 = (**(code **)(*plVar28 + 0x30))(plVar28), lVar13 != -1)) {
      (**(code **)(*plVar28 + 0x1a0))(plVar28,0);
    }
    if (CONCAT71(uStack_6f,local_70) != 0) {
      FUN_1400020a8();
    }
    FUN_1447a1747(local_80,local_78);
    if (local_80 != 0) {
      FUN_1400020a8();
    }
    if (local_90 != 0) {
      FUN_1400020a8();
    }
    if (local_a0 != 0) {
      FUN_1400020a8();
    }
    puVar26 = local_c8;
    if (local_b8 != 0) {
      FUN_1400020a8();
      puVar26 = local_c8;
    }
    goto LAB_1434c866c;
  }
  local_250 = plVar28;
  local_230 = param_2;
  if (param_1[0x11e] == 0) {
    local_1a0 = 0;
    plVar28 = local_270;
  }
  else {
    FUN_147a61fb4(param_1);
    plVar28 = local_270;
    local_1a0 = 0;
    if (((longlong *)param_1[0x11e] != (longlong *)0x0) &&
       (lVar13 = (**(code **)(*(longlong *)param_1[0x11e] + 0x6b8))(), lVar13 != 0)) {
      lVar13 = param_1[0x37];
      lVar35 = (**(code **)(*(longlong *)param_1[0x11e] + 0x6b8))();
      if (lVar35 == 0) {
        uVar32 = 0;
        uVar21 = 0;
      }
      else {
        uVar32 = *(uint *)(lVar35 + 0xc);
        if ((int)uVar32 < DAT_14c9647dc) {
          lVar35 = (ulonglong)((uVar32 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar32 >> 0x10) * 8);
        }
        else {
          lVar35 = 0;
        }
        uVar21 = *(uint *)(lVar35 + 0x10);
        if (*(uint *)(lVar35 + 0x10) == 0) {
          LOCK();
          iVar10 = DAT_14c964868 + 1;
          UNLOCK();
          uVar30 = DAT_14c964868 + 1;
          bVar39 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar10;
          if (bVar39) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar30);
          }
          LOCK();
          uVar21 = *(uint *)(lVar35 + 0x10);
          bVar39 = uVar21 == 0;
          if (bVar39) {
            *(uint *)(lVar35 + 0x10) = uVar30;
            uVar21 = 0;
          }
          UNLOCK();
          if (bVar39) {
            uVar21 = uVar30;
          }
        }
      }
      if (*(int *)(lVar13 + 0x58) != *(int *)(lVar13 + 0x84)) {
        lVar35 = lVar13 + 0x88;
        if (*(longlong *)(lVar13 + 0x90) != 0) {
          lVar35 = *(longlong *)(lVar13 + 0x90);
        }
        iVar10 = *(int *)(lVar35 + (ulonglong)(*(int *)(lVar13 + 0x98) - 1U & (uVar21 ^ uVar32)) * 4
                         );
        if (iVar10 != -1) {
          lVar35 = *(longlong *)(lVar13 + 0x50);
          do {
            lVar14 = (longlong)iVar10;
            local_c8 = *(undefined8 **)(lVar35 + lVar14 * 0x18);
            local_178 = (code *)CONCAT44(uVar21,uVar32);
            cVar9 = FUN_14472ecf8(&local_c8,&local_178);
            lVar35 = *(longlong *)(lVar13 + 0x50);
            if (cVar9 != '\0') {
              lVar35 = lVar35 + lVar14 * 0x18;
              if (lVar35 != 0) {
                local_1a0 = *(longlong *)(lVar35 + 8);
                if (local_1a0 != 0) {
                  uVar17 = (**(code **)(*(longlong *)param_1[0x11e] + 0x6b8))();
                  FUN_147a61fb4(param_1,uVar17);
                }
                goto LAB_1434c6f29;
              }
              break;
            }
            iVar10 = *(int *)(lVar35 + 0x10 + lVar14 * 0x18);
          } while (iVar10 != -1);
        }
      }
      local_1a0 = 0;
    }
  }
LAB_1434c6f29:
  FUN_1434c1d2e(param_1,0);
  FUN_14107e8f0(&DAT_14cb0d328,param_1[0x35]);
  *(undefined1 *)((longlong)param_1 + 0xcbe) = 1;
  local_268 = param_1 + 0x155;
  local_1b8 = (undefined8 *)0x0;
  uStack_1b0 = 0;
  if ((int)param_1[0x156] != *(int *)((longlong)param_1 + 0xadc)) {
    FUN_144958770(local_268,0);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_ec = 0xffffffff00000080;
  local_e4 = 0;
  local_d8 = (undefined1 *)0x0;
  local_d0 = 0;
  FUN_1405f0e9c(&local_c8,param_1[0x35],5);
  if (local_a4 == '\0') {
    do {
      pcVar19 = local_98;
      local_1c8 = local_98;
      if (((byte)local_98[0x60] & 8) != 0) {
        FUN_147a61fb4(param_1,local_98);
      }
      if ((longlong)(int)param_1[0x152] != 0) {
        puVar15 = (undefined8 *)param_1[0x151];
        puVar26 = puVar15 + (int)param_1[0x152];
        do {
          pcVar16 = (code *)*puVar15;
          if ((pcVar16 != (code *)0x0) && ((*(uint *)(pcVar16 + 8) >> 0x1e & 1) == 0)) {
            bVar34 = 1;
            if ((pcVar16 == pcVar19) || (*(code **)(pcVar16 + 0x7a0) == pcVar19))
            goto LAB_1434c71a0;
            pcVar33 = pcVar19;
            if (pcVar19 != (code *)0x0) {
              do {
                pcVar33 = *(code **)(pcVar33 + 0x168);
                if (pcVar33 == (code *)0x0) break;
              } while (pcVar33 != pcVar16);
              if (pcVar33 != (code *)0x0) goto LAB_1434c71a0;
            }
          }
          puVar15 = puVar15 + 1;
        } while (puVar15 != puVar26);
      }
      bVar34 = 0;
LAB_1434c71a0:
      if ((char)pcVar19[0x61] < '\0') {
        bVar8 = FUN_1449e2a3e(pcVar19);
        bVar8 = bVar8 ^ 1;
      }
      else {
        bVar8 = 0;
      }
      if ((bVar34 | bVar8) == 1) {
        lVar13 = param_1[0x37];
        if (pcVar19 == (code *)0x0) {
          uVar32 = 0;
          uVar21 = 0;
        }
        else {
          uVar32 = *(uint *)(pcVar19 + 0xc);
          if ((int)uVar32 < DAT_14c9647dc) {
            lVar35 = (ulonglong)((uVar32 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar32 >> 0x10) * 8);
          }
          else {
            lVar35 = 0;
          }
          uVar21 = *(uint *)(lVar35 + 0x10);
          if (*(uint *)(lVar35 + 0x10) == 0) {
            LOCK();
            iVar10 = DAT_14c964868 + 1;
            UNLOCK();
            uVar30 = DAT_14c964868 + 1;
            bVar39 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar10;
            if (bVar39) {
              local_260 = (longlong *)CONCAT44(local_260._4_4_,uVar30);
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,uVar30);
              uVar30 = (uint)local_260;
            }
            LOCK();
            uVar21 = *(uint *)(lVar35 + 0x10);
            bVar39 = uVar21 == 0;
            if (bVar39) {
              *(uint *)(lVar35 + 0x10) = uVar30;
              uVar21 = 0;
            }
            UNLOCK();
            if (bVar39) {
              uVar21 = uVar30;
            }
          }
        }
        ppcVar27 = &local_190;
        if (*(int *)(lVar13 + 0x58) != *(int *)(lVar13 + 0x84)) {
          lVar35 = lVar13 + 0x88;
          if (*(longlong *)(lVar13 + 0x90) != 0) {
            lVar35 = *(longlong *)(lVar13 + 0x90);
          }
          iVar10 = *(int *)(lVar35 + (ulonglong)(*(int *)(lVar13 + 0x98) - 1U & (uVar21 ^ uVar32)) *
                                     4);
          if (iVar10 != -1) {
            lVar35 = *(longlong *)(lVar13 + 0x50);
            do {
              lVar14 = (longlong)iVar10;
              local_178 = *(code **)(lVar35 + lVar14 * 0x18);
              local_190 = (code *)CONCAT44(uVar21,uVar32);
              cVar9 = FUN_14472ecf8(&local_178,&local_190);
              uVar36 = uStack_1b0;
              lVar35 = *(longlong *)(lVar13 + 0x50);
              if (cVar9 != '\0') {
                lVar35 = lVar35 + lVar14 * 0x18;
                if (lVar35 != 0) {
                  local_178 = *(code **)(lVar35 + 8);
                  if (local_178 != (code *)0x0) {
                    lVar13 = (longlong)(int)uStack_1b0;
                    uVar21 = (int)uStack_1b0 + 1;
                    uStack_1b0 = CONCAT44(uStack_1b0._4_4_,uVar21);
                    if (uStack_1b0._4_4_ < uVar21) {
                      FUN_1434d495c(&local_1b8,uVar36 & 0xffffffff);
                    }
                    local_1b8[lVar13 * 2] = local_178;
                    local_1b8[lVar13 * 2 + 1] = local_1c8;
                    if (bVar8 != 0) {
                      FUN_140325a06(local_268,&local_190,&local_178,0);
                    }
                  }
                  goto LAB_1434c73c0;
                }
                break;
              }
              iVar10 = *(int *)(lVar35 + 0x10 + lVar14 * 0x18);
            } while (iVar10 != -1);
          }
        }
        local_178 = (code *)0x0;
LAB_1434c73c0:
        FUN_147a733a8(&local_118,ppcVar27,&local_1c8);
      }
      else {
        cVar9 = FUN_1449e2a3e(pcVar19);
        if (cVar9 != '\0') {
          if ((char)pcVar19[0x61] < '\0') {
            (**(code **)(*(longlong *)pcVar19 + 0x2f8))(pcVar19);
          }
          ppcVar27 = &local_178;
          goto LAB_1434c73c0;
        }
        FUN_1412f3774(param_1[0x35],pcVar19,1);
      }
      FUN_14059e512(&local_c8);
    } while (local_a4 == '\0');
  }
  if (local_70 == '\x01') {
    FUN_14024445c(&uStack_c0);
  }
  FUN_147da993e(param_1[0x35]);
  lVar13 = param_1[0x1e];
  if (0 < (longlong)*(int *)(lVar13 + 0x78)) {
    lVar13 = (longlong)*(int *)(lVar13 + 0x78);
    do {
      lVar35 = *(longlong *)(*(longlong *)(param_1[0x1e] + 0x70) + -8 + lVar13 * 8);
      if (lVar35 != 0) {
        lVar14 = FUN_1414cbbb6();
        if (((*(int *)(lVar14 + 0x38) <= *(int *)(*(longlong *)(lVar35 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar35 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar14 + 0x38) * 8) == lVar14 + 0x30)) &&
           ((int)uStack_110 != local_e4)) {
          uVar36 = *(ulonglong *)(lVar35 + 0x68);
          uVar21 = ((uint)(uVar36 >> 0x14) & 0xffff ^ (uint)(uVar36 >> 4)) * -0x7a143595;
          uVar21 = (uVar21 >> 0xd ^ uVar21) * -0x3d4d51cb;
          puVar25 = local_d8;
          if (local_d8 == (undefined1 *)0x0) {
            puVar25 = local_e0;
          }
          for (iVar10 = *(int *)(puVar25 +
                                (ulonglong)(local_d0 - 1U & (uVar21 >> 0x10 ^ uVar21)) * 4);
              iVar10 != -1; iVar10 = *(int *)((longlong)iVar10 * 0x10 + local_118 + 8)) {
            if (*(ulonglong *)(local_118 + (longlong)iVar10 * 0x10) == uVar36) {
              FUN_147a4821c(lVar35,0);
              break;
            }
          }
        }
      }
      bVar39 = 1 < lVar13;
      lVar13 = lVar13 + -1;
    } while (bVar39);
    lVar13 = param_1[0x1e];
  }
  if (*(longlong *)(lVar13 + 0x98) == param_1[0x11e]) {
    *(undefined8 *)(lVar13 + 0x98) = 0;
  }
  FUN_147a73894(param_1 + 0x290,0);
  local_260 = param_1 + 0x133;
  FUN_145ad50ba(param_1[0x133],(int)param_1[0x134]);
  *(undefined4 *)(param_1 + 0x134) = 0;
  if (*(int *)((longlong)param_1 + 0x9a4) != 0) {
    FUN_147a7015a(local_260);
  }
  local_218 = param_1 + 0x29a;
  FUN_147a71870(local_218,0);
  local_268 = (longlong *)CONCAT71(local_268._1_7_,*(undefined1 *)((longlong)param_1 + 0x9aa));
  *(undefined1 *)((longlong)param_1 + 0x9aa) = 1;
  FUN_1405f0e9c(&local_c8,param_1[0x35],5);
  if (local_a4 == '\0') {
    do {
      uVar36 = 0;
      FUN_144750a86(local_98,&local_178,0,0);
      pcVar19 = local_178;
      iVar10 = iStack_170 + -1;
      if (iStack_170 == 0) {
        iVar10 = 0;
      }
      if (0 < iVar10) {
        pcVar16 = local_178;
        if (iStack_170 == 0) {
          pcVar16 = (code *)&DAT_149dfb77a;
        }
        lVar13 = 0;
        uVar36 = 0;
        do {
          uVar21 = ((uint)(0x19 < *(ushort *)(pcVar16 + lVar13 * 2) - 0x61) * 0x20 +
                   (uint)*(ushort *)(pcVar16 + lVar13 * 2)) - 0x20;
          uVar32 = (uint)(uVar36 >> 8) ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar36 ^ uVar21) & 0xff) * 4);
          uVar36 = (ulonglong)
                   (uVar32 >> 8 ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar32 & 0xff ^ uVar21 >> 8 & 0xff) * 4));
          lVar13 = lVar13 + 1;
        } while (iVar10 != (int)lVar13);
      }
      iVar10 = FUN_147a72fb2(param_1 + 0x125,uVar36);
      if (pcVar19 != (code *)0x0) {
        FUN_1400020a8(pcVar19);
      }
      plVar28 = local_270;
      if (iVar10 != -1) {
        FUN_1412f3774(param_1[0x35],local_98);
      }
      FUN_14059e512(&local_c8);
    } while (local_a4 == '\0');
  }
  if (local_70 == '\x01') {
    FUN_14024445c(&uStack_c0);
  }
  *(undefined1 *)((longlong)param_1 + 0x9aa) = local_268._0_1_;
  FUN_14164d430(param_1,0);
  FUN_147a491c6(param_1[0x1e]);
  (**(code **)(*(longlong *)param_1[0x1e] + 0x330))();
  FUN_14107e8f0(&DAT_14cb0d340,param_1[0x35]);
  plVar12 = local_250;
  plVar18 = DAT_14cb0d2b0;
  if (*DAT_14cad5dc0 != 0) {
    fVar40 = (float)(**(code **)(*DAT_14cb0d2b0 + 0x388))(DAT_14cb0d2b0,0);
    *(float *)(plVar18 + 0x1e4) = fVar40 + 1.0;
    *(undefined1 *)((longlong)plVar18 + 0xf24) = 1;
  }
  FUN_140810d00(&local_c8,0);
  iVar10 = (int)param_1[0x186] + -1;
  if ((int)param_1[0x186] == 0) {
    iVar10 = 0;
  }
  FUN_1402980a2(&local_a0,param_1[0x185],iVar10);
  uVar17 = FUN_145b3bbc8();
  local_2b8 = 0;
  uStack_2b0 = 0;
  local_2c0 = local_2c0 & 0xffffffffffffff00;
  local_2c8 = 0;
  plVar18 = (longlong *)FUN_147a6009f(DAT_14c951640,uVar17,0,0);
  if ((plVar18 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar18);
  }
  param_1[0x1e] = (longlong)plVar18;
  local_2c0 = local_2c0 & 0xffffffff00000000;
  local_2c8 = CONCAT44(local_2c8._4_4_,1000000);
  (**(code **)(*plVar18 + 0x350))(plVar18,param_1,2,&local_c8);
  FUN_147cdd174(plVar12,param_1[0x1e]);
  FUN_1463ecc48(param_1);
  lVar13 = param_1[0x152];
  if ((longlong)(int)lVar13 != 0) {
    lVar35 = param_1[0x151];
    lVar14 = 0;
    do {
      lVar37 = *(longlong *)(lVar35 + lVar14);
      if (lVar37 != param_1[0x11e]) {
        uVar17 = (**(code **)(*param_1 + 0x3b8))(param_1,param_1[0x1e]);
        FUN_147a62058(param_1,lVar37,uVar17);
      }
      lVar14 = lVar14 + 8;
    } while ((longlong)(int)lVar13 * 8 != lVar14);
  }
  lVar13 = param_1[0x37];
  if (param_1[0x11e] == 0) {
    uVar32 = 0;
    uVar21 = 0;
  }
  else {
    uVar32 = *(uint *)(param_1[0x11e] + 0xc);
    if ((int)uVar32 < DAT_14c9647dc) {
      lVar35 = (ulonglong)((uVar32 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar32 >> 0x10) * 8);
    }
    else {
      lVar35 = 0;
    }
    uVar21 = *(uint *)(lVar35 + 0x10);
    if (*(uint *)(lVar35 + 0x10) == 0) {
      LOCK();
      iVar10 = DAT_14c964868 + 1;
      UNLOCK();
      uVar30 = DAT_14c964868 + 1;
      bVar39 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar10;
      if (bVar39) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar30);
      }
      LOCK();
      uVar21 = *(uint *)(lVar35 + 0x10);
      bVar39 = uVar21 == 0;
      if (bVar39) {
        *(uint *)(lVar35 + 0x10) = uVar30;
        uVar21 = 0;
      }
      UNLOCK();
      if (bVar39) {
        uVar21 = uVar30;
      }
    }
  }
  if (*(int *)(lVar13 + 0x58) != *(int *)(lVar13 + 0x84)) {
    lVar35 = lVar13 + 0x88;
    if (*(longlong *)(lVar13 + 0x90) != 0) {
      lVar35 = *(longlong *)(lVar13 + 0x90);
    }
    iVar10 = *(int *)(lVar35 + (ulonglong)(*(int *)(lVar13 + 0x98) - 1U & (uVar21 ^ uVar32)) * 4);
    if (iVar10 != -1) {
      lVar35 = *(longlong *)(lVar13 + 0x50);
      do {
        local_178 = *(code **)(lVar35 + (longlong)iVar10 * 0x18);
        local_190 = (code *)CONCAT44(uVar21,uVar32);
        cVar9 = FUN_14472ecf8(&local_178,&local_190);
        if (cVar9 != '\0') break;
        lVar35 = *(longlong *)(lVar13 + 0x50);
        iVar10 = *(int *)(lVar35 + 0x10 + (longlong)iVar10 * 0x18);
      } while (iVar10 != -1);
    }
  }
  if (DAT_14c948aa0 != (longlong *)0x0) {
    local_178 = (code *)0x0;
    iStack_170 = 0;
    (**(code **)(*DAT_14c948aa0 + 0x60))();
  }
  FUN_147be8d12(param_1[0x37]);
  if ((longlong)(int)uStack_1b0 != 0) {
    puVar15 = local_1b8 + (longlong)(int)uStack_1b0 * 2;
    puVar26 = local_1b8;
    do {
      pcVar19 = (code *)FUN_147a73c8a(param_1[0x37],
                                      (int)((ulonglong)*puVar26 >> 0x20) * 0x17 + (int)*puVar26,
                                      puVar26);
      uVar21 = 0;
      iVar10 = 0;
      if (puVar26[1] != 0) {
        uVar21 = *(uint *)(puVar26[1] + 0xc);
        if ((int)uVar21 < DAT_14c9647dc) {
          lVar13 = (ulonglong)((uVar21 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar21 >> 0x10) * 8);
        }
        else {
          lVar13 = 0;
        }
        iVar10 = *(int *)(lVar13 + 0x10);
        if (*(int *)(lVar13 + 0x10) == 0) {
          LOCK();
          iVar22 = DAT_14c964868 + 1;
          UNLOCK();
          iVar10 = DAT_14c964868 + 1;
          bVar39 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar22;
          if (bVar39) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar10);
          }
          LOCK();
          iVar22 = *(int *)(lVar13 + 0x10);
          bVar39 = iVar22 == 0;
          if (bVar39) {
            *(int *)(lVar13 + 0x10) = iVar10;
            iVar22 = 0;
          }
          UNLOCK();
          if (!bVar39) {
            iVar10 = iVar22;
          }
        }
      }
      *(longlong *)pcVar19 = CONCAT44(iVar10,uVar21);
      pcVar19[0x28] = (code)((byte)pcVar19[0x28] | 1);
      iStack_170 = (int)puVar26;
      uStack_16c = (undefined4)((ulonglong)puVar26 >> 0x20);
      local_178 = pcVar19;
      FUN_140926be8(param_1[0x37] + 0x50,&local_190,&local_178,0);
      puVar26 = puVar26 + 2;
    } while (puVar26 != puVar15);
  }
  lVar13 = (**(code **)(*plVar28 + 0x30))(plVar28);
  if ((lVar13 == 0) || (lVar13 = (**(code **)(*plVar28 + 0x30))(plVar28), lVar13 == -1)) {
    FUN_145d323a0(param_1 + 0x2a6,0);
    local_178 = (code *)0x0;
    iStack_170 = 0;
    uStack_16c = 0;
    FUN_1434c2a1e(param_1,&local_178,0);
    *(undefined4 *)(param_1 + 0x195) = 0;
    *(undefined1 *)((longlong)param_1 + 0xcbe) = 0;
    if (*(longlong *)(local_230 + 0x10) == -1) {
      FUN_1434c2358(param_1);
      pcVar19 = local_178;
    }
    else {
      fVar40 = (float)*(longlong *)(local_230 + 0x10) / 1000.0;
      *(float *)(param_1 + 0x148) = fVar40;
      fVar41 = *(float *)((longlong)param_1 + 0xcac) + -0.01;
      uVar21 = -(uint)(fVar40 < fVar41);
      fVar40 = (float)(~uVar21 & (uint)fVar41 | (uint)(fVar40 + 0.0) & uVar21);
      if (fVar40 <= 0.0) {
        fVar40 = 0.0;
      }
      *(float *)(param_1 + 0x195) = fVar40;
      *(undefined1 *)(param_1 + 0x135) = 1;
      *(byte *)((longlong)param_1 + 0x9ab) = *(byte *)((longlong)param_1 + 0x9ab) | 2;
      pcVar19 = local_178;
    }
  }
  else {
    (**(code **)(*plVar28 + 0x1a0))(plVar28,0);
    local_268 = param_1 + 0x2a6;
    FUN_145d323a0(local_268,0);
    local_248 = param_1 + 0x12f;
    FUN_145ad581e(param_1[0x12f],(int)param_1[0x130]);
    *(undefined4 *)(param_1 + 0x130) = 0;
    if (*(int *)((longlong)param_1 + 0x984) != 0) {
      FUN_147a725b4();
    }
    local_1c8 = (code *)0x0;
    uStack_1c0 = 0;
    local_220 = param_1 + 0x26d;
    local_1d8 = 0;
    uStack_1d0 = 0;
    do {
      if (local_271 == '\0') {
        lVar13 = 0;
      }
      else {
        uVar36 = (ulonglong)local_178 >> 0x20;
        local_178 = (code *)((ulonglong)local_178 & 0xffffffff00000000);
        puVar6 = (ulonglong *)plVar28[1];
        puVar7 = (undefined4 *)*puVar6 + 1;
        if ((undefined4 *)puVar6[1] < puVar7) {
          if ((*(byte *)((longlong)plVar28 + 0x2a) & 2) == 0) {
            (**(code **)(*plVar28 + 0x170))(plVar28,&local_178,4);
          }
          else {
            FUN_14572512c(plVar28,&local_178);
          }
        }
        else {
          local_178 = (code *)CONCAT44((int)uVar36,*(undefined4 *)*puVar6);
          *puVar6 = (ulonglong)puVar7;
        }
        lVar13 = (**(code **)(*plVar28 + 0x28))(plVar28);
        lVar13 = ((ulonglong)local_178 & 0xffffffff) + lVar13;
      }
      lVar35 = param_1[0x163];
      param_1[0x163] = lVar13;
      if (*(char *)((longlong)param_1 + 0xcbf) == '\x01') {
        local_178 = (code *)0x0;
        FUN_1408383eb(plVar28,&local_178);
      }
      local_1dc = 0xffffffff;
      puVar6 = (ulonglong *)plVar28[1];
      puVar7 = (undefined4 *)*puVar6 + 1;
      if ((undefined4 *)puVar6[1] < puVar7) {
        if ((*(byte *)((longlong)plVar28 + 0x2a) & 2) == 0) {
          (**(code **)(*plVar28 + 0x170))(plVar28,&local_1dc,4);
        }
        else {
          FUN_14572512c(plVar28,&local_1dc);
        }
      }
      else {
        local_1dc = *(undefined4 *)*puVar6;
        *puVar6 = (ulonglong)puVar7;
      }
      plVar18 = local_268;
      local_228 = lVar35;
      if (local_271 == '\0') {
        FUN_145d323a0(local_268,0);
        FUN_147cdfde0(local_250,param_1[0x1e],plVar28,plVar18);
      }
      else {
        _Dst = (void *)FUN_14001cc68(0x100);
        memset(_Dst,0,0x100);
        FUN_145c3c018(_Dst);
        iVar10 = (int)param_1[0x130];
        lVar13 = (longlong)iVar10;
        *(uint *)(param_1 + 0x130) = iVar10 + 1U;
        if (*(uint *)((longlong)param_1 + 0x984) < iVar10 + 1U) {
          FUN_147a725e4(local_248,iVar10);
        }
        lVar35 = param_1[0x12f];
        *(void **)(lVar35 + lVar13 * 8) = _Dst;
        FUN_147cdfde0(local_250,param_1[0x1e],local_270,(longlong)_Dst + 0x10);
        FUN_146b6f6ea(local_268,*(longlong *)(lVar35 + lVar13 * 8) + 0x10);
        plVar28 = local_270;
        FUN_147a7266a(local_270,*(longlong *)(lVar35 + lVar13 * 8) + 0x60);
        FUN_147a72934(plVar28,*(longlong *)(lVar35 + lVar13 * 8) + 0xb0);
      }
      local_1e0 = 0;
      puVar6 = (ulonglong *)plVar28[1];
      piVar1 = (int *)*puVar6 + 1;
      if ((int *)puVar6[1] < piVar1) {
        if ((*(byte *)((longlong)plVar28 + 0x2a) & 2) == 0) {
          (**(code **)(*plVar28 + 0x170))(plVar28,&local_1e0,4);
        }
        else {
          FUN_14572512c(plVar28,&local_1e0);
        }
      }
      else {
        local_1e0 = *(int *)*puVar6;
        *puVar6 = (ulonglong)piVar1;
      }
      if (0 < local_1e0) {
        iVar10 = 0;
        do {
          local_1e8 = 0;
          (**(code **)(*plVar28 + 400))(plVar28,&local_1e8);
          local_158 = 0;
          local_178 = (code *)0x0;
          iStack_170 = 0;
          uStack_16c = 0;
          local_168 = 0;
          uStack_164 = 0;
          local_160[0] = 0;
          local_150 = local_150 & 0xe0 | 0x10;
          (**(code **)(*plVar28 + 400))(plVar28,&iStack_170);
          local_1f8 = (code *)0x0;
          ppcStack_1f0 = (code **)0x0;
          if ((int)local_258 < 0xf) {
            FUN_14021219d(plVar28,&local_1f8);
LAB_1434c7fd6:
            (**(code **)(*DAT_14cb0d2b0 + 0x480))(DAT_14cb0d2b0,param_1[0x1e],&local_1f8,1);
            pcVar19 = (code *)&DAT_149dfb77a;
            if ((int)ppcStack_1f0 != 0) {
              pcVar19 = local_1f8;
            }
            FUN_1446f470e(&local_190,pcVar19,1);
            local_168 = SUB84(local_190,0);
            uStack_164 = (undefined4)((ulonglong)local_190 >> 0x20);
            if ((int)local_258 < 0x10) {
              puVar7 = *(undefined4 **)plVar28[1];
              if ((undefined4 *)((undefined8 *)plVar28[1])[1] < puVar7 + 1) {
                if ((*(byte *)((longlong)plVar28 + 0x2a) & 2) == 0) {
                  (**(code **)(*plVar28 + 0x170))(plVar28,local_160,4);
                }
                else {
                  FUN_14572512c(plVar28,local_160);
                }
              }
              else {
                local_160[0] = *puVar7;
                *(longlong *)plVar28[1] = *(longlong *)plVar28[1] + 4;
              }
            }
            local_1f9 = 0;
            puVar6 = (ulonglong *)plVar28[1];
            pbVar2 = (byte *)*puVar6 + 1;
            if ((byte *)puVar6[1] < pbVar2) {
              (**(code **)(*plVar28 + 0x170))(plVar28,&local_1f9,1);
            }
            else {
              local_1f9 = *(byte *)*puVar6;
              *puVar6 = (ulonglong)pbVar2;
            }
            local_150 = local_1f9 & 3 | local_150 & 0xfc;
            ppcStack_188 = &local_178;
            local_190 = (code *)&local_1e8;
            FUN_1409190e0(param_1[0x37],&local_17c,&local_190,0);
            bVar34 = *(byte *)((longlong)plVar28 + 0x29) >> 1 & 1;
          }
          else {
            local_1f9 = 0;
            puVar6 = (ulonglong *)plVar28[1];
            pbVar2 = (byte *)*puVar6 + 1;
            if ((byte *)puVar6[1] < pbVar2) {
              (**(code **)(*plVar28 + 0x170))(plVar28,&local_1f9,1);
            }
            else {
              local_1f9 = *(byte *)*puVar6;
              *puVar6 = (ulonglong)pbVar2;
            }
            if (local_1f9 == 1) {
              FUN_14021219d(plVar28,&local_1f8);
              pcVar19 = (code *)&DAT_149dfb77a;
              if ((int)ppcStack_1f0 != 0) {
                pcVar19 = local_1f8;
              }
              FUN_1446f470e(&local_190,pcVar19,1);
              uVar36 = uStack_1d0;
              lVar13 = (longlong)(int)uStack_1d0;
              uVar21 = (int)uStack_1d0 + 1;
              uStack_1d0 = CONCAT44(uStack_1d0._4_4_,uVar21);
              if (uStack_1d0._4_4_ < uVar21) {
                FUN_1446f84a2(&local_1d8,uVar36 & 0xffffffff);
              }
              *(code **)(local_1d8 + lVar13 * 8) = local_190;
              goto LAB_1434c7fd6;
            }
            local_17c = 0;
            (**(code **)(*plVar28 + 0x188))(plVar28,&local_17c);
            if ((-1 < (longlong)local_17c) && (local_17c < (int)uStack_1d0)) {
              FUN_1400021e4((longlong)local_17c * 8 + local_1d8,&local_190);
              if (local_1f8 != (code *)0x0) {
                FUN_1400020a8();
              }
              local_1f8 = local_190;
              ppcStack_1f0 = ppcStack_188;
              goto LAB_1434c7fd6;
            }
            FUN_14572541c(plVar28);
            bVar34 = 0x14;
          }
          if (local_1f8 != (code *)0x0) {
            FUN_1400020a8();
          }
          if (bVar34 != 0) {
            if (bVar34 != 0x14) {
              param_1[0x163] = local_228;
              goto LAB_1434c859a;
            }
            break;
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < local_1e0);
      }
      if (local_271 == '\0') {
        FUN_1435afe66(*(undefined8 *)(param_1[0x1e] + 0x68),plVar28,1);
        local_2c0 = param_1[0x163];
        local_2b8 = 0;
        local_2c8 = local_2c8 & 0xffffffffffffff00;
        FUN_14368ad3e(local_250,param_1[0x1e],plVar28);
      }
      else {
        FUN_147be7e64(*(undefined8 *)(param_1[0x1e] + 0x68),plVar28);
        iVar10 = (int)param_1[0x134];
        *(undefined4 *)(param_1 + 0x26e) = 0;
        if (*(int *)((longlong)param_1 + 0x1374) < 0) {
          FUN_14481578e(local_220,0);
        }
        local_2c0 = param_1[0x163];
        local_2b8 = 0;
        local_2c8 = local_2c8 & 0xffffffffffffff00;
        FUN_14368ad3e(local_250,param_1[0x1e],plVar28);
        uVar36 = uStack_1c0;
        lVar13 = param_1[0x134];
        if (iVar10 < (int)lVar13) {
          lVar35 = (longlong)(int)uStack_1c0;
          uVar21 = (int)uStack_1c0 + 1;
          uStack_1c0 = CONCAT44(uStack_1c0._4_4_,uVar21);
          local_23c = iVar10;
          if (uStack_1c0._4_4_ < uVar21) {
            FUN_147a72f2c(&local_1c8,uVar36 & 0xffffffff);
          }
          *(int *)(local_1c8 + lVar35 * 8) = local_23c;
          *(int *)(local_1c8 + lVar35 * 8 + 4) = (int)lVar13 + -1;
        }
      }
      param_1[0x163] = local_228;
      if ((*(byte *)((longlong)plVar28 + 0x29) & 2) != 0) break;
      lVar13 = (**(code **)(*plVar28 + 0x28))(plVar28);
      lVar35 = (**(code **)(*plVar28 + 0x30))();
    } while (lVar13 < lVar35);
    if (param_1[0x35] != 0) {
      local_258 = (uint *)CONCAT71(local_258._1_7_,*(undefined1 *)((longlong)param_1 + 0x9aa));
      *(undefined1 *)((longlong)param_1 + 0x9aa) = 1;
      FUN_1405f0e9c(&local_178,param_1[0x35],5);
      if (local_158._4_1_ == '\0') {
        do {
          lVar13 = local_148;
          FUN_144750a86(local_148,&local_190,0);
          iVar10 = (int)ppcStack_188 + -1;
          if ((int)ppcStack_188 == 0) {
            iVar10 = 0;
          }
          uVar21 = 0;
          if (0 < iVar10) {
            pcVar19 = (code *)&DAT_149dfb77a;
            if ((int)ppcStack_188 != 0) {
              pcVar19 = local_190;
            }
            lVar35 = 0;
            uVar21 = 0;
            do {
              uVar32 = ((uint)(0x19 < *(ushort *)(pcVar19 + lVar35 * 2) - 0x61) * 0x20 +
                       (uint)*(ushort *)(pcVar19 + lVar35 * 2)) - 0x20;
              uVar21 = uVar21 >> 8 ^
                       *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar21 ^ uVar32) & 0xff) * 4);
              uVar21 = uVar21 >> 8 ^
                       *(uint *)(&DAT_14c75d150 +
                                (ulonglong)(uVar21 & 0xff ^ uVar32 >> 8 & 0xff) * 4);
              lVar35 = lVar35 + 1;
            } while (iVar10 != (int)lVar35);
          }
          if ((int)param_1[0x2a7] != *(int *)((longlong)param_1 + 0x1564)) {
            plVar28 = (longlong *)param_1[0x2ae];
            if ((longlong *)param_1[0x2ae] == (longlong *)0x0) {
              plVar28 = param_1 + 0x2ad;
            }
            iVar10 = *(int *)((longlong)plVar28 + (ulonglong)((int)param_1[0x2af] - 1U & uVar21) * 4
                             );
            if (iVar10 != -1) {
              lVar35 = *local_268;
LAB_1434c840d:
              lVar14 = (longlong)iVar10;
              iVar10 = *(int *)(lVar35 + 8 + lVar14 * 0x18);
              if (iVar10 == (int)ppcStack_188) {
                if (1 < (int)ppcStack_188) {
                  lVar37 = 0;
                  do {
                    uVar4 = *(ushort *)(*(longlong *)(lVar35 + lVar14 * 0x18) + lVar37);
                    uVar5 = *(ushort *)(local_190 + lVar37);
                    if (uVar4 == uVar5) {
                      if (uVar4 == 0) break;
                    }
                    else {
                      if (0x7f < (uVar5 | uVar4)) {
                        iVar10 = (uint)uVar4 - (uint)uVar5;
                        goto LAB_1434c8490;
                      }
                      if ((&DAT_149e05da0)[uVar4] != (&DAT_149e05da0)[(uint)uVar5])
                      goto code_r0x0001434c848d;
                    }
                    lVar37 = lVar37 + 2;
                  } while( true );
                }
                goto LAB_1434c849c;
              }
              if (iVar10 + (int)ppcStack_188 == 1) goto LAB_1434c849c;
              goto LAB_1434c8427;
            }
          }
LAB_1434c84c7:
          if (local_190 != (code *)0x0) {
            FUN_1400020a8();
          }
          FUN_14059e512(&local_178);
        } while (local_158._4_1_ == '\0');
      }
      if (local_120 == '\x01') {
        FUN_14024445c(&iStack_170);
      }
      local_178 = (code *)0x0;
      iStack_170 = 0;
      uStack_16c = 0;
      FUN_1434c2a1e(param_1,&local_178,0);
      if (local_178 != (code *)0x0) {
        FUN_1400020a8();
      }
      *(undefined1 *)((longlong)param_1 + 0x9aa) = (undefined1)local_258;
    }
    fVar40 = 0.0;
    if (0 < (longlong)(int)param_1[0x134]) {
      fVar40 = *(float *)(*local_260 + -0x10 + (longlong)(int)param_1[0x134] * 0x20);
    }
    *(float *)(param_1 + 0x195) = fVar40;
    if (*(longlong *)(local_230 + 0x10) == -1) {
      FUN_1434c2358(param_1);
    }
    else {
      fVar41 = (float)*(longlong *)(local_230 + 0x10) / 1000.0;
      *(float *)(param_1 + 0x148) = fVar41;
      fVar42 = *(float *)((longlong)param_1 + 0xcac) + -0.01;
      fVar40 = fVar40 + fVar41;
      if (fVar42 <= fVar40) {
        fVar40 = fVar42;
      }
      if (fVar40 <= 0.0) {
        fVar40 = 0.0;
      }
      *(float *)(param_1 + 0x195) = fVar40;
      *(undefined1 *)(param_1 + 0x135) = 1;
      *(byte *)((longlong)param_1 + 0x9ab) = *(byte *)((longlong)param_1 + 0x9ab) | 2;
    }
    if (local_271 == '\0') {
      lVar13 = param_1[0x133];
      lVar35 = param_1[0x134];
      uVar36 = (ulonglong)(int)lVar35;
      if (0 < (longlong)uVar36) {
        lVar37 = uVar36 << 5;
        lVar14 = lVar13;
        do {
          FUN_1434c1fb4(param_1,lVar14);
          lVar14 = lVar14 + 0x20;
          lVar37 = lVar37 + -0x20;
        } while (lVar37 != 0);
        lVar14 = lVar13 + 0x10;
        lVar13 = param_1[0x133];
        *(undefined4 *)(param_1 + 0x15f) =
             *(undefined4 *)(lVar14 + (ulonglong)((int)lVar35 - 1) * 0x20);
        uVar36 = (ulonglong)*(uint *)(param_1 + 0x134);
      }
      uVar36 = uVar36 & 0xffffffff;
    }
    else {
      if (param_1[0x1e] == 0) {
LAB_1434c8722:
        lVar14 = 0;
      }
      else {
        lVar35 = FUN_145b3bbc8();
        lVar13 = param_1[0x1e];
        if (lVar13 == 0) goto LAB_1434c8722;
        lVar14 = 0;
        if ((lVar35 != 0) && (lVar37 = *(longlong *)(lVar13 + 0x10), lVar37 != 0)) {
          if (*(int *)(lVar37 + 0x38) < *(int *)(lVar35 + 0x38)) goto LAB_1434c8722;
          lVar14 = 0;
          if (*(longlong *)(*(longlong *)(lVar37 + 0x30) + (longlong)*(int *)(lVar35 + 0x38) * 8) ==
              lVar35 + 0x30) {
            lVar14 = lVar13;
          }
        }
      }
      if (0 < (int)uStack_1c0) {
        plVar28 = (longlong *)(lVar14 + 0x1e20);
        plVar18 = (longlong *)0x0;
        local_268 = plVar28;
        do {
          local_270 = plVar18;
          if ((lVar14 != 0) && ((longlong)plVar18 < (longlong)(int)param_1[0x130])) {
            lVar13 = *(longlong *)(*local_248 + (longlong)plVar18 * 8);
            local_258 = (uint *)(lVar13 + 0xc0);
            iVar10 = *(int *)(lVar13 + 0xd8);
            if (iVar10 == 0) {
              uVar36 = 1;
              uVar38 = 0;
              iVar29 = 0;
              iVar22 = 0;
            }
            else {
              puVar20 = *(uint **)(lVar13 + 0xd0);
              if (*(uint **)(lVar13 + 0xd0) == (uint *)0x0) {
                puVar20 = local_258;
              }
              uVar21 = *puVar20;
              if (uVar21 == 0) {
                iVar22 = iVar10 + 0x1e;
                if (-1 < iVar10 + -1) {
                  iVar22 = iVar10 + -1;
                }
                uVar38 = 0;
                uVar36 = (ulonglong)(uint)(iVar22 >> 5);
                if (iVar22 >> 5 < 1) {
                  uVar36 = uVar38;
                }
                iVar29 = 0;
                do {
                  if (uVar36 == uVar38) goto LAB_1434c88cc;
                  iVar29 = iVar29 + 0x20;
                  uVar21 = puVar20[uVar38 + 1];
                  uVar38 = uVar38 + 1;
                } while (uVar21 == 0);
              }
              else {
                uVar38 = 0;
                iVar29 = 0;
              }
              uVar36 = (ulonglong)(-uVar21 & uVar21);
              uVar3 = uVar36 * 2 + 1;
              lVar35 = 0x3f;
              if (uVar3 != 0) {
                for (; uVar3 >> lVar35 == 0; lVar35 = lVar35 + -1) {
                }
              }
              iVar22 = (iVar29 - ((uint)lVar35 ^ 0x3f)) + 0x3e;
              if (iVar10 <= iVar22) {
                iVar22 = iVar10;
              }
            }
            if (iVar22 != iVar10) {
              uVar21 = 0xffffffff;
              iVar11 = iVar10;
              do {
                if (*(int *)(lVar14 + 0x1df0) != *(int *)(lVar14 + 0x1e1c)) {
                  plVar12 = (longlong *)((longlong)iVar22 * 0x18 + *(longlong *)(lVar13 + 0xb0));
                  lVar35 = *plVar12;
                  plVar18 = *(longlong **)(lVar14 + 0x1e28);
                  if (*(longlong **)(lVar14 + 0x1e28) == (longlong *)0x0) {
                    plVar18 = plVar28;
                  }
                  iVar22 = *(int *)((longlong)plVar18 +
                                   (ulonglong)
                                   (*(int *)(lVar14 + 0x1e30) - 1U &
                                   (int)lVar35 + (int)((ulonglong)lVar35 >> 0x20) * 0x17) * 4);
                  if (iVar22 != -1) {
                    do {
                      plVar18 = (longlong *)
                                (*(longlong *)(lVar14 + 0x1de8) + (longlong)iVar22 * 0x18);
                      if (*plVar18 == lVar35) {
                        if ((plVar18 != (longlong *)0x0) && (plVar18[1] != 0)) {
                          FUN_140cef0f4(plVar18[1],CONCAT71((int7)((ulonglong)plVar12 >> 8),1),
                                        CONCAT71((int7)((ulonglong)*(longlong *)(lVar14 + 0x1de8) >>
                                                       8),(char)plVar12[1]));
                          iVar11 = *(int *)(lVar13 + 0xd8);
                          plVar28 = local_268;
                        }
                        break;
                      }
                      iVar22 = (int)plVar18[2];
                    } while (iVar22 != -1);
                  }
                }
                uVar21 = uVar21 & ~(uint)uVar36;
                puVar20 = *(uint **)(lVar13 + 0xd0);
                if (*(uint **)(lVar13 + 0xd0) == (uint *)0x0) {
                  puVar20 = local_258;
                }
                iVar22 = (int)uVar38;
                lVar35 = (longlong)iVar22;
                uVar32 = puVar20[lVar35] & uVar21;
                if (uVar32 == 0) {
                  iVar23 = iVar11 + 0x1e;
                  if (-1 < iVar11 + -1) {
                    iVar23 = iVar11 + -1;
                  }
                  iVar23 = iVar23 >> 5;
                  iVar29 = iVar29 + 0x20;
                  iVar24 = iVar23;
                  if (iVar23 < iVar22) {
                    iVar24 = iVar22;
                  }
                  if (iVar22 < iVar23) {
                    lVar37 = 0;
                    do {
                      uVar32 = puVar20[lVar35 + lVar37 + 1];
                      if (uVar32 != 0) {
                        uVar38 = (ulonglong)(iVar22 + (int)lVar37 + 1);
                        uVar21 = 0xffffffff;
                        goto LAB_1434c8a89;
                      }
                      iVar29 = iVar29 + 0x20;
                      lVar37 = lVar37 + 1;
                    } while (iVar24 - lVar35 != lVar37);
                    uVar21 = 0xffffffff;
                    iVar22 = iVar24;
                  }
                  uVar38 = (ulonglong)(iVar22 + 1);
                  plVar28 = local_268;
                  iVar22 = iVar11;
                }
                else {
LAB_1434c8a89:
                  uVar36 = (ulonglong)(-uVar32 & uVar32);
                  uVar3 = uVar36 * 2 + 1;
                  lVar35 = 0x3f;
                  if (uVar3 != 0) {
                    for (; uVar3 >> lVar35 == 0; lVar35 = lVar35 + -1) {
                    }
                  }
                  iVar22 = (iVar29 - ((uint)lVar35 ^ 0x3f)) + 0x3e;
                  if (iVar11 <= iVar22) {
                    iVar22 = iVar11;
                  }
                }
              } while (iVar22 != iVar10);
            }
          }
LAB_1434c88cc:
          plVar18 = local_270;
          uVar21 = *(int *)(local_1c8 + (longlong)local_270 * 8 + 4) -
                   *(int *)(local_1c8 + (longlong)local_270 * 8);
          if (-1 < (int)uVar21) {
            lVar35 = (longlong)*(int *)(local_1c8 + (longlong)local_270 * 8) * 0x20 + *local_260;
            lVar13 = (ulonglong)uVar21 * 0x20;
            if (lVar35 != lVar35 + lVar13 + 0x20) {
              lVar37 = lVar13 + 0x20;
              lVar31 = lVar35;
              do {
                FUN_1434c1fb4(param_1,lVar31);
                lVar31 = lVar31 + 0x20;
                lVar37 = lVar37 + -0x20;
              } while (lVar37 != 0);
            }
            *(undefined4 *)(param_1 + 0x15f) = *(undefined4 *)(lVar35 + 0x10 + lVar13);
            plVar28 = local_268;
          }
          plVar18 = (longlong *)((longlong)plVar18 + 1);
        } while ((longlong)plVar18 < (longlong)(int)uStack_1c0);
      }
      uVar36 = (ulonglong)*(uint *)(param_1 + 0x134);
      lVar13 = param_1[0x133];
    }
    FUN_145ad50ba(lVar13,uVar36);
    *(undefined4 *)(param_1 + 0x134) = 0;
    if (*(int *)((longlong)param_1 + 0x9a4) != 0) {
      FUN_147a7015a(local_260);
    }
    FUN_147a71870(local_218,0);
    *(undefined1 *)((longlong)param_1 + 0xcbe) = 0;
    if ((param_1[0x35] != 0) && (lVar13 = *(longlong *)(param_1[0x35] + 0x178), lVar13 != 0)) {
      param_1[0x147] = *(longlong *)(lVar13 + 0x3c0);
    }
    if (((param_1[0x11e] != 0) && (local_1a0 != 0)) &&
       (lVar13 = FUN_140634914(param_1[0x37],&local_1a0,0), lVar13 != 0)) {
      if (DAT_14cac9ca8 == 0) {
        local_178 = FUN_141030f22;
        local_280 = FUN_14081d0ea;
        local_288 = FUN_14081d0ea;
        local_290 = &local_178;
        local_298 = &LAB_1478c0a72;
        local_2a0 = &LAB_1417b2375;
        local_2a8 = L"Engine";
        uStack_2b0 = 0x1000000000;
        local_2b8 = CONCAT44(local_2b8._4_4_,0x10000004);
        local_2c0 = CONCAT44(local_2c0._4_4_,8);
        local_2c8 = CONCAT44(local_2c8._4_4_,0x390);
        FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
      }
      if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(lVar13 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) {
        local_20c = 0;
        local_208 = 1;
        local_204 = 0x40000000;
        local_200 = local_200 & 0xfe;
        (**(code **)(*(longlong *)param_1[0x11e] + 0xe38))((longlong *)param_1[0x11e],lVar13);
      }
    }
LAB_1434c859a:
    pcVar19 = local_1c8;
    if (local_1d8 != 0) {
      FUN_1400020a8();
      pcVar19 = local_1c8;
    }
  }
  if (pcVar19 != (code *)0x0) {
    FUN_1400020a8();
  }
  if (CONCAT71(uStack_6f,local_70) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_80,local_78);
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  if (local_a0 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if (local_c8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  local_d0 = 0;
  if (local_d8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_147a7331a(&local_118);
  puVar26 = local_1b8;
LAB_1434c866c:
  if (puVar26 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_2e8) == DAT_14c707940) {
    return local_238 == local_234;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
code_r0x0001434c848d:
  iVar10 = (uint)(byte)(&DAT_149e05da0)[uVar4] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar5];
LAB_1434c8490:
  if (iVar10 == 0) {
LAB_1434c849c:
    if (-1 < *(char *)(lVar13 + 0x61)) {
      (**(code **)(*param_1 + 0x4b0))(param_1,lVar13);
      FUN_1412f3774(param_1[0x35],lVar13);
    }
    goto LAB_1434c84c7;
  }
LAB_1434c8427:
  iVar10 = *(int *)(lVar35 + 0x10 + lVar14 * 0x18);
  if (iVar10 == -1) goto LAB_1434c84c7;
  goto LAB_1434c840d;
}



// FUNCTION 1434c8d9a FUN_1434c8d9a body=216 status=ok
// SIG undefined FUN_1434c8d9a(void)

ulonglong FUN_1434c8d9a(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  
  if ((((*(int *)(param_1 + 0x100) < 1) || (**(longlong **)(param_1 + 0xf8) == 0)) ||
      (*(int *)(**(longlong **)(param_1 + 0xf8) + 0x134) == 1)) ||
     (uVar4 = (ulonglong)(int)param_2[1], uVar4 == 0)) {
    uVar4 = 0;
  }
  else {
    lVar3 = *param_2;
    lVar7 = uVar4 * 0x38;
    lVar6 = 0;
    uVar9 = 0;
    do {
      iVar1 = *(int *)(lVar3 + 4 + lVar6);
      uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
      if (((((iVar1 != 0) && (uVar2 = *(uint *)(lVar3 + lVar6), -1 < (int)uVar2)) &&
           (((int)uVar2 < DAT_14c9647dc &&
            ((plVar8 = (longlong *)
                       ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
             plVar8 != (longlong *)0x0 && ((int)plVar8[2] == iVar1)))))) &&
          ((*(uint *)(plVar8 + 1) & 0x10200000) == 0)) && (*plVar8 != 0)) {
        uVar5 = FUN_147ce2636(*(undefined8 *)(lVar3 + 8 + lVar6),0,*plVar8,
                              *(undefined8 *)(lVar3 + 0x18 + lVar6),2);
        uVar4 = CONCAT71((int7)((ulonglong)uVar5 >> 8),(byte)uVar5 | (byte)uVar9);
      }
      lVar6 = lVar6 + 0x38;
      uVar9 = uVar4 & 0xffffffff;
    } while (lVar7 - lVar6 != 0);
  }
  return uVar4 & 0xffffffffffffff01;
}



// FUNCTION 1434c8e72 FUN_1434c8e72 body=59 status=ok
// SIG undefined FUN_1434c8e72(void)

void FUN_1434c8e72(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14cad6f08;
  if (DAT_14cad6f08 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14cad6f08 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001434c8ea2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1434c8eae FUN_1434c8eae body=241 status=ok
// SIG undefined FUN_1434c8eae(void)

void FUN_1434c8eae(longlong param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = param_3 + 7U;
  if ((int)(param_3 + 7U) < 0) {
    uVar3 = param_3 + 0xeU;
  }
  if ((0xe < param_3 + 0xeU) && (lVar4 = *(longlong *)(param_1 + 0x58), lVar4 != 0)) {
    if (0x800 < (uint)((int)uVar3 >> 3)) {
      FUN_140033559(".\\Runtime/Engine/Private/DemoNetDriver.cpp",0x12f6,
                    L"UDemoNetConnection::LowLevelSend: CountBytes > MAX_DEMO_READ_WRITE_BUFFER.");
    }
    lVar1 = lVar4 + (ulonglong)(*(char *)(param_1 + 0x16c0) != '\0') * 0x10;
    plVar5 = (longlong *)(lVar1 + 0x1248);
    iVar2 = *(int *)(lVar1 + 0x1250);
    *(uint *)(lVar1 + 0x1250) = iVar2 + 1U;
    if (*(uint *)(lVar1 + 0x1254) < iVar2 + 1U) {
      FUN_147a73f5a(plVar5,iVar2);
    }
    FUN_147a73ef2((longlong)iVar2 * 0x28 + *plVar5,param_2,param_3,param_4);
    if (*(longlong *)(param_1 + 0x1d40) != 0) {
      lVar4 = FUN_147a6176e(lVar4 + 0xb40);
      *(int *)(*plVar5 + 0x24 + (longlong)iVar2 * 0x28) = *(int *)(lVar4 + 0x10) + 1;
    }
  }
  return;
}



// FUNCTION 1434c8fa8 FUN_1434c8fa8 body=1011 status=ok
// SIG undefined FUN_1434c8fa8(void)

void FUN_1434c8fa8(longlong param_1,ulonglong param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  bool bVar12;
  bool bVar13;
  undefined1 auStack_88 [39];
  byte local_61;
  longlong local_60;
  ulonglong local_58;
  ulonglong *local_50;
  ulonglong local_48;
  
  bVar3 = (byte)param_3;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(int *)(param_1 + 0x100) < 1) || (**(longlong **)(param_1 + 0xf8) == 0)) {
    bVar12 = false;
  }
  else {
    bVar12 = *(int *)(**(longlong **)(param_1 + 0xf8) + 0x134) != 1;
  }
  local_60 = param_1;
  local_61 = FUN_1449e2a3e(param_2);
  if ((((local_61 == 0) && (!bVar12)) && (*(char *)(param_2 + 0x61) < '\0')) && (bVar3 == 0)) {
    lVar1 = *(longlong *)(local_60 + 0x1b8);
    if (param_2 == 0) {
      uVar11 = 0;
      uVar5 = 0;
    }
    else {
      uVar5 = *(uint *)(param_2 + 0xc);
      uVar11 = (ulonglong)uVar5;
      if ((int)uVar5 < DAT_14c9647dc) {
        lVar10 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
      }
      else {
        lVar10 = 0;
      }
      uVar5 = *(uint *)(lVar10 + 0x10);
      if (*(uint *)(lVar10 + 0x10) == 0) {
        LOCK();
        iVar6 = DAT_14c964868 + 1;
        UNLOCK();
        uVar9 = DAT_14c964868 + 1;
        bVar13 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar6;
        if (bVar13) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar9);
        }
        LOCK();
        uVar5 = *(uint *)(lVar10 + 0x10);
        bVar13 = uVar5 == 0;
        if (bVar13) {
          *(uint *)(lVar10 + 0x10) = uVar9;
          uVar5 = 0;
        }
        UNLOCK();
        if (bVar13) {
          uVar5 = uVar9;
        }
      }
    }
    if (*(int *)(lVar1 + 0x58) != *(int *)(lVar1 + 0x84)) {
      lVar10 = lVar1 + 0x88;
      if (*(longlong *)(lVar1 + 0x90) != 0) {
        lVar10 = *(longlong *)(lVar1 + 0x90);
      }
      iVar6 = *(int *)(lVar10 + (ulonglong)(*(int *)(lVar1 + 0x98) - 1U & (uVar5 ^ (uint)uVar11)) *
                                4);
      if (iVar6 != -1) {
        lVar10 = *(longlong *)(lVar1 + 0x50);
        do {
          local_50 = *(ulonglong **)(lVar10 + (longlong)iVar6 * 0x18);
          local_58 = uVar11 | (ulonglong)uVar5 << 0x20;
          cVar4 = FUN_14472ecf8(&local_50,&local_58);
          if (cVar4 != '\0') break;
          lVar10 = *(longlong *)(lVar1 + 0x50);
          iVar6 = *(int *)(lVar10 + 0x10 + (longlong)iVar6 * 0x18);
        } while (iVar6 != -1);
      }
    }
  }
  lVar1 = local_60;
  if (bVar12) {
    if ((local_61 & bVar3) == 1) {
      plVar2 = (longlong *)**(longlong **)(local_60 + 0xf8);
      if (plVar2 != (longlong *)0x0) {
        if ((*(byte *)(param_2 + 0x60) & 1) != 0) {
          local_58 = param_2;
          if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(param_2);
          }
          local_50 = &local_58;
          FUN_14111a8f2(plVar2 + 0x10);
        }
        if (param_2 == 0) {
          uVar9 = 0;
          uVar5 = 0;
        }
        else {
          uVar9 = *(uint *)(param_2 + 0xc);
          if ((int)uVar9 < DAT_14c9647dc) {
            lVar10 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
          }
          else {
            lVar10 = 0;
          }
          uVar5 = *(uint *)(lVar10 + 0x10);
          if (*(uint *)(lVar10 + 0x10) == 0) {
            LOCK();
            iVar6 = DAT_14c964868 + 1;
            UNLOCK();
            uVar8 = DAT_14c964868 + 1;
            bVar12 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar6;
            if (bVar12) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,uVar8);
            }
            LOCK();
            uVar5 = *(uint *)(lVar10 + 0x10);
            bVar12 = uVar5 == 0;
            if (bVar12) {
              *(uint *)(lVar10 + 0x10) = uVar8;
              uVar5 = 0;
            }
            UNLOCK();
            if (bVar12) {
              uVar5 = uVar8;
            }
          }
        }
        if ((int)plVar2[0x28c] != *(int *)((longlong)plVar2 + 0x148c)) {
          plVar7 = plVar2 + 0x292;
          if ((longlong *)plVar2[0x293] != (longlong *)0x0) {
            plVar7 = (longlong *)plVar2[0x293];
          }
          iVar6 = *(int *)((longlong)plVar7 +
                          (ulonglong)((int)plVar2[0x294] - 1U & (uVar5 ^ uVar9)) * 4);
          if (iVar6 != -1) {
            do {
              plVar7 = (longlong *)(plVar2[0x28b] + (longlong)iVar6 * 0x18);
              if (*plVar7 == CONCAT44(uVar5,uVar9)) {
                if ((plVar7 != (longlong *)0x0) &&
                   (plVar7 = (longlong *)plVar7[1], plVar7 != (longlong *)0x0)) {
                  *(byte *)(plVar7 + 0x12) = *(byte *)(plVar7 + 0x12) & 0xf7;
                  (**(code **)(*plVar7 + 0x2b0))(plVar7);
                  FUN_147a4821c(plVar7,0);
                }
                break;
              }
              iVar6 = (int)plVar7[2];
            } while (iVar6 != -1);
          }
        }
        (**(code **)(*plVar2 + 0x3d0))(plVar2,param_2,1);
      }
      FUN_14021bd22(*(undefined8 *)(lVar1 + 0x858),param_2);
      FUN_14021bc82(lVar1 + 0x4d0,*(undefined8 *)(param_2 + 0x18));
      goto LAB_1434c9298;
    }
    if (bVar3 == 0) {
      FUN_14368bf72(local_60 + 0xb40,**(undefined8 **)(local_60 + 0xf8),param_2);
    }
  }
  FUN_1404e60f2(lVar1,param_2,param_3);
LAB_1434c9298:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1434c939c FUN_1434c939c body=3391 status=ok
// SIG undefined FUN_1434c939c(void)

void FUN_1434c939c(longlong param_1,longlong param_2)

{
  int *piVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined8 uVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined2 **ppuVar9;
  undefined8 *puVar10;
  double dVar11;
  char cVar12;
  uint uVar13;
  longlong lVar14;
  undefined8 *puVar15;
  longlong lVar16;
  undefined8 uVar17;
  uint *puVar18;
  longlong *plVar19;
  double *pdVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  longlong lVar24;
  longlong lVar25;
  uint uVar26;
  longlong *plVar27;
  ulonglong uVar28;
  longlong lVar29;
  undefined2 *puVar30;
  uint *puVar31;
  int iVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  longlong *plVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined1 auStack_388 [32];
  longlong local_368;
  undefined4 local_360;
  undefined4 local_358;
  undefined8 local_350;
  wchar_t *local_348;
  code *local_340;
  undefined1 *local_338;
  undefined8 *local_330;
  code *local_328;
  code *local_320;
  char local_309;
  longlong *local_308;
  uint *local_300;
  int *local_2f8;
  uint local_2ec;
  longlong local_2e8;
  ulonglong local_2e0;
  undefined2 *local_2d8;
  undefined8 uStack_2d0;
  undefined2 *local_2c8;
  int local_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 *local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined2 local_278 [256];
  undefined2 local_78 [4];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_388;
  if ((((*(char *)(param_1 + 0xcbe) == '\0') &&
       ((*(longlong *)(param_1 + 0xf0) == 0 ||
        (*(int *)(*(longlong *)(param_1 + 0xf0) + 0x134) == 1)))) ||
      (*(char *)(param_1 + 0x15a0) != '\0')) ||
     ((cVar12 = FUN_1449e2a3e(param_2), cVar12 == '\0' || (*(char *)(param_2 + 0x61) < '\0'))))
  goto LAB_1434c9412;
  uVar26 = 0;
  FUN_144750a86(param_2,&local_2c8,0,0);
  plVar27 = (longlong *)(param_1 + 0x928);
  iVar21 = local_2c0 + -1;
  if (local_2c0 == 0) {
    iVar21 = 0;
  }
  if (0 < iVar21) {
    puVar30 = local_2c8;
    if (local_2c0 == 0) {
      puVar30 = &DAT_149dfb77a;
    }
    lVar25 = 0;
    uVar26 = 0;
    do {
      uVar13 = ((uint)(ushort)puVar30[lVar25] + (uint)(0x19 < (ushort)puVar30[lVar25] - 0x61) * 0x20
               ) - 0x20;
      uVar26 = uVar26 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar26 ^ uVar13) & 0xff) * 4);
      uVar26 = uVar26 >> 8 ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar26 & 0xff ^ uVar13 >> 8 & 0xff) * 4);
      lVar25 = lVar25 + 1;
    } while (iVar21 != (int)lVar25);
  }
  iVar21 = FUN_147a72fb2(plVar27,uVar26,&local_2c8);
  if (iVar21 == -1) {
    local_298 = (code *)&local_2c8;
    FUN_147a747da(plVar27,&local_2b8,&local_298);
    lVar25 = *plVar27;
    lVar29 = (longlong)(int)local_2b8 * 0xe8;
    plVar27 = (longlong *)(lVar29 + 0x18 + lVar25);
    plVar27[-1] = *(longlong *)(param_2 + 0x18);
    lVar16 = param_2;
    lVar14 = FUN_144938c96();
    uVar37 = (undefined4)lVar16;
    if ((lVar14 != 0) && (DAT_14c950c29 != '\0')) {
      lVar16 = lVar14;
      FUN_1456cec3c();
      uVar37 = (undefined4)lVar16;
    }
    *plVar27 = lVar14;
    lVar16 = *(longlong *)(param_2 + 0x1c8);
    if (lVar16 == 0) {
      puVar15 = &DAT_14c8464e0;
      uVar36 = (undefined4)DAT_14c8464f0;
      uVar38 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    }
    else {
      uVar36 = (undefined4)*(undefined8 *)(lVar16 + 0x270);
      uVar38 = (undefined4)((ulonglong)*(undefined8 *)(lVar16 + 0x270) >> 0x20);
      puVar15 = (undefined8 *)(lVar16 + 0x260);
    }
    uVar39 = *(undefined4 *)((longlong)puVar15 + 4);
    uVar40 = *(undefined4 *)(puVar15 + 1);
    uVar41 = *(undefined4 *)((longlong)puVar15 + 0xc);
    puVar3 = (undefined4 *)(lVar25 + 0x20 + lVar29);
    *puVar3 = *(undefined4 *)puVar15;
    puVar3[1] = uVar39;
    puVar3[2] = uVar40;
    puVar3[3] = uVar41;
    *(ulonglong *)(lVar25 + 0x30 + lVar29) = CONCAT44(uVar38,uVar36);
    lVar16 = *(longlong *)(param_2 + 0x1c8);
    if (lVar16 == 0) {
      local_2a8 = DAT_14c846508;
      uVar37 = (undefined4)DAT_14c8464f8;
      uVar36 = DAT_14c8464f8._4_4_;
      uVar38 = (undefined4)DAT_14c846500;
      uVar39 = DAT_14c846500._4_4_;
    }
    else {
      ppuVar9 = *(undefined2 ***)(lVar16 + 0x240);
      puVar10 = *(undefined8 **)(lVar16 + 0x248);
      puVar30 = *(undefined2 **)(lVar16 + 0x250);
      dVar6 = *(double *)(lVar16 + 600);
      pdVar20 = *(double **)(lVar16 + 0x228);
      local_298 = (code *)ppuVar9;
      uStack_290 = puVar10;
      local_288 = puVar30;
      uStack_280 = dVar6;
      if (pdVar20 == (double *)0x0) {
        uVar37 = 0x40;
        pdVar20 = (double *)FUN_14001cc68(0x40,0x10);
        dVar11 = DAT_14c8463d8;
        *pdVar20 = DAT_14c8463d0;
        pdVar20[1] = dVar11;
        dVar11 = DAT_14c8463e8;
        pdVar20[2] = DAT_14c8463e0;
        pdVar20[3] = dVar11;
        dVar11 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
        pdVar20[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
        pdVar20[5] = dVar11;
        puVar15 = DAT_14c846508;
        pdVar20[6] = (double)DAT_14c846508;
        *(double **)(lVar16 + 0x228) = pdVar20;
      }
      auVar7._8_4_ = (int)-(ulonglong)((double)puVar10 != pdVar20[1]);
      auVar7._0_8_ = -(ulonglong)((double)ppuVar9 != *pdVar20);
      auVar7._12_4_ = (int)(-(ulonglong)((double)puVar10 != pdVar20[1]) >> 0x20);
      iVar21 = movmskpd((int)puVar15,auVar7);
      auVar8._8_4_ = (int)-(ulonglong)(dVar6 != pdVar20[3]);
      auVar8._0_8_ = -(ulonglong)((double)puVar30 != pdVar20[2]);
      auVar8._12_4_ = (int)(-(ulonglong)(dVar6 != pdVar20[3]) >> 0x20);
      uVar26 = movmskpd(uVar37,auVar8);
      if ((uVar26 & 0x3fffffff) != 0 || iVar21 != 0) {
        *(undefined4 *)(pdVar20 + 2) = (undefined4)local_288;
        *(undefined4 *)((longlong)pdVar20 + 0x14) = local_288._4_4_;
        *(undefined4 *)(pdVar20 + 3) = (undefined4)uStack_280;
        *(undefined4 *)((longlong)pdVar20 + 0x1c) = uStack_280._4_4_;
        *(undefined4 *)pdVar20 = (undefined4)local_298;
        *(undefined4 *)((longlong)pdVar20 + 4) = local_298._4_4_;
        *(undefined4 *)(pdVar20 + 1) = (undefined4)uStack_290;
        *(undefined4 *)((longlong)pdVar20 + 0xc) = uStack_290._4_4_;
        FUN_1448052ee(&local_298,&local_2b8);
        pdVar20[6] = (double)local_2a8;
        pdVar20[4] = local_2b8;
        pdVar20[5] = (double)uStack_2b0;
      }
      local_2a8 = (undefined8 *)pdVar20[6];
      uVar37 = *(undefined4 *)(pdVar20 + 4);
      uVar36 = *(undefined4 *)((longlong)pdVar20 + 0x24);
      uVar38 = *(undefined4 *)(pdVar20 + 5);
      uVar39 = *(undefined4 *)((longlong)pdVar20 + 0x2c);
    }
    local_2b8 = (double)CONCAT44(uVar36,uVar37);
    uStack_2b0 = (longlong *)CONCAT44(uVar39,uVar38);
    *(undefined8 **)(lVar25 + 0x48 + lVar29) = local_2a8;
    pdVar20 = (double *)(lVar25 + 0x38 + lVar29);
    *pdVar20 = local_2b8;
    pdVar20[1] = (double)uStack_2b0;
    lVar16 = *(longlong *)(param_2 + 0x1c8);
    if (lVar16 == 0) {
      uVar37 = 0;
      uVar36 = 0x3ff00000;
      uVar38 = 0;
      uVar39 = 0x3ff00000;
      uVar40 = 0;
      uVar41 = 0x3ff00000;
    }
    else {
      uVar37 = *(undefined4 *)(lVar16 + 0x280);
      uVar36 = *(undefined4 *)(lVar16 + 0x284);
      uVar38 = *(undefined4 *)(lVar16 + 0x288);
      uVar39 = *(undefined4 *)(lVar16 + 0x28c);
      uVar40 = (undefined4)*(undefined8 *)(lVar16 + 0x290);
      uVar41 = (undefined4)((ulonglong)*(undefined8 *)(lVar16 + 0x290) >> 0x20);
    }
    puVar3 = (undefined4 *)(lVar25 + 0x50 + lVar29);
    *puVar3 = uVar37;
    puVar3[1] = uVar36;
    puVar3[2] = uVar38;
    puVar3[3] = uVar39;
    *(ulonglong *)(lVar25 + 0x60 + lVar29) = CONCAT44(uVar41,uVar40);
    if (DAT_14cae8b20 == 0) {
      local_298 = (code *)&LAB_14355090c;
      local_320 = FUN_14081d0ea;
      local_328 = FUN_14081d0ea;
      local_338 = &LAB_147b8e16d;
      local_340 = (code *)&LAB_140810a38;
      local_348 = L"Engine";
      local_350 = 0x800000000;
      local_358 = 0x10000000;
      local_360 = 8;
      local_368 = CONCAT44(local_368._4_4_,0x3f0);
      local_330 = &local_298;
      FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
    }
    lVar16 = DAT_14cae8b20;
    if (DAT_14c951858 == 0) {
      local_298 = FUN_1449e2820;
      local_320 = FUN_14081d0ea;
      local_328 = FUN_14081d0ea;
      local_338 = &LAB_1468c5283;
      local_340 = FUN_142809da0;
      local_348 = L"Engine";
      local_350 = 0x400000000;
      local_358 = 0x10000000;
      local_360 = 8;
      local_368 = CONCAT44(local_368._4_4_,0x50);
      local_330 = &local_298;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    lVar14 = *(longlong *)(param_2 + 0x20);
    if (lVar14 != 0) {
      iVar21 = *(int *)(lVar16 + 0x38);
      do {
        if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x38) < iVar21) ||
           (lVar24 = lVar14,
           *(longlong *)(*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30) + (longlong)iVar21 * 8)
           != lVar16 + 0x30)) {
          lVar24 = 0;
        }
      } while ((lVar24 == 0) && (lVar14 = *(longlong *)(lVar14 + 0x20), lVar14 != 0));
      if (lVar24 != 0) {
LAB_1434c972e:
        lVar14 = lVar24;
        lVar16 = lVar14;
        if (*(longlong *)(lVar14 + 0x20) != 0) goto code_r0x0001434c973d;
        goto LAB_1434c974f;
      }
    }
    goto LAB_1434c9763;
  }
  goto LAB_1434c950c;
code_r0x0001434c973d:
  lVar24 = *(longlong *)(lVar14 + 0x20);
  if ((*(uint *)(lVar14 + 8) >> 0x1c & 1) == 0) goto LAB_1434c972e;
  lVar16 = FUN_142840154(lVar14);
LAB_1434c974f:
  if (lVar16 == 0) {
    lVar24 = *(longlong *)(lVar14 + 0x20);
    goto LAB_1434c972e;
  }
  *(undefined8 *)(lVar25 + 0x68 + lVar29) = *(undefined8 *)(lVar16 + 0x18);
LAB_1434c9763:
  if (DAT_14c7614d4 != 0) {
    plVar27 = (longlong *)FUN_14001cc68(0xf0);
    plVar27[1] = (longlong)&DAT_100000001;
    *plVar27 = (longlong)&PTR_FUN_14a8bce40;
    plVar27[2] = 0;
    *(undefined1 *)((longlong)plVar27 + 0x1c) = 0x80;
    plVar27[0x17] = 0;
    *(undefined4 *)(plVar27 + 0x18) = 0;
    memset(plVar27 + 4,0,0x88);
    *(undefined8 *)((longlong)plVar27 + 0xc4) = 0xffffffff00000080;
    *(undefined4 *)((longlong)plVar27 + 0xcc) = 0;
    plVar27[0x1b] = 0;
    *(undefined4 *)(plVar27 + 0x1c) = 0;
    plVar27[0x1d] = 0;
    if (plVar27 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar27 + 1) = (int)plVar27[1] + 1;
      UNLOCK();
      LOCK();
      plVar35 = plVar27 + 1;
      *(int *)plVar35 = (int)*plVar35 + -1;
      UNLOCK();
      if ((int)*plVar35 == 0) {
        (**(code **)*plVar27)(plVar27);
        LOCK();
        piVar1 = (int *)((longlong)plVar27 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar27 + 0x10))(plVar27);
        }
      }
    }
    uVar5 = *(undefined8 *)(param_1 + 0xf0);
    uVar17 = FUN_144938c96(param_2);
    FUN_140c4bc9a(plVar27 + 2,uVar17,uVar5,0);
    if ((plVar27[6] != 0) && ((undefined8 *)plVar27[8] != (undefined8 *)0x0)) {
      plVar35 = (longlong *)(lVar29 + 0xd0 + lVar25);
      local_368 = param_2;
      cVar12 = FUN_147ce26d6(plVar27[6],0,plVar35,**(undefined8 **)plVar27[8]);
      if (DAT_14c950c29 == '\x01') {
        local_2f8 = (int *)(lVar29 + 0xd8 + lVar25);
        iVar21 = *local_2f8;
        if (0 < iVar21) {
          lVar16 = *plVar35;
          lVar14 = 0;
          do {
            if (*(longlong *)(lVar16 + lVar14 * 8) != 0) {
              FUN_1456cec3c();
              iVar21 = *local_2f8;
            }
            lVar14 = lVar14 + 1;
          } while (lVar14 < iVar21);
        }
      }
      if (cVar12 != '\0') {
        lVar16 = plVar27[8];
        plVar27[8] = 0;
        plVar19 = (longlong *)FUN_14001cc68(0x18,0x10);
        plVar19[1] = (longlong)&DAT_100000001;
        *plVar19 = (longlong)&PTR_FUN_14a8bc810;
        plVar19[2] = lVar16;
        *(longlong *)(lVar25 + 0x70 + lVar29) = lVar16;
        plVar35 = *(longlong **)(lVar25 + 0x78 + lVar29);
        if (plVar19 == plVar35) {
          if (plVar19 != (longlong *)0x0) {
            LOCK();
            plVar35 = plVar19 + 1;
            *(int *)plVar35 = (int)*plVar35 + -1;
            UNLOCK();
            if ((int)*plVar35 == 0) {
              (**(code **)*plVar19)(plVar19);
              LOCK();
              piVar1 = (int *)((longlong)plVar19 + 0xc);
              *piVar1 = *piVar1 + -1;
              iVar21 = *piVar1;
              UNLOCK();
              plVar35 = plVar19;
              goto joined_r0x0001434c9f95;
            }
          }
        }
        else {
          *(longlong **)(lVar29 + 0x78 + lVar25) = plVar19;
          if (plVar35 != (longlong *)0x0) {
            LOCK();
            plVar19 = plVar35 + 1;
            *(int *)plVar19 = (int)*plVar19 + -1;
            UNLOCK();
            if ((int)*plVar19 == 0) {
              (**(code **)*plVar35)(plVar35);
              LOCK();
              piVar1 = (int *)((longlong)plVar35 + 0xc);
              *piVar1 = *piVar1 + -1;
              iVar21 = *piVar1;
              UNLOCK();
joined_r0x0001434c9f95:
              if (iVar21 == 0) {
                (**(code **)(*plVar35 + 0x10))(plVar35);
              }
            }
          }
        }
      }
    }
    if (plVar27 != (longlong *)0x0) {
      LOCK();
      plVar35 = plVar27 + 1;
      *(int *)plVar35 = (int)*plVar35 + -1;
      UNLOCK();
      if ((int)*plVar35 == 0) {
        (**(code **)*plVar27)(plVar27);
        LOCK();
        piVar1 = (int *)((longlong)plVar27 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar27 + 0x10))(plVar27);
        }
      }
    }
    uVar26 = *(uint *)(param_2 + 0x268);
    uVar34 = (ulonglong)uVar26;
    puVar31 = (uint *)(param_2 + 0x250);
    if (uVar26 == 0) {
      uVar33 = 0;
      uVar28 = 1;
      uVar13 = 0;
      iVar21 = 0;
    }
    else {
      puVar18 = *(uint **)(param_2 + 0x260);
      if (*(uint **)(param_2 + 0x260) == (uint *)0x0) {
        puVar18 = puVar31;
      }
      uVar13 = *puVar18;
      if (uVar13 == 0) {
        iVar21 = uVar26 + 0x1e;
        if (-1 < (int)(uVar26 - 1)) {
          iVar21 = uVar26 - 1;
        }
        uVar33 = 0;
        uVar28 = (ulonglong)(uint)(iVar21 >> 5);
        if (iVar21 >> 5 < 1) {
          uVar28 = uVar33;
        }
        iVar21 = 0;
        do {
          if (uVar28 == uVar33) goto LAB_1434c950c;
          iVar21 = iVar21 + 0x20;
          uVar13 = puVar18[uVar33 + 1];
          uVar33 = uVar33 + 1;
        } while (uVar13 == 0);
      }
      else {
        uVar33 = 0;
        iVar21 = 0;
      }
      uVar28 = (ulonglong)(-uVar13 & uVar13);
      uVar2 = uVar28 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      uVar13 = (iVar21 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
      if ((int)uVar26 <= (int)uVar13) {
        uVar13 = uVar26;
      }
    }
    if (uVar13 != uVar26) {
      local_308 = (longlong *)(lVar29 + 0xd0 + lVar25);
      local_2e8 = lVar25 + 0x80 + lVar29;
      uVar26 = 0xffffffff;
      local_300 = puVar31;
      local_2e0 = uVar34;
      do {
        local_2f8 = (int *)CONCAT44(local_2f8._4_4_,iVar21);
        lVar25 = *(longlong *)(*(longlong *)(param_2 + 0x240) + (longlong)(int)uVar13 * 0x10);
        if (lVar25 != 0) {
          local_2ec = uVar26;
          plVar27 = (longlong *)FUN_14001cc68(0xf0);
          plVar27[1] = (longlong)&DAT_100000001;
          *plVar27 = (longlong)&PTR_FUN_14a8bce40;
          plVar27[2] = 0;
          *(undefined1 *)((longlong)plVar27 + 0x1c) = 0x80;
          plVar27[0x17] = 0;
          *(undefined4 *)(plVar27 + 0x18) = 0;
          memset(plVar27 + 4,0,0x88);
          *(undefined8 *)((longlong)plVar27 + 0xc4) = 0xffffffff00000080;
          *(undefined4 *)((longlong)plVar27 + 0xcc) = 0;
          plVar27[0x1b] = 0;
          *(undefined4 *)(plVar27 + 0x1c) = 0;
          plVar27[0x1d] = 0;
          if (plVar27 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar27 + 1) = (int)plVar27[1] + 1;
            UNLOCK();
            LOCK();
            plVar35 = plVar27 + 1;
            *(int *)plVar35 = (int)*plVar35 + -1;
            UNLOCK();
            if ((int)*plVar35 == 0) {
              (**(code **)*plVar27)(plVar27);
              LOCK();
              piVar1 = (int *)((longlong)plVar27 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar27 + 0x10))(plVar27);
              }
            }
          }
          uVar5 = *(undefined8 *)(param_1 + 0xf0);
          uVar17 = FUN_144938c96(lVar25);
          FUN_140c4bc9a(plVar27 + 2,uVar17,uVar5,0);
          if ((plVar27[6] != 0) && ((undefined8 *)plVar27[8] != (undefined8 *)0x0)) {
            local_368 = lVar25;
            cVar12 = FUN_147ce26d6(plVar27[6],0,local_308,**(undefined8 **)plVar27[8]);
            if ((DAT_14c950c29 == '\x01') && (iVar21 = (int)local_308[1], 0 < iVar21)) {
              lVar16 = *local_308;
              lVar14 = 0;
              local_309 = cVar12;
              do {
                if (*(longlong *)(lVar16 + lVar14 * 8) != 0) {
                  FUN_1456cec3c();
                  iVar21 = (int)local_308[1];
                  cVar12 = local_309;
                }
                lVar14 = lVar14 + 1;
              } while (lVar14 < iVar21);
            }
            if (cVar12 != '\0') {
              dVar6 = (double)plVar27[8];
              plVar27[8] = 0;
              local_2b8 = dVar6;
              uStack_2b0 = (longlong *)FUN_14001cc68(0x18,0x10);
              uStack_2b0[1] = (longlong)&DAT_100000001;
              *uStack_2b0 = (longlong)&PTR_FUN_14a8bc810;
              uStack_2b0[2] = (longlong)dVar6;
              local_2d8 = (undefined2 *)0x0;
              uStack_2d0 = 0;
              FUN_14005eb28(&local_2d8,0x80);
              uStack_280 = (double)((ulonglong)uStack_280 & 0xffffffffffffff00);
              local_298 = (code *)local_278;
              local_288 = local_78;
              local_2a0 = *(undefined8 *)(*(longlong *)(lVar25 + 0x10) + 0x18);
              uStack_290 = (undefined8 *)local_298;
              FUN_14005eb5c(&local_2a0,&local_298);
              if (local_288 <= (undefined2 *)((longlong)uStack_290 + 2)) {
                FUN_140213274(&local_298,1);
              }
              *(undefined2 *)uStack_290 = 0x20;
              uStack_290 = (undefined8 *)((longlong)uStack_290 + 2);
              FUN_144750bde(lVar25,0,&local_298);
              FUN_1400020e8(&local_2d8,local_298,
                            (ulonglong)((longlong)uStack_290 - (longlong)local_298) >> 1);
              if ((char)uStack_280 == '\x01') {
                FUN_1400020a8(local_298);
              }
              local_298 = (code *)&local_2d8;
              uStack_290 = &local_2b8;
              FUN_147a74dfc(local_2e8,&local_2a0,&local_298);
              if (local_2d8 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              plVar35 = uStack_2b0;
              if (uStack_2b0 != (longlong *)0x0) {
                LOCK();
                plVar19 = uStack_2b0 + 1;
                *(int *)plVar19 = (int)*plVar19 + -1;
                UNLOCK();
                if ((int)*plVar19 == 0) {
                  (**(code **)*uStack_2b0)(uStack_2b0);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar35 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar35 + 0x10))(plVar35);
                  }
                }
              }
            }
          }
          uVar34 = local_2e0;
          uVar26 = local_2ec;
          puVar31 = local_300;
          if (plVar27 != (longlong *)0x0) {
            LOCK();
            plVar35 = plVar27 + 1;
            *(int *)plVar35 = (int)*plVar35 + -1;
            UNLOCK();
            if ((int)*plVar35 == 0) {
              (**(code **)*plVar27)(plVar27);
              LOCK();
              piVar1 = (int *)((longlong)plVar27 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              puVar31 = local_300;
              if (*piVar1 == 0) {
                (**(code **)(*plVar27 + 0x10))(plVar27);
                puVar31 = local_300;
              }
            }
          }
        }
        uVar26 = uVar26 & ~(uint)uVar28;
        puVar18 = *(uint **)(param_2 + 0x260);
        if (*(uint **)(param_2 + 0x260) == (uint *)0x0) {
          puVar18 = puVar31;
        }
        uVar4 = *(uint *)(param_2 + 0x268);
        iVar32 = (int)uVar33;
        lVar25 = (longlong)iVar32;
        uVar13 = puVar18[lVar25] & uVar26;
        iVar21 = (int)local_2f8;
        if (uVar13 == 0) {
          iVar22 = uVar4 + 0x1e;
          if (-1 < (int)(uVar4 - 1)) {
            iVar22 = uVar4 - 1;
          }
          iVar22 = iVar22 >> 5;
          iVar21 = (int)local_2f8 + 0x20;
          iVar23 = iVar22;
          if (iVar22 < iVar32) {
            iVar23 = iVar32;
          }
          if (iVar32 < iVar22) {
            lVar16 = 0;
            do {
              uVar13 = puVar18[lVar25 + lVar16 + 1];
              if (uVar13 != 0) {
                uVar33 = (ulonglong)(iVar32 + (int)lVar16 + 1);
                uVar26 = 0xffffffff;
                goto LAB_1434c9b31;
              }
              iVar21 = iVar21 + 0x20;
              lVar16 = lVar16 + 1;
            } while (iVar23 - lVar25 != lVar16);
            uVar26 = 0xffffffff;
            iVar32 = iVar23;
          }
          uVar33 = (ulonglong)(iVar32 + 1);
          puVar31 = local_300;
          uVar13 = uVar4;
        }
        else {
LAB_1434c9b31:
          uVar28 = (ulonglong)(-uVar13 & uVar13);
          uVar2 = uVar28 * 2 + 1;
          lVar25 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar25 == 0; lVar25 = lVar25 + -1) {
            }
          }
          uVar13 = (iVar21 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
          if ((int)uVar4 <= (int)uVar13) {
            uVar13 = uVar4;
          }
        }
      } while (uVar13 != (uint)uVar34);
    }
  }
LAB_1434c950c:
  if (local_2c8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_1434c9412:
  if ((local_70 ^ (ulonglong)auStack_388) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434ca0dc FUN_1434ca0dc body=226 status=ok
// SIG undefined FUN_1434ca0dc(void)

undefined8 FUN_1434ca0dc(longlong param_1,undefined8 param_2,longlong param_3,char param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  longlong local_30;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(char *)(param_1 + 0xaa) = param_4;
  if (param_4 == '\0') {
    lVar1 = *(longlong *)(param_1 + 0x38);
    FUN_1434bc188(lVar1);
    if (*(longlong *)(param_3 + 0x360) == 0) {
      FUN_147d80a1a(DAT_14cb0d2b0,*(undefined8 *)(param_3 + 0x230),*(undefined8 *)(lVar1 + 0x200));
    }
    *(undefined8 *)(param_3 + 0x230) = 0;
    FUN_147d8162e(DAT_14cb0d2b0,param_3);
    plVar2 = *(longlong **)(param_3 + 0x2a8);
    if (plVar2 != (longlong *)0x0) {
      FUN_147a60036(local_48,6);
      (**(code **)(*plVar2 + 0x340))(plVar2,local_48);
      if (local_20 != 0) {
        (**(code **)(local_20 + -0x10))(local_20 + -0x10);
      }
      if (local_30 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434ca1c5 FUN_1434ca1c5 body=69 status=ok
// SIG undefined FUN_1434ca1c5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434ca1c5(void)

{
  _DAT_14cad6088 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434ca207. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad6090,1);
  return;
}



// FUNCTION 1434ca20a FUN_1434ca20a body=69 status=ok
// SIG undefined FUN_1434ca20a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434ca20a(void)

{
  _DAT_14cad60a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434ca24c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad60a8,1);
  return;
}



// FUNCTION 1434ca24f FUN_1434ca24f body=69 status=ok
// SIG undefined FUN_1434ca24f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434ca24f(void)

{
  _DAT_14cad60b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434ca291. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad60c0,1);
  return;
}



// FUNCTION 1434ca294 FUN_1434ca294 body=47 status=ok
// SIG undefined FUN_1434ca294(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434ca294(void)

{
  _DAT_14cad6118 = 0;
  if (DAT_14cad6110 != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(&DAT_14cad60d0);
  return;
}



// FUNCTION 1434ca2d4 FUN_1434ca2d4 body=47 status=ok
// SIG undefined FUN_1434ca2d4(void)

void FUN_1434ca2d4(void)

{
  DAT_14cad6178 = 0;
  if (DAT_14cad6170 != 0) {
    FUN_1400020a8();
  }
  FUN_1461b63b4(&DAT_14cad6130);
  return;
}



// FUNCTION 1434ca303 FUN_1434ca303 body=47 status=ok
// SIG undefined FUN_1434ca303(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434ca303(void)

{
  _DAT_14cad61c8 = 0;
  if (DAT_14cad61c0 != 0) {
    FUN_1400020a8();
  }
  FUN_1461b63b4(&DAT_14cad6180);
  return;
}



// FUNCTION 1434ca332 FUN_1434ca332 body=47 status=ok
// SIG undefined FUN_1434ca332(void)

void FUN_1434ca332(void)

{
  DAT_14cad6218 = 0;
  if (DAT_14cad6210 != 0) {
    FUN_1400020a8();
  }
  FUN_140bb2a1a(&DAT_14cad61d0);
  return;
}



// FUNCTION 1434ca361 FUN_1434ca361 body=49 status=ok
// SIG undefined FUN_1434ca361(void)

void FUN_1434ca361(void)

{
  FUN_141477791(DAT_14cad6220,DAT_14cad6228);
  if (DAT_14cad6220 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1434ca392 FUN_1434ca392 body=168 status=ok
// SIG undefined FUN_1434ca392(void)

void FUN_1434ca392(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_1 + 0x78) = param_2;
  FUN_1447f69b6(param_1 + 0x60);
  if (*(longlong *)(param_1 + 0x78) == 0) {
    FUN_140fde876(local_20);
  }
  else {
    local_30[0] = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x18);
    FUN_1400021e4(local_30,local_20);
  }
  FUN_140056680(local_30,L"DeviceProfile.Name");
  FUN_14152eab6(local_30,local_20);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if (local_20[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434ca43c FUN_1434ca43c body=5491 status=ok
// SIG undefined FUN_1434ca43c(void)

void FUN_1434ca43c(void)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  ushort uVar8;
  undefined2 *puVar9;
  wchar_t *_Str;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  undefined2 *puVar13;
  ulonglong uVar14;
  size_t *psVar15;
  longlong *plVar16;
  longlong lVar17;
  size_t *psVar18;
  int *piVar19;
  longlong lVar20;
  undefined8 uVar21;
  longlong *plVar22;
  longlong lVar23;
  undefined8 *puVar24;
  longlong lVar25;
  ushort uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  undefined8 *puVar29;
  bool bVar30;
  undefined1 auStack_278 [32];
  undefined8 *local_258;
  undefined4 local_250;
  undefined8 local_248;
  longlong *local_240;
  longlong local_238;
  longlong local_230;
  longlong local_228;
  ulonglong uStack_220;
  undefined8 *local_218;
  undefined8 uStack_210;
  char local_208;
  int local_204;
  longlong *local_200;
  longlong local_1f8 [2];
  undefined8 *local_1e8;
  int local_1e0;
  int local_1dc;
  longlong *local_1d8;
  undefined8 uStack_1d0;
  longlong local_1c8;
  ulonglong uStack_1c0;
  void *local_1b8;
  int local_1b0;
  undefined8 *local_1a8 [2];
  size_t *local_198;
  ulonglong uStack_190;
  void *local_188;
  ulonglong uStack_180;
  longlong local_170 [2];
  undefined8 *local_160;
  int local_158;
  undefined2 *local_150;
  uint local_148;
  longlong local_140;
  int local_138;
  undefined2 *local_130;
  uint local_128;
  undefined4 local_124;
  undefined8 local_120;
  undefined8 uStack_118;
  longlong local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  longlong local_c8;
  ulonglong uStack_c0;
  longlong local_b8 [11];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_278;
  local_228 = 0;
  uStack_220 = 0;
  FUN_1408bde70(DAT_14c872ce0,&DAT_14c872b28,&local_228);
  uVar14 = uStack_220 & 0xffffffff;
  if (0 < (int)uStack_220) {
    lVar25 = 0;
    do {
      lVar23 = local_228;
      lVar17 = lVar25 * 0x10;
      local_130 = (undefined2 *)0x0;
      local_128 = *(uint *)(local_228 + 8 + lVar17);
      lVar20 = (longlong)(int)local_128;
      pvVar1 = *(void **)(local_228 + lVar17);
      if (lVar20 == 0) {
        local_124 = 0;
      }
      else {
        FUN_1446dd670(&local_130,local_128,0);
        memcpy(local_130,pvVar1,lVar20 * 2);
      }
      puVar29 = (undefined8 *)(lVar23 + lVar17);
      FUN_140056680(&local_140,L"Host");
      FUN_140fde876(&local_150);
      FUN_140056680(&local_160,&DAT_149e1428e);
      FUN_140056680(local_170,&DAT_149e001d8);
      puVar13 = &DAT_149dfb77a;
      if (*(int *)(puVar29 + 1) != 0) {
        puVar13 = (undefined2 *)*puVar29;
      }
      local_120 = (longlong *)((ulonglong)local_120 & 0xffffffffffffff00);
      local_258 = &DAT_14c872b28;
      FUN_14052bb08(DAT_14c872ce0,puVar13,L"DevOnly",&local_120);
      if ((char)local_120 == '\0') {
        uVar11 = local_148 - 1;
        if (local_148 == 0) {
          uVar11 = 0;
        }
        if (0 < (int)uVar11) {
          puVar13 = &DAT_149dfb77a;
          if (local_148 != 0) {
            puVar13 = local_150;
          }
          puVar9 = &DAT_149dfb77a;
          if (local_128 != 0) {
            puVar9 = local_130;
          }
          uVar14 = (ulonglong)uVar11;
          lVar23 = 0;
          while( true ) {
            uVar8 = *(ushort *)((longlong)puVar9 + lVar23);
            uVar27 = (ulonglong)uVar8;
            uVar26 = *(ushort *)((longlong)puVar13 + lVar23);
            if (uVar8 != uVar26) break;
            if (uVar8 == 0) goto LAB_1434ca641;
LAB_1434ca605:
            uVar14 = uVar14 - 1;
            if (uVar14 == 0) goto LAB_1434ca641;
            lVar23 = lVar23 + 2;
          }
          if ((uVar26 | uVar8) < 0x80) {
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar27];
            uVar28 = (ulonglong)uVar26;
            uVar26 = (ushort)(byte)(&DAT_149e05da0)[uVar28];
            if ((&DAT_149e05da0)[uVar27] == (&DAT_149e05da0)[uVar28]) goto LAB_1434ca605;
          }
          if (uVar8 != uVar26) goto LAB_1434caf10;
LAB_1434ca641:
          local_250 = 0;
          local_258 = (undefined8 *)CONCAT44(local_258._4_4_,1);
          cVar4 = FUN_1407cdbc6(&local_130,local_170,&local_130,0);
          if (cVar4 != '\0') {
            local_188 = (void *)0x0;
            uStack_180 = 0;
            local_250 = 0;
            local_258 = (undefined8 *)CONCAT44(local_258._4_4_,1);
            cVar4 = FUN_1407cdbc6(&local_130,&local_160,&local_130,&local_188);
            if (cVar4 != '\0') {
              if (local_128 == local_148) {
                if (1 < (int)local_128) {
                  lVar23 = 0;
                  while( true ) {
                    uVar8 = *(ushort *)((longlong)local_130 + lVar23);
                    uVar14 = (ulonglong)uVar8;
                    uVar26 = *(ushort *)((longlong)local_150 + lVar23);
                    if (uVar8 != uVar26) break;
                    if (uVar8 == 0) goto LAB_1434ca735;
LAB_1434ca6f2:
                    lVar23 = lVar23 + 2;
                  }
                  if ((uVar26 | uVar8) < 0x80) {
                    uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
                    uVar27 = (ulonglong)uVar26;
                    uVar26 = (ushort)(byte)(&DAT_149e05da0)[uVar27];
                    if ((&DAT_149e05da0)[uVar14] == (&DAT_149e05da0)[uVar27]) goto LAB_1434ca6f2;
                  }
                  if (uVar8 != uVar26) goto LAB_1434caefe;
                }
              }
              else if (local_148 + local_128 != 1) goto LAB_1434caefe;
LAB_1434ca735:
              local_198 = (size_t *)0x0;
              uStack_190 = 0;
              puVar24 = (undefined8 *)&DAT_149dfb77a;
              if (local_158 != 0) {
                puVar24 = local_160;
              }
              iVar5 = FUN_1403de9f2(&local_188,&local_198,puVar24,1);
              if (iVar5 != 0) {
                local_b8[4] = 0;
                local_b8[7] = 0;
                local_b8[8] = 0;
                local_b8[9] = 0;
                local_b8[2] = 0;
                local_b8[3] = 0;
                local_b8[0] = 0;
                local_b8[1] = 0;
                local_b8[5] = 0x8000000000;
                local_b8[6] = 0xffffffff;
                FUN_140056680(local_1a8,L"FragmentIncludes");
                FUN_140056680(&local_1b8,L"DeviceProfileFragment");
                local_1c8 = 0;
                uStack_1c0 = 0;
                puVar13 = &DAT_149dfb77a;
                if (*(int *)(puVar29 + 1) != 0) {
                  puVar13 = (undefined2 *)*puVar29;
                }
                local_258 = &DAT_14c872b28;
                local_230 = lVar25;
                FUN_14105aa76(DAT_14c872ce0,puVar13);
                lVar25 = local_1c8;
                lVar23 = (longlong)(int)uStack_1c0;
                if (lVar23 != 0) {
                  lVar17 = 0;
                  do {
                    local_1d8 = (longlong *)0x0;
                    uVar11 = *(uint *)(lVar25 + 8 + lVar17);
                    pvVar1 = *(void **)(lVar25 + lVar17);
                    uStack_1d0 = (longlong *)CONCAT44(uStack_1d0._4_4_,uVar11);
                    if ((longlong)(int)uVar11 == 0) {
                      uStack_1d0 = (longlong *)(ulonglong)uVar11;
                    }
                    else {
                      FUN_1446dd670(&local_1d8,uVar11,0);
                      memcpy(local_1d8,pvVar1,(longlong)(int)uVar11 * 2);
                    }
                    FUN_1400b22c2(local_1f8,&DAT_149dfc0cb);
                    FUN_1407ec8fc(&local_218,&local_1d8,local_1f8);
                    pvVar1 = local_1b8;
                    local_1e0 = (int)uStack_210;
                    if ((int)uStack_210 < 2) {
                      local_1e8 = (undefined8 *)0x0;
                      lVar20 = (longlong)local_1b0;
                      local_1e0 = local_1b0;
                      if (lVar20 == 0) {
                        local_1dc = 0;
                      }
                      else {
                        FUN_1446dd670(&local_1e8,local_1b0,0);
                        memcpy(local_1e8,pvVar1,lVar20 * 2);
                      }
                    }
                    else {
                      iVar5 = local_1b0 + -1;
                      if (local_1b0 == 0) {
                        iVar5 = 0;
                      }
                      local_1e8 = local_218;
                      local_1dc = uStack_210._4_4_;
                      local_218 = (undefined8 *)0x0;
                      uStack_210 = (undefined8 *)0x0;
                      if (iVar5 + local_1e0 < local_1e0) goto LAB_1434cb882;
                      if (local_1dc < iVar5 + local_1e0) {
                        FUN_1446f8c06(&local_1e8);
                      }
                      FUN_1400020e8(&local_1e8,local_1b8,iVar5);
                    }
                    FUN_1434cf650(&local_120,&local_1e8);
                    if (local_218 != (undefined8 *)0x0) {
                      FUN_1400020a8();
                    }
                    if (local_1f8[0] != 0) {
                      FUN_1400020a8();
                    }
                    local_218 = &local_120;
                    uStack_210 = &local_120;
                    FUN_1414fa63e(local_b8,local_1f8);
                    if (local_1d8 != (longlong *)0x0) {
                      FUN_1400020a8();
                    }
                    lVar17 = lVar17 + 0x10;
                  } while (lVar23 * 0x10 != lVar17);
                }
                if ((longlong)(int)uStack_190 == 0) {
                  plVar16 = (longlong *)0x0;
                  iVar6 = 1;
                  uVar21 = 0;
                }
                else {
                  psVar15 = local_198 + (longlong)(int)uStack_190 * 2;
                  uVar21 = 0;
                  plVar16 = (longlong *)0x0;
                  psVar18 = local_198;
                  iVar5 = 1;
                  do {
                    _Str = L"";
                    if ((int)psVar18[1] != 0) {
                      _Str = (wchar_t *)*psVar18;
                    }
                    iVar6 = _wtoi(_Str);
                    if (iVar6 == 0) {
                      iVar6 = (int)psVar18[1];
                      if (iVar6 == local_138) {
                        if (1 < iVar6) {
                          lVar25 = 0;
                          while( true ) {
                            uVar8 = *(ushort *)(*psVar18 + lVar25);
                            uVar14 = (ulonglong)uVar8;
                            uVar26 = *(ushort *)(local_140 + lVar25);
                            if (uVar8 != uVar26) {
                              if ((uVar26 | uVar8) < 0x80) {
                                uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
                                uVar27 = (ulonglong)uVar26;
                                uVar26 = (ushort)(byte)(&DAT_149e05da0)[uVar27];
                                if ((&DAT_149e05da0)[uVar14] == (&DAT_149e05da0)[uVar27])
                                goto LAB_1434caaa2;
                              }
                              local_248 = CONCAT44(local_248._4_4_,iVar5);
                              if (uVar8 != uVar26) goto LAB_1434caafe;
                              uVar21 = 1;
                              goto LAB_1434cab80;
                            }
                            if (uVar8 == 0) break;
LAB_1434caaa2:
                            lVar25 = lVar25 + 2;
                          }
                        }
                      }
                      else if (local_138 + iVar6 != 1) {
LAB_1434caafe:
                        local_248 = CONCAT44(local_248._4_4_,iVar5);
                        FUN_1446f82e2(&local_120);
                        plVar16 = local_120;
                        lVar23 = DAT_14cad6230;
                        lVar25 = *(longlong *)(DAT_14cad6230 + 0xd0);
                        iVar5 = *(int *)(DAT_14cad6230 + 0xd8);
                        lVar17 = (longlong)iVar5;
                        if (lVar17 != 0) {
                          lVar20 = 0;
                          do {
                            if (*(longlong **)(lVar25 + lVar20) == local_120) goto LAB_1434cab80;
                            lVar20 = lVar20 + 8;
                          } while (lVar17 * 8 - lVar20 != 0);
                        }
                        *(uint *)(DAT_14cad6230 + 0xd8) = iVar5 + 1U;
                        if (*(uint *)(lVar23 + 0xdc) < iVar5 + 1U) {
                          plVar22 = (longlong *)(lVar23 + 0xd0);
                          FUN_1446f84a2(plVar22,iVar5);
                          lVar25 = *plVar22;
                        }
                        *(longlong **)(lVar25 + lVar17 * 8) = plVar16;
LAB_1434cab80:
                        iVar6 = (int)local_248;
                        goto LAB_1434cab85;
                      }
                      uVar21 = 1;
                      iVar6 = iVar5;
                    }
LAB_1434cab85:
                    psVar18 = psVar18 + 2;
                    iVar5 = iVar6;
                  } while (psVar18 != psVar15);
                }
                puVar13 = local_130;
                lVar25 = DAT_14cad6230;
                local_218 = (undefined8 *)0x0;
                lVar23 = (longlong)(int)local_128;
                uStack_210 = (undefined8 *)CONCAT44(uStack_210._4_4_,local_128);
                if (lVar23 == 0) {
                  uStack_210 = (undefined8 *)(ulonglong)local_128;
                }
                else {
                  FUN_1446dd670(&local_218,local_128,0);
                  memcpy(local_218,puVar13,lVar23 * 2);
                }
                local_208 = (char)uVar21;
                local_238 = lVar25;
                local_204 = iVar6;
                local_200 = plVar16;
                if ((longlong)*(int *)(lVar25 + 0x98) != 0) {
                  piVar19 = *(int **)(lVar25 + 0x90);
                  piVar7 = piVar19 + (longlong)*(int *)(lVar25 + 0x98) * 0x1a;
                  do {
                    FUN_1463c3550(*(undefined8 *)(piVar19 + 4),&local_120);
                    if ((int)uStack_210 == (int)uStack_118) {
                      if (1 < (int)uStack_210) {
                        lVar25 = 0;
                        while( true ) {
                          uVar8 = *(ushort *)((longlong)local_218 + lVar25);
                          uVar14 = (ulonglong)uVar8;
                          uVar26 = *(ushort *)((longlong)local_120 + lVar25);
                          if (uVar8 != uVar26) break;
                          if (uVar8 == 0) goto LAB_1434cacbb;
LAB_1434cac80:
                          lVar25 = lVar25 + 2;
                        }
                        if ((uVar26 | uVar8) < 0x80) {
                          uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
                          uVar27 = (ulonglong)uVar26;
                          uVar26 = (ushort)(byte)(&DAT_149e05da0)[uVar27];
                          if ((&DAT_149e05da0)[uVar14] == (&DAT_149e05da0)[uVar27])
                          goto LAB_1434cac80;
                        }
                        if (uVar8 != uVar26) goto LAB_1434cacda;
                      }
LAB_1434cacbb:
                      if (((char)piVar19[1] != local_208) || (*piVar19 != local_204))
                      goto LAB_1434cacda;
                      bVar30 = *(longlong **)(piVar19 + 2) == local_200;
                    }
                    else {
                      if ((int)uStack_118 + (int)uStack_210 == 1) goto LAB_1434cacbb;
LAB_1434cacda:
                      bVar30 = false;
                    }
                    if (local_120 != (longlong *)0x0) {
                      FUN_1400020a8();
                    }
                    if (bVar30) goto LAB_1434cad0c;
                    piVar19 = piVar19 + 0x1a;
                  } while (piVar19 != piVar7);
                }
                piVar19 = (int *)0x0;
LAB_1434cad0c:
                local_248 = uVar21;
                if (local_218 != (undefined8 *)0x0) {
                  FUN_1400020a8();
                }
                puVar13 = local_130;
                lVar25 = DAT_14cad6230;
                if (piVar19 == (int *)0x0) {
                  lVar23 = (longlong)(int)local_128;
                  local_1d8 = (longlong *)0x0;
                  uStack_1d0 = (longlong *)CONCAT44(uStack_1d0._4_4_,local_128);
                  FUN_1446dd670(&local_1d8,(lVar23 == 0) + local_128 + 1,0);
                  if (lVar23 != 0) {
                    memcpy(local_1d8,puVar13,lVar23 * 2);
                  }
                  FUN_1400020e8(&local_1d8,&DAT_149e1428e,1);
                  pvVar1 = local_188;
                  plVar22 = uStack_1d0;
                  iVar2 = (int)uStack_1d0;
                  if ((int)uStack_1d0 < 2) {
                    local_120 = (longlong *)0x0;
                    lVar23 = (longlong)(int)uStack_180;
                    uStack_118 = (longlong *)CONCAT44(uStack_118._4_4_,(int)uStack_180);
                    if (lVar23 == 0) {
                      uStack_118 = (longlong *)(uStack_180 & 0xffffffff);
                    }
                    else {
                      FUN_1446dd670(&local_120,uStack_180 & 0xffffffff,0);
                      memcpy(local_120,pvVar1,lVar23 * 2);
                    }
                  }
                  else {
                    iVar5 = (int)uStack_180 + -1;
                    if ((int)uStack_180 == 0) {
                      iVar5 = 0;
                    }
                    local_120 = local_1d8;
                    iVar3 = uStack_1d0._4_4_;
                    local_1d8 = (longlong *)0x0;
                    uStack_1d0 = (longlong *)0x0;
                    uStack_118 = plVar22;
                    iVar12 = iVar5 + iVar2;
                    if (iVar12 < iVar2) {
LAB_1434cb882:
                    /* WARNING: Subroutine does not return */
                      FUN_1456afac4((longlong)iVar5);
                    }
                    if (iVar3 < iVar12) {
                      FUN_1446f8c06(&local_120);
                    }
                    FUN_1400020e8(&local_120,local_188,iVar5);
                  }
                  lVar25 = FUN_1415de87c(lVar25,&local_120,1,0);
                  if (local_120 != (longlong *)0x0) {
                    FUN_1400020a8();
                  }
                  if (local_1d8 != (longlong *)0x0) {
                    FUN_1400020a8();
                  }
                  lVar23 = local_238;
                  if (lVar25 != 0) {
                    local_240 = (longlong *)(local_238 + 0x90);
                    local_120._0_5_ = CONCAT14((char)local_248,iVar6);
                    local_e8 = 0;
                    uStack_e0 = 0;
                    local_108 = 0;
                    uStack_100 = 0;
                    uStack_dc = 0x80;
                    uStack_d8 = 0xffffffff;
                    uStack_d4 = 0;
                    local_c8 = 0;
                    uStack_c0 = uStack_c0 & 0xffffffff00000000;
                    uStack_118 = plVar16;
                    local_110 = lVar25;
                    FUN_145a0b2f0(&local_108,local_b8);
                    plVar16 = local_240;
                    iVar5 = *(int *)(lVar23 + 0x98);
                    *(uint *)(lVar23 + 0x98) = iVar5 + 1U;
                    if (*(uint *)(lVar23 + 0x9c) < iVar5 + 1U) {
                      FUN_1463c4cb8(local_240,iVar5);
                    }
                    puVar10 = (undefined4 *)((longlong)iVar5 * 0x68 + *plVar16);
                    *(longlong *)(puVar10 + 4) = local_110;
                    *puVar10 = (undefined4)local_120;
                    puVar10[1] = local_120._4_4_;
                    puVar10[2] = (int)uStack_118;
                    puVar10[3] = uStack_118._4_4_;
                    FUN_1459e03ce(puVar10 + 6,&local_108);
                    uStack_c0 = uStack_c0 & 0xffffffff00000000;
                    if (local_c8 != 0) {
                      FUN_1400020a8();
                    }
                    FUN_14130b420(&local_108);
                  }
                }
                FUN_1447a1747(local_1c8,uStack_1c0 & 0xffffffff);
                if (local_1c8 != 0) {
                  FUN_1400020a8();
                }
                if (local_1b8 != (void *)0x0) {
                  FUN_1400020a8();
                }
                lVar25 = local_230;
                if (local_1a8[0] != (undefined8 *)0x0) {
                  FUN_1400020a8();
                }
                local_b8[9] = local_b8[9] & 0xffffffff00000000;
                if (local_b8[8] != 0) {
                  FUN_1400020a8();
                }
                FUN_14130b420(local_b8);
              }
              FUN_1447a1747(local_198,uStack_190 & 0xffffffff);
              if (local_198 != (size_t *)0x0) {
                FUN_1400020a8();
              }
            }
LAB_1434caefe:
            if (local_188 != (void *)0x0) {
              FUN_1400020a8();
            }
          }
        }
      }
LAB_1434caf10:
      if (local_170[0] != 0) {
        FUN_1400020a8();
      }
      if (local_160 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      if (local_150 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_140 != 0) {
        FUN_1400020a8();
      }
      if (local_130 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      lVar25 = lVar25 + 1;
      uVar14 = (ulonglong)(int)uStack_220;
    } while (lVar25 < (longlong)uVar14);
  }
  lVar25 = DAT_14cad6230;
  if ((DAT_14cad6230 == 0) || (piVar19 = (int *)(DAT_14cad6230 + 0x98), (longlong)*piVar19 < 1))
  goto LAB_1434cb6d3;
  *(undefined4 *)(DAT_14cad6230 + 0xa4) = 1;
  piVar7 = *(int **)(lVar25 + 0x90);
  lVar23 = (longlong)*piVar19 * 0x68;
  do {
    if ((((char)piVar7[1] == '\0') && (*piVar7 == 1)) && (*(longlong *)(piVar7 + 2) == 0)) {
      if (piVar7 != (int *)0x0) goto LAB_1434cb160;
      break;
    }
    piVar7 = piVar7 + 0x1a;
    lVar23 = lVar23 + -0x68;
  } while (lVar23 != 0);
  local_120 = (longlong *)CONCAT35(local_120._5_3_,1);
  uStack_118 = (longlong *)0x0;
  FUN_140fde876(local_b8);
  local_110 = FUN_1415de87c(lVar25,local_b8,1,0);
  local_e8 = 0;
  uStack_e0 = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  uStack_dc = 0x80;
  uStack_d8 = 0xffffffff;
  iVar5 = *(int *)(lVar25 + 0x98);
  *(uint *)(lVar25 + 0x98) = iVar5 + 1U;
  if (*(uint *)(lVar25 + 0x9c) < iVar5 + 1U) {
    FUN_1463c4cb8((longlong *)(lVar25 + 0x90),iVar5);
  }
  puVar10 = (undefined4 *)((longlong)iVar5 * 0x68 + *(longlong *)(lVar25 + 0x90));
  *(longlong *)(puVar10 + 4) = local_110;
  *puVar10 = (undefined4)local_120;
  puVar10[1] = local_120._4_4_;
  puVar10[2] = (int)uStack_118;
  puVar10[3] = uStack_118._4_4_;
  FUN_1459e03ce(puVar10 + 6,&local_108);
  uStack_c0 = uStack_c0 & 0xffffffff00000000;
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  FUN_14130b420(&local_108);
  if (local_b8[0] != 0) {
    FUN_1400020a8();
  }
LAB_1434cb160:
  local_120 = (longlong *)0x0;
  uStack_118 = (longlong *)((ulonglong)uStack_118 & 0xffffffff00000000);
  FUN_1446efa72(&local_120,0,2,0x10);
  uStack_118 = (longlong *)CONCAT44(uStack_118._4_4_,2);
  *local_120 = (longlong)&PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar23 = DAT_14c758608 + 1;
  lVar25 = DAT_14c758608 + 1;
  if (lVar23 == 0) {
    LOCK();
    UNLOCK();
    lVar23 = DAT_14c758608 + 2;
    lVar25 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar25;
  local_120[2] = lVar23;
  *local_120 = (longlong)&PTR_FUN_14a8bca60;
  iVar5 = 2;
  if (local_120 == (longlong *)0x0) {
LAB_1434cb97b:
    if (iVar5 == 0) goto LAB_1434cb32a;
    if (local_120 != (longlong *)0x0) {
      (**(code **)*local_120)(local_120,0);
      FUN_1446efa72(&local_120,0,0,0x10);
      goto LAB_1434cb317;
    }
  }
  else {
    cVar4 = (**(code **)(*local_120 + 0x30))();
    uVar11 = DAT_14cadbe50;
    if (cVar4 == '\0') {
      iVar5 = (int)uStack_118;
      goto LAB_1434cb97b;
    }
    if ((DAT_14cadbe5c < 1) &&
       (DAT_14cadbe58 = DAT_14cadbe58 + -1, DAT_14cadbe58 <= (int)DAT_14cadbe50)) {
      if (0 < (int)DAT_14cadbe50) {
        iVar5 = 0;
        do {
          if (((*(int *)(DAT_14cadbe48 + 8 + (longlong)iVar5 * 0x10) == 0) ||
              (plVar16 = *(longlong **)(DAT_14cadbe48 + (longlong)iVar5 * 0x10),
              plVar16 == (longlong *)0x0)) ||
             (cVar4 = (**(code **)(*plVar16 + 0x28))(), cVar4 != '\0')) {
            FUN_14005b288(&DAT_14cadbe48,iVar5);
            FUN_14005b248(&DAT_14cadbe48);
          }
          else {
            iVar5 = iVar5 + 1;
          }
        } while (iVar5 < (int)DAT_14cadbe50);
      }
      DAT_14cadbe58 = 2;
      if (2 < (int)(DAT_14cadbe50 * 2)) {
        DAT_14cadbe58 = DAT_14cadbe50 * 2;
      }
      if ((DAT_14cadbe58 < (int)uVar11) && (DAT_14cadbe54 != DAT_14cadbe50)) {
        FUN_14045812c();
      }
    }
    if (((int)uStack_118 != 0) && (local_120 != (longlong *)0x0)) {
      (**(code **)(*local_120 + 0x38))(local_120,local_b8);
    }
    uVar11 = DAT_14cadbe50;
    lVar25 = (longlong)(int)DAT_14cadbe50;
    DAT_14cadbe50 = DAT_14cadbe50 + 1;
    if (DAT_14cadbe54 < DAT_14cadbe50) {
      FUN_1447a71f6(&DAT_14cadbe48,uVar11);
    }
    lVar23 = DAT_14cadbe48;
    lVar25 = lVar25 * 0x10;
    *(undefined8 *)(DAT_14cadbe48 + lVar25) = 0;
    *(undefined4 *)(lVar23 + 8 + lVar25) = 0;
    *(longlong **)(lVar23 + lVar25) = local_120;
    local_120 = (longlong *)0x0;
    *(int *)(lVar23 + 8 + lVar25) = (int)uStack_118;
LAB_1434cb317:
    uStack_118 = (longlong *)((ulonglong)uStack_118 & 0xffffffff00000000);
LAB_1434cb32a:
    if (local_120 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  local_120 = (longlong *)0x0;
  uStack_118 = (longlong *)((ulonglong)uStack_118 & 0xffffffff00000000);
  FUN_1446efa72(&local_120,0,2,0x10);
  uStack_118 = (longlong *)CONCAT44(uStack_118._4_4_,2);
  *local_120 = (longlong)&PTR_LAB_14a8bcc20;
  LOCK();
  UNLOCK();
  lVar23 = DAT_14c758608 + 1;
  lVar25 = DAT_14c758608 + 1;
  if (lVar23 == 0) {
    LOCK();
    UNLOCK();
    lVar23 = DAT_14c758608 + 2;
    lVar25 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar25;
  local_120[2] = lVar23;
  *local_120 = (longlong)&PTR_FUN_14a8bcbb0;
  iVar5 = 2;
  if (local_120 == (longlong *)0x0) {
LAB_1434cb8cb:
    if (iVar5 == 0) goto LAB_1434cb4fd;
    if (local_120 != (longlong *)0x0) {
      (**(code **)*local_120)(local_120,0);
      FUN_1446efa72(&local_120,0,0,0x10);
      goto LAB_1434cb4ea;
    }
  }
  else {
    cVar4 = (**(code **)(*local_120 + 0x30))();
    uVar11 = DAT_14cadbeb8;
    if (cVar4 == '\0') {
      iVar5 = (int)uStack_118;
      goto LAB_1434cb8cb;
    }
    if ((DAT_14cadbec4 < 1) &&
       (DAT_14cadbec0 = DAT_14cadbec0 + -1, DAT_14cadbec0 <= (int)DAT_14cadbeb8)) {
      if (0 < (int)DAT_14cadbeb8) {
        iVar5 = 0;
        do {
          if (((*(int *)(DAT_14cadbeb0 + 8 + (longlong)iVar5 * 0x10) == 0) ||
              (plVar16 = *(longlong **)(DAT_14cadbeb0 + (longlong)iVar5 * 0x10),
              plVar16 == (longlong *)0x0)) ||
             (cVar4 = (**(code **)(*plVar16 + 0x28))(), cVar4 != '\0')) {
            FUN_14005b288(&DAT_14cadbeb0,iVar5);
            FUN_14005b248(&DAT_14cadbeb0);
          }
          else {
            iVar5 = iVar5 + 1;
          }
        } while (iVar5 < (int)DAT_14cadbeb8);
      }
      DAT_14cadbec0 = 2;
      if (2 < (int)(DAT_14cadbeb8 * 2)) {
        DAT_14cadbec0 = DAT_14cadbeb8 * 2;
      }
      if ((DAT_14cadbec0 < (int)uVar11) && (DAT_14cadbebc != DAT_14cadbeb8)) {
        FUN_14045812c();
      }
    }
    if (((int)uStack_118 != 0) && (local_120 != (longlong *)0x0)) {
      (**(code **)(*local_120 + 0x38))(local_120,local_b8);
    }
    uVar11 = DAT_14cadbeb8;
    lVar25 = (longlong)(int)DAT_14cadbeb8;
    DAT_14cadbeb8 = DAT_14cadbeb8 + 1;
    if (DAT_14cadbebc < DAT_14cadbeb8) {
      FUN_1447a71f6(&DAT_14cadbeb0,uVar11);
    }
    lVar23 = DAT_14cadbeb0;
    lVar25 = lVar25 * 0x10;
    *(undefined8 *)(DAT_14cadbeb0 + lVar25) = 0;
    *(undefined4 *)(lVar23 + 8 + lVar25) = 0;
    *(longlong **)(lVar23 + lVar25) = local_120;
    local_120 = (longlong *)0x0;
    *(int *)(lVar23 + 8 + lVar25) = (int)uStack_118;
LAB_1434cb4ea:
    uStack_118 = (longlong *)((ulonglong)uStack_118 & 0xffffffff00000000);
LAB_1434cb4fd:
    if (local_120 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  local_120 = (longlong *)0x0;
  uStack_118 = (longlong *)((ulonglong)uStack_118 & 0xffffffff00000000);
  FUN_1446efa72(&local_120,0,2,0x10);
  uStack_118 = (longlong *)CONCAT44(uStack_118._4_4_,2);
  *local_120 = (longlong)&PTR_LAB_14a8bcd00;
  LOCK();
  UNLOCK();
  lVar23 = DAT_14c758608 + 1;
  lVar25 = DAT_14c758608 + 1;
  if (lVar23 == 0) {
    LOCK();
    UNLOCK();
    lVar23 = DAT_14c758608 + 2;
    lVar25 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar25;
  local_120[2] = lVar23;
  *local_120 = (longlong)&PTR_FUN_14a8bcc90;
  iVar5 = 2;
  if (local_120 == (longlong *)0x0) {
LAB_1434cb92d:
    if (iVar5 == 0) goto LAB_1434cb6c6;
    if (local_120 != (longlong *)0x0) {
      (**(code **)*local_120)(local_120,0);
      FUN_1446efa72(&local_120,0,0,0x10);
      goto LAB_1434cb6b3;
    }
  }
  else {
    cVar4 = (**(code **)(*local_120 + 0x30))();
    uVar11 = DAT_14cadbed0;
    if (cVar4 == '\0') {
      iVar5 = (int)uStack_118;
      goto LAB_1434cb92d;
    }
    if ((DAT_14cadbedc < 1) &&
       (DAT_14cadbed8 = DAT_14cadbed8 + -1, DAT_14cadbed8 <= (int)DAT_14cadbed0)) {
      if (0 < (int)DAT_14cadbed0) {
        iVar5 = 0;
        do {
          if (((*(int *)(DAT_14cadbec8 + 8 + (longlong)iVar5 * 0x10) == 0) ||
              (plVar16 = *(longlong **)(DAT_14cadbec8 + (longlong)iVar5 * 0x10),
              plVar16 == (longlong *)0x0)) ||
             (cVar4 = (**(code **)(*plVar16 + 0x28))(), cVar4 != '\0')) {
            FUN_14005b288(&DAT_14cadbec8,iVar5);
            FUN_14005b248(&DAT_14cadbec8);
          }
          else {
            iVar5 = iVar5 + 1;
          }
        } while (iVar5 < (int)DAT_14cadbed0);
      }
      DAT_14cadbed8 = 2;
      if (2 < (int)(DAT_14cadbed0 * 2)) {
        DAT_14cadbed8 = DAT_14cadbed0 * 2;
      }
      if ((DAT_14cadbed8 < (int)uVar11) && (DAT_14cadbed4 != DAT_14cadbed0)) {
        FUN_14045812c();
      }
    }
    if (((int)uStack_118 != 0) && (local_120 != (longlong *)0x0)) {
      (**(code **)(*local_120 + 0x38))(local_120,local_b8);
    }
    uVar11 = DAT_14cadbed0;
    lVar25 = (longlong)(int)DAT_14cadbed0;
    DAT_14cadbed0 = DAT_14cadbed0 + 1;
    if (DAT_14cadbed4 < DAT_14cadbed0) {
      FUN_1447a71f6(&DAT_14cadbec8,uVar11);
    }
    lVar23 = DAT_14cadbec8;
    lVar25 = lVar25 * 0x10;
    *(undefined8 *)(DAT_14cadbec8 + lVar25) = 0;
    *(undefined4 *)(lVar23 + 8 + lVar25) = 0;
    *(longlong **)(lVar23 + lVar25) = local_120;
    local_120 = (longlong *)0x0;
    *(int *)(lVar23 + 8 + lVar25) = (int)uStack_118;
LAB_1434cb6b3:
    uStack_118 = (longlong *)((ulonglong)uStack_118 & 0xffffffff00000000);
LAB_1434cb6c6:
    if (local_120 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  uVar14 = uStack_220 & 0xffffffff;
LAB_1434cb6d3:
  FUN_1447a1747(local_228,uVar14);
  if (local_228 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1434cb9b0 FUN_1434cb9b0 body=2098 status=ok
// SIG undefined FUN_1434cb9b0(void)

longlong * FUN_1434cb9b0(longlong *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  void *_Src;
  longlong lVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  longlong *plVar18;
  byte bVar19;
  int iVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint uVar23;
  undefined2 *puVar24;
  longlong lVar25;
  ulonglong uVar26;
  int iVar27;
  code *pcVar28;
  undefined8 *puVar29;
  int iVar30;
  ulonglong uVar31;
  longlong lVar32;
  undefined8 *puVar33;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  undefined4 local_f0;
  longlong *local_e8;
  longlong *local_e0;
  ulonglong local_d8;
  void *local_d0;
  int local_c8;
  undefined4 local_c4;
  uint local_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  undefined8 local_b0;
  longlong local_a8 [2];
  undefined2 *local_98;
  int local_90;
  undefined4 local_8c;
  undefined2 *local_88;
  int local_80;
  undefined8 *local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  FUN_1408bde70(DAT_14c872ce0,&DAT_14c872b28,&local_78);
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_140056680(&local_88,L"DeviceProfileFragment");
  if ((longlong)(int)uStack_70 != 0) {
    puVar29 = local_78 + (longlong)(int)uStack_70 * 2;
    local_e0 = param_1 + 7;
    local_e8 = param_1 + 2;
    pcVar28 = wcslen_exref;
    puVar33 = local_78;
    do {
      local_98 = (undefined2 *)0x0;
      local_90 = *(int *)(puVar33 + 1);
      lVar32 = (longlong)local_90;
      _Src = (void *)*puVar33;
      if (lVar32 == 0) {
        local_8c = 0;
      }
      else {
        FUN_1446dd670(&local_98,local_90,0);
        memcpy(local_98,_Src,lVar32 * 2);
      }
      puVar24 = &DAT_149dfb77a;
      if (local_80 != 0) {
        puVar24 = local_88;
      }
      if (puVar24 != (undefined2 *)0x0) {
        uVar12 = (*pcVar28)(puVar24);
        local_f0 = 0xffffffff;
        local_f8 = (undefined8 *)((ulonglong)local_f8 & 0xffffffff00000000);
        iVar13 = FUN_1447ee042(&local_98,puVar24,uVar12,1);
        if (iVar13 != -1) {
          FUN_140056680(local_a8,L"DevOnly");
          puVar24 = &DAT_149dfb77a;
          if (local_90 != 0) {
            puVar24 = local_98;
          }
          local_c0 = local_c0 & 0xffffff00;
          local_f8 = &DAT_14c872b28;
          FUN_14052bb08(DAT_14c872ce0,puVar24,L"DevOnly",&local_c0);
          puVar24 = local_98;
          if ((char)local_c0 == '\0') {
            local_d0 = (void *)0x0;
            lVar32 = (longlong)local_90;
            local_c8 = local_90;
            if (lVar32 == 0) {
              local_c4 = 0;
            }
            else {
              FUN_1446dd670(&local_d0,local_90,0);
              memcpy(local_d0,puVar24,lVar32 * 2);
            }
            FUN_1434cf650(&local_c0,&local_d0);
            uVar11 = uStack_bc;
            uVar10 = local_c0;
            lVar32 = CONCAT44(uStack_bc,local_c0);
            iVar13 = (int)param_1[1];
            iVar30 = *(int *)((longlong)param_1 + 0x34);
            uVar6 = (uint)((ulonglong)lVar32 >> 0x10);
            if (iVar13 != iVar30) {
              plVar18 = (longlong *)param_1[8];
              if ((longlong *)param_1[8] == (longlong *)0x0) {
                plVar18 = local_e0;
              }
              iVar14 = *(int *)((longlong)plVar18 +
                               (ulonglong)
                               ((int)param_1[9] - 1U &
                               uStack_bc + (local_c0 << 0x10 | local_c0 & 0xffff) +
                               (uVar6 << 0x13 | uVar6 & 0xffff) + ((local_c0 & 0xffff) >> 4)) * 4);
              if (iVar14 != -1) {
                do {
                  if (*(longlong *)(*param_1 + (longlong)iVar14 * 0x20) == lVar32)
                  goto LAB_1434cbe0b;
                  iVar14 = *(int *)((longlong)iVar14 * 0x20 + *param_1 + 0x18);
                } while (iVar14 != -1);
              }
            }
            if (iVar30 == 0) {
              *(int *)(param_1 + 1) = iVar13 + 1;
              if (*(int *)((longlong)param_1 + 0xc) == iVar13) {
                FUN_1447711aa(param_1,iVar13);
              }
              iVar30 = (int)param_1[5];
              if (iVar30 == 0) {
                iVar14 = -1;
              }
              else {
                iVar14 = iVar30 + 0x1e;
                if (-1 < iVar30 + -1) {
                  iVar14 = iVar30 + -1;
                }
                iVar14 = iVar14 >> 5;
              }
              iVar20 = iVar30 + 1;
              iVar27 = iVar30 + 0x1f;
              if (-1 < iVar30) {
                iVar27 = iVar30;
              }
              if (iVar27 >> 5 == iVar14) {
                *(int *)(param_1 + 5) = iVar20;
              }
              else {
                if (*(int *)((longlong)param_1 + 0x2c) <= iVar30) {
                  iVar14 = iVar30;
                  if (iVar30 + 0x20U < 0xa0) {
                    iVar20 = 0x80;
                  }
                  else {
                    uVar15 = iVar30 + 0x20U >> 5;
                    if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
                      uVar23 = 4;
                      if (4 < uVar15) {
                        uVar23 = uVar15;
                      }
                    }
                    else {
                      uVar23 = uVar15 + (uVar15 * 3 >> 3) + 0x10;
                    }
                    uVar21 = (ulonglong)(uVar23 * 4);
                    if (DAT_14c872d28 != (longlong *)0x0) {
                      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                        uVar16 = (uint)(uVar21 + 0xf);
                        if (uVar23 < 0x1ffd) {
                          uVar21 = (ulonglong)
                                   (ushort)(&DAT_14c841d90)
                                           [0x32 - (byte)(&DAT_14c841e00)[uVar21 + 0xf >> 4]];
                        }
                        else {
                          uVar22 = (ulonglong)(uVar16 & 0xfffffff0);
                          if (uVar22 < 0x7ff1) {
                            bVar19 = (&DAT_14c841e00)[uVar16 >> 4];
                            uVar26 = 0x32;
                            if (0x32 < bVar19) {
                              uVar26 = (ulonglong)bVar19;
                            }
                            uVar31 = 0x32 - (ulonglong)bVar19;
                            do {
                              uVar21 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar31 & 0xffffffff];
                              if (((&DAT_14c841d90)[uVar31 & 0xffffffff] & 0xf) == 0)
                              goto LAB_1434cc008;
                              lVar25 = uVar26 + 1 + uVar31;
                              uVar31 = uVar31 - 1;
                            } while (lVar25 != 0x33);
                          }
                          uVar21 = (ulonglong)DAT_14c841df8;
                          if (DAT_14c841df8 < 0x11) {
                            uVar21 = 0x10;
                          }
                          uVar21 = -uVar21 & (uVar22 + uVar21) - 1;
                        }
                      }
                      else {
                        local_d8 = (ulonglong)uVar15;
                        uVar21 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar21,0);
                        uVar15 = (uint)local_d8;
                        iVar14 = (int)param_1[5];
                      }
                    }
LAB_1434cc008:
                    iVar17 = (int)(uVar21 >> 2);
                    iVar20 = iVar17 << 5;
                    if (iVar17 < (int)uVar15) {
                      iVar20 = -0x20;
                    }
                  }
                  *(int *)((longlong)param_1 + 0x2c) = iVar20;
                  FUN_1446efbd8(local_e8,iVar14);
                  iVar20 = (int)param_1[5] + 1;
                }
                iVar14 = iVar20 + 0x1f;
                if (-1 < iVar20) {
                  iVar14 = iVar20;
                }
                *(int *)(param_1 + 5) = iVar20;
                if (iVar20 % 0x20 != 0) {
                  plVar18 = (longlong *)param_1[4];
                  if ((longlong *)param_1[4] == (longlong *)0x0) {
                    plVar18 = local_e8;
                  }
                  bVar19 = -(char)(iVar20 % 0x20);
                  *(uint *)((longlong)plVar18 + (longlong)(iVar14 >> 5) * 4) =
                       (uint)(*(int *)((longlong)plVar18 + (longlong)(iVar14 >> 5) * 4) <<
                             (bVar19 & 0x1f)) >> (bVar19 & 0x1f);
                }
              }
              lVar25 = (longlong)iVar13;
              plVar18 = (longlong *)param_1[4];
              if ((longlong *)param_1[4] == (longlong *)0x0) {
                plVar18 = local_e8;
              }
              bVar19 = (byte)iVar30 & 0x1f;
              puVar1 = (uint *)((longlong)plVar18 + (longlong)(iVar27 >> 5) * 4);
              *puVar1 = *puVar1 & (-2 << bVar19 | 0xfffffffeU >> 0x20 - bVar19);
            }
            else {
              iVar13 = (int)param_1[6];
              lVar25 = (longlong)iVar13;
              iVar14 = *(int *)(*param_1 + 4 + lVar25 * 0x20);
              *(int *)(param_1 + 6) = iVar14;
              *(int *)((longlong)param_1 + 0x34) = iVar30 + -1;
              if (iVar30 + -1 != 0) {
                *(undefined4 *)(*param_1 + (longlong)iVar14 * 0x20) = 0xffffffff;
              }
            }
            plVar18 = (longlong *)param_1[4];
            if ((longlong *)param_1[4] == (longlong *)0x0) {
              plVar18 = local_e8;
            }
            iVar30 = iVar13 + 0x1f;
            if (-1 < iVar13) {
              iVar30 = iVar13;
            }
            puVar1 = (uint *)((longlong)plVar18 + (longlong)(iVar30 >> 5) * 4);
            *puVar1 = *puVar1 | 1 << ((byte)iVar13 & 0x1f);
            lVar5 = *param_1;
            lVar25 = lVar25 * 0x20;
            puVar2 = (undefined4 *)(lVar5 + lVar25);
            *(longlong *)(lVar5 + lVar25) = lVar32;
            puVar4 = (undefined8 *)(lVar5 + 8 + lVar25);
            *puVar4 = 0;
            puVar4[1] = 0;
            *(undefined4 *)(lVar5 + 0x18 + lVar25) = 0xffffffff;
            uVar15 = (uVar10 << 0x10 | uVar10 & 0xffff) + uVar11 + (uVar6 << 0x13 | uVar6 & 0xffff)
                     + ((uVar10 & 0xffff) >> 4);
            uVar23 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
            if ((uVar23 != 0) && (uVar23 != 1)) {
              plVar18 = (longlong *)param_1[8];
              if ((longlong *)param_1[8] == (longlong *)0x0) {
                plVar18 = local_e0;
              }
              iVar30 = *(int *)((longlong)plVar18 + (ulonglong)((int)param_1[9] - 1U & uVar15) * 4);
              if (iVar30 != -1) {
                do {
                  puVar3 = (undefined4 *)(*param_1 + (longlong)iVar30 * 0x20);
                  if (*(longlong *)(*param_1 + (longlong)iVar30 * 0x20) == lVar32) {
                    if (*(longlong *)(puVar3 + 2) != 0) {
                      FUN_1400020a8();
                    }
                    uVar12 = *puVar2;
                    uVar7 = puVar2[1];
                    uVar8 = puVar2[2];
                    uVar9 = puVar2[3];
                    *(undefined8 *)(puVar3 + 4) = *(undefined8 *)(puVar2 + 4);
                    *puVar3 = uVar12;
                    puVar3[1] = uVar7;
                    puVar3[2] = uVar8;
                    puVar3[3] = uVar9;
                    FUN_147a7586c(param_1,iVar13);
                    pcVar28 = wcslen_exref;
                    goto LAB_1434cbe0b;
                  }
                  iVar30 = puVar3[6];
                } while (iVar30 != -1);
              }
            }
            if (uVar23 < 4) {
              iVar30 = 1;
            }
            else {
              uVar21 = (ulonglong)(uVar23 & 0xfffffffe) + 0xf;
              lVar25 = 0x3f;
              if (uVar21 != 0) {
                for (; uVar21 >> lVar25 == 0; lVar25 = lVar25 + -1) {
                }
              }
              iVar30 = 1 << ((byte)lVar25 & 0x1f);
            }
            if (((int)uVar23 < 1) || (iVar30 <= (int)param_1[9])) {
              uVar15 = (int)param_1[9] - 1U & uVar15;
              puVar2[7] = uVar15;
              plVar18 = (longlong *)param_1[8];
              if ((longlong *)param_1[8] == (longlong *)0x0) {
                plVar18 = local_e0;
              }
              puVar2[6] = *(undefined4 *)
                           ((longlong)plVar18 +
                           ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar15) * 4);
              plVar18 = (longlong *)param_1[8];
              if ((longlong *)param_1[8] == (longlong *)0x0) {
                plVar18 = local_e0;
              }
              *(int *)((longlong)plVar18 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar15) * 4) = iVar13;
              pcVar28 = wcslen_exref;
            }
            else {
              *(int *)(param_1 + 9) = iVar30;
              FUN_1417c4fde(param_1);
              pcVar28 = wcslen_exref;
            }
LAB_1434cbe0b:
            if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
              plVar18 = (longlong *)param_1[8];
              if ((longlong *)param_1[8] == (longlong *)0x0) {
                plVar18 = local_e0;
              }
              iVar13 = *(int *)((longlong)plVar18 +
                               (ulonglong)
                               ((int)param_1[9] - 1U &
                               uVar11 + (uVar10 << 0x10 | uVar10 & 0xffff) +
                               (uVar6 << 0x13 | uVar6 & 0xffff) + ((uVar10 & 0xffff) >> 4)) * 4);
              if (iVar13 != -1) {
                do {
                  lVar25 = *param_1 + (longlong)iVar13 * 0x20;
                  if (*(longlong *)(*param_1 + (longlong)iVar13 * 0x20) == lVar32)
                  goto LAB_1434cbe78;
                  iVar13 = *(int *)(lVar25 + 0x18);
                } while (iVar13 != -1);
              }
            }
            lVar25 = 0;
LAB_1434cbe78:
            iVar13 = *(int *)(lVar25 + 0x10);
            *(uint *)(lVar25 + 0x10) = iVar13 + 1U;
            if (*(uint *)(lVar25 + 0x14) < iVar13 + 1U) {
              FUN_1417c5234((longlong *)(lVar25 + 8),iVar13);
            }
            lVar32 = *(longlong *)(lVar25 + 8);
            *(undefined8 *)(lVar32 + 0x10 + (longlong)iVar13 * 0x18) = local_b0;
            puVar1 = (uint *)(lVar32 + (longlong)iVar13 * 0x18);
            *puVar1 = local_c0;
            puVar1[1] = uStack_bc;
            puVar1[2] = uStack_b8;
            puVar1[3] = uStack_b4;
          }
          if (local_a8[0] != 0) {
            FUN_1400020a8();
          }
        }
      }
      if (local_98 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      puVar33 = puVar33 + 2;
    } while (puVar33 != puVar29);
  }
  if (local_88 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_78,uStack_70 & 0xffffffff);
  if (local_78 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1434cc1e4 FUN_1434cc1e4 body=6973 status=ok
// SIG undefined FUN_1434cc1e4(void)

/* WARNING: Removing unreachable block (ram,0x0001434cd729) */

longlong * FUN_1434cc1e4(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  wint_t _C;
  ushort uVar2;
  ushort uVar3;
  void *pvVar4;
  bool bVar5;
  undefined8 uVar6;
  longlong **pplVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  undefined8 uVar12;
  size_t sVar13;
  longlong ***ppplVar14;
  int iVar15;
  int iVar16;
  longlong *plVar17;
  uint *puVar18;
  longlong *plVar19;
  int iVar20;
  longlong ****pppplVar21;
  undefined8 *puVar22;
  undefined2 *puVar23;
  undefined1 *puVar24;
  undefined8 ****ppppuVar25;
  undefined8 ***pppuVar26;
  uint uVar27;
  ulonglong uVar28;
  undefined4 uVar29;
  wchar_t *pwVar30;
  ulonglong uVar31;
  uint uVar32;
  undefined2 *puVar33;
  ulonglong uVar34;
  undefined8 **ppuVar35;
  undefined8 **ppuVar36;
  uint uVar37;
  longlong lVar38;
  longlong lVar39;
  undefined1 auStack_308 [32];
  undefined8 ***local_2e8;
  undefined8 ****local_2e0;
  code **local_2d8;
  undefined1 local_2d0;
  undefined8 *local_2c8;
  undefined8 local_2c0;
  longlong **local_2b8;
  longlong *local_2b0;
  longlong *local_2a8;
  int local_29c;
  longlong *local_298;
  undefined8 local_290;
  longlong *local_288;
  undefined8 uStack_280;
  undefined8 ***local_278;
  undefined8 uStack_270;
  longlong local_268;
  undefined8 uStack_260;
  longlong local_258;
  ulonglong uStack_250;
  undefined1 local_23c [4];
  longlong **local_238;
  ulonglong uStack_230;
  longlong **local_228;
  undefined8 uStack_220;
  undefined8 ****local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  longlong ***local_1a8;
  ulonglong uStack_1a0;
  undefined8 ****local_198;
  undefined8 **ppuStack_190;
  int local_188;
  undefined2 *local_178;
  ulonglong uStack_170;
  longlong **local_168;
  int local_160;
  code *local_158;
  undefined8 uStack_150;
  longlong local_148;
  undefined8 uStack_140;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_11c;
  int local_114;
  undefined1 local_110 [8];
  undefined1 *local_108;
  int local_100;
  longlong **local_e8;
  longlong ***ppplStack_e0;
  undefined8 local_d8;
  undefined1 local_d0;
  uint *local_c8;
  int local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  longlong local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  
  uVar12 = DAT_14c872ce0;
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_308;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  local_258 = 0;
  uStack_250 = 0;
  local_128 = 0;
  local_120 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_11c = 0xffffffff00000080;
  local_114 = 0;
  local_108 = (undefined1 *)0x0;
  local_100 = 0;
  local_268 = 0;
  uStack_260 = 0;
  local_2c8 = param_2;
  local_298 = param_1;
  local_29c = FUN_140efda56();
  uVar6 = DAT_14c872ce0;
  local_2c0 = uVar12;
  if (DAT_14cad6228 == 0) {
    local_228 = (longlong **)0x0;
    uStack_220 = (undefined8 ****)0x0;
    local_2b8 = (longlong **)FUN_140fdead0();
    lVar11 = FUN_14129a444();
    local_e8 = *(longlong ***)(lVar11 + 0x18);
    FUN_1400021e4(&local_e8,&local_1a8);
    ppppuVar25 = (undefined8 ****)&DAT_149dfb77a;
    if ((int)uStack_1a0 != 0) {
      ppppuVar25 = (undefined8 ****)local_1a8;
    }
    FUN_140002266(&local_218,&DAT_14a1ca408,ppppuVar25);
    pppplVar21 = (longlong ****)&DAT_149dfb77a;
    if ((int)uStack_210 != 0) {
      pppplVar21 = local_218;
    }
    FUN_140056680(&local_e8,pppplVar21);
    if (local_218 != (longlong ****)0x0) {
      FUN_1400020a8();
    }
    if ((undefined8 ****)local_1a8 != (undefined8 ****)0x0) {
      FUN_1400020a8();
    }
    FUN_140474144(&local_218,local_2c8,&local_e8);
    FUN_140056680(&local_1a8,L"MatchingRules");
    local_178 = (undefined2 *)0x0;
    uStack_170 = 0;
    ppppuVar25 = (undefined8 ****)&DAT_149dfb77a;
    if ((int)uStack_1a0 != 0) {
      ppppuVar25 = (undefined8 ****)local_1a8;
    }
    pppplVar21 = (longlong ****)&DAT_149dfb77a;
    if ((int)uStack_210 != 0) {
      pppplVar21 = local_218;
    }
    local_2e8 = (undefined8 ***)&DAT_14c872b28;
    FUN_14105aa76(uVar6,pppplVar21,ppppuVar25,&local_178);
    if ((undefined8 ****)local_1a8 != (undefined8 ****)0x0) {
      FUN_1400020a8();
    }
    if (local_218 != (longlong ****)0x0) {
      FUN_1400020a8();
    }
    if ((undefined8 ***)local_e8 != (undefined8 ***)0x0) {
      FUN_1400020a8();
    }
    puVar23 = local_178;
    iVar9 = 0;
    local_c8 = (uint *)0x0;
    local_c0 = 0;
    local_e8 = (longlong **)0x0;
    ppplStack_e0 = (longlong ***)0x0;
    local_bc = 0xffffffff00000080;
    local_b4 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_238 = (longlong **)0x0;
    uStack_230 = 0;
    uStack_1a0 = CONCAT62(uStack_1a0._2_6_,0x100);
    local_1a8 = (longlong ***)&PTR_FUN_14a8bb7f0;
    local_198 = (longlong ****)0x0;
    ppuStack_190 = (longlong **)0x0;
    local_188 = 0;
    lVar11 = (longlong)(int)uStack_170;
    if (lVar11 == 0) {
      pwVar30 = L"No errors";
    }
    else {
      lVar38 = 0;
      do {
        puVar33 = &DAT_149dfb77a;
        if (*(int *)(local_2c8 + 1) != 0) {
          puVar33 = (undefined2 *)*local_2c8;
        }
        FUN_140002266(&local_218,L"%s rule #%d",puVar33,iVar9);
        if (local_198 != (longlong ****)0x0) {
          FUN_1400020a8();
        }
        local_198 = local_218;
        ppuStack_190 = uStack_210;
        local_1e0 = 0;
        uStack_1d8 = 0;
        local_1f0 = 0;
        uStack_1e8 = 0;
        local_200 = 0;
        uStack_1f8 = 0;
        uStack_210 = (longlong **)0x0;
        local_208 = 0;
        local_218 = (undefined8 ****)&PTR_FUN_14a8bb7b0;
        local_1c0 = 0;
        uStack_1b8 = 0;
        local_1d0 = 0;
        uStack_1c8 = 0;
        lVar39 = DAT_14cad6338;
        if (DAT_14cad6338 == 0) {
          uVar12 = FUN_140002dac();
          DAT_14cad6338 = FUN_140002ddd(FUN_1463c34f1,uVar12,L"DPMatchingRulestruct");
          lVar39 = DAT_14cad6338;
          if (DAT_14cad6338 == 0) {
            uVar12 = FUN_140002dac();
            DAT_14cad6338 = FUN_140002ddd(FUN_1463c34f1,uVar12,L"DPMatchingRulestruct");
            lVar39 = 0;
          }
        }
        local_158 = *(code **)(DAT_14cad6338 + 0x18);
        FUN_1400021e4(&local_158,&local_168);
        puVar33 = &DAT_149dfb77a;
        if (*(int *)((longlong)puVar23 + lVar38 + 8) != 0) {
          puVar33 = *(undefined2 **)((longlong)puVar23 + lVar38);
        }
        uStack_150 = &local_278;
        local_158 = FUN_1427ded96;
        local_2d8 = &local_158;
        local_2e0 = &local_1a8;
        local_2d0 = 1;
        local_2e8 = (undefined8 ***)((ulonglong)local_2e8 & 0xffffffff00000000);
        local_278 = &local_168;
        FUN_1408de6dc(lVar39,puVar33,&local_218,0);
        if ((undefined8 ***)local_168 != (undefined8 ***)0x0) {
          FUN_1400020a8();
        }
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14cad6bc0) &&
           (FUN_144b3d300(&DAT_14cad6bc0), DAT_14cad6bc0 == -1)) {
          FUN_1400b22c2(&DAT_14cad6bb0,"<unnamed>");
          atexit((_func_5014 *)&LAB_1434d2cd8);
          _Init_thread_footer(&DAT_14cad6bc0);
        }
        puVar22 = &uStack_210;
        if ((int)local_208 < 2) {
          puVar22 = &DAT_14cad6bb0;
        }
        local_2e0 = &local_1a8;
        local_2e8 = &local_238;
        FUN_1434d2ce9(local_2b8,puVar22,&local_218,&local_e8);
        FUN_147a6409e(&local_218);
        lVar38 = lVar38 + 0x10;
        iVar9 = iVar9 + 1;
      } while (lVar11 * 0x10 != lVar38);
      pwVar30 = L"No errors";
      if (0 < local_188) {
        pwVar30 = L"Error";
      }
    }
    sVar13 = wcslen(pwVar30);
    if ((int)sVar13 == 0) {
      local_218 = (undefined8 ****)0x0;
      uVar10 = *(uint *)(local_2c8 + 1);
      pvVar4 = (void *)*local_2c8;
      uStack_210 = (longlong **)CONCAT44(uStack_210._4_4_,uVar10);
      if ((longlong)(int)uVar10 == 0) {
        uStack_210 = (longlong **)(ulonglong)uVar10;
      }
      else {
        FUN_1446dd670(&local_218,uVar10,0);
        memcpy(local_218,pvVar4,(longlong)(int)uVar10 * 2);
      }
    }
    else {
      uVar10 = *(uint *)(local_2c8 + 1);
      iVar9 = (int)sVar13 + (uint)((longlong)(int)uVar10 == 0);
      local_218 = (undefined8 ****)0x0;
      pvVar4 = (void *)*local_2c8;
      uStack_210 = (longlong **)CONCAT44(uStack_210._4_4_,uVar10);
      if (iVar9 == 0 && uVar10 == 0) {
        uStack_210 = (longlong **)(ulonglong)uVar10;
      }
      else {
        if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar9 + uVar10);
        }
        FUN_1446dd670(&local_218,iVar9 + uVar10,0);
        if (uVar10 != 0) {
          memcpy(local_218,pvVar4,(longlong)(int)uVar10 * 2);
        }
      }
      FUN_1400020e8(&local_218,pwVar30,sVar13 & 0xffffffff);
    }
    FUN_140056680(&local_158,L"MatchingDPStatus");
    FUN_14152eab6(&local_158,&local_218);
    if (local_158 != (code *)0x0) {
      FUN_1400020a8();
    }
    if (local_218 != (undefined8 ****)0x0) {
      FUN_1400020a8();
    }
    local_1a8 = (longlong ***)&PTR_FUN_14a8bb7f0;
    if (local_198 != (longlong ****)0x0) {
      FUN_1400020a8();
    }
    FUN_1463c49ac(&local_e8);
    FUN_1447a1747(local_178,uStack_170 & 0xffffffff);
    if (local_178 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    pplVar7 = local_238;
    iVar9 = (int)uStack_230;
    lVar11 = (longlong)(int)uStack_230;
    local_e8 = (longlong **)0x0;
    ppplStack_e0 = (longlong ***)0x0;
    iVar20 = (int)uStack_230 + -1;
    if ((int)uStack_230 == 0) {
      iVar20 = 0;
    }
    if (0 < iVar20) {
      FUN_1446f8c06(&local_e8,iVar20 + 1);
    }
    if ((undefined8 ***)((longlong)pplVar7 + lVar11 * 2 + -2) != (undefined8 ***)pplVar7 &&
        iVar9 != 0) {
      lVar38 = 0;
      do {
        _C = *(wint_t *)((longlong)pplVar7 + lVar38);
        iVar9 = iswspace(_C);
        if (iVar9 == 0) {
          FUN_140002184(&local_e8,_C);
        }
        lVar38 = lVar38 + 2;
      } while (lVar11 * 2 + -2 != lVar38);
    }
    if ((undefined8 ***)pplVar7 != (undefined8 ***)0x0) {
      FUN_1400020a8(pplVar7);
    }
    local_228 = local_e8;
    uStack_220 = (undefined8 ****)ppplStack_e0;
    local_158 = (code *)0x0;
    uStack_150 = (undefined8 ****)0x0;
    local_218 = (longlong ****)0x0;
    uStack_210 = (longlong **)0x0;
    FUN_1403de9f2(&local_228,&local_218,&DAT_149e06196,1);
    uVar28 = 0;
    if ((longlong)(int)uStack_210 != 0) {
      lVar11 = (longlong)(int)uStack_210 << 4;
      uVar28 = 0;
      pppplVar21 = local_218;
      do {
        local_e8 = (longlong **)0x0;
        ppplStack_e0 = (longlong ***)0x0;
        local_d8 = 0;
        local_d0 = (code)0x1;
        local_2e0 = (undefined8 ****)CONCAT44(local_2e0._4_4_,0xffffffff);
        local_2e8 = (undefined8 ***)((ulonglong)local_2e8 & 0xffffffff00000000);
        iVar9 = FUN_1447ee042(pppplVar21,&DAT_149e2b508,1,1);
        if (iVar9 < 0) {
          if (pppplVar21 != &ppplStack_e0) {
            uVar10 = *(uint *)(pppplVar21 + 1);
            ppplVar14 = *pppplVar21;
            local_d8 = CONCAT44(local_d8._4_4_,uVar10);
            if (uVar10 == 0 && local_d8._4_4_ == 0) {
              local_d8 = (ulonglong)uVar10;
            }
            else {
              FUN_1446dd670(&ppplStack_e0,uVar10);
              if (uVar10 != 0) {
                memcpy(ppplStack_e0,ppplVar14,(longlong)(int)uVar10 * 2);
              }
            }
          }
          local_d0 = (code)0x1;
LAB_1434ccb5c:
          ppppuVar25 = uStack_150;
          lVar38 = (longlong)(int)uStack_150;
          uVar10 = (int)uStack_150 + 1;
          uStack_150 = (undefined8 ****)CONCAT44(uStack_150._4_4_,uVar10);
          if (uStack_150._4_4_ < uVar10) {
            FUN_145a48090(&local_158,(ulonglong)ppppuVar25 & 0xffffffff);
          }
          lVar38 = lVar38 * 0x20;
          *(longlong ***)(local_158 + lVar38) = local_e8;
          *(undefined8 *)(local_158 + lVar38 + 8) = 0;
          *(longlong ****)(local_158 + lVar38 + 8) = ppplStack_e0;
          ppplStack_e0 = (longlong ***)0x0;
          *(uint *)(local_158 + lVar38 + 0x10) = (uint)local_d8;
          *(int *)(local_158 + lVar38 + 0x14) = local_d8._4_4_;
          local_d8 = 0;
          local_158[lVar38 + 0x18] = local_d0;
        }
        else {
          local_2e0 = (undefined8 ****)CONCAT44(local_2e0._4_4_,0xffffffff);
          local_2e8 = (undefined8 ***)((ulonglong)local_2e8 & 0xffffffff00000000);
          uVar10 = FUN_1447ee042(pppplVar21,&DAT_149e2b50c,1,1);
          if (iVar9 < (int)uVar10) {
            iVar20 = *(int *)(pppplVar21 + 1);
            uVar32 = 0;
            uVar27 = iVar20 - 1;
            if (iVar20 == 0) {
              uVar27 = uVar32;
            }
            uVar37 = iVar9 + 1U;
            if ((int)uVar27 <= (int)(iVar9 + 1U)) {
              uVar37 = uVar27;
            }
            uVar31 = (ulonglong)uVar37;
            if ((int)uVar37 < 1) {
              uVar31 = uVar28;
            }
            uVar34 = (longlong)(int)uVar27;
            if ((longlong)(ulonglong)uVar10 < (longlong)(int)uVar27) {
              uVar34 = (ulonglong)uVar10;
            }
            if ((longlong)uVar34 < (longlong)uVar31) {
              uVar34 = uVar31;
            }
            ppplVar14 = (longlong ***)&DAT_149dfb77a;
            if (iVar20 != 0) {
              ppplVar14 = *pppplVar21;
            }
            FUN_14006620a(&local_1a8,(undefined2 *)((longlong)ppplVar14 + uVar31 * 2),
                          (int)uVar34 - (int)uVar31);
            uVar31 = (ulonglong)((int)uStack_1a0 - 1);
            if ((int)uStack_1a0 == 0) {
              uVar31 = uVar28;
            }
            FUN_1446f82e2(&local_168,uVar31,local_1a8,1);
            pplVar7 = local_168;
            if ((undefined8 ****)local_1a8 != (undefined8 ****)0x0) {
              FUN_1400020a8();
            }
            local_e8 = pplVar7;
            local_d0 = (code)0x0;
            ppplVar14 = (longlong ***)&DAT_149dfb77a;
            if (*(int *)(pppplVar21 + 1) != 0) {
              ppplVar14 = *pppplVar21;
              uVar32 = *(int *)(pppplVar21 + 1) - 1;
            }
            uVar27 = uVar10 + 1;
            if ((int)uVar32 <= (int)(uVar10 + 1)) {
              uVar27 = uVar32;
            }
            uVar31 = (ulonglong)uVar27;
            if ((int)uVar27 < 1) {
              uVar31 = uVar28;
            }
            FUN_14006620a(&local_1a8,(undefined2 *)((longlong)ppplVar14 + uVar31 * 2),
                          uVar32 - (int)uVar31);
            if ((undefined8 ****)ppplStack_e0 != (undefined8 ****)0x0) {
              FUN_1400020a8();
            }
            ppplStack_e0 = local_1a8;
            local_d8 = uStack_1a0;
            goto LAB_1434ccb5c;
          }
          if ((undefined8 ****)ppplStack_e0 != (undefined8 ****)0x0) {
            FUN_1400020a8();
          }
        }
        pppplVar21 = pppplVar21 + 2;
        lVar11 = lVar11 + -0x10;
      } while (lVar11 != 0);
      uVar28 = (ulonglong)uStack_210 & 0xffffffff;
    }
    uVar12 = local_2c0;
    FUN_1447a1747(local_218,uVar28);
    if (local_218 != (longlong ****)0x0) {
      FUN_1400020a8();
    }
    if ((undefined8 ***)local_228 != (undefined8 ***)0x0) {
      FUN_1400020a8();
    }
    FUN_1463c3db6(&local_158);
    FUN_141477791(local_158,(ulonglong)uStack_150 & 0xffffffff);
    if (local_158 != (code *)0x0) {
      FUN_1400020a8();
    }
    if (DAT_14cad6228 != 0) {
      FUN_140fef818(&local_e8,0,0,1);
      FUN_140056680(&local_218,L"DeviceProfile.MatchedFragmentsSorted");
      FUN_14152eab6(&local_218,&local_e8);
      if (local_218 != (longlong ****)0x0) {
        FUN_1400020a8();
      }
      if ((undefined8 ***)local_e8 != (undefined8 ***)0x0) {
        FUN_1400020a8();
      }
    }
  }
  FUN_145a48146(&local_258,&DAT_14cad6220);
  local_1a8 = (longlong ***)0x0;
  uStack_1a0 = 0;
  FUN_1408bde70(uVar12,&DAT_14c872b28,&local_1a8);
  FUN_140056680(&local_e8,L"DeviceProfiles");
  local_218 = (undefined8 ****)&local_e8;
  FUN_140c8411c(&local_1a8);
  if ((undefined8 ***)local_e8 != (undefined8 ***)0x0) {
    FUN_1400020a8();
  }
  plVar17 = (longlong *)(longlong)(int)uStack_250;
  if (0 < (longlong)plVar17) {
    do {
      plVar1 = (longlong *)((longlong)plVar17 + -1);
      plVar19 = plVar17;
      if (*(char *)(local_258 + 0x18 + (longlong)plVar1 * 0x20) == '\x01') {
        lVar11 = local_258 + (longlong)plVar1 * 0x20;
        local_e8 = (longlong **)0x0;
        ppplStack_e0 = (longlong ***)0x0;
        local_2b0 = plVar1;
        local_2a8 = plVar17;
        FUN_140056680(&local_218,L"CVars");
        puVar23 = &DAT_149dfb77a;
        if (*(int *)(lVar11 + 0x10) != 0) {
          puVar23 = *(undefined2 **)(lVar11 + 8);
        }
        FUN_140056680(&local_158,puVar23);
        FUN_1434cdd22(&local_158,&local_218,&local_e8,uVar12);
        if (local_158 != (code *)0x0) {
          FUN_1400020a8();
        }
        if (local_218 != (undefined8 ****)0x0) {
          FUN_1400020a8();
        }
        if ((longlong)(int)ppplStack_e0 == 0) {
          uVar28 = 0;
        }
        else {
          local_2b8 = local_e8 + (longlong)(int)ppplStack_e0 * 2;
          pppuVar26 = (undefined8 ***)local_e8;
          do {
            local_218 = (undefined8 ****)0x0;
            uStack_210 = (longlong **)0x0;
            local_158 = (code *)0x0;
            uStack_150 = (undefined8 ****)0x0;
            FUN_140056680(&local_168,&DAT_149e06162);
            local_2e0 = (undefined8 ****)((ulonglong)local_2e0 & 0xffffffff00000000);
            local_2e8 = (undefined8 ***)CONCAT44(local_2e8._4_4_,1);
            cVar8 = FUN_1407cdbc6(pppuVar26,&local_168,&local_218);
            if ((undefined8 ***)local_168 != (undefined8 ***)0x0) {
              FUN_1400020a8();
            }
            if (cVar8 != '\0') {
              uVar10 = 0;
              iVar9 = (int)uStack_210 + -1;
              if ((int)uStack_210 == 0) {
                iVar9 = 0;
              }
              if (0 < iVar9) {
                ppppuVar25 = (undefined8 ****)&DAT_149dfb77a;
                if ((int)uStack_210 != 0) {
                  ppppuVar25 = local_218;
                }
                lVar11 = 0;
                do {
                  uVar2 = *(ushort *)((longlong)ppppuVar25 + lVar11 * 2);
                  uVar27 = ((uint)(0x19 < uVar2 - 0x61) * 0x20 + (uint)uVar2) - 0x20;
                  uVar10 = uVar10 >> 8 ^
                           *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar10 ^ uVar27) & 0xff) * 4);
                  uVar10 = uVar10 >> 8 ^
                           *(uint *)(&DAT_14c75d150 +
                                    (ulonglong)(uVar10 & 0xff ^ uVar27 >> 8 & 0xff) * 4);
                  lVar11 = lVar11 + 1;
                } while (iVar9 != (int)lVar11);
              }
              if ((int)uStack_140 != local_114) {
                puVar24 = local_108;
                if (local_108 == (undefined1 *)0x0) {
                  puVar24 = local_110;
                }
                iVar9 = *(int *)(puVar24 + (ulonglong)(local_100 - 1U & uVar10) * 4);
                if (iVar9 != -1) {
LAB_1434ccf46:
                  plVar17 = (longlong *)(local_148 + (longlong)iVar9 * 0x18);
                  if ((int)plVar17[1] == (int)uStack_210) {
                    if (1 < (int)uStack_210) {
                      lVar11 = 0;
                      do {
                        uVar2 = *(ushort *)(*plVar17 + lVar11);
                        uVar3 = *(ushort *)((longlong)local_218 + lVar11);
                        if (uVar2 == uVar3) {
                          if (uVar2 == 0) break;
                        }
                        else {
                          uVar12 = local_2c0;
                          if (0x7f < (uVar3 | uVar2)) {
                            iVar20 = (uint)uVar2 - (uint)uVar3;
                            goto LAB_1434ccfc0;
                          }
                          if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[(uint)uVar3])
                          goto code_r0x0001434ccfbd;
                        }
                        lVar11 = lVar11 + 2;
                      } while( true );
                    }
                    goto LAB_1434ccfd1;
                  }
                  if ((int)plVar17[1] + (int)uStack_210 == 1) goto LAB_1434ccfd1;
                  goto LAB_1434ccf63;
                }
              }
LAB_1434ccfda:
              FUN_14482b35e(&local_148,&local_168,&local_218,0);
              uVar28 = uStack_260;
              lVar11 = (longlong)(int)uStack_260;
              uVar10 = (int)uStack_260 + 1;
              uStack_260 = CONCAT44(uStack_260._4_4_,uVar10);
              if (uStack_260._4_4_ < uVar10) {
                FUN_1447a1bd6(&local_268,uVar28 & 0xffffffff);
              }
              lVar11 = lVar11 * 0x10;
              puVar22 = (undefined8 *)(local_268 + lVar11);
              *(undefined8 *)(local_268 + lVar11) = 0;
              iVar9 = *(int *)(pppuVar26 + 1);
              ppuVar36 = *pppuVar26;
              *(int *)(local_268 + 8 + lVar11) = iVar9;
              if ((longlong)iVar9 == 0) {
                *(undefined4 *)((longlong)puVar22 + 0xc) = 0;
                uVar12 = local_2c0;
              }
              else {
                FUN_1446dd670(puVar22,iVar9,0);
                memcpy((void *)*puVar22,ppuVar36,(longlong)iVar9 * 2);
                uVar12 = local_2c0;
              }
            }
LAB_1434cd085:
            if (local_158 != (code *)0x0) {
              FUN_1400020a8();
            }
            if (local_218 != (undefined8 ****)0x0) {
              FUN_1400020a8();
            }
            pppuVar26 = pppuVar26 + 2;
          } while (pppuVar26 != (undefined8 ***)local_2b8);
          uVar28 = (ulonglong)ppplStack_e0 & 0xffffffff;
        }
        FUN_1447a1747(local_e8,uVar28);
        plVar19 = local_2a8;
        plVar1 = local_2b0;
        if ((undefined8 ***)local_e8 != (undefined8 ***)0x0) {
          FUN_1400020a8();
          plVar19 = local_2a8;
          plVar1 = local_2b0;
        }
      }
      plVar17 = plVar1;
    } while (1 < (longlong)plVar19);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cad6250) && (FUN_144b3d300(&DAT_14cad6250), DAT_14cad6250 == -1)) {
    lVar11 = FUN_14129a444();
    local_e8 = *(longlong ***)(lVar11 + 0x18);
    FUN_1400021e4(&local_e8,&local_218);
    ppppuVar25 = (undefined8 ****)&DAT_149dfb77a;
    if ((int)uStack_210 != 0) {
      ppppuVar25 = local_218;
    }
    FUN_140002266(&local_e8,&DAT_14a1ca408,ppppuVar25);
    pppuVar26 = (undefined8 ***)&DAT_149dfb77a;
    if ((int)ppplStack_e0 != 0) {
      pppuVar26 = (undefined8 ***)local_e8;
    }
    FUN_140056680(&DAT_14cad6240,pppuVar26);
    if ((undefined8 ***)local_e8 != (undefined8 ***)0x0) {
      FUN_1400020a8();
    }
    if (local_218 != (undefined8 ****)0x0) {
      FUN_1400020a8();
    }
    atexit((_func_5014 *)&LAB_1434cde62);
    _Init_thread_footer(&DAT_14cad6250);
  }
  plVar17 = local_298;
  local_158 = (code *)0x0;
  uVar10 = *(uint *)(local_2c8 + 1);
  pvVar4 = (void *)*local_2c8;
  uStack_150 = (undefined8 ****)CONCAT44(uStack_150._4_4_,uVar10);
  if ((longlong)(int)uVar10 == 0) {
    uStack_150 = (undefined8 ****)(ulonglong)uVar10;
  }
  else {
    FUN_1446dd670(&local_158,uVar10,0);
    memcpy(local_158,pvVar4,(longlong)(int)uVar10 * 2);
    if (1 < (int)uStack_150) {
      local_2c8 = (undefined8 *)(longlong)local_29c;
      local_2b0 = plVar17 + 7;
      uVar12 = local_2c0;
      do {
        FUN_140474144(&local_168,&local_158,&DAT_14cad6240);
        pppuVar26 = (undefined8 ***)&DAT_149dfb77a;
        if (local_160 != 0) {
          pppuVar26 = (undefined8 ***)local_168;
        }
        local_2a8 = (longlong *)FUN_140d6a126(uVar12,pppuVar26,0,&DAT_14c872b28);
        if (local_2a8 == (longlong *)0x0) {
          bVar5 = true;
        }
        else {
          uVar29 = 1;
          do {
            FUN_140056680(&local_178,L"CVars");
            if ((char)uVar29 != '\0') {
              pwVar30 = (wchar_t *)(&PTR_u__Largest_14a8b6c60)[(longlong)local_2c8];
              sVar13 = wcslen(pwVar30);
              FUN_1400020e8(&local_178,pwVar30,sVar13 & 0xffffffff);
            }
            local_228 = (longlong **)0x0;
            uStack_220 = (undefined8 ****)0x0;
            local_238 = (longlong **)0x0;
            uStack_230 = 0;
            puVar23 = &DAT_149dfb77a;
            if ((int)uStack_170 != 0) {
              puVar23 = local_178;
            }
            FUN_140056680(&local_278,puVar23);
            pppuVar26 = (undefined8 ***)&DAT_149dfb77a;
            if (local_160 != 0) {
              pppuVar26 = (undefined8 ***)local_168;
            }
            FUN_140056680(&local_288,pppuVar26);
            FUN_140056680(&local_e8,L"FragmentIncludes");
            local_218 = (undefined8 ****)0x0;
            uStack_210 = (longlong **)0x0;
            pppuVar26 = (undefined8 ***)&DAT_149dfb77a;
            if ((int)ppplStack_e0 != 0) {
              pppuVar26 = (undefined8 ***)local_e8;
            }
            local_2b8 = (longlong **)CONCAT44(local_2b8._4_4_,uVar29);
            ppuVar36 = (undefined8 **)&DAT_149dfb77a;
            if ((int)uStack_280 != 0) {
              ppuVar36 = (undefined8 **)local_288;
            }
            local_2e8 = (undefined8 ***)&DAT_14c872b28;
            FUN_14105aa76(uVar12,ppuVar36,pppuVar26,&local_218);
            if ((longlong)(int)uStack_210 == 0) {
              uVar28 = 0;
            }
            else {
              lVar11 = (longlong)(int)uStack_210 << 4;
              ppppuVar25 = local_218;
              do {
                FUN_1434cdd22(ppppuVar25,&local_278,&local_238,uVar12);
                ppppuVar25 = ppppuVar25 + 2;
                lVar11 = lVar11 + -0x10;
              } while (lVar11 != 0);
              uVar28 = (ulonglong)uStack_210 & 0xffffffff;
            }
            FUN_1447a1747(local_218,uVar28);
            if (local_218 != (undefined8 ****)0x0) {
              FUN_1400020a8();
            }
            if ((undefined8 ***)local_e8 != (undefined8 ***)0x0) {
              FUN_1400020a8();
            }
            if ((undefined8 **)local_288 != (undefined8 **)0x0) {
              FUN_1400020a8();
            }
            if (local_278 != (longlong ***)0x0) {
              FUN_1400020a8();
            }
            puVar23 = &DAT_149dfb77a;
            if ((int)uStack_170 != 0) {
              puVar23 = local_178;
            }
            FUN_1446f470e(&local_290,puVar23,1);
            FUN_14105accc(local_2a8,local_290,&local_228,1);
            if ((int)uStack_230 != 0) {
              pppuVar26 = (undefined8 ***)local_238;
              uVar28 = uStack_230;
              local_238 = local_228;
              uStack_230 = (ulonglong)uStack_220;
              local_228 = (longlong **)pppuVar26;
              uStack_220 = (undefined8 ****)uVar28;
              FUN_140b7fa3a(&local_228,&local_238);
            }
            FUN_140b7fa3a(&local_228,&local_268);
            FUN_1447a1747(local_268,uStack_260 & 0xffffffff);
            uVar28 = uStack_260 >> 0x20;
            uStack_260 = uStack_260 & 0xffffffff00000000;
            if ((int)uVar28 != 0) {
              FUN_1408be2c4(&local_268,0);
            }
            local_c8 = (uint *)0x0;
            local_c0 = 0;
            local_e8 = (longlong **)0x0;
            ppplStack_e0 = (longlong ***)0x0;
            local_bc = 0xffffffff00000080;
            local_b4 = 0;
            local_a8 = 0;
            local_a0 = 0;
            if (0 < (int)uStack_220) {
              lVar11 = 0;
              iVar9 = 0;
              do {
                local_278 = (longlong ***)0x0;
                uStack_270 = 0;
                local_288 = (longlong *)0x0;
                uStack_280 = 0;
                lVar38 = (longlong)local_228 + lVar11;
                FUN_140056680(&local_218,&DAT_149e06162);
                local_2e0 = (undefined8 ****)((ulonglong)local_2e0 & 0xffffffff00000000);
                local_2e8 = (undefined8 ***)CONCAT44(local_2e8._4_4_,1);
                cVar8 = FUN_1407cdbc6(lVar38,&local_218,&local_278,&local_288);
                if (local_218 != (undefined8 ****)0x0) {
                  FUN_1400020a8();
                }
                if (cVar8 != '\0') {
                  local_218 = &local_278;
                  uStack_210 = &local_288;
                  FUN_140ac5c08(&local_e8,local_23c,&local_218,0);
                }
                if ((undefined8 **)local_288 != (undefined8 **)0x0) {
                  FUN_1400020a8();
                }
                if (local_278 != (longlong ***)0x0) {
                  FUN_1400020a8();
                }
                iVar9 = iVar9 + 1;
                lVar11 = lVar11 + 0x10;
              } while (iVar9 < (int)uStack_220);
            }
            FUN_1447a1747();
            uVar28 = (ulonglong)uStack_220 >> 0x20;
            uStack_220 = (undefined8 ****)((ulonglong)uStack_220 & 0xffffffff00000000);
            if ((int)uVar28 != 0) {
              FUN_1408be2c4(&local_228,0);
            }
            if (local_c0 == 0) {
              uVar31 = 1;
              uVar28 = 0;
              iVar20 = 0;
              iVar9 = 0;
            }
            else {
              puVar18 = local_c8;
              if (local_c8 == (uint *)0x0) {
                puVar18 = (uint *)&local_d8;
              }
              uVar10 = *puVar18;
              if (uVar10 == 0) {
                iVar9 = local_c0 + 0x1e;
                if (-1 < local_c0 + -1) {
                  iVar9 = local_c0 + -1;
                }
                uVar28 = 0;
                uVar31 = (ulonglong)(uint)(iVar9 >> 5);
                if (iVar9 >> 5 < 1) {
                  uVar31 = uVar28;
                }
                iVar20 = 0;
                do {
                  if (uVar31 == uVar28) goto LAB_1434cd7ce;
                  iVar20 = iVar20 + 0x20;
                  uVar10 = puVar18[uVar28 + 1];
                  uVar28 = uVar28 + 1;
                } while (uVar10 == 0);
              }
              else {
                uVar28 = 0;
                iVar20 = 0;
              }
              uVar31 = (ulonglong)(-uVar10 & uVar10);
              uVar34 = uVar31 * 2 + 1;
              lVar11 = 0x3f;
              if (uVar34 != 0) {
                for (; uVar34 >> lVar11 == 0; lVar11 = lVar11 + -1) {
                }
              }
              iVar9 = (iVar20 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
              if (local_c0 <= iVar9) {
                iVar9 = local_c0;
              }
            }
            if (iVar9 < local_c0) {
              uVar10 = 0xffffffff;
              ppppuVar25 = local_218;
              pplVar7 = uStack_210;
              do {
                uStack_210 = pplVar7;
                local_218 = ppppuVar25;
                lVar11 = (longlong)iVar9;
                ppuVar36 = (undefined8 **)&DAT_149dfb77a;
                if (*(int *)(local_e8 + lVar11 * 5 + 3) != 0) {
                  ppuVar36 = (undefined8 **)local_e8[lVar11 * 5 + 2];
                }
                ppuVar35 = (undefined8 **)&DAT_149dfb77a;
                if (*(int *)(local_e8 + lVar11 * 5 + 1) != 0) {
                  ppuVar35 = (undefined8 **)local_e8[lVar11 * 5];
                }
                FUN_140002266(&local_218,L"%s=%s",ppuVar35,ppuVar36);
                lVar11 = (longlong)(int)uStack_220;
                uVar27 = (int)uStack_220 + 1;
                uStack_220 = (undefined8 ****)CONCAT44(uStack_220._4_4_,uVar27);
                if (uStack_220._4_4_ < uVar27) {
                  FUN_1447a1bd6(&local_228);
                }
                local_228[lVar11 * 2] = (longlong *)0x0;
                local_228[lVar11 * 2] = (longlong *)local_218;
                local_218 = (undefined8 ****)0x0;
                ppppuVar25 = local_218;
                *(int *)(local_228 + lVar11 * 2 + 1) = (int)uStack_210;
                *(undefined4 *)((longlong)local_228 + lVar11 * 0x10 + 0xc) = uStack_210._4_4_;
                uStack_210 = (longlong **)0x0;
                pplVar7 = uStack_210;
                uStack_210 = (longlong **)0x0;
                local_218 = (undefined8 ****)0x0;
                uVar10 = uVar10 & ~(uint)uVar31;
                puVar18 = local_c8;
                if (local_c8 == (uint *)0x0) {
                  puVar18 = (uint *)&local_d8;
                }
                iVar9 = (int)uVar28;
                lVar11 = (longlong)iVar9;
                uVar27 = puVar18[lVar11] & uVar10;
                if (uVar27 == 0) {
                  iVar15 = local_c0 + 0x1e;
                  if (-1 < local_c0 + -1) {
                    iVar15 = local_c0 + -1;
                  }
                  iVar15 = iVar15 >> 5;
                  iVar16 = iVar15;
                  if (iVar15 < iVar9) {
                    iVar16 = iVar9;
                  }
                  if (iVar15 <= iVar9) break;
                  lVar38 = 0;
                  while( true ) {
                    iVar20 = iVar20 + 0x20;
                    uVar27 = puVar18[lVar11 + lVar38 + 1];
                    if (uVar27 != 0) break;
                    lVar38 = lVar38 + 1;
                    if (iVar16 - lVar11 == lVar38) goto LAB_1434cd7ce;
                  }
                  uVar28 = (ulonglong)(iVar9 + (int)lVar38 + 1);
                  uVar10 = 0xffffffff;
                }
                uVar31 = (ulonglong)(-uVar27 & uVar27);
                uVar34 = uVar31 * 2 + 1;
                lVar11 = 0x3f;
                if (uVar34 != 0) {
                  for (; uVar34 >> lVar11 == 0; lVar11 = lVar11 + -1) {
                  }
                }
                iVar9 = (iVar20 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
              } while (iVar9 < local_c0);
            }
LAB_1434cd7ce:
            local_a0 = 0;
            if (local_a8 != 0) {
              FUN_1400020a8();
            }
            FUN_1407a3a68(&local_e8);
            plVar17 = local_298;
            plVar1 = local_2b0;
            uVar12 = local_2c0;
            if (0 < (int)uStack_220) {
              lVar11 = 0;
              do {
                local_218 = (undefined8 ****)0x0;
                uStack_210 = (longlong **)0x0;
                local_278 = (longlong ***)0x0;
                uStack_270 = 0;
                pppuVar26 = (undefined8 ***)(local_228 + lVar11 * 2);
                FUN_140056680(&local_e8,&DAT_149e06162);
                local_2e0 = (undefined8 ****)((ulonglong)local_2e0 & 0xffffffff00000000);
                local_2e8 = (undefined8 ***)CONCAT44(local_2e8._4_4_,1);
                cVar8 = FUN_1407cdbc6(pppuVar26,&local_e8,&local_218,&local_278);
                if ((undefined8 ***)local_e8 != (undefined8 ***)0x0) {
                  FUN_1400020a8();
                }
                if (cVar8 != '\0') {
                  ppppuVar25 = (undefined8 ****)&DAT_149dfb77a;
                  if ((int)uStack_210 != 0) {
                    ppppuVar25 = local_218;
                  }
                  FUN_1446f470e(&local_288,ppppuVar25,1);
                  if ((int)plVar17[1] != *(int *)((longlong)plVar17 + 0x34)) {
                    uVar10 = (uint)((ulonglong)local_288 >> 0x10);
                    uVar27 = (uint)local_288 & 0xffff;
                    plVar19 = (longlong *)plVar17[8];
                    if ((longlong *)plVar17[8] == (longlong *)0x0) {
                      plVar19 = plVar1;
                    }
                    iVar9 = *(int *)((longlong)plVar19 +
                                    (ulonglong)
                                    ((int)plVar17[9] - 1U &
                                    (int)((ulonglong)local_288 >> 0x20) +
                                    ((uint)local_288 << 0x10 | uVar27) +
                                    (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar27 >> 4)) * 4);
                    if (iVar9 != -1) {
                      do {
                        lVar38 = *plVar17 + (longlong)iVar9 * 0x20;
                        if (*(undefined8 ***)(*plVar17 + (longlong)iVar9 * 0x20) ==
                            (undefined8 **)local_288) {
                          if ((lVar38 + 8U & 0xfffffffffffffff7) != 0) goto LAB_1434cd95b;
                          break;
                        }
                        iVar9 = *(int *)(lVar38 + 0x18);
                      } while (iVar9 != -1);
                    }
                  }
                  local_e8 = &local_288;
                  ppplStack_e0 = (longlong ***)&local_278;
                  FUN_1406e263c(plVar17,local_23c,&local_e8,0);
                }
LAB_1434cd95b:
                if (local_278 != (longlong ***)0x0) {
                  FUN_1400020a8();
                }
                if (local_218 != (undefined8 ****)0x0) {
                  FUN_1400020a8();
                }
                lVar11 = lVar11 + 1;
              } while ((int)lVar11 < (int)uStack_220);
            }
            FUN_1447a1747(local_238,uStack_230 & 0xffffffff);
            if ((undefined8 ***)local_238 != (undefined8 ***)0x0) {
              FUN_1400020a8();
            }
            FUN_1447a1747(local_228,(ulonglong)uStack_220 & 0xffffffff);
            pplVar7 = local_2b8;
            if ((undefined8 ***)local_228 != (undefined8 ***)0x0) {
              FUN_1400020a8();
            }
            if (local_178 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            uVar29 = 0;
          } while (((ulonglong)pplVar7 & 1) != 0);
          local_e8 = (longlong **)0x0;
          ppplStack_e0 = (longlong ***)0x0;
          pppuVar26 = (undefined8 ***)&DAT_149dfb77a;
          if (local_160 != 0) {
            pppuVar26 = (undefined8 ***)local_168;
          }
          local_2e8 = (undefined8 ***)&DAT_14c872b28;
          cVar8 = FUN_1449da20c(uVar12,pppuVar26,L"BaseProfileName",&local_e8);
          if (cVar8 == '\0') {
            uVar28 = (ulonglong)uStack_150 >> 0x20;
            uStack_150 = (undefined8 ****)((ulonglong)uStack_150 & 0xffffffff00000000);
            if ((int)uVar28 != 0) {
              FUN_1446f8c06(&local_158,0);
            }
          }
          else {
            iVar9 = (int)ppplStack_e0 + -1;
            if ((int)ppplStack_e0 == 0) {
              iVar9 = 0;
            }
            FUN_1402980a2(&local_158,local_e8,iVar9);
          }
          if ((undefined8 ***)local_e8 != (undefined8 ***)0x0) {
            FUN_1400020a8();
          }
          bVar5 = (int)uStack_150 < 2;
        }
        if ((undefined8 ***)local_168 != (undefined8 ***)0x0) {
          FUN_1400020a8();
        }
      } while (!bVar5);
    }
  }
  if (local_158 != (code *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_1a8,uStack_1a0 & 0xffffffff);
  if (local_1a8 != (longlong ***)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_268,uStack_260 & 0xffffffff);
  if (local_268 != 0) {
    FUN_1400020a8();
  }
  local_100 = 0;
  if (local_108 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(&local_148);
  FUN_141477791(local_258,uStack_250 & 0xffffffff);
  if (local_258 != 0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_308) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar17;
code_r0x0001434ccfbd:
  iVar20 = (uint)(byte)(&DAT_149e05da0)[uVar2] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar3];
LAB_1434ccfc0:
  if (iVar20 == 0) {
LAB_1434ccfd1:
    if (plVar17 != (longlong *)0x0) goto LAB_1434cd085;
    goto LAB_1434ccfda;
  }
LAB_1434ccf63:
  iVar9 = *(int *)(local_148 + 0x10 + (longlong)iVar9 * 0x18);
  if (iVar9 == -1) goto LAB_1434ccfda;
  goto LAB_1434ccf46;
}



// FUNCTION 1434cdd22 FUN_1434cdd22 body=319 status=ok
// SIG undefined FUN_1434cdd22(void)

void FUN_1434cdd22(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined2 *local_58;
  ulonglong uStack_50;
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = FUN_1414c1de0();
  local_40 = *(undefined2 **)(lVar2 + 0x18);
  FUN_1400021e4(&local_40,&local_58);
  puVar4 = &DAT_149dfb77a;
  puVar3 = &DAT_149dfb77a;
  if ((int)uStack_50 != 0) {
    puVar3 = local_58;
  }
  if (*(int *)(param_1 + 1) != 0) {
    puVar4 = (undefined2 *)*param_1;
  }
  FUN_140002266(&local_40,L"%s %s",puVar4,puVar3);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  puVar4 = local_40;
  if (local_38 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  cVar1 = FUN_1417072b0(param_4,puVar4,&DAT_14c872b28);
  if (cVar1 != '\0') {
    local_58 = (undefined2 *)0x0;
    uStack_50 = 0;
    puVar4 = &DAT_149dfb77a;
    if (*(int *)(param_2 + 1) != 0) {
      puVar4 = (undefined2 *)*param_2;
    }
    puVar3 = &DAT_149dfb77a;
    if (local_38 != 0) {
      puVar3 = local_40;
    }
    local_68 = &DAT_14c872b28;
    FUN_14105aa76(param_4,puVar3,puVar4,&local_58);
    FUN_140b7fa3a(param_3,&local_58);
    FUN_1447a1747(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1434cde74 FUN_1434cde74 body=2457 status=ok
// SIG undefined FUN_1434cde74(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434cde74(undefined8 param_1)

{
  ulonglong uVar1;
  void *_Src;
  undefined2 **_Src_00;
  uint uVar2;
  longlong *plVar3;
  uint *puVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined *puVar9;
  undefined2 *puVar10;
  longlong lVar11;
  undefined2 *puVar12;
  int iVar13;
  ushort uVar14;
  longlong lVar15;
  ushort uVar16;
  uint uVar17;
  ulonglong uVar18;
  char cVar19;
  int iVar20;
  ulonglong uVar21;
  undefined8 uVar22;
  bool bVar23;
  undefined1 auStack_148 [32];
  undefined1 local_128;
  undefined1 local_120;
  undefined8 local_118;
  char local_109;
  uint local_108;
  int local_104;
  ulonglong local_100;
  ulonglong local_f8;
  ulonglong local_f0;
  longlong local_e8 [2];
  longlong *local_d8;
  undefined2 ***local_d0;
  uint local_c8;
  undefined2 *local_c0;
  int local_b8;
  undefined2 **local_b0;
  longlong **local_a8;
  undefined1 local_9c [4];
  longlong local_98 [2];
  uint local_88 [4];
  uint *local_78;
  uint local_70;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_1434cc1e4(local_98,param_1);
  FUN_14587c83e(&DAT_14cad60d0,0);
  uVar22 = DAT_14c872ce0;
  puVar12 = DAT_14c872ce8;
  if (DAT_14c872cf0 == 0) {
    puVar12 = &DAT_149dfb77a;
  }
  FUN_140056680(&local_d8,puVar12);
  plVar3 = (longlong *)FUN_140d6a126(uVar22,L"ConsoleVariables",0,&local_d8);
  if (local_d8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (plVar3 != (longlong *)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cad6260) && (FUN_144b3d300(&DAT_14cad6260), DAT_14cad6260 == -1)) {
      FUN_1446f470e(&DAT_14cad6258,L"dp.AllowScalabilityGroupsToChangeAtRuntime",1);
      _Init_thread_footer(&DAT_14cad6260);
    }
    if ((int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34)) {
      uVar2 = (uint)((ulonglong)DAT_14cad6258 >> 0x10);
      uVar17 = (uint)DAT_14cad6258 & 0xffff;
      plVar5 = plVar3 + 7;
      if ((longlong *)plVar3[8] != (longlong *)0x0) {
        plVar5 = (longlong *)plVar3[8];
      }
      iVar13 = *(int *)((longlong)plVar5 +
                       (ulonglong)
                       ((int)plVar3[9] - 1U &
                       (int)((ulonglong)DAT_14cad6258 >> 0x20) +
                       ((uint)DAT_14cad6258 << 0x10 | uVar17) + (uVar2 << 0x13 | uVar2 & 0xffff) +
                       (uVar17 >> 4)) * 4);
      if (iVar13 != -1) {
        do {
          lVar15 = *plVar3 + (longlong)iVar13 * 0x40;
          if (*(longlong *)(*plVar3 + (longlong)iVar13 * 0x40) == DAT_14cad6258) {
            if (lVar15 + 8 != 0 && lVar15 != 0) {
              FUN_1400021e4(&DAT_14cad6258,&local_d8);
              uVar18 = (ulonglong)(*(int *)(lVar15 + 0x28) - 2U < 0x7fffffff) * 0x10;
              puVar12 = &DAT_149dfb77a;
              if (*(int *)(lVar15 + 0x18 + uVar18) != 0) {
                puVar12 = *(undefined2 **)(lVar15 + 8 + (uVar18 | 8));
              }
              plVar3 = (longlong *)&DAT_149dfb77a;
              if ((int)local_d0 != 0) {
                plVar3 = local_d8;
              }
              puVar8 = &DAT_149dfb77a;
              if (DAT_14c872cf0 != 0) {
                puVar8 = DAT_14c872ce8;
              }
              local_120 = 0;
              local_128 = 0;
              local_118 = 0;
              FUN_1412e8829(puVar8,plVar3,puVar12,0x4000000);
              if (local_d8 != (longlong *)0x0) {
                FUN_1400020a8();
              }
            }
            break;
          }
          iVar13 = *(int *)(lVar15 + 0x38);
        } while (iVar13 != -1);
      }
    }
  }
  if (local_70 == 0) {
    uVar18 = 1;
    uVar21 = 0;
    iVar13 = 0;
    uVar2 = 0;
  }
  else {
    puVar4 = local_78;
    if (local_78 == (uint *)0x0) {
      puVar4 = local_88;
    }
    uVar2 = *puVar4;
    if (uVar2 == 0) {
      iVar13 = local_70 + 0x1e;
      if (-1 < (int)(local_70 - 1)) {
        iVar13 = local_70 - 1;
      }
      uVar21 = 0;
      uVar18 = (ulonglong)(uint)(iVar13 >> 5);
      if (iVar13 >> 5 < 1) {
        uVar18 = uVar21;
      }
      iVar13 = 0;
      do {
        if (uVar18 == uVar21) goto LAB_1434ce0f2;
        iVar13 = iVar13 + 0x20;
        uVar2 = puVar4[uVar21 + 1];
        uVar21 = uVar21 + 1;
      } while (uVar2 == 0);
    }
    else {
      uVar21 = 0;
      iVar13 = 0;
    }
    uVar18 = (ulonglong)(-uVar2 & uVar2);
    uVar1 = uVar18 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    uVar2 = (iVar13 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    if ((int)local_70 <= (int)uVar2) {
      uVar2 = local_70;
    }
  }
  if (uVar2 == local_70) {
LAB_1434ce0f2:
    FUN_140bb2e20(&DAT_14cad61d0,local_98);
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_140bb2a1a(local_98);
    if ((local_48 ^ (ulonglong)auStack_148) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  uVar17 = 0xffffffff;
  local_100 = (ulonglong)local_70;
LAB_1434ce178:
  plVar3 = (longlong *)((longlong)(int)uVar2 * 0x20 + local_98[0]);
  local_108 = uVar17;
  local_f8 = uVar18;
  local_f0 = uVar21;
  FUN_1400021e4(plVar3,&local_c0);
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  puVar12 = &DAT_149dfb77a;
  if (local_b8 != 0) {
    puVar12 = local_c0;
  }
  bVar23 = true;
  local_104 = iVar13;
  plVar5 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,puVar12,1);
  if (plVar5 != (longlong *)0x0) {
    uVar18 = 0;
    iVar13 = local_b8 + -1;
    if (local_b8 == 0) {
      iVar13 = 0;
    }
    if (0 < iVar13) {
      puVar12 = &DAT_149dfb77a;
      if (local_b8 != 0) {
        puVar12 = local_c0;
      }
      lVar15 = 0;
      uVar18 = 0;
      do {
        uVar2 = ((uint)(0x19 < (ushort)puVar12[lVar15] - 0x61) * 0x20 +
                (uint)(ushort)puVar12[lVar15]) - 0x20;
        uVar17 = (uint)(uVar18 >> 8) ^
                 *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar18 ^ uVar2) & 0xff) * 4);
        uVar18 = (ulonglong)
                 (uVar17 >> 8 ^
                 *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar17 & 0xff ^ uVar2 >> 8 & 0xff) * 4));
        lVar15 = lVar15 + 1;
      } while (iVar13 != (int)lVar15);
    }
    iVar13 = FUN_141026e88(&DAT_14cad6180,uVar18,&local_c0);
    lVar15 = (longlong)iVar13 * 0x30 + _DAT_14cad6180;
    cVar19 = lVar15 == 0 || iVar13 == -1;
    if (lVar15 == 0 || iVar13 == -1) {
      local_109 = cVar19;
      uVar2 = (**(code **)(*plVar5 + 0x18))(plVar5);
      (**(code **)(*plVar5 + 0xc0))(plVar5,&local_b0);
      _Src_00 = local_b0;
      local_d8 = (longlong *)0x0;
      lVar15 = (longlong)(int)local_a8;
      local_d0 = (undefined2 ***)CONCAT44(local_d0._4_4_,(int)local_a8);
      if (lVar15 == 0) {
        local_d0 = (undefined2 ***)((ulonglong)local_a8 & 0xffffffff);
      }
      else {
        FUN_1446dd670(&local_d8,(ulonglong)local_a8 & 0xffffffff,0);
        memcpy(local_d8,_Src_00,lVar15 * 2);
      }
      local_c8 = uVar2 & 0xff000000;
      cVar19 = local_109;
      if (local_b0 != (undefined2 **)0x0) {
        FUN_1400020a8(local_b0);
        cVar19 = local_109;
      }
    }
    else {
      local_d8 = (longlong *)0x0;
      uVar2 = *(uint *)(lVar15 + 0x18);
      _Src = *(void **)(lVar15 + 0x10);
      local_d0 = (undefined2 ***)CONCAT44(local_d0._4_4_,uVar2);
      if ((longlong)(int)uVar2 == 0) {
        local_d0 = (undefined2 ***)(ulonglong)uVar2;
      }
      else {
        FUN_1446dd670(&local_d8,uVar2,0);
        memcpy(local_d8,_Src,(longlong)(int)uVar2 * 2);
      }
      local_c8 = *(uint *)(lVar15 + 0x20);
    }
    bVar23 = true;
    if (DAT_14cad61d8 != DAT_14cad6204) {
      lVar15 = *plVar3;
      uVar2 = (uint)((ulonglong)lVar15 >> 0x10);
      uVar17 = (uint)lVar15 & 0xffff;
      puVar9 = DAT_14cad6210;
      if (DAT_14cad6210 == (undefined *)0x0) {
        puVar9 = &DAT_14cad6208;
      }
      iVar13 = *(int *)(puVar9 + (ulonglong)
                                 (DAT_14cad6218 - 1U &
                                 (int)((ulonglong)lVar15 >> 0x20) + ((uint)lVar15 << 0x10 | uVar17)
                                 + (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar17 >> 4)) * 4);
      while (iVar13 != -1) {
        lVar11 = DAT_14cad61d0 + (longlong)iVar13 * 0x20;
        if (*(longlong *)(DAT_14cad61d0 + (longlong)iVar13 * 0x20) == lVar15) {
          if ((longlong *)(lVar11 + 8) != (longlong *)0x0 && lVar11 != 0) {
            iVar13 = (int)plVar3[2];
            if (iVar13 != *(int *)(lVar11 + 0x10)) {
              bVar23 = *(int *)(lVar11 + 0x10) + iVar13 == 1;
              goto LAB_1434ce4d3;
            }
            bVar23 = true;
            if (iVar13 < 2) goto LAB_1434ce4d3;
            lVar15 = 0;
            goto LAB_1434ce480;
          }
          break;
        }
        iVar13 = *(int *)(lVar11 + 0x18);
      }
    }
    goto LAB_1434ce4d7;
  }
  goto LAB_1434ce530;
LAB_1434ce480:
  uVar14 = *(ushort *)(plVar3[1] + lVar15);
  uVar2 = (uint)uVar14;
  uVar16 = *(ushort *)(*(longlong *)(lVar11 + 8) + lVar15);
  uVar17 = (uint)uVar16;
  if (uVar14 != uVar16) {
    if ((uVar16 | uVar14) < 0x80) {
      uVar2 = (uint)(byte)(&DAT_149e05da0)[uVar14];
      uVar17 = (uint)(byte)(&DAT_149e05da0)[uVar16];
      if ((&DAT_149e05da0)[uVar14] == (&DAT_149e05da0)[uVar16]) goto LAB_1434ce494;
    }
    iVar13 = uVar2 - uVar17;
    goto LAB_1434ce4cd;
  }
  if (uVar14 == 0) goto LAB_1434ce4cb;
LAB_1434ce494:
  lVar15 = lVar15 + 2;
  goto LAB_1434ce480;
LAB_1434ce4cb:
  iVar13 = 0;
LAB_1434ce4cd:
  bVar23 = iVar13 == 0;
LAB_1434ce4d3:
  bVar23 = (bool)(bVar23 ^ 1);
LAB_1434ce4d7:
  if (cVar19 == '\0') {
    FUN_1434d51c8(&DAT_14cad6180,&local_c0);
  }
  local_b0 = &local_c0;
  local_a8 = &local_d8;
  FUN_141026a52(&DAT_14cad6130,local_e8,&local_b0);
  if (local_d8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_1434ce530:
  puVar12 = &DAT_149dfb77a;
  if (local_b8 != 0) {
    puVar12 = local_c0;
  }
  lVar15 = 3;
  lVar11 = 0;
  while( true ) {
    uVar14 = *(ushort *)((longlong)puVar12 + lVar11);
    uVar18 = (ulonglong)uVar14;
    uVar16 = *(ushort *)((longlong)&DAT_14a8b6cb0 + lVar11);
    if (uVar14 != uVar16) break;
    if (uVar14 == 0) goto LAB_1434ce5a7;
LAB_1434ce565:
    lVar15 = lVar15 + -1;
    if (lVar15 == 0) goto LAB_1434ce5a7;
    lVar11 = lVar11 + 2;
  }
  if ((uVar16 | uVar14) < 0x80) {
    uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar18];
    uVar21 = (ulonglong)uVar16;
    uVar16 = (ushort)(byte)(&DAT_149e05da0)[uVar21];
    if ((&DAT_149e05da0)[uVar18] == (&DAT_149e05da0)[uVar21]) goto LAB_1434ce565;
  }
  uVar22 = 0x6000000;
  if (uVar14 != uVar16) goto LAB_1434ce661;
LAB_1434ce5a7:
  uVar22 = 0x1000000;
  if (0 < *DAT_14cad60b0) {
    puVar12 = &DAT_149dfb77a;
    if ((int)plVar3[2] != 0) {
      puVar12 = (undefined2 *)plVar3[1];
    }
    FUN_140056680(&local_b0,puVar12);
    puVar12 = &DAT_149dfb77a;
    if (local_b8 != 0) {
      puVar12 = local_c0;
    }
    FUN_140056680(local_e8,puVar12);
    local_d0 = &local_b0;
    local_d8 = local_e8;
    FUN_1411f1c38(&DAT_14cad60d0,local_9c,&local_d8,0);
    if (local_e8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_b0 != (undefined2 **)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1434ce661:
  iVar13 = local_104;
  if (bVar23) {
    puVar12 = &DAT_149dfb77a;
    if ((int)plVar3[2] != 0) {
      puVar12 = (undefined2 *)plVar3[1];
    }
    puVar8 = &DAT_149dfb77a;
    if (local_b8 != 0) {
      puVar8 = local_c0;
    }
    puVar10 = &DAT_149dfb77a;
    if (DAT_14c872b30 != 0) {
      puVar10 = DAT_14c872b28;
    }
    local_118 = 0;
    local_120 = 1;
    local_128 = 0;
    FUN_1412e8829(puVar10,puVar8,puVar12,uVar22);
  }
  if (local_c0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar17 = local_108 & ~(uint)local_f8;
  puVar4 = local_78;
  if (local_78 == (uint *)0x0) {
    puVar4 = local_88;
  }
  iVar20 = (int)local_f0;
  lVar15 = (longlong)iVar20;
  uVar2 = puVar4[lVar15] & uVar17;
  uVar21 = local_f0;
  if (uVar2 == 0) {
    iVar6 = local_70 + 0x1e;
    if (-1 < (int)(local_70 - 1)) {
      iVar6 = local_70 - 1;
    }
    iVar6 = iVar6 >> 5;
    iVar13 = iVar13 + 0x20;
    iVar7 = iVar6;
    if (iVar6 < iVar20) {
      iVar7 = iVar20;
    }
    if (iVar20 < iVar6) {
      lVar11 = 0;
      do {
        uVar2 = puVar4[lVar15 + lVar11 + 1];
        if (uVar2 != 0) {
          uVar21 = (ulonglong)(iVar20 + (int)lVar11 + 1);
          uVar17 = 0xffffffff;
          goto LAB_1434ce765;
        }
        iVar13 = iVar13 + 0x20;
        lVar11 = lVar11 + 1;
      } while (iVar7 - lVar15 != lVar11);
      uVar17 = 0xffffffff;
      iVar20 = iVar7;
    }
    uVar21 = (ulonglong)(iVar20 + 1);
    uVar18 = local_f8;
    uVar2 = local_70;
  }
  else {
LAB_1434ce765:
    uVar18 = (ulonglong)(-uVar2 & uVar2);
    uVar1 = uVar18 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    uVar2 = (iVar13 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    if ((int)local_70 <= (int)uVar2) {
      uVar2 = local_70;
    }
  }
  if (uVar2 == (uint)local_100) goto LAB_1434ce0f2;
  goto LAB_1434ce178;
}



// FUNCTION 1434ce80e FUN_1434ce80e body=681 status=ok
// SIG undefined FUN_1434ce80e(void)

void FUN_1434ce80e(void)

{
  ulonglong uVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  uint *puVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14cad6158 == 0) {
    uVar11 = 1;
    uVar14 = 0;
    iVar10 = 0;
    iVar9 = 0;
  }
  else {
    puVar7 = &DAT_14cad6140;
    if (DAT_14cad6150 != (uint *)0x0) {
      puVar7 = DAT_14cad6150;
    }
    uVar12 = *puVar7;
    if (uVar12 == 0) {
      iVar9 = DAT_14cad6158 + 0x1e;
      if (-1 < DAT_14cad6158 + -1) {
        iVar9 = DAT_14cad6158 + -1;
      }
      uVar14 = 0;
      uVar11 = (ulonglong)(uint)(iVar9 >> 5);
      if (iVar9 >> 5 < 1) {
        uVar11 = uVar14;
      }
      iVar10 = 0;
      do {
        if (uVar11 == uVar14) goto LAB_1434cea6e;
        iVar10 = iVar10 + 0x20;
        uVar12 = puVar7[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar14 = 0;
      iVar10 = 0;
    }
    uVar11 = (ulonglong)(-uVar12 & uVar12);
    uVar1 = uVar11 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar9 = (iVar10 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (DAT_14cad6158 <= iVar9) {
      iVar9 = DAT_14cad6158;
    }
  }
  if (iVar9 < DAT_14cad6158) {
    uVar12 = 0xffffffff;
    do {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      lVar13 = (longlong)iVar9 * 0x30;
      puVar6 = &DAT_149dfb77a;
      if (*(int *)(DAT_14cad6130 + 8 + lVar13) != 0) {
        puVar6 = *(undefined2 **)(DAT_14cad6130 + lVar13);
      }
      plVar3 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,puVar6,1);
      lVar8 = DAT_14cad6130;
      if (plVar3 != (longlong *)0x0) {
        uVar2 = (**(code **)(*plVar3 + 0x18))(plVar3);
        if (((int)(uVar2 & 0xff000000) < 0x6000001) ||
           ((int)(uVar2 & 0xff000000) <= *(int *)(lVar8 + 0x20 + lVar13))) {
          puVar6 = &DAT_149dfb77a;
          if (*(int *)(lVar8 + 0x18 + lVar13) != 0) {
            puVar6 = *(undefined2 **)(lVar8 + lVar13 + 0x10);
          }
          uVar2 = (**(code **)(*plVar3 + 0x18))(plVar3);
          (**(code **)(*plVar3 + 0x98))(plVar3,puVar6,uVar2 & 0xff000000,0);
          puVar6 = &DAT_149dfb77a;
          if (*(int *)(DAT_14cad6130 + 8 + lVar13) != 0) {
            puVar6 = *(undefined2 **)(DAT_14cad6130 + lVar13);
          }
          FUN_1446f470e(&local_50,puVar6,1);
          FUN_1467db386(&DAT_14cad61d0,local_50);
        }
      }
      uVar12 = uVar12 & ~(uint)uVar11;
      puVar7 = DAT_14cad6150;
      if (DAT_14cad6150 == (uint *)0x0) {
        puVar7 = &DAT_14cad6140;
      }
      iVar9 = (int)uVar14;
      lVar13 = (longlong)iVar9;
      uVar2 = puVar7[lVar13] & uVar12;
      if (uVar2 == 0) {
        iVar4 = DAT_14cad6158 + 0x1e;
        if (-1 < DAT_14cad6158 + -1) {
          iVar4 = DAT_14cad6158 + -1;
        }
        iVar4 = iVar4 >> 5;
        iVar5 = iVar4;
        if (iVar4 < iVar9) {
          iVar5 = iVar9;
        }
        if (iVar4 <= iVar9) break;
        lVar8 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar2 = puVar7[lVar13 + lVar8 + 1];
          if (uVar2 != 0) break;
          lVar8 = lVar8 + 1;
          if (iVar5 - lVar13 == lVar8) goto LAB_1434cea6e;
        }
        uVar14 = (ulonglong)(iVar9 + (int)lVar8 + 1);
        uVar12 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar2 & uVar2);
      uVar1 = uVar11 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar9 = (iVar10 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar9 < DAT_14cad6158);
  }
LAB_1434cea6e:
  if (DAT_14cad6138 != DAT_14cad6164) {
    FUN_1434d2ae2();
    FUN_1417c4ab8();
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434ceab8 FUN_1434ceab8 body=255 status=ok
// SIG undefined FUN_1434ceab8(void)

void FUN_1434ceab8(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_1f8 [32];
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  int iStack_1b0;
  undefined4 uStack_1ac;
  undefined1 local_36;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  local_1d8 = 0;
  uStack_1d0 = 0;
  if (DAT_14cad6230 == 0) {
    FUN_140fde876(&local_1b8);
    iVar1 = iStack_1b0 + -1;
    if (iStack_1b0 == 0) {
      iVar1 = 0;
    }
    lVar2 = CONCAT44(uStack_1b4,local_1b8);
    FUN_1402980a2(&local_1d8,lVar2,iVar1);
    if (lVar2 != 0) {
      FUN_1400020a8(lVar2);
    }
  }
  else {
    local_1c0 = *(undefined8 *)(*(longlong *)(DAT_14cad6230 + 0x78) + 0x18);
    FUN_1400021e4(&local_1c0,&local_1b8);
    local_1d8 = CONCAT44(uStack_1b4,local_1b8);
    uStack_1d0 = CONCAT44(uStack_1ac,iStack_1b0);
    FUN_140d6a6b4(&local_1b8);
    local_36 = param_3;
    FUN_140d6b9d6(&local_1b8,L"DeviceProfiles",&DAT_14c872b28);
    FUN_140d6b5be(&local_1b8);
  }
  FUN_1434cde74(&local_1d8);
  if (local_1d8 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434cebb8 FUN_1434cebb8 body=1208 status=ok
// SIG undefined FUN_1434cebb8(void)

bool FUN_1434cebb8(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  ushort uVar1;
  ushort uVar2;
  void *_Src;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  undefined2 *puVar13;
  longlong lVar14;
  uint uVar15;
  undefined2 *puVar16;
  undefined1 auStack_f8 [32];
  longlong *local_d8;
  int local_c4;
  longlong *local_c0;
  longlong *local_b8;
  longlong *local_b0;
  longlong *local_a8;
  undefined2 *local_a0;
  undefined2 *local_98;
  undefined8 uStack_90;
  undefined2 *local_80;
  int local_78;
  undefined2 *local_70;
  int local_68;
  int local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_70 = (undefined2 *)0x0;
  local_68 = *(int *)(param_2 + 1);
  lVar14 = (longlong)local_68;
  _Src = (void *)*param_2;
  local_b8 = param_3;
  if (lVar14 == 0) {
    local_64 = 0;
    bVar3 = true;
  }
  else {
    FUN_1446dd670(&local_70,local_68,0);
    memcpy(local_70,_Src,lVar14 * 2);
    bVar3 = local_68 < 2;
  }
  local_a8 = local_b8 + 7;
  local_b0 = param_1 + 1;
  local_c0 = param_1;
LAB_1434cec82:
  bVar5 = bVar3;
  if (!bVar5) {
    lVar14 = FUN_14129a444();
    local_80 = *(undefined2 **)(lVar14 + 0x18);
    FUN_1400021e4(&local_80,&local_98);
    puVar13 = &DAT_149dfb77a;
    if ((int)uStack_90 != 0) {
      puVar13 = local_98;
    }
    puVar16 = &DAT_149dfb77a;
    if (local_68 != 0) {
      puVar16 = local_70;
    }
    FUN_140002266(&local_80,L"%s %s",puVar16,puVar13);
    if (local_98 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    lVar14 = (longlong)(int)((longlong *)*param_1)[1];
    bVar4 = true;
    if (lVar14 != 0) {
      plVar10 = *(longlong **)*param_1;
      plVar9 = plVar10 + lVar14 * 2;
LAB_1434ced1b:
      if ((int)plVar10[1] == local_78) {
        if (1 < local_78) {
          lVar14 = 0;
          do {
            uVar1 = *(ushort *)(*plVar10 + lVar14);
            uVar2 = *(ushort *)((longlong)local_80 + lVar14);
            if (uVar1 == uVar2) {
              if (uVar1 == 0) break;
            }
            else {
              if (0x7f < (uVar2 | uVar1)) {
                iVar7 = (uint)uVar1 - (uint)uVar2;
                goto LAB_1434ced93;
              }
              if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2])
              goto code_r0x0001434ced90;
            }
            lVar14 = lVar14 + 2;
          } while( true );
        }
        goto LAB_1434cedae;
      }
      if ((int)plVar10[1] + local_78 == 1) goto LAB_1434cedae;
      goto LAB_1434ced30;
    }
    bVar3 = true;
    goto LAB_1434cefda;
  }
  goto LAB_1434cf022;
code_r0x0001434ced90:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar1] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
LAB_1434ced93:
  if (iVar7 != 0) {
LAB_1434ced30:
    plVar10 = plVar10 + 2;
    if (plVar10 == plVar9) goto LAB_1434ced9f;
    goto LAB_1434ced1b;
  }
LAB_1434cedae:
  local_c4 = local_68;
  uVar15 = 0;
  iVar7 = local_68 + -1;
  if (local_68 == 0) {
    iVar7 = 0;
  }
  if (0 < iVar7) {
    puVar13 = &DAT_149dfb77a;
    if (local_68 != 0) {
      puVar13 = local_70;
    }
    lVar14 = 0;
    uVar15 = 0;
    do {
      uVar8 = ((uint)(ushort)puVar13[lVar14] + (uint)(0x19 < (ushort)puVar13[lVar14] - 0x61) * 0x20)
              - 0x20;
      uVar15 = uVar15 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar15 ^ uVar8) & 0xff) * 4);
      uVar15 = uVar15 >> 8 ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar15 & 0xff ^ uVar8 >> 8 & 0xff) * 4);
      lVar14 = lVar14 + 1;
    } while (iVar7 != (int)lVar14);
  }
  if ((int)local_b8[1] != *(int *)((longlong)local_b8 + 0x34)) {
    plVar10 = (longlong *)local_b8[8];
    if ((longlong *)local_b8[8] == (longlong *)0x0) {
      plVar10 = local_a8;
    }
    iVar7 = *(int *)((longlong)plVar10 + (ulonglong)((int)local_b8[9] - 1U & uVar15) * 4);
    if (iVar7 != -1) {
      lVar14 = *local_b8;
      local_a0 = local_70;
LAB_1434cee8b:
      lVar11 = (longlong)iVar7;
      iVar7 = *(int *)(lVar14 + 8 + lVar11 * 0x18);
      bVar3 = false;
      param_1 = local_c0;
      if (iVar7 == local_68) {
        if (1 < local_68) {
          lVar12 = 0;
          do {
            uVar1 = *(ushort *)(*(longlong *)(lVar14 + lVar11 * 0x18) + lVar12);
            uVar2 = *(ushort *)((longlong)local_70 + lVar12);
            if (uVar1 == uVar2) {
              if (uVar1 == 0) {
                bVar4 = false;
                goto LAB_1434cefda;
              }
            }
            else {
              if (0x7f < (uVar2 | uVar1)) {
                iVar7 = (uint)uVar1 - (uint)uVar2;
                goto LAB_1434cef1a;
              }
              if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2])
              goto code_r0x0001434cef17;
            }
            lVar12 = lVar12 + 2;
          } while( true );
        }
        goto LAB_1434ceffd;
      }
      if (iVar7 + local_68 == 1) goto LAB_1434ceffd;
      goto LAB_1434ceea8;
    }
  }
LAB_1434cef31:
  local_98 = (undefined2 *)0x0;
  uStack_90 = 0;
  puVar13 = local_80;
  if (local_78 == 0) {
    puVar13 = &DAT_149dfb77a;
  }
  local_d8 = local_b0;
  cVar6 = FUN_1449da20c(DAT_14c872ce0,puVar13,L"BaseProfileName",&local_98);
  param_1 = local_c0;
  if (cVar6 == '\0') {
    local_68 = 0;
    if (local_64 != 0) {
      FUN_1446f8c06(&local_70,0);
    }
  }
  else {
    iVar7 = (int)uStack_90 + -1;
    if ((int)uStack_90 == 0) {
      iVar7 = 0;
    }
    FUN_1402980a2(&local_70,local_98,iVar7);
    param_1 = local_c0;
  }
  if (local_98 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  bVar3 = local_68 < 2;
LAB_1434cefda:
  if (local_80 != (undefined2 *)0x0) {
    FUN_1400020a8(local_80);
  }
  if (!bVar4) {
LAB_1434cf022:
    if (local_70 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return !bVar5;
  }
  goto LAB_1434cec82;
code_r0x0001434cef17:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar1] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
LAB_1434cef1a:
  if (iVar7 == 0) {
LAB_1434ceffd:
    bVar4 = false;
    goto LAB_1434cefda;
  }
LAB_1434ceea8:
  iVar7 = *(int *)(lVar14 + 0x10 + lVar11 * 0x18);
  if (iVar7 == -1) goto LAB_1434cef31;
  goto LAB_1434cee8b;
LAB_1434ced9f:
  bVar3 = true;
  goto LAB_1434cefda;
}



// FUNCTION 1434cf072 FUN_1434cf072 body=142 status=ok
// SIG undefined FUN_1434cf072(void)

void FUN_1434cf072(void)

{
  if ((*(longlong *)(DAT_14cad6230 + 0x80) != 0) && (*(longlong *)(DAT_14cad6230 + 0x78) != 0)) {
    FUN_1434cf100();
    return;
  }
  FUN_141477791(DAT_14cad6220,DAT_14cad6228);
  DAT_14cad6228 = 0;
  if (DAT_14cad622c != 0) {
    FUN_145a48116(&DAT_14cad6220);
  }
  FUN_1434ce80e();
  FUN_1434ceab8(0,0,0);
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434cf0ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0x50))();
  return;
}



// FUNCTION 1434cf100 FUN_1434cf100 body=155 status=ok
// SIG undefined FUN_1434cf100(void)

void FUN_1434cf100(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x80) == 0) {
    *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(DAT_14cad6230 + 0x78);
  }
  FUN_141477791(DAT_14cad6220,DAT_14cad6228);
  DAT_14cad6228 = 0;
  if (DAT_14cad622c != 0) {
    FUN_145a48116(&DAT_14cad6220);
  }
  FUN_1434ce80e();
  FUN_1434ca392(DAT_14cad6230,param_2);
  FUN_1434ceab8(0,0,0);
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434cf189. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0x50))();
  return;
}



// FUNCTION 1434cf19c FUN_1434cf19c body=124 status=ok
// SIG undefined FUN_1434cf19c(void)

void FUN_1434cf19c(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1434ce80e();
    FUN_141477791(DAT_14cad6220,DAT_14cad6228);
    DAT_14cad6228 = 0;
    if (DAT_14cad622c != 0) {
      FUN_145a48116(&DAT_14cad6220);
    }
    FUN_1434ca392(param_1,*(undefined8 *)(param_1 + 0x80));
    *(undefined8 *)(param_1 + 0x80) = 0;
    FUN_1434ceab8(0,0,0);
    return;
  }
  return;
}



// FUNCTION 1434cf218 FUN_1434cf218 body=1078 status=ok
// SIG undefined FUN_1434cf218(void)

void FUN_1434cf218(longlong param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  uint *puVar4;
  undefined2 *puVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined1 auStack_108 [44];
  int local_dc;
  ulonglong local_d8;
  longlong local_d0;
  longlong local_c8;
  undefined2 *local_c0;
  int local_b8;
  undefined2 **local_b0;
  longlong local_a8;
  undefined1 local_9c [4];
  longlong local_98 [2];
  uint local_88 [4];
  uint *local_78;
  uint local_70;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  uVar3 = FUN_1434d0548();
  *(undefined8 *)(param_1 + 0xb0) = uVar3;
  FUN_14147719c(param_1,uVar3);
  if (*(longlong *)(param_1 + 0xb0) == 0) {
    FUN_140fde876(local_98);
    lVar10 = FUN_1415de87c(param_1,local_98,1,0);
    if (local_98[0] != 0) {
      FUN_1400020a8();
    }
  }
  else {
    lVar10 = *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x10);
  }
  if ((lVar10 != 0) &&
     ((lVar10 != *(longlong *)(param_1 + 0x78) || (*(char *)(param_1 + 0xc9) == '\x01')))) {
    local_98[0] = *(longlong *)(lVar10 + 0x18);
    FUN_1400021e4(local_98,&local_b0);
    FUN_1434cc1e4(local_98,&local_b0);
    if (local_b0 != (undefined2 **)0x0) {
      FUN_1400020a8();
    }
    local_d0 = lVar10;
    local_c8 = param_1;
    if (local_70 == 0) {
      uVar9 = 1;
      uVar13 = 0;
      local_dc = 0;
      uVar1 = 0;
    }
    else {
      puVar4 = local_78;
      if (local_78 == (uint *)0x0) {
        puVar4 = local_88;
      }
      uVar1 = *puVar4;
      if (uVar1 == 0) {
        iVar2 = local_70 + 0x1e;
        if (-1 < (int)(local_70 - 1)) {
          iVar2 = local_70 - 1;
        }
        uVar13 = 0;
        uVar9 = (ulonglong)(uint)(iVar2 >> 5);
        if (iVar2 >> 5 < 1) {
          uVar9 = uVar13;
        }
        local_dc = 0;
        do {
          if (uVar9 == uVar13) goto LAB_1434cf39d;
          local_dc = local_dc + 0x20;
          uVar1 = puVar4[uVar13 + 1];
          uVar13 = uVar13 + 1;
        } while (uVar1 == 0);
      }
      else {
        uVar13 = 0;
        local_dc = 0;
      }
      uVar9 = (ulonglong)(-uVar1 & uVar1);
      uVar8 = uVar9 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      uVar1 = (local_dc - ((uint)lVar10 ^ 0x3f)) + 0x3e;
      if ((int)local_70 <= (int)uVar1) {
        uVar1 = local_70;
      }
    }
    if (uVar1 != local_70) {
      uVar14 = 0xffffffff;
      local_d8 = (ulonglong)local_70;
      do {
        FUN_1400021e4((longlong)(int)uVar1 * 0x20 + local_98[0],&local_c0);
        iVar2 = local_b8 + -1;
        if (local_b8 == 0) {
          iVar2 = 0;
        }
        uVar8 = 0;
        if (0 < iVar2) {
          puVar5 = &DAT_149dfb77a;
          if (local_b8 != 0) {
            puVar5 = local_c0;
          }
          lVar10 = 0;
          uVar8 = 0;
          do {
            uVar1 = ((uint)(0x19 < (ushort)puVar5[lVar10] - 0x61) * 0x20 +
                    (uint)(ushort)puVar5[lVar10]) - 0x20;
            uVar12 = (uint)(uVar8 >> 8) ^
                     *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar8 ^ uVar1) & 0xff) * 4);
            uVar8 = (ulonglong)
                    (uVar12 >> 8 ^
                    *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar12 & 0xff ^ uVar1 >> 8 & 0xff) * 4));
            lVar10 = lVar10 + 1;
          } while (iVar2 != (int)lVar10);
        }
        iVar2 = FUN_141026e88(&DAT_14cad6130,uVar8,&local_c0);
        lVar10 = (longlong)iVar2 * 0x30 + DAT_14cad6130;
        if (lVar10 != 0 && iVar2 != -1) {
          local_a8 = lVar10 + 0x10;
          local_b0 = &local_c0;
          FUN_141026a52(&DAT_14cad6180,local_9c,&local_b0);
          FUN_1434d51c8(&DAT_14cad6130,&local_c0);
        }
        if (local_c0 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        uVar14 = uVar14 & ~(uint)uVar9;
        puVar4 = local_78;
        if (local_78 == (uint *)0x0) {
          puVar4 = local_88;
        }
        iVar2 = (int)uVar13;
        lVar10 = (longlong)iVar2;
        uVar1 = puVar4[lVar10] & uVar14;
        if (uVar1 == 0) {
          iVar6 = local_70 + 0x1e;
          if (-1 < (int)(local_70 - 1)) {
            iVar6 = local_70 - 1;
          }
          iVar6 = iVar6 >> 5;
          local_dc = local_dc + 0x20;
          iVar7 = iVar6;
          if (iVar6 < iVar2) {
            iVar7 = iVar2;
          }
          if (iVar2 < iVar6) {
            lVar11 = 0;
            do {
              uVar1 = puVar4[lVar10 + lVar11 + 1];
              if (uVar1 != 0) {
                uVar13 = (ulonglong)(iVar2 + (int)lVar11 + 1);
                uVar14 = 0xffffffff;
                goto LAB_1434cf5f1;
              }
              local_dc = local_dc + 0x20;
              lVar11 = lVar11 + 1;
            } while (iVar7 - lVar10 != lVar11);
            uVar14 = 0xffffffff;
            iVar2 = iVar7;
          }
          uVar13 = (ulonglong)(iVar2 + 1);
          uVar1 = local_70;
        }
        else {
LAB_1434cf5f1:
          uVar9 = (ulonglong)(-uVar1 & uVar1);
          uVar8 = uVar9 * 2 + 1;
          lVar10 = 0x3f;
          if (uVar8 != 0) {
            for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
            }
          }
          uVar1 = (local_dc - ((uint)lVar10 ^ 0x3f)) + 0x3e;
          if ((int)local_70 <= (int)uVar1) {
            uVar1 = local_70;
          }
        }
      } while (uVar1 != (uint)local_d8);
    }
LAB_1434cf39d:
    FUN_1434ce80e();
    lVar10 = local_c8;
    FUN_1434ca392(local_c8,local_d0);
    FUN_1434ceab8(0,0,0);
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    (**(code **)(*DAT_14c8407a8 + 0x50))();
    FUN_14080c2b4();
    *(undefined1 *)(lVar10 + 0xc9) = 0;
    FUN_1416cda1c(0);
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_140bb2a1a(local_98);
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1434cf650 FUN_1434cf650 body=577 status=ok
// SIG undefined FUN_1434cf650(void)

undefined8 * FUN_1434cf650(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  size_t sVar2;
  int iVar3;
  undefined2 *puVar4;
  wchar_t *_Str;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  longlong local_78 [2];
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  wchar_t *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140056680(&local_48,L"DeviceProfileFragment");
  _Str = local_48;
  if (local_40 == 0) {
    _Str = L"";
  }
  if (_Str != (wchar_t *)0x0) {
    sVar2 = wcslen(_Str);
    local_80 = 0xffffffff;
    local_88 = 0;
    iVar1 = FUN_1447ee042(param_2,_Str,sVar2 & 0xffffffff);
    if (iVar1 != -1) {
      iVar1 = (int)param_2[1];
      if (iVar1 == 0) {
        puVar4 = &DAT_149dfb77a;
      }
      else {
        puVar4 = (undefined2 *)*param_2;
      }
      iVar3 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar3 = 0;
      }
      iVar1 = iVar3 - (local_40 + (uint)(local_40 == 0));
      if (iVar3 <= iVar1) {
        iVar1 = iVar3;
      }
      if (iVar1 < 1) {
        iVar1 = 0;
      }
      FUN_14006620a(&local_58,puVar4,iVar1);
      if (&local_58 == param_2) {
        if (local_58 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*param_2 != 0) {
          FUN_1400020a8();
        }
        *param_2 = local_58;
        *(int *)(param_2 + 1) = (int)uStack_50;
        *(undefined4 *)((longlong)param_2 + 0xc) = uStack_50._4_4_;
      }
      local_58 = 0;
      uStack_50 = 0;
      local_68 = 0;
      uStack_60 = 0;
      FUN_1400b22c2(local_78,L".Preview");
      local_80 = 0;
      local_88 = 1;
      FUN_1407cdbc6(param_2,local_78,&local_58,&local_68);
      if (local_78[0] != 0) {
        FUN_1400020a8();
      }
      iVar3 = 0;
      iVar1 = (int)uStack_50 + -1;
      if ((int)uStack_50 == 0) {
        iVar1 = iVar3;
      }
      FUN_1446f82e2(param_1,iVar1,local_58,1);
      iVar1 = (int)uStack_60 + -1;
      if ((int)uStack_60 == 0) {
        iVar1 = iVar3;
      }
      FUN_1446f82e2(local_78,iVar1,local_68,1);
      param_1[1] = local_78[0];
      iVar1 = (int)param_2[1] + -1;
      if ((int)param_2[1] == 0) {
        iVar1 = iVar3;
      }
      FUN_1446f82e2(local_78,iVar1,*param_2,1);
      param_1[2] = local_78[0];
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      goto LAB_1434cf84f;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
LAB_1434cf84f:
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1434cf892 FUN_1434cf892 body=570 status=ok
// SIG undefined FUN_1434cf892(void)

longlong * FUN_1434cf892(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  void *pvVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = FUN_140032b16(0);
  if (*(int *)(lVar4 + 0x138) != *(int *)(lVar4 + 0x164)) {
    lVar5 = *param_3;
    uVar3 = (uint)((ulonglong)lVar5 >> 0x10);
    uVar8 = (uint)lVar5 & 0xffff;
    lVar7 = lVar4 + 0x168;
    if (*(longlong *)(lVar4 + 0x170) != 0) {
      lVar7 = *(longlong *)(lVar4 + 0x170);
    }
    iVar6 = *(int *)(lVar7 + (ulonglong)
                             (*(int *)(lVar4 + 0x178) - 1U &
                             (int)((ulonglong)lVar5 >> 0x20) + ((uint)lVar5 << 0x10 | uVar8) +
                             (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar8 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(lVar4 + 0x130) + (longlong)iVar6 * 0x20) == lVar5) {
          lVar4 = 0;
          lVar5 = FUN_140032b16(0);
          if (*(int *)(lVar5 + 0x138) == *(int *)(lVar5 + 0x164)) goto LAB_1434cf9f5;
          lVar7 = *param_3;
          uVar3 = (uint)((ulonglong)lVar7 >> 0x10);
          uVar8 = (uint)lVar7 & 0xffff;
          lVar4 = lVar5 + 0x168;
          if (*(longlong *)(lVar5 + 0x170) != 0) {
            lVar4 = *(longlong *)(lVar5 + 0x170);
          }
          iVar6 = *(int *)(lVar4 + (ulonglong)
                                   (*(int *)(lVar5 + 0x178) - 1U &
                                   (int)((ulonglong)lVar7 >> 0x20) + ((uint)lVar7 << 0x10 | uVar8) +
                                   (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar8 >> 4)) * 4);
          if (iVar6 == -1) goto LAB_1434cf9f2;
          goto LAB_1434cf9d8;
        }
        iVar6 = *(int *)((longlong)iVar6 * 0x20 + *(longlong *)(lVar4 + 0x130) + 0x18);
      } while (iVar6 != -1);
    }
  }
  goto LAB_1434cfa0f;
  while (iVar6 = *(int *)(lVar4 + 0x18), iVar6 != -1) {
LAB_1434cf9d8:
    lVar4 = *(longlong *)(lVar5 + 0x130) + (longlong)iVar6 * 0x20;
    if (*(longlong *)(*(longlong *)(lVar5 + 0x130) + (longlong)iVar6 * 0x20) == lVar7)
    goto LAB_1434cf9f5;
  }
LAB_1434cf9f2:
  lVar4 = 0;
LAB_1434cf9f5:
  local_48 = (void *)0x0;
  local_40 = *(int *)(lVar4 + 0x10);
  lVar5 = (longlong)local_40;
  pvVar1 = *(void **)(lVar4 + 8);
  if (lVar5 != 0) {
    FUN_1463c4d48(&local_48,local_40);
    memcpy(local_48,pvVar1,lVar5 * 0x18);
    pvVar1 = local_48;
    lVar4 = (longlong)local_40;
    *param_2 = 0;
    param_2[1] = 0;
    if (lVar4 != 0) {
      lVar5 = 0;
      do {
        uVar2 = *(undefined8 *)((longlong)pvVar1 + lVar5 + 8);
        iVar6 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar6 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar6 + 1U) {
          FUN_1446f84a2(param_2,iVar6);
        }
        *(undefined8 *)(*param_2 + (longlong)iVar6 * 8) = uVar2;
        lVar5 = lVar5 + 0x18;
      } while (lVar4 * 0x18 != lVar5);
    }
    if (local_48 != (void *)0x0) {
      FUN_1400020a8(local_48);
    }
    if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
      return param_2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
LAB_1434cfa0f:
  *param_2 = 0;
  param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
}



// FUNCTION 1434cface FUN_1434cface body=386 status=ok
// SIG undefined FUN_1434cface(void)

void FUN_1434cface(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  lVar1 = *param_3;
  uVar5 = (uint)lVar1;
  iVar8 = (int)((ulonglong)lVar1 >> 0x20);
  uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
  if (*(int *)(param_1 + 0xe8) != *(int *)(param_1 + 0x114)) {
    lVar6 = param_1 + 0x118;
    if (*(longlong *)(param_1 + 0x120) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x120);
    }
    iVar7 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_1 + 0x128) - 1U &
                             iVar8 + (uVar5 << 0x10 | uVar5 & 0xffff) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + ((uVar5 & 0xffff) >> 4)) * 4);
    if (iVar7 != -1) {
      lVar6 = *(longlong *)(param_1 + 0xe0);
      iVar9 = iVar7;
      do {
        if (*(longlong *)(lVar6 + (longlong)iVar9 * 0x28) == lVar1) goto LAB_1434cfc14;
        iVar9 = *(int *)(lVar6 + (longlong)iVar9 * 0x28 + 0x20);
      } while (iVar9 != -1);
    }
  }
  lVar6 = *(longlong *)(param_1 + 0xb0);
  if ((lVar6 != 0) && (*(int *)(lVar6 + 0x20) != *(int *)(lVar6 + 0x4c))) {
    lVar3 = lVar6 + 0x50;
    if (*(longlong *)(lVar6 + 0x58) != 0) {
      lVar3 = *(longlong *)(lVar6 + 0x58);
    }
    iVar8 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(lVar6 + 0x60) - 1U &
                             iVar8 + (uVar5 << 0x10 | uVar5 & 0xffff) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + ((uVar5 & 0xffff) >> 4)) * 4);
    if (iVar8 != -1) {
      lVar6 = *(longlong *)(lVar6 + 0x18);
      lVar3 = 0;
      iVar7 = iVar8;
      do {
        if (*(longlong *)(lVar6 + (longlong)iVar7 * 0x28) == lVar1) goto LAB_1434cfc30;
        iVar7 = *(int *)(lVar6 + (longlong)iVar7 * 0x28 + 0x20);
      } while (iVar7 != -1);
      goto LAB_1434cfc4c;
    }
  }
  lVar3 = 0;
  goto LAB_1434cfc4c;
  while (iVar7 = (int)plVar4[4], iVar7 != -1) {
LAB_1434cfc14:
    plVar4 = (longlong *)(lVar6 + (longlong)iVar7 * 0x28);
    if (*plVar4 == lVar1) goto LAB_1434cfc48;
  }
  goto LAB_1434cfc46;
  while (iVar8 = (int)plVar4[4], iVar8 != -1) {
LAB_1434cfc30:
    plVar4 = (longlong *)(lVar6 + (longlong)iVar8 * 0x28);
    if (*plVar4 == lVar1) goto LAB_1434cfc48;
  }
LAB_1434cfc46:
  plVar4 = (longlong *)0x0;
LAB_1434cfc48:
  lVar3 = plVar4[2];
LAB_1434cfc4c:
  *param_2 = lVar3;
  return;
}



// FUNCTION 1434cfc50 FUN_1434cfc50 body=1181 status=ok
// SIG undefined FUN_1434cfc50(void)

longlong * FUN_1434cfc50(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  longlong lVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  longlong *plVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  int iVar17;
  ulonglong uVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong lVar23;
  undefined1 auStack_128 [32];
  longlong *local_108;
  undefined8 local_100;
  longlong local_f8;
  undefined8 uStack_f0;
  uint *local_e0;
  undefined8 *local_d8;
  undefined1 local_cc [4];
  uint local_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  longlong local_b8;
  longlong alStack_b0 [4];
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  longlong local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0x80;
  *(undefined4 *)(param_2 + 6) = 0xffffffff;
  iVar17 = 0;
  lVar7 = FUN_140032b16(0);
  lVar20 = *param_3;
  local_f8 = 0;
  uStack_f0 = 0;
  if ((longlong)*(int *)(lVar7 + 0x98) != 0) {
    lVar21 = (longlong)*(int *)(lVar7 + 0x98) * 0x68;
    lVar7 = *(longlong *)(lVar7 + 0x90) + 0x18;
    do {
      local_b8 = *(longlong *)(lVar7 + -8);
      local_c8 = *(uint *)(lVar7 + -0x18);
      uStack_c4 = *(uint *)(lVar7 + -0x14);
      uStack_c0 = *(uint *)(lVar7 + -0x10);
      uStack_bc = *(uint *)(lVar7 + -0xc);
      local_90 = 0;
      local_88 = 0;
      alStack_b0[0] = 0;
      alStack_b0[1] = 0;
      local_84 = 0xffffffff00000080;
      local_7c = 0;
      local_70 = 0;
      local_68 = 0;
      FUN_145a0b2f0(alStack_b0,lVar7);
      lVar23 = CONCAT44(uStack_bc,uStack_c0);
      local_68 = 0;
      if (local_70 != 0) {
        FUN_1400020a8();
      }
      FUN_14130b420(alStack_b0);
      uVar22 = uStack_f0;
      if (lVar23 == lVar20) {
        lVar23 = (longlong)(int)uStack_f0;
        uVar6 = (int)uStack_f0 + 1;
        uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar6);
        if (uStack_f0._4_4_ < uVar6) {
          FUN_1463c4cb8(&local_f8,uVar22 & 0xffffffff);
        }
        puVar11 = (undefined4 *)(local_f8 + lVar23 * 0x68);
        *(undefined8 *)(puVar11 + 4) = *(undefined8 *)(lVar7 + -8);
        uVar3 = *(undefined4 *)(lVar7 + -0x14);
        uVar4 = *(undefined4 *)(lVar7 + -0x10);
        uVar5 = *(undefined4 *)(lVar7 + -0xc);
        *puVar11 = *(undefined4 *)(lVar7 + -0x18);
        puVar11[1] = uVar3;
        puVar11[2] = uVar4;
        puVar11[3] = uVar5;
        *(undefined8 *)(puVar11 + 0xe) = 0;
        puVar11[0x10] = 0;
        *(undefined8 *)(puVar11 + 6) = 0;
        *(undefined8 *)(puVar11 + 8) = 0;
        *(undefined8 *)(puVar11 + 0x11) = 0xffffffff00000080;
        puVar11[0x13] = 0;
        *(undefined8 *)(puVar11 + 0x16) = 0;
        puVar11[0x18] = 0;
        FUN_145a0b2f0(puVar11 + 6,lVar7);
      }
      lVar23 = local_f8;
      lVar7 = lVar7 + 0x68;
      lVar21 = lVar21 + -0x68;
    } while (lVar21 != 0);
    iVar17 = 0;
    if ((int)uStack_f0 != 0) {
      puVar1 = (uint *)(local_f8 + 0x28);
      iVar2 = *(int *)(local_f8 + 0x40);
      iVar17 = (int)uStack_f0;
      if (iVar2 == 0) {
        uVar18 = 1;
        uVar22 = 0;
        iVar19 = 0;
        iVar15 = 0;
      }
      else {
        puVar8 = *(uint **)(local_f8 + 0x38);
        if (*(uint **)(local_f8 + 0x38) == (uint *)0x0) {
          puVar8 = puVar1;
        }
        uVar6 = *puVar8;
        if (uVar6 == 0) {
          iVar19 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar19 = iVar2 + -1;
          }
          uVar22 = 0;
          uVar16 = (ulonglong)(uint)(iVar19 >> 5);
          if (iVar19 >> 5 < 1) {
            uVar16 = uVar22;
          }
          iVar19 = 0;
          do {
            if (uVar16 == uVar22) goto LAB_1434d0092;
            iVar19 = iVar19 + 0x20;
            uVar6 = puVar8[uVar22 + 1];
            uVar22 = uVar22 + 1;
          } while (uVar6 == 0);
        }
        else {
          uVar22 = 0;
          iVar19 = 0;
        }
        uVar18 = (ulonglong)(-uVar6 & uVar6);
        uVar16 = uVar18 * 2 + 1;
        lVar20 = 0x3f;
        if (uVar16 != 0) {
          for (; uVar16 >> lVar20 == 0; lVar20 = lVar20 + -1) {
          }
        }
        iVar15 = (iVar19 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar15) {
          iVar15 = iVar2;
        }
      }
      if (iVar15 != iVar2) {
        local_108 = param_2 + 7;
        uVar6 = 0xffffffff;
        do {
          puVar8 = (uint *)(*(longlong *)(lVar23 + 0x18) + (longlong)iVar15 * 0x28);
          local_c8 = *puVar8;
          uStack_c4 = puVar8[1];
          lVar20 = *(longlong *)puVar8;
          uStack_c0 = puVar8[2];
          uStack_bc = puVar8[3];
          plVar12 = (longlong *)(*(longlong *)(lVar23 + 0x18) + 0x10 + (longlong)iVar15 * 0x28);
          local_b8 = *plVar12;
          alStack_b0[0] = plVar12[1];
          iVar17 = (int)param_2[1];
          iVar15 = *(int *)((longlong)param_2 + 0x34);
          if (iVar17 != iVar15) {
            uVar14 = (uint)((ulonglong)lVar20 >> 0x10);
            plVar12 = (longlong *)param_2[8];
            if ((longlong *)param_2[8] == (longlong *)0x0) {
              plVar12 = local_108;
            }
            iVar9 = *(int *)((longlong)plVar12 +
                            (ulonglong)
                            ((int)param_2[9] - 1U &
                            uStack_c4 + (local_c8 << 0x10 | local_c8 & 0xffff) +
                            (uVar14 << 0x13 | uVar14 & 0xffff) + ((local_c8 & 0xffff) >> 4)) * 4);
            if (iVar9 != -1) {
              do {
                if (*(longlong *)(*param_2 + (longlong)iVar9 * 0x18) == lVar20) goto LAB_1434cff66;
                iVar9 = *(int *)(*param_2 + (longlong)iVar9 * 0x18 + 0x10);
              } while (iVar9 != -1);
            }
          }
          local_100 = 0;
          local_e0 = &local_c8;
          local_d8 = &local_100;
          FUN_140db3efa(param_2,local_cc,&local_e0,0);
          lVar20 = CONCAT44(uStack_c4,local_c8);
          iVar17 = (int)param_2[1];
          iVar15 = *(int *)((longlong)param_2 + 0x34);
LAB_1434cff66:
          if (iVar17 != iVar15) {
            uVar14 = (uint)((ulonglong)lVar20 >> 0x10);
            uVar13 = (uint)lVar20 & 0xffff;
            plVar12 = (longlong *)param_2[8];
            if ((longlong *)param_2[8] == (longlong *)0x0) {
              plVar12 = local_108;
            }
            iVar17 = *(int *)((longlong)plVar12 +
                             (ulonglong)
                             ((int)param_2[9] - 1U &
                             (int)((ulonglong)lVar20 >> 0x20) + ((uint)lVar20 << 0x10 | uVar13) +
                             (uVar14 << 0x13 | uVar14 & 0xffff) + (uVar13 >> 4)) * 4);
            if (iVar17 != -1) {
              do {
                plVar12 = (longlong *)(*param_2 + (longlong)iVar17 * 0x18);
                if (*plVar12 == lVar20) goto LAB_1434cffd0;
                iVar17 = (int)plVar12[2];
              } while (iVar17 != -1);
            }
          }
          plVar12 = (longlong *)0x0;
LAB_1434cffd0:
          plVar12[1] = local_b8;
          uVar6 = uVar6 & ~(uint)uVar18;
          puVar8 = *(uint **)(lVar23 + 0x38);
          if (*(uint **)(lVar23 + 0x38) == (uint *)0x0) {
            puVar8 = puVar1;
          }
          iVar17 = *(int *)(lVar23 + 0x40);
          iVar15 = (int)uVar22;
          lVar20 = (longlong)iVar15;
          uVar14 = puVar8[lVar20] & uVar6;
          if (uVar14 == 0) {
            iVar9 = iVar17 + 0x1e;
            if (-1 < iVar17 + -1) {
              iVar9 = iVar17 + -1;
            }
            iVar9 = iVar9 >> 5;
            iVar19 = iVar19 + 0x20;
            iVar10 = iVar9;
            if (iVar9 < iVar15) {
              iVar10 = iVar15;
            }
            if (iVar15 < iVar9) {
              lVar7 = 0;
              do {
                uVar14 = puVar8[lVar20 + lVar7 + 1];
                if (uVar14 != 0) {
                  uVar22 = (ulonglong)(iVar15 + (int)lVar7 + 1);
                  uVar6 = 0xffffffff;
                  goto LAB_1434d0050;
                }
                iVar19 = iVar19 + 0x20;
                lVar7 = lVar7 + 1;
              } while (iVar10 - lVar20 != lVar7);
              uVar6 = 0xffffffff;
              iVar15 = iVar10;
            }
            uVar22 = (ulonglong)(iVar15 + 1);
            iVar15 = iVar17;
          }
          else {
LAB_1434d0050:
            uVar18 = (ulonglong)(-uVar14 & uVar14);
            uVar16 = uVar18 * 2 + 1;
            lVar20 = 0x3f;
            if (uVar16 != 0) {
              for (; uVar16 >> lVar20 == 0; lVar20 = lVar20 + -1) {
              }
            }
            iVar15 = (iVar19 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
            if (iVar17 <= iVar15) {
              iVar15 = iVar17;
            }
          }
        } while (iVar15 != iVar2);
        iVar17 = (int)uStack_f0;
      }
    }
  }
LAB_1434d0092:
  FUN_1458df71d(local_f8,iVar17);
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1434d00ee FUN_1434d00ee body=913 status=ok
// SIG undefined FUN_1434d00ee(void)

void FUN_1434d00ee(longlong param_1,longlong *param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  uint *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  bool bVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  uint *puVar19;
  undefined1 auStack_e8 [44];
  undefined4 local_bc;
  ulonglong local_b8;
  longlong local_b0;
  longlong local_a8;
  uint *local_a0;
  undefined8 local_98;
  longlong lStack_90;
  undefined8 local_88;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined1 local_64 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_b0 = param_1 + 0xe0;
  puVar19 = (uint *)0x0;
  FUN_145bcde9e(local_b0,0);
  local_a0 = (uint *)(param_2 + 2);
  uVar12 = *(uint *)(param_2 + 5);
  local_bc = param_3;
  local_a8 = param_1;
  if (uVar12 == 0) {
    uVar13 = 1;
    iVar16 = 0;
    puVar10 = local_a0;
    uVar7 = 0;
  }
  else {
    puVar3 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar3 = local_a0;
    }
    uVar7 = *puVar3;
    if (uVar7 == 0) {
      iVar16 = uVar12 + 0x1e;
      if (-1 < (int)(uVar12 - 1)) {
        iVar16 = uVar12 - 1;
      }
      puVar19 = (uint *)0x0;
      puVar10 = (uint *)(ulonglong)(uint)(iVar16 >> 5);
      if (iVar16 >> 5 < 1) {
        puVar10 = puVar19;
      }
      iVar16 = 0;
      do {
        if (puVar10 == puVar19) goto LAB_1434d01d0;
        iVar16 = iVar16 + 0x20;
        uVar7 = puVar3[(longlong)puVar19 + 1];
        puVar19 = (uint *)((longlong)puVar19 + 1);
      } while (uVar7 == 0);
    }
    else {
      puVar19 = (uint *)0x0;
      iVar16 = 0;
    }
    uVar13 = (ulonglong)(-uVar7 & uVar7);
    uVar2 = uVar13 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar7 = (uint)lVar14 ^ 0x3f;
    puVar10 = (uint *)(ulonglong)uVar7;
    uVar7 = (iVar16 - uVar7) + 0x3e;
    if ((int)uVar12 <= (int)uVar7) {
      uVar7 = uVar12;
    }
  }
  if (uVar7 == uVar12) {
LAB_1434d01d0:
    *(undefined1 *)(local_a8 + 0xc9) = 1;
    FUN_1414cecc8(puVar10,local_bc);
    if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  uVar17 = 0xffffffff;
  local_b8 = (ulonglong)uVar12;
LAB_1434d0229:
  lVar14 = *(longlong *)(*param_2 + (longlong)(int)uVar7 * 0x18);
  lVar15 = *(longlong *)(*param_2 + 8 + (longlong)(int)uVar7 * 0x18);
  lVar4 = FUN_140032b16(0);
  if (*(int *)(lVar4 + 0x138) != *(int *)(lVar4 + 0x164)) {
    uVar12 = (uint)((ulonglong)lVar14 >> 0x10);
    uVar7 = (uint)lVar14 & 0xffff;
    uVar12 = (int)((ulonglong)lVar14 >> 0x20) + ((uint)lVar14 << 0x10 | uVar7) +
             (uVar12 << 0x13 | uVar12 & 0xffff) + (uVar7 >> 4);
    lVar5 = lVar4 + 0x168;
    if (*(longlong *)(lVar4 + 0x170) != 0) {
      lVar5 = *(longlong *)(lVar4 + 0x170);
    }
    iVar18 = *(int *)(lVar5 + (ulonglong)(*(int *)(lVar4 + 0x178) - 1U & uVar12) * 4);
    if (iVar18 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(lVar4 + 0x130) + (longlong)iVar18 * 0x20) == lVar14) {
          local_98 = 0;
          lStack_90 = 0;
          local_88 = 0;
          lVar4 = FUN_140032b16(0);
          if (*(int *)(lVar4 + 0x138) == *(int *)(lVar4 + 0x164)) goto LAB_1434d0340;
          lVar5 = lVar4 + 0x168;
          if (*(longlong *)(lVar4 + 0x170) != 0) {
            lVar5 = *(longlong *)(lVar4 + 0x170);
          }
          iVar18 = *(int *)(lVar5 + (ulonglong)(*(int *)(lVar4 + 0x178) - 1U & uVar12) * 4);
          if (iVar18 == -1) goto LAB_1434d0340;
          goto LAB_1434d0327;
        }
        iVar18 = *(int *)((longlong)iVar18 * 0x20 + *(longlong *)(lVar4 + 0x130) + 0x18);
      } while (iVar18 != -1);
    }
  }
  goto LAB_1434d03b8;
  while (iVar18 = *(int *)(lVar5 + 0x18), iVar18 != -1) {
LAB_1434d0327:
    lVar5 = *(longlong *)(lVar4 + 0x130) + (longlong)iVar18 * 0x20;
    if (*(longlong *)(*(longlong *)(lVar4 + 0x130) + (longlong)iVar18 * 0x20) == lVar14)
    goto LAB_1434d0342;
  }
LAB_1434d0340:
  lVar5 = 0;
LAB_1434d0342:
  if ((longlong)*(int *)(lVar5 + 0x10) != 0) {
    puVar6 = *(undefined8 **)(lVar5 + 8);
    puVar1 = puVar6 + (longlong)*(int *)(lVar5 + 0x10) * 3;
    bVar11 = false;
    do {
      while (puVar6[1] == lVar15) {
        local_98 = *puVar6;
        local_88 = puVar6[2];
        puVar6 = puVar6 + 3;
        bVar11 = true;
        lStack_90 = lVar15;
        if (puVar6 == puVar1) goto LAB_1434d0392;
      }
      puVar6 = puVar6 + 3;
    } while (puVar6 != puVar1);
    if (bVar11) {
LAB_1434d0392:
      local_78 = &local_98;
      local_70 = local_78;
      FUN_1414fa63e(local_b0,local_64,&local_78);
    }
  }
LAB_1434d03b8:
  uVar17 = uVar17 & ~(uint)uVar13;
  puVar10 = (uint *)param_2[4];
  if ((uint *)param_2[4] == (uint *)0x0) {
    puVar10 = local_a0;
  }
  uVar12 = *(uint *)(param_2 + 5);
  iVar18 = (int)puVar19;
  lVar14 = (longlong)iVar18;
  uVar7 = puVar10[lVar14] & uVar17;
  if (uVar7 == 0) {
    iVar8 = uVar12 + 0x1e;
    if (-1 < (int)(uVar12 - 1)) {
      iVar8 = uVar12 - 1;
    }
    iVar8 = iVar8 >> 5;
    iVar16 = iVar16 + 0x20;
    iVar9 = iVar8;
    if (iVar8 < iVar18) {
      iVar9 = iVar18;
    }
    if (iVar18 < iVar8) {
      lVar15 = 0;
      do {
        uVar7 = puVar10[lVar14 + lVar15 + 1];
        if (uVar7 != 0) {
          puVar19 = (uint *)(ulonglong)(iVar18 + (int)lVar15 + 1);
          uVar17 = 0xffffffff;
          goto LAB_1434d0433;
        }
        iVar16 = iVar16 + 0x20;
        lVar15 = lVar15 + 1;
      } while (iVar9 - lVar14 != lVar15);
      uVar17 = 0xffffffff;
      lVar14 = (longlong)iVar9;
    }
    puVar10 = (uint *)(lVar14 + 1);
    puVar19 = (uint *)((ulonglong)puVar10 & 0xffffffff);
    uVar7 = uVar12;
  }
  else {
LAB_1434d0433:
    uVar13 = (ulonglong)(-uVar7 & uVar7);
    uVar2 = uVar13 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar7 = (uint)lVar14 ^ 0x3f;
    puVar10 = (uint *)(ulonglong)uVar7;
    uVar7 = (iVar16 - uVar7) + 0x3e;
    if ((int)uVar12 <= (int)uVar7) {
      uVar7 = uVar12;
    }
  }
  if (uVar7 == (uint)local_b8) goto LAB_1434d01d0;
  goto LAB_1434d0229;
}



// FUNCTION 1434d0480 FUN_1434d0480 body=200 status=ok
// SIG undefined FUN_1434d0480(void)

void FUN_1434d0480(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  lVar1 = *(longlong *)(param_1 + 0xb0);
  if ((lVar1 != 0) && (*(int *)(lVar1 + 0x20) != *(int *)(lVar1 + 0x4c))) {
    lVar2 = *param_3;
    uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar6 = (uint)lVar2 & 0xffff;
    lVar4 = lVar1 + 0x50;
    if (*(longlong *)(lVar1 + 0x58) != 0) {
      lVar4 = *(longlong *)(lVar1 + 0x58);
    }
    iVar7 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(lVar1 + 0x60) - 1U &
                             (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar6) +
                             (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      lVar1 = *(longlong *)(lVar1 + 0x18);
      lVar4 = 0;
      iVar8 = iVar7;
      do {
        if (*(longlong *)(lVar1 + (longlong)iVar8 * 0x28) == lVar2) goto LAB_1434d0528;
        iVar8 = *(int *)(lVar1 + (longlong)iVar8 * 0x28 + 0x20);
      } while (iVar8 != -1);
      goto LAB_1434d053c;
    }
  }
  lVar4 = 0;
  goto LAB_1434d053c;
  while (iVar7 = (int)plVar5[4], iVar7 != -1) {
LAB_1434d0528:
    plVar5 = (longlong *)(lVar1 + (longlong)iVar7 * 0x28);
    if (*plVar5 == lVar2) goto LAB_1434d0542;
  }
  plVar5 = (longlong *)0x0;
LAB_1434d0542:
  lVar4 = plVar5[2];
LAB_1434d053c:
  *param_2 = lVar4;
  return;
}



// FUNCTION 1434d0548 FUN_1434d0548 body=132 status=ok
// SIG undefined FUN_1434d0548(void)

int * FUN_1434d0548(longlong param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  iVar3 = 0;
  if ((longlong)*(int *)(param_1 + 0x98) == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar2 = *(int **)(param_1 + 0x90);
    lVar6 = (longlong)*(int *)(param_1 + 0x98) * 0x68;
    piVar1 = (int *)0x0;
    do {
      iVar4 = 1;
      iVar5 = *(int *)(DAT_14cad6230 + 0xa4) - *piVar2;
      if ((*piVar2 <= *(int *)(DAT_14cad6230 + 0xa4)) &&
         (*(longlong *)(DAT_14cad6230 + 0xb8) == *(longlong *)(piVar2 + 2))) {
        iVar4 = -iVar5;
        if (-1 < iVar4) {
          iVar4 = iVar5;
        }
        iVar4 = (uint)((bool)(char)piVar2[1] == 0 < *(int *)(DAT_14cad6230 + 0xa8)) + iVar4 + 5;
      }
      if (iVar3 < iVar4) {
        piVar1 = piVar2;
        iVar3 = iVar4;
      }
      piVar2 = piVar2 + 0x1a;
      lVar6 = lVar6 + -0x68;
    } while (lVar6 != 0);
  }
  return piVar1;
}



// FUNCTION 1434d05d8 FUN_1434d05d8 body=55 status=ok
// SIG undefined FUN_1434d05d8(void)

void FUN_1434d05d8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cad6408 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cad6408 = FUN_14171c317(FUN_1463c433e,uVar1,L"EGrammaticalGender");
  }
  return;
}



// FUNCTION 1434d060f FUN_1434d060f body=55 status=ok
// SIG undefined FUN_1434d060f(void)

void FUN_1434d060f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cad6420 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cad6420 = FUN_14171c317(FUN_1463c436d,uVar1,L"EGrammaticalNumber");
  }
  return;
}



// FUNCTION 1434d067a FUN_1434d067a body=85 status=ok
// SIG undefined FUN_1434d067a(void)

undefined8 FUN_1434d067a(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((*param_2 != 0) && ((longlong)*(int *)(param_1 + 0x58) != 0)) {
    lVar2 = *(longlong *)(param_1 + 0x50);
    lVar3 = (longlong)*(int *)(param_1 + 0x58) * 0x38;
    do {
      cVar1 = FUN_147a640f1(lVar2,param_2);
      if (cVar1 != '\0') {
        return *(undefined8 *)(lVar2 + 0x30);
      }
      lVar2 = lVar2 + 0x38;
      lVar3 = lVar3 + -0x38;
    } while (lVar3 != 0);
  }
  return 0;
}



// FUNCTION 1434d06cf FUN_1434d06cf body=69 status=ok
// SIG undefined FUN_1434d06cf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434d06cf(void)

{
  _DAT_14cad64d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434d0711. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad64e0,1);
  return;
}



// FUNCTION 1434d0714 FUN_1434d0714 body=69 status=ok
// SIG undefined FUN_1434d0714(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434d0714(void)

{
  _DAT_14cad64f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434d0756. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad64f8,1);
  return;
}



// FUNCTION 1434d0759 FUN_1434d0759 body=69 status=ok
// SIG undefined FUN_1434d0759(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434d0759(void)

{
  _DAT_14cad6508 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434d079b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad6510,1);
  return;
}



// FUNCTION 1434d079e FUN_1434d079e body=69 status=ok
// SIG undefined FUN_1434d079e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434d079e(void)

{
  _DAT_14cad6520 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434d07e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad6528,1);
  return;
}



// FUNCTION 1434d07e3 FUN_1434d07e3 body=69 status=ok
// SIG undefined FUN_1434d07e3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434d07e3(void)

{
  _DAT_14cad6538 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434d0825. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad6540,1);
  return;
}



// FUNCTION 1434d0828 FUN_1434d0828 body=69 status=ok
// SIG undefined FUN_1434d0828(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434d0828(void)

{
  _DAT_14cad6548 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434d086a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad6550,1);
  return;
}



// FUNCTION 1434d086d FUN_1434d086d body=69 status=ok
// SIG undefined FUN_1434d086d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434d086d(void)

{
  _DAT_14cad6558 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434d08af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad6560,1);
  return;
}



// FUNCTION 1434d08b2 FUN_1434d08b2 body=69 status=ok
// SIG undefined FUN_1434d08b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434d08b2(void)

{
  _DAT_14cad6568 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434d08f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad6570,1);
  return;
}



// FUNCTION 1434d08f7 FUN_1434d08f7 body=69 status=ok
// SIG undefined FUN_1434d08f7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434d08f7(void)

{
  _DAT_14cad6578 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434d0939. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad6580,1);
  return;
}



// FUNCTION 1434d093c FUN_1434d093c body=69 status=ok
// SIG undefined FUN_1434d093c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434d093c(void)

{
  _DAT_14cad6588 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434d097e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad6590,1);
  return;
}



// FUNCTION 1434d0981 FUN_1434d0981 body=47 status=ok
// SIG undefined FUN_1434d0981(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434d0981(void)

{
  _DAT_14cad6598 = &PTR_FUN_14a8bcd70;
  FUN_144725486(&DAT_14cad6598);
  FUN_14594224e(&DAT_14cad6598);
  return;
}



// FUNCTION 1434d09b0 FUN_1434d09b0 body=47 status=ok
// SIG undefined FUN_1434d09b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434d09b0(void)

{
  _DAT_14cad6770 = &PTR_FUN_14a8bcd70;
  FUN_144725486(&DAT_14cad6770);
  FUN_14594224e(&DAT_14cad6770);
  return;
}



// FUNCTION 1434d09e0 FUN_1434d09e0 body=241 status=ok
// SIG undefined FUN_1434d09e0(void)

void FUN_1434d09e0(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14a8b9c58;
  *(undefined2 *)((longlong)param_1 + 0x24) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x11) = 0;
  *(undefined8 *)((longlong)param_1 + 0x19) = 0;
  lVar1 = 0x5c;
  do {
    *(undefined4 *)((longlong)param_1 + lVar1 + -0x2c) = DAT_14c9a52a0;
    *(undefined8 *)((longlong)param_1 + lVar1 + -0x34) = DAT_14c9a5298;
    *(undefined4 *)((longlong)param_1 + lVar1 + -0x28) = 0;
    *(undefined4 *)((longlong)param_1 + lVar1 + -0x1c) = DAT_14c846338;
    *(undefined8 *)((longlong)param_1 + lVar1 + -0x24) = DAT_14c846330;
    *(undefined8 *)((longlong)param_1 + lVar1 + -0x18) = DAT_14c846330;
    *(undefined4 *)((longlong)param_1 + lVar1 + -0x10) = DAT_14c846338;
    *(undefined8 *)((longlong)param_1 + lVar1 + -0xc) = DAT_14c84635c;
    *(undefined8 *)((longlong)param_1 + lVar1 + -4) = 0;
    lVar1 = lVar1 + 0x38;
  } while (lVar1 != 0x104);
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)((longlong)param_1 + 0xed) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0xf1) = 0xff;
  param_1[0x1f] = DAT_14c845dbc;
  *(undefined4 *)(param_1 + 0x20) = DAT_14c845dc4;
  param_1[0x22] = 0;
  LOCK();
  UNLOCK();
  lVar1 = DAT_14c7614f8 + 1;
  param_1[0x21] = DAT_14c7614f8;
  DAT_14c7614f8 = lVar1;
  return;
}



// FUNCTION 1434d0ad1 FUN_1434d0ad1 body=69 status=ok
// SIG undefined FUN_1434d0ad1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434d0ad1(void)

{
  _DAT_14cad6948 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434d0b13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad6950,1);
  return;
}



// FUNCTION 1434d0b16 FUN_1434d0b16 body=709 status=ok
// SIG undefined FUN_1434d0b16(void)

void FUN_1434d0b16(longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  LPCRITICAL_SECTION lpCriticalSection;
  ulonglong uVar16;
  undefined1 auStack_f8 [40];
  ulonglong local_d0;
  LPCRITICAL_SECTION local_c8;
  LARGE_INTEGER local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x22);
  local_d0 = 0;
  local_c8 = lpCriticalSection;
  while( true ) {
    (**(code **)(*param_1 + 0x40))(param_1,0);
    FUN_147a6567c(&local_b8);
    EnterCriticalSection(lpCriticalSection);
    iVar2 = (int)param_1[7];
    uVar16 = 1;
    uVar10 = 0;
    iVar14 = 0;
    iVar6 = 0;
    if (iVar2 != 0) {
      puVar4 = (uint *)param_1[6];
      if ((uint *)param_1[6] == (uint *)0x0) {
        puVar4 = (uint *)(param_1 + 4);
      }
      uVar15 = *puVar4;
      if (uVar15 == 0) {
        iVar6 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar6 = iVar2 + -1;
        }
        uVar10 = 0;
        uVar16 = (ulonglong)(uint)(iVar6 >> 5);
        if (iVar6 >> 5 < 1) {
          uVar16 = 0;
        }
        iVar14 = 0;
        do {
          if (uVar16 == uVar10) goto LAB_1434d0d76;
          iVar14 = iVar14 + 0x20;
          uVar15 = puVar4[uVar10 + 1];
          uVar10 = uVar10 + 1;
        } while (uVar15 == 0);
      }
      else {
        uVar10 = 0;
      }
      uVar16 = (ulonglong)(-uVar15 & uVar15);
      uVar1 = uVar16 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar6 = (iVar14 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar6) {
        iVar6 = iVar2;
      }
    }
    if (iVar6 == iVar2) break;
    uVar15 = 0xffffffff;
    bVar13 = false;
    iVar3 = iVar2;
    do {
      lVar11 = *(longlong *)(param_1[2] + (longlong)iVar6 * 0x10);
      if ((*(longlong *)(lVar11 + 0x50) == param_2) || (*(longlong *)(lVar11 + 0x58) == param_2)) {
        FUN_147a6561e();
        iVar3 = (int)param_1[7];
        bVar13 = true;
      }
      lpCriticalSection = local_c8;
      uVar15 = uVar15 & ~(uint)uVar16;
      puVar4 = (uint *)param_1[6];
      if ((uint *)param_1[6] == (uint *)0x0) {
        puVar4 = (uint *)(param_1 + 4);
      }
      iVar6 = (int)uVar10;
      lVar11 = (longlong)iVar6;
      uVar7 = puVar4[lVar11] & uVar15;
      if (uVar7 == 0) {
        iVar8 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar8 = iVar3 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar14 = iVar14 + 0x20;
        iVar9 = iVar8;
        if (iVar8 < iVar6) {
          iVar9 = iVar6;
        }
        if (iVar6 < iVar8) {
          lVar12 = 0;
          do {
            uVar7 = puVar4[lVar11 + lVar12 + 1];
            if (uVar7 != 0) {
              uVar10 = (ulonglong)(iVar6 + (int)lVar12 + 1);
              uVar15 = 0xffffffff;
              goto LAB_1434d0ce5;
            }
            iVar14 = iVar14 + 0x20;
            lVar12 = lVar12 + 1;
          } while (iVar9 - lVar11 != lVar12);
          uVar15 = 0xffffffff;
          lVar11 = (longlong)iVar9;
        }
        uVar10 = lVar11 + 1U & 0xffffffff;
        iVar6 = iVar3;
      }
      else {
LAB_1434d0ce5:
        uVar16 = (ulonglong)(-uVar7 & uVar7);
        uVar1 = uVar16 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar6 = (iVar14 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar6) {
          iVar6 = iVar3;
        }
      }
    } while (iVar6 != iVar2);
    LeaveCriticalSection(local_c8);
    if (!bVar13) goto LAB_1434d0d7f;
    if ((local_d0 & 1) == 0) {
      QueryPerformanceCounter(&local_c0);
    }
    uVar5 = FUN_14000f986(0x3c23d70a);
    local_d0 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
  }
LAB_1434d0d76:
  LeaveCriticalSection(lpCriticalSection);
LAB_1434d0d7f:
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_147a75a84(&local_b8);
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1434d0df4 FUN_1434d0df4 body=4144 status=ok
// SIG undefined FUN_1434d0df4(void)

void FUN_1434d0df4(longlong param_1,longlong param_2,int param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;
  undefined1 *puVar16;
  uint *puVar17;
  ulonglong uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  ulonglong *puVar22;
  longlong *plVar23;
  ulonglong uVar24;
  uint uVar25;
  longlong lVar26;
  undefined8 *puVar27;
  int iVar28;
  longlong lVar29;
  uint uVar30;
  undefined8 *puVar31;
  uint *puVar32;
  undefined1 auStack_218 [32];
  undefined8 *local_1f8;
  longlong local_1e8;
  longlong local_1e0;
  longlong *local_1d8;
  ulonglong local_1d0;
  longlong local_1c8;
  ulonglong local_1c0;
  longlong *local_1b8;
  uint *local_1b0;
  longlong local_1a8;
  longlong *local_1a0;
  uint *local_198;
  ulonglong local_190;
  ulonglong local_188;
  int local_180;
  undefined8 local_17c;
  undefined4 local_174;
  undefined1 local_16d;
  undefined8 local_16c;
  undefined4 local_164;
  undefined8 local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  uint uStack_14c;
  undefined1 local_140 [192];
  undefined1 *local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_218;
  local_1e0 = param_2;
  local_180 = param_3;
  FUN_147a657d4();
  local_80 = (undefined1 *)0x0;
  local_78 = 0x800000000;
  local_1b8 = (longlong *)(param_1 + 0x1b0);
  local_1e8 = param_1;
  if (0 < *(int *)(param_1 + 0x1b8)) {
    local_1c0 = param_1 + 0x198;
    uVar25 = 0;
    do {
      local_1d8 = (longlong *)(longlong)(int)uVar25;
      plVar23 = *(longlong **)(*local_1b8 + (longlong)local_1d8 * 8);
      puVar14 = (uint *)plVar23[0x29];
      uVar11 = 0;
      uVar13 = 0;
      if (puVar14 != (uint *)0x0) {
        uVar11 = *puVar14;
        uVar13 = puVar14[1];
      }
      uVar19 = 0;
      do {
        uVar10 = uVar19;
        if (uVar13 >> ((byte)uVar19 & 0x1f) <= *(uint *)(param_1 + 0x10) &&
            uVar11 >> ((byte)uVar19 & 0x1f) <= *(uint *)(param_1 + 0x10)) break;
        uVar19 = uVar19 + 1;
        uVar10 = *(uint *)(param_1 + 0x1c8);
      } while (uVar19 <= *(uint *)(param_1 + 0x1c8));
      if (puVar14 == (uint *)0x0) {
        uVar19 = 0;
      }
      else {
        if (*(code **)(*plVar23 + 0x330) == (code *)&LAB_14014d366) {
          if (((*(byte *)((longlong)plVar23 + 0xfe) & 4) != 0) &&
             (lVar26 = *(longlong *)(puVar14 + 10), lVar26 != 0)) {
LAB_1434d10cb:
            uVar19 = *(uint *)(lVar26 + 4);
            goto LAB_1434d0f27;
          }
        }
        else {
          cVar4 = (**(code **)(*plVar23 + 0x330))(plVar23);
          puVar14 = (uint *)plVar23[0x29];
          param_1 = local_1e8;
          if (cVar4 != '\0') {
            lVar26 = *(longlong *)(puVar14 + 10);
            goto LAB_1434d10cb;
          }
        }
        uVar19 = puVar14[8];
      }
LAB_1434d0f27:
      iVar5 = FUN_1417f3e5c(plVar23);
      if (uVar19 - iVar5 <= uVar10) {
        *(byte *)((longlong)plVar23 + 0xbcU) = *(byte *)((longlong)plVar23 + 0xbcU) & 0xf7;
        if (*(int *)(param_1 + 0x168) != *(int *)(param_1 + 0x194)) {
          uVar21 = ((uint)((ulonglong)plVar23 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar23 >> 4)) *
                   -0x7a143595;
          uVar21 = (uVar21 >> 0xd ^ uVar21) * -0x3d4d51cb;
          uVar24 = *(ulonglong *)(param_1 + 0x1a0);
          if (*(ulonglong *)(param_1 + 0x1a0) == 0) {
            uVar24 = local_1c0;
          }
          iVar28 = *(int *)(uVar24 + (ulonglong)
                                     (*(int *)(param_1 + 0x1a8) - 1U & (uVar21 >> 0x10 ^ uVar21)) *
                                     4);
          if (iVar28 != -1) {
            do {
              puVar22 = (ulonglong *)(*(longlong *)(param_1 + 0x160) + (longlong)iVar28 * 0x18);
              if ((longlong *)*puVar22 == plVar23) goto LAB_1434d0fcd;
              iVar28 = (int)puVar22[2];
            } while (iVar28 != -1);
          }
        }
        puVar22 = (ulonglong *)0x0;
LAB_1434d0fcd:
        uVar21 = *(uint *)((longlong)puVar22 + 0xc);
        lVar26 = (longlong)(int)local_78;
        uVar30 = (int)local_78 + 1;
        local_78 = CONCAT44(local_78._4_4_,uVar30);
        if (local_78._4_4_ < uVar30) {
          FUN_147a76024(local_140);
        }
        local_1d0 = (ulonglong)(uVar21 & 3);
        puVar16 = local_80;
        if (local_80 == (undefined1 *)0x0) {
          puVar16 = local_140;
        }
        uVar24 = puVar22[1];
        lVar8 = FUN_1447b4020(plVar23);
        param_1 = local_1e8;
        *(undefined8 *)(puVar16 + lVar26 * 0x18) = *(undefined8 *)(lVar8 + 0x10);
        *(uint *)(puVar16 + lVar26 * 0x18 + 8) = uVar11 >> ((byte)uVar10 & 0x1f);
        *(uint *)(puVar16 + lVar26 * 0x18 + 0xc) = uVar13 >> ((byte)uVar10 & 0x1f);
        *(uint *)(puVar16 + lVar26 * 0x18 + 0x10) = uVar10 - (uVar19 - iVar5);
        *(int *)(puVar16 + lVar26 * 0x18 + 0x14) = (int)local_1d0 + (int)uVar24 * 4;
        iVar5 = *(int *)(local_1e8 + 0x1b8);
        iVar28 = ~uVar25 + iVar5;
        if (iVar28 != 0) {
          if (0 < iVar28) {
            iVar28 = 1;
          }
          memmove((void *)(*(longlong *)(local_1e8 + 0x1b0) + (longlong)local_1d8 * 8),
                  (void *)(*(longlong *)(local_1e8 + 0x1b0) + (longlong)(iVar5 - iVar28) * 8),
                  (longlong)iVar28 << 3);
          iVar5 = *(int *)(param_1 + 0x1b8);
        }
        uVar25 = uVar25 - 1;
        *(int *)(param_1 + 0x1b8) = iVar5 + -1;
        FUN_147a76144(local_1b8);
      }
      uVar25 = uVar25 + 1;
    } while ((int)uVar25 < *(int *)(param_1 + 0x1b8));
  }
  if (*(int *)(param_1 + 200) != *(int *)(param_1 + 0xf4)) {
    plVar23 = (longlong *)(param_1 + 0xc0);
    FUN_1434d1e26();
    puVar14 = (uint *)(param_1 + 0xd0);
    iVar5 = *(int *)(param_1 + 0xe8);
    if (iVar5 == 0) {
      uVar18 = 1;
      puVar32 = (uint *)0x0;
      iVar28 = 0;
      iVar20 = 0;
    }
    else {
      puVar15 = *(uint **)(param_1 + 0xe0);
      if (*(uint **)(param_1 + 0xe0) == (uint *)0x0) {
        puVar15 = puVar14;
      }
      uVar25 = *puVar15;
      if (uVar25 == 0) {
        iVar28 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar28 = iVar5 + -1;
        }
        puVar32 = (uint *)0x0;
        puVar17 = (uint *)(ulonglong)(uint)(iVar28 >> 5);
        if (iVar28 >> 5 < 1) {
          puVar17 = puVar32;
        }
        iVar28 = 0;
        do {
          if (puVar17 == puVar32) goto LAB_1434d1dd0;
          iVar28 = iVar28 + 0x20;
          uVar25 = puVar15[(longlong)puVar32 + 1];
          puVar32 = (uint *)((longlong)puVar32 + 1);
        } while (uVar25 == 0);
      }
      else {
        puVar32 = (uint *)0x0;
        iVar28 = 0;
      }
      uVar18 = (ulonglong)(-uVar25 & uVar25);
      uVar24 = uVar18 * 2 + 1;
      lVar26 = 0x3f;
      if (uVar24 != 0) {
        for (; uVar24 >> lVar26 == 0; lVar26 = lVar26 + -1) {
        }
      }
      iVar20 = (iVar28 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
      if (iVar5 <= iVar20) {
        iVar20 = iVar5;
      }
    }
    if (iVar20 < iVar5) {
      local_190 = param_1 + 0x10;
      local_1a8 = param_1 + 0x160;
      local_1c8 = param_1 + 0x110;
      uVar25 = 0xffffffff;
      uVar24 = 0;
      local_1b0 = puVar14;
      local_1a0 = plVar23;
      do {
        puVar9 = (undefined8 *)(*plVar23 + (longlong)iVar20 * 0x18);
        local_158 = *(undefined4 *)puVar9;
        uStack_154 = *(undefined4 *)((longlong)puVar9 + 4);
        plVar3 = (longlong *)*puVar9;
        uStack_150 = *(undefined4 *)(puVar9 + 1);
        uStack_14c = *(uint *)((longlong)puVar9 + 0xc);
        if ((uVar24 & 1) == 0) {
          local_1d0 = CONCAT44(local_1d0._4_4_,uVar25);
          local_1d8 = (longlong *)CONCAT44(local_1d8._4_4_,iVar28);
          puVar15 = (uint *)plVar3[0x29];
          uVar13 = 0;
          uVar25 = 0;
          uVar11 = 0;
          if (puVar15 != (uint *)0x0) {
            uVar25 = *puVar15;
            uVar11 = puVar15[1];
          }
          uVar19 = *(uint *)(param_1 + 0x1c8);
          do {
            uVar10 = uVar25 >> ((byte)uVar13 & 0x1f);
            uVar21 = uVar11 >> ((byte)uVar13 & 0x1f);
            if ((uVar10 <= *(uint *)(param_1 + 0x10)) && (uVar21 <= *(uint *)(param_1 + 0x10)))
            goto LAB_1434d1991;
            uVar13 = uVar13 + 1;
          } while (uVar13 <= uVar19);
          uVar10 = uVar25 >> ((byte)uVar19 & 0x1f);
          uVar21 = uVar11 >> ((byte)uVar19 & 0x1f);
          uVar13 = uVar19;
LAB_1434d1991:
          local_188 = uVar24;
          local_1c0 = FUN_147a65fce(local_190,uVar10,uVar21);
          uVar25 = uStack_14c;
          if ((int)local_1c0 == -1) {
            FUN_147a75ce0(local_1c8,&local_160,&local_158);
            uVar24 = CONCAT71((uint7)(uint3)(uVar10 >> 8),1);
            iVar28 = (int)local_1d8;
          }
          else {
            lVar26 = plVar3[0x29];
            local_198 = puVar32;
            if (lVar26 == 0) {
              iVar5 = 0;
            }
            else {
              if (*(code **)(*plVar3 + 0x330) == (code *)&LAB_14014d366) {
                if (((*(byte *)((longlong)plVar3 + 0xfe) & 4) != 0) &&
                   (lVar8 = *(longlong *)(lVar26 + 0x28), lVar8 != 0)) {
LAB_1434d1bf2:
                  iVar5 = *(int *)(lVar8 + 4);
                  goto LAB_1434d1a24;
                }
              }
              else {
                cVar4 = (**(code **)(*plVar3 + 0x330))(plVar3);
                lVar26 = plVar3[0x29];
                if (cVar4 != '\0') {
                  lVar8 = *(longlong *)(lVar26 + 0x28);
                  goto LAB_1434d1bf2;
                }
              }
              iVar5 = *(int *)(lVar26 + 0x20);
            }
LAB_1434d1a24:
            iVar20 = FUN_1417f3e5c(plVar3);
            iVar28 = uVar13 - (iVar5 - iVar20);
            if (uVar13 < (uint)(iVar5 - iVar20)) {
              *(byte *)((longlong)plVar3 + 0xbc) = *(byte *)((longlong)plVar3 + 0xbc) | 8;
              iVar5 = *(int *)(local_1e8 + 0x1b8);
              *(uint *)(local_1e8 + 0x1b8) = iVar5 + 1U;
              if (*(uint *)(local_1e8 + 0x1bc) < iVar5 + 1U) {
                FUN_147a76346(local_1b8,iVar5);
              }
              *(longlong **)(*local_1b8 + (longlong)iVar5 * 8) = plVar3;
              iVar28 = 0;
            }
            uStack_150 = (undefined4)local_1c0;
            FUN_147a75ce0(local_1a8,&local_160,&local_158);
            uVar24 = local_78;
            lVar26 = (longlong)(int)local_78;
            uVar11 = (int)local_78 + 1;
            local_78 = CONCAT44(local_78._4_4_,uVar11);
            if (local_78._4_4_ < uVar11) {
              FUN_147a76024(local_140,uVar24 & 0xffffffff);
            }
            puVar16 = local_80;
            if (local_80 == (undefined1 *)0x0) {
              puVar16 = local_140;
            }
            lVar8 = FUN_1447b4020(plVar3);
            *(undefined8 *)(puVar16 + lVar26 * 0x18) = *(undefined8 *)(lVar8 + 0x10);
            *(uint *)(puVar16 + lVar26 * 0x18 + 8) = uVar10;
            *(uint *)(puVar16 + lVar26 * 0x18 + 0xc) = uVar21;
            *(int *)(puVar16 + lVar26 * 0x18 + 0x10) = iVar28;
            *(uint *)(puVar16 + lVar26 * 0x18 + 0x14) = (uVar25 & 3) + (int)local_1c0 * 4;
            plVar23 = local_1a0;
            uVar24 = local_188;
            puVar14 = local_1b0;
            puVar32 = local_198;
            iVar28 = (int)local_1d8;
          }
          param_1 = local_1e8;
          uVar25 = (uint)local_1d0;
        }
        else {
          FUN_147a75ce0(local_1c8,&local_160,&local_158);
        }
        uVar25 = uVar25 & ~(uint)uVar18;
        puVar15 = *(uint **)(param_1 + 0xe0);
        if (*(uint **)(param_1 + 0xe0) == (uint *)0x0) {
          puVar15 = puVar14;
        }
        iVar5 = *(int *)(param_1 + 0xe8);
        iVar20 = (int)puVar32;
        lVar26 = (longlong)iVar20;
        uVar11 = puVar15[lVar26] & uVar25;
        if (uVar11 == 0) {
          iVar6 = iVar5 + 0x1e;
          if (-1 < iVar5 + -1) {
            iVar6 = iVar5 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar12 = iVar6;
          if (iVar6 < iVar20) {
            iVar12 = iVar20;
          }
          if (iVar6 <= iVar20) break;
          lVar8 = 0;
          while( true ) {
            iVar28 = iVar28 + 0x20;
            uVar11 = puVar15[lVar26 + lVar8 + 1];
            if (uVar11 != 0) break;
            lVar8 = lVar8 + 1;
            if (iVar12 - lVar26 == lVar8) goto LAB_1434d1dc0;
          }
          puVar32 = (uint *)(ulonglong)(iVar20 + (int)lVar8 + 1);
          uVar25 = 0xffffffff;
        }
        uVar18 = (ulonglong)(-uVar11 & uVar11);
        uVar7 = uVar18 * 2 + 1;
        lVar26 = 0x3f;
        if (uVar7 != 0) {
          for (; uVar7 >> lVar26 == 0; lVar26 = lVar26 + -1) {
          }
        }
        iVar20 = (iVar28 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
      } while (iVar20 < iVar5);
LAB_1434d1dc0:
      if ((uVar24 & 1) != 0) {
        FUN_1434d1e26(local_1c8);
      }
    }
LAB_1434d1dd0:
    FUN_147a662e2(plVar23);
  }
  if (*(int *)(param_1 + 0x118) != *(int *)(param_1 + 0x144)) {
    iVar5 = *(int *)(local_1e8 + 0x138);
    if (iVar5 == 0) {
      uVar18 = 1;
      uVar24 = 0;
      iVar28 = 0;
      iVar20 = 0;
    }
    else {
      puVar14 = *(uint **)(local_1e8 + 0x130);
      if (*(uint **)(local_1e8 + 0x130) == (uint *)0x0) {
        puVar14 = (uint *)(local_1e8 + 0x120);
      }
      uVar25 = *puVar14;
      if (uVar25 == 0) {
        iVar28 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar28 = iVar5 + -1;
        }
        uVar24 = 0;
        uVar18 = (ulonglong)(uint)(iVar28 >> 5);
        if (iVar28 >> 5 < 1) {
          uVar18 = uVar24;
        }
        iVar28 = 0;
        do {
          if (uVar18 == uVar24) goto LAB_1434d151f;
          iVar28 = iVar28 + 0x20;
          uVar25 = puVar14[uVar24 + 1];
          uVar24 = uVar24 + 1;
        } while (uVar25 == 0);
      }
      else {
        uVar24 = 0;
        iVar28 = 0;
      }
      uVar18 = (ulonglong)(-uVar25 & uVar25);
      uVar7 = uVar18 * 2 + 1;
      lVar26 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar26 == 0; lVar26 = lVar26 + -1) {
        }
      }
      iVar20 = (iVar28 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
      if (iVar5 <= iVar20) {
        iVar20 = iVar5;
      }
    }
    if (iVar20 < iVar5) {
      plVar23 = (longlong *)(local_1e8 + 0x110);
      local_1b0 = (uint *)(local_1e8 + 0x10);
      local_1a8 = local_1e8 + 0x160;
      uVar25 = 0xffffffff;
      local_1a0 = plVar23;
      local_198 = (uint *)(local_1e8 + 0x120);
      do {
        puVar9 = (undefined8 *)(*plVar23 + (longlong)iVar20 * 0x18);
        local_158 = *(undefined4 *)puVar9;
        uStack_154 = *(undefined4 *)((longlong)puVar9 + 4);
        local_1d8 = (longlong *)*puVar9;
        uStack_150 = *(undefined4 *)(puVar9 + 1);
        uStack_14c = *(uint *)((longlong)puVar9 + 0xc);
        puVar14 = (uint *)local_1d8[0x29];
        uVar11 = 0;
        uVar13 = 0;
        if (puVar14 != (uint *)0x0) {
          uVar11 = *puVar14;
          uVar13 = puVar14[1];
        }
        uVar19 = *(uint *)(local_1e8 + 0x1c8);
        uVar10 = 0;
        do {
          uVar21 = uVar11 >> ((byte)uVar10 & 0x1f);
          uVar30 = uVar13 >> ((byte)uVar10 & 0x1f);
          if ((uVar21 <= *(uint *)(local_1e8 + 0x10)) && (uVar30 <= *(uint *)(local_1e8 + 0x10)))
          goto LAB_1434d1271;
          uVar10 = uVar10 + 1;
        } while (uVar10 <= uVar19);
        uVar21 = uVar11 >> ((byte)uVar19 & 0x1f);
        uVar30 = uVar13 >> ((byte)uVar19 & 0x1f);
        uVar10 = uVar19;
LAB_1434d1271:
        uVar7 = FUN_147a65fce(local_1b0,uVar21,uVar30);
        plVar23 = local_1d8;
        if ((int)uVar7 == -1) break;
        local_1c8 = CONCAT44(local_1c8._4_4_,iVar28);
        local_190 = (ulonglong)uStack_14c;
        lVar26 = local_1d8[0x29];
        local_188 = CONCAT44(local_188._4_4_,uVar25);
        local_1d0 = uVar7;
        local_1c0 = uVar24;
        if (lVar26 == 0) {
          iVar5 = 0;
        }
        else {
          if (*(code **)(*local_1d8 + 0x330) == (code *)&LAB_14014d366) {
            if (((*(byte *)((longlong)local_1d8 + 0xfe) & 4) != 0) &&
               (lVar8 = *(longlong *)(lVar26 + 0x28), lVar8 != 0)) {
LAB_1434d14eb:
              iVar5 = *(int *)(lVar8 + 4);
              goto LAB_1434d12ed;
            }
          }
          else {
            cVar4 = (**(code **)(*local_1d8 + 0x330))();
            lVar26 = plVar23[0x29];
            if (cVar4 != '\0') {
              lVar8 = *(longlong *)(lVar26 + 0x28);
              goto LAB_1434d14eb;
            }
          }
          iVar5 = *(int *)(lVar26 + 0x20);
        }
LAB_1434d12ed:
        iVar6 = FUN_1417f3e5c(local_1d8);
        iVar28 = uVar10 - (iVar5 - iVar6);
        if (uVar10 < (uint)(iVar5 - iVar6)) {
          *(byte *)((longlong)local_1d8 + 0xbc) = *(byte *)((longlong)local_1d8 + 0xbc) | 8;
          iVar5 = *(int *)(local_1e8 + 0x1b8);
          *(uint *)(local_1e8 + 0x1b8) = iVar5 + 1U;
          if (*(uint *)(local_1e8 + 0x1bc) < iVar5 + 1U) {
            FUN_147a76346(local_1b8,iVar5);
          }
          *(longlong **)(*local_1b8 + (longlong)iVar5 * 8) = local_1d8;
          iVar28 = 0;
        }
        uStack_150 = (undefined4)local_1d0;
        FUN_147a75ce0(local_1a8,&local_160,&local_158);
        uVar24 = local_78;
        lVar26 = (longlong)(int)local_78;
        uVar25 = (int)local_78 + 1;
        local_78 = CONCAT44(local_78._4_4_,uVar25);
        if (local_78._4_4_ < uVar25) {
          FUN_147a76024(local_140,uVar24 & 0xffffffff);
        }
        uVar25 = (uint)local_190;
        puVar16 = local_80;
        if (local_80 == (undefined1 *)0x0) {
          puVar16 = local_140;
        }
        lVar8 = FUN_1447b4020(local_1d8);
        plVar23 = local_1a0;
        *(undefined8 *)(puVar16 + lVar26 * 0x18) = *(undefined8 *)(lVar8 + 0x10);
        *(uint *)(puVar16 + lVar26 * 0x18 + 8) = uVar21;
        *(uint *)(puVar16 + lVar26 * 0x18 + 0xc) = uVar30;
        *(int *)(puVar16 + lVar26 * 0x18 + 0x10) = iVar28;
        *(uint *)(puVar16 + lVar26 * 0x18 + 0x14) = (uVar25 & 3) + (int)local_1d0 * 4;
        FUN_14019fc1a(local_1a0,iVar20);
        uVar25 = (uint)local_188 & ~(uint)uVar18;
        puVar14 = *(uint **)(local_1e8 + 0x130);
        if (*(uint **)(local_1e8 + 0x130) == (uint *)0x0) {
          puVar14 = local_198;
        }
        iVar5 = *(int *)(local_1e8 + 0x138);
        iVar20 = (int)local_1c0;
        lVar26 = (longlong)iVar20;
        uVar11 = puVar14[lVar26] & uVar25;
        uVar24 = local_1c0;
        iVar28 = (int)local_1c8;
        if (uVar11 == 0) {
          iVar6 = iVar5 + 0x1e;
          if (-1 < iVar5 + -1) {
            iVar6 = iVar5 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar12 = iVar6;
          if (iVar6 < iVar20) {
            iVar12 = iVar20;
          }
          if (iVar6 <= iVar20) break;
          lVar8 = 0;
          while( true ) {
            iVar28 = iVar28 + 0x20;
            uVar11 = puVar14[lVar26 + lVar8 + 1];
            if (uVar11 != 0) break;
            lVar8 = lVar8 + 1;
            if (iVar12 - lVar26 == lVar8) goto LAB_1434d151f;
          }
          uVar25 = 0xffffffff;
          uVar24 = (ulonglong)(iVar20 + (int)lVar8 + 1);
        }
        uVar18 = (ulonglong)(-uVar11 & uVar11);
        uVar7 = uVar18 * 2 + 1;
        lVar26 = 0x3f;
        if (uVar7 != 0) {
          for (; uVar7 >> lVar26 == 0; lVar26 = lVar26 + -1) {
          }
        }
        iVar20 = (iVar28 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
      } while (iVar20 < iVar5);
    }
  }
LAB_1434d151f:
  lVar26 = local_1e0;
  if ((int)local_78 != 0) {
    lVar8 = FUN_14473c272(local_1e0,local_1e8 + 0x1c0,0);
    uVar1 = *(undefined1 *)(lVar8 + 0x94);
    plVar23 = (longlong *)(lVar26 + 0x70);
    puVar31 = (undefined8 *)(*(longlong *)(lVar26 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar31 + 9;
    if (*(undefined8 **)(lVar26 + 0x78) < puVar9) {
      FUN_140023dd8(plVar23,0x50);
      puVar31 = (undefined8 *)(*plVar23 + 7U & 0xfffffffffffffff8);
      puVar9 = puVar31 + 9;
      lVar26 = local_1e0;
    }
    *(undefined8 **)(lVar26 + 0x70) = puVar9;
    puVar31[1] = *(undefined8 *)(lVar8 + 8);
    puVar31[2] = 0;
    *(undefined1 *)(puVar31 + 3) = 0;
    *(undefined8 *)((longlong)puVar31 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar31 + 5) = 1;
    *puVar31 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar31 + 6) = uVar1;
    *(undefined1 *)(puVar31 + 7) = 0;
    *(undefined4 *)((longlong)puVar31 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar31 + 0x35) = 0;
    puVar31[8] = lVar8;
    iVar5 = *(int *)(lVar26 + 0x1a0);
    *(uint *)(lVar26 + 0x1a0) = iVar5 + 1U;
    if (*(uint *)(lVar26 + 0x1a4) < iVar5 + 1U) {
      FUN_1447568fc(lVar26 + 0x198,iVar5);
      lVar26 = local_1e0;
    }
    *(undefined8 **)(*(longlong *)(lVar26 + 0x198) + (longlong)iVar5 * 8) = puVar31;
    *(int *)((longlong)puVar31 + 0x1c) = *(int *)(lVar26 + 0x1a0) + -1;
    if (*(int *)(local_1e8 + 0x1d0) == 0) {
      uVar2 = *(undefined8 *)
               (&DAT_14ca8c1f0 +
               (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)local_180 * 2) * 8);
      FUN_145deb838();
      FUN_1448e935e(uVar2,&local_158,&DAT_14cad69c0,0);
      FUN_145deb838();
      if (0 < (int)local_78) {
        lVar26 = local_1e0 + 0x98;
        lVar8 = 0;
        lVar29 = 0;
        do {
          puVar27 = (undefined8 *)(*(longlong *)(local_1e0 + 0x70) + 0xfU & 0xfffffffffffffff0);
          puVar9 = puVar27 + 0xc;
          if (*(undefined8 **)(local_1e0 + 0x78) < puVar9) {
            FUN_140023dd8(plVar23,0x70);
            puVar27 = (undefined8 *)(*plVar23 + 0xfU & 0xfffffffffffffff0);
            puVar9 = puVar27 + 0xc;
          }
          *(undefined8 **)(local_1e0 + 0x70) = puVar9;
          *puVar27 = &PTR_FUN_14a8bcda0;
          puVar27[4] = 0;
          puVar27[5] = 0x3f80000000000000;
          puVar27[10] = 0;
          puVar27[7] = 0;
          puVar27[8] = 0;
          iVar5 = *(int *)(local_1e0 + 0xa0);
          *(uint *)(local_1e0 + 0xa0) = iVar5 + 1U;
          if (*(uint *)(local_1e0 + 0xa4) < iVar5 + 1U) {
            FUN_1448cfae8(lVar26,iVar5);
          }
          *(undefined8 **)(*(longlong *)(local_1e0 + 0x98) + (longlong)iVar5 * 8) = puVar27;
          puVar16 = local_80;
          if (local_80 == (undefined1 *)0x0) {
            puVar16 = local_140;
          }
          local_1f8 = puVar31;
          FUN_147a66322(puVar16 + lVar8,&local_160,puVar27 + 2,local_1e8);
          local_16c = local_160;
          local_164 = 1;
          local_1f8 = &local_16c;
          FUN_147a663ad(local_1e0,&local_16d,&local_158,puVar27 + 2);
          lVar29 = lVar29 + 1;
          lVar8 = lVar8 + 0x18;
        } while (lVar29 < (int)local_78);
      }
    }
    else {
      uVar2 = *(undefined8 *)
               (&DAT_14ca8c1f0 +
               (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)local_180 * 2) * 8);
      FUN_145ea3fbe();
      FUN_1448e935e(uVar2,&local_158,&DAT_14cad6ae8,0);
      FUN_145ea3fbe();
      if (0 < (int)local_78) {
        lVar26 = local_1e0 + 0x98;
        lVar29 = 0;
        lVar8 = 0;
        do {
          puVar27 = (undefined8 *)(*(longlong *)(local_1e0 + 0x70) + 0xfU & 0xfffffffffffffff0);
          puVar9 = puVar27 + 0xe;
          if (*(undefined8 **)(local_1e0 + 0x78) < puVar9) {
            FUN_140023dd8(plVar23,0x80);
            puVar27 = (undefined8 *)(*plVar23 + 0xfU & 0xfffffffffffffff0);
            puVar9 = puVar27 + 0xe;
          }
          *(undefined8 **)(local_1e0 + 0x70) = puVar9;
          *puVar27 = &PTR_FUN_14a8bcdc8;
          puVar27[4] = 0;
          puVar27[5] = 0x3f80000000000000;
          puVar27[10] = 0;
          puVar27[0xb] = 0x3f80000000000000;
          puVar27[7] = 0;
          puVar27[8] = 0;
          puVar27[0xc] = 0;
          iVar5 = *(int *)(local_1e0 + 0xa0);
          *(uint *)(local_1e0 + 0xa0) = iVar5 + 1U;
          if (*(uint *)(local_1e0 + 0xa4) < iVar5 + 1U) {
            FUN_1448cfae8(lVar26,iVar5);
          }
          *(undefined8 **)(*(longlong *)(local_1e0 + 0x98) + (longlong)iVar5 * 8) = puVar27;
          puVar16 = local_80;
          if (local_80 == (undefined1 *)0x0) {
            puVar16 = local_140;
          }
          local_1f8 = puVar31;
          FUN_147a66322(puVar16 + lVar29,&local_160,puVar27 + 2,local_1e8);
          local_17c = local_160;
          local_174 = 1;
          local_1f8 = &local_17c;
          FUN_147a6645f(local_1e0,&local_16d,&local_158,puVar27 + 2);
          lVar8 = lVar8 + 1;
          lVar29 = lVar29 + 0x18;
        } while (lVar8 < (int)local_78);
      }
    }
  }
  if (local_80 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1434d1e26 FUN_1434d1e26 body=1916 status=ok
// SIG undefined FUN_1434d1e26(void)

void FUN_1434d1e26(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  int *piVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  uint uVar12;
  longlong *plVar13;
  int iVar14;
  longlong *plVar15;
  ulonglong uVar16;
  longlong *plVar17;
  longlong *plVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  longlong *plVar22;
  int iVar23;
  int iVar24;
  longlong *plVar25;
  int iVar26;
  longlong *plVar27;
  bool bVar28;
  float fVar29;
  undefined1 auStack_398 [40];
  longlong *local_370;
  longlong local_368;
  longlong local_360;
  undefined4 local_358 [188];
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_398;
  if (*(int *)((longlong)param_1 + 0x34) < (int)param_1[1]) {
    FUN_147a761e6(param_1);
    uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    if (1 < (int)uVar12) {
      lVar2 = *param_1;
      local_370 = param_1;
      memset(local_358,0,0x2f0);
      local_360 = lVar2 + (ulonglong)uVar12 * 0x18 + -0x18;
      local_368 = lVar2;
      fVar29 = logf((float)(int)uVar12);
      local_358[0] = (int)(longlong)(fVar29 + fVar29);
      plVar9 = &local_368;
      do {
        plVar11 = (longlong *)*plVar9;
        plVar15 = (longlong *)plVar9[1];
        iVar19 = (int)plVar9[2];
        iVar23 = (int)((ulonglong)((longlong)plVar15 - (longlong)plVar11) >> 3) * -0x55555555;
        uVar12 = iVar23 + 1;
        plVar13 = plVar11;
        plVar17 = plVar15;
        if (iVar19 != 0) {
LAB_1434d1f1c:
          if (8 < (int)uVar12) {
            uVar16 = (ulonglong)(uVar12 >> 1);
            lVar2 = plVar11[uVar16 * 3 + 2];
            lVar4 = plVar11[uVar16 * 3];
            lVar5 = (plVar11 + uVar16 * 3)[1];
            plVar11[uVar16 * 3 + 2] = plVar11[2];
            lVar6 = plVar11[1];
            plVar11[uVar16 * 3] = *plVar11;
            (plVar11 + uVar16 * 3)[1] = lVar6;
            plVar11[2] = lVar2;
            *plVar11 = lVar4;
            plVar11[1] = lVar5;
            plVar22 = plVar17 + 3;
            plVar10 = plVar11;
            do {
              plVar7 = plVar10 + 3;
              plVar18 = plVar10 + 3;
              do {
                plVar10 = plVar18;
                plVar27 = plVar7;
                if (plVar17 < plVar10) break;
                piVar3 = *(int **)(*plVar11 + 0x148);
                iVar14 = 0;
                iVar21 = 0;
                iVar23 = 0;
                if (piVar3 != (int *)0x0) {
                  iVar23 = *piVar3;
                  iVar21 = piVar3[1];
                }
                piVar3 = *(int **)(*plVar10 + 0x148);
                iVar24 = 0;
                if (piVar3 != (int *)0x0) {
                  iVar24 = *piVar3;
                  iVar14 = piVar3[1];
                }
                if (iVar23 < iVar21) {
                  iVar23 = iVar21;
                }
                if (iVar24 < iVar14) {
                  iVar24 = iVar14;
                }
                plVar7 = plVar27 + 3;
                plVar18 = plVar10 + 3;
              } while (iVar24 <= iVar23);
              plVar7 = plVar22 + -6;
              do {
                plVar18 = plVar22;
                plVar25 = plVar7;
                plVar22 = plVar18 + -3;
                if (plVar22 <= plVar11) break;
                piVar3 = *(int **)(*plVar22 + 0x148);
                iVar14 = 0;
                iVar21 = 0;
                iVar23 = 0;
                if (piVar3 != (int *)0x0) {
                  iVar23 = *piVar3;
                  iVar21 = piVar3[1];
                }
                piVar3 = *(int **)(*plVar11 + 0x148);
                iVar24 = 0;
                if (piVar3 != (int *)0x0) {
                  iVar24 = *piVar3;
                  iVar14 = piVar3[1];
                }
                if (iVar23 < iVar21) {
                  iVar23 = iVar21;
                }
                if (iVar24 < iVar14) {
                  iVar24 = iVar14;
                }
                plVar7 = plVar25 + -3;
              } while (iVar24 <= iVar23);
              if (plVar22 < plVar10) goto LAB_1434d209c;
              lVar2 = plVar10[2];
              lVar4 = *plVar10;
              lVar5 = plVar10[1];
              plVar10[2] = plVar18[-1];
              lVar6 = plVar18[-2];
              *plVar10 = *plVar22;
              plVar10[1] = lVar6;
              plVar18[-1] = lVar2;
              *plVar22 = lVar4;
              plVar18[-2] = lVar5;
            } while( true );
          }
          for (; plVar13 = plVar11, plVar15 = plVar11, plVar11 < plVar17; plVar17 = plVar17 + -3) {
            while (plVar22 = plVar13, plVar15 = plVar15 + 3, plVar15 <= plVar17) {
              piVar3 = *(int **)(*plVar22 + 0x148);
              iVar21 = 0;
              iVar23 = 0;
              iVar19 = 0;
              if (piVar3 != (int *)0x0) {
                iVar19 = *piVar3;
                iVar23 = piVar3[1];
              }
              piVar3 = *(int **)(*plVar15 + 0x148);
              iVar14 = 0;
              if (piVar3 != (int *)0x0) {
                iVar14 = *piVar3;
                iVar21 = piVar3[1];
              }
              if (iVar19 < iVar23) {
                iVar19 = iVar23;
              }
              if (iVar14 < iVar21) {
                iVar14 = iVar21;
              }
              plVar13 = plVar15;
              if (iVar14 <= iVar19) {
                plVar13 = plVar22;
              }
            }
            local_58 = plVar22[2];
            local_68 = *plVar22;
            uStack_60 = plVar22[1];
            lVar4 = local_68;
            lVar5 = uStack_60;
            plVar22[2] = plVar17[2];
            lVar2 = plVar17[1];
            *plVar22 = *plVar17;
            plVar22[1] = lVar2;
            plVar17[2] = local_58;
            local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
            uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
            *(undefined4 *)plVar17 = (undefined4)local_68;
            *(undefined4 *)((longlong)plVar17 + 4) = local_68._4_4_;
            *(undefined4 *)(plVar17 + 1) = (undefined4)uStack_60;
            *(undefined4 *)((longlong)plVar17 + 0xc) = uStack_60._4_4_;
            local_68 = lVar4;
            uStack_60 = lVar5;
          }
          goto LAB_1434d2587;
        }
LAB_1434d216e:
        if (uVar12 != 0) {
          iVar19 = (iVar23 - (iVar23 + -1 >> 0x1f)) + -1 >> 1;
          iVar23 = iVar19;
joined_r0x0001434d2194:
          do {
            iVar21 = iVar19 * 2 + 1;
            if (iVar21 < (int)uVar12) {
              iVar14 = iVar19 * 2 + 2;
              if (iVar14 < (int)uVar12) {
                piVar3 = *(int **)(plVar11[(longlong)iVar14 * 3] + 0x148);
                iVar20 = 0;
                iVar26 = 0;
                iVar24 = 0;
                if (piVar3 != (int *)0x0) {
                  iVar24 = *piVar3;
                  iVar26 = piVar3[1];
                }
                piVar3 = *(int **)(plVar11[(longlong)iVar21 * 3] + 0x148);
                iVar8 = 0;
                if (piVar3 != (int *)0x0) {
                  iVar8 = *piVar3;
                  iVar20 = piVar3[1];
                }
                if (iVar24 < iVar26) {
                  iVar24 = iVar26;
                }
                if (iVar8 < iVar20) {
                  iVar8 = iVar20;
                }
                if (iVar8 <= iVar24) {
                  iVar21 = iVar14;
                }
              }
              piVar3 = *(int **)(plVar11[(longlong)iVar19 * 3] + 0x148);
              iVar26 = 0;
              iVar24 = 0;
              iVar14 = 0;
              if (piVar3 != (int *)0x0) {
                iVar14 = *piVar3;
                iVar24 = piVar3[1];
              }
              plVar17 = plVar11 + (longlong)iVar21 * 3;
              piVar3 = *(int **)(*plVar17 + 0x148);
              iVar20 = 0;
              if (piVar3 != (int *)0x0) {
                iVar20 = *piVar3;
                iVar26 = piVar3[1];
              }
              if (iVar14 < iVar24) {
                iVar14 = iVar24;
              }
              if (iVar20 < iVar26) {
                iVar20 = iVar26;
              }
              if (iVar14 < iVar20) {
                plVar15 = plVar11 + (longlong)iVar19 * 3;
                local_58 = plVar15[2];
                local_68 = *plVar15;
                uStack_60 = plVar15[1];
                lVar4 = local_68;
                lVar5 = uStack_60;
                plVar15[2] = plVar17[2];
                lVar2 = plVar17[1];
                *plVar15 = *plVar17;
                plVar15[1] = lVar2;
                plVar17[2] = local_58;
                local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
                uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
                *(undefined4 *)plVar17 = (undefined4)local_68;
                *(undefined4 *)((longlong)plVar17 + 4) = local_68._4_4_;
                *(undefined4 *)(plVar17 + 1) = (undefined4)uStack_60;
                *(undefined4 *)((longlong)plVar17 + 0xc) = uStack_60._4_4_;
                iVar19 = iVar21;
                local_68 = lVar4;
                uStack_60 = lVar5;
                goto joined_r0x0001434d2194;
              }
            }
            bVar28 = iVar23 != 0;
            iVar19 = iVar23 + -1;
            iVar23 = iVar19;
          } while (bVar28);
          if (1 < (int)uVar12) {
            uVar16 = (ulonglong)uVar12 - 1;
            local_58 = plVar11[2];
            local_68 = *plVar11;
            uStack_60 = plVar11[1];
            lVar4 = local_68;
            lVar5 = uStack_60;
            plVar11[2] = plVar11[uVar16 * 3 + 2];
            lVar2 = (plVar11 + uVar16 * 3)[1];
            *plVar11 = plVar11[uVar16 * 3];
            plVar11[1] = lVar2;
            plVar11[uVar16 * 3 + 2] = local_58;
            local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
            uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
            plVar17 = plVar11 + uVar16 * 3;
            *(undefined4 *)plVar17 = (undefined4)local_68;
            *(undefined4 *)((longlong)plVar17 + 4) = local_68._4_4_;
            *(undefined4 *)(plVar17 + 1) = (undefined4)uStack_60;
            *(undefined4 *)((longlong)plVar17 + 0xc) = uStack_60._4_4_;
            local_68 = lVar4;
            uStack_60 = lVar5;
            if (uVar12 != 2) {
              do {
                iVar19 = 0;
                iVar21 = 1;
                iVar23 = 0;
                do {
                  iVar19 = iVar19 + 2;
                  iVar14 = iVar21;
                  if ((longlong)iVar19 < (longlong)uVar16) {
                    piVar3 = *(int **)(plVar11[(longlong)iVar19 * 3] + 0x148);
                    iVar20 = 0;
                    iVar26 = 0;
                    iVar24 = 0;
                    if (piVar3 != (int *)0x0) {
                      iVar24 = *piVar3;
                      iVar26 = piVar3[1];
                    }
                    piVar3 = *(int **)(plVar11[(longlong)iVar21 * 3] + 0x148);
                    iVar21 = 0;
                    if (piVar3 != (int *)0x0) {
                      iVar21 = *piVar3;
                      iVar20 = piVar3[1];
                    }
                    if (iVar24 < iVar26) {
                      iVar24 = iVar26;
                    }
                    if (iVar21 < iVar20) {
                      iVar21 = iVar20;
                    }
                    if (iVar21 <= iVar24) {
                      iVar14 = iVar19;
                    }
                  }
                  piVar3 = *(int **)(plVar11[(longlong)iVar23 * 3] + 0x148);
                  iVar24 = 0;
                  iVar21 = 0;
                  iVar19 = 0;
                  if (piVar3 != (int *)0x0) {
                    iVar19 = *piVar3;
                    iVar21 = piVar3[1];
                  }
                  plVar17 = plVar11 + (longlong)iVar14 * 3;
                  piVar3 = *(int **)(*plVar17 + 0x148);
                  iVar26 = 0;
                  if (piVar3 != (int *)0x0) {
                    iVar26 = *piVar3;
                    iVar24 = piVar3[1];
                  }
                  if (iVar19 < iVar21) {
                    iVar19 = iVar21;
                  }
                  if (iVar26 < iVar24) {
                    iVar26 = iVar24;
                  }
                  if (iVar26 <= iVar19) break;
                  plVar15 = plVar11 + (longlong)iVar23 * 3;
                  lVar2 = plVar15[2];
                  lVar4 = *plVar15;
                  lVar5 = plVar15[1];
                  plVar15[2] = plVar17[2];
                  lVar6 = plVar17[1];
                  *plVar15 = *plVar17;
                  plVar15[1] = lVar6;
                  plVar17[2] = lVar2;
                  *plVar17 = lVar4;
                  plVar17[1] = lVar5;
                  iVar19 = iVar14 * 2;
                  iVar21 = iVar14 * 2 + 1;
                  iVar23 = iVar14;
                } while ((longlong)iVar21 < (longlong)uVar16);
                uVar1 = uVar16 - 1;
                local_58 = plVar11[2];
                local_68 = *plVar11;
                uStack_60 = plVar11[1];
                lVar4 = local_68;
                lVar5 = uStack_60;
                plVar11[2] = plVar11[uVar1 * 3 + 2];
                lVar2 = (plVar11 + uVar1 * 3)[1];
                *plVar11 = plVar11[uVar1 * 3];
                plVar11[1] = lVar2;
                plVar11[uVar1 * 3 + 2] = local_58;
                local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
                uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
                plVar17 = plVar11 + uVar1 * 3;
                *(undefined4 *)plVar17 = (undefined4)local_68;
                *(undefined4 *)((longlong)plVar17 + 4) = local_68._4_4_;
                *(undefined4 *)(plVar17 + 1) = (undefined4)uStack_60;
                *(undefined4 *)((longlong)plVar17 + 0xc) = uStack_60._4_4_;
                bVar28 = 2 < uVar16;
                uVar16 = uVar1;
                local_68 = lVar4;
                uStack_60 = lVar5;
              } while (bVar28);
            }
          }
        }
LAB_1434d2587:
        plVar9 = plVar9 + -3;
        param_1 = local_370;
      } while (&local_368 <= plVar9);
    }
  }
  FUN_1402854d8(param_1);
  if ((local_48 ^ (ulonglong)auStack_398) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1434d209c:
  local_58 = plVar11[2];
  local_68 = *plVar11;
  uStack_60 = plVar11[1];
  lVar4 = local_68;
  lVar5 = uStack_60;
  plVar11[2] = plVar18[-1];
  lVar2 = plVar18[-2];
  *plVar11 = *plVar22;
  plVar11[1] = lVar2;
  plVar18[-1] = local_58;
  local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  *(undefined4 *)plVar22 = (undefined4)local_68;
  *(undefined4 *)((longlong)plVar18 + -0x14) = local_68._4_4_;
  *(undefined4 *)(plVar18 + -2) = (undefined4)uStack_60;
  *(undefined4 *)((longlong)plVar18 + -0xc) = uStack_60._4_4_;
  iVar19 = iVar19 + -1;
  plVar18 = plVar18 + -6;
  local_68 = lVar4;
  uStack_60 = lVar5;
  if ((longlong)plVar25 - (longlong)plVar13 < (longlong)plVar15 - (longlong)plVar27) {
    if (plVar10 < plVar17) {
      *plVar9 = (longlong)plVar10;
      plVar9[1] = (longlong)plVar17;
      *(int *)(plVar9 + 2) = iVar19;
      plVar9 = plVar9 + 3;
    }
    plVar27 = plVar11;
    plVar15 = plVar25;
    if (plVar22 <= plVar11 + 3) goto LAB_1434d2587;
  }
  else {
    if (plVar11 + 3 < plVar22) {
      *plVar9 = (longlong)plVar11;
      plVar9[1] = (longlong)plVar18;
      *(int *)(plVar9 + 2) = iVar19;
      plVar9 = plVar9 + 3;
    }
    plVar11 = plVar10;
    plVar18 = plVar17;
    plVar15 = plVar17;
    if (plVar17 <= plVar10) goto LAB_1434d2587;
  }
  iVar23 = (int)((ulonglong)((longlong)plVar15 - (longlong)plVar27) >> 3) * -0x55555555;
  uVar12 = iVar23 + 1;
  plVar13 = plVar27;
  plVar17 = plVar18;
  if (iVar19 == 0) goto LAB_1434d216e;
  goto LAB_1434d1f1c;
}



// FUNCTION 1434d25b0 FUN_1434d25b0 body=48 status=ok
// SIG undefined FUN_1434d25b0(void)

longlong FUN_1434d25b0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_140cbb210(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1434d2628 FUN_1434d2628 body=73 status=ok
// SIG undefined FUN_1434d2628(void)

void FUN_1434d2628(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  wchar_t *_Str;
  double dVar2;
  
  if (((param_2 != 0) && (lVar1 = *(longlong *)(param_2 + 0x108), lVar1 != 0)) &&
     (0 < (int)param_1[1])) {
    if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)*param_1;
    }
    dVar2 = _wtof(_Str);
    *(float *)(lVar1 + 0xa58) = (float)dVar2;
  }
  return;
}



// FUNCTION 1434d2672 FUN_1434d2672 body=81 status=ok
// SIG undefined FUN_1434d2672(void)

void FUN_1434d2672(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  wchar_t *_Str;
  double dVar2;
  
  if (((param_2 != 0) && (lVar1 = *(longlong *)(param_2 + 0x108), lVar1 != 0)) &&
     (0 < (int)param_1[1])) {
    if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)*param_1;
    }
    dVar2 = _wtof(_Str);
    *(float *)(lVar1 + 0xa5c) = (float)dVar2;
    *(float *)(lVar1 + 0xcc4) = (float)dVar2;
  }
  return;
}



// FUNCTION 1434d26c4 FUN_1434d26c4 body=80 status=ok
// SIG undefined FUN_1434d26c4(void)

void FUN_1434d26c4(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  undefined2 *puVar3;
  
  if (((param_2 != 0) && (lVar1 = *(longlong *)(param_2 + 0x108), lVar1 != 0)) &&
     (0 < *(int *)(param_1 + 1))) {
    if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    else {
      puVar3 = *(undefined2 **)*param_1;
    }
    cVar2 = FUN_14052c20c(puVar3);
    *(byte *)(lVar1 + 0x9ab) = *(byte *)(lVar1 + 0x9ab) & 0xf7 | cVar2 << 3;
  }
  return;
}



// FUNCTION 1434d2714 FUN_1434d2714 body=173 status=ok
// SIG undefined FUN_1434d2714(void)

void FUN_1434d2714(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  bool bVar6;
  
  if (((param_2 != 0) && (lVar2 = *(longlong *)(param_2 + 0x108), lVar2 != 0)) &&
     (lVar4 = FUN_147d80080(DAT_14cb0d2b0), lVar4 != 0)) {
    uVar1 = *(uint *)(lVar4 + 0xc);
    *(uint *)(lVar2 + 0xa60) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    iVar3 = *(int *)(lVar4 + 0x10);
    if (*(int *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar3 = *(int *)(lVar4 + 0x10);
      bVar6 = iVar3 == 0;
      if (bVar6) {
        *(int *)(lVar4 + 0x10) = iVar5;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar6) {
        iVar3 = iVar5;
      }
    }
    *(int *)(lVar2 + 0xa64) = iVar3;
  }
  return;
}



// FUNCTION 1434d28b2 FUN_1434d28b2 body=509 status=ok
// SIG undefined FUN_1434d28b2(void)

ulonglong FUN_1434d28b2(longlong param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 unaff_RSI;
  ulonglong uVar11;
  undefined1 auStack_78 [32];
  LARGE_INTEGER local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar11 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (((((*(int *)(param_1 + 0x1c) == 0) || (uVar4 = *(uint *)(param_1 + 0x18), (int)uVar4 < 0)) ||
       (DAT_14c9647dc <= (int)uVar4)) ||
      ((plVar10 = (longlong *)
                  ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
       plVar10 == (longlong *)0x0 || ((int)plVar10[2] != *(int *)(param_1 + 0x1c))))) ||
     ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)) goto LAB_1434d2918;
  if ((*(uint *)(plVar10 + 1) & 0x10200000) == 0) {
    lVar7 = *plVar10;
  }
  else {
    lVar7 = 0;
  }
  plVar10 = *(longlong **)(lVar7 + 0x8f8);
  plVar5 = *(longlong **)(lVar7 + 0x900);
  if (plVar5 == (longlong *)0x0) {
    cVar6 = (**(code **)(*plVar10 + 0x128))();
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    cVar6 = (**(code **)(*plVar10 + 0x128))();
    LOCK();
    plVar10 = plVar5 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*plVar5)();
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))();
      }
    }
  }
  if (cVar6 == '\0') goto LAB_1434d2918;
  if (*(int *)(param_1 + 0x1c) == 0) {
LAB_1434d2a9e:
    lVar7 = 0;
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x18);
    lVar7 = 0;
    if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
      plVar10 = (longlong *)
                ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
      if ((plVar10 == (longlong *)0x0) ||
         (((int)plVar10[2] != *(int *)(param_1 + 0x1c) ||
          ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)))) goto LAB_1434d2a9e;
      lVar7 = *plVar10;
    }
  }
  fVar2 = *(float *)(lVar7 + 0xcac);
  fVar3 = *(float *)(param_1 + 0x20);
  QueryPerformanceCounter(&local_58);
  if (((fVar2 == fVar3) && (!NAN(fVar2) && !NAN(fVar3))) &&
     (((double)local_58.QuadPart * DAT_14c83f420 + 16777216.0) - *(double *)(param_1 + 0x28) < 15.0)
     ) {
    uVar11 = 0;
    goto LAB_1434d2918;
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
LAB_1434d2aa5:
    uVar8 = 0;
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x18);
    uVar8 = 0;
    if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
      puVar9 = (undefined8 *)
               ((ulonglong)((uVar4 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
      if ((puVar9 == (undefined8 *)0x0) ||
         ((*(int *)(puVar9 + 2) != *(int *)(param_1 + 0x1c) ||
          ((*(uint *)(puVar9 + 1) & 0x10200000) != 0)))) goto LAB_1434d2aa5;
      uVar8 = *puVar9;
    }
  }
  FUN_1434c220c(uVar8);
LAB_1434d2918:
  if ((local_50 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11 & 0xffffffff;
}



// FUNCTION 1434d2ae2 FUN_1434d2ae2 body=371 status=ok
// SIG undefined FUN_1434d2ae2(void)

void FUN_1434d2ae2(void)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined4 *puVar5;
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
  puVar5 = &DAT_14cad6168;
  if (DAT_14cad6170 != (undefined4 *)0x0) {
    puVar5 = DAT_14cad6170;
  }
  iVar4 = DAT_14cad6178 + 3;
  if (-1 < DAT_14cad6178) {
    iVar4 = DAT_14cad6178;
  }
  if (DAT_14cad6138 - DAT_14cad6164 < iVar4 >> 2) {
    local_50 = 0x100000000;
    uStack_48 = &DAT_14cad6140;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    if (DAT_14cad6158 == 0) {
      iVar4 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar4 = DAT_14cad6158;
    }
    local_78 = &DAT_14cad6130;
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar1 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    if ((local_60._4_4_ != iVar4) || (uStack_48 != &DAT_14cad6140)) {
      iVar2 = local_60._4_4_;
      local_60 = uVar1;
      do {
        puVar5[*(int *)(*local_78 + 0x2c + (longlong)iVar2 * 0x30)] = 0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar2 = local_60._4_4_;
        uVar1 = local_60;
      } while (local_78 != &DAT_14cad6130 ||
               ((undefined4 *)CONCAT44(uStack_64,uStack_68) != &DAT_14cad6140 ||
               local_60._4_4_ != iVar4));
    }
  }
  else {
    uVar1 = local_60;
    if (0 < DAT_14cad6178) {
      lVar3 = 0;
      do {
        puVar5[lVar3] = 0xffffffff;
        lVar3 = lVar3 + 1;
      } while (lVar3 < DAT_14cad6178);
    }
  }
  local_60 = uVar1;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1434d2ce9 FUN_1434d2ce9 body=4985 status=ok
// SIG undefined FUN_1434d2ce9(void)

/* WARNING: Removing unreachable block (ram,0x0001434d3633) */

ulonglong FUN_1434d2ce9(undefined8 param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4,
                       undefined8 ****param_5,ulonglong param_6)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  ushort uVar8;
  ulonglong uVar9;
  wchar_t *pwVar10;
  undefined7 uVar11;
  undefined8 ****_Src;
  int iVar12;
  longlong lVar13;
  undefined4 uVar14;
  undefined8 ***pppuVar15;
  undefined8 uVar16;
  longlong lVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined2 *puVar20;
  undefined2 *puVar21;
  undefined8 ***pppuVar22;
  undefined2 *puVar23;
  ushort uVar24;
  undefined8 ****ppppuVar25;
  longlong *plVar26;
  undefined8 *puVar27;
  bool bVar28;
  undefined1 auStack_248 [32];
  undefined8 ***local_228;
  ulonglong local_220;
  undefined8 *local_210;
  undefined8 local_208;
  undefined8 local_200;
  longlong *local_1f8;
  longlong *local_1f0;
  undefined1 local_1e8 [16];
  undefined8 ***local_1d8;
  ulonglong uStack_1d0;
  undefined1 local_1c8;
  undefined8 **local_1b8;
  undefined8 uStack_1b0;
  undefined8 **local_1a8;
  undefined8 uStack_1a0;
  undefined8 **local_188;
  ulonglong uStack_180;
  longlong local_168;
  undefined8 uStack_160;
  undefined8 local_150;
  ulonglong local_148;
  void *local_140;
  int local_138;
  undefined4 local_134;
  void *local_130;
  int local_128;
  undefined4 local_124;
  longlong local_120;
  undefined1 local_118 [16];
  void *local_108;
  int local_100;
  undefined4 local_fc;
  void *local_f8;
  uint local_f0;
  undefined8 ***local_e8;
  undefined8 ***local_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  undefined8 ***local_c8;
  ulonglong uStack_c0;
  undefined8 ***local_b8;
  undefined8 uStack_b0;
  undefined8 ***local_a8;
  longlong alStack_a0 [3];
  undefined8 ***local_88;
  undefined8 uStack_80;
  longlong *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_248;
  iVar5 = (int)param_3[6];
  local_210 = param_2;
  local_200 = param_1;
  if (1 < iVar5) {
    if (1 < *(int *)(param_5 + 1)) {
      FUN_1400020e8(param_5,&DAT_149e06196,1);
      iVar5 = (int)param_3[6];
    }
    iVar12 = iVar5 + -1;
    if (iVar5 == 0) {
      iVar12 = 0;
    }
    FUN_1400020e8(param_5,param_3[5],iVar12);
  }
  local_208 = param_4;
  if (1 < (int)param_3[8]) {
    local_188 = (undefined8 ***)0x0;
    uStack_180 = 0;
    FUN_1403de9f2(param_3 + 7,&local_188,&DAT_149e06196,1);
    uVar9 = 0;
    if ((longlong)(int)uStack_180 != 0) {
      lVar13 = (longlong)(int)uStack_180 << 4;
      pppuVar15 = (undefined8 ***)local_188;
      local_1f8 = param_3;
      do {
        local_1a8 = (undefined8 ***)0x0;
        uStack_1a0 = 0;
        local_1d8 = (undefined8 ****)0x0;
        uStack_1d0 = 0;
        FUN_140056680(&local_b8,&DAT_149e06162);
        local_220 = local_220 & 0xffffffff00000000;
        local_228 = (undefined8 ***)CONCAT44(local_228._4_4_,1);
        cVar4 = FUN_1407cdbc6(pppuVar15,&local_b8,&local_1a8,&local_1d8);
        if ((undefined8 ****)local_b8 != (undefined8 ****)0x0) {
          FUN_1400020a8();
        }
        uVar16 = local_208;
        if (cVar4 != '\0') {
          local_78 = (longlong *)0x0;
          uStack_70 = 0;
          local_88 = (undefined8 ****)0x0;
          uStack_80 = 0;
          local_228 = &local_88;
          cVar4 = FUN_147a6b9a2(local_208,local_200,&local_1d8,&local_78);
          if (cVar4 == '\0') {
            local_228 = (undefined8 ***)&DAT_149dfb77a;
            if ((int)uStack_80 != 0) {
              local_228 = local_88;
            }
            pppuVar22 = (undefined8 ***)&DAT_149dfb77a;
            if ((int)uStack_1a0 != 0) {
              pppuVar22 = (undefined8 ***)local_1a8;
            }
            puVar21 = &DAT_149dfb77a;
            if (*(int *)(local_210 + 1) != 0) {
              puVar21 = (undefined2 *)*local_210;
            }
            FUN_140047918(param_6,L"MatchesRules: rule %s failed. SetSRC %s= could not find %s",
                          puVar21,pppuVar22);
          }
          else {
            iVar5 = (int)uStack_1a0 + -1;
            if ((int)uStack_1a0 == 0) {
              iVar5 = 0;
            }
            FUN_1446f82e2(&local_b8,iVar5,local_1a8,1);
            local_c8 = local_b8;
            local_b8 = &local_c8;
            uStack_b0 = &local_78;
            FUN_1406e263c(uVar16,&local_d8,&local_b8,0);
          }
          if ((undefined8 ****)local_88 != (undefined8 ****)0x0) {
            FUN_1400020a8();
          }
          if (local_78 != (longlong *)0x0) {
            FUN_1400020a8();
          }
        }
        if ((undefined8 ****)local_1d8 != (undefined8 ****)0x0) {
          FUN_1400020a8();
        }
        if ((undefined8 ***)local_1a8 != (undefined8 ***)0x0) {
          FUN_1400020a8();
        }
        pppuVar15 = pppuVar15 + 2;
        lVar13 = lVar13 + -0x10;
      } while (lVar13 != 0);
      uVar9 = uStack_180 & 0xffffffff;
      param_3 = local_1f8;
    }
    FUN_1447a1747(local_188,uVar9);
    if ((undefined8 ***)local_188 != (undefined8 ***)0x0) {
      FUN_1400020a8();
    }
  }
  local_78 = (longlong *)0x0;
  iVar5 = (int)param_3[4];
  lVar13 = param_3[3];
  uStack_70 = CONCAT44(uStack_70._4_4_,iVar5);
  uVar11 = (undefined7)((ulonglong)lVar13 >> 8);
  if (iVar5 == 0) {
    uStack_70 = 0;
    _Src = (undefined8 ****)CONCAT71(uVar11,1);
    uVar14 = 0;
    goto LAB_1434d3f5f;
  }
  FUN_147a69f1a(&local_78,iVar5,0);
  FUN_147a69f8d(local_78,lVar13,iVar5);
  _Src = (undefined8 ****)CONCAT71(uVar11,1);
  uVar14 = 0;
  if ((int)uStack_70 == 0) goto LAB_1434d3f5f;
  local_1f8 = param_3;
  if (0 < (int)uStack_70) {
    iVar5 = 0;
    _Src = (undefined8 ****)&DAT_14a8b802c;
    do {
      iVar12 = iVar5 + 1;
      if (((iVar12 < (int)uStack_70) &&
          ((1 < (int)local_78[(longlong)iVar5 * 5 + 2] ||
           (cVar4 = FUN_1402ca054(local_78[(longlong)iVar5 * 5],&DAT_149e06144,1), cVar4 != '\0'))))
         && ((1 < (int)local_78[(longlong)iVar12 * 5 + 2] ||
             (cVar4 = FUN_1402ca054(local_78[(longlong)iVar12 * 5],&DAT_149e06140,1), cVar4 != '\0')
             ))) {
        local_a8 = (undefined8 ****)0x0;
        alStack_a0[0] = 0;
        local_b8 = (undefined8 ****)0x0;
        uStack_b0 = (longlong **)0x0;
        alStack_a0[1] = 0;
        FUN_1446f470e(&local_b8,&DAT_14a8b802c,1);
        FUN_147a6be6a(&local_78,&local_b8,iVar12);
        iVar12 = iVar5 + 2;
      }
      iVar5 = iVar12;
    } while (iVar5 < (int)uStack_70);
    local_88 = (undefined8 ****)0x0;
    uStack_80 = 0;
    if (0 < (int)uStack_70) {
      _Src = &local_b8;
      lVar13 = 0;
      lVar17 = 0;
      do {
        if (*(int *)((longlong)local_78 + lVar13 + 0x10) < 2) {
          FUN_1400021e4((longlong)local_78 + lVar13,&local_188);
          pppuVar15 = (undefined8 ***)&DAT_149dfb77a;
          if ((int)uStack_180 != 0) {
            pppuVar15 = (undefined8 ***)local_188;
          }
          FUN_140002266(_Src,L" %s ",pppuVar15);
        }
        else {
          ppppuVar25 = (undefined8 ****)&DAT_149dfb77a;
          if (*(int *)((longlong)local_78 + lVar13 + 0x20) != 0) {
            ppppuVar25 = *(undefined8 *****)((longlong)local_78 + lVar13 + 0x18);
          }
          FUN_1400021e4((longlong)local_78 + lVar13,&local_188);
          pppuVar15 = (undefined8 ***)&DAT_149dfb77a;
          if ((int)uStack_180 != 0) {
            pppuVar15 = (undefined8 ***)local_188;
          }
          puVar21 = &DAT_149dfb77a;
          if (*(int *)((longlong)local_78 + lVar13 + 0x10) != 0) {
            puVar21 = *(undefined2 **)((longlong)local_78 + lVar13 + 8);
          }
          local_228 = ppppuVar25;
          FUN_140002266(_Src,L"(%s %s %s)",puVar21,pppuVar15);
        }
        iVar5 = (int)uStack_b0 + -1;
        if ((int)uStack_b0 == 0) {
          iVar5 = 0;
        }
        FUN_1400020e8(&local_88,local_b8,iVar5);
        if ((undefined8 ****)local_b8 != (undefined8 ****)0x0) {
          FUN_1400020a8();
        }
        if ((undefined8 ***)local_188 != (undefined8 ***)0x0) {
          FUN_1400020a8();
        }
        lVar17 = lVar17 + 1;
        lVar7 = (longlong)(int)uStack_70;
        lVar13 = lVar13 + 0x28;
        iVar5 = (int)uStack_70;
      } while (lVar17 < lVar7);
      goto LAB_1434d326d;
    }
  }
  uStack_80 = 0;
  local_88 = (undefined8 ****)0x0;
  lVar7 = (longlong)(int)uStack_70;
  iVar5 = (int)uStack_70;
LAB_1434d326d:
  local_e8 = &local_c8;
  local_c8 = (undefined8 ****)0x0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e0 = local_e8;
  if (iVar5 != 0) {
    local_1f0 = local_78 + lVar7 * 5;
    plVar26 = local_78;
    do {
      uVar6 = *(uint *)(plVar26 + 2);
      _Src = (undefined8 ****)(ulonglong)uVar6;
      if ((int)uVar6 < 2) {
        if (*plVar26 != 0) {
          FUN_1446f470e(&local_120);
          if (*plVar26 == local_120) {
            do {
              lVar13 = local_d8;
              iVar5 = (int)uStack_d0;
              if ((longlong)(int)uStack_d0 == 0) break;
              lVar17 = (longlong)(int)uStack_d0 * 0x10;
              _Src = *(undefined8 *****)(local_d8 + -0x10 + lVar17);
              *(undefined8 *)(local_d8 + -0x10 + lVar17) = 0;
              iVar12 = *(int *)(local_d8 + -8 + lVar17);
              *(undefined4 *)(local_d8 + -8 + lVar17) = 0;
              *(undefined4 *)(local_d8 + -4 + lVar17) = 0;
              lVar17 = (longlong)(int)uStack_d0 * 0x10;
              if (*(longlong *)(local_d8 + -0x10 + lVar17) != 0) {
                FUN_1400020a8();
                if ((int)uStack_d0 - iVar5 != 0) {
                  memmove((void *)(lVar13 + lVar17 + -0x10),(void *)(lVar13 + lVar17),
                          (longlong)((int)uStack_d0 - iVar5) << 4);
                  iVar5 = (int)uStack_d0;
                }
              }
              uStack_d0 = CONCAT44(uStack_d0._4_4_,iVar5 + -1);
              FUN_140b12644(&local_d8);
              FUN_140056680(&local_b8);
              if (iVar12 == (int)uStack_b0) {
                bVar28 = true;
                if (1 < iVar12) {
                  lVar13 = 0;
                  while( true ) {
                    uVar8 = *(ushort *)((longlong)_Src + lVar13);
                    uVar6 = (uint)uVar8;
                    uVar24 = *(ushort *)((longlong)local_b8 + lVar13);
                    uVar18 = (uint)uVar24;
                    if (uVar8 != uVar24) {
                      if ((uVar24 | uVar8) < 0x80) {
                        uVar6 = (uint)(byte)(&DAT_149e05da0)[uVar8];
                        uVar18 = (uint)(byte)(&DAT_149e05da0)[uVar24];
                        if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar24]) goto LAB_1434d33e4;
                      }
                      iVar5 = uVar6 - uVar18;
                      goto LAB_1434d342a;
                    }
                    if (uVar8 == 0) break;
LAB_1434d33e4:
                    lVar13 = lVar13 + 2;
                  }
                  iVar5 = 0;
LAB_1434d342a:
                  bVar28 = iVar5 == 0;
                }
              }
              else {
                bVar28 = (int)uStack_b0 + iVar12 == 1;
              }
              if ((undefined8 ****)local_b8 != (undefined8 ****)0x0) {
                FUN_1400020a8();
              }
              if (!bVar28) {
                local_130 = (void *)0x0;
                local_128 = iVar12;
                if (iVar12 == 0) {
                  local_124 = 0;
                }
                else {
                  FUN_1446dd670(&local_130,iVar12,0);
                  memcpy(local_130,_Src,(longlong)iVar12 * 2);
                }
                FUN_1434d4170(&local_e8);
              }
              if (_Src != (undefined8 ****)0x0) {
                FUN_1400020a8(_Src);
              }
            } while (!bVar28);
          }
          else {
            FUN_1400021e4(plVar26);
            lVar13 = (longlong)(int)uStack_d0;
            uVar6 = (int)uStack_d0 + 1;
            uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar6);
            if (uStack_d0._4_4_ < uVar6) {
              FUN_1447a1bd6(&local_d8);
            }
            _Src = (undefined8 ****)(lVar13 * 0x10);
            *(undefined8 *)(local_d8 + (longlong)_Src) = 0;
            *(undefined8 ****)(local_d8 + (longlong)_Src) = local_b8;
            local_b8 = (undefined8 ****)0x0;
            *(int *)(local_d8 + 8 + (longlong)_Src) = (int)uStack_b0;
            *(undefined4 *)(local_d8 + 0xc + (longlong)_Src) = uStack_b0._4_4_;
            uStack_b0 = (longlong **)0x0;
          }
        }
      }
      else {
        local_f8 = (void *)0x0;
        pvVar2 = (void *)plVar26[1];
        local_f0 = uVar6;
        FUN_1446dd670(&local_f8,_Src,0);
        memcpy(local_f8,pvVar2,(longlong)_Src * 2);
        FUN_1434d4064(&local_e0,&local_f8);
        local_108 = (void *)0x0;
        local_100 = (int)plVar26[4];
        lVar13 = (longlong)local_100;
        pvVar2 = (void *)plVar26[3];
        if (lVar13 == 0) {
          local_fc = 0;
          _Src = (undefined8 ****)0x0;
        }
        else {
          FUN_1446dd670(&local_108,local_100,0);
          _Src = (undefined8 ****)(lVar13 * 2);
          memcpy(local_108,pvVar2,(size_t)_Src);
        }
        FUN_1434d4064(&local_e0);
        if (*plVar26 != 0) {
          FUN_1400021e4(plVar26,local_118);
          FUN_1434d4170(&local_e8);
        }
      }
      plVar26 = plVar26 + 5;
    } while (plVar26 != local_1f0);
  }
LAB_1434d3647:
  lVar13 = local_d8;
  iVar5 = (int)uStack_d0;
  if ((longlong)(int)uStack_d0 != 0) goto code_r0x0001434d3658;
  local_150 = local_208;
  local_148 = param_6;
  local_168 = 0;
  uStack_160 = 0;
  if (0 < (int)uStack_c0) {
    lVar17 = 0;
    lVar13 = 0;
    uVar16 = local_208;
    do {
      pppuVar15 = local_c8;
      uVar9 = uStack_160;
      if (*(char *)((longlong)local_c8 + lVar17 + 0x10) == '\0') {
        lVar7 = (longlong)(int)uStack_160;
        uVar6 = (int)uStack_160 + 1;
        uStack_160 = CONCAT44(uStack_160._4_4_,uVar6);
        if (uStack_160._4_4_ < uVar6) {
          FUN_1434d43b4(&local_168,uVar9 & 0xffffffff);
        }
        puVar27 = (undefined8 *)(local_168 + lVar7 * 0x18);
        *puVar27 = 0;
        iVar5 = *(int *)((longlong)pppuVar15 + lVar17 + 8);
        _Src = *(undefined8 *****)((longlong)pppuVar15 + lVar17);
        *(int *)(puVar27 + 1) = iVar5;
        if ((longlong)iVar5 == 0) {
          *(undefined4 *)((longlong)puVar27 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(puVar27,iVar5,0);
          memcpy((void *)*puVar27,_Src,(longlong)iVar5 * 2);
        }
        *(undefined1 *)(puVar27 + 2) = *(undefined1 *)((longlong)pppuVar15 + lVar17 + 0x10);
        uVar16 = local_208;
      }
      else {
        FUN_1434d427c(&local_168,&local_188);
        FUN_1434d427c(&local_168,&local_1a8);
        local_a8 = (undefined8 ***)0x0;
        alStack_a0[0] = 0;
        local_b8 = (undefined8 ****)0x0;
        uStack_b0 = (longlong **)0x0;
        alStack_a0[1] = 0;
        iVar5 = *(int *)((longlong)local_c8 + lVar17 + 8);
        iVar12 = iVar5 + -1;
        if (iVar5 == 0) {
          iVar12 = 0;
        }
        FUN_1446f82e2(&local_1d8,iVar12,*(undefined8 *)((longlong)local_c8 + lVar17),1);
        local_a8 = local_1d8;
        local_1b8 = (undefined8 ***)0x0;
        uStack_1b0 = 0;
        local_228 = &local_1b8;
        cVar4 = FUN_147a6b9a2(uVar16,local_200,&local_1a8,&local_b8);
        if (cVar4 == '\0') {
          pppuVar15 = (undefined8 ***)&DAT_149dfb77a;
          if ((int)uStack_1b0 != 0) {
            pppuVar15 = (undefined8 ***)local_1b8;
          }
          puVar21 = &DAT_149dfb77a;
          if (*(int *)(local_210 + 1) != 0) {
            puVar21 = (undefined2 *)*local_210;
          }
          FUN_140047918(param_6,L"rule %s failed to expand Arg1, %s",puVar21,pppuVar15);
          FUN_14020fad6(&local_b8,L"[UnknownArg1Variable]");
        }
        local_228 = &local_1b8;
        cVar4 = FUN_147a6b9a2(uVar16,local_200,&local_188,alStack_a0);
        if (cVar4 == '\0') {
          pppuVar15 = (undefined8 ***)&DAT_149dfb77a;
          if ((int)uStack_1b0 != 0) {
            pppuVar15 = (undefined8 ***)local_1b8;
          }
          puVar21 = &DAT_149dfb77a;
          if (*(int *)(local_210 + 1) != 0) {
            puVar21 = (undefined2 *)*local_210;
          }
          FUN_140047918(param_6,L"rule %s failed to expand Arg2, %s",puVar21,pppuVar15);
          FUN_14020fad6(alStack_a0,L"[UnknownArg2Variable]");
        }
        cVar4 = FUN_147a6bee2(&local_150,&local_b8,local_210);
        pwVar10 = L"false";
        if (cVar4 != '\0') {
          pwVar10 = L"true";
        }
        FUN_140056680(local_1e8,pwVar10);
        FUN_1434d4320(&local_1d8,local_1e8,0);
        uVar9 = uStack_160;
        lVar7 = (longlong)(int)uStack_160;
        uVar6 = (int)uStack_160 + 1;
        uStack_160 = CONCAT44(uStack_160._4_4_,uVar6);
        if (uStack_160._4_4_ < uVar6) {
          FUN_1434d43b4(&local_168,uVar9 & 0xffffffff);
        }
        _Src = (undefined8 ****)local_1d8;
        puVar27 = (undefined8 *)(local_168 + lVar7 * 0x18);
        *puVar27 = 0;
        lVar7 = (longlong)(int)uStack_1d0;
        *(int *)(puVar27 + 1) = (int)uStack_1d0;
        if (lVar7 == 0) {
          *(undefined4 *)((longlong)puVar27 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(puVar27,uStack_1d0 & 0xffffffff,0);
          memcpy((void *)*puVar27,_Src,lVar7 * 2);
        }
        uVar16 = local_208;
        *(undefined1 *)(puVar27 + 2) = local_1c8;
        if ((undefined8 ****)local_1d8 != (undefined8 ****)0x0) {
          FUN_1400020a8();
        }
        if ((undefined8 ***)local_1b8 != (undefined8 ***)0x0) {
          FUN_1400020a8();
        }
        if (alStack_a0[0] != 0) {
          FUN_1400020a8();
        }
        if ((undefined8 ****)local_b8 != (undefined8 ****)0x0) {
          FUN_1400020a8();
        }
        if ((undefined8 ***)local_1a8 != (undefined8 ***)0x0) {
          FUN_1400020a8();
        }
        if ((undefined8 ***)local_188 != (undefined8 ***)0x0) {
          FUN_1400020a8();
        }
      }
      lVar13 = lVar13 + 1;
      lVar17 = lVar17 + 0x18;
    } while (lVar13 < (int)uStack_c0);
  }
  FUN_1434d427c(&local_168,&local_b8);
  pppuVar15 = local_b8;
  ppppuVar25 = (undefined8 ****)&DAT_149dfb77a;
  if ((int)uStack_b0 != 0) {
    ppppuVar25 = (undefined8 ****)local_b8;
  }
  lVar13 = 0;
  while( true ) {
    uVar8 = *(ushort *)((longlong)ppppuVar25 + lVar13);
    uVar9 = (ulonglong)uVar8;
    uVar24 = *(ushort *)((longlong)&DAT_149e06346 + lVar13);
    if (uVar8 != uVar24) {
      if ((uVar24 | uVar8) < 0x80) {
        uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
        uVar19 = (ulonglong)uVar24;
        uVar24 = (ushort)(byte)(&DAT_149e05da0)[uVar19];
        if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar19]) goto LAB_1434d3cf1;
      }
      lVar13 = (ulonglong)(uVar8 != uVar24) * 8 + 8;
      goto LAB_1434d3d2e;
    }
    if (uVar8 == 0) break;
LAB_1434d3cf1:
    lVar13 = lVar13 + 2;
  }
  lVar13 = 8;
LAB_1434d3d2e:
  lVar13 = (**(code **)(*local_1f8 + lVar13))();
  _Src = (undefined8 ****)CONCAT71((int7)((ulonglong)_Src >> 8),1);
  if (lVar13 != 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cad6bd8) && (FUN_144b3d300(&DAT_14cad6bd8), DAT_14cad6bd8 == -1)) {
      FUN_1400b22c2(&DAT_14cad6bc8,"<unnamed>");
      atexit((_func_5014 *)&LAB_1434d4392);
      _Init_thread_footer(&DAT_14cad6bd8);
    }
    puVar27 = &DAT_14cad6bc8;
    if (1 < *(int *)(lVar13 + 0x10)) {
      puVar27 = (undefined8 *)(lVar13 + 8);
    }
    iVar5 = *(int *)(local_210 + 1);
    lVar17 = (longlong)iVar5;
    local_1a8 = (undefined8 ***)0x0;
    pvVar2 = (void *)*local_210;
    uStack_1a0 = CONCAT44(uStack_1a0._4_4_,iVar5);
    FUN_1446dd670(&local_1a8,iVar5 + (uint)(lVar17 == 0) + 2,0);
    if (lVar17 != 0) {
      memcpy(local_1a8,pvVar2,lVar17 * 2);
    }
    FUN_1400020e8(&local_1a8,&DAT_149e5e24e,2);
    iVar5 = (int)uStack_1a0;
    if ((int)uStack_1a0 < 2) {
      local_188 = (undefined8 ***)0x0;
      uVar6 = *(uint *)(puVar27 + 1);
      pvVar2 = (void *)*puVar27;
      uStack_180 = CONCAT44(uStack_180._4_4_,uVar6);
      if ((longlong)(int)uVar6 == 0) {
        uStack_180 = (ulonglong)uVar6;
      }
      else {
        FUN_1446dd670(&local_188,uVar6,0);
        memcpy(local_188,pvVar2,(longlong)(int)uVar6 * 2);
      }
    }
    else {
      iVar12 = *(int *)(puVar27 + 1) + -1;
      if (*(int *)(puVar27 + 1) == 0) {
        iVar12 = 0;
      }
      local_188 = local_1a8;
      local_1a8 = (undefined8 ***)0x0;
      iVar3 = uStack_1a0._4_4_;
      uStack_180 = uStack_1a0;
      uStack_1a0 = 0;
      iVar1 = iVar12 + iVar5;
      if (iVar1 < iVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4((longlong)iVar12);
      }
      if (iVar3 < iVar1) {
        FUN_1446f8c06(&local_188);
      }
      FUN_1400020e8(&local_188,*puVar27,iVar12);
    }
    if ((undefined8 ***)local_1a8 != (undefined8 ***)0x0) {
      FUN_1400020a8();
    }
    local_220 = param_6;
    local_228 = param_5;
    uVar6 = FUN_1434d2ce9(local_200,&local_188,lVar13,local_208);
    _Src = (undefined8 ****)(ulonglong)uVar6;
    if ((undefined8 ***)local_188 != (undefined8 ***)0x0) {
      FUN_1400020a8();
    }
  }
  if ((undefined8 ****)pppuVar15 != (undefined8 ****)0x0) {
    FUN_1400020a8(pppuVar15);
  }
  FUN_1434d46b6(local_168,uStack_160 & 0xffffffff);
  if (local_168 != 0) {
    FUN_1400020a8();
  }
  goto LAB_1434d3efa;
code_r0x0001434d3658:
  lVar17 = (longlong)(int)uStack_d0 * 0x10;
  puVar21 = *(undefined2 **)(local_d8 + -0x10 + lVar17);
  *(undefined8 *)(local_d8 + -0x10 + lVar17) = 0;
  iVar12 = *(int *)(local_d8 + -8 + lVar17);
  *(undefined4 *)(local_d8 + -8 + lVar17) = 0;
  *(undefined4 *)(local_d8 + -4 + lVar17) = 0;
  lVar17 = (longlong)(int)uStack_d0 * 0x10;
  if (*(longlong *)(local_d8 + -0x10 + lVar17) != 0) {
    FUN_1400020a8();
    if ((int)uStack_d0 - iVar5 != 0) {
      memmove((void *)(lVar13 + lVar17 + -0x10),(void *)(lVar13 + lVar17),
              (longlong)((int)uStack_d0 - iVar5) << 4);
      iVar5 = (int)uStack_d0;
    }
  }
  uStack_d0 = CONCAT44(uStack_d0._4_4_,iVar5 + -1);
  FUN_140b12644();
  _Src = &local_b8;
  FUN_140056680(_Src,&DAT_149e06140);
  if (iVar12 == (int)uStack_b0) {
    bVar28 = true;
    if (1 < iVar12) {
      lVar13 = 0;
      while( true ) {
        uVar8 = *(ushort *)((longlong)puVar21 + lVar13);
        uVar9 = (ulonglong)uVar8;
        uVar24 = *(ushort *)((longlong)local_b8 + lVar13);
        if (uVar8 != uVar24) break;
        if (uVar8 == 0) goto LAB_1434d380a;
LAB_1434d372d:
        lVar13 = lVar13 + 2;
      }
      if ((uVar24 | uVar8) < 0x80) {
        uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
        uVar19 = (ulonglong)uVar24;
        uVar24 = (ushort)(byte)(&DAT_149e05da0)[uVar19];
        if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar19]) goto LAB_1434d372d;
      }
      if (uVar8 != uVar24) goto LAB_1434d3772;
    }
  }
  else {
    bVar28 = true;
    if ((int)uStack_b0 + iVar12 != 1) {
LAB_1434d3772:
      _Src = (undefined8 ****)&local_188;
      FUN_140056680(_Src);
      if (iVar12 == (int)uStack_180) {
        bVar28 = true;
        if (1 < iVar12) {
          lVar13 = 0;
          while( true ) {
            uVar8 = *(ushort *)((longlong)puVar21 + lVar13);
            uVar6 = (uint)uVar8;
            uVar24 = *(ushort *)((longlong)local_188 + lVar13);
            uVar18 = (uint)uVar24;
            if (uVar8 != uVar24) {
              if ((uVar24 | uVar8) < 0x80) {
                uVar6 = (uint)(byte)(&DAT_149e05da0)[uVar8];
                uVar18 = (uint)(byte)(&DAT_149e05da0)[uVar24];
                if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar24]) goto LAB_1434d37b5;
              }
              iVar5 = uVar6 - uVar18;
              goto LAB_1434d37fa;
            }
            if (uVar8 == 0) break;
LAB_1434d37b5:
            lVar13 = lVar13 + 2;
          }
          iVar5 = 0;
LAB_1434d37fa:
          bVar28 = iVar5 == 0;
        }
      }
      else {
        bVar28 = (int)uStack_180 + iVar12 == 1;
      }
      if ((undefined8 ***)local_188 != (undefined8 ***)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_1434d380a:
  if ((undefined8 ****)local_b8 != (undefined8 ****)0x0) {
    FUN_1400020a8();
  }
  if (bVar28) {
    puVar20 = &DAT_149dfb77a;
    puVar23 = puVar21;
    if (iVar12 == 0) {
      puVar23 = &DAT_149dfb77a;
    }
    if (*(int *)(local_210 + 1) != 0) {
      puVar20 = (undefined2 *)*local_210;
    }
    FUN_140047918(param_6,L"MatchesRules: rule %s failed due to mismatching parenthesis! %s",puVar20
                  ,puVar23);
  }
  else {
    local_140 = (void *)0x0;
    local_138 = iVar12;
    if (iVar12 == 0) {
      local_134 = 0;
    }
    else {
      FUN_1446dd670(&local_140,iVar12,0);
      _Src = (undefined8 ****)((longlong)iVar12 * 2);
      memcpy(local_140,puVar21,(size_t)_Src);
    }
    FUN_1434d4170(&local_e8);
  }
  if (puVar21 != (undefined2 *)0x0) {
    FUN_1400020a8(puVar21);
  }
  if (bVar28) goto code_r0x0001434d38d2;
  goto LAB_1434d3647;
code_r0x0001434d38d2:
  _Src = (undefined8 ****)0x0;
LAB_1434d3efa:
  FUN_1447a1747(local_d8,uStack_d0 & 0xffffffff);
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
  FUN_1434d46b6(local_c8,uStack_c0 & 0xffffffff);
  if ((undefined8 ****)local_c8 != (undefined8 ****)0x0) {
    FUN_1400020a8();
  }
  if ((undefined8 ****)local_88 != (undefined8 ****)0x0) {
    FUN_1400020a8();
  }
  uVar14 = (int)uStack_70;
LAB_1434d3f5f:
  FUN_147a69e2e(local_78,uVar14);
  if (local_78 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return (ulonglong)_Src & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434d4064 FUN_1434d4064 body=267 status=ok
// SIG undefined FUN_1434d4064(void)

/* WARNING: Removing unreachable block (ram,0x0001434d413b) */

void FUN_1434d4064(longlong *param_1,longlong *param_2)

{
  void *_Src;
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  void *local_58;
  int local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_1 = (longlong *)*param_1;
  local_58 = (void *)0x0;
  local_50 = (int)param_2[1];
  lVar3 = (longlong)local_50;
  _Src = (void *)*param_2;
  if (lVar3 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,local_50,0);
    memcpy(local_58,_Src,lVar3 * 2);
  }
  FUN_1434d4320(&local_48,&local_58,0);
  lVar3 = (longlong)(int)param_1[1];
  uVar2 = (int)param_1[1] + 1;
  *(uint *)(param_1 + 1) = uVar2;
  if (*(uint *)((longlong)param_1 + 0xc) < uVar2) {
    FUN_1434d43b4(param_1);
  }
  lVar1 = *param_1;
  *(undefined8 *)(lVar1 + lVar3 * 0x18) = 0;
  *(undefined8 *)(lVar1 + lVar3 * 0x18) = local_48;
  *(undefined4 *)(lVar1 + 8 + lVar3 * 0x18) = (undefined4)local_40;
  *(undefined4 *)(lVar1 + 0xc + lVar3 * 0x18) = local_40._4_4_;
  *(undefined1 *)(lVar1 + 0x10 + lVar3 * 0x18) = local_38;
  local_40 = 0;
  local_48 = 0;
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1434d4170 FUN_1434d4170 body=267 status=ok
// SIG undefined FUN_1434d4170(void)

/* WARNING: Removing unreachable block (ram,0x0001434d4247) */

void FUN_1434d4170(longlong *param_1,longlong *param_2)

{
  void *_Src;
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  void *local_58;
  int local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_1 = (longlong *)*param_1;
  local_58 = (void *)0x0;
  local_50 = (int)param_2[1];
  lVar3 = (longlong)local_50;
  _Src = (void *)*param_2;
  if (lVar3 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,local_50,0);
    memcpy(local_58,_Src,lVar3 * 2);
  }
  FUN_1434d4320(&local_48,&local_58,1);
  lVar3 = (longlong)(int)param_1[1];
  uVar2 = (int)param_1[1] + 1;
  *(uint *)(param_1 + 1) = uVar2;
  if (*(uint *)((longlong)param_1 + 0xc) < uVar2) {
    FUN_1434d43b4(param_1);
  }
  lVar1 = *param_1;
  *(undefined8 *)(lVar1 + lVar3 * 0x18) = 0;
  *(undefined8 *)(lVar1 + lVar3 * 0x18) = local_48;
  *(undefined4 *)(lVar1 + 8 + lVar3 * 0x18) = (undefined4)local_40;
  *(undefined4 *)(lVar1 + 0xc + lVar3 * 0x18) = local_40._4_4_;
  *(undefined1 *)(lVar1 + 0x10 + lVar3 * 0x18) = local_38;
  local_40 = 0;
  local_48 = 0;
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1434d427c FUN_1434d427c body=164 status=ok
// SIG undefined FUN_1434d427c(void)

undefined8 * FUN_1434d427c(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  lVar1 = *param_1;
  lVar3 = (longlong)(int)param_1[1];
  *param_2 = *(undefined8 *)(lVar1 + -0x18 + lVar3 * 0x18);
  *(undefined8 *)(lVar1 + -0x18 + lVar3 * 0x18) = 0;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar1 + -0x10 + lVar3 * 0x18);
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)(lVar1 + -0xc + lVar3 * 0x18);
  *(undefined8 *)(lVar1 + -0x10 + lVar3 * 0x18) = 0;
  *(undefined1 *)(param_2 + 2) = *(undefined1 *)(lVar1 + -8 + lVar3 * 0x18);
  iVar4 = (int)param_1[1];
  lVar3 = (longlong)iVar4;
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + -0x18 + lVar3 * 0x18) != 0) {
    FUN_1400020a8();
    iVar2 = (int)param_1[1] - iVar4;
    if (iVar2 != 0) {
      memmove((void *)(lVar1 + lVar3 * 0x18 + -0x18),(void *)(lVar1 + lVar3 * 0x18),
              (longlong)iVar2 * 0x18);
      iVar4 = (int)param_1[1];
    }
  }
  *(int *)(param_1 + 1) = iVar4 + -1;
  FUN_1434d4520(param_1);
  return param_2;
}



// FUNCTION 1434d4320 FUN_1434d4320 body=114 status=ok
// SIG undefined FUN_1434d4320(void)

undefined8 * FUN_1434d4320(undefined8 *param_1,longlong *param_2,undefined1 param_3)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  iVar1 = (int)param_2[1];
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 2) = param_3;
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 1434d43b4 FUN_1434d43b4 body=363 status=ok
// SIG undefined FUN_1434d43b4(void)

void FUN_1434d43b4(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1434d444a;
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
LAB_1434d444a:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 1434d4520 FUN_1434d4520 body=389 status=ok
// SIG undefined FUN_1434d4520(void)

ulonglong FUN_1434d4520(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  
  uVar3 = *(uint *)(param_1 + 8);
  uVar8 = (ulonglong)uVar3;
  iVar10 = *(int *)(param_1 + 0xc);
  uVar5 = iVar10 - uVar3;
  uVar6 = (ulonglong)uVar5;
  if (((0x3fff < (ulonglong)((longlong)(int)uVar5 * 0x18)) || ((int)(uVar3 * 3) < iVar10 * 2)) &&
     (uVar6 = (ulonglong)CONCAT31((int3)(uVar5 >> 8),(int)uVar5 < 0x41),
     uVar3 == 0 || (int)uVar5 >= 0x41)) {
    if (0 < (int)uVar3) {
      uVar8 = uVar8 * 0x18;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          uVar6 = uVar8 + 0xf;
          if (uVar3 < 0x555) {
            uVar8 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 >> 4]];
          }
          else {
            if ((uVar6 & 0x1ffffffff0) < 0x7ff1) {
              bVar2 = (&DAT_14c841e00)[uVar6 >> 4];
              uVar7 = 0x32;
              if (0x32 < bVar2) {
                uVar7 = (ulonglong)bVar2;
              }
              uVar9 = 0x32 - (ulonglong)bVar2;
              do {
                uVar8 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar9 & 0xffffffff];
                if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_1434d45d0;
                lVar1 = uVar7 + 1 + uVar9;
                uVar9 = uVar9 - 1;
              } while (lVar1 != 0x33);
            }
            uVar8 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar8 = (ulonglong)DAT_14c841df8;
            }
            uVar8 = -uVar8 & ((uVar6 & 0x1ffffffff0) + uVar8) - 1;
          }
        }
        else {
          uVar8 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar8,8);
          iVar10 = *(int *)(param_1 + 0xc);
        }
      }
LAB_1434d45d0:
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar8;
      uVar6 = SUB168(auVar4 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
      uVar8 = uVar8 / 0x18;
    }
    if ((int)uVar8 != iVar10) {
      *(int *)(param_1 + 0xc) = (int)uVar8;
      uVar6 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar8,0x18,8);
    }
  }
  return uVar6;
}



// FUNCTION 1434d46b6 FUN_1434d46b6 body=43 status=ok
// SIG undefined FUN_1434d46b6(void)

void FUN_1434d46b6(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 1434d4758 FUN_1434d4758 body=257 status=ok
// SIG undefined FUN_1434d4758(void)

void FUN_1434d4758(void)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  char cVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *in_R9;
  
  lVar2 = *in_R9;
  plVar7 = *(longlong **)(lVar2 + 0x48);
  if ((((plVar7 != (longlong *)0x0) ||
       ((((*(int *)(lVar2 + 0xdc) != 0 && (uVar1 = *(uint *)(lVar2 + 0xd8), -1 < (int)uVar1)) &&
         ((int)uVar1 < DAT_14c9647dc)) &&
        (((puVar6 = (undefined8 *)
                    ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
          puVar6 != (undefined8 *)0x0 && (*(int *)(puVar6 + 2) == *(int *)(lVar2 + 0xdc))) &&
         (((*(uint *)(puVar6 + 1) & 0x10200000) == 0 &&
          (plVar7 = (longlong *)*puVar6, plVar7 != (longlong *)0x0)))))))) &&
      ((*(uint *)(plVar7 + 1) >> 0x1e & 1) == 0)) &&
     ((((*(longlong *)(lVar2 + 0x50) == 0 ||
        (plVar3 = *(longlong **)(*(longlong *)(lVar2 + 0x50) + 0x58), plVar3 == (longlong *)0x0)) ||
       ((pcVar4 = *(code **)(*plVar3 + 0x3f8), pcVar4 == (code *)&LAB_14359f930 ||
        (cVar5 = (*pcVar4)(), cVar5 == '\0')))) &&
      ((((*(longlong *)(lVar2 + 0x58) == 0 || (*(int *)(*(longlong *)(lVar2 + 0x58) + 0x100) < 1))
        && (FUN_1400f5d32(*(undefined8 *)(lVar2 + 0x20),**(undefined8 **)(lVar2 + 0x30),plVar7),
           (*(uint *)(plVar7 + 1) >> 0x1e & 1) == 0)) &&
       (*(code **)(*plVar7 + 0x220) != (code *)0x144aff47c)))))) {
                    /* WARNING: Could not recover jumptable at 0x0001434d47f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar7 + 0x220))(plVar7);
    return;
  }
  return;
}



// FUNCTION 1434d485a FUN_1434d485a body=257 status=ok
// SIG undefined FUN_1434d485a(void)

void FUN_1434d485a(void)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  char cVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *in_R9;
  
  lVar2 = *in_R9;
  plVar7 = *(longlong **)(lVar2 + 0x48);
  if ((((plVar7 != (longlong *)0x0) ||
       ((((*(int *)(lVar2 + 0xdc) != 0 && (uVar1 = *(uint *)(lVar2 + 0xd8), -1 < (int)uVar1)) &&
         ((int)uVar1 < DAT_14c9647dc)) &&
        (((puVar6 = (undefined8 *)
                    ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
          puVar6 != (undefined8 *)0x0 && (*(int *)(puVar6 + 2) == *(int *)(lVar2 + 0xdc))) &&
         (((*(uint *)(puVar6 + 1) & 0x10200000) == 0 &&
          (plVar7 = (longlong *)*puVar6, plVar7 != (longlong *)0x0)))))))) &&
      ((*(uint *)(plVar7 + 1) >> 0x1e & 1) == 0)) &&
     ((((*(longlong *)(lVar2 + 0x50) == 0 ||
        (plVar3 = *(longlong **)(*(longlong *)(lVar2 + 0x50) + 0x58), plVar3 == (longlong *)0x0)) ||
       ((pcVar4 = *(code **)(*plVar3 + 0x3f8), pcVar4 == (code *)&LAB_14359f930 ||
        (cVar5 = (*pcVar4)(), cVar5 == '\0')))) &&
      ((((*(longlong *)(lVar2 + 0x58) == 0 || (*(int *)(*(longlong *)(lVar2 + 0x58) + 0x100) < 1))
        && (FUN_1400f5d32(*(undefined8 *)(lVar2 + 0x20),**(undefined8 **)(lVar2 + 0x30),plVar7),
           (*(uint *)(plVar7 + 1) >> 0x1e & 1) == 0)) &&
       (*(code **)(*plVar7 + 0x220) != (code *)0x144aff47c)))))) {
                    /* WARNING: Could not recover jumptable at 0x0001434d48f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar7 + 0x220))(plVar7);
    return;
  }
  return;
}



// FUNCTION 1434d495c FUN_1434d495c body=262 status=ok
// SIG undefined FUN_1434d495c(void)

void FUN_1434d495c(longlong param_1,int param_2)

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



// FUNCTION 1434d4a6a FUN_1434d4a6a body=29 status=ok
// SIG undefined FUN_1434d4a6a(void)

undefined8 FUN_1434d4a6a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1434d4a9c FUN_1434d4a9c body=85 status=ok
// SIG undefined FUN_1434d4a9c(void)

void FUN_1434d4a9c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a8bc8a0;
  return;
}



// FUNCTION 1434d4af2 FUN_1434d4af2 body=85 status=ok
// SIG undefined FUN_1434d4af2(void)

void FUN_1434d4af2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a8bc8a0;
  return;
}



// FUNCTION 1434d4b48 FUN_1434d4b48 body=118 status=ok
// SIG undefined FUN_1434d4b48(void)

void FUN_1434d4b48(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e170a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a8bc8a0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001434d4baf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1434d4bbe FUN_1434d4bbe body=23 status=ok
// SIG undefined FUN_1434d4bbe(void)

void FUN_1434d4bbe(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140032b16(0);
  FUN_147a63bae(uVar1);
  return;
}



// FUNCTION 1434d4bd6 FUN_1434d4bd6 body=26 status=ok
// SIG undefined FUN_1434d4bd6(void)

undefined1 FUN_1434d4bd6(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140032b16(0);
  FUN_147a63bae(uVar1);
  return 1;
}



// FUNCTION 1434d4bf0 FUN_1434d4bf0 body=29 status=ok
// SIG undefined FUN_1434d4bf0(void)

undefined8 FUN_1434d4bf0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1434d4c22 FUN_1434d4c22 body=85 status=ok
// SIG undefined FUN_1434d4c22(void)

void FUN_1434d4c22(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a8bc910;
  return;
}



// FUNCTION 1434d4c78 FUN_1434d4c78 body=85 status=ok
// SIG undefined FUN_1434d4c78(void)

void FUN_1434d4c78(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a8bc910;
  return;
}



// FUNCTION 1434d4cce FUN_1434d4cce body=118 status=ok
// SIG undefined FUN_1434d4cce(void)

void FUN_1434d4cce(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a8bc910;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001434d4d35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1434d4d44 FUN_1434d4d44 body=23 status=ok
// SIG undefined FUN_1434d4d44(void)

void FUN_1434d4d44(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140032b16(0);
  FUN_1434cf19c(uVar1);
  return;
}



// FUNCTION 1434d4d5c FUN_1434d4d5c body=26 status=ok
// SIG undefined FUN_1434d4d5c(void)

undefined1 FUN_1434d4d5c(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140032b16(0);
  FUN_1434cf19c(uVar1);
  return 1;
}



// FUNCTION 1434d4d76 FUN_1434d4d76 body=29 status=ok
// SIG undefined FUN_1434d4d76(void)

undefined8 FUN_1434d4d76(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1434d4da8 FUN_1434d4da8 body=85 status=ok
// SIG undefined FUN_1434d4da8(void)

void FUN_1434d4da8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a8bc9f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a8bc980;
  return;
}



// FUNCTION 1434d4dfe FUN_1434d4dfe body=85 status=ok
// SIG undefined FUN_1434d4dfe(void)

void FUN_1434d4dfe(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a8bc9f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a8bc980;
  return;
}



// FUNCTION 1434d4e54 FUN_1434d4e54 body=118 status=ok
// SIG undefined FUN_1434d4e54(void)

void FUN_1434d4e54(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a8bc9f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a8bc980;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001434d4ebb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1434d4ed2 FUN_1434d4ed2 body=19 status=ok
// SIG undefined FUN_1434d4ed2(void)

undefined1 FUN_1434d4ed2(undefined8 param_1,undefined8 param_2)

{
  FUN_1434d4ee6(param_2);
  return 1;
}



// FUNCTION 1434d4ee6 FUN_1434d4ee6 body=737 status=ok
// SIG undefined FUN_1434d4ee6(void)

void FUN_1434d4ee6(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  uint *puVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined2 *puVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  undefined1 auStack_e8 [44];
  int local_bc;
  uint *local_b8;
  longlong local_b0;
  int local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar15 = 0;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  lVar6 = FUN_14129a444();
  local_a0 = *(undefined8 *)(lVar6 + 0x18);
  FUN_1400021e4(&local_a0,&local_b0);
  local_bc = local_a8 + (uint)(local_a8 == 0);
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  local_b8 = (uint *)(param_1 + 2);
  iVar2 = (int)param_1[5];
  uVar16 = 1;
  iVar13 = 0;
  iVar5 = 0;
  if (iVar2 != 0) {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = local_b8;
    }
    uVar17 = *puVar7;
    if (uVar17 == 0) {
      iVar5 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar5 = iVar2 + -1;
      }
      uVar15 = 0;
      uVar16 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar16 = uVar15;
      }
      iVar13 = 0;
      do {
        if (uVar16 == uVar15) goto LAB_1434d5017;
        iVar13 = iVar13 + 0x20;
        uVar17 = puVar7[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar17 == 0);
    }
    else {
      uVar15 = 0;
    }
    uVar16 = (ulonglong)(-uVar17 & uVar17);
    uVar1 = uVar16 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar5 = (iVar13 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar5) {
      iVar5 = iVar2;
    }
  }
  if (iVar5 != iVar2) {
    uVar17 = 0xffffffff;
    do {
      iVar3 = *(int *)(*param_1 + 8 + (longlong)iVar5 * 0x18);
      puVar12 = &DAT_149dfb77a;
      iVar9 = iVar3 + -1;
      if (iVar3 == 0) {
        iVar9 = 0;
      }
      else {
        puVar12 = *(undefined2 **)(*param_1 + (longlong)iVar5 * 0x18);
      }
      iVar5 = iVar9 - local_bc;
      if (iVar9 <= iVar9 - local_bc) {
        iVar5 = iVar9;
      }
      if (iVar5 < 1) {
        iVar5 = 0;
      }
      FUN_14006620a(&local_b0,puVar12,iVar5);
      FUN_140e830ae(&local_98,&local_a0,&local_b0,0);
      if (local_b0 != 0) {
        FUN_1400020a8();
      }
      uVar17 = uVar17 & ~(uint)uVar16;
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = local_b8;
      }
      iVar3 = (int)param_1[5];
      iVar5 = (int)uVar15;
      lVar6 = (longlong)iVar5;
      uVar11 = puVar7[lVar6] & uVar17;
      if (uVar11 == 0) {
        iVar9 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar9 = iVar3 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar13 = iVar13 + 0x20;
        iVar10 = iVar9;
        if (iVar9 < iVar5) {
          iVar10 = iVar5;
        }
        if (iVar5 < iVar9) {
          lVar14 = 0;
          do {
            uVar11 = puVar7[lVar6 + lVar14 + 1];
            if (uVar11 != 0) {
              uVar15 = (ulonglong)(iVar5 + (int)lVar14 + 1);
              uVar17 = 0xffffffff;
              goto LAB_1434d517f;
            }
            iVar13 = iVar13 + 0x20;
            lVar14 = lVar14 + 1;
          } while (iVar10 - lVar6 != lVar14);
          uVar17 = 0xffffffff;
          iVar5 = iVar10;
        }
        uVar15 = (ulonglong)(iVar5 + 1);
        iVar5 = iVar3;
      }
      else {
LAB_1434d517f:
        uVar16 = (ulonglong)(-uVar11 & uVar11);
        uVar1 = uVar16 * 2 + 1;
        lVar6 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
          }
        }
        iVar5 = (iVar13 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar5) {
          iVar5 = iVar3;
        }
      }
    } while (iVar5 != iVar2);
  }
LAB_1434d5017:
  FUN_140032b16(0);
  cVar4 = FUN_147a63a24(&local_98);
  if (cVar4 != '\0') {
    uVar8 = FUN_140032b16(0);
    FUN_1434cf072(uVar8);
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(&local_98);
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434d51c8 FUN_1434d51c8 body=459 status=ok
// SIG undefined FUN_1434d51c8(void)

void FUN_1434d51c8(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined2 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  ushort uVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  ushort uVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar3 = (int)param_2[1];
    uVar14 = 0;
    iVar10 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar10 = 0;
    }
    if (0 < iVar10) {
      if (iVar3 == 0) {
        puVar5 = &DAT_149dfb77a;
      }
      else {
        puVar5 = (undefined2 *)*param_2;
      }
      lVar11 = 0;
      do {
        uVar8 = ((uint)(ushort)puVar5[lVar11] + (uint)(0x19 < (ushort)puVar5[lVar11] - 0x61) * 0x20)
                - 0x20;
        uVar14 = uVar14 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar14 ^ uVar8) & 0xff) * 4);
        uVar14 = uVar14 >> 8 ^
                 *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar14 & 0xff ^ uVar8 >> 8 & 0xff) * 4);
        lVar11 = lVar11 + 1;
      } while (iVar10 != (int)lVar11);
    }
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar10 = *(int *)((longlong)plVar6 +
                     ((longlong)(int)uVar14 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar10 != -1) {
      lVar11 = *param_1;
LAB_1434d52a0:
      lVar7 = (longlong)iVar10 * 0x30;
      plVar1 = (longlong *)(lVar11 + lVar7);
      iVar2 = *(int *)(lVar11 + 8 + lVar7);
      if (iVar2 == iVar3) {
        if (1 < iVar3) {
          lVar16 = 0;
          do {
            uVar13 = *(ushort *)(*plVar1 + lVar16);
            uVar15 = (ulonglong)uVar13;
            uVar9 = *(ushort *)(*param_2 + lVar16);
            if (uVar13 == uVar9) {
              if (uVar13 == 0) break;
            }
            else {
              if (0x7f < (uVar9 | uVar13)) goto LAB_1434d52fc;
              uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
              uVar12 = (ulonglong)uVar9;
              uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
              if ((&DAT_149e05da0)[uVar15] != (&DAT_149e05da0)[uVar12]) goto LAB_1434d52fc;
            }
            lVar16 = lVar16 + 2;
          } while( true );
        }
        goto LAB_1434d5325;
      }
      if (iVar2 + iVar3 == 1) goto LAB_1434d5325;
      goto LAB_1434d530d;
    }
  }
  return;
LAB_1434d52fc:
  if (uVar13 == uVar9) {
LAB_1434d5325:
    iVar3 = *(int *)((longlong)plVar6 + (longlong)*(int *)((longlong)plVar1 + 0x2c) * 4);
    if (iVar3 == iVar10) {
      puVar4 = (undefined4 *)((longlong)plVar6 + (longlong)*(int *)((longlong)plVar1 + 0x2c) * 4);
    }
    else {
      do {
        lVar16 = (longlong)iVar3;
        iVar3 = *(int *)(lVar11 + 0x28 + lVar16 * 0x30);
      } while (iVar3 != iVar10);
      puVar4 = (undefined4 *)(lVar11 + lVar16 * 0x30 + 0x28);
    }
    *puVar4 = (int)plVar1[5];
    lVar11 = *param_1;
    if (*(longlong *)(lVar11 + 0x10 + lVar7) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(lVar11 + lVar7) != 0) {
      FUN_1400020a8();
    }
    FUN_147a7577c(param_1,iVar10);
    return;
  }
LAB_1434d530d:
  iVar10 = (int)plVar1[5];
  if (iVar10 == -1) {
    return;
  }
  goto LAB_1434d52a0;
}



// FUNCTION 1434d5394 FUN_1434d5394 body=29 status=ok
// SIG undefined FUN_1434d5394(void)

undefined8 FUN_1434d5394(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1434d53c6 FUN_1434d53c6 body=85 status=ok
// SIG undefined FUN_1434d53c6(void)

void FUN_1434d53c6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a8bca60;
  return;
}



// FUNCTION 1434d541c FUN_1434d541c body=85 status=ok
// SIG undefined FUN_1434d541c(void)

void FUN_1434d541c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a8bca60;
  return;
}



// FUNCTION 1434d5472 FUN_1434d5472 body=118 status=ok
// SIG undefined FUN_1434d5472(void)

void FUN_1434d5472(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a8bca60;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001434d54d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1434d54ee FUN_1434d54ee body=16 status=ok
// SIG undefined FUN_1434d54ee(void)

undefined1 FUN_1434d54ee(void)

{
  FUN_1434d54fe();
  return 1;
}



// FUNCTION 1434d54fe FUN_1434d54fe body=520 status=ok
// SIG undefined FUN_1434d54fe(void)

void FUN_1434d54fe(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(DAT_14cb0d2b0 + 0xc20);
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_149e35290;
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
  local_30[2] = lVar3;
  *local_30 = &PTR_FUN_14a8bcad0;
  FUN_140feff30(lVar1 + 0x2a0,local_38,&local_30);
  if (local_28 == 0) {
LAB_1434d55d9:
    if (local_30 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_30 != (undefined8 *)0x0) {
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
    goto LAB_1434d55d9;
  }
  lVar1 = *(longlong *)(DAT_14cb0d2b0 + 0xc20);
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_149e35290;
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
  local_30[2] = lVar3;
  *local_30 = &PTR_FUN_14a8bcb40;
  FUN_140feff30(lVar1 + 0x2b8,local_38,&local_30);
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_1434d56af;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1434d56af:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434d5708 FUN_1434d5708 body=29 status=ok
// SIG undefined FUN_1434d5708(void)

undefined8 FUN_1434d5708(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1434d573a FUN_1434d573a body=91 status=ok
// SIG undefined FUN_1434d573a(void)

void FUN_1434d573a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e35290;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a8bcad0;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1434d5796 FUN_1434d5796 body=91 status=ok
// SIG undefined FUN_1434d5796(void)

void FUN_1434d5796(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e35290;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a8bcad0;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1434d57f2 FUN_1434d57f2 body=124 status=ok
// SIG undefined FUN_1434d57f2(void)

void FUN_1434d57f2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e35290;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a8bcad0;
  *(undefined1 *)&(p_Var1->ProcessLocksList).Blink = *(undefined1 *)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001434d585f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1434d5874 FUN_1434d5874 body=16 status=ok
// SIG undefined FUN_1434d5874(void)

undefined1 FUN_1434d5874(void)

{
  FUN_147a6404a();
  return 1;
}



// FUNCTION 1434d5884 FUN_1434d5884 body=29 status=ok
// SIG undefined FUN_1434d5884(void)

undefined8 FUN_1434d5884(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1434d58b6 FUN_1434d58b6 body=91 status=ok
// SIG undefined FUN_1434d58b6(void)

void FUN_1434d58b6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e35290;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a8bcb40;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1434d5912 FUN_1434d5912 body=91 status=ok
// SIG undefined FUN_1434d5912(void)

void FUN_1434d5912(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e35290;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a8bcb40;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1434d596e FUN_1434d596e body=124 status=ok
// SIG undefined FUN_1434d596e(void)

void FUN_1434d596e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e35290;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a8bcb40;
  *(undefined1 *)&(p_Var1->ProcessLocksList).Blink = *(undefined1 *)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001434d59db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1434d5a1e FUN_1434d5a1e body=64 status=ok
// SIG undefined FUN_1434d5a1e(void)

undefined1 FUN_1434d5a1e(void)

{
  longlong lVar1;
  
  lVar1 = DAT_14cad6230;
  if ((DAT_14cad6230 != 0) && (0 < *(int *)(DAT_14cad6230 + 0x98))) {
    *(int *)(DAT_14cad6230 + 0xa4) = *(int *)(DAT_14cad6230 + 0xa4) + -1;
    if (*(int *)(lVar1 + 0xa0) < 0) {
      *(undefined4 *)(lVar1 + 0xa0) = 0;
    }
    else {
      FUN_1434cf218();
    }
  }
  return 1;
}



// FUNCTION 1434d5a5e FUN_1434d5a5e body=29 status=ok
// SIG undefined FUN_1434d5a5e(void)

undefined8 FUN_1434d5a5e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1434d5a90 FUN_1434d5a90 body=85 status=ok
// SIG undefined FUN_1434d5a90(void)

void FUN_1434d5a90(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a8bcc20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a8bcbb0;
  return;
}



// FUNCTION 1434d5ae6 FUN_1434d5ae6 body=85 status=ok
// SIG undefined FUN_1434d5ae6(void)

void FUN_1434d5ae6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a8bcc20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a8bcbb0;
  return;
}



// FUNCTION 1434d5b3c FUN_1434d5b3c body=118 status=ok
// SIG undefined FUN_1434d5b3c(void)

void FUN_1434d5b3c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a8bcc20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a8bcbb0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001434d5ba3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1434d5bb2 FUN_1434d5bb2 body=72 status=ok
// SIG undefined FUN_1434d5bb2(void)

void FUN_1434d5bb2(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  
  if (param_3 != (longlong *)0x0) {
    cVar1 = (**(code **)(*param_3 + 0x6c8))(param_3);
    if (((cVar1 == '\0') && (DAT_14cad6230 != 0)) && (0 < *(int *)(DAT_14cad6230 + 0x98))) {
      *(int *)(DAT_14cad6230 + 0xa8) = *(int *)(DAT_14cad6230 + 0xa8) + 1;
      FUN_1414cecc8();
      return;
    }
  }
  return;
}



// FUNCTION 1434d5bfa FUN_1434d5bfa body=69 status=ok
// SIG undefined FUN_1434d5bfa(void)

undefined8 FUN_1434d5bfa(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  
  if (param_3 != (longlong *)0x0) {
    cVar1 = (**(code **)(*param_3 + 0x6c8))(param_3);
    if (((cVar1 == '\0') && (DAT_14cad6230 != 0)) && (0 < *(int *)(DAT_14cad6230 + 0x98))) {
      *(int *)(DAT_14cad6230 + 0xa8) = *(int *)(DAT_14cad6230 + 0xa8) + 1;
      FUN_1414cecc8();
    }
  }
  return 1;
}



// FUNCTION 1434d5c40 FUN_1434d5c40 body=29 status=ok
// SIG undefined FUN_1434d5c40(void)

undefined8 FUN_1434d5c40(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1434d5c72 FUN_1434d5c72 body=85 status=ok
// SIG undefined FUN_1434d5c72(void)

void FUN_1434d5c72(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a8bcd00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a8bcc90;
  return;
}



// FUNCTION 1434d5cc8 FUN_1434d5cc8 body=85 status=ok
// SIG undefined FUN_1434d5cc8(void)

void FUN_1434d5cc8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a8bcd00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a8bcc90;
  return;
}



// FUNCTION 1434d5d1e FUN_1434d5d1e body=118 status=ok
// SIG undefined FUN_1434d5d1e(void)

void FUN_1434d5d1e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a8bcd00;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a8bcc90;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001434d5d85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1434d5d94 FUN_1434d5d94 body=59 status=ok
// SIG undefined FUN_1434d5d94(void)

void FUN_1434d5d94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_3;
  FUN_1434d5e0e();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434d5dd0 FUN_1434d5dd0 body=61 status=ok
// SIG undefined FUN_1434d5dd0(void)

undefined8 FUN_1434d5dd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_3;
  FUN_1434d5e0e();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434d5e0e FUN_1434d5e0e body=93 status=ok
// SIG undefined FUN_1434d5e0e(void)

void FUN_1434d5e0e(longlong *param_1)

{
  char cVar1;
  int iVar2;
  
  param_1 = (longlong *)*param_1;
  if ((param_1 != (longlong *)0x0) && ((*(byte *)(param_1 + 0x84) & 2) != 0)) {
    cVar1 = (**(code **)(*param_1 + 0x6c8))();
    if ((cVar1 == '\0') &&
       (((DAT_14cad6230 != 0 && (0 < *(int *)(DAT_14cad6230 + 0x98))) &&
        (0 < *(int *)(DAT_14cad6230 + 0xa8))))) {
      iVar2 = *(int *)(DAT_14cad6230 + 0xa8) + -1;
      *(int *)(DAT_14cad6230 + 0xa8) = iVar2;
      FUN_1414cecc8(iVar2,2);
      return;
    }
  }
  return;
}



// FUNCTION 1434d5e86 FUN_1434d5e86 body=254 status=ok
// SIG undefined FUN_1434d5e86(void)

uint FUN_1434d5e86(undefined8 param_1,undefined8 param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined2 *puVar3;
  uint uVar4;
  undefined2 *puVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined8 uStack_60;
  undefined2 *local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = (undefined2 *)0x0;
  uStack_50 = 0;
  lVar7 = 0;
  FUN_1407c869a(param_2,&local_58,0);
  local_68 = (undefined2 *)0x0;
  uStack_60 = 0;
  FUN_1407c869a(param_1,&local_68,0);
  puVar5 = local_58;
  if ((int)uStack_50 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  puVar3 = &DAT_149dfb77a;
  if ((int)uStack_60 != 0) {
    puVar3 = local_68;
  }
  while( true ) {
    uVar1 = *(ushort *)((longlong)puVar3 + lVar7);
    uVar4 = (uint)uVar1;
    uVar2 = *(ushort *)((longlong)puVar5 + lVar7);
    uVar6 = (uint)uVar2;
    if (uVar1 != uVar2) {
      if ((uVar2 | uVar1) < 0x80) {
        uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar1];
        uVar6 = (uint)(byte)(&DAT_149e05da0)[uVar2];
        if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_1434d5f13;
      }
      uVar4 = uVar4 - uVar6;
      goto LAB_1434d5f3e;
    }
    if (uVar1 == 0) break;
LAB_1434d5f13:
    lVar7 = lVar7 + 2;
  }
  uVar4 = 0;
LAB_1434d5f3e:
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 >> 0x1f;
}



// FUNCTION 1434d5f86 FUN_1434d5f86 body=481 status=ok
// SIG undefined FUN_1434d5f86(void)

void FUN_1434d5f86(longlong param_1,ulonglong *param_2)

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
  FUN_147a7656a(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


