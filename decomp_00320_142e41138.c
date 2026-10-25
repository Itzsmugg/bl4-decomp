// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142e41138 FUN_142e41138 body=1324 status=ok
// SIG undefined FUN_142e41138(void)

void FUN_142e41138(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *_Src;
  uint uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  void *pvVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
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
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_FUN_14a1fb978;
  puVar18[3] = 0;
  *(int *)(puVar18 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x24) = 8;
  }
  else {
    puVar17 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar17 = local_b8;
    }
    FUN_1446fe144(puVar18 + 2,local_b0,0);
    puVar13 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 2;
    }
    memcpy(puVar13,puVar17,(longlong)local_b0);
  }
  puVar18[0xd] = 0;
  *(int *)(puVar18 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x74) = 8;
  }
  else {
    puVar17 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar17 = local_a8;
    }
    FUN_1446fe1b8(puVar18 + 5,local_60,0);
    puVar13 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 5;
    }
    memcpy(puVar13,puVar17,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar18 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar18 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar18 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar18 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1d8);
  uVar4 = *(undefined4 *)(param_1 + 0x1dc);
  uVar7 = *(undefined8 *)(param_1 + 0x1b8);
  uVar8 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar10 = 0;
  }
  else {
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar10 = *(ulonglong *)(*(longlong *)(lVar12 + 0x50) + lVar15 * 8);
    if (uVar10 == 0) {
      uVar10 = FUN_1400bafc2(lVar12,lVar15,1);
    }
  }
  uVar11 = FUN_140029432(param_2,uVar10,0);
  param_2[0x37] = uVar10;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar11;
  local_d8 = uVar8;
  FUN_14480864a(param_2,uVar10,*(undefined8 *)(param_1 + 0x1c8),uVar7);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar3;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar4;
  *(undefined4 *)(puVar18 + 3) = (undefined4)local_c8;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar12 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar12 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar12 == 0) {
      lVar12 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  local_c8 = lVar12;
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar12 = *(longlong *)(param_1 + 0x1c8);
    uVar10 = *(ulonglong *)(lVar12 + 0x10);
    uVar19 = lVar12 + 0x10 + ((longlong)uVar10 >> 0x18);
    if ((uVar10 & 1) == 0) {
      uVar19 = uVar10;
    }
    iVar5 = *(int *)(lVar12 + 0x18);
    if ((longlong)iVar5 != 0) {
      lVar12 = 0;
      do {
        uVar9 = (uint)*(byte *)(uVar19 + 3 + lVar12);
        if ((uVar9 < 0x13) && ((0x44080U >> (uVar9 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar12);
          iVar6 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar6 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar6 + 1U) {
            FUN_1447477d8(puVar1,iVar6);
          }
          uVar10 = *puVar1;
          *(ushort *)(uVar10 + (longlong)iVar6 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar10 + 2 + (longlong)iVar6 * 4) = 1;
        }
        lVar12 = lVar12 + 4;
      } while ((longlong)iVar5 * 4 != lVar12);
    }
    uVar10 = param_2[0x13];
    lVar12 = (longlong)(int)uVar10;
    if (0 < lVar12) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar13 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar13) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar13 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar13;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar14 = (void *)((longlong)_Dst + lVar12 * 4);
        _Size = lVar12 * 4;
        if ((void *)param_2[1] < pvVar14) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar14 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar14;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = local_c8;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar10;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142e41666 FUN_142e41666 body=481 status=ok
// SIG undefined FUN_142e41666(void)

void FUN_142e41666(longlong param_1,ulonglong *param_2)

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
  FUN_1472615fc(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e41848 FUN_142e41848 body=232 status=ok
// SIG undefined FUN_142e41848(void)

void FUN_142e41848(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 142e41930 FUN_142e41930 body=81 status=ok
// SIG undefined FUN_142e41930(void)

void FUN_142e41930(undefined8 param_1,longlong *param_2)

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
  FUN_14726169f(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142e41982 FUN_142e41982 body=481 status=ok
// SIG undefined FUN_142e41982(void)

void FUN_142e41982(longlong param_1,ulonglong *param_2)

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
  FUN_1472619dc(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e41b64 FUN_142e41b64 body=232 status=ok
// SIG undefined FUN_142e41b64(void)

void FUN_142e41b64(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 142e41c4c FUN_142e41c4c body=81 status=ok
// SIG undefined FUN_142e41c4c(void)

void FUN_142e41c4c(undefined8 param_1,longlong *param_2)

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
  FUN_147261a7f(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142e41c9e FUN_142e41c9e body=31 status=ok
// SIG undefined FUN_142e41c9e(void)

undefined8 FUN_142e41c9e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142e41cbe FUN_142e41cbe body=481 status=ok
// SIG undefined FUN_142e41cbe(void)

void FUN_142e41cbe(longlong param_1,ulonglong *param_2)

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
  FUN_147261dbc(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e41ea0 FUN_142e41ea0 body=232 status=ok
// SIG undefined FUN_142e41ea0(void)

void FUN_142e41ea0(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 142e41f88 FUN_142e41f88 body=81 status=ok
// SIG undefined FUN_142e41f88(void)

void FUN_142e41f88(undefined8 param_1,longlong *param_2)

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
  FUN_147261e5f(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142e41fda FUN_142e41fda body=450 status=ok
// SIG undefined FUN_142e41fda(void)

void FUN_142e41fda(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
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
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar3 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar3 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar3;
  param_2[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14a1fb978;
  puVar3[3] = 0;
  *(int *)(puVar3 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x24) = 8;
  }
  else {
    puVar2 = local_b8;
    if (local_b0 != (undefined1 *)0x0) {
      puVar2 = local_b0;
    }
    FUN_1446fe144(puVar3 + 2,local_a8,0);
    puVar1 = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 2;
    }
    memcpy(puVar1,puVar2,(longlong)local_a8);
  }
  puVar3[0xd] = 0;
  *(int *)(puVar3 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    puVar2 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      puVar2 = local_a0;
    }
    FUN_1446fe1b8(puVar3 + 5,local_58,0);
    puVar1 = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 5;
    }
    memcpy(puVar1,puVar2,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar3 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (local_b0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_14726236a(param_1 + 0x1c0,param_2);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e4219d FUN_142e4219d body=81 status=ok
// SIG undefined FUN_142e4219d(void)

void FUN_142e4219d(undefined8 param_1,longlong *param_2)

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
  FUN_147262465(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142e421ee FUN_142e421ee body=229 status=ok
// SIG undefined FUN_142e421ee(void)

void FUN_142e421ee(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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
  FUN_14480864a(param_1,uVar1,*param_2,&DAT_14ca18608,param_3);
  return;
}



// FUNCTION 142e422d4 FUN_142e422d4 body=31 status=ok
// SIG undefined FUN_142e422d4(void)

undefined8 FUN_142e422d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142e422f4 FUN_142e422f4 body=86 status=ok
// SIG undefined FUN_142e422f4(void)

int FUN_142e422f4(undefined8 *param_1)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  pcVar2 = (code *)*param_1;
  plVar5 = (longlong *)param_1[2];
  if ((longlong *)param_1[2] == (longlong *)0x0) {
    plVar5 = param_1 + 4;
  }
  uVar3 = (**(code **)(*plVar5 + 8))();
  lVar4 = (*pcVar2)(uVar3);
  iVar1 = *(int *)(lVar4 + 8);
  pcVar2 = (code *)*param_1;
  plVar5 = (longlong *)param_1[2];
  if ((longlong *)param_1[2] == (longlong *)0x0) {
    plVar5 = param_1 + 4;
  }
  uVar3 = (**(code **)(*plVar5 + 8))();
  (*pcVar2)(uVar3);
  return iVar1 << 3;
}



// FUNCTION 142e42350 FUN_142e42350 body=43 status=ok
// SIG undefined FUN_142e42350(void)

undefined8 FUN_142e42350(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  pcVar1 = (code *)*param_1;
  plVar4 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[2];
  }
  uVar2 = (**(code **)(*plVar4 + 8))();
  puVar3 = (undefined8 *)(*pcVar1)(uVar2);
  return *puVar3;
}



// FUNCTION 142e42382 FUN_142e42382 body=43 status=ok
// SIG undefined FUN_142e42382(void)

undefined4 FUN_142e42382(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  pcVar1 = (code *)*param_1;
  plVar4 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[2];
  }
  uVar2 = (**(code **)(*plVar4 + 8))();
  lVar3 = (*pcVar1)(uVar2);
  return *(undefined4 *)(lVar3 + 8);
}



// FUNCTION 142e423b4 FUN_142e423b4 body=125 status=ok
// SIG undefined FUN_142e423b4(void)

longlong FUN_142e423b4(longlong *param_1)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  puVar2 = (undefined8 *)*param_1;
  lVar3 = puVar2[1];
  if (lVar3 == 0) {
    lVar4 = FUN_142fd9056(*puVar2);
    puVar2[1] = lVar4;
    uVar1 = (ulonglong)(*(int *)(lVar4 + 0x24) + -1 + (uint)(*(int *)(lVar4 + 0x24) == 0)) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    *(int *)(puVar2 + 2) = 1 << ((byte)lVar3 & 0x1f);
    uVar1 = (ulonglong)(*(int *)(lVar4 + 0x20) + -1 + (uint)(*(int *)(lVar4 + 0x20) == 0)) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    *(int *)((longlong)puVar2 + 0x14) = 1 << ((byte)lVar3 & 0x1f);
    *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(lVar4 + 0x18);
    *(undefined4 *)((longlong)puVar2 + 0x1c) = *(undefined4 *)(lVar4 + 8);
    lVar3 = *(longlong *)(*param_1 + 8);
  }
  return lVar3;
}



// FUNCTION 142e42450 FUN_142e42450 body=12 status=ok
// SIG undefined FUN_142e42450(void)

void FUN_142e42450(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142e42459. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142e4245c FUN_142e4245c body=29 status=ok
// SIG undefined FUN_142e4245c(void)

undefined8 FUN_142e4245c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142e4247a FUN_142e4247a body=122 status=ok
// SIG undefined FUN_142e4247a(void)

undefined4 FUN_142e4247a(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)*param_1;
  if (puVar4[1] == 0) {
    lVar3 = FUN_142fd9056(*puVar4);
    puVar4[1] = lVar3;
    uVar1 = (ulonglong)(*(int *)(lVar3 + 0x24) + -1 + (uint)(*(int *)(lVar3 + 0x24) == 0)) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    *(int *)(puVar4 + 2) = 1 << ((byte)lVar2 & 0x1f);
    uVar1 = (ulonglong)(*(int *)(lVar3 + 0x20) + -1 + (uint)(*(int *)(lVar3 + 0x20) == 0)) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    *(int *)((longlong)puVar4 + 0x14) = 1 << ((byte)lVar2 & 0x1f);
    *(undefined4 *)(puVar4 + 3) = *(undefined4 *)(lVar3 + 0x18);
    *(undefined4 *)((longlong)puVar4 + 0x1c) = *(undefined4 *)(lVar3 + 8);
    puVar4 = (undefined8 *)*param_1;
  }
  return *(undefined4 *)(puVar4 + 2);
}



// FUNCTION 142e4251e FUN_142e4251e body=29 status=ok
// SIG undefined FUN_142e4251e(void)

undefined8 FUN_142e4251e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142e4253c FUN_142e4253c body=122 status=ok
// SIG undefined FUN_142e4253c(void)

undefined4 FUN_142e4253c(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)*param_1;
  if (puVar4[1] == 0) {
    lVar3 = FUN_142fd9056(*puVar4);
    puVar4[1] = lVar3;
    uVar1 = (ulonglong)(*(int *)(lVar3 + 0x24) + -1 + (uint)(*(int *)(lVar3 + 0x24) == 0)) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    *(int *)(puVar4 + 2) = 1 << ((byte)lVar2 & 0x1f);
    uVar1 = (ulonglong)(*(int *)(lVar3 + 0x20) + -1 + (uint)(*(int *)(lVar3 + 0x20) == 0)) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    *(int *)((longlong)puVar4 + 0x14) = 1 << ((byte)lVar2 & 0x1f);
    *(undefined4 *)(puVar4 + 3) = *(undefined4 *)(lVar3 + 0x18);
    *(undefined4 *)((longlong)puVar4 + 0x1c) = *(undefined4 *)(lVar3 + 8);
    puVar4 = (undefined8 *)*param_1;
  }
  return *(undefined4 *)((longlong)puVar4 + 0x14);
}



// FUNCTION 142e425e0 FUN_142e425e0 body=29 status=ok
// SIG undefined FUN_142e425e0(void)

undefined8 FUN_142e425e0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142e425fe FUN_142e425fe body=86 status=ok
// SIG undefined FUN_142e425fe(void)

int FUN_142e425fe(undefined8 *param_1)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  pcVar2 = (code *)*param_1;
  plVar5 = (longlong *)param_1[2];
  if ((longlong *)param_1[2] == (longlong *)0x0) {
    plVar5 = param_1 + 4;
  }
  uVar3 = (**(code **)(*plVar5 + 8))();
  lVar4 = (*pcVar2)(uVar3);
  iVar1 = *(int *)(lVar4 + 8);
  pcVar2 = (code *)*param_1;
  plVar5 = (longlong *)param_1[2];
  if ((longlong *)param_1[2] == (longlong *)0x0) {
    plVar5 = param_1 + 4;
  }
  uVar3 = (**(code **)(*plVar5 + 8))();
  (*pcVar2)(uVar3);
  return iVar1 << 3;
}



// FUNCTION 142e4265a FUN_142e4265a body=43 status=ok
// SIG undefined FUN_142e4265a(void)

undefined8 FUN_142e4265a(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  pcVar1 = (code *)*param_1;
  plVar4 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[2];
  }
  uVar2 = (**(code **)(*plVar4 + 8))();
  puVar3 = (undefined8 *)(*pcVar1)(uVar2);
  return *puVar3;
}



// FUNCTION 142e4268c FUN_142e4268c body=43 status=ok
// SIG undefined FUN_142e4268c(void)

undefined4 FUN_142e4268c(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  pcVar1 = (code *)*param_1;
  plVar4 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[2];
  }
  uVar2 = (**(code **)(*plVar4 + 8))();
  lVar3 = (*pcVar1)(uVar2);
  return *(undefined4 *)(lVar3 + 8);
}



// FUNCTION 142e426be FUN_142e426be body=129 status=ok
// SIG undefined FUN_142e426be(void)

longlong FUN_142e426be(longlong *param_1)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  puVar2 = (undefined8 *)*param_1;
  lVar3 = puVar2[1];
  if (lVar3 == 0) {
    lVar4 = FUN_142fd9056(*puVar2);
    puVar2[1] = lVar4;
    uVar1 = (ulonglong)(*(int *)(lVar4 + 0x24) + -1 + (uint)(*(int *)(lVar4 + 0x24) == 0)) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    *(int *)(puVar2 + 2) = 1 << ((byte)lVar3 & 0x1f);
    uVar1 = (ulonglong)(*(int *)(lVar4 + 0x20) + -1 + (uint)(*(int *)(lVar4 + 0x20) == 0)) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    *(int *)((longlong)puVar2 + 0x14) = 1 << ((byte)lVar3 & 0x1f);
    *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(lVar4 + 0x18);
    *(undefined4 *)((longlong)puVar2 + 0x1c) = *(undefined4 *)(lVar4 + 8);
    lVar3 = *(longlong *)(*param_1 + 8);
  }
  return lVar3 + 0x10;
}



// FUNCTION 142e42740 FUN_142e42740 body=24 status=ok
// SIG undefined FUN_142e42740(void)

longlong FUN_142e42740(longlong param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14a29a5e0;
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 8);
  return param_2 + 0x18;
}



// FUNCTION 142e4275e FUN_142e4275e body=12 status=ok
// SIG undefined FUN_142e4275e(void)

void FUN_142e4275e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142e42767. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142e4276a FUN_142e4276a body=29 status=ok
// SIG undefined FUN_142e4276a(void)

undefined8 FUN_142e4276a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142e42788 FUN_142e42788 body=31 status=ok
// SIG undefined FUN_142e42788(void)

undefined8 FUN_142e42788(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142e427a8 FUN_142e427a8 body=1324 status=ok
// SIG undefined FUN_142e427a8(void)

void FUN_142e427a8(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *_Src;
  uint uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  void *pvVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
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
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_FUN_14a1fb978;
  puVar18[3] = 0;
  *(int *)(puVar18 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x24) = 8;
  }
  else {
    puVar17 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar17 = local_b8;
    }
    FUN_1446fe144(puVar18 + 2,local_b0,0);
    puVar13 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 2;
    }
    memcpy(puVar13,puVar17,(longlong)local_b0);
  }
  puVar18[0xd] = 0;
  *(int *)(puVar18 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x74) = 8;
  }
  else {
    puVar17 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar17 = local_a8;
    }
    FUN_1446fe1b8(puVar18 + 5,local_60,0);
    puVar13 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 5;
    }
    memcpy(puVar13,puVar17,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar18 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar18 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar18 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar18 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1d8);
  uVar4 = *(undefined4 *)(param_1 + 0x1dc);
  uVar7 = *(undefined8 *)(param_1 + 0x1b8);
  uVar8 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar10 = 0;
  }
  else {
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar10 = *(ulonglong *)(*(longlong *)(lVar12 + 0x50) + lVar15 * 8);
    if (uVar10 == 0) {
      uVar10 = FUN_1400bafc2(lVar12,lVar15,1);
    }
  }
  uVar11 = FUN_140029432(param_2,uVar10,0);
  param_2[0x37] = uVar10;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar11;
  local_d8 = uVar8;
  FUN_14480864a(param_2,uVar10,*(undefined8 *)(param_1 + 0x1c8),uVar7);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar3;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar4;
  *(undefined4 *)(puVar18 + 3) = (undefined4)local_c8;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar12 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar12 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar12 == 0) {
      lVar12 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  local_c8 = lVar12;
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar12 = *(longlong *)(param_1 + 0x1c8);
    uVar10 = *(ulonglong *)(lVar12 + 0x10);
    uVar19 = lVar12 + 0x10 + ((longlong)uVar10 >> 0x18);
    if ((uVar10 & 1) == 0) {
      uVar19 = uVar10;
    }
    iVar5 = *(int *)(lVar12 + 0x18);
    if ((longlong)iVar5 != 0) {
      lVar12 = 0;
      do {
        uVar9 = (uint)*(byte *)(uVar19 + 3 + lVar12);
        if ((uVar9 < 0x13) && ((0x44080U >> (uVar9 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar12);
          iVar6 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar6 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar6 + 1U) {
            FUN_1447477d8(puVar1,iVar6);
          }
          uVar10 = *puVar1;
          *(ushort *)(uVar10 + (longlong)iVar6 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar10 + 2 + (longlong)iVar6 * 4) = 1;
        }
        lVar12 = lVar12 + 4;
      } while ((longlong)iVar5 * 4 != lVar12);
    }
    uVar10 = param_2[0x13];
    lVar12 = (longlong)(int)uVar10;
    if (0 < lVar12) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar13 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar13) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar13 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar13;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar14 = (void *)((longlong)_Dst + lVar12 * 4);
        _Size = lVar12 * 4;
        if ((void *)param_2[1] < pvVar14) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar14 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar14;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = local_c8;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar10;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142e42cd6 FUN_142e42cd6 body=31 status=ok
// SIG undefined FUN_142e42cd6(void)

undefined8 FUN_142e42cd6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142e42cf6 FUN_142e42cf6 body=1087 status=ok
// SIG undefined FUN_142e42cf6(void)

void FUN_142e42cf6(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 *_Src;
  undefined8 *puVar12;
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
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar12 + 0x11;
  if ((undefined8 *)param_2[1] < puVar4) {
    FUN_140023dd8(param_2,0x90);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar12 + 0x11;
  }
  *param_2 = (ulonglong)puVar4;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_FUN_14a1fb978;
  puVar12[3] = 0;
  *(int *)(puVar12 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar12 + 0x24) = 8;
  }
  else {
    plVar9 = local_b8;
    if (local_b8 == (longlong *)0x0) {
      plVar9 = &local_c0;
    }
    FUN_1446fe144(puVar12 + 2,local_b0,0);
    puVar4 = (undefined8 *)puVar12[3];
    if ((undefined8 *)puVar12[3] == (undefined8 *)0x0) {
      puVar4 = puVar12 + 2;
    }
    memcpy(puVar4,plVar9,(longlong)local_b0);
  }
  puVar12[0xd] = 0;
  *(int *)(puVar12 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar12 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar12 + 5,local_60,0);
    puVar4 = (undefined8 *)puVar12[0xd];
    if ((undefined8 *)puVar12[0xd] == (undefined8 *)0x0) {
      puVar4 = puVar12 + 5;
    }
    memcpy(puVar4,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar12 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar12 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar12 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar12 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  pcVar2 = *(code **)(param_1 + 0x1f0);
  if (pcVar2 != (code *)0x0) {
    plVar9 = (longlong *)(param_1 + 0x210);
    if (*(longlong **)(param_1 + 0x200) != (longlong *)0x0) {
      plVar9 = *(longlong **)(param_1 + 0x200);
    }
    uVar5 = (**(code **)(*plVar9 + 8))();
    (*pcVar2)(uVar5);
  }
  uVar1 = *(undefined4 *)(param_1 + 0x1e0);
  uVar5 = *(undefined8 *)(param_1 + 0x1c0);
  uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x1d8) + 0x10);
  plVar9 = (longlong *)(param_1 + 0x1c8);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca17790) {
    FUN_144b3d300(&DAT_14ca17790);
    if (DAT_14ca17790 == -1) {
      FUN_1415b3954(&local_c0);
      local_d0 = 0;
      local_e0 = 0;
      local_100 = "Unknown";
      local_110 = 0;
      uStack_108 = 0;
      local_118 = L"FParameters";
      local_d8 = 0;
      local_f0 = 0x150;
      local_f8 = 0x2b0;
      local_e8 = &local_c0;
      FUN_140b49562(&DAT_14ca17710,0,1);
      if (local_c0 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e275eb);
      _Init_thread_footer(&DAT_14ca17790);
    }
  }
  if (*plVar9 == 0) {
    uVar6 = 0;
  }
  else {
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar10 = (longlong)*(int *)(*plVar9 + 0xd4);
    uVar6 = *(ulonglong *)(*(longlong *)(lVar8 + 0x50) + lVar10 * 8);
    if (uVar6 == 0) {
      uVar6 = FUN_1400bafc2(lVar8,lVar10,1);
    }
  }
  uVar7 = FUN_140029432(param_2,uVar6,0);
  param_2[0x37] = uVar6;
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar12 + 3;
  if ((undefined8 *)param_2[1] < puVar4) {
    FUN_140023dd8(param_2,0x20);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar12 + 3;
  }
  *param_2 = (ulonglong)puVar4;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_14a37d340;
  puVar12[2] = uVar7;
  local_118 = (wchar_t *)uVar5;
  FUN_14480864a(param_2,uVar6,*plVar9,&DAT_14ca17710);
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar12 + 4;
  if ((undefined8 *)param_2[1] < puVar4) {
    FUN_140023dd8(param_2,0x28);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar12 + 4;
  }
  *param_2 = (ulonglong)puVar4;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_14a1e7fd0;
  puVar12[2] = uVar3;
  *(undefined4 *)(puVar12 + 3) = uVar1;
  if (*plVar9 == 0) {
    lVar8 = 0;
  }
  else {
    lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar11 = (longlong)*(int *)(*plVar9 + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar10 + 0x50) + lVar11 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar10,lVar11,1);
    }
  }
  FUN_144ab3c52(param_2,plVar9,lVar8);
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e43136 FUN_142e43136 body=132 status=ok
// SIG undefined FUN_142e43136(void)

void FUN_142e43136(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)*param_1;
  if (puVar4[1] == 0) {
    lVar3 = FUN_142fd9056(*puVar4);
    puVar4[1] = lVar3;
    uVar1 = (ulonglong)(*(int *)(lVar3 + 0x24) + -1 + (uint)(*(int *)(lVar3 + 0x24) == 0)) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    *(int *)(puVar4 + 2) = 1 << ((byte)lVar2 & 0x1f);
    uVar1 = (ulonglong)(*(int *)(lVar3 + 0x20) + -1 + (uint)(*(int *)(lVar3 + 0x20) == 0)) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    *(int *)((longlong)puVar4 + 0x14) = 1 << ((byte)lVar2 & 0x1f);
    *(undefined4 *)(puVar4 + 3) = *(undefined4 *)(lVar3 + 0x18);
    *(undefined4 *)((longlong)puVar4 + 0x1c) = *(undefined4 *)(lVar3 + 8);
    puVar4 = (undefined8 *)*param_1;
  }
  *(undefined4 *)(param_1[1] + 0xd0) = *(undefined4 *)((longlong)puVar4 + 0x14);
  return;
}



// FUNCTION 142e431e4 FUN_142e431e4 body=29 status=ok
// SIG undefined FUN_142e431e4(void)

undefined8 FUN_142e431e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142e43202 FUN_142e43202 body=939 status=ok
// SIG undefined FUN_142e43202(void)

void FUN_142e43202(longlong param_1,ulonglong *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  int *_Src;
  undefined1 *_Src_00;
  undefined8 *puVar10;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  int local_cc;
  undefined8 local_c8;
  int local_c0;
  int local_bc;
  int local_b8;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar2 = puVar10 + 0x11;
  if ((undefined8 *)param_2[1] < puVar2) {
    FUN_140023dd8(param_2,0x90);
    puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar10 + 0x11;
  }
  *param_2 = (ulonglong)puVar2;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar10;
  param_2[6] = (ulonglong)(puVar10 + 1);
  puVar10[1] = 0;
  *puVar10 = &PTR_FUN_14a1fb978;
  puVar10[3] = 0;
  *(int *)(puVar10 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar10 + 0x24) = 8;
  }
  else {
    _Src = &local_c0;
    if ((int *)CONCAT44(uStack_b4,local_b8) != (int *)0x0) {
      _Src = (int *)CONCAT44(uStack_b4,local_b8);
    }
    FUN_1446fe144(puVar10 + 2,local_b0,0);
    puVar2 = (undefined8 *)puVar10[3];
    if ((undefined8 *)puVar10[3] == (undefined8 *)0x0) {
      puVar2 = puVar10 + 2;
    }
    memcpy(puVar2,_Src,(longlong)local_b0);
  }
  puVar10[0xd] = 0;
  *(int *)(puVar10 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar10 + 0x74) = 8;
  }
  else {
    _Src_00 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src_00 = local_a8;
    }
    FUN_1446fe1b8(puVar10 + 5,local_60,0);
    puVar2 = (undefined8 *)puVar10[0xd];
    if ((undefined8 *)puVar10[0xd] == (undefined8 *)0x0) {
      puVar2 = puVar10 + 5;
    }
    memcpy(puVar2,_Src_00,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar10 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar10 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar10 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar10 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  pcVar1 = *(code **)(param_1 + 0x1e0);
  plVar7 = (longlong *)(param_1 + 0x200);
  if (*(longlong **)(param_1 + 0x1f0) != (longlong *)0x0) {
    plVar7 = *(longlong **)(param_1 + 0x1f0);
  }
  uVar3 = (**(code **)(*plVar7 + 8))();
  (*pcVar1)(&local_c0,uVar3);
  if (((0 < local_c0) && (0 < local_bc)) && (0 < local_b8)) {
    local_cc = local_c0;
    local_c8 = *(undefined8 *)(param_1 + 0x1c0);
    uVar3 = *(undefined8 *)(param_1 + 0x1c8);
    if (*(longlong *)(param_1 + 0x1d0) == 0) {
      uVar4 = 0;
    }
    else {
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 8);
      lVar8 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1d0) + 0xd4);
      uVar4 = *(ulonglong *)(*(longlong *)(lVar6 + 0x50) + lVar8 * 8);
      if (uVar4 == 0) {
        uVar4 = FUN_1400bafc2(lVar6,lVar8,1);
      }
    }
    plVar7 = (longlong *)(param_1 + 0x1d0);
    uVar5 = FUN_140029432(param_2,uVar4,0);
    param_2[0x37] = uVar4;
    puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar10 + 3;
    if ((undefined8 *)param_2[1] < puVar2) {
      FUN_140023dd8(param_2,0x20);
      puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar2 = puVar10 + 3;
    }
    *param_2 = (ulonglong)puVar2;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar10;
    param_2[6] = (ulonglong)(puVar10 + 1);
    puVar10[1] = 0;
    *puVar10 = &PTR_LAB_14a37d340;
    puVar10[2] = uVar5;
    local_d8 = uVar3;
    FUN_14480864a(param_2,uVar4,*plVar7,local_c8);
    puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar10 + 4;
    if ((undefined8 *)param_2[1] < puVar2) {
      FUN_140023dd8(param_2,0x28);
      puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar2 = puVar10 + 4;
    }
    *param_2 = (ulonglong)puVar2;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar10;
    param_2[6] = (ulonglong)(puVar10 + 1);
    puVar10[1] = 0;
    *puVar10 = &PTR_LAB_14a1fbc30;
    *(int *)(puVar10 + 2) = local_cc;
    *(int *)((longlong)puVar10 + 0x14) = local_bc;
    *(int *)(puVar10 + 3) = local_b8;
    if (*plVar7 == 0) {
      lVar6 = 0;
    }
    else {
      lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 8);
      lVar9 = (longlong)*(int *)(*plVar7 + 0xd4);
      lVar6 = *(longlong *)(*(longlong *)(lVar8 + 0x50) + lVar9 * 8);
      if (lVar6 == 0) {
        lVar6 = FUN_1400bafc2(lVar8,lVar9,1);
      }
    }
    FUN_144ab3c52(param_2,plVar7,lVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e435ae FUN_142e435ae body=274 status=ok
// SIG undefined FUN_142e435ae(void)

int * FUN_142e435ae(int *param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)*param_2;
  if (puVar6[1] == 0) {
    lVar5 = FUN_142fd9056(*puVar6);
    puVar6[1] = lVar5;
    uVar1 = (ulonglong)(*(int *)(lVar5 + 0x24) + -1 + (uint)(*(int *)(lVar5 + 0x24) == 0)) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    *(int *)(puVar6 + 2) = 1 << ((byte)lVar2 & 0x1f);
    uVar1 = (ulonglong)(*(int *)(lVar5 + 0x20) + -1 + (uint)(*(int *)(lVar5 + 0x20) == 0)) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    *(int *)((longlong)puVar6 + 0x14) = 1 << ((byte)lVar2 & 0x1f);
    *(undefined4 *)(puVar6 + 3) = *(undefined4 *)(lVar5 + 0x18);
    *(undefined4 *)((longlong)puVar6 + 0x1c) = *(undefined4 *)(lVar5 + 8);
    puVar6 = (undefined8 *)*param_2;
  }
  *(undefined4 *)(param_2[1] + 0xd0) = *(undefined4 *)((longlong)puVar6 + 0x14);
  *(undefined4 *)(param_2[1] + 0xb8) = *(undefined4 *)(*param_2 + 0x1c);
  iVar4 = *(int *)(*param_2 + 0x1c) + 0x3f;
  iVar3 = *(int *)(*param_2 + 0x1c) + 0x7e;
  if (-1 < iVar4) {
    iVar3 = iVar4;
  }
  iVar3 = iVar3 >> 6;
  *param_1 = iVar3;
  *(undefined1 **)(param_1 + 1) = &DAT_100000001;
  iVar4 = 1;
  if (DAT_14ca84f24 < iVar3) {
    iVar4 = iVar3 + 0xfe;
    if (-1 < iVar3 + 0x7f) {
      iVar4 = iVar3 + 0x7f;
    }
    iVar4 = iVar4 >> 7;
    param_1[1] = iVar4;
    *param_1 = 0x80;
  }
  if (DAT_14ca84f28 < iVar4) {
    iVar3 = iVar4 + 0xfe;
    if (-1 < iVar4 + 0x7f) {
      iVar3 = iVar4 + 0x7f;
    }
    param_1[2] = iVar3 >> 7;
    param_1[1] = 0x80;
  }
  return param_1;
}



// FUNCTION 142e436de FUN_142e436de body=12 status=ok
// SIG undefined FUN_142e436de(void)

void FUN_142e436de(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142e436e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142e436ea FUN_142e436ea body=29 status=ok
// SIG undefined FUN_142e436ea(void)

undefined8 FUN_142e436ea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142e43708 FUN_142e43708 body=31 status=ok
// SIG undefined FUN_142e43708(void)

undefined8 FUN_142e43708(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142e43728 FUN_142e43728 body=1392 status=ok
// SIG undefined FUN_142e43728(void)

void FUN_142e43728(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  undefined8 uVar6;
  void *_Src;
  uint uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  void *pvVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  int *_Src_00;
  undefined1 *_Src_01;
  undefined8 *puVar17;
  size_t _Size;
  ulonglong uVar18;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_c8;
  int local_c0;
  int local_bc;
  int local_b8;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar17 + 0x11;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x90);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar17 + 0x11;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_FUN_14a1fb978;
  puVar17[3] = 0;
  *(int *)(puVar17 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x24) = 8;
  }
  else {
    _Src_00 = &local_c0;
    if ((int *)CONCAT44(uStack_b4,local_b8) != (int *)0x0) {
      _Src_00 = (int *)CONCAT44(uStack_b4,local_b8);
    }
    FUN_1446fe144(puVar17 + 2,local_b0,0);
    puVar12 = (undefined8 *)puVar17[3];
    if ((undefined8 *)puVar17[3] == (undefined8 *)0x0) {
      puVar12 = puVar17 + 2;
    }
    memcpy(puVar12,_Src_00,(longlong)local_b0);
  }
  puVar17[0xd] = 0;
  *(int *)(puVar17 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x74) = 8;
  }
  else {
    _Src_01 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src_01 = local_a8;
    }
    FUN_1446fe1b8(puVar17 + 5,local_60,0);
    puVar12 = (undefined8 *)puVar17[0xd];
    if ((undefined8 *)puVar17[0xd] == (undefined8 *)0x0) {
      puVar12 = puVar17 + 5;
    }
    memcpy(puVar12,_Src_01,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar17 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar17 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar17 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar17 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  pcVar5 = *(code **)(param_1 + 0x1e0);
  plVar14 = (longlong *)(param_1 + 0x200);
  if (*(longlong **)(param_1 + 0x1f0) != (longlong *)0x0) {
    plVar14 = *(longlong **)(param_1 + 0x1f0);
  }
  uVar8 = (**(code **)(*plVar14 + 8))();
  (*pcVar5)(&local_c0,uVar8);
  if (((0 < local_c0) && (0 < local_bc)) && (0 < local_b8)) {
    uVar8 = *(undefined8 *)(param_1 + 0x1c0);
    uVar6 = *(undefined8 *)(param_1 + 0x1c8);
    local_c8 = CONCAT44(local_c8._4_4_,local_c0);
    if (*(longlong *)(param_1 + 0x1d0) == 0) {
      uVar9 = 0;
    }
    else {
      lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 8);
      lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1d0) + 0xd4);
      uVar9 = *(ulonglong *)(*(longlong *)(lVar11 + 0x50) + lVar15 * 8);
      if (uVar9 == 0) {
        uVar9 = FUN_1400bafc2(lVar11,lVar15,1);
      }
    }
    uVar10 = FUN_140029432(param_2,uVar9,0);
    param_2[0x37] = uVar9;
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
    *puVar17 = &PTR_LAB_14a37d340;
    puVar17[2] = uVar10;
    local_d8 = uVar6;
    FUN_14480864a(param_2,uVar9,*(undefined8 *)(param_1 + 0x1d0),uVar8);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar17 + 4;
    if ((undefined8 *)param_2[1] < puVar12) {
      FUN_140023dd8(param_2,0x28);
      puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar12 = puVar17 + 4;
    }
    *param_2 = (ulonglong)puVar12;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar17;
    param_2[6] = (ulonglong)(puVar17 + 1);
    puVar17[1] = 0;
    *puVar17 = &PTR_LAB_14a1fbc30;
    *(undefined4 *)(puVar17 + 2) = (undefined4)local_c8;
    *(int *)((longlong)puVar17 + 0x14) = local_bc;
    *(int *)(puVar17 + 3) = local_b8;
    if (*(longlong *)(param_1 + 0x1d0) == 0) {
      lVar11 = 0;
    }
    else {
      lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 8);
      lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1d0) + 0xd4);
      lVar11 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
      if (lVar11 == 0) {
        lVar11 = FUN_1400bafc2(lVar15,lVar16,1);
      }
    }
    local_c8 = lVar11;
    if (DAT_14ca8507b == '\x01') {
      puVar1 = param_2 + 0x12;
      if ((0 < (int)param_2[0x13]) &&
         (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
        FUN_147139e90(puVar1,0);
      }
      lVar11 = *(longlong *)(param_1 + 0x1d0);
      uVar9 = *(ulonglong *)(lVar11 + 0x10);
      uVar18 = lVar11 + 0x10 + ((longlong)uVar9 >> 0x18);
      if ((uVar9 & 1) == 0) {
        uVar18 = uVar9;
      }
      iVar3 = *(int *)(lVar11 + 0x18);
      if ((longlong)iVar3 != 0) {
        lVar11 = 0;
        do {
          uVar7 = (uint)*(byte *)(uVar18 + 3 + lVar11);
          if ((uVar7 < 0x13) && ((0x44080U >> (uVar7 & 0x1f) & 1) != 0)) {
            bVar2 = *(byte *)(uVar18 + 2 + lVar11);
            iVar4 = (int)param_2[0x13];
            *(uint *)(param_2 + 0x13) = iVar4 + 1U;
            if (*(uint *)((longlong)param_2 + 0x9c) < iVar4 + 1U) {
              FUN_1447477d8(puVar1,iVar4);
            }
            uVar9 = *puVar1;
            *(ushort *)(uVar9 + (longlong)iVar4 * 4) = (ushort)bVar2;
            *(undefined1 *)(uVar9 + 2 + (longlong)iVar4 * 4) = 1;
          }
          lVar11 = lVar11 + 4;
        } while ((longlong)iVar3 * 4 != lVar11);
      }
      uVar9 = param_2[0x13];
      lVar11 = (longlong)(int)uVar9;
      if (0 < lVar11) {
        if (DAT_14ca8507b == '\x01') {
          _Src = (void *)*puVar1;
          puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar12 = puVar17 + 5;
          if ((undefined8 *)param_2[1] < puVar12) {
            FUN_140023dd8(param_2,0x30);
            puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
            puVar12 = puVar17 + 5;
          }
          *param_2 = (ulonglong)puVar12;
          *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
          *(undefined8 **)param_2[6] = puVar17;
          param_2[6] = (ulonglong)(puVar17 + 1);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar13 = (void *)((longlong)_Dst + lVar11 * 4);
          _Size = lVar11 * 4;
          if ((void *)param_2[1] < pvVar13) {
            FUN_140023dd8(param_2,(uint)_Size | 2);
            _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
            pvVar13 = (void *)((longlong)_Dst + _Size);
          }
          *param_2 = (ulonglong)pvVar13;
          memcpy(_Dst,_Src,_Size);
          puVar17[1] = 0;
          *puVar17 = &PTR_FUN_14a1fbc38;
          puVar17[2] = local_c8;
          puVar17[3] = _Dst;
          *(int *)(puVar17 + 4) = (int)uVar9;
        }
        *(undefined4 *)(param_2 + 0x13) = 0;
        if (*(int *)((longlong)param_2 + 0x9c) < 0) {
          FUN_147139e90(puVar1,0);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142e43c9a FUN_142e43c9a body=310 status=ok
// SIG undefined FUN_142e43c9a(void)

int * FUN_142e43c9a(int *param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)*param_2;
  if (puVar6[1] == 0) {
    lVar5 = FUN_142fd9056(*puVar6);
    puVar6[1] = lVar5;
    uVar1 = (ulonglong)(*(int *)(lVar5 + 0x24) + -1 + (uint)(*(int *)(lVar5 + 0x24) == 0)) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    *(int *)(puVar6 + 2) = 1 << ((byte)lVar2 & 0x1f);
    uVar1 = (ulonglong)(*(int *)(lVar5 + 0x20) + -1 + (uint)(*(int *)(lVar5 + 0x20) == 0)) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    *(int *)((longlong)puVar6 + 0x14) = 1 << ((byte)lVar2 & 0x1f);
    *(undefined4 *)(puVar6 + 3) = *(undefined4 *)(lVar5 + 0x18);
    *(undefined4 *)((longlong)puVar6 + 0x1c) = *(undefined4 *)(lVar5 + 8);
    puVar6 = (undefined8 *)*param_2;
  }
  *(undefined4 *)(param_2[1] + 0x60) = *(undefined4 *)((longlong)puVar6 + 0x14);
  *(undefined4 *)(param_2[1] + 0x48) = *(undefined4 *)(*(longlong *)(*param_2 + 8) + 0x18);
  *(undefined4 *)(param_2[1] + 100) = *(undefined4 *)(*(longlong *)(*param_2 + 8) + 0x30);
  *(undefined4 *)(param_2[1] + 0x68) = *(undefined4 *)(*(longlong *)(*param_2 + 8) + 0x34);
  iVar3 = *(int *)(*(longlong *)(*param_2 + 8) + 0x18);
  iVar4 = iVar3 + 0x3f;
  iVar3 = iVar3 + 0x7e;
  if (-1 < iVar4) {
    iVar3 = iVar4;
  }
  iVar3 = iVar3 >> 6;
  *param_1 = iVar3;
  *(undefined1 **)(param_1 + 1) = &DAT_100000001;
  iVar4 = 1;
  if (DAT_14ca84f24 < iVar3) {
    iVar4 = iVar3 + 0xfe;
    if (-1 < iVar3 + 0x7f) {
      iVar4 = iVar3 + 0x7f;
    }
    iVar4 = iVar4 >> 7;
    param_1[1] = iVar4;
    *param_1 = 0x80;
  }
  if (DAT_14ca84f28 < iVar4) {
    iVar3 = iVar4 + 0xfe;
    if (-1 < iVar4 + 0x7f) {
      iVar3 = iVar4 + 0x7f;
    }
    param_1[2] = iVar3 >> 7;
    param_1[1] = 0x80;
  }
  return param_1;
}



// FUNCTION 142e43dee FUN_142e43dee body=12 status=ok
// SIG undefined FUN_142e43dee(void)

void FUN_142e43dee(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142e43df7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142e43dfa FUN_142e43dfa body=29 status=ok
// SIG undefined FUN_142e43dfa(void)

undefined8 FUN_142e43dfa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142e43e18 FUN_142e43e18 body=31 status=ok
// SIG undefined FUN_142e43e18(void)

undefined8 FUN_142e43e18(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142e43e38 FUN_142e43e38 body=1392 status=ok
// SIG undefined FUN_142e43e38(void)

void FUN_142e43e38(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  undefined8 uVar6;
  void *_Src;
  uint uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  void *pvVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  int *_Src_00;
  undefined1 *_Src_01;
  undefined8 *puVar17;
  size_t _Size;
  ulonglong uVar18;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_c8;
  int local_c0;
  int local_bc;
  int local_b8;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar17 + 0x11;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x90);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar17 + 0x11;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_FUN_14a1fb978;
  puVar17[3] = 0;
  *(int *)(puVar17 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x24) = 8;
  }
  else {
    _Src_00 = &local_c0;
    if ((int *)CONCAT44(uStack_b4,local_b8) != (int *)0x0) {
      _Src_00 = (int *)CONCAT44(uStack_b4,local_b8);
    }
    FUN_1446fe144(puVar17 + 2,local_b0,0);
    puVar12 = (undefined8 *)puVar17[3];
    if ((undefined8 *)puVar17[3] == (undefined8 *)0x0) {
      puVar12 = puVar17 + 2;
    }
    memcpy(puVar12,_Src_00,(longlong)local_b0);
  }
  puVar17[0xd] = 0;
  *(int *)(puVar17 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x74) = 8;
  }
  else {
    _Src_01 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src_01 = local_a8;
    }
    FUN_1446fe1b8(puVar17 + 5,local_60,0);
    puVar12 = (undefined8 *)puVar17[0xd];
    if ((undefined8 *)puVar17[0xd] == (undefined8 *)0x0) {
      puVar12 = puVar17 + 5;
    }
    memcpy(puVar12,_Src_01,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar17 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar17 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar17 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar17 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  pcVar5 = *(code **)(param_1 + 0x1e0);
  plVar14 = (longlong *)(param_1 + 0x200);
  if (*(longlong **)(param_1 + 0x1f0) != (longlong *)0x0) {
    plVar14 = *(longlong **)(param_1 + 0x1f0);
  }
  uVar8 = (**(code **)(*plVar14 + 8))();
  (*pcVar5)(&local_c0,uVar8);
  if (((0 < local_c0) && (0 < local_bc)) && (0 < local_b8)) {
    uVar8 = *(undefined8 *)(param_1 + 0x1c0);
    uVar6 = *(undefined8 *)(param_1 + 0x1c8);
    local_c8 = CONCAT44(local_c8._4_4_,local_c0);
    if (*(longlong *)(param_1 + 0x1d0) == 0) {
      uVar9 = 0;
    }
    else {
      lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 8);
      lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1d0) + 0xd4);
      uVar9 = *(ulonglong *)(*(longlong *)(lVar11 + 0x50) + lVar15 * 8);
      if (uVar9 == 0) {
        uVar9 = FUN_1400bafc2(lVar11,lVar15,1);
      }
    }
    uVar10 = FUN_140029432(param_2,uVar9,0);
    param_2[0x37] = uVar9;
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
    *puVar17 = &PTR_LAB_14a37d340;
    puVar17[2] = uVar10;
    local_d8 = uVar6;
    FUN_14480864a(param_2,uVar9,*(undefined8 *)(param_1 + 0x1d0),uVar8);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar17 + 4;
    if ((undefined8 *)param_2[1] < puVar12) {
      FUN_140023dd8(param_2,0x28);
      puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar12 = puVar17 + 4;
    }
    *param_2 = (ulonglong)puVar12;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar17;
    param_2[6] = (ulonglong)(puVar17 + 1);
    puVar17[1] = 0;
    *puVar17 = &PTR_LAB_14a1fbc30;
    *(undefined4 *)(puVar17 + 2) = (undefined4)local_c8;
    *(int *)((longlong)puVar17 + 0x14) = local_bc;
    *(int *)(puVar17 + 3) = local_b8;
    if (*(longlong *)(param_1 + 0x1d0) == 0) {
      lVar11 = 0;
    }
    else {
      lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 8);
      lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1d0) + 0xd4);
      lVar11 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
      if (lVar11 == 0) {
        lVar11 = FUN_1400bafc2(lVar15,lVar16,1);
      }
    }
    local_c8 = lVar11;
    if (DAT_14ca8507b == '\x01') {
      puVar1 = param_2 + 0x12;
      if ((0 < (int)param_2[0x13]) &&
         (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
        FUN_147139e90(puVar1,0);
      }
      lVar11 = *(longlong *)(param_1 + 0x1d0);
      uVar9 = *(ulonglong *)(lVar11 + 0x10);
      uVar18 = lVar11 + 0x10 + ((longlong)uVar9 >> 0x18);
      if ((uVar9 & 1) == 0) {
        uVar18 = uVar9;
      }
      iVar3 = *(int *)(lVar11 + 0x18);
      if ((longlong)iVar3 != 0) {
        lVar11 = 0;
        do {
          uVar7 = (uint)*(byte *)(uVar18 + 3 + lVar11);
          if ((uVar7 < 0x13) && ((0x44080U >> (uVar7 & 0x1f) & 1) != 0)) {
            bVar2 = *(byte *)(uVar18 + 2 + lVar11);
            iVar4 = (int)param_2[0x13];
            *(uint *)(param_2 + 0x13) = iVar4 + 1U;
            if (*(uint *)((longlong)param_2 + 0x9c) < iVar4 + 1U) {
              FUN_1447477d8(puVar1,iVar4);
            }
            uVar9 = *puVar1;
            *(ushort *)(uVar9 + (longlong)iVar4 * 4) = (ushort)bVar2;
            *(undefined1 *)(uVar9 + 2 + (longlong)iVar4 * 4) = 1;
          }
          lVar11 = lVar11 + 4;
        } while ((longlong)iVar3 * 4 != lVar11);
      }
      uVar9 = param_2[0x13];
      lVar11 = (longlong)(int)uVar9;
      if (0 < lVar11) {
        if (DAT_14ca8507b == '\x01') {
          _Src = (void *)*puVar1;
          puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar12 = puVar17 + 5;
          if ((undefined8 *)param_2[1] < puVar12) {
            FUN_140023dd8(param_2,0x30);
            puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
            puVar12 = puVar17 + 5;
          }
          *param_2 = (ulonglong)puVar12;
          *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
          *(undefined8 **)param_2[6] = puVar17;
          param_2[6] = (ulonglong)(puVar17 + 1);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar13 = (void *)((longlong)_Dst + lVar11 * 4);
          _Size = lVar11 * 4;
          if ((void *)param_2[1] < pvVar13) {
            FUN_140023dd8(param_2,(uint)_Size | 2);
            _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
            pvVar13 = (void *)((longlong)_Dst + _Size);
          }
          *param_2 = (ulonglong)pvVar13;
          memcpy(_Dst,_Src,_Size);
          puVar17[1] = 0;
          *puVar17 = &PTR_FUN_14a1fbc38;
          puVar17[2] = local_c8;
          puVar17[3] = _Dst;
          *(int *)(puVar17 + 4) = (int)uVar9;
        }
        *(undefined4 *)(param_2 + 0x13) = 0;
        if (*(int *)((longlong)param_2 + 0x9c) < 0) {
          FUN_147139e90(puVar1,0);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142e443aa FUN_142e443aa body=168 status=ok
// SIG undefined FUN_142e443aa(void)

undefined8 * FUN_142e443aa(undefined8 *param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)*param_2;
  if (puVar5[1] == 0) {
    lVar4 = FUN_142fd9056(*puVar5);
    puVar5[1] = lVar4;
    uVar1 = (ulonglong)(*(int *)(lVar4 + 0x24) + -1 + (uint)(*(int *)(lVar4 + 0x24) == 0)) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    *(int *)(puVar5 + 2) = 1 << ((byte)lVar2 & 0x1f);
    uVar1 = (ulonglong)(*(int *)(lVar4 + 0x20) + -1 + (uint)(*(int *)(lVar4 + 0x20) == 0)) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    *(int *)((longlong)puVar5 + 0x14) = 1 << ((byte)lVar2 & 0x1f);
    *(undefined4 *)(puVar5 + 3) = *(undefined4 *)(lVar4 + 0x18);
    *(undefined4 *)((longlong)puVar5 + 0x1c) = *(undefined4 *)(lVar4 + 8);
    puVar5 = (undefined8 *)*param_2;
  }
  uVar3 = *(uint *)((longlong)puVar5 + 0x14);
  if (*(uint *)(param_2 + 1) < *(uint *)((longlong)puVar5 + 0x14)) {
    uVar3 = *(uint *)(param_2 + 1);
  }
  *(uint *)(param_2[2] + 0x14) = uVar3;
  *param_1 = &DAT_100000001;
  *(undefined4 *)(param_1 + 1) = 1;
  return param_1;
}



// FUNCTION 142e44478 FUN_142e44478 body=12 status=ok
// SIG undefined FUN_142e44478(void)

void FUN_142e44478(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142e44481. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142e44484 FUN_142e44484 body=29 status=ok
// SIG undefined FUN_142e44484(void)

undefined8 FUN_142e44484(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142e444a1 FUN_142e444a1 body=5792 status=ok
// SIG undefined FUN_142e444a1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e444a1(void)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_74;
  undefined8 local_70;
  code *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1400b22c2(&local_70,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_70,&DAT_14ca120f0);
  if (cVar2 == '\0') {
    _DAT_14ca120f0 = 0;
    uRam000000014ca120f8 = 0;
  }
  if (local_70 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  local_68 = FUN_145f81274;
  local_70 = (undefined8 *)&DAT_14152059c;
  FUN_14142a670(&DAT_14ca12188,&local_70);
  local_68 = FUN_145f4fcd0;
  local_70 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca122c0,&local_70);
  local_70._0_4_ = 1;
  local_88 = 0x60;
  FUN_14078dbce(&DAT_14ca122d0,L"r.Mobile.PixelFogQuality",&local_70,
                L"Exponentional height fog rendering quality.\n0 - basic per-pixel fog1 - all per-pixel fog features (second fog, directional inscattering, aerial perspective)"
               );
  atexit(FUN_142df5ede);
  local_70 = (undefined8 *)CONCAT44(local_70._4_4_,1);
  local_88 = 0x20;
  FUN_14078dbce(&DAT_14ca122e8,L"r.Mobile.PixelFogDepthTest",&local_70,
                L"Whether to use depth and stencil tests for fog rendering");
  atexit(FUN_142df5f23);
  local_68 = FUN_145edd288;
  local_70 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca12418,&local_70);
  local_68 = FUN_145f502c6;
  local_70 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca12540,&local_70);
  local_68 = FUN_145e8a52a;
  local_70 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca12678,&local_70);
  local_68 = FUN_145e8aa9a;
  local_70 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca127a0,&local_70);
  local_68 = FUN_145edd76e;
  local_70 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca128c8,&local_70);
  local_68 = FUN_14608a470;
  local_70 = (undefined8 *)&DAT_142bc70ae;
  FUN_1412df486(&DAT_14ca129f0,&local_70);
  local_68 = FUN_145f18e90;
  local_70 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca12b28,&local_70);
  local_70 = (undefined8 *)((ulonglong)local_70 & 0xffffffff00000000);
  local_88 = 0x60;
  FUN_14078dbce(&DAT_14ca12b38,L"r.Mobile.ForceDepthResolve",&local_70,
                L"0: Depth buffer is resolved by switching out render targets. (Default)\n1: Depth buffer is resolved by switching out render targets and drawing with the depth texture.\n"
               );
  atexit(FUN_142df728e);
  local_70 = (undefined8 *)((ulonglong)local_70 & 0xffffffff00000000);
  local_88 = 0x20;
  FUN_14078dbce(&DAT_14ca12b50,L"r.Mobile.AdrenoOcclusionMode",&local_70,
                L"0: Render occlusion queries after the base pass (default).\n1: Render occlusion queries after translucency and a flush, which can help Adreno devices in GL mode."
               );
  atexit(FUN_142df72d3);
  local_70._0_4_ = 1;
  local_88 = 0x60;
  FUN_14078dbce(&DAT_14ca12b68,L"r.Mobile.CustomDepthForTranslucency",&local_70,
                L" Whether to render custom depth/stencil if any tranclucency in the scene uses it. \n 0 = Off \n 1 = On [default]"
               );
  atexit(FUN_142df7318);
  local_70 = (undefined8 *)((ulonglong)local_70._4_4_ << 0x20);
  local_88 = 0x24;
  FUN_14078dbce(&DAT_14ca12b80,L"r.Mobile.XRMSAAMode",&local_70,
                L" Whether to modify how mobile XR msaa support works\n 0 = Standard depth pass/swapchain mode [default]\n 1 = Perform a copy of depth to the depth resolve target 2 = Make the depth swap chain be MSAA and use it directly as scene depth"
               );
  atexit(FUN_142df735d);
  local_68 = FUN_14607eace;
  local_70 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca12cd0,&local_70);
  local_68 = FUN_14607ed34;
  local_70 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca12df8,&local_70);
  local_68 = FUN_14607ef9a;
  local_70 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca12f20,&local_70);
  local_88 = 0x24;
  FUN_141471170(&DAT_14ca12f40,L"r.Mobile.ScreenSpaceReflections",&DAT_14ca12f3c,
                L"0: Mobile Renderer Screen Space Reflections disabled (default)\n1: Mobile Renderer Screen Space Reflections enabled\n"
               );
  atexit(FUN_142dff54b);
  local_88 = 0x20;
  FUN_1415c789c(&DAT_14ca12f50,L"r.Mobile.ScreenSpaceReflections.Intensity",&DAT_14c760824,
                L"Scale factor to adjust the intensity of mobile screen space reflections in the range [0.0, 1.0] or -1. (default: -1, ignores this setting)\n"
               );
  atexit(FUN_142dff590);
  local_88 = 0;
  FUN_14153156c(&DAT_14ca12f60,L"r.Gbx.Nanite.MaterialVisibility",&DAT_14ca19690,
                L"Enable Gearbox Nanite material visibility tests (used previous frame GPU MatBin info)"
               );
  atexit(FUN_142dff81a);
  DAT_14ca12f90 = 0;
  DAT_14ca12f98 = 0;
  DAT_14ca12f70 = 0;
  _DAT_14ca12f78 = 0;
  _DAT_14ca12f9c = 0xffffffff00000080;
  DAT_14ca12fa4 = 0;
  DAT_14ca12fb0 = 0;
  DAT_14ca12fb8 = 0;
  atexit(FUN_142dff85f);
  DAT_14ca19680 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *DAT_14ca19680 = 0;
  DAT_14ca19688 = DAT_14ca19680;
  atexit(FUN_142dff88e);
  DAT_14ca196a0 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *DAT_14ca196a0 = 0;
  DAT_14ca196a8 = DAT_14ca196a0;
  atexit(FUN_142dff8b4);
  local_68 = FUN_142dff90a;
  local_70 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca130d8,&local_70);
  local_88 = 0;
  FUN_141471170(&DAT_14ca130e8,L"r.Nanite.ShowStats",&DAT_14ca19734,&DAT_149dfb77a);
  atexit(FUN_142e01521);
  DAT_14ca130f8 = 0;
  _DAT_14ca13100 = 0;
  atexit((_func_5014 *)&LAB_142e01566);
  local_88 = 0x20;
  FUN_141707242(&DAT_14ca13108,L"r.Nanite.StatsFilter",&DAT_14ca130f8,
                L"Sets the name of a specific Nanite raster pass to capture stats from - enumerate available filters with `NaniteStats List` cmd."
               );
  atexit(FUN_142e01577);
  local_68 = FUN_145f206d6;
  local_70 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca13238,&local_70);
  local_68 = FUN_145d4852c;
  local_70 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca13360,&local_70);
  local_68 = FUN_1460954d6;
  local_70 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca13488,&local_70);
  local_68 = FUN_146095744;
  local_70 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca135b0,&local_70);
  local_68 = FUN_145f3099c;
  local_70 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca136d8,&local_70);
  local_68 = FUN_145f30f90;
  local_70 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca13800,&local_70);
  local_88 = 0;
  FUN_141471170(&DAT_14ca13810,L"r.Nanite.ResummarizeHTile",&DAT_14c760828,&DAT_149dfb77a);
  atexit(FUN_142e02ba5);
  local_88 = 0;
  FUN_141471170(&DAT_14ca13828,L"r.Nanite.DecompressDepth",&DAT_14ca13820,&DAT_149dfb77a);
  atexit(FUN_142e02bea);
  local_88 = 0;
  FUN_141471170(&DAT_14ca13838,L"r.Nanite.CustomDepth.ExportMethod",&DAT_14c76082c,
                L"0 - Export depth/stencil into separate targets via PS\n1 - Export depth/stencil direct to target via CS (requires HTILE support)\n"
               );
  atexit(FUN_142e02c2f);
  local_68 = FUN_141555dfc;
  local_70 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca13960,&local_70);
  local_68 = FUN_141569c12;
  local_70 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca13a88,&local_70);
  local_68 = FUN_141520974;
  local_70 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca13bb0,&local_70);
  local_68 = FUN_1415d5cf2;
  local_70 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca13cd8,&local_70);
  local_68 = FUN_1415d5e14;
  local_70 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca13e00,&local_70);
  local_68 = FUN_1415d5f36;
  local_70 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca13f28,&local_70);
  local_68 = FUN_141597330;
  local_70 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca14050,&local_70);
  local_68 = FUN_145e8b00a;
  local_70 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca14178,&local_70);
  local_70._0_4_ = 1;
  local_88 = 0x20;
  FUN_14078dbce(&DAT_14ca14188,L"r.Nanite.AsyncRasterization",&local_70,
                L"If available, run Nanite compute rasterization as asynchronous compute.");
  atexit(FUN_142e0942f);
  local_70._0_4_ = 0;
  local_88 = 0x20;
  FUN_14078dbce(&DAT_14ca141a0,L"r.Nanite.AsyncRasterization.ShadowDepths",&local_70,
                L"If available, run Nanite compute rasterization of shadows as asynchronous compute."
               );
  atexit(FUN_142e09474);
  local_70._0_4_ = 1;
  local_88 = 0x20;
  FUN_14078dbce(&DAT_14ca141b8,L"r.Nanite.AsyncRasterization.CustomPass",&local_70,
                L"If available, run Nanite compute rasterization of custom passes as asynchronous compute."
               );
  atexit(FUN_142e094b9);
  local_70._0_4_ = 0;
  local_88 = 0x20;
  FUN_14078dbce(&DAT_14ca141d0,L"r.Nanite.AsyncRasterization.LumenMeshCards",&local_70,
                L"If available, run Nanite compute rasterization of Lumen mesh cards as asynchronous compute."
               );
  atexit(FUN_142e094fe);
  local_70._0_4_ = 1;
  local_88 = 0x20;
  FUN_14078dbce(&DAT_14ca141e8,L"r.Nanite.UseSceneInstanceHierarchy",&local_70,
                L"Control Nanite use of the scene instance culling hierarchy. Has no effect unless  r.SceneCulling is also enabled."
               );
  atexit(FUN_142e09543);
  local_70._0_4_ = 1;
  local_88 = 0x20;
  FUN_14078dbce(&DAT_14ca14200,L"r.Nanite.ComputeRasterization",&local_70,
                L"Whether to allow compute rasterization. When disabled all rasterization will go through the hardware path."
               );
  atexit(FUN_142e09588);
  local_70 = (undefined8 *)CONCAT44(local_70._4_4_,1);
  local_88 = 0x20;
  FUN_14078dbce(&DAT_14ca14218,L"r.Nanite.ProgrammableRaster",&local_70,
                L"Whether to allow programmable raster. When disabled all rasterization will go through the fixed function path."
               );
  atexit(FUN_142e095cd);
  local_70 = (undefined8 *)0x0;
  local_68 = (code *)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_1446efa72(&local_70,0,2,0x10);
  local_68._0_4_ = 2;
  *local_70 = &PTR_LAB_149e170a0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_70[2] = lVar3;
  *local_70 = &PTR_FUN_14a299d10;
  local_74 = 1;
  local_88 = 0x60;
  FUN_14078dbce(&DAT_14ca14230,L"r.Nanite.Tessellation",&local_74,
                L"Whether to enable runtime tessellation.");
  (**(code **)(*DAT_14ca14238 + 200))(DAT_14ca14238,&local_70);
  if ((int)local_68 != 0) {
    if (local_70 == (undefined8 *)0x0) goto LAB_142e44ea6;
    (**(code **)*local_70)(local_70,0);
    FUN_1446efa72(&local_70,0,0,0x10);
    local_68._0_4_ = 0;
  }
  if (local_70 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_142e44ea6:
  atexit(FUN_142e09612);
  local_70._0_4_ = 1;
  local_88 = 0x20;
  FUN_14078dbce(&DAT_14ca14248,L"r.Nanite.FilterPrimitives",&local_70,
                L"Whether per-view filtering of primitive is enabled.");
  atexit(FUN_142e09657);
  local_70._0_4_ = 1;
  local_88 = 0x20;
  FUN_14078dbce(&DAT_14ca14260,L"r.Nanite.MeshShaderRasterization",&local_70,
                L"If available, use mesh shaders for hardware rasterization.");
  atexit(FUN_142e0969c);
  local_70._0_4_ = 1;
  local_88 = 0x20;
  FUN_14078dbce(&DAT_14ca14278,L"r.Nanite.PrimShaderRasterization",&local_70,
                L"If available, use primitive shaders for hardware rasterization.");
  atexit(FUN_142e096e1);
  local_70._0_4_ = 0;
  local_88 = 0x20;
  FUN_14078dbce(&DAT_14ca14290,L"r.Nanite.VSMInvalidateOnLODDelta",&local_70,
                L"Experimental: Clusters that are not streamed in to LOD matching the computed Nanite LOD estimate will trigger VSM invalidation such that they are re-rendered when streaming completes.\n  NOTE: May cause a large increase in invalidations in cases where the streamer has difficulty keeping up (a future version will need to throttle the invalidations and/or add a threshold)."
               );
  atexit(FUN_142e09726);
  local_70._0_4_ = 1;
  local_88 = 0x20;
  FUN_14078dbce(&DAT_14ca142a8,L"r.Nanite.RasterSetupTask",&local_70,&DAT_149dfb77a);
  atexit(FUN_142e0976b);
  local_70._0_4_ = 1;
  local_88 = 0x20;
  FUN_14078dbce(&DAT_14ca142c0,L"r.Nanite.RasterSetupCache",&local_70,&DAT_149dfb77a);
  atexit(FUN_142e097b0);
  local_70._0_4_ = 0x3f800000;
  local_88 = 0x20;
  FUN_140a6b41e(&DAT_14ca19750,L"r.Nanite.MaxPixelsPerEdge",&local_70,
                L"The triangle edge length that the Nanite runtime targets, measured in pixels.");
  atexit(FUN_142e097f5);
  local_70._0_4_ = 5;
  local_88 = 0x20;
  FUN_14078dbce(&DAT_14ca142d8,L"r.Nanite.ImposterMaxPixels",&local_70,
                L"The maximum size of imposters measured in pixels.");
  atexit(FUN_142e0983a);
  local_70._0_4_ = 0x42000000;
  local_88 = 0x20;
  FUN_140a6b41e(&DAT_14ca19768,L"r.Nanite.MinPixelsPerEdgeHW",&local_70,
                L"The triangle edge length in pixels at which Nanite starts using the hardware rasterizer."
               );
  atexit(FUN_142e0987f);
  local_70._0_4_ = 0x40000000;
  local_88 = 0x20;
  FUN_140a6b41e(&DAT_14ca142f0,L"r.Nanite.DicingRate",&local_70,
                L"Size of the micropolygons that Nanite tessellation will dice to, measured in pixels."
               );
  atexit(FUN_142e098c4);
  local_70._0_4_ = 5;
  local_88 = 0x20;
  FUN_14078dbce(&DAT_14ca14308,L"r.Nanite.MaxPatchesPerGroup",&local_70,
                L"Maximum number of patches to process per patch rasterizer group.");
  atexit(FUN_142e09909);
  local_70._0_4_ = 1;
  local_88 = 0x20;
  FUN_14078dbce(&DAT_14ca14320,L"r.Nanite.FastVisBufferClear",&local_70,
                L"Whether the fast clear optimization is enabled. Set to 2 for tile clear.");
  atexit(FUN_142e0994e);
  local_70._0_4_ = 0x40400000;
  local_88 = 0x20;
  FUN_140a6b41e(&DAT_14ca14338,L"r.Nanite.RasterIndirectionMultiplier",&local_70,&DAT_149dfb77a);
  atexit(FUN_142e09993);
  local_70._0_4_ = 0;
  local_88 = 0x20;
  FUN_14078dbce(&DAT_14ca14350,L"r.Nanite.Bundle.Raster",&local_70,
                L"Whether to enable Nanite shader bundle dispatch for raster");
  atexit(FUN_142e099d8);
  local_70._0_4_ = 1;
  local_88 = 0x20;
  FUN_14078dbce(&DAT_14ca14368,L"r.Nanite.Bundle.RasterSW",&local_70,
                L"Whether to enable Nanite shader bundle dispatch for Software raster");
  atexit(FUN_142e09a1d);
  local_70._0_4_ = 1;
  local_88 = 0x20;
  FUN_14078dbce(&DAT_14ca14380,L"r.Nanite.Bundle.RasterHW",&local_70,
                L"Whether to enable Nanite shader bundle dispatch for Hardware raster");
  atexit(FUN_142e09a62);
  local_70._0_4_ = 1;
  local_88 = 0x20;
  FUN_14078dbce(&DAT_14ca14398,L"r.Nanite.RasterSort",&local_70,
                L"Whether to enable sorting of rasterizer dispatches and draws");
  atexit(FUN_142e09aa7);
  local_70._0_4_ = 1;
  local_88 = 0x20;
  FUN_14078dbce(&DAT_14ca143b0,L"r.Nanite.Culling.HZB",&local_70,
                L"Set to 0 to test disabling Nanite culling due to occlusion by the hierarchical depth buffer."
               );
  atexit(FUN_142e09aec);
  local_70._0_4_ = 1;
  local_88 = 0x20;
  FUN_14078dbce(&DAT_14ca143c8,L"r.Nanite.Culling.Frustum",&local_70,
                L"Set to 0 to test disabling Nanite culling due to being outside of the view frustum."
               );
  atexit(FUN_142e09b31);
  local_70._0_4_ = 1;
  local_88 = 0x20;
  FUN_14078dbce(&DAT_14ca143e0,L"r.Nanite.Culling.GlobalClipPlane",&local_70,
                L"Set to 0 to test disabling Nanite culling due to being beyond the global clip plane.\nNOTE: Has no effect if r.AllowGlobalClipPlane=0."
               );
  atexit(FUN_142e09b76);
  local_70._0_4_ = 1;
  local_88 = 0x20;
  FUN_14078dbce(&DAT_14ca143f8,L"r.Nanite.Culling.DrawDistance",&local_70,
                L"Set to 0 to test disabling Nanite culling due to instance draw distance.");
  atexit(FUN_142e09bbb);
  local_70._0_4_ = 1;
  local_88 = 0x20;
  FUN_14078dbce(&DAT_14ca14410,L"r.Nanite.Culling.WPODisableDistance",&local_70,
                L"Set to 0 to test disabling \'World Position Offset Disable Distance\' for Nanite instances."
               );
  atexit(FUN_142e09c00);
  local_88 = 0x20;
  FUN_141471170(&DAT_14ca14428,L"r.Nanite.Culling.TwoPass",&DAT_14c760830,
                L"Set to 0 to test disabling two pass occlusion culling.");
  atexit(FUN_142e09c45);
  local_70._0_4_ = 0x80;
  local_88 = 0x20;
  FUN_14078dbce(&DAT_14ca14438,L"r.Nanite.LargePageRectThreshold",&local_70,
                L"Threshold for the size in number of virtual pages overlapped of a candidate cluster to be recorded as large in the stats."
               );
  atexit(FUN_142e09c8a);
  local_70._0_4_ = 0;
  local_88 = 0x20;
  FUN_14078dbce(&DAT_14ca14450,L"r.Nanite.PersistentThreadsCulling",&local_70,
                L"Perform node and cluster culling in one combined kernel using persistent threads.It doesn\'t scale threads with GPU size and relies on scheduler behavior, so it is not recommended for non-fixed hardware platforms."
               );
  atexit(FUN_142e09ccf);
  local_70._0_4_ = 0x41f00000;
  local_88 = 0x20;
  FUN_140a6b41e(&DAT_14ca14468,L"r.Nanite.PrimaryRaster.PixelsPerEdgeScaling",&local_70,
                L"Lower limit percentage to scale the Nanite primary raster MaxPixelsPerEdge value when over budget."
               );
  atexit(FUN_142e09d14);
  local_70._0_4_ = 0x42c80000;
  local_88 = 0x20;
  FUN_140a6b41e(&DAT_14ca14480,L"r.Nanite.ShadowRaster.PixelsPerEdgeScaling",&local_70,
                L"Lower limit percentage to scale the Nanite shadow raster MaxPixelsPerEdge value when over budget."
               );
  atexit(FUN_142e09d59);
  local_88 = 0x20;
  FUN_140a6b41e(&DAT_14ca14498,L"r.Nanite.PrimaryRaster.TimeBudgetMs",&DAT_14a29b114,
                L"Frame\'s time budget for Nanite primary raster in milliseconds.");
  atexit(FUN_142e09d9e);
  local_88 = 0x20;
  FUN_140a6b41e(&DAT_14ca144b0,L"r.Nanite.ShadowRaster.TimeBudgetMs",&DAT_14a29b114,
                L"Frame\'s time budget for Nanite shadow raster in milliseconds.");
  atexit(FUN_142e09de3);
  local_70._0_4_ = 0x3f800000;
  local_88 = 0x20;
  FUN_140a6b41e(&DAT_14ca144c8,L"r.Nanite.OccludedInstancesBufferSizeMultiplier",&local_70,L"DEBUG")
  ;
  atexit(FUN_142e09e28);
  local_70._0_4_ = 0x400000;
  local_88 = 0x20;
  FUN_14078dbce(&DAT_14ca144e0,L"r.Nanite.InstanceHierarchyArgsMaxWorkGroups",&local_70,
                L"Sanitize instance hierarchy arguments to prevent dispatching more workgroups than there are items to consume.\n  Sets the dispatch work group size to the minimum of the group work buffer size and the value provided in this cvar.\n  Setting it to zero disables the clamping kernel.\n\tNOTE: This cvar is only for testing/hot fixing purposes."
               );
  atexit(FUN_142e09e6d);
  local_88 = 0x20;
  FUN_14153156c(&DAT_14ca14500,L"r.Nanite.GbxUseGrassLODBias",&DAT_14ca144f8,
                L"Whether we want to add a LODBias to landscape grass");
  atexit(FUN_142e09eb2);
  local_88 = 0x20;
  FUN_1415c789c(&DAT_14ca14510,L"r.Nanite.GbxGrassLODBiasStartDistance",&DAT_14c760834,
                L"Distance at which we should start applying the grass LODBias");
  atexit(FUN_142e09ef7);
  local_88 = 0x20;
  FUN_1415c789c(&DAT_14ca14520,L"r.Nanite.GbxGrassLODBiasEndDistance",&DAT_14c760838,
                L"Distance at which we should reach the max LOD Bias value given by r.Nanite.GbxLODBiasEndValue"
               );
  atexit(FUN_142e09f3c);
  local_88 = 0x20;
  FUN_1415c789c(&DAT_14ca14530,L"r.Nanite.GbxMaxLODBiasValue",&DAT_14c76083c,
                L"Maximum value of the LOD bias reached when we are past r.Nanite.GbxGrassLODBiasEndDistance. Must be between > 0 and <= 1 (=1 means no bias)"
               );
  atexit(FUN_142e09f81);
  FUN_1431f2c9c(&DAT_14ca19618,L"DynamicNaniteScalingPrimary",FUN_142e09fc6);
  atexit((_func_5014 *)&LAB_142e0a0e9);
  FUN_1431f2c9c(&DAT_14ca14540,L"DynamicNaniteScalingShadow",FUN_142e0a0f5);
  atexit((_func_5014 *)&LAB_142e0a218);
  local_70 = (undefined8 *)((ulonglong)local_70._4_4_ << 0x20);
  local_88 = 0x20;
  FUN_14078dbce(&DAT_14ca145a8,L"r.Nanite.TestPrecacheDrawSkipping",&local_70,
                L"Set to 1 to pretend all programmable raster draws are not precached yet.");
  atexit(FUN_142e0a224);
  local_68 = FUN_14154db20;
  local_70 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca146d8,&local_70);
  local_68 = FUN_145eadba0;
  local_70 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca14800,&local_70);
  local_68 = FUN_147251b82;
  local_70 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca14928,&local_70);
  local_68 = FUN_1415922b8;
  local_70 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca14a50,&local_70);
  local_68 = FUN_144a8fec8;
  local_70 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca14b78,&local_70);
  local_68 = FUN_141597556;
  local_70 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca14ca0,&local_70);
  local_68 = FUN_147252118;
  local_70 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca14dc8,&local_70);
  local_68 = FUN_141579e8e;
  local_70 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca14ef0,&local_70);
  local_68 = FUN_145f508bc;
  local_70 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca15018,&local_70);
  local_68 = FUN_147252590;
  local_70 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca15140,&local_70);
  local_68 = FUN_145e584a4;
  local_70 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca15268,&local_70);
  local_68 = FUN_145e58a0e;
  local_70 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca15390,&local_70);
  local_68 = FUN_1415710bc;
  local_70 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca154b8,&local_70);
  local_68 = FUN_147252b26;
  local_70 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca155e0,&local_70);
  local_68 = FUN_147252d66;
  local_70 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca15708,&local_70);
  local_68 = FUN_144a913d2;
  local_70 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca15830,&local_70);
  local_68 = FUN_1472530c4;
  local_70 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca15958,&local_70);
  local_68 = FUN_147253304;
  local_70 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca15a80,&local_70);
  local_68 = FUN_147253540;
  local_70 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca15ba8,&local_70);
  local_68 = FUN_147253780;
  local_70 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca15cd0,&local_70);
  local_68 = FUN_1472539c0;
  local_70 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca15df8,&local_70);
  local_68 = FUN_147253c00;
  local_70 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca15f20,&local_70);
  local_68 = FUN_147253e40;
  local_70 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca16048,&local_70);
  local_68 = FUN_144a8bf78;
  local_70 = (undefined8 *)&DAT_142bc70ae;
  FUN_1412df486(&DAT_14ca16170,&local_70);
  local_68 = FUN_1460d5f1c;
  local_70 = (undefined8 *)&DAT_142bc70ae;
  FUN_1412df486(&DAT_14ca16298,&local_70);
  local_68 = FUN_1460ae02c;
  local_70 = (undefined8 *)&DAT_142bc70ae;
  FUN_1412df486(&DAT_14ca163c0,&local_70);
  local_68 = FUN_144a93d20;
  local_70 = (undefined8 *)&DAT_142bc70ae;
  FUN_1412df486(&DAT_14ca164e8,&local_70);
  local_68 = FUN_144a93e44;
  local_70 = (undefined8 *)&DAT_142bc70ae;
  FUN_1412df486(&DAT_14ca16610,&local_70);
  _DAT_14ca16628 = 0xffffffff;
  DAT_14ca1662c = 5;
  DAT_14ca1662d = 1;
  DAT_14ca1662e = 0;
  _DAT_14ca16630 = 0;
  DAT_14ca16638 = 0;
  _DAT_14ca16640 = 0;
  _DAT_14ca16648 = 0;
  DAT_14ca16650 = 0;
  _DAT_14ca16658 = 0;
  DAT_14ca16620 = &PTR_FUN_14a299f30;
  FUN_1462f2d9c();
  atexit((_func_5014 *)&LAB_142e0a68d);
  local_68 = FUN_145f50eb2;
  local_70 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca167c8,&local_70);
  local_68 = FUN_145f514a8;
  local_70 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca168f0,&local_70);
  local_68 = FUN_144a914f4;
  local_70 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca16a18,&local_70);
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e45b44 FUN_142e45b44 body=69 status=ok
// SIG undefined FUN_142e45b44(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e45b44(void)

{
  _DAT_14ca19790 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e45b86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca19798,1);
  return;
}



// FUNCTION 142e45bcb FUN_142e45bcb body=69 status=ok
// SIG undefined FUN_142e45bcb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e45bcb(void)

{
  _DAT_14ca199f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e45c0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca19a00,1);
  return;
}



// FUNCTION 142e45c10 FUN_142e45c10 body=69 status=ok
// SIG undefined FUN_142e45c10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e45c10(void)

{
  _DAT_14ca19a10 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e45c52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca19a18,1);
  return;
}



// FUNCTION 142e45c55 FUN_142e45c55 body=69 status=ok
// SIG undefined FUN_142e45c55(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e45c55(void)

{
  _DAT_14ca19a28 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e45c97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca19a30,1);
  return;
}



// FUNCTION 142e45c9a FUN_142e45c9a body=69 status=ok
// SIG undefined FUN_142e45c9a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e45c9a(void)

{
  _DAT_14ca19a40 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e45cdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca19a48,1);
  return;
}



// FUNCTION 142e45cdf FUN_142e45cdf body=69 status=ok
// SIG undefined FUN_142e45cdf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e45cdf(void)

{
  _DAT_14ca19a58 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e45d21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca19a60,1);
  return;
}



// FUNCTION 142e45d24 FUN_142e45d24 body=69 status=ok
// SIG undefined FUN_142e45d24(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e45d24(void)

{
  _DAT_14ca19a70 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e45d66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca19a78,1);
  return;
}



// FUNCTION 142e45d69 FUN_142e45d69 body=69 status=ok
// SIG undefined FUN_142e45d69(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e45d69(void)

{
  _DAT_14ca19a88 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e45dab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca19a90,1);
  return;
}



// FUNCTION 142e45dae FUN_142e45dae body=69 status=ok
// SIG undefined FUN_142e45dae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e45dae(void)

{
  _DAT_14ca19aa0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e45df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca19aa8,1);
  return;
}



// FUNCTION 142e45df3 FUN_142e45df3 body=69 status=ok
// SIG undefined FUN_142e45df3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e45df3(void)

{
  _DAT_14ca19ab8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e45e35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca19ac0,1);
  return;
}



// FUNCTION 142e45e38 FUN_142e45e38 body=294 status=ok
// SIG undefined FUN_142e45e38(void)

void FUN_142e45e38(undefined4 *param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  lVar3 = FUN_14489a2c5(param_2,&DAT_14ca63c48,&DAT_14ca63c78,4,2,0);
  cVar1 = *(char *)(lVar3 + 0x68);
  puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar4 = puVar5 + 9;
  if (*(undefined8 **)(param_2 + 0x78) < puVar4) {
    FUN_140023dd8((longlong *)(param_2 + 0x70),0x50);
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 9;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar4;
  puVar5[1] = *(undefined8 *)(lVar3 + 8);
  puVar5[2] = 0;
  *(undefined1 *)(puVar5 + 3) = 3;
  *(undefined8 *)((longlong)puVar5 + 0x1c) = 0xffffffffffffffff;
  *puVar5 = &PTR_FUN_14a1fb168;
  *(byte *)(puVar5 + 5) = cVar1 >> 7 & 0x1c;
  *(undefined8 *)((longlong)puVar5 + 0x2c) = 0xffffffff00000000;
  puVar5[7] = 0;
  puVar5[8] = lVar3;
  iVar2 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar2 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar2 + 1U) {
    FUN_1447568fc(param_2 + 0x198,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar2 * 8) = puVar5;
  *(int *)((longlong)puVar5 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  *param_1 = 0;
  *(undefined8 **)(param_1 + 2) = puVar5;
  *(undefined8 **)(param_1 + 4) = puVar5;
  return;
}



// FUNCTION 142e45f5e FUN_142e45f5e body=82 status=ok
// SIG undefined FUN_142e45f5e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e45f5e(void)

{
  longlong *plVar1;
  
  _DAT_14ca19ae0 = &PTR__purecall_14a222c38;
  if (DAT_14ca19b10 != 0) {
    plVar1 = &DAT_14ca19b30;
    if (DAT_14ca19b20 != (longlong *)0x0) {
      plVar1 = DAT_14ca19b20;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14ca19af0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 142e45fb0 FUN_142e45fb0 body=69 status=ok
// SIG undefined FUN_142e45fb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e45fb0(void)

{
  _DAT_14ca19b50 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e45ff2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca19b58,1);
  return;
}



// FUNCTION 142e45ff5 FUN_142e45ff5 body=69 status=ok
// SIG undefined FUN_142e45ff5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e45ff5(void)

{
  _DAT_14ca19b60 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e46037. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca19b68,1);
  return;
}



// FUNCTION 142e4603a FUN_142e4603a body=69 status=ok
// SIG undefined FUN_142e4603a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e4603a(void)

{
  _DAT_14ca19b78 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e4607c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca19b80,1);
  return;
}



// FUNCTION 142e4607f FUN_142e4607f body=69 status=ok
// SIG undefined FUN_142e4607f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e4607f(void)

{
  _DAT_14ca19b90 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e460c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca19b98,1);
  return;
}



// FUNCTION 142e460c4 FUN_142e460c4 body=69 status=ok
// SIG undefined FUN_142e460c4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e460c4(void)

{
  _DAT_14ca19ba0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e46106. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca19ba8,1);
  return;
}



// FUNCTION 142e46109 FUN_142e46109 body=69 status=ok
// SIG undefined FUN_142e46109(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e46109(void)

{
  _DAT_14ca19bb0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e4614b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca19bb8,1);
  return;
}



// FUNCTION 142e4614e FUN_142e4614e body=69 status=ok
// SIG undefined FUN_142e4614e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e4614e(void)

{
  _DAT_14ca19bc0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e46190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca19bc8,1);
  return;
}



// FUNCTION 142e46193 FUN_142e46193 body=69 status=ok
// SIG undefined FUN_142e46193(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e46193(void)

{
  _DAT_14ca19bd0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e461d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca19bd8,1);
  return;
}



// FUNCTION 142e461d8 FUN_142e461d8 body=69 status=ok
// SIG undefined FUN_142e461d8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e461d8(void)

{
  _DAT_14ca19be0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e4621a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca19be8,1);
  return;
}



// FUNCTION 142e4621e FUN_142e4621e body=955 status=ok
// SIG undefined FUN_142e4621e(void)

void FUN_142e4621e(longlong param_1)

{
  int *piVar1;
  uint *puVar2;
  undefined8 **ppuVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e0;
  undefined8 local_d0;
  undefined8 *local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_98 = 0;
  local_a0 = 0x10109;
  local_a8 = 0x800000004;
  FUN_14490af1f(&local_c8,&local_a8,L"NaniteRayTracing.AuxiliaryDataBuffer",1);
  ppuVar3 = (undefined8 **)(param_1 + 0x188);
  if (ppuVar3 == &local_c8) {
LAB_142e46292:
    if (local_c8 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_c8 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_c8)(local_c8,1);
      }
    }
  }
  else {
    puVar10 = *ppuVar3;
    *ppuVar3 = local_c8;
    local_c8 = (undefined8 *)0x0;
    if (puVar10 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar10 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar10)(puVar10,1);
      }
      goto LAB_142e46292;
    }
  }
  local_88 = (*ppuVar3)[6];
  local_80 = local_88;
  local_78 = local_88;
  FUN_145e2f24e();
  local_e0 = 1;
  local_e8 = 2;
  (**(code **)(*DAT_14ca83900 + 0x138))(DAT_14ca83900,&local_c8,&local_a8,DAT_14ca1a3a8);
  puVar10 = local_c8;
  if (local_c8 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(local_c8 + 1) = *(int *)(local_c8 + 1) + 1;
    UNLOCK();
    if (local_c8 != (undefined8 *)0x0) {
      LOCK();
      puVar2 = (uint *)(local_c8 + 1);
      uVar4 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar4 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(local_c8 + 1);
        LOCK();
        uVar4 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar4 >> 0x1e & 1) == 0) {
          bVar5 = *(byte *)((longlong)local_c8 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = (longlong)puVar10;
          plVar11 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar5 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar11;
              LOCK();
              bVar13 = plVar11 != DAT_14ca843c0;
              plVar8 = plVar7;
              if (bVar13) {
                plVar11 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar13);
          }
          else {
            do {
              *plVar7 = (longlong)plVar8;
              LOCK();
              bVar13 = plVar8 != DAT_14ca843c8;
              plVar11 = plVar7;
              if (bVar13) {
                plVar8 = DAT_14ca843c8;
                plVar11 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar11;
              UNLOCK();
            } while (bVar13);
          }
        }
      }
    }
  }
  lVar9 = *(longlong *)(param_1 + 0x2c0);
  *(undefined8 **)(param_1 + 0x2c0) = puVar10;
  if (lVar9 != 0) {
    LOCK();
    puVar2 = (uint *)(lVar9 + 8);
    uVar4 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar4 & 0x3fffffff) == 1) {
      puVar2 = (uint *)(lVar9 + 8);
      LOCK();
      uVar4 = *puVar2;
      *puVar2 = *puVar2 | 0x40000000;
      UNLOCK();
      if ((uVar4 >> 0x1e & 1) == 0) {
        bVar5 = *(byte *)(lVar9 + 0xd);
        plVar7 = (longlong *)FUN_14001cc68(0x10,8);
        plVar7[1] = lVar9;
        plVar11 = DAT_14ca843c0;
        plVar8 = DAT_14ca843c8;
        if ((bVar5 & 2) == 0) {
          do {
            *plVar7 = (longlong)plVar11;
            LOCK();
            bVar13 = plVar11 != DAT_14ca843c0;
            plVar8 = plVar7;
            if (bVar13) {
              plVar11 = DAT_14ca843c0;
              plVar8 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar8;
            UNLOCK();
          } while (bVar13);
        }
        else {
          do {
            *plVar7 = (longlong)plVar8;
            LOCK();
            bVar13 = plVar8 != DAT_14ca843c8;
            plVar11 = plVar7;
            if (bVar13) {
              plVar8 = DAT_14ca843c8;
              plVar11 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar11;
            UNLOCK();
          } while (bVar13);
        }
      }
    }
  }
  if ((((DAT_14c760e34 == 0) ||
       (lVar9 = (ulonglong)DAT_14ca85550 * 0x3c,
       (*(byte *)((longlong)&DAT_14ca814d8 + lVar9 + 3) & 0x10) == 0)) ||
      (((&DAT_14ca814c8)[(ulonglong)DAT_14ca85550 * 0xf] & 0x20000000) == 0)) ||
     ((*(uint *)(&DAT_14ca814cc + lVar9) & 8) == 0)) goto LAB_142e46429;
  local_b8 = 0;
  local_c0 = 0x10109;
  local_c8 = (undefined8 *)0x800000004;
  FUN_14490af1f(&local_b0,&local_c8,L"NaniteRayTracing.StagingAuxiliaryDataBuffer",1);
  ppuVar3 = (undefined8 **)(param_1 + 0x268);
  if (ppuVar3 == &local_b0) {
LAB_142e464b2:
    if (local_b0 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_b0 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_b0)(local_b0,1);
      }
    }
  }
  else {
    puVar10 = *ppuVar3;
    *ppuVar3 = local_b0;
    local_b0 = (undefined8 *)0x0;
    if (puVar10 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar10 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar10)(puVar10,1);
      }
      goto LAB_142e464b2;
    }
  }
  FUN_145d1867a(param_1 + 0x280,*(undefined4 *)(param_1 + 0x2c8));
  iVar6 = *(int *)(param_1 + 0x288);
  if ((longlong)iVar6 != 0) {
    lVar9 = *(longlong *)(param_1 + 0x280);
    lVar12 = 0;
    do {
      puVar10 = (undefined8 *)FUN_14001cc68(0x58,0x10);
      FUN_1446f470e(&local_d0,L"NaniteRayTracing.MeshDataReadbackBuffer",1);
      FUN_14047abb0(puVar10,local_d0);
      *puVar10 = &PTR_FUN_14a37f800;
      puVar10[3] = 0;
      puVar10[4] = 0;
      puVar10[5] = 0;
      puVar10[6] = 0;
      puVar10[7] = 0;
      puVar10[8] = 0;
      puVar10[9] = 0;
      puVar10[10] = 0;
      *(undefined8 **)(lVar9 + lVar12) = puVar10;
      lVar12 = lVar12 + 0x20;
    } while ((longlong)iVar6 * 0x20 != lVar12);
  }
  *(undefined1 *)(param_1 + 0x2cf) = 1;
LAB_142e46429:
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142e465da FUN_142e465da body=713 status=ok
// SIG undefined FUN_142e465da(void)

void FUN_142e465da(longlong param_1,longlong *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  char cVar3;
  byte bVar4;
  longlong *plVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int *piVar11;
  bool bVar12;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca97070) && (FUN_144b3d300(&DAT_14ca97070), DAT_14ca97070 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar5 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Raytracing.Enable",1)
    ;
    if (plVar5 == (longlong *)0x0) {
      DAT_14ca97068 = 0;
    }
    else {
      DAT_14ca97068 = (**(code **)(*plVar5 + 0x68))(plVar5);
    }
    _Init_thread_footer(&DAT_14ca97070);
  }
  lVar10 = DAT_14ca97068;
  bVar12 = true;
  cVar3 = DAT_14ca96da8;
  if (DAT_14ca97068 != 0 && DAT_14ca96da8 == '\x02') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar7 = 0;
      cVar3 = '\x02';
    }
    else {
      bVar4 = FUN_144a61b4f();
      uVar7 = (ulonglong)(bVar4 ^ 1);
      cVar3 = DAT_14ca96da8;
    }
    bVar12 = *(int *)(lVar10 + uVar7 * 4) != 0;
  }
  uVar2 = local_78;
  if (((bVar12) && (cVar3 != '\0')) && (DAT_14caff4f8 != '\0')) {
    plVar5 = param_2 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    uStack_50 = 0;
    uStack_60 = plVar5;
    if ((int)param_2[5] == 0) {
      iVar8 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar8 = (int)param_2[5];
    }
    local_88 = (undefined4)local_68;
    uStack_84 = local_68._4_4_;
    uStack_80 = (undefined4)uStack_60;
    uStack_7c = uStack_60._4_4_;
    uStack_70 = CONCAT44(uStack_4c,uStack_50);
    local_78 = local_58;
    uVar2 = local_78;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_2;
    if ((local_78._4_4_ != iVar8) || (uStack_60 != plVar5)) {
      iVar6 = local_78._4_4_;
      local_78 = uVar2;
      do {
        if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
          uVar1 = *(uint *)(*local_90 + (longlong)iVar6 * 0x10);
          lVar10 = *(longlong *)(param_1 + 0x50);
          if (*(longlong *)(param_1 + 0x50) == 0) {
            lVar10 = param_1 + 0x48;
          }
          iVar9 = *(int *)(lVar10 + (ulonglong)(*(int *)(param_1 + 0x58) - 1U & uVar1) * 4);
          if (iVar9 != -1) {
            do {
              lVar10 = *(longlong *)(param_1 + 0x10) + (longlong)iVar9 * 0x10;
              if (*(uint *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar9 * 0x10) == uVar1) {
                piVar11 = (int *)(lVar10 + 4);
                if (piVar11 != (int *)0x0 && lVar10 != 0) {
                  *(undefined4 *)
                   (*(longlong *)(*(longlong *)(param_1 + 0x60) + (longlong)*piVar11 * 8) + 0x74) =
                       *(undefined4 *)(*local_90 + (longlong)iVar6 * 0x10 + 4);
                  FUN_144980568(param_1 + 0x98,&local_68,piVar11,0);
                }
                break;
              }
              iVar9 = *(int *)(lVar10 + 8);
            } while (iVar9 != -1);
          }
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
        FUN_1449c0562(&local_88);
        iVar6 = local_78._4_4_;
        uVar2 = local_78;
      } while (local_90 != param_2 ||
               ((longlong *)CONCAT44(uStack_7c,uStack_80) != plVar5 || local_78._4_4_ != iVar8));
    }
  }
  local_78 = uVar2;
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142e468a4 FUN_142e468a4 body=4943 status=ok
// SIG undefined FUN_142e468a4(void)

void FUN_142e468a4(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 **ppuVar2;
  undefined8 **ppuVar3;
  int *piVar4;
  char cVar5;
  undefined8 uVar6;
  byte bVar7;
  uint uVar8;
  undefined4 uVar9;
  uint *puVar10;
  undefined *puVar11;
  uint *puVar12;
  ulonglong *puVar13;
  int *piVar14;
  undefined8 uVar15;
  longlong *plVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  undefined *puVar23;
  ulonglong uVar24;
  undefined8 *puVar25;
  int iVar26;
  undefined *puVar27;
  longlong lVar28;
  int iVar29;
  longlong lVar30;
  longlong lVar31;
  uint uVar32;
  ulonglong uVar33;
  int *piVar34;
  ulonglong uVar35;
  undefined8 *puVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  undefined1 auStack_198 [32];
  undefined *local_178;
  longlong local_170;
  longlong local_168;
  uint *local_160;
  ulonglong local_158;
  undefined8 local_150;
  undefined8 local_148;
  int local_140;
  undefined8 local_138;
  undefined4 local_130;
  ulonglong local_120;
  longlong local_118;
  undefined8 *local_110;
  uint *local_108;
  longlong local_100;
  ulonglong local_f8;
  ulonglong *local_f0;
  ulonglong local_e8;
  longlong local_e0;
  ulonglong local_d8;
  int *local_d0;
  ulonglong local_c8;
  undefined8 local_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  undefined8 uStack_90;
  uint local_88 [4];
  uint *local_78;
  uint local_70;
  undefined8 local_6c;
  int local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  iVar29 = 0x800;
  if (DAT_14c760854 < 0x800) {
    iVar29 = DAT_14c760854;
  }
  DAT_14c760854 = iVar29;
  if (DAT_14ca19b70 == '\x01') {
    FUN_146b653f4(param_1 + 0x98,param_1 + 0xe8);
    DAT_14ca19b70 = '\0';
  }
  if ((((DAT_14c760844 != '\x01') || (DAT_14caff4f8 == '\0')) ||
      (*(char *)(param_1 + 0x2ce) != '\0')) ||
     (*(int *)(param_1 + 0xa0) == *(int *)(param_1 + 0xcc))) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_198);
  }
  local_78 = (uint *)0x0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_110 = (undefined8 *)(param_1 + 0xe8);
  puVar12 = (uint *)(param_1 + 0xf8);
  iVar29 = *(int *)(param_1 + 0x110);
  local_118 = param_1;
  local_e0 = param_2;
  local_c0 = param_3;
  if (iVar29 == 0) {
    uVar38 = 1;
    iVar26 = 0;
    uVar37 = 0;
    iVar19 = 0;
  }
  else {
    puVar10 = *(uint **)(param_1 + 0x108);
    if (*(uint **)(param_1 + 0x108) == (uint *)0x0) {
      puVar10 = puVar12;
    }
    uVar8 = *puVar10;
    if (uVar8 == 0) {
      iVar19 = iVar29 + 0x1e;
      if (-1 < iVar29 + -1) {
        iVar19 = iVar29 + -1;
      }
      uVar38 = (ulonglong)(uint)(iVar19 >> 5);
      if (iVar19 >> 5 < 1) {
        uVar38 = 0;
      }
      uVar37 = 0;
      iVar26 = 0;
      do {
        if (uVar38 == uVar37) {
          local_120 = 0;
          local_f8 = 0;
          uVar35 = 0;
          goto LAB_142e46aaf;
        }
        iVar26 = iVar26 + 0x20;
        uVar8 = puVar10[uVar37 + 1];
        uVar37 = uVar37 + 1;
      } while (uVar8 == 0);
    }
    else {
      iVar26 = 0;
      uVar37 = 0;
    }
    uVar38 = (ulonglong)(-uVar8 & uVar8);
    uVar35 = uVar38 * 2 + 1;
    lVar28 = 0x3f;
    if (uVar35 != 0) {
      for (; uVar35 >> lVar28 == 0; lVar28 = lVar28 + -1) {
      }
    }
    iVar19 = (iVar26 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
    if (iVar29 <= iVar19) {
      iVar19 = iVar29;
    }
  }
  local_120 = 0;
  local_f8 = 0;
  uVar35 = 0;
  if (iVar19 != iVar29) {
    local_100 = param_1 + 0xd0;
    local_f0 = (ulonglong *)(param_1 + 0xa8);
    uVar8 = 0xffffffff;
    local_f8 = 0;
    uVar24 = 0;
    local_120 = 0;
    iVar22 = iVar29;
    local_108 = puVar12;
LAB_142e46c8d:
    iVar19 = *(int *)(*(longlong *)(param_1 + 0xe8) + (longlong)iVar19 * 0xc);
    local_b0 = (undefined8 *)CONCAT44(local_b0._4_4_,iVar19);
    uVar35 = uVar24;
    if (*(int *)(param_1 + 0xa0) != *(int *)(param_1 + 0xcc)) {
      lVar28 = *(longlong *)(param_1 + 0xd8);
      if (*(longlong *)(param_1 + 0xd8) == 0) {
        lVar28 = local_100;
      }
      uVar33 = (longlong)*(int *)(param_1 + 0xe0) - 1U & (longlong)iVar19;
      iVar20 = *(int *)(lVar28 + (uVar33 & 0xffffffff) * 4);
      if (iVar20 != -1) {
        do {
          if (*(int *)(*(longlong *)(param_1 + 0x98) + (longlong)iVar20 * 0xc) == iVar19) {
            lVar30 = *(longlong *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar19 * 8);
            local_d8 = (ulonglong)(uint)(*(int *)(lVar30 + 0x74) * 0x80 + (int)uVar24);
            if ((ulonglong)((longlong)DAT_14c760854 << 0x14) <= local_d8 * 4) goto LAB_142e46aaf;
            if (DAT_14ca19bf0 != '\0') goto LAB_142e46e04;
            piVar14 = (int *)(lVar28 + uVar33 * 4);
            goto LAB_142e46e87;
          }
          iVar20 = *(int *)(*(longlong *)(param_1 + 0x98) + (longlong)iVar20 * 0xc + 4);
        } while (iVar20 != -1);
      }
    }
    goto LAB_142e46d11;
  }
LAB_142e46aaf:
  FUN_1403d43ee(local_110,0);
  lVar28 = local_e0;
  uVar37 = (ulonglong)(uint)((int)uStack_90 - local_64);
  if ((int)uStack_90 - local_64 == 0) goto LAB_142e47b17;
  *(undefined1 *)(param_1 + 0x2ce) = 1;
  local_110 = (undefined8 *)
              ((longlong)*(int *)(param_1 + 0x290) * 0x20 + *(longlong *)(param_1 + 0x280));
  puVar13 = (ulonglong *)(local_e0 + 0x70);
  lVar30 = uVar37 * 0x18;
  puVar11 = *(undefined **)(local_e0 + 0x78);
  uVar38 = *(longlong *)(local_e0 + 0x70) + 3U & 0xfffffffffffffffc;
  puVar27 = (undefined *)(uVar38 + lVar30);
  local_d8 = uVar35;
  if (puVar11 < puVar27) {
    FUN_140023dd8(puVar13,(uint)lVar30 | 4);
    puVar11 = *(undefined **)(lVar28 + 0x78);
    uVar38 = *(longlong *)(lVar28 + 0x70) + 3U & 0xfffffffffffffffc;
    puVar27 = (undefined *)(lVar30 + uVar38);
  }
  *puVar13 = (ulonglong)puVar27;
  puVar23 = puVar27 + (local_120 & 0xffffffff) * 4;
  if (puVar11 < puVar23) {
    lVar28 = (local_120 & 0xffffffff) * 4;
    FUN_140023dd8(puVar13,(int)lVar28 + 4);
    puVar27 = (undefined *)(*puVar13 + 3 & 0xfffffffffffffffc);
    puVar23 = puVar27 + lVar28;
  }
  *puVar13 = (ulonglong)puVar23;
  local_f0 = puVar13;
  local_c8 = uVar37;
  if (local_70 == 0) {
    uVar37 = 1;
    uVar35 = 0;
    iVar29 = 0;
    uVar8 = 0;
  }
  else {
    puVar12 = local_78;
    if (local_78 == (uint *)0x0) {
      puVar12 = local_88;
    }
    uVar8 = *puVar12;
    if (uVar8 == 0) {
      iVar29 = local_70 + 0x1e;
      if (-1 < (int)(local_70 - 1)) {
        iVar29 = local_70 - 1;
      }
      uVar35 = 0;
      uVar37 = (ulonglong)(uint)(iVar29 >> 5);
      if (iVar29 >> 5 < 1) {
        uVar37 = uVar35;
      }
      iVar29 = 0;
      do {
        if (uVar37 == uVar35) goto LAB_142e47011;
        iVar29 = iVar29 + 0x20;
        uVar8 = puVar12[uVar35 + 1];
        uVar35 = uVar35 + 1;
      } while (uVar8 == 0);
    }
    else {
      uVar35 = 0;
      iVar29 = 0;
    }
    uVar37 = (ulonglong)(-uVar8 & uVar8);
    uVar24 = uVar37 * 2 + 1;
    lVar28 = 0x3f;
    if (uVar24 != 0) {
      for (; uVar24 >> lVar28 == 0; lVar28 = lVar28 + -1) {
      }
    }
    uVar8 = (iVar29 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
    if ((int)local_70 <= (int)uVar8) {
      uVar8 = local_70;
    }
  }
  if (uVar8 != local_70) {
    local_108 = (uint *)(local_110 + 2);
    uVar32 = 0xffffffff;
    uVar24 = 0;
    iVar19 = 0;
    puVar18 = local_110;
    local_d0 = (int *)(ulonglong)local_70;
    do {
      local_100 = CONCAT44(local_100._4_4_,iVar29);
      iVar29 = *(int *)(local_98 + (longlong)(int)uVar8 * 0xc);
      lVar28 = *(longlong *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar29 * 8);
      lVar30 = (longlong)(int)uVar24;
      *(undefined4 *)(uVar38 + lVar30 * 0x18) = *(undefined4 *)(lVar28 + 0x78);
      *(undefined4 *)(uVar38 + 4 + lVar30 * 0x18) = *(undefined4 *)(lVar28 + 0x68);
      *(undefined4 *)(uVar38 + 8 + lVar30 * 0x18) = *(undefined4 *)(lVar28 + 0x6c);
      *(int *)(uVar38 + 0xc + lVar30 * 0x18) = iVar19;
      *(undefined4 *)(uVar38 + 0x10 + lVar30 * 0x18) = *(undefined4 *)(lVar28 + 0xb0);
      *(undefined4 *)(uVar38 + 0x14 + lVar30 * 0x18) = *(undefined4 *)(lVar28 + 0xb4);
      iVar26 = *(int *)(lVar28 + 0x88);
      if ((longlong)iVar26 != 0) {
        lVar28 = *(longlong *)(lVar28 + 0x80);
        lVar30 = 0;
        do {
          *(undefined4 *)(puVar27 + (longlong)iVar19 * 4) = *(undefined4 *)(lVar28 + lVar30);
          iVar19 = iVar19 + 1;
          lVar30 = lVar30 + 4;
        } while ((longlong)iVar26 * 4 != lVar30);
      }
      iVar26 = *(int *)(puVar18 + 3);
      *(uint *)(puVar18 + 3) = iVar26 + 1U;
      if (*(uint *)((longlong)puVar18 + 0x1c) < iVar26 + 1U) {
        local_e8 = uVar24;
        FUN_1447808da(local_108,iVar26);
        uVar24 = local_e8;
        puVar18 = local_110;
      }
      *(int *)(*(longlong *)local_108 + (longlong)iVar26 * 4) = iVar29;
      uVar32 = uVar32 & ~(uint)uVar37;
      puVar12 = local_78;
      if (local_78 == (uint *)0x0) {
        puVar12 = local_88;
      }
      iVar26 = (int)uVar35;
      lVar28 = (longlong)iVar26;
      uVar8 = puVar12[lVar28] & uVar32;
      iVar29 = (int)local_100;
      if (uVar8 == 0) {
        iVar22 = local_70 + 0x1e;
        if (-1 < (int)(local_70 - 1)) {
          iVar22 = local_70 - 1;
        }
        iVar22 = iVar22 >> 5;
        iVar29 = (int)local_100 + 0x20;
        iVar20 = iVar22;
        if (iVar22 < iVar26) {
          iVar20 = iVar26;
        }
        local_e8 = uVar37;
        if (iVar26 < iVar22) {
          lVar30 = 0;
          do {
            uVar8 = puVar12[lVar28 + lVar30 + 1];
            if (uVar8 != 0) {
              uVar35 = (ulonglong)(iVar26 + (int)lVar30 + 1);
              uVar32 = 0xffffffff;
              goto LAB_142e4724a;
            }
            iVar29 = iVar29 + 0x20;
            lVar30 = lVar30 + 1;
          } while (iVar20 - lVar28 != lVar30);
          uVar32 = 0xffffffff;
          iVar26 = iVar20;
        }
        uVar35 = (ulonglong)(iVar26 + 1);
        puVar18 = local_110;
        uVar8 = local_70;
      }
      else {
LAB_142e4724a:
        uVar37 = (ulonglong)(-uVar8 & uVar8);
        uVar33 = uVar37 * 2 + 1;
        lVar28 = 0x3f;
        if (uVar33 != 0) {
          for (; uVar33 >> lVar28 == 0; lVar28 = lVar28 + -1) {
          }
        }
        uVar8 = (iVar29 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
        if ((int)local_70 <= (int)uVar8) {
          uVar8 = local_70;
        }
      }
      uVar24 = (ulonglong)((int)uVar24 + 1);
      param_1 = local_118;
    } while (uVar8 != (uint)local_d0);
  }
LAB_142e47011:
  lVar28 = local_e0;
  local_170 = (longlong)((int)local_c8 * 0x18);
  local_168._0_1_ = 1;
  local_178 = (undefined *)uVar38;
  local_100 = FUN_144942e63(local_e0,L"NaniteRayTracing.RequestBuffer",0x18);
  if ((int)local_120 == 0) {
    local_178 = &DAT_14a2a0630;
    local_170 = 4;
    uVar37 = 1;
  }
  else {
    local_170 = (longlong)((int)local_120 * 4);
    uVar37 = local_120;
    local_178 = puVar27;
  }
  local_168 = CONCAT71(local_168._1_7_,1);
  local_108 = (uint *)FUN_144942e63(lVar28,L"NaniteRayTracing.SegmentMappingBuffer",4,uVar37);
  uVar37 = local_d8;
  puVar13 = local_f0;
  uVar8 = 0x20;
  if (0x20 < (uint)local_f8) {
    uVar8 = (uint)local_f8;
  }
  uVar32 = 4;
  if (DAT_14ca84e48 < 4) {
    uVar32 = DAT_14ca84e48;
  }
  local_a8 = CONCAT44(local_a8._4_4_,0x10129);
  if (DAT_14ca84e48 <= uVar8) {
    uVar8 = DAT_14ca84e48;
  }
  local_a0 = 0;
  local_b0 = (undefined8 *)CONCAT44(uVar8 + (uVar8 == 0),uVar32 + (uVar32 == 0));
  uVar35 = *(longlong *)(lVar28 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar38 = uVar35 + 0x150;
  if (*(ulonglong *)(lVar28 + 0x78) < uVar38) {
    FUN_140023dd8(local_f0,0x160);
    uVar35 = *puVar13 + 0xf & 0xfffffffffffffff0;
    uVar38 = uVar35 + 0x150;
  }
  *(ulonglong *)(lVar28 + 0x70) = uVar38;
  FUN_1456bd266(uVar35,L"NaniteRayTracing.MeshDataBuffer",&local_b0,0);
  iVar29 = *(int *)(lVar28 + 400);
  *(uint *)(lVar28 + 400) = iVar29 + 1U;
  if (*(uint *)(lVar28 + 0x194) < iVar29 + 1U) {
    FUN_144737178(lVar28 + 0x188,iVar29);
  }
  *(ulonglong *)(*(longlong *)(lVar28 + 0x188) + (longlong)iVar29 * 8) = uVar35;
  *(int *)(uVar35 + 0x7c) = *(int *)(lVar28 + 400) + -1;
  cVar5 = *(char *)(uVar35 + 0x68);
  puVar36 = (undefined8 *)(*(longlong *)(lVar28 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar18 = puVar36 + 8;
  if (*(undefined8 **)(lVar28 + 0x78) < puVar18) {
    FUN_140023dd8(puVar13,0x48);
    puVar36 = (undefined8 *)(*puVar13 + 7 & 0xfffffffffffffff8);
    puVar18 = puVar36 + 8;
  }
  *(undefined8 **)(lVar28 + 0x70) = puVar18;
  puVar36[1] = *(undefined8 *)(uVar35 + 8);
  puVar36[2] = 0;
  *(undefined1 *)(puVar36 + 3) = 2;
  *(undefined8 *)((longlong)puVar36 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar36 + 5) = 0;
  *puVar36 = &PTR_FUN_14a1fb3e8;
  *(byte *)(puVar36 + 6) = cVar5 >> 7 & 0x1c;
  *(undefined2 *)((longlong)puVar36 + 0x31) = 0;
  puVar36[7] = uVar35;
  iVar29 = *(int *)(lVar28 + 0x1a0);
  *(uint *)(lVar28 + 0x1a0) = iVar29 + 1U;
  if (*(uint *)(lVar28 + 0x1a4) < iVar29 + 1U) {
    FUN_1447568fc(lVar28 + 0x198,iVar29);
  }
  *(undefined8 **)(*(longlong *)(lVar28 + 0x198) + (longlong)iVar29 * 8) = puVar36;
  *(int *)((longlong)puVar36 + 0x1c) = *(int *)(lVar28 + 0x1a0) + -1;
  FUN_1405bfba3(lVar28,puVar36,0,2);
  lVar30 = local_118;
  uVar38 = 0x400000;
  if (0x400000 < (uint)uVar37) {
    uVar38 = uVar37 & 0xffffffff;
  }
  plVar1 = (longlong *)(local_118 + 0x268);
  local_170 = CONCAT71(local_170._1_7_,1);
  local_178 = (undefined *)((ulonglong)local_178 & 0xffffffffffffff00);
  uVar15 = FUN_142e47c11(lVar28,plVar1,uVar38,L"NaniteRayTracing.StagingAuxiliaryDataBuffer");
  plVar16 = (longlong *)FUN_1449609de(lVar28,uVar15);
  uVar6 = local_c0;
  puVar18 = (undefined8 *)*plVar16;
  puVar36 = *(undefined8 **)(lVar30 + 0x268);
  if (puVar36 != puVar18) {
    *plVar1 = (longlong)puVar18;
    if (puVar18 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
      UNLOCK();
    }
    if (puVar36 != (undefined8 *)0x0) {
      LOCK();
      piVar14 = (int *)(puVar36 + 1);
      *piVar14 = *piVar14 + -1;
      UNLOCK();
      if (*piVar14 == 0) {
        (**(code **)*puVar36)(puVar36,1);
      }
    }
  }
  ppuVar2 = (undefined8 **)(local_118 + 0x270);
  if (*(longlong *)(local_118 + 0x270) == 0) {
    local_a0 = 0;
    local_a8 = CONCAT44(local_a8._4_4_,0x10109);
    local_b0 = (undefined8 *)CONCAT44(DAT_14c760848 * 3,4);
    FUN_14490af1f(&local_b8,&local_b0,L"NaniteRayTracing.VertexBuffer",1);
    if (ppuVar2 != &local_b8) {
      puVar18 = *ppuVar2;
      *ppuVar2 = local_b8;
      local_b8 = (undefined8 *)0x0;
      if (puVar18 == (undefined8 *)0x0) goto LAB_142e475d0;
      LOCK();
      piVar14 = (int *)(puVar18 + 1);
      *piVar14 = *piVar14 + -1;
      UNLOCK();
      if (*piVar14 == 0) {
        (**(code **)*puVar18)(puVar18,1);
      }
    }
    if (local_b8 != (undefined8 *)0x0) {
      LOCK();
      piVar14 = (int *)(local_b8 + 1);
      *piVar14 = *piVar14 + -1;
      UNLOCK();
      if (*piVar14 == 0) {
        (**(code **)*local_b8)(local_b8,1);
      }
    }
  }
LAB_142e475d0:
  ppuVar3 = (undefined8 **)(local_118 + 0x278);
  if (*(longlong *)(local_118 + 0x278) == 0) {
    local_a0 = 0;
    local_a8 = CONCAT44(local_a8._4_4_,0x10109);
    local_b0 = (undefined8 *)CONCAT44(DAT_14c76084c,4);
    FUN_14490af1f(&local_b8,&local_b0,L"NaniteRayTracing.IndexBuffer",1);
    if (ppuVar3 != &local_b8) {
      puVar18 = *ppuVar3;
      *ppuVar3 = local_b8;
      local_b8 = (undefined8 *)0x0;
      if (puVar18 == (undefined8 *)0x0) goto LAB_142e47680;
      LOCK();
      piVar14 = (int *)(puVar18 + 1);
      *piVar14 = *piVar14 + -1;
      UNLOCK();
      if (*piVar14 == 0) {
        (**(code **)*puVar18)(puVar18,1);
      }
    }
    if (local_b8 != (undefined8 *)0x0) {
      LOCK();
      piVar14 = (int *)(local_b8 + 1);
      *piVar14 = *piVar14 + -1;
      UNLOCK();
      if (*piVar14 == 0) {
        (**(code **)*local_b8)(local_b8,1);
      }
    }
  }
LAB_142e47680:
  lVar30 = local_e0;
  lVar28 = local_118;
  uVar17 = FUN_144735dd8(local_e0,ppuVar2,0);
  local_138 = FUN_144735dd8(lVar30,ppuVar3,0);
  lVar30 = local_e0;
  uVar8 = (uint)*(byte *)(lVar28 + 0xc);
  if (*(byte *)(lVar28 + 0xc) == 5) {
    uVar8 = DAT_14c760db4;
  }
  local_130 = DAT_14c76084c;
  local_140 = DAT_14c760848;
  local_160 = local_108;
  local_168 = local_100;
  local_170 = CONCAT44(local_170._4_4_,(int)uStack_90 - local_64);
  local_178 = (undefined *)CONCAT44(local_178._4_4_,DAT_14ca19b88);
  local_158 = uVar35;
  local_150 = uVar15;
  local_148 = uVar17;
  FUN_142e47e9f(local_e0,*(undefined8 *)
                          (&DAT_14ca8c1f0 +
                          (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)(int)uVar8 * 2) * 8),
                uVar6,lVar28 + 0x2b8);
  puVar13 = local_f0;
  if (DAT_14ca19bf0 == '\0') {
    uVar6 = *local_110;
    puVar36 = (undefined8 *)(*(longlong *)(lVar30 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar18 = puVar36 + 4;
    if (*(undefined8 **)(lVar30 + 0x78) < puVar18) {
      FUN_140023dd8(local_f0,0x30);
      puVar36 = (undefined8 *)(*puVar13 + 0xf & 0xfffffffffffffff0);
      puVar18 = puVar36 + 4;
    }
    *(undefined8 **)(lVar30 + 0x70) = puVar18;
    *puVar36 = &PTR_FUN_14a20c998;
    puVar36[2] = 0;
    *(undefined4 *)(puVar36 + 3) = 0x80;
    iVar29 = *(int *)(lVar30 + 0xa0);
    *(uint *)(lVar30 + 0xa0) = iVar29 + 1U;
    if (*(uint *)(lVar30 + 0xa4) < iVar29 + 1U) {
      FUN_1448cfae8(lVar30 + 0x98,iVar29);
    }
    *(undefined8 **)(*(longlong *)(lVar30 + 0x98) + (longlong)iVar29 * 8) = puVar36;
    puVar36[2] = uVar35;
    *(undefined4 *)(puVar36 + 3) = 0x80;
    lVar28 = FUN_1406be90a();
    FUN_140069376(lVar30);
    puVar25 = (undefined8 *)(*(longlong *)(lVar30 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar18 = puVar25 + 0x39;
    if (*(undefined8 **)(lVar30 + 0x78) < puVar18) {
      FUN_140023dd8(puVar13,0x1d0);
      puVar25 = (undefined8 *)(*puVar13 + 7 & 0xfffffffffffffff8);
      puVar18 = puVar25 + 0x39;
    }
    *puVar13 = (ulonglong)puVar18;
    local_a8 = *(longlong *)(lVar28 + 0x48);
    if (local_a8 != 0) {
      LOCK();
      *(int *)(local_a8 + 8) = *(int *)(local_a8 + 8) + 1;
      UNLOCK();
    }
    local_178 = (undefined *)CONCAT71(local_178._1_7_,2);
    local_b0 = puVar36 + 2;
    local_a0 = lVar28;
    FUN_140068f1a(puVar25,&local_b8,&local_b0,0x18);
    *puVar25 = &PTR_FUN_14a2a0640;
    puVar25[0x37] = uVar6;
    puVar25[0x38] = uVar35;
    iVar29 = *(int *)(lVar30 + 0x170);
    *(uint *)(lVar30 + 0x170) = iVar29 + 1U;
    if (*(uint *)(lVar30 + 0x174) < iVar29 + 1U) {
      FUN_14470e57a(lVar30 + 0x168,iVar29);
    }
    *(undefined8 **)(*(longlong *)(lVar30 + 0x168) + (longlong)iVar29 * 8) = puVar25;
    *(int *)((longlong)puVar25 + 0x2c) = *(int *)(lVar30 + 0x170) + -1;
    FUN_140069100(lVar30);
    *(int *)(local_110 + 1) = (int)local_f8;
    uVar8 = *(uint *)(local_118 + 0x2c8);
    *(uint *)(local_118 + 0x290) = (*(int *)(local_118 + 0x290) + 1U) % uVar8;
    uVar32 = *(int *)(local_118 + 0x294) + 1;
    if (uVar8 <= uVar32) {
      uVar32 = uVar8;
    }
    *(uint *)(local_118 + 0x294) = uVar32;
  }
  else {
    *(undefined1 *)(lVar28 + 0x2ce) = 0;
    if (local_70 == 0) {
      uVar38 = 1;
      uVar37 = 0;
      iVar29 = 0;
      uVar8 = 0;
    }
    else {
      puVar12 = local_78;
      if (local_78 == (uint *)0x0) {
        puVar12 = local_88;
      }
      uVar8 = *puVar12;
      if (uVar8 == 0) {
        iVar29 = local_70 + 0x1e;
        if (-1 < (int)(local_70 - 1)) {
          iVar29 = local_70 - 1;
        }
        uVar37 = 0;
        uVar38 = (ulonglong)(uint)(iVar29 >> 5);
        if (iVar29 >> 5 < 1) {
          uVar38 = uVar37;
        }
        iVar29 = 0;
        do {
          if (uVar38 == uVar37) goto LAB_142e47ae8;
          iVar29 = iVar29 + 0x20;
          uVar8 = puVar12[uVar37 + 1];
          uVar37 = uVar37 + 1;
        } while (uVar8 == 0);
      }
      else {
        uVar37 = 0;
        iVar29 = 0;
      }
      uVar38 = (ulonglong)(-uVar8 & uVar8);
      uVar35 = uVar38 * 2 + 1;
      lVar30 = 0x3f;
      if (uVar35 != 0) {
        for (; uVar35 >> lVar30 == 0; lVar30 = lVar30 + -1) {
        }
      }
      uVar8 = (iVar29 - ((uint)lVar30 ^ 0x3f)) + 0x3e;
      if ((int)local_70 <= (int)uVar8) {
        uVar8 = local_70;
      }
    }
    if (uVar8 != local_70) {
      puVar12 = local_88;
      if (local_78 != (uint *)0x0) {
        puVar12 = local_78;
      }
      iVar19 = local_70 + 0x1e;
      if (-1 < (int)(local_70 - 1)) {
        iVar19 = local_70 - 1;
      }
      iVar19 = iVar19 >> 5;
      uVar32 = 0xffffffff;
      do {
        lVar30 = *(longlong *)
                  (*(longlong *)(lVar28 + 0x60) +
                  (longlong)*(int *)(local_98 + (longlong)(int)uVar8 * 0xc) * 8);
        *(undefined1 *)(lVar30 + 0xb8) = 0;
        *(undefined8 *)(lVar30 + 0xb0) = 0xffffffffffffffff;
        uVar32 = ~(uint)uVar38 & uVar32;
        iVar26 = (int)uVar37;
        lVar30 = (longlong)iVar26;
        uVar8 = puVar12[lVar30] & uVar32;
        if (uVar8 == 0) {
          iVar22 = iVar19;
          if (iVar19 < iVar26) {
            iVar22 = iVar26;
          }
          if (iVar19 <= iVar26) break;
          lVar31 = 0;
          while( true ) {
            iVar29 = iVar29 + 0x20;
            uVar8 = puVar12[lVar30 + lVar31 + 1];
            if (uVar8 != 0) break;
            lVar31 = lVar31 + 1;
            if (iVar22 - lVar30 == lVar31) goto LAB_142e47ae8;
          }
          uVar37 = (ulonglong)(iVar26 + (int)lVar31 + 1);
          uVar32 = 0xffffffff;
        }
        uVar38 = (ulonglong)(-uVar8 & uVar8);
        uVar35 = uVar38 * 2 + 1;
        lVar30 = 0x3f;
        if (uVar35 != 0) {
          for (; uVar35 >> lVar30 == 0; lVar30 = lVar30 + -1) {
          }
        }
        uVar8 = (iVar29 - ((uint)lVar30 ^ 0x3f)) + 0x3e;
      } while ((int)uVar8 < (int)local_70);
    }
LAB_142e47ae8:
    *(undefined4 *)(local_110 + 3) = 0;
    if (*(int *)((longlong)local_110 + 0x1c) != 0) {
      FUN_14480809c(local_110 + 2,0);
    }
  }
  FUN_1403d43ee(&local_98,0);
LAB_142e47b17:
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1401bc218(&local_98);
  if ((local_48 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
  while( true ) {
    piVar4 = (int *)(*(longlong *)(param_1 + 0x98) + lVar28 * 0xc);
    iVar20 = *piVar4;
    if (iVar20 == iVar19) {
      local_e8 = CONCAT44(local_e8._4_4_,iVar20);
      lVar31 = *(longlong *)(param_1 + 0xd8);
      if (*(longlong *)(param_1 + 0xd8) == 0) {
        lVar31 = local_100;
      }
      iVar21 = *(int *)(lVar31 + (longlong)piVar4[2] * 4);
      if (iVar21 == iVar22) {
        piVar34 = (int *)(lVar31 + (longlong)piVar4[2] * 4);
      }
      else {
        do {
          piVar34 = (int *)(*(longlong *)(param_1 + 0x98) + (longlong)iVar21 * 0xc + 4);
          iVar21 = *piVar34;
        } while (iVar21 != iVar22);
      }
      *piVar34 = piVar4[1];
      lVar31 = *(longlong *)(local_118 + 0x98);
      if (*(int *)(local_118 + 0xcc) != 0) {
        *(int *)(lVar31 + (longlong)*(int *)(local_118 + 200) * 0xc) = iVar22;
      }
      *(undefined4 *)(lVar31 + lVar28 * 0xc) = 0xffffffff;
      if (*(int *)(local_118 + 0xcc) < 1) {
        uVar9 = 0xffffffff;
      }
      else {
        uVar9 = *(undefined4 *)(local_118 + 200);
      }
      *(undefined4 *)(lVar31 + lVar28 * 0xc + 4) = uVar9;
      *(int *)(local_118 + 200) = iVar22;
      *(int *)(local_118 + 0xcc) = *(int *)(local_118 + 0xcc) + 1;
      puVar13 = *(ulonglong **)(local_118 + 0xb8);
      if (*(ulonglong **)(local_118 + 0xb8) == (ulonglong *)0x0) {
        puVar13 = local_f0;
      }
      iVar21 = iVar22 + 0x1f;
      if (-1 < iVar22) {
        iVar21 = iVar22;
      }
      bVar7 = (byte)iVar22 & 0x1f;
      puVar12 = (uint *)((longlong)puVar13 + (longlong)(iVar21 >> 5) * 4);
      *puVar12 = *puVar12 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
      param_1 = local_118;
      local_d0 = piVar14;
    }
    else {
      piVar14 = piVar4 + 1;
    }
    if (iVar20 == iVar19) break;
LAB_142e46e87:
    iVar22 = *piVar14;
    lVar28 = (longlong)iVar22;
    if (lVar28 == -1) break;
  }
LAB_142e46e04:
  FUN_144980568(&local_98,&local_b8,&local_b0,0);
  *(undefined4 *)(lVar30 + 0x70) = *(undefined4 *)(lVar30 + 0x74);
  *(undefined1 *)(lVar30 + 0xb8) = 1;
  *(int *)(lVar30 + 0xb4) = (int)local_f8;
  *(int *)(lVar30 + 0xb0) = (int)uVar24;
  local_f8 = (ulonglong)((int)local_f8 + *(int *)(lVar30 + 0x6c) * 8 + 0x10);
  local_120 = (ulonglong)(uint)((int)local_120 + *(int *)(lVar30 + 0x88));
  iVar22 = *(int *)(param_1 + 0x110);
  uVar35 = local_d8;
  puVar12 = local_108;
LAB_142e46d11:
  uVar8 = uVar8 & ~(uint)uVar38;
  puVar10 = *(uint **)(param_1 + 0x108);
  if (*(uint **)(param_1 + 0x108) == (uint *)0x0) {
    puVar10 = puVar12;
  }
  iVar19 = (int)uVar37;
  lVar28 = (longlong)iVar19;
  uVar32 = puVar10[lVar28] & uVar8;
  if (uVar32 == 0) {
    iVar20 = iVar22 + 0x1e;
    if (-1 < iVar22 + -1) {
      iVar20 = iVar22 + -1;
    }
    iVar20 = iVar20 >> 5;
    iVar26 = iVar26 + 0x20;
    iVar21 = iVar20;
    if (iVar20 < iVar19) {
      iVar21 = iVar19;
    }
    if (iVar19 < iVar20) {
      lVar30 = 0;
      do {
        uVar32 = puVar10[lVar28 + lVar30 + 1];
        if (uVar32 != 0) {
          uVar37 = (ulonglong)(iVar19 + (int)lVar30 + 1);
          uVar8 = 0xffffffff;
          goto LAB_142e46d92;
        }
        iVar26 = iVar26 + 0x20;
        lVar30 = lVar30 + 1;
      } while (iVar21 - lVar28 != lVar30);
      uVar8 = 0xffffffff;
      lVar28 = (longlong)iVar21;
    }
    uVar37 = lVar28 + 1U & 0xffffffff;
    puVar12 = local_108;
    param_1 = local_118;
    iVar19 = iVar22;
  }
  else {
LAB_142e46d92:
    uVar38 = (ulonglong)(-uVar32 & uVar32);
    uVar24 = uVar38 * 2 + 1;
    lVar28 = 0x3f;
    if (uVar24 != 0) {
      for (; uVar24 >> lVar28 == 0; lVar28 = lVar28 + -1) {
      }
    }
    iVar19 = (iVar26 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
    if (iVar22 <= iVar19) {
      iVar19 = iVar22;
    }
  }
  uVar24 = uVar35 & 0xffffffff;
  if (iVar19 == iVar29) goto LAB_142e46aaf;
  goto LAB_142e46c8d;
}



// FUNCTION 142e47c11 FUN_142e47c11 body=653 status=ok
// SIG undefined FUN_142e47c11(void)

ulonglong FUN_142e47c11(longlong param_1,undefined8 param_2,uint param_3,undefined8 param_4,
                       char param_5,char param_6)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  ulonglong local_60;
  int local_50;
  int local_4c;
  undefined4 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar3 = FUN_144735dd8(param_1,param_2,0);
  uVar6 = param_3 * 4;
  uVar2 = *(int *)(uVar3 + 100) * *(int *)(uVar3 + 0x60);
  if (uVar2 < uVar6) {
    uVar6 = 4;
    if (DAT_14ca84e48 < 4) {
      uVar6 = DAT_14ca84e48;
    }
    local_50 = uVar6 + (uVar6 == 0);
    local_48 = 0x10109;
    uVar6 = DAT_14ca84e48;
    if (param_3 < DAT_14ca84e48) {
      uVar6 = param_3;
    }
    local_40 = 0;
    local_4c = uVar6 + (uVar6 == 0);
    uVar5 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
    uVar4 = uVar5 + 0x150;
    if (*(ulonglong *)(param_1 + 0x78) < uVar4) {
      FUN_140023dd8((longlong *)(param_1 + 0x70),0x160);
      uVar5 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
      uVar4 = uVar5 + 0x150;
    }
    *(ulonglong *)(param_1 + 0x70) = uVar4;
    FUN_1456bd266(uVar5,param_4,&local_50,0);
    iVar1 = *(int *)(param_1 + 400);
    *(uint *)(param_1 + 400) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x194) < iVar1 + 1U) {
      FUN_144737178(param_1 + 0x188,iVar1);
    }
    *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar1 * 8) = uVar5;
    *(int *)(uVar5 + 0x7c) = *(int *)(param_1 + 400) + -1;
    if (param_5 == '\0') goto LAB_142e47e00;
    uVar6 = *(int *)(uVar3 + 0x60) * *(int *)(uVar3 + 100);
  }
  else {
    uVar5 = uVar3;
    if (uVar2 <= (param_3 & 0x3fffffff) << 1 || param_6 != '\x01') goto LAB_142e47e00;
    uVar2 = 4;
    if (DAT_14ca84e48 < 4) {
      uVar2 = DAT_14ca84e48;
    }
    local_50 = uVar2 + (uVar2 == 0);
    local_48 = 0x10109;
    uVar2 = DAT_14ca84e48;
    if (param_3 < DAT_14ca84e48) {
      uVar2 = param_3;
    }
    local_40 = 0;
    local_4c = uVar2 + (uVar2 == 0);
    uVar5 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
    uVar4 = uVar5 + 0x150;
    if (*(ulonglong *)(param_1 + 0x78) < uVar4) {
      FUN_140023dd8((longlong *)(param_1 + 0x70),0x160);
      uVar5 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
      uVar4 = uVar5 + 0x150;
    }
    *(ulonglong *)(param_1 + 0x70) = uVar4;
    FUN_1456bd266(uVar5,param_4,&local_50,0);
    iVar1 = *(int *)(param_1 + 400);
    *(uint *)(param_1 + 400) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x194) < iVar1 + 1U) {
      FUN_144737178(param_1 + 0x188,iVar1);
    }
    *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar1 * 8) = uVar5;
    *(int *)(uVar5 + 0x7c) = *(int *)(param_1 + 400) + -1;
    if (param_5 == '\0') goto LAB_142e47e00;
  }
  local_60 = (ulonglong)uVar6;
  local_68 = 0;
  FUN_143211d72(param_1,uVar5,0,uVar3);
LAB_142e47e00:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 142e47e9f FUN_142e47e9f body=14268 status=ok
// SIG undefined FUN_142e47e9f(void)

void FUN_142e47e9f(longlong param_1,undefined8 param_2,undefined4 *param_3,longlong *param_4,
                  undefined4 param_5,int param_6,longlong param_7,longlong param_8,longlong param_9,
                  longlong param_10,longlong param_11,undefined4 param_12,longlong param_13,
                  undefined4 param_14)

{
  int *piVar1;
  undefined4 uVar2;
  ulonglong *puVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  char cVar12;
  int iVar13;
  longlong *plVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  undefined1 uVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  undefined4 *puVar21;
  uint uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  undefined8 *puVar25;
  undefined1 auStack_1a8 [32];
  uint *local_188;
  int *local_180;
  undefined8 *local_178;
  undefined8 *local_170;
  undefined4 local_168;
  undefined4 local_160;
  longlong *local_158;
  longlong *local_150;
  ulonglong local_148;
  undefined8 local_140;
  longlong local_138;
  longlong *local_130;
  undefined4 *local_128;
  uint local_11c;
  ulonglong *local_118;
  int local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined1 *local_fc;
  undefined4 local_f4;
  undefined1 *local_f0;
  int local_e8;
  undefined8 uStack_e4;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  uint uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b5;
  uint local_b4;
  undefined8 local_b0;
  int local_a8;
  int iStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  longlong local_88 [5];
  ulonglong local_60;
  
  uVar17 = DAT_14c76087c;
  uVar22 = DAT_14c760878;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_c8 = (undefined8 *)0x0;
  local_d8 = (undefined8 *)0x0;
  uStack_d0 = (undefined8 *)0x0;
  local_98 = (longlong *)0x0;
  uVar4 = 0x34;
  if (DAT_14ca84e48 < 0x34) {
    uVar4 = DAT_14ca84e48;
  }
  local_a8 = uVar4 + (uVar4 == 0);
  iStack_a4 = 1;
  uStack_a0 = 0x10109;
  plVar14 = (longlong *)(param_1 + 0x70);
  uVar24 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar19 = uVar24 + 0x150;
  local_158 = plVar14;
  local_140 = param_2;
  local_128 = param_3;
  if (*(ulonglong *)(param_1 + 0x78) < uVar19) {
    FUN_140023dd8(plVar14,0x160);
    uVar24 = *plVar14 + 0xfU & 0xfffffffffffffff0;
    uVar19 = uVar24 + 0x150;
  }
  local_138 = param_1 + 0x188;
  *(ulonglong *)(param_1 + 0x70) = uVar19;
  FUN_1456bd266(uVar24,L"NaniteStreamOut.QueueState",&local_a8,0);
  iVar5 = *(int *)(param_1 + 400);
  *(uint *)(param_1 + 400) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x194) < iVar5 + 1U) {
    FUN_144737178(local_138,iVar5);
  }
  uVar22 = uVar22 & 0xfffffff0;
  local_148 = (ulonglong)(uVar17 & 0xffffffc0);
  *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar5 * 8) = uVar24;
  *(int *)(uVar24 + 0x7c) = *(int *)(param_1 + 400) + -1;
  if (*param_4 == 0) {
    uVar17 = uVar17 >> 6;
    puVar3 = *(ulonglong **)(param_1 + 0x18);
    uVar4 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_11c = *(uint *)((longlong)puVar3 + 0x17c);
    if (local_11c != uVar4) {
      *(uint *)((longlong)puVar3 + 0x17c) = uVar4;
      puVar6 = (undefined8 *)(*puVar3 + 7 & 0xfffffffffffffff8);
      puVar11 = puVar6 + 3;
      if ((undefined8 *)puVar3[1] < puVar11) {
        FUN_140023dd8(puVar3,0x20);
        puVar6 = (undefined8 *)(*puVar3 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar6 + 3;
      }
      *puVar3 = (ulonglong)puVar11;
      *(int *)(puVar3 + 0xc) = (int)puVar3[0xc] + 1;
      *(undefined8 **)puVar3[6] = puVar6;
      puVar3[6] = (ulonglong)(puVar6 + 1);
      uVar2 = *(undefined4 *)((longlong)puVar3 + 0x17c);
      puVar6[1] = 0;
      *puVar6 = &PTR_FUN_14a1fb2c0;
      *(undefined4 *)(puVar6 + 2) = uVar2;
    }
    plVar14 = local_158;
    uVar4 = uVar22 * 3 + uVar17;
    uVar15 = 4;
    if (DAT_14ca84e48 < 4) {
      uVar15 = DAT_14ca84e48;
    }
    local_a8 = uVar15 + (uVar15 == 0);
    uStack_a0 = 0x10119;
    if (DAT_14ca84e48 <= uVar4) {
      uVar4 = DAT_14ca84e48;
    }
    local_98 = (longlong *)0x0;
    iStack_a4 = uVar4 + (uVar4 == 0);
    uVar19 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
    uVar23 = uVar19 + 0x150;
    local_118 = puVar3;
    if (*(ulonglong *)(param_1 + 0x78) < uVar23) {
      FUN_140023dd8(local_158,0x160);
      uVar19 = *plVar14 + 0xfU & 0xfffffffffffffff0;
      uVar23 = uVar19 + 0x150;
    }
    *(ulonglong *)(param_1 + 0x70) = uVar23;
    local_150 = param_4;
    FUN_1456bd266(uVar19,L"NaniteStreamOut.NodesAndClusterBatchesBuffer",&local_a8,0);
    iVar5 = *(int *)(param_1 + 400);
    *(uint *)(param_1 + 400) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0x194) < iVar5 + 1U) {
      FUN_144737178(local_138,iVar5);
    }
    plVar14 = local_158;
    *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar5 * 8) = uVar19;
    *(int *)(uVar19 + 0x7c) = *(int *)(param_1 + 400) + -1;
    cVar12 = *(char *)(uVar19 + 0x68);
    puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar6 + 8;
    if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
      FUN_140023dd8(local_158,0x48);
      puVar6 = (undefined8 *)(*plVar14 + 7U & 0xfffffffffffffff8);
      puVar11 = puVar6 + 8;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar11;
    puVar6[1] = *(undefined8 *)(uVar19 + 8);
    puVar6[2] = 0;
    *(undefined1 *)(puVar6 + 3) = 2;
    *(undefined8 *)((longlong)puVar6 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar6 + 5) = 0;
    *puVar6 = &PTR_FUN_14a1fb3e8;
    *(byte *)(puVar6 + 6) = cVar12 >> 7 & 0x1c;
    *(undefined2 *)((longlong)puVar6 + 0x31) = 0;
    puVar6[7] = uVar19;
    iVar5 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
      FUN_1447568fc(param_1 + 0x198,iVar5);
    }
    plVar14 = local_158;
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar6;
    *(int *)((longlong)puVar6 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar25 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar11 = puVar25 + 4;
    if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
      FUN_140023dd8(local_158,0x30);
      puVar25 = (undefined8 *)(*plVar14 + 0xfU & 0xfffffffffffffff0);
      puVar11 = puVar25 + 4;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar11;
    *puVar25 = &PTR_FUN_14a2a0170;
    puVar25[2] = 0;
    local_130 = (longlong *)(param_1 + 0x98);
    iVar5 = *(int *)(param_1 + 0xa0);
    *(uint *)(param_1 + 0xa0) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0xa4) < iVar5 + 1U) {
      FUN_1448cfae8(local_130,iVar5);
    }
    *(undefined8 **)(*local_130 + (longlong)iVar5 * 8) = puVar25;
    puVar25[2] = puVar6;
    *(int *)(puVar25 + 3) = (int)local_148;
    *(uint *)((longlong)puVar25 + 0x1c) = uVar22;
    FUN_1472687c0(local_140,&local_a8);
    local_e8 = uVar22 + 0x7e;
    if (-1 < (int)(uVar22 + 0x3f)) {
      local_e8 = uVar22 + 0x3f;
    }
    local_e8 = local_e8 >> 6;
    uStack_e4 = &DAT_100000001;
    iVar5 = 1;
    if (DAT_14ca84f24 < local_e8) {
      iVar5 = local_e8 + 0xfe;
      if (-1 < local_e8 + 0x7f) {
        iVar5 = local_e8 + 0x7f;
      }
      iVar5 = iVar5 >> 7;
      uStack_e4 = (undefined1 *)CONCAT44(1,iVar5);
      local_e8 = 0x80;
    }
    if (DAT_14ca84f28 < iVar5) {
      iVar13 = iVar5 + 0xfe;
      if (-1 < iVar5 + 0x7f) {
        iVar13 = iVar5 + 0x7f;
      }
      uStack_e4 = (undefined1 *)CONCAT44(iVar13 >> 7,0x80);
    }
    local_188 = (uint *)&local_e8;
    FUN_14726882d(param_1,&local_b4,&local_a8,puVar25 + 2);
    plVar14 = local_158;
    puVar25 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar11 = puVar25 + 4;
    if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
      FUN_140023dd8(local_158,0x30);
      puVar25 = (undefined8 *)(*plVar14 + 0xfU & 0xfffffffffffffff0);
      puVar11 = puVar25 + 4;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar11;
    *puVar25 = &PTR_FUN_14a2a0198;
    puVar25[2] = 0;
    iVar5 = *(int *)(param_1 + 0xa0);
    *(uint *)(param_1 + 0xa0) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0xa4) < iVar5 + 1U) {
      FUN_1448cfae8(local_130,iVar5);
    }
    *(undefined8 **)(*local_130 + (longlong)iVar5 * 8) = puVar25;
    puVar25[2] = puVar6;
    *(int *)(puVar25 + 3) = (int)local_148;
    *(uint *)((longlong)puVar25 + 0x1c) = uVar22;
    FUN_1472688e0(local_140,&local_a8);
    plVar14 = local_150;
    local_b4 = uVar17 + 0x3f >> 6;
    local_b0 = &DAT_100000001;
    uVar17 = 1;
    if (DAT_14ca84f24 < (int)local_b4) {
      uVar17 = local_b4 + 0x7f >> 7;
      local_b0 = (undefined1 *)CONCAT44(1,uVar17);
      local_b4 = 0x80;
    }
    if (DAT_14ca84f28 < (int)uVar17) {
      local_b0 = (undefined1 *)CONCAT44(uVar17 + 0x7f >> 7,0x80);
    }
    local_188 = &local_b4;
    FUN_14726894d(param_1,&local_b5,&local_a8,puVar25 + 2);
    plVar7 = (longlong *)FUN_1449609de(param_1,uVar19);
    puVar11 = (undefined8 *)*plVar7;
    puVar6 = (undefined8 *)*plVar14;
    if (puVar6 != puVar11) {
      *plVar14 = (longlong)puVar11;
      if (puVar11 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar11 + 1) = *(int *)(puVar11 + 1) + 1;
        UNLOCK();
      }
      if (puVar6 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar6 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar6)(puVar6,1);
        }
      }
    }
    puVar3 = local_118;
    if (*(uint *)((longlong)local_118 + 0x17c) != local_11c) {
      *(uint *)((longlong)local_118 + 0x17c) = local_11c;
      puVar6 = (undefined8 *)(*local_118 + 7 & 0xfffffffffffffff8);
      puVar11 = puVar6 + 3;
      if ((undefined8 *)local_118[1] < puVar11) {
        FUN_140023dd8(local_118,0x20);
        puVar6 = (undefined8 *)(*puVar3 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar6 + 3;
      }
      *puVar3 = (ulonglong)puVar11;
      *(int *)(puVar3 + 0xc) = (int)puVar3[0xc] + 1;
      *(undefined8 **)puVar3[6] = puVar6;
      puVar3[6] = (ulonglong)(puVar6 + 1);
      uVar2 = *(undefined4 *)((longlong)puVar3 + 0x17c);
      puVar6[1] = 0;
      *puVar6 = &PTR_FUN_14a1fb2c0;
      *(undefined4 *)(puVar6 + 2) = uVar2;
    }
  }
  else {
    uVar19 = FUN_1449b86e8(param_1,param_4,L"NaniteStreamOut.NodesAndClusterBatchesBuffer",0);
  }
  plVar14 = local_158;
  uVar17 = 4;
  if (DAT_14ca84e48 < 4) {
    uVar17 = DAT_14ca84e48;
  }
  uVar4 = (int)local_148 * 3;
  local_a8 = uVar17 + (uVar17 == 0);
  uStack_a0 = 0x10119;
  uVar17 = DAT_14ca84e48;
  if (uVar4 < DAT_14ca84e48) {
    uVar17 = uVar4;
  }
  local_98 = (longlong *)0x0;
  iStack_a4 = uVar17 + (uVar17 == 0);
  uVar16 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar23 = uVar16 + 0x150;
  if (*(ulonglong *)(param_1 + 0x78) < uVar23) {
    FUN_140023dd8(local_158,0x160);
    uVar16 = *plVar14 + 0xfU & 0xfffffffffffffff0;
    uVar23 = uVar16 + 0x150;
  }
  *(ulonglong *)(param_1 + 0x70) = uVar23;
  FUN_1456bd266(uVar16,L"NaniteStreamOut.CandidateClustersBuffer",&local_a8,0);
  iVar5 = *(int *)(param_1 + 400);
  *(uint *)(param_1 + 400) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x194) < iVar5 + 1U) {
    FUN_144737178(local_138,iVar5);
  }
  plVar14 = local_158;
  *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar5 * 8) = uVar16;
  *(int *)(uVar16 + 0x7c) = *(int *)(param_1 + 400) + -1;
  cVar12 = *(char *)(uVar24 + 0x68);
  puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar11 = puVar6 + 8;
  if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
    FUN_140023dd8(local_158,0x48);
    puVar6 = (undefined8 *)(*plVar14 + 7U & 0xfffffffffffffff8);
    puVar11 = puVar6 + 8;
  }
  local_150 = (longlong *)(param_1 + 0x198);
  *(undefined8 **)(param_1 + 0x70) = puVar11;
  puVar6[1] = *(undefined8 *)(uVar24 + 8);
  puVar6[2] = 0;
  *(undefined1 *)(puVar6 + 3) = 2;
  *(undefined8 *)((longlong)puVar6 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar6 + 5) = 0;
  *puVar6 = &PTR_FUN_14a1fb3e8;
  *(byte *)(puVar6 + 6) = cVar12 >> 7 & 0x1c;
  *(undefined2 *)((longlong)puVar6 + 0x31) = 0;
  puVar6[7] = uVar24;
  iVar5 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
    FUN_1447568fc(local_150,iVar5);
  }
  plVar14 = local_158;
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar6;
  *(int *)((longlong)puVar6 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  cVar12 = *(char *)(uVar19 + 0x68);
  puVar25 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar11 = puVar25 + 8;
  local_d8 = puVar6;
  if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
    FUN_140023dd8(local_158,0x48);
    puVar25 = (undefined8 *)(*plVar14 + 7U & 0xfffffffffffffff8);
    puVar11 = puVar25 + 8;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar11;
  puVar25[1] = *(undefined8 *)(uVar19 + 8);
  puVar25[2] = 0;
  *(undefined1 *)(puVar25 + 3) = 2;
  *(undefined8 *)((longlong)puVar25 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar25 + 5) = 0;
  *puVar25 = &PTR_FUN_14a1fb3e8;
  *(byte *)(puVar25 + 6) = cVar12 >> 7 & 0x1c;
  *(undefined2 *)((longlong)puVar25 + 0x31) = 0;
  puVar25[7] = uVar19;
  iVar5 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
    FUN_1447568fc(local_150,iVar5);
  }
  plVar14 = local_158;
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar25;
  *(int *)((longlong)puVar25 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  cVar12 = *(char *)(uVar16 + 0x68);
  puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar11 = puVar6 + 8;
  uStack_d0 = puVar25;
  if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
    FUN_140023dd8(local_158,0x48);
    puVar6 = (undefined8 *)(*plVar14 + 7U & 0xfffffffffffffff8);
    puVar11 = puVar6 + 8;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar11;
  puVar6[1] = *(undefined8 *)(uVar16 + 8);
  puVar6[2] = 0;
  *(undefined1 *)(puVar6 + 3) = 2;
  *(undefined8 *)((longlong)puVar6 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar6 + 5) = 0;
  *puVar6 = &PTR_FUN_14a1fb3e8;
  *(byte *)(puVar6 + 6) = cVar12 >> 7 & 0x1c;
  *(undefined2 *)((longlong)puVar6 + 0x31) = 0;
  puVar6[7] = uVar16;
  iVar5 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
    FUN_1447568fc(local_150,iVar5);
  }
  plVar14 = local_158;
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar6;
  *(int *)((longlong)puVar6 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  uStack_bc = (undefined4)local_148;
  uStack_a0 = 0x10109;
  uVar17 = 4;
  if (DAT_14ca84e48 < 4) {
    uVar17 = DAT_14ca84e48;
  }
  local_98 = (longlong *)0x0;
  local_a8 = uVar17 + (uVar17 == 0);
  iStack_a4 = 2 - (uint)(DAT_14ca84e48 < 2);
  uVar24 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar19 = uVar24 + 0x150;
  local_c8 = puVar6;
  uStack_c0 = uVar22;
  if (*(ulonglong *)(param_1 + 0x78) < uVar19) {
    FUN_140023dd8(local_158,0x160);
    uVar24 = *plVar14 + 0xfU & 0xfffffffffffffff0;
    uVar19 = uVar24 + 0x150;
  }
  *(ulonglong *)(param_1 + 0x70) = uVar19;
  FUN_1456bd266(uVar24,L"NaniteStreamOut.VertexAndIndexAllocatorBuffer",&local_a8,0);
  iVar5 = *(int *)(param_1 + 400);
  *(uint *)(param_1 + 400) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x194) < iVar5 + 1U) {
    FUN_144737178(local_138,iVar5);
  }
  plVar14 = local_158;
  *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar5 * 8) = uVar24;
  *(int *)(uVar24 + 0x7c) = *(int *)(param_1 + 400) + -1;
  cVar12 = *(char *)(uVar24 + 0x68);
  puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar11 = puVar6 + 8;
  if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
    FUN_140023dd8(local_158,0x48);
    puVar6 = (undefined8 *)(*plVar14 + 7U & 0xfffffffffffffff8);
    puVar11 = puVar6 + 8;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar11;
  puVar6[1] = *(undefined8 *)(uVar24 + 8);
  puVar6[2] = 0;
  *(undefined1 *)(puVar6 + 3) = 2;
  *(undefined8 *)((longlong)puVar6 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar6 + 5) = 0;
  *puVar6 = &PTR_FUN_14a1fb3e8;
  *(byte *)(puVar6 + 6) = cVar12 >> 7 & 0x1c;
  *(undefined2 *)((longlong)puVar6 + 0x31) = 0;
  puVar6[7] = uVar24;
  iVar5 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
    FUN_1447568fc(local_150,iVar5);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar6;
  *(int *)((longlong)puVar6 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  FUN_1405bfba3(param_1,puVar6,0,2);
  plVar14 = local_158;
  uVar22 = 4;
  if (DAT_14ca84e48 < 4) {
    uVar22 = DAT_14ca84e48;
  }
  uVar17 = (DAT_14c76087c & 0xffffffc0) * 3;
  local_a8 = uVar22 + (uVar22 == 0);
  uStack_a0 = 0x10119;
  uVar22 = DAT_14ca84e48;
  if (uVar17 < DAT_14ca84e48) {
    uVar22 = uVar17;
  }
  local_98 = (longlong *)0x0;
  iStack_a4 = uVar22 + (uVar22 == 0);
  uVar23 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar19 = uVar23 + 0x150;
  if (*(ulonglong *)(param_1 + 0x78) < uVar19) {
    FUN_140023dd8(local_158,0x160);
    uVar23 = *plVar14 + 0xfU & 0xfffffffffffffff0;
    uVar19 = uVar23 + 0x150;
  }
  *(ulonglong *)(param_1 + 0x70) = uVar19;
  FUN_1456bd266(uVar23,L"NaniteStreamOut.OutputClustersBuffer",&local_a8,0);
  iVar5 = *(int *)(param_1 + 400);
  *(uint *)(param_1 + 400) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x194) < iVar5 + 1U) {
    FUN_144737178(local_138,iVar5);
  }
  plVar14 = local_158;
  *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar5 * 8) = uVar23;
  *(int *)(uVar23 + 0x7c) = *(int *)(param_1 + 400) + -1;
  uStack_a0 = 0x10109;
  uVar22 = 4;
  if (DAT_14ca84e48 < 4) {
    uVar22 = DAT_14ca84e48;
  }
  local_98 = (longlong *)0x0;
  local_a8 = uVar22 + (uVar22 == 0);
  iStack_a4 = 2 - (uint)(DAT_14ca84e48 < 2);
  uVar16 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar19 = uVar16 + 0x150;
  if (*(ulonglong *)(param_1 + 0x78) < uVar19) {
    FUN_140023dd8(local_158,0x160);
    uVar16 = *plVar14 + 0xfU & 0xfffffffffffffff0;
    uVar19 = uVar16 + 0x150;
  }
  *(ulonglong *)(param_1 + 0x70) = uVar19;
  FUN_1456bd266(uVar16,L"NaniteStreamOut.OutputClustersStateBuffer",&local_a8,0);
  iVar5 = *(int *)(param_1 + 400);
  *(uint *)(param_1 + 400) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x194) < iVar5 + 1U) {
    FUN_144737178(local_138,iVar5);
  }
  plVar14 = local_158;
  *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar5 * 8) = uVar16;
  *(int *)(uVar16 + 0x7c) = *(int *)(param_1 + 400) + -1;
  cVar12 = *(char *)(uVar16 + 0x68);
  puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar11 = puVar6 + 8;
  if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
    FUN_140023dd8(local_158,0x48);
    puVar6 = (undefined8 *)(*plVar14 + 7U & 0xfffffffffffffff8);
    puVar11 = puVar6 + 8;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar11;
  puVar6[1] = *(undefined8 *)(uVar16 + 8);
  puVar6[2] = 0;
  *(undefined1 *)(puVar6 + 3) = 2;
  *(undefined8 *)((longlong)puVar6 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar6 + 5) = 0;
  *puVar6 = &PTR_FUN_14a1fb3e8;
  *(byte *)(puVar6 + 6) = cVar12 >> 7 & 0x1c;
  *(undefined2 *)((longlong)puVar6 + 0x31) = 0;
  puVar6[7] = uVar16;
  iVar5 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
    FUN_1447568fc(local_150,iVar5);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar6;
  *(int *)((longlong)puVar6 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  FUN_1405bfba3(param_1,puVar6,0,2);
  plVar14 = local_158;
  cVar12 = *(char *)(uVar24 + 0x68);
  puVar25 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar11 = puVar25 + 8;
  if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
    FUN_140023dd8(local_158,0x48);
    puVar25 = (undefined8 *)(*plVar14 + 7U & 0xfffffffffffffff8);
    puVar11 = puVar25 + 8;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar11;
  puVar25[1] = *(undefined8 *)(uVar24 + 8);
  puVar25[2] = 0;
  *(undefined1 *)(puVar25 + 3) = 2;
  *(undefined8 *)((longlong)puVar25 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar25 + 5) = 0;
  *puVar25 = &PTR_FUN_14a1fb3e8;
  *(byte *)(puVar25 + 6) = cVar12 >> 7 & 0x1c;
  *(undefined2 *)((longlong)puVar25 + 0x31) = 0;
  puVar25[7] = uVar24;
  iVar5 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
    FUN_1447568fc(local_150,iVar5);
  }
  plVar14 = local_158;
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar25;
  *(int *)((longlong)puVar25 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  cVar12 = *(char *)(param_9 + 0x68);
  puVar20 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar11 = puVar20 + 8;
  if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
    FUN_140023dd8(local_158,0x48);
    puVar20 = (undefined8 *)(*plVar14 + 7U & 0xfffffffffffffff8);
    puVar11 = puVar20 + 8;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar11;
  puVar20[1] = *(undefined8 *)(param_9 + 8);
  puVar20[2] = 0;
  *(undefined1 *)(puVar20 + 3) = 2;
  *(undefined8 *)((longlong)puVar20 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar20 + 5) = 0;
  *puVar20 = &PTR_FUN_14a1fb3e8;
  *(byte *)(puVar20 + 6) = cVar12 >> 7 & 0x1c;
  *(undefined2 *)((longlong)puVar20 + 0x31) = 0;
  puVar20[7] = param_9;
  iVar5 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
  local_130 = puVar6;
  if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
    FUN_1447568fc(local_150,iVar5);
  }
  plVar14 = local_158;
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar20;
  *(int *)((longlong)puVar20 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  cVar12 = *(char *)(param_7 + 0x68);
  puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar11 = puVar6 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
    FUN_140023dd8(local_158,0x50);
    puVar6 = (undefined8 *)(*plVar14 + 7U & 0xfffffffffffffff8);
    puVar11 = puVar6 + 9;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar11;
  puVar6[1] = *(undefined8 *)(param_7 + 8);
  puVar6[2] = 0;
  *(undefined1 *)(puVar6 + 3) = 3;
  *(undefined8 *)((longlong)puVar6 + 0x1c) = 0xffffffffffffffff;
  *puVar6 = &PTR_FUN_14a1fb168;
  *(byte *)(puVar6 + 5) = cVar12 >> 7 & 0x1c;
  *(undefined8 *)((longlong)puVar6 + 0x2c) = 0xffffffff00000000;
  puVar6[7] = 0;
  puVar6[8] = param_7;
  iVar5 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
    FUN_1447568fc(local_150,iVar5);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar6;
  *(int *)((longlong)puVar6 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  local_160 = param_14;
  local_168 = param_12;
  local_188 = (uint *)CONCAT44(local_188._4_4_,param_6);
  local_180 = (int *)((ulonglong)local_180 & 0xffffffffffffff00);
  local_178 = puVar20;
  local_170 = puVar25;
  FUN_142e56c30(param_1,local_140,&local_d8,puVar6);
  plVar14 = local_158;
  puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar11 = puVar6 + 0x1a;
  if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
    FUN_140023dd8(local_158,0xe0);
    puVar6 = (undefined8 *)(*plVar14 + 0xfU & 0xfffffffffffffff0);
    puVar11 = puVar6 + 0x1a;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar11;
  *puVar6 = &PTR_FUN_14a2a12e0;
  puVar6[2] = 0;
  *(undefined1 *)(puVar6 + 3) = 1;
  puVar6[0x14] = 0;
  puVar6[0x16] = 0;
  puVar6[4] = 0;
  puVar6[5] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  puVar6[10] = 0;
  puVar6[0xc] = 0;
  puVar6[0xd] = 0;
  puVar6[0xe] = 0;
  puVar6[0xf] = 0;
  puVar6[0x10] = 0;
  puVar6[0x11] = 0;
  puVar6[0x12] = 0;
  *(undefined1 *)(puVar6 + 0x17) = 1;
  local_148 = param_1 + 0x98;
  puVar6[0x18] = 0;
  puVar6[0x19] = 0;
  iVar5 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar5 + 1U) {
    FUN_1448cfae8(local_148,iVar5);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar5 * 8) = puVar6;
  uVar8 = FUN_1448c569e(local_128,param_1);
  plVar14 = local_130;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca4b328) {
    FUN_144b3d300(&DAT_14ca4b328);
    if (DAT_14ca4b328 == -1) {
      DAT_14ca4b320 = FUN_145900d44();
      _Init_thread_footer(&DAT_14ca4b328);
    }
  }
  cVar12 = '\x02';
  if (*(char *)(DAT_14ca4b320 + 0x41) != '\x03') {
    cVar12 = *(char *)(DAT_14ca4b320 + 0x41);
  }
  puVar6[2] = uVar8;
  *(char *)(puVar6 + 3) = cVar12;
  *(undefined4 *)(puVar6 + 10) = (undefined4)local_c8;
  *(undefined4 *)((longlong)puVar6 + 0x54) = local_c8._4_4_;
  *(uint *)(puVar6 + 0xb) = uStack_c0;
  *(undefined4 *)((longlong)puVar6 + 0x5c) = uStack_bc;
  *(undefined4 *)(puVar6 + 8) = (undefined4)local_d8;
  *(undefined4 *)((longlong)puVar6 + 0x44) = local_d8._4_4_;
  *(undefined4 *)(puVar6 + 9) = (undefined4)uStack_d0;
  *(undefined4 *)((longlong)puVar6 + 0x4c) = uStack_d0._4_4_;
  uVar8 = FUN_1417ea8a0(&DAT_14cb00cc8,param_1);
  puVar6[4] = uVar8;
  uVar18 = 0;
  lVar9 = FUN_144735dd8(param_1,&DAT_14cb00e10,0);
  plVar7 = local_158;
  if ((*(byte *)(lVar9 + 0x68) & 0x80) != 0) {
    uVar18 = 0x1c;
  }
  puVar25 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar11 = puVar25 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
    FUN_140023dd8(local_158,0x50);
    puVar25 = (undefined8 *)(*plVar7 + 7U & 0xfffffffffffffff8);
    puVar11 = puVar25 + 9;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar11;
  puVar25[1] = *(undefined8 *)(lVar9 + 8);
  puVar25[2] = 0;
  *(undefined1 *)(puVar25 + 3) = 3;
  *(undefined8 *)((longlong)puVar25 + 0x1c) = 0xffffffffffffffff;
  *puVar25 = &PTR_FUN_14a1fb168;
  *(undefined1 *)(puVar25 + 5) = uVar18;
  *(undefined8 *)((longlong)puVar25 + 0x2c) = 0xffffffff00000000;
  puVar25[7] = 0;
  puVar25[8] = lVar9;
  iVar5 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
    FUN_1447568fc(local_150,iVar5);
  }
  plVar7 = local_158;
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar25;
  *(int *)((longlong)puVar25 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar6[5] = puVar25;
  *(undefined4 *)(puVar6 + 6) = 0;
  *(undefined4 *)((longlong)puVar6 + 0x34) = DAT_14cb01074;
  cVar12 = *(char *)(param_7 + 0x68);
  puVar25 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar11 = puVar25 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
    FUN_140023dd8(local_158,0x50);
    puVar25 = (undefined8 *)(*plVar7 + 7U & 0xfffffffffffffff8);
    puVar11 = puVar25 + 9;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar11;
  puVar25[1] = *(undefined8 *)(param_7 + 8);
  puVar25[2] = 0;
  *(undefined1 *)(puVar25 + 3) = 3;
  *(undefined8 *)((longlong)puVar25 + 0x1c) = 0xffffffffffffffff;
  *puVar25 = &PTR_FUN_14a1fb168;
  *(byte *)(puVar25 + 5) = cVar12 >> 7 & 0x1c;
  *(undefined8 *)((longlong)puVar25 + 0x2c) = 0xffffffff00000000;
  puVar25[7] = 0;
  puVar25[8] = param_7;
  iVar5 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
    FUN_1447568fc(local_150,iVar5);
  }
  plVar7 = local_158;
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar25;
  *(int *)((longlong)puVar25 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar6[0x12] = puVar25;
  *(int *)(puVar6 + 0x13) = param_6;
  cVar12 = *(char *)(param_8 + 0x68);
  puVar25 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar11 = puVar25 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
    FUN_140023dd8(local_158,0x50);
    puVar25 = (undefined8 *)(*plVar7 + 7U & 0xfffffffffffffff8);
    puVar11 = puVar25 + 9;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar11;
  puVar25[1] = *(undefined8 *)(param_8 + 8);
  puVar25[2] = 0;
  *(undefined1 *)(puVar25 + 3) = 3;
  *(undefined8 *)((longlong)puVar25 + 0x1c) = 0xffffffffffffffff;
  *puVar25 = &PTR_FUN_14a1fb168;
  *(byte *)(puVar25 + 5) = cVar12 >> 7 & 0x1c;
  *(undefined8 *)((longlong)puVar25 + 0x2c) = 0xffffffff00000000;
  puVar25[7] = 0;
  puVar25[8] = param_8;
  iVar5 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
    FUN_1447568fc(local_150,iVar5);
  }
  plVar7 = local_158;
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar25;
  *(int *)((longlong)puVar25 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar6[0x14] = puVar25;
  puVar6[0xc] = 0;
  cVar12 = *(char *)(param_9 + 0x68);
  puVar25 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar11 = puVar25 + 8;
  if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
    FUN_140023dd8(local_158,0x48);
    puVar25 = (undefined8 *)(*plVar7 + 7U & 0xfffffffffffffff8);
    puVar11 = puVar25 + 8;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar11;
  puVar25[1] = *(undefined8 *)(param_9 + 8);
  puVar25[2] = 0;
  *(undefined1 *)(puVar25 + 3) = 2;
  *(undefined8 *)((longlong)puVar25 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar25 + 5) = 0;
  *puVar25 = &PTR_FUN_14a1fb3e8;
  *(byte *)(puVar25 + 6) = cVar12 >> 7 & 0x1c;
  *(undefined2 *)((longlong)puVar25 + 0x31) = 0;
  puVar25[7] = param_9;
  iVar5 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
    FUN_1447568fc(local_150,iVar5);
  }
  plVar7 = local_158;
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar25;
  *(int *)((longlong)puVar25 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar6[0xd] = puVar25;
  puVar6[0xe] = 0;
  puVar6[0xf] = 0;
  cVar12 = *(char *)(uVar23 + 0x68);
  puVar25 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar11 = puVar25 + 8;
  if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
    FUN_140023dd8(local_158,0x48);
    puVar25 = (undefined8 *)(*plVar7 + 7U & 0xfffffffffffffff8);
    puVar11 = puVar25 + 8;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar11;
  puVar25[1] = *(undefined8 *)(uVar23 + 8);
  puVar25[2] = 0;
  *(undefined1 *)(puVar25 + 3) = 2;
  *(undefined8 *)((longlong)puVar25 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar25 + 5) = 0;
  *puVar25 = &PTR_FUN_14a1fb3e8;
  *(byte *)(puVar25 + 6) = cVar12 >> 7 & 0x1c;
  *(undefined2 *)((longlong)puVar25 + 0x31) = 0;
  puVar25[7] = uVar23;
  iVar5 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
    FUN_1447568fc(local_150,iVar5);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar25;
  *(int *)((longlong)puVar25 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar6[0x10] = puVar25;
  puVar6[0x11] = plVar14;
  *(undefined4 *)(puVar6 + 0x15) = param_5;
  if (DAT_14ca4d320 != 0) {
    FUN_1472ea582(param_1,DAT_14ca4d320 + 0x13870,puVar6 + 0x16);
  }
  uVar22 = (uint)DAT_14c7608ac;
  FUN_145f52094();
  FUN_1448e935e(local_140,&local_a8,&DAT_14ca1aac0,uVar22 * 2 + 1);
  FUN_145f52094();
  local_e8 = local_a8;
  uStack_e4 = (undefined1 *)CONCAT44(uStack_a0,iStack_a4);
  uStack_dc = uStack_9c;
  local_188 = &local_f4;
  local_f4 = DAT_14ca84d8c;
  local_f0 = &DAT_100000001;
  FUN_147263da8(param_1,&local_a8,&local_e8,puVar6 + 2);
  plVar7 = local_158;
  if (DAT_14c7608ac == 0) {
    cVar12 = *(char *)(uVar24 + 0x68);
    puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar6 + 8;
    if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
      FUN_140023dd8(local_158,0x48);
      puVar6 = (undefined8 *)(*plVar7 + 7U & 0xfffffffffffffff8);
      puVar11 = puVar6 + 8;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar11;
    puVar6[1] = *(undefined8 *)(uVar24 + 8);
    puVar6[2] = 0;
    *(undefined1 *)(puVar6 + 3) = 2;
    *(undefined8 *)((longlong)puVar6 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar6 + 5) = 0;
    *puVar6 = &PTR_FUN_14a1fb3e8;
    *(byte *)(puVar6 + 6) = cVar12 >> 7 & 0x1c;
    *(undefined2 *)((longlong)puVar6 + 0x31) = 0;
    puVar6[7] = uVar24;
    iVar5 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
      FUN_1447568fc(local_150,iVar5);
    }
    plVar14 = local_158;
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar6;
    *(int *)((longlong)puVar6 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    cVar12 = *(char *)(param_9 + 0x68);
    puVar25 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar25 + 8;
    if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
      FUN_140023dd8(local_158,0x48);
      puVar25 = (undefined8 *)(*plVar14 + 7U & 0xfffffffffffffff8);
      puVar11 = puVar25 + 8;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar11;
    puVar25[1] = *(undefined8 *)(param_9 + 8);
    puVar25[2] = 0;
    *(undefined1 *)(puVar25 + 3) = 2;
    *(undefined8 *)((longlong)puVar25 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar25 + 5) = 0;
    *puVar25 = &PTR_FUN_14a1fb3e8;
    *(byte *)(puVar25 + 6) = cVar12 >> 7 & 0x1c;
    *(undefined2 *)((longlong)puVar25 + 0x31) = 0;
    puVar25[7] = param_9;
    iVar5 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
      FUN_1447568fc(local_150,iVar5);
    }
    plVar14 = local_158;
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar25;
    *(int *)((longlong)puVar25 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    cVar12 = *(char *)(param_7 + 0x68);
    puVar20 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar20 + 9;
    if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
      FUN_140023dd8(local_158,0x50);
      puVar20 = (undefined8 *)(*plVar14 + 7U & 0xfffffffffffffff8);
      puVar11 = puVar20 + 9;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar11;
    puVar20[1] = *(undefined8 *)(param_7 + 8);
    puVar20[2] = 0;
    *(undefined1 *)(puVar20 + 3) = 3;
    *(undefined8 *)((longlong)puVar20 + 0x1c) = 0xffffffffffffffff;
    *puVar20 = &PTR_FUN_14a1fb168;
    *(byte *)(puVar20 + 5) = cVar12 >> 7 & 0x1c;
    *(undefined8 *)((longlong)puVar20 + 0x2c) = 0xffffffff00000000;
    puVar20[7] = 0;
    puVar20[8] = param_7;
    iVar5 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
      FUN_1447568fc(local_150,iVar5);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar20;
    *(int *)((longlong)puVar20 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    local_160 = param_14;
    local_188 = (uint *)CONCAT44(local_188._4_4_,param_6);
    local_180 = (int *)CONCAT71(local_180._1_7_,1);
    local_178 = puVar25;
    local_170 = puVar6;
    local_168 = param_12;
    FUN_142e56c30(param_1,local_140,&local_d8,puVar20);
    plVar14 = local_158;
    puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar11 = puVar6 + 0x1a;
    if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
      FUN_140023dd8(local_158,0xe0);
      puVar6 = (undefined8 *)(*plVar14 + 0xfU & 0xfffffffffffffff0);
      puVar11 = puVar6 + 0x1a;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar11;
    *puVar6 = &PTR_FUN_14a2a12e0;
    puVar6[2] = 0;
    *(undefined1 *)(puVar6 + 3) = 1;
    puVar6[0x14] = 0;
    puVar6[0x16] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
    puVar6[0x12] = 0;
    *(undefined1 *)(puVar6 + 0x17) = 1;
    puVar6[0x18] = 0;
    puVar6[0x19] = 0;
    iVar5 = *(int *)(param_1 + 0xa0);
    *(uint *)(param_1 + 0xa0) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0xa4) < iVar5 + 1U) {
      FUN_1448cfae8(local_148,iVar5);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar5 * 8) = puVar6;
    uVar8 = FUN_1448c569e(local_128,param_1);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14ca4b328) {
      FUN_144b3d300(&DAT_14ca4b328);
      if (DAT_14ca4b328 == -1) {
        DAT_14ca4b320 = FUN_145900d44();
        _Init_thread_footer(&DAT_14ca4b328);
      }
    }
    cVar12 = '\x02';
    if (*(char *)(DAT_14ca4b320 + 0x41) != '\x03') {
      cVar12 = *(char *)(DAT_14ca4b320 + 0x41);
    }
    puVar6[2] = uVar8;
    *(char *)(puVar6 + 3) = cVar12;
    *(undefined4 *)(puVar6 + 10) = (undefined4)local_c8;
    *(undefined4 *)((longlong)puVar6 + 0x54) = local_c8._4_4_;
    *(uint *)(puVar6 + 0xb) = uStack_c0;
    *(undefined4 *)((longlong)puVar6 + 0x5c) = uStack_bc;
    *(undefined4 *)(puVar6 + 8) = (undefined4)local_d8;
    *(undefined4 *)((longlong)puVar6 + 0x44) = local_d8._4_4_;
    *(undefined4 *)(puVar6 + 9) = (undefined4)uStack_d0;
    *(undefined4 *)((longlong)puVar6 + 0x4c) = uStack_d0._4_4_;
    uVar8 = FUN_1417ea8a0(&DAT_14cb00cc8,param_1);
    puVar6[4] = uVar8;
    uVar18 = 0;
    lVar9 = FUN_144735dd8(param_1,&DAT_14cb00e10,0);
    plVar14 = local_158;
    if ((*(byte *)(lVar9 + 0x68) & 0x80) != 0) {
      uVar18 = 0x1c;
    }
    puVar25 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar25 + 9;
    if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
      FUN_140023dd8(local_158,0x50);
      puVar25 = (undefined8 *)(*plVar14 + 7U & 0xfffffffffffffff8);
      puVar11 = puVar25 + 9;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar11;
    puVar25[1] = *(undefined8 *)(lVar9 + 8);
    puVar25[2] = 0;
    *(undefined1 *)(puVar25 + 3) = 3;
    *(undefined8 *)((longlong)puVar25 + 0x1c) = 0xffffffffffffffff;
    *puVar25 = &PTR_FUN_14a1fb168;
    *(undefined1 *)(puVar25 + 5) = uVar18;
    *(undefined8 *)((longlong)puVar25 + 0x2c) = 0xffffffff00000000;
    puVar25[7] = 0;
    puVar25[8] = lVar9;
    iVar5 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
      FUN_1447568fc(local_150,iVar5);
    }
    plVar14 = local_158;
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar25;
    *(int *)((longlong)puVar25 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar6[5] = puVar25;
    *(undefined4 *)(puVar6 + 6) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x34) = DAT_14cb01074;
    cVar12 = *(char *)(param_7 + 0x68);
    puVar25 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar25 + 9;
    if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
      FUN_140023dd8(local_158,0x50);
      puVar25 = (undefined8 *)(*plVar14 + 7U & 0xfffffffffffffff8);
      puVar11 = puVar25 + 9;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar11;
    puVar25[1] = *(undefined8 *)(param_7 + 8);
    puVar25[2] = 0;
    *(undefined1 *)(puVar25 + 3) = 3;
    *(undefined8 *)((longlong)puVar25 + 0x1c) = 0xffffffffffffffff;
    *puVar25 = &PTR_FUN_14a1fb168;
    *(byte *)(puVar25 + 5) = cVar12 >> 7 & 0x1c;
    *(undefined8 *)((longlong)puVar25 + 0x2c) = 0xffffffff00000000;
    puVar25[7] = 0;
    puVar25[8] = param_7;
    iVar5 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
      FUN_1447568fc(local_150,iVar5);
    }
    plVar14 = local_158;
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar25;
    *(int *)((longlong)puVar25 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar6[0x12] = puVar25;
    *(int *)(puVar6 + 0x13) = param_6;
    cVar12 = *(char *)(param_8 + 0x68);
    puVar25 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar25 + 9;
    if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
      FUN_140023dd8(local_158,0x50);
      puVar25 = (undefined8 *)(*plVar14 + 7U & 0xfffffffffffffff8);
      puVar11 = puVar25 + 9;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar11;
    puVar25[1] = *(undefined8 *)(param_8 + 8);
    puVar25[2] = 0;
    *(undefined1 *)(puVar25 + 3) = 3;
    *(undefined8 *)((longlong)puVar25 + 0x1c) = 0xffffffffffffffff;
    *puVar25 = &PTR_FUN_14a1fb168;
    *(byte *)(puVar25 + 5) = cVar12 >> 7 & 0x1c;
    *(undefined8 *)((longlong)puVar25 + 0x2c) = 0xffffffff00000000;
    puVar25[7] = 0;
    puVar25[8] = param_8;
    iVar5 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
      FUN_1447568fc(local_150,iVar5);
    }
    plVar14 = local_158;
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar25;
    *(int *)((longlong)puVar25 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar6[0x14] = puVar25;
    cVar12 = *(char *)(param_10 + 0x68);
    puVar25 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar25 + 8;
    if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
      FUN_140023dd8(local_158,0x48);
      puVar25 = (undefined8 *)(*plVar14 + 7U & 0xfffffffffffffff8);
      puVar11 = puVar25 + 8;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar11;
    puVar25[1] = *(undefined8 *)(param_10 + 8);
    puVar25[2] = 0;
    *(undefined1 *)(puVar25 + 3) = 2;
    *(undefined8 *)((longlong)puVar25 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar25 + 5) = 0;
    *puVar25 = &PTR_FUN_14a1fb3e8;
    *(byte *)(puVar25 + 6) = cVar12 >> 7 & 0x1c;
    *(undefined2 *)((longlong)puVar25 + 0x31) = 0;
    puVar25[7] = param_10;
    iVar5 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
      FUN_1447568fc(local_150,iVar5);
    }
    plVar14 = local_158;
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar25;
    *(int *)((longlong)puVar25 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar6[0xc] = puVar25;
    cVar12 = *(char *)(param_9 + 0x68);
    puVar25 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar25 + 8;
    if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
      FUN_140023dd8(local_158,0x48);
      puVar25 = (undefined8 *)(*plVar14 + 7U & 0xfffffffffffffff8);
      puVar11 = puVar25 + 8;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar11;
    puVar25[1] = *(undefined8 *)(param_9 + 8);
    puVar25[2] = 0;
    *(undefined1 *)(puVar25 + 3) = 2;
    *(undefined8 *)((longlong)puVar25 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar25 + 5) = 0;
    *puVar25 = &PTR_FUN_14a1fb3e8;
    *(byte *)(puVar25 + 6) = cVar12 >> 7 & 0x1c;
    *(undefined2 *)((longlong)puVar25 + 0x31) = 0;
    puVar25[7] = param_9;
    iVar5 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
      FUN_1447568fc(local_150,iVar5);
    }
    plVar14 = local_158;
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar25;
    *(int *)((longlong)puVar25 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar6[0xd] = puVar25;
    cVar12 = *(char *)(param_11 + 0x68);
    puVar25 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar25 + 8;
    if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
      FUN_140023dd8(local_158,0x48);
      puVar25 = (undefined8 *)(*plVar14 + 7U & 0xfffffffffffffff8);
      puVar11 = puVar25 + 8;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar11;
    puVar25[1] = *(undefined8 *)(param_11 + 8);
    puVar25[2] = 0;
    *(undefined1 *)(puVar25 + 3) = 2;
    *(undefined8 *)((longlong)puVar25 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar25 + 5) = 0;
    *puVar25 = &PTR_FUN_14a1fb3e8;
    *(byte *)(puVar25 + 6) = cVar12 >> 7 & 0x1c;
    *(undefined2 *)((longlong)puVar25 + 0x31) = 0;
    puVar25[7] = param_11;
    iVar5 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
      FUN_1447568fc(local_150,iVar5);
    }
    plVar14 = local_158;
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar25;
    *(int *)((longlong)puVar25 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar6[0xe] = puVar25;
    cVar12 = *(char *)(param_13 + 0x68);
    puVar25 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar25 + 8;
    if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
      FUN_140023dd8(local_158,0x48);
      puVar25 = (undefined8 *)(*plVar14 + 7U & 0xfffffffffffffff8);
      puVar11 = puVar25 + 8;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar11;
    puVar25[1] = *(undefined8 *)(param_13 + 8);
    puVar25[2] = 0;
    *(undefined1 *)(puVar25 + 3) = 2;
    *(undefined8 *)((longlong)puVar25 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar25 + 5) = 0;
    *puVar25 = &PTR_FUN_14a1fb3e8;
    *(byte *)(puVar25 + 6) = cVar12 >> 7 & 0x1c;
    *(undefined2 *)((longlong)puVar25 + 0x31) = 0;
    puVar25[7] = param_13;
    iVar5 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
      FUN_1447568fc(local_150,iVar5);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar25;
    *(int *)((longlong)puVar25 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar6[0xf] = puVar25;
    *(undefined4 *)(puVar6 + 0x15) = param_5;
    if (DAT_14ca4d320 != 0) {
      FUN_1472ea582(param_1,DAT_14ca4d320 + 0x13870,puVar6 + 0x16);
    }
    FUN_145f52094();
    FUN_1448e935e(local_140,&local_a8,&DAT_14ca1aac0,0);
    FUN_145f52094();
    local_e8 = local_a8;
    uStack_e4 = (undefined1 *)CONCAT44(uStack_a0,iStack_a4);
    uStack_dc = uStack_9c;
    local_188 = &local_100;
    local_100 = DAT_14ca84d8c;
    local_fc = &DAT_100000001;
    FUN_147263da8(param_1,&local_a8,&local_e8,puVar6 + 2);
  }
  else {
    local_98 = (longlong *)0x0;
    uVar22 = 0xc;
    if (DAT_14ca84e48 < 0xc) {
      uVar22 = DAT_14ca84e48;
    }
    local_a8 = uVar22 + (uVar22 == 0);
    iStack_a4 = 1;
    uStack_a0 = 0x4189;
    puVar21 = (undefined4 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar10 = puVar21 + 0x54;
    if (*(undefined4 **)(param_1 + 0x78) < puVar10) {
      FUN_140023dd8(local_158,0x160);
      puVar21 = (undefined4 *)(*plVar7 + 0xfU & 0xfffffffffffffff0);
      puVar10 = puVar21 + 0x54;
    }
    *(undefined4 **)(param_1 + 0x70) = puVar10;
    FUN_1456bd266(puVar21,L"NaniteStreamOut.DispatchIndirectArgs",&local_a8,0);
    iVar5 = *(int *)(param_1 + 400);
    *(uint *)(param_1 + 400) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0x194) < iVar5 + 1U) {
      FUN_144737178(local_138,iVar5);
    }
    plVar7 = local_158;
    *(undefined4 **)(*(longlong *)(param_1 + 0x188) + (longlong)iVar5 * 8) = puVar21;
    puVar21[0x1f] = *(int *)(param_1 + 400) + -1;
    puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar11 = puVar6 + 0xe;
    if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
      FUN_140023dd8(local_158,0x80);
      puVar6 = (undefined8 *)(*plVar7 + 0xfU & 0xfffffffffffffff0);
      puVar11 = puVar6 + 0xe;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar11;
    *puVar6 = &PTR_FUN_14a2a1308;
    puVar6[2] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    *(undefined1 *)(puVar6 + 0xb) = 1;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    iVar5 = *(int *)(param_1 + 0xa0);
    *(uint *)(param_1 + 0xa0) = iVar5 + 1U;
    local_128 = puVar21;
    if (*(uint *)(param_1 + 0xa4) < iVar5 + 1U) {
      FUN_1448cfae8(local_148,iVar5);
    }
    plVar7 = local_158;
    *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar5 * 8) = puVar6;
    cVar12 = *(char *)(param_7 + 0x68);
    puVar25 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar25 + 9;
    if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
      FUN_140023dd8(local_158,0x50);
      puVar25 = (undefined8 *)(*plVar7 + 7U & 0xfffffffffffffff8);
      puVar11 = puVar25 + 9;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar11;
    puVar25[1] = *(undefined8 *)(param_7 + 8);
    puVar25[2] = 0;
    *(undefined1 *)(puVar25 + 3) = 3;
    *(undefined8 *)((longlong)puVar25 + 0x1c) = 0xffffffffffffffff;
    *puVar25 = &PTR_FUN_14a1fb168;
    *(byte *)(puVar25 + 5) = cVar12 >> 7 & 0x1c;
    *(undefined8 *)((longlong)puVar25 + 0x2c) = 0xffffffff00000000;
    puVar25[7] = 0;
    puVar25[8] = param_7;
    iVar5 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
      FUN_1447568fc(local_150,iVar5);
    }
    plVar7 = local_158;
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar25;
    *(int *)((longlong)puVar25 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar6[2] = puVar25;
    *(int *)(puVar6 + 3) = param_6;
    cVar12 = *(char *)(param_9 + 0x68);
    puVar25 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar25 + 8;
    if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
      FUN_140023dd8(local_158,0x48);
      puVar25 = (undefined8 *)(*plVar7 + 7U & 0xfffffffffffffff8);
      puVar11 = puVar25 + 8;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar11;
    puVar25[1] = *(undefined8 *)(param_9 + 8);
    puVar25[2] = 0;
    *(undefined1 *)(puVar25 + 3) = 2;
    *(undefined8 *)((longlong)puVar25 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar25 + 5) = 0;
    *puVar25 = &PTR_FUN_14a1fb3e8;
    *(byte *)(puVar25 + 6) = cVar12 >> 7 & 0x1c;
    *(undefined2 *)((longlong)puVar25 + 0x31) = 0;
    puVar25[7] = param_9;
    iVar5 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
      FUN_1447568fc(local_150,iVar5);
    }
    plVar7 = local_158;
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar25;
    *(int *)((longlong)puVar25 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar6[4] = puVar25;
    cVar12 = *(char *)(uVar24 + 0x68);
    puVar25 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar25 + 8;
    if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
      FUN_140023dd8(local_158,0x48);
      puVar25 = (undefined8 *)(*plVar7 + 7U & 0xfffffffffffffff8);
      puVar11 = puVar25 + 8;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar11;
    puVar25[1] = *(undefined8 *)(uVar24 + 8);
    puVar25[2] = 0;
    *(undefined1 *)(puVar25 + 3) = 2;
    *(undefined8 *)((longlong)puVar25 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar25 + 5) = 0;
    *puVar25 = &PTR_FUN_14a1fb3e8;
    *(byte *)(puVar25 + 6) = cVar12 >> 7 & 0x1c;
    *(undefined2 *)((longlong)puVar25 + 0x31) = 0;
    puVar25[7] = uVar24;
    iVar5 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
      FUN_1447568fc(local_150,iVar5);
    }
    puVar10 = local_128;
    plVar7 = local_158;
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar25;
    *(int *)((longlong)puVar25 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar6[5] = puVar25;
    puVar6[6] = 0x100000000;
    *(undefined4 *)(puVar6 + 7) = param_12;
    *(undefined4 *)((longlong)puVar6 + 0x3c) = param_14;
    puVar6[8] = plVar14;
    cVar12 = *(char *)(local_128 + 0x1a);
    puVar25 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar25 + 8;
    if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
      FUN_140023dd8(local_158,0x48);
      puVar25 = (undefined8 *)(*plVar7 + 7U & 0xfffffffffffffff8);
      puVar11 = puVar25 + 8;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar11;
    puVar25[1] = *(undefined8 *)(puVar10 + 2);
    puVar25[2] = 0;
    *(undefined1 *)(puVar25 + 3) = 2;
    *(undefined8 *)((longlong)puVar25 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar25 + 5) = 0;
    *puVar25 = &PTR_FUN_14a1fb3e8;
    *(byte *)(puVar25 + 6) = cVar12 >> 7 & 0x1c;
    *(undefined2 *)((longlong)puVar25 + 0x31) = 0;
    puVar25[7] = puVar10;
    iVar5 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
      FUN_1447568fc(local_150,iVar5);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar25;
    *(int *)((longlong)puVar25 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar6[9] = puVar25;
    if (DAT_14ca4d320 != 0) {
      FUN_1472ea582(param_1,DAT_14ca4d320 + 0x13870,puVar6 + 10);
    }
    FUN_147263e5a(local_140,&local_a8);
    local_10c = param_6 + 0x7e;
    if (-1 < param_6 + 0x3f) {
      local_10c = param_6 + 0x3f;
    }
    local_10c = local_10c >> 6;
    local_108 = &DAT_100000001;
    iVar5 = 1;
    if (DAT_14ca84f24 < local_10c) {
      iVar5 = local_10c + 0xfe;
      if (-1 < local_10c + 0x7f) {
        iVar5 = local_10c + 0x7f;
      }
      iVar5 = iVar5 >> 7;
      local_108 = (undefined1 *)CONCAT44(1,iVar5);
      local_10c = 0x80;
    }
    if (DAT_14ca84f28 < iVar5) {
      iVar13 = iVar5 + 0xfe;
      if (-1 < iVar5 + 0x7f) {
        iVar13 = iVar5 + 0x7f;
      }
      local_108 = (undefined1 *)CONCAT44(iVar13 >> 7,0x80);
    }
    local_188 = (uint *)&local_10c;
    FUN_147263ec7(param_1,&local_e8,&local_a8,puVar6 + 2);
    plVar7 = local_158;
    puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar11 = puVar6 + 0x16;
    if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
      FUN_140023dd8(local_158,0xc0);
      puVar6 = (undefined8 *)(*plVar7 + 0xfU & 0xfffffffffffffff0);
      puVar11 = puVar6 + 0x16;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar11;
    *puVar6 = &PTR_FUN_14a2a1328;
    puVar6[2] = 0;
    puVar6[0xe] = 0;
    puVar6[0x10] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    *(undefined1 *)(puVar6 + 0x11) = 1;
    puVar6[0x12] = 0;
    puVar6[0x13] = 0;
    puVar6[0x14] = 0;
    *(undefined4 *)(puVar6 + 0x15) = 4;
    iVar5 = *(int *)(param_1 + 0xa0);
    *(uint *)(param_1 + 0xa0) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0xa4) < iVar5 + 1U) {
      FUN_1448cfae8(local_148,iVar5);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar5 * 8) = puVar6;
    uVar18 = 0;
    lVar9 = FUN_144735dd8(param_1,&DAT_14cb00e10,0);
    plVar7 = local_158;
    if ((*(byte *)(lVar9 + 0x68) & 0x80) != 0) {
      uVar18 = 0x1c;
    }
    puVar25 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar25 + 9;
    if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
      FUN_140023dd8(local_158,0x50);
      puVar25 = (undefined8 *)(*plVar7 + 7U & 0xfffffffffffffff8);
      puVar11 = puVar25 + 9;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar11;
    puVar25[1] = *(undefined8 *)(lVar9 + 8);
    puVar25[2] = 0;
    *(undefined1 *)(puVar25 + 3) = 3;
    *(undefined8 *)((longlong)puVar25 + 0x1c) = 0xffffffffffffffff;
    *puVar25 = &PTR_FUN_14a1fb168;
    *(undefined1 *)(puVar25 + 5) = uVar18;
    *(undefined8 *)((longlong)puVar25 + 0x2c) = 0xffffffff00000000;
    puVar25[7] = 0;
    puVar25[8] = lVar9;
    iVar5 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
      FUN_1447568fc(local_150,iVar5);
    }
    plVar7 = local_158;
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar25;
    *(int *)((longlong)puVar25 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar6[2] = puVar25;
    *(undefined4 *)(puVar6 + 4) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x24) = DAT_14cb01074;
    cVar12 = *(char *)(param_7 + 0x68);
    puVar25 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar25 + 9;
    if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
      FUN_140023dd8(local_158,0x50);
      puVar25 = (undefined8 *)(*plVar7 + 7U & 0xfffffffffffffff8);
      puVar11 = puVar25 + 9;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar11;
    puVar25[1] = *(undefined8 *)(param_7 + 8);
    puVar25[2] = 0;
    *(undefined1 *)(puVar25 + 3) = 3;
    *(undefined8 *)((longlong)puVar25 + 0x1c) = 0xffffffffffffffff;
    *puVar25 = &PTR_FUN_14a1fb168;
    *(byte *)(puVar25 + 5) = cVar12 >> 7 & 0x1c;
    *(undefined8 *)((longlong)puVar25 + 0x2c) = 0xffffffff00000000;
    puVar25[7] = 0;
    puVar25[8] = param_7;
    iVar5 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
      FUN_1447568fc(local_150,iVar5);
    }
    plVar7 = local_158;
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar25;
    *(int *)((longlong)puVar25 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar6[0xc] = puVar25;
    *(int *)(puVar6 + 0xd) = param_6;
    cVar12 = *(char *)(param_8 + 0x68);
    puVar25 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar25 + 9;
    if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
      FUN_140023dd8(local_158,0x50);
      puVar25 = (undefined8 *)(*plVar7 + 7U & 0xfffffffffffffff8);
      puVar11 = puVar25 + 9;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar11;
    puVar25[1] = *(undefined8 *)(param_8 + 8);
    puVar25[2] = 0;
    *(undefined1 *)(puVar25 + 3) = 3;
    *(undefined8 *)((longlong)puVar25 + 0x1c) = 0xffffffffffffffff;
    *puVar25 = &PTR_FUN_14a1fb168;
    *(byte *)(puVar25 + 5) = cVar12 >> 7 & 0x1c;
    *(undefined8 *)((longlong)puVar25 + 0x2c) = 0xffffffff00000000;
    puVar25[7] = 0;
    puVar25[8] = param_8;
    iVar5 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
      FUN_1447568fc(local_150,iVar5);
    }
    plVar7 = local_158;
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar25;
    *(int *)((longlong)puVar25 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar6[0xe] = puVar25;
    cVar12 = *(char *)(param_10 + 0x68);
    puVar25 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar25 + 8;
    if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
      FUN_140023dd8(local_158,0x48);
      puVar25 = (undefined8 *)(*plVar7 + 7U & 0xfffffffffffffff8);
      puVar11 = puVar25 + 8;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar11;
    puVar25[1] = *(undefined8 *)(param_10 + 8);
    puVar25[2] = 0;
    *(undefined1 *)(puVar25 + 3) = 2;
    *(undefined8 *)((longlong)puVar25 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar25 + 5) = 0;
    *puVar25 = &PTR_FUN_14a1fb3e8;
    *(byte *)(puVar25 + 6) = cVar12 >> 7 & 0x1c;
    *(undefined2 *)((longlong)puVar25 + 0x31) = 0;
    puVar25[7] = param_10;
    iVar5 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
      FUN_1447568fc(local_150,iVar5);
    }
    plVar7 = local_158;
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar25;
    *(int *)((longlong)puVar25 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar6[6] = puVar25;
    cVar12 = *(char *)(param_9 + 0x68);
    puVar25 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar25 + 8;
    if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
      FUN_140023dd8(local_158,0x48);
      puVar25 = (undefined8 *)(*plVar7 + 7U & 0xfffffffffffffff8);
      puVar11 = puVar25 + 8;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar11;
    puVar25[1] = *(undefined8 *)(param_9 + 8);
    puVar25[2] = 0;
    *(undefined1 *)(puVar25 + 3) = 2;
    *(undefined8 *)((longlong)puVar25 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar25 + 5) = 0;
    *puVar25 = &PTR_FUN_14a1fb3e8;
    *(byte *)(puVar25 + 6) = cVar12 >> 7 & 0x1c;
    *(undefined2 *)((longlong)puVar25 + 0x31) = 0;
    puVar25[7] = param_9;
    iVar5 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
      FUN_1447568fc(local_150,iVar5);
    }
    plVar7 = local_158;
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar25;
    *(int *)((longlong)puVar25 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar6[7] = puVar25;
    cVar12 = *(char *)(param_11 + 0x68);
    puVar25 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar25 + 8;
    if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
      FUN_140023dd8(local_158,0x48);
      puVar25 = (undefined8 *)(*plVar7 + 7U & 0xfffffffffffffff8);
      puVar11 = puVar25 + 8;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar11;
    puVar25[1] = *(undefined8 *)(param_11 + 8);
    puVar25[2] = 0;
    *(undefined1 *)(puVar25 + 3) = 2;
    *(undefined8 *)((longlong)puVar25 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar25 + 5) = 0;
    *puVar25 = &PTR_FUN_14a1fb3e8;
    *(byte *)(puVar25 + 6) = cVar12 >> 7 & 0x1c;
    *(undefined2 *)((longlong)puVar25 + 0x31) = 0;
    puVar25[7] = param_11;
    iVar5 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
      FUN_1447568fc(local_150,iVar5);
    }
    plVar7 = local_158;
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar25;
    *(int *)((longlong)puVar25 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar6[8] = puVar25;
    cVar12 = *(char *)(param_13 + 0x68);
    puVar25 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar25 + 8;
    if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
      FUN_140023dd8(local_158,0x48);
      puVar25 = (undefined8 *)(*plVar7 + 7U & 0xfffffffffffffff8);
      puVar11 = puVar25 + 8;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar11;
    puVar25[1] = *(undefined8 *)(param_13 + 8);
    puVar25[2] = 0;
    *(undefined1 *)(puVar25 + 3) = 2;
    *(undefined8 *)((longlong)puVar25 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar25 + 5) = 0;
    *puVar25 = &PTR_FUN_14a1fb3e8;
    *(byte *)(puVar25 + 6) = cVar12 >> 7 & 0x1c;
    *(undefined2 *)((longlong)puVar25 + 0x31) = 0;
    puVar25[7] = param_13;
    iVar5 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
      FUN_1447568fc(local_150,iVar5);
    }
    plVar7 = local_158;
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar25;
    *(int *)((longlong)puVar25 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar6[9] = puVar25;
    cVar12 = *(char *)(uVar23 + 0x68);
    puVar25 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar25 + 9;
    if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
      FUN_140023dd8(local_158,0x50);
      puVar25 = (undefined8 *)(*plVar7 + 7U & 0xfffffffffffffff8);
      puVar11 = puVar25 + 9;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar11;
    puVar25[1] = *(undefined8 *)(uVar23 + 8);
    puVar25[2] = 0;
    *(undefined1 *)(puVar25 + 3) = 3;
    *(undefined8 *)((longlong)puVar25 + 0x1c) = 0xffffffffffffffff;
    *puVar25 = &PTR_FUN_14a1fb168;
    *(byte *)(puVar25 + 5) = cVar12 >> 7 & 0x1c;
    *(undefined8 *)((longlong)puVar25 + 0x2c) = 0xffffffff00000000;
    puVar25[7] = 0;
    puVar25[8] = uVar23;
    iVar5 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
      FUN_1447568fc(local_150,iVar5);
    }
    puVar10 = local_128;
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar25;
    *(int *)((longlong)puVar25 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar6[10] = puVar25;
    puVar6[0xb] = plVar14;
    puVar6[0x14] = local_128;
    *(undefined4 *)(puVar6 + 0x15) = 4;
    if (DAT_14ca4d320 != 0) {
      FUN_1472ea582(param_1,DAT_14ca4d320 + 0x13870,puVar6 + 0x10);
    }
    FUN_147263f7a(local_140,&local_e8);
    local_a8 = 0;
    iStack_a4 = 0;
    local_98 = (longlong *)0x0;
    local_180 = &local_a8;
    local_188 = puVar10;
    FUN_14726eb53(param_1,&local_b4,&local_e8,puVar6 + 2);
    if (CONCAT44(iStack_a4,local_a8) != 0) {
      plVar14 = local_98;
      if (local_98 == (longlong *)0x0) {
        plVar14 = local_88;
      }
      (**(code **)(*plVar14 + 0x10))();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e4b65c FUN_142e4b65c body=5018 status=ok
// SIG undefined FUN_142e4b65c(void)

void FUN_142e4b65c(longlong param_1)

{
  uint *puVar1;
  byte bVar2;
  longlong lVar3;
  void *_Dst;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  int *piVar7;
  longlong *plVar8;
  longlong lVar9;
  uint *puVar10;
  longlong *plVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  ulonglong *puVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  int iVar20;
  ulonglong *puVar21;
  ulonglong uVar22;
  longlong lVar23;
  ulonglong *puVar24;
  longlong *plVar25;
  ulonglong uVar26;
  undefined4 uVar27;
  uint uVar28;
  longlong *plVar29;
  uint uVar30;
  ulonglong uVar31;
  bool bVar32;
  undefined1 auStack_1b8 [32];
  undefined4 local_198;
  int local_190;
  longlong local_180;
  int *local_178;
  longlong *local_170;
  uint *local_168;
  ulonglong *local_160;
  uint *local_158;
  ulonglong local_150;
  ulonglong *local_148;
  longlong *local_140;
  uint local_134;
  int *local_130;
  longlong *local_128;
  longlong local_120;
  longlong local_118;
  int local_10c;
  ulonglong local_108 [4];
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  longlong local_c8;
  undefined4 local_c0;
  ulonglong local_b8;
  int iStack_b0;
  undefined2 uStack_ac;
  undefined2 uStack_aa;
  int iStack_a8;
  undefined2 uStack_a4;
  undefined1 local_a2;
  undefined1 local_a1;
  undefined7 uStack_a0;
  undefined1 uStack_99;
  undefined4 uStack_98;
  undefined3 uStack_94;
  undefined8 local_91;
  undefined8 uStack_89;
  undefined1 local_81;
  undefined7 uStack_80;
  undefined1 uStack_79;
  undefined4 uStack_78;
  undefined3 uStack_74;
  undefined5 uStack_71;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_134 = (uint)DAT_14caff4f8;
  iVar20 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_108[0] = 0;
  local_108[1] = 0;
  local_dc = 0xffffffff00000080;
  local_d4 = 0;
  local_c8 = 0;
  local_c0 = 0;
  puVar16 = (ulonglong *)(param_1 + 0x138);
  iVar17 = *(int *)(param_1 + 0x160);
  local_180 = param_1;
  if (iVar17 == 0) {
    uVar22 = 1;
    uVar31 = 0;
    iVar5 = 0;
  }
  else {
    puVar10 = *(uint **)(param_1 + 0x158);
    if (*(uint **)(param_1 + 0x158) == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 0x148);
    }
    uVar28 = *puVar10;
    if (uVar28 == 0) {
      iVar20 = iVar17 + 0x1e;
      if (-1 < iVar17 + -1) {
        iVar20 = iVar17 + -1;
      }
      uVar31 = 0;
      uVar22 = (ulonglong)(uint)(iVar20 >> 5);
      if (iVar20 >> 5 < 1) {
        uVar22 = uVar31;
      }
      iVar20 = 0;
      do {
        if (uVar22 == uVar31) goto LAB_142e4b77d;
        iVar20 = iVar20 + 0x20;
        uVar28 = puVar10[uVar31 + 1];
        uVar31 = uVar31 + 1;
      } while (uVar28 == 0);
    }
    else {
      iVar20 = 0;
      uVar31 = 0;
    }
    uVar22 = (ulonglong)(-uVar28 & uVar28);
    uVar26 = uVar22 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar26 != 0) {
      for (; uVar26 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iVar5 = (iVar20 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    if (iVar17 <= iVar5) {
      iVar5 = iVar17;
    }
  }
  if (iVar5 != iVar17) {
    local_178 = (int *)(param_1 + 0x200);
    local_170 = (longlong *)(param_1 + 0x10);
    uVar28 = 0xffffffff;
    local_168 = (uint *)(param_1 + 0x148);
    local_148 = puVar16;
    do {
      iVar5 = *(int *)(*puVar16 + (longlong)iVar5 * 0xc);
      local_b8 = CONCAT44(local_b8._4_4_,iVar5);
      lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar5 * 8);
      if (*(char *)(lVar15 + 0xb8) == '\x01') {
        FUN_144980568(local_108,&local_10c,&local_b8,0);
      }
      else {
        uVar30 = *(uint *)(lVar15 + 0xa8);
        if ((ulonglong)uVar30 != 0xffffffff) {
          uVar18 = *(uint *)(lVar15 + 0xac);
          iVar5 = *(int *)(local_180 + 600);
          *(uint *)(local_180 + 600) = iVar5 + 1U;
          puVar16 = (ulonglong *)(longlong)iVar5;
          uVar26 = (ulonglong)uVar18;
          if (*(uint *)(local_180 + 0x25c) < iVar5 + 1U) {
            local_160 = (ulonglong *)(longlong)iVar5;
            local_150 = (ulonglong)uVar18;
            FUN_14017bd48(local_178);
            puVar16 = local_160;
            uVar26 = local_150;
          }
          piVar7 = *(int **)(local_180 + 0x250);
          if (*(int **)(local_180 + 0x250) == (int *)0x0) {
            piVar7 = local_178;
          }
          *(ulonglong *)(piVar7 + (longlong)puVar16 * 2) = uVar26 << 0x20 | (ulonglong)uVar30;
          *(int *)(local_180 + 400) = *(int *)(local_180 + 400) - (int)uVar26;
        }
        FUN_1409a11ae(local_170,*(undefined4 *)(lVar15 + 0x50));
        FUN_14726b804((longlong *)(param_1 + 0x60),local_b8 & 0xffffffff);
        puVar16 = local_148;
        if (lVar15 != 0) {
          FUN_147262dbe(lVar15);
          FUN_1400020a8(lVar15);
        }
      }
      uVar28 = uVar28 & ~(uint)uVar22;
      puVar10 = *(uint **)(local_180 + 0x158);
      if (*(uint **)(local_180 + 0x158) == (uint *)0x0) {
        puVar10 = local_168;
      }
      iVar14 = *(int *)(local_180 + 0x160);
      iVar5 = (int)uVar31;
      lVar15 = (longlong)iVar5;
      uVar30 = puVar10[lVar15] & uVar28;
      if (uVar30 == 0) {
        iVar12 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar12 = iVar14 + -1;
        }
        iVar12 = iVar12 >> 5;
        iVar20 = iVar20 + 0x20;
        iVar13 = iVar12;
        if (iVar12 < iVar5) {
          iVar13 = iVar5;
        }
        if (iVar5 < iVar12) {
          lVar9 = 0;
          do {
            uVar30 = puVar10[lVar15 + lVar9 + 1];
            if (uVar30 != 0) {
              uVar31 = (ulonglong)(iVar5 + (int)lVar9 + 1);
              uVar28 = 0xffffffff;
              goto LAB_142e4bd9c;
            }
            iVar20 = iVar20 + 0x20;
            lVar9 = lVar9 + 1;
          } while (iVar13 - lVar15 != lVar9);
          uVar28 = 0xffffffff;
          iVar5 = iVar13;
        }
        uVar31 = (ulonglong)(iVar5 + 1);
        iVar5 = iVar14;
      }
      else {
LAB_142e4bd9c:
        uVar22 = (ulonglong)(-uVar30 & uVar30);
        uVar26 = uVar22 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar26 != 0) {
          for (; uVar26 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        iVar5 = (iVar20 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
        if (iVar14 <= iVar5) {
          iVar5 = iVar14;
        }
      }
    } while (iVar5 != iVar17);
  }
LAB_142e4b77d:
  puVar21 = puVar16;
  puVar24 = &local_b8;
  for (lVar15 = 10; lVar15 != 0; lVar15 = lVar15 + -1) {
    *puVar24 = *puVar21;
    puVar21 = puVar21 + 1;
    puVar24 = puVar24 + 1;
  }
  puVar21 = local_108;
  for (lVar15 = 10; lVar15 != 0; lVar15 = lVar15 + -1) {
    *puVar16 = *puVar21;
    puVar21 = puVar21 + 1;
    puVar16 = puVar16 + 1;
  }
  puVar16 = &local_b8;
  puVar21 = local_108;
  for (lVar15 = 10; lVar15 != 0; lVar15 = lVar15 + -1) {
    *puVar21 = *puVar16;
    puVar16 = puVar16 + 1;
    puVar21 = puVar21 + 1;
  }
  local_c0 = 0;
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  FUN_1401bc218(local_108);
  lVar15 = local_180;
  if ((longlong)*(int *)(local_180 + 0x2b0) != 0) {
    puVar10 = *(uint **)(local_180 + 0x2a8);
    local_158 = puVar10 + (longlong)*(int *)(local_180 + 0x2b0) * 4;
    local_178 = (int *)(local_180 + 400);
    local_140 = (longlong *)(local_180 + 0x200);
    local_160 = (ulonglong *)(local_180 + 0x1a0);
    local_170 = (longlong *)(local_180 + 0x298);
    local_150 = 0;
LAB_142e4b833:
    if ((int)local_150 < DAT_14c760850) {
      plVar29 = *(longlong **)(*(longlong *)(lVar15 + 0x60) + (longlong)(int)puVar10[2] * 8);
      lVar15 = *(longlong *)puVar10;
      lVar9 = plVar29[0x14];
      if (lVar9 != lVar15) {
        plVar29[0x14] = lVar15;
        if (lVar15 != 0) {
          LOCK();
          *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
          UNLOCK();
        }
        if (lVar9 != 0) {
          LOCK();
          puVar1 = (uint *)(lVar9 + 8);
          uVar28 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar28 & 0x3fffffff) == 1) {
            puVar1 = (uint *)(lVar9 + 8);
            LOCK();
            uVar28 = *puVar1;
            *puVar1 = *puVar1 | 0x40000000;
            UNLOCK();
            if ((uVar28 >> 0x1e & 1) == 0) {
              bVar2 = *(byte *)(lVar9 + 0xd);
              plVar6 = (longlong *)FUN_14001cc68(0x10,8);
              plVar6[1] = lVar9;
              plVar25 = DAT_14ca843c0;
              plVar11 = DAT_14ca843c8;
              if ((bVar2 & 2) == 0) {
                do {
                  *plVar6 = (longlong)plVar25;
                  LOCK();
                  bVar32 = plVar25 != DAT_14ca843c0;
                  plVar11 = plVar6;
                  if (bVar32) {
                    plVar25 = DAT_14ca843c0;
                    plVar11 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar11;
                  UNLOCK();
                } while (bVar32);
              }
              else {
                do {
                  *plVar6 = (longlong)plVar11;
                  LOCK();
                  bVar32 = plVar11 != DAT_14ca843c8;
                  plVar25 = plVar6;
                  if (bVar32) {
                    plVar11 = DAT_14ca843c8;
                    plVar25 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar25;
                  UNLOCK();
                } while (bVar32);
              }
            }
          }
        }
      }
      lVar15 = plVar29[0x14];
      iVar17 = *(int *)(lVar15 + 0x38);
      lVar9 = plVar29[0x15];
      iVar20 = iVar17;
      if ((int)lVar9 != -1) {
        iVar20 = *(int *)((longlong)plVar29 + 0xac);
        iVar5 = *(int *)(local_180 + 600);
        *(uint *)(local_180 + 600) = iVar5 + 1U;
        if (*(uint *)(local_180 + 0x25c) < iVar5 + 1U) {
          FUN_14017bd48(local_140,iVar5);
        }
        plVar25 = *(longlong **)(local_180 + 0x250);
        if (*(longlong **)(local_180 + 0x250) == (longlong *)0x0) {
          plVar25 = local_140;
        }
        plVar25[iVar5] = CONCAT44(iVar20,(int)lVar9);
        *(int *)(local_180 + 400) = *(int *)(local_180 + 400) - iVar20;
        iVar20 = *(int *)(lVar15 + 0x38);
      }
      *(int *)((longlong)plVar29 + 0xac) = iVar20;
      iVar5 = *(int *)(local_180 + 0x19c);
      lVar15 = (longlong)iVar5;
      local_148 = (ulonglong *)CONCAT44(local_148._4_4_,iVar17);
      local_168 = puVar10;
      if (iVar5 < *(int *)(local_180 + 0x1f8)) {
        puVar16 = *(ulonglong **)(local_180 + 0x1f0);
        if (*(ulonglong **)(local_180 + 0x1f0) == (ulonglong *)0x0) {
          puVar16 = local_160;
        }
        iVar5 = *(int *)(local_180 + 0x1f8) - iVar5;
        do {
          if (iVar20 <= *(int *)((longlong)puVar16 + lVar15 * 8 + 4)) {
            if (lVar15 != -1) {
              *local_178 = *local_178 + iVar20;
              goto LAB_142e4b9d6;
            }
            break;
          }
          lVar15 = lVar15 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      if (*(int *)(local_180 + 600) != 0) {
        FUN_144883418(local_178);
        iVar17 = *(int *)(local_180 + 0x19c);
        lVar15 = (longlong)iVar17;
        if (iVar17 < *(int *)(local_180 + 0x1f8)) {
          puVar16 = *(ulonglong **)(local_180 + 0x1f0);
          if (*(ulonglong **)(local_180 + 0x1f0) == (ulonglong *)0x0) {
            puVar16 = local_160;
          }
          iVar17 = *(int *)(local_180 + 0x1f8) - iVar17;
          do {
            if (iVar20 <= *(int *)((longlong)puVar16 + lVar15 * 8 + 4)) {
              *local_178 = *local_178 + iVar20;
              if (lVar15 != -1) goto LAB_142e4b9d6;
              goto LAB_142e4b9a3;
            }
            lVar15 = lVar15 + 1;
            iVar17 = iVar17 + -1;
          } while (iVar17 != 0);
        }
      }
      *local_178 = *local_178 + iVar20;
LAB_142e4b9a3:
      iVar17 = *(int *)(local_180 + 0x194);
      iVar20 = iVar20 + iVar17;
      *(int *)(local_180 + 0x194) = iVar20;
      if (iVar20 <= *(int *)(local_180 + 0x198)) {
        iVar20 = *(int *)(local_180 + 0x198);
      }
      *(int *)(local_180 + 0x198) = iVar20;
      goto LAB_142e4ba01;
    }
    goto LAB_142e4bea3;
  }
  local_150 = 0;
LAB_142e4bea3:
  local_128 = (longlong *)(lVar15 + 0x2a8);
  iVar17 = *(int *)(lVar15 + 0x2a0);
  if ((longlong)iVar17 != 0) {
    _Dst = *(void **)(lVar15 + 0x2a8);
    FUN_145dfc70b(_Dst,iVar17);
    iVar5 = *(int *)(lVar15 + 0x2b0) - iVar17;
    iVar20 = iVar17;
    if (iVar5 != 0) {
      memmove(_Dst,(void *)((longlong)iVar17 * 0x10 + (longlong)_Dst),(longlong)iVar5 << 4);
      iVar20 = *(int *)(lVar15 + 0x2b0);
    }
    *(int *)(lVar15 + 0x2b0) = iVar20 - iVar17;
    FUN_14726b86e(local_128);
  }
  iVar17 = *(int *)(lVar15 + 0x294);
  if (iVar17 != 0) {
    local_140 = (longlong *)(local_180 + 0x298);
    local_130 = (int *)(local_180 + 400);
    local_120 = local_180 + 0x200;
    local_118 = local_180 + 0x1a0;
    puVar10 = (uint *)(local_180 + 0x98);
    local_158 = puVar10;
    do {
      lVar15 = *(longlong *)(local_180 + 0x280);
      lVar23 = (longlong)
               (int)(((*(int *)(local_180 + 0x290) - iVar17) + *(uint *)(local_180 + 0x2c8)) %
                    *(uint *)(local_180 + 0x2c8)) * 0x20;
      lVar9 = *(longlong *)(lVar15 + lVar23);
      lVar19 = *(longlong *)(lVar9 + 8);
      if (lVar19 != 0) {
        if ((*(int *)(lVar19 + 0x10) != 0) ||
           (cVar4 = (**(code **)(**(longlong **)(lVar9 + 8) + 0x18))(), cVar4 == '\0')) break;
        iVar17 = *(int *)(local_180 + 0x294);
      }
      lVar9 = local_180;
      plVar29 = (longlong *)(lVar15 + lVar23);
      *(int *)(local_180 + 0x294) = iVar17 + -1;
      lVar15 = *plVar29;
      uVar28 = *(uint *)(lVar15 + 0x10);
      if (uVar28 == 0) {
        uVar30 = 0x20;
      }
      else {
        uVar30 = 0;
        if (uVar28 != 0) {
          for (; (uVar28 >> uVar30 & 1) == 0; uVar30 = uVar30 + 1) {
          }
        }
      }
      lVar19 = *(longlong *)(lVar15 + 0x18 + (ulonglong)uVar30 * 8);
      if (lVar19 == 0) {
        local_168 = (uint *)0x0;
      }
      else {
        local_190 = (int)plVar29[1] << 2;
        *(uint *)(lVar15 + 0x14) = uVar30;
        local_198 = 0;
        local_168 = (uint *)(**(code **)(*DAT_14ca83900 + 0xf8))
                                      (DAT_14ca83900,&DAT_14ca85100,lVar19,
                                       *(undefined8 *)(lVar15 + 8));
      }
      local_148 = (ulonglong *)(plVar29 + 2);
      if (0 < (int)plVar29[3]) {
        lVar15 = 0;
        local_170 = plVar29;
LAB_142e4c01b:
        local_10c = *(int *)(*local_148 + lVar15 * 4);
        plVar29 = *(longlong **)(*(longlong *)(lVar9 + 0x60) + (longlong)local_10c * 8);
        lVar19 = (longlong)*(int *)((longlong)plVar29 + 0xb4);
        uVar28 = local_168[lVar19 + 1];
        uVar30 = local_168[lVar19 + 2];
        if (uVar30 != 0xffffffff && uVar28 != 0xffffffff) {
          local_178 = (int *)CONCAT44(local_178._4_4_,local_168[lVar19 + 3]);
          local_b8 = 0;
          uStack_ac = 0;
          uStack_aa = 0;
          uStack_a4 = 0;
          uStack_71 = 0;
          local_81 = 0;
          uStack_74 = 0;
          local_91 = 0;
          uStack_89 = 0;
          local_a1 = 0;
          uStack_a0 = 0;
          uStack_99 = 0;
          uStack_98 = 0;
          uStack_94 = 0;
          uStack_78 = (undefined4)plVar29[0x13];
          uStack_80 = (undefined7)plVar29[0x12];
          uStack_79 = (undefined1)((ulonglong)plVar29[0x12] >> 0x38);
          local_a2 = 0;
          uVar22 = *(ulonglong *)(*(longlong *)(lVar9 + 0x278) + 0x28);
          if (uVar22 != 0) {
            LOCK();
            *(int *)(uVar22 + 8) = *(int *)(uVar22 + 8) + 1;
            UNLOCK();
            local_b8 = uVar22;
          }
          iStack_b0 = uVar30 << 2;
          iStack_a8 = 0;
          FUN_147262e1e(&uStack_a0,*(undefined4 *)((longlong)plVar29 + 0x6c));
          puVar10 = local_168;
          if (*(int *)((longlong)plVar29 + 0x6c) != 0) {
            uVar22 = 0;
            uVar27 = local_178._0_4_;
            do {
              uVar30 = puVar10[lVar19 + uVar22 * 2 + 4];
              plVar25 = (longlong *)(CONCAT17(uStack_99,uStack_a0) + (longlong)(int)uVar22 * 0x28);
              *(uint *)(plVar25 + 3) = puVar10[lVar19 + uVar22 * 2 + 5] / 3;
              *(uint *)((longlong)plVar25 + 0x1c) = uVar30 / 3;
              lVar23 = *(longlong *)(*(longlong *)(lVar9 + 0x270) + 0x28);
              lVar3 = *plVar25;
              if (lVar3 != lVar23) {
                *plVar25 = lVar23;
                if (lVar23 != 0) {
                  LOCK();
                  *(int *)(lVar23 + 8) = *(int *)(lVar23 + 8) + 1;
                  UNLOCK();
                }
                if (lVar3 != 0) {
                  LOCK();
                  puVar1 = (uint *)(lVar3 + 8);
                  uVar30 = *puVar1;
                  *puVar1 = *puVar1 - 1;
                  UNLOCK();
                  if ((uVar30 & 0x3fffffff) == 1) {
                    puVar1 = (uint *)(lVar3 + 8);
                    LOCK();
                    uVar30 = *puVar1;
                    *puVar1 = *puVar1 | 0x40000000;
                    UNLOCK();
                    if ((uVar30 >> 0x1e & 1) == 0) {
                      bVar2 = *(byte *)(lVar3 + 0xd);
                      plVar8 = (longlong *)FUN_14001cc68(0x10,8);
                      plVar8[1] = lVar3;
                      plVar11 = DAT_14ca843c0;
                      plVar6 = DAT_14ca843c8;
                      lVar9 = local_180;
                      uVar27 = local_178._0_4_;
                      if ((bVar2 & 2) == 0) {
                        do {
                          *plVar8 = (longlong)plVar11;
                          LOCK();
                          bVar32 = plVar11 != DAT_14ca843c0;
                          plVar6 = plVar8;
                          if (bVar32) {
                            plVar11 = DAT_14ca843c0;
                            plVar6 = DAT_14ca843c0;
                          }
                          DAT_14ca843c0 = plVar6;
                          UNLOCK();
                        } while (bVar32);
                      }
                      else {
                        do {
                          *plVar8 = (longlong)plVar6;
                          LOCK();
                          bVar32 = plVar6 != DAT_14ca843c8;
                          plVar11 = plVar8;
                          if (bVar32) {
                            plVar6 = DAT_14ca843c8;
                            plVar11 = DAT_14ca843c8;
                          }
                          DAT_14ca843c8 = plVar11;
                          UNLOCK();
                        } while (bVar32);
                      }
                    }
                  }
                }
              }
              *(uint *)((longlong)plVar25 + 0xc) = uVar28 * 0xc;
              *(undefined4 *)((longlong)plVar25 + 0x14) = uVar27;
              iStack_a8 = iStack_a8 + *(int *)((longlong)plVar25 + 0x1c);
              uVar30 = (int)uVar22 + 1;
              uVar22 = (ulonglong)uVar30;
            } while (uVar30 < *(uint *)((longlong)plVar29 + 0x6c));
          }
          (**(code **)(*DAT_14ca83900 + 0x4d8))(DAT_14ca83900,local_108,&DAT_14ca85100,&local_b8);
          uVar22 = local_108[0];
          iVar17 = local_10c;
          if ((int)local_150 < DAT_14c760850) {
            local_150 = (ulonglong)(uint)((int)local_150 + *(int *)(local_108[0] + 0x38));
            local_160 = (ulonglong *)(plVar29 + 0x14);
            if (local_160 != local_108) {
              uVar22 = *local_160;
              *local_160 = local_108[0];
              local_108[0] = 0;
              if (uVar22 != 0) {
                LOCK();
                puVar10 = (uint *)(uVar22 + 8);
                uVar28 = *puVar10;
                *puVar10 = *puVar10 - 1;
                UNLOCK();
                if ((uVar28 & 0x3fffffff) == 1) {
                  puVar10 = (uint *)(uVar22 + 8);
                  LOCK();
                  uVar28 = *puVar10;
                  *puVar10 = *puVar10 | 0x40000000;
                  UNLOCK();
                  if ((uVar28 >> 0x1e & 1) == 0) {
                    bVar2 = *(byte *)(uVar22 + 0xd);
                    plVar6 = (longlong *)FUN_14001cc68(0x10,8);
                    plVar6[1] = uVar22;
                    plVar25 = DAT_14ca843c0;
                    plVar11 = DAT_14ca843c8;
                    if ((bVar2 & 2) == 0) {
                      do {
                        *plVar6 = (longlong)plVar25;
                        LOCK();
                        bVar32 = plVar25 != DAT_14ca843c0;
                        plVar11 = plVar6;
                        if (bVar32) {
                          plVar25 = DAT_14ca843c0;
                          plVar11 = DAT_14ca843c0;
                        }
                        DAT_14ca843c0 = plVar11;
                        UNLOCK();
                      } while (bVar32);
                    }
                    else {
                      do {
                        *plVar6 = (longlong)plVar11;
                        LOCK();
                        bVar32 = plVar11 != DAT_14ca843c8;
                        plVar25 = plVar6;
                        if (bVar32) {
                          plVar11 = DAT_14ca843c8;
                          plVar25 = DAT_14ca843c8;
                        }
                        DAT_14ca843c8 = plVar25;
                        UNLOCK();
                      } while (bVar32);
                    }
                  }
                }
              }
            }
            lVar9 = plVar29[0x15];
            if ((int)lVar9 != -1) {
              iVar17 = *(int *)((longlong)plVar29 + 0xac);
              iVar20 = *(int *)(local_180 + 600);
              *(uint *)(local_180 + 600) = iVar20 + 1U;
              if (*(uint *)(local_180 + 0x25c) < iVar20 + 1U) {
                FUN_14017bd48(local_120,iVar20);
              }
              lVar19 = *(longlong *)(local_180 + 0x250);
              if (*(longlong *)(local_180 + 0x250) == 0) {
                lVar19 = local_120;
              }
              *(ulonglong *)(lVar19 + (longlong)iVar20 * 8) = CONCAT44(iVar17,(int)lVar9);
              *(int *)(local_180 + 400) = *(int *)(local_180 + 400) - iVar17;
            }
            iVar20 = iStack_a8;
            *(int *)((longlong)plVar29 + 0xac) = iStack_a8;
            iVar17 = *(int *)(local_180 + 0x19c);
            lVar9 = (longlong)iVar17;
            if (iVar17 < *(int *)(local_180 + 0x1f8)) {
              lVar19 = *(longlong *)(local_180 + 0x1f0);
              if (*(longlong *)(local_180 + 0x1f0) == 0) {
                lVar19 = local_118;
              }
              iVar17 = *(int *)(local_180 + 0x1f8) - iVar17;
              do {
                if (iStack_a8 <= *(int *)(lVar19 + 4 + lVar9 * 8)) {
                  if (lVar9 != -1) {
                    *local_130 = *local_130 + iStack_a8;
                    goto LAB_142e4c4a5;
                  }
                  break;
                }
                lVar9 = lVar9 + 1;
                iVar17 = iVar17 + -1;
              } while (iVar17 != 0);
            }
            if (*(int *)(local_180 + 600) != 0) {
              FUN_144883418(local_130);
              iVar17 = *(int *)(local_180 + 0x19c);
              lVar9 = (longlong)iVar17;
              if (iVar17 < *(int *)(local_180 + 0x1f8)) {
                lVar19 = *(longlong *)(local_180 + 0x1f0);
                if (*(longlong *)(local_180 + 0x1f0) == 0) {
                  lVar19 = local_118;
                }
                iVar17 = *(int *)(local_180 + 0x1f8) - iVar17;
                do {
                  if (iVar20 <= *(int *)(lVar19 + 4 + lVar9 * 8)) {
                    *local_130 = *local_130 + iVar20;
                    if (lVar9 != -1) goto LAB_142e4c4a5;
                    goto LAB_142e4c409;
                  }
                  lVar9 = lVar9 + 1;
                  iVar17 = iVar17 + -1;
                } while (iVar17 != 0);
              }
            }
            *local_130 = *local_130 + iVar20;
LAB_142e4c409:
            iVar17 = *(int *)(local_180 + 0x194);
            iVar20 = iVar20 + iVar17;
            *(int *)(local_180 + 0x194) = iVar20;
            if (iVar20 <= *(int *)(local_180 + 0x198)) {
              iVar20 = *(int *)(local_180 + 0x198);
            }
            *(int *)(local_180 + 0x198) = iVar20;
            goto LAB_142e4c4d0;
          }
          local_108[0] = 0;
          iVar20 = *(int *)(local_180 + 0x2b0);
          *(uint *)(local_180 + 0x2b0) = iVar20 + 1U;
          if (*(uint *)(local_180 + 0x2b4) < iVar20 + 1U) {
            FUN_14726ba48(local_128,iVar20);
          }
          lVar9 = *local_128;
          *(ulonglong *)(lVar9 + (longlong)iVar20 * 0x10) = uVar22;
          *(int *)(lVar9 + 8 + (longlong)iVar20 * 0x10) = iVar17;
          goto LAB_142e4c5b0;
        }
        *(undefined1 *)(plVar29 + 0x17) = 0;
        plVar29[0x16] = -1;
        FUN_144980568(puVar10,&local_b8,&local_10c,0);
        plVar29 = local_170;
        goto LAB_142e4c087;
      }
LAB_142e4c906:
      *(undefined4 *)(plVar29 + 3) = 0;
      if (*(int *)((longlong)plVar29 + 0x1c) != 0) {
        FUN_14480809c(local_148,0);
      }
      (**(code **)(*DAT_14ca83900 + 0x100))
                (DAT_14ca83900,&DAT_14ca85100,
                 *(undefined8 *)(*plVar29 + 0x18 + (ulonglong)*(uint *)(*plVar29 + 0x14) * 8));
      iVar17 = *(int *)(lVar9 + 0x294);
    } while (iVar17 != 0);
  }
  if ((local_60 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_142e4b9d6:
  iVar5 = (int)lVar15;
  lVar15 = (longlong)iVar5;
  iVar17 = (int)puVar16[lVar15];
  *(int *)(puVar16 + lVar15) = iVar17 + iVar20;
  piVar7 = (int *)((longlong)puVar16 + lVar15 * 8 + 4);
  *piVar7 = *piVar7 - iVar20;
  if ((*piVar7 == 0) && (*(int *)(local_180 + 0x19c) == iVar5)) {
    *(int *)(local_180 + 0x19c) = iVar5 + 1;
  }
LAB_142e4ba01:
  *(int *)(plVar29 + 0x15) = iVar17;
  iVar17 = (int)plVar29[5];
  if (iVar17 == 0) {
    uVar31 = 1;
    uVar22 = 0;
    iVar5 = 0;
    iVar20 = 0;
  }
  else {
    puVar10 = (uint *)plVar29[4];
    if ((uint *)plVar29[4] == (uint *)0x0) {
      puVar10 = (uint *)(plVar29 + 2);
    }
    uVar28 = *puVar10;
    if (uVar28 == 0) {
      iVar20 = iVar17 + 0x1e;
      if (-1 < iVar17 + -1) {
        iVar20 = iVar17 + -1;
      }
      uVar22 = 0;
      uVar31 = (ulonglong)(uint)(iVar20 >> 5);
      if (iVar20 >> 5 < 1) {
        uVar31 = uVar22;
      }
      iVar5 = 0;
      do {
        if (uVar31 == uVar22) goto LAB_142e4ba90;
        iVar5 = iVar5 + 0x20;
        uVar28 = puVar10[uVar22 + 1];
        uVar22 = uVar22 + 1;
      } while (uVar28 == 0);
    }
    else {
      uVar22 = 0;
      iVar5 = 0;
    }
    uVar31 = (ulonglong)(-uVar28 & uVar28);
    uVar26 = uVar31 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar26 != 0) {
      for (; uVar26 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iVar20 = (iVar5 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    if (iVar17 <= iVar20) {
      iVar20 = iVar17;
    }
  }
  if (iVar20 != iVar17) {
    uVar28 = 0xffffffff;
    do {
      plVar25 = (longlong *)((longlong)iVar20 * 0x10 + *plVar29);
      if (local_134 != 0) {
        FUN_1472aae4a(*plVar25,plVar29[0x14]);
      }
      *(int *)(*(longlong *)(*plVar25 + 8) + 0x2c4) = (int)plVar29[0x15];
      FUN_1400338f4(*(longlong *)(*plVar25 + 0x148) + 0x3f08,*(undefined4 *)(*plVar25 + 0x15c),8);
      uVar28 = uVar28 & ~(uint)uVar31;
      puVar10 = (uint *)plVar29[4];
      if ((uint *)plVar29[4] == (uint *)0x0) {
        puVar10 = (uint *)(plVar29 + 2);
      }
      iVar14 = (int)plVar29[5];
      iVar20 = (int)uVar22;
      lVar15 = (longlong)iVar20;
      uVar30 = puVar10[lVar15] & uVar28;
      if (uVar30 == 0) {
        iVar12 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar12 = iVar14 + -1;
        }
        iVar12 = iVar12 >> 5;
        iVar5 = iVar5 + 0x20;
        iVar13 = iVar12;
        if (iVar12 < iVar20) {
          iVar13 = iVar20;
        }
        if (iVar20 < iVar12) {
          lVar9 = 0;
          do {
            uVar30 = puVar10[lVar15 + lVar9 + 1];
            if (uVar30 != 0) {
              uVar22 = (ulonglong)(iVar20 + (int)lVar9 + 1);
              uVar28 = 0xffffffff;
              goto LAB_142e4bbb9;
            }
            iVar5 = iVar5 + 0x20;
            lVar9 = lVar9 + 1;
          } while (iVar13 - lVar15 != lVar9);
          uVar28 = 0xffffffff;
          iVar20 = iVar13;
        }
        uVar22 = (ulonglong)(iVar20 + 1);
        iVar20 = iVar14;
      }
      else {
LAB_142e4bbb9:
        uVar31 = (ulonglong)(-uVar30 & uVar30);
        uVar26 = uVar31 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar26 != 0) {
          for (; uVar26 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        iVar20 = (iVar5 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
        if (iVar14 <= iVar20) {
          iVar20 = iVar14;
        }
      }
    } while (iVar20 != iVar17);
  }
LAB_142e4ba90:
  lVar15 = local_180;
  iVar17 = *(int *)(local_180 + 0x2a0);
  *(uint *)(local_180 + 0x2a0) = iVar17 + 1U;
  if (*(uint *)(local_180 + 0x2a4) < iVar17 + 1U) {
    FUN_1447808da(local_170,iVar17);
  }
  local_150 = (ulonglong)(uint)((int)local_150 + (int)local_148);
  *(uint *)(*local_170 + (longlong)iVar17 * 4) = local_168[2];
  puVar10 = local_168 + 4;
  if (puVar10 == local_158) goto LAB_142e4bea3;
  goto LAB_142e4b833;
LAB_142e4c4a5:
  iVar5 = (int)lVar9;
  lVar9 = (longlong)iVar5;
  iVar17 = *(int *)(lVar19 + lVar9 * 8);
  *(int *)(lVar19 + lVar9 * 8) = iVar17 + iVar20;
  piVar7 = (int *)(lVar19 + 4 + lVar9 * 8);
  *piVar7 = *piVar7 - iVar20;
  if ((*piVar7 == 0) && (*(int *)(local_180 + 0x19c) == iVar5)) {
    *(int *)(local_180 + 0x19c) = iVar5 + 1;
  }
LAB_142e4c4d0:
  *(int *)(plVar29 + 0x15) = iVar17;
  uVar28 = *(uint *)(plVar29 + 5);
  if (uVar28 == 0) {
    uVar31 = 1;
    uVar22 = 0;
    iVar17 = 0;
    uVar30 = 0;
  }
  else {
    puVar10 = (uint *)plVar29[4];
    if ((uint *)plVar29[4] == (uint *)0x0) {
      puVar10 = (uint *)(plVar29 + 2);
    }
    uVar30 = *puVar10;
    if (uVar30 == 0) {
      iVar17 = uVar28 + 0x1e;
      if (-1 < (int)(uVar28 - 1)) {
        iVar17 = uVar28 - 1;
      }
      uVar22 = 0;
      uVar31 = (ulonglong)(uint)(iVar17 >> 5);
      if (iVar17 >> 5 < 1) {
        uVar31 = uVar22;
      }
      iVar17 = 0;
      do {
        if (uVar31 == uVar22) goto LAB_142e4c565;
        iVar17 = iVar17 + 0x20;
        uVar30 = puVar10[uVar22 + 1];
        uVar22 = uVar22 + 1;
      } while (uVar30 == 0);
    }
    else {
      uVar22 = 0;
      iVar17 = 0;
    }
    uVar31 = (ulonglong)(-uVar30 & uVar30);
    uVar26 = uVar31 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar26 != 0) {
      for (; uVar26 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar30 = (iVar17 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    if ((int)uVar28 <= (int)uVar30) {
      uVar30 = uVar28;
    }
  }
  if (uVar30 != uVar28) {
    uVar18 = 0xffffffff;
    local_178 = (int *)(ulonglong)uVar28;
    do {
      plVar25 = (longlong *)((longlong)(int)uVar30 * 0x10 + *plVar29);
      if (local_134 != 0) {
        FUN_1472aae4a(*plVar25,*local_160);
      }
      *(int *)(*(longlong *)(*plVar25 + 8) + 0x2c4) = (int)plVar29[0x15];
      FUN_1400338f4(*(longlong *)(*plVar25 + 0x148) + 0x3f08,*(undefined4 *)(*plVar25 + 0x15c),8);
      uVar18 = uVar18 & ~(uint)uVar31;
      puVar10 = (uint *)plVar29[4];
      if ((uint *)plVar29[4] == (uint *)0x0) {
        puVar10 = (uint *)(plVar29 + 2);
      }
      uVar28 = *(uint *)(plVar29 + 5);
      iVar20 = (int)uVar22;
      lVar9 = (longlong)iVar20;
      uVar30 = puVar10[lVar9] & uVar18;
      if (uVar30 == 0) {
        iVar5 = uVar28 + 0x1e;
        if (-1 < (int)(uVar28 - 1)) {
          iVar5 = uVar28 - 1;
        }
        iVar5 = iVar5 >> 5;
        iVar17 = iVar17 + 0x20;
        iVar14 = iVar5;
        if (iVar5 < iVar20) {
          iVar14 = iVar20;
        }
        if (iVar20 < iVar5) {
          lVar19 = 0;
          do {
            uVar30 = puVar10[lVar9 + lVar19 + 1];
            if (uVar30 != 0) {
              uVar22 = (ulonglong)(iVar20 + (int)lVar19 + 1);
              uVar18 = 0xffffffff;
              goto LAB_142e4c733;
            }
            iVar17 = iVar17 + 0x20;
            lVar19 = lVar19 + 1;
          } while (iVar14 - lVar9 != lVar19);
          uVar18 = 0xffffffff;
          iVar20 = iVar14;
        }
        uVar22 = (ulonglong)(iVar20 + 1);
        uVar30 = uVar28;
      }
      else {
LAB_142e4c733:
        uVar31 = (ulonglong)(-uVar30 & uVar30);
        uVar26 = uVar31 * 2 + 1;
        lVar9 = 0x3f;
        if (uVar26 != 0) {
          for (; uVar26 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        uVar30 = (iVar17 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
        if ((int)uVar28 <= (int)uVar30) {
          uVar30 = uVar28;
        }
      }
    } while (uVar30 != (uint)local_178);
  }
LAB_142e4c565:
  iVar17 = *(int *)(local_180 + 0x2a0);
  *(uint *)(local_180 + 0x2a0) = iVar17 + 1U;
  if (*(uint *)(local_180 + 0x2a4) < iVar17 + 1U) {
    FUN_1447808da(local_140,iVar17);
  }
  *(int *)(*local_140 + (longlong)iVar17 * 4) = local_10c;
LAB_142e4c5b0:
  uVar22 = local_108[0];
  puVar10 = local_158;
  plVar29 = local_170;
  if (local_108[0] != 0) {
    LOCK();
    puVar1 = (uint *)(local_108[0] + 8);
    uVar28 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar28 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_108[0] + 8);
      LOCK();
      uVar28 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar28 >> 0x1e & 1) == 0) {
        bVar2 = *(byte *)(local_108[0] + 0xd);
        plVar6 = (longlong *)FUN_14001cc68(0x10,8);
        plVar6[1] = uVar22;
        plVar25 = DAT_14ca843c0;
        plVar11 = DAT_14ca843c8;
        if ((bVar2 & 2) == 0) {
          do {
            *plVar6 = (longlong)plVar25;
            LOCK();
            bVar32 = plVar25 != DAT_14ca843c0;
            plVar11 = plVar6;
            if (bVar32) {
              plVar25 = DAT_14ca843c0;
              plVar11 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar11;
            UNLOCK();
          } while (bVar32);
        }
        else {
          do {
            *plVar6 = (longlong)plVar11;
            LOCK();
            bVar32 = plVar11 != DAT_14ca843c8;
            plVar25 = plVar6;
            if (bVar32) {
              plVar11 = DAT_14ca843c8;
              plVar25 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar25;
            UNLOCK();
          } while (bVar32);
        }
      }
    }
  }
  FUN_14005bcf4(CONCAT17(uStack_99,uStack_a0),uStack_98);
  if (CONCAT17(uStack_99,uStack_a0) != 0) {
    FUN_1400020a8();
  }
  uVar22 = local_b8;
  lVar9 = local_180;
  if (local_b8 != 0) {
    LOCK();
    puVar1 = (uint *)(local_b8 + 8);
    uVar28 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar28 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_b8 + 8);
      LOCK();
      uVar28 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar28 >> 0x1e & 1) == 0) {
        bVar2 = *(byte *)(local_b8 + 0xd);
        plVar6 = (longlong *)FUN_14001cc68(0x10,8);
        plVar6[1] = uVar22;
        plVar25 = DAT_14ca843c0;
        plVar11 = DAT_14ca843c8;
        lVar9 = local_180;
        plVar29 = local_170;
        puVar10 = local_158;
        if ((bVar2 & 2) == 0) {
          do {
            *plVar6 = (longlong)plVar25;
            LOCK();
            bVar32 = plVar25 != DAT_14ca843c0;
            plVar11 = plVar6;
            if (bVar32) {
              plVar25 = DAT_14ca843c0;
              plVar11 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar11;
            UNLOCK();
          } while (bVar32);
        }
        else {
          do {
            *plVar6 = (longlong)plVar11;
            LOCK();
            bVar32 = plVar11 != DAT_14ca843c8;
            plVar25 = plVar6;
            if (bVar32) {
              plVar11 = DAT_14ca843c8;
              plVar25 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar25;
            UNLOCK();
          } while (bVar32);
        }
      }
    }
  }
LAB_142e4c087:
  lVar15 = lVar15 + 1;
  if ((int)plVar29[3] <= lVar15) goto LAB_142e4c906;
  goto LAB_142e4c01b;
}



// FUNCTION 142e4c9f8 FUN_142e4c9f8 body=1640 status=ok
// SIG undefined FUN_142e4c9f8(void)

ulonglong FUN_142e4c9f8(longlong param_1,longlong param_2)

{
  int *piVar1;
  uint *puVar2;
  ulonglong *puVar3;
  byte bVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  uint uVar15;
  longlong unaff_RBX;
  int iVar16;
  undefined4 uVar17;
  ulonglong uVar18;
  int iVar20;
  undefined8 *puVar21;
  longlong lVar22;
  int *piVar23;
  ulonglong uVar24;
  undefined8 *puVar25;
  bool bVar26;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  undefined8 local_88;
  undefined1 local_79;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_60;
  longlong local_58;
  undefined *local_50;
  ulonglong local_48;
  undefined6 uVar19;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(char *)(param_1 + 0x2cf) == '\x01') {
    uVar8 = *(uint *)(param_1 + 0x194 + (ulonglong)*(byte *)(param_1 + 0x260) * 4);
    uVar9 = 0x400000;
    if (DAT_14caff4f8 == '\0') {
      uVar9 = 8;
    }
    local_a0 = CONCAT71(local_a0._1_7_,DAT_14caff4f8 == '\0');
    if (uVar9 <= uVar8) {
      uVar9 = uVar8;
    }
    local_a8 = CONCAT71(local_a8._1_7_,1);
    local_90 = FUN_142e47c11(param_2,(longlong *)(param_1 + 0x188),uVar9,
                             L"NaniteRayTracing.AuxiliaryDataBuffer");
    plVar10 = (longlong *)FUN_1449609de(param_2,local_90);
    puVar14 = (undefined8 *)*plVar10;
    puVar21 = *(undefined8 **)(param_1 + 0x188);
    if (puVar21 != puVar14) {
      *(longlong *)(param_1 + 0x188) = (longlong)puVar14;
      if (puVar14 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
        UNLOCK();
      }
      if (puVar21 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar21 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar21)(puVar21,1);
        }
      }
    }
    iVar16 = 0;
    local_98 = param_2;
    local_88 = FUN_144735dd8(param_2,param_1 + 0x268,0);
    local_78 = 0;
    uStack_70 = 0;
    if ((longlong)*(int *)(param_1 + 0x2a0) != 0) {
      piVar23 = *(int **)(param_1 + 0x298);
      piVar1 = piVar23 + *(int *)(param_1 + 0x2a0);
      uVar18 = 0;
      do {
        uVar13 = uStack_70;
        lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x60) + (longlong)*piVar23 * 8);
        unaff_RBX = *(longlong *)(lVar5 + 0xa0);
        if (unaff_RBX != 0) {
          LOCK();
          *(int *)(unaff_RBX + 8) = *(int *)(unaff_RBX + 8) + 1;
          UNLOCK();
        }
        lVar22 = (longlong)(int)uStack_70;
        uVar8 = (int)uStack_70 + 1;
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar8);
        if (uStack_70._4_4_ < uVar8) {
          FUN_1471b2712(&local_78,uVar13 & 0xffffffff);
        }
        *(longlong *)(local_78 + lVar22 * 0x20) = unaff_RBX;
        if (unaff_RBX != 0) {
          LOCK();
          *(int *)(unaff_RBX + 8) = *(int *)(unaff_RBX + 8) + 1;
          UNLOCK();
        }
        lVar22 = local_78 + lVar22 * 0x20;
        *(undefined4 *)(lVar22 + 8) = 0;
        *(undefined8 *)(lVar22 + 0x10) = 0;
        *(undefined4 *)(lVar22 + 0x18) = 0;
        (**(code **)(*DAT_14ca83900 + 0x4d0))(DAT_14ca83900,&local_60,unaff_RBX + 0x28);
        uVar13 = (ulonglong)DAT_14ca84f04;
        lVar22 = uVar18 + local_58;
        *(undefined1 *)(lVar5 + 0xb8) = 0;
        *(undefined4 *)(lVar5 + 0xb4) = 0xffffffff;
        local_a0 = (ulonglong)*(uint *)(lVar5 + 0xac) << 2;
        local_a8 = (ulonglong)*(uint *)(lVar5 + 0xb0) << 2;
        FUN_143211d72(local_98,local_90,(ulonglong)*(uint *)(lVar5 + 0xa8) << 2,local_88);
        *(undefined4 *)(lVar5 + 0xb0) = 0xffffffff;
        if (unaff_RBX != 0) {
          LOCK();
          puVar2 = (uint *)(unaff_RBX + 8);
          uVar8 = *puVar2;
          *puVar2 = *puVar2 - 1;
          UNLOCK();
          if ((uVar8 & 0x3fffffff) == 1) {
            puVar2 = (uint *)(unaff_RBX + 8);
            LOCK();
            uVar8 = *puVar2;
            *puVar2 = *puVar2 | 0x40000000;
            UNLOCK();
            if ((uVar8 >> 0x1e & 1) == 0) {
              bVar4 = *(byte *)(unaff_RBX + 0xd);
              plVar11 = (longlong *)FUN_14001cc68(0x10);
              plVar11[1] = unaff_RBX;
              plVar10 = DAT_14ca843c0;
              plVar12 = DAT_14ca843c8;
              if ((bVar4 & 2) == 0) {
                do {
                  *plVar11 = (longlong)plVar10;
                  LOCK();
                  bVar26 = plVar10 != DAT_14ca843c0;
                  plVar12 = plVar11;
                  if (bVar26) {
                    plVar10 = DAT_14ca843c0;
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
                  plVar10 = plVar11;
                  if (bVar26) {
                    plVar12 = DAT_14ca843c8;
                    plVar10 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar10;
                  UNLOCK();
                } while (bVar26);
              }
            }
          }
        }
        uVar18 = -uVar13 & lVar22 + uVar13 + 0xffffffff;
        iVar16 = (int)uVar18;
        piVar23 = piVar23 + 1;
      } while (piVar23 != piVar1);
    }
    iVar20 = 1;
    if (1 < DAT_14c760858) {
      iVar20 = DAT_14c760858;
    }
    *(undefined4 *)(param_1 + 0x2a0) = 0;
    if (*(int *)(param_1 + 0x2a4) != 0) {
      FUN_14480809c(param_1 + 0x298);
    }
    lVar5 = local_98;
    uVar18 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),0 < (int)uStack_70);
    if (0 < (int)uStack_70) {
      uVar8 = iVar20 * 0x100000;
      uVar9 = ((((iVar16 + uVar8) - ((uVar8 + iVar16) - 1) % uVar8) + DAT_14ca84f04) - 2) /
              DAT_14ca84f04;
      local_58 = CONCAT44(local_58._4_4_,0x90008);
      uVar8 = DAT_14ca84f04;
      if (DAT_14ca84e48 <= DAT_14ca84f04) {
        uVar8 = DAT_14ca84e48;
      }
      local_50 = (undefined *)0x0;
      uVar15 = DAT_14ca84e48;
      if (uVar9 < DAT_14ca84e48) {
        uVar15 = uVar9;
      }
      local_60 = (undefined8 *)CONCAT44(uVar15 + (uVar15 == 0),uVar8 + (uVar8 == 0));
      puVar3 = (ulonglong *)(local_98 + 0x70);
      uVar24 = *(longlong *)(local_98 + 0x70) + 0xfU & 0xfffffffffffffff0;
      uVar13 = uVar24 + 0x150;
      if (*(ulonglong *)(local_98 + 0x78) < uVar13) {
        FUN_140023dd8(puVar3,0x160);
        uVar24 = *puVar3 + 0xf & 0xfffffffffffffff0;
        uVar13 = uVar24 + 0x150;
      }
      *(ulonglong *)(lVar5 + 0x70) = uVar13;
      FUN_1456bd266(uVar24,L"NaniteRayTracing.BLASSharedScratchBuffer",&local_60,0);
      iVar16 = *(int *)(lVar5 + 400);
      *(uint *)(lVar5 + 400) = iVar16 + 1U;
      if (*(uint *)(lVar5 + 0x194) < iVar16 + 1U) {
        FUN_144737178(lVar5 + 0x188,iVar16);
      }
      *(ulonglong *)(*(longlong *)(lVar5 + 0x188) + (longlong)iVar16 * 8) = uVar24;
      *(int *)(uVar24 + 0x7c) = *(int *)(lVar5 + 400) + -1;
      puVar21 = (undefined8 *)(*(longlong *)(lVar5 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar14 = puVar21 + 8;
      if (*(undefined8 **)(lVar5 + 0x78) < puVar14) {
        FUN_140023dd8(puVar3,0x50);
        puVar21 = (undefined8 *)(*puVar3 + 0xf & 0xfffffffffffffff0);
        puVar14 = puVar21 + 8;
      }
      *(undefined8 **)(lVar5 + 0x70) = puVar14;
      *puVar21 = &PTR_FUN_14a2a0658;
      puVar21[2] = 0;
      *(undefined4 *)(puVar21 + 3) = 0x10;
      puVar21[4] = 0;
      *(undefined4 *)(puVar21 + 5) = 0x10;
      puVar21[6] = 0;
      *(undefined4 *)(puVar21 + 7) = 0x400;
      iVar16 = *(int *)(lVar5 + 0xa0);
      *(uint *)(lVar5 + 0xa0) = iVar16 + 1U;
      local_90 = param_1;
      if (*(uint *)(lVar5 + 0xa4) < iVar16 + 1U) {
        FUN_1448cfae8(lVar5 + 0x98,iVar16);
      }
      lVar22 = local_78;
      *(undefined8 **)(*(longlong *)(lVar5 + 0x98) + (longlong)iVar16 * 8) = puVar21;
      puVar21[2] = 0;
      *(undefined4 *)(puVar21 + 3) = 0x10;
      puVar21[4] = 0;
      *(undefined4 *)(puVar21 + 5) = 0x10;
      puVar21[6] = uVar24;
      *(undefined4 *)(puVar21 + 7) = 0x400;
      local_78 = 0;
      uVar6 = (int)uStack_70;
      uVar7 = uStack_70._4_4_;
      uStack_70 = 0;
      FUN_14726baec();
      FUN_140069376(lVar5);
      uVar19 = (undefined6)((ulonglong)lVar5 >> 0x10);
      uVar17 = (undefined4)CONCAT62(uVar19,0x12);
      if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
         ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
        uVar17 = (undefined4)CONCAT62(uVar19,0x14);
      }
      puVar25 = (undefined8 *)(*(longlong *)(local_98 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar14 = puVar25 + 0x3a;
      if (*(undefined8 **)(local_98 + 0x78) < puVar14) {
        FUN_140023dd8(puVar3,0x1d8);
        puVar25 = (undefined8 *)(*puVar3 + 7 & 0xfffffffffffffff8);
        puVar14 = puVar25 + 0x3a;
      }
      *puVar3 = (ulonglong)puVar14;
      local_58 = DAT_14ca1bd80;
      if (DAT_14ca1bd80 != 0) {
        LOCK();
        *(int *)(DAT_14ca1bd80 + 8) = *(int *)(DAT_14ca1bd80 + 8) + 1;
        UNLOCK();
      }
      local_50 = &DAT_14ca1bd38;
      local_a8 = CONCAT71(local_a8._1_7_,2);
      local_60 = puVar21 + 2;
      FUN_140068f1a(puVar25,&local_79,&local_60,uVar17);
      lVar5 = local_98;
      *puVar25 = &PTR_FUN_14a2a0660;
      puVar25[0x37] = puVar21 + 2;
      puVar25[0x38] = lVar22;
      *(undefined4 *)(puVar25 + 0x39) = uVar6;
      *(undefined4 *)((longlong)puVar25 + 0x1cc) = uVar7;
      iVar16 = *(int *)(local_98 + 0x170);
      *(uint *)(local_98 + 0x170) = iVar16 + 1U;
      if (*(uint *)(local_98 + 0x174) < iVar16 + 1U) {
        FUN_14470e57a(local_98 + 0x168,iVar16);
      }
      *(undefined8 **)(*(longlong *)(lVar5 + 0x168) + (longlong)iVar16 * 8) = puVar25;
      *(int *)((longlong)puVar25 + 0x2c) = *(int *)(lVar5 + 0x170) + -1;
      FUN_140069100(lVar5,puVar25);
      FUN_141538e31(0,0);
      param_1 = local_90;
    }
    if ((*(int *)(param_1 + 0x294) == 0) && (*(int *)(param_1 + 0x2b0) == 0)) {
      *(undefined1 *)(param_1 + 0x2ce) = 0;
    }
    FUN_141538e31(local_78,uStack_70 & 0xffffffff);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    uVar18 = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar18 & 0xffffffff;
}



// FUNCTION 142e4d061 FUN_142e4d061 body=47 status=ok
// SIG undefined FUN_142e4d061(void)

void FUN_142e4d061(void)

{
  DAT_14ca1c220 = &PTR_FUN_14a2a06e0;
  FUN_144725486(&DAT_14ca1c220);
  FUN_145dfc416(&DAT_14ca1c220);
  return;
}



// FUNCTION 142e4d090 FUN_142e4d090 body=69 status=ok
// SIG undefined FUN_142e4d090(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e4d090(void)

{
  _DAT_14ca19bf8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e4d0d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca19c00,1);
  return;
}



// FUNCTION 142e4d0d5 FUN_142e4d0d5 body=69 status=ok
// SIG undefined FUN_142e4d0d5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e4d0d5(void)

{
  _DAT_14ca19c10 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e4d117. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca19c18,1);
  return;
}



// FUNCTION 142e4d11a FUN_142e4d11a body=69 status=ok
// SIG undefined FUN_142e4d11a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e4d11a(void)

{
  _DAT_14ca19c20 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e4d15c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca19c28,1);
  return;
}



// FUNCTION 142e4d15f FUN_142e4d15f body=69 status=ok
// SIG undefined FUN_142e4d15f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e4d15f(void)

{
  _DAT_14ca19c30 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e4d1a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca19c38,1);
  return;
}



// FUNCTION 142e4d1a4 FUN_142e4d1a4 body=69 status=ok
// SIG undefined FUN_142e4d1a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e4d1a4(void)

{
  _DAT_14ca1c208 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e4d1e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1c210,1);
  return;
}



// FUNCTION 142e4d1e9 FUN_142e4d1e9 body=69 status=ok
// SIG undefined FUN_142e4d1e9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e4d1e9(void)

{
  _DAT_14ca19c40 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e4d22b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca19c48,1);
  return;
}



// FUNCTION 142e4d22e FUN_142e4d22e body=69 status=ok
// SIG undefined FUN_142e4d22e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e4d22e(void)

{
  _DAT_14ca19c58 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e4d270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca19c60,1);
  return;
}



// FUNCTION 142e4d273 FUN_142e4d273 body=69 status=ok
// SIG undefined FUN_142e4d273(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e4d273(void)

{
  _DAT_14ca19c68 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e4d2b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca19c70,1);
  return;
}



// FUNCTION 142e4d2b8 FUN_142e4d2b8 body=69 status=ok
// SIG undefined FUN_142e4d2b8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e4d2b8(void)

{
  _DAT_14ca19c80 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e4d2fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca19c88,1);
  return;
}



// FUNCTION 142e4d2fd FUN_142e4d2fd body=69 status=ok
// SIG undefined FUN_142e4d2fd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e4d2fd(void)

{
  _DAT_14ca19c98 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e4d33f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca19ca0,1);
  return;
}



// FUNCTION 142e4d342 FUN_142e4d342 body=69 status=ok
// SIG undefined FUN_142e4d342(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e4d342(void)

{
  _DAT_14ca19cb0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e4d384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca19cb8,1);
  return;
}



// FUNCTION 142e4d387 FUN_142e4d387 body=69 status=ok
// SIG undefined FUN_142e4d387(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e4d387(void)

{
  _DAT_14ca19cc0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e4d3c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca19cc8,1);
  return;
}



// FUNCTION 142e4d486 FUN_142e4d486 body=2444 status=ok
// SIG undefined FUN_142e4d486(void)

void FUN_142e4d486(longlong param_1,longlong param_2,int param_3,longlong param_4,char param_5)

{
  int *piVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *lpTlsValue;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined1 *puVar14;
  ulonglong uVar15;
  longlong *plVar16;
  bool bVar17;
  undefined1 local_b8 [32];
  ulonglong local_98;
  undefined1 *local_90;
  longlong *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_70;
  ulonglong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)local_b8;
  if ((param_5 != '\x01') && (*(char *)(param_2 + 0x2d50 + (longlong)param_3 * 0xd0) == '\0'))
  goto LAB_142e4dcf8;
  lVar2 = param_2 + (longlong)param_3 * 0xd0;
  puVar14 = (undefined1 *)(lVar2 + 0x2d50);
  lVar2 = lVar2 + 0x2d90;
  local_70 = CONCAT62(local_70._2_6_,
                      *(undefined2 *)(&DAT_14ca85070 + (longlong)*(int *)(param_2 + 8) * 2));
  local_88 = (longlong *)(param_1 + 0x500);
  bVar3 = *(byte *)(param_1 + 0x520);
  local_80 = param_4;
  uStack_78 = lVar2;
  if (bVar3 == 0) {
    FUN_142e5d310(&local_80);
LAB_142e4d8dc:
    plVar16 = (longlong *)0x0;
  }
  else {
    lpTlsValue = TlsGetValue(DAT_14c896140);
    if (lpTlsValue == (longlong *)0x0) {
      lpTlsValue = (longlong *)FUN_14001cc68(0x18,0x10);
      *lpTlsValue = 0;
      lpTlsValue[1] = 0;
      *(undefined4 *)(lpTlsValue + 2) = 0;
      TlsSetValue(DAT_14c896140,lpTlsValue);
    }
    plVar16 = (longlong *)lpTlsValue[1];
    if (plVar16 == (longlong *)0x0) {
      plVar16 = (longlong *)*lpTlsValue;
      if (plVar16 == (longlong *)0x0) {
        uVar13 = (uint)DAT_14c896180;
        local_90 = puVar14;
        uVar4 = DAT_14c896180;
        while (DAT_14c896180 = uVar4, local_68 = uVar4, (uVar4 & 0x3ffffff) != 0) {
          local_98 = (uVar4 & 0xfffffffffc000000) + 0x4000000;
          if (local_98 >> 0x1a < uVar4 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          uVar12 = (ulonglong)((uVar13 & 0x3ffffff) >> 0xe);
          uVar15 = (ulonglong)((uint)uVar4 & 0x3fff);
          local_98 = local_98 & 0xfffffffffc000000 |
                     (ulonglong)
                     *(uint *)(*(longlong *)(&DAT_14c833b00 + uVar12 * 8) + 0x10 + uVar15 * 0x18);
          LOCK();
          bVar17 = local_68 == DAT_14c896180;
          uVar4 = local_98;
          if (!bVar17) {
            uVar4 = DAT_14c896180;
          }
          DAT_14c896180 = uVar4;
          UNLOCK();
          if (bVar17) {
            *(undefined4 *)(*(longlong *)(&DAT_14c833b00 + uVar12 * 8) + uVar15 * 0x18 + 0x10) = 0;
            plVar16 = *(longlong **)
                       (*(longlong *)(&DAT_14c833b00 + uVar12 * 8) + 8 +
                       (ulonglong)(uVar13 & 0x3fff) * 0x18);
            FUN_1447d080c(uVar13 & 0x3ffffff);
            lpTlsValue[1] = (longlong)plVar16;
            puVar14 = local_90;
            if (plVar16 == (longlong *)0x0) goto LAB_142e4d6b4;
            goto LAB_142e4d6ef;
          }
          uVar13 = (uint)DAT_14c896180;
          uVar4 = DAT_14c896180;
        }
        lpTlsValue[1] = 0;
LAB_142e4d6b4:
        puVar14 = local_90;
        puVar7 = (undefined8 *)FUN_14001cc68(0x10000,0);
        lpTlsValue[1] = (longlong)puVar7;
        iVar5 = 0xff;
        do {
          puVar10 = puVar7 + 0x20;
          *puVar7 = puVar10;
          iVar5 = iVar5 + -1;
          puVar7 = puVar10;
        } while (iVar5 != 0);
        *puVar10 = 0;
        plVar16 = (longlong *)lpTlsValue[1];
      }
      else {
        lpTlsValue[1] = (longlong)plVar16;
        *lpTlsValue = 0;
      }
LAB_142e4d6ef:
      *(undefined4 *)(lpTlsValue + 2) = 0x100;
      iVar5 = 0x100;
    }
    else {
      iVar5 = (int)lpTlsValue[2];
    }
    lpTlsValue[1] = *plVar16;
    *(int *)(lpTlsValue + 2) = iVar5 + -1;
    *plVar16 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
    plVar16[1] = (longlong)&DAT_100000002;
    plVar16[2] = 0;
    *(undefined4 *)(plVar16 + 3) = 0;
    *(undefined4 *)(plVar16 + 4) = 0xffffffff;
    plVar16[6] = 0;
    plVar16[7] = 0x100000000;
    *(undefined1 *)(plVar16 + 8) = 1;
    plVar16[0xe] = (longlong)
                   LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateDummy::vftable;
    plVar16[0xf] = 0;
    plVar16[0x10] = -0x17ffffffffffffe0;
    plVar16[0x12] = 0;
    plVar16[0x13] = 0x100000000;
    *(undefined2 *)(plVar16 + 0x14) = 0;
    LOCK();
    bVar17 = (char)plVar16[8] == '\x01';
    if (bVar17) {
      *(char *)(plVar16 + 8) = '\0';
    }
    UNLOCK();
    if (!bVar17) {
      FUN_14008cdb0(plVar16 + 8);
    }
    *plVar16 = (longlong)&PTR_FUN_14a2a08d8;
    if (*(code **)(plVar16[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(plVar16[0xe] + 0x18))(plVar16 + 0xe,plVar16 + 9);
    }
    plVar16[0xe] = (longlong)
                   LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    plVar16[9] = (longlong)plVar16;
    plVar16[10] = (longlong)plVar16;
    lVar6 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = *(longlong *)(lVar6 + 0x30);
    }
    plVar16[0xf] = lVar6;
    plVar16[0x10] = -0x37ffffad77750000;
    *(uint *)((longlong)plVar16 + 0x1c) = bVar3 ^ 1;
    *(undefined4 *)(plVar16 + 0x15) = (undefined4)local_80;
    *(undefined4 *)((longlong)plVar16 + 0xac) = local_80._4_4_;
    *(undefined4 *)(plVar16 + 0x16) = (undefined4)uStack_78;
    *(undefined4 *)((longlong)plVar16 + 0xb4) = uStack_78._4_4_;
    plVar16[0x17] = local_70;
    *plVar16 = (longlong)&PTR_FUN_14a2a08c8;
    LOCK();
    UNLOCK();
    LOCK();
    UNLOCK();
    local_68 = CONCAT71(local_68._1_7_,1);
    FUN_1447439e4(plVar16);
    if (plVar16 == (longlong *)0x0) goto LAB_142e4d8dc;
    iVar5 = *(int *)(param_1 + 0x508);
    *(uint *)(param_1 + 0x508) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0x50c) < iVar5 + 1U) {
      FUN_1401d03aa(local_88,iVar5);
    }
    *(longlong **)(*local_88 + (longlong)iVar5 * 8) = plVar16;
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
  }
  FUN_14473400f(0,0);
  puVar7 = *(undefined8 **)(param_4 + 0x48);
  *(longlong **)(param_4 + 0x48) = plVar16;
  if (puVar7 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar7 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar7)(puVar7,1);
    }
  }
  uStack_78 = param_4 + 0x18;
  local_70 = param_4 + 0x28;
  bVar3 = *(byte *)(param_1 + 0x520);
  local_80 = lVar2;
  if ((bVar3 == 0) &&
     ((lVar2 = *(longlong *)(param_4 + 0x48), lVar2 == 0 || ((*(byte *)(lVar2 + 0xa0) & 1) != 0))))
  {
    FUN_142e5da2a(&local_80);
LAB_142e4dccf:
    puVar10 = (undefined8 *)0x0;
  }
  else {
    puVar7 = TlsGetValue(DAT_14c896140);
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      *puVar7 = 0;
      puVar7[1] = 0;
      *(undefined4 *)(puVar7 + 2) = 0;
      TlsSetValue(DAT_14c896140,puVar7);
    }
    puVar10 = (undefined8 *)puVar7[1];
    if (puVar10 == (undefined8 *)0x0) {
      puVar10 = (undefined8 *)*puVar7;
      if (puVar10 == (undefined8 *)0x0) {
        uVar13 = (uint)DAT_14c896180;
        local_90 = puVar14;
        uVar4 = DAT_14c896180;
        while (DAT_14c896180 = uVar4, local_68 = uVar4, (uVar4 & 0x3ffffff) != 0) {
          local_98 = (uVar4 & 0xfffffffffc000000) + 0x4000000;
          if (local_98 >> 0x1a < uVar4 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          uVar12 = (ulonglong)((uVar13 & 0x3ffffff) >> 0xe);
          uVar15 = (ulonglong)((uint)uVar4 & 0x3fff);
          local_98 = local_98 & 0xfffffffffc000000 |
                     (ulonglong)
                     *(uint *)(*(longlong *)(&DAT_14c833b00 + uVar12 * 8) + 0x10 + uVar15 * 0x18);
          LOCK();
          bVar17 = local_68 == DAT_14c896180;
          uVar4 = local_98;
          if (!bVar17) {
            uVar4 = DAT_14c896180;
          }
          DAT_14c896180 = uVar4;
          UNLOCK();
          if (bVar17) {
            *(undefined4 *)(*(longlong *)(&DAT_14c833b00 + uVar12 * 8) + uVar15 * 0x18 + 0x10) = 0;
            puVar10 = *(undefined8 **)
                       (*(longlong *)(&DAT_14c833b00 + uVar12 * 8) + 8 +
                       (ulonglong)(uVar13 & 0x3fff) * 0x18);
            FUN_1447d080c(uVar13 & 0x3ffffff);
            puVar7[1] = puVar10;
            puVar14 = local_90;
            if (puVar10 != (undefined8 *)0x0) goto LAB_142e4dae0;
            goto LAB_142e4dd66;
          }
          uVar13 = (uint)DAT_14c896180;
          uVar4 = DAT_14c896180;
        }
        puVar7[1] = 0;
LAB_142e4dd66:
        puVar14 = local_90;
        puVar10 = (undefined8 *)FUN_14001cc68(0x10000,0);
        puVar7[1] = puVar10;
        iVar5 = 0xff;
        puVar11 = puVar10;
        do {
          puVar8 = puVar11 + 0x20;
          *puVar11 = puVar8;
          iVar5 = iVar5 + -1;
          puVar11 = puVar8;
        } while (iVar5 != 0);
      }
      else {
        puVar7[1] = puVar10;
        puVar8 = puVar7;
      }
      *puVar8 = 0;
LAB_142e4dae0:
      *(undefined4 *)(puVar7 + 2) = 0x100;
      iVar5 = 0xff;
    }
    else {
      iVar5 = *(int *)(puVar7 + 2) + -1;
    }
    puVar7[1] = *puVar10;
    *(int *)(puVar7 + 2) = iVar5;
    *puVar10 = UE::Tasks::Private::FTaskBase::vftable;
    puVar10[1] = &DAT_100000002;
    puVar10[2] = 0;
    *(undefined4 *)(puVar10 + 3) = 0;
    *(undefined4 *)(puVar10 + 4) = 0xffffffff;
    puVar10[6] = 0;
    puVar10[7] = 0x100000000;
    *(undefined1 *)(puVar10 + 8) = 1;
    puVar10[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateDummy::vftable;
    puVar10[0xf] = 0;
    puVar10[0x10] = 0xe800000000000020;
    puVar10[0x12] = 0;
    puVar10[0x13] = 0x100000000;
    *(undefined2 *)(puVar10 + 0x14) = 0;
    LOCK();
    bVar17 = *(char *)(puVar10 + 8) == '\x01';
    if (bVar17) {
      *(char *)(puVar10 + 8) = '\0';
    }
    UNLOCK();
    if (!bVar17) {
      FUN_14008cdb0(puVar10 + 8);
    }
    *puVar10 = &PTR_FUN_14a2a08f8;
    if (*(code **)(puVar10[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar10[0xe] + 0x18))(puVar10 + 0xe,puVar10 + 9);
    }
    puVar10[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar10[9] = puVar10;
    puVar10[10] = puVar10;
    lVar2 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar2 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined8 *)(lVar2 + 0x30);
    }
    puVar10[0xf] = uVar9;
    puVar10[0x10] = 0xc8000052888b0000;
    *(uint *)((longlong)puVar10 + 0x1c) = bVar3 ^ 1;
    *(undefined4 *)(puVar10 + 0x15) = (undefined4)local_80;
    *(undefined4 *)((longlong)puVar10 + 0xac) = local_80._4_4_;
    *(undefined4 *)(puVar10 + 0x16) = (undefined4)uStack_78;
    *(undefined4 *)((longlong)puVar10 + 0xb4) = uStack_78._4_4_;
    puVar10[0x17] = local_70;
    *puVar10 = &PTR_FUN_14a2a08e8;
    FUN_1400e88c2(puVar10,(longlong *)(param_4 + 0x48));
    local_68 = CONCAT71(local_68._1_7_,1);
    FUN_1447439e4(puVar10);
    if (puVar10 == (undefined8 *)0x0) goto LAB_142e4dccf;
    iVar5 = *(int *)(param_1 + 0x508);
    *(uint *)(param_1 + 0x508) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0x50c) < iVar5 + 1U) {
      FUN_1401d03aa(local_88,iVar5);
    }
    *(undefined8 **)(*local_88 + (longlong)iVar5 * 8) = puVar10;
    LOCK();
    *(int *)(puVar10 + 1) = *(int *)(puVar10 + 1) + 1;
    UNLOCK();
  }
  puVar7 = *(undefined8 **)(param_4 + 0x50);
  *(undefined8 **)(param_4 + 0x50) = puVar10;
  if (puVar7 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar7 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar7)(puVar7,1);
    }
  }
  if (param_5 == '\0') {
    *puVar14 = 0;
  }
LAB_142e4dcf8:
  if ((local_60 ^ (ulonglong)local_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e4de13 FUN_142e4de13 body=2510 status=ok
// SIG undefined FUN_142e4de13(void)

undefined8 FUN_142e4de13(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  uint3 uVar1;
  ushort uVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  ushort uVar16;
  ushort uVar17;
  ushort uVar18;
  uint uVar19;
  longlong *plVar20;
  longlong **pplVar21;
  ulonglong uVar22;
  longlong lVar23;
  byte bVar24;
  byte bVar25;
  undefined1 uVar26;
  longlong *plVar27;
  bool bVar28;
  undefined1 auStack_178 [32];
  longlong *local_158;
  longlong local_150;
  undefined8 *local_148;
  undefined8 *local_140;
  char local_131;
  undefined8 local_130;
  longlong local_128;
  longlong local_120;
  longlong *local_118;
  ulonglong local_110;
  longlong local_108;
  undefined8 local_100;
  undefined8 local_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 *local_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong *local_98;
  longlong lStack_90;
  longlong *local_88;
  longlong lStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca1a214) && (FUN_144b3d300(&DAT_14ca1a214), DAT_14ca1a214 == -1)) {
    DAT_14ca1a210 = DAT_14c760e18;
    _Init_thread_footer(&DAT_14ca1a214);
  }
  uVar8 = *(undefined4 *)(param_1 + 8);
  plVar10 = *(longlong **)(param_3 + 8);
  while (plVar10 != (longlong *)0x0) {
    lVar9 = (**(code **)(*plVar10 + 0x30))(plVar10,uVar8);
    if (lVar9 != 0) goto LAB_142e4dea5;
    plVar10 = (longlong *)(**(code **)(*plVar10 + 0x38))(plVar10,uVar8);
  }
  plVar10 = (longlong *)0x0;
LAB_142e4dea5:
  if (DAT_14ca1a210 == '\x01') {
    local_88 = (longlong *)0x0;
    lStack_80 = 0x800000000;
    (**(code **)(*param_2 + 0x1d8))(param_2,&local_c8);
    if ((int)lStack_80 == 1) {
      plVar11 = &local_c8;
      if (local_88 != (longlong *)0x0) {
        plVar11 = local_88;
      }
      local_128 = *plVar11;
    }
    else {
      local_128 = 0;
    }
    if (local_88 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    local_128 = 0;
  }
  uVar6 = 0;
  local_130 = (longlong *)((ulonglong)local_130._4_4_ << 0x20);
  if (DAT_14ca19c50 != 0) {
    cVar4 = FUN_147262ebe(*(undefined2 *)(&DAT_14ca85070 + (longlong)*(int *)(param_1 + 8) * 2));
    if (cVar4 == '\0') {
      local_130 = (longlong *)((ulonglong)local_130._4_4_ << 0x20);
    }
    else {
      local_130 = (longlong *)
                  CONCAT44(local_130._4_4_,
                           (int)CONCAT71((int7)((ulonglong)DAT_14ca1c218 >> 8),
                                         *(int *)(DAT_14ca1c218 + 4) == 0));
    }
  }
  local_e8 = (longlong *)0x0;
  uStack_e0 = 0;
  local_120 = param_3;
  plVar11 = (longlong *)FUN_14485b2b4(plVar10,uVar8);
  (**(code **)(*plVar11 + 0x288))(plVar11,&local_c8);
  uVar5 = (**(code **)(*plVar11 + 0x270))(plVar11);
  bVar3 = FUN_144ab569e(param_1,1 < uVar5);
  bVar28 = (short)local_c8 != 1;
  if (local_128 != 0) {
    local_158 = plVar11;
    uVar6 = FUN_147132d98(uVar8,param_1,local_128,param_2);
  }
  uVar26 = 5;
  if ((char)local_130 != '\0') {
    uVar26 = 0xb;
  }
  local_140 = &local_e8;
  local_158 = (longlong *)CONCAT71(local_158._1_7_,bVar28 & bVar3);
  local_150 = CONCAT71(local_150._1_7_,uVar26);
  local_148 = (undefined8 *)((ulonglong)local_148 & 0xffffffffffffff00);
  local_118 = param_2;
  local_108 = param_1;
  cVar4 = FUN_144a628de(plVar11,&DAT_14cb00c58,uVar6,uVar8);
  if (cVar4 == '\0') {
    FUN_14003fbd6();
    plVar10 = (longlong *)(**(code **)(*DAT_14caea080 + 0x2f0))();
    plVar11 = (longlong *)FUN_14485b2b4(plVar10,uVar8);
    (**(code **)(*plVar11 + 0x288))(plVar11,&local_c8);
    uVar5 = (**(code **)(*plVar11 + 0x270))(plVar11);
    lVar9 = local_108;
    bVar3 = FUN_144ab569e(local_108,1 < uVar5);
    bVar28 = (short)local_c8 != 1;
    if (local_128 != 0) {
      local_158 = plVar11;
      uVar6 = FUN_147132d98(uVar8,lVar9,local_128,local_118);
    }
    local_140 = &local_e8;
    local_150 = CONCAT71(local_150._1_7_,uVar26);
    local_158 = (longlong *)CONCAT71(local_158._1_7_,bVar28 & bVar3);
    local_148 = (undefined8 *)((ulonglong)local_148 & 0xffffffffffffff00);
    cVar4 = FUN_144a628de(plVar11,&DAT_14cb00c58,uVar6,uVar8);
    if (cVar4 == '\0') {
      uVar15 = 0;
      goto LAB_142e4e68d;
    }
  }
  param_4[3] = (longlong)plVar10;
  lVar9 = (**(code **)(*plVar10 + 0x30))(plVar10,uVar8);
  lVar23 = local_120;
  param_4[4] = lVar9;
  lVar9 = 0;
  uVar1 = (uint3)(*(char *)((longlong)local_e8 + 0x126) != '\0');
  *(uint *)(param_4 + 7) =
       (uint)uVar1 << 8 |
       (uint)(*(char *)((longlong)local_e8 + 0x125) != '\0') << 7 |
       (uint)(*(char *)((longlong)local_e8 + 0x124) != '\0') << 6 |
       (uint)(*(char *)((longlong)local_e8 + 0x123) != '\0') << 5 |
       (uint)(*(char *)((longlong)local_e8 + 0x122) != '\0') << 4 |
       (uint)(*(char *)((longlong)local_e8 + 0x11e) != '\0') +
       (uint)(*(char *)((longlong)local_e8 + 0x11f) != '\0') * 2 +
       (uint)((char)local_e8[0x24] != '\0') * 4 +
       (uint)(*(char *)((longlong)local_e8 + 0x121) != '\0') * 8;
  if ((char)local_130 == '\0') {
    if (local_e8 == (longlong *)0x0) {
      lVar12 = 0;
    }
    else {
      lVar9 = (longlong)*(int *)((longlong)local_e8 + 0xd4);
      lVar12 = *(longlong *)(*(longlong *)(*(longlong *)(uStack_e0 + 8) + 0x50) + lVar9 * 8);
      if (lVar12 == 0) {
        lVar12 = FUN_1400bafc2(*(longlong *)(uStack_e0 + 8),lVar9,CONCAT71((uint7)uVar1,1));
      }
    }
    param_4[5] = lVar12;
LAB_142e4e1f3:
    lVar12 = 0;
  }
  else {
    param_4[5] = 0;
    if (local_e8 == (longlong *)0x0) goto LAB_142e4e1f3;
    lVar9 = (longlong)*(int *)((longlong)local_e8 + 0xd4);
    lVar12 = *(longlong *)(*(longlong *)(*(longlong *)(uStack_e0 + 8) + 0x50) + lVar9 * 8);
    if (lVar12 == 0) {
      lVar12 = FUN_1400bafc2(*(longlong *)(uStack_e0 + 8),lVar9,CONCAT71((uint7)uVar1,1));
    }
  }
  param_4[6] = lVar12;
  uVar16 = *(byte *)(lVar23 + 0x2c) >> 5 & 1;
  uVar2 = (ushort)*(undefined4 *)((longlong)param_4 + 0x44);
  *(ushort *)((longlong)param_4 + 0x44) = uVar2 & 0xfffe | uVar16;
  uVar17 = *(byte *)(lVar23 + 0x2c) >> 1 & 2;
  *(ushort *)((longlong)param_4 + 0x44) = uVar2 & 0xfffc | uVar16 | uVar17;
  bVar28 = true;
  if (DAT_14ca19c90 == 1) {
    uVar18 = 4;
    local_110 = CONCAT71((int7)((ulonglong)lVar9 >> 8),1);
  }
  else if ((DAT_14ca19c90 == 2) || (lVar9 = param_4[5], lVar9 == 0)) {
    local_110 = 0;
    uVar18 = 0;
  }
  else {
    local_110 = CONCAT71((int7)((ulonglong)lVar9 >> 8),*(undefined1 *)(lVar9 + 0x9d)) &
                0xffffffffffffff01;
    uVar18 = (short)local_110 * 4 & 0xff;
  }
  *(ushort *)((longlong)param_4 + 0x44) = uVar18 | uVar2 & 0xfff8 | uVar16 | uVar17;
  lVar9 = param_4[7];
  plVar11 = (longlong *)param_4[4];
  cVar4 = (**(code **)(*plVar11 + 0x458))(plVar11);
  if (cVar4 == '\0') {
    iVar7 = (**(code **)(*plVar11 + 0x408))(plVar11);
    bVar28 = 0 < iVar7;
  }
  local_120 = CONCAT71(local_120._1_7_,bVar28);
  local_130 = param_4;
  bVar3 = (**(code **)(*plVar11 + 600))(plVar11);
  if (plVar11[3] == 0) {
    bVar24 = 0;
    uVar5 = 0;
  }
  else {
    bVar25 = *(byte *)(*(longlong *)(plVar11[3] + 0x28) + 0x246);
    bVar24 = (bVar25 & 0x40) >> 6;
    uVar5 = bVar25 >> 4 & 1;
  }
  local_131 = (**(code **)(*plVar11 + 0x4a0))(plVar11);
  cVar4 = FUN_1447f4973();
  if ((cVar4 == '\0') || (plVar11[3] == 0)) {
    bVar25 = 0;
  }
  else {
    bVar25 = (*(byte *)(*(longlong *)(plVar11[3] + 0x28) + 0x247) & 0x20) >> 5;
  }
  cVar4 = (**(code **)(*plVar11 + 0x38))(plVar11);
  plVar11 = local_130;
  uVar19 = (uint)bVar3 * 4 + 2;
  if (bVar24 == 0) {
    uVar19 = (uint)bVar3 << 2;
  }
  uVar19 = uVar19 | uVar5;
  if (bVar25 != 0) {
    uVar19 = uVar19 | 8;
  }
  uVar5 = uVar19 + 0x40;
  if (cVar4 == '\0') {
    uVar5 = uVar19;
  }
  uVar19 = uVar5 + 0x80;
  if (local_131 == '\0') {
    uVar19 = uVar5;
  }
  uVar5 = uVar19 + 0x100;
  if ((char)local_110 == '\0') {
    uVar5 = uVar19;
  }
  uVar19 = uVar5;
  if (bVar24 != 0) {
    uVar19 = uVar5 | 0x400;
  }
  if (bVar3 != 0) {
    uVar19 = uVar5 | 0x400;
  }
  if ((char)local_120 == '\0') {
    uVar19 = uVar5;
  }
  *(uint *)(local_130 + 8) = (int)lVar9 * 0x1000000 + uVar19;
  puVar13 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *puVar13 = &LAB_144908c4e;
  puVar13[1] = FUN_142e5e6ec;
  puVar13[2] = 0;
  puVar13[3] = 0;
  puVar13 = puVar13 + 2;
  lVar9 = *plVar11;
  *plVar11 = (longlong)puVar13;
  if (lVar9 != 0) {
    (**(code **)(lVar9 + -0x10))(lVar9 + -0x10);
    puVar13 = (undefined8 *)*plVar11;
  }
  *(undefined4 *)puVar13 = (undefined4)local_e8;
  *(undefined4 *)((longlong)puVar13 + 4) = local_e8._4_4_;
  *(undefined4 *)(puVar13 + 1) = (undefined4)uStack_e0;
  *(undefined4 *)((longlong)puVar13 + 0xc) = uStack_e0._4_4_;
  local_f0 = local_128;
  local_100 = DAT_14ca44d40;
  local_f8 = DAT_14ca44d68;
  puVar14 = (undefined8 *)FUN_14001cc68(0x90,0x10);
  plVar27 = local_118;
  *puVar14 = FUN_144908c53;
  puVar14[1] = FUN_142e5e729;
  puVar14[4] = 0;
  puVar14[5] = 0x200000000;
  puVar13 = puVar14 + 2;
  puVar14[6] = 0;
  puVar14[7] = 0;
  puVar14[8] = 0;
  puVar14[9] = 0;
  puVar14[10] = 0;
  puVar14[0xb] = 0;
  puVar14[0xc] = 0;
  puVar14[0xd] = 0;
  puVar14[0xe] = 0;
  puVar14[0xf] = 0;
  *(undefined4 *)(puVar14 + 0x10) = 0;
  lVar9 = plVar11[2];
  plVar11[2] = (longlong)puVar13;
  if (lVar9 != 0) {
    (**(code **)(lVar9 + -0x10))(lVar9 + -0x10);
    puVar13 = (undefined8 *)plVar11[2];
  }
  lVar9 = plVar11[4];
  local_78 = 0;
  uStack_70 = 0;
  local_88 = (longlong *)0x0;
  lStack_80 = 0;
  local_98 = (longlong *)0x0;
  lStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  bVar3 = (byte)*(uint *)(local_e8 + 0x1a);
  if ((bVar3 & 0xf) == 5) {
    pplVar21 = &local_98;
    plVar20 = &lStack_90;
LAB_142e4e4f0:
    *pplVar21 = local_e8;
    *plVar20 = uStack_e0;
  }
  else if ((*(uint *)(local_e8 + 0x1a) & 0xf) == 0xb) {
    plVar20 = &lStack_80;
    pplVar21 = &local_88;
    goto LAB_142e4e4f0;
  }
  FUN_1447662e4(puVar13,&local_c8);
  plVar20 = local_e8;
  if (local_e8 != (longlong *)0x0) {
    uVar5 = (2 << (bVar3 & 0xf)) - 1U & (uint)*(ushort *)(puVar13 + 0xe);
    uVar22 = (ulonglong)uVar5 - (ulonglong)(uVar5 >> 1 & 0x5555);
    uVar22 = (uVar22 >> 2 & 0x3333333333333333) + (uVar22 & 0x3333333333333333);
    uVar22 = ((uVar22 >> 4) + uVar22 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar22 == 0) {
      local_d8 = 0x58;
      local_d0 = (undefined8 *)0x0;
    }
    else {
      puVar14 = (undefined8 *)puVar13[2];
      if ((undefined8 *)puVar13[2] == (undefined8 *)0x0) {
        puVar14 = puVar13;
      }
      if (*(ushort *)((longlong)puVar13 + 0x72) < 0x51) {
        local_d0 = puVar13 + 4;
      }
      else {
        local_d0 = (undefined8 *)puVar13[4];
      }
      local_d8 = puVar14[uVar22 - 1];
    }
    local_140 = &local_d8;
    local_148 = &local_100;
    local_158 = plVar10;
    local_150 = lVar9;
    FUN_14474308c(local_e8,local_108,uVar8,plVar27);
    if (local_128 == 0) {
      lVar9 = 0;
      lVar23 = 0;
    }
    else {
      lVar9 = *(longlong *)(local_128 + 0x28);
      plVar11 = local_130;
      plVar27 = local_118;
      if (*(longlong *)(local_128 + 0x20) == 0) {
        lVar23 = 0;
      }
      else {
        lVar23 = *(longlong *)(*(longlong *)(local_128 + 0x20) + 0x50);
      }
    }
    if (lVar9 == 0) {
      lVar9 = DAT_14c9e9108;
    }
    if (lVar23 == 0) {
      lVar23 = DAT_14cb05400;
    }
    if ((plVar27 == (longlong *)0x0) || (plVar27[0x43] == 0)) {
      lVar12 = 0;
    }
    else {
      lVar12 = *(longlong *)(plVar27[0x43] + 0xc0);
    }
    if (lVar12 == 0) {
      lVar12 = DAT_14c9e9130;
    }
    if ((short)plVar20[0x21] != -1) {
      FUN_144b11088(&local_d8,lVar9);
    }
    if (*(short *)((longlong)plVar20 + 0x10a) != -1) {
      FUN_144b11088(&local_d8,lVar12);
    }
    if (*(short *)((longlong)plVar20 + 0x10c) != -1) {
      FUN_144b11088(&local_d8,lVar23);
    }
  }
  uVar8 = FUN_144937ede(plVar11[2]);
  *(undefined4 *)((longlong)plVar11 + 0x3c) = uVar8;
  uVar15 = 1;
LAB_142e4e68d:
  if ((local_60 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return uVar15;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e4e7e2 FUN_142e4e7e2 body=589 status=ok
// SIG undefined FUN_142e4e7e2(void)

longlong FUN_142e4e7e2(undefined8 *param_1)

{
  longlong *plVar1;
  undefined1 uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined1 auStack_98 [40];
  undefined1 *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  uint local_54;
  undefined4 local_50;
  undefined1 *local_4c;
  undefined4 local_44;
  undefined2 local_40;
  undefined1 local_3e;
  undefined2 local_3d;
  undefined1 local_3b;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar6 = *(longlong *)*param_1;
  if (lVar6 == 0) {
    local_58 = DAT_14ca83a68;
    local_68 = DAT_14ca83a58;
    uStack_64 = DAT_14ca83a5c;
    uStack_60 = DAT_14ca83a60;
    uStack_5c = DAT_14ca83a64;
    local_54 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    lVar6 = param_1[1];
    local_3e = 0;
    local_70 = &DAT_00020008;
    local_3d = 0x1c;
    local_44 = 0x10001;
    local_40 = 0x101;
    local_50 = 0;
    local_3b = 0xff;
    local_4c = &DAT_100000001;
    plVar1 = (longlong *)(lVar6 + 0x70);
    uVar7 = *(longlong *)(lVar6 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar4 = uVar7 + 0x120;
    if (*(ulonglong *)(lVar6 + 0x78) < uVar4) {
      FUN_140023dd8(plVar1,0x128);
      uVar7 = *plVar1 + 7U & 0xfffffffffffffff8;
      uVar4 = uVar7 + 0x120;
    }
    *(ulonglong *)(lVar6 + 0x70) = uVar4;
    FUN_1456bbb8c(uVar7,L"Nanite.TargetDummy",&local_70,0);
    iVar3 = *(int *)(lVar6 + 0x180);
    *(uint *)(lVar6 + 0x180) = iVar3 + 1U;
    if (*(uint *)(lVar6 + 0x184) < iVar3 + 1U) {
      FUN_14472c0f6(lVar6 + 0x178,iVar3);
    }
    *(ulonglong *)(*(longlong *)(lVar6 + 0x178) + (longlong)iVar3 * 8) = uVar7;
    *(int *)(uVar7 + 0x9c) = *(int *)(lVar6 + 0x180) + -1;
    uVar2 = *(undefined1 *)(uVar7 + 0x94);
    puVar8 = (undefined8 *)(*(longlong *)(lVar6 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar8 + 9;
    if (*(undefined8 **)(lVar6 + 0x78) < puVar5) {
      FUN_140023dd8(plVar1,0x50);
      puVar8 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
      puVar5 = puVar8 + 9;
    }
    *(undefined8 **)(lVar6 + 0x70) = puVar5;
    puVar8[1] = *(undefined8 *)(uVar7 + 8);
    puVar8[2] = 0;
    *(undefined1 *)(puVar8 + 3) = 0;
    *(undefined8 *)((longlong)puVar8 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar8 + 5) = 1;
    *puVar8 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar8 + 6) = uVar2;
    *(undefined1 *)(puVar8 + 7) = 0;
    *(undefined4 *)((longlong)puVar8 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar8 + 0x35) = 0;
    puVar8[8] = uVar7;
    iVar3 = *(int *)(lVar6 + 0x1a0);
    *(uint *)(lVar6 + 0x1a0) = iVar3 + 1U;
    if (*(uint *)(lVar6 + 0x1a4) < iVar3 + 1U) {
      FUN_1447568fc(lVar6 + 0x198,iVar3);
    }
    *(undefined8 **)(*(longlong *)(lVar6 + 0x198) + (longlong)iVar3 * 8) = puVar8;
    *(int *)((longlong)puVar8 + 0x1c) = *(int *)(lVar6 + 0x1a0) + -1;
    *(undefined8 **)*param_1 = puVar8;
    lVar6 = *(longlong *)*param_1;
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e4ea30 FUN_142e4ea30 body=16783 status=ok
// SIG undefined FUN_142e4ea30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e4ea30(longlong param_1,int *param_2,longlong *param_3,undefined8 param_4,
                  longlong *param_5,undefined8 param_6,longlong param_7,longlong param_8,
                  undefined4 param_9,undefined8 *param_10)

{
  ulonglong *puVar1;
  uint *puVar2;
  undefined2 uVar3;
  undefined1 auVar4 [8];
  int iVar5;
  char cVar6;
  undefined1 uVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  DWORD DVar12;
  DWORD DVar13;
  longlong lVar14;
  undefined1 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 **ppuVar18;
  longlong *plVar19;
  longlong *plVar20;
  longlong *plVar21;
  ulonglong uVar22;
  longlong lVar23;
  undefined2 *puVar24;
  byte bVar25;
  int iVar26;
  undefined6 uVar27;
  undefined8 *puVar28;
  int *piVar29;
  byte bVar30;
  uint uVar31;
  undefined8 *puVar32;
  int6 iVar33;
  int iVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  undefined8 *puVar37;
  uint uVar38;
  ulonglong uVar39;
  undefined8 *puVar40;
  undefined8 *puVar41;
  bool bVar42;
  undefined1 auStack_508 [32];
  int *local_4e8;
  ulonglong local_4e0;
  undefined1 local_4d8;
  ulonglong *local_4c8;
  longlong local_4c0;
  ulonglong local_4b8;
  undefined8 *local_4b0;
  longlong *local_4a8;
  ulonglong local_4a0;
  undefined8 *local_498;
  int *local_490;
  int local_488;
  int local_484;
  int local_480;
  int local_47c;
  longlong local_478;
  longlong *local_470;
  longlong local_468;
  longlong local_460;
  longlong local_458;
  int local_44c;
  ulonglong local_448;
  undefined8 *local_440;
  ulonglong local_438;
  undefined8 *local_430;
  ulonglong local_428;
  uint local_41c;
  uint local_418;
  int local_414;
  undefined8 *local_410;
  undefined8 *local_408;
  undefined8 local_400;
  ulonglong local_3f8;
  undefined8 *local_3f0;
  int *local_3e8;
  longlong local_3e0;
  longlong local_3d8;
  longlong local_3d0;
  longlong local_3c8;
  ulonglong local_3c0;
  ulonglong local_3b8;
  undefined8 *puStack_3b0;
  ulonglong local_3a8;
  ulonglong uStack_3a0;
  uint local_398;
  undefined8 *local_388;
  undefined4 local_380;
  undefined8 *local_378;
  ulonglong local_370;
  undefined1 local_361;
  int local_360;
  uint uStack_35c;
  uint uStack_358;
  undefined4 uStack_354;
  undefined2 local_34b;
  undefined1 local_349;
  undefined4 *local_348;
  undefined8 uStack_340;
  undefined1 local_338;
  int local_334;
  undefined8 *local_328;
  longlong local_320;
  undefined *local_318;
  undefined1 local_310;
  undefined8 local_308;
  undefined1 local_300;
  undefined8 local_2f8;
  char local_2f0;
  undefined8 **local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  char local_2d0;
  undefined8 local_2c8;
  char local_2c0;
  undefined8 local_2b8;
  undefined1 local_2b0;
  undefined8 *local_2a8;
  char local_2a0;
  undefined1 local_298 [62];
  undefined1 auStack_25a [2];
  undefined1 *local_258;
  undefined1 local_250 [8];
  undefined1 local_248 [16];
  undefined8 local_238;
  uint local_230;
  uint local_22c;
  undefined1 local_228 [16];
  longlong local_188;
  longlong lStack_180;
  longlong local_178;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined2 local_15c;
  undefined1 local_158 [14];
  undefined2 uStack_14a;
  undefined8 local_148;
  undefined2 uStack_140;
  undefined1 auStack_13e [118];
  undefined4 local_c8;
  int iStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  undefined4 uStack_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98;
  undefined7 uStack_97;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_508;
  lVar14 = *(longlong *)(param_2 + 0x12);
  local_470 = param_3;
  if (lVar14 != 0) {
    if (DAT_14c87e718 == '\0') {
      iVar26 = *(int *)(lVar14 + 0x1c);
      if ((2 < iVar26) &&
         (bVar30 = (**(code **)(*DAT_14c82b500 + 0x10))(DAT_14c82b500,0), bVar30 < 3)) {
        local_248 = _DAT_149dfe150;
        local_238 = CONCAT44(DAT_14c7585c8,DAT_14c7585c8) | 0x20000000000;
        local_230 = DAT_14c7585c8 | 0x100;
        local_22c = DAT_14c7585c8 | 0x300;
        local_228 = pmovsxwd(_DAT_149dfe150,0x300010002000000);
        if (local_248[(ulonglong)(iVar26 - 3) * 4] == bVar30) goto LAB_142e523c4;
      }
      QueryPerformanceCounter((LARGE_INTEGER *)local_248);
      local_248._8_8_ = 0xffffffffffffffff;
      FUN_140056092(lVar14,(LARGE_INTEGER *)local_248);
    }
    else {
LAB_142e523c4:
      FUN_140082318(lVar14);
    }
  }
  iVar26 = param_2[1];
  if (iVar26 == 0) goto LAB_142e51857;
  lVar14 = *(longlong *)(param_2 + 4);
  if (lVar14 != 0) {
    LOCK();
    *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
    UNLOCK();
  }
  local_414 = iVar26;
  cVar6 = FUN_141772717(param_8);
  if (cVar6 == '\0') {
    local_378 = *(undefined8 **)(param_8 + 0x30f8);
    local_370 = *(ulonglong *)(param_8 + 0x3100);
  }
  else {
    FUN_140c83590(param_8,&local_378);
  }
  local_490 = param_2;
  local_468 = lVar14;
  if (DAT_14c760a84 == -1) {
    FUN_145fdab76(local_248,L"FRDGSystemTextures",L".\\Runtime/Renderer/Private/SystemTextures.cpp",
                  0x66);
    DAT_14c760a84 = FUN_145d12cf0(local_248);
    if (local_248._0_8_ != 0) {
      FUN_1400020a8();
    }
  }
  piVar29 = local_490;
  if ((DAT_14c760a84 < *(int *)(param_1 + 0x130)) &&
     (lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x128) + (longlong)DAT_14c760a84 * 8),
     lVar14 != 0)) {
    lVar14 = lVar14 + 8;
  }
  else {
    lVar14 = 0;
  }
  lVar14 = *(longlong *)(lVar14 + 8);
  local_3c8 = param_10[9];
  if (param_10[9] == 0) {
    local_3c8 = lVar14;
  }
  local_3d0 = param_10[10];
  if (param_10[10] == 0) {
    local_3d0 = lVar14;
  }
  local_3d8 = param_10[0xb];
  if (param_10[0xb] == 0) {
    local_3d8 = lVar14;
  }
  lVar14 = param_10[7];
  local_238 = 0;
  uVar9 = 4;
  if (DAT_14ca84e48 < 4) {
    uVar9 = DAT_14ca84e48;
  }
  local_248._4_8_ = 0x1010900000001;
  local_248._0_4_ = uVar9 + (uVar9 == 0);
  puVar1 = (ulonglong *)(param_1 + 0x70);
  uVar35 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar22 = uVar35 + 0x150;
  local_4c8 = puVar1;
  if (*(ulonglong *)(param_1 + 0x78) < uVar22) {
    FUN_140023dd8(puVar1,0x160);
    uVar35 = *puVar1 + 0xf & 0xfffffffffffffff0;
    uVar22 = uVar35 + 0x150;
  }
  lVar23 = param_1 + 0x188;
  *(ulonglong *)(param_1 + 0x70) = uVar22;
  local_3e0 = lVar14;
  FUN_1456bd266(uVar35,L"Nanite.DummyMultiViewIndices",local_248,0);
  iVar26 = *(int *)(param_1 + 400);
  *(uint *)(param_1 + 400) = iVar26 + 1U;
  if (*(uint *)(param_1 + 0x194) < iVar26 + 1U) {
    FUN_144737178(lVar23,iVar26);
  }
  puVar1 = local_4c8;
  *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar26 * 8) = uVar35;
  *(int *)(uVar35 + 0x7c) = *(int *)(param_1 + 400) + -1;
  uVar9 = 0x10;
  if (DAT_14ca84e48 < 0x10) {
    uVar9 = DAT_14ca84e48;
  }
  local_238 = 0;
  local_248._4_8_ = 0x1010900000001;
  local_248._0_4_ = uVar9 + (uVar9 == 0);
  uVar39 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar22 = uVar39 + 0x150;
  if (*(ulonglong *)(param_1 + 0x78) < uVar22) {
    FUN_140023dd8(local_4c8,0x160);
    uVar39 = *puVar1 + 0xf & 0xfffffffffffffff0;
    uVar22 = uVar39 + 0x150;
  }
  *(ulonglong *)(param_1 + 0x70) = uVar22;
  FUN_1456bd266(uVar39,L"Nanite.DummyMultiViewRectScaleOffsets",local_248,0);
  iVar26 = *(int *)(param_1 + 400);
  *(uint *)(param_1 + 400) = iVar26 + 1U;
  if (*(uint *)(param_1 + 0x194) < iVar26 + 1U) {
    FUN_144737178(lVar23,iVar26);
  }
  puVar1 = local_4c8;
  *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar26 * 8) = uVar39;
  *(int *)(uVar39 + 0x7c) = *(int *)(param_1 + 400) + -1;
  uVar9 = 0x10;
  if (DAT_14ca84e48 < 0x10) {
    uVar9 = DAT_14ca84e48;
  }
  local_238 = 0;
  local_248._4_8_ = 0x1010900000001;
  local_248._0_4_ = uVar9 + (uVar9 == 0);
  uVar36 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar22 = uVar36 + 0x150;
  if (*(ulonglong *)(param_1 + 0x78) < uVar22) {
    FUN_140023dd8(local_4c8,0x160);
    uVar36 = *puVar1 + 0xf & 0xfffffffffffffff0;
    uVar22 = uVar36 + 0x150;
  }
  *(ulonglong *)(param_1 + 0x70) = uVar22;
  FUN_1456bd266(uVar36,L"Nanite.PackedViews",local_248,0);
  iVar26 = *(int *)(param_1 + 400);
  *(uint *)(param_1 + 400) = iVar26 + 1U;
  if (*(uint *)(param_1 + 0x194) < iVar26 + 1U) {
    FUN_144737178(lVar23,iVar26);
  }
  puVar1 = local_4c8;
  *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar26 * 8) = uVar36;
  *(int *)(uVar36 + 0x7c) = *(int *)(param_1 + 400) + -1;
  cVar6 = *(char *)(uVar35 + 0x68);
  puVar32 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar40 = puVar32 + 8;
  local_460 = lVar23;
  if (*(undefined8 **)(param_1 + 0x78) < puVar40) {
    FUN_140023dd8(local_4c8,0x48);
    puVar32 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar40 = puVar32 + 8;
  }
  local_4c0 = param_1 + 0x198;
  *(undefined8 **)(param_1 + 0x70) = puVar40;
  puVar32[1] = *(undefined8 *)(uVar35 + 8);
  puVar32[2] = 0;
  *(undefined1 *)(puVar32 + 3) = 2;
  *(undefined8 *)((longlong)puVar32 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar32 + 5) = 0;
  *puVar32 = &PTR_FUN_14a1fb3e8;
  *(byte *)(puVar32 + 6) = cVar6 >> 7 & 0x1c;
  *(undefined2 *)((longlong)puVar32 + 0x31) = 0;
  puVar32[7] = uVar35;
  iVar26 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar26 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar26 + 1U) {
    FUN_1447568fc(local_4c0,iVar26);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar26 * 8) = puVar32;
  *(int *)((longlong)puVar32 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  FUN_1405bfba3(param_1,puVar32,0,2);
  puVar1 = local_4c8;
  cVar6 = *(char *)(uVar39 + 0x68);
  puVar32 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar40 = puVar32 + 8;
  if (*(undefined8 **)(param_1 + 0x78) < puVar40) {
    FUN_140023dd8(local_4c8,0x48);
    puVar32 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar40 = puVar32 + 8;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar40;
  puVar32[1] = *(undefined8 *)(uVar39 + 8);
  puVar32[2] = 0;
  *(undefined1 *)(puVar32 + 3) = 2;
  *(undefined8 *)((longlong)puVar32 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar32 + 5) = 0;
  *puVar32 = &PTR_FUN_14a1fb3e8;
  *(byte *)(puVar32 + 6) = cVar6 >> 7 & 0x1c;
  *(undefined2 *)((longlong)puVar32 + 0x31) = 0;
  puVar32[7] = uVar39;
  iVar26 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar26 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar26 + 1U) {
    FUN_1447568fc(local_4c0,iVar26);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar26 * 8) = puVar32;
  *(int *)((longlong)puVar32 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  FUN_1405bfba3(param_1,puVar32,0,2);
  puVar1 = local_4c8;
  cVar6 = *(char *)(uVar36 + 0x68);
  puVar32 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar40 = puVar32 + 8;
  if (*(undefined8 **)(param_1 + 0x78) < puVar40) {
    FUN_140023dd8(local_4c8,0x48);
    puVar32 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar40 = puVar32 + 8;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar40;
  puVar32[1] = *(undefined8 *)(uVar36 + 8);
  puVar32[2] = 0;
  *(undefined1 *)(puVar32 + 3) = 2;
  *(undefined8 *)((longlong)puVar32 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar32 + 5) = 0;
  *puVar32 = &PTR_FUN_14a1fb3e8;
  *(byte *)(puVar32 + 6) = cVar6 >> 7 & 0x1c;
  *(undefined2 *)((longlong)puVar32 + 0x31) = 0;
  puVar32[7] = uVar36;
  iVar26 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar26 + 1U;
  local_3c0 = uVar39;
  if (*(uint *)(param_1 + 0x1a4) < iVar26 + 1U) {
    FUN_1447568fc(local_4c0,iVar26);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar26 * 8) = puVar32;
  *(int *)((longlong)puVar32 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  local_3f8 = uVar35;
  FUN_1405bfba3(param_1,puVar32,0,2);
  local_400 = param_10[0xf];
  lVar14 = 10;
  do {
    *(undefined8 *)(local_158 + lVar14 + 6) = 0;
    *(undefined2 *)((longlong)&uStack_14a + lVar14) = 0xffff;
    *(undefined1 *)((longlong)&local_148 + lVar14) = 0;
    lVar14 = lVar14 + 0x10;
  } while (lVar14 != 0x8a);
  local_388 = &local_148;
  local_380 = 8;
  uVar9 = FUN_144b16ab8(param_4);
  lVar23 = DAT_14ca97170;
  lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar26 = *(int *)(lVar14 + 0xc60);
  if (((iVar26 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar26 == 2)) {
    uVar22 = 0;
  }
  else if (iVar26 == 1) {
    DVar12 = FUN_140ad26c0();
    DVar13 = GetCurrentThreadId();
    uVar22 = (ulonglong)(DVar12 != DVar13);
  }
  else {
    uVar22 = 1;
  }
  if ((0 < *(int *)(lVar23 + uVar22 * 4)) && (local_470[1] != 0)) {
    lVar23 = (ulonglong)uVar9 * 0x10;
    (&local_148)[(ulonglong)uVar9 * 2] = *(undefined8 *)(local_470[1] + 0x51c0);
    *(undefined2 *)(auStack_13e + lVar23 + -2) = 0xffff;
    auStack_13e[lVar23] = 0;
    uVar9 = uVar9 + 1;
  }
  local_3e8 = (int *)(lVar14 + 0xc60);
  lVar14 = 0x12;
  do {
    *(undefined1 (*) [16])(auStack_25a + lVar14) = (undefined1  [16])0x0;
    *(undefined4 *)(local_248 + lVar14 + -2) = 0xffff0000;
    lVar14 = lVar14 + 0x18;
  } while (lVar14 != 0xd2);
  local_170 = 0xffffffff;
  uStack_16c = 0xffffffff;
  uStack_168 = 0xffffffff;
  uStack_164 = 0xffffffff;
  local_160 = 0;
  local_15c = 0;
  local_158._0_8_ = 0;
  if (0 < (int)uVar9) {
    puVar24 = (undefined2 *)((longlong)&local_238 + 2);
    lVar14 = 0;
    do {
      uVar3 = *(undefined2 *)(auStack_13e + lVar14 + -2);
      *(undefined8 *)(puVar24 + -9) = *(undefined8 *)((longlong)&local_148 + lVar14);
      *(undefined8 *)(puVar24 + -5) = 0;
      puVar24[-1] = 1;
      *puVar24 = uVar3;
      lVar14 = lVar14 + 0x10;
      puVar24 = puVar24 + 0xc;
    } while ((ulonglong)uVar9 << 4 != lVar14);
  }
  local_178 = param_5[0x1a];
  local_188 = param_5[0x18];
  lStack_180 = param_5[0x19];
  local_258 = (undefined1 *)0x0;
  local_250 = (undefined1  [8])0x800000000;
  local_428 = uVar36;
  if ((DAT_14c76085c == 0) ||
     ((*(byte *)((longlong)&DAT_14ca814c8 + (ulonglong)DAT_14ca85550 * 0x3c + 2) & 0x20) == 0)) {
    local_250._0_4_ = 0;
  }
  else {
    lVar14 = 0;
    do {
      lVar23 = *param_5;
      if (lVar23 != 0) {
        uVar9 = (uint)*(undefined8 *)(lVar23 + 0x60);
        uVar11 = local_250._0_4_;
        if (((uVar9 >> 0x10 & 1) == 0) || ((uVar9 >> 0x1a & 1) != 0)) {
          lVar23 = 0;
        }
        else if (((uint)local_490[2] >> ((uint)lVar14 & 0x1f) & 1) == 0) {
          lVar23 = 0;
        }
        auVar4 = (undefined1  [8])CONCAT44(local_250._4_4_,local_250._0_4_ + 1);
        if ((uint)local_250._4_4_ < local_250._0_4_ + 1) {
          uVar22 = (ulonglong)local_250 & 0xffffffff;
          local_250 = auVar4;
          FUN_14726bf36(local_298,uVar22);
          auVar4 = local_250;
        }
        local_250 = auVar4;
        puVar15 = local_258;
        if (local_258 == (undefined1 *)0x0) {
          puVar15 = local_298;
        }
        *(longlong *)(puVar15 + (longlong)(int)uVar11 * 8) = lVar23;
      }
      lVar14 = lVar14 + 1;
      param_5 = param_5 + 3;
    } while (lVar14 != 8);
    piVar29 = local_490;
  }
  puVar15 = local_298;
  if (local_258 != (undefined1 *)0x0) {
    puVar15 = local_258;
  }
  local_3b8 = 0;
  puStack_3b0 = (undefined8 *)0x0;
  local_3a8 = 0;
  uStack_3a0 = 0;
  local_398 = 0;
  uVar22 = local_428;
  if (piVar29[1] != 0) {
    local_4b0 = local_378;
    local_4a0 = (ulonglong)local_378 >> 0x20;
    local_4b8 = local_370;
    local_4a8 = (longlong *)(local_370 >> 0x20);
    local_2e8 = (undefined8 **)0x0;
    local_2e0 = 0x800000000;
    if ((int)local_250._0_4_ < 1) {
      uVar9 = 0;
    }
    else {
      uVar35 = (ulonglong)(uint)local_250._0_4_;
      uVar22 = 0;
      uVar9 = 0;
      do {
        uVar39 = local_2e0;
        if (*(longlong *)(puVar15 + uVar22 * 8) != 0) {
          lVar14 = (longlong)(int)local_2e0;
          uVar10 = (int)local_2e0 + 1;
          local_2e0 = CONCAT44(local_2e0._4_4_,uVar10);
          if (local_2e0._4_4_ < uVar10) {
            FUN_14726bf36(&local_328,uVar39 & 0xffffffff);
          }
          uVar9 = uVar9 | 1 << ((uint)uVar22 & 0x1f);
          ppuVar18 = local_2e8;
          if (local_2e8 == (undefined8 **)0x0) {
            ppuVar18 = &local_328;
          }
          ppuVar18[lVar14] = *(undefined8 **)(puVar15 + uVar22 * 8);
        }
        uVar22 = uVar22 + 1;
      } while (uVar35 != uVar22);
    }
    iVar34 = DAT_14ca19734;
    iVar26 = *piVar29;
    local_47c = iVar26 + 1;
    uVar22 = (ulonglong)(iVar26 + (uint)(local_47c == 0)) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_418 = (int)local_4b8 - (uint)local_4b0;
    local_41c = (int)local_4a8 - (uint)local_4a0;
    local_440 = (undefined8 *)0x40;
    if (DAT_14ca19c78 == 0) {
      local_440 = (undefined8 *)0x10;
    }
    uVar10 = iVar26 + 0x7f;
    if (-1 < (int)(iVar26 + 0x40U)) {
      uVar10 = iVar26 + 0x40U;
    }
    local_438 = (ulonglong)uVar10;
    uVar38 = 0x10 << ((byte)lVar14 & 0x1f);
    iVar26 = local_418 * local_41c;
    local_4e0 = (longlong)piVar29[0x10] << 4;
    local_4e8 = *(int **)(piVar29 + 0xe);
    local_4d8 = 0;
    local_478 = CONCAT44(local_478._4_4_,1 << ((byte)lVar14 & 0x1f));
    uVar16 = FUN_144942e63(param_1,L"Nanite.ShadingBinMeta",0x10);
    puVar1 = local_4c8;
    uVar10 = uVar38 + iVar26 * 8 >> 2;
    uVar31 = 4;
    if (DAT_14ca84e48 < 4) {
      uVar31 = DAT_14ca84e48;
    }
    local_a8._0_4_ = uVar31 + (uVar31 == 0);
    uStack_a0._0_4_ = 0x10119;
    if (DAT_14ca84e48 <= uVar10) {
      uVar10 = DAT_14ca84e48;
    }
    local_98 = 0;
    uStack_97 = 0;
    local_a8._4_4_ = uVar10 + (uVar10 == 0);
    uVar35 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
    uVar22 = uVar35 + 0x150;
    local_448 = (ulonglong)uVar38;
    local_398 = uVar38;
    if (*(ulonglong *)(param_1 + 0x78) < uVar22) {
      FUN_140023dd8(local_4c8,0x160);
      uVar35 = *puVar1 + 0xf & 0xfffffffffffffff0;
      uVar22 = uVar35 + 0x150;
    }
    *(ulonglong *)(param_1 + 0x70) = uVar22;
    FUN_1456bd266(uVar35,L"Nanite.ShadingBinData",&local_a8,0);
    iVar26 = *(int *)(param_1 + 400);
    *(uint *)(param_1 + 400) = iVar26 + 1U;
    if (*(uint *)(param_1 + 0x194) < iVar26 + 1U) {
      FUN_144737178(local_460,iVar26);
    }
    uVar22 = local_448;
    *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar26 * 8) = uVar35;
    *(int *)(uVar35 + 0x7c) = *(int *)(param_1 + 400) + -1;
    local_4e0 = local_448 & 0xffffffff;
    local_4e8 = (int *)0x0;
    local_3b8 = uVar35;
    FUN_143211d72(param_1,uVar35,0,uVar16);
    puVar1 = local_4c8;
    uVar31 = (uint)(uVar22 >> 2) & 0x3fffffff;
    uVar10 = 4;
    if (DAT_14ca84e48 < 4) {
      uVar10 = DAT_14ca84e48;
    }
    local_a8._0_4_ = uVar10 + (uVar10 == 0);
    if (DAT_14ca84e48 <= uVar31) {
      uVar31 = DAT_14ca84e48;
    }
    uStack_a0._0_4_ = 0x10199;
    local_98 = 0;
    uStack_97 = 0;
    local_a8._4_4_ = uVar31 + (uVar31 == 0);
    puVar32 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar40 = puVar32 + 0x2a;
    if (*(undefined8 **)(param_1 + 0x78) < puVar40) {
      FUN_140023dd8(local_4c8,0x160);
      puVar32 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar40 = puVar32 + 0x2a;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar40;
    FUN_1456bd266(puVar32,L"Nanite.ShadingBinArgs",&local_a8,0);
    iVar26 = *(int *)(param_1 + 400);
    *(uint *)(param_1 + 400) = iVar26 + 1U;
    if (*(uint *)(param_1 + 0x194) < iVar26 + 1U) {
      FUN_144737178(local_460,iVar26);
    }
    puVar1 = local_4c8;
    *(undefined8 **)(*(longlong *)(param_1 + 0x188) + (longlong)iVar26 * 8) = puVar32;
    *(int *)((longlong)puVar32 + 0x7c) = *(int *)(param_1 + 400) + -1;
    puStack_3b0 = puVar32;
    if (iVar34 == 0) {
      uVar22 = 0;
    }
    else {
      uVar10 = 0x10;
      if (DAT_14ca84e48 < 0x10) {
        uVar10 = DAT_14ca84e48;
      }
      local_98 = 0;
      uStack_97 = 0;
      local_a8._0_4_ = uVar10 + (uVar10 == 0);
      local_a8._4_4_ = 1;
      uStack_a0._0_4_ = 0x10109;
      uVar22 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
      uVar39 = uVar22 + 0x150;
      if (*(ulonglong *)(param_1 + 0x78) < uVar39) {
        FUN_140023dd8(local_4c8,0x160);
        uVar22 = *puVar1 + 0xf & 0xfffffffffffffff0;
        uVar39 = uVar22 + 0x150;
      }
      *(ulonglong *)(param_1 + 0x70) = uVar39;
      FUN_1456bd266(uVar22,L"Nanite.ShadingBinStats",&local_a8,0);
      iVar26 = *(int *)(param_1 + 400);
      *(uint *)(param_1 + 400) = iVar26 + 1U;
      if (*(uint *)(param_1 + 0x194) < iVar26 + 1U) {
        FUN_144737178(local_460,iVar26);
      }
      *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar26 * 8) = uVar22;
      *(int *)(uVar22 + 0x7c) = *(int *)(param_1 + 400) + -1;
    }
    puVar1 = local_4c8;
    local_430 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar40 = local_430 + 8;
    local_3a8 = uVar22;
    if (*(undefined8 **)(param_1 + 0x78) < puVar40) {
      FUN_140023dd8(local_4c8,0x48);
      local_430 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar40 = local_430 + 8;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar40;
    local_430[1] = puVar32[1];
    local_430[2] = 0;
    *(undefined1 *)(local_430 + 3) = 2;
    *(undefined8 *)((longlong)local_430 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(local_430 + 5) = 0;
    *local_430 = &PTR_FUN_14a1fb3e8;
    *(undefined2 *)(local_430 + 6) = 0x1c;
    *(undefined1 *)((longlong)local_430 + 0x32) = 0;
    local_430[7] = puVar32;
    iVar26 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar26 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar26 + 1U) {
      FUN_1447568fc(local_4c0,iVar26);
    }
    puVar1 = local_4c8;
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar26 * 8) = local_430;
    *(int *)((longlong)local_430 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    cVar6 = *(char *)(uVar35 + 0x68);
    local_498 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar40 = local_498 + 8;
    if (*(undefined8 **)(param_1 + 0x78) < puVar40) {
      FUN_140023dd8(local_4c8,0x48);
      local_498 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar40 = local_498 + 8;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar40;
    local_498[1] = *(undefined8 *)(uVar35 + 8);
    local_498[2] = 0;
    *(undefined1 *)(local_498 + 3) = 2;
    *(undefined8 *)((longlong)local_498 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(local_498 + 5) = 0;
    *local_498 = &PTR_FUN_14a1fb3e8;
    *(byte *)(local_498 + 6) = cVar6 >> 7 & 0x1c;
    *(undefined2 *)((longlong)local_498 + 0x31) = 0;
    local_498[7] = uVar35;
    iVar26 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar26 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar26 + 1U) {
      FUN_1447568fc(local_4c0,iVar26);
    }
    puVar1 = local_4c8;
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar26 * 8) = local_498;
    *(int *)((longlong)local_498 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    if (iVar34 == 0) {
      puVar40 = (undefined8 *)0x0;
    }
    else {
      cVar6 = *(char *)(uVar22 + 0x68);
      puVar40 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar32 = puVar40 + 8;
      if (*(undefined8 **)(param_1 + 0x78) < puVar32) {
        FUN_140023dd8(local_4c8,0x48);
        puVar40 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar32 = puVar40 + 8;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar32;
      puVar40[1] = *(undefined8 *)(uVar22 + 8);
      puVar40[2] = 0;
      *(undefined1 *)(puVar40 + 3) = 2;
      *(undefined8 *)((longlong)puVar40 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar40 + 5) = 0;
      *puVar40 = &PTR_FUN_14a1fb3e8;
      *(byte *)(puVar40 + 6) = cVar6 >> 7 & 0x1c;
      *(undefined2 *)((longlong)puVar40 + 0x31) = 0;
      puVar40[7] = uVar22;
      iVar26 = *(int *)(param_1 + 0x1a0);
      *(uint *)(param_1 + 0x1a0) = iVar26 + 1U;
      if (*(uint *)(param_1 + 0x1a4) < iVar26 + 1U) {
        FUN_1447568fc(local_4c0,iVar26);
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar26 * 8) = puVar40;
      *(int *)((longlong)puVar40 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    }
    puVar1 = local_4c8;
    uVar10 = 0xc;
    if (DAT_14ca84e48 < 0xc) {
      uVar10 = DAT_14ca84e48;
    }
    local_a8._0_4_ = uVar10 + (uVar10 == 0);
    uStack_a0._0_4_ = 0x10109;
    uVar10 = DAT_14ca84e48;
    if ((uint)local_478 < DAT_14ca84e48) {
      uVar10 = (uint)local_478;
    }
    local_98 = 0;
    uStack_97 = 0;
    local_a8._4_4_ = uVar10 + (uVar10 == 0);
    uVar35 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
    uVar22 = uVar35 + 0x150;
    if (*(ulonglong *)(param_1 + 0x78) < uVar22) {
      FUN_140023dd8(local_4c8,0x160);
      uVar35 = *puVar1 + 0xf & 0xfffffffffffffff0;
      uVar22 = uVar35 + 0x150;
    }
    *(ulonglong *)(param_1 + 0x70) = uVar22;
    FUN_1456bd266(uVar35,L"Nanite.ShadingBinScatterMeta",&local_a8,0);
    iVar26 = *(int *)(param_1 + 400);
    *(uint *)(param_1 + 400) = iVar26 + 1U;
    if (*(uint *)(param_1 + 0x194) < iVar26 + 1U) {
      FUN_144737178(local_460,iVar26);
    }
    puVar1 = local_4c8;
    *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar26 * 8) = uVar35;
    *(int *)(uVar35 + 0x7c) = *(int *)(param_1 + 400) + -1;
    cVar6 = *(char *)(uVar35 + 0x68);
    local_408 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar32 = local_408 + 8;
    if (*(undefined8 **)(param_1 + 0x78) < puVar32) {
      FUN_140023dd8(local_4c8,0x48);
      local_408 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar32 = local_408 + 8;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar32;
    local_408[1] = *(undefined8 *)(uVar35 + 8);
    local_408[2] = 0;
    *(undefined1 *)(local_408 + 3) = 2;
    *(undefined8 *)((longlong)local_408 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(local_408 + 5) = 0;
    *local_408 = &PTR_FUN_14a1fb3e8;
    *(byte *)(local_408 + 6) = cVar6 >> 7 & 0x1c;
    *(undefined2 *)((longlong)local_408 + 0x31) = 0;
    local_408[7] = uVar35;
    iVar26 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar26 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar26 + 1U) {
      FUN_1447568fc(local_4c0,iVar26);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar26 * 8) = local_408;
    *(int *)((longlong)local_408 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    local_478 = CONCAT44(local_478._4_4_,iVar34);
    if (iVar34 != 0) {
      FUN_1405bfba3(param_1,puVar40,0,2);
    }
    iVar26 = (int)local_2e0;
    local_488 = FUN_142e52bc0();
    puVar1 = local_4c8;
    local_44c = iVar26;
    uVar10 = 0xfffffff8;
    if (iVar26 < 1) {
      uVar10 = (uint)(local_488 == 0) * 2 | 0xfffffffc;
    }
    uVar31 = uVar10 & (uint)local_4a0;
    uVar10 = uVar10 & (uint)local_4b0;
    local_484 = (int)local_440;
    local_480 = (int)(~uVar31 + (int)local_4a8 + local_484) / local_484;
    local_484 = (int)(~uVar10 + (int)local_4b8 + local_484) / local_484;
    puVar37 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar32 = puVar37 + 0x18;
    if (*(undefined8 **)(param_1 + 0x78) < puVar32) {
      FUN_140023dd8(local_4c8,0xd0);
      puVar37 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar32 = puVar37 + 0x18;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar32;
    *puVar37 = &PTR_FUN_14a2a0bb8;
    local_458 = param_1 + 0x98;
    puVar37[8] = 0;
    puVar37[9] = 0;
    puVar37[10] = 0;
    puVar37[0xb] = 0;
    puVar37[0xc] = 0;
    puVar37[0xd] = 0;
    puVar37[0xe] = 0;
    puVar37[0xf] = 0;
    puVar37[0x10] = 0;
    puVar37[0x11] = 0;
    puVar37[0x12] = 0;
    puVar37[0x13] = 0;
    puVar37[0x14] = 0;
    puVar37[0x15] = 0;
    puVar37[0x16] = 0;
    iVar26 = *(int *)(param_1 + 0xa0);
    *(uint *)(param_1 + 0xa0) = iVar26 + 1U;
    if (*(uint *)(param_1 + 0xa4) < iVar26 + 1U) {
      FUN_1448cfae8(local_458,iVar26);
    }
    iVar5 = local_44c;
    iVar34 = local_47c;
    local_3f0 = (undefined8 *)CONCAT44(uVar31,uVar10);
    *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar26 * 8) = puVar37;
    *(int *)(puVar37 + 2) = (int)local_4b0;
    *(int *)((longlong)puVar37 + 0x14) = (int)local_4a0;
    *(int *)(puVar37 + 3) = (int)local_4b8;
    *(int *)((longlong)puVar37 + 0x1c) = (int)local_4a8;
    puVar32 = local_4b0;
    if (0 < local_44c) {
      puVar32 = local_3f0;
    }
    *(uint *)(puVar37 + 4) = uVar9;
    puVar37[5] = puVar32;
    *(int *)(puVar37 + 6) = local_47c;
    *(int *)((longlong)puVar37 + 0x34) = (int)local_448;
    local_440 = puVar40;
    uVar11 = FUN_142e52bc0();
    *(undefined4 *)(puVar37 + 7) = uVar11;
    *(undefined4 *)((longlong)puVar37 + 0x3c) = 0;
    uVar16 = FUN_142e52c75(param_1,param_8);
    lVar14 = uStack_340;
    puVar32 = local_498;
    puVar37[8] = uVar16;
    puVar37[10] = DAT_14c9c0d80;
    puVar37[9] = param_10[0xc];
    puVar37[0x14] = local_498;
    puVar37[0x15] = local_430;
    local_338 = 0 < iVar5;
    uStack_340 = CONCAT71(uStack_340._1_7_,(uint)local_478 != 0);
    uVar16 = uStack_340;
    puVar40 = puVar37 + 2;
    local_448 = CONCAT71(local_448._1_7_,(uint)local_478 != 0);
    local_348 = (undefined4 *)((ulonglong)(0 < DAT_14ca19c78) << 0x20);
    uStack_340._5_3_ = SUB83(lVar14,5);
    uStack_340._0_4_ = (undefined4)uVar16;
    uStack_340._0_5_ = CONCAT14(local_488 != 0,(undefined4)uStack_340);
    local_488 = CONCAT31(local_488._1_3_,local_488 != 0);
    local_334 = 1;
    if (1 < (int)local_2e0) {
      local_334 = (int)local_2e0;
    }
    FUN_1401d714c(*(undefined8 *)(param_8 + 0x13818),&local_360);
    if (iVar5 < 1) {
      FUN_14156b826();
      local_a8._0_4_ = 0;
      local_a8._4_4_ = 0;
      uStack_a0._0_4_ = 0;
      uStack_a0._4_4_ = 0;
      FUN_1448f70da(CONCAT44(uStack_35c,local_360),&DAT_14ca1b4d0,puVar40,&local_a8);
      local_a8._0_4_ = 0x4ca1b4d0;
      local_a8._4_4_ = 1;
      local_98 = (undefined1)local_360;
      uStack_97 = (undefined7)(CONCAT44(uStack_35c,local_360) >> 8);
      local_88 = (undefined8 *)CONCAT44(local_480,local_484);
      local_80 = (undefined8 *)CONCAT44(local_80._4_4_,1);
      uStack_a0 = puVar40;
      FUN_14177329c(param_1,&local_c8,puVar40,&local_a8);
    }
    else {
      lVar14 = param_8;
      iVar26 = (int)local_2e0;
      local_410 = puVar40;
      if (0 < (int)local_2e0) {
        lVar14 = 0;
        lVar23 = 0;
        do {
          puVar1 = local_4c8;
          ppuVar18 = local_2e8;
          if (local_2e8 == (undefined8 **)0x0) {
            ppuVar18 = &local_328;
          }
          puVar32 = ppuVar18[lVar23];
          uVar7 = *(undefined1 *)((longlong)puVar32 + 0x94);
          puVar28 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
          puVar40 = puVar28 + 9;
          if (*(undefined8 **)(param_1 + 0x78) < puVar40) {
            FUN_140023dd8(local_4c8,0x50);
            puVar28 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
            puVar40 = puVar28 + 9;
          }
          *(undefined8 **)(param_1 + 0x70) = puVar40;
          puVar28[1] = puVar32[1];
          puVar28[2] = 0;
          *(undefined1 *)(puVar28 + 3) = 0;
          *(undefined8 *)((longlong)puVar28 + 0x1c) = 0xffffffffffffffff;
          *(undefined1 *)(puVar28 + 5) = 0;
          *puVar28 = &PTR_FUN_14a1fb948;
          *(undefined1 *)(puVar28 + 6) = uVar7;
          *(undefined1 *)((longlong)puVar28 + 0x31) = 0;
          *(undefined4 *)((longlong)puVar28 + 0x32) = 0;
          *(undefined1 *)((longlong)puVar28 + 0x36) = 6;
          *(undefined1 *)(puVar28 + 7) = 0;
          puVar28[8] = puVar32;
          iVar26 = *(int *)(param_1 + 0x1a0);
          *(uint *)(param_1 + 0x1a0) = iVar26 + 1U;
          if (*(uint *)(param_1 + 0x1a4) < iVar26 + 1U) {
            FUN_1447568fc(local_4c0,iVar26);
          }
          *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar26 * 8) = puVar28;
          *(int *)((longlong)puVar28 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
          puVar37[lVar23 + 0xb] = puVar28;
          lVar23 = lVar23 + 1;
          iVar34 = local_47c;
          iVar26 = (int)local_2e0;
        } while (lVar23 < (int)local_2e0);
      }
      bVar42 = DAT_14c760860 != 0;
      iStack_c4 = local_360;
      uStack_c0 = uStack_35c;
      uStack_bc = uStack_358;
      uStack_b8 = uStack_354;
      FUN_14156b826();
      FUN_140069376(param_1);
      puVar40 = local_410;
      puVar1 = local_4c8;
      uVar27 = (undefined6)((ulonglong)lVar14 >> 0x10);
      uVar11 = (undefined4)CONCAT62(uVar27,2);
      if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
         ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
        uVar11 = (undefined4)CONCAT62(uVar27,4);
      }
      puVar37 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar32 = puVar37 + 0x3d;
      if (*(undefined8 **)(param_1 + 0x78) < puVar32) {
        FUN_140023dd8(local_4c8,0x1f0);
        puVar37 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar32 = puVar37 + 0x3d;
      }
      *local_4c8 = (ulonglong)puVar32;
      local_a8._0_4_ = (int)puVar40;
      local_a8._4_4_ = (int)((ulonglong)puVar40 >> 0x20);
      uStack_a0._0_4_ = (undefined4)DAT_14ca1b518;
      uStack_a0._4_4_ = (undefined4)((ulonglong)DAT_14ca1b518 >> 0x20);
      if (DAT_14ca1b518 != 0) {
        LOCK();
        *(int *)(DAT_14ca1b518 + 8) = *(int *)(DAT_14ca1b518 + 8) + 1;
        UNLOCK();
      }
      local_98 = 0xd0;
      uStack_97 = 0x14ca1b4;
      local_4e8 = (int *)CONCAT71(local_4e8._1_7_,2);
      FUN_140068f1a(puVar37,&local_361,&local_a8,uVar11);
      *puVar37 = &PTR_FUN_14a2a0bc0;
      *(int *)(puVar37 + 0x37) = local_484;
      *(int *)((longlong)puVar37 + 0x1bc) = local_480;
      *(undefined4 *)(puVar37 + 0x38) = 1;
      *(ulonglong *)((longlong)puVar37 + 0x1c4) = CONCAT44(iStack_c4,local_c8);
      *(ulonglong *)((longlong)puVar37 + 0x1cc) = CONCAT44(uStack_bc,uStack_c0);
      *(undefined4 *)((longlong)puVar37 + 0x1d4) = uStack_b8;
      puVar37[0x3b] = puVar40;
      *(int *)(puVar37 + 0x3c) = iVar26;
      *(bool *)((longlong)puVar37 + 0x1e4) = bVar42;
      *(undefined2 *)((longlong)puVar37 + 0x1e5) = local_34b;
      *(undefined1 *)((longlong)puVar37 + 0x1e7) = local_349;
      iVar26 = *(int *)(param_1 + 0x170);
      *(uint *)(param_1 + 0x170) = iVar26 + 1U;
      if (*(uint *)(param_1 + 0x174) < iVar26 + 1U) {
        FUN_14470e57a(param_1 + 0x168,iVar26);
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar26 * 8) = puVar37;
      *(int *)((longlong)puVar37 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
      FUN_140069100(param_1,puVar37);
      puVar32 = local_498;
    }
    puVar40 = local_430;
    puVar1 = local_4c8;
    uVar9 = 4;
    if (DAT_14ca84e48 < 4) {
      uVar9 = DAT_14ca84e48;
    }
    local_98 = 0;
    uStack_97 = 0;
    local_a8._0_4_ = uVar9 + (uVar9 == 0);
    local_a8._4_4_ = 1;
    uStack_a0._0_4_ = 0x10109;
    uVar35 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
    uVar22 = uVar35 + 0x150;
    if (*(ulonglong *)(param_1 + 0x78) < uVar22) {
      FUN_140023dd8(local_4c8,0x160);
      uVar35 = *puVar1 + 0xf & 0xfffffffffffffff0;
      uVar22 = uVar35 + 0x150;
    }
    *(ulonglong *)(param_1 + 0x70) = uVar22;
    FUN_1456bd266(uVar35,L"Nanite.ShadingBinAllocator",&local_a8,0);
    iVar26 = *(int *)(param_1 + 400);
    *(uint *)(param_1 + 400) = iVar26 + 1U;
    if (*(uint *)(param_1 + 0x194) < iVar26 + 1U) {
      FUN_144737178(local_460,iVar26);
    }
    puVar1 = local_4c8;
    *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar26 * 8) = uVar35;
    *(int *)(uVar35 + 0x7c) = *(int *)(param_1 + 400) + -1;
    puVar28 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar37 = puVar28 + 8;
    if (*(undefined8 **)(param_1 + 0x78) < puVar37) {
      FUN_140023dd8(local_4c8,0x48);
      puVar28 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar37 = puVar28 + 8;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar37;
    puVar28[1] = *(undefined8 *)(uVar35 + 8);
    puVar28[2] = 0;
    *(undefined1 *)(puVar28 + 3) = 2;
    *(undefined8 *)((longlong)puVar28 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar28 + 5) = 0;
    *puVar28 = &PTR_FUN_14a1fb3e8;
    *(undefined2 *)(puVar28 + 6) = 0x1c;
    *(undefined1 *)((longlong)puVar28 + 0x32) = 0;
    puVar28[7] = uVar35;
    iVar26 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar26 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar26 + 1U) {
      FUN_1447568fc(local_4c0,iVar26);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar26 * 8) = puVar28;
    *(int *)((longlong)puVar28 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    FUN_1405bfba3(param_1,puVar28,0,2);
    puVar1 = local_4c8;
    puVar41 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar37 = puVar41 + 8;
    if (*(undefined8 **)(param_1 + 0x78) < puVar37) {
      FUN_140023dd8(local_4c8,0x50);
      puVar41 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar37 = puVar41 + 8;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar37;
    *puVar41 = &PTR_FUN_14a2a0bf8;
    puVar41[3] = 0;
    puVar41[4] = 0;
    puVar41[5] = 0;
    puVar41[6] = 0;
    puVar41[7] = 0;
    iVar26 = *(int *)(param_1 + 0xa0);
    *(uint *)(param_1 + 0xa0) = iVar26 + 1U;
    if (*(uint *)(param_1 + 0xa4) < iVar26 + 1U) {
      FUN_1448cfae8(local_458,iVar26);
    }
    bVar42 = (uint)local_478 != 0;
    *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar26 * 8) = puVar41;
    puVar37 = puVar41 + 2;
    *(int *)(puVar41 + 2) = iVar34;
    *(uint *)((longlong)puVar41 + 0x14) = local_398;
    puVar41[4] = puVar32;
    puVar41[5] = puVar28;
    puVar41[6] = puVar40;
    puVar41[3] = local_440;
    puVar41[7] = local_408;
    uVar16 = *(undefined8 *)(param_8 + 0x13818);
    FUN_141573f4a();
    FUN_1448e935e(uVar16,&local_a8,&DAT_14ca19f90,bVar42);
    FUN_141573f4a();
    uVar16 = CONCAT44(local_a8._4_4_,(int)local_a8);
    uVar17 = CONCAT44(uStack_a0._4_4_,(undefined4)uStack_a0);
    FUN_14157406c();
    local_a8._0_4_ = 0;
    local_a8._4_4_ = 0;
    uStack_a0._0_4_ = 0;
    uStack_a0._4_4_ = 0;
    FUN_1448f70da(uVar16,&DAT_14ca1b558,puVar37,&local_a8);
    FUN_140069376(param_1);
    puVar1 = local_4c8;
    uVar27 = (undefined6)((ulonglong)puVar32 >> 0x10);
    uVar22 = CONCAT62(uVar27,2);
    iVar26 = (int)local_438;
    if (((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) &&
       ((DAT_14c760ddc == 2 && ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))))) {
      uVar22 = CONCAT62(uVar27,4);
    }
    puVar32 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar40 = puVar32 + 0x3d;
    if (*(undefined8 **)(param_1 + 0x78) < puVar40) {
      FUN_140023dd8(local_4c8,0x1f0);
      iVar26 = (int)local_438;
      puVar32 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar40 = puVar32 + 0x3d;
    }
    *local_4c8 = (ulonglong)puVar40;
    uStack_a0._0_4_ = (undefined4)DAT_14ca1b5a0;
    uStack_a0._4_4_ = (undefined4)((ulonglong)DAT_14ca1b5a0 >> 0x20);
    if (DAT_14ca1b5a0 != 0) {
      LOCK();
      *(int *)(DAT_14ca1b5a0 + 8) = *(int *)(DAT_14ca1b5a0 + 8) + 1;
      UNLOCK();
    }
    local_98 = 0x58;
    uStack_97 = 0x14ca1b5;
    local_4e8 = (int *)CONCAT71(local_4e8._1_7_,2);
    local_a8 = puVar37;
    FUN_140068f1a(puVar32,&local_348,&local_a8,uVar22 & 0xffffffff);
    *puVar32 = &PTR_FUN_14a2a0c00;
    puVar32[0x37] = &DAT_14ca1b558;
    puVar32[0x38] = puVar37;
    puVar32[0x39] = uVar16;
    puVar32[0x3a] = uVar17;
    *(int *)(puVar32 + 0x3b) = iVar26 >> 6;
    *(undefined1 **)((longlong)puVar32 + 0x1dc) = &DAT_100000001;
    iVar34 = *(int *)(param_1 + 0x170);
    *(uint *)(param_1 + 0x170) = iVar34 + 1U;
    if (*(uint *)(param_1 + 0x174) < iVar34 + 1U) {
      FUN_14470e57a(param_1 + 0x168,iVar34);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar34 * 8) = puVar32;
    *(int *)((longlong)puVar32 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
    local_478 = param_1 + 0x168;
    FUN_140069100(param_1,puVar32);
    puVar32 = local_498;
    puVar1 = local_4c8;
    puVar37 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar40 = puVar37 + 0x18;
    if (*(undefined8 **)(param_1 + 0x78) < puVar40) {
      FUN_140023dd8(local_4c8,0xd0);
      puVar37 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar40 = puVar37 + 0x18;
    }
    iVar5 = local_47c;
    puVar28 = local_4b0;
    uVar22 = local_4b8;
    *(undefined8 **)(param_1 + 0x70) = puVar40;
    *puVar37 = &PTR_FUN_14a2a0bb8;
    puVar37[8] = 0;
    puVar37[9] = 0;
    puVar37[10] = 0;
    puVar37[0xb] = 0;
    puVar37[0xc] = 0;
    puVar37[0xd] = 0;
    puVar37[0xe] = 0;
    puVar37[0xf] = 0;
    puVar37[0x10] = 0;
    puVar37[0x11] = 0;
    puVar37[0x12] = 0;
    puVar37[0x13] = 0;
    puVar37[0x14] = 0;
    puVar37[0x15] = 0;
    puVar37[0x16] = 0;
    iVar34 = *(int *)(param_1 + 0xa0);
    *(uint *)(param_1 + 0xa0) = iVar34 + 1U;
    if (*(uint *)(param_1 + 0xa4) < iVar34 + 1U) {
      FUN_1448cfae8(local_458,iVar34);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar34 * 8) = puVar37;
    puVar40 = puVar37 + 2;
    *(int *)(puVar37 + 2) = (int)puVar28;
    *(int *)((longlong)puVar37 + 0x14) = (int)local_4a0;
    *(int *)(puVar37 + 3) = (int)uVar22;
    *(int *)((longlong)puVar37 + 0x1c) = (int)local_4a8;
    puVar37[5] = local_3f0;
    *(int *)(puVar37 + 6) = iVar5;
    *(uint *)((longlong)puVar37 + 0x34) = local_398;
    uVar11 = FUN_142e52bc0();
    *(undefined4 *)(puVar37 + 7) = uVar11;
    *(undefined4 *)((longlong)puVar37 + 0x3c) = 0;
    uVar17 = FUN_142e52c75(param_1,param_8);
    uVar16 = uStack_340;
    puVar37[8] = uVar17;
    puVar37[10] = DAT_14c9c0d80;
    puVar37[9] = param_10[0xc];
    puVar37[0x13] = local_440;
    puVar37[0x14] = puVar32;
    puVar37[0x15] = 0;
    puVar37[0x16] = local_408;
    local_348 = (undefined4 *)(ulonglong)CONCAT14(0 < DAT_14ca19c78,2);
    uStack_340 = CONCAT71(uStack_340._1_7_,(undefined1)local_448);
    uVar17 = uStack_340;
    uStack_340._5_3_ = SUB83(uVar16,5);
    uStack_340._0_4_ = (undefined4)uVar17;
    uStack_340._0_5_ = CONCAT14((undefined1)local_488,(undefined4)uStack_340);
    local_338 = 0;
    local_334 = 1;
    FUN_1401d714c(*(undefined8 *)(param_8 + 0x13818),&local_c8);
    FUN_14156b826();
    local_a8._0_4_ = 0;
    local_a8._4_4_ = 0;
    uStack_a0._0_4_ = 0;
    uStack_a0._4_4_ = 0;
    FUN_1448f70da(CONCAT44(iStack_c4,local_c8),&DAT_14ca1b4d0,puVar40,&local_a8);
    local_a8._0_4_ = 0x4ca1b4d0;
    local_a8._4_4_ = 1;
    local_98 = (undefined1)local_c8;
    uStack_97 = (undefined7)(CONCAT44(iStack_c4,local_c8) >> 8);
    uStack_90._0_4_ = uStack_c0;
    uStack_90._4_4_ = uStack_bc;
    local_88 = (undefined8 *)CONCAT44(local_480,local_484);
    local_80 = (undefined8 *)CONCAT44(local_80._4_4_,1);
    uStack_a0 = puVar40;
    FUN_14177329c(param_1,&local_360,puVar40,&local_a8);
    piVar29 = local_490;
    puVar1 = local_4c8;
    if (DAT_14ca19ca8 != 0) {
      puVar32 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar40 = puVar32 + 4;
      if (*(undefined8 **)(param_1 + 0x78) < puVar40) {
        FUN_140023dd8(local_4c8,0x30);
        puVar32 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
        puVar40 = puVar32 + 4;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar40;
      *puVar32 = &PTR_FUN_14a2a0c18;
      puVar32[3] = 0;
      iVar34 = *(int *)(param_1 + 0xa0);
      *(uint *)(param_1 + 0xa0) = iVar34 + 1U;
      if (*(uint *)(param_1 + 0xa4) < iVar34 + 1U) {
        FUN_1448cfae8(local_458,iVar34);
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar34 * 8) = puVar32;
      *(int *)(puVar32 + 2) = iVar5;
      puVar32[3] = local_498;
      FUN_147263246(*(undefined8 *)(param_8 + 0x13818),&local_a8);
      uStack_35c = 1;
      uStack_358 = 1;
      local_4e8 = &local_360;
      local_360 = iVar26 >> 6;
      FUN_1472632b3(param_1,&local_348,&local_a8,puVar32 + 2);
    }
    if (DAT_14caf1b90 == '\0') {
      FUN_145e7ba6a(&DAT_14caf1948);
    }
    local_a8 = (undefined8 *)CONCAT44(local_a8._4_4_,(int)local_a8);
    if ((((0 < local_44c) &&
         (local_a8 = (undefined8 *)CONCAT44(local_a8._4_4_,(int)local_a8), DAT_14caf1b90 == '\x01'))
        && (local_a8 = (undefined8 *)CONCAT44(local_a8._4_4_,(int)local_a8), DAT_14caf1998 != -1))
       && ((DAT_14caf1998 != 0 ||
           (local_a8 = (undefined8 *)CONCAT44(local_a8._4_4_,(int)local_a8), DAT_14caf1b58 == '\0'))
          )) {
      FUN_147263366(*(undefined8 *)(param_8 + 0x13818),&local_348);
      puVar1 = local_4c8;
      uStack_90._0_4_ = DAT_14ca83a68;
      uVar9 = local_418;
      if ((int)DAT_14ca84e40 <= (int)local_418) {
        uVar9 = DAT_14ca84e40;
      }
      if ((int)uVar9 < 2) {
        uVar9 = 1;
      }
      uVar10 = DAT_14ca84e40;
      if ((int)local_41c < (int)DAT_14ca84e40) {
        uVar10 = local_41c;
      }
      uStack_a0._0_4_ = (undefined4)_DAT_14ca83a58;
      uStack_a0._4_4_ = (undefined4)((ulonglong)_DAT_14ca83a58 >> 0x20);
      local_98 = (undefined1)_DAT_14ca83a60;
      uStack_97 = (undefined7)((ulonglong)_DAT_14ca83a60 >> 8);
      uStack_90._4_4_ = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
      local_a8._0_4_ = 0x20008;
      local_a8._4_4_ = 0;
      local_78 = (undefined8 *)CONCAT26(local_78._6_2_,0xff001c000101);
      if ((int)uVar10 < 2) {
        uVar10 = 1;
      }
      local_88 = (undefined8 *)((ulonglong)uVar9 << 0x20);
      local_80 = (undefined8 *)CONCAT44(0x10001,uVar10);
      uVar35 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
      uVar22 = uVar35 + 0x120;
      if (*(ulonglong *)(param_1 + 0x78) < uVar22) {
        FUN_140023dd8(local_4c8,0x128);
        uVar35 = *puVar1 + 7 & 0xfffffffffffffff8;
        uVar22 = uVar35 + 0x120;
      }
      *(ulonglong *)(param_1 + 0x70) = uVar22;
      FUN_1456bbb8c(uVar35,L"Nanite.VisClearMask",&local_a8,0);
      iVar26 = *(int *)(param_1 + 0x180);
      *(uint *)(param_1 + 0x180) = iVar26 + 1U;
      if (*(uint *)(param_1 + 0x184) < iVar26 + 1U) {
        FUN_14472c0f6(param_1 + 0x178,iVar26);
      }
      puVar1 = local_4c8;
      *(ulonglong *)(*(longlong *)(param_1 + 0x178) + (longlong)iVar26 * 8) = uVar35;
      *(int *)(uVar35 + 0x9c) = *(int *)(param_1 + 0x180) + -1;
      local_a8._0_4_ = 0;
      local_a8._4_4_ = 0;
      uStack_a0._0_4_ = 0;
      uStack_a0._4_4_ = 0;
      uVar7 = *(undefined1 *)(uVar35 + 0x94);
      puVar32 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar40 = puVar32 + 9;
      uStack_3a0 = uVar35;
      if (*(undefined8 **)(param_1 + 0x78) < puVar40) {
        FUN_140023dd8(local_4c8,0x50);
        puVar32 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar40 = puVar32 + 9;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar40;
      puVar32[1] = *(undefined8 *)(uVar35 + 8);
      puVar32[2] = 0;
      *(undefined1 *)(puVar32 + 3) = 0;
      *(undefined8 *)((longlong)puVar32 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar32 + 5) = 0;
      *puVar32 = &PTR_FUN_14a1fb948;
      *(undefined1 *)(puVar32 + 6) = uVar7;
      *(undefined1 *)(puVar32 + 7) = 0;
      *(undefined4 *)((longlong)puVar32 + 0x31) = 0;
      *(undefined2 *)((longlong)puVar32 + 0x35) = 0;
      puVar32[8] = uVar35;
      iVar26 = *(int *)(param_1 + 0x1a0);
      *(uint *)(param_1 + 0x1a0) = iVar26 + 1U;
      if (*(uint *)(param_1 + 0x1a4) < iVar26 + 1U) {
        FUN_1447568fc(local_4c0,iVar26);
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar26 * 8) = puVar32;
      *(int *)((longlong)puVar32 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
      FUN_14042f6c6(param_1,puVar32,&local_a8,2);
      if (0 < (int)local_2e0) {
        uVar22 = 0;
        iVar26 = (int)local_2e0;
        uVar9 = DAT_14c760864;
        do {
          puVar1 = local_4c8;
          if ((uVar9 == 0xffffffff) || (uVar22 == uVar9)) {
            puVar32 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
            puVar40 = puVar32 + 6;
            if (*(undefined8 **)(param_1 + 0x78) < puVar40) {
              FUN_140023dd8(local_4c8,0x40);
              puVar32 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
              puVar40 = puVar32 + 6;
            }
            *(undefined8 **)(param_1 + 0x70) = puVar40;
            *puVar32 = &PTR_FUN_14a2a0c38;
            puVar32[4] = 0;
            puVar32[5] = 0;
            iVar26 = *(int *)(param_1 + 0xa0);
            *(uint *)(param_1 + 0xa0) = iVar26 + 1U;
            if (*(uint *)(param_1 + 0xa4) < iVar26 + 1U) {
              FUN_1448cfae8(local_458,iVar26);
            }
            puVar1 = local_4c8;
            *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar26 * 8) = puVar32;
            *(int *)(puVar32 + 2) = (int)local_4b0;
            *(int *)((longlong)puVar32 + 0x14) = (int)local_4a0;
            *(int *)(puVar32 + 3) = (int)local_4b8;
            *(int *)((longlong)puVar32 + 0x1c) = (int)local_4a8;
            ppuVar18 = local_2e8;
            if (local_2e8 == (undefined8 **)0x0) {
              ppuVar18 = &local_328;
            }
            puVar37 = ppuVar18[uVar22];
            uVar7 = *(undefined1 *)((longlong)puVar37 + 0x94);
            puVar28 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
            puVar40 = puVar28 + 9;
            if (*(undefined8 **)(param_1 + 0x78) < puVar40) {
              FUN_140023dd8(local_4c8,0x50);
              puVar28 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
              puVar40 = puVar28 + 9;
            }
            *(undefined8 **)(param_1 + 0x70) = puVar40;
            puVar28[1] = puVar37[1];
            puVar28[2] = 0;
            *(undefined1 *)(puVar28 + 3) = 0;
            *(undefined8 *)((longlong)puVar28 + 0x1c) = 0xffffffffffffffff;
            *(undefined1 *)(puVar28 + 5) = 0;
            *puVar28 = &PTR_FUN_14a1fb948;
            *(undefined1 *)(puVar28 + 6) = uVar7;
            *(undefined1 *)((longlong)puVar28 + 0x31) = 0;
            *(undefined4 *)((longlong)puVar28 + 0x32) = 0;
            *(undefined1 *)((longlong)puVar28 + 0x36) = 6;
            *(undefined1 *)(puVar28 + 7) = 0;
            puVar28[8] = puVar37;
            iVar26 = *(int *)(param_1 + 0x1a0);
            *(uint *)(param_1 + 0x1a0) = iVar26 + 1U;
            if (*(uint *)(param_1 + 0x1a4) < iVar26 + 1U) {
              FUN_1447568fc(local_4c0,iVar26);
            }
            uVar35 = uStack_3a0;
            puVar1 = local_4c8;
            *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar26 * 8) = puVar28;
            *(int *)((longlong)puVar28 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
            puVar32[4] = puVar28;
            uVar7 = *(undefined1 *)(uStack_3a0 + 0x94);
            puVar37 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
            puVar40 = puVar37 + 9;
            if (*(undefined8 **)(param_1 + 0x78) < puVar40) {
              FUN_140023dd8(local_4c8,0x50);
              puVar37 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
              puVar40 = puVar37 + 9;
            }
            *(undefined8 **)(param_1 + 0x70) = puVar40;
            puVar37[1] = *(undefined8 *)(uVar35 + 8);
            puVar37[2] = 0;
            *(undefined1 *)(puVar37 + 3) = 0;
            *(undefined8 *)((longlong)puVar37 + 0x1c) = 0xffffffffffffffff;
            *(undefined1 *)(puVar37 + 5) = 0;
            *puVar37 = &PTR_FUN_14a1fb948;
            *(undefined1 *)(puVar37 + 6) = uVar7;
            *(undefined1 *)(puVar37 + 7) = 0;
            *(undefined4 *)((longlong)puVar37 + 0x31) = 0;
            *(undefined2 *)((longlong)puVar37 + 0x35) = 0;
            puVar37[8] = uVar35;
            iVar26 = *(int *)(param_1 + 0x1a0);
            *(uint *)(param_1 + 0x1a0) = iVar26 + 1U;
            if (*(uint *)(param_1 + 0x1a4) < iVar26 + 1U) {
              FUN_1447568fc(local_4c0,iVar26);
            }
            *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar26 * 8) = puVar37;
            *(int *)((longlong)puVar37 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
            puVar32[5] = puVar37;
            local_c8 = SUB84(local_348,0);
            iStack_c4 = (int)((ulonglong)local_348 >> 0x20);
            uStack_c0 = (uint)uStack_340;
            uStack_bc = (uint)((ulonglong)uStack_340 >> 0x20);
            FUN_147265efc();
            FUN_140069376(param_1);
            puVar1 = local_4c8;
            iVar33 = (int6)(short)((uint)iVar26 >> 0x10);
            uVar11 = (undefined4)CONCAT62(iVar33,2);
            if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
               ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
              uVar11 = (undefined4)CONCAT62(iVar33,4);
            }
            puVar37 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
            puVar40 = puVar37 + 0x3c;
            if (*(undefined8 **)(param_1 + 0x78) < puVar40) {
              FUN_140023dd8(local_4c8,0x1e8);
              puVar37 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
              puVar40 = puVar37 + 0x3c;
            }
            *local_4c8 = (ulonglong)puVar40;
            uStack_a0._0_4_ = (undefined4)DAT_14ca1b430;
            uStack_a0._4_4_ = (undefined4)((ulonglong)DAT_14ca1b430 >> 0x20);
            if (DAT_14ca1b430 != 0) {
              LOCK();
              *(int *)(DAT_14ca1b430 + 8) = *(int *)(DAT_14ca1b430 + 8) + 1;
              UNLOCK();
            }
            local_98 = 0xe8;
            uStack_97 = 0x14ca1b3;
            local_4e8 = (int *)CONCAT71(local_4e8._1_7_,2);
            local_a8 = puVar32 + 2;
            FUN_140068f1a(puVar37,&local_34b,&local_a8,uVar11);
            *puVar37 = &PTR_FUN_14a2a0c40;
            puVar37[0x37] = local_4b0;
            puVar37[0x38] = local_4b8;
            puVar37[0x39] = CONCAT44(iStack_c4,local_c8);
            puVar37[0x3a] = CONCAT44(uStack_bc,uStack_c0);
            puVar37[0x3b] = puVar32 + 2;
            iVar26 = *(int *)(param_1 + 0x170);
            *(uint *)(param_1 + 0x170) = iVar26 + 1U;
            if (*(uint *)(param_1 + 0x174) < iVar26 + 1U) {
              FUN_14470e57a(local_478,iVar26);
            }
            *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar26 * 8) = puVar37;
            *(int *)((longlong)puVar37 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
            FUN_140069100(param_1,puVar37);
            iVar26 = (int)local_2e0;
            uVar9 = DAT_14c760864;
          }
          uVar22 = uVar22 + 1;
        } while ((longlong)uVar22 < (longlong)iVar26);
      }
      piVar29 = local_490;
    }
    uVar22 = local_428;
    if (local_2e8 != (undefined8 **)0x0) {
      FUN_1400020a8();
    }
  }
  puVar1 = local_4c8;
  puVar32 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar40 = puVar32 + 0x14;
  if (*(undefined8 **)(param_1 + 0x78) < puVar40) {
    FUN_140023dd8(local_4c8,0xb0);
    puVar32 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar40 = puVar32 + 0x14;
  }
  lVar14 = local_3e0;
  *(undefined8 **)(param_1 + 0x70) = puVar40;
  *puVar32 = &PTR_FUN_14a2a0918;
  puVar32[2] = 0;
  *(undefined4 *)(puVar32 + 3) = 4;
  puVar32[4] = 0;
  *(undefined1 *)(puVar32 + 5) = 1;
  puVar32[6] = 0;
  *(undefined1 *)(puVar32 + 7) = 1;
  puVar32[8] = 0;
  *(undefined1 *)(puVar32 + 9) = 1;
  puVar32[10] = 0;
  *(undefined1 *)(puVar32 + 0xb) = 1;
  puVar32[0xc] = 0;
  *(undefined1 *)(puVar32 + 0xd) = 1;
  puVar32[0xe] = 0;
  *(undefined1 *)(puVar32 + 0xf) = 1;
  puVar32[0x10] = 0;
  *(undefined1 *)(puVar32 + 0x11) = 1;
  puVar32[0x12] = 0;
  *(undefined1 *)(puVar32 + 0x13) = 1;
  puVar40 = (undefined8 *)(param_1 + 0x98);
  iVar26 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar26 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar26 + 1U) {
    FUN_1448cfae8(puVar40,iVar26);
  }
  puVar1 = local_4c8;
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar26 * 8) = puVar32;
  local_4b8 = CONCAT44(local_4b8._4_4_,piVar29[2]);
  local_4a8 = (longlong *)param_10[0xc];
  local_318 = (undefined *)0x0;
  local_310 = 1;
  local_308 = 0;
  local_300 = 1;
  local_2f8 = 0;
  local_2f0 = 1;
  local_2e8 = (undefined8 **)0x0;
  local_2e0 = CONCAT71(local_2e0._1_7_,1);
  local_2d8 = 0;
  local_2d0 = 1;
  local_2c8 = 0;
  local_2c0 = 1;
  local_2b8 = 0;
  local_2b0 = 1;
  local_2a8 = (undefined8 *)0x0;
  local_2a0 = 1;
  local_328 = puStack_3b0;
  local_320 = CONCAT44(local_320._4_4_,4);
  puVar28 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar37 = puVar28 + 8;
  if (*(undefined8 **)(param_1 + 0x78) < puVar37) {
    FUN_140023dd8(local_4c8,0x50);
    puVar28 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar37 = puVar28 + 8;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar37;
  *puVar28 = &PTR_FUN_14a29acc0;
  iVar26 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar26 + 1U;
  local_4b0 = puVar32;
  if (*(uint *)(param_1 + 0xa4) < iVar26 + 1U) {
    FUN_1448cfae8(puVar40,iVar26);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar26 * 8) = puVar28;
  local_a8 = puVar28 + 2;
  uVar16 = param_10[1];
  puVar28[2] = *param_10;
  puVar28[3] = uVar16;
  *(undefined4 *)(puVar28 + 4) = *(undefined4 *)(param_10 + 3);
  *(undefined4 *)((longlong)puVar28 + 0x24) = *(undefined4 *)(param_10 + 2);
  *(undefined4 *)(puVar28 + 5) = *(undefined4 *)((longlong)param_10 + 0x14);
  *(undefined4 *)((longlong)puVar28 + 0x2c) = *(undefined4 *)((longlong)param_10 + 0x1c);
  *(undefined4 *)(puVar28 + 6) = *(undefined4 *)(param_10 + 4);
  *(undefined4 *)((longlong)puVar28 + 0x34) = *(undefined4 *)((longlong)param_10 + 0x24);
  *(undefined4 *)(puVar28 + 7) = *(undefined4 *)(param_10 + 5);
  *(undefined4 *)((longlong)puVar28 + 0x3c) = *(undefined4 *)((longlong)param_10 + 0x2c);
  local_498 = puVar40;
  FUN_1448cb8bc();
  local_348 = DAT_14ca1a238;
  local_4a0 = param_1 + 0x1a8U;
  ppuVar18 = (undefined8 **)FUN_1401cdd04(param_1 + 0x1a8U,local_4c8,&local_a8);
  FUN_1448cb8bc();
  puVar1 = local_4c8;
  cVar6 = '\x02';
  if (DAT_14ca1a261 != '\x03') {
    cVar6 = DAT_14ca1a261;
  }
  local_2e0 = CONCAT71(local_2e0._1_7_,cVar6);
  puVar32 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar40 = puVar32 + 0x10;
  local_2e8 = ppuVar18;
  if (*(undefined8 **)(param_1 + 0x78) < puVar40) {
    FUN_140023dd8(local_4c8,0x90);
    puVar32 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar40 = puVar32 + 0x10;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar40;
  *puVar32 = &PTR_FUN_14a2a03e8;
  puVar32[3] = 0;
  puVar32[4] = 0;
  puVar32[5] = 0;
  puVar32[6] = 0;
  puVar32[7] = 0;
  puVar32[8] = 0;
  puVar32[9] = 0;
  puVar32[10] = 0;
  puVar32[0xb] = 0;
  puVar32[0xd] = 0;
  puVar32[0xe] = 0;
  puVar32[0xf] = 0;
  iVar26 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar26 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar26 + 1U) {
    FUN_1448cfae8(local_498,iVar26);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar26 * 8) = puVar32;
  uVar7 = 0;
  lVar23 = FUN_144735dd8(param_1,&DAT_14cb00e10,0);
  puVar1 = local_4c8;
  if ((*(byte *)(lVar23 + 0x68) & 0x80) != 0) {
    uVar7 = 0x1c;
  }
  puVar37 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar40 = puVar37 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar40) {
    FUN_140023dd8(local_4c8,0x50);
    puVar37 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar40 = puVar37 + 9;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar40;
  puVar37[1] = *(undefined8 *)(lVar23 + 8);
  puVar37[2] = 0;
  *(undefined1 *)(puVar37 + 3) = 3;
  *(undefined8 *)((longlong)puVar37 + 0x1c) = 0xffffffffffffffff;
  *puVar37 = &PTR_FUN_14a1fb168;
  *(undefined1 *)(puVar37 + 5) = uVar7;
  *(undefined8 *)((longlong)puVar37 + 0x2c) = 0xffffffff00000000;
  puVar37[7] = 0;
  puVar37[8] = lVar23;
  iVar26 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar26 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar26 + 1U) {
    FUN_1447568fc(local_4c0,iVar26);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar26 * 8) = puVar37;
  *(int *)((longlong)puVar37 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar32[3] = puVar37;
  uVar16 = FUN_1417ea8a0(&DAT_14cb00cc8,param_1);
  puVar1 = local_4c8;
  puVar32[5] = uVar16;
  if ((*(byte *)(lVar14 + 0x68) & 0x80) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0x1c;
  }
  puVar37 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar40 = puVar37 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar40) {
    FUN_140023dd8(local_4c8,0x50);
    puVar37 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar40 = puVar37 + 9;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar40;
  puVar37[1] = *(undefined8 *)(lVar14 + 8);
  puVar37[2] = 0;
  *(undefined1 *)(puVar37 + 3) = 3;
  *(undefined8 *)((longlong)puVar37 + 0x1c) = 0xffffffffffffffff;
  *puVar37 = &PTR_FUN_14a1fb168;
  *(undefined1 *)(puVar37 + 5) = uVar7;
  *(undefined8 *)((longlong)puVar37 + 0x2c) = 0xffffffff00000000;
  puVar37[7] = 0;
  puVar37[8] = lVar14;
  iVar26 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar26 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar26 + 1U) {
    FUN_1447568fc(local_4c0,iVar26);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar26 * 8) = puVar37;
  *(int *)((longlong)puVar37 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar32[4] = puVar37;
  *(undefined4 *)(puVar32 + 2) = DAT_14ca19b88;
  uVar16 = FUN_14175efdc(&DAT_14ca1c220,param_1);
  puVar1 = local_4c8;
  puVar32[10] = uVar16;
  puVar32[7] = local_3c8;
  puVar32[8] = local_3d0;
  puVar32[9] = local_3d8;
  puVar32[6] = local_4a8;
  *(undefined4 *)(puVar32 + 0xc) = 0;
  if ((*(byte *)(local_3f8 + 0x68) & 0x80) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0x1c;
  }
  puVar37 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar40 = puVar37 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar40) {
    FUN_140023dd8(local_4c8,0x50);
    puVar37 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar40 = puVar37 + 9;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar40;
  puVar37[1] = *(undefined8 *)(local_3f8 + 8);
  puVar37[2] = 0;
  *(undefined1 *)(puVar37 + 3) = 3;
  *(undefined8 *)((longlong)puVar37 + 0x1c) = 0xffffffffffffffff;
  *puVar37 = &PTR_FUN_14a1fb168;
  *(undefined1 *)(puVar37 + 5) = uVar7;
  *(undefined8 *)((longlong)puVar37 + 0x2c) = 0xffffffff00000000;
  puVar37[7] = 0;
  puVar37[8] = local_3f8;
  iVar26 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar26 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar26 + 1U) {
    FUN_1447568fc(local_4c0,iVar26);
  }
  uVar35 = local_3c0;
  puVar1 = local_4c8;
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar26 * 8) = puVar37;
  *(int *)((longlong)puVar37 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar32[0xd] = puVar37;
  if ((*(byte *)(local_3c0 + 0x68) & 0x80) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0x1c;
  }
  puVar37 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar40 = puVar37 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar40) {
    FUN_140023dd8(local_4c8,0x50);
    puVar37 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar40 = puVar37 + 9;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar40;
  puVar37[1] = *(undefined8 *)(uVar35 + 8);
  puVar37[2] = 0;
  *(undefined1 *)(puVar37 + 3) = 3;
  *(undefined8 *)((longlong)puVar37 + 0x1c) = 0xffffffffffffffff;
  *puVar37 = &PTR_FUN_14a1fb168;
  *(undefined1 *)(puVar37 + 5) = uVar7;
  *(undefined8 *)((longlong)puVar37 + 0x2c) = 0xffffffff00000000;
  puVar37[7] = 0;
  puVar37[8] = uVar35;
  iVar26 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar26 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar26 + 1U) {
    FUN_1447568fc(local_4c0,iVar26);
  }
  puVar1 = local_4c8;
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar26 * 8) = puVar37;
  *(int *)((longlong)puVar37 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar32[0xe] = puVar37;
  if ((*(byte *)(uVar22 + 0x68) & 0x80) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0x1c;
  }
  puVar37 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar40 = puVar37 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar40) {
    FUN_140023dd8(local_4c8,0x50);
    puVar37 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar40 = puVar37 + 9;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar40;
  puVar37[1] = *(undefined8 *)(uVar22 + 8);
  puVar37[2] = 0;
  *(undefined1 *)(puVar37 + 3) = 3;
  *(undefined8 *)((longlong)puVar37 + 0x1c) = 0xffffffffffffffff;
  *puVar37 = &PTR_FUN_14a1fb168;
  *(undefined1 *)(puVar37 + 5) = uVar7;
  *(undefined8 *)((longlong)puVar37 + 0x2c) = 0xffffffff00000000;
  puVar37[7] = 0;
  puVar37[8] = uVar22;
  iVar26 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar26 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar26 + 1U) {
    FUN_1447568fc(local_4c0,iVar26);
  }
  uVar22 = local_3b8;
  puVar1 = local_4c8;
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar26 * 8) = puVar37;
  *(int *)((longlong)puVar37 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar32[0xf] = puVar37;
  if ((*(byte *)(local_3b8 + 0x68) & 0x80) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0x1c;
  }
  puVar37 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar40 = puVar37 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar40) {
    FUN_140023dd8(local_4c8,0x50);
    puVar37 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar40 = puVar37 + 9;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar40;
  puVar37[1] = *(undefined8 *)(uVar22 + 8);
  puVar37[2] = 0;
  *(undefined1 *)(puVar37 + 3) = 3;
  *(undefined8 *)((longlong)puVar37 + 0x1c) = 0xffffffffffffffff;
  *puVar37 = &PTR_FUN_14a1fb168;
  *(undefined1 *)(puVar37 + 5) = uVar7;
  *(undefined8 *)((longlong)puVar37 + 0x2c) = 0xffffffff00000000;
  puVar37[7] = 0;
  puVar37[8] = uVar22;
  iVar26 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar26 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar26 + 1U) {
    FUN_1447568fc(local_4c0,iVar26);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar26 * 8) = puVar37;
  *(int *)((longlong)puVar37 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar32[0xb] = puVar37;
  local_a8 = puVar32 + 2;
  FUN_1403aea72();
  local_348 = DAT_14ca1a2d8;
  uVar16 = FUN_1403ae980(local_4a0,local_4c8,&local_a8);
  FUN_1403aea72();
  local_2d0 = DAT_14ca1a301;
  if (DAT_14ca1a301 == '\x03') {
    local_2d0 = '\x02';
  }
  local_2d8 = uVar16;
  FUN_1448c58dc(param_8,&local_318);
  uVar16 = (**(code **)(**(longlong **)(*(longlong *)(param_8 + 8) + 0x178) + 8))();
  uVar16 = FUN_1448c569e(uVar16,param_1);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca4b328) {
    FUN_144b3d300(&DAT_14ca4b328);
    if (DAT_14ca4b328 == -1) {
      DAT_14ca4b320 = FUN_145900d44();
      _Init_thread_footer(&DAT_14ca4b328);
    }
  }
  local_2f0 = *(char *)(DAT_14ca4b320 + 0x41);
  if (local_2f0 == '\x03') {
    local_2f0 = '\x02';
  }
  local_2f8 = uVar16;
  uVar7 = (**(code **)(*local_470 + 0x60))(local_470,param_8);
  local_98 = 0;
  uStack_97 = 0;
  uStack_90._0_4_ = (uint)uStack_90 & 0xffffff00;
  local_a8._0_4_ = 0;
  local_a8._4_4_ = 0;
  uStack_a0._0_4_ = 0;
  uStack_a0._4_4_ = 0;
  local_4e0 = CONCAT71(local_4e0._1_7_,uVar7);
  local_4e8 = (int *)param_6;
  uVar16 = FUN_14017f66e(param_1,param_8,0);
  lVar14 = FUN_144886e74();
  puVar1 = local_4c8;
  local_2c0 = *(char *)(lVar14 + 0x41);
  if (local_2c0 == '\x03') {
    local_2c0 = '\x02';
  }
  local_2c8 = uVar16;
  puVar32 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar40 = puVar32 + 0xc;
  if (*(undefined8 **)(param_1 + 0x78) < puVar40) {
    FUN_140023dd8(local_4c8,0x70);
    puVar32 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar40 = puVar32 + 0xc;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar40;
  *puVar32 = &PTR_FUN_14a2a0908;
  puVar32[2] = 0;
  puVar32[3] = 0;
  puVar32[4] = 0;
  puVar32[5] = 0;
  puVar32[6] = 0;
  puVar32[7] = 0;
  puVar32[8] = 0;
  puVar32[9] = 0;
  puVar32[10] = 0;
  puVar32[0xb] = 0;
  iVar26 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar26 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar26 + 1U) {
    FUN_1448cfae8(local_498,iVar26);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar26 * 8) = puVar32;
  lVar14 = DAT_14ca97170;
  local_348 = &local_c8;
  local_c8 = 0;
  iStack_c4 = 0;
  local_338 = 1;
  iVar26 = *local_3e8;
  uStack_340 = param_1;
  if (((iVar26 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar26 == 2)) {
    uVar22 = 0;
  }
  else if (iVar26 == 1) {
    DVar12 = FUN_140ad26c0();
    DVar13 = GetCurrentThreadId();
    uVar22 = (ulonglong)(DVar12 != DVar13);
  }
  else {
    uVar22 = 1;
  }
  puVar1 = local_4c8;
  if (*(int *)(lVar14 + uVar22 * 4) < 1) {
    uVar16 = FUN_142e4e7e2(&local_348);
    puVar32[10] = uVar16;
    puVar37 = (undefined8 *)FUN_142e4e7e2(&local_348);
  }
  else {
    lVar14 = *(longlong *)(local_470[1] + 0x51a0);
    uVar7 = *(undefined1 *)(lVar14 + 0x94);
    puVar37 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar40 = puVar37 + 9;
    if (*(undefined8 **)(param_1 + 0x78) < puVar40) {
      FUN_140023dd8(local_4c8,0x50);
      puVar37 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar40 = puVar37 + 9;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar40;
    puVar37[1] = *(undefined8 *)(lVar14 + 8);
    puVar37[2] = 0;
    *(undefined1 *)(puVar37 + 3) = 0;
    *(undefined8 *)((longlong)puVar37 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar37 + 5) = 1;
    *puVar37 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar37 + 6) = uVar7;
    *(undefined4 *)((longlong)puVar37 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar37 + 0x35) = 0;
    *(undefined1 *)(puVar37 + 7) = 0;
    puVar37[8] = lVar14;
    iVar26 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar26 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar26 + 1U) {
      FUN_1447568fc(local_4c0,iVar26);
    }
    puVar1 = local_4c8;
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar26 * 8) = puVar37;
    *(int *)((longlong)puVar37 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar32[10] = puVar37;
    lVar14 = *(longlong *)(local_470[1] + 0x51c0);
    uVar7 = *(undefined1 *)(lVar14 + 0x94);
    puVar37 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar40 = puVar37 + 9;
    if (*(undefined8 **)(param_1 + 0x78) < puVar40) {
      FUN_140023dd8(local_4c8,0x50);
      puVar37 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar40 = puVar37 + 9;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar40;
    puVar37[1] = *(undefined8 *)(lVar14 + 8);
    puVar37[2] = 0;
    *(undefined1 *)(puVar37 + 3) = 0;
    *(undefined8 *)((longlong)puVar37 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar37 + 5) = 1;
    *puVar37 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar37 + 6) = uVar7;
    *(undefined4 *)((longlong)puVar37 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar37 + 0x35) = 0;
    *(undefined1 *)(puVar37 + 7) = 0;
    puVar37[8] = lVar14;
    iVar26 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar26 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar26 + 1U) {
      FUN_1447568fc(local_4c0,iVar26);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar26 * 8) = puVar37;
    *(int *)((longlong)puVar37 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  }
  local_470 = puVar32 + 2;
  puVar40 = puVar32 + 3;
  puVar28 = puVar32 + 5;
  puVar32[0xb] = puVar37;
  if (DAT_14c76085c == 2) {
    bVar30 = (*(byte *)((longlong)&DAT_14ca814c8 + (ulonglong)DAT_14ca85550 * 0x3c + 2) & 0x20) >> 5
    ;
  }
  else {
    bVar30 = 0;
  }
  local_4b0 = local_4b0 + 2;
  local_a8._0_4_ = (int)local_470;
  local_a8._4_4_ = (int)((ulonglong)local_470 >> 0x20);
  uStack_a0._0_4_ = SUB84(puVar40,0);
  uStack_a0._4_4_ = (undefined4)((ulonglong)puVar40 >> 0x20);
  local_98 = SUB81(puVar32 + 4,0);
  uStack_97 = (undefined7)((ulonglong)(puVar32 + 4) >> 8);
  uStack_90._0_4_ = (uint)puVar28;
  uStack_90._4_4_ = (uint)((ulonglong)puVar28 >> 0x20);
  local_88 = puVar32 + 6;
  local_80 = puVar32 + 7;
  local_78 = puVar32 + 8;
  local_70 = puVar32 + 9;
  lVar14 = 0;
  plVar21 = (longlong *)local_248;
  uVar22 = local_4b8 & 0xffffffff;
  local_a8 = local_470;
  do {
    puVar1 = local_4c8;
    lVar23 = *plVar21;
    uStack_a0 = puVar40;
    uStack_90 = puVar28;
    if ((lVar23 == 0) || (((uint)uVar22 >> ((uint)lVar14 & 0x1f) & 1) == 0)) {
      puVar32 = (undefined8 *)FUN_142e4e7e2(&local_348);
      uVar22 = local_4b8 & 0xffffffff;
      puVar40 = uStack_a0;
      puVar28 = uStack_90;
    }
    else {
      uVar7 = *(undefined1 *)(lVar23 + 0x94);
      puVar32 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar40 = puVar32 + 9;
      if (bVar30 == 0) {
        if (*(undefined8 **)(param_1 + 0x78) < puVar40) {
          local_4a8 = plVar21;
          FUN_140023dd8(local_4c8,0x50);
          uVar22 = local_4b8 & 0xffffffff;
          puVar32 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
          puVar40 = puVar32 + 9;
          plVar21 = local_4a8;
        }
        *(undefined8 **)(param_1 + 0x70) = puVar40;
        puVar32[1] = *(undefined8 *)(lVar23 + 8);
        puVar32[2] = 0;
        *(undefined1 *)(puVar32 + 3) = 0;
        *(undefined8 *)((longlong)puVar32 + 0x1c) = 0xffffffffffffffff;
        *(undefined1 *)(puVar32 + 5) = 1;
        *puVar32 = &PTR_FUN_14a1fb948;
        *(undefined1 *)(puVar32 + 6) = uVar7;
        *(undefined1 *)(puVar32 + 7) = 0;
        *(undefined4 *)((longlong)puVar32 + 0x31) = 0;
        *(undefined2 *)((longlong)puVar32 + 0x35) = 0;
        puVar32[8] = lVar23;
        iVar26 = *(int *)(param_1 + 0x1a0);
        *(uint *)(param_1 + 0x1a0) = iVar26 + 1U;
        if (*(uint *)(param_1 + 0x1a4) < iVar26 + 1U) {
          FUN_1447568fc(local_4c0,iVar26);
          uVar22 = local_4b8 & 0xffffffff;
        }
        *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar26 * 8) = puVar32;
        *(int *)((longlong)puVar32 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
        puVar40 = uStack_a0;
        puVar28 = uStack_90;
      }
      else {
        local_4a8 = plVar21;
        if (*(undefined8 **)(param_1 + 0x78) < puVar40) {
          FUN_140023dd8(local_4c8,0x50);
          puVar32 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
          puVar40 = puVar32 + 9;
        }
        *(undefined8 **)(param_1 + 0x70) = puVar40;
        puVar32[1] = *(undefined8 *)(lVar23 + 8);
        puVar32[2] = 0;
        *(undefined1 *)(puVar32 + 3) = 0;
        *(undefined8 *)((longlong)puVar32 + 0x1c) = 0xffffffffffffffff;
        *(undefined1 *)(puVar32 + 5) = 1;
        *puVar32 = &PTR_FUN_14a1fb948;
        *(undefined1 *)(puVar32 + 6) = uVar7;
        *(undefined4 *)((longlong)puVar32 + 0x31) = 0;
        *(undefined2 *)((longlong)puVar32 + 0x35) = 0x100;
        *(undefined1 *)(puVar32 + 7) = 0;
        puVar32[8] = lVar23;
        iVar26 = *(int *)(param_1 + 0x1a0);
        *(uint *)(param_1 + 0x1a0) = iVar26 + 1U;
        if (*(uint *)(param_1 + 0x1a4) < iVar26 + 1U) {
          FUN_1447568fc(local_4c0,iVar26);
        }
        *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar26 * 8) = puVar32;
        *(int *)((longlong)puVar32 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
        uVar22 = local_4b8 & 0xffffffff;
        plVar21 = local_4a8;
        puVar40 = uStack_a0;
        puVar28 = uStack_90;
      }
    }
    *(undefined8 **)(&local_a8)[lVar14] = puVar32;
    lVar14 = lVar14 + 1;
    plVar21 = plVar21 + 3;
  } while (lVar14 != 8);
  uStack_a0 = puVar40;
  uStack_90 = puVar28;
  FUN_1415b591c();
  puVar1 = local_4c8;
  uVar16 = DAT_14ca1a190;
  puVar32 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar40 = puVar32 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar40) {
    FUN_140023dd8(local_4c8,0x50);
    puVar32 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar40 = puVar32 + 9;
  }
  *local_4c8 = (ulonglong)puVar40;
  puVar32[1] = uVar16;
  puVar32[2] = 0;
  *puVar32 = &PTR_FUN_14a1fb9b8;
  FUN_1415b591c();
  lVar23 = local_468;
  puVar40 = local_4b0;
  puVar32[3] = local_470;
  lVar14 = DAT_14ca1a1c0;
  puVar32[4] = DAT_14ca1a1c0;
  if (lVar14 != 0) {
    LOCK();
    piVar29 = (int *)(lVar14 + 8);
    *piVar29 = *piVar29 + 1;
    UNLOCK();
  }
  puVar32[5] = &DAT_14ca1a178;
  puVar32[6] = 0;
  *(undefined4 *)(puVar32 + 7) = 0xffffffff;
  *(undefined1 *)((longlong)puVar32 + 0x3c) = 0;
  *puVar32 = &PTR_FUN_14a2a0910;
  puVar32[8] = local_470;
  iVar26 = *(int *)(param_1 + 0x1b0);
  *(uint *)(param_1 + 0x1b0) = iVar26 + 1U;
  if (*(uint *)(param_1 + 0x1b4) < iVar26 + 1U) {
    FUN_1402aa76e(local_4a0,iVar26);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x1a8) + (longlong)iVar26 * 8) = puVar32;
  *(int *)(puVar32 + 7) = *(int *)(param_1 + 0x1b0) + -1;
  FUN_1415b591c();
  local_2a0 = '\x02';
  if (DAT_14ca1a1b9 != '\x03') {
    local_2a0 = DAT_14ca1a1b9;
  }
  local_2a8 = puVar32;
  memcpy(puVar40,&local_328,0x90);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca1b670) {
    FUN_144b3d300(&DAT_14ca1b670);
    if (DAT_14ca1b670 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar21 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.GBufferFormat",1);
      if (plVar21 == (longlong *)0x0) {
        DAT_14ca1b668 = 0;
      }
      else {
        DAT_14ca1b668 = (**(code **)(*plVar21 + 0x68))(plVar21);
      }
      _Init_thread_footer(&DAT_14ca1b670);
      lVar23 = local_468;
    }
  }
  if (DAT_14ca1b668 == 0) {
    bVar30 = 0;
  }
  else {
    bVar30 = (4 < *(int *)(DAT_14ca1b668 + 4)) << 2;
  }
  if ((lVar23 == 0) || (DAT_14ca19c50 == 0)) {
LAB_142e51599:
    bVar25 = 0;
    bVar8 = 0;
  }
  else {
    if (DAT_14ca84f5f == '\0') {
      cVar6 = FUN_147262ebe(*(undefined2 *)(&DAT_14ca85070 + (longlong)*(int *)(param_7 + 8) * 2));
      if (cVar6 == '\0') goto LAB_142e51599;
    }
    bVar8 = (*(int *)(DAT_14ca1c218 + 4) != 0) * '\x02';
    bVar25 = 1;
  }
  bVar30 = bVar25 | bVar30 | bVar8 | (DAT_14c867d28 != 0) << 3;
  cVar6 = FUN_1447e0190();
  uVar22 = local_370;
  puVar40 = local_378;
  uVar9 = local_398;
  if ((cVar6 == '\0') ||
     ((((DAT_14ca84e0d == '\0' && ((DAT_14c842750 & 1) != 0)) || (*(int *)(DAT_14ca19c08 + 4) == 0))
      || ((DAT_14c760818 == 0 || (DAT_14ca84e2a != '\x01')))))) {
    if (lVar23 != 0) {
      LOCK();
      *(int *)(lVar23 + 8) = *(int *)(lVar23 + 8) + 1;
      UNLOCK();
    }
    FUN_1415aa3a8();
    FUN_140069376(param_1);
    puVar1 = local_4c8;
    uVar11 = 2;
    if (((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) &&
       ((DAT_14c760ddc == 2 && ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))))) {
      uVar11 = 4;
    }
    puVar37 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar32 = puVar37 + 0x41;
    if (*(undefined8 **)(param_1 + 0x78) < puVar32) {
      FUN_140023dd8(local_4c8,0x210);
      puVar37 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar32 = puVar37 + 0x41;
    }
    *local_4c8 = (ulonglong)puVar32;
    local_328 = local_4b0;
    local_320 = DAT_14ca1bec8;
    if (DAT_14ca1bec8 != 0) {
      LOCK();
      *(int *)(DAT_14ca1bec8 + 8) = *(int *)(DAT_14ca1bec8 + 8) + 1;
      UNLOCK();
    }
    local_318 = &DAT_14ca1be80;
    local_4e8 = (int *)CONCAT71(local_4e8._1_7_,2);
    FUN_140068f1a(puVar37,&local_a8,&local_328,uVar11);
    piVar29 = local_490;
    *puVar37 = &PTR_FUN_14a2a0ba0;
    puVar37[0x37] = local_4b0;
    puVar37[0x38] = local_490;
    *(byte *)(puVar37 + 0x39) = bVar30;
    puVar37[0x3a] = local_468;
    *(undefined4 *)(puVar37 + 0x3b) = 0x10;
    *(uint *)((longlong)puVar37 + 0x1dc) = uVar9;
    puVar37[0x3c] = local_400;
    puVar37[0x3d] = param_8;
    puVar37[0x3e] = puVar40;
    puVar37[0x3f] = uVar22;
    puVar37[0x40] = param_7;
    iVar26 = *(int *)(param_1 + 0x170);
    *(uint *)(param_1 + 0x170) = iVar26 + 1U;
    if (*(uint *)(param_1 + 0x174) < iVar26 + 1U) {
      FUN_14470e57a(param_1 + 0x168,iVar26);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar26 * 8) = puVar37;
    *(int *)((longlong)puVar37 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  }
  else {
    if (lVar23 != 0) {
      LOCK();
      *(int *)(lVar23 + 8) = *(int *)(lVar23 + 8) + 1;
      UNLOCK();
    }
    FUN_1415aa3a8();
    FUN_140069376(param_1);
    puVar1 = local_4c8;
    uVar11 = 2;
    if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
       ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
      uVar11 = 4;
    }
    puVar37 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar32 = puVar37 + 0x44;
    if (*(undefined8 **)(param_1 + 0x78) < puVar32) {
      FUN_140023dd8(local_4c8,0x228);
      puVar37 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar32 = puVar37 + 0x44;
    }
    *local_4c8 = (ulonglong)puVar32;
    local_328 = local_4b0;
    local_320 = DAT_14ca1bec8;
    if (DAT_14ca1bec8 != 0) {
      LOCK();
      *(int *)(DAT_14ca1bec8 + 8) = *(int *)(DAT_14ca1bec8 + 8) + 1;
      UNLOCK();
    }
    local_318 = &DAT_14ca1be80;
    FUN_144aaa2f0(puVar37,&local_a8,&local_328,uVar11);
    piVar29 = local_490;
    *puVar37 = &PTR_FUN_14a2a0960;
    puVar37[0x3a] = local_4b0;
    puVar37[0x3b] = local_490;
    *(byte *)(puVar37 + 0x3c) = bVar30;
    puVar37[0x3d] = local_468;
    *(undefined4 *)(puVar37 + 0x3e) = 0x10;
    *(uint *)((longlong)puVar37 + 500) = uVar9;
    puVar37[0x3f] = local_400;
    puVar37[0x40] = param_8;
    puVar37[0x41] = puVar40;
    puVar37[0x42] = uVar22;
    puVar37[0x43] = param_7;
    iVar26 = *(int *)(param_1 + 0x170);
    *(uint *)(param_1 + 0x170) = iVar26 + 1U;
    if (*(uint *)(param_1 + 0x174) < iVar26 + 1U) {
      FUN_14470e57a(param_1 + 0x168,iVar26);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar26 * 8) = puVar37;
    *(int *)((longlong)puVar37 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
    iVar26 = *(int *)(param_1 + 0x160);
    *(uint *)(param_1 + 0x160) = iVar26 + 1U;
    if (*(uint *)(param_1 + 0x164) < iVar26 + 1U) {
      FUN_1401641e0(param_1 + 0x158,iVar26);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x158) + (longlong)iVar26 * 8) = puVar37;
  }
  FUN_140069100(param_1,puVar37);
  lVar14 = local_468;
  local_4e8 = (int *)CONCAT44(local_4e8._4_4_,param_9);
  FUN_142dffc48(param_7 + 0x30a0,param_1,&puStack_3b0,*piVar29 + 1);
  FUN_142e01a86(param_1,param_8,&local_3b8,local_414);
  if (local_258 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (lVar14 != 0) {
    LOCK();
    puVar2 = (uint *)(lVar14 + 8);
    uVar9 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar9 & 0x3fffffff) == 1) {
      puVar2 = (uint *)(lVar14 + 8);
      LOCK();
      uVar9 = *puVar2;
      *puVar2 = *puVar2 | 0x40000000;
      UNLOCK();
      if ((uVar9 >> 0x1e & 1) == 0) {
        bVar30 = *(byte *)(lVar14 + 0xd);
        plVar19 = (longlong *)FUN_14001cc68(0x10,8);
        plVar19[1] = lVar14;
        plVar21 = DAT_14ca843c0;
        plVar20 = DAT_14ca843c8;
        if ((bVar30 & 2) == 0) {
          do {
            *plVar19 = (longlong)plVar21;
            LOCK();
            bVar42 = plVar21 != DAT_14ca843c0;
            plVar20 = plVar19;
            if (bVar42) {
              plVar21 = DAT_14ca843c0;
              plVar20 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar20;
            UNLOCK();
          } while (bVar42);
        }
        else {
          do {
            *plVar19 = (longlong)plVar20;
            LOCK();
            bVar42 = plVar20 != DAT_14ca843c8;
            plVar21 = plVar19;
            if (bVar42) {
              plVar20 = DAT_14ca843c8;
              plVar21 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar21;
            UNLOCK();
          } while (bVar42);
        }
      }
    }
  }
LAB_142e51857:
  if ((local_60 ^ (ulonglong)auStack_508) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e52bc0 FUN_142e52bc0 body=181 status=ok
// SIG undefined FUN_142e52bc0(void)

int FUN_142e52bc0(void)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  DWORD DVar4;
  DWORD DVar5;
  ulonglong uVar6;
  int iVar7;
  
  lVar2 = DAT_14ca97170;
  iVar7 = 0;
  if (((DAT_14c76086c != 0) && (DAT_14ca84df4 != 0x8086)) &&
     ((DAT_14ca63ce8 != '\0' || (DAT_14ca63ce9 == '\x01')))) {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    iVar7 = 0;
    if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
      uVar6 = 0;
    }
    else if (iVar1 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      uVar6 = (ulonglong)(DVar4 != DVar5);
    }
    else {
      uVar6 = 1;
    }
    if (*(int *)(lVar2 + uVar6 * 4) < 1) {
      uVar3 = 2;
      if (DAT_14ca63ce9 == '\0') {
        uVar3 = DAT_14ca84f40;
      }
      iVar7 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      if (uVar3 == 0) {
        iVar7 = 0;
      }
    }
  }
  return iVar7;
}



// FUNCTION 142e52c75 FUN_142e52c75 body=224 status=ok
// SIG undefined FUN_142e52c75(void)

longlong FUN_142e52c75(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_142e52bc0();
  if (iVar1 != 0) {
    local_38 = DAT_14ca63ce9;
    lVar2 = FUN_1401c8e48(&DAT_14ca63c98,param_1,param_2,2);
    if (lVar2 != 0) goto LAB_142e52ced;
  }
  if (DAT_14c760a84 == -1) {
    FUN_145fdab76(local_28,L"FRDGSystemTextures",L".\\Runtime/Renderer/Private/SystemTextures.cpp",
                  0x66);
    DAT_14c760a84 = FUN_145d12cf0(local_28);
    if (local_28[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((DAT_14c760a84 < *(int *)(param_1 + 0x130)) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x128) + (longlong)DAT_14c760a84 * 8),
     lVar2 != 0)) {
    lVar2 = lVar2 + 8;
  }
  else {
    lVar2 = 0;
  }
  lVar2 = *(longlong *)(lVar2 + 8);
LAB_142e52ced:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e52d56 FUN_142e52d56 body=2197 status=ok
// SIG undefined FUN_142e52d56(void)

void FUN_142e52d56(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  uint *puVar10;
  ulonglong *puVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  uint *puVar16;
  int iVar17;
  undefined1 uVar18;
  int iVar19;
  int iVar20;
  ulonglong uVar21;
  int iVar22;
  ulonglong uVar23;
  uint uVar24;
  undefined8 *puVar25;
  undefined1 auStack_1e8 [32];
  int *local_1c8;
  undefined1 *local_1c0;
  undefined4 local_1b4;
  undefined8 *local_1b0;
  longlong local_1a8;
  undefined4 local_1a0;
  ulonglong *local_198;
  int local_190;
  undefined8 *local_188;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined1 local_171;
  int local_170;
  int local_16c;
  undefined1 local_165;
  int local_164;
  ulonglong local_160 [16];
  ulonglong *local_e0;
  undefined8 local_d8;
  undefined8 *local_d0;
  int local_c8;
  undefined1 local_c4;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  *(undefined8 *)(param_1 + 8) = 0x200000000;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0x80;
  local_e0 = (ulonglong *)0x0;
  local_d8 = 0x800000000;
  if (*(char *)(param_1 + 200) == '\x01') {
    uVar12 = *(uint *)(param_1 + 0x48);
    iVar19 = uVar12 - *(int *)(param_1 + 0x78);
    if (iVar19 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar19);
    }
    *(undefined4 *)(param_1 + 0xc0) = 0;
    if (*(int *)(param_1 + 0xc4) < iVar19) {
      FUN_141773496();
      uVar12 = *(uint *)(param_1 + 0x48);
    }
    uVar14 = 0;
    do {
      uVar24 = uVar14;
      if (uVar12 == uVar24) goto LAB_142e52f89;
      uVar14 = uVar24 + 1;
    } while (SBORROW4(0,*(int *)(*(longlong *)(param_1 + 0x50) + (longlong)(int)uVar24 * 4)));
    if (uVar12 + 1 != uVar24 + 1) {
      do {
        iVar19 = *(int *)(param_1 + 0xc0);
        *(uint *)(param_1 + 0xc0) = iVar19 + 1U;
        if (*(uint *)(param_1 + 0xc4) < iVar19 + 1U) {
          FUN_14726d0ba(param_1 + 0xb8,iVar19);
        }
        *(uint *)(*(longlong *)(param_1 + 0xb8) + (longlong)iVar19 * 4) = uVar24;
        uVar12 = *(uint *)(param_1 + 0x48);
        uVar14 = uVar24 + 1;
        if (uVar24 + 1 < uVar12) {
          uVar14 = uVar12;
        }
        do {
          uVar3 = uVar14;
          if (uVar14 - 1 == uVar24) break;
          uVar24 = uVar24 + 1;
          uVar3 = uVar24;
        } while (SBORROW4(0,*(int *)(*(longlong *)(param_1 + 0x50) + (longlong)(int)uVar24 * 4)));
        uVar24 = uVar3;
      } while (uVar24 != uVar12);
    }
LAB_142e52f89:
    *(undefined1 *)(param_1 + 200) = 0;
  }
  lVar7 = (longlong)*(int *)(param_1 + 0xc0);
  if (lVar7 < 1) goto LAB_142e52e9f;
  uVar12 = *(uint *)(param_1 + 0x18) & 0xffffdf52 | 0x8d;
  uVar23 = (ulonglong)uVar12;
  *(uint *)(param_1 + 0x18) = uVar12;
  if (DAT_14c760870 == 0) {
LAB_142e52e5b:
    local_d0 = (undefined8 *)0x0;
    lVar15 = *(longlong *)(param_1 + 0xb8);
    lVar7 = lVar15 + lVar7 * 4;
    do {
      FUN_142e535ed(param_2,param_1 + 0x40,lVar15,&local_d0);
      lVar15 = lVar15 + 4;
    } while (lVar15 != lVar7);
  }
  else {
    cVar4 = FUN_1447e0190();
    uVar12 = *(uint *)(param_1 + 0xc0);
    uVar21 = (ulonglong)uVar12;
    if (cVar4 != '\0') {
      if (0 < (int)uVar12) {
        uVar8 = FUN_1447e0190();
        if ((char)uVar8 == '\0') {
          local_1b4 = (undefined4)CONCAT71((int7)((ulonglong)uVar8 >> 8),uVar12 != 1);
LAB_142e52fa4:
          uVar14 = 0;
        }
        else {
          if (uVar12 == 1) {
            local_1b4 = 0;
            goto LAB_142e52fa4;
          }
          uVar14 = DAT_14c8335d8;
          if ((int)uVar12 <= (int)DAT_14c8335d8) {
            uVar14 = uVar12;
          }
          local_1b4 = (undefined4)CONCAT71((int7)(uVar23 >> 8),1);
        }
        lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        iVar19 = (*(undefined **)(lVar7 + 0x2c0) != &DAT_14c82ba00 || *(int *)(lVar7 + 0x2c8) == 0)
                 + uVar14;
        if (DAT_14c8c27ac < 1) {
          memset(&local_d0,0,0x82);
          local_198 = (ulonglong *)((ulonglong)local_198 & 0xffffffff00000000);
          local_180 = 0;
          local_188 = (undefined8 *)((ulonglong)local_188 & 0xffffffff00000000);
          FUN_140e55932(&local_d0,&local_198,&local_180,&local_188);
          iVar17 = (int)local_188;
          local_1c0 = &local_165;
          local_1c8 = &local_16c;
          FUN_1457b80ec(local_180,(ulonglong)local_188 & 0xffffffff,&local_170,&local_164);
          DAT_14c8c27ac = iVar17;
          if ((0 < local_16c) && (DAT_14c8c27ac = iVar17, local_16c <= iVar17)) {
            DAT_14c8c27ac = local_16c;
          }
        }
        iVar17 = DAT_14c8c27ac;
        if (iVar19 < DAT_14c8c27ac) {
          iVar17 = iVar19;
        }
        iVar19 = 1;
        if (1 < iVar17) {
          iVar19 = iVar17;
        }
        local_d8 = CONCAT44(local_d8._4_4_,iVar19);
        if (iVar17 < 9) {
          puVar11 = (ulonglong *)0x0;
        }
        else {
          FUN_142e63c78(local_160);
          puVar11 = local_e0;
        }
        local_1b0 = (undefined8 *)(lVar7 + 0x2c0);
        if (puVar11 == (ulonglong *)0x0) {
          puVar11 = local_160;
        }
        FUN_142e63be4(puVar11,iVar19);
        puVar11 = local_e0;
        if (local_e0 == (ulonglong *)0x0) {
          puVar11 = local_160;
        }
        iVar19 = (int)local_d8;
        local_190 = (int)local_d8;
        local_1a8 = param_1;
        local_1a0 = param_2;
        local_198 = puVar11;
        bVar5 = FUN_1447e0190();
        uVar14 = 0;
        if (((bVar5 & (byte)local_1b4) == 1) &&
           (uVar14 = DAT_14c8335d8, (int)uVar12 <= (int)DAT_14c8335d8)) {
          uVar14 = uVar12;
        }
        iVar17 = ((undefined *)*local_1b0 != &DAT_14c82ba00 || *(int *)(lVar7 + 0x2c8) == 0) +
                 uVar14;
        if (DAT_14c8c27ac < 1) {
          memset(&local_d0,0,0x82);
          local_180 = 0;
          local_188 = (undefined8 *)((ulonglong)local_188 & 0xffffffff00000000);
          local_164 = 0;
          FUN_140e55932(&local_d0,&local_180,&local_188,&local_164);
          iVar13 = local_164;
          local_1c0 = &local_171;
          local_1c8 = &local_170;
          FUN_1457b80ec((ulonglong)local_188 & 0xffffffff,local_164,&local_165,&local_16c);
          DAT_14c8c27ac = iVar13;
          if ((0 < local_170) && (DAT_14c8c27ac = iVar13, local_170 <= iVar13)) {
            DAT_14c8c27ac = local_170;
          }
        }
        iVar13 = DAT_14c8c27ac;
        if (iVar17 < DAT_14c8c27ac) {
          iVar13 = iVar17;
        }
        uVar23 = 1;
        if (iVar13 < 2) {
          iVar13 = 1;
        }
        iVar17 = iVar19;
        if (iVar13 < iVar19) {
          iVar17 = iVar13;
        }
        if (iVar19 == 0) {
          iVar17 = iVar13;
        }
        if (iVar17 < 2) {
          piVar1 = (int *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0xc60);
          lVar7 = 0;
          do {
            iVar19 = *piVar1;
            if (iVar19 == 1) {
              FUN_140ad26c0();
              GetCurrentThreadId();
              iVar19 = *piVar1;
            }
            if ((iVar19 == 0x60000000) || (iVar19 == 0)) {
              *piVar1 = 0x40000010;
            }
            FUN_142e535ed(param_2,param_1 + 0x40,*(longlong *)(param_1 + 0xb8) + lVar7,puVar11);
            if ((iVar19 == 0x60000000) || (iVar19 == 0)) {
              *piVar1 = iVar19;
            }
            lVar7 = lVar7 + 4;
            uVar21 = uVar21 - 1;
          } while (uVar21 != 0);
        }
        else {
          iVar19 = iVar17 * 6;
          iVar13 = iVar19 + uVar12 + -1;
          iVar20 = -6;
          do {
            if (iVar19 <= (int)uVar12) {
              uVar23 = (longlong)iVar13 / (longlong)iVar19 & 0xffffffff;
              iVar22 = (int)((longlong)iVar13 / (longlong)iVar19);
              uVar21 = (longlong)(int)(iVar22 + (uVar12 - 1)) / (longlong)iVar22;
              iVar6 = (int)uVar21;
              uVar21 = uVar21 & 0xffffffff;
              if (iVar17 <= iVar6) break;
            }
            iVar6 = (int)uVar21;
            iVar22 = (int)uVar23;
            iVar13 = iVar13 - iVar17;
            iVar19 = iVar19 - iVar17;
            iVar20 = iVar20 + 1;
          } while (iVar20 != 0);
          iVar17 = iVar17 + -1;
          lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          uVar18 = 6;
          if ((*(byte *)(lVar7 + 0xc60) & 0x37) != 0) {
            uVar18 = 0;
          }
          FUN_144a85b52(&local_180,1);
          puVar2 = (undefined8 *)(lVar7 + 0x308);
          puVar10 = (uint *)*puVar2;
          if (puVar10 != (uint *)0x0) goto LAB_142e5327c;
          while( true ) {
            uVar14 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar14 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar14 | 1;
              __tlregdtor(&LAB_142e5a5ee);
            }
            lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            puVar9 = *(undefined4 **)(lVar7 + 0x310);
            *(undefined8 *)(lVar7 + 0x310) = 0;
            if (puVar9 == (undefined4 *)0x0) {
              puVar9 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar9 = 0xffffffff;
            *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
            puVar9[0x12] = 0;
            *puVar2 = puVar9;
            FUN_140217a48(puVar2);
            puVar10 = (uint *)*puVar2;
LAB_142e5327c:
            puVar25 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 0x3fU & 0xffffffffffffffc0);
            puVar16 = (uint *)(puVar25 + 0x10);
            uVar14 = puVar10[0x12];
            if (puVar16 <= puVar10 + 0x4000) break;
            while( true ) {
              *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
              LOCK();
              uVar24 = *puVar10;
              *puVar10 = *puVar10 + uVar14 + 1;
              UNLOCK();
              if ((uVar24 ^ uVar14) != 0xffffffff) break;
              puVar10 = (uint *)*puVar2;
              *puVar10 = 0xffffffff;
              *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
              puVar10[0x12] = 0;
              *puVar2 = puVar10;
              puVar25 = (undefined8 *)((longlong)puVar10 + 0x97U & 0xffffffffffffffc0);
              puVar16 = (uint *)(puVar25 + 0x10);
              uVar14 = 0;
              if (puVar16 <= puVar10 + 0x4000) {
                uVar14 = 1;
                goto LAB_142e53301;
              }
            }
          }
          uVar14 = uVar14 + 1;
LAB_142e53301:
          *(uint **)(puVar10 + 0x10) = puVar16;
          puVar10[0x12] = uVar14;
          *puVar25 = &PTR_FUN_149e002e8;
          *(undefined4 *)(puVar25 + 1) = 0;
          *puVar25 = &PTR_FUN_14a2a0c78;
          puVar25[3] = L"ParallelFor Task";
          *(undefined4 *)(puVar25 + 4) = 0;
          *(undefined4 *)(puVar25 + 5) = 0;
          *(uint *)((longlong)puVar25 + 0x2c) = uVar12;
          *(int *)(puVar25 + 6) = iVar22;
          *(int *)((longlong)puVar25 + 0x34) = iVar6;
          puVar25[7] = &local_198;
          puVar25[8] = &local_1a8;
          puVar25[9] = &local_180;
          *(undefined1 *)(puVar25 + 10) = uVar18;
          puVar25[0xb] = 0;
          puVar25[0xc] = 0;
          *(int *)((longlong)puVar25 + 0x24) = iVar6;
          *(int *)(puVar25 + 0xc) = iVar17;
          FUN_142e644a6(puVar25 + 0xb);
          FUN_142e64470(puVar25[0xb],iVar17);
          if (puVar25 != (undefined8 *)0x0) {
            LOCK();
            *(int *)(puVar25 + 1) = *(int *)(puVar25 + 1) + 1;
            UNLOCK();
          }
          local_188 = puVar25;
          FUN_142e63da0(&local_188);
          local_c4 = 0;
          local_d0 = puVar25;
          local_c8 = iVar17;
          cVar4 = FUN_142e63e1e(&local_d0,1);
          if (cVar4 == '\0') {
            (**(code **)(*(longlong *)CONCAT44(uStack_17c,local_180) + 0x20))
                      ((longlong *)CONCAT44(uStack_17c,local_180),0xffffffff,0);
          }
          FUN_142e64274(&local_d0);
          FUN_144a75412(&local_180);
        }
        if (1 < (int)local_d8) {
          lVar7 = 1;
          lVar15 = 0x10;
          do {
            puVar11 = local_e0;
            if (local_e0 == (ulonglong *)0x0) {
              puVar11 = local_160;
            }
            uVar23 = *(ulonglong *)((longlong)puVar11 + lVar15);
            *puVar11 = *puVar11 | uVar23;
            bVar5 = (byte)(uVar23 >> 0x10);
            if (bVar5 <= *(byte *)((longlong)puVar11 + 2)) {
              bVar5 = *(byte *)((longlong)puVar11 + 2);
            }
            *(byte *)((longlong)puVar11 + 2) = bVar5;
            lVar7 = lVar7 + 1;
            lVar15 = lVar15 + 0x10;
          } while (lVar7 < (int)local_d8);
        }
      }
      puVar11 = local_160;
      if (local_e0 != (ulonglong *)0x0) {
        puVar11 = local_e0;
      }
      *(ulonglong *)(param_1 + 8) = *puVar11;
      goto LAB_142e52e9f;
    }
    local_d0 = (undefined8 *)0x0;
    if (uVar12 != 0) {
      lVar7 = (longlong)(int)uVar12;
      goto LAB_142e52e5b;
    }
  }
  *(undefined8 **)(param_1 + 8) = local_d0;
LAB_142e52e9f:
  if (local_e0 != (ulonglong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142e535ed FUN_142e535ed body=148 status=ok
// SIG undefined FUN_142e535ed(void)

void FUN_142e535ed(undefined4 param_1,longlong *param_2,int *param_3,ulonglong *param_4)

{
  longlong lVar1;
  byte bVar2;
  undefined1 auStack_58 [40];
  ulonglong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(*param_2 + 0x48 + (longlong)*param_3 * 0x60);
  if (((lVar1 != 0) && (*(longlong **)(lVar1 + 0x18) != (longlong *)0x0)) &&
     (*(longlong *)(lVar1 + 0x20) != 0)) {
    lVar1 = (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x40))();
    if (lVar1 != 0) {
      FUN_14470a074(lVar1,local_30,param_1);
      *param_4 = *param_4 | local_30[0];
      bVar2 = (byte)(local_30[0] >> 0x10);
      if (bVar2 <= *(byte *)((longlong)param_4 + 2)) {
        bVar2 = *(byte *)((longlong)param_4 + 2);
      }
      *(byte *)((longlong)param_4 + 2) = bVar2;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e53682 FUN_142e53682 body=7578 status=ok
// SIG undefined FUN_142e53682(void)

void FUN_142e53682(longlong param_1,longlong param_2,longlong param_3,undefined8 *param_4,
                  undefined8 *param_5,longlong param_6,LARGE_INTEGER param_7,undefined8 param_8,
                  undefined4 param_9,longlong param_10,longlong param_11,longlong param_12,
                  longlong param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  LARGE_INTEGER LVar2;
  code *pcVar3;
  char cVar4;
  byte bVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  undefined ***pppuVar14;
  undefined **ppuVar15;
  uint uVar16;
  undefined4 uVar17;
  longlong *plVar18;
  LARGE_INTEGER *pLVar19;
  undefined8 *puVar21;
  ulonglong uVar22;
  undefined1 uVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  ulonglong *puVar26;
  bool bVar27;
  undefined1 local_2f8 [32];
  LARGE_INTEGER *local_2d8;
  LARGE_INTEGER *local_2d0;
  undefined8 uStack_2c8;
  char *local_2c0;
  undefined4 local_2b8;
  undefined4 local_2b0;
  LARGE_INTEGER *local_2a8;
  undefined1 local_2a0;
  undefined8 local_298;
  undefined1 local_290;
  ulonglong *local_280;
  longlong local_278;
  LARGE_INTEGER local_270;
  longlong local_268;
  longlong local_260;
  longlong local_258;
  undefined8 *local_250;
  longlong local_248;
  longlong local_240;
  longlong local_238;
  longlong local_230;
  undefined **local_228;
  undefined ***local_218;
  undefined **local_208;
  undefined8 *local_200;
  undefined **local_1e8;
  longlong *local_1d8 [2];
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  code *local_1a8 [2];
  longlong *local_198;
  longlong local_188 [4];
  undefined **local_168;
  undefined **local_158 [2];
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  code *local_128 [2];
  undefined ***local_118;
  undefined **local_108;
  undefined8 *local_100;
  code *local_e8 [2];
  longlong *local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  LARGE_INTEGER local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_60;
  undefined6 uVar20;
  
  local_60 = DAT_14c707940 ^ (ulonglong)local_2f8;
  local_270 = (LARGE_INTEGER)param_4;
  local_260 = param_2;
  local_258 = param_3;
  if (DAT_14c760a84 == -1) {
    FUN_145fdab76(&local_a8,L"FRDGSystemTextures",L".\\Runtime/Renderer/Private/SystemTextures.cpp",
                  0x66);
    DAT_14c760a84 = FUN_145d12cf0(&local_a8);
    if (local_a8.QuadPart != 0) {
      FUN_1400020a8();
    }
  }
  LVar2 = local_270;
  if ((DAT_14c760a84 < *(int *)(param_1 + 0x130)) &&
     (local_248 = *(longlong *)(*(longlong *)(param_1 + 0x128) + (longlong)DAT_14c760a84 * 8),
     local_248 != 0)) {
    local_248 = local_248 + 8;
  }
  else {
    local_248 = 0;
  }
  lVar8 = *(longlong *)(local_260 + 0x2ae0);
  if (lVar8 != 0) {
    if (DAT_14c87e718 == '\0') {
      iVar12 = *(int *)(lVar8 + 0x1c);
      if ((2 < iVar12) && (bVar5 = (**(code **)(*DAT_14c82b500 + 0x10))(DAT_14c82b500,0), bVar5 < 3)
         ) {
        local_a8.QuadPart = 0x20100000001;
        uStack_a0 = 0x30100000101;
        uStack_98 = (longlong *)(CONCAT44(DAT_14c7585c8,DAT_14c7585c8) | 0x20000000000);
        uStack_90 = CONCAT44(DAT_14c7585c8,DAT_14c7585c8) | 0x30000000100;
        local_88 = (undefined **)0x20000000000;
        uStack_80 = (undefined8 *)0x30000000100;
        if (*(byte *)((longlong)&local_a8 + (ulonglong)(iVar12 - 3) * 4) == bVar5)
        goto LAB_142e553da;
      }
      QueryPerformanceCounter(&local_a8);
      uStack_a0 = 0xffffffffffffffff;
      FUN_140056092(lVar8,&local_a8);
    }
    else {
LAB_142e553da:
      FUN_140082318(lVar8);
    }
  }
  puVar26 = (ulonglong *)(param_1 + 0x70);
  local_250 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar10 = local_250 + 0xc;
  local_280 = puVar26;
  if (*(undefined8 **)(param_1 + 0x78) < puVar10) {
    FUN_140023dd8(puVar26,0x70);
    local_250 = (undefined8 *)(*puVar26 + 0xf & 0xfffffffffffffff0);
    puVar10 = local_250 + 0xc;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar10;
  *local_250 = &PTR_FUN_14a2a0cf8;
  local_268 = param_1 + 0x98;
  local_250[1] = 0;
  local_250[2] = 0;
  local_250[3] = 0;
  local_250[4] = 0;
  local_250[5] = 0;
  local_250[6] = 0;
  local_250[7] = 0;
  local_250[8] = 0;
  local_250[9] = 0;
  local_250[10] = 0;
  local_250[0xb] = 0;
  iVar12 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar12 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar12 + 1U) {
    FUN_1448cfae8(local_268,iVar12);
  }
  puVar10 = local_250 + 6;
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar12 * 8) = local_250;
  uStack_a0 = *(longlong *)LVar2;
  uStack_98 = *(longlong **)((longlong)LVar2 + 8);
  uStack_90 = local_260;
  local_88 = (undefined **)param_10;
  uStack_80 = (undefined8 *)CONCAT44(uStack_80._4_4_,*(undefined4 *)(local_258 + 0x2dac));
  bVar5 = *(byte *)(param_1 + 0x520);
  local_a8.QuadPart = (LONGLONG)(local_250 + 1);
  if (bVar5 == 0) {
    FUN_142e64d4a(&local_a8);
  }
  else {
    plVar6 = TlsGetValue(DAT_14c896140);
    if (plVar6 == (longlong *)0x0) {
      plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
      *plVar6 = 0;
      plVar6[1] = 0;
      *(undefined4 *)(plVar6 + 2) = 0;
      TlsSetValue(DAT_14c896140,plVar6);
    }
    plVar18 = (longlong *)plVar6[1];
    if (plVar18 == (longlong *)0x0) {
      plVar18 = (longlong *)*plVar6;
      if (plVar18 == (longlong *)0x0) {
        uVar16 = (uint)DAT_14c896180;
        pcVar3 = DAT_14c896180;
        while (DAT_14c896180 = pcVar3, local_e8[0] = pcVar3, ((ulonglong)pcVar3 & 0x3ffffff) != 0) {
          local_128[0] = (code *)(((ulonglong)pcVar3 & 0xfffffffffc000000) + 0x4000000);
          if ((ulonglong)local_128[0] >> 0x1a < (ulonglong)pcVar3 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          uVar13 = (ulonglong)((uVar16 & 0x3ffffff) >> 0xe);
          uVar22 = (ulonglong)((uint)pcVar3 & 0x3fff);
          local_128[0] = (code *)((ulonglong)local_128[0] & 0xfffffffffc000000 |
                                 (ulonglong)
                                 *(uint *)(*(longlong *)(&DAT_14c833b00 + uVar13 * 8) + 0x10 +
                                          uVar22 * 0x18));
          LOCK();
          bVar27 = local_e8[0] == DAT_14c896180;
          pcVar3 = local_128[0];
          if (!bVar27) {
            pcVar3 = DAT_14c896180;
          }
          DAT_14c896180 = pcVar3;
          UNLOCK();
          if (bVar27) {
            *(undefined4 *)(*(longlong *)(&DAT_14c833b00 + uVar13 * 8) + uVar22 * 0x18 + 0x10) = 0;
            plVar18 = *(longlong **)
                       (*(longlong *)(&DAT_14c833b00 + uVar13 * 8) + 8 +
                       (ulonglong)(uVar16 & 0x3fff) * 0x18);
            FUN_1447d080c(uVar16 & 0x3ffffff);
            plVar6[1] = (longlong)plVar18;
            if (plVar18 == (longlong *)0x0) goto LAB_142e53a2d;
            goto LAB_142e53a68;
          }
          uVar16 = (uint)DAT_14c896180;
          pcVar3 = DAT_14c896180;
        }
        plVar6[1] = 0;
LAB_142e53a2d:
        puVar21 = (undefined8 *)FUN_14001cc68(0x10000,0);
        plVar6[1] = (longlong)puVar21;
        iVar12 = 0xff;
        do {
          puVar24 = puVar21 + 0x20;
          *puVar21 = puVar24;
          iVar12 = iVar12 + -1;
          puVar21 = puVar24;
        } while (iVar12 != 0);
        *puVar24 = 0;
        plVar18 = (longlong *)plVar6[1];
      }
      else {
        plVar6[1] = (longlong)plVar18;
        *plVar6 = 0;
      }
LAB_142e53a68:
      *(undefined4 *)(plVar6 + 2) = 0x100;
      iVar12 = 0x100;
    }
    else {
      iVar12 = (int)plVar6[2];
    }
    plVar6[1] = *plVar18;
    *(int *)(plVar6 + 2) = iVar12 + -1;
    *plVar18 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
    plVar18[1] = (longlong)&DAT_100000002;
    plVar18[2] = 0;
    *(undefined4 *)(plVar18 + 3) = 0;
    *(undefined4 *)(plVar18 + 4) = 0xffffffff;
    plVar18[6] = 0;
    plVar18[7] = 0x100000000;
    *(undefined1 *)(plVar18 + 8) = 1;
    plVar18[0xe] = (longlong)
                   LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateDummy::vftable;
    plVar18[0xf] = 0;
    plVar18[0x10] = -0x17ffffffffffffe0;
    plVar18[0x12] = 0;
    plVar18[0x13] = 0x100000000;
    *(undefined2 *)(plVar18 + 0x14) = 0;
    LOCK();
    bVar27 = (char)plVar18[8] == '\x01';
    if (bVar27) {
      *(char *)(plVar18 + 8) = '\0';
    }
    UNLOCK();
    if (!bVar27) {
      FUN_14008cdb0(plVar18 + 8);
    }
    *plVar18 = (longlong)&PTR_FUN_14a2a0d10;
    if (*(code **)(plVar18[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(plVar18[0xe] + 0x18))(plVar18 + 0xe,plVar18 + 9);
    }
    plVar18[0xe] = (longlong)
                   LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    plVar18[9] = (longlong)plVar18;
    plVar18[10] = (longlong)plVar18;
    lVar8 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = *(longlong *)(lVar8 + 0x30);
    }
    plVar18[0xf] = lVar8;
    plVar18[0x10] = -0x37ffffad77750000;
    *(uint *)((longlong)plVar18 + 0x1c) = bVar5 ^ 1;
    *(DWORD *)(plVar18 + 0x15) = local_a8.s.LowPart;
    *(LONG *)((longlong)plVar18 + 0xac) = local_a8.s.HighPart;
    *(undefined4 *)(plVar18 + 0x16) = (undefined4)uStack_a0;
    *(undefined4 *)((longlong)plVar18 + 0xb4) = uStack_a0._4_4_;
    *(undefined4 *)(plVar18 + 0x17) = (undefined4)uStack_98;
    *(undefined4 *)((longlong)plVar18 + 0xbc) = uStack_98._4_4_;
    *(undefined4 *)(plVar18 + 0x18) = (undefined4)uStack_90;
    *(undefined4 *)((longlong)plVar18 + 0xc4) = uStack_90._4_4_;
    *(undefined4 *)(plVar18 + 0x19) = (undefined4)local_88;
    *(undefined4 *)((longlong)plVar18 + 0xcc) = local_88._4_4_;
    *(undefined4 *)(plVar18 + 0x1a) = (undefined4)uStack_80;
    *(undefined4 *)((longlong)plVar18 + 0xd4) = uStack_80._4_4_;
    *plVar18 = (longlong)&PTR_FUN_14a2a0d00;
    LOCK();
    UNLOCK();
    LOCK();
    UNLOCK();
    local_e8[0] = (code *)CONCAT71(local_e8[0]._1_7_,1);
    FUN_1447439e4(plVar18);
    if (plVar18 != (longlong *)0x0) {
      iVar12 = *(int *)(param_1 + 0x508);
      *(uint *)(param_1 + 0x508) = iVar12 + 1U;
      if (*(uint *)(param_1 + 0x50c) < iVar12 + 1U) {
        FUN_1401d03aa((longlong *)(param_1 + 0x500),iVar12);
      }
      *(longlong **)(*(longlong *)(param_1 + 0x500) + (longlong)iVar12 * 8) = plVar18;
      LOCK();
      *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
      UNLOCK();
      FUN_14473400f(0,0);
      LOCK();
      plVar6 = plVar18 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar18)(plVar18,1);
      }
      goto LAB_142e53c89;
    }
  }
  FUN_14473400f(0,0);
LAB_142e53c89:
  uStack_98 = (longlong *)0x0;
  local_88 = &PTR_LAB_14a2a0d60;
  local_a8.QuadPart = (LONGLONG)&LAB_142e665ce;
  local_2d8 = (LARGE_INTEGER *)local_e8;
  local_d8 = (longlong *)0x0;
  local_c8 = &PTR_LAB_14a2a0d40;
  local_e8[0] = (code *)&LAB_142e6657e;
  local_118 = (undefined ***)0x0;
  local_108 = &PTR_LAB_14a2a0d20;
  local_128[0] = (code *)&LAB_142e66516;
  local_2d0 = &local_a8;
  local_100 = puVar10;
  uStack_c0 = puVar10;
  uStack_80 = puVar10;
  local_230 = FUN_144ada887(param_1,L"Nanite.PackedViews",0x390,local_128);
  if (local_128[0] != (code *)0x0) {
    pppuVar14 = local_118;
    if (local_118 == (undefined ***)0x0) {
      pppuVar14 = &local_108;
    }
    (*(code *)(*pppuVar14)[2])();
  }
  puVar10 = local_250;
  if (local_e8[0] != (code *)0x0) {
    plVar6 = local_d8;
    if (local_d8 == (longlong *)0x0) {
      plVar6 = &local_c8;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if ((undefined1 *)local_a8.QuadPart != (undefined1 *)0x0) {
    plVar6 = uStack_98;
    if (uStack_98 == (longlong *)0x0) {
      plVar6 = &local_88;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  local_218 = (undefined ***)0x0;
  local_208 = &PTR_FUN_14a2a0de0;
  local_228 = (undefined **)&LAB_142e666c0;
  local_e8[0] = (code *)&LAB_142e666c0;
  local_d8 = (longlong *)0x0;
  local_c8 = &PTR_FUN_14a2a0de0;
  local_a8.QuadPart = 0;
  uStack_98 = (longlong *)0x0;
  local_200 = puVar10 + 10;
  uStack_c0 = puVar10 + 10;
  uStack_98 = (longlong *)FUN_14001cc68(0x50,0x10);
  *uStack_98 = (longlong)&PTR_FUN_14a2a0d80;
  uStack_98[2] = (longlong)local_e8[0];
  uStack_98[4] = (longlong)local_d8;
  local_d8 = (longlong *)0x0;
  *(undefined4 *)(uStack_98 + 8) = local_b8;
  *(undefined4 *)((longlong)uStack_98 + 0x44) = uStack_b4;
  *(undefined4 *)(uStack_98 + 9) = uStack_b0;
  *(undefined4 *)((longlong)uStack_98 + 0x4c) = uStack_ac;
  *(undefined4 *)(uStack_98 + 6) = (undefined4)local_c8;
  *(undefined4 *)((longlong)uStack_98 + 0x34) = local_c8._4_4_;
  *(undefined4 *)(uStack_98 + 7) = (undefined4)uStack_c0;
  *(undefined4 *)((longlong)uStack_98 + 0x3c) = uStack_c0._4_4_;
  if (local_e8[0] != (code *)0x0) {
    local_e8[0] = (code *)0x0;
  }
  if (uStack_98 != (longlong *)&DAT_fffffffffffffff0) {
    local_a8.QuadPart = (LONGLONG)FUN_142e66622;
  }
  local_168 = local_228;
  local_158[0] = (undefined **)0x0;
  if (local_228 != (undefined **)0x0) {
    pppuVar14 = local_218;
    if (local_218 == (undefined ***)0x0) {
      pppuVar14 = &local_208;
    }
    (*(code *)**pppuVar14)((undefined4)local_c8,local_158);
  }
  local_128[0] = (code *)0x0;
  local_118 = (undefined ***)0x0;
  local_118 = (undefined ***)FUN_14001cc68(0x50,0x10);
  *local_118 = &PTR_FUN_14a2a0da0;
  local_118[2] = local_168;
  local_118[4] = local_158[0];
  local_158[0] = (undefined **)0x0;
  *(undefined4 *)(local_118 + 8) = local_138;
  *(undefined4 *)((longlong)local_118 + 0x44) = uStack_134;
  *(undefined4 *)(local_118 + 9) = uStack_130;
  *(undefined4 *)((longlong)local_118 + 0x4c) = uStack_12c;
  *(undefined4 *)(local_118 + 6) = local_148;
  *(undefined4 *)((longlong)local_118 + 0x34) = uStack_144;
  *(undefined4 *)(local_118 + 7) = uStack_140;
  *(undefined4 *)((longlong)local_118 + 0x3c) = uStack_13c;
  if (local_168 != (undefined **)0x0) {
    local_168 = (undefined **)0x0;
  }
  if (local_118 != (undefined ***)&DAT_fffffffffffffff0) {
    local_128[0] = FUN_142e66656;
  }
  local_1e8 = local_228;
  local_1d8[0] = (longlong *)0x0;
  if (local_228 != (undefined **)0x0) {
    pppuVar14 = local_218;
    if (local_218 == (undefined ***)0x0) {
      pppuVar14 = &local_208;
    }
    (*(code *)**pppuVar14)(local_148,local_1d8);
  }
  local_1a8[0] = (code *)0x0;
  local_198 = (longlong *)0x0;
  local_198 = (longlong *)FUN_14001cc68(0x50,0x10);
  *local_198 = (longlong)&PTR_FUN_14a2a0dc0;
  local_198[2] = (longlong)local_1e8;
  local_198[4] = (longlong)local_1d8[0];
  local_1d8[0] = (longlong *)0x0;
  *(undefined4 *)(local_198 + 8) = local_1b8;
  *(undefined4 *)((longlong)local_198 + 0x44) = uStack_1b4;
  *(undefined4 *)(local_198 + 9) = uStack_1b0;
  *(undefined4 *)((longlong)local_198 + 0x4c) = uStack_1ac;
  *(undefined4 *)(local_198 + 6) = local_1c8;
  *(undefined4 *)((longlong)local_198 + 0x34) = uStack_1c4;
  *(undefined4 *)(local_198 + 7) = uStack_1c0;
  *(undefined4 *)((longlong)local_198 + 0x3c) = uStack_1bc;
  if (local_1e8 != (undefined **)0x0) {
    local_1e8 = (undefined **)0x0;
  }
  if (local_198 != (longlong *)&DAT_fffffffffffffff0) {
    local_1a8[0] = FUN_142e66688;
  }
  local_2d8 = &local_a8;
  local_238 = FUN_14054eefb(param_1,L"Nanite.ShadingBinData",local_1a8,local_128);
  if (local_1a8[0] != (code *)0x0) {
    plVar6 = local_198;
    if (local_198 == (longlong *)0x0) {
      plVar6 = local_188;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  puVar26 = local_280;
  if (local_1e8 != (undefined **)0x0) {
    plVar6 = local_1d8[0];
    if (local_1d8[0] == (longlong *)0x0) {
      plVar6 = (longlong *)&local_1c8;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (local_128[0] != (code *)0x0) {
    pppuVar14 = &local_108;
    if (local_118 != (undefined ***)0x0) {
      pppuVar14 = local_118;
    }
    (*(code *)(*pppuVar14)[2])(pppuVar14);
  }
  if (local_168 != (undefined **)0x0) {
    ppuVar15 = local_158[0];
    if (local_158[0] == (undefined **)0x0) {
      ppuVar15 = (undefined **)&local_148;
    }
    (**(code **)(*ppuVar15 + 0x10))();
  }
  if ((code *)local_a8.QuadPart != (code *)0x0) {
    plVar6 = &local_88;
    if (uStack_98 != (longlong *)0x0) {
      plVar6 = uStack_98;
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  if (local_e8[0] != (code *)0x0) {
    plVar6 = &local_c8;
    if (local_d8 != (longlong *)0x0) {
      plVar6 = local_d8;
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  if (local_228 != (undefined **)0x0) {
    pppuVar14 = &local_208;
    if (local_218 != (undefined ***)0x0) {
      pppuVar14 = local_218;
    }
    (*(code *)(*pppuVar14)[2])(pppuVar14);
  }
  puVar21 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar10 = puVar21 + 0x12;
  if (*(undefined8 **)(param_1 + 0x78) < puVar10) {
    FUN_140023dd8(puVar26,0xa0);
    puVar21 = (undefined8 *)(*puVar26 + 0xf & 0xfffffffffffffff0);
    puVar10 = puVar21 + 0x12;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar10;
  *puVar21 = &PTR_FUN_14a2a0e00;
  puVar21[2] = 0;
  *(undefined1 *)(puVar21 + 3) = 1;
  puVar21[4] = 0;
  *(undefined1 *)(puVar21 + 5) = 1;
  puVar21[6] = 0;
  *(undefined1 *)(puVar21 + 7) = 1;
  puVar21[8] = 0;
  *(undefined1 *)(puVar21 + 9) = 1;
  puVar21[10] = 0;
  *(undefined1 *)(puVar21 + 0xb) = 1;
  puVar21[0xc] = 0;
  *(undefined1 *)(puVar21 + 0xd) = 1;
  puVar21[0xe] = 0;
  *(undefined1 *)(puVar21 + 0xf) = 1;
  puVar21[0x10] = 0;
  *(undefined1 *)(puVar21 + 0x11) = 1;
  iVar12 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar12 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar12 + 1U) {
    FUN_1448cfae8(local_268,iVar12);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar12 * 8) = puVar21;
  puVar24 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar10 = puVar24 + 8;
  if (*(undefined8 **)(param_1 + 0x78) < puVar10) {
    FUN_140023dd8(puVar26,0x50);
    puVar24 = (undefined8 *)(*puVar26 + 0xf & 0xfffffffffffffff0);
    puVar10 = puVar24 + 8;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar10;
  *puVar24 = &PTR_FUN_14a29acc0;
  iVar12 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar12 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar12 + 1U) {
    FUN_1448cfae8(local_268,iVar12);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar12 * 8) = puVar24;
  local_a8.QuadPart = (LONGLONG)(puVar24 + 2);
  uVar7 = param_5[1];
  puVar24[2] = *param_5;
  puVar24[3] = uVar7;
  *(uint *)(puVar24 + 4) = DAT_14c760878 & 0xfffffff0;
  *(undefined4 *)((longlong)puVar24 + 0x24) = DAT_14c760880;
  *(undefined4 *)(puVar24 + 5) = DAT_14c760884;
  *(undefined4 *)((longlong)puVar24 + 0x2c) = *(undefined4 *)((longlong)param_5 + 0x1c);
  *(undefined4 *)(puVar24 + 6) = *(undefined4 *)(param_5 + 4);
  *(undefined4 *)((longlong)puVar24 + 0x34) = *(undefined4 *)((longlong)param_5 + 0x24);
  *(undefined4 *)(puVar24 + 7) = *(undefined4 *)(param_5 + 5);
  *(undefined4 *)((longlong)puVar24 + 0x3c) = *(undefined4 *)((longlong)param_5 + 0x2c);
  FUN_1448cb8bc();
  local_e8[0] = DAT_14ca1a238;
  local_240 = param_1 + 0x1a8;
  uVar7 = FUN_1401cdd04(param_1 + 0x1a8,puVar26,&local_a8);
  FUN_1448cb8bc();
  puVar26 = local_280;
  cVar4 = '\x02';
  if (DAT_14ca1a261 != '\x03') {
    cVar4 = DAT_14ca1a261;
  }
  puVar21[8] = uVar7;
  *(char *)(puVar21 + 9) = cVar4;
  puVar24 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar10 = puVar24 + 0x10;
  if (*(undefined8 **)(param_1 + 0x78) < puVar10) {
    FUN_140023dd8(local_280,0x90);
    puVar24 = (undefined8 *)(*puVar26 + 0xf & 0xfffffffffffffff0);
    puVar10 = puVar24 + 0x10;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar10;
  *puVar24 = &PTR_FUN_14a2a03e8;
  puVar24[3] = 0;
  puVar24[4] = 0;
  puVar24[5] = 0;
  puVar24[6] = 0;
  puVar24[7] = 0;
  puVar24[8] = 0;
  puVar24[9] = 0;
  puVar24[10] = 0;
  puVar24[0xb] = 0;
  puVar24[0xd] = 0;
  puVar24[0xe] = 0;
  puVar24[0xf] = 0;
  iVar12 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar12 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar12 + 1U) {
    FUN_1448cfae8(local_268,iVar12);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar12 * 8) = puVar24;
  uVar23 = 0;
  lVar8 = FUN_144735dd8(param_1,&DAT_14cb00e10,0);
  puVar26 = local_280;
  if ((*(byte *)(lVar8 + 0x68) & 0x80) != 0) {
    uVar23 = 0x1c;
  }
  puVar25 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar25 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar10) {
    FUN_140023dd8(local_280,0x50);
    puVar25 = (undefined8 *)(*puVar26 + 7 & 0xfffffffffffffff8);
    puVar10 = puVar25 + 9;
  }
  local_278 = param_1 + 0x198;
  *(undefined8 **)(param_1 + 0x70) = puVar10;
  puVar25[1] = *(undefined8 *)(lVar8 + 8);
  puVar25[2] = 0;
  *(undefined1 *)(puVar25 + 3) = 3;
  *(undefined8 *)((longlong)puVar25 + 0x1c) = 0xffffffffffffffff;
  *puVar25 = &PTR_FUN_14a1fb168;
  *(undefined1 *)(puVar25 + 5) = uVar23;
  *(undefined8 *)((longlong)puVar25 + 0x2c) = 0xffffffff00000000;
  puVar25[7] = 0;
  puVar25[8] = lVar8;
  iVar12 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar12 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar12 + 1U) {
    FUN_1447568fc(local_278,iVar12);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar12 * 8) = puVar25;
  *(int *)((longlong)puVar25 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar24[3] = puVar25;
  uVar7 = FUN_1417ea8a0(&DAT_14cb00cc8,param_1);
  puVar26 = local_280;
  puVar24[5] = uVar7;
  lVar8 = param_5[7];
  cVar4 = *(char *)(lVar8 + 0x68);
  puVar25 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar25 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar10) {
    FUN_140023dd8(local_280,0x50);
    puVar25 = (undefined8 *)(*puVar26 + 7 & 0xfffffffffffffff8);
    puVar10 = puVar25 + 9;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar10;
  puVar25[1] = *(undefined8 *)(lVar8 + 8);
  puVar25[2] = 0;
  *(undefined1 *)(puVar25 + 3) = 3;
  *(undefined8 *)((longlong)puVar25 + 0x1c) = 0xffffffffffffffff;
  *puVar25 = &PTR_FUN_14a1fb168;
  *(byte *)(puVar25 + 5) = cVar4 >> 7 & 0x1c;
  *(undefined8 *)((longlong)puVar25 + 0x2c) = 0xffffffff00000000;
  puVar25[7] = 0;
  puVar25[8] = lVar8;
  iVar12 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar12 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar12 + 1U) {
    FUN_1447568fc(local_278,iVar12);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar12 * 8) = puVar25;
  *(int *)((longlong)puVar25 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar24[4] = puVar25;
  *(undefined4 *)(puVar24 + 2) = DAT_14ca19b88;
  uVar7 = FUN_14175efdc(&DAT_14ca1c220,param_1);
  lVar8 = local_238;
  puVar26 = local_280;
  puVar24[10] = uVar7;
  puVar24[7] = *(undefined8 *)(param_6 + 0x58);
  uVar7 = *(undefined8 *)(local_248 + 8);
  puVar24[8] = uVar7;
  puVar24[9] = uVar7;
  puVar24[6] = *(undefined8 *)(local_248 + 8);
  cVar4 = *(char *)(local_238 + 0x68);
  puVar25 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar25 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar10) {
    FUN_140023dd8(local_280,0x50);
    puVar25 = (undefined8 *)(*puVar26 + 7 & 0xfffffffffffffff8);
    puVar10 = puVar25 + 9;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar10;
  puVar25[1] = *(undefined8 *)(lVar8 + 8);
  puVar25[2] = 0;
  *(undefined1 *)(puVar25 + 3) = 3;
  *(undefined8 *)((longlong)puVar25 + 0x1c) = 0xffffffffffffffff;
  *puVar25 = &PTR_FUN_14a1fb168;
  *(byte *)(puVar25 + 5) = cVar4 >> 7 & 0x1c;
  *(undefined8 *)((longlong)puVar25 + 0x2c) = 0xffffffff00000000;
  puVar25[7] = 0;
  puVar25[8] = lVar8;
  iVar12 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar12 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar12 + 1U) {
    FUN_1447568fc(local_278,iVar12);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar12 * 8) = puVar25;
  *(int *)((longlong)puVar25 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar24[0xb] = puVar25;
  *(undefined4 *)(puVar24 + 0xc) = 1;
  lVar8 = FUN_144735828(&DAT_14ca63b10,param_1,4);
  puVar26 = local_280;
  cVar4 = *(char *)(lVar8 + 0x68);
  puVar25 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar25 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar10) {
    FUN_140023dd8(local_280,0x50);
    puVar25 = (undefined8 *)(*puVar26 + 7 & 0xfffffffffffffff8);
    puVar10 = puVar25 + 9;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar10;
  puVar25[1] = *(undefined8 *)(lVar8 + 8);
  puVar25[2] = 0;
  *(undefined1 *)(puVar25 + 3) = 3;
  *(undefined8 *)((longlong)puVar25 + 0x1c) = 0xffffffffffffffff;
  *puVar25 = &PTR_FUN_14a1fb168;
  *(byte *)(puVar25 + 5) = cVar4 >> 7 & 0x1c;
  *(undefined8 *)((longlong)puVar25 + 0x2c) = 0xffffffff00000000;
  puVar25[7] = 0;
  puVar25[8] = lVar8;
  iVar12 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar12 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar12 + 1U) {
    FUN_1447568fc(local_278,iVar12);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar12 * 8) = puVar25;
  *(int *)((longlong)puVar25 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar24[0xd] = puVar25;
  lVar8 = FUN_144735828(&DAT_14ca63b10,param_1,0x20);
  puVar26 = local_280;
  cVar4 = *(char *)(lVar8 + 0x68);
  puVar25 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar25 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar10) {
    FUN_140023dd8(local_280,0x50);
    puVar25 = (undefined8 *)(*puVar26 + 7 & 0xfffffffffffffff8);
    puVar10 = puVar25 + 9;
  }
  lVar9 = local_230;
  *(undefined8 **)(param_1 + 0x70) = puVar10;
  puVar25[1] = *(undefined8 *)(lVar8 + 8);
  puVar25[2] = 0;
  *(undefined1 *)(puVar25 + 3) = 3;
  *(undefined8 *)((longlong)puVar25 + 0x1c) = 0xffffffffffffffff;
  *puVar25 = &PTR_FUN_14a1fb168;
  *(byte *)(puVar25 + 5) = cVar4 >> 7 & 0x1c;
  *(undefined8 *)((longlong)puVar25 + 0x2c) = 0xffffffff00000000;
  puVar25[7] = 0;
  puVar25[8] = lVar8;
  iVar12 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar12 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar12 + 1U) {
    FUN_1447568fc(local_278,iVar12);
  }
  puVar26 = local_280;
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar12 * 8) = puVar25;
  *(int *)((longlong)puVar25 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar24[0xe] = puVar25;
  cVar4 = *(char *)(lVar9 + 0x68);
  puVar25 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar25 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar10) {
    FUN_140023dd8(local_280,0x50);
    puVar25 = (undefined8 *)(*puVar26 + 7 & 0xfffffffffffffff8);
    puVar10 = puVar25 + 9;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar10;
  puVar25[1] = *(undefined8 *)(lVar9 + 8);
  puVar25[2] = 0;
  *(undefined1 *)(puVar25 + 3) = 3;
  *(undefined8 *)((longlong)puVar25 + 0x1c) = 0xffffffffffffffff;
  *puVar25 = &PTR_FUN_14a1fb168;
  *(byte *)(puVar25 + 5) = cVar4 >> 7 & 0x1c;
  *(undefined8 *)((longlong)puVar25 + 0x2c) = 0xffffffff00000000;
  puVar25[7] = 0;
  puVar25[8] = lVar9;
  iVar12 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar12 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar12 + 1U) {
    FUN_1447568fc(local_278,iVar12);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar12 * 8) = puVar25;
  *(int *)((longlong)puVar25 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar24[0xf] = puVar25;
  local_a8.QuadPart = (LONGLONG)(puVar24 + 2);
  FUN_1403aea72();
  lVar9 = local_240;
  puVar26 = local_280;
  local_e8[0] = DAT_14ca1a2d8;
  uVar7 = FUN_1403ae980(local_240,local_280,&local_a8);
  FUN_1403aea72();
  lVar8 = local_258;
  cVar4 = DAT_14ca1a301;
  if (DAT_14ca1a301 == '\x03') {
    cVar4 = '\x02';
  }
  puVar21[10] = uVar7;
  *(char *)(puVar21 + 0xb) = cVar4;
  FUN_14176b2f2(*(undefined8 *)local_270,local_260,local_258);
  FUN_1448c58dc(lVar8,&local_a8);
  *(undefined4 *)(puVar21 + 4) = (undefined4)uStack_98;
  *(undefined4 *)((longlong)puVar21 + 0x24) = uStack_98._4_4_;
  *(undefined4 *)(puVar21 + 5) = (undefined4)uStack_90;
  *(undefined4 *)((longlong)puVar21 + 0x2c) = uStack_90._4_4_;
  *(DWORD *)(puVar21 + 2) = local_a8.s.LowPart;
  *(LONG *)((longlong)puVar21 + 0x14) = local_a8.s.HighPart;
  *(undefined4 *)(puVar21 + 3) = (undefined4)uStack_a0;
  *(undefined4 *)((longlong)puVar21 + 0x1c) = uStack_a0._4_4_;
  local_270.QuadPart = (LONGLONG)(puVar21 + 2);
  uVar7 = (**(code **)(**(longlong **)(*(longlong *)(lVar8 + 8) + 0x178) + 8))();
  uVar7 = FUN_1448c569e(uVar7,param_1);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca4b328) && (FUN_144b3d300(&DAT_14ca4b328), DAT_14ca4b328 == -1)) {
    DAT_14ca4b320 = FUN_145900d44();
    _Init_thread_footer(&DAT_14ca4b328);
  }
  cVar4 = *(char *)(DAT_14ca4b320 + 0x41);
  if (cVar4 == '\x03') {
    cVar4 = '\x02';
  }
  puVar21[6] = uVar7;
  *(char *)(puVar21 + 7) = cVar4;
  local_a8 = param_7;
  lVar8 = FUN_1403b2516();
  local_e8[0] = *(code **)(lVar8 + 0x18);
  uVar7 = FUN_1403b2424(lVar9,puVar26,&local_a8);
  lVar8 = FUN_1403b2516();
  cVar4 = *(char *)(lVar8 + 0x41);
  if (*(char *)(lVar8 + 0x41) == '\x03') {
    cVar4 = '\x02';
  }
  puVar21[0xe] = uVar7;
  *(char *)(puVar21 + 0xf) = cVar4;
  puVar24 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar10 = puVar24 + 6;
  if (*(undefined8 **)(param_1 + 0x78) < puVar10) {
    FUN_140023dd8(puVar26,0x40);
    puVar24 = (undefined8 *)(*puVar26 + 0xf & 0xfffffffffffffff0);
    puVar10 = puVar24 + 6;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar10;
  *puVar24 = &PTR_FUN_14a2a0e08;
  puVar24[2] = 0;
  puVar24[3] = 0;
  puVar24[4] = 0;
  iVar12 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar12 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar12 + 1U) {
    FUN_1448cfae8(local_268,iVar12);
  }
  puVar26 = local_280;
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar12 * 8) = puVar24;
  uVar23 = *(undefined1 *)(param_11 + 0x94);
  puVar25 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar25 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar10) {
    FUN_140023dd8(local_280,0x50);
    puVar25 = (undefined8 *)(*puVar26 + 7 & 0xfffffffffffffff8);
    puVar10 = puVar25 + 9;
  }
  puVar1 = puVar24 + 2;
  *(undefined8 **)(param_1 + 0x70) = puVar10;
  puVar25[1] = *(undefined8 *)(param_11 + 8);
  puVar25[2] = 0;
  *(undefined1 *)(puVar25 + 3) = 0;
  *(undefined8 *)((longlong)puVar25 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar25 + 5) = 1;
  *puVar25 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar25 + 6) = uVar23;
  *(undefined1 *)(puVar25 + 7) = 0;
  *(undefined4 *)((longlong)puVar25 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar25 + 0x35) = 0;
  puVar25[8] = param_11;
  iVar12 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar12 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar12 + 1U) {
    FUN_1447568fc(local_278,iVar12);
  }
  puVar26 = local_280;
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar12 * 8) = puVar25;
  *(int *)((longlong)puVar25 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  *puVar1 = puVar25;
  uVar23 = *(undefined1 *)(param_12 + 0x94);
  puVar25 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar25 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar10) {
    FUN_140023dd8(local_280,0x50);
    puVar25 = (undefined8 *)(*puVar26 + 7 & 0xfffffffffffffff8);
    puVar10 = puVar25 + 9;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar10;
  puVar25[1] = *(undefined8 *)(param_12 + 8);
  puVar25[2] = 0;
  *(undefined1 *)(puVar25 + 3) = 0;
  *(undefined8 *)((longlong)puVar25 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar25 + 5) = 1;
  *puVar25 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar25 + 6) = uVar23;
  *(undefined1 *)(puVar25 + 7) = 0;
  *(undefined4 *)((longlong)puVar25 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar25 + 0x35) = 0;
  puVar25[8] = param_12;
  iVar12 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar12 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar12 + 1U) {
    FUN_1447568fc(local_278,iVar12);
  }
  lVar8 = local_240;
  puVar26 = local_280;
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar12 * 8) = puVar25;
  *(int *)((longlong)puVar25 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar24[3] = puVar25;
  uVar23 = *(undefined1 *)(param_13 + 0x94);
  puVar25 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar25 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar10) {
    FUN_140023dd8(local_280,0x50);
    puVar25 = (undefined8 *)(*puVar26 + 7 & 0xfffffffffffffff8);
    puVar10 = puVar25 + 9;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar10;
  puVar25[1] = *(undefined8 *)(param_13 + 8);
  puVar25[2] = 0;
  *(undefined1 *)(puVar25 + 3) = 0;
  *(undefined8 *)((longlong)puVar25 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar25 + 5) = 1;
  *puVar25 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar25 + 6) = uVar23;
  *(undefined1 *)(puVar25 + 7) = 0;
  *(undefined4 *)((longlong)puVar25 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar25 + 0x35) = 0;
  puVar25[8] = param_13;
  iVar12 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar12 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar12 + 1U) {
    FUN_1447568fc(local_278,iVar12);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar12 * 8) = puVar25;
  *(int *)((longlong)puVar25 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar24[4] = puVar25;
  lVar9 = FUN_14158b208();
  puVar26 = local_280;
  uVar7 = *(undefined8 *)(lVar9 + 0x18);
  puVar24 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar24 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar10) {
    FUN_140023dd8(local_280,0x50);
    puVar24 = (undefined8 *)(*puVar26 + 7 & 0xfffffffffffffff8);
    puVar10 = puVar24 + 9;
  }
  *puVar26 = (ulonglong)puVar10;
  puVar24[1] = uVar7;
  puVar24[2] = 0;
  *puVar24 = &PTR_FUN_14a1fb9b8;
  lVar11 = FUN_14158b208();
  puVar10 = local_250;
  puVar24[3] = puVar1;
  lVar9 = *(longlong *)(lVar11 + 0x48);
  puVar24[4] = lVar9;
  if (lVar9 != 0) {
    LOCK();
    *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
    UNLOCK();
  }
  puVar24[5] = lVar11;
  puVar24[6] = 0;
  *(undefined4 *)(puVar24 + 7) = 0xffffffff;
  *(undefined1 *)((longlong)puVar24 + 0x3c) = 0;
  *puVar24 = &PTR_FUN_14a2a0e10;
  puVar24[8] = puVar1;
  iVar12 = *(int *)(param_1 + 0x1b0);
  pLVar19 = (LARGE_INTEGER *)(longlong)iVar12;
  *(uint *)(param_1 + 0x1b0) = iVar12 + 1U;
  if (*(uint *)(param_1 + 0x1b4) < iVar12 + 1U) {
    FUN_1402aa76e(lVar8,iVar12);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x1a8) + (longlong)pLVar19 * 8) = puVar24;
  *(int *)(puVar24 + 7) = *(int *)(param_1 + 0x1b0) + -1;
  lVar8 = FUN_14158b208();
  cVar4 = '\x02';
  if (*(char *)(lVar8 + 0x41) != '\x03') {
    cVar4 = *(char *)(lVar8 + 0x41);
  }
  puVar21[0x10] = puVar24;
  *(char *)(puVar21 + 0x11) = cVar4;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca1bf90) && (FUN_144b3d300(&DAT_14ca1bf90), DAT_14ca1bf90 == -1)) {
    pLVar19 = &local_a8;
    FUN_145f61cbc(pLVar19);
    local_290 = 0;
    local_2a0 = 0;
    local_2c0 = "Unknown";
    local_2d0 = (LARGE_INTEGER *)0x0;
    uStack_2c8 = 0;
    local_2d8 = (LARGE_INTEGER *)0x14a2a0e38;
    local_298 = 0;
    local_2b0 = 0x80;
    local_2b8 = 0x921;
    local_2a8 = pLVar19;
    FUN_140b49562(&DAT_14ca1bf10,0,1);
    if (local_a8.QuadPart != 0) {
      FUN_1400020a8();
    }
    atexit((_func_5014 *)&LAB_142e66c16);
    _Init_thread_footer(&DAT_14ca1bf90);
    puVar10 = local_250;
    puVar26 = local_280;
  }
  FUN_140069376(param_1);
  LVar2 = local_270;
  uVar20 = (undefined6)((ulonglong)pLVar19 >> 0x10);
  uVar17 = (undefined4)CONCAT62(uVar20,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar17 = (undefined4)CONCAT62(uVar20,4);
  }
  puVar24 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar21 = puVar24 + 0x3b;
  if (*(undefined8 **)(param_1 + 0x78) < puVar21) {
    FUN_140023dd8(puVar26,0x1e0);
    puVar24 = (undefined8 *)(*puVar26 + 7 & 0xfffffffffffffff8);
    puVar21 = puVar24 + 0x3b;
  }
  lVar8 = local_260 + 0x2a98;
  *puVar26 = (ulonglong)puVar21;
  local_a8 = LVar2;
  uStack_a0 = DAT_14ca1bf58;
  if (DAT_14ca1bf58 != 0) {
    LOCK();
    *(int *)(DAT_14ca1bf58 + 8) = *(int *)(DAT_14ca1bf58 + 8) + 1;
    UNLOCK();
  }
  uStack_98 = (longlong *)&DAT_14ca1bf10;
  local_2d8 = (LARGE_INTEGER *)CONCAT71(local_2d8._1_7_,2);
  FUN_140068f1a(puVar24,local_e8,&local_a8,uVar17);
  *puVar24 = &PTR_FUN_14a2a0e20;
  *(LARGE_INTEGER *)(puVar24 + 0x37) = local_270;
  puVar24[0x38] = local_258;
  puVar24[0x39] = lVar8;
  puVar24[0x3a] = puVar10 + 2;
  iVar12 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar12 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar12 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar12);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar12 * 8) = puVar24;
  *(int *)((longlong)puVar24 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,puVar24);
  lVar9 = local_258;
  lVar8 = local_260;
  local_2c0 = (char *)param_14;
  uStack_2c8 = param_8;
  local_2d0._0_4_ = param_9;
  local_2d8 = (LARGE_INTEGER *)param_10;
  FUN_142e07f09(param_1,param_6,local_260,local_258);
  local_2c0 = (char *)param_14;
  uStack_2c8 = param_8;
  local_2d0 = (LARGE_INTEGER *)CONCAT44(local_2d0._4_4_,param_9);
  local_2d8 = (LARGE_INTEGER *)param_10;
  FUN_142e089c3(param_1,param_6,lVar8,lVar9);
  if ((local_60 ^ (ulonglong)local_2f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e55441 FUN_142e55441 body=69 status=ok
// SIG undefined FUN_142e55441(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e55441(void)

{
  _DAT_14ca1a3f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e55483. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1a400,1);
  return;
}



// FUNCTION 142e55486 FUN_142e55486 body=69 status=ok
// SIG undefined FUN_142e55486(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e55486(void)

{
  _DAT_14ca1a408 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e554c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1a410,1);
  return;
}



// FUNCTION 142e554cb FUN_142e554cb body=69 status=ok
// SIG undefined FUN_142e554cb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e554cb(void)

{
  _DAT_14ca1a418 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e5550d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1a420,1);
  return;
}



// FUNCTION 142e55510 FUN_142e55510 body=69 status=ok
// SIG undefined FUN_142e55510(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e55510(void)

{
  _DAT_14ca1a428 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e55552. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1a430,1);
  return;
}



// FUNCTION 142e55555 FUN_142e55555 body=69 status=ok
// SIG undefined FUN_142e55555(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e55555(void)

{
  _DAT_14ca1a438 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e55597. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1a440,1);
  return;
}



// FUNCTION 142e5559a FUN_142e5559a body=69 status=ok
// SIG undefined FUN_142e5559a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e5559a(void)

{
  _DAT_14ca1a448 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e555dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1a450,1);
  return;
}



// FUNCTION 142e555df FUN_142e555df body=478 status=ok
// SIG undefined FUN_142e555df(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_142e555df(undefined8 param_1,longlong param_2,undefined8 param_3,uint param_4,undefined4 param_5
             ,undefined4 param_6,undefined4 param_7,undefined8 *param_8,undefined4 param_9,
             undefined4 param_10)

{
  undefined8 *puVar1;
  undefined1 auStack_18b8 [32];
  undefined1 local_1898 [2976];
  undefined1 local_cf8 [2976];
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_134;
  uint local_130;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_ac;
  undefined4 local_a8;
  ulonglong local_90;
  undefined8 uStack_48;
  
  uStack_48 = 0x142e555f5;
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_18b8;
  FUN_1449343ce(local_1898);
  memcpy(local_1898,(void *)(param_2 + 0x500),0xba0);
  memcpy(local_cf8,(void *)(param_2 + 0x125d0),0xba0);
  local_158 = *(undefined8 *)(param_2 + 0x30f8);
  local_150 = *(undefined8 *)(param_2 + 0x3100);
  local_130 = (uint)*(byte *)(param_2 + 0x2398) << 4 | param_4;
  local_140 = param_5;
  local_13c = param_6;
  local_134 = *(undefined4 *)(param_2 + 0x23c8);
  puVar1 = (undefined8 *)(param_2 + 0x125c0);
  if (param_8 != (undefined8 *)0x0) {
    puVar1 = param_8;
  }
  local_118 = *puVar1;
  local_110 = puVar1[1];
  local_108 = param_7;
  local_d8 = *(undefined4 *)(param_2 + 0x2400);
  uStack_d4 = *(undefined4 *)(param_2 + 0x2404);
  uStack_d0 = *(undefined4 *)(param_2 + 0x2408);
  uStack_cc = *(undefined4 *)(param_2 + 0x240c);
  local_c8 = *(undefined4 *)(param_2 + 0x2410);
  uStack_c4 = *(undefined4 *)(param_2 + 0x2414);
  uStack_c0 = *(undefined4 *)(param_2 + 0x2418);
  uStack_bc = *(undefined4 *)(param_2 + 0x241c);
  local_ac = param_9;
  local_a8 = param_10;
  local_148 = param_3;
  FUN_14493225c(param_1,local_1898);
  if ((local_90 ^ (ulonglong)auStack_18b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e557be FUN_142e557be body=142 status=ok
// SIG undefined FUN_142e557be(void)

void FUN_142e557be(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  if ((((DAT_14c760e34 != 0) &&
       (lVar3 = (ulonglong)DAT_14ca85550 * 0x3c,
       (*(byte *)((longlong)&DAT_14ca814d8 + lVar3 + 3) & 0x10) != 0)) &&
      (((&DAT_14ca814c8)[(ulonglong)DAT_14ca85550 * 0xf] & 0x20000000) != 0)) &&
     ((*(uint *)(&DAT_14ca814cc + lVar3) & 8) != 0)) {
    uVar1 = *(uint *)(param_1 + 0x18);
    iVar2 = *(int *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x30) = iVar2 + uVar1;
    if ((uint)(*(int *)(param_1 + 0x34) - iVar2) < uVar1) {
      FUN_1456ef54e((longlong *)(param_1 + 0x28));
    }
    memset((void *)((longlong)iVar2 * 8 + *(longlong *)(param_1 + 0x28)),0,(longlong)(int)uVar1 << 3
          );
    return;
  }
  return;
}



// FUNCTION 142e5584c FUN_142e5584c body=332 status=ok
// SIG undefined FUN_142e5584c(void)

void FUN_142e5584c(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if ((((DAT_14c760e34 != 0) &&
       (lVar5 = (ulonglong)DAT_14ca85550 * 0x3c,
       (*(byte *)((longlong)&DAT_14ca814d8 + lVar5 + 3) & 0x10) != 0)) &&
      (((&DAT_14ca814c8)[(ulonglong)DAT_14ca85550 * 0xf] & 0x20000000) != 0)) &&
     ((*(uint *)(&DAT_14ca814cc + lVar5) & 8) != 0)) {
    iVar2 = *(int *)(param_1 + 0x34);
    FUN_1414752db(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
    *(undefined4 *)(param_1 + 0x30) = 0;
    if ((iVar2 < 0) && (*(int *)(param_1 + 0x34) != 0)) {
      FUN_14726d282(param_1 + 0x28);
    }
    puVar3 = *(undefined8 **)(param_1 + 0x48);
    if (puVar3 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x48) = 0;
      LOCK();
      piVar1 = (int *)(puVar3 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    puVar3 = *(undefined8 **)(param_1 + 0x50);
    if (puVar3 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x50) = 0;
      LOCK();
      piVar1 = (int *)(puVar3 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    puVar3 = *(undefined8 **)(param_1 + 0x38);
    if (puVar3 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x38) = 0;
      LOCK();
      piVar1 = (int *)(puVar3 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    puVar3 = *(undefined8 **)(param_1 + 0x58);
    if (puVar3 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x58) = 0;
      LOCK();
      piVar1 = (int *)(puVar3 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    puVar3 = *(undefined8 **)(param_1 + 0x60);
    if (puVar3 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x60) = 0;
      LOCK();
      piVar1 = (int *)(puVar3 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    plVar4 = *(longlong **)(param_1 + 0x68);
    if (plVar4 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x68) = 0;
                    /* WARNING: Could not recover jumptable at 0x000142e5597e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x38))();
      return;
    }
  }
  return;
}



// FUNCTION 142e55998 FUN_142e55998 body=47 status=ok
// SIG undefined FUN_142e55998(void)

void FUN_142e55998(void)

{
  DAT_14ca1c510 = &PTR_FUN_14a2a0ea0;
  FUN_144725486(&DAT_14ca1c510);
  FUN_1462f4fb4(&DAT_14ca1c510);
  return;
}



// FUNCTION 142e559c7 FUN_142e559c7 body=69 status=ok
// SIG undefined FUN_142e559c7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e559c7(void)

{
  _DAT_14ca1a468 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e55a09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1a470,1);
  return;
}



// FUNCTION 142e55a0c FUN_142e55a0c body=69 status=ok
// SIG undefined FUN_142e55a0c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e55a0c(void)

{
  _DAT_14ca1a480 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e55a4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1a488,1);
  return;
}



// FUNCTION 142e55a51 FUN_142e55a51 body=69 status=ok
// SIG undefined FUN_142e55a51(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e55a51(void)

{
  _DAT_14ca1a498 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e55a93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1a4a0,1);
  return;
}



// FUNCTION 142e55a96 FUN_142e55a96 body=69 status=ok
// SIG undefined FUN_142e55a96(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e55a96(void)

{
  _DAT_14ca1a4b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e55ad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1a4b8,1);
  return;
}



// FUNCTION 142e55adb FUN_142e55adb body=69 status=ok
// SIG undefined FUN_142e55adb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e55adb(void)

{
  _DAT_14ca1a4c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e55b1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1a4d0,1);
  return;
}



// FUNCTION 142e55b20 FUN_142e55b20 body=69 status=ok
// SIG undefined FUN_142e55b20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e55b20(void)

{
  _DAT_14ca1a4e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e55b62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1a4e8,1);
  return;
}



// FUNCTION 142e55b65 FUN_142e55b65 body=69 status=ok
// SIG undefined FUN_142e55b65(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e55b65(void)

{
  _DAT_14ca1a4f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e55ba7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1a500,1);
  return;
}



// FUNCTION 142e55baa FUN_142e55baa body=69 status=ok
// SIG undefined FUN_142e55baa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e55baa(void)

{
  _DAT_14ca1a510 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e55bec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1a518,1);
  return;
}



// FUNCTION 142e55bfc FUN_142e55bfc body=1154 status=ok
// SIG undefined FUN_142e55bfc(void)

void FUN_142e55bfc(longlong *param_1)

{
  ulonglong *puVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  int *piVar8;
  undefined8 *puVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  undefined8 *puVar17;
  undefined1 auStack_a8 [32];
  uint *local_88;
  longlong local_80;
  undefined1 local_78;
  ulonglong *local_70;
  undefined1 local_65;
  uint local_64;
  undefined1 *local_60;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((longlong)(int)param_1[3] != 0) {
    lVar12 = 0;
    uVar16 = 0;
    do {
      lVar5 = *(longlong *)
               (*(longlong *)(*param_1 + (longlong)*(int *)(param_1[2] + lVar12) * 8) + 8);
      uVar16 = uVar16 + ((uint)*(ushort *)(lVar5 + 0x304) * (uint)*(ushort *)(lVar5 + 0x300) + 0x3f
                        >> 6);
      lVar12 = lVar12 + 8;
    } while ((longlong)(int)param_1[3] * 8 != lVar12);
    if (uVar16 != 0) {
      lVar12 = param_1[4];
      puVar1 = (ulonglong *)(lVar12 + 0x70);
      lVar5 = (ulonglong)uVar16 * 0xc;
      local_88 = (uint *)(*(longlong *)(lVar12 + 0x70) + 3U & 0xfffffffffffffffc);
      uVar7 = (longlong)local_88 + lVar5;
      if (*(ulonglong *)(lVar12 + 0x78) < uVar7) {
        FUN_140023dd8(puVar1,(int)lVar5 + 4);
        local_88 = (uint *)(*puVar1 + 3 & 0xfffffffffffffffc);
        uVar7 = (longlong)local_88 + lVar5;
      }
      *puVar1 = uVar7;
      if ((longlong)(int)param_1[3] != 0) {
        piVar8 = (int *)param_1[2];
        piVar2 = piVar8 + (longlong)(int)param_1[3] * 2;
        uVar11 = 0;
        do {
          lVar4 = *(longlong *)(*(longlong *)(*param_1 + (longlong)*piVar8 * 8) + 8);
          uVar13 = (uint)*(ushort *)(lVar4 + 0x304) * (uint)*(ushort *)(lVar4 + 0x300);
          iVar14 = piVar8[1];
          uVar15 = uVar13 >> 6;
          if (0x3f < uVar13) {
            iVar10 = 0;
            do {
              uVar7 = (ulonglong)(uVar11 + iVar10);
              *(int *)((longlong)local_88 + uVar7 * 0xc) = iVar10;
              *(undefined4 *)((longlong)local_88 + 4U + uVar7 * 0xc) = 0x40;
              *(int *)((longlong)local_88 + 8U + uVar7 * 0xc) = iVar14;
              iVar14 = iVar14 + 0x1800;
              iVar10 = iVar10 + 1;
            } while (uVar15 + (uVar15 == 0) != iVar10);
            uVar11 = uVar11 + iVar10;
          }
          if ((uVar13 & 0x3f) != 0) {
            uVar7 = (ulonglong)uVar11;
            *(uint *)((longlong)local_88 + uVar7 * 0xc) = uVar15;
            *(uint *)((longlong)local_88 + 4U + uVar7 * 0xc) = uVar13 & 0x3f;
            *(int *)((longlong)local_88 + 8U + uVar7 * 0xc) = iVar14;
            uVar11 = uVar11 + 1;
          }
          piVar8 = piVar8 + 2;
        } while (piVar8 != piVar2);
      }
      uVar7 = (ulonglong)(uVar16 - 1) * 2 + 1;
      lVar4 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      local_78 = 1;
      local_80 = lVar5;
      local_70 = puVar1;
      lVar5 = FUN_144942e63(lVar12,L"Skinning.RefPoseHeaders",0xc,1 << ((byte)lVar4 & 0x1f));
      puVar1 = local_70;
      puVar17 = (undefined8 *)(*(longlong *)(lVar12 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar6 = puVar17 + 6;
      if (*(undefined8 **)(lVar12 + 0x78) < puVar6) {
        FUN_140023dd8(local_70,0x40);
        puVar17 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
        puVar6 = puVar17 + 6;
      }
      *(undefined8 **)(lVar12 + 0x70) = puVar6;
      *puVar17 = &PTR_FUN_14a2a1268;
      puVar17[2] = 0;
      *(undefined1 *)(puVar17 + 3) = 1;
      puVar17[4] = 0;
      puVar17[5] = 0;
      iVar14 = *(int *)(lVar12 + 0xa0);
      *(uint *)(lVar12 + 0xa0) = iVar14 + 1U;
      if (*(uint *)(lVar12 + 0xa4) < iVar14 + 1U) {
        FUN_1448cfae8(lVar12 + 0x98,iVar14);
      }
      puVar1 = local_70;
      *(undefined8 **)(*(longlong *)(lVar12 + 0x98) + (longlong)iVar14 * 8) = puVar17;
      lVar4 = param_1[5];
      cVar3 = *(char *)(lVar4 + 0x68);
      puVar9 = (undefined8 *)(*(longlong *)(lVar12 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar9 + 8;
      if (*(undefined8 **)(lVar12 + 0x78) < puVar6) {
        FUN_140023dd8(local_70,0x48);
        puVar9 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar6 = puVar9 + 8;
      }
      *(undefined8 **)(lVar12 + 0x70) = puVar6;
      puVar9[1] = *(undefined8 *)(lVar4 + 8);
      puVar9[2] = 0;
      *(undefined1 *)(puVar9 + 3) = 2;
      *(undefined8 *)((longlong)puVar9 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar9 + 5) = 0;
      *puVar9 = &PTR_FUN_14a1fb3e8;
      *(byte *)(puVar9 + 6) = cVar3 >> 7 & 0x1c;
      *(undefined2 *)((longlong)puVar9 + 0x31) = 0;
      puVar9[7] = lVar4;
      iVar14 = *(int *)(lVar12 + 0x1a0);
      *(uint *)(lVar12 + 0x1a0) = iVar14 + 1U;
      if (*(uint *)(lVar12 + 0x1a4) < iVar14 + 1U) {
        FUN_1447568fc(lVar12 + 0x198,iVar14);
      }
      puVar1 = local_70;
      *(undefined8 **)(*(longlong *)(lVar12 + 0x198) + (longlong)iVar14 * 8) = puVar9;
      *(int *)((longlong)puVar9 + 0x1c) = *(int *)(lVar12 + 0x1a0) + -1;
      puVar17[4] = puVar9;
      cVar3 = *(char *)(lVar5 + 0x68);
      puVar9 = (undefined8 *)(*(longlong *)(lVar12 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar9 + 9;
      if (*(undefined8 **)(lVar12 + 0x78) < puVar6) {
        FUN_140023dd8(local_70,0x50);
        puVar9 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar6 = puVar9 + 9;
      }
      *(undefined8 **)(lVar12 + 0x70) = puVar6;
      puVar9[1] = *(undefined8 *)(lVar5 + 8);
      puVar9[2] = 0;
      *(undefined1 *)(puVar9 + 3) = 3;
      *(undefined8 *)((longlong)puVar9 + 0x1c) = 0xffffffffffffffff;
      *puVar9 = &PTR_FUN_14a1fb168;
      *(byte *)(puVar9 + 5) = cVar3 >> 7 & 0x1c;
      *(undefined8 *)((longlong)puVar9 + 0x2c) = 0xffffffff00000000;
      puVar9[7] = 0;
      puVar9[8] = lVar5;
      iVar14 = *(int *)(lVar12 + 0x1a0);
      *(uint *)(lVar12 + 0x1a0) = iVar14 + 1U;
      if (*(uint *)(lVar12 + 0x1a4) < iVar14 + 1U) {
        FUN_1447568fc(lVar12 + 0x198,iVar14);
      }
      *(undefined8 **)(*(longlong *)(lVar12 + 0x198) + (longlong)iVar14 * 8) = puVar9;
      *(int *)((longlong)puVar9 + 0x1c) = *(int *)(lVar12 + 0x1a0) + -1;
      puVar17[5] = puVar9;
      FUN_1472637e4(*(undefined8 *)
                     (&DAT_14ca8c1f0 +
                     (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8),
                    local_58);
      local_88 = &local_64;
      local_60 = &DAT_100000001;
      local_64 = uVar16;
      FUN_147263851(lVar12,&local_65,local_58,puVar17 + 2);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e56080 FUN_142e56080 body=901 status=ok
// SIG undefined FUN_142e56080(void)

void FUN_142e56080(longlong *param_1)

{
  ulonglong *puVar1;
  ushort uVar2;
  longlong lVar3;
  void *_Src;
  void *_Src_00;
  size_t _Size;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  void *_Dst;
  int *piVar15;
  undefined1 auStack_d8 [32];
  ulonglong local_b8;
  ulonglong local_b0;
  undefined1 local_a8;
  uint local_9c;
  ulonglong local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_80;
  longlong local_78;
  int *local_70;
  longlong *local_68;
  int *local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  ulonglong uVar11;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((longlong)(int)param_1[3] != 0) {
    lVar13 = 0;
    uVar9 = 0;
    do {
      lVar3 = *(longlong *)
               (*(longlong *)(*param_1 + (longlong)*(int *)(param_1[2] + lVar13) * 8) + 8);
      uVar9 = uVar9 + (uint)*(ushort *)(lVar3 + 0x304) * (uint)*(ushort *)(lVar3 + 0x300) * 2;
      lVar13 = lVar13 + 8;
    } while ((longlong)(int)param_1[3] * 8 != lVar13);
    if (uVar9 != 0) {
      lVar13 = param_1[4];
      puVar1 = (ulonglong *)(lVar13 + 0x70);
      uVar11 = (ulonglong)uVar9 * 0x30;
      local_98 = *(longlong *)(lVar13 + 0x70) + 0xfU & 0xfffffffffffffff0;
      uVar4 = local_98 + uVar11;
      if (*(ulonglong *)(lVar13 + 0x78) < uVar4) {
        FUN_140023dd8(puVar1,(uint)uVar11 | 0x10);
        local_98 = *puVar1 + 0xf & 0xfffffffffffffff0;
        uVar4 = local_98 + uVar11;
      }
      *puVar1 = uVar4;
      local_58 = 0;
      uStack_50 = 0;
      iVar14 = (int)param_1[3];
      if (iVar14 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar14);
      }
      local_80 = uVar11;
      local_78 = lVar13;
      if (iVar14 != 0) {
        FUN_142e68af8(&local_58);
        if ((longlong)(int)param_1[3] != 0) {
          piVar15 = (int *)param_1[2];
          local_70 = piVar15 + (longlong)(int)param_1[3] * 2;
          local_9c = 0;
          local_68 = param_1;
          do {
            lVar13 = *(longlong *)(*(longlong *)(*local_68 + (longlong)*piVar15 * 8) + 8);
            local_90 = (ulonglong)*(ushort *)(lVar13 + 0x300);
            uVar2 = *(ushort *)(lVar13 + 0x304);
            uVar11 = (ulonglong)uVar2;
            local_60 = piVar15;
            puVar5 = (undefined8 *)(**(code **)(**(longlong **)(lVar13 + 0x2e0) + 0x70))();
            puVar6 = (undefined8 *)(**(code **)(**(longlong **)(lVar13 + 0x2e0) + 0x78))();
            local_88 = uVar11;
            if (uVar2 != 0) {
              _Src = (void *)*puVar5;
              _Src_00 = (void *)*puVar6;
              _Dst = (void *)((ulonglong)local_9c * 0x30 + local_98);
              iVar14 = (int)local_90;
              _Size = (ulonglong)(uint)(iVar14 << 4) * 3;
              do {
                memcpy(_Dst,_Src,_Size);
                memcpy((void *)((longlong)_Dst + _Size),_Src_00,_Size);
                _Dst = (void *)((longlong)_Dst + (ulonglong)(uint)(iVar14 << 5) * 3);
                uVar10 = (int)uVar11 - 1;
                uVar11 = (ulonglong)uVar10;
              } while (uVar10 != 0);
            }
            uVar11 = uStack_50;
            lVar13 = (longlong)(int)uStack_50;
            uVar10 = (int)uStack_50 + 1;
            uStack_50 = CONCAT44(uStack_50._4_4_,uVar10);
            if (uStack_50._4_4_ < uVar10) {
              FUN_142e68ccc(&local_58,uVar11 & 0xffffffff);
            }
            iVar14 = (int)local_88 * (int)local_90;
            *(undefined8 *)(local_58 + lVar13 * 0xc) = 0;
            *(undefined4 *)(local_58 + 8 + lVar13 * 0xc) = 0;
            *(uint *)(local_58 + 4 + lVar13 * 0xc) = local_9c * 0x30;
            *(int *)(local_58 + lVar13 * 0xc) = local_60[1];
            *(int *)(local_58 + 8 + lVar13 * 0xc) = iVar14 * 0x60;
            local_9c = local_9c + iVar14 * 2;
            piVar15 = local_60 + 2;
            param_1 = local_68;
          } while (piVar15 != local_70);
        }
      }
      lVar3 = local_58;
      lVar13 = local_78;
      local_b0 = local_80;
      local_b8 = local_98;
      local_a8 = 1;
      uVar7 = FUN_1402ec56b(local_78,L"Skinning.AnimTransforms",0x30,uVar9);
      lVar8 = (longlong)(int)uStack_50;
      if (lVar8 != 0) {
        lVar12 = 0;
        do {
          local_b0 = (ulonglong)*(uint *)(lVar3 + 8 + lVar12);
          local_b8 = (ulonglong)*(uint *)(lVar3 + 4 + lVar12);
          FUN_143211d72(lVar13,param_1[5],*(undefined4 *)(lVar3 + lVar12),uVar7);
          lVar12 = lVar12 + 0xc;
        } while (lVar8 * 0xc != lVar12);
      }
      if (lVar3 != 0) {
        piVar15 = (int *)((lVar3 + -8) - (ulonglong)*(uint *)(lVar3 + -8));
        LOCK();
        *piVar15 = *piVar15 + -1;
        UNLOCK();
        if (*piVar15 == 0) {
          if (*(longlong *)(piVar15 + 0x10) - (longlong)piVar15 == 0x10000) {
            lVar13 = DAT_14c872d30;
            if (DAT_14c872d30 == 0) {
              lVar13 = FUN_145bdc178();
            }
            FUN_140028df4(lVar13,piVar15);
          }
          else {
            FUN_144705e74(piVar15);
          }
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142e56406 FUN_142e56406 body=1566 status=ok
// SIG undefined FUN_142e56406(void)

void FUN_142e56406(longlong *param_1,float param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  double *pdVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  uint uVar14;
  double *pdVar15;
  uint *puVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  double dVar19;
  undefined1 auStack_f8 [32];
  undefined1 **local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  double local_b8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  double local_90;
  undefined1 *local_88 [2];
  longlong *local_78;
  longlong local_68 [5];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_b8 = DAT_14c8464f0;
  local_c8 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  uStack_c0 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  lVar9 = (**(code **)(*param_1 + 0x48))();
  if (lVar9 != 0) {
    plVar10 = (longlong *)FUN_140636ec6(lVar9);
    if (plVar10 == (longlong *)0x0) {
      iVar6 = *(int *)(lVar9 + 0x130);
      if (0 < (longlong)iVar6) {
        pdVar15 = *(double **)(lVar9 + 0x128);
        pdVar3 = pdVar15 + (longlong)iVar6 * 3;
        dVar19 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        uStack_c0 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        local_b8 = DAT_14c8464f0;
        do {
          dVar19 = dVar19 + *pdVar15;
          uStack_c0 = uStack_c0 + pdVar15[1];
          local_b8 = local_b8 + pdVar15[2];
          pdVar15 = pdVar15 + 3;
        } while (pdVar15 != pdVar3);
        local_c8 = 1.0 / (double)iVar6;
        local_b8 = local_b8 * local_c8;
        uStack_c0 = uStack_c0 * local_c8;
        local_c8 = local_c8 * dVar19;
      }
    }
    else {
      (**(code **)(*plVar10 + 0x718))(plVar10,&local_c8,local_88);
    }
  }
  local_90 = local_b8;
  local_a0 = (undefined4)local_c8;
  uStack_9c = local_c8._4_4_;
  uStack_98 = (undefined4)uStack_c0;
  uStack_94 = uStack_c0._4_4_;
  lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar9 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_142e56536;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_142e5653b;
      goto LAB_142e56580;
    }
  }
  else {
LAB_142e56536:
    if (iVar6 != 0x10) {
LAB_142e56580:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar9 + 0xc60), iVar6 == 2))
        goto LAB_142e5653b;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_142e5653b;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar12 = (uint *)*puVar2;
        if (puVar12 != (uint *)0x0) goto LAB_142e56727;
        while( true ) {
          uVar14 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar14 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar14 | 1;
            __tlregdtor(&LAB_142e5a5ee);
          }
          lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar11 = *(undefined4 **)(lVar9 + 0x310);
          *(undefined8 *)(lVar9 + 0x310) = 0;
          if (puVar11 == (undefined4 *)0x0) {
            puVar11 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar11 = 0xffffffff;
          *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
          puVar11[0x12] = 0;
          *puVar2 = puVar11;
          FUN_140217a48(puVar2);
          puVar12 = (uint *)*puVar2;
LAB_142e56727:
          puVar18 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar16 = (uint *)(puVar18 + 0x1a);
          uVar14 = puVar12[0x12];
          if (puVar16 <= puVar12 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
            LOCK();
            uVar4 = *puVar12;
            *puVar12 = *puVar12 + uVar14 + 1;
            UNLOCK();
            if ((uVar4 ^ uVar14) != 0xffffffff) break;
            puVar12 = (uint *)*puVar2;
            *puVar12 = 0xffffffff;
            *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
            puVar12[0x12] = 0;
            *puVar2 = puVar12;
            puVar18 = (undefined8 *)((longlong)puVar12 + 0x5fU & 0xfffffffffffffff8);
            puVar16 = (uint *)(puVar18 + 0x1a);
            uVar14 = 0;
            if (puVar16 <= puVar12 + 0x4000) {
              uVar14 = 1;
              goto LAB_142e567a7;
            }
          }
        }
        uVar14 = uVar14 + 1;
LAB_142e567a7:
        *(uint **)(puVar12 + 0x10) = puVar16;
        puVar12[0x12] = uVar14;
        iVar6 = 0;
        FUN_1447247dc(puVar18,0);
        *puVar18 = &PTR_FUN_14a2a10e8;
        puVar18[0x15] = param_1 + -1;
        *(float *)(puVar18 + 0x16) = param_2;
        *(undefined4 *)((longlong)puVar18 + 0xb4) = uStack_a4;
        *(undefined4 *)(puVar18 + 0x17) = local_a0;
        *(undefined4 *)((longlong)puVar18 + 0xbc) = uStack_9c;
        *(undefined4 *)(puVar18 + 0x18) = uStack_98;
        puVar18[0x18] = CONCAT44(uStack_94,uStack_98);
        puVar18[0x19] = local_90;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar14 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar14 < 2) {
            uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar14];
            iVar6 = 0;
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
        if (*(code **)(puVar18[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar18[0xe] + 0x18))(puVar18 + 0xe,puVar18 + 9);
        }
        puVar18[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar18[9] = puVar18;
        puVar18[10] = puVar18;
        lVar9 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar9 == 0) {
          uVar5 = 1;
          if ((char)uVar17 != '\x06') {
            uVar5 = uVar17;
          }
          uVar17 = uVar5;
          uVar13 = 0;
        }
        else {
          if ((char)uVar17 == '\x06') {
            uVar17 = *(ulonglong *)(lVar9 + 0x38) >> 0x3b;
          }
          uVar13 = *(undefined8 *)(lVar9 + 0x30);
        }
        puVar18[0xf] = uVar13;
        puVar18[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar18 + 0x1c) = iVar6;
        if (puVar18 == (undefined8 *)0x0) {
          local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
          UNLOCK();
          local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(puVar18);
          LOCK();
          piVar1 = (int *)(puVar18 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar18)(puVar18,1);
          }
        }
      }
      else {
        local_88[0] = (undefined1 *)0x0;
        local_78 = (longlong *)FUN_14001cc68(0x30,8);
        *local_78 = (longlong)&PTR_LAB_14a2a1090;
        local_78[1] = (longlong)(param_1 + -1);
        *(float *)(local_78 + 2) = param_2;
        local_78[4] = CONCAT44(uStack_94,uStack_98);
        local_78[5] = (longlong)local_90;
        *(undefined4 *)((longlong)local_78 + 0x14) = uStack_a4;
        *(undefined4 *)(local_78 + 3) = local_a0;
        *(undefined4 *)((longlong)local_78 + 0x1c) = uStack_9c;
        *(undefined4 *)(local_78 + 4) = uStack_98;
        if (local_78 + 1 != (longlong *)0x0) {
          local_88[0] = &LAB_142e670b0;
        }
        local_d8 = local_88;
        FUN_14005a792(&DAT_14ca9a440,L"FTickSkinningSceneExtension",&DAT_14ca1bfc8);
        if (local_88[0] != (undefined1 *)0x0) {
          plVar10 = local_78;
          if (local_78 == (longlong *)0x0) {
            plVar10 = local_68;
          }
          (**(code **)(*plVar10 + 0x10))();
        }
      }
      goto LAB_142e56658;
    }
  }
LAB_142e5653b:
  *(float *)(param_1 + 0x62) = param_2 + *(float *)(param_1 + 0x62);
  *(undefined4 *)(param_1 + 99) = local_a0;
  *(undefined4 *)((longlong)param_1 + 0x31c) = uStack_9c;
  *(undefined4 *)(param_1 + 100) = uStack_98;
  *(undefined4 *)((longlong)param_1 + 0x324) = uStack_94;
  param_1[0x65] = (longlong)local_90;
LAB_142e56658:
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e56a2a FUN_142e56a2a body=295 status=ok
// SIG undefined FUN_142e56a2a(void)

void FUN_142e56a2a(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  lVar3 = FUN_14489a2c5(param_2,&DAT_14ca63c48,&DAT_14ca63c78,4,2,0);
  cVar1 = *(char *)(lVar3 + 0x68);
  puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar4 = puVar5 + 9;
  if (*(undefined8 **)(param_2 + 0x78) < puVar4) {
    FUN_140023dd8((longlong *)(param_2 + 0x70),0x50);
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 9;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar4;
  puVar5[1] = *(undefined8 *)(lVar3 + 8);
  puVar5[2] = 0;
  *(undefined1 *)(puVar5 + 3) = 3;
  *(undefined8 *)((longlong)puVar5 + 0x1c) = 0xffffffffffffffff;
  *puVar5 = &PTR_FUN_14a1fb168;
  *(byte *)(puVar5 + 5) = cVar1 >> 7 & 0x1c;
  *(undefined8 *)((longlong)puVar5 + 0x2c) = 0xffffffff00000000;
  puVar5[7] = 0;
  puVar5[8] = lVar3;
  iVar2 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar2 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar2 + 1U) {
    FUN_1447568fc(param_2 + 0x198,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar2 * 8) = puVar5;
  *(int *)((longlong)puVar5 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  *param_1 = puVar5;
  param_1[1] = puVar5;
  param_1[2] = puVar5;
  param_1[3] = puVar5;
  return;
}



// FUNCTION 142e56b51 FUN_142e56b51 body=82 status=ok
// SIG undefined FUN_142e56b51(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e56b51(void)

{
  longlong *plVar1;
  
  _DAT_14ca1a660 = &PTR__purecall_14a222c38;
  if (DAT_14ca1a690 != 0) {
    plVar1 = &DAT_14ca1a6b0;
    if (DAT_14ca1a6a0 != (longlong *)0x0) {
      plVar1 = DAT_14ca1a6a0;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14ca1a670 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 142e56ba3 FUN_142e56ba3 body=69 status=ok
// SIG undefined FUN_142e56ba3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e56ba3(void)

{
  _DAT_14ca1a6d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e56be5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1a6d8,1);
  return;
}



// FUNCTION 142e56c30 FUN_142e56c30 body=574 status=ok
// SIG undefined FUN_142e56c30(void)

void FUN_142e56c30(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  int param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined1 auStack_a8 [32];
  int *local_88;
  undefined8 local_80;
  int local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_80 = param_2;
  FUN_1405bfba3(param_1,*param_3,0,2);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar9 = puVar11 + 0xc;
  if (*(undefined8 **)(param_1 + 0x78) < puVar9) {
    FUN_140023dd8((longlong *)(param_1 + 0x70),0x70);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar9 = puVar11 + 0xc;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar9;
  *puVar11 = &PTR_FUN_14a2a01b8;
  puVar11[6] = 0;
  puVar11[2] = 0;
  puVar11[3] = 0;
  puVar11[4] = 0;
  puVar11[8] = 0;
  puVar11[9] = 0;
  iVar10 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar10 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar10 + 1U) {
    FUN_1448cfae8((longlong *)(param_1 + 0x98),iVar10);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar10 * 8) = puVar11;
  uVar1 = *(undefined4 *)param_3;
  uVar2 = *(undefined4 *)((longlong)param_3 + 4);
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
  uVar5 = *(undefined4 *)((longlong)param_3 + 0x14);
  uVar6 = *(undefined4 *)(param_3 + 3);
  uVar7 = *(undefined4 *)((longlong)param_3 + 0x1c);
  *(undefined4 *)(puVar11 + 4) = *(undefined4 *)(param_3 + 2);
  *(undefined4 *)((longlong)puVar11 + 0x24) = uVar5;
  *(undefined4 *)(puVar11 + 5) = uVar6;
  *(undefined4 *)((longlong)puVar11 + 0x2c) = uVar7;
  *(undefined4 *)(puVar11 + 2) = uVar1;
  *(undefined4 *)((longlong)puVar11 + 0x14) = uVar2;
  *(undefined4 *)(puVar11 + 3) = uVar3;
  *(undefined4 *)((longlong)puVar11 + 0x1c) = uVar4;
  puVar11[6] = param_4;
  *(int *)(puVar11 + 7) = param_5;
  puVar11[8] = param_7;
  puVar11[9] = param_8;
  puVar11[10] = 0x100000000;
  *(undefined4 *)(puVar11 + 0xb) = param_9;
  *(undefined4 *)((longlong)puVar11 + 0x5c) = param_10;
  FUN_145f51a9e();
  FUN_1448e935e(local_80,&local_58,&DAT_14ca1a998,param_6);
  FUN_145f51a9e();
  local_74 = param_5 + 0x7e;
  if (-1 < param_5 + 0x3f) {
    local_74 = param_5 + 0x3f;
  }
  local_68 = local_58;
  uStack_64 = uStack_54;
  uStack_60 = uStack_50;
  uStack_5c = uStack_4c;
  local_74 = local_74 >> 6;
  local_70 = &DAT_100000001;
  iVar10 = 1;
  if (DAT_14ca84f24 < local_74) {
    iVar10 = local_74 + 0xfe;
    if (-1 < local_74 + 0x7f) {
      iVar10 = local_74 + 0x7f;
    }
    iVar10 = iVar10 >> 7;
    local_70 = (undefined1 *)CONCAT44(1,iVar10);
    local_74 = 0x80;
  }
  if (DAT_14ca84f28 < iVar10) {
    iVar8 = iVar10 + 0xfe;
    if (-1 < iVar10 + 0x7f) {
      iVar8 = iVar10 + 0x7f;
    }
    local_70 = (undefined1 *)CONCAT44(iVar8 >> 7,0x80);
  }
  local_88 = &local_74;
  FUN_1472691bf(param_1,&local_58,&local_68,puVar11 + 2);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e56e6f FUN_142e56e6f body=69 status=ok
// SIG undefined FUN_142e56e6f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e56e6f(void)

{
  _DAT_14ca1add0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e56eb1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1add8,1);
  return;
}



// FUNCTION 142e56eb4 FUN_142e56eb4 body=69 status=ok
// SIG undefined FUN_142e56eb4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e56eb4(void)

{
  _DAT_14ca1ade8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e56ef6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1adf0,1);
  return;
}



// FUNCTION 142e56ef9 FUN_142e56ef9 body=69 status=ok
// SIG undefined FUN_142e56ef9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e56ef9(void)

{
  _DAT_14ca1adf8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e56f3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1ae00,1);
  return;
}



// FUNCTION 142e56f3e FUN_142e56f3e body=69 status=ok
// SIG undefined FUN_142e56f3e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e56f3e(void)

{
  _DAT_14ca1ae10 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e56f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1ae18,1);
  return;
}



// FUNCTION 142e56f83 FUN_142e56f83 body=69 status=ok
// SIG undefined FUN_142e56f83(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e56f83(void)

{
  _DAT_14ca1ae20 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e56fc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1ae28,1);
  return;
}



// FUNCTION 142e56fc8 FUN_142e56fc8 body=69 status=ok
// SIG undefined FUN_142e56fc8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e56fc8(void)

{
  _DAT_14ca1ae30 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e5700a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1ae38,1);
  return;
}



// FUNCTION 142e5700d FUN_142e5700d body=990 status=ok
// SIG undefined FUN_142e5700d(void)

ulonglong FUN_142e5700d(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  LARGE_INTEGER LVar3;
  LARGE_INTEGER LVar4;
  char cVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  bool bVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auStack_b8 [32];
  LARGE_INTEGER local_98;
  longlong *local_90;
  LARGE_INTEGER local_88;
  ulonglong local_80;
  LARGE_INTEGER local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  QueryPerformanceCounter(&local_98);
  LVar3 = local_98;
  uVar12 = 0xffffffffffffffff;
  if (param_2 != 0x7fffffffffffffff) {
    if ((double)param_2 / 10000000.0 <= 0.0) {
      uVar12 = 0;
    }
    else {
      dVar14 = ((double)param_2 / 10000000.0) / DAT_14c83f418;
      uVar12 = (ulonglong)dVar14;
      uVar12 = (longlong)(dVar14 - 9.223372036854776e+18) & (longlong)uVar12 >> 0x3f | uVar12;
    }
  }
  local_88.s = local_98.s;
  local_80 = uVar12;
  FUN_14726f13b(param_1);
  FUN_14470f0c8(&local_98,0);
  plVar1 = local_90;
  LVar4 = local_98;
  if (local_90 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_90 + 1) = (int)local_90[1] + 1;
    UNLOCK();
  }
  puVar7 = (undefined8 *)FUN_14726f1f0();
  *puVar7 = UE::Tasks::Private::FTaskBase::vftable;
  puVar7[1] = &DAT_100000002;
  puVar7[2] = 0;
  *(undefined4 *)(puVar7 + 3) = 0;
  *(undefined4 *)(puVar7 + 4) = 0xffffffff;
  puVar7[6] = 0;
  puVar7[7] = 0x100000000;
  *(undefined1 *)(puVar7 + 8) = 1;
  puVar7[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                TTaskDelegateDummy::vftable;
  puVar7[0xf] = 0;
  puVar7[0x10] = 0xe800000000000020;
  puVar7[0x12] = 0;
  puVar7[0x13] = 0x100000000;
  *(undefined2 *)(puVar7 + 0x14) = 0;
  LOCK();
  bVar13 = *(char *)(puVar7 + 8) == '\x01';
  if (bVar13) {
    *(char *)(puVar7 + 8) = '\0';
  }
  UNLOCK();
  if (!bVar13) {
    FUN_14008cdb0(puVar7 + 8);
  }
  *puVar7 = &PTR_FUN_14a2a1358;
  if (*(code **)(puVar7[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(puVar7[0xe] + 0x18))(puVar7 + 0xe,puVar7 + 9);
  }
  puVar7[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                ::vftable;
  puVar7[9] = puVar7;
  puVar7[10] = puVar7;
  lVar9 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8);
  if (lVar9 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(lVar9 + 0x30);
  }
  puVar7[0xf] = uVar8;
  puVar7[0x10] = 0xc80000527a251600;
  *(undefined4 *)((longlong)puVar7 + 0x1c) = 1;
  ((LARGE_INTEGER *)(puVar7 + 0x15))->QuadPart = (LONGLONG)LVar4;
  puVar7[0x16] = plVar1;
  *puVar7 = &PTR_FUN_14a2a1348;
  uVar11 = CONCAT71((int7)((ulonglong)LVar4 >> 8),1);
  FUN_14726f3f0(puVar7,param_1,1);
  local_78.s.LowPart._0_1_ = 1;
  cVar5 = FUN_1447439e4(puVar7);
  if (cVar5 == '\0') {
    lVar9 = 0xffffffff;
    if (uVar12 != 0xffffffffffffffff) {
      auVar17._8_4_ = (int)(uVar12 >> 0x20);
      auVar17._0_8_ = uVar12;
      auVar17._12_4_ = 0x45300000;
      dVar14 = (((double)CONCAT44(0x43300000,(int)uVar12) - 4503599627370496.0) +
               (auVar17._8_8_ - 1.9342813113834067e+25)) * DAT_14c83f418;
      QueryPerformanceCounter(&local_78);
      lVar9 = CONCAT71(local_78.QuadPart._1_7_,local_78.s.LowPart._0_1_) - (longlong)LVar3;
      auVar16._8_4_ = (int)((ulonglong)lVar9 >> 0x20);
      auVar16._0_8_ = lVar9;
      auVar16._12_4_ = 0x45300000;
      auVar15._8_8_ = 0;
      auVar15._0_8_ =
           (dVar14 - (((double)CONCAT44(0x43300000,(int)lVar9) - 4503599627370496.0) +
                     (auVar16._8_8_ - 1.9342813113834067e+25)) * DAT_14c83f418) * 10000000.0 + 0.5;
      auVar16 = roundpd(auVar15,auVar15,1);
      lVar10 = ((longlong)auVar16._0_8_ + 9999) / 10000;
      if (0xfffffffe < lVar10) {
        lVar10 = 0xffffffff;
      }
      lVar9 = 0;
      if (0 < lVar10) {
        lVar9 = lVar10;
      }
    }
    uVar6 = (**(code **)(*(longlong *)local_98 + 0x20))(local_98.QuadPart,lVar9,0);
    uVar11 = (ulonglong)uVar6;
  }
  if (puVar7 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar7 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar7)(puVar7,1);
    }
  }
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_90 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar2 = (int *)((longlong)local_90 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_90 + 0x10))(local_90);
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar11 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e573ec FUN_142e573ec body=994 status=ok
// SIG undefined FUN_142e573ec(void)

longlong *
FUN_142e573ec(longlong param_1,undefined8 param_2,longlong param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 param_6,longlong *param_7)

{
  int *piVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  longlong *_Dst;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  longlong *local_70;
  undefined4 local_68;
  undefined8 uStack_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  iVar4 = DAT_14c7608b0;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(byte *)(param_1 + 0x1a1) & 1) == 0) {
    _Dst = (longlong *)0x0;
    goto LAB_142e57429;
  }
  _Dst = (longlong *)0x0;
  if ((*(int *)(param_4 + 1) == 0) || (DAT_14ca1ade0 == 0)) goto LAB_142e57429;
  _Dst = (longlong *)FUN_142e69830(param_2);
  memset(_Dst,0,0x160);
  FUN_14726f4d0(_Dst);
  FUN_144b0f6c2(_Dst[1],(int)_Dst[2]);
  iVar6 = *(int *)(param_4 + 1);
  uVar5 = *param_4;
  *(int *)(_Dst + 2) = iVar6;
  if (iVar6 == 0 && *(int *)((longlong)_Dst + 0x14) == 0) {
    *(undefined4 *)((longlong)_Dst + 0x14) = 0;
  }
  else {
    FUN_14726f6a2(_Dst + 1,iVar6);
    FUN_14726f6d3(_Dst[1],uVar5,iVar6);
  }
  *(byte *)((longlong)_Dst + 0x15c) =
       (DAT_14c7608bc != 0) << 2 |
       *(byte *)((longlong)_Dst + 0x15c) & 0xf8 | (DAT_14c7608b8 != 0) * '\x02';
  local_58 = *(longlong *)(param_3 + 0x5650);
  if (local_58 != 0) {
    LOCK();
    *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
    UNLOCK();
  }
  local_50 = *param_7;
  if (local_50 != 0) {
    LOCK();
    *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
    UNLOCK();
  }
  local_70 = &local_58;
  local_68 = 2;
  puVar8 = (undefined8 *)FUN_144a23e24(&DAT_14c896140);
  puVar10 = (undefined8 *)puVar8[1];
  if (puVar10 == (undefined8 *)0x0) {
    puVar10 = (undefined8 *)*puVar8;
    if (puVar10 == (undefined8 *)0x0) {
      uVar7 = FUN_14470efbc(&DAT_14c896180);
      if (uVar7 == 0) {
        puVar8[1] = 0;
LAB_142e57792:
        puVar10 = (undefined8 *)FUN_14001cc68(0x10000,0);
        puVar8[1] = puVar10;
        iVar6 = 0xff;
        puVar11 = puVar10;
        do {
          puVar9 = puVar11 + 0x20;
          *puVar11 = puVar9;
          iVar6 = iVar6 + -1;
          puVar11 = puVar9;
        } while (iVar6 != 0);
        goto LAB_142e576f9;
      }
      puVar10 = *(undefined8 **)
                 (*(longlong *)(&DAT_14c833b00 + (ulonglong)(uVar7 >> 0xe) * 8) + 8 +
                 (ulonglong)(uVar7 & 0x3fff) * 0x18);
      FUN_1447d080c(uVar7);
      puVar8[1] = puVar10;
      if (puVar10 == (undefined8 *)0x0) goto LAB_142e57792;
    }
    else {
      puVar8[1] = puVar10;
      puVar9 = puVar8;
LAB_142e576f9:
      *puVar9 = 0;
    }
    *(undefined4 *)(puVar8 + 2) = 0x100;
    iVar6 = 0xff;
  }
  else {
    iVar6 = *(int *)(puVar8 + 2) + -1;
  }
  puVar8[1] = *puVar10;
  *(int *)(puVar8 + 2) = iVar6;
  FUN_144a23e74(puVar10,2,1);
  *puVar10 = &PTR_FUN_14a2a1380;
  local_78 = 0;
  FUN_144a24082(puVar10,L".\\Runtime/Renderer/Private/Nanite/NaniteVisibility.cpp(370)",1,iVar4 == 0
               );
  puVar10[0x15] = param_1;
  puVar10[0x16] = _Dst;
  puVar10[0x17] = param_5;
  puVar10[0x18] = param_6;
  *puVar10 = &PTR_FUN_14a2a1370;
  FUN_1447271e8(puVar10,&local_70);
  FUN_144a23f14((ulonglong)puVar10[0x10] >> 0x3b & 0xffffffffffffff07,
                *(undefined4 *)((longlong)puVar10 + 0x1c));
  uStack_60._7_1_ = 1;
  FUN_1447439e4(puVar10);
  puVar8 = (undefined8 *)*_Dst;
  *_Dst = (longlong)puVar10;
  if (puVar8 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar8 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar8)(puVar8,1);
    }
  }
  lVar12 = 0x10;
  do {
    puVar10 = *(undefined8 **)((longlong)&uStack_60 + lVar12);
    if (puVar10 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar10 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar10)(puVar10,1);
      }
    }
    lVar12 = lVar12 + -8;
  } while (lVar12 != 0);
  pcVar2 = (char *)(param_1 + 0x1a0);
  LOCK();
  bVar13 = *(char *)(param_1 + 0x1a0) == '\0';
  if (bVar13) {
    *(char *)(param_1 + 0x1a0) = '\x01';
  }
  UNLOCK();
  if (!bVar13) {
    FUN_1447d2058();
  }
  iVar4 = *(int *)(param_1 + 0x110);
  *(uint *)(param_1 + 0x110) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x114) < iVar4 + 1U) {
    FUN_14726fb54(param_1 + 8,iVar4);
  }
  lVar12 = param_1 + 8;
  if (*(longlong *)(param_1 + 0x108) != 0) {
    lVar12 = *(longlong *)(param_1 + 0x108);
  }
  *(longlong **)(lVar12 + (longlong)iVar4 * 8) = _Dst;
  if (*_Dst != 0) {
    iVar4 = *(int *)(param_1 + 0x120);
    *(uint *)(param_1 + 0x120) = iVar4 + 1U;
    if (*(uint *)(param_1 + 0x124) < iVar4 + 1U) {
      FUN_14726fbcc((longlong *)(param_1 + 0x118),iVar4);
    }
    lVar12 = *_Dst;
    *(longlong *)(*(longlong *)(param_1 + 0x118) + (longlong)iVar4 * 8) = lVar12;
    if (lVar12 != 0) {
      LOCK();
      *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
      UNLOCK();
    }
  }
  LOCK();
  cVar3 = *pcVar2;
  if (cVar3 == '\x01') {
    *pcVar2 = '\0';
  }
  UNLOCK();
  if (cVar3 != '\x01') {
    FUN_14008cdb0(pcVar2);
  }
LAB_142e57429:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return _Dst;
}



// FUNCTION 142e577cf FUN_142e577cf body=69 status=ok
// SIG undefined FUN_142e577cf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e577cf(void)

{
  _DAT_14ca1ae40 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e57811. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1ae48,1);
  return;
}



// FUNCTION 142e57814 FUN_142e57814 body=69 status=ok
// SIG undefined FUN_142e57814(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e57814(void)

{
  _DAT_14ca1ae50 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e57856. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1ae58,1);
  return;
}



// FUNCTION 142e57859 FUN_142e57859 body=69 status=ok
// SIG undefined FUN_142e57859(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e57859(void)

{
  _DAT_14ca1ae60 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e5789b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1ae68,1);
  return;
}



// FUNCTION 142e5789e FUN_142e5789e body=69 status=ok
// SIG undefined FUN_142e5789e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e5789e(void)

{
  _DAT_14ca1ae70 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e578e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1ae78,1);
  return;
}



// FUNCTION 142e578e3 FUN_142e578e3 body=69 status=ok
// SIG undefined FUN_142e578e3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e578e3(void)

{
  _DAT_14ca1ae80 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e57925. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1ae88,1);
  return;
}



// FUNCTION 142e57928 FUN_142e57928 body=69 status=ok
// SIG undefined FUN_142e57928(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e57928(void)

{
  _DAT_14ca1ae98 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e5796a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1aea0,1);
  return;
}



// FUNCTION 142e5796d FUN_142e5796d body=69 status=ok
// SIG undefined FUN_142e5796d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e5796d(void)

{
  _DAT_14ca1aeb0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e579af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1aeb8,1);
  return;
}



// FUNCTION 142e579d6 FUN_142e579d6 body=10600 status=ok
// SIG undefined FUN_142e579d6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_142e579d6(longlong param_1,longlong param_2,longlong param_3,int *param_4,
                       longlong *param_5,longlong *param_6,undefined4 *param_7,longlong param_8)

{
  uint *puVar1;
  undefined4 uVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  ulonglong *puVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  longlong *plVar15;
  undefined4 *puVar16;
  longlong *plVar17;
  int iVar18;
  ulonglong *puVar19;
  undefined2 uVar20;
  longlong lVar21;
  undefined1 uVar22;
  undefined4 uVar23;
  int iVar24;
  uint uVar25;
  ulonglong uVar26;
  undefined8 *puVar27;
  longlong lVar28;
  bool bVar29;
  undefined1 auStack_218 [32];
  int *local_1f8;
  int *local_1f0;
  byte local_1e1;
  longlong *local_1e0;
  undefined8 *local_1d8;
  longlong local_1d0;
  ulonglong *local_1c8;
  undefined4 *local_1c0;
  longlong local_1b8;
  undefined8 *local_1b0;
  ulonglong local_1a8;
  ulonglong local_1a0;
  ulonglong local_198;
  ulonglong local_190;
  longlong local_188;
  longlong local_180;
  longlong local_178;
  longlong local_170;
  undefined4 local_164;
  longlong local_160;
  ulonglong local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140;
  longlong local_138;
  ulonglong local_130;
  ulonglong local_128;
  ulonglong local_120;
  int local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  int local_e8;
  int local_e4;
  undefined4 local_e0;
  undefined1 local_d9;
  int local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  uint uStack_b0;
  undefined4 uStack_ac;
  undefined2 uStack_a8;
  undefined1 uStack_a6;
  undefined1 uStack_a5;
  undefined1 uStack_a4;
  undefined1 uStack_a3;
  undefined2 uStack_a2;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  ulonglong local_60;
  
  uVar9 = DAT_14c707940 ^ (ulonglong)auStack_218;
  local_60 = uVar9;
  if (DAT_14caf1b90 == '\0') {
    uVar9 = FUN_145e7ba6a(&DAT_14caf1948);
  }
  if (((((param_2 != 0) && (0 < (int)param_5[1])) && (DAT_14caf1b90 == '\x01')) &&
      (uVar9 = (ulonglong)DAT_14caf1998, DAT_14caf1998 != 0xffffffff)) &&
     (((DAT_14caf1998 != 0 || (DAT_14caf1b58 == '\0')) && (*param_4 < 0)))) {
    local_1f0 = (int *)0x0;
    local_1f8 = (int *)CONCAT44(local_1f8._4_4_,2);
    local_150 = FUN_14489a2c5(param_1,&DAT_14ca63c48,&DAT_14ca63c78,4);
    uVar6 = *(uint *)(param_5 + 1);
    uVar9 = (ulonglong)uVar6;
    if ((0 < (int)uVar6) && (uVar6 == *(uint *)(param_6 + 1))) {
      local_160 = param_2 + 0x2af0;
      local_140 = param_1 + 0x188;
      local_1e0 = (longlong *)(param_1 + 0x70);
      local_178 = param_1 + 0x98;
      local_1d0 = param_1 + 0x198;
      local_180 = param_1 + 0x178;
      local_138 = param_3 + 0x10;
      local_188 = 0;
      local_1a8 = 0;
      do {
        if ((((*(byte *)(*param_5 + 0x125b0 + local_188 * 0x13c10) & 2) == 0) &&
            (local_1b8 = *param_5 + local_188 * 0x13c10, *(char *)(local_1b8 + 0x30c8) == '\0')) &&
           (((local_1c0 = (undefined4 *)(local_188 * 0x390 + *param_6),
             *(char *)(local_1b8 + 0x23f2) == '\0' && (*(char *)(local_1b8 + 0x23f5) != '\x01')) ||
            (*(int *)(local_1b8 + 0x1dd0) != 2)))) {
          local_198 = (ulonglong)
                      (uint)(*(int *)(local_1b8 + 0x13b90) - *(int *)(local_1b8 + 0x13b88));
          local_190 = (ulonglong)
                      (uint)(*(int *)(local_1b8 + 0x13b94) - *(int *)(local_1b8 + 0x13b8c));
          if (DAT_14c760a84 == -1) {
            FUN_145fdab76(&local_d8,L"FRDGSystemTextures",
                          L".\\Runtime/Renderer/Private/SystemTextures.cpp",0x66);
            DAT_14c760a84 = FUN_145d12cf0(&local_d8);
            if (CONCAT44(uStack_d4,local_d8) != 0) {
              FUN_1400020a8();
            }
          }
          if ((DAT_14c760a84 < *(int *)(param_1 + 0x130)) &&
             (lVar28 = *(longlong *)(*(longlong *)(param_1 + 0x128) + (longlong)DAT_14c760a84 * 8),
             lVar28 != 0)) {
            local_1c8 = (ulonglong *)(lVar28 + 8);
          }
          else {
            local_1c8 = (ulonglong *)0x0;
          }
          local_170 = *(longlong *)(local_1c0 + 0x10);
          uVar9 = local_1c8[1];
          local_120 = *(ulonglong *)(local_1c0 + 0x12);
          if (*(ulonglong *)(local_1c0 + 0x12) == 0) {
            local_120 = uVar9;
          }
          local_128 = *(ulonglong *)(local_1c0 + 0x14);
          if (*(ulonglong *)(local_1c0 + 0x14) == 0) {
            local_128 = uVar9;
          }
          local_130 = *(ulonglong *)(local_1c0 + 0x16);
          if (*(ulonglong *)(local_1c0 + 0x16) == 0) {
            local_130 = uVar9;
          }
          local_158 = *(ulonglong *)(local_1c0 + 0x18);
          if (*(ulonglong *)(local_1c0 + 0x18) == 0) {
            local_158 = uVar9;
          }
          if (local_170 == 0) {
            local_170 = FUN_144735828(&DAT_14ca63b10,param_1,0x20);
          }
          local_148 = *(longlong *)(local_1c0 + 0xe);
          if ((DAT_14caf1998 == 0x1d) && ((int)param_5[1] == 1)) {
            DAT_14ca4d330 = DAT_14ca4d330 + 499;
            DAT_14ca4d100 = 1;
            if (DAT_14caf1b90 == '\0') {
              FUN_145e7ba6a(&DAT_14caf1948);
            }
            if (DAT_14c760a84 == -1) {
              FUN_145fdab76(&local_d8,L"FRDGSystemTextures",
                            L".\\Runtime/Renderer/Private/SystemTextures.cpp",0x66);
              DAT_14c760a84 = FUN_145d12cf0(&local_d8);
              if (CONCAT44(uStack_d4,local_d8) != 0) {
                FUN_1400020a8();
              }
            }
            plVar17 = local_1e0;
            uVar6 = DAT_14ca84e48;
            if (0x47 < DAT_14ca84e48) {
              uVar6 = 0x48;
            }
            local_c8 = 0;
            local_d8 = uVar6 + (uVar6 == 0);
            uStack_d4 = 1;
            uStack_d0 = 0x10129;
            local_1a8 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
            uVar9 = local_1a8 + 0x150;
            if (*(ulonglong *)(param_1 + 0x78) < uVar9) {
              FUN_140023dd8(local_1e0,0x160);
              local_1a8 = *plVar17 + 0xfU & 0xfffffffffffffff0;
              uVar9 = local_1a8 + 0x150;
            }
            *(ulonglong *)(param_1 + 0x70) = uVar9;
            FUN_1456bd266(local_1a8,L"Nanite.PickingFeedback",&local_d8,0);
            iVar5 = *(int *)(param_1 + 400);
            *(uint *)(param_1 + 400) = iVar5 + 1U;
            if (*(uint *)(param_1 + 0x194) < iVar5 + 1U) {
              FUN_144737178(local_140,iVar5);
            }
            *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar5 * 8) = local_1a8;
            *(int *)(local_1a8 + 0x7c) = *(int *)(param_1 + 400) + -1;
            local_1f0 = (int *)0x0;
            local_1f8 = (int *)CONCAT44(local_1f8._4_4_,2);
            local_1d8 = (undefined8 *)FUN_14489a2c5(param_1,&DAT_14ca63c48,&DAT_14ca63c78,4);
            plVar17 = local_1e0;
            puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
            puVar11 = puVar13 + 0x20;
            if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
              FUN_140023dd8(local_1e0,0x110);
              puVar13 = (undefined8 *)(*plVar17 + 0xfU & 0xfffffffffffffff0);
              puVar11 = puVar13 + 0x20;
            }
            *(undefined8 **)(param_1 + 0x70) = puVar11;
            *puVar13 = &PTR_FUN_14a2a03c8;
            puVar13[2] = 0;
            *(undefined1 *)(puVar13 + 3) = 1;
            puVar13[0x10] = 0;
            puVar13[4] = 0;
            puVar13[5] = 0;
            puVar13[6] = 0;
            *(undefined1 *)(puVar13 + 0x11) = 1;
            puVar13[0x12] = 0;
            *(undefined1 *)(puVar13 + 0x13) = 1;
            puVar13[0x14] = 0;
            *(undefined1 *)(puVar13 + 0x15) = 1;
            puVar13[0x16] = 0;
            puVar13[0x17] = 0;
            puVar13[0x18] = 0;
            puVar13[0x19] = 0;
            puVar13[0x1a] = 0;
            puVar13[0x1b] = 0;
            puVar13[0x1c] = 0;
            puVar13[0x1d] = 0;
            puVar13[0x1e] = 0;
            iVar5 = *(int *)(param_1 + 0xa0);
            *(uint *)(param_1 + 0xa0) = iVar5 + 1U;
            if (*(uint *)(param_1 + 0xa4) < iVar5 + 1U) {
              FUN_1448cfae8(local_178,iVar5);
            }
            lVar28 = local_1b8;
            local_1b0 = puVar13 + 2;
            *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar5 * 8) = puVar13;
            FUN_1472ea582(param_1,local_1b8 + 0x13870);
            FUN_1448c58dc(lVar28,&local_d8);
            *(undefined4 *)(puVar13 + 0x12) = (undefined4)local_c8;
            *(undefined4 *)((longlong)puVar13 + 0x94) = local_c8._4_4_;
            *(undefined4 *)(puVar13 + 0x13) = (undefined4)uStack_c0;
            *(undefined4 *)((longlong)puVar13 + 0x9c) = uStack_c0._4_4_;
            *(int *)(puVar13 + 0x10) = local_d8;
            *(undefined4 *)((longlong)puVar13 + 0x84) = uStack_d4;
            *(undefined4 *)(puVar13 + 0x11) = uStack_d0;
            *(undefined4 *)((longlong)puVar13 + 0x8c) = uStack_cc;
            uVar10 = (**(code **)(**(longlong **)(*(longlong *)(lVar28 + 8) + 0x178) + 8))();
            uVar10 = FUN_1448c569e(uVar10,param_1);
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14ca4b328) && (FUN_144b3d300(&DAT_14ca4b328), DAT_14ca4b328 == -1))
            {
              DAT_14ca4b320 = FUN_145900d44();
              _Init_thread_footer(&DAT_14ca4b328);
            }
            cVar4 = *(char *)(DAT_14ca4b320 + 0x41);
            if (*(char *)(DAT_14ca4b320 + 0x41) == '\x03') {
              cVar4 = '\x02';
            }
            puVar13[0x14] = uVar10;
            *(char *)(puVar13 + 0x15) = cVar4;
            uVar10 = FUN_142e5a33f(param_1);
            puVar13[0x16] = uVar10;
            uVar22 = 0;
            lVar28 = FUN_144735dd8(param_1,&DAT_14cb00e10,0);
            plVar17 = local_1e0;
            if ((*(byte *)(lVar28 + 0x68) & 0x80) != 0) {
              uVar22 = 0x1c;
            }
            puVar27 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
            puVar11 = puVar27 + 9;
            if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
              FUN_140023dd8(local_1e0,0x50);
              puVar27 = (undefined8 *)(*plVar17 + 7U & 0xfffffffffffffff8);
              puVar11 = puVar27 + 9;
            }
            *(undefined8 **)(param_1 + 0x70) = puVar11;
            puVar27[1] = *(undefined8 *)(lVar28 + 8);
            puVar27[2] = 0;
            *(undefined1 *)(puVar27 + 3) = 3;
            *(undefined8 *)((longlong)puVar27 + 0x1c) = 0xffffffffffffffff;
            *puVar27 = &PTR_FUN_14a1fb168;
            *(undefined1 *)(puVar27 + 5) = uVar22;
            *(undefined8 *)((longlong)puVar27 + 0x2c) = 0xffffffff00000000;
            puVar27[7] = 0;
            puVar27[8] = lVar28;
            iVar5 = *(int *)(param_1 + 0x1a0);
            *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
            if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
              FUN_1447568fc(local_1d0,iVar5);
            }
            plVar17 = local_1e0;
            *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar27;
            *(int *)((longlong)puVar27 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
            puVar13[0x17] = puVar27;
            uVar6 = DAT_14ca1ae90;
            bVar29 = DAT_14c7608c4 != 0;
            *(undefined4 *)(puVar13 + 8) = 0x1d;
            *(uint *)((longlong)puVar13 + 0x44) = uVar6;
            *(undefined4 *)(puVar13 + 9) = 0;
            *(uint *)((longlong)puVar13 + 0x4c) = (uint)bVar29;
            uVar8 = local_1c0[1];
            uVar23 = local_1c0[2];
            uVar2 = local_1c0[3];
            *(undefined4 *)(puVar13 + 10) = *local_1c0;
            *(undefined4 *)((longlong)puVar13 + 0x54) = uVar8;
            *(undefined4 *)(puVar13 + 0xb) = uVar23;
            *(undefined4 *)((longlong)puVar13 + 0x5c) = uVar2;
            *(undefined4 *)(puVar13 + 0xc) = local_1c0[4];
            *(undefined4 *)((longlong)puVar13 + 100) = local_1c0[10];
            iVar5 = *(int *)(param_2 + 0x2b08);
            iVar18 = -1;
            if (iVar5 != 0) {
              lVar28 = *(longlong *)(param_2 + 0x2b00);
              if (*(longlong *)(param_2 + 0x2b00) == 0) {
                lVar28 = local_160;
              }
              uVar9 = (ulonglong)(iVar5 + 0x1fU >> 5);
              iVar24 = -0x3e - (iVar5 + 0x1fU & 0xffffffe0);
              uVar6 = 0xffffffff >> (-(char)iVar5 & 0x1fU);
              do {
                bVar29 = uVar9 == 0;
                uVar9 = uVar9 - 1;
                if (bVar29) goto LAB_142e59106;
                iVar24 = iVar24 + 0x20;
                uVar25 = uVar6 & *(uint *)(lVar28 + uVar9 * 4);
                uVar6 = 0xffffffff;
              } while (uVar25 == 0);
              uVar9 = (ulonglong)uVar25 * 2 + 1;
              lVar28 = 0x3f;
              if (uVar9 != 0) {
                for (; uVar9 >> lVar28 == 0; lVar28 = lVar28 + -1) {
                }
              }
              iVar18 = -(((uint)lVar28 ^ 0x3f) + iVar24);
            }
LAB_142e59106:
            *(int *)(puVar13 + 0xd) = iVar18 + 1;
            puVar13[0xe] = CONCAT44((int)_DAT_14caf1b84,(int)_DAT_14caf1b80);
            lVar28 = *(longlong *)(local_1c0 + 0xe);
            cVar4 = *(char *)(lVar28 + 0x68);
            puVar27 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
            puVar11 = puVar27 + 9;
            if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
              FUN_140023dd8(local_1e0,0x50);
              puVar27 = (undefined8 *)(*plVar17 + 7U & 0xfffffffffffffff8);
              puVar11 = puVar27 + 9;
            }
            *(undefined8 **)(param_1 + 0x70) = puVar11;
            puVar27[1] = *(undefined8 *)(lVar28 + 8);
            puVar27[2] = 0;
            *(undefined1 *)(puVar27 + 3) = 3;
            *(undefined8 *)((longlong)puVar27 + 0x1c) = 0xffffffffffffffff;
            *puVar27 = &PTR_FUN_14a1fb168;
            *(byte *)(puVar27 + 5) = cVar4 >> 7 & 0x1c;
            *(undefined8 *)((longlong)puVar27 + 0x2c) = 0xffffffff00000000;
            puVar27[7] = 0;
            puVar27[8] = lVar28;
            iVar5 = *(int *)(param_1 + 0x1a0);
            *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
            if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
              FUN_1447568fc(local_1d0,iVar5);
            }
            plVar17 = local_1e0;
            *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar27;
            *(int *)((longlong)puVar27 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
            puVar13[0x18] = puVar27;
            puVar13[0x19] = *(undefined8 *)(local_1c0 + 0x12);
            puVar13[0x1a] = *(undefined8 *)(local_1c0 + 0x14);
            puVar13[0x1b] = *(undefined8 *)(local_1c0 + 0x16);
            puVar13[0x1c] = *(undefined8 *)(local_1c0 + 0x18);
            puVar13[0x1d] = *(undefined8 *)(param_3 + 0x1c0);
            cVar4 = *(char *)(local_1d8 + 0xd);
            puVar27 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
            puVar11 = puVar27 + 9;
            if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
              FUN_140023dd8(local_1e0,0x50);
              puVar27 = (undefined8 *)(*plVar17 + 7U & 0xfffffffffffffff8);
              puVar11 = puVar27 + 9;
            }
            *(undefined8 **)(param_1 + 0x70) = puVar11;
            puVar27[1] = local_1d8[1];
            puVar27[2] = 0;
            *(undefined1 *)(puVar27 + 3) = 3;
            *(undefined8 *)((longlong)puVar27 + 0x1c) = 0xffffffffffffffff;
            *puVar27 = &PTR_FUN_14a1fb168;
            *(byte *)(puVar27 + 5) = cVar4 >> 7 & 0x1c;
            *(undefined8 *)((longlong)puVar27 + 0x2c) = 0xffffffff00000000;
            puVar27[7] = 0;
            puVar27[8] = local_1d8;
            iVar5 = *(int *)(param_1 + 0x1a0);
            *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
            if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
              FUN_1447568fc(local_1d0,iVar5);
            }
            plVar17 = local_1e0;
            *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar27;
            *(int *)((longlong)puVar27 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
            puVar13[0x1e] = puVar27;
            cVar4 = *(char *)(local_1a8 + 0x68);
            puVar27 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
            puVar11 = puVar27 + 8;
            if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
              FUN_140023dd8(local_1e0,0x48);
              puVar27 = (undefined8 *)(*plVar17 + 7U & 0xfffffffffffffff8);
              puVar11 = puVar27 + 8;
            }
            *(undefined8 **)(param_1 + 0x70) = puVar11;
            puVar27[1] = *(undefined8 *)(local_1a8 + 8);
            puVar27[2] = 0;
            *(undefined1 *)(puVar27 + 3) = 2;
            *(undefined8 *)((longlong)puVar27 + 0x1c) = 0xffffffffffffffff;
            *(undefined1 *)(puVar27 + 5) = 0;
            *puVar27 = &PTR_FUN_14a1fb3e8;
            *(byte *)(puVar27 + 6) = cVar4 >> 7 & 0x1c;
            *(undefined2 *)((longlong)puVar27 + 0x31) = 0;
            puVar27[7] = local_1a8;
            iVar5 = *(int *)(param_1 + 0x1a0);
            *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
            if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
              FUN_1447568fc(local_1d0,iVar5);
            }
            *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar27;
            *(int *)((longlong)puVar27 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
            puVar13[6] = puVar27;
            FUN_14726ab5a(*(undefined8 *)(local_1b8 + 0x13818),&local_d8);
            local_108 = &DAT_100000001;
            uStack_100 = 1;
            local_1f8 = (int *)&local_108;
            FUN_14726abc7(param_1,&local_d9,&local_d8);
          }
          puVar19 = (ulonglong *)(local_1c0 + 0x20);
          local_1c0[0xe2] = 0;
          if ((int)local_1c0[0xe3] < 0) {
            FUN_1472702c8(puVar19);
          }
          uVar9 = DAT_14caf199c;
          uVar6 = DAT_14caf1998;
          if ((int)DAT_14caf1998 < 1) {
            if (DAT_14caf1998 == 0) {
              local_1b0 = DAT_14caf1ab8;
              if (DAT_14caf1ab8 == (undefined8 *)0x0) {
                local_1b0 = &DAT_14caf19b8;
              }
              local_1d8 = (undefined8 *)(longlong)DAT_14caf1ac0;
              if (local_1d8 != (undefined8 *)0x0) {
                local_1d8 = (undefined8 *)((longlong)local_1d8 << 3);
                puVar11 = (undefined8 *)0x0;
                do {
                  local_d8 = 0;
                  uStack_d4 = 0;
                  uVar9 = local_c8 >> 0x20;
                  local_c8 = (local_c8 >> 0x20 & 0xfffffffc) << 0x20;
                  lVar28 = *(longlong *)((longlong)local_1b0 + (longlong)puVar11);
                  uStack_d0 = (undefined4)lVar28;
                  uStack_cc = (undefined4)((ulonglong)lVar28 >> 0x20);
                  uVar8 = FUN_14358519c(&DAT_14caf1948,&uStack_d0);
                  local_c8 = CONCAT44(local_c8._4_4_,uVar8);
                  bVar3 = FUN_147bcbbbc(&DAT_14caf1948,&uStack_d0);
                  local_c8._0_5_ =
                       CONCAT14((lVar28 == 0) * '\x02' | bVar3 | (byte)uVar9 & 0xfc,
                                (undefined4)local_c8);
                  iVar5 = local_1c0[0xe2];
                  local_1c0[0xe2] = iVar5 + 1U;
                  if ((uint)local_1c0[0xe3] < iVar5 + 1U) {
                    FUN_1472703bc(puVar19,iVar5);
                  }
                  puVar12 = *(ulonglong **)(local_1c0 + 0xe0);
                  if (*(ulonglong **)(local_1c0 + 0xe0) == (ulonglong *)0x0) {
                    puVar12 = puVar19;
                  }
                  puVar12[(longlong)iVar5 * 3 + 2] = local_c8;
                  puVar12 = puVar12 + (longlong)iVar5 * 3;
                  *(int *)puVar12 = local_d8;
                  *(undefined4 *)((longlong)puVar12 + 4) = uStack_d4;
                  *(undefined4 *)(puVar12 + 1) = uStack_d0;
                  *(undefined4 *)((longlong)puVar12 + 0xc) = uStack_cc;
                  puVar11 = puVar11 + 1;
                } while (local_1d8 != puVar11);
              }
            }
          }
          else {
            local_1e1 = local_1e1 & 0xfc | DAT_14caf19a4;
            iVar5 = local_1c0[0xe2];
            lVar28 = (longlong)iVar5;
            local_1c0[0xe2] = iVar5 + 1U;
            if ((uint)local_1c0[0xe3] < iVar5 + 1U) {
              FUN_1472703bc(puVar19,iVar5);
            }
            puVar12 = *(ulonglong **)(local_1c0 + 0xe0);
            if (*(ulonglong **)(local_1c0 + 0xe0) == (ulonglong *)0x0) {
              puVar12 = puVar19;
            }
            puVar12[lVar28 * 3] = 0;
            puVar12[lVar28 * 3 + 1] = uVar9;
            *(uint *)(puVar12 + lVar28 * 3 + 2) = uVar6;
            *(byte *)((longlong)puVar12 + lVar28 * 0x18 + 0x14) = local_1e1;
          }
          puVar12 = *(ulonglong **)(local_1c0 + 0xe0);
          if (*(ulonglong **)(local_1c0 + 0xe0) == (ulonglong *)0x0) {
            puVar12 = puVar19;
          }
          if ((longlong)(int)local_1c0[0xe2] == 0) {
            bVar29 = false;
          }
          else {
            lVar28 = 0;
            bVar29 = false;
            do {
              if ((*(byte *)((longlong)puVar12 + lVar28 + 0x14) & 2) == 0) {
                bVar29 = (bool)(bVar29 | (*(uint *)((longlong)puVar12 + lVar28 + 0x10) & 0xfffffffc)
                                         == 0xc);
              }
              lVar28 = lVar28 + 0x18;
            } while ((longlong)(int)local_1c0[0xe2] * 0x18 != lVar28);
          }
          local_d8 = 0;
          uStack_d4 = 0;
          uStack_d0 = 0;
          uStack_cc = 0;
          local_1f0 = &local_d8;
          local_1f8 = (int *)CONCAT71(local_1f8._1_7_,0x30);
          local_1a0 = FUN_1430aa924(param_1,&DAT_14ca63c38,&DAT_14ca63c58);
          local_1b0 = (undefined8 *)local_1c8[1];
          if ((((bVar29) && (DAT_14ca84e22 == '\x01')) && (DAT_14ca84e1f == '\x01')) &&
             (DAT_14c760874 != 0)) {
            uVar7 = (uint)local_198;
            uVar25 = (uint)local_190;
            uVar8 = (**(code **)(*DAT_14ca83900 + 0x2d8))
                              (DAT_14ca83900,local_198 & 0xffffffff,local_190 & 0xffffffff);
            plVar17 = local_1e0;
            local_1d8 = (undefined8 *)CONCAT44(local_1d8._4_4_,uVar8);
            uStack_d0 = DAT_14ca83a30;
            uStack_cc = DAT_14ca83a34;
            local_c8 = CONCAT44(DAT_14ca83a3c,DAT_14ca83a38);
            uStack_a6 = 0;
            local_d8 = 0x20008;
            uStack_d4 = 0;
            uStack_a5 = 0xd;
            uStack_a4 = 0;
            uStack_ac = 0x10001;
            uStack_a8 = 0x101;
            uVar6 = DAT_14ca84e40;
            if ((int)uVar7 < (int)DAT_14ca84e40) {
              uVar6 = uVar7;
            }
            if ((int)uVar6 < 2) {
              uVar6 = 1;
            }
            uStack_a3 = 0xff;
            uStack_b0 = DAT_14ca84e40;
            if ((int)uVar25 < (int)DAT_14ca84e40) {
              uStack_b0 = uVar25;
            }
            uStack_c0 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83a40);
            if ((int)uStack_b0 < 2) {
              uStack_b0 = 1;
            }
            local_b8 = (ulonglong)uVar6 << 0x20;
            local_1b0 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
            puVar11 = local_1b0 + 0x24;
            if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
              FUN_140023dd8(local_1e0,0x128);
              local_1b0 = (undefined8 *)(*plVar17 + 7U & 0xfffffffffffffff8);
              puVar11 = local_1b0 + 0x24;
            }
            *(undefined8 **)(param_1 + 0x70) = puVar11;
            FUN_1456bbb8c(local_1b0,L"Nanite.SceneZDecoded",&local_d8,0);
            iVar5 = *(int *)(param_1 + 0x180);
            *(uint *)(param_1 + 0x180) = iVar5 + 1U;
            if (*(uint *)(param_1 + 0x184) < iVar5 + 1U) {
              FUN_14472c0f6(local_180,iVar5);
            }
            plVar17 = local_1e0;
            *(undefined8 **)(*(longlong *)(param_1 + 0x178) + (longlong)iVar5 * 8) = local_1b0;
            *(int *)((longlong)local_1b0 + 0x9c) = *(int *)(param_1 + 0x180) + -1;
            uStack_d0 = DAT_14ca83a30;
            uStack_cc = DAT_14ca83a34;
            local_c8 = CONCAT44(DAT_14ca83a3c,DAT_14ca83a38);
            uStack_a6 = 0;
            local_d8 = 0x20008;
            uStack_d4 = 0;
            uStack_a5 = 0x30;
            uStack_a4 = 0;
            uStack_ac = 0x10001;
            uStack_a8 = 0x101;
            uVar6 = DAT_14ca84e40;
            if ((int)(uint)local_198 < (int)DAT_14ca84e40) {
              uVar6 = (uint)local_198;
            }
            if ((int)uVar6 < 2) {
              uVar6 = 1;
            }
            uStack_a3 = 0xff;
            uStack_b0 = DAT_14ca84e40;
            if ((int)(uint)local_190 < (int)DAT_14ca84e40) {
              uStack_b0 = (uint)local_190;
            }
            uStack_c0 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83a40);
            if ((int)uStack_b0 < 2) {
              uStack_b0 = 1;
            }
            local_b8 = (ulonglong)uVar6 << 0x20;
            local_1a0 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
            uVar9 = local_1a0 + 0x120;
            if (*(ulonglong *)(param_1 + 0x78) < uVar9) {
              FUN_140023dd8(local_1e0,0x128);
              local_1a0 = *plVar17 + 7U & 0xfffffffffffffff8;
              uVar9 = local_1a0 + 0x120;
            }
            *(ulonglong *)(param_1 + 0x70) = uVar9;
            FUN_1456bbb8c(local_1a0,L"Nanite.SceneZLayout",&local_d8,0);
            iVar5 = *(int *)(param_1 + 0x180);
            *(uint *)(param_1 + 0x180) = iVar5 + 1U;
            if (*(uint *)(param_1 + 0x184) < iVar5 + 1U) {
              FUN_14472c0f6(local_180,iVar5);
            }
            plVar17 = local_1e0;
            *(ulonglong *)(*(longlong *)(param_1 + 0x178) + (longlong)iVar5 * 8) = local_1a0;
            *(int *)(local_1a0 + 0x9c) = *(int *)(param_1 + 0x180) + -1;
            local_1c8 = (ulonglong *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
            puVar12 = local_1c8 + 0x10;
            if (*(ulonglong **)(param_1 + 0x78) < puVar12) {
              FUN_140023dd8(local_1e0,0x90);
              local_1c8 = (ulonglong *)(*plVar17 + 0xfU & 0xfffffffffffffff0);
              puVar12 = local_1c8 + 0x10;
            }
            *(ulonglong **)(param_1 + 0x70) = puVar12;
            *local_1c8 = (ulonglong)&PTR_FUN_14a2a1390;
            local_1c8[2] = 0;
            *(undefined1 *)(local_1c8 + 3) = 1;
            local_1c8[4] = 0;
            local_1c8[10] = 0;
            local_1c8[0xb] = 0;
            local_1c8[0xc] = 0;
            local_1c8[0xd] = 0;
            local_1c8[0xe] = 0;
            iVar5 = *(int *)(param_1 + 0xa0);
            *(uint *)(param_1 + 0xa0) = iVar5 + 1U;
            if (*(uint *)(param_1 + 0xa4) < iVar5 + 1U) {
              FUN_1448cfae8(local_178,iVar5);
            }
            puVar12 = local_1c8;
            *(ulonglong **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar5 * 8) = local_1c8;
            lVar28 = FUN_1447e4f80();
            plVar17 = local_1e0;
            cVar4 = *(char *)(lVar28 + 0x41);
            if (*(char *)(lVar28 + 0x41) == '\x03') {
              cVar4 = '\x02';
            }
            puVar12[2] = *(ulonglong *)(local_1b8 + 0x18);
            *(char *)(puVar12 + 3) = cVar4;
            lVar28 = *(longlong *)(local_1c0 + 0xc);
            cVar4 = *(char *)(lVar28 + 0x68);
            puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
            puVar11 = puVar13 + 9;
            if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
              FUN_140023dd8(local_1e0,0x50);
              puVar13 = (undefined8 *)(*plVar17 + 7U & 0xfffffffffffffff8);
              puVar11 = puVar13 + 9;
            }
            *(undefined8 **)(param_1 + 0x70) = puVar11;
            puVar13[1] = *(undefined8 *)(lVar28 + 8);
            puVar13[2] = 0;
            *(undefined1 *)(puVar13 + 3) = 3;
            *(undefined8 *)((longlong)puVar13 + 0x1c) = 0xffffffffffffffff;
            *puVar13 = &PTR_FUN_14a1fb168;
            *(byte *)(puVar13 + 5) = cVar4 >> 7 & 0x1c;
            *(undefined8 *)((longlong)puVar13 + 0x2c) = 0xffffffff00000000;
            puVar13[7] = 0;
            puVar13[8] = lVar28;
            iVar5 = *(int *)(param_1 + 0x1a0);
            *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
            if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
              FUN_1447568fc(local_1d0,iVar5);
            }
            plVar17 = local_1e0;
            *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar13;
            *(int *)((longlong)puVar13 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
            local_1c8[4] = (ulonglong)puVar13;
            uVar8 = *(undefined4 *)(local_1b8 + 0x13b8c);
            uVar23 = *(undefined4 *)(local_1b8 + 0x13b90);
            uVar2 = *(undefined4 *)(local_1b8 + 0x13b94);
            *(undefined4 *)(local_1c8 + 6) = *(undefined4 *)(local_1b8 + 0x13b88);
            *(undefined4 *)((longlong)local_1c8 + 0x34) = uVar8;
            *(undefined4 *)(local_1c8 + 7) = uVar23;
            *(undefined4 *)((longlong)local_1c8 + 0x3c) = uVar2;
            *(undefined4 *)(local_1c8 + 8) = local_1d8._0_4_;
            *(int *)((longlong)local_1c8 + 0x44) = (int)local_198;
            local_1c8[9] = 0;
            lVar28 = *(longlong *)(param_3 + 0x1c0);
            local_1d8 = (undefined8 *)CONCAT71(local_1d8._1_7_,*(undefined1 *)(lVar28 + 0x90));
            if ((*(char *)(lVar28 + 0x92) == '\x04') || (*(char *)(lVar28 + 0x92) == '\x01')) {
              uVar20 = *(undefined2 *)(lVar28 + 0x8e);
            }
            else {
              uVar20 = 0;
            }
            puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
            puVar11 = puVar13 + 8;
            if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
              FUN_140023dd8(local_1e0,0x48);
              puVar13 = (undefined8 *)(*plVar17 + 7U & 0xfffffffffffffff8);
              puVar11 = puVar13 + 8;
            }
            *(undefined8 **)(param_1 + 0x70) = puVar11;
            puVar13[1] = *(undefined8 *)(lVar28 + 8);
            puVar13[2] = 0;
            *(undefined1 *)(puVar13 + 3) = 1;
            *(undefined8 *)((longlong)puVar13 + 0x1c) = 0xffffffffffffffff;
            *puVar13 = &PTR_FUN_14a203858;
            *(undefined2 *)(puVar13 + 5) = 0;
            *(undefined1 *)((longlong)puVar13 + 0x2a) = local_1d8._0_1_;
            *(undefined1 *)((longlong)puVar13 + 0x2b) = 0;
            *(undefined2 *)((longlong)puVar13 + 0x2c) = 0;
            *(undefined2 *)((longlong)puVar13 + 0x2e) = uVar20;
            *(undefined1 *)(puVar13 + 6) = 1;
            *(undefined1 *)((longlong)puVar13 + 0x32) = 0;
            puVar13[7] = lVar28;
            iVar5 = *(int *)(param_1 + 0x1a0);
            *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
            if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
              FUN_1447568fc(local_1d0,iVar5);
            }
            plVar17 = local_1e0;
            *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar13;
            *(int *)((longlong)puVar13 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
            local_1c8[10] = (ulonglong)puVar13;
            local_1c8[0xb] = local_158;
            lVar28 = *(longlong *)(param_3 + 0x1c0);
            local_1d8 = (undefined8 *)CONCAT71(local_1d8._1_7_,*(undefined1 *)(lVar28 + 0x90));
            if ((*(char *)(lVar28 + 0x92) == '\x04') || (*(char *)(lVar28 + 0x92) == '\x01')) {
              uVar20 = *(undefined2 *)(lVar28 + 0x8e);
            }
            else {
              uVar20 = 0;
            }
            puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
            puVar11 = puVar13 + 8;
            if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
              FUN_140023dd8(local_1e0,0x48);
              puVar13 = (undefined8 *)(*plVar17 + 7U & 0xfffffffffffffff8);
              puVar11 = puVar13 + 8;
            }
            *(undefined8 **)(param_1 + 0x70) = puVar11;
            puVar13[1] = *(undefined8 *)(lVar28 + 8);
            puVar13[2] = 0;
            *(undefined1 *)(puVar13 + 3) = 1;
            *(undefined8 *)((longlong)puVar13 + 0x1c) = 0xffffffffffffffff;
            *puVar13 = &PTR_FUN_14a203858;
            *(undefined2 *)(puVar13 + 5) = 0;
            *(undefined1 *)((longlong)puVar13 + 0x2a) = local_1d8._0_1_;
            *(undefined1 *)((longlong)puVar13 + 0x2b) = 0;
            *(undefined2 *)((longlong)puVar13 + 0x2c) = 0;
            *(undefined2 *)((longlong)puVar13 + 0x2e) = uVar20;
            *(undefined1 *)(puVar13 + 6) = 4;
            *(undefined1 *)((longlong)puVar13 + 0x32) = 0;
            puVar13[7] = lVar28;
            iVar5 = *(int *)(param_1 + 0x1a0);
            *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
            if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
              FUN_1447568fc(local_1d0,iVar5);
            }
            plVar17 = local_1e0;
            *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar13;
            *(int *)((longlong)puVar13 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
            local_1c8[0xc] = (ulonglong)puVar13;
            uVar22 = *(undefined1 *)((longlong)local_1b0 + 0x94);
            puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
            puVar11 = puVar13 + 9;
            if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
              FUN_140023dd8(local_1e0,0x50);
              puVar13 = (undefined8 *)(*plVar17 + 7U & 0xfffffffffffffff8);
              puVar11 = puVar13 + 9;
            }
            *(undefined8 **)(param_1 + 0x70) = puVar11;
            puVar13[1] = local_1b0[1];
            puVar13[2] = 0;
            *(undefined1 *)(puVar13 + 3) = 0;
            *(undefined8 *)((longlong)puVar13 + 0x1c) = 0xffffffffffffffff;
            *(undefined1 *)(puVar13 + 5) = 0;
            *puVar13 = &PTR_FUN_14a1fb948;
            *(undefined1 *)(puVar13 + 6) = uVar22;
            *(undefined1 *)(puVar13 + 7) = 0;
            *(undefined4 *)((longlong)puVar13 + 0x31) = 0;
            *(undefined2 *)((longlong)puVar13 + 0x35) = 0;
            puVar13[8] = local_1b0;
            iVar5 = *(int *)(param_1 + 0x1a0);
            *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
            if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
              FUN_1447568fc(local_1d0,iVar5);
            }
            plVar17 = local_1e0;
            *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar13;
            *(int *)((longlong)puVar13 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
            local_1c8[0xd] = (ulonglong)puVar13;
            uVar22 = *(undefined1 *)(local_1a0 + 0x94);
            puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
            puVar11 = puVar13 + 9;
            if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
              FUN_140023dd8(local_1e0,0x50);
              puVar13 = (undefined8 *)(*plVar17 + 7U & 0xfffffffffffffff8);
              puVar11 = puVar13 + 9;
            }
            *(undefined8 **)(param_1 + 0x70) = puVar11;
            puVar13[1] = *(undefined8 *)(local_1a0 + 8);
            puVar13[2] = 0;
            *(undefined1 *)(puVar13 + 3) = 0;
            *(undefined8 *)((longlong)puVar13 + 0x1c) = 0xffffffffffffffff;
            *(undefined1 *)(puVar13 + 5) = 0;
            *puVar13 = &PTR_FUN_14a1fb948;
            *(undefined1 *)(puVar13 + 6) = uVar22;
            *(undefined1 *)(puVar13 + 7) = 0;
            *(undefined4 *)((longlong)puVar13 + 0x31) = 0;
            *(undefined2 *)((longlong)puVar13 + 0x35) = 0;
            puVar13[8] = local_1a0;
            iVar5 = *(int *)(param_1 + 0x1a0);
            *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
            if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
              FUN_1447568fc(local_1d0,iVar5);
            }
            *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar13;
            *(int *)((longlong)puVar13 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
            local_1c8[0xe] = (ulonglong)puVar13;
            FUN_147265578(*(undefined8 *)(local_1b8 + 0x13818),&local_d8);
            iVar5 = (int)local_190 + 7;
            local_e4 = (int)local_190 + 0xe;
            if (-1 < iVar5) {
              local_e4 = iVar5;
            }
            local_e4 = local_e4 >> 3;
            iVar5 = (int)local_198 + 7;
            local_e8 = (int)local_198 + 0xe;
            if (-1 < iVar5) {
              local_e8 = iVar5;
            }
            local_e8 = local_e8 >> 3;
            local_e0 = 1;
            local_1f8 = &local_e8;
            FUN_1472655e5(param_1,&local_108,&local_d8);
          }
          if (*(ulonglong **)(local_1c0 + 0xe0) != (ulonglong *)0x0) {
            puVar19 = *(ulonglong **)(local_1c0 + 0xe0);
          }
          if ((longlong)(int)local_1c0[0xe2] != 0) {
            iVar18 = (int)local_190 + 7;
            iVar5 = (int)local_190 + 0xe;
            if (-1 < iVar18) {
              iVar5 = iVar18;
            }
            local_1c8 = puVar19 + (longlong)(int)local_1c0[0xe2] * 3;
            local_190 = (ulonglong)(uint)(iVar5 >> 3);
            iVar18 = (int)local_198 + 7;
            iVar5 = (int)local_198 + 0xe;
            if (-1 < iVar18) {
              iVar5 = iVar18;
            }
            local_198 = (ulonglong)(uint)(iVar5 >> 3);
            do {
              plVar17 = local_1e0;
              bVar3 = *(byte *)((longlong)puVar19 + 0x14);
              if ((bVar3 & 2) == 0) {
                if (DAT_14c7608c0 == 1) {
                  bVar3 = bVar3 | 1;
LAB_142e57ee7:
                  *(byte *)((longlong)puVar19 + 0x14) = bVar3;
                }
                else if (DAT_14c7608c0 == 0) {
                  bVar3 = bVar3 & 0xfc;
                  goto LAB_142e57ee7;
                }
                local_d8 = 0x20008;
                uStack_d4 = 0;
                uStack_a4 = 0;
                uStack_ac = 0x10001;
                uStack_a8 = 0x101;
                uStack_a6 = 0;
                uStack_a5 = 1;
                uVar25 = (uint)*(undefined8 *)(local_1b8 + 0x13b90);
                uVar6 = DAT_14ca84e40;
                if ((int)uVar25 < (int)DAT_14ca84e40) {
                  uVar6 = uVar25;
                }
                if ((int)uVar6 < 2) {
                  uVar6 = 1;
                }
                uVar25 = (uint)((ulonglong)*(undefined8 *)(local_1b8 + 0x13b90) >> 0x20);
                uStack_b0 = DAT_14ca84e40;
                if ((int)uVar25 < (int)DAT_14ca84e40) {
                  uStack_b0 = uVar25;
                }
                uStack_d0 = DAT_14ca85088;
                uStack_cc = DAT_14ca8508c;
                local_c8 = CONCAT44(DAT_14ca85094,DAT_14ca85090);
                uStack_a3 = 0xff;
                uStack_c0 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca85098);
                if ((int)uStack_b0 < 2) {
                  uStack_b0 = 1;
                }
                local_b8 = (ulonglong)uVar6 << 0x20;
                uVar26 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
                uVar9 = uVar26 + 0x120;
                if (*(ulonglong *)(param_1 + 0x78) < uVar9) {
                  FUN_140023dd8(local_1e0,0x128);
                  uVar26 = *plVar17 + 7U & 0xfffffffffffffff8;
                  uVar9 = uVar26 + 0x120;
                }
                *(ulonglong *)(param_1 + 0x70) = uVar9;
                FUN_1456bbb8c(uVar26,L"Nanite.Visualization",&local_d8);
                iVar5 = *(int *)(param_1 + 0x180);
                *(uint *)(param_1 + 0x180) = iVar5 + 1U;
                if (*(uint *)(param_1 + 0x184) < iVar5 + 1U) {
                  FUN_14472c0f6(local_180,iVar5);
                }
                plVar17 = local_1e0;
                *(ulonglong *)(*(longlong *)(param_1 + 0x178) + (longlong)iVar5 * 8) = uVar26;
                *(int *)(uVar26 + 0x9c) = *(int *)(param_1 + 0x180) + -1;
                *puVar19 = uVar26;
                puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
                puVar11 = puVar13 + 0x26;
                if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
                  FUN_140023dd8(local_1e0,0x140);
                  puVar13 = (undefined8 *)(*plVar17 + 0xfU & 0xfffffffffffffff0);
                  puVar11 = puVar13 + 0x26;
                }
                *(undefined8 **)(param_1 + 0x70) = puVar11;
                *puVar13 = &PTR_FUN_14a2a13b8;
                puVar13[2] = 0;
                puVar13[0xe] = 0;
                *(undefined1 *)(puVar13 + 0xf) = 1;
                puVar13[0x10] = 0;
                *(undefined1 *)(puVar13 + 0x11) = 1;
                puVar13[0x12] = 0;
                *(undefined1 *)(puVar13 + 0x13) = 1;
                puVar13[0x14] = 0;
                *(undefined1 *)(puVar13 + 0x15) = 1;
                puVar13[0x16] = 0;
                puVar13[0x17] = 0;
                puVar13[0x18] = 0;
                puVar13[0x19] = 0;
                puVar13[0x1a] = 0;
                puVar13[0x1b] = 0;
                puVar13[0x1c] = 0;
                puVar13[0x1d] = 0;
                puVar13[0x1e] = 0;
                puVar13[0x1f] = 0;
                puVar13[0x20] = 0;
                puVar13[0x21] = 0;
                puVar13[0x22] = 0;
                puVar13[0x23] = 0;
                puVar13[0x24] = 0;
                iVar5 = *(int *)(param_1 + 0xa0);
                *(uint *)(param_1 + 0xa0) = iVar5 + 1U;
                if (*(uint *)(param_1 + 0xa4) < iVar5 + 1U) {
                  FUN_1448cfae8(local_178,iVar5);
                }
                *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar5 * 8) = puVar13;
                uStack_d0 = 0;
                local_d8 = 0;
                uStack_d4 = 0;
                local_98 = 0;
                uStack_90 = 0;
                uStack_a8 = 0;
                uStack_a6 = 0;
                uStack_a5 = 0;
                uStack_a4 = 0;
                uStack_a3 = 0;
                uStack_a2 = 0;
                uStack_a0 = 0;
                local_b8 = 0;
                uStack_b0 = 0;
                uStack_ac = 0;
                local_c8 = 0;
                uStack_c0 = 0;
                local_88 = 0;
                local_70 = 0;
                local_80 = 0;
                uStack_78 = 0;
                local_164 = FUN_140a1799a(local_138,&local_d8,0);
                lVar28 = local_1b8;
                FUN_1448c58dc(local_1b8,&local_108);
                *(undefined4 *)(puVar13 + 0x10) = local_f8;
                *(undefined4 *)((longlong)puVar13 + 0x84) = uStack_f4;
                *(undefined4 *)(puVar13 + 0x11) = uStack_f0;
                *(undefined4 *)((longlong)puVar13 + 0x8c) = uStack_ec;
                *(int *)(puVar13 + 0xe) = (int)local_108;
                *(undefined4 *)((longlong)puVar13 + 0x74) = local_108._4_4_;
                *(undefined4 *)(puVar13 + 0xf) = uStack_100;
                *(undefined4 *)((longlong)puVar13 + 0x7c) = uStack_fc;
                uVar10 = (**(code **)(**(longlong **)(*(longlong *)(lVar28 + 8) + 0x178) + 8))();
                uVar10 = FUN_1448c569e(uVar10,param_1);
                if ((*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x110) < DAT_14ca4b328) &&
                   (FUN_144b3d300(&DAT_14ca4b328), DAT_14ca4b328 == -1)) {
                  DAT_14ca4b320 = FUN_145900d44();
                  _Init_thread_footer(&DAT_14ca4b328);
                }
                cVar4 = *(char *)(DAT_14ca4b320 + 0x41);
                if (cVar4 == '\x03') {
                  cVar4 = '\x02';
                }
                puVar13[0x12] = uVar10;
                *(char *)(puVar13 + 0x13) = cVar4;
                if (*(int *)(param_8 + 0x1f0) == 0) {
                  uVar10 = 0;
                }
                else {
                  iVar5 = *(int *)(param_8 + 0x1f0) + -1;
                  if ((int)local_188 < iVar5) {
                    iVar5 = (int)local_188;
                  }
                  uVar10 = *(undefined8 *)(*(longlong *)(param_8 + 0x1e8) + (longlong)iVar5 * 8);
                }
                lVar28 = FUN_144938434();
                cVar4 = *(char *)(lVar28 + 0x41);
                if (*(char *)(lVar28 + 0x41) == '\x03') {
                  cVar4 = '\x02';
                }
                puVar13[0x14] = uVar10;
                *(char *)(puVar13 + 0x15) = cVar4;
                local_1d8 = (undefined8 *)((ulonglong)local_1d8 & 0xffffffff00000000);
                lVar28 = FUN_144735dd8(param_1,&DAT_14cb00e10,0);
                plVar17 = local_1e0;
                if ((*(byte *)(lVar28 + 0x68) & 0x80) != 0) {
                  local_1d8 = (undefined8 *)
                              CONCAT44(local_1d8._4_4_,
                                       (int)CONCAT71((int7)((ulonglong)lVar28 >> 8),0x1c));
                }
                puVar27 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
                puVar11 = puVar27 + 9;
                if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
                  FUN_140023dd8(local_1e0);
                  puVar27 = (undefined8 *)(*plVar17 + 7U & 0xfffffffffffffff8);
                  puVar11 = puVar27 + 9;
                }
                *(undefined8 **)(param_1 + 0x70) = puVar11;
                puVar27[1] = *(undefined8 *)(lVar28 + 8);
                puVar27[2] = 0;
                *(undefined1 *)(puVar27 + 3) = 3;
                *(undefined8 *)((longlong)puVar27 + 0x1c) = 0xffffffffffffffff;
                *puVar27 = &PTR_FUN_14a1fb168;
                *(char *)(puVar27 + 5) = (char)local_1d8;
                *(undefined8 *)((longlong)puVar27 + 0x2c) = 0xffffffff00000000;
                puVar27[7] = 0;
                puVar27[8] = lVar28;
                iVar5 = *(int *)(param_1 + 0x1a0);
                uVar6 = iVar5 + 1;
                *(uint *)(param_1 + 0x1a0) = uVar6;
                if (*(uint *)(param_1 + 0x1a4) < uVar6) {
                  FUN_1447568fc(local_1d0);
                }
                plVar17 = local_1e0;
                *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar27;
                *(int *)((longlong)puVar27 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
                puVar13[0x16] = puVar27;
                iVar5 = (int)puVar19[2];
                uVar6 = 0;
                if (iVar5 < 0x23) {
                  if (iVar5 != -1) {
                    uVar25 = DAT_14ca1aea8;
                    if ((iVar5 != 0x1c) && (uVar25 = uVar6, iVar5 == 0x1d)) {
                      uVar25 = DAT_14ca1ae90;
                    }
                    goto LAB_142e5836a;
                  }
                  uVar7 = 0;
                  uVar25 = 0;
                }
                else {
                  uVar25 = uVar6;
                  if (iVar5 - 0x23U < 2) {
                    uVar25 = 2;
                  }
LAB_142e5836a:
                  uVar7 = *(byte *)((longlong)puVar19 + 0x14) & 1;
                  uVar6 = (uint)(DAT_14c7608c4 != 0);
                }
                *(int *)(puVar13 + 4) = iVar5;
                *(uint *)((longlong)puVar13 + 0x24) = uVar25;
                *(uint *)(puVar13 + 5) = uVar7;
                *(uint *)((longlong)puVar13 + 0x2c) = uVar6;
                iVar5 = (int)puVar19[2];
                uVar8 = 0;
                uVar23 = 0;
                if ((int)puVar19[2] != -1) {
                  iVar5 = DAT_14c7608c8;
                  uVar8 = local_164;
                  uVar23 = DAT_14c7608cc;
                }
                *(int *)(puVar13 + 6) = iVar5;
                *(undefined4 *)((longlong)puVar13 + 0x34) = uVar23;
                *(undefined4 *)(puVar13 + 7) = uVar8;
                *(undefined4 *)((longlong)puVar13 + 0x3c) = 0;
                uVar8 = local_1c0[1];
                uVar23 = local_1c0[2];
                uVar2 = local_1c0[3];
                *(undefined4 *)(puVar13 + 8) = *local_1c0;
                *(undefined4 *)((longlong)puVar13 + 0x44) = uVar8;
                *(undefined4 *)(puVar13 + 9) = uVar23;
                *(undefined4 *)((longlong)puVar13 + 0x4c) = uVar2;
                *(undefined4 *)(puVar13 + 10) = local_1c0[4];
                *(undefined4 *)((longlong)puVar13 + 0x54) = local_1c0[10];
                *(undefined4 *)(puVar13 + 0xd) = 0;
                iVar5 = *(int *)(param_2 + 0x2b08);
                iVar18 = -1;
                if (iVar5 != 0) {
                  lVar28 = *(longlong *)(param_2 + 0x2b00);
                  if (*(longlong *)(param_2 + 0x2b00) == 0) {
                    lVar28 = local_160;
                  }
                  uVar9 = (ulonglong)(iVar5 + 0x1fU >> 5);
                  iVar24 = -0x3e - (iVar5 + 0x1fU & 0xffffffe0);
                  uVar6 = 0xffffffff >> (-(char)iVar5 & 0x1fU);
                  do {
                    bVar29 = uVar9 == 0;
                    uVar9 = uVar9 - 1;
                    if (bVar29) goto LAB_142e5844d;
                    iVar24 = iVar24 + 0x20;
                    uVar25 = uVar6 & *(uint *)(lVar28 + uVar9 * 4);
                    uVar6 = 0xffffffff;
                  } while (uVar25 == 0);
                  uVar9 = (ulonglong)uVar25 * 2 + 1;
                  lVar28 = 0x3f;
                  if (uVar9 != 0) {
                    for (; uVar9 >> lVar28 == 0; lVar28 = lVar28 + -1) {
                    }
                  }
                  iVar18 = -(((uint)lVar28 ^ 0x3f) + iVar24);
                }
LAB_142e5844d:
                *(int *)(puVar13 + 0xb) = iVar18 + 1;
                puVar13[0xc] = CONCAT44((int)_DAT_14caf1b84,(int)_DAT_14caf1b80);
                cVar4 = *(char *)(local_148 + 0x68);
                puVar27 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
                puVar11 = puVar27 + 9;
                if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
                  FUN_140023dd8(local_1e0,0x50);
                  puVar27 = (undefined8 *)(*plVar17 + 7U & 0xfffffffffffffff8);
                  puVar11 = puVar27 + 9;
                }
                *(undefined8 **)(param_1 + 0x70) = puVar11;
                puVar27[1] = *(undefined8 *)(local_148 + 8);
                puVar27[2] = 0;
                *(undefined1 *)(puVar27 + 3) = 3;
                *(undefined8 *)((longlong)puVar27 + 0x1c) = 0xffffffffffffffff;
                *puVar27 = &PTR_FUN_14a1fb168;
                *(byte *)(puVar27 + 5) = cVar4 >> 7 & 0x1c;
                *(undefined8 *)((longlong)puVar27 + 0x2c) = 0xffffffff00000000;
                puVar27[7] = 0;
                puVar27[8] = local_148;
                iVar5 = *(int *)(param_1 + 0x1a0);
                *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
                if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
                  FUN_1447568fc(local_1d0,iVar5);
                }
                *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar27;
                *(int *)((longlong)puVar27 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
                puVar13[0x17] = puVar27;
                puVar13[0x1a] = local_120;
                puVar13[0x1b] = local_128;
                puVar13[0x1c] = local_130;
                puVar13[0x1d] = local_158;
                puVar13[0x1e] = *(undefined8 *)(param_3 + 0x1c0);
                puVar13[0x1f] = local_1b0;
                puVar13[0x20] = local_1a0;
                if (DAT_14ca1c578 == 0) {
                  uVar10 = FUN_14476842e(param_1,&DAT_14ca63c00,L"ZeroUIntDummy",2);
                }
                else {
                  uVar10 = FUN_14473c272(param_1,&DAT_14ca1c578,0);
                }
                plVar17 = local_1e0;
                puVar13[0x21] = uVar10;
                cVar4 = *(char *)(local_150 + 0x68);
                puVar27 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
                puVar11 = puVar27 + 9;
                if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
                  FUN_140023dd8(local_1e0,0x50);
                  puVar27 = (undefined8 *)(*plVar17 + 7U & 0xfffffffffffffff8);
                  puVar11 = puVar27 + 9;
                }
                *(undefined8 **)(param_1 + 0x70) = puVar11;
                puVar27[1] = *(undefined8 *)(local_150 + 8);
                puVar27[2] = 0;
                *(undefined1 *)(puVar27 + 3) = 3;
                *(undefined8 *)((longlong)puVar27 + 0x1c) = 0xffffffffffffffff;
                *puVar27 = &PTR_FUN_14a1fb168;
                *(byte *)(puVar27 + 5) = cVar4 >> 7 & 0x1c;
                *(undefined8 *)((longlong)puVar27 + 0x2c) = 0xffffffff00000000;
                puVar27[7] = 0;
                puVar27[8] = local_150;
                iVar5 = *(int *)(param_1 + 0x1a0);
                *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
                if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
                  FUN_1447568fc(local_1d0,iVar5);
                }
                *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar27;
                *(int *)((longlong)puVar27 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
                puVar13[0x22] = puVar27;
                uVar10 = FUN_142e5a33f(param_1);
                plVar17 = local_1e0;
                puVar13[0x18] = uVar10;
                cVar4 = *(char *)(local_170 + 0x68);
                puVar27 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
                puVar11 = puVar27 + 9;
                if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
                  FUN_140023dd8(local_1e0,0x50);
                  puVar27 = (undefined8 *)(*plVar17 + 7U & 0xfffffffffffffff8);
                  puVar11 = puVar27 + 9;
                }
                *(undefined8 **)(param_1 + 0x70) = puVar11;
                puVar27[1] = *(undefined8 *)(local_170 + 8);
                puVar27[2] = 0;
                *(undefined1 *)(puVar27 + 3) = 3;
                *(undefined8 *)((longlong)puVar27 + 0x1c) = 0xffffffffffffffff;
                *puVar27 = &PTR_FUN_14a1fb168;
                *(byte *)(puVar27 + 5) = cVar4 >> 7 & 0x1c;
                *(undefined8 *)((longlong)puVar27 + 0x2c) = 0xffffffff00000000;
                puVar27[7] = 0;
                puVar27[8] = local_170;
                iVar5 = *(int *)(param_1 + 0x1a0);
                *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
                if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
                  FUN_1447568fc(local_1d0,iVar5);
                }
                plVar17 = local_1e0;
                *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar27;
                *(int *)((longlong)puVar27 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
                puVar13[0x19] = puVar27;
                uVar9 = *puVar19;
                local_1d8 = (undefined8 *)CONCAT71(local_1d8._1_7_,*(undefined1 *)(uVar9 + 0x94));
                puVar27 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
                puVar11 = puVar27 + 9;
                if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
                  FUN_140023dd8(local_1e0,0x50);
                  puVar27 = (undefined8 *)(*plVar17 + 7U & 0xfffffffffffffff8);
                  puVar11 = puVar27 + 9;
                }
                *(undefined8 **)(param_1 + 0x70) = puVar11;
                puVar27[1] = *(undefined8 *)(uVar9 + 8);
                puVar27[2] = 0;
                *(undefined1 *)(puVar27 + 3) = 0;
                *(undefined8 *)((longlong)puVar27 + 0x1c) = 0xffffffffffffffff;
                *(undefined1 *)(puVar27 + 5) = 0;
                *puVar27 = &PTR_FUN_14a1fb948;
                *(undefined1 *)(puVar27 + 6) = local_1d8._0_1_;
                *(undefined1 *)(puVar27 + 7) = 0;
                *(undefined4 *)((longlong)puVar27 + 0x31) = 0;
                *(undefined2 *)((longlong)puVar27 + 0x35) = 0;
                puVar27[8] = uVar9;
                iVar5 = *(int *)(param_1 + 0x1a0);
                *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
                if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
                  FUN_1447568fc(local_1d0,iVar5);
                }
                local_1d8 = puVar13 + 2;
                *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar27;
                *(int *)((longlong)puVar27 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
                *local_1d8 = puVar27;
                local_1f0 = (int *)0x0;
                local_1f8 = (int *)((ulonglong)local_1f8 & 0xffffffff00000000);
                lVar28 = FUN_14489a2c5(param_1,&DAT_14ca63c48,&DAT_14ca63c78,4);
                plVar17 = local_1e0;
                puVar27 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
                puVar11 = puVar27 + 9;
                if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
                  FUN_140023dd8(local_1e0,0x50);
                  puVar27 = (undefined8 *)(*plVar17 + 7U & 0xfffffffffffffff8);
                  puVar11 = puVar27 + 9;
                }
                *(undefined8 **)(param_1 + 0x70) = puVar11;
                puVar27[1] = *(undefined8 *)(lVar28 + 8);
                puVar27[2] = 0;
                *(undefined1 *)(puVar27 + 3) = 3;
                *(undefined8 *)((longlong)puVar27 + 0x1c) = 0xffffffffffffffff;
                *puVar27 = &PTR_FUN_14a1fb168;
                *(undefined1 *)(puVar27 + 5) = 0x1c;
                *(undefined8 *)((longlong)puVar27 + 0x2c) = 0xffffffff00000000;
                puVar27[7] = 0;
                puVar27[8] = lVar28;
                iVar5 = *(int *)(param_1 + 0x1a0);
                *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
                if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
                  FUN_1447568fc(local_1d0,iVar5);
                }
                *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar27;
                *(int *)((longlong)puVar27 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
                puVar13[0x23] = puVar27;
                puVar13[0x24] = *(undefined8 *)(DAT_14ca94e18 + 0x10);
                *(undefined4 *)((longlong)puVar13 + 0x6c) = 0;
                FUN_147265698(*(undefined8 *)(local_1b8 + 0x13818),&local_108);
                local_114 = (int)local_198;
                local_110 = (undefined4)local_190;
                local_10c = 1;
                local_1f8 = &local_114;
                FUN_147265705(param_1,&local_d9,&local_108);
              }
              puVar19 = puVar19 + 3;
            } while (puVar19 != local_1c8);
          }
        }
        uVar6 = DAT_14ca1c528;
        local_188 = local_188 + 1;
        uVar9 = (ulonglong)(int)param_5[1];
      } while (local_188 < (longlong)uVar9);
      if (local_1a8 != 0) {
        if ((int)DAT_14ca1c530 < (int)DAT_14ca1c528) {
          lVar28 = *(longlong *)(DAT_14ca1c538 + (longlong)DAT_14ca1c52c * 8);
          if (lVar28 == 0) {
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14ca1b240) && (FUN_144b3d300(&DAT_14ca1b240), DAT_14ca1b240 == -1))
            {
              FUN_1446f470e(&DAT_14ca1b238,L"Nanite.PickingFeedback",1);
              _Init_thread_footer(&DAT_14ca1b240);
            }
            lVar28 = 0x58;
            puVar13 = (undefined8 *)FUN_14001cc68(0x58,0x10);
            FUN_14047abb0(puVar13,DAT_14ca1b238);
            *puVar13 = &PTR_FUN_14a37f800;
            puVar13[3] = 0;
            puVar13[4] = 0;
            puVar13[5] = 0;
            puVar13[6] = 0;
            puVar13[7] = 0;
            puVar13[8] = 0;
            puVar13[9] = 0;
            puVar13[10] = 0;
            puVar11 = *(undefined8 **)(DAT_14ca1c538 + (longlong)DAT_14ca1c52c * 8);
            *(undefined8 **)(DAT_14ca1c538 + (longlong)DAT_14ca1c52c * 8) = puVar13;
            if (puVar11 != (undefined8 *)0x0) {
              do {
                lVar21 = *(longlong *)((longlong)puVar11 + lVar28 + -8);
                if (lVar21 != 0) {
                  LOCK();
                  puVar1 = (uint *)(lVar21 + 8);
                  uVar25 = *puVar1;
                  *puVar1 = *puVar1 - 1;
                  UNLOCK();
                  if ((uVar25 & 0x3fffffff) == 1) {
                    puVar1 = (uint *)(lVar21 + 8);
                    LOCK();
                    uVar25 = *puVar1;
                    *puVar1 = *puVar1 | 0x40000000;
                    UNLOCK();
                    if ((uVar25 >> 0x1e & 1) == 0) {
                      bVar3 = *(byte *)(lVar21 + 0xd);
                      plVar14 = (longlong *)FUN_14001cc68(0x10,8);
                      plVar14[1] = lVar21;
                      plVar17 = DAT_14ca843c0;
                      plVar15 = DAT_14ca843c8;
                      if ((bVar3 & 2) == 0) {
                        do {
                          *plVar14 = (longlong)plVar17;
                          LOCK();
                          bVar29 = plVar17 != DAT_14ca843c0;
                          plVar15 = plVar14;
                          if (bVar29) {
                            plVar17 = DAT_14ca843c0;
                            plVar15 = DAT_14ca843c0;
                          }
                          DAT_14ca843c0 = plVar15;
                          UNLOCK();
                        } while (bVar29);
                      }
                      else {
                        do {
                          *plVar14 = (longlong)plVar15;
                          LOCK();
                          bVar29 = plVar15 != DAT_14ca843c8;
                          plVar17 = plVar14;
                          if (bVar29) {
                            plVar15 = DAT_14ca843c8;
                            plVar17 = DAT_14ca843c8;
                          }
                          DAT_14ca843c8 = plVar17;
                          UNLOCK();
                        } while (bVar29);
                      }
                    }
                  }
                }
                lVar28 = lVar28 + -8;
              } while (lVar28 != 0x18);
              *puVar11 = &PTR_LAB_14a217b60;
              lVar28 = puVar11[1];
              if (lVar28 != 0) {
                LOCK();
                puVar1 = (uint *)(lVar28 + 8);
                uVar25 = *puVar1;
                *puVar1 = *puVar1 - 1;
                UNLOCK();
                if ((uVar25 & 0x3fffffff) == 1) {
                  puVar1 = (uint *)(lVar28 + 8);
                  LOCK();
                  uVar25 = *puVar1;
                  *puVar1 = *puVar1 | 0x40000000;
                  UNLOCK();
                  if ((uVar25 >> 0x1e & 1) == 0) {
                    bVar3 = *(byte *)(lVar28 + 0xd);
                    plVar14 = (longlong *)FUN_14001cc68(0x10,8);
                    plVar14[1] = lVar28;
                    plVar17 = DAT_14ca843c0;
                    plVar15 = DAT_14ca843c8;
                    if ((bVar3 & 2) == 0) {
                      do {
                        *plVar14 = (longlong)plVar17;
                        LOCK();
                        bVar29 = plVar17 != DAT_14ca843c0;
                        plVar15 = plVar14;
                        if (bVar29) {
                          plVar17 = DAT_14ca843c0;
                          plVar15 = DAT_14ca843c0;
                        }
                        DAT_14ca843c0 = plVar15;
                        UNLOCK();
                      } while (bVar29);
                    }
                    else {
                      do {
                        *plVar14 = (longlong)plVar15;
                        LOCK();
                        bVar29 = plVar15 != DAT_14ca843c8;
                        plVar17 = plVar14;
                        if (bVar29) {
                          plVar15 = DAT_14ca843c8;
                          plVar17 = DAT_14ca843c8;
                        }
                        DAT_14ca843c8 = plVar17;
                        UNLOCK();
                      } while (bVar29);
                    }
                  }
                }
              }
              FUN_1400020a8(puVar11);
            }
            lVar28 = *(longlong *)(DAT_14ca1c538 + (longlong)DAT_14ca1c52c * 8);
          }
          FUN_1401e3a19(param_1,lVar28,local_1a8,0);
          uVar9 = (longlong)(DAT_14ca1c52c + 1) / (longlong)(int)uVar6 & 0xffffffff;
          DAT_14ca1c52c = (DAT_14ca1c52c + 1) % (int)uVar6;
          DAT_14ca1c530 = DAT_14ca1c530 + 1;
          if ((int)uVar6 <= (int)DAT_14ca1c530) {
            DAT_14ca1c530 = uVar6;
          }
        }
        if (0 < (int)DAT_14ca1c530) {
          puVar19 = (ulonglong *)0x0;
          lVar28 = DAT_14ca1c538;
          iVar5 = DAT_14ca1c52c;
          do {
            lVar21 = (longlong)((int)((iVar5 + uVar6) - DAT_14ca1c530) % (int)uVar6);
            uVar9 = *(ulonglong *)(lVar28 + lVar21 * 8);
            if ((*(longlong *)(uVar9 + 8) != 0) &&
               ((*(int *)(*(longlong *)(uVar9 + 8) + 0x10) != 0 ||
                (uVar9 = (**(code **)(**(longlong **)(uVar9 + 8) + 0x18))(), lVar28 = DAT_14ca1c538,
                iVar5 = DAT_14ca1c52c, (char)uVar9 == '\0')))) break;
            uVar25 = DAT_14ca1c530 - 1;
            uVar9 = (ulonglong)uVar25;
            puVar19 = (ulonglong *)(lVar28 + lVar21 * 8);
            bVar29 = 1 < (int)DAT_14ca1c530;
            DAT_14ca1c530 = uVar25;
          } while (bVar29);
          if ((puVar19 != (ulonglong *)0x0) && (uVar9 = *puVar19, uVar9 != 0)) {
            uVar6 = *(uint *)(uVar9 + 0x10);
            if (uVar6 == 0) {
              uVar25 = 0x20;
            }
            else {
              uVar25 = 0;
              if (uVar6 != 0) {
                for (; (uVar6 >> uVar25 & 1) == 0; uVar25 = uVar25 + 1) {
                }
              }
            }
            lVar28 = *(longlong *)(uVar9 + 0x18 + (ulonglong)uVar25 * 8);
            if (lVar28 != 0) {
              *(uint *)(uVar9 + 0x14) = uVar25;
              local_1f0 = (int *)CONCAT44(local_1f0._4_4_,0x48);
              local_1f8 = (int *)((ulonglong)local_1f8 & 0xffffffff00000000);
              puVar16 = (undefined4 *)
                        (**(code **)(*DAT_14ca83900 + 0xf8))
                                  (DAT_14ca83900,&DAT_14ca85100,lVar28,*(undefined8 *)(uVar9 + 8));
              uVar9 = 0;
              if (puVar16 != (undefined4 *)0x0) {
                for (lVar28 = 0x12; lVar28 != 0; lVar28 = lVar28 + -1) {
                  *param_7 = *puVar16;
                  puVar16 = puVar16 + 1;
                  param_7 = param_7 + 1;
                }
                uVar9 = (**(code **)(*DAT_14ca83900 + 0x100))
                                  (DAT_14ca83900,&DAT_14ca85100,
                                   *(undefined8 *)
                                    (*puVar19 + 0x18 + (ulonglong)*(uint *)(*puVar19 + 0x14) * 8));
              }
            }
          }
        }
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 142e5a33f FUN_142e5a33f body=304 status=ok
// SIG undefined FUN_142e5a33f(void)

undefined8 * FUN_142e5a33f(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (DAT_14ca1c570 == 0) {
    lVar3 = FUN_14489a2c5(param_1,&DAT_14ca63c48,&DAT_14ca63c78,4,2,0);
  }
  else {
    lVar3 = FUN_144735dd8(param_1,&DAT_14ca1c570,0);
  }
  cVar1 = *(char *)(lVar3 + 0x68);
  puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar4 = puVar5 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar4) {
    FUN_140023dd8((longlong *)(param_1 + 0x70),0x50);
    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 9;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar4;
  puVar5[1] = *(undefined8 *)(lVar3 + 8);
  puVar5[2] = 0;
  *(undefined1 *)(puVar5 + 3) = 3;
  *(undefined8 *)((longlong)puVar5 + 0x1c) = 0xffffffffffffffff;
  *puVar5 = &PTR_FUN_14a1fb168;
  *(byte *)(puVar5 + 5) = cVar1 >> 7 & 0x1c;
  *(undefined8 *)((longlong)puVar5 + 0x2c) = 0xffffffff00000000;
  puVar5[7] = 0;
  puVar5[8] = lVar3;
  iVar2 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar2 + 1U) {
    FUN_1447568fc(param_1 + 0x198,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar2 * 8) = puVar5;
  *(int *)((longlong)puVar5 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  return puVar5;
}



// FUNCTION 142e5a46f FUN_142e5a46f body=69 status=ok
// SIG undefined FUN_142e5a46f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e5a46f(void)

{
  _DAT_14ca1b248 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e5a4b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1b250,1);
  return;
}



// FUNCTION 142e5a4b4 FUN_142e5a4b4 body=69 status=ok
// SIG undefined FUN_142e5a4b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e5a4b4(void)

{
  _DAT_14ca1b260 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e5a4f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1b268,1);
  return;
}



// FUNCTION 142e5a4f9 FUN_142e5a4f9 body=69 status=ok
// SIG undefined FUN_142e5a4f9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e5a4f9(void)

{
  _DAT_14ca1b278 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e5a53b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1b280,1);
  return;
}



// FUNCTION 142e5a53e FUN_142e5a53e body=69 status=ok
// SIG undefined FUN_142e5a53e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e5a53e(void)

{
  _DAT_14ca1b290 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e5a580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1b298,1);
  return;
}



// FUNCTION 142e5a5a4 FUN_142e5a5a4 body=74 status=ok
// SIG undefined FUN_142e5a5a4(void)

void FUN_142e5a5a4(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000142e5a5ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142e5a652 FUN_142e5a652 body=74 status=ok
// SIG undefined FUN_142e5a652(void)

void FUN_142e5a652(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000142e5a698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142e5a6f0 FUN_142e5a6f0 body=481 status=ok
// SIG undefined FUN_142e5a6f0(void)

void FUN_142e5a6f0(longlong param_1,ulonglong *param_2)

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
  FUN_147268bc6(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e5a8d2 FUN_142e5a8d2 body=128 status=ok
// SIG undefined FUN_142e5a8d2(void)

void FUN_142e5a8d2(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 8);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 8,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 8),param_1,(longlong)param_2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 8,param_2,param_3,param_4);
  return;
}



// FUNCTION 142e5a952 FUN_142e5a952 body=232 status=ok
// SIG undefined FUN_142e5a952(void)

void FUN_142e5a952(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 142e5aa3a FUN_142e5aa3a body=81 status=ok
// SIG undefined FUN_142e5aa3a(void)

void FUN_142e5aa3a(undefined8 param_1,longlong *param_2)

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
  FUN_147268c69(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142e5aa8c FUN_142e5aa8c body=481 status=ok
// SIG undefined FUN_142e5aa8c(void)

void FUN_142e5aa8c(longlong param_1,ulonglong *param_2)

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
  FUN_147268fa6(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e5ac6e FUN_142e5ac6e body=232 status=ok
// SIG undefined FUN_142e5ac6e(void)

void FUN_142e5ac6e(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 142e5ad56 FUN_142e5ad56 body=81 status=ok
// SIG undefined FUN_142e5ad56(void)

void FUN_142e5ad56(undefined8 param_1,longlong *param_2)

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
  FUN_147269049(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142e5ada8 FUN_142e5ada8 body=481 status=ok
// SIG undefined FUN_142e5ada8(void)

void FUN_142e5ada8(longlong param_1,ulonglong *param_2)

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
  FUN_147269438(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e5af8a FUN_142e5af8a body=232 status=ok
// SIG undefined FUN_142e5af8a(void)

void FUN_142e5af8a(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 142e5b072 FUN_142e5b072 body=81 status=ok
// SIG undefined FUN_142e5b072(void)

void FUN_142e5b072(undefined8 param_1,longlong *param_2)

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
  FUN_1472694db(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142e5b0e8 FUN_142e5b0e8 body=481 status=ok
// SIG undefined FUN_142e5b0e8(void)

void FUN_142e5b0e8(longlong param_1,ulonglong *param_2)

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
  FUN_14726ae40(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e5b2ca FUN_142e5b2ca body=232 status=ok
// SIG undefined FUN_142e5b2ca(void)

void FUN_142e5b2ca(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 142e5b3b2 FUN_142e5b3b2 body=81 status=ok
// SIG undefined FUN_142e5b3b2(void)

void FUN_142e5b3b2(undefined8 param_1,longlong *param_2)

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
  FUN_14726aee3(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142e5b404 FUN_142e5b404 body=31 status=ok
// SIG undefined FUN_142e5b404(void)

undefined8 FUN_142e5b404(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142e5b42a FUN_142e5b42a body=547 status=ok
// SIG undefined FUN_142e5b42a(void)

longlong * FUN_142e5b42a(longlong *param_1,int param_2)

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



// FUNCTION 142e5b65a FUN_142e5b65a body=110 status=ok
// SIG undefined FUN_142e5b65a(void)

undefined8 * FUN_142e5b65a(undefined8 *param_1,int param_2)

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



// FUNCTION 142e5b6c8 FUN_142e5b6c8 body=547 status=ok
// SIG undefined FUN_142e5b6c8(void)

longlong * FUN_142e5b6c8(longlong *param_1,int param_2)

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



// FUNCTION 142e5b8f8 FUN_142e5b8f8 body=110 status=ok
// SIG undefined FUN_142e5b8f8(void)

undefined8 * FUN_142e5b8f8(undefined8 *param_1,int param_2)

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



// FUNCTION 142e5b966 FUN_142e5b966 body=499 status=ok
// SIG undefined FUN_142e5b966(void)

void FUN_142e5b966(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  byte bVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  byte bVar11;
  byte bVar12;
  int iVar13;
  
  lVar3 = *param_1;
  *(undefined2 *)((longlong)param_2 + 0x11) = 0;
  bVar7 = 1;
  lVar10 = 0;
  bVar11 = 0;
  bVar12 = 0;
  do {
    if (0 < *(int *)(*param_2 + 0x98 + lVar10)) {
      bVar11 = bVar11 + 1;
      *(byte *)((longlong)param_2 + 0x11) = bVar11;
      bVar12 = bVar12 | bVar7;
      *(byte *)((longlong)param_2 + 0x12) = bVar12;
    }
    bVar7 = bVar7 * '\x02';
    lVar10 = lVar10 + 0x10;
  } while (lVar10 != 0x20);
  iVar13 = ((uint)bVar11 * 2 + (uint)*(byte *)((longlong)param_2 + 0x13) * 4) *
           (uint)*(byte *)(param_2 + 2);
  iVar9 = *(int *)((longlong)param_2 + 0xc);
  if (iVar13 == iVar9) {
    return;
  }
  if (iVar9 != 0) {
    lVar10 = *(longlong *)(lVar3 + 8);
    lVar6 = param_2[1];
    iVar5 = *(int *)(lVar10 + 0xd8);
    *(uint *)(lVar10 + 0xd8) = iVar5 + 1U;
    if (*(uint *)(lVar10 + 0xdc) < iVar5 + 1U) {
      FUN_14017bd48(lVar10 + 0x80,iVar5);
    }
    lVar8 = lVar10 + 0x80;
    if (*(longlong *)(lVar10 + 0xd0) != 0) {
      lVar8 = *(longlong *)(lVar10 + 0xd0);
    }
    *(ulonglong *)(lVar8 + (longlong)iVar5 * 8) = CONCAT44(iVar9,(int)lVar6);
    *(int *)(lVar10 + 0x10) = *(int *)(lVar10 + 0x10) - iVar9;
  }
  if (iVar13 == 0) {
    iVar9 = -1;
  }
  else {
    lVar10 = *(longlong *)(lVar3 + 8);
    piVar1 = (int *)(lVar10 + 0x10);
    iVar9 = *(int *)(lVar10 + 0x1c);
    lVar6 = (longlong)iVar9;
    if (iVar9 < *(int *)(lVar10 + 0x78)) {
      lVar8 = lVar10 + 0x20;
      if (*(longlong *)(lVar10 + 0x70) != 0) {
        lVar8 = *(longlong *)(lVar10 + 0x70);
      }
      iVar9 = *(int *)(lVar10 + 0x78) - iVar9;
      do {
        if (iVar13 <= *(int *)(lVar8 + 4 + lVar6 * 8)) {
          if (lVar6 != -1) {
            *piVar1 = *piVar1 + iVar13;
            goto LAB_142e5ba98;
          }
          break;
        }
        lVar6 = lVar6 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    if (*(int *)(lVar10 + 0xd8) != 0) {
      FUN_144883418(piVar1);
      iVar9 = *(int *)(lVar10 + 0x1c);
      lVar6 = (longlong)iVar9;
      if (iVar9 < *(int *)(lVar10 + 0x78)) {
        lVar8 = lVar10 + 0x20;
        if (*(longlong *)(lVar10 + 0x70) != 0) {
          lVar8 = *(longlong *)(lVar10 + 0x70);
        }
        iVar9 = *(int *)(lVar10 + 0x78) - iVar9;
        do {
          if (iVar13 <= *(int *)(lVar8 + 4 + lVar6 * 8)) {
            *piVar1 = *piVar1 + iVar13;
            if (lVar6 != -1) goto LAB_142e5ba98;
            goto LAB_142e5ba78;
          }
          lVar6 = lVar6 + 1;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
    }
    *piVar1 = *piVar1 + iVar13;
LAB_142e5ba78:
    iVar9 = *(int *)(lVar10 + 0x14);
    iVar5 = iVar9 + iVar13;
    *(int *)(lVar10 + 0x14) = iVar5;
    iVar4 = *(int *)(lVar10 + 0x18);
    if (*(int *)(lVar10 + 0x18) < iVar5) {
      iVar4 = iVar5;
    }
    *(int *)(lVar10 + 0x18) = iVar4;
  }
LAB_142e5babf:
  *(int *)(param_2 + 1) = iVar9;
  *(int *)((longlong)param_2 + 0xc) = iVar13;
  if (*(char *)(lVar3 + 0x41) == '\0') {
    uVar2 = *(undefined4 *)(*param_2 + 0x15c);
    iVar9 = *(int *)(lVar3 + 0x38);
    *(uint *)(lVar3 + 0x38) = iVar9 + 1U;
    if (*(uint *)(lVar3 + 0x3c) < iVar9 + 1U) {
      FUN_144a78748((longlong *)(lVar3 + 0x30),iVar9);
    }
    *(undefined4 *)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar9 * 4) = uVar2;
  }
  return;
LAB_142e5ba98:
  iVar5 = (int)lVar6;
  lVar6 = (longlong)iVar5;
  iVar9 = *(int *)(lVar8 + lVar6 * 8);
  *(int *)(lVar8 + lVar6 * 8) = iVar9 + iVar13;
  piVar1 = (int *)(lVar8 + 4 + lVar6 * 8);
  *piVar1 = *piVar1 - iVar13;
  if ((*piVar1 == 0) && (*(int *)(lVar10 + 0x1c) == iVar5)) {
    *(int *)(lVar10 + 0x1c) = iVar5 + 1;
  }
  goto LAB_142e5babf;
}



// FUNCTION 142e5bb5a FUN_142e5bb5a body=547 status=ok
// SIG undefined FUN_142e5bb5a(void)

longlong * FUN_142e5bb5a(longlong *param_1,int param_2)

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



// FUNCTION 142e5bd8a FUN_142e5bd8a body=110 status=ok
// SIG undefined FUN_142e5bd8a(void)

undefined8 * FUN_142e5bd8a(undefined8 *param_1,int param_2)

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



// FUNCTION 142e5bdf8 FUN_142e5bdf8 body=547 status=ok
// SIG undefined FUN_142e5bdf8(void)

longlong * FUN_142e5bdf8(longlong *param_1,int param_2)

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



// FUNCTION 142e5c028 FUN_142e5c028 body=110 status=ok
// SIG undefined FUN_142e5c028(void)

undefined8 * FUN_142e5c028(undefined8 *param_1,int param_2)

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



// FUNCTION 142e5c096 FUN_142e5c096 body=539 status=ok
// SIG undefined FUN_142e5c096(void)

void FUN_142e5c096(longlong *param_1,longlong *param_2)

{
  undefined2 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  byte bVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong *plVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  byte bVar20;
  ulonglong uVar21;
  int iVar22;
  ulonglong uVar23;
  
  lVar8 = *(longlong *)(*param_2 + 8);
  iVar4 = *(int *)(lVar8 + 0x2a8);
  lVar18 = *(longlong *)(*(longlong *)(*param_1 + 8) + 0x128);
  uVar5 = *(uint *)((longlong)param_2 + 0xc);
  uVar17 = *(uint *)(param_2 + 1);
  iVar6 = *(int *)(lVar18 + 0x38);
  *(uint *)(lVar18 + 0x38) = iVar6 + uVar5;
  if ((uint)(*(int *)(lVar18 + 0x3c) - iVar6) < uVar5) {
    FUN_1447808da((longlong *)(lVar18 + 0x30),iVar6);
  }
  if (1 < (int)uVar5) {
    uVar17 = uVar17 >> 1;
    iVar22 = (int)uVar5 / 2;
    do {
      iVar7 = *(int *)(lVar18 + 0x48);
      *(uint *)(lVar18 + 0x48) = iVar7 + 1U;
      if (*(uint *)(lVar18 + 0x4c) < iVar7 + 1U) {
        FUN_1447808da((longlong *)(lVar18 + 0x40),iVar7);
      }
      *(uint *)(*(longlong *)(lVar18 + 0x40) + (longlong)iVar7 * 4) = uVar17;
      uVar17 = uVar17 + 1;
      iVar22 = iVar22 + -1;
    } while (iVar22 != 0);
  }
  lVar18 = (longlong)iVar6 * 4 + *(longlong *)(lVar18 + 0x30);
  lVar15 = *param_2;
  plVar13 = (longlong *)(lVar15 + 0x90);
  uVar14 = ~(-1L << ((char)iVar4 + 1U & 0x3f));
  if (0x3e < iVar4) {
    uVar14 = 0xffffffffffffffff;
  }
  lVar19 = 0x90;
  bVar20 = 1;
  do {
    if ((bVar20 & *(byte *)((longlong)param_2 + 0x12)) != 0) {
      lVar12 = plVar13[1];
      uVar21 = uVar14;
      if ((longlong)(int)lVar12 != 0) {
        lVar9 = *plVar13;
        lVar16 = 0;
        do {
          uVar23 = (ulonglong)
                   *(int *)(*(longlong *)(lVar8 + 0x298) + 0x10 + (longlong)(int)lVar16 * 0x60);
          puVar1 = (undefined2 *)(lVar9 + lVar16 * 8);
          *(ulonglong *)(lVar18 + uVar23 * 8) =
               CONCAT44(*(undefined4 *)(puVar1 + 2),CONCAT22(*puVar1,puVar1[1]));
          uVar21 = uVar21 & ~(1L << (uVar23 & 0x3f));
          lVar16 = lVar16 + 1;
        } while (puVar1 + 4 != (undefined2 *)(lVar9 + (longlong)(int)lVar12 * 8));
      }
      for (; uVar21 != 0; uVar21 = uVar21 & (-2L << bVar10 | 0xfffffffffffffffeU >> 0x40 - bVar10))
      {
        lVar12 = 0;
        if (uVar21 != 0) {
          for (; (uVar21 >> lVar12 & 1) == 0; lVar12 = lVar12 + 1) {
          }
        }
        *(undefined8 *)(lVar18 + lVar12 * 8) = 0xffffffffffffffff;
        bVar10 = (byte)lVar12 & 0x3f;
      }
      lVar18 = lVar18 + (ulonglong)*(byte *)(param_2 + 2) * 8;
    }
    bVar20 = bVar20 * '\x02';
    plVar13 = (longlong *)(lVar15 + lVar19 + 0x10);
    lVar19 = lVar19 + 0x10;
  } while (lVar19 != 0xb0);
  if ((*(char *)((longlong)param_2 + 0x13) != '\0') &&
     (iVar4 = *(int *)(lVar8 + 0x2a0), (longlong)iVar4 != 0)) {
    lVar8 = *(longlong *)(lVar8 + 0x298);
    lVar15 = 0;
    do {
      puVar2 = (undefined8 *)(lVar8 + 0x40 + lVar15);
      uVar11 = puVar2[1];
      puVar3 = (undefined8 *)(lVar18 + (ulonglong)(uint)(*(int *)(lVar8 + 0x10 + lVar15) << 4));
      *puVar3 = *puVar2;
      puVar3[1] = uVar11;
      lVar15 = lVar15 + 0x60;
    } while ((longlong)iVar4 * 0x60 != lVar15);
  }
  return;
}



// FUNCTION 142e5c2b2 FUN_142e5c2b2 body=547 status=ok
// SIG undefined FUN_142e5c2b2(void)

longlong * FUN_142e5c2b2(longlong *param_1,int param_2)

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



// FUNCTION 142e5c4e2 FUN_142e5c4e2 body=110 status=ok
// SIG undefined FUN_142e5c4e2(void)

undefined8 * FUN_142e5c4e2(undefined8 *param_1,int param_2)

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



// FUNCTION 142e5c562 FUN_142e5c562 body=38 status=ok
// SIG undefined FUN_142e5c562(void)

undefined8 FUN_142e5c562(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142e5c588 FUN_142e5c588 body=461 status=ok
// SIG undefined FUN_142e5c588(void)

void FUN_142e5c588(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
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
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar3 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar3 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar3;
  param_2[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14a1fb978;
  puVar3[3] = 0;
  *(int *)(puVar3 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x24) = 8;
  }
  else {
    puVar2 = local_b8;
    if (local_b0 != (undefined1 *)0x0) {
      puVar2 = local_b0;
    }
    FUN_1446fe144(puVar3 + 2,local_a8,0);
    puVar1 = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 2;
    }
    memcpy(puVar1,puVar2,(longlong)local_a8);
  }
  puVar3[0xd] = 0;
  *(int *)(puVar3 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    puVar2 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      puVar2 = local_a0;
    }
    FUN_1446fe1b8(puVar3 + 5,local_58,0);
    puVar1 = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 5;
    }
    memcpy(puVar1,puVar2,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar3 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (local_b0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_14178d776(*(undefined8 *)(param_1 + 0x1b8),param_2,
                *(undefined8 *)(*(longlong *)(param_1 + 0x1c0) + 0x10),0);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e5c756 FUN_142e5c756 body=86 status=ok
// SIG undefined FUN_142e5c756(void)

undefined8 * FUN_142e5c756(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a2a0660;
  FUN_141538e31(param_1[0x38],*(undefined4 *)(param_1 + 0x39));
  if (param_1[0x38] != 0) {
    FUN_1400020a8();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142e5c7ac FUN_142e5c7ac body=878 status=ok
// SIG undefined FUN_142e5c7ac(void)

void FUN_142e5c7ac(longlong param_1,ulonglong *param_2)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  void *_Src_00;
  size_t _Size;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 **_Src_01;
  undefined1 *_Src_02;
  size_t sVar5;
  size_t _Size_00;
  void *_Dst;
  undefined8 *puVar6;
  void *_Dst_00;
  longlong lVar7;
  undefined1 auStack_f8 [32];
  ulonglong *local_d8;
  longlong local_d0;
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
  puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar6 + 0x11;
  local_d8 = param_2;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x90);
    puVar6 = (undefined8 *)(*local_d8 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar6 + 0x11;
  }
  *local_d8 = (ulonglong)puVar3;
  *(int *)(local_d8 + 0xc) = (int)local_d8[0xc] + 1;
  *(undefined8 **)local_d8[6] = puVar6;
  local_d8[6] = (ulonglong)(puVar6 + 1);
  puVar6[1] = 0;
  *puVar6 = &PTR_FUN_14a1fb978;
  puVar6[3] = 0;
  *(int *)(puVar6 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar6 + 0x24) = 8;
  }
  else {
    _Src_01 = &local_c0;
    if (local_b8 != (undefined8 **)0x0) {
      _Src_01 = local_b8;
    }
    FUN_1446fe144(puVar6 + 2,local_b0,0);
    puVar3 = (undefined8 *)puVar6[3];
    if ((undefined8 *)puVar6[3] == (undefined8 *)0x0) {
      puVar3 = puVar6 + 2;
    }
    memcpy(puVar3,_Src_01,(longlong)local_b0);
  }
  puVar6[0xd] = 0;
  *(int *)(puVar6 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar6 + 0x74) = 8;
  }
  else {
    _Src_02 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src_02 = local_a8;
    }
    FUN_1446fe1b8(puVar6 + 5,local_60,0);
    puVar3 = (undefined8 *)puVar6[0xd];
    if ((undefined8 *)puVar6[0xd] == (undefined8 *)0x0) {
      puVar3 = puVar6 + 5;
    }
    memcpy(puVar3,_Src_02,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar6 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar6 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar6 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar6 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined8 **)0x0) {
    FUN_1400020a8();
  }
  _Src = *(void **)(param_1 + 0x1c0);
  local_c8 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x1b8) + 0x20) + 0x10);
  iVar2 = *(int *)(param_1 + 0x1c8);
  lVar7 = (longlong)iVar2;
  _Size_00 = lVar7 * 0x20;
  _Dst = (void *)(*local_d8 + 7 & 0xfffffffffffffff8);
  pvVar4 = (void *)((longlong)_Dst + _Size_00);
  if ((void *)local_d8[1] < pvVar4) {
    FUN_140023dd8(local_d8,(uint)_Size_00 | 8);
    _Dst = (void *)(*local_d8 + 7 & 0xfffffffffffffff8);
    pvVar4 = (void *)((longlong)_Dst + _Size_00);
  }
  *local_d8 = (ulonglong)pvVar4;
  memcpy(_Dst,_Src,_Size_00);
  local_d0 = lVar7;
  if (0 < iVar2) {
    sVar5 = 0;
    do {
      iVar2 = *(int *)((longlong)_Src + sVar5 + 0x18);
      if ((longlong)iVar2 != 0) {
        _Src_00 = *(void **)((longlong)_Src + sVar5 + 0x10);
        _Size = (longlong)iVar2 * 0x28;
        _Dst_00 = (void *)(*local_d8 + 7 & 0xfffffffffffffff8);
        pvVar4 = (void *)(_Size + (longlong)_Dst_00);
        if ((void *)local_d8[1] < pvVar4) {
          FUN_140023dd8(local_d8,(int)_Size + 8);
          _Dst_00 = (void *)(*local_d8 + 7 & 0xfffffffffffffff8);
          pvVar4 = (void *)(_Size + (longlong)_Dst_00);
        }
        *local_d8 = (ulonglong)pvVar4;
        memcpy(_Dst_00,_Src_00,_Size);
        *(void **)((longlong)_Dst + sVar5 + 0x10) = _Dst_00;
        *(int *)((longlong)_Dst + sVar5 + 0x18) = iVar2;
      }
      sVar5 = sVar5 + 0x20;
    } while (_Size_00 != sVar5);
  }
  puVar6 = (undefined8 *)(*local_d8 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar6 + 8;
  if ((undefined8 *)local_d8[1] < puVar3) {
    FUN_140023dd8(local_d8,0x48);
    puVar6 = (undefined8 *)(*local_d8 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar6 + 8;
  }
  *local_d8 = (ulonglong)puVar3;
  *(int *)(local_d8 + 0xc) = (int)local_d8[0xc] + 1;
  *(undefined8 **)local_d8[6] = puVar6;
  local_d8[6] = (ulonglong)(puVar6 + 1);
  puVar6[1] = 0;
  *puVar6 = &PTR_FUN_14a236970;
  puVar6[2] = _Dst;
  *(int *)(puVar6 + 3) = (int)local_d0;
  puVar6[4] = local_c8;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = local_c8;
  FUN_14494c7ac(local_d8,&local_c0,1);
  if (local_c0 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_c0 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_c0)(local_c0,1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e5cb28 FUN_142e5cb28 body=29 status=ok
// SIG undefined FUN_142e5cb28(void)

undefined8 FUN_142e5cb28(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142e5cb5a FUN_142e5cb5a body=85 status=ok
// SIG undefined FUN_142e5cb5a(void)

void FUN_142e5cb5a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a2a0710;
  return;
}



// FUNCTION 142e5cbb0 FUN_142e5cbb0 body=85 status=ok
// SIG undefined FUN_142e5cbb0(void)

void FUN_142e5cbb0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a2a0710;
  return;
}



// FUNCTION 142e5cc06 FUN_142e5cc06 body=118 status=ok
// SIG undefined FUN_142e5cc06(void)

void FUN_142e5cc06(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a2a0710;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142e5cc6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 142e5cc7c FUN_142e5cc7c body=81 status=ok
// SIG undefined FUN_142e5cc7c(void)

void FUN_142e5cc7c(void)

{
  undefined1 auStack_98 [40];
  undefined1 local_70 [96];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14165273a(local_70);
  FUN_1416525c2(local_70);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e5ccce FUN_142e5ccce body=83 status=ok
// SIG undefined FUN_142e5ccce(void)

undefined8 FUN_142e5ccce(void)

{
  undefined1 auStack_98 [40];
  undefined1 local_70 [96];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14165273a(local_70);
  FUN_1416525c2(local_70);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e5cd22 FUN_142e5cd22 body=29 status=ok
// SIG undefined FUN_142e5cd22(void)

undefined8 FUN_142e5cd22(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142e5cd54 FUN_142e5cd54 body=85 status=ok
// SIG undefined FUN_142e5cd54(void)

void FUN_142e5cd54(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a2a0780;
  return;
}



// FUNCTION 142e5cdaa FUN_142e5cdaa body=85 status=ok
// SIG undefined FUN_142e5cdaa(void)

void FUN_142e5cdaa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a2a0780;
  return;
}



// FUNCTION 142e5ce00 FUN_142e5ce00 body=118 status=ok
// SIG undefined FUN_142e5ce00(void)

void FUN_142e5ce00(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a2a0780;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142e5ce67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 142e5ce76 FUN_142e5ce76 body=81 status=ok
// SIG undefined FUN_142e5ce76(void)

void FUN_142e5ce76(void)

{
  undefined1 auStack_98 [40];
  undefined1 local_70 [96];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14165273a(local_70);
  FUN_1416525c2(local_70);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e5cec8 FUN_142e5cec8 body=83 status=ok
// SIG undefined FUN_142e5cec8(void)

undefined8 FUN_142e5cec8(void)

{
  undefined1 auStack_98 [40];
  undefined1 local_70 [96];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14165273a(local_70);
  FUN_1416525c2(local_70);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e5cf1c FUN_142e5cf1c body=29 status=ok
// SIG undefined FUN_142e5cf1c(void)

undefined8 FUN_142e5cf1c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142e5cf4e FUN_142e5cf4e body=85 status=ok
// SIG undefined FUN_142e5cf4e(void)

void FUN_142e5cf4e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a2a07f0;
  return;
}



// FUNCTION 142e5cfa4 FUN_142e5cfa4 body=85 status=ok
// SIG undefined FUN_142e5cfa4(void)

void FUN_142e5cfa4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a2a07f0;
  return;
}



// FUNCTION 142e5cffa FUN_142e5cffa body=118 status=ok
// SIG undefined FUN_142e5cffa(void)

void FUN_142e5cffa(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a2a07f0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142e5d061. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 142e5d070 FUN_142e5d070 body=81 status=ok
// SIG undefined FUN_142e5d070(void)

void FUN_142e5d070(void)

{
  undefined1 auStack_98 [40];
  undefined1 local_70 [96];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14165273a(local_70);
  FUN_1416525c2(local_70);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e5d0c2 FUN_142e5d0c2 body=83 status=ok
// SIG undefined FUN_142e5d0c2(void)

undefined8 FUN_142e5d0c2(void)

{
  undefined1 auStack_98 [40];
  undefined1 local_70 [96];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14165273a(local_70);
  FUN_1416525c2(local_70);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e5d116 FUN_142e5d116 body=29 status=ok
// SIG undefined FUN_142e5d116(void)

undefined8 FUN_142e5d116(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142e5d148 FUN_142e5d148 body=85 status=ok
// SIG undefined FUN_142e5d148(void)

void FUN_142e5d148(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a2a0860;
  return;
}



// FUNCTION 142e5d19e FUN_142e5d19e body=85 status=ok
// SIG undefined FUN_142e5d19e(void)

void FUN_142e5d19e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a2a0860;
  return;
}



// FUNCTION 142e5d1f4 FUN_142e5d1f4 body=118 status=ok
// SIG undefined FUN_142e5d1f4(void)

void FUN_142e5d1f4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a2a0860;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142e5d25b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 142e5d26a FUN_142e5d26a body=81 status=ok
// SIG undefined FUN_142e5d26a(void)

void FUN_142e5d26a(void)

{
  undefined1 auStack_98 [40];
  undefined1 local_70 [96];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14165273a(local_70);
  FUN_1416525c2(local_70);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e5d2bc FUN_142e5d2bc body=83 status=ok
// SIG undefined FUN_142e5d2bc(void)

undefined8 FUN_142e5d2bc(void)

{
  undefined1 auStack_98 [40];
  undefined1 local_70 [96];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14165273a(local_70);
  FUN_1416525c2(local_70);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e5d310 FUN_142e5d310 body=1147 status=ok
// SIG undefined FUN_142e5d310(void)

void FUN_142e5d310(longlong *param_1)

{
  uint *puVar1;
  int *piVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  int *piVar7;
  char cVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  bool bVar17;
  undefined1 auStack_78 [40];
  longlong local_50;
  int local_48;
  undefined8 local_44;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  piVar2 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  iVar13 = *piVar2;
  if (iVar13 == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    iVar13 = *piVar2;
  }
  if ((iVar13 == 0x60000000) || (iVar13 == 0)) {
    *piVar2 = 0x40000010;
  }
  *(undefined4 *)*param_1 = 0;
  *(undefined4 *)(*param_1 + 8) = 0;
  *(int *)(*param_1 + 4) = *(int *)(param_1[1] + 8) - *(int *)(param_1[1] + 0x38);
  plVar9 = (longlong *)param_1[1];
  uVar4 = *(uint *)(plVar9 + 1);
  uVar15 = 0;
  do {
    uVar12 = uVar15;
    if (uVar4 == uVar12) goto LAB_142e5d418;
    uVar15 = uVar12 + 1;
  } while (SBORROW4(0,*(int *)(plVar9[2] + (longlong)(int)uVar12 * 4)));
  if (uVar4 + 1 != uVar12 + 1) {
    do {
      lVar6 = *plVar9;
      uVar15 = *(uint *)*param_1;
      uVar14 = (uint)*(ushort *)(lVar6 + 0x5c + (longlong)(int)uVar12 * 0x60);
      if (uVar15 < uVar14) {
        uVar15 = uVar14;
      }
      *(uint *)*param_1 = uVar15;
      *(uint *)(*param_1 + 8) =
           *(uint *)(*param_1 + 8) |
           *(uint *)(*(longlong *)(lVar6 + 0x48 + (longlong)(int)uVar12 * 0x60) + 0x38);
      uVar15 = uVar12 + 1;
      if (uVar12 + 1 < *(uint *)(plVar9 + 1)) {
        uVar15 = *(uint *)(plVar9 + 1);
      }
      do {
        uVar14 = uVar15;
        if (uVar15 - 1 == uVar12) break;
        uVar12 = uVar12 + 1;
        uVar14 = uVar12;
      } while (SBORROW4(0,*(int *)(plVar9[2] + (longlong)(int)uVar12 * 4)));
      uVar12 = uVar14;
    } while (uVar12 != uVar4);
  }
LAB_142e5d418:
  piVar7 = (int *)*param_1;
  plVar9 = (longlong *)(piVar7 + 0xe);
  iVar16 = *piVar7 + 1;
  iVar5 = piVar7[0x10];
  if (iVar5 < iVar16) {
    piVar7[0x10] = iVar16;
    if ((uint)(piVar7[0x11] - iVar5) < (uint)(iVar16 - iVar5)) {
      FUN_1412699b2(plVar9);
    }
    memset((void *)((longlong)iVar5 * 0x10 + *plVar9),0,(longlong)(iVar16 - iVar5) << 4);
  }
  else {
    if (iVar16 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar16);
    }
    if (iVar16 < iVar5) {
      piVar7[0x10] = iVar16;
      FUN_141772f88(plVar9);
    }
  }
  plVar9 = (longlong *)param_1[1];
  uVar4 = *(uint *)(plVar9 + 1);
  uVar15 = 0;
  do {
    uVar12 = uVar15;
    if (uVar4 == uVar12) goto LAB_142e5d4cc;
    uVar15 = uVar12 + 1;
  } while (SBORROW4(0,*(int *)(plVar9[2] + (longlong)(int)uVar12 * 4)));
  if (uVar4 + 1 != uVar12 + 1) {
    do {
      *(undefined4 *)
       (*(longlong *)(*param_1 + 0x38) + 0xc +
       (ulonglong)*(ushort *)(*plVar9 + 0x5c + (longlong)(int)uVar12 * 0x60) * 0x10) =
           *(undefined4 *)(*(longlong *)(*plVar9 + 0x48 + (longlong)(int)uVar12 * 0x60) + 0x40);
      uVar15 = uVar12 + 1;
      if (uVar12 + 1 < *(uint *)(plVar9 + 1)) {
        uVar15 = *(uint *)(plVar9 + 1);
      }
      do {
        uVar14 = uVar15;
        if (uVar15 - 1 == uVar12) break;
        uVar12 = uVar12 + 1;
        uVar14 = uVar12;
      } while (SBORROW4(0,*(int *)(plVar9[2] + (longlong)(int)uVar12 * 4)));
      uVar12 = uVar14;
    } while (uVar12 != uVar4);
  }
LAB_142e5d4cc:
  if ((DAT_14ca19c50 == 0) ||
     (((DAT_14ca84f5f == '\0' && (cVar8 = FUN_147262ebe((short)param_1[2]), cVar8 == '\0')) ||
      (((int *)*param_1)[1] == 0)))) {
    lVar6 = *(longlong *)(*param_1 + 0x10);
    if (lVar6 != 0) {
      *(undefined8 *)(*param_1 + 0x10) = 0;
      LOCK();
      puVar1 = (uint *)(lVar6 + 8);
      uVar4 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar4 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar6 + 8);
        LOCK();
        uVar4 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar4 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar6 + 0xd);
          plVar10 = (longlong *)FUN_14001cc68(0x10,8);
          plVar10[1] = lVar6;
          plVar9 = DAT_14ca843c0;
          plVar11 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar10 = (longlong)plVar9;
              LOCK();
              bVar17 = plVar9 != DAT_14ca843c0;
              plVar11 = plVar10;
              if (bVar17) {
                plVar9 = DAT_14ca843c0;
                plVar11 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar11;
              UNLOCK();
            } while (bVar17);
          }
          else {
            do {
              *plVar10 = (longlong)plVar11;
              LOCK();
              bVar17 = plVar11 != DAT_14ca843c8;
              plVar9 = plVar10;
              if (bVar17) {
                plVar11 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar17);
          }
        }
      }
    }
  }
  else {
    local_44 = 0x1000000000;
    local_48 = *(int *)*param_1 + 1;
    local_3c = 0;
    (**(code **)(*DAT_14ca83900 + 0x500))(DAT_14ca83900,&local_50);
    plVar9 = (longlong *)(*param_1 + 0x10);
    if (plVar9 != &local_50) {
      lVar6 = *plVar9;
      *plVar9 = local_50;
      local_50 = 0;
      if (lVar6 == 0) goto LAB_142e5d6a3;
      LOCK();
      puVar1 = (uint *)(lVar6 + 8);
      uVar4 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar4 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar6 + 8);
        LOCK();
        uVar4 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar4 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar6 + 0xd);
          plVar10 = (longlong *)FUN_14001cc68(0x10,8);
          plVar10[1] = lVar6;
          plVar9 = DAT_14ca843c0;
          plVar11 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar10 = (longlong)plVar9;
              LOCK();
              bVar17 = plVar9 != DAT_14ca843c0;
              plVar11 = plVar10;
              if (bVar17) {
                plVar9 = DAT_14ca843c0;
                plVar11 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar11;
              UNLOCK();
            } while (bVar17);
          }
          else {
            do {
              *plVar10 = (longlong)plVar11;
              LOCK();
              bVar17 = plVar11 != DAT_14ca843c8;
              plVar9 = plVar10;
              if (bVar17) {
                plVar11 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar17);
          }
        }
      }
    }
    lVar6 = local_50;
    if (local_50 != 0) {
      LOCK();
      puVar1 = (uint *)(local_50 + 8);
      uVar4 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar4 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_50 + 8);
        LOCK();
        uVar4 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar4 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_50 + 0xd);
          plVar10 = (longlong *)FUN_14001cc68(0x10,8);
          plVar10[1] = lVar6;
          plVar9 = DAT_14ca843c0;
          plVar11 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar10 = (longlong)plVar9;
              LOCK();
              bVar17 = plVar9 != DAT_14ca843c0;
              plVar11 = plVar10;
              if (bVar17) {
                plVar9 = DAT_14ca843c0;
                plVar11 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar11;
              UNLOCK();
            } while (bVar17);
          }
          else {
            do {
              *plVar10 = (longlong)plVar11;
              LOCK();
              bVar17 = plVar11 != DAT_14ca843c8;
              plVar9 = plVar10;
              if (bVar17) {
                plVar11 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar17);
          }
        }
      }
    }
  }
LAB_142e5d6a3:
  if ((iVar13 == 0x60000000) || (iVar13 == 0)) {
    *piVar2 = iVar13;
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142e5d78c FUN_142e5d78c body=547 status=ok
// SIG undefined FUN_142e5d78c(void)

longlong * FUN_142e5d78c(longlong *param_1,int param_2)

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



// FUNCTION 142e5d9bc FUN_142e5d9bc body=110 status=ok
// SIG undefined FUN_142e5d9bc(void)

undefined8 * FUN_142e5d9bc(undefined8 *param_1,int param_2)

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



// FUNCTION 142e5da2a FUN_142e5da2a body=2594 status=ok
// SIG undefined FUN_142e5da2a(void)

void FUN_142e5da2a(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  ushort uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  longlong *plVar16;
  int iVar17;
  longlong *plVar18;
  longlong *plVar19;
  longlong lVar20;
  longlong *plVar21;
  longlong *plVar22;
  undefined8 *puVar23;
  ulonglong uVar24;
  int iVar25;
  longlong lVar26;
  int iVar27;
  int iVar28;
  longlong *plVar29;
  uint uVar30;
  longlong *plVar31;
  uint uVar32;
  uint uVar33;
  longlong *plVar34;
  bool bVar35;
  float fVar36;
  undefined1 auStack_3b8 [44];
  int local_38c;
  longlong *local_388;
  int *local_380;
  longlong local_378;
  longlong local_370;
  undefined4 local_368 [188];
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  local_380 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xc60);
  iVar27 = *local_380;
  if (iVar27 == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    iVar27 = *local_380;
  }
  if ((iVar27 == 0x60000000) || (iVar27 == 0)) {
    *local_380 = 0x40000010;
  }
  puVar23 = (undefined8 *)param_1[1];
  iVar17 = *(int *)((longlong)puVar23 + 0xc);
  FUN_14471867d(*puVar23,*(undefined4 *)(puVar23 + 1));
  *(undefined4 *)(puVar23 + 1) = 0;
  if ((iVar17 < 0) && (*(int *)((longlong)puVar23 + 0xc) != 0)) {
    FUN_141772fd4(puVar23,0);
  }
  plVar16 = (longlong *)*param_1;
  uVar30 = *(uint *)(plVar16 + 1);
  iVar17 = uVar30 - (int)plVar16[7];
  if (iVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar17);
  }
  local_38c = iVar27;
  if (*(int *)(param_1[1] + 0xc) < iVar17) {
    FUN_141772fd4();
    plVar16 = (longlong *)*param_1;
    uVar30 = *(uint *)(plVar16 + 1);
  }
  uVar32 = 0;
  uVar15 = 0;
  do {
    uVar33 = uVar15;
    uVar15 = uVar32;
    local_388 = param_1;
    if (uVar30 == uVar33) goto LAB_142e5db16;
    uVar15 = uVar33 + 1;
  } while (SBORROW4(0,*(int *)(plVar16[2] + (longlong)(int)uVar33 * 4)));
  uVar15 = 0;
  if (uVar30 + 1 != uVar33 + 1) {
    do {
      lVar20 = (longlong)(int)uVar33 * 0x60 + *plVar16;
      plVar31 = (longlong *)local_388[1];
      lVar26 = plVar31[1];
      uVar15 = (int)lVar26 + 1;
      *(uint *)(plVar31 + 1) = uVar15;
      if (*(uint *)((longlong)plVar31 + 0xc) < uVar15) {
        FUN_14726bea2(plVar31);
      }
      puVar23 = (undefined8 *)((longlong)(int)lVar26 * 0x28 + *plVar31);
      FUN_144b14de7(puVar23);
      uVar6 = *(undefined8 *)(lVar20 + 0x48);
      lVar26 = *(longlong *)(lVar20 + 0x50);
      if (lVar26 != 0) {
        LOCK();
        *(int *)(lVar26 + 8) = *(int *)(lVar26 + 8) + 1;
        UNLOCK();
      }
      plVar31 = (longlong *)puVar23[1];
      *puVar23 = uVar6;
      puVar23[1] = lVar26;
      if (plVar31 != (longlong *)0x0) {
        LOCK();
        plVar29 = plVar31 + 1;
        *(int *)plVar29 = (int)*plVar29 + -1;
        UNLOCK();
        if ((int)*plVar29 == 0) {
          (**(code **)*plVar31)(plVar31);
          LOCK();
          piVar2 = (int *)((longlong)plVar31 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar31 + 0x10))(plVar31);
          }
        }
      }
      uVar3 = *(ushort *)(lVar20 + 0x5c);
      uVar15 = uVar32;
      if (uVar32 < uVar3) {
        uVar15 = (uint)uVar3;
      }
      *(ushort *)(puVar23 + 4) = uVar3;
      uVar32 = uVar33 + 1;
      if (uVar33 + 1 < *(uint *)(plVar16 + 1)) {
        uVar32 = *(uint *)(plVar16 + 1);
      }
      do {
        uVar14 = uVar32;
        if (uVar32 - 1 == uVar33) break;
        uVar33 = uVar33 + 1;
        uVar14 = uVar33;
      } while (SBORROW4(0,*(int *)(plVar16[2] + (longlong)(int)uVar33 * 4)));
      uVar33 = uVar14;
      uVar32 = uVar15;
    } while (uVar33 != uVar30);
  }
LAB_142e5db16:
  plVar31 = local_388;
  iVar13 = local_38c;
  plVar16 = (longlong *)local_388[2];
  iVar27 = uVar15 + 1;
  iVar17 = (int)plVar16[1];
  if ((int)uVar15 < iVar17) {
    if (iVar27 < iVar17) {
      *(int *)(plVar16 + 1) = iVar27;
      FUN_14479f406(plVar16);
    }
  }
  else {
    *(int *)(plVar16 + 1) = iVar27;
    if ((uint)(*(int *)((longlong)plVar16 + 0xc) - iVar17) < (uint)(iVar27 - iVar17)) {
      FUN_1446f48e2(plVar16);
    }
    memset((void *)((longlong)iVar17 * 4 + *plVar16),0,(longlong)(iVar27 - iVar17) << 2);
    plVar31 = local_388;
  }
  plVar16 = (longlong *)plVar31[1];
  if (DAT_14c760868 != 0) {
    iVar27 = (int)plVar16[1];
    if (1 < (longlong)iVar27) {
      lVar26 = *plVar16;
      memset(local_368,0,0x2f0);
      local_370 = lVar26 + (longlong)iVar27 * 0x28 + -0x28;
      local_378 = lVar26;
      fVar36 = logf((float)iVar27);
      local_368[0] = (int)(longlong)(fVar36 + fVar36);
      plVar16 = &local_378;
      do {
        plVar19 = (longlong *)*plVar16;
        plVar29 = (longlong *)plVar16[1];
        iVar27 = (int)plVar16[2];
        iVar17 = (int)((ulonglong)((longlong)plVar29 - (longlong)plVar19) >> 3) * -0x33333333;
        uVar30 = iVar17 + 1;
        if (iVar27 != 0) {
LAB_142e5dbfb:
          if (8 < (int)uVar30) {
            uVar24 = (ulonglong)(uVar30 >> 1);
            lVar26 = plVar19[uVar24 * 5 + 4];
            lVar20 = plVar19[uVar24 * 5];
            lVar7 = (plVar19 + uVar24 * 5)[1];
            lVar8 = plVar19[uVar24 * 5 + 2];
            lVar9 = (plVar19 + uVar24 * 5 + 2)[1];
            plVar19[uVar24 * 5 + 4] = plVar19[4];
            lVar10 = *plVar19;
            lVar11 = plVar19[1];
            lVar12 = plVar19[3];
            plVar19[uVar24 * 5 + 2] = plVar19[2];
            (plVar19 + uVar24 * 5 + 2)[1] = lVar12;
            plVar19[uVar24 * 5] = lVar10;
            (plVar19 + uVar24 * 5)[1] = lVar11;
            plVar19[4] = lVar26;
            plVar19[2] = lVar8;
            plVar19[3] = lVar9;
            *plVar19 = lVar20;
            plVar19[1] = lVar7;
            plVar22 = plVar29 + 5;
            plVar18 = plVar19;
            do {
              plVar18 = plVar18 + 5;
              if (plVar18 <= plVar29) {
                uVar30 = *(uint *)(*plVar19 + 0x38);
                do {
                  uVar15 = *(uint *)(*plVar18 + 0x38);
                  bVar35 = uVar30 < uVar15;
                  if ((uVar30 == uVar15) &&
                     (uVar24 = *(ulonglong *)(*plVar18 + 0x28),
                     uVar4 = *(ulonglong *)(*plVar19 + 0x28), bVar35 = uVar4 < uVar24,
                     uVar4 == uVar24)) {
                    bVar35 = *(ushort *)(plVar19 + 4) < *(ushort *)(plVar18 + 4);
                  }
                } while ((!bVar35) && (plVar18 = plVar18 + 5, plVar18 <= plVar29));
              }
              plVar34 = plVar22 + -5;
              plVar21 = plVar22;
              if (plVar19 < plVar34) {
                uVar30 = *(uint *)(*plVar19 + 0x38);
                do {
                  uVar15 = *(uint *)(plVar22[-5] + 0x38);
                  bVar35 = uVar15 < uVar30;
                  if (uVar15 == uVar30) {
                    uVar24 = *(ulonglong *)(*plVar19 + 0x28);
                    uVar4 = *(ulonglong *)(plVar22[-5] + 0x28);
                    if (uVar4 == uVar24) {
                      bVar35 = *(ushort *)(plVar34 + 4) < *(ushort *)(plVar19 + 4);
                      goto LAB_142e5dce8;
                    }
                    if (uVar4 < uVar24) {
                      plVar21 = plVar34 + 5;
                      break;
                    }
                  }
                  else {
LAB_142e5dce8:
                    plVar21 = plVar22;
                    if (bVar35) break;
                  }
                  plVar1 = plVar34 + -5;
                  plVar21 = plVar34;
                  plVar22 = plVar34;
                  plVar34 = plVar1;
                } while (plVar19 < plVar1);
              }
              plVar22 = plVar34;
              if (plVar22 < plVar18) goto LAB_142e5dd71;
              lVar26 = plVar18[4];
              lVar20 = *plVar18;
              lVar7 = plVar18[1];
              lVar8 = plVar18[2];
              lVar9 = plVar18[3];
              plVar18[4] = plVar22[4];
              lVar10 = *plVar22;
              lVar11 = plVar22[1];
              lVar12 = plVar22[3];
              plVar18[2] = plVar22[2];
              plVar18[3] = lVar12;
              *plVar18 = lVar10;
              plVar18[1] = lVar11;
              plVar22[4] = lVar26;
              plVar22[2] = lVar8;
              plVar22[3] = lVar9;
              *plVar22 = lVar20;
              plVar22[1] = lVar7;
            } while( true );
          }
          for (; plVar18 = plVar19, plVar22 = plVar19, plVar19 < plVar29; plVar29 = plVar29 + -5) {
            while (plVar34 = plVar18, plVar22 = plVar22 + 5, plVar22 <= plVar29) {
              uVar30 = *(uint *)(*plVar22 + 0x38);
              uVar15 = *(uint *)(*plVar34 + 0x38);
              bVar35 = uVar15 < uVar30;
              if ((uVar15 == uVar30) &&
                 (uVar24 = *(ulonglong *)(*plVar22 + 0x28), uVar4 = *(ulonglong *)(*plVar34 + 0x28),
                 bVar35 = uVar4 < uVar24, uVar4 == uVar24)) {
                bVar35 = *(ushort *)(plVar34 + 4) < *(ushort *)(plVar22 + 4);
              }
              plVar18 = plVar22;
              if (!bVar35) {
                plVar18 = plVar34;
              }
            }
            local_58 = plVar34[4];
            local_78 = *plVar34;
            lStack_70 = plVar34[1];
            local_68 = plVar34[2];
            lStack_60 = plVar34[3];
            plVar34[4] = plVar29[4];
            lVar26 = *plVar29;
            lVar20 = plVar29[1];
            lVar7 = plVar29[3];
            plVar34[2] = plVar29[2];
            plVar34[3] = lVar7;
            *plVar34 = lVar26;
            plVar34[1] = lVar20;
            plVar29[4] = local_58;
            plVar29[2] = local_68;
            plVar29[3] = lStack_60;
            *plVar29 = local_78;
            plVar29[1] = lStack_70;
          }
          goto LAB_142e5e280;
        }
LAB_142e5de59:
        if (uVar30 != 0) {
          iVar27 = (iVar17 - (iVar17 + -1 >> 0x1f)) + -1 >> 1;
          iVar17 = iVar27;
joined_r0x000142e5de7f:
          do {
            iVar25 = iVar27 * 2 + 1;
            if (iVar25 < (int)uVar30) {
              iVar28 = iVar27 * 2 + 2;
              if (iVar28 < (int)uVar30) {
                uVar15 = *(uint *)(plVar19[(longlong)iVar25 * 5] + 0x38);
                uVar32 = *(uint *)(plVar19[(longlong)iVar28 * 5] + 0x38);
                bVar35 = uVar32 < uVar15;
                if ((uVar32 == uVar15) &&
                   (uVar24 = *(ulonglong *)(plVar19[(longlong)iVar25 * 5] + 0x28),
                   uVar4 = *(ulonglong *)(plVar19[(longlong)iVar28 * 5] + 0x28),
                   bVar35 = uVar4 < uVar24, uVar4 == uVar24)) {
                  bVar35 = *(ushort *)(plVar19 + (longlong)iVar28 * 5 + 4) <
                           *(ushort *)(plVar19 + (longlong)iVar25 * 5 + 4);
                }
                if (!bVar35) {
                  iVar25 = iVar28;
                }
              }
              plVar29 = plVar19 + (longlong)iVar27 * 5;
              plVar22 = plVar19 + (longlong)iVar25 * 5;
              uVar15 = *(uint *)(*plVar22 + 0x38);
              uVar32 = *(uint *)(*plVar29 + 0x38);
              bVar35 = uVar32 < uVar15;
              if ((uVar32 == uVar15) &&
                 (uVar24 = *(ulonglong *)(*plVar22 + 0x28), uVar4 = *(ulonglong *)(*plVar29 + 0x28),
                 bVar35 = uVar4 < uVar24, uVar4 == uVar24)) {
                bVar35 = *(ushort *)(plVar29 + 4) < *(ushort *)(plVar22 + 4);
              }
              if (bVar35) {
                local_58 = plVar29[4];
                local_78 = *plVar29;
                lStack_70 = plVar29[1];
                local_68 = plVar29[2];
                lStack_60 = plVar29[3];
                plVar29[4] = plVar22[4];
                lVar26 = *plVar22;
                lVar20 = plVar22[1];
                lVar7 = plVar22[3];
                plVar29[2] = plVar22[2];
                plVar29[3] = lVar7;
                *plVar29 = lVar26;
                plVar29[1] = lVar20;
                plVar22[4] = local_58;
                plVar22[2] = local_68;
                plVar22[3] = lStack_60;
                *plVar22 = local_78;
                plVar22[1] = lStack_70;
                iVar27 = iVar25;
                goto joined_r0x000142e5de7f;
              }
            }
            bVar35 = iVar17 != 0;
            iVar27 = iVar17 + -1;
            iVar17 = iVar27;
          } while (bVar35);
          if (1 < (int)uVar30) {
            uVar24 = (ulonglong)uVar30 - 1;
            local_58 = plVar19[4];
            local_78 = *plVar19;
            lStack_70 = plVar19[1];
            local_68 = plVar19[2];
            lStack_60 = plVar19[3];
            plVar19[4] = plVar19[uVar24 * 5 + 4];
            lVar26 = plVar19[uVar24 * 5];
            lVar20 = (plVar19 + uVar24 * 5)[1];
            lVar7 = (plVar19 + uVar24 * 5 + 2)[1];
            plVar19[2] = plVar19[uVar24 * 5 + 2];
            plVar19[3] = lVar7;
            *plVar19 = lVar26;
            plVar19[1] = lVar20;
            plVar19[uVar24 * 5 + 4] = local_58;
            plVar19[uVar24 * 5 + 2] = local_68;
            (plVar19 + uVar24 * 5 + 2)[1] = lStack_60;
            plVar19[uVar24 * 5] = local_78;
            (plVar19 + uVar24 * 5)[1] = lStack_70;
            if (uVar30 != 2) {
              do {
                iVar17 = 0;
                iVar27 = 1;
                iVar25 = 0;
                do {
                  lVar26 = (longlong)(iVar17 + 2);
                  iVar28 = iVar27;
                  if (lVar26 < (longlong)uVar24) {
                    uVar30 = *(uint *)(plVar19[(longlong)iVar27 * 5] + 0x38);
                    uVar15 = *(uint *)(plVar19[lVar26 * 5] + 0x38);
                    bVar35 = uVar15 < uVar30;
                    if ((uVar15 == uVar30) &&
                       (uVar4 = *(ulonglong *)(plVar19[(longlong)iVar27 * 5] + 0x28),
                       uVar5 = *(ulonglong *)(plVar19[lVar26 * 5] + 0x28), bVar35 = uVar5 < uVar4,
                       uVar5 == uVar4)) {
                      bVar35 = *(ushort *)(plVar19 + lVar26 * 5 + 4) <
                               *(ushort *)(plVar19 + (longlong)iVar27 * 5 + 4);
                    }
                    if (!bVar35) {
                      iVar28 = iVar17 + 2;
                    }
                  }
                  plVar29 = plVar19 + (longlong)iVar25 * 5;
                  plVar22 = plVar19 + (longlong)iVar28 * 5;
                  uVar30 = *(uint *)(*plVar22 + 0x38);
                  uVar15 = *(uint *)(*plVar29 + 0x38);
                  bVar35 = uVar15 < uVar30;
                  if ((uVar15 == uVar30) &&
                     (uVar4 = *(ulonglong *)(*plVar22 + 0x28),
                     uVar5 = *(ulonglong *)(*plVar29 + 0x28), bVar35 = uVar5 < uVar4, uVar5 == uVar4
                     )) {
                    bVar35 = *(ushort *)(plVar29 + 4) < *(ushort *)(plVar22 + 4);
                  }
                  if (!bVar35) break;
                  lVar26 = plVar29[4];
                  lVar20 = *plVar29;
                  lVar7 = plVar29[1];
                  lVar8 = plVar29[2];
                  lVar9 = plVar29[3];
                  plVar29[4] = plVar22[4];
                  lVar10 = *plVar22;
                  lVar11 = plVar22[1];
                  lVar12 = plVar22[3];
                  plVar29[2] = plVar22[2];
                  plVar29[3] = lVar12;
                  *plVar29 = lVar10;
                  plVar29[1] = lVar11;
                  plVar22[4] = lVar26;
                  plVar22[2] = lVar8;
                  plVar22[3] = lVar9;
                  *plVar22 = lVar20;
                  plVar22[1] = lVar7;
                  iVar17 = iVar28 * 2;
                  iVar27 = iVar28 * 2 + 1;
                  iVar25 = iVar28;
                } while ((longlong)iVar27 < (longlong)uVar24);
                uVar4 = uVar24 - 1;
                local_58 = plVar19[4];
                local_78 = *plVar19;
                lStack_70 = plVar19[1];
                local_68 = plVar19[2];
                lStack_60 = plVar19[3];
                plVar19[4] = plVar19[uVar4 * 5 + 4];
                lVar26 = plVar19[uVar4 * 5];
                lVar20 = (plVar19 + uVar4 * 5)[1];
                lVar7 = (plVar19 + uVar4 * 5 + 2)[1];
                plVar19[2] = plVar19[uVar4 * 5 + 2];
                plVar19[3] = lVar7;
                *plVar19 = lVar26;
                plVar19[1] = lVar20;
                plVar19[uVar4 * 5 + 4] = local_58;
                plVar19[uVar4 * 5 + 2] = local_68;
                (plVar19 + uVar4 * 5 + 2)[1] = lStack_60;
                plVar19[uVar4 * 5] = local_78;
                (plVar19 + uVar4 * 5)[1] = lStack_70;
                bVar35 = 2 < uVar24;
                uVar24 = uVar4;
              } while (bVar35);
            }
          }
        }
LAB_142e5e280:
        plVar16 = plVar16 + -3;
      } while (&local_378 <= plVar16);
      plVar16 = (longlong *)plVar31[1];
    }
  }
  if (0 < (int)plVar16[1]) {
    lVar26 = 0x20;
    lVar20 = 0;
    do {
      *(int *)(*(longlong *)plVar31[2] + (ulonglong)*(ushort *)(*plVar16 + lVar26) * 4) =
           (int)lVar20;
      lVar20 = lVar20 + 1;
      plVar16 = (longlong *)plVar31[1];
      lVar26 = lVar26 + 0x28;
    } while (lVar20 < (int)plVar16[1]);
  }
  if ((iVar13 == 0x60000000) || (iVar13 == 0)) {
    *local_380 = iVar13;
  }
  if ((local_48 ^ (ulonglong)auStack_3b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_142e5dd71:
  local_58 = plVar19[4];
  local_78 = *plVar19;
  lStack_70 = plVar19[1];
  local_68 = plVar19[2];
  lStack_60 = plVar19[3];
  plVar19[4] = plVar22[4];
  lVar26 = *plVar22;
  lVar20 = plVar22[1];
  lVar7 = plVar22[3];
  plVar19[2] = plVar22[2];
  plVar19[3] = lVar7;
  *plVar19 = lVar26;
  plVar19[1] = lVar20;
  plVar22[4] = local_58;
  plVar22[2] = local_68;
  plVar22[3] = lStack_60;
  *plVar22 = local_78;
  plVar22[1] = lStack_70;
  iVar27 = iVar27 + -1;
  plVar21 = plVar21 + -10;
  if ((longlong)plVar21 - (longlong)plVar19 < (longlong)plVar29 - (longlong)plVar18) {
    if (plVar18 < plVar29) {
      *plVar16 = (longlong)plVar18;
      plVar16[1] = (longlong)plVar29;
      *(int *)(plVar16 + 2) = iVar27;
      plVar16 = plVar16 + 3;
    }
    if (plVar22 <= plVar19 + 5) goto LAB_142e5e280;
  }
  else {
    if (plVar19 + 5 < plVar22) {
      *plVar16 = (longlong)plVar19;
      plVar16[1] = (longlong)plVar21;
      *(int *)(plVar16 + 2) = iVar27;
      plVar16 = plVar16 + 3;
    }
    plVar21 = plVar29;
    plVar19 = plVar18;
    if (plVar29 <= plVar18) goto LAB_142e5e280;
  }
  iVar17 = (int)((ulonglong)((longlong)plVar21 - (longlong)plVar19) >> 3) * -0x33333333;
  uVar30 = iVar17 + 1;
  plVar29 = plVar21;
  if (iVar27 == 0) goto LAB_142e5de59;
  goto LAB_142e5dbfb;
}



// FUNCTION 142e5e44e FUN_142e5e44e body=547 status=ok
// SIG undefined FUN_142e5e44e(void)

longlong * FUN_142e5e44e(longlong *param_1,int param_2)

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



// FUNCTION 142e5e67e FUN_142e5e67e body=110 status=ok
// SIG undefined FUN_142e5e67e(void)

undefined8 * FUN_142e5e67e(undefined8 *param_1,int param_2)

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



// FUNCTION 142e5e6ec FUN_142e5e6ec body=61 status=ok
// SIG undefined FUN_142e5e6ec(void)

undefined8 * FUN_142e5e6ec(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *puVar2 = &LAB_144908c4e;
  puVar2[1] = FUN_142e5e6ec;
  uVar1 = param_1[1];
  puVar2[2] = *param_1;
  puVar2[3] = uVar1;
  return puVar2 + 2;
}



// FUNCTION 142e5e729 FUN_142e5e729 body=297 status=ok
// SIG undefined FUN_142e5e729(void)

undefined8 * FUN_142e5e729(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  void *_Dst;
  undefined8 *_Dst_00;
  longlong lVar4;
  undefined8 *puVar5;
  ulonglong _Size;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x90,0x10);
  *puVar3 = FUN_144908c53;
  puVar3[1] = FUN_142e5e729;
  puVar3[4] = 0;
  puVar3[5] = 0x200000000;
  puVar1 = puVar3 + 2;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0;
  puVar3[0xd] = 0;
  puVar3[0xe] = 0;
  puVar3[0xf] = 0;
  *(undefined4 *)(puVar3 + 0x10) = 0;
  if (puVar1 != param_1) {
    iVar2 = *(int *)(param_1 + 3);
    puVar5 = (undefined8 *)param_1[2];
    *(int *)(puVar3 + 5) = iVar2;
    FUN_14470ca02(puVar1,iVar2,2);
    if ((longlong)iVar2 != 0) {
      if (puVar5 == (undefined8 *)0x0) {
        puVar5 = param_1;
      }
      _Dst_00 = (undefined8 *)puVar3[4];
      if ((undefined8 *)puVar3[4] == (undefined8 *)0x0) {
        _Dst_00 = puVar1;
      }
      memcpy(_Dst_00,puVar5,(longlong)iVar2 << 3);
    }
  }
  *(undefined2 *)(puVar3 + 0x10) = *(undefined2 *)(param_1 + 0xe);
  _Size = (ulonglong)*(ushort *)((longlong)param_1 + 0x72);
  *(ushort *)((longlong)puVar3 + 0x82) = *(ushort *)((longlong)param_1 + 0x72);
  if (0x50 < _Size) {
    _Dst = (void *)FUN_14001cc68(_Size,0x10);
    puVar3[6] = _Dst;
    if (0x50 < *(ushort *)((longlong)param_1 + 0x72)) {
      memcpy(_Dst,(void *)param_1[4],_Size);
      return puVar1;
    }
  }
  puVar5 = param_1 + 4;
  puVar3 = puVar3 + 6;
  for (lVar4 = 10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar3 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar3 = puVar3 + 1;
  }
  return puVar1;
}



// FUNCTION 142e5e852 FUN_142e5e852 body=31 status=ok
// SIG undefined FUN_142e5e852(void)

undefined8 FUN_142e5e852(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142e5e872 FUN_142e5e872 body=31 status=ok
// SIG undefined FUN_142e5e872(void)

undefined8 FUN_142e5e872(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142e5e89e FUN_142e5e89e body=212 status=ok
// SIG undefined FUN_142e5e89e(void)

undefined8 * FUN_142e5e89e(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  byte bVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  
  *param_1 = &PTR_FUN_14a2a0960;
  lVar5 = param_1[0x3d];
  if (lVar5 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar5 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar5 + 8);
      LOCK();
      uVar3 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar3 >> 0x1e & 1) == 0) {
        bVar4 = *(byte *)(lVar5 + 0xd);
        plVar7 = (longlong *)FUN_14001cc68(0x10,8);
        plVar7[1] = lVar5;
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
  *param_1 = &PTR_FUN_14a1fab60;
  puVar6 = (undefined8 *)param_1[0x39];
  if (puVar6 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar6 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar6)(puVar6,1);
    }
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142e5e972 FUN_142e5e972 body=2633 status=ok
// SIG undefined FUN_142e5e972(void)

void FUN_142e5e972(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  longlong *plVar21;
  int iVar22;
  longlong *plVar23;
  int iVar24;
  int iVar25;
  bool bVar26;
  undefined1 auStack_118 [40];
  ulonglong local_f0;
  longlong *local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  int local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  longlong *local_b8;
  longlong local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  longlong local_88;
  longlong *plStack_80;
  ulonglong local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_98 = *(undefined8 *)(param_1 + 0x208);
  local_90 = *(undefined8 *)(param_1 + 0x210);
  FUN_142e5f3bc(&local_88,*(undefined8 *)(param_1 + 0x1d0),*(undefined8 *)(param_1 + 0x1f8));
  lVar12 = local_88;
  if ((DAT_14ca19690 == '\x01') && (*(longlong *)(param_1 + 0x218) + 0x30d8 != local_88 + 8)) {
    FUN_14725cb18();
  }
  if ((*(byte *)(param_1 + 0x1e0) & 1) == 0) {
    uVar20 = *(uint *)(*(longlong *)(param_1 + 0x1d8) + 0x20);
    uVar2 = *(uint *)(DAT_14ca84d28 + 4);
    uVar9 = (**(code **)(*DAT_14c82b500 + 0x20))();
    if ((int)uVar9 < (int)uVar2) {
      uVar2 = uVar9;
    }
    uVar8 = (longlong)(int)(*(int *)(DAT_14ca47528 + 4) + uVar20 + -1) /
            (longlong)*(int *)(DAT_14ca47528 + 4);
    local_a8 = (ulonglong)uVar2;
    if ((int)uVar8 <= (int)uVar2) {
      local_a8 = uVar8 & 0xffffffff;
    }
    iVar22 = (int)local_a8;
    local_c8 = (int)(iVar22 + uVar20 + -1) / iVar22;
    local_a0 = (ulonglong)uVar20;
    if (0 < iVar22) {
      local_b0 = -0x37ffffad757d8500;
      local_b8 = (longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
      iVar22 = 0;
      local_c0 = param_2;
      do {
        iVar24 = iVar22 * local_c8;
        iVar25 = (int)local_a0 - iVar24;
        if (local_c8 < iVar25) {
          iVar25 = local_c8;
        }
        local_d0 = FUN_1447a7304(param_2);
        plVar21 = plStack_80;
        local_d8 = *(longlong *)(param_1 + 0x1d8);
        local_e0 = local_88;
        if (plStack_80 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
          UNLOCK();
        }
        local_c4 = *(undefined4 *)(param_1 + 500);
        local_e8 = (longlong *)CONCAT71(local_e8._1_7_,*(undefined1 *)(param_1 + 0x1e0));
        plVar10 = TlsGetValue(DAT_14c896140);
        if (plVar10 == (longlong *)0x0) {
          plVar10 = (longlong *)FUN_14001cc68(0x18,0x10);
          *plVar10 = 0;
          plVar10[1] = 0;
          *(undefined4 *)(plVar10 + 2) = 0;
          TlsSetValue(DAT_14c896140,plVar10);
        }
        plVar23 = (longlong *)plVar10[1];
        if (plVar23 == (longlong *)0x0) {
          plVar23 = (longlong *)*plVar10;
          if (plVar23 == (longlong *)0x0) {
            do {
              local_78 = DAT_14c896180;
              uVar20 = (uint)DAT_14c896180;
              if ((DAT_14c896180 & 0x3ffffff) == 0) {
                plVar10[1] = 0;
                goto LAB_142e5ecd1;
              }
              local_f0 = (DAT_14c896180 & 0xfffffffffc000000) + 0x4000000;
              if (local_f0 >> 0x1a < DAT_14c896180 >> 0x1a) {
                FUN_14000f986(0x3a83126f);
              }
              uVar18 = (ulonglong)((uVar20 & 0x3ffffff) >> 0xe);
              local_f0 = local_f0 & 0xfffffffffc000000 |
                         (ulonglong)
                         *(uint *)(*(longlong *)(&DAT_14c833b00 + uVar18 * 8) + 0x10 +
                                  (ulonglong)(uVar20 & 0x3fff) * 0x18);
              LOCK();
              bVar26 = local_78 != DAT_14c896180;
              uVar8 = local_f0;
              if (bVar26) {
                uVar8 = DAT_14c896180;
              }
              DAT_14c896180 = uVar8;
              UNLOCK();
            } while (bVar26);
            *(undefined4 *)
             (*(longlong *)(&DAT_14c833b00 + uVar18 * 8) + (ulonglong)(uVar20 & 0x3fff) * 0x18 +
             0x10) = 0;
            plVar23 = *(longlong **)
                       (*(longlong *)(&DAT_14c833b00 + uVar18 * 8) + 8 +
                       (ulonglong)(uVar20 & 0x3fff) * 0x18);
            FUN_1447d080c(uVar20 & 0x3ffffff);
            plVar10[1] = (longlong)plVar23;
            param_2 = local_c0;
            if (plVar23 == (longlong *)0x0) {
LAB_142e5ecd1:
              param_2 = local_c0;
              puVar11 = (undefined8 *)FUN_14001cc68(0x10000,0);
              plVar10[1] = (longlong)puVar11;
              iVar17 = 0xff;
              do {
                puVar15 = puVar11 + 0x20;
                *puVar11 = puVar15;
                iVar17 = iVar17 + -1;
                puVar11 = puVar15;
              } while (iVar17 != 0);
              *puVar15 = 0;
              plVar23 = (longlong *)plVar10[1];
            }
          }
          else {
            plVar10[1] = (longlong)plVar23;
            *plVar10 = 0;
          }
          *(undefined4 *)(plVar10 + 2) = 0x100;
          iVar17 = 0x100;
        }
        else {
          iVar17 = (int)plVar10[2];
        }
        plVar10[1] = *plVar23;
        *(int *)(plVar10 + 2) = iVar17 + -1;
        *plVar23 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
        plVar23[1] = (longlong)&DAT_100000002;
        plVar23[2] = 0;
        *(undefined4 *)(plVar23 + 3) = 0;
        *(undefined4 *)(plVar23 + 4) = 0xffffffff;
        plVar23[6] = 0;
        plVar23[7] = 0x100000000;
        *(undefined1 *)(plVar23 + 8) = 1;
        plVar23[0xe] = (longlong)
                       LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateDummy::vftable;
        plVar23[0xf] = 0;
        plVar23[0x10] = -0x17ffffffffffffe0;
        plVar23[0x12] = 0;
        plVar23[0x13] = 0x100000000;
        *(undefined2 *)(plVar23 + 0x14) = 0;
        LOCK();
        bVar26 = (char)plVar23[8] == '\x01';
        if (bVar26) {
          *(char *)(plVar23 + 8) = '\0';
        }
        UNLOCK();
        if (!bVar26) {
          FUN_14008cdb0(plVar23 + 8);
        }
        *plVar23 = (longlong)&PTR_FUN_14a2a0b88;
        if (*(code **)(plVar23[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(plVar23[0xe] + 0x18))(plVar23 + 0xe,plVar23 + 9);
        }
        plVar23[0xe] = (longlong)
                       LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        plVar23[9] = (longlong)plVar23;
        plVar23[10] = (longlong)plVar23;
        if (*local_b8 == 0) {
          lVar12 = 0;
        }
        else {
          lVar12 = *(longlong *)(*local_b8 + 0x30);
        }
        plVar23[0xf] = lVar12;
        plVar23[0x10] = local_b0;
        *(undefined4 *)((longlong)plVar23 + 0x1c) = 0;
        plVar23[0x15] = local_d0;
        plVar23[0x16] = local_d8;
        plVar23[0x17] = local_e0;
        plVar23[0x18] = (longlong)plVar21;
        *(undefined4 *)(plVar23 + 0x19) = 0x10;
        *(undefined4 *)((longlong)plVar23 + 0xcc) = local_c4;
        *(int *)(plVar23 + 0x1a) = iVar24;
        *(int *)((longlong)plVar23 + 0xd4) = iVar25;
        *(undefined1 *)(plVar23 + 0x1b) = local_e8._0_1_;
        *plVar23 = (longlong)&PTR_FUN_14a2a0b78;
        local_78 = CONCAT71(local_78._1_7_,1);
        FUN_1447439e4(plVar23);
        if (plVar23 != (longlong *)0x0) {
          LOCK();
          plVar21 = plVar23 + 1;
          *(int *)plVar21 = (int)*plVar21 + -1;
          UNLOCK();
          if ((int)*plVar21 == 0) {
            (**(code **)*plVar23)(plVar23);
          }
        }
        iVar22 = iVar22 + 1;
      } while (iVar22 != (int)local_a8);
    }
  }
  else {
    local_d0 = FUN_1447a7304(param_2);
    plVar21 = plStack_80;
    local_88 = 0;
    plStack_80 = (longlong *)0x0;
    local_d8 = *(longlong *)(param_1 + 0x1d8);
    lVar4 = *(longlong *)(param_1 + 0x1e8);
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    uVar5 = *(undefined8 *)(param_1 + 0x208);
    uVar6 = *(undefined8 *)(param_1 + 0x210);
    uVar3 = *(undefined4 *)(param_1 + 500);
    local_e0 = CONCAT71(local_e0._1_7_,*(undefined1 *)(param_1 + 0x1e0));
    puVar11 = TlsGetValue(DAT_14c896140);
    if (puVar11 == (undefined8 *)0x0) {
      puVar11 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      *puVar11 = 0;
      puVar11[1] = 0;
      *(undefined4 *)(puVar11 + 2) = 0;
      TlsSetValue(DAT_14c896140,puVar11);
    }
    puVar15 = (undefined8 *)puVar11[1];
    if (puVar15 == (undefined8 *)0x0) {
      puVar15 = (undefined8 *)*puVar11;
      if (puVar15 == (undefined8 *)0x0) {
        uVar20 = (uint)DAT_14c896180;
        local_e8 = plVar21;
        uVar8 = DAT_14c896180;
        while (DAT_14c896180 = uVar8, local_78 = uVar8, (uVar8 & 0x3ffffff) != 0) {
          local_f0 = (uVar8 & 0xfffffffffc000000) + 0x4000000;
          if (local_f0 >> 0x1a < uVar8 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          uVar18 = (ulonglong)((uVar20 & 0x3ffffff) >> 0xe);
          uVar19 = (ulonglong)((uint)uVar8 & 0x3fff);
          local_f0 = local_f0 & 0xfffffffffc000000 |
                     (ulonglong)
                     *(uint *)(*(longlong *)(&DAT_14c833b00 + uVar18 * 8) + 0x10 + uVar19 * 0x18);
          LOCK();
          bVar26 = local_78 == DAT_14c896180;
          uVar8 = local_f0;
          if (!bVar26) {
            uVar8 = DAT_14c896180;
          }
          DAT_14c896180 = uVar8;
          UNLOCK();
          if (bVar26) {
            *(undefined4 *)(*(longlong *)(&DAT_14c833b00 + uVar18 * 8) + uVar19 * 0x18 + 0x10) = 0;
            puVar15 = *(undefined8 **)
                       (*(longlong *)(&DAT_14c833b00 + uVar18 * 8) + 8 +
                       (ulonglong)(uVar20 & 0x3fff) * 0x18);
            FUN_1447d080c(uVar20 & 0x3ffffff);
            puVar11[1] = puVar15;
            plVar21 = local_e8;
            if (puVar15 != (undefined8 *)0x0) goto LAB_142e5f103;
            goto LAB_142e5f372;
          }
          uVar20 = (uint)DAT_14c896180;
          uVar8 = DAT_14c896180;
        }
        puVar11[1] = 0;
LAB_142e5f372:
        plVar21 = local_e8;
        puVar15 = (undefined8 *)FUN_14001cc68(0x10000,0);
        puVar11[1] = puVar15;
        iVar22 = 0xff;
        puVar16 = puVar15;
        do {
          puVar13 = puVar16 + 0x20;
          *puVar16 = puVar13;
          iVar22 = iVar22 + -1;
          puVar16 = puVar13;
        } while (iVar22 != 0);
      }
      else {
        puVar11[1] = puVar15;
        puVar13 = puVar11;
      }
      *puVar13 = 0;
LAB_142e5f103:
      *(undefined4 *)(puVar11 + 2) = 0x100;
      iVar22 = 0xff;
    }
    else {
      iVar22 = *(int *)(puVar11 + 2) + -1;
    }
    puVar11[1] = *puVar15;
    *(int *)(puVar11 + 2) = iVar22;
    *puVar15 = UE::Tasks::Private::FTaskBase::vftable;
    puVar15[1] = &DAT_100000002;
    puVar15[2] = 0;
    *(undefined4 *)(puVar15 + 3) = 0;
    *(undefined4 *)(puVar15 + 4) = 0xffffffff;
    puVar15[6] = 0;
    puVar15[7] = 0x100000000;
    *(undefined1 *)(puVar15 + 8) = 1;
    puVar15[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateDummy::vftable;
    puVar15[0xf] = 0;
    puVar15[0x10] = 0xe800000000000020;
    puVar15[0x12] = 0;
    puVar15[0x13] = 0x100000000;
    *(undefined2 *)(puVar15 + 0x14) = 0;
    LOCK();
    bVar26 = *(char *)(puVar15 + 8) == '\x01';
    if (bVar26) {
      *(char *)(puVar15 + 8) = '\0';
    }
    UNLOCK();
    if (!bVar26) {
      FUN_14008cdb0(puVar15 + 8);
    }
    *puVar15 = &PTR_FUN_14a2a0a88;
    if (*(code **)(puVar15[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar15[0xe] + 0x18))(puVar15 + 0xe,puVar15 + 9);
    }
    puVar15[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar15[9] = puVar15;
    puVar15[10] = puVar15;
    lVar7 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar7 == 0) {
      uVar14 = 0;
    }
    else {
      uVar14 = *(undefined8 *)(lVar7 + 0x30);
    }
    puVar15[0xf] = uVar14;
    puVar15[0x10] = 0xc80000528a825e00;
    *(undefined4 *)((longlong)puVar15 + 0x1c) = 0;
    puVar15[0x15] = local_d0;
    puVar15[0x16] = lVar12;
    puVar15[0x17] = plVar21;
    puVar15[0x18] = local_d8;
    puVar15[0x19] = lVar4;
    puVar15[0x1a] = uVar5;
    puVar15[0x1b] = uVar6;
    *(undefined4 *)(puVar15 + 0x1c) = uVar3;
    *(undefined1 *)((longlong)puVar15 + 0xe4) = (undefined1)local_e0;
    *puVar15 = &PTR_FUN_14a2a0a78;
    local_78 = CONCAT71(local_78._1_7_,1);
    FUN_1447439e4(puVar15);
    if (puVar15 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar15 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar15)(puVar15,1);
      }
    }
  }
  plVar21 = plStack_80;
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    plVar10 = plStack_80 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*plStack_80)(plStack_80);
      LOCK();
      piVar1 = (int *)((longlong)plVar21 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar21 + 0x10))(plVar21);
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e5f3bc FUN_142e5f3bc body=636 status=ok
// SIG undefined FUN_142e5f3bc(void)

longlong * FUN_142e5f3bc(longlong *param_1,longlong *param_2,longlong *param_3,undefined4 *param_4)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  byte bVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  bool bVar14;
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
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar11 = (longlong *)FUN_14001cc68(0x50,0x10);
  plVar11[1] = (longlong)&DAT_100000001;
  *plVar11 = (longlong)&PTR_FUN_14a2a0a60;
  plVar11[6] = 0;
  plVar11[7] = 0;
  plVar11[2] = 0;
  plVar11[3] = 0;
  plVar11[4] = 0;
  plVar11[5] = 0;
  plVar11[8] = 0;
  plVar11[9] = 0;
  *(undefined4 *)((longlong)plVar11 + 0x34) = 0x80;
  *param_1 = (longlong)(plVar11 + 2);
  param_1[1] = (longlong)plVar11;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    LOCK();
    plVar13 = plVar11 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  plVar11 = (longlong *)*param_1;
  plVar11[5] = *(longlong *)(*param_2 + 0x10);
  if (param_3 == (longlong *)0x0) goto LAB_142e5f4ca;
  lVar5 = *param_3;
  if (lVar5 != 0) {
    if (DAT_14c87e718 == '\0') {
      iVar4 = *(int *)(lVar5 + 0x1c);
      if ((2 < iVar4) &&
         (bVar10 = (**(code **)(*DAT_14c82b500 + 0x10))(DAT_14c82b500,0), bVar10 < 3)) {
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
        if (*(byte *)((longlong)&local_78 + (ulonglong)(iVar4 - 3) * 4) == bVar10)
        goto LAB_142e5f612;
      }
      QueryPerformanceCounter(&local_78);
      uStack_70 = 0xffffffffffffffff;
      FUN_140056092(lVar5,&local_78);
    }
    else {
LAB_142e5f612:
      FUN_140082318(lVar5);
    }
  }
  if (*(char *)((longlong)param_3 + 0x14d) == '\x01') {
    FUN_14726c02e(plVar11 + 1,param_3 + 0x17);
  }
LAB_142e5f4ca:
  lVar5 = *(longlong *)(param_2[0x10] + 0x10);
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
    plVar11 = (longlong *)*param_1;
  }
  lVar6 = *plVar11;
  *plVar11 = lVar5;
  if (lVar6 != 0) {
    LOCK();
    puVar2 = (uint *)(lVar6 + 8);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      puVar2 = (uint *)(lVar6 + 8);
      LOCK();
      uVar3 = *puVar2;
      *puVar2 = *puVar2 | 0x40000000;
      UNLOCK();
      if ((uVar3 >> 0x1e & 1) == 0) {
        bVar10 = *(byte *)(lVar6 + 0xd);
        plVar12 = (longlong *)FUN_14001cc68(0x10,8);
        plVar12[1] = lVar6;
        plVar11 = DAT_14ca843c0;
        plVar13 = DAT_14ca843c8;
        if ((bVar10 & 2) == 0) {
          do {
            *plVar12 = (longlong)plVar11;
            LOCK();
            bVar14 = plVar11 != DAT_14ca843c0;
            plVar13 = plVar12;
            if (bVar14) {
              plVar11 = DAT_14ca843c0;
              plVar13 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar13;
            UNLOCK();
          } while (bVar14);
        }
        else {
          do {
            *plVar12 = (longlong)plVar13;
            LOCK();
            bVar14 = plVar13 != DAT_14ca843c8;
            plVar11 = plVar12;
            if (bVar14) {
              plVar13 = DAT_14ca843c8;
              plVar11 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar11;
            UNLOCK();
          } while (bVar14);
        }
      }
    }
  }
  uVar7 = param_4[1];
  uVar8 = param_4[2];
  uVar9 = param_4[3];
  lVar5 = *param_1;
  *(undefined4 *)(lVar5 + 0x30) = *param_4;
  *(undefined4 *)(lVar5 + 0x34) = uVar7;
  *(undefined4 *)(lVar5 + 0x38) = uVar8;
  *(undefined4 *)(lVar5 + 0x3c) = uVar9;
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 142e5f63a FUN_142e5f63a body=547 status=ok
// SIG undefined FUN_142e5f63a(void)

longlong * FUN_142e5f63a(longlong *param_1,int param_2)

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



// FUNCTION 142e5f85e FUN_142e5f85e body=367 status=ok
// SIG undefined FUN_142e5f85e(void)

void FUN_142e5f85e(longlong param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  byte bVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  bool bVar10;
  
  piVar2 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  iVar9 = *piVar2;
  if (iVar9 == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    iVar9 = *piVar2;
  }
  if ((iVar9 == 0x60000000) || (iVar9 == 0)) {
    *piVar2 = 0x40000010;
  }
  FUN_142e5fa3c(*(undefined8 *)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0xc0),param_1 + 0xe4,
                (longlong *)(param_1 + 200),*(undefined8 *)(param_1 + 0xb0),
                *(undefined4 *)(param_1 + 0xe0));
  FUN_1447850c6(*(undefined8 *)(param_1 + 0xa8));
  if ((iVar9 == 0x60000000) || (iVar9 == 0)) {
    *piVar2 = iVar9;
  }
  lVar5 = *(longlong *)(param_1 + 200);
  if (lVar5 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar5 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar5 + 8);
      LOCK();
      uVar3 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar3 >> 0x1e & 1) == 0) {
        bVar4 = *(byte *)(lVar5 + 0xd);
        plVar6 = (longlong *)FUN_14001cc68(0x10,8);
        plVar6[1] = lVar5;
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
  plVar8 = *(longlong **)(param_1 + 0xb8);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar8 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142e5f97c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar8 + 0x10))(plVar8);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142e5f9ce FUN_142e5f9ce body=110 status=ok
// SIG undefined FUN_142e5f9ce(void)

undefined8 * FUN_142e5f9ce(undefined8 *param_1,int param_2)

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



// FUNCTION 142e5fa3c FUN_142e5fa3c body=352 status=ok
// SIG undefined FUN_142e5fa3c(void)

void FUN_142e5fa3c(ulonglong *param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined1 auStack_98 [32];
  code *local_78;
  longlong *local_68;
  longlong local_58 [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = (code *)0x0;
  plVar1 = (longlong *)FUN_14001cc68(0x38,8);
  *plVar1 = (longlong)&PTR_FUN_14a2a0aa0;
  plVar1[1] = param_4;
  plVar1[2] = param_3;
  plVar1[3] = param_5;
  plVar1[4] = param_2;
  plVar1[5] = (longlong)param_1;
  plVar1[6] = (longlong)&stack0x00000030;
  if (plVar1 + 1 == (longlong *)0x0) {
    pcVar5 = (code *)0x0;
  }
  else {
    pcVar5 = FUN_142e5fb9e;
    local_78 = FUN_142e5fb9e;
  }
  *(undefined1 *)((longlong)param_1 + 0x67) = 1;
  puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar2 = puVar4 + 9;
  local_68 = plVar1;
  if ((undefined8 *)param_1[1] < puVar2) {
    FUN_140023dd8(param_1,0x50);
    puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar4 + 9;
  }
  *param_1 = (ulonglong)puVar2;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar4;
  param_1[6] = (ulonglong)(puVar4 + 1);
  puVar4[1] = 0;
  *puVar4 = &PTR_FUN_14a29acf0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  *(undefined8 *)((longlong)puVar4 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar4 + 0x24) = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  *(undefined1 *)(puVar4 + 8) = 1;
  if (plVar1 == (longlong *)0x0) {
    plVar1 = local_58;
  }
  uVar3 = (**(code **)(*plVar1 + 8))(plVar1);
  (*pcVar5)(uVar3,puVar4);
  if (local_78 != (code *)0x0) {
    plVar1 = local_58;
    if (local_68 != (longlong *)0x0) {
      plVar1 = local_68;
    }
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e5fb9e FUN_142e5fb9e body=2377 status=ok
// SIG undefined FUN_142e5fb9e(void)

void FUN_142e5fb9e(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  ulonglong *puVar8;
  undefined4 *puVar9;
  uint *puVar10;
  longlong lVar11;
  int iVar12;
  undefined4 uVar13;
  uint uVar14;
  uint *puVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  int *piVar19;
  int iVar20;
  int iVar21;
  ulonglong uVar22;
  uint uVar23;
  ulonglong *puVar24;
  int iVar25;
  longlong lVar26;
  ulonglong uVar27;
  undefined8 *puVar28;
  bool bVar29;
  undefined1 auStack_1d8 [32];
  uint *local_1b8;
  uint *local_1b0;
  undefined4 local_19c;
  undefined8 local_198;
  ulonglong local_190;
  int *local_188;
  undefined8 *local_180;
  undefined8 local_178;
  undefined8 local_170;
  ulonglong local_168;
  undefined8 uStack_160;
  int local_154;
  ulonglong local_150;
  undefined8 local_148;
  longlong local_140;
  undefined8 local_138;
  undefined8 local_130;
  int *local_128;
  ulonglong local_120;
  uint local_118;
  undefined8 *local_110;
  uint local_108;
  undefined4 uStack_104;
  undefined1 local_f9;
  uint local_f8;
  undefined1 local_f4 [7];
  undefined1 local_ed;
  uint local_ec;
  undefined8 *local_e8;
  int local_e0;
  undefined1 local_dc;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)*param_1;
  *(byte *)(param_2 + 0x40) = *(byte *)param_1[1] >> 1 & 1;
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1[2] + 0x28);
  lVar11 = param_2 + 0x30;
  FUN_14725fd3e(lVar11,*(undefined4 *)(*(longlong *)*param_1 + 0x10),1);
  local_154 = 0;
  local_168 = 0;
  uStack_160 = 0;
  uVar27 = param_1[3];
  uVar14 = *(uint *)(uVar27 + 0x20);
  if ((int)uVar14 < 1) goto LAB_142e5fc2d;
  local_198 = param_1[1];
  local_178 = param_1[2];
  local_170 = param_1[5];
  puVar2 = (ulonglong *)param_1[4];
  uVar7 = FUN_1447e0190();
  if ((char)uVar7 == '\0') {
    local_19c = (undefined4)CONCAT71((int7)((ulonglong)uVar7 >> 8),uVar14 != 1);
LAB_142e5fd79:
    uVar23 = 0;
  }
  else {
    if (uVar14 == 1) {
      local_19c = 0;
      goto LAB_142e5fd79;
    }
    uVar23 = DAT_14c8335d8;
    if ((int)uVar14 <= (int)DAT_14c8335d8) {
      uVar23 = uVar14;
    }
    local_19c = (undefined4)CONCAT71((int7)((ulonglong)lVar11 >> 8),1);
  }
  lVar11 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  uVar23 = (*(undefined **)(lVar11 + 0x2c0) != &DAT_14c82ba00 || *(int *)(lVar11 + 0x2c8) == 0) +
           uVar23;
  local_190 = (ulonglong)uVar14;
  if ((int)DAT_14c8c27ac < 1) {
    memset(&local_e8,0,0x82);
    local_150 = local_150 & 0xffffffff00000000;
    local_120 = local_120 & 0xffffffff00000000;
    local_108 = 0;
    FUN_140e55932(&local_e8,&local_150,&local_120,&local_108);
    uVar14 = local_108;
    local_1b0 = &local_f8;
    local_1b8 = &local_ec;
    FUN_1457b80ec(local_120 & 0xffffffff,local_108,local_f4,&local_110);
    DAT_14c8c27ac = uVar14;
    if ((0 < (int)local_ec) && (DAT_14c8c27ac = uVar14, (int)local_ec <= (int)uVar14)) {
      DAT_14c8c27ac = local_ec;
    }
  }
  local_188 = (int *)(lVar11 + 0x2c8);
  local_180 = (undefined8 *)(lVar11 + 0x2c0);
  uVar14 = DAT_14c8c27ac;
  if ((int)uVar23 < (int)DAT_14c8c27ac) {
    uVar14 = uVar23;
  }
  uVar22 = 1;
  if (1 < (int)uVar14) {
    uVar22 = (ulonglong)uVar14;
  }
  uStack_160 = CONCAT44(uStack_160._4_4_,(int)uVar22);
  FUN_14726c0bc(&local_168);
  uVar3 = local_168;
  uVar18 = 0;
  do {
    puVar24 = (ulonglong *)(*puVar2 + 0xf & 0xfffffffffffffff0);
    puVar8 = puVar24 + 0x16;
    if ((ulonglong *)puVar2[1] < puVar8) {
      FUN_140023dd8(puVar2,0xc0);
      puVar24 = (ulonglong *)(*puVar2 + 0xf & 0xfffffffffffffff0);
      puVar8 = puVar24 + 0x16;
    }
    *puVar2 = (ulonglong)puVar8;
    *puVar24 = puVar2[0x11];
    puVar24[1] = (ulonglong)puVar2;
    puVar24[2] = 0;
    puVar24[3] = 0;
    puVar24[4] = 0;
    puVar24[5] = 0;
    *(undefined4 *)(puVar24 + 6) = 0;
    *(undefined2 *)((longlong)puVar24 + 0x34) = 1;
    if (DAT_14c872d30 == 0) {
      FUN_145bdc178();
      bVar29 = DAT_14c872d30 != 0;
      puVar24[7] = 0;
      puVar24[8] = 0;
      puVar24[9] = 0;
      puVar24[10] = 0;
      *(undefined4 *)(puVar24 + 0xb) = 0;
      *(undefined2 *)((longlong)puVar24 + 0x5c) = 1;
      if (bVar29) goto LAB_142e5fe78;
      FUN_145bdc178();
      bVar29 = DAT_14c872d30 != 0;
      puVar24[0xc] = 0;
      puVar24[0xd] = 0;
      puVar24[0xe] = 0;
      puVar24[0xf] = 0;
      *(undefined4 *)(puVar24 + 0x10) = 0;
      *(undefined2 *)((longlong)puVar24 + 0x84) = 1;
      if (bVar29) goto LAB_142e5fe97;
      FUN_145bdc178();
      bVar29 = DAT_14c872d30 == 0;
      puVar24[0x11] = 0;
      puVar24[0x12] = 0;
      puVar24[0x13] = 0;
      puVar24[0x14] = 0;
      *(undefined4 *)(puVar24 + 0x15) = 0;
      *(undefined2 *)((longlong)puVar24 + 0xac) = 1;
      if (bVar29) {
        FUN_145bdc178();
      }
    }
    else {
      puVar24[9] = 0;
      puVar24[10] = 0;
      puVar24[7] = 0;
      puVar24[8] = 0;
      *(undefined4 *)(puVar24 + 0xb) = 0;
      *(undefined2 *)((longlong)puVar24 + 0x5c) = 1;
LAB_142e5fe78:
      puVar24[0xe] = 0;
      puVar24[0xf] = 0;
      puVar24[0xc] = 0;
      puVar24[0xd] = 0;
      *(undefined4 *)(puVar24 + 0x10) = 0;
      *(undefined2 *)((longlong)puVar24 + 0x84) = 1;
LAB_142e5fe97:
      puVar24[0x13] = 0;
      puVar24[0x14] = 0;
      puVar24[0x11] = 0;
      puVar24[0x12] = 0;
      *(undefined4 *)(puVar24 + 0x15) = 0;
      *(undefined2 *)((longlong)puVar24 + 0xac) = 1;
    }
    puVar2[0x11] = (ulonglong)puVar24;
    *(ulonglong **)(uVar3 + uVar18 * 8) = puVar24;
    uVar18 = uVar18 + 1;
  } while (uVar22 != uVar18);
  local_120 = uVar3;
  uVar14 = (uint)uStack_160;
  local_118 = (uint)uStack_160;
  local_148 = local_178;
  local_138 = local_198;
  local_130 = local_170;
  local_128 = &local_154;
  local_150 = uVar27;
  local_140 = param_2;
  bVar4 = FUN_1447e0190();
  if (((byte)local_19c & bVar4) == 1) {
    uVar23 = DAT_14c8335d8;
    if ((int)(uint)local_190 <= (int)DAT_14c8335d8) {
      uVar23 = (uint)local_190;
    }
  }
  else {
    uVar23 = 0;
  }
  uVar23 = ((undefined *)*local_180 != &DAT_14c82ba00 || *local_188 == 0) + uVar23;
  if ((int)DAT_14c8c27ac < 1) {
    memset(&local_e8,0,0x82);
    local_108 = 0;
    local_110 = (undefined8 *)((ulonglong)local_110 & 0xffffffff00000000);
    local_ec = 0;
    FUN_140e55932(&local_e8,&local_108,&local_110,&local_ec);
    uVar17 = local_ec;
    local_1b0 = (uint *)&local_f9;
    local_1b8 = &local_f8;
    FUN_1457b80ec((ulonglong)local_110 & 0xffffffff,local_ec,&local_ed,local_f4);
    DAT_14c8c27ac = uVar17;
    if ((0 < (int)local_f8) && (DAT_14c8c27ac = uVar17, (int)local_f8 <= (int)uVar17)) {
      DAT_14c8c27ac = local_f8;
    }
  }
  uVar17 = DAT_14c8c27ac;
  if ((int)uVar23 < (int)DAT_14c8c27ac) {
    uVar17 = uVar23;
  }
  uVar27 = 1;
  if ((int)uVar17 < 2) {
    uVar17 = 1;
  }
  uVar23 = uVar14;
  if ((int)uVar17 < (int)uVar14) {
    uVar23 = uVar17;
  }
  if (uVar14 == 0) {
    uVar23 = uVar17;
  }
  iVar21 = (int)local_190;
  if ((int)uVar23 < 2) {
    iVar16 = 0;
    do {
      FUN_142e6072b(&local_150,&local_120,0,iVar16);
      iVar16 = iVar16 + 1;
    } while (iVar21 != iVar16);
  }
  else {
    iVar16 = uVar23 * 6;
    iVar12 = iVar16 + iVar21 + -1;
    iVar20 = -6;
    uVar22 = local_190 & 0xffffffff;
    do {
      if (iVar16 <= iVar21) {
        uVar27 = (longlong)iVar12 / (longlong)iVar16 & 0xffffffff;
        iVar25 = (int)((longlong)iVar12 / (longlong)iVar16);
        uVar22 = (longlong)(iVar25 + iVar21 + -1) / (longlong)iVar25;
        iVar6 = (int)uVar22;
        uVar22 = uVar22 & 0xffffffff;
        if ((int)uVar23 <= iVar6) break;
      }
      iVar25 = (int)uVar27;
      iVar6 = (int)uVar22;
      iVar12 = iVar12 - uVar23;
      iVar16 = iVar16 - uVar23;
      iVar20 = iVar20 + 1;
    } while (iVar20 != 0);
    iVar16 = uVar23 - 1;
    lVar11 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    uVar13 = 6;
    if ((*(byte *)(lVar11 + 0xc60) & 0x37) != 0) {
      uVar13 = 0;
    }
    local_198 = CONCAT44(local_198._4_4_,uVar13);
    FUN_144a85b52(&local_108,1);
    puVar1 = (undefined8 *)(lVar11 + 0x308);
    puVar10 = (uint *)*puVar1;
    if (puVar10 != (uint *)0x0) goto LAB_142e601c2;
    while( true ) {
      uVar14 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar14 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar14 | 1;
        __tlregdtor(&LAB_142e5a5ee);
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
LAB_142e601c2:
      puVar28 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 0x3fU & 0xffffffffffffffc0);
      puVar15 = (uint *)(puVar28 + 0x10);
      uVar14 = puVar10[0x12];
      if (puVar15 <= puVar10 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
        LOCK();
        uVar23 = *puVar10;
        *puVar10 = *puVar10 + uVar14 + 1;
        UNLOCK();
        if ((uVar23 ^ uVar14) != 0xffffffff) break;
        puVar10 = (uint *)*puVar1;
        *puVar10 = 0xffffffff;
        *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
        puVar10[0x12] = 0;
        *puVar1 = puVar10;
        puVar28 = (undefined8 *)((longlong)puVar10 + 0x97U & 0xffffffffffffffc0);
        puVar15 = (uint *)(puVar28 + 0x10);
        uVar14 = 0;
        if (puVar15 <= puVar10 + 0x4000) {
          uVar14 = 1;
          goto LAB_142e60247;
        }
      }
    }
    uVar14 = uVar14 + 1;
LAB_142e60247:
    *(uint **)(puVar10 + 0x10) = puVar15;
    puVar10[0x12] = uVar14;
    *puVar28 = &PTR_FUN_149e002e8;
    *(undefined4 *)(puVar28 + 1) = 0;
    *puVar28 = &PTR_FUN_14a2a0af0;
    puVar28[3] = L"RecordShadingCommands";
    *(undefined4 *)(puVar28 + 4) = 0;
    *(undefined4 *)(puVar28 + 5) = 0;
    *(int *)((longlong)puVar28 + 0x2c) = iVar21;
    *(int *)(puVar28 + 6) = iVar25;
    *(int *)((longlong)puVar28 + 0x34) = iVar6;
    puVar28[7] = &local_120;
    puVar28[8] = &local_150;
    puVar28[9] = &local_108;
    *(char *)(puVar28 + 10) = (char)local_198;
    puVar28[0xb] = 0;
    puVar28[0xc] = 0;
    *(int *)((longlong)puVar28 + 0x24) = iVar6;
    *(int *)(puVar28 + 0xc) = iVar16;
    FUN_142e60fee(puVar28 + 0xb);
    FUN_142e60fb8(puVar28[0xb],iVar16);
    if (puVar28 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar28 + 1) = *(int *)(puVar28 + 1) + 1;
      UNLOCK();
    }
    local_110 = puVar28;
    FUN_142e60992(&local_110);
    local_dc = 0;
    local_e8 = puVar28;
    local_e0 = iVar16;
    cVar5 = FUN_142e60a10(&local_e8,1);
    if (cVar5 == '\0') {
      (**(code **)(*(longlong *)CONCAT44(uStack_104,local_108) + 0x20))
                ((longlong *)CONCAT44(uStack_104,local_108),0xffffffff,0);
    }
    FUN_142e60dbc(&local_e8);
    FUN_144a75412(&local_108);
  }
LAB_142e5fc2d:
  if ((local_154 != 0) && (iVar21 = *(int *)(param_2 + 0x38), (longlong)iVar21 != 0)) {
    lVar11 = *(longlong *)(param_2 + 0x30);
    lVar26 = 0;
    do {
      bVar4 = DAT_14ca84f5a;
      iVar16 = DAT_14c760d84;
      if ((*(int *)(lVar11 + lVar26) != -1) && (*(longlong *)(lVar11 + 8 + lVar26) == 0)) {
        uVar7 = FUN_140029432(param_1[4],*(undefined8 *)(lVar11 + 0x10 + lVar26),0);
        *(undefined8 *)(lVar11 + 8 + lVar26) = uVar7;
        if ((iVar16 == 0) || ((bVar4 & 1) == 0)) {
          *(undefined4 *)(lVar11 + lVar26) = 0xffffffff;
        }
      }
      lVar26 = lVar26 + 0x88;
    } while ((longlong)iVar21 * 0x88 != lVar26);
  }
  if (local_168 != 0) {
    piVar19 = (int *)((local_168 - 8) - (ulonglong)*(uint *)(local_168 - 8));
    LOCK();
    *piVar19 = *piVar19 + -1;
    UNLOCK();
    if (*piVar19 == 0) {
      if (*(longlong *)(piVar19 + 0x10) - (longlong)piVar19 == 0x10000) {
        lVar11 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar11 = FUN_145bdc178();
        }
        FUN_140028df4(lVar11,piVar19);
      }
      else {
        FUN_144705e74(piVar19);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142e604e8 FUN_142e604e8 body=78 status=ok
// SIG undefined FUN_142e604e8(void)

undefined8 * FUN_142e604e8(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)FUN_14001cc68(0x38,8);
  *param_2 = puVar6;
  *puVar6 = &PTR_FUN_14a2a0aa0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  puVar6[5] = *(undefined8 *)(param_1 + 0x28);
  puVar6[6] = uVar5;
  puVar6[3] = uVar3;
  puVar6[4] = uVar4;
  puVar6[1] = uVar1;
  puVar6[2] = uVar2;
  return puVar6 + 1;
}



// FUNCTION 142e60536 FUN_142e60536 body=5 status=ok
// SIG undefined FUN_142e60536(void)

longlong FUN_142e60536(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 142e6053c FUN_142e6053c body=29 status=ok
// SIG undefined FUN_142e6053c(void)

void FUN_142e6053c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142e6055a FUN_142e6055a body=29 status=ok
// SIG undefined FUN_142e6055a(void)

undefined8 FUN_142e6055a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142e60578 FUN_142e60578 body=435 status=ok
// SIG undefined FUN_142e60578(void)

void FUN_142e60578(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  ulonglong _Size;
  int *piVar8;
  void *_Dst;
  
  uVar3 = (ulonglong)param_2;
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar3,8);
  }
  _Size = uVar3 * 8;
  _Src = (void *)*param_1;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_142e605c7;
  while( true ) {
    FUN_14472e504(puVar1);
    puVar4 = (uint *)*puVar1;
LAB_142e605c7:
    _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    if (puVar6 <= puVar4 + 0x4000) break;
    if (0x1ff4 < param_2) {
      puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
      *puVar4 = 0xffffffff;
      puVar4[0x12] = 0;
      _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
      *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 2 + 0x18;
      *puVar4 = 1;
      goto LAB_142e60654;
    }
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
        goto LAB_142e60649;
      }
    }
  }
  uVar7 = puVar4[0x12] + 1;
LAB_142e60649:
  *(uint **)(puVar4 + 0x10) = puVar6 + 2;
  puVar4[0x12] = uVar7;
LAB_142e60654:
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src != (void *)0x0) {
    uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
    if (uVar3 != 0) {
      if (uVar3 < _Size) {
        _Size = uVar3;
      }
      memcpy(_Dst,_Src,_Size);
    }
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
  *param_1 = _Dst;
  return;
}



// FUNCTION 142e6072b FUN_142e6072b body=615 status=ok
// SIG undefined FUN_142e6072b(void)

void FUN_142e6072b(longlong *param_1,longlong *param_2,int param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  char cVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  ushort uVar15;
  longlong *plVar16;
  longlong lVar17;
  uint *puVar18;
  bool bVar19;
  
  uVar11 = *(undefined8 *)(*param_2 + (longlong)param_3 * 8);
  lVar5 = param_1[1];
  plVar16 = (longlong *)((longlong)param_4 * 0x28 + *(longlong *)(*param_1 + 0x18));
  if (*(int *)(lVar5 + 0x20) == 0) {
    *(undefined1 *)((longlong)plVar16 + 0x22) = 1;
  }
  else {
    uVar15 = *(ushort *)(plVar16 + 4);
    lVar17 = lVar5 + 8;
    if (*(longlong *)(lVar5 + 0x18) != 0) {
      lVar17 = *(longlong *)(lVar5 + 0x18);
    }
    bVar19 = (*(uint *)(lVar17 + (ulonglong)(uVar15 >> 5) * 4) & 1 << ((byte)uVar15 & 0x1f)) != 0;
    *(bool *)((longlong)plVar16 + 0x22) = bVar19;
    if (!bVar19) goto LAB_142e608e7;
  }
  cVar10 = FUN_1446fc653(plVar16);
  if (cVar10 != '\0') {
    uVar15 = *(ushort *)(plVar16 + 4);
    lVar17 = *(longlong *)(param_1[2] + 0x30);
    lVar5 = (ulonglong)uVar15 * 0x80 + (ulonglong)uVar15 * 8;
    puVar1 = (uint *)(lVar17 + lVar5);
    puVar18 = puVar1 + 10;
    *puVar1 = (uint)uVar15;
    *(undefined8 *)puVar18 = uVar11;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
    puVar1[0x16] = 0;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    *(undefined1 *)(puVar1 + 0x1c) = 1;
    plVar14 = (longlong *)param_1[1];
    lVar6 = *plVar14;
    if (lVar6 != 0) {
      LOCK();
      *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
      UNLOCK();
      plVar14 = (longlong *)param_1[1];
    }
    pbVar7 = (byte *)param_1[3];
    uVar4 = *(undefined4 *)param_1[4];
    uVar15 = *(ushort *)(*plVar16 + 0x44);
    *(uint *)(plVar16 + 2) = (uint)*(ushort *)(plVar16 + 4);
    *(uint *)((longlong)plVar16 + 0x14) = (uint)((uVar15 & 4) == 0);
    *(uint *)(plVar16 + 3) = *pbVar7 >> 2 & 1;
    *(undefined4 *)((longlong)plVar16 + 0x1c) = uVar4;
    FUN_1448a2d16(*(undefined8 *)(*plVar16 + 0x10),puVar18,0);
    puVar8 = (undefined8 *)*plVar16;
    if ((puVar8[5] != 0) || (puVar8[6] != 0)) {
      FUN_144aa9dca(*(undefined8 *)*puVar8,puVar18,plVar14 + 6,plVar16 + 2,lVar6);
    }
    lVar17 = lVar17 + lVar5;
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
          plVar12 = (longlong *)FUN_14001cc68(0x10,8);
          plVar12[1] = lVar6;
          plVar14 = DAT_14ca843c0;
          plVar13 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar12 = (longlong)plVar14;
              LOCK();
              bVar19 = plVar14 != DAT_14ca843c0;
              plVar13 = plVar12;
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
              *plVar12 = (longlong)plVar13;
              LOCK();
              bVar19 = plVar13 != DAT_14ca843c8;
              plVar14 = plVar12;
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
    lVar5 = *(longlong *)(*plVar16 + 0x28);
    *(longlong *)(lVar17 + 0x10) = lVar5;
    *(undefined8 *)(lVar17 + 0x18) = *(undefined8 *)(*plVar16 + 0x30);
    uVar4 = *(undefined4 *)((longlong)plVar16 + 0x14);
    lVar6 = plVar16[3];
    uVar9 = *(undefined4 *)((longlong)plVar16 + 0x1c);
    *(int *)(lVar17 + 0x78) = (int)plVar16[2];
    *(undefined4 *)(lVar17 + 0x7c) = uVar4;
    *(int *)(lVar17 + 0x80) = (int)lVar6;
    *(undefined4 *)(lVar17 + 0x84) = uVar9;
    if (lVar5 != 0) {
      uVar11 = FUN_1431e2306(lVar5,0);
      *(undefined8 *)(lVar17 + 8) = uVar11;
      if (*(longlong *)(lVar17 + 0x10) == 0) {
        return;
      }
      LOCK();
      *(int *)param_1[5] = *(int *)param_1[5] + 1;
      UNLOCK();
      return;
    }
    *(undefined8 *)(lVar17 + 8) = 0;
    return;
  }
  uVar15 = *(ushort *)(plVar16 + 4);
LAB_142e608e7:
  *(undefined4 *)
   (*(longlong *)(param_1[2] + 0x30) + (ulonglong)uVar15 * 0x80 + (ulonglong)uVar15 * 8) =
       0xffffffff;
  return;
}



// FUNCTION 142e60992 FUN_142e60992 body=125 status=ok
// SIG undefined FUN_142e60992(void)

void FUN_142e60992(longlong *param_1)

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
    FUN_142e612ba(&local_18);
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



// FUNCTION 142e60a10 FUN_142e60a10 body=939 status=ok
// SIG undefined FUN_142e60a10(void)

ulonglong FUN_142e60a10(longlong *param_1,byte param_2)

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
      FUN_142e60992(param_1);
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
      goto LAB_142e60b96;
    }
  }
  else {
    uVar11 = (ulonglong)*(uint *)(lVar8 + 0x34);
  }
  local_c0 = 0;
  local_e0 = 0;
LAB_142e60b96:
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
      if ((local_e1 & bVar14) != 0) goto LAB_142e60ce2;
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
        FUN_142e6072b(uVar4,uVar3,(int)param_1[1],iVar10);
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
        goto LAB_142e60ce4;
      }
    }
    if (iVar12 < iVar2 && (char)local_c0 == '\0') {
      QueryPerformanceCounter(&local_88);
      auVar16._0_8_ = ((double)local_88.QuadPart * DAT_14c83f420 + 16777216.0) * 10000000.0 + 0.5;
      auVar16._8_8_ = 0;
      auVar17 = roundpd(auVar16,auVar16,1);
      if (local_e0 < (longlong)auVar17._0_8_ - local_d0) {
        *(undefined1 *)((longlong)param_1 + 0xc) = 1;
LAB_142e60ce2:
        uVar11 = 0;
LAB_142e60ce4:
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
    else if (iVar2 <= iVar12) goto LAB_142e60ce2;
    lVar8 = *param_1;
  } while( true );
}



// FUNCTION 142e60dbc FUN_142e60dbc body=73 status=ok
// SIG undefined FUN_142e60dbc(void)

void FUN_142e60dbc(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    if (*(char *)((longlong)param_1 + 0xc) == '\x01') {
      FUN_142e612ba(param_1,(int)param_1[1]);
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
                    /* WARNING: Could not recover jumptable at 0x000142e60dfb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 142e60e06 FUN_142e60e06 body=434 status=ok
// SIG undefined FUN_142e60e06(void)

undefined8 * FUN_142e60e06(undefined8 *param_1,int param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  int *piVar3;
  undefined4 uVar4;
  longlong lVar5;
  int *piVar6;
  
  *param_1 = &PTR_FUN_14a2a0af0;
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
  FUN_142e6128a(lVar2,uVar4,param_3);
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
          __tlregdtor(&LAB_142e5a5ee);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        piVar3 = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar6;
        if (piVar3 == (int *)0x0) goto LAB_142e60ed0;
      }
      _aligned_free(piVar3);
    }
  }
LAB_142e60ed0:
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
          __tlregdtor(&LAB_142e5a5ee);
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



// FUNCTION 142e60fb8 FUN_142e60fb8 body=53 status=ok
// SIG undefined FUN_142e60fb8(void)

void FUN_142e60fb8(longlong param_1,int param_2)

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



// FUNCTION 142e60fee FUN_142e60fee body=667 status=ok
// SIG undefined FUN_142e60fee(void)

void FUN_142e60fee(undefined8 *param_1)

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
  if (puVar5 != (uint *)0x0) goto LAB_142e610e9;
  while( true ) {
    uVar7 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318);
    if ((uVar7 & 1) == 0) {
      *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x318) = uVar7 | 1;
      __tlregdtor(&LAB_142e5a5ee);
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
LAB_142e610e9:
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
        goto LAB_142e61163;
      }
    }
  }
  uVar7 = uVar7 + 1;
LAB_142e61163:
  *(uint **)(puVar5 + 0x10) = puVar9;
  puVar5[0x12] = uVar7;
  uVar6 = ((longlong)_Src + 0xffffU & 0xffffffffffff0000) - (longlong)_Src;
  if (uVar6 == 0 || _Src == (void *)0x0) {
    if (_Src == (void *)0x0) goto LAB_142e6120a;
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
        __tlregdtor(&LAB_142e5a5ee);
      }
      lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      _Memory = *(int **)(lVar2 + 0x310);
      *(int **)(lVar2 + 0x310) = piVar10;
      if (_Memory == (int *)0x0) goto LAB_142e6120a;
    }
    _aligned_free(_Memory);
  }
LAB_142e6120a:
  *param_1 = _Dst;
  return;
}



// FUNCTION 142e6128a FUN_142e6128a body=47 status=ok
// SIG undefined FUN_142e6128a(void)

void FUN_142e6128a(longlong param_1,int param_2)

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



// FUNCTION 142e612ba FUN_142e612ba body=369 status=ok
// SIG undefined FUN_142e612ba(void)

void FUN_142e612ba(longlong *param_1,int param_2)

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
  plVar2[5] = (longlong)&PTR_FUN_14a2a0b00;
  *plVar2 = lVar5;
  local_48 = 0;
  *(undefined1 *)((longlong)plVar2 + 0xc) = local_4c;
  *(int *)(plVar2 + 1) = local_50;
  FUN_142e60dbc(&local_48);
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
  FUN_142e60dbc(&local_58);
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



// FUNCTION 142e6144a FUN_142e6144a body=450 status=ok
// SIG undefined FUN_142e6144a(void)

void FUN_142e6144a(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
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
    *param_2 = &PTR_FUN_14a2a0b00;
    puVar6 = param_3;
  }
  else {
    *param_2 = &PTR_LAB_14a2a0b40;
    puVar1 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x330
             );
    puVar5 = (uint *)*puVar1;
    if (puVar5 != (uint *)0x0) goto LAB_142e61527;
    while( true ) {
      uVar7 = *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
      if ((uVar7 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar7 | 1;
        __tlregdtor(&LAB_142e5a5ee);
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
LAB_142e61527:
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
          goto LAB_142e615a1;
        }
      }
    }
    uVar7 = uVar7 + 1;
LAB_142e615a1:
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



// FUNCTION 142e6160c FUN_142e6160c body=26 status=ok
// SIG undefined FUN_142e6160c(void)

undefined8 FUN_142e6160c(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 != '\0') {
    FUN_142e60a10(param_2,0);
  }
  return 0;
}



// FUNCTION 142e61626 FUN_142e61626 body=72 status=ok
// SIG undefined FUN_142e61626(void)

undefined8
FUN_142e61626(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4,char param_5
             )

{
  if (param_5 != '\0') {
    FUN_142e60a10(param_3,0);
  }
  FUN_142e6144a(param_1,param_2 + 0x28,param_2,param_3,param_4);
  return 0;
}



// FUNCTION 142e616a0 FUN_142e616a0 body=26 status=ok
// SIG undefined FUN_142e616a0(void)

undefined8 FUN_142e616a0(undefined8 param_1,undefined8 *param_2,char param_3)

{
  if (param_3 != '\0') {
    FUN_142e60a10(*param_2,0);
  }
  return 0;
}



// FUNCTION 142e616ba FUN_142e616ba body=70 status=ok
// SIG undefined FUN_142e616ba(void)

undefined8
FUN_142e616ba(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             char param_5)

{
  if (param_5 != '\0') {
    FUN_142e60a10(*param_3,0);
  }
  param_2[5] = &PTR_LAB_14a2a0b40;
  *param_2 = *param_3;
  *param_1 = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
             TTaskDelegateDummy::vftable;
  return 0;
}



// FUNCTION 142e61700 FUN_142e61700 body=179 status=ok
// SIG undefined FUN_142e61700(void)

void FUN_142e61700(undefined8 param_1,ulonglong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  int *_Memory;
  int *piVar4;
  
  uVar2 = *param_2;
  FUN_142e60dbc(uVar2);
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
          __tlregdtor(&LAB_142e5a5ee);
        }
        lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar3 + 0x310);
        *(int **)(lVar3 + 0x310) = piVar4;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x000142e6177b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      _aligned_free(_Memory);
      return;
    }
  }
  return;
}



// FUNCTION 142e617c2 FUN_142e617c2 body=547 status=ok
// SIG undefined FUN_142e617c2(void)

longlong * FUN_142e617c2(longlong *param_1,int param_2)

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



// FUNCTION 142e619e6 FUN_142e619e6 body=658 status=ok
// SIG undefined FUN_142e619e6(void)

void FUN_142e619e6(longlong param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  byte bVar4;
  ushort uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  char cVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  int iVar15;
  longlong *plVar16;
  int iVar17;
  bool bVar18;
  
  piVar2 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  iVar15 = *piVar2;
  if (iVar15 == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    iVar15 = *piVar2;
  }
  if ((iVar15 == 0x60000000) || (iVar15 == 0)) {
    *piVar2 = 0x40000010;
  }
  if (0 < *(int *)(param_1 + 0xd4)) {
    iVar17 = 0;
    do {
      lVar7 = *(longlong *)(param_1 + 0xb8);
      plVar16 = (longlong *)
                (((longlong)iVar17 + (longlong)*(int *)(param_1 + 0xd0)) * 0x28 +
                *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x18));
      if (*(int *)(lVar7 + 0x20) == 0) {
        *(undefined1 *)((longlong)plVar16 + 0x22) = 1;
LAB_142e61a9c:
        cVar9 = FUN_1446fc653(plVar16);
        if (cVar9 != '\0') {
          uVar11 = FUN_144821ef4(*(undefined8 *)(param_1 + 0xa8));
          plVar14 = *(longlong **)(param_1 + 0xb8);
          lVar7 = *plVar14;
          if (lVar7 != 0) {
            LOCK();
            *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
            UNLOCK();
            plVar14 = *(longlong **)(param_1 + 0xb8);
          }
          uVar6 = *(undefined4 *)(param_1 + 0xcc);
          uVar5 = *(ushort *)(*plVar16 + 0x44);
          *(uint *)(plVar16 + 2) = (uint)*(ushort *)(plVar16 + 4);
          *(uint *)((longlong)plVar16 + 0x14) = (uint)((uVar5 & 4) == 0);
          *(uint *)(plVar16 + 3) = *(uint *)(param_1 + 0xd8) >> 2 & 1;
          *(undefined4 *)((longlong)plVar16 + 0x1c) = uVar6;
          FUN_1448a2d16(*(undefined8 *)(*plVar16 + 0x10),uVar11,0);
          puVar8 = (undefined8 *)*plVar16;
          if ((puVar8[5] != 0) || (puVar8[6] != 0)) {
            FUN_144aa9dca(*(undefined8 *)*puVar8,uVar11,plVar14 + 6,plVar16 + 2,lVar7);
          }
          if (lVar7 != 0) {
            LOCK();
            puVar1 = (uint *)(lVar7 + 8);
            uVar3 = *puVar1;
            *puVar1 = *puVar1 - 1;
            UNLOCK();
            if ((uVar3 & 0x3fffffff) == 1) {
              puVar1 = (uint *)(lVar7 + 8);
              LOCK();
              uVar3 = *puVar1;
              *puVar1 = *puVar1 | 0x40000000;
              UNLOCK();
              if ((uVar3 >> 0x1e & 1) == 0) {
                bVar4 = *(byte *)(lVar7 + 0xd);
                plVar12 = (longlong *)FUN_14001cc68(0x10,8);
                plVar12[1] = lVar7;
                plVar14 = DAT_14ca843c0;
                plVar13 = DAT_14ca843c8;
                if ((bVar4 & 2) == 0) {
                  do {
                    *plVar12 = (longlong)plVar14;
                    LOCK();
                    bVar18 = plVar14 != DAT_14ca843c0;
                    plVar13 = plVar12;
                    if (bVar18) {
                      plVar14 = DAT_14ca843c0;
                      plVar13 = DAT_14ca843c0;
                    }
                    DAT_14ca843c0 = plVar13;
                    UNLOCK();
                  } while (bVar18);
                }
                else {
                  do {
                    *plVar12 = (longlong)plVar13;
                    LOCK();
                    bVar18 = plVar13 != DAT_14ca843c8;
                    plVar14 = plVar12;
                    if (bVar18) {
                      plVar13 = DAT_14ca843c8;
                      plVar14 = DAT_14ca843c8;
                    }
                    DAT_14ca843c8 = plVar14;
                    UNLOCK();
                  } while (bVar18);
                }
              }
            }
          }
          FUN_142e61ce6(*(undefined8 *)(param_1 + 0xa8),
                        *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + 0x28),uVar11,plVar16);
        }
      }
      else {
        lVar10 = lVar7 + 8;
        if (*(longlong *)(lVar7 + 0x18) != 0) {
          lVar10 = *(longlong *)(lVar7 + 0x18);
        }
        bVar18 = (*(uint *)(lVar10 + (ulonglong)(*(ushort *)(plVar16 + 4) >> 5) * 4) >>
                  (*(ushort *)(plVar16 + 4) & 0x1f) & 1) != 0;
        *(bool *)((longlong)plVar16 + 0x22) = bVar18;
        if (bVar18) goto LAB_142e61a9c;
      }
      iVar17 = iVar17 + 1;
    } while (iVar17 < *(int *)(param_1 + 0xd4));
  }
  FUN_1447850c6(*(undefined8 *)(param_1 + 0xa8));
  if ((iVar15 == 0x60000000) || (iVar15 == 0)) {
    *piVar2 = iVar15;
  }
  plVar16 = *(longlong **)(param_1 + 0xc0);
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar16 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar2 = (int *)((longlong)plVar16 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142e61c3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar16 + 0x10))(plVar16);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142e61c78 FUN_142e61c78 body=110 status=ok
// SIG undefined FUN_142e61c78(void)

undefined8 * FUN_142e61c78(undefined8 *param_1,int param_2)

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



// FUNCTION 142e61ce6 FUN_142e61ce6 body=643 status=ok
// SIG undefined FUN_142e61ce6(void)

void FUN_142e61ce6(ulonglong *param_1,undefined8 param_2,longlong param_3,longlong *param_4)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = *(ushort *)(param_4 + 4);
  uVar6 = *(ulonglong *)(*param_4 + 0x28);
  uVar14 = FUN_140029432(param_1,uVar6,0);
  param_1[0x37] = uVar6;
  puVar15 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar16 = puVar15 + 3;
  if ((undefined8 *)param_1[1] < puVar16) {
    FUN_140023dd8(param_1,0x20);
    puVar15 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar16 = puVar15 + 3;
  }
  *param_1 = (ulonglong)puVar16;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar15;
  param_1[6] = (ulonglong)(puVar15 + 1);
  puVar15[1] = 0;
  *puVar15 = &PTR_LAB_14a37d340;
  puVar15[2] = uVar14;
  if (DAT_14ca84f5e == '\x01') {
    puVar15 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar16 = puVar15 + 4;
    if ((undefined8 *)param_1[1] < puVar16) {
      FUN_140023dd8(param_1,0x28);
      puVar15 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar16 = puVar15 + 4;
    }
    *param_1 = (ulonglong)puVar16;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar15;
    param_1[6] = (ulonglong)(puVar15 + 1);
    lVar10 = param_4[2];
    lVar11 = param_4[3];
    puVar15[1] = 0;
    *puVar15 = &PTR_LAB_14a1e78b8;
    local_58._0_4_ = (undefined4)lVar10;
    local_58._4_4_ = (undefined4)((ulonglong)lVar10 >> 0x20);
    uStack_50._0_4_ = (undefined4)lVar11;
    uStack_50._4_4_ = (undefined4)((ulonglong)lVar11 >> 0x20);
    *(undefined4 *)(puVar15 + 2) = (undefined4)local_58;
    *(undefined4 *)((longlong)puVar15 + 0x14) = local_58._4_4_;
    *(undefined4 *)(puVar15 + 3) = (undefined4)uStack_50;
    *(undefined4 *)((longlong)puVar15 + 0x1c) = uStack_50._4_4_;
    local_58 = lVar10;
    uStack_50 = lVar11;
  }
  iVar12 = *(int *)(param_3 + 0x30) + *(int *)(param_3 + 0x20);
  iVar13 = iVar12 + *(int *)(param_3 + 0x40);
  if (iVar13 != 0 && SCARRY4(iVar12,*(int *)(param_3 + 0x40)) == iVar13 < 0) {
    puVar15 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar16 = puVar15 + 0xb;
    local_60 = param_2;
    if ((undefined8 *)param_1[1] < puVar16) {
      FUN_140023dd8(param_1,0x60);
      puVar15 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar16 = puVar15 + 0xb;
    }
    *param_1 = (ulonglong)puVar16;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar15;
    param_1[6] = (ulonglong)(puVar15 + 1);
    uVar14 = *(undefined8 *)(param_3 + 0x38);
    uVar2 = *(undefined4 *)(param_3 + 0x40);
    uVar7 = *(undefined8 *)(param_3 + 0x28);
    uVar3 = *(undefined4 *)(param_3 + 0x30);
    uVar8 = *(undefined8 *)(param_3 + 0x18);
    uVar4 = *(undefined4 *)(param_3 + 0x20);
    uVar9 = *(undefined8 *)(param_3 + 8);
    uVar5 = *(undefined4 *)(param_3 + 0x10);
    puVar15[1] = 0;
    *puVar15 = &PTR_FUN_14a1e7fa8;
    puVar15[2] = uVar6;
    puVar15[3] = uVar9;
    *(undefined4 *)(puVar15 + 4) = uVar5;
    puVar15[5] = uVar8;
    *(undefined4 *)(puVar15 + 6) = uVar4;
    puVar15[7] = uVar7;
    *(undefined4 *)(puVar15 + 8) = uVar3;
    puVar15[9] = uVar14;
    *(undefined4 *)(puVar15 + 10) = uVar2;
    *(undefined8 *)(param_3 + 8) = 0;
    *(undefined4 *)(param_3 + 0x10) = 0;
    *(undefined8 *)(param_3 + 0x18) = 0;
    *(undefined4 *)(param_3 + 0x20) = 0;
    *(undefined8 *)(param_3 + 0x28) = 0;
    *(undefined4 *)(param_3 + 0x30) = 0;
    *(undefined8 *)(param_3 + 0x38) = 0;
    *(undefined4 *)(param_3 + 0x40) = 0;
    param_2 = local_60;
  }
  puVar15 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar16 = puVar15 + 4;
  if ((undefined8 *)param_1[1] < puVar16) {
    FUN_140023dd8(param_1,0x28);
    puVar15 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar16 = puVar15 + 4;
  }
  *param_1 = (ulonglong)puVar16;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar15;
  param_1[6] = (ulonglong)(puVar15 + 1);
  puVar15[1] = 0;
  *puVar15 = &PTR_LAB_14a1e7fd0;
  puVar15[2] = param_2;
  *(uint *)(puVar15 + 3) = (uint)uVar1 << 4;
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e61f6a FUN_142e61f6a body=174 status=ok
// SIG undefined FUN_142e61f6a(void)

undefined8 * FUN_142e61f6a(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  *param_1 = &PTR_FUN_14a2a0ba0;
  lVar4 = param_1[0x3a];
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
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142e62018 FUN_142e62018 body=1040 status=ok
// SIG undefined FUN_142e62018(void)

void FUN_142e62018(longlong param_1,ulonglong *param_2)

{
  uint *puVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  byte bVar5;
  ushort uVar6;
  undefined4 uVar7;
  char cVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong **pplVar15;
  undefined1 *_Src;
  longlong *plVar16;
  undefined8 *puVar17;
  bool bVar18;
  undefined1 auStack_108 [32];
  longlong *local_e8;
  undefined4 local_e0;
  undefined8 local_d0;
  undefined8 local_c8;
  longlong *local_c0;
  longlong **local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar9 = puVar17 + 0x11;
  if ((undefined8 *)param_2[1] < puVar9) {
    FUN_140023dd8(param_2,0x90);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar9 = puVar17 + 0x11;
  }
  *param_2 = (ulonglong)puVar9;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_FUN_14a1fb978;
  puVar17[3] = 0;
  *(int *)(puVar17 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x24) = 8;
  }
  else {
    pplVar15 = &local_c0;
    if (local_b8 != (longlong **)0x0) {
      pplVar15 = local_b8;
    }
    FUN_1446fe144(puVar17 + 2,local_b0,0);
    puVar9 = (undefined8 *)puVar17[3];
    if ((undefined8 *)puVar17[3] == (undefined8 *)0x0) {
      puVar9 = puVar17 + 2;
    }
    memcpy(puVar9,pplVar15,(longlong)local_b0);
  }
  puVar17[0xd] = 0;
  *(int *)(puVar17 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar17 + 5,local_60,0);
    puVar9 = (undefined8 *)puVar17[0xd];
    if ((undefined8 *)puVar17[0xd] == (undefined8 *)0x0) {
      puVar9 = puVar17 + 5;
    }
    memcpy(puVar9,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar17 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar17 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar17 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar17 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (longlong **)0x0) {
    FUN_1400020a8();
  }
  local_d0 = *(undefined8 *)(param_1 + 0x1f0);
  local_c8 = *(undefined8 *)(param_1 + 0x1f8);
  FUN_142e5f3bc(&local_c0,*(undefined8 *)(param_1 + 0x1b8),*(undefined8 *)(param_1 + 0x1e0));
  plVar13 = local_c0;
  if ((DAT_14ca19690 == '\x01') &&
     ((longlong *)(*(longlong *)(param_1 + 0x200) + 0x30d8) != local_c0 + 1)) {
    FUN_14725cb18();
  }
  if ((*(byte *)(param_1 + 0x1c8) & 1) == 0) {
    lVar14 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0x20);
    if (lVar14 != 0) {
      plVar16 = *(longlong **)(*(longlong *)(param_1 + 0x1c0) + 0x18);
      plVar3 = plVar16 + lVar14 * 5;
      do {
        if ((int)plVar13[4] == 0) {
          *(undefined1 *)((longlong)plVar16 + 0x22) = 1;
LAB_142e6225b:
          cVar8 = FUN_1446fc653(plVar16);
          if (cVar8 != '\0') {
            uVar10 = FUN_144821ef4(param_2);
            plVar12 = (longlong *)*plVar13;
            if (plVar12 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar12 + 1) = *(int *)(plVar12 + 1) + 1;
              UNLOCK();
              plVar13 = local_c0;
            }
            uVar7 = *(undefined4 *)(param_1 + 0x1dc);
            uVar6 = *(ushort *)(*plVar16 + 0x44);
            *(uint *)(plVar16 + 2) = (uint)*(ushort *)(plVar16 + 4);
            *(uint *)((longlong)plVar16 + 0x14) = (uint)((uVar6 & 4) == 0);
            *(uint *)(plVar16 + 3) = *(uint *)(param_1 + 0x1c8) >> 2 & 1;
            *(undefined4 *)((longlong)plVar16 + 0x1c) = uVar7;
            FUN_1448a2d16(*(undefined8 *)(*plVar16 + 0x10),uVar10,0);
            puVar9 = (undefined8 *)*plVar16;
            if ((puVar9[5] != 0) || (puVar9[6] != 0)) {
              local_e8 = plVar12;
              FUN_144aa9dca(*(undefined8 *)*puVar9,uVar10,plVar13 + 6,plVar16 + 2);
            }
            if (plVar12 != (longlong *)0x0) {
              LOCK();
              puVar1 = (uint *)(plVar12 + 1);
              uVar4 = *puVar1;
              *puVar1 = *puVar1 - 1;
              UNLOCK();
              if ((uVar4 & 0x3fffffff) == 1) {
                puVar1 = (uint *)(plVar12 + 1);
                LOCK();
                uVar4 = *puVar1;
                *puVar1 = *puVar1 | 0x40000000;
                UNLOCK();
                if ((uVar4 >> 0x1e & 1) == 0) {
                  bVar5 = *(byte *)((longlong)plVar12 + 0xd);
                  plVar11 = (longlong *)FUN_14001cc68(0x10,8);
                  plVar11[1] = (longlong)plVar12;
                  plVar13 = DAT_14ca843c0;
                  plVar12 = DAT_14ca843c8;
                  if ((bVar5 & 2) == 0) {
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
            plVar13 = local_c0;
            FUN_142e61ce6(param_2,local_c0[5],uVar10,plVar16);
          }
        }
        else {
          plVar12 = plVar13 + 1;
          if ((longlong *)plVar13[3] != (longlong *)0x0) {
            plVar12 = (longlong *)plVar13[3];
          }
          bVar18 = (*(uint *)((longlong)plVar12 + (ulonglong)(*(ushort *)(plVar16 + 4) >> 5) * 4) >>
                    (*(ushort *)(plVar16 + 4) & 0x1f) & 1) != 0;
          *(bool *)((longlong)plVar16 + 0x22) = bVar18;
          if (bVar18) goto LAB_142e6225b;
        }
        plVar16 = plVar16 + 5;
      } while (plVar16 != plVar3);
    }
  }
  else {
    local_e0 = *(undefined4 *)(param_1 + 0x1dc);
    local_e8 = plVar13;
    FUN_142e5fa3c(param_2,*(undefined8 *)(param_1 + 0x1c0),param_1 + 0x1c8,param_1 + 0x1d0);
  }
  if (local_b8 != (longlong **)0x0) {
    LOCK();
    pplVar15 = local_b8 + 1;
    *(int *)pplVar15 = *(int *)pplVar15 + -1;
    UNLOCK();
    if (*(int *)pplVar15 == 0) {
      (*(code *)**local_b8)(local_b8);
      LOCK();
      piVar2 = (int *)((longlong)local_b8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (*(code *)(*local_b8)[2])(local_b8);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142e6242a FUN_142e6242a body=31 status=ok
// SIG undefined FUN_142e6242a(void)

undefined8 FUN_142e6242a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


