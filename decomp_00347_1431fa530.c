// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1431fa530 FUN_1431fa530 body=1561 status=ok
// SIG undefined FUN_1431fa530(void)

void FUN_1431fa530(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  undefined8 uVar7;
  void *_Src;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  void *pvVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong lVar15;
  size_t _Size;
  undefined8 *puVar16;
  longlong lVar17;
  undefined1 *_Src_00;
  ulonglong uVar18;
  void *_Dst;
  undefined1 auStack_138 [32];
  wchar_t *local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  char *local_100;
  undefined4 local_f8;
  undefined4 local_f0;
  longlong *local_e8;
  undefined1 local_e0;
  undefined8 local_d8;
  undefined1 local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar16 + 0x11;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x90);
    puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar16 + 0x11;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar16;
  param_2[6] = (ulonglong)(puVar16 + 1);
  puVar16[1] = 0;
  *puVar16 = &PTR_FUN_14a1fb978;
  puVar16[3] = 0;
  *(int *)(puVar16 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar16 + 0x24) = 8;
  }
  else {
    plVar14 = local_b8;
    if (local_b8 == (longlong *)0x0) {
      plVar14 = &local_c0;
    }
    FUN_1446fe144(puVar16 + 2,local_b0,0);
    puVar11 = (undefined8 *)puVar16[3];
    if ((undefined8 *)puVar16[3] == (undefined8 *)0x0) {
      puVar11 = puVar16 + 2;
    }
    memcpy(puVar11,plVar14,(longlong)local_b0);
  }
  puVar16[0xd] = 0;
  *(int *)(puVar16 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar16 + 0x74) = 8;
  }
  else {
    _Src_00 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src_00 = local_a8;
    }
    FUN_1446fe1b8(puVar16 + 5,local_60,0);
    puVar11 = (undefined8 *)puVar16[0xd];
    if ((undefined8 *)puVar16[0xd] == (undefined8 *)0x0) {
      puVar11 = puVar16 + 5;
    }
    memcpy(puVar11,_Src_00,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar16 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar16 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar16 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar16 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  pcVar6 = *(code **)(param_1 + 0x1f0);
  if (pcVar6 != (code *)0x0) {
    plVar14 = (longlong *)(param_1 + 0x210);
    if (*(longlong **)(param_1 + 0x200) != (longlong *)0x0) {
      plVar14 = *(longlong **)(param_1 + 0x200);
    }
    uVar13 = (**(code **)(*plVar14 + 8))();
    (*pcVar6)(uVar13);
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1e0);
  uVar13 = *(undefined8 *)(param_1 + 0x1c0);
  uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x1d8) + 0x10);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca91850) && (FUN_144b3d300(&DAT_14ca91850), DAT_14ca91850 == -1)) {
    FUN_145f98bc8(&local_c0);
    local_d0 = 0;
    local_e0 = 0;
    local_100 = "Unknown";
    local_110 = 0;
    uStack_108 = 0;
    local_118 = L"FParameters";
    local_d8 = 0;
    local_f0 = 0x30;
    local_f8 = 0x6e;
    local_e8 = &local_c0;
    FUN_140b49562(&DAT_14ca917d0,0,1);
    if (local_c0 != 0) {
      FUN_1400020a8();
    }
    atexit((_func_5014 *)&LAB_1431f8c39);
    _Init_thread_footer(&DAT_14ca91850);
  }
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar9 = 0;
  }
  else {
    lVar17 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar9 = *(ulonglong *)(*(longlong *)(lVar17 + 0x50) + lVar15 * 8);
    if (uVar9 == 0) {
      uVar9 = FUN_1400bafc2(lVar17,lVar15,1);
    }
  }
  uVar10 = FUN_140029432(param_2,uVar9,0);
  param_2[0x37] = uVar9;
  puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar16 + 3;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x20);
    puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar16 + 3;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar16;
  param_2[6] = (ulonglong)(puVar16 + 1);
  puVar16[1] = 0;
  *puVar16 = &PTR_LAB_14a37d340;
  puVar16[2] = uVar10;
  local_118 = (wchar_t *)uVar13;
  FUN_14480864a(param_2,uVar9,*(undefined8 *)(param_1 + 0x1c8),&DAT_14ca917d0);
  puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar16 + 4;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x28);
    puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar16 + 4;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar16;
  param_2[6] = (ulonglong)(puVar16 + 1);
  puVar16[1] = 0;
  *puVar16 = &PTR_LAB_14a1e7fd0;
  puVar16[2] = uVar7;
  *(undefined4 *)(puVar16 + 3) = uVar3;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    local_c8 = 0;
  }
  else {
    lVar17 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    local_c8 = *(longlong *)(*(longlong *)(lVar17 + 0x50) + lVar15 * 8);
    if (local_c8 == 0) {
      local_c8 = FUN_1400bafc2(lVar17,lVar15,1);
    }
  }
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar17 = *(longlong *)(param_1 + 0x1c8);
    uVar9 = *(ulonglong *)(lVar17 + 0x10);
    uVar18 = lVar17 + 0x10 + ((longlong)uVar9 >> 0x18);
    if ((uVar9 & 1) == 0) {
      uVar18 = uVar9;
    }
    iVar4 = *(int *)(lVar17 + 0x18);
    if ((longlong)iVar4 != 0) {
      lVar17 = 0;
      do {
        uVar8 = (uint)*(byte *)(uVar18 + 3 + lVar17);
        if ((uVar8 < 0x13) && ((0x44080U >> (uVar8 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar18 + 2 + lVar17);
          iVar5 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar5 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar5 + 1U) {
            FUN_1447477d8(puVar1,iVar5);
          }
          uVar9 = *puVar1;
          *(ushort *)(uVar9 + (longlong)iVar5 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar9 + 2 + (longlong)iVar5 * 4) = 1;
        }
        lVar17 = lVar17 + 4;
      } while ((longlong)iVar4 * 4 != lVar17);
    }
    uVar9 = param_2[0x13];
    lVar17 = (longlong)(int)uVar9;
    if (0 < lVar17) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar16 + 5;
        if ((undefined8 *)param_2[1] < puVar11) {
          FUN_140023dd8(param_2,0x30);
          puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar11 = puVar16 + 5;
        }
        *param_2 = (ulonglong)puVar11;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar16;
        param_2[6] = (ulonglong)(puVar16 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar12 = (void *)((longlong)_Dst + lVar17 * 4);
        _Size = lVar17 * 4;
        if ((void *)param_2[1] < pvVar12) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar12 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar12;
        memcpy(_Dst,_Src,_Size);
        puVar16[1] = 0;
        *puVar16 = &PTR_FUN_14a1fbc38;
        puVar16[2] = local_c8;
        puVar16[3] = _Dst;
        *(int *)(puVar16 + 4) = (int)uVar9;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1431fab4a FUN_1431fab4a body=38 status=ok
// SIG undefined FUN_1431fab4a(void)

undefined8 FUN_1431fab4a(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1431fab70 FUN_1431fab70 body=572 status=ok
// SIG undefined FUN_1431fab70(void)

void FUN_1431fab70(longlong param_1,ulonglong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined1 *local_b0;
  int local_a8;
  undefined1 local_a0 [64];
  undefined1 *local_60;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144b1c6fa(param_1 + 0x10,local_b8);
  puVar5 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar2 = puVar5 + 0x11;
  if ((undefined8 *)param_2[1] < puVar2) {
    FUN_140023dd8(param_2,0x90);
    puVar5 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar5 + 0x11;
  }
  *param_2 = (ulonglong)puVar2;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar5;
  param_2[6] = (ulonglong)(puVar5 + 1);
  puVar5[1] = 0;
  *puVar5 = &PTR_FUN_14a1fb978;
  puVar5[3] = 0;
  *(int *)(puVar5 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar5 + 0x24) = 8;
  }
  else {
    puVar4 = local_b8;
    if (local_b0 != (undefined1 *)0x0) {
      puVar4 = local_b0;
    }
    FUN_1446fe144(puVar5 + 2,local_a8,0);
    puVar2 = (undefined8 *)puVar5[3];
    if ((undefined8 *)puVar5[3] == (undefined8 *)0x0) {
      puVar2 = puVar5 + 2;
    }
    memcpy(puVar2,puVar4,(longlong)local_a8);
  }
  puVar5[0xd] = 0;
  *(int *)(puVar5 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar5 + 0x74) = 8;
  }
  else {
    puVar4 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      puVar4 = local_a0;
    }
    FUN_1446fe1b8(puVar5 + 5,local_58,0);
    puVar2 = (undefined8 *)puVar5[0xd];
    if ((undefined8 *)puVar5[0xd] == (undefined8 *)0x0) {
      puVar2 = puVar5 + 5;
    }
    memcpy(puVar2,puVar4,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar5 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar5 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar5 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar5 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (local_b0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x1b8) + 0x10);
  if (*(char *)((longlong)param_2 + 100) == '\x01') {
    plVar3 = (longlong *)(**(code **)(*DAT_14ca83900 + 0x30))();
    (**(code **)(*plVar3 + 0x558))(plVar3,uVar1);
  }
  else {
    puVar5 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar5 + 3;
    if ((undefined8 *)param_2[1] < puVar2) {
      FUN_140023dd8(param_2,0x20);
      puVar5 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar2 = puVar5 + 3;
    }
    *param_2 = (ulonglong)puVar2;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar5;
    param_2[6] = (ulonglong)(puVar5 + 1);
    puVar5[1] = 0;
    *puVar5 = &PTR_FUN_14a3876a8;
    puVar5[2] = uVar1;
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431fadae FUN_1431fadae body=46 status=ok
// SIG undefined FUN_1431fadae(void)

void FUN_1431fadae(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*DAT_14ca83900 + 0x30))();
                    /* WARNING: Could not recover jumptable at 0x0001431fadd9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x558))(plVar1,*(undefined8 *)(param_1 + 0x10),*(code **)(*plVar1 + 0x558))
  ;
  return;
}



// FUNCTION 1431fade8 FUN_1431fade8 body=1103 status=ok
// SIG undefined FUN_1431fade8(void)

void FUN_1431fade8(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  longlong local_c0;
  undefined **local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  uint uStack_80;
  uint local_7c;
  undefined4 local_78;
  undefined1 *local_74;
  undefined4 local_6c;
  undefined2 local_68;
  undefined1 local_66;
  undefined2 local_65;
  undefined1 local_63;
  undefined4 local_60;
  wchar_t *local_58;
  undefined ***local_50;
  undefined1 local_48 [8];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  bVar3 = (byte)DAT_14c760da4 & 0x1f;
  local_b8 = &PTR_FUN_14a387780;
  local_b0 = 0xffffffff;
  FUN_1446f470e(local_48,L"FColoredTexture",1);
  local_66 = 0;
  local_98 = 8;
  local_65 = 0x25;
  local_74 = &DAT_100000001;
  local_6c = 0x10001;
  local_68 = 0x101;
  local_90 = 1;
  local_78 = 0;
  uStack_8c = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  local_63 = 0xff;
  local_58 = L"ColoredTexture";
  local_40 = 0;
  local_60 = 0x70;
  local_7c = ~(-1 << bVar3);
  local_50 = &local_b8;
  (**(code **)(*DAT_14ca83900 + 0x1a0))(DAT_14ca83900,&local_a8,&DAT_14ca85100,&local_98);
  plVar9 = (longlong *)(param_1 + 0x10);
  if (plVar9 == &local_a8) {
LAB_1431faf5c:
    lVar6 = local_a8;
    if (local_a8 != 0) {
      LOCK();
      puVar1 = (uint *)(local_a8 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_a8 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_a8 + 0xd);
          plVar4 = (longlong *)FUN_14001cc68(0x10,8);
          plVar4[1] = lVar6;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar4 = (longlong)plVar8;
              LOCK();
              bVar10 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar4;
              if (bVar10) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar10);
          }
          else {
            do {
              *plVar4 = (longlong)plVar7;
              LOCK();
              bVar10 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar4;
              if (bVar10) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar10);
          }
        }
      }
    }
  }
  else {
    lVar6 = *plVar9;
    *plVar9 = local_a8;
    local_a8 = 0;
    if (lVar6 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar6 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar6 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar6 + 0xd);
          plVar4 = (longlong *)FUN_14001cc68(0x10,8);
          plVar4[1] = lVar6;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar4 = (longlong)plVar8;
              LOCK();
              bVar10 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar4;
              if (bVar10) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar10);
          }
          else {
            do {
              *plVar4 = (longlong)plVar7;
              LOCK();
              bVar10 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar4;
              if (bVar10) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar10);
          }
        }
      }
      goto LAB_1431faf5c;
    }
  }
  local_98 = 0;
  local_90 = 0;
  uStack_8c = 0x7f7fffff;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_80 = uStack_80 & 0xffffff00;
  lVar5 = FUN_1405d51a2();
  lVar6 = *(longlong *)(param_1 + 0x18);
  if (lVar6 != lVar5) {
    *(longlong *)(param_1 + 0x18) = lVar5;
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
    if (lVar6 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar6 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar6 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar6 + 0xd);
          plVar4 = (longlong *)FUN_14001cc68(0x10,8);
          plVar4[1] = lVar6;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar4 = (longlong)plVar8;
              LOCK();
              bVar10 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar4;
              if (bVar10) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar10);
          }
          else {
            do {
              *plVar4 = (longlong)plVar7;
              LOCK();
              bVar10 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar4;
              if (bVar10) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar10);
          }
        }
      }
    }
  }
  plVar9 = (longlong *)*plVar9;
  uStack_a0 = 0;
  local_a8 = 2;
  lVar6 = (**(code **)(*plVar9 + 8))(plVar9);
  if (*(byte *)(lVar6 + 0x32) < 5) {
    local_a8._0_3_ =
         CONCAT12((char)(0x4030502010 >> ((*(byte *)(lVar6 + 0x32) & 7) << 3)),(undefined2)local_a8)
    ;
  }
  local_a8._0_5_ = CONCAT23(0x100,(undefined3)local_a8);
  local_c8 = &local_a8;
  (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_c0,param_2,plVar9);
  plVar9 = (longlong *)(param_1 + 0x48);
  if (plVar9 != &local_c0) {
    lVar6 = *plVar9;
    *plVar9 = local_c0;
    local_c0 = 0;
    if (lVar6 == 0) goto LAB_1431fb18f;
    LOCK();
    puVar1 = (uint *)(lVar6 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar6 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar6 + 0xd);
        plVar7 = (longlong *)FUN_14001cc68(0x10,8);
        plVar7[1] = lVar6;
        plVar9 = DAT_14ca843c0;
        plVar8 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar7 = (longlong)plVar9;
            LOCK();
            bVar10 = plVar9 != DAT_14ca843c0;
            plVar8 = plVar7;
            if (bVar10) {
              plVar9 = DAT_14ca843c0;
              plVar8 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar8;
            UNLOCK();
          } while (bVar10);
        }
        else {
          do {
            *plVar7 = (longlong)plVar8;
            LOCK();
            bVar10 = plVar8 != DAT_14ca843c8;
            plVar9 = plVar7;
            if (bVar10) {
              plVar8 = DAT_14ca843c8;
              plVar9 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar9;
            UNLOCK();
          } while (bVar10);
        }
      }
    }
  }
  lVar6 = local_c0;
  if (local_c0 != 0) {
    LOCK();
    puVar1 = (uint *)(local_c0 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_c0 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_c0 + 0xd);
        plVar7 = (longlong *)FUN_14001cc68(0x10,8);
        plVar7[1] = lVar6;
        plVar9 = DAT_14ca843c0;
        plVar8 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar7 = (longlong)plVar9;
            LOCK();
            bVar10 = plVar9 != DAT_14ca843c0;
            plVar8 = plVar7;
            if (bVar10) {
              plVar9 = DAT_14ca843c0;
              plVar8 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar8;
            UNLOCK();
          } while (bVar10);
        }
        else {
          do {
            *plVar7 = (longlong)plVar8;
            LOCK();
            bVar10 = plVar8 != DAT_14ca843c8;
            plVar9 = plVar7;
            if (bVar10) {
              plVar8 = DAT_14ca843c8;
              plVar9 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar9;
            UNLOCK();
          } while (bVar10);
        }
      }
    }
  }
LAB_1431fb18f:
  if ((local_38 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1431fb238 FUN_1431fb238 body=1099 status=ok
// SIG undefined FUN_1431fb238(void)

void FUN_1431fb238(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  longlong local_c0;
  undefined **local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  uint uStack_80;
  uint local_7c;
  undefined4 local_78;
  undefined1 *local_74;
  undefined4 local_6c;
  undefined2 local_68;
  undefined1 local_66;
  undefined2 local_65;
  undefined1 local_63;
  undefined4 local_60;
  wchar_t *local_58;
  undefined ***local_50;
  undefined1 local_48 [8];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_b8 = &PTR_FUN_14a387780;
  bVar3 = (byte)DAT_14c760da4 & 0x1f;
  local_b0 = 0;
  FUN_1446f470e(local_48,L"FColoredTexture",1);
  local_66 = 0;
  local_98 = 8;
  local_65 = 0x25;
  local_74 = &DAT_100000001;
  local_6c = 0x10001;
  local_68 = 0x101;
  local_90 = 1;
  local_78 = 0;
  uStack_8c = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  local_63 = 0xff;
  local_58 = L"ColoredTexture";
  local_40 = 0;
  local_60 = 0x70;
  local_7c = ~(-1 << bVar3);
  local_50 = &local_b8;
  (**(code **)(*DAT_14ca83900 + 0x1a0))(DAT_14ca83900,&local_a8,&DAT_14ca85100,&local_98);
  plVar9 = (longlong *)(param_1 + 0x10);
  if (plVar9 == &local_a8) {
LAB_1431fb3a8:
    lVar6 = local_a8;
    if (local_a8 != 0) {
      LOCK();
      puVar1 = (uint *)(local_a8 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_a8 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_a8 + 0xd);
          plVar4 = (longlong *)FUN_14001cc68(0x10,8);
          plVar4[1] = lVar6;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar4 = (longlong)plVar8;
              LOCK();
              bVar10 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar4;
              if (bVar10) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar10);
          }
          else {
            do {
              *plVar4 = (longlong)plVar7;
              LOCK();
              bVar10 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar4;
              if (bVar10) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar10);
          }
        }
      }
    }
  }
  else {
    lVar6 = *plVar9;
    *plVar9 = local_a8;
    local_a8 = 0;
    if (lVar6 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar6 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar6 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar6 + 0xd);
          plVar4 = (longlong *)FUN_14001cc68(0x10,8);
          plVar4[1] = lVar6;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar4 = (longlong)plVar8;
              LOCK();
              bVar10 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar4;
              if (bVar10) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar10);
          }
          else {
            do {
              *plVar4 = (longlong)plVar7;
              LOCK();
              bVar10 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar4;
              if (bVar10) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar10);
          }
        }
      }
      goto LAB_1431fb3a8;
    }
  }
  local_98 = 0;
  local_90 = 0;
  uStack_8c = 0x7f7fffff;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_80 = uStack_80 & 0xffffff00;
  lVar5 = FUN_1405d51a2();
  lVar6 = *(longlong *)(param_1 + 0x18);
  if (lVar6 != lVar5) {
    *(longlong *)(param_1 + 0x18) = lVar5;
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
    if (lVar6 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar6 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar6 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar6 + 0xd);
          plVar4 = (longlong *)FUN_14001cc68(0x10,8);
          plVar4[1] = lVar6;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar4 = (longlong)plVar8;
              LOCK();
              bVar10 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar4;
              if (bVar10) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar10);
          }
          else {
            do {
              *plVar4 = (longlong)plVar7;
              LOCK();
              bVar10 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar4;
              if (bVar10) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar10);
          }
        }
      }
    }
  }
  plVar9 = (longlong *)*plVar9;
  uStack_a0 = 0;
  local_a8 = 2;
  lVar6 = (**(code **)(*plVar9 + 8))(plVar9);
  if (*(byte *)(lVar6 + 0x32) < 5) {
    local_a8._0_3_ =
         CONCAT12((char)(0x4030502010 >> ((*(byte *)(lVar6 + 0x32) & 7) << 3)),(undefined2)local_a8)
    ;
  }
  local_a8._0_5_ = CONCAT23(0x100,(undefined3)local_a8);
  local_c8 = &local_a8;
  (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_c0,param_2,plVar9);
  plVar9 = (longlong *)(param_1 + 0x48);
  if (plVar9 != &local_c0) {
    lVar6 = *plVar9;
    *plVar9 = local_c0;
    local_c0 = 0;
    if (lVar6 == 0) goto LAB_1431fb5db;
    LOCK();
    puVar1 = (uint *)(lVar6 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar6 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar6 + 0xd);
        plVar7 = (longlong *)FUN_14001cc68(0x10,8);
        plVar7[1] = lVar6;
        plVar9 = DAT_14ca843c0;
        plVar8 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar7 = (longlong)plVar9;
            LOCK();
            bVar10 = plVar9 != DAT_14ca843c0;
            plVar8 = plVar7;
            if (bVar10) {
              plVar9 = DAT_14ca843c0;
              plVar8 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar8;
            UNLOCK();
          } while (bVar10);
        }
        else {
          do {
            *plVar7 = (longlong)plVar8;
            LOCK();
            bVar10 = plVar8 != DAT_14ca843c8;
            plVar9 = plVar7;
            if (bVar10) {
              plVar8 = DAT_14ca843c8;
              plVar9 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar9;
            UNLOCK();
          } while (bVar10);
        }
      }
    }
  }
  lVar6 = local_c0;
  if (local_c0 != 0) {
    LOCK();
    puVar1 = (uint *)(local_c0 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_c0 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_c0 + 0xd);
        plVar7 = (longlong *)FUN_14001cc68(0x10,8);
        plVar7[1] = lVar6;
        plVar9 = DAT_14ca843c0;
        plVar8 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar7 = (longlong)plVar9;
            LOCK();
            bVar10 = plVar9 != DAT_14ca843c0;
            plVar8 = plVar7;
            if (bVar10) {
              plVar9 = DAT_14ca843c0;
              plVar8 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar8;
            UNLOCK();
          } while (bVar10);
        }
        else {
          do {
            *plVar7 = (longlong)plVar8;
            LOCK();
            bVar10 = plVar8 != DAT_14ca843c8;
            plVar9 = plVar7;
            if (bVar10) {
              plVar8 = DAT_14ca843c8;
              plVar9 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar9;
            UNLOCK();
          } while (bVar10);
        }
      }
    }
  }
LAB_1431fb5db:
  if ((local_38 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1431fb684 FUN_1431fb684 body=1305 status=ok
// SIG undefined FUN_1431fb684(void)

void FUN_1431fb684(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_d8 [32];
  ulonglong *local_b8;
  undefined8 *local_b0;
  longlong local_a0;
  ulonglong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  uint local_64;
  undefined1 local_60;
  undefined4 local_5c;
  wchar_t *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 1;
  local_74 = 0;
  uStack_6c = 0;
  local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_60 = 0;
  local_5c = 0;
  local_58 = L"EmptyVertexBuffer";
  local_50 = 0;
  uStack_48 = 0;
  local_98 = 0x10;
  uStack_90 = CONCAT44(uStack_90._4_4_,0x4109);
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    local_b0 = &local_88;
    local_b8 = (ulonglong *)CONCAT44(local_b8._4_4_,0xc00);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,&local_98);
    *(undefined4 *)(local_a0 + 0x18) = 0xc00;
    FUN_14002049c(param_2,0);
  }
  else {
    local_b0 = &local_88;
    local_b8 = (ulonglong *)CONCAT44(local_b8._4_4_,0xc00);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,&local_98);
    *(undefined4 *)(local_a0 + 0x18) = 0xc00;
  }
  lVar9 = local_a0;
  plVar8 = (longlong *)(param_1 + 0x10);
  if (plVar8 == &local_a0) {
LAB_1431fb81a:
    lVar9 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_a0 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_a0 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_a0 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar9;
          plVar7 = DAT_14ca843c0;
          plVar6 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar10 = plVar7 != DAT_14ca843c0;
              plVar6 = plVar5;
              if (bVar10) {
                plVar7 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar10);
          }
          else {
            do {
              *plVar5 = (longlong)plVar6;
              LOCK();
              bVar10 = plVar6 != DAT_14ca843c8;
              plVar7 = plVar5;
              if (bVar10) {
                plVar6 = DAT_14ca843c8;
                plVar7 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar7;
              UNLOCK();
            } while (bVar10);
          }
        }
      }
    }
    lVar9 = *plVar8;
  }
  else {
    lVar4 = *plVar8;
    *plVar8 = local_a0;
    local_a0 = 0;
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
              bVar10 = plVar7 != DAT_14ca843c0;
              plVar6 = plVar5;
              if (bVar10) {
                plVar7 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar10);
          }
          else {
            do {
              *plVar5 = (longlong)plVar6;
              LOCK();
              bVar10 = plVar6 != DAT_14ca843c8;
              plVar7 = plVar5;
              if (bVar10) {
                plVar6 = DAT_14ca843c8;
                plVar7 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar7;
              UNLOCK();
            } while (bVar10);
          }
        }
      }
      goto LAB_1431fb81a;
    }
  }
  if ((lVar9 == 0) || ((*(byte *)(lVar9 + 0x28) & 0x10) == 0)) {
    local_98._0_3_ = 0x11c00;
  }
  else {
    local_98._0_3_ = 0x40000;
  }
  local_98 = (ulonglong)(uint3)local_98;
  uStack_90 = 0;
  local_b8 = &local_98;
  (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_a0,param_2);
  plVar7 = (longlong *)(param_1 + 0x18);
  if (plVar7 == &local_a0) {
LAB_1431fb94b:
    lVar9 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_a0 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_a0 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_a0 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar9;
          plVar7 = DAT_14ca843c0;
          plVar6 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar10 = plVar7 != DAT_14ca843c0;
              plVar6 = plVar5;
              if (bVar10) {
                plVar7 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar10);
          }
          else {
            do {
              *plVar5 = (longlong)plVar6;
              LOCK();
              bVar10 = plVar6 != DAT_14ca843c8;
              plVar7 = plVar5;
              if (bVar10) {
                plVar6 = DAT_14ca843c8;
                plVar7 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar7;
              UNLOCK();
            } while (bVar10);
          }
        }
      }
    }
  }
  else {
    lVar9 = *plVar7;
    *plVar7 = local_a0;
    local_a0 = 0;
    if (lVar9 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar9 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar9 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar9 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar9;
          plVar7 = DAT_14ca843c0;
          plVar6 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar10 = plVar7 != DAT_14ca843c0;
              plVar6 = plVar5;
              if (bVar10) {
                plVar7 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar10);
          }
          else {
            do {
              *plVar5 = (longlong)plVar6;
              LOCK();
              bVar10 = plVar6 != DAT_14ca843c8;
              plVar7 = plVar5;
              if (bVar10) {
                plVar6 = DAT_14ca843c8;
                plVar7 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar7;
              UNLOCK();
            } while (bVar10);
          }
        }
      }
      goto LAB_1431fb94b;
    }
  }
  if ((*plVar8 == 0) || ((*(byte *)(*plVar8 + 0x28) & 0x10) == 0)) {
    local_98 = 0x11c01;
  }
  else {
    local_98 = 0x40001;
  }
  uStack_90 = 0;
  local_b8 = &local_98;
  (**(code **)(*DAT_14ca83900 + 0x1c0))(DAT_14ca83900,&local_a0,param_2);
  plVar8 = (longlong *)(param_1 + 0x20);
  if (plVar8 != &local_a0) {
    lVar9 = *plVar8;
    *plVar8 = local_a0;
    local_a0 = 0;
    if (lVar9 == 0) goto LAB_1431fbadb;
    LOCK();
    puVar1 = (uint *)(lVar9 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar9 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar9 + 0xd);
        plVar6 = (longlong *)FUN_14001cc68(0x10,8);
        plVar6[1] = lVar9;
        plVar8 = DAT_14ca843c0;
        plVar7 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar6 = (longlong)plVar8;
            LOCK();
            bVar10 = plVar8 != DAT_14ca843c0;
            plVar7 = plVar6;
            if (bVar10) {
              plVar8 = DAT_14ca843c0;
              plVar7 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar7;
            UNLOCK();
          } while (bVar10);
        }
        else {
          do {
            *plVar6 = (longlong)plVar7;
            LOCK();
            bVar10 = plVar7 != DAT_14ca843c8;
            plVar8 = plVar6;
            if (bVar10) {
              plVar7 = DAT_14ca843c8;
              plVar8 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar8;
            UNLOCK();
          } while (bVar10);
        }
      }
    }
  }
  lVar9 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    puVar1 = (uint *)(local_a0 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_a0 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_a0 + 0xd);
        plVar6 = (longlong *)FUN_14001cc68(0x10,8);
        plVar6[1] = lVar9;
        plVar8 = DAT_14ca843c0;
        plVar7 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar6 = (longlong)plVar8;
            LOCK();
            bVar10 = plVar8 != DAT_14ca843c0;
            plVar7 = plVar6;
            if (bVar10) {
              plVar8 = DAT_14ca843c0;
              plVar7 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar7;
            UNLOCK();
          } while (bVar10);
        }
        else {
          do {
            *plVar6 = (longlong)plVar7;
            LOCK();
            bVar10 = plVar7 != DAT_14ca843c8;
            plVar8 = plVar6;
            if (bVar10) {
              plVar7 = DAT_14ca843c8;
              plVar8 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar8;
            UNLOCK();
          } while (bVar10);
        }
      }
    }
  }
LAB_1431fbadb:
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1431fbb9e FUN_1431fbb9e body=1311 status=ok
// SIG undefined FUN_1431fbb9e(void)

void FUN_1431fbb9e(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  byte bVar4;
  char cVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  undefined8 *local_b0;
  longlong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  uint local_64;
  undefined1 local_60;
  undefined4 local_5c;
  wchar_t *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 1;
  local_74 = 0;
  uStack_6c = 0;
  local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_60 = 0;
  local_5c = 0;
  local_58 = L"EmptyStructuredBuffer";
  local_50 = 0;
  uStack_48 = 0;
  local_98 = 0x400000010;
  uStack_90 = CONCAT44(uStack_90._4_4_,0x10109);
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    local_b0 = &local_88;
    local_b8 = (undefined8 *)CONCAT44(local_b8._4_4_,0xc00);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,&local_98);
    *(undefined4 *)(local_a0 + 0x18) = 0xc00;
    FUN_14002049c(param_2,0);
  }
  else {
    local_b0 = &local_88;
    local_b8 = (undefined8 *)CONCAT44(local_b8._4_4_,0xc00);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,&local_98);
    *(undefined4 *)(local_a0 + 0x18) = 0xc00;
  }
  plVar9 = (longlong *)(param_1 + 0x10);
  if (plVar9 == &local_a0) {
LAB_1431fbd3c:
    lVar3 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_a0 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_a0 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(local_a0 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar3;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar10 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar6;
              if (bVar10) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar10);
          }
          else {
            do {
              *plVar6 = (longlong)plVar7;
              LOCK();
              bVar10 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar6;
              if (bVar10) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar10);
          }
        }
      }
    }
  }
  else {
    lVar3 = *plVar9;
    *plVar9 = local_a0;
    local_a0 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar3 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(lVar3 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar3;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar10 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar6;
              if (bVar10) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar10);
          }
          else {
            do {
              *plVar6 = (longlong)plVar7;
              LOCK();
              bVar10 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar6;
              if (bVar10) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar10);
          }
        }
      }
      goto LAB_1431fbd3c;
    }
  }
  uStack_90 = 0;
  uVar2 = *(uint *)(*plVar9 + 0x28);
  bVar4 = 4;
  if (((uVar2 & 0x10) == 0) && (bVar4 = 2, (uVar2 >> 0x10 & 1) == 0)) {
    bVar4 = ((byte)(uVar2 >> 0xd) & 1) * '\x02' + 1;
  }
  local_98 = (ulonglong)bVar4 << 0x10;
  local_b8 = &local_98;
  (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_a0,param_2);
  plVar8 = (longlong *)(param_1 + 0x18);
  if (plVar8 == &local_a0) {
LAB_1431fbe6e:
    lVar3 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_a0 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_a0 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(local_a0 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar3;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar10 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar6;
              if (bVar10) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar10);
          }
          else {
            do {
              *plVar6 = (longlong)plVar7;
              LOCK();
              bVar10 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar6;
              if (bVar10) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar10);
          }
        }
      }
    }
  }
  else {
    lVar3 = *plVar8;
    *plVar8 = local_a0;
    local_a0 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar3 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(lVar3 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar3;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar10 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar6;
              if (bVar10) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar10);
          }
          else {
            do {
              *plVar6 = (longlong)plVar7;
              LOCK();
              bVar10 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar6;
              if (bVar10) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar10);
          }
        }
      }
      goto LAB_1431fbe6e;
    }
  }
  uStack_90 = 0;
  uVar2 = *(uint *)(*plVar9 + 0x28);
  cVar5 = '\x04';
  if (((uVar2 & 0x10) == 0) && (cVar5 = '\x02', (uVar2 >> 0x10 & 1) == 0)) {
    cVar5 = ((byte)(uVar2 >> 0xd) & 1) * '\x02' + '\x01';
  }
  local_98 = (ulonglong)CONCAT12(cVar5,1);
  local_b8 = &local_98;
  (**(code **)(*DAT_14ca83900 + 0x1c0))(DAT_14ca83900,&local_a0,param_2);
  plVar9 = (longlong *)(param_1 + 0x20);
  if (plVar9 != &local_a0) {
    lVar3 = *plVar9;
    *plVar9 = local_a0;
    local_a0 = 0;
    if (lVar3 == 0) goto LAB_1431fbff9;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar3 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar4 = *(byte *)(lVar3 + 0xd);
        plVar7 = (longlong *)FUN_14001cc68(0x10,8);
        plVar7[1] = lVar3;
        plVar9 = DAT_14ca843c0;
        plVar8 = DAT_14ca843c8;
        if ((bVar4 & 2) == 0) {
          do {
            *plVar7 = (longlong)plVar9;
            LOCK();
            bVar10 = plVar9 != DAT_14ca843c0;
            plVar8 = plVar7;
            if (bVar10) {
              plVar9 = DAT_14ca843c0;
              plVar8 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar8;
            UNLOCK();
          } while (bVar10);
        }
        else {
          do {
            *plVar7 = (longlong)plVar8;
            LOCK();
            bVar10 = plVar8 != DAT_14ca843c8;
            plVar9 = plVar7;
            if (bVar10) {
              plVar8 = DAT_14ca843c8;
              plVar9 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar9;
            UNLOCK();
          } while (bVar10);
        }
      }
    }
  }
  lVar3 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    puVar1 = (uint *)(local_a0 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_a0 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar4 = *(byte *)(local_a0 + 0xd);
        plVar7 = (longlong *)FUN_14001cc68(0x10,8);
        plVar7[1] = lVar3;
        plVar9 = DAT_14ca843c0;
        plVar8 = DAT_14ca843c8;
        if ((bVar4 & 2) == 0) {
          do {
            *plVar7 = (longlong)plVar9;
            LOCK();
            bVar10 = plVar9 != DAT_14ca843c0;
            plVar8 = plVar7;
            if (bVar10) {
              plVar9 = DAT_14ca843c0;
              plVar8 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar8;
            UNLOCK();
          } while (bVar10);
        }
        else {
          do {
            *plVar7 = (longlong)plVar8;
            LOCK();
            bVar10 = plVar8 != DAT_14ca843c8;
            plVar9 = plVar7;
            if (bVar10) {
              plVar8 = DAT_14ca843c8;
              plVar9 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar9;
            UNLOCK();
          } while (bVar10);
        }
      }
    }
  }
LAB_1431fbff9:
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1431fc0be FUN_1431fc0be body=1474 status=ok
// SIG undefined FUN_1431fc0be(void)

void FUN_1431fc0be(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  byte bVar4;
  char cVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  undefined8 *local_b0;
  longlong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  uint local_64;
  undefined1 local_60;
  undefined4 local_5c;
  wchar_t *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 1;
  local_74 = 0;
  uStack_6c = 0;
  local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_60 = 0;
  local_5c = 0;
  local_58 = L"BlackFloat4StructuredBuffer";
  local_50 = 0;
  uStack_48 = 0;
  local_98 = 0x1000000010;
  uStack_90 = CONCAT44(uStack_90._4_4_,0x10109);
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    local_b0 = &local_88;
    local_b8 = (undefined8 *)CONCAT44(local_b8._4_4_,0x70);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,&local_98);
    *(undefined4 *)(local_a0 + 0x18) = 0x70;
    FUN_14002049c(param_2,0);
  }
  else {
    local_b0 = &local_88;
    local_b8 = (undefined8 *)CONCAT44(local_b8._4_4_,0x70);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,&local_98);
    *(undefined4 *)(local_a0 + 0x18) = 0x70;
  }
  plVar10 = (longlong *)(param_1 + 0x10);
  if (plVar10 == &local_a0) {
LAB_1431fc25c:
    lVar3 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_a0 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_a0 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(local_a0 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar3;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar9;
              LOCK();
              bVar11 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar6;
              if (bVar11) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar6;
              if (bVar11) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
    }
  }
  else {
    lVar3 = *plVar10;
    *plVar10 = local_a0;
    local_a0 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar3 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(lVar3 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar3;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar9;
              LOCK();
              bVar11 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar6;
              if (bVar11) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar6;
              if (bVar11) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
      goto LAB_1431fc25c;
    }
  }
  lVar3 = *plVar10;
  cVar5 = *(char *)(param_2 + 0x69);
  if (cVar5 == '\0') {
    FUN_14002049c(param_2,1);
  }
  local_b0 = (undefined8 *)CONCAT44(local_b0._4_4_,1);
  local_b8 = (undefined8 *)CONCAT44(local_b8._4_4_,0x10);
  puVar7 = (undefined8 *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,lVar3,0);
  if (cVar5 == '\0') {
    FUN_14002049c(param_2,0);
  }
  *puVar7 = 0;
  puVar7[1] = 0;
  lVar3 = *plVar10;
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar3);
    FUN_14002049c(param_2,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar3);
  }
  uStack_90 = 0;
  uVar2 = *(uint *)(*plVar10 + 0x28);
  bVar4 = 4;
  if (((uVar2 & 0x10) == 0) && (bVar4 = 2, (uVar2 >> 0x10 & 1) == 0)) {
    bVar4 = ((byte)(uVar2 >> 0xd) & 1) * '\x02' + 1;
  }
  local_98 = (ulonglong)bVar4 << 0x10;
  local_b8 = &local_98;
  (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_a0,param_2);
  plVar9 = (longlong *)(param_1 + 0x18);
  if (plVar9 == &local_a0) {
LAB_1431fc431:
    lVar3 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_a0 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_a0 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(local_a0 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar3;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar9;
              LOCK();
              bVar11 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar6;
              if (bVar11) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar6;
              if (bVar11) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
    }
  }
  else {
    lVar3 = *plVar9;
    *plVar9 = local_a0;
    local_a0 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar3 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(lVar3 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar3;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar9;
              LOCK();
              bVar11 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar6;
              if (bVar11) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar6;
              if (bVar11) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
      goto LAB_1431fc431;
    }
  }
  uStack_90 = 0;
  uVar2 = *(uint *)(*plVar10 + 0x28);
  cVar5 = '\x04';
  if (((uVar2 & 0x10) == 0) && (cVar5 = '\x02', (uVar2 >> 0x10 & 1) == 0)) {
    cVar5 = ((byte)(uVar2 >> 0xd) & 1) * '\x02' + '\x01';
  }
  local_98 = (ulonglong)CONCAT12(cVar5,1);
  local_b8 = &local_98;
  (**(code **)(*DAT_14ca83900 + 0x1c0))(DAT_14ca83900,&local_a0,param_2);
  plVar10 = (longlong *)(param_1 + 0x20);
  if (plVar10 != &local_a0) {
    lVar3 = *plVar10;
    *plVar10 = local_a0;
    local_a0 = 0;
    if (lVar3 == 0) goto LAB_1431fc5bc;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar3 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar4 = *(byte *)(lVar3 + 0xd);
        plVar8 = (longlong *)FUN_14001cc68(0x10,8);
        plVar8[1] = lVar3;
        plVar10 = DAT_14ca843c0;
        plVar9 = DAT_14ca843c8;
        if ((bVar4 & 2) == 0) {
          do {
            *plVar8 = (longlong)plVar10;
            LOCK();
            bVar11 = plVar10 != DAT_14ca843c0;
            plVar9 = plVar8;
            if (bVar11) {
              plVar10 = DAT_14ca843c0;
              plVar9 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar9;
            UNLOCK();
          } while (bVar11);
        }
        else {
          do {
            *plVar8 = (longlong)plVar9;
            LOCK();
            bVar11 = plVar9 != DAT_14ca843c8;
            plVar10 = plVar8;
            if (bVar11) {
              plVar9 = DAT_14ca843c8;
              plVar10 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar10;
            UNLOCK();
          } while (bVar11);
        }
      }
    }
  }
  lVar3 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    puVar1 = (uint *)(local_a0 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_a0 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar4 = *(byte *)(local_a0 + 0xd);
        plVar8 = (longlong *)FUN_14001cc68(0x10,8);
        plVar8[1] = lVar3;
        plVar10 = DAT_14ca843c0;
        plVar9 = DAT_14ca843c8;
        if ((bVar4 & 2) == 0) {
          do {
            *plVar8 = (longlong)plVar10;
            LOCK();
            bVar11 = plVar10 != DAT_14ca843c0;
            plVar9 = plVar8;
            if (bVar11) {
              plVar10 = DAT_14ca843c0;
              plVar9 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar9;
            UNLOCK();
          } while (bVar11);
        }
        else {
          do {
            *plVar8 = (longlong)plVar9;
            LOCK();
            bVar11 = plVar9 != DAT_14ca843c8;
            plVar10 = plVar8;
            if (bVar11) {
              plVar9 = DAT_14ca843c8;
              plVar10 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar10;
            UNLOCK();
          } while (bVar11);
        }
      }
    }
  }
LAB_1431fc5bc:
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1431fc682 FUN_1431fc682 body=1463 status=ok
// SIG undefined FUN_1431fc682(void)

void FUN_1431fc682(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_d8 [32];
  ulonglong *local_b8;
  undefined8 *local_b0;
  longlong local_a0;
  ulonglong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  uint local_64;
  undefined1 local_60;
  undefined4 local_5c;
  wchar_t *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 1;
  local_74 = 0;
  uStack_6c = 0;
  local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_60 = 0;
  local_5c = 0;
  local_58 = L"BlackFloat4VertexBuffer";
  local_50 = 0;
  uStack_48 = 0;
  local_98 = 0x10;
  uStack_90 = CONCAT44(uStack_90._4_4_,0x4109);
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    local_b0 = &local_88;
    local_b8 = (ulonglong *)CONCAT44(local_b8._4_4_,0x70);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,&local_98);
    *(undefined4 *)(local_a0 + 0x18) = 0x70;
    FUN_14002049c(param_2,0);
  }
  else {
    local_b0 = &local_88;
    local_b8 = (ulonglong *)CONCAT44(local_b8._4_4_,0x70);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,&local_98);
    *(undefined4 *)(local_a0 + 0x18) = 0x70;
  }
  plVar10 = (longlong *)(param_1 + 0x10);
  if (plVar10 == &local_a0) {
LAB_1431fc817:
    lVar5 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_a0 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_a0 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_a0 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar5;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar9;
              LOCK();
              bVar11 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar6;
              if (bVar11) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar6;
              if (bVar11) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
    }
  }
  else {
    lVar5 = *plVar10;
    *plVar10 = local_a0;
    local_a0 = 0;
    if (lVar5 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar5 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar5 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar5 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar5;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar9;
              LOCK();
              bVar11 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar6;
              if (bVar11) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar6;
              if (bVar11) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
      goto LAB_1431fc817;
    }
  }
  lVar5 = *plVar10;
  cVar4 = *(char *)(param_2 + 0x69);
  if (cVar4 == '\0') {
    FUN_14002049c(param_2,1);
  }
  local_b0 = (undefined8 *)CONCAT44(local_b0._4_4_,1);
  local_b8 = (ulonglong *)CONCAT44(local_b8._4_4_,0x10);
  puVar7 = (undefined8 *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,lVar5,0);
  if (cVar4 == '\0') {
    FUN_14002049c(param_2,0);
  }
  *puVar7 = 0;
  puVar7[1] = 0;
  lVar5 = *plVar10;
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar5);
    FUN_14002049c(param_2,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar5);
  }
  if ((*plVar10 == 0) || ((*(byte *)(*plVar10 + 0x28) & 0x10) == 0)) {
    local_98._0_3_ = 0x10100;
  }
  else {
    local_98._0_3_ = 0x40000;
  }
  local_98 = (ulonglong)(uint3)local_98;
  uStack_90 = 0;
  local_b8 = &local_98;
  (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_a0,param_2);
  plVar9 = (longlong *)(param_1 + 0x18);
  if (plVar9 == &local_a0) {
LAB_1431fc9e8:
    lVar5 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_a0 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_a0 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_a0 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar5;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar9;
              LOCK();
              bVar11 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar6;
              if (bVar11) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar6;
              if (bVar11) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
    }
  }
  else {
    lVar5 = *plVar9;
    *plVar9 = local_a0;
    local_a0 = 0;
    if (lVar5 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar5 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar5 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar5 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar5;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar9;
              LOCK();
              bVar11 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar6;
              if (bVar11) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar6;
              if (bVar11) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
      goto LAB_1431fc9e8;
    }
  }
  if ((*plVar10 == 0) || ((*(byte *)(*plVar10 + 0x28) & 0x10) == 0)) {
    local_98 = 0x10101;
  }
  else {
    local_98 = 0x40001;
  }
  uStack_90 = 0;
  local_b8 = &local_98;
  (**(code **)(*DAT_14ca83900 + 0x1c0))(DAT_14ca83900,&local_a0,param_2);
  plVar10 = (longlong *)(param_1 + 0x20);
  if (plVar10 != &local_a0) {
    lVar5 = *plVar10;
    *plVar10 = local_a0;
    local_a0 = 0;
    if (lVar5 == 0) goto LAB_1431fcb77;
    LOCK();
    puVar1 = (uint *)(lVar5 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar5 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar5 + 0xd);
        plVar8 = (longlong *)FUN_14001cc68(0x10,8);
        plVar8[1] = lVar5;
        plVar10 = DAT_14ca843c0;
        plVar9 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar8 = (longlong)plVar10;
            LOCK();
            bVar11 = plVar10 != DAT_14ca843c0;
            plVar9 = plVar8;
            if (bVar11) {
              plVar10 = DAT_14ca843c0;
              plVar9 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar9;
            UNLOCK();
          } while (bVar11);
        }
        else {
          do {
            *plVar8 = (longlong)plVar9;
            LOCK();
            bVar11 = plVar9 != DAT_14ca843c8;
            plVar10 = plVar8;
            if (bVar11) {
              plVar9 = DAT_14ca843c8;
              plVar10 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar10;
            UNLOCK();
          } while (bVar11);
        }
      }
    }
  }
  lVar5 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    puVar1 = (uint *)(local_a0 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_a0 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_a0 + 0xd);
        plVar8 = (longlong *)FUN_14001cc68(0x10,8);
        plVar8[1] = lVar5;
        plVar10 = DAT_14ca843c0;
        plVar9 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar8 = (longlong)plVar10;
            LOCK();
            bVar11 = plVar10 != DAT_14ca843c0;
            plVar9 = plVar8;
            if (bVar11) {
              plVar10 = DAT_14ca843c0;
              plVar9 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar9;
            UNLOCK();
          } while (bVar11);
        }
        else {
          do {
            *plVar8 = (longlong)plVar9;
            LOCK();
            bVar11 = plVar9 != DAT_14ca843c8;
            plVar10 = plVar8;
            if (bVar11) {
              plVar9 = DAT_14ca843c8;
              plVar10 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar10;
            UNLOCK();
          } while (bVar11);
        }
      }
    }
  }
LAB_1431fcb77:
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1431fcc3a FUN_1431fcc3a body=1106 status=ok
// SIG undefined FUN_1431fcc3a(void)

void FUN_1431fcc3a(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_d8 [32];
  ulonglong *local_b8;
  undefined8 *local_b0;
  longlong local_a0;
  ulonglong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  uint local_64;
  undefined1 local_60;
  undefined4 local_5c;
  wchar_t *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 1;
  local_74 = 0;
  uStack_6c = 0;
  local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_60 = 0;
  local_5c = 0;
  local_58 = L"WhiteVertexBuffer";
  local_50 = 0;
  uStack_48 = 0;
  local_98 = 0x10;
  uStack_90 = CONCAT44(uStack_90._4_4_,0x4101);
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    local_b0 = &local_88;
    local_b8 = (ulonglong *)CONCAT44(local_b8._4_4_,0x78);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,&local_98);
    *(undefined4 *)(local_a0 + 0x18) = 0x78;
    FUN_14002049c(param_2,0);
  }
  else {
    local_b0 = &local_88;
    local_b8 = (ulonglong *)CONCAT44(local_b8._4_4_,0x78);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,&local_98);
    *(undefined4 *)(local_a0 + 0x18) = 0x78;
  }
  plVar10 = (longlong *)(param_1 + 0x10);
  if (plVar10 == &local_a0) {
LAB_1431fcdcf:
    lVar5 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_a0 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_a0 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_a0 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar5;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar9;
              LOCK();
              bVar11 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar6;
              if (bVar11) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar6;
              if (bVar11) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
    }
  }
  else {
    lVar5 = *plVar10;
    *plVar10 = local_a0;
    local_a0 = 0;
    if (lVar5 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar5 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar5 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar5 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar5;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar9;
              LOCK();
              bVar11 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar6;
              if (bVar11) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar6;
              if (bVar11) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
      goto LAB_1431fcdcf;
    }
  }
  lVar5 = *plVar10;
  cVar4 = *(char *)(param_2 + 0x69);
  if (cVar4 == '\0') {
    FUN_14002049c(param_2,1);
  }
  local_b0 = (undefined8 *)CONCAT44(local_b0._4_4_,1);
  local_b8 = (ulonglong *)CONCAT44(local_b8._4_4_,0x10);
  puVar7 = (undefined4 *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,lVar5,0);
  if (cVar4 == '\0') {
    FUN_14002049c(param_2,0);
  }
  *puVar7 = 0x3f800000;
  puVar7[1] = 0x3f800000;
  puVar7[2] = 0x3f800000;
  puVar7[3] = 0x3f800000;
  lVar5 = *plVar10;
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar5);
    FUN_14002049c(param_2,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar5);
  }
  if ((*plVar10 == 0) || ((*(byte *)(*plVar10 + 0x28) & 0x10) == 0)) {
    local_98._0_3_ = 0x10100;
  }
  else {
    local_98._0_3_ = 0x40000;
  }
  local_98 = (ulonglong)(uint3)local_98;
  uStack_90 = 0;
  local_b8 = &local_98;
  (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_a0,param_2);
  plVar10 = (longlong *)(param_1 + 0x18);
  if (plVar10 != &local_a0) {
    lVar5 = *plVar10;
    *plVar10 = local_a0;
    local_a0 = 0;
    if (lVar5 == 0) goto LAB_1431fcffe;
    LOCK();
    puVar1 = (uint *)(lVar5 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar5 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar5 + 0xd);
        plVar8 = (longlong *)FUN_14001cc68(0x10,8);
        plVar8[1] = lVar5;
        plVar10 = DAT_14ca843c0;
        plVar9 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar8 = (longlong)plVar10;
            LOCK();
            bVar11 = plVar10 != DAT_14ca843c0;
            plVar9 = plVar8;
            if (bVar11) {
              plVar10 = DAT_14ca843c0;
              plVar9 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar9;
            UNLOCK();
          } while (bVar11);
        }
        else {
          do {
            *plVar8 = (longlong)plVar9;
            LOCK();
            bVar11 = plVar9 != DAT_14ca843c8;
            plVar10 = plVar8;
            if (bVar11) {
              plVar9 = DAT_14ca843c8;
              plVar10 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar10;
            UNLOCK();
          } while (bVar11);
        }
      }
    }
  }
  lVar5 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    puVar1 = (uint *)(local_a0 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_a0 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_a0 + 0xd);
        plVar8 = (longlong *)FUN_14001cc68(0x10,8);
        plVar8[1] = lVar5;
        plVar10 = DAT_14ca843c0;
        plVar9 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar8 = (longlong)plVar10;
            LOCK();
            bVar11 = plVar10 != DAT_14ca843c0;
            plVar9 = plVar8;
            if (bVar11) {
              plVar10 = DAT_14ca843c0;
              plVar9 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar9;
            UNLOCK();
          } while (bVar11);
        }
        else {
          do {
            *plVar8 = (longlong)plVar9;
            LOCK();
            bVar11 = plVar9 != DAT_14ca843c8;
            plVar10 = plVar8;
            if (bVar11) {
              plVar9 = DAT_14ca843c8;
              plVar10 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar10;
            UNLOCK();
          } while (bVar11);
        }
      }
    }
  }
LAB_1431fcffe:
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1431fd08e FUN_1431fd08e body=1102 status=ok
// SIG undefined FUN_1431fd08e(void)

void FUN_1431fd08e(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_d8 [32];
  ulonglong *local_b8;
  undefined8 *local_b0;
  longlong local_a0;
  ulonglong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  uint local_64;
  undefined1 local_60;
  undefined4 local_5c;
  wchar_t *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 1;
  local_74 = 0;
  uStack_6c = 0;
  local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_60 = 0;
  local_5c = 0;
  local_58 = L"BlackVertexBuffer";
  local_50 = 0;
  uStack_48 = 0;
  local_98 = 0x10;
  uStack_90 = CONCAT44(uStack_90._4_4_,0x4101);
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    local_b0 = &local_88;
    local_b8 = (ulonglong *)CONCAT44(local_b8._4_4_,0x78);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,&local_98);
    *(undefined4 *)(local_a0 + 0x18) = 0x78;
    FUN_14002049c(param_2,0);
  }
  else {
    local_b0 = &local_88;
    local_b8 = (ulonglong *)CONCAT44(local_b8._4_4_,0x78);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,&local_98);
    *(undefined4 *)(local_a0 + 0x18) = 0x78;
  }
  plVar10 = (longlong *)(param_1 + 0x10);
  if (plVar10 == &local_a0) {
LAB_1431fd223:
    lVar5 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_a0 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_a0 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_a0 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar5;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar9;
              LOCK();
              bVar11 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar6;
              if (bVar11) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar6;
              if (bVar11) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
    }
  }
  else {
    lVar5 = *plVar10;
    *plVar10 = local_a0;
    local_a0 = 0;
    if (lVar5 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar5 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar5 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar5 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar5;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar9;
              LOCK();
              bVar11 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar6;
              if (bVar11) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar6;
              if (bVar11) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
      goto LAB_1431fd223;
    }
  }
  lVar5 = *plVar10;
  cVar4 = *(char *)(param_2 + 0x69);
  if (cVar4 == '\0') {
    FUN_14002049c(param_2,1);
  }
  local_b0 = (undefined8 *)CONCAT44(local_b0._4_4_,1);
  local_b8 = (ulonglong *)CONCAT44(local_b8._4_4_,0x10);
  puVar7 = (undefined8 *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,lVar5,0);
  if (cVar4 == '\0') {
    FUN_14002049c(param_2,0);
  }
  *puVar7 = 0;
  puVar7[1] = 0;
  lVar5 = *plVar10;
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar5);
    FUN_14002049c(param_2,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar5);
  }
  if ((*plVar10 == 0) || ((*(byte *)(*plVar10 + 0x28) & 0x10) == 0)) {
    local_98._0_3_ = 0x10100;
  }
  else {
    local_98._0_3_ = 0x40000;
  }
  local_98 = (ulonglong)(uint3)local_98;
  uStack_90 = 0;
  local_b8 = &local_98;
  (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_a0,param_2);
  plVar10 = (longlong *)(param_1 + 0x18);
  if (plVar10 != &local_a0) {
    lVar5 = *plVar10;
    *plVar10 = local_a0;
    local_a0 = 0;
    if (lVar5 == 0) goto LAB_1431fd44e;
    LOCK();
    puVar1 = (uint *)(lVar5 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar5 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar5 + 0xd);
        plVar8 = (longlong *)FUN_14001cc68(0x10,8);
        plVar8[1] = lVar5;
        plVar10 = DAT_14ca843c0;
        plVar9 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar8 = (longlong)plVar10;
            LOCK();
            bVar11 = plVar10 != DAT_14ca843c0;
            plVar9 = plVar8;
            if (bVar11) {
              plVar10 = DAT_14ca843c0;
              plVar9 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar9;
            UNLOCK();
          } while (bVar11);
        }
        else {
          do {
            *plVar8 = (longlong)plVar9;
            LOCK();
            bVar11 = plVar9 != DAT_14ca843c8;
            plVar10 = plVar8;
            if (bVar11) {
              plVar9 = DAT_14ca843c8;
              plVar10 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar10;
            UNLOCK();
          } while (bVar11);
        }
      }
    }
  }
  lVar5 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    puVar1 = (uint *)(local_a0 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_a0 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_a0 + 0xd);
        plVar8 = (longlong *)FUN_14001cc68(0x10,8);
        plVar8[1] = lVar5;
        plVar10 = DAT_14ca843c0;
        plVar9 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar8 = (longlong)plVar10;
            LOCK();
            bVar11 = plVar10 != DAT_14ca843c0;
            plVar9 = plVar8;
            if (bVar11) {
              plVar10 = DAT_14ca843c0;
              plVar9 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar9;
            UNLOCK();
          } while (bVar11);
        }
        else {
          do {
            *plVar8 = (longlong)plVar9;
            LOCK();
            bVar11 = plVar9 != DAT_14ca843c8;
            plVar10 = plVar8;
            if (bVar11) {
              plVar9 = DAT_14ca843c8;
              plVar10 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar10;
            UNLOCK();
          } while (bVar11);
        }
      }
    }
  }
LAB_1431fd44e:
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1431fd4de FUN_1431fd4de body=1192 status=ok
// SIG undefined FUN_1431fd4de(void)

void FUN_1431fd4de(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_d8 [40];
  longlong local_b0;
  undefined **local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  uint uStack_80;
  uint local_7c;
  undefined4 local_78;
  undefined1 *local_74;
  undefined4 local_6c;
  undefined2 local_68;
  undefined1 local_66;
  undefined2 local_65;
  undefined1 local_63;
  undefined4 local_60;
  wchar_t *local_58;
  undefined ***local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (DAT_14ca84e19 == '\x01') {
    local_a8 = &PTR_FUN_14a387780;
    bVar4 = (byte)DAT_14c760da4 & 0x1f;
    local_a0 = 0;
    FUN_1446f470e(&local_48,L"FBlackVolumeTexture",1);
    local_66 = 2;
    local_98 = 8;
    local_65 = 2;
    local_74 = &DAT_100000001;
    local_6c = 0x10001;
    local_68 = 0x101;
    local_90 = 1;
    local_78 = 0;
    uStack_8c = 0;
    uStack_88 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    local_63 = 0xff;
    local_58 = L"BlackVolumeTexture3D";
    uStack_40 = 0;
    local_60 = 0x70;
    local_7c = ~(-1 << bVar4);
    local_50 = &local_a8;
    (**(code **)(*DAT_14ca83900 + 0x1a0))(DAT_14ca83900,&local_b0,&DAT_14ca85100,&local_98);
    plVar8 = (longlong *)(param_1 + 0x10);
    if (plVar8 != &local_b0) {
      lVar3 = *plVar8;
      *plVar8 = local_b0;
      local_b0 = 0;
      if (lVar3 == 0) goto LAB_1431fd84c;
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar3 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(lVar3 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar3;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar8;
              LOCK();
              bVar9 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar5;
              if (bVar9) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar9);
          }
          else {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar9 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar5;
              if (bVar9) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar9);
          }
        }
      }
    }
    lVar3 = local_b0;
    if (local_b0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_b0 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_b0 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(local_b0 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar3;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar8;
              LOCK();
              bVar9 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar5;
              if (bVar9) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar9);
          }
          else {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar9 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar5;
              if (bVar9) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar9);
          }
        }
      }
    }
  }
  else {
    local_50 = &local_a8;
    local_a8 = &PTR_FUN_14a387780;
    local_a0 = 0;
    local_7c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_48 = 0;
    uStack_40 = 0;
    local_66 = 0;
    local_98 = 8;
    local_65 = 2;
    local_74 = &DAT_100000001;
    local_6c = 0x10001;
    local_68 = 0x101;
    local_90 = 1;
    local_78 = 0;
    uStack_8c = 0;
    uStack_88 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    local_63 = 0xff;
    local_58 = L"BlackVolumeTexture2D";
    local_60 = 0x70;
    (**(code **)(*DAT_14ca83900 + 0x1a0))(DAT_14ca83900,&local_b0,&DAT_14ca85100);
    plVar8 = (longlong *)(param_1 + 0x10);
    if (plVar8 != &local_b0) {
      lVar3 = *plVar8;
      *plVar8 = local_b0;
      local_b0 = 0;
      if (lVar3 == 0) goto LAB_1431fd84c;
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar3 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(lVar3 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar3;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar8;
              LOCK();
              bVar9 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar5;
              if (bVar9) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar9);
          }
          else {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar9 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar5;
              if (bVar9) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar9);
          }
        }
      }
    }
    lVar3 = local_b0;
    if (local_b0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_b0 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_b0 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(local_b0 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar3;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar8;
              LOCK();
              bVar9 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar5;
              if (bVar9) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar9);
          }
          else {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar9 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar5;
              if (bVar9) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar9);
          }
        }
      }
    }
  }
LAB_1431fd84c:
  local_90 = 0;
  uStack_8c = 0x7f7fffff;
  local_98 = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_80 = uStack_80 & 0xffffff00;
  lVar6 = FUN_1405d51a2();
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (lVar3 != lVar6) {
    *(longlong *)(param_1 + 0x18) = lVar6;
    if (lVar6 != 0) {
      LOCK();
      *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
      UNLOCK();
    }
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar3 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(lVar3 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar3;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar8;
              LOCK();
              bVar9 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar5;
              if (bVar9) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar9);
          }
          else {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar9 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar5;
              if (bVar9) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar9);
          }
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1431fd988 FUN_1431fd988 body=1195 status=ok
// SIG undefined FUN_1431fd988(void)

void FUN_1431fd988(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined **local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint uStack_78;
  uint local_74;
  undefined4 local_70;
  undefined1 *local_6c;
  undefined4 local_64;
  undefined2 local_60;
  undefined1 local_5e;
  undefined2 local_5d;
  undefined1 local_5b;
  undefined4 local_58;
  wchar_t *local_50;
  undefined ***local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (DAT_14ca84e19 == '\x01') {
    bVar4 = (byte)DAT_14c760da4 & 0x1f;
    local_a0 = &PTR_FUN_14a387780;
    local_98 = 0xff000000;
    FUN_1446f470e(&local_40,L"FBlackVolumeTexture",1);
    local_5e = 2;
    local_90 = 8;
    local_5d = 2;
    local_6c = &DAT_100000001;
    local_64 = 0x10001;
    local_60 = 0x101;
    local_88 = 1;
    local_70 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_78 = 0;
    local_5b = 0xff;
    local_50 = L"BlackVolumeTexture3D";
    uStack_38 = 0;
    local_58 = 0x70;
    local_74 = ~(-1 << bVar4);
    local_48 = &local_a0;
    (**(code **)(*DAT_14ca83900 + 0x1a0))(DAT_14ca83900,&local_a8,&DAT_14ca85100,&local_90);
    plVar8 = (longlong *)(param_1 + 0x10);
    if (plVar8 != &local_a8) {
      lVar3 = *plVar8;
      *plVar8 = local_a8;
      local_a8 = 0;
      if (lVar3 == 0) goto LAB_1431fdcfb;
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar3 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(lVar3 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar3;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar8;
              LOCK();
              bVar9 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar5;
              if (bVar9) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar9);
          }
          else {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar9 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar5;
              if (bVar9) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar9);
          }
        }
      }
    }
    lVar3 = local_a8;
    if (local_a8 != 0) {
      LOCK();
      puVar1 = (uint *)(local_a8 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_a8 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(local_a8 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar3;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar8;
              LOCK();
              bVar9 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar5;
              if (bVar9) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar9);
          }
          else {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar9 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar5;
              if (bVar9) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar9);
          }
        }
      }
    }
  }
  else {
    local_48 = &local_a0;
    local_a0 = &PTR_FUN_14a387780;
    local_98 = 0xff000000;
    local_74 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_40 = 0;
    uStack_38 = 0;
    local_5e = 0;
    local_90 = 8;
    local_5d = 2;
    local_6c = &DAT_100000001;
    local_64 = 0x10001;
    local_60 = 0x101;
    local_88 = 1;
    local_70 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_78 = 0;
    local_5b = 0xff;
    local_50 = L"BlackVolumeTexture2D";
    local_58 = 0x70;
    (**(code **)(*DAT_14ca83900 + 0x1a0))(DAT_14ca83900,&local_a8,&DAT_14ca85100);
    plVar8 = (longlong *)(param_1 + 0x10);
    if (plVar8 != &local_a8) {
      lVar3 = *plVar8;
      *plVar8 = local_a8;
      local_a8 = 0;
      if (lVar3 == 0) goto LAB_1431fdcfb;
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar3 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(lVar3 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar3;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar8;
              LOCK();
              bVar9 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar5;
              if (bVar9) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar9);
          }
          else {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar9 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar5;
              if (bVar9) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar9);
          }
        }
      }
    }
    lVar3 = local_a8;
    if (local_a8 != 0) {
      LOCK();
      puVar1 = (uint *)(local_a8 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_a8 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(local_a8 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar3;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar8;
              LOCK();
              bVar9 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar5;
              if (bVar9) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar9);
          }
          else {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar9 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar5;
              if (bVar9) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar9);
          }
        }
      }
    }
  }
LAB_1431fdcfb:
  local_88 = 0;
  uStack_84 = 0x7f7fffff;
  local_90 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_78 = uStack_78 & 0xffffff00;
  lVar6 = FUN_1405d51a2();
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (lVar3 != lVar6) {
    *(longlong *)(param_1 + 0x18) = lVar6;
    if (lVar6 != 0) {
      LOCK();
      *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
      UNLOCK();
    }
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar3 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(lVar3 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar3;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar8;
              LOCK();
              bVar9 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar5;
              if (bVar9) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar9);
          }
          else {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar9 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar5;
              if (bVar9) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar9);
          }
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1431fde34 FUN_1431fde34 body=1192 status=ok
// SIG undefined FUN_1431fde34(void)

void FUN_1431fde34(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_d8 [40];
  longlong local_b0;
  undefined **local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  uint uStack_80;
  uint local_7c;
  undefined4 local_78;
  undefined1 *local_74;
  undefined4 local_6c;
  undefined2 local_68;
  undefined1 local_66;
  undefined2 local_65;
  undefined1 local_63;
  undefined4 local_60;
  wchar_t *local_58;
  undefined ***local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (DAT_14ca84e19 == '\x01') {
    local_a8 = &PTR_FUN_14a387780;
    bVar4 = (byte)DAT_14c760da4 & 0x1f;
    local_a0 = 0;
    FUN_1446f470e(&local_48,L"FBlackVolumeTexture",1);
    local_66 = 2;
    local_98 = 8;
    local_65 = 0x3c;
    local_74 = &DAT_100000001;
    local_6c = 0x10001;
    local_68 = 0x101;
    local_90 = 1;
    local_78 = 0;
    uStack_8c = 0;
    uStack_88 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    local_63 = 0xff;
    local_58 = L"BlackVolumeTexture3D";
    uStack_40 = 0;
    local_60 = 0x70;
    local_7c = ~(-1 << bVar4);
    local_50 = &local_a8;
    (**(code **)(*DAT_14ca83900 + 0x1a0))(DAT_14ca83900,&local_b0,&DAT_14ca85100,&local_98);
    plVar8 = (longlong *)(param_1 + 0x10);
    if (plVar8 != &local_b0) {
      lVar3 = *plVar8;
      *plVar8 = local_b0;
      local_b0 = 0;
      if (lVar3 == 0) goto LAB_1431fe1a2;
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar3 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(lVar3 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar3;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar8;
              LOCK();
              bVar9 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar5;
              if (bVar9) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar9);
          }
          else {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar9 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar5;
              if (bVar9) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar9);
          }
        }
      }
    }
    lVar3 = local_b0;
    if (local_b0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_b0 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_b0 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(local_b0 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar3;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar8;
              LOCK();
              bVar9 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar5;
              if (bVar9) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar9);
          }
          else {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar9 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar5;
              if (bVar9) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar9);
          }
        }
      }
    }
  }
  else {
    local_50 = &local_a8;
    local_a8 = &PTR_FUN_14a387780;
    local_a0 = 0;
    local_7c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_48 = 0;
    uStack_40 = 0;
    local_66 = 0;
    local_98 = 8;
    local_65 = 0x3c;
    local_74 = &DAT_100000001;
    local_6c = 0x10001;
    local_68 = 0x101;
    local_90 = 1;
    local_78 = 0;
    uStack_8c = 0;
    uStack_88 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    local_63 = 0xff;
    local_58 = L"BlackVolumeTexture2D";
    local_60 = 0x70;
    (**(code **)(*DAT_14ca83900 + 0x1a0))(DAT_14ca83900,&local_b0,&DAT_14ca85100);
    plVar8 = (longlong *)(param_1 + 0x10);
    if (plVar8 != &local_b0) {
      lVar3 = *plVar8;
      *plVar8 = local_b0;
      local_b0 = 0;
      if (lVar3 == 0) goto LAB_1431fe1a2;
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar3 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(lVar3 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar3;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar8;
              LOCK();
              bVar9 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar5;
              if (bVar9) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar9);
          }
          else {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar9 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar5;
              if (bVar9) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar9);
          }
        }
      }
    }
    lVar3 = local_b0;
    if (local_b0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_b0 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_b0 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(local_b0 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar3;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar8;
              LOCK();
              bVar9 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar5;
              if (bVar9) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar9);
          }
          else {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar9 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar5;
              if (bVar9) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar9);
          }
        }
      }
    }
  }
LAB_1431fe1a2:
  local_90 = 0;
  uStack_8c = 0x7f7fffff;
  local_98 = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_80 = uStack_80 & 0xffffff00;
  lVar6 = FUN_1405d51a2();
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (lVar3 != lVar6) {
    *(longlong *)(param_1 + 0x18) = lVar6;
    if (lVar6 != 0) {
      LOCK();
      *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
      UNLOCK();
    }
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar3 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(lVar3 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar3;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar8;
              LOCK();
              bVar9 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar5;
              if (bVar9) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar9);
          }
          else {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar9 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar5;
              if (bVar9) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar9);
          }
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1431fe2de FUN_1431fe2de body=716 status=ok
// SIG undefined FUN_1431fe2de(void)

void FUN_1431fe2de(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined **local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint uStack_78;
  uint local_74;
  undefined4 local_70;
  undefined1 *local_6c;
  undefined4 local_64;
  undefined2 local_60;
  undefined1 local_5e;
  undefined2 local_5d;
  undefined1 local_5b;
  undefined4 local_58;
  wchar_t *local_50;
  undefined ***local_48;
  undefined1 local_40 [8];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a0 = &PTR_FUN_14a387780;
  bVar4 = (byte)DAT_14c760da4 & 0x1f;
  local_98 = 0;
  FUN_1446f470e(local_40,L"FBlackArrayTexture",1);
  local_5e = 1;
  local_90 = 8;
  local_5d = 2;
  local_6c = &DAT_100000001;
  local_64 = 0x10001;
  local_60 = 0x101;
  local_88 = 1;
  local_70 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  local_5b = 0xff;
  local_50 = L"BlackArrayTexture";
  local_38 = 0;
  local_58 = 0x70;
  local_74 = ~(-1 << bVar4);
  local_48 = &local_a0;
  (**(code **)(*DAT_14ca83900 + 0x1a0))(DAT_14ca83900,&local_a8,&DAT_14ca85100,&local_90);
  plVar8 = (longlong *)(param_1 + 0x10);
  if (plVar8 != &local_a8) {
    lVar3 = *plVar8;
    *plVar8 = local_a8;
    local_a8 = 0;
    if (lVar3 == 0) goto LAB_1431fe4a6;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar3 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar4 = *(byte *)(lVar3 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar3;
        plVar8 = DAT_14ca843c0;
        plVar7 = DAT_14ca843c8;
        if ((bVar4 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar8;
            LOCK();
            bVar9 = plVar8 != DAT_14ca843c0;
            plVar7 = plVar5;
            if (bVar9) {
              plVar8 = DAT_14ca843c0;
              plVar7 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar7;
            UNLOCK();
          } while (bVar9);
        }
        else {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar9 = plVar7 != DAT_14ca843c8;
            plVar8 = plVar5;
            if (bVar9) {
              plVar7 = DAT_14ca843c8;
              plVar8 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar8;
            UNLOCK();
          } while (bVar9);
        }
      }
    }
  }
  lVar3 = local_a8;
  if (local_a8 != 0) {
    LOCK();
    puVar1 = (uint *)(local_a8 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_a8 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar4 = *(byte *)(local_a8 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar3;
        plVar8 = DAT_14ca843c0;
        plVar7 = DAT_14ca843c8;
        if ((bVar4 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar8;
            LOCK();
            bVar9 = plVar8 != DAT_14ca843c0;
            plVar7 = plVar5;
            if (bVar9) {
              plVar8 = DAT_14ca843c0;
              plVar7 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar7;
            UNLOCK();
          } while (bVar9);
        }
        else {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar9 = plVar7 != DAT_14ca843c8;
            plVar8 = plVar5;
            if (bVar9) {
              plVar7 = DAT_14ca843c8;
              plVar8 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar8;
            UNLOCK();
          } while (bVar9);
        }
      }
    }
  }
LAB_1431fe4a6:
  local_90 = 0;
  local_88 = 0;
  uStack_84 = 0x7f7fffff;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_78 = uStack_78 & 0xffffff00;
  lVar6 = FUN_1405d51a2();
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (lVar3 != lVar6) {
    *(longlong *)(param_1 + 0x18) = lVar6;
    if (lVar6 != 0) {
      LOCK();
      *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
      UNLOCK();
    }
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar3 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(lVar3 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar3;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar8;
              LOCK();
              bVar9 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar5;
              if (bVar9) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar9);
          }
          else {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar9 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar5;
              if (bVar9) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar9);
          }
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1431fe5ac FUN_1431fe5ac body=1130 status=ok
// SIG undefined FUN_1431fe5ac(void)

void FUN_1431fe5ac(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 *_Dst;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  undefined8 *puVar10;
  bool bVar11;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined4 local_130;
  uint local_128;
  undefined8 *local_120;
  undefined1 local_118;
  longlong local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  uint local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined2 local_dc;
  undefined2 local_da;
  undefined1 local_d8;
  undefined1 local_d7;
  undefined1 local_d6;
  undefined1 local_d5;
  undefined1 local_d4;
  undefined1 local_d3;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  uint local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined8 local_84;
  undefined2 local_7c;
  undefined2 local_7a;
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76;
  undefined1 local_75;
  undefined1 local_74;
  undefined1 local_73;
  int local_70;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  FUN_145c221da(&local_a8,L"SolidColorCube",1,*(undefined1 *)(param_1 + 0x49));
  local_a8 = 8;
  FUN_1446f470e(&local_110,L"FSolidColorTextureCube",1);
  uStack_58 = local_110;
  lVar4 = uStack_58;
  local_d6 = local_76;
  local_108 = local_a8;
  local_d5 = local_75;
  local_d4 = local_74;
  local_e4 = local_84;
  local_dc = local_7c;
  local_da = local_7a;
  local_d8 = local_78;
  local_d7 = local_77;
  local_100 = local_a0;
  uStack_f8 = uStack_98;
  local_f0 = local_90;
  local_e8 = local_88;
  local_d3 = local_73;
  local_ec = local_8c;
  uStack_58._0_4_ = (undefined4)local_110;
  uStack_58._4_4_ = (undefined4)((ulonglong)local_110 >> 0x20);
  local_c0 = local_60;
  uStack_bc = uStack_5c;
  uStack_b8 = (undefined4)uStack_58;
  uStack_b4 = uStack_58._4_4_;
  local_b0 = local_50;
  if (local_70 == 0) {
    puVar10 = &local_a8;
    local_70 = FUN_1431edf91(local_a8,CONCAT71((int7)((ulonglong)&local_100 >> 8),
                                               CONCAT44(uStack_5c,local_60) != 0));
    lVar6 = *DAT_14ca83900;
  }
  else {
    lVar6 = *DAT_14ca83900;
    puVar10 = &local_108;
    uStack_58 = lVar4;
  }
  (**(code **)(lVar6 + 0x1a0))(DAT_14ca83900,&local_110,&DAT_14ca85100,puVar10);
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (lVar4 != local_110) {
    *(longlong *)(param_1 + 0x10) = local_110;
    if (local_110 != 0) {
      LOCK();
      *(int *)(local_110 + 8) = *(int *)(local_110 + 8) + 1;
      UNLOCK();
    }
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
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar5;
              if (bVar11) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar11 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar5;
              if (bVar11) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
    }
  }
  iVar9 = 0;
  do {
    local_130 = 0;
    local_138 = 0;
    local_118 = 0;
    local_128 = 1;
    local_120 = &local_a8;
    _Dst = (undefined4 *)
           (**(code **)(*DAT_14ca83900 + 0x470))(DAT_14ca83900,&DAT_14ca85100,local_110,iVar9);
    if (*(char *)(param_1 + 0x48) == '\x01') {
      memset(_Dst,0,(longlong)
                    *(int *)((longlong)&DAT_14c873428 +
                            (ulonglong)((uint)*(byte *)(param_1 + 0x49) * 0x30)));
    }
    else {
      *_Dst = *(undefined4 *)(param_1 + 0x4c);
    }
    local_130 = 0;
    local_138 = 0;
    local_128 = local_128 & 0xffffff00;
    (**(code **)(*DAT_14ca83900 + 0x478))(DAT_14ca83900,&DAT_14ca85100,local_110,iVar9);
    iVar9 = iVar9 + 1;
  } while (iVar9 != 6);
  local_a0 = 0x7f7fffff00000000;
  local_a8 = 0;
  uStack_98 = 0;
  local_90 = local_90 & 0xffffff00;
  lVar6 = FUN_1405d51a2();
  lVar4 = *(longlong *)(param_1 + 0x18);
  if (lVar4 != lVar6) {
    *(longlong *)(param_1 + 0x18) = lVar6;
    if (lVar6 != 0) {
      LOCK();
      *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
      UNLOCK();
    }
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
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar5;
              if (bVar11) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar11 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar5;
              if (bVar11) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
    }
  }
  if (local_110 != 0) {
    LOCK();
    puVar1 = (uint *)(local_110 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_110 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_110 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = local_110;
        plVar8 = DAT_14ca843c0;
        plVar7 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar8;
            LOCK();
            bVar11 = plVar8 != DAT_14ca843c0;
            plVar7 = plVar5;
            if (bVar11) {
              plVar8 = DAT_14ca843c0;
              plVar7 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar7;
            UNLOCK();
          } while (bVar11);
        }
        else {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar11 = plVar7 != DAT_14ca843c8;
            plVar8 = plVar5;
            if (bVar11) {
              plVar7 = DAT_14ca843c8;
              plVar8 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar8;
            UNLOCK();
          } while (bVar11);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1431fea18 FUN_1431fea18 body=1122 status=ok
// SIG undefined FUN_1431fea18(void)

void FUN_1431fea18(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  int iVar12;
  undefined8 *puVar13;
  bool bVar14;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined4 local_140;
  uint local_138;
  undefined8 *local_130;
  undefined1 local_128;
  longlong local_118;
  longlong local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  uint local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined2 local_dc;
  undefined2 local_da;
  undefined1 local_d8;
  undefined1 local_d7;
  undefined1 local_d6;
  undefined1 local_d5;
  undefined1 local_d4;
  undefined1 local_d3;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  uint local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined8 local_84;
  undefined2 local_7c;
  undefined2 local_7a;
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76;
  undefined1 local_75;
  undefined1 local_74;
  undefined1 local_73;
  int local_70;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_148 = CONCAT31(local_148._1_3_,2);
  local_118 = param_1;
  FUN_146310496(&local_a8,L"BlackCubeArray",1,1);
  local_a8 = 8;
  FUN_1446f470e(&local_110,L"FBlackCubeArrayTexture",1);
  uStack_58 = local_110;
  lVar4 = uStack_58;
  local_d6 = local_76;
  local_108 = local_a8;
  local_d5 = local_75;
  local_d4 = local_74;
  local_e4 = local_84;
  local_dc = local_7c;
  local_da = local_7a;
  local_d8 = local_78;
  local_d7 = local_77;
  local_100 = local_a0;
  uStack_f8 = uStack_98;
  local_f0 = local_90;
  local_e8 = local_88;
  local_d3 = local_73;
  local_ec = local_8c;
  uStack_58._0_4_ = (undefined4)local_110;
  uStack_58._4_4_ = (undefined4)((ulonglong)local_110 >> 0x20);
  local_c0 = local_60;
  uStack_bc = uStack_5c;
  uStack_b8 = (undefined4)uStack_58;
  uStack_b4 = uStack_58._4_4_;
  local_b0 = local_50;
  if (local_70 == 0) {
    puVar13 = &local_a8;
    local_70 = FUN_1431edf91(local_a8,CONCAT44(uStack_5c,local_60) != 0);
    lVar5 = *DAT_14ca83900;
  }
  else {
    lVar5 = *DAT_14ca83900;
    puVar13 = &local_108;
    uStack_58 = lVar4;
  }
  (**(code **)(lVar5 + 0x1a0))(DAT_14ca83900,&local_110,&DAT_14ca85100,puVar13);
  lVar4 = local_118;
  plVar11 = (longlong *)(local_118 + 0x10);
  if (plVar11 != &local_110) {
    lVar5 = *plVar11;
    *plVar11 = local_110;
    local_110 = 0;
    if (lVar5 == 0) goto LAB_1431fecf8;
    LOCK();
    puVar1 = (uint *)(lVar5 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar5 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar5 + 0xd);
        plVar6 = (longlong *)FUN_14001cc68(0x10,8);
        plVar6[1] = lVar5;
        plVar10 = DAT_14ca843c0;
        plVar9 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar6 = (longlong)plVar10;
            LOCK();
            bVar14 = plVar10 != DAT_14ca843c0;
            plVar9 = plVar6;
            if (bVar14) {
              plVar10 = DAT_14ca843c0;
              plVar9 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar9;
            UNLOCK();
          } while (bVar14);
        }
        else {
          do {
            *plVar6 = (longlong)plVar9;
            LOCK();
            bVar14 = plVar9 != DAT_14ca843c8;
            plVar10 = plVar6;
            if (bVar14) {
              plVar9 = DAT_14ca843c8;
              plVar10 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar10;
            UNLOCK();
          } while (bVar14);
        }
      }
    }
  }
  lVar5 = local_110;
  if (local_110 != 0) {
    LOCK();
    puVar1 = (uint *)(local_110 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_110 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_110 + 0xd);
        plVar6 = (longlong *)FUN_14001cc68(0x10,8);
        plVar6[1] = lVar5;
        plVar10 = DAT_14ca843c0;
        plVar9 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar6 = (longlong)plVar10;
            LOCK();
            bVar14 = plVar10 != DAT_14ca843c0;
            plVar9 = plVar6;
            if (bVar14) {
              plVar10 = DAT_14ca843c0;
              plVar9 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar9;
            UNLOCK();
          } while (bVar14);
        }
        else {
          do {
            *plVar6 = (longlong)plVar9;
            LOCK();
            bVar14 = plVar9 != DAT_14ca843c8;
            plVar10 = plVar6;
            if (bVar14) {
              plVar9 = DAT_14ca843c8;
              plVar10 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar10;
            UNLOCK();
          } while (bVar14);
        }
      }
    }
  }
LAB_1431fecf8:
  iVar12 = 0;
  do {
    local_128 = 0;
    local_140 = 0;
    local_148 = 0;
    local_138 = 1;
    local_130 = &local_a8;
    puVar7 = (undefined4 *)
             (**(code **)(*DAT_14ca83900 + 0x470))(DAT_14ca83900,&DAT_14ca85100,*plVar11,iVar12);
    *puVar7 = 0;
    local_138 = local_138 & 0xffffff00;
    local_140 = 0;
    local_148 = 0;
    (**(code **)(*DAT_14ca83900 + 0x478))(DAT_14ca83900,&DAT_14ca85100,*plVar11,iVar12);
    iVar12 = iVar12 + 1;
  } while (iVar12 != 6);
  local_a0 = 0x7f7fffff00000000;
  local_a8 = 0;
  uStack_98 = 0;
  local_90 = local_90 & 0xffffff00;
  lVar8 = FUN_1405d51a2();
  lVar5 = *(longlong *)(lVar4 + 0x18);
  if (lVar5 != lVar8) {
    *(longlong *)(lVar4 + 0x18) = lVar8;
    if (lVar8 != 0) {
      LOCK();
      *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
      UNLOCK();
    }
    if (lVar5 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar5 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar5 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar5 + 0xd);
          plVar9 = (longlong *)FUN_14001cc68(0x10,8);
          plVar9[1] = lVar5;
          plVar11 = DAT_14ca843c0;
          plVar10 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar9 = (longlong)plVar11;
              LOCK();
              bVar14 = plVar11 != DAT_14ca843c0;
              plVar10 = plVar9;
              if (bVar14) {
                plVar11 = DAT_14ca843c0;
                plVar10 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar10;
              UNLOCK();
            } while (bVar14);
          }
          else {
            do {
              *plVar9 = (longlong)plVar10;
              LOCK();
              bVar14 = plVar10 != DAT_14ca843c8;
              plVar11 = plVar9;
              if (bVar14) {
                plVar10 = DAT_14ca843c8;
                plVar11 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar11;
              UNLOCK();
            } while (bVar14);
          }
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1431fee7c FUN_1431fee7c body=1219 status=ok
// SIG undefined FUN_1431fee7c(void)

void FUN_1431fee7c(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_118 [32];
  longlong *local_f8;
  undefined1 *local_f0;
  undefined1 local_e8;
  undefined1 local_e0;
  undefined8 local_d8;
  longlong local_c8;
  undefined1 local_bc [4];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint uStack_88;
  uint local_84;
  undefined4 local_80;
  undefined1 *local_7c;
  undefined4 local_74;
  undefined2 local_70;
  undefined1 local_6e;
  undefined2 local_6d;
  undefined1 local_6b;
  undefined4 local_68;
  wchar_t *local_60;
  undefined8 local_58;
  undefined1 local_50 [8];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  bVar3 = (byte)DAT_14c760da4 & 0x1f;
  FUN_1446f470e(local_50,L"FUintTexture",1);
  local_6e = 0;
  local_a0 = 8;
  local_6d = 0x30;
  local_7c = &DAT_100000001;
  local_74 = 0x10001;
  local_70 = 0x101;
  local_98 = 1;
  local_80 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  uStack_88 = 0;
  local_6b = 0xff;
  local_60 = L"UintTexture";
  local_58 = 0;
  local_48 = 0;
  local_68 = 0x70;
  local_84 = ~(-1 << bVar3);
  (**(code **)(*DAT_14ca83900 + 0x1a0))(DAT_14ca83900,&local_b8,&DAT_14ca85100,&local_a0);
  plVar10 = (longlong *)(param_1 + 0x10);
  if (plVar10 == &local_b8) {
LAB_1431fef63:
    lVar7 = local_b8;
    if (local_b8 != 0) {
      LOCK();
      puVar1 = (uint *)(local_b8 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_b8 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_b8 + 0xd);
          plVar4 = (longlong *)FUN_14001cc68(0x10,8);
          plVar4[1] = lVar7;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar4 = (longlong)plVar9;
              LOCK();
              bVar11 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar4;
              if (bVar11) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar4 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar4;
              if (bVar11) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
    }
  }
  else {
    lVar7 = *plVar10;
    *plVar10 = local_b8;
    local_b8 = 0;
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
          plVar4 = (longlong *)FUN_14001cc68(0x10,8);
          plVar4[1] = lVar7;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar4 = (longlong)plVar9;
              LOCK();
              bVar11 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar4;
              if (bVar11) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar4 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar4;
              if (bVar11) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
      goto LAB_1431fef63;
    }
  }
  local_d8 = 0;
  local_e0 = 1;
  local_e8 = 0;
  local_f0 = local_bc;
  local_f8 = (longlong *)CONCAT44(local_f8._4_4_,1);
  uVar5 = (**(code **)(*DAT_14ca83900 + 0x430))
                    (DAT_14ca83900,&DAT_14ca85100,*(undefined8 *)(param_1 + 0x10),0);
  FUN_147427262(uVar5);
  local_f0 = (undefined1 *)CONCAT71(local_f0._1_7_,1);
  local_f8 = (longlong *)((ulonglong)local_f8 & 0xffffffffffffff00);
  (**(code **)(*DAT_14ca83900 + 0x438))
            (DAT_14ca83900,&DAT_14ca85100,*(undefined8 *)(param_1 + 0x10),0);
  local_a0 = 0;
  local_98 = 0;
  uStack_94 = 0x7f7fffff;
  uStack_90 = 0;
  uStack_8c = 0;
  uStack_88 = uStack_88 & 0xffffff00;
  lVar6 = FUN_1405d51a2();
  lVar7 = *(longlong *)(param_1 + 0x18);
  if (lVar7 != lVar6) {
    *(longlong *)(param_1 + 0x18) = lVar6;
    if (lVar6 != 0) {
      LOCK();
      *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
      UNLOCK();
    }
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
          plVar4 = (longlong *)FUN_14001cc68(0x10,8);
          plVar4[1] = lVar7;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar4 = (longlong)plVar9;
              LOCK();
              bVar11 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar4;
              if (bVar11) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar4 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar4;
              if (bVar11) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
    }
  }
  plVar10 = (longlong *)*plVar10;
  uStack_b0 = 0;
  local_b8 = 2;
  lVar7 = (**(code **)(*plVar10 + 8))(plVar10);
  if (*(byte *)(lVar7 + 0x32) < 5) {
    local_b8._0_3_ =
         CONCAT12((char)(0x4030502010 >> ((*(byte *)(lVar7 + 0x32) & 7) << 3)),(undefined2)local_b8)
    ;
  }
  local_b8._0_5_ = CONCAT23(0x100,(undefined3)local_b8);
  local_f8 = &local_b8;
  (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_c8,param_2,plVar10);
  plVar10 = (longlong *)(param_1 + 0x48);
  if (plVar10 != &local_c8) {
    lVar7 = *plVar10;
    *plVar10 = local_c8;
    local_c8 = 0;
    if (lVar7 == 0) goto LAB_1431ff22b;
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
            bVar11 = plVar10 != DAT_14ca843c0;
            plVar9 = plVar8;
            if (bVar11) {
              plVar10 = DAT_14ca843c0;
              plVar9 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar9;
            UNLOCK();
          } while (bVar11);
        }
        else {
          do {
            *plVar8 = (longlong)plVar9;
            LOCK();
            bVar11 = plVar9 != DAT_14ca843c8;
            plVar10 = plVar8;
            if (bVar11) {
              plVar9 = DAT_14ca843c8;
              plVar10 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar10;
            UNLOCK();
          } while (bVar11);
        }
      }
    }
  }
  lVar7 = local_c8;
  if (local_c8 != 0) {
    LOCK();
    puVar1 = (uint *)(local_c8 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_c8 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_c8 + 0xd);
        plVar8 = (longlong *)FUN_14001cc68(0x10,8);
        plVar8[1] = lVar7;
        plVar10 = DAT_14ca843c0;
        plVar9 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar8 = (longlong)plVar10;
            LOCK();
            bVar11 = plVar10 != DAT_14ca843c0;
            plVar9 = plVar8;
            if (bVar11) {
              plVar10 = DAT_14ca843c0;
              plVar9 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar9;
            UNLOCK();
          } while (bVar11);
        }
        else {
          do {
            *plVar8 = (longlong)plVar9;
            LOCK();
            bVar11 = plVar9 != DAT_14ca843c8;
            plVar10 = plVar8;
            if (bVar11) {
              plVar9 = DAT_14ca843c8;
              plVar10 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar10;
            UNLOCK();
          } while (bVar11);
        }
      }
    }
  }
LAB_1431ff22b:
  if ((local_40 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1431ff340 FUN_1431ff340 body=25 status=ok
// SIG undefined FUN_1431ff340(void)

void FUN_1431ff340(void)

{
  FUN_140b35ae4();
  FUN_14170c56a(&DAT_14ca8c6c8);
  return;
}



// FUNCTION 1431ff35a FUN_1431ff35a body=25 status=ok
// SIG undefined FUN_1431ff35a(void)

void FUN_1431ff35a(void)

{
  FUN_1410ce08c();
  FUN_14170c56a(&DAT_14ca8c738);
  return;
}



// FUNCTION 1431ff373 FUN_1431ff373 body=10486 status=ok
// SIG undefined FUN_1431ff373(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431ff373(void)

{
  char cVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  code *local_a8;
  code *local_a0;
  undefined8 local_98;
  undefined **local_88;
  code *local_80;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar3 = 0;
  do {
    FUN_14098d3d2(*(undefined8 *)((longlong)&PTR_FUN_14a3825f0 + lVar3),L"/Script/RenderCore",
                  *(undefined8 *)((longlong)&PTR_u_EVTProducerPriority_14a3825f8 + lVar3),
                  *(undefined8 *)((longlong)&PTR_DAT_14a382600 + lVar3));
    lVar3 = lVar3 + 0x20;
  } while (lVar3 != 0x40);
  FUN_1446f470e(&DAT_14ca855e0,L"MeshDeformer",1);
  local_a0 = FUN_1415a9850;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca85700,&local_a8);
  local_a0 = FUN_1415a9a7a;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca85828,&local_a8);
  local_a0 = FUN_1415aa1a4;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca85950,&local_a8);
  _DAT_14ca98618 = 0;
  _DAT_14ca98714 = 0x18;
  DAT_14ca98790 = DAT_14ca98790 | 6;
  DAT_14ca98620 = FUN_147415326;
  local_a0 = FUN_14609cf64;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca85a78,&local_a8);
  local_a0 = FUN_14609d1d4;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca85ba0,&local_a8);
  local_a0 = FUN_145e1e93e;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca85cc8,&local_a8);
  DAT_14ca85ce0 = 0xffffffff;
  _DAT_14ca85ce4 = 0x105;
  DAT_14ca85ce6 = 0;
  DAT_14ca85ce8 = 0;
  DAT_14ca85cd8 = &PTR_FUN_14a387230;
  FUN_14631dd56();
  atexit(FUN_1431f0b96);
  FUN_1400b22c2(&local_a8,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_a8,&DAT_14ca85cf0);
  if (cVar1 == '\0') {
    _DAT_14ca85cf0 = 0;
    uRam000000014ca85cf8 = 0;
  }
  if (local_a8 != (code *)0x0) {
    FUN_1400020a8();
  }
  local_a0 = FUN_145ddf734;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca85e18,&local_a8);
  local_a0 = FUN_145fda5f0;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca85f40,&local_a8);
  local_a0 = FUN_1461340c6;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca86068,&local_a8);
  local_a0 = FUN_145cd3962;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca86190,&local_a8);
  local_a0 = FUN_14609d444;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca862b8,&local_a8);
  local_a0 = FUN_14609d6b4;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca863e0,&local_a8);
  local_a0 = FUN_145ddfcb6;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca86508,&local_a8);
  local_a0 = FUN_144a8d470;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca86630,&local_a8);
  local_a0 = FUN_145cca478;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca86758,&local_a8);
  local_a0 = FUN_145de0238;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca86880,&local_a8);
  local_a0 = FUN_145cca9fa;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca869a8,&local_a8);
  local_a0 = FUN_1461343a2;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca86ad0,&local_a8);
  local_a0 = FUN_14613467e;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca86bf8,&local_a8);
  local_a0 = FUN_14613495a;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca86d20,&local_a8);
  local_a0 = FUN_146134c36;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca86e48,&local_a8);
  local_a0 = FUN_146134f12;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca86f70,&local_a8);
  local_a0 = FUN_1461351ee;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca87098,&local_a8);
  local_a0 = FUN_1461354ca;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca871c0,&local_a8);
  local_a0 = FUN_1461357a6;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca872e8,&local_a8);
  local_a0 = FUN_146135a82;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca87410,&local_a8);
  local_a0 = FUN_146135d5e;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca87538,&local_a8);
  local_a0 = FUN_14613603a;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca87660,&local_a8);
  local_a0 = FUN_1415e0fb6;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca87788,&local_a8);
  local_a0 = FUN_1415e10d0;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca878b0,&local_a8);
  local_a0 = FUN_145de07ba;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca879d8,&local_a8);
  local_a0 = FUN_146136316;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca87b00,&local_a8);
  local_a0 = FUN_1461365f2;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca87c28,&local_a8);
  local_a0 = FUN_145d58158;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca87d50,&local_a8);
  local_a0 = FUN_1461368ce;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca87e78,&local_a8);
  local_a0 = FUN_146136baa;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca87fa0,&local_a8);
  local_a0 = FUN_146136e86;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca880c8,&local_a8);
  local_a0 = FUN_146137162;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca881f0,&local_a8);
  local_a0 = FUN_14613743e;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca88318,&local_a8);
  local_a0 = FUN_14613771a;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca88440,&local_a8);
  local_a0 = FUN_1461379f6;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca88568,&local_a8);
  local_a0 = FUN_146137cd2;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca88690,&local_a8);
  local_a0 = FUN_146137fae;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca887b8,&local_a8);
  local_a0 = FUN_1415e11ea;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca888e0,&local_a8);
  local_a0 = FUN_1415e1304;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca88a08,&local_a8);
  local_a0 = FUN_14613828a;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca88b30,&local_a8);
  local_a0 = FUN_145ccaf7c;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca88c58,&local_a8);
  local_a0 = FUN_146138566;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca88d80,&local_a8);
  local_a0 = FUN_146138842;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca88ea8,&local_a8);
  local_a0 = FUN_146138b1e;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca88fd0,&local_a8);
  local_a0 = FUN_146138dfa;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca890f8,&local_a8);
  local_a0 = FUN_1461390d6;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca89220,&local_a8);
  _DAT_14ca94df0 = 0xffffffff;
  _DAT_14ca94df4 = 0x105;
  DAT_14ca94df6 = 0;
  DAT_14ca94df8 = 0;
  DAT_14ca94de8 = &PTR_FUN_14a3873d0;
  FUN_14631ddfa();
  atexit(FUN_1431f2037);
  _DAT_14ca94dd8 = 0xffffffff;
  _DAT_14ca94ddc = 0x105;
  DAT_14ca94dde = 0;
  DAT_14ca94de0 = 0;
  DAT_14ca94dd0 = &PTR_FUN_14a387430;
  FUN_14631df2e();
  atexit(FUN_1431f2066);
  DAT_14ca89238 = 0xffffffff;
  _DAT_14ca8923c = 0x105;
  DAT_14ca8923e = 0;
  DAT_14ca89240 = 0;
  DAT_14ca89230 = &PTR_FUN_14a387490;
  FUN_14631e04c();
  atexit(FUN_1431f2095);
  _DAT_14ca89250 = 0xffffffff;
  _DAT_14ca89254 = 0x105;
  DAT_14ca89256 = 0;
  DAT_14ca89258 = 0;
  DAT_14ca89248 = &PTR_FUN_14a3874c0;
  FUN_14631e094();
  atexit(FUN_1431f2185);
  local_a0 = FUN_144a8f812;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca89378,&local_a8);
  local_a0 = FUN_14604b8ba;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca894a0,&local_a8);
  local_a0 = FUN_14605cd50;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca895c8,&local_a8);
  local_a0 = FUN_1415d5ab2;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca896f0,&local_a8);
  local_a0 = FUN_145eb8030;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca89818,&local_a8);
  local_a0 = FUN_145f9b3d4;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca89940,&local_a8);
  _DAT_14ca89950 = &DAT_3f8000003f800000;
  uRam000000014ca89958 = 0x3f80000000000000;
  _DAT_14ca89960 = &DAT_3f8000003f800000;
  _DAT_14ca89970 = 0x3f80000000000000;
  uRam000000014ca89978 = 0x3f80000000000000;
  _DAT_14ca89980 = 0x3f80000000000000;
  _DAT_14ca89990 = 0x3f800000;
  uRam000000014ca89998 = 0x3f80000000000000;
  _DAT_14ca899a0 = 0x3f800000;
  _DAT_14ca899b0 = 0;
  uRam000000014ca899b8 = 0x3f80000000000000;
  _DAT_14ca899c0 = 0;
  _DAT_14ca899d0 = 0x3f800000bf800000;
  uRam000000014ca899d8 = 0x3f80000000000000;
  _DAT_14ca899e0 = 0x3f800000bf800000;
  _DAT_14ca899f0 = 0x3f800000;
  uRam000000014ca899f4 = 0xbf800000;
  uRam000000014ca899f8 = 0;
  uRam000000014ca899fc = 0x3f800000;
  _DAT_14ca89a00 = 0xbf8000003f800000;
  local_98 = 0;
  local_88 = &PTR_LAB_149e01e20;
  local_80 = FUN_1431f981a;
  local_a8 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14ca89a78,6,&local_a8);
  local_a0 = FUN_14609d924;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca89b98,&local_a8);
  local_a0 = FUN_14609db94;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca89cc0,&local_a8);
  local_a0 = FUN_14609de04;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca89de8,&local_a8);
  local_a0 = FUN_14609e074;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca89f10,&local_a8);
  local_a0 = FUN_14609e2e4;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca8a038,&local_a8);
  local_a0 = FUN_14609e554;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca8a160,&local_a8);
  local_a0 = FUN_14609e7c4;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca8a288,&local_a8);
  local_a0 = FUN_14609ea34;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca8a3b0,&local_a8);
  local_a0 = FUN_14609eca4;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca8a4d8,&local_a8);
  local_a0 = FUN_14609ef14;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca8a600,&local_a8);
  local_a0 = FUN_14609f184;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca8a728,&local_a8);
  local_a0 = FUN_14609f3f4;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca8a850,&local_a8);
  local_a0 = FUN_14609f664;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca8a978,&local_a8);
  local_a0 = FUN_14609f8d4;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca8aaa0,&local_a8);
  local_a0 = FUN_14609fb44;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca8abc8,&local_a8);
  local_a0 = FUN_14609fdb4;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca8acf0,&local_a8);
  local_a0 = FUN_1460a0024;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca8ae18,&local_a8);
  local_a0 = FUN_1460a0294;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca8af40,&local_a8);
  local_a0 = FUN_1460a0504;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca8b068,&local_a8);
  local_a0 = FUN_1460a0774;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca8b190,&local_a8);
  local_a0 = FUN_1460a09e4;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca8b2b8,&local_a8);
  local_a0 = FUN_1460a0c54;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca8b3e0,&local_a8);
  local_a0 = FUN_1460a0ec4;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca8b508,&local_a8);
  local_a0 = FUN_1460a1134;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca8b630,&local_a8);
  local_a0 = FUN_1460a13a4;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca8b758,&local_a8);
  local_a0 = FUN_1460a1614;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca8b880,&local_a8);
  local_a0 = FUN_1460a1884;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca8b9a8,&local_a8);
  local_a0 = FUN_1431f2340;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca8b9b8,&local_a8);
  local_b8 = 0;
  FUN_141471170(&DAT_14ca8b9c8,L"r.ReadBuffer.MaxRenderingBytesAllocatedPerFrame",&DAT_14c760db8,
                L"The maximum number of transient rendering read buffer bytes to allocate before we start panic logging who is doing the allocations"
               );
  atexit(FUN_1431f258a);
  local_b8 = 0;
  FUN_141471170(&DAT_14ca8b9d8,L"r.ReadBuffer.MinSize",&DAT_14c760dbc,
                L"The minimum size (in instances) to allocate in blocks for rendering read buffers. i.e. 256*1024 = 1mb for a float buffer"
               );
  atexit(FUN_1431f25cf);
  local_b8 = 0;
  FUN_141471170(&DAT_14ca8b9e8,L"r.ReadBuffer.AlignSize",&DAT_14c760dc0,
                L"The alignment size (in instances) to allocate in blocks for rendering read buffers. i.e. 64*1024 = 256k for a float buffer"
               );
  atexit(FUN_1431f2614);
  local_a0 = FUN_1460d4a04;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca8bb30,&local_a8);
  local_a0 = FUN_1460d27e2;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca8bc58,&local_a8);
  local_a0 = FUN_145eb85aa;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca8bd80,&local_a8);
  local_a0 = FUN_14157ab72;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca8bea8,&local_a8);
  local_a0 = FUN_1415a95e8;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca8bfd0,&local_a8);
  local_b8 = 0;
  FUN_141471170(&DAT_14ca8bfe0,L"r.MaxVertexBytesAllocatedPerFrame",&DAT_14c760dc4,
                L"The maximum number of transient vertex buffer bytes to allocate before we start panic logging who is doing the allocations"
               );
  atexit(FUN_1431f53ba);
  local_b8 = 0;
  FUN_141471170(&DAT_14ca8bff0,L"r.NumFramesUnusedBeforeReleasingGlobalResourceBuffers",
                &DAT_14c760dc8,
                L"Number of frames after which unused global resource allocations will be discarded. Set 0 to ignore. (default=30)"
               );
  atexit(FUN_1431f53ff);
  puVar2 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *(undefined4 *)(puVar2 + 1) = 0xffffffff;
  *(undefined1 *)((longlong)puVar2 + 0xc) = 5;
  *(undefined1 *)((longlong)puVar2 + 0xd) = 1;
  *(undefined1 *)((longlong)puVar2 + 0xe) = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0xc7efffffe0000000;
  puVar2[6] = 0;
  puVar2[7] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x3f) = 0;
  puVar2[9] = 0;
  *puVar2 = &PTR_FUN_14a3876f0;
  FUN_14631e104(puVar2);
  DAT_14ca8c000 = puVar2;
  puVar2 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *(undefined4 *)(puVar2 + 1) = 0xffffffff;
  *(undefined1 *)((longlong)puVar2 + 0xc) = 5;
  *(undefined1 *)((longlong)puVar2 + 0xd) = 1;
  *(undefined1 *)((longlong)puVar2 + 0xe) = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0xc7efffffe0000000;
  puVar2[6] = 0;
  puVar2[7] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x3f) = 0;
  puVar2[9] = 0;
  *puVar2 = &PTR_FUN_14a3877b0;
  FUN_14631e142(puVar2);
  DAT_14ca8c008 = puVar2;
  puVar2 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *(undefined4 *)(puVar2 + 1) = 0xffffffff;
  *(undefined1 *)((longlong)puVar2 + 0xc) = 5;
  *(undefined1 *)((longlong)puVar2 + 0xd) = 1;
  *(undefined1 *)((longlong)puVar2 + 0xe) = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0xc7efffffe0000000;
  puVar2[6] = 0;
  puVar2[7] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x3f) = 0;
  puVar2[9] = 0;
  *puVar2 = &PTR_FUN_14a387800;
  FUN_14631e180(puVar2);
  DAT_14ca94e18 = DAT_14ca8c000;
  DAT_14ca94dc8 = DAT_14ca8c008;
  _DAT_14ca8c010 = puVar2;
  DAT_14ca8c018 = puVar2;
  puVar2 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  *(undefined4 *)(puVar2 + 1) = 0xffffffff;
  *(undefined1 *)((longlong)puVar2 + 0xc) = 5;
  *(undefined1 *)((longlong)puVar2 + 0xd) = 1;
  *(undefined1 *)((longlong)puVar2 + 0xe) = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  *puVar2 = &PTR_FUN_14a387850;
  FUN_14631e1be(puVar2);
  _DAT_14ca8c020 = puVar2;
  puVar2 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  *(undefined4 *)(puVar2 + 1) = 0xffffffff;
  *(undefined1 *)((longlong)puVar2 + 0xc) = 5;
  *(undefined1 *)((longlong)puVar2 + 0xd) = 1;
  *(undefined1 *)((longlong)puVar2 + 0xe) = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  *puVar2 = &PTR_FUN_14a3878b0;
  FUN_14631e1fc(puVar2);
  DAT_14ca8c028 = puVar2;
  puVar2 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  *(undefined4 *)(puVar2 + 1) = 0xffffffff;
  *(undefined1 *)((longlong)puVar2 + 0xc) = 5;
  *(undefined1 *)((longlong)puVar2 + 0xd) = 1;
  *(undefined1 *)((longlong)puVar2 + 0xe) = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  *puVar2 = &PTR_FUN_14a387910;
  FUN_14631e23a(puVar2);
  DAT_14ca8c030 = puVar2;
  puVar2 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  *(undefined4 *)(puVar2 + 1) = 0xffffffff;
  *(undefined1 *)((longlong)puVar2 + 0xc) = 5;
  *(undefined1 *)((longlong)puVar2 + 0xd) = 1;
  *(undefined1 *)((longlong)puVar2 + 0xe) = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  *puVar2 = &PTR_FUN_14a387980;
  FUN_14631e278(puVar2);
  DAT_14ca8c038 = puVar2;
  puVar2 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  *(undefined4 *)(puVar2 + 1) = 0xffffffff;
  *(undefined1 *)((longlong)puVar2 + 0xc) = 5;
  *(undefined1 *)((longlong)puVar2 + 0xd) = 1;
  *(undefined1 *)((longlong)puVar2 + 0xe) = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  *puVar2 = &PTR_FUN_14a3879e0;
  FUN_14631e2b6(puVar2);
  DAT_14ca8c040 = puVar2;
  puVar2 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  *(undefined4 *)(puVar2 + 1) = 0xffffffff;
  *(undefined1 *)((longlong)puVar2 + 0xc) = 5;
  *(undefined1 *)((longlong)puVar2 + 0xd) = 1;
  *(undefined1 *)((longlong)puVar2 + 0xe) = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  *puVar2 = &PTR_FUN_14a387a40;
  FUN_14631e2f4(puVar2);
  _DAT_14ca8c048 = puVar2;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *(undefined4 *)(puVar2 + 1) = 0xffffffff;
  *(undefined1 *)((longlong)puVar2 + 0xc) = 5;
  *(undefined1 *)((longlong)puVar2 + 0xd) = 1;
  *(undefined1 *)((longlong)puVar2 + 0xe) = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_14a387aa0;
  FUN_14631e332(puVar2);
  DAT_14ca8c050 = puVar2;
  puVar2 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  *(undefined4 *)(puVar2 + 1) = 0xffffffff;
  *(undefined1 *)((longlong)puVar2 + 0xc) = 5;
  *(undefined1 *)((longlong)puVar2 + 0xd) = 1;
  *(undefined1 *)((longlong)puVar2 + 0xe) = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0xc7efffffe0000000;
  puVar2[6] = 0;
  puVar2[7] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x3f) = 0;
  *puVar2 = &PTR_FUN_14a387b10;
  FUN_14631e518(puVar2);
  DAT_14ca94db8 = puVar2;
  puVar2 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  *(undefined4 *)(puVar2 + 1) = 0xffffffff;
  *(undefined1 *)((longlong)puVar2 + 0xc) = 5;
  *(undefined1 *)((longlong)puVar2 + 0xd) = 1;
  *(undefined1 *)((longlong)puVar2 + 0xe) = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0xc7efffffe0000000;
  puVar2[6] = 0;
  puVar2[7] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x3f) = 0;
  *puVar2 = &PTR_FUN_14a387be0;
  FUN_14631e556(puVar2);
  DAT_14ca8c058 = puVar2;
  puVar2 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  *(undefined4 *)(puVar2 + 1) = 0xffffffff;
  *(undefined1 *)((longlong)puVar2 + 0xc) = 5;
  *(undefined1 *)((longlong)puVar2 + 0xd) = 1;
  *(undefined1 *)((longlong)puVar2 + 0xe) = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0xc7efffffe0000000;
  puVar2[6] = 0;
  puVar2[7] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x3f) = 0;
  *puVar2 = &PTR_FUN_14a387c30;
  FUN_14631e594(puVar2);
  DAT_14ca94dc0 = puVar2;
  puVar2 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  *(undefined4 *)(puVar2 + 1) = 0xffffffff;
  *(undefined1 *)((longlong)puVar2 + 0xc) = 5;
  *(undefined1 *)((longlong)puVar2 + 0xd) = 1;
  *(undefined1 *)((longlong)puVar2 + 0xe) = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0xc7efffffe0000000;
  puVar2[6] = 0;
  puVar2[7] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x3f) = 0;
  *puVar2 = &PTR_FUN_14a387c80;
  FUN_14631e5d2(puVar2);
  DAT_14ca8c060 = puVar2;
  _DAT_14ca8c068 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  *(undefined4 *)(_DAT_14ca8c068 + 1) = 0xffffffff;
  *(undefined1 *)((longlong)_DAT_14ca8c068 + 0xc) = 5;
  *(undefined1 *)((longlong)_DAT_14ca8c068 + 0xd) = 1;
  *(undefined1 *)((longlong)_DAT_14ca8c068 + 0xe) = 0;
  _DAT_14ca8c068[2] = 0;
  _DAT_14ca8c068[3] = 0;
  _DAT_14ca8c068[4] = 0;
  _DAT_14ca8c068[5] = 0xc7efffffe0000000;
  _DAT_14ca8c068[6] = 0;
  _DAT_14ca8c068[7] = 0;
  *(undefined8 *)((longlong)_DAT_14ca8c068 + 0x3f) = 0;
  *_DAT_14ca8c068 = &PTR_FUN_14a386980;
  puVar2 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *(undefined4 *)(puVar2 + 1) = 0xffffffff;
  *(undefined1 *)((longlong)puVar2 + 0xc) = 5;
  *(undefined1 *)((longlong)puVar2 + 0xd) = 1;
  *(undefined1 *)((longlong)puVar2 + 0xe) = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0xc7efffffe0000000;
  puVar2[6] = 0;
  puVar2[7] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x3f) = 0;
  *(undefined1 *)(puVar2 + 9) = 0;
  *(undefined1 *)((longlong)puVar2 + 0x49) = 2;
  *(undefined4 *)((longlong)puVar2 + 0x4c) = 0xffffffff;
  *puVar2 = &PTR_FUN_14a387d20;
  FUN_14631e610(puVar2);
  DAT_14ca8c070 = puVar2;
  puVar2 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *(undefined4 *)(puVar2 + 1) = 0xffffffff;
  *(undefined1 *)((longlong)puVar2 + 0xc) = 5;
  *(undefined1 *)((longlong)puVar2 + 0xd) = 1;
  *(undefined1 *)((longlong)puVar2 + 0xe) = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0xc7efffffe0000000;
  puVar2[6] = 0;
  puVar2[7] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x3f) = 0;
  *(undefined1 *)(puVar2 + 9) = 0;
  *(undefined1 *)((longlong)puVar2 + 0x49) = 2;
  *(undefined4 *)((longlong)puVar2 + 0x4c) = 0xff000000;
  *puVar2 = &PTR_FUN_14a387d20;
  FUN_14631e610(puVar2);
  DAT_14ca8c078 = puVar2;
  puVar2 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *(undefined4 *)(puVar2 + 1) = 0xffffffff;
  *(undefined1 *)((longlong)puVar2 + 0xc) = 5;
  *(undefined1 *)((longlong)puVar2 + 0xd) = 1;
  *(undefined1 *)((longlong)puVar2 + 0xe) = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0xc7efffffe0000000;
  puVar2[6] = 0;
  puVar2[7] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x3f) = 0;
  *(undefined1 *)(puVar2 + 9) = 1;
  *(undefined1 *)((longlong)puVar2 + 0x49) = 0xc;
  *(undefined4 *)((longlong)puVar2 + 0x4c) = 0;
  *puVar2 = &PTR_FUN_14a387d20;
  FUN_14631e610(puVar2);
  DAT_14ca8c080 = puVar2;
  puVar2 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  *(undefined4 *)(puVar2 + 1) = 0xffffffff;
  *(undefined1 *)((longlong)puVar2 + 0xc) = 5;
  *(undefined1 *)((longlong)puVar2 + 0xd) = 1;
  *(undefined1 *)((longlong)puVar2 + 0xe) = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0xc7efffffe0000000;
  puVar2[6] = 0;
  puVar2[7] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x3f) = 0;
  *puVar2 = &PTR_FUN_14a387dc0;
  FUN_14631e64e(puVar2);
  DAT_14ca8c088 = puVar2;
  puVar2 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *(undefined4 *)(puVar2 + 1) = 0xffffffff;
  *(undefined1 *)((longlong)puVar2 + 0xc) = 5;
  *(undefined1 *)((longlong)puVar2 + 0xd) = 1;
  *(undefined1 *)((longlong)puVar2 + 0xe) = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0xc7efffffe0000000;
  puVar2[6] = 0;
  puVar2[7] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x3f) = 0;
  puVar2[9] = 0;
  *puVar2 = &PTR_FUN_14a387e60;
  FUN_14631e68c(puVar2);
  _DAT_14ca94da0 = 0xffffffff;
  DAT_14ca94da4 = 5;
  DAT_14ca94da5 = 1;
  DAT_14ca94da6 = 0;
  _DAT_14ca94da8 = 0;
  DAT_14ca94db0 = 0;
  DAT_14ca94d98 = &PTR_FUN_14a387ee0;
  DAT_14ca8c090 = puVar2;
  FUN_14631e6ca();
  atexit(FUN_1431f589d);
  _DAT_14ca8c0a0 = 0xffffffff;
  DAT_14ca8c0a4 = 5;
  DAT_14ca8c0a5 = 1;
  DAT_14ca8c0a6 = 0;
  DAT_14ca8c0a8 = 0;
  DAT_14ca8c0b0 = 0;
  DAT_14ca8c098 = &PTR_FUN_14a387f10;
  FUN_14631e712();
  atexit(FUN_1431f5d23);
  DAT_14ca8c0f0 = 0xffffffff;
  DAT_14ca8c0f4 = 5;
  DAT_14ca8c0f5 = 1;
  DAT_14ca8c0f6 = 0;
  DAT_14ca8c0f8 = 0;
  DAT_14ca8c0e8 = &PTR_FUN_14a387f40;
  FUN_14631e75a();
  atexit(FUN_1431f5d52);
  _DAT_14ca94e08 = 0xffffffff;
  DAT_14ca94e0c = 5;
  DAT_14ca94e0d = 1;
  DAT_14ca94e0e = 0;
  DAT_14ca94e10 = 0;
  DAT_14ca94e00 = &PTR_FUN_14a387f70;
  FUN_14631e7a2();
  atexit(FUN_1431f5e42);
  _DAT_14ca8c108 = 0xffffffff;
  DAT_14ca8c10c = 5;
  DAT_14ca8c10d = 1;
  DAT_14ca8c10e = 0;
  DAT_14ca8c110 = 0;
  DAT_14ca8c100 = &PTR_FUN_14a387fa0;
  FUN_14631e7ea();
  atexit(FUN_1431f5e71);
  _DAT_14ca8c120 = 0xffffffff;
  DAT_14ca8c124 = 5;
  DAT_14ca8c125 = 1;
  DAT_14ca8c126 = 0;
  DAT_14ca8c128 = 0;
  DAT_14ca8c118 = &PTR_FUN_14a387fd0;
  FUN_14631e832();
  atexit(FUN_1431f5ea0);
  _DAT_14ca8c138 = 0xffffffff;
  DAT_14ca8c13c = 5;
  DAT_14ca8c13d = 1;
  DAT_14ca8c13e = 0;
  DAT_14ca8c140 = 0;
  _DAT_14ca8c148 = 0;
  uRam000000014ca8c150 = 0;
  _DAT_14ca8c158 = 0;
  uRam000000014ca8c160 = 0;
  _DAT_14ca8c168 = 0;
  uRam000000014ca8c170 = 0;
  _DAT_14ca8c178 = 0;
  _DAT_14ca8c180 = 0;
  _DAT_14ca8c188 = 0;
  DAT_14ca8c130 = &PTR_FUN_14a388000;
  FUN_14631e87a();
  atexit(FUN_1431f5ecf);
  _DAT_14ca8c198 = 0xffffffff;
  DAT_14ca8c19c = 5;
  DAT_14ca8c19d = 1;
  DAT_14ca8c19e = 0;
  DAT_14ca8c1a0 = 0;
  _DAT_14ca8c1a8 = 0;
  uRam000000014ca8c1b0 = 0;
  _DAT_14ca8c1b8 = 0;
  uRam000000014ca8c1c0 = 0;
  _DAT_14ca8c1c8 = 0;
  uRam000000014ca8c1d0 = 0;
  _DAT_14ca8c1d8 = 0;
  _DAT_14ca8c1e0 = 0;
  _DAT_14ca8c1e8 = 0;
  DAT_14ca8c190 = &PTR_FUN_14a3880b0;
  FUN_14631e920();
  atexit(FUN_1431f5efe);
  local_98 = 0;
  local_88 = &PTR_LAB_149e01e20;
  local_80 = FUN_1431ff340;
  local_a8 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14ca8c730,6,&local_a8);
  local_98 = 0;
  local_88 = &PTR_LAB_149e01e20;
  local_80 = FUN_1431ff35a;
  local_a8 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14ca8c7a0,6,&local_a8);
  local_a0 = FUN_1460ae29e;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca8c8c0,&local_a8);
  DAT_14ca8c8d0 = 0;
  _DAT_14ca8c8d8 = 0;
  atexit(FUN_1431f5f83);
  local_a0 = FUN_145f99578;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca8c9f8,&local_a8);
  local_a0 = FUN_1415a8c16;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca8cb20,&local_a8);
  local_b8 = 0x20;
  FUN_141471170(&DAT_14ca8cb38,L"r.GPUMessage.LogAllMessages",&DAT_14ca8cb30,
                L"Log all messages to the console.\n0: Disabled\n1: Enabled\n");
  atexit(FUN_1431f5fcf);
  local_b8 = 0x24;
  FUN_141471170(&DAT_14ca8cb48,L"r.GPUMessage.MaxBufferSize",&DAT_14c760dcc,
                L"Specifies the maximum size of the GPU message buffer, in KiB.\ndefault: 64\n");
  atexit(FUN_1431f6014);
  FUN_14631e9c6();
  DAT_14ca8cb58 = &PTR_FUN_14a388140;
  FUN_14631ea86();
  atexit(FUN_1431f6059);
  local_a0 = FUN_1460a1af4;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca8cda8,&local_a8);
  _DAT_14ca8cdc8 = 0xffffffff;
  DAT_14ca8cdcc = 5;
  DAT_14ca8cdcd = 1;
  DAT_14ca8cdce = 0;
  DAT_14ca8cdd0 = 0;
  DAT_14ca8cdc0 = &PTR_FUN_14a3881a0;
  FUN_14631eace();
  atexit(FUN_1431f70ee);
  _DAT_14ca8cde0 = 0x3ff0000000000000;
  _DAT_14ca8cde8 = 0;
  _DAT_14ca8cdf0 = 0x3ff66e9780000000;
  _DAT_14ca8cdf8 = 0;
  _DAT_14ca8ce00 = 0x3ff0000000000000;
  _DAT_14ca8ce08 = 0xbfd6067300000000;
  _DAT_14ca8ce10 = 0xbfe6da3460000000;
  _DAT_14ca8ce18 = 0;
  _DAT_14ca8ce20 = 0x3ff0000000000000;
  _DAT_14ca8ce28 = 0x3ffc5a1ca0000000;
  _DAT_14ca8ce30 = 0;
  uRam000000014ca8ce38 = 0;
  _DAT_14ca8ce40 = 0;
  uRam000000014ca8ce48 = 0;
  _DAT_14ca8ce50 = 0;
  uRam000000014ca8ce58 = 0;
  _DAT_14ca8ce60 = 0x3ff2a150a0000000;
  _DAT_14ca8ce68 = 0;
  _DAT_14ca8ce70 = 0x3ff9895360000000;
  _DAT_14ca8ce78 = 0;
  _DAT_14ca8ce80 = 0x3ff2a150a0000000;
  _DAT_14ca8ce88 = 0xbfd912a220000000;
  _DAT_14ca8ce90 = 0xbfea03d4c0000000;
  _DAT_14ca8ce98 = 0;
  _DAT_14ca8cea0 = 0x3ff2a150a0000000;
  _DAT_14ca8cea8 = 0x4000234aa0000000;
  _DAT_14ca8ced0 = 0;
  uRam000000014ca8ced8 = 0;
  _DAT_14ca8cec0 = 0;
  uRam000000014ca8cec8 = 0;
  _DAT_14ca8ceb0 = 0;
  uRam000000014ca8ceb8 = 0;
  _DAT_14ca8cee0 = 0x3ff0000000000000;
  _DAT_14ca8cee8 = 0;
  _DAT_14ca8cef0 = 0x3ff9320fa0000000;
  _DAT_14ca8cef8 = 0;
  _DAT_14ca8cf00 = 0x3ff0000000000000;
  _DAT_14ca8cf08 = 0xbfc7f9e880000000;
  _DAT_14ca8cf10 = 0xbfddf71c80000000;
  _DAT_14ca8cf18 = 0;
  _DAT_14ca8cf20 = 0x3ff0000000000000;
  _DAT_14ca8cf28 = 0x3ffdb099c0000000;
  _DAT_14ca8cf30 = 0;
  uRam000000014ca8cf38 = 0;
  _DAT_14ca8cf40 = 0;
  uRam000000014ca8cf48 = 0;
  _DAT_14ca8cf50 = 0;
  uRam000000014ca8cf58 = 0;
  _DAT_14ca8cf60 = 0x3ff2a150a0000000;
  _DAT_14ca8cf68 = 0;
  _DAT_14ca8cf70 = 0x3ffcaeb420000000;
  _DAT_14ca8cf78 = 0;
  _DAT_14ca8cf80 = 0x3ff2a150a0000000;
  _DAT_14ca8cf88 = 0xbfcb4b59c0000000;
  _DAT_14ca8cf90 = 0xbfe10e5e80000000;
  _DAT_14ca8cf98 = 0;
  _DAT_14ca8cfa0 = 0x3ff2a150a0000000;
  _DAT_14ca8cfa8 = 0x4000e63c20000000;
  _DAT_14ca8cfd0 = 0;
  uRam000000014ca8cfd8 = 0;
  _DAT_14ca8cfc0 = 0;
  uRam000000014ca8cfc8 = 0;
  _DAT_14ca8cfb0 = 0;
  uRam000000014ca8cfb8 = 0;
  _DAT_14ca8cfe0 = 0x3ff0000000000000;
  _DAT_14ca8cfe8 = 0;
  _DAT_14ca8cff0 = 0x3ff797f5c0000000;
  _DAT_14ca8cff8 = 0;
  _DAT_14ca8d000 = 0x3ff0000000000000;
  _DAT_14ca8d008 = 0xbfc5103d00000000;
  _DAT_14ca8d010 = 0xbfe2488a60000000;
  _DAT_14ca8d018 = 0;
  _DAT_14ca8d020 = 0x3ff0000000000000;
  _DAT_14ca8d028 = 0x3ffe1a3340000000;
  _DAT_14ca8d050 = 0;
  uRam000000014ca8d058 = 0;
  _DAT_14ca8d040 = 0;
  uRam000000014ca8d048 = 0;
  _DAT_14ca8d030 = 0;
  uRam000000014ca8d038 = 0;
  _DAT_14ca8d060 = 0x3ff2a150a0000000;
  _DAT_14ca8d068 = 0;
  _DAT_14ca8d070 = 0x3ffadbd8e0000000;
  _DAT_14ca8d078 = 0;
  _DAT_14ca8d080 = 0x3ff2a150a0000000;
  _DAT_14ca8d088 = 0xbfc7fa7c60000000;
  _DAT_14ca8d090 = 0xbfe4d04b40000000;
  _DAT_14ca8d098 = 0;
  _DAT_14ca8d0a0 = 0x3ff2a150a0000000;
  _DAT_14ca8d0a8 = 0x4001225780000000;
  _DAT_14ca8d0d0 = 0;
  uRam000000014ca8d0d8 = 0;
  _DAT_14ca8d0c0 = 0;
  uRam000000014ca8d0c8 = 0;
  _DAT_14ca8d0b0 = 0;
  uRam000000014ca8d0b8 = 0;
  _DAT_14ca8d0e0 = 0x3ff2a161e0000000;
  _DAT_14ca8d0e8 = 0;
  _DAT_14ca8d0f0 = 0x3ffcaee640000000;
  _DAT_14ca8d0f8 = 0;
  _DAT_14ca8d100 = 0x3ff2a161e0000000;
  _DAT_14ca8d108 = 0xbfcb4d6a20000000;
  _DAT_14ca8d110 = 0xbfe10d8440000000;
  _DAT_14ca8d118 = 0;
  _DAT_14ca8d120 = 0x3ff2a161e0000000;
  _DAT_14ca8d128 = 0x4000e63200000000;
  _DAT_14ca8d150 = 0;
  uRam000000014ca8d158 = 0;
  _DAT_14ca8d140 = 0;
  uRam000000014ca8d148 = 0;
  _DAT_14ca8d130 = 0;
  uRam000000014ca8d138 = 0;
  _DAT_14ca8d160 = 0x3fc7601260000000;
  _DAT_14ca8d168 = 0x3fe3a78e80000000;
  _DAT_14ca8d170 = 0x3fafbe8640000000;
  _DAT_14ca8d178 = 0;
  _DAT_14ca8d180 = 0xbfb9c4f180000000;
  _DAT_14ca8d188 = 0xbfd5aadfc0000000;
  _DAT_14ca8d190 = 0x3fdc1c1c20000000;
  _DAT_14ca8d198 = 0;
  _DAT_14ca8d1a0 = 0x3fdc1c1c20000000;
  _DAT_14ca8d1a8 = 0xbfd9884e60000000;
  _DAT_14ca8d1b0 = 0xbfa49e6e60000000;
  _DAT_14ca8d1d8 = 0;
  _DAT_14ca8d1c8 = 0;
  uRam000000014ca8d1d0 = 0;
  _DAT_14ca8d1b8 = 0;
  uRam000000014ca8d1c0 = 0;
  _DAT_14ca8d1e0 = 0x3fcce0e400000000;
  _DAT_14ca8d1e8 = 0x3fe2a20b20000000;
  _DAT_14ca8d1f0 = 0x3faa137580000000;
  _DAT_14ca8d1f8 = 0;
  _DAT_14ca8d200 = 0xbfbf665e00000000;
  _DAT_14ca8d208 = 0xbfd44284a0000000;
  _DAT_14ca8d210 = 0x3fdc1c1c20000000;
  _DAT_14ca8d218 = 0;
  _DAT_14ca8d220 = 0x3fdc1c1c20000000;
  _DAT_14ca8d228 = 0xbfd9d951e0000000;
  _DAT_14ca8d230 = 0xbfa21651c0000000;
  _DAT_14ca8d258 = 0;
  _DAT_14ca8d248 = 0;
  uRam000000014ca8d250 = 0;
  _DAT_14ca8d238 = 0;
  uRam000000014ca8d240 = 0;
  DAT_14ca8d260 = 0x3fb0101020000000;
  DAT_14ca8d268 = 0x3fe0101020000000;
  DAT_14ca8d270 = 0x3fe0101020000000;
  _DAT_14ca8d278 = 0;
  _DAT_14ca8d280 = 0x3fe0101020000000;
  _DAT_14ca8d288 = 0x3fe0101020000000;
  _DAT_14ca8d290 = 0x3fb0040100000000;
  _DAT_14ca8d298 = 0x3fe0040100000000;
  _DAT_14ca8d2a0 = 0x3fe0040100000000;
  _DAT_14ca8d2a8 = 0;
  _DAT_14ca8d2b0 = 0x3fe0040100000000;
  _DAT_14ca8d2b8 = 0x3fe0040100000000;
  _DAT_14ca8d2c0 = 0x3fb0001000000000;
  _DAT_14ca8d2c8 = 0x3fe0001000000000;
  _DAT_14ca8d2d0 = 0x3fe0001000000000;
  _DAT_14ca8d2d8 = 0;
  _DAT_14ca8d2e0 = 0x3fe0001000000000;
  _DAT_14ca8d2e8 = 0x3fe0001000000000;
  _DAT_14ca8d2f0 = 0x3fb0000000000000;
  _DAT_14ca8d2f8 = 0x3fe0000000000000;
  _DAT_14ca8d300 = 0x3fe0000000000000;
  _DAT_14ca8d308 = 0;
  _DAT_14ca8d310 = 0x3fe0000000000000;
  _DAT_14ca8d318 = 0x3fe0000000000000;
  local_a0 = FUN_1460ae50e;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca8d438,&local_a8);
  local_a0 = FUN_145e3fb8c;
  local_a8 = (code *)&DAT_14152059c;
  FUN_14142a670(&DAT_14ca8d4d0,&local_a8);
  local_a0 = FUN_1460a1d64;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca8d5f8,&local_a8);
  local_a0 = FUN_145e3820e;
  local_a8 = (code *)&DAT_14152059c;
  FUN_14142a670(&DAT_14ca8d690,&local_a8);
  local_a0 = FUN_1460ae77e;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca8d7b8,&local_a8);
  local_a0 = FUN_145fcb5ae;
  local_a8 = (code *)&DAT_14152059c;
  FUN_14142a670(&DAT_14ca8d850,&local_a8);
  local_a0 = FUN_1460ae9ee;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca8d978,&local_a8);
  local_a0 = FUN_145fcb948;
  local_a8 = (code *)&DAT_14152059c;
  FUN_14142a670(&DAT_14ca8da10,&local_a8);
  local_a0 = FUN_1460aec5e;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca8db38,&local_a8);
  local_a0 = FUN_145f9c2bc;
  local_a8 = (code *)&DAT_14152059c;
  FUN_14142a670(&DAT_14ca8dbd0,&local_a8);
  local_a0 = FUN_1460a1fd4;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca8dcf8,&local_a8);
  local_a0 = FUN_145e3fea0;
  local_a8 = (code *)&DAT_14152059c;
  FUN_14142a670(&DAT_14ca8dd90,&local_a8);
  local_a0 = FUN_1460a2244;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca8deb8,&local_a8);
  local_a0 = FUN_145fa0046;
  local_a8 = (code *)&DAT_14152059c;
  FUN_14142a670(&DAT_14ca8df50,&local_a8);
  local_a0 = FUN_1460a24b4;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca8e078,&local_a8);
  local_a0 = FUN_145fa03de;
  local_a8 = (code *)&DAT_14152059c;
  FUN_14142a670(&DAT_14ca8e110,&local_a8);
  local_a0 = FUN_1460a2724;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca8e238,&local_a8);
  local_a0 = FUN_145f9c64e;
  local_a8 = (code *)&DAT_14152059c;
  FUN_14142a670(&DAT_14ca8e2d0,&local_a8);
  local_a0 = FUN_1460aeece;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca8e3f8,&local_a8);
  local_a0 = FUN_145f9e374;
  local_a8 = (code *)&DAT_14152059c;
  FUN_14142a670(&DAT_14ca8e490,&local_a8);
  local_a0 = FUN_1460af13e;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca8e5b8,&local_a8);
  local_a0 = FUN_145f9e708;
  local_a8 = (code *)&DAT_14152059c;
  FUN_14142a670(&DAT_14ca8e650,&local_a8);
  local_a0 = FUN_145ed5c3a;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca8e778,&local_a8);
  local_a0 = FUN_1460a2994;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca8e8a0,&local_a8);
  local_a0 = FUN_145f9c9e0;
  local_a8 = (code *)&DAT_14152059c;
  FUN_14142a670(&DAT_14ca8e938,&local_a8);
  local_a0 = FUN_1460a2c04;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca8ea60,&local_a8);
  local_a0 = FUN_145e401b4;
  local_a8 = (code *)&DAT_14152059c;
  FUN_14142a670(&DAT_14ca8eaf8,&local_a8);
  local_a0 = FUN_1460af3ae;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca8ec20,&local_a8);
  local_a0 = FUN_145e3dc0c;
  local_a8 = (code *)&DAT_14152059c;
  FUN_14142a670(&DAT_14ca8ecb8,&local_a8);
  local_a0 = FUN_1460af61e;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca8ede0,&local_a8);
  local_a0 = FUN_145fcbce2;
  local_a8 = (code *)&DAT_14152059c;
  FUN_14142a670(&DAT_14ca8ee78,&local_a8);
  local_a0 = FUN_1460af88e;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca8efa0,&local_a8);
  local_a0 = FUN_145e404c8;
  local_a8 = (code *)&DAT_14152059c;
  FUN_14142a670(&DAT_14ca8f038,&local_a8);
  local_a0 = FUN_1460afafe;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca8f160,&local_a8);
  local_a0 = FUN_145fcc07c;
  local_a8 = (code *)&DAT_14152059c;
  FUN_14142a670(&DAT_14ca8f1f8,&local_a8);
  local_a0 = FUN_1460afd6e;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca8f320,&local_a8);
  local_a0 = FUN_145e3851c;
  local_a8 = (code *)&DAT_14152059c;
  FUN_14142a670(&DAT_14ca8f3b8,&local_a8);
  local_a0 = FUN_1460affde;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca8f4e0,&local_a8);
  local_a0 = FUN_145e407dc;
  local_a8 = (code *)&DAT_14152059c;
  FUN_14142a670(&DAT_14ca8f578,&local_a8);
  local_a0 = FUN_1460a2e74;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca8f6a0,&local_a8);
  local_a0 = FUN_145e3882a;
  local_a8 = (code *)&DAT_14152059c;
  FUN_14142a670(&DAT_14ca8f738,&local_a8);
  local_a0 = FUN_1460a30e4;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca8f860,&local_a8);
  local_a0 = FUN_145e38b38;
  local_a8 = (code *)&DAT_14152059c;
  FUN_14142a670(&DAT_14ca8f8f8,&local_a8);
  local_a0 = FUN_1461393b2;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca8fa20,&local_a8);
  local_a0 = FUN_145dc4628;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca8fb48,&local_a8);
  local_a0 = FUN_145eba918;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca8fc70,&local_a8);
  local_a0 = FUN_145ea77ec;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca8fd98,&local_a8);
  local_a0 = FUN_145f9cd72;
  local_a8 = (code *)&DAT_14152059c;
  FUN_14142a670(&DAT_14ca8fe30,&local_a8);
  local_a0 = FUN_1460b024e;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca8ff58,&local_a8);
  local_a0 = FUN_1460a3354;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca90080,&local_a8);
  local_a0 = FUN_1460a35c4;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca901a8,&local_a8);
  local_a0 = FUN_1460a3834;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca902d0,&local_a8);
  local_a0 = FUN_146057978;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca903f8,&local_a8);
  local_a0 = FUN_145ff01fa;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca90520,&local_a8);
  local_a0 = FUN_14613968e;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca90648,&local_a8);
  local_a0 = FUN_14613996a;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca90770,&local_a8);
  local_a0 = FUN_146139c46;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca90898,&local_a8);
  local_a0 = FUN_1415e141e;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca909c0,&local_a8);
  local_a0 = FUN_145ee3f08;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca90ae8,&local_a8);
  local_a0 = FUN_1415d5bd2;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca90c10,&local_a8);
  local_a0 = FUN_145ebe9c2;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca90d38,&local_a8);
  local_a0 = FUN_144a92462;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca90e60,&local_a8);
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143201c6c FUN_143201c6c body=69 status=ok
// SIG undefined FUN_143201c6c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143201c6c(void)

{
  _DAT_14ca94e20 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143201cae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca94e28,1);
  return;
}



// FUNCTION 143201cbe FUN_143201cbe body=2031 status=ok
// SIG undefined FUN_143201cbe(void)

void FUN_143201cbe(ulonglong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  byte bVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  void *_Src;
  longlong lVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  longlong lVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  longlong *plVar22;
  longlong *plVar23;
  longlong *plVar24;
  undefined8 *puVar25;
  void *pvVar26;
  void *_Dst;
  uint uVar27;
  size_t _Size;
  bool bVar28;
  undefined1 auStack_148 [32];
  longlong *local_128;
  longlong local_118;
  ulonglong local_110;
  undefined8 *local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0 [5];
  int local_94;
  longlong local_90;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  int local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if ((DAT_14ca84f10 == '\x01') && (((&DAT_14ca814cd)[(ulonglong)DAT_14ca85550 * 0x3c] & 3) != 0)) {
    lVar19 = *param_2;
    uVar17 = *(undefined8 *)
              (&DAT_14ca8c1f0 +
              (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8);
    FUN_145dd2678();
    uVar16 = 0;
    FUN_1448e935e(uVar17,&local_88,&DAT_14ca94eb0,0);
    FUN_145dd2678();
    lVar13 = local_88;
    if (local_88 != 0) {
      uVar16 = *(ulonglong *)
                (*(longlong *)(*(longlong *)(lStack_80 + 8) + 0x50) +
                (longlong)*(int *)(local_88 + 0xd4) * 8);
      if (uVar16 == 0) {
        uVar16 = FUN_1400bafc2(*(longlong *)(lStack_80 + 8),(longlong)*(int *)(local_88 + 0xd4),1);
      }
    }
    uVar17 = FUN_140029432(param_1,uVar16,0);
    param_1[0x37] = uVar16;
    puVar18 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar25 = puVar18 + 3;
    if ((undefined8 *)param_1[1] < puVar25) {
      FUN_140023dd8(param_1,0x20);
      puVar18 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar25 = puVar18 + 3;
    }
    *param_1 = (ulonglong)puVar25;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar18;
    param_1[6] = (ulonglong)(puVar18 + 1);
    puVar18[1] = 0;
    *puVar18 = &PTR_LAB_14a37d340;
    puVar18[2] = uVar17;
    lVar9 = *(longlong *)(lVar19 + 0x28);
    if (lVar9 != 0) {
      local_118 = lVar13;
      local_64 = *(int *)(lVar9 + 0x24);
      lStack_80 = 0;
      local_88 = 0x40000;
      local_128 = &local_88;
      local_110 = uVar16;
      local_78 = lVar9;
      (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_90,param_1);
      if ((longlong)*(int *)(lVar19 + 0x48) != 0) {
        puVar18 = *(undefined8 **)(lVar19 + 0x40);
        puVar25 = puVar18 + (longlong)*(int *)(lVar19 + 0x48) * 5;
        local_c8 = local_118 + 0xe8;
        local_d0 = local_118 + 0xee;
        local_d8 = local_118 + 0xf4;
        local_e0 = local_118 + 0xfa;
        local_e8 = local_118 + 0x100;
        local_f0 = local_118 + 0x106;
        local_f8 = local_118 + 0xe4;
        local_100 = local_118 + 0xe0;
        local_108 = puVar25;
        do {
          if (*(int *)(puVar18 + 1) == 3) {
            local_94 = *(int *)(puVar18 + 3) * local_64 * 3;
            lVar19 = FUN_144821ef4(param_1);
            FUN_144abbe48(lVar19,local_c8,puVar18 + 2,0);
            FUN_144abbe48(lVar19,local_d0,(longlong)puVar18 + 0xc,0);
            FUN_144abbe48(lVar19,local_d8,&local_94,0);
            FUN_144abbe48(lVar19,local_e0,&local_64,0);
            FUN_144abbe48(lVar19,local_e8,(int *)((longlong)puVar18 + 0x1c),0);
            FUN_144abbe48(lVar19,local_f0,(longlong)puVar18 + 0x14,0);
            local_c0[3] = *puVar18;
            local_c0[2] = 0;
            local_c0[1] = 0x40000;
            local_128 = local_c0 + 1;
            (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,local_c0,param_1);
            FUN_144a86bff(lVar19,local_f8,local_c0[0]);
            FUN_144a86bff(lVar19,local_100,local_90);
            iVar14 = *(int *)(lVar19 + 0x30) + *(int *)(lVar19 + 0x20);
            iVar15 = iVar14 + *(int *)(lVar19 + 0x40);
            if (iVar15 != 0 && SCARRY4(iVar14,*(int *)(lVar19 + 0x40)) == iVar15 < 0) {
              puVar20 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
              puVar25 = puVar20 + 0xb;
              if ((undefined8 *)param_1[1] < puVar25) {
                FUN_140023dd8(param_1,0x60);
                puVar20 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
                puVar25 = puVar20 + 0xb;
              }
              *param_1 = (ulonglong)puVar25;
              *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
              *(undefined8 **)param_1[6] = puVar20;
              param_1[6] = (ulonglong)(puVar20 + 1);
              uVar17 = *(undefined8 *)(lVar19 + 0x38);
              uVar5 = *(undefined4 *)(lVar19 + 0x40);
              uVar10 = *(undefined8 *)(lVar19 + 0x28);
              uVar6 = *(undefined4 *)(lVar19 + 0x30);
              uVar11 = *(undefined8 *)(lVar19 + 0x18);
              uVar7 = *(undefined4 *)(lVar19 + 0x20);
              uVar12 = *(undefined8 *)(lVar19 + 8);
              uVar8 = *(undefined4 *)(lVar19 + 0x10);
              puVar20[1] = 0;
              *puVar20 = &PTR_FUN_14a1e7fa8;
              puVar20[2] = local_110;
              puVar20[3] = uVar12;
              *(undefined4 *)(puVar20 + 4) = uVar8;
              puVar20[5] = uVar11;
              *(undefined4 *)(puVar20 + 6) = uVar7;
              puVar20[7] = uVar10;
              *(undefined4 *)(puVar20 + 8) = uVar6;
              puVar20[9] = uVar17;
              *(undefined4 *)(puVar20 + 10) = uVar5;
              *(undefined8 *)(lVar19 + 8) = 0;
              *(undefined4 *)(lVar19 + 0x10) = 0;
              *(undefined8 *)(lVar19 + 0x18) = 0;
              *(undefined4 *)(lVar19 + 0x20) = 0;
              *(undefined8 *)(lVar19 + 0x28) = 0;
              *(undefined4 *)(lVar19 + 0x30) = 0;
              *(undefined8 *)(lVar19 + 0x38) = 0;
              *(undefined4 *)(lVar19 + 0x40) = 0;
              puVar25 = local_108;
            }
            uVar27 = *(int *)((longlong)puVar18 + 0x1c) + 0x3ffU >> 10;
            if (0xffff < uVar27) {
              uVar27 = 0x10000;
            }
            puVar21 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
            puVar20 = puVar21 + 4;
            if ((undefined8 *)param_1[1] < puVar20) {
              FUN_140023dd8(param_1,0x28);
              puVar21 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
              puVar20 = puVar21 + 4;
            }
            lVar19 = local_c0[0];
            *param_1 = (ulonglong)puVar20;
            *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
            *(undefined8 **)param_1[6] = puVar21;
            param_1[6] = (ulonglong)(puVar21 + 1);
            puVar21[1] = 0;
            *puVar21 = &PTR_LAB_14a1fbc30;
            *(uint *)(puVar21 + 2) = uVar27;
            *(undefined1 **)((longlong)puVar21 + 0x14) = &DAT_100000001;
            if (local_c0[0] != 0) {
              LOCK();
              puVar1 = (uint *)(local_c0[0] + 8);
              uVar27 = *puVar1;
              *puVar1 = *puVar1 - 1;
              UNLOCK();
              if ((uVar27 & 0x3fffffff) == 1) {
                puVar1 = (uint *)(local_c0[0] + 8);
                LOCK();
                uVar27 = *puVar1;
                *puVar1 = *puVar1 | 0x40000000;
                UNLOCK();
                if ((uVar27 >> 0x1e & 1) == 0) {
                  bVar3 = *(byte *)(local_c0[0] + 0xd);
                  plVar22 = (longlong *)FUN_14001cc68(0x10,8);
                  plVar22[1] = lVar19;
                  plVar24 = DAT_14ca843c0;
                  plVar23 = DAT_14ca843c8;
                  if ((bVar3 & 2) == 0) {
                    do {
                      *plVar22 = (longlong)plVar24;
                      LOCK();
                      bVar28 = plVar24 != DAT_14ca843c0;
                      plVar23 = plVar22;
                      if (bVar28) {
                        plVar24 = DAT_14ca843c0;
                        plVar23 = DAT_14ca843c0;
                      }
                      DAT_14ca843c0 = plVar23;
                      UNLOCK();
                    } while (bVar28);
                  }
                  else {
                    do {
                      *plVar22 = (longlong)plVar23;
                      LOCK();
                      bVar28 = plVar23 != DAT_14ca843c8;
                      plVar24 = plVar22;
                      if (bVar28) {
                        plVar23 = DAT_14ca843c8;
                        plVar24 = DAT_14ca843c8;
                      }
                      DAT_14ca843c8 = plVar24;
                      UNLOCK();
                    } while (bVar28);
                  }
                }
              }
            }
          }
          puVar18 = puVar18 + 5;
        } while (puVar18 != puVar25);
      }
      if (DAT_14ca8507b != '\0') {
        puVar2 = param_1 + 0x12;
        uVar27 = (uint)param_1[0x13];
        if (0 < (int)uVar27) {
          uVar27 = 0;
          *(undefined4 *)(param_1 + 0x13) = 0;
          if (*(int *)((longlong)param_1 + 0x9c) < 0) {
            FUN_147139e90(puVar2,0);
            uVar27 = (uint)param_1[0x13];
          }
        }
        lVar19 = local_118;
        if ((*(char *)(local_118 + 0xe6) != '\0') && (*(char *)(local_118 + 0xe7) != '\x06')) {
          uVar4 = *(undefined2 *)(local_118 + 0xe4);
          *(uint *)(param_1 + 0x13) = uVar27 + 1;
          if (*(uint *)((longlong)param_1 + 0x9c) < uVar27 + 1) {
            FUN_1447477d8(puVar2,uVar27);
          }
          uVar16 = param_1[0x12];
          *(undefined2 *)(uVar16 + (longlong)(int)uVar27 * 4) = uVar4;
          *(undefined1 *)(uVar16 + 2 + (longlong)(int)uVar27 * 4) = 0;
          uVar27 = (uint)param_1[0x13];
        }
        if ((*(char *)(lVar19 + 0xe2) != '\0') && (*(char *)(lVar19 + 0xe3) != '\x06')) {
          uVar4 = *(undefined2 *)(lVar19 + 0xe0);
          *(uint *)(param_1 + 0x13) = uVar27 + 1;
          if (*(uint *)((longlong)param_1 + 0x9c) < uVar27 + 1) {
            FUN_1447477d8(puVar2,uVar27);
          }
          uVar16 = param_1[0x12];
          *(undefined2 *)(uVar16 + (longlong)(int)uVar27 * 4) = uVar4;
          *(undefined1 *)(uVar16 + 2 + (longlong)(int)uVar27 * 4) = 0;
          uVar27 = (uint)param_1[0x13];
        }
        if (0 < (int)uVar27) {
          if (DAT_14ca8507b == '\x01') {
            _Src = (void *)*puVar2;
            puVar18 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
            puVar25 = puVar18 + 5;
            if ((undefined8 *)param_1[1] < puVar25) {
              FUN_140023dd8(param_1,0x30);
              puVar18 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
              puVar25 = puVar18 + 5;
            }
            *param_1 = (ulonglong)puVar25;
            *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
            *(undefined8 **)param_1[6] = puVar18;
            param_1[6] = (ulonglong)(puVar18 + 1);
            _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
            pvVar26 = (void *)((longlong)_Dst + (ulonglong)uVar27 * 4);
            _Size = (ulonglong)uVar27 * 4;
            if ((void *)param_1[1] < pvVar26) {
              FUN_140023dd8(param_1,(uint)_Size | 2);
              _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
              pvVar26 = (void *)((longlong)_Dst + _Size);
            }
            *param_1 = (ulonglong)pvVar26;
            memcpy(_Dst,_Src,_Size);
            puVar18[1] = 0;
            *puVar18 = &PTR_FUN_14a1fbc38;
            puVar18[2] = local_110;
            puVar18[3] = _Dst;
            *(uint *)(puVar18 + 4) = uVar27;
          }
          *(undefined4 *)(param_1 + 0x13) = 0;
          if (*(int *)((longlong)param_1 + 0x9c) < 0) {
            FUN_147139e90(puVar2,0);
          }
        }
      }
      if (local_90 != 0) {
        LOCK();
        puVar1 = (uint *)(local_90 + 8);
        uVar27 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar27 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(local_90 + 8);
          LOCK();
          uVar27 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar27 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(local_90 + 0xd);
            plVar22 = (longlong *)FUN_14001cc68(0x10,8);
            plVar22[1] = local_90;
            plVar24 = DAT_14ca843c0;
            plVar23 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar22 = (longlong)plVar24;
                LOCK();
                bVar28 = plVar24 != DAT_14ca843c0;
                plVar23 = plVar22;
                if (bVar28) {
                  plVar24 = DAT_14ca843c0;
                  plVar23 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar23;
                UNLOCK();
              } while (bVar28);
            }
            else {
              do {
                *plVar22 = (longlong)plVar23;
                LOCK();
                bVar28 = plVar23 != DAT_14ca843c8;
                plVar24 = plVar22;
                if (bVar28) {
                  plVar23 = DAT_14ca843c8;
                  plVar24 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar24;
                UNLOCK();
              } while (bVar28);
            }
          }
        }
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1432024ba FUN_1432024ba body=1425 status=ok
// SIG undefined FUN_1432024ba(void)

void FUN_1432024ba(ulonglong *param_1,undefined4 param_2,int param_3,undefined8 param_4)

{
  uint *puVar1;
  ulonglong *puVar2;
  byte bVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  void *_Src;
  longlong lVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  longlong lVar19;
  longlong *plVar20;
  longlong *plVar21;
  undefined8 *puVar22;
  void *pvVar23;
  longlong *plVar24;
  uint uVar25;
  undefined2 *puVar26;
  size_t _Size;
  void *_Dst;
  bool bVar27;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined2 *local_80;
  ulonglong local_78;
  longlong local_70;
  longlong local_68;
  longlong lStack_60;
  undefined8 local_58;
  undefined4 local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_50 = param_2;
  local_4c = param_3;
  if ((DAT_14ca84f10 == '\x01') && (((&DAT_14ca814cd)[(ulonglong)DAT_14ca85550 * 0x3c] & 3) != 0)) {
    uVar17 = *(undefined8 *)
              (&DAT_14ca8c1f0 +
              (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8);
    FUN_145eb2df6();
    uVar16 = 0;
    FUN_1448e935e(uVar17,&local_68,&DAT_14ca94fd8,0);
    FUN_145eb2df6();
    lVar13 = local_68;
    if (local_68 != 0) {
      uVar16 = *(ulonglong *)
                (*(longlong *)(*(longlong *)(lStack_60 + 8) + 0x50) +
                (longlong)*(int *)(local_68 + 0xd4) * 8);
      if (uVar16 == 0) {
        uVar16 = FUN_1400bafc2(*(longlong *)(lStack_60 + 8),(longlong)*(int *)(local_68 + 0xd4),1);
      }
    }
    uVar17 = FUN_140029432(param_1,uVar16,0);
    param_1[0x37] = uVar16;
    puVar18 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar22 = puVar18 + 3;
    if ((undefined8 *)param_1[1] < puVar22) {
      FUN_140023dd8(param_1,0x20);
      puVar18 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar22 = puVar18 + 3;
    }
    *param_1 = (ulonglong)puVar22;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar18;
    param_1[6] = (ulonglong)(puVar18 + 1);
    puVar18[1] = 0;
    *puVar18 = &PTR_LAB_14a37d340;
    puVar18[2] = uVar17;
    lVar19 = FUN_144821ef4(param_1);
    lStack_60 = 0;
    local_68 = 0x40000;
    local_88 = &local_68;
    local_58 = param_4;
    (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_70,param_1,param_4);
    FUN_144abbe48(lVar19,lVar13 + 0xf0,&local_4c,0);
    FUN_144abbe48(lVar19,lVar13 + 0xf6,&local_50,0);
    FUN_144abbe48(lVar19,lVar13 + 0xe4,&stack0x00000028,0);
    FUN_144abbe48(lVar19,lVar13 + 0xea,&stack0x00000030,0);
    puVar26 = (undefined2 *)(lVar13 + 0xe0);
    FUN_144a86bff(lVar19,puVar26,local_70);
    uVar25 = local_4c + 0x3ffU >> 10;
    if (0xffff < uVar25) {
      uVar25 = 0x10000;
    }
    iVar14 = *(int *)(lVar19 + 0x30) + *(int *)(lVar19 + 0x20);
    iVar15 = iVar14 + *(int *)(lVar19 + 0x40);
    if (iVar15 != 0 && SCARRY4(iVar14,*(int *)(lVar19 + 0x40)) == iVar15 < 0) {
      puVar18 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar22 = puVar18 + 0xb;
      local_80 = puVar26;
      local_78 = uVar16;
      if ((undefined8 *)param_1[1] < puVar22) {
        FUN_140023dd8(param_1,0x60);
        puVar18 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar22 = puVar18 + 0xb;
      }
      *param_1 = (ulonglong)puVar22;
      *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
      *(undefined8 **)param_1[6] = puVar18;
      param_1[6] = (ulonglong)(puVar18 + 1);
      uVar17 = *(undefined8 *)(lVar19 + 0x38);
      uVar5 = *(undefined4 *)(lVar19 + 0x40);
      uVar9 = *(undefined8 *)(lVar19 + 0x28);
      uVar6 = *(undefined4 *)(lVar19 + 0x30);
      uVar10 = *(undefined8 *)(lVar19 + 0x18);
      uVar7 = *(undefined4 *)(lVar19 + 0x20);
      uVar11 = *(undefined8 *)(lVar19 + 8);
      uVar8 = *(undefined4 *)(lVar19 + 0x10);
      puVar18[1] = 0;
      *puVar18 = &PTR_FUN_14a1e7fa8;
      puVar18[2] = local_78;
      puVar18[3] = uVar11;
      *(undefined4 *)(puVar18 + 4) = uVar8;
      puVar18[5] = uVar10;
      *(undefined4 *)(puVar18 + 6) = uVar7;
      puVar18[7] = uVar9;
      *(undefined4 *)(puVar18 + 8) = uVar6;
      puVar18[9] = uVar17;
      *(undefined4 *)(puVar18 + 10) = uVar5;
      *(undefined8 *)(lVar19 + 8) = 0;
      *(undefined4 *)(lVar19 + 0x10) = 0;
      *(undefined8 *)(lVar19 + 0x18) = 0;
      *(undefined4 *)(lVar19 + 0x20) = 0;
      *(undefined8 *)(lVar19 + 0x28) = 0;
      *(undefined4 *)(lVar19 + 0x30) = 0;
      *(undefined8 *)(lVar19 + 0x38) = 0;
      *(undefined4 *)(lVar19 + 0x40) = 0;
      uVar16 = local_78;
      puVar26 = local_80;
    }
    puVar18 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar22 = puVar18 + 4;
    if ((undefined8 *)param_1[1] < puVar22) {
      FUN_140023dd8(param_1,0x28);
      puVar18 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar22 = puVar18 + 4;
    }
    *param_1 = (ulonglong)puVar22;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar18;
    param_1[6] = (ulonglong)(puVar18 + 1);
    puVar18[1] = 0;
    *puVar18 = &PTR_LAB_14a1fbc30;
    *(uint *)(puVar18 + 2) = uVar25;
    *(undefined1 **)((longlong)puVar18 + 0x14) = &DAT_100000001;
    if (local_70 != 0) {
      LOCK();
      puVar1 = (uint *)(local_70 + 8);
      uVar25 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar25 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_70 + 8);
        LOCK();
        uVar25 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar25 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_70 + 0xd);
          plVar20 = (longlong *)FUN_14001cc68(0x10,8);
          plVar20[1] = local_70;
          plVar24 = DAT_14ca843c0;
          plVar21 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar20 = (longlong)plVar24;
              LOCK();
              bVar27 = plVar24 != DAT_14ca843c0;
              plVar21 = plVar20;
              if (bVar27) {
                plVar24 = DAT_14ca843c0;
                plVar21 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar21;
              UNLOCK();
            } while (bVar27);
          }
          else {
            do {
              *plVar20 = (longlong)plVar21;
              LOCK();
              bVar27 = plVar21 != DAT_14ca843c8;
              plVar24 = plVar20;
              if (bVar27) {
                plVar21 = DAT_14ca843c8;
                plVar24 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar24;
              UNLOCK();
            } while (bVar27);
          }
        }
      }
    }
    puVar2 = param_1 + 0x12;
    uVar25 = (uint)param_1[0x13];
    if (0 < (int)uVar25) {
      uVar25 = 0;
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar2,0);
        uVar25 = (uint)param_1[0x13];
      }
    }
    if ((*(char *)(lVar13 + 0xe2) != '\0') && (*(char *)(lVar13 + 0xe3) != '\x06')) {
      uVar4 = *puVar26;
      *(uint *)(param_1 + 0x13) = uVar25 + 1;
      if (*(uint *)((longlong)param_1 + 0x9c) < uVar25 + 1) {
        FUN_1447477d8(puVar2,uVar25);
      }
      uVar12 = param_1[0x12];
      *(undefined2 *)(uVar12 + (longlong)(int)uVar25 * 4) = uVar4;
      *(undefined1 *)(uVar12 + 2 + (longlong)(int)uVar25 * 4) = 0;
      uVar25 = (uint)param_1[0x13];
    }
    if (0 < (int)uVar25) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar2;
        puVar18 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar22 = puVar18 + 5;
        if ((undefined8 *)param_1[1] < puVar22) {
          FUN_140023dd8(param_1,0x30);
          puVar18 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar22 = puVar18 + 5;
        }
        *param_1 = (ulonglong)puVar22;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar18;
        param_1[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar23 = (void *)((ulonglong)uVar25 * 4 + (longlong)_Dst);
        _Size = (ulonglong)uVar25 * 4;
        if ((void *)param_1[1] < pvVar23) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar23 = (void *)(_Size + (longlong)_Dst);
        }
        *param_1 = (ulonglong)pvVar23;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = uVar16;
        puVar18[3] = _Dst;
        *(uint *)(puVar18 + 4) = uVar25;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar2,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143202aa2 FUN_143202aa2 body=2290 status=ok
// SIG undefined FUN_143202aa2(void)

void FUN_143202aa2(void)

{
  int *piVar1;
  int iVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  longlong lVar11;
  int *piVar12;
  longlong lVar13;
  ulonglong uVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  longlong local_70;
  longlong local_68;
  int *local_58;
  int *local_50;
  
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar5 = (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportStationarySkylight",1);
  if (plVar5 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    lVar6 = (**(code **)(*plVar5 + 0x68))(plVar5);
  }
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar5 = (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportLowQualityLightmaps",1);
  if (plVar5 == (longlong *)0x0) {
    lVar7 = 0;
  }
  else {
    lVar7 = (**(code **)(*plVar5 + 0x68))(plVar5);
  }
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar5 = (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))
                     (DAT_14c8407a8,L"r.SupportPointLightWholeSceneShadows",1);
  if (plVar5 == (longlong *)0x0) {
    lVar8 = 0;
  }
  else {
    lVar8 = (**(code **)(*plVar5 + 0x68))(plVar5);
  }
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar5 = (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
  if (plVar5 == (longlong *)0x0) {
    lVar9 = 0;
  }
  else {
    lVar9 = (**(code **)(*plVar5 + 0x68))(plVar5);
  }
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar5 = (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.VertexFoggingForOpaque",1);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x68))(plVar5);
  }
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar5 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.AllowStaticLighting",1)
  ;
  if (plVar5 == (longlong *)0x0) {
    piVar10 = (int *)0x0;
  }
  else {
    piVar10 = (int *)(**(code **)(*plVar5 + 0x68))(plVar5);
  }
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar5 = (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportSkyAtmosphere",1);
  if (plVar5 == (longlong *)0x0) {
    lVar11 = 0;
  }
  else {
    lVar11 = (**(code **)(*plVar5 + 0x68))(plVar5);
  }
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar5 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.MobileHDR",1);
  if (plVar5 == (longlong *)0x0) {
    local_58 = (int *)0x0;
  }
  else {
    local_58 = (int *)(**(code **)(*plVar5 + 0x68))(plVar5);
  }
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar5 = (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))
                     (DAT_14c8407a8,L"r.Mobile.EnableStaticAndCSMShadowReceivers",1);
  if (plVar5 == (longlong *)0x0) {
    local_50 = (int *)0x0;
  }
  else {
    local_50 = (int *)(**(code **)(*plVar5 + 0x68))(plVar5);
  }
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar5 = (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))
                     (DAT_14c8407a8,L"r.Mobile.EnableMovableLightCSMShaderCulling",1);
  if (plVar5 == (longlong *)0x0) {
    local_70 = 0;
  }
  else {
    local_70 = (**(code **)(*plVar5 + 0x68))(plVar5);
  }
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar5 = (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))
                     (DAT_14c8407a8,L"r.Mobile.AllowDistanceFieldShadows",1);
  if (plVar5 == (longlong *)0x0) {
    piVar12 = (int *)0x0;
  }
  else {
    piVar12 = (int *)(**(code **)(*plVar5 + 0x68))(plVar5);
  }
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar5 = (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Mobile.SupportGPUScene",1);
  if (plVar5 == (longlong *)0x0) {
    local_68 = 0;
  }
  else {
    local_68 = (**(code **)(*plVar5 + 0x68))(plVar5);
  }
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar5 = (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Mobile.Forward.DecalLighting",1);
  if (plVar5 == (longlong *)0x0) {
    lVar13 = 0;
  }
  else {
    lVar13 = (**(code **)(*plVar5 + 0x68))(plVar5);
  }
  if (lVar9 == 0) {
    bVar15 = false;
  }
  else {
    iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar2 == 0x40000002) {
      uVar14 = 0;
    }
    else {
      bVar15 = true;
      if ((DAT_14c86a9f8 == '\x01') && (iVar2 != 2)) {
        if (iVar2 == 1) {
          DVar3 = FUN_140ad26c0();
          DVar4 = GetCurrentThreadId();
          bVar15 = DVar3 == DVar4;
        }
        else {
          bVar15 = false;
        }
      }
      uVar14 = (ulonglong)(bVar15 ^ 1);
    }
    bVar15 = *(int *)(lVar9 + uVar14 * 4) != 0;
  }
  bVar17 = true;
  if (lVar6 != 0) {
    iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar2 == 0x40000002) {
      uVar14 = 0;
    }
    else {
      bVar17 = true;
      if ((DAT_14c86a9f8 == '\x01') && (iVar2 != 2)) {
        if (iVar2 == 1) {
          DVar3 = FUN_140ad26c0();
          DVar4 = GetCurrentThreadId();
          bVar17 = DVar3 == DVar4;
        }
        else {
          bVar17 = false;
        }
      }
      uVar14 = (ulonglong)(bVar17 ^ 1);
    }
    bVar17 = true;
    if (*(int *)(lVar6 + uVar14 * 4) == 0) {
      bVar17 = bVar15;
    }
  }
  bVar16 = true;
  DAT_14c760dd4 = bVar17;
  if (lVar8 != 0) {
    iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar2 == 0x40000002) {
      uVar14 = 0;
    }
    else {
      bVar17 = true;
      if ((DAT_14c86a9f8 == '\x01') && (iVar2 != 2)) {
        if (iVar2 == 1) {
          DVar3 = FUN_140ad26c0();
          DVar4 = GetCurrentThreadId();
          bVar17 = DVar3 == DVar4;
        }
        else {
          bVar17 = false;
        }
      }
      uVar14 = (ulonglong)(bVar17 ^ 1);
    }
    bVar16 = true;
    if (*(int *)(lVar8 + uVar14 * 4) == 0) {
      bVar16 = bVar15;
    }
  }
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  DAT_14c760e15 = bVar16;
  bVar17 = true;
  if (lVar7 != 0) {
    iVar2 = *piVar1;
    if (iVar2 == 0x40000002) {
      uVar14 = 0;
    }
    else {
      bVar17 = true;
      if ((DAT_14c86a9f8 == '\x01') && (iVar2 != 2)) {
        if (iVar2 == 1) {
          DVar3 = FUN_140ad26c0();
          DVar4 = GetCurrentThreadId();
          bVar17 = DVar3 == DVar4;
        }
        else {
          bVar17 = false;
        }
      }
      uVar14 = (ulonglong)(bVar17 ^ 1);
    }
    bVar17 = true;
    if (*(int *)(lVar7 + uVar14 * 4) == 0) {
      bVar17 = bVar15;
    }
  }
  DAT_14c760e0c = bVar17;
  iVar2 = *piVar1;
  if (iVar2 == 0x40000002) {
    DAT_14c760e18 = *piVar10 != 0;
    if (lVar11 != 0) {
LAB_143202ff9:
      iVar2 = 0x40000002;
      uVar14 = 0;
LAB_143203023:
      bVar17 = true;
      if (*(int *)(lVar11 + uVar14 * 4) == 0) {
        bVar17 = bVar15;
      }
      goto LAB_143203033;
    }
    DAT_14c760dd5 = true;
LAB_143203041:
    DAT_14c760e14 = *local_58 == 1;
LAB_143203091:
    DAT_14c760e0d = *piVar12 != 0;
LAB_14320309b:
    DAT_14c760e16 = *local_50 != 0;
  }
  else {
    bVar17 = true;
    if ((DAT_14c86a9f8 == '\x01') && (iVar2 != 2)) {
      if (iVar2 == 1) {
        DVar3 = FUN_140ad26c0();
        DVar4 = GetCurrentThreadId();
        bVar16 = DVar3 == DVar4;
        iVar2 = *piVar1;
      }
      else {
        bVar16 = false;
      }
    }
    else {
      bVar16 = true;
    }
    DAT_14c760e18 = piVar10[bVar16 ^ 1] != 0;
    if (lVar11 != 0) {
      if (iVar2 == 0x40000002) goto LAB_143202ff9;
      bVar17 = true;
      if ((DAT_14c86a9f8 == '\x01') && (iVar2 != 2)) {
        if (iVar2 == 1) {
          DVar3 = FUN_140ad26c0();
          DVar4 = GetCurrentThreadId();
          bVar17 = DVar3 == DVar4;
          iVar2 = *piVar1;
        }
        else {
          bVar17 = false;
        }
      }
      uVar14 = (ulonglong)(bVar17 ^ 1);
      goto LAB_143203023;
    }
LAB_143203033:
    DAT_14c760dd5 = bVar17;
    if (iVar2 == 0x40000002) goto LAB_143203041;
    if ((DAT_14c86a9f8 == '\x01') && (iVar2 != 2)) {
      uVar14 = 1;
      if (iVar2 == 1) {
        DVar3 = FUN_140ad26c0();
        DVar4 = GetCurrentThreadId();
        uVar14 = (ulonglong)(DVar3 != DVar4);
        iVar2 = *piVar1;
      }
      DAT_14c760e14 = local_58[uVar14] == 1;
      if (iVar2 != 0x40000002) goto LAB_1432031ad;
      goto LAB_143203091;
    }
    DAT_14c760e14 = *local_58 == 1;
LAB_1432031ad:
    if ((DAT_14c86a9f8 == '\x01') && (iVar2 != 2)) {
      uVar14 = 1;
      if (iVar2 == 1) {
        DVar3 = FUN_140ad26c0();
        DVar4 = GetCurrentThreadId();
        uVar14 = (ulonglong)(DVar3 != DVar4);
        iVar2 = *piVar1;
      }
      DAT_14c760e0d = piVar12[uVar14] != 0;
      if (iVar2 != 0x40000002) goto LAB_1432031e7;
      goto LAB_14320309b;
    }
    DAT_14c760e0d = *piVar12 != 0;
LAB_1432031e7:
    if ((DAT_14c86a9f8 == '\x01') && (iVar2 != 2)) {
      uVar14 = 1;
      if (iVar2 == 1) {
        DVar3 = FUN_140ad26c0();
        DVar4 = GetCurrentThreadId();
        uVar14 = (ulonglong)(DVar3 != DVar4);
        iVar2 = *piVar1;
      }
      DAT_14c760e16 = local_50[uVar14] != 0;
      if (iVar2 != 0x40000002) goto LAB_14320321e;
    }
    else {
      DAT_14c760e16 = *local_50 != 0;
LAB_14320321e:
      if ((DAT_14c86a9f8 == '\x01') && (iVar2 != 2)) {
        if (iVar2 == 1) {
          DVar3 = FUN_140ad26c0();
          DVar4 = GetCurrentThreadId();
          uVar14 = (ulonglong)(DVar3 != DVar4);
        }
        else {
          uVar14 = 1;
        }
        goto LAB_1432030ac;
      }
    }
  }
  uVar14 = 0;
LAB_1432030ac:
  DAT_14c760e17 = *(int *)(local_70 + uVar14 * 4) != 0;
  DAT_14ca964d8 = FUN_14631eb7e(DAT_14ca85550);
  DAT_14c760e10 = FUN_14631ec04(DAT_14ca85550);
  DAT_14ca964f0 = FUN_14631ed10(DAT_14ca85550);
  DAT_14ca964dc = FUN_14631ee98();
  iVar2 = *piVar1;
  if (((iVar2 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar2 == 2)) {
    uVar14 = 0;
  }
  else if (iVar2 == 1) {
    DVar3 = FUN_140ad26c0();
    DVar4 = GetCurrentThreadId();
    uVar14 = (ulonglong)(DVar3 != DVar4);
  }
  else {
    uVar14 = 1;
  }
  DAT_14ca96500 = *(int *)(local_68 + uVar14 * 4) != 0;
  DAT_14ca964dd = FUN_14631ec8a();
  iVar2 = *piVar1;
  if (((iVar2 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar2 == 2)) {
    uVar14 = 0;
  }
  else if (iVar2 == 1) {
    DVar3 = FUN_140ad26c0();
    DVar4 = GetCurrentThreadId();
    uVar14 = (ulonglong)(DVar3 != DVar4);
  }
  else {
    uVar14 = 1;
  }
  DAT_14c760dd8 = *(undefined4 *)(lVar13 + uVar14 * 4);
  return;
}



// FUNCTION 143203394 FUN_143203394 body=1769 status=ok
// SIG undefined FUN_143203394(void)

undefined1 * FUN_143203394(undefined1 *param_1,char param_2,longlong param_3,undefined8 param_4)

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
  longlong *plVar12;
  uint uVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined1 auStack_b8 [32];
  code **local_98;
  longlong local_88;
  undefined8 uStack_80;
  code *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  longlong local_50;
  undefined8 uStack_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2 == '\0') {
    *param_1 = 0;
    param_1[1] = param_3 != 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    goto LAB_14320359e;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8338a0) && (FUN_144b3d300(&DAT_14c8338a0), DAT_14c8338a0 == -1)) {
    FUN_1456d85e6(&DAT_14c8337f0);
    atexit((_func_5014 *)&LAB_142748837);
    _Init_thread_footer(&DAT_14c8338a0);
  }
  (**(code **)(DAT_14c8337f0 + 8))(&DAT_14c8337f0);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8338a0) && (FUN_144b3d300(&DAT_14c8338a0), DAT_14c8338a0 == -1)) {
    FUN_1456d85e6(&DAT_14c8337f0);
    atexit((_func_5014 *)&LAB_142748837);
    _Init_thread_footer(&DAT_14c8338a0);
  }
  FUN_140e8e738(local_78);
  iVar6 = (**(code **)(DAT_14c8337f0 + 0x18))(&DAT_14c8337f0,local_78[0]);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8338a0) && (FUN_144b3d300(&DAT_14c8338a0), DAT_14c8338a0 == -1)) {
    FUN_1456d85e6(&DAT_14c8337f0);
    atexit((_func_5014 *)&LAB_142748837);
    _Init_thread_footer(&DAT_14c8338a0);
  }
  (**(code **)(DAT_14c8337f0 + 0x10))(&DAT_14c8337f0);
  param_1[1] = param_3 != 0;
  *param_1 = 0 < iVar6;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (iVar6 < 1) goto LAB_14320359e;
  FUN_140056680(&local_88,param_4);
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_1432034c5;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_1432038fd;
      goto LAB_1432034ce;
    }
LAB_1432038fd:
    plVar12 = (longlong *)FUN_147381ad4();
    (**(code **)(*plVar12 + 0x10))(plVar12,&DAT_14ca85100,1,&local_88);
  }
  else {
LAB_1432034c5:
    if (iVar6 == 0x10) goto LAB_1432038fd;
LAB_1432034ce:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
      goto LAB_1432038fd;
      if (iVar6 == 1) {
        DVar7 = FUN_140ad26c0();
        DVar8 = GetCurrentThreadId();
        if (DVar7 == DVar8) goto LAB_1432038fd;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar2 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar10 = (uint *)*puVar2;
      if (puVar10 != (uint *)0x0) goto LAB_143203669;
      while( true ) {
        uVar13 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar13 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar13 | 1;
          __tlregdtor(&LAB_1432149cc);
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
LAB_143203669:
        puVar16 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar15 = (uint *)(puVar16 + 0x17);
        uVar13 = puVar10[0x12];
        if (puVar15 <= puVar10 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
          LOCK();
          uVar3 = *puVar10;
          *puVar10 = *puVar10 + uVar13 + 1;
          UNLOCK();
          if ((uVar3 ^ uVar13) != 0xffffffff) break;
          puVar10 = (uint *)*puVar2;
          *puVar10 = 0xffffffff;
          *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
          puVar10[0x12] = 0;
          *puVar2 = puVar10;
          puVar16 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
          puVar15 = (uint *)(puVar16 + 0x17);
          uVar13 = 0;
          if (puVar15 <= puVar10 + 0x4000) {
            uVar13 = 1;
            goto LAB_1432036e9;
          }
        }
      }
      uVar13 = uVar13 + 1;
LAB_1432036e9:
      *(uint **)(puVar10 + 0x10) = puVar15;
      puVar10[0x12] = uVar13;
      iVar6 = 0;
      FUN_1447247dc(puVar16,0);
      *puVar16 = &PTR_FUN_14a38b568;
      puVar16[0x15] = local_88;
      local_88 = 0;
      *(undefined4 *)(puVar16 + 0x16) = (undefined4)uStack_80;
      *(undefined4 *)((longlong)puVar16 + 0xb4) = uStack_80._4_4_;
      uStack_80 = 0;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar13 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
          uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
        }
        else {
          uVar17 = 2;
        }
      }
      else {
        iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar17 = 5;
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
        if ((char)uVar17 != '\x06') {
          uVar5 = uVar17;
        }
        uVar17 = uVar5;
        uVar11 = 0;
      }
      else {
        if ((char)uVar17 == '\x06') {
          uVar17 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
        }
        uVar11 = *(undefined8 *)(lVar4 + 0x30);
      }
      puVar16[0xf] = uVar11;
      puVar16[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar16 + 0x1c) = iVar6;
      if (puVar16 == (undefined8 *)0x0) {
        local_78[0] = (code *)CONCAT71(local_78[0]._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
        UNLOCK();
        local_78[0] = (code *)CONCAT71(local_78[0]._1_7_,1);
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
      local_68 = (undefined ***)0x0;
      local_58 = &PTR_LAB_14a38b520;
      local_50 = local_88;
      uStack_48 = uStack_80;
      local_88 = 0;
      uStack_80 = 0;
      local_78[0] = FUN_143214aa4;
      local_98 = local_78;
      FUN_14005a792(&DAT_14ca9a440,L"BeginCaptureCommand",&DAT_14ca960c8);
      if (local_78[0] != (code *)0x0) {
        pppuVar14 = local_68;
        if (local_68 == (undefined ***)0x0) {
          pppuVar14 = &local_58;
        }
        (*(code *)(*pppuVar14)[2])();
      }
    }
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
LAB_14320359e:
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143203a7e FUN_143203a7e body=585 status=ok
// SIG undefined FUN_143203a7e(void)

byte * FUN_143203a7e(byte *param_1,char param_2,longlong param_3,longlong param_4,undefined8 param_5
                    )

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != '\0') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c8338a0) {
      FUN_144b3d300(&DAT_14c8338a0);
      if (DAT_14c8338a0 == -1) {
        FUN_1456d85e6(&DAT_14c8337f0);
        atexit((_func_5014 *)&LAB_142748837);
        _Init_thread_footer(&DAT_14c8338a0);
      }
    }
    (**(code **)(DAT_14c8337f0 + 8))(&DAT_14c8337f0);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c8338a0) {
      FUN_144b3d300(&DAT_14c8338a0);
      if (DAT_14c8338a0 == -1) {
        FUN_1456d85e6(&DAT_14c8337f0);
        atexit((_func_5014 *)&LAB_142748837);
        _Init_thread_footer(&DAT_14c8338a0);
      }
    }
    FUN_140e8e738(local_40);
    iVar2 = (**(code **)(DAT_14c8337f0 + 0x18))(&DAT_14c8337f0,local_40[0]);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c8338a0) {
      FUN_144b3d300(&DAT_14c8338a0);
      if (DAT_14c8338a0 == -1) {
        FUN_1456d85e6(&DAT_14c8337f0);
        atexit((_func_5014 *)&LAB_142748837);
        _Init_thread_footer(&DAT_14c8338a0);
      }
    }
    (**(code **)(DAT_14c8337f0 + 0x10))(&DAT_14c8337f0);
    if (0 < iVar2) {
      bVar1 = *(byte *)(param_3 + 0x17b);
      param_1[1] = param_4 != 0;
      bVar1 = bVar1 >> 5 & 1;
      *param_1 = bVar1;
      *(longlong *)(param_1 + 8) = param_3;
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      if (bVar1 != 0) {
        plVar3 = (longlong *)FUN_147381ad4();
        FUN_140056680(local_40,param_5);
        (**(code **)(*plVar3 + 0x10))(plVar3,*(undefined8 *)(param_1 + 8),1,local_40);
        if (local_40[0] != 0) {
          FUN_1400020a8();
        }
      }
      goto LAB_143203bdd;
    }
  }
  *param_1 = 0;
  param_1[1] = param_4 != 0;
  *(longlong *)(param_1 + 8) = param_3;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
LAB_143203bdd:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143203ce2 FUN_143203ce2 body=1218 status=ok
// SIG undefined FUN_143203ce2(void)

void FUN_143203ce2(undefined4 param_1)

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
  undefined **local_88;
  undefined *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  undefined4 local_50;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  DAT_14c75b140 = param_1;
  if (DAT_14c86a9fc == 0) {
    if (iVar6 == 2) goto LAB_143203dd9;
    if (iVar6 != 1) goto LAB_143203d34;
    DVar7 = FUN_140ad26c0();
    DVar8 = GetCurrentThreadId();
    if (DVar7 == DVar8) goto LAB_143203dd9;
  }
  else {
LAB_143203d34:
    if (iVar6 == 0x10) goto LAB_143203dd9;
  }
  if (DAT_14ca9a438 == '\0') {
    if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
    goto LAB_143203dd9;
    if (iVar6 == 1) {
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_143203dd9;
    }
  }
  if (DAT_14ca9a43c == 0) {
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar10 = (uint *)*puVar2;
    if (puVar10 != (uint *)0x0) goto LAB_143203ea3;
    while( true ) {
      uVar12 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar12 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar12 | 1;
        __tlregdtor(&LAB_1432149cc);
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
LAB_143203ea3:
      puVar16 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar14 = (uint *)(puVar16 + 0x16);
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
        puVar14 = (uint *)(puVar16 + 0x16);
        uVar12 = 0;
        if (puVar14 <= puVar10 + 0x4000) {
          uVar12 = 1;
          goto LAB_143203f23;
        }
      }
    }
    uVar12 = uVar12 + 1;
LAB_143203f23:
    *(uint **)(puVar10 + 0x10) = puVar14;
    puVar10[0x12] = uVar12;
    iVar6 = 0;
    FUN_1447247dc(puVar16,0);
    *puVar16 = &PTR_FUN_14a38b720;
    *(undefined4 *)(puVar16 + 0x15) = param_1;
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
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
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
      local_78[0] = (undefined *)CONCAT71(local_78[0]._1_7_,1);
      FUN_1447439e4(0);
    }
    else {
      LOCK();
      *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
      UNLOCK();
      local_78[0] = (undefined *)CONCAT71(local_78[0]._1_7_,1);
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
    local_88 = local_78;
    local_68 = (undefined ***)0x0;
    local_58 = &PTR_LAB_14a38b6c0;
    local_78[0] = &DAT_14321583c;
    local_50 = param_1;
    FUN_14005a792(&DAT_14ca9a440,L"SetNearClipPlane_RenderThread",&DAT_14ca960d0);
    if (local_78[0] != (undefined *)0x0) {
      pppuVar13 = local_68;
      if (local_68 == (undefined ***)0x0) {
        pppuVar13 = &local_58;
      }
      (*(code *)(*pppuVar13)[2])();
    }
  }
LAB_143203dd9:
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432041a5 FUN_1432041a5 body=69 status=ok
// SIG undefined FUN_1432041a5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432041a5(void)

{
  _DAT_14ca95148 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001432041e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca95150,1);
  return;
}



// FUNCTION 1432041ea FUN_1432041ea body=69 status=ok
// SIG undefined FUN_1432041ea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432041ea(void)

{
  _DAT_14ca95160 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014320422c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca95168,1);
  return;
}



// FUNCTION 14320422f FUN_14320422f body=69 status=ok
// SIG undefined FUN_14320422f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14320422f(void)

{
  _DAT_14ca95178 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143204271. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca95180,1);
  return;
}



// FUNCTION 143204274 FUN_143204274 body=69 status=ok
// SIG undefined FUN_143204274(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143204274(void)

{
  _DAT_14ca95190 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001432042b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca95198,1);
  return;
}



// FUNCTION 1432042b9 FUN_1432042b9 body=69 status=ok
// SIG undefined FUN_1432042b9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432042b9(void)

{
  _DAT_14ca951a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001432042fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca951b0,1);
  return;
}



// FUNCTION 1432042fe FUN_1432042fe body=69 status=ok
// SIG undefined FUN_1432042fe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432042fe(void)

{
  _DAT_14ca951c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143204340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca951c8,1);
  return;
}



// FUNCTION 143204343 FUN_143204343 body=69 status=ok
// SIG undefined FUN_143204343(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143204343(void)

{
  _DAT_14ca951d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143204385. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca951e0,1);
  return;
}



// FUNCTION 143204388 FUN_143204388 body=69 status=ok
// SIG undefined FUN_143204388(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143204388(void)

{
  _DAT_14ca951f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001432043ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca951f8,1);
  return;
}



// FUNCTION 1432043cd FUN_1432043cd body=69 status=ok
// SIG undefined FUN_1432043cd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432043cd(void)

{
  _DAT_14ca95208 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014320440f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca95210,1);
  return;
}



// FUNCTION 143204412 FUN_143204412 body=127 status=ok
// SIG undefined FUN_143204412(void)

int FUN_143204412(void)

{
  longlong lVar1;
  DWORD DVar2;
  DWORD DVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  
  lVar1 = DAT_14ca95188;
  iVar6 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar6 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar6 == 2)) {
    uVar5 = 0;
  }
  else if (iVar6 == 1) {
    DVar2 = FUN_140ad26c0();
    DVar3 = GetCurrentThreadId();
    uVar5 = (ulonglong)(DVar2 != DVar3);
  }
  else {
    uVar5 = 1;
  }
  iVar6 = *(int *)(lVar1 + uVar5 * 4);
  iVar4 = 9;
  if (iVar6 < 9) {
    iVar4 = iVar6;
  }
  iVar6 = 0;
  if (0 < iVar4) {
    iVar6 = iVar4;
  }
  return iVar6;
}



// FUNCTION 143204491 FUN_143204491 body=127 status=ok
// SIG undefined FUN_143204491(void)

int FUN_143204491(void)

{
  longlong lVar1;
  DWORD DVar2;
  DWORD DVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  
  lVar1 = DAT_14ca95170;
  iVar6 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar6 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar6 == 2)) {
    uVar5 = 0;
  }
  else if (iVar6 == 1) {
    DVar2 = FUN_140ad26c0();
    DVar3 = GetCurrentThreadId();
    uVar5 = (ulonglong)(DVar2 != DVar3);
  }
  else {
    uVar5 = 1;
  }
  iVar6 = *(int *)(lVar1 + uVar5 * 4);
  iVar4 = 4;
  if (iVar6 < 4) {
    iVar4 = iVar6;
  }
  iVar6 = 0;
  if (0 < iVar4) {
    iVar6 = iVar4;
  }
  return iVar6;
}



// FUNCTION 143204510 FUN_143204510 body=41 status=ok
// SIG undefined FUN_143204510(void)

void FUN_143204510(void)

{
  DAT_14ca95280 = 0;
  if (DAT_14ca95278 != 0) {
    FUN_1400020a8();
  }
  FUN_145d70608();
  return;
}



// FUNCTION 143204548 FUN_143204548 body=90 status=ok
// SIG undefined FUN_143204548(void)

void FUN_143204548(longlong param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  
  if (0 < (longlong)*(int *)(param_1 + 0x30)) {
    uVar2 = (longlong)*(int *)(param_1 + 0x30) + 1;
    do {
      puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x28) + -0x10 + uVar2 * 8);
      (**(code **)*puVar1)(puVar1,0);
      uVar2 = uVar2 - 1;
    } while (1 < uVar2);
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(int *)(param_1 + 0x34) < 0) {
    FUN_14742db8e((longlong *)(param_1 + 0x28));
  }
  FUN_14004673c(param_1,0);
  return;
}



// FUNCTION 1432045a2 FUN_1432045a2 body=47 status=ok
// SIG undefined FUN_1432045a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432045a2(void)

{
  _DAT_14ca95530 = 0;
  if (DAT_14ca95528 != 0) {
    FUN_1400020a8();
  }
  FUN_14577537e(&DAT_14ca954e8);
  return;
}



// FUNCTION 1432045d1 FUN_1432045d1 body=99 status=ok
// SIG undefined FUN_1432045d1(void)

undefined8 FUN_1432045d1(void)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (0 < DAT_14c760de8) {
    uVar2 = (ulonglong)DAT_14ca85550;
    if (((((&DAT_14ca814b8)[uVar2 * 0xf] != 1) && (uVar2 != 0x30)) &&
        (*(longlong *)(&DAT_14ca814b0 + uVar2 * 0x3c) != DAT_14ca81490)) &&
       (DAT_14ca84e2a == '\x01')) {
      lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      return CONCAT71((int7)((ulonglong)lVar1 >> 8),*(int *)(lVar1 + 0xc60) == 0x10);
    }
  }
  return 0;
}



// FUNCTION 143204634 FUN_143204634 body=226 status=ok
// SIG undefined FUN_143204634(void)

longlong FUN_143204634(undefined8 *param_1,longlong param_2)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  
  *(byte *)(param_2 + 0x38) = *(byte *)(param_2 + 0x38) | 8;
  uVar1 = *(ushort *)(param_2 + 0x28);
  *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_2 + 0x4c) = *(undefined4 *)(param_2 + 0x2c);
  iVar2 = *(int *)(param_2 + 0xd0);
  *(uint *)(param_2 + 0xd0) = iVar2 + 1U;
  if (*(uint *)(param_2 + 0xd4) < iVar2 + 1U) {
    FUN_14742e1f0(param_2 + 0xc0,iVar2);
  }
  lVar3 = param_2 + 0xc0;
  if (*(longlong *)(param_2 + 200) != 0) {
    lVar3 = *(longlong *)(param_2 + 200);
  }
  *(longlong *)(lVar3 + (longlong)iVar2 * 8) = param_2;
  iVar2 = *(int *)(param_2 + 0xe8);
  *(uint *)(param_2 + 0xe8) = iVar2 + 1U;
  if (*(uint *)(param_2 + 0xec) < iVar2 + 1U) {
    FUN_14742e1f0(param_2 + 0xd8,iVar2);
  }
  lVar3 = param_2 + 0xd8;
  if (*(longlong *)(param_2 + 0xe0) != 0) {
    lVar3 = *(longlong *)(param_2 + 0xe0);
  }
  *(longlong *)(lVar3 + (longlong)iVar2 * 8) = param_2;
  *(uint *)(param_1 + 0x2a) = *(int *)(param_1 + 0x2a) + (uint)((uVar1 >> 2 & 1) != 0);
  *(int *)((longlong)param_1 + 0x154) = *(int *)((longlong)param_1 + 0x154) + (uVar1 & 1);
  *(undefined4 *)(param_2 + 0x1ac) = *(undefined4 *)(param_1[3] + 0x17c);
  *(undefined8 *)(param_2 + 0x1b0) = *param_1;
  return param_2;
}



// FUNCTION 143204716 FUN_143204716 body=99 status=ok
// SIG undefined FUN_143204716(void)

undefined8 FUN_143204716(void)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (0 < DAT_14c760e04) {
    uVar2 = (ulonglong)DAT_14ca85550;
    if (((((&DAT_14ca814b8)[uVar2 * 0xf] != 1) && (uVar2 != 0x30)) &&
        (*(longlong *)(&DAT_14ca814b0 + uVar2 * 0x3c) != DAT_14ca81490)) &&
       (DAT_14ca84e2a == '\x01')) {
      lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      return CONCAT71((int7)((ulonglong)lVar1 >> 8),*(int *)(lVar1 + 0xc60) == 0x10);
    }
  }
  return 0;
}



// FUNCTION 1432047bc FUN_1432047bc body=620 status=ok
// SIG undefined FUN_1432047bc(void)

undefined8 * FUN_1432047bc(undefined8 *param_1,undefined8 *param_2)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e) = 0;
  if (DAT_14c872d30 == 0) {
    FUN_145bdc178();
  }
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined1 *)((longlong)param_1 + 0x25) = *(undefined1 *)((longlong)param_2 + 0x25);
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined1 *)((longlong)param_2 + 0x25) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if (param_1 != param_2) {
    if (param_1[5] != 0) {
      FUN_1400020a8();
    }
    param_1[5] = param_2[5];
    param_2[5] = 0;
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0;
  }
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 0x56) = 0;
  if (DAT_14c872d30 == 0) {
    FUN_145bdc178();
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  *(undefined1 *)((longlong)param_1 + 0x5d) = *(undefined1 *)((longlong)param_2 + 0x5d);
  *(undefined4 *)(param_2 + 0xb) = 0;
  *(undefined1 *)((longlong)param_2 + 0x5d) = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  if (param_1 != param_2) {
    if (param_1[0xc] != 0) {
      FUN_1400020a8();
    }
    param_1[0xc] = param_2[0xc];
    param_2[0xc] = 0;
    *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
    *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)((longlong)param_2 + 0x6c);
    param_2[0xd] = 0;
  }
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x8e) = 0;
  if (DAT_14c872d30 == 0) {
    FUN_145bdc178();
  }
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
  *(undefined1 *)((longlong)param_1 + 0x95) = *(undefined1 *)((longlong)param_2 + 0x95);
  *(undefined4 *)(param_2 + 0x12) = 0;
  *(undefined1 *)((longlong)param_2 + 0x95) = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  if (param_1 != param_2) {
    if (param_1[0x13] != 0) {
      FUN_1400020a8();
    }
    param_1[0x13] = param_2[0x13];
    param_2[0x13] = 0;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
    *(undefined4 *)((longlong)param_1 + 0xa4) = *(undefined4 *)((longlong)param_2 + 0xa4);
    param_2[0x14] = 0;
  }
  return param_1;
}



// FUNCTION 143204a28 FUN_143204a28 body=415 status=ok
// SIG undefined FUN_143204a28(void)

void FUN_143204a28(longlong param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  
  FUN_144b1c938(*(undefined8 *)(param_1 + 0x130),*(undefined4 *)(param_1 + 0x138));
  FUN_144a88358(*(undefined8 *)(param_1 + 0x120),*(undefined4 *)(param_1 + 0x128));
  FUN_1447350ca(*(undefined8 *)(param_1 + 0x110),*(undefined4 *)(param_1 + 0x118));
  if (0 < (longlong)*(int *)(param_1 + 0xf0)) {
    uVar2 = (longlong)*(int *)(param_1 + 0xf0) + 1;
    do {
      puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0xe8) + -0x10 + uVar2 * 8);
      (**(code **)*puVar1)(puVar1,0);
      uVar2 = uVar2 - 1;
    } while (1 < uVar2);
  }
  *(undefined4 *)(param_1 + 0xf0) = 0;
  if (*(int *)(param_1 + 0xf4) != 0) {
    FUN_143215a6e((longlong *)(param_1 + 0xe8));
  }
  *(undefined4 *)(param_1 + 0xe0) = 0;
  if (*(int *)(param_1 + 0xe4) != 0) {
    FUN_143215a60(param_1 + 0xd8);
  }
  FUN_1432159c4(param_1 + 200);
  *(undefined4 *)(param_1 + 0xc0) = 0;
  if (*(int *)(param_1 + 0xc4) != 0) {
    FUN_14178ed58(param_1 + 0xb8,0);
  }
  if (0 < (longlong)*(int *)(param_1 + 0xb0)) {
    uVar2 = (longlong)*(int *)(param_1 + 0xb0) + 1;
    do {
      puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0xa8) + -0x10 + uVar2 * 8);
      (**(code **)*puVar1)(puVar1,0);
      uVar2 = uVar2 - 1;
    } while (1 < uVar2);
  }
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if (*(int *)(param_1 + 0xb4) != 0) {
    FUN_1432159b6((longlong *)(param_1 + 0xa8));
  }
  FUN_143204548(param_1 + 0x70);
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  FUN_14004673c(param_1 + 0x70,0);
  FUN_143204548(param_1 + 0x38);
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  FUN_14004673c(param_1 + 0x38,0);
  FUN_143204548(param_1);
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  FUN_14004673c(param_1,0);
  return;
}



// FUNCTION 143204bc8 FUN_143204bc8 body=504 status=ok
// SIG undefined FUN_143204bc8(void)

void FUN_143204bc8(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  lVar5 = param_1[1];
  iVar1 = *(int *)(lVar5 + 0x68);
  if (iVar1 != 0) {
    iVar6 = 0;
    do {
      lVar5 = *(longlong *)
               (*param_1 +
               (ulonglong)*(ushort *)(*(longlong *)(param_1[1] + 0x60) + (longlong)iVar6 * 4));
      if (lVar5 != 0) {
        FUN_143204bc8(lVar5 + 0x18,param_2);
      }
      iVar6 = iVar6 + 1;
    } while (iVar1 != iVar6);
    lVar5 = param_1[1];
  }
  iVar1 = *(int *)(lVar5 + 0x38);
  if (iVar1 != 0) {
    iVar6 = 0;
    do {
      uVar3 = (uint)*(byte *)(*(longlong *)(param_1[1] + 0x30) + 2 + (longlong)iVar6 * 4);
      if (10 < uVar3 - 9) goto LAB_143204da3;
      lVar5 = *param_1;
      uVar8 = (ulonglong)*(ushort *)(*(longlong *)(param_1[1] + 0x30) + (longlong)iVar6 * 4);
      switch(uVar3) {
      default:
        if ((*(longlong *)(lVar5 + uVar8) != 0) &&
           ((*(byte *)(*(longlong *)(lVar5 + uVar8) + 0x24) & 1) == 0)) {
          FUN_14495f742(param_2);
        }
        break;
      case 0xb:
        iVar4 = *(int *)(lVar5 + 8 + uVar8);
        if (0 < iVar4) {
          lVar7 = 0;
          lVar9 = 0;
          do {
            lVar2 = *(longlong *)(*(longlong *)(lVar5 + uVar8) + lVar7);
            if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x24) & 1) == 0)) {
              FUN_14495f742(param_2);
              iVar4 = *(int *)(lVar5 + 8 + uVar8);
            }
            lVar9 = lVar9 + 1;
            lVar7 = lVar7 + 0x18;
          } while (lVar9 < iVar4);
        }
        break;
      case 0xc:
      case 0xd:
        lVar9 = *(longlong *)(lVar5 + uVar8);
        lVar7 = *(longlong *)(lVar9 + 0x38);
        goto LAB_143204d2d;
      case 0xe:
        lVar9 = *(longlong *)(lVar5 + uVar8);
        lVar7 = *(longlong *)(lVar9 + 0x40);
LAB_143204d2d:
        if ((lVar7 != 0) && ((*(byte *)(lVar7 + 0x24) & 1) == 0)) {
          FUN_14495f742(param_2,lVar7);
LAB_143204d8f:
          lVar9 = *(longlong *)(lVar5 + uVar8);
        }
LAB_143204d93:
        if (*(longlong *)(lVar9 + 0x10) == 0) {
          FUN_14470bbcc(*(undefined8 *)(param_2 + 0x18));
        }
        break;
      case 0xf:
        if ((*(longlong *)(lVar5 + uVar8) != 0) &&
           ((*(byte *)(*(longlong *)(lVar5 + uVar8) + 0x24) & 1) == 0)) {
          FUN_1449609de(param_2);
        }
        break;
      case 0x10:
        iVar4 = *(int *)(lVar5 + 8 + uVar8);
        if (0 < iVar4) {
          lVar7 = 0;
          lVar9 = 0;
          do {
            lVar2 = *(longlong *)(*(longlong *)(lVar5 + uVar8) + lVar7);
            if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x24) & 1) == 0)) {
              FUN_1449609de(param_2);
              iVar4 = *(int *)(lVar5 + 8 + uVar8);
            }
            lVar9 = lVar9 + 1;
            lVar7 = lVar7 + 0x10;
          } while (lVar9 < iVar4);
        }
        break;
      case 0x11:
        lVar9 = *(longlong *)(lVar5 + uVar8);
        lVar7 = *(longlong *)(lVar9 + 0x40);
        goto LAB_143204d79;
      case 0x12:
        lVar9 = *(longlong *)(lVar5 + uVar8);
        lVar7 = *(longlong *)(lVar9 + 0x38);
LAB_143204d79:
        if ((lVar7 != 0) && ((*(byte *)(lVar7 + 0x24) & 1) == 0)) {
          FUN_1449609de(param_2,lVar7);
          goto LAB_143204d8f;
        }
        goto LAB_143204d93;
      case 0x13:
        if (*(longlong *)(lVar5 + uVar8) != 0) {
          FUN_14742a04a(param_2);
        }
      }
LAB_143204da3:
      iVar6 = iVar6 + 1;
    } while (iVar6 != iVar1);
  }
  return;
}



// FUNCTION 143204dc0 FUN_143204dc0 body=376 status=ok
// SIG undefined FUN_143204dc0(void)

void FUN_143204dc0(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  local_38 = 1;
  (**(code **)(*DAT_14ca83900 + 0x138))
            (DAT_14ca83900,&local_28,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20)
            );
  plVar7 = (longlong *)(param_1 + 0x30);
  if (plVar7 != &local_28) {
    lVar4 = *plVar7;
    *plVar7 = local_28;
    local_28 = 0;
    if (lVar4 == 0) goto LAB_143204ee1;
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
  lVar4 = local_28;
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
LAB_143204ee1:
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x30);
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143204f3a FUN_143204f3a body=1113 status=ok
// SIG undefined FUN_143204f3a(void)

void FUN_143204f3a(longlong *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  int *piVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  int *piVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  
  piVar10 = (int *)*param_1;
  iVar11 = piVar10[0x22];
  if (iVar11 != 0) {
    piVar6 = *(int **)(piVar10 + 0x20);
    if (*(int **)(piVar10 + 0x20) == (int *)0x0) {
      piVar6 = piVar10;
    }
    if (iVar11 < 0) {
LAB_14320538b:
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar11);
    }
    lVar4 = param_1[1];
    iVar1 = *piVar6;
    iVar2 = piVar6[iVar11 + -1];
    lVar14 = (longlong)iVar2;
    lVar7 = *(longlong *)(lVar4 + 0x168);
    lVar13 = (longlong)iVar1;
    lVar9 = *(longlong *)(lVar7 + lVar13 * 8);
    if (*(int *)(lVar9 + 0xd4) < iVar11) {
      FUN_14742c584(lVar9 + 0xc0);
      iVar11 = *(int *)(*param_1 + 0x88);
      if (iVar11 < 0) goto LAB_14320538b;
      lVar7 = *(longlong *)(lVar4 + 0x168);
      plVar8 = (longlong *)(lVar7 + lVar14 * 8);
    }
    else {
      plVar8 = (longlong *)(lVar7 + lVar14 * 8);
    }
    if (*(int *)(*plVar8 + 0xec) < iVar11) {
      FUN_14742c584(*plVar8 + 0xd8);
      lVar7 = *(longlong *)(lVar4 + 0x168);
    }
    lVar9 = *(longlong *)(lVar7 + lVar13 * 8);
    *(uint *)(lVar9 + 0x34) = *(uint *)(lVar9 + 0x34) | 2;
    *(int *)(lVar9 + 0x4c) = iVar2;
    if (*(int *)(lVar9 + 0xec) < 0) {
      *(undefined4 *)(lVar9 + 0xe8) = 0;
      FUN_14742c584(lVar9 + 0xd8,0);
    }
    else {
      *(undefined4 *)(lVar9 + 0xe8) = 0;
    }
    lVar7 = *(longlong *)(*(longlong *)(lVar4 + 0x168) + lVar14 * 8);
    iVar11 = *(int *)(lVar7 + 0xe8);
    *(uint *)(lVar7 + 0xe8) = iVar11 + 1U;
    if (*(uint *)(lVar7 + 0xec) < iVar11 + 1U) {
      FUN_14742e1f0(lVar7 + 0xd8,iVar11);
    }
    lVar12 = lVar7 + 0xd8;
    if (*(longlong *)(lVar7 + 0xe0) != 0) {
      lVar12 = *(longlong *)(lVar7 + 0xe0);
    }
    *(longlong *)(lVar12 + (longlong)iVar11 * 8) = lVar9;
    iVar11 = *(int *)(*param_1 + 0x88);
    if (2 < iVar11) {
      uVar15 = 1;
      do {
        lVar9 = *(longlong *)(*param_1 + 0x80);
        if (lVar9 == 0) {
          lVar9 = *param_1;
        }
        lVar9 = *(longlong *)
                 (*(longlong *)(lVar4 + 0x168) + (longlong)*(int *)(lVar9 + uVar15 * 4) * 8);
        *(uint *)(lVar9 + 0x34) = *(uint *)(lVar9 + 0x34) | 3;
        *(int *)(lVar9 + 0x48) = iVar1;
        if (*(int *)(lVar9 + 0xd4) < 0) {
          *(undefined4 *)(lVar9 + 0xd0) = 0;
          FUN_14742c584(lVar9 + 0xc0,0);
        }
        else {
          *(undefined4 *)(lVar9 + 0xd0) = 0;
        }
        lVar7 = *(longlong *)(*(longlong *)(lVar4 + 0x168) + lVar13 * 8);
        iVar3 = *(int *)(lVar7 + 0xd0);
        uVar5 = iVar3 + 1;
        *(uint *)(lVar7 + 0xd0) = uVar5;
        if (*(uint *)(lVar7 + 0xd4) < uVar5) {
          FUN_14742e1f0(lVar7 + 0xc0);
        }
        lVar12 = lVar7 + 0xc0;
        if (*(longlong *)(lVar7 + 200) != 0) {
          lVar12 = *(longlong *)(lVar7 + 200);
        }
        *(longlong *)(lVar12 + (longlong)iVar3 * 8) = lVar9;
        *(int *)(lVar9 + 0x4c) = iVar2;
        if (*(int *)(lVar9 + 0xec) < 0) {
          *(undefined4 *)(lVar9 + 0xe8) = 0;
          FUN_14742c584(lVar9 + 0xd8,0);
        }
        else {
          *(undefined4 *)(lVar9 + 0xe8) = 0;
        }
        lVar7 = *(longlong *)(*(longlong *)(lVar4 + 0x168) + lVar14 * 8);
        iVar3 = *(int *)(lVar7 + 0xe8);
        uVar5 = iVar3 + 1;
        *(uint *)(lVar7 + 0xe8) = uVar5;
        if (*(uint *)(lVar7 + 0xec) < uVar5) {
          FUN_14742e1f0(lVar7 + 0xd8);
        }
        lVar12 = lVar7 + 0xd8;
        if (*(longlong *)(lVar7 + 0xe0) != 0) {
          lVar12 = *(longlong *)(lVar7 + 0xe0);
        }
        *(longlong *)(lVar12 + (longlong)iVar3 * 8) = lVar9;
        uVar15 = uVar15 + 1;
      } while (iVar11 - 1 != uVar15);
    }
    lVar9 = *(longlong *)(*(longlong *)(lVar4 + 0x168) + lVar14 * 8);
    *(uint *)(lVar9 + 0x34) = *(uint *)(lVar9 + 0x34) | 1;
    *(int *)(lVar9 + 0x48) = iVar1;
    if (*(int *)(lVar9 + 0xd4) < 0) {
      *(undefined4 *)(lVar9 + 0xd0) = 0;
      FUN_14742c584(lVar9 + 0xc0,0);
    }
    else {
      *(undefined4 *)(lVar9 + 0xd0) = 0;
    }
    lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x168) + lVar13 * 8);
    iVar11 = *(int *)(lVar4 + 0xd0);
    *(uint *)(lVar4 + 0xd0) = iVar11 + 1U;
    if (*(uint *)(lVar4 + 0xd4) < iVar11 + 1U) {
      FUN_14742e1f0(lVar4 + 0xc0,iVar11);
    }
    lVar7 = lVar4 + 0xc0;
    if (*(longlong *)(lVar4 + 200) != 0) {
      lVar7 = *(longlong *)(lVar4 + 200);
    }
    *(longlong *)(lVar7 + (longlong)iVar11 * 8) = lVar9;
    piVar10 = (int *)*param_1;
  }
  piVar10[0x22] = 0;
  if (piVar10[0x23] < 0) {
    FUN_14742c6e0();
  }
  *(undefined8 *)param_1[2] = 0;
  *(undefined8 *)param_1[3] = 0;
  return;
}



// FUNCTION 143205394 FUN_143205394 body=784 status=ok
// SIG undefined FUN_143205394(void)

void FUN_143205394(longlong param_1)

{
  char *pcVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  LPVOID lpTlsValue;
  ulonglong *puVar7;
  ulonglong *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  bool bVar13;
  
  lpTlsValue = TlsGetValue(DAT_14ca954e4);
  TlsSetValue(DAT_14ca954e4,(LPVOID)(param_1 + 0xa8));
  pcVar1 = (char *)(param_1 + 0x4a8);
  plVar2 = (longlong *)(param_1 + 0x4f0);
  do {
    LOCK();
    cVar3 = *pcVar1;
    if (cVar3 == '\0') {
      *pcVar1 = '\x01';
    }
    UNLOCK();
    if (cVar3 != '\0') {
      FUN_1447d2058();
    }
    puVar8 = *(ulonglong **)(param_1 + 0x4b0);
    iVar12 = *(int *)(param_1 + 0x4b8);
    *(undefined8 *)(param_1 + 0x4b0) = 0;
    *(undefined8 *)(param_1 + 0x4b8) = 0;
    LOCK();
    bVar13 = *(char *)(param_1 + 0x4a8) == '\x01';
    if (bVar13) {
      *(char *)(param_1 + 0x4a8) = '\0';
    }
    UNLOCK();
    if (!bVar13) {
      FUN_14008cdb0(pcVar1);
    }
    if (iVar12 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014320569d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      TlsSetValue(DAT_14ca954e4,lpTlsValue);
      return;
    }
    puVar7 = puVar8 + (longlong)iVar12 * 2;
    do {
      uVar5 = *puVar8;
      if ((byte)uVar5 < 4) {
        uVar6 = puVar8[1];
        switch(uVar5 & 0xff) {
        case 0:
          FUN_14470d350(param_1,uVar6);
          break;
        case 1:
          lVar11 = 0;
          do {
            if (*(longlong *)(uVar6 + 0xa8 + lVar11) != 0) {
              iVar12 = *(int *)(param_1 + 0x4f8);
              *(uint *)(param_1 + 0x4f8) = iVar12 + 1U;
              if (*(uint *)(param_1 + 0x4fc) < iVar12 + 1U) {
                FUN_14470e57a(plVar2,iVar12);
              }
              *(undefined8 *)(*plVar2 + (longlong)iVar12 * 8) =
                   *(undefined8 *)(uVar6 + 0xa8 + lVar11);
            }
            lVar11 = lVar11 + 0x20;
          } while (lVar11 != 0x40);
          do {
            iVar12 = *(int *)(param_1 + 0x4f8);
            do {
              do {
                if (iVar12 == 0) goto LAB_143205592;
                lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x4f0) + -8 + (longlong)iVar12 * 8);
                iVar12 = iVar12 + -1;
                *(int *)(param_1 + 0x4f8) = iVar12;
              } while ((*(uint *)(lVar11 + 0x38) & 0x20) == 0);
              *(uint *)(lVar11 + 0x38) = *(uint *)(lVar11 + 0x38) & 0xffffffdf;
              uVar4 = *(uint *)(lVar11 + 0x68);
              iVar12 = *(int *)(param_1 + 0x4f8);
            } while ((longlong)(int)uVar4 == 0);
            *(uint *)(param_1 + 0x4f8) = iVar12 + uVar4;
            if ((uint)(*(int *)(param_1 + 0x4fc) - iVar12) < uVar4) {
              FUN_14470e57a(plVar2,iVar12);
            }
            memcpy((void *)((longlong)iVar12 * 8 + *(longlong *)(param_1 + 0x4f0)),
                   *(void **)(lVar11 + 0x60),(longlong)(int)uVar4 << 3);
          } while( true );
        case 2:
          if ((longlong)*(int *)(uVar6 + 0xf0) != 0) {
            lVar11 = *(longlong *)(uVar6 + 0xe8);
            lVar10 = (longlong)*(int *)(uVar6 + 0xf0) * 0x40 + lVar11;
            do {
              lVar9 = 0;
              do {
                if (*(longlong *)(lVar11 + lVar9) != 0) {
                  iVar12 = *(int *)(param_1 + 0x4f8);
                  *(uint *)(param_1 + 0x4f8) = iVar12 + 1U;
                  if (*(uint *)(param_1 + 0x4fc) < iVar12 + 1U) {
                    FUN_14470e57a(plVar2,iVar12);
                  }
                  *(undefined8 *)(*plVar2 + (longlong)iVar12 * 8) = *(undefined8 *)(lVar11 + lVar9);
                }
                lVar9 = lVar9 + 0x20;
              } while (lVar9 != 0x40);
              lVar11 = lVar11 + 0x40;
            } while (lVar11 != lVar10);
          }
          iVar12 = *(int *)(param_1 + 0x4f8);
          while (iVar12 != 0) {
            lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x4f0) + -8 + (longlong)iVar12 * 8);
            iVar12 = iVar12 + -1;
            *(int *)(param_1 + 0x4f8) = iVar12;
            if ((*(uint *)(lVar11 + 0x38) & 0x20) != 0) {
              *(uint *)(lVar11 + 0x38) = *(uint *)(lVar11 + 0x38) & 0xffffffdf;
              uVar4 = *(uint *)(lVar11 + 0x68);
              iVar12 = *(int *)(param_1 + 0x4f8);
              if ((longlong)(int)uVar4 != 0) {
                *(uint *)(param_1 + 0x4f8) = iVar12 + uVar4;
                if ((uint)(*(int *)(param_1 + 0x4fc) - iVar12) < uVar4) {
                  FUN_14470e57a(plVar2,iVar12);
                }
                memcpy((void *)((longlong)iVar12 * 8 + *(longlong *)(param_1 + 0x4f0)),
                       *(void **)(lVar11 + 0x60),(longlong)(int)uVar4 << 3);
                iVar12 = *(int *)(param_1 + 0x4f8);
              }
            }
          }
          break;
        case 3:
          *(ulonglong *)(uVar6 + 0x130) = uVar5 >> 8 & 0xffffffffffff;
        }
      }
LAB_143205592:
      puVar8 = puVar8 + 2;
    } while (puVar8 != puVar7);
  } while( true );
}



// FUNCTION 1432056a4 FUN_1432056a4 body=1252 status=ok
// SIG undefined FUN_1432056a4(void)

/* WARNING: Removing unreachable block (ram,0x0001432056ef) */
/* WARNING: Removing unreachable block (ram,0x0001432058d8) */

void FUN_1432056a4(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  char cVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  DWORD DVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  longlong lVar13;
  void *_Dst;
  longlong *plVar14;
  undefined4 uVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong lVar18;
  int iVar19;
  undefined1 auStack_108 [32];
  int local_e8;
  undefined4 local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined8 *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 *local_88;
  undefined8 uStack_80;
  longlong *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  DVar9 = GetCurrentThreadId();
  local_d8 = param_3;
  if ((DAT_14ca95570 & 1) == 0) {
    DAT_14ca95570 = DAT_14ca95570 | 1;
    LOCK();
    UNLOCK();
    DAT_14ca95574 = DVar9;
  }
  else if (DAT_14ca95574 == DVar9) {
    LOCK();
    DAT_14ca95570 = DAT_14ca95570 + 4;
    UNLOCK();
  }
  else {
    FUN_1402441ea(&DAT_14ca95570,DAT_14ca95570);
  }
  iVar19 = *(int *)(param_1 + 0x590);
  local_d0 = param_1;
  if ((longlong)iVar19 != 0) {
    lVar18 = *(longlong *)(param_1 + 0x588);
    lVar16 = 0;
    do {
      lVar13 = *(longlong *)(lVar18 + 8 + lVar16);
      if (*(longlong *)(lVar13 + 0x10) == 0) {
        pcVar3 = *(code **)(lVar13 + 0xf0);
        if (pcVar3 != (code *)0x0) {
          plVar17 = (longlong *)(lVar13 + 0x110);
          if (*(longlong **)(lVar13 + 0x100) != (longlong *)0x0) {
            plVar17 = *(longlong **)(lVar13 + 0x100);
          }
          (**(code **)(*plVar17 + 8))();
          iVar10 = (*pcVar3)();
          *(uint *)(lVar13 + 100) = iVar10 + (uint)(iVar10 == 0);
          local_c8 = *(undefined8 **)(lVar13 + 0xf0);
          uStack_80 = *(undefined8 *)(lVar13 + 0xf8);
          local_b8 = *(longlong **)(lVar13 + 0x100);
          uStack_70 = *(undefined8 *)(lVar13 + 0x108);
          local_68 = *(undefined8 *)(lVar13 + 0x110);
          uStack_60 = *(undefined8 *)(lVar13 + 0x118);
          local_58 = *(undefined8 *)(lVar13 + 0x120);
          uStack_50 = *(undefined8 *)(lVar13 + 0x128);
          uVar7 = local_58;
          uVar8 = uStack_50;
          uVar5 = local_68;
          uVar6 = uStack_60;
          local_78 = local_b8;
          uVar4 = uStack_70;
          local_88 = local_c8;
          uVar12 = uStack_80;
          *(ulonglong *)(lVar13 + 0x120) = CONCAT44(uStack_94,local_98);
          *(ulonglong *)(lVar13 + 0x128) = CONCAT44(uStack_8c,uStack_90);
          *(ulonglong *)(lVar13 + 0x110) = CONCAT44(uStack_a4,local_a8);
          *(ulonglong *)(lVar13 + 0x118) = CONCAT44(uStack_9c,uStack_a0);
          *(undefined8 *)(lVar13 + 0x100) = 0;
          *(ulonglong *)(lVar13 + 0x108) = CONCAT44(uStack_ac,uStack_b0);
          *(undefined8 *)(lVar13 + 0xf0) = 0;
          *(ulonglong *)(lVar13 + 0xf8) = CONCAT44(uStack_bc,uStack_c0);
          uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
          uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
          local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
          uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
          local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
          uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
          local_98 = (undefined4)local_58;
          uStack_94 = local_58._4_4_;
          uStack_90 = (undefined4)uStack_50;
          uStack_8c = uStack_50._4_4_;
          local_a8 = (undefined4)local_68;
          uStack_a4 = local_68._4_4_;
          uStack_a0 = (undefined4)uStack_60;
          uStack_9c = uStack_60._4_4_;
          uStack_b0 = (undefined4)uStack_70;
          uStack_ac = uStack_70._4_4_;
          uStack_c0 = (undefined4)uStack_80;
          uStack_bc = uStack_80._4_4_;
          param_1 = local_d0;
          uStack_80 = uVar12;
          uStack_70 = uVar4;
          local_68 = uVar5;
          uStack_60 = uVar6;
          local_58 = uVar7;
          uStack_50 = uVar8;
          if (local_c8 != (undefined8 *)0x0) {
            plVar17 = local_b8;
            if (local_b8 == (longlong *)0x0) {
              plVar17 = (longlong *)&local_a8;
            }
            (**(code **)(*plVar17 + 0x10))();
            param_1 = local_d0;
          }
        }
        FUN_14496125e(&local_88,param_2,lVar13 + 0x60,*(undefined8 *)(lVar13 + 8));
        FUN_1449615e8(param_1,lVar13,&local_88);
        if (local_88 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(local_88 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*local_88)(local_88,1);
          }
        }
      }
      lVar16 = lVar16 + 0x120;
    } while ((longlong)iVar19 * 0x120 != lVar16);
  }
  lVar18 = local_d8;
  if (DAT_14ca95570 < 4) {
    DAT_14ca95574 = 0;
    if (DAT_14ca95570 < 2) {
      LOCK();
      DAT_14ca95570 = 0;
      UNLOCK();
    }
    else {
      FUN_140d366d2(&DAT_14ca95570);
    }
  }
  else {
    LOCK();
    DAT_14ca95570 = DAT_14ca95570 - 4;
    UNLOCK();
  }
  if (lVar18 != 0) {
    FUN_1400daade(lVar18);
  }
  lVar18 = *(longlong *)(param_1 + 0x588);
  if ((longlong)*(int *)(param_1 + 0x590) == 0) {
    uVar15 = 0;
  }
  else {
    lVar16 = (longlong)*(int *)(param_1 + 0x590) * 0x120;
    plVar17 = (longlong *)(lVar18 + 0x80);
    do {
      lVar18 = plVar17[-0xf];
      if (plVar17[0xc] == 0) {
        if ((char)plVar17[-0x10] == '\x01') {
          pcVar3 = (code *)plVar17[-0xc];
          plVar14 = plVar17 + -8;
          if ((longlong *)plVar17[-10] != (longlong *)0x0) {
            plVar14 = (longlong *)plVar17[-10];
          }
          uVar12 = (**(code **)(*plVar14 + 8))();
          lVar13 = (*pcVar3)(uVar12);
          plVar17[-0xe] = lVar13;
          pcVar3 = (code *)plVar17[-4];
          plVar14 = (longlong *)plVar17[-2];
          if ((longlong *)plVar17[-2] == (longlong *)0x0) {
            plVar14 = plVar17;
          }
          uVar12 = (**(code **)(*plVar14 + 8))();
          lVar13 = (*pcVar3)(uVar12);
          plVar17[-0xd] = lVar13;
        }
        if ((plVar17[-0xe] != 0) && (lVar13 = plVar17[-0xd], lVar13 != 0)) {
          uVar12 = *(undefined8 *)(lVar18 + 0x10);
          cVar2 = *(char *)(param_2 + 0x69);
          if (cVar2 == '\0') {
            FUN_14002049c(param_2,1);
          }
          local_e8 = (int)lVar13;
          local_e0 = 1;
          _Dst = (void *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,uVar12,0);
          if (cVar2 == '\0') {
            FUN_14002049c(param_2,0);
          }
          memcpy(_Dst,(void *)plVar17[-0xe],plVar17[-0xd]);
          goto LAB_1432059cf;
        }
      }
      else {
        iVar19 = *(int *)(lVar18 + 100) * *(int *)(lVar18 + 0x60);
        uVar12 = *(undefined8 *)(lVar18 + 0x10);
        cVar2 = *(char *)(param_2 + 0x69);
        if (cVar2 == '\0') {
          FUN_14002049c(param_2,1);
        }
        local_e0 = 1;
        local_e8 = iVar19;
        puVar11 = (undefined8 *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,uVar12);
        if (cVar2 == '\0') {
          FUN_14002049c(param_2,0);
        }
        local_c8 = (undefined8 *)CONCAT44(local_c8._4_4_,iVar19);
        pcVar3 = (code *)plVar17[0xc];
        plVar14 = plVar17 + 0x10;
        if ((longlong *)plVar17[0xe] != (longlong *)0x0) {
          plVar14 = (longlong *)plVar17[0xe];
        }
        local_88 = puVar11;
        uVar12 = (**(code **)(*plVar14 + 8))();
        (*pcVar3)(uVar12,&local_88,&local_c8);
LAB_1432059cf:
        uVar12 = *(undefined8 *)(lVar18 + 0x10);
        if (*(char *)(param_2 + 0x69) == '\0') {
          FUN_14002049c(param_2,1);
          (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar12);
          FUN_14002049c(param_2,0);
        }
        else {
          (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar12);
        }
      }
      plVar17 = plVar17 + 0x24;
      lVar16 = lVar16 + -0x120;
    } while (lVar16 != 0);
    uVar15 = *(undefined4 *)(local_d0 + 0x590);
    lVar18 = *(longlong *)(local_d0 + 0x588);
    param_1 = local_d0;
  }
  iVar19 = *(int *)(param_1 + 0x594);
  FUN_144b1c938(lVar18,uVar15);
  *(undefined4 *)(param_1 + 0x590) = 0;
  if ((iVar19 < 0) && (*(int *)(param_1 + 0x594) != 0)) {
    FUN_14742e620(param_1 + 0x588);
  }
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143205b8a FUN_143205b8a body=24695 status=ok
// SIG undefined FUN_143205b8a(void)

void FUN_143205b8a(longlong param_1)

{
  byte bVar1;
  byte bVar2;
  ushort *puVar3;
  ushort *puVar4;
  undefined8 uVar5;
  undefined3 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  byte bVar14;
  char cVar15;
  char cVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  undefined8 *puVar21;
  ulonglong uVar22;
  undefined4 *puVar23;
  undefined8 *puVar24;
  uint *puVar25;
  ulonglong uVar26;
  undefined4 *puVar27;
  undefined4 *puVar28;
  ulonglong uVar29;
  uint uVar30;
  ulonglong *puVar31;
  ulonglong *puVar32;
  ulonglong *puVar33;
  longlong lVar34;
  uint uVar35;
  undefined4 uVar36;
  longlong lVar37;
  int iVar38;
  ulonglong *puVar39;
  ulonglong *puVar40;
  ulonglong uVar41;
  longlong *plVar42;
  undefined8 *puVar43;
  ulonglong *puVar44;
  uint *puVar45;
  bool bVar46;
  int iVar47;
  int iVar48;
  longlong lVar49;
  byte bVar50;
  byte bVar51;
  uint uVar52;
  ulonglong *in_R10;
  undefined1 uVar53;
  longlong *plVar54;
  undefined4 uVar55;
  longlong lVar56;
  ulonglong *puVar57;
  bool bVar58;
  undefined1 auStack_288 [32];
  uint *local_268;
  uint *local_260;
  ulonglong *local_258;
  ulonglong *local_250;
  ulonglong *local_248;
  ulonglong *local_240;
  ulonglong *local_238;
  ulonglong *local_230;
  longlong local_228;
  ulonglong *local_220;
  ulonglong *local_218;
  longlong *local_210;
  ulonglong *local_208;
  longlong *local_200;
  undefined8 local_1f8;
  ulonglong *local_1f0;
  uint local_1e4;
  ulonglong *local_1e0;
  longlong *local_1d8;
  ulonglong local_1d0;
  longlong *local_1c8;
  longlong local_1c0;
  ulonglong *local_1b8;
  undefined8 local_1b0;
  ulonglong local_1a8;
  longlong *local_1a0;
  ulonglong *local_198;
  ulonglong *local_190;
  longlong *local_188;
  LPVOID local_180;
  longlong local_178;
  longlong *local_170;
  longlong local_168;
  longlong *local_160;
  uint local_158;
  undefined8 *local_150;
  uint local_148;
  undefined4 uStack_144;
  undefined1 local_139;
  uint local_138;
  undefined1 local_134 [7];
  undefined1 local_12d;
  uint local_12c;
  longlong local_128 [2];
  longlong *local_118;
  undefined8 local_110;
  undefined8 local_108;
  uint uStack_100;
  uint uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_288;
  puVar32 = (ulonglong *)(param_1 + 0xe0);
  local_180 = TlsGetValue(DAT_14ca954e4);
  local_248 = puVar32;
  TlsSetValue(DAT_14ca954e4,puVar32);
  local_228 = param_1;
  if ((longlong)*(int *)(param_1 + 0x180) != 0) {
    plVar42 = *(longlong **)(param_1 + 0x178);
    local_200 = plVar42 + *(int *)(param_1 + 0x180);
    local_1b8 = (ulonglong *)(param_1 + 0x448);
    puVar31 = (ulonglong *)(param_1 + 0x478);
    local_210 = (longlong *)(param_1 + 0x468);
    local_1c8 = (longlong *)(param_1 + 0x3d8);
    local_190 = (ulonglong *)(param_1 + 0x410);
    local_198 = (ulonglong *)(param_1 + 0x418);
    local_1c0 = param_1 + 1000;
    local_188 = (longlong *)(param_1 + 0x438);
    local_238 = puVar31;
    do {
      puVar40 = local_248;
      plVar54 = (longlong *)*plVar42;
      if ((int)plVar54[6] != -1) {
        puVar43 = (undefined8 *)(*(longlong *)(param_1 + 0xe0) + 3U & 0xfffffffffffffffc);
        puVar21 = puVar43 + 4;
        if (*(undefined8 **)(param_1 + 0xe8) < puVar21) {
          FUN_140023dd8(local_248,0x24);
          puVar43 = (undefined8 *)(*puVar40 + 3 & 0xfffffffffffffffc);
          puVar21 = puVar43 + 4;
        }
        puVar32 = local_248;
        *local_248 = (ulonglong)puVar21;
        *puVar43 = 0;
        puVar43[1] = 0xffffffff;
        puVar43[2] = 0xffffffffffffffff;
        *(undefined2 *)(puVar43 + 3) = 0xffff;
        *(undefined4 *)((longlong)puVar43 + 0x1c) = 0;
        local_1d8 = plVar54;
        local_1a0 = plVar42;
        if ((longlong)(int)plVar54[0x14] == -1) {
          puVar39 = (ulonglong *)((longlong)puVar43 + 4);
          iVar17 = (int)plVar54[5];
          if ((longlong)iVar17 == -1) {
            puVar40 = puVar31;
            if ((*(byte *)((longlong)plVar54 + 0x24) & 0x40) == 0) {
              iVar17 = (int)plVar54[6];
              uVar22 = (ulonglong)
                       (*(char *)(*(longlong *)
                                   (*(longlong *)(param_1 + 0x168) + (longlong)iVar17 * 8) + 0x2b)
                       == '\x02');
              *(undefined4 *)puVar39 = 0xffffffff;
              *(undefined4 *)(puVar43 + 1) = 0xffffffff;
              *(undefined4 *)((longlong)puVar43 + 0xc) = 0xffffffff;
              *(undefined4 *)(puVar43 + 2) = 0xffffffff;
              *(int *)((longlong)puVar43 + uVar22 * 4 + 4) = iVar17;
              *(int *)((longlong)puVar43 + uVar22 * 4 + 0xc) = iVar17;
            }
          }
          else {
            in_R10 = (ulonglong *)plVar54[2];
            local_1e0 = (ulonglong *)plVar54[9];
            uVar55 = (undefined4)plVar54[10];
            uVar36 = *(undefined4 *)((longlong)plVar54 + 0x54);
            lVar37 = *(longlong *)(param_1 + 0x168);
            lVar49 = *(longlong *)(lVar37 + (longlong)iVar17 * 8);
            if (iVar17 == (int)plVar54[6]) {
              lVar37 = FUN_14178e9d4(lVar49,local_248,local_210);
            }
            else {
              lVar56 = *(longlong *)(lVar37 + (longlong)*(int *)(lVar49 + 0x4c) * 8);
              lVar49 = *(longlong *)(lVar37 + (longlong)(int)plVar54[6] * 8);
              if (*(char *)(lVar49 + 0x2b) == '\x02') {
                lVar37 = *(longlong *)(lVar56 + 0x180);
                if (lVar37 == 0) {
                  local_250 = (ulonglong *)CONCAT44(local_250._4_4_,uVar36);
                  puVar24 = (undefined8 *)(*(longlong *)(param_1 + 0xe0) + 7U & 0xfffffffffffffff8);
                  puVar21 = puVar24 + 9;
                  if (*(undefined8 **)(param_1 + 0xe8) < puVar21) {
                    local_258 = (ulonglong *)CONCAT44(local_258._4_4_,uVar55);
                    FUN_140023dd8(local_248,0x50);
                    puVar24 = (undefined8 *)(*puVar32 + 7 & 0xfffffffffffffff8);
                    puVar21 = puVar24 + 9;
                    uVar55 = local_258._0_4_;
                  }
                  *(undefined8 **)(param_1 + 0xe0) = puVar21;
                  uVar53 = *(undefined1 *)(lVar56 + 0x2b);
                  *puVar24 = 0;
                  puVar24[1] = 0;
                  *(undefined4 *)(puVar24 + 2) = 0xffffffff;
                  *(undefined1 *)((longlong)puVar24 + 0x14) = 1;
                  *(undefined4 *)(puVar24 + 3) = 0xffffffff;
                  *(undefined1 *)((longlong)puVar24 + 0x1c) = 1;
                  puVar24[4] = 0;
                  puVar24[5] = 0;
                  puVar24[6] = 0;
                  puVar24[7] = 0;
                  *(undefined4 *)(puVar24 + 8) = 1;
                  *(undefined1 *)((longlong)puVar24 + 0x44) = uVar53;
                  *(undefined2 *)((longlong)puVar24 + 0x45) = 2;
                  *(undefined1 *)((longlong)puVar24 + 0x47) = 0;
                  *(undefined8 **)(lVar56 + 0x180) = puVar24;
                  iVar17 = *(int *)(param_1 + 0x470);
                  *(uint *)(param_1 + 0x470) = iVar17 + 1U;
                  if (*(uint *)(param_1 + 0x474) < iVar17 + 1U) {
                    FUN_144adb638(local_210,iVar17);
                  }
                  lVar34 = *local_210;
                  lVar37 = *(longlong *)(lVar56 + 0x180);
LAB_14320861e:
                  *(longlong *)(lVar34 + (longlong)iVar17 * 8) = lVar37;
LAB_143205e20:
                  uVar36 = local_250._0_4_;
                }
              }
              else if (*(char *)(lVar49 + 0x2b) == '\x03') {
                lVar37 = *(longlong *)(lVar56 + 0x188);
                if (lVar37 == 0) {
                  local_250 = (ulonglong *)CONCAT44(local_250._4_4_,uVar36);
                  puVar24 = (undefined8 *)(*(longlong *)(param_1 + 0xe0) + 7U & 0xfffffffffffffff8);
                  puVar21 = puVar24 + 9;
                  if (*(undefined8 **)(param_1 + 0xe8) < puVar21) {
                    local_258 = (ulonglong *)CONCAT44(local_258._4_4_,uVar55);
                    FUN_140023dd8(local_248,0x50);
                    puVar24 = (undefined8 *)(*puVar32 + 7 & 0xfffffffffffffff8);
                    puVar21 = puVar24 + 9;
                    uVar55 = local_258._0_4_;
                  }
                  *(undefined8 **)(param_1 + 0xe0) = puVar21;
                  uVar53 = *(undefined1 *)(lVar56 + 0x2b);
                  *puVar24 = 0;
                  puVar24[1] = 0;
                  *(undefined4 *)(puVar24 + 2) = 0xffffffff;
                  *(undefined1 *)((longlong)puVar24 + 0x14) = 1;
                  *(undefined4 *)(puVar24 + 3) = 0xffffffff;
                  *(undefined1 *)((longlong)puVar24 + 0x1c) = 1;
                  puVar24[4] = 0;
                  puVar24[5] = 0;
                  puVar24[6] = 0;
                  puVar24[7] = 0;
                  *(undefined4 *)(puVar24 + 8) = 1;
                  *(undefined1 *)((longlong)puVar24 + 0x44) = uVar53;
                  *(undefined2 *)((longlong)puVar24 + 0x45) = 3;
                  *(undefined1 *)((longlong)puVar24 + 0x47) = 0;
                  *(undefined8 **)(lVar56 + 0x188) = puVar24;
                  iVar17 = *(int *)(param_1 + 0x470);
                  *(uint *)(param_1 + 0x470) = iVar17 + 1U;
                  if (*(uint *)(param_1 + 0x474) < iVar17 + 1U) {
                    FUN_144adb638(local_210,iVar17);
                  }
                  lVar34 = *local_210;
                  lVar37 = *(longlong *)(lVar56 + 0x188);
                  goto LAB_14320861e;
                }
              }
              else {
                lVar37 = lVar56 + 0x138;
                if (*(char *)(lVar56 + 0x17e) == '\0') {
                  local_250 = (ulonglong *)CONCAT44(local_250._4_4_,uVar36);
                  uVar35 = *(int *)(lVar56 + 0x88) + *(int *)(lVar56 + 0x78);
                  if (-1 < (int)uVar35) {
                    if (*(int *)(lVar56 + 0x164) < (int)uVar35) {
                      local_258 = (ulonglong *)CONCAT44(local_258._4_4_,uVar55);
                      FUN_144adac32(lVar56 + 0x158,uVar35);
                      uVar55 = local_258._0_4_;
                    }
                    if (*(int *)(lVar56 + 0x174) < (int)uVar35) {
                      FUN_144adad0c(lVar56 + 0x168,uVar35);
                    }
                    iVar17 = *(int *)(param_1 + 0x470);
                    *(uint *)(param_1 + 0x470) = iVar17 + 1U;
                    if (*(uint *)(param_1 + 0x474) < iVar17 + 1U) {
                      FUN_144adb638(local_210,iVar17);
                    }
                    *(longlong *)(*local_210 + (longlong)iVar17 * 8) = lVar37;
                    goto LAB_143205e20;
                  }
                  goto LAB_14320bbfb;
                }
              }
            }
            iVar17 = *(int *)(lVar37 + 0x38);
            *(uint *)(lVar37 + 0x38) = iVar17 + 1U;
            if (*(uint *)(lVar37 + 0x3c) < iVar17 + 1U) {
              FUN_144adb892(lVar37 + 0x30,iVar17);
            }
            lVar56 = *(longlong *)(lVar37 + 0x30);
            lVar34 = (longlong)iVar17 * 0x20;
            *(ulonglong **)(lVar56 + lVar34) = in_R10;
            *(ulonglong **)(lVar56 + 8 + lVar34) = local_1e0;
            *(undefined4 *)(lVar56 + 0x10 + lVar34) = uVar55;
            *(undefined4 *)(lVar56 + 0x14 + lVar34) = uVar36;
            *(undefined2 *)(lVar56 + 0x18 + lVar34) = 0;
            *(undefined1 *)(lVar37 + 0x46) = 1;
            bVar50 = *(byte *)(lVar49 + 0x130);
            uVar35 = *(uint *)(*(longlong *)(lVar49 + 0x128) + 0x2c);
            uVar22 = (ulonglong)(*(char *)(*(longlong *)(lVar49 + 0x128) + 0x2b) == '\x02');
            uVar18 = *(uint *)(lVar37 + 0x10 + uVar22 * 8);
            bVar51 = *(byte *)(lVar37 + 0x14 + uVar22 * 8);
            if ((uVar18 != uVar35) || (bVar51 != bVar50)) {
              bVar14 = bVar50;
              if (bVar51 < bVar50) {
                bVar14 = bVar51;
              }
              if ((uVar35 <= uVar18) && (bVar50 <= bVar51)) {
                iVar17 = *(int *)(lVar49 + 0x120);
                *(uint *)(lVar49 + 0x120) = iVar17 + 1U;
                if (*(uint *)(lVar49 + 0x124) < iVar17 + 1U) {
                  local_1e0 = puVar39;
                  FUN_144adb9c0(lVar49 + 0xf8,iVar17);
                  puVar39 = local_1e0;
                }
                lVar56 = lVar49 + 0xf8;
                if (*(longlong *)(lVar49 + 0x118) != 0) {
                  lVar56 = *(longlong *)(lVar49 + 0x118);
                }
                *(longlong *)(lVar56 + (longlong)iVar17 * 8) = lVar37;
                *(ulonglong *)(lVar37 + 0x10 + uVar22 * 8) = (ulonglong)CONCAT14(bVar14,uVar35);
              }
            }
            iVar17 = (int)local_1d8[5];
            uVar22 = (ulonglong)
                     (*(char *)(*(longlong *)
                                 (*(longlong *)(local_228 + 0x168) + (longlong)iVar17 * 8) + 0x2b)
                     == '\x02');
            *(undefined4 *)puVar39 = 0xffffffff;
            *(undefined4 *)((longlong)puVar39 + 4) = 0xffffffff;
            *(undefined4 *)(puVar39 + 1) = 0xffffffff;
            *(undefined4 *)((longlong)puVar39 + 0xc) = 0xffffffff;
            *(int *)((longlong)puVar43 + uVar22 * 4 + 4) = iVar17;
            *(int *)((longlong)puVar43 + uVar22 * 4 + 0xc) = iVar17;
            *(undefined4 *)puVar43 = 0x40000;
            puVar40 = local_238;
            param_1 = local_228;
          }
          plVar54 = local_1d8;
          uVar35 = *(uint *)(local_1d8 + 0x15);
          uVar35 = (uVar35 >> 8 & 0xff) * (uVar35 >> 0x10) * (uVar35 & 0xff);
          if (*(int *)(param_1 + 0x484) < (int)uVar35) {
            FUN_14178f1f0();
          }
          uVar18 = *(uint *)(param_1 + 0x480);
          if (uVar35 - uVar18 == 0 || (int)uVar35 < (int)uVar18) {
            if (uVar35 < uVar18) {
              *(uint *)(param_1 + 0x480) = uVar35;
              FUN_14742d3f8();
            }
          }
          else {
            *(uint *)(param_1 + 0x480) = uVar35;
            if (*(int *)(param_1 + 0x484) - uVar18 < uVar35 - uVar18) {
              FUN_14473d6dc(puVar40);
            }
            memset((void *)((longlong)(int)uVar18 * 8 + *puVar40),0,
                   (longlong)(int)(uVar35 - uVar18) << 3);
          }
          puVar31 = puVar40;
          if (uVar35 != 0) {
            iVar17 = 0;
            do {
              *(undefined8 **)(*puVar40 + (longlong)iVar17 * 8) = puVar43;
              iVar17 = iVar17 + 1;
            } while (uVar35 - iVar17 != 0);
          }
        }
        else {
          puVar40 = (ulonglong *)
                    (*(longlong *)
                      (*(longlong *)(param_1 + 0x178) + (longlong)(int)plVar54[0x14] * 8) + 0xb8);
          if (0 < (int)plVar54[0x1a]) {
            lVar37 = 0;
            do {
              lVar49 = *(longlong *)(*puVar40 + lVar37 * 8);
              if (*(longlong *)(plVar54[0x19] + lVar37 * 8) == 0) {
                *(longlong *)(plVar54[0x17] + lVar37 * 8) = lVar49;
              }
              else if (lVar49 == 0) {
                *(undefined8 **)(*puVar40 + lVar37 * 8) = puVar43;
              }
              lVar37 = lVar37 + 1;
            } while (lVar37 < (int)plVar54[0x1a]);
          }
        }
        uVar35 = *(uint *)(plVar54 + 0x15);
        local_258 = (ulonglong *)(ulonglong)*(ushort *)((longlong)plVar54 + 0xb4);
        if (((DAT_14ca84e6a == '\0') && (*(char *)((longlong)plVar54 + 0x93) == '\v')) &&
           (uVar18 = (uVar35 >> 0x10) * (uVar35 & 0xff), uVar18 != 0)) {
          puVar39 = (ulonglong *)(ulonglong)uVar18;
          puVar32 = (ulonglong *)0x0;
          local_1e0 = puVar39;
          do {
            puVar31 = local_248;
            lVar37 = plVar54[0x19];
            puVar3 = *(ushort **)(lVar37 + (longlong)puVar32 * 8);
            puVar21 = *(undefined8 **)(lVar37 + (longlong)puVar39 * 8);
            if (puVar3 != (ushort *)0x0 || puVar21 != (undefined8 *)0x0) {
              uVar22 = *puVar40;
              if ((puVar3 == (ushort *)0x0) || ((*puVar3 & 0x2080) == 0)) {
                puVar4 = *(ushort **)(uVar22 + (longlong)puVar32 * 8);
                if ((puVar4 != (ushort *)0x0) && ((*puVar4 & 0x2080) != 0)) {
                  if (puVar3 == (ushort *)0x0) {
                    puVar24 = (undefined8 *)
                              (*(longlong *)(local_228 + 0xe0) + 3U & 0xfffffffffffffffc);
                    puVar43 = puVar24 + 4;
                    if (*(undefined8 **)(local_228 + 0xe8) < puVar43) {
                      FUN_140023dd8(local_248,0x24);
                      puVar24 = (undefined8 *)(*puVar31 + 3 & 0xfffffffffffffffc);
                      puVar43 = puVar24 + 4;
                    }
                    *local_248 = (ulonglong)puVar43;
                    uVar5 = *puVar21;
                    uVar12 = puVar21[1];
                    uVar13 = puVar21[3];
                    puVar24[2] = puVar21[2];
                    puVar24[3] = uVar13;
                    *puVar24 = uVar5;
                    puVar24[1] = uVar12;
                    *(undefined8 **)(lVar37 + (longlong)puVar32 * 8) = puVar24;
                  }
                  else if (puVar21 == (undefined8 *)0x0) {
                    puVar43 = (undefined8 *)
                              (*(longlong *)(local_228 + 0xe0) + 3U & 0xfffffffffffffffc);
                    puVar21 = puVar43 + 4;
                    if (*(undefined8 **)(local_228 + 0xe8) < puVar21) {
                      FUN_140023dd8(local_248,0x24);
                      puVar43 = (undefined8 *)(*puVar31 + 3 & 0xfffffffffffffffc);
                      puVar21 = puVar43 + 4;
                    }
                    *local_248 = (ulonglong)puVar21;
                    uVar5 = *(undefined8 *)puVar3;
                    uVar12 = *(undefined8 *)(puVar3 + 4);
                    uVar13 = *(undefined8 *)(puVar3 + 0xc);
                    puVar43[2] = *(undefined8 *)(puVar3 + 8);
                    puVar43[3] = uVar13;
                    *puVar43 = uVar5;
                    puVar43[1] = uVar12;
                    *(undefined8 **)(lVar37 + (longlong)puVar39 * 8) = puVar43;
                  }
                }
              }
              else {
                iVar17 = *(int *)(*(longlong *)(uVar22 + (longlong)puVar39 * 8) + 0xc);
                puVar27 = *(undefined4 **)(uVar22 + (longlong)puVar32 * 8);
                if (iVar17 + 1U < puVar27[3] + 1) {
                  iVar17 = puVar27[3];
                }
                puVar23 = (undefined4 *)(*(longlong *)(local_228 + 0xe0) + 3U & 0xfffffffffffffffc);
                puVar28 = puVar23 + 8;
                if (*(undefined4 **)(local_228 + 0xe8) < puVar28) {
                  FUN_140023dd8(local_248,0x24);
                  puVar23 = (undefined4 *)(*local_248 + 3 & 0xfffffffffffffffc);
                  puVar28 = puVar23 + 8;
                }
                *(undefined4 **)(local_228 + 0xe0) = puVar28;
                uVar55 = *puVar27;
                uVar36 = puVar27[1];
                uVar7 = puVar27[2];
                uVar8 = puVar27[3];
                uVar9 = puVar27[5];
                uVar10 = puVar27[6];
                uVar11 = puVar27[7];
                puVar23[4] = puVar27[4];
                puVar23[5] = uVar9;
                puVar23[6] = uVar10;
                puVar23[7] = uVar11;
                *puVar23 = uVar55;
                puVar23[1] = uVar36;
                puVar23[2] = uVar7;
                puVar23[3] = uVar8;
                *(undefined4 **)(uVar22 + (longlong)puVar32 * 8) = puVar23;
                puVar43 = *(undefined8 **)(lVar37 + (longlong)puVar32 * 8);
                puVar24 = (undefined8 *)(*(longlong *)(local_228 + 0xe0) + 3U & 0xfffffffffffffffc);
                puVar21 = puVar24 + 4;
                if (*(undefined8 **)(local_228 + 0xe8) < puVar21) {
                  FUN_140023dd8(local_248,0x24);
                  puVar24 = (undefined8 *)(*local_248 + 3 & 0xfffffffffffffffc);
                  puVar21 = puVar24 + 4;
                }
                *local_248 = (ulonglong)puVar21;
                uVar5 = *puVar43;
                uVar12 = puVar43[1];
                uVar13 = puVar43[3];
                puVar24[2] = puVar43[2];
                puVar24[3] = uVar13;
                *puVar24 = uVar5;
                puVar24[1] = uVar12;
                *(undefined8 **)(lVar37 + (longlong)puVar32 * 8) = puVar24;
                *(int *)(*(longlong *)(uVar22 + (longlong)puVar32 * 8) + 0xc) = iVar17;
                *(int *)(*(longlong *)(uVar22 + (longlong)puVar39 * 8) + 0xc) = iVar17;
              }
            }
            puVar32 = (ulonglong *)((longlong)puVar32 + 1);
            puVar39 = (ulonglong *)((longlong)puVar39 + 1);
            plVar54 = local_1d8;
            puVar31 = local_238;
            param_1 = local_228;
          } while (local_1e0 != puVar32);
        }
        puVar32 = local_258;
        if (local_258 != (ulonglong *)0x0) {
          local_1b0 = CONCAT44(local_1b0._4_4_,uVar35) & 0xffffffff000000ff;
          local_1f8 = (ulonglong *)CONCAT44(local_1f8._4_4_,uVar35 >> 0x10);
          local_218 = (ulonglong *)CONCAT44(local_218._4_4_,(uVar35 & 0xff) * (uVar35 >> 0x10));
          puVar39 = (ulonglong *)0x0;
          local_250 = puVar40;
          do {
            puVar57 = local_248;
            puVar44 = *(ulonglong **)(plVar54[0x19] + (longlong)puVar39 * 8);
            if (puVar44 != (ulonglong *)0x0) {
              local_1e0 = (ulonglong *)*puVar40;
              puVar45 = (uint *)local_1e0[(longlong)puVar39];
              if (puVar45 == (uint *)0x0) goto LAB_1432060d6;
              uVar35 = *puVar45;
              in_R10 = (ulonglong *)(ulonglong)(uint)*puVar44;
              if (uVar35 == (uint)*puVar44) {
                uVar18 = puVar45[2];
                if (((char)((uVar18 != 0xffffffff) * '\x02' | puVar45[1] != 0xffffffff) !=
                     (char)(((int)puVar44[1] != -1) * '\x02' | *(int *)((longlong)puVar44 + 4) != -1
                           )) || (puVar45[7] != *(uint *)((longlong)puVar44 + 0x1c)))
                goto LAB_143206101;
                if ((uVar35 & 0xc00) != 0) {
                  uVar30 = *(uint *)((longlong)puVar44 + 0x14);
                  if (uVar30 == DAT_14ca95bd0) {
                    uVar30 = 0xffffffff;
                  }
                  uVar52 = puVar45[5];
                  if (puVar45[5] == DAT_14ca95bd0) {
                    uVar52 = 0xffffffff;
                  }
                  if ((uVar30 == 0xffffffff) || (uVar52 != uVar30)) goto LAB_143206101;
                }
              }
              else {
                uVar18 = puVar45[2];
LAB_143206101:
                uVar41 = ((ulonglong)puVar39 & 0xffffffff) % (local_1b0 & 0xffffffff);
                uVar29 = (((ulonglong)puVar39 & 0xffffffff) / (local_1b0 & 0xffffffff)) %
                         ((ulonglong)local_1f8 & 0xffffffff);
                uVar22 = ((ulonglong)puVar39 & 0xffffffff) / ((ulonglong)local_218 & 0xffffffff);
                uVar30 = *(uint *)((longlong)puVar44 + 0x1c) | 2;
                if (uVar35 != 0x40000) {
                  uVar30 = *(uint *)((longlong)puVar44 + 0x1c);
                }
                puVar32 = (ulonglong *)
                          ((ulonglong)uVar30 << 0x3d |
                          ((ulonglong)in_R10 & 0x1fffff) << 0x15 | (ulonglong)(uVar35 & 0x1fffff) |
                          (ulonglong)*(ushort *)((longlong)plVar54 + 0x9c) << 0x2a);
                uVar30 = *(uint *)((longlong)puVar44 + 4);
                local_108 = (undefined8 *)*puVar44;
                uStack_100 = (uint)puVar44[1];
                uStack_fc = *(uint *)((longlong)puVar44 + 0xc);
                local_f8 = (undefined4)puVar44[2];
                uStack_f4 = *(undefined4 *)((longlong)puVar44 + 0x14);
                uStack_f0 = (undefined4)puVar44[3];
                uStack_ec = *(undefined4 *)((longlong)puVar44 + 0x1c);
                bVar50 = (uVar18 != 0xffffffff) * '\x02' | puVar45[1] != 0xffffffff;
                bVar51 = (uStack_100 != 0xffffffff) * '\x02' | uVar30 != 0xffffffff;
                uVar26 = (ulonglong)CONCAT31((int3)((uVar35 & 0x1fffff) >> 8),bVar51);
                uVar35 = puVar45[3];
                uVar18 = puVar45[4];
                uVar52 = (uint)uVar41;
                uVar55 = (undefined4)uVar29;
                if (bVar50 == 3) {
                  local_1d0 = CONCAT44(local_1d0._4_4_,uVar55);
                  uVar35 = *(uint *)(*(longlong *)
                                      (*(longlong *)(param_1 + 0x168) + (longlong)(int)uVar35 * 8) +
                                    0x4c);
                  local_240 = (ulonglong *)(ulonglong)uVar35;
                  uVar18 = *(uint *)(*(longlong *)
                                      (*(longlong *)(param_1 + 0x168) + (longlong)(int)uVar18 * 8) +
                                    0x4c);
                  uVar35 = uVar18 * 0x17 + uVar35;
                  uVar35 = (uVar35 >> 2) + (uVar35 * 0x40 | (uint)bVar51) + 0x9e3779b9 ^ uVar35;
                  uVar30 = *(uint *)(param_1 + 0x3e0);
                  local_220 = (ulonglong *)(ulonglong)uVar30;
                  uVar19 = *(uint *)(param_1 + 0x40c);
                  if (uVar30 != uVar19) {
                    puVar31 = *(ulonglong **)(param_1 + 0x428);
                    if (*(ulonglong **)(param_1 + 0x428) == (ulonglong *)0x0) {
                      puVar31 = local_198;
                    }
                    if (puVar31 == (ulonglong *)0x0) {
                      puVar31 = local_190;
                    }
                    iVar17 = *(int *)((longlong)puVar31 +
                                     (ulonglong)(*(int *)(param_1 + 0x430) - 1U & uVar35) * 4);
                    if (iVar17 != -1) {
                      do {
                        lVar37 = *local_1c8 + (longlong)iVar17 * 0x20;
                        lVar49 = 0;
                        in_R10 = local_240;
                        bVar58 = true;
                        do {
                          bVar46 = bVar58;
                          if (*(int *)(lVar37 + lVar49 * 4) != (int)in_R10) goto LAB_1432068e4;
                          lVar49 = 1;
                          in_R10 = (ulonglong *)(ulonglong)uVar18;
                          bVar58 = false;
                        } while (bVar46);
                        if (*(byte *)(lVar37 + 8) == bVar51) {
                          local_208 = puVar32;
                          local_1e4 = uVar52;
                          if (lVar37 != 0) goto LAB_143206bf1;
                          break;
                        }
LAB_1432068e4:
                        iVar17 = *(int *)(*local_1c8 + 0x18 + (longlong)iVar17 * 0x20);
                      } while (iVar17 != -1);
                    }
                  }
                  if (uVar19 == 0) {
                    *(uint *)(param_1 + 0x3e0) = uVar30 + 1;
                    local_208 = puVar32;
                    local_1e4 = uVar52;
                    if (*(uint *)(param_1 + 0x3e4) == uVar30) {
                      FUN_14178f2cc(local_1c8,local_220);
                    }
                    iVar17 = *(int *)(param_1 + 0x400);
                    if (iVar17 == 0) {
                      iVar38 = -1;
                    }
                    else {
                      iVar38 = iVar17 + 0x1e;
                      if (-1 < iVar17 + -1) {
                        iVar38 = iVar17 + -1;
                      }
                      iVar38 = iVar38 >> 5;
                    }
                    iVar47 = iVar17 + 0x1f;
                    if (-1 < iVar17) {
                      iVar47 = iVar17;
                    }
                    if (iVar47 >> 5 == iVar38) {
                      *(int *)(param_1 + 0x400) = iVar17 + 1;
                    }
                    else {
                      local_1a8 = uVar26;
                      FUN_14018be28(local_1c0);
                      uVar30 = *(int *)(param_1 + 0x400) + 1;
                      uVar52 = *(int *)(param_1 + 0x400) + 0x20;
                      if (-1 < (int)uVar30) {
                        uVar52 = uVar30;
                      }
                      *(uint *)(param_1 + 0x400) = uVar30;
                      iVar38 = uVar30 - (uVar52 & 0xffffffe0);
                      uVar26 = local_1a8;
                      if (iVar38 != 0) {
                        lVar37 = *(longlong *)(param_1 + 0x3f8);
                        if (*(longlong *)(param_1 + 0x3f8) == 0) {
                          lVar37 = local_1c0;
                        }
                        bVar50 = -(char)iVar38;
                        *(uint *)(lVar37 + (longlong)((int)uVar52 >> 5) * 4) =
                             (uint)(*(int *)(lVar37 + (longlong)((int)uVar52 >> 5) * 4) <<
                                   (bVar50 & 0x1f)) >> (bVar50 & 0x1f);
                      }
                    }
                    lVar49 = (longlong)(int)local_220;
                    lVar37 = *(longlong *)(param_1 + 0x3f8);
                    if (*(longlong *)(param_1 + 0x3f8) == 0) {
                      lVar37 = local_1c0;
                    }
                    bVar50 = (byte)iVar17 & 0x1f;
                    puVar45 = (uint *)(lVar37 + (longlong)(iVar47 >> 5) * 4);
                    *puVar45 = *puVar45 & (-2 << bVar50 | 0xfffffffeU >> 0x20 - bVar50);
                    lVar37 = param_1;
                  }
                  else {
                    local_220 = (ulonglong *)(ulonglong)*(uint *)(param_1 + 0x408);
                    lVar49 = (longlong)(int)*(uint *)(param_1 + 0x408);
                    iVar17 = *(int *)(*(longlong *)(param_1 + 0x3d8) + 4 + lVar49 * 0x20);
                    *(int *)(param_1 + 0x408) = iVar17;
                    *(uint *)(param_1 + 0x40c) = uVar19 - 1;
                    lVar37 = local_228;
                    local_208 = puVar32;
                    local_1e4 = uVar52;
                    if (uVar19 - 1 != 0) {
                      *(undefined4 *)(*(longlong *)(param_1 + 0x3d8) + (longlong)iVar17 * 0x20) =
                           0xffffffff;
                    }
                  }
                  plVar42 = local_1c8;
                  iVar17 = (int)local_220;
                  lVar56 = *(longlong *)(lVar37 + 0x3f8);
                  if (*(longlong *)(lVar37 + 0x3f8) == 0) {
                    lVar56 = local_1c0;
                  }
                  iVar38 = iVar17 + 0x1f;
                  if (-1 < iVar17) {
                    iVar38 = iVar17;
                  }
                  puVar45 = (uint *)(lVar56 + (longlong)(iVar38 >> 5) * 4);
                  *puVar45 = *puVar45 | 1 << ((byte)local_220 & 0x1f);
                  lVar56 = *(longlong *)(lVar37 + 0x3d8);
                  lVar49 = lVar49 * 0x20;
                  puVar27 = (undefined4 *)(lVar56 + lVar49);
                  *(longlong *)(lVar56 + lVar49) =
                       ((longlong)(int)uVar18 << 0x20) + (longlong)local_240;
                  *(char *)(lVar56 + 8 + lVar49) = (char)uVar26;
                  *(undefined8 *)(lVar56 + 0x10 + lVar49) = 0;
                  *(undefined4 *)(lVar56 + 0x18 + lVar49) = 0xffffffff;
                  uVar30 = *(int *)(lVar37 + 0x3e0) - *(int *)(lVar37 + 0x40c);
                  in_R10 = local_220;
                  if ((uVar30 != 0) && (uVar30 != 1)) {
                    puVar32 = *(ulonglong **)(lVar37 + 0x428);
                    if (*(ulonglong **)(lVar37 + 0x428) == (ulonglong *)0x0) {
                      puVar32 = local_198;
                    }
                    if (puVar32 == (ulonglong *)0x0) {
                      puVar32 = local_190;
                    }
                    iVar38 = *(int *)((longlong)puVar32 +
                                     (ulonglong)(*(int *)(lVar37 + 0x430) - 1U & uVar35) * 4);
                    if (iVar38 != -1) {
                      do {
                        puVar28 = (undefined4 *)(*local_1c8 + (longlong)iVar38 * 0x20);
                        in_R10 = (ulonglong *)CONCAT71((int7)((ulonglong)in_R10 >> 8),1);
                        uVar41 = (ulonglong)local_240 & 0xffffffff;
                        lVar49 = 0;
                        do {
                          if (puVar28[lVar49] != (int)uVar41) goto LAB_143206a7d;
                          lVar49 = 1;
                          uVar41 = (ulonglong)uVar18;
                          cVar16 = (char)in_R10;
                          in_R10 = (ulonglong *)0x0;
                        } while (cVar16 != '\0');
                        if (*(char *)(puVar28 + 2) == (char)uVar26) {
                          uVar55 = *puVar27;
                          uVar36 = puVar27[1];
                          uVar7 = puVar27[2];
                          uVar8 = puVar27[3];
                          *(undefined8 *)(puVar28 + 4) = *(undefined8 *)(puVar27 + 4);
                          *puVar28 = uVar55;
                          puVar28[1] = uVar36;
                          puVar28[2] = uVar7;
                          puVar28[3] = uVar8;
                          FUN_14742e742(local_1c8,(ulonglong)local_220 & 0xffffffff);
                          goto LAB_143206bd7;
                        }
LAB_143206a7d:
                        iVar38 = *(int *)(*local_1c8 + 0x18 + (longlong)iVar38 * 0x20);
                      } while (iVar38 != -1);
                    }
                  }
                  if (uVar30 < 4) {
                    iVar38 = 1;
                  }
                  else {
                    uVar41 = (ulonglong)(uVar30 & 0xfffffffe) + 0xf;
                    lVar49 = 0x3f;
                    if (uVar41 != 0) {
                      for (; uVar41 >> lVar49 == 0; lVar49 = lVar49 + -1) {
                      }
                    }
                    iVar38 = 1 << ((byte)lVar49 & 0x1f);
                  }
                  if (((int)uVar30 < 1) || (iVar38 <= *(int *)(lVar37 + 0x430))) {
                    uVar35 = *(int *)(lVar37 + 0x430) - 1U & uVar35;
                    puVar27[7] = uVar35;
                    puVar32 = *(ulonglong **)(lVar37 + 0x428);
                    if (*(ulonglong **)(lVar37 + 0x428) == (ulonglong *)0x0) {
                      puVar32 = local_198;
                    }
                    if (puVar32 == (ulonglong *)0x0) {
                      puVar32 = local_190;
                    }
                    puVar27[6] = *(undefined4 *)
                                  ((longlong)puVar32 +
                                  ((longlong)*(int *)(lVar37 + 0x430) - 1U & (longlong)(int)uVar35)
                                  * 4);
                    puVar32 = *(ulonglong **)(lVar37 + 0x428);
                    if (*(ulonglong **)(lVar37 + 0x428) == (ulonglong *)0x0) {
                      puVar32 = local_198;
                    }
                    if (puVar32 == (ulonglong *)0x0) {
                      puVar32 = local_190;
                    }
                    *(int *)((longlong)puVar32 +
                            ((longlong)*(int *)(lVar37 + 0x430) - 1U & (longlong)(int)uVar35) * 4) =
                         iVar17;
                    in_R10 = local_198;
                  }
                  else {
                    *(int *)(lVar37 + 0x430) = iVar38;
                    FUN_144adb3b2(local_1c8);
                    iVar17 = (int)local_220;
                  }
LAB_143206bd7:
                  lVar37 = *plVar42 + (longlong)iVar17 * 0x20;
LAB_143206bf1:
                  lVar49 = local_228;
                  puVar32 = local_248;
                  puVar40 = (ulonglong *)(lVar37 + 0x10);
                  uVar41 = *puVar40;
                  bVar50 = (byte)uVar26;
                  if (uVar41 == 0) {
                    local_128[0] = *(longlong *)
                                    (*(longlong *)(local_228 + 0x168) + (longlong)(int)local_240 * 8
                                    );
                    local_128[1] = *(undefined8 *)
                                    (*(longlong *)(local_228 + 0x168) + (longlong)(int)uVar18 * 8);
                    puVar43 = (undefined8 *)
                              (*(longlong *)(local_228 + 0xe0) + 7U & 0xfffffffffffffff8);
                    puVar21 = puVar43 + 9;
                    if (*(undefined8 **)(local_228 + 0xe8) < puVar21) {
                      FUN_140023dd8(local_248,0x50);
                      puVar43 = (undefined8 *)(*puVar32 + 7 & 0xfffffffffffffff8);
                      puVar21 = puVar43 + 9;
                    }
                    *(undefined8 **)(lVar49 + 0xe0) = puVar21;
                    *puVar43 = 0;
                    puVar43[1] = 0;
                    *(undefined4 *)(puVar43 + 2) = 0xffffffff;
                    *(undefined1 *)((longlong)puVar43 + 0x14) = 1;
                    *(undefined4 *)(puVar43 + 3) = 0xffffffff;
                    *(undefined1 *)((longlong)puVar43 + 0x1c) = 1;
                    puVar43[4] = 0;
                    puVar43[5] = 0;
                    puVar43[6] = 0;
                    puVar43[7] = 0;
                    *(undefined4 *)(puVar43 + 8) = 1;
                    *(undefined1 *)((longlong)puVar43 + 0x44) = 3;
                    *(byte *)((longlong)puVar43 + 0x45) = bVar50;
                    *(undefined2 *)((longlong)puVar43 + 0x46) = 0;
                    *puVar40 = (ulonglong)puVar43;
                    iVar17 = *(int *)(lVar49 + 0x470);
                    *(uint *)(lVar49 + 0x470) = iVar17 + 1U;
                    if (*(uint *)(lVar49 + 0x474) < iVar17 + 1U) {
                      FUN_144adb638(local_210,iVar17);
                    }
                    *(ulonglong *)(*local_210 + (longlong)iVar17 * 8) = *puVar40;
                    lVar37 = 0;
                    do {
                      lVar49 = *(longlong *)((longlong)local_128 + lVar37);
                      iVar17 = *(int *)(lVar49 + 0x198);
                      *(uint *)(lVar49 + 0x198) = iVar17 + 1U;
                      if (*(uint *)(lVar49 + 0x19c) < iVar17 + 1U) {
                        FUN_144adb638((longlong *)(lVar49 + 400),iVar17);
                      }
                      uVar41 = *puVar40;
                      *(ulonglong *)(*(longlong *)(lVar49 + 400) + (longlong)iVar17 * 8) = uVar41;
                      lVar37 = lVar37 + 8;
                    } while (lVar37 != 0x10);
                  }
                  puVar31 = local_238;
                  iVar17 = *(int *)(uVar41 + 0x28);
                  *(uint *)(uVar41 + 0x28) = iVar17 + 1U;
                  if (*(uint *)(uVar41 + 0x2c) < iVar17 + 1U) {
                    FUN_144adb766(uVar41 + 0x20,iVar17);
                  }
                  lVar37 = *(longlong *)(uVar41 + 0x20);
                  lVar49 = (longlong)iVar17 * 0x10;
                  *(ulonglong **)(lVar37 + lVar49) = local_208;
                  *(short *)(lVar37 + 8 + lVar49) = (short)local_1d0;
                  *(char *)(lVar37 + 10 + lVar49) = (char)local_1e4;
                  *(char *)(lVar37 + 0xb + lVar49) = (char)uVar22;
                  *(undefined1 *)(uVar41 + 0x46) = 1;
                  while (plVar54 = local_1d8, param_1 = local_228, bVar50 != 0) {
                    uVar22 = *puVar40;
                    lVar37 = *(longlong *)
                              (*(longlong *)(local_228 + 0x168) +
                              (longlong)
                              *(int *)(*(longlong *)
                                        (*(longlong *)(local_228 + 0x168) +
                                        (longlong)
                                        *(int *)((longlong)&local_108 +
                                                (ulonglong)
                                                ((byte)(-(byte)uVar26 & (byte)uVar26) == 2) * 4 + 4)
                                        * 8) + 0x48) * 8);
                    bVar50 = *(byte *)(lVar37 + 0x130);
                    uVar35 = *(uint *)(*(longlong *)(lVar37 + 0x128) + 0x2c);
                    uVar41 = (ulonglong)(*(char *)(*(longlong *)(lVar37 + 0x128) + 0x2b) == '\x02');
                    uVar18 = *(uint *)(uVar22 + 0x10 + uVar41 * 8);
                    bVar51 = *(byte *)(uVar22 + 0x14 + uVar41 * 8);
                    if ((uVar18 != uVar35) || (bVar51 != bVar50)) {
                      bVar14 = bVar50;
                      if (bVar51 < bVar50) {
                        bVar14 = bVar51;
                      }
                      if ((uVar35 <= uVar18) && (bVar50 <= bVar51)) {
                        puVar32 = (ulonglong *)(lVar37 + 0xf8);
                        puVar31 = (ulonglong *)(longlong)*(int *)(lVar37 + 0x120);
                        uVar18 = *(int *)(lVar37 + 0x120) + 1;
                        *(uint *)(lVar37 + 0x120) = uVar18;
                        if (*(uint *)(lVar37 + 0x124) < uVar18) {
                          local_240 = puVar32;
                          local_220 = puVar31;
                          local_1a8 = uVar26;
                          FUN_144adb9c0(puVar32,puVar31);
                          puVar32 = local_240;
                          puVar31 = local_220;
                          uVar26 = local_1a8;
                        }
                        if (*(ulonglong **)(lVar37 + 0x118) != (ulonglong *)0x0) {
                          puVar32 = *(ulonglong **)(lVar37 + 0x118);
                        }
                        puVar32[(longlong)puVar31] = uVar22;
                        *(ulonglong *)(uVar22 + 0x10 + uVar41 * 8) =
                             (ulonglong)CONCAT14(bVar14,uVar35);
                      }
                    }
                    iVar17 = (int)uVar26 + -1;
                    bVar50 = (byte)iVar17 & (byte)uVar26;
                    uVar26 = (ulonglong)CONCAT31((int3)((uint)iVar17 >> 8),bVar50);
                    puVar31 = local_238;
                  }
                }
                else {
                  local_240 = (ulonglong *)CONCAT71(local_240._1_7_,bVar50);
                  local_220 = (ulonglong *)CONCAT44(local_220._4_4_,(int)uVar22);
                  if (uVar18 + 1 < uVar35 + 1) {
                    uVar18 = uVar35;
                  }
                  uVar35 = uStack_100;
                  if (uVar30 < uStack_100) {
                    uVar35 = uVar30;
                  }
                  lVar37 = *(longlong *)(param_1 + 0x168);
                  in_R10 = (ulonglong *)(longlong)(int)uVar18;
                  lVar49 = *(longlong *)(lVar37 + (longlong)in_R10 * 8);
                  if (uVar18 < uVar35) {
                    lVar37 = *(longlong *)(lVar37 + (longlong)*(int *)(lVar49 + 0x4c) * 8);
                    if (bVar51 == 2) {
                      uVar22 = *(ulonglong *)(lVar37 + 0x180);
                      if (uVar22 == 0) {
                        local_1d0 = CONCAT44(local_1d0._4_4_,uVar55);
                        puVar43 = (undefined8 *)
                                  (*(longlong *)(param_1 + 0xe0) + 7U & 0xfffffffffffffff8);
                        puVar21 = puVar43 + 9;
                        if (*(undefined8 **)(param_1 + 0xe8) < puVar21) {
                          local_1f0 = in_R10;
                          FUN_140023dd8(local_248,0x50);
                          puVar43 = (undefined8 *)(*puVar57 + 7 & 0xfffffffffffffff8);
                          puVar21 = puVar43 + 9;
                          in_R10 = local_1f0;
                          bVar50 = (byte)local_240;
                        }
                        *(undefined8 **)(param_1 + 0xe0) = puVar21;
                        uVar53 = *(undefined1 *)(lVar37 + 0x2b);
                        *puVar43 = 0;
                        puVar43[1] = 0;
                        *(undefined4 *)(puVar43 + 2) = 0xffffffff;
                        *(undefined1 *)((longlong)puVar43 + 0x14) = 1;
                        *(undefined4 *)(puVar43 + 3) = 0xffffffff;
                        *(undefined1 *)((longlong)puVar43 + 0x1c) = 1;
                        puVar43[4] = 0;
                        puVar43[5] = 0;
                        puVar43[6] = 0;
                        puVar43[7] = 0;
                        *(undefined4 *)(puVar43 + 8) = 1;
                        *(undefined1 *)((longlong)puVar43 + 0x44) = uVar53;
                        *(undefined2 *)((longlong)puVar43 + 0x45) = 2;
                        *(undefined1 *)((longlong)puVar43 + 0x47) = 0;
                        *(undefined8 **)(lVar37 + 0x180) = puVar43;
                        iVar17 = *(int *)(param_1 + 0x470);
                        *(uint *)(param_1 + 0x470) = iVar17 + 1U;
                        if (*(uint *)(param_1 + 0x474) < iVar17 + 1U) {
                          local_1f0 = in_R10;
                          FUN_144adb638(local_210,iVar17);
                          in_R10 = local_1f0;
                          bVar50 = (byte)local_240;
                        }
                        lVar49 = *local_210;
                        uVar22 = *(ulonglong *)(lVar37 + 0x180);
LAB_1432067de:
                        *(ulonglong *)(lVar49 + (longlong)iVar17 * 8) = uVar22;
                        uVar29 = local_1d0 & 0xffffffff;
                      }
                    }
                    else if (bVar51 == 3) {
                      uVar22 = *(ulonglong *)(lVar37 + 0x188);
                      if (uVar22 == 0) {
                        local_1d0 = CONCAT44(local_1d0._4_4_,uVar55);
                        puVar43 = (undefined8 *)
                                  (*(longlong *)(param_1 + 0xe0) + 7U & 0xfffffffffffffff8);
                        puVar21 = puVar43 + 9;
                        if (*(undefined8 **)(param_1 + 0xe8) < puVar21) {
                          local_1f0 = in_R10;
                          FUN_140023dd8(local_248,0x50);
                          puVar43 = (undefined8 *)(*puVar57 + 7 & 0xfffffffffffffff8);
                          puVar21 = puVar43 + 9;
                          in_R10 = local_1f0;
                          bVar50 = (byte)local_240;
                        }
                        *(undefined8 **)(param_1 + 0xe0) = puVar21;
                        uVar53 = *(undefined1 *)(lVar37 + 0x2b);
                        *puVar43 = 0;
                        puVar43[1] = 0;
                        *(undefined4 *)(puVar43 + 2) = 0xffffffff;
                        *(undefined1 *)((longlong)puVar43 + 0x14) = 1;
                        *(undefined4 *)(puVar43 + 3) = 0xffffffff;
                        *(undefined1 *)((longlong)puVar43 + 0x1c) = 1;
                        puVar43[4] = 0;
                        puVar43[5] = 0;
                        puVar43[6] = 0;
                        puVar43[7] = 0;
                        *(undefined4 *)(puVar43 + 8) = 1;
                        *(undefined1 *)((longlong)puVar43 + 0x44) = uVar53;
                        *(undefined2 *)((longlong)puVar43 + 0x45) = 3;
                        *(undefined1 *)((longlong)puVar43 + 0x47) = 0;
                        *(undefined8 **)(lVar37 + 0x188) = puVar43;
                        iVar17 = *(int *)(param_1 + 0x470);
                        *(uint *)(param_1 + 0x470) = iVar17 + 1U;
                        if (*(uint *)(param_1 + 0x474) < iVar17 + 1U) {
                          local_1f0 = in_R10;
                          FUN_144adb638(local_210,iVar17);
                          in_R10 = local_1f0;
                          bVar50 = (byte)local_240;
                        }
                        lVar49 = *local_210;
                        uVar22 = *(ulonglong *)(lVar37 + 0x188);
                        goto LAB_1432067de;
                      }
                    }
                    else {
                      uVar22 = lVar37 + 0x138;
                      if (*(char *)(lVar37 + 0x17e) == '\0') {
                        iVar17 = *(int *)(lVar37 + 0x88) + *(int *)(lVar37 + 0x78);
                        local_1e4 = uVar52;
                        if (iVar17 < 0) goto LAB_14320bbf3;
                        local_208 = puVar32;
                        if (*(int *)(lVar37 + 0x164) < iVar17) {
                          local_1f0 = in_R10;
                          FUN_144adac32(lVar37 + 0x158,iVar17);
                          in_R10 = local_1f0;
                          bVar50 = (byte)local_240;
                        }
                        puVar32 = local_208;
                        if (*(int *)(lVar37 + 0x174) < iVar17) {
                          FUN_144adad0c(lVar37 + 0x168,iVar17);
                          bVar50 = (byte)local_240;
                        }
                        iVar17 = *(int *)(param_1 + 0x470);
                        *(uint *)(param_1 + 0x470) = iVar17 + 1U;
                        if (*(uint *)(param_1 + 0x474) < iVar17 + 1U) {
                          FUN_144adb638(local_210,iVar17);
                          puVar32 = local_208;
                          bVar50 = (byte)local_240;
                        }
                        *(ulonglong *)(*local_210 + (longlong)iVar17 * 8) = uVar22;
                        uVar41 = (ulonglong)local_1e4;
                      }
                    }
                  }
                  else {
                    uVar22 = FUN_14178e9d4(*(undefined8 *)
                                            (lVar37 + (longlong)*(int *)(lVar49 + 0x48) * 8),
                                           local_248,local_210);
                    bVar50 = (byte)local_240;
                  }
                  iVar17 = *(int *)(uVar22 + 0x28);
                  *(uint *)(uVar22 + 0x28) = iVar17 + 1U;
                  if (*(uint *)(uVar22 + 0x2c) < iVar17 + 1U) {
                    local_208 = puVar32;
                    local_1f0 = in_R10;
                    FUN_144adb766(uVar22 + 0x20,iVar17);
                    in_R10 = local_1f0;
                    puVar32 = local_208;
                    bVar50 = (byte)local_240;
                  }
                  lVar37 = *(longlong *)(uVar22 + 0x20);
                  lVar49 = (longlong)iVar17 * 0x10;
                  *(ulonglong **)(lVar37 + lVar49) = puVar32;
                  *(short *)(lVar37 + 8 + lVar49) = (short)uVar29;
                  *(char *)(lVar37 + 10 + lVar49) = (char)uVar41;
                  *(char *)(lVar37 + 0xb + lVar49) = (char)local_220;
                  *(undefined1 *)(uVar22 + 0x46) = 1;
                  lVar37 = uVar22 + 0x10;
                  bVar51 = 3;
                  local_230 = puVar44;
                  do {
                    puVar32 = local_248;
                    bVar14 = -bVar51 & bVar51;
                    if ((bVar50 == bVar14) && ((byte)uVar26 == 3)) {
                      uVar41 = *(ulonglong *)
                                (*(longlong *)(param_1 + 0x168) +
                                (longlong)
                                *(int *)(*(longlong *)
                                          (*(longlong *)(param_1 + 0x168) + (longlong)in_R10 * 8) +
                                        0x4c) * 8);
                      puVar31 = *(ulonglong **)(uVar41 + 0x1a0);
                      if (puVar31 == (ulonglong *)0x0) {
                        puVar31 = (ulonglong *)
                                  (*(longlong *)(param_1 + 0xe0) + 7U & 0xfffffffffffffff8);
                        puVar40 = puVar31 + 8;
                        if (*(ulonglong **)(param_1 + 0xe8) < puVar40) {
                          FUN_140023dd8(local_248,0x48);
                          puVar31 = (ulonglong *)(*puVar32 + 7 & 0xfffffffffffffff8);
                          puVar40 = puVar31 + 8;
                          bVar50 = (byte)local_240;
                        }
                        *local_248 = (ulonglong)puVar40;
                        puVar31[4] = 0;
                        puVar31[5] = 0x400000000;
                        puVar31[6] = uVar41;
                        *(undefined1 *)(puVar31 + 7) = 1;
                        *(ulonglong **)(uVar41 + 0x1a0) = puVar31;
                      }
                      bVar14 = (byte)puVar31[7];
                      uVar35 = *(uint *)(puVar31[6] + 0x2c);
                      uVar41 = (ulonglong)(*(char *)(puVar31[6] + 0x2b) == '\x02');
                      uVar18 = *(uint *)(lVar37 + uVar41 * 8);
                      bVar2 = *(byte *)(uVar22 + 0x14 + uVar41 * 8);
                      if ((uVar18 != uVar35) || (bVar2 != bVar14)) {
                        bVar1 = bVar14;
                        if (bVar2 < bVar14) {
                          bVar1 = bVar2;
                        }
                        if ((uVar35 <= uVar18) && (bVar14 <= bVar2)) {
                          local_220 = (ulonglong *)(ulonglong)(uint)puVar31[5];
                          uVar18 = (uint)puVar31[5] + 1;
                          *(uint *)(puVar31 + 5) = uVar18;
                          if (*(uint *)((longlong)puVar31 + 0x2c) < uVar18) {
                            local_1f0 = in_R10;
                            local_1a8 = uVar26;
                            FUN_144adb9c0(puVar31,local_220);
                            in_R10 = local_1f0;
                            uVar26 = local_1a8;
                            bVar50 = (byte)local_240;
                          }
                          puVar32 = puVar31 + 4;
LAB_143206343:
                          if ((ulonglong *)*puVar32 != (ulonglong *)0x0) {
                            puVar31 = (ulonglong *)*puVar32;
                          }
                          puVar31[(int)local_220] = uVar22;
                          *(ulonglong *)(lVar37 + uVar41 * 8) = (ulonglong)CONCAT14(bVar1,uVar35);
                        }
                      }
                    }
                    else if ((bVar14 & (byte)uVar26) != 0) {
                      lVar49 = *(longlong *)
                                (*(longlong *)(local_228 + 0x168) +
                                (longlong)
                                *(int *)(*(longlong *)
                                          (*(longlong *)(local_228 + 0x168) +
                                          (longlong)
                                          *(int *)((longlong)&local_108 +
                                                  (ulonglong)(bVar14 == 2) * 4 + 4) * 8) + 0x48) * 8
                                );
                      bVar14 = *(byte *)(lVar49 + 0x130);
                      uVar35 = *(uint *)(*(longlong *)(lVar49 + 0x128) + 0x2c);
                      uVar41 = (ulonglong)
                               (*(char *)(*(longlong *)(lVar49 + 0x128) + 0x2b) == '\x02');
                      uVar18 = *(uint *)(lVar37 + uVar41 * 8);
                      bVar2 = *(byte *)(uVar22 + 0x14 + uVar41 * 8);
                      if ((uVar18 != uVar35) || (bVar2 != bVar14)) {
                        bVar1 = bVar14;
                        if (bVar2 < bVar14) {
                          bVar1 = bVar2;
                        }
                        if ((uVar35 <= uVar18) && (bVar14 <= bVar2)) {
                          puVar31 = (ulonglong *)(lVar49 + 0xf8);
                          local_220 = (ulonglong *)(ulonglong)*(uint *)(lVar49 + 0x120);
                          uVar18 = *(uint *)(lVar49 + 0x120) + 1;
                          *(uint *)(lVar49 + 0x120) = uVar18;
                          if (*(uint *)(lVar49 + 0x124) < uVar18) {
                            local_208 = puVar31;
                            local_1f0 = in_R10;
                            local_1a8 = uVar26;
                            FUN_144adb9c0(puVar31,local_220);
                            puVar31 = local_208;
                            in_R10 = local_1f0;
                            uVar26 = local_1a8;
                            bVar50 = (byte)local_240;
                          }
                          puVar32 = (ulonglong *)(lVar49 + 0x118);
                          goto LAB_143206343;
                        }
                      }
                    }
                    bVar51 = bVar51 - 1 & bVar51;
                    puVar44 = local_230;
                    plVar54 = local_1d8;
                    puVar31 = local_238;
                    param_1 = local_228;
                  } while (bVar51 != 0);
                }
              }
LAB_1432060d6:
              local_1e0[(longlong)puVar39] = (ulonglong)puVar44;
              puVar32 = local_258;
              puVar40 = local_250;
            }
            puVar39 = (ulonglong *)((longlong)puVar39 + 1);
          } while (puVar39 != puVar32);
        }
        *(undefined4 *)(param_1 + 0x480) = 0;
        if (*(int *)(param_1 + 0x484) < 0) {
          puVar32 = (ulonglong *)0x0;
          FUN_14178f1f0(puVar31,0);
        }
        plVar42 = local_1a0;
        puVar40 = local_248;
        if ((*(byte *)((longlong)plVar54 + 0x24) & 0x20) == 0) {
          if (*(char *)((longlong)plVar54 + 0x21) == '\x01') {
            lVar37 = plVar54[2];
            puVar27 = *(undefined4 **)plVar54[0x17];
            uVar35 = *(uint *)(param_1 + 0x440);
            *(uint *)(param_1 + 0x440) = uVar35 + 1;
            if (*(uint *)(param_1 + 0x444) < uVar35 + 1) {
              puVar32 = (ulonglong *)(ulonglong)uVar35;
              FUN_14742e6ea(local_188,puVar32);
            }
            lVar49 = *local_188;
            uVar55 = *puVar27;
            *(longlong *)(lVar49 + (longlong)(int)uVar35 * 0x10) = lVar37;
            *(undefined4 *)(lVar49 + 8 + (longlong)(int)uVar35 * 0x10) = uVar55;
          }
          else {
            iVar17 = *(int *)(param_1 + 0x170);
            puVar43 = (undefined8 *)(*(longlong *)(param_1 + 0xe0) + 3U & 0xfffffffffffffffc);
            puVar21 = puVar43 + 4;
            if (*(undefined8 **)(param_1 + 0xe8) < puVar21) {
              FUN_140023dd8(local_248,0x24);
              puVar43 = (undefined8 *)(*puVar40 + 3 & 0xfffffffffffffffc);
              puVar21 = puVar43 + 4;
            }
            iVar17 = iVar17 + -1;
            *local_248 = (ulonglong)puVar21;
            *(undefined8 *)((longlong)puVar43 + 0xc) = 0;
            *(undefined8 *)((longlong)puVar43 + 0x14) = 0;
            *puVar43 = 0;
            puVar43[1] = 0;
            *(undefined2 *)(puVar43 + 3) = 0xffff;
            *(undefined4 *)((longlong)puVar43 + 0x1c) = 0;
            puVar43[1] = 0xffffffffffffffff;
            puVar43[2] = 0xffffffffffffffff;
            *(int *)((longlong)puVar43 + 4) = iVar17;
            *(int *)((longlong)puVar43 + 0xc) = iVar17;
            iVar17 = *(int *)((longlong)plVar54 + 0x2c);
            if ((longlong)iVar17 == -1) {
              *(int *)puVar43 = (int)plVar54[0xb];
              lVar37 = plVar54[2];
              iVar17 = *(int *)(param_1 + 0x440);
              *(uint *)(param_1 + 0x440) = iVar17 + 1U;
              if (*(uint *)(param_1 + 0x444) < iVar17 + 1U) {
                FUN_14742e6ea(local_188,iVar17);
              }
              lVar49 = *local_188;
              uVar55 = *(undefined4 *)puVar43;
              *(longlong *)(lVar49 + (longlong)iVar17 * 0x10) = lVar37;
              *(undefined4 *)(lVar49 + 8 + (longlong)iVar17 * 0x10) = uVar55;
            }
            else {
              uVar22 = (ulonglong)
                       (*(char *)(*(longlong *)
                                   (*(longlong *)(param_1 + 0x168) + (longlong)iVar17 * 8) + 0x2b)
                       == '\x02');
              *(undefined4 *)((longlong)puVar43 + 4) = 0xffffffff;
              *(undefined4 *)(puVar43 + 1) = 0xffffffff;
              *(undefined4 *)((longlong)puVar43 + 0xc) = 0xffffffff;
              *(undefined4 *)(puVar43 + 2) = 0xffffffff;
              *(int *)((longlong)puVar43 + uVar22 * 4 + 4) = iVar17;
              *(int *)((longlong)puVar43 + uVar22 * 4 + 0xc) = iVar17;
              *(undefined4 *)puVar43 = 0x40000;
            }
            lVar37 = plVar54[0x18];
            if ((longlong)(int)lVar37 != 0) {
              lVar49 = plVar54[0x17];
              lVar56 = 0;
              puVar21 = (undefined8 *)0x0;
              do {
                puVar32 = local_248;
                if (*(longlong *)(lVar49 + lVar56) == 0) {
                  if (puVar21 == (undefined8 *)0x0) {
                    iVar17 = 0;
                    if ((int)plVar54[5] != -1) {
                      iVar17 = (int)plVar54[6];
                    }
                    puVar21 = (undefined8 *)
                              (*(longlong *)(param_1 + 0xe0) + 3U & 0xfffffffffffffffc);
                    puVar24 = puVar21 + 4;
                    if (*(undefined8 **)(param_1 + 0xe8) < puVar24) {
                      FUN_140023dd8(local_248,0x24);
                      puVar21 = (undefined8 *)(*puVar32 + 3 & 0xfffffffffffffffc);
                      puVar24 = puVar21 + 4;
                      plVar54 = local_1d8;
                    }
                    *(undefined8 **)(param_1 + 0xe0) = puVar24;
                    *(undefined8 *)((longlong)puVar21 + 0xc) = 0;
                    *(undefined8 *)((longlong)puVar21 + 0x14) = 0;
                    *puVar21 = 0;
                    puVar21[1] = 0;
                    *(undefined4 *)((longlong)puVar21 + 4) = 0xffffffff;
                    *(undefined4 *)(puVar21 + 1) = 0xffffffff;
                    *(undefined4 *)((longlong)puVar21 + 0xc) = 0xffffffff;
                    *(undefined4 *)(puVar21 + 2) = 0xffffffff;
                    *(undefined8 *)((longlong)puVar21 + 0x12) = 0xffffffffffffffff;
                    *(undefined4 *)((longlong)puVar21 + 0x1c) = 0;
                    lVar34 = (ulonglong)
                             (*(char *)(*(longlong *)
                                         (*(longlong *)(param_1 + 0x168) + (longlong)iVar17 * 8) +
                                       0x2b) == '\x02') * 4;
                    *(undefined4 *)((longlong)puVar21 + 4) = 0xffffffff;
                    *(undefined4 *)(puVar21 + 1) = 0xffffffff;
                    *(undefined4 *)((longlong)puVar21 + 0xc) = 0xffffffff;
                    *(undefined4 *)(puVar21 + 2) = 0xffffffff;
                    *(int *)((longlong)puVar21 + lVar34 + 4) = iVar17;
                    *(int *)((longlong)puVar21 + lVar34 + 0xc) = iVar17;
                  }
                  *(undefined8 **)(lVar49 + lVar56) = puVar21;
                }
                lVar56 = lVar56 + 8;
              } while ((longlong)(int)lVar37 * 8 != lVar56);
            }
            uVar35 = *(uint *)(plVar54 + 0x15);
            uVar35 = (uVar35 >> 8 & 0xff) * (uVar35 >> 0x10) * (uVar35 & 0xff);
            if (*(int *)(param_1 + 0x484) < (int)uVar35) {
              FUN_14178f1f0();
            }
            uVar18 = *(uint *)(param_1 + 0x480);
            if ((int)uVar18 < (int)uVar35) {
              *(uint *)(param_1 + 0x480) = uVar35;
              if (*(int *)(param_1 + 0x484) - uVar18 < uVar35 - uVar18) {
                FUN_14473d6dc(puVar31);
              }
              memset((void *)((longlong)(int)uVar18 * 8 + *puVar31),0,
                     (longlong)(int)(uVar35 - uVar18) << 3);
            }
            else if (uVar35 < uVar18) {
              *(uint *)(param_1 + 0x480) = uVar35;
              FUN_14742d3f8();
            }
            if (uVar35 != 0) {
              uVar18 = 0;
              do {
                *(undefined8 **)(*puVar31 + (longlong)(int)uVar18 * 8) = puVar43;
                uVar18 = uVar18 + 1;
              } while (uVar35 != uVar18);
            }
            uVar35 = *(uint *)(plVar54 + 0x15);
            local_250 = (ulonglong *)(ulonglong)*(ushort *)((longlong)plVar54 + 0xb4);
            if (((DAT_14ca84e6a == '\0') && (*(char *)((longlong)plVar54 + 0x93) == '\v')) &&
               (uVar18 = (uVar35 >> 0x10) * (uVar35 & 0xff), uVar18 != 0)) {
              puVar40 = (ulonglong *)(ulonglong)uVar18;
              puVar32 = (ulonglong *)0x0;
              local_1e0 = puVar40;
              do {
                puVar39 = local_248;
                uVar22 = *puVar31;
                puVar3 = *(ushort **)(uVar22 + (longlong)puVar32 * 8);
                puVar21 = *(undefined8 **)(uVar22 + (longlong)puVar40 * 8);
                if (puVar3 != (ushort *)0x0 || puVar21 != (undefined8 *)0x0) {
                  lVar37 = local_1d8[0x17];
                  if ((puVar3 == (ushort *)0x0) || ((*puVar3 & 0x2080) == 0)) {
                    puVar4 = *(ushort **)(lVar37 + (longlong)puVar32 * 8);
                    if ((puVar4 != (ushort *)0x0) && ((*puVar4 & 0x2080) != 0)) {
                      if (puVar3 == (ushort *)0x0) {
                        puVar24 = (undefined8 *)
                                  (*(longlong *)(local_228 + 0xe0) + 3U & 0xfffffffffffffffc);
                        puVar43 = puVar24 + 4;
                        if (*(undefined8 **)(local_228 + 0xe8) < puVar43) {
                          FUN_140023dd8(local_248,0x24);
                          puVar24 = (undefined8 *)(*puVar39 + 3 & 0xfffffffffffffffc);
                          puVar43 = puVar24 + 4;
                        }
                        *local_248 = (ulonglong)puVar43;
                        uVar5 = *puVar21;
                        uVar12 = puVar21[1];
                        uVar13 = puVar21[3];
                        puVar24[2] = puVar21[2];
                        puVar24[3] = uVar13;
                        *puVar24 = uVar5;
                        puVar24[1] = uVar12;
                        *(undefined8 **)(uVar22 + (longlong)puVar32 * 8) = puVar24;
                      }
                      else if (puVar21 == (undefined8 *)0x0) {
                        puVar43 = (undefined8 *)
                                  (*(longlong *)(local_228 + 0xe0) + 3U & 0xfffffffffffffffc);
                        puVar21 = puVar43 + 4;
                        if (*(undefined8 **)(local_228 + 0xe8) < puVar21) {
                          FUN_140023dd8(local_248,0x24);
                          puVar43 = (undefined8 *)(*puVar39 + 3 & 0xfffffffffffffffc);
                          puVar21 = puVar43 + 4;
                        }
                        *local_248 = (ulonglong)puVar21;
                        uVar5 = *(undefined8 *)puVar3;
                        uVar12 = *(undefined8 *)(puVar3 + 4);
                        uVar13 = *(undefined8 *)(puVar3 + 0xc);
                        puVar43[2] = *(undefined8 *)(puVar3 + 8);
                        puVar43[3] = uVar13;
                        *puVar43 = uVar5;
                        puVar43[1] = uVar12;
                        *(undefined8 **)(uVar22 + (longlong)puVar40 * 8) = puVar43;
                      }
                    }
                  }
                  else {
                    iVar17 = *(int *)(*(longlong *)(lVar37 + (longlong)puVar40 * 8) + 0xc);
                    puVar27 = *(undefined4 **)(lVar37 + (longlong)puVar32 * 8);
                    if (iVar17 + 1U < puVar27[3] + 1) {
                      iVar17 = puVar27[3];
                    }
                    puVar23 = (undefined4 *)
                              (*(longlong *)(local_228 + 0xe0) + 3U & 0xfffffffffffffffc);
                    puVar28 = puVar23 + 8;
                    if (*(undefined4 **)(local_228 + 0xe8) < puVar28) {
                      FUN_140023dd8(local_248,0x24);
                      puVar23 = (undefined4 *)(*puVar39 + 3 & 0xfffffffffffffffc);
                      puVar28 = puVar23 + 8;
                    }
                    puVar31 = local_248;
                    *(undefined4 **)(local_228 + 0xe0) = puVar28;
                    uVar55 = *puVar27;
                    uVar36 = puVar27[1];
                    uVar7 = puVar27[2];
                    uVar8 = puVar27[3];
                    uVar9 = puVar27[5];
                    uVar10 = puVar27[6];
                    uVar11 = puVar27[7];
                    puVar23[4] = puVar27[4];
                    puVar23[5] = uVar9;
                    puVar23[6] = uVar10;
                    puVar23[7] = uVar11;
                    *puVar23 = uVar55;
                    puVar23[1] = uVar36;
                    puVar23[2] = uVar7;
                    puVar23[3] = uVar8;
                    *(undefined4 **)(lVar37 + (longlong)puVar32 * 8) = puVar23;
                    puVar43 = *(undefined8 **)(uVar22 + (longlong)puVar32 * 8);
                    puVar24 = (undefined8 *)
                              (*(longlong *)(local_228 + 0xe0) + 3U & 0xfffffffffffffffc);
                    puVar21 = puVar24 + 4;
                    if (*(undefined8 **)(local_228 + 0xe8) < puVar21) {
                      FUN_140023dd8(local_248,0x24);
                      puVar24 = (undefined8 *)(*puVar31 + 3 & 0xfffffffffffffffc);
                      puVar21 = puVar24 + 4;
                    }
                    *local_248 = (ulonglong)puVar21;
                    uVar5 = *puVar43;
                    uVar12 = puVar43[1];
                    uVar13 = puVar43[3];
                    puVar24[2] = puVar43[2];
                    puVar24[3] = uVar13;
                    *puVar24 = uVar5;
                    puVar24[1] = uVar12;
                    *(undefined8 **)(uVar22 + (longlong)puVar32 * 8) = puVar24;
                    *(int *)(*(longlong *)(lVar37 + (longlong)puVar32 * 8) + 0xc) = iVar17;
                    *(int *)(*(longlong *)(lVar37 + (longlong)puVar40 * 8) + 0xc) = iVar17;
                  }
                }
                puVar32 = (ulonglong *)((longlong)puVar32 + 1);
                puVar40 = (ulonglong *)((longlong)puVar40 + 1);
                plVar54 = local_1d8;
                puVar31 = local_238;
                param_1 = local_228;
              } while (local_1e0 != puVar32);
            }
            puVar32 = local_250;
            if (local_250 != (ulonglong *)0x0) {
              local_1f8 = (ulonglong *)(CONCAT44(local_1f8._4_4_,uVar35) & 0xffffffff000000ff);
              local_230 = (ulonglong *)CONCAT44(local_230._4_4_,uVar35 >> 0x10);
              local_1b0 = CONCAT44(local_1b0._4_4_,(uVar35 & 0xff) * (uVar35 >> 0x10));
              puVar40 = (ulonglong *)0x0;
              do {
                puVar44 = local_248;
                puVar39 = *(ulonglong **)(*puVar31 + (longlong)puVar40 * 8);
                if (puVar39 != (ulonglong *)0x0) {
                  local_1e0 = (ulonglong *)plVar54[0x17];
                  puVar45 = (uint *)local_1e0[(longlong)puVar40];
                  if (puVar45 == (uint *)0x0) goto LAB_143207413;
                  uVar35 = *puVar45;
                  in_R10 = (ulonglong *)(ulonglong)(uint)*puVar39;
                  if (uVar35 == (uint)*puVar39) {
                    uVar18 = puVar45[2];
                    if (((char)((uVar18 != 0xffffffff) * '\x02' | puVar45[1] != 0xffffffff) !=
                         (char)(((int)puVar39[1] != -1) * '\x02' |
                               *(int *)((longlong)puVar39 + 4) != -1)) ||
                       (puVar45[7] != *(uint *)((longlong)puVar39 + 0x1c))) goto LAB_143207439;
                    if ((uVar35 & 0xc00) != 0) {
                      uVar30 = *(uint *)((longlong)puVar39 + 0x14);
                      if (uVar30 == DAT_14ca95bd0) {
                        uVar30 = 0xffffffff;
                      }
                      uVar52 = puVar45[5];
                      if (puVar45[5] == DAT_14ca95bd0) {
                        uVar52 = 0xffffffff;
                      }
                      if ((uVar30 == 0xffffffff) || (uVar52 != uVar30)) goto LAB_143207439;
                    }
                  }
                  else {
                    uVar18 = puVar45[2];
LAB_143207439:
                    uVar41 = ((ulonglong)puVar40 & 0xffffffff) % ((ulonglong)local_1f8 & 0xffffffff)
                    ;
                    uVar29 = (((ulonglong)puVar40 & 0xffffffff) /
                             ((ulonglong)local_1f8 & 0xffffffff)) %
                             ((ulonglong)local_230 & 0xffffffff);
                    uVar22 = ((ulonglong)puVar40 & 0xffffffff) / (local_1b0 & 0xffffffff);
                    uVar30 = *(uint *)((longlong)puVar39 + 0x1c) | 2;
                    if (uVar35 != 0x40000) {
                      uVar30 = *(uint *)((longlong)puVar39 + 0x1c);
                    }
                    puVar32 = (ulonglong *)
                              ((ulonglong)uVar30 << 0x3d |
                              ((ulonglong)in_R10 & 0x1fffff) << 0x15 |
                              (ulonglong)(uVar35 & 0x1fffff) |
                              (ulonglong)*(ushort *)((longlong)plVar54 + 0x9c) << 0x2a);
                    uVar30 = *(uint *)((longlong)puVar39 + 4);
                    local_108 = (undefined8 *)*puVar39;
                    uStack_100 = (uint)puVar39[1];
                    uStack_fc = *(uint *)((longlong)puVar39 + 0xc);
                    local_f8 = (undefined4)puVar39[2];
                    uStack_f4 = *(undefined4 *)((longlong)puVar39 + 0x14);
                    uStack_f0 = (undefined4)puVar39[3];
                    uStack_ec = *(undefined4 *)((longlong)puVar39 + 0x1c);
                    bVar50 = (uVar18 != 0xffffffff) * '\x02' | puVar45[1] != 0xffffffff;
                    bVar51 = (uStack_100 != 0xffffffff) * '\x02' | uVar30 != 0xffffffff;
                    uVar26 = (ulonglong)CONCAT31((int3)((uVar35 & 0x1fffff) >> 8),bVar51);
                    uVar35 = puVar45[3];
                    uVar18 = puVar45[4];
                    uVar52 = (uint)uVar29;
                    if (bVar50 == 3) {
                      local_1f0 = (ulonglong *)CONCAT44(local_1f0._4_4_,(int)uVar41);
                      uVar35 = *(uint *)(*(longlong *)
                                          (*(longlong *)(param_1 + 0x168) +
                                          (longlong)(int)uVar35 * 8) + 0x4c);
                      local_218 = (ulonglong *)(ulonglong)uVar35;
                      uVar18 = *(uint *)(*(longlong *)
                                          (*(longlong *)(param_1 + 0x168) +
                                          (longlong)(int)uVar18 * 8) + 0x4c);
                      uVar35 = uVar18 * 0x17 + uVar35;
                      uVar35 = (uVar35 >> 2) + (uVar35 * 0x40 | (uint)bVar51) + 0x9e3779b9 ^ uVar35;
                      uVar30 = *(uint *)(param_1 + 0x3e0);
                      local_240 = (ulonglong *)(ulonglong)uVar30;
                      uVar19 = *(uint *)(param_1 + 0x40c);
                      if (uVar30 != uVar19) {
                        puVar31 = *(ulonglong **)(param_1 + 0x428);
                        if (*(ulonglong **)(param_1 + 0x428) == (ulonglong *)0x0) {
                          puVar31 = local_198;
                        }
                        if (puVar31 == (ulonglong *)0x0) {
                          puVar31 = local_190;
                        }
                        iVar17 = *(int *)((longlong)puVar31 +
                                         (ulonglong)(*(int *)(param_1 + 0x430) - 1U & uVar35) * 4);
                        if (iVar17 != -1) {
                          do {
                            lVar37 = *local_1c8 + (longlong)iVar17 * 0x20;
                            lVar49 = 0;
                            in_R10 = local_218;
                            bVar58 = true;
                            do {
                              bVar46 = bVar58;
                              if (*(int *)(lVar37 + lVar49 * 4) != (int)in_R10) goto LAB_143207c07;
                              lVar49 = 1;
                              in_R10 = (ulonglong *)(ulonglong)uVar18;
                              bVar58 = false;
                            } while (bVar46);
                            if (*(byte *)(lVar37 + 8) == bVar51) {
                              local_220 = puVar32;
                              local_1e4 = uVar52;
                              if (lVar37 != 0) goto LAB_143207f14;
                              break;
                            }
LAB_143207c07:
                            iVar17 = *(int *)(*local_1c8 + 0x18 + (longlong)iVar17 * 0x20);
                          } while (iVar17 != -1);
                        }
                      }
                      if (uVar19 == 0) {
                        *(uint *)(param_1 + 0x3e0) = uVar30 + 1;
                        local_220 = puVar32;
                        local_1e4 = uVar52;
                        if (*(uint *)(param_1 + 0x3e4) == uVar30) {
                          FUN_14178f2cc(local_1c8,local_240);
                        }
                        iVar17 = *(int *)(param_1 + 0x400);
                        if (iVar17 == 0) {
                          iVar38 = -1;
                        }
                        else {
                          iVar38 = iVar17 + 0x1e;
                          if (-1 < iVar17 + -1) {
                            iVar38 = iVar17 + -1;
                          }
                          iVar38 = iVar38 >> 5;
                        }
                        iVar47 = iVar17 + 0x1f;
                        if (-1 < iVar17) {
                          iVar47 = iVar17;
                        }
                        if (iVar47 >> 5 == iVar38) {
                          *(int *)(param_1 + 0x400) = iVar17 + 1;
                        }
                        else {
                          local_1d0 = uVar26;
                          FUN_14018be28(local_1c0);
                          uVar30 = *(int *)(param_1 + 0x400) + 1;
                          uVar52 = *(int *)(param_1 + 0x400) + 0x20;
                          if (-1 < (int)uVar30) {
                            uVar52 = uVar30;
                          }
                          *(uint *)(param_1 + 0x400) = uVar30;
                          iVar38 = uVar30 - (uVar52 & 0xffffffe0);
                          uVar26 = local_1d0;
                          if (iVar38 != 0) {
                            lVar37 = *(longlong *)(param_1 + 0x3f8);
                            if (*(longlong *)(param_1 + 0x3f8) == 0) {
                              lVar37 = local_1c0;
                            }
                            bVar50 = -(char)iVar38;
                            *(uint *)(lVar37 + (longlong)((int)uVar52 >> 5) * 4) =
                                 (uint)(*(int *)(lVar37 + (longlong)((int)uVar52 >> 5) * 4) <<
                                       (bVar50 & 0x1f)) >> (bVar50 & 0x1f);
                          }
                        }
                        lVar49 = (longlong)(int)local_240;
                        lVar37 = *(longlong *)(param_1 + 0x3f8);
                        if (*(longlong *)(param_1 + 0x3f8) == 0) {
                          lVar37 = local_1c0;
                        }
                        bVar50 = (byte)iVar17 & 0x1f;
                        puVar45 = (uint *)(lVar37 + (longlong)(iVar47 >> 5) * 4);
                        *puVar45 = *puVar45 & (-2 << bVar50 | 0xfffffffeU >> 0x20 - bVar50);
                        lVar37 = param_1;
                      }
                      else {
                        local_240 = (ulonglong *)(ulonglong)*(uint *)(param_1 + 0x408);
                        lVar49 = (longlong)(int)*(uint *)(param_1 + 0x408);
                        iVar17 = *(int *)(*(longlong *)(param_1 + 0x3d8) + 4 + lVar49 * 0x20);
                        *(int *)(param_1 + 0x408) = iVar17;
                        *(uint *)(param_1 + 0x40c) = uVar19 - 1;
                        lVar37 = local_228;
                        local_220 = puVar32;
                        local_1e4 = uVar52;
                        if (uVar19 - 1 != 0) {
                          *(undefined4 *)(*(longlong *)(param_1 + 0x3d8) + (longlong)iVar17 * 0x20)
                               = 0xffffffff;
                        }
                      }
                      plVar42 = local_1c8;
                      iVar17 = (int)local_240;
                      lVar56 = *(longlong *)(lVar37 + 0x3f8);
                      if (*(longlong *)(lVar37 + 0x3f8) == 0) {
                        lVar56 = local_1c0;
                      }
                      iVar38 = iVar17 + 0x1f;
                      if (-1 < iVar17) {
                        iVar38 = iVar17;
                      }
                      puVar45 = (uint *)(lVar56 + (longlong)(iVar38 >> 5) * 4);
                      *puVar45 = *puVar45 | 1 << ((byte)local_240 & 0x1f);
                      lVar56 = *(longlong *)(lVar37 + 0x3d8);
                      lVar49 = lVar49 * 0x20;
                      puVar27 = (undefined4 *)(lVar56 + lVar49);
                      *(longlong *)(lVar56 + lVar49) =
                           ((longlong)(int)uVar18 << 0x20) + (longlong)local_218;
                      *(char *)(lVar56 + 8 + lVar49) = (char)uVar26;
                      *(undefined8 *)(lVar56 + 0x10 + lVar49) = 0;
                      *(undefined4 *)(lVar56 + 0x18 + lVar49) = 0xffffffff;
                      uVar30 = *(int *)(lVar37 + 0x3e0) - *(int *)(lVar37 + 0x40c);
                      in_R10 = local_240;
                      if ((uVar30 != 0) && (uVar30 != 1)) {
                        puVar32 = *(ulonglong **)(lVar37 + 0x428);
                        if (*(ulonglong **)(lVar37 + 0x428) == (ulonglong *)0x0) {
                          puVar32 = local_198;
                        }
                        if (puVar32 == (ulonglong *)0x0) {
                          puVar32 = local_190;
                        }
                        iVar38 = *(int *)((longlong)puVar32 +
                                         (ulonglong)(*(int *)(lVar37 + 0x430) - 1U & uVar35) * 4);
                        if (iVar38 != -1) {
                          do {
                            puVar28 = (undefined4 *)(*local_1c8 + (longlong)iVar38 * 0x20);
                            in_R10 = (ulonglong *)CONCAT71((int7)((ulonglong)in_R10 >> 8),1);
                            uVar41 = (ulonglong)local_218 & 0xffffffff;
                            lVar49 = 0;
                            do {
                              if (puVar28[lVar49] != (int)uVar41) goto LAB_143207da0;
                              lVar49 = 1;
                              uVar41 = (ulonglong)uVar18;
                              cVar16 = (char)in_R10;
                              in_R10 = (ulonglong *)0x0;
                            } while (cVar16 != '\0');
                            if (*(char *)(puVar28 + 2) == (char)uVar26) {
                              uVar55 = *puVar27;
                              uVar36 = puVar27[1];
                              uVar7 = puVar27[2];
                              uVar8 = puVar27[3];
                              *(undefined8 *)(puVar28 + 4) = *(undefined8 *)(puVar27 + 4);
                              *puVar28 = uVar55;
                              puVar28[1] = uVar36;
                              puVar28[2] = uVar7;
                              puVar28[3] = uVar8;
                              FUN_14742e742(local_1c8,(ulonglong)local_240 & 0xffffffff);
                              goto LAB_143207efa;
                            }
LAB_143207da0:
                            iVar38 = *(int *)(*local_1c8 + 0x18 + (longlong)iVar38 * 0x20);
                          } while (iVar38 != -1);
                        }
                      }
                      if (uVar30 < 4) {
                        iVar38 = 1;
                      }
                      else {
                        uVar41 = (ulonglong)(uVar30 & 0xfffffffe) + 0xf;
                        lVar49 = 0x3f;
                        if (uVar41 != 0) {
                          for (; uVar41 >> lVar49 == 0; lVar49 = lVar49 + -1) {
                          }
                        }
                        iVar38 = 1 << ((byte)lVar49 & 0x1f);
                      }
                      if (((int)uVar30 < 1) || (iVar38 <= *(int *)(lVar37 + 0x430))) {
                        uVar35 = *(int *)(lVar37 + 0x430) - 1U & uVar35;
                        puVar27[7] = uVar35;
                        puVar32 = *(ulonglong **)(lVar37 + 0x428);
                        if (*(ulonglong **)(lVar37 + 0x428) == (ulonglong *)0x0) {
                          puVar32 = local_198;
                        }
                        if (puVar32 == (ulonglong *)0x0) {
                          puVar32 = local_190;
                        }
                        puVar27[6] = *(undefined4 *)
                                      ((longlong)puVar32 +
                                      ((longlong)*(int *)(lVar37 + 0x430) - 1U &
                                      (longlong)(int)uVar35) * 4);
                        puVar32 = *(ulonglong **)(lVar37 + 0x428);
                        if (*(ulonglong **)(lVar37 + 0x428) == (ulonglong *)0x0) {
                          puVar32 = local_198;
                        }
                        if (puVar32 == (ulonglong *)0x0) {
                          puVar32 = local_190;
                        }
                        *(int *)((longlong)puVar32 +
                                ((longlong)*(int *)(lVar37 + 0x430) - 1U & (longlong)(int)uVar35) *
                                4) = iVar17;
                        in_R10 = local_198;
                      }
                      else {
                        *(int *)(lVar37 + 0x430) = iVar38;
                        FUN_144adb3b2(local_1c8);
                        iVar17 = (int)local_240;
                      }
LAB_143207efa:
                      lVar37 = *plVar42 + (longlong)iVar17 * 0x20;
LAB_143207f14:
                      lVar49 = local_228;
                      puVar32 = local_248;
                      puVar44 = (ulonglong *)(lVar37 + 0x10);
                      uVar41 = *puVar44;
                      bVar50 = (byte)uVar26;
                      if (uVar41 == 0) {
                        local_128[0] = *(longlong *)
                                        (*(longlong *)(local_228 + 0x168) +
                                        (longlong)(int)local_218 * 8);
                        local_128[1] = *(undefined8 *)
                                        (*(longlong *)(local_228 + 0x168) +
                                        (longlong)(int)uVar18 * 8);
                        puVar43 = (undefined8 *)
                                  (*(longlong *)(local_228 + 0xe0) + 7U & 0xfffffffffffffff8);
                        puVar21 = puVar43 + 9;
                        if (*(undefined8 **)(local_228 + 0xe8) < puVar21) {
                          FUN_140023dd8(local_248,0x50);
                          puVar43 = (undefined8 *)(*puVar32 + 7 & 0xfffffffffffffff8);
                          puVar21 = puVar43 + 9;
                        }
                        *(undefined8 **)(lVar49 + 0xe0) = puVar21;
                        *puVar43 = 0;
                        puVar43[1] = 0;
                        *(undefined4 *)(puVar43 + 2) = 0xffffffff;
                        *(undefined1 *)((longlong)puVar43 + 0x14) = 1;
                        *(undefined4 *)(puVar43 + 3) = 0xffffffff;
                        *(undefined1 *)((longlong)puVar43 + 0x1c) = 1;
                        puVar43[4] = 0;
                        puVar43[5] = 0;
                        puVar43[6] = 0;
                        puVar43[7] = 0;
                        *(undefined4 *)(puVar43 + 8) = 1;
                        *(undefined1 *)((longlong)puVar43 + 0x44) = 3;
                        *(byte *)((longlong)puVar43 + 0x45) = bVar50;
                        *(undefined2 *)((longlong)puVar43 + 0x46) = 0;
                        *puVar44 = (ulonglong)puVar43;
                        iVar17 = *(int *)(lVar49 + 0x470);
                        *(uint *)(lVar49 + 0x470) = iVar17 + 1U;
                        if (*(uint *)(lVar49 + 0x474) < iVar17 + 1U) {
                          FUN_144adb638(local_210,iVar17);
                        }
                        *(ulonglong *)(*local_210 + (longlong)iVar17 * 8) = *puVar44;
                        lVar37 = 0;
                        do {
                          lVar49 = *(longlong *)((longlong)local_128 + lVar37);
                          iVar17 = *(int *)(lVar49 + 0x198);
                          *(uint *)(lVar49 + 0x198) = iVar17 + 1U;
                          if (*(uint *)(lVar49 + 0x19c) < iVar17 + 1U) {
                            FUN_144adb638((longlong *)(lVar49 + 400),iVar17);
                          }
                          uVar41 = *puVar44;
                          *(ulonglong *)(*(longlong *)(lVar49 + 400) + (longlong)iVar17 * 8) =
                               uVar41;
                          lVar37 = lVar37 + 8;
                        } while (lVar37 != 0x10);
                      }
                      puVar31 = local_238;
                      iVar17 = *(int *)(uVar41 + 0x28);
                      *(uint *)(uVar41 + 0x28) = iVar17 + 1U;
                      if (*(uint *)(uVar41 + 0x2c) < iVar17 + 1U) {
                        FUN_144adb766(uVar41 + 0x20,iVar17);
                      }
                      lVar37 = *(longlong *)(uVar41 + 0x20);
                      lVar49 = (longlong)iVar17 * 0x10;
                      *(ulonglong **)(lVar37 + lVar49) = local_220;
                      *(short *)(lVar37 + 8 + lVar49) = (short)local_1e4;
                      *(char *)(lVar37 + 10 + lVar49) = (char)local_1f0;
                      *(char *)(lVar37 + 0xb + lVar49) = (char)uVar22;
                      *(undefined1 *)(uVar41 + 0x46) = 1;
                      while (plVar54 = local_1d8, param_1 = local_228, bVar50 != 0) {
                        uVar22 = *puVar44;
                        lVar37 = *(longlong *)
                                  (*(longlong *)(local_228 + 0x168) +
                                  (longlong)
                                  *(int *)(*(longlong *)
                                            (*(longlong *)(local_228 + 0x168) +
                                            (longlong)
                                            *(int *)((longlong)&local_108 +
                                                    (ulonglong)
                                                    ((byte)(-(byte)uVar26 & (byte)uVar26) == 2) * 4
                                                    + 4) * 8) + 0x48) * 8);
                        bVar50 = *(byte *)(lVar37 + 0x130);
                        uVar35 = *(uint *)(*(longlong *)(lVar37 + 0x128) + 0x2c);
                        uVar41 = (ulonglong)
                                 (*(char *)(*(longlong *)(lVar37 + 0x128) + 0x2b) == '\x02');
                        uVar18 = *(uint *)(uVar22 + 0x10 + uVar41 * 8);
                        bVar51 = *(byte *)(uVar22 + 0x14 + uVar41 * 8);
                        if ((uVar18 != uVar35) || (bVar51 != bVar50)) {
                          bVar14 = bVar50;
                          if (bVar51 < bVar50) {
                            bVar14 = bVar51;
                          }
                          if ((uVar35 <= uVar18) && (bVar50 <= bVar51)) {
                            puVar32 = (ulonglong *)(lVar37 + 0xf8);
                            puVar31 = (ulonglong *)(longlong)*(int *)(lVar37 + 0x120);
                            uVar18 = *(int *)(lVar37 + 0x120) + 1;
                            *(uint *)(lVar37 + 0x120) = uVar18;
                            if (*(uint *)(lVar37 + 0x124) < uVar18) {
                              local_240 = puVar31;
                              local_218 = puVar32;
                              local_1d0 = uVar26;
                              FUN_144adb9c0(puVar32,puVar31);
                              puVar32 = local_218;
                              puVar31 = local_240;
                              uVar26 = local_1d0;
                            }
                            if (*(ulonglong **)(lVar37 + 0x118) != (ulonglong *)0x0) {
                              puVar32 = *(ulonglong **)(lVar37 + 0x118);
                            }
                            puVar32[(longlong)puVar31] = uVar22;
                            *(ulonglong *)(uVar22 + 0x10 + uVar41 * 8) =
                                 (ulonglong)CONCAT14(bVar14,uVar35);
                          }
                        }
                        iVar17 = (int)uVar26 + -1;
                        bVar50 = (byte)iVar17 & (byte)uVar26;
                        uVar26 = (ulonglong)CONCAT31((int3)((uint)iVar17 >> 8),bVar50);
                        puVar31 = local_238;
                      }
                    }
                    else {
                      local_218 = (ulonglong *)CONCAT71(local_218._1_7_,bVar50);
                      local_240 = (ulonglong *)CONCAT44(local_240._4_4_,(int)uVar22);
                      if (uVar18 + 1 < uVar35 + 1) {
                        uVar18 = uVar35;
                      }
                      uVar35 = uStack_100;
                      if (uVar30 < uStack_100) {
                        uVar35 = uVar30;
                      }
                      lVar37 = *(longlong *)(param_1 + 0x168);
                      in_R10 = (ulonglong *)(longlong)(int)uVar18;
                      lVar49 = *(longlong *)(lVar37 + (longlong)in_R10 * 8);
                      if (uVar18 < uVar35) {
                        lVar37 = *(longlong *)(lVar37 + (longlong)*(int *)(lVar49 + 0x4c) * 8);
                        if (bVar51 == 2) {
                          uVar22 = *(ulonglong *)(lVar37 + 0x180);
                          if (uVar22 == 0) {
                            puVar43 = (undefined8 *)
                                      (*(longlong *)(param_1 + 0xe0) + 7U & 0xfffffffffffffff8);
                            puVar21 = puVar43 + 9;
                            local_1e4 = uVar52;
                            if (*(undefined8 **)(param_1 + 0xe8) < puVar21) {
                              local_208 = in_R10;
                              FUN_140023dd8(local_248,0x50);
                              puVar43 = (undefined8 *)(*puVar44 + 7 & 0xfffffffffffffff8);
                              puVar21 = puVar43 + 9;
                              in_R10 = local_208;
                              bVar50 = (byte)local_218;
                            }
                            *(undefined8 **)(param_1 + 0xe0) = puVar21;
                            uVar53 = *(undefined1 *)(lVar37 + 0x2b);
                            *puVar43 = 0;
                            puVar43[1] = 0;
                            *(undefined4 *)(puVar43 + 2) = 0xffffffff;
                            *(undefined1 *)((longlong)puVar43 + 0x14) = 1;
                            *(undefined4 *)(puVar43 + 3) = 0xffffffff;
                            *(undefined1 *)((longlong)puVar43 + 0x1c) = 1;
                            puVar43[4] = 0;
                            puVar43[5] = 0;
                            puVar43[6] = 0;
                            puVar43[7] = 0;
                            *(undefined4 *)(puVar43 + 8) = 1;
                            *(undefined1 *)((longlong)puVar43 + 0x44) = uVar53;
                            *(undefined2 *)((longlong)puVar43 + 0x45) = 2;
                            *(undefined1 *)((longlong)puVar43 + 0x47) = 0;
                            *(undefined8 **)(lVar37 + 0x180) = puVar43;
                            iVar17 = *(int *)(param_1 + 0x470);
                            *(uint *)(param_1 + 0x470) = iVar17 + 1U;
                            if (*(uint *)(param_1 + 0x474) < iVar17 + 1U) {
                              local_208 = in_R10;
                              FUN_144adb638(local_210,iVar17);
                              in_R10 = local_208;
                              bVar50 = (byte)local_218;
                            }
                            lVar49 = *local_210;
                            uVar22 = *(ulonglong *)(lVar37 + 0x180);
LAB_143207b04:
                            *(ulonglong *)(lVar49 + (longlong)iVar17 * 8) = uVar22;
                            uVar29 = (ulonglong)local_1e4;
                          }
                        }
                        else if (bVar51 == 3) {
                          uVar22 = *(ulonglong *)(lVar37 + 0x188);
                          if (uVar22 == 0) {
                            puVar43 = (undefined8 *)
                                      (*(longlong *)(param_1 + 0xe0) + 7U & 0xfffffffffffffff8);
                            puVar21 = puVar43 + 9;
                            local_1e4 = uVar52;
                            if (*(undefined8 **)(param_1 + 0xe8) < puVar21) {
                              local_208 = in_R10;
                              FUN_140023dd8(local_248,0x50);
                              puVar43 = (undefined8 *)(*puVar44 + 7 & 0xfffffffffffffff8);
                              puVar21 = puVar43 + 9;
                              in_R10 = local_208;
                              bVar50 = (byte)local_218;
                            }
                            *(undefined8 **)(param_1 + 0xe0) = puVar21;
                            uVar53 = *(undefined1 *)(lVar37 + 0x2b);
                            *puVar43 = 0;
                            puVar43[1] = 0;
                            *(undefined4 *)(puVar43 + 2) = 0xffffffff;
                            *(undefined1 *)((longlong)puVar43 + 0x14) = 1;
                            *(undefined4 *)(puVar43 + 3) = 0xffffffff;
                            *(undefined1 *)((longlong)puVar43 + 0x1c) = 1;
                            puVar43[4] = 0;
                            puVar43[5] = 0;
                            puVar43[6] = 0;
                            puVar43[7] = 0;
                            *(undefined4 *)(puVar43 + 8) = 1;
                            *(undefined1 *)((longlong)puVar43 + 0x44) = uVar53;
                            *(undefined2 *)((longlong)puVar43 + 0x45) = 3;
                            *(undefined1 *)((longlong)puVar43 + 0x47) = 0;
                            *(undefined8 **)(lVar37 + 0x188) = puVar43;
                            iVar17 = *(int *)(param_1 + 0x470);
                            *(uint *)(param_1 + 0x470) = iVar17 + 1U;
                            if (*(uint *)(param_1 + 0x474) < iVar17 + 1U) {
                              local_208 = in_R10;
                              FUN_144adb638(local_210,iVar17);
                              in_R10 = local_208;
                              bVar50 = (byte)local_218;
                            }
                            lVar49 = *local_210;
                            uVar22 = *(ulonglong *)(lVar37 + 0x188);
                            goto LAB_143207b04;
                          }
                        }
                        else {
                          uVar22 = lVar37 + 0x138;
                          if (*(char *)(lVar37 + 0x17e) == '\0') {
                            local_1f0 = (ulonglong *)CONCAT44(local_1f0._4_4_,(int)uVar41);
                            iVar17 = *(int *)(lVar37 + 0x88) + *(int *)(lVar37 + 0x78);
                            if (iVar17 < 0) goto LAB_14320bbf3;
                            local_220 = puVar32;
                            if (*(int *)(lVar37 + 0x164) < iVar17) {
                              local_208 = in_R10;
                              FUN_144adac32(lVar37 + 0x158,iVar17);
                              in_R10 = local_208;
                              bVar50 = (byte)local_218;
                            }
                            puVar32 = local_220;
                            if (*(int *)(lVar37 + 0x174) < iVar17) {
                              FUN_144adad0c(lVar37 + 0x168,iVar17);
                              bVar50 = (byte)local_218;
                            }
                            iVar17 = *(int *)(param_1 + 0x470);
                            *(uint *)(param_1 + 0x470) = iVar17 + 1U;
                            if (*(uint *)(param_1 + 0x474) < iVar17 + 1U) {
                              FUN_144adb638(local_210,iVar17);
                              puVar32 = local_220;
                              bVar50 = (byte)local_218;
                            }
                            *(ulonglong *)(*local_210 + (longlong)iVar17 * 8) = uVar22;
                            uVar41 = (ulonglong)local_1f0 & 0xffffffff;
                          }
                        }
                      }
                      else {
                        uVar22 = FUN_14178e9d4(*(undefined8 *)
                                                (lVar37 + (longlong)*(int *)(lVar49 + 0x48) * 8),
                                               local_248,local_210);
                        bVar50 = (byte)local_218;
                      }
                      iVar17 = *(int *)(uVar22 + 0x28);
                      *(uint *)(uVar22 + 0x28) = iVar17 + 1U;
                      if (*(uint *)(uVar22 + 0x2c) < iVar17 + 1U) {
                        local_220 = puVar32;
                        local_208 = in_R10;
                        FUN_144adb766(uVar22 + 0x20,iVar17);
                        in_R10 = local_208;
                        puVar32 = local_220;
                        bVar50 = (byte)local_218;
                      }
                      lVar37 = *(longlong *)(uVar22 + 0x20);
                      lVar49 = (longlong)iVar17 * 0x10;
                      *(ulonglong **)(lVar37 + lVar49) = puVar32;
                      *(short *)(lVar37 + 8 + lVar49) = (short)uVar29;
                      *(char *)(lVar37 + 10 + lVar49) = (char)uVar41;
                      *(char *)(lVar37 + 0xb + lVar49) = (char)local_240;
                      *(undefined1 *)(uVar22 + 0x46) = 1;
                      lVar37 = uVar22 + 0x10;
                      bVar51 = 3;
                      local_258 = puVar39;
                      do {
                        puVar32 = local_248;
                        bVar14 = -bVar51 & bVar51;
                        if ((bVar50 == bVar14) && ((byte)uVar26 == 3)) {
                          uVar41 = *(ulonglong *)
                                    (*(longlong *)(param_1 + 0x168) +
                                    (longlong)
                                    *(int *)(*(longlong *)
                                              (*(longlong *)(param_1 + 0x168) + (longlong)in_R10 * 8
                                              ) + 0x4c) * 8);
                          puVar31 = *(ulonglong **)(uVar41 + 0x1a0);
                          if (puVar31 == (ulonglong *)0x0) {
                            puVar31 = (ulonglong *)
                                      (*(longlong *)(param_1 + 0xe0) + 7U & 0xfffffffffffffff8);
                            puVar39 = puVar31 + 8;
                            if (*(ulonglong **)(param_1 + 0xe8) < puVar39) {
                              FUN_140023dd8(local_248,0x48);
                              puVar31 = (ulonglong *)(*puVar32 + 7 & 0xfffffffffffffff8);
                              puVar39 = puVar31 + 8;
                              bVar50 = (byte)local_218;
                            }
                            *local_248 = (ulonglong)puVar39;
                            puVar31[4] = 0;
                            puVar31[5] = 0x400000000;
                            puVar31[6] = uVar41;
                            *(undefined1 *)(puVar31 + 7) = 1;
                            *(ulonglong **)(uVar41 + 0x1a0) = puVar31;
                          }
                          bVar14 = (byte)puVar31[7];
                          uVar35 = *(uint *)(puVar31[6] + 0x2c);
                          uVar41 = (ulonglong)(*(char *)(puVar31[6] + 0x2b) == '\x02');
                          uVar18 = *(uint *)(lVar37 + uVar41 * 8);
                          bVar2 = *(byte *)(uVar22 + 0x14 + uVar41 * 8);
                          if ((uVar18 != uVar35) || (bVar2 != bVar14)) {
                            bVar1 = bVar14;
                            if (bVar2 < bVar14) {
                              bVar1 = bVar2;
                            }
                            if ((uVar35 <= uVar18) && (bVar14 <= bVar2)) {
                              local_240 = (ulonglong *)(ulonglong)(uint)puVar31[5];
                              uVar18 = (uint)puVar31[5] + 1;
                              *(uint *)(puVar31 + 5) = uVar18;
                              if (*(uint *)((longlong)puVar31 + 0x2c) < uVar18) {
                                local_208 = in_R10;
                                local_1d0 = uVar26;
                                FUN_144adb9c0(puVar31,local_240);
                                in_R10 = local_208;
                                uVar26 = local_1d0;
                                bVar50 = (byte)local_218;
                              }
                              puVar32 = puVar31 + 4;
LAB_14320767b:
                              if ((ulonglong *)*puVar32 != (ulonglong *)0x0) {
                                puVar31 = (ulonglong *)*puVar32;
                              }
                              puVar31[(int)local_240] = uVar22;
                              *(ulonglong *)(lVar37 + uVar41 * 8) =
                                   (ulonglong)CONCAT14(bVar1,uVar35);
                            }
                          }
                        }
                        else if ((bVar14 & (byte)uVar26) != 0) {
                          lVar49 = *(longlong *)
                                    (*(longlong *)(local_228 + 0x168) +
                                    (longlong)
                                    *(int *)(*(longlong *)
                                              (*(longlong *)(local_228 + 0x168) +
                                              (longlong)
                                              *(int *)((longlong)&local_108 +
                                                      (ulonglong)(bVar14 == 2) * 4 + 4) * 8) + 0x48)
                                    * 8);
                          bVar14 = *(byte *)(lVar49 + 0x130);
                          uVar35 = *(uint *)(*(longlong *)(lVar49 + 0x128) + 0x2c);
                          uVar41 = (ulonglong)
                                   (*(char *)(*(longlong *)(lVar49 + 0x128) + 0x2b) == '\x02');
                          uVar18 = *(uint *)(lVar37 + uVar41 * 8);
                          bVar2 = *(byte *)(uVar22 + 0x14 + uVar41 * 8);
                          if ((uVar18 != uVar35) || (bVar2 != bVar14)) {
                            bVar1 = bVar14;
                            if (bVar2 < bVar14) {
                              bVar1 = bVar2;
                            }
                            if ((uVar35 <= uVar18) && (bVar14 <= bVar2)) {
                              puVar31 = (ulonglong *)(lVar49 + 0xf8);
                              local_240 = (ulonglong *)(ulonglong)*(uint *)(lVar49 + 0x120);
                              uVar18 = *(uint *)(lVar49 + 0x120) + 1;
                              *(uint *)(lVar49 + 0x120) = uVar18;
                              if (*(uint *)(lVar49 + 0x124) < uVar18) {
                                local_220 = puVar31;
                                local_208 = in_R10;
                                local_1d0 = uVar26;
                                FUN_144adb9c0(puVar31,local_240);
                                puVar31 = local_220;
                                in_R10 = local_208;
                                uVar26 = local_1d0;
                                bVar50 = (byte)local_218;
                              }
                              puVar32 = (ulonglong *)(lVar49 + 0x118);
                              goto LAB_14320767b;
                            }
                          }
                        }
                        bVar51 = bVar51 - 1 & bVar51;
                        puVar39 = local_258;
                        plVar54 = local_1d8;
                        puVar31 = local_238;
                        param_1 = local_228;
                      } while (bVar51 != 0);
                    }
                  }
LAB_143207413:
                  local_1e0[(longlong)puVar40] = (ulonglong)puVar39;
                  puVar32 = local_250;
                }
                puVar40 = (ulonglong *)((longlong)puVar40 + 1);
              } while (puVar40 != puVar32);
            }
            plVar42 = local_1a0;
            *(undefined4 *)(param_1 + 0x480) = 0;
            if (*(int *)(param_1 + 0x484) < 0) {
              puVar32 = (ulonglong *)0x0;
              FUN_14178f1f0(puVar31,0);
            }
          }
        }
      }
      if (plVar54[0x23] != 0) {
        uVar35 = *(uint *)(param_1 + 0x450);
        *(uint *)(param_1 + 0x450) = uVar35 + 1;
        if (*(uint *)(param_1 + 0x454) < uVar35 + 1) {
          puVar32 = (ulonglong *)(ulonglong)uVar35;
          FUN_14178f068(local_1b8,puVar32);
        }
        *(longlong *)(*local_1b8 + (longlong)(int)uVar35 * 8) = plVar54[0x23];
        plVar54[0x23] = 0;
      }
      plVar42 = plVar42 + 1;
    } while (plVar42 != local_200);
  }
  if ((longlong)*(int *)(param_1 + 400) != 0) {
    puVar31 = *(ulonglong **)(param_1 + 0x188);
    local_1e0 = puVar31 + *(int *)(param_1 + 400);
    local_1d8 = (longlong *)(param_1 + 0x458);
    local_200 = (longlong *)(param_1 + 0x468);
    local_210 = (longlong *)(param_1 + 0x4e0);
    local_218 = (ulonglong *)(param_1 + 0x3d8);
    local_1b8 = (ulonglong *)(param_1 + 0x410);
    local_240 = (ulonglong *)(param_1 + 0x418);
    local_220 = (ulonglong *)(param_1 + 1000);
    local_1a0 = (longlong *)(param_1 + 0x438);
    do {
      puVar40 = local_248;
      uVar22 = *puVar31;
      if (*(int *)(uVar22 + 0x30) != -1) {
        if (((longlong)*(int *)(uVar22 + 0x80) == -1) ||
           (puVar45 = *(uint **)(*(longlong *)
                                  (*(longlong *)(param_1 + 0x188) +
                                  (longlong)*(int *)(uVar22 + 0x80) * 8) + 0x138),
           puVar45 == (uint *)0x0)) {
          puVar45 = (uint *)(*(longlong *)(param_1 + 0xe0) + 3U & 0xfffffffffffffffc);
          puVar25 = puVar45 + 8;
          if (*(uint **)(param_1 + 0xe8) < puVar25) {
            FUN_140023dd8(local_248,0x24);
            puVar45 = (uint *)(*puVar40 + 3 & 0xfffffffffffffffc);
            puVar25 = puVar45 + 8;
          }
          puVar40 = local_248;
          *local_248 = (ulonglong)puVar25;
          puVar32 = (ulonglong *)(puVar45 + 1);
          puVar45[3] = 0;
          puVar45[4] = 0;
          puVar45[5] = 0;
          puVar45[6] = 0;
          puVar45[0] = 0;
          puVar45[1] = 0;
          puVar45[2] = 0;
          puVar45[3] = 0;
          puVar45[1] = 0xffffffff;
          puVar45[2] = 0xffffffff;
          puVar45[3] = 0xffffffff;
          puVar45[4] = 0xffffffff;
          *(undefined8 *)((longlong)puVar45 + 0x12) = 0xffffffffffffffff;
          puVar45[7] = 0;
          iVar17 = *(int *)(uVar22 + 0x28);
          if ((longlong)iVar17 == -1) {
            if ((*(byte *)(uVar22 + 0x24) & 0x40) == 0) {
              uVar35 = *(uint *)(uVar22 + 0x30);
              uVar41 = (ulonglong)
                       (*(char *)(*(longlong *)
                                   (*(longlong *)(param_1 + 0x168) + (longlong)(int)uVar35 * 8) +
                                 0x2b) == '\x02');
              *(undefined4 *)puVar32 = 0xffffffff;
              puVar45[2] = 0xffffffff;
              puVar45[3] = 0xffffffff;
              puVar45[4] = 0xffffffff;
              puVar45[uVar41 + 1] = uVar35;
              puVar45[uVar41 + 3] = uVar35;
              uVar35 = 0;
            }
            else {
              puVar45[2] = 0xffffffff;
              puVar45[3] = 0xffffffff;
              puVar45[4] = 0xffffffff;
              uVar35 = 0;
              puVar45[1] = 0;
              puVar45[3] = 0;
            }
          }
          else {
            puVar39 = *(ulonglong **)(uVar22 + 0x10);
            puVar44 = *(ulonglong **)(uVar22 + 0x48);
            uVar35 = *(uint *)(uVar22 + 0x50);
            in_R10 = (ulonglong *)(ulonglong)uVar35;
            uVar55 = *(undefined4 *)(uVar22 + 0x54);
            lVar37 = *(longlong *)(param_1 + 0x168);
            lVar49 = *(longlong *)(lVar37 + (longlong)iVar17 * 8);
            if (iVar17 == *(int *)(uVar22 + 0x30)) {
              local_250 = puVar39;
              lVar37 = FUN_14178e9d4(lVar49,local_248,local_200);
              puVar39 = local_250;
            }
            else {
              lVar56 = *(longlong *)(lVar37 + (longlong)*(int *)(lVar49 + 0x4c) * 8);
              lVar49 = *(longlong *)(lVar37 + (longlong)*(int *)(uVar22 + 0x30) * 8);
              if (*(char *)(lVar49 + 0x2b) == '\x02') {
                lVar37 = *(longlong *)(lVar56 + 0x180);
                if (lVar37 == 0) {
                  local_258 = (ulonglong *)CONCAT44(local_258._4_4_,uVar55);
                  puVar43 = (undefined8 *)(*(longlong *)(param_1 + 0xe0) + 7U & 0xfffffffffffffff8);
                  puVar21 = puVar43 + 9;
                  local_250 = puVar39;
                  if (*(undefined8 **)(param_1 + 0xe8) < puVar21) {
                    local_230 = (ulonglong *)CONCAT44(local_230._4_4_,uVar35);
                    local_238 = puVar31;
                    FUN_140023dd8(local_248,0x50);
                    in_R10 = (ulonglong *)((ulonglong)local_230 & 0xffffffff);
                    puVar43 = (undefined8 *)(*puVar40 + 7 & 0xfffffffffffffff8);
                    puVar21 = puVar43 + 9;
                    puVar31 = local_238;
                  }
                  *(undefined8 **)(param_1 + 0xe0) = puVar21;
                  uVar53 = *(undefined1 *)(lVar56 + 0x2b);
                  *puVar43 = 0;
                  puVar43[1] = 0;
                  *(undefined4 *)(puVar43 + 2) = 0xffffffff;
                  *(undefined1 *)((longlong)puVar43 + 0x14) = 1;
                  *(undefined4 *)(puVar43 + 3) = 0xffffffff;
                  *(undefined1 *)((longlong)puVar43 + 0x1c) = 1;
                  puVar43[4] = 0;
                  puVar43[5] = 0;
                  puVar43[6] = 0;
                  puVar43[7] = 0;
                  *(undefined4 *)(puVar43 + 8) = 1;
                  *(undefined1 *)((longlong)puVar43 + 0x44) = uVar53;
                  *(undefined2 *)((longlong)puVar43 + 0x45) = 2;
                  *(undefined1 *)((longlong)puVar43 + 0x47) = 0;
                  *(undefined8 **)(lVar56 + 0x180) = puVar43;
                  iVar17 = *(int *)(param_1 + 0x470);
                  *(uint *)(param_1 + 0x470) = iVar17 + 1U;
                  if (*(uint *)(param_1 + 0x474) < iVar17 + 1U) {
                    local_230 = (ulonglong *)CONCAT44(local_230._4_4_,(int)in_R10);
                    FUN_144adb638(local_200,iVar17);
                    in_R10 = (ulonglong *)((ulonglong)local_230 & 0xffffffff);
                  }
                  lVar34 = *local_200;
                  lVar37 = *(longlong *)(lVar56 + 0x180);
LAB_14320a078:
                  *(longlong *)(lVar34 + (longlong)iVar17 * 8) = lVar37;
                  puVar39 = local_250;
                  uVar55 = local_258._0_4_;
                }
              }
              else if (*(char *)(lVar49 + 0x2b) == '\x03') {
                lVar37 = *(longlong *)(lVar56 + 0x188);
                if (lVar37 == 0) {
                  local_258 = (ulonglong *)CONCAT44(local_258._4_4_,uVar55);
                  puVar43 = (undefined8 *)(*(longlong *)(param_1 + 0xe0) + 7U & 0xfffffffffffffff8);
                  puVar21 = puVar43 + 9;
                  local_250 = puVar39;
                  if (*(undefined8 **)(param_1 + 0xe8) < puVar21) {
                    local_230 = (ulonglong *)CONCAT44(local_230._4_4_,uVar35);
                    local_238 = puVar31;
                    FUN_140023dd8(local_248,0x50);
                    in_R10 = (ulonglong *)((ulonglong)local_230 & 0xffffffff);
                    puVar43 = (undefined8 *)(*puVar40 + 7 & 0xfffffffffffffff8);
                    puVar21 = puVar43 + 9;
                    puVar31 = local_238;
                  }
                  *(undefined8 **)(param_1 + 0xe0) = puVar21;
                  uVar53 = *(undefined1 *)(lVar56 + 0x2b);
                  *puVar43 = 0;
                  puVar43[1] = 0;
                  *(undefined4 *)(puVar43 + 2) = 0xffffffff;
                  *(undefined1 *)((longlong)puVar43 + 0x14) = 1;
                  *(undefined4 *)(puVar43 + 3) = 0xffffffff;
                  *(undefined1 *)((longlong)puVar43 + 0x1c) = 1;
                  puVar43[4] = 0;
                  puVar43[5] = 0;
                  puVar43[6] = 0;
                  puVar43[7] = 0;
                  *(undefined4 *)(puVar43 + 8) = 1;
                  *(undefined1 *)((longlong)puVar43 + 0x44) = uVar53;
                  *(undefined2 *)((longlong)puVar43 + 0x45) = 3;
                  *(undefined1 *)((longlong)puVar43 + 0x47) = 0;
                  *(undefined8 **)(lVar56 + 0x188) = puVar43;
                  iVar17 = *(int *)(param_1 + 0x470);
                  *(uint *)(param_1 + 0x470) = iVar17 + 1U;
                  if (*(uint *)(param_1 + 0x474) < iVar17 + 1U) {
                    local_230 = (ulonglong *)CONCAT44(local_230._4_4_,(int)in_R10);
                    FUN_144adb638(local_200,iVar17);
                    in_R10 = (ulonglong *)((ulonglong)local_230 & 0xffffffff);
                  }
                  lVar34 = *local_200;
                  lVar37 = *(longlong *)(lVar56 + 0x188);
                  goto LAB_14320a078;
                }
              }
              else {
                lVar37 = lVar56 + 0x138;
                if (*(char *)(lVar56 + 0x17e) == '\0') {
                  iVar17 = *(int *)(lVar56 + 0x88) + *(int *)(lVar56 + 0x78);
                  local_1f8 = puVar44;
                  if (iVar17 < 0) {
LAB_14320bbf3:
                    /* WARNING: Subroutine does not return */
                    FUN_1456afac4(iVar17);
                  }
                  local_250 = puVar39;
                  local_238 = puVar31;
                  if (*(int *)(lVar56 + 0x164) < iVar17) {
                    local_258 = (ulonglong *)CONCAT44(local_258._4_4_,uVar55);
                    local_230 = puVar32;
                    FUN_144adac32(lVar56 + 0x158,iVar17);
                    puVar32 = local_230;
                    uVar55 = local_258._0_4_;
                  }
                  if (*(int *)(lVar56 + 0x174) < iVar17) {
                    FUN_144adad0c(lVar56 + 0x168,iVar17);
                  }
                  iVar17 = *(int *)(param_1 + 0x470);
                  *(uint *)(param_1 + 0x470) = iVar17 + 1U;
                  if (*(uint *)(param_1 + 0x474) < iVar17 + 1U) {
                    FUN_144adb638(local_200,iVar17);
                  }
                  *(longlong *)(*local_200 + (longlong)iVar17 * 8) = lVar37;
                  puVar39 = local_250;
                  puVar31 = local_238;
                  puVar44 = local_1f8;
                }
              }
            }
            iVar17 = *(int *)(lVar37 + 0x38);
            *(uint *)(lVar37 + 0x38) = iVar17 + 1U;
            if (*(uint *)(lVar37 + 0x3c) < iVar17 + 1U) {
              local_230 = (ulonglong *)CONCAT44(local_230._4_4_,(int)in_R10);
              local_250 = puVar39;
              local_238 = puVar31;
              FUN_144adb892(lVar37 + 0x30,iVar17);
              in_R10 = (ulonglong *)((ulonglong)local_230 & 0xffffffff);
              puVar39 = local_250;
              puVar31 = local_238;
            }
            lVar56 = *(longlong *)(lVar37 + 0x30);
            lVar34 = (longlong)iVar17 * 0x20;
            *(ulonglong **)(lVar56 + lVar34) = puVar39;
            *(ulonglong **)(lVar56 + 8 + lVar34) = puVar44;
            *(int *)(lVar56 + 0x10 + lVar34) = (int)in_R10;
            *(undefined4 *)(lVar56 + 0x14 + lVar34) = uVar55;
            *(undefined2 *)(lVar56 + 0x18 + lVar34) = 1;
            *(undefined1 *)(lVar37 + 0x46) = 1;
            bVar50 = *(byte *)(lVar49 + 0x130);
            uVar35 = *(uint *)(*(longlong *)(lVar49 + 0x128) + 0x2c);
            uVar41 = (ulonglong)(*(char *)(*(longlong *)(lVar49 + 0x128) + 0x2b) == '\x02');
            uVar18 = *(uint *)(lVar37 + 0x10 + uVar41 * 8);
            bVar51 = *(byte *)(lVar37 + 0x14 + uVar41 * 8);
            if ((uVar18 != uVar35) || (bVar51 != bVar50)) {
              bVar14 = bVar50;
              if (bVar51 < bVar50) {
                bVar14 = bVar51;
              }
              if ((uVar35 <= uVar18) && (bVar50 <= bVar51)) {
                puVar40 = (ulonglong *)(longlong)*(int *)(lVar49 + 0x120);
                uVar18 = *(int *)(lVar49 + 0x120) + 1;
                *(uint *)(lVar49 + 0x120) = uVar18;
                if (*(uint *)(lVar49 + 0x124) < uVar18) {
                  local_250 = puVar40;
                  local_238 = puVar31;
                  local_230 = puVar32;
                  FUN_144adb9c0(lVar49 + 0xf8,puVar40);
                  puVar40 = local_250;
                  puVar32 = local_230;
                  puVar31 = local_238;
                }
                lVar56 = lVar49 + 0xf8;
                if (*(longlong *)(lVar49 + 0x118) != 0) {
                  lVar56 = *(longlong *)(lVar49 + 0x118);
                }
                *(longlong *)(lVar56 + (longlong)puVar40 * 8) = lVar37;
                *(ulonglong *)(lVar37 + 0x10 + uVar41 * 8) = (ulonglong)CONCAT14(bVar14,uVar35);
              }
            }
            uVar35 = *(uint *)(uVar22 + 0x28);
            uVar41 = (ulonglong)
                     (*(char *)(*(longlong *)
                                 (*(longlong *)(local_228 + 0x168) + (longlong)(int)uVar35 * 8) +
                               0x2b) == '\x02');
            *(undefined4 *)puVar32 = 0xffffffff;
            *(undefined4 *)((longlong)puVar32 + 4) = 0xffffffff;
            *(undefined4 *)(puVar32 + 1) = 0xffffffff;
            *(undefined4 *)((longlong)puVar32 + 0xc) = 0xffffffff;
            puVar45[uVar41 + 1] = uVar35;
            puVar45[uVar41 + 3] = uVar35;
            *puVar45 = 0x40000;
            uVar35 = 0x40000;
            param_1 = local_228;
          }
        }
        else {
          uVar35 = *puVar45;
        }
        puVar39 = local_248;
        puVar40 = *(ulonglong **)(uVar22 + 0x140);
        puVar32 = (ulonglong *)(ulonglong)(uint)*puVar40;
        if (((uVar35 == (uint)*puVar40) &&
            (bVar50 = ((int)puVar40[1] != -1) * '\x02' | *(int *)((longlong)puVar40 + 4) != -1,
            in_R10 = (ulonglong *)CONCAT71((int7)((ulonglong)in_R10 >> 8),bVar50),
            (byte)((puVar45[2] != 0xffffffff) * '\x02' | puVar45[1] != 0xffffffff) == bVar50)) &&
           (puVar45[7] == *(uint *)((longlong)puVar40 + 0x1c))) {
          if ((uVar35 & 0xc00) != 0) {
            in_R10 = (ulonglong *)(ulonglong)DAT_14ca95bd0;
            uVar18 = *(uint *)((longlong)puVar40 + 0x14);
            if (*(uint *)((longlong)puVar40 + 0x14) == DAT_14ca95bd0) {
              uVar18 = 0xffffffff;
            }
            uVar30 = puVar45[5];
            if (puVar45[5] == DAT_14ca95bd0) {
              uVar30 = 0xffffffff;
            }
            if ((uVar18 == 0xffffffff) || (uVar30 != uVar18)) goto LAB_143209498;
          }
        }
        else {
LAB_143209498:
          if ((ulonglong)(ushort)puVar40[3] == 0xffff) {
            puVar44 = (ulonglong *)0x0;
          }
          else {
            puVar44 = *(ulonglong **)(*local_210 + (ulonglong)(ushort)puVar40[3] * 8);
          }
          uVar41 = (ulonglong)*(uint *)((longlong)puVar40 + 0x1c) << 0x3d |
                   ((ulonglong)puVar32 & 0x1fffff) << 0x15 | (ulonglong)(uVar35 & 0x1fffff) |
                   (ulonglong)*(ushort *)(uVar22 + 0x7c) << 0x2a | 0x400000000000000;
          uVar30 = *(uint *)((longlong)puVar40 + 4);
          local_108 = (undefined8 *)*puVar40;
          uStack_100 = (uint)puVar40[1];
          uStack_fc = *(uint *)((longlong)puVar40 + 0xc);
          local_f8 = (undefined4)puVar40[2];
          uStack_f4 = *(undefined4 *)((longlong)puVar40 + 0x14);
          uStack_f0 = (undefined4)puVar40[3];
          uStack_ec = *(undefined4 *)((longlong)puVar40 + 0x1c);
          uVar35 = puVar45[3];
          uVar18 = puVar45[4];
          bVar50 = (puVar45[2] != 0xffffffff) * '\x02' | puVar45[1] != 0xffffffff;
          bVar51 = (uStack_100 != 0xffffffff) * '\x02' | uVar30 != 0xffffffff;
          local_258 = (ulonglong *)CONCAT71((int7)((ulonglong)in_R10 >> 8),bVar51);
          local_250 = (ulonglong *)CONCAT71(local_250._1_7_,bVar50);
          if (bVar50 == 3) {
            uVar35 = *(uint *)(*(longlong *)
                                (*(longlong *)(param_1 + 0x168) + (longlong)(int)uVar35 * 8) + 0x4c)
            ;
            puVar40 = (ulonglong *)(ulonglong)uVar35;
            uVar18 = *(uint *)(*(longlong *)
                                (*(longlong *)(param_1 + 0x168) + (longlong)(int)uVar18 * 8) + 0x4c)
            ;
            uVar19 = uVar18 * 0x17 + uVar35;
            uVar19 = (uVar19 >> 2) + (uVar19 * 0x40 | (uint)bVar51) + 0x9e3779b9 ^ uVar19;
            uVar30 = *(uint *)(param_1 + 0x3e0);
            uVar52 = *(uint *)(param_1 + 0x40c);
            if (uVar30 != uVar52) {
              puVar32 = *(ulonglong **)(param_1 + 0x428);
              if (*(ulonglong **)(param_1 + 0x428) == (ulonglong *)0x0) {
                puVar32 = local_240;
              }
              if (puVar32 == (ulonglong *)0x0) {
                puVar32 = local_1b8;
              }
              iVar17 = *(int *)((longlong)puVar32 +
                               (ulonglong)(*(int *)(param_1 + 0x430) - 1U & uVar19) * 4);
              if (iVar17 != -1) {
                do {
                  puVar32 = (ulonglong *)((longlong)iVar17 * 0x20);
                  lVar37 = *local_218 + (longlong)puVar32;
                  in_R10 = (ulonglong *)(ulonglong)uVar35;
                  lVar49 = 0;
                  bVar58 = true;
                  do {
                    bVar46 = bVar58;
                    if (*(int *)(lVar37 + lVar49 * 4) != (int)in_R10) goto LAB_14320a27b;
                    lVar49 = 1;
                    in_R10 = (ulonglong *)(ulonglong)uVar18;
                    bVar58 = false;
                  } while (bVar46);
                  if (*(byte *)(lVar37 + 8) == bVar51) {
                    local_230 = puVar44;
                    if (lVar37 != 0) goto LAB_14320a9ce;
                    break;
                  }
LAB_14320a27b:
                  iVar17 = *(int *)(*local_218 + 0x18 + (longlong)puVar32);
                } while (iVar17 != -1);
              }
            }
            local_250 = puVar40;
            if (uVar52 == 0) {
              *(uint *)(param_1 + 0x3e0) = uVar30 + 1;
              local_238 = puVar31;
              local_230 = puVar44;
              if (*(uint *)(param_1 + 0x3e4) == uVar30) {
                FUN_14178f2cc(local_218,(ulonglong *)(ulonglong)uVar30);
              }
              iVar17 = *(int *)(param_1 + 0x400);
              if (iVar17 == 0) {
                iVar38 = -1;
              }
              else {
                iVar38 = iVar17 + 0x1e;
                if (-1 < iVar17 + -1) {
                  iVar38 = iVar17 + -1;
                }
                iVar38 = iVar38 >> 5;
              }
              iVar47 = iVar17 + 0x1f;
              if (-1 < iVar17) {
                iVar47 = iVar17;
              }
              if (iVar47 >> 5 == iVar38) {
                *(int *)(param_1 + 0x400) = iVar17 + 1;
              }
              else {
                FUN_14018be28(local_220);
                uVar35 = *(int *)(param_1 + 0x400) + 1;
                uVar52 = *(int *)(param_1 + 0x400) + 0x20;
                if (-1 < (int)uVar35) {
                  uVar52 = uVar35;
                }
                *(uint *)(param_1 + 0x400) = uVar35;
                iVar38 = uVar35 - (uVar52 & 0xffffffe0);
                if (iVar38 != 0) {
                  puVar32 = *(ulonglong **)(param_1 + 0x3f8);
                  if (*(ulonglong **)(param_1 + 0x3f8) == (ulonglong *)0x0) {
                    puVar32 = local_220;
                  }
                  bVar50 = -(char)iVar38;
                  *(uint *)((longlong)puVar32 + (longlong)((int)uVar52 >> 5) * 4) =
                       (uint)(*(int *)((longlong)puVar32 + (longlong)((int)uVar52 >> 5) * 4) <<
                             (bVar50 & 0x1f)) >> (bVar50 & 0x1f);
                }
              }
              lVar37 = (longlong)(int)uVar30;
              puVar32 = *(ulonglong **)(param_1 + 0x3f8);
              if (*(ulonglong **)(param_1 + 0x3f8) == (ulonglong *)0x0) {
                puVar32 = local_220;
              }
              bVar50 = (byte)iVar17 & 0x1f;
              puVar45 = (uint *)((longlong)puVar32 + (longlong)(iVar47 >> 5) * 4);
              *puVar45 = *puVar45 & (-2 << bVar50 | 0xfffffffeU >> 0x20 - bVar50);
              puVar32 = (ulonglong *)(ulonglong)uVar30;
            }
            else {
              plVar42 = (longlong *)(param_1 + 0x3d8);
              puVar32 = (ulonglong *)(ulonglong)*(uint *)(param_1 + 0x408);
              lVar37 = (longlong)(int)*(uint *)(param_1 + 0x408);
              iVar17 = *(int *)(*plVar42 + 4 + lVar37 * 0x20);
              *(int *)(param_1 + 0x408) = iVar17;
              *(uint *)(param_1 + 0x40c) = uVar52 - 1;
              param_1 = local_228;
              local_238 = puVar31;
              local_230 = puVar44;
              if (uVar52 - 1 != 0) {
                *(undefined4 *)(*plVar42 + (longlong)iVar17 * 0x20) = 0xffffffff;
              }
            }
            puVar40 = local_218;
            puVar31 = local_238;
            iVar17 = (int)puVar32;
            puVar39 = *(ulonglong **)(param_1 + 0x3f8);
            if (*(ulonglong **)(param_1 + 0x3f8) == (ulonglong *)0x0) {
              puVar39 = local_220;
            }
            iVar38 = iVar17 + 0x1f;
            if (-1 < iVar17) {
              iVar38 = iVar17;
            }
            puVar45 = (uint *)((longlong)puVar39 + (longlong)(iVar38 >> 5) * 4);
            *puVar45 = *puVar45 | 1 << ((byte)puVar32 & 0x1f);
            lVar49 = *(longlong *)(param_1 + 0x3d8);
            lVar37 = lVar37 * 0x20;
            puVar27 = (undefined4 *)(lVar49 + lVar37);
            *(ulonglong *)(lVar49 + lVar37) = (longlong)(int)uVar18 << 0x20 | (ulonglong)local_250;
            *(char *)(lVar49 + 8 + lVar37) = (char)local_258;
            *(undefined8 *)(lVar49 + 0x10 + lVar37) = 0;
            *(undefined4 *)(lVar49 + 0x18 + lVar37) = 0xffffffff;
            uVar35 = *(int *)(param_1 + 0x3e0) - *(int *)(param_1 + 0x40c);
            puVar39 = (ulonglong *)(ulonglong)uVar35;
            in_R10 = local_258;
            if ((uVar35 != 0) && (uVar35 != 1)) {
              puVar44 = *(ulonglong **)(param_1 + 0x428);
              if (*(ulonglong **)(param_1 + 0x428) == (ulonglong *)0x0) {
                puVar44 = local_240;
              }
              if (puVar44 == (ulonglong *)0x0) {
                puVar44 = local_1b8;
              }
              iVar38 = *(int *)((longlong)puVar44 +
                               (ulonglong)(*(int *)(param_1 + 0x430) - 1U & uVar19) * 4);
              if (iVar38 != -1) {
                do {
                  puVar28 = (undefined4 *)(*local_218 + (longlong)iVar38 * 0x20);
                  in_R10 = (ulonglong *)CONCAT71((int7)((ulonglong)in_R10 >> 8),1);
                  uVar29 = (ulonglong)local_250 & 0xffffffff;
                  lVar37 = 0;
                  do {
                    if (puVar28[lVar37] != (int)uVar29) goto LAB_14320a414;
                    lVar37 = 1;
                    uVar29 = (ulonglong)uVar18;
                    cVar16 = (char)in_R10;
                    in_R10 = (ulonglong *)0x0;
                  } while (cVar16 != '\0');
                  in_R10 = local_258;
                  if (*(char *)(puVar28 + 2) == (char)local_258) {
                    uVar55 = *puVar27;
                    uVar36 = puVar27[1];
                    uVar7 = puVar27[2];
                    uVar8 = puVar27[3];
                    *(undefined8 *)(puVar28 + 4) = *(undefined8 *)(puVar27 + 4);
                    *puVar28 = uVar55;
                    puVar28[1] = uVar36;
                    puVar28[2] = uVar7;
                    puVar28[3] = uVar8;
                    FUN_14742e742(local_218,puVar32);
                    puVar31 = local_238;
                    goto LAB_14320a9b7;
                  }
LAB_14320a414:
                  iVar38 = *(int *)(*local_218 + 0x18 + (longlong)iVar38 * 0x20);
                } while (iVar38 != -1);
              }
            }
            if (uVar35 < 4) {
              iVar38 = 1;
            }
            else {
              uVar29 = (ulonglong)(uVar35 & 0xfffffffe) + 0xf;
              lVar37 = 0x3f;
              if (uVar29 != 0) {
                for (; uVar29 >> lVar37 == 0; lVar37 = lVar37 + -1) {
                }
              }
              iVar38 = 1 << ((byte)lVar37 & 0x1f);
            }
            if (((int)uVar35 < 1) || (iVar38 <= *(int *)(param_1 + 0x430))) {
              uVar19 = *(int *)(param_1 + 0x430) - 1U & uVar19;
              puVar27[7] = uVar19;
              puVar32 = *(ulonglong **)(param_1 + 0x428);
              if (*(ulonglong **)(param_1 + 0x428) == (ulonglong *)0x0) {
                puVar32 = local_240;
              }
              if (puVar32 == (ulonglong *)0x0) {
                puVar32 = local_1b8;
              }
              puVar27[6] = *(undefined4 *)
                            ((longlong)puVar32 +
                            ((longlong)*(int *)(param_1 + 0x430) - 1U & (longlong)(int)uVar19) * 4);
              puVar39 = *(ulonglong **)(param_1 + 0x428);
              if (*(ulonglong **)(param_1 + 0x428) == (ulonglong *)0x0) {
                puVar39 = local_240;
              }
              if (puVar39 == (ulonglong *)0x0) {
                puVar39 = local_1b8;
              }
              puVar32 = (ulonglong *)
                        ((longlong)*(int *)(param_1 + 0x430) - 1U & (longlong)(int)uVar19);
              *(int *)((longlong)puVar39 + (longlong)puVar32 * 4) = iVar17;
              in_R10 = local_240;
            }
            else {
              *(int *)(param_1 + 0x430) = iVar38;
              FUN_144adb3b2(local_218);
              puVar32 = puVar39;
            }
LAB_14320a9b7:
            lVar37 = *puVar40 + (longlong)iVar17 * 0x20;
            uVar35 = (uint)local_250;
LAB_14320a9ce:
            puVar39 = local_248;
            plVar42 = (longlong *)(lVar37 + 0x10);
            lVar37 = *plVar42;
            puVar40 = local_258;
            if (lVar37 == 0) {
              local_128[0] = *(longlong *)
                              (*(longlong *)(param_1 + 0x168) + (longlong)(int)uVar35 * 8);
              local_128[1] = *(undefined8 *)
                              (*(longlong *)(param_1 + 0x168) + (longlong)(int)uVar18 * 8);
              puVar43 = (undefined8 *)(*(longlong *)(param_1 + 0xe0) + 7U & 0xfffffffffffffff8);
              puVar21 = puVar43 + 9;
              if (*(undefined8 **)(param_1 + 0xe8) < puVar21) {
                puVar32 = (ulonglong *)0x0;
                FUN_140023dd8(local_248,0x50);
                puVar43 = (undefined8 *)(*puVar39 + 7 & 0xfffffffffffffff8);
                puVar21 = puVar43 + 9;
              }
              *(undefined8 **)(param_1 + 0xe0) = puVar21;
              *puVar43 = 0;
              puVar43[1] = 0;
              *(undefined4 *)(puVar43 + 2) = 0xffffffff;
              puVar32 = (ulonglong *)CONCAT71((int7)((ulonglong)puVar32 >> 8),1);
              *(undefined1 *)((longlong)puVar43 + 0x14) = 1;
              *(undefined4 *)(puVar43 + 3) = 0xffffffff;
              *(undefined1 *)((longlong)puVar43 + 0x1c) = 1;
              puVar43[4] = 0;
              puVar43[5] = 0;
              puVar43[6] = 0;
              puVar43[7] = 0;
              *(undefined4 *)(puVar43 + 8) = 1;
              *(undefined1 *)((longlong)puVar43 + 0x44) = 3;
              *(char *)((longlong)puVar43 + 0x45) = (char)local_258;
              *(undefined2 *)((longlong)puVar43 + 0x46) = 0;
              *plVar42 = (longlong)puVar43;
              uVar35 = *(uint *)(param_1 + 0x470);
              *(uint *)(param_1 + 0x470) = uVar35 + 1;
              if (*(uint *)(param_1 + 0x474) < uVar35 + 1) {
                puVar32 = (ulonglong *)(ulonglong)uVar35;
                FUN_144adb638(local_200,puVar32);
              }
              *(longlong *)(*local_200 + (longlong)(int)uVar35 * 8) = *plVar42;
              lVar49 = 0;
              puVar40 = local_258;
              do {
                lVar56 = *(longlong *)((longlong)local_128 + lVar49);
                uVar35 = *(uint *)(lVar56 + 0x198);
                *(uint *)(lVar56 + 0x198) = uVar35 + 1;
                if (*(uint *)(lVar56 + 0x19c) < uVar35 + 1) {
                  puVar32 = (ulonglong *)(ulonglong)uVar35;
                  FUN_144adb638((longlong *)(lVar56 + 400),puVar32);
                  puVar40 = local_258;
                }
                lVar37 = *plVar42;
                *(longlong *)(*(longlong *)(lVar56 + 400) + (longlong)(int)uVar35 * 8) = lVar37;
                lVar49 = lVar49 + 8;
                param_1 = local_228;
              } while (lVar49 != 0x10);
            }
            uVar35 = *(uint *)(lVar37 + 0x28);
            *(uint *)(lVar37 + 0x28) = uVar35 + 1;
            if (*(uint *)(lVar37 + 0x2c) < uVar35 + 1) {
              puVar32 = (ulonglong *)(ulonglong)uVar35;
              FUN_144adb766(lVar37 + 0x20,puVar32);
              puVar40 = local_258;
            }
            lVar49 = *(longlong *)(lVar37 + 0x20);
            *(ulonglong *)(lVar49 + (longlong)(int)uVar35 * 0x10) = uVar41;
            *(ulonglong **)(lVar49 + 8 + (longlong)(int)uVar35 * 0x10) = local_230;
            *(undefined1 *)(lVar37 + 0x46) = 1;
            bVar50 = (byte)puVar40;
            puVar39 = local_250;
            while (local_250 = puVar39, bVar50 != 0) {
              lVar37 = *plVar42;
              lVar49 = *(longlong *)
                        (*(longlong *)(param_1 + 0x168) +
                        (longlong)
                        *(int *)(*(longlong *)
                                  (*(longlong *)(param_1 + 0x168) +
                                  (longlong)
                                  *(int *)((longlong)&local_108 +
                                          (ulonglong)((byte)(-(byte)puVar40 & (byte)puVar40) == 2) *
                                          4 + 4) * 8) + 0x48) * 8);
              bVar50 = *(byte *)(lVar49 + 0x130);
              uVar35 = *(uint *)(*(longlong *)(lVar49 + 0x128) + 0x2c);
              uVar41 = (ulonglong)(*(char *)(*(longlong *)(lVar49 + 0x128) + 0x2b) == '\x02');
              uVar18 = *(uint *)(lVar37 + 0x10 + uVar41 * 8);
              puVar32 = (ulonglong *)(ulonglong)uVar18;
              bVar51 = *(byte *)(lVar37 + 0x14 + uVar41 * 8);
              if ((uVar18 != uVar35) || (bVar51 != bVar50)) {
                bVar14 = bVar50;
                if (bVar51 < bVar50) {
                  bVar14 = bVar51;
                }
                if ((uVar35 <= uVar18) && (bVar50 <= bVar51)) {
                  local_250 = (ulonglong *)(longlong)*(int *)(lVar49 + 0x120);
                  uVar18 = *(int *)(lVar49 + 0x120) + 1;
                  *(uint *)(lVar49 + 0x120) = uVar18;
                  puVar32 = local_250;
                  if (*(uint *)(lVar49 + 0x124) < uVar18) {
                    local_258 = puVar40;
                    local_238 = puVar31;
                    FUN_144adb9c0(lVar49 + 0xf8,local_250);
                    puVar32 = local_250;
                    puVar40 = local_258;
                    puVar31 = local_238;
                    puVar39 = local_250;
                  }
                  local_250 = puVar39;
                  lVar56 = lVar49 + 0xf8;
                  if (*(longlong *)(lVar49 + 0x118) != 0) {
                    lVar56 = *(longlong *)(lVar49 + 0x118);
                  }
                  *(longlong *)(lVar56 + (longlong)puVar32 * 8) = lVar37;
                  *(ulonglong *)(lVar37 + 0x10 + uVar41 * 8) = (ulonglong)CONCAT14(bVar14,uVar35);
                }
              }
              iVar17 = (int)puVar40 + -1;
              bVar50 = (byte)iVar17 & (byte)puVar40;
              puVar40 = (ulonglong *)(ulonglong)CONCAT31((int3)((uint)iVar17 >> 8),bVar50);
              param_1 = local_228;
              puVar39 = local_250;
            }
          }
          else {
            if (uVar18 + 1 < uVar35 + 1) {
              uVar18 = uVar35;
            }
            uVar35 = uStack_100;
            if (uVar30 < uStack_100) {
              uVar35 = uVar30;
            }
            puVar32 = (ulonglong *)(ulonglong)uVar35;
            lVar37 = *(longlong *)(param_1 + 0x168);
            in_R10 = (ulonglong *)(longlong)(int)uVar18;
            lVar49 = *(longlong *)(lVar37 + (longlong)in_R10 * 8);
            if (uVar18 < uVar35) {
              lVar49 = *(longlong *)(lVar37 + (longlong)*(int *)(lVar49 + 0x4c) * 8);
              if (bVar51 == 2) {
                lVar37 = *(longlong *)(lVar49 + 0x180);
                if (lVar37 == 0) {
                  puVar43 = (undefined8 *)(*(longlong *)(param_1 + 0xe0) + 7U & 0xfffffffffffffff8);
                  puVar21 = puVar43 + 9;
                  if (*(undefined8 **)(param_1 + 0xe8) < puVar21) {
                    local_1f8 = in_R10;
                    FUN_140023dd8(local_248,0x50);
                    puVar43 = (undefined8 *)(*puVar39 + 7 & 0xfffffffffffffff8);
                    puVar21 = puVar43 + 9;
                    in_R10 = local_1f8;
                  }
                  *(undefined8 **)(param_1 + 0xe0) = puVar21;
                  uVar53 = *(undefined1 *)(lVar49 + 0x2b);
                  *puVar43 = 0;
                  puVar43[1] = 0;
                  puVar32 = (ulonglong *)&DAT_ffffffff;
                  *(undefined4 *)(puVar43 + 2) = 0xffffffff;
                  *(undefined1 *)((longlong)puVar43 + 0x14) = 1;
                  *(undefined4 *)(puVar43 + 3) = 0xffffffff;
                  *(undefined1 *)((longlong)puVar43 + 0x1c) = 1;
                  puVar43[4] = 0;
                  puVar43[5] = 0;
                  puVar43[6] = 0;
                  puVar43[7] = 0;
                  *(undefined4 *)(puVar43 + 8) = 1;
                  *(undefined1 *)((longlong)puVar43 + 0x44) = uVar53;
                  *(undefined2 *)((longlong)puVar43 + 0x45) = 2;
                  *(undefined1 *)((longlong)puVar43 + 0x47) = 0;
                  *(undefined8 **)(lVar49 + 0x180) = puVar43;
                  uVar35 = *(uint *)(param_1 + 0x470);
                  *(uint *)(param_1 + 0x470) = uVar35 + 1;
                  if (*(uint *)(param_1 + 0x474) < uVar35 + 1) {
                    puVar32 = (ulonglong *)(ulonglong)uVar35;
                    local_1f8 = in_R10;
                    FUN_144adb638(local_200,puVar32);
                    in_R10 = local_1f8;
                  }
                  lVar56 = *local_200;
                  lVar37 = *(longlong *)(lVar49 + 0x180);
LAB_143209fb8:
                  *(longlong *)(lVar56 + (longlong)(int)uVar35 * 8) = lVar37;
                }
              }
              else if (((uint)local_258 & 0xff) == 3) {
                lVar37 = *(longlong *)(lVar49 + 0x188);
                if (lVar37 == 0) {
                  puVar43 = (undefined8 *)(*(longlong *)(param_1 + 0xe0) + 7U & 0xfffffffffffffff8);
                  puVar21 = puVar43 + 9;
                  if (*(undefined8 **)(param_1 + 0xe8) < puVar21) {
                    local_1f8 = in_R10;
                    FUN_140023dd8(local_248,0x50);
                    puVar43 = (undefined8 *)(*puVar39 + 7 & 0xfffffffffffffff8);
                    puVar21 = puVar43 + 9;
                    in_R10 = local_1f8;
                  }
                  *(undefined8 **)(param_1 + 0xe0) = puVar21;
                  uVar53 = *(undefined1 *)(lVar49 + 0x2b);
                  *puVar43 = 0;
                  puVar43[1] = 0;
                  puVar32 = (ulonglong *)&DAT_ffffffff;
                  *(undefined4 *)(puVar43 + 2) = 0xffffffff;
                  *(undefined1 *)((longlong)puVar43 + 0x14) = 1;
                  *(undefined4 *)(puVar43 + 3) = 0xffffffff;
                  *(undefined1 *)((longlong)puVar43 + 0x1c) = 1;
                  puVar43[4] = 0;
                  puVar43[5] = 0;
                  puVar43[6] = 0;
                  puVar43[7] = 0;
                  *(undefined4 *)(puVar43 + 8) = 1;
                  *(undefined1 *)((longlong)puVar43 + 0x44) = uVar53;
                  *(undefined2 *)((longlong)puVar43 + 0x45) = 3;
                  *(undefined1 *)((longlong)puVar43 + 0x47) = 0;
                  *(undefined8 **)(lVar49 + 0x188) = puVar43;
                  uVar35 = *(uint *)(param_1 + 0x470);
                  *(uint *)(param_1 + 0x470) = uVar35 + 1;
                  if (*(uint *)(param_1 + 0x474) < uVar35 + 1) {
                    puVar32 = (ulonglong *)(ulonglong)uVar35;
                    local_1f8 = in_R10;
                    FUN_144adb638(local_200,puVar32);
                    in_R10 = local_1f8;
                  }
                  lVar56 = *local_200;
                  lVar37 = *(longlong *)(lVar49 + 0x188);
                  goto LAB_143209fb8;
                }
              }
              else {
                lVar37 = lVar49 + 0x138;
                if (*(char *)(lVar49 + 0x17e) == '\0') {
                  uVar35 = *(int *)(lVar49 + 0x88) + *(int *)(lVar49 + 0x78);
                  local_230 = puVar44;
                  if ((int)uVar35 < 0) goto LAB_14320bbfb;
                  local_238 = puVar31;
                  if (*(int *)(lVar49 + 0x164) < (int)uVar35) {
                    puVar32 = (ulonglong *)(ulonglong)uVar35;
                    FUN_144adac32(lVar49 + 0x158,puVar32);
                  }
                  if (*(int *)(lVar49 + 0x174) < (int)uVar35) {
                    puVar32 = (ulonglong *)(ulonglong)uVar35;
                    FUN_144adad0c(lVar49 + 0x168,puVar32);
                  }
                  uVar35 = *(uint *)(param_1 + 0x470);
                  *(uint *)(param_1 + 0x470) = uVar35 + 1;
                  if (*(uint *)(param_1 + 0x474) < uVar35 + 1) {
                    puVar32 = (ulonglong *)(ulonglong)uVar35;
                    FUN_144adb638(local_200,puVar32);
                  }
                  *(longlong *)(*local_200 + (longlong)(int)uVar35 * 8) = lVar37;
                  puVar44 = local_230;
                  puVar31 = local_238;
                }
              }
            }
            else {
              puVar32 = local_248;
              lVar37 = FUN_14178e9d4(*(undefined8 *)(lVar37 + (longlong)*(int *)(lVar49 + 0x48) * 8)
                                     ,local_248,local_200);
            }
            uVar35 = *(uint *)(lVar37 + 0x28);
            *(uint *)(lVar37 + 0x28) = uVar35 + 1;
            if (*(uint *)(lVar37 + 0x2c) < uVar35 + 1) {
              puVar32 = (ulonglong *)(ulonglong)uVar35;
              local_1f8 = in_R10;
              FUN_144adb766(lVar37 + 0x20,puVar32);
              in_R10 = local_1f8;
            }
            lVar49 = *(longlong *)(lVar37 + 0x20);
            *(ulonglong *)(lVar49 + (longlong)(int)uVar35 * 0x10) = uVar41;
            *(ulonglong **)(lVar49 + 8 + (longlong)(int)uVar35 * 0x10) = puVar44;
            *(undefined1 *)(lVar37 + 0x46) = 1;
            lVar49 = lVar37 + 0x10;
            bVar50 = 3;
            puVar40 = local_258;
            do {
              puVar39 = local_248;
              bVar51 = -bVar50 & bVar50;
              if (((byte)local_250 == bVar51) && ((byte)puVar40 == 3)) {
                lVar56 = *(longlong *)
                          (*(longlong *)(param_1 + 0x168) +
                          (longlong)
                          *(int *)(*(longlong *)
                                    (*(longlong *)(param_1 + 0x168) + (longlong)in_R10 * 8) + 0x4c)
                          * 8);
                uVar29 = *(ulonglong *)(lVar56 + 0x1a0);
                if (uVar29 == 0) {
                  uVar29 = *(longlong *)(param_1 + 0xe0) + 7U & 0xfffffffffffffff8;
                  uVar41 = uVar29 + 0x40;
                  if (*(ulonglong *)(param_1 + 0xe8) < uVar41) {
                    FUN_140023dd8(local_248,0x48);
                    uVar29 = *puVar39 + 7 & 0xfffffffffffffff8;
                    uVar41 = uVar29 + 0x40;
                    puVar40 = local_258;
                  }
                  *local_248 = uVar41;
                  *(undefined8 *)(uVar29 + 0x20) = 0;
                  *(undefined8 *)(uVar29 + 0x28) = 0x400000000;
                  *(longlong *)(uVar29 + 0x30) = lVar56;
                  *(undefined1 *)(uVar29 + 0x38) = 1;
                  *(ulonglong *)(lVar56 + 0x1a0) = uVar29;
                }
                bVar51 = *(byte *)(uVar29 + 0x38);
                uVar18 = *(uint *)(*(longlong *)(uVar29 + 0x30) + 0x2c);
                uVar41 = (ulonglong)(*(char *)(*(longlong *)(uVar29 + 0x30) + 0x2b) == '\x02');
                uVar35 = *(uint *)(lVar49 + uVar41 * 8);
                puVar32 = (ulonglong *)(ulonglong)uVar35;
                bVar14 = *(byte *)(lVar37 + 0x14 + uVar41 * 8);
                if ((uVar35 != uVar18) || (bVar14 != bVar51)) {
                  bVar2 = bVar51;
                  if (bVar14 < bVar51) {
                    bVar2 = bVar14;
                  }
                  if ((uVar18 <= uVar35) && (bVar51 <= bVar14)) {
                    local_230 = (ulonglong *)(ulonglong)*(uint *)(uVar29 + 0x28);
                    uVar35 = *(uint *)(uVar29 + 0x28) + 1;
                    *(uint *)(uVar29 + 0x28) = uVar35;
                    if (*(uint *)(uVar29 + 0x2c) < uVar35) {
                      local_238 = puVar31;
                      local_1f8 = in_R10;
                      FUN_144adb9c0(uVar29,local_230);
                      puVar40 = local_258;
                      in_R10 = local_1f8;
                      puVar31 = local_238;
                    }
                    puVar32 = (ulonglong *)(uVar29 + 0x20);
LAB_1432096af:
                    if (*puVar32 != 0) {
                      uVar29 = *puVar32;
                    }
                    *(longlong *)(uVar29 + (longlong)(int)local_230 * 8) = lVar37;
                    puVar32 = (ulonglong *)(ulonglong)CONCAT14(bVar2,uVar18);
                    *(ulonglong **)(lVar49 + uVar41 * 8) = puVar32;
                  }
                }
              }
              else if ((bVar51 & (byte)puVar40) != 0) {
                lVar56 = *(longlong *)
                          (*(longlong *)(local_228 + 0x168) +
                          (longlong)
                          *(int *)(*(longlong *)
                                    (*(longlong *)(local_228 + 0x168) +
                                    (longlong)
                                    *(int *)((longlong)&local_108 + (ulonglong)(bVar51 == 2) * 4 + 4
                                            ) * 8) + 0x48) * 8);
                bVar51 = *(byte *)(lVar56 + 0x130);
                uVar18 = *(uint *)(*(longlong *)(lVar56 + 0x128) + 0x2c);
                uVar41 = (ulonglong)(*(char *)(*(longlong *)(lVar56 + 0x128) + 0x2b) == '\x02');
                uVar35 = *(uint *)(lVar49 + uVar41 * 8);
                puVar32 = (ulonglong *)(ulonglong)uVar35;
                bVar14 = *(byte *)(lVar37 + 0x14 + uVar41 * 8);
                if ((uVar35 != uVar18) || (bVar14 != bVar51)) {
                  bVar2 = bVar51;
                  if (bVar14 < bVar51) {
                    bVar2 = bVar14;
                  }
                  if ((uVar18 <= uVar35) && (bVar51 <= bVar14)) {
                    uVar29 = lVar56 + 0xf8;
                    local_230 = (ulonglong *)(ulonglong)*(uint *)(lVar56 + 0x120);
                    uVar35 = *(uint *)(lVar56 + 0x120) + 1;
                    *(uint *)(lVar56 + 0x120) = uVar35;
                    if (*(uint *)(lVar56 + 0x124) < uVar35) {
                      local_238 = puVar31;
                      local_1f8 = in_R10;
                      local_1b0 = uVar29;
                      FUN_144adb9c0(uVar29,local_230);
                      uVar29 = local_1b0;
                      puVar40 = local_258;
                      in_R10 = local_1f8;
                      puVar31 = local_238;
                    }
                    puVar32 = (ulonglong *)(lVar56 + 0x118);
                    goto LAB_1432096af;
                  }
                }
              }
              bVar50 = bVar50 - 1 & bVar50;
              param_1 = local_228;
            } while (bVar50 != 0);
          }
        }
        puVar40 = local_248;
        if ((*(byte *)(uVar22 + 0x24) & 0x20) == 0) {
          if (*(char *)(uVar22 + 0x21) == '\x01') {
            uVar5 = *(undefined8 *)(uVar22 + 0x10);
            puVar27 = *(undefined4 **)(uVar22 + 0x138);
            uVar35 = *(uint *)(param_1 + 0x440);
            *(uint *)(param_1 + 0x440) = uVar35 + 1;
            if (*(uint *)(param_1 + 0x444) < uVar35 + 1) {
              puVar32 = (ulonglong *)(ulonglong)uVar35;
              FUN_14742e6ea(local_1a0,puVar32);
            }
            lVar37 = *local_1a0;
            uVar55 = *puVar27;
            *(undefined8 *)(lVar37 + (longlong)(int)uVar35 * 0x10) = uVar5;
            *(undefined4 *)(lVar37 + 8 + (longlong)(int)uVar35 * 0x10) = uVar55;
          }
          else {
            iVar17 = *(int *)(param_1 + 0x170);
            puVar39 = (ulonglong *)(*(longlong *)(param_1 + 0xe0) + 3U & 0xfffffffffffffffc);
            puVar32 = puVar39 + 4;
            if (*(ulonglong **)(param_1 + 0xe8) < puVar32) {
              FUN_140023dd8(local_248,0x24);
              puVar39 = (ulonglong *)(*puVar40 + 3 & 0xfffffffffffffffc);
              puVar32 = puVar39 + 4;
            }
            *local_248 = (ulonglong)puVar32;
            *(undefined8 *)((longlong)puVar39 + 0xc) = 0;
            *(undefined8 *)((longlong)puVar39 + 0x14) = 0;
            *puVar39 = 0;
            puVar39[1] = 0;
            *(undefined4 *)((longlong)puVar39 + 4) = 0xffffffff;
            *(undefined4 *)(puVar39 + 1) = 0xffffffff;
            *(undefined4 *)((longlong)puVar39 + 0xc) = 0xffffffff;
            *(undefined4 *)(puVar39 + 2) = 0xffffffff;
            *(undefined8 *)((longlong)puVar39 + 0x12) = 0xffffffffffffffff;
            *(undefined4 *)((longlong)puVar39 + 0x1c) = 0;
            if (*(int *)(uVar22 + 0x2c) == -1) {
              iVar17 = iVar17 + -1;
              puVar39[1] = 0xffffffffffffffff;
              *(undefined4 *)(puVar39 + 2) = 0xffffffff;
              *(int *)((longlong)puVar39 + 4) = iVar17;
              *(int *)((longlong)puVar39 + 0xc) = iVar17;
              *(undefined4 *)puVar39 = *(undefined4 *)(uVar22 + 0x58);
              lVar37 = 0xffff;
              if (*(longlong *)(uVar22 + 0x130) != 0) {
                iVar17 = *(int *)(param_1 + 0x4e8);
                lVar37 = (longlong)iVar17;
                *(uint *)(param_1 + 0x4e8) = iVar17 + 1U;
                if (*(uint *)(param_1 + 0x4ec) < iVar17 + 1U) {
                  FUN_1459c2126(local_210,iVar17);
                }
                *(undefined8 *)(*local_210 + lVar37 * 8) = *(undefined8 *)(uVar22 + 0x130);
                *(undefined8 *)(uVar22 + 0x130) = 0;
                param_1 = local_228;
              }
              *(short *)(puVar39 + 3) = (short)lVar37;
              uVar5 = *(undefined8 *)(uVar22 + 0x10);
              iVar17 = *(int *)(param_1 + 0x440);
              *(uint *)(param_1 + 0x440) = iVar17 + 1U;
              if (*(uint *)(param_1 + 0x444) < iVar17 + 1U) {
                FUN_14742e6ea(local_1a0,iVar17);
              }
              lVar37 = *local_1a0;
              uVar41 = *puVar39;
              *(undefined8 *)(lVar37 + (longlong)iVar17 * 0x10) = uVar5;
              *(int *)(lVar37 + 8 + (longlong)iVar17 * 0x10) = (int)uVar41;
              uVar41 = (ulonglong)(uint)*puVar39;
            }
            else {
              uVar18 = *(int *)(param_1 + 0x170) - 1;
              uVar35 = *(uint *)(*(longlong *)(uVar22 + 0x90) + 0xa0);
              if (uVar35 < uVar18) {
                uVar18 = uVar35;
              }
              uVar41 = (ulonglong)
                       (*(char *)(*(longlong *)
                                   (*(longlong *)(param_1 + 0x168) + (longlong)(int)uVar18 * 8) +
                                 0x2b) == '\x02');
              *(undefined4 *)((longlong)puVar39 + 4) = 0xffffffff;
              *(undefined4 *)(puVar39 + 1) = 0xffffffff;
              *(undefined4 *)((longlong)puVar39 + 0xc) = 0xffffffff;
              *(undefined4 *)(puVar39 + 2) = 0xffffffff;
              *(uint *)((longlong)puVar39 + (uVar41 + 1) * 4) = uVar18;
              *(uint *)((longlong)puVar39 + (uVar41 + 3) * 4) = uVar18;
              *(undefined4 *)puVar39 = 0x40000;
              uVar41 = 0x40000;
            }
            puVar40 = local_248;
            puVar45 = *(uint **)(uVar22 + 0x138);
            uVar35 = *puVar45;
            puVar32 = (ulonglong *)(ulonglong)uVar35;
            if (uVar35 == (uint)uVar41) {
              bVar50 = ((int)puVar39[1] != -1) * '\x02' | *(int *)((longlong)puVar39 + 4) != -1;
              in_R10 = (ulonglong *)CONCAT71((int7)((ulonglong)in_R10 >> 8),bVar50);
              uVar29 = (ulonglong)*(uint *)((longlong)puVar39 + 0x1c);
              if (((byte)((puVar45[2] != 0xffffffff) * '\x02' | puVar45[1] != 0xffffffff) != bVar50)
                 || (puVar45[7] != *(uint *)((longlong)puVar39 + 0x1c))) goto LAB_1432092ab;
              if ((uVar41 & 0xc00) != 0) {
                in_R10 = (ulonglong *)(ulonglong)DAT_14ca95bd0;
                uVar18 = *(uint *)((longlong)puVar39 + 0x14);
                if (*(uint *)((longlong)puVar39 + 0x14) == DAT_14ca95bd0) {
                  uVar18 = 0xffffffff;
                }
                uVar30 = puVar45[5];
                if (puVar45[5] == DAT_14ca95bd0) {
                  uVar30 = 0xffffffff;
                }
                if ((uVar18 == 0xffffffff) || (uVar30 != uVar18)) goto LAB_1432092ab;
              }
            }
            else {
              uVar29 = (ulonglong)*(uint *)((longlong)puVar39 + 0x1c);
LAB_1432092ab:
              if ((ulonglong)(ushort)puVar39[3] == 0xffff) {
                puVar44 = (ulonglong *)0x0;
              }
              else {
                puVar44 = *(ulonglong **)(*local_210 + (ulonglong)(ushort)puVar39[3] * 8);
              }
              uVar41 = uVar29 << 0x3d |
                       (uVar41 & 0x1fffff) << 0x15 | (ulonglong)(uVar35 & 0x1fffff) |
                       (ulonglong)*(ushort *)(uVar22 + 0x7c) << 0x2a | 0x400000000000000;
              uVar30 = *(uint *)((longlong)puVar39 + 4);
              local_108 = (undefined8 *)*puVar39;
              uStack_100 = (uint)puVar39[1];
              uStack_fc = *(uint *)((longlong)puVar39 + 0xc);
              local_f8 = (undefined4)puVar39[2];
              uStack_f4 = *(undefined4 *)((longlong)puVar39 + 0x14);
              uStack_f0 = (undefined4)puVar39[3];
              uStack_ec = *(undefined4 *)((longlong)puVar39 + 0x1c);
              uVar35 = puVar45[3];
              uVar18 = puVar45[4];
              bVar50 = (puVar45[2] != 0xffffffff) * '\x02' | puVar45[1] != 0xffffffff;
              bVar51 = (uStack_100 != 0xffffffff) * '\x02' | uVar30 != 0xffffffff;
              local_250 = (ulonglong *)CONCAT71((int7)((ulonglong)in_R10 >> 8),bVar51);
              local_258 = (ulonglong *)CONCAT71(local_258._1_7_,bVar50);
              if (bVar50 == 3) {
                uVar35 = *(uint *)(*(longlong *)
                                    (*(longlong *)(param_1 + 0x168) + (longlong)(int)uVar35 * 8) +
                                  0x4c);
                puVar40 = (ulonglong *)(ulonglong)uVar35;
                uVar18 = *(uint *)(*(longlong *)
                                    (*(longlong *)(param_1 + 0x168) + (longlong)(int)uVar18 * 8) +
                                  0x4c);
                uVar19 = uVar18 * 0x17 + uVar35;
                uVar19 = (uVar19 >> 2) + (uVar19 * 0x40 | (uint)bVar51) + 0x9e3779b9 ^ uVar19;
                uVar30 = *(uint *)(param_1 + 0x3e0);
                local_230 = (ulonglong *)(ulonglong)uVar30;
                uVar52 = *(uint *)(param_1 + 0x40c);
                local_258 = puVar44;
                if (uVar30 != uVar52) {
                  puVar32 = *(ulonglong **)(param_1 + 0x428);
                  if (*(ulonglong **)(param_1 + 0x428) == (ulonglong *)0x0) {
                    puVar32 = local_240;
                  }
                  if (puVar32 == (ulonglong *)0x0) {
                    puVar32 = local_1b8;
                  }
                  iVar17 = *(int *)((longlong)puVar32 +
                                   (ulonglong)(*(int *)(param_1 + 0x430) - 1U & uVar19) * 4);
                  if (iVar17 != -1) {
                    do {
                      puVar32 = (ulonglong *)((longlong)iVar17 * 0x20);
                      lVar37 = *local_218 + (longlong)puVar32;
                      in_R10 = (ulonglong *)(ulonglong)uVar35;
                      lVar49 = 0;
                      bVar58 = true;
                      do {
                        bVar46 = bVar58;
                        if (*(int *)(lVar37 + lVar49 * 4) != (int)in_R10) goto LAB_14320a5c8;
                        lVar49 = 1;
                        in_R10 = (ulonglong *)(ulonglong)uVar18;
                        bVar58 = false;
                      } while (bVar46);
                      if (*(byte *)(lVar37 + 8) == bVar51) {
                        if (lVar37 != 0) goto LAB_14320ad60;
                        break;
                      }
LAB_14320a5c8:
                      iVar17 = *(int *)(*local_218 + 0x18 + (longlong)puVar32);
                    } while (iVar17 != -1);
                  }
                }
                local_1f8 = puVar40;
                if (uVar52 == 0) {
                  *(uint *)(param_1 + 0x3e0) = uVar30 + 1;
                  local_238 = puVar31;
                  if (*(uint *)(param_1 + 0x3e4) == uVar30) {
                    FUN_14178f2cc(local_218,local_230);
                  }
                  iVar17 = *(int *)(param_1 + 0x400);
                  if (iVar17 == 0) {
                    iVar38 = -1;
                  }
                  else {
                    iVar38 = iVar17 + 0x1e;
                    if (-1 < iVar17 + -1) {
                      iVar38 = iVar17 + -1;
                    }
                    iVar38 = iVar38 >> 5;
                  }
                  iVar47 = iVar17 + 0x1f;
                  if (-1 < iVar17) {
                    iVar47 = iVar17;
                  }
                  if (iVar47 >> 5 == iVar38) {
                    *(int *)(param_1 + 0x400) = iVar17 + 1;
                  }
                  else {
                    FUN_14018be28(local_220);
                    uVar35 = *(int *)(param_1 + 0x400) + 1;
                    uVar30 = *(int *)(param_1 + 0x400) + 0x20;
                    if (-1 < (int)uVar35) {
                      uVar30 = uVar35;
                    }
                    *(uint *)(param_1 + 0x400) = uVar35;
                    iVar38 = uVar35 - (uVar30 & 0xffffffe0);
                    if (iVar38 != 0) {
                      puVar32 = *(ulonglong **)(param_1 + 0x3f8);
                      if (*(ulonglong **)(param_1 + 0x3f8) == (ulonglong *)0x0) {
                        puVar32 = local_220;
                      }
                      bVar50 = -(char)iVar38;
                      *(uint *)((longlong)puVar32 + (longlong)((int)uVar30 >> 5) * 4) =
                           (uint)(*(int *)((longlong)puVar32 + (longlong)((int)uVar30 >> 5) * 4) <<
                                 (bVar50 & 0x1f)) >> (bVar50 & 0x1f);
                    }
                  }
                  lVar49 = (longlong)(int)local_230;
                  puVar32 = *(ulonglong **)(param_1 + 0x3f8);
                  if (*(ulonglong **)(param_1 + 0x3f8) == (ulonglong *)0x0) {
                    puVar32 = local_220;
                  }
                  bVar50 = (byte)iVar17 & 0x1f;
                  puVar45 = (uint *)((longlong)puVar32 + (longlong)(iVar47 >> 5) * 4);
                  *puVar45 = *puVar45 & (-2 << bVar50 | 0xfffffffeU >> 0x20 - bVar50);
                  lVar37 = param_1;
                }
                else {
                  local_230 = (ulonglong *)(ulonglong)*(uint *)(param_1 + 0x408);
                  lVar49 = (longlong)(int)*(uint *)(param_1 + 0x408);
                  iVar17 = *(int *)(*(longlong *)(param_1 + 0x3d8) + 4 + lVar49 * 0x20);
                  *(int *)(param_1 + 0x408) = iVar17;
                  *(uint *)(param_1 + 0x40c) = uVar52 - 1;
                  lVar37 = local_228;
                  local_238 = puVar31;
                  if (uVar52 - 1 != 0) {
                    *(undefined4 *)(*(longlong *)(param_1 + 0x3d8) + (longlong)iVar17 * 0x20) =
                         0xffffffff;
                  }
                }
                puVar40 = local_218;
                puVar31 = local_238;
                iVar17 = (int)local_230;
                puVar32 = *(ulonglong **)(lVar37 + 0x3f8);
                if (*(ulonglong **)(lVar37 + 0x3f8) == (ulonglong *)0x0) {
                  puVar32 = local_220;
                }
                iVar38 = iVar17 + 0x1f;
                if (-1 < iVar17) {
                  iVar38 = iVar17;
                }
                puVar45 = (uint *)((longlong)puVar32 + (longlong)(iVar38 >> 5) * 4);
                *puVar45 = *puVar45 | 1 << ((byte)local_230 & 0x1f);
                lVar56 = *(longlong *)(lVar37 + 0x3d8);
                lVar49 = lVar49 * 0x20;
                puVar27 = (undefined4 *)(lVar56 + lVar49);
                *(ulonglong *)(lVar56 + lVar49) =
                     (longlong)(int)uVar18 << 0x20 | (ulonglong)local_1f8;
                *(char *)(lVar56 + 8 + lVar49) = (char)local_250;
                *(undefined8 *)(lVar56 + 0x10 + lVar49) = 0;
                *(undefined4 *)(lVar56 + 0x18 + lVar49) = 0xffffffff;
                uVar35 = *(int *)(lVar37 + 0x3e0) - *(int *)(lVar37 + 0x40c);
                puVar32 = (ulonglong *)(ulonglong)uVar35;
                in_R10 = local_250;
                if ((uVar35 != 0) && (uVar35 != 1)) {
                  puVar44 = *(ulonglong **)(lVar37 + 0x428);
                  if (*(ulonglong **)(lVar37 + 0x428) == (ulonglong *)0x0) {
                    puVar44 = local_240;
                  }
                  if (puVar44 == (ulonglong *)0x0) {
                    puVar44 = local_1b8;
                  }
                  iVar38 = *(int *)((longlong)puVar44 +
                                   (ulonglong)(*(int *)(lVar37 + 0x430) - 1U & uVar19) * 4);
                  if (iVar38 != -1) {
                    do {
                      puVar28 = (undefined4 *)(*local_218 + (longlong)iVar38 * 0x20);
                      in_R10 = (ulonglong *)CONCAT71((int7)((ulonglong)in_R10 >> 8),1);
                      uVar29 = (ulonglong)local_1f8 & 0xffffffff;
                      lVar49 = 0;
                      do {
                        if (puVar28[lVar49] != (int)uVar29) goto LAB_14320a76f;
                        lVar49 = 1;
                        uVar29 = (ulonglong)uVar18;
                        cVar16 = (char)in_R10;
                        in_R10 = (ulonglong *)0x0;
                      } while (cVar16 != '\0');
                      in_R10 = local_250;
                      if (*(char *)(puVar28 + 2) == (char)local_250) {
                        uVar55 = *puVar27;
                        uVar36 = puVar27[1];
                        uVar7 = puVar27[2];
                        uVar8 = puVar27[3];
                        *(undefined8 *)(puVar28 + 4) = *(undefined8 *)(puVar27 + 4);
                        *puVar28 = uVar55;
                        puVar28[1] = uVar36;
                        puVar28[2] = uVar7;
                        puVar28[3] = uVar8;
                        puVar32 = (ulonglong *)((ulonglong)local_230 & 0xffffffff);
                        FUN_14742e742(local_218,puVar32);
                        puVar31 = local_238;
                        goto LAB_14320ad46;
                      }
LAB_14320a76f:
                      iVar38 = *(int *)(*local_218 + 0x18 + (longlong)iVar38 * 0x20);
                    } while (iVar38 != -1);
                  }
                }
                if (uVar35 < 4) {
                  iVar38 = 1;
                }
                else {
                  uVar29 = (ulonglong)(uVar35 & 0xfffffffe) + 0xf;
                  lVar49 = 0x3f;
                  if (uVar29 != 0) {
                    for (; uVar29 >> lVar49 == 0; lVar49 = lVar49 + -1) {
                    }
                  }
                  iVar38 = 1 << ((byte)lVar49 & 0x1f);
                }
                if (((int)uVar35 < 1) || (iVar38 <= *(int *)(lVar37 + 0x430))) {
                  uVar19 = *(int *)(lVar37 + 0x430) - 1U & uVar19;
                  puVar27[7] = uVar19;
                  puVar32 = *(ulonglong **)(lVar37 + 0x428);
                  if (*(ulonglong **)(lVar37 + 0x428) == (ulonglong *)0x0) {
                    puVar32 = local_240;
                  }
                  if (puVar32 == (ulonglong *)0x0) {
                    puVar32 = local_1b8;
                  }
                  puVar27[6] = *(undefined4 *)
                                ((longlong)puVar32 +
                                ((longlong)*(int *)(lVar37 + 0x430) - 1U & (longlong)(int)uVar19) *
                                4);
                  puVar44 = *(ulonglong **)(lVar37 + 0x428);
                  if (*(ulonglong **)(lVar37 + 0x428) == (ulonglong *)0x0) {
                    puVar44 = local_240;
                  }
                  if (puVar44 == (ulonglong *)0x0) {
                    puVar44 = local_1b8;
                  }
                  puVar32 = (ulonglong *)
                            ((longlong)*(int *)(lVar37 + 0x430) - 1U & (longlong)(int)uVar19);
                  *(int *)((longlong)puVar44 + (longlong)puVar32 * 4) = iVar17;
                  in_R10 = local_240;
                }
                else {
                  *(int *)(lVar37 + 0x430) = iVar38;
                  FUN_144adb3b2(local_218);
                  iVar17 = (int)local_230;
                }
LAB_14320ad46:
                lVar37 = *puVar40 + (longlong)iVar17 * 0x20;
                uVar35 = (uint)local_1f8;
LAB_14320ad60:
                lVar49 = local_228;
                puVar40 = local_248;
                puVar57 = (ulonglong *)(lVar37 + 0x10);
                uVar29 = *puVar57;
                puVar44 = local_250;
                if (uVar29 == 0) {
                  local_128[0] = *(longlong *)
                                  (*(longlong *)(local_228 + 0x168) + (longlong)(int)uVar35 * 8);
                  local_128[1] = *(undefined8 *)
                                  (*(longlong *)(local_228 + 0x168) + (longlong)(int)uVar18 * 8);
                  puVar43 = (undefined8 *)
                            (*(longlong *)(local_228 + 0xe0) + 7U & 0xfffffffffffffff8);
                  puVar21 = puVar43 + 9;
                  if (*(undefined8 **)(local_228 + 0xe8) < puVar21) {
                    puVar32 = (ulonglong *)0x0;
                    FUN_140023dd8(local_248,0x50);
                    puVar43 = (undefined8 *)(*puVar40 + 7 & 0xfffffffffffffff8);
                    puVar21 = puVar43 + 9;
                  }
                  *(undefined8 **)(lVar49 + 0xe0) = puVar21;
                  *puVar43 = 0;
                  puVar43[1] = 0;
                  *(undefined4 *)(puVar43 + 2) = 0xffffffff;
                  puVar32 = (ulonglong *)CONCAT71((int7)((ulonglong)puVar32 >> 8),1);
                  *(undefined1 *)((longlong)puVar43 + 0x14) = 1;
                  *(undefined4 *)(puVar43 + 3) = 0xffffffff;
                  *(undefined1 *)((longlong)puVar43 + 0x1c) = 1;
                  puVar43[4] = 0;
                  puVar43[5] = 0;
                  puVar43[6] = 0;
                  puVar43[7] = 0;
                  *(undefined4 *)(puVar43 + 8) = 1;
                  *(undefined1 *)((longlong)puVar43 + 0x44) = 3;
                  *(char *)((longlong)puVar43 + 0x45) = (char)local_250;
                  *(undefined2 *)((longlong)puVar43 + 0x46) = 0;
                  *puVar57 = (ulonglong)puVar43;
                  uVar35 = *(uint *)(lVar49 + 0x470);
                  *(uint *)(lVar49 + 0x470) = uVar35 + 1;
                  if (*(uint *)(lVar49 + 0x474) < uVar35 + 1) {
                    puVar32 = (ulonglong *)(ulonglong)uVar35;
                    FUN_144adb638(local_200,puVar32);
                  }
                  *(ulonglong *)(*local_200 + (longlong)(int)uVar35 * 8) = *puVar57;
                  lVar37 = 0;
                  puVar44 = local_250;
                  do {
                    lVar49 = *(longlong *)((longlong)local_128 + lVar37);
                    uVar35 = *(uint *)(lVar49 + 0x198);
                    *(uint *)(lVar49 + 0x198) = uVar35 + 1;
                    if (*(uint *)(lVar49 + 0x19c) < uVar35 + 1) {
                      puVar32 = (ulonglong *)(ulonglong)uVar35;
                      FUN_144adb638((longlong *)(lVar49 + 400),puVar32);
                      puVar44 = local_250;
                    }
                    uVar29 = *puVar57;
                    *(ulonglong *)(*(longlong *)(lVar49 + 400) + (longlong)(int)uVar35 * 8) = uVar29
                    ;
                    lVar37 = lVar37 + 8;
                  } while (lVar37 != 0x10);
                }
                uVar35 = *(uint *)(uVar29 + 0x28);
                *(uint *)(uVar29 + 0x28) = uVar35 + 1;
                if (*(uint *)(uVar29 + 0x2c) < uVar35 + 1) {
                  puVar32 = (ulonglong *)(ulonglong)uVar35;
                  FUN_144adb766(uVar29 + 0x20,puVar32);
                  puVar44 = local_250;
                }
                lVar37 = *(longlong *)(uVar29 + 0x20);
                *(ulonglong *)(lVar37 + (longlong)(int)uVar35 * 0x10) = uVar41;
                *(ulonglong **)(lVar37 + 8 + (longlong)(int)uVar35 * 0x10) = local_258;
                *(undefined1 *)(uVar29 + 0x46) = 1;
                bVar50 = (byte)puVar44;
                while (param_1 = local_228, bVar50 != 0) {
                  uVar41 = *puVar57;
                  lVar37 = *(longlong *)
                            (*(longlong *)(local_228 + 0x168) +
                            (longlong)
                            *(int *)(*(longlong *)
                                      (*(longlong *)(local_228 + 0x168) +
                                      (longlong)
                                      *(int *)((longlong)&local_108 +
                                              (ulonglong)
                                              ((byte)(-(byte)puVar44 & (byte)puVar44) == 2) * 4 + 4)
                                      * 8) + 0x48) * 8);
                  bVar50 = *(byte *)(lVar37 + 0x130);
                  uVar35 = *(uint *)(*(longlong *)(lVar37 + 0x128) + 0x2c);
                  uVar29 = (ulonglong)(*(char *)(*(longlong *)(lVar37 + 0x128) + 0x2b) == '\x02');
                  uVar18 = *(uint *)(uVar41 + 0x10 + uVar29 * 8);
                  puVar32 = (ulonglong *)(ulonglong)uVar18;
                  bVar51 = *(byte *)(uVar41 + 0x14 + uVar29 * 8);
                  if ((uVar18 != uVar35) || (bVar51 != bVar50)) {
                    bVar14 = bVar50;
                    if (bVar51 < bVar50) {
                      bVar14 = bVar51;
                    }
                    if ((uVar35 <= uVar18) && (bVar50 <= bVar51)) {
                      puVar40 = (ulonglong *)(lVar37 + 0xf8);
                      puVar32 = (ulonglong *)(longlong)*(int *)(lVar37 + 0x120);
                      uVar18 = *(int *)(lVar37 + 0x120) + 1;
                      *(uint *)(lVar37 + 0x120) = uVar18;
                      if (*(uint *)(lVar37 + 0x124) < uVar18) {
                        local_258 = puVar40;
                        local_250 = puVar44;
                        local_238 = puVar31;
                        local_230 = puVar32;
                        FUN_144adb9c0(puVar40,puVar32);
                        puVar40 = local_258;
                        puVar32 = local_230;
                        puVar44 = local_250;
                        puVar31 = local_238;
                      }
                      if (*(ulonglong **)(lVar37 + 0x118) != (ulonglong *)0x0) {
                        puVar40 = *(ulonglong **)(lVar37 + 0x118);
                      }
                      puVar40[(longlong)puVar32] = uVar41;
                      *(ulonglong *)(uVar41 + 0x10 + uVar29 * 8) =
                           (ulonglong)CONCAT14(bVar14,uVar35);
                    }
                  }
                  iVar17 = (int)puVar44 + -1;
                  bVar50 = (byte)iVar17 & (byte)puVar44;
                  puVar44 = (ulonglong *)(ulonglong)CONCAT31((int3)((uint)iVar17 >> 8),bVar50);
                }
              }
              else {
                uVar52 = uVar18 + 1;
                uVar29 = (ulonglong)uVar52;
                if (uVar52 < uVar35 + 1) {
                  uVar18 = uVar35;
                }
                uVar35 = uStack_100;
                if (uVar30 < uStack_100) {
                  uVar35 = uVar30;
                }
                puVar32 = *(ulonglong **)(param_1 + 0x168);
                local_1f8 = (ulonglong *)(longlong)(int)uVar18;
                if (uVar18 < uVar35) {
                  uVar29 = puVar32[*(int *)(puVar32[(longlong)local_1f8] + 0x4c)];
                  uVar6 = (undefined3)(uVar52 >> 8);
                  if (bVar51 == 2) {
                    uVar26 = *(ulonglong *)(uVar29 + 0x180);
                    in_R10 = (ulonglong *)(ulonglong)CONCAT31(uVar6,bVar50);
                    if (uVar26 == 0) {
                      puVar43 = (undefined8 *)
                                (*(longlong *)(param_1 + 0xe0) + 7U & 0xfffffffffffffff8);
                      puVar21 = puVar43 + 9;
                      if (*(undefined8 **)(param_1 + 0xe8) < puVar21) {
                        FUN_140023dd8(local_248,0x50);
                        in_R10 = (ulonglong *)
                                 CONCAT71((int7)((ulonglong)in_R10 >> 8),local_258._0_1_);
                        puVar43 = (undefined8 *)(*puVar40 + 7 & 0xfffffffffffffff8);
                        puVar21 = puVar43 + 9;
                      }
                      *(undefined8 **)(param_1 + 0xe0) = puVar21;
                      uVar53 = *(undefined1 *)(uVar29 + 0x2b);
                      *puVar43 = 0;
                      puVar43[1] = 0;
                      puVar32 = (ulonglong *)&DAT_ffffffff;
                      *(undefined4 *)(puVar43 + 2) = 0xffffffff;
                      *(undefined1 *)((longlong)puVar43 + 0x14) = 1;
                      *(undefined4 *)(puVar43 + 3) = 0xffffffff;
                      *(undefined1 *)((longlong)puVar43 + 0x1c) = 1;
                      puVar43[4] = 0;
                      puVar43[5] = 0;
                      puVar43[6] = 0;
                      puVar43[7] = 0;
                      *(undefined4 *)(puVar43 + 8) = 1;
                      *(undefined1 *)((longlong)puVar43 + 0x44) = uVar53;
                      *(undefined2 *)((longlong)puVar43 + 0x45) = 2;
                      *(undefined1 *)((longlong)puVar43 + 0x47) = 0;
                      *(undefined8 **)(uVar29 + 0x180) = puVar43;
                      uVar35 = *(uint *)(param_1 + 0x470);
                      *(uint *)(param_1 + 0x470) = uVar35 + 1;
                      if (*(uint *)(param_1 + 0x474) < uVar35 + 1) {
                        puVar32 = (ulonglong *)(ulonglong)uVar35;
                        FUN_144adb638(local_200,puVar32);
                        in_R10 = (ulonglong *)
                                 CONCAT71((int7)((ulonglong)in_R10 >> 8),local_258._0_1_);
                      }
                      lVar37 = *local_200;
                      uVar26 = *(ulonglong *)(uVar29 + 0x180);
LAB_14320a4ee:
                      *(ulonglong *)(lVar37 + (longlong)(int)uVar35 * 8) = uVar26;
                    }
                  }
                  else {
                    in_R10 = (ulonglong *)(ulonglong)CONCAT31(uVar6,bVar50);
                    if (((uint)local_250 & 0xff) == 3) {
                      uVar26 = *(ulonglong *)(uVar29 + 0x188);
                      if (uVar26 == 0) {
                        puVar43 = (undefined8 *)
                                  (*(longlong *)(param_1 + 0xe0) + 7U & 0xfffffffffffffff8);
                        puVar21 = puVar43 + 9;
                        if (*(undefined8 **)(param_1 + 0xe8) < puVar21) {
                          FUN_140023dd8(local_248,0x50);
                          in_R10 = (ulonglong *)
                                   CONCAT71((int7)((ulonglong)in_R10 >> 8),local_258._0_1_);
                          puVar43 = (undefined8 *)(*puVar40 + 7 & 0xfffffffffffffff8);
                          puVar21 = puVar43 + 9;
                        }
                        *(undefined8 **)(param_1 + 0xe0) = puVar21;
                        uVar53 = *(undefined1 *)(uVar29 + 0x2b);
                        *puVar43 = 0;
                        puVar43[1] = 0;
                        puVar32 = (ulonglong *)&DAT_ffffffff;
                        *(undefined4 *)(puVar43 + 2) = 0xffffffff;
                        *(undefined1 *)((longlong)puVar43 + 0x14) = 1;
                        *(undefined4 *)(puVar43 + 3) = 0xffffffff;
                        *(undefined1 *)((longlong)puVar43 + 0x1c) = 1;
                        puVar43[4] = 0;
                        puVar43[5] = 0;
                        puVar43[6] = 0;
                        puVar43[7] = 0;
                        *(undefined4 *)(puVar43 + 8) = 1;
                        *(undefined1 *)((longlong)puVar43 + 0x44) = uVar53;
                        *(undefined2 *)((longlong)puVar43 + 0x45) = 3;
                        *(undefined1 *)((longlong)puVar43 + 0x47) = 0;
                        *(undefined8 **)(uVar29 + 0x188) = puVar43;
                        uVar35 = *(uint *)(param_1 + 0x470);
                        *(uint *)(param_1 + 0x470) = uVar35 + 1;
                        if (*(uint *)(param_1 + 0x474) < uVar35 + 1) {
                          puVar32 = (ulonglong *)(ulonglong)uVar35;
                          FUN_144adb638(local_200,puVar32);
                          in_R10 = (ulonglong *)
                                   CONCAT71((int7)((ulonglong)in_R10 >> 8),local_258._0_1_);
                        }
                        lVar37 = *local_200;
                        uVar26 = *(ulonglong *)(uVar29 + 0x188);
                        goto LAB_14320a4ee;
                      }
                    }
                    else {
                      uVar26 = uVar29 + 0x138;
                      if (*(char *)(uVar29 + 0x17e) == '\0') {
                        uVar35 = *(int *)(uVar29 + 0x88) + *(int *)(uVar29 + 0x78);
                        if ((int)uVar35 < 0) {
LAB_14320bbfb:
                    /* WARNING: Subroutine does not return */
                          FUN_1456afac4(uVar35);
                        }
                        local_238 = puVar31;
                        if (*(int *)(uVar29 + 0x164) < (int)uVar35) {
                          puVar32 = (ulonglong *)(ulonglong)uVar35;
                          FUN_144adac32(uVar29 + 0x158,puVar32);
                          in_R10 = (ulonglong *)
                                   CONCAT71((int7)((ulonglong)in_R10 >> 8),local_258._0_1_);
                        }
                        if (*(int *)(uVar29 + 0x174) < (int)uVar35) {
                          puVar32 = (ulonglong *)(ulonglong)uVar35;
                          FUN_144adad0c(uVar29 + 0x168,puVar32);
                          in_R10 = (ulonglong *)
                                   CONCAT71((int7)((ulonglong)in_R10 >> 8),local_258._0_1_);
                        }
                        uVar35 = *(uint *)(param_1 + 0x470);
                        *(uint *)(param_1 + 0x470) = uVar35 + 1;
                        if (*(uint *)(param_1 + 0x474) < uVar35 + 1) {
                          puVar32 = (ulonglong *)(ulonglong)uVar35;
                          FUN_144adb638(local_200,puVar32);
                          in_R10 = (ulonglong *)
                                   CONCAT71((int7)((ulonglong)in_R10 >> 8),local_258._0_1_);
                        }
                        *(ulonglong *)(*local_200 + (longlong)(int)uVar35 * 8) = uVar26;
                        puVar31 = local_238;
                      }
                    }
                  }
                }
                else {
                  puVar40 = puVar32 + *(int *)(puVar32[(longlong)local_1f8] + 0x48);
                  puVar32 = local_248;
                  uVar26 = FUN_14178e9d4(*puVar40,local_248,local_200);
                  in_R10 = (ulonglong *)CONCAT71((int7)(uVar29 >> 8),local_258._0_1_);
                }
                uVar35 = *(uint *)(uVar26 + 0x28);
                *(uint *)(uVar26 + 0x28) = uVar35 + 1;
                if (*(uint *)(uVar26 + 0x2c) < uVar35 + 1) {
                  puVar32 = (ulonglong *)(ulonglong)uVar35;
                  FUN_144adb766(uVar26 + 0x20,puVar32);
                  in_R10 = (ulonglong *)CONCAT71((int7)((ulonglong)in_R10 >> 8),local_258._0_1_);
                }
                lVar37 = *(longlong *)(uVar26 + 0x20);
                *(ulonglong *)(lVar37 + (longlong)(int)uVar35 * 0x10) = uVar41;
                *(ulonglong **)(lVar37 + 8 + (longlong)(int)uVar35 * 0x10) = puVar44;
                *(undefined1 *)(uVar26 + 0x46) = 1;
                puVar40 = (ulonglong *)(uVar26 + 0x10);
                bVar50 = 3;
                puVar44 = local_250;
                do {
                  puVar57 = local_248;
                  bVar51 = -bVar50 & bVar50;
                  if (((byte)in_R10 == bVar51) && ((byte)puVar44 == 3)) {
                    uVar41 = *(ulonglong *)
                              (*(longlong *)(param_1 + 0x168) +
                              (longlong)
                              *(int *)(*(longlong *)
                                        (*(longlong *)(param_1 + 0x168) + (longlong)local_1f8 * 8) +
                                      0x4c) * 8);
                    puVar33 = *(ulonglong **)(uVar41 + 0x1a0);
                    if (puVar33 == (ulonglong *)0x0) {
                      puVar33 = (ulonglong *)
                                (*(longlong *)(param_1 + 0xe0) + 7U & 0xfffffffffffffff8);
                      puVar32 = puVar33 + 8;
                      if (*(ulonglong **)(param_1 + 0xe8) < puVar32) {
                        FUN_140023dd8(local_248,0x48);
                        in_R10 = (ulonglong *)
                                 CONCAT71((int7)((ulonglong)in_R10 >> 8),local_258._0_1_);
                        puVar33 = (ulonglong *)(*puVar57 + 7 & 0xfffffffffffffff8);
                        puVar32 = puVar33 + 8;
                        puVar44 = local_250;
                      }
                      *local_248 = (ulonglong)puVar32;
                      puVar33[4] = 0;
                      puVar33[5] = 0x400000000;
                      puVar33[6] = uVar41;
                      *(undefined1 *)(puVar33 + 7) = 1;
                      *(ulonglong **)(uVar41 + 0x1a0) = puVar33;
                    }
                    bVar51 = (byte)puVar33[7];
                    uVar18 = *(uint *)(puVar33[6] + 0x2c);
                    uVar41 = (ulonglong)(*(char *)(puVar33[6] + 0x2b) == '\x02');
                    uVar35 = (uint)puVar40[uVar41];
                    puVar32 = (ulonglong *)(ulonglong)uVar35;
                    bVar14 = *(byte *)((longlong)puVar40 + uVar41 * 8 + 4);
                    local_208 = puVar33;
                    if ((uVar35 != uVar18) || (bVar14 != bVar51)) {
                      bVar2 = bVar51;
                      if (bVar14 < bVar51) {
                        bVar2 = bVar14;
                      }
                      local_1b0 = CONCAT44(local_1b0._4_4_,(uint)bVar2);
                      if ((uVar18 <= uVar35) && (bVar51 <= bVar14)) {
                        local_230 = (ulonglong *)(ulonglong)(uint)puVar33[5];
                        uVar35 = (uint)puVar33[5] + 1;
                        *(uint *)(puVar33 + 5) = uVar35;
                        if (*(uint *)((longlong)puVar33 + 0x2c) < uVar35) {
                          local_238 = puVar31;
                          FUN_144adb9c0(puVar33,local_230);
                          in_R10 = (ulonglong *)
                                   CONCAT71((int7)((ulonglong)in_R10 >> 8),local_258._0_1_);
                          puVar44 = local_250;
                          puVar31 = local_238;
                        }
                        puVar33 = puVar40 + uVar41;
                        puVar57 = local_208 + 4;
                        iVar17 = (int)local_230;
                        puVar32 = local_208;
LAB_143209d16:
                        if ((ulonglong *)*puVar57 != (ulonglong *)0x0) {
                          puVar32 = (ulonglong *)*puVar57;
                        }
                        puVar32[iVar17] = uVar26;
                        puVar32 = (ulonglong *)((ulonglong)uVar18 | (local_1b0 & 0xff) << 0x20);
                        *puVar33 = (ulonglong)puVar32;
                      }
                    }
                  }
                  else if ((bVar51 & (byte)puVar44) != 0) {
                    lVar37 = *(longlong *)
                              (*(longlong *)(local_228 + 0x168) +
                              (longlong)
                              *(int *)(*(longlong *)
                                        (*(longlong *)(local_228 + 0x168) +
                                        (longlong)
                                        *(int *)((longlong)&local_108 +
                                                (ulonglong)(bVar51 == 2) * 4 + 4) * 8) + 0x48) * 8);
                    bVar51 = *(byte *)(lVar37 + 0x130);
                    uVar18 = *(uint *)(*(longlong *)(lVar37 + 0x128) + 0x2c);
                    uVar41 = (ulonglong)(*(char *)(*(longlong *)(lVar37 + 0x128) + 0x2b) == '\x02');
                    uVar35 = (uint)puVar40[uVar41];
                    puVar32 = (ulonglong *)(ulonglong)uVar35;
                    bVar14 = *(byte *)((longlong)puVar40 + uVar41 * 8 + 4);
                    if ((uVar35 != uVar18) || (bVar14 != bVar51)) {
                      bVar2 = bVar51;
                      if (bVar14 < bVar51) {
                        bVar2 = bVar14;
                      }
                      local_1b0 = CONCAT44(local_1b0._4_4_,(uint)bVar2);
                      in_R10 = (ulonglong *)((ulonglong)in_R10 & 0xffffffff);
                      local_230 = puVar40;
                      if ((uVar18 <= uVar35) && (bVar51 <= bVar14)) {
                        puVar32 = (ulonglong *)(lVar37 + 0xf8);
                        iVar17 = *(int *)(lVar37 + 0x120);
                        *(uint *)(lVar37 + 0x120) = iVar17 + 1U;
                        if (*(uint *)(lVar37 + 0x124) < iVar17 + 1U) {
                          local_238 = puVar31;
                          local_208 = puVar32;
                          FUN_144adb9c0(puVar32,iVar17);
                          in_R10 = (ulonglong *)
                                   CONCAT71((int7)((ulonglong)in_R10 >> 8),local_258._0_1_);
                          puVar32 = local_208;
                          puVar44 = local_250;
                          puVar31 = local_238;
                        }
                        puVar33 = local_230 + uVar41;
                        puVar57 = (ulonglong *)(lVar37 + 0x118);
                        puVar40 = local_230;
                        goto LAB_143209d16;
                      }
                    }
                  }
                  bVar50 = bVar50 - 1 & bVar50;
                  param_1 = local_228;
                } while (bVar50 != 0);
              }
            }
            *(ulonglong **)(uVar22 + 0x138) = puVar39;
          }
        }
      }
      if (*(longlong *)(uVar22 + 0xa0) != 0) {
        uVar35 = *(uint *)(param_1 + 0x460);
        *(uint *)(param_1 + 0x460) = uVar35 + 1;
        if (*(uint *)(param_1 + 0x464) < uVar35 + 1) {
          puVar32 = (ulonglong *)(ulonglong)uVar35;
          FUN_14178f0c0(local_1d8,puVar32);
        }
        *(undefined8 *)(*local_1d8 + (longlong)(int)uVar35 * 8) = *(undefined8 *)(uVar22 + 0xa0);
        *(undefined8 *)(uVar22 + 0xa0) = 0;
      }
      puVar31 = puVar31 + 1;
    } while (puVar31 != local_1e0);
  }
  local_118 = (longlong *)0x0;
  local_110 = 0x100000000;
  iVar17 = *(int *)(param_1 + 0x470);
  local_178 = param_1;
  if (0 < iVar17) {
    cVar16 = *(char *)(param_1 + 0x520);
    cVar15 = FUN_1447e0190();
    uVar55 = (undefined4)CONCAT71((int7)((ulonglong)puVar32 >> 8),iVar17 == 1);
    iVar38 = 0;
    bVar58 = cVar16 == '\0';
    if (((!bVar58) && (iVar17 != 1)) && (cVar15 != '\0')) {
      iVar38 = DAT_14c8335d8;
      if (iVar17 <= DAT_14c8335d8) {
        iVar38 = iVar17;
      }
      bVar58 = false;
      uVar55 = 0;
    }
    local_1e0 = (ulonglong *)CONCAT44(local_1e0._4_4_,uVar55);
    lVar37 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    uVar35 = (uint)(*(undefined **)(lVar37 + 0x2c0) != &DAT_14c82ba00 ||
                   *(int *)(lVar37 + 0x2c8) == 0) + iVar38;
    if ((int)DAT_14c8c27ac < 1) {
      memset(&local_108,0,0x82);
      local_160 = (longlong *)((ulonglong)local_160 & 0xffffffff00000000);
      local_170 = (longlong *)((ulonglong)local_170 & 0xffffffff00000000);
      local_148 = 0;
      FUN_140e55932(&local_108,&local_160,&local_170,&local_148);
      uVar18 = local_148;
      local_260 = &local_138;
      local_268 = &local_12c;
      FUN_1457b80ec((ulonglong)local_170 & 0xffffffff,local_148,local_134,&local_150);
      DAT_14c8c27ac = uVar18;
      if ((0 < (int)local_12c) && (DAT_14c8c27ac = uVar18, (int)local_12c <= (int)uVar18)) {
        DAT_14c8c27ac = local_12c;
      }
    }
    uVar18 = DAT_14c8c27ac;
    if ((int)uVar35 < (int)DAT_14c8c27ac) {
      uVar18 = uVar35;
    }
    uVar35 = 1;
    if (1 < (int)uVar18) {
      uVar35 = uVar18;
    }
    FUN_14321a07a(local_128,0);
    local_110 = CONCAT44(local_110._4_4_,uVar35);
    if (local_110._4_4_ < uVar35) {
      FUN_14321a13e(local_128);
    }
    plVar42 = local_118;
    if (local_118 == (longlong *)0x0) {
      plVar42 = local_128;
    }
    FUN_14321a12f(plVar42);
    local_160 = local_118;
    if (local_118 == (longlong *)0x0) {
      local_160 = local_128;
    }
    uVar35 = (uint)local_110;
    local_158 = (uint)local_110;
    local_170 = &local_178;
    local_168 = local_228;
    cVar16 = FUN_1447e0190();
    iVar38 = 0;
    if (((!bVar58 && (char)local_1e0 == '\0') && cVar16 == '\x01') &&
       (iVar38 = DAT_14c8335d8, iVar17 <= DAT_14c8335d8)) {
      iVar38 = iVar17;
    }
    uVar18 = (uint)(*(undefined **)(lVar37 + 0x2c0) != &DAT_14c82ba00 ||
                   *(int *)(lVar37 + 0x2c8) == 0) + iVar38;
    if ((int)DAT_14c8c27ac < 1) {
      memset(&local_108,0,0x82);
      local_148 = 0;
      local_150 = (undefined8 *)((ulonglong)local_150 & 0xffffffff00000000);
      local_12c = 0;
      FUN_140e55932(&local_108,&local_148,&local_150,&local_12c);
      uVar30 = local_12c;
      local_260 = (uint *)&local_139;
      local_268 = &local_138;
      FUN_1457b80ec((ulonglong)local_150 & 0xffffffff,local_12c,&local_12d,local_134);
      DAT_14c8c27ac = uVar30;
      if ((0 < (int)local_138) && (DAT_14c8c27ac = uVar30, (int)local_138 <= (int)uVar30)) {
        DAT_14c8c27ac = local_138;
      }
    }
    param_1 = local_228;
    uVar30 = DAT_14c8c27ac;
    if ((int)uVar18 < (int)DAT_14c8c27ac) {
      uVar30 = uVar18;
    }
    iVar38 = 1;
    if ((int)uVar30 < 2) {
      uVar30 = 1;
    }
    uVar18 = uVar35;
    if ((int)uVar30 < (int)uVar35) {
      uVar18 = uVar30;
    }
    if (uVar35 == 0) {
      uVar18 = uVar30;
    }
    if ((int)uVar18 < 2) {
      iVar38 = 0;
      do {
        FUN_14321a1a4(&local_170,&local_160,0,iVar38);
        iVar38 = iVar38 + 1;
      } while (iVar17 != iVar38);
    }
    else {
      iVar47 = uVar18 * 6;
      iVar48 = -6;
      iVar20 = iVar17;
      do {
        if (iVar47 <= iVar17) {
          iVar38 = (iVar17 + iVar47 + -1) / iVar47;
          iVar20 = (iVar38 + iVar17 + -1) / iVar38;
          if ((int)uVar18 <= iVar20) break;
        }
        iVar47 = iVar47 - uVar18;
        iVar48 = iVar48 + 1;
      } while (iVar48 != 0);
      uVar18 = uVar18 - 1;
      lVar37 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      uVar53 = 6;
      if ((*(byte *)(lVar37 + 0xc60) & 0x37) != 0) {
        uVar53 = 0;
      }
      FUN_144a85b52(&local_148,1);
      puVar21 = (undefined8 *)(lVar37 + 0x308);
      puVar45 = (uint *)*puVar21;
      if (puVar45 != (uint *)0x0) goto LAB_14320b85d;
      while( true ) {
        uVar35 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar35 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar35 | 1;
          __tlregdtor(&LAB_1432149cc);
        }
        lVar37 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar27 = *(undefined4 **)(lVar37 + 0x310);
        *(undefined8 *)(lVar37 + 0x310) = 0;
        if (puVar27 == (undefined4 *)0x0) {
          puVar27 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar27 = 0xffffffff;
        *(undefined4 **)(puVar27 + 0x10) = puVar27 + 0x16;
        puVar27[0x12] = 0;
        *puVar21 = puVar27;
        FUN_140217a48(puVar21);
        puVar45 = (uint *)*puVar21;
LAB_14320b85d:
        puVar43 = (undefined8 *)(*(longlong *)(puVar45 + 0x10) + 0x3fU & 0xffffffffffffffc0);
        puVar25 = (uint *)(puVar43 + 0x10);
        uVar35 = puVar45[0x12];
        if (puVar25 <= puVar45 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar45 + 0x10) = puVar45 + 0x4000;
          LOCK();
          uVar30 = *puVar45;
          *puVar45 = *puVar45 + uVar35 + 1;
          UNLOCK();
          if ((uVar30 ^ uVar35) != 0xffffffff) break;
          puVar45 = (uint *)*puVar21;
          *puVar45 = 0xffffffff;
          *(uint **)(puVar45 + 0x10) = puVar45 + 0x16;
          puVar45[0x12] = 0;
          *puVar21 = puVar45;
          puVar43 = (undefined8 *)((longlong)puVar45 + 0x97U & 0xffffffffffffffc0);
          puVar25 = (uint *)(puVar43 + 0x10);
          uVar35 = 0;
          if (puVar25 <= puVar45 + 0x4000) {
            uVar35 = 1;
            goto LAB_14320b8e0;
          }
        }
      }
      uVar35 = uVar35 + 1;
LAB_14320b8e0:
      *(uint **)(puVar45 + 0x10) = puVar25;
      puVar45[0x12] = uVar35;
      *puVar43 = &PTR_FUN_149e002e8;
      *(undefined4 *)(puVar43 + 1) = 0;
      *puVar43 = &PTR_FUN_14a38ba10;
      puVar43[3] = L"FRDGBuilder::CreatePassBarriers";
      *(undefined4 *)(puVar43 + 4) = 0;
      *(undefined4 *)(puVar43 + 5) = 0;
      *(int *)((longlong)puVar43 + 0x2c) = iVar17;
      *(int *)(puVar43 + 6) = iVar38;
      *(int *)((longlong)puVar43 + 0x34) = iVar20;
      puVar43[7] = &local_160;
      puVar43[8] = &local_170;
      puVar43[9] = &local_148;
      *(undefined1 *)(puVar43 + 10) = uVar53;
      puVar43[0xb] = 0;
      puVar43[0xc] = 0;
      *(int *)((longlong)puVar43 + 0x24) = iVar20;
      *(uint *)(puVar43 + 0xc) = uVar18;
      FUN_14321ad2e(puVar43 + 0xb);
      FUN_14321acf8(puVar43[0xb],uVar18);
      param_1 = local_228;
      if (puVar43 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar43 + 1) = *(int *)(puVar43 + 1) + 1;
        UNLOCK();
      }
      local_150 = puVar43;
      FUN_14321a6d2(&local_150);
      uStack_fc = uStack_fc & 0xffffff00;
      local_108 = puVar43;
      uStack_100 = uVar18;
      cVar16 = FUN_14321a750(&local_108,1);
      if (cVar16 == '\0') {
        (**(code **)(*(longlong *)CONCAT44(uStack_144,local_148) + 0x20))
                  ((longlong *)CONCAT44(uStack_144,local_148),0xffffffff,0);
      }
      FUN_14321aafc(&local_108);
      FUN_144a75412(&local_148);
    }
  }
  *(undefined4 *)(param_1 + 0x470) = 0;
  if (*(int *)(param_1 + 0x474) < 0) {
    FUN_14178ee50(param_1 + 0x468,0);
  }
  plVar42 = local_118;
  if (local_118 == (longlong *)0x0) {
    plVar42 = local_128;
  }
  FUN_14321a07a(plVar42,local_110 & 0xffffffff);
  if ((local_80 ^ (ulonglong)auStack_288) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x00014320ba72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    TlsSetValue(DAT_14ca954e4,local_180);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_80 ^ (ulonglong)auStack_288);
}



// FUNCTION 14320bc04 FUN_14320bc04 body=2696 status=ok
// SIG undefined FUN_14320bc04(void)

void FUN_14320bc04(longlong param_1)

{
  uint *puVar1;
  char cVar2;
  undefined1 uVar3;
  ushort uVar4;
  short sVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  code *pcVar9;
  byte bVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined1 *puVar13;
  undefined8 uVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong *plVar18;
  int iVar19;
  ulonglong uVar20;
  int iVar21;
  longlong lVar22;
  longlong lVar23;
  undefined8 uVar24;
  longlong *plVar25;
  byte bVar26;
  bool bVar27;
  undefined1 auStack_338 [40];
  longlong *local_310;
  longlong local_308;
  LPVOID local_300;
  longlong *local_2f8;
  undefined1 local_2f0 [8];
  undefined1 *local_2e8;
  undefined8 local_2e0;
  undefined1 local_2d8 [64];
  undefined1 *local_298;
  undefined8 local_290;
  int local_288;
  longlong local_280;
  undefined1 local_278 [232];
  longlong local_190;
  undefined1 local_188 [7];
  undefined1 uStack_181;
  undefined3 uStack_180;
  undefined8 uStack_17d;
  int iStack_175;
  undefined2 uStack_171;
  longlong *local_b0;
  undefined8 uStack_a8;
  byte local_a0;
  uint local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  uint local_80;
  undefined4 uStack_7c;
  undefined1 uStack_78;
  undefined1 uStack_77;
  undefined1 uStack_76;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_338;
  if (*(int *)(param_1 + 0x160) != 0) {
    local_300 = TlsGetValue(DAT_14ca954e4);
    TlsSetValue(DAT_14ca954e4,(LPVOID)(param_1 + 0xa8));
    local_308 = param_1;
    if ((longlong)*(int *)(param_1 + 0x160) != 0) {
      plVar25 = *(longlong **)(param_1 + 0x158);
      plVar18 = plVar25 + *(int *)(param_1 + 0x160);
      local_310 = plVar18;
      do {
        plVar17 = (longlong *)*plVar25;
        if ((*(byte *)(plVar17 + 7) & 0x20) == 0) {
          local_2e8 = (undefined1 *)0x0;
          local_2e0 = 0x800000000;
          local_298 = (undefined1 *)0x0;
          local_290 = 0x800000000;
          local_288 = 0;
          local_280 = 0;
          lVar23 = plVar17[3];
          iVar6 = *(int *)(lVar23 + 0x78);
          local_2f8 = plVar17;
          if (iVar6 != 0) {
            iVar21 = 0;
            do {
              uVar11 = local_2e0;
              uVar20 = (ulonglong)
                       *(ushort *)(*(longlong *)(plVar17[3] + 0x70) + (longlong)iVar21 * 4);
              lVar23 = *(longlong *)(plVar17[2] + uVar20);
              iVar19 = local_288;
              if ((lVar23 != 0) && ((*(byte *)(plVar17[2] + 8 + uVar20) & 2) != 0)) {
                if (local_280 == 0) {
                  bVar26 = *(byte *)(*(longlong *)(lVar23 + 0x20) + 0x8a);
                  lVar22 = (longlong)(int)local_2e0;
                  uVar12 = (int)local_2e0 + 1;
                  local_2e0 = CONCAT44(local_2e0._4_4_,uVar12);
                  if (local_2e0._4_4_ < uVar12) {
                    FUN_14726c186(local_2f0,uVar11 & 0xffffffff);
                  }
                  puVar13 = local_2e8;
                  if (local_2e8 == (undefined1 *)0x0) {
                    puVar13 = local_2f0;
                  }
                  puVar13[lVar22] = bVar26;
                  uVar11 = local_290;
                  lVar22 = (longlong)(int)local_290;
                  uVar12 = (int)local_290 + 1;
                  local_290 = CONCAT44(local_290._4_4_,uVar12);
                  if (local_290._4_4_ < uVar12) {
                    FUN_1474146d2(local_2d8,uVar11 & 0xffffffff);
                  }
                  puVar13 = local_298;
                  if (local_298 == (undefined1 *)0x0) {
                    puVar13 = local_2d8;
                  }
                  *(longlong *)(puVar13 + lVar22 * 8) = lVar23;
                  iVar19 = bVar26 + 1;
                  if (iVar19 <= local_288) {
                    iVar19 = local_288;
                  }
                }
                else {
                  lVar22 = FUN_147413418(local_280,*(longlong *)(lVar23 + 0x20) + 0x10);
                  puVar13 = local_298;
                  if (local_298 == (undefined1 *)0x0) {
                    puVar13 = local_2d8;
                  }
                  *(longlong *)(puVar13 + (*(uint *)(lVar22 + 0x10) >> 1 & 0x1f8)) = lVar23;
                  iVar19 = local_288;
                }
              }
              local_288 = iVar19;
              iVar21 = iVar21 + 1;
            } while (iVar6 != iVar21);
            lVar23 = plVar17[3];
          }
          iVar6 = *(int *)(lVar23 + 0x68);
          if (iVar6 != 0) {
            iVar21 = 0;
            do {
              uVar11 = local_2e0;
              uVar20 = (ulonglong)
                       *(ushort *)(*(longlong *)(plVar17[3] + 0x60) + (longlong)iVar21 * 4);
              lVar23 = *(longlong *)(plVar17[2] + uVar20);
              iVar19 = local_288;
              if ((lVar23 != 0) && ((*(byte *)(plVar17[2] + 8 + uVar20) & 2) != 0)) {
                lVar23 = *(longlong *)(lVar23 + 0x10);
                if (local_280 == 0) {
                  bVar26 = *(byte *)(*(longlong *)(lVar23 + 0x20) + 0x8a);
                  lVar22 = (longlong)(int)local_2e0;
                  uVar12 = (int)local_2e0 + 1;
                  local_2e0 = CONCAT44(local_2e0._4_4_,uVar12);
                  if (local_2e0._4_4_ < uVar12) {
                    FUN_14726c186(local_2f0,uVar11 & 0xffffffff);
                  }
                  puVar13 = local_2e8;
                  if (local_2e8 == (undefined1 *)0x0) {
                    puVar13 = local_2f0;
                  }
                  puVar13[lVar22] = bVar26;
                  uVar11 = local_290;
                  lVar22 = (longlong)(int)local_290;
                  uVar12 = (int)local_290 + 1;
                  local_290 = CONCAT44(local_290._4_4_,uVar12);
                  if (local_290._4_4_ < uVar12) {
                    FUN_1474146d2(local_2d8,uVar11 & 0xffffffff);
                  }
                  puVar13 = local_298;
                  if (local_298 == (undefined1 *)0x0) {
                    puVar13 = local_2d8;
                  }
                  *(longlong *)(puVar13 + lVar22 * 8) = lVar23;
                  iVar19 = bVar26 + 1;
                  if (iVar19 <= local_288) {
                    iVar19 = local_288;
                  }
                }
                else {
                  lVar22 = FUN_147413418(local_280,*(longlong *)(lVar23 + 0x20) + 0x10);
                  puVar13 = local_298;
                  if (local_298 == (undefined1 *)0x0) {
                    puVar13 = local_2d8;
                  }
                  *(longlong *)(puVar13 + (*(uint *)(lVar22 + 0x10) >> 1 & 0x1f8)) = lVar23;
                  iVar19 = local_288;
                }
              }
              local_288 = iVar19;
              iVar21 = iVar21 + 1;
            } while (iVar6 != iVar21);
          }
          uStack_17d._5_1_ = '\0';
          uVar4 = *(ushort *)(local_2f8[3] + 0x88);
          if ((ulonglong)uVar4 != 0xffff) {
            lVar23 = local_2f8[2];
            lVar22 = 0x15;
            do {
              *(undefined8 *)(local_188 + lVar22 + 3) = 0;
              *(undefined8 *)((longlong)&uStack_17d + lVar22) = 0;
              *(undefined4 *)((longlong)&iStack_175 + lVar22) = 0xffffffff;
              *(undefined2 *)((longlong)&uStack_171 + lVar22) = 0;
              lVar22 = lVar22 + 0x18;
            } while (lVar22 != 0xd5);
            lVar23 = lVar23 + (ulonglong)uVar4;
            local_9c = 0;
            local_b0 = (longlong *)0x0;
            uStack_a8 = 0;
            local_a0 = 0;
            local_98 = 0xffffffff;
            uStack_94 = 0xffffffff;
            uStack_90 = 0xffffffff;
            uStack_8c = 0xffffffff;
            local_88 = 0;
            local_80 = local_80 & 0xffffff00;
            uStack_76 = 0;
            uStack_78 = 0;
            uStack_77 = 0;
            lVar22 = 0x15;
            do {
              lVar7 = *(longlong *)(lVar23 + -0x15 + lVar22);
              if (lVar7 == 0) break;
              lVar8 = *(longlong *)(lVar23 + -0xd + lVar22);
              cVar2 = *(char *)(lVar23 + -5 + lVar22);
              uVar3 = *(undefined1 *)(lVar23 + -4 + lVar22);
              sVar5 = *(short *)(lVar23 + -3 + lVar22);
              plVar18 = *(longlong **)(lVar7 + 0x10);
              uVar14 = *(undefined8 *)(lVar7 + 0x60);
              *(longlong **)(local_188 + lVar22 + 3) = plVar18;
              if (lVar8 != 0 && lVar8 != lVar7) {
                uVar24 = *(undefined8 *)(lVar8 + 0x10);
              }
              else {
                uVar24 = 0;
              }
              bVar26 = ((uint)uVar14 >> 0xc & 1) == 0;
              if (lVar8 != 0 && lVar8 != lVar7) {
                bVar26 = 2;
              }
              *(undefined8 *)((longlong)&uStack_17d + lVar22) = uVar24;
              *(int *)((longlong)&iStack_175 + lVar22) = (int)sVar5;
              *(undefined1 *)((longlong)&uStack_171 + lVar22) = uVar3;
              *(byte *)((longlong)&uStack_171 + lVar22 + 1) = cVar2 << 2 | bVar26;
              pcVar9 = *(code **)(*plVar18 + 8);
              if (pcVar9 != FUN_1447d3e98) {
                (*pcVar9)();
              }
              lVar22 = lVar22 + 0x18;
            } while (lVar22 != 0xd5);
            lVar22 = *(longlong *)(lVar23 + 0xc0);
            if (lVar22 != 0) {
              local_9c = *(uint *)(lVar23 + 0xd4);
              bVar26 = (*(uint *)(lVar22 + 0x60) >> 0xc & 1) == 0;
              lVar7 = *(longlong *)(lVar23 + 200);
              if (lVar7 != lVar22 && lVar7 != 0) {
                bVar26 = 2;
              }
              bVar10 = (byte)(local_9c & 0xf0);
              if ((local_9c & 0xf0) != 0) {
                bVar10 = bVar26;
              }
              local_b0 = *(longlong **)(lVar22 + 0x10);
              if (lVar7 != lVar22 && lVar7 != 0) {
                uStack_a8 = *(undefined8 *)(lVar7 + 0x10);
              }
              else {
                uStack_a8 = 0;
              }
              bVar26 = bVar26 << 4;
              if ((local_9c & 0xf) == 0) {
                bVar26 = 0;
              }
              local_a0 = bVar26 | *(char *)(lVar23 + 0xd0) << 6 |
                         *(char *)(lVar23 + 0xd1) << 2 | bVar10;
              if (*(code **)(*local_b0 + 8) != FUN_1447d3e98) {
                (**(code **)(*local_b0 + 8))();
              }
            }
            lVar22 = local_88;
            local_98 = *(undefined4 *)(lVar23 + 0xd8);
            uStack_94 = *(undefined4 *)(lVar23 + 0xdc);
            uStack_90 = *(undefined4 *)(lVar23 + 0xe0);
            uStack_8c = *(undefined4 *)(lVar23 + 0xe4);
            uStack_7c = *(undefined4 *)(lVar23 + 0xe8);
            uStack_76 = *(undefined1 *)(lVar23 + 0xec);
            uStack_77 = *(undefined1 *)(lVar23 + 0xed);
            if (*(longlong *)(lVar23 + 0xf0) == 0) {
              if (local_88 != 0) {
                local_88 = 0;
LAB_14320c53d:
                LOCK();
                puVar1 = (uint *)(lVar22 + 8);
                uVar12 = *puVar1;
                *puVar1 = *puVar1 - 1;
                UNLOCK();
                if ((uVar12 & 0x3fffffff) == 1) {
                  puVar1 = (uint *)(lVar22 + 8);
                  LOCK();
                  uVar12 = *puVar1;
                  *puVar1 = *puVar1 | 0x40000000;
                  UNLOCK();
                  if ((uVar12 >> 0x1e & 1) == 0) {
                    bVar26 = *(byte *)(lVar22 + 0xd);
                    plVar15 = (longlong *)FUN_14001cc68(0x10,8);
                    plVar15[1] = lVar22;
                    plVar18 = DAT_14ca843c0;
                    plVar16 = DAT_14ca843c8;
                    if ((bVar26 & 2) == 0) {
                      do {
                        *plVar15 = (longlong)plVar18;
                        LOCK();
                        bVar27 = plVar18 != DAT_14ca843c0;
                        plVar16 = plVar15;
                        if (bVar27) {
                          plVar18 = DAT_14ca843c0;
                          plVar16 = DAT_14ca843c0;
                        }
                        DAT_14ca843c0 = plVar16;
                        UNLOCK();
                      } while (bVar27);
                    }
                    else {
                      do {
                        *plVar15 = (longlong)plVar16;
                        LOCK();
                        bVar27 = plVar16 != DAT_14ca843c8;
                        plVar18 = plVar15;
                        if (bVar27) {
                          plVar16 = DAT_14ca843c8;
                          plVar18 = DAT_14ca843c8;
                        }
                        DAT_14ca843c8 = plVar18;
                        UNLOCK();
                      } while (bVar27);
                    }
                  }
                }
              }
            }
            else {
              lVar23 = *(longlong *)(*(longlong *)(lVar23 + 0xf0) + 0x10);
              if (local_88 != lVar23) {
                if (lVar23 != 0) {
                  LOCK();
                  *(int *)(lVar23 + 8) = *(int *)(lVar23 + 8) + 1;
                  UNLOCK();
                }
                bVar27 = local_88 != 0;
                local_88 = lVar23;
                if (bVar27) goto LAB_14320c53d;
              }
            }
            lVar23 = local_190;
            local_80 = CONCAT31(local_80._1_3_,(local_88 != 0) * '\x03');
            if ((uStack_17d._5_1_ == '\x01') && (local_190 != 0)) {
              LOCK();
              puVar1 = (uint *)(local_190 + 8);
              uVar12 = *puVar1;
              *puVar1 = *puVar1 - 1;
              UNLOCK();
              if ((uVar12 & 0x3fffffff) == 1) {
                puVar1 = (uint *)(local_190 + 8);
                LOCK();
                uVar12 = *puVar1;
                *puVar1 = *puVar1 | 0x40000000;
                UNLOCK();
                if ((uVar12 >> 0x1e & 1) == 0) {
                  bVar26 = *(byte *)(local_190 + 0xd);
                  plVar15 = (longlong *)FUN_14001cc68(0x10,8);
                  plVar15[1] = lVar23;
                  plVar18 = DAT_14ca843c0;
                  plVar16 = DAT_14ca843c8;
                  if ((bVar26 & 2) == 0) {
                    do {
                      *plVar15 = (longlong)plVar18;
                      LOCK();
                      bVar27 = plVar18 != DAT_14ca843c0;
                      plVar16 = plVar15;
                      if (bVar27) {
                        plVar18 = DAT_14ca843c0;
                        plVar16 = DAT_14ca843c0;
                      }
                      DAT_14ca843c0 = plVar16;
                      UNLOCK();
                    } while (bVar27);
                  }
                  else {
                    do {
                      *plVar15 = (longlong)plVar16;
                      LOCK();
                      bVar27 = plVar16 != DAT_14ca843c8;
                      plVar18 = plVar15;
                      if (bVar27) {
                        plVar16 = DAT_14ca843c8;
                        plVar18 = DAT_14ca843c8;
                      }
                      DAT_14ca843c8 = plVar18;
                      UNLOCK();
                    } while (bVar27);
                  }
                }
              }
            }
            memcpy(local_278,(void *)((longlong)&uStack_171 + 1),0xe8);
            lVar23 = local_88;
            local_190 = local_88;
            uStack_181 = (undefined1)((uint)uStack_7c >> 0x18);
            if (local_88 == 0) {
              local_188 = SUB87(CONCAT44(uStack_7c,local_80),0);
              _uStack_181 = CONCAT31(CONCAT12(uStack_76,CONCAT11(uStack_77,uStack_78)),uStack_181);
              uStack_17d._5_1_ = '\x01';
            }
            else {
              LOCK();
              *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
              UNLOCK();
              local_188 = SUB87(CONCAT44(uStack_7c,local_80),0);
              _uStack_181 = CONCAT31(CONCAT12(uStack_76,CONCAT11(uStack_77,uStack_78)),uStack_181);
              uStack_17d._5_1_ = '\x01';
              if (local_88 != 0) {
                LOCK();
                puVar1 = (uint *)(local_88 + 8);
                uVar12 = *puVar1;
                *puVar1 = *puVar1 - 1;
                UNLOCK();
                if ((uVar12 & 0x3fffffff) == 1) {
                  puVar1 = (uint *)(local_88 + 8);
                  LOCK();
                  uVar12 = *puVar1;
                  *puVar1 = *puVar1 | 0x40000000;
                  UNLOCK();
                  if ((uVar12 >> 0x1e & 1) == 0) {
                    bVar26 = *(byte *)(local_88 + 0xd);
                    plVar15 = (longlong *)FUN_14001cc68(0x10,8);
                    plVar15[1] = lVar23;
                    plVar18 = DAT_14ca843c0;
                    plVar16 = DAT_14ca843c8;
                    if ((bVar26 & 2) == 0) {
                      do {
                        *plVar15 = (longlong)plVar18;
                        LOCK();
                        bVar27 = plVar18 != DAT_14ca843c0;
                        plVar16 = plVar15;
                        if (bVar27) {
                          plVar18 = DAT_14ca843c0;
                          plVar16 = DAT_14ca843c0;
                        }
                        DAT_14ca843c0 = plVar16;
                        UNLOCK();
                      } while (bVar27);
                    }
                    else {
                      do {
                        *plVar15 = (longlong)plVar16;
                        LOCK();
                        bVar27 = plVar16 != DAT_14ca843c8;
                        plVar18 = plVar15;
                        if (bVar27) {
                          plVar16 = DAT_14ca843c8;
                          plVar18 = DAT_14ca843c8;
                        }
                        DAT_14ca843c8 = plVar18;
                        UNLOCK();
                      } while (bVar27);
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*plVar17 + 0x10))(plVar17,&local_2f8);
          plVar18 = local_2f8;
          if ((*(byte *)(local_2f8 + 7) & 4) == 0) {
            FUN_1400daade(local_2f8 + 0x39);
          }
          else {
            lVar23 = local_2f8[0x38];
            uVar14 = FUN_14001cc68(0x308,0x10);
            FUN_14009016e(uVar14,*(undefined4 *)((longlong)plVar18 + 0x1ac),0);
            plVar18 = local_2f8 + 0x37;
            iVar6 = (int)local_2f8[0x38];
            *(uint *)(local_2f8 + 0x38) = iVar6 + 1U;
            if (*(uint *)((longlong)local_2f8 + 0x1c4) < iVar6 + 1U) {
              FUN_1447a78d4(plVar18,iVar6);
            }
            *(undefined8 *)(*plVar18 + (longlong)iVar6 * 8) = uVar14;
            FUN_1400daade(local_2f8 + 0x39);
            FUN_14002049c(uVar14,*(undefined1 *)((longlong)local_2f8 + 0x2b));
            if ((int)lVar23 == 0) {
              FUN_140033f36(uVar14,local_2f8);
            }
            FUN_1400339de(uVar14,local_2f8);
            FUN_1447850c6(uVar14);
          }
          lVar23 = local_190;
          if (uStack_17d._5_1_ == '\x01') {
            if (local_190 != 0) {
              LOCK();
              puVar1 = (uint *)(local_190 + 8);
              uVar12 = *puVar1;
              *puVar1 = *puVar1 - 1;
              UNLOCK();
              if ((uVar12 & 0x3fffffff) == 1) {
                puVar1 = (uint *)(local_190 + 8);
                LOCK();
                uVar12 = *puVar1;
                *puVar1 = *puVar1 | 0x40000000;
                UNLOCK();
                if ((uVar12 >> 0x1e & 1) == 0) {
                  bVar26 = *(byte *)(local_190 + 0xd);
                  plVar16 = (longlong *)FUN_14001cc68(0x10,8);
                  plVar16[1] = lVar23;
                  plVar18 = DAT_14ca843c0;
                  plVar17 = DAT_14ca843c8;
                  if ((bVar26 & 2) == 0) {
                    do {
                      *plVar16 = (longlong)plVar18;
                      LOCK();
                      bVar27 = plVar18 != DAT_14ca843c0;
                      plVar17 = plVar16;
                      if (bVar27) {
                        plVar18 = DAT_14ca843c0;
                        plVar17 = DAT_14ca843c0;
                      }
                      DAT_14ca843c0 = plVar17;
                      UNLOCK();
                    } while (bVar27);
                  }
                  else {
                    do {
                      *plVar16 = (longlong)plVar17;
                      LOCK();
                      bVar27 = plVar17 != DAT_14ca843c8;
                      plVar18 = plVar16;
                      if (bVar27) {
                        plVar17 = DAT_14ca843c8;
                        plVar18 = DAT_14ca843c8;
                      }
                      DAT_14ca843c8 = plVar18;
                      UNLOCK();
                    } while (bVar27);
                  }
                }
              }
            }
            uStack_17d._5_1_ = '\0';
          }
          plVar18 = local_310;
          if (local_298 != (undefined1 *)0x0) {
            FUN_1400020a8();
          }
          if (local_2e8 != (undefined1 *)0x0) {
            FUN_1400020a8();
          }
        }
        else {
          FUN_1400daade(plVar17 + 0x39);
        }
        plVar25 = plVar25 + 1;
      } while (plVar25 != plVar18);
    }
    *(undefined4 *)(local_308 + 0x160) = 0;
    if (*(int *)(local_308 + 0x164) != 0) {
      FUN_14321a06c(local_308 + 0x158);
    }
    TlsSetValue(DAT_14ca954e4,local_300);
  }
  if ((local_70 ^ (ulonglong)auStack_338) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14320c68e FUN_14320c68e body=526 status=ok
// SIG undefined FUN_14320c68e(void)

void FUN_14320c68e(longlong *param_1,undefined4 *param_2)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar6 = param_1[1];
  iVar2 = *(int *)(lVar6 + 0x68);
  if (iVar2 != 0) {
    lVar6 = *param_1;
    iVar8 = 0;
    do {
      lVar3 = *(longlong *)
               (lVar6 + (ulonglong)
                        *(ushort *)(*(longlong *)(param_1[1] + 0x60) + (longlong)iVar8 * 4));
      if (lVar3 != 0) {
        local_48 = *param_2;
        uStack_44 = param_2[1];
        uStack_40 = param_2[2];
        uStack_3c = param_2[3];
        FUN_14320c68e(lVar3 + 0x18,&local_48);
        lVar6 = *param_1;
      }
      iVar8 = iVar8 + 1;
    } while (iVar2 != iVar8);
    lVar6 = param_1[1];
  }
  iVar2 = *(int *)(lVar6 + 0x38);
  if (iVar2 != 0) {
    iVar8 = 0;
    do {
      uVar5 = (uint)*(byte *)(*(longlong *)(param_1[1] + 0x30) + 2 + (longlong)iVar8 * 4);
      if (uVar5 - 10 < 0xe) {
        plVar4 = (longlong *)
                 ((ulonglong)*(ushort *)(*(longlong *)(param_1[1] + 0x30) + (longlong)iVar8 * 4) +
                 *param_1);
        switch(uVar5) {
        case 10:
          lVar6 = *plVar4;
          if (lVar6 != 0) {
            uVar5 = *(uint *)(plVar4 + 2);
LAB_14320c831:
            if ((uVar5 & 0x2fc00) != 0) goto LAB_14320c836;
          }
          break;
        case 0xb:
          lVar6 = plVar4[1];
          if ((longlong)(int)lVar6 != 0) {
            lVar3 = *plVar4;
            lVar7 = 0;
            do {
              if ((*(ushort *)(lVar3 + 0x11 + lVar7) & 0x2fc) != 0) {
                pbVar1 = (byte *)(*(longlong *)(lVar3 + lVar7) + 0x24);
                *pbVar1 = *pbVar1 | 4;
              }
              lVar7 = lVar7 + 0x18;
            } while ((longlong)(int)lVar6 * 0x18 != lVar7);
          }
          break;
        case 0xe:
          if (*plVar4 != 0) {
            plVar4 = (longlong *)(*plVar4 + 0x40);
LAB_14320c820:
            lVar6 = *plVar4;
LAB_14320c836:
            *(byte *)(lVar6 + 0x24) = *(byte *)(lVar6 + 0x24) | 4;
          }
          break;
        case 0xf:
          lVar6 = *plVar4;
          if (lVar6 != 0) {
            uVar5 = *(uint *)(plVar4 + 1);
            goto LAB_14320c831;
          }
          break;
        case 0x10:
          lVar6 = plVar4[1];
          if ((longlong)(int)lVar6 != 0) {
            lVar3 = *plVar4;
            lVar7 = 0;
            do {
              if ((*(ushort *)(lVar3 + 9 + lVar7) & 0x2fc) != 0) {
                pbVar1 = (byte *)(*(longlong *)(lVar3 + lVar7) + 0x24);
                *pbVar1 = *pbVar1 | 4;
              }
              lVar7 = lVar7 + 0x10;
            } while ((longlong)(int)lVar6 * 0x10 != lVar7);
          }
          break;
        case 0x12:
          if (*plVar4 != 0) {
            plVar4 = (longlong *)(*plVar4 + 0x38);
            goto LAB_14320c820;
          }
          break;
        case 0x17:
          lVar6 = 8;
          do {
            lVar3 = *(longlong *)((longlong)plVar4 + lVar6 + -8);
            if (lVar3 == 0) break;
            lVar7 = *(longlong *)((longlong)plVar4 + lVar6);
            pbVar1 = (byte *)(lVar3 + 0x24);
            *pbVar1 = *pbVar1 | 4;
            if (lVar7 != 0) {
              pbVar1 = (byte *)(lVar7 + 0x24);
              *pbVar1 = *pbVar1 | 4;
            }
            lVar6 = lVar6 + 0x18;
          } while (lVar6 != 200);
          if ((*(uint *)((longlong)plVar4 + 0xd4) & 0xf) == 2 ||
              (*(uint *)((longlong)plVar4 + 0xd4) & 0xf0) == 0x20) {
            plVar4 = plVar4 + 0x18;
            goto LAB_14320c820;
          }
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 != iVar2);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14320c89e FUN_14320c89e body=2825 status=ok
// SIG undefined FUN_14320c89e(void)

/* WARNING: Removing unreachable block (ram,0x00014320c8ec) */
/* WARNING: Removing unreachable block (ram,0x00014320d331) */

ulonglong FUN_14320c89e(longlong param_1,undefined8 param_2,longlong *param_3)

{
  uint *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  DWORD DVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong lVar14;
  int iVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  byte bVar18;
  uint uVar19;
  uint *puVar20;
  int iVar21;
  uint uVar22;
  undefined4 *puVar23;
  uint uVar24;
  uint uVar25;
  undefined8 uVar26;
  longlong lVar27;
  uint uVar28;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined4 *local_130;
  undefined4 *local_128;
  undefined4 *local_120;
  longlong *local_118;
  longlong *local_110;
  longlong local_108;
  undefined8 local_100;
  longlong *local_f8;
  ulonglong local_f0;
  ulonglong local_e8;
  undefined4 *local_e0;
  uint *local_d8;
  uint *local_d0;
  undefined4 local_c8 [2];
  undefined4 *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0 [2];
  undefined4 *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  ulonglong local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined8 local_74;
  undefined2 local_6c;
  undefined2 local_6a;
  undefined1 local_68;
  undefined1 local_67;
  undefined1 local_66;
  undefined1 local_65;
  undefined1 local_64;
  undefined1 local_63;
  ulonglong local_60;
  ulonglong uVar29;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  DVar7 = GetCurrentThreadId();
  if ((DAT_14ca9a3f8 & 1) == 0) {
    DAT_14ca9a3f8 = DAT_14ca9a3f8 | 1;
    LOCK();
    UNLOCK();
    DAT_14ca9a3fc = DVar7;
  }
  else if (DAT_14ca9a3fc == DVar7) {
    LOCK();
    DAT_14ca9a3f8 = DAT_14ca9a3f8 + 4;
    UNLOCK();
  }
  else {
    FUN_1402441ea(&DAT_14ca9a3f8,DAT_14ca9a3f8);
  }
  if ((longlong)(int)param_3[1] != 0) {
    puVar20 = (uint *)*param_3;
    local_d8 = puVar20 + (int)param_3[1];
    local_110 = (longlong *)(param_1 + 0x2e8);
    local_120 = (undefined4 *)(param_1 + 0x340);
    local_130 = (undefined4 *)(param_1 + 0x328);
    local_118 = (longlong *)(param_1 + 0x2f8);
    local_108 = param_1 + 0x308;
    local_100 = param_2;
    local_f8 = param_3;
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x178) + (ulonglong)(*puVar20 & 0x3fffffff) * 8)
      ;
      if ((int)*puVar20 < 0) {
        uVar9 = *(uint *)(lVar2 + 0x34);
        iVar8 = *(int *)(lVar2 + 0x38);
        if ((longlong)iVar8 == -1) {
          iVar21 = -1;
          uVar26 = 0xffffffff;
        }
        else {
          lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x168) + (longlong)iVar8 * 8);
          puVar1 = (uint *)(lVar14 + 0x40);
          uVar10 = 0xffffffff;
          if ((uVar9 != 0xffffffff) && (*puVar1 < uVar9)) {
            uVar26 = 0xffffffff;
            uVar10 = uVar9;
            iVar21 = -1;
            if (*(uint *)(lVar14 + 0x44) <= uVar9) goto LAB_14320cd45;
          }
          uVar9 = uVar10;
          uVar26 = *(undefined8 *)puVar1;
          iVar21 = iVar8;
        }
LAB_14320cd45:
        lVar14 = *(longlong *)(lVar2 + 0xf8);
        *(uint *)(lVar14 + 0xd8) = uVar9;
        *(int *)(lVar14 + 0xdc) = iVar21;
        *(undefined8 *)(lVar14 + 0xe0) = uVar26;
        *(undefined1 *)(lVar14 + 0xe8) = 1;
        if ((*(longlong *)(lVar2 + 0x118) != 0) && (*(longlong *)(lVar14 + 0x20) != 0)) {
          *(undefined8 *)(lVar2 + 0x118) = 0;
          FUN_144734574();
        }
      }
      else {
        uVar9 = *(uint *)(lVar2 + 0x30);
        lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x168) + (longlong)(int)uVar9 * 8);
        uVar26 = 0xffffffff;
        if (*(char *)(lVar14 + 0x2b) != '\x01') {
          uVar26 = *(undefined8 *)(lVar14 + 0x40);
          uVar9 = 0xffffffff;
        }
        uVar3 = *(undefined8 *)(lVar2 + 8);
        local_66 = *(undefined1 *)(lVar2 + 0x92);
        local_65 = *(undefined1 *)(lVar2 + 0x93);
        local_64 = *(undefined1 *)(lVar2 + 0x94);
        local_74 = *(undefined8 *)(lVar2 + 0x84);
        local_6c = *(undefined2 *)(lVar2 + 0x8c);
        local_6a = *(undefined2 *)(lVar2 + 0x8e);
        local_68 = *(undefined1 *)(lVar2 + 0x90);
        local_67 = *(undefined1 *)(lVar2 + 0x91);
        local_80 = *(undefined4 *)(lVar2 + 0x78);
        local_90 = *(undefined4 *)(lVar2 + 0x68);
        uStack_8c = *(undefined4 *)(lVar2 + 0x6c);
        uStack_88 = *(undefined4 *)(lVar2 + 0x70);
        uStack_84 = *(undefined4 *)(lVar2 + 0x74);
        local_78 = *(undefined4 *)(lVar2 + 0x80);
        local_63 = *(undefined1 *)(lVar2 + 0x95);
        local_7c = *(undefined4 *)(lVar2 + 0x7c);
        local_98 = *(ulonglong *)(lVar2 + 0x60) & 0xffffffffffdfbff7 | 8;
        local_d0 = puVar20;
        iVar8 = FUN_144847bd5(&local_98);
        if (DAT_14ca9a418 != 0) {
          iVar21 = 0;
          do {
            if (((*(int *)(DAT_14ca9a400 + (longlong)iVar21 * 4) == iVar8) &&
                (lVar14 = *(longlong *)(DAT_14ca9a410 + (longlong)iVar21 * 8),
                *(int *)(lVar14 + 0x68) == 1)) && (*(char *)(lVar14 + 0xe8) == '\x01')) {
              uVar10 = (uint)((ulonglong)*(undefined8 *)(lVar14 + 0xe0) >> 0x20);
              if (((uVar10 <= uVar9) ||
                  (uVar28 = (uint)*(undefined8 *)(lVar14 + 0xe0), uVar9 <= uVar28)) ||
                 (uVar10 < uVar28)) {
                uVar10 = (uint)((ulonglong)uVar26 >> 0x20);
                if (((uVar10 <= *(uint *)(lVar14 + 0xd8)) || (uVar10 < (uint)uVar26)) ||
                   (*(uint *)(lVar14 + 0xd8) <= (uint)uVar26)) {
                  bVar18 = 1;
                  if (lVar14 != 0) goto LAB_14320cb2c;
                  break;
                }
              }
            }
            iVar21 = iVar21 + 1;
          } while (DAT_14ca9a418 != iVar21);
        }
        local_138 = uVar3;
        lVar14 = FUN_140142686(&DAT_14ca9a3e8,local_100,&local_98,iVar8);
        bVar18 = *(byte *)(lVar14 + 0xe8);
LAB_14320cb2c:
        puVar17 = local_120;
        if ((bVar18 & 1) != 0) {
          *(undefined1 *)(lVar14 + 0xe8) = 0;
        }
        *(undefined4 *)(lVar14 + 0x6c) = 0;
        *(longlong *)(lVar2 + 0xf8) = lVar14;
        uVar12 = lVar14 + 0x70;
        *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(lVar14 + 0x80);
        *(ulonglong *)(lVar2 + 0x100) = uVar12;
        *(longlong *)(lVar2 + 0x110) = lVar14 + 0x88;
        uVar9 = ((uint)(uVar12 >> 0x14) & 0xffff ^ (uint)(uVar12 >> 4)) * -0x7a143595;
        uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
        uVar28 = uVar9 & 0x7fffffff ^ uVar9 >> 0x10;
        uVar29 = (ulonglong)uVar28;
        uVar9 = *(uint *)(param_1 + 0x358);
        uVar10 = uVar9 & uVar28;
        puVar16 = *(undefined4 **)(param_1 + 0x348);
        puVar11 = puVar16;
        if (puVar16 == (undefined4 *)0x0) {
          puVar11 = local_120;
        }
        do {
          if (puVar11[(int)uVar10] == uVar28) {
            lVar14 = *(longlong *)(param_1 + 0x2e8);
            puVar23 = *(undefined4 **)(param_1 + 0x330);
            if (*(undefined4 **)(param_1 + 0x330) == (undefined4 *)0x0) {
              puVar23 = local_130;
            }
            lVar27 = (longlong)(int)puVar23[(int)uVar10];
            if (*(ulonglong *)(lVar14 + lVar27 * 0x10) == uVar12) goto LAB_14320d181;
          }
          uVar10 = uVar10 + 1 & uVar9;
        } while (uVar10 != (*(int *)(param_1 + 0x35c) + uVar28 + 1 & uVar9));
        iVar8 = *(int *)(param_1 + 800);
        if ((ulonglong)(uVar9 * 3) <=
            (ulonglong)(((longlong)*(int *)(param_1 + 0x2f0) - (longlong)iVar8) * 5)) {
          local_a8 = *(undefined4 **)(param_1 + 0x330);
          if (local_a8 == (undefined4 *)0x0) {
            local_b0[0] = *local_130;
          }
          *(undefined8 *)(param_1 + 0x330) = 0;
          local_a0 = *(undefined4 *)(param_1 + 0x338);
          local_9c = *(undefined4 *)(param_1 + 0x33c);
          *(undefined8 *)(param_1 + 0x338) = 0x100000000;
          if (puVar16 == (undefined4 *)0x0) {
            local_c8[0] = *local_120;
          }
          *(undefined8 *)(param_1 + 0x348) = 0;
          local_b8 = *(undefined4 *)(param_1 + 0x350);
          local_b4 = *(undefined4 *)(param_1 + 0x354);
          *(undefined8 *)(param_1 + 0x350) = 0x100000000;
          iVar8 = uVar9 * 2 + 1;
          *(int *)(param_1 + 0x358) = iVar8;
          *(undefined4 *)(param_1 + 0x35c) = 0;
          iVar21 = uVar9 * 2 + 2;
          local_c0 = puVar16;
          if (iVar21 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(iVar21);
          }
          local_128 = local_a8;
          if (uVar9 * 2 < 0x7ffffffe) {
            FUN_144736e44(local_130);
            iVar8 = *(int *)(param_1 + 0x358);
            iVar21 = *(int *)(param_1 + 0x338);
            iVar15 = *(int *)(param_1 + 0x33c);
          }
          else {
            iVar21 = 0;
            iVar15 = 1;
          }
          uVar10 = iVar8 + 1;
          *(int *)(param_1 + 0x338) = iVar8 + iVar21 + 1;
          if ((uint)(iVar15 - iVar21) < uVar10) {
            FUN_14742df62(local_130);
            uVar10 = *(int *)(param_1 + 0x358) + 1;
          }
          if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(uVar10);
          }
          iVar8 = *(int *)(param_1 + 0x354);
          local_f0 = uVar12;
          local_e8 = uVar29;
          if (iVar8 < (int)uVar10) {
            FUN_144736dc0(puVar17,uVar10);
            iVar8 = *(int *)(param_1 + 0x354);
            uVar10 = *(int *)(param_1 + 0x358) + 1;
          }
          iVar21 = *(int *)(param_1 + 0x350);
          *(uint *)(param_1 + 0x350) = iVar21 + uVar10;
          if ((uint)(iVar8 - iVar21) < uVar10) {
            FUN_14742e044(puVar17,iVar21);
          }
          puVar11 = *(undefined4 **)(param_1 + 0x348);
          if (*(undefined4 **)(param_1 + 0x348) == (undefined4 *)0x0) {
            puVar11 = puVar17;
          }
          FUN_14471858a(puVar11 + iVar21,uVar10);
          local_e0 = puVar16;
          if (puVar16 == (undefined4 *)0x0) {
            local_e0 = local_c8;
          }
          if (local_128 == (undefined4 *)0x0) {
            local_128 = local_b0;
          }
          iVar8 = 0;
          do {
            uVar12 = (ulonglong)iVar8;
            uVar10 = local_e0[uVar12];
            uVar28 = -uVar10;
            if (!SBORROW4(0,uVar10)) {
              uVar12 = (ulonglong)(uint)local_128[uVar12];
              uVar24 = *(uint *)(param_1 + 0x358);
              uVar28 = uVar24 & uVar10;
              puVar16 = *(undefined4 **)(param_1 + 0x348);
              puVar11 = puVar16;
              if (puVar16 == (undefined4 *)0x0) {
                puVar11 = puVar17;
              }
              lVar14 = (longlong)(int)uVar28;
              uVar22 = puVar11[lVar14];
              if (!SBORROW4(0,uVar22)) {
                puVar20 = puVar11 + lVar14;
                uVar25 = uVar28 - uVar22 & uVar24;
                uVar19 = 0;
                do {
                  if (uVar25 < uVar19) {
                    if (*(uint *)(param_1 + 0x35c) < uVar19) {
                      *(uint *)(param_1 + 0x35c) = uVar19;
                      uVar22 = *puVar20;
                    }
                    puVar17 = *(undefined4 **)(param_1 + 0x330);
                    if (*(undefined4 **)(param_1 + 0x330) == (undefined4 *)0x0) {
                      puVar17 = local_130;
                    }
                    uVar19 = puVar17[lVar14];
                    puVar17[lVar14] = (int)uVar12;
                    puVar17 = *(undefined4 **)(param_1 + 0x348);
                    if (*(undefined4 **)(param_1 + 0x348) == (undefined4 *)0x0) {
                      puVar17 = local_120;
                    }
                    puVar17[lVar14] = uVar10;
                    uVar24 = *(uint *)(param_1 + 0x358);
                    puVar16 = *(undefined4 **)(param_1 + 0x348);
                    uVar12 = (ulonglong)uVar19;
                    uVar10 = uVar22;
                    uVar19 = uVar25;
                  }
                  uVar19 = uVar19 + 1;
                  uVar28 = uVar28 + 1 & uVar24;
                  puVar17 = puVar16;
                  if (puVar16 == (undefined4 *)0x0) {
                    puVar17 = local_120;
                  }
                  lVar14 = (longlong)(int)uVar28;
                  puVar20 = puVar17 + lVar14;
                  uVar22 = *puVar20;
                  uVar25 = uVar28 - uVar22 & uVar24;
                } while (!SBORROW4(0,uVar22));
                puVar17 = local_120;
                if (*(uint *)(param_1 + 0x35c) < uVar19) {
                  *(uint *)(param_1 + 0x35c) = uVar19;
                }
              }
              puVar16 = *(undefined4 **)(param_1 + 0x330);
              if (*(undefined4 **)(param_1 + 0x330) == (undefined4 *)0x0) {
                puVar16 = local_130;
              }
              puVar16[lVar14] = (int)uVar12;
              puVar16 = *(undefined4 **)(param_1 + 0x348);
              if (*(undefined4 **)(param_1 + 0x348) == (undefined4 *)0x0) {
                puVar16 = puVar17;
              }
              puVar16[lVar14] = uVar10;
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 != uVar9 + 1 + (uint)(uVar9 == 0xffffffff));
          FUN_140047170(&local_c0,uVar12,uVar28);
          FUN_14004710c(&local_a8);
          iVar8 = *(int *)(param_1 + 800);
          uVar12 = local_f0;
          uVar29 = local_e8;
        }
        uVar9 = (uint)uVar29;
        if (iVar8 < 1) {
          iVar8 = *(int *)(param_1 + 0x2f0);
          *(uint *)(param_1 + 0x2f0) = iVar8 + 1U;
          if (*(uint *)(param_1 + 0x2f4) < iVar8 + 1U) {
            FUN_140051652(local_110,iVar8);
          }
          lVar14 = *(longlong *)(param_1 + 0x2e8);
          *(ulonglong *)(lVar14 + (longlong)iVar8 * 0x10) = uVar12;
          *(undefined8 *)(lVar14 + 8 + (longlong)iVar8 * 0x10) = 0;
          iVar21 = *(int *)(param_1 + 0x300);
          lVar27 = (longlong)iVar21;
          *(uint *)(param_1 + 0x300) = iVar21 + 1U;
          if (*(uint *)(param_1 + 0x304) < iVar21 + 1U) {
            FUN_144736ed4(local_118,iVar21);
          }
        }
        else {
          iVar8 = FUN_14742e7b4(local_108);
          lVar14 = *local_110;
          lVar27 = (longlong)iVar8;
          *(ulonglong *)(lVar14 + lVar27 * 0x10) = uVar12;
          *(undefined8 *)(lVar14 + 8 + lVar27 * 0x10) = 0;
        }
        *(uint *)(lVar27 * 4 + *local_118) = uVar9;
        uVar10 = *(uint *)(param_1 + 0x358);
        uVar28 = uVar10 & uVar9;
        uVar12 = (ulonglong)uVar28;
        puVar16 = *(undefined4 **)(param_1 + 0x348);
        puVar11 = puVar16;
        if (puVar16 == (undefined4 *)0x0) {
          puVar11 = puVar17;
        }
        uVar24 = puVar11[uVar12];
        iVar21 = iVar8;
        if (!SBORROW4(0,uVar24)) {
          puVar20 = puVar11 + uVar12;
          uVar19 = uVar28 - uVar24 & uVar10;
          uVar22 = 0;
          do {
            if (uVar19 < uVar22) {
              if (*(uint *)(param_1 + 0x35c) < uVar22) {
                *(uint *)(param_1 + 0x35c) = uVar22;
                uVar24 = *puVar20;
              }
              puVar16 = *(undefined4 **)(param_1 + 0x330);
              if (*(undefined4 **)(param_1 + 0x330) == (undefined4 *)0x0) {
                puVar16 = local_130;
              }
              iVar15 = puVar16[uVar12];
              puVar16[uVar12] = iVar21;
              puVar16 = *(undefined4 **)(param_1 + 0x348);
              if (*(undefined4 **)(param_1 + 0x348) == (undefined4 *)0x0) {
                puVar16 = puVar17;
              }
              puVar16[uVar12] = (int)uVar29;
              uVar10 = *(uint *)(param_1 + 0x358);
              puVar16 = *(undefined4 **)(param_1 + 0x348);
              uVar29 = (ulonglong)uVar24;
              uVar22 = uVar19;
              iVar21 = iVar15;
            }
            uVar9 = (uint)uVar29;
            uVar22 = uVar22 + 1;
            uVar28 = uVar28 + 1 & uVar10;
            puVar11 = puVar16;
            if (puVar16 == (undefined4 *)0x0) {
              puVar11 = puVar17;
            }
            uVar12 = (ulonglong)(int)uVar28;
            puVar20 = puVar11 + uVar12;
            uVar24 = *puVar20;
            uVar19 = uVar28 - uVar24 & uVar10;
          } while (!SBORROW4(0,uVar24));
          if (*(uint *)(param_1 + 0x35c) < uVar22) {
            *(uint *)(param_1 + 0x35c) = uVar22;
          }
        }
        puVar16 = *(undefined4 **)(param_1 + 0x330);
        if (*(undefined4 **)(param_1 + 0x330) == (undefined4 *)0x0) {
          puVar16 = local_130;
        }
        puVar16[uVar12] = iVar21;
        puVar16 = *(undefined4 **)(param_1 + 0x348);
        if (*(undefined4 **)(param_1 + 0x348) == (undefined4 *)0x0) {
          puVar16 = puVar17;
        }
        puVar16[uVar12] = uVar9;
        lVar14 = *(longlong *)(param_1 + 0x2e8);
        lVar27 = (longlong)iVar8;
LAB_14320d181:
        plVar13 = (longlong *)(lVar14 + lVar27 * 0x10 + 8);
        if (*plVar13 != 0) {
          *(undefined4 *)(lVar2 + 0xa0) = *(undefined4 *)(*plVar13 + 0x9c);
          *(undefined4 *)(*plVar13 + 0xa4) = *(undefined4 *)(lVar2 + 0x9c);
          *(byte *)(*plVar13 + 0x24) = *(byte *)(*plVar13 + 0x24) | 0x20;
        }
        *plVar13 = lVar2;
        puVar20 = local_d0;
      }
      puVar20 = puVar20 + 1;
    } while (puVar20 != local_d8);
    lVar2 = local_f8[1];
    if ((longlong)(int)lVar2 != 0) {
      lVar14 = *local_f8;
      lVar27 = 0;
      do {
        lVar4 = *(longlong *)
                 (*(longlong *)(param_1 + 0x178) +
                 (ulonglong)(*(uint *)(lVar14 + lVar27) & 0x3fffffff) * 8);
        if (((*(byte *)(lVar4 + 0x24) & 0x20) == 0) && (*(longlong *)(lVar4 + 0x118) == 0)) {
          lVar5 = *(longlong *)(lVar4 + 8);
          plVar13 = *(longlong **)(lVar4 + 0xf8);
          plVar13[0x1b] = -1;
          plVar13[0x1c] = 0xffffffff;
          *(undefined1 *)(plVar13 + 0x1d) = 1;
          plVar13[5] = lVar5;
          plVar6 = *(longlong **)(lVar4 + 0x118);
          if (plVar6 != plVar13) {
            *(longlong **)(lVar4 + 0x118) = plVar13;
            if (plVar13 != (longlong *)0x0) {
              (**(code **)(*plVar13 + 0x30))();
            }
            if (plVar6 != (longlong *)0x0) {
              (**(code **)(*plVar6 + 0x38))();
            }
          }
        }
        lVar27 = lVar27 + 4;
      } while ((longlong)(int)lVar2 * 4 != lVar27);
    }
  }
  uVar9 = DAT_14ca9a3f8;
  uVar12 = (ulonglong)DAT_14ca9a3f8;
  if (DAT_14ca9a3f8 < 4) {
    DAT_14ca9a3fc = 0;
    if (DAT_14ca9a3f8 < 2) {
      LOCK();
      DAT_14ca9a3f8 = 0;
      uVar12 = (ulonglong)uVar9;
      UNLOCK();
    }
    else {
      uVar12 = FUN_140d366d2(&DAT_14ca9a3f8);
    }
  }
  else {
    LOCK();
    DAT_14ca9a3f8 = DAT_14ca9a3f8 - 4;
    UNLOCK();
  }
  if ((local_60 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14320d3aa FUN_14320d3aa body=3299 status=ok
// SIG undefined FUN_14320d3aa(void)

/* WARNING: Removing unreachable block (ram,0x00014320d3fc) */
/* WARNING: Removing unreachable block (ram,0x00014320e00e) */

uint FUN_14320d3aa(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  DWORD DVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  longlong *plVar12;
  ulonglong uVar13;
  int iVar14;
  uint *puVar15;
  undefined4 *puVar16;
  uint uVar17;
  int iVar18;
  ulonglong uVar19;
  uint *puVar20;
  longlong lVar21;
  uint uVar22;
  undefined8 uVar23;
  uint uVar24;
  longlong lVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  longlong lVar29;
  uint uVar30;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined4 *local_f8;
  uint *local_f0;
  longlong local_e8;
  longlong *local_e0;
  uint *local_d8;
  longlong local_d0;
  longlong *local_c8;
  longlong *local_c0;
  longlong local_b8;
  undefined8 local_b0;
  uint *local_a8;
  undefined4 *local_a0;
  uint *local_98;
  undefined4 local_90 [2];
  undefined4 *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  uint local_78;
  uint uStack_74;
  uint *puStack_70;
  ulonglong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_c0 = param_3;
  local_b0 = param_2;
  DVar8 = GetCurrentThreadId();
  if ((DAT_14ca95570 & 1) == 0) {
    DAT_14ca95570 = DAT_14ca95570 | 1;
    LOCK();
    UNLOCK();
    DAT_14ca95574 = DVar8;
  }
  else if (DAT_14ca95574 == DVar8) {
    LOCK();
    DAT_14ca95570 = DAT_14ca95570 + 4;
    UNLOCK();
  }
  else {
    FUN_1402441ea(&DAT_14ca95570,DAT_14ca95570);
  }
  if ((longlong)(int)local_c0[1] != 0) {
    puVar15 = (uint *)*local_c0;
    local_98 = puVar15 + (int)local_c0[1];
    local_c8 = (longlong *)(param_1 + 0x360);
    local_f8 = (undefined4 *)(param_1 + 0x3b8);
    local_f0 = (uint *)(param_1 + 0x3a0);
    local_e0 = (longlong *)(param_1 + 0x370);
    local_b8 = param_1 + 0x380;
    local_e8 = param_1;
    do {
      lVar25 = *(longlong *)
                (*(longlong *)(param_1 + 0x188) + (ulonglong)(*puVar15 & 0x3fffffff) * 8);
      if ((int)*puVar15 < 0) {
        uVar9 = *(uint *)(lVar25 + 0x34);
        iVar10 = *(int *)(lVar25 + 0x38);
        if ((longlong)iVar10 == -1) {
          iVar18 = -1;
          uVar23 = 0xffffffff;
        }
        else {
          lVar21 = *(longlong *)(*(longlong *)(param_1 + 0x168) + (longlong)iVar10 * 8);
          puVar20 = (uint *)(lVar21 + 0x40);
          uVar17 = 0xffffffff;
          if ((uVar9 != 0xffffffff) && (*puVar20 < uVar9)) {
            uVar23 = 0xffffffff;
            uVar17 = uVar9;
            iVar18 = -1;
            if (*(uint *)(lVar21 + 0x44) <= uVar9) goto LAB_14320d995;
          }
          uVar9 = uVar17;
          uVar23 = *(undefined8 *)puVar20;
          iVar18 = iVar10;
        }
LAB_14320d995:
        lVar21 = *(longlong *)(lVar25 + 0x88);
        *(uint *)(lVar21 + 0xa0) = uVar9;
        *(int *)(lVar21 + 0xa4) = iVar18;
        *(undefined8 *)(lVar21 + 0xa8) = uVar23;
        *(undefined1 *)(lVar21 + 0xb0) = 1;
        puVar6 = *(undefined8 **)(lVar25 + 0xa0);
        if (puVar6 != (undefined8 *)0x0) {
          *(undefined8 *)(lVar25 + 0xa0) = 0;
          LOCK();
          piVar1 = (int *)(puVar6 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar6)(puVar6,1);
          }
        }
      }
      else {
        uVar9 = *(uint *)(lVar25 + 0x30);
        lVar21 = *(longlong *)(*(longlong *)(param_1 + 0x168) + (longlong)(int)uVar9 * 8);
        uVar23 = 0xffffffff;
        if (*(char *)(lVar21 + 0x2b) != '\x01') {
          uVar23 = *(undefined8 *)(lVar21 + 0x40);
          uVar9 = 0xffffffff;
        }
        local_78 = *(uint *)(lVar25 + 0x60);
        puStack_70 = *(uint **)(lVar25 + 0x68);
        local_68 = *(ulonglong *)(lVar25 + 0x70);
        uStack_74 = (*(int *)(lVar25 + 100) * local_78 + 0xffff & 0xffff0000) / local_78;
        if (uStack_74 < *(uint *)(lVar25 + 100)) {
          local_78 = *(uint *)(lVar25 + 0x60);
          uStack_74 = *(uint *)(lVar25 + 100);
          puStack_70 = *(uint **)(lVar25 + 0x68);
          local_68 = *(ulonglong *)(lVar25 + 0x70);
        }
        uVar17 = uStack_74 >> 0xd ^ local_78 - uStack_74;
        uVar24 = uVar17 << 8 ^ (-0x61c88647 - uStack_74) - uVar17;
        uVar27 = uVar24 >> 0xd ^ (uStack_74 - uVar17) - uVar24;
        uVar17 = uVar27 >> 0xc ^ (uVar17 - uVar24) - uVar27;
        uVar24 = uVar17 << 0x10 ^ (uVar24 - uVar27) - uVar17;
        uVar27 = uVar24 >> 5 ^ (uVar27 - uVar17) - uVar24;
        uVar28 = uVar27 >> 3 ^ (uVar17 - uVar24) - uVar27;
        uVar17 = uVar28 << 10 ^ (uVar24 - uVar27) - uVar28;
        uVar24 = (uint)puStack_70 >> 0xd ^
                 (uVar17 >> 0xf ^ uVar27 - (uVar28 + uVar17)) - (uint)puStack_70;
        uVar17 = uVar24 << 8 ^ (-0x61c88647 - (uint)puStack_70) - uVar24;
        uVar27 = uVar17 >> 0xd ^ ((uint)puStack_70 - uVar24) - uVar17;
        uVar24 = uVar27 >> 0xc ^ (uVar24 - uVar17) - uVar27;
        uVar17 = uVar24 << 0x10 ^ (uVar17 - uVar27) - uVar24;
        uVar27 = uVar17 >> 5 ^ (uVar27 - uVar24) - uVar17;
        uVar28 = uVar27 >> 3 ^ (uVar24 - uVar17) - uVar27;
        uVar17 = uVar28 << 10 ^ (uVar17 - uVar27) - uVar28;
        uVar24 = ((uint)(local_68 >> 0x14) & 0xffff ^ (uint)(local_68 >> 4)) * -0x7a143595;
        uVar24 = (uVar24 >> 0xd ^ uVar24) * -0x3d4d51cb;
        uVar24 = uVar24 >> 0x10 ^ uVar24;
        uVar27 = uVar24 >> 0xd ^ (uVar17 >> 0xf ^ uVar27 - (uVar28 + uVar17)) - uVar24;
        uVar17 = uVar27 << 8 ^ (-0x61c88647 - uVar24) - uVar27;
        uVar28 = uVar17 >> 0xd ^ (uVar24 - uVar27) - uVar17;
        uVar27 = uVar28 >> 0xc ^ (uVar27 - uVar17) - uVar28;
        uVar24 = uVar27 << 0x10 ^ (uVar17 - uVar28) - uVar27;
        uVar17 = uVar24 >> 5 ^ (uVar28 - uVar27) - uVar24;
        uVar27 = uVar17 >> 3 ^ (uVar27 - uVar24) - uVar17;
        uVar24 = uVar27 << 10 ^ (uVar24 - uVar17) - uVar27;
        local_d0 = lVar25;
        if (0 < (longlong)DAT_14ca95590) {
          lVar21 = 0;
          do {
            if (((*(uint *)(DAT_14ca95588 + lVar21 * 4) ==
                  (uVar24 >> 0xf ^ uVar17 - (uVar27 + uVar24))) &&
                (uVar13 = *(ulonglong *)(DAT_14ca95578 + lVar21 * 8), *(uint *)(uVar13 + 8) < 2)) &&
               (*(char *)(uVar13 + 0xb0) == '\x01')) {
              uVar28 = (uint)((ulonglong)*(undefined8 *)(uVar13 + 0xa8) >> 0x20);
              if (((uVar28 <= uVar9) ||
                  (uVar30 = (uint)*(undefined8 *)(uVar13 + 0xa8), uVar9 <= uVar30)) ||
                 (uVar28 < uVar30)) {
                uVar28 = (uint)((ulonglong)uVar23 >> 0x20);
                if (((uVar28 <= *(uint *)(uVar13 + 0xa0)) || (uVar28 < (uint)uVar23)) ||
                   (*(uint *)(uVar13 + 0xa0) <= (uint)uVar23)) {
                  bVar2 = 1;
                  if (uVar13 != 0) goto LAB_14320d779;
                  break;
                }
              }
            }
            lVar21 = lVar21 + 1;
          } while (DAT_14ca95590 != lVar21);
        }
        local_108 = *(undefined8 *)(lVar25 + 8);
        uVar13 = FUN_14032fd1a(&DAT_14ca95560,local_b0,&local_78);
        bVar2 = *(byte *)(uVar13 + 0xb0);
LAB_14320d779:
        *(undefined4 *)(uVar13 + 0x14) = *(undefined4 *)(local_d0 + 100);
        if ((bVar2 & 1) != 0) {
          *(undefined1 *)(uVar13 + 0xb0) = 0;
        }
        *(undefined4 *)(uVar13 + 0x9c) = DAT_14ca95598;
        *(undefined8 *)(local_d0 + 0x10) = *(undefined8 *)(uVar13 + 0x28);
        *(ulonglong *)(local_d0 + 0x88) = uVar13;
        *(ulonglong *)(local_d0 + 0x98) = uVar13 + 0x38;
        uVar9 = ((uint)(uVar13 >> 0x14) & 0xffff ^ (uint)(uVar13 >> 4)) * -0x7a143595;
        uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
        uVar17 = uVar9 & 0x7fffffff ^ uVar9 >> 0x10;
        uVar9 = *(uint *)(param_1 + 0x3d0);
        uVar24 = uVar9 & uVar17;
        puVar16 = *(undefined4 **)(param_1 + 0x3c0);
        puVar11 = puVar16;
        if (puVar16 == (undefined4 *)0x0) {
          puVar11 = local_f8;
        }
        do {
          if (puVar11[(int)uVar24] == uVar17) {
            lVar25 = *(longlong *)(param_1 + 0x360);
            puVar20 = *(uint **)(param_1 + 0x3a8);
            if (*(uint **)(param_1 + 0x3a8) == (uint *)0x0) {
              puVar20 = local_f0;
            }
            lVar21 = (longlong)(int)puVar20[(int)uVar24];
            if (*(ulonglong *)(lVar25 + lVar21 * 0x10) == uVar13) goto LAB_14320de2e;
          }
          uVar24 = uVar24 + 1 & uVar9;
        } while (uVar24 != (*(int *)(param_1 + 0x3d4) + uVar17 + 1 & uVar9));
        iVar10 = *(int *)(param_1 + 0x398);
        if ((ulonglong)(uVar9 * 3) <=
            (ulonglong)(((longlong)*(int *)(param_1 + 0x368) - (longlong)iVar10) * 5)) {
          puVar20 = *(uint **)(param_1 + 0x3a8);
          if (puVar20 == (uint *)0x0) {
            local_78 = *local_f0;
          }
          *(undefined8 *)(param_1 + 0x3a8) = 0;
          local_68 = *(ulonglong *)(param_1 + 0x3b0);
          *(undefined8 *)(param_1 + 0x3b0) = 0x100000000;
          if (puVar16 == (undefined4 *)0x0) {
            local_90[0] = *local_f8;
          }
          *(undefined8 *)(param_1 + 0x3c0) = 0;
          local_80 = *(undefined4 *)(param_1 + 0x3c8);
          local_7c = *(undefined4 *)(param_1 + 0x3cc);
          *(undefined8 *)(param_1 + 0x3c8) = 0x100000000;
          iVar10 = uVar9 * 2 + 1;
          *(int *)(param_1 + 0x3d0) = iVar10;
          *(undefined4 *)(param_1 + 0x3d4) = 0;
          iVar18 = uVar9 * 2 + 2;
          local_88 = puVar16;
          puStack_70 = puVar20;
          if (iVar18 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(iVar18);
          }
          if (uVar9 * 2 < 0x7ffffffe) {
            FUN_144736e44(local_f0);
            iVar10 = *(int *)(param_1 + 0x3d0);
            iVar18 = *(int *)(param_1 + 0x3b0);
            iVar14 = *(int *)(param_1 + 0x3b4);
          }
          else {
            iVar18 = 0;
            iVar14 = 1;
          }
          uVar24 = iVar10 + 1;
          *(int *)(param_1 + 0x3b0) = iVar10 + iVar18 + 1;
          if ((uint)(iVar14 - iVar18) < uVar24) {
            FUN_14742df62(local_f0);
            uVar24 = *(int *)(param_1 + 0x3d0) + 1;
          }
          if ((int)uVar24 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(uVar24);
          }
          iVar10 = *(int *)(param_1 + 0x3cc);
          if (iVar10 < (int)uVar24) {
            FUN_144736dc0(local_f8,uVar24);
            iVar10 = *(int *)(param_1 + 0x3cc);
            uVar24 = *(int *)(param_1 + 0x3d0) + 1;
          }
          iVar18 = *(int *)(param_1 + 0x3c8);
          *(uint *)(param_1 + 0x3c8) = iVar18 + uVar24;
          local_a8 = puVar15;
          if ((uint)(iVar10 - iVar18) < uVar24) {
            FUN_14742e044(local_f8,iVar18);
          }
          puVar11 = *(undefined4 **)(param_1 + 0x3c0);
          if (*(undefined4 **)(param_1 + 0x3c0) == (undefined4 *)0x0) {
            puVar11 = local_f8;
          }
          FUN_14471858a(puVar11 + iVar18,uVar24);
          local_a0 = puVar16;
          if (puVar16 == (undefined4 *)0x0) {
            local_a0 = local_90;
          }
          local_d8 = puVar20;
          if (puVar20 == (uint *)0x0) {
            local_d8 = &local_78;
          }
          iVar10 = 0;
          do {
            uVar19 = (ulonglong)iVar10;
            uVar24 = local_a0[uVar19];
            uVar27 = -uVar24;
            if (!SBORROW4(0,uVar24)) {
              uVar19 = (ulonglong)local_d8[uVar19];
              uVar28 = *(uint *)(param_1 + 0x3d0);
              uVar27 = uVar28 & uVar24;
              puVar16 = *(undefined4 **)(param_1 + 0x3c0);
              puVar11 = puVar16;
              if (puVar16 == (undefined4 *)0x0) {
                puVar11 = local_f8;
              }
              lVar25 = (longlong)(int)uVar27;
              uVar30 = puVar11[lVar25];
              if (!SBORROW4(0,uVar30)) {
                puVar15 = puVar11 + lVar25;
                uVar22 = uVar27 - uVar30 & uVar28;
                uVar26 = 0;
                do {
                  if (uVar22 < uVar26) {
                    if (*(uint *)(local_e8 + 0x3d4) < uVar26) {
                      *(uint *)(local_e8 + 0x3d4) = uVar26;
                      uVar30 = *puVar15;
                    }
                    puVar15 = *(uint **)(local_e8 + 0x3a8);
                    if (*(uint **)(local_e8 + 0x3a8) == (uint *)0x0) {
                      puVar15 = local_f0;
                    }
                    uVar26 = puVar15[lVar25];
                    puVar15[lVar25] = (uint)uVar19;
                    puVar16 = *(undefined4 **)(local_e8 + 0x3c0);
                    if (*(undefined4 **)(local_e8 + 0x3c0) == (undefined4 *)0x0) {
                      puVar16 = local_f8;
                    }
                    puVar16[lVar25] = uVar24;
                    uVar28 = *(uint *)(local_e8 + 0x3d0);
                    puVar16 = *(undefined4 **)(local_e8 + 0x3c0);
                    uVar19 = (ulonglong)uVar26;
                    uVar24 = uVar30;
                    uVar26 = uVar22;
                  }
                  uVar26 = uVar26 + 1;
                  uVar27 = uVar27 + 1 & uVar28;
                  puVar11 = puVar16;
                  if (puVar16 == (undefined4 *)0x0) {
                    puVar11 = local_f8;
                  }
                  lVar25 = (longlong)(int)uVar27;
                  puVar15 = puVar11 + lVar25;
                  uVar30 = *puVar15;
                  uVar22 = uVar27 - uVar30 & uVar28;
                } while (!SBORROW4(0,uVar30));
                param_1 = local_e8;
                if (*(uint *)(local_e8 + 0x3d4) < uVar26) {
                  *(uint *)(local_e8 + 0x3d4) = uVar26;
                }
              }
              puVar15 = *(uint **)(param_1 + 0x3a8);
              if (*(uint **)(param_1 + 0x3a8) == (uint *)0x0) {
                puVar15 = local_f0;
              }
              puVar15[lVar25] = (uint)uVar19;
              puVar16 = *(undefined4 **)(param_1 + 0x3c0);
              if (*(undefined4 **)(param_1 + 0x3c0) == (undefined4 *)0x0) {
                puVar16 = local_f8;
              }
              puVar16[lVar25] = uVar24;
            }
            iVar10 = iVar10 + 1;
          } while (iVar10 != uVar9 + 1 + (uint)(uVar9 == 0xffffffff));
          FUN_140047170(&local_88,uVar19,uVar27);
          FUN_14004710c(&puStack_70);
          iVar10 = *(int *)(param_1 + 0x398);
          puVar15 = local_a8;
        }
        if (iVar10 < 1) {
          uVar9 = *(uint *)(param_1 + 0x368);
          *(uint *)(param_1 + 0x368) = uVar9 + 1;
          if (*(uint *)(param_1 + 0x36c) < uVar9 + 1) {
            FUN_144737122(local_c8,uVar9);
          }
          lVar25 = *(longlong *)(param_1 + 0x360);
          *(ulonglong *)(lVar25 + (longlong)(int)uVar9 * 0x10) = uVar13;
          *(undefined8 *)(lVar25 + 8 + (longlong)(int)uVar9 * 0x10) = 0;
          iVar10 = *(int *)(param_1 + 0x378);
          lVar21 = (longlong)iVar10;
          *(uint *)(param_1 + 0x378) = iVar10 + 1U;
          if (*(uint *)(param_1 + 0x37c) < iVar10 + 1U) {
            FUN_144736ed4(local_e0,iVar10);
          }
        }
        else {
          uVar9 = FUN_14742e7b4(local_b8);
          lVar25 = *local_c8;
          lVar21 = (longlong)(int)uVar9;
          *(ulonglong *)(lVar25 + lVar21 * 0x10) = uVar13;
          *(undefined8 *)(lVar25 + 8 + lVar21 * 0x10) = 0;
        }
        *(uint *)(lVar21 * 4 + *local_e0) = uVar17;
        uVar24 = *(uint *)(param_1 + 0x3d0);
        uVar27 = uVar24 & uVar17;
        uVar13 = (ulonglong)uVar27;
        puVar16 = *(undefined4 **)(param_1 + 0x3c0);
        puVar11 = puVar16;
        if (puVar16 == (undefined4 *)0x0) {
          puVar11 = local_f8;
        }
        uVar28 = puVar11[uVar13];
        uVar30 = uVar9;
        if (!SBORROW4(0,uVar28)) {
          puVar20 = puVar11 + uVar13;
          uVar22 = uVar27 - uVar28 & uVar24;
          uVar26 = 0;
          do {
            if (uVar22 < uVar26) {
              if (*(uint *)(param_1 + 0x3d4) < uVar26) {
                *(uint *)(param_1 + 0x3d4) = uVar26;
                uVar28 = *puVar20;
              }
              puVar20 = *(uint **)(param_1 + 0x3a8);
              if (*(uint **)(param_1 + 0x3a8) == (uint *)0x0) {
                puVar20 = local_f0;
              }
              uVar3 = puVar20[uVar13];
              puVar20[uVar13] = uVar30;
              puVar16 = *(undefined4 **)(param_1 + 0x3c0);
              if (*(undefined4 **)(param_1 + 0x3c0) == (undefined4 *)0x0) {
                puVar16 = local_f8;
              }
              puVar16[uVar13] = uVar17;
              uVar24 = *(uint *)(param_1 + 0x3d0);
              puVar16 = *(undefined4 **)(param_1 + 0x3c0);
              uVar17 = uVar28;
              uVar26 = uVar22;
              uVar30 = uVar3;
            }
            uVar26 = uVar26 + 1;
            uVar27 = uVar27 + 1 & uVar24;
            puVar11 = puVar16;
            if (puVar16 == (undefined4 *)0x0) {
              puVar11 = local_f8;
            }
            uVar13 = (ulonglong)(int)uVar27;
            puVar20 = puVar11 + uVar13;
            uVar28 = *puVar20;
            uVar22 = uVar27 - uVar28 & uVar24;
          } while (!SBORROW4(0,uVar28));
          if (*(uint *)(param_1 + 0x3d4) < uVar26) {
            *(uint *)(param_1 + 0x3d4) = uVar26;
          }
        }
        puVar20 = *(uint **)(param_1 + 0x3a8);
        if (*(uint **)(param_1 + 0x3a8) == (uint *)0x0) {
          puVar20 = local_f0;
        }
        puVar20[uVar13] = uVar30;
        puVar16 = *(undefined4 **)(param_1 + 0x3c0);
        if (*(undefined4 **)(param_1 + 0x3c0) == (undefined4 *)0x0) {
          puVar16 = local_f8;
        }
        puVar16[uVar13] = uVar17;
        lVar25 = *(longlong *)(param_1 + 0x360);
        lVar21 = (longlong)(int)uVar9;
LAB_14320de2e:
        plVar12 = (longlong *)(lVar25 + lVar21 * 0x10 + 8);
        if (*plVar12 != 0) {
          *(undefined4 *)(local_d0 + 0x80) = *(undefined4 *)(*plVar12 + 0x7c);
          *(undefined4 *)(*plVar12 + 0x84) = *(undefined4 *)(local_d0 + 0x7c);
          *(byte *)(*plVar12 + 0x24) = *(byte *)(*plVar12 + 0x24) | 0x20;
        }
        *plVar12 = local_d0;
      }
      puVar15 = puVar15 + 1;
    } while (puVar15 != local_98);
    lVar25 = local_c0[1];
    if ((longlong)(int)lVar25 != 0) {
      lVar21 = *local_c0;
      lVar29 = 0;
      do {
        lVar4 = *(longlong *)
                 (*(longlong *)(param_1 + 0x188) +
                 (ulonglong)(*(uint *)(lVar21 + lVar29) & 0x3fffffff) * 8);
        if (((*(byte *)(lVar4 + 0x24) & 0x20) == 0) && (*(longlong *)(lVar4 + 0xa0) == 0)) {
          lVar5 = *(longlong *)(lVar4 + 0x88);
          *(undefined8 *)(lVar5 + 0xa0) = 0xffffffffffffffff;
          *(undefined8 *)(lVar5 + 0xa8) = 0xffffffff;
          *(undefined1 *)(lVar5 + 0xb0) = 1;
          puVar6 = *(undefined8 **)(lVar4 + 0x88);
          puVar7 = *(undefined8 **)(lVar4 + 0xa0);
          if (puVar7 != puVar6) {
            *(undefined8 **)(lVar4 + 0xa0) = puVar6;
            if (puVar6 != (undefined8 *)0x0) {
              LOCK();
              *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
              UNLOCK();
            }
            if (puVar7 != (undefined8 *)0x0) {
              LOCK();
              piVar1 = (int *)(puVar7 + 1);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)*puVar7)(puVar7,1);
              }
            }
          }
        }
        lVar29 = lVar29 + 4;
      } while ((longlong)(int)lVar25 * 4 != lVar29);
    }
  }
  uVar9 = DAT_14ca95570;
  if (DAT_14ca95570 < 4) {
    DAT_14ca95574 = 0;
    if (1 < DAT_14ca95570) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_128);
    }
    LOCK();
    DAT_14ca95570 = 0;
    UNLOCK();
  }
  else {
    LOCK();
    DAT_14ca95570 = DAT_14ca95570 - 4;
    UNLOCK();
  }
  if ((local_60 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14320e0b2 FUN_14320e0b2 body=2332 status=ok
// SIG undefined FUN_14320e0b2(void)

void FUN_14320e0b2(longlong param_1,undefined4 *param_2)

{
  byte bVar1;
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
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  ulonglong uVar18;
  char cVar19;
  uint uVar20;
  uint uVar21;
  undefined1 *puVar22;
  longlong *plVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  longlong lVar26;
  int iVar27;
  ulonglong uVar28;
  longlong lVar29;
  ulonglong uVar30;
  longlong *plVar31;
  undefined4 *puVar32;
  longlong lVar33;
  longlong *plVar34;
  bool bVar35;
  undefined1 auStack_348 [40];
  undefined4 *local_320;
  undefined4 local_314;
  longlong local_310;
  longlong *local_308;
  LPVOID local_300;
  longlong *local_2f8;
  longlong local_2f0;
  longlong local_2e8;
  longlong *local_2e0;
  longlong local_2d8;
  undefined1 *local_2d0;
  longlong local_2c8;
  undefined1 *local_2c0;
  char *local_2b8;
  uint *local_2b0;
  char *local_2a8;
  char local_29a;
  undefined1 local_299;
  uint local_298;
  char local_291;
  ulonglong local_290;
  undefined8 local_288;
  undefined1 local_280 [512];
  undefined1 *local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_348;
  local_320 = param_2;
  local_300 = TlsGetValue(DAT_14ca954e4);
  TlsSetValue(DAT_14ca954e4,(LPVOID)(param_1 + 0xa8));
  local_29a = *(char *)(param_1 + 0x580) == '\x02';
  local_2a8 = &local_291;
  local_80 = (undefined1 *)0x0;
  local_78 = 0x4000000000;
  local_2b0 = &local_298;
  local_298 = 0;
  local_2c0 = &local_299;
  local_2b8 = &local_29a;
  local_299 = 0;
  local_308 = (longlong *)(param_1 + 0x540);
  local_2d0 = local_280;
  local_2c8 = param_1;
  local_291 = local_29a;
  FUN_14320e9d0(local_308,L".\\Runtime/RenderCore/Private/RenderGraphBuilder.cpp(2799)");
  local_2d8 = param_1 + 0x560;
  FUN_14320e9d0(local_2d8,L".\\Runtime/RenderCore/Private/RenderGraphBuilder.cpp(2800)");
  if (local_291 == '\x01') {
    FUN_14320e9d0(param_1 + 0x550,L".\\Runtime/RenderCore/Private/RenderGraphBuilder.cpp(2804)");
    FUN_14320e9d0(param_1 + 0x570,L".\\Runtime/RenderCore/Private/RenderGraphBuilder.cpp(2805)");
  }
  if (*(int *)(param_1 + 0x53c) < 0x20) {
    FUN_1400dea38(param_1 + 0x530);
  }
  uVar18 = local_78;
  lVar29 = (longlong)(int)local_78;
  uVar20 = (int)local_78 + 1;
  local_78 = CONCAT44(local_78._4_4_,uVar20);
  if (local_78._4_4_ < uVar20) {
    FUN_14742e62e(local_280,uVar18 & 0xffffffff);
  }
  puVar22 = local_80;
  if (local_80 == (undefined1 *)0x0) {
    puVar22 = local_280;
  }
  *(undefined8 *)(puVar22 + lVar29 * 8) = *(undefined8 *)(param_1 + 0x140);
  if (*(int *)(param_1 + 0x170) - 3U < 0xfffffffe) {
    uVar20 = 1;
    do {
      lVar29 = *(longlong *)(*(longlong *)(param_1 + 0x168) + (longlong)(int)uVar20 * 8);
      if ((*(byte *)(lVar29 + 0x38) & 0x20) == 0) {
        cVar19 = *(char *)(lVar29 + 0x2a);
        if (cVar19 == '\0') {
LAB_14320e34c:
          FUN_14320eb4c(&local_2d0);
        }
        else if ((*(byte *)(lVar29 + 0x35) & 2) == 0) {
          if (((local_291 == '\x01') && ((bool)local_29a != (cVar19 == '\x02'))) &&
             (DAT_14c760df4 - 1U < local_298)) {
            FUN_14320eb4c(&local_2d0);
          }
          uVar18 = local_78;
          local_29a = local_29a != '\0' && cVar19 == '\x02';
          lVar33 = (longlong)(int)local_78;
          uVar21 = (int)local_78 + 1;
          local_78 = CONCAT44(local_78._4_4_,uVar21);
          if (local_78._4_4_ < uVar21) {
            FUN_14742e62e(local_280,uVar18 & 0xffffffff);
          }
          puVar22 = local_80;
          if (local_80 == (undefined1 *)0x0) {
            puVar22 = local_280;
          }
          *(longlong *)(puVar22 + lVar33 * 8) = lVar29;
          if ((*(uint *)(lVar29 + 0x34) & 3) == 0) {
            local_298 = local_298 + *(int *)(lVar29 + 0x30);
          }
          if ((*(uint *)(lVar29 + 0x34) >> 8 & 1) != 0) {
            local_299 = 1;
            FUN_14320eb4c(&local_2d0);
          }
          if (DAT_14c760df8 <= local_298) goto LAB_14320e34c;
        }
        else {
          FUN_14320eb4c(&local_2d0);
          *(byte *)(lVar29 + 0x38) = *(byte *)(lVar29 + 0x38) | 7;
        }
      }
      uVar20 = uVar20 + 1;
    } while (uVar20 < *(int *)(param_1 + 0x170) - 1U);
  }
  uVar18 = local_78;
  lVar29 = (longlong)(int)local_78;
  uVar20 = (int)local_78 + 1;
  local_78 = CONCAT44(local_78._4_4_,uVar20);
  if (local_78._4_4_ < uVar20) {
    FUN_14742e62e(local_280,uVar18 & 0xffffffff);
  }
  puVar22 = local_280;
  if (local_80 != (undefined1 *)0x0) {
    puVar22 = local_80;
  }
  *(undefined8 *)(puVar22 + lVar29 * 8) = *(undefined8 *)(param_1 + 0x148);
  FUN_14320eb4c(&local_2d0);
  local_310 = param_1;
  if ((longlong)*(int *)(param_1 + 0x538) != 0) {
    plVar34 = *(longlong **)(param_1 + 0x530);
    local_2e0 = plVar34 + (longlong)*(int *)(param_1 + 0x538) * 4;
    local_2e8 = param_1 + 0x570;
    local_2f0 = 0x528e258f00;
    local_2f8 = (longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
    puVar32 = local_320;
    do {
      lVar33 = FUN_14001cc68(0x308,0x10);
      FUN_14009016e(lVar33,~(-1 << ((byte)DAT_14c760da4 & 0x1f)),0);
      uVar3 = *puVar32;
      uVar4 = puVar32[1];
      uVar5 = puVar32[2];
      uVar6 = puVar32[3];
      uVar7 = puVar32[4];
      uVar8 = puVar32[5];
      uVar9 = puVar32[6];
      uVar10 = puVar32[7];
      uVar11 = puVar32[8];
      uVar12 = puVar32[9];
      uVar13 = puVar32[10];
      uVar14 = puVar32[0xb];
      uVar15 = puVar32[0xd];
      uVar16 = puVar32[0xe];
      uVar17 = puVar32[0xf];
      *(undefined4 *)(lVar33 + 0x1f8) = puVar32[0xc];
      *(undefined4 *)(lVar33 + 0x1fc) = uVar15;
      *(undefined4 *)(lVar33 + 0x200) = uVar16;
      *(undefined4 *)(lVar33 + 0x204) = uVar17;
      *(undefined4 *)(lVar33 + 0x1e8) = uVar11;
      *(undefined4 *)(lVar33 + 0x1ec) = uVar12;
      *(undefined4 *)(lVar33 + 0x1f0) = uVar13;
      *(undefined4 *)(lVar33 + 500) = uVar14;
      *(undefined4 *)(lVar33 + 0x1d8) = uVar7;
      *(undefined4 *)(lVar33 + 0x1dc) = uVar8;
      *(undefined4 *)(lVar33 + 0x1e0) = uVar9;
      *(undefined4 *)(lVar33 + 0x1e4) = uVar10;
      *(undefined4 *)(lVar33 + 0x1c8) = uVar3;
      *(undefined4 *)(lVar33 + 0x1cc) = uVar4;
      *(undefined4 *)(lVar33 + 0x1d0) = uVar5;
      *(undefined4 *)(lVar33 + 0x1d4) = uVar6;
      *plVar34 = lVar33;
      bVar1 = *(byte *)((longlong)plVar34 + 0x19);
      lVar29 = local_2d8;
      if (bVar1 != 0) {
        lVar29 = local_2e8;
      }
      lVar2 = plVar34[1];
      local_314 = (undefined4)plVar34[2];
      plVar23 = TlsGetValue(DAT_14c896140);
      if (plVar23 == (longlong *)0x0) {
        plVar23 = (longlong *)FUN_14001cc68(0x18,0x10);
        *plVar23 = 0;
        plVar23[1] = 0;
        *(undefined4 *)(plVar23 + 2) = 0;
        TlsSetValue(DAT_14c896140,plVar23);
      }
      plVar31 = (longlong *)plVar23[1];
      if (plVar31 == (longlong *)0x0) {
        plVar31 = (longlong *)*plVar23;
        if (plVar31 == (longlong *)0x0) {
          uVar20 = (uint)DAT_14c896180;
          uVar18 = DAT_14c896180;
          while (DAT_14c896180 = uVar18, local_288 = uVar18, (uVar18 & 0x3ffffff) != 0) {
            local_290 = (uVar18 & 0xfffffffffc000000) + 0x4000000;
            if (local_290 >> 0x1a < uVar18 >> 0x1a) {
              FUN_14000f986(0x3a83126f);
            }
            uVar28 = (ulonglong)((uVar20 & 0x3ffffff) >> 0xe);
            uVar30 = (ulonglong)((uint)uVar18 & 0x3fff);
            local_290 = local_290 & 0xfffffffffc000000 |
                        (ulonglong)
                        *(uint *)(*(longlong *)(&DAT_14c833b00 + uVar28 * 8) + 0x10 + uVar30 * 0x18)
            ;
            LOCK();
            bVar35 = local_288 == DAT_14c896180;
            uVar18 = local_290;
            if (!bVar35) {
              uVar18 = DAT_14c896180;
            }
            DAT_14c896180 = uVar18;
            UNLOCK();
            if (bVar35) {
              *(undefined4 *)(*(longlong *)(&DAT_14c833b00 + uVar28 * 8) + uVar30 * 0x18 + 0x10) = 0
              ;
              plVar31 = *(longlong **)
                         (*(longlong *)(&DAT_14c833b00 + uVar28 * 8) + 8 +
                         (ulonglong)(uVar20 & 0x3fff) * 0x18);
              FUN_1447d080c(uVar20 & 0x3ffffff);
              plVar23[1] = (longlong)plVar31;
              puVar32 = local_320;
              if (plVar31 == (longlong *)0x0) goto LAB_14320e687;
              goto LAB_14320e6c2;
            }
            uVar20 = (uint)DAT_14c896180;
            uVar18 = DAT_14c896180;
          }
          plVar23[1] = 0;
LAB_14320e687:
          puVar32 = local_320;
          puVar24 = (undefined8 *)FUN_14001cc68(0x10000,0);
          plVar23[1] = (longlong)puVar24;
          iVar27 = 0xff;
          do {
            puVar25 = puVar24 + 0x20;
            *puVar24 = puVar25;
            iVar27 = iVar27 + -1;
            puVar24 = puVar25;
          } while (iVar27 != 0);
          *puVar25 = 0;
          plVar31 = (longlong *)plVar23[1];
        }
        else {
          plVar23[1] = (longlong)plVar31;
          *plVar23 = 0;
        }
LAB_14320e6c2:
        *(undefined4 *)(plVar23 + 2) = 0x100;
        iVar27 = 0x100;
      }
      else {
        iVar27 = (int)plVar23[2];
      }
      plVar23[1] = *plVar31;
      *(int *)(plVar23 + 2) = iVar27 + -1;
      *plVar31 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
      plVar31[1] = (longlong)&DAT_100000002;
      plVar31[2] = 0;
      *(undefined4 *)(plVar31 + 3) = 0;
      *(undefined4 *)(plVar31 + 4) = 0xffffffff;
      plVar31[6] = 0;
      plVar31[7] = 0x100000000;
      *(undefined1 *)(plVar31 + 8) = 1;
      plVar31[0xe] = (longlong)
                     LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateDummy::vftable;
      plVar31[0xf] = 0;
      plVar31[0x10] = -0x17ffffffffffffe0;
      plVar31[0x12] = 0;
      plVar31[0x13] = 0x100000000;
      *(undefined2 *)(plVar31 + 0x14) = 0;
      LOCK();
      bVar35 = (char)plVar31[8] == '\x01';
      if (bVar35) {
        *(char *)(plVar31 + 8) = '\0';
      }
      UNLOCK();
      if (!bVar35) {
        FUN_14008cdb0(plVar31 + 8);
      }
      *plVar31 = (longlong)&PTR_FUN_14a38ba00;
      if (*(code **)(plVar31[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(plVar31[0xe] + 0x18))(plVar31 + 0xe,plVar31 + 9);
      }
      plVar31[0xe] = (longlong)
                     LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      plVar31[9] = (longlong)plVar31;
      plVar31[10] = (longlong)plVar31;
      if (*local_2f8 == 0) {
        lVar26 = 0;
      }
      else {
        lVar26 = *(longlong *)(*local_2f8 + 0x30);
      }
      plVar31[0xf] = lVar26;
      plVar31[0x10] = ((ulonglong)bVar1 << 0x3b) + local_2f0 | 0xc000000000000000;
      *(undefined4 *)((longlong)plVar31 + 0x1c) = 0;
      plVar31[0x15] = lVar2;
      *(undefined4 *)(plVar31 + 0x16) = local_314;
      *(byte *)(plVar31 + 0x17) = bVar1;
      uVar3 = (undefined4)local_288;
      *(undefined4 *)((longlong)plVar31 + 0xb9) = uVar3;
      *(undefined4 *)((longlong)plVar31 + 0xbc) = local_288._3_4_;
      plVar31[0x18] = lVar33;
      *plVar31 = (longlong)&PTR_FUN_14a38b9f0;
      FUN_1400e88c2(plVar31,lVar29);
      local_290 = CONCAT71(local_290._1_7_,1);
      FUN_1447439e4(plVar31,&local_290);
      if (*(char *)((longlong)plVar34 + 0x19) == '\x01') {
        if (plVar31 != (longlong *)0x0) {
          lVar29 = *(longlong *)(local_310 + 0x550);
LAB_14320e8b2:
          LOCK();
          *(int *)(lVar29 + 0xc) = *(int *)(lVar29 + 0xc) + 1;
          UNLOCK();
          cVar19 = FUN_1456bb142(plVar31 + 0x11,lVar29);
          if (cVar19 == '\0') {
            LOCK();
            *(int *)(lVar29 + 0xc) = *(int *)(lVar29 + 0xc) + -1;
            UNLOCK();
          }
          else {
            LOCK();
            *(int *)(plVar31 + 1) = (int)plVar31[1] + 1;
            UNLOCK();
            FUN_1456bb1d4(lVar29 + 0x28,plVar31);
          }
          LOCK();
          plVar23 = plVar31 + 1;
          *(int *)plVar23 = (int)*plVar23 + -1;
          UNLOCK();
          if ((int)*plVar23 == 0) {
            (**(code **)*plVar31)(plVar31,1);
          }
        }
      }
      else if (plVar31 != (longlong *)0x0) {
        lVar29 = *local_308;
        goto LAB_14320e8b2;
      }
      plVar34 = plVar34 + 4;
    } while (plVar34 != local_2e0);
  }
  TlsSetValue(DAT_14ca954e4,local_300);
  if ((local_70 ^ (ulonglong)auStack_348) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14320e9d0 FUN_14320e9d0 body=380 status=ok
// SIG undefined FUN_14320e9d0(void)

longlong * FUN_14320e9d0(longlong *param_1,ulonglong param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  bool bVar5;
  
  if (((char)param_1[1] == '\x01') && (puVar3 = (undefined8 *)*param_1, puVar3 != (undefined8 *)0x0)
     ) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  puVar3 = (undefined8 *)FUN_1448fe162();
  *puVar3 = UE::Tasks::Private::FTaskBase::vftable;
  puVar3[1] = &DAT_100000001;
  puVar3[2] = 0;
  *(undefined4 *)(puVar3 + 3) = 0;
  *(undefined4 *)(puVar3 + 4) = 0xffffffff;
  puVar3[6] = 0;
  puVar3[7] = 0x100000000;
  *(undefined1 *)(puVar3 + 8) = 1;
  puVar3[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                TTaskDelegateDummy::vftable;
  puVar3[0xf] = 0;
  puVar3[0x10] = 0xe800000000000020;
  puVar3[0x12] = 0;
  puVar3[0x13] = 0x100000000;
  *(undefined2 *)(puVar3 + 0x14) = 0;
  LOCK();
  bVar5 = *(char *)(puVar3 + 8) == '\x01';
  if (bVar5) {
    *(char *)(puVar3 + 8) = '\0';
  }
  UNLOCK();
  if (!bVar5) {
    FUN_14008cdb0(puVar3 + 8);
  }
  *puVar3 = &PTR_FUN_149e1e2e0;
  if (*(code **)(puVar3[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(puVar3[0xe] + 0x18))(puVar3 + 0xe,puVar3 + 9);
  }
  puVar3[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                ::vftable;
  puVar3[9] = puVar3;
  puVar3[10] = puVar3;
  lVar2 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8);
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(lVar2 + 0x30);
  }
  puVar3[0xf] = uVar4;
  puVar3[0x10] = (param_2 & 0x1ffffffffffffe) << 6 | 0xc800000000000000;
  *(undefined4 *)((longlong)puVar3 + 0x1c) = 2;
  *param_1 = (longlong)puVar3;
  *(undefined1 *)(param_1 + 1) = 1;
  return param_1;
}



// FUNCTION 14320eb4c FUN_14320eb4c body=524 status=ok
// SIG undefined FUN_14320eb4c(void)

void FUN_14320eb4c(longlong *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  
  plVar6 = (longlong *)*param_1;
  uVar14 = *(uint *)(plVar6 + 0x41);
  uVar15 = (ulonglong)uVar14;
  if (uVar15 != 0) {
    lVar3 = param_1[1];
    plVar7 = (longlong *)plVar6[0x40];
    if ((longlong *)plVar6[0x40] == (longlong *)0x0) {
      plVar7 = plVar6;
    }
    lVar8 = *plVar7;
    uVar17 = 0;
    if ((*(uint *)(lVar8 + 0x48) < *(uint *)(lVar8 + 0x2c)) && (0 < (int)uVar14)) {
      uVar17 = 0;
      do {
        if (plVar7[uVar17] ==
            *(longlong *)(*(longlong *)(lVar3 + 0x168) + (longlong)*(int *)(lVar8 + 0x4c) * 8)) {
          uVar17 = (ulonglong)((int)uVar17 + 1);
          goto LAB_14320ebbf;
        }
        uVar17 = uVar17 + 1;
        uVar16 = uVar14;
      } while (uVar15 != uVar17);
    }
    else {
LAB_14320ebbf:
      uVar16 = (uint)uVar17;
      if ((int)uVar16 < (int)uVar14) {
        lVar8 = plVar7[(longlong)(int)uVar14 - 1];
        if (*(uint *)(lVar8 + 0x2c) < *(uint *)(lVar8 + 0x4c)) {
          uVar11 = (longlong)(int)uVar14;
          do {
            uVar15 = uVar17;
            if ((longlong)uVar11 <= (longlong)(int)uVar16) break;
            uVar15 = uVar11 - 1;
            lVar13 = uVar11 - 1;
            uVar11 = uVar15;
          } while (plVar7[lVar13] !=
                   *(longlong *)
                    (*(longlong *)(lVar3 + 0x168) + (longlong)*(int *)(lVar8 + 0x48) * 8));
        }
      }
    }
    uVar14 = (uint)uVar15;
    iVar9 = uVar14 - uVar16;
    if (DAT_14c760e08 <= iVar9) {
      lVar13 = (longlong)(int)uVar16;
      lVar8 = plVar7[lVar13];
      puVar1 = (uint *)(lVar8 + 0x38);
      *puVar1 = *puVar1 | 1;
      *(undefined4 *)(lVar8 + 0x1a8) = *(undefined4 *)(lVar3 + 0x538);
      lVar8 = *(longlong *)(*param_1 + 0x200);
      if (lVar8 == 0) {
        lVar8 = *param_1;
      }
      lVar8 = *(longlong *)(lVar8 + -8 + (longlong)(int)uVar14 * 8);
      puVar1 = (uint *)(lVar8 + 0x38);
      *puVar1 = *puVar1 | 2;
      iVar10 = *(int *)(lVar3 + 0x538);
      *(int *)(lVar8 + 0x1a8) = iVar10;
      lVar8 = lVar13;
      if ((int)uVar16 < (int)uVar14) {
        do {
          lVar5 = *(longlong *)(*param_1 + 0x200);
          if (lVar5 == 0) {
            lVar5 = *param_1;
          }
          puVar1 = (uint *)(*(longlong *)(lVar5 + lVar8 * 8) + 0x38);
          *puVar1 = *puVar1 | 4;
          lVar8 = lVar8 + 1;
        } while ((int)uVar14 != lVar8);
        iVar10 = *(int *)(lVar3 + 0x538);
      }
      *(uint *)(lVar3 + 0x538) = iVar10 + 1U;
      if (*(uint *)(lVar3 + 0x53c) < iVar10 + 1U) {
        FUN_14178ed00((longlong *)(lVar3 + 0x530),iVar10);
      }
      lVar8 = *(longlong *)(lVar3 + 0x530);
      lVar12 = (longlong)iVar10 * 0x20;
      lVar3 = lVar8 + lVar12;
      puVar2 = (undefined8 *)(lVar8 + 0x10 + lVar12);
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined8 *)(lVar8 + lVar12) = 0;
      ((undefined8 *)(lVar8 + lVar12))[1] = 0;
      lVar5 = *param_1;
      lVar4 = *(longlong *)(lVar5 + 0x200);
      *(int *)(lVar8 + 0x10 + lVar12) = iVar9;
      if (uVar14 != uVar16) {
        if (lVar4 != 0) {
          lVar5 = lVar4;
        }
        FUN_14470e57a(lVar3 + 8,0);
        memcpy(*(void **)(lVar3 + 8),(void *)(lVar5 + lVar13 * 8),(longlong)iVar9 << 3);
      }
      *(undefined1 *)(lVar3 + 0x18) = *(undefined1 *)param_1[2];
      *(undefined1 *)(lVar3 + 0x19) = *(undefined1 *)param_1[3];
      plVar6 = (longlong *)*param_1;
    }
    *(undefined4 *)(plVar6 + 0x41) = 0;
    if (*(int *)((longlong)plVar6 + 0x20c) < 0) {
      FUN_14742c7c0();
    }
    *(undefined4 *)param_1[4] = 0;
    *(undefined1 *)param_1[2] = 0;
    *(undefined1 *)param_1[3] = *(undefined1 *)param_1[5];
  }
  return;
}



// FUNCTION 14320ed58 FUN_14320ed58 body=145 status=ok
// SIG undefined FUN_14320ed58(void)

void FUN_14320ed58(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 != (undefined8 *)0x0) {
    lVar2 = *param_1;
    lVar3 = param_2[(ulonglong)(*(char *)(lVar2 + 0x2b) == '\x02') + 3];
    if ((lVar2 == param_2[1]) || (lVar2 == lVar3)) {
      FUN_14320ed58(param_3,*param_2);
      if ((lVar2 == lVar3) &&
         (((*(char *)(param_2 + 9) == '\x01' && (lVar2 = param_2[7], lVar2 != 0)) &&
          (*(char *)(param_1[1] + 0x69) == '\x01')))) {
        iVar1 = *(int *)(param_2 + 8);
        (**(code **)(*DAT_14ca83900 + 0x2b0))
                  (DAT_14ca83900,param_1[1],
                   *(undefined8 *)(*(longlong *)(lVar2 + 8) + 8 + (longlong)iVar1 * 0x30));
        *(undefined1 *)(*(longlong *)(lVar2 + 8) + 0x28 + (longlong)iVar1 * 0x30) = 1;
      }
    }
  }
  return;
}



// FUNCTION 14320edea FUN_14320edea body=577 status=ok
// SIG undefined FUN_14320edea(void)

void FUN_14320edea(longlong param_1,ulonglong *param_2,char param_3)

{
  size_t _Size;
  char cVar1;
  int iVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined1 *puVar6;
  void *pvVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  void *_Dst;
  longlong lVar13;
  undefined1 auStack_c8 [40];
  ulonglong *local_a0;
  undefined1 local_98 [64];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  cVar1 = *(char *)(param_1 + 0x38);
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x30) + 0x2c);
  local_58 = (undefined1 *)0x0;
  local_50 = 0x800000000;
  uVar10 = *(uint *)(param_1 + 0x28);
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar10);
  }
  local_a0 = param_2;
  if (8 < uVar10) {
    FUN_1401a3884(local_98);
    uVar10 = *(uint *)(param_1 + 0x28);
  }
  lVar13 = *(longlong *)(param_1 + 0x20);
  if (*(longlong *)(param_1 + 0x20) == 0) {
    lVar13 = param_1;
  }
  if (uVar10 != 0) {
    lVar12 = 0;
    do {
      uVar4 = local_50;
      puVar9 = *(undefined8 **)(lVar13 + lVar12);
      if ((*(int *)(puVar9 + (ulonglong)(param_3 == '\x02') + 2) == iVar2) &&
         (*(char *)((longlong)puVar9 + (ulonglong)(param_3 == '\x02') * 8 + 0x14) == cVar1)) {
        iVar11 = (int)local_50;
        uVar5 = local_50._4_4_;
        if (puVar9[1] != 0) {
          uVar5 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar5);
          if (local_50._4_4_ < uVar5) {
            FUN_14178f3f0(local_98,uVar4 & 0xffffffff);
          }
          puVar6 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar6 = local_98;
          }
          *(undefined8 *)(puVar6 + (longlong)iVar11 * 8) = puVar9[1];
          iVar11 = (int)local_50;
          uVar5 = local_50._4_4_;
        }
        local_50 = CONCAT44(local_50._4_4_,iVar11 + 1U);
        if (uVar5 < iVar11 + 1U) {
          FUN_14178f3f0(local_98,iVar11);
        }
        puVar6 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar6 = local_98;
        }
        *(undefined8 *)(puVar6 + (longlong)iVar11 * 8) = *puVar9;
      }
      lVar12 = lVar12 + 8;
    } while ((longlong)(int)uVar10 * 8 != lVar12);
  }
  puVar3 = local_a0;
  iVar2 = (int)local_50;
  lVar13 = (longlong)(int)local_50;
  if (lVar13 != 0) {
    puVar6 = local_98;
    if (local_58 != (undefined1 *)0x0) {
      puVar6 = local_58;
    }
    _Size = lVar13 * 8;
    _Dst = (void *)(*local_a0 + 7 & 0xfffffffffffffff8);
    pvVar7 = (void *)((longlong)_Dst + lVar13 * 8);
    if ((void *)local_a0[1] < pvVar7) {
      FUN_140023dd8(local_a0,(int)_Size + 8);
      _Dst = (void *)(*puVar3 + 7 & 0xfffffffffffffff8);
      pvVar7 = (void *)((longlong)_Dst + _Size);
    }
    *puVar3 = (ulonglong)pvVar7;
    memcpy(_Dst,puVar6,_Size);
    puVar8 = (undefined8 *)(*puVar3 + 7 & 0xfffffffffffffff8);
    puVar9 = puVar8 + 4;
    if ((undefined8 *)puVar3[1] < puVar9) {
      FUN_140023dd8(puVar3,0x28);
      puVar8 = (undefined8 *)(*puVar3 + 7 & 0xfffffffffffffff8);
      puVar9 = puVar8 + 4;
    }
    *puVar3 = (ulonglong)puVar9;
    *(int *)(puVar3 + 0xc) = (int)puVar3[0xc] + 1;
    *(undefined8 **)puVar3[6] = puVar8;
    puVar3[6] = (ulonglong)(puVar8 + 1);
    puVar8[1] = 0;
    *puVar8 = &PTR_FUN_14a380c38;
    puVar8[2] = _Dst;
    *(int *)(puVar8 + 3) = iVar2;
  }
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14320f02e FUN_14320f02e body=1092 status=ok
// SIG undefined FUN_14320f02e(void)

void FUN_14320f02e(longlong param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint *puVar8;
  uint uVar9;
  LPVOID lpTlsValue;
  uint uVar10;
  uint *puVar11;
  int iVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  ulonglong uVar16;
  uint *puVar17;
  longlong lVar18;
  
  lpTlsValue = TlsGetValue(DAT_14ca954e4);
  TlsSetValue(DAT_14ca954e4,(LPVOID)(param_1 + 0xe0));
  if (*(int *)(param_1 + 0x170) - 3U < 0xfffffffe) {
    uVar9 = 1;
    do {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x168) + (longlong)(int)uVar9 * 8);
      if ((*(byte *)(lVar4 + 0x38) & 0x20) == 0) {
        cVar1 = *(char *)(lVar4 + 0x2b);
        if ((longlong)*(int *)(lVar4 + 0x78) != 0) {
          plVar14 = *(longlong **)(lVar4 + 0x70);
          plVar15 = plVar14 + (longlong)*(int *)(lVar4 + 0x78) * 6;
          uVar16 = (ulonglong)(cVar1 == '\x02');
          do {
            iVar12 = (int)plVar14[2];
            if (0 < iVar12) {
              lVar5 = *plVar14;
              lVar18 = 0;
              do {
                puVar11 = *(uint **)(plVar14[1] + lVar18 * 8);
                if (puVar11 != (uint *)0x0) {
                  lVar6 = *(longlong *)(lVar5 + 0xd8);
                  lVar7 = plVar14[3];
                  puVar17 = *(uint **)(lVar6 + lVar18 * 8);
                  if (puVar17 == (uint *)0x0) {
LAB_14320f226:
                    *(uint **)(lVar6 + lVar18 * 8) = puVar11;
                  }
                  else {
                    uVar2 = *puVar11;
                    uVar3 = *puVar17;
                    uVar10 = uVar3 | uVar2;
                    if ((uVar3 != uVar2) &&
                       (((((uVar2 & 0x2fc00) != 0 && ((uVar3 & 0x901ff) != 0)) ||
                         (((uVar2 & 0x90fff) != 0 && ((uVar3 & 0x7000) != 0)))) ||
                        ((((uVar10 & 0xc00) != 0 && (uVar10 & 0xfffff3ff) != 0 ||
                          ((~uVar10 & 0x8200) == 0 && (uVar10 & 0xffff7dff) != 0)) ||
                         ((uVar10 & ~DAT_14c760dac) != 0)))))) goto LAB_14320f226;
                    if ((uVar2 & 0xc00) != 0) {
                      uVar2 = puVar11[5];
                      if (puVar11[5] == DAT_14ca95bd0) {
                        uVar2 = 0xffffffff;
                      }
                      uVar3 = puVar17[5];
                      if (puVar17[5] == DAT_14ca95bd0) {
                        uVar3 = 0xffffffff;
                      }
                      if ((uVar2 == 0xffffffff) || (uVar3 != uVar2)) goto LAB_14320f226;
                    }
                    if ((((uVar10 & ~DAT_14c760db0) != 0) &&
                        ((char)((puVar17[2] != 0xffffffff) * '\x02' | puVar17[1] != 0xffffffff) !=
                         (char)((puVar11[2] != 0xffffffff) * '\x02' | puVar11[1] != 0xffffffff))) ||
                       (puVar17[7] != puVar11[7])) goto LAB_14320f226;
                    *puVar17 = uVar10;
                    if ((short)puVar11[6] != -1) {
                      *(short *)(*(longlong *)(lVar6 + lVar18 * 8) + 0x18) = (short)puVar11[6];
                    }
                    lVar13 = *(longlong *)(lVar6 + lVar18 * 8);
                    if (*(int *)(lVar13 + 4 + uVar16 * 4) == -1) {
                      *(uint *)(lVar13 + 4 + uVar16 * 4) = uVar9;
                      lVar13 = *(longlong *)(lVar6 + lVar18 * 8);
                    }
                    *(uint *)(lVar13 + 0xc + uVar16 * 4) = uVar9;
                    puVar11 = *(uint **)(lVar6 + lVar18 * 8);
                  }
                  *(uint **)(lVar7 + lVar18 * 8) = puVar11;
                  iVar12 = (int)plVar14[2];
                }
                lVar18 = lVar18 + 1;
              } while (lVar18 < iVar12);
            }
            plVar14 = plVar14 + 6;
          } while (plVar14 != plVar15);
        }
        iVar12 = *(int *)(lVar4 + 0x88);
        if ((longlong)iVar12 != 0) {
          lVar4 = *(longlong *)(lVar4 + 0x80);
          uVar16 = (ulonglong)(cVar1 == '\x02');
          puVar11 = (uint *)(lVar4 + 0x24);
          do {
            lVar5 = *(longlong *)(puVar11 + -9);
            puVar17 = puVar11 + -7;
            puVar8 = *(uint **)(lVar5 + 0x148);
            if (puVar8 == (uint *)0x0) {
LAB_14320f3e4:
              *(uint **)(lVar5 + 0x148) = puVar17;
            }
            else {
              uVar2 = *puVar17;
              uVar3 = *puVar8;
              uVar10 = uVar3 | uVar2;
              if ((uVar3 != uVar2) &&
                 (((((uVar2 & 0x2fc00) != 0 && ((uVar3 & 0x901ff) != 0)) ||
                   (((uVar2 & 0x90fff) != 0 && ((uVar3 & 0x7000) != 0)))) ||
                  ((((uVar10 & 0xc00) != 0 && (uVar10 & 0xfffff3ff) != 0 ||
                    ((~uVar10 & 0x8200) == 0 && (uVar10 & 0xffff7dff) != 0)) ||
                   ((uVar10 & ~DAT_14c760dac) != 0)))))) goto LAB_14320f3e4;
              if ((uVar2 & 0xc00) != 0) {
                uVar2 = puVar11[-2];
                if (puVar11[-2] == DAT_14ca95bd0) {
                  uVar2 = 0xffffffff;
                }
                uVar3 = puVar8[5];
                if (puVar8[5] == DAT_14ca95bd0) {
                  uVar3 = 0xffffffff;
                }
                if ((uVar2 == 0xffffffff) || (uVar3 != uVar2)) goto LAB_14320f3e4;
              }
              if ((((uVar10 & ~DAT_14c760db0) != 0) &&
                  ((char)((puVar8[2] != 0xffffffff) * '\x02' | puVar8[1] != 0xffffffff) !=
                   (char)((puVar11[-5] != 0xffffffff) * '\x02' | puVar11[-6] != 0xffffffff))) ||
                 (puVar8[7] != *puVar11)) goto LAB_14320f3e4;
              *puVar8 = uVar10;
              if ((short)puVar11[-1] != -1) {
                *(short *)(*(longlong *)(lVar5 + 0x148) + 0x18) = (short)puVar11[-1];
              }
              lVar18 = *(longlong *)(lVar5 + 0x148);
              if (*(int *)(lVar18 + 4 + uVar16 * 4) == -1) {
                *(uint *)(lVar18 + 4 + uVar16 * 4) = uVar9;
                lVar18 = *(longlong *)(lVar5 + 0x148);
              }
              *(uint *)(lVar18 + 0xc + uVar16 * 4) = uVar9;
              puVar17 = *(uint **)(lVar5 + 0x148);
            }
            *(uint **)(puVar11 + 1) = puVar17;
            puVar17 = puVar11 + 5;
            puVar11 = puVar11 + 0xe;
          } while (puVar17 != (uint *)((longlong)iVar12 * 0x38 + lVar4));
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(int *)(param_1 + 0x170) - 1U);
  }
                    /* WARNING: Could not recover jumptable at 0x00014320f46b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TlsSetValue(DAT_14ca954e4,lpTlsValue);
  return;
}



// FUNCTION 14320f472 FUN_14320f472 body=9064 status=ok
// SIG undefined FUN_14320f472(void)

void FUN_14320f472(longlong param_1)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  ushort *puVar4;
  ushort *puVar5;
  undefined3 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  bool bVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  undefined8 *puVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  undefined8 *puVar23;
  longlong lVar24;
  uint uVar25;
  undefined8 *puVar26;
  undefined4 *puVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  uint *puVar31;
  ulonglong uVar32;
  longlong lVar33;
  longlong lVar34;
  int iVar35;
  uint *puVar36;
  ulonglong uVar37;
  bool bVar38;
  longlong lVar39;
  byte bVar40;
  byte bVar41;
  char cVar42;
  uint uVar43;
  ulonglong in_R10;
  ulonglong *puVar44;
  longlong *plVar45;
  uint *puVar46;
  int iVar47;
  longlong *plVar48;
  ulonglong uVar49;
  undefined1 auStack_188 [40];
  longlong local_160;
  ulonglong local_158;
  undefined8 local_150;
  ulonglong *local_148;
  longlong *local_140;
  ulonglong local_138;
  longlong local_130;
  longlong *local_128;
  ulonglong local_120;
  ulonglong local_118;
  ulonglong local_110;
  ulonglong local_108;
  ulonglong local_100;
  longlong *local_f8;
  ulonglong local_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  longlong local_d8;
  undefined8 *local_d0;
  uint *local_c8;
  uint *local_c0;
  ulonglong local_b8;
  uint local_ac;
  LPVOID local_a8;
  longlong *local_a0;
  uint local_98;
  uint auStack_94 [4];
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  longlong local_70 [6];
  
  local_70[2] = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_a8 = TlsGetValue(DAT_14ca954e4);
  local_148 = (ulonglong *)(param_1 + 0xe0);
  TlsSetValue(DAT_14ca954e4,(ulonglong *)(param_1 + 0xe0));
  if (*(int *)(param_1 + 0x170) - 3U < 0xfffffffe) {
    local_140 = (longlong *)(param_1 + 0x468);
    local_128 = (longlong *)(param_1 + 0x3d8);
    local_e0 = param_1 + 0x410;
    local_e8 = param_1 + 0x418;
    local_130 = param_1 + 1000;
    uVar25 = 1;
    local_160 = param_1;
    do {
      lVar24 = *(longlong *)(*(longlong *)(param_1 + 0x168) + (longlong)(int)uVar25 * 8);
      local_ac = uVar25;
      if ((*(byte *)(lVar24 + 0x38) & 0x28) == 0) {
        if ((longlong)*(int *)(lVar24 + 0x78) != 0) {
          plVar48 = *(longlong **)(lVar24 + 0x70);
          local_a0 = plVar48 + (longlong)*(int *)(lVar24 + 0x78) * 6;
          local_d8 = lVar24;
          do {
            local_d0 = (undefined8 *)*plVar48;
            uVar25 = *(uint *)(local_d0 + 0x15);
            local_c0 = (uint *)(ulonglong)*(ushort *)((longlong)local_d0 + 0xb4);
            local_f8 = plVar48;
            if (((DAT_14ca84e6a == '\0') && (*(char *)((longlong)local_d0 + 0x93) == '\v')) &&
               (uVar17 = (uVar25 >> 0x10) * (uVar25 & 0xff), uVar17 != 0)) {
              uVar49 = (ulonglong)uVar17;
              uVar28 = 0;
              local_158 = uVar49;
              do {
                puVar44 = local_148;
                lVar24 = local_f8[3];
                puVar4 = *(ushort **)(lVar24 + uVar28 * 8);
                puVar27 = *(undefined4 **)(lVar24 + uVar49 * 8);
                if (puVar4 != (ushort *)0x0 || puVar27 != (undefined4 *)0x0) {
                  lVar39 = local_d0[0x17];
                  if ((puVar4 == (ushort *)0x0) || ((*puVar4 & 0x2080) == 0)) {
                    puVar5 = *(ushort **)(lVar39 + uVar28 * 8);
                    if ((puVar5 != (ushort *)0x0) && ((*puVar5 & 0x2080) != 0)) {
                      if (puVar4 == (ushort *)0x0) {
                        puVar21 = (undefined4 *)
                                  (*(longlong *)(local_160 + 0xe0) + 3U & 0xfffffffffffffffc);
                        puVar22 = puVar21 + 8;
                        if (*(undefined4 **)(local_160 + 0xe8) < puVar22) {
                          FUN_140023dd8(local_148,0x24);
                          puVar21 = (undefined4 *)(*puVar44 + 3 & 0xfffffffffffffffc);
                          puVar22 = puVar21 + 8;
                        }
                        *local_148 = (ulonglong)puVar22;
                        uVar7 = *puVar27;
                        uVar8 = puVar27[1];
                        uVar9 = puVar27[2];
                        uVar10 = puVar27[3];
                        uVar14 = *(undefined8 *)(puVar27 + 6);
                        *(undefined8 *)(puVar21 + 4) = *(undefined8 *)(puVar27 + 4);
                        *(undefined8 *)(puVar21 + 6) = uVar14;
                        *puVar21 = uVar7;
                        puVar21[1] = uVar8;
                        puVar21[2] = uVar9;
                        puVar21[3] = uVar10;
                        *(undefined4 **)(lVar24 + uVar28 * 8) = puVar21;
                      }
                      else if (puVar27 == (undefined4 *)0x0) {
                        puVar22 = (undefined4 *)
                                  (*(longlong *)(local_160 + 0xe0) + 3U & 0xfffffffffffffffc);
                        puVar27 = puVar22 + 8;
                        if (*(undefined4 **)(local_160 + 0xe8) < puVar27) {
                          FUN_140023dd8(local_148,0x24);
                          puVar22 = (undefined4 *)(*puVar44 + 3 & 0xfffffffffffffffc);
                          puVar27 = puVar22 + 8;
                        }
                        *local_148 = (ulonglong)puVar27;
                        uVar7 = *(undefined4 *)puVar4;
                        uVar8 = *(undefined4 *)(puVar4 + 2);
                        uVar9 = *(undefined4 *)(puVar4 + 4);
                        uVar10 = *(undefined4 *)(puVar4 + 6);
                        uVar14 = *(undefined8 *)(puVar4 + 0xc);
                        *(undefined8 *)(puVar22 + 4) = *(undefined8 *)(puVar4 + 8);
                        *(undefined8 *)(puVar22 + 6) = uVar14;
                        *puVar22 = uVar7;
                        puVar22[1] = uVar8;
                        puVar22[2] = uVar9;
                        puVar22[3] = uVar10;
                        *(undefined4 **)(lVar24 + uVar49 * 8) = puVar22;
                      }
                    }
                  }
                  else {
                    iVar35 = *(int *)(*(longlong *)(lVar39 + uVar49 * 8) + 0xc);
                    puVar27 = *(undefined4 **)(lVar39 + uVar28 * 8);
                    if (iVar35 + 1U < puVar27[3] + 1) {
                      iVar35 = puVar27[3];
                    }
                    puVar21 = (undefined4 *)
                              (*(longlong *)(local_160 + 0xe0) + 3U & 0xfffffffffffffffc);
                    puVar22 = puVar21 + 8;
                    if (*(undefined4 **)(local_160 + 0xe8) < puVar22) {
                      FUN_140023dd8(local_148,0x24);
                      puVar21 = (undefined4 *)(*puVar44 + 3 & 0xfffffffffffffffc);
                      puVar22 = puVar21 + 8;
                    }
                    puVar44 = local_148;
                    *(undefined4 **)(local_160 + 0xe0) = puVar22;
                    uVar7 = *puVar27;
                    uVar8 = puVar27[1];
                    uVar9 = puVar27[2];
                    uVar10 = puVar27[3];
                    uVar11 = puVar27[5];
                    uVar12 = puVar27[6];
                    uVar13 = puVar27[7];
                    puVar21[4] = puVar27[4];
                    puVar21[5] = uVar11;
                    puVar21[6] = uVar12;
                    puVar21[7] = uVar13;
                    *puVar21 = uVar7;
                    puVar21[1] = uVar8;
                    puVar21[2] = uVar9;
                    puVar21[3] = uVar10;
                    *(undefined4 **)(lVar39 + uVar28 * 8) = puVar21;
                    puVar22 = *(undefined4 **)(lVar24 + uVar28 * 8);
                    puVar21 = (undefined4 *)
                              (*(longlong *)(local_160 + 0xe0) + 3U & 0xfffffffffffffffc);
                    puVar27 = puVar21 + 8;
                    if (*(undefined4 **)(local_160 + 0xe8) < puVar27) {
                      FUN_140023dd8(local_148,0x24);
                      puVar21 = (undefined4 *)(*puVar44 + 3 & 0xfffffffffffffffc);
                      puVar27 = puVar21 + 8;
                    }
                    *local_148 = (ulonglong)puVar27;
                    uVar7 = *puVar22;
                    uVar8 = puVar22[1];
                    uVar9 = puVar22[2];
                    uVar10 = puVar22[3];
                    uVar14 = *(undefined8 *)(puVar22 + 6);
                    *(undefined8 *)(puVar21 + 4) = *(undefined8 *)(puVar22 + 4);
                    *(undefined8 *)(puVar21 + 6) = uVar14;
                    *puVar21 = uVar7;
                    puVar21[1] = uVar8;
                    puVar21[2] = uVar9;
                    puVar21[3] = uVar10;
                    *(undefined4 **)(lVar24 + uVar28 * 8) = puVar21;
                    *(int *)(*(longlong *)(lVar39 + uVar28 * 8) + 0xc) = iVar35;
                    *(int *)(*(longlong *)(lVar39 + uVar49 * 8) + 0xc) = iVar35;
                  }
                }
                uVar28 = uVar28 + 1;
                uVar49 = uVar49 + 1;
                lVar24 = local_d8;
              } while (local_158 != uVar28);
            }
            plVar48 = local_f8;
            if (local_c0 != (uint *)0x0) {
              local_150 = CONCAT44(local_150._4_4_,uVar25) & 0xffffffff000000ff;
              local_158 = CONCAT44(local_158._4_4_,uVar25 >> 0x10);
              local_108 = CONCAT44(local_108._4_4_,(uVar25 & 0xff) * (uVar25 >> 0x10));
              puVar46 = (uint *)0x0;
              puVar31 = local_c0;
              do {
                puVar44 = local_148;
                puVar36 = *(uint **)(plVar48[3] + (longlong)puVar46 * 8);
                if (puVar36 != (uint *)0x0) {
                  uVar28 = local_d0[0x17];
                  if (*(longlong *)(local_d0[0x19] + (longlong)puVar46 * 8) == 0) {
                    *(uint **)(local_d0[0x19] + (longlong)puVar46 * 8) = puVar36;
                  }
                  else {
                    puVar31 = *(uint **)(uVar28 + (longlong)puVar46 * 8);
                    if (puVar31 != (uint *)0x0) {
                      uVar25 = *puVar31;
                      in_R10 = (ulonglong)*puVar36;
                      if (uVar25 == *puVar36) {
                        uVar17 = puVar31[2];
                        if (((char)((uVar17 != 0xffffffff) * '\x02' | puVar31[1] != 0xffffffff) ==
                             (char)((puVar36[2] != 0xffffffff) * '\x02' | puVar36[1] != 0xffffffff))
                           && (puVar31[7] == puVar36[7])) {
                          if ((uVar25 & 0xc00) != 0) {
                            uVar43 = puVar36[5];
                            if (uVar43 == DAT_14ca95bd0) {
                              uVar43 = 0xffffffff;
                            }
                            uVar16 = puVar31[5];
                            if (puVar31[5] == DAT_14ca95bd0) {
                              uVar16 = 0xffffffff;
                            }
                            if ((uVar43 == 0xffffffff) || (uVar16 != uVar43)) goto LAB_14320f694;
                          }
                          goto LAB_14320f66b;
                        }
                      }
                      else {
                        uVar17 = puVar31[2];
                      }
LAB_14320f694:
                      uVar49 = ((ulonglong)puVar46 & 0xffffffff) % (local_150 & 0xffffffff);
                      uVar43 = puVar36[7] | 2;
                      if (uVar25 != 0x40000) {
                        uVar43 = puVar36[7];
                      }
                      uVar37 = (ulonglong)uVar43 << 0x3d |
                               (in_R10 & 0x1fffff) << 0x15 | (ulonglong)(uVar25 & 0x1fffff) |
                               (ulonglong)*(ushort *)((longlong)local_d0 + 0x9c) << 0x2a;
                      local_98 = *puVar36;
                      auStack_94[0] = puVar36[1];
                      auStack_94[1] = puVar36[2];
                      auStack_94[2] = puVar36[3];
                      auStack_94[3] = puVar36[4];
                      uStack_84 = puVar36[5];
                      uStack_80 = puVar36[6];
                      uStack_7c = puVar36[7];
                      bVar40 = (uVar17 != 0xffffffff) * '\x02' | puVar31[1] != 0xffffffff;
                      bVar41 = (auStack_94[1] != 0xffffffff) * '\x02' | auStack_94[0] != 0xffffffff;
                      uVar30 = (ulonglong)CONCAT31((int3)((uVar25 & 0x1fffff) >> 8),bVar41);
                      uVar25 = puVar31[3];
                      uVar17 = puVar31[4];
                      local_110 = CONCAT44(local_110._4_4_,
                                           (int)((((ulonglong)puVar46 & 0xffffffff) /
                                                 (local_150 & 0xffffffff)) %
                                                (local_158 & 0xffffffff)));
                      local_f0 = CONCAT44(local_f0._4_4_,
                                          (int)(((ulonglong)puVar46 & 0xffffffff) /
                                               (local_108 & 0xffffffff)));
                      local_118 = uVar28;
                      if (bVar40 == 3) {
                        local_120 = CONCAT44(local_120._4_4_,(int)uVar49);
                        uVar25 = *(uint *)(*(longlong *)
                                            (*(longlong *)(local_160 + 0x168) +
                                            (longlong)(int)uVar25 * 8) + 0x4c);
                        local_100 = (ulonglong)uVar25;
                        uVar17 = *(uint *)(*(longlong *)
                                            (*(longlong *)(local_160 + 0x168) +
                                            (longlong)(int)uVar17 * 8) + 0x4c);
                        uVar25 = uVar17 * 0x17 + uVar25;
                        uVar25 = (uVar25 >> 2) + (uVar25 * 0x40 | (uint)bVar41) + 0x9e3779b9 ^
                                 uVar25;
                        uVar43 = *(uint *)(local_160 + 0x3e0);
                        local_b8 = (ulonglong)uVar43;
                        uVar16 = *(uint *)(local_160 + 0x40c);
                        local_138 = uVar30;
                        if (uVar43 != uVar16) {
                          uVar28 = *(ulonglong *)(local_160 + 0x428);
                          if (*(ulonglong *)(local_160 + 0x428) == 0) {
                            uVar28 = local_e8;
                          }
                          if (uVar28 == 0) {
                            uVar28 = local_e0;
                          }
                          iVar35 = *(int *)(uVar28 + (ulonglong)
                                                     (*(int *)(local_160 + 0x430) - 1U & uVar25) * 4
                                           );
                          if (iVar35 != -1) {
                            do {
                              lVar39 = *local_128 + (longlong)iVar35 * 0x20;
                              lVar33 = 0;
                              in_R10 = local_100;
                              bVar15 = true;
                              do {
                                bVar38 = bVar15;
                                if (*(int *)(lVar39 + lVar33 * 4) != (int)in_R10)
                                goto LAB_14320fe53;
                                lVar33 = 1;
                                in_R10 = (ulonglong)uVar17;
                                bVar15 = false;
                              } while (bVar38);
                              if (*(byte *)(lVar39 + 8) == bVar41) {
                                if (lVar39 != 0) goto LAB_143210151;
                                break;
                              }
LAB_14320fe53:
                              iVar35 = *(int *)(*local_128 + 0x18 + (longlong)iVar35 * 0x20);
                            } while (iVar35 != -1);
                          }
                        }
                        if (uVar16 == 0) {
                          *(uint *)(local_160 + 0x3e0) = uVar43 + 1;
                          if (*(uint *)(local_160 + 0x3e4) == uVar43) {
                            FUN_14178f2cc(local_128,local_b8);
                          }
                          iVar35 = *(int *)(local_160 + 0x400);
                          if (iVar35 == 0) {
                            iVar19 = -1;
                          }
                          else {
                            iVar19 = iVar35 + 0x1e;
                            if (-1 < iVar35 + -1) {
                              iVar19 = iVar35 + -1;
                            }
                            iVar19 = iVar19 >> 5;
                          }
                          iVar47 = iVar35 + 0x1f;
                          if (-1 < iVar35) {
                            iVar47 = iVar35;
                          }
                          if (iVar47 >> 5 == iVar19) {
                            *(int *)(local_160 + 0x400) = iVar35 + 1;
                          }
                          else {
                            FUN_14018be28(local_130);
                            uVar43 = *(int *)(local_160 + 0x400) + 1;
                            uVar16 = *(int *)(local_160 + 0x400) + 0x20;
                            if (-1 < (int)uVar43) {
                              uVar16 = uVar43;
                            }
                            *(uint *)(local_160 + 0x400) = uVar43;
                            iVar19 = uVar43 - (uVar16 & 0xffffffe0);
                            if (iVar19 != 0) {
                              lVar39 = *(longlong *)(local_160 + 0x3f8);
                              if (*(longlong *)(local_160 + 0x3f8) == 0) {
                                lVar39 = local_130;
                              }
                              bVar40 = -(char)iVar19;
                              *(uint *)(lVar39 + (longlong)((int)uVar16 >> 5) * 4) =
                                   (uint)(*(int *)(lVar39 + (longlong)((int)uVar16 >> 5) * 4) <<
                                         (bVar40 & 0x1f)) >> (bVar40 & 0x1f);
                            }
                          }
                          lVar39 = (longlong)(int)local_b8;
                          lVar33 = *(longlong *)(local_160 + 0x3f8);
                          if (*(longlong *)(local_160 + 0x3f8) == 0) {
                            lVar33 = local_130;
                          }
                          bVar40 = (byte)iVar35 & 0x1f;
                          puVar31 = (uint *)(lVar33 + (longlong)(iVar47 >> 5) * 4);
                          *puVar31 = *puVar31 & (-2 << bVar40 | 0xfffffffeU >> 0x20 - bVar40);
                          uVar28 = local_b8;
                        }
                        else {
                          uVar28 = (ulonglong)*(uint *)(local_160 + 0x408);
                          lVar39 = (longlong)(int)*(uint *)(local_160 + 0x408);
                          iVar35 = *(int *)(*(longlong *)(local_160 + 0x3d8) + 4 + lVar39 * 0x20);
                          *(int *)(local_160 + 0x408) = iVar35;
                          *(uint *)(local_160 + 0x40c) = uVar16 - 1;
                          lVar24 = local_d8;
                          if (uVar16 - 1 != 0) {
                            *(undefined4 *)
                             (*(longlong *)(local_160 + 0x3d8) + (longlong)iVar35 * 0x20) =
                                 0xffffffff;
                          }
                        }
                        plVar48 = local_128;
                        iVar35 = (int)uVar28;
                        lVar33 = *(longlong *)(local_160 + 0x3f8);
                        if (*(longlong *)(local_160 + 0x3f8) == 0) {
                          lVar33 = local_130;
                        }
                        iVar19 = iVar35 + 0x1f;
                        if (-1 < iVar35) {
                          iVar19 = iVar35;
                        }
                        puVar31 = (uint *)(lVar33 + (longlong)(iVar19 >> 5) * 4);
                        *puVar31 = *puVar31 | 1 << ((byte)uVar28 & 0x1f);
                        lVar33 = *(longlong *)(local_160 + 0x3d8);
                        lVar39 = lVar39 * 0x20;
                        puVar27 = (undefined4 *)(lVar33 + lVar39);
                        *(ulonglong *)(lVar33 + lVar39) =
                             ((longlong)(int)uVar17 << 0x20) + local_100;
                        *(char *)(lVar33 + 8 + lVar39) = (char)local_138;
                        *(undefined8 *)(lVar33 + 0x10 + lVar39) = 0;
                        *(undefined4 *)(lVar33 + 0x18 + lVar39) = 0xffffffff;
                        uVar43 = *(int *)(local_160 + 0x3e0) - *(int *)(local_160 + 0x40c);
                        in_R10 = uVar28;
                        if ((uVar43 != 0) && (uVar43 != 1)) {
                          uVar49 = *(ulonglong *)(local_160 + 0x428);
                          if (*(ulonglong *)(local_160 + 0x428) == 0) {
                            uVar49 = local_e8;
                          }
                          if (uVar49 == 0) {
                            uVar49 = local_e0;
                          }
                          iVar19 = *(int *)(uVar49 + (ulonglong)
                                                     (*(int *)(local_160 + 0x430) - 1U & uVar25) * 4
                                           );
                          if (iVar19 != -1) {
                            do {
                              puVar22 = (undefined4 *)(*local_128 + (longlong)iVar19 * 0x20);
                              in_R10 = CONCAT71((int7)(in_R10 >> 8),1);
                              uVar49 = local_100 & 0xffffffff;
                              lVar39 = 0;
                              do {
                                if (puVar22[lVar39] != (int)uVar49) goto LAB_14320fffa;
                                lVar39 = 1;
                                uVar49 = (ulonglong)uVar17;
                                cVar42 = (char)in_R10;
                                in_R10 = 0;
                              } while (cVar42 != '\0');
                              in_R10 = local_138;
                              if (*(char *)(puVar22 + 2) == (char)local_138) {
                                uVar7 = *puVar27;
                                uVar8 = puVar27[1];
                                uVar9 = puVar27[2];
                                uVar10 = puVar27[3];
                                *(undefined8 *)(puVar22 + 4) = *(undefined8 *)(puVar27 + 4);
                                *puVar22 = uVar7;
                                puVar22[1] = uVar8;
                                puVar22[2] = uVar9;
                                puVar22[3] = uVar10;
                                FUN_14742e742(local_128,uVar28 & 0xffffffff);
                                goto LAB_14321013f;
                              }
LAB_14320fffa:
                              iVar19 = *(int *)(*local_128 + 0x18 + (longlong)iVar19 * 0x20);
                            } while (iVar19 != -1);
                          }
                        }
                        if (uVar43 < 4) {
                          iVar19 = 1;
                        }
                        else {
                          uVar28 = (ulonglong)(uVar43 & 0xfffffffe) + 0xf;
                          lVar39 = 0x3f;
                          if (uVar28 != 0) {
                            for (; uVar28 >> lVar39 == 0; lVar39 = lVar39 + -1) {
                            }
                          }
                          iVar19 = 1 << ((byte)lVar39 & 0x1f);
                        }
                        if (((int)uVar43 < 1) || (iVar19 <= *(int *)(local_160 + 0x430))) {
                          uVar25 = *(int *)(local_160 + 0x430) - 1U & uVar25;
                          puVar27[7] = uVar25;
                          uVar28 = *(ulonglong *)(local_160 + 0x428);
                          if (*(ulonglong *)(local_160 + 0x428) == 0) {
                            uVar28 = local_e8;
                          }
                          if (uVar28 == 0) {
                            uVar28 = local_e0;
                          }
                          puVar27[6] = *(undefined4 *)
                                        (uVar28 + ((longlong)*(int *)(local_160 + 0x430) - 1U &
                                                  (longlong)(int)uVar25) * 4);
                          uVar28 = *(ulonglong *)(local_160 + 0x428);
                          if (*(ulonglong *)(local_160 + 0x428) == 0) {
                            uVar28 = local_e8;
                          }
                          if (uVar28 == 0) {
                            uVar28 = local_e0;
                          }
                          *(int *)(uVar28 + ((longlong)*(int *)(local_160 + 0x430) - 1U &
                                            (longlong)(int)uVar25) * 4) = iVar35;
                          in_R10 = local_e8;
                        }
                        else {
                          *(int *)(local_160 + 0x430) = iVar19;
                          FUN_144adb3b2(local_128);
                        }
LAB_14321013f:
                        lVar39 = *plVar48 + (longlong)iVar35 * 0x20;
LAB_143210151:
                        puVar44 = local_148;
                        plVar48 = (longlong *)(lVar39 + 0x10);
                        lVar39 = *plVar48;
                        if (lVar39 == 0) {
                          local_70[0] = *(longlong *)
                                         (*(longlong *)(local_160 + 0x168) +
                                         (longlong)(int)local_100 * 8);
                          local_70[1] = *(undefined8 *)
                                         (*(longlong *)(local_160 + 0x168) +
                                         (longlong)(int)uVar17 * 8);
                          puVar20 = (undefined8 *)
                                    (*(longlong *)(local_160 + 0xe0) + 7U & 0xfffffffffffffff8);
                          puVar26 = puVar20 + 9;
                          if (*(undefined8 **)(local_160 + 0xe8) < puVar26) {
                            FUN_140023dd8(local_148,0x50);
                            puVar20 = (undefined8 *)(*puVar44 + 7 & 0xfffffffffffffff8);
                            puVar26 = puVar20 + 9;
                          }
                          *(undefined8 **)(local_160 + 0xe0) = puVar26;
                          *puVar20 = 0;
                          puVar20[1] = 0;
                          *(undefined4 *)(puVar20 + 2) = 0xffffffff;
                          *(undefined1 *)((longlong)puVar20 + 0x14) = 1;
                          *(undefined4 *)(puVar20 + 3) = 0xffffffff;
                          *(undefined1 *)((longlong)puVar20 + 0x1c) = 1;
                          puVar20[4] = 0;
                          puVar20[5] = 0;
                          puVar20[6] = 0;
                          puVar20[7] = 0;
                          *(undefined4 *)(puVar20 + 8) = 1;
                          *(undefined1 *)((longlong)puVar20 + 0x44) = 3;
                          *(char *)((longlong)puVar20 + 0x45) = (char)local_138;
                          *(undefined2 *)((longlong)puVar20 + 0x46) = 0;
                          *plVar48 = (longlong)puVar20;
                          iVar35 = *(int *)(local_160 + 0x470);
                          *(uint *)(local_160 + 0x470) = iVar35 + 1U;
                          if (*(uint *)(local_160 + 0x474) < iVar35 + 1U) {
                            FUN_144adb638(local_140,iVar35);
                          }
                          *(longlong *)(*local_140 + (longlong)iVar35 * 8) = *plVar48;
                          lVar33 = 0;
                          do {
                            lVar24 = *(longlong *)((longlong)local_70 + lVar33);
                            iVar35 = *(int *)(lVar24 + 0x198);
                            *(uint *)(lVar24 + 0x198) = iVar35 + 1U;
                            if (*(uint *)(lVar24 + 0x19c) < iVar35 + 1U) {
                              FUN_144adb638((longlong *)(lVar24 + 400),iVar35);
                            }
                            lVar39 = *plVar48;
                            *(longlong *)(*(longlong *)(lVar24 + 400) + (longlong)iVar35 * 8) =
                                 lVar39;
                            lVar33 = lVar33 + 8;
                            lVar24 = local_d8;
                          } while (lVar33 != 0x10);
                        }
                        iVar35 = *(int *)(lVar39 + 0x28);
                        *(uint *)(lVar39 + 0x28) = iVar35 + 1U;
                        if (*(uint *)(lVar39 + 0x2c) < iVar35 + 1U) {
                          FUN_144adb766(lVar39 + 0x20,iVar35);
                        }
                        lVar33 = *(longlong *)(lVar39 + 0x20);
                        lVar34 = (longlong)iVar35 * 0x10;
                        *(ulonglong *)(lVar33 + lVar34) = uVar37;
                        *(short *)(lVar33 + 8 + lVar34) = (short)local_110;
                        *(char *)(lVar33 + 10 + lVar34) = (char)local_120;
                        *(char *)(lVar33 + 0xb + lVar34) = (char)local_f0;
                        *(undefined1 *)(lVar39 + 0x46) = 1;
                        bVar40 = (byte)local_138;
                        uVar49 = local_138;
                        while (uVar28 = local_118, bVar40 != 0) {
                          lVar24 = *plVar48;
                          lVar39 = *(longlong *)
                                    (*(longlong *)(local_160 + 0x168) +
                                    (longlong)
                                    *(int *)(*(longlong *)
                                              (*(longlong *)(local_160 + 0x168) +
                                              (longlong)
                                              (int)auStack_94
                                                   [(byte)(-(byte)uVar49 & (byte)uVar49) == 2] * 8)
                                            + 0x48) * 8);
                          bVar40 = *(byte *)(lVar39 + 0x130);
                          uVar25 = *(uint *)(*(longlong *)(lVar39 + 0x128) + 0x2c);
                          uVar28 = (ulonglong)
                                   (*(char *)(*(longlong *)(lVar39 + 0x128) + 0x2b) == '\x02');
                          uVar17 = *(uint *)(lVar24 + 0x10 + uVar28 * 8);
                          bVar41 = *(byte *)(lVar24 + 0x14 + uVar28 * 8);
                          if ((uVar17 != uVar25) || (bVar41 != bVar40)) {
                            bVar2 = bVar40;
                            if (bVar41 < bVar40) {
                              bVar2 = bVar41;
                            }
                            if ((uVar25 <= uVar17) && (bVar40 <= bVar41)) {
                              uVar37 = lVar39 + 0xf8;
                              uVar30 = (ulonglong)*(int *)(lVar39 + 0x120);
                              uVar17 = *(int *)(lVar39 + 0x120) + 1;
                              *(uint *)(lVar39 + 0x120) = uVar17;
                              if (*(uint *)(lVar39 + 0x124) < uVar17) {
                                local_138 = uVar49;
                                local_110 = uVar37;
                                local_f0 = uVar30;
                                FUN_144adb9c0(uVar37,uVar30);
                                uVar37 = local_110;
                                uVar30 = local_f0;
                                uVar49 = local_138;
                              }
                              if (*(ulonglong *)(lVar39 + 0x118) != 0) {
                                uVar37 = *(ulonglong *)(lVar39 + 0x118);
                              }
                              *(longlong *)(uVar37 + uVar30 * 8) = lVar24;
                              *(ulonglong *)(lVar24 + 0x10 + uVar28 * 8) =
                                   (ulonglong)CONCAT14(bVar2,uVar25);
                            }
                          }
                          iVar35 = (int)uVar49 + -1;
                          bVar40 = (byte)iVar35 & (byte)uVar49;
                          uVar49 = (ulonglong)CONCAT31((int3)((uint)iVar35 >> 8),bVar40);
                          lVar24 = local_d8;
                        }
                      }
                      else {
                        local_100 = CONCAT71(local_100._1_7_,bVar40);
                        if (uVar17 + 1 < uVar25 + 1) {
                          uVar17 = uVar25;
                        }
                        uVar25 = auStack_94[1];
                        if (auStack_94[0] < auStack_94[1]) {
                          uVar25 = auStack_94[0];
                        }
                        lVar24 = *(longlong *)(local_160 + 0x168);
                        in_R10 = (ulonglong)(int)uVar17;
                        lVar39 = *(longlong *)(lVar24 + in_R10 * 8);
                        if (uVar17 < uVar25) {
                          lVar24 = *(longlong *)(lVar24 + (longlong)*(int *)(lVar39 + 0x4c) * 8);
                          if (bVar41 == 2) {
                            lVar39 = *(longlong *)(lVar24 + 0x180);
                            if (lVar39 == 0) {
                              puVar20 = (undefined8 *)
                                        (*(longlong *)(local_160 + 0xe0) + 7U & 0xfffffffffffffff8);
                              puVar26 = puVar20 + 9;
                              if (*(undefined8 **)(local_160 + 0xe8) < puVar26) {
                                FUN_140023dd8(local_148,0x50);
                                puVar20 = (undefined8 *)(*puVar44 + 7 & 0xfffffffffffffff8);
                                puVar26 = puVar20 + 9;
                              }
                              *(undefined8 **)(local_160 + 0xe0) = puVar26;
                              uVar3 = *(undefined1 *)(lVar24 + 0x2b);
                              *puVar20 = 0;
                              puVar20[1] = 0;
                              *(undefined4 *)(puVar20 + 2) = 0xffffffff;
                              *(undefined1 *)((longlong)puVar20 + 0x14) = 1;
                              *(undefined4 *)(puVar20 + 3) = 0xffffffff;
                              *(undefined1 *)((longlong)puVar20 + 0x1c) = 1;
                              puVar20[4] = 0;
                              puVar20[5] = 0;
                              puVar20[6] = 0;
                              puVar20[7] = 0;
                              *(undefined4 *)(puVar20 + 8) = 1;
                              *(undefined1 *)((longlong)puVar20 + 0x44) = uVar3;
                              *(undefined2 *)((longlong)puVar20 + 0x45) = 2;
                              *(undefined1 *)((longlong)puVar20 + 0x47) = 0;
                              *(undefined8 **)(lVar24 + 0x180) = puVar20;
                              iVar35 = *(int *)(local_160 + 0x470);
                              *(uint *)(local_160 + 0x470) = iVar35 + 1U;
                              if (*(uint *)(local_160 + 0x474) < iVar35 + 1U) {
                                local_120 = in_R10;
                                FUN_144adb638(local_140,iVar35);
                                in_R10 = local_120;
                              }
                              lVar33 = *local_140;
                              lVar39 = *(longlong *)(lVar24 + 0x180);
LAB_14320fd52:
                              *(longlong *)(lVar33 + (longlong)iVar35 * 8) = lVar39;
                            }
                          }
                          else if (bVar41 == 3) {
                            lVar39 = *(longlong *)(lVar24 + 0x188);
                            if (lVar39 == 0) {
                              puVar20 = (undefined8 *)
                                        (*(longlong *)(local_160 + 0xe0) + 7U & 0xfffffffffffffff8);
                              puVar26 = puVar20 + 9;
                              if (*(undefined8 **)(local_160 + 0xe8) < puVar26) {
                                FUN_140023dd8(local_148,0x50);
                                puVar20 = (undefined8 *)(*puVar44 + 7 & 0xfffffffffffffff8);
                                puVar26 = puVar20 + 9;
                              }
                              *(undefined8 **)(local_160 + 0xe0) = puVar26;
                              uVar3 = *(undefined1 *)(lVar24 + 0x2b);
                              *puVar20 = 0;
                              puVar20[1] = 0;
                              *(undefined4 *)(puVar20 + 2) = 0xffffffff;
                              *(undefined1 *)((longlong)puVar20 + 0x14) = 1;
                              *(undefined4 *)(puVar20 + 3) = 0xffffffff;
                              *(undefined1 *)((longlong)puVar20 + 0x1c) = 1;
                              puVar20[4] = 0;
                              puVar20[5] = 0;
                              puVar20[6] = 0;
                              puVar20[7] = 0;
                              *(undefined4 *)(puVar20 + 8) = 1;
                              *(undefined1 *)((longlong)puVar20 + 0x44) = uVar3;
                              *(undefined2 *)((longlong)puVar20 + 0x45) = 3;
                              *(undefined1 *)((longlong)puVar20 + 0x47) = 0;
                              *(undefined8 **)(lVar24 + 0x188) = puVar20;
                              iVar35 = *(int *)(local_160 + 0x470);
                              *(uint *)(local_160 + 0x470) = iVar35 + 1U;
                              if (*(uint *)(local_160 + 0x474) < iVar35 + 1U) {
                                local_120 = in_R10;
                                FUN_144adb638(local_140,iVar35);
                                in_R10 = local_120;
                              }
                              lVar33 = *local_140;
                              lVar39 = *(longlong *)(lVar24 + 0x188);
                              goto LAB_14320fd52;
                            }
                          }
                          else {
                            lVar39 = lVar24 + 0x138;
                            if (*(char *)(lVar24 + 0x17e) == '\0') {
                              local_120 = CONCAT44(local_120._4_4_,(int)uVar49);
                              iVar35 = *(int *)(lVar24 + 0x88) + *(int *)(lVar24 + 0x78);
                              if (iVar35 < 0) {
                    /* WARNING: Subroutine does not return */
                                FUN_1456afac4(iVar35);
                              }
                              local_138 = uVar37;
                              if (*(int *)(lVar24 + 0x164) < iVar35) {
                                FUN_144adac32(lVar24 + 0x158,iVar35);
                              }
                              if (*(int *)(lVar24 + 0x174) < iVar35) {
                                FUN_144adad0c(lVar24 + 0x168,iVar35);
                              }
                              iVar35 = *(int *)(local_160 + 0x470);
                              *(uint *)(local_160 + 0x470) = iVar35 + 1U;
                              if (*(uint *)(local_160 + 0x474) < iVar35 + 1U) {
                                FUN_144adb638(local_140,iVar35);
                              }
                              *(longlong *)(*local_140 + (longlong)iVar35 * 8) = lVar39;
                              uVar49 = local_120 & 0xffffffff;
                              uVar37 = local_138;
                            }
                          }
                        }
                        else {
                          lVar39 = FUN_14178e9d4(*(undefined8 *)
                                                  (lVar24 + (longlong)*(int *)(lVar39 + 0x48) * 8),
                                                 local_148,local_140);
                        }
                        iVar35 = *(int *)(lVar39 + 0x28);
                        *(uint *)(lVar39 + 0x28) = iVar35 + 1U;
                        if (*(uint *)(lVar39 + 0x2c) < iVar35 + 1U) {
                          local_138 = uVar37;
                          FUN_144adb766(lVar39 + 0x20,iVar35);
                          uVar37 = local_138;
                        }
                        lVar24 = *(longlong *)(lVar39 + 0x20);
                        lVar33 = (longlong)iVar35 * 0x10;
                        *(ulonglong *)(lVar24 + lVar33) = uVar37;
                        *(short *)(lVar24 + 8 + lVar33) = (short)local_110;
                        *(char *)(lVar24 + 10 + lVar33) = (char)uVar49;
                        *(char *)(lVar24 + 0xb + lVar33) = (char)local_f0;
                        *(undefined1 *)(lVar39 + 0x46) = 1;
                        lVar33 = lVar39 + 0x10;
                        bVar40 = 3;
                        uVar49 = local_100 & 0xff;
                        local_c8 = puVar36;
                        do {
                          puVar44 = local_148;
                          bVar41 = -bVar40 & bVar40;
                          if (((byte)uVar49 == bVar41) && ((byte)uVar30 == 3)) {
                            lVar24 = *(longlong *)
                                      (*(longlong *)(local_160 + 0x168) +
                                      (longlong)
                                      *(int *)(*(longlong *)
                                                (*(longlong *)(local_160 + 0x168) + in_R10 * 8) +
                                              0x4c) * 8);
                            uVar37 = *(ulonglong *)(lVar24 + 0x1a0);
                            if (uVar37 == 0) {
                              uVar37 = *(longlong *)(local_160 + 0xe0) + 7U & 0xfffffffffffffff8;
                              uVar28 = uVar37 + 0x40;
                              if (*(ulonglong *)(local_160 + 0xe8) < uVar28) {
                                FUN_140023dd8(local_148,0x48);
                                uVar49 = local_100 & 0xff;
                                uVar37 = *puVar44 + 7 & 0xfffffffffffffff8;
                                uVar28 = uVar37 + 0x40;
                              }
                              *local_148 = uVar28;
                              *(undefined8 *)(uVar37 + 0x20) = 0;
                              *(undefined8 *)(uVar37 + 0x28) = 0x400000000;
                              *(longlong *)(uVar37 + 0x30) = lVar24;
                              *(undefined1 *)(uVar37 + 0x38) = 1;
                              *(ulonglong *)(lVar24 + 0x1a0) = uVar37;
                            }
                            bVar41 = *(byte *)(uVar37 + 0x38);
                            uVar17 = *(uint *)(*(longlong *)(uVar37 + 0x30) + 0x2c);
                            uVar28 = (ulonglong)
                                     (*(char *)(*(longlong *)(uVar37 + 0x30) + 0x2b) == '\x02');
                            uVar25 = *(uint *)(lVar33 + uVar28 * 8);
                            bVar2 = *(byte *)(lVar39 + 0x14 + uVar28 * 8);
                            if ((uVar25 != uVar17) || (bVar2 != bVar41)) {
                              bVar1 = bVar41;
                              if (bVar2 < bVar41) {
                                bVar1 = bVar2;
                              }
                              if ((uVar17 <= uVar25) && (bVar41 <= bVar2)) {
                                local_110 = (ulonglong)*(uint *)(uVar37 + 0x28);
                                uVar25 = *(uint *)(uVar37 + 0x28) + 1;
                                *(uint *)(uVar37 + 0x28) = uVar25;
                                if (*(uint *)(uVar37 + 0x2c) < uVar25) {
                                  local_138 = uVar30;
                                  local_120 = in_R10;
                                  FUN_144adb9c0(uVar37,local_110);
                                  uVar49 = local_100 & 0xff;
                                  in_R10 = local_120;
                                  uVar30 = local_138;
                                }
                                puVar44 = (ulonglong *)(uVar37 + 0x20);
LAB_14320f8fe:
                                if (*puVar44 != 0) {
                                  uVar37 = *puVar44;
                                }
                                *(longlong *)(uVar37 + (longlong)(int)local_110 * 8) = lVar39;
                                *(ulonglong *)(lVar33 + uVar28 * 8) =
                                     (ulonglong)CONCAT14(bVar1,uVar17);
                              }
                            }
                          }
                          else if ((bVar41 & (byte)uVar30) != 0) {
                            lVar24 = *(longlong *)
                                      (*(longlong *)(local_160 + 0x168) +
                                      (longlong)
                                      *(int *)(*(longlong *)
                                                (*(longlong *)(local_160 + 0x168) +
                                                (longlong)(int)auStack_94[bVar41 == 2] * 8) + 0x48)
                                      * 8);
                            bVar41 = *(byte *)(lVar24 + 0x130);
                            uVar17 = *(uint *)(*(longlong *)(lVar24 + 0x128) + 0x2c);
                            uVar28 = (ulonglong)
                                     (*(char *)(*(longlong *)(lVar24 + 0x128) + 0x2b) == '\x02');
                            uVar25 = *(uint *)(lVar33 + uVar28 * 8);
                            bVar2 = *(byte *)(lVar39 + 0x14 + uVar28 * 8);
                            if ((uVar25 != uVar17) || (bVar2 != bVar41)) {
                              bVar1 = bVar41;
                              if (bVar2 < bVar41) {
                                bVar1 = bVar2;
                              }
                              if ((uVar17 <= uVar25) && (bVar41 <= bVar2)) {
                                uVar37 = lVar24 + 0xf8;
                                local_110 = (ulonglong)*(uint *)(lVar24 + 0x120);
                                uVar25 = *(uint *)(lVar24 + 0x120) + 1;
                                *(uint *)(lVar24 + 0x120) = uVar25;
                                if (*(uint *)(lVar24 + 0x124) < uVar25) {
                                  local_138 = uVar30;
                                  local_120 = in_R10;
                                  local_f0 = uVar37;
                                  FUN_144adb9c0(uVar37,local_110);
                                  uVar49 = local_100 & 0xff;
                                  uVar37 = local_f0;
                                  in_R10 = local_120;
                                  uVar30 = local_138;
                                }
                                puVar44 = (ulonglong *)(lVar24 + 0x118);
                                goto LAB_14320f8fe;
                              }
                            }
                          }
                          bVar40 = bVar40 - 1 & bVar40;
                          puVar36 = local_c8;
                          uVar28 = local_118;
                          lVar24 = local_d8;
                        } while (bVar40 != 0);
                      }
                    }
                  }
LAB_14320f66b:
                  *(uint **)(uVar28 + (longlong)puVar46 * 8) = puVar36;
                  plVar48 = local_f8;
                  puVar31 = local_c0;
                }
                puVar46 = (uint *)((longlong)puVar46 + 1);
              } while (puVar46 != puVar31);
            }
            plVar48 = plVar48 + 6;
          } while (plVar48 != local_a0);
        }
        param_1 = local_160;
        if ((longlong)*(int *)(lVar24 + 0x88) != 0) {
          puVar26 = *(undefined8 **)(lVar24 + 0x80);
          local_d0 = puVar26 + (longlong)*(int *)(lVar24 + 0x88) * 7;
          do {
            puVar44 = local_148;
            plVar48 = (longlong *)*puVar26;
            puVar31 = (uint *)puVar26[5];
            if (plVar48[0x28] == 0) {
              plVar48[0x28] = (longlong)puVar31;
            }
            else {
              puVar46 = (uint *)plVar48[0x27];
              uVar25 = *puVar46;
              if (((uVar25 == *puVar31) &&
                  (bVar40 = (puVar31[2] != 0xffffffff) * '\x02' | puVar31[1] != 0xffffffff,
                  in_R10 = CONCAT71((int7)(in_R10 >> 8),bVar40),
                  (byte)((puVar46[2] != 0xffffffff) * '\x02' | puVar46[1] != 0xffffffff) == bVar40))
                 && (puVar46[7] == puVar31[7])) {
                if ((uVar25 & 0xc00) != 0) {
                  in_R10 = (ulonglong)DAT_14ca95bd0;
                  uVar17 = puVar31[5];
                  if (puVar31[5] == DAT_14ca95bd0) {
                    uVar17 = 0xffffffff;
                  }
                  uVar43 = puVar46[5];
                  if (puVar46[5] == DAT_14ca95bd0) {
                    uVar43 = 0xffffffff;
                  }
                  if ((uVar17 == 0xffffffff) || (uVar43 != uVar17)) goto LAB_143210933;
                }
              }
              else {
LAB_143210933:
                if ((ulonglong)(ushort)puVar31[6] == 0xffff) {
                  uVar28 = 0;
                }
                else {
                  uVar28 = *(ulonglong *)
                            (*(longlong *)(param_1 + 0x4e0) + (ulonglong)(ushort)puVar31[6] * 8);
                }
                uVar49 = (ulonglong)puVar31[7] << 0x3d |
                         ((ulonglong)*puVar31 & 0x1fffff) << 0x15 | (ulonglong)(uVar25 & 0x1fffff) |
                         (ulonglong)*(ushort *)((longlong)plVar48 + 0x7c) << 0x2a |
                         0x400000000000000;
                local_98 = *puVar31;
                auStack_94[0] = puVar31[1];
                auStack_94[1] = puVar31[2];
                auStack_94[2] = puVar31[3];
                auStack_94[3] = puVar31[4];
                uStack_84 = puVar31[5];
                uStack_80 = puVar31[6];
                uStack_7c = puVar31[7];
                uVar25 = puVar46[3];
                uVar17 = puVar46[4];
                bVar40 = (puVar46[2] != 0xffffffff) * '\x02' | puVar46[1] != 0xffffffff;
                bVar41 = (auStack_94[1] != 0xffffffff) * '\x02' | auStack_94[0] != 0xffffffff;
                local_158 = CONCAT71((int7)(in_R10 >> 8),bVar41);
                local_150 = CONCAT71(local_150._1_7_,bVar40);
                local_f8 = plVar48;
                if (bVar40 == 3) {
                  uVar25 = *(uint *)(*(longlong *)
                                      (*(longlong *)(param_1 + 0x168) + (longlong)(int)uVar25 * 8) +
                                    0x4c);
                  local_108 = (ulonglong)uVar25;
                  uVar17 = *(uint *)(*(longlong *)
                                      (*(longlong *)(param_1 + 0x168) + (longlong)(int)uVar17 * 8) +
                                    0x4c);
                  uVar18 = uVar17 * 0x17 + uVar25;
                  uVar18 = (uVar18 >> 2) + (uVar18 * 0x40 | (uint)bVar41) + 0x9e3779b9 ^ uVar18;
                  uVar43 = *(uint *)(param_1 + 0x3e0);
                  local_118 = (ulonglong)uVar43;
                  uVar16 = *(uint *)(param_1 + 0x40c);
                  local_150 = uVar28;
                  if (uVar43 != uVar16) {
                    uVar28 = *(ulonglong *)(param_1 + 0x428);
                    if (*(ulonglong *)(param_1 + 0x428) == 0) {
                      uVar28 = local_e8;
                    }
                    if (uVar28 == 0) {
                      uVar28 = local_e0;
                    }
                    iVar35 = *(int *)(uVar28 + (ulonglong)(*(int *)(param_1 + 0x430) - 1U & uVar18)
                                               * 4);
                    if (iVar35 != -1) {
                      do {
                        lVar24 = *local_128 + (longlong)iVar35 * 0x20;
                        in_R10 = (ulonglong)uVar25;
                        lVar39 = 0;
                        bVar15 = true;
                        do {
                          bVar38 = bVar15;
                          if (*(int *)(lVar24 + lVar39 * 4) != (int)in_R10) goto LAB_143210ff3;
                          lVar39 = 1;
                          in_R10 = (ulonglong)uVar17;
                          bVar15 = false;
                        } while (bVar38);
                        if (*(byte *)(lVar24 + 8) == bVar41) {
                          if (lVar24 != 0) goto LAB_1432112ed;
                          break;
                        }
LAB_143210ff3:
                        iVar35 = *(int *)(*local_128 + 0x18 + (longlong)iVar35 * 0x20);
                      } while (iVar35 != -1);
                    }
                  }
                  local_c8 = (uint *)CONCAT44(local_c8._4_4_,uVar18);
                  if (uVar16 == 0) {
                    *(uint *)(param_1 + 0x3e0) = uVar43 + 1;
                    if (*(uint *)(param_1 + 0x3e4) == uVar43) {
                      FUN_14178f2cc(local_128);
                      param_1 = local_160;
                    }
                    iVar35 = *(int *)(param_1 + 0x400);
                    if (iVar35 == 0) {
                      iVar19 = -1;
                    }
                    else {
                      iVar19 = iVar35 + 0x1e;
                      if (-1 < iVar35 + -1) {
                        iVar19 = iVar35 + -1;
                      }
                      iVar19 = iVar19 >> 5;
                    }
                    iVar47 = iVar35 + 0x1f;
                    if (-1 < iVar35) {
                      iVar47 = iVar35;
                    }
                    if (iVar47 >> 5 == iVar19) {
                      *(int *)(param_1 + 0x400) = iVar35 + 1;
                    }
                    else {
                      FUN_14018be28(local_130);
                      uVar25 = *(int *)(local_160 + 0x400) + 1;
                      uVar43 = *(int *)(local_160 + 0x400) + 0x20;
                      if (-1 < (int)uVar25) {
                        uVar43 = uVar25;
                      }
                      *(uint *)(local_160 + 0x400) = uVar25;
                      iVar19 = uVar25 - (uVar43 & 0xffffffe0);
                      param_1 = local_160;
                      if (iVar19 != 0) {
                        lVar24 = *(longlong *)(local_160 + 0x3f8);
                        if (*(longlong *)(local_160 + 0x3f8) == 0) {
                          lVar24 = local_130;
                        }
                        bVar40 = -(char)iVar19;
                        *(uint *)(lVar24 + (longlong)((int)uVar43 >> 5) * 4) =
                             (uint)(*(int *)(lVar24 + (longlong)((int)uVar43 >> 5) * 4) <<
                                   (bVar40 & 0x1f)) >> (bVar40 & 0x1f);
                      }
                    }
                    lVar39 = (longlong)(int)local_118;
                    lVar24 = *(longlong *)(param_1 + 0x3f8);
                    if (*(longlong *)(param_1 + 0x3f8) == 0) {
                      lVar24 = local_130;
                    }
                    bVar40 = (byte)iVar35 & 0x1f;
                    puVar46 = (uint *)(lVar24 + (longlong)(iVar47 >> 5) * 4);
                    *puVar46 = *puVar46 & (-2 << bVar40 | 0xfffffffeU >> 0x20 - bVar40);
                    lVar24 = param_1;
                    uVar28 = local_118;
                  }
                  else {
                    uVar28 = (ulonglong)*(uint *)(param_1 + 0x408);
                    lVar39 = (longlong)(int)*(uint *)(param_1 + 0x408);
                    iVar35 = *(int *)(*(longlong *)(param_1 + 0x3d8) + 4 + lVar39 * 0x20);
                    *(int *)(param_1 + 0x408) = iVar35;
                    *(uint *)(param_1 + 0x40c) = uVar16 - 1;
                    lVar24 = local_160;
                    if (uVar16 - 1 != 0) {
                      *(undefined4 *)(*(longlong *)(param_1 + 0x3d8) + (longlong)iVar35 * 0x20) =
                           0xffffffff;
                    }
                  }
                  plVar45 = local_128;
                  iVar35 = (int)uVar28;
                  lVar33 = *(longlong *)(lVar24 + 0x3f8);
                  if (*(longlong *)(lVar24 + 0x3f8) == 0) {
                    lVar33 = local_130;
                  }
                  iVar19 = iVar35 + 0x1f;
                  if (-1 < iVar35) {
                    iVar19 = iVar35;
                  }
                  puVar46 = (uint *)(lVar33 + (longlong)(iVar19 >> 5) * 4);
                  *puVar46 = *puVar46 | 1 << ((byte)uVar28 & 0x1f);
                  lVar33 = *(longlong *)(lVar24 + 0x3d8);
                  lVar39 = lVar39 * 0x20;
                  puVar27 = (undefined4 *)(lVar33 + lVar39);
                  *(ulonglong *)(lVar33 + lVar39) = (longlong)(int)uVar17 << 0x20 | local_108;
                  *(char *)(lVar33 + 8 + lVar39) = (char)local_158;
                  *(undefined8 *)(lVar33 + 0x10 + lVar39) = 0;
                  *(undefined4 *)(lVar33 + 0x18 + lVar39) = 0xffffffff;
                  uVar25 = *(int *)(lVar24 + 0x3e0) - *(int *)(lVar24 + 0x40c);
                  in_R10 = local_158;
                  if ((uVar25 != 0) && (uVar25 != 1)) {
                    uVar37 = *(ulonglong *)(lVar24 + 0x428);
                    if (*(ulonglong *)(lVar24 + 0x428) == 0) {
                      uVar37 = local_e8;
                    }
                    if (uVar37 == 0) {
                      uVar37 = local_e0;
                    }
                    iVar19 = *(int *)(uVar37 + (ulonglong)
                                               (*(int *)(lVar24 + 0x430) - 1U & (uint)local_c8) * 4)
                    ;
                    if (iVar19 != -1) {
                      do {
                        puVar22 = (undefined4 *)(*local_128 + (longlong)iVar19 * 0x20);
                        in_R10 = CONCAT71((int7)(in_R10 >> 8),1);
                        lVar24 = 0;
                        uVar37 = local_108;
                        do {
                          if (puVar22[lVar24] != (int)uVar37) goto LAB_14321119a;
                          lVar24 = 1;
                          uVar37 = (ulonglong)uVar17;
                          cVar42 = (char)in_R10;
                          in_R10 = 0;
                        } while (cVar42 != '\0');
                        in_R10 = local_158;
                        if (*(char *)(puVar22 + 2) == (char)local_158) {
                          uVar7 = *puVar27;
                          uVar8 = puVar27[1];
                          uVar9 = puVar27[2];
                          uVar10 = puVar27[3];
                          *(undefined8 *)(puVar22 + 4) = *(undefined8 *)(puVar27 + 4);
                          *puVar22 = uVar7;
                          puVar22[1] = uVar8;
                          puVar22[2] = uVar9;
                          puVar22[3] = uVar10;
                          FUN_14742e742(local_128,uVar28 & 0xffffffff);
                          param_1 = local_160;
                          goto LAB_1432112db;
                        }
LAB_14321119a:
                        iVar19 = *(int *)(*local_128 + 0x18 + (longlong)iVar19 * 0x20);
                        lVar24 = local_160;
                      } while (iVar19 != -1);
                    }
                  }
                  if (uVar25 < 4) {
                    iVar19 = 1;
                  }
                  else {
                    uVar28 = (ulonglong)(uVar25 & 0xfffffffe) + 0xf;
                    lVar39 = 0x3f;
                    if (uVar28 != 0) {
                      for (; uVar28 >> lVar39 == 0; lVar39 = lVar39 + -1) {
                      }
                    }
                    iVar19 = 1 << ((byte)lVar39 & 0x1f);
                  }
                  if (((int)uVar25 < 1) || (iVar19 <= *(int *)(lVar24 + 0x430))) {
                    uVar25 = *(int *)(lVar24 + 0x430) - 1U & (uint)local_c8;
                    puVar27[7] = uVar25;
                    uVar28 = *(ulonglong *)(lVar24 + 0x428);
                    if (*(ulonglong *)(lVar24 + 0x428) == 0) {
                      uVar28 = local_e8;
                    }
                    if (uVar28 == 0) {
                      uVar28 = local_e0;
                    }
                    puVar27[6] = *(undefined4 *)
                                  (uVar28 + ((longlong)*(int *)(lVar24 + 0x430) - 1U &
                                            (longlong)(int)uVar25) * 4);
                    uVar28 = *(ulonglong *)(lVar24 + 0x428);
                    if (*(ulonglong *)(lVar24 + 0x428) == 0) {
                      uVar28 = local_e8;
                    }
                    if (uVar28 == 0) {
                      uVar28 = local_e0;
                    }
                    *(int *)(uVar28 + ((longlong)*(int *)(lVar24 + 0x430) - 1U &
                                      (longlong)(int)uVar25) * 4) = iVar35;
                    in_R10 = local_e8;
                    param_1 = lVar24;
                  }
                  else {
                    *(int *)(lVar24 + 0x430) = iVar19;
                    FUN_144adb3b2(local_128);
                    param_1 = local_160;
                  }
LAB_1432112db:
                  lVar24 = *plVar45 + (longlong)iVar35 * 0x20;
LAB_1432112ed:
                  puVar44 = local_148;
                  plVar45 = (longlong *)(lVar24 + 0x10);
                  lVar24 = *plVar45;
                  uVar28 = local_158;
                  if (lVar24 == 0) {
                    local_70[0] = *(longlong *)
                                   (*(longlong *)(param_1 + 0x168) + (longlong)(int)local_108 * 8);
                    local_70[1] = *(undefined8 *)
                                   (*(longlong *)(param_1 + 0x168) + (longlong)(int)uVar17 * 8);
                    puVar23 = (undefined8 *)
                              (*(longlong *)(param_1 + 0xe0) + 7U & 0xfffffffffffffff8);
                    puVar20 = puVar23 + 9;
                    if (*(undefined8 **)(param_1 + 0xe8) < puVar20) {
                      FUN_140023dd8(local_148,0x50);
                      puVar23 = (undefined8 *)(*puVar44 + 7 & 0xfffffffffffffff8);
                      puVar20 = puVar23 + 9;
                      param_1 = local_160;
                    }
                    *(undefined8 **)(param_1 + 0xe0) = puVar20;
                    *puVar23 = 0;
                    puVar23[1] = 0;
                    *(undefined4 *)(puVar23 + 2) = 0xffffffff;
                    *(undefined1 *)((longlong)puVar23 + 0x14) = 1;
                    *(undefined4 *)(puVar23 + 3) = 0xffffffff;
                    *(undefined1 *)((longlong)puVar23 + 0x1c) = 1;
                    puVar23[4] = 0;
                    puVar23[5] = 0;
                    puVar23[6] = 0;
                    puVar23[7] = 0;
                    *(undefined4 *)(puVar23 + 8) = 1;
                    *(undefined1 *)((longlong)puVar23 + 0x44) = 3;
                    *(char *)((longlong)puVar23 + 0x45) = (char)local_158;
                    *(undefined2 *)((longlong)puVar23 + 0x46) = 0;
                    *plVar45 = (longlong)puVar23;
                    iVar35 = *(int *)(param_1 + 0x470);
                    *(uint *)(param_1 + 0x470) = iVar35 + 1U;
                    if (*(uint *)(param_1 + 0x474) < iVar35 + 1U) {
                      FUN_144adb638(local_140,iVar35);
                      param_1 = local_160;
                    }
                    *(longlong *)(*local_140 + (longlong)iVar35 * 8) = *plVar45;
                    lVar39 = 0;
                    uVar28 = local_158;
                    do {
                      lVar33 = *(longlong *)((longlong)local_70 + lVar39);
                      iVar35 = *(int *)(lVar33 + 0x198);
                      *(uint *)(lVar33 + 0x198) = iVar35 + 1U;
                      if (*(uint *)(lVar33 + 0x19c) < iVar35 + 1U) {
                        FUN_144adb638((longlong *)(lVar33 + 400),iVar35);
                        uVar28 = local_158;
                        param_1 = local_160;
                      }
                      lVar24 = *plVar45;
                      *(longlong *)(*(longlong *)(lVar33 + 400) + (longlong)iVar35 * 8) = lVar24;
                      lVar39 = lVar39 + 8;
                      plVar48 = local_f8;
                    } while (lVar39 != 0x10);
                  }
                  iVar35 = *(int *)(lVar24 + 0x28);
                  *(uint *)(lVar24 + 0x28) = iVar35 + 1U;
                  if (*(uint *)(lVar24 + 0x2c) < iVar35 + 1U) {
                    FUN_144adb766(lVar24 + 0x20,iVar35);
                    uVar28 = local_158;
                    param_1 = local_160;
                  }
                  lVar39 = *(longlong *)(lVar24 + 0x20);
                  *(ulonglong *)(lVar39 + (longlong)iVar35 * 0x10) = uVar49;
                  *(ulonglong *)(lVar39 + 8 + (longlong)iVar35 * 0x10) = local_150;
                  *(undefined1 *)(lVar24 + 0x46) = 1;
                  bVar40 = (byte)uVar28;
                  uVar49 = local_150;
                  uVar37 = local_108;
                  while (local_150 = uVar49, local_108 = uVar37, bVar40 != 0) {
                    lVar24 = *plVar45;
                    lVar39 = *(longlong *)
                              (*(longlong *)(param_1 + 0x168) +
                              (longlong)
                              *(int *)(*(longlong *)
                                        (*(longlong *)(param_1 + 0x168) +
                                        (longlong)
                                        (int)auStack_94[(byte)(-(byte)uVar28 & (byte)uVar28) == 2] *
                                        8) + 0x48) * 8);
                    bVar40 = *(byte *)(lVar39 + 0x130);
                    uVar25 = *(uint *)(*(longlong *)(lVar39 + 0x128) + 0x2c);
                    uVar30 = (ulonglong)(*(char *)(*(longlong *)(lVar39 + 0x128) + 0x2b) == '\x02');
                    uVar17 = *(uint *)(lVar24 + 0x10 + uVar30 * 8);
                    bVar41 = *(byte *)(lVar24 + 0x14 + uVar30 * 8);
                    if ((uVar17 != uVar25) || (bVar41 != bVar40)) {
                      bVar2 = bVar40;
                      if (bVar41 < bVar40) {
                        bVar2 = bVar41;
                      }
                      if ((uVar25 <= uVar17) && (bVar40 <= bVar41)) {
                        local_150 = lVar39 + 0xf8;
                        local_108 = (ulonglong)*(int *)(lVar39 + 0x120);
                        uVar17 = *(int *)(lVar39 + 0x120) + 1;
                        *(uint *)(lVar39 + 0x120) = uVar17;
                        uVar29 = local_150;
                        uVar32 = local_108;
                        if (*(uint *)(lVar39 + 0x124) < uVar17) {
                          local_158 = uVar28;
                          FUN_144adb9c0(local_150,local_108);
                          uVar29 = local_150;
                          uVar32 = local_108;
                          uVar28 = local_158;
                          param_1 = local_160;
                          uVar49 = local_150;
                          uVar37 = local_108;
                        }
                        local_108 = uVar37;
                        local_150 = uVar49;
                        if (*(ulonglong *)(lVar39 + 0x118) != 0) {
                          uVar29 = *(ulonglong *)(lVar39 + 0x118);
                        }
                        *(longlong *)(uVar29 + uVar32 * 8) = lVar24;
                        *(ulonglong *)(lVar24 + 0x10 + uVar30 * 8) =
                             (ulonglong)CONCAT14(bVar2,uVar25);
                      }
                    }
                    iVar35 = (int)uVar28 + -1;
                    bVar40 = (byte)iVar35 & (byte)uVar28;
                    uVar28 = (ulonglong)CONCAT31((int3)((uint)iVar35 >> 8),bVar40);
                    plVar48 = local_f8;
                    uVar49 = local_150;
                    uVar37 = local_108;
                  }
                }
                else {
                  uVar43 = uVar17 + 1;
                  uVar37 = (ulonglong)uVar43;
                  if (uVar43 < uVar25 + 1) {
                    uVar17 = uVar25;
                  }
                  uVar25 = auStack_94[1];
                  if (auStack_94[0] < auStack_94[1]) {
                    uVar25 = auStack_94[0];
                  }
                  lVar24 = *(longlong *)(param_1 + 0x168);
                  local_108 = (ulonglong)(int)uVar17;
                  lVar39 = *(longlong *)(lVar24 + local_108 * 8);
                  if (uVar17 < uVar25) {
                    lVar39 = *(longlong *)(lVar24 + (longlong)*(int *)(lVar39 + 0x4c) * 8);
                    uVar6 = (undefined3)(uVar43 >> 8);
                    if (bVar41 == 2) {
                      lVar24 = *(longlong *)(lVar39 + 0x180);
                      in_R10 = (ulonglong)CONCAT31(uVar6,bVar40);
                      if (lVar24 == 0) {
                        puVar23 = (undefined8 *)
                                  (*(longlong *)(param_1 + 0xe0) + 7U & 0xfffffffffffffff8);
                        puVar20 = puVar23 + 9;
                        if (*(undefined8 **)(param_1 + 0xe8) < puVar20) {
                          FUN_140023dd8(local_148,0x50);
                          in_R10 = CONCAT71((int7)(in_R10 >> 8),(undefined1)local_150);
                          puVar23 = (undefined8 *)(*puVar44 + 7 & 0xfffffffffffffff8);
                          puVar20 = puVar23 + 9;
                          param_1 = local_160;
                        }
                        *(undefined8 **)(param_1 + 0xe0) = puVar20;
                        uVar3 = *(undefined1 *)(lVar39 + 0x2b);
                        *puVar23 = 0;
                        puVar23[1] = 0;
                        *(undefined4 *)(puVar23 + 2) = 0xffffffff;
                        *(undefined1 *)((longlong)puVar23 + 0x14) = 1;
                        *(undefined4 *)(puVar23 + 3) = 0xffffffff;
                        *(undefined1 *)((longlong)puVar23 + 0x1c) = 1;
                        puVar23[4] = 0;
                        puVar23[5] = 0;
                        puVar23[6] = 0;
                        puVar23[7] = 0;
                        *(undefined4 *)(puVar23 + 8) = 1;
                        *(undefined1 *)((longlong)puVar23 + 0x44) = uVar3;
                        *(undefined2 *)((longlong)puVar23 + 0x45) = 2;
                        *(undefined1 *)((longlong)puVar23 + 0x47) = 0;
                        *(undefined8 **)(lVar39 + 0x180) = puVar23;
                        iVar35 = *(int *)(param_1 + 0x470);
                        *(uint *)(param_1 + 0x470) = iVar35 + 1U;
                        if (*(uint *)(param_1 + 0x474) < iVar35 + 1U) {
                          FUN_144adb638(local_140,iVar35);
                          in_R10 = CONCAT71((int7)(in_R10 >> 8),(undefined1)local_150);
                          param_1 = local_160;
                        }
                        lVar33 = *local_140;
                        lVar24 = *(longlong *)(lVar39 + 0x180);
LAB_143210f0d:
                        *(longlong *)(lVar33 + (longlong)iVar35 * 8) = lVar24;
                      }
                    }
                    else {
                      in_R10 = (ulonglong)CONCAT31(uVar6,bVar40);
                      if (((uint)local_158 & 0xff) == 3) {
                        lVar24 = *(longlong *)(lVar39 + 0x188);
                        if (lVar24 == 0) {
                          puVar23 = (undefined8 *)
                                    (*(longlong *)(param_1 + 0xe0) + 7U & 0xfffffffffffffff8);
                          puVar20 = puVar23 + 9;
                          if (*(undefined8 **)(param_1 + 0xe8) < puVar20) {
                            FUN_140023dd8(local_148,0x50);
                            in_R10 = CONCAT71((int7)(in_R10 >> 8),(undefined1)local_150);
                            puVar23 = (undefined8 *)(*puVar44 + 7 & 0xfffffffffffffff8);
                            puVar20 = puVar23 + 9;
                            param_1 = local_160;
                          }
                          *(undefined8 **)(param_1 + 0xe0) = puVar20;
                          uVar3 = *(undefined1 *)(lVar39 + 0x2b);
                          *puVar23 = 0;
                          puVar23[1] = 0;
                          *(undefined4 *)(puVar23 + 2) = 0xffffffff;
                          *(undefined1 *)((longlong)puVar23 + 0x14) = 1;
                          *(undefined4 *)(puVar23 + 3) = 0xffffffff;
                          *(undefined1 *)((longlong)puVar23 + 0x1c) = 1;
                          puVar23[4] = 0;
                          puVar23[5] = 0;
                          puVar23[6] = 0;
                          puVar23[7] = 0;
                          *(undefined4 *)(puVar23 + 8) = 1;
                          *(undefined1 *)((longlong)puVar23 + 0x44) = uVar3;
                          *(undefined2 *)((longlong)puVar23 + 0x45) = 3;
                          *(undefined1 *)((longlong)puVar23 + 0x47) = 0;
                          *(undefined8 **)(lVar39 + 0x188) = puVar23;
                          iVar35 = *(int *)(param_1 + 0x470);
                          *(uint *)(param_1 + 0x470) = iVar35 + 1U;
                          if (*(uint *)(param_1 + 0x474) < iVar35 + 1U) {
                            FUN_144adb638(local_140,iVar35);
                            in_R10 = CONCAT71((int7)(in_R10 >> 8),(undefined1)local_150);
                            param_1 = local_160;
                          }
                          lVar33 = *local_140;
                          lVar24 = *(longlong *)(lVar39 + 0x188);
                          goto LAB_143210f0d;
                        }
                      }
                      else {
                        lVar24 = lVar39 + 0x138;
                        if (*(char *)(lVar39 + 0x17e) == '\0') {
                          iVar35 = *(int *)(lVar39 + 0x88) + *(int *)(lVar39 + 0x78);
                          if (iVar35 < 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_1456afac4(iVar35);
                          }
                          if (*(int *)(lVar39 + 0x164) < iVar35) {
                            FUN_144adac32(lVar39 + 0x158,iVar35);
                            in_R10 = CONCAT71((int7)(in_R10 >> 8),(undefined1)local_150);
                          }
                          if (*(int *)(lVar39 + 0x174) < iVar35) {
                            FUN_144adad0c(lVar39 + 0x168,iVar35);
                            in_R10 = CONCAT71((int7)(in_R10 >> 8),(undefined1)local_150);
                          }
                          iVar35 = *(int *)(local_160 + 0x470);
                          *(uint *)(local_160 + 0x470) = iVar35 + 1U;
                          if (*(uint *)(local_160 + 0x474) < iVar35 + 1U) {
                            FUN_144adb638(local_140,iVar35);
                            in_R10 = CONCAT71((int7)(in_R10 >> 8),(undefined1)local_150);
                          }
                          *(longlong *)(*local_140 + (longlong)iVar35 * 8) = lVar24;
                          param_1 = local_160;
                        }
                      }
                    }
                  }
                  else {
                    lVar24 = FUN_14178e9d4(*(undefined8 *)
                                            (lVar24 + (longlong)*(int *)(lVar39 + 0x48) * 8),
                                           local_148,local_140);
                    in_R10 = CONCAT71((int7)(uVar37 >> 8),(undefined1)local_150);
                    param_1 = local_160;
                  }
                  iVar35 = *(int *)(lVar24 + 0x28);
                  *(uint *)(lVar24 + 0x28) = iVar35 + 1U;
                  if (*(uint *)(lVar24 + 0x2c) < iVar35 + 1U) {
                    FUN_144adb766(lVar24 + 0x20,iVar35);
                    in_R10 = CONCAT71((int7)(in_R10 >> 8),(undefined1)local_150);
                    param_1 = local_160;
                  }
                  lVar39 = *(longlong *)(lVar24 + 0x20);
                  *(ulonglong *)(lVar39 + (longlong)iVar35 * 0x10) = uVar49;
                  *(ulonglong *)(lVar39 + 8 + (longlong)iVar35 * 0x10) = uVar28;
                  *(undefined1 *)(lVar24 + 0x46) = 1;
                  lVar39 = lVar24 + 0x10;
                  bVar40 = 3;
                  uVar28 = local_158;
                  local_c0 = puVar31;
                  do {
                    puVar44 = local_148;
                    bVar41 = -bVar40 & bVar40;
                    if (((byte)in_R10 == bVar41) && ((byte)uVar28 == 3)) {
                      lVar33 = *(longlong *)
                                (*(longlong *)(param_1 + 0x168) +
                                (longlong)
                                *(int *)(*(longlong *)
                                          (*(longlong *)(param_1 + 0x168) + local_108 * 8) + 0x4c) *
                                8);
                      puVar31 = *(uint **)(lVar33 + 0x1a0);
                      if (puVar31 == (uint *)0x0) {
                        puVar31 = (uint *)(*(longlong *)(param_1 + 0xe0) + 7U & 0xfffffffffffffff8);
                        puVar46 = puVar31 + 0x10;
                        if (*(uint **)(param_1 + 0xe8) < puVar46) {
                          FUN_140023dd8(local_148,0x48);
                          in_R10 = CONCAT71((int7)(in_R10 >> 8),(undefined1)local_150);
                          puVar31 = (uint *)(*puVar44 + 7 & 0xfffffffffffffff8);
                          puVar46 = puVar31 + 0x10;
                          uVar28 = local_158;
                          param_1 = local_160;
                        }
                        *local_148 = (ulonglong)puVar46;
                        puVar31[8] = 0;
                        puVar31[9] = 0;
                        puVar31[10] = 0;
                        puVar31[0xb] = 4;
                        *(longlong *)(puVar31 + 0xc) = lVar33;
                        *(undefined1 *)(puVar31 + 0xe) = 1;
                        *(uint **)(lVar33 + 0x1a0) = puVar31;
                      }
                      bVar41 = (byte)puVar31[0xe];
                      uVar25 = *(uint *)(*(longlong *)(puVar31 + 0xc) + 0x2c);
                      uVar49 = (ulonglong)(*(char *)(*(longlong *)(puVar31 + 0xc) + 0x2b) == '\x02')
                      ;
                      uVar17 = *(uint *)(lVar39 + uVar49 * 8);
                      bVar2 = *(byte *)(lVar24 + 0x14 + uVar49 * 8);
                      if ((uVar17 != uVar25) || (bVar2 != bVar41)) {
                        bVar1 = bVar41;
                        if (bVar2 < bVar41) {
                          bVar1 = bVar2;
                        }
                        if ((uVar25 <= uVar17) && (bVar41 <= bVar2)) {
                          local_118 = (ulonglong)puVar31[10];
                          uVar17 = puVar31[10] + 1;
                          puVar31[10] = uVar17;
                          if (puVar31[0xb] < uVar17) {
                            FUN_144adb9c0(puVar31,local_118);
                            in_R10 = CONCAT71((int7)(in_R10 >> 8),(undefined1)local_150);
                            uVar28 = local_158;
                            param_1 = local_160;
                          }
                          puVar46 = puVar31 + 8;
LAB_143210b55:
                          if (*(uint **)puVar46 != (uint *)0x0) {
                            puVar31 = *(uint **)puVar46;
                          }
                          *(longlong *)(puVar31 + (longlong)(int)local_118 * 2) = lVar24;
                          *(ulonglong *)(lVar39 + uVar49 * 8) = (ulonglong)CONCAT14(bVar1,uVar25);
                        }
                      }
                    }
                    else if ((bVar41 & (byte)uVar28) != 0) {
                      lVar33 = *(longlong *)
                                (*(longlong *)(param_1 + 0x168) +
                                (longlong)
                                *(int *)(*(longlong *)
                                          (*(longlong *)(param_1 + 0x168) +
                                          (longlong)(int)auStack_94[bVar41 == 2] * 8) + 0x48) * 8);
                      bVar41 = *(byte *)(lVar33 + 0x130);
                      uVar25 = *(uint *)(*(longlong *)(lVar33 + 0x128) + 0x2c);
                      uVar49 = (ulonglong)
                               (*(char *)(*(longlong *)(lVar33 + 0x128) + 0x2b) == '\x02');
                      uVar17 = *(uint *)(lVar39 + uVar49 * 8);
                      bVar2 = *(byte *)(lVar24 + 0x14 + uVar49 * 8);
                      if ((uVar17 != uVar25) || (bVar2 != bVar41)) {
                        bVar1 = bVar41;
                        if (bVar2 < bVar41) {
                          bVar1 = bVar2;
                        }
                        if ((uVar25 <= uVar17) && (bVar41 <= bVar2)) {
                          puVar31 = (uint *)(lVar33 + 0xf8);
                          local_118 = (ulonglong)*(uint *)(lVar33 + 0x120);
                          uVar17 = *(uint *)(lVar33 + 0x120) + 1;
                          *(uint *)(lVar33 + 0x120) = uVar17;
                          if (*(uint *)(lVar33 + 0x124) < uVar17) {
                            local_c8 = puVar31;
                            FUN_144adb9c0(puVar31,local_118);
                            in_R10 = CONCAT71((int7)(in_R10 >> 8),(undefined1)local_150);
                            puVar31 = local_c8;
                            uVar28 = local_158;
                            param_1 = local_160;
                          }
                          puVar46 = (uint *)(lVar33 + 0x118);
                          goto LAB_143210b55;
                        }
                      }
                    }
                    bVar40 = bVar40 - 1 & bVar40;
                    plVar48 = local_f8;
                    puVar31 = local_c0;
                  } while (bVar40 != 0);
                }
              }
            }
            plVar48[0x27] = (longlong)puVar31;
            puVar26 = puVar26 + 7;
          } while (puVar26 != local_d0);
        }
      }
      uVar25 = local_ac + 1;
    } while (uVar25 < *(int *)(param_1 + 0x170) - 1U);
  }
  if ((local_70[2] ^ (ulonglong)auStack_188) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x0001432117bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    TlsSetValue(DAT_14ca954e4,local_a8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_70[2] ^ (ulonglong)auStack_188);
}



// FUNCTION 1432117dc FUN_1432117dc body=47 status=ok
// SIG undefined FUN_1432117dc(void)

void FUN_1432117dc(void)

{
  DAT_14ca95628 = &PTR_FUN_14a38baa0;
  FUN_144725486(&DAT_14ca95628);
  FUN_14631f37e(&DAT_14ca95628);
  return;
}



// FUNCTION 14321180c FUN_14321180c body=8 status=ok
// SIG undefined FUN_14321180c(void)

wchar_t * FUN_14321180c(void)

{
  return L"[Compiled Out]";
}



// FUNCTION 143211814 FUN_143211814 body=105 status=ok
// SIG undefined FUN_143211814(void)

longlong * FUN_143211814(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  *param_1 = 0;
  *(bool *)((longlong)param_1 + 0xc) = *(longlong *)(param_2 + 8) == 0;
  *(longlong *)(param_2 + 8) = param_3;
  lVar1 = DAT_14ca95640;
  if ((DAT_14ca95640 != 0 & *(byte *)((longlong)param_1 + 0xc)) == 1) {
    puVar3 = &DAT_14ca956e8;
    if (DAT_14ca956f8 != (undefined *)0x0) {
      puVar3 = DAT_14ca956f8;
    }
    if (puVar3[*(int *)(param_3 + 100)] == '\x01') {
      *param_1 = DAT_14ca95640;
      uVar2 = FUN_14742b1ca(lVar1,param_3);
      *(undefined4 *)(param_1 + 1) = uVar2;
    }
  }
  return param_1;
}



// FUNCTION 14321187d FUN_14321187d body=69 status=ok
// SIG undefined FUN_14321187d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14321187d(void)

{
  _DAT_14ca95720 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001432118bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca95728,1);
  return;
}



// FUNCTION 1432118c2 FUN_1432118c2 body=69 status=ok
// SIG undefined FUN_1432118c2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432118c2(void)

{
  _DAT_14ca95750 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143211904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca95758,1);
  return;
}



// FUNCTION 143211907 FUN_143211907 body=69 status=ok
// SIG undefined FUN_143211907(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143211907(void)

{
  _DAT_14ca95760 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143211949. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca95768,1);
  return;
}



// FUNCTION 14321194c FUN_14321194c body=69 status=ok
// SIG undefined FUN_14321194c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14321194c(void)

{
  _DAT_14ca95770 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014321198e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca95778,1);
  return;
}



// FUNCTION 143211991 FUN_143211991 body=69 status=ok
// SIG undefined FUN_143211991(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143211991(void)

{
  _DAT_14ca95780 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001432119d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca95788,1);
  return;
}



// FUNCTION 1432119d6 FUN_1432119d6 body=69 status=ok
// SIG undefined FUN_1432119d6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432119d6(void)

{
  _DAT_14ca95790 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143211a18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca95798,1);
  return;
}



// FUNCTION 143211a1b FUN_143211a1b body=69 status=ok
// SIG undefined FUN_143211a1b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143211a1b(void)

{
  _DAT_14ca957a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143211a5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca957a8,1);
  return;
}



// FUNCTION 143211a60 FUN_143211a60 body=69 status=ok
// SIG undefined FUN_143211a60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143211a60(void)

{
  _DAT_14ca957b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143211aa2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca957b8,1);
  return;
}



// FUNCTION 143211aa5 FUN_143211aa5 body=69 status=ok
// SIG undefined FUN_143211aa5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143211aa5(void)

{
  _DAT_14ca957c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143211ae7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca957c8,1);
  return;
}



// FUNCTION 143211aea FUN_143211aea body=69 status=ok
// SIG undefined FUN_143211aea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143211aea(void)

{
  _DAT_14ca957d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143211b2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca957d8,1);
  return;
}



// FUNCTION 143211b2f FUN_143211b2f body=69 status=ok
// SIG undefined FUN_143211b2f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143211b2f(void)

{
  _DAT_14ca957e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143211b71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca957e8,1);
  return;
}



// FUNCTION 143211b74 FUN_143211b74 body=69 status=ok
// SIG undefined FUN_143211b74(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143211b74(void)

{
  _DAT_14ca957f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143211bb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca957f8,1);
  return;
}



// FUNCTION 143211bb9 FUN_143211bb9 body=69 status=ok
// SIG undefined FUN_143211bb9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143211bb9(void)

{
  _DAT_14ca95808 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143211bfb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca95810,1);
  return;
}



// FUNCTION 143211bfe FUN_143211bfe body=69 status=ok
// SIG undefined FUN_143211bfe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143211bfe(void)

{
  _DAT_14ca95818 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143211c40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca95820,1);
  return;
}



// FUNCTION 143211c43 FUN_143211c43 body=69 status=ok
// SIG undefined FUN_143211c43(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143211c43(void)

{
  _DAT_14ca95828 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143211c85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca95830,1);
  return;
}



// FUNCTION 143211c88 FUN_143211c88 body=47 status=ok
// SIG undefined FUN_143211c88(void)

void FUN_143211c88(void)

{
  DAT_14ca95560 = &PTR_FUN_14a38bc50;
  FUN_144725486(&DAT_14ca95560);
  FUN_14631f430(&DAT_14ca95560);
  return;
}



// FUNCTION 143211cc6 FUN_143211cc6 body=113 status=ok
// SIG undefined FUN_143211cc6(void)

void FUN_143211cc6(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  *(undefined8 *)(param_1 + 0x20) = 0;
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  lVar3 = *(longlong *)(param_1 + 8);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 8) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
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



// FUNCTION 143211d37 FUN_143211d37 body=47 status=ok
// SIG undefined FUN_143211d37(void)

void FUN_143211d37(void)

{
  DAT_14ca955a8 = &PTR_FUN_14a38bcb0;
  FUN_144725486(&DAT_14ca955a8);
  FUN_14631f4c4(&DAT_14ca955a8);
  return;
}



// FUNCTION 143211d72 FUN_143211d72 body=782 status=ok
// SIG undefined FUN_143211d72(void)

void FUN_143211d72(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulonglong *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_e8 [32];
  wchar_t *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  char *local_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined8 **local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  longlong local_58;
  undefined *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar3 = puVar4 + 6;
  local_70 = param_3;
  if (*(undefined8 **)(param_1 + 0x78) < puVar3) {
    FUN_140023dd8(puVar1,0x40);
    puVar4 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar3 = puVar4 + 6;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar3;
  *puVar4 = &PTR_FUN_14a38bd28;
  puVar3 = puVar4 + 2;
  puVar4[2] = 0;
  *(undefined4 *)(puVar4 + 3) = 0x80;
  puVar4[4] = 0;
  *(undefined4 *)(puVar4 + 5) = 0x2000;
  iVar2 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar2 + 1U) {
    FUN_1448cfae8((longlong *)(param_1 + 0x98),iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar2 * 8) = puVar4;
  puVar4[2] = param_4;
  *(undefined4 *)(puVar4 + 3) = 0x80;
  puVar4[4] = param_2;
  *(undefined4 *)(puVar4 + 5) = 0x2000;
  local_68 = puVar3;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca961a0) {
    FUN_144b3d300(&DAT_14ca961a0);
    if (DAT_14ca961a0 == -1) {
      FUN_145df5dfc(&local_60);
      local_80 = 0;
      local_90 = 0;
      local_b0 = "Unknown";
      local_c0 = 0;
      uStack_b8 = 0;
      local_c8 = L"FCopyBufferParameters";
      local_88 = 0;
      local_a0 = 0x20;
      local_a8 = 0x16d;
      local_98 = &local_60;
      FUN_140b49562(&DAT_14ca96120,0,1);
      if (local_60 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14321c41c);
      _Init_thread_footer(&DAT_14ca961a0);
    }
  }
  FUN_140069376(param_1);
  puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar4 = puVar5 + 0x3d;
  if (*(undefined8 **)(param_1 + 0x78) < puVar4) {
    FUN_140023dd8(puVar1,0x1f0);
    puVar5 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar5 + 0x3d;
  }
  *puVar1 = (ulonglong)puVar4;
  local_58 = DAT_14ca96168;
  if (DAT_14ca96168 != 0) {
    LOCK();
    *(int *)(DAT_14ca96168 + 8) = *(int *)(DAT_14ca96168 + 8) + 1;
    UNLOCK();
  }
  local_50 = &DAT_14ca96120;
  local_c8 = (wchar_t *)CONCAT71(local_c8._1_7_,2);
  local_60 = puVar3;
  FUN_140068f1a(puVar5);
  *puVar5 = &PTR_FUN_14a38bd30;
  puVar5[0x37] = &local_68;
  puVar5[0x38] = param_4;
  puVar5[0x39] = param_2;
  puVar5[0x3a] = param_5;
  puVar5[0x3b] = local_70;
  puVar5[0x3c] = param_6;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar5;
  *(int *)((longlong)puVar5 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,puVar5);
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143212081 FUN_143212081 body=1013 status=ok
// SIG undefined FUN_143212081(void)

void FUN_143212081(longlong param_1,undefined8 param_2,undefined4 param_3,ulonglong param_4)

{
  ulonglong *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_f8 [32];
  wchar_t *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  char *local_c0;
  undefined4 local_b8;
  undefined4 local_b0;
  undefined8 **local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined8 *local_80;
  undefined8 *local_78;
  longlong local_70;
  undefined *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar4 = puVar5 + 4;
  if (*(undefined8 **)(param_1 + 0x78) < puVar4) {
    FUN_140023dd8(puVar1,0x30);
    puVar5 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar4 = puVar5 + 4;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar4;
  *puVar5 = &PTR_FUN_14a38bd80;
  puVar4 = puVar5 + 2;
  puVar5[2] = 0;
  iVar2 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar2 + 1U) {
    FUN_1448cfae8((longlong *)(param_1 + 0x98),iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar2 * 8) = puVar5;
  puVar5[2] = param_2;
  local_80 = puVar4;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca96228) && (FUN_144b3d300(&DAT_14ca96228), DAT_14ca96228 == -1)) {
    FUN_145fdded6(&local_78);
    local_90 = 0;
    local_a0 = 0;
    local_c0 = "Unknown";
    local_d0 = 0;
    uStack_c8 = 0;
    local_d8 = L"FClearBufferUAVParameters";
    local_98 = 0;
    local_b0 = 0x10;
    local_b8 = 399;
    local_a8 = &local_78;
    FUN_140b49562(&DAT_14ca961a8,0,1);
    if (local_78 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    atexit((_func_5014 *)&LAB_14321c836);
    _Init_thread_footer(&DAT_14ca96228);
  }
  FUN_140069376(param_1);
  local_78 = puVar4;
  if ((param_4 & 4) == 0) {
    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 0x3a;
    if (*(undefined8 **)(param_1 + 0x78) < puVar4) {
      FUN_140023dd8(puVar1,0x1d8);
      puVar5 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar4 = puVar5 + 0x3a;
    }
    *puVar1 = (ulonglong)puVar4;
    local_70 = DAT_14ca961f0;
    if (DAT_14ca961f0 != 0) {
      LOCK();
      *(int *)(DAT_14ca961f0 + 8) = *(int *)(DAT_14ca961f0 + 8) + 1;
      UNLOCK();
    }
    local_68 = &DAT_14ca961a8;
    local_d8 = (wchar_t *)CONCAT71(local_d8._1_7_,2);
    FUN_140068f1a(puVar5);
    *puVar5 = &PTR_FUN_14a38be20;
    puVar5[0x37] = &local_80;
    puVar5[0x38] = param_2;
    *(undefined4 *)(puVar5 + 0x39) = param_3;
  }
  else {
    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 0x3b;
    if (*(undefined8 **)(param_1 + 0x78) < puVar4) {
      FUN_140023dd8(puVar1,0x1e0);
      puVar5 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar4 = puVar5 + 0x3b;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar4;
    uVar3 = *(undefined4 *)(param_1 + 0x660);
    local_70 = DAT_14ca961f0;
    if (DAT_14ca961f0 != 0) {
      LOCK();
      *(int *)(DAT_14ca961f0 + 8) = *(int *)(DAT_14ca961f0 + 8) + 1;
      UNLOCK();
    }
    local_68 = &DAT_14ca961a8;
    local_d8 = (wchar_t *)CONCAT71(local_d8._1_7_,2);
    FUN_140068f1a(puVar5);
    puVar5[0x37] = &local_80;
    puVar5[0x38] = param_2;
    *(undefined4 *)(puVar5 + 0x39) = param_3;
    *puVar5 = &PTR_FUN_14a38be00;
    *(undefined4 *)(puVar5 + 0x3a) = uVar3;
  }
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar5;
  *(int *)((longlong)puVar5 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,puVar5);
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143212483 FUN_143212483 body=2984 status=ok
// SIG undefined FUN_143212483(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143212483(longlong param_1,undefined4 param_2,undefined8 *param_3,longlong *param_4,
                  undefined8 param_5,int param_6)

{
  ulonglong *puVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  ushort *puVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined8 *puVar14;
  int iVar15;
  longlong lVar16;
  ulonglong uVar17;
  int iVar18;
  int iVar19;
  ulonglong uVar20;
  undefined8 *puVar21;
  int iVar22;
  int iVar23;
  float fVar24;
  undefined1 auStack_148 [32];
  wchar_t *local_128;
  undefined1 local_120 [16];
  char *local_110;
  code *local_108;
  code *local_100;
  undefined8 **local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  undefined1 *local_e0;
  undefined4 local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  int local_b4;
  ulonglong *local_b0;
  ulonglong *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  ulonglong local_90;
  undefined8 local_88;
  undefined8 *local_80;
  ulonglong *local_78;
  undefined8 *local_70;
  longlong lStack_68;
  undefined *local_60;
  undefined2 local_58;
  undefined1 uStack_56;
  undefined5 uStack_55;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (param_6 == 0) {
    local_70 = (undefined8 *)*param_4;
    lStack_68 = param_4[1];
    FUN_14042f6c6(param_1,param_3,&local_70,2);
  }
  else {
    local_c8 = CONCAT44(local_c8._4_4_,param_2);
    lVar10 = param_3[8];
    local_c0 = *(ulonglong *)(lVar10 + 0x84);
    if (*(char *)(lVar10 + 0x93) == 'T') {
      param_3 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar9 = param_3 + 9;
      if (*(undefined8 **)(param_1 + 0x78) < puVar9) {
        FUN_140023dd8((longlong *)(param_1 + 0x70),0x50);
        param_3 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar9 = param_3 + 9;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar9;
      param_3[1] = *(undefined8 *)(lVar10 + 8);
      param_3[2] = 0;
      *(undefined1 *)(param_3 + 3) = 0;
      *(undefined8 *)((longlong)param_3 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(param_3 + 5) = 0;
      *param_3 = &PTR_FUN_14a1fb948;
      *(undefined1 *)(param_3 + 6) = 0x44;
      *(undefined1 *)(param_3 + 7) = 0;
      *(undefined4 *)((longlong)param_3 + 0x31) = 0;
      *(undefined2 *)((longlong)param_3 + 0x35) = 0;
      param_3[8] = lVar10;
      iVar4 = *(int *)(param_1 + 0x1a0);
      *(uint *)(param_1 + 0x1a0) = iVar4 + 1U;
      if (*(uint *)(param_1 + 0x1a4) < iVar4 + 1U) {
        FUN_1447568fc(param_1 + 0x198,iVar4);
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar4 * 8) = param_3;
      *(int *)((longlong)param_3 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    }
    puVar1 = (ulonglong *)(param_1 + 0x70);
    puVar14 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar9 = puVar14 + 0x2c;
    if (*(undefined8 **)(param_1 + 0x78) < puVar9) {
      FUN_140023dd8(puVar1,0x170);
      puVar14 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar9 = puVar14 + 0x2c;
    }
    *puVar1 = (ulonglong)puVar9;
    *puVar14 = &PTR_FUN_14a38bf18;
    local_80 = puVar14 + 2;
    puVar14[10] = 0;
    *(undefined1 (*) [16])(puVar14 + 2) = (undefined1  [16])0x0;
    lVar10 = 0x72;
    do {
      *(undefined1 (*) [16])((longlong)puVar14 + lVar10 + -0x12) = (undefined1  [16])0x0;
      *(undefined4 *)((longlong)puVar14 + lVar10 + -2) = 0xffff0000;
      lVar10 = lVar10 + 0x18;
    } while (lVar10 != 0x132);
    uVar13 = 0;
    *(undefined4 *)((longlong)puVar14 + 0x134) = 0;
    *(undefined1 (*) [16])(puVar14 + 0x24) = (undefined1  [16])0x0;
    *(undefined2 *)(puVar14 + 0x26) = 0;
    *(undefined4 *)(puVar14 + 0x27) = 0xffffffff;
    *(undefined4 *)((longlong)puVar14 + 0x13c) = 0xffffffff;
    *(undefined4 *)(puVar14 + 0x28) = 0xffffffff;
    *(undefined4 *)((longlong)puVar14 + 0x144) = 0xffffffff;
    *(undefined4 *)(puVar14 + 0x29) = 0;
    *(undefined2 *)((longlong)puVar14 + 0x14c) = 0;
    puVar14[0x2a] = 0;
    iVar4 = *(int *)(param_1 + 0xa0);
    *(uint *)(param_1 + 0xa0) = iVar4 + 1U;
    local_78 = puVar1;
    if (*(uint *)(param_1 + 0xa4) < iVar4 + 1U) {
      FUN_1448cfae8((longlong *)(param_1 + 0x98),iVar4);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar4 * 8) = puVar14;
    *(int *)(puVar14 + 8) = (int)*param_4;
    *(undefined4 *)((longlong)puVar14 + 0x44) = *(undefined4 *)((longlong)param_4 + 4);
    *(int *)(puVar14 + 9) = (int)param_4[1];
    *(undefined4 *)((longlong)puVar14 + 0x4c) = *(undefined4 *)((longlong)param_4 + 0xc);
    puVar14[10] = param_3;
    uVar6 = *(undefined8 *)
             (&DAT_14ca8c1f0 +
             (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)(int)local_c8 * 2) * 8);
    FUN_14155d12a();
    FUN_14155d12a();
    FUN_1448e935e(uVar6,&local_70,&DAT_14ca959c8);
    FUN_14155d12a();
    puVar9 = local_70;
    uVar12 = local_c0;
    local_88 = lStack_68;
    do {
      uVar20 = (ulonglong)uVar13;
      uVar13 = uVar13 + 1;
    } while (puVar14[uVar20 * 3 + 0xc] != 0);
    uVar20 = local_c0 >> 0x20;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14ca90e58) && (FUN_144b3d300(&DAT_14ca90e58), DAT_14ca90e58 == -1)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14ca008c0) && (FUN_144b3d300(&DAT_14ca008c0), DAT_14ca008c0 == -1))
      {
        FUN_145c37638(&local_70);
        local_e0 = (undefined1 *)((ulonglong)local_e0 & 0xffffffffffffff00);
        local_f0 = (undefined1 *)((ulonglong)local_f0 & 0xffffffffffffff00);
        local_100 = (code *)CONCAT44(local_100._4_4_,0x30);
        local_108 = (code *)CONCAT44(local_108._4_4_,0x30);
        local_110 = "Unknown";
        local_120 = (undefined1  [16])0x0;
        local_128 = L"FParameters";
        local_e8 = (undefined1 *)0x0;
        local_f8 = &local_70;
        FUN_140b49562(&DAT_14ca00840,0,1);
        if (local_70 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        atexit((_func_5014 *)&LAB_14321e028);
        _Init_thread_footer(&DAT_14ca008c0);
      }
      FUN_14600bb1a();
      local_d0 = &DAT_14ca00840;
      local_e0 = &LAB_14712ac08;
      local_e8 = &LAB_14712ac0c;
      local_f0 = &LAB_147421f40;
      local_f8 = (undefined8 **)&LAB_147421f44;
      local_100 = FUN_147421f5c;
      local_108 = FUN_147421fb6;
      local_128 = L"/Engine/Private/RenderGraphUtilities.usf";
      local_d8 = 0xe0;
      local_110 = (char *)CONCAT44(local_110._4_4_,2);
      local_120._0_12_ = ZEXT812(0x14a386246);
      FUN_140db5666(&DAT_14ca90db0,0,&DAT_14ca90d48);
      _DAT_14ca90db0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f82b5);
      _Init_thread_footer(&DAT_14ca90e58);
    }
    local_b4 = (uint)(uVar13 == 1) << 5;
    local_c8 = uVar6;
    FUN_1448e935e(uVar6,&local_58,&DAT_14ca90db0);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14ca90e58) && (FUN_144b3d300(&DAT_14ca90e58), DAT_14ca90e58 == -1)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14ca008c0) && (FUN_144b3d300(&DAT_14ca008c0), DAT_14ca008c0 == -1))
      {
        FUN_145c37638(&local_70);
        local_e0 = (undefined1 *)((ulonglong)local_e0 & 0xffffffffffffff00);
        local_f0 = (undefined1 *)((ulonglong)local_f0 & 0xffffffffffffff00);
        local_100 = (code *)CONCAT44(local_100._4_4_,0x30);
        local_108 = (code *)CONCAT44(local_108._4_4_,0x30);
        local_110 = "Unknown";
        local_120 = (undefined1  [16])0x0;
        local_128 = L"FParameters";
        local_e8 = (undefined1 *)0x0;
        local_f8 = &local_70;
        FUN_140b49562(&DAT_14ca00840,0,1);
        if (local_70 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        atexit((_func_5014 *)&LAB_14321e028);
        _Init_thread_footer(&DAT_14ca008c0);
      }
      FUN_14600bb1a();
      local_d0 = &DAT_14ca00840;
      local_e0 = &LAB_14712ac08;
      local_e8 = &LAB_14712ac0c;
      local_f0 = &LAB_147421f40;
      local_f8 = (undefined8 **)&LAB_147421f44;
      local_100 = FUN_147421f5c;
      local_108 = FUN_147421fb6;
      local_128 = L"/Engine/Private/RenderGraphUtilities.usf";
      local_d8 = 0xe0;
      local_110 = (char *)CONCAT44(local_110._4_4_,2);
      local_120._0_12_ = ZEXT812(0x14a386246);
      FUN_140db5666(&DAT_14ca90db0,0,&DAT_14ca90d48);
      _DAT_14ca90db0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f82b5);
      _Init_thread_footer(&DAT_14ca90e58);
    }
    local_98 = CONCAT53(uStack_55,CONCAT12(uStack_56,local_58));
    local_a0 = local_50;
    fVar24 = 1.0 / (float)(int)(uVar12 >> 0x20);
    *(float *)(puVar14 + 4) = 1.0 / (float)(int)local_c0;
    *(float *)((longlong)puVar14 + 0x24) = fVar24;
    *(float *)(puVar14 + 5) = 1.0 / (float)(int)local_c0;
    *(float *)((longlong)puVar14 + 0x2c) = fVar24;
    *(undefined4 *)(puVar14 + 6) = 0x3f800000;
    puVar14[2] = param_5;
    puVar14[3] = 0;
    *(int *)((longlong)puVar14 + 0x34) = param_6;
    local_90 = uVar20;
    FUN_14155d24c();
    iVar7 = local_b4;
    lVar10 = DAT_14ca95fa0;
    iVar4 = *(int *)(DAT_14ca95fa0 + 0x38);
    if (0 < (longlong)iVar4) {
      local_a8 = puVar9 + 6;
      local_b0 = puVar9 + 4;
      lVar16 = 0;
      iVar18 = 0;
      iVar22 = 0;
      iVar15 = 0;
      do {
        bVar2 = *(byte *)(*(longlong *)(lVar10 + 0x30) + 2 + lVar16 * 4);
        if (bVar2 < 0x14) {
          uVar3 = *(ushort *)(*(longlong *)(lVar10 + 0x30) + lVar16 * 4);
          uVar12 = (ulonglong)uVar3;
          iVar23 = iVar22;
          if ((0x67200U >> (bVar2 & 0x1f) & 1) == 0) {
            if (bVar2 == 0x13) {
              if (iVar15 < *(int *)(puVar9 + 7)) {
                uVar20 = *local_a8;
                uVar17 = ((longlong)uVar20 >> 0x18) + (longlong)local_a8;
                if ((uVar20 & 1) == 0) {
                  uVar17 = uVar20;
                }
                if (uVar3 == *(ushort *)(uVar17 + 2 + (longlong)iVar15 * 4)) {
                  iVar15 = iVar15 + 1;
                  goto LAB_1432128e5;
                }
              }
              if ((*(longlong *)((longlong)puVar14 + uVar12 + 0x40) != 0) &&
                 ((*(byte *)((longlong)puVar14 + uVar12 + 0x48) & 2) == 0)) goto LAB_1432128dc;
            }
          }
          else {
            iVar5 = *(int *)(puVar9 + 3);
            if (iVar18 < iVar5) {
              uVar20 = puVar9[2];
              uVar17 = ((longlong)uVar20 >> 0x18) + (longlong)(puVar9 + 2);
              if ((uVar20 & 1) == 0) {
                uVar17 = uVar20;
              }
              puVar11 = (ushort *)((longlong)iVar18 * 4 + uVar17);
              iVar19 = iVar18;
              do {
                if (uVar3 <= *puVar11) {
                  iVar18 = iVar19;
                  if (*puVar11 == uVar3) goto LAB_1432128e5;
                  break;
                }
                iVar19 = iVar19 + 1;
                puVar11 = puVar11 + 2;
                iVar18 = iVar5;
              } while (iVar5 != iVar19);
            }
            iVar5 = *(int *)(puVar9 + 5);
            if (iVar22 < iVar5) {
              uVar20 = *local_b0;
              uVar17 = ((longlong)uVar20 >> 0x18) + (longlong)local_b0;
              if ((uVar20 & 1) == 0) {
                uVar17 = uVar20;
              }
              puVar11 = (ushort *)((longlong)iVar22 * 6 + uVar17);
              do {
                if (uVar3 <= *puVar11) {
                  iVar23 = iVar22;
                  if (*puVar11 == uVar3) goto LAB_1432128e5;
                  break;
                }
                iVar22 = iVar22 + 1;
                puVar11 = puVar11 + 3;
                iVar23 = iVar5;
              } while (iVar5 != iVar22);
            }
LAB_1432128dc:
            *(undefined8 *)((longlong)puVar14 + uVar12 + 0x40) = 0;
            iVar22 = iVar23;
          }
        }
LAB_1432128e5:
        lVar16 = lVar16 + 1;
      } while (lVar16 != iVar4);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14ca96368) && (FUN_144b3d300(&DAT_14ca96368), DAT_14ca96368 == -1)) {
      FUN_145dcc33e(&local_70);
      local_e0 = (undefined1 *)((ulonglong)local_e0 & 0xffffffffffffff00);
      local_f0 = (undefined1 *)((ulonglong)local_f0 & 0xffffffffffffff00);
      local_110 = "Unknown";
      local_120 = ZEXT816(0);
      local_128 = L"FClearUAVRectsParameters";
      local_e8 = (undefined1 *)0x0;
      local_100 = (code *)CONCAT44(local_100._4_4_,0x150);
      local_108 = (code *)CONCAT44(local_108._4_4_,0x238);
      local_f8 = &local_70;
      FUN_140b49562(&DAT_14ca962e8,0,1);
      if (local_70 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14321e034);
      _Init_thread_footer(&DAT_14ca96368);
    }
    FUN_140069376(param_1);
    puVar1 = local_78;
    puVar21 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar14 = puVar21 + 0x42;
    if (*(undefined8 **)(param_1 + 0x78) < puVar14) {
      FUN_140023dd8(local_78,0x218);
      puVar21 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar14 = puVar21 + 0x42;
    }
    puVar8 = local_80;
    *puVar1 = (ulonglong)puVar14;
    local_70 = local_80;
    lStack_68 = DAT_14ca96330;
    if (DAT_14ca96330 != 0) {
      LOCK();
      *(int *)(DAT_14ca96330 + 8) = *(int *)(DAT_14ca96330 + 8) + 1;
      UNLOCK();
    }
    local_60 = &DAT_14ca962e8;
    local_128 = (wchar_t *)CONCAT71(local_128._1_7_,2);
    FUN_140068f1a(puVar21);
    *puVar21 = &PTR_FUN_14a38bf20;
    puVar21[0x37] = puVar8;
    puVar21[0x38] = local_c8;
    puVar21[0x39] = local_98;
    puVar21[0x3a] = local_a0;
    puVar21[0x3b] = puVar9;
    puVar21[0x3c] = local_88;
    *(int *)(puVar21 + 0x3d) = (int)local_c0;
    *(int *)((longlong)puVar21 + 0x1ec) = (int)local_90;
    puVar21[0x3e] = 0;
    puVar21[0x3f] = 0;
    *(undefined8 *)((longlong)puVar21 + 0x1fc) = 0;
    *(undefined8 *)((longlong)puVar21 + 0x204) = 0;
    *(byte *)((longlong)puVar21 + 0x20c) = (byte)iVar7 >> 5;
    *(undefined2 *)((longlong)puVar21 + 0x20d) = local_58;
    *(undefined1 *)((longlong)puVar21 + 0x20f) = uStack_56;
    iVar4 = *(int *)(param_1 + 0x170);
    *(uint *)(param_1 + 0x170) = iVar4 + 1U;
    if (*(uint *)(param_1 + 0x174) < iVar4 + 1U) {
      FUN_14470e57a(param_1 + 0x168,iVar4);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar4 * 8) = puVar21;
    *(int *)((longlong)puVar21 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
    FUN_140069100(param_1,puVar21);
  }
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14321302c FUN_14321302c body=801 status=ok
// SIG undefined FUN_14321302c(void)

void FUN_14321302c(longlong param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  ulonglong *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_d8 [32];
  wchar_t *local_b8;
  undefined1 local_b0 [16];
  char *local_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined8 **local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  longlong local_58;
  undefined *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar4 = puVar5 + 0x22;
  if (*(undefined8 **)(param_1 + 0x78) < puVar4) {
    FUN_140023dd8(puVar1,0x120);
    puVar5 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar4 = puVar5 + 0x22;
  }
  *puVar1 = (ulonglong)puVar4;
  *puVar5 = &PTR_FUN_14a1fbd30;
  local_68 = puVar5 + 2;
  lVar3 = 0x22;
  do {
    *(undefined1 (*) [16])((longlong)puVar5 + lVar3 + -0x12) = (undefined1  [16])0x0;
    *(undefined4 *)((longlong)puVar5 + lVar3 + -2) = 0xffff0000;
    lVar3 = lVar3 + 0x18;
  } while (lVar3 != 0xe2);
  *(undefined4 *)((longlong)puVar5 + 0xe4) = 0;
  *(undefined1 (*) [16])(puVar5 + 0x1a) = (undefined1  [16])0x0;
  *(undefined2 *)(puVar5 + 0x1c) = 0;
  *(undefined4 *)(puVar5 + 0x1d) = 0xffffffff;
  *(undefined4 *)((longlong)puVar5 + 0xec) = 0xffffffff;
  *(undefined4 *)(puVar5 + 0x1e) = 0xffffffff;
  *(undefined4 *)((longlong)puVar5 + 0xf4) = 0xffffffff;
  *(undefined4 *)(puVar5 + 0x1f) = 0;
  *(undefined2 *)((longlong)puVar5 + 0xfc) = 0;
  puVar5[0x20] = 0;
  iVar2 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar2 + 1U) {
    FUN_1448cfae8((longlong *)(param_1 + 0x98),iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar2 * 8) = puVar5;
  puVar5[0x1a] = param_2;
  puVar5[0x1b] = 0;
  *(undefined1 *)(puVar5 + 0x1c) = param_3;
  *(undefined1 *)((longlong)puVar5 + 0xe1) = param_4;
  *(undefined4 *)((longlong)puVar5 + 0xe4) = 0x22;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c1080) {
    FUN_144b3d300(&DAT_14c9c1080);
    if (DAT_14c9c1080 == -1) {
      FUN_145fddb1e(&local_60);
      local_70 = 0;
      local_80 = 0;
      local_a0 = "Unknown";
      local_b0 = (undefined1  [16])0x0;
      local_b8 = L"FRenderTargetParameters";
      local_78 = 0;
      local_90 = 0x100;
      local_98 = 0x7af;
      local_88 = &local_60;
      FUN_140b49562(&DAT_14c9c1000,0,1);
      if (local_60 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14321e2bb);
      _Init_thread_footer(&DAT_14c9c1080);
    }
  }
  FUN_140069376(param_1);
  puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar4 = puVar5 + 0x38;
  if (*(undefined8 **)(param_1 + 0x78) < puVar4) {
    FUN_140023dd8(puVar1,0x1c8);
    puVar5 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar5 + 0x38;
  }
  *puVar1 = (ulonglong)puVar4;
  local_60 = local_68;
  local_58 = DAT_14c9c1048;
  if (DAT_14c9c1048 != 0) {
    LOCK();
    *(int *)(DAT_14c9c1048 + 8) = *(int *)(DAT_14c9c1048 + 8) + 1;
    UNLOCK();
  }
  local_50 = &DAT_14c9c1000;
  local_b8 = (wchar_t *)CONCAT71(local_b8._1_7_,2);
  FUN_140068f1a(puVar5);
  *puVar5 = &PTR_FUN_14a38bff0;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar5;
  *(int *)((longlong)puVar5 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,puVar5);
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14321334e FUN_14321334e body=775 status=ok
// SIG undefined FUN_14321334e(void)

void FUN_14321334e(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined1 local_a0 [16];
  char *local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined8 **local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 *local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar4 = puVar6 + 0x22;
  if (*(undefined8 **)(param_1 + 0x78) < puVar4) {
    FUN_140023dd8(puVar1,0x120);
    puVar6 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar4 = puVar6 + 0x22;
  }
  *puVar1 = (ulonglong)puVar4;
  *puVar6 = &PTR_FUN_14a1fbd30;
  lVar3 = 0x22;
  do {
    *(undefined1 (*) [16])((longlong)puVar6 + lVar3 + -0x12) = (undefined1  [16])0x0;
    *(undefined4 *)((longlong)puVar6 + lVar3 + -2) = 0xffff0000;
    lVar3 = lVar3 + 0x18;
  } while (lVar3 != 0xe2);
  *(undefined4 *)((longlong)puVar6 + 0xe4) = 0;
  *(undefined1 (*) [16])(puVar6 + 0x1a) = (undefined1  [16])0x0;
  *(undefined2 *)(puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 0x1d) = 0xffffffff;
  *(undefined4 *)((longlong)puVar6 + 0xec) = 0xffffffff;
  *(undefined4 *)(puVar6 + 0x1e) = 0xffffffff;
  *(undefined4 *)((longlong)puVar6 + 0xf4) = 0xffffffff;
  *(undefined4 *)(puVar6 + 0x1f) = 0;
  *(undefined2 *)((longlong)puVar6 + 0xfc) = 0;
  puVar6[0x20] = 0;
  iVar2 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar2 + 1U) {
    FUN_1448cfae8((longlong *)(param_1 + 0x98),iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar2 * 8) = puVar6;
  puVar6[0x1a] = param_2;
  puVar6[0x1b] = 0;
  *(undefined2 *)(puVar6 + 0x1c) = 0x201;
  *(undefined4 *)((longlong)puVar6 + 0xe4) = 0x21;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c1080) {
    FUN_144b3d300(&DAT_14c9c1080);
    if (DAT_14c9c1080 == -1) {
      FUN_145fddb1e(&local_58);
      local_60 = 0;
      local_70 = 0;
      local_90 = "Unknown";
      local_a0 = (undefined1  [16])0x0;
      local_a8 = L"FRenderTargetParameters";
      local_68 = 0;
      local_80 = 0x100;
      local_88 = 0x7af;
      local_78 = &local_58;
      FUN_140b49562(&DAT_14c9c1000,0,1);
      if (local_58 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14321e2bb);
      _Init_thread_footer(&DAT_14c9c1080);
    }
  }
  FUN_140069376(param_1);
  puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar4 = puVar5 + 0x38;
  if (*(undefined8 **)(param_1 + 0x78) < puVar4) {
    FUN_140023dd8(puVar1,0x1c8);
    puVar5 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar5 + 0x38;
  }
  *puVar1 = (ulonglong)puVar4;
  local_50 = DAT_14c9c1048;
  if (DAT_14c9c1048 != 0) {
    LOCK();
    *(int *)(DAT_14c9c1048 + 8) = *(int *)(DAT_14c9c1048 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14c9c1000;
  local_a8 = (wchar_t *)CONCAT71(local_a8._1_7_,2);
  local_58 = puVar6 + 2;
  FUN_140068f1a(puVar5);
  *puVar5 = &PTR_FUN_14a38c010;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar5;
  *(int *)((longlong)puVar5 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,puVar5);
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143213656 FUN_143213656 body=803 status=ok
// SIG undefined FUN_143213656(void)

void FUN_143213656(longlong param_1,longlong param_2)

{
  ulonglong *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  bool bVar7;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined1 local_a0 [16];
  char *local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined8 **local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 *local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar4 = puVar5 + 0x22;
  if (*(undefined8 **)(param_1 + 0x78) < puVar4) {
    FUN_140023dd8(puVar1,0x120);
    puVar5 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar4 = puVar5 + 0x22;
  }
  *puVar1 = (ulonglong)puVar4;
  *puVar5 = &PTR_FUN_14a1fbd30;
  lVar3 = 0x22;
  do {
    *(undefined1 (*) [16])((longlong)puVar5 + lVar3 + -0x12) = (undefined1  [16])0x0;
    *(undefined4 *)((longlong)puVar5 + lVar3 + -2) = 0xffff0000;
    lVar3 = lVar3 + 0x18;
  } while (lVar3 != 0xe2);
  *(undefined4 *)((longlong)puVar5 + 0xe4) = 0;
  *(undefined1 (*) [16])(puVar5 + 0x1a) = (undefined1  [16])0x0;
  *(undefined2 *)(puVar5 + 0x1c) = 0;
  *(undefined4 *)(puVar5 + 0x1d) = 0xffffffff;
  *(undefined4 *)((longlong)puVar5 + 0xec) = 0xffffffff;
  *(undefined4 *)(puVar5 + 0x1e) = 0xffffffff;
  *(undefined4 *)((longlong)puVar5 + 0xf4) = 0xffffffff;
  *(undefined4 *)(puVar5 + 0x1f) = 0;
  *(undefined2 *)((longlong)puVar5 + 0xfc) = 0;
  puVar5[0x20] = 0;
  iVar2 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar2 + 1U) {
    FUN_1448cfae8((longlong *)(param_1 + 0x98),iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar2 * 8) = puVar5;
  bVar7 = *(char *)(param_2 + 0x93) == '\v';
  puVar5[0x1a] = param_2;
  puVar5[0x1b] = 0;
  *(undefined1 *)(puVar5 + 0x1c) = 1;
  *(bool *)((longlong)puVar5 + 0xe1) = bVar7;
  *(uint *)((longlong)puVar5 + 0xe4) = (uint)bVar7 << 5 | 2;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c1080) {
    FUN_144b3d300(&DAT_14c9c1080);
    if (DAT_14c9c1080 == -1) {
      FUN_145fddb1e(&local_58);
      local_60 = 0;
      local_70 = 0;
      local_90 = "Unknown";
      local_a0 = (undefined1  [16])0x0;
      local_a8 = L"FRenderTargetParameters";
      local_68 = 0;
      local_80 = 0x100;
      local_88 = 0x7af;
      local_78 = &local_58;
      FUN_140b49562(&DAT_14c9c1000,0,1);
      if (local_58 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14321e2bb);
      _Init_thread_footer(&DAT_14c9c1080);
    }
  }
  FUN_140069376(param_1);
  puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar4 = puVar6 + 0x38;
  if (*(undefined8 **)(param_1 + 0x78) < puVar4) {
    FUN_140023dd8(puVar1,0x1c8);
    puVar6 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar6 + 0x38;
  }
  *puVar1 = (ulonglong)puVar4;
  local_50 = DAT_14c9c1048;
  if (DAT_14c9c1048 != 0) {
    LOCK();
    *(int *)(DAT_14c9c1048 + 8) = *(int *)(DAT_14c9c1048 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14c9c1000;
  local_a8 = (wchar_t *)CONCAT71(local_a8._1_7_,2);
  local_58 = puVar5 + 2;
  FUN_140068f1a(puVar6);
  *puVar6 = &PTR_FUN_14a38c030;
  puVar6[0x37] = param_2;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar6;
  *(int *)((longlong)puVar6 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,puVar6);
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14321397a FUN_14321397a body=507 status=ok
// SIG undefined FUN_14321397a(void)

void FUN_14321397a(longlong param_1,undefined8 param_2,longlong param_3,undefined4 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_60;
  longlong local_58;
  undefined *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar3 = puVar5 + 6;
  if (*(undefined8 **)(param_1 + 0x78) < puVar3) {
    FUN_140023dd8(puVar1,0x40);
    puVar5 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar3 = puVar5 + 6;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar3;
  *puVar5 = &PTR_FUN_14a38c050;
  puVar5[2] = 0;
  puVar5[3] = 0;
  *(undefined4 *)(puVar5 + 4) = 0;
  iVar2 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar2 + 1U) {
    FUN_1448cfae8((longlong *)(param_1 + 0x98),iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar2 * 8) = puVar5;
  if (param_3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(param_3 + 0xac);
  }
  puVar5[2] = param_3;
  puVar5[3] = uVar4;
  *(undefined4 *)(puVar5 + 4) = 0x80;
  local_78 = *param_4;
  uStack_74 = param_4[1];
  uStack_70 = param_4[2];
  uStack_6c = param_4[3];
  FUN_14742f7ae();
  FUN_140069376(param_1);
  puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar3 = puVar6 + 0x3b;
  if (*(undefined8 **)(param_1 + 0x78) < puVar3) {
    FUN_140023dd8(puVar1,0x1e0);
    puVar6 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar6 + 0x3b;
  }
  *puVar1 = (ulonglong)puVar3;
  local_58 = DAT_14ca963b8;
  if (DAT_14ca963b8 != 0) {
    LOCK();
    *(int *)(DAT_14ca963b8 + 8) = *(int *)(DAT_14ca963b8 + 8) + 1;
    UNLOCK();
  }
  local_50 = &DAT_14ca96370;
  local_88 = 2;
  local_60 = puVar5 + 2;
  FUN_140068f1a(puVar6);
  *puVar6 = &PTR_FUN_14a38c060;
  puVar6[0x37] = param_2;
  puVar6[0x38] = param_3;
  *(undefined4 *)(puVar6 + 0x39) = local_78;
  *(undefined4 *)((longlong)puVar6 + 0x1cc) = uStack_74;
  *(undefined4 *)(puVar6 + 0x3a) = uStack_70;
  *(undefined4 *)((longlong)puVar6 + 0x1d4) = uStack_6c;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar6;
  *(int *)((longlong)puVar6 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    FUN_140069100(param_1,puVar6);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143213b82 FUN_143213b82 body=1570 status=ok
// SIG undefined FUN_143213b82(void)

longlong FUN_143213b82(longlong param_1,undefined4 param_2,longlong *param_3,undefined8 param_4,
                      undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  ulonglong *puVar1;
  char cVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  int iVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  undefined8 *puVar21;
  int iVar22;
  ushort *puVar23;
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined8 local_98;
  ulonglong *local_90;
  ulonglong *local_88;
  longlong local_80;
  ulonglong *local_78;
  undefined8 local_70;
  undefined1 local_61;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined *local_50;
  ulonglong local_48;
  
  local_98 = CONCAT44(local_98._4_4_,param_2);
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a8 = &local_61;
  local_61 = 0;
  local_50 = (undefined *)0x0;
  uVar12 = 0xc;
  if (DAT_14ca84e48 < 0xc) {
    uVar12 = DAT_14ca84e48;
  }
  local_60._0_4_ = uVar12 + (uVar12 == 0);
  local_60._4_4_ = 1;
  uStack_58 = 0x4189;
  puVar1 = (ulonglong *)(param_1 + 0x70);
  local_70 = param_4;
  local_80 = FUN_144738de6(param_1 + 0x188,puVar1);
  puVar21 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar11 = puVar21 + 6;
  if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
    FUN_140023dd8(puVar1,0x40);
    puVar21 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar11 = puVar21 + 6;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar11;
  *puVar21 = &PTR_FUN_14a38c0f8;
  puVar21[2] = 0;
  puVar21[5] = 0;
  iVar5 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar5 + 1U) {
    FUN_1448cfae8(param_1 + 0x98,iVar5);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar5 * 8) = puVar21;
  lVar7 = *param_3;
  cVar2 = *(char *)(lVar7 + 0x68);
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar11 = puVar16 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
    FUN_140023dd8(puVar1,0x50);
    puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar16 + 9;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar11;
  puVar16[1] = *(undefined8 *)(lVar7 + 8);
  puVar16[2] = 0;
  *(undefined1 *)(puVar16 + 3) = 3;
  *(undefined8 *)((longlong)puVar16 + 0x1c) = 0xffffffffffffffff;
  *puVar16 = &PTR_FUN_14a1fb168;
  *(byte *)(puVar16 + 5) = cVar2 >> 7 & 0x1c;
  *(undefined8 *)((longlong)puVar16 + 0x2c) = 0xffffffff00000000;
  puVar16[7] = 0;
  puVar16[8] = lVar7;
  iVar5 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
  local_90 = puVar1;
  if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
    FUN_1447568fc(param_1 + 0x198,iVar5);
  }
  puVar1 = local_90;
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar16;
  *(int *)((longlong)puVar16 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar21[2] = puVar16;
  *(undefined4 *)(puVar21 + 3) = param_7;
  *(undefined4 *)((longlong)puVar21 + 0x1c) = param_5;
  *(undefined4 *)(puVar21 + 4) = param_6;
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar11 = puVar16 + 8;
  if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
    FUN_140023dd8(local_90,0x48);
    puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar16 + 8;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar11;
  puVar16[1] = *(undefined8 *)(local_80 + 8);
  puVar16[2] = 0;
  *(undefined1 *)(puVar16 + 3) = 2;
  *(undefined8 *)((longlong)puVar16 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar16 + 5) = 0;
  *puVar16 = &PTR_FUN_14a1fb3e8;
  *(undefined2 *)(puVar16 + 6) = 0x1c;
  *(undefined1 *)((longlong)puVar16 + 0x32) = 0;
  puVar16[7] = local_80;
  iVar5 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
    FUN_1447568fc(param_1 + 0x198,iVar5);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar16;
  *(int *)((longlong)puVar16 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar21[5] = puVar16;
  puVar11 = puVar21 + 2;
  uVar8 = *(undefined8 *)
           (&DAT_14ca8c1f0 +
           (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)(int)local_98 * 2) * 8);
  FUN_141599476();
  FUN_141599476();
  iVar14 = 0;
  FUN_1448e935e(uVar8,&local_60,&DAT_14ca95af0);
  FUN_141599476();
  lVar7 = CONCAT44(local_60._4_4_,(int)local_60);
  local_98 = CONCAT44(uStack_54,uStack_58);
  FUN_141599598();
  lVar10 = DAT_14ca96028;
  iVar5 = *(int *)(DAT_14ca96028 + 0x38);
  if (0 < (longlong)iVar5) {
    local_78 = (ulonglong *)(lVar7 + 0x30);
    local_88 = (ulonglong *)(lVar7 + 0x20);
    lVar20 = 0;
    iVar19 = 0;
    iVar22 = 0;
    do {
      bVar3 = *(byte *)(*(longlong *)(lVar10 + 0x30) + 2 + lVar20 * 4);
      if (bVar3 < 0x14) {
        uVar4 = *(ushort *)(*(longlong *)(lVar10 + 0x30) + lVar20 * 4);
        uVar17 = (ulonglong)uVar4;
        iVar18 = iVar19;
        if ((0x67200U >> (bVar3 & 0x1f) & 1) == 0) {
          if (bVar3 == 0x13) {
            if (iVar22 < *(int *)(lVar7 + 0x38)) {
              uVar9 = *local_78;
              uVar13 = ((longlong)uVar9 >> 0x18) + (longlong)local_78;
              if ((uVar9 & 1) == 0) {
                uVar13 = uVar9;
              }
              if (uVar4 == *(ushort *)(uVar13 + 2 + (longlong)iVar22 * 4)) {
                iVar22 = iVar22 + 1;
                goto LAB_143213efe;
              }
            }
            if ((*(longlong *)((longlong)puVar11 + uVar17) != 0) &&
               ((*(byte *)((longlong)puVar21 + uVar17 + 0x18) & 2) == 0)) goto LAB_143213ef6;
          }
        }
        else {
          iVar6 = *(int *)(lVar7 + 0x18);
          if (iVar14 < iVar6) {
            uVar9 = *(ulonglong *)(lVar7 + 0x10);
            uVar13 = ((longlong)uVar9 >> 0x18) + lVar7 + 0x10;
            if ((uVar9 & 1) == 0) {
              uVar13 = uVar9;
            }
            puVar23 = (ushort *)(uVar13 + (longlong)iVar14 * 4);
            iVar15 = iVar14;
            do {
              if (uVar4 <= *puVar23) {
                iVar14 = iVar15;
                if (*puVar23 == uVar4) goto LAB_143213efe;
                break;
              }
              iVar15 = iVar15 + 1;
              puVar23 = puVar23 + 2;
              iVar14 = iVar6;
            } while (iVar6 != iVar15);
          }
          iVar6 = *(int *)(lVar7 + 0x28);
          if (iVar19 < iVar6) {
            uVar9 = *local_88;
            uVar13 = ((longlong)uVar9 >> 0x18) + (longlong)local_88;
            if ((uVar9 & 1) == 0) {
              uVar13 = uVar9;
            }
            puVar23 = (ushort *)(uVar13 + (longlong)iVar19 * 6);
            do {
              if (uVar4 <= *puVar23) {
                iVar18 = iVar19;
                if (*puVar23 == uVar4) goto LAB_143213efe;
                break;
              }
              iVar19 = iVar19 + 1;
              puVar23 = puVar23 + 3;
              iVar18 = iVar6;
            } while (iVar6 != iVar19);
          }
LAB_143213ef6:
          *(undefined8 *)((longlong)puVar11 + uVar17) = 0;
          iVar19 = iVar18;
        }
      }
LAB_143213efe:
      lVar20 = lVar20 + 1;
    } while (lVar20 != iVar5);
  }
  FUN_140069376(param_1);
  puVar1 = local_90;
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar21 = puVar16 + 0x3d;
  if (*(undefined8 **)(param_1 + 0x78) < puVar21) {
    FUN_140023dd8(local_90,0x1f0);
    puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar21 = puVar16 + 0x3d;
  }
  *local_90 = (ulonglong)puVar21;
  uStack_58 = (undefined4)DAT_14ca96028;
  uStack_54 = (undefined4)((ulonglong)DAT_14ca96028 >> 0x20);
  if (DAT_14ca96028 != 0) {
    LOCK();
    *(int *)(DAT_14ca96028 + 8) = *(int *)(DAT_14ca96028 + 8) + 1;
    UNLOCK();
  }
  local_50 = &DAT_14ca95fe0;
  local_a8 = (undefined1 *)CONCAT71(local_a8._1_7_,2);
  local_60 = puVar11;
  FUN_140068f1a(puVar16);
  *puVar16 = &PTR_FUN_14a38c100;
  puVar16[0x37] = &DAT_14ca95fe0;
  puVar16[0x38] = puVar11;
  puVar16[0x39] = lVar7;
  puVar16[0x3a] = local_98;
  puVar16[0x3b] = &DAT_100000001;
  *(undefined4 *)(puVar16 + 0x3c) = 1;
  iVar5 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar5 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar5);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar5 * 8) = puVar16;
  *(int *)((longlong)puVar16 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,puVar16);
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return local_80;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432141a6 FUN_1432141a6 body=98 status=ok
// SIG undefined FUN_1432141a6(void)

longlong FUN_1432141a6(longlong param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    plVar3 = (longlong *)(param_1 + 0x110);
    if (*(longlong **)(param_1 + 0x100) != (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 0x100);
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  puVar2 = *(undefined8 **)(param_1 + 0xa0);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143214208 FUN_143214208 body=14 status=ok
// SIG undefined FUN_143214208(void)

void FUN_143214208(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}



// FUNCTION 143214216 FUN_143214216 body=450 status=ok
// SIG undefined FUN_143214216(void)

void FUN_143214216(undefined8 *param_1,uint param_2)

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
LAB_143214331:
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
LAB_14321436e:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 8;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xde8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_14321426c;
LAB_143214261:
  FUN_144769a66(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_14321426c:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 3U & 0xfffffffffffffffc);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0x1ff5) goto code_r0x000143214298;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x5c,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 2 + 0x17;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_1432142ee:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_14321436e;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_143214331;
code_r0x000143214298:
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
      goto LAB_1432142ee;
    }
  }
  goto LAB_143214261;
}



// FUNCTION 1432143d8 FUN_1432143d8 body=99 status=ok
// SIG undefined FUN_1432143d8(void)

void FUN_1432143d8(longlong *param_1)

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



// FUNCTION 14321443c FUN_14321443c body=14 status=ok
// SIG undefined FUN_14321443c(void)

void FUN_14321443c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}



// FUNCTION 14321444a FUN_14321444a body=14 status=ok
// SIG undefined FUN_14321444a(void)

void FUN_14321444a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}



// FUNCTION 143214458 FUN_143214458 body=14 status=ok
// SIG undefined FUN_143214458(void)

void FUN_143214458(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}



// FUNCTION 143214472 FUN_143214472 body=1295 status=ok
// SIG undefined FUN_143214472(void)

void FUN_143214472(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  LARGE_INTEGER LVar6;
  longlong *plVar7;
  ulonglong uVar8;
  char cVar9;
  int iVar10;
  undefined8 *lpTlsValue;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong lVar17;
  ulonglong uVar18;
  bool bVar19;
  undefined1 auStack_a8 [40];
  ulonglong local_80;
  LARGE_INTEGER local_78;
  longlong *local_70;
  ulonglong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  QueryPerformanceCounter(&local_78);
  LVar6 = local_78;
  lVar5 = param_1[1];
  if ((longlong)(int)lVar5 != 0) {
    lVar3 = *param_1;
    lVar17 = 0;
    do {
      if (*(longlong *)(lVar3 + lVar17) != 0) {
        local_70 = (longlong *)0xffffffffffffffff;
        local_78 = LVar6;
        FUN_14002f804(*(longlong *)(lVar3 + lVar17),&local_78,0);
      }
      lVar17 = lVar17 + 8;
    } while ((longlong)(int)lVar5 * 8 != lVar17);
  }
  FUN_14470f0c8(&local_78,0);
  plVar7 = local_70;
  LVar6 = local_78;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_70 + 1) = (int)local_70[1] + 1;
    UNLOCK();
  }
  lpTlsValue = TlsGetValue(DAT_14c896140);
  if (lpTlsValue == (undefined8 *)0x0) {
    lpTlsValue = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *lpTlsValue = 0;
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
    TlsSetValue(DAT_14c896140,lpTlsValue);
  }
  puVar13 = (undefined8 *)lpTlsValue[1];
  if (puVar13 == (undefined8 *)0x0) {
    puVar13 = (undefined8 *)*lpTlsValue;
    if (puVar13 == (undefined8 *)0x0) {
      uVar16 = (uint)DAT_14c896180;
      uVar8 = DAT_14c896180;
      while (DAT_14c896180 = uVar8, local_68 = uVar8, (uVar8 & 0x3ffffff) != 0) {
        local_80 = (uVar8 & 0xfffffffffc000000) + 0x4000000;
        if (local_80 >> 0x1a < uVar8 >> 0x1a) {
          FUN_14000f986(0x3a83126f);
        }
        uVar15 = (ulonglong)((uVar16 & 0x3ffffff) >> 0xe);
        uVar18 = (ulonglong)((uint)uVar8 & 0x3fff);
        local_80 = local_80 & 0xfffffffffc000000 |
                   (ulonglong)
                   *(uint *)(*(longlong *)(&DAT_14c833b00 + uVar15 * 8) + 0x10 + uVar18 * 0x18);
        LOCK();
        bVar19 = local_68 == DAT_14c896180;
        uVar8 = local_80;
        if (!bVar19) {
          uVar8 = DAT_14c896180;
        }
        DAT_14c896180 = uVar8;
        UNLOCK();
        if (bVar19) {
          *(undefined4 *)(*(longlong *)(&DAT_14c833b00 + uVar15 * 8) + uVar18 * 0x18 + 0x10) = 0;
          puVar13 = *(undefined8 **)
                     (*(longlong *)(&DAT_14c833b00 + uVar15 * 8) + 8 +
                     (ulonglong)(uVar16 & 0x3fff) * 0x18);
          FUN_1447d080c(uVar16 & 0x3ffffff);
          lpTlsValue[1] = puVar13;
          if (puVar13 == (undefined8 *)0x0) goto LAB_14321494b;
          goto LAB_1432147b8;
        }
        uVar16 = (uint)DAT_14c896180;
        uVar8 = DAT_14c896180;
      }
      lpTlsValue[1] = 0;
LAB_14321494b:
      puVar13 = (undefined8 *)FUN_14001cc68(0x10000,0);
      lpTlsValue[1] = puVar13;
      iVar10 = 0xff;
      puVar14 = puVar13;
      do {
        puVar12 = puVar14 + 0x20;
        *puVar14 = puVar12;
        iVar10 = iVar10 + -1;
        puVar14 = puVar12;
      } while (iVar10 != 0);
    }
    else {
      lpTlsValue[1] = puVar13;
      puVar12 = lpTlsValue;
    }
    *puVar12 = 0;
LAB_1432147b8:
    *(undefined4 *)(lpTlsValue + 2) = 0x100;
    iVar10 = 0xff;
  }
  else {
    iVar10 = *(int *)(lpTlsValue + 2) + -1;
  }
  lpTlsValue[1] = *puVar13;
  *(int *)(lpTlsValue + 2) = iVar10;
  *puVar13 = UE::Tasks::Private::FTaskBase::vftable;
  puVar13[1] = &DAT_100000002;
  puVar13[2] = 0;
  *(undefined4 *)(puVar13 + 3) = 0;
  *(undefined4 *)(puVar13 + 4) = 0xffffffff;
  puVar13[6] = 0;
  puVar13[7] = 0x100000000;
  *(undefined1 *)(puVar13 + 8) = 1;
  puVar13[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                 ::TTaskDelegateDummy::vftable;
  puVar13[0xf] = 0;
  puVar13[0x10] = 0xe800000000000020;
  puVar13[0x12] = 0;
  puVar13[0x13] = 0x100000000;
  *(undefined2 *)(puVar13 + 0x14) = 0;
  LOCK();
  bVar19 = *(char *)(puVar13 + 8) == '\x01';
  if (bVar19) {
    *(char *)(puVar13 + 8) = '\0';
  }
  UNLOCK();
  if (!bVar19) {
    FUN_14008cdb0(puVar13 + 8);
  }
  *puVar13 = &PTR_FUN_14a38b418;
  if (*(code **)(puVar13[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(puVar13[0xe] + 0x18))(puVar13 + 0xe,puVar13 + 9);
  }
  puVar13[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                 ::
                 TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                 ::vftable;
  puVar13[9] = puVar13;
  puVar13[10] = puVar13;
  lVar5 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8);
  iVar10 = 0;
  if (lVar5 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = *(undefined8 *)(lVar5 + 0x30);
  }
  puVar13[0xf] = uVar11;
  puVar13[0x10] = 0xc80000527a251600;
  *(undefined4 *)((longlong)puVar13 + 0x1c) = 1;
  *(LARGE_INTEGER *)(puVar13 + 0x15) = LVar6;
  puVar13[0x16] = plVar7;
  *puVar13 = &PTR_FUN_14a38b408;
  LOCK();
  *(int *)((longlong)puVar13 + 0xc) = *(int *)((longlong)puVar13 + 0xc) + (int)param_1[1];
  UNLOCK();
  lVar5 = param_1[1];
  if ((longlong)(int)lVar5 != 0) {
    lVar3 = *param_1;
    lVar17 = 0;
    iVar10 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar17);
      if ((lVar4 == 0) || (cVar9 = FUN_1456bb142(lVar4 + 0x88,puVar13), cVar9 == '\0')) {
        iVar10 = iVar10 + 1;
      }
      else {
        LOCK();
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
        UNLOCK();
        FUN_1456bb1d4(puVar13 + 5,lVar4);
      }
      lVar17 = lVar17 + 8;
    } while ((longlong)(int)lVar5 * 8 != lVar17);
  }
  LOCK();
  *(int *)((longlong)puVar13 + 0xc) = *(int *)((longlong)puVar13 + 0xc) - iVar10;
  UNLOCK();
  local_68 = CONCAT71(local_68._1_7_,1);
  cVar9 = FUN_1447439e4(puVar13);
  if (cVar9 == '\0') {
    (**(code **)(*(longlong *)local_78 + 0x20))(local_78.QuadPart,0xffffffff,0);
  }
  if (puVar13 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar13 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar13)(puVar13,1);
    }
  }
  plVar7 = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_70 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143214982 FUN_143214982 body=74 status=ok
// SIG undefined FUN_143214982(void)

void FUN_143214982(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x10))();
  plVar3 = *(longlong **)(param_1 + 0xb0);
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
                    /* WARNING: Could not recover jumptable at 0x0001432149c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1432149f4 FUN_1432149f4 body=139 status=ok
// SIG undefined FUN_1432149f4(void)

undefined8 * FUN_1432149f4(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = param_2;
  param_1[0x16] = 0;
  param_1[0x17] = 0x1000000000;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_145c92d90(param_1 + 6,DAT_14ca8b9f8);
  local_28 = 0;
  FUN_145c92d42(param_1 + 6);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143214aa4 FUN_143214aa4 body=48 status=ok
// SIG undefined FUN_143214aa4(void)

void FUN_143214aa4(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_147381ad4();
                    /* WARNING: Could not recover jumptable at 0x000143214ad1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x10))(plVar1,param_2,1,param_1);
  return;
}



// FUNCTION 143214ade FUN_143214ade body=12 status=ok
// SIG undefined FUN_143214ade(void)

void FUN_143214ade(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143214ae7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143214aea FUN_143214aea body=57 status=ok
// SIG undefined FUN_143214aea(void)

undefined8 * FUN_143214aea(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a38b520;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143214b24 FUN_143214b24 body=282 status=ok
// SIG undefined FUN_143214b24(void)

undefined8 * FUN_143214b24(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1432149cc);
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



// FUNCTION 143214c3e FUN_143214c3e body=121 status=ok
// SIG undefined FUN_143214c3e(void)

void FUN_143214c3e(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  plVar2 = (longlong *)FUN_147381ad4();
  (**(code **)(*plVar2 + 0x10))(plVar2,&DAT_14ca85100,1,param_1 + 0x15);
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143214cac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143214cb8 FUN_143214cb8 body=68 status=ok
// SIG undefined FUN_143214cb8(void)

undefined8 * FUN_143214cb8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a38b5a0;
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143214cfc FUN_143214cfc body=1225 status=ok
// SIG undefined FUN_143214cfc(void)

void FUN_143214cfc(longlong param_1,ulonglong *param_2)

{
  byte bVar1;
  int iVar2;
  void *_Src;
  ulonglong uVar3;
  uint uVar4;
  void **ppvVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  int iVar9;
  ulonglong uVar10;
  size_t _Size;
  int iVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_e8 [40];
  void *local_c0;
  void **local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  undefined8 local_60;
  int local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  iVar11 = 0;
  local_b8 = (void **)0x0;
  local_b0 = 0x800000000;
  local_68 = (undefined1 *)0x0;
  local_60 = 0x800000000;
  local_58 = 0;
  uStack_50 = 0;
  lVar13 = *(longlong *)(param_1 + 0x18);
  iVar2 = *(int *)(lVar13 + 0x78);
  if (iVar2 != 0) {
    do {
      uVar3 = local_b0;
      uVar10 = (ulonglong)
               *(ushort *)
                (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x70) + (longlong)iVar11 * 4);
      lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x10) + uVar10);
      iVar9 = local_58;
      if ((lVar13 != 0) && ((*(byte *)(*(longlong *)(param_1 + 0x10) + 8 + uVar10) & 2) != 0)) {
        if (uStack_50 == 0) {
          bVar1 = *(byte *)(*(longlong *)(lVar13 + 0x20) + 0x8a);
          lVar14 = (longlong)(int)local_b0;
          uVar4 = (int)local_b0 + 1;
          local_b0 = CONCAT44(local_b0._4_4_,uVar4);
          if (local_b0._4_4_ < uVar4) {
            FUN_14726c186(&local_c0,uVar3 & 0xffffffff);
          }
          ppvVar5 = local_b8;
          if (local_b8 == (void **)0x0) {
            ppvVar5 = &local_c0;
          }
          *(byte *)((longlong)ppvVar5 + lVar14) = bVar1;
          uVar3 = local_60;
          lVar14 = (longlong)(int)local_60;
          uVar4 = (int)local_60 + 1;
          local_60 = CONCAT44(local_60._4_4_,uVar4);
          if (local_60._4_4_ < uVar4) {
            FUN_1474146d2(local_a8,uVar3 & 0xffffffff);
          }
          puVar6 = local_68;
          if (local_68 == (undefined1 *)0x0) {
            puVar6 = local_a8;
          }
          *(longlong *)(puVar6 + lVar14 * 8) = lVar13;
          iVar9 = bVar1 + 1;
          if (iVar9 <= local_58) {
            iVar9 = local_58;
          }
        }
        else {
          lVar14 = FUN_147413418(uStack_50,*(longlong *)(lVar13 + 0x20) + 0x10);
          puVar6 = local_68;
          if (local_68 == (undefined1 *)0x0) {
            puVar6 = local_a8;
          }
          *(longlong *)(puVar6 + (*(uint *)(lVar14 + 0x10) >> 1 & 0x1f8)) = lVar13;
          iVar9 = local_58;
        }
      }
      local_58 = iVar9;
      iVar11 = iVar11 + 1;
    } while (iVar2 != iVar11);
    lVar13 = *(longlong *)(param_1 + 0x18);
  }
  iVar2 = *(int *)(lVar13 + 0x68);
  if (iVar2 != 0) {
    iVar11 = 0;
    do {
      uVar3 = local_b0;
      uVar10 = (ulonglong)
               *(ushort *)
                (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x60) + (longlong)iVar11 * 4);
      lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x10) + uVar10);
      iVar9 = local_58;
      if ((lVar13 != 0) && ((*(byte *)(*(longlong *)(param_1 + 0x10) + 8 + uVar10) & 2) != 0)) {
        lVar13 = *(longlong *)(lVar13 + 0x10);
        if (uStack_50 == 0) {
          bVar1 = *(byte *)(*(longlong *)(lVar13 + 0x20) + 0x8a);
          lVar14 = (longlong)(int)local_b0;
          uVar4 = (int)local_b0 + 1;
          local_b0 = CONCAT44(local_b0._4_4_,uVar4);
          if (local_b0._4_4_ < uVar4) {
            FUN_14726c186(&local_c0,uVar3 & 0xffffffff);
          }
          ppvVar5 = local_b8;
          if (local_b8 == (void **)0x0) {
            ppvVar5 = &local_c0;
          }
          *(byte *)((longlong)ppvVar5 + lVar14) = bVar1;
          uVar3 = local_60;
          lVar14 = (longlong)(int)local_60;
          uVar4 = (int)local_60 + 1;
          local_60 = CONCAT44(local_60._4_4_,uVar4);
          if (local_60._4_4_ < uVar4) {
            FUN_1474146d2(local_a8,uVar3 & 0xffffffff);
          }
          puVar6 = local_68;
          if (local_68 == (undefined1 *)0x0) {
            puVar6 = local_a8;
          }
          *(longlong *)(puVar6 + lVar14 * 8) = lVar13;
          iVar9 = bVar1 + 1;
          if (iVar9 <= local_58) {
            iVar9 = local_58;
          }
        }
        else {
          lVar14 = FUN_147413418(uStack_50,*(longlong *)(lVar13 + 0x20) + 0x10);
          puVar6 = local_68;
          if (local_68 == (undefined1 *)0x0) {
            puVar6 = local_a8;
          }
          *(longlong *)(puVar6 + (*(uint *)(lVar14 + 0x10) >> 1 & 0x1f8)) = lVar13;
          iVar9 = local_58;
        }
      }
      local_58 = iVar9;
      iVar11 = iVar11 + 1;
    } while (iVar2 != iVar11);
  }
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar12 + 0x11;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x90);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 0x11;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_FUN_14a1fb978;
  puVar12[3] = 0;
  _Size = (size_t)(int)local_b0;
  *(int *)(puVar12 + 4) = (int)local_b0;
  if (_Size == 0) {
    *(undefined4 *)((longlong)puVar12 + 0x24) = 8;
  }
  else {
    ppvVar5 = &local_c0;
    if (local_b8 != (void **)0x0) {
      ppvVar5 = local_b8;
    }
    FUN_1446fe144(puVar12 + 2,local_b0 & 0xffffffff,0);
    puVar7 = (undefined8 *)puVar12[3];
    if ((undefined8 *)puVar12[3] == (undefined8 *)0x0) {
      puVar7 = puVar12 + 2;
    }
    memcpy(puVar7,ppvVar5,_Size);
  }
  puVar12[0xd] = 0;
  lVar13 = (longlong)(int)local_60;
  *(int *)(puVar12 + 0xe) = (int)local_60;
  if (lVar13 == 0) {
    *(undefined4 *)((longlong)puVar12 + 0x74) = 8;
  }
  else {
    puVar6 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar6 = local_a8;
    }
    FUN_1446fe1b8(puVar12 + 5,local_60 & 0xffffffff,0);
    puVar7 = (undefined8 *)puVar12[0xd];
    if ((undefined8 *)puVar12[0xd] == (undefined8 *)0x0) {
      puVar7 = puVar12 + 5;
    }
    memcpy(puVar7,puVar6,lVar13 << 3);
  }
  *(int *)(puVar12 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar12 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar12 + 0x10) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)puVar12 + 0x84) = uStack_50._4_4_;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (void **)0x0) {
    FUN_1400020a8();
  }
  plVar8 = (longlong *)FUN_147381ad4();
  local_c0 = (void *)0x0;
  uVar4 = *(uint *)(param_1 + 0x1c0);
  _Src = *(void **)(param_1 + 0x1b8);
  local_b8 = (void **)CONCAT44(local_b8._4_4_,uVar4);
  if ((longlong)(int)uVar4 == 0) {
    local_b8 = (void **)(ulonglong)uVar4;
  }
  else {
    FUN_1446dd670(&local_c0,uVar4,0);
    memcpy(local_c0,_Src,(longlong)(int)uVar4 * 2);
  }
  (**(code **)(*plVar8 + 0x10))(plVar8,param_2,1,&local_c0);
  if (local_c0 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1432151d2 FUN_1432151d2 body=68 status=ok
// SIG undefined FUN_1432151d2(void)

undefined8 * FUN_1432151d2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a38b5a0;
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143215216 FUN_143215216 body=38 status=ok
// SIG undefined FUN_143215216(void)

undefined8 FUN_143215216(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14321523c FUN_14321523c body=1102 status=ok
// SIG undefined FUN_14321523c(void)

void FUN_14321523c(longlong param_1,ulonglong *param_2)

{
  byte bVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  size_t _Size;
  int iVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined1 auStack_e8 [40];
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  undefined8 local_60;
  int local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  iVar11 = 0;
  local_b8 = (undefined1 *)0x0;
  local_b0 = 0x800000000;
  local_68 = (undefined1 *)0x0;
  local_60 = 0x800000000;
  local_58 = 0;
  uStack_50 = 0;
  lVar10 = *(longlong *)(param_1 + 0x18);
  iVar2 = *(int *)(lVar10 + 0x78);
  if (iVar2 != 0) {
    do {
      uVar3 = local_b0;
      uVar9 = (ulonglong)
              *(ushort *)
               (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x70) + (longlong)iVar11 * 4);
      lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x10) + uVar9);
      iVar8 = local_58;
      if ((lVar10 != 0) && ((*(byte *)(*(longlong *)(param_1 + 0x10) + 8 + uVar9) & 2) != 0)) {
        if (uStack_50 == 0) {
          bVar1 = *(byte *)(*(longlong *)(lVar10 + 0x20) + 0x8a);
          lVar12 = (longlong)(int)local_b0;
          uVar4 = (int)local_b0 + 1;
          local_b0 = CONCAT44(local_b0._4_4_,uVar4);
          if (local_b0._4_4_ < uVar4) {
            FUN_14726c186(local_c0,uVar3 & 0xffffffff);
          }
          puVar5 = local_b8;
          if (local_b8 == (undefined1 *)0x0) {
            puVar5 = local_c0;
          }
          puVar5[lVar12] = bVar1;
          uVar3 = local_60;
          lVar12 = (longlong)(int)local_60;
          uVar4 = (int)local_60 + 1;
          local_60 = CONCAT44(local_60._4_4_,uVar4);
          if (local_60._4_4_ < uVar4) {
            FUN_1474146d2(local_a8,uVar3 & 0xffffffff);
          }
          puVar5 = local_68;
          if (local_68 == (undefined1 *)0x0) {
            puVar5 = local_a8;
          }
          *(longlong *)(puVar5 + lVar12 * 8) = lVar10;
          iVar8 = bVar1 + 1;
          if (iVar8 <= local_58) {
            iVar8 = local_58;
          }
        }
        else {
          lVar12 = FUN_147413418(uStack_50,*(longlong *)(lVar10 + 0x20) + 0x10);
          puVar5 = local_68;
          if (local_68 == (undefined1 *)0x0) {
            puVar5 = local_a8;
          }
          *(longlong *)(puVar5 + (*(uint *)(lVar12 + 0x10) >> 1 & 0x1f8)) = lVar10;
          iVar8 = local_58;
        }
      }
      local_58 = iVar8;
      iVar11 = iVar11 + 1;
    } while (iVar2 != iVar11);
    lVar10 = *(longlong *)(param_1 + 0x18);
  }
  iVar2 = *(int *)(lVar10 + 0x68);
  if (iVar2 != 0) {
    iVar11 = 0;
    do {
      uVar3 = local_b0;
      uVar9 = (ulonglong)
              *(ushort *)
               (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x60) + (longlong)iVar11 * 4);
      lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x10) + uVar9);
      iVar8 = local_58;
      if ((lVar10 != 0) && ((*(byte *)(*(longlong *)(param_1 + 0x10) + 8 + uVar9) & 2) != 0)) {
        lVar10 = *(longlong *)(lVar10 + 0x10);
        if (uStack_50 == 0) {
          bVar1 = *(byte *)(*(longlong *)(lVar10 + 0x20) + 0x8a);
          lVar12 = (longlong)(int)local_b0;
          uVar4 = (int)local_b0 + 1;
          local_b0 = CONCAT44(local_b0._4_4_,uVar4);
          if (local_b0._4_4_ < uVar4) {
            FUN_14726c186(local_c0,uVar3 & 0xffffffff);
          }
          puVar5 = local_b8;
          if (local_b8 == (undefined1 *)0x0) {
            puVar5 = local_c0;
          }
          puVar5[lVar12] = bVar1;
          uVar3 = local_60;
          lVar12 = (longlong)(int)local_60;
          uVar4 = (int)local_60 + 1;
          local_60 = CONCAT44(local_60._4_4_,uVar4);
          if (local_60._4_4_ < uVar4) {
            FUN_1474146d2(local_a8,uVar3 & 0xffffffff);
          }
          puVar5 = local_68;
          if (local_68 == (undefined1 *)0x0) {
            puVar5 = local_a8;
          }
          *(longlong *)(puVar5 + lVar12 * 8) = lVar10;
          iVar8 = bVar1 + 1;
          if (iVar8 <= local_58) {
            iVar8 = local_58;
          }
        }
        else {
          lVar12 = FUN_147413418(uStack_50,*(longlong *)(lVar10 + 0x20) + 0x10);
          puVar5 = local_68;
          if (local_68 == (undefined1 *)0x0) {
            puVar5 = local_a8;
          }
          *(longlong *)(puVar5 + (*(uint *)(lVar12 + 0x10) >> 1 & 0x1f8)) = lVar10;
          iVar8 = local_58;
        }
      }
      local_58 = iVar8;
      iVar11 = iVar11 + 1;
    } while (iVar2 != iVar11);
  }
  puVar13 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar13 + 0x11;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x90);
    puVar13 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar13 + 0x11;
  }
  *param_2 = (ulonglong)puVar6;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar13;
  param_2[6] = (ulonglong)(puVar13 + 1);
  puVar13[1] = 0;
  *puVar13 = &PTR_FUN_14a1fb978;
  puVar13[3] = 0;
  _Size = (size_t)(int)local_b0;
  *(int *)(puVar13 + 4) = (int)local_b0;
  if (_Size == 0) {
    *(undefined4 *)((longlong)puVar13 + 0x24) = 8;
  }
  else {
    puVar5 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar5 = local_b8;
    }
    FUN_1446fe144(puVar13 + 2,local_b0 & 0xffffffff,0);
    puVar6 = (undefined8 *)puVar13[3];
    if ((undefined8 *)puVar13[3] == (undefined8 *)0x0) {
      puVar6 = puVar13 + 2;
    }
    memcpy(puVar6,puVar5,_Size);
  }
  puVar13[0xd] = 0;
  lVar10 = (longlong)(int)local_60;
  *(int *)(puVar13 + 0xe) = (int)local_60;
  if (lVar10 == 0) {
    *(undefined4 *)((longlong)puVar13 + 0x74) = 8;
  }
  else {
    puVar5 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar5 = local_a8;
    }
    FUN_1446fe1b8(puVar13 + 5,local_60 & 0xffffffff,0);
    puVar6 = (undefined8 *)puVar13[0xd];
    if ((undefined8 *)puVar13[0xd] == (undefined8 *)0x0) {
      puVar6 = puVar13 + 5;
    }
    memcpy(puVar6,puVar5,lVar10 << 3);
  }
  *(int *)(puVar13 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar13 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar13 + 0x10) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)puVar13 + 0x84) = uStack_50._4_4_;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  plVar7 = (longlong *)FUN_147381ad4();
  (**(code **)(*plVar7 + 0x18))(plVar7,param_2);
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14321568c FUN_14321568c body=34 status=ok
// SIG undefined FUN_14321568c(void)

void FUN_14321568c(undefined8 param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_147381ad4();
                    /* WARNING: Could not recover jumptable at 0x0001432156ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1,param_1,*(code **)(*plVar1 + 0x18));
  return;
}



// FUNCTION 1432156ae FUN_1432156ae body=282 status=ok
// SIG undefined FUN_1432156ae(void)

undefined8 * FUN_1432156ae(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1432149cc);
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



// FUNCTION 1432157c8 FUN_1432157c8 body=116 status=ok
// SIG undefined FUN_1432157c8(void)

void FUN_1432157c8(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    plVar2 = (longlong *)FUN_147381ad4();
                    /* WARNING: Could not recover jumptable at 0x0001432157f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x18))(plVar2,&DAT_14ca85100,*(code **)(*plVar2 + 0x18));
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  plVar2 = (longlong *)FUN_147381ad4();
  (**(code **)(*plVar2 + 0x18))(plVar2,&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143215832. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143215848 FUN_143215848 body=12 status=ok
// SIG undefined FUN_143215848(void)

void FUN_143215848(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143215851. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143215854 FUN_143215854 body=29 status=ok
// SIG undefined FUN_143215854(void)

undefined8 FUN_143215854(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143215872 FUN_143215872 body=282 status=ok
// SIG undefined FUN_143215872(void)

undefined8 * FUN_143215872(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1432149cc);
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



// FUNCTION 1432159b6 FUN_1432159b6 body=14 status=ok
// SIG undefined FUN_1432159b6(void)

void FUN_1432159b6(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}



// FUNCTION 1432159c4 FUN_1432159c4 body=141 status=ok
// SIG undefined FUN_1432159c4(void)

void FUN_1432159c4(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  if (0 < (longlong)(int)param_1[1]) {
    uVar5 = (longlong)(int)param_1[1] + 1;
    do {
      lVar2 = *(longlong *)(*param_1 + -0x10 + uVar5 * 8);
      if (*(longlong *)(lVar2 + 0xf0) != 0) {
        plVar4 = (longlong *)(lVar2 + 0x110);
        if (*(longlong **)(lVar2 + 0x100) != (longlong *)0x0) {
          plVar4 = *(longlong **)(lVar2 + 0x100);
        }
        (**(code **)(*plVar4 + 0x10))();
      }
      puVar3 = *(undefined8 **)(lVar2 + 0xa0);
      if (puVar3 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar3 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar3)(puVar3,1);
        }
      }
      uVar5 = uVar5 - 1;
    } while (1 < uVar5);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_143215a52(param_1);
    return;
  }
  return;
}



// FUNCTION 143215a52 FUN_143215a52 body=14 status=ok
// SIG undefined FUN_143215a52(void)

void FUN_143215a52(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}



// FUNCTION 143215a60 FUN_143215a60 body=14 status=ok
// SIG undefined FUN_143215a60(void)

void FUN_143215a60(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}



// FUNCTION 143215a6e FUN_143215a6e body=14 status=ok
// SIG undefined FUN_143215a6e(void)

void FUN_143215a6e(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}



// FUNCTION 143215a7c FUN_143215a7c body=14 status=ok
// SIG undefined FUN_143215a7c(void)

void FUN_143215a7c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}



// FUNCTION 143215a8a FUN_143215a8a body=547 status=ok
// SIG undefined FUN_143215a8a(void)

longlong * FUN_143215a8a(longlong *param_1,int param_2)

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



// FUNCTION 143215cd6 FUN_143215cd6 body=110 status=ok
// SIG undefined FUN_143215cd6(void)

undefined8 * FUN_143215cd6(undefined8 *param_1,int param_2)

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



// FUNCTION 143215d50 FUN_143215d50 body=29 status=ok
// SIG undefined FUN_143215d50(void)

void FUN_143215d50(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143215d6e FUN_143215d6e body=52 status=ok
// SIG undefined FUN_143215d6e(void)

undefined8 * FUN_143215d6e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a38b770;
  FUN_143204a28(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143215da2 FUN_143215da2 body=38 status=ok
// SIG undefined FUN_143215da2(void)

undefined8 FUN_143215da2(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143215dc8 FUN_143215dc8 body=1082 status=ok
// SIG undefined FUN_143215dc8(void)

void FUN_143215dc8(longlong param_1,ulonglong *param_2)

{
  byte bVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  ulonglong uVar8;
  size_t _Size;
  longlong lVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined1 auStack_e8 [40];
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  undefined8 local_60;
  int local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  iVar10 = 0;
  local_b8 = (undefined1 *)0x0;
  local_b0 = 0x800000000;
  local_68 = (undefined1 *)0x0;
  local_60 = 0x800000000;
  local_58 = 0;
  uStack_50 = 0;
  lVar9 = *(longlong *)(param_1 + 0x18);
  iVar2 = *(int *)(lVar9 + 0x78);
  if (iVar2 != 0) {
    do {
      uVar3 = local_b0;
      uVar8 = (ulonglong)
              *(ushort *)
               (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x70) + (longlong)iVar10 * 4);
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x10) + uVar8);
      iVar7 = local_58;
      if ((lVar9 != 0) && ((*(byte *)(*(longlong *)(param_1 + 0x10) + 8 + uVar8) & 2) != 0)) {
        if (uStack_50 == 0) {
          bVar1 = *(byte *)(*(longlong *)(lVar9 + 0x20) + 0x8a);
          lVar12 = (longlong)(int)local_b0;
          uVar4 = (int)local_b0 + 1;
          local_b0 = CONCAT44(local_b0._4_4_,uVar4);
          if (local_b0._4_4_ < uVar4) {
            FUN_14726c186(local_c0,uVar3 & 0xffffffff);
          }
          puVar5 = local_b8;
          if (local_b8 == (undefined1 *)0x0) {
            puVar5 = local_c0;
          }
          puVar5[lVar12] = bVar1;
          uVar3 = local_60;
          lVar12 = (longlong)(int)local_60;
          uVar4 = (int)local_60 + 1;
          local_60 = CONCAT44(local_60._4_4_,uVar4);
          if (local_60._4_4_ < uVar4) {
            FUN_1474146d2(local_a8,uVar3 & 0xffffffff);
          }
          puVar5 = local_68;
          if (local_68 == (undefined1 *)0x0) {
            puVar5 = local_a8;
          }
          *(longlong *)(puVar5 + lVar12 * 8) = lVar9;
          iVar7 = bVar1 + 1;
          if (iVar7 <= local_58) {
            iVar7 = local_58;
          }
        }
        else {
          lVar12 = FUN_147413418(uStack_50,*(longlong *)(lVar9 + 0x20) + 0x10);
          puVar5 = local_68;
          if (local_68 == (undefined1 *)0x0) {
            puVar5 = local_a8;
          }
          *(longlong *)(puVar5 + (*(uint *)(lVar12 + 0x10) >> 1 & 0x1f8)) = lVar9;
          iVar7 = local_58;
        }
      }
      local_58 = iVar7;
      iVar10 = iVar10 + 1;
    } while (iVar2 != iVar10);
    lVar9 = *(longlong *)(param_1 + 0x18);
  }
  iVar2 = *(int *)(lVar9 + 0x68);
  if (iVar2 != 0) {
    iVar10 = 0;
    do {
      uVar3 = local_b0;
      uVar8 = (ulonglong)
              *(ushort *)
               (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x60) + (longlong)iVar10 * 4);
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x10) + uVar8);
      iVar7 = local_58;
      if ((lVar9 != 0) && ((*(byte *)(*(longlong *)(param_1 + 0x10) + 8 + uVar8) & 2) != 0)) {
        lVar9 = *(longlong *)(lVar9 + 0x10);
        if (uStack_50 == 0) {
          bVar1 = *(byte *)(*(longlong *)(lVar9 + 0x20) + 0x8a);
          lVar12 = (longlong)(int)local_b0;
          uVar4 = (int)local_b0 + 1;
          local_b0 = CONCAT44(local_b0._4_4_,uVar4);
          if (local_b0._4_4_ < uVar4) {
            FUN_14726c186(local_c0,uVar3 & 0xffffffff);
          }
          puVar5 = local_b8;
          if (local_b8 == (undefined1 *)0x0) {
            puVar5 = local_c0;
          }
          puVar5[lVar12] = bVar1;
          uVar3 = local_60;
          lVar12 = (longlong)(int)local_60;
          uVar4 = (int)local_60 + 1;
          local_60 = CONCAT44(local_60._4_4_,uVar4);
          if (local_60._4_4_ < uVar4) {
            FUN_1474146d2(local_a8,uVar3 & 0xffffffff);
          }
          puVar5 = local_68;
          if (local_68 == (undefined1 *)0x0) {
            puVar5 = local_a8;
          }
          *(longlong *)(puVar5 + lVar12 * 8) = lVar9;
          iVar7 = bVar1 + 1;
          if (iVar7 <= local_58) {
            iVar7 = local_58;
          }
        }
        else {
          lVar12 = FUN_147413418(uStack_50,*(longlong *)(lVar9 + 0x20) + 0x10);
          puVar5 = local_68;
          if (local_68 == (undefined1 *)0x0) {
            puVar5 = local_a8;
          }
          *(longlong *)(puVar5 + (*(uint *)(lVar12 + 0x10) >> 1 & 0x1f8)) = lVar9;
          iVar7 = local_58;
        }
      }
      local_58 = iVar7;
      iVar10 = iVar10 + 1;
    } while (iVar2 != iVar10);
  }
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar11 + 0x11;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x90);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar11 + 0x11;
  }
  *param_2 = (ulonglong)puVar6;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  puVar11[1] = 0;
  *puVar11 = &PTR_FUN_14a1fb978;
  puVar11[3] = 0;
  _Size = (size_t)(int)local_b0;
  *(int *)(puVar11 + 4) = (int)local_b0;
  if (_Size == 0) {
    *(undefined4 *)((longlong)puVar11 + 0x24) = 8;
  }
  else {
    puVar5 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar5 = local_b8;
    }
    FUN_1446fe144(puVar11 + 2,local_b0 & 0xffffffff,0);
    puVar6 = (undefined8 *)puVar11[3];
    if ((undefined8 *)puVar11[3] == (undefined8 *)0x0) {
      puVar6 = puVar11 + 2;
    }
    memcpy(puVar6,puVar5,_Size);
  }
  puVar11[0xd] = 0;
  lVar9 = (longlong)(int)local_60;
  *(int *)(puVar11 + 0xe) = (int)local_60;
  if (lVar9 == 0) {
    *(undefined4 *)((longlong)puVar11 + 0x74) = 8;
  }
  else {
    puVar5 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar5 = local_a8;
    }
    FUN_1446fe1b8(puVar11 + 5,local_60 & 0xffffffff,0);
    puVar6 = (undefined8 *)puVar11[0xd];
    if ((undefined8 *)puVar11[0xd] == (undefined8 *)0x0) {
      puVar6 = puVar11 + 5;
    }
    memcpy(puVar6,puVar5,lVar9 << 3);
  }
  *(int *)(puVar11 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar11 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar11 + 0x10) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)puVar11 + 0x84) = uStack_50._4_4_;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143216204 FUN_143216204 body=38 status=ok
// SIG undefined FUN_143216204(void)

undefined8 FUN_143216204(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14321622a FUN_14321622a body=1082 status=ok
// SIG undefined FUN_14321622a(void)

void FUN_14321622a(longlong param_1,ulonglong *param_2)

{
  byte bVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  ulonglong uVar8;
  size_t _Size;
  longlong lVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined1 auStack_e8 [40];
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  undefined8 local_60;
  int local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  iVar10 = 0;
  local_b8 = (undefined1 *)0x0;
  local_b0 = 0x800000000;
  local_68 = (undefined1 *)0x0;
  local_60 = 0x800000000;
  local_58 = 0;
  uStack_50 = 0;
  lVar9 = *(longlong *)(param_1 + 0x18);
  iVar2 = *(int *)(lVar9 + 0x78);
  if (iVar2 != 0) {
    do {
      uVar3 = local_b0;
      uVar8 = (ulonglong)
              *(ushort *)
               (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x70) + (longlong)iVar10 * 4);
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x10) + uVar8);
      iVar7 = local_58;
      if ((lVar9 != 0) && ((*(byte *)(*(longlong *)(param_1 + 0x10) + 8 + uVar8) & 2) != 0)) {
        if (uStack_50 == 0) {
          bVar1 = *(byte *)(*(longlong *)(lVar9 + 0x20) + 0x8a);
          lVar12 = (longlong)(int)local_b0;
          uVar4 = (int)local_b0 + 1;
          local_b0 = CONCAT44(local_b0._4_4_,uVar4);
          if (local_b0._4_4_ < uVar4) {
            FUN_14726c186(local_c0,uVar3 & 0xffffffff);
          }
          puVar5 = local_b8;
          if (local_b8 == (undefined1 *)0x0) {
            puVar5 = local_c0;
          }
          puVar5[lVar12] = bVar1;
          uVar3 = local_60;
          lVar12 = (longlong)(int)local_60;
          uVar4 = (int)local_60 + 1;
          local_60 = CONCAT44(local_60._4_4_,uVar4);
          if (local_60._4_4_ < uVar4) {
            FUN_1474146d2(local_a8,uVar3 & 0xffffffff);
          }
          puVar5 = local_68;
          if (local_68 == (undefined1 *)0x0) {
            puVar5 = local_a8;
          }
          *(longlong *)(puVar5 + lVar12 * 8) = lVar9;
          iVar7 = bVar1 + 1;
          if (iVar7 <= local_58) {
            iVar7 = local_58;
          }
        }
        else {
          lVar12 = FUN_147413418(uStack_50,*(longlong *)(lVar9 + 0x20) + 0x10);
          puVar5 = local_68;
          if (local_68 == (undefined1 *)0x0) {
            puVar5 = local_a8;
          }
          *(longlong *)(puVar5 + (*(uint *)(lVar12 + 0x10) >> 1 & 0x1f8)) = lVar9;
          iVar7 = local_58;
        }
      }
      local_58 = iVar7;
      iVar10 = iVar10 + 1;
    } while (iVar2 != iVar10);
    lVar9 = *(longlong *)(param_1 + 0x18);
  }
  iVar2 = *(int *)(lVar9 + 0x68);
  if (iVar2 != 0) {
    iVar10 = 0;
    do {
      uVar3 = local_b0;
      uVar8 = (ulonglong)
              *(ushort *)
               (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x60) + (longlong)iVar10 * 4);
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x10) + uVar8);
      iVar7 = local_58;
      if ((lVar9 != 0) && ((*(byte *)(*(longlong *)(param_1 + 0x10) + 8 + uVar8) & 2) != 0)) {
        lVar9 = *(longlong *)(lVar9 + 0x10);
        if (uStack_50 == 0) {
          bVar1 = *(byte *)(*(longlong *)(lVar9 + 0x20) + 0x8a);
          lVar12 = (longlong)(int)local_b0;
          uVar4 = (int)local_b0 + 1;
          local_b0 = CONCAT44(local_b0._4_4_,uVar4);
          if (local_b0._4_4_ < uVar4) {
            FUN_14726c186(local_c0,uVar3 & 0xffffffff);
          }
          puVar5 = local_b8;
          if (local_b8 == (undefined1 *)0x0) {
            puVar5 = local_c0;
          }
          puVar5[lVar12] = bVar1;
          uVar3 = local_60;
          lVar12 = (longlong)(int)local_60;
          uVar4 = (int)local_60 + 1;
          local_60 = CONCAT44(local_60._4_4_,uVar4);
          if (local_60._4_4_ < uVar4) {
            FUN_1474146d2(local_a8,uVar3 & 0xffffffff);
          }
          puVar5 = local_68;
          if (local_68 == (undefined1 *)0x0) {
            puVar5 = local_a8;
          }
          *(longlong *)(puVar5 + lVar12 * 8) = lVar9;
          iVar7 = bVar1 + 1;
          if (iVar7 <= local_58) {
            iVar7 = local_58;
          }
        }
        else {
          lVar12 = FUN_147413418(uStack_50,*(longlong *)(lVar9 + 0x20) + 0x10);
          puVar5 = local_68;
          if (local_68 == (undefined1 *)0x0) {
            puVar5 = local_a8;
          }
          *(longlong *)(puVar5 + (*(uint *)(lVar12 + 0x10) >> 1 & 0x1f8)) = lVar9;
          iVar7 = local_58;
        }
      }
      local_58 = iVar7;
      iVar10 = iVar10 + 1;
    } while (iVar2 != iVar10);
  }
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar11 + 0x11;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x90);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar11 + 0x11;
  }
  *param_2 = (ulonglong)puVar6;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  puVar11[1] = 0;
  *puVar11 = &PTR_FUN_14a1fb978;
  puVar11[3] = 0;
  _Size = (size_t)(int)local_b0;
  *(int *)(puVar11 + 4) = (int)local_b0;
  if (_Size == 0) {
    *(undefined4 *)((longlong)puVar11 + 0x24) = 8;
  }
  else {
    puVar5 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar5 = local_b8;
    }
    FUN_1446fe144(puVar11 + 2,local_b0 & 0xffffffff,0);
    puVar6 = (undefined8 *)puVar11[3];
    if ((undefined8 *)puVar11[3] == (undefined8 *)0x0) {
      puVar6 = puVar11 + 2;
    }
    memcpy(puVar6,puVar5,_Size);
  }
  puVar11[0xd] = 0;
  lVar9 = (longlong)(int)local_60;
  *(int *)(puVar11 + 0xe) = (int)local_60;
  if (lVar9 == 0) {
    *(undefined4 *)((longlong)puVar11 + 0x74) = 8;
  }
  else {
    puVar5 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar5 = local_a8;
    }
    FUN_1446fe1b8(puVar11 + 5,local_60 & 0xffffffff,0);
    puVar6 = (undefined8 *)puVar11[0xd];
    if ((undefined8 *)puVar11[0xd] == (undefined8 *)0x0) {
      puVar6 = puVar11 + 5;
    }
    memcpy(puVar6,puVar5,lVar9 << 3);
  }
  *(int *)(puVar11 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar11 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar11 + 0x10) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)puVar11 + 0x84) = uStack_50._4_4_;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143216666 FUN_143216666 body=547 status=ok
// SIG undefined FUN_143216666(void)

longlong * FUN_143216666(longlong *param_1,int param_2)

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



// FUNCTION 143216896 FUN_143216896 body=110 status=ok
// SIG undefined FUN_143216896(void)

undefined8 * FUN_143216896(undefined8 *param_1,int param_2)

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



// FUNCTION 143216904 FUN_143216904 body=547 status=ok
// SIG undefined FUN_143216904(void)

longlong * FUN_143216904(longlong *param_1,int param_2)

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



// FUNCTION 143216b28 FUN_143216b28 body=541 status=ok
// SIG undefined FUN_143216b28(void)

void FUN_143216b28(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined1 auStack_f8 [36];
  int local_d4;
  int *local_d0;
  longlong local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  undefined8 uStack_80;
  longlong *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  local_d4 = *piVar1;
  if (local_d4 == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    local_d4 = *piVar1;
  }
  if ((local_d4 == 0x60000000) || (local_d4 == 0)) {
    *piVar1 = 0x40000010;
  }
  lVar3 = *(longlong *)(param_1 + 0xa8);
  iVar2 = *(int *)(lVar3 + 0x2d0);
  local_d0 = piVar1;
  if ((longlong)iVar2 != 0) {
    lVar4 = *(longlong *)(lVar3 + 0x2c8);
    lVar15 = 0;
    do {
      lVar5 = *(longlong *)(lVar4 + lVar15);
      pcVar6 = *(code **)(lVar5 + 0xf0);
      if (pcVar6 != (code *)0x0) {
        plVar14 = (longlong *)(lVar5 + 0x110);
        if (*(longlong **)(lVar5 + 0x100) != (longlong *)0x0) {
          plVar14 = *(longlong **)(lVar5 + 0x100);
        }
        uVar13 = (**(code **)(*plVar14 + 8))();
        iVar12 = (*pcVar6)(uVar13);
        *(uint *)(lVar5 + 100) = iVar12 + (uint)(iVar12 == 0);
        local_c8 = *(longlong *)(lVar5 + 0xf0);
        uStack_80 = *(undefined8 *)(lVar5 + 0xf8);
        local_b8 = *(longlong **)(lVar5 + 0x100);
        uStack_70 = *(undefined8 *)(lVar5 + 0x108);
        local_68 = *(undefined8 *)(lVar5 + 0x110);
        uStack_60 = *(undefined8 *)(lVar5 + 0x118);
        local_58 = *(undefined8 *)(lVar5 + 0x120);
        uStack_50 = *(undefined8 *)(lVar5 + 0x128);
        uVar10 = local_58;
        uVar11 = uStack_50;
        uVar8 = local_68;
        uVar9 = uStack_60;
        local_78 = local_b8;
        uVar7 = uStack_70;
        local_88 = local_c8;
        uVar13 = uStack_80;
        *(ulonglong *)(lVar5 + 0x120) = CONCAT44(uStack_94,local_98);
        *(ulonglong *)(lVar5 + 0x128) = CONCAT44(uStack_8c,uStack_90);
        *(ulonglong *)(lVar5 + 0x110) = CONCAT44(uStack_a4,local_a8);
        *(ulonglong *)(lVar5 + 0x118) = CONCAT44(uStack_9c,uStack_a0);
        *(undefined8 *)(lVar5 + 0x100) = 0;
        *(ulonglong *)(lVar5 + 0x108) = CONCAT44(uStack_ac,uStack_b0);
        *(longlong *)(lVar5 + 0xf0) = 0;
        *(ulonglong *)(lVar5 + 0xf8) = CONCAT44(uStack_bc,uStack_c0);
        uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
        uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
        local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
        uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
        local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
        uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
        local_98 = (undefined4)local_58;
        uStack_94 = local_58._4_4_;
        uStack_90 = (undefined4)uStack_50;
        uStack_8c = uStack_50._4_4_;
        local_a8 = (undefined4)local_68;
        uStack_a4 = local_68._4_4_;
        uStack_a0 = (undefined4)uStack_60;
        uStack_9c = uStack_60._4_4_;
        uStack_b0 = (undefined4)uStack_70;
        uStack_ac = uStack_70._4_4_;
        uStack_c0 = (undefined4)uStack_80;
        uStack_bc = uStack_80._4_4_;
        uStack_80 = uVar13;
        uStack_70 = uVar7;
        local_68 = uVar8;
        uStack_60 = uVar9;
        local_58 = uVar10;
        uStack_50 = uVar11;
        if (local_c8 != 0) {
          plVar14 = local_b8;
          if (local_b8 == (longlong *)0x0) {
            plVar14 = (longlong *)&local_a8;
          }
          (**(code **)(*plVar14 + 0x10))();
        }
      }
      lVar15 = lVar15 + 8;
    } while ((longlong)iVar2 * 8 != lVar15);
  }
  *(undefined4 *)(lVar3 + 0x2d0) = 0;
  if (*(int *)(lVar3 + 0x2d4) != 0) {
    FUN_143215a52(lVar3 + 0x2c8);
  }
  if ((local_d4 == 0x60000000) || (local_d4 == 0)) {
    *local_d0 = local_d4;
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143216d46 FUN_143216d46 body=110 status=ok
// SIG undefined FUN_143216d46(void)

undefined8 * FUN_143216d46(undefined8 *param_1,int param_2)

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



// FUNCTION 143216db4 FUN_143216db4 body=533 status=ok
// SIG undefined FUN_143216db4(void)

void FUN_143216db4(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  byte bVar10;
  longlong lVar11;
  
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  iVar9 = *piVar1;
  if (iVar9 == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    iVar9 = *piVar1;
  }
  if ((iVar9 == 0x60000000) || (iVar9 == 0)) {
    *piVar1 = 0x40000010;
  }
  iVar8 = DAT_14ca955a0;
  iVar7 = DAT_14c760de4;
  iVar6 = DAT_14c760de0;
  lVar3 = *param_1;
  iVar2 = *(int *)(lVar3 + 400);
  if ((longlong)iVar2 != 0) {
    lVar4 = *(longlong *)(lVar3 + 0x188);
    lVar11 = 0;
    do {
      lVar5 = *(longlong *)(lVar4 + lVar11);
      *(undefined8 *)(lVar5 + 0x34) = 0xffffffffffffffff;
      if (*(longlong *)(lVar5 + 0x10) == 0) {
        bVar10 = *(byte *)(lVar5 + 0x24);
        if ((char)bVar10 < '\0') {
          *(byte *)(lVar5 + 0x25) = *(byte *)(lVar5 + 0x25) & 0xfe;
          if (*(longlong *)(lVar5 + 0x90) != 0) goto LAB_143216ebe;
        }
        else if ((*(longlong *)(lVar5 + 0x90) != 0) ||
                (((((*(char *)(lVar3 + 0x2e1) == '\x01' && (iVar6 != 2)) && ((bVar10 & 0x10) == 0))
                  && (((bVar10 & 2) == 0 ||
                      ((iVar7 != 0 && ((iVar7 != 1 || (*(char *)(lVar5 + 0x26) != '\x01')))))))) &&
                 (((byte)((*(uint *)(lVar5 + 0x68) & 8) >> 3) &
                  (-1 < (char)*(uint *)(lVar5 + 0x68) || iVar8 != 0)) == 1)))) {
LAB_143216ebe:
          *(byte *)(lVar5 + 0x24) = bVar10 | 8;
        }
      }
      else {
        *(byte *)(lVar5 + 0x25) = *(byte *)(lVar5 + 0x25) & 0xfe;
        if (*(longlong *)(lVar5 + 0x90) != 0) {
          bVar10 = *(byte *)(lVar5 + 0x24);
          goto LAB_143216ebe;
        }
      }
      lVar11 = lVar11 + 8;
    } while ((longlong)iVar2 * 8 != lVar11);
  }
  iVar7 = DAT_14c760de4;
  iVar6 = DAT_14c760de0;
  iVar2 = *(int *)(lVar3 + 0x180);
  if ((longlong)iVar2 != 0) {
    lVar4 = *(longlong *)(lVar3 + 0x178);
    lVar11 = 0;
    do {
      lVar5 = *(longlong *)(lVar4 + lVar11);
      *(undefined8 *)(lVar5 + 0x34) = 0xffffffffffffffff;
      if (*(longlong *)(lVar5 + 0x10) == 0) {
        if (*(longlong *)(lVar5 + 0x108) != 0) goto LAB_143216f41;
        if (((*(char *)(lVar3 + 0x2e0) != '\x01') || ((*(byte *)(lVar5 + 99) & 2) != 0)) ||
           ((iVar6 == 2 || (bVar10 = *(byte *)(lVar5 + 0x24), (bVar10 & 0x10) != 0))))
        goto LAB_143216f4a;
        if ((bVar10 & 2) == 0) goto LAB_143216f44;
        if (iVar7 == 1) {
          if (*(char *)(lVar5 + 0x26) != '\x01') goto LAB_143216f44;
        }
        else if (iVar7 != 0) goto LAB_143216f44;
      }
      else {
        *(byte *)(lVar5 + 0x25) = *(byte *)(lVar5 + 0x25) & 0xfe;
        if (*(longlong *)(lVar5 + 0x108) == 0) goto LAB_143216f4a;
LAB_143216f41:
        bVar10 = *(byte *)(lVar5 + 0x24);
LAB_143216f44:
        *(byte *)(lVar5 + 0x24) = bVar10 | 8;
      }
LAB_143216f4a:
      lVar11 = lVar11 + 8;
    } while ((longlong)iVar2 * 8 != lVar11);
  }
  if ((iVar9 == 0x60000000) || (iVar9 == 0)) {
    *piVar1 = iVar9;
  }
  return;
}



// FUNCTION 143216fca FUN_143216fca body=547 status=ok
// SIG undefined FUN_143216fca(void)

longlong * FUN_143216fca(longlong *param_1,int param_2)

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



// FUNCTION 1432171fa FUN_1432171fa body=110 status=ok
// SIG undefined FUN_1432171fa(void)

undefined8 * FUN_1432171fa(undefined8 *param_1,int param_2)

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



// FUNCTION 143217268 FUN_143217268 body=547 status=ok
// SIG undefined FUN_143217268(void)

longlong * FUN_143217268(longlong *param_1,int param_2)

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



// FUNCTION 14321748c FUN_14321748c body=232 status=ok
// SIG undefined FUN_14321748c(void)

void FUN_14321748c(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  iVar3 = *piVar1;
  if (iVar3 == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    iVar3 = *piVar1;
  }
  if ((iVar3 == 0x60000000) || (iVar3 == 0)) {
    *piVar1 = 0x40000010;
  }
  if (*(char *)(param_1 + 200) == '\x01') {
    FUN_14002049c(*(undefined8 *)(param_1 + 0xc0),1);
  }
  FUN_1432056a4(*(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0xc0),
                (longlong *)(param_1 + 0xb8));
  if (*(char *)(param_1 + 200) == '\x01') {
    FUN_1447850c6(*(undefined8 *)(param_1 + 0xc0));
  }
  if ((iVar3 == 0x60000000) || (iVar3 == 0)) {
    *piVar1 = iVar3;
  }
  puVar2 = *(undefined8 **)(param_1 + 0xb8);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143217542. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 143217574 FUN_143217574 body=110 status=ok
// SIG undefined FUN_143217574(void)

undefined8 * FUN_143217574(undefined8 *param_1,int param_2)

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



// FUNCTION 1432175e2 FUN_1432175e2 body=547 status=ok
// SIG undefined FUN_1432175e2(void)

longlong * FUN_1432175e2(longlong *param_1,int param_2)

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



// FUNCTION 143217806 FUN_143217806 body=125 status=ok
// SIG undefined FUN_143217806(void)

void FUN_143217806(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  iVar3 = *piVar1;
  if (iVar3 == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    iVar3 = *piVar1;
  }
  if ((iVar3 == 0x60000000) || (iVar3 == 0)) {
    *piVar1 = 0x40000010;
  }
  uVar2 = *(undefined8 *)(param_1 + 0xa8);
  FUN_14320f02e(uVar2);
  FUN_14320f472(uVar2);
  if ((iVar3 == 0x60000000) || (iVar3 == 0)) {
    *piVar1 = iVar3;
  }
  return;
}



// FUNCTION 143217884 FUN_143217884 body=110 status=ok
// SIG undefined FUN_143217884(void)

undefined8 * FUN_143217884(undefined8 *param_1,int param_2)

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



// FUNCTION 1432178f2 FUN_1432178f2 body=547 status=ok
// SIG undefined FUN_1432178f2(void)

longlong * FUN_1432178f2(longlong *param_1,int param_2)

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



// FUNCTION 143217b16 FUN_143217b16 body=124 status=ok
// SIG undefined FUN_143217b16(void)

void FUN_143217b16(longlong param_1)

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
  if ((iVar2 == 0x60000000) || (iVar2 == 0)) {
    *piVar1 = 0x40000010;
  }
  FUN_14320e0b2(*(undefined8 *)(param_1 + 0xa8),param_1 + 0xb0);
  if ((iVar2 == 0x60000000) || (iVar2 == 0)) {
    *piVar1 = iVar2;
  }
  return;
}



// FUNCTION 143217b92 FUN_143217b92 body=110 status=ok
// SIG undefined FUN_143217b92(void)

undefined8 * FUN_143217b92(undefined8 *param_1,int param_2)

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



// FUNCTION 143217c00 FUN_143217c00 body=547 status=ok
// SIG undefined FUN_143217c00(void)

longlong * FUN_143217c00(longlong *param_1,int param_2)

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



// FUNCTION 143217e24 FUN_143217e24 body=245 status=ok
// SIG undefined FUN_143217e24(void)

void FUN_143217e24(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  iVar2 = *piVar1;
  if (iVar2 == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    iVar2 = *piVar1;
  }
  if ((iVar2 == 0x60000000) || (iVar2 == 0)) {
    *piVar1 = 0x40000010;
  }
  if (*(char *)(param_1 + 0xd0) == '\x01') {
    FUN_14002049c(*(undefined8 *)(param_1 + 200),1);
  }
  local_30 = *(undefined8 *)(param_1 + 0xb8);
  local_28 = *(undefined4 *)(param_1 + 0xc0);
  FUN_14320d3aa(*(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 200));
  if (*(char *)(param_1 + 0xd0) == '\x01') {
    FUN_1447850c6(*(undefined8 *)(param_1 + 200));
  }
  if ((iVar2 == 0x60000000) || (iVar2 == 0)) {
    *piVar1 = iVar2;
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143217f1a FUN_143217f1a body=110 status=ok
// SIG undefined FUN_143217f1a(void)

undefined8 * FUN_143217f1a(undefined8 *param_1,int param_2)

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



// FUNCTION 143217f88 FUN_143217f88 body=547 status=ok
// SIG undefined FUN_143217f88(void)

longlong * FUN_143217f88(longlong *param_1,int param_2)

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



// FUNCTION 1432181ac FUN_1432181ac body=245 status=ok
// SIG undefined FUN_1432181ac(void)

void FUN_1432181ac(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  iVar2 = *piVar1;
  if (iVar2 == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    iVar2 = *piVar1;
  }
  if ((iVar2 == 0x60000000) || (iVar2 == 0)) {
    *piVar1 = 0x40000010;
  }
  if (*(char *)(param_1 + 0xd0) == '\x01') {
    FUN_14002049c(*(undefined8 *)(param_1 + 200),1);
  }
  local_30 = *(undefined8 *)(param_1 + 0xb8);
  local_28 = *(undefined4 *)(param_1 + 0xc0);
  FUN_14320c89e(*(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 200));
  if (*(char *)(param_1 + 0xd0) == '\x01') {
    FUN_1447850c6(*(undefined8 *)(param_1 + 200));
  }
  if ((iVar2 == 0x60000000) || (iVar2 == 0)) {
    *piVar1 = iVar2;
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1432182a2 FUN_1432182a2 body=110 status=ok
// SIG undefined FUN_1432182a2(void)

undefined8 * FUN_1432182a2(undefined8 *param_1,int param_2)

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



// FUNCTION 143218310 FUN_143218310 body=547 status=ok
// SIG undefined FUN_143218310(void)

longlong * FUN_143218310(longlong *param_1,int param_2)

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



// FUNCTION 143218534 FUN_143218534 body=114 status=ok
// SIG undefined FUN_143218534(void)

void FUN_143218534(longlong param_1)

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
  if ((iVar2 == 0x60000000) || (iVar2 == 0)) {
    *piVar1 = 0x40000010;
  }
  FUN_143205b8a(*(undefined8 *)(param_1 + 0xa8));
  if ((iVar2 == 0x60000000) || (iVar2 == 0)) {
    *piVar1 = iVar2;
  }
  return;
}



// FUNCTION 1432185a6 FUN_1432185a6 body=110 status=ok
// SIG undefined FUN_1432185a6(void)

undefined8 * FUN_1432185a6(undefined8 *param_1,int param_2)

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



// FUNCTION 143218614 FUN_143218614 body=547 status=ok
// SIG undefined FUN_143218614(void)

longlong * FUN_143218614(longlong *param_1,int param_2)

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



// FUNCTION 143218838 FUN_143218838 body=262 status=ok
// SIG undefined FUN_143218838(void)

void FUN_143218838(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  
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
  if (*(char *)(param_1 + 0xd0) == '\x01') {
    FUN_14002049c(*(undefined8 *)(param_1 + 200),1);
  }
  iVar2 = *(int *)(param_1 + 0xc0);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0xb8);
    uVar4 = *(undefined8 *)(param_1 + 200);
    lVar5 = *(longlong *)(param_1 + 0xb0);
    lVar7 = 0;
    do {
      if (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x198) + (longlong)*(int *)(lVar3 + lVar7) * 8) +
           0x10) == 0) {
        FUN_14470bbcc(uVar4);
      }
      lVar7 = lVar7 + 4;
    } while ((longlong)iVar2 * 4 != lVar7);
  }
  if (*(char *)(param_1 + 0xd0) == '\x01') {
    FUN_1447850c6(*(undefined8 *)(param_1 + 200));
  }
  if ((iVar6 == 0x60000000) || (iVar6 == 0)) {
    *piVar1 = iVar6;
  }
  return;
}



// FUNCTION 14321893e FUN_14321893e body=110 status=ok
// SIG undefined FUN_14321893e(void)

undefined8 * FUN_14321893e(undefined8 *param_1,int param_2)

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



// FUNCTION 1432189ac FUN_1432189ac body=547 status=ok
// SIG undefined FUN_1432189ac(void)

longlong * FUN_1432189ac(longlong *param_1,int param_2)

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



// FUNCTION 143218bd0 FUN_143218bd0 body=186 status=ok
// SIG undefined FUN_143218bd0(void)

void FUN_143218bd0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  iVar5 = *piVar1;
  if (iVar5 == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    iVar5 = *piVar1;
  }
  if ((iVar5 == 0x60000000) || (iVar5 == 0)) {
    *piVar1 = 0x40000010;
  }
  iVar2 = *(int *)(param_1 + 0xb8);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0xb0);
    lVar4 = *(longlong *)(param_1 + 0xa8);
    lVar6 = 0;
    do {
      if (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x1a8) + (longlong)*(int *)(lVar3 + lVar6) * 8) +
           0x10) == 0) {
        FUN_143204dc0();
      }
      lVar6 = lVar6 + 4;
    } while ((longlong)iVar2 * 4 != lVar6);
  }
  if ((iVar5 == 0x60000000) || (iVar5 == 0)) {
    *piVar1 = iVar5;
  }
  return;
}



// FUNCTION 143218c8a FUN_143218c8a body=110 status=ok
// SIG undefined FUN_143218c8a(void)

undefined8 * FUN_143218c8a(undefined8 *param_1,int param_2)

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



// FUNCTION 143218cf8 FUN_143218cf8 body=547 status=ok
// SIG undefined FUN_143218cf8(void)

longlong * FUN_143218cf8(longlong *param_1,int param_2)

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



// FUNCTION 143218f1c FUN_143218f1c body=114 status=ok
// SIG undefined FUN_143218f1c(void)

void FUN_143218f1c(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0xa8);
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  iVar3 = *piVar1;
  if (iVar3 == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    iVar3 = *piVar1;
  }
  if ((iVar3 == 0x60000000) || (iVar3 == 0)) {
    *piVar1 = 0x40000010;
  }
  FUN_14320bc04(uVar2);
  if ((iVar3 == 0x60000000) || (iVar3 == 0)) {
    *piVar1 = iVar3;
  }
  return;
}



// FUNCTION 143218f8e FUN_143218f8e body=110 status=ok
// SIG undefined FUN_143218f8e(void)

undefined8 * FUN_143218f8e(undefined8 *param_1,int param_2)

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



// FUNCTION 143218ffc FUN_143218ffc body=547 status=ok
// SIG undefined FUN_143218ffc(void)

longlong * FUN_143218ffc(longlong *param_1,int param_2)

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



// FUNCTION 143219220 FUN_143219220 body=698 status=ok
// SIG undefined FUN_143219220(void)

void FUN_143219220(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  longlong local_40;
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar7 = *(longlong *)(param_1 + 0xa8);
  FUN_1400daade(lVar7 + 0x560);
  if (*(char *)(lVar7 + 0x578) == '\x01') {
    FUN_1400daade(lVar7 + 0x570);
    puVar4 = (undefined8 *)FUN_1448fe162();
    *puVar4 = UE::Tasks::Private::FTaskBase::vftable;
    puVar4[1] = &DAT_100000001;
    puVar4[2] = 0;
    *(undefined4 *)(puVar4 + 3) = 0;
    *(undefined4 *)(puVar4 + 4) = 0xffffffff;
    puVar4[6] = 0;
    puVar4[7] = 0x100000000;
    *(undefined1 *)(puVar4 + 8) = 1;
    puVar4[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                  ::TTaskDelegateDummy::vftable;
    puVar4[0xf] = 0;
    puVar4[0x10] = 0xe800000000000020;
    puVar4[0x12] = 0;
    puVar4[0x13] = 0x100000000;
    *(undefined2 *)(puVar4 + 0x14) = 0;
    LOCK();
    bVar8 = *(char *)(puVar4 + 8) == '\x01';
    if (bVar8) {
      *(char *)(puVar4 + 8) = '\0';
    }
    UNLOCK();
    if (!bVar8) {
      FUN_14008cdb0(puVar4 + 8);
    }
    *puVar4 = &PTR_FUN_149e1e2e0;
    if (*(code **)(puVar4[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar4[0xe] + 0x18))(puVar4 + 0xe,puVar4 + 9);
    }
    puVar4[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                  ::
                  TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                  ::vftable;
    puVar4[9] = puVar4;
    puVar4[10] = puVar4;
    lVar2 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar2 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(lVar2 + 0x30);
    }
    puVar4[0xf] = uVar5;
    puVar4[0x10] = 0xc80000528e2e5e00;
    *(undefined4 *)((longlong)puVar4 + 0x1c) = 2;
    local_40 = *(longlong *)(lVar7 + 0x550);
    if (local_40 != 0) {
      LOCK();
      *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
      UNLOCK();
    }
    local_38 = DAT_14ca95620;
    if (DAT_14ca95620 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(DAT_14ca95620 + 1) = *(int *)(DAT_14ca95620 + 1) + 1;
      UNLOCK();
    }
    LOCK();
    *(int *)((longlong)puVar4 + 0xc) = *(int *)((longlong)puVar4 + 0xc) + 2;
    UNLOCK();
    iVar6 = 0;
    lVar7 = 0;
    local_48 = puVar4;
    do {
      lVar2 = *(longlong *)((longlong)&local_40 + lVar7);
      if ((lVar2 == 0) || (cVar3 = FUN_1456bb142(lVar2 + 0x88,puVar4), cVar3 == '\0')) {
        iVar6 = iVar6 + 1;
      }
      else {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
        FUN_1456bb1d4(puVar4 + 5,lVar2);
      }
      lVar7 = lVar7 + 8;
    } while (lVar7 != 0x10);
    LOCK();
    *(int *)((longlong)puVar4 + 0xc) = *(int *)((longlong)puVar4 + 0xc) - iVar6;
    UNLOCK();
    lVar7 = 0x10;
    do {
      puVar4 = *(undefined8 **)((longlong)&local_48 + lVar7);
      if (puVar4 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar4 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar4)(puVar4,1);
        }
      }
      lVar7 = lVar7 + -8;
    } while (lVar7 != 0);
    FUN_1400daade(&local_48);
    puVar4 = DAT_14ca95620;
    if (DAT_14ca95620 != local_48) {
      DAT_14ca95620 = local_48;
      if (local_48 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(local_48 + 1) = *(int *)(local_48 + 1) + 1;
        UNLOCK();
      }
      if (puVar4 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar4 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar4)(puVar4,1);
        }
      }
    }
    if (local_48 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_48 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_48)(local_48,1);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1432194dc FUN_1432194dc body=110 status=ok
// SIG undefined FUN_1432194dc(void)

undefined8 * FUN_1432194dc(undefined8 *param_1,int param_2)

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



// FUNCTION 14321954a FUN_14321954a body=14 status=ok
// SIG undefined FUN_14321954a(void)

void FUN_14321954a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}



// FUNCTION 143219558 FUN_143219558 body=1351 status=ok
// SIG undefined FUN_143219558(void)

void FUN_143219558(undefined8 *param_1,longlong param_2,longlong param_3,uint param_4,byte param_5,
                  undefined8 param_6)

{
  byte bVar1;
  ushort uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  longlong lVar22;
  uint uVar23;
  longlong *plVar24;
  ulonglong uVar25;
  uint local_b0;
  uint local_ac;
  
  lVar4 = param_1[4];
  if (param_2 != 0) {
    puVar5 = (undefined8 *)*param_1;
    iVar18 = *(int *)*puVar5;
    if (*(int *)(param_2 + 0x20) != iVar18) {
      *(int *)(param_2 + 0x20) = iVar18;
      lVar22 = *(longlong *)puVar5[1];
      iVar18 = *(int *)(lVar22 + 0x98);
      *(uint *)(lVar22 + 0x98) = iVar18 + 1U;
      if (*(uint *)(lVar22 + 0x9c) < iVar18 + 1U) {
        FUN_144adaeec((longlong *)(lVar22 + 0x90),iVar18);
      }
      *(undefined4 *)(*(longlong *)(lVar22 + 0x90) + (longlong)iVar18 * 4) =
           *(undefined4 *)(param_2 + 0x1c);
    }
  }
  if ((*(char *)(param_3 + 0x21) == '\x01') &&
     ((*(byte *)(*(longlong *)param_1[1] + 0x38) & 0x40) == 0)) {
    return;
  }
  if (param_2 == 0) {
    iVar18 = -1;
    bVar1 = *(byte *)(param_3 + 0x98) & 8;
joined_r0x000143219663:
    uVar19 = 1;
    if (bVar1 != 0) goto LAB_143219667;
  }
  else {
    bVar1 = *(byte *)(param_2 + 0x18);
    iVar18 = -1;
    if (((bVar1 & 0xfd) == 0) && ((*(byte *)(param_2 + 0x28) & 1) != 0)) {
      iVar18 = *(int *)(param_2 + 0x1c);
    }
    if (bVar1 == 1) {
      bVar1 = *(byte *)(param_2 + 0x30);
      goto joined_r0x000143219663;
    }
    if (bVar1 == 0) {
      bVar1 = *(byte *)(param_2 + 0x36);
      goto joined_r0x000143219663;
    }
  }
  uVar19 = 0;
LAB_143219667:
  if (*(int *)(param_3 + 0x34 + (ulonglong)(*(char *)param_1[2] == '\x02') * 4) ==
      *(int *)param_1[3]) {
    lVar22 = (longlong)*(int *)(param_3 + 0x40) * 0x30 +
             *(longlong *)(*(longlong *)param_1[1] + 0x70);
  }
  else {
    *(int *)(param_3 + 0x34 + (ulonglong)(*(char *)param_1[2] == '\x02') * 4) = *(int *)param_1[3];
    *(undefined4 *)(param_3 + 0x40) = *(undefined4 *)(*(longlong *)param_1[1] + 0x78);
    lVar22 = *(longlong *)param_1[1];
    iVar21 = *(int *)(lVar22 + 0x78);
    *(uint *)(lVar22 + 0x78) = iVar21 + 1U;
    if (*(uint *)(lVar22 + 0x7c) < iVar21 + 1U) {
      FUN_144adb016((longlong *)(lVar22 + 0x70),iVar21);
    }
    lVar15 = *(longlong *)(lVar22 + 0x70);
    lVar17 = (longlong)iVar21 * 0x30;
    lVar22 = lVar15 + lVar17;
    *(longlong *)(lVar15 + lVar17) = param_3;
    puVar5 = (undefined8 *)(lVar15 + 8 + lVar17);
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5 = (undefined8 *)(lVar15 + 0x18 + lVar17);
    *puVar5 = 0;
    puVar5[1] = 0;
    *(undefined4 *)(lVar15 + 0x28 + lVar17) = 0;
    uVar2 = *(ushort *)(param_3 + 0xb4);
    if (uVar2 != 0) {
      plVar24 = (longlong *)(lVar15 + lVar17 + 0x18);
      uVar20 = (uint)uVar2;
      *(uint *)(lVar22 + 0x10) = uVar20;
      FUN_14473d6dc(lVar15 + lVar17 + 8);
      memset(*(void **)(lVar22 + 8),0,(ulonglong)((uint)uVar2 * 8));
      uVar8 = *(uint *)(lVar22 + 0x20);
      uVar9 = (uint)uVar2;
      if ((int)uVar8 < (int)uVar20) {
        *(uint *)(lVar22 + 0x20) = uVar9;
        if (*(int *)(lVar22 + 0x24) - uVar8 < uVar9 - uVar8) {
          FUN_14473d6dc(plVar24);
        }
        memset((void *)((longlong)(int)uVar8 * 8 + *plVar24),0,(longlong)(int)(uVar9 - uVar8) << 3);
      }
      else if (uVar20 < uVar8) {
        *(uint *)(lVar22 + 0x20) = uVar9;
        FUN_14742d3f8(plVar24);
      }
    }
  }
  *(int *)(lVar22 + 0x28) = *(int *)(lVar22 + 0x28) + 1;
  uVar20 = (uint)param_6;
  iVar21 = (int)((ulonglong)param_6 >> 0x20);
  local_b0 = (uint)((ulonglong)param_6 >> 8) & 0xff;
  uVar8 = (uVar20 & 0xff00) + iVar21 >> 8 & 0xff;
  if (local_b0 < uVar8) {
    pcVar6 = (char *)param_1[2];
    puVar7 = (undefined4 *)param_1[3];
    uVar9 = iVar21 + uVar20 & 0xff;
    uVar12 = (uint)((ulonglong)param_6 >> 0x10) & 0xffff;
    uVar10 = (uVar20 & 0xffff0000) + iVar21 >> 0x10;
    plVar24 = (longlong *)(lVar4 + 0xe0);
    do {
      local_ac = uVar12;
      if (uVar12 < uVar10) {
        do {
          if ((uVar20 & 0xff) < uVar9) {
            uVar23 = uVar20 & 0xff;
            do {
              uVar25 = (ulonglong)
                       (((*(uint *)(param_3 + 0xa8) >> 0x10) * (local_b0 & 0xff) +
                        (local_ac & 0xffff)) * (*(uint *)(param_3 + 0xa8) & 0xff) + (uVar23 & 0xff))
              ;
              lVar15 = *(longlong *)(lVar22 + 8);
              puVar11 = *(uint **)(lVar15 + uVar25 * 8);
              if (puVar11 == (uint *)0x0) {
                puVar11 = (uint *)(*(longlong *)(lVar4 + 0xe0) + 3U & 0xfffffffffffffffc);
                puVar14 = puVar11 + 8;
                if (*(uint **)(lVar4 + 0xe8) < puVar14) {
                  FUN_140023dd8(plVar24,0x24);
                  puVar11 = (uint *)(*plVar24 + 3U & 0xfffffffffffffffc);
                  puVar14 = puVar11 + 8;
                }
                *plVar24 = (longlong)puVar14;
                puVar11[3] = 0;
                puVar11[4] = 0;
                puVar11[5] = 0;
                puVar11[6] = 0;
                puVar11[0] = 0;
                puVar11[1] = 0;
                puVar11[2] = 0;
                puVar11[3] = 0;
                puVar11[1] = 0xffffffff;
                puVar11[2] = 0xffffffff;
                puVar11[3] = 0xffffffff;
                puVar11[4] = 0xffffffff;
                *(undefined8 *)((longlong)puVar11 + 0x12) = 0xffffffffffffffff;
                puVar11[7] = 0;
                *(uint **)(lVar15 + uVar25 * 8) = puVar11;
              }
              uVar13 = *puVar11;
              uVar16 = uVar13 | param_4;
              if ((uVar16 & ~DAT_14c760dac) == 0) {
                uVar13 = uVar16 & 0xfff6fe00;
                if ((uVar16 & 0x2fc00) == 0) {
                  uVar13 = uVar16;
                }
              }
              else if ((uVar13 & ~DAT_14c760dac) == 0) {
                uVar13 = param_4;
              }
              *puVar11 = uVar13;
              puVar11 = (uint *)(*(longlong *)(lVar15 + uVar25 * 8) + 0x1c);
              *puVar11 = *puVar11 | uVar19;
              lVar17 = *(longlong *)(lVar15 + uVar25 * 8);
              if ((iVar18 != -1) && (*(int *)(lVar17 + 0x14) != iVar18)) {
                iVar21 = iVar18;
                if (*(int *)(lVar17 + 0x14) != -1) {
                  iVar21 = DAT_14ca95bd0;
                }
                *(int *)(lVar17 + 0x14) = iVar21;
                lVar17 = *(longlong *)(lVar15 + uVar25 * 8);
              }
              uVar3 = *puVar7;
              lVar15 = (ulonglong)(*pcVar6 == '\x02') * 4;
              *(undefined4 *)(lVar17 + 4) = 0xffffffff;
              *(undefined4 *)(lVar17 + 8) = 0xffffffff;
              *(undefined4 *)(lVar17 + 0xc) = 0xffffffff;
              *(undefined4 *)(lVar17 + 0x10) = 0xffffffff;
              *(undefined4 *)(lVar17 + 4 + lVar15) = uVar3;
              *(undefined4 *)(lVar17 + 0xc + lVar15) = uVar3;
              uVar23 = uVar23 + 1;
            } while (uVar9 != uVar23);
          }
          local_ac = local_ac + 1;
        } while (local_ac != uVar10);
      }
      local_b0 = local_b0 + 1;
    } while (local_b0 != uVar8);
  }
  if (((param_4 & 0x2fc00) != 0) &&
     (*(byte *)param_1[5] = *(byte *)param_1[5] & param_5, *(char *)(lVar4 + 0x520) == '\0')) {
    *(byte *)(param_3 + 0x24) = *(byte *)(param_3 + 0x24) | 4;
  }
  return;
}



// FUNCTION 143219aa0 FUN_143219aa0 body=647 status=ok
// SIG undefined FUN_143219aa0(void)

void FUN_143219aa0(undefined8 *param_1,longlong param_2,longlong param_3,uint param_4)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  
  lVar5 = param_1[4];
  if (param_2 != 0) {
    puVar6 = (undefined8 *)*param_1;
    iVar9 = *(int *)*puVar6;
    if (*(int *)(param_2 + 0x20) != iVar9) {
      *(int *)(param_2 + 0x20) = iVar9;
      lVar10 = *(longlong *)puVar6[1];
      iVar9 = *(int *)(lVar10 + 0x98);
      *(uint *)(lVar10 + 0x98) = iVar9 + 1U;
      if (*(uint *)(lVar10 + 0x9c) < iVar9 + 1U) {
        FUN_144adaeec((longlong *)(lVar10 + 0x90),iVar9);
      }
      *(undefined4 *)(*(longlong *)(lVar10 + 0x90) + (longlong)iVar9 * 4) =
           *(undefined4 *)(param_2 + 0x1c);
    }
  }
  if ((*(char *)(param_3 + 0x21) != '\x01') ||
     ((*(byte *)(*(longlong *)param_1[1] + 0x38) & 0x40) != 0)) {
    iVar9 = -1;
    if ((param_2 != 0) &&
       (((*(byte *)(param_2 + 0x18) & 0xfd) == 0 && ((*(byte *)(param_2 + 0x28) & 1) != 0)))) {
      iVar9 = *(int *)(param_2 + 0x1c);
    }
    if (*(int *)(param_3 + 0x34 + (ulonglong)(*(char *)param_1[2] == '\x02') * 4) ==
        *(int *)param_1[3]) {
      lVar10 = (longlong)*(int *)(param_3 + 0x40) * 0x38 +
               *(longlong *)(*(longlong *)param_1[1] + 0x80);
    }
    else {
      *(int *)(param_3 + 0x34 + (ulonglong)(*(char *)param_1[2] == '\x02') * 4) = *(int *)param_1[3]
      ;
      *(undefined4 *)(param_3 + 0x40) = *(undefined4 *)(*(longlong *)param_1[1] + 0x88);
      lVar10 = *(longlong *)param_1[1];
      iVar3 = *(int *)(lVar10 + 0x88);
      *(uint *)(lVar10 + 0x88) = iVar3 + 1U;
      if (*(uint *)(lVar10 + 0x8c) < iVar3 + 1U) {
        FUN_144adb148((longlong *)(lVar10 + 0x80),iVar3);
      }
      lVar11 = *(longlong *)(lVar10 + 0x80);
      lVar10 = lVar11 + (longlong)iVar3 * 0x38;
      plVar1 = (longlong *)(lVar11 + (longlong)iVar3 * 0x38);
      *plVar1 = param_3;
      *(undefined4 *)(plVar1 + 1) = 0;
      *(undefined4 *)((longlong)plVar1 + 0xc) = 0xffffffff;
      *(undefined4 *)(plVar1 + 2) = 0xffffffff;
      *(undefined4 *)((longlong)plVar1 + 0x14) = 0xffffffff;
      *(undefined4 *)(plVar1 + 3) = 0xffffffff;
      *(undefined8 *)((longlong)plVar1 + 0x1a) = 0xffffffffffffffff;
      *(undefined8 *)((longlong)plVar1 + 0x24) = 0;
      *(undefined8 *)((longlong)plVar1 + 0x2c) = 0;
      if (*(longlong *)(param_3 + 0x130) == 0) {
        lVar11 = 0xffff;
      }
      else {
        iVar3 = *(int *)(lVar5 + 0x4e8);
        lVar11 = (longlong)iVar3;
        *(uint *)(lVar5 + 0x4e8) = iVar3 + 1U;
        if (*(uint *)(lVar5 + 0x4ec) < iVar3 + 1U) {
          FUN_1459c2126((longlong *)(lVar5 + 0x4e0),iVar3);
        }
        *(undefined8 *)(*(longlong *)(lVar5 + 0x4e0) + lVar11 * 8) =
             *(undefined8 *)(param_3 + 0x130);
        *(undefined8 *)(param_3 + 0x130) = 0;
      }
      *(short *)(lVar10 + 0x20) = (short)lVar11;
      uVar4 = *(undefined4 *)param_1[3];
      cVar2 = *(char *)param_1[2];
      *(undefined4 *)((longlong)plVar1 + 0xc) = 0xffffffff;
      *(undefined4 *)(plVar1 + 2) = 0xffffffff;
      *(undefined4 *)((longlong)plVar1 + 0x14) = 0xffffffff;
      *(undefined4 *)(plVar1 + 3) = 0xffffffff;
      *(undefined4 *)(lVar10 + 0xc + (ulonglong)(cVar2 == '\x02') * 4) = uVar4;
      *(undefined4 *)(lVar10 + 0x14 + (ulonglong)(cVar2 == '\x02') * 4) = uVar4;
    }
    *(int *)(lVar10 + 0x30) = *(int *)(lVar10 + 0x30) + 1;
    uVar7 = *(uint *)(lVar10 + 8);
    uVar8 = uVar7 | param_4;
    if ((uVar8 & ~DAT_14c760dac) == 0) {
      uVar7 = uVar8 & 0xfff6fe00;
      if ((uVar8 & 0x2fc00) == 0) {
        uVar7 = uVar8;
      }
    }
    else if ((uVar7 & ~DAT_14c760dac) == 0) {
      uVar7 = param_4;
    }
    *(uint *)(lVar10 + 8) = uVar7;
    if ((iVar9 != -1) && (*(int *)(lVar10 + 0x1c) != iVar9)) {
      if (*(int *)(lVar10 + 0x1c) != -1) {
        iVar9 = DAT_14ca95bd0;
      }
      *(int *)(lVar10 + 0x1c) = iVar9;
    }
    if (((param_4 & 0x2fc00) != 0) &&
       (*(undefined1 *)param_1[5] = 0, *(char *)(lVar5 + 0x520) == '\0')) {
      *(byte *)(param_3 + 0x24) = *(byte *)(param_3 + 0x24) | 4;
    }
  }
  return;
}



// FUNCTION 143219d28 FUN_143219d28 body=547 status=ok
// SIG undefined FUN_143219d28(void)

longlong * FUN_143219d28(longlong *param_1,int param_2)

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



// FUNCTION 143219f4c FUN_143219f4c body=177 status=ok
// SIG undefined FUN_143219f4c(void)

void FUN_143219f4c(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  iVar4 = *piVar1;
  if (iVar4 == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    iVar4 = *piVar1;
  }
  if ((iVar4 == 0x60000000) || (iVar4 == 0)) {
    *piVar1 = 0x40000010;
  }
  iVar2 = *(int *)(param_1 + 0xb0);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0xa8);
    lVar5 = 0;
    do {
      FUN_14471624a(*(undefined8 *)(param_1 + 0xc0),*(undefined8 *)(lVar3 + lVar5));
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar2 * 8 != lVar5);
  }
  FUN_1447850c6(*(undefined8 *)(param_1 + 0xc0));
  if ((iVar4 == 0x60000000) || (iVar4 == 0)) {
    *piVar1 = iVar4;
  }
  return;
}



// FUNCTION 143219ffe FUN_143219ffe body=110 status=ok
// SIG undefined FUN_143219ffe(void)

undefined8 * FUN_143219ffe(undefined8 *param_1,int param_2)

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



// FUNCTION 14321a06c FUN_14321a06c body=14 status=ok
// SIG undefined FUN_14321a06c(void)

void FUN_14321a06c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}



// FUNCTION 14321a07a FUN_14321a07a body=49 status=ok
// SIG undefined FUN_14321a07a(void)

void FUN_14321a07a(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_144705e08(*param_1,*(undefined4 *)(param_1 + 1));
    FUN_140028d90(param_1);
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 14321a0ac FUN_14321a0ac body=131 status=ok
// SIG undefined FUN_14321a0ac(void)

void FUN_14321a0ac(ulonglong *param_1,int param_2)

{
  longlong lVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  param_2 = param_2 * 0x10;
  puVar2 = TlsGetValue(DAT_14ca954e4);
  uVar5 = (ulonglong)((uint)(0xf < param_2) * 8);
  lVar1 = uVar5 + 7;
  uVar5 = uVar5 ^ 0xfffffffffffffff8;
  uVar3 = *puVar2 + lVar1 & uVar5;
  uVar4 = uVar3 + (longlong)param_2;
  if (puVar2[1] < uVar4) {
    FUN_140023dd8(puVar2,param_2 + (uint)(0xf < param_2) * 8 + 8);
    uVar3 = lVar1 + *puVar2 & uVar5;
    uVar4 = (longlong)param_2 + uVar3;
  }
  *puVar2 = uVar4;
  *param_1 = uVar3;
  return;
}



// FUNCTION 14321a12f FUN_14321a12f body=14 status=ok
// SIG undefined FUN_14321a12f(void)

void FUN_14321a12f(void *param_1,uint param_2)

{
  memset(param_1,0,(ulonglong)param_2 << 4);
  return;
}



// FUNCTION 14321a13e FUN_14321a13e body=101 status=ok
// SIG undefined FUN_14321a13e(void)

void FUN_14321a13e(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4((ulonglong)uVar1);
  }
  if (1 < uVar1) {
    if (*(uint *)(param_1 + 0x1c) < 2) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
    }
    else {
      uVar3 = uVar1 + (int)((ulonglong)uVar1 * 3 >> 3) + 0x10;
    }
    uVar2 = 0x7fffffff;
    if ((int)uVar1 <= (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)(param_1 + 0x1c) = uVar2;
    FUN_14321a0ac(param_1 + 0x10);
    return;
  }
  *(undefined4 *)(param_1 + 0x1c) = 1;
  return;
}



// FUNCTION 14321a1a4 FUN_14321a1a4 body=1323 status=ok
// SIG undefined FUN_14321a1a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14321a1a4(undefined8 *param_1,longlong *param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  uint *puVar8;
  ulonglong uVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  longlong *plVar14;
  byte *pbVar15;
  ulonglong *puVar16;
  longlong lVar17;
  ulonglong *puVar18;
  ulonglong uVar19;
  undefined1 auStack_b8 [40];
  undefined8 *local_90;
  undefined2 local_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar4 = *(undefined8 **)(*(longlong *)(param_1[1] + 0x468) + (longlong)param_4 * 8);
  iVar2 = *(int *)(puVar4 + 5);
  if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar2);
  }
  plVar14 = (longlong *)((longlong)param_3 * 0x10 + *param_2);
  lVar17 = *(longlong *)*param_1;
  iVar3 = *(int *)((longlong)plVar14 + 0xc);
  FUN_144705e08(*plVar14,(int)plVar14[1]);
  *(undefined4 *)(plVar14 + 1) = 0;
  if ((iVar3 < iVar2) && (*(int *)((longlong)plVar14 + 0xc) != iVar2)) {
    FUN_144adb398(plVar14,iVar2);
  }
  local_90 = puVar4;
  if ((longlong)*(int *)(puVar4 + 5) != 0) {
    puVar16 = (ulonglong *)puVar4[4];
    puVar18 = puVar16 + (longlong)*(int *)(puVar4 + 5) * 2;
    do {
      uVar7 = *puVar16;
      uVar19 = puVar16[1];
      iVar2 = (int)plVar14[1];
      *(uint *)(plVar14 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)plVar14 + 0xc) < iVar2 + 1U) {
        FUN_14742e68c(plVar14,iVar2);
      }
      lVar5 = *plVar14;
      lVar13 = (longlong)iVar2 * 0x38;
      puVar8 = (uint *)(lVar5 + lVar13);
      puVar4 = (undefined8 *)(lVar5 + 8 + lVar13);
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4 = (undefined8 *)(lVar5 + 0x28 + lVar13);
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4 = (undefined8 *)(lVar5 + 0x18 + lVar13);
      *puVar4 = 0;
      puVar4[1] = 0;
      *(undefined8 *)(lVar5 + lVar13) = 0xffffffffffffffff;
      *(undefined4 *)(lVar5 + 8 + lVar13) = 0xffffffff;
      *(undefined1 *)(lVar5 + 0x30 + lVar13) = 0;
      *(uint *)(lVar5 + 0x1c + lVar13) = (uint)uVar7 & 0x1fffff;
      *(uint *)(lVar5 + 0x20 + lVar13) = (uint)(uVar7 >> 0x15) & 0x1fffff;
      *(uint *)(lVar5 + 0x24 + lVar13) = (uint)(uVar7 >> 0x3d);
      uVar9 = uVar7 >> 0x2a & 0xffff;
      if ((uVar7 & 0x1c00000000000000) == 0) {
        *(undefined8 *)(puVar8 + 4) =
             *(undefined8 *)(*(longlong *)(*(longlong *)(lVar17 + 0x178) + uVar9 * 8) + 0x10);
        *(undefined1 *)(puVar8 + 6) = 1;
        puVar8[1] = (uint)uVar19 & 0xffff;
        *puVar8 = (uint)(uVar19 >> 0x10) & 0xff;
        puVar8[2] = (uint)uVar19 >> 0x18;
      }
      else {
        *(undefined8 *)(puVar8 + 4) =
             *(undefined8 *)(*(longlong *)(*(longlong *)(lVar17 + 0x188) + uVar9 * 8) + 0x10);
        *(undefined1 *)(puVar8 + 6) = 2;
        if (uVar19 != 0) {
          *(ulonglong *)(puVar8 + 10) = uVar19;
          *(undefined1 *)(puVar8 + 0xc) = 1;
        }
      }
      puVar16 = puVar16 + 2;
    } while (puVar16 != puVar18);
  }
  uStack_78 = (undefined4)plVar14[1];
  local_70 = local_90[6];
  local_68 = *(undefined4 *)(local_90 + 7);
  uStack_80 = (undefined4)*plVar14;
  uStack_7c = (undefined4)((ulonglong)*plVar14 >> 0x20);
  local_84 = *(undefined4 *)(local_90 + 8);
  local_88 = *(undefined2 *)((longlong)local_90 + 0x44);
  uVar7 = DAT_14ca84ab8 + (ulonglong)(DAT_14ca84ab8 == 0);
  lVar17 = (-uVar7 & uVar7) + _DAT_14ca84ab0;
  uVar12 = 4;
  if (4 < (uint)uVar7) {
    uVar12 = (uint)uVar7;
  }
  puVar4 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xde8);
  puVar8 = (uint *)*puVar4;
  if (puVar8 != (uint *)0x0) goto LAB_14321a3d1;
  while( true ) {
    FUN_144769a66(puVar4);
    puVar8 = (uint *)*puVar4;
LAB_14321a3d1:
    uVar19 = (ulonglong)uVar12;
    uVar7 = -uVar19;
    pbVar15 = (byte *)(*(longlong *)(puVar8 + 0x10) + (uVar19 - 1) & uVar7);
    puVar10 = (uint *)(pbVar15 + lVar17);
    if (puVar10 <= puVar8 + 0x4000) break;
    uVar9 = lVar17 + uVar19 + 0x58;
    if (0x10000 < uVar9) {
      puVar8 = (uint *)FUN_14472e5b2(uVar9,8);
      *puVar8 = 0xffffffff;
      puVar8[0x12] = 0;
      pbVar15 = (byte *)((longlong)puVar8 + uVar19 + 0x57 & uVar7);
      *(ulonglong *)(puVar8 + 0x10) = (longlong)puVar8 + uVar19 + lVar17 + 0x58;
      *puVar8 = 1;
      goto LAB_14321a47b;
    }
    uVar11 = puVar8[0x12];
    while( true ) {
      *(uint **)(puVar8 + 0x10) = puVar8 + 0x4000;
      LOCK();
      uVar1 = *puVar8;
      *puVar8 = *puVar8 + uVar11 + 1;
      UNLOCK();
      if ((uVar1 ^ uVar11) != 0xffffffff) break;
      puVar8 = (uint *)*puVar4;
      *puVar8 = 0xffffffff;
      *(uint **)(puVar8 + 0x10) = puVar8 + 0x16;
      puVar8[0x12] = 0;
      *puVar4 = puVar8;
      pbVar15 = (byte *)((longlong)puVar8 + uVar19 + 0x57 & uVar7);
      puVar10 = (uint *)(pbVar15 + lVar17);
      uVar11 = 0;
      if (puVar10 <= puVar8 + 0x4000) {
        uVar12 = 1;
        goto LAB_14321a46b;
      }
    }
  }
  uVar12 = puVar8[0x12] + 1;
LAB_14321a46b:
  *(uint **)(puVar8 + 0x10) = puVar10 + 2;
  puVar8[0x12] = uVar12;
LAB_14321a47b:
  puVar6 = local_90;
  *(int *)(pbVar15 + -8) = ((int)pbVar15 + -8) - (int)puVar8;
  *(int *)(pbVar15 + -4) = (int)lVar17;
  *pbVar15 = local_88._1_1_ << 2 | (byte)local_88;
  (**(code **)(*DAT_14ca83900 + 200))(DAT_14ca83900,pbVar15);
  *puVar6 = pbVar15;
  if (*(char *)((longlong)puVar6 + 0x47) != '\x01') {
LAB_14321a5f2:
    if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  local_88 = *(undefined2 *)((longlong)puVar6 + 0x44);
  local_70 = 0;
  local_68 = 0;
  uVar7 = DAT_14ca84ab8 + (ulonglong)(DAT_14ca84ab8 == 0);
  local_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  lVar17 = (-uVar7 & uVar7) + _DAT_14ca84ab0;
  uVar12 = 4;
  if (4 < (uint)uVar7) {
    uVar12 = (uint)uVar7;
  }
  puVar8 = (uint *)*puVar4;
  if (puVar8 != (uint *)0x0) goto LAB_14321a519;
  while( true ) {
    FUN_144769a66(puVar4);
    puVar8 = (uint *)*puVar4;
LAB_14321a519:
    uVar7 = (ulonglong)uVar12;
    uVar19 = -uVar7;
    pbVar15 = (byte *)(*(longlong *)(puVar8 + 0x10) + (uVar7 - 1) & uVar19);
    puVar10 = (uint *)(pbVar15 + lVar17);
    if (puVar10 <= puVar8 + 0x4000) break;
    uVar9 = lVar17 + uVar7 + 0x58;
    if (0x10000 < uVar9) {
      puVar8 = (uint *)FUN_14472e5b2(uVar9,8);
      *puVar8 = 0xffffffff;
      puVar8[0x12] = 0;
      pbVar15 = (byte *)((longlong)puVar8 + uVar7 + 0x57 & uVar19);
      *(ulonglong *)(puVar8 + 0x10) = (longlong)puVar8 + uVar7 + lVar17 + 0x58;
      *puVar8 = 1;
      goto LAB_14321a5bd;
    }
    uVar11 = puVar8[0x12];
    while( true ) {
      *(uint **)(puVar8 + 0x10) = puVar8 + 0x4000;
      LOCK();
      uVar1 = *puVar8;
      *puVar8 = *puVar8 + uVar11 + 1;
      UNLOCK();
      if ((uVar1 ^ uVar11) != 0xffffffff) break;
      puVar8 = (uint *)*puVar4;
      *puVar8 = 0xffffffff;
      *(uint **)(puVar8 + 0x10) = puVar8 + 0x16;
      puVar8[0x12] = 0;
      *puVar4 = puVar8;
      pbVar15 = (byte *)((longlong)puVar8 + uVar7 + 0x57 & uVar19);
      puVar10 = (uint *)(pbVar15 + lVar17);
      uVar11 = 0;
      if (puVar10 <= puVar8 + 0x4000) {
        uVar12 = 1;
        goto LAB_14321a5b2;
      }
    }
  }
  uVar12 = puVar8[0x12] + 1;
LAB_14321a5b2:
  *(uint **)(puVar8 + 0x10) = puVar10 + 2;
  puVar8[0x12] = uVar12;
LAB_14321a5bd:
  *(int *)(pbVar15 + -8) = ((int)pbVar15 + -8) - (int)puVar8;
  *(int *)(pbVar15 + -4) = (int)lVar17;
  *pbVar15 = local_88._1_1_ << 2 | (byte)local_88;
  (**(code **)(*DAT_14ca83900 + 200))(DAT_14ca83900,pbVar15);
  puVar6[1] = pbVar15;
  goto LAB_14321a5f2;
}



// FUNCTION 14321a6d2 FUN_14321a6d2 body=125 status=ok
// SIG undefined FUN_14321a6d2(void)

void FUN_14321a6d2(longlong *param_1)

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
    FUN_14321affa(&local_18);
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



// FUNCTION 14321a750 FUN_14321a750 body=939 status=ok
// SIG undefined FUN_14321a750(void)

ulonglong FUN_14321a750(longlong *param_1,byte param_2)

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
      FUN_14321a6d2(param_1);
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
      goto LAB_14321a8d6;
    }
  }
  else {
    uVar11 = (ulonglong)*(uint *)(lVar8 + 0x34);
  }
  local_c0 = 0;
  local_e0 = 0;
LAB_14321a8d6:
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
      if ((local_e1 & bVar14) != 0) goto LAB_14321aa22;
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
        FUN_14321a1a4(uVar4,uVar3,(int)param_1[1],iVar10);
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
        goto LAB_14321aa24;
      }
    }
    if (iVar12 < iVar2 && (char)local_c0 == '\0') {
      QueryPerformanceCounter(&local_88);
      auVar16._0_8_ = ((double)local_88.QuadPart * DAT_14c83f420 + 16777216.0) * 10000000.0 + 0.5;
      auVar16._8_8_ = 0;
      auVar17 = roundpd(auVar16,auVar16,1);
      if (local_e0 < (longlong)auVar17._0_8_ - local_d0) {
        *(undefined1 *)((longlong)param_1 + 0xc) = 1;
LAB_14321aa22:
        uVar11 = 0;
LAB_14321aa24:
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
    else if (iVar2 <= iVar12) goto LAB_14321aa22;
    lVar8 = *param_1;
  } while( true );
}



// FUNCTION 14321aafc FUN_14321aafc body=73 status=ok
// SIG undefined FUN_14321aafc(void)

void FUN_14321aafc(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    if (*(char *)((longlong)param_1 + 0xc) == '\x01') {
      FUN_14321affa(param_1,(int)param_1[1]);
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
                    /* WARNING: Could not recover jumptable at 0x00014321ab3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 14321ab46 FUN_14321ab46 body=434 status=ok
// SIG undefined FUN_14321ab46(void)

undefined8 * FUN_14321ab46(undefined8 *param_1,int param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  int *piVar3;
  undefined4 uVar4;
  longlong lVar5;
  int *piVar6;
  
  *param_1 = &PTR_FUN_14a38ba10;
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
  FUN_14321afca(lVar2,uVar4,param_3);
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
          __tlregdtor(&LAB_1432149cc);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        piVar3 = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar6;
        if (piVar3 == (int *)0x0) goto LAB_14321ac10;
      }
      _aligned_free(piVar3);
    }
  }
LAB_14321ac10:
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
          __tlregdtor(&LAB_1432149cc);
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



// FUNCTION 14321acf8 FUN_14321acf8 body=53 status=ok
// SIG undefined FUN_14321acf8(void)

void FUN_14321acf8(longlong param_1,int param_2)

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



// FUNCTION 14321ad2e FUN_14321ad2e body=667 status=ok
// SIG undefined FUN_14321ad2e(void)

void FUN_14321ad2e(undefined8 *param_1)

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
  if (puVar5 != (uint *)0x0) goto LAB_14321ae29;
  while( true ) {
    uVar7 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318);
    if ((uVar7 & 1) == 0) {
      *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x318) = uVar7 | 1;
      __tlregdtor(&LAB_1432149cc);
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
LAB_14321ae29:
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
        goto LAB_14321aea3;
      }
    }
  }
  uVar7 = uVar7 + 1;
LAB_14321aea3:
  *(uint **)(puVar5 + 0x10) = puVar9;
  puVar5[0x12] = uVar7;
  uVar6 = ((longlong)_Src + 0xffffU & 0xffffffffffff0000) - (longlong)_Src;
  if (uVar6 == 0 || _Src == (void *)0x0) {
    if (_Src == (void *)0x0) goto LAB_14321af4a;
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
        __tlregdtor(&LAB_1432149cc);
      }
      lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      _Memory = *(int **)(lVar2 + 0x310);
      *(int **)(lVar2 + 0x310) = piVar10;
      if (_Memory == (int *)0x0) goto LAB_14321af4a;
    }
    _aligned_free(_Memory);
  }
LAB_14321af4a:
  *param_1 = _Dst;
  return;
}



// FUNCTION 14321afca FUN_14321afca body=47 status=ok
// SIG undefined FUN_14321afca(void)

void FUN_14321afca(longlong param_1,int param_2)

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



// FUNCTION 14321affa FUN_14321affa body=369 status=ok
// SIG undefined FUN_14321affa(void)

void FUN_14321affa(longlong *param_1,int param_2)

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
  plVar2[5] = (longlong)&PTR_FUN_14a38ba20;
  *plVar2 = lVar5;
  local_48 = 0;
  *(undefined1 *)((longlong)plVar2 + 0xc) = local_4c;
  *(int *)(plVar2 + 1) = local_50;
  FUN_14321aafc(&local_48);
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
  FUN_14321aafc(&local_58);
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



// FUNCTION 14321b18a FUN_14321b18a body=450 status=ok
// SIG undefined FUN_14321b18a(void)

void FUN_14321b18a(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
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
    *param_2 = &PTR_FUN_14a38ba20;
    puVar6 = param_3;
  }
  else {
    *param_2 = &PTR_LAB_14a38ba60;
    puVar1 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x330
             );
    puVar5 = (uint *)*puVar1;
    if (puVar5 != (uint *)0x0) goto LAB_14321b267;
    while( true ) {
      uVar7 = *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
      if ((uVar7 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar7 | 1;
        __tlregdtor(&LAB_1432149cc);
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
LAB_14321b267:
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
          goto LAB_14321b2e1;
        }
      }
    }
    uVar7 = uVar7 + 1;
LAB_14321b2e1:
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



// FUNCTION 14321b34c FUN_14321b34c body=26 status=ok
// SIG undefined FUN_14321b34c(void)

undefined8 FUN_14321b34c(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 != '\0') {
    FUN_14321a750(param_2,0);
  }
  return 0;
}



// FUNCTION 14321b366 FUN_14321b366 body=72 status=ok
// SIG undefined FUN_14321b366(void)

undefined8
FUN_14321b366(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4,char param_5
             )

{
  if (param_5 != '\0') {
    FUN_14321a750(param_3,0);
  }
  FUN_14321b18a(param_1,param_2 + 0x28,param_2,param_3,param_4);
  return 0;
}



// FUNCTION 14321b3e0 FUN_14321b3e0 body=26 status=ok
// SIG undefined FUN_14321b3e0(void)

undefined8 FUN_14321b3e0(undefined8 param_1,undefined8 *param_2,char param_3)

{
  if (param_3 != '\0') {
    FUN_14321a750(*param_2,0);
  }
  return 0;
}



// FUNCTION 14321b3fa FUN_14321b3fa body=70 status=ok
// SIG undefined FUN_14321b3fa(void)

undefined8
FUN_14321b3fa(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             char param_5)

{
  if (param_5 != '\0') {
    FUN_14321a750(*param_3,0);
  }
  param_2[5] = &PTR_LAB_14a38ba60;
  *param_2 = *param_3;
  *param_1 = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
             TTaskDelegateDummy::vftable;
  return 0;
}



// FUNCTION 14321b440 FUN_14321b440 body=179 status=ok
// SIG undefined FUN_14321b440(void)

void FUN_14321b440(undefined8 param_1,ulonglong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  int *_Memory;
  int *piVar4;
  
  uVar2 = *param_2;
  FUN_14321aafc(uVar2);
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
          __tlregdtor(&LAB_1432149cc);
        }
        lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar3 + 0x310);
        *(int **)(lVar3 + 0x310) = piVar4;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00014321b4bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      _aligned_free(_Memory);
      return;
    }
  }
  return;
}



// FUNCTION 14321b502 FUN_14321b502 body=349 status=ok
// SIG undefined FUN_14321b502(void)

void FUN_14321b502(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar3 = *(uint *)(param_1 + 0x18);
  uVar7 = (ulonglong)uVar3;
  iVar5 = *(int *)(param_1 + 0x1c);
  uVar6 = 0x10;
  if (0x10 < uVar7) {
    uVar4 = iVar5 - uVar3;
    if (uVar4 < 0x4000) {
      if (uVar4 < 0x41 || iVar5 * 2 <= (int)(uVar3 * 3)) {
        return;
      }
    }
    else if ((int)uVar4 < 0x41) {
      return;
    }
    if ((0 < (int)uVar3) && (DAT_14c872d28 != (longlong *)0x0)) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar7 = uVar7 + 0xf;
        if (uVar3 < 0x7ff1) {
          uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
        }
        else {
          uVar6 = (ulonglong)((uint)uVar7 & 0xfffffff0);
          if (uVar6 < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar7 >> 4];
            uVar8 = 0x32;
            if (0x32 < bVar2) {
              uVar8 = (ulonglong)bVar2;
            }
            uVar9 = 0x32 - (ulonglong)bVar2;
            do {
              uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar9 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_14321b5a4;
              lVar1 = uVar8 + 1 + uVar9;
              uVar9 = uVar9 - 1;
            } while (lVar1 != 0x33);
          }
          uVar7 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar7 = (ulonglong)DAT_14c841df8;
          }
          uVar7 = -uVar7 & (uVar6 + uVar7) - 1;
        }
      }
      else {
        uVar7 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar7,0);
        iVar5 = *(int *)(param_1 + 0x1c);
      }
    }
LAB_14321b5a4:
    uVar6 = uVar7 & 0xffffffff;
  }
  if ((int)uVar6 == iVar5) {
    return;
  }
  *(int *)(param_1 + 0x1c) = (int)uVar6;
  FUN_14742d0b0(param_1,*(undefined4 *)(param_1 + 0x18),uVar6,1);
  return;
}



// FUNCTION 14321b660 FUN_14321b660 body=29 status=ok
// SIG undefined FUN_14321b660(void)

undefined8 FUN_14321b660(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14321b692 FUN_14321b692 body=85 status=ok
// SIG undefined FUN_14321b692(void)

void FUN_14321b692(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a38bb00;
  return;
}



// FUNCTION 14321b6e8 FUN_14321b6e8 body=85 status=ok
// SIG undefined FUN_14321b6e8(void)

void FUN_14321b6e8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a38bb00;
  return;
}



// FUNCTION 14321b73e FUN_14321b73e body=118 status=ok
// SIG undefined FUN_14321b73e(void)

void FUN_14321b73e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a38bb00;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014321b7a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14321b82a FUN_14321b82a body=29 status=ok
// SIG undefined FUN_14321b82a(void)

undefined8 FUN_14321b82a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14321b85c FUN_14321b85c body=85 status=ok
// SIG undefined FUN_14321b85c(void)

void FUN_14321b85c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a38bb70;
  return;
}



// FUNCTION 14321b8b2 FUN_14321b8b2 body=85 status=ok
// SIG undefined FUN_14321b8b2(void)

void FUN_14321b8b2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a38bb70;
  return;
}



// FUNCTION 14321b908 FUN_14321b908 body=118 status=ok
// SIG undefined FUN_14321b908(void)

void FUN_14321b908(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a38bb70;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014321b96f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14321b97e FUN_14321b97e body=65 status=ok
// SIG undefined FUN_14321b97e(void)

void FUN_14321b97e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0xb0))(param_2);
  if (iVar1 != 0) {
    if (DAT_14c760df8 < 2) {
      DAT_14c760df8 = 1;
    }
    if (DAT_14c760df8 < DAT_14c760e08) {
      DAT_14c760e08 = DAT_14c760df8;
    }
  }
  return;
}



// FUNCTION 14321b9c0 FUN_14321b9c0 body=67 status=ok
// SIG undefined FUN_14321b9c0(void)

undefined8 FUN_14321b9c0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0xb0))(param_2);
  if (iVar1 != 0) {
    if (DAT_14c760df8 < 2) {
      DAT_14c760df8 = 1;
    }
    if (DAT_14c760df8 < DAT_14c760e08) {
      DAT_14c760e08 = DAT_14c760df8;
    }
  }
  return 1;
}



// FUNCTION 14321ba04 FUN_14321ba04 body=29 status=ok
// SIG undefined FUN_14321ba04(void)

undefined8 FUN_14321ba04(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14321ba36 FUN_14321ba36 body=85 status=ok
// SIG undefined FUN_14321ba36(void)

void FUN_14321ba36(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a38bbe0;
  return;
}



// FUNCTION 14321ba8c FUN_14321ba8c body=85 status=ok
// SIG undefined FUN_14321ba8c(void)

void FUN_14321ba8c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a38bbe0;
  return;
}



// FUNCTION 14321bae2 FUN_14321bae2 body=118 status=ok
// SIG undefined FUN_14321bae2(void)

void FUN_14321bae2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a38bbe0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014321bb49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14321bb58 FUN_14321bb58 body=59 status=ok
// SIG undefined FUN_14321bb58(void)

void FUN_14321bb58(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_14321bbd2();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14321bb94 FUN_14321bb94 body=61 status=ok
// SIG undefined FUN_14321bb94(void)

undefined8 FUN_14321bb94(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_14321bbd2();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14321bbd2 FUN_14321bbd2 body=397 status=ok
// SIG undefined FUN_14321bbd2(void)

void FUN_14321bbd2(undefined8 *param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  plVar1 = (longlong *)*param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca960d8) && (FUN_144b3d300(&DAT_14ca960d8), DAT_14ca960d8 == -1)) {
    DAT_14ca960d4 = DAT_14c760dfc;
    _Init_thread_footer(&DAT_14ca960d8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca960e0) && (FUN_144b3d300(&DAT_14ca960e0), DAT_14ca960e0 == -1)) {
    DAT_14ca960dc = DAT_14c760e08;
    _Init_thread_footer(&DAT_14ca960e0);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca960e8) && (FUN_144b3d300(&DAT_14ca960e8), DAT_14ca960e8 == -1)) {
    DAT_14ca960e4 = DAT_14c760df8;
    _Init_thread_footer(&DAT_14ca960e8);
  }
  iVar5 = (**(code **)(*plVar1 + 0xb0))();
  uVar2 = DAT_14c760df8;
  uVar3 = DAT_14c760dfc;
  uVar4 = DAT_14c760e08;
  if ((DAT_14ca95800 != iVar5) &&
     (uVar2 = DAT_14ca960e4, uVar3 = DAT_14ca960d4, uVar4 = DAT_14ca960dc, iVar5 != 0)) {
    DAT_14ca960d4 = DAT_14c760dfc;
    DAT_14ca960dc = DAT_14c760e08;
    DAT_14ca960e4 = DAT_14c760df8;
    uVar2 = 1;
    uVar3 = 0;
    uVar4 = 1;
  }
  DAT_14c760e08 = uVar4;
  DAT_14c760dfc = uVar3;
  DAT_14c760df8 = uVar2;
  return;
}



// FUNCTION 14321bd60 FUN_14321bd60 body=38 status=ok
// SIG undefined FUN_14321bd60(void)

undefined8 FUN_14321bd60(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14321bd86 FUN_14321bd86 body=782 status=ok
// SIG undefined FUN_14321bd86(void)

void FUN_14321bd86(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
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
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  size_t _Size;
  undefined1 *puVar21;
  undefined8 *puVar22;
  int iVar23;
  longlong lVar24;
  undefined1 auStack_e8 [40];
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  ulonglong local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  ulonglong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  iVar23 = 0;
  local_b8 = (undefined1 *)0x0;
  local_b0 = 0x800000000;
  local_68 = (undefined1 *)0x0;
  local_60 = 0x800000000;
  local_58 = 0;
  uStack_50 = 0;
  lVar24 = *(longlong *)(param_1 + 0x18);
  iVar1 = *(int *)(lVar24 + 0x78);
  if (iVar1 != 0) {
    do {
      uVar20 = (ulonglong)
               *(ushort *)
                (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x70) + (longlong)iVar23 * 4);
      if ((*(longlong *)(*(longlong *)(param_1 + 0x10) + uVar20) != 0) &&
         ((*(byte *)(*(longlong *)(param_1 + 0x10) + 8 + uVar20) & 2) != 0)) {
        FUN_144b1c300(local_c0);
      }
      iVar23 = iVar23 + 1;
    } while (iVar1 != iVar23);
    lVar24 = *(longlong *)(param_1 + 0x18);
  }
  iVar1 = *(int *)(lVar24 + 0x68);
  if (iVar1 != 0) {
    iVar23 = 0;
    do {
      uVar20 = (ulonglong)
               *(ushort *)
                (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x60) + (longlong)iVar23 * 4);
      lVar24 = *(longlong *)(*(longlong *)(param_1 + 0x10) + uVar20);
      if ((lVar24 != 0) && ((*(byte *)(*(longlong *)(param_1 + 0x10) + 8 + uVar20) & 2) != 0)) {
        FUN_144b1c300(local_c0,*(undefined8 *)(lVar24 + 0x10));
      }
      iVar23 = iVar23 + 1;
    } while (iVar1 != iVar23);
  }
  puVar22 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar19 = puVar22 + 0x11;
  if ((undefined8 *)param_2[1] < puVar19) {
    FUN_140023dd8(param_2,0x90);
    puVar22 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar19 = puVar22 + 0x11;
  }
  *param_2 = (ulonglong)puVar19;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar22;
  param_2[6] = (ulonglong)(puVar22 + 1);
  puVar22[1] = 0;
  *puVar22 = &PTR_FUN_14a1fb978;
  puVar22[3] = 0;
  _Size = (size_t)(int)local_b0;
  *(int *)(puVar22 + 4) = (int)local_b0;
  if (_Size == 0) {
    *(undefined4 *)((longlong)puVar22 + 0x24) = 8;
  }
  else {
    puVar21 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar21 = local_b8;
    }
    FUN_1446fe144(puVar22 + 2,local_b0 & 0xffffffff,0);
    puVar19 = (undefined8 *)puVar22[3];
    if ((undefined8 *)puVar22[3] == (undefined8 *)0x0) {
      puVar19 = puVar22 + 2;
    }
    memcpy(puVar19,puVar21,_Size);
  }
  puVar22[0xd] = 0;
  lVar24 = (longlong)(int)local_60;
  *(int *)(puVar22 + 0xe) = (int)local_60;
  if (lVar24 == 0) {
    *(undefined4 *)((longlong)puVar22 + 0x74) = 8;
  }
  else {
    puVar21 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar21 = local_a8;
    }
    FUN_1446fe1b8(puVar22 + 5,local_60 & 0xffffffff,0);
    puVar19 = (undefined8 *)puVar22[0xd];
    if ((undefined8 *)puVar22[0xd] == (undefined8 *)0x0) {
      puVar19 = puVar22 + 5;
    }
    memcpy(puVar19,puVar21,lVar24 << 3);
  }
  *(undefined4 *)(puVar22 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar22 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar22 + 0x10) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)puVar22 + 0x84) = uStack_50._4_4_;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x1c0) + 0x10);
  uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x1b8) + 0x10);
  puVar22 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar19 = puVar22 + 0xc;
  if ((undefined8 *)param_2[1] < puVar19) {
    FUN_140023dd8(param_2,0x68);
    puVar22 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar19 = puVar22 + 0xc;
  }
  *param_2 = (ulonglong)puVar19;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar22;
  param_2[6] = (ulonglong)(puVar22 + 1);
  puVar22[1] = 0;
  *puVar22 = &PTR_LAB_14a289d68;
  uVar4 = *(undefined4 *)(param_1 + 0x1cc);
  uVar5 = *(undefined4 *)(param_1 + 0x1d0);
  uVar6 = *(undefined4 *)(param_1 + 0x1d4);
  uVar7 = *(undefined4 *)(param_1 + 0x1d8);
  uVar8 = *(undefined4 *)(param_1 + 0x1dc);
  uVar9 = *(undefined4 *)(param_1 + 0x1e0);
  uVar10 = *(undefined4 *)(param_1 + 0x1e4);
  uVar11 = *(undefined4 *)(param_1 + 0x1e8);
  uVar12 = *(undefined4 *)(param_1 + 0x1ec);
  uVar13 = *(undefined4 *)(param_1 + 0x1f0);
  uVar14 = *(undefined4 *)(param_1 + 500);
  uVar15 = *(undefined4 *)(param_1 + 500);
  uVar16 = *(undefined4 *)(param_1 + 0x1f8);
  uVar17 = *(undefined4 *)(param_1 + 0x1fc);
  uVar18 = *(undefined4 *)(param_1 + 0x200);
  *(undefined4 *)(puVar22 + 2) = *(undefined4 *)(param_1 + 0x1c8);
  *(undefined4 *)((longlong)puVar22 + 0x14) = uVar4;
  *(undefined4 *)(puVar22 + 3) = uVar5;
  *(undefined4 *)((longlong)puVar22 + 0x1c) = uVar6;
  *(undefined4 *)(puVar22 + 4) = uVar7;
  *(undefined4 *)((longlong)puVar22 + 0x24) = uVar8;
  *(undefined4 *)(puVar22 + 5) = uVar9;
  *(undefined4 *)((longlong)puVar22 + 0x2c) = uVar10;
  *(undefined4 *)(puVar22 + 6) = uVar11;
  *(undefined4 *)((longlong)puVar22 + 0x34) = uVar12;
  *(undefined4 *)(puVar22 + 7) = uVar13;
  *(undefined4 *)((longlong)puVar22 + 0x3c) = uVar14;
  *(undefined4 *)((longlong)puVar22 + 0x3c) = uVar15;
  *(undefined4 *)(puVar22 + 8) = uVar16;
  *(undefined4 *)((longlong)puVar22 + 0x44) = uVar17;
  *(undefined4 *)(puVar22 + 9) = uVar18;
  puVar22[10] = uVar3;
  puVar22[0xb] = uVar2;
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14321c0a2 FUN_14321c0a2 body=31 status=ok
// SIG undefined FUN_14321c0a2(void)

undefined8 FUN_14321c0a2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14321c0c2 FUN_14321c0c2 body=38 status=ok
// SIG undefined FUN_14321c0c2(void)

undefined8 FUN_14321c0c2(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14321c0e8 FUN_14321c0e8 body=771 status=ok
// SIG undefined FUN_14321c0e8(void)

void FUN_14321c0e8(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  size_t _Size;
  undefined1 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_e8 [40];
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  ulonglong local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  ulonglong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  iVar11 = 0;
  local_b8 = (undefined1 *)0x0;
  local_b0 = 0x800000000;
  local_68 = (undefined1 *)0x0;
  local_60 = 0x800000000;
  local_58 = 0;
  uStack_50 = 0;
  lVar12 = *(longlong *)(param_1 + 0x18);
  iVar1 = *(int *)(lVar12 + 0x78);
  if (iVar1 != 0) {
    do {
      uVar8 = (ulonglong)
              *(ushort *)
               (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x70) + (longlong)iVar11 * 4);
      if ((*(longlong *)(*(longlong *)(param_1 + 0x10) + uVar8) != 0) &&
         ((*(byte *)(*(longlong *)(param_1 + 0x10) + 8 + uVar8) & 2) != 0)) {
        FUN_144b1c300(local_c0);
      }
      iVar11 = iVar11 + 1;
    } while (iVar1 != iVar11);
    lVar12 = *(longlong *)(param_1 + 0x18);
  }
  iVar1 = *(int *)(lVar12 + 0x68);
  if (iVar1 != 0) {
    iVar11 = 0;
    do {
      uVar8 = (ulonglong)
              *(ushort *)
               (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x60) + (longlong)iVar11 * 4);
      lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x10) + uVar8);
      if ((lVar12 != 0) && ((*(byte *)(*(longlong *)(param_1 + 0x10) + 8 + uVar8) & 2) != 0)) {
        FUN_144b1c300(local_c0,*(undefined8 *)(lVar12 + 0x10));
      }
      iVar11 = iVar11 + 1;
    } while (iVar1 != iVar11);
  }
  puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar10 + 0x11;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x90);
    puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar10 + 0x11;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar10;
  param_2[6] = (ulonglong)(puVar10 + 1);
  puVar10[1] = 0;
  *puVar10 = &PTR_FUN_14a1fb978;
  puVar10[3] = 0;
  _Size = (size_t)(int)local_b0;
  *(int *)(puVar10 + 4) = (int)local_b0;
  if (_Size == 0) {
    *(undefined4 *)((longlong)puVar10 + 0x24) = 8;
  }
  else {
    puVar9 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar9 = local_b8;
    }
    FUN_1446fe144(puVar10 + 2,local_b0 & 0xffffffff,0);
    puVar7 = (undefined8 *)puVar10[3];
    if ((undefined8 *)puVar10[3] == (undefined8 *)0x0) {
      puVar7 = puVar10 + 2;
    }
    memcpy(puVar7,puVar9,_Size);
  }
  puVar10[0xd] = 0;
  lVar12 = (longlong)(int)local_60;
  *(int *)(puVar10 + 0xe) = (int)local_60;
  if (lVar12 == 0) {
    *(undefined4 *)((longlong)puVar10 + 0x74) = 8;
  }
  else {
    puVar9 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar9 = local_a8;
    }
    FUN_1446fe1b8(puVar10 + 5,local_60 & 0xffffffff,0);
    puVar7 = (undefined8 *)puVar10[0xd];
    if ((undefined8 *)puVar10[0xd] == (undefined8 *)0x0) {
      puVar7 = puVar10 + 5;
    }
    memcpy(puVar7,puVar9,lVar12 << 3);
  }
  *(undefined4 *)(puVar10 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar10 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar10 + 0x10) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)puVar10 + 0x84) = uStack_50._4_4_;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar2 = *(undefined8 *)(param_1 + 0x1e0);
  uVar3 = *(undefined8 *)(param_1 + 0x1d0);
  uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x1c0) + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 0x1d8);
  uVar6 = *(undefined8 *)(*(longlong *)(param_1 + 0x1c8) + 0x10);
  puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar10 + 7;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x40);
    puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar10 + 7;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar10;
  param_2[6] = (ulonglong)(puVar10 + 1);
  puVar10[1] = 0;
  *puVar10 = &PTR_FUN_14a38bd48;
  puVar10[2] = uVar6;
  puVar10[3] = uVar5;
  puVar10[4] = uVar4;
  puVar10[5] = uVar3;
  puVar10[6] = uVar2;
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14321c3ec FUN_14321c3ec body=48 status=ok
// SIG undefined FUN_14321c3ec(void)

void FUN_14321c3ec(longlong param_1,longlong param_2)

{
  (**(code **)(**(longlong **)(param_2 + 0x38) + 0x230))
            (*(longlong **)(param_2 + 0x38),*(undefined8 *)(param_1 + 0x10),
             *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
             *(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
  return;
}



// FUNCTION 14321c428 FUN_14321c428 body=38 status=ok
// SIG undefined FUN_14321c428(void)

undefined8 FUN_14321c428(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14321c44e FUN_14321c44e body=219 status=ok
// SIG undefined FUN_14321c44e(void)

void FUN_14321c44e(longlong param_1,ulonglong *param_2)

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
  FUN_14321c550(param_1,param_2);
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



// FUNCTION 14321c52a FUN_14321c52a body=38 status=ok
// SIG undefined FUN_14321c52a(void)

undefined8 FUN_14321c52a(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14321c550 FUN_14321c550 body=741 status=ok
// SIG undefined FUN_14321c550(void)

void FUN_14321c550(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  size_t _Size;
  undefined1 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_e8 [40];
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  ulonglong local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  ulonglong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  iVar8 = 0;
  local_b8 = (undefined1 *)0x0;
  local_b0 = 0x800000000;
  local_68 = (undefined1 *)0x0;
  local_60 = 0x800000000;
  local_58 = 0;
  uStack_50 = 0;
  lVar9 = *(longlong *)(param_1 + 0x18);
  iVar1 = *(int *)(lVar9 + 0x78);
  if (iVar1 != 0) {
    do {
      uVar5 = (ulonglong)
              *(ushort *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x70) + (longlong)iVar8 * 4)
      ;
      if ((*(longlong *)(*(longlong *)(param_1 + 0x10) + uVar5) != 0) &&
         ((*(byte *)(*(longlong *)(param_1 + 0x10) + 8 + uVar5) & 2) != 0)) {
        FUN_144b1c300(local_c0);
      }
      iVar8 = iVar8 + 1;
    } while (iVar1 != iVar8);
    lVar9 = *(longlong *)(param_1 + 0x18);
  }
  iVar1 = *(int *)(lVar9 + 0x68);
  if (iVar1 != 0) {
    iVar8 = 0;
    do {
      uVar5 = (ulonglong)
              *(ushort *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x60) + (longlong)iVar8 * 4)
      ;
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x10) + uVar5);
      if ((lVar9 != 0) && ((*(byte *)(*(longlong *)(param_1 + 0x10) + 8 + uVar5) & 2) != 0)) {
        FUN_144b1c300(local_c0,*(undefined8 *)(lVar9 + 0x10));
      }
      iVar8 = iVar8 + 1;
    } while (iVar1 != iVar8);
  }
  puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar7 + 0x11;
  if ((undefined8 *)param_2[1] < puVar4) {
    FUN_140023dd8(param_2,0x90);
    puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar7 + 0x11;
  }
  *param_2 = (ulonglong)puVar4;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar7;
  param_2[6] = (ulonglong)(puVar7 + 1);
  puVar7[1] = 0;
  *puVar7 = &PTR_FUN_14a1fb978;
  puVar7[3] = 0;
  _Size = (size_t)(int)local_b0;
  *(int *)(puVar7 + 4) = (int)local_b0;
  if (_Size == 0) {
    *(undefined4 *)((longlong)puVar7 + 0x24) = 8;
  }
  else {
    puVar6 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar6 = local_b8;
    }
    FUN_1446fe144(puVar7 + 2,local_b0 & 0xffffffff,0);
    puVar4 = (undefined8 *)puVar7[3];
    if ((undefined8 *)puVar7[3] == (undefined8 *)0x0) {
      puVar4 = puVar7 + 2;
    }
    memcpy(puVar4,puVar6,_Size);
  }
  puVar7[0xd] = 0;
  lVar9 = (longlong)(int)local_60;
  *(int *)(puVar7 + 0xe) = (int)local_60;
  if (lVar9 == 0) {
    *(undefined4 *)((longlong)puVar7 + 0x74) = 8;
  }
  else {
    puVar6 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar6 = local_a8;
    }
    FUN_1446fe1b8(puVar7 + 5,local_60 & 0xffffffff,0);
    puVar4 = (undefined8 *)puVar7[0xd];
    if ((undefined8 *)puVar7[0xd] == (undefined8 *)0x0) {
      puVar4 = puVar7 + 5;
    }
    memcpy(puVar4,puVar6,lVar9 << 3);
  }
  *(undefined4 *)(puVar7 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar7 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar7 + 0x10) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)puVar7 + 0x84) = uStack_50._4_4_;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar2 = *(undefined4 *)(param_1 + 0x1c8);
  uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x1c0) + 0x10);
  puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar7 + 5;
  if ((undefined8 *)param_2[1] < puVar4) {
    FUN_140023dd8(param_2,0x30);
    puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar7 + 5;
  }
  *param_2 = (ulonglong)puVar4;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar7;
  param_2[6] = (ulonglong)(puVar7 + 1);
  puVar7[1] = 0;
  *puVar7 = &PTR_LAB_14a29b380;
  puVar7[2] = uVar3;
  *(undefined4 *)(puVar7 + 3) = uVar2;
  *(undefined4 *)((longlong)puVar7 + 0x1c) = uVar2;
  *(undefined4 *)(puVar7 + 4) = uVar2;
  *(undefined4 *)((longlong)puVar7 + 0x24) = uVar2;
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14321c842 FUN_14321c842 body=38 status=ok
// SIG undefined FUN_14321c842(void)

undefined8 FUN_14321c842(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14321c868 FUN_14321c868 body=219 status=ok
// SIG undefined FUN_14321c868(void)

void FUN_14321c868(longlong param_1,ulonglong *param_2)

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
  FUN_14321c96a(param_1,param_2);
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



// FUNCTION 14321c944 FUN_14321c944 body=38 status=ok
// SIG undefined FUN_14321c944(void)

undefined8 FUN_14321c944(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14321c96a FUN_14321c96a body=764 status=ok
// SIG undefined FUN_14321c96a(void)

void FUN_14321c96a(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  size_t _Size;
  undefined1 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [8];
  undefined1 *local_d0;
  ulonglong local_c8;
  undefined1 local_c0 [64];
  undefined1 *local_80;
  ulonglong local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  iVar8 = 0;
  local_d0 = (undefined1 *)0x0;
  local_c8 = 0x800000000;
  local_80 = (undefined1 *)0x0;
  local_78 = 0x800000000;
  local_70 = 0;
  uStack_68 = 0;
  lVar9 = *(longlong *)(param_1 + 0x18);
  iVar2 = *(int *)(lVar9 + 0x78);
  if (iVar2 != 0) {
    do {
      uVar5 = (ulonglong)
              *(ushort *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x70) + (longlong)iVar8 * 4)
      ;
      if ((*(longlong *)(*(longlong *)(param_1 + 0x10) + uVar5) != 0) &&
         ((*(byte *)(*(longlong *)(param_1 + 0x10) + 8 + uVar5) & 2) != 0)) {
        FUN_144b1c300(local_d8);
      }
      iVar8 = iVar8 + 1;
    } while (iVar2 != iVar8);
    lVar9 = *(longlong *)(param_1 + 0x18);
  }
  iVar2 = *(int *)(lVar9 + 0x68);
  if (iVar2 != 0) {
    iVar8 = 0;
    do {
      uVar5 = (ulonglong)
              *(ushort *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x60) + (longlong)iVar8 * 4)
      ;
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x10) + uVar5);
      if ((lVar9 != 0) && ((*(byte *)(*(longlong *)(param_1 + 0x10) + 8 + uVar5) & 2) != 0)) {
        FUN_144b1c300(local_d8,*(undefined8 *)(lVar9 + 0x10));
      }
      iVar8 = iVar8 + 1;
    } while (iVar2 != iVar8);
  }
  puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar7 + 0x11;
  if ((undefined8 *)param_2[1] < puVar4) {
    FUN_140023dd8(param_2,0x90);
    puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar7 + 0x11;
  }
  *param_2 = (ulonglong)puVar4;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar7;
  param_2[6] = (ulonglong)(puVar7 + 1);
  puVar7[1] = 0;
  *puVar7 = &PTR_FUN_14a1fb978;
  puVar7[3] = 0;
  _Size = (size_t)(int)local_c8;
  *(int *)(puVar7 + 4) = (int)local_c8;
  if (_Size == 0) {
    *(undefined4 *)((longlong)puVar7 + 0x24) = 8;
  }
  else {
    puVar6 = local_d8;
    if (local_d0 != (undefined1 *)0x0) {
      puVar6 = local_d0;
    }
    FUN_1446fe144(puVar7 + 2,local_c8 & 0xffffffff,0);
    puVar4 = (undefined8 *)puVar7[3];
    if ((undefined8 *)puVar7[3] == (undefined8 *)0x0) {
      puVar4 = puVar7 + 2;
    }
    memcpy(puVar4,puVar6,_Size);
  }
  puVar7[0xd] = 0;
  lVar9 = (longlong)(int)local_78;
  *(int *)(puVar7 + 0xe) = (int)local_78;
  if (lVar9 == 0) {
    *(undefined4 *)((longlong)puVar7 + 0x74) = 8;
  }
  else {
    puVar6 = local_80;
    if (local_80 == (undefined1 *)0x0) {
      puVar6 = local_c0;
    }
    FUN_1446fe1b8(puVar7 + 5,local_78 & 0xffffffff,0);
    puVar4 = (undefined8 *)puVar7[0xd];
    if ((undefined8 *)puVar7[0xd] == (undefined8 *)0x0) {
      puVar4 = puVar7 + 5;
    }
    memcpy(puVar4,puVar6,lVar9 << 3);
  }
  *(undefined4 *)(puVar7 + 0xf) = local_70;
  *(undefined4 *)((longlong)puVar7 + 0x7c) = uStack_6c;
  *(undefined4 *)(puVar7 + 0x10) = (undefined4)uStack_68;
  *(undefined4 *)((longlong)puVar7 + 0x84) = uStack_68._4_4_;
  if (local_80 != (undefined1 *)0x0) {
    FUN_1400020a8(local_80);
  }
  if (local_d0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar1 = *(undefined4 *)(param_1 + 0x1c8);
  uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x1c0) + 0x10);
  puVar7 = (undefined8 *)(*param_2 + 0xf & 0xfffffffffffffff0);
  puVar4 = puVar7 + 6;
  if ((undefined8 *)param_2[1] < puVar4) {
    FUN_140023dd8(param_2,0x40);
    puVar7 = (undefined8 *)(*param_2 + 0xf & 0xfffffffffffffff0);
    puVar4 = puVar7 + 6;
  }
  *param_2 = (ulonglong)puVar4;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar7;
  param_2[6] = (ulonglong)(puVar7 + 1);
  puVar7[1] = 0;
  *puVar7 = &PTR_LAB_14a38be38;
  puVar7[2] = uVar3;
  *(undefined4 *)(puVar7 + 4) = uVar1;
  *(undefined4 *)((longlong)puVar7 + 0x24) = uVar1;
  *(undefined4 *)(puVar7 + 5) = uVar1;
  *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar1;
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14321cc82 FUN_14321cc82 body=31 status=ok
// SIG undefined FUN_14321cc82(void)

undefined8 FUN_14321cc82(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14321cca2 FUN_14321cca2 body=38 status=ok
// SIG undefined FUN_14321cca2(void)

undefined8 FUN_14321cca2(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14321ccc8 FUN_14321ccc8 body=219 status=ok
// SIG undefined FUN_14321ccc8(void)

void FUN_14321ccc8(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1d8);
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
  FUN_14321cdca(param_1,param_2);
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



// FUNCTION 14321cda4 FUN_14321cda4 body=38 status=ok
// SIG undefined FUN_14321cda4(void)

undefined8 FUN_14321cda4(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14321cdca FUN_14321cdca body=734 status=ok
// SIG undefined FUN_14321cdca(void)

void FUN_14321cdca(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  size_t _Size;
  undefined1 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_e8 [40];
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  ulonglong local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  ulonglong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  iVar10 = 0;
  local_b8 = (undefined1 *)0x0;
  local_b0 = 0x800000000;
  local_68 = (undefined1 *)0x0;
  local_60 = 0x800000000;
  local_58 = 0;
  uStack_50 = 0;
  lVar11 = *(longlong *)(param_1 + 0x18);
  iVar1 = *(int *)(lVar11 + 0x78);
  if (iVar1 != 0) {
    do {
      uVar7 = (ulonglong)
              *(ushort *)
               (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x70) + (longlong)iVar10 * 4);
      if ((*(longlong *)(*(longlong *)(param_1 + 0x10) + uVar7) != 0) &&
         ((*(byte *)(*(longlong *)(param_1 + 0x10) + 8 + uVar7) & 2) != 0)) {
        FUN_144b1c300(local_c0);
      }
      iVar10 = iVar10 + 1;
    } while (iVar1 != iVar10);
    lVar11 = *(longlong *)(param_1 + 0x18);
  }
  iVar1 = *(int *)(lVar11 + 0x68);
  if (iVar1 != 0) {
    iVar10 = 0;
    do {
      uVar7 = (ulonglong)
              *(ushort *)
               (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x60) + (longlong)iVar10 * 4);
      lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x10) + uVar7);
      if ((lVar11 != 0) && ((*(byte *)(*(longlong *)(param_1 + 0x10) + 8 + uVar7) & 2) != 0)) {
        FUN_144b1c300(local_c0,*(undefined8 *)(lVar11 + 0x10));
      }
      iVar10 = iVar10 + 1;
    } while (iVar1 != iVar10);
  }
  puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar9 + 0x11;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x90);
    puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar9 + 0x11;
  }
  *param_2 = (ulonglong)puVar6;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar9;
  param_2[6] = (ulonglong)(puVar9 + 1);
  puVar9[1] = 0;
  *puVar9 = &PTR_FUN_14a1fb978;
  puVar9[3] = 0;
  _Size = (size_t)(int)local_b0;
  *(int *)(puVar9 + 4) = (int)local_b0;
  if (_Size == 0) {
    *(undefined4 *)((longlong)puVar9 + 0x24) = 8;
  }
  else {
    puVar8 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar8 = local_b8;
    }
    FUN_1446fe144(puVar9 + 2,local_b0 & 0xffffffff,0);
    puVar6 = (undefined8 *)puVar9[3];
    if ((undefined8 *)puVar9[3] == (undefined8 *)0x0) {
      puVar6 = puVar9 + 2;
    }
    memcpy(puVar6,puVar8,_Size);
  }
  puVar9[0xd] = 0;
  lVar11 = (longlong)(int)local_60;
  *(int *)(puVar9 + 0xe) = (int)local_60;
  if (lVar11 == 0) {
    *(undefined4 *)((longlong)puVar9 + 0x74) = 8;
  }
  else {
    puVar8 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar8 = local_a8;
    }
    FUN_1446fe1b8(puVar9 + 5,local_60 & 0xffffffff,0);
    puVar6 = (undefined8 *)puVar9[0xd];
    if ((undefined8 *)puVar9[0xd] == (undefined8 *)0x0) {
      puVar6 = puVar9 + 5;
    }
    memcpy(puVar6,puVar8,lVar11 << 3);
  }
  *(undefined4 *)(puVar9 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar9 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar9 + 0x10) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)puVar9 + 0x84) = uStack_50._4_4_;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x1c0) + 0x10);
  puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar9 + 5;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x30);
    puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar9 + 5;
  }
  *param_2 = (ulonglong)puVar6;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar9;
  param_2[6] = (ulonglong)(puVar9 + 1);
  puVar9[1] = 0;
  *puVar9 = &PTR_LAB_14a29b380;
  puVar9[2] = uVar2;
  uVar3 = *(undefined4 *)(param_1 + 0x1cc);
  uVar4 = *(undefined4 *)(param_1 + 0x1d0);
  uVar5 = *(undefined4 *)(param_1 + 0x1d4);
  *(undefined4 *)(puVar9 + 3) = *(undefined4 *)(param_1 + 0x1c8);
  *(undefined4 *)((longlong)puVar9 + 0x1c) = uVar3;
  *(undefined4 *)(puVar9 + 4) = uVar4;
  *(undefined4 *)((longlong)puVar9 + 0x24) = uVar5;
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14321d0b6 FUN_14321d0b6 body=38 status=ok
// SIG undefined FUN_14321d0b6(void)

undefined8 FUN_14321d0b6(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14321d0dc FUN_14321d0dc body=219 status=ok
// SIG undefined FUN_14321d0dc(void)

void FUN_14321d0dc(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1e0);
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
  FUN_14321d1de(param_1,param_2);
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



// FUNCTION 14321d1b8 FUN_14321d1b8 body=38 status=ok
// SIG undefined FUN_14321d1b8(void)

undefined8 FUN_14321d1b8(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14321d1de FUN_14321d1de body=734 status=ok
// SIG undefined FUN_14321d1de(void)

void FUN_14321d1de(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  size_t _Size;
  undefined1 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_e8 [40];
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  ulonglong local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  ulonglong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  iVar10 = 0;
  local_b8 = (undefined1 *)0x0;
  local_b0 = 0x800000000;
  local_68 = (undefined1 *)0x0;
  local_60 = 0x800000000;
  local_58 = 0;
  uStack_50 = 0;
  lVar11 = *(longlong *)(param_1 + 0x18);
  iVar1 = *(int *)(lVar11 + 0x78);
  if (iVar1 != 0) {
    do {
      uVar7 = (ulonglong)
              *(ushort *)
               (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x70) + (longlong)iVar10 * 4);
      if ((*(longlong *)(*(longlong *)(param_1 + 0x10) + uVar7) != 0) &&
         ((*(byte *)(*(longlong *)(param_1 + 0x10) + 8 + uVar7) & 2) != 0)) {
        FUN_144b1c300(local_c0);
      }
      iVar10 = iVar10 + 1;
    } while (iVar1 != iVar10);
    lVar11 = *(longlong *)(param_1 + 0x18);
  }
  iVar1 = *(int *)(lVar11 + 0x68);
  if (iVar1 != 0) {
    iVar10 = 0;
    do {
      uVar7 = (ulonglong)
              *(ushort *)
               (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x60) + (longlong)iVar10 * 4);
      lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x10) + uVar7);
      if ((lVar11 != 0) && ((*(byte *)(*(longlong *)(param_1 + 0x10) + 8 + uVar7) & 2) != 0)) {
        FUN_144b1c300(local_c0,*(undefined8 *)(lVar11 + 0x10));
      }
      iVar10 = iVar10 + 1;
    } while (iVar1 != iVar10);
  }
  puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar9 + 0x11;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x90);
    puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar9 + 0x11;
  }
  *param_2 = (ulonglong)puVar6;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar9;
  param_2[6] = (ulonglong)(puVar9 + 1);
  puVar9[1] = 0;
  *puVar9 = &PTR_FUN_14a1fb978;
  puVar9[3] = 0;
  _Size = (size_t)(int)local_b0;
  *(int *)(puVar9 + 4) = (int)local_b0;
  if (_Size == 0) {
    *(undefined4 *)((longlong)puVar9 + 0x24) = 8;
  }
  else {
    puVar8 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar8 = local_b8;
    }
    FUN_1446fe144(puVar9 + 2,local_b0 & 0xffffffff,0);
    puVar6 = (undefined8 *)puVar9[3];
    if ((undefined8 *)puVar9[3] == (undefined8 *)0x0) {
      puVar6 = puVar9 + 2;
    }
    memcpy(puVar6,puVar8,_Size);
  }
  puVar9[0xd] = 0;
  lVar11 = (longlong)(int)local_60;
  *(int *)(puVar9 + 0xe) = (int)local_60;
  if (lVar11 == 0) {
    *(undefined4 *)((longlong)puVar9 + 0x74) = 8;
  }
  else {
    puVar8 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar8 = local_a8;
    }
    FUN_1446fe1b8(puVar9 + 5,local_60 & 0xffffffff,0);
    puVar6 = (undefined8 *)puVar9[0xd];
    if ((undefined8 *)puVar9[0xd] == (undefined8 *)0x0) {
      puVar6 = puVar9 + 5;
    }
    memcpy(puVar6,puVar8,lVar11 << 3);
  }
  *(undefined4 *)(puVar9 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar9 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar9 + 0x10) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)puVar9 + 0x84) = uStack_50._4_4_;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x1c8) + 0x10);
  puVar9 = (undefined8 *)(*param_2 + 0xf & 0xfffffffffffffff0);
  puVar6 = puVar9 + 6;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x40);
    puVar9 = (undefined8 *)(*param_2 + 0xf & 0xfffffffffffffff0);
    puVar6 = puVar9 + 6;
  }
  *param_2 = (ulonglong)puVar6;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar9;
  param_2[6] = (ulonglong)(puVar9 + 1);
  puVar9[1] = 0;
  *puVar9 = &PTR_LAB_14a38be38;
  puVar9[2] = uVar2;
  uVar3 = *(undefined4 *)(param_1 + 0x1d4);
  uVar4 = *(undefined4 *)(param_1 + 0x1d8);
  uVar5 = *(undefined4 *)(param_1 + 0x1dc);
  *(undefined4 *)(puVar9 + 4) = *(undefined4 *)(param_1 + 0x1d0);
  *(undefined4 *)((longlong)puVar9 + 0x24) = uVar3;
  *(undefined4 *)(puVar9 + 5) = uVar4;
  *(undefined4 *)((longlong)puVar9 + 0x2c) = uVar5;
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14321d4be FUN_14321d4be body=31 status=ok
// SIG undefined FUN_14321d4be(void)

undefined8 FUN_14321d4be(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14321d4de FUN_14321d4de body=2889 status=ok
// SIG undefined FUN_14321d4de(void)

void FUN_14321d4de(longlong param_1,ulonglong *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  uint uVar5;
  wchar_t *pwVar6;
  undefined8 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auVar13 [4];
  size_t _Size;
  wchar_t *_Dest;
  byte bVar14;
  undefined8 *puVar15;
  int iVar16;
  longlong lVar17;
  undefined1 auStack_3b8 [32];
  wchar_t *local_398;
  undefined8 local_390;
  undefined8 uStack_388;
  char *local_380;
  undefined4 local_378;
  undefined4 local_370;
  longlong *local_368;
  undefined1 local_360;
  undefined1 auStack_35d [8];
  undefined8 uStack_355;
  undefined4 uStack_34d;
  byte bStack_349;
  longlong local_348 [24];
  undefined8 local_288;
  undefined8 uStack_280;
  undefined1 local_278;
  undefined8 local_274;
  undefined4 local_26c;
  undefined4 local_268;
  undefined4 local_264;
  undefined1 local_260 [7];
  undefined1 auStack_259 [5];
  undefined1 auStack_254 [3];
  undefined1 auStack_251 [5];
  byte abStack_24c [3];
  undefined1 uStack_249;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  longlong local_218;
  longlong lStack_210;
  longlong local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  int local_1f0;
  undefined4 uStack_1ec;
  int iStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined8 local_1cc;
  undefined8 uStack_1c4;
  undefined8 local_1bc;
  undefined5 uStack_1b4;
  undefined3 uStack_1af;
  undefined5 uStack_1ac;
  undefined8 uStack_1a7;
  undefined1 local_198 [8];
  undefined1 auStack_190 [8];
  undefined1 local_188 [4];
  byte bStack_184;
  undefined3 uStack_183;
  uint local_180;
  undefined8 uStack_178;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ushort local_98;
  undefined8 local_90;
  ushort local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  iVar16 = 0;
  uStack_240 = (undefined8 *)0x0;
  local_238 = 0x800000000;
  local_1f0 = 0;
  uStack_1ec = 0;
  iStack_1e8 = 0;
  uStack_1e4 = 8;
  uStack_1e0 = 0;
  uStack_1d8 = 0;
  uStack_1d4 = 0;
  lVar17 = *(longlong *)(param_1 + 0x18);
  iVar2 = *(int *)(lVar17 + 0x78);
  if (iVar2 != 0) {
    do {
      uVar9 = (ulonglong)
              *(ushort *)
               (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x70) + (longlong)iVar16 * 4);
      if ((*(longlong *)(*(longlong *)(param_1 + 0x10) + uVar9) != 0) &&
         ((*(byte *)(*(longlong *)(param_1 + 0x10) + 8 + uVar9) & 2) != 0)) {
        FUN_144b1c300(&local_248);
      }
      iVar16 = iVar16 + 1;
    } while (iVar2 != iVar16);
    lVar17 = *(longlong *)(param_1 + 0x18);
  }
  iVar2 = *(int *)(lVar17 + 0x68);
  if (iVar2 != 0) {
    iVar16 = 0;
    do {
      uVar9 = (ulonglong)
              *(ushort *)
               (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x60) + (longlong)iVar16 * 4);
      lVar17 = *(longlong *)(*(longlong *)(param_1 + 0x10) + uVar9);
      if ((lVar17 != 0) && ((*(byte *)(*(longlong *)(param_1 + 0x10) + 8 + uVar9) & 2) != 0)) {
        FUN_144b1c300(&local_248,*(undefined8 *)(lVar17 + 0x10));
      }
      iVar16 = iVar16 + 1;
    } while (iVar2 != iVar16);
  }
  puVar15 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar15 + 0x11;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x90);
    puVar15 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar15 + 0x11;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar15;
  param_2[6] = (ulonglong)(puVar15 + 1);
  puVar15[1] = 0;
  *puVar15 = &PTR_FUN_14a1fb978;
  puVar15[3] = 0;
  _Size = (size_t)(int)local_238;
  *(int *)(puVar15 + 4) = (int)local_238;
  if (_Size == 0) {
    *(undefined4 *)((longlong)puVar15 + 0x24) = 8;
  }
  else {
    puVar7 = &local_248;
    if (uStack_240 != (undefined8 *)0x0) {
      puVar7 = uStack_240;
    }
    FUN_1446fe144(puVar15 + 2,local_238 & 0xffffffff,0);
    puVar10 = (undefined8 *)puVar15[3];
    if ((undefined8 *)puVar15[3] == (undefined8 *)0x0) {
      puVar10 = puVar15 + 2;
    }
    memcpy(puVar10,puVar7,_Size);
  }
  puVar15[0xd] = 0;
  lVar17 = (longlong)iStack_1e8;
  puVar7 = (undefined8 *)CONCAT44(uStack_1ec,local_1f0);
  *(int *)(puVar15 + 0xe) = iStack_1e8;
  if (lVar17 == 0) {
    *(undefined4 *)((longlong)puVar15 + 0x74) = 8;
  }
  else {
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = &uStack_230;
    }
    FUN_1446fe1b8(puVar15 + 5,iStack_1e8,0);
    puVar10 = (undefined8 *)puVar15[0xd];
    if ((undefined8 *)puVar15[0xd] == (undefined8 *)0x0) {
      puVar10 = puVar15 + 5;
    }
    memcpy(puVar10,puVar7,lVar17 << 3);
    puVar7 = (undefined8 *)CONCAT44(uStack_1ec,local_1f0);
  }
  *(undefined4 *)(puVar15 + 0xf) = uStack_1e0;
  *(undefined4 *)((longlong)puVar15 + 0x7c) = uStack_1dc;
  *(undefined4 *)(puVar15 + 0x10) = uStack_1d8;
  *(undefined4 *)((longlong)puVar15 + 0x84) = uStack_1d4;
  if (puVar7 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar7);
  }
  if (uStack_240 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x20c) == '\x01') {
    lVar17 = 0x15;
    do {
      *(undefined8 *)(auStack_35d + lVar17) = 0;
      *(undefined8 *)((longlong)&uStack_355 + lVar17) = 0;
      *(undefined4 *)((longlong)&uStack_34d + lVar17) = 0xffffffff;
      (&bStack_349 + lVar17)[0] = 0;
      (&bStack_349 + lVar17)[1] = 0;
      lVar17 = lVar17 + 0x18;
    } while (lVar17 != 0xd5);
    local_274 = 0;
    local_288 = 0;
    uStack_280 = 0;
    local_278 = 0;
    _local_260 = 0;
    auStack_259._1_4_ = auStack_259._1_4_ & 0xffffff00;
    _auStack_254 = 0;
    auStack_251._1_3_ = 0;
    local_26c = 0;
    local_268 = *(undefined4 *)(param_1 + 0x1e8);
    local_264 = *(undefined4 *)(param_1 + 0x1ec);
    _Dest = (wchar_t *)(*param_2 + 1 & 0xfffffffffffffffe);
    pwVar6 = _Dest + 0x11;
    if ((wchar_t *)param_2[1] < pwVar6) {
      FUN_140023dd8(param_2,0x24);
      _Dest = (wchar_t *)(*param_2 + 1 & 0xfffffffffffffffe);
      pwVar6 = _Dest + 0x11;
    }
    *param_2 = (ulonglong)pwVar6;
    wcscpy(_Dest,L"RasterizeToRects");
    puVar15 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar15 + 0x23;
    if ((undefined8 *)param_2[1] < puVar7) {
      FUN_140023dd8(param_2,0x120);
      puVar15 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar7 = puVar15 + 0x23;
    }
    *param_2 = (ulonglong)puVar7;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar15;
    param_2[6] = (ulonglong)(puVar15 + 1);
    puVar15[1] = 0;
    *puVar15 = &PTR_FUN_14a217b50;
    memcpy(puVar15 + 2,local_348,0xe8);
    puVar15[0x1f] = 0;
    puVar15[0x20] = CONCAT44(_auStack_254,auStack_259._1_4_);
    *(uint *)((longlong)puVar15 + 0x107) = CONCAT31(auStack_251._1_3_,auStack_251[0]);
    puVar15[0x22] = _Dest;
    lVar17 = 0x11;
    do {
      *(undefined8 *)(local_260 + lVar17 + 7) = 0;
      *(undefined8 *)(auStack_254 + lVar17 + 3) = 0xffffffff00000000;
      *(undefined2 *)(&uStack_249 + lVar17) = 0;
      lVar17 = lVar17 + 0x18;
    } while (lVar17 != 0xd1);
    _local_188 = _local_188 & 0xffffff0000000000;
    lVar17 = 0xd9;
    do {
      *(undefined8 *)(local_260 + lVar17 + 7) = 0;
      *(undefined8 *)(auStack_254 + lVar17 + 3) = 0xffffffff00000000;
      *(undefined2 *)(&uStack_249 + lVar17) = 0;
      lVar17 = lVar17 + 0x18;
    } while (lVar17 != 0x199);
    local_c0 = 0;
    local_90 = 0;
    local_88 = local_88 & 0xff;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = local_98 & 0xff00;
    lVar17 = 0x15;
    do {
      if (*(longlong *)(auStack_35d + lVar17) == 0) {
        auVar13 = local_188;
        break;
      }
      *(longlong *)(local_260 + lVar17 + 3) = *(longlong *)(auStack_35d + lVar17);
      bVar1 = *(byte *)((longlong)local_348 + lVar17);
      bVar14 = bVar1 >> 2;
      auStack_251[lVar17 + 4] = bVar14;
      abStack_24c[lVar17] = bVar1 & 3;
      *(undefined4 *)(auStack_254 + lVar17 + 3) = *(undefined4 *)((longlong)&uStack_34d + lVar17);
      *(uint *)(auStack_259 + lVar17 + 4) = (uint)(&bStack_349)[lVar17];
      auVar13 = (undefined1  [4])((int)local_188 + 1);
      bVar1 = bStack_184 | bVar14 == 2;
      _local_188 = CONCAT14(bVar1,auVar13);
      lVar8 = *(longlong *)((longlong)&uStack_355 + lVar17);
      if (lVar8 != 0) {
        local_c0 = 1;
        uVar4 = *(undefined8 *)(auStack_259 + lVar17 + 4);
        *(undefined8 *)(local_198 + lVar17 + 3) = *(undefined8 *)(local_260 + lVar17 + 3);
        *(undefined8 *)(auStack_190 + lVar17 + 3) = uVar4;
        *(undefined8 *)(local_188 + lVar17 + 3) = *(undefined8 *)(auStack_251 + lVar17 + 4);
        *(longlong *)(local_198 + lVar17 + 3) = lVar8;
      }
      lVar17 = lVar17 + 0x18;
    } while (lVar17 != 0xd5);
    local_98 = 0;
    local_90 = 0;
    local_88 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    if (0 < (int)auVar13) {
      memcpy(param_2 + 0x15,&local_248,(ulonglong)(uint)auVar13 * 0x18);
    }
    *(undefined1 (*) [4])(param_2 + 0x14) = auVar13;
    param_2[0x2d] = 0;
    param_2[0x2e] = 0;
    *(undefined1 *)((longlong)param_2 + 0x17a) = 0;
    *(undefined2 *)(param_2 + 0x2f) = 0;
    *(byte *)((longlong)param_2 + 0x17b) = *(byte *)((longlong)param_2 + 0x17b) & 0xfc | 2;
  }
  local_208 = 0;
  uStack_200 = 0;
  local_218 = 0;
  lStack_210 = 0;
  local_228 = 0;
  uStack_220 = 0;
  local_238 = 0;
  uStack_230 = 0;
  local_248 = 0;
  uStack_240 = (undefined8 *)0x0;
  local_1f8 = 0;
  uStack_1ec = 0;
  iStack_1e8 = 0;
  uStack_1e4 = 0;
  uStack_1e0 = 0;
  uStack_1dc = 0;
  uStack_1d8 = 0;
  uStack_1d4 = 0;
  uStack_1d0 = 0;
  local_1cc = 0;
  uStack_1c4 = 0;
  local_1bc = 0;
  uStack_1b4 = 0;
  uStack_1af = 0;
  uStack_1ac = 0;
  uStack_1a7 = 0;
  local_198 = (undefined1  [8])0x0;
  auStack_190 = (undefined1  [8])0x0;
  _local_188 = 0;
  local_180 = 1;
  uStack_178 = 0;
  FUN_144b0e33a(param_2);
  iVar2 = *(int *)(param_1 + 0x1ec);
  iVar16 = *(int *)(param_1 + 0x1e8);
  puVar15 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar15 + 5;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x30);
    puVar15 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar15 + 5;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar15;
  param_2[6] = (ulonglong)(puVar15 + 1);
  puVar15[1] = 0;
  puVar15[2] = 0;
  *puVar15 = &PTR_LAB_14a1e7fc8;
  *(undefined4 *)(puVar15 + 3) = 0;
  *(float *)((longlong)puVar15 + 0x1c) = (float)iVar16;
  *(float *)(puVar15 + 4) = (float)iVar2;
  *(undefined4 *)((longlong)puVar15 + 0x24) = 0x3f800000;
  local_218 = *(longlong *)(param_1 + 0x1f0);
  if (*(longlong *)(param_1 + 0x1f0) == 0) {
    local_218 = DAT_14c9c0d50;
  }
  lStack_210 = *(longlong *)(param_1 + 0x1f8);
  if (*(longlong *)(param_1 + 0x1f8) == 0) {
    lStack_210 = DAT_14c9c0db0;
  }
  local_208 = *(longlong *)(param_1 + 0x200);
  if (*(longlong *)(param_1 + 0x200) == 0) {
    local_208 = DAT_14c9c0d98;
  }
  local_1f0 = (uint)DAT_14ca84e08 * 5;
  local_248 = DAT_14ca94e10;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar17 = 0;
  }
  else {
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar17 = *(longlong *)(*(longlong *)(lVar8 + 0x50) + lVar11 * 8);
    if (lVar17 == 0) {
      lVar17 = FUN_1400bafc2(lVar8,lVar11,1);
    }
  }
  uStack_240 = (undefined8 *)lVar17;
  if (*(longlong *)(param_1 + 0x1d8) == 0) {
    lVar17 = 0;
  }
  else {
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x1e0) + 8);
    lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1d8) + 0xd4);
    lVar17 = *(longlong *)(*(longlong *)(lVar8 + 0x50) + lVar11 * 8);
    if (lVar17 == 0) {
      lVar17 = FUN_1400bafc2(lVar8,lVar11,1);
    }
  }
  uVar3 = *(undefined4 *)(param_1 + 0x208);
  local_238 = lVar17;
  lVar17 = FUN_140028f18(param_2);
  if ((lVar17 != 0) && ((local_180 & 0x10000000) == 0)) {
    *(undefined4 *)(param_2 + 0x35) = (undefined4)local_228;
    *(undefined4 *)((longlong)param_2 + 0x1ac) = local_228._4_4_;
    *(undefined4 *)(param_2 + 0x36) = (undefined4)uStack_220;
    *(undefined4 *)((longlong)param_2 + 0x1b4) = uStack_220._4_4_;
    *(int *)(param_2 + 0x33) = (int)local_238;
    *(undefined4 *)((longlong)param_2 + 0x19c) = local_238._4_4_;
    *(undefined4 *)(param_2 + 0x34) = (undefined4)uStack_230;
    *(undefined4 *)((longlong)param_2 + 0x1a4) = uStack_230._4_4_;
    *(undefined4 *)(param_2 + 0x31) = (undefined4)local_248;
    *(undefined4 *)((longlong)param_2 + 0x18c) = local_248._4_4_;
    *(undefined4 *)(param_2 + 0x32) = (undefined4)uStack_240;
    *(undefined4 *)((longlong)param_2 + 0x194) = uStack_240._4_4_;
    puVar15 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar15 + 4;
    if ((undefined8 *)param_2[1] < puVar7) {
      FUN_140023dd8(param_2,0x28);
      puVar15 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar7 = puVar15 + 4;
    }
    *param_2 = (ulonglong)puVar7;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar15;
    param_2[6] = (ulonglong)(puVar15 + 1);
    puVar15[1] = 0;
    *puVar15 = &PTR_LAB_14a37d348;
    puVar15[2] = lVar17;
    *(undefined4 *)(puVar15 + 3) = uVar3;
    *(undefined1 *)((longlong)puVar15 + 0x1c) = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x1b8);
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar17 = 0;
  }
  else {
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar17 = *(longlong *)(*(longlong *)(lVar8 + 0x50) + lVar11 * 8);
    if (lVar17 == 0) {
      lVar17 = FUN_1400bafc2(lVar8,lVar11,1);
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca008c0) && (FUN_144b3d300(&DAT_14ca008c0), DAT_14ca008c0 == -1)) {
    FUN_145c37638(local_348);
    uStack_355._5_1_ = 0;
    local_360 = 0;
    local_370 = 0x30;
    local_378 = 0x30;
    local_380 = "Unknown";
    local_390 = 0;
    uStack_388 = 0;
    local_398 = L"FParameters";
    stack0xfffffffffffffca8 = 0;
    local_368 = local_348;
    FUN_140b49562(&DAT_14ca00840,0,1);
    if (local_348[0] != 0) {
      FUN_1400020a8();
    }
    atexit((_func_5014 *)&LAB_14321e028);
    _Init_thread_footer(&DAT_14ca008c0);
  }
  local_398 = (wchar_t *)uVar4;
  FUN_1449cc26b(param_2,lVar17,*(undefined8 *)(param_1 + 0x1c8),&DAT_14ca00840);
  lVar17 = *(longlong *)(param_1 + 0x1b8);
  if (*(longlong *)(param_1 + 0x1d8) == 0) {
    lVar8 = 0;
  }
  else {
    lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x1e0) + 8);
    lVar12 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1d8) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar11 + 0x50) + lVar12 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar11,lVar12,1);
    }
  }
  FUN_14155d24c();
  local_398 = (wchar_t *)(lVar17 + 0x30);
  FUN_1449cc26b(param_2,lVar8,*(undefined8 *)(param_1 + 0x1d8),&DAT_14ca95f58);
  uVar5 = (uint)DAT_14ca84e08;
  uVar3 = *(undefined4 *)(*(longlong *)(param_1 + 0x1b8) + 0x24);
  puVar15 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar15 + 4;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x28);
    puVar15 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar15 + 4;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar15;
  param_2[6] = (ulonglong)(puVar15 + 1);
  puVar15[1] = 0;
  *puVar15 = &PTR_LAB_14a1fc200;
  *(undefined4 *)(puVar15 + 2) = 0;
  *(uint *)((longlong)puVar15 + 0x14) = 2 - uVar5;
  *(undefined4 *)(puVar15 + 3) = uVar3;
  if (*(char *)(param_1 + 0x20c) == '\x01') {
    if ((*(byte *)((longlong)param_2 + 0x17b) & 8) != 0) {
      (**(code **)(*DAT_14ca83900 + 0x2a0))(DAT_14ca83900,param_2,1);
      *(byte *)((longlong)param_2 + 0x17b) = *(byte *)((longlong)param_2 + 0x17b) & 0xf7;
    }
    puVar15 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar15 + 2;
    if ((undefined8 *)param_2[1] < puVar7) {
      FUN_140023dd8(param_2,0x18);
      puVar15 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar7 = puVar15 + 2;
    }
    *param_2 = (ulonglong)puVar7;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar15;
    param_2[6] = (ulonglong)(puVar15 + 1);
    puVar15[1] = 0;
    *puVar15 = &PTR_LAB_14a217b58;
    *(byte *)((longlong)param_2 + 0x17b) = *(byte *)((longlong)param_2 + 0x17b) & 0xfd;
    *(undefined2 *)(param_2 + 0x2f) = 0;
  }
  if ((local_80 ^ (ulonglong)auStack_3b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14321e040 FUN_14321e040 body=38 status=ok
// SIG undefined FUN_14321e040(void)

undefined8 FUN_14321e040(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14321e066 FUN_14321e066 body=596 status=ok
// SIG undefined FUN_14321e066(void)

void FUN_14321e066(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  size_t _Size;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined1 *local_b0;
  ulonglong local_a8;
  undefined1 local_a0 [64];
  undefined1 *local_60;
  ulonglong local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  iVar6 = 0;
  local_b0 = (undefined1 *)0x0;
  local_a8 = 0x800000000;
  local_60 = (undefined1 *)0x0;
  local_58 = 0x800000000;
  local_50 = 0;
  uStack_48 = 0;
  lVar5 = *(longlong *)(param_1 + 0x18);
  iVar1 = *(int *)(lVar5 + 0x78);
  if (iVar1 != 0) {
    do {
      uVar3 = (ulonglong)
              *(ushort *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x70) + (longlong)iVar6 * 4)
      ;
      if ((*(longlong *)(*(longlong *)(param_1 + 0x10) + uVar3) != 0) &&
         ((*(byte *)(*(longlong *)(param_1 + 0x10) + 8 + uVar3) & 2) != 0)) {
        FUN_144b1c300(local_b8);
      }
      iVar6 = iVar6 + 1;
    } while (iVar1 != iVar6);
    lVar5 = *(longlong *)(param_1 + 0x18);
  }
  iVar1 = *(int *)(lVar5 + 0x68);
  if (iVar1 != 0) {
    iVar6 = 0;
    do {
      uVar3 = (ulonglong)
              *(ushort *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x60) + (longlong)iVar6 * 4)
      ;
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x10) + uVar3);
      if ((lVar5 != 0) && ((*(byte *)(*(longlong *)(param_1 + 0x10) + 8 + uVar3) & 2) != 0)) {
        FUN_144b1c300(local_b8,*(undefined8 *)(lVar5 + 0x10));
      }
      iVar6 = iVar6 + 1;
    } while (iVar1 != iVar6);
  }
  puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar2 = puVar7 + 0x11;
  if ((undefined8 *)param_2[1] < puVar2) {
    FUN_140023dd8(param_2,0x90);
    puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar7 + 0x11;
  }
  *param_2 = (ulonglong)puVar2;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar7;
  param_2[6] = (ulonglong)(puVar7 + 1);
  puVar7[1] = 0;
  *puVar7 = &PTR_FUN_14a1fb978;
  puVar7[3] = 0;
  _Size = (size_t)(int)local_a8;
  *(int *)(puVar7 + 4) = (int)local_a8;
  if (_Size == 0) {
    *(undefined4 *)((longlong)puVar7 + 0x24) = 8;
  }
  else {
    puVar4 = local_b8;
    if (local_b0 != (undefined1 *)0x0) {
      puVar4 = local_b0;
    }
    FUN_1446fe144(puVar7 + 2,local_a8 & 0xffffffff,0);
    puVar2 = (undefined8 *)puVar7[3];
    if ((undefined8 *)puVar7[3] == (undefined8 *)0x0) {
      puVar2 = puVar7 + 2;
    }
    memcpy(puVar2,puVar4,_Size);
  }
  puVar7[0xd] = 0;
  lVar5 = (longlong)(int)local_58;
  *(int *)(puVar7 + 0xe) = (int)local_58;
  if (lVar5 == 0) {
    *(undefined4 *)((longlong)puVar7 + 0x74) = 8;
  }
  else {
    puVar4 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      puVar4 = local_a0;
    }
    FUN_1446fe1b8(puVar7 + 5,local_58 & 0xffffffff,0);
    puVar2 = (undefined8 *)puVar7[0xd];
    if ((undefined8 *)puVar7[0xd] == (undefined8 *)0x0) {
      puVar2 = puVar7 + 5;
    }
    memcpy(puVar2,puVar4,lVar5 << 3);
  }
  *(undefined4 *)(puVar7 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar7 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar7 + 0x10) = (undefined4)uStack_48;
  *(undefined4 *)((longlong)puVar7 + 0x84) = uStack_48._4_4_;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (local_b0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14321e2c8 FUN_14321e2c8 body=38 status=ok
// SIG undefined FUN_14321e2c8(void)

undefined8 FUN_14321e2c8(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14321e2ee FUN_14321e2ee body=829 status=ok
// SIG undefined FUN_14321e2ee(void)

void FUN_14321e2ee(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  size_t _Size;
  undefined1 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined4 local_e0;
  undefined1 local_d8;
  undefined4 local_d0;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  ulonglong local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  ulonglong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  iVar8 = 0;
  local_b8 = (undefined1 *)0x0;
  local_b0 = 0x800000000;
  local_68 = (undefined1 *)0x0;
  local_60 = 0x800000000;
  local_58 = 0;
  uStack_50 = 0;
  lVar9 = *(longlong *)(param_1 + 0x18);
  iVar1 = *(int *)(lVar9 + 0x78);
  if (iVar1 != 0) {
    do {
      uVar5 = (ulonglong)
              *(ushort *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x70) + (longlong)iVar8 * 4)
      ;
      if ((*(longlong *)(*(longlong *)(param_1 + 0x10) + uVar5) != 0) &&
         ((*(byte *)(*(longlong *)(param_1 + 0x10) + 8 + uVar5) & 2) != 0)) {
        FUN_144b1c300(local_c0);
      }
      iVar8 = iVar8 + 1;
    } while (iVar1 != iVar8);
    lVar9 = *(longlong *)(param_1 + 0x18);
  }
  iVar1 = *(int *)(lVar9 + 0x68);
  if (iVar1 != 0) {
    iVar8 = 0;
    do {
      uVar5 = (ulonglong)
              *(ushort *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x60) + (longlong)iVar8 * 4)
      ;
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x10) + uVar5);
      if ((lVar9 != 0) && ((*(byte *)(*(longlong *)(param_1 + 0x10) + 8 + uVar5) & 2) != 0)) {
        FUN_144b1c300(local_c0,*(undefined8 *)(lVar9 + 0x10));
      }
      iVar8 = iVar8 + 1;
    } while (iVar1 != iVar8);
  }
  puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar7 + 0x11;
  if ((undefined8 *)param_2[1] < puVar4) {
    FUN_140023dd8(param_2,0x90);
    puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar7 + 0x11;
  }
  *param_2 = (ulonglong)puVar4;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar7;
  param_2[6] = (ulonglong)(puVar7 + 1);
  puVar7[1] = 0;
  *puVar7 = &PTR_FUN_14a1fb978;
  puVar7[3] = 0;
  _Size = (size_t)(int)local_b0;
  *(int *)(puVar7 + 4) = (int)local_b0;
  if (_Size == 0) {
    *(undefined4 *)((longlong)puVar7 + 0x24) = 8;
  }
  else {
    puVar6 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar6 = local_b8;
    }
    FUN_1446fe144(puVar7 + 2,local_b0 & 0xffffffff,0);
    puVar4 = (undefined8 *)puVar7[3];
    if ((undefined8 *)puVar7[3] == (undefined8 *)0x0) {
      puVar4 = puVar7 + 2;
    }
    memcpy(puVar4,puVar6,_Size);
  }
  puVar7[0xd] = 0;
  lVar9 = (longlong)(int)local_60;
  *(int *)(puVar7 + 0xe) = (int)local_60;
  if (lVar9 == 0) {
    *(undefined4 *)((longlong)puVar7 + 0x74) = 8;
  }
  else {
    puVar6 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar6 = local_a8;
    }
    FUN_1446fe1b8(puVar7 + 5,local_60 & 0xffffffff,0);
    puVar4 = (undefined8 *)puVar7[0xd];
    if ((undefined8 *)puVar7[0xd] == (undefined8 *)0x0) {
      puVar4 = puVar7 + 5;
    }
    memcpy(puVar4,puVar6,lVar9 << 3);
  }
  *(undefined4 *)(puVar7 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar7 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar7 + 0x10) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)puVar7 + 0x84) = uStack_50._4_4_;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  iVar1 = *(int *)(param_1 + 0x1dc);
  iVar8 = *(int *)(param_1 + 0x1d8);
  iVar2 = *(int *)(param_1 + 0x1d0);
  iVar3 = *(int *)(param_1 + 0x1d4);
  puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar7 + 5;
  if ((undefined8 *)param_2[1] < puVar4) {
    FUN_140023dd8(param_2,0x30);
    puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar7 + 5;
  }
  *param_2 = (ulonglong)puVar4;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar7;
  param_2[6] = (ulonglong)(puVar7 + 1);
  puVar7[1] = 0;
  *puVar7 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar7 + 2) = (float)iVar2;
  *(float *)((longlong)puVar7 + 0x14) = (float)iVar3;
  *(undefined4 *)(puVar7 + 3) = 0;
  *(float *)((longlong)puVar7 + 0x1c) = (float)iVar8;
  *(float *)(puVar7 + 4) = (float)iVar1;
  *(undefined4 *)((longlong)puVar7 + 0x24) = 0x3f800000;
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = 0;
  FUN_140d1dede(param_2,1,1,param_1 + 0x1c0);
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14321e62c FUN_14321e62c body=38 status=ok
// SIG undefined FUN_14321e62c(void)

undefined8 FUN_14321e62c(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14321e652 FUN_14321e652 body=596 status=ok
// SIG undefined FUN_14321e652(void)

void FUN_14321e652(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  size_t _Size;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined1 *local_b0;
  ulonglong local_a8;
  undefined1 local_a0 [64];
  undefined1 *local_60;
  ulonglong local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  iVar6 = 0;
  local_b0 = (undefined1 *)0x0;
  local_a8 = 0x800000000;
  local_60 = (undefined1 *)0x0;
  local_58 = 0x800000000;
  local_50 = 0;
  uStack_48 = 0;
  lVar5 = *(longlong *)(param_1 + 0x18);
  iVar1 = *(int *)(lVar5 + 0x78);
  if (iVar1 != 0) {
    do {
      uVar3 = (ulonglong)
              *(ushort *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x70) + (longlong)iVar6 * 4)
      ;
      if ((*(longlong *)(*(longlong *)(param_1 + 0x10) + uVar3) != 0) &&
         ((*(byte *)(*(longlong *)(param_1 + 0x10) + 8 + uVar3) & 2) != 0)) {
        FUN_144b1c300(local_b8);
      }
      iVar6 = iVar6 + 1;
    } while (iVar1 != iVar6);
    lVar5 = *(longlong *)(param_1 + 0x18);
  }
  iVar1 = *(int *)(lVar5 + 0x68);
  if (iVar1 != 0) {
    iVar6 = 0;
    do {
      uVar3 = (ulonglong)
              *(ushort *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x60) + (longlong)iVar6 * 4)
      ;
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x10) + uVar3);
      if ((lVar5 != 0) && ((*(byte *)(*(longlong *)(param_1 + 0x10) + 8 + uVar3) & 2) != 0)) {
        FUN_144b1c300(local_b8,*(undefined8 *)(lVar5 + 0x10));
      }
      iVar6 = iVar6 + 1;
    } while (iVar1 != iVar6);
  }
  puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar2 = puVar7 + 0x11;
  if ((undefined8 *)param_2[1] < puVar2) {
    FUN_140023dd8(param_2,0x90);
    puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar7 + 0x11;
  }
  *param_2 = (ulonglong)puVar2;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar7;
  param_2[6] = (ulonglong)(puVar7 + 1);
  puVar7[1] = 0;
  *puVar7 = &PTR_FUN_14a1fb978;
  puVar7[3] = 0;
  _Size = (size_t)(int)local_a8;
  *(int *)(puVar7 + 4) = (int)local_a8;
  if (_Size == 0) {
    *(undefined4 *)((longlong)puVar7 + 0x24) = 8;
  }
  else {
    puVar4 = local_b8;
    if (local_b0 != (undefined1 *)0x0) {
      puVar4 = local_b0;
    }
    FUN_1446fe144(puVar7 + 2,local_a8 & 0xffffffff,0);
    puVar2 = (undefined8 *)puVar7[3];
    if ((undefined8 *)puVar7[3] == (undefined8 *)0x0) {
      puVar2 = puVar7 + 2;
    }
    memcpy(puVar2,puVar4,_Size);
  }
  puVar7[0xd] = 0;
  lVar5 = (longlong)(int)local_58;
  *(int *)(puVar7 + 0xe) = (int)local_58;
  if (lVar5 == 0) {
    *(undefined4 *)((longlong)puVar7 + 0x74) = 8;
  }
  else {
    puVar4 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      puVar4 = local_a0;
    }
    FUN_1446fe1b8(puVar7 + 5,local_58 & 0xffffffff,0);
    puVar2 = (undefined8 *)puVar7[0xd];
    if ((undefined8 *)puVar7[0xd] == (undefined8 *)0x0) {
      puVar2 = puVar7 + 5;
    }
    memcpy(puVar2,puVar4,lVar5 << 3);
  }
  *(undefined4 *)(puVar7 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar7 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar7 + 0x10) = (undefined4)uStack_48;
  *(undefined4 *)((longlong)puVar7 + 0x84) = uStack_48._4_4_;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (local_b0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14321e8a8 FUN_14321e8a8 body=38 status=ok
// SIG undefined FUN_14321e8a8(void)

undefined8 FUN_14321e8a8(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14321e8ce FUN_14321e8ce body=596 status=ok
// SIG undefined FUN_14321e8ce(void)

void FUN_14321e8ce(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  size_t _Size;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined1 *local_b0;
  ulonglong local_a8;
  undefined1 local_a0 [64];
  undefined1 *local_60;
  ulonglong local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  iVar6 = 0;
  local_b0 = (undefined1 *)0x0;
  local_a8 = 0x800000000;
  local_60 = (undefined1 *)0x0;
  local_58 = 0x800000000;
  local_50 = 0;
  uStack_48 = 0;
  lVar5 = *(longlong *)(param_1 + 0x18);
  iVar1 = *(int *)(lVar5 + 0x78);
  if (iVar1 != 0) {
    do {
      uVar3 = (ulonglong)
              *(ushort *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x70) + (longlong)iVar6 * 4)
      ;
      if ((*(longlong *)(*(longlong *)(param_1 + 0x10) + uVar3) != 0) &&
         ((*(byte *)(*(longlong *)(param_1 + 0x10) + 8 + uVar3) & 2) != 0)) {
        FUN_144b1c300(local_b8);
      }
      iVar6 = iVar6 + 1;
    } while (iVar1 != iVar6);
    lVar5 = *(longlong *)(param_1 + 0x18);
  }
  iVar1 = *(int *)(lVar5 + 0x68);
  if (iVar1 != 0) {
    iVar6 = 0;
    do {
      uVar3 = (ulonglong)
              *(ushort *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x60) + (longlong)iVar6 * 4)
      ;
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x10) + uVar3);
      if ((lVar5 != 0) && ((*(byte *)(*(longlong *)(param_1 + 0x10) + 8 + uVar3) & 2) != 0)) {
        FUN_144b1c300(local_b8,*(undefined8 *)(lVar5 + 0x10));
      }
      iVar6 = iVar6 + 1;
    } while (iVar1 != iVar6);
  }
  puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar2 = puVar7 + 0x11;
  if ((undefined8 *)param_2[1] < puVar2) {
    FUN_140023dd8(param_2,0x90);
    puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar7 + 0x11;
  }
  *param_2 = (ulonglong)puVar2;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar7;
  param_2[6] = (ulonglong)(puVar7 + 1);
  puVar7[1] = 0;
  *puVar7 = &PTR_FUN_14a1fb978;
  puVar7[3] = 0;
  _Size = (size_t)(int)local_a8;
  *(int *)(puVar7 + 4) = (int)local_a8;
  if (_Size == 0) {
    *(undefined4 *)((longlong)puVar7 + 0x24) = 8;
  }
  else {
    puVar4 = local_b8;
    if (local_b0 != (undefined1 *)0x0) {
      puVar4 = local_b0;
    }
    FUN_1446fe144(puVar7 + 2,local_a8 & 0xffffffff,0);
    puVar2 = (undefined8 *)puVar7[3];
    if ((undefined8 *)puVar7[3] == (undefined8 *)0x0) {
      puVar2 = puVar7 + 2;
    }
    memcpy(puVar2,puVar4,_Size);
  }
  puVar7[0xd] = 0;
  lVar5 = (longlong)(int)local_58;
  *(int *)(puVar7 + 0xe) = (int)local_58;
  if (lVar5 == 0) {
    *(undefined4 *)((longlong)puVar7 + 0x74) = 8;
  }
  else {
    puVar4 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      puVar4 = local_a0;
    }
    FUN_1446fe1b8(puVar7 + 5,local_58 & 0xffffffff,0);
    puVar2 = (undefined8 *)puVar7[0xd];
    if ((undefined8 *)puVar7[0xd] == (undefined8 *)0x0) {
      puVar2 = puVar7 + 5;
    }
    memcpy(puVar2,puVar4,lVar5 << 3);
  }
  *(undefined4 *)(puVar7 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar7 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar7 + 0x10) = (undefined4)uStack_48;
  *(undefined4 *)((longlong)puVar7 + 0x84) = uStack_48._4_4_;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (local_b0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14321eb24 FUN_14321eb24 body=38 status=ok
// SIG undefined FUN_14321eb24(void)

undefined8 FUN_14321eb24(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


